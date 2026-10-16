import json,re,collections,os,shutil
m=json.load(open('tools/matches.json'))
# re-run vote selection preferring real names: matches.json holds best vote only; reload full votes by rerunning matcher logic is costly, so keep best but skip generic
gen=re.compile(r'^(fn_|func_|lbl_|sub_|dtor_|ctor_|@|\$\$|zz_|\.|__sinit_)')
rename={}
for a,v in m.items():
    nm=v[2]
    if not gen.match(nm): rename[int(a,16)]=(nm,v[4],v[3])
# uniqueness
cnt=collections.Counter(n for n,_,_ in rename.values())
src='config/symbols.txt'
if not os.path.exists(src+'.orig'): shutil.copy(src,src+'.orig')
out=[];done=0;used=set()
for l in open(src+'.orig'):
    mm=re.match(r'(\S+) = \.(text|init):0x([0-9A-F]+);(.*)',l)
    if mm and int(mm.group(3),16) in rename and mm.group(1).startswith('fn_'):
        a=int(mm.group(3),16);n=rename[a][0]
        if cnt[n]>1 or n in used: n=f'{n}_{a:08X}'
        used.add(n);done+=1
        l=f'{n} = .{mm.group(2)}:0x{mm.group(3)};{mm.group(4)}\n'
    out.append(l)
open(src,'w').writelines(out)
print('renamed',done)
# library map
lib=collections.defaultdict(list)
for a,(n,o,r) in rename.items():
    key=o.split('/')[0]+'/'+o.split('/')[1] if o.count('/')>=2 else (o or 'unknown-object')
    lib[key].append(a)
rows=sorted(((min(v),max(v),k,len(v)) for k,v in lib.items()))
with open('tools/libmap.txt','w') as f:
    for lo,hi,k,n in rows: f.write(f'{lo:08X}-{hi:08X} {n:5d} {k}\n')
print(open('tools/libmap.txt').read())
