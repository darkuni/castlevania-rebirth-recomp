#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// WPADiCreateKeyFor3rd
void f_801CC740(Ctx* __restrict c) {
  trace_call(0x801CC740u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CC740
  c->r[0]=c->lr; // 801CC744
  W32(c->r[1]+0x000000A4u,c->r[0]); // 801CC748
  c->r[11]=c->r[1]+0x000000A0u; // 801CC74C
  c->lr=0x801CC754u; f_802079EC(c); // 801CC750
  c->r[4]=0u+0x802D0000u; // 801CC754
  c->r[30]=0u+0x80280000u; // 801CC758
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801CC75C
  c->r[4]=c->r[4]+0x00004FD0u; // 801CC760
  c->r[30]=c->r[30]+0xFFFFAF58u; // 801CC764
  c->r[16]=R32(c->r[4]+c->r[0]); // 801CC768
  c->lr=0x801CC770u; f_801915E0(c); // 801CC76C
  c->r[0]=rotl(c->r[3],24)&0x000000FFu; // 801CC770
  W8(c->r[13]+0xFFFFB60Bu,c->r[0]); // 801CC774
  c->lr=0x801CC77Cu; f_801915E0(c); // 801CC778
  c->r[0]=rotl(c->r[3],16)&0x0000003Fu; // 801CC77C
  W8(c->r[13]+0xFFFFB60Au,c->r[0]); // 801CC780
  c->lr=0x801CC788u; f_801915E0(c); // 801CC784
  c->r[6]=R8(c->r[13]+0xFFFFB60Au); // 801CC788
  c->r[3]=rotl(c->r[3],8)&0x000000FFu; // 801CC78C
  c->r[0]=R8(c->r[13]+0xFFFFB60Bu); // 801CC790
  c->r[4]=c->r[3]&0x0000004Cu; cr0(c,c->r[4]); // 801CC794
  c->r[3]=0u+0x92490000u; // 801CC798
  c->r[11]=0u+0x000000FFu; // 801CC79C
  c->r[7]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[6]); // 801CC7A0
  c->r[5]=0u+0x80810000u; // 801CC7A4
  c->r[8]=c->r[3]+0x00002493u; // 801CC7A8
  W8(c->r[13]+0xFFFFB609u,c->r[4]); // 801CC7AC
  c->r[0]=c->r[5]+0xFFFF8081u; // 801CC7B0
  c->r[5]=0u+0x00000002u; // 801CC7B4
  c->r[10]=c->r[4]+c->r[7]; // 801CC7B8
  W8(c->r[13]+0xFFFFB608u,c->r[11]); // 801CC7BC
  c->r[9]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[10])>>32); // 801CC7C0
  c->r[3]=c->r[30]+0x00000960u; // 801CC7C4
  c->r[7]=0u+0x00000000u; // 801CC7C8
  c->r[9]=rotl(c->r[9],25)&0x01FFFFFFu; // 801CC7CC
  c->r[9]=(uint32_t)((int32_t)c->r[9]*(int32_t)255); // 801CC7D0
  c->r[9]=c->r[10]-c->r[9]; // 801CC7D4
  c->r[10]=rotl(c->r[9],0)&0x000000FFu; // 801CC7D8
  c->r[8]=(uint32_t)(((int64_t)(int32_t)c->r[8]*(int64_t)(int32_t)c->r[10])>>32); // 801CC7DC
  c->r[8]=c->r[8]+c->r[10]; // 801CC7E0
  c->r[8]=sraw(c,c->r[8],2); // 801CC7E4
  c->r[9]=rotl(c->r[8],1)&0x00000001u; // 801CC7E8
  c->r[8]=c->r[8]+c->r[9]; // 801CC7EC
  c->r[8]=(uint32_t)((int32_t)c->r[8]*(int32_t)7); // 801CC7F0
  c->r[8]=c->r[10]-c->r[8]; // 801CC7F4
  c->r[15]=rotl(c->r[8],0)&0x000000FFu; // 801CC7F8
  c->r[8]=(uint32_t)((int32_t)c->r[15]*(int32_t)6); // 801CC7FC
  c->r[14]=rotl(c->r[8],0)&0x000000FFu; // 801CC800
  c->ctr=c->r[5]; // 801CC804
L_801CC808:;
  c->r[5]=rotl(c->r[10],0)&0x000000FFu; // 801CC808
  c->r[8]=rotl(c->r[7],0)&0x000000FFu; // 801CC80C
  c->r[9]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[6]); // 801CC810
  c->r[7]=c->r[7]+0x00000005u; // 801CC814
  c->r[5]=c->r[1]+0x00000028u; // 801CC818
  c->r[5]=c->r[5]+c->r[8]; // 801CC81C
  c->r[9]=c->r[4]+c->r[9]; // 801CC820
  c->r[8]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[9])>>32); // 801CC824
  c->r[8]=rotl(c->r[8],25)&0x01FFFFFFu; // 801CC828
  c->r[8]=(uint32_t)((int32_t)c->r[8]*(int32_t)255); // 801CC82C
  c->r[8]=c->r[9]-c->r[8]; // 801CC830
  c->r[9]=rotl(c->r[8],0)&0x000000FFu; // 801CC834
  c->r[8]=(uint32_t)((int32_t)c->r[9]*(int32_t)c->r[6]); // 801CC838
  c->r[9]=R8(c->r[3]+c->r[9]); // 801CC83C
  W8(c->r[5]+0x00000000u,c->r[9]); // 801CC840
  c->r[9]=c->r[4]+c->r[8]; // 801CC844
  c->r[8]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[9])>>32); // 801CC848
  c->r[8]=rotl(c->r[8],25)&0x01FFFFFFu; // 801CC84C
  c->r[8]=(uint32_t)((int32_t)c->r[8]*(int32_t)255); // 801CC850
  c->r[8]=c->r[9]-c->r[8]; // 801CC854
  c->r[9]=rotl(c->r[8],0)&0x000000FFu; // 801CC858
  c->r[8]=(uint32_t)((int32_t)c->r[9]*(int32_t)c->r[6]); // 801CC85C
  c->r[9]=R8(c->r[3]+c->r[9]); // 801CC860
  W8(c->r[5]+0x00000001u,c->r[9]); // 801CC864
  c->r[9]=c->r[4]+c->r[8]; // 801CC868
  c->r[8]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[9])>>32); // 801CC86C
  c->r[8]=rotl(c->r[8],25)&0x01FFFFFFu; // 801CC870
  c->r[8]=(uint32_t)((int32_t)c->r[8]*(int32_t)255); // 801CC874
  c->r[8]=c->r[9]-c->r[8]; // 801CC878
  c->r[9]=rotl(c->r[8],0)&0x000000FFu; // 801CC87C
  c->r[8]=(uint32_t)((int32_t)c->r[9]*(int32_t)c->r[6]); // 801CC880
  c->r[9]=R8(c->r[3]+c->r[9]); // 801CC884
  W8(c->r[5]+0x00000002u,c->r[9]); // 801CC888
  c->r[9]=c->r[4]+c->r[8]; // 801CC88C
  c->r[8]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[9])>>32); // 801CC890
  c->r[8]=rotl(c->r[8],25)&0x01FFFFFFu; // 801CC894
  c->r[8]=(uint32_t)((int32_t)c->r[8]*(int32_t)255); // 801CC898
  c->r[8]=c->r[9]-c->r[8]; // 801CC89C
  c->r[9]=rotl(c->r[8],0)&0x000000FFu; // 801CC8A0
  c->r[8]=(uint32_t)((int32_t)c->r[9]*(int32_t)c->r[6]); // 801CC8A4
  c->r[9]=R8(c->r[3]+c->r[9]); // 801CC8A8
  W8(c->r[5]+0x00000003u,c->r[9]); // 801CC8AC
  c->r[9]=c->r[4]+c->r[8]; // 801CC8B0
  c->r[8]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[9])>>32); // 801CC8B4
  c->r[8]=rotl(c->r[8],25)&0x01FFFFFFu; // 801CC8B8
  c->r[8]=(uint32_t)((int32_t)c->r[8]*(int32_t)255); // 801CC8BC
  c->r[8]=c->r[9]-c->r[8]; // 801CC8C0
  c->r[10]=rotl(c->r[8],0)&0x000000FFu; // 801CC8C4
  c->r[8]=R8(c->r[3]+c->r[10]); // 801CC8C8
  W8(c->r[5]+0x00000004u,c->r[8]); // 801CC8CC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801CC808; } // 801CC8D0
  c->r[19]=c->r[30]+0x00000930u; // 801CC8D4
  W8(c->r[13]+0xFFFFB60Bu,c->r[10]); // 801CC8D8
  c->r[17]=c->r[14]+c->r[19]; // 801CC8DC
  c->r[4]=R8(c->r[19]+c->r[14]); // 801CC8E0
  c->r[5]=R8(c->r[17]+0x00000001u); // 801CC8E4
  c->r[3]=c->r[30]+0x00001260u; // 801CC8E8
  c->r[6]=R8(c->r[17]+0x00000002u); // 801CC8EC
  c->r[7]=R8(c->r[17]+0x00000003u); // 801CC8F0
  c->r[8]=R8(c->r[17]+0x00000004u); // 801CC8F4
  c->r[9]=R8(c->r[17]+0x00000005u); // 801CC8F8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CC8FC
  c->lr=0x801CC904u; f_801CD210(c); // 801CC900
  c->r[27]=R8(c->r[1]+0x0000002Fu); // 801CC904
  c->r[3]=c->r[30]+0x0000127Cu; // 801CC908
  W32(c->r[1]+0x00000008u,c->r[27]); // 801CC90C
  c->r[28]=R8(c->r[1]+0x00000030u); // 801CC910
  W32(c->r[1]+0x0000000Cu,c->r[28]); // 801CC914
  c->r[29]=R8(c->r[1]+0x00000031u); // 801CC918
  c->r[26]=R8(c->r[1]+0x0000002Eu); // 801CC91C
  c->r[25]=R8(c->r[1]+0x0000002Du); // 801CC920
  c->r[24]=R8(c->r[1]+0x0000002Cu); // 801CC924
  c->r[10]=c->r[26]|c->r[26]; // 801CC928
  c->r[23]=R8(c->r[1]+0x0000002Bu); // 801CC92C
  c->r[9]=c->r[25]|c->r[25]; // 801CC930
  c->r[22]=R8(c->r[1]+0x0000002Au); // 801CC934
  c->r[8]=c->r[24]|c->r[24]; // 801CC938
  c->r[21]=R8(c->r[1]+0x00000029u); // 801CC93C
  c->r[7]=c->r[23]|c->r[23]; // 801CC940
  W32(c->r[1]+0x00000010u,c->r[29]); // 801CC944
  c->r[6]=c->r[22]|c->r[22]; // 801CC948
  c->r[4]=R8(c->r[1]+0x00000028u); // 801CC94C
  c->r[5]=c->r[21]|c->r[21]; // 801CC950
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CC954
  c->lr=0x801CC95Cu; f_801CD210(c); // 801CC958
  c->r[31]=c->r[30]+0x00000960u; // 801CC95C
  c->r[18]=R8(c->r[1]+0x00000028u); // 801CC960
  c->r[0]=R8(c->r[31]+c->r[27]); // 801CC964
  c->r[3]=c->r[30]+0x000012A4u; // 801CC968
  W32(c->r[1]+0x00000008u,c->r[0]); // 801CC96C
  c->r[0]=R8(c->r[31]+c->r[28]); // 801CC970
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801CC974
  c->r[0]=R8(c->r[31]+c->r[29]); // 801CC978
  W32(c->r[1]+0x00000010u,c->r[0]); // 801CC97C
  c->r[4]=R8(c->r[31]+c->r[18]); // 801CC980
  c->r[5]=R8(c->r[31]+c->r[21]); // 801CC984
  c->r[6]=R8(c->r[31]+c->r[22]); // 801CC988
  c->r[7]=R8(c->r[31]+c->r[23]); // 801CC98C
  c->r[8]=R8(c->r[31]+c->r[24]); // 801CC990
  c->r[9]=R8(c->r[31]+c->r[25]); // 801CC994
  c->r[10]=R8(c->r[31]+c->r[26]); // 801CC998
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CC99C
  c->lr=0x801CC9A4u; f_801CD210(c); // 801CC9A0
  c->lr=0x801CC9A8u; f_8018D6A0(c); // 801CC9A4
  c->r[0]=R8(c->r[31]+c->r[21]); // 801CC9A8
  c->r[11]=R8(c->r[31]+c->r[22]); // 801CC9AC
  W32(c->r[1]+0x00000034u,c->r[3]); // 801CC9B0
  c->r[3]=rotl(c->r[0],29)&0xE0000000u; // 801CC9B4
  c->r[7]=rotl(c->r[0],1)&0x00000001u; // 801CC9B8
  c->r[8]=R8(c->r[31]+c->r[28]); // 801CC9BC
  c->r[3]=c->r[3]-c->r[7]; // 801CC9C0
  c->r[5]=rotl(c->r[11],29)&0xE0000000u; // 801CC9C4
  c->r[6]=rotl(c->r[3],3)&0xFFFFFFFFu; // 801CC9C8
  c->r[4]=rotl(c->r[11],1)&0x00000001u; // 801CC9CC
  c->r[7]=c->r[6]+c->r[7]; // 801CC9D0
  c->r[12]=rotl(c->r[8],1)&0x00000001u; // 801CC9D4
  c->r[6]=c->r[5]-c->r[4]; // 801CC9D8
  c->r[5]=rotl(c->r[8],29)&0xE0000000u; // 801CC9DC
  c->r[10]=rotl(c->r[6],3)&0xFFFFFFFFu; // 801CC9E0
  c->r[9]=rotl(c->r[7],0)&0x000000FFu; // 801CC9E4
  c->r[10]=c->r[10]+c->r[4]; // 801CC9E8
  c->r[4]=c->r[5]-c->r[12]; // 801CC9EC
  c->r[5]=rotl(c->r[4],3)&0xFFFFFFFFu; // 801CC9F0
  c->r[18]=R8(c->r[31]+c->r[18]); // 801CC9F4
  c->r[20]=c->r[5]+c->r[12]; // 801CC9F8
  c->r[14]=R8(c->r[19]+c->r[14]); // 801CC9FC
  c->r[3]=R8(c->r[31]+c->r[29]); // 801CCA00
  c->r[6]=addc(c,~c->r[9],0x00000008u,1); // 801CCA04
  c->r[7]=c->r[14]^c->r[18]; // 801CCA08
  c->r[4]=R8(c->r[17]+0x00000002u); // 801CCA0C
  c->r[6]=sraw(c,c->r[7],(c->r[6])&63); // 801CCA10
  c->r[12]=R8(c->r[31]+c->r[24]); // 801CCA14
  c->r[7]=((c->r[9])&0x20)?0u:(c->r[7]<<((c->r[9])&31)); // 801CCA18
  c->r[5]=R8(c->r[17]+0x00000001u); // 801CCA1C
  c->r[6]=c->r[7]|c->r[6]; // 801CCA20
  c->r[10]=rotl(c->r[10],0)&0x000000FFu; // 801CCA24
  c->r[9]=c->r[5]^c->r[12]; // 801CCA28
  c->r[14]=rotl(c->r[3],29)&0xE0000000u; // 801CCA2C
  c->r[5]=addc(c,~c->r[10],0x00000008u,1); // 801CCA30
  c->r[19]=rotl(c->r[3],1)&0x00000001u; // 801CCA34
  c->r[14]=c->r[14]-c->r[19]; // 801CCA38
  c->r[11]=c->r[4]^c->r[11]; // 801CCA3C
  c->r[7]=rotl(c->r[14],3)&0xFFFFFFFFu; // 801CCA40
  c->r[5]=sraw(c,c->r[9],(c->r[5])&63); // 801CCA44
  c->r[10]=((c->r[10])&0x20)?0u:(c->r[9]<<((c->r[10])&31)); // 801CCA48
  c->r[14]=rotl(c->r[20],0)&0x000000FFu; // 801CCA4C
  c->r[4]=addc(c,~c->r[14],0x00000008u,1); // 801CCA50
  c->r[19]=c->r[7]+c->r[19]; // 801CCA54
  c->r[5]=c->r[10]|c->r[5]; // 801CCA58
  c->r[7]=R8(c->r[31]+c->r[26]); // 801CCA5C
  c->r[9]=R8(c->r[17]+0x00000003u); // 801CCA60
  c->r[4]=sraw(c,c->r[11],(c->r[4])&63); // 801CCA64
  c->r[10]=rotl(c->r[19],0)&0x000000FFu; // 801CCA68
  c->r[11]=((c->r[14])&0x20)?0u:(c->r[11]<<((c->r[14])&31)); // 801CCA6C
  c->r[9]=c->r[9]^c->r[7]; // 801CCA70
  c->r[6]=rotl(c->r[6],0)&0x000000FFu; // 801CCA74
  c->r[4]=c->r[11]|c->r[4]; // 801CCA78
  c->r[19]=addc(c,~c->r[10],0x00000008u,1); // 801CCA7C
  c->r[11]=((c->r[10])&0x20)?0u:(c->r[9]<<((c->r[10])&31)); // 801CCA80
  c->r[10]=sraw(c,c->r[9],(c->r[19])&63); // 801CCA84
  c->r[9]=R8(c->r[31]+c->r[27]); // 801CCA88
  c->r[11]=c->r[11]|c->r[10]; // 801CCA8C
  c->r[10]=rotl(c->r[4],0)&0x000000FFu; // 801CCA90
  c->r[4]=rotl(c->r[11],0)&0x000000FFu; // 801CCA94
  c->r[11]=c->r[7]+c->r[6]; // 801CCA98
  c->r[6]=c->r[9]+c->r[4]; // 801CCA9C
  c->r[7]=rotl(c->r[5],0)&0x000000FFu; // 801CCAA0
  c->r[5]=c->r[9]^c->r[11]; // 801CCAA4
  c->r[4]=R8(c->r[31]+c->r[23]); // 801CCAA8
  c->r[5]=rotl(c->r[5],0)&0x000000FFu; // 801CCAAC
  c->r[10]=c->r[12]+c->r[10]; // 801CCAB0
  c->r[9]=c->r[4]+c->r[7]; // 801CCAB4
  c->r[7]=c->r[18]^c->r[6]; // 801CCAB8
  c->r[11]=c->r[0]^c->r[9]; // 801CCABC
  c->r[9]=R8(c->r[31]+c->r[25]); // 801CCAC0
  c->r[6]=R8(c->r[17]+0x00000004u); // 801CCAC4
  c->r[14]=rotl(c->r[11],0)&0x000000FFu; // 801CCAC8
  c->r[10]=c->r[9]^c->r[10]; // 801CCACC
  W8(c->r[1]+0x00000038u,c->r[5]); // 801CCAD0
  c->r[19]=rotl(c->r[7],0)&0x000000FFu; // 801CCAD4
  c->r[6]=c->r[6]^c->r[9]; // 801CCAD8
  c->r[20]=rotl(c->r[10],0)&0x000000FFu; // 801CCADC
  c->r[7]=rotl(c->r[12],29)&0xE0000000u; // 801CCAE0
  c->r[5]=rotl(c->r[12],1)&0x00000001u; // 801CCAE4
  c->r[7]=c->r[7]-c->r[5]; // 801CCAE8
  c->r[11]=R8(c->r[17]+0x00000005u); // 801CCAEC
  c->r[12]=rotl(c->r[7],3)&0xFFFFFFFFu; // 801CCAF0
  c->r[10]=rotl(c->r[4],1)&0x00000001u; // 801CCAF4
  c->r[11]=c->r[11]^c->r[3]; // 801CCAF8
  c->r[7]=rotl(c->r[4],29)&0xE0000000u; // 801CCAFC
  c->r[3]=c->r[12]+c->r[5]; // 801CCB00
  c->r[5]=rotl(c->r[6],0)&0x000000FFu; // 801CCB04
  c->r[6]=rotl(c->r[3],0)&0x000000FFu; // 801CCB08
  c->r[3]=c->r[7]-c->r[10]; // 801CCB0C
  c->r[7]=rotl(c->r[11],0)&0x000000FFu; // 801CCB10
  c->r[4]=rotl(c->r[3],3)&0xFFFFFFFFu; // 801CCB14
  c->r[11]=addc(c,~c->r[6],0x00000008u,1); // 801CCB18
  c->r[3]=((c->r[6])&0x20)?0u:(c->r[5]<<((c->r[6])&31)); // 801CCB1C
  c->r[6]=c->r[4]+c->r[10]; // 801CCB20
  c->r[12]=sraw(c,c->r[5],(c->r[11])&63); // 801CCB24
  c->r[10]=rotl(c->r[6],0)&0x000000FFu; // 801CCB28
  c->r[4]=R8(c->r[1]+0x00000038u); // 801CCB2C
  c->r[3]=c->r[3]|c->r[12]; // 801CCB30
  c->r[5]=c->r[14]|c->r[14]; // 801CCB34
  c->r[11]=addc(c,~c->r[10],0x00000008u,1); // 801CCB38
  c->r[12]=((c->r[10])&0x20)?0u:(c->r[7]<<((c->r[10])&31)); // 801CCB3C
  c->r[10]=sraw(c,c->r[7],(c->r[11])&63); // 801CCB40
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 801CCB44
  c->r[10]=c->r[12]|c->r[10]; // 801CCB48
  c->r[6]=c->r[20]|c->r[20]; // 801CCB4C
  c->r[11]=c->r[8]+c->r[3]; // 801CCB50
  c->r[7]=c->r[19]|c->r[19]; // 801CCB54
  c->r[10]=rotl(c->r[10],0)&0x000000FFu; // 801CCB58
  c->r[3]=c->r[30]+0x000012CCu; // 801CCB5C
  c->r[8]=c->r[8]+c->r[10]; // 801CCB60
  c->r[10]=c->r[0]^c->r[11]; // 801CCB64
  c->r[0]=c->r[9]^c->r[8]; // 801CCB68
  c->r[18]=rotl(c->r[10],0)&0x000000FFu; // 801CCB6C
  c->r[17]=rotl(c->r[0],0)&0x000000FFu; // 801CCB70
  c->r[8]=c->r[18]|c->r[18]; // 801CCB74
  c->r[9]=c->r[17]|c->r[17]; // 801CCB78
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CCB7C
  c->lr=0x801CCB84u; f_801CD210(c); // 801CCB80
  c->r[0]=c->r[15]+0x00000002u; // 801CCB84
  c->r[3]=c->r[15]+0x00000001u; // 801CCB88
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801CCB8C
  c->r[11]=R8(c->r[1]+0x00000028u); // 801CCB90
  c->r[10]=rotl(c->r[3],8)&0xFFFFFF00u; // 801CCB94
  c->r[3]=c->r[30]+0x000012E8u; // 801CCB98
  c->r[4]=c->r[18]+c->r[10]; // 801CCB9C
  W32(c->r[1]+0x0000003Cu,c->r[4]); // 801CCBA0
  c->r[7]=c->r[27]+c->r[0]; // 801CCBA4
  c->r[5]=c->r[24]+c->r[0]; // 801CCBA8
  c->r[15]=c->r[26]+c->r[0]; // 801CCBAC
  c->r[4]=c->r[23]+c->r[0]; // 801CCBB0
  W32(c->r[1]+0x00000040u,c->r[4]); // 801CCBB4
  c->r[6]=c->r[17]+c->r[10]; // 801CCBB8
  c->r[4]=R8(c->r[1]+0x00000038u); // 801CCBBC
  c->r[27]=c->r[28]+c->r[0]; // 801CCBC0
  c->r[9]=c->r[25]+c->r[0]; // 801CCBC4
  c->r[8]=c->r[20]+c->r[10]; // 801CCBC8
  c->r[4]=c->r[4]+c->r[10]; // 801CCBCC
  W32(c->r[1]+0x00000044u,c->r[4]); // 801CCBD0
  c->r[4]=c->r[22]+c->r[0]; // 801CCBD4
  c->r[24]=c->r[19]+c->r[10]; // 801CCBD8
  W32(c->r[1]+0x00000048u,c->r[4]); // 801CCBDC
  c->r[4]=c->r[14]+c->r[10]; // 801CCBE0
  c->r[12]=c->r[11]+c->r[10]; // 801CCBE4
  c->r[28]=c->r[11]+c->r[0]; // 801CCBE8
  c->r[26]=c->r[21]+c->r[0]; // 801CCBEC
  c->r[11]=c->r[23]+c->r[10]; // 801CCBF0
  c->r[22]=c->r[22]+c->r[10]; // 801CCBF4
  c->r[10]=c->r[21]+c->r[10]; // 801CCBF8
  c->r[21]=R32(c->r[1]+0x0000003Cu); // 801CCBFC
  c->r[25]=c->r[29]+c->r[0]; // 801CCC00
  c->r[7]=R8(c->r[7]+c->r[31]); // 801CCC04
  c->r[0]=R8(c->r[21]+c->r[31]); // 801CCC08
  c->r[21]=R32(c->r[1]+0x00000040u); // 801CCC0C
  c->r[23]=c->r[0]^c->r[7]; // 801CCC10
  c->r[6]=R8(c->r[6]+c->r[31]); // 801CCC14
  c->r[21]=R8(c->r[21]+c->r[31]); // 801CCC18
  c->r[5]=R8(c->r[5]+c->r[31]); // 801CCC1C
  c->r[21]=c->r[0]^c->r[21]; // 801CCC20
  c->r[0]=R8(c->r[4]+c->r[31]); // 801CCC24
  c->r[4]=c->r[6]^c->r[7]; // 801CCC28
  c->r[6]=c->r[6]^c->r[5]; // 801CCC2C
  c->r[7]=R8(c->r[27]+c->r[31]); // 801CCC30
  c->r[5]=c->r[0]^c->r[5]; // 801CCC34
  c->r[10]=R8(c->r[10]+c->r[31]); // 801CCC38
  c->r[27]=c->r[0]^c->r[7]; // 801CCC3C
  c->r[0]=R8(c->r[9]+c->r[31]); // 801CCC40
  c->r[7]=c->r[10]^c->r[7]; // 801CCC44
  c->r[9]=R8(c->r[8]+c->r[31]); // 801CCC48
  c->r[8]=R8(c->r[25]+c->r[31]); // 801CCC4C
  c->r[25]=R8(c->r[24]+c->r[31]); // 801CCC50
  c->r[24]=c->r[9]^c->r[0]; // 801CCC54
  c->r[10]=R8(c->r[28]+c->r[31]); // 801CCC58
  c->r[28]=c->r[9]^c->r[8]; // 801CCC5C
  c->r[9]=R8(c->r[11]+c->r[31]); // 801CCC60
  c->r[8]=c->r[25]^c->r[8]; // 801CCC64
  c->r[25]=c->r[25]^c->r[10]; // 801CCC68
  c->r[10]=R32(c->r[1]+0x00000044u); // 801CCC6C
  c->r[0]=c->r[9]^c->r[0]; // 801CCC70
  c->r[11]=R32(c->r[1]+0x00000048u); // 801CCC74
  c->r[10]=R8(c->r[10]+c->r[31]); // 801CCC78
  c->r[11]=R8(c->r[11]+c->r[31]); // 801CCC7C
  c->r[9]=R8(c->r[26]+c->r[31]); // 801CCC80
  c->r[26]=c->r[10]^c->r[11]; // 801CCC84
  c->r[15]=R8(c->r[15]+c->r[31]); // 801CCC88
  c->r[10]=c->r[10]^c->r[9]; // 801CCC8C
  c->r[11]=R8(c->r[12]+c->r[31]); // 801CCC90
  c->r[9]=R8(c->r[22]+c->r[31]); // 801CCC94
  c->r[11]=c->r[11]^c->r[15]; // 801CCC98
  W8(c->r[1]+0x00000020u,c->r[21]); // 801CCC9C
  c->r[9]=c->r[9]^c->r[15]; // 801CCCA0
  W8(c->r[1]+0x00000021u,c->r[24]); // 801CCCA4
  W8(c->r[1]+0x00000022u,c->r[4]); // 801CCCA8
  W8(c->r[1]+0x00000023u,c->r[26]); // 801CCCAC
  W8(c->r[1]+0x00000024u,c->r[5]); // 801CCCB0
  W8(c->r[1]+0x00000025u,c->r[8]); // 801CCCB4
  W8(c->r[1]+0x00000026u,c->r[11]); // 801CCCB8
  W8(c->r[1]+0x00000018u,c->r[10]); // 801CCCBC
  W8(c->r[1]+0x00000019u,c->r[6]); // 801CCCC0
  W8(c->r[1]+0x0000001Au,c->r[25]); // 801CCCC4
  W8(c->r[1]+0x0000001Bu,c->r[28]); // 801CCCC8
  W8(c->r[1]+0x0000001Cu,c->r[23]); // 801CCCCC
  W8(c->r[1]+0x0000001Du,c->r[27]); // 801CCCD0
  W8(c->r[1]+0x0000001Eu,c->r[0]); // 801CCCD4
  W8(c->r[1]+0x0000001Fu,c->r[9]); // 801CCCD8
  W8(c->r[1]+0x00000027u,c->r[7]); // 801CCCDC
  W32(c->r[1]+0x00000008u,c->r[7]); // 801CCCE0
  c->r[4]=R8(c->r[1]+0x00000020u); // 801CCCE4
  c->r[5]=R8(c->r[1]+0x00000021u); // 801CCCE8
  c->r[6]=R8(c->r[1]+0x00000022u); // 801CCCEC
  c->r[7]=R8(c->r[1]+0x00000023u); // 801CCCF0
  c->r[8]=R8(c->r[1]+0x00000024u); // 801CCCF4
  c->r[9]=R8(c->r[1]+0x00000025u); // 801CCCF8
  c->r[10]=R8(c->r[1]+0x00000026u); // 801CCCFC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CCD00
  c->lr=0x801CCD08u; f_801CD210(c); // 801CCD04
  c->r[0]=R8(c->r[1]+0x0000001Fu); // 801CCD08
  c->r[3]=c->r[30]+0x00001308u; // 801CCD0C
  W32(c->r[1]+0x00000008u,c->r[0]); // 801CCD10
  c->r[4]=R8(c->r[1]+0x00000018u); // 801CCD14
  c->r[5]=R8(c->r[1]+0x00000019u); // 801CCD18
  c->r[6]=R8(c->r[1]+0x0000001Au); // 801CCD1C
  c->r[7]=R8(c->r[1]+0x0000001Bu); // 801CCD20
  c->r[8]=R8(c->r[1]+0x0000001Cu); // 801CCD24
  c->r[9]=R8(c->r[1]+0x0000001Du); // 801CCD28
  c->r[10]=R8(c->r[1]+0x0000001Eu); // 801CCD2C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CCD30
  c->lr=0x801CCD38u; f_801CD210(c); // 801CCD34
  c->r[3]=0u+0x00000000u; // 801CCD38
  c->r[5]=c->r[1]+0x00000028u; // 801CCD3C
  c->r[3]=addc(c,~c->r[3],0x00000009u,1); // 801CCD40
  c->r[0]=0u+0x00000001u; // 801CCD44
  c->r[4]=R8(c->r[5]+c->r[3]); // 801CCD48
  c->r[3]=addc(c,~c->r[0],0x00000009u,1); // 801CCD4C
  W8(c->r[16]+0x00000914u,c->r[4]); // 801CCD50
  c->r[0]=0u+0x00000002u; // 801CCD54
  c->r[4]=R8(c->r[5]+c->r[3]); // 801CCD58
  c->r[3]=addc(c,~c->r[0],0x00000009u,1); // 801CCD5C
  W8(c->r[16]+0x00000915u,c->r[4]); // 801CCD60
  c->r[0]=0u+0x00000003u; // 801CCD64
  c->r[4]=R8(c->r[5]+c->r[3]); // 801CCD68
  c->r[3]=addc(c,~c->r[0],0x00000009u,1); // 801CCD6C
  c->r[0]=0u+0x00000004u; // 801CCD70
  W8(c->r[16]+0x00000916u,c->r[4]); // 801CCD74
  c->r[3]=R8(c->r[5]+c->r[3]); // 801CCD78
  c->r[0]=addc(c,~c->r[0],0x00000009u,1); // 801CCD7C
  W8(c->r[16]+0x00000917u,c->r[3]); // 801CCD80
  c->r[3]=0u+0x00000005u; // 801CCD84
  c->r[0]=R8(c->r[5]+c->r[0]); // 801CCD88
  c->r[3]=addc(c,~c->r[3],0x00000009u,1); // 801CCD8C
  W8(c->r[16]+0x00000918u,c->r[0]); // 801CCD90
  c->r[0]=0u+0x00000006u; // 801CCD94
  c->r[4]=R8(c->r[5]+c->r[3]); // 801CCD98
  c->r[3]=addc(c,~c->r[0],0x00000009u,1); // 801CCD9C
  W8(c->r[16]+0x00000919u,c->r[4]); // 801CCDA0
  c->r[0]=0u+0x00000007u; // 801CCDA4
  c->r[4]=R8(c->r[5]+c->r[3]); // 801CCDA8
  c->r[3]=addc(c,~c->r[0],0x00000009u,1); // 801CCDAC
  W8(c->r[16]+0x0000091Au,c->r[4]); // 801CCDB0
  c->r[0]=0u+0x00000008u; // 801CCDB4
  c->r[4]=R8(c->r[5]+c->r[3]); // 801CCDB8
  c->r[3]=addc(c,~c->r[0],0x00000009u,1); // 801CCDBC
  W8(c->r[16]+0x0000091Bu,c->r[4]); // 801CCDC0
  c->r[0]=0u+0x00000009u; // 801CCDC4
  c->r[3]=R8(c->r[5]+c->r[3]); // 801CCDC8
  c->r[0]=addc(c,~c->r[0],0x00000009u,1); // 801CCDCC
  W8(c->r[16]+0x0000091Cu,c->r[3]); // 801CCDD0
  c->r[3]=c->r[16]+0x00000924u; // 801CCDD4
  c->r[0]=R8(c->r[5]+c->r[0]); // 801CCDD8
  c->r[4]=c->r[1]+0x00000020u; // 801CCDDC
  W8(c->r[16]+0x0000091Du,c->r[0]); // 801CCDE0
  c->r[5]=0u+0x00000008u; // 801CCDE4
  c->r[0]=R8(c->r[1]+0x00000038u); // 801CCDE8
  W8(c->r[16]+0x0000091Eu,c->r[17]); // 801CCDEC
  W8(c->r[16]+0x0000091Fu,c->r[18]); // 801CCDF0
  W8(c->r[16]+0x00000920u,c->r[19]); // 801CCDF4
  W8(c->r[16]+0x00000921u,c->r[20]); // 801CCDF8
  W8(c->r[16]+0x00000922u,c->r[14]); // 801CCDFC
  W8(c->r[16]+0x00000923u,c->r[0]); // 801CCE00
  c->lr=0x801CCE08u; f_80004364(c); // 801CCE04
  c->r[3]=c->r[16]+0x0000092Cu; // 801CCE08
  c->r[4]=c->r[1]+0x00000018u; // 801CCE0C
  c->r[5]=0u+0x00000008u; // 801CCE10
  c->lr=0x801CCE18u; f_80004364(c); // 801CCE14
  c->r[3]=R32(c->r[1]+0x00000034u); // 801CCE18
  c->lr=0x801CCE20u; f_8018D6E0(c); // 801CCE1C
  c->r[11]=c->r[1]+0x000000A0u; // 801CCE20
  c->lr=0x801CCE28u; f_80207A38(c); // 801CCE24
  c->r[0]=R32(c->r[1]+0x000000A4u); // 801CCE28
  c->lr=c->r[0]; // 801CCE2C
  c->r[1]=c->r[1]+0x000000A0u; // 801CCE30
  return; // 801CCE34
}

// WPADiDecode
void f_801CCE40(Ctx* __restrict c) {
  trace_call(0x801CCE40u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CCE40
  c->r[8]=0u+0x802D0000u; // 801CCE44
  cmps(c,0,(int32_t)c->r[5],0); // 801CCE48
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801CCE4C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CCE50
  c->r[8]=c->r[8]+0x00004FD0u; // 801CCE54
  c->r[7]=0u+0x00000000u; // 801CCE58
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CCE5C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CCE60
  W32(c->r[1]+0x00000010u,c->r[28]); // 801CCE64
  c->r[0]=R32(c->r[8]+c->r[0]); // 801CCE68
  if (crb(c,2)) { goto L_801CD0F8; } // 801CCE6C
  cmpu(c,0,c->r[5],0x00000008u); // 801CCE70
  c->r[3]=c->r[5]+0x00010000u; // 801CCE74
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 801CCE78
  if (!crb(c,1)) { goto L_801CD0A0; } // 801CCE7C
  c->r[8]=rotl(c->r[3],0)&0x0000FFFFu; // 801CCE80
  c->r[3]=c->r[8]+0x00000007u; // 801CCE84
  c->r[3]=rotl(c->r[3],29)&0x1FFFFFFFu; // 801CCE88
  c->ctr=c->r[3]; // 801CCE8C
  cmpu(c,0,c->r[8],0x00000000u); // 801CCE90
  if (!crb(c,1)) { goto L_801CD0A0; } // 801CCE94
L_801CCE98:;
  c->r[29]=rotl(c->r[7],0)&0x0000FFFFu; // 801CCE98
  c->r[3]=c->r[7]+0x00000001u; // 801CCE9C
  c->r[11]=c->r[6]+c->r[29]; // 801CCEA0
  c->r[8]=c->r[7]+0x00000002u; // 801CCEA4
  c->r[10]=rotl(c->r[11],29)&0xE0000000u; // 801CCEA8
  c->r[9]=rotl(c->r[3],0)&0x0000FFFFu; // 801CCEAC
  c->r[12]=rotl(c->r[11],1)&0x00000001u; // 801CCEB0
  c->r[3]=c->r[4]+c->r[29]; // 801CCEB4
  c->r[10]=c->r[10]-c->r[12]; // 801CCEB8
  c->r[11]=c->r[6]+c->r[9]; // 801CCEBC
  c->r[10]=rotl(c->r[10],3)&0xFFFFFFFFu; // 801CCEC0
  c->r[9]=rotl(c->r[8],0)&0x0000FFFFu; // 801CCEC4
  c->r[10]=c->r[10]+c->r[12]; // 801CCEC8
  c->r[8]=c->r[7]+0x00000003u; // 801CCECC
  c->r[12]=rotl(c->r[10],0)&0x000000FFu; // 801CCED0
  c->r[31]=R8(c->r[3]+0x00000000u); // 801CCED4
  c->r[29]=c->r[0]+c->r[12]; // 801CCED8
  c->r[10]=rotl(c->r[11],29)&0xE0000000u; // 801CCEDC
  c->r[30]=R8(c->r[29]+0x0000092Cu); // 801CCEE0
  c->r[12]=rotl(c->r[11],1)&0x00000001u; // 801CCEE4
  c->r[10]=c->r[10]-c->r[12]; // 801CCEE8
  c->r[29]=R8(c->r[29]+0x00000924u); // 801CCEEC
  c->r[11]=rotl(c->r[10],3)&0xFFFFFFFFu; // 801CCEF0
  c->r[30]=c->r[31]^c->r[30]; // 801CCEF4
  c->r[10]=c->r[6]+c->r[9]; // 801CCEF8
  c->r[8]=rotl(c->r[8],0)&0x0000FFFFu; // 801CCEFC
  c->r[9]=c->r[11]+c->r[12]; // 801CCF00
  c->r[11]=c->r[29]+c->r[30]; // 801CCF04
  W8(c->r[3]+0x00000000u,c->r[11]); // 801CCF08
  c->r[11]=rotl(c->r[9],0)&0x000000FFu; // 801CCF0C
  c->r[29]=c->r[0]+c->r[11]; // 801CCF10
  c->r[9]=rotl(c->r[10],29)&0xE0000000u; // 801CCF14
  c->r[11]=rotl(c->r[10],1)&0x00000001u; // 801CCF18
  c->r[30]=R8(c->r[3]+0x00000001u); // 801CCF1C
  c->r[10]=c->r[9]-c->r[11]; // 801CCF20
  c->r[9]=c->r[6]+c->r[8]; // 801CCF24
  c->r[8]=rotl(c->r[10],3)&0xFFFFFFFFu; // 801CCF28
  c->r[12]=R8(c->r[29]+0x0000092Cu); // 801CCF2C
  c->r[10]=c->r[8]+c->r[11]; // 801CCF30
  c->r[31]=R8(c->r[29]+0x00000924u); // 801CCF34
  c->r[8]=c->r[7]+0x00000004u; // 801CCF38
  c->r[11]=c->r[30]^c->r[12]; // 801CCF3C
  c->r[28]=rotl(c->r[10],0)&0x000000FFu; // 801CCF40
  c->r[8]=rotl(c->r[8],0)&0x0000FFFFu; // 801CCF44
  c->r[10]=c->r[6]+c->r[8]; // 801CCF48
  c->r[29]=c->r[0]+c->r[28]; // 801CCF4C
  c->r[8]=c->r[31]+c->r[11]; // 801CCF50
  W8(c->r[3]+0x00000001u,c->r[8]); // 801CCF54
  c->r[8]=rotl(c->r[9],29)&0xE0000000u; // 801CCF58
  c->r[11]=rotl(c->r[9],1)&0x00000001u; // 801CCF5C
  c->r[9]=c->r[8]-c->r[11]; // 801CCF60
  c->r[30]=R8(c->r[3]+0x00000002u); // 801CCF64
  c->r[8]=c->r[7]+0x00000005u; // 801CCF68
  c->r[12]=R8(c->r[29]+0x0000092Cu); // 801CCF6C
  c->r[9]=rotl(c->r[9],3)&0xFFFFFFFFu; // 801CCF70
  c->r[9]=c->r[9]+c->r[11]; // 801CCF74
  c->r[8]=rotl(c->r[8],0)&0x0000FFFFu; // 801CCF78
  c->r[31]=rotl(c->r[9],0)&0x000000FFu; // 801CCF7C
  c->r[11]=R8(c->r[29]+0x00000924u); // 801CCF80
  c->r[9]=c->r[6]+c->r[8]; // 801CCF84
  c->r[8]=c->r[30]^c->r[12]; // 801CCF88
  c->r[8]=c->r[11]+c->r[8]; // 801CCF8C
  W8(c->r[3]+0x00000002u,c->r[8]); // 801CCF90
  c->r[29]=c->r[0]+c->r[31]; // 801CCF94
  c->r[8]=rotl(c->r[10],29)&0xE0000000u; // 801CCF98
  c->r[10]=rotl(c->r[10],1)&0x00000001u; // 801CCF9C
  c->r[8]=c->r[8]-c->r[10]; // 801CCFA0
  c->r[12]=R8(c->r[3]+0x00000003u); // 801CCFA4
  c->r[11]=R8(c->r[29]+0x0000092Cu); // 801CCFA8
  c->r[8]=rotl(c->r[8],3)&0xFFFFFFFFu; // 801CCFAC
  c->r[10]=c->r[8]+c->r[10]; // 801CCFB0
  c->r[30]=R8(c->r[29]+0x00000924u); // 801CCFB4
  c->r[11]=c->r[12]^c->r[11]; // 801CCFB8
  c->r[8]=rotl(c->r[9],29)&0xE0000000u; // 801CCFBC
  c->r[11]=c->r[30]+c->r[11]; // 801CCFC0
  W8(c->r[3]+0x00000003u,c->r[11]); // 801CCFC4
  c->r[10]=rotl(c->r[10],0)&0x000000FFu; // 801CCFC8
  c->r[9]=rotl(c->r[9],1)&0x00000001u; // 801CCFCC
  c->r[12]=c->r[0]+c->r[10]; // 801CCFD0
  c->r[11]=R8(c->r[3]+0x00000004u); // 801CCFD4
  c->r[10]=R8(c->r[12]+0x0000092Cu); // 801CCFD8
  c->r[8]=c->r[8]-c->r[9]; // 801CCFDC
  c->r[8]=rotl(c->r[8],3)&0xFFFFFFFFu; // 801CCFE0
  c->r[12]=R8(c->r[12]+0x00000924u); // 801CCFE4
  c->r[10]=c->r[11]^c->r[10]; // 801CCFE8
  c->r[10]=c->r[12]+c->r[10]; // 801CCFEC
  c->r[8]=c->r[8]+c->r[9]; // 801CCFF0
  W8(c->r[3]+0x00000004u,c->r[10]); // 801CCFF4
  c->r[9]=rotl(c->r[8],0)&0x000000FFu; // 801CCFF8
  c->r[8]=c->r[7]+0x00000006u; // 801CCFFC
  c->r[29]=c->r[0]+c->r[9]; // 801CD000
  c->r[9]=rotl(c->r[8],0)&0x0000FFFFu; // 801CD004
  c->r[31]=R8(c->r[3]+0x00000005u); // 801CD008
  c->r[10]=c->r[6]+c->r[9]; // 801CD00C
  c->r[8]=c->r[7]+0x00000007u; // 801CD010
  c->r[9]=rotl(c->r[10],29)&0xE0000000u; // 801CD014
  c->r[12]=R8(c->r[29]+0x0000092Cu); // 801CD018
  c->r[11]=rotl(c->r[10],1)&0x00000001u; // 801CD01C
  c->r[8]=rotl(c->r[8],0)&0x0000FFFFu; // 801CD020
  c->r[9]=c->r[9]-c->r[11]; // 801CD024
  c->r[30]=R8(c->r[29]+0x00000924u); // 801CD028
  c->r[10]=rotl(c->r[9],3)&0xFFFFFFFFu; // 801CD02C
  c->r[12]=c->r[31]^c->r[12]; // 801CD030
  c->r[9]=c->r[6]+c->r[8]; // 801CD034
  c->r[7]=c->r[7]+0x00000008u; // 801CD038
  c->r[8]=c->r[10]+c->r[11]; // 801CD03C
  c->r[10]=c->r[30]+c->r[12]; // 801CD040
  W8(c->r[3]+0x00000005u,c->r[10]); // 801CD044
  c->r[10]=rotl(c->r[8],0)&0x000000FFu; // 801CD048
  c->r[8]=rotl(c->r[9],29)&0xE0000000u; // 801CD04C
  c->r[9]=rotl(c->r[9],1)&0x00000001u; // 801CD050
  c->r[12]=c->r[0]+c->r[10]; // 801CD054
  c->r[11]=R8(c->r[3]+0x00000006u); // 801CD058
  c->r[8]=c->r[8]-c->r[9]; // 801CD05C
  c->r[10]=R8(c->r[12]+0x0000092Cu); // 801CD060
  c->r[8]=rotl(c->r[8],3)&0xFFFFFFFFu; // 801CD064
  c->r[12]=R8(c->r[12]+0x00000924u); // 801CD068
  c->r[8]=c->r[8]+c->r[9]; // 801CD06C
  c->r[9]=c->r[11]^c->r[10]; // 801CD070
  c->r[9]=c->r[12]+c->r[9]; // 801CD074
  W8(c->r[3]+0x00000006u,c->r[9]); // 801CD078
  c->r[8]=rotl(c->r[8],0)&0x000000FFu; // 801CD07C
  c->r[10]=c->r[0]+c->r[8]; // 801CD080
  c->r[9]=R8(c->r[3]+0x00000007u); // 801CD084
  c->r[8]=R8(c->r[10]+0x0000092Cu); // 801CD088
  c->r[10]=R8(c->r[10]+0x00000924u); // 801CD08C
  c->r[8]=c->r[9]^c->r[8]; // 801CD090
  c->r[8]=c->r[10]+c->r[8]; // 801CD094
  W8(c->r[3]+0x00000007u,c->r[8]); // 801CD098
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801CCE98; } // 801CD09C
L_801CD0A0:;
  c->r[8]=rotl(c->r[7],0)&0x0000FFFFu; // 801CD0A0
  c->r[3]=c->r[5]-c->r[8]; // 801CD0A4
  c->ctr=c->r[3]; // 801CD0A8
  cmpu(c,0,c->r[8],c->r[5]); // 801CD0AC
  if (!crb(c,0)) { goto L_801CD0F8; } // 801CD0B0
L_801CD0B4:;
  c->r[9]=rotl(c->r[7],0)&0x0000FFFFu; // 801CD0B4
  c->r[7]=c->r[7]+0x00000001u; // 801CD0B8
  c->r[8]=c->r[6]+c->r[9]; // 801CD0BC
  c->r[5]=R8(c->r[4]+c->r[9]); // 801CD0C0
  c->r[3]=rotl(c->r[8],29)&0xE0000000u; // 801CD0C4
  c->r[8]=rotl(c->r[8],1)&0x00000001u; // 801CD0C8
  c->r[3]=c->r[3]-c->r[8]; // 801CD0CC
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFFFu; // 801CD0D0
  c->r[3]=c->r[3]+c->r[8]; // 801CD0D4
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 801CD0D8
  c->r[8]=c->r[0]+c->r[3]; // 801CD0DC
  c->r[3]=R8(c->r[8]+0x0000092Cu); // 801CD0E0
  c->r[8]=R8(c->r[8]+0x00000924u); // 801CD0E4
  c->r[3]=c->r[5]^c->r[3]; // 801CD0E8
  c->r[3]=c->r[8]+c->r[3]; // 801CD0EC
  W8(c->r[4]+c->r[9],c->r[3]); // 801CD0F0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801CD0B4; } // 801CD0F4
L_801CD0F8:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CD0F8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CD0FC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CD100
  c->r[28]=R32(c->r[1]+0x00000010u); // 801CD104
  c->r[1]=c->r[1]+0x00000020u; // 801CD108
  return; // 801CD10C
}

// WPADiClearMemBlock
void f_801CD110(Ctx* __restrict c) {
  trace_call(0x801CD110u);
  c->r[4]=0u+0x802D0000u; // 801CD110
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801CD114
  c->r[4]=c->r[4]+0x00004FD0u; // 801CD118
  c->r[0]=0u+0x00000000u; // 801CD11C
  c->r[3]=R32(c->r[4]+c->r[3]); // 801CD120
  W32(c->r[3]+0x00000998u,c->r[0]); // 801CD124
  W32(c->r[3]+0x0000099Cu,c->r[0]); // 801CD128
  W16(c->r[3]+0x000009A0u,c->r[0]); // 801CD12C
  W32(c->r[3]+0x000009A4u,c->r[0]); // 801CD130
  W32(c->r[3]+0x000009A8u,c->r[0]); // 801CD134
  return; // 801CD138
}

// WPADWriteExtReg
void f_801CD140(Ctx* __restrict c) {
  trace_call(0x801CD140u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CD140
  c->r[0]=c->lr; // 801CD144
  W32(c->r[1]+0x00000034u,c->r[0]); // 801CD148
  c->r[11]=c->r[1]+0x00000030u; // 801CD14C
  c->lr=0x801CD154u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CD150
  c->r[8]=0u+0x802D0000u; // 801CD154
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801CD158
  c->r[8]=c->r[8]+0x00004FD0u; // 801CD15C
  c->r[24]=c->r[3]|c->r[3]; // 801CD160
  c->r[31]=R32(c->r[8]+c->r[0]); // 801CD164
  c->r[25]=c->r[4]|c->r[4]; // 801CD168
  c->r[26]=c->r[5]|c->r[5]; // 801CD16C
  c->r[27]=c->r[6]|c->r[6]; // 801CD170
  c->r[28]=c->r[7]|c->r[7]; // 801CD174
  c->lr=0x801CD17Cu; f_8018D6A0(c); // 801CD178
  c->r[29]=R32(c->r[31]+0x000008BCu); // 801CD17C
  c->r[30]=R32(c->r[31]+0x000008DCu); // 801CD180
  c->lr=0x801CD188u; f_8018D6E0(c); // 801CD184
  cmps(c,0,(int32_t)c->r[29],-1); // 801CD188
  if (crb(c,2)) { goto L_801CD1CC; } // 801CD18C
  cmps(c,0,(int32_t)c->r[30],0); // 801CD190
  if (!crb(c,2)) { goto L_801CD1A0; } // 801CD194
  c->r[29]=0u+0xFFFFFFFEu; // 801CD198
  goto L_801CD1CC; // 801CD19C
L_801CD1A0:;
  c->r[4]=c->r[25]|c->r[25]; // 801CD1A0
  c->r[5]=c->r[26]|c->r[26]; // 801CD1A4
  c->r[7]=c->r[28]|c->r[28]; // 801CD1A8
  c->r[3]=c->r[31]+0x00000160u; // 801CD1AC
  c->r[6]=c->r[27]|0x04A40000u; // 801CD1B0
  c->lr=0x801CD1B8u; f_801C79A0(c); // 801CD1B4
  c->r[4]=0u-c->r[3]; // 801CD1B8
  c->r[0]=0u+0xFFFFFFFEu; // 801CD1BC
  c->r[3]=c->r[4]|c->r[3]; // 801CD1C0
  c->r[3]=sraw(c,c->r[3],31); // 801CD1C4
  c->r[29]=c->r[0]&~c->r[3]; // 801CD1C8
L_801CD1CC:;
  cmps(c,0,(int32_t)c->r[29],0); // 801CD1CC
  if (crb(c,2)) { goto L_801CD1F0; } // 801CD1D0
  cmps(c,0,(int32_t)c->r[28],0); // 801CD1D4
  if (crb(c,2)) { goto L_801CD1F0; } // 801CD1D8
  c->r[12]=c->r[28]|c->r[28]; // 801CD1DC
  c->r[3]=c->r[24]|c->r[24]; // 801CD1E0
  c->r[4]=c->r[29]|c->r[29]; // 801CD1E4
  c->ctr=c->r[12]; // 801CD1E8
  if (true) { c->lr=0x801CD1F0u; dispatch(c,c->ctr); } // 801CD1EC
L_801CD1F0:;
  c->r[11]=c->r[1]+0x00000030u; // 801CD1F0
  c->r[3]=c->r[29]|c->r[29]; // 801CD1F4
  c->lr=0x801CD1FCu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CD1F8
  c->r[0]=R32(c->r[1]+0x00000034u); // 801CD1FC
  c->lr=c->r[0]; // 801CD200
  c->r[1]=c->r[1]+0x00000030u; // 801CD204
  return; // 801CD208
}

// DEBUGPrint
void f_801CD210(Ctx* __restrict c) {
  trace_call(0x801CD210u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CD210
  if (!crb(c,6)) { goto L_801CD238; } // 801CD214
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 801CD218
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 801CD21C
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[3]);} // 801CD220
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[4]);} // 801CD224
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[5]);} // 801CD228
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[6]);} // 801CD22C
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[7]);} // 801CD230
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[8]);} // 801CD234
L_801CD238:;
  W32(c->r[1]+0x00000008u,c->r[3]); // 801CD238
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801CD23C
  W32(c->r[1]+0x00000010u,c->r[5]); // 801CD240
  W32(c->r[1]+0x00000014u,c->r[6]); // 801CD244
  W32(c->r[1]+0x00000018u,c->r[7]); // 801CD248
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 801CD24C
  W32(c->r[1]+0x00000020u,c->r[9]); // 801CD250
  W32(c->r[1]+0x00000024u,c->r[10]); // 801CD254
  c->r[1]=c->r[1]+0x00000070u; // 801CD258
  return; // 801CD25C
}

// fn_801CD260
void f_801CD260(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CD260
  c->r[0]=c->r[3]+0x000000F0u; // 801CD264
  {uint32_t ea=c->r[2]+0xFFFFA1E8u; c->f[6]=c->ps1[6]=RF32(ea);} // 801CD268
  c->r[4]=0u+0xFFFFFFFFu; // 801CD26C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CD270
  c->r[31]=0u+0x00000000u; // 801CD274
  {uint32_t ea=c->r[2]+0xFFFFA1ECu; c->f[5]=c->ps1[5]=RF32(ea);} // 801CD278
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CD27C
  c->r[30]=c->r[3]+0x00000114u; // 801CD280
  {uint32_t ea=c->r[2]+0xFFFFA1F0u; c->f[4]=c->ps1[4]=RF32(ea);} // 801CD284
  W8(c->r[3]+0x00000554u,c->r[31]); // 801CD288
  {uint32_t ea=c->r[2]+0xFFFFA1F4u; c->f[3]=c->ps1[3]=RF32(ea);} // 801CD28C
  {uint32_t ea=c->r[13]+0xFFFFAAECu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CD290
  {uint32_t ea=c->r[3]+0x000000D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CD294
  c->f[0]=c->ps1[0]=S(c->f[6]+c->f[0]); // 801CD298
  c->r[5]=R16(c->r[3]+0x00000504u); // 801CD29C
  {uint32_t ea=c->r[2]+0xFFFFA1E0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CD2A0
  {uint32_t ea=c->r[3]+0x00000528u; WF32(ea,c->f[0]);} // 801CD2A4
  c->r[11]=R32(c->r[3]+0x000000DCu); // 801CD2A8
  {uint32_t ea=c->r[13]+0xFFFFAAECu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CD2AC
  c->r[10]=R32(c->r[3]+0x000000E0u); // 801CD2B0
  c->f[0]=c->ps1[0]=S(c->f[5]-c->f[0]); // 801CD2B4
  {uint32_t ea=c->r[3]+0x00000530u; WF32(ea,c->f[0]);} // 801CD2B8
  {uint32_t ea=c->r[13]+0xFFFFAAECu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CD2BC
  c->f[0]=c->ps1[0]=S(c->f[4]+c->f[0]); // 801CD2C0
  {uint32_t ea=c->r[3]+0x0000052Cu; WF32(ea,c->f[0]);} // 801CD2C4
  {uint32_t ea=c->r[13]+0xFFFFAAECu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CD2C8
  c->f[0]=c->ps1[0]=S(c->f[3]-c->f[0]); // 801CD2CC
  {uint32_t ea=c->r[3]+0x00000534u; WF32(ea,c->f[0]);} // 801CD2D0
  {uint32_t ea=c->r[13]+0xFFFFAAF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CD2D4
  c->f[0]=c->ps1[0]=S(c->f[5]/c->f[0]); // 801CD2D8
  {uint32_t ea=c->r[3]+0x00000538u; WF32(ea,c->f[0]);} // 801CD2DC
  {uint32_t ea=c->r[13]+0xFFFFAAF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CD2E0
  c->f[0]=c->ps1[0]=S(c->f[6]/c->f[0]); // 801CD2E4
  {uint32_t ea=c->r[3]+0x0000053Cu; WF32(ea,c->f[0]);} // 801CD2E8
  {uint32_t ea=c->r[13]+0xFFFFAAE0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CD2EC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 801CD2F0
  {uint32_t ea=c->r[3]+0x00000540u; WF32(ea,c->f[0]);} // 801CD2F4
  {uint32_t ea=c->r[13]+0xFFFFB644u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CD2F8
  {uint32_t ea=c->r[3]+0x00000548u; WF32(ea,c->f[0]);} // 801CD2FC
  {uint32_t ea=c->r[13]+0xFFFFB640u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CD300
  {uint32_t ea=c->r[3]+0x00000544u; WF32(ea,c->f[0]);} // 801CD304
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 801CD308
  W32(c->r[3]+0x00000008u,c->r[31]); // 801CD30C
  W32(c->r[3]+0x00000004u,c->r[31]); // 801CD310
  W32(c->r[3]+0x00000000u,c->r[31]); // 801CD314
  W16(c->r[3]+0x00000500u,c->r[31]); // 801CD318
  W16(c->r[3]+0x00000502u,c->r[5]); // 801CD31C
  W8(c->r[3]+0x0000005Eu,c->r[31]); // 801CD320
  W8(c->r[3]+0x000004FEu,c->r[31]); // 801CD324
  c->r[8]=R32(c->r[13]+0xFFFFB628u); // 801CD328
  c->r[7]=R32(c->r[13]+0xFFFFB62Cu); // 801CD32C
  W32(c->r[3]+0x0000002Cu,c->r[7]); // 801CD330
  {uint32_t ea=c->r[3]+0x000004ECu; WF32(ea,c->f[5]);} // 801CD334
  {uint32_t ea=c->r[3]+0x000004F0u; WF32(ea,c->f[2]);} // 801CD338
  c->r[6]=R32(c->r[3]+0x000004ECu); // 801CD33C
  W32(c->r[3]+0x00000028u,c->r[8]); // 801CD340
  c->r[5]=R32(c->r[3]+0x000004F0u); // 801CD344
  W32(c->r[3]+0x00000020u,c->r[8]); // 801CD348
  W32(c->r[3]+0x00000024u,c->r[7]); // 801CD34C
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[2]);} // 801CD350
  {uint32_t ea=c->r[3]+0x000004E4u; WF32(ea,c->f[5]);} // 801CD354
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[5]);} // 801CD358
  {uint32_t ea=c->r[3]+0x000004E8u; WF32(ea,c->f[2]);} // 801CD35C
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[2]);} // 801CD360
  c->r[12]=R32(c->r[13]+0xFFFFB628u); // 801CD364
  c->r[7]=R32(c->r[13]+0xFFFFB62Cu); // 801CD368
  W32(c->r[3]+0x00000040u,c->r[7]); // 801CD36C
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[2]);} // 801CD370
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[2]);} // 801CD374
  c->r[7]=R32(c->r[3]+0x00000014u); // 801CD378
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[6]);} // 801CD37C
  c->r[9]=R32(c->r[3]+0x0000000Cu); // 801CD380
  c->r[8]=R32(c->r[3]+0x00000010u); // 801CD384
  W32(c->r[3]+0x0000003Cu,c->r[12]); // 801CD388
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[2]);} // 801CD38C
  {uint32_t ea=c->r[3]+0x00000054u; WF32(ea,c->f[5]);} // 801CD390
  {uint32_t ea=c->r[3]+0x00000058u; WF32(ea,c->f[2]);} // 801CD394
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[1]);} // 801CD398
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[2]);} // 801CD39C
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[2]);} // 801CD3A0
  {uint32_t ea=c->r[3]+0x000004D0u; WF32(ea,c->f[1]);} // 801CD3A4
  {uint32_t ea=c->r[3]+0x000004D4u; WF32(ea,c->f[0]);} // 801CD3A8
  {uint32_t ea=c->r[3]+0x000004C4u; WF32(ea,c->f[0]);} // 801CD3AC
  W32(c->r[3]+0x000004C8u,c->r[11]); // 801CD3B0
  W32(c->r[3]+0x000004CCu,c->r[10]); // 801CD3B4
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[5]);} // 801CD3B8
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[2]);} // 801CD3BC
  W32(c->r[3]+0x000004D8u,c->r[9]); // 801CD3C0
  W32(c->r[3]+0x000004DCu,c->r[8]); // 801CD3C4
  W32(c->r[3]+0x000004E0u,c->r[7]); // 801CD3C8
  W32(c->r[3]+0x000004F4u,c->r[6]); // 801CD3CC
  W32(c->r[3]+0x000004F8u,c->r[5]); // 801CD3D0
  c->r[5]=R16(c->r[13]+0xFFFFAAE8u); // 801CD3D4
  W16(c->r[3]+0x000004FCu,c->r[5]); // 801CD3D8
  W16(c->r[3]+0x00000138u,c->r[31]); // 801CD3DC
L_801CD3E0:;
  W8(c->r[30]+0x00000008u,c->r[4]); // 801CD3E0
  c->r[30]=c->r[30]+0xFFFFFFF4u; // 801CD3E4
  cmpu(c,0,c->r[30],c->r[0]); // 801CD3E8
  if (!crb(c,0)) { IRQCHK(c); goto L_801CD3E0; } // 801CD3EC
  c->r[5]=c->r[3]+0x0000012Cu; // 801CD3F0
  c->r[0]=c->r[3]+0x00000120u; // 801CD3F4
  c->r[4]=0u+0xFFFFFFFFu; // 801CD3F8
  c->r[0]=c->r[0]|0x00000000u; // 801CD3FC
L_801CD400:;
  W8(c->r[5]+0x00000008u,c->r[4]); // 801CD400
  c->r[5]=c->r[5]+0xFFFFFFF4u; // 801CD404
  cmpu(c,0,c->r[5],c->r[0]); // 801CD408
  if (!crb(c,0)) { IRQCHK(c); goto L_801CD400; } // 801CD40C
  c->r[4]=0u+0x00000000u; // 801CD410
  c->r[0]=0u+0x00000001u; // 801CD414
  W8(c->r[3]+0x0000013Bu,c->r[4]); // 801CD418
  W8(c->r[3]+0x00000555u,c->r[0]); // 801CD41C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CD420
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CD424
  c->r[1]=c->r[1]+0x00000010u; // 801CD428
  return; // 801CD42C
}

// calc_button_repeat
void f_801CD430(Ctx* __restrict c) {
  trace_call(0x801CD430u);
  c->r[0]=R32(c->r[3]+0x00000004u); // 801CD430
  cmps(c,0,(int32_t)c->r[0],0); // 801CD434
  if (!crb(c,2)) { goto L_801CD448; } // 801CD438
  c->r[0]=R32(c->r[3]+0x00000008u); // 801CD43C
  cmps(c,0,(int32_t)c->r[0],0); // 801CD440
  if (crb(c,2)) { goto L_801CD480; } // 801CD444
L_801CD448:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 801CD448
  c->r[7]=0u+0x00000000u; // 801CD44C
  c->r[6]=R16(c->r[3]+0x00000504u); // 801CD450
  cmps(c,0,(int32_t)c->r[0],0); // 801CD454
  W16(c->r[3]+0x00000500u,c->r[7]); // 801CD458
  W16(c->r[3]+0x00000502u,c->r[6]); // 801CD45C
  if (crb(c,2)) { goto L_801CD4F4; } // 801CD460
  c->r[0]=R16(c->r[3]+0x00000506u); // 801CD464
  cmps(c,0,(int32_t)c->r[0],0); // 801CD468
  if (crb(c,2)) { goto L_801CD4F4; } // 801CD46C
  c->r[0]=R32(c->r[3]+0x00000000u); // 801CD470
  c->r[0]=c->r[0]|0x80000000u; // 801CD474
  W32(c->r[3]+0x00000000u,c->r[0]); // 801CD478
  goto L_801CD4F4; // 801CD47C
L_801CD480:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801CD480
  cmps(c,0,(int32_t)c->r[0],0); // 801CD484
  if (crb(c,2)) { goto L_801CD4F4; } // 801CD488
  c->r[0]=R16(c->r[3]+0x00000500u); // 801CD48C
  c->r[0]=c->r[0]+c->r[5]; // 801CD490
  W16(c->r[3]+0x00000500u,c->r[0]); // 801CD494
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801CD498
  cmpu(c,0,c->r[6],0x00009C40u); // 801CD49C
  if (crb(c,0)) { goto L_801CD4B0; } // 801CD4A0
  c->r[6]=c->r[6]+0xFFFF0000u; // 801CD4A4
  c->r[0]=c->r[6]+0x000063C0u; // 801CD4A8
  W16(c->r[3]+0x00000500u,c->r[0]); // 801CD4AC
L_801CD4B0:;
  c->r[8]=R16(c->r[3]+0x00000500u); // 801CD4B0
  c->r[7]=R16(c->r[3]+0x00000502u); // 801CD4B4
  cmpu(c,0,c->r[8],c->r[7]); // 801CD4B8
  if (crb(c,0)) { goto L_801CD4F4; } // 801CD4BC
  c->r[6]=R32(c->r[3]+0x00000000u); // 801CD4C0
  cmpu(c,0,c->r[8],0x00004E20u); // 801CD4C4
  c->r[0]=R16(c->r[3]+0x00000506u); // 801CD4C8
  c->r[6]=c->r[6]|0x80000000u; // 801CD4CC
  W32(c->r[3]+0x00000000u,c->r[6]); // 801CD4D0
  c->r[0]=c->r[7]+c->r[0]; // 801CD4D4
  W16(c->r[3]+0x00000502u,c->r[0]); // 801CD4D8
  if (crb(c,0)) { goto L_801CD4F4; } // 801CD4DC
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801CD4E0
  c->r[7]=c->r[8]+0xFFFFB1E0u; // 801CD4E4
  c->r[0]=c->r[6]+0xFFFFB1E0u; // 801CD4E8
  W16(c->r[3]+0x00000500u,c->r[7]); // 801CD4EC
  W16(c->r[3]+0x00000502u,c->r[0]); // 801CD4F0
L_801CD4F4:;
  cmpu(c,0,c->r[4],0x00000002u); // 801CD4F4
  if (crb(c,2)) { goto L_801CD508; } // 801CD4F8
  c->r[0]=c->r[4]+0xFFFFFFF0u; // 801CD4FC
  cmpu(c,0,c->r[0],0x00000001u); // 801CD500
  if (crb(c,1)) return; // 801CD504
L_801CD508:;
  c->r[0]=R32(c->r[3]+0x00000064u); // 801CD508
  cmps(c,0,(int32_t)c->r[0],0); // 801CD50C
  if (!crb(c,2)) { goto L_801CD520; } // 801CD510
  c->r[0]=R32(c->r[3]+0x00000068u); // 801CD514
  cmps(c,0,(int32_t)c->r[0],0); // 801CD518
  if (crb(c,2)) { goto L_801CD558; } // 801CD51C
L_801CD520:;
  c->r[0]=R32(c->r[3]+0x00000064u); // 801CD520
  c->r[5]=0u+0x00000000u; // 801CD524
  c->r[4]=R16(c->r[3]+0x00000504u); // 801CD528
  cmps(c,0,(int32_t)c->r[0],0); // 801CD52C
  W16(c->r[3]+0x00000508u,c->r[5]); // 801CD530
  W16(c->r[3]+0x0000050Au,c->r[4]); // 801CD534
  if (crb(c,2)) return; // 801CD538
  c->r[0]=R16(c->r[3]+0x00000506u); // 801CD53C
  cmps(c,0,(int32_t)c->r[0],0); // 801CD540
  if (crb(c,2)) return; // 801CD544
  c->r[0]=R32(c->r[3]+0x00000060u); // 801CD548
  c->r[0]=c->r[0]|0x80000000u; // 801CD54C
  W32(c->r[3]+0x00000060u,c->r[0]); // 801CD550
  return; // 801CD554
L_801CD558:;
  c->r[0]=R32(c->r[3]+0x00000060u); // 801CD558
  cmps(c,0,(int32_t)c->r[0],0); // 801CD55C
  if (crb(c,2)) return; // 801CD560
  c->r[0]=R16(c->r[3]+0x00000508u); // 801CD564
  c->r[0]=c->r[0]+c->r[5]; // 801CD568
  W16(c->r[3]+0x00000508u,c->r[0]); // 801CD56C
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 801CD570
  cmpu(c,0,c->r[4],0x00009C40u); // 801CD574
  if (crb(c,0)) { goto L_801CD588; } // 801CD578
  c->r[4]=c->r[4]+0xFFFF0000u; // 801CD57C
  c->r[0]=c->r[4]+0x000063C0u; // 801CD580
  W16(c->r[3]+0x00000508u,c->r[0]); // 801CD584
L_801CD588:;
  c->r[6]=R16(c->r[3]+0x00000508u); // 801CD588
  c->r[5]=R16(c->r[3]+0x0000050Au); // 801CD58C
  cmpu(c,0,c->r[6],c->r[5]); // 801CD590
  if (crb(c,0)) return; // 801CD594
  c->r[4]=R32(c->r[3]+0x00000060u); // 801CD598
  cmpu(c,0,c->r[6],0x00004E20u); // 801CD59C
  c->r[0]=R16(c->r[3]+0x00000506u); // 801CD5A0
  c->r[4]=c->r[4]|0x80000000u; // 801CD5A4
  W32(c->r[3]+0x00000060u,c->r[4]); // 801CD5A8
  c->r[0]=c->r[5]+c->r[0]; // 801CD5AC
  W16(c->r[3]+0x0000050Au,c->r[0]); // 801CD5B0
  if (crb(c,0)) return; // 801CD5B4
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 801CD5B8
  c->r[5]=c->r[6]+0xFFFFB1E0u; // 801CD5BC
  c->r[0]=c->r[4]+0xFFFFB1E0u; // 801CD5C0
  W16(c->r[3]+0x00000508u,c->r[5]); // 801CD5C4
  W16(c->r[3]+0x0000050Au,c->r[0]); // 801CD5C8
  return; // 801CD5CC
}

// read_kpad_button
void f_801CD5D0(Ctx* __restrict c) {
  trace_call(0x801CD5D0u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 801CD5D0
  c->r[9]=c->r[6]&0x00009FFFu; cr0(c,c->r[9]); // 801CD5D4
  cmpu(c,0,c->r[4],0x00000001u); // 801CD5D8
  W32(c->r[3]+0x00000000u,c->r[9]); // 801CD5DC
  c->r[10]=rotl(c->r[0],0)&0x0000FFFFu; // 801CD5E0
  if (!crb(c,2)) { goto L_801CD608; } // 801CD5E4
  c->r[6]=R8(c->r[3]+0x00000555u); // 801CD5E8
  c->r[0]=0u-c->r[6]; // 801CD5EC
  c->r[0]=c->r[0]|c->r[6]; // 801CD5F0
  c->r[0]=sraw(c,c->r[0],31); // 801CD5F4
  c->r[0]=c->r[7]&~c->r[0]; // 801CD5F8
  c->r[0]=rotl(c->r[0],0)&0x00006000u; // 801CD5FC
  c->r[0]=c->r[9]|c->r[0]; // 801CD600
  W32(c->r[3]+0x00000000u,c->r[0]); // 801CD604
L_801CD608:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801CD608
  cmpu(c,0,c->r[4],0x00000002u); // 801CD60C
  c->r[6]=c->r[0]^c->r[10]; // 801CD610
  c->r[0]=c->r[6]&c->r[0]; // 801CD614
  W32(c->r[3]+0x00000004u,c->r[0]); // 801CD618
  c->r[0]=c->r[6]&c->r[10]; // 801CD61C
  W32(c->r[3]+0x00000008u,c->r[0]); // 801CD620
  if (crb(c,2)) { goto L_801CD634; } // 801CD624
  c->r[0]=c->r[4]+0xFFFFFFF0u; // 801CD628
  cmpu(c,0,c->r[0],0x00000001u); // 801CD62C
  if (crb(c,1)) { goto L_801CD66C; } // 801CD630
L_801CD634:;
  c->r[7]=R8(c->r[3]+0x00000555u); // 801CD634
  c->r[0]=R32(c->r[3]+0x00000060u); // 801CD638
  c->r[6]=0u-c->r[7]; // 801CD63C
  c->r[6]=c->r[6]|c->r[7]; // 801CD640
  c->r[7]=rotl(c->r[0],0)&0x0000FFFFu; // 801CD644
  c->r[0]=sraw(c,c->r[6],31); // 801CD648
  c->r[0]=c->r[8]&~c->r[0]; // 801CD64C
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801CD650
  W32(c->r[3]+0x00000060u,c->r[0]); // 801CD654
  c->r[6]=c->r[0]^c->r[7]; // 801CD658
  c->r[0]=c->r[6]&c->r[0]; // 801CD65C
  W32(c->r[3]+0x00000064u,c->r[0]); // 801CD660
  c->r[0]=c->r[6]&c->r[7]; // 801CD664
  W32(c->r[3]+0x00000068u,c->r[0]); // 801CD668
L_801CD66C:;
  f_801CD430(c); return; // 801CD66C
}

// calc_acc
void f_801CD670(Ctx* __restrict c) {
  trace_call(0x801CD670u);
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CD670
  c->r[0]=R32(c->r[3]+0x0000056Cu); // 801CD674
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[2]); // 801CD678
  cmps(c,0,(int32_t)c->r[0],0); // 801CD67C
  if (!crb(c,2)) { goto L_801CD6DC; } // 801CD680
  {uint32_t ea=c->r[2]+0xFFFFA1E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CD684
  fcmp(c,0,c->f[3],c->f[0]); // 801CD688
  if (!crb(c,0)) { goto L_801CD698; } // 801CD68C
  c->f[2]=-c->f[3]; // 801CD690
  goto L_801CD69C; // 801CD694
L_801CD698:;
  c->f[2]=c->f[3]; // 801CD698
L_801CD69C:;
  {uint32_t ea=c->r[3]+0x000000C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CD69C
  fcmp(c,0,c->f[2],c->f[0]); // 801CD6A0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801CD6A4
  if (!crb(c,2)) { goto L_801CD6B4; } // 801CD6A8
  {uint32_t ea=c->r[2]+0xFFFFA1ECu; c->f[2]=c->ps1[2]=RF32(ea);} // 801CD6AC
  goto L_801CD6C0; // 801CD6B0
L_801CD6B4:;
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[0]); // 801CD6B4
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 801CD6B8
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 801CD6BC
L_801CD6C0:;
  {uint32_t ea=c->r[3]+0x000000CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801CD6C0
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CD6C4
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[1]); // 801CD6C8
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[3]); // 801CD6CC
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801CD6D0
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[0]);} // 801CD6D4
  return; // 801CD6D8
L_801CD6DC:;
  {uint32_t ea=c->r[3]+0x000000C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CD6DC
  c->f[0]=-c->f[1]; // 801CD6E0
  fcmp(c,0,c->f[3],c->f[0]); // 801CD6E4
  if (!crb(c,0)) { goto L_801CD704; } // 801CD6E8
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[1]); // 801CD6EC
  {uint32_t ea=c->r[3]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CD6F0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801CD6F4
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 801CD6F8
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[0]);} // 801CD6FC
  return; // 801CD700
L_801CD704:;
  fcmp(c,0,c->f[3],c->f[1]); // 801CD704
  if (!crb(c,1)) return; // 801CD708
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[1]); // 801CD70C
  {uint32_t ea=c->r[3]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CD710
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801CD714
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 801CD718
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[0]);} // 801CD71C
  return; // 801CD720
}

// calc_acc_horizon
void f_801CD730(Ctx* __restrict c) {
  trace_call(0x801CD730u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CD730
  c->r[0]=c->lr; // 801CD734
  W32(c->r[1]+0x00000034u,c->r[0]); // 801CD738
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 801CD73C
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 801CD740
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[30]);} // 801CD744
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,30,ea,0,0);} // 801CD748
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CD74C
  c->r[31]=c->r[3]|c->r[3]; // 801CD750
  {uint32_t ea=c->r[3]+0x000004D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CD754
  {uint32_t ea=c->r[3]+0x000004DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CD758
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 801CD75C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 801CD760
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 801CD764
  c->lr=0x801CD76Cu; f_80216698(c); // 801CD768
  c->f[8]=c->ps1[8]=S(c->f[1]); // 801CD76C
  {uint32_t ea=c->r[2]+0xFFFFA1E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CD770
  fcmp(c,0,c->f[0],c->f[8]); // 801CD774
  if (crb(c,2)) { goto L_801CD8A0; } // 801CD778
  {uint32_t ea=c->r[2]+0xFFFFA1F8u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CD77C
  fcmp(c,0,c->f[8],c->f[2]); // 801CD780
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801CD784
  if (!crb(c,2)) { goto L_801CD790; } // 801CD788
  goto L_801CD8A0; // 801CD78C
L_801CD790:;
  {uint32_t ea=c->r[31]+0x000004D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CD790
  {uint32_t ea=c->r[31]+0x000004DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801CD794
  c->f[9]=c->ps1[9]=S(c->f[0]/c->f[8]); // 801CD798
  {uint32_t ea=c->r[2]+0xFFFFA1ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CD79C
  c->f[10]=c->ps1[10]=S(c->f[1]/c->f[8]); // 801CD7A0
  fcmp(c,0,c->f[8],c->f[0]); // 801CD7A4
  if (!crb(c,1)) { goto L_801CD7B0; } // 801CD7A8
  c->f[8]=c->ps1[8]=S(c->f[2]-c->f[8]); // 801CD7AC
L_801CD7B0:;
  {uint32_t ea=c->r[31]+0x000000D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CD7B0
  {uint32_t ea=c->r[31]+0x000000D4u; c->f[6]=c->ps1[6]=RF32(ea);} // 801CD7B4
  c->f[4]=c->ps1[4]=S(c->f[0]*c->f[10]); // 801CD7B8
  {uint32_t ea=c->r[13]+0xFFFFAADCu; c->f[7]=c->ps1[7]=RF32(ea);} // 801CD7BC
  c->f[5]=c->ps1[5]=S(c->f[6]*c->f[9]); // 801CD7C0
  {uint32_t ea=c->r[31]+0x000004ECu; c->f[3]=c->ps1[3]=RF32(ea);} // 801CD7C4
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[9]); // 801CD7C8
  {uint32_t ea=c->r[31]+0x000004F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CD7CC
  c->f[0]=c->ps1[0]=S(c->f[6]*c->f[10]); // 801CD7D0
  c->f[6]=c->ps1[6]=S(c->f[8]*c->f[7]); // 801CD7D4
  c->f[4]=c->ps1[4]=S(c->f[5]+c->f[4]); // 801CD7D8
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 801CD7DC
  c->f[8]=c->ps1[8]=S(c->f[8]*c->f[6]); // 801CD7E0
  c->f[2]=c->ps1[2]=S(c->f[4]-c->f[3]); // 801CD7E4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801CD7E8
  c->f[2]=c->ps1[2]=S(c->f[8]*c->f[2]); // 801CD7EC
  c->f[0]=c->ps1[0]=S(c->f[8]*c->f[0]); // 801CD7F0
  c->f[31]=c->ps1[31]=S(c->f[3]+c->f[2]); // 801CD7F4
  c->f[30]=c->ps1[30]=S(c->f[1]+c->f[0]); // 801CD7F8
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[31]); // 801CD7FC
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[30]); // 801CD800
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 801CD804
  c->lr=0x801CD80Cu; f_80216698(c); // 801CD808
  c->f[1]=c->ps1[1]=S(c->f[1]); // 801CD80C
  {uint32_t ea=c->r[2]+0xFFFFA1E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CD810
  fcmp(c,0,c->f[0],c->f[1]); // 801CD814
  if (crb(c,2)) { goto L_801CD8A0; } // 801CD818
  c->f[7]=c->ps1[7]=S(c->f[31]/c->f[1]); // 801CD81C
  {uint32_t ea=c->r[31]+0x000004F4u; c->f[5]=c->ps1[5]=RF32(ea);} // 801CD820
  {uint32_t ea=c->r[31]+0x000004F8u; c->f[3]=c->ps1[3]=RF32(ea);} // 801CD824
  {uint32_t ea=c->r[31]+0x00000540u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CD828
  {uint32_t ea=c->r[31]+0x000004ECu; WF32(ea,c->f[7]);} // 801CD82C
  c->f[6]=c->ps1[6]=S(c->f[30]/c->f[1]); // 801CD830
  {uint32_t ea=c->r[31]+0x000004F0u; WF32(ea,c->f[6]);} // 801CD834
  c->f[4]=c->ps1[4]=S(c->f[7]-c->f[5]); // 801CD838
  {uint32_t ea=c->r[13]+0xFFFFAAE4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CD83C
  c->f[2]=c->ps1[2]=S(c->f[6]-c->f[3]); // 801CD840
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[4]); // 801CD844
  c->f[1]=c->ps1[1]=S(c->f[5]+c->f[1]); // 801CD848
  {uint32_t ea=c->r[31]+0x000004F4u; WF32(ea,c->f[1]);} // 801CD84C
  c->f[4]=c->ps1[4]=S(c->f[7]-c->f[1]); // 801CD850
  {uint32_t ea=c->r[13]+0xFFFFAAE4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CD854
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 801CD858
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[4]); // 801CD85C
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[1]); // 801CD860
  {uint32_t ea=c->r[31]+0x000004F8u; WF32(ea,c->f[1]);} // 801CD864
  c->f[1]=c->ps1[1]=S(c->f[6]-c->f[1]); // 801CD868
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 801CD86C
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 801CD870
  fcmp(c,0,c->f[1],c->f[0]); // 801CD874
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801CD878
  if (!crb(c,2)) { goto L_801CD898; } // 801CD87C
  c->r[3]=R16(c->r[31]+0x000004FCu); // 801CD880
  cmps(c,0,(int32_t)c->r[3],0); // 801CD884
  if (crb(c,2)) { goto L_801CD8A0; } // 801CD888
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801CD88C
  W16(c->r[31]+0x000004FCu,c->r[0]); // 801CD890
  goto L_801CD8A0; // 801CD894
L_801CD898:;
  c->r[0]=R16(c->r[13]+0xFFFFAAE8u); // 801CD898
  W16(c->r[31]+0x000004FCu,c->r[0]); // 801CD89C
L_801CD8A0:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801CD8A0
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 801CD8A4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 801CD8A8
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,30,ea,0,0);} // 801CD8AC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[30]=RF64(ea);} // 801CD8B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CD8B4
  c->lr=c->r[0]; // 801CD8B8
  c->r[1]=c->r[1]+0x00000030u; // 801CD8BC
  return; // 801CD8C0
}

// calc_acc_vertical
void f_801CD8D0(Ctx* __restrict c) {
  trace_call(0x801CD8D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CD8D0
  c->r[0]=c->lr; // 801CD8D4
  W32(c->r[1]+0x00000044u,c->r[0]); // 801CD8D8
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 801CD8DC
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 801CD8E0
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 801CD8E4
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 801CD8E8
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[29]);} // 801CD8EC
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,29,ea,0,0);} // 801CD8F0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CD8F4
  c->r[31]=c->r[3]|c->r[3]; // 801CD8F8
  {uint32_t ea=c->r[3]+0x000004D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CD8FC
  {uint32_t ea=c->r[3]+0x000004DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CD900
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 801CD904
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 801CD908
  c->f[30]=c->ps1[30]=S(c->f[1]+c->f[0]); // 801CD90C
  c->f[1]=c->f[30]; // 801CD910
  c->lr=0x801CD918u; f_80216698(c); // 801CD914
  {uint32_t ea=c->r[31]+0x000004E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CD918
  c->f[31]=c->ps1[31]=S(c->f[1]); // 801CD91C
  c->f[29]=-c->f[0]; // 801CD920
  c->f[0]=c->ps1[0]=S(c->f[29]*c->f[29]); // 801CD924
  c->f[1]=c->ps1[1]=S(c->f[30]+c->f[0]); // 801CD928
  c->lr=0x801CD930u; f_80216698(c); // 801CD92C
  c->f[5]=c->ps1[5]=S(c->f[1]); // 801CD930
  {uint32_t ea=c->r[2]+0xFFFFA1E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CD934
  fcmp(c,0,c->f[0],c->f[5]); // 801CD938
  if (crb(c,2)) { goto L_801CD9C8; } // 801CD93C
  {uint32_t ea=c->r[2]+0xFFFFA1F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CD940
  fcmp(c,0,c->f[5],c->f[1]); // 801CD944
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801CD948
  if (!crb(c,2)) { goto L_801CD954; } // 801CD94C
  goto L_801CD9C8; // 801CD950
L_801CD954:;
  c->f[2]=c->ps1[2]=S(c->f[31]/c->f[5]); // 801CD954
  {uint32_t ea=c->r[2]+0xFFFFA1ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CD958
  c->f[29]=c->ps1[29]=S(c->f[29]/c->f[5]); // 801CD95C
  fcmp(c,0,c->f[5],c->f[0]); // 801CD960
  if (!crb(c,1)) { goto L_801CD96C; } // 801CD964
  c->f[5]=c->ps1[5]=S(c->f[1]-c->f[5]); // 801CD968
L_801CD96C:;
  {uint32_t ea=c->r[13]+0xFFFFAADCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CD96C
  {uint32_t ea=c->r[31]+0x00000054u; c->f[3]=c->ps1[3]=RF32(ea);} // 801CD970
  c->f[4]=c->ps1[4]=S(c->f[5]*c->f[0]); // 801CD974
  {uint32_t ea=c->r[31]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CD978
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 801CD97C
  c->f[0]=c->ps1[0]=S(c->f[29]-c->f[1]); // 801CD980
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[4]); // 801CD984
  c->f[2]=c->ps1[2]=S(c->f[5]*c->f[2]); // 801CD988
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 801CD98C
  c->f[31]=c->ps1[31]=S(c->f[3]+c->f[2]); // 801CD990
  c->f[30]=c->ps1[30]=S(c->f[1]+c->f[0]); // 801CD994
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[31]); // 801CD998
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[30]); // 801CD99C
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 801CD9A0
  c->lr=0x801CD9A8u; f_80216698(c); // 801CD9A4
  c->f[1]=c->ps1[1]=S(c->f[1]); // 801CD9A8
  {uint32_t ea=c->r[2]+0xFFFFA1E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CD9AC
  fcmp(c,0,c->f[0],c->f[1]); // 801CD9B0
  if (crb(c,2)) { goto L_801CD9C8; } // 801CD9B4
  c->f[0]=c->ps1[0]=S(c->f[31]/c->f[1]); // 801CD9B8
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 801CD9BC
  c->f[0]=c->ps1[0]=S(c->f[30]/c->f[1]); // 801CD9C0
  {uint32_t ea=c->r[31]+0x00000058u; WF32(ea,c->f[0]);} // 801CD9C4
L_801CD9C8:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 801CD9C8
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 801CD9CC
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 801CD9D0
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 801CD9D4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 801CD9D8
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,29,ea,0,0);} // 801CD9DC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[29]=RF64(ea);} // 801CD9E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CD9E4
  c->lr=c->r[0]; // 801CD9E8
  c->r[1]=c->r[1]+0x00000040u; // 801CD9EC
  return; // 801CD9F0
}

// read_kpad_acc
void f_801CDA00(Ctx* __restrict c) {
  trace_call(0x801CDA00u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CDA00
  c->r[0]=c->lr; // 801CDA04
  c->r[5]=0u+0x43300000u; // 801CDA08
  W32(c->r[1]+0x00000054u,c->r[0]); // 801CDA0C
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 801CDA10
  c->r[31]=c->r[4]|c->r[4]; // 801CDA14
  W32(c->r[1]+0x00000048u,c->r[30]); // 801CDA18
  c->r[30]=c->r[3]|c->r[3]; // 801CDA1C
  c->r[6]=R8(c->r[4]+0x00000036u); // 801CDA20
  W32(c->r[1]+0x00000030u,c->r[5]); // 801CDA24
  c->r[0]=c->r[6]+0xFFFFFFFFu; // 801CDA28
  cmpu(c,0,c->r[0],0x00000001u); // 801CDA2C
  W32(c->r[1]+0x00000038u,c->r[5]); // 801CDA30
  if (!crb(c,1)) { goto L_801CDA58; } // 801CDA34
  c->r[0]=c->r[6]+0xFFFFFFFCu; // 801CDA38
  cmpu(c,0,c->r[0],0x00000001u); // 801CDA3C
  if (!crb(c,1)) { goto L_801CDA58; } // 801CDA40
  c->r[0]=c->r[6]+0xFFFFFFF9u; // 801CDA44
  cmpu(c,0,c->r[0],0x00000001u); // 801CDA48
  if (!crb(c,1)) { goto L_801CDA58; } // 801CDA4C
  cmps(c,0,(int32_t)c->r[6],11); // 801CDA50
  if (!crb(c,2)) { goto L_801CDE48; } // 801CDA54
L_801CDA58:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000002u); // 801CDA58
  {uint32_t ea=c->r[2]+0xFFFFA200u; c->f[3]=RF64(ea);} // 801CDA5C
  c->r[0]=0u-c->r[0]; // 801CDA60
  {uint32_t ea=c->r[3]+0x00000510u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CDA64
  c->r[0]=c->r[0]^0x80000000u; // 801CDA68
  W32(c->r[1]+0x00000034u,c->r[0]); // 801CDA6C
  {uint32_t ea=c->r[2]+0xFFFFA1E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CDA70
  {uint32_t ea=c->r[1]+0x00000030u; c->f[2]=RF64(ea);} // 801CDA74
  {uint32_t ea=c->r[13]+0xFFFFAB24u; c->f[4]=c->ps1[4]=RF32(ea);} // 801CDA78
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 801CDA7C
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 801CDA80
  fcmp(c,0,c->f[1],c->f[0]); // 801CDA84
  if (!crb(c,0)) { goto L_801CDA9C; } // 801CDA88
  c->f[4]=-c->f[4]; // 801CDA8C
  fcmp(c,0,c->f[1],c->f[4]); // 801CDA90
  if (!crb(c,0)) { goto L_801CDAA8; } // 801CDA94
  goto L_801CDAAC; // 801CDA98
L_801CDA9C:;
  fcmp(c,0,c->f[1],c->f[4]); // 801CDA9C
  if (!crb(c,1)) { goto L_801CDAA8; } // 801CDAA0
  goto L_801CDAAC; // 801CDAA4
L_801CDAA8:;
  c->f[4]=c->f[1]; // 801CDAA8
L_801CDAAC:;
  {uint32_t ea=c->r[3]+0x000004D8u; WF32(ea,c->f[4]);} // 801CDAAC
  {uint32_t ea=c->r[2]+0xFFFFA200u; c->f[3]=RF64(ea);} // 801CDAB0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000006u); // 801CDAB4
  {uint32_t ea=c->r[3]+0x00000518u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CDAB8
  c->r[0]=0u-c->r[0]; // 801CDABC
  {uint32_t ea=c->r[2]+0xFFFFA1E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CDAC0
  c->r[0]=c->r[0]^0x80000000u; // 801CDAC4
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 801CDAC8
  {uint32_t ea=c->r[13]+0xFFFFAB24u; c->f[4]=c->ps1[4]=RF32(ea);} // 801CDACC
  {uint32_t ea=c->r[1]+0x00000038u; c->f[2]=RF64(ea);} // 801CDAD0
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 801CDAD4
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 801CDAD8
  fcmp(c,0,c->f[1],c->f[0]); // 801CDADC
  if (!crb(c,0)) { goto L_801CDAF4; } // 801CDAE0
  c->f[4]=-c->f[4]; // 801CDAE4
  fcmp(c,0,c->f[1],c->f[4]); // 801CDAE8
  if (!crb(c,0)) { goto L_801CDB00; } // 801CDAEC
  goto L_801CDB04; // 801CDAF0
L_801CDAF4:;
  fcmp(c,0,c->f[1],c->f[4]); // 801CDAF4
  if (!crb(c,1)) { goto L_801CDB00; } // 801CDAF8
  goto L_801CDB04; // 801CDAFC
L_801CDB00:;
  c->f[4]=c->f[1]; // 801CDB00
L_801CDB04:;
  {uint32_t ea=c->r[3]+0x000004DCu; WF32(ea,c->f[4]);} // 801CDB04
  {uint32_t ea=c->r[2]+0xFFFFA200u; c->f[3]=RF64(ea);} // 801CDB08
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000004u); // 801CDB0C
  {uint32_t ea=c->r[3]+0x00000514u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CDB10
  c->r[0]=c->r[0]^0x80000000u; // 801CDB14
  W32(c->r[1]+0x00000034u,c->r[0]); // 801CDB18
  {uint32_t ea=c->r[2]+0xFFFFA1E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CDB1C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[2]=RF64(ea);} // 801CDB20
  {uint32_t ea=c->r[13]+0xFFFFAB24u; c->f[4]=c->ps1[4]=RF32(ea);} // 801CDB24
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 801CDB28
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 801CDB2C
  fcmp(c,0,c->f[1],c->f[0]); // 801CDB30
  if (!crb(c,0)) { goto L_801CDB48; } // 801CDB34
  c->f[4]=-c->f[4]; // 801CDB38
  fcmp(c,0,c->f[1],c->f[4]); // 801CDB3C
  if (!crb(c,0)) { goto L_801CDB54; } // 801CDB40
  goto L_801CDB58; // 801CDB44
L_801CDB48:;
  fcmp(c,0,c->f[1],c->f[4]); // 801CDB48
  if (!crb(c,1)) { goto L_801CDB54; } // 801CDB4C
  goto L_801CDB58; // 801CDB50
L_801CDB54:;
  c->f[4]=c->f[1]; // 801CDB54
L_801CDB58:;
  c->r[6]=R32(c->r[3]+0x0000000Cu); // 801CDB58
  c->r[4]=c->r[30]+0x0000000Cu; // 801CDB5C
  c->r[5]=R32(c->r[3]+0x00000010u); // 801CDB60
  c->r[0]=R32(c->r[3]+0x00000014u); // 801CDB64
  {uint32_t ea=c->r[3]+0x000004E0u; WF32(ea,c->f[4]);} // 801CDB68
  c->r[3]=c->r[30]|c->r[30]; // 801CDB6C
  {uint32_t ea=c->r[30]+0x000004D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CDB70
  W32(c->r[1]+0x00000014u,c->r[6]); // 801CDB74
  W32(c->r[1]+0x00000018u,c->r[5]); // 801CDB78
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801CDB7C
  c->lr=0x801CDB84u; f_801CD670(c); // 801CDB80
  {uint32_t ea=c->r[30]+0x000004DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801CDB84
  c->r[3]=c->r[30]|c->r[30]; // 801CDB88
  c->r[4]=c->r[30]+0x00000010u; // 801CDB8C
  c->lr=0x801CDB94u; f_801CD670(c); // 801CDB90
  {uint32_t ea=c->r[30]+0x000004E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CDB94
  c->r[3]=c->r[30]|c->r[30]; // 801CDB98
  c->r[4]=c->r[30]+0x00000014u; // 801CDB9C
  c->lr=0x801CDBA4u; f_801CD670(c); // 801CDBA0
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801CDBA4
  {uint32_t ea=c->r[30]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CDBA8
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 801CDBAC
  {uint32_t ea=c->r[30]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CDBB0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 801CDBB4
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 801CDBB8
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801CDBBC
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[0]); // 801CDBC0
  c->lr=0x801CDBC8u; f_80216698(c); // 801CDBC4
  {uint32_t ea=c->r[1]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CDBC8
  c->f[6]=c->ps1[6]=S(c->f[1]); // 801CDBCC
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CDBD0
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CDBD4
  c->f[5]=c->ps1[5]=S(c->f[2]-c->f[0]); // 801CDBD8
  {uint32_t ea=c->r[30]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CDBDC
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801CDBE0
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[0]); // 801CDBE4
  {uint32_t ea=c->r[30]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CDBE8
  c->f[1]=c->ps1[1]=S(c->f[5]*c->f[5]); // 801CDBEC
  c->f[3]=c->ps1[3]=S(c->f[2]-c->f[0]); // 801CDBF0
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[6]);} // 801CDBF4
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[4]); // 801CDBF8
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[5]);} // 801CDBFC
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[3]); // 801CDC00
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801CDC04
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[4]);} // 801CDC08
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[3]);} // 801CDC0C
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[0]); // 801CDC10
  c->lr=0x801CDC18u; f_80216698(c); // 801CDC14
  c->f[0]=c->ps1[0]=S(c->f[1]); // 801CDC18
  c->r[3]=c->r[30]|c->r[30]; // 801CDC1C
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 801CDC20
  c->lr=0x801CDC28u; f_801CD730(c); // 801CDC24
  c->r[3]=c->r[30]|c->r[30]; // 801CDC28
  c->lr=0x801CDC30u; f_801CD8D0(c); // 801CDC2C
  c->r[0]=R8(c->r[31]+0x00000029u); // 801CDC30
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801CDC34
  if (!crb(c,2)) { goto L_801CDE48; } // 801CDC38
  c->r[0]=R8(c->r[31]+0x00000028u); // 801CDC3C
  cmpu(c,0,c->r[0],0x00000001u); // 801CDC40
  if (!crb(c,2)) { goto L_801CDE48; } // 801CDC44
  c->r[0]=R8(c->r[31]+0x00000036u); // 801CDC48
  cmpu(c,0,c->r[0],0x00000004u); // 801CDC4C
  if (crb(c,2)) { goto L_801CDC60; } // 801CDC50
  cmpu(c,0,c->r[0],0x00000005u); // 801CDC54
  if (crb(c,2)) { goto L_801CDC60; } // 801CDC58
  goto L_801CDE48; // 801CDC5C
L_801CDC60:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x0000002Au); // 801CDC60
  {uint32_t ea=c->r[2]+0xFFFFA200u; c->f[3]=RF64(ea);} // 801CDC64
  c->r[0]=0u-c->r[0]; // 801CDC68
  {uint32_t ea=c->r[30]+0x0000051Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801CDC6C
  c->r[0]=c->r[0]^0x80000000u; // 801CDC70
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 801CDC74
  {uint32_t ea=c->r[2]+0xFFFFA1E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CDC78
  {uint32_t ea=c->r[1]+0x00000038u; c->f[2]=RF64(ea);} // 801CDC7C
  {uint32_t ea=c->r[13]+0xFFFFAB28u; c->f[4]=c->ps1[4]=RF32(ea);} // 801CDC80
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 801CDC84
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 801CDC88
  fcmp(c,0,c->f[1],c->f[0]); // 801CDC8C
  if (!crb(c,0)) { goto L_801CDCA4; } // 801CDC90
  c->f[4]=-c->f[4]; // 801CDC94
  fcmp(c,0,c->f[1],c->f[4]); // 801CDC98
  if (!crb(c,0)) { goto L_801CDCB0; } // 801CDC9C
  goto L_801CDCB4; // 801CDCA0
L_801CDCA4:;
  fcmp(c,0,c->f[1],c->f[4]); // 801CDCA4
  if (!crb(c,1)) { goto L_801CDCB0; } // 801CDCA8
  goto L_801CDCB4; // 801CDCAC
L_801CDCB0:;
  c->f[4]=c->f[1]; // 801CDCB0
L_801CDCB4:;
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[4]);} // 801CDCB4
  {uint32_t ea=c->r[2]+0xFFFFA200u; c->f[3]=RF64(ea);} // 801CDCB8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x0000002Eu); // 801CDCBC
  {uint32_t ea=c->r[30]+0x00000524u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CDCC0
  c->r[0]=0u-c->r[0]; // 801CDCC4
  {uint32_t ea=c->r[2]+0xFFFFA1E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CDCC8
  c->r[0]=c->r[0]^0x80000000u; // 801CDCCC
  W32(c->r[1]+0x00000034u,c->r[0]); // 801CDCD0
  {uint32_t ea=c->r[13]+0xFFFFAB28u; c->f[4]=c->ps1[4]=RF32(ea);} // 801CDCD4
  {uint32_t ea=c->r[1]+0x00000030u; c->f[2]=RF64(ea);} // 801CDCD8
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 801CDCDC
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 801CDCE0
  fcmp(c,0,c->f[1],c->f[0]); // 801CDCE4
  if (!crb(c,0)) { goto L_801CDCFC; } // 801CDCE8
  c->f[4]=-c->f[4]; // 801CDCEC
  fcmp(c,0,c->f[1],c->f[4]); // 801CDCF0
  if (!crb(c,0)) { goto L_801CDD08; } // 801CDCF4
  goto L_801CDD0C; // 801CDCF8
L_801CDCFC:;
  fcmp(c,0,c->f[1],c->f[4]); // 801CDCFC
  if (!crb(c,1)) { goto L_801CDD08; } // 801CDD00
  goto L_801CDD0C; // 801CDD04
L_801CDD08:;
  c->f[4]=c->f[1]; // 801CDD08
L_801CDD0C:;
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[4]);} // 801CDD0C
  {uint32_t ea=c->r[2]+0xFFFFA200u; c->f[3]=RF64(ea);} // 801CDD10
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x0000002Cu); // 801CDD14
  {uint32_t ea=c->r[30]+0x00000520u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CDD18
  c->r[0]=c->r[0]^0x80000000u; // 801CDD1C
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 801CDD20
  {uint32_t ea=c->r[2]+0xFFFFA1E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CDD24
  {uint32_t ea=c->r[1]+0x00000038u; c->f[2]=RF64(ea);} // 801CDD28
  {uint32_t ea=c->r[13]+0xFFFFAB28u; c->f[4]=c->ps1[4]=RF32(ea);} // 801CDD2C
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 801CDD30
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 801CDD34
  fcmp(c,0,c->f[1],c->f[0]); // 801CDD38
  if (!crb(c,0)) { goto L_801CDD50; } // 801CDD3C
  c->f[4]=-c->f[4]; // 801CDD40
  fcmp(c,0,c->f[1],c->f[4]); // 801CDD44
  if (!crb(c,0)) { goto L_801CDD5C; } // 801CDD48
  goto L_801CDD60; // 801CDD4C
L_801CDD50:;
  fcmp(c,0,c->f[1],c->f[4]); // 801CDD50
  if (!crb(c,1)) { goto L_801CDD5C; } // 801CDD54
  goto L_801CDD60; // 801CDD58
L_801CDD5C:;
  c->f[4]=c->f[1]; // 801CDD5C
L_801CDD60:;
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[4]);} // 801CDD60
  c->r[0]=R8(c->r[30]+0x0000055Eu); // 801CDD64
  cmps(c,0,(int32_t)c->r[0],0); // 801CDD68
  if (crb(c,2)) { goto L_801CDD84; } // 801CDD6C
  c->r[4]=c->r[1]+0x00000020u; // 801CDD70
  c->r[3]=0u+0x802E0000u; // 801CDD74
  c->r[5]=c->r[4]|c->r[4]; // 801CDD78
  c->r[3]=c->r[3]+0xFFFF9D48u; // 801CDD7C
  c->lr=0x801CDD84u; f_8019D220(c); // 801CDD80
L_801CDD84:;
  c->r[6]=R32(c->r[30]+0x00000068u); // 801CDD84
  c->r[3]=c->r[30]|c->r[30]; // 801CDD88
  c->r[5]=R32(c->r[30]+0x0000006Cu); // 801CDD8C
  c->r[4]=c->r[30]+0x00000068u; // 801CDD90
  c->r[0]=R32(c->r[30]+0x00000070u); // 801CDD94
  W32(c->r[1]+0x00000008u,c->r[6]); // 801CDD98
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CDD9C
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 801CDDA0
  W32(c->r[1]+0x00000010u,c->r[0]); // 801CDDA4
  c->lr=0x801CDDACu; f_801CD670(c); // 801CDDA8
  {uint32_t ea=c->r[1]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CDDAC
  c->r[3]=c->r[30]|c->r[30]; // 801CDDB0
  c->r[4]=c->r[30]+0x0000006Cu; // 801CDDB4
  c->lr=0x801CDDBCu; f_801CD670(c); // 801CDDB8
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CDDBC
  c->r[3]=c->r[30]|c->r[30]; // 801CDDC0
  c->r[4]=c->r[30]+0x00000070u; // 801CDDC4
  c->lr=0x801CDDCCu; f_801CD670(c); // 801CDDC8
  {uint32_t ea=c->r[30]+0x00000068u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CDDCC
  {uint32_t ea=c->r[30]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CDDD0
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 801CDDD4
  {uint32_t ea=c->r[30]+0x00000070u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CDDD8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 801CDDDC
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 801CDDE0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801CDDE4
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[0]); // 801CDDE8
  c->lr=0x801CDDF0u; f_80216698(c); // 801CDDEC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CDDF0
  c->f[6]=c->ps1[6]=S(c->f[1]); // 801CDDF4
  {uint32_t ea=c->r[30]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CDDF8
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801CDDFC
  c->f[5]=c->ps1[5]=S(c->f[2]-c->f[0]); // 801CDE00
  {uint32_t ea=c->r[30]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CDE04
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CDE08
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[0]); // 801CDE0C
  {uint32_t ea=c->r[30]+0x00000070u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CDE10
  c->f[1]=c->ps1[1]=S(c->f[5]*c->f[5]); // 801CDE14
  c->f[3]=c->ps1[3]=S(c->f[2]-c->f[0]); // 801CDE18
  {uint32_t ea=c->r[30]+0x00000074u; WF32(ea,c->f[6]);} // 801CDE1C
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[4]); // 801CDE20
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[5]);} // 801CDE24
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[3]); // 801CDE28
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801CDE2C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[4]);} // 801CDE30
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[3]);} // 801CDE34
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[0]); // 801CDE38
  c->lr=0x801CDE40u; f_80216698(c); // 801CDE3C
  c->f[0]=c->ps1[0]=S(c->f[1]); // 801CDE40
  {uint32_t ea=c->r[30]+0x00000078u; WF32(ea,c->f[0]);} // 801CDE44
L_801CDE48:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 801CDE48
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 801CDE4C
  c->r[30]=R32(c->r[1]+0x00000048u); // 801CDE50
  c->lr=c->r[0]; // 801CDE54
  c->r[1]=c->r[1]+0x00000050u; // 801CDE58
  return; // 801CDE5C
}

// select_2obj_first
void f_801CDE60(Ctx* __restrict c) {
  trace_call(0x801CDE60u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CDE60
  c->r[0]=c->lr; // 801CDE64
  W32(c->r[1]+0x00000084u,c->r[0]); // 801CDE68
  c->r[11]=c->r[1]+0x00000030u; // 801CDE6C
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[31]);} // 801CDE70
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,31,ea,0,0);} // 801CDE74
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[30]);} // 801CDE78
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,30,ea,0,0);} // 801CDE7C
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[29]);} // 801CDE80
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,29,ea,0,0);} // 801CDE84
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[28]);} // 801CDE88
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,28,ea,0,0);} // 801CDE8C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[27]);} // 801CDE90
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,27,ea,0,0);} // 801CDE94
  c->lr=0x801CDE9Cu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CDE98
  {uint32_t ea=c->r[13]+0xFFFFAAF8u; c->f[30]=c->ps1[30]=RF32(ea);} // 801CDE9C
  c->r[25]=c->r[3]|c->r[3]; // 801CDEA0
  {uint32_t ea=c->r[2]+0xFFFFA1E0u; c->f[29]=c->ps1[29]=RF32(ea);} // 801CDEA4
  c->r[29]=c->r[3]+0x000000F0u; // 801CDEA8
  {uint32_t ea=c->r[2]+0xFFFFA1ECu; c->f[31]=c->ps1[31]=RF32(ea);} // 801CDEAC
  c->r[31]=c->r[3]+0x00000114u; // 801CDEB0
L_801CDEB4:;
  c->r[0]=R8(c->r[29]+0x00000008u); // 801CDEB4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801CDEB8
  if (!crb(c,2)) { goto L_801CDFB4; } // 801CDEBC
  c->r[28]=c->r[29]+0x0000000Cu; // 801CDEC0
  c->r[30]=c->r[25]+0x00000114u; // 801CDEC4
L_801CDEC8:;
  c->r[0]=R8(c->r[28]+0x00000008u); // 801CDEC8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801CDECC
  if (!crb(c,2)) { goto L_801CDFA8; } // 801CDED0
  {uint32_t ea=c->r[28]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 801CDED4
  {uint32_t ea=c->r[29]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CDED8
  {uint32_t ea=c->r[28]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CDEDC
  {uint32_t ea=c->r[29]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CDEE0
  c->f[27]=c->ps1[27]=S(c->f[3]-c->f[2]); // 801CDEE4
  c->f[28]=c->ps1[28]=S(c->f[1]-c->f[0]); // 801CDEE8
  c->f[1]=c->ps1[1]=S(c->f[27]*c->f[27]); // 801CDEEC
  c->f[0]=c->ps1[0]=S(c->f[28]*c->f[28]); // 801CDEF0
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 801CDEF4
  c->lr=0x801CDEFCu; f_80216698(c); // 801CDEF8
  c->f[0]=c->ps1[0]=S(c->f[1]); // 801CDEFC
  {uint32_t ea=c->r[25]+0x000000DCu; c->f[5]=c->ps1[5]=RF32(ea);} // 801CDF00
  {uint32_t ea=c->r[25]+0x000000E0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CDF04
  {uint32_t ea=c->r[25]+0x00000544u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CDF08
  c->f[3]=c->ps1[3]=S(c->f[31]/c->f[0]); // 801CDF0C
  {uint32_t ea=c->r[25]+0x00000548u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CDF10
  c->f[27]=c->ps1[27]=S(c->f[27]*c->f[3]); // 801CDF14
  c->f[28]=c->ps1[28]=S(c->f[28]*c->f[3]); // 801CDF18
  c->f[6]=c->ps1[6]=S(c->f[1]*c->f[3]); // 801CDF1C
  c->f[4]=c->ps1[4]=S(c->f[5]*c->f[27]); // 801CDF20
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[28]); // 801CDF24
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[27]); // 801CDF28
  c->f[1]=c->ps1[1]=S(c->f[5]*c->f[28]); // 801CDF2C
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 801CDF30
  fcmp(c,0,c->f[6],c->f[0]); // 801CDF34
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[1]); // 801CDF38
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[3]);} // 801CDF3C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 801CDF40
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801CDF44
  if (crb(c,2)) { goto L_801CDFA8; } // 801CDF48
  {uint32_t ea=c->r[13]+0xFFFFAAF0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CDF4C
  fcmp(c,0,c->f[6],c->f[0]); // 801CDF50
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801CDF54
  if (crb(c,2)) { goto L_801CDFA8; } // 801CDF58
  {uint32_t ea=c->r[25]+0x000004ECu; c->f[1]=c->ps1[1]=RF32(ea);} // 801CDF5C
  {uint32_t ea=c->r[25]+0x000004F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CDF60
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[3]); // 801CDF64
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 801CDF68
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801CDF6C
  fcmp(c,0,c->f[0],c->f[29]); // 801CDF70
  if (!crb(c,0)) { goto L_801CDF94; } // 801CDF74
  c->f[0]=-c->f[0]; // 801CDF78
  fcmp(c,0,c->f[0],c->f[30]); // 801CDF7C
  if (!crb(c,1)) { goto L_801CDFA8; } // 801CDF80
  c->f[30]=c->f[0]; // 801CDF84
  c->r[27]=c->r[28]|c->r[28]; // 801CDF88
  c->r[26]=c->r[29]|c->r[29]; // 801CDF8C
  goto L_801CDFA8; // 801CDF90
L_801CDF94:;
  fcmp(c,0,c->f[0],c->f[30]); // 801CDF94
  if (!crb(c,1)) { goto L_801CDFA8; } // 801CDF98
  c->f[30]=c->f[0]; // 801CDF9C
  c->r[27]=c->r[29]|c->r[29]; // 801CDFA0
  c->r[26]=c->r[28]|c->r[28]; // 801CDFA4
L_801CDFA8:;
  c->r[28]=c->r[28]+0x0000000Cu; // 801CDFA8
  cmpu(c,0,c->r[28],c->r[30]); // 801CDFAC
  if (!crb(c,1)) { IRQCHK(c); goto L_801CDEC8; } // 801CDFB0
L_801CDFB4:;
  c->r[29]=c->r[29]+0x0000000Cu; // 801CDFB4
  cmpu(c,0,c->r[29],c->r[31]); // 801CDFB8
  if (crb(c,0)) { IRQCHK(c); goto L_801CDEB4; } // 801CDFBC
  {uint32_t ea=c->r[13]+0xFFFFAAF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CDFC0
  fcmp(c,0,c->f[30],c->f[0]); // 801CDFC4
  if (!crb(c,2)) { goto L_801CDFD4; } // 801CDFC8
  c->r[3]=0u+0x00000000u; // 801CDFCC
  goto L_801CE008; // 801CDFD0
L_801CDFD4:;
  c->r[4]=R32(c->r[27]+0x00000000u); // 801CDFD4
  c->r[3]=0u+0x00000002u; // 801CDFD8
  c->r[0]=R32(c->r[27]+0x00000004u); // 801CDFDC
  W32(c->r[25]+0x00000124u,c->r[0]); // 801CDFE0
  W32(c->r[25]+0x00000120u,c->r[4]); // 801CDFE4
  c->r[0]=R32(c->r[27]+0x00000008u); // 801CDFE8
  W32(c->r[25]+0x00000128u,c->r[0]); // 801CDFEC
  c->r[4]=R32(c->r[26]+0x00000000u); // 801CDFF0
  c->r[0]=R32(c->r[26]+0x00000004u); // 801CDFF4
  W32(c->r[25]+0x00000130u,c->r[0]); // 801CDFF8
  W32(c->r[25]+0x0000012Cu,c->r[4]); // 801CDFFC
  c->r[0]=R32(c->r[26]+0x00000008u); // 801CE000
  W32(c->r[25]+0x00000134u,c->r[0]); // 801CE004
L_801CE008:;
  c->r[11]=c->r[1]+0x00000030u; // 801CE008
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,31,ea,0,0);} // 801CE00C
  {uint32_t ea=c->r[1]+0x00000070u; c->f[31]=RF64(ea);} // 801CE010
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,30,ea,0,0);} // 801CE014
  {uint32_t ea=c->r[1]+0x00000060u; c->f[30]=RF64(ea);} // 801CE018
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,29,ea,0,0);} // 801CE01C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[29]=RF64(ea);} // 801CE020
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,28,ea,0,0);} // 801CE024
  {uint32_t ea=c->r[1]+0x00000040u; c->f[28]=RF64(ea);} // 801CE028
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,27,ea,0,0);} // 801CE02C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[27]=RF64(ea);} // 801CE030
  c->lr=0x801CE038u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CE034
  c->r[0]=R32(c->r[1]+0x00000084u); // 801CE038
  c->lr=c->r[0]; // 801CE03C
  c->r[1]=c->r[1]+0x00000080u; // 801CE040
  return; // 801CE044
}

// select_2obj_continue
void f_801CE050(Ctx* __restrict c) {
  trace_call(0x801CE050u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE050
  c->r[0]=c->lr; // 801CE054
  W32(c->r[1]+0x00000084u,c->r[0]); // 801CE058
  c->r[11]=c->r[1]+0x00000030u; // 801CE05C
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[31]);} // 801CE060
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,31,ea,0,0);} // 801CE064
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[30]);} // 801CE068
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,30,ea,0,0);} // 801CE06C
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[29]);} // 801CE070
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,29,ea,0,0);} // 801CE074
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[28]);} // 801CE078
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,28,ea,0,0);} // 801CE07C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[27]);} // 801CE080
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,27,ea,0,0);} // 801CE084
  c->lr=0x801CE08Cu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CE088
  {uint32_t ea=c->r[2]+0xFFFFA1F8u; c->f[31]=c->ps1[31]=RF32(ea);} // 801CE08C
  c->r[31]=c->r[3]|c->r[3]; // 801CE090
  {uint32_t ea=c->r[2]+0xFFFFA1E0u; c->f[29]=c->ps1[29]=RF32(ea);} // 801CE094
  c->r[28]=c->r[3]+0x000000F0u; // 801CE098
  {uint32_t ea=c->r[2]+0xFFFFA1ECu; c->f[30]=c->ps1[30]=RF32(ea);} // 801CE09C
  c->r[30]=c->r[3]+0x00000114u; // 801CE0A0
L_801CE0A4:;
  c->r[0]=R8(c->r[28]+0x00000008u); // 801CE0A4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801CE0A8
  if (!crb(c,2)) { goto L_801CE1E4; } // 801CE0AC
  c->r[27]=c->r[28]+0x0000000Cu; // 801CE0B0
  c->r[29]=c->r[31]+0x00000114u; // 801CE0B4
L_801CE0B8:;
  c->r[0]=R8(c->r[27]+0x00000008u); // 801CE0B8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801CE0BC
  if (!crb(c,2)) { goto L_801CE1D8; } // 801CE0C0
  {uint32_t ea=c->r[27]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 801CE0C4
  {uint32_t ea=c->r[28]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CE0C8
  {uint32_t ea=c->r[27]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CE0CC
  {uint32_t ea=c->r[28]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE0D0
  c->f[28]=c->ps1[28]=S(c->f[3]-c->f[2]); // 801CE0D4
  c->f[27]=c->ps1[27]=S(c->f[1]-c->f[0]); // 801CE0D8
  c->f[1]=c->ps1[1]=S(c->f[28]*c->f[28]); // 801CE0DC
  c->f[0]=c->ps1[0]=S(c->f[27]*c->f[27]); // 801CE0E0
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 801CE0E4
  c->lr=0x801CE0ECu; f_80216698(c); // 801CE0E8
  c->f[2]=c->ps1[2]=S(c->f[1]); // 801CE0EC
  {uint32_t ea=c->r[31]+0x00000544u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CE0F0
  {uint32_t ea=c->r[31]+0x00000548u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE0F4
  c->f[4]=c->ps1[4]=S(c->f[30]/c->f[2]); // 801CE0F8
  c->f[3]=c->ps1[3]=S(c->f[28]*c->f[4]); // 801CE0FC
  c->f[2]=c->ps1[2]=S(c->f[27]*c->f[4]); // 801CE100
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[1]); // 801CE104
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[3]);} // 801CE108
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 801CE10C
  fcmp(c,0,c->f[4],c->f[0]); // 801CE110
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801CE114
  if (crb(c,2)) { goto L_801CE1D8; } // 801CE118
  {uint32_t ea=c->r[13]+0xFFFFAAF0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE11C
  fcmp(c,0,c->f[4],c->f[0]); // 801CE120
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801CE124
  if (crb(c,2)) { goto L_801CE1D8; } // 801CE128
  {uint32_t ea=c->r[31]+0x000004D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE12C
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 801CE130
  fcmp(c,0,c->f[4],c->f[29]); // 801CE134
  if (!crb(c,0)) { goto L_801CE148; } // 801CE138
  {uint32_t ea=c->r[31]+0x0000053Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE13C
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[0]); // 801CE140
  goto L_801CE150; // 801CE144
L_801CE148:;
  {uint32_t ea=c->r[31]+0x00000538u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE148
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[0]); // 801CE14C
L_801CE150:;
  fcmp(c,0,c->f[4],c->f[30]); // 801CE150
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801CE154
  if (crb(c,2)) { goto L_801CE1D8; } // 801CE158
  {uint32_t ea=c->r[31]+0x000004C8u; c->f[3]=c->ps1[3]=RF32(ea);} // 801CE15C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CE160
  {uint32_t ea=c->r[31]+0x000004CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801CE164
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE168
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 801CE16C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801CE170
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[0]); // 801CE174
  fcmp(c,0,c->f[1],c->f[29]); // 801CE178
  if (!crb(c,0)) { goto L_801CE18C; } // 801CE17C
  c->f[1]=-c->f[1]; // 801CE180
  c->r[0]=0u+0x00000001u; // 801CE184
  goto L_801CE190; // 801CE188
L_801CE18C:;
  c->r[0]=0u+0x00000000u; // 801CE18C
L_801CE190:;
  {uint32_t ea=c->r[13]+0xFFFFAAFCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE190
  fcmp(c,0,c->f[1],c->f[0]); // 801CE194
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801CE198
  if (crb(c,2)) { goto L_801CE1D8; } // 801CE19C
  c->f[1]=c->ps1[1]=S(c->f[30]-c->f[1]); // 801CE1A0
  c->f[0]=c->ps1[0]=S(c->f[30]-c->f[0]); // 801CE1A4
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801CE1A8
  c->f[4]=c->ps1[4]=S(c->f[4]+c->f[0]); // 801CE1AC
  fcmp(c,0,c->f[4],c->f[31]); // 801CE1B0
  if (!crb(c,0)) { goto L_801CE1D8; } // 801CE1B4
  c->f[31]=c->f[4]; // 801CE1B8
  cmps(c,0,(int32_t)c->r[0],0); // 801CE1BC
  if (crb(c,2)) { goto L_801CE1D0; } // 801CE1C0
  c->r[26]=c->r[27]|c->r[27]; // 801CE1C4
  c->r[25]=c->r[28]|c->r[28]; // 801CE1C8
  goto L_801CE1D8; // 801CE1CC
L_801CE1D0:;
  c->r[26]=c->r[28]|c->r[28]; // 801CE1D0
  c->r[25]=c->r[27]|c->r[27]; // 801CE1D4
L_801CE1D8:;
  c->r[27]=c->r[27]+0x0000000Cu; // 801CE1D8
  cmpu(c,0,c->r[27],c->r[29]); // 801CE1DC
  if (!crb(c,1)) { IRQCHK(c); goto L_801CE0B8; } // 801CE1E0
L_801CE1E4:;
  c->r[28]=c->r[28]+0x0000000Cu; // 801CE1E4
  cmpu(c,0,c->r[28],c->r[30]); // 801CE1E8
  if (crb(c,0)) { IRQCHK(c); goto L_801CE0A4; } // 801CE1EC
  {uint32_t ea=c->r[2]+0xFFFFA1F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE1F0
  fcmp(c,0,c->f[0],c->f[31]); // 801CE1F4
  if (!crb(c,2)) { goto L_801CE204; } // 801CE1F8
  c->r[3]=0u+0x00000000u; // 801CE1FC
  goto L_801CE238; // 801CE200
L_801CE204:;
  c->r[4]=R32(c->r[26]+0x00000000u); // 801CE204
  c->r[3]=0u+0x00000002u; // 801CE208
  c->r[0]=R32(c->r[26]+0x00000004u); // 801CE20C
  W32(c->r[31]+0x00000124u,c->r[0]); // 801CE210
  W32(c->r[31]+0x00000120u,c->r[4]); // 801CE214
  c->r[0]=R32(c->r[26]+0x00000008u); // 801CE218
  W32(c->r[31]+0x00000128u,c->r[0]); // 801CE21C
  c->r[4]=R32(c->r[25]+0x00000000u); // 801CE220
  c->r[0]=R32(c->r[25]+0x00000004u); // 801CE224
  W32(c->r[31]+0x00000130u,c->r[0]); // 801CE228
  W32(c->r[31]+0x0000012Cu,c->r[4]); // 801CE22C
  c->r[0]=R32(c->r[25]+0x00000008u); // 801CE230
  W32(c->r[31]+0x00000134u,c->r[0]); // 801CE234
L_801CE238:;
  c->r[11]=c->r[1]+0x00000030u; // 801CE238
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,31,ea,0,0);} // 801CE23C
  {uint32_t ea=c->r[1]+0x00000070u; c->f[31]=RF64(ea);} // 801CE240
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,30,ea,0,0);} // 801CE244
  {uint32_t ea=c->r[1]+0x00000060u; c->f[30]=RF64(ea);} // 801CE248
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,29,ea,0,0);} // 801CE24C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[29]=RF64(ea);} // 801CE250
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,28,ea,0,0);} // 801CE254
  {uint32_t ea=c->r[1]+0x00000040u; c->f[28]=RF64(ea);} // 801CE258
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,27,ea,0,0);} // 801CE25C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[27]=RF64(ea);} // 801CE260
  c->lr=0x801CE268u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CE264
  c->r[0]=R32(c->r[1]+0x00000084u); // 801CE268
  c->lr=c->r[0]; // 801CE26C
  c->r[1]=c->r[1]+0x00000080u; // 801CE270
  return; // 801CE274
}

// select_1obj_first
void f_801CE280(Ctx* __restrict c) {
  trace_call(0x801CE280u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE280
  c->r[8]=c->r[3]+0x000000F0u; // 801CE284
  c->r[0]=c->r[3]+0x00000120u; // 801CE288
  {uint32_t ea=c->r[3]+0x000000DCu; c->f[5]=c->ps1[5]=RF32(ea);} // 801CE28C
  {uint32_t ea=c->r[3]+0x000004ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE290
  {uint32_t ea=c->r[3]+0x000000E0u; c->f[3]=c->ps1[3]=RF32(ea);} // 801CE294
  {uint32_t ea=c->r[3]+0x000004F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CE298
  c->f[4]=c->ps1[4]=S(c->f[5]*c->f[0]); // 801CE29C
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[0]); // 801CE2A0
  {uint32_t ea=c->r[3]+0x000004D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE2A4
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[1]); // 801CE2A8
  c->f[1]=c->ps1[1]=S(c->f[5]*c->f[1]); // 801CE2AC
  c->f[7]=c->ps1[7]=S(c->f[4]+c->f[3]); // 801CE2B0
  c->f[8]=c->ps1[8]=S(c->f[2]-c->f[1]); // 801CE2B4
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[0]); // 801CE2B8
  c->f[8]=c->ps1[8]=S(c->f[8]*c->f[0]); // 801CE2BC
L_801CE2C0:;
  c->r[4]=R8(c->r[8]+0x00000008u); // 801CE2C0
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[4]; cr0(c,c->r[4]); // 801CE2C4
  if (!crb(c,2)) { goto L_801CE41C; } // 801CE2C8
  {uint32_t ea=c->r[8]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CE2CC
  {uint32_t ea=c->r[8]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE2D0
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[7]); // 801CE2D4
  {uint32_t ea=c->r[3]+0x00000528u; c->f[3]=c->ps1[3]=RF32(ea);} // 801CE2D8
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 801CE2DC
  c->f[5]=c->ps1[5]=S(c->f[2]+c->f[7]); // 801CE2E0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 801CE2E4
  c->f[4]=c->ps1[4]=S(c->f[0]+c->f[8]); // 801CE2E8
  fcmp(c,0,c->f[1],c->f[3]); // 801CE2EC
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[6]);} // 801CE2F0
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[5]);} // 801CE2F4
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[4]);} // 801CE2F8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801CE2FC
  if (crb(c,2)) { goto L_801CE334; } // 801CE300
  {uint32_t ea=c->r[3]+0x00000530u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CE304
  fcmp(c,0,c->f[1],c->f[2]); // 801CE308
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801CE30C
  if (crb(c,2)) { goto L_801CE334; } // 801CE310
  {uint32_t ea=c->r[3]+0x0000052Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801CE314
  fcmp(c,0,c->f[6],c->f[1]); // 801CE318
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801CE31C
  if (crb(c,2)) { goto L_801CE334; } // 801CE320
  {uint32_t ea=c->r[3]+0x00000534u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE324
  fcmp(c,0,c->f[6],c->f[0]); // 801CE328
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801CE32C
  if (!crb(c,2)) { goto L_801CE3AC; } // 801CE330
L_801CE334:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CE334
  {uint32_t ea=c->r[3]+0x00000528u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE338
  fcmp(c,0,c->f[1],c->f[0]); // 801CE33C
  if (!crb(c,1)) { goto L_801CE41C; } // 801CE340
  {uint32_t ea=c->r[3]+0x00000530u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE344
  fcmp(c,0,c->f[1],c->f[0]); // 801CE348
  if (!crb(c,0)) { goto L_801CE41C; } // 801CE34C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801CE350
  {uint32_t ea=c->r[3]+0x0000052Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE354
  fcmp(c,0,c->f[1],c->f[0]); // 801CE358
  if (!crb(c,1)) { goto L_801CE41C; } // 801CE35C
  {uint32_t ea=c->r[3]+0x00000534u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE360
  fcmp(c,0,c->f[1],c->f[0]); // 801CE364
  if (!crb(c,0)) { goto L_801CE41C; } // 801CE368
  c->r[7]=R32(c->r[8]+0x00000000u); // 801CE36C
  c->r[4]=0u+0x00000000u; // 801CE370
  c->r[5]=R32(c->r[8]+0x00000004u); // 801CE374
  c->r[0]=0u+0xFFFFFFFFu; // 801CE378
  W32(c->r[3]+0x00000130u,c->r[5]); // 801CE37C
  c->r[6]=R32(c->r[1]+0x00000010u); // 801CE380
  W32(c->r[3]+0x0000012Cu,c->r[7]); // 801CE384
  c->r[5]=R32(c->r[1]+0x00000014u); // 801CE388
  c->r[7]=R32(c->r[8]+0x00000008u); // 801CE38C
  W32(c->r[3]+0x00000134u,c->r[7]); // 801CE390
  W32(c->r[3]+0x00000120u,c->r[6]); // 801CE394
  W32(c->r[3]+0x00000124u,c->r[5]); // 801CE398
  W8(c->r[3]+0x00000128u,c->r[4]); // 801CE39C
  W8(c->r[3]+0x00000129u,c->r[0]); // 801CE3A0
  c->r[3]=0u+0xFFFFFFFFu; // 801CE3A4
  goto L_801CE42C; // 801CE3A8
L_801CE3AC:;
  fcmp(c,0,c->f[5],c->f[3]); // 801CE3AC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801CE3B0
  if (crb(c,2)) { goto L_801CE3DC; } // 801CE3B4
  fcmp(c,0,c->f[5],c->f[2]); // 801CE3B8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801CE3BC
  if (crb(c,2)) { goto L_801CE3DC; } // 801CE3C0
  fcmp(c,0,c->f[4],c->f[1]); // 801CE3C4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801CE3C8
  if (crb(c,2)) { goto L_801CE3DC; } // 801CE3CC
  fcmp(c,0,c->f[4],c->f[0]); // 801CE3D0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801CE3D4
  if (!crb(c,2)) { goto L_801CE41C; } // 801CE3D8
L_801CE3DC:;
  c->r[7]=R32(c->r[8]+0x00000000u); // 801CE3DC
  c->r[4]=0u+0x00000000u; // 801CE3E0
  c->r[5]=R32(c->r[8]+0x00000004u); // 801CE3E4
  c->r[0]=0u+0xFFFFFFFFu; // 801CE3E8
  W32(c->r[3]+0x00000124u,c->r[5]); // 801CE3EC
  c->r[6]=R32(c->r[1]+0x00000008u); // 801CE3F0
  W32(c->r[3]+0x00000120u,c->r[7]); // 801CE3F4
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 801CE3F8
  c->r[7]=R32(c->r[8]+0x00000008u); // 801CE3FC
  W32(c->r[3]+0x00000128u,c->r[7]); // 801CE400
  W32(c->r[3]+0x0000012Cu,c->r[6]); // 801CE404
  W32(c->r[3]+0x00000130u,c->r[5]); // 801CE408
  W8(c->r[3]+0x00000134u,c->r[4]); // 801CE40C
  W8(c->r[3]+0x00000135u,c->r[0]); // 801CE410
  c->r[3]=0u+0xFFFFFFFFu; // 801CE414
  goto L_801CE42C; // 801CE418
L_801CE41C:;
  c->r[8]=c->r[8]+0x0000000Cu; // 801CE41C
  cmpu(c,0,c->r[8],c->r[0]); // 801CE420
  if (crb(c,0)) { IRQCHK(c); goto L_801CE2C0; } // 801CE424
  c->r[3]=0u+0x00000000u; // 801CE428
L_801CE42C:;
  c->r[1]=c->r[1]+0x00000020u; // 801CE42C
  return; // 801CE430
}

// select_1obj_continue
void f_801CE440(Ctx* __restrict c) {
  trace_call(0x801CE440u);
  {uint32_t ea=c->r[13]+0xFFFFAB08u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE440
  c->r[6]=c->r[3]+0x00000120u; // 801CE444
  c->r[0]=c->r[3]+0x00000138u; // 801CE448
  c->f[4]=c->ps1[4]=S(c->f[0]*c->f[0]); // 801CE44C
L_801CE450:;
  c->r[4]=R8(c->r[6]+0x00000008u); // 801CE450
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[4]; cr0(c,c->r[4]); // 801CE454
  if (!crb(c,2)) { goto L_801CE4C0; } // 801CE458
  c->r[4]=R8(c->r[6]+0x00000009u); // 801CE45C
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[4]; cr0(c,c->r[4]); // 801CE460
  if (!crb(c,2)) { goto L_801CE4C0; } // 801CE464
  c->r[7]=c->r[3]+0x000000F0u; // 801CE468
  c->r[4]=c->r[3]+0x00000120u; // 801CE46C
L_801CE470:;
  c->r[5]=R8(c->r[7]+0x00000008u); // 801CE470
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[5]; cr0(c,c->r[5]); // 801CE474
  if (!crb(c,2)) { goto L_801CE4B4; } // 801CE478
  {uint32_t ea=c->r[6]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 801CE47C
  {uint32_t ea=c->r[7]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CE480
  {uint32_t ea=c->r[6]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CE484
  {uint32_t ea=c->r[7]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE488
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[2]); // 801CE48C
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801CE490
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[2]); // 801CE494
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 801CE498
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801CE49C
  fcmp(c,0,c->f[0],c->f[4]); // 801CE4A0
  if (!crb(c,0)) { goto L_801CE4B4; } // 801CE4A4
  c->f[4]=c->f[0]; // 801CE4A8
  c->r[8]=c->r[6]|c->r[6]; // 801CE4AC
  c->r[9]=c->r[7]|c->r[7]; // 801CE4B0
L_801CE4B4:;
  c->r[7]=c->r[7]+0x0000000Cu; // 801CE4B4
  cmpu(c,0,c->r[7],c->r[4]); // 801CE4B8
  if (crb(c,0)) { IRQCHK(c); goto L_801CE470; } // 801CE4BC
L_801CE4C0:;
  c->r[6]=c->r[6]+0x0000000Cu; // 801CE4C0
  cmpu(c,0,c->r[6],c->r[0]); // 801CE4C4
  if (crb(c,0)) { IRQCHK(c); goto L_801CE450; } // 801CE4C8
  {uint32_t ea=c->r[13]+0xFFFFAB08u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE4CC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 801CE4D0
  fcmp(c,0,c->f[4],c->f[0]); // 801CE4D4
  if (!crb(c,2)) { goto L_801CE4E4; } // 801CE4D8
  c->r[3]=0u+0x00000000u; // 801CE4DC
  return; // 801CE4E0
L_801CE4E4:;
  c->r[4]=R32(c->r[9]+0x00000004u); // 801CE4E4
  c->r[0]=c->r[3]+0x00000120u; // 801CE4E8
  c->r[5]=R32(c->r[9]+0x00000000u); // 801CE4EC
  cmpu(c,0,c->r[8],c->r[0]); // 801CE4F0
  W32(c->r[8]+0x00000000u,c->r[5]); // 801CE4F4
  W32(c->r[8]+0x00000004u,c->r[4]); // 801CE4F8
  c->r[0]=R32(c->r[9]+0x00000008u); // 801CE4FC
  W32(c->r[8]+0x00000008u,c->r[0]); // 801CE500
  {uint32_t ea=c->r[3]+0x000000DCu; c->f[5]=c->ps1[5]=RF32(ea);} // 801CE504
  {uint32_t ea=c->r[3]+0x000004ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE508
  {uint32_t ea=c->r[3]+0x000000E0u; c->f[3]=c->ps1[3]=RF32(ea);} // 801CE50C
  {uint32_t ea=c->r[3]+0x000004F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CE510
  c->f[4]=c->ps1[4]=S(c->f[5]*c->f[0]); // 801CE514
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[0]); // 801CE518
  {uint32_t ea=c->r[3]+0x000004C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE51C
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[1]); // 801CE520
  c->f[1]=c->ps1[1]=S(c->f[5]*c->f[1]); // 801CE524
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 801CE528
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 801CE52C
  {uint32_t ea=c->r[3]+0x000004C8u; WF32(ea,c->f[3]);} // 801CE530
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[3]); // 801CE534
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[1]); // 801CE538
  {uint32_t ea=c->r[3]+0x000004CCu; WF32(ea,c->f[1]);} // 801CE53C
  if (!crb(c,2)) { goto L_801CE570; } // 801CE540
  {uint32_t ea=c->r[8]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE544
  c->r[4]=0u+0x00000000u; // 801CE548
  c->r[0]=0u+0xFFFFFFFFu; // 801CE54C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[2]); // 801CE550
  {uint32_t ea=c->r[3]+0x0000012Cu; WF32(ea,c->f[0]);} // 801CE554
  {uint32_t ea=c->r[8]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE558
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[3]); // 801CE55C
  W8(c->r[3]+0x00000134u,c->r[4]); // 801CE560
  {uint32_t ea=c->r[3]+0x00000130u; WF32(ea,c->f[0]);} // 801CE564
  W8(c->r[3]+0x00000135u,c->r[0]); // 801CE568
  goto L_801CE598; // 801CE56C
L_801CE570:;
  {uint32_t ea=c->r[8]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE570
  c->r[4]=0u+0x00000000u; // 801CE574
  c->r[0]=0u+0xFFFFFFFFu; // 801CE578
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 801CE57C
  {uint32_t ea=c->r[3]+0x00000120u; WF32(ea,c->f[0]);} // 801CE580
  {uint32_t ea=c->r[8]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE584
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 801CE588
  W8(c->r[3]+0x00000128u,c->r[4]); // 801CE58C
  {uint32_t ea=c->r[3]+0x00000124u; WF32(ea,c->f[0]);} // 801CE590
  W8(c->r[3]+0x00000129u,c->r[0]); // 801CE594
L_801CE598:;
  c->r[0]=R8(c->r[3]+0x0000005Eu); // 801CE598
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801CE59C
  if (!crb(c,0)) { goto L_801CE5AC; } // 801CE5A0
  c->r[3]=0u+0xFFFFFFFFu; // 801CE5A4
  return; // 801CE5A8
L_801CE5AC:;
  c->r[3]=0u+0x00000001u; // 801CE5AC
  return; // 801CE5B0
}

// calc_dpd_variable
void f_801CE5C0(Ctx* __restrict c) {
  trace_call(0x801CE5C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE5C0
  c->r[0]=c->lr; // 801CE5C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CE5C8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[4]; cr0(c,c->r[0]); // 801CE5CC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CE5D0
  c->r[31]=c->r[4]|c->r[4]; // 801CE5D4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CE5D8
  c->r[30]=c->r[3]|c->r[3]; // 801CE5DC
  if (!crb(c,2)) { goto L_801CE5F0; } // 801CE5E0
  c->r[0]=0u+0x00000000u; // 801CE5E4
  W8(c->r[3]+0x0000005Eu,c->r[0]); // 801CE5E8
  goto L_801CEB74; // 801CE5EC
L_801CE5F0:;
  {uint32_t ea=c->r[3]+0x000000DCu; c->f[4]=c->ps1[4]=RF32(ea);} // 801CE5F0
  {uint32_t ea=c->r[3]+0x000004C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CE5F4
  {uint32_t ea=c->r[3]+0x000000E0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CE5F8
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[1]); // 801CE5FC
  {uint32_t ea=c->r[3]+0x000004CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE600
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 801CE604
  c->r[0]=R8(c->r[3]+0x0000005Eu); // 801CE608
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[0]); // 801CE60C
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[0]); // 801CE610
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801CE614
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[2]); // 801CE618
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[0]); // 801CE61C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[3]);} // 801CE620
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[2]);} // 801CE624
  if (!crb(c,2)) { goto L_801CE658; } // 801CE628
  c->r[4]=R32(c->r[1]+0x00000010u); // 801CE62C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CE630
  W32(c->r[3]+0x00000034u,c->r[4]); // 801CE634
  {uint32_t ea=c->r[2]+0xFFFFA1E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE638
  W32(c->r[3]+0x00000038u,c->r[0]); // 801CE63C
  c->r[4]=R32(c->r[13]+0xFFFFB628u); // 801CE640
  c->r[0]=R32(c->r[13]+0xFFFFB62Cu); // 801CE644
  W32(c->r[3]+0x00000040u,c->r[0]); // 801CE648
  W32(c->r[3]+0x0000003Cu,c->r[4]); // 801CE64C
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[0]);} // 801CE650
  goto L_801CE820; // 801CE654
L_801CE658:;
  {uint32_t ea=c->r[3]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CE658
  {uint32_t ea=c->r[3]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE65C
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[1]); // 801CE660
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 801CE664
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 801CE668
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 801CE66C
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[2]); // 801CE670
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 801CE674
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 801CE678
  c->lr=0x801CE680u; f_80216698(c); // 801CE67C
  c->r[0]=R32(c->r[30]+0x00000564u); // 801CE680
  c->f[2]=c->ps1[2]=S(c->f[1]); // 801CE684
  cmps(c,0,(int32_t)c->r[0],0); // 801CE688
  if (!crb(c,2)) { goto L_801CE754; } // 801CE68C
  {uint32_t ea=c->r[30]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE690
  fcmp(c,0,c->f[2],c->f[0]); // 801CE694
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801CE698
  if (!crb(c,2)) { goto L_801CE6A8; } // 801CE69C
  {uint32_t ea=c->r[2]+0xFFFFA1ECu; c->f[4]=c->ps1[4]=RF32(ea);} // 801CE6A0
  goto L_801CE6B4; // 801CE6A4
L_801CE6A8:;
  c->f[4]=c->ps1[4]=S(c->f[2]/c->f[0]); // 801CE6A8
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[4]); // 801CE6AC
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[4]); // 801CE6B0
L_801CE6B4:;
  {uint32_t ea=c->r[30]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE6B4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 801CE6B8
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[0]); // 801CE6BC
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801CE6C0
  {uint32_t ea=c->r[30]+0x00000034u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CE6C4
  {uint32_t ea=c->r[30]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE6C8
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 801CE6CC
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[1]); // 801CE6D0
  c->f[3]=c->ps1[3]=S(c->f[2]+c->f[3]); // 801CE6D4
  c->f[2]=c->ps1[2]=S(c->f[0]+c->f[1]); // 801CE6D8
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[3]);} // 801CE6DC
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[3]); // 801CE6E0
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[2]); // 801CE6E4
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 801CE6E8
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 801CE6EC
  c->lr=0x801CE6F4u; f_80216698(c); // 801CE6F0
  c->f[4]=c->ps1[4]=S(c->f[1]); // 801CE6F4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE6F8
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801CE6FC
  {uint32_t ea=c->r[30]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CE700
  c->f[3]=c->ps1[3]=S(c->f[0]/c->f[4]); // 801CE704
  {uint32_t ea=c->r[30]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE708
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[3]);} // 801CE70C
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[4]); // 801CE710
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 801CE714
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 801CE718
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[1]); // 801CE71C
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[2]);} // 801CE720
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[2]); // 801CE724
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[1]);} // 801CE728
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 801CE72C
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 801CE730
  c->lr=0x801CE738u; f_80216698(c); // 801CE734
  c->f[0]=c->ps1[0]=S(c->f[1]); // 801CE738
  c->r[3]=R32(c->r[1]+0x00000008u); // 801CE73C
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801CE740
  {uint32_t ea=c->r[30]+0x00000044u; WF32(ea,c->f[0]);} // 801CE744
  W32(c->r[30]+0x00000034u,c->r[3]); // 801CE748
  W32(c->r[30]+0x00000038u,c->r[0]); // 801CE74C
  goto L_801CE820; // 801CE750
L_801CE754:;
  {uint32_t ea=c->r[30]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE754
  fcmp(c,0,c->f[2],c->f[0]); // 801CE758
  if (!crb(c,1)) { goto L_801CE808; } // 801CE75C
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 801CE760
  {uint32_t ea=c->r[30]+0x000000BCu; c->f[4]=c->ps1[4]=RF32(ea);} // 801CE764
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 801CE768
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801CE76C
  c->f[5]=c->ps1[5]=S(c->f[0]/c->f[2]); // 801CE770
  {uint32_t ea=c->r[30]+0x00000034u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CE774
  {uint32_t ea=c->r[30]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE778
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[5]); // 801CE77C
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[4]); // 801CE780
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[4]); // 801CE784
  c->f[3]=c->ps1[3]=S(c->f[2]+c->f[3]); // 801CE788
  c->f[2]=c->ps1[2]=S(c->f[0]+c->f[1]); // 801CE78C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[3]);} // 801CE790
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[3]); // 801CE794
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[2]); // 801CE798
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 801CE79C
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 801CE7A0
  c->lr=0x801CE7A8u; f_80216698(c); // 801CE7A4
  c->f[4]=c->ps1[4]=S(c->f[1]); // 801CE7A8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE7AC
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801CE7B0
  {uint32_t ea=c->r[30]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CE7B4
  c->f[3]=c->ps1[3]=S(c->f[0]/c->f[4]); // 801CE7B8
  {uint32_t ea=c->r[30]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE7BC
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[3]);} // 801CE7C0
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[4]); // 801CE7C4
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 801CE7C8
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 801CE7CC
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[1]); // 801CE7D0
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[2]);} // 801CE7D4
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[2]); // 801CE7D8
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[1]);} // 801CE7DC
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 801CE7E0
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 801CE7E4
  c->lr=0x801CE7ECu; f_80216698(c); // 801CE7E8
  c->f[0]=c->ps1[0]=S(c->f[1]); // 801CE7EC
  c->r[3]=R32(c->r[1]+0x00000008u); // 801CE7F0
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801CE7F4
  {uint32_t ea=c->r[30]+0x00000044u; WF32(ea,c->f[0]);} // 801CE7F8
  W32(c->r[30]+0x00000034u,c->r[3]); // 801CE7FC
  W32(c->r[30]+0x00000038u,c->r[0]); // 801CE800
  goto L_801CE820; // 801CE804
L_801CE808:;
  c->r[3]=R32(c->r[13]+0xFFFFB628u); // 801CE808
  c->r[0]=R32(c->r[13]+0xFFFFB62Cu); // 801CE80C
  {uint32_t ea=c->r[2]+0xFFFFA1E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE810
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 801CE814
  W32(c->r[30]+0x00000040u,c->r[0]); // 801CE818
  {uint32_t ea=c->r[30]+0x00000044u; WF32(ea,c->f[0]);} // 801CE81C
L_801CE820:;
  {uint32_t ea=c->r[30]+0x00000544u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CE820
  {uint32_t ea=c->r[30]+0x000004C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE824
  c->r[0]=R8(c->r[30]+0x0000005Eu); // 801CE828
  c->f[2]=c->ps1[2]=S(c->f[1]/c->f[0]); // 801CE82C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801CE830
  if (!crb(c,2)) { goto L_801CE84C; } // 801CE834
  {uint32_t ea=c->r[2]+0xFFFFA1E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE838
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[2]);} // 801CE83C
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[0]);} // 801CE840
  {uint32_t ea=c->r[30]+0x00000050u; WF32(ea,c->f[0]);} // 801CE844
  goto L_801CE93C; // 801CE848
L_801CE84C:;
  {uint32_t ea=c->r[30]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CE84C
  {uint32_t ea=c->r[2]+0xFFFFA1E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE850
  c->f[4]=c->ps1[4]=S(c->f[2]-c->f[1]); // 801CE854
  fcmp(c,0,c->f[4],c->f[0]); // 801CE858
  if (!crb(c,0)) { goto L_801CE868; } // 801CE85C
  c->f[3]=-c->f[4]; // 801CE860
  goto L_801CE86C; // 801CE864
L_801CE868:;
  c->f[3]=c->f[4]; // 801CE868
L_801CE86C:;
  c->r[0]=R32(c->r[30]+0x00000568u); // 801CE86C
  cmps(c,0,(int32_t)c->r[0],0); // 801CE870
  if (!crb(c,2)) { goto L_801CE8DC; } // 801CE874
  {uint32_t ea=c->r[30]+0x000000C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE878
  fcmp(c,0,c->f[3],c->f[0]); // 801CE87C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801CE880
  if (!crb(c,2)) { goto L_801CE890; } // 801CE884
  {uint32_t ea=c->r[2]+0xFFFFA1ECu; c->f[3]=c->ps1[3]=RF32(ea);} // 801CE888
  goto L_801CE89C; // 801CE88C
L_801CE890:;
  c->f[3]=c->ps1[3]=S(c->f[3]/c->f[0]); // 801CE890
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[3]); // 801CE894
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[3]); // 801CE898
L_801CE89C:;
  {uint32_t ea=c->r[30]+0x000000C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CE89C
  {uint32_t ea=c->r[2]+0xFFFFA1E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE8A0
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[1]); // 801CE8A4
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[4]); // 801CE8A8
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[1]);} // 801CE8AC
  fcmp(c,0,c->f[1],c->f[0]); // 801CE8B0
  if (!crb(c,0)) { goto L_801CE8C4; } // 801CE8B4
  c->f[0]=-c->f[1]; // 801CE8B8
  {uint32_t ea=c->r[30]+0x00000050u; WF32(ea,c->f[0]);} // 801CE8BC
  goto L_801CE8C8; // 801CE8C0
L_801CE8C4:;
  {uint32_t ea=c->r[30]+0x00000050u; WF32(ea,c->f[1]);} // 801CE8C4
L_801CE8C8:;
  {uint32_t ea=c->r[30]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CE8C8
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE8CC
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801CE8D0
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[0]);} // 801CE8D4
  goto L_801CE93C; // 801CE8D8
L_801CE8DC:;
  {uint32_t ea=c->r[30]+0x000000C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE8DC
  fcmp(c,0,c->f[3],c->f[0]); // 801CE8E0
  if (!crb(c,1)) { goto L_801CE930; } // 801CE8E4
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[0]); // 801CE8E8
  {uint32_t ea=c->r[30]+0x000000C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CE8EC
  {uint32_t ea=c->r[2]+0xFFFFA1E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE8F0
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[3]); // 801CE8F4
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 801CE8F8
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[4]); // 801CE8FC
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[1]);} // 801CE900
  fcmp(c,0,c->f[1],c->f[0]); // 801CE904
  if (!crb(c,0)) { goto L_801CE918; } // 801CE908
  c->f[0]=-c->f[1]; // 801CE90C
  {uint32_t ea=c->r[30]+0x00000050u; WF32(ea,c->f[0]);} // 801CE910
  goto L_801CE91C; // 801CE914
L_801CE918:;
  {uint32_t ea=c->r[30]+0x00000050u; WF32(ea,c->f[1]);} // 801CE918
L_801CE91C:;
  {uint32_t ea=c->r[30]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CE91C
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE920
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801CE924
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[0]);} // 801CE928
  goto L_801CE93C; // 801CE92C
L_801CE930:;
  {uint32_t ea=c->r[2]+0xFFFFA1E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE930
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[0]);} // 801CE934
  {uint32_t ea=c->r[30]+0x00000050u; WF32(ea,c->f[0]);} // 801CE938
L_801CE93C:;
  {uint32_t ea=c->r[30]+0x000004CCu; c->f[2]=c->ps1[2]=RF32(ea);} // 801CE93C
  {uint32_t ea=c->r[30]+0x000000E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE940
  c->f[1]=-c->f[2]; // 801CE944
  c->r[0]=R8(c->r[30]+0x0000005Eu); // 801CE948
  {uint32_t ea=c->r[30]+0x000004C8u; c->f[5]=c->ps1[5]=RF32(ea);} // 801CE94C
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[0]); // 801CE950
  {uint32_t ea=c->r[30]+0x000000DCu; c->f[4]=c->ps1[4]=RF32(ea);} // 801CE954
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801CE958
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 801CE95C
  {uint32_t ea=c->r[30]+0x00000120u; c->f[7]=c->ps1[7]=RF32(ea);} // 801CE960
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[4]); // 801CE964
  {uint32_t ea=c->r[30]+0x0000012Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 801CE968
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[4]); // 801CE96C
  {uint32_t ea=c->r[30]+0x00000124u; c->f[4]=c->ps1[4]=RF32(ea);} // 801CE970
  {uint32_t ea=c->r[30]+0x00000130u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CE974
  c->f[7]=c->ps1[7]=S(c->f[7]+c->f[6]); // 801CE978
  {uint32_t ea=c->r[2]+0xFFFFA1E4u; c->f[8]=c->ps1[8]=RF32(ea);} // 801CE97C
  c->f[3]=c->ps1[3]=S(c->f[5]+c->f[3]); // 801CE980
  c->f[6]=c->ps1[6]=S(c->f[4]+c->f[1]); // 801CE984
  {uint32_t ea=c->r[30]+0x000000D8u; c->f[4]=c->ps1[4]=RF32(ea);} // 801CE988
  c->f[7]=c->ps1[7]=S(c->f[8]*c->f[7]); // 801CE98C
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[0]); // 801CE990
  {uint32_t ea=c->r[30]+0x000000D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CE994
  c->f[5]=c->ps1[5]=S(c->f[8]*c->f[6]); // 801CE998
  c->f[9]=c->ps1[9]=S(c->f[3]*c->f[7]); // 801CE99C
  {uint32_t ea=c->r[30]+0x000000E4u; c->f[6]=c->ps1[6]=RF32(ea);} // 801CE9A0
  c->f[7]=c->ps1[7]=S(c->f[2]*c->f[7]); // 801CE9A4
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[5]); // 801CE9A8
  {uint32_t ea=c->r[30]+0x000000E8u; c->f[3]=c->ps1[3]=RF32(ea);} // 801CE9AC
  c->f[8]=c->ps1[8]=S(c->f[2]*c->f[5]); // 801CE9B0
  {uint32_t ea=c->r[30]+0x000000ECu; c->f[5]=c->ps1[5]=RF32(ea);} // 801CE9B4
  c->f[2]=-c->f[4]; // 801CE9B8
  c->f[7]=c->ps1[7]=S(c->f[7]+c->f[0]); // 801CE9BC
  c->f[8]=c->ps1[8]=S(c->f[9]-c->f[8]); // 801CE9C0
  c->f[0]=-c->f[1]; // 801CE9C4
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[7]); // 801CE9C8
  c->f[6]=c->ps1[6]=S(c->f[6]-c->f[8]); // 801CE9CC
  c->f[6]=c->ps1[6]=S(c->f[5]*c->f[6]); // 801CE9D0
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[3]); // 801CE9D4
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[6]);} // 801CE9D8
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[6]); // 801CE9DC
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[5]); // 801CE9E0
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[5]);} // 801CE9E4
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[6]); // 801CE9E8
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[5]); // 801CE9EC
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[2]); // 801CE9F0
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[0]); // 801CE9F4
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[3]);} // 801CE9F8
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[2]);} // 801CE9FC
  if (!crb(c,2)) { goto L_801CEA30; } // 801CEA00
  c->r[3]=R32(c->r[1]+0x00000010u); // 801CEA04
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CEA08
  W32(c->r[30]+0x00000020u,c->r[3]); // 801CEA0C
  {uint32_t ea=c->r[2]+0xFFFFA1E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CEA10
  W32(c->r[30]+0x00000024u,c->r[0]); // 801CEA14
  c->r[3]=R32(c->r[13]+0xFFFFB628u); // 801CEA18
  c->r[0]=R32(c->r[13]+0xFFFFB62Cu); // 801CEA1C
  W32(c->r[30]+0x0000002Cu,c->r[0]); // 801CEA20
  W32(c->r[30]+0x00000028u,c->r[3]); // 801CEA24
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[0]);} // 801CEA28
  goto L_801CEB70; // 801CEA2C
L_801CEA30:;
  {uint32_t ea=c->r[30]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CEA30
  {uint32_t ea=c->r[30]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CEA34
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[1]); // 801CEA38
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 801CEA3C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 801CEA40
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 801CEA44
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[2]); // 801CEA48
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 801CEA4C
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 801CEA50
  c->lr=0x801CEA58u; f_80216698(c); // 801CEA54
  c->r[0]=R32(c->r[30]+0x00000560u); // 801CEA58
  c->f[4]=c->ps1[4]=S(c->f[1]); // 801CEA5C
  cmps(c,0,(int32_t)c->r[0],0); // 801CEA60
  if (!crb(c,2)) { goto L_801CEAE8; } // 801CEA64
  {uint32_t ea=c->r[30]+0x000000B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CEA68
  fcmp(c,0,c->f[4],c->f[0]); // 801CEA6C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801CEA70
  if (!crb(c,2)) { goto L_801CEA80; } // 801CEA74
  {uint32_t ea=c->r[2]+0xFFFFA1ECu; c->f[2]=c->ps1[2]=RF32(ea);} // 801CEA78
  goto L_801CEA8C; // 801CEA7C
L_801CEA80:;
  c->f[2]=c->ps1[2]=S(c->f[4]/c->f[0]); // 801CEA80
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 801CEA84
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 801CEA88
L_801CEA8C:;
  {uint32_t ea=c->r[30]+0x000000B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CEA8C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CEA90
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[0]); // 801CEA94
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CEA98
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 801CEA9C
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[0]); // 801CEAA0
  {uint32_t ea=c->r[30]+0x00000028u; WF32(ea,c->f[1]);} // 801CEAA4
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 801CEAA8
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[2]); // 801CEAAC
  {uint32_t ea=c->r[30]+0x0000002Cu; WF32(ea,c->f[2]);} // 801CEAB0
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 801CEAB4
  c->lr=0x801CEABCu; f_80216698(c); // 801CEAB8
  c->f[4]=c->ps1[4]=S(c->f[1]); // 801CEABC
  {uint32_t ea=c->r[30]+0x00000020u; c->f[3]=c->ps1[3]=RF32(ea);} // 801CEAC0
  {uint32_t ea=c->r[30]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CEAC4
  {uint32_t ea=c->r[30]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CEAC8
  {uint32_t ea=c->r[30]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CEACC
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 801CEAD0
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[4]);} // 801CEAD4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801CEAD8
  {uint32_t ea=c->r[30]+0x00000020u; WF32(ea,c->f[2]);} // 801CEADC
  {uint32_t ea=c->r[30]+0x00000024u; WF32(ea,c->f[0]);} // 801CEAE0
  goto L_801CEB70; // 801CEAE4
L_801CEAE8:;
  {uint32_t ea=c->r[30]+0x000000B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CEAE8
  fcmp(c,0,c->f[4],c->f[0]); // 801CEAEC
  if (!crb(c,1)) { goto L_801CEB58; } // 801CEAF0
  c->f[3]=c->ps1[3]=S(c->f[4]-c->f[0]); // 801CEAF4
  {uint32_t ea=c->r[30]+0x000000B4u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CEAF8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CEAFC
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CEB00
  c->f[3]=c->ps1[3]=S(c->f[3]/c->f[4]); // 801CEB04
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[3]); // 801CEB08
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 801CEB0C
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[0]); // 801CEB10
  {uint32_t ea=c->r[30]+0x00000028u; WF32(ea,c->f[1]);} // 801CEB14
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 801CEB18
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[2]); // 801CEB1C
  {uint32_t ea=c->r[30]+0x0000002Cu; WF32(ea,c->f[2]);} // 801CEB20
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 801CEB24
  c->lr=0x801CEB2Cu; f_80216698(c); // 801CEB28
  c->f[4]=c->ps1[4]=S(c->f[1]); // 801CEB2C
  {uint32_t ea=c->r[30]+0x00000020u; c->f[3]=c->ps1[3]=RF32(ea);} // 801CEB30
  {uint32_t ea=c->r[30]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CEB34
  {uint32_t ea=c->r[30]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CEB38
  {uint32_t ea=c->r[30]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CEB3C
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 801CEB40
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[4]);} // 801CEB44
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801CEB48
  {uint32_t ea=c->r[30]+0x00000020u; WF32(ea,c->f[2]);} // 801CEB4C
  {uint32_t ea=c->r[30]+0x00000024u; WF32(ea,c->f[0]);} // 801CEB50
  goto L_801CEB70; // 801CEB54
L_801CEB58:;
  c->r[3]=R32(c->r[13]+0xFFFFB628u); // 801CEB58
  c->r[0]=R32(c->r[13]+0xFFFFB62Cu); // 801CEB5C
  {uint32_t ea=c->r[2]+0xFFFFA1E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CEB60
  W32(c->r[30]+0x00000028u,c->r[3]); // 801CEB64
  W32(c->r[30]+0x0000002Cu,c->r[0]); // 801CEB68
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[0]);} // 801CEB6C
L_801CEB70:;
  W8(c->r[30]+0x0000005Eu,c->r[31]); // 801CEB70
L_801CEB74:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CEB74
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CEB78
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CEB7C
  c->lr=c->r[0]; // 801CEB80
  c->r[1]=c->r[1]+0x00000020u; // 801CEB84
  return; // 801CEB88
}

// read_kpad_dpd
void f_801CEB90(Ctx* __restrict c) {
  trace_call(0x801CEB90u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CEB90
  c->r[0]=c->lr; // 801CEB94
  W32(c->r[1]+0x00000044u,c->r[0]); // 801CEB98
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 801CEB9C
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 801CEBA0
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 801CEBA4
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 801CEBA8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CEBAC
  c->r[31]=c->r[3]|c->r[3]; // 801CEBB0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CEBB4
  c->r[0]=R8(c->r[4]+0x00000036u); // 801CEBB8
  cmpu(c,0,c->r[0],0x00000002u); // 801CEBBC
  if (crb(c,2)) { goto L_801CEBE8; } // 801CEBC0
  cmpu(c,0,c->r[0],0x00000005u); // 801CEBC4
  if (crb(c,2)) { goto L_801CEBE8; } // 801CEBC8
  cmpu(c,0,c->r[0],0x00000008u); // 801CEBCC
  if (crb(c,2)) { goto L_801CEBE8; } // 801CEBD0
  cmpu(c,0,c->r[0],0x0000000Bu); // 801CEBD4
  if (!crb(c,2)) { goto L_801CEC88; } // 801CEBD8
  c->r[0]=R8(c->r[3]+0x00000557u); // 801CEBDC
  cmps(c,0,(int32_t)c->r[0],0); // 801CEBE0
  if (crb(c,2)) { goto L_801CEC88; } // 801CEBE4
L_801CEBE8:;
  {uint32_t ea=c->r[2]+0xFFFFA200u; c->f[4]=RF64(ea);} // 801CEBE8
  c->r[8]=c->r[4]+0x00000020u; // 801CEBEC
  {uint32_t ea=c->r[2]+0xFFFFA208u; c->f[3]=c->ps1[3]=RF32(ea);} // 801CEBF0
  c->r[9]=c->r[3]+0x00000114u; // 801CEBF4
  {uint32_t ea=c->r[2]+0xFFFFA20Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801CEBF8
  c->r[0]=c->r[3]+0x000000F0u; // 801CEBFC
  {uint32_t ea=c->r[2]+0xFFFFA210u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CEC00
  c->r[4]=0u+0xFFFFFFFFu; // 801CEC04
  c->r[7]=0u+0x43300000u; // 801CEC08
  c->r[5]=0u+0x00000000u; // 801CEC0C
L_801CEC10:;
  c->r[6]=R16(c->r[8]+0x00000004u); // 801CEC10
  cmps(c,0,(int32_t)c->r[6],0); // 801CEC14
  if (crb(c,2)) { goto L_801CEC70; } // 801CEC18
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[8]+0x00000000u); // 801CEC1C
  W32(c->r[1]+0x00000008u,c->r[7]); // 801CEC20
  c->r[6]=c->r[6]^0x80000000u; // 801CEC24
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 801CEC28
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801CEC2C
  W32(c->r[1]+0x00000010u,c->r[7]); // 801CEC30
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 801CEC34
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 801CEC38
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 801CEC3C
  {uint32_t ea=c->r[9]+0x00000000u; WF32(ea,c->f[0]);} // 801CEC40
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[8]+0x00000002u); // 801CEC44
  c->r[6]=c->r[6]^0x80000000u; // 801CEC48
  W32(c->r[1]+0x00000014u,c->r[6]); // 801CEC4C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801CEC50
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 801CEC54
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 801CEC58
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801CEC5C
  {uint32_t ea=c->r[9]+0x00000004u; WF32(ea,c->f[0]);} // 801CEC60
  W8(c->r[9]+0x00000008u,c->r[5]); // 801CEC64
  W8(c->r[9]+0x00000009u,c->r[5]); // 801CEC68
  goto L_801CEC74; // 801CEC6C
L_801CEC70:;
  W8(c->r[9]+0x00000008u,c->r[4]); // 801CEC70
L_801CEC74:;
  c->r[9]=c->r[9]+0xFFFFFFF4u; // 801CEC74
  c->r[8]=c->r[8]+0xFFFFFFF8u; // 801CEC78
  cmpu(c,0,c->r[9],c->r[0]); // 801CEC7C
  if (!crb(c,0)) { IRQCHK(c); goto L_801CEC10; } // 801CEC80
  goto L_801CECA8; // 801CEC84
L_801CEC88:;
  c->r[5]=c->r[3]+0x00000114u; // 801CEC88
  c->r[0]=c->r[3]+0x000000F0u; // 801CEC8C
  c->r[4]=0u+0xFFFFFFFFu; // 801CEC90
  c->r[0]=c->r[0]|0x00000000u; // 801CEC94
L_801CEC98:;
  W8(c->r[5]+0x00000008u,c->r[4]); // 801CEC98
  c->r[5]=c->r[5]+0xFFFFFFF4u; // 801CEC9C
  cmpu(c,0,c->r[5],c->r[0]); // 801CECA0
  if (!crb(c,0)) { IRQCHK(c); goto L_801CEC98; } // 801CECA4
L_801CECA8:;
  c->r[7]=c->r[3]+0x00000114u; // 801CECA8
  c->r[6]=c->r[3]+0x000000F0u; // 801CECAC
  c->r[4]=c->r[7]|c->r[7]; // 801CECB0
  c->r[0]=c->r[0]|0x00000000u; // 801CECB4
L_801CECB8:;
  c->r[0]=R8(c->r[4]+0x00000008u); // 801CECB8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801CECBC
  if (crb(c,0)) { goto L_801CED18; } // 801CECC0
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CECC4
  {uint32_t ea=c->r[3]+0x00000528u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CECC8
  fcmp(c,0,c->f[1],c->f[0]); // 801CECCC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801CECD0
  if (crb(c,2)) { goto L_801CED0C; } // 801CECD4
  {uint32_t ea=c->r[3]+0x00000530u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CECD8
  fcmp(c,0,c->f[1],c->f[0]); // 801CECDC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801CECE0
  if (crb(c,2)) { goto L_801CED0C; } // 801CECE4
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CECE8
  {uint32_t ea=c->r[3]+0x0000052Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CECEC
  fcmp(c,0,c->f[1],c->f[0]); // 801CECF0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801CECF4
  if (crb(c,2)) { goto L_801CED0C; } // 801CECF8
  {uint32_t ea=c->r[3]+0x00000534u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CECFC
  fcmp(c,0,c->f[1],c->f[0]); // 801CED00
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801CED04
  if (!crb(c,2)) { goto L_801CED18; } // 801CED08
L_801CED0C:;
  c->r[0]=R8(c->r[4]+0x00000008u); // 801CED0C
  c->r[0]=c->r[0]|0x00000001u; // 801CED10
  W8(c->r[4]+0x00000008u,c->r[0]); // 801CED14
L_801CED18:;
  c->r[4]=c->r[4]+0xFFFFFFF4u; // 801CED18
  cmpu(c,0,c->r[4],c->r[6]); // 801CED1C
  if (!crb(c,0)) { IRQCHK(c); goto L_801CECB8; } // 801CED20
  c->r[0]=c->r[0]|0x00000000u; // 801CED24
L_801CED28:;
  c->r[0]=R8(c->r[6]+0x00000008u); // 801CED28
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801CED2C
  if (!crb(c,2)) { goto L_801CED78; } // 801CED30
  c->r[5]=c->r[6]+0x0000000Cu; // 801CED34
L_801CED38:;
  c->r[4]=R8(c->r[5]+0x00000008u); // 801CED38
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[4]; cr0(c,c->r[0]); // 801CED3C
  if (!crb(c,2)) { goto L_801CED6C; } // 801CED40
  {uint32_t ea=c->r[6]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CED44
  {uint32_t ea=c->r[5]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CED48
  fcmp(c,0,c->f[1],c->f[0]); // 801CED4C
  if (!crb(c,2)) { goto L_801CED6C; } // 801CED50
  {uint32_t ea=c->r[6]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CED54
  {uint32_t ea=c->r[5]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CED58
  fcmp(c,0,c->f[1],c->f[0]); // 801CED5C
  if (!crb(c,2)) { goto L_801CED6C; } // 801CED60
  c->r[0]=c->r[4]|0x00000002u; // 801CED64
  W8(c->r[5]+0x00000008u,c->r[0]); // 801CED68
L_801CED6C:;
  c->r[5]=c->r[5]+0x0000000Cu; // 801CED6C
  cmpu(c,0,c->r[5],c->r[7]); // 801CED70
  if (!crb(c,1)) { IRQCHK(c); goto L_801CED38; } // 801CED74
L_801CED78:;
  c->r[6]=c->r[6]+0x0000000Cu; // 801CED78
  cmpu(c,0,c->r[6],c->r[7]); // 801CED7C
  if (crb(c,0)) { IRQCHK(c); goto L_801CED28; } // 801CED80
  c->r[0]=0u+0x00000000u; // 801CED84
  W16(c->r[3]+0x00000138u,c->r[0]); // 801CED88
  c->r[5]=c->r[3]+0x00000114u; // 801CED8C
  c->r[0]=c->r[3]+0x000000F0u; // 801CED90
  c->r[0]=c->r[0]|0x00000000u; // 801CED94
L_801CED98:;
  c->r[4]=R8(c->r[5]+0x00000008u); // 801CED98
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[4]; cr0(c,c->r[4]); // 801CED9C
  if (!crb(c,2)) { goto L_801CEDB0; } // 801CEDA0
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000138u); // 801CEDA4
  c->r[4]=c->r[4]+0x00000001u; // 801CEDA8
  W16(c->r[3]+0x00000138u,c->r[4]); // 801CEDAC
L_801CEDB0:;
  c->r[5]=c->r[5]+0xFFFFFFF4u; // 801CEDB0
  cmpu(c,0,c->r[5],c->r[0]); // 801CEDB4
  if (!crb(c,0)) { IRQCHK(c); goto L_801CED98; } // 801CEDB8
  {uint32_t ea=c->r[3]+0x00000054u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CEDBC
  {uint32_t ea=c->r[13]+0xFFFFAB04u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CEDC0
  fcmp(c,0,c->f[1],c->f[0]); // 801CEDC4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801CEDC8
  if (crb(c,2)) { goto L_801CEEC0; } // 801CEDCC
  c->r[0]=R8(c->r[3]+0x0000005Eu); // 801CEDD0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801CEDD4
  cmps(c,0,(int32_t)c->r[0],2); // 801CEDD8
  if (crb(c,2)) { goto L_801CEDE8; } // 801CEDDC
  cmps(c,0,(int32_t)c->r[0],-2); // 801CEDE0
  if (!crb(c,2)) { goto L_801CEE2C; } // 801CEDE4
L_801CEDE8:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000138u); // 801CEDE8
  cmps(c,0,(int32_t)c->r[0],2); // 801CEDEC
  if (crb(c,0)) { goto L_801CEE08; } // 801CEDF0
  c->r[3]=c->r[31]|c->r[31]; // 801CEDF4
  c->lr=0x801CEDFCu; f_801CE050(c); // 801CEDF8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[0]); // 801CEDFC
  c->r[30]=c->r[3]|c->r[3]; // 801CEE00
  if (!crb(c,2)) { goto L_801CEEC4; } // 801CEE04
L_801CEE08:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x00000138u); // 801CEE08
  cmps(c,0,(int32_t)c->r[0],1); // 801CEE0C
  if (crb(c,0)) { goto L_801CEEC0; } // 801CEE10
  c->r[3]=c->r[31]|c->r[31]; // 801CEE14
  c->lr=0x801CEE1Cu; f_801CE440(c); // 801CEE18
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[0]); // 801CEE1C
  c->r[30]=c->r[3]|c->r[3]; // 801CEE20
  if (!crb(c,2)) { goto L_801CEEC4; } // 801CEE24
  goto L_801CEEC0; // 801CEE28
L_801CEE2C:;
  cmps(c,0,(int32_t)c->r[0],1); // 801CEE2C
  if (crb(c,2)) { goto L_801CEE3C; } // 801CEE30
  cmps(c,0,(int32_t)c->r[0],-1); // 801CEE34
  if (!crb(c,2)) { goto L_801CEE80; } // 801CEE38
L_801CEE3C:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000138u); // 801CEE3C
  cmps(c,0,(int32_t)c->r[0],2); // 801CEE40
  if (crb(c,0)) { goto L_801CEE5C; } // 801CEE44
  c->r[3]=c->r[31]|c->r[31]; // 801CEE48
  c->lr=0x801CEE50u; f_801CDE60(c); // 801CEE4C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[0]); // 801CEE50
  c->r[30]=c->r[3]|c->r[3]; // 801CEE54
  if (!crb(c,2)) { goto L_801CEEC4; } // 801CEE58
L_801CEE5C:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x00000138u); // 801CEE5C
  cmps(c,0,(int32_t)c->r[0],1); // 801CEE60
  if (crb(c,0)) { goto L_801CEEC0; } // 801CEE64
  c->r[3]=c->r[31]|c->r[31]; // 801CEE68
  c->lr=0x801CEE70u; f_801CE440(c); // 801CEE6C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[0]); // 801CEE70
  c->r[30]=c->r[3]|c->r[3]; // 801CEE74
  if (!crb(c,2)) { goto L_801CEEC4; } // 801CEE78
  goto L_801CEEC0; // 801CEE7C
L_801CEE80:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000138u); // 801CEE80
  cmps(c,0,(int32_t)c->r[0],2); // 801CEE84
  if (crb(c,0)) { goto L_801CEEA0; } // 801CEE88
  c->r[3]=c->r[31]|c->r[31]; // 801CEE8C
  c->lr=0x801CEE94u; f_801CDE60(c); // 801CEE90
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[0]); // 801CEE94
  c->r[30]=c->r[3]|c->r[3]; // 801CEE98
  if (!crb(c,2)) { goto L_801CEEC4; } // 801CEE9C
L_801CEEA0:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x00000138u); // 801CEEA0
  cmps(c,0,(int32_t)c->r[0],1); // 801CEEA4
  if (!crb(c,2)) { goto L_801CEEC0; } // 801CEEA8
  c->r[3]=c->r[31]|c->r[31]; // 801CEEAC
  c->lr=0x801CEEB4u; f_801CE280(c); // 801CEEB0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[0]); // 801CEEB4
  c->r[30]=c->r[3]|c->r[3]; // 801CEEB8
  if (!crb(c,2)) { goto L_801CEEC4; } // 801CEEBC
L_801CEEC0:;
  c->r[30]=0u+0x00000000u; // 801CEEC0
L_801CEEC4:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[30]; cr0(c,c->r[0]); // 801CEEC4
  if (crb(c,2)) { goto L_801CEFD0; } // 801CEEC8
  {uint32_t ea=c->r[31]+0x0000012Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801CEECC
  {uint32_t ea=c->r[31]+0x00000120u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CEED0
  {uint32_t ea=c->r[31]+0x00000130u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CEED4
  {uint32_t ea=c->r[31]+0x00000124u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CEED8
  c->f[30]=c->ps1[30]=S(c->f[3]-c->f[2]); // 801CEEDC
  c->f[31]=c->ps1[31]=S(c->f[1]-c->f[0]); // 801CEEE0
  c->f[1]=c->ps1[1]=S(c->f[30]*c->f[30]); // 801CEEE4
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[31]); // 801CEEE8
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 801CEEEC
  c->lr=0x801CEEF4u; f_80216698(c); // 801CEEF0
  c->f[3]=c->ps1[3]=S(c->f[1]); // 801CEEF4
  {uint32_t ea=c->r[2]+0xFFFFA1ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CEEF8
  c->r[0]=R16(c->r[31]+0x000004FCu); // 801CEEFC
  {uint32_t ea=c->r[31]+0x00000544u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CEF00
  c->f[2]=c->ps1[2]=S(c->f[0]/c->f[3]); // 801CEF04
  {uint32_t ea=c->r[31]+0x000000DCu; c->f[4]=c->ps1[4]=RF32(ea);} // 801CEF08
  {uint32_t ea=c->r[31]+0x000000E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CEF0C
  cmps(c,0,(int32_t)c->r[0],0); // 801CEF10
  {uint32_t ea=c->r[31]+0x000004C4u; WF32(ea,c->f[3]);} // 801CEF14
  c->f[30]=c->ps1[30]=S(c->f[30]*c->f[2]); // 801CEF18
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[2]); // 801CEF1C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 801CEF20
  {uint32_t ea=c->r[31]+0x000004C8u; WF32(ea,c->f[30]);} // 801CEF24
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[30]); // 801CEF28
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[31]); // 801CEF2C
  {uint32_t ea=c->r[31]+0x000004D0u; WF32(ea,c->f[1]);} // 801CEF30
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[30]); // 801CEF34
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[31]); // 801CEF38
  {uint32_t ea=c->r[31]+0x000004CCu; WF32(ea,c->f[31]);} // 801CEF3C
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 801CEF40
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[0]); // 801CEF44
  {uint32_t ea=c->r[31]+0x000004E4u; WF32(ea,c->f[2]);} // 801CEF48
  {uint32_t ea=c->r[31]+0x000004E8u; WF32(ea,c->f[3]);} // 801CEF4C
  if (!crb(c,2)) { goto L_801CEF88; } // 801CEF50
  {uint32_t ea=c->r[31]+0x000004ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CEF54
  {uint32_t ea=c->r[31]+0x000004F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CEF58
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[0]); // 801CEF5C
  {uint32_t ea=c->r[13]+0xFFFFAB00u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CEF60
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 801CEF64
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 801CEF68
  fcmp(c,0,c->f[1],c->f[0]); // 801CEF6C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801CEF70
  if (!crb(c,2)) { goto L_801CEF88; } // 801CEF74
  c->r[0]=0u+0x00000001u; // 801CEF78
  W8(c->r[31]+0x00000134u,c->r[0]); // 801CEF7C
  c->r[30]=0u+0x00000000u; // 801CEF80
  W8(c->r[31]+0x00000128u,c->r[0]); // 801CEF84
L_801CEF88:;
  c->r[0]=R8(c->r[31]+0x0000005Eu); // 801CEF88
  cmps(c,0,(int32_t)c->r[0],2); // 801CEF8C
  if (!crb(c,2)) { goto L_801CEFC4; } // 801CEF90
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[30]; // 801CEF94
  cmps(c,0,(int32_t)c->r[0],2); // 801CEF98
  if (!crb(c,2)) { goto L_801CEFC4; } // 801CEF9C
  c->r[3]=R8(c->r[31]+0x000004FEu); // 801CEFA0
  cmpu(c,0,c->r[3],0x000000C8u); // 801CEFA4
  if (!crb(c,2)) { goto L_801CEFB8; } // 801CEFA8
  {uint32_t ea=c->r[31]+0x000004C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CEFAC
  {uint32_t ea=c->r[31]+0x000004D4u; WF32(ea,c->f[0]);} // 801CEFB0
  goto L_801CEFD8; // 801CEFB4
L_801CEFB8:;
  c->r[0]=c->r[3]+0x00000001u; // 801CEFB8
  W8(c->r[31]+0x000004FEu,c->r[0]); // 801CEFBC
  goto L_801CEFD8; // 801CEFC0
L_801CEFC4:;
  c->r[0]=0u+0x00000000u; // 801CEFC4
  W8(c->r[31]+0x000004FEu,c->r[0]); // 801CEFC8
  goto L_801CEFD8; // 801CEFCC
L_801CEFD0:;
  c->r[0]=0u+0x00000000u; // 801CEFD0
  W8(c->r[31]+0x000004FEu,c->r[0]); // 801CEFD4
L_801CEFD8:;
  c->r[3]=c->r[31]|c->r[31]; // 801CEFD8
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[30]; // 801CEFDC
  c->lr=0x801CEFE4u; f_801CE5C0(c); // 801CEFE0
  c->r[0]=R32(c->r[1]+0x00000044u); // 801CEFE4
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 801CEFE8
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 801CEFEC
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 801CEFF0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 801CEFF4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CEFF8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CEFFC
  c->lr=c->r[0]; // 801CF000
  c->r[1]=c->r[1]+0x00000040u; // 801CF004
  return; // 801CF008
}

// clamp_stick_circle
void f_801CF010(Ctx* __restrict c) {
  trace_call(0x801CF010u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF010
  c->r[0]=c->lr; // 801CF014
  c->r[8]=0u+0x43300000u; // 801CF018
  c->r[5]=c->r[5]^0x80000000u; // 801CF01C
  W32(c->r[1]+0x00000064u,c->r[0]); // 801CF020
  c->r[0]=c->r[4]^0x80000000u; // 801CF024
  {uint32_t ea=c->r[2]+0xFFFFA200u; c->f[4]=RF64(ea);} // 801CF028
  c->r[4]=c->r[6]^0x80000000u; // 801CF02C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801CF030
  c->r[0]=c->r[7]^0x80000000u; // 801CF034
  W32(c->r[1]+0x00000008u,c->r[8]); // 801CF038
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 801CF03C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801CF040
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 801CF044
  c->f[31]=c->ps1[31]=S(c->f[0]-c->f[4]); // 801CF048
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 801CF04C
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 801CF050
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[31]); // 801CF054
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[29]);} // 801CF058
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,29,ea,0,0);} // 801CF05C
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801CF060
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[28]);} // 801CF064
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 801CF068
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,28,ea,0,0);} // 801CF06C
  c->f[29]=c->ps1[29]=S(c->f[3]-c->f[4]); // 801CF070
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CF074
  c->r[31]=c->r[3]|c->r[3]; // 801CF078
  W32(c->r[1]+0x00000010u,c->r[8]); // 801CF07C
  W32(c->r[1]+0x00000014u,c->r[5]); // 801CF080
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801CF084
  c->f[30]=c->ps1[30]=S(c->f[0]-c->f[4]); // 801CF088
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CF08C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 801CF090
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[30]); // 801CF094
  c->f[28]=c->ps1[28]=S(c->f[2]-c->f[4]); // 801CF098
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 801CF09C
  c->lr=0x801CF0A4u; f_80216698(c); // 801CF0A0
  c->f[2]=c->ps1[2]=S(c->f[1]); // 801CF0A4
  fcmp(c,0,c->f[2],c->f[29]); // 801CF0A8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801CF0AC
  if (!crb(c,2)) { goto L_801CF0C4; } // 801CF0B0
  {uint32_t ea=c->r[2]+0xFFFFA1E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF0B4
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[0]);} // 801CF0B8
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 801CF0BC
  goto L_801CF104; // 801CF0C0
L_801CF0C4:;
  fcmp(c,0,c->f[2],c->f[28]); // 801CF0C4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801CF0C8
  if (!crb(c,2)) { goto L_801CF0E4; } // 801CF0CC
  c->f[0]=c->ps1[0]=S(c->f[31]/c->f[2]); // 801CF0D0
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 801CF0D4
  c->f[0]=c->ps1[0]=S(c->f[30]/c->f[2]); // 801CF0D8
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[0]);} // 801CF0DC
  goto L_801CF104; // 801CF0E0
L_801CF0E4:;
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[29]); // 801CF0E4
  c->f[0]=c->ps1[0]=S(c->f[28]-c->f[29]); // 801CF0E8
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801CF0EC
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[2]); // 801CF0F0
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[0]); // 801CF0F4
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[0]); // 801CF0F8
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[1]);} // 801CF0FC
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[0]);} // 801CF100
L_801CF104:;
  c->r[0]=R32(c->r[1]+0x00000064u); // 801CF104
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 801CF108
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 801CF10C
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 801CF110
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 801CF114
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,29,ea,0,0);} // 801CF118
  {uint32_t ea=c->r[1]+0x00000030u; c->f[29]=RF64(ea);} // 801CF11C
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,28,ea,0,0);} // 801CF120
  {uint32_t ea=c->r[1]+0x00000020u; c->f[28]=RF64(ea);} // 801CF124
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CF128
  c->lr=c->r[0]; // 801CF12C
  c->r[1]=c->r[1]+0x00000060u; // 801CF130
  return; // 801CF134
}

// clamp_stick_cross
void f_801CF140(Ctx* __restrict c) {
  trace_call(0x801CF140u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF140
  c->r[0]=c->lr; // 801CF144
  cmps(c,0,(int32_t)c->r[4],0); // 801CF148
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CF14C
  c->r[0]=0u+0x43300000u; // 801CF150
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CF154
  c->r[31]=c->r[3]|c->r[3]; // 801CF158
  W32(c->r[1]+0x00000008u,c->r[0]); // 801CF15C
  W32(c->r[1]+0x00000010u,c->r[0]); // 801CF160
  if (!crb(c,0)) { goto L_801CF1DC; } // 801CF164
  c->r[0]=0u-c->r[4]; // 801CF168
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[6]); // 801CF16C
  if (crb(c,1)) { goto L_801CF180; } // 801CF170
  {uint32_t ea=c->r[2]+0xFFFFA1E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF174
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 801CF178
  goto L_801CF1CC; // 801CF17C
L_801CF180:;
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[7]); // 801CF180
  if (crb(c,0)) { goto L_801CF194; } // 801CF184
  {uint32_t ea=c->r[2]+0xFFFFA1ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF188
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 801CF18C
  goto L_801CF1CC; // 801CF190
L_801CF194:;
  c->r[4]=c->r[4]+c->r[6]; // 801CF194
  c->r[0]=c->r[7]-c->r[6]; // 801CF198
  c->r[4]=0u-c->r[4]; // 801CF19C
  {uint32_t ea=c->r[2]+0xFFFFA200u; c->f[2]=RF64(ea);} // 801CF1A0
  c->r[4]=c->r[4]^0x80000000u; // 801CF1A4
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801CF1A8
  c->r[0]=c->r[0]^0x80000000u; // 801CF1AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CF1B0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 801CF1B4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801CF1B8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801CF1BC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 801CF1C0
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801CF1C4
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 801CF1C8
L_801CF1CC:;
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF1CC
  c->f[0]=-c->f[0]; // 801CF1D0
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 801CF1D4
  goto L_801CF238; // 801CF1D8
L_801CF1DC:;
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[6]); // 801CF1DC
  if (crb(c,1)) { goto L_801CF1F0; } // 801CF1E0
  {uint32_t ea=c->r[2]+0xFFFFA1E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF1E4
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 801CF1E8
  goto L_801CF238; // 801CF1EC
L_801CF1F0:;
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[7]); // 801CF1F0
  if (crb(c,0)) { goto L_801CF204; } // 801CF1F4
  {uint32_t ea=c->r[2]+0xFFFFA1ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF1F8
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 801CF1FC
  goto L_801CF238; // 801CF200
L_801CF204:;
  c->r[4]=c->r[4]-c->r[6]; // 801CF204
  c->r[0]=c->r[7]-c->r[6]; // 801CF208
  c->r[4]=c->r[4]^0x80000000u; // 801CF20C
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801CF210
  c->r[0]=c->r[0]^0x80000000u; // 801CF214
  {uint32_t ea=c->r[2]+0xFFFFA200u; c->f[2]=RF64(ea);} // 801CF218
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CF21C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 801CF220
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801CF224
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801CF228
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 801CF22C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801CF230
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 801CF234
L_801CF238:;
  cmps(c,0,(int32_t)c->r[5],0); // 801CF238
  if (!crb(c,0)) { goto L_801CF2B4; } // 801CF23C
  c->r[0]=0u-c->r[5]; // 801CF240
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[6]); // 801CF244
  if (crb(c,1)) { goto L_801CF258; } // 801CF248
  {uint32_t ea=c->r[2]+0xFFFFA1E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF24C
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 801CF250
  goto L_801CF2A4; // 801CF254
L_801CF258:;
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[7]); // 801CF258
  if (crb(c,0)) { goto L_801CF26C; } // 801CF25C
  {uint32_t ea=c->r[2]+0xFFFFA1ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF260
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 801CF264
  goto L_801CF2A4; // 801CF268
L_801CF26C:;
  c->r[4]=c->r[5]+c->r[6]; // 801CF26C
  c->r[0]=c->r[7]-c->r[6]; // 801CF270
  c->r[4]=0u-c->r[4]; // 801CF274
  {uint32_t ea=c->r[2]+0xFFFFA200u; c->f[2]=RF64(ea);} // 801CF278
  c->r[4]=c->r[4]^0x80000000u; // 801CF27C
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801CF280
  c->r[0]=c->r[0]^0x80000000u; // 801CF284
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CF288
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 801CF28C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801CF290
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801CF294
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 801CF298
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801CF29C
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 801CF2A0
L_801CF2A4:;
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF2A4
  c->f[0]=-c->f[0]; // 801CF2A8
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 801CF2AC
  goto L_801CF310; // 801CF2B0
L_801CF2B4:;
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[6]); // 801CF2B4
  if (crb(c,1)) { goto L_801CF2C8; } // 801CF2B8
  {uint32_t ea=c->r[2]+0xFFFFA1E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF2BC
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 801CF2C0
  goto L_801CF310; // 801CF2C4
L_801CF2C8:;
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[7]); // 801CF2C8
  if (crb(c,0)) { goto L_801CF2DC; } // 801CF2CC
  {uint32_t ea=c->r[2]+0xFFFFA1ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF2D0
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 801CF2D4
  goto L_801CF310; // 801CF2D8
L_801CF2DC:;
  c->r[4]=c->r[5]-c->r[6]; // 801CF2DC
  c->r[0]=c->r[7]-c->r[6]; // 801CF2E0
  c->r[4]=c->r[4]^0x80000000u; // 801CF2E4
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801CF2E8
  c->r[0]=c->r[0]^0x80000000u; // 801CF2EC
  {uint32_t ea=c->r[2]+0xFFFFA200u; c->f[2]=RF64(ea);} // 801CF2F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CF2F4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 801CF2F8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801CF2FC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801CF300
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 801CF304
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801CF308
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 801CF30C
L_801CF310:;
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF310
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CF314
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[0]); // 801CF318
  {uint32_t ea=c->r[2]+0xFFFFA1ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF31C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 801CF320
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 801CF324
  fcmp(c,0,c->f[1],c->f[0]); // 801CF328
  if (!crb(c,1)) { goto L_801CF350; } // 801CF32C
  c->lr=0x801CF334u; f_80216698(c); // 801CF330
  c->f[2]=c->ps1[2]=S(c->f[1]); // 801CF334
  {uint32_t ea=c->r[31]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CF338
  {uint32_t ea=c->r[31]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF33C
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 801CF340
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[1]);} // 801CF344
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[2]); // 801CF348
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[0]);} // 801CF34C
L_801CF350:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CF350
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CF354
  c->lr=c->r[0]; // 801CF358
  c->r[1]=c->r[1]+0x00000020u; // 801CF35C
  return; // 801CF360
}

// read_kpad_ext
void f_801CF370(Ctx* __restrict c) {
  trace_call(0x801CF370u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF370
  c->r[0]=c->lr; // 801CF374
  c->r[5]=0u+0x43300000u; // 801CF378
  W32(c->r[1]+0x00000034u,c->r[0]); // 801CF37C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801CF380
  c->r[31]=0u+0x801D0000u; // 801CF384
  c->r[31]=c->r[31]+0xFFFFF010u; // 801CF388
  W32(c->r[1]+0x00000028u,c->r[30]); // 801CF38C
  c->r[30]=c->r[3]+0x00000060u; // 801CF390
  W32(c->r[1]+0x00000024u,c->r[29]); // 801CF394
  c->r[29]=c->r[4]|c->r[4]; // 801CF398
  c->r[0]=R32(c->r[13]+0xFFFFB618u); // 801CF39C
  W32(c->r[1]+0x00000008u,c->r[5]); // 801CF3A0
  cmps(c,0,(int32_t)c->r[0],0); // 801CF3A4
  W32(c->r[1]+0x00000010u,c->r[5]); // 801CF3A8
  if (crb(c,2)) { goto L_801CF3B8; } // 801CF3AC
  c->r[31]=0u+0x801D0000u; // 801CF3B0
  c->r[31]=c->r[31]+0xFFFFF140u; // 801CF3B4
L_801CF3B8:;
  c->r[6]=R8(c->r[4]+0x00000028u); // 801CF3B8
  cmpu(c,0,c->r[6],0x00000001u); // 801CF3BC
  if (!crb(c,2)) { goto L_801CF448; } // 801CF3C0
  c->r[5]=R8(c->r[4]+0x00000036u); // 801CF3C4
  c->r[0]=c->r[5]+0x000000FDu; // 801CF3C8
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801CF3CC
  cmpu(c,0,c->r[0],0x00000002u); // 801CF3D0
  if (crb(c,1)) { goto L_801CF448; } // 801CF3D4
  c->r[0]=R8(c->r[3]+0x00000555u); // 801CF3D8
  cmps(c,0,(int32_t)c->r[0],0); // 801CF3DC
  if (crb(c,2)) { goto L_801CF41C; } // 801CF3E0
  c->r[0]=0u+0x00000000u; // 801CF3E4
  W8(c->r[3]+0x00000555u,c->r[0]); // 801CF3E8
  {uint32_t ea=c->r[2]+0xFFFFA1E0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CF3EC
  c->r[3]=R32(c->r[13]+0xFFFFB628u); // 801CF3F0
  c->r[0]=R32(c->r[13]+0xFFFFB62Cu); // 801CF3F4
  {uint32_t ea=c->r[2]+0xFFFFA1E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CF3F8
  {uint32_t ea=c->r[2]+0xFFFFA1ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF3FC
  W32(c->r[30]+0x00000000u,c->r[3]); // 801CF400
  W32(c->r[30]+0x00000004u,c->r[0]); // 801CF404
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[2]);} // 801CF408
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[2]);} // 801CF40C
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[1]);} // 801CF410
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[0]);} // 801CF414
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[2]);} // 801CF418
L_801CF41C:;
  c->r[4]=R8(c->r[4]+0x00000030u); // 801CF41C
  c->r[12]=c->r[31]|c->r[31]; // 801CF420
  c->r[5]=R8(c->r[29]+0x00000031u); // 801CF424
  c->r[3]=c->r[30]|c->r[30]; // 801CF428
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 801CF42C
  c->r[6]=R32(c->r[13]+0xFFFFAB0Cu); // 801CF430
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 801CF434
  c->r[7]=R32(c->r[13]+0xFFFFAB10u); // 801CF438
  c->ctr=c->r[12]; // 801CF43C
  if (true) { c->lr=0x801CF444u; dispatch(c,c->ctr); } // 801CF440
  goto L_801CFC24; // 801CF444
L_801CF448:;
  cmpu(c,0,c->r[6],0x00000002u); // 801CF448
  if (!crb(c,2)) { goto L_801CF5D0; } // 801CF44C
  c->r[5]=R8(c->r[4]+0x00000036u); // 801CF450
  c->r[0]=c->r[5]+0x000000FAu; // 801CF454
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801CF458
  cmpu(c,0,c->r[0],0x00000002u); // 801CF45C
  if (crb(c,1)) { goto L_801CF5D0; } // 801CF460
  c->r[0]=R8(c->r[3]+0x00000555u); // 801CF464
  cmps(c,0,(int32_t)c->r[0],0); // 801CF468
  if (crb(c,2)) { goto L_801CF4BC; } // 801CF46C
  c->r[7]=0u+0x00000000u; // 801CF470
  W8(c->r[3]+0x00000555u,c->r[7]); // 801CF474
  {uint32_t ea=c->r[2]+0xFFFFA1E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF478
  c->r[5]=R32(c->r[13]+0xFFFFB628u); // 801CF47C
  c->r[0]=R32(c->r[13]+0xFFFFB62Cu); // 801CF480
  W32(c->r[30]+0x00000010u,c->r[0]); // 801CF484
  c->r[0]=R16(c->r[3]+0x00000504u); // 801CF488
  W32(c->r[30]+0x0000000Cu,c->r[5]); // 801CF48C
  c->r[6]=R32(c->r[13]+0xFFFFB628u); // 801CF490
  c->r[5]=R32(c->r[13]+0xFFFFB62Cu); // 801CF494
  W32(c->r[30]+0x00000018u,c->r[5]); // 801CF498
  W32(c->r[30]+0x00000014u,c->r[6]); // 801CF49C
  {uint32_t ea=c->r[30]+0x00000020u; WF32(ea,c->f[0]);} // 801CF4A0
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 801CF4A4
  W32(c->r[30]+0x00000008u,c->r[7]); // 801CF4A8
  W32(c->r[30]+0x00000004u,c->r[7]); // 801CF4AC
  W32(c->r[30]+0x00000000u,c->r[7]); // 801CF4B0
  W16(c->r[3]+0x00000508u,c->r[7]); // 801CF4B4
  W16(c->r[3]+0x0000050Au,c->r[0]); // 801CF4B8
L_801CF4BC:;
  c->r[12]=c->r[31]|c->r[31]; // 801CF4BC
  c->r[3]=c->r[30]+0x0000000Cu; // 801CF4C0
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x0000002Cu); // 801CF4C4
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x0000002Eu); // 801CF4C8
  c->r[6]=R32(c->r[13]+0xFFFFAB14u); // 801CF4CC
  c->r[7]=R32(c->r[13]+0xFFFFAB18u); // 801CF4D0
  c->ctr=c->r[12]; // 801CF4D4
  if (true) { c->lr=0x801CF4DCu; dispatch(c,c->ctr); } // 801CF4D8
  c->r[12]=c->r[31]|c->r[31]; // 801CF4DC
  c->r[3]=c->r[30]+0x00000014u; // 801CF4E0
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000030u); // 801CF4E4
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000032u); // 801CF4E8
  c->r[6]=R32(c->r[13]+0xFFFFAB14u); // 801CF4EC
  c->r[7]=R32(c->r[13]+0xFFFFAB18u); // 801CF4F0
  c->ctr=c->r[12]; // 801CF4F4
  if (true) { c->lr=0x801CF4FCu; dispatch(c,c->ctr); } // 801CF4F8
  c->r[4]=R32(c->r[13]+0xFFFFAB1Cu); // 801CF4FC
  c->r[3]=R8(c->r[29]+0x00000034u); // 801CF500
  c->r[0]=R32(c->r[13]+0xFFFFAB20u); // 801CF504
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[4]); // 801CF508
  if (crb(c,1)) { goto L_801CF51C; } // 801CF50C
  {uint32_t ea=c->r[2]+0xFFFFA1E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF510
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 801CF514
  goto L_801CF564; // 801CF518
L_801CF51C:;
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801CF51C
  if (crb(c,0)) { goto L_801CF530; } // 801CF520
  {uint32_t ea=c->r[2]+0xFFFFA1ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF524
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 801CF528
  goto L_801CF564; // 801CF52C
L_801CF530:;
  c->r[3]=c->r[3]-c->r[4]; // 801CF530
  c->r[0]=c->r[0]-c->r[4]; // 801CF534
  c->r[3]=c->r[3]^0x80000000u; // 801CF538
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801CF53C
  c->r[0]=c->r[0]^0x80000000u; // 801CF540
  {uint32_t ea=c->r[2]+0xFFFFA200u; c->f[2]=RF64(ea);} // 801CF544
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CF548
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 801CF54C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801CF550
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801CF554
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 801CF558
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801CF55C
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 801CF560
L_801CF564:;
  c->r[4]=R32(c->r[13]+0xFFFFAB1Cu); // 801CF564
  c->r[3]=R8(c->r[29]+0x00000035u); // 801CF568
  c->r[0]=R32(c->r[13]+0xFFFFAB20u); // 801CF56C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[4]); // 801CF570
  if (crb(c,1)) { goto L_801CF584; } // 801CF574
  {uint32_t ea=c->r[2]+0xFFFFA1E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF578
  {uint32_t ea=c->r[30]+0x00000020u; WF32(ea,c->f[0]);} // 801CF57C
  goto L_801CFC24; // 801CF580
L_801CF584:;
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801CF584
  if (crb(c,0)) { goto L_801CF598; } // 801CF588
  {uint32_t ea=c->r[2]+0xFFFFA1ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF58C
  {uint32_t ea=c->r[30]+0x00000020u; WF32(ea,c->f[0]);} // 801CF590
  goto L_801CFC24; // 801CF594
L_801CF598:;
  c->r[3]=c->r[3]-c->r[4]; // 801CF598
  c->r[0]=c->r[0]-c->r[4]; // 801CF59C
  c->r[3]=c->r[3]^0x80000000u; // 801CF5A0
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801CF5A4
  c->r[0]=c->r[0]^0x80000000u; // 801CF5A8
  {uint32_t ea=c->r[2]+0xFFFFA200u; c->f[2]=RF64(ea);} // 801CF5AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CF5B0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 801CF5B4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801CF5B8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801CF5BC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 801CF5C0
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801CF5C4
  {uint32_t ea=c->r[30]+0x00000020u; WF32(ea,c->f[0]);} // 801CF5C8
  goto L_801CFC24; // 801CF5CC
L_801CF5D0:;
  cmpu(c,0,c->r[6],0x00000011u); // 801CF5D0
  if (!crb(c,2)) { goto L_801CF800; } // 801CF5D4
  c->r[0]=R8(c->r[4]+0x00000036u); // 801CF5D8
  cmpu(c,0,c->r[0],0x0000000Bu); // 801CF5DC
  if (!crb(c,2)) { goto L_801CF800; } // 801CF5E0
  c->r[0]=R8(c->r[3]+0x00000555u); // 801CF5E4
  cmps(c,0,(int32_t)c->r[0],0); // 801CF5E8
  if (crb(c,2)) { goto L_801CF63C; } // 801CF5EC
  c->r[7]=0u+0x00000000u; // 801CF5F0
  W8(c->r[3]+0x00000555u,c->r[7]); // 801CF5F4
  {uint32_t ea=c->r[2]+0xFFFFA1E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF5F8
  c->r[5]=R32(c->r[13]+0xFFFFB628u); // 801CF5FC
  c->r[0]=R32(c->r[13]+0xFFFFB62Cu); // 801CF600
  W32(c->r[30]+0x00000010u,c->r[0]); // 801CF604
  c->r[0]=R16(c->r[3]+0x00000504u); // 801CF608
  W32(c->r[30]+0x0000000Cu,c->r[5]); // 801CF60C
  c->r[6]=R32(c->r[13]+0xFFFFB628u); // 801CF610
  c->r[5]=R32(c->r[13]+0xFFFFB62Cu); // 801CF614
  W32(c->r[30]+0x00000018u,c->r[5]); // 801CF618
  W32(c->r[30]+0x00000014u,c->r[6]); // 801CF61C
  {uint32_t ea=c->r[30]+0x00000020u; WF32(ea,c->f[0]);} // 801CF620
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 801CF624
  W32(c->r[30]+0x00000008u,c->r[7]); // 801CF628
  W32(c->r[30]+0x00000004u,c->r[7]); // 801CF62C
  W32(c->r[30]+0x00000000u,c->r[7]); // 801CF630
  W16(c->r[3]+0x00000508u,c->r[7]); // 801CF634
  W16(c->r[3]+0x0000050Au,c->r[0]); // 801CF638
L_801CF63C:;
  c->r[12]=c->r[31]|c->r[31]; // 801CF63C
  c->r[3]=c->r[30]+0x0000000Cu; // 801CF640
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x0000002Cu); // 801CF644
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x0000002Eu); // 801CF648
  c->r[6]=R32(c->r[13]+0xFFFFAB14u); // 801CF64C
  c->r[7]=R32(c->r[13]+0xFFFFAB18u); // 801CF650
  c->ctr=c->r[12]; // 801CF654
  if (true) { c->lr=0x801CF65Cu; dispatch(c,c->ctr); } // 801CF658
  c->r[4]=R32(c->r[13]+0xFFFFB620u); // 801CF65C
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000030u); // 801CF660
  c->r[0]=R32(c->r[13]+0xFFFFAB30u); // 801CF664
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[4]); // 801CF668
  if (crb(c,1)) { goto L_801CF67C; } // 801CF66C
  {uint32_t ea=c->r[2]+0xFFFFA1E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF670
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[0]);} // 801CF674
  goto L_801CF6C4; // 801CF678
L_801CF67C:;
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801CF67C
  if (crb(c,0)) { goto L_801CF690; } // 801CF680
  {uint32_t ea=c->r[2]+0xFFFFA1ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF684
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[0]);} // 801CF688
  goto L_801CF6C4; // 801CF68C
L_801CF690:;
  c->r[3]=c->r[3]-c->r[4]; // 801CF690
  c->r[0]=c->r[0]-c->r[4]; // 801CF694
  c->r[3]=c->r[3]^0x80000000u; // 801CF698
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801CF69C
  c->r[0]=c->r[0]^0x80000000u; // 801CF6A0
  {uint32_t ea=c->r[2]+0xFFFFA200u; c->f[2]=RF64(ea);} // 801CF6A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CF6A8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 801CF6AC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801CF6B0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801CF6B4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 801CF6B8
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801CF6BC
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[0]);} // 801CF6C0
L_801CF6C4:;
  c->r[4]=R32(c->r[13]+0xFFFFB620u); // 801CF6C4
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000032u); // 801CF6C8
  c->r[0]=R32(c->r[13]+0xFFFFAB30u); // 801CF6CC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[4]); // 801CF6D0
  if (crb(c,1)) { goto L_801CF6E4; } // 801CF6D4
  {uint32_t ea=c->r[2]+0xFFFFA1E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF6D8
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[0]);} // 801CF6DC
  goto L_801CF72C; // 801CF6E0
L_801CF6E4:;
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801CF6E4
  if (crb(c,0)) { goto L_801CF6F8; } // 801CF6E8
  {uint32_t ea=c->r[2]+0xFFFFA1ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF6EC
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[0]);} // 801CF6F0
  goto L_801CF72C; // 801CF6F4
L_801CF6F8:;
  c->r[3]=c->r[3]-c->r[4]; // 801CF6F8
  c->r[0]=c->r[0]-c->r[4]; // 801CF6FC
  c->r[3]=c->r[3]^0x80000000u; // 801CF700
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801CF704
  c->r[0]=c->r[0]^0x80000000u; // 801CF708
  {uint32_t ea=c->r[2]+0xFFFFA200u; c->f[2]=RF64(ea);} // 801CF70C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CF710
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 801CF714
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801CF718
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801CF71C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 801CF720
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801CF724
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[0]);} // 801CF728
L_801CF72C:;
  c->r[4]=R32(c->r[13]+0xFFFFB61Cu); // 801CF72C
  c->r[3]=R8(c->r[29]+0x00000034u); // 801CF730
  c->r[0]=R32(c->r[13]+0xFFFFAB2Cu); // 801CF734
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[4]); // 801CF738
  if (crb(c,1)) { goto L_801CF74C; } // 801CF73C
  {uint32_t ea=c->r[2]+0xFFFFA1E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF740
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 801CF744
  goto L_801CF794; // 801CF748
L_801CF74C:;
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801CF74C
  if (crb(c,0)) { goto L_801CF760; } // 801CF750
  {uint32_t ea=c->r[2]+0xFFFFA1ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF754
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 801CF758
  goto L_801CF794; // 801CF75C
L_801CF760:;
  c->r[3]=c->r[3]-c->r[4]; // 801CF760
  c->r[0]=c->r[0]-c->r[4]; // 801CF764
  c->r[3]=c->r[3]^0x80000000u; // 801CF768
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801CF76C
  c->r[0]=c->r[0]^0x80000000u; // 801CF770
  {uint32_t ea=c->r[2]+0xFFFFA200u; c->f[2]=RF64(ea);} // 801CF774
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CF778
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 801CF77C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801CF780
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801CF784
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 801CF788
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801CF78C
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 801CF790
L_801CF794:;
  c->r[4]=R32(c->r[13]+0xFFFFB61Cu); // 801CF794
  c->r[3]=R8(c->r[29]+0x00000035u); // 801CF798
  c->r[0]=R32(c->r[13]+0xFFFFAB2Cu); // 801CF79C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[4]); // 801CF7A0
  if (crb(c,1)) { goto L_801CF7B4; } // 801CF7A4
  {uint32_t ea=c->r[2]+0xFFFFA1E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF7A8
  {uint32_t ea=c->r[30]+0x00000020u; WF32(ea,c->f[0]);} // 801CF7AC
  goto L_801CFC24; // 801CF7B0
L_801CF7B4:;
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801CF7B4
  if (crb(c,0)) { goto L_801CF7C8; } // 801CF7B8
  {uint32_t ea=c->r[2]+0xFFFFA1ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF7BC
  {uint32_t ea=c->r[30]+0x00000020u; WF32(ea,c->f[0]);} // 801CF7C0
  goto L_801CFC24; // 801CF7C4
L_801CF7C8:;
  c->r[3]=c->r[3]-c->r[4]; // 801CF7C8
  c->r[0]=c->r[0]-c->r[4]; // 801CF7CC
  c->r[3]=c->r[3]^0x80000000u; // 801CF7D0
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801CF7D4
  c->r[0]=c->r[0]^0x80000000u; // 801CF7D8
  {uint32_t ea=c->r[2]+0xFFFFA200u; c->f[2]=RF64(ea);} // 801CF7DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CF7E0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 801CF7E4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801CF7E8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801CF7EC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 801CF7F0
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801CF7F4
  {uint32_t ea=c->r[30]+0x00000020u; WF32(ea,c->f[0]);} // 801CF7F8
  goto L_801CFC24; // 801CF7FC
L_801CF800:;
  cmpu(c,0,c->r[6],0x00000010u); // 801CF800
  if (!crb(c,2)) { goto L_801CF950; } // 801CF804
  c->r[0]=R8(c->r[4]+0x00000036u); // 801CF808
  cmpu(c,0,c->r[0],0x0000000Au); // 801CF80C
  if (!crb(c,2)) { goto L_801CF950; } // 801CF810
  c->r[0]=R8(c->r[3]+0x00000555u); // 801CF814
  cmps(c,0,(int32_t)c->r[0],0); // 801CF818
  if (crb(c,2)) { goto L_801CF86C; } // 801CF81C
  c->r[7]=0u+0x00000000u; // 801CF820
  W8(c->r[3]+0x00000555u,c->r[7]); // 801CF824
  {uint32_t ea=c->r[2]+0xFFFFA1E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF828
  c->r[5]=R32(c->r[13]+0xFFFFB628u); // 801CF82C
  c->r[0]=R32(c->r[13]+0xFFFFB62Cu); // 801CF830
  W32(c->r[30]+0x00000010u,c->r[0]); // 801CF834
  c->r[0]=R16(c->r[3]+0x00000504u); // 801CF838
  W32(c->r[30]+0x0000000Cu,c->r[5]); // 801CF83C
  c->r[6]=R32(c->r[13]+0xFFFFB628u); // 801CF840
  c->r[5]=R32(c->r[13]+0xFFFFB62Cu); // 801CF844
  W32(c->r[30]+0x00000018u,c->r[5]); // 801CF848
  W32(c->r[30]+0x00000014u,c->r[6]); // 801CF84C
  {uint32_t ea=c->r[30]+0x00000020u; WF32(ea,c->f[0]);} // 801CF850
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 801CF854
  W32(c->r[30]+0x00000008u,c->r[7]); // 801CF858
  W32(c->r[30]+0x00000004u,c->r[7]); // 801CF85C
  W32(c->r[30]+0x00000000u,c->r[7]); // 801CF860
  W16(c->r[3]+0x00000508u,c->r[7]); // 801CF864
  W16(c->r[3]+0x0000050Au,c->r[0]); // 801CF868
L_801CF86C:;
  {uint32_t ea=c->r[2]+0xFFFFA1E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF86C
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[0]);} // 801CF870
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[0]);} // 801CF874
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[0]);} // 801CF878
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[0]);} // 801CF87C
  c->r[5]=R32(c->r[13]+0xFFFFB61Cu); // 801CF880
  c->r[3]=R8(c->r[4]+0x0000002Cu); // 801CF884
  c->r[0]=R32(c->r[13]+0xFFFFAB2Cu); // 801CF888
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[5]); // 801CF88C
  if (crb(c,1)) { goto L_801CF89C; } // 801CF890
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 801CF894
  goto L_801CF8E4; // 801CF898
L_801CF89C:;
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801CF89C
  if (crb(c,0)) { goto L_801CF8B0; } // 801CF8A0
  {uint32_t ea=c->r[2]+0xFFFFA1ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF8A4
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 801CF8A8
  goto L_801CF8E4; // 801CF8AC
L_801CF8B0:;
  c->r[3]=c->r[3]-c->r[5]; // 801CF8B0
  c->r[0]=c->r[0]-c->r[5]; // 801CF8B4
  c->r[3]=c->r[3]^0x80000000u; // 801CF8B8
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801CF8BC
  c->r[0]=c->r[0]^0x80000000u; // 801CF8C0
  {uint32_t ea=c->r[2]+0xFFFFA200u; c->f[2]=RF64(ea);} // 801CF8C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CF8C8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 801CF8CC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801CF8D0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801CF8D4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 801CF8D8
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801CF8DC
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 801CF8E0
L_801CF8E4:;
  c->r[5]=R32(c->r[13]+0xFFFFB61Cu); // 801CF8E4
  c->r[3]=R8(c->r[4]+0x0000002Du); // 801CF8E8
  c->r[0]=R32(c->r[13]+0xFFFFAB2Cu); // 801CF8EC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[5]); // 801CF8F0
  if (crb(c,1)) { goto L_801CF904; } // 801CF8F4
  {uint32_t ea=c->r[2]+0xFFFFA1E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF8F8
  {uint32_t ea=c->r[30]+0x00000020u; WF32(ea,c->f[0]);} // 801CF8FC
  goto L_801CFC24; // 801CF900
L_801CF904:;
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801CF904
  if (crb(c,0)) { goto L_801CF918; } // 801CF908
  {uint32_t ea=c->r[2]+0xFFFFA1ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF90C
  {uint32_t ea=c->r[30]+0x00000020u; WF32(ea,c->f[0]);} // 801CF910
  goto L_801CFC24; // 801CF914
L_801CF918:;
  c->r[3]=c->r[3]-c->r[5]; // 801CF918
  c->r[0]=c->r[0]-c->r[5]; // 801CF91C
  c->r[3]=c->r[3]^0x80000000u; // 801CF920
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801CF924
  c->r[0]=c->r[0]^0x80000000u; // 801CF928
  {uint32_t ea=c->r[2]+0xFFFFA200u; c->f[2]=RF64(ea);} // 801CF92C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CF930
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 801CF934
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801CF938
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801CF93C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 801CF940
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801CF944
  {uint32_t ea=c->r[30]+0x00000020u; WF32(ea,c->f[0]);} // 801CF948
  goto L_801CFC24; // 801CF94C
L_801CF950:;
  cmpu(c,0,c->r[6],0x00000003u); // 801CF950
  if (!crb(c,2)) { goto L_801CFC24; } // 801CF954
  c->r[0]=R8(c->r[4]+0x00000036u); // 801CF958
  cmpu(c,0,c->r[0],0x0000000Cu); // 801CF95C
  if (!crb(c,2)) { goto L_801CFC24; } // 801CF960
  c->r[0]=R8(c->r[3]+0x00000555u); // 801CF964
  cmps(c,0,(int32_t)c->r[0],0); // 801CF968
  if (crb(c,2)) { goto L_801CF9B8; } // 801CF96C
  c->r[0]=0u+0x00000000u; // 801CF970
  W8(c->r[3]+0x00000555u,c->r[0]); // 801CF974
  c->r[7]=0u+0x802E0000u; // 801CF978
  c->r[6]=0u+0x802E0000u; // 801CF97C
  {uint32_t ea=c->r[2]+0xFFFFA218u; c->f[0]=RF64(ea);} // 801CF980
  c->r[5]=c->r[7]+0xFFFF9D78u; // 801CF984
  c->r[3]=c->r[6]+0xFFFF9D98u; // 801CF988
  W8(c->r[13]+0xFFFFB63Au,c->r[0]); // 801CF98C
  W16(c->r[13]+0xFFFFB638u,c->r[0]); // 801CF990
  W8(c->r[13]+0xFFFFB63Bu,c->r[0]); // 801CF994
  {uint32_t ea=c->r[7]+0xFFFF9D78u; WF64(ea,c->f[0]);} // 801CF998
  {uint32_t ea=c->r[6]+0xFFFF9D98u; WF64(ea,c->f[0]);} // 801CF99C
  {uint32_t ea=c->r[5]+0x00000008u; WF64(ea,c->f[0]);} // 801CF9A0
  {uint32_t ea=c->r[3]+0x00000008u; WF64(ea,c->f[0]);} // 801CF9A4
  {uint32_t ea=c->r[5]+0x00000010u; WF64(ea,c->f[0]);} // 801CF9A8
  {uint32_t ea=c->r[3]+0x00000010u; WF64(ea,c->f[0]);} // 801CF9AC
  {uint32_t ea=c->r[5]+0x00000018u; WF64(ea,c->f[0]);} // 801CF9B0
  {uint32_t ea=c->r[3]+0x00000018u; WF64(ea,c->f[0]);} // 801CF9B4
L_801CF9B8:;
  c->r[3]=R8(c->r[4]+0x00000033u); // 801CF9B8
  c->lr=0x801CF9C0u; f_801C04B0(c); // 801CF9BC
  cmps(c,0,(int32_t)c->r[3],0); // 801CF9C0
  if (!crb(c,2)) { goto L_801CF9D4; } // 801CF9C4
  c->r[0]=0u+0xFFFFFFFFu; // 801CF9C8
  W32(c->r[30]+0x00000048u,c->r[0]); // 801CF9CC
  goto L_801CFC24; // 801CF9D0
L_801CF9D4:;
  c->r[0]=R8(c->r[13]+0xFFFFB63Au); // 801CF9D4
  cmpu(c,0,c->r[0],0x00000003u); // 801CF9D8
  if (!crb(c,0)) { goto L_801CF9EC; } // 801CF9DC
  c->r[0]=0u+0xFFFFFFFEu; // 801CF9E0
  W32(c->r[30]+0x00000048u,c->r[0]); // 801CF9E4
  goto L_801CFC24; // 801CF9E8
L_801CF9EC:;
  c->r[0]=R8(c->r[29]+0x00000032u); // 801CF9EC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801CF9F0
  cmps(c,0,(int32_t)c->r[0],127); // 801CF9F4
  if (crb(c,2)) { goto L_801CFA04; } // 801CF9F8
  cmps(c,0,(int32_t)c->r[0],-128); // 801CF9FC
  if (!crb(c,2)) { goto L_801CFA10; } // 801CFA00
L_801CFA04:;
  c->r[0]=0u+0xFFFFFFFDu; // 801CFA04
  W32(c->r[30]+0x00000048u,c->r[0]); // 801CFA08
  goto L_801CFC24; // 801CFA0C
L_801CFA10:;
  c->r[3]=c->r[29]|c->r[29]; // 801CFA10
  c->r[4]=c->r[30]+0x00000008u; // 801CFA14
  c->r[5]=0u+0x00000004u; // 801CFA18
  c->lr=0x801CFA20u; f_801C04C0(c); // 801CFA1C
  cmps(c,0,(int32_t)c->r[3],0); // 801CFA20
  W32(c->r[30]+0x00000048u,c->r[3]); // 801CFA24
  if (crb(c,0)) { goto L_801CFBEC; } // 801CFA28
  c->r[4]=0u+0x802E0000u; // 801CFA2C
  c->r[0]=R8(c->r[13]+0xFFFFB63Bu); // 801CFA30
  {uint32_t ea=c->r[13]+0xFFFFAB38u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CFA34
  c->r[3]=c->r[4]+0xFFFF9D98u; // 801CFA38
  {uint32_t ea=c->r[4]+0xFFFF9D98u; c->f[0]=RF64(ea);} // 801CFA3C
  cmps(c,0,(int32_t)c->r[0],0); // 801CFA40
  {uint32_t ea=c->r[2]+0xFFFFA1ECu; c->f[2]=c->ps1[2]=RF32(ea);} // 801CFA44
  c->r[6]=c->r[30]+0x00000010u; // 801CFA48
  c->f[5]=c->f[1]*c->f[0]; // 801CFA4C
  {uint32_t ea=c->r[30]+0x00000008u; c->f[0]=RF64(ea);} // 801CFA50
  {uint32_t ea=c->r[3]+0x00000008u; c->f[4]=RF64(ea);} // 801CFA54
  c->r[7]=c->r[30]+0x00000018u; // 801CFA58
  c->f[7]=c->ps1[7]=S(c->f[2]+c->f[1]); // 801CFA5C
  {uint32_t ea=c->r[3]+0x00000010u; c->f[3]=RF64(ea);} // 801CFA60
  c->f[5]=c->f[5]+c->f[0]; // 801CFA64
  {uint32_t ea=c->r[3]+0x00000018u; c->f[2]=RF64(ea);} // 801CFA68
  c->f[6]=c->f[1]*c->f[4]; // 801CFA6C
  c->r[8]=c->r[30]+0x00000020u; // 801CFA70
  c->f[4]=c->f[5]/c->f[7]; // 801CFA74
  {uint32_t ea=c->r[4]+0xFFFF9D98u; WF64(ea,c->f[4]);} // 801CFA78
  c->f[4]=c->f[1]*c->f[3]; // 801CFA7C
  {uint32_t ea=c->r[30]+0x00000010u; c->f[5]=RF64(ea);} // 801CFA80
  c->f[3]=c->f[1]*c->f[2]; // 801CFA84
  c->f[2]=c->f[6]+c->f[5]; // 801CFA88
  c->f[2]=c->f[2]/c->f[7]; // 801CFA8C
  {uint32_t ea=c->r[3]+0x00000008u; WF64(ea,c->f[2]);} // 801CFA90
  {uint32_t ea=c->r[30]+0x00000018u; c->f[2]=RF64(ea);} // 801CFA94
  c->f[2]=c->f[4]+c->f[2]; // 801CFA98
  c->f[2]=c->f[2]/c->f[7]; // 801CFA9C
  {uint32_t ea=c->r[3]+0x00000010u; WF64(ea,c->f[2]);} // 801CFAA0
  {uint32_t ea=c->r[30]+0x00000020u; c->f[2]=RF64(ea);} // 801CFAA4
  c->f[2]=c->f[3]+c->f[2]; // 801CFAA8
  c->f[2]=c->f[2]/c->f[7]; // 801CFAAC
  {uint32_t ea=c->r[3]+0x00000018u; WF64(ea,c->f[2]);} // 801CFAB0
  if (crb(c,2)) { goto L_801CFBEC; } // 801CFAB4
  c->r[5]=R16(c->r[13]+0xFFFFB638u); // 801CFAB8
  c->r[4]=0u+0x802E0000u; // 801CFABC
  {uint32_t ea=c->r[2]+0xFFFFA200u; c->f[11]=RF64(ea);} // 801CFAC0
  c->r[3]=c->r[4]+0xFFFF9D78u; // 801CFAC4
  c->r[5]=c->r[5]+0x00000001u; // 801CFAC8
  {uint32_t ea=c->r[4]+0xFFFF9D78u; c->f[4]=RF64(ea);} // 801CFACC
  c->r[9]=rotl(c->r[5],0)&0x0000FFFFu; // 801CFAD0
  W32(c->r[1]+0x00000014u,c->r[9]); // 801CFAD4
  c->r[0]=c->r[9]+0xFFFFFFFFu; // 801CFAD8
  {uint32_t ea=c->r[2]+0xFFFFA228u; c->f[10]=RF64(ea);} // 801CFADC
  c->r[0]=c->r[0]^0x80000000u; // 801CFAE0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801CFAE4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 801CFAE8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 801CFAEC
  c->f[6]=c->f[2]-c->f[10]; // 801CFAF0
  W32(c->r[1]+0x00000014u,c->r[9]); // 801CFAF4
  c->f[5]=c->f[3]-c->f[11]; // 801CFAF8
  {uint32_t ea=c->r[3]+0x00000008u; c->f[3]=RF64(ea);} // 801CFAFC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 801CFB00
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801CFB04
  c->f[8]=c->f[5]*c->f[4]; // 801CFB08
  {uint32_t ea=c->r[3]+0x00000010u; c->f[5]=RF64(ea);} // 801CFB0C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 801CFB10
  c->f[7]=c->f[2]-c->f[10]; // 801CFB14
  W16(c->r[13]+0xFFFFB638u,c->r[5]); // 801CFB18
  c->f[2]=c->f[4]-c->f[11]; // 801CFB1C
  c->f[9]=c->f[8]+c->f[0]; // 801CFB20
  W32(c->r[1]+0x00000014u,c->r[9]); // 801CFB24
  c->f[8]=c->f[2]*c->f[3]; // 801CFB28
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=RF64(ea);} // 801CFB2C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[4]=RF64(ea);} // 801CFB30
  c->f[9]=c->f[9]/c->f[6]; // 801CFB34
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801CFB38
  {uint32_t ea=c->r[1]+0x00000008u; c->f[6]=RF64(ea);} // 801CFB3C
  W32(c->r[1]+0x00000014u,c->r[9]); // 801CFB40
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801CFB44
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 801CFB48
  c->f[6]=c->f[6]-c->f[11]; // 801CFB4C
  {uint32_t ea=c->r[4]+0xFFFF9D78u; WF64(ea,c->f[9]);} // 801CFB50
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 801CFB54
  c->f[4]=c->f[4]-c->f[10]; // 801CFB58
  c->f[2]=c->f[2]-c->f[10]; // 801CFB5C
  c->f[5]=c->f[6]*c->f[5]; // 801CFB60
  {uint32_t ea=c->r[6]+0x00000000u; c->f[6]=RF64(ea);} // 801CFB64
  c->f[3]=c->f[3]-c->f[11]; // 801CFB68
  W32(c->r[1]+0x0000000Cu,c->r[9]); // 801CFB6C
  c->f[6]=c->f[8]+c->f[6]; // 801CFB70
  c->f[3]=c->f[3]*c->f[0]; // 801CFB74
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801CFB78
  c->f[6]=c->f[6]/c->f[7]; // 801CFB7C
  {uint32_t ea=c->r[3]+0x00000008u; WF64(ea,c->f[6]);} // 801CFB80
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[10]); // 801CFB84
  fcmp(c,0,c->f[0],c->f[1]); // 801CFB88
  {uint32_t ea=c->r[7]+0x00000000u; c->f[0]=RF64(ea);} // 801CFB8C
  c->f[0]=c->f[5]+c->f[0]; // 801CFB90
  c->f[4]=c->f[0]/c->f[4]; // 801CFB94
  {uint32_t ea=c->r[3]+0x00000010u; WF64(ea,c->f[4]);} // 801CFB98
  {uint32_t ea=c->r[8]+0x00000000u; c->f[0]=RF64(ea);} // 801CFB9C
  c->f[0]=c->f[3]+c->f[0]; // 801CFBA0
  c->f[1]=c->f[0]/c->f[2]; // 801CFBA4
  {uint32_t ea=c->r[3]+0x00000018u; WF64(ea,c->f[1]);} // 801CFBA8
  if (!crb(c,2)) { goto L_801CFBEC; } // 801CFBAC
  c->f[0]=c->f[9]+c->f[6]; // 801CFBB0
  c->r[0]=0u+0x00000000u; // 801CFBB4
  W8(c->r[13]+0xFFFFB63Bu,c->r[0]); // 801CFBB8
  c->r[4]=c->r[29]|c->r[29]; // 801CFBBC
  c->r[3]=c->r[13]+0xFFFFB630u; // 801CFBC0
  c->f[0]=c->f[4]+c->f[0]; // 801CFBC4
  c->f[1]=c->f[1]+c->f[0]; // 801CFBC8
  c->lr=0x801CFBD0u; f_801C0520(c); // 801CFBCC
  W32(c->r[30]+0x00000048u,c->r[3]); // 801CFBD0
  {uint32_t ea=c->r[2]+0xFFFFA220u; c->f[0]=RF64(ea);} // 801CFBD4
  {uint32_t ea=c->r[13]+0xFFFFB630u; c->f[1]=RF64(ea);} // 801CFBD8
  fcmp(c,0,c->f[1],c->f[0]); // 801CFBDC
  if (!crb(c,0)) { goto L_801CFBEC; } // 801CFBE0
  c->r[0]=0u+0xFFFFFFFCu; // 801CFBE4
  W32(c->r[30]+0x00000048u,c->r[0]); // 801CFBE8
L_801CFBEC:;
  c->r[3]=0u+0x802E0000u; // 801CFBEC
  {uint32_t ea=c->r[3]+0xFFFF9D98u; c->f[0]=RF64(ea);} // 801CFBF0
  c->r[3]=c->r[3]+0xFFFF9D98u; // 801CFBF4
  {uint32_t ea=c->r[30]+0x00000028u; WF64(ea,c->f[0]);} // 801CFBF8
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=RF64(ea);} // 801CFBFC
  {uint32_t ea=c->r[30]+0x00000030u; WF64(ea,c->f[0]);} // 801CFC00
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=RF64(ea);} // 801CFC04
  {uint32_t ea=c->r[30]+0x00000038u; WF64(ea,c->f[0]);} // 801CFC08
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=RF64(ea);} // 801CFC0C
  {uint32_t ea=c->r[30]+0x00000040u; WF64(ea,c->f[0]);} // 801CFC10
  {uint32_t ea=c->r[13]+0xFFFFB630u; c->f[0]=RF64(ea);} // 801CFC14
  {uint32_t ea=c->r[30]+0x00000000u; WF64(ea,c->f[0]);} // 801CFC18
  c->r[0]=R8(c->r[13]+0xFFFFB63Bu); // 801CFC1C
  W32(c->r[30]+0x0000004Cu,c->r[0]); // 801CFC20
L_801CFC24:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801CFC24
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801CFC28
  c->r[30]=R32(c->r[1]+0x00000028u); // 801CFC2C
  c->r[29]=R32(c->r[1]+0x00000024u); // 801CFC30
  c->lr=c->r[0]; // 801CFC34
  c->r[1]=c->r[1]+0x00000030u; // 801CFC38
  return; // 801CFC3C
}

void hle_KPADReadEx(Ctx*);
// KPADReadEx
void f_801CFC40(Ctx* __restrict c) {
  hle_KPADReadEx(c);
}

// KPADiRead
void f_801CFC50(Ctx* __restrict c) {
  trace_call(0x801CFC50u);
  {uint32_t ea=c->r[1]+0xFFFFFF10u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CFC50
  c->r[0]=c->lr; // 801CFC54
  W32(c->r[1]+0x000000F4u,c->r[0]); // 801CFC58
  c->r[11]=c->r[1]+0x000000F0u; // 801CFC5C
  c->lr=0x801CFC64u; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CFC60
  c->r[0]=R8(c->r[13]+0xFFFFB624u); // 801CFC64
  c->r[8]=0u+0x802E0000u; // 801CFC68
  c->r[9]=(uint32_t)((int32_t)c->r[3]*(int32_t)1400); // 801CFC6C
  c->r[25]=c->r[3]|c->r[3]; // 801CFC70
  cmps(c,0,(int32_t)c->r[0],0); // 801CFC74
  c->r[8]=c->r[8]+0xFFFF8768u; // 801CFC78
  c->r[29]=c->r[4]|c->r[4]; // 801CFC7C
  c->r[24]=c->r[5]|c->r[5]; // 801CFC80
  c->r[30]=c->r[6]|c->r[6]; // 801CFC84
  c->r[31]=c->r[7]|c->r[7]; // 801CFC88
  c->r[26]=c->r[8]+c->r[9]; // 801CFC8C
  c->r[23]=0u+0x00000000u; // 801CFC90
  c->r[22]=0u+0x00000000u; // 801CFC94
  if (!crb(c,2)) { goto L_801CFCA4; } // 801CFC98
  c->r[23]=0u+0xFFFFFFFBu; // 801CFC9C
  goto L_801D02E4; // 801CFCA0
L_801CFCA4:;
  c->lr=0x801CFCA8u; f_801C2500(c); // 801CFCA4
  cmps(c,0,(int32_t)c->r[3],3); // 801CFCA8
  if (crb(c,2)) { goto L_801CFCB8; } // 801CFCAC
  c->r[23]=0u+0xFFFFFFFDu; // 801CFCB0
  goto L_801D02E4; // 801CFCB4
L_801CFCB8:;
  c->lr=0x801CFCBCu; f_8018D6A0(c); // 801CFCB8
  c->r[0]=R8(c->r[26]+0x000004FFu); // 801CFCBC
  c->r[21]=c->r[3]|c->r[3]; // 801CFCC0
  cmps(c,0,(int32_t)c->r[0],0); // 801CFCC4
  if (crb(c,2)) { goto L_801CFCD8; } // 801CFCC8
  c->lr=0x801CFCD0u; f_8018D6E0(c); // 801CFCCC
  c->r[23]=0u+0xFFFFFFFCu; // 801CFCD0
  goto L_801D02E4; // 801CFCD4
L_801CFCD8:;
  c->r[20]=0u+0x00000001u; // 801CFCD8
  W8(c->r[26]+0x000004FFu,c->r[20]); // 801CFCDC
  c->r[3]=c->r[25]|c->r[25]; // 801CFCE0
  c->r[4]=0u+0x00000000u; // 801CFCE4
  c->lr=0x801CFCECu; f_801C3860(c); // 801CFCE8
  cmps(c,0,(int32_t)c->r[3],-1); // 801CFCEC
  if (!crb(c,2)) { goto L_801CFD74; } // 801CFCF0
  c->r[3]=c->r[26]|c->r[26]; // 801CFCF4
  c->lr=0x801CFCFCu; f_801CD260(c); // 801CFCF8
  c->r[0]=R32(c->r[26]+0x0000050Cu); // 801CFCFC
  cmps(c,1,(int32_t)c->r[0],0); // 801CFD00
  if (crb(c,6)) { goto L_801CFD5C; } // 801CFD04
  c->r[0]=R8(c->r[26]+0x0000055Au); // 801CFD08
  cmps(c,0,(int32_t)c->r[0],0); // 801CFD0C
  if (crb(c,2)) { goto L_801CFD5C; } // 801CFD10
  c->r[0]=R8(c->r[26]+0x0000055Bu); // 801CFD14
  cmps(c,0,(int32_t)c->r[0],0); // 801CFD18
  if (!crb(c,2)) { goto L_801CFD5C; } // 801CFD1C
  if (crb(c,6)) { goto L_801CFD48; } // 801CFD20
  if (!crb(c,2)) { goto L_801CFD48; } // 801CFD24
  W8(c->r[26]+0x0000055Bu,c->r[20]); // 801CFD28
  c->r[3]=c->r[25]|c->r[25]; // 801CFD2C
  c->r[4]=0u+0x00000001u; // 801CFD30
  c->r[12]=R32(c->r[26]+0x0000050Cu); // 801CFD34
  c->ctr=c->r[12]; // 801CFD38
  if (true) { c->lr=0x801CFD40u; dispatch(c,c->ctr); } // 801CFD3C
  c->r[0]=0u+0x00000000u; // 801CFD40
  W8(c->r[26]+0x0000055Au,c->r[0]); // 801CFD44
L_801CFD48:;
  c->r[3]=c->r[25]|c->r[25]; // 801CFD48
  c->lr=0x801CFD50u; f_801C61F0(c); // 801CFD4C
  W8(c->r[26]+0x00000557u,c->r[3]); // 801CFD50
  c->r[0]=0u+0x00000000u; // 801CFD54
  W8(c->r[26]+0x00000558u,c->r[0]); // 801CFD58
L_801CFD5C:;
  c->r[0]=0u+0x00000000u; // 801CFD5C
  W8(c->r[26]+0x000004FFu,c->r[0]); // 801CFD60
  c->r[3]=c->r[21]|c->r[21]; // 801CFD64
  c->lr=0x801CFD6Cu; f_8018D6E0(c); // 801CFD68
  c->r[23]=0u+0xFFFFFFFEu; // 801CFD6C
  goto L_801D02E4; // 801CFD70
L_801CFD74:;
  c->r[3]=c->r[21]|c->r[21]; // 801CFD74
  c->lr=0x801CFD7Cu; f_8018D6E0(c); // 801CFD78
  c->r[0]=R8(c->r[26]+0x00000554u); // 801CFD7C
  cmps(c,0,(int32_t)c->r[0],0); // 801CFD80
  if (crb(c,2)) { goto L_801CFD98; } // 801CFD84
  c->r[0]=0u+0xFFFFFFFCu; // 801CFD88
  W8(c->r[26]+0x0000005Du,c->r[0]); // 801CFD8C
  c->r[3]=c->r[26]|c->r[26]; // 801CFD90
  c->lr=0x801CFD98u; f_801CD260(c); // 801CFD94
L_801CFD98:;
  c->r[0]=0u+0x00000016u; // 801CFD98
  c->r[5]=c->r[1]+0x00000004u; // 801CFD9C
  c->r[4]=c->r[29]+0xFFFFFFFCu; // 801CFDA0
  c->ctr=c->r[0]; // 801CFDA4
L_801CFDA8:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 801CFDA8
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 801CFDAC
  W32(c->r[5]+0x00000004u,c->r[3]); // 801CFDB0
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 801CFDB4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801CFDA8; } // 801CFDB8
  c->r[0]=R8(c->r[26]+0x0000013Bu); // 801CFDBC
  cmpu(c,0,c->r[0],0x00000001u); // 801CFDC0
  if (!crb(c,1)) { goto L_801D02DC; } // 801CFDC4
  cmps(c,0,(int32_t)c->r[29],0); // 801CFDC8
  if (crb(c,2)) { goto L_801D02DC; } // 801CFDCC
  cmps(c,0,(int32_t)c->r[24],0); // 801CFDD0
  if (crb(c,2)) { goto L_801D02DC; } // 801CFDD4
  c->lr=0x801CFDDCu; f_8018D6A0(c); // 801CFDD8
  c->r[6]=R8(c->r[26]+0x0000013Bu); // 801CFDDC
  cmpu(c,0,c->r[6],c->r[24]); // 801CFDE0
  if (!crb(c,1)) { goto L_801CFDEC; } // 801CFDE4
  c->r[6]=c->r[24]|c->r[24]; // 801CFDE8
L_801CFDEC:;
  c->r[4]=R8(c->r[26]+0x0000013Au); // 801CFDEC
  c->r[5]=c->r[6]|c->r[6]; // 801CFDF0
  c->r[0]=0u+0x00000000u; // 801CFDF4
  c->r[7]=0u+0x00000000u; // 801CFDF8
  c->r[4]=addc(c,c->r[4],0xFFFFFFFFu,0); cr0(c,c->r[4]); // 801CFDFC
  if (!crb(c,0)) { goto L_801CFE10; } // 801CFE00
  c->r[8]=R32(c->r[26]+0x000004C0u); // 801CFE04
  c->r[4]=c->r[4]+c->r[8]; // 801CFE08
  c->r[4]=c->r[4]+0x00000010u; // 801CFE0C
L_801CFE10:;
  cmps(c,0,(int32_t)c->r[4],16); // 801CFE10
  if (crb(c,0)) { goto L_801CFE2C; } // 801CFE14
  c->r[8]=c->r[4]+0xFFFFFFF0u; // 801CFE18
  c->r[9]=R32(c->r[26]+0x000004BCu); // 801CFE1C
  c->r[8]=(uint32_t)((int32_t)c->r[8]*(int32_t)56); // 801CFE20
  c->r[12]=c->r[9]+c->r[8]; // 801CFE24
  goto L_801CFE38; // 801CFE28
L_801CFE2C:;
  c->r[8]=(uint32_t)((int32_t)c->r[4]*(int32_t)56); // 801CFE2C
  c->r[8]=c->r[26]+c->r[8]; // 801CFE30
  c->r[12]=c->r[8]+0x0000013Cu; // 801CFE34
L_801CFE38:;
  c->r[11]=0u+0xFFFFFFF9u; // 801CFE38
  c->r[10]=0u+0xFFFFFFFCu; // 801CFE3C
L_801CFE40:;
  cmps(c,0,(int32_t)c->r[0],0); // 801CFE40
  if (crb(c,2)) { goto L_801CFE70; } // 801CFE44
  c->r[8]=R8(c->r[12]+0x00000029u); // 801CFE48
  c->r[8]=(uint32_t)(int32_t)(int8_t)c->r[8]; cr0(c,c->r[8]); // 801CFE4C
  if (!crb(c,2)) { goto L_801CFE60; } // 801CFE50
  W8(c->r[12]+0x00000029u,c->r[11]); // 801CFE54
  c->r[0]=0u+0x00000000u; // 801CFE58
  goto L_801CFE84; // 801CFE5C
L_801CFE60:;
  cmps(c,0,(int32_t)c->r[8],-2); // 801CFE60
  if (!crb(c,2)) { goto L_801CFE84; } // 801CFE64
  c->r[0]=0u+0x00000000u; // 801CFE68
  goto L_801CFE84; // 801CFE6C
L_801CFE70:;
  c->r[8]=R8(c->r[12]+0x00000029u); // 801CFE70
  c->r[8]=(uint32_t)(int32_t)(int8_t)c->r[8]; // 801CFE74
  cmps(c,0,(int32_t)c->r[8],-7); // 801CFE78
  if (!crb(c,2)) { goto L_801CFE84; } // 801CFE7C
  c->r[0]=0u+0x00000001u; // 801CFE80
L_801CFE84:;
  c->r[9]=R8(c->r[26]+0x0000005Cu); // 801CFE84
  c->r[8]=R8(c->r[12]+0x00000028u); // 801CFE88
  cmpu(c,0,c->r[9],c->r[8]); // 801CFE8C
  if (crb(c,2)) { goto L_801CFE98; } // 801CFE90
  c->r[7]=0u+0x00000001u; // 801CFE94
L_801CFE98:;
  cmps(c,0,(int32_t)c->r[7],0); // 801CFE98
  if (crb(c,2)) { goto L_801CFEA4; } // 801CFE9C
  W8(c->r[12]+0x00000029u,c->r[10]); // 801CFEA0
L_801CFEA4:;
  c->r[4]=addc(c,c->r[4],0xFFFFFFFFu,0); cr0(c,c->r[4]); // 801CFEA4
  if (!crb(c,0)) { goto L_801CFEB8; } // 801CFEA8
  c->r[8]=R32(c->r[26]+0x000004C0u); // 801CFEAC
  c->r[4]=c->r[4]+c->r[8]; // 801CFEB0
  c->r[4]=c->r[4]+0x00000010u; // 801CFEB4
L_801CFEB8:;
  cmps(c,0,(int32_t)c->r[4],16); // 801CFEB8
  if (crb(c,0)) { goto L_801CFED4; } // 801CFEBC
  c->r[8]=c->r[4]+0xFFFFFFF0u; // 801CFEC0
  c->r[9]=R32(c->r[26]+0x000004BCu); // 801CFEC4
  c->r[8]=(uint32_t)((int32_t)c->r[8]*(int32_t)56); // 801CFEC8
  c->r[12]=c->r[9]+c->r[8]; // 801CFECC
  goto L_801CFEE0; // 801CFED0
L_801CFED4:;
  c->r[8]=(uint32_t)((int32_t)c->r[4]*(int32_t)56); // 801CFED4
  c->r[8]=c->r[26]+c->r[8]; // 801CFED8
  c->r[12]=c->r[8]+0x0000013Cu; // 801CFEDC
L_801CFEE0:;
  c->r[5]=addc(c,c->r[5],0xFFFFFFFFu,0); cr0(c,c->r[5]); // 801CFEE0
  if (crb(c,1)) { IRQCHK(c); goto L_801CFE40; } // 801CFEE4
  cmpu(c,0,c->r[6],0x00000001u); // 801CFEE8
  c->r[22]=0u+0x00000001u; // 801CFEEC
  W8(c->r[26]+0x0000013Bu,c->r[22]); // 801CFEF0
  if (!crb(c,1)) { goto L_801CFEFC; } // 801CFEF4
  c->r[22]=c->r[6]+0xFFFFFFFFu; // 801CFEF8
L_801CFEFC:;
  c->r[0]=R8(c->r[26]+0x0000013Au); // 801CFEFC
  c->r[6]=(uint32_t)((int32_t)c->r[22]*(int32_t)176); // 801CFF00
  c->r[4]=c->r[22]|c->r[22]; // 801CFF04
  c->r[5]=c->r[0]-c->r[22]; // 801CFF08
  c->r[5]=addc(c,c->r[5],0xFFFFFFFFu,0); cr0(c,c->r[5]); // 801CFF0C
  c->r[6]=c->r[29]+c->r[6]; // 801CFF10
  if (!crb(c,0)) { goto L_801CFF28; } // 801CFF14
  c->r[0]=R32(c->r[26]+0x000004C0u); // 801CFF18
  c->r[5]=c->r[5]+c->r[0]; // 801CFF1C
  c->r[5]=c->r[5]+0x00000010u; // 801CFF20
  c->r[0]=c->r[0]|0x00000000u; // 801CFF24
L_801CFF28:;
  cmps(c,0,(int32_t)c->r[5],16); // 801CFF28
  if (crb(c,0)) { goto L_801CFF44; } // 801CFF2C
  c->r[0]=c->r[5]+0xFFFFFFF0u; // 801CFF30
  c->r[7]=R32(c->r[26]+0x000004BCu); // 801CFF34
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)56); // 801CFF38
  c->r[8]=c->r[7]+c->r[0]; // 801CFF3C
  goto L_801CFF50; // 801CFF40
L_801CFF44:;
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)56); // 801CFF44
  c->r[7]=c->r[26]+c->r[0]; // 801CFF48
  c->r[8]=c->r[7]+0x0000013Cu; // 801CFF4C
L_801CFF50:;
  c->r[0]=R32(c->r[8]+0x00000004u); // 801CFF50
  c->r[5]=c->r[5]+0x00000001u; // 801CFF54
  c->r[7]=R32(c->r[8]+0x00000000u); // 801CFF58
  W32(c->r[6]+0xFFFFFF50u,c->r[7]); // 801CFF5C
  W32(c->r[6]+0xFFFFFF54u,c->r[0]); // 801CFF60
  c->r[0]=R32(c->r[8]+0x0000000Cu); // 801CFF64
  c->r[7]=R32(c->r[8]+0x00000008u); // 801CFF68
  W32(c->r[6]+0xFFFFFF58u,c->r[7]); // 801CFF6C
  W32(c->r[6]+0xFFFFFF5Cu,c->r[0]); // 801CFF70
  c->r[0]=R32(c->r[8]+0x00000014u); // 801CFF74
  c->r[7]=R32(c->r[8]+0x00000010u); // 801CFF78
  W32(c->r[6]+0xFFFFFF60u,c->r[7]); // 801CFF7C
  W32(c->r[6]+0xFFFFFF64u,c->r[0]); // 801CFF80
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 801CFF84
  c->r[7]=R32(c->r[8]+0x00000018u); // 801CFF88
  W32(c->r[6]+0xFFFFFF68u,c->r[7]); // 801CFF8C
  W32(c->r[6]+0xFFFFFF6Cu,c->r[0]); // 801CFF90
  c->r[0]=R32(c->r[8]+0x00000024u); // 801CFF94
  c->r[7]=R32(c->r[8]+0x00000020u); // 801CFF98
  W32(c->r[6]+0xFFFFFF70u,c->r[7]); // 801CFF9C
  W32(c->r[6]+0xFFFFFF74u,c->r[0]); // 801CFFA0
  c->r[0]=R32(c->r[8]+0x0000002Cu); // 801CFFA4
  c->r[7]=R32(c->r[8]+0x00000028u); // 801CFFA8
  W32(c->r[6]+0xFFFFFF78u,c->r[7]); // 801CFFAC
  W32(c->r[6]+0xFFFFFF7Cu,c->r[0]); // 801CFFB0
  c->r[0]=R32(c->r[8]+0x00000034u); // 801CFFB4
  c->r[7]=R32(c->r[8]+0x00000030u); // 801CFFB8
  W32(c->r[6]+0xFFFFFF80u,c->r[7]); // 801CFFBC
  W32(c->r[6]+0xFFFFFF84u,c->r[0]); // 801CFFC0
  c->r[6]=c->r[6]+0xFFFFFF50u; // 801CFFC4
  c->r[7]=R32(c->r[26]+0x000004C0u); // 801CFFC8
  c->r[0]=c->r[7]+0x00000010u; // 801CFFCC
  cmpu(c,0,c->r[5],c->r[0]); // 801CFFD0
  if (crb(c,0)) { goto L_801CFFDC; } // 801CFFD4
  c->r[5]=0u+0x00000000u; // 801CFFD8
L_801CFFDC:;
  c->r[4]=addc(c,c->r[4],0xFFFFFFFFu,0); cr0(c,c->r[4]); // 801CFFDC
  if (crb(c,1)) { IRQCHK(c); goto L_801CFF28; } // 801CFFE0
  c->lr=0x801CFFE8u; f_8018D6E0(c); // 801CFFE4
  c->r[3]=(uint32_t)((int32_t)c->r[22]*(int32_t)176); // 801CFFE8
  c->r[0]=R8(c->r[26]+0x0000055Fu); // 801CFFEC
  c->r[25]=c->r[22]|c->r[22]; // 801CFFF0
  cmpu(c,0,c->r[0],0x00000001u); // 801CFFF4
  c->r[27]=c->r[29]+c->r[3]; // 801CFFF8
  c->r[24]=c->r[27]|c->r[27]; // 801CFFFC
  if (!crb(c,2)) { goto L_801D0170; } // 801D0000
  c->r[27]=0u+0x00000001u; // 801D0004
  c->r[28]=0u+0x00010000u; // 801D0008
  c->r[20]=0u+0x00000000u; // 801D000C
  c->r[21]=0u+0x00000016u; // 801D0010
L_801D0014:;
  c->r[3]=R8(c->r[24]+0xFFFFFF78u); // 801D0014
  c->r[24]=c->r[24]+0xFFFFFF50u; // 801D0018
  c->r[0]=R8(c->r[26]+0x0000005Cu); // 801D001C
  cmpu(c,0,c->r[0],c->r[3]); // 801D0020
  if (crb(c,2)) { goto L_801D0030; } // 801D0024
  W8(c->r[26]+0x0000005Cu,c->r[3]); // 801D0028
  W8(c->r[26]+0x00000555u,c->r[27]); // 801D002C
L_801D0030:;
  c->r[0]=R8(c->r[24]+0x00000029u); // 801D0030
  c->r[8]=c->r[28]+0xFFFFFFFFu; // 801D0034
  W8(c->r[26]+0x0000005Du,c->r[0]); // 801D0038
  c->r[7]=c->r[8]|c->r[8]; // 801D003C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801D0040
  c->r[6]=c->r[8]|c->r[8]; // 801D0044
  c->r[3]=R8(c->r[24]+0x00000036u); // 801D0048
  W8(c->r[26]+0x0000005Fu,c->r[3]); // 801D004C
  c->r[4]=R8(c->r[26]+0x0000005Cu); // 801D0050
  if (crb(c,2)) { goto L_801D006C; } // 801D0054
  cmps(c,0,(int32_t)c->r[0],-7); // 801D0058
  if (crb(c,2)) { goto L_801D00B4; } // 801D005C
  cmps(c,0,(int32_t)c->r[0],-2); // 801D0060
  if (crb(c,2)) { goto L_801D00BC; } // 801D0064
  goto L_801D00C4; // 801D0068
L_801D006C:;
  cmpu(c,0,c->r[4],0x00000001u); // 801D006C
  if (!crb(c,2)) { goto L_801D0080; } // 801D0070
  c->r[7]=R16(c->r[24]+0x00000000u); // 801D0074
  c->r[8]=0u+0x00000000u; // 801D0078
  goto L_801D00A8; // 801D007C
L_801D0080:;
  cmpu(c,0,c->r[4],0x00000002u); // 801D0080
  if (crb(c,2)) { goto L_801D0094; } // 801D0084
  c->r[0]=c->r[4]+0xFFFFFFF0u; // 801D0088
  cmpu(c,0,c->r[0],0x00000001u); // 801D008C
  if (crb(c,1)) { goto L_801D00A0; } // 801D0090
L_801D0094:;
  c->r[8]=R16(c->r[24]+0x0000002Au); // 801D0094
  c->r[7]=0u+0x00000000u; // 801D0098
  goto L_801D00A8; // 801D009C
L_801D00A0:;
  c->r[8]=0u+0x00000000u; // 801D00A0
  c->r[7]=0u+0x00000000u; // 801D00A4
L_801D00A8:;
  c->r[0]=R16(c->r[24]+0x00000000u); // 801D00A8
  c->r[6]=c->r[0]&0x00009F1Fu; cr0(c,c->r[6]); // 801D00AC
  goto L_801D00C4; // 801D00B0
L_801D00B4:;
  c->r[8]=0u+0x00000000u; // 801D00B4
  c->r[7]=0u+0x00000000u; // 801D00B8
L_801D00BC:;
  c->r[0]=R16(c->r[24]+0x00000000u); // 801D00BC
  c->r[6]=c->r[0]&0x00009F1Fu; cr0(c,c->r[6]); // 801D00C0
L_801D00C4:;
  cmpu(c,0,c->r[6],0x0000FFFFu); // 801D00C4
  if (!crb(c,2)) { goto L_801D00D4; } // 801D00C8
  c->r[0]=R32(c->r[26]+0x00000000u); // 801D00CC
  c->r[6]=c->r[0]&0x00009F1Fu; cr0(c,c->r[6]); // 801D00D0
L_801D00D4:;
  cmpu(c,0,c->r[7],0x0000FFFFu); // 801D00D4
  if (!crb(c,2)) { goto L_801D00E0; } // 801D00D8
  c->r[7]=R32(c->r[26]+0x00000000u); // 801D00DC
L_801D00E0:;
  cmpu(c,0,c->r[8],0x0000FFFFu); // 801D00E0
  if (!crb(c,2)) { goto L_801D00EC; } // 801D00E4
  c->r[8]=R32(c->r[26]+0x00000060u); // 801D00E8
L_801D00EC:;
  c->r[3]=c->r[26]|c->r[26]; // 801D00EC
  c->r[5]=0u+0x00000001u; // 801D00F0
  c->lr=0x801D00F8u; f_801CD5D0(c); // 801D00F4
  c->r[0]=R8(c->r[24]+0x00000029u); // 801D00F8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801D00FC
  if (crb(c,2)) { goto L_801D0110; } // 801D0100
  cmps(c,0,(int32_t)c->r[0],-7); // 801D0104
  if (crb(c,2)) { goto L_801D011C; } // 801D0108
  goto L_801D0138; // 801D010C
L_801D0110:;
  c->r[3]=c->r[26]|c->r[26]; // 801D0110
  c->r[4]=c->r[24]|c->r[24]; // 801D0114
  c->lr=0x801D011Cu; f_801CF370(c); // 801D0118
L_801D011C:;
  c->r[3]=c->r[26]|c->r[26]; // 801D011C
  c->r[4]=c->r[24]|c->r[24]; // 801D0120
  c->lr=0x801D0128u; f_801CDA00(c); // 801D0124
  c->r[3]=c->r[26]|c->r[26]; // 801D0128
  c->r[4]=c->r[24]|c->r[24]; // 801D012C
  c->lr=0x801D0134u; f_801CEB90(c); // 801D0130
  goto L_801D0144; // 801D0134
L_801D0138:;
  cmps(c,0,(int32_t)c->r[31],0); // 801D0138
  if (!crb(c,2)) { goto L_801D0144; } // 801D013C
  W8(c->r[26]+0x0000005Eu,c->r[20]); // 801D0140
L_801D0144:;
  c->r[5]=c->r[24]+0xFFFFFFFCu; // 801D0144
  c->r[4]=c->r[26]+0xFFFFFFFCu; // 801D0148
  c->ctr=c->r[21]; // 801D014C
L_801D0150:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 801D0150
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 801D0154
  W32(c->r[5]+0x00000004u,c->r[3]); // 801D0158
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 801D015C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D0150; } // 801D0160
  c->r[25]=addc(c,c->r[25],0xFFFFFFFFu,0); cr0(c,c->r[25]); // 801D0164
  if (crb(c,1)) { IRQCHK(c); goto L_801D0014; } // 801D0168
  goto L_801D02DC; // 801D016C
L_801D0170:;
  c->r[4]=0u+0x00010000u; // 801D0170
  c->r[3]=0u+0x00000001u; // 801D0174
  c->r[8]=c->r[4]+0xFFFFFFFFu; // 801D0178
  c->r[7]=c->r[8]|c->r[8]; // 801D017C
  c->r[6]=c->r[8]|c->r[8]; // 801D0180
  c->r[0]=c->r[0]|0x00000000u; // 801D0184
L_801D0188:;
  c->r[4]=R8(c->r[24]+0xFFFFFF78u); // 801D0188
  c->r[24]=c->r[24]+0xFFFFFF50u; // 801D018C
  c->r[0]=R8(c->r[26]+0x0000005Cu); // 801D0190
  cmpu(c,0,c->r[0],c->r[4]); // 801D0194
  if (crb(c,2)) { goto L_801D01A4; } // 801D0198
  W8(c->r[26]+0x0000005Cu,c->r[4]); // 801D019C
  W8(c->r[26]+0x00000555u,c->r[3]); // 801D01A0
L_801D01A4:;
  c->r[0]=R8(c->r[24]+0x00000029u); // 801D01A4
  c->r[4]=R8(c->r[24]+0x00000028u); // 801D01A8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801D01AC
  if (crb(c,2)) { goto L_801D01C8; } // 801D01B0
  cmps(c,0,(int32_t)c->r[0],-7); // 801D01B4
  if (crb(c,2)) { goto L_801D0204; } // 801D01B8
  cmps(c,0,(int32_t)c->r[0],-2); // 801D01BC
  if (crb(c,2)) { goto L_801D0204; } // 801D01C0
  goto L_801D020C; // 801D01C4
L_801D01C8:;
  cmpu(c,0,c->r[4],0x00000001u); // 801D01C8
  if (!crb(c,2)) { goto L_801D01DC; } // 801D01CC
  c->r[7]=R16(c->r[24]+0x00000000u); // 801D01D0
  c->r[8]=0u+0x00000000u; // 801D01D4
  goto L_801D0204; // 801D01D8
L_801D01DC:;
  cmpu(c,0,c->r[4],0x00000002u); // 801D01DC
  if (crb(c,2)) { goto L_801D01F0; } // 801D01E0
  c->r[0]=c->r[4]+0xFFFFFFF0u; // 801D01E4
  cmpu(c,0,c->r[0],0x00000001u); // 801D01E8
  if (crb(c,1)) { goto L_801D01FC; } // 801D01EC
L_801D01F0:;
  c->r[8]=R16(c->r[24]+0x0000002Au); // 801D01F0
  c->r[7]=0u+0x00000000u; // 801D01F4
  goto L_801D0204; // 801D01F8
L_801D01FC:;
  c->r[8]=0u+0x00000000u; // 801D01FC
  c->r[7]=0u+0x00000000u; // 801D0200
L_801D0204:;
  c->r[0]=R16(c->r[24]+0x00000000u); // 801D0204
  c->r[6]=c->r[0]&0x00009F1Fu; cr0(c,c->r[6]); // 801D0208
L_801D020C:;
  c->r[25]=addc(c,c->r[25],0xFFFFFFFFu,0); cr0(c,c->r[25]); // 801D020C
  if (crb(c,1)) { IRQCHK(c); goto L_801D0188; } // 801D0210
  cmpu(c,0,c->r[6],0x0000FFFFu); // 801D0214
  if (!crb(c,2)) { goto L_801D0224; } // 801D0218
  c->r[0]=R32(c->r[26]+0x00000000u); // 801D021C
  c->r[6]=c->r[0]&0x00009F1Fu; cr0(c,c->r[6]); // 801D0220
L_801D0224:;
  cmpu(c,0,c->r[7],0x0000FFFFu); // 801D0224
  if (!crb(c,2)) { goto L_801D0230; } // 801D0228
  c->r[7]=R32(c->r[26]+0x00000000u); // 801D022C
L_801D0230:;
  cmpu(c,0,c->r[8],0x0000FFFFu); // 801D0230
  if (!crb(c,2)) { goto L_801D023C; } // 801D0234
  c->r[8]=R32(c->r[26]+0x00000060u); // 801D0238
L_801D023C:;
  c->r[3]=c->r[26]|c->r[26]; // 801D023C
  c->r[5]=c->r[22]|c->r[22]; // 801D0240
  c->lr=0x801D0248u; f_801CD5D0(c); // 801D0244
  c->r[20]=c->r[22]|c->r[22]; // 801D0248
  c->r[25]=0u+0x00000000u; // 801D024C
  c->r[24]=0u+0x00000016u; // 801D0250
L_801D0254:;
  c->r[0]=R8(c->r[27]+0xFFFFFF79u); // 801D0254
  c->r[27]=c->r[27]+0xFFFFFF50u; // 801D0258
  W8(c->r[26]+0x0000005Du,c->r[0]); // 801D025C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801D0260
  c->r[3]=R8(c->r[27]+0x00000036u); // 801D0264
  W8(c->r[26]+0x0000005Fu,c->r[3]); // 801D0268
  if (crb(c,2)) { goto L_801D027C; } // 801D026C
  cmps(c,0,(int32_t)c->r[0],-7); // 801D0270
  if (crb(c,2)) { goto L_801D0288; } // 801D0274
  goto L_801D02A4; // 801D0278
L_801D027C:;
  c->r[3]=c->r[26]|c->r[26]; // 801D027C
  c->r[4]=c->r[27]|c->r[27]; // 801D0280
  c->lr=0x801D0288u; f_801CF370(c); // 801D0284
L_801D0288:;
  c->r[3]=c->r[26]|c->r[26]; // 801D0288
  c->r[4]=c->r[27]|c->r[27]; // 801D028C
  c->lr=0x801D0294u; f_801CDA00(c); // 801D0290
  c->r[3]=c->r[26]|c->r[26]; // 801D0294
  c->r[4]=c->r[27]|c->r[27]; // 801D0298
  c->lr=0x801D02A0u; f_801CEB90(c); // 801D029C
  goto L_801D02B0; // 801D02A0
L_801D02A4:;
  cmps(c,0,(int32_t)c->r[31],0); // 801D02A4
  if (!crb(c,2)) { goto L_801D02B0; } // 801D02A8
  W8(c->r[26]+0x0000005Eu,c->r[25]); // 801D02AC
L_801D02B0:;
  c->r[5]=c->r[27]+0xFFFFFFFCu; // 801D02B0
  c->r[4]=c->r[26]+0xFFFFFFFCu; // 801D02B4
  c->ctr=c->r[24]; // 801D02B8
  c->r[0]=c->r[0]|0x00000000u; // 801D02BC
L_801D02C0:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 801D02C0
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 801D02C4
  W32(c->r[5]+0x00000004u,c->r[3]); // 801D02C8
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 801D02CC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D02C0; } // 801D02D0
  c->r[20]=addc(c,c->r[20],0xFFFFFFFFu,0); cr0(c,c->r[20]); // 801D02D4
  if (crb(c,1)) { IRQCHK(c); goto L_801D0254; } // 801D02D8
L_801D02DC:;
  c->r[0]=0u+0x00000000u; // 801D02DC
  W8(c->r[26]+0x000004FFu,c->r[0]); // 801D02E0
L_801D02E4:;
  cmps(c,0,(int32_t)c->r[22],0); // 801D02E4
  if (!crb(c,2)) { goto L_801D0354; } // 801D02E8
  cmps(c,0,(int32_t)c->r[23],0); // 801D02EC
  if (!crb(c,2)) { goto L_801D032C; } // 801D02F0
  cmps(c,0,(int32_t)c->r[31],0); // 801D02F4
  if (crb(c,2)) { goto L_801D0324; } // 801D02F8
  c->r[0]=0u+0x00000016u; // 801D02FC
  c->r[5]=c->r[29]+0xFFFFFFFCu; // 801D0300
  c->r[4]=c->r[1]+0x00000004u; // 801D0304
  c->ctr=c->r[0]; // 801D0308
  c->r[0]=c->r[0]|0x00000000u; // 801D030C
L_801D0310:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 801D0310
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 801D0314
  W32(c->r[5]+0x00000004u,c->r[3]); // 801D0318
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 801D031C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D0310; } // 801D0320
L_801D0324:;
  c->r[23]=0u+0xFFFFFFFFu; // 801D0324
  goto L_801D0354; // 801D0328
L_801D032C:;
  cmps(c,0,(int32_t)c->r[23],-2); // 801D032C
  if (!crb(c,2)) { goto L_801D0354; } // 801D0330
  cmps(c,0,(int32_t)c->r[31],0); // 801D0334
  if (crb(c,2)) { goto L_801D0354; } // 801D0338
  c->r[4]=0u+0x000000FDu; // 801D033C
  c->r[3]=0u+0x00000000u; // 801D0340
  c->r[0]=0u+0xFFFFFFFFu; // 801D0344
  W8(c->r[29]+0x0000005Cu,c->r[4]); // 801D0348
  W8(c->r[29]+0x0000005Fu,c->r[3]); // 801D034C
  W8(c->r[29]+0x0000005Du,c->r[0]); // 801D0350
L_801D0354:;
  cmps(c,0,(int32_t)c->r[30],0); // 801D0354
  if (crb(c,2)) { goto L_801D0360; } // 801D0358
  W32(c->r[30]+0x00000000u,c->r[23]); // 801D035C
L_801D0360:;
  c->r[11]=c->r[1]+0x000000F0u; // 801D0360
  c->r[3]=c->r[22]|c->r[22]; // 801D0364
  c->lr=0x801D036Cu; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D0368
  c->r[0]=R32(c->r[1]+0x000000F4u); // 801D036C
  c->lr=c->r[0]; // 801D0370
  c->r[1]=c->r[1]+0x000000F0u; // 801D0374
  return; // 801D0378
}

// KPADInit
void f_801D0380(Ctx* __restrict c) {
  stub_log(0x801D0380u);  return;
}

// KPADInitEx
void f_801D0390(Ctx* __restrict c) {
  stub_log(0x801D0390u);  return;
}

// fn_801D07E0
void f_801D07E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D07E0
  c->r[0]=c->lr; // 801D07E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D07E8
  c->r[11]=c->r[1]+0x00000020u; // 801D07EC
  c->lr=0x801D07F4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D07F0
  c->r[30]=0u+0x802E0000u; // 801D07F4
  c->r[27]=c->r[3]|c->r[3]; // 801D07F8
  c->r[30]=c->r[30]+0xFFFF8768u; // 801D07FC
  cmps(c,0,(int32_t)c->r[4],0); // 801D0800
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)1400); // 801D0804
  c->r[28]=c->r[4]|c->r[4]; // 801D0808
  c->r[0]=c->r[30]+0x00000000u; // 801D080C
  c->r[29]=c->r[0]+c->r[3]; // 801D0810
  if (!crb(c,2)) { goto L_801D08A0; } // 801D0814
  c->r[31]=0u+0x00000000u; // 801D0818
  W32(c->r[29]+0x00000570u,c->r[31]); // 801D081C
  c->r[0]=0u+0x00000001u; // 801D0820
  c->r[3]=0u+0x00000000u; // 801D0824
  W8(c->r[29]+0x00000574u,c->r[0]); // 801D0828
  c->lr=0x801D0830u; f_801C7D70(c); // 801D082C
  c->r[4]=0u+0x801D0000u; // 801D0830
  c->r[3]=c->r[27]|c->r[27]; // 801D0834
  c->r[4]=c->r[4]+0x00000A70u; // 801D0838
  c->lr=0x801D0840u; f_801C38F0(c); // 801D083C
  c->r[3]=0u+0x00000001u; // 801D0840
  c->lr=0x801D0848u; f_801C7D70(c); // 801D0844
  W8(c->r[29]+0x00000557u,c->r[31]); // 801D0848
  cmps(c,0,(int32_t)c->r[27],3); // 801D084C
  W8(c->r[29]+0x00000559u,c->r[31]); // 801D0850
  if (!crb(c,2)) { goto L_801D0910; } // 801D0854
  {uint32_t ea=c->r[2]+0xFFFFA218u; c->f[0]=RF64(ea);} // 801D0858
  c->r[4]=c->r[30]+0x00001610u; // 801D085C
  c->r[3]=c->r[30]+0x00001630u; // 801D0860
  W8(c->r[13]+0xFFFFB63Eu,c->r[31]); // 801D0864
  W8(c->r[13]+0xFFFFB63Du,c->r[31]); // 801D0868
  W8(c->r[13]+0xFFFFB63Cu,c->r[31]); // 801D086C
  W8(c->r[13]+0xFFFFB63Au,c->r[31]); // 801D0870
  W16(c->r[13]+0xFFFFB638u,c->r[31]); // 801D0874
  W8(c->r[13]+0xFFFFB63Bu,c->r[31]); // 801D0878
  {uint32_t ea=c->r[30]+0x00001610u; WF64(ea,c->f[0]);} // 801D087C
  {uint32_t ea=c->r[30]+0x00001630u; WF64(ea,c->f[0]);} // 801D0880
  {uint32_t ea=c->r[4]+0x00000008u; WF64(ea,c->f[0]);} // 801D0884
  {uint32_t ea=c->r[3]+0x00000008u; WF64(ea,c->f[0]);} // 801D0888
  {uint32_t ea=c->r[4]+0x00000010u; WF64(ea,c->f[0]);} // 801D088C
  {uint32_t ea=c->r[3]+0x00000010u; WF64(ea,c->f[0]);} // 801D0890
  {uint32_t ea=c->r[4]+0x00000018u; WF64(ea,c->f[0]);} // 801D0894
  {uint32_t ea=c->r[3]+0x00000018u; WF64(ea,c->f[0]);} // 801D0898
  goto L_801D0910; // 801D089C
L_801D08A0:;
  c->r[4]=0u+0xFFFFFFFFu; // 801D08A0
  W8(c->r[29]+0x00000165u,c->r[4]); // 801D08A4
  c->r[6]=0u+0x00000000u; // 801D08A8
  c->r[5]=0u+0x00000000u; // 801D08AC
  W8(c->r[29]+0x0000019Du,c->r[4]); // 801D08B0
  W8(c->r[29]+0x000001D5u,c->r[4]); // 801D08B4
  W8(c->r[29]+0x0000020Du,c->r[4]); // 801D08B8
  W8(c->r[29]+0x00000245u,c->r[4]); // 801D08BC
  W8(c->r[29]+0x0000027Du,c->r[4]); // 801D08C0
  W8(c->r[29]+0x000002B5u,c->r[4]); // 801D08C4
  W8(c->r[29]+0x000002EDu,c->r[4]); // 801D08C8
  W8(c->r[29]+0x00000325u,c->r[4]); // 801D08CC
  W8(c->r[29]+0x0000035Du,c->r[4]); // 801D08D0
  W8(c->r[29]+0x00000395u,c->r[4]); // 801D08D4
  W8(c->r[29]+0x000003CDu,c->r[4]); // 801D08D8
  W8(c->r[29]+0x00000405u,c->r[4]); // 801D08DC
  W8(c->r[29]+0x0000043Du,c->r[4]); // 801D08E0
  W8(c->r[29]+0x00000475u,c->r[4]); // 801D08E4
  W8(c->r[29]+0x000004ADu,c->r[4]); // 801D08E8
  goto L_801D0904; // 801D08EC
L_801D08F0:;
  c->r[0]=R32(c->r[29]+0x000004BCu); // 801D08F0
  c->r[6]=c->r[6]+0x00000001u; // 801D08F4
  c->r[3]=c->r[0]+c->r[5]; // 801D08F8
  c->r[5]=c->r[5]+0x00000038u; // 801D08FC
  W8(c->r[3]+0x00000029u,c->r[4]); // 801D0900
L_801D0904:;
  c->r[0]=R32(c->r[29]+0x000004C0u); // 801D0904
  cmpu(c,0,c->r[6],c->r[0]); // 801D0908
  if (crb(c,0)) { IRQCHK(c); goto L_801D08F0; } // 801D090C
L_801D0910:;
  c->r[12]=R32(c->r[29]+0x00000550u); // 801D0910
  cmps(c,0,(int32_t)c->r[12],0); // 801D0914
  if (crb(c,2)) { goto L_801D092C; } // 801D0918
  c->r[3]=c->r[27]|c->r[27]; // 801D091C
  c->r[4]=c->r[28]|c->r[28]; // 801D0920
  c->ctr=c->r[12]; // 801D0924
  if (true) { c->lr=0x801D092Cu; dispatch(c,c->ctr); } // 801D0928
L_801D092C:;
  c->r[11]=c->r[1]+0x00000020u; // 801D092C
  c->lr=0x801D0934u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D0930
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D0934
  c->lr=c->r[0]; // 801D0938
  c->r[1]=c->r[1]+0x00000020u; // 801D093C
  return; // 801D0940
}

// KPADiControlWbcCallback
void f_801D0950(Ctx* __restrict c) {
  trace_call(0x801D0950u);
  c->r[3]=cntlz(c->r[4]); // 801D0950
  c->r[0]=0u+0x00000000u; // 801D0954
  c->r[3]=rotl(c->r[3],27)&0x000000FFu; // 801D0958
  W8(c->r[13]+0xFFFFB63Du,c->r[3]); // 801D095C
  W8(c->r[13]+0xFFFFB63Eu,c->r[0]); // 801D0960
  return; // 801D0964
}

// KPADiUpdateTempWbcCallback
void f_801D0970(Ctx* __restrict c) {
  trace_call(0x801D0970u);
  c->r[3]=cntlz(c->r[4]); // 801D0970
  c->r[0]=0u+0x00000000u; // 801D0974
  c->r[3]=rotl(c->r[3],27)&0x000000FFu; // 801D0978
  W8(c->r[13]+0xFFFFB63Au,c->r[3]); // 801D097C
  W8(c->r[13]+0xFFFFB63Eu,c->r[0]); // 801D0980
  return; // 801D0984
}

// KPADDisableDPD
void f_801D0990(Ctx* __restrict c) {
  trace_call(0x801D0990u);
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)1400); // 801D0990
  c->r[3]=0u+0x802E0000u; // 801D0994
  c->r[4]=0u+0x00000000u; // 801D0998
  c->r[3]=c->r[3]+0xFFFF8768u; // 801D099C
  c->r[3]=c->r[3]+c->r[0]; // 801D09A0
  W8(c->r[3]+0x00000556u,c->r[4]); // 801D09A4
  return; // 801D09A8
}

// KPADEnableDPD
void f_801D09B0(Ctx* __restrict c) {
  trace_call(0x801D09B0u);
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)1400); // 801D09B0
  c->r[3]=0u+0x802E0000u; // 801D09B4
  c->r[4]=0u+0x00000001u; // 801D09B8
  c->r[3]=c->r[3]+0xFFFF8768u; // 801D09BC
  c->r[3]=c->r[3]+c->r[0]; // 801D09C0
  W8(c->r[3]+0x00000556u,c->r[4]); // 801D09C4
  return; // 801D09C8
}

// KPADiControlDpdCallback
void f_801D09D0(Ctx* __restrict c) {
  trace_call(0x801D09D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D09D0
  c->r[0]=c->lr; // 801D09D4
  c->r[5]=0u+0x802E0000u; // 801D09D8
  cmps(c,0,(int32_t)c->r[4],0); // 801D09DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D09E0
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)1400); // 801D09E4
  c->r[5]=c->r[5]+0xFFFF8768u; // 801D09E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D09EC
  c->r[31]=c->r[5]+c->r[0]; // 801D09F0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D09F4
  c->r[30]=c->r[3]|c->r[3]; // 801D09F8
  if (!crb(c,2)) { goto L_801D0A38; } // 801D09FC
  c->r[0]=R32(c->r[31]+0x0000050Cu); // 801D0A00
  cmps(c,0,(int32_t)c->r[0],0); // 801D0A04
  if (crb(c,2)) { goto L_801D0A38; } // 801D0A08
  c->r[0]=R8(c->r[31]+0x0000055Bu); // 801D0A0C
  cmps(c,0,(int32_t)c->r[0],0); // 801D0A10
  if (!crb(c,2)) { goto L_801D0A38; } // 801D0A14
  c->r[0]=0u+0x00000001u; // 801D0A18
  W8(c->r[31]+0x0000055Bu,c->r[0]); // 801D0A1C
  c->r[4]=0u+0x00000001u; // 801D0A20
  c->r[12]=R32(c->r[31]+0x0000050Cu); // 801D0A24
  c->ctr=c->r[12]; // 801D0A28
  if (true) { c->lr=0x801D0A30u; dispatch(c,c->ctr); } // 801D0A2C
  c->r[0]=0u+0x00000000u; // 801D0A30
  W8(c->r[31]+0x0000055Au,c->r[0]); // 801D0A34
L_801D0A38:;
  c->r[3]=c->r[30]|c->r[30]; // 801D0A38
  c->lr=0x801D0A40u; f_801C61F0(c); // 801D0A3C
  W8(c->r[31]+0x00000557u,c->r[3]); // 801D0A40
  c->r[0]=0u+0x00000000u; // 801D0A44
  W8(c->r[31]+0x00000558u,c->r[0]); // 801D0A48
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D0A4C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D0A50
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D0A54
  c->lr=c->r[0]; // 801D0A58
  c->r[1]=c->r[1]+0x00000010u; // 801D0A5C
  return; // 801D0A60
}

// KPADiSamplingCallback
void f_801D0A70(Ctx* __restrict c) {
  trace_call(0x801D0A70u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0A70
  c->r[0]=c->lr; // 801D0A74
  W32(c->r[1]+0x00000064u,c->r[0]); // 801D0A78
  c->r[11]=c->r[1]+0x00000040u; // 801D0A7C
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 801D0A80
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 801D0A84
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 801D0A88
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 801D0A8C
  c->lr=0x801D0A94u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D0A90
  c->r[31]=0u+0x802E0000u; // 801D0A94
  c->r[7]=0u+0x43300000u; // 801D0A98
  c->r[31]=c->r[31]+0xFFFF8768u; // 801D0A9C
  c->r[5]=R32(c->r[2]+0xFFFFA238u); // 801D0AA0
  c->r[0]=R16(c->r[2]+0xFFFFA23Cu); // 801D0AA4
  c->r[6]=(uint32_t)((int32_t)c->r[3]*(int32_t)1400); // 801D0AA8
  c->r[4]=c->r[31]+0x00000000u; // 801D0AAC
  W32(c->r[1]+0x00000018u,c->r[7]); // 801D0AB0
  c->r[28]=c->r[3]|c->r[3]; // 801D0AB4
  c->r[30]=c->r[4]+c->r[6]; // 801D0AB8
  W32(c->r[1]+0x00000020u,c->r[7]); // 801D0ABC
  c->r[4]=c->r[1]+0x00000008u; // 801D0AC0
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 801D0AC4
  W16(c->r[1]+0x00000010u,c->r[0]); // 801D0AC8
  c->lr=0x801D0AD0u; f_801C3860(c); // 801D0ACC
  cmps(c,0,(int32_t)c->r[3],-1); // 801D0AD0
  if (crb(c,2)) { goto L_801D1198; } // 801D0AD4
  c->r[3]=R32(c->r[30]+0x000004C0u); // 801D0AD8
  c->r[27]=R8(c->r[30]+0x0000013Au); // 801D0ADC
  c->r[0]=c->r[3]+0x00000010u; // 801D0AE0
  cmpu(c,0,c->r[27],c->r[0]); // 801D0AE4
  if (crb(c,0)) { goto L_801D0AF0; } // 801D0AE8
  c->r[27]=0u+0x00000000u; // 801D0AEC
L_801D0AF0:;
  cmpu(c,0,c->r[27],0x00000010u); // 801D0AF0
  if (crb(c,0)) { goto L_801D0B0C; } // 801D0AF4
  c->r[0]=c->r[27]+0xFFFFFFF0u; // 801D0AF8
  c->r[3]=R32(c->r[30]+0x000004BCu); // 801D0AFC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)56); // 801D0B00
  c->r[29]=c->r[3]+c->r[0]; // 801D0B04
  goto L_801D0B18; // 801D0B08
L_801D0B0C:;
  c->r[0]=(uint32_t)((int32_t)c->r[27]*(int32_t)56); // 801D0B0C
  c->r[3]=c->r[30]+c->r[0]; // 801D0B10
  c->r[29]=c->r[3]+0x0000013Cu; // 801D0B14
L_801D0B18:;
  c->r[3]=c->r[28]|c->r[28]; // 801D0B18
  c->r[4]=c->r[29]|c->r[29]; // 801D0B1C
  c->lr=0x801D0B24u; f_801C41F0(c); // 801D0B20
  c->r[3]=c->r[28]|c->r[28]; // 801D0B24
  c->lr=0x801D0B2Cu; f_801C3A70(c); // 801D0B28
  W8(c->r[29]+0x00000036u,c->r[3]); // 801D0B2C
  c->r[0]=c->r[27]+0x00000001u; // 801D0B30
  W8(c->r[30]+0x0000013Au,c->r[0]); // 801D0B34
  c->r[3]=R32(c->r[30]+0x000004C0u); // 801D0B38
  c->r[4]=R8(c->r[30]+0x0000013Bu); // 801D0B3C
  c->r[0]=c->r[3]+0x00000010u; // 801D0B40
  cmpu(c,0,c->r[4],c->r[0]); // 801D0B44
  if (!crb(c,0)) { goto L_801D0B54; } // 801D0B48
  c->r[0]=c->r[4]+0x00000001u; // 801D0B4C
  W8(c->r[30]+0x0000013Bu,c->r[0]); // 801D0B50
L_801D0B54:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 801D0B54
  c->r[0]=R32(c->r[30]+0x00000570u); // 801D0B58
  cmpu(c,0,c->r[3],c->r[0]); // 801D0B5C
  if (crb(c,2)) { goto L_801D0B74; } // 801D0B60
  cmpu(c,0,c->r[3],0x00000001u); // 801D0B64
  if (!crb(c,2)) { goto L_801D0B74; } // 801D0B68
  c->r[0]=0u+0x00000001u; // 801D0B6C
  W8(c->r[30]+0x00000574u,c->r[0]); // 801D0B70
L_801D0B74:;
  c->r[0]=R8(c->r[30]+0x00000574u); // 801D0B74
  cmps(c,0,(int32_t)c->r[0],0); // 801D0B78
  if (crb(c,2)) { goto L_801D0CA0; } // 801D0B7C
  c->r[3]=c->r[28]|c->r[28]; // 801D0B80
  c->r[5]=c->r[1]+0x0000000Cu; // 801D0B84
  c->r[4]=0u+0x00000000u; // 801D0B88
  c->lr=0x801D0B90u; f_801C3690(c); // 801D0B8C
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x0000000Cu); // 801D0B90
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x00000010u); // 801D0B94
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x0000000Eu); // 801D0B98
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[5]); // 801D0B9C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[3]); cr0(c,c->r[0]); // 801D0BA0
  if (crb(c,2)) { goto L_801D0BFC; } // 801D0BA4
  c->r[0]=c->r[5]^0x80000000u; // 801D0BA8
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801D0BAC
  c->r[0]=c->r[3]^0x80000000u; // 801D0BB0
  {uint32_t ea=c->r[2]+0xFFFFA200u; c->f[4]=RF64(ea);} // 801D0BB4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D0BB8
  c->r[0]=c->r[4]^0x80000000u; // 801D0BBC
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=RF64(ea);} // 801D0BC0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=RF64(ea);} // 801D0BC4
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[4]); // 801D0BC8
  {uint32_t ea=c->r[2]+0xFFFFA1ECu; c->f[3]=c->ps1[3]=RF32(ea);} // 801D0BCC
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[4]); // 801D0BD0
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801D0BD4
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 801D0BD8
  c->f[2]=c->ps1[2]=S(c->f[3]/c->f[2]); // 801D0BDC
  {uint32_t ea=c->r[30]+0x00000510u; WF32(ea,c->f[2]);} // 801D0BE0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 801D0BE4
  c->f[1]=c->ps1[1]=S(c->f[3]/c->f[1]); // 801D0BE8
  {uint32_t ea=c->r[30]+0x00000514u; WF32(ea,c->f[1]);} // 801D0BEC
  c->f[0]=c->ps1[0]=S(c->f[3]/c->f[0]); // 801D0BF0
  {uint32_t ea=c->r[30]+0x00000518u; WF32(ea,c->f[0]);} // 801D0BF4
  goto L_801D0C0C; // 801D0BF8
L_801D0BFC:;
  {uint32_t ea=c->r[2]+0xFFFFA240u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D0BFC
  {uint32_t ea=c->r[30]+0x00000510u; WF32(ea,c->f[0]);} // 801D0C00
  {uint32_t ea=c->r[30]+0x00000514u; WF32(ea,c->f[0]);} // 801D0C04
  {uint32_t ea=c->r[30]+0x00000518u; WF32(ea,c->f[0]);} // 801D0C08
L_801D0C0C:;
  c->r[3]=c->r[28]|c->r[28]; // 801D0C0C
  c->r[5]=c->r[1]+0x0000000Cu; // 801D0C10
  c->r[4]=0u+0x00000001u; // 801D0C14
  c->lr=0x801D0C1Cu; f_801C3690(c); // 801D0C18
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x0000000Cu); // 801D0C1C
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x00000010u); // 801D0C20
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x0000000Eu); // 801D0C24
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[5]); // 801D0C28
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[3]); cr0(c,c->r[0]); // 801D0C2C
  if (crb(c,2)) { goto L_801D0C88; } // 801D0C30
  c->r[0]=c->r[5]^0x80000000u; // 801D0C34
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D0C38
  c->r[0]=c->r[3]^0x80000000u; // 801D0C3C
  {uint32_t ea=c->r[2]+0xFFFFA200u; c->f[4]=RF64(ea);} // 801D0C40
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801D0C44
  c->r[0]=c->r[4]^0x80000000u; // 801D0C48
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=RF64(ea);} // 801D0C4C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 801D0C50
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[4]); // 801D0C54
  {uint32_t ea=c->r[2]+0xFFFFA1ECu; c->f[3]=c->ps1[3]=RF32(ea);} // 801D0C58
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[4]); // 801D0C5C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D0C60
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=RF64(ea);} // 801D0C64
  c->f[2]=c->ps1[2]=S(c->f[3]/c->f[2]); // 801D0C68
  {uint32_t ea=c->r[30]+0x0000051Cu; WF32(ea,c->f[2]);} // 801D0C6C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 801D0C70
  c->f[1]=c->ps1[1]=S(c->f[3]/c->f[1]); // 801D0C74
  {uint32_t ea=c->r[30]+0x00000520u; WF32(ea,c->f[1]);} // 801D0C78
  c->f[0]=c->ps1[0]=S(c->f[3]/c->f[0]); // 801D0C7C
  {uint32_t ea=c->r[30]+0x00000524u; WF32(ea,c->f[0]);} // 801D0C80
  goto L_801D0C98; // 801D0C84
L_801D0C88:;
  {uint32_t ea=c->r[2]+0xFFFFA244u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D0C88
  {uint32_t ea=c->r[30]+0x0000051Cu; WF32(ea,c->f[0]);} // 801D0C8C
  {uint32_t ea=c->r[30]+0x00000520u; WF32(ea,c->f[0]);} // 801D0C90
  {uint32_t ea=c->r[30]+0x00000524u; WF32(ea,c->f[0]);} // 801D0C94
L_801D0C98:;
  c->r[0]=0u+0x00000000u; // 801D0C98
  W8(c->r[30]+0x00000574u,c->r[0]); // 801D0C9C
L_801D0CA0:;
  c->r[0]=R8(c->r[30]+0x0000055Cu); // 801D0CA0
  cmps(c,0,(int32_t)c->r[0],0); // 801D0CA4
  if (crb(c,2)) { goto L_801D0D60; } // 801D0CA8
  c->r[0]=R8(c->r[30]+0x0000055Du); // 801D0CAC
  cmps(c,0,(int32_t)c->r[0],0); // 801D0CB0
  if (crb(c,2)) { goto L_801D0CD8; } // 801D0CB4
  c->lr=0x801D0CBCu; f_801C2560(c); // 801D0CB8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801D0CBC
  cmpu(c,0,c->r[0],0x00000001u); // 801D0CC0
  if (!crb(c,2)) { goto L_801D0CD0; } // 801D0CC4
  {uint32_t ea=c->r[2]+0xFFFFA248u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D0CC8
  goto L_801D0CDC; // 801D0CCC
L_801D0CD0:;
  {uint32_t ea=c->r[2]+0xFFFFA24Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D0CD0
  goto L_801D0CDC; // 801D0CD4
L_801D0CD8:;
  {uint32_t ea=c->r[2]+0xFFFFA1E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D0CD8
L_801D0CDC:;
  {uint32_t ea=c->r[2]+0xFFFFA1ECu; c->f[30]=c->ps1[30]=RF32(ea);} // 801D0CDC
  c->f[2]=-c->f[0]; // 801D0CE0
  {uint32_t ea=c->r[2]+0xFFFFA1F4u; c->f[31]=c->ps1[31]=RF32(ea);} // 801D0CE4
  c->f[1]=c->ps1[1]=S(c->f[30]*c->f[30]); // 801D0CE8
  {uint32_t ea=c->r[2]+0xFFFFA1E0u; c->f[3]=c->ps1[3]=RF32(ea);} // 801D0CEC
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[31]); // 801D0CF0
  {uint32_t ea=c->r[30]+0x000000E4u; WF32(ea,c->f[3]);} // 801D0CF4
  {uint32_t ea=c->r[30]+0x000000E8u; WF32(ea,c->f[2]);} // 801D0CF8
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 801D0CFC
  c->lr=0x801D0D04u; f_80216698(c); // 801D0D00
  {uint32_t ea=c->r[30]+0x000000E4u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D0D04
  c->f[3]=c->ps1[3]=S(c->f[1]); // 801D0D08
  {uint32_t ea=c->r[2]+0xFFFFA1E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D0D0C
  fcmp(c,0,c->f[2],c->f[0]); // 801D0D10
  if (!crb(c,0)) { goto L_801D0D20; } // 801D0D14
  c->f[30]=c->ps1[30]=S(c->f[30]+c->f[2]); // 801D0D18
  goto L_801D0D24; // 801D0D1C
L_801D0D20:;
  c->f[30]=c->ps1[30]=S(c->f[30]-c->f[2]); // 801D0D20
L_801D0D24:;
  {uint32_t ea=c->r[30]+0x000000E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D0D24
  {uint32_t ea=c->r[2]+0xFFFFA1E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D0D28
  fcmp(c,0,c->f[1],c->f[0]); // 801D0D2C
  if (!crb(c,0)) { goto L_801D0D3C; } // 801D0D30
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[1]); // 801D0D34
  goto L_801D0D40; // 801D0D38
L_801D0D3C:;
  c->f[31]=c->ps1[31]=S(c->f[31]-c->f[1]); // 801D0D3C
L_801D0D40:;
  fcmp(c,0,c->f[30],c->f[31]); // 801D0D40
  if (!crb(c,0)) { goto L_801D0D4C; } // 801D0D44
  goto L_801D0D50; // 801D0D48
L_801D0D4C:;
  c->f[30]=c->f[31]; // 801D0D4C
L_801D0D50:;
  c->f[0]=c->ps1[0]=S(c->f[3]/c->f[30]); // 801D0D50
  c->r[0]=0u+0x00000000u; // 801D0D54
  {uint32_t ea=c->r[30]+0x000000ECu; WF32(ea,c->f[0]);} // 801D0D58
  W8(c->r[30]+0x0000055Cu,c->r[0]); // 801D0D5C
L_801D0D60:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 801D0D60
  cmps(c,0,(int32_t)c->r[0],16); // 801D0D64
  if (crb(c,2)) { goto L_801D0DE8; } // 801D0D68
  if (!crb(c,0)) { goto L_801D0D98; } // 801D0D6C
  cmps(c,0,(int32_t)c->r[0],2); // 801D0D70
  if (crb(c,2)) { goto L_801D0DD0; } // 801D0D74
  if (!crb(c,0)) { goto L_801D0D8C; } // 801D0D78
  cmps(c,0,(int32_t)c->r[0],0); // 801D0D7C
  if (crb(c,2)) { goto L_801D0DC0; } // 801D0D80
  if (!crb(c,0)) { goto L_801D0DC8; } // 801D0D84
  goto L_801D1198; // 801D0D88
L_801D0D8C:;
  cmps(c,0,(int32_t)c->r[0],4); // 801D0D8C
  if (!crb(c,0)) { goto L_801D1198; } // 801D0D90
  goto L_801D0DE0; // 801D0D94
L_801D0D98:;
  cmps(c,0,(int32_t)c->r[0],253); // 801D0D98
  if (!crb(c,0)) { goto L_801D0DB4; } // 801D0D9C
  cmps(c,0,(int32_t)c->r[0],251); // 801D0DA0
  if (!crb(c,0)) { goto L_801D0DC0; } // 801D0DA4
  cmps(c,0,(int32_t)c->r[0],18); // 801D0DA8
  if (!crb(c,0)) { goto L_801D1198; } // 801D0DAC
  goto L_801D0DD8; // 801D0DB0
L_801D0DB4:;
  cmps(c,0,(int32_t)c->r[0],255); // 801D0DB4
  if (crb(c,2)) { goto L_801D0DC0; } // 801D0DB8
  goto L_801D1198; // 801D0DBC
L_801D0DC0:;
  c->r[27]=0u+0x00000000u; // 801D0DC0
  goto L_801D0DEC; // 801D0DC4
L_801D0DC8:;
  c->r[27]=0u+0x00000002u; // 801D0DC8
  goto L_801D0DEC; // 801D0DCC
L_801D0DD0:;
  c->r[27]=0u+0x00000004u; // 801D0DD0
  goto L_801D0DEC; // 801D0DD4
L_801D0DD8:;
  c->r[27]=0u+0x00000006u; // 801D0DD8
  goto L_801D0DEC; // 801D0DDC
L_801D0DE0:;
  c->r[27]=0u+0x00000008u; // 801D0DE0
  goto L_801D0DEC; // 801D0DE4
L_801D0DE8:;
  c->r[27]=0u+0x0000000Au; // 801D0DE8
L_801D0DEC:;
  c->r[0]=R8(c->r[30]+0x00000556u); // 801D0DEC
  cmps(c,0,(int32_t)c->r[0],0); // 801D0DF0
  if (crb(c,2)) { goto L_801D0DFC; } // 801D0DF4
  c->r[27]=c->r[27]+0x00000001u; // 801D0DF8
L_801D0DFC:;
  c->r[3]=c->r[28]|c->r[28]; // 801D0DFC
  c->lr=0x801D0E04u; f_801C61F0(c); // 801D0E00
  cmps(c,0,(int32_t)c->r[3],0); // 801D0E04
  if (crb(c,2)) { goto L_801D0E14; } // 801D0E08
  c->r[4]=R8(c->r[30]+0x00000559u); // 801D0E0C
  goto L_801D0E18; // 801D0E10
L_801D0E14:;
  c->r[4]=0u+0x00000000u; // 801D0E14
L_801D0E18:;
  c->r[3]=0u+0x80280000u; // 801D0E18
  c->r[0]=rotl(c->r[27],1)&0xFFFFFFFEu; // 801D0E1C
  c->r[3]=c->r[3]+0xFFFFC2C8u; // 801D0E20
  c->r[27]=c->r[3]+c->r[0]; // 801D0E24
  c->r[0]=R8(c->r[3]+c->r[0]); // 801D0E28
  cmpu(c,0,c->r[4],c->r[0]); // 801D0E2C
  if (crb(c,2)) { goto L_801D0EAC; } // 801D0E30
  c->r[0]=R32(c->r[30]+0x0000050Cu); // 801D0E34
  cmps(c,0,(int32_t)c->r[0],0); // 801D0E38
  if (crb(c,2)) { goto L_801D0E70; } // 801D0E3C
  c->r[0]=R8(c->r[30]+0x0000055Au); // 801D0E40
  cmps(c,0,(int32_t)c->r[0],0); // 801D0E44
  if (!crb(c,2)) { goto L_801D0E70; } // 801D0E48
  c->r[0]=0u+0x00000001u; // 801D0E4C
  W8(c->r[30]+0x0000055Au,c->r[0]); // 801D0E50
  c->r[3]=c->r[28]|c->r[28]; // 801D0E54
  c->r[4]=0u+0x00000000u; // 801D0E58
  c->r[12]=R32(c->r[30]+0x0000050Cu); // 801D0E5C
  c->ctr=c->r[12]; // 801D0E60
  if (true) { c->lr=0x801D0E68u; dispatch(c,c->ctr); } // 801D0E64
  c->r[0]=0u+0x00000000u; // 801D0E68
  W8(c->r[30]+0x0000055Bu,c->r[0]); // 801D0E6C
L_801D0E70:;
  c->r[0]=R8(c->r[30]+0x00000558u); // 801D0E70
  cmps(c,0,(int32_t)c->r[0],0); // 801D0E74
  if (!crb(c,2)) { goto L_801D0EC4; } // 801D0E78
  c->r[0]=0u+0x00000001u; // 801D0E7C
  c->r[5]=0u+0x801D0000u; // 801D0E80
  W8(c->r[30]+0x00000558u,c->r[0]); // 801D0E84
  c->r[3]=c->r[28]|c->r[28]; // 801D0E88
  c->r[4]=R8(c->r[27]+0x00000000u); // 801D0E8C
  c->r[5]=c->r[5]+0x000009D0u; // 801D0E90
  c->lr=0x801D0E98u; f_801C62E0(c); // 801D0E94
  cmps(c,0,(int32_t)c->r[3],0); // 801D0E98
  if (!crb(c,2)) { goto L_801D0EC4; } // 801D0E9C
  c->r[0]=R8(c->r[27]+0x00000000u); // 801D0EA0
  W8(c->r[30]+0x00000559u,c->r[0]); // 801D0EA4
  goto L_801D0EC4; // 801D0EA8
L_801D0EAC:;
  c->r[4]=R8(c->r[27]+0x00000001u); // 801D0EAC
  c->r[0]=R8(c->r[29]+0x00000036u); // 801D0EB0
  cmpu(c,0,c->r[0],c->r[4]); // 801D0EB4
  if (crb(c,2)) { goto L_801D0EC4; } // 801D0EB8
  c->r[3]=c->r[28]|c->r[28]; // 801D0EBC
  c->lr=0x801D0EC4u; f_801C3AC0(c); // 801D0EC0
L_801D0EC4:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 801D0EC4
  cmpu(c,0,c->r[0],0x00000003u); // 801D0EC8
  if (!crb(c,2)) { goto L_801D1198; } // 801D0ECC
  c->r[3]=R8(c->r[13]+0xFFFFB63Eu); // 801D0ED0
  cmps(c,0,(int32_t)c->r[3],0); // 801D0ED4
  if (!crb(c,2)) { goto L_801D0F10; } // 801D0ED8
  c->r[0]=R8(c->r[13]+0xFFFFB63Du); // 801D0EDC
  cmps(c,0,(int32_t)c->r[0],0); // 801D0EE0
  if (!crb(c,2)) { goto L_801D0F10; } // 801D0EE4
  c->r[5]=0u+0x801D0000u; // 801D0EE8
  c->r[3]=c->r[28]|c->r[28]; // 801D0EEC
  c->r[5]=c->r[5]+0x00000950u; // 801D0EF0
  c->r[4]=0u+0x000000AAu; // 801D0EF4
  c->lr=0x801D0EFCu; f_801C7360(c); // 801D0EF8
  cmps(c,0,(int32_t)c->r[3],0); // 801D0EFC
  if (!crb(c,2)) { goto L_801D1198; } // 801D0F00
  c->r[0]=0u+0x00000001u; // 801D0F04
  W8(c->r[13]+0xFFFFB63Eu,c->r[0]); // 801D0F08
  goto L_801D1198; // 801D0F0C
L_801D0F10:;
  c->r[0]=R8(c->r[13]+0xFFFFB63Du); // 801D0F10
  cmps(c,0,(int32_t)c->r[0],0); // 801D0F14
  if (crb(c,2)) { goto L_801D0F64; } // 801D0F18
  c->r[0]=R8(c->r[13]+0xFFFFB63Cu); // 801D0F1C
  cmps(c,0,(int32_t)c->r[0],0); // 801D0F20
  if (!crb(c,2)) { goto L_801D0F64; } // 801D0F24
  cmps(c,0,(int32_t)c->r[3],0); // 801D0F28
  if (!crb(c,2)) { goto L_801D0F48; } // 801D0F2C
  c->lr=0x801D0F34u; f_801C0490(c); // 801D0F30
  cmps(c,0,(int32_t)c->r[3],0); // 801D0F34
  if (!crb(c,2)) { goto L_801D1198; } // 801D0F38
  c->r[0]=0u+0x00000001u; // 801D0F3C
  W8(c->r[13]+0xFFFFB63Eu,c->r[0]); // 801D0F40
  goto L_801D1198; // 801D0F44
L_801D0F48:;
  c->lr=0x801D0F4Cu; f_801C04A0(c); // 801D0F48
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801D0F4C
  W8(c->r[13]+0xFFFFB63Cu,c->r[3]); // 801D0F50
  c->r[0]=cntlz(c->r[0]); // 801D0F54
  c->r[0]=rotl(c->r[0],27)&0x000000FFu; // 801D0F58
  W8(c->r[13]+0xFFFFB63Eu,c->r[0]); // 801D0F5C
  goto L_801D1198; // 801D0F60
L_801D0F64:;
  cmps(c,0,(int32_t)c->r[3],0); // 801D0F64
  if (!crb(c,2)) { goto L_801D1198; } // 801D0F68
  c->r[0]=R8(c->r[13]+0xFFFFB63Cu); // 801D0F6C
  cmps(c,0,(int32_t)c->r[0],0); // 801D0F70
  if (crb(c,2)) { goto L_801D1198; } // 801D0F74
  c->r[0]=R8(c->r[13]+0xFFFFB63Au); // 801D0F78
  cmpu(c,0,c->r[0],0x00000003u); // 801D0F7C
  if (!crb(c,0)) { goto L_801D1198; } // 801D0F80
  cmps(c,0,(int32_t)c->r[0],0); // 801D0F84
  if (crb(c,2)) { goto L_801D0FA0; } // 801D0F88
  cmps(c,0,(int32_t)c->r[0],1); // 801D0F8C
  if (crb(c,2)) { goto L_801D0FC8; } // 801D0F90
  cmps(c,0,(int32_t)c->r[0],2); // 801D0F94
  if (crb(c,2)) { goto L_801D1050; } // 801D0F98
  goto L_801D1198; // 801D0F9C
L_801D0FA0:;
  c->r[5]=0u+0x801D0000u; // 801D0FA0
  c->r[3]=c->r[28]|c->r[28]; // 801D0FA4
  c->r[5]=c->r[5]+0x00000970u; // 801D0FA8
  c->r[4]=0u+0x00000000u; // 801D0FAC
  c->lr=0x801D0FB4u; f_801C7360(c); // 801D0FB0
  cmps(c,0,(int32_t)c->r[3],0); // 801D0FB4
  if (!crb(c,2)) { goto L_801D1198; } // 801D0FB8
  c->r[0]=0u+0x00000001u; // 801D0FBC
  W8(c->r[13]+0xFFFFB63Eu,c->r[0]); // 801D0FC0
  goto L_801D1198; // 801D0FC4
L_801D0FC8:;
  c->r[0]=R8(c->r[29]+0x00000032u); // 801D0FC8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801D0FCC
  cmps(c,0,(int32_t)c->r[0],127); // 801D0FD0
  if (crb(c,2)) { goto L_801D0FE0; } // 801D0FD4
  cmps(c,0,(int32_t)c->r[0],-128); // 801D0FD8
  if (!crb(c,2)) { goto L_801D1020; } // 801D0FDC
L_801D0FE0:;
  {uint32_t ea=c->r[2]+0xFFFFA218u; c->f[0]=RF64(ea);} // 801D0FE0
  c->r[4]=c->r[31]+0x00001610u; // 801D0FE4
  c->r[3]=c->r[31]+0x00001630u; // 801D0FE8
  c->r[0]=0u+0x00000000u; // 801D0FEC
  W8(c->r[13]+0xFFFFB63Au,c->r[0]); // 801D0FF0
  W16(c->r[13]+0xFFFFB638u,c->r[0]); // 801D0FF4
  W8(c->r[13]+0xFFFFB63Bu,c->r[0]); // 801D0FF8
  {uint32_t ea=c->r[31]+0x00001610u; WF64(ea,c->f[0]);} // 801D0FFC
  {uint32_t ea=c->r[31]+0x00001630u; WF64(ea,c->f[0]);} // 801D1000
  {uint32_t ea=c->r[4]+0x00000008u; WF64(ea,c->f[0]);} // 801D1004
  {uint32_t ea=c->r[3]+0x00000008u; WF64(ea,c->f[0]);} // 801D1008
  {uint32_t ea=c->r[4]+0x00000010u; WF64(ea,c->f[0]);} // 801D100C
  {uint32_t ea=c->r[3]+0x00000010u; WF64(ea,c->f[0]);} // 801D1010
  {uint32_t ea=c->r[4]+0x00000018u; WF64(ea,c->f[0]);} // 801D1014
  {uint32_t ea=c->r[3]+0x00000018u; WF64(ea,c->f[0]);} // 801D1018
  goto L_801D1198; // 801D101C
L_801D1020:;
  c->r[3]=R16(c->r[13]+0xFFFFB638u); // 801D1020
  c->r[0]=R8(c->r[13]+0xFFFFAB34u); // 801D1024
  c->r[3]=c->r[3]+0x00000001u; // 801D1028
  W16(c->r[13]+0xFFFFB638u,c->r[3]); // 801D102C
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 801D1030
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801D1034
  if (!crb(c,1)) { goto L_801D1198; } // 801D1038
  c->r[3]=0u+0x00000002u; // 801D103C
  c->r[0]=0u+0x00000000u; // 801D1040
  W8(c->r[13]+0xFFFFB63Au,c->r[3]); // 801D1044
  W16(c->r[13]+0xFFFFB638u,c->r[0]); // 801D1048
  goto L_801D1198; // 801D104C
L_801D1050:;
  c->r[0]=R8(c->r[29]+0x00000029u); // 801D1050
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801D1054
  if (!crb(c,2)) { goto L_801D1198; } // 801D1058
  c->r[4]=R16(c->r[13]+0xFFFFB638u); // 801D105C
  c->r[3]=c->r[31]+0x00001610u; // 801D1060
  {uint32_t ea=c->r[2]+0xFFFFA200u; c->f[1]=RF64(ea);} // 801D1064
  c->r[0]=c->r[4]+0x00000001u; // 801D1068
  W16(c->r[13]+0xFFFFB638u,c->r[0]); // 801D106C
  c->r[5]=rotl(c->r[0],0)&0x0000FFFFu; // 801D1070
  {uint32_t ea=c->r[31]+0x00001610u; c->f[2]=RF64(ea);} // 801D1074
  c->r[4]=c->r[5]+0xFFFFFFFFu; // 801D1078
  c->r[0]=R16(c->r[29]+0x0000002Au); // 801D107C
  c->r[4]=c->r[4]^0x80000000u; // 801D1080
  W32(c->r[1]+0x0000001Cu,c->r[4]); // 801D1084
  {uint32_t ea=c->r[2]+0xFFFFA228u; c->f[0]=RF64(ea);} // 801D1088
  {uint32_t ea=c->r[1]+0x00000018u; c->f[3]=RF64(ea);} // 801D108C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D1090
  c->f[4]=c->f[3]-c->f[1]; // 801D1094
  {uint32_t ea=c->r[3]+0x00000008u; c->f[6]=RF64(ea);} // 801D1098
  {uint32_t ea=c->r[1]+0x00000020u; c->f[3]=RF64(ea);} // 801D109C
  W32(c->r[1]+0x0000001Cu,c->r[5]); // 801D10A0
  c->f[7]=c->f[4]*c->f[2]; // 801D10A4
  {uint32_t ea=c->r[3]+0x00000010u; c->f[5]=RF64(ea);} // 801D10A8
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=RF64(ea);} // 801D10AC
  c->f[3]=c->f[3]-c->f[0]; // 801D10B0
  W32(c->r[1]+0x00000024u,c->r[4]); // 801D10B4
  c->f[4]=c->f[2]-c->f[0]; // 801D10B8
  c->f[8]=c->f[7]+c->f[3]; // 801D10BC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[2]=RF64(ea);} // 801D10C0
  {uint32_t ea=c->r[3]+0x00000018u; c->f[3]=RF64(ea);} // 801D10C4
  c->f[7]=c->f[2]-c->f[1]; // 801D10C8
  W32(c->r[1]+0x00000024u,c->r[5]); // 801D10CC
  c->f[8]=c->f[8]/c->f[4]; // 801D10D0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[4]=RF64(ea);} // 801D10D4
  {uint32_t ea=c->r[13]+0xFFFFAB38u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D10D8
  {uint32_t ea=c->r[31]+0x00001610u; WF64(ea,c->f[8]);} // 801D10DC
  c->f[8]=c->f[7]*c->f[6]; // 801D10E0
  c->r[0]=R16(c->r[29]+0x0000002Cu); // 801D10E4
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801D10E8
  c->f[7]=c->f[4]-c->f[0]; // 801D10EC
  {uint32_t ea=c->r[1]+0x00000018u; c->f[4]=RF64(ea);} // 801D10F0
  c->f[6]=c->f[4]-c->f[0]; // 801D10F4
  W32(c->r[1]+0x0000001Cu,c->r[4]); // 801D10F8
  {uint32_t ea=c->r[1]+0x00000018u; c->f[4]=RF64(ea);} // 801D10FC
  c->f[8]=c->f[8]+c->f[6]; // 801D1100
  W32(c->r[1]+0x0000001Cu,c->r[5]); // 801D1104
  c->f[6]=c->f[4]-c->f[1]; // 801D1108
  c->f[7]=c->f[8]/c->f[7]; // 801D110C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[4]=RF64(ea);} // 801D1110
  {uint32_t ea=c->r[3]+0x00000008u; WF64(ea,c->f[7]);} // 801D1114
  c->f[7]=c->f[6]*c->f[5]; // 801D1118
  c->r[0]=R16(c->r[29]+0x0000002Eu); // 801D111C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D1120
  c->f[5]=c->f[4]-c->f[0]; // 801D1124
  {uint32_t ea=c->r[1]+0x00000020u; c->f[4]=RF64(ea);} // 801D1128
  c->f[6]=c->f[4]-c->f[0]; // 801D112C
  W32(c->r[1]+0x00000024u,c->r[4]); // 801D1130
  {uint32_t ea=c->r[1]+0x00000020u; c->f[4]=RF64(ea);} // 801D1134
  c->f[6]=c->f[7]+c->f[6]; // 801D1138
  W32(c->r[1]+0x00000024u,c->r[5]); // 801D113C
  c->f[4]=c->f[4]-c->f[1]; // 801D1140
  c->f[5]=c->f[6]/c->f[5]; // 801D1144
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=RF64(ea);} // 801D1148
  {uint32_t ea=c->r[3]+0x00000010u; WF64(ea,c->f[5]);} // 801D114C
  c->f[5]=c->f[4]*c->f[3]; // 801D1150
  c->r[0]=R16(c->r[29]+0x00000030u); // 801D1154
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801D1158
  c->f[3]=c->f[1]-c->f[0]; // 801D115C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=RF64(ea);} // 801D1160
  c->f[4]=c->f[1]-c->f[0]; // 801D1164
  W32(c->r[1]+0x0000001Cu,c->r[5]); // 801D1168
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=RF64(ea);} // 801D116C
  c->f[4]=c->f[5]+c->f[4]; // 801D1170
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801D1174
  c->f[1]=c->f[4]/c->f[3]; // 801D1178
  {uint32_t ea=c->r[3]+0x00000018u; WF64(ea,c->f[1]);} // 801D117C
  fcmp(c,0,c->f[0],c->f[2]); // 801D1180
  if (!crb(c,1)) { goto L_801D1198; } // 801D1184
  c->r[0]=0u+0x00000003u; // 801D1188
  W8(c->r[13]+0xFFFFB63Au,c->r[0]); // 801D118C
  c->r[4]=0u+0x00000004u; // 801D1190
  c->lr=0x801D1198u; f_801C04F0(c); // 801D1194
L_801D1198:;
  c->r[12]=R32(c->r[30]+0x0000054Cu); // 801D1198
  cmps(c,0,(int32_t)c->r[12],0); // 801D119C
  if (crb(c,2)) { goto L_801D11B0; } // 801D11A0
  c->r[3]=c->r[28]|c->r[28]; // 801D11A4
  c->ctr=c->r[12]; // 801D11A8
  if (true) { c->lr=0x801D11B0u; dispatch(c,c->ctr); } // 801D11AC
L_801D11B0:;
  c->r[11]=c->r[1]+0x00000040u; // 801D11B0
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 801D11B4
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 801D11B8
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 801D11BC
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 801D11C0
  c->lr=0x801D11C8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D11C4
  c->r[0]=R32(c->r[1]+0x00000064u); // 801D11C8
  c->lr=c->r[0]; // 801D11CC
  c->r[1]=c->r[1]+0x00000060u; // 801D11D0
  return; // 801D11D4
}

// fn_801D11E0
void f_801D11E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D11E0
  c->r[0]=c->lr; // 801D11E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D11E8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D11EC
  c->r[0]=R32(c->r[13]+0xFFFFB648u); // 801D11F0
  cmps(c,0,(int32_t)c->r[0],0); // 801D11F4
  if (crb(c,2)) { goto L_801D1204; } // 801D11F8
  c->r[3]=0u+0x00000001u; // 801D11FC
  goto L_801D12C8; // 801D1200
L_801D1204:;
  c->lr=0x801D1208u; f_80186840(c); // 801D1204
  c->r[0]=rotl(c->r[3],0)&0x10000000u; cr0(c,c->r[0]); // 801D1208
  if (!crb(c,2)) { goto L_801D1220; } // 801D120C
  c->r[0]=0u+0x00000002u; // 801D1210
  W32(c->r[13]+0xFFFFB64Cu,c->r[0]); // 801D1214
  c->r[3]=0u+0x00000000u; // 801D1218
  goto L_801D12C8; // 801D121C
L_801D1220:;
  c->lr=0x801D1224u; f_8018D6A0(c); // 801D1220
  c->r[0]=0u+0x000000F2u; // 801D1224
  W8(c->r[1]+0x00000008u,c->r[0]); // 801D1228
  c->r[31]=c->r[3]|c->r[3]; // 801D122C
  c->r[6]=c->r[1]+0x00000008u; // 801D1230
  c->r[3]=0u+0x00000000u; // 801D1234
  c->r[4]=0u+0x00000001u; // 801D1238
  c->r[5]=0u+0xB0000000u; // 801D123C
  c->r[7]=0u+0x00000001u; // 801D1240
  c->lr=0x801D1248u; f_80196770(c); // 801D1244
  cmps(c,0,(int32_t)c->r[3],0); // 801D1248
  if (!crb(c,2)) { goto L_801D1268; } // 801D124C
  c->r[0]=0u+0x00000005u; // 801D1250
  W32(c->r[13]+0xFFFFB64Cu,c->r[0]); // 801D1254
  c->r[3]=c->r[31]|c->r[31]; // 801D1258
  c->lr=0x801D1260u; f_8018D6E0(c); // 801D125C
  c->r[3]=0u+0x00000000u; // 801D1260
  goto L_801D12C8; // 801D1264
L_801D1268:;
  c->r[0]=0u+0x000000F3u; // 801D1268
  W8(c->r[1]+0x00000008u,c->r[0]); // 801D126C
  c->r[6]=c->r[1]+0x00000008u; // 801D1270
  c->r[3]=0u+0x00000000u; // 801D1274
  c->r[4]=0u+0x00000001u; // 801D1278
  c->r[5]=0u+0xB0000000u; // 801D127C
  c->r[7]=0u+0x00000001u; // 801D1280
  c->lr=0x801D1288u; f_80196770(c); // 801D1284
  cmps(c,0,(int32_t)c->r[3],0); // 801D1288
  if (!crb(c,2)) { goto L_801D12A8; } // 801D128C
  c->r[0]=0u+0x00000005u; // 801D1290
  W32(c->r[13]+0xFFFFB64Cu,c->r[0]); // 801D1294
  c->r[3]=c->r[31]|c->r[31]; // 801D1298
  c->lr=0x801D12A0u; f_8018D6E0(c); // 801D129C
  c->r[3]=0u+0x00000000u; // 801D12A0
  goto L_801D12C8; // 801D12A4
L_801D12A8:;
  c->r[3]=c->r[31]|c->r[31]; // 801D12A8
  c->lr=0x801D12B0u; f_8018D6E0(c); // 801D12AC
  c->r[0]=0u+0x00000000u; // 801D12B0
  c->r[3]=0u+0x00000001u; // 801D12B4
  W32(c->r[13]+0xFFFFB648u,c->r[3]); // 801D12B8
  c->r[3]=0u+0x00000001u; // 801D12BC
  W32(c->r[13]+0xFFFFB64Cu,c->r[0]); // 801D12C0
  W32(c->r[13]+0xFFFFB650u,c->r[0]); // 801D12C4
L_801D12C8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D12C8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D12CC
  c->lr=c->r[0]; // 801D12D0
  c->r[1]=c->r[1]+0x00000020u; // 801D12D4
  return; // 801D12D8
}

// fn_801D12E0
void f_801D12E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D12E0
  c->r[0]=c->lr; // 801D12E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D12E8
  c->lr=0x801D12F0u; f_80186840(c); // 801D12EC
  c->r[0]=rotl(c->r[3],0)&0x10000000u; cr0(c,c->r[0]); // 801D12F0
  if (!crb(c,2)) { goto L_801D1308; } // 801D12F4
  c->r[0]=0u+0x00000000u; // 801D12F8
  W32(c->r[13]+0xFFFFB654u,c->r[0]); // 801D12FC
  c->r[3]=0u+0x00000002u; // 801D1300
  goto L_801D1318; // 801D1304
L_801D1308:;
  c->r[4]=0u+0xA5FF0000u; // 801D1308
  c->r[3]=0u+0x00000000u; // 801D130C
  c->r[0]=c->r[4]+0x0000005Au; // 801D1310
  W32(c->r[13]+0xFFFFB654u,c->r[0]); // 801D1314
L_801D1318:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D1318
  c->lr=c->r[0]; // 801D131C
  c->r[1]=c->r[1]+0x00000010u; // 801D1320
  return; // 801D1324
}

// fn_801D1330
void f_801D1330(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D1330
  c->r[0]=c->lr; // 801D1334
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D1338
  c->r[11]=c->r[1]+0x00000030u; // 801D133C
  c->lr=0x801D1344u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D1340
  c->r[5]=R32(c->r[13]+0xFFFFB654u); // 801D1344
  c->r[30]=c->r[3]|c->r[3]; // 801D1348
  c->r[31]=c->r[4]|c->r[4]; // 801D134C
  c->r[0]=c->r[5]+0x5A010000u; // 801D1350
  cmpu(c,0,c->r[0],0x0000005Au); // 801D1354
  if (crb(c,2)) { goto L_801D1364; } // 801D1358
  c->r[3]=0u+0x00000002u; // 801D135C
  goto L_801D1548; // 801D1360
L_801D1364:;
  c->r[0]=R32(c->r[13]+0xFFFFB648u); // 801D1364
  cmps(c,0,(int32_t)c->r[0],0); // 801D1368
  if (!crb(c,2)) { goto L_801D1384; } // 801D136C
  c->lr=0x801D1374u; f_801D11E0(c); // 801D1370
  cmps(c,0,(int32_t)c->r[3],0); // 801D1374
  if (!crb(c,2)) { goto L_801D1384; } // 801D1378
  c->r[3]=0u+0x00000002u; // 801D137C
  goto L_801D1548; // 801D1380
L_801D1384:;
  c->r[0]=R32(c->r[13]+0xFFFFB648u); // 801D1384
  cmps(c,0,(int32_t)c->r[0],0); // 801D1388
  if (!crb(c,2)) { goto L_801D13A0; } // 801D138C
  c->r[0]=0u+0x00000001u; // 801D1390
  W32(c->r[13]+0xFFFFB64Cu,c->r[0]); // 801D1394
  c->r[3]=0u+0x00000002u; // 801D1398
  goto L_801D1548; // 801D139C
L_801D13A0:;
  c->r[3]=0u+0x00000000u; // 801D13A0
  c->r[4]=0u+0x00000001u; // 801D13A4
  c->r[5]=0u+0x00000000u; // 801D13A8
  c->lr=0x801D13B0u; f_80195E70(c); // 801D13AC
  cmps(c,0,(int32_t)c->r[3],0); // 801D13B0
  if (!crb(c,2)) { goto L_801D13C0; } // 801D13B4
  c->r[3]=0u+0x00000000u; // 801D13B8
  goto L_801D1548; // 801D13BC
L_801D13C0:;
  c->r[4]=c->r[30]|c->r[30]; // 801D13C0
  c->r[3]=0u+0x0000000Du; // 801D13C4
  goto L_801D13E4; // 801D13C8
  c->r[0]=c->r[0]|0x00000000u; // 801D13CC
L_801D13D0:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 801D13D0
  cmps(c,0,(int32_t)c->r[0],10); // 801D13D4
  if (!crb(c,2)) { goto L_801D13E0; } // 801D13D8
  W8(c->r[4]+0x00000000u,c->r[3]); // 801D13DC
L_801D13E0:;
  c->r[4]=c->r[4]+0x00000001u; // 801D13E0
L_801D13E4:;
  c->r[0]=c->r[4]-c->r[30]; // 801D13E4
  cmpu(c,0,c->r[0],c->r[31]); // 801D13E8
  if (crb(c,0)) { IRQCHK(c); goto L_801D13D0; } // 801D13EC
  c->r[3]=0u+0xB0000000u; // 801D13F0
  c->r[28]=R32(c->r[2]+0xFFFFA010u); // 801D13F4
  c->r[0]=c->r[3]+0x00000100u; // 801D13F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D13FC
  c->r[26]=0u+0x00000000u; // 801D1400
  c->r[29]=0u+0x30000000u; // 801D1404
  goto L_801D1534; // 801D1408
L_801D140C:;
  c->r[5]=c->r[28]|c->r[28]; // 801D140C
  c->r[3]=0u+0x00000000u; // 801D1410
  c->r[4]=0u+0x00000001u; // 801D1414
  c->lr=0x801D141Cu; f_801956C0(c); // 801D1418
  cmps(c,0,(int32_t)c->r[3],0); // 801D141C
  if (!crb(c,2)) { goto L_801D142C; } // 801D1420
  c->r[27]=0u+0xFFFFFFFFu; // 801D1424
  goto L_801D1488; // 801D1428
L_801D142C:;
  c->r[0]=c->r[29]+0x00000100u; // 801D142C
  W32(c->r[1]+0x00000008u,c->r[0]); // 801D1430
  c->r[4]=c->r[1]+0x00000008u; // 801D1434
  c->r[3]=0u+0x00000000u; // 801D1438
  c->r[5]=0u+0x00000004u; // 801D143C
  c->r[6]=0u+0x00000001u; // 801D1440
  c->r[7]=0u+0x00000000u; // 801D1444
  c->lr=0x801D144Cu; f_80194C20(c); // 801D1448
  c->r[3]=0u+0x00000000u; // 801D144C
  c->lr=0x801D1454u; f_80195050(c); // 801D1450
  c->r[4]=c->r[1]+0x0000000Cu; // 801D1454
  c->r[3]=0u+0x00000000u; // 801D1458
  c->r[5]=0u+0x00000004u; // 801D145C
  c->r[6]=0u+0x00000000u; // 801D1460
  c->r[7]=0u+0x00000000u; // 801D1464
  c->lr=0x801D146Cu; f_80194C20(c); // 801D1468
  c->r[3]=0u+0x00000000u; // 801D146C
  c->lr=0x801D1474u; f_80195050(c); // 801D1470
  c->r[3]=0u+0x00000000u; // 801D1474
  c->lr=0x801D147Cu; f_801957F0(c); // 801D1478
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801D147C
  c->r[0]=rotl(c->r[0],8)&0x0000003Fu; // 801D1480
  c->r[27]=addc(c,~c->r[0],0x00000020u,1); // 801D1484
L_801D1488:;
  cmps(c,0,(int32_t)c->r[27],0); // 801D1488
  if (!crb(c,0)) { goto L_801D1498; } // 801D148C
  c->r[26]=0u+0x00000003u; // 801D1490
  goto L_801D153C; // 801D1494
L_801D1498:;
  cmps(c,0,(int32_t)c->r[27],32); // 801D1498
  if (!crb(c,2)) { goto L_801D1534; } // 801D149C
  c->r[5]=c->r[28]|c->r[28]; // 801D14A0
  c->r[3]=0u+0x00000000u; // 801D14A4
  c->r[4]=0u+0x00000001u; // 801D14A8
  c->lr=0x801D14B0u; f_801956C0(c); // 801D14AC
  cmps(c,0,(int32_t)c->r[3],0); // 801D14B0
  if (!crb(c,2)) { goto L_801D14C0; } // 801D14B4
  c->r[26]=0u+0x00000003u; // 801D14B8
  goto L_801D153C; // 801D14BC
L_801D14C0:;
  c->r[4]=c->r[1]+0x00000014u; // 801D14C0
  c->r[3]=0u+0x00000000u; // 801D14C4
  c->r[5]=0u+0x00000004u; // 801D14C8
  c->r[6]=0u+0x00000001u; // 801D14CC
  c->r[7]=0u+0x00000000u; // 801D14D0
  c->lr=0x801D14D8u; f_80194C20(c); // 801D14D4
  c->r[3]=0u+0x00000000u; // 801D14D8
  c->lr=0x801D14E0u; f_80195050(c); // 801D14DC
  goto L_801D151C; // 801D14E0
L_801D14E4:;
  c->r[0]=R8(c->r[30]+0x00000000u); // 801D14E4
  c->r[4]=c->r[1]+0x00000010u; // 801D14E8
  c->r[3]=0u+0x00000000u; // 801D14EC
  c->r[5]=0u+0x00000004u; // 801D14F0
  c->r[0]=rotl(c->r[0],24)&0xFF000000u; // 801D14F4
  W32(c->r[1]+0x00000010u,c->r[0]); // 801D14F8
  c->r[6]=0u+0x00000001u; // 801D14FC
  c->r[7]=0u+0x00000000u; // 801D1500
  c->lr=0x801D1508u; f_80194C20(c); // 801D1504
  c->r[3]=0u+0x00000000u; // 801D1508
  c->lr=0x801D1510u; f_80195050(c); // 801D150C
  c->r[30]=c->r[30]+0x00000001u; // 801D1510
  c->r[27]=c->r[27]+0xFFFFFFFFu; // 801D1514
  c->r[31]=c->r[31]+0xFFFFFFFFu; // 801D1518
L_801D151C:;
  cmps(c,0,(int32_t)c->r[27],0); // 801D151C
  if (!crb(c,1)) { goto L_801D152C; } // 801D1520
  cmps(c,0,(int32_t)c->r[31],0); // 801D1524
  if (!crb(c,2)) { IRQCHK(c); goto L_801D14E4; } // 801D1528
L_801D152C:;
  c->r[3]=0u+0x00000000u; // 801D152C
  c->lr=0x801D1534u; f_801957F0(c); // 801D1530
L_801D1534:;
  cmps(c,0,(int32_t)c->r[31],0); // 801D1534
  if (!crb(c,2)) { IRQCHK(c); goto L_801D140C; } // 801D1538
L_801D153C:;
  c->r[3]=0u+0x00000000u; // 801D153C
  c->lr=0x801D1544u; f_80195F70(c); // 801D1540
  c->r[3]=c->r[26]|c->r[26]; // 801D1544
L_801D1548:;
  c->r[11]=c->r[1]+0x00000030u; // 801D1548
  c->lr=0x801D1550u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D154C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D1550
  c->lr=c->r[0]; // 801D1554
  c->r[1]=c->r[1]+0x00000030u; // 801D1558
  return; // 801D155C
}

// USB_LOG
void f_801D1560(Ctx* __restrict c) {
  trace_call(0x801D1560u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D1560
  c->r[0]=c->lr; // 801D1564
  W32(c->r[1]+0x00000084u,c->r[0]); // 801D1568
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 801D156C
  c->r[31]=c->r[3]|c->r[3]; // 801D1570
  if (!crb(c,6)) { goto L_801D1598; } // 801D1574
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 801D1578
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 801D157C
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[3]);} // 801D1580
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[4]);} // 801D1584
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[5]);} // 801D1588
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[6]);} // 801D158C
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[7]);} // 801D1590
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[8]);} // 801D1594
L_801D1598:;
  c->r[0]=R8(c->r[13]+0xFFFFB660u); // 801D1598
  W32(c->r[1]+0x00000008u,c->r[3]); // 801D159C
  cmps(c,0,(int32_t)c->r[0],0); // 801D15A0
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801D15A4
  W32(c->r[1]+0x00000010u,c->r[5]); // 801D15A8
  W32(c->r[1]+0x00000014u,c->r[6]); // 801D15AC
  W32(c->r[1]+0x00000018u,c->r[7]); // 801D15B0
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 801D15B4
  W32(c->r[1]+0x00000020u,c->r[9]); // 801D15B8
  W32(c->r[1]+0x00000024u,c->r[10]); // 801D15BC
  if (crb(c,2)) { goto L_801D15F4; } // 801D15C0
  c->r[3]=c->r[13]+0xFFFFAB48u; // 801D15C4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D15C8
  c->lr=0x801D15D0u; f_801899B0(c); // 801D15CC
  c->r[5]=c->r[1]+0x00000088u; // 801D15D0
  c->r[0]=c->r[1]+0x00000008u; // 801D15D4
  c->r[3]=0u+0x01000000u; // 801D15D8
  W32(c->r[1]+0x00000068u,c->r[3]); // 801D15DC
  c->r[4]=c->r[1]+0x00000068u; // 801D15E0
  W32(c->r[1]+0x0000006Cu,c->r[5]); // 801D15E4
  c->r[3]=c->r[31]|c->r[31]; // 801D15E8
  W32(c->r[1]+0x00000070u,c->r[0]); // 801D15EC
  c->lr=0x801D15F4u; f_8020E2B4(c); // 801D15F0
L_801D15F4:;
  c->r[0]=R32(c->r[1]+0x00000084u); // 801D15F4
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 801D15F8
  c->lr=c->r[0]; // 801D15FC
  c->r[1]=c->r[1]+0x00000080u; // 801D1600
  return; // 801D1604
}

// USB_ERR
void f_801D1610(Ctx* __restrict c) {
  trace_call(0x801D1610u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D1610
  c->r[0]=c->lr; // 801D1614
  W32(c->r[1]+0x00000084u,c->r[0]); // 801D1618
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 801D161C
  c->r[31]=c->r[3]|c->r[3]; // 801D1620
  if (!crb(c,6)) { goto L_801D1648; } // 801D1624
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 801D1628
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 801D162C
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[3]);} // 801D1630
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[4]);} // 801D1634
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[5]);} // 801D1638
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[6]);} // 801D163C
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[7]);} // 801D1640
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[8]);} // 801D1644
L_801D1648:;
  c->r[0]=R8(c->r[13]+0xFFFFAB44u); // 801D1648
  W32(c->r[1]+0x00000008u,c->r[3]); // 801D164C
  cmps(c,0,(int32_t)c->r[0],0); // 801D1650
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801D1654
  W32(c->r[1]+0x00000010u,c->r[5]); // 801D1658
  W32(c->r[1]+0x00000014u,c->r[6]); // 801D165C
  W32(c->r[1]+0x00000018u,c->r[7]); // 801D1660
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 801D1664
  W32(c->r[1]+0x00000020u,c->r[9]); // 801D1668
  W32(c->r[1]+0x00000024u,c->r[10]); // 801D166C
  if (crb(c,2)) { goto L_801D16A8; } // 801D1670
  c->r[3]=0u+0x80280000u; // 801D1674
  c->r[3]=c->r[3]+0xFFFFC2E0u; // 801D1678
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D167C
  c->lr=0x801D1684u; f_801899B0(c); // 801D1680
  c->r[5]=c->r[1]+0x00000088u; // 801D1684
  c->r[0]=c->r[1]+0x00000008u; // 801D1688
  c->r[3]=0u+0x01000000u; // 801D168C
  W32(c->r[1]+0x00000068u,c->r[3]); // 801D1690
  c->r[4]=c->r[1]+0x00000068u; // 801D1694
  W32(c->r[1]+0x0000006Cu,c->r[5]); // 801D1698
  c->r[3]=c->r[31]|c->r[31]; // 801D169C
  W32(c->r[1]+0x00000070u,c->r[0]); // 801D16A0
  c->lr=0x801D16A8u; f_8020E2B4(c); // 801D16A4
L_801D16A8:;
  c->r[0]=R32(c->r[1]+0x00000084u); // 801D16A8
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 801D16AC
  c->lr=c->r[0]; // 801D16B0
  c->r[1]=c->r[1]+0x00000080u; // 801D16B4
  return; // 801D16B8
}

// IUSB_OpenLib
void f_801D16C0(Ctx* __restrict c) {
  trace_call(0x801D16C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D16C0
  c->r[0]=c->lr; // 801D16C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D16C8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D16CC
  c->r[31]=0u+0x80280000u; // 801D16D0
  c->r[31]=c->r[31]+0xFFFFC2E0u; // 801D16D4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D16D8
  c->r[30]=0u+0x00000000u; // 801D16DC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D16E0
  c->lr=0x801D16E8u; f_8018D6A0(c); // 801D16E4
  c->r[4]=R32(c->r[13]+0xFFFFAB40u); // 801D16E8
  c->r[29]=c->r[3]|c->r[3]; // 801D16EC
  cmps(c,0,(int32_t)c->r[4],-1); // 801D16F0
  if (crb(c,2)) { goto L_801D1708; } // 801D16F4
  c->r[3]=c->r[31]+0x0000000Cu; // 801D16F8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D16FC
  c->lr=0x801D1704u; f_801D1560(c); // 801D1700
  goto L_801D1790; // 801D1704
L_801D1708:;
  c->r[0]=R32(c->r[13]+0xFFFFB658u); // 801D1708
  cmps(c,0,(int32_t)c->r[0],0); // 801D170C
  if (!crb(c,2)) { goto L_801D1768; } // 801D1710
  c->lr=0x801D1718u; f_801BB240(c); // 801D1714
  W32(c->r[13]+0xFFFFB658u,c->r[3]); // 801D1718
  c->lr=0x801D1720u; f_801BB230(c); // 801D171C
  W32(c->r[13]+0xFFFFB65Cu,c->r[3]); // 801D1720
  c->r[6]=c->r[3]|c->r[3]; // 801D1724
  c->r[5]=R32(c->r[13]+0xFFFFB658u); // 801D1728
  c->r[3]=c->r[31]+0x0000003Cu; // 801D172C
  c->r[4]=0u+0x00000080u; // 801D1730
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D1734
  c->lr=0x801D173Cu; f_801D1560(c); // 801D1738
  c->r[3]=R32(c->r[13]+0xFFFFB658u); // 801D173C
  c->r[0]=R32(c->r[13]+0xFFFFB65Cu); // 801D1740
  c->r[3]=c->r[3]+0x00004000u; // 801D1744
  cmpu(c,0,c->r[3],c->r[0]); // 801D1748
  if (!crb(c,1)) { goto L_801D1764; } // 801D174C
  c->r[3]=c->r[31]+0x0000005Cu; // 801D1750
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D1754
  c->lr=0x801D175Cu; f_801D1610(c); // 801D1758
  c->r[30]=0u+0xFFFFFFEAu; // 801D175C
  goto L_801D1790; // 801D1760
L_801D1764:;
  c->lr=0x801D1768u; f_801BB250(c); // 801D1764
L_801D1768:;
  c->r[3]=R32(c->r[13]+0xFFFFB658u); // 801D1768
  c->r[4]=0u+0x00004000u; // 801D176C
  c->lr=0x801D1774u; f_801BCC50(c); // 801D1770
  cmps(c,0,(int32_t)c->r[3],0); // 801D1774
  W32(c->r[13]+0xFFFFAB40u,c->r[3]); // 801D1778
  if (!crb(c,0)) { goto L_801D1790; } // 801D177C
  c->r[3]=c->r[31]+0x00000074u; // 801D1780
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D1784
  c->lr=0x801D178Cu; f_801D1610(c); // 801D1788
  c->r[30]=0u+0xFFFFFFEAu; // 801D178C
L_801D1790:;
  c->r[3]=c->r[29]|c->r[29]; // 801D1790
  c->lr=0x801D1798u; f_8018D6E0(c); // 801D1794
  c->r[3]=c->r[30]|c->r[30]; // 801D1798
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D179C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D17A0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D17A4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D17A8
  c->lr=c->r[0]; // 801D17AC
  c->r[1]=c->r[1]+0x00000020u; // 801D17B0
  return; // 801D17B4
}

// IUSB_CloseLib
void f_801D17C0(Ctx* __restrict c) {
  trace_call(0x801D17C0u);
  c->r[3]=0u+0x00000000u; // 801D17C0
  return; // 801D17C4
}

// _intrBlkCtrlIsoCb
void f_801D17D0(Ctx* __restrict c) {
  trace_call(0x801D17D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D17D0
  c->r[0]=c->lr; // 801D17D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D17D8
  c->r[11]=c->r[1]+0x00000020u; // 801D17DC
  c->lr=0x801D17E4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D17E0
  c->r[31]=0u+0x80280000u; // 801D17E4
  c->r[26]=c->r[3]|c->r[3]; // 801D17E8
  c->r[31]=c->r[31]+0xFFFFC2E0u; // 801D17EC
  c->r[27]=c->r[4]|c->r[4]; // 801D17F0
  c->r[4]=c->r[26]|c->r[26]; // 801D17F4
  c->r[3]=c->r[31]+0x00000088u; // 801D17F8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D17FC
  c->lr=0x801D1804u; f_801D1560(c); // 801D1800
  c->r[4]=R32(c->r[27]+0x00000034u); // 801D1804
  c->r[3]=c->r[31]+0x000000A8u; // 801D1808
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D180C
  c->lr=0x801D1814u; f_801D1560(c); // 801D1810
  c->r[3]=R32(c->r[27]+0x00000034u); // 801D1814
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 801D1818
  cmpu(c,0,c->r[0],0x00000002u); // 801D181C
  if (!crb(c,1)) { goto L_801D1844; } // 801D1820
  cmpu(c,0,c->r[3],0x00000007u); // 801D1824
  if (crb(c,2)) { goto L_801D1844; } // 801D1828
  cmps(c,0,(int32_t)c->r[3],0); // 801D182C
  if (crb(c,2)) { goto L_801D1844; } // 801D1830
  c->r[3]=c->r[31]+0x000000C8u; // 801D1834
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D1838
  c->lr=0x801D1840u; f_801D1610(c); // 801D183C
  goto L_801D18B8; // 801D1840
L_801D1844:;
  c->r[29]=c->r[27]|c->r[27]; // 801D1844
  c->r[28]=0u+0x00000000u; // 801D1848
  goto L_801D18A4; // 801D184C
L_801D1850:;
  c->r[5]=R32(c->r[29]+0x00000014u); // 801D1850
  c->r[4]=c->r[28]|c->r[28]; // 801D1854
  c->r[3]=c->r[31]+0x000000F0u; // 801D1858
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D185C
  c->lr=0x801D1864u; f_801D1560(c); // 801D1860
  c->r[30]=R32(c->r[29]+0x00000014u); // 801D1864
  cmps(c,0,(int32_t)c->r[30],0); // 801D1868
  if (crb(c,2)) { goto L_801D189C; } // 801D186C
  c->r[3]=R32(c->r[13]+0xFFFFAB40u); // 801D1870
  c->r[4]=c->r[30]|c->r[30]; // 801D1874
  c->lr=0x801D187Cu; f_801BCF90(c); // 801D1878
  cmps(c,0,(int32_t)c->r[3],0); // 801D187C
  if (!crb(c,0)) { goto L_801D189C; } // 801D1880
  c->r[4]=R32(c->r[13]+0xFFFFAB40u); // 801D1884
  c->r[6]=c->r[3]|c->r[3]; // 801D1888
  c->r[5]=c->r[30]|c->r[30]; // 801D188C
  c->r[3]=c->r[31]+0x00000108u; // 801D1890
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D1894
  c->lr=0x801D189Cu; f_801D1610(c); // 801D1898
L_801D189C:;
  c->r[29]=c->r[29]+0x00000004u; // 801D189C
  c->r[28]=c->r[28]+0x00000001u; // 801D18A0
L_801D18A4:;
  c->r[0]=R32(c->r[27]+0x00000034u); // 801D18A4
  cmpu(c,0,c->r[28],c->r[0]); // 801D18A8
  if (crb(c,0)) { IRQCHK(c); goto L_801D1850; } // 801D18AC
  c->r[0]=0u+0x00000000u; // 801D18B0
  W32(c->r[27]+0x00000034u,c->r[0]); // 801D18B4
L_801D18B8:;
  c->r[4]=R32(c->r[27]+0x00000000u); // 801D18B8
  c->r[3]=c->r[31]+0x00000128u; // 801D18BC
  c->r[5]=R32(c->r[27]+0x00000008u); // 801D18C0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D18C4
  c->lr=0x801D18CCu; f_801D1560(c); // 801D18C8
  c->r[12]=R32(c->r[27]+0x00000000u); // 801D18CC
  cmps(c,0,(int32_t)c->r[12],0); // 801D18D0
  if (crb(c,2)) { goto L_801D18EC; } // 801D18D4
  c->r[3]=c->r[26]|c->r[26]; // 801D18D8
  c->r[4]=R32(c->r[27]+0x00000008u); // 801D18DC
  c->ctr=c->r[12]; // 801D18E0
  if (true) { c->lr=0x801D18E8u; dispatch(c,c->ctr); } // 801D18E4
  goto L_801D191C; // 801D18E8
L_801D18EC:;
  c->r[0]=R32(c->r[27]+0x00000004u); // 801D18EC
  cmps(c,0,(int32_t)c->r[0],0); // 801D18F0
  if (crb(c,2)) { goto L_801D191C; } // 801D18F4
  c->r[3]=c->r[31]+0x0000013Cu; // 801D18F8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D18FC
  c->lr=0x801D1904u; f_801D1560(c); // 801D1900
  c->r[12]=R32(c->r[27]+0x00000004u); // 801D1904
  c->r[3]=c->r[26]|c->r[26]; // 801D1908
  c->r[4]=R32(c->r[27]+0x0000000Cu); // 801D190C
  c->r[5]=R32(c->r[27]+0x00000008u); // 801D1910
  c->ctr=c->r[12]; // 801D1914
  if (true) { c->lr=0x801D191Cu; dispatch(c,c->ctr); } // 801D1918
L_801D191C:;
  cmps(c,0,(int32_t)c->r[27],0); // 801D191C
  if (crb(c,2)) { goto L_801D1950; } // 801D1920
  c->r[3]=R32(c->r[13]+0xFFFFAB40u); // 801D1924
  c->r[4]=c->r[27]|c->r[27]; // 801D1928
  c->lr=0x801D1930u; f_801BCF90(c); // 801D192C
  cmps(c,0,(int32_t)c->r[3],0); // 801D1930
  if (!crb(c,0)) { goto L_801D1950; } // 801D1934
  c->r[4]=R32(c->r[13]+0xFFFFAB40u); // 801D1938
  c->r[6]=c->r[3]|c->r[3]; // 801D193C
  c->r[5]=c->r[27]|c->r[27]; // 801D1940
  c->r[3]=c->r[31]+0x00000108u; // 801D1944
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D1948
  c->lr=0x801D1950u; f_801D1610(c); // 801D194C
L_801D1950:;
  c->r[11]=c->r[1]+0x00000020u; // 801D1950
  c->r[3]=c->r[26]|c->r[26]; // 801D1954
  c->lr=0x801D195Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D1958
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D195C
  c->lr=c->r[0]; // 801D1960
  c->r[1]=c->r[1]+0x00000020u; // 801D1964
  return; // 801D1968
}

// IUSB_OpenDeviceIds
void f_801D1970(Ctx* __restrict c) {
  trace_call(0x801D1970u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D1970
  c->r[0]=c->lr; // 801D1974
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D1978
  c->r[11]=c->r[1]+0x00000020u; // 801D197C
  c->lr=0x801D1984u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D1980
  cmps(c,0,(int32_t)c->r[6],0); // 801D1984
  c->r[31]=0u+0x80280000u; // 801D1988
  c->r[26]=c->r[3]|c->r[3]; // 801D198C
  c->r[27]=c->r[4]|c->r[4]; // 801D1990
  c->r[30]=c->r[5]|c->r[5]; // 801D1994
  c->r[28]=c->r[6]|c->r[6]; // 801D1998
  c->r[31]=c->r[31]+0xFFFFC2E0u; // 801D199C
  c->r[29]=0u+0x00000000u; // 801D19A0
  if (!crb(c,2)) { goto L_801D19B0; } // 801D19A4
  c->r[30]=0u+0xFFFFFFFCu; // 801D19A8
  goto L_801D1A64; // 801D19AC
L_801D19B0:;
  c->r[3]=R32(c->r[13]+0xFFFFAB40u); // 801D19B0
  c->r[4]=0u+0x00000080u; // 801D19B4
  c->r[5]=0u+0x00000020u; // 801D19B8
  c->lr=0x801D19C0u; f_801BCF80(c); // 801D19BC
  cmps(c,0,(int32_t)c->r[3],0); // 801D19C0
  c->r[29]=c->r[3]|c->r[3]; // 801D19C4
  if (!crb(c,2)) { goto L_801D19E4; } // 801D19C8
  c->r[4]=R32(c->r[13]+0xFFFFAB40u); // 801D19CC
  c->r[6]=c->r[29]|c->r[29]; // 801D19D0
  c->r[3]=c->r[31]+0x00000154u; // 801D19D4
  c->r[5]=0u+0x00000080u; // 801D19D8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D19DC
  c->lr=0x801D19E4u; f_801D1610(c); // 801D19E0
L_801D19E4:;
  cmps(c,0,(int32_t)c->r[29],0); // 801D19E4
  if (!crb(c,2)) { goto L_801D1A00; } // 801D19E8
  c->r[3]=c->r[31]+0x00000178u; // 801D19EC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D19F0
  c->lr=0x801D19F8u; f_801D1610(c); // 801D19F4
  c->r[30]=0u+0xFFFFFFEAu; // 801D19F8
  goto L_801D1A64; // 801D19FC
L_801D1A00:;
  c->r[3]=c->r[29]|c->r[29]; // 801D1A00
  c->r[4]=0u+0x00000000u; // 801D1A04
  c->r[5]=0u+0x00000080u; // 801D1A08
  c->lr=0x801D1A10u; f_800046B4(c); // 801D1A0C
  c->r[6]=c->r[26]|c->r[26]; // 801D1A10
  c->r[7]=c->r[27]|c->r[27]; // 801D1A14
  c->r[8]=c->r[30]|c->r[30]; // 801D1A18
  c->r[3]=c->r[29]+0x00000040u; // 801D1A1C
  c->r[5]=c->r[31]+0x0000019Cu; // 801D1A20
  c->r[4]=0u+0x00000040u; // 801D1A24
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D1A28
  c->lr=0x801D1A30u; f_8020E43C(c); // 801D1A2C
  c->r[3]=c->r[31]+0x000001B0u; // 801D1A30
  c->r[4]=c->r[29]+0x00000040u; // 801D1A34
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D1A38
  c->lr=0x801D1A40u; f_801D1560(c); // 801D1A3C
  c->r[3]=c->r[29]+0x00000040u; // 801D1A40
  c->r[4]=0u+0x00000000u; // 801D1A44
  c->lr=0x801D1A4Cu; f_801BBB40(c); // 801D1A48
  c->r[30]=c->r[3]|c->r[3]; // 801D1A4C
  c->r[3]=c->r[31]+0x000001C4u; // 801D1A50
  c->r[4]=c->r[30]|c->r[30]; // 801D1A54
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D1A58
  c->lr=0x801D1A60u; f_801D1560(c); // 801D1A5C
  W32(c->r[28]+0x00000000u,c->r[30]); // 801D1A60
L_801D1A64:;
  cmps(c,0,(int32_t)c->r[29],0); // 801D1A64
  if (crb(c,2)) { goto L_801D1A98; } // 801D1A68
  c->r[3]=R32(c->r[13]+0xFFFFAB40u); // 801D1A6C
  c->r[4]=c->r[29]|c->r[29]; // 801D1A70
  c->lr=0x801D1A78u; f_801BCF90(c); // 801D1A74
  cmps(c,0,(int32_t)c->r[3],0); // 801D1A78
  if (!crb(c,0)) { goto L_801D1A98; } // 801D1A7C
  c->r[4]=R32(c->r[13]+0xFFFFAB40u); // 801D1A80
  c->r[6]=c->r[3]|c->r[3]; // 801D1A84
  c->r[5]=c->r[29]|c->r[29]; // 801D1A88
  c->r[3]=c->r[31]+0x00000108u; // 801D1A8C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D1A90
  c->lr=0x801D1A98u; f_801D1610(c); // 801D1A94
L_801D1A98:;
  c->r[11]=c->r[1]+0x00000020u; // 801D1A98
  c->r[3]=c->r[30]|c->r[30]; // 801D1A9C
  c->lr=0x801D1AA4u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D1AA0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D1AA4
  c->lr=c->r[0]; // 801D1AA8
  c->r[1]=c->r[1]+0x00000020u; // 801D1AAC
  return; // 801D1AB0
}

// IUSB_CloseDeviceAsync
void f_801D1AC0(Ctx* __restrict c) {
  trace_call(0x801D1AC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D1AC0
  c->r[0]=c->lr; // 801D1AC4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D1AC8
  c->r[11]=c->r[1]+0x00000020u; // 801D1ACC
  c->lr=0x801D1AD4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D1AD0
  c->r[31]=0u+0x80280000u; // 801D1AD4
  c->r[27]=c->r[3]|c->r[3]; // 801D1AD8
  c->r[31]=c->r[31]+0xFFFFC2E0u; // 801D1ADC
  c->r[28]=c->r[4]|c->r[4]; // 801D1AE0
  c->r[29]=c->r[5]|c->r[5]; // 801D1AE4
  c->r[3]=c->r[31]+0x00000214u; // 801D1AE8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D1AEC
  c->lr=0x801D1AF4u; f_801D1560(c); // 801D1AF0
  c->r[3]=R32(c->r[13]+0xFFFFAB40u); // 801D1AF4
  c->r[4]=0u+0x00000080u; // 801D1AF8
  c->r[5]=0u+0x00000020u; // 801D1AFC
  c->lr=0x801D1B04u; f_801BCF80(c); // 801D1B00
  cmps(c,0,(int32_t)c->r[3],0); // 801D1B04
  c->r[30]=c->r[3]|c->r[3]; // 801D1B08
  if (!crb(c,2)) { goto L_801D1B28; } // 801D1B0C
  c->r[4]=R32(c->r[13]+0xFFFFAB40u); // 801D1B10
  c->r[6]=c->r[30]|c->r[30]; // 801D1B14
  c->r[3]=c->r[31]+0x00000154u; // 801D1B18
  c->r[5]=0u+0x00000080u; // 801D1B1C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D1B20
  c->lr=0x801D1B28u; f_801D1610(c); // 801D1B24
L_801D1B28:;
  cmps(c,0,(int32_t)c->r[30],0); // 801D1B28
  if (!crb(c,2)) { goto L_801D1B44; } // 801D1B2C
  c->r[3]=c->r[31]+0x00000240u; // 801D1B30
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D1B34
  c->lr=0x801D1B3Cu; f_801D1610(c); // 801D1B38
  c->r[29]=0u+0xFFFFFFEAu; // 801D1B3C
  goto L_801D1BC8; // 801D1B40
L_801D1B44:;
  c->r[3]=c->r[30]|c->r[30]; // 801D1B44
  c->r[4]=0u+0x00000000u; // 801D1B48
  c->r[5]=0u+0x00000080u; // 801D1B4C
  c->lr=0x801D1B54u; f_800046B4(c); // 801D1B50
  W32(c->r[30]+0x00000000u,c->r[28]); // 801D1B54
  c->r[4]=0u+0x801D0000u; // 801D1B58
  c->r[0]=0u+0x00000000u; // 801D1B5C
  c->r[3]=c->r[27]|c->r[27]; // 801D1B60
  W32(c->r[30]+0x00000008u,c->r[29]); // 801D1B64
  c->r[5]=c->r[30]|c->r[30]; // 801D1B68
  c->r[4]=c->r[4]+0x000017D0u; // 801D1B6C
  W32(c->r[30]+0x00000034u,c->r[0]); // 801D1B70
  c->lr=0x801D1B78u; f_801BBC70(c); // 801D1B74
  c->r[29]=c->r[3]|c->r[3]; // 801D1B78
  c->r[3]=c->r[31]+0x00000224u; // 801D1B7C
  c->r[4]=c->r[29]|c->r[29]; // 801D1B80
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D1B84
  c->lr=0x801D1B8Cu; f_801D1560(c); // 801D1B88
  cmps(c,0,(int32_t)c->r[29],0); // 801D1B8C
  if (!crb(c,0)) { goto L_801D1BC8; } // 801D1B90
  cmps(c,0,(int32_t)c->r[30],0); // 801D1B94
  if (crb(c,2)) { goto L_801D1BC8; } // 801D1B98
  c->r[3]=R32(c->r[13]+0xFFFFAB40u); // 801D1B9C
  c->r[4]=c->r[30]|c->r[30]; // 801D1BA0
  c->lr=0x801D1BA8u; f_801BCF90(c); // 801D1BA4
  cmps(c,0,(int32_t)c->r[3],0); // 801D1BA8
  if (!crb(c,0)) { goto L_801D1BC8; } // 801D1BAC
  c->r[4]=R32(c->r[13]+0xFFFFAB40u); // 801D1BB0
  c->r[6]=c->r[3]|c->r[3]; // 801D1BB4
  c->r[5]=c->r[30]|c->r[30]; // 801D1BB8
  c->r[3]=c->r[31]+0x00000108u; // 801D1BBC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D1BC0
  c->lr=0x801D1BC8u; f_801D1610(c); // 801D1BC4
L_801D1BC8:;
  c->r[11]=c->r[1]+0x00000020u; // 801D1BC8
  c->r[3]=c->r[29]|c->r[29]; // 801D1BCC
  c->lr=0x801D1BD4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D1BD0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D1BD4
  c->lr=c->r[0]; // 801D1BD8
  c->r[1]=c->r[1]+0x00000020u; // 801D1BDC
  return; // 801D1BE0
}

// __LongBlkMsgInt
void f_801D1BF0(Ctx* __restrict c) {
  trace_call(0x801D1BF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D1BF0
  c->r[0]=c->lr; // 801D1BF4
  W32(c->r[1]+0x00000044u,c->r[0]); // 801D1BF8
  c->r[11]=c->r[1]+0x00000040u; // 801D1BFC
  c->lr=0x801D1C04u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D1C00
  c->r[21]=c->r[3]|c->r[3]; // 801D1C04
  c->r[31]=0u+0x80280000u; // 801D1C08
  c->r[22]=c->r[4]|c->r[4]; // 801D1C0C
  c->r[23]=c->r[5]|c->r[5]; // 801D1C10
  c->r[3]=R32(c->r[13]+0xFFFFAB40u); // 801D1C14
  c->r[24]=c->r[6]|c->r[6]; // 801D1C18
  c->r[25]=c->r[7]|c->r[7]; // 801D1C1C
  c->r[30]=c->r[8]|c->r[8]; // 801D1C20
  c->r[26]=c->r[9]|c->r[9]; // 801D1C24
  c->r[31]=c->r[31]+0xFFFFC2E0u; // 801D1C28
  c->r[4]=0u+0x00000060u; // 801D1C2C
  c->r[5]=0u+0x00000020u; // 801D1C30
  c->lr=0x801D1C38u; f_801BCF80(c); // 801D1C34
  cmps(c,0,(int32_t)c->r[3],0); // 801D1C38
  c->r[29]=c->r[3]|c->r[3]; // 801D1C3C
  if (!crb(c,2)) { goto L_801D1C5C; } // 801D1C40
  c->r[4]=R32(c->r[13]+0xFFFFAB40u); // 801D1C44
  c->r[6]=c->r[29]|c->r[29]; // 801D1C48
  c->r[3]=c->r[31]+0x00000154u; // 801D1C4C
  c->r[5]=0u+0x00000060u; // 801D1C50
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D1C54
  c->lr=0x801D1C5Cu; f_801D1610(c); // 801D1C58
L_801D1C5C:;
  c->r[3]=R32(c->r[13]+0xFFFFAB40u); // 801D1C5C
  c->r[4]=0u+0x00000020u; // 801D1C60
  c->r[5]=0u+0x00000020u; // 801D1C64
  c->lr=0x801D1C6Cu; f_801BCF80(c); // 801D1C68
  cmps(c,0,(int32_t)c->r[3],0); // 801D1C6C
  c->r[28]=c->r[3]|c->r[3]; // 801D1C70
  if (!crb(c,2)) { goto L_801D1C90; } // 801D1C74
  c->r[4]=R32(c->r[13]+0xFFFFAB40u); // 801D1C78
  c->r[6]=c->r[28]|c->r[28]; // 801D1C7C
  c->r[3]=c->r[31]+0x00000154u; // 801D1C80
  c->r[5]=0u+0x00000020u; // 801D1C84
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D1C88
  c->lr=0x801D1C90u; f_801D1610(c); // 801D1C8C
L_801D1C90:;
  c->r[3]=R32(c->r[13]+0xFFFFAB40u); // 801D1C90
  c->r[4]=0u+0x00000020u; // 801D1C94
  c->r[5]=0u+0x00000020u; // 801D1C98
  c->lr=0x801D1CA0u; f_801BCF80(c); // 801D1C9C
  cmps(c,0,(int32_t)c->r[3],0); // 801D1CA0
  c->r[27]=c->r[3]|c->r[3]; // 801D1CA4
  if (!crb(c,2)) { goto L_801D1CC4; } // 801D1CA8
  c->r[4]=R32(c->r[13]+0xFFFFAB40u); // 801D1CAC
  c->r[6]=c->r[27]|c->r[27]; // 801D1CB0
  c->r[3]=c->r[31]+0x00000154u; // 801D1CB4
  c->r[5]=0u+0x00000020u; // 801D1CB8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D1CBC
  c->lr=0x801D1CC4u; f_801D1610(c); // 801D1CC0
L_801D1CC4:;
  cmps(c,0,(int32_t)c->r[29],0); // 801D1CC4
  if (crb(c,2)) { goto L_801D1CDC; } // 801D1CC8
  cmps(c,0,(int32_t)c->r[28],0); // 801D1CCC
  if (crb(c,2)) { goto L_801D1CDC; } // 801D1CD0
  cmps(c,0,(int32_t)c->r[27],0); // 801D1CD4
  if (!crb(c,2)) { goto L_801D1CF0; } // 801D1CD8
L_801D1CDC:;
  c->r[3]=c->r[31]+0x000002C0u; // 801D1CDC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D1CE0
  c->lr=0x801D1CE8u; f_801D1610(c); // 801D1CE4
  c->r[30]=0u+0xFFFFFFEAu; // 801D1CE8
  goto L_801D1E8C; // 801D1CEC
L_801D1CF0:;
  W8(c->r[28]+0x00000000u,c->r[22]); // 801D1CF0
  c->r[5]=0u+0x00000001u; // 801D1CF4
  c->r[0]=0u+0x00000004u; // 801D1CF8
  c->r[3]=c->r[28]|c->r[28]; // 801D1CFC
  W32(c->r[27]+0x00000000u,c->r[23]); // 801D1D00
  c->r[4]=0u+0x00000020u; // 801D1D04
  W32(c->r[29]+0x00000000u,c->r[28]); // 801D1D08
  W32(c->r[29]+0x00000004u,c->r[5]); // 801D1D0C
  W32(c->r[29]+0x00000008u,c->r[27]); // 801D1D10
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 801D1D14
  W32(c->r[29]+0x00000010u,c->r[24]); // 801D1D18
  W32(c->r[29]+0x00000014u,c->r[23]); // 801D1D1C
  c->lr=0x801D1D24u; f_80188CE0(c); // 801D1D20
  c->r[3]=c->r[27]|c->r[27]; // 801D1D24
  c->r[4]=0u+0x00000020u; // 801D1D28
  c->lr=0x801D1D30u; f_80188CE0(c); // 801D1D2C
  c->r[3]=c->r[29]|c->r[29]; // 801D1D30
  c->r[4]=0u+0x00000060u; // 801D1D34
  c->lr=0x801D1D3Cu; f_80188CE0(c); // 801D1D38
  cmps(c,0,(int32_t)c->r[26],0); // 801D1D3C
  if (!crb(c,2)) { goto L_801D1D74; } // 801D1D40
  c->r[3]=c->r[21]|c->r[21]; // 801D1D44
  c->r[7]=c->r[29]|c->r[29]; // 801D1D48
  c->r[4]=0u+0x0000000Au; // 801D1D4C
  c->r[5]=0u+0x00000002u; // 801D1D50
  c->r[6]=0u+0x00000001u; // 801D1D54
  c->lr=0x801D1D5Cu; f_801BC870(c); // 801D1D58
  c->r[30]=c->r[3]|c->r[3]; // 801D1D5C
  c->r[3]=c->r[31]+0x000002E4u; // 801D1D60
  c->r[4]=c->r[30]|c->r[30]; // 801D1D64
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D1D68
  c->lr=0x801D1D70u; f_801D1560(c); // 801D1D6C
  goto L_801D1E8C; // 801D1D70
L_801D1D74:;
  c->r[3]=R32(c->r[13]+0xFFFFAB40u); // 801D1D74
  c->r[4]=0u+0x00000080u; // 801D1D78
  c->r[5]=0u+0x00000020u; // 801D1D7C
  c->lr=0x801D1D84u; f_801BCF80(c); // 801D1D80
  cmps(c,0,(int32_t)c->r[3],0); // 801D1D84
  c->r[26]=c->r[3]|c->r[3]; // 801D1D88
  if (!crb(c,2)) { goto L_801D1DA8; } // 801D1D8C
  c->r[4]=R32(c->r[13]+0xFFFFAB40u); // 801D1D90
  c->r[6]=c->r[26]|c->r[26]; // 801D1D94
  c->r[3]=c->r[31]+0x00000154u; // 801D1D98
  c->r[5]=0u+0x00000080u; // 801D1D9C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D1DA0
  c->lr=0x801D1DA8u; f_801D1610(c); // 801D1DA4
L_801D1DA8:;
  cmps(c,0,(int32_t)c->r[26],0); // 801D1DA8
  if (!crb(c,2)) { goto L_801D1DC4; } // 801D1DAC
  c->r[3]=c->r[31]+0x00000304u; // 801D1DB0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D1DB4
  c->lr=0x801D1DBCu; f_801D1610(c); // 801D1DB8
  c->r[30]=0u+0xFFFFFFEAu; // 801D1DBC
  goto L_801D1E8C; // 801D1DC0
L_801D1DC4:;
  c->r[3]=c->r[26]|c->r[26]; // 801D1DC4
  c->r[4]=0u+0x00000000u; // 801D1DC8
  c->r[5]=0u+0x00000080u; // 801D1DCC
  c->lr=0x801D1DD4u; f_800046B4(c); // 801D1DD0
  W32(c->r[26]+0x00000000u,c->r[25]); // 801D1DD4
  c->r[4]=c->r[25]|c->r[25]; // 801D1DD8
  c->r[5]=c->r[30]|c->r[30]; // 801D1DDC
  c->r[3]=c->r[31]+0x00000330u; // 801D1DE0
  W32(c->r[26]+0x00000008u,c->r[30]); // 801D1DE4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D1DE8
  c->lr=0x801D1DF0u; f_801D1560(c); // 801D1DEC
  c->r[0]=0u+0x00000003u; // 801D1DF0
  W32(c->r[26]+0x00000034u,c->r[0]); // 801D1DF4
  c->r[8]=0u+0x801D0000u; // 801D1DF8
  c->r[3]=c->r[21]|c->r[21]; // 801D1DFC
  W32(c->r[26]+0x00000014u,c->r[28]); // 801D1E00
  c->r[7]=c->r[29]|c->r[29]; // 801D1E04
  c->r[9]=c->r[26]|c->r[26]; // 801D1E08
  c->r[8]=c->r[8]+0x000017D0u; // 801D1E0C
  W32(c->r[26]+0x00000018u,c->r[27]); // 801D1E10
  c->r[4]=0u+0x0000000Au; // 801D1E14
  c->r[5]=0u+0x00000002u; // 801D1E18
  c->r[6]=0u+0x00000001u; // 801D1E1C
  W32(c->r[26]+0x0000001Cu,c->r[29]); // 801D1E20
  W32(c->r[26]+0x00000040u,c->r[24]); // 801D1E24
  W16(c->r[26]+0x00000044u,c->r[23]); // 801D1E28
  c->lr=0x801D1E30u; f_801BC780(c); // 801D1E2C
  cmps(c,0,(int32_t)c->r[3],0); // 801D1E30
  c->r[30]=c->r[3]|c->r[3]; // 801D1E34
  if (!crb(c,0)) { goto L_801D1F28; } // 801D1E38
  cmps(c,0,(int32_t)c->r[3],-22); // 801D1E3C
  if (!crb(c,2)) { goto L_801D1E58; } // 801D1E40
  c->r[5]=c->r[30]|c->r[30]; // 801D1E44
  c->r[3]=c->r[31]+0x00000354u; // 801D1E48
  c->r[4]=c->r[31]+0x000002B0u; // 801D1E4C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D1E50
  c->lr=0x801D1E58u; f_801899B0(c); // 801D1E54
L_801D1E58:;
  cmps(c,0,(int32_t)c->r[26],0); // 801D1E58
  if (crb(c,2)) { goto L_801D1E8C; } // 801D1E5C
  c->r[3]=R32(c->r[13]+0xFFFFAB40u); // 801D1E60
  c->r[4]=c->r[26]|c->r[26]; // 801D1E64
  c->lr=0x801D1E6Cu; f_801BCF90(c); // 801D1E68
  cmps(c,0,(int32_t)c->r[3],0); // 801D1E6C
  if (!crb(c,0)) { goto L_801D1E8C; } // 801D1E70
  c->r[4]=R32(c->r[13]+0xFFFFAB40u); // 801D1E74
  c->r[6]=c->r[3]|c->r[3]; // 801D1E78
  c->r[5]=c->r[26]|c->r[26]; // 801D1E7C
  c->r[3]=c->r[31]+0x00000108u; // 801D1E80
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D1E84
  c->lr=0x801D1E8Cu; f_801D1610(c); // 801D1E88
L_801D1E8C:;
  cmps(c,0,(int32_t)c->r[28],0); // 801D1E8C
  if (crb(c,2)) { goto L_801D1EC0; } // 801D1E90
  c->r[3]=R32(c->r[13]+0xFFFFAB40u); // 801D1E94
  c->r[4]=c->r[28]|c->r[28]; // 801D1E98
  c->lr=0x801D1EA0u; f_801BCF90(c); // 801D1E9C
  cmps(c,0,(int32_t)c->r[3],0); // 801D1EA0
  if (!crb(c,0)) { goto L_801D1EC0; } // 801D1EA4
  c->r[4]=R32(c->r[13]+0xFFFFAB40u); // 801D1EA8
  c->r[6]=c->r[3]|c->r[3]; // 801D1EAC
  c->r[5]=c->r[28]|c->r[28]; // 801D1EB0
  c->r[3]=c->r[31]+0x00000108u; // 801D1EB4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D1EB8
  c->lr=0x801D1EC0u; f_801D1610(c); // 801D1EBC
L_801D1EC0:;
  cmps(c,0,(int32_t)c->r[27],0); // 801D1EC0
  if (crb(c,2)) { goto L_801D1EF4; } // 801D1EC4
  c->r[3]=R32(c->r[13]+0xFFFFAB40u); // 801D1EC8
  c->r[4]=c->r[27]|c->r[27]; // 801D1ECC
  c->lr=0x801D1ED4u; f_801BCF90(c); // 801D1ED0
  cmps(c,0,(int32_t)c->r[3],0); // 801D1ED4
  if (!crb(c,0)) { goto L_801D1EF4; } // 801D1ED8
  c->r[4]=R32(c->r[13]+0xFFFFAB40u); // 801D1EDC
  c->r[6]=c->r[3]|c->r[3]; // 801D1EE0
  c->r[5]=c->r[27]|c->r[27]; // 801D1EE4
  c->r[3]=c->r[31]+0x00000108u; // 801D1EE8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D1EEC
  c->lr=0x801D1EF4u; f_801D1610(c); // 801D1EF0
L_801D1EF4:;
  cmps(c,0,(int32_t)c->r[29],0); // 801D1EF4
  if (crb(c,2)) { goto L_801D1F28; } // 801D1EF8
  c->r[3]=R32(c->r[13]+0xFFFFAB40u); // 801D1EFC
  c->r[4]=c->r[29]|c->r[29]; // 801D1F00
  c->lr=0x801D1F08u; f_801BCF90(c); // 801D1F04
  cmps(c,0,(int32_t)c->r[3],0); // 801D1F08
  if (!crb(c,0)) { goto L_801D1F28; } // 801D1F0C
  c->r[4]=R32(c->r[13]+0xFFFFAB40u); // 801D1F10
  c->r[6]=c->r[3]|c->r[3]; // 801D1F14
  c->r[5]=c->r[29]|c->r[29]; // 801D1F18
  c->r[3]=c->r[31]+0x00000108u; // 801D1F1C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D1F20
  c->lr=0x801D1F28u; f_801D1610(c); // 801D1F24
L_801D1F28:;
  c->r[11]=c->r[1]+0x00000040u; // 801D1F28
  c->r[3]=c->r[30]|c->r[30]; // 801D1F2C
  c->lr=0x801D1F34u; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D1F30
  c->r[0]=R32(c->r[1]+0x00000044u); // 801D1F34
  c->lr=c->r[0]; // 801D1F38
  c->r[1]=c->r[1]+0x00000040u; // 801D1F3C
  return; // 801D1F40
}

// __IntrBlkMsgInt
void f_801D1F50(Ctx* __restrict c) {
  trace_call(0x801D1F50u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D1F50
  c->r[0]=c->lr; // 801D1F54
  W32(c->r[1]+0x00000044u,c->r[0]); // 801D1F58
  c->r[11]=c->r[1]+0x00000040u; // 801D1F5C
  c->lr=0x801D1F64u; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D1F60
  c->r[20]=c->r[3]|c->r[3]; // 801D1F64
  c->r[31]=0u+0x80280000u; // 801D1F68
  c->r[21]=c->r[4]|c->r[4]; // 801D1F6C
  c->r[22]=c->r[5]|c->r[5]; // 801D1F70
  c->r[3]=R32(c->r[13]+0xFFFFAB40u); // 801D1F74
  c->r[23]=c->r[6]|c->r[6]; // 801D1F78
  c->r[24]=c->r[7]|c->r[7]; // 801D1F7C
  c->r[25]=c->r[8]|c->r[8]; // 801D1F80
  c->r[30]=c->r[9]|c->r[9]; // 801D1F84
  c->r[26]=c->r[10]|c->r[10]; // 801D1F88
  c->r[31]=c->r[31]+0xFFFFC2E0u; // 801D1F8C
  c->r[4]=0u+0x00000060u; // 801D1F90
  c->r[5]=0u+0x00000020u; // 801D1F94
  c->lr=0x801D1F9Cu; f_801BCF80(c); // 801D1F98
  cmps(c,0,(int32_t)c->r[3],0); // 801D1F9C
  c->r[29]=c->r[3]|c->r[3]; // 801D1FA0
  if (!crb(c,2)) { goto L_801D1FC0; } // 801D1FA4
  c->r[4]=R32(c->r[13]+0xFFFFAB40u); // 801D1FA8
  c->r[6]=c->r[29]|c->r[29]; // 801D1FAC
  c->r[3]=c->r[31]+0x00000154u; // 801D1FB0
  c->r[5]=0u+0x00000060u; // 801D1FB4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D1FB8
  c->lr=0x801D1FC0u; f_801D1610(c); // 801D1FBC
L_801D1FC0:;
  c->r[3]=R32(c->r[13]+0xFFFFAB40u); // 801D1FC0
  c->r[4]=0u+0x00000020u; // 801D1FC4
  c->r[5]=0u+0x00000020u; // 801D1FC8
  c->lr=0x801D1FD0u; f_801BCF80(c); // 801D1FCC
  cmps(c,0,(int32_t)c->r[3],0); // 801D1FD0
  c->r[28]=c->r[3]|c->r[3]; // 801D1FD4
  if (!crb(c,2)) { goto L_801D1FF4; } // 801D1FD8
  c->r[4]=R32(c->r[13]+0xFFFFAB40u); // 801D1FDC
  c->r[6]=c->r[28]|c->r[28]; // 801D1FE0
  c->r[3]=c->r[31]+0x00000154u; // 801D1FE4
  c->r[5]=0u+0x00000020u; // 801D1FE8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D1FEC
  c->lr=0x801D1FF4u; f_801D1610(c); // 801D1FF0
L_801D1FF4:;
  c->r[3]=R32(c->r[13]+0xFFFFAB40u); // 801D1FF4
  c->r[4]=0u+0x00000020u; // 801D1FF8
  c->r[5]=0u+0x00000020u; // 801D1FFC
  c->lr=0x801D2004u; f_801BCF80(c); // 801D2000
  cmps(c,0,(int32_t)c->r[3],0); // 801D2004
  c->r[27]=c->r[3]|c->r[3]; // 801D2008
  if (!crb(c,2)) { goto L_801D2028; } // 801D200C
  c->r[4]=R32(c->r[13]+0xFFFFAB40u); // 801D2010
  c->r[6]=c->r[27]|c->r[27]; // 801D2014
  c->r[3]=c->r[31]+0x00000154u; // 801D2018
  c->r[5]=0u+0x00000020u; // 801D201C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D2020
  c->lr=0x801D2028u; f_801D1610(c); // 801D2024
L_801D2028:;
  cmps(c,0,(int32_t)c->r[29],0); // 801D2028
  if (crb(c,2)) { goto L_801D2040; } // 801D202C
  cmps(c,0,(int32_t)c->r[28],0); // 801D2030
  if (crb(c,2)) { goto L_801D2040; } // 801D2034
  cmps(c,0,(int32_t)c->r[27],0); // 801D2038
  if (!crb(c,2)) { goto L_801D2054; } // 801D203C
L_801D2040:;
  c->r[3]=c->r[31]+0x00000388u; // 801D2040
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D2044
  c->lr=0x801D204Cu; f_801D1610(c); // 801D2048
  c->r[30]=0u+0xFFFFFFEAu; // 801D204C
  goto L_801D21F0; // 801D2050
L_801D2054:;
  W8(c->r[28]+0x00000000u,c->r[21]); // 801D2054
  c->r[5]=0u+0x00000001u; // 801D2058
  c->r[0]=0u+0x00000002u; // 801D205C
  c->r[3]=c->r[28]|c->r[28]; // 801D2060
  W16(c->r[27]+0x00000000u,c->r[22]); // 801D2064
  c->r[4]=0u+0x00000020u; // 801D2068
  W32(c->r[29]+0x00000000u,c->r[28]); // 801D206C
  W32(c->r[29]+0x00000004u,c->r[5]); // 801D2070
  W32(c->r[29]+0x00000008u,c->r[27]); // 801D2074
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 801D2078
  W32(c->r[29]+0x00000010u,c->r[23]); // 801D207C
  W32(c->r[29]+0x00000014u,c->r[22]); // 801D2080
  c->lr=0x801D2088u; f_80188CE0(c); // 801D2084
  c->r[3]=c->r[27]|c->r[27]; // 801D2088
  c->r[4]=0u+0x00000020u; // 801D208C
  c->lr=0x801D2094u; f_80188CE0(c); // 801D2090
  c->r[3]=c->r[29]|c->r[29]; // 801D2094
  c->r[4]=0u+0x00000060u; // 801D2098
  c->lr=0x801D20A0u; f_80188CE0(c); // 801D209C
  cmps(c,0,(int32_t)c->r[26],0); // 801D20A0
  if (!crb(c,2)) { goto L_801D20D8; } // 801D20A4
  c->r[3]=c->r[20]|c->r[20]; // 801D20A8
  c->r[4]=c->r[24]|c->r[24]; // 801D20AC
  c->r[7]=c->r[29]|c->r[29]; // 801D20B0
  c->r[5]=0u+0x00000002u; // 801D20B4
  c->r[6]=0u+0x00000001u; // 801D20B8
  c->lr=0x801D20C0u; f_801BC870(c); // 801D20BC
  c->r[30]=c->r[3]|c->r[3]; // 801D20C0
  c->r[3]=c->r[31]+0x000003ACu; // 801D20C4
  c->r[4]=c->r[30]|c->r[30]; // 801D20C8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D20CC
  c->lr=0x801D20D4u; f_801D1560(c); // 801D20D0
  goto L_801D21F0; // 801D20D4
L_801D20D8:;
  c->r[3]=R32(c->r[13]+0xFFFFAB40u); // 801D20D8
  c->r[4]=0u+0x00000080u; // 801D20DC
  c->r[5]=0u+0x00000020u; // 801D20E0
  c->lr=0x801D20E8u; f_801BCF80(c); // 801D20E4
  cmps(c,0,(int32_t)c->r[3],0); // 801D20E8
  c->r[26]=c->r[3]|c->r[3]; // 801D20EC
  if (!crb(c,2)) { goto L_801D210C; } // 801D20F0
  c->r[4]=R32(c->r[13]+0xFFFFAB40u); // 801D20F4
  c->r[6]=c->r[26]|c->r[26]; // 801D20F8
  c->r[3]=c->r[31]+0x00000154u; // 801D20FC
  c->r[5]=0u+0x00000080u; // 801D2100
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D2104
  c->lr=0x801D210Cu; f_801D1610(c); // 801D2108
L_801D210C:;
  cmps(c,0,(int32_t)c->r[26],0); // 801D210C
  if (!crb(c,2)) { goto L_801D2128; } // 801D2110
  c->r[3]=c->r[31]+0x000003CCu; // 801D2114
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D2118
  c->lr=0x801D2120u; f_801D1610(c); // 801D211C
  c->r[30]=0u+0xFFFFFFEAu; // 801D2120
  goto L_801D21F0; // 801D2124
L_801D2128:;
  c->r[3]=c->r[26]|c->r[26]; // 801D2128
  c->r[4]=0u+0x00000000u; // 801D212C
  c->r[5]=0u+0x00000080u; // 801D2130
  c->lr=0x801D2138u; f_800046B4(c); // 801D2134
  W32(c->r[26]+0x00000000u,c->r[25]); // 801D2138
  c->r[4]=c->r[25]|c->r[25]; // 801D213C
  c->r[5]=c->r[30]|c->r[30]; // 801D2140
  c->r[3]=c->r[31]+0x000003F8u; // 801D2144
  W32(c->r[26]+0x00000008u,c->r[30]); // 801D2148
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D214C
  c->lr=0x801D2154u; f_801D1560(c); // 801D2150
  c->r[0]=0u+0x00000003u; // 801D2154
  W32(c->r[26]+0x00000034u,c->r[0]); // 801D2158
  c->r[8]=0u+0x801D0000u; // 801D215C
  c->r[3]=c->r[20]|c->r[20]; // 801D2160
  W32(c->r[26]+0x00000014u,c->r[28]); // 801D2164
  c->r[4]=c->r[24]|c->r[24]; // 801D2168
  c->r[7]=c->r[29]|c->r[29]; // 801D216C
  c->r[9]=c->r[26]|c->r[26]; // 801D2170
  W32(c->r[26]+0x00000018u,c->r[27]); // 801D2174
  c->r[8]=c->r[8]+0x000017D0u; // 801D2178
  c->r[5]=0u+0x00000002u; // 801D217C
  c->r[6]=0u+0x00000001u; // 801D2180
  W32(c->r[26]+0x0000001Cu,c->r[29]); // 801D2184
  W32(c->r[26]+0x00000040u,c->r[23]); // 801D2188
  W16(c->r[26]+0x00000044u,c->r[22]); // 801D218C
  c->lr=0x801D2194u; f_801BC780(c); // 801D2190
  cmps(c,0,(int32_t)c->r[3],0); // 801D2194
  c->r[30]=c->r[3]|c->r[3]; // 801D2198
  if (!crb(c,0)) { goto L_801D228C; } // 801D219C
  cmps(c,0,(int32_t)c->r[3],-22); // 801D21A0
  if (!crb(c,2)) { goto L_801D21BC; } // 801D21A4
  c->r[5]=c->r[30]|c->r[30]; // 801D21A8
  c->r[3]=c->r[31]+0x00000354u; // 801D21AC
  c->r[4]=c->r[31]+0x00000378u; // 801D21B0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D21B4
  c->lr=0x801D21BCu; f_801899B0(c); // 801D21B8
L_801D21BC:;
  cmps(c,0,(int32_t)c->r[26],0); // 801D21BC
  if (crb(c,2)) { goto L_801D21F0; } // 801D21C0
  c->r[3]=R32(c->r[13]+0xFFFFAB40u); // 801D21C4
  c->r[4]=c->r[26]|c->r[26]; // 801D21C8
  c->lr=0x801D21D0u; f_801BCF90(c); // 801D21CC
  cmps(c,0,(int32_t)c->r[3],0); // 801D21D0
  if (!crb(c,0)) { goto L_801D21F0; } // 801D21D4
  c->r[4]=R32(c->r[13]+0xFFFFAB40u); // 801D21D8
  c->r[6]=c->r[3]|c->r[3]; // 801D21DC
  c->r[5]=c->r[26]|c->r[26]; // 801D21E0
  c->r[3]=c->r[31]+0x00000108u; // 801D21E4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D21E8
  c->lr=0x801D21F0u; f_801D1610(c); // 801D21EC
L_801D21F0:;
  cmps(c,0,(int32_t)c->r[28],0); // 801D21F0
  if (crb(c,2)) { goto L_801D2224; } // 801D21F4
  c->r[3]=R32(c->r[13]+0xFFFFAB40u); // 801D21F8
  c->r[4]=c->r[28]|c->r[28]; // 801D21FC
  c->lr=0x801D2204u; f_801BCF90(c); // 801D2200
  cmps(c,0,(int32_t)c->r[3],0); // 801D2204
  if (!crb(c,0)) { goto L_801D2224; } // 801D2208
  c->r[4]=R32(c->r[13]+0xFFFFAB40u); // 801D220C
  c->r[6]=c->r[3]|c->r[3]; // 801D2210
  c->r[5]=c->r[28]|c->r[28]; // 801D2214
  c->r[3]=c->r[31]+0x00000108u; // 801D2218
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D221C
  c->lr=0x801D2224u; f_801D1610(c); // 801D2220
L_801D2224:;
  cmps(c,0,(int32_t)c->r[27],0); // 801D2224
  if (crb(c,2)) { goto L_801D2258; } // 801D2228
  c->r[3]=R32(c->r[13]+0xFFFFAB40u); // 801D222C
  c->r[4]=c->r[27]|c->r[27]; // 801D2230
  c->lr=0x801D2238u; f_801BCF90(c); // 801D2234
  cmps(c,0,(int32_t)c->r[3],0); // 801D2238
  if (!crb(c,0)) { goto L_801D2258; } // 801D223C
  c->r[4]=R32(c->r[13]+0xFFFFAB40u); // 801D2240
  c->r[6]=c->r[3]|c->r[3]; // 801D2244
  c->r[5]=c->r[27]|c->r[27]; // 801D2248
  c->r[3]=c->r[31]+0x00000108u; // 801D224C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D2250
  c->lr=0x801D2258u; f_801D1610(c); // 801D2254
L_801D2258:;
  cmps(c,0,(int32_t)c->r[29],0); // 801D2258
  if (crb(c,2)) { goto L_801D228C; } // 801D225C
  c->r[3]=R32(c->r[13]+0xFFFFAB40u); // 801D2260
  c->r[4]=c->r[29]|c->r[29]; // 801D2264
  c->lr=0x801D226Cu; f_801BCF90(c); // 801D2268
  cmps(c,0,(int32_t)c->r[3],0); // 801D226C
  if (!crb(c,0)) { goto L_801D228C; } // 801D2270
  c->r[4]=R32(c->r[13]+0xFFFFAB40u); // 801D2274
  c->r[6]=c->r[3]|c->r[3]; // 801D2278
  c->r[5]=c->r[29]|c->r[29]; // 801D227C
  c->r[3]=c->r[31]+0x00000108u; // 801D2280
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D2284
  c->lr=0x801D228Cu; f_801D1610(c); // 801D2288
L_801D228C:;
  c->r[11]=c->r[1]+0x00000040u; // 801D228C
  c->r[3]=c->r[30]|c->r[30]; // 801D2290
  c->lr=0x801D2298u; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D2294
  c->r[0]=R32(c->r[1]+0x00000044u); // 801D2298
  c->lr=c->r[0]; // 801D229C
  c->r[1]=c->r[1]+0x00000040u; // 801D22A0
  return; // 801D22A4
}

// IUSB_ReadIntrMsgAsync
void f_801D22B0(Ctx* __restrict c) {
  trace_call(0x801D22B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D22B0
  c->r[0]=c->lr; // 801D22B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D22B8
  c->r[11]=c->r[1]+0x00000020u; // 801D22BC
  c->lr=0x801D22C4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D22C0
  c->r[28]=c->r[5]|c->r[5]; // 801D22C4
  c->r[29]=c->r[6]|c->r[6]; // 801D22C8
  c->r[26]=c->r[3]|c->r[3]; // 801D22CC
  c->r[27]=c->r[4]|c->r[4]; // 801D22D0
  c->r[30]=c->r[7]|c->r[7]; // 801D22D4
  c->r[31]=c->r[8]|c->r[8]; // 801D22D8
  c->r[3]=c->r[29]|c->r[29]; // 801D22DC
  c->r[4]=c->r[28]|c->r[28]; // 801D22E0
  c->lr=0x801D22E8u; f_80188CB0(c); // 801D22E4
  c->r[3]=c->r[26]|c->r[26]; // 801D22E8
  c->r[4]=c->r[27]|c->r[27]; // 801D22EC
  c->r[5]=c->r[28]|c->r[28]; // 801D22F0
  c->r[6]=c->r[29]|c->r[29]; // 801D22F4
  c->r[8]=c->r[30]|c->r[30]; // 801D22F8
  c->r[9]=c->r[31]|c->r[31]; // 801D22FC
  c->r[7]=0u+0x00000002u; // 801D2300
  c->r[10]=0u+0x00000001u; // 801D2304
  c->lr=0x801D230Cu; f_801D1F50(c); // 801D2308
  c->r[11]=c->r[1]+0x00000020u; // 801D230C
  c->lr=0x801D2314u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D2310
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D2314
  c->lr=c->r[0]; // 801D2318
  c->r[1]=c->r[1]+0x00000020u; // 801D231C
  return; // 801D2320
}

// IUSB_ReadBlkMsgAsync
void f_801D2330(Ctx* __restrict c) {
  trace_call(0x801D2330u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D2330
  c->r[0]=c->lr; // 801D2334
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D2338
  c->r[11]=c->r[1]+0x00000020u; // 801D233C
  c->lr=0x801D2344u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D2340
  c->r[28]=c->r[5]|c->r[5]; // 801D2344
  c->r[29]=c->r[6]|c->r[6]; // 801D2348
  c->r[26]=c->r[3]|c->r[3]; // 801D234C
  c->r[27]=c->r[4]|c->r[4]; // 801D2350
  c->r[30]=c->r[7]|c->r[7]; // 801D2354
  c->r[31]=c->r[8]|c->r[8]; // 801D2358
  c->r[3]=c->r[29]|c->r[29]; // 801D235C
  c->r[4]=c->r[28]|c->r[28]; // 801D2360
  c->lr=0x801D2368u; f_80188CB0(c); // 801D2364
  cmpu(c,0,c->r[28],0x0000FFFFu); // 801D2368
  if (crb(c,1)) { goto L_801D2398; } // 801D236C
  c->r[3]=c->r[26]|c->r[26]; // 801D2370
  c->r[4]=c->r[27]|c->r[27]; // 801D2374
  c->r[5]=c->r[28]|c->r[28]; // 801D2378
  c->r[6]=c->r[29]|c->r[29]; // 801D237C
  c->r[8]=c->r[30]|c->r[30]; // 801D2380
  c->r[9]=c->r[31]|c->r[31]; // 801D2384
  c->r[7]=0u+0x00000001u; // 801D2388
  c->r[10]=0u+0x00000001u; // 801D238C
  c->lr=0x801D2394u; f_801D1F50(c); // 801D2390
  goto L_801D23B8; // 801D2394
L_801D2398:;
  c->r[3]=c->r[26]|c->r[26]; // 801D2398
  c->r[4]=c->r[27]|c->r[27]; // 801D239C
  c->r[5]=c->r[28]|c->r[28]; // 801D23A0
  c->r[6]=c->r[29]|c->r[29]; // 801D23A4
  c->r[7]=c->r[30]|c->r[30]; // 801D23A8
  c->r[8]=c->r[31]|c->r[31]; // 801D23AC
  c->r[9]=0u+0x00000001u; // 801D23B0
  c->lr=0x801D23B8u; f_801D1BF0(c); // 801D23B4
L_801D23B8:;
  c->r[11]=c->r[1]+0x00000020u; // 801D23B8
  c->lr=0x801D23C0u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D23BC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D23C0
  c->lr=c->r[0]; // 801D23C4
  c->r[1]=c->r[1]+0x00000020u; // 801D23C8
  return; // 801D23CC
}

// IUSB_WriteBlkMsgAsync
void f_801D23D0(Ctx* __restrict c) {
  trace_call(0x801D23D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D23D0
  c->r[0]=c->lr; // 801D23D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D23D8
  c->r[11]=c->r[1]+0x00000020u; // 801D23DC
  c->lr=0x801D23E4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D23E0
  c->r[28]=c->r[5]|c->r[5]; // 801D23E4
  c->r[29]=c->r[6]|c->r[6]; // 801D23E8
  c->r[26]=c->r[3]|c->r[3]; // 801D23EC
  c->r[27]=c->r[4]|c->r[4]; // 801D23F0
  c->r[30]=c->r[7]|c->r[7]; // 801D23F4
  c->r[31]=c->r[8]|c->r[8]; // 801D23F8
  c->r[3]=c->r[29]|c->r[29]; // 801D23FC
  c->r[4]=c->r[28]|c->r[28]; // 801D2400
  c->lr=0x801D2408u; f_80188CE0(c); // 801D2404
  cmpu(c,0,c->r[28],0x0000FFFFu); // 801D2408
  if (crb(c,1)) { goto L_801D2438; } // 801D240C
  c->r[3]=c->r[26]|c->r[26]; // 801D2410
  c->r[4]=c->r[27]|c->r[27]; // 801D2414
  c->r[5]=c->r[28]|c->r[28]; // 801D2418
  c->r[6]=c->r[29]|c->r[29]; // 801D241C
  c->r[8]=c->r[30]|c->r[30]; // 801D2420
  c->r[9]=c->r[31]|c->r[31]; // 801D2424
  c->r[7]=0u+0x00000001u; // 801D2428
  c->r[10]=0u+0x00000001u; // 801D242C
  c->lr=0x801D2434u; f_801D1F50(c); // 801D2430
  goto L_801D2458; // 801D2434
L_801D2438:;
  c->r[3]=c->r[26]|c->r[26]; // 801D2438
  c->r[4]=c->r[27]|c->r[27]; // 801D243C
  c->r[5]=c->r[28]|c->r[28]; // 801D2440
  c->r[6]=c->r[29]|c->r[29]; // 801D2444
  c->r[7]=c->r[30]|c->r[30]; // 801D2448
  c->r[8]=c->r[31]|c->r[31]; // 801D244C
  c->r[9]=0u+0x00000001u; // 801D2450
  c->lr=0x801D2458u; f_801D1BF0(c); // 801D2454
L_801D2458:;
  c->r[11]=c->r[1]+0x00000020u; // 801D2458
  c->lr=0x801D2460u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D245C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D2460
  c->lr=c->r[0]; // 801D2464
  c->r[1]=c->r[1]+0x00000020u; // 801D2468
  return; // 801D246C
}

// __CtrlMsgInt
void f_801D2470(Ctx* __restrict c) {
  trace_call(0x801D2470u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D2470
  c->r[0]=c->lr; // 801D2474
  W32(c->r[1]+0x00000054u,c->r[0]); // 801D2478
  c->r[11]=c->r[1]+0x00000050u; // 801D247C
  c->lr=0x801D2484u; f_802079EC(c); // 801D2480
  cmps(c,0,(int32_t)c->r[9],0); // 801D2484
  c->r[31]=0u+0x80280000u; // 801D2488
  c->r[23]=R32(c->r[1]+0x00000058u); // 801D248C
  c->r[15]=c->r[3]|c->r[3]; // 801D2490
  c->r[14]=R8(c->r[1]+0x0000005Fu); // 801D2494
  c->r[16]=c->r[4]|c->r[4]; // 801D2498
  c->r[17]=c->r[5]|c->r[5]; // 801D249C
  c->r[18]=c->r[6]|c->r[6]; // 801D24A0
  c->r[19]=c->r[7]|c->r[7]; // 801D24A4
  c->r[20]=c->r[8]|c->r[8]; // 801D24A8
  c->r[21]=c->r[9]|c->r[9]; // 801D24AC
  c->r[22]=c->r[10]|c->r[10]; // 801D24B0
  c->r[31]=c->r[31]+0xFFFFC2E0u; // 801D24B4
  if (!crb(c,2)) { goto L_801D24C4; } // 801D24B8
  cmps(c,0,(int32_t)c->r[8],0); // 801D24BC
  if (!crb(c,2)) { goto L_801D24CC; } // 801D24C0
L_801D24C4:;
  c->r[0]=rotl(c->r[9],0)&0x0000001Fu; cr0(c,c->r[0]); // 801D24C4
  if (crb(c,2)) { goto L_801D24E0; } // 801D24C8
L_801D24CC:;
  c->r[3]=c->r[31]+0x0000048Cu; // 801D24CC
  c->r[15]=0u+0xFFFFFFFCu; // 801D24D0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D24D4
  c->lr=0x801D24DCu; f_801D1610(c); // 801D24D8
  goto L_801D29F8; // 801D24DC
L_801D24E0:;
  c->r[3]=R32(c->r[13]+0xFFFFAB40u); // 801D24E0
  c->r[4]=0u+0x000000E0u; // 801D24E4
  c->r[5]=0u+0x00000020u; // 801D24E8
  c->lr=0x801D24F0u; f_801BCF80(c); // 801D24EC
  cmps(c,0,(int32_t)c->r[3],0); // 801D24F0
  c->r[30]=c->r[3]|c->r[3]; // 801D24F4
  if (!crb(c,2)) { goto L_801D2514; } // 801D24F8
  c->r[4]=R32(c->r[13]+0xFFFFAB40u); // 801D24FC
  c->r[6]=c->r[30]|c->r[30]; // 801D2500
  c->r[3]=c->r[31]+0x00000154u; // 801D2504
  c->r[5]=0u+0x000000E0u; // 801D2508
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D250C
  c->lr=0x801D2514u; f_801D1610(c); // 801D2510
L_801D2514:;
  c->r[3]=R32(c->r[13]+0xFFFFAB40u); // 801D2514
  c->r[4]=0u+0x00000020u; // 801D2518
  c->r[5]=0u+0x00000020u; // 801D251C
  c->lr=0x801D2524u; f_801BCF80(c); // 801D2520
  cmps(c,0,(int32_t)c->r[3],0); // 801D2524
  c->r[29]=c->r[3]|c->r[3]; // 801D2528
  if (!crb(c,2)) { goto L_801D2548; } // 801D252C
  c->r[4]=R32(c->r[13]+0xFFFFAB40u); // 801D2530
  c->r[6]=c->r[29]|c->r[29]; // 801D2534
  c->r[3]=c->r[31]+0x00000154u; // 801D2538
  c->r[5]=0u+0x00000020u; // 801D253C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D2540
  c->lr=0x801D2548u; f_801D1610(c); // 801D2544
L_801D2548:;
  c->r[3]=R32(c->r[13]+0xFFFFAB40u); // 801D2548
  c->r[4]=0u+0x00000020u; // 801D254C
  c->r[5]=0u+0x00000020u; // 801D2550
  c->lr=0x801D2558u; f_801BCF80(c); // 801D2554
  cmps(c,0,(int32_t)c->r[3],0); // 801D2558
  c->r[28]=c->r[3]|c->r[3]; // 801D255C
  if (!crb(c,2)) { goto L_801D257C; } // 801D2560
  c->r[4]=R32(c->r[13]+0xFFFFAB40u); // 801D2564
  c->r[6]=c->r[28]|c->r[28]; // 801D2568
  c->r[3]=c->r[31]+0x00000154u; // 801D256C
  c->r[5]=0u+0x00000020u; // 801D2570
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D2574
  c->lr=0x801D257Cu; f_801D1610(c); // 801D2578
L_801D257C:;
  c->r[3]=R32(c->r[13]+0xFFFFAB40u); // 801D257C
  c->r[4]=0u+0x00000020u; // 801D2580
  c->r[5]=0u+0x00000020u; // 801D2584
  c->lr=0x801D258Cu; f_801BCF80(c); // 801D2588
  cmps(c,0,(int32_t)c->r[3],0); // 801D258C
  c->r[27]=c->r[3]|c->r[3]; // 801D2590
  if (!crb(c,2)) { goto L_801D25B0; } // 801D2594
  c->r[4]=R32(c->r[13]+0xFFFFAB40u); // 801D2598
  c->r[6]=c->r[27]|c->r[27]; // 801D259C
  c->r[3]=c->r[31]+0x00000154u; // 801D25A0
  c->r[5]=0u+0x00000020u; // 801D25A4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D25A8
  c->lr=0x801D25B0u; f_801D1610(c); // 801D25AC
L_801D25B0:;
  c->r[3]=R32(c->r[13]+0xFFFFAB40u); // 801D25B0
  c->r[4]=0u+0x00000020u; // 801D25B4
  c->r[5]=0u+0x00000020u; // 801D25B8
  c->lr=0x801D25C0u; f_801BCF80(c); // 801D25BC
  cmps(c,0,(int32_t)c->r[3],0); // 801D25C0
  c->r[26]=c->r[3]|c->r[3]; // 801D25C4
  if (!crb(c,2)) { goto L_801D25E4; } // 801D25C8
  c->r[4]=R32(c->r[13]+0xFFFFAB40u); // 801D25CC
  c->r[6]=c->r[26]|c->r[26]; // 801D25D0
  c->r[3]=c->r[31]+0x00000154u; // 801D25D4
  c->r[5]=0u+0x00000020u; // 801D25D8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D25DC
  c->lr=0x801D25E4u; f_801D1610(c); // 801D25E0
L_801D25E4:;
  c->r[3]=R32(c->r[13]+0xFFFFAB40u); // 801D25E4
  c->r[4]=0u+0x00000020u; // 801D25E8
  c->r[5]=0u+0x00000020u; // 801D25EC
  c->lr=0x801D25F4u; f_801BCF80(c); // 801D25F0
  cmps(c,0,(int32_t)c->r[3],0); // 801D25F4
  c->r[25]=c->r[3]|c->r[3]; // 801D25F8
  if (!crb(c,2)) { goto L_801D2618; } // 801D25FC
  c->r[4]=R32(c->r[13]+0xFFFFAB40u); // 801D2600
  c->r[6]=c->r[25]|c->r[25]; // 801D2604
  c->r[3]=c->r[31]+0x00000154u; // 801D2608
  c->r[5]=0u+0x00000020u; // 801D260C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D2610
  c->lr=0x801D2618u; f_801D1610(c); // 801D2614
L_801D2618:;
  c->r[3]=R32(c->r[13]+0xFFFFAB40u); // 801D2618
  c->r[4]=0u+0x00000020u; // 801D261C
  c->r[5]=0u+0x00000020u; // 801D2620
  c->lr=0x801D2628u; f_801BCF80(c); // 801D2624
  cmps(c,0,(int32_t)c->r[3],0); // 801D2628
  c->r[24]=c->r[3]|c->r[3]; // 801D262C
  if (!crb(c,2)) { goto L_801D264C; } // 801D2630
  c->r[4]=R32(c->r[13]+0xFFFFAB40u); // 801D2634
  c->r[6]=c->r[24]|c->r[24]; // 801D2638
  c->r[3]=c->r[31]+0x00000154u; // 801D263C
  c->r[5]=0u+0x00000020u; // 801D2640
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D2644
  c->lr=0x801D264Cu; f_801D1610(c); // 801D2648
L_801D264C:;
  cmps(c,0,(int32_t)c->r[29],0); // 801D264C
  if (crb(c,2)) { goto L_801D2684; } // 801D2650
  cmps(c,0,(int32_t)c->r[28],0); // 801D2654
  if (crb(c,2)) { goto L_801D2684; } // 801D2658
  cmps(c,0,(int32_t)c->r[27],0); // 801D265C
  if (crb(c,2)) { goto L_801D2684; } // 801D2660
  cmps(c,0,(int32_t)c->r[26],0); // 801D2664
  if (crb(c,2)) { goto L_801D2684; } // 801D2668
  cmps(c,0,(int32_t)c->r[25],0); // 801D266C
  if (crb(c,2)) { goto L_801D2684; } // 801D2670
  cmps(c,0,(int32_t)c->r[24],0); // 801D2674
  if (crb(c,2)) { goto L_801D2684; } // 801D2678
  cmps(c,0,(int32_t)c->r[30],0); // 801D267C
  if (!crb(c,2)) { goto L_801D2698; } // 801D2680
L_801D2684:;
  c->r[3]=c->r[31]+0x000004A8u; // 801D2684
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D2688
  c->lr=0x801D2690u; f_801D1610(c); // 801D268C
  c->r[15]=0u+0xFFFFFFEAu; // 801D2690
  goto L_801D288C; // 801D2694
L_801D2698:;
  W8(c->r[29]+0x00000000u,c->r[16]); // 801D2698
  c->r[6]=0u+0x00000000u; // 801D269C
  c->r[5]=0u+0x00000001u; // 801D26A0
  c->r[0]=0u+0x00000002u; // 801D26A4
  W8(c->r[28]+0x00000000u,c->r[17]); // 801D26A8
  c->r[3]=c->r[29]|c->r[29]; // 801D26AC
  c->r[4]=0u+0x00000020u; // 801D26B0
  W16(0u+c->r[26],__builtin_bswap16((uint16_t)c->r[18])); // 801D26B4
  W16(0u+c->r[25],__builtin_bswap16((uint16_t)c->r[19])); // 801D26B8
  W16(0u+c->r[24],__builtin_bswap16((uint16_t)c->r[20])); // 801D26BC
  W8(c->r[27]+0x00000000u,c->r[6]); // 801D26C0
  W32(c->r[30]+0x00000000u,c->r[29]); // 801D26C4
  W32(c->r[30]+0x00000004u,c->r[5]); // 801D26C8
  W32(c->r[30]+0x00000008u,c->r[28]); // 801D26CC
  W32(c->r[30]+0x0000000Cu,c->r[5]); // 801D26D0
  W32(c->r[30]+0x00000010u,c->r[26]); // 801D26D4
  W32(c->r[30]+0x00000014u,c->r[0]); // 801D26D8
  W32(c->r[30]+0x00000018u,c->r[25]); // 801D26DC
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 801D26E0
  W32(c->r[30]+0x00000020u,c->r[24]); // 801D26E4
  W32(c->r[30]+0x00000024u,c->r[0]); // 801D26E8
  W32(c->r[30]+0x00000028u,c->r[27]); // 801D26EC
  W32(c->r[30]+0x0000002Cu,c->r[5]); // 801D26F0
  W32(c->r[30]+0x00000030u,c->r[21]); // 801D26F4
  W32(c->r[30]+0x00000034u,c->r[20]); // 801D26F8
  c->lr=0x801D2700u; f_80188CE0(c); // 801D26FC
  c->r[3]=c->r[28]|c->r[28]; // 801D2700
  c->r[4]=0u+0x00000020u; // 801D2704
  c->lr=0x801D270Cu; f_80188CE0(c); // 801D2708
  c->r[3]=c->r[27]|c->r[27]; // 801D270C
  c->r[4]=0u+0x00000020u; // 801D2710
  c->lr=0x801D2718u; f_80188CE0(c); // 801D2714
  c->r[3]=c->r[26]|c->r[26]; // 801D2718
  c->r[4]=0u+0x00000020u; // 801D271C
  c->lr=0x801D2724u; f_80188CE0(c); // 801D2720
  c->r[3]=c->r[25]|c->r[25]; // 801D2724
  c->r[4]=0u+0x00000020u; // 801D2728
  c->lr=0x801D2730u; f_80188CE0(c); // 801D272C
  c->r[3]=c->r[24]|c->r[24]; // 801D2730
  c->r[4]=0u+0x00000020u; // 801D2734
  c->lr=0x801D273Cu; f_80188CE0(c); // 801D2738
  c->r[3]=c->r[30]|c->r[30]; // 801D273C
  c->r[4]=0u+0x000000E0u; // 801D2740
  c->lr=0x801D2748u; f_80188CE0(c); // 801D2744
  cmps(c,0,(int32_t)c->r[14],0); // 801D2748
  if (!crb(c,2)) { goto L_801D2770; } // 801D274C
  c->r[3]=c->r[15]|c->r[15]; // 801D2750
  c->r[7]=c->r[30]|c->r[30]; // 801D2754
  c->r[4]=0u+0x00000000u; // 801D2758
  c->r[5]=0u+0x00000006u; // 801D275C
  c->r[6]=0u+0x00000001u; // 801D2760
  c->lr=0x801D2768u; f_801BC870(c); // 801D2764
  c->r[15]=c->r[3]|c->r[3]; // 801D2768
  goto L_801D288C; // 801D276C
L_801D2770:;
  c->r[3]=R32(c->r[13]+0xFFFFAB40u); // 801D2770
  c->r[4]=0u+0x00000080u; // 801D2774
  c->r[5]=0u+0x00000020u; // 801D2778
  c->lr=0x801D2780u; f_801BCF80(c); // 801D277C
  cmps(c,0,(int32_t)c->r[3],0); // 801D2780
  c->r[14]=c->r[3]|c->r[3]; // 801D2784
  if (!crb(c,2)) { goto L_801D27A4; } // 801D2788
  c->r[4]=R32(c->r[13]+0xFFFFAB40u); // 801D278C
  c->r[6]=c->r[14]|c->r[14]; // 801D2790
  c->r[3]=c->r[31]+0x00000154u; // 801D2794
  c->r[5]=0u+0x00000080u; // 801D2798
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D279C
  c->lr=0x801D27A4u; f_801D1610(c); // 801D27A0
L_801D27A4:;
  cmps(c,0,(int32_t)c->r[14],0); // 801D27A4
  if (!crb(c,2)) { goto L_801D27C0; } // 801D27A8
  c->r[3]=c->r[31]+0x000004C8u; // 801D27AC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D27B0
  c->lr=0x801D27B8u; f_801D1610(c); // 801D27B4
  c->r[15]=0u+0xFFFFFFEAu; // 801D27B8
  goto L_801D288C; // 801D27BC
L_801D27C0:;
  c->r[3]=c->r[14]|c->r[14]; // 801D27C0
  c->r[4]=0u+0x00000000u; // 801D27C4
  c->r[5]=0u+0x00000080u; // 801D27C8
  c->lr=0x801D27D0u; f_800046B4(c); // 801D27CC
  W32(c->r[14]+0x00000000u,c->r[22]); // 801D27D0
  c->r[4]=c->r[22]|c->r[22]; // 801D27D4
  c->r[5]=c->r[23]|c->r[23]; // 801D27D8
  c->r[3]=c->r[31]+0x000004F0u; // 801D27DC
  W32(c->r[14]+0x00000008u,c->r[23]); // 801D27E0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D27E4
  c->lr=0x801D27ECu; f_801D1560(c); // 801D27E8
  c->r[0]=0u+0x00000007u; // 801D27EC
  W32(c->r[14]+0x00000034u,c->r[0]); // 801D27F0
  c->r[8]=0u+0x801D0000u; // 801D27F4
  c->r[3]=c->r[15]|c->r[15]; // 801D27F8
  W32(c->r[14]+0x00000014u,c->r[29]); // 801D27FC
  c->r[7]=c->r[30]|c->r[30]; // 801D2800
  c->r[9]=c->r[14]|c->r[14]; // 801D2804
  c->r[8]=c->r[8]+0x000017D0u; // 801D2808
  W32(c->r[14]+0x00000018u,c->r[28]); // 801D280C
  c->r[4]=0u+0x00000000u; // 801D2810
  c->r[5]=0u+0x00000006u; // 801D2814
  c->r[6]=0u+0x00000001u; // 801D2818
  W32(c->r[14]+0x0000001Cu,c->r[26]); // 801D281C
  W32(c->r[14]+0x00000020u,c->r[25]); // 801D2820
  W32(c->r[14]+0x00000024u,c->r[24]); // 801D2824
  W32(c->r[14]+0x00000028u,c->r[27]); // 801D2828
  W32(c->r[14]+0x0000002Cu,c->r[30]); // 801D282C
  W32(c->r[14]+0x00000040u,c->r[21]); // 801D2830
  W16(c->r[14]+0x00000044u,c->r[20]); // 801D2834
  c->lr=0x801D283Cu; f_801BC780(c); // 801D2838
  c->r[15]=c->r[3]|c->r[3]; // 801D283C
  c->r[3]=c->r[31]+0x00000514u; // 801D2840
  c->r[4]=c->r[15]|c->r[15]; // 801D2844
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D2848
  c->lr=0x801D2850u; f_801D1560(c); // 801D284C
  cmps(c,0,(int32_t)c->r[15],0); // 801D2850
  if (!crb(c,0)) { goto L_801D29F8; } // 801D2854
  cmps(c,0,(int32_t)c->r[14],0); // 801D2858
  if (crb(c,2)) { goto L_801D288C; } // 801D285C
  c->r[3]=R32(c->r[13]+0xFFFFAB40u); // 801D2860
  c->r[4]=c->r[14]|c->r[14]; // 801D2864
  c->lr=0x801D286Cu; f_801BCF90(c); // 801D2868
  cmps(c,0,(int32_t)c->r[3],0); // 801D286C
  if (!crb(c,0)) { goto L_801D288C; } // 801D2870
  c->r[4]=R32(c->r[13]+0xFFFFAB40u); // 801D2874
  c->r[6]=c->r[3]|c->r[3]; // 801D2878
  c->r[5]=c->r[14]|c->r[14]; // 801D287C
  c->r[3]=c->r[31]+0x00000108u; // 801D2880
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D2884
  c->lr=0x801D288Cu; f_801D1610(c); // 801D2888
L_801D288C:;
  cmps(c,0,(int32_t)c->r[29],0); // 801D288C
  if (crb(c,2)) { goto L_801D28C0; } // 801D2890
  c->r[3]=R32(c->r[13]+0xFFFFAB40u); // 801D2894
  c->r[4]=c->r[29]|c->r[29]; // 801D2898
  c->lr=0x801D28A0u; f_801BCF90(c); // 801D289C
  cmps(c,0,(int32_t)c->r[3],0); // 801D28A0
  if (!crb(c,0)) { goto L_801D28C0; } // 801D28A4
  c->r[4]=R32(c->r[13]+0xFFFFAB40u); // 801D28A8
  c->r[6]=c->r[3]|c->r[3]; // 801D28AC
  c->r[5]=c->r[29]|c->r[29]; // 801D28B0
  c->r[3]=c->r[31]+0x00000108u; // 801D28B4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D28B8
  c->lr=0x801D28C0u; f_801D1610(c); // 801D28BC
L_801D28C0:;
  cmps(c,0,(int32_t)c->r[28],0); // 801D28C0
  if (crb(c,2)) { goto L_801D28F4; } // 801D28C4
  c->r[3]=R32(c->r[13]+0xFFFFAB40u); // 801D28C8
  c->r[4]=c->r[28]|c->r[28]; // 801D28CC
  c->lr=0x801D28D4u; f_801BCF90(c); // 801D28D0
  cmps(c,0,(int32_t)c->r[3],0); // 801D28D4
  if (!crb(c,0)) { goto L_801D28F4; } // 801D28D8
  c->r[4]=R32(c->r[13]+0xFFFFAB40u); // 801D28DC
  c->r[6]=c->r[3]|c->r[3]; // 801D28E0
  c->r[5]=c->r[28]|c->r[28]; // 801D28E4
  c->r[3]=c->r[31]+0x00000108u; // 801D28E8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D28EC
  c->lr=0x801D28F4u; f_801D1610(c); // 801D28F0
L_801D28F4:;
  cmps(c,0,(int32_t)c->r[26],0); // 801D28F4
  if (crb(c,2)) { goto L_801D2928; } // 801D28F8
  c->r[3]=R32(c->r[13]+0xFFFFAB40u); // 801D28FC
  c->r[4]=c->r[26]|c->r[26]; // 801D2900
  c->lr=0x801D2908u; f_801BCF90(c); // 801D2904
  cmps(c,0,(int32_t)c->r[3],0); // 801D2908
  if (!crb(c,0)) { goto L_801D2928; } // 801D290C
  c->r[4]=R32(c->r[13]+0xFFFFAB40u); // 801D2910
  c->r[6]=c->r[3]|c->r[3]; // 801D2914
  c->r[5]=c->r[26]|c->r[26]; // 801D2918
  c->r[3]=c->r[31]+0x00000108u; // 801D291C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D2920
  c->lr=0x801D2928u; f_801D1610(c); // 801D2924
L_801D2928:;
  cmps(c,0,(int32_t)c->r[25],0); // 801D2928
  if (crb(c,2)) { goto L_801D295C; } // 801D292C
  c->r[3]=R32(c->r[13]+0xFFFFAB40u); // 801D2930
  c->r[4]=c->r[25]|c->r[25]; // 801D2934
  c->lr=0x801D293Cu; f_801BCF90(c); // 801D2938
  cmps(c,0,(int32_t)c->r[3],0); // 801D293C
  if (!crb(c,0)) { goto L_801D295C; } // 801D2940
  c->r[4]=R32(c->r[13]+0xFFFFAB40u); // 801D2944
  c->r[6]=c->r[3]|c->r[3]; // 801D2948
  c->r[5]=c->r[25]|c->r[25]; // 801D294C
  c->r[3]=c->r[31]+0x00000108u; // 801D2950
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D2954
  c->lr=0x801D295Cu; f_801D1610(c); // 801D2958
L_801D295C:;
  cmps(c,0,(int32_t)c->r[24],0); // 801D295C
  if (crb(c,2)) { goto L_801D2990; } // 801D2960
  c->r[3]=R32(c->r[13]+0xFFFFAB40u); // 801D2964
  c->r[4]=c->r[24]|c->r[24]; // 801D2968
  c->lr=0x801D2970u; f_801BCF90(c); // 801D296C
  cmps(c,0,(int32_t)c->r[3],0); // 801D2970
  if (!crb(c,0)) { goto L_801D2990; } // 801D2974
  c->r[4]=R32(c->r[13]+0xFFFFAB40u); // 801D2978
  c->r[6]=c->r[3]|c->r[3]; // 801D297C
  c->r[5]=c->r[24]|c->r[24]; // 801D2980
  c->r[3]=c->r[31]+0x00000108u; // 801D2984
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D2988
  c->lr=0x801D2990u; f_801D1610(c); // 801D298C
L_801D2990:;
  cmps(c,0,(int32_t)c->r[27],0); // 801D2990
  if (crb(c,2)) { goto L_801D29C4; } // 801D2994
  c->r[3]=R32(c->r[13]+0xFFFFAB40u); // 801D2998
  c->r[4]=c->r[27]|c->r[27]; // 801D299C
  c->lr=0x801D29A4u; f_801BCF90(c); // 801D29A0
  cmps(c,0,(int32_t)c->r[3],0); // 801D29A4
  if (!crb(c,0)) { goto L_801D29C4; } // 801D29A8
  c->r[4]=R32(c->r[13]+0xFFFFAB40u); // 801D29AC
  c->r[6]=c->r[3]|c->r[3]; // 801D29B0
  c->r[5]=c->r[27]|c->r[27]; // 801D29B4
  c->r[3]=c->r[31]+0x00000108u; // 801D29B8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D29BC
  c->lr=0x801D29C4u; f_801D1610(c); // 801D29C0
L_801D29C4:;
  cmps(c,0,(int32_t)c->r[30],0); // 801D29C4
  if (crb(c,2)) { goto L_801D29F8; } // 801D29C8
  c->r[3]=R32(c->r[13]+0xFFFFAB40u); // 801D29CC
  c->r[4]=c->r[30]|c->r[30]; // 801D29D0
  c->lr=0x801D29D8u; f_801BCF90(c); // 801D29D4
  cmps(c,0,(int32_t)c->r[3],0); // 801D29D8
  if (!crb(c,0)) { goto L_801D29F8; } // 801D29DC
  c->r[4]=R32(c->r[13]+0xFFFFAB40u); // 801D29E0
  c->r[6]=c->r[3]|c->r[3]; // 801D29E4
  c->r[5]=c->r[30]|c->r[30]; // 801D29E8
  c->r[3]=c->r[31]+0x00000108u; // 801D29EC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D29F0
  c->lr=0x801D29F8u; f_801D1610(c); // 801D29F4
L_801D29F8:;
  c->r[11]=c->r[1]+0x00000050u; // 801D29F8
  c->r[3]=c->r[15]|c->r[15]; // 801D29FC
  c->lr=0x801D2A04u; f_80207A38(c); // 801D2A00
  c->r[0]=R32(c->r[1]+0x00000054u); // 801D2A04
  c->lr=c->r[0]; // 801D2A08
  c->r[1]=c->r[1]+0x00000050u; // 801D2A0C
  return; // 801D2A10
}

// IUSB_WriteCtrlMsgAsync
void f_801D2A20(Ctx* __restrict c) {
  trace_call(0x801D2A20u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D2A20
  c->r[0]=c->lr; // 801D2A24
  W32(c->r[1]+0x00000044u,c->r[0]); // 801D2A28
  c->r[11]=c->r[1]+0x00000040u; // 801D2A2C
  c->lr=0x801D2A34u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D2A30
  c->r[28]=c->r[8]|c->r[8]; // 801D2A34
  c->r[29]=c->r[9]|c->r[9]; // 801D2A38
  c->r[23]=c->r[3]|c->r[3]; // 801D2A3C
  c->r[24]=c->r[4]|c->r[4]; // 801D2A40
  c->r[31]=R32(c->r[1]+0x00000048u); // 801D2A44
  c->r[25]=c->r[5]|c->r[5]; // 801D2A48
  c->r[26]=c->r[6]|c->r[6]; // 801D2A4C
  c->r[27]=c->r[7]|c->r[7]; // 801D2A50
  c->r[30]=c->r[10]|c->r[10]; // 801D2A54
  c->r[3]=c->r[29]|c->r[29]; // 801D2A58
  c->r[4]=c->r[28]|c->r[28]; // 801D2A5C
  c->lr=0x801D2A64u; f_80188CE0(c); // 801D2A60
  W32(c->r[1]+0x00000008u,c->r[31]); // 801D2A64
  c->r[0]=0u+0x00000001u; // 801D2A68
  c->r[3]=c->r[23]|c->r[23]; // 801D2A6C
  c->r[4]=c->r[24]|c->r[24]; // 801D2A70
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801D2A74
  c->r[5]=c->r[25]|c->r[25]; // 801D2A78
  c->r[6]=c->r[26]|c->r[26]; // 801D2A7C
  c->r[7]=c->r[27]|c->r[27]; // 801D2A80
  c->r[8]=c->r[28]|c->r[28]; // 801D2A84
  c->r[9]=c->r[29]|c->r[29]; // 801D2A88
  c->r[10]=c->r[30]|c->r[30]; // 801D2A8C
  c->lr=0x801D2A94u; f_801D2470(c); // 801D2A90
  c->r[11]=c->r[1]+0x00000040u; // 801D2A94
  c->lr=0x801D2A9Cu; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D2A98
  c->r[0]=R32(c->r[1]+0x00000044u); // 801D2A9C
  c->lr=c->r[0]; // 801D2AA0
  c->r[1]=c->r[1]+0x00000040u; // 801D2AA4
  return; // 801D2AA8
}

// WUDIsLinkedWBC
void f_801D2AB0(Ctx* __restrict c) {
  trace_call(0x801D2AB0u);
  c->r[3]=R32(c->r[13]+0xFFFFB680u); // 801D2AB0
  return; // 801D2AB4
}

// App_MEMalloc
void f_801D2AC0(Ctx* __restrict c) {
  trace_call(0x801D2AC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D2AC0
  c->r[0]=c->lr; // 801D2AC4
  c->r[4]=0u+0x80280000u; // 801D2AC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D2ACC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D2AD0
  c->r[31]=c->r[3]|c->r[3]; // 801D2AD4
  c->r[3]=c->r[4]+0xFFFFCD2Cu; // 801D2AD8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D2ADC
  c->lr=0x801D2AE4u; f_801D94A0(c); // 801D2AE0
  c->r[4]=0u+0x802E0000u; // 801D2AE4
  c->r[3]=c->r[31]|c->r[31]; // 801D2AE8
  c->r[4]=c->r[4]+0xFFFF9DC0u; // 801D2AEC
  c->r[12]=R32(c->r[4]+0x000006F4u); // 801D2AF0
  c->ctr=c->r[12]; // 801D2AF4
  if (true) { c->lr=0x801D2AFCu; dispatch(c,c->ctr); } // 801D2AF8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D2AFC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D2B00
  c->lr=c->r[0]; // 801D2B04
  c->r[1]=c->r[1]+0x00000010u; // 801D2B08
  return; // 801D2B0C
}

// App_MEMfree
void f_801D2B10(Ctx* __restrict c) {
  trace_call(0x801D2B10u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D2B10
  c->r[0]=c->lr; // 801D2B14
  c->r[4]=0u+0x80280000u; // 801D2B18
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D2B1C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D2B20
  c->r[31]=c->r[3]|c->r[3]; // 801D2B24
  c->r[3]=c->r[4]+0xFFFFCD3Cu; // 801D2B28
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D2B2C
  c->lr=0x801D2B34u; f_801D94A0(c); // 801D2B30
  c->r[4]=0u+0x802E0000u; // 801D2B34
  c->r[3]=c->r[31]|c->r[31]; // 801D2B38
  c->r[4]=c->r[4]+0xFFFF9DC0u; // 801D2B3C
  c->r[12]=R32(c->r[4]+0x000006F8u); // 801D2B40
  c->ctr=c->r[12]; // 801D2B44
  if (true) { c->lr=0x801D2B4Cu; dispatch(c,c->ctr); } // 801D2B48
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D2B4C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D2B50
  c->lr=c->r[0]; // 801D2B54
  c->r[1]=c->r[1]+0x00000010u; // 801D2B58
  return; // 801D2B5C
}

// SyncFlushCallback
void f_801D2B60(Ctx* __restrict c) {
  trace_call(0x801D2B60u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D2B60
  c->r[0]=c->lr; // 801D2B64
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D2B68
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D2B6C
  c->r[31]=0u+0x802E0000u; // 801D2B70
  c->r[31]=c->r[31]+0xFFFF9DC0u; // 801D2B74
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D2B78
  c->r[30]=c->r[3]|c->r[3]; // 801D2B7C
  c->r[3]=0u+0x80280000u; // 801D2B80
  c->r[5]=R8(c->r[31]+0x0000000Cu); // 801D2B84
  c->r[4]=c->r[30]|c->r[30]; // 801D2B88
  c->r[3]=c->r[3]+0xFFFFCD4Cu; // 801D2B8C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D2B90
  c->lr=0x801D2B98u; f_801D94A0(c); // 801D2B94
  c->r[0]=R8(c->r[31]+0x0000000Cu); // 801D2B98
  cmps(c,0,(int32_t)c->r[0],0); // 801D2B9C
  if (crb(c,2)) { goto L_801D2BC0; } // 801D2BA0
  cmps(c,0,(int32_t)c->r[30],0); // 801D2BA4
  if (!crb(c,2)) { goto L_801D2BB8; } // 801D2BA8
  c->r[0]=0u+0x00000017u; // 801D2BAC
  W8(c->r[31]+0x0000000Cu,c->r[0]); // 801D2BB0
  goto L_801D2BC0; // 801D2BB4
L_801D2BB8:;
  c->r[0]=0u+0x000000FFu; // 801D2BB8
  W8(c->r[31]+0x0000000Cu,c->r[0]); // 801D2BBC
L_801D2BC0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D2BC0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D2BC4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D2BC8
  c->lr=c->r[0]; // 801D2BCC
  c->r[1]=c->r[1]+0x00000010u; // 801D2BD0
  return; // 801D2BD4
}

// __wudSyncPrepareSearch
void f_801D2BE0(Ctx* __restrict c) {
  trace_call(0x801D2BE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D2BE0
  c->r[0]=c->lr; // 801D2BE4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D2BE8
  c->r[11]=c->r[1]+0x00000030u; // 801D2BEC
  c->lr=0x801D2BF4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D2BF0
  c->r[31]=0u+0x802E0000u; // 801D2BF4
  c->r[31]=c->r[31]+0xFFFF9DC0u; // 801D2BF8
  c->lr=0x801D2C00u; f_8018D6A0(c); // 801D2BFC
  c->r[0]=0u+0x00000000u; // 801D2C00
  W8(c->r[31]+0x000006EBu,c->r[0]); // 801D2C04
  W8(c->r[31]+0x000006EAu,c->r[0]); // 801D2C08
  c->lr=0x801D2C10u; f_8018D6E0(c); // 801D2C0C
  c->r[3]=0u+0x00000000u; // 801D2C10
  c->r[4]=0u+0x00000000u; // 801D2C14
  c->lr=0x801D2C1Cu; f_801DF9EC(c); // 801D2C18
  c->r[0]=R8(c->r[31]+0x000006E8u); // 801D2C1C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801D2C20
  if (!crb(c,2)) { goto L_801D2C30; } // 801D2C24
  c->r[3]=0u+0x0000000Eu; // 801D2C28
  goto L_801D2D20; // 801D2C2C
L_801D2C30:;
  c->lr=0x801D2C34u; f_8018D6A0(c); // 801D2C30
  c->r[30]=R8(c->r[31]+0x000006E5u); // 801D2C34
  c->lr=0x801D2C3Cu; f_8018D6E0(c); // 801D2C38
  cmpu(c,0,c->r[30],0x00000004u); // 801D2C3C
  if (!crb(c,2)) { goto L_801D2C60; } // 801D2C40
  c->lr=0x801D2C48u; f_8018D6A0(c); // 801D2C44
  c->r[30]=R8(c->r[31]+0x000006E4u); // 801D2C48
  c->lr=0x801D2C50u; f_8018D6E0(c); // 801D2C4C
  cmpu(c,0,c->r[30],0x00000004u); // 801D2C50
  if (!crb(c,2)) { goto L_801D2C60; } // 801D2C54
  c->r[3]=0u+0x0000000Eu; // 801D2C58
  goto L_801D2D20; // 801D2C5C
L_801D2C60:;
  c->r[0]=R8(c->r[31]+0x000006E7u); // 801D2C60
  cmps(c,0,(int32_t)c->r[0],0); // 801D2C64
  if (crb(c,2)) { goto L_801D2D00; } // 801D2C68
  c->r[29]=0u+0x802E0000u; // 801D2C6C
  c->r[27]=0u+0x00000000u; // 801D2C70
  c->r[29]=c->r[29]+0xFFFF9DC0u; // 801D2C74
  c->r[28]=0u+0x00000000u; // 801D2C78
L_801D2C7C:;
  c->lr=0x801D2C80u; f_8018D6A0(c); // 801D2C7C
  cmpu(c,0,c->r[27],0x00000009u); // 801D2C80
  if (crb(c,1)) { goto L_801D2C94; } // 801D2C84
  c->r[4]=c->r[29]+c->r[28]; // 801D2C88
  c->r[30]=c->r[4]+0x000000E4u; // 801D2C8C
  goto L_801D2CA4; // 801D2C90
L_801D2C94:;
  c->r[0]=c->r[27]+0xFFFFFFF6u; // 801D2C94
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)96); // 801D2C98
  c->r[4]=c->r[29]+c->r[0]; // 801D2C9C
  c->r[30]=c->r[4]+0x000004A4u; // 801D2CA0
L_801D2CA4:;
  c->lr=0x801D2CA8u; f_8018D6E0(c); // 801D2CA4
  c->r[0]=R8(c->r[30]+0x00000059u); // 801D2CA8
  cmpu(c,0,c->r[0],0x00000009u); // 801D2CAC
  if (!crb(c,2)) { goto L_801D2CF0; } // 801D2CB0
  c->r[3]=0u+0x802E0000u; // 801D2CB4
  c->r[6]=0u+0x00000000u; // 801D2CB8
  c->r[3]=c->r[3]+0xFFFF9DC0u; // 801D2CBC
  c->r[0]=0u+0x00000001u; // 801D2CC0
  W8(c->r[1]+0x00000010u,c->r[6]); // 801D2CC4
  c->r[4]=c->r[30]+0x00000040u; // 801D2CC8
  c->r[3]=R8(c->r[3]+0x0000070Au); // 801D2CCC
  c->r[5]=c->r[1]+0x00000008u; // 801D2CD0
  W16(c->r[1]+0x00000008u,c->r[6]); // 801D2CD4
  W16(c->r[1]+0x0000000Au,c->r[6]); // 801D2CD8
  W16(c->r[1]+0x0000000Cu,c->r[0]); // 801D2CDC
  W16(c->r[1]+0x0000000Eu,c->r[6]); // 801D2CE0
  c->lr=0x801D2CE8u; f_801E870C(c); // 801D2CE4
  c->r[3]=0u+0x00000001u; // 801D2CE8
  goto L_801D2D20; // 801D2CEC
L_801D2CF0:;
  c->r[27]=c->r[27]+0x00000001u; // 801D2CF0
  c->r[28]=c->r[28]+0x00000060u; // 801D2CF4
  cmps(c,0,(int32_t)c->r[27],16); // 801D2CF8
  if (crb(c,0)) { IRQCHK(c); goto L_801D2C7C; } // 801D2CFC
L_801D2D00:;
  c->r[3]=R8(c->r[31]+0x000006E8u); // 801D2D00
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[0]); // 801D2D04
  if (!crb(c,1)) { goto L_801D2D14; } // 801D2D08
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801D2D0C
  W8(c->r[31]+0x000006E8u,c->r[0]); // 801D2D10
L_801D2D14:;
  c->r[0]=0u+0x00000032u; // 801D2D14
  W16(c->r[31]+0x00000748u,c->r[0]); // 801D2D18
  c->r[3]=0u+0x0000001Du; // 801D2D1C
L_801D2D20:;
  c->r[11]=c->r[1]+0x00000030u; // 801D2D20
  c->lr=0x801D2D28u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D2D24
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D2D28
  c->lr=c->r[0]; // 801D2D2C
  c->r[1]=c->r[1]+0x00000030u; // 801D2D30
  return; // 801D2D34
}

// __wudSyncTryConnect
void f_801D2D40(Ctx* __restrict c) {
  trace_call(0x801D2D40u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D2D40
  c->r[0]=c->lr; // 801D2D44
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D2D48
  c->r[11]=c->r[1]+0x00000030u; // 801D2D4C
  c->lr=0x801D2D54u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D2D50
  c->r[31]=0u+0x802E0000u; // 801D2D54
  c->r[30]=0u+0x80280000u; // 801D2D58
  c->r[31]=c->r[31]+0xFFFF9DC0u; // 801D2D5C
  c->r[25]=0u+0x000000FFu; // 801D2D60
  c->r[30]=c->r[30]+0xFFFFCB10u; // 801D2D64
  c->r[5]=0u+0x00000010u; // 801D2D68
  c->r[3]=c->r[31]+0x00000750u; // 801D2D6C
  c->r[3]=c->r[3]+0x00000006u; // 801D2D70
  c->r[4]=c->r[30]+0x00000268u; // 801D2D74
  c->lr=0x801D2D7Cu; f_8020BD24(c); // 801D2D78
  cmps(c,0,(int32_t)c->r[3],0); // 801D2D7C
  if (!crb(c,2)) { goto L_801D2DA4; } // 801D2D80
  c->r[3]=c->r[31]+0x00000858u; // 801D2D84
  c->r[0]=0u+0x00000002u; // 801D2D88
  W8(c->r[3]+0x00000059u,c->r[0]); // 801D2D8C
  c->r[3]=c->r[3]+0x00000040u; // 801D2D90
  c->r[4]=0u+0x00000000u; // 801D2D94
  c->r[5]=0u+0x00000012u; // 801D2D98
  c->lr=0x801D2DA0u; f_801E20E4(c); // 801D2D9C
  c->r[25]=0u+0x00000006u; // 801D2DA0
L_801D2DA4:;
  c->r[0]=R32(c->r[13]+0xFFFFB680u); // 801D2DA4
  cmps(c,0,(int32_t)c->r[0],0); // 801D2DA8
  if (crb(c,2)) { goto L_801D2E94; } // 801D2DAC
  c->r[3]=c->r[31]+0x00000750u; // 801D2DB0
  c->r[4]=c->r[30]+0x0000027Cu; // 801D2DB4
  c->r[3]=c->r[3]+0x00000006u; // 801D2DB8
  c->r[5]=0u+0x00000010u; // 801D2DBC
  c->lr=0x801D2DC4u; f_8020BD24(c); // 801D2DC0
  cmps(c,0,(int32_t)c->r[3],0); // 801D2DC4
  if (!crb(c,2)) { goto L_801D2E94; } // 801D2DC8
  c->r[27]=0u+0x00000000u; // 801D2DCC
  c->lr=0x801D2DD4u; f_8018D6A0(c); // 801D2DD0
  c->r[4]=c->r[31]+0x00000000u; // 801D2DD4
  c->r[29]=c->r[3]|c->r[3]; // 801D2DD8
  c->r[28]=R32(c->r[4]+0x00000064u); // 801D2DDC
  goto L_801D2E08; // 801D2DE0
L_801D2DE4:;
  c->r[26]=R32(c->r[28]+0x00000000u); // 801D2DE4
  c->r[4]=c->r[30]+0x0000027Cu; // 801D2DE8
  c->r[5]=0u+0x00000010u; // 801D2DEC
  c->r[3]=c->r[26]|c->r[26]; // 801D2DF0
  c->lr=0x801D2DF8u; f_8020BD24(c); // 801D2DF4
  cmps(c,0,(int32_t)c->r[3],0); // 801D2DF8
  if (!crb(c,2)) { goto L_801D2E04; } // 801D2DFC
  c->r[27]=c->r[26]|c->r[26]; // 801D2E00
L_801D2E04:;
  c->r[28]=R32(c->r[28]+0x00000008u); // 801D2E04
L_801D2E08:;
  cmps(c,0,(int32_t)c->r[28],0); // 801D2E08
  if (!crb(c,2)) { IRQCHK(c); goto L_801D2DE4; } // 801D2E0C
  c->r[3]=c->r[29]|c->r[29]; // 801D2E10
  c->lr=0x801D2E18u; f_8018D6E0(c); // 801D2E14
  cmps(c,0,(int32_t)c->r[27],0); // 801D2E18
  if (crb(c,2)) { goto L_801D2E74; } // 801D2E1C
  c->r[3]=c->r[30]+0x00000290u; // 801D2E20
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D2E24
  c->lr=0x801D2E2Cu; f_801D94A0(c); // 801D2E28
  c->r[0]=R8(c->r[27]+0x00000059u); // 801D2E2C
  cmpu(c,0,c->r[0],0x00000001u); // 801D2E30
  if (!crb(c,1)) { goto L_801D2E40; } // 801D2E34
  c->r[3]=c->r[25]|c->r[25]; // 801D2E38
  goto L_801D2E98; // 801D2E3C
L_801D2E40:;
  c->r[3]=c->r[31]+0x00000750u; // 801D2E40
  c->r[4]=c->r[27]+0x00000040u; // 801D2E44
  c->r[5]=0u+0x00000006u; // 801D2E48
  c->lr=0x801D2E50u; f_8020BD24(c); // 801D2E4C
  cmps(c,0,(int32_t)c->r[3],0); // 801D2E50
  if (crb(c,2)) { goto L_801D2E74; } // 801D2E54
  c->r[3]=c->r[30]+0x000002B8u; // 801D2E58
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D2E5C
  c->lr=0x801D2E64u; f_801D94A0(c); // 801D2E60
  c->r[3]=c->r[27]|c->r[27]; // 801D2E64
  c->lr=0x801D2E6Cu; f_801D7780(c); // 801D2E68
  c->r[3]=c->r[27]+0x00000040u; // 801D2E6C
  c->lr=0x801D2E74u; f_801D7050(c); // 801D2E70
L_801D2E74:;
  c->r[3]=c->r[31]+0x00000858u; // 801D2E74
  c->r[0]=0u+0x00000002u; // 801D2E78
  W8(c->r[3]+0x00000059u,c->r[0]); // 801D2E7C
  c->r[3]=c->r[3]+0x00000040u; // 801D2E80
  c->r[4]=0u+0x00000000u; // 801D2E84
  c->r[5]=0u+0x00000012u; // 801D2E88
  c->lr=0x801D2E90u; f_801E20E4(c); // 801D2E8C
  c->r[25]=0u+0x00000006u; // 801D2E90
L_801D2E94:;
  c->r[3]=c->r[25]|c->r[25]; // 801D2E94
L_801D2E98:;
  c->r[11]=c->r[1]+0x00000030u; // 801D2E98
  c->lr=0x801D2EA0u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D2E9C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D2EA0
  c->lr=c->r[0]; // 801D2EA4
  c->r[1]=c->r[1]+0x00000030u; // 801D2EA8
  return; // 801D2EAC
}

// __wudSyncVirginStandard
void f_801D2EB0(Ctx* __restrict c) {
  trace_call(0x801D2EB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D2EB0
  c->r[0]=c->lr; // 801D2EB4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D2EB8
  c->r[11]=c->r[1]+0x00000030u; // 801D2EBC
  c->lr=0x801D2EC4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D2EC0
  c->r[0]=R32(c->r[13]+0xFFFFB680u); // 801D2EC4
  c->r[31]=0u+0x802E0000u; // 801D2EC8
  c->r[31]=c->r[31]+0xFFFF9DC0u; // 801D2ECC
  c->r[29]=0u+0x80280000u; // 801D2ED0
  cmps(c,0,(int32_t)c->r[0],0); // 801D2ED4
  c->r[29]=c->r[29]+0xFFFFCB10u; // 801D2ED8
  c->r[26]=c->r[31]+0x00000000u; // 801D2EDC
  if (crb(c,2)) { goto L_801D2F7C; } // 801D2EE0
  c->r[3]=c->r[31]+0x00000858u; // 801D2EE4
  c->r[4]=c->r[29]+0x00000268u; // 801D2EE8
  c->r[5]=0u+0x00000010u; // 801D2EEC
  c->lr=0x801D2EF4u; f_8020BD24(c); // 801D2EF0
  cmps(c,0,(int32_t)c->r[3],0); // 801D2EF4
  if (!crb(c,2)) { goto L_801D2F7C; } // 801D2EF8
  c->r[27]=0u+0x00000000u; // 801D2EFC
  c->lr=0x801D2F04u; f_8018D6A0(c); // 801D2F00
  c->r[28]=R32(c->r[26]+0x00000064u); // 801D2F04
  c->r[30]=c->r[3]|c->r[3]; // 801D2F08
  goto L_801D2F30; // 801D2F0C
L_801D2F10:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 801D2F10
  c->r[4]=c->r[29]+0x0000027Cu; // 801D2F14
  c->r[5]=0u+0x00000010u; // 801D2F18
  c->lr=0x801D2F20u; f_8020BD24(c); // 801D2F1C
  cmps(c,0,(int32_t)c->r[3],0); // 801D2F20
  if (!crb(c,2)) { goto L_801D2F2C; } // 801D2F24
  c->r[27]=R32(c->r[28]+0x00000000u); // 801D2F28
L_801D2F2C:;
  c->r[28]=R32(c->r[28]+0x00000008u); // 801D2F2C
L_801D2F30:;
  cmps(c,0,(int32_t)c->r[28],0); // 801D2F30
  if (!crb(c,2)) { IRQCHK(c); goto L_801D2F10; } // 801D2F34
  c->r[3]=c->r[30]|c->r[30]; // 801D2F38
  c->lr=0x801D2F40u; f_8018D6E0(c); // 801D2F3C
  cmps(c,0,(int32_t)c->r[27],0); // 801D2F40
  if (crb(c,2)) { goto L_801D2F7C; } // 801D2F44
  c->r[27]=c->r[31]+0x00000000u; // 801D2F48
  c->lr=0x801D2F50u; f_8018D6A0(c); // 801D2F4C
  c->r[27]=R8(c->r[27]+0x00000012u); // 801D2F50
  c->lr=0x801D2F58u; f_8018D6E0(c); // 801D2F54
  cmpu(c,0,c->r[27],0x0000000Au); // 801D2F58
  if (!crb(c,2)) { goto L_801D2F7C; } // 801D2F5C
  c->r[3]=R32(c->r[26]+0x00000068u); // 801D2F60
  c->r[3]=R32(c->r[3]+0x00000004u); // 801D2F64
  c->r[30]=R32(c->r[3]+0x00000000u); // 801D2F68
  c->r[3]=c->r[30]|c->r[30]; // 801D2F6C
  c->lr=0x801D2F74u; f_801D7780(c); // 801D2F70
  c->r[3]=c->r[30]+0x00000040u; // 801D2F74
  c->lr=0x801D2F7Cu; f_801D7050(c); // 801D2F78
L_801D2F7C:;
  c->r[28]=c->r[31]+0x00000000u; // 801D2F7C
  c->lr=0x801D2F84u; f_8018D6A0(c); // 801D2F80
  c->r[27]=R8(c->r[28]+0x00000012u); // 801D2F84
  c->lr=0x801D2F8Cu; f_8018D6E0(c); // 801D2F88
  cmpu(c,0,c->r[27],0x0000000Au); // 801D2F8C
  if (!crb(c,2)) { goto L_801D2FA4; } // 801D2F90
  c->r[3]=R32(c->r[28]+0x00000068u); // 801D2F94
  c->r[3]=R32(c->r[3]+0x00000000u); // 801D2F98
  c->r[3]=c->r[3]+0x00000040u; // 801D2F9C
  c->lr=0x801D2FA4u; f_801D7050(c); // 801D2FA0
L_801D2FA4:;
  c->r[26]=c->r[31]+0x00000000u; // 801D2FA4
  c->lr=0x801D2FACu; f_8018D6A0(c); // 801D2FA8
  c->r[0]=R8(c->r[26]+0x000006E9u); // 801D2FAC
  c->r[28]=c->r[3]|c->r[3]; // 801D2FB0
  cmps(c,0,(int32_t)c->r[0],0); // 801D2FB4
  if (!crb(c,2)) { goto L_801D3010; } // 801D2FB8
  c->r[0]=0u+0x0000000Au; // 801D2FBC
  c->r[30]=0u+0x00000000u; // 801D2FC0
  c->r[27]=0u+0x00000000u; // 801D2FC4
  c->r[3]=0u+0x00000000u; // 801D2FC8
  c->ctr=c->r[0]; // 801D2FCC
L_801D2FD0:;
  c->r[4]=c->r[26]+c->r[3]; // 801D2FD0
  c->r[0]=R8(c->r[4]+0x0000013Du); // 801D2FD4
  cmps(c,0,(int32_t)c->r[0],0); // 801D2FD8
  if (!crb(c,2)) { goto L_801D3000; } // 801D2FDC
  c->r[4]=c->r[27]|c->r[27]; // 801D2FE0
  c->r[3]=c->r[29]+0x000002CCu; // 801D2FE4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D2FE8
  c->lr=0x801D2FF0u; f_801D94A0(c); // 801D2FEC
  c->r[0]=(uint32_t)((int32_t)c->r[27]*(int32_t)96); // 801D2FF0
  c->r[3]=c->r[26]+c->r[0]; // 801D2FF4
  c->r[30]=c->r[3]+0x000000E4u; // 801D2FF8
  goto L_801D3018; // 801D2FFC
L_801D3000:;
  c->r[27]=c->r[27]+0x00000001u; // 801D3000
  c->r[3]=c->r[3]+0x00000060u; // 801D3004
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D2FD0; } // 801D3008
  goto L_801D3018; // 801D300C
L_801D3010:;
  c->r[3]=R32(c->r[26]+0x00000018u); // 801D3010
  c->r[30]=R32(c->r[3]+0x00000000u); // 801D3014
L_801D3018:;
  c->r[3]=c->r[28]|c->r[28]; // 801D3018
  c->lr=0x801D3020u; f_8018D6E0(c); // 801D301C
  cmps(c,0,(int32_t)c->r[30],0); // 801D3020
  if (!crb(c,2)) { goto L_801D3030; } // 801D3024
  c->r[3]=0u+0x000000FFu; // 801D3028
  goto L_801D3210; // 801D302C
L_801D3030:;
  c->r[0]=R8(c->r[30]+0x00000059u); // 801D3030
  cmps(c,0,(int32_t)c->r[0],0); // 801D3034
  if (crb(c,2)) { goto L_801D3044; } // 801D3038
  c->r[3]=0u+0x000000FFu; // 801D303C
  goto L_801D3210; // 801D3040
L_801D3044:;
  c->r[3]=c->r[30]|c->r[30]; // 801D3044
  c->r[4]=c->r[31]+0x00000858u; // 801D3048
  c->r[5]=0u+0x00000060u; // 801D304C
  c->lr=0x801D3054u; f_80004364(c); // 801D3050
  c->r[3]=c->r[30]+0x00000040u; // 801D3054
  c->lr=0x801D305Cu; f_801D6EF0(c); // 801D3058
  c->r[3]=c->r[30]|c->r[30]; // 801D305C
  c->lr=0x801D3064u; f_801D7660(c); // 801D3060
  c->r[0]=R32(c->r[13]+0xFFFFB680u); // 801D3064
  cmps(c,0,(int32_t)c->r[0],0); // 801D3068
  if (crb(c,2)) { goto L_801D31F8; } // 801D306C
  c->r[3]=c->r[30]|c->r[30]; // 801D3070
  c->r[4]=c->r[29]+0x0000027Cu; // 801D3074
  c->r[5]=0u+0x00000010u; // 801D3078
  c->lr=0x801D3080u; f_8020BD24(c); // 801D307C
  cmps(c,0,(int32_t)c->r[3],0); // 801D3080
  if (!crb(c,2)) { goto L_801D31F8; } // 801D3084
  c->r[3]=c->r[30]|c->r[30]; // 801D3088
  c->lr=0x801D3090u; f_801D7A30(c); // 801D308C
  c->r[29]=c->r[31]+0x000008B8u; // 801D3090
  c->r[4]=0u+0x00000000u; // 801D3094
  c->r[3]=c->r[29]+0x000003D5u; // 801D3098
  c->r[5]=0u+0x00000046u; // 801D309C
  c->lr=0x801D30A4u; f_800046B4(c); // 801D30A0
  c->r[3]=c->r[29]+0x000003D5u; // 801D30A4
  c->r[4]=c->r[30]+0x00000040u; // 801D30A8
  c->r[5]=0u+0x00000006u; // 801D30AC
  c->lr=0x801D30B4u; f_80004364(c); // 801D30B0
  c->r[4]=c->r[30]|c->r[30]; // 801D30B4
  c->r[3]=c->r[29]+0x000003DBu; // 801D30B8
  c->r[5]=0u+0x00000040u; // 801D30BC
  c->lr=0x801D30C4u; f_80004364(c); // 801D30C0
  c->r[3]=c->r[29]+0x000003EFu; // 801D30C4
  c->r[4]=c->r[30]+0x00000046u; // 801D30C8
  c->r[5]=0u+0x00000010u; // 801D30CC
  c->lr=0x801D30D4u; f_80004364(c); // 801D30D0
  c->r[4]=addc(c,c->r[30],0x00000040u,0); cr0(c,c->r[4]); // 801D30D4
  if (crb(c,2)) { goto L_801D30E8; } // 801D30D8
  c->r[3]=c->r[31]+0x00000D20u; // 801D30DC
  c->r[5]=0u+0x00000006u; // 801D30E0
  c->lr=0x801D30E8u; f_80004364(c); // 801D30E4
L_801D30E8:;
  c->r[4]=addc(c,c->r[30],0x00000046u,0); cr0(c,c->r[4]); // 801D30E8
  if (crb(c,2)) { goto L_801D3100; } // 801D30EC
  c->r[3]=c->r[31]+0x00000D20u; // 801D30F0
  c->r[5]=0u+0x00000010u; // 801D30F4
  c->r[3]=c->r[3]+0x00000006u; // 801D30F8
  c->lr=0x801D3100u; f_80004364(c); // 801D30FC
L_801D3100:;
  cmps(c,0,(int32_t)c->r[30],0); // 801D3100
  if (crb(c,2)) { goto L_801D311C; } // 801D3104
  c->r[3]=c->r[31]+0x00000D20u; // 801D3108
  c->r[4]=c->r[30]|c->r[30]; // 801D310C
  c->r[3]=c->r[3]+0x00000016u; // 801D3110
  c->r[5]=0u+0x00000040u; // 801D3114
  c->lr=0x801D311Cu; f_80004364(c); // 801D3118
L_801D311C:;
  c->r[3]=R32(c->r[13]+0xFFFFB684u); // 801D311C
  c->r[0]=0u+0x00000008u; // 801D3120
  c->r[4]=c->r[31]+0x00000D20u; // 801D3124
  c->r[5]=rotl(c->r[3],16)&0x0000FFFFu; // 801D3128
  c->r[6]=rotl(c->r[3],0)&0x0000FFFFu; // 801D312C
  c->ctr=c->r[0]; // 801D3130
L_801D3134:;
  c->r[3]=R16(c->r[4]+0x00000000u); // 801D3134
  c->r[0]=~(c->r[3]|c->r[3]); // 801D3138
  c->r[5]=c->r[5]+c->r[3]; // 801D313C
  c->r[3]=R16(c->r[4]+0x00000002u); // 801D3140
  c->r[0]=c->r[6]+c->r[0]; // 801D3144
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801D3148
  c->r[0]=~(c->r[3]|c->r[3]); // 801D314C
  c->r[5]=c->r[5]+c->r[3]; // 801D3150
  c->r[3]=R16(c->r[4]+0x00000004u); // 801D3154
  c->r[0]=c->r[6]+c->r[0]; // 801D3158
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801D315C
  c->r[0]=~(c->r[3]|c->r[3]); // 801D3160
  c->r[5]=c->r[5]+c->r[3]; // 801D3164
  c->r[3]=R16(c->r[4]+0x00000006u); // 801D3168
  c->r[0]=c->r[6]+c->r[0]; // 801D316C
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801D3170
  c->r[0]=~(c->r[3]|c->r[3]); // 801D3174
  c->r[5]=c->r[5]+c->r[3]; // 801D3178
  c->r[3]=R16(c->r[4]+0x00000008u); // 801D317C
  c->r[0]=c->r[6]+c->r[0]; // 801D3180
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801D3184
  c->r[0]=~(c->r[3]|c->r[3]); // 801D3188
  c->r[5]=c->r[5]+c->r[3]; // 801D318C
  c->r[3]=R16(c->r[4]+0x0000000Au); // 801D3190
  c->r[0]=c->r[6]+c->r[0]; // 801D3194
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801D3198
  c->r[0]=~(c->r[3]|c->r[3]); // 801D319C
  c->r[5]=c->r[5]+c->r[3]; // 801D31A0
  c->r[3]=R16(c->r[4]+0x0000000Cu); // 801D31A4
  c->r[0]=c->r[6]+c->r[0]; // 801D31A8
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801D31AC
  c->r[0]=~(c->r[3]|c->r[3]); // 801D31B0
  c->r[5]=c->r[5]+c->r[3]; // 801D31B4
  c->r[3]=R16(c->r[4]+0x0000000Eu); // 801D31B8
  c->r[0]=c->r[6]+c->r[0]; // 801D31BC
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801D31C0
  c->r[4]=c->r[4]+0x00000010u; // 801D31C4
  c->r[0]=~(c->r[3]|c->r[3]); // 801D31C8
  c->r[5]=c->r[5]+c->r[3]; // 801D31CC
  c->r[0]=c->r[6]+c->r[0]; // 801D31D0
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801D31D4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D3134; } // 801D31D8
  c->r[6]=(rotl(c->r[5],16)&0xFFFF0000u)|(c->r[6]&~0xFFFF0000u); // 801D31DC
  c->r[3]=c->r[31]+0x00000D20u; // 801D31E0
  W32(c->r[1]+0x00000008u,c->r[6]); // 801D31E4
  c->r[3]=c->r[3]+0x00000080u; // 801D31E8
  c->r[4]=c->r[1]+0x00000008u; // 801D31EC
  c->r[5]=0u+0x00000004u; // 801D31F0
  c->lr=0x801D31F8u; f_80004364(c); // 801D31F4
L_801D31F8:;
  c->r[0]=R8(c->r[30]+0x00000056u); // 801D31F8
  c->r[4]=c->r[31]+0x00000DC0u; // 801D31FC
  c->r[5]=c->r[30]+0x00000040u; // 801D3200
  c->r[3]=0u+0x00000007u; // 801D3204
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D3208
  W32(c->r[4]+c->r[0],c->r[5]); // 801D320C
L_801D3210:;
  c->r[11]=c->r[1]+0x00000030u; // 801D3210
  c->lr=0x801D3218u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D3214
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D3218
  c->lr=c->r[0]; // 801D321C
  c->r[1]=c->r[1]+0x00000030u; // 801D3220
  return; // 801D3224
}

// __wudSyncStoredDevInfoToNand
void f_801D3230(Ctx* __restrict c) {
  trace_call(0x801D3230u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D3230
  c->r[0]=c->lr; // 801D3234
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D3238
  c->r[11]=c->r[1]+0x00000020u; // 801D323C
  c->lr=0x801D3244u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D3240
  c->r[29]=0u+0x802E0000u; // 801D3244
  c->r[29]=c->r[29]+0xFFFF9DC0u; // 801D3248
  c->lr=0x801D3250u; f_801B6640(c); // 801D324C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801D3250
  c->r[0]=cntlz(c->r[0]); // 801D3254
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 801D3258
  if (crb(c,2)) { goto L_801D3268; } // 801D325C
  c->r[3]=0u+0x00000016u; // 801D3260
  goto L_801D334C; // 801D3264
L_801D3268:;
  c->r[30]=c->r[29]+0x000008B8u; // 801D3268
  c->r[4]=0u+0x00000000u; // 801D326C
  c->r[3]=c->r[30]+0x00000001u; // 801D3270
  c->r[5]=0u+0x000002BCu; // 801D3274
  c->lr=0x801D327Cu; f_800046B4(c); // 801D3278
  c->lr=0x801D3280u; f_8018D6A0(c); // 801D327C
  c->r[31]=c->r[29]+0x00000000u; // 801D3280
  c->r[28]=R8(c->r[31]+0x00000012u); // 801D3284
  c->lr=0x801D328Cu; f_8018D6E0(c); // 801D3288
  W8(c->r[29]+0x000008B8u,c->r[28]); // 801D328C
  c->r[27]=0u+0x00000000u; // 801D3290
  c->r[31]=R32(c->r[31]+0x00000064u); // 801D3294
  goto L_801D32D8; // 801D3298
L_801D329C:;
  c->r[0]=rotl(c->r[27],0)&0x000000FFu; // 801D329C
  c->r[3]=R32(c->r[31]+0x00000000u); // 801D32A0
  c->r[28]=(uint32_t)((int32_t)c->r[0]*(int32_t)70); // 801D32A4
  c->r[5]=0u+0x00000006u; // 801D32A8
  c->r[4]=c->r[3]+0x00000040u; // 801D32AC
  c->r[3]=c->r[30]+c->r[28]; // 801D32B0
  c->r[3]=c->r[3]+0x00000001u; // 801D32B4
  c->lr=0x801D32BCu; f_80004364(c); // 801D32B8
  c->r[3]=c->r[30]+c->r[28]; // 801D32BC
  c->r[4]=R32(c->r[31]+0x00000000u); // 801D32C0
  c->r[3]=c->r[3]+0x00000007u; // 801D32C4
  c->r[5]=0u+0x00000040u; // 801D32C8
  c->lr=0x801D32D0u; f_80004364(c); // 801D32CC
  c->r[31]=R32(c->r[31]+0x00000008u); // 801D32D0
  c->r[27]=c->r[27]+0x00000001u; // 801D32D4
L_801D32D8:;
  cmps(c,0,(int32_t)c->r[31],0); // 801D32D8
  if (!crb(c,2)) { IRQCHK(c); goto L_801D329C; } // 801D32DC
  c->r[3]=0u+0x80280000u; // 801D32E0
  c->r[4]=rotl(c->r[27],0)&0x000000FFu; // 801D32E4
  c->r[3]=c->r[3]+0xFFFFCDF4u; // 801D32E8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D32EC
  c->lr=0x801D32F4u; f_801D94A0(c); // 801D32F0
  c->r[3]=c->r[29]+0x000008B8u; // 801D32F4
  c->lr=0x801D32FCu; f_801B8200(c); // 801D32F8
  cmps(c,0,(int32_t)c->r[3],0); // 801D32FC
  if (!crb(c,2)) { goto L_801D330C; } // 801D3300
  c->r[3]=0u+0x00000016u; // 801D3304
  goto L_801D334C; // 801D3308
L_801D330C:;
  c->r[0]=R32(c->r[13]+0xFFFFB680u); // 801D330C
  c->r[28]=0u+0x00000019u; // 801D3310
  cmps(c,0,(int32_t)c->r[0],0); // 801D3314
  if (crb(c,2)) { goto L_801D3348; } // 801D3318
  c->r[4]=0u+0x80280000u; // 801D331C
  c->r[3]=c->r[29]+0x00000858u; // 801D3320
  c->r[4]=c->r[4]+0xFFFFCD8Cu; // 801D3324
  c->r[5]=0u+0x00000010u; // 801D3328
  c->lr=0x801D3330u; f_8020BD24(c); // 801D332C
  cmps(c,0,(int32_t)c->r[3],0); // 801D3330
  if (!crb(c,2)) { goto L_801D3348; } // 801D3334
  c->lr=0x801D333Cu; f_801B85E0(c); // 801D3338
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[0]); // 801D333C
  if (!crb(c,2)) { goto L_801D3348; } // 801D3340
  c->r[28]=0u+0x00000064u; // 801D3344
L_801D3348:;
  c->r[3]=c->r[28]|c->r[28]; // 801D3348
L_801D334C:;
  c->r[11]=c->r[1]+0x00000020u; // 801D334C
  c->lr=0x801D3354u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D3350
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D3354
  c->lr=c->r[0]; // 801D3358
  c->r[1]=c->r[1]+0x00000020u; // 801D335C
  return; // 801D3360
}

// __wudOpenWiiFitCallback
void f_801D3370(Ctx* __restrict c) {
  trace_call(0x801D3370u);
  c->r[5]=0u+0x802E0000u; // 801D3370
  c->r[4]=c->r[3]|c->r[3]; // 801D3374
  c->r[5]=c->r[5]+0xFFFF9DC0u; // 801D3378
  c->r[0]=R8(c->r[5]+0x0000000Cu); // 801D337C
  cmps(c,0,(int32_t)c->r[0],0); // 801D3380
  if (crb(c,2)) { goto L_801D33A4; } // 801D3384
  cmps(c,0,(int32_t)c->r[3],0); // 801D3388
  c->r[0]=0u+0x00000019u; // 801D338C
  if (!crb(c,2)) { goto L_801D3398; } // 801D3390
  c->r[0]=0u+0x00000065u; // 801D3394
L_801D3398:;
  c->r[5]=0u+0x802E0000u; // 801D3398
  c->r[5]=c->r[5]+0xFFFF9DC0u; // 801D339C
  W8(c->r[5]+0x0000000Cu,c->r[0]); // 801D33A0
L_801D33A4:;
  c->r[5]=0u+0x802E0000u; // 801D33A4
  c->r[5]=c->r[5]+0xFFFF9DC0u; // 801D33A8
  c->r[0]=R8(c->r[5]+0x0000000Du); // 801D33AC
  cmps(c,0,(int32_t)c->r[0],0); // 801D33B0
  if (crb(c,2)) { goto L_801D33D4; } // 801D33B4
  cmps(c,0,(int32_t)c->r[3],0); // 801D33B8
  c->r[0]=0u+0x00000005u; // 801D33BC
  if (!crb(c,2)) { goto L_801D33C8; } // 801D33C0
  c->r[0]=0u+0x00000065u; // 801D33C4
L_801D33C8:;
  c->r[3]=0u+0x802E0000u; // 801D33C8
  c->r[3]=c->r[3]+0xFFFF9DC0u; // 801D33CC
  W8(c->r[3]+0x0000000Du,c->r[0]); // 801D33D0
L_801D33D4:;
  c->r[0]=0u+0x00000000u; // 801D33D4
  c->r[3]=0u+0x80280000u; // 801D33D8
  W8(c->r[13]+0xFFFFB68Cu,c->r[0]); // 801D33DC
  c->r[3]=c->r[3]+0xFFFFCE18u; // 801D33E0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D33E4
  f_801D94A0(c); return; // 801D33E8
}

// __wudSeekWiiFitCallback
void f_801D33F0(Ctx* __restrict c) {
  trace_call(0x801D33F0u);
  c->r[5]=0u+0x802E0000u; // 801D33F0
  c->r[4]=c->r[3]|c->r[3]; // 801D33F4
  c->r[5]=c->r[5]+0xFFFF9DC0u; // 801D33F8
  c->r[0]=R8(c->r[5]+0x0000000Cu); // 801D33FC
  cmps(c,0,(int32_t)c->r[0],0); // 801D3400
  if (crb(c,2)) { goto L_801D3428; } // 801D3404
  c->r[0]=c->r[3]+0xFFFC0000u; // 801D3408
  c->r[6]=0u+0x00000019u; // 801D340C
  cmpu(c,0,c->r[0],0x0000AF18u); // 801D3410
  if (!crb(c,2)) { goto L_801D341C; } // 801D3414
  c->r[6]=0u+0x00000066u; // 801D3418
L_801D341C:;
  c->r[5]=0u+0x802E0000u; // 801D341C
  c->r[5]=c->r[5]+0xFFFF9DC0u; // 801D3420
  W8(c->r[5]+0x0000000Cu,c->r[6]); // 801D3424
L_801D3428:;
  c->r[5]=0u+0x802E0000u; // 801D3428
  c->r[5]=c->r[5]+0xFFFF9DC0u; // 801D342C
  c->r[0]=R8(c->r[5]+0x0000000Du); // 801D3430
  cmps(c,0,(int32_t)c->r[0],0); // 801D3434
  if (crb(c,2)) { goto L_801D345C; } // 801D3438
  c->r[0]=c->r[3]+0xFFFC0000u; // 801D343C
  c->r[5]=0u+0x00000005u; // 801D3440
  cmpu(c,0,c->r[0],0x0000AF18u); // 801D3444
  if (!crb(c,2)) { goto L_801D3450; } // 801D3448
  c->r[5]=0u+0x00000066u; // 801D344C
L_801D3450:;
  c->r[3]=0u+0x802E0000u; // 801D3450
  c->r[3]=c->r[3]+0xFFFF9DC0u; // 801D3454
  W8(c->r[3]+0x0000000Du,c->r[5]); // 801D3458
L_801D345C:;
  c->r[0]=0u+0x00000000u; // 801D345C
  c->r[3]=0u+0x80280000u; // 801D3460
  W8(c->r[13]+0xFFFFB68Cu,c->r[0]); // 801D3464
  c->r[3]=c->r[3]+0xFFFFCE28u; // 801D3468
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D346C
  f_801D94A0(c); return; // 801D3470
}

// __wudUpdateWiiFitCallback
void f_801D3480(Ctx* __restrict c) {
  trace_call(0x801D3480u);
  c->r[5]=0u+0x802E0000u; // 801D3480
  c->r[4]=c->r[3]|c->r[3]; // 801D3484
  c->r[5]=c->r[5]+0xFFFF9DC0u; // 801D3488
  c->r[0]=R8(c->r[5]+0x0000000Cu); // 801D348C
  cmps(c,0,(int32_t)c->r[0],0); // 801D3490
  if (crb(c,2)) { goto L_801D34B4; } // 801D3494
  cmps(c,0,(int32_t)c->r[3],132); // 801D3498
  c->r[0]=0u+0x00000019u; // 801D349C
  if (!crb(c,2)) { goto L_801D34A8; } // 801D34A0
  c->r[0]=0u+0x00000067u; // 801D34A4
L_801D34A8:;
  c->r[5]=0u+0x802E0000u; // 801D34A8
  c->r[5]=c->r[5]+0xFFFF9DC0u; // 801D34AC
  W8(c->r[5]+0x0000000Cu,c->r[0]); // 801D34B0
L_801D34B4:;
  c->r[5]=0u+0x802E0000u; // 801D34B4
  c->r[5]=c->r[5]+0xFFFF9DC0u; // 801D34B8
  c->r[0]=R8(c->r[5]+0x0000000Du); // 801D34BC
  cmps(c,0,(int32_t)c->r[0],0); // 801D34C0
  if (crb(c,2)) { goto L_801D34E4; } // 801D34C4
  cmps(c,0,(int32_t)c->r[3],132); // 801D34C8
  c->r[0]=0u+0x00000005u; // 801D34CC
  if (!crb(c,2)) { goto L_801D34D8; } // 801D34D0
  c->r[0]=0u+0x00000067u; // 801D34D4
L_801D34D8:;
  c->r[3]=0u+0x802E0000u; // 801D34D8
  c->r[3]=c->r[3]+0xFFFF9DC0u; // 801D34DC
  W8(c->r[3]+0x0000000Du,c->r[0]); // 801D34E0
L_801D34E4:;
  c->r[0]=0u+0x00000000u; // 801D34E4
  c->r[3]=0u+0x80280000u; // 801D34E8
  W8(c->r[13]+0xFFFFB68Cu,c->r[0]); // 801D34EC
  c->r[3]=c->r[3]+0xFFFFCE38u; // 801D34F0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D34F4
  f_801D94A0(c); return; // 801D34F8
}

// __wudCloseWiiFitCallback
void f_801D3500(Ctx* __restrict c) {
  trace_call(0x801D3500u);
  c->r[5]=0u+0x802E0000u; // 801D3500
  c->r[4]=c->r[3]|c->r[3]; // 801D3504
  c->r[5]=c->r[5]+0xFFFF9DC0u; // 801D3508
  c->r[0]=R8(c->r[5]+0x0000000Cu); // 801D350C
  cmps(c,0,(int32_t)c->r[0],0); // 801D3510
  if (crb(c,2)) { goto L_801D3520; } // 801D3514
  c->r[0]=0u+0x00000019u; // 801D3518
  W8(c->r[5]+0x0000000Cu,c->r[0]); // 801D351C
L_801D3520:;
  c->r[3]=0u+0x802E0000u; // 801D3520
  c->r[3]=c->r[3]+0xFFFF9DC0u; // 801D3524
  c->r[0]=R8(c->r[3]+0x0000000Du); // 801D3528
  cmps(c,0,(int32_t)c->r[0],0); // 801D352C
  if (crb(c,2)) { goto L_801D353C; } // 801D3530
  c->r[0]=0u+0x00000005u; // 801D3534
  W8(c->r[3]+0x0000000Du,c->r[0]); // 801D3538
L_801D353C:;
  c->r[0]=0u+0x00000000u; // 801D353C
  c->r[3]=0u+0x80280000u; // 801D3540
  W8(c->r[13]+0xFFFFB68Cu,c->r[0]); // 801D3544
  c->r[3]=c->r[3]+0xFFFFCE4Cu; // 801D3548
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D354C
  f_801D94A0(c); return; // 801D3550
}

// __wudSyncDone
void f_801D3560(Ctx* __restrict c) {
  trace_call(0x801D3560u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D3560
  c->r[0]=c->lr; // 801D3564
  c->r[3]=0u+0x802E0000u; // 801D3568
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D356C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801D3570
  W32(c->r[1]+0x00000028u,c->r[30]); // 801D3574
  W32(c->r[1]+0x00000024u,c->r[29]); // 801D3578
  c->r[29]=c->r[3]+0xFFFF9DC0u; // 801D357C
  W32(c->r[1]+0x00000020u,c->r[28]); // 801D3580
  c->r[0]=R8(c->r[29]+0x000006E7u); // 801D3584
  cmps(c,0,(int32_t)c->r[0],0); // 801D3588
  if (crb(c,2)) { goto L_801D3624; } // 801D358C
  c->r[28]=0u+0x00000000u; // 801D3590
  c->r[30]=0u+0x00000000u; // 801D3594
L_801D3598:;
  c->lr=0x801D359Cu; f_8018D6A0(c); // 801D3598
  cmpu(c,0,c->r[28],0x00000009u); // 801D359C
  if (crb(c,1)) { goto L_801D35B0; } // 801D35A0
  c->r[4]=c->r[29]+c->r[30]; // 801D35A4
  c->r[31]=c->r[4]+0x000000E4u; // 801D35A8
  goto L_801D35C0; // 801D35AC
L_801D35B0:;
  c->r[0]=c->r[28]+0xFFFFFFF6u; // 801D35B0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)96); // 801D35B4
  c->r[4]=c->r[29]+c->r[0]; // 801D35B8
  c->r[31]=c->r[4]+0x000004A4u; // 801D35BC
L_801D35C0:;
  c->lr=0x801D35C4u; f_8018D6E0(c); // 801D35C0
  c->r[0]=R8(c->r[31]+0x00000059u); // 801D35C4
  cmpu(c,0,c->r[0],0x00000008u); // 801D35C8
  if (!crb(c,2)) { goto L_801D3614; } // 801D35CC
  c->r[3]=0u+0x802E0000u; // 801D35D0
  c->r[7]=0u+0x00000008u; // 801D35D4
  c->r[3]=c->r[3]+0xFFFF9DC0u; // 801D35D8
  c->r[4]=0u+0x00000002u; // 801D35DC
  c->r[6]=0u+0x00000001u; // 801D35E0
  c->r[0]=0u+0x00000000u; // 801D35E4
  W8(c->r[1]+0x00000010u,c->r[4]); // 801D35E8
  c->r[4]=c->r[31]+0x00000040u; // 801D35EC
  c->r[3]=R8(c->r[3]+0x0000070Au); // 801D35F0
  c->r[5]=c->r[1]+0x00000008u; // 801D35F4
  W16(c->r[1]+0x00000008u,c->r[7]); // 801D35F8
  W16(c->r[1]+0x0000000Au,c->r[7]); // 801D35FC
  W16(c->r[1]+0x0000000Cu,c->r[6]); // 801D3600
  W16(c->r[1]+0x0000000Eu,c->r[0]); // 801D3604
  c->lr=0x801D360Cu; f_801E870C(c); // 801D3608
  c->r[3]=0u+0x0000000Eu; // 801D360C
  goto L_801D36A8; // 801D3610
L_801D3614:;
  c->r[28]=c->r[28]+0x00000001u; // 801D3614
  c->r[30]=c->r[30]+0x00000060u; // 801D3618
  cmps(c,0,(int32_t)c->r[28],16); // 801D361C
  if (crb(c,0)) { IRQCHK(c); goto L_801D3598; } // 801D3620
L_801D3624:;
  c->r[3]=c->r[29]+0x00000710u; // 801D3624
  c->lr=0x801D362Cu; f_80187FA0(c); // 801D3628
  c->r[0]=R32(c->r[13]+0xFFFFB670u); // 801D362C
  cmps(c,0,(int32_t)c->r[0],0); // 801D3630
  if (!crb(c,2)) { goto L_801D3664; } // 801D3634
  c->lr=0x801D363Cu; f_8018D6A0(c); // 801D3638
  c->r[4]=0u+0x802E0000u; // 801D363C
  c->r[5]=0u+0x00000000u; // 801D3640
  c->r[4]=c->r[4]+0xFFFF9DC0u; // 801D3644
  c->r[0]=0u+0x00000001u; // 801D3648
  W8(c->r[4]+0x000006EBu,c->r[5]); // 801D364C
  W8(c->r[4]+0x000006EAu,c->r[0]); // 801D3650
  c->lr=0x801D3658u; f_8018D6E0(c); // 801D3654
  c->r[3]=0u+0x00000000u; // 801D3658
  c->r[4]=0u+0x00000001u; // 801D365C
  c->lr=0x801D3664u; f_801DF9EC(c); // 801D3660
L_801D3664:;
  c->r[0]=R8(c->r[29]+0x000006E9u); // 801D3664
  cmps(c,0,(int32_t)c->r[0],0); // 801D3668
  if (!crb(c,2)) { goto L_801D3678; } // 801D366C
  c->r[12]=R32(c->r[29]+0x00000000u); // 801D3670
  goto L_801D367C; // 801D3674
L_801D3678:;
  c->r[12]=R32(c->r[29]+0x00000004u); // 801D3678
L_801D367C:;
  cmps(c,0,(int32_t)c->r[12],0); // 801D367C
  if (crb(c,2)) { goto L_801D3694; } // 801D3680
  c->r[4]=R8(c->r[29]+0x000006E6u); // 801D3684
  c->r[3]=0u+0x00000001u; // 801D3688
  c->ctr=c->r[12]; // 801D368C
  if (true) { c->lr=0x801D3694u; dispatch(c,c->ctr); } // 801D3690
L_801D3694:;
  c->r[3]=0u+0x80280000u; // 801D3694
  c->r[3]=c->r[3]+0xFFFFCE60u; // 801D3698
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D369C
  c->lr=0x801D36A4u; f_801D94A0(c); // 801D36A0
  c->r[3]=0u+0x00000000u; // 801D36A4
L_801D36A8:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D36A8
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801D36AC
  c->r[30]=R32(c->r[1]+0x00000028u); // 801D36B0
  c->r[29]=R32(c->r[1]+0x00000024u); // 801D36B4
  c->r[28]=R32(c->r[1]+0x00000020u); // 801D36B8
  c->lr=c->r[0]; // 801D36BC
  c->r[1]=c->r[1]+0x00000030u; // 801D36C0
  return; // 801D36C4
}

// __wudSyncHandler
void f_801D36D0(Ctx* __restrict c) {
  trace_call(0x801D36D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D36D0
  c->r[0]=c->lr; // 801D36D4
  W32(c->r[1]+0x00000064u,c->r[0]); // 801D36D8
  c->r[11]=c->r[1]+0x00000060u; // 801D36DC
  c->lr=0x801D36E4u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D36E0
  c->r[31]=0u+0x802E0000u; // 801D36E4
  c->r[30]=0u+0x80280000u; // 801D36E8
  c->r[31]=c->r[31]+0xFFFF9DC0u; // 801D36EC
  c->r[28]=c->r[31]+0x00000000u; // 801D36F0
  c->r[30]=c->r[30]+0xFFFFCB10u; // 801D36F4
  c->r[0]=R8(c->r[28]+0x0000000Cu); // 801D36F8
  cmps(c,0,(int32_t)c->r[0],19); // 801D36FC
  if (crb(c,2)) { goto L_801D3BD4; } // 801D3700
  if (!crb(c,0)) { goto L_801D3784; } // 801D3704
  cmps(c,0,(int32_t)c->r[0],9); // 801D3708
  if (crb(c,2)) { goto L_801D4190; } // 801D370C
  if (!crb(c,0)) { goto L_801D3750; } // 801D3710
  cmps(c,0,(int32_t)c->r[0],4); // 801D3714
  if (crb(c,2)) { goto L_801D3930; } // 801D3718
  if (!crb(c,0)) { goto L_801D3738; } // 801D371C
  cmps(c,0,(int32_t)c->r[0],2); // 801D3720
  if (crb(c,2)) { goto L_801D386C; } // 801D3724
  if (!crb(c,0)) { goto L_801D3F50; } // 801D3728
  cmps(c,0,(int32_t)c->r[0],1); // 801D372C
  if (!crb(c,0)) { goto L_801D37F4; } // 801D3730
  goto L_801D4190; // 801D3734
L_801D3738:;
  cmps(c,0,(int32_t)c->r[0],7); // 801D3738
  if (crb(c,2)) { goto L_801D3D0C; } // 801D373C
  if (!crb(c,0)) { goto L_801D3E3C; } // 801D3740
  cmps(c,0,(int32_t)c->r[0],6); // 801D3744
  if (!crb(c,0)) { goto L_801D419C; } // 801D3748
  goto L_801D3A1C; // 801D374C
L_801D3750:;
  cmps(c,0,(int32_t)c->r[0],15); // 801D3750
  if (crb(c,2)) { goto L_801D3B58; } // 801D3754
  if (!crb(c,0)) { goto L_801D3774; } // 801D3758
  cmps(c,0,(int32_t)c->r[0],13); // 801D375C
  if (crb(c,2)) { goto L_801D419C; } // 801D3760
  if (!crb(c,0)) { goto L_801D3F44; } // 801D3764
  cmps(c,0,(int32_t)c->r[0],11); // 801D3768
  if (!crb(c,0)) { goto L_801D4190; } // 801D376C
  goto L_801D3E9C; // 801D3770
L_801D3774:;
  cmps(c,0,(int32_t)c->r[0],17); // 801D3774
  if (crb(c,2)) { goto L_801D3AF0; } // 801D3778
  if (!crb(c,0)) { goto L_801D3B64; } // 801D377C
  goto L_801D3A4C; // 801D3780
L_801D3784:;
  cmps(c,0,(int32_t)c->r[0],29); // 801D3784
  if (crb(c,2)) { goto L_801D3800; } // 801D3788
  if (!crb(c,0)) { goto L_801D37C4; } // 801D378C
  cmps(c,0,(int32_t)c->r[0],24); // 801D3790
  if (crb(c,2)) { goto L_801D3F9C; } // 801D3794
  if (!crb(c,0)) { goto L_801D37B4; } // 801D3798
  cmps(c,0,(int32_t)c->r[0],22); // 801D379C
  if (crb(c,2)) { goto L_801D3E70; } // 801D37A0
  if (!crb(c,0)) { goto L_801D3ED8; } // 801D37A4
  cmps(c,0,(int32_t)c->r[0],21); // 801D37A8
  if (!crb(c,0)) { goto L_801D3CE8; } // 801D37AC
  goto L_801D3CDC; // 801D37B0
L_801D37B4:;
  cmps(c,0,(int32_t)c->r[0],26); // 801D37B4
  if (crb(c,2)) { goto L_801D419C; } // 801D37B8
  if (!crb(c,0)) { goto L_801D4190; } // 801D37BC
  goto L_801D3E7C; // 801D37C0
L_801D37C4:;
  cmps(c,0,(int32_t)c->r[0],103); // 801D37C4
  if (crb(c,2)) { goto L_801D4164; } // 801D37C8
  if (!crb(c,0)) { goto L_801D37E8; } // 801D37CC
  cmps(c,0,(int32_t)c->r[0],101); // 801D37D0
  if (crb(c,2)) { goto L_801D4038; } // 801D37D4
  if (!crb(c,0)) { goto L_801D4070; } // 801D37D8
  cmps(c,0,(int32_t)c->r[0],100); // 801D37DC
  if (!crb(c,0)) { goto L_801D3FF0; } // 801D37E0
  goto L_801D4190; // 801D37E4
L_801D37E8:;
  cmps(c,0,(int32_t)c->r[0],255); // 801D37E8
  if (crb(c,2)) { goto L_801D3F14; } // 801D37EC
  goto L_801D4190; // 801D37F0
L_801D37F4:;
  c->lr=0x801D37F8u; f_801D2BE0(c); // 801D37F4
  W8(c->r[28]+0x0000000Cu,c->r[3]); // 801D37F8
  goto L_801D419C; // 801D37FC
L_801D3800:;
  c->r[0]=R8(c->r[28]+0x000006E8u); // 801D3800
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801D3804
  if (!crb(c,2)) { goto L_801D3814; } // 801D3808
  c->r[0]=0u+0x0000000Eu; // 801D380C
  goto L_801D3864; // 801D3810
L_801D3814:;
  c->lr=0x801D3818u; f_8018D6A0(c); // 801D3814
  c->r[29]=R8(c->r[28]+0x000006E5u); // 801D3818
  c->lr=0x801D3820u; f_8018D6E0(c); // 801D381C
  cmpu(c,0,c->r[29],0x00000004u); // 801D3820
  if (!crb(c,2)) { goto L_801D3844; } // 801D3824
  c->lr=0x801D382Cu; f_8018D6A0(c); // 801D3828
  c->r[29]=R8(c->r[28]+0x000006E4u); // 801D382C
  c->lr=0x801D3834u; f_8018D6E0(c); // 801D3830
  cmpu(c,0,c->r[29],0x00000004u); // 801D3834
  if (!crb(c,2)) { goto L_801D3844; } // 801D3838
  c->r[0]=0u+0x0000000Eu; // 801D383C
  goto L_801D3864; // 801D3840
L_801D3844:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[28]+0x00000748u); // 801D3844
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801D3848
  W16(c->r[28]+0x00000748u,c->r[0]); // 801D384C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[0]; cr0(c,c->r[0]); // 801D3850
  if (!crb(c,0)) { goto L_801D3860; } // 801D3854
  c->r[0]=0u+0x00000002u; // 801D3858
  goto L_801D3864; // 801D385C
L_801D3860:;
  c->r[0]=0u+0x0000001Du; // 801D3860
L_801D3864:;
  W8(c->r[28]+0x0000000Cu,c->r[0]); // 801D3864
  goto L_801D419C; // 801D3868
L_801D386C:;
  c->r[0]=R8(c->r[28]+0x000006E7u); // 801D386C
  c->r[4]=0u+0x00000001u; // 801D3870
  c->r[3]=0u+0x00000000u; // 801D3874
  W8(c->r[1]+0x00000030u,c->r[4]); // 801D3878
  cmps(c,0,(int32_t)c->r[0],0); // 801D387C
  W8(c->r[1]+0x00000032u,c->r[4]); // 801D3880
  W8(c->r[1]+0x00000033u,c->r[3]); // 801D3884
  if (crb(c,2)) { goto L_801D3898; } // 801D3888
  c->r[0]=0u+0x00000003u; // 801D388C
  W8(c->r[1]+0x00000031u,c->r[0]); // 801D3890
  goto L_801D38F8; // 801D3894
L_801D3898:;
  c->r[0]=R8(c->r[28]+0x000006E9u); // 801D3898
  cmps(c,0,(int32_t)c->r[0],0); // 801D389C
  if (!crb(c,2)) { goto L_801D38D4; } // 801D38A0
  c->lr=0x801D38A8u; f_8018D6A0(c); // 801D38A4
  c->r[29]=R8(c->r[28]+0x000006E5u); // 801D38A8
  c->lr=0x801D38B0u; f_8018D6E0(c); // 801D38AC
  cmpu(c,0,c->r[29],0x00000003u); // 801D38B0
  if (!crb(c,2)) { goto L_801D38C0; } // 801D38B4
  c->r[3]=0u+0x0000000Au; // 801D38B8
  goto L_801D38C4; // 801D38BC
L_801D38C0:;
  c->r[3]=0u+0x00000005u; // 801D38C0
L_801D38C4:;
  c->r[0]=R8(c->r[28]+0x000006E8u); // 801D38C4
  c->r[0]=c->r[3]-c->r[0]; // 801D38C8
  W8(c->r[1]+0x00000031u,c->r[0]); // 801D38CC
  goto L_801D38F8; // 801D38D0
L_801D38D4:;
  c->lr=0x801D38D8u; f_8018D6A0(c); // 801D38D4
  c->r[29]=R8(c->r[28]+0x000006E5u); // 801D38D8
  c->lr=0x801D38E0u; f_8018D6E0(c); // 801D38DC
  cmpu(c,0,c->r[29],0x00000003u); // 801D38E0
  if (!crb(c,2)) { goto L_801D38F0; } // 801D38E4
  c->r[0]=0u+0x00000008u; // 801D38E8
  goto L_801D38F4; // 801D38EC
L_801D38F0:;
  c->r[0]=0u+0x00000003u; // 801D38F0
L_801D38F4:;
  W8(c->r[1]+0x00000031u,c->r[0]); // 801D38F4
L_801D38F8:;
  c->r[0]=0u+0x00000000u; // 801D38F8
  W8(c->r[13]+0xFFFFB69Fu,c->r[0]); // 801D38FC
  c->r[3]=c->r[31]+0x00000750u; // 801D3900
  c->r[4]=0u+0x00000000u; // 801D3904
  c->r[5]=0u+0x00000108u; // 801D3908
  c->lr=0x801D3910u; f_800046B4(c); // 801D390C
  c->r[5]=0u+0x801E0000u; // 801D3910
  c->r[3]=c->r[1]+0x00000030u; // 801D3914
  c->r[5]=c->r[5]+0xFFFF81F0u; // 801D3918
  c->r[4]=0u+0x00000000u; // 801D391C
  c->lr=0x801D3924u; f_801DFA44(c); // 801D3920
  c->r[0]=0u+0x00000003u; // 801D3924
  W8(c->r[28]+0x0000000Cu,c->r[0]); // 801D3928
  goto L_801D419C; // 801D392C
L_801D3930:;
  c->r[0]=R8(c->r[13]+0xFFFFB69Fu); // 801D3930
  c->r[29]=0u+0x00000001u; // 801D3934
  cmps(c,0,(int32_t)c->r[0],0); // 801D3938
  if (crb(c,2)) { goto L_801D39AC; } // 801D393C
  c->r[3]=c->r[31]+0x00000750u; // 801D3940
  c->r[4]=c->r[30]+0x00000268u; // 801D3944
  c->r[3]=c->r[3]+0x00000006u; // 801D3948
  c->r[5]=0u+0x00000010u; // 801D394C
  c->lr=0x801D3954u; f_8020BD24(c); // 801D3950
  cmps(c,0,(int32_t)c->r[3],0); // 801D3954
  if (!crb(c,2)) { goto L_801D3960; } // 801D3958
  c->r[29]=0u+0x00000005u; // 801D395C
L_801D3960:;
  c->r[0]=R32(c->r[13]+0xFFFFB680u); // 801D3960
  cmps(c,0,(int32_t)c->r[0],0); // 801D3964
  if (crb(c,2)) { goto L_801D398C; } // 801D3968
  c->r[3]=c->r[31]+0x00000750u; // 801D396C
  c->r[4]=c->r[30]+0x0000027Cu; // 801D3970
  c->r[3]=c->r[3]+0x00000006u; // 801D3974
  c->r[5]=0u+0x00000010u; // 801D3978
  c->lr=0x801D3980u; f_8020BD24(c); // 801D397C
  cmps(c,0,(int32_t)c->r[3],0); // 801D3980
  if (!crb(c,2)) { goto L_801D398C; } // 801D3984
  c->r[29]=0u+0x00000005u; // 801D3988
L_801D398C:;
  c->r[3]=c->r[31]+0x00000000u; // 801D398C
  c->r[4]=R8(c->r[13]+0xFFFFB69Eu); // 801D3990
  c->r[0]=R8(c->r[3]+0x0000070Bu); // 801D3994
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 801D3998
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801D399C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801D39A0
  if (!crb(c,0)) { goto L_801D39AC; } // 801D39A4
  c->r[29]=0u+0x00000001u; // 801D39A8
L_801D39AC:;
  c->r[30]=c->r[31]+0x00000000u; // 801D39AC
  c->r[0]=R8(c->r[30]+0x000006E9u); // 801D39B0
  cmps(c,0,(int32_t)c->r[0],0); // 801D39B4
  if (!crb(c,2)) { goto L_801D3A14; } // 801D39B8
  cmpu(c,0,c->r[29],0x00000001u); // 801D39BC
  if (!crb(c,2)) { goto L_801D3A14; } // 801D39C0
  c->r[29]=0u+0x00000018u; // 801D39C4
  c->lr=0x801D39CCu; f_8018D6A0(c); // 801D39C8
  c->r[30]=R8(c->r[30]+0x000006E5u); // 801D39CC
  c->lr=0x801D39D4u; f_8018D6E0(c); // 801D39D0
  cmpu(c,0,c->r[30],0x00000003u); // 801D39D4
  if (!crb(c,2)) { goto L_801D39E4; } // 801D39D8
  c->r[0]=0u+0x000000C8u; // 801D39DC
  goto L_801D39E8; // 801D39E0
L_801D39E4:;
  c->r[0]=0u+0x00000064u; // 801D39E4
L_801D39E8:;
  c->r[30]=c->r[31]+0x00000000u; // 801D39E8
  W16(c->r[30]+0x0000074Au,c->r[0]); // 801D39EC
  c->lr=0x801D39F4u; f_8018D6A0(c); // 801D39F0
  c->r[4]=0u+0x00000000u; // 801D39F4
  c->r[0]=0u+0x00000001u; // 801D39F8
  W8(c->r[30]+0x000006EBu,c->r[4]); // 801D39FC
  W8(c->r[30]+0x000006EAu,c->r[0]); // 801D3A00
  c->lr=0x801D3A08u; f_8018D6E0(c); // 801D3A04
  c->r[3]=0u+0x00000000u; // 801D3A08
  c->r[4]=0u+0x00000001u; // 801D3A0C
  c->lr=0x801D3A14u; f_801DF9EC(c); // 801D3A10
L_801D3A14:;
  W8(c->r[28]+0x0000000Cu,c->r[29]); // 801D3A14
  goto L_801D419C; // 801D3A18
L_801D3A1C:;
  c->r[3]=c->r[31]+0x00000750u; // 801D3A1C
  c->r[29]=0u+0x00000011u; // 801D3A20
  c->lr=0x801D3A28u; f_801D71D0(c); // 801D3A24
  cmps(c,0,(int32_t)c->r[3],0); // 801D3A28
  if (crb(c,2)) { goto L_801D3A44; } // 801D3A2C
  c->r[4]=c->r[3]|c->r[3]; // 801D3A30
  c->r[3]=c->r[31]+0x00000858u; // 801D3A34
  c->r[5]=0u+0x00000060u; // 801D3A38
  c->lr=0x801D3A40u; f_80004364(c); // 801D3A3C
  c->r[29]=0u+0x00000010u; // 801D3A40
L_801D3A44:;
  W8(c->r[28]+0x0000000Cu,c->r[29]); // 801D3A44
  goto L_801D419C; // 801D3A48
L_801D3A4C:;
  c->r[29]=c->r[31]+0x00000858u; // 801D3A4C
  c->r[3]=0u+0x00000001u; // 801D3A50
  c->r[0]=R8(c->r[29]+0x0000005Bu); // 801D3A54
  W8(c->r[29]+0x00000059u,c->r[3]); // 801D3A58
  cmps(c,0,(int32_t)c->r[0],2); // 801D3A5C
  if (crb(c,2)) { goto L_801D3A8C; } // 801D3A60
  if (!crb(c,0)) { goto L_801D3A78; } // 801D3A64
  cmps(c,0,(int32_t)c->r[0],0); // 801D3A68
  if (crb(c,2)) { goto L_801D3A8C; } // 801D3A6C
  if (!crb(c,0)) { goto L_801D3AC0; } // 801D3A70
  goto L_801D3AE4; // 801D3A74
L_801D3A78:;
  cmps(c,0,(int32_t)c->r[0],6); // 801D3A78
  if (!crb(c,0)) { goto L_801D3AE4; } // 801D3A7C
  cmps(c,0,(int32_t)c->r[0],4); // 801D3A80
  if (!crb(c,0)) { goto L_801D3A8C; } // 801D3A84
  goto L_801D3AC0; // 801D3A88
L_801D3A8C:;
  c->r[3]=c->r[31]+0x00000000u; // 801D3A8C
  c->r[0]=R8(c->r[3]+0x000006E9u); // 801D3A90
  cmps(c,0,(int32_t)c->r[0],0); // 801D3A94
  if (!crb(c,2)) { goto L_801D3AB4; } // 801D3A98
  c->r[3]=c->r[29]|c->r[29]; // 801D3A9C
  c->lr=0x801D3AA4u; f_801D7780(c); // 801D3AA0
  c->r[3]=c->r[29]+0x00000040u; // 801D3AA4
  c->lr=0x801D3AACu; f_801D7050(c); // 801D3AA8
  c->r[0]=0u+0x00000011u; // 801D3AAC
  goto L_801D3AE8; // 801D3AB0
L_801D3AB4:;
  c->r[0]=0u+0x00000004u; // 801D3AB4
  W8(c->r[29]+0x0000005Bu,c->r[0]); // 801D3AB8
  goto L_801D3AE4; // 801D3ABC
L_801D3AC0:;
  c->r[3]=c->r[29]|c->r[29]; // 801D3AC0
  c->lr=0x801D3AC8u; f_801D73D0(c); // 801D3AC4
  c->r[3]=c->r[31]+0x00000000u; // 801D3AC8
  c->r[3]=R32(c->r[3]+0x00000018u); // 801D3ACC
  c->r[3]=R32(c->r[3]+0x00000000u); // 801D3AD0
  c->r[3]=c->r[3]+0x00000040u; // 801D3AD4
  c->lr=0x801D3ADCu; f_801D7050(c); // 801D3AD8
  c->r[0]=0u+0x00000011u; // 801D3ADC
  goto L_801D3AE8; // 801D3AE0
L_801D3AE4:;
  c->r[0]=0u+0x0000000Fu; // 801D3AE4
L_801D3AE8:;
  W8(c->r[28]+0x0000000Cu,c->r[0]); // 801D3AE8
  goto L_801D419C; // 801D3AEC
L_801D3AF0:;
  c->r[0]=R8(c->r[28]+0x000006E9u); // 801D3AF0
  c->r[29]=c->r[31]+0x00000858u; // 801D3AF4
  c->r[3]=0u+0x00000001u; // 801D3AF8
  W8(c->r[29]+0x00000059u,c->r[3]); // 801D3AFC
  cmps(c,0,(int32_t)c->r[0],0); // 801D3B00
  if (!crb(c,2)) { goto L_801D3B10; } // 801D3B04
  c->r[0]=0u+0x00000000u; // 801D3B08
  goto L_801D3B14; // 801D3B0C
L_801D3B10:;
  c->r[0]=0u+0x00000001u; // 801D3B10
L_801D3B14:;
  W8(c->r[29]+0x0000005Bu,c->r[0]); // 801D3B14
  c->r[3]=c->r[29]+0x00000040u; // 801D3B18
  c->r[4]=c->r[31]+0x00000750u; // 801D3B1C
  c->r[5]=0u+0x00000006u; // 801D3B20
  c->lr=0x801D3B28u; f_80004364(c); // 801D3B24
  c->r[4]=c->r[31]+0x00000750u; // 801D3B28
  c->r[3]=c->r[29]|c->r[29]; // 801D3B2C
  c->r[4]=c->r[4]+0x00000006u; // 801D3B30
  c->r[5]=0u+0x00000040u; // 801D3B34
  c->lr=0x801D3B3Cu; f_80004364(c); // 801D3B38
  c->r[3]=c->r[29]+0x00000046u; // 801D3B3C
  c->r[4]=0u+0x00000000u; // 801D3B40
  c->r[5]=0u+0x00000010u; // 801D3B44
  c->lr=0x801D3B4Cu; f_800046B4(c); // 801D3B48
  c->r[0]=0u+0x0000000Fu; // 801D3B4C
  W8(c->r[28]+0x0000000Cu,c->r[0]); // 801D3B50
  goto L_801D419C; // 801D3B54
L_801D3B58:;
  c->lr=0x801D3B5Cu; f_801D2D40(c); // 801D3B58
  W8(c->r[28]+0x0000000Cu,c->r[3]); // 801D3B5C
  goto L_801D419C; // 801D3B60
L_801D3B64:;
  c->r[3]=c->r[31]+0x00000858u; // 801D3B64
  c->r[0]=R8(c->r[3]+0x0000005Bu); // 801D3B68
  cmps(c,0,(int32_t)c->r[0],3); // 801D3B6C
  if (crb(c,2)) { goto L_801D3BB8; } // 801D3B70
  if (!crb(c,0)) { goto L_801D3B90; } // 801D3B74
  cmps(c,0,(int32_t)c->r[0],1); // 801D3B78
  if (crb(c,2)) { goto L_801D3BA0; } // 801D3B7C
  if (!crb(c,0)) { goto L_801D3BC8; } // 801D3B80
  cmps(c,0,(int32_t)c->r[0],0); // 801D3B84
  if (!crb(c,0)) { goto L_801D3BA8; } // 801D3B88
  goto L_801D3BCC; // 801D3B8C
L_801D3B90:;
  cmps(c,0,(int32_t)c->r[0],5); // 801D3B90
  if (crb(c,2)) { goto L_801D3BB0; } // 801D3B94
  if (!crb(c,0)) { goto L_801D3BCC; } // 801D3B98
  goto L_801D3BC0; // 801D3B9C
L_801D3BA0:;
  c->r[0]=0u+0x00000013u; // 801D3BA0
  goto L_801D3BCC; // 801D3BA4
L_801D3BA8:;
  c->r[0]=0u+0x00000014u; // 801D3BA8
  goto L_801D3BCC; // 801D3BAC
L_801D3BB0:;
  c->r[0]=0u+0x00000015u; // 801D3BB0
  goto L_801D3BCC; // 801D3BB4
L_801D3BB8:;
  c->r[0]=0u+0x00000017u; // 801D3BB8
  goto L_801D3BCC; // 801D3BBC
L_801D3BC0:;
  c->r[0]=0u+0x00000007u; // 801D3BC0
  goto L_801D3BCC; // 801D3BC4
L_801D3BC8:;
  c->r[0]=0u+0x00000007u; // 801D3BC8
L_801D3BCC:;
  W8(c->r[28]+0x0000000Cu,c->r[0]); // 801D3BCC
  goto L_801D419C; // 801D3BD0
L_801D3BD4:;
  c->lr=0x801D3BD8u; f_8018D6A0(c); // 801D3BD4
  c->r[25]=R8(c->r[28]+0x00000013u); // 801D3BD8
  c->lr=0x801D3BE0u; f_8018D6E0(c); // 801D3BDC
  cmpu(c,0,c->r[25],0x00000006u); // 801D3BE0
  if (!crb(c,2)) { goto L_801D3BF8; } // 801D3BE4
  c->r[3]=R32(c->r[28]+0x00000018u); // 801D3BE8
  c->r[3]=R32(c->r[3]+0x00000000u); // 801D3BEC
  c->r[3]=c->r[3]+0x00000040u; // 801D3BF0
  c->lr=0x801D3BF8u; f_801D7050(c); // 801D3BF4
L_801D3BF8:;
  c->r[29]=c->r[31]+0x00000000u; // 801D3BF8
  c->lr=0x801D3C00u; f_8018D6A0(c); // 801D3BFC
  c->r[0]=R8(c->r[29]+0x000006E9u); // 801D3C00
  c->r[27]=c->r[3]|c->r[3]; // 801D3C04
  cmps(c,0,(int32_t)c->r[0],0); // 801D3C08
  if (!crb(c,2)) { goto L_801D3C68; } // 801D3C0C
  c->r[0]=0u+0x0000000Au; // 801D3C10
  c->r[25]=0u+0x00000000u; // 801D3C14
  c->r[26]=0u+0x00000000u; // 801D3C18
  c->r[3]=0u+0x00000000u; // 801D3C1C
  c->ctr=c->r[0]; // 801D3C20
  c->r[0]=c->r[0]|0x00000000u; // 801D3C24
L_801D3C28:;
  c->r[4]=c->r[29]+c->r[3]; // 801D3C28
  c->r[0]=R8(c->r[4]+0x0000013Du); // 801D3C2C
  cmps(c,0,(int32_t)c->r[0],0); // 801D3C30
  if (!crb(c,2)) { goto L_801D3C58; } // 801D3C34
  c->r[4]=c->r[26]|c->r[26]; // 801D3C38
  c->r[3]=c->r[30]+0x000002CCu; // 801D3C3C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D3C40
  c->lr=0x801D3C48u; f_801D94A0(c); // 801D3C44
  c->r[0]=(uint32_t)((int32_t)c->r[26]*(int32_t)96); // 801D3C48
  c->r[3]=c->r[29]+c->r[0]; // 801D3C4C
  c->r[25]=c->r[3]+0x000000E4u; // 801D3C50
  goto L_801D3C70; // 801D3C54
L_801D3C58:;
  c->r[26]=c->r[26]+0x00000001u; // 801D3C58
  c->r[3]=c->r[3]+0x00000060u; // 801D3C5C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D3C28; } // 801D3C60
  goto L_801D3C70; // 801D3C64
L_801D3C68:;
  c->r[3]=R32(c->r[29]+0x00000018u); // 801D3C68
  c->r[25]=R32(c->r[3]+0x00000000u); // 801D3C6C
L_801D3C70:;
  c->r[3]=c->r[27]|c->r[27]; // 801D3C70
  c->lr=0x801D3C78u; f_8018D6E0(c); // 801D3C74
  cmps(c,0,(int32_t)c->r[25],0); // 801D3C78
  if (!crb(c,2)) { goto L_801D3C88; } // 801D3C7C
  c->r[5]=0u+0x000000FFu; // 801D3C80
  goto L_801D3CD4; // 801D3C84
L_801D3C88:;
  c->r[0]=R8(c->r[25]+0x00000059u); // 801D3C88
  cmps(c,0,(int32_t)c->r[0],0); // 801D3C8C
  if (crb(c,2)) { goto L_801D3C9C; } // 801D3C90
  c->r[5]=0u+0x000000FFu; // 801D3C94
  goto L_801D3CD4; // 801D3C98
L_801D3C9C:;
  c->r[3]=c->r[25]|c->r[25]; // 801D3C9C
  c->r[4]=c->r[31]+0x00000858u; // 801D3CA0
  c->r[5]=0u+0x00000060u; // 801D3CA4
  c->lr=0x801D3CACu; f_80004364(c); // 801D3CA8
  c->r[3]=c->r[25]+0x00000040u; // 801D3CAC
  c->lr=0x801D3CB4u; f_801D6EF0(c); // 801D3CB0
  c->r[3]=c->r[25]|c->r[25]; // 801D3CB4
  c->lr=0x801D3CBCu; f_801D72B0(c); // 801D3CB8
  c->r[0]=R8(c->r[25]+0x00000056u); // 801D3CBC
  c->r[3]=c->r[31]+0x00000DC0u; // 801D3CC0
  c->r[4]=c->r[25]+0x00000040u; // 801D3CC4
  c->r[5]=0u+0x00000017u; // 801D3CC8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D3CCC
  W32(c->r[3]+c->r[0],c->r[4]); // 801D3CD0
L_801D3CD4:;
  W8(c->r[28]+0x0000000Cu,c->r[5]); // 801D3CD4
  goto L_801D419C; // 801D3CD8
L_801D3CDC:;
  c->lr=0x801D3CE0u; f_801D2EB0(c); // 801D3CDC
  W8(c->r[28]+0x0000000Cu,c->r[3]); // 801D3CE0
  goto L_801D419C; // 801D3CE4
L_801D3CE8:;
  c->r[3]=c->r[31]+0x00000858u; // 801D3CE8
  c->lr=0x801D3CF0u; f_801D73D0(c); // 801D3CEC
  c->r[3]=R32(c->r[28]+0x00000018u); // 801D3CF0
  c->r[3]=R32(c->r[3]+0x00000000u); // 801D3CF4
  c->r[3]=c->r[3]+0x00000040u; // 801D3CF8
  c->lr=0x801D3D00u; f_801D7050(c); // 801D3CFC
  c->lr=0x801D3D04u; f_801D2EB0(c); // 801D3D00
  W8(c->r[28]+0x0000000Cu,c->r[3]); // 801D3D04
  goto L_801D419C; // 801D3D08
L_801D3D0C:;
  c->r[0]=R8(c->r[28]+0x0000000Eu); // 801D3D0C
  cmps(c,0,(int32_t)c->r[0],0); // 801D3D10
  if (crb(c,2)) { goto L_801D3D20; } // 801D3D14
  c->r[0]=0u+0x00000001u; // 801D3D18
  goto L_801D3D24; // 801D3D1C
L_801D3D20:;
  c->r[0]=0u+0x00000000u; // 801D3D20
L_801D3D24:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D3D24
  if (crb(c,2)) { goto L_801D3D34; } // 801D3D28
  c->r[0]=0u+0x00000007u; // 801D3D2C
  goto L_801D3E34; // 801D3D30
L_801D3D34:;
  c->r[0]=R32(c->r[13]+0xFFFFB680u); // 801D3D34
  cmps(c,0,(int32_t)c->r[0],0); // 801D3D38
  if (crb(c,2)) { goto L_801D3D60; } // 801D3D3C
  c->r[3]=c->r[31]+0x00000858u; // 801D3D40
  c->r[4]=c->r[30]+0x0000027Cu; // 801D3D44
  c->r[5]=0u+0x00000010u; // 801D3D48
  c->lr=0x801D3D50u; f_8020BD24(c); // 801D3D4C
  cmps(c,0,(int32_t)c->r[3],0); // 801D3D50
  if (!crb(c,2)) { goto L_801D3D60; } // 801D3D54
  c->r[0]=0u+0x00000016u; // 801D3D58
  goto L_801D3E34; // 801D3D5C
L_801D3D60:;
  c->r[3]=c->r[31]+0x00000858u; // 801D3D60
  c->r[3]=c->r[3]+0x00000040u; // 801D3D64
  c->lr=0x801D3D6Cu; f_801D71D0(c); // 801D3D68
  c->r[29]=c->r[3]|c->r[3]; // 801D3D6C
  c->r[3]=c->r[30]+0x00000360u; // 801D3D70
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D3D74
  c->lr=0x801D3D7Cu; f_801D94A0(c); // 801D3D78
  c->r[4]=R8(c->r[29]+0x00000040u); // 801D3D7C
  c->r[3]=c->r[30]+0x00000378u; // 801D3D80
  c->r[5]=R8(c->r[29]+0x00000041u); // 801D3D84
  c->r[6]=R8(c->r[29]+0x00000042u); // 801D3D88
  c->r[7]=R8(c->r[29]+0x00000043u); // 801D3D8C
  c->r[8]=R8(c->r[29]+0x00000044u); // 801D3D90
  c->r[9]=R8(c->r[29]+0x00000045u); // 801D3D94
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D3D98
  c->lr=0x801D3DA0u; f_801D94A0(c); // 801D3D9C
  c->r[0]=R8(c->r[29]+0x0000004Du); // 801D3DA0
  c->r[3]=c->r[30]+0x000003A0u; // 801D3DA4
  W32(c->r[1]+0x00000008u,c->r[0]); // 801D3DA8
  c->r[0]=R8(c->r[29]+0x0000004Eu); // 801D3DAC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801D3DB0
  c->r[0]=R8(c->r[29]+0x0000004Fu); // 801D3DB4
  W32(c->r[1]+0x00000010u,c->r[0]); // 801D3DB8
  c->r[0]=R8(c->r[29]+0x00000050u); // 801D3DBC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D3DC0
  c->r[0]=R8(c->r[29]+0x00000051u); // 801D3DC4
  W32(c->r[1]+0x00000018u,c->r[0]); // 801D3DC8
  c->r[0]=R8(c->r[29]+0x00000052u); // 801D3DCC
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801D3DD0
  c->r[0]=R8(c->r[29]+0x00000053u); // 801D3DD4
  W32(c->r[1]+0x00000020u,c->r[0]); // 801D3DD8
  c->r[0]=R8(c->r[29]+0x00000054u); // 801D3DDC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D3DE0
  c->r[0]=R8(c->r[29]+0x00000055u); // 801D3DE4
  W32(c->r[1]+0x00000028u,c->r[0]); // 801D3DE8
  c->r[4]=R8(c->r[29]+0x00000046u); // 801D3DEC
  c->r[5]=R8(c->r[29]+0x00000047u); // 801D3DF0
  c->r[6]=R8(c->r[29]+0x00000048u); // 801D3DF4
  c->r[7]=R8(c->r[29]+0x00000049u); // 801D3DF8
  c->r[8]=R8(c->r[29]+0x0000004Au); // 801D3DFC
  c->r[9]=R8(c->r[29]+0x0000004Bu); // 801D3E00
  c->r[10]=R8(c->r[29]+0x0000004Cu); // 801D3E04
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D3E08
  c->lr=0x801D3E10u; f_801D94A0(c); // 801D3E0C
  c->r[0]=0u+0x00000002u; // 801D3E10
  c->r[6]=0u+0x801E0000u; // 801D3E14
  W8(c->r[28]+0x0000000Eu,c->r[0]); // 801D3E18
  c->r[4]=c->r[29]+0x00000040u; // 801D3E1C
  c->r[5]=c->r[29]+0x00000046u; // 801D3E20
  c->r[6]=c->r[6]+0xFFFF8700u; // 801D3E24
  c->r[3]=0u+0x00000001u; // 801D3E28
  c->lr=0x801D3E30u; f_801E659C(c); // 801D3E2C
  c->r[0]=0u+0x00000008u; // 801D3E30
L_801D3E34:;
  W8(c->r[28]+0x0000000Cu,c->r[0]); // 801D3E34
  goto L_801D419C; // 801D3E38
L_801D3E3C:;
  c->r[0]=R8(c->r[28]+0x0000000Eu); // 801D3E3C
  cmps(c,0,(int32_t)c->r[0],0); // 801D3E40
  if (crb(c,2)) { goto L_801D3E50; } // 801D3E44
  c->r[0]=0u+0x00000001u; // 801D3E48
  goto L_801D3E54; // 801D3E4C
L_801D3E50:;
  c->r[0]=0u+0x00000000u; // 801D3E50
L_801D3E54:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D3E54
  if (!crb(c,2)) { goto L_801D3E64; } // 801D3E58
  c->r[0]=0u+0x00000016u; // 801D3E5C
  goto L_801D3E68; // 801D3E60
L_801D3E64:;
  c->r[0]=0u+0x00000008u; // 801D3E64
L_801D3E68:;
  W8(c->r[28]+0x0000000Cu,c->r[0]); // 801D3E68
  goto L_801D419C; // 801D3E6C
L_801D3E70:;
  c->lr=0x801D3E74u; f_801D3230(c); // 801D3E70
  W8(c->r[28]+0x0000000Cu,c->r[3]); // 801D3E74
  goto L_801D419C; // 801D3E78
L_801D3E7C:;
  c->lr=0x801D3E80u; f_8018D6A0(c); // 801D3E7C
  c->r[0]=0u+0x0000000Du; // 801D3E80
  W8(c->r[28]+0x0000000Cu,c->r[0]); // 801D3E84
  c->lr=0x801D3E8Cu; f_8018D6E0(c); // 801D3E88
  c->r[3]=0u+0x801D0000u; // 801D3E8C
  c->r[3]=c->r[3]+0x00002B60u; // 801D3E90
  c->lr=0x801D3E98u; f_801B79D0(c); // 801D3E94
  goto L_801D419C; // 801D3E98
L_801D3E9C:;
  c->r[0]=R8(c->r[28]+0x0000000Eu); // 801D3E9C
  c->r[25]=0u+0x0000000Au; // 801D3EA0
  cmps(c,0,(int32_t)c->r[0],0); // 801D3EA4
  if (crb(c,2)) { goto L_801D3EB4; } // 801D3EA8
  c->r[0]=0u+0x00000001u; // 801D3EAC
  goto L_801D3EB8; // 801D3EB0
L_801D3EB4:;
  c->r[0]=0u+0x00000000u; // 801D3EB4
L_801D3EB8:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D3EB8
  if (!crb(c,2)) { goto L_801D3ED0; } // 801D3EBC
  c->r[3]=c->r[31]+0x00000000u; // 801D3EC0
  c->r[25]=0u+0x00000014u; // 801D3EC4
  c->r[3]=c->r[3]+0x000006FCu; // 801D3EC8
  c->lr=0x801D3ED0u; f_801D7050(c); // 801D3ECC
L_801D3ED0:;
  W8(c->r[28]+0x0000000Cu,c->r[25]); // 801D3ED0
  goto L_801D419C; // 801D3ED4
L_801D3ED8:;
  c->r[6]=R8(c->r[28]+0x000006E6u); // 801D3ED8
  c->r[3]=c->r[31]+0x00000858u; // 801D3EDC
  c->r[4]=0u+0x00000000u; // 801D3EE0
  c->r[5]=0u+0x00000060u; // 801D3EE4
  c->r[0]=c->r[6]+0x00000001u; // 801D3EE8
  W8(c->r[28]+0x000006E6u,c->r[0]); // 801D3EEC
  c->lr=0x801D3EF4u; f_800046B4(c); // 801D3EF0
  c->r[0]=R8(c->r[28]+0x000006E9u); // 801D3EF4
  cmps(c,0,(int32_t)c->r[0],0); // 801D3EF8
  if (!crb(c,2)) { goto L_801D3F08; } // 801D3EFC
  c->r[0]=0u+0x0000000Eu; // 801D3F00
  goto L_801D3F0C; // 801D3F04
L_801D3F08:;
  c->r[0]=0u+0x00000001u; // 801D3F08
L_801D3F0C:;
  W8(c->r[28]+0x0000000Cu,c->r[0]); // 801D3F0C
  goto L_801D419C; // 801D3F10
L_801D3F14:;
  c->r[3]=c->r[31]+0x00000858u; // 801D3F14
  c->r[4]=0u+0x00000000u; // 801D3F18
  c->r[5]=0u+0x00000060u; // 801D3F1C
  c->lr=0x801D3F24u; f_800046B4(c); // 801D3F20
  c->r[0]=R8(c->r[28]+0x000006E9u); // 801D3F24
  cmps(c,0,(int32_t)c->r[0],0); // 801D3F28
  if (!crb(c,2)) { goto L_801D3F38; } // 801D3F2C
  c->r[0]=0u+0x0000000Eu; // 801D3F30
  goto L_801D3F3C; // 801D3F34
L_801D3F38:;
  c->r[0]=0u+0x00000001u; // 801D3F38
L_801D3F3C:;
  W8(c->r[28]+0x0000000Cu,c->r[0]); // 801D3F3C
  goto L_801D419C; // 801D3F40
L_801D3F44:;
  c->lr=0x801D3F48u; f_801D3560(c); // 801D3F44
  W8(c->r[28]+0x0000000Cu,c->r[3]); // 801D3F48
  goto L_801D419C; // 801D3F4C
L_801D3F50:;
  c->lr=0x801D3F54u; f_8018D6A0(c); // 801D3F50
  c->r[25]=R8(c->r[28]+0x000006E5u); // 801D3F54
  c->lr=0x801D3F5Cu; f_8018D6E0(c); // 801D3F58
  cmpu(c,0,c->r[25],0x00000004u); // 801D3F5C
  if (!crb(c,2)) { goto L_801D3F90; } // 801D3F60
  c->lr=0x801D3F68u; f_8018D6A0(c); // 801D3F64
  c->r[25]=R8(c->r[28]+0x000006E4u); // 801D3F68
  c->lr=0x801D3F70u; f_8018D6E0(c); // 801D3F6C
  cmpu(c,0,c->r[25],0x00000004u); // 801D3F70
  if (!crb(c,2)) { goto L_801D3F90; } // 801D3F74
  c->r[3]=c->r[30]+0x000003F8u; // 801D3F78
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D3F7C
  c->lr=0x801D3F84u; f_801D94A0(c); // 801D3F80
  c->lr=0x801D3F88u; f_801DFAC8(c); // 801D3F84
  c->r[0]=0u+0x0000001Au; // 801D3F88
  goto L_801D3F94; // 801D3F8C
L_801D3F90:;
  c->r[0]=0u+0x00000003u; // 801D3F90
L_801D3F94:;
  W8(c->r[28]+0x0000000Cu,c->r[0]); // 801D3F94
  goto L_801D419C; // 801D3F98
L_801D3F9C:;
  c->r[26]=0u+0x00000018u; // 801D3F9C
  c->lr=0x801D3FA4u; f_8018D6A0(c); // 801D3FA0
  c->r[25]=R8(c->r[28]+0x000006E5u); // 801D3FA4
  c->lr=0x801D3FACu; f_8018D6E0(c); // 801D3FA8
  cmpu(c,0,c->r[25],0x00000004u); // 801D3FAC
  if (!crb(c,2)) { goto L_801D3FCC; } // 801D3FB0
  c->lr=0x801D3FB8u; f_8018D6A0(c); // 801D3FB4
  c->r[25]=R8(c->r[28]+0x000006E4u); // 801D3FB8
  c->lr=0x801D3FC0u; f_8018D6E0(c); // 801D3FBC
  cmpu(c,0,c->r[25],0x00000004u); // 801D3FC0
  if (!crb(c,2)) { goto L_801D3FCC; } // 801D3FC4
  c->r[26]=0u+0x0000000Eu; // 801D3FC8
L_801D3FCC:;
  c->r[4]=c->r[31]+0x00000000u; // 801D3FCC
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x0000074Au); // 801D3FD0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801D3FD4
  W16(c->r[4]+0x0000074Au,c->r[0]); // 801D3FD8
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[0]; cr0(c,c->r[0]); // 801D3FDC
  if (!crb(c,0)) { goto L_801D3FE8; } // 801D3FE0
  c->r[26]=0u+0x00000001u; // 801D3FE4
L_801D3FE8:;
  W8(c->r[28]+0x0000000Cu,c->r[26]); // 801D3FE8
  goto L_801D419C; // 801D3FEC
L_801D3FF0:;
  c->r[0]=R8(c->r[13]+0xFFFFB68Cu); // 801D3FF0
  c->r[25]=c->r[30]+0x00000428u; // 801D3FF4
  cmps(c,0,(int32_t)c->r[0],0); // 801D3FF8
  if (!crb(c,2)) { goto L_801D419C; } // 801D3FFC
  c->r[4]=c->r[25]|c->r[25]; // 801D4000
  c->r[3]=c->r[30]+0x00000454u; // 801D4004
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D4008
  c->lr=0x801D4010u; f_801D94A0(c); // 801D400C
  c->r[0]=0u+0x00000001u; // 801D4010
  c->r[6]=0u+0x801D0000u; // 801D4014
  W8(c->r[13]+0xFFFFB68Cu,c->r[0]); // 801D4018
  c->r[3]=c->r[25]|c->r[25]; // 801D401C
  c->r[4]=c->r[31]+0x00000E00u; // 801D4020
  c->r[6]=c->r[6]+0x00003370u; // 801D4024
  c->r[7]=c->r[31]+0x00000E8Cu; // 801D4028
  c->r[5]=0u+0x00000002u; // 801D402C
  c->lr=0x801D4034u; f_801B4430(c); // 801D4030
  goto L_801D419C; // 801D4034
L_801D4038:;
  c->r[0]=R8(c->r[13]+0xFFFFB68Cu); // 801D4038
  cmps(c,0,(int32_t)c->r[0],0); // 801D403C
  if (!crb(c,2)) { goto L_801D419C; } // 801D4040
  c->r[0]=0u+0x00000001u; // 801D4044
  c->r[4]=0u+0x00050000u; // 801D4048
  c->r[6]=0u+0x801D0000u; // 801D404C
  W8(c->r[13]+0xFFFFB68Cu,c->r[0]); // 801D4050
  c->r[3]=c->r[31]+0x00000E00u; // 801D4054
  c->r[4]=c->r[4]+0xFFFFAF18u; // 801D4058
  c->r[6]=c->r[6]+0x000033F0u; // 801D405C
  c->r[7]=c->r[31]+0x00000E8Cu; // 801D4060
  c->r[5]=0u+0x00000000u; // 801D4064
  c->lr=0x801D406Cu; f_801B3B80(c); // 801D4068
  goto L_801D419C; // 801D406C
L_801D4070:;
  c->r[0]=R8(c->r[13]+0xFFFFB68Cu); // 801D4070
  cmps(c,0,(int32_t)c->r[0],0); // 801D4074
  if (!crb(c,2)) { goto L_801D419C; } // 801D4078
  c->r[3]=c->r[30]+0x00000468u; // 801D407C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D4080
  c->lr=0x801D4088u; f_801D94A0(c); // 801D4084
  c->r[28]=c->r[31]+0x00000D20u; // 801D4088
  c->r[4]=R8(c->r[31]+0x00000D20u); // 801D408C
  c->r[5]=R8(c->r[28]+0x00000001u); // 801D4090
  c->r[3]=c->r[30]+0x00000478u; // 801D4094
  c->r[6]=R8(c->r[28]+0x00000002u); // 801D4098
  c->r[7]=R8(c->r[28]+0x00000003u); // 801D409C
  c->r[8]=R8(c->r[28]+0x00000004u); // 801D40A0
  c->r[9]=R8(c->r[28]+0x00000005u); // 801D40A4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D40A8
  c->lr=0x801D40B0u; f_801D94A0(c); // 801D40AC
  c->r[0]=R8(c->r[28]+0x0000000Du); // 801D40B0
  c->r[3]=c->r[30]+0x00000498u; // 801D40B4
  W32(c->r[1]+0x00000008u,c->r[0]); // 801D40B8
  c->r[4]=R8(c->r[28]+0x00000006u); // 801D40BC
  c->r[5]=R8(c->r[28]+0x00000007u); // 801D40C0
  c->r[6]=R8(c->r[28]+0x00000008u); // 801D40C4
  c->r[7]=R8(c->r[28]+0x00000009u); // 801D40C8
  c->r[8]=R8(c->r[28]+0x0000000Au); // 801D40CC
  c->r[9]=R8(c->r[28]+0x0000000Bu); // 801D40D0
  c->r[10]=R8(c->r[28]+0x0000000Cu); // 801D40D4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D40D8
  c->lr=0x801D40E0u; f_801D94A0(c); // 801D40DC
  c->r[0]=R8(c->r[28]+0x00000015u); // 801D40E0
  c->r[3]=c->r[30]+0x00000498u; // 801D40E4
  W32(c->r[1]+0x00000008u,c->r[0]); // 801D40E8
  c->r[4]=R8(c->r[28]+0x0000000Eu); // 801D40EC
  c->r[5]=R8(c->r[28]+0x0000000Fu); // 801D40F0
  c->r[6]=R8(c->r[28]+0x00000010u); // 801D40F4
  c->r[7]=R8(c->r[28]+0x00000011u); // 801D40F8
  c->r[8]=R8(c->r[28]+0x00000012u); // 801D40FC
  c->r[9]=R8(c->r[28]+0x00000013u); // 801D4100
  c->r[10]=R8(c->r[28]+0x00000014u); // 801D4104
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D4108
  c->lr=0x801D4110u; f_801D94A0(c); // 801D410C
  c->r[4]=c->r[28]+0x00000016u; // 801D4110
  c->r[3]=c->r[13]+0xFFFFAB50u; // 801D4114
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D4118
  c->lr=0x801D4120u; f_801D94A0(c); // 801D411C
  c->r[4]=R8(c->r[28]+0x00000080u); // 801D4120
  c->r[3]=c->r[30]+0x000004C4u; // 801D4124
  c->r[5]=R8(c->r[28]+0x00000081u); // 801D4128
  c->r[6]=R8(c->r[28]+0x00000082u); // 801D412C
  c->r[7]=R8(c->r[28]+0x00000083u); // 801D4130
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D4134
  c->lr=0x801D413Cu; f_801D94A0(c); // 801D4138
  c->r[0]=0u+0x00000001u; // 801D413C
  c->r[6]=0u+0x801D0000u; // 801D4140
  W8(c->r[13]+0xFFFFB68Cu,c->r[0]); // 801D4144
  c->r[4]=c->r[28]|c->r[28]; // 801D4148
  c->r[3]=c->r[31]+0x00000E00u; // 801D414C
  c->r[6]=c->r[6]+0x00003480u; // 801D4150
  c->r[7]=c->r[31]+0x00000E8Cu; // 801D4154
  c->r[5]=0u+0x00000084u; // 801D4158
  c->lr=0x801D4160u; f_801B3B00(c); // 801D415C
  goto L_801D419C; // 801D4160
L_801D4164:;
  c->r[0]=R8(c->r[13]+0xFFFFB68Cu); // 801D4164
  cmps(c,0,(int32_t)c->r[0],0); // 801D4168
  if (!crb(c,2)) { goto L_801D419C; } // 801D416C
  c->r[0]=0u+0x00000001u; // 801D4170
  c->r[4]=0u+0x801D0000u; // 801D4174
  W8(c->r[13]+0xFFFFB68Cu,c->r[0]); // 801D4178
  c->r[3]=c->r[31]+0x00000E00u; // 801D417C
  c->r[4]=c->r[4]+0x00003500u; // 801D4180
  c->r[5]=c->r[31]+0x00000E8Cu; // 801D4184
  c->lr=0x801D418Cu; f_801B4620(c); // 801D4188
  goto L_801D419C; // 801D418C
L_801D4190:;
  c->r[3]=c->r[30]+0x000004D8u; // 801D4190
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D4194
  c->lr=0x801D419Cu; f_801D94A0(c); // 801D4198
L_801D419C:;
  c->r[11]=c->r[1]+0x00000060u; // 801D419C
  c->lr=0x801D41A4u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D41A0
  c->r[0]=R32(c->r[1]+0x00000064u); // 801D41A4
  c->lr=c->r[0]; // 801D41A8
  c->r[1]=c->r[1]+0x00000060u; // 801D41AC
  return; // 801D41B0
}

// __wudSyncHandler0
void f_801D41C0(Ctx* __restrict c) {
  trace_call(0x801D41C0u);
  c->r[8]=0u+0x802E0000u; // 801D41C0
  c->r[7]=0u+0x801D0000u; // 801D41C4
  c->r[8]=c->r[8]+0xFFFFAD20u; // 801D41C8
  c->r[5]=0u+0x00000000u; // 801D41CC
  c->r[7]=c->r[7]+0x000036D0u; // 801D41D0
  c->r[6]=0u+0x00000000u; // 801D41D4
  c->r[8]=c->r[8]+0x00001000u; // 801D41D8
  f_80189550(c); return; // 801D41DC
}

// DeleteFlushCallback
void f_801D41E0(Ctx* __restrict c) {
  trace_call(0x801D41E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D41E0
  c->r[0]=c->lr; // 801D41E4
  c->r[6]=0u+0x80280000u; // 801D41E8
  c->r[4]=c->r[3]|c->r[3]; // 801D41EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D41F0
  c->r[3]=c->r[6]+0xFFFFD004u; // 801D41F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D41F8
  c->r[31]=0u+0x802E0000u; // 801D41FC
  c->r[31]=c->r[31]+0xFFFF9DC0u; // 801D4200
  c->r[5]=R8(c->r[31]+0x0000000Du); // 801D4204
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D4208
  c->lr=0x801D4210u; f_801D94A0(c); // 801D420C
  c->r[0]=R8(c->r[31]+0x0000000Du); // 801D4210
  cmps(c,0,(int32_t)c->r[0],0); // 801D4214
  if (crb(c,2)) { goto L_801D4224; } // 801D4218
  c->r[0]=0u+0x00000008u; // 801D421C
  W8(c->r[31]+0x0000000Du,c->r[0]); // 801D4220
L_801D4224:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D4224
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D4228
  c->lr=c->r[0]; // 801D422C
  c->r[1]=c->r[1]+0x00000010u; // 801D4230
  return; // 801D4234
}

// WUDiTerminateDevice
void f_801D4240(Ctx* __restrict c) {
  trace_call(0x801D4240u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D4240
  c->r[0]=c->lr; // 801D4244
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D4248
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D424C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D4250
  c->r[30]=0u+0x00000000u; // 801D4254
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D4258
  c->r[29]=0u+0x802E0000u; // 801D425C
  c->r[29]=c->r[29]+0xFFFF9DC0u; // 801D4260
  c->r[31]=c->r[29]+0x000000E4u; // 801D4264
L_801D4268:;
  c->r[0]=R8(c->r[31]+0x00000059u); // 801D4268
  cmpu(c,0,c->r[0],0x00000001u); // 801D426C
  if (!crb(c,1)) { goto L_801D427C; } // 801D4270
  c->r[3]=c->r[31]+0x00000040u; // 801D4274
  c->lr=0x801D427Cu; f_801E46F8(c); // 801D4278
L_801D427C:;
  c->r[30]=c->r[30]+0x00000001u; // 801D427C
  c->r[31]=c->r[31]+0x00000060u; // 801D4280
  cmps(c,0,(int32_t)c->r[30],10); // 801D4284
  if (crb(c,0)) { IRQCHK(c); goto L_801D4268; } // 801D4288
  c->r[31]=c->r[29]+0x000004A4u; // 801D428C
  c->r[30]=0u+0x00000000u; // 801D4290
L_801D4294:;
  c->r[0]=R8(c->r[31]+0x00000059u); // 801D4294
  cmpu(c,0,c->r[0],0x00000001u); // 801D4298
  if (!crb(c,1)) { goto L_801D42A8; } // 801D429C
  c->r[3]=c->r[31]+0x00000040u; // 801D42A0
  c->lr=0x801D42A8u; f_801E46F8(c); // 801D42A4
L_801D42A8:;
  c->r[30]=c->r[30]+0x00000001u; // 801D42A8
  c->r[31]=c->r[31]+0x00000060u; // 801D42AC
  cmps(c,0,(int32_t)c->r[30],6); // 801D42B0
  if (crb(c,0)) { IRQCHK(c); goto L_801D4294; } // 801D42B4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D42B8
  c->r[3]=0u+0x00000003u; // 801D42BC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D42C0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D42C4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D42C8
  c->lr=c->r[0]; // 801D42CC
  c->r[1]=c->r[1]+0x00000020u; // 801D42D0
  return; // 801D42D4
}

// __wudDeleteCleanupDatabase
void f_801D42E0(Ctx* __restrict c) {
  trace_call(0x801D42E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D42E0
  c->r[0]=c->lr; // 801D42E4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D42E8
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801D42EC
  W32(c->r[1]+0x00000028u,c->r[30]); // 801D42F0
  W32(c->r[1]+0x00000024u,c->r[29]); // 801D42F4
  c->r[29]=0u+0x802E0000u; // 801D42F8
  c->r[29]=c->r[29]+0xFFFF9DC0u; // 801D42FC
  c->lr=0x801D4304u; f_8018D6A0(c); // 801D4300
  c->r[31]=R8(c->r[29]+0x000006E5u); // 801D4304
  c->lr=0x801D430Cu; f_8018D6E0(c); // 801D4308
  cmps(c,0,(int32_t)c->r[31],0); // 801D430C
  if (crb(c,2)) { goto L_801D431C; } // 801D4310
  c->r[3]=0u+0x00000003u; // 801D4314
  goto L_801D44C8; // 801D4318
L_801D431C:;
  c->r[30]=0u+0x00000000u; // 801D431C
  c->r[31]=0u+0x00000000u; // 801D4320
L_801D4324:;
  c->r[3]=c->r[29]+c->r[31]; // 801D4324
  c->r[0]=R8(c->r[3]+0x0000013Du); // 801D4328
  cmpu(c,0,c->r[0],0x00000001u); // 801D432C
  if (!crb(c,2)) { goto L_801D433C; } // 801D4330
  c->r[3]=c->r[3]+0x00000124u; // 801D4334
  c->lr=0x801D433Cu; f_801D7050(c); // 801D4338
L_801D433C:;
  c->r[30]=c->r[30]+0x00000001u; // 801D433C
  c->r[31]=c->r[31]+0x00000060u; // 801D4340
  cmps(c,0,(int32_t)c->r[30],10); // 801D4344
  if (crb(c,0)) { IRQCHK(c); goto L_801D4324; } // 801D4348
  c->r[30]=0u+0x00000000u; // 801D434C
  c->r[31]=0u+0x00000000u; // 801D4350
L_801D4354:;
  c->r[3]=c->r[29]+c->r[31]; // 801D4354
  c->r[0]=R8(c->r[3]+0x000004FDu); // 801D4358
  cmpu(c,0,c->r[0],0x00000001u); // 801D435C
  if (!crb(c,2)) { goto L_801D436C; } // 801D4360
  c->r[3]=c->r[3]+0x000004E4u; // 801D4364
  c->lr=0x801D436Cu; f_801D7050(c); // 801D4368
L_801D436C:;
  c->r[30]=c->r[30]+0x00000001u; // 801D436C
  c->r[31]=c->r[31]+0x00000060u; // 801D4370
  cmps(c,0,(int32_t)c->r[30],6); // 801D4374
  if (crb(c,0)) { IRQCHK(c); goto L_801D4354; } // 801D4378
  c->r[0]=R32(c->r[13]+0xFFFFB680u); // 801D437C
  cmps(c,0,(int32_t)c->r[0],0); // 801D4380
  if (crb(c,2)) { goto L_801D44C4; } // 801D4384
  c->lr=0x801D438Cu; f_801B85E0(c); // 801D4388
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[0]); // 801D438C
  if (!crb(c,2)) { goto L_801D44BC; } // 801D4390
  c->r[0]=0u+0x00000000u; // 801D4394
  W32(c->r[1]+0x00000010u,c->r[0]); // 801D4398
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D439C
  W32(c->r[1]+0x00000018u,c->r[0]); // 801D43A0
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801D43A4
  goto L_801D43B0; // 801D43A8
  c->lr=0x801D43B0u; f_80004364(c); // 801D43AC
L_801D43B0:;
  c->r[3]=0u+0x802E0000u; // 801D43B0
  c->r[4]=c->r[1]+0x00000010u; // 801D43B4
  c->r[3]=c->r[3]+0xFFFFAAE0u; // 801D43B8
  c->r[5]=0u+0x00000010u; // 801D43BC
  c->r[3]=c->r[3]+0x00000006u; // 801D43C0
  c->lr=0x801D43C8u; f_80004364(c); // 801D43C4
  goto L_801D43D0; // 801D43C8
  c->lr=0x801D43D0u; f_80004364(c); // 801D43CC
L_801D43D0:;
  c->r[3]=R32(c->r[13]+0xFFFFB684u); // 801D43D0
  c->r[4]=0u+0x802E0000u; // 801D43D4
  c->r[0]=0u+0x00000008u; // 801D43D8
  c->r[4]=c->r[4]+0xFFFFAAE0u; // 801D43DC
  c->r[5]=rotl(c->r[3],16)&0x0000FFFFu; // 801D43E0
  c->r[6]=rotl(c->r[3],0)&0x0000FFFFu; // 801D43E4
  c->ctr=c->r[0]; // 801D43E8
L_801D43EC:;
  c->r[3]=R16(c->r[4]+0x00000000u); // 801D43EC
  c->r[0]=~(c->r[3]|c->r[3]); // 801D43F0
  c->r[5]=c->r[5]+c->r[3]; // 801D43F4
  c->r[3]=R16(c->r[4]+0x00000002u); // 801D43F8
  c->r[0]=c->r[6]+c->r[0]; // 801D43FC
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801D4400
  c->r[0]=~(c->r[3]|c->r[3]); // 801D4404
  c->r[5]=c->r[5]+c->r[3]; // 801D4408
  c->r[3]=R16(c->r[4]+0x00000004u); // 801D440C
  c->r[0]=c->r[6]+c->r[0]; // 801D4410
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801D4414
  c->r[0]=~(c->r[3]|c->r[3]); // 801D4418
  c->r[5]=c->r[5]+c->r[3]; // 801D441C
  c->r[3]=R16(c->r[4]+0x00000006u); // 801D4420
  c->r[0]=c->r[6]+c->r[0]; // 801D4424
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801D4428
  c->r[0]=~(c->r[3]|c->r[3]); // 801D442C
  c->r[5]=c->r[5]+c->r[3]; // 801D4430
  c->r[3]=R16(c->r[4]+0x00000008u); // 801D4434
  c->r[0]=c->r[6]+c->r[0]; // 801D4438
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801D443C
  c->r[0]=~(c->r[3]|c->r[3]); // 801D4440
  c->r[5]=c->r[5]+c->r[3]; // 801D4444
  c->r[3]=R16(c->r[4]+0x0000000Au); // 801D4448
  c->r[0]=c->r[6]+c->r[0]; // 801D444C
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801D4450
  c->r[0]=~(c->r[3]|c->r[3]); // 801D4454
  c->r[5]=c->r[5]+c->r[3]; // 801D4458
  c->r[3]=R16(c->r[4]+0x0000000Cu); // 801D445C
  c->r[0]=c->r[6]+c->r[0]; // 801D4460
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801D4464
  c->r[0]=~(c->r[3]|c->r[3]); // 801D4468
  c->r[5]=c->r[5]+c->r[3]; // 801D446C
  c->r[3]=R16(c->r[4]+0x0000000Eu); // 801D4470
  c->r[0]=c->r[6]+c->r[0]; // 801D4474
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801D4478
  c->r[4]=c->r[4]+0x00000010u; // 801D447C
  c->r[0]=~(c->r[3]|c->r[3]); // 801D4480
  c->r[5]=c->r[5]+c->r[3]; // 801D4484
  c->r[0]=c->r[6]+c->r[0]; // 801D4488
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801D448C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D43EC; } // 801D4490
  c->r[3]=0u+0x802E0000u; // 801D4494
  c->r[6]=(rotl(c->r[5],16)&0xFFFF0000u)|(c->r[6]&~0xFFFF0000u); // 801D4498
  c->r[3]=c->r[3]+0xFFFFAAE0u; // 801D449C
  W32(c->r[1]+0x00000008u,c->r[6]); // 801D44A0
  c->r[4]=c->r[1]+0x00000008u; // 801D44A4
  c->r[5]=0u+0x00000004u; // 801D44A8
  c->r[3]=c->r[3]+0x00000080u; // 801D44AC
  c->lr=0x801D44B4u; f_80004364(c); // 801D44B0
  c->r[3]=0u+0x00000064u; // 801D44B4
  goto L_801D44C8; // 801D44B8
L_801D44BC:;
  c->r[3]=0u+0x00000005u; // 801D44BC
  goto L_801D44C8; // 801D44C0
L_801D44C4:;
  c->r[3]=0u+0x00000005u; // 801D44C4
L_801D44C8:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D44C8
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801D44CC
  c->r[30]=R32(c->r[1]+0x00000028u); // 801D44D0
  c->r[29]=R32(c->r[1]+0x00000024u); // 801D44D4
  c->lr=c->r[0]; // 801D44D8
  c->r[1]=c->r[1]+0x00000030u; // 801D44DC
  return; // 801D44E0
}

// __wudDeleteHandler
void f_801D44F0(Ctx* __restrict c) {
  trace_call(0x801D44F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D44F0
  c->r[0]=c->lr; // 801D44F4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D44F8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D44FC
  c->r[31]=0u+0x00000000u; // 801D4500
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D4504
  c->r[30]=0u+0x802E0000u; // 801D4508
  c->r[30]=c->r[30]+0xFFFF9DC0u; // 801D450C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D4510
  c->r[29]=0u+0x80280000u; // 801D4514
  c->r[29]=c->r[29]+0xFFFFCB10u; // 801D4518
  W32(c->r[1]+0x00000010u,c->r[28]); // 801D451C
  c->r[28]=c->r[30]+0x00000000u; // 801D4520
  c->r[0]=R8(c->r[28]+0x0000000Du); // 801D4524
  W8(c->r[28]+0x0000000Cu,c->r[31]); // 801D4528
  cmps(c,0,(int32_t)c->r[0],7); // 801D452C
  if (crb(c,2)) { goto L_801D4820; } // 801D4530
  if (!crb(c,0)) { goto L_801D4560; } // 801D4534
  cmps(c,0,(int32_t)c->r[0],3); // 801D4538
  if (crb(c,2)) { goto L_801D45B4; } // 801D453C
  if (!crb(c,0)) { goto L_801D4554; } // 801D4540
  cmps(c,0,(int32_t)c->r[0],1); // 801D4544
  if (crb(c,2)) { goto L_801D4590; } // 801D4548
  if (!crb(c,0)) { goto L_801D45A8; } // 801D454C
  goto L_801D4820; // 801D4550
L_801D4554:;
  cmps(c,0,(int32_t)c->r[0],5); // 801D4554
  if (crb(c,2)) { goto L_801D45C0; } // 801D4558
  goto L_801D4820; // 801D455C
L_801D4560:;
  cmps(c,0,(int32_t)c->r[0],101); // 801D4560
  if (crb(c,2)) { goto L_801D46CC; } // 801D4564
  if (!crb(c,0)) { goto L_801D4580; } // 801D4568
  cmps(c,0,(int32_t)c->r[0],100); // 801D456C
  if (!crb(c,0)) { goto L_801D4684; } // 801D4570
  cmps(c,0,(int32_t)c->r[0],9); // 801D4574
  if (!crb(c,0)) { goto L_801D4820; } // 801D4578
  goto L_801D462C; // 801D457C
L_801D4580:;
  cmps(c,0,(int32_t)c->r[0],103); // 801D4580
  if (crb(c,2)) { goto L_801D47F8; } // 801D4584
  if (!crb(c,0)) { goto L_801D4820; } // 801D4588
  goto L_801D4704; // 801D458C
L_801D4590:;
  c->r[3]=0u+0x00000000u; // 801D4590
  c->r[4]=0u+0x00000000u; // 801D4594
  c->lr=0x801D459Cu; f_801DF9EC(c); // 801D4598
  c->r[0]=0u+0x00000002u; // 801D459C
  W8(c->r[28]+0x0000000Du,c->r[0]); // 801D45A0
  goto L_801D4820; // 801D45A4
L_801D45A8:;
  c->lr=0x801D45ACu; f_801D4240(c); // 801D45A8
  W8(c->r[28]+0x0000000Du,c->r[3]); // 801D45AC
  goto L_801D4820; // 801D45B0
L_801D45B4:;
  c->lr=0x801D45B8u; f_801D42E0(c); // 801D45B4
  W8(c->r[28]+0x0000000Du,c->r[3]); // 801D45B8
  goto L_801D4820; // 801D45BC
L_801D45C0:;
  c->lr=0x801D45C4u; f_801B6640(c); // 801D45C0
  cmpu(c,0,c->r[3],0x00000001u); // 801D45C4
  if (crb(c,2)) { goto L_801D4820; } // 801D45C8
  c->r[3]=c->r[30]+0x000008B8u; // 801D45CC
  c->r[4]=0u+0x00000000u; // 801D45D0
  c->r[5]=0u+0x00000461u; // 801D45D4
  c->lr=0x801D45DCu; f_800046B4(c); // 801D45D8
  c->r[3]=c->r[30]+0x00001F60u; // 801D45DC
  c->r[4]=0u+0x00000000u; // 801D45E0
  c->r[5]=0u+0x00000205u; // 801D45E4
  c->lr=0x801D45ECu; f_800046B4(c); // 801D45E8
  c->r[3]=c->r[30]+0x000008B8u; // 801D45EC
  c->lr=0x801D45F4u; f_801B8200(c); // 801D45F0
  c->r[31]=c->r[3]|c->r[3]; // 801D45F4
  c->r[3]=c->r[30]+0x00001F60u; // 801D45F8
  c->lr=0x801D4600u; f_801B8220(c); // 801D45FC
  c->r[0]=c->r[31]|c->r[3]; cr0(c,c->r[0]); // 801D4600
  if (crb(c,2)) { goto L_801D4620; } // 801D4604
  c->r[0]=0u+0x00000006u; // 801D4608
  c->r[3]=0u+0x801D0000u; // 801D460C
  W8(c->r[28]+0x0000000Du,c->r[0]); // 801D4610
  c->r[3]=c->r[3]+0x000041E0u; // 801D4614
  c->lr=0x801D461Cu; f_801B79D0(c); // 801D4618
  goto L_801D4820; // 801D461C
L_801D4620:;
  c->r[0]=0u+0x00000008u; // 801D4620
  W8(c->r[28]+0x0000000Du,c->r[0]); // 801D4624
  goto L_801D4820; // 801D4628
L_801D462C:;
  c->lr=0x801D4630u; f_8018D6A0(c); // 801D462C
  c->r[29]=R8(c->r[28]+0x000006EAu); // 801D4630
  c->lr=0x801D4638u; f_8018D6E0(c); // 801D4634
  c->lr=0x801D463Cu; f_8018D6A0(c); // 801D4638
  W8(c->r[28]+0x000006EBu,c->r[31]); // 801D463C
  W8(c->r[28]+0x000006EAu,c->r[29]); // 801D4640
  c->lr=0x801D4648u; f_8018D6E0(c); // 801D4644
  c->r[4]=c->r[29]|c->r[29]; // 801D4648
  c->r[3]=0u+0x00000000u; // 801D464C
  c->lr=0x801D4654u; f_801DF9EC(c); // 801D4650
  c->r[3]=c->r[28]+0x00000710u; // 801D4654
  c->lr=0x801D465Cu; f_80187FA0(c); // 801D4658
  c->r[12]=R32(c->r[28]+0x00000008u); // 801D465C
  W8(c->r[28]+0x0000000Du,c->r[31]); // 801D4660
  cmps(c,0,(int32_t)c->r[12],0); // 801D4664
  if (crb(c,2)) { goto L_801D4678; } // 801D4668
  c->r[3]=0u+0x00000001u; // 801D466C
  c->ctr=c->r[12]; // 801D4670
  if (true) { c->lr=0x801D4678u; dispatch(c,c->ctr); } // 801D4674
L_801D4678:;
  c->r[0]=0u+0x00000000u; // 801D4678
  W8(c->r[28]+0x0000000Du,c->r[0]); // 801D467C
  goto L_801D4820; // 801D4680
L_801D4684:;
  c->r[0]=R8(c->r[13]+0xFFFFB68Cu); // 801D4684
  c->r[31]=c->r[29]+0x00000428u; // 801D4688
  cmps(c,0,(int32_t)c->r[0],0); // 801D468C
  if (!crb(c,2)) { goto L_801D4820; } // 801D4690
  c->r[4]=c->r[31]|c->r[31]; // 801D4694
  c->r[3]=c->r[29]+0x00000454u; // 801D4698
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D469C
  c->lr=0x801D46A4u; f_801D94A0(c); // 801D46A0
  c->r[0]=0u+0x00000001u; // 801D46A4
  c->r[6]=0u+0x801D0000u; // 801D46A8
  W8(c->r[13]+0xFFFFB68Cu,c->r[0]); // 801D46AC
  c->r[3]=c->r[31]|c->r[31]; // 801D46B0
  c->r[4]=c->r[30]+0x00000E00u; // 801D46B4
  c->r[6]=c->r[6]+0x00003370u; // 801D46B8
  c->r[7]=c->r[30]+0x00000E8Cu; // 801D46BC
  c->r[5]=0u+0x00000002u; // 801D46C0
  c->lr=0x801D46C8u; f_801B4430(c); // 801D46C4
  goto L_801D4820; // 801D46C8
L_801D46CC:;
  c->r[0]=R8(c->r[13]+0xFFFFB68Cu); // 801D46CC
  cmps(c,0,(int32_t)c->r[0],0); // 801D46D0
  if (!crb(c,2)) { goto L_801D4820; } // 801D46D4
  c->r[0]=0u+0x00000001u; // 801D46D8
  c->r[4]=0u+0x00050000u; // 801D46DC
  c->r[6]=0u+0x801D0000u; // 801D46E0
  W8(c->r[13]+0xFFFFB68Cu,c->r[0]); // 801D46E4
  c->r[3]=c->r[30]+0x00000E00u; // 801D46E8
  c->r[4]=c->r[4]+0xFFFFAF18u; // 801D46EC
  c->r[6]=c->r[6]+0x000033F0u; // 801D46F0
  c->r[7]=c->r[30]+0x00000E8Cu; // 801D46F4
  c->r[5]=0u+0x00000000u; // 801D46F8
  c->lr=0x801D4700u; f_801B3B80(c); // 801D46FC
  goto L_801D4820; // 801D4700
L_801D4704:;
  c->r[0]=R8(c->r[13]+0xFFFFB68Cu); // 801D4704
  cmps(c,0,(int32_t)c->r[0],0); // 801D4708
  if (!crb(c,2)) { goto L_801D4820; } // 801D470C
  c->r[3]=c->r[29]+0x00000468u; // 801D4710
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D4714
  c->lr=0x801D471Cu; f_801D94A0(c); // 801D4718
  c->r[31]=c->r[30]+0x00000D20u; // 801D471C
  c->r[4]=R8(c->r[30]+0x00000D20u); // 801D4720
  c->r[5]=R8(c->r[31]+0x00000001u); // 801D4724
  c->r[3]=c->r[29]+0x00000478u; // 801D4728
  c->r[6]=R8(c->r[31]+0x00000002u); // 801D472C
  c->r[7]=R8(c->r[31]+0x00000003u); // 801D4730
  c->r[8]=R8(c->r[31]+0x00000004u); // 801D4734
  c->r[9]=R8(c->r[31]+0x00000005u); // 801D4738
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D473C
  c->lr=0x801D4744u; f_801D94A0(c); // 801D4740
  c->r[0]=R8(c->r[31]+0x0000000Du); // 801D4744
  c->r[3]=c->r[29]+0x00000498u; // 801D4748
  W32(c->r[1]+0x00000008u,c->r[0]); // 801D474C
  c->r[4]=R8(c->r[31]+0x00000006u); // 801D4750
  c->r[5]=R8(c->r[31]+0x00000007u); // 801D4754
  c->r[6]=R8(c->r[31]+0x00000008u); // 801D4758
  c->r[7]=R8(c->r[31]+0x00000009u); // 801D475C
  c->r[8]=R8(c->r[31]+0x0000000Au); // 801D4760
  c->r[9]=R8(c->r[31]+0x0000000Bu); // 801D4764
  c->r[10]=R8(c->r[31]+0x0000000Cu); // 801D4768
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D476C
  c->lr=0x801D4774u; f_801D94A0(c); // 801D4770
  c->r[0]=R8(c->r[31]+0x00000015u); // 801D4774
  c->r[3]=c->r[29]+0x00000498u; // 801D4778
  W32(c->r[1]+0x00000008u,c->r[0]); // 801D477C
  c->r[4]=R8(c->r[31]+0x0000000Eu); // 801D4780
  c->r[5]=R8(c->r[31]+0x0000000Fu); // 801D4784
  c->r[6]=R8(c->r[31]+0x00000010u); // 801D4788
  c->r[7]=R8(c->r[31]+0x00000011u); // 801D478C
  c->r[8]=R8(c->r[31]+0x00000012u); // 801D4790
  c->r[9]=R8(c->r[31]+0x00000013u); // 801D4794
  c->r[10]=R8(c->r[31]+0x00000014u); // 801D4798
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D479C
  c->lr=0x801D47A4u; f_801D94A0(c); // 801D47A0
  c->r[4]=c->r[31]+0x00000016u; // 801D47A4
  c->r[3]=c->r[13]+0xFFFFAB50u; // 801D47A8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D47AC
  c->lr=0x801D47B4u; f_801D94A0(c); // 801D47B0
  c->r[4]=R8(c->r[31]+0x00000080u); // 801D47B4
  c->r[3]=c->r[29]+0x000004C4u; // 801D47B8
  c->r[5]=R8(c->r[31]+0x00000081u); // 801D47BC
  c->r[6]=R8(c->r[31]+0x00000082u); // 801D47C0
  c->r[7]=R8(c->r[31]+0x00000083u); // 801D47C4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D47C8
  c->lr=0x801D47D0u; f_801D94A0(c); // 801D47CC
  c->r[0]=0u+0x00000001u; // 801D47D0
  c->r[6]=0u+0x801D0000u; // 801D47D4
  W8(c->r[13]+0xFFFFB68Cu,c->r[0]); // 801D47D8
  c->r[4]=c->r[31]|c->r[31]; // 801D47DC
  c->r[3]=c->r[30]+0x00000E00u; // 801D47E0
  c->r[6]=c->r[6]+0x00003480u; // 801D47E4
  c->r[7]=c->r[30]+0x00000E8Cu; // 801D47E8
  c->r[5]=0u+0x00000084u; // 801D47EC
  c->lr=0x801D47F4u; f_801B3B00(c); // 801D47F0
  goto L_801D4820; // 801D47F4
L_801D47F8:;
  c->r[0]=R8(c->r[13]+0xFFFFB68Cu); // 801D47F8
  cmps(c,0,(int32_t)c->r[0],0); // 801D47FC
  if (!crb(c,2)) { goto L_801D4820; } // 801D4800
  c->r[0]=0u+0x00000001u; // 801D4804
  c->r[4]=0u+0x801D0000u; // 801D4808
  W8(c->r[13]+0xFFFFB68Cu,c->r[0]); // 801D480C
  c->r[3]=c->r[30]+0x00000E00u; // 801D4810
  c->r[4]=c->r[4]+0x00003500u; // 801D4814
  c->r[5]=c->r[30]+0x00000E8Cu; // 801D4818
  c->lr=0x801D4820u; f_801B4620(c); // 801D481C
L_801D4820:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D4820
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D4824
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D4828
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D482C
  c->r[28]=R32(c->r[1]+0x00000010u); // 801D4830
  c->lr=c->r[0]; // 801D4834
  c->r[1]=c->r[1]+0x00000020u; // 801D4838
  return; // 801D483C
}

// __wudDeleteHandler0
void f_801D4840(Ctx* __restrict c) {
  trace_call(0x801D4840u);
  c->r[8]=0u+0x802E0000u; // 801D4840
  c->r[7]=0u+0x801D0000u; // 801D4844
  c->r[8]=c->r[8]+0xFFFFAD20u; // 801D4848
  c->r[5]=0u+0x00000000u; // 801D484C
  c->r[7]=c->r[7]+0x000044F0u; // 801D4850
  c->r[6]=0u+0x00000000u; // 801D4854
  c->r[8]=c->r[8]+0x00001000u; // 801D4858
  f_80189550(c); return; // 801D485C
}

// __wudStackCheckDeviceInfo
void f_801D4860(Ctx* __restrict c) {
  trace_call(0x801D4860u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D4860
  c->r[0]=c->lr; // 801D4864
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D4868
  c->r[11]=c->r[1]+0x00000020u; // 801D486C
  c->lr=0x801D4874u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D4870
  c->r[3]=0u+0x802E0000u; // 801D4874
  c->r[28]=c->r[3]+0xFFFF9DC0u; // 801D4878
  c->r[0]=R8(c->r[28]+0x0000000Eu); // 801D487C
  cmps(c,0,(int32_t)c->r[0],0); // 801D4880
  if (!crb(c,2)) { goto L_801D4950; } // 801D4884
  c->r[27]=0u+0x00000000u; // 801D4888
  c->r[29]=0u+0x00000000u; // 801D488C
L_801D4890:;
  c->lr=0x801D4894u; f_8018D6A0(c); // 801D4890
  cmpu(c,0,c->r[27],0x00000009u); // 801D4894
  if (crb(c,1)) { goto L_801D48A8; } // 801D4898
  c->r[4]=c->r[28]+c->r[29]; // 801D489C
  c->r[31]=c->r[4]+0x000000E4u; // 801D48A0
  goto L_801D48B8; // 801D48A4
L_801D48A8:;
  c->r[0]=c->r[27]+0xFFFFFFF6u; // 801D48A8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)96); // 801D48AC
  c->r[4]=c->r[28]+c->r[0]; // 801D48B0
  c->r[31]=c->r[4]+0x000004A4u; // 801D48B4
L_801D48B8:;
  c->lr=0x801D48BCu; f_8018D6E0(c); // 801D48B8
  c->r[0]=R8(c->r[31]+0x00000059u); // 801D48BC
  cmps(c,0,(int32_t)c->r[0],0); // 801D48C0
  if (crb(c,2)) { goto L_801D4938; } // 801D48C4
  c->r[0]=R8(c->r[31]+0x0000005Cu); // 801D48C8
  cmpu(c,0,c->r[0],0x00000001u); // 801D48CC
  if (!crb(c,2)) { goto L_801D48FC; } // 801D48D0
  c->r[0]=0u+0x00000003u; // 801D48D4
  c->r[4]=0u+0x801E0000u; // 801D48D8
  W8(c->r[28]+0x0000000Eu,c->r[0]); // 801D48DC
  c->r[3]=c->r[31]+0x00000040u; // 801D48E0
  c->r[4]=c->r[4]+0xFFFF8700u; // 801D48E4
  c->lr=0x801D48ECu; f_801E666C(c); // 801D48E8
  c->r[0]=0u+0x00000000u; // 801D48EC
  W8(c->r[31]+0x0000005Cu,c->r[0]); // 801D48F0
  c->r[3]=0u+0x00000002u; // 801D48F4
  goto L_801D4954; // 801D48F8
L_801D48FC:;
  cmpu(c,0,c->r[0],0x00000003u); // 801D48FC
  if (crb(c,2)) { goto L_801D4938; } // 801D4900
  c->r[3]=c->r[31]+0x00000040u; // 801D4904
  c->lr=0x801D490Cu; f_801D71D0(c); // 801D4908
  cmps(c,0,(int32_t)c->r[3],0); // 801D490C
  c->r[30]=c->r[3]|c->r[3]; // 801D4910
  if (crb(c,2)) { goto L_801D4938; } // 801D4914
  c->lr=0x801D491Cu; f_8018D6A0(c); // 801D4918
  c->r[31]=c->r[3]|c->r[3]; // 801D491C
  c->r[3]=c->r[30]|c->r[30]; // 801D4920
  c->r[4]=0u+0x00000000u; // 801D4924
  c->r[5]=0u+0x00000060u; // 801D4928
  c->lr=0x801D4930u; f_800046B4(c); // 801D492C
  c->r[3]=c->r[31]|c->r[31]; // 801D4930
  c->lr=0x801D4938u; f_8018D6E0(c); // 801D4934
L_801D4938:;
  c->r[27]=c->r[27]+0x00000001u; // 801D4938
  c->r[29]=c->r[29]+0x00000060u; // 801D493C
  cmps(c,0,(int32_t)c->r[27],16); // 801D4940
  if (crb(c,0)) { IRQCHK(c); goto L_801D4890; } // 801D4944
  c->r[3]=0u+0x00000003u; // 801D4948
  goto L_801D4954; // 801D494C
L_801D4950:;
  c->r[3]=0u+0x00000002u; // 801D4950
L_801D4954:;
  c->r[11]=c->r[1]+0x00000020u; // 801D4954
  c->lr=0x801D495Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D4958
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D495C
  c->lr=c->r[0]; // 801D4960
  c->r[1]=c->r[1]+0x00000020u; // 801D4964
  return; // 801D4968
}

// __wudStackHandler
void f_801D4970(Ctx* __restrict c) {
  trace_call(0x801D4970u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D4970
  c->r[0]=c->lr; // 801D4974
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D4978
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D497C
  c->r[31]=0u+0x80280000u; // 801D4980
  c->r[31]=c->r[31]+0xFFFFCB10u; // 801D4984
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D4988
  c->r[30]=0u+0x802E0000u; // 801D498C
  c->r[30]=c->r[30]+0xFFFF9DC0u; // 801D4990
  c->r[0]=R8(c->r[30]+0x0000000Fu); // 801D4994
  cmps(c,0,(int32_t)c->r[0],1); // 801D4998
  if (crb(c,2)) { goto L_801D49B4; } // 801D499C
  cmps(c,0,(int32_t)c->r[0],2); // 801D49A0
  if (crb(c,2)) { goto L_801D49E4; } // 801D49A4
  cmps(c,0,(int32_t)c->r[0],3); // 801D49A8
  if (crb(c,2)) { goto L_801D49F0; } // 801D49AC
  goto L_801D4A9C; // 801D49B0
L_801D49B4:;
  c->r[0]=R32(c->r[30]+0x00000740u); // 801D49B4
  cmpu(c,0,c->r[0],0x00000001u); // 801D49B8
  if (!crb(c,2)) { goto L_801D49D8; } // 801D49BC
  c->r[0]=0u+0x00000001u; // 801D49C0
  c->r[4]=0u+0x801E0000u; // 801D49C4
  W8(c->r[30]+0x0000000Eu,c->r[0]); // 801D49C8
  c->r[4]=c->r[4]+0xFFFF8700u; // 801D49CC
  c->r[3]=0u+0x00000000u; // 801D49D0
  c->lr=0x801D49D8u; f_801E64C4(c); // 801D49D4
L_801D49D8:;
  c->r[0]=0u+0x00000002u; // 801D49D8
  W8(c->r[30]+0x0000000Fu,c->r[0]); // 801D49DC
  goto L_801D4A9C; // 801D49E0
L_801D49E4:;
  c->lr=0x801D49E8u; f_801D4860(c); // 801D49E4
  W8(c->r[30]+0x0000000Fu,c->r[3]); // 801D49E8
  goto L_801D4A9C; // 801D49EC
L_801D49F0:;
  c->r[0]=R8(c->r[30]+0x0000000Eu); // 801D49F0
  cmps(c,0,(int32_t)c->r[0],0); // 801D49F4
  if (!crb(c,2)) { goto L_801D4A94; } // 801D49F8
  c->r[3]=c->r[30]+0x00000710u; // 801D49FC
  c->lr=0x801D4A04u; f_80187FA0(c); // 801D4A00
  c->r[3]=c->r[1]+0x00000008u; // 801D4A04
  c->lr=0x801D4A0Cu; f_801E60E8(c); // 801D4A08
  c->r[4]=R8(c->r[1]+0x00000008u); // 801D4A0C
  c->r[3]=c->r[31]+0x00000524u; // 801D4A10
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D4A14
  c->lr=0x801D4A1Cu; f_801D94A0(c); // 801D4A18
  c->r[4]=R16(c->r[1]+0x0000000Au); // 801D4A1C
  c->r[3]=c->r[31]+0x0000053Cu; // 801D4A20
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D4A24
  c->lr=0x801D4A2Cu; f_801D94A0(c); // 801D4A28
  c->r[4]=R8(c->r[1]+0x0000000Cu); // 801D4A2C
  c->r[3]=c->r[31]+0x00000554u; // 801D4A30
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D4A34
  c->lr=0x801D4A3Cu; f_801D94A0(c); // 801D4A38
  c->r[4]=R16(c->r[1]+0x00000010u); // 801D4A3C
  c->r[3]=c->r[31]+0x0000056Cu; // 801D4A40
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D4A44
  c->lr=0x801D4A4Cu; f_801D94A0(c); // 801D4A48
  c->r[4]=R16(c->r[1]+0x0000000Eu); // 801D4A4C
  c->r[3]=c->r[31]+0x00000584u; // 801D4A50
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D4A54
  c->lr=0x801D4A5Cu; f_801D94A0(c); // 801D4A58
  c->r[0]=R16(c->r[1]+0x0000000Au); // 801D4A5C
  c->r[3]=c->r[31]+0x0000059Cu; // 801D4A60
  c->r[4]=rotl(c->r[0],0)&0x00000FFFu; // 801D4A64
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D4A68
  c->lr=0x801D4A70u; f_801D94A0(c); // 801D4A6C
  c->r[0]=R16(c->r[1]+0x0000000Au); // 801D4A70
  c->r[0]=rotl(c->r[0],0)&0x00000FFFu; // 801D4A74
  cmps(c,0,(int32_t)c->r[0],167); // 801D4A78
  if (!crb(c,2)) { goto L_801D4A88; } // 801D4A7C
  c->lr=0x801D4A84u; f_801D6C80(c); // 801D4A80
  goto L_801D4A8C; // 801D4A84
L_801D4A88:;
  c->lr=0x801D4A8Cu; f_801D6D80(c); // 801D4A88
L_801D4A8C:;
  c->r[0]=0u+0x00000004u; // 801D4A8C
  goto L_801D4A98; // 801D4A90
L_801D4A94:;
  c->r[0]=0u+0x00000002u; // 801D4A94
L_801D4A98:;
  W8(c->r[30]+0x0000000Fu,c->r[0]); // 801D4A98
L_801D4A9C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D4A9C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D4AA0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D4AA4
  c->lr=c->r[0]; // 801D4AA8
  c->r[1]=c->r[1]+0x00000020u; // 801D4AAC
  return; // 801D4AB0
}

// __wudStackHandler0
void f_801D4AC0(Ctx* __restrict c) {
  trace_call(0x801D4AC0u);
  c->r[8]=0u+0x802E0000u; // 801D4AC0
  c->r[7]=0u+0x801D0000u; // 801D4AC4
  c->r[8]=c->r[8]+0xFFFFAD20u; // 801D4AC8
  c->r[5]=0u+0x00000000u; // 801D4ACC
  c->r[7]=c->r[7]+0x00004970u; // 801D4AD0
  c->r[6]=0u+0x00000000u; // 801D4AD4
  c->r[8]=c->r[8]+0x00001000u; // 801D4AD8
  f_80189550(c); return; // 801D4ADC
}

// __wudInitFlushCallback
void f_801D4AE0(Ctx* __restrict c) {
  trace_call(0x801D4AE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D4AE0
  c->r[0]=c->lr; // 801D4AE4
  c->r[6]=0u+0x80280000u; // 801D4AE8
  c->r[4]=c->r[3]|c->r[3]; // 801D4AEC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D4AF0
  c->r[3]=c->r[6]+0xFFFFD0D4u; // 801D4AF4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D4AF8
  c->r[31]=0u+0x802E0000u; // 801D4AFC
  c->r[31]=c->r[31]+0xFFFF9DC0u; // 801D4B00
  c->r[5]=R8(c->r[31]+0x00000010u); // 801D4B04
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D4B08
  c->lr=0x801D4B10u; f_801D94A0(c); // 801D4B0C
  c->r[0]=0u+0x00000005u; // 801D4B10
  W8(c->r[31]+0x00000010u,c->r[0]); // 801D4B14
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D4B18
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D4B1C
  c->lr=c->r[0]; // 801D4B20
  c->r[1]=c->r[1]+0x00000010u; // 801D4B24
  return; // 801D4B28
}

// __wudInitDevInfo
void f_801D4B30(Ctx* __restrict c) {
  trace_call(0x801D4B30u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D4B30
  c->r[0]=c->lr; // 801D4B34
  W32(c->r[1]+0x00000064u,c->r[0]); // 801D4B38
  c->r[11]=c->r[1]+0x00000060u; // 801D4B3C
  c->lr=0x801D4B44u; f_802079EC(c); // 801D4B40
  c->r[25]=0u+0x802E0000u; // 801D4B44
  c->r[24]=0u+0x80280000u; // 801D4B48
  c->r[25]=c->r[25]+0xFFFF9DC0u; // 801D4B4C
  c->r[4]=0u+0x00000000u; // 801D4B50
  c->r[24]=c->r[24]+0xFFFFCB10u; // 801D4B54
  c->r[5]=0u+0x00000461u; // 801D4B58
  c->r[3]=c->r[25]+0x000008B8u; // 801D4B5C
  c->lr=0x801D4B64u; f_800046B4(c); // 801D4B60
  c->r[3]=c->r[25]+0x00001F60u; // 801D4B64
  c->r[4]=0u+0x00000000u; // 801D4B68
  c->r[5]=0u+0x00000205u; // 801D4B6C
  c->lr=0x801D4B74u; f_800046B4(c); // 801D4B70
  c->r[3]=c->r[1]+0x00000008u; // 801D4B74
  c->r[4]=0u+0x00000000u; // 801D4B78
  c->r[5]=0u+0x00000006u; // 801D4B7C
  c->lr=0x801D4B84u; f_800046B4(c); // 801D4B80
  c->r[3]=c->r[25]+0x000008B8u; // 801D4B84
  c->lr=0x801D4B8Cu; f_801B81F0(c); // 801D4B88
  c->r[3]=c->r[25]+0x00001F60u; // 801D4B8C
  c->lr=0x801D4B94u; f_801B8210(c); // 801D4B90
  c->r[28]=c->r[25]+0x000008B8u; // 801D4B94
  c->r[27]=c->r[25]+0x00000000u; // 801D4B98
  c->r[18]=c->r[28]+0x00000001u; // 801D4B9C
  c->r[26]=0u+0x00000000u; // 801D4BA0
  W8(c->r[27]+0x000006E9u,c->r[26]); // 801D4BA4
  c->r[19]=c->r[18]|c->r[18]; // 801D4BA8
  c->r[16]=R8(c->r[25]+0x000008B8u); // 801D4BAC
  c->r[20]=c->r[28]+0x00000007u; // 801D4BB0
  c->r[17]=0u+0x00000000u; // 801D4BB4
  c->r[15]=0u+0x00000000u; // 801D4BB8
  c->r[29]=0u+0x00000001u; // 801D4BBC
  c->r[30]=0u+0x00000002u; // 801D4BC0
  c->r[31]=0u+0x00010000u; // 801D4BC4
  c->r[14]=0u+0x00000003u; // 801D4BC8
L_801D4BCC:;
  cmps(c,0,(int32_t)c->r[16],0); // 801D4BCC
  if (crb(c,2)) { goto L_801D4D98; } // 801D4BD0
  c->r[3]=c->r[20]|c->r[20]; // 801D4BD4
  c->r[4]=c->r[24]+0x00000268u; // 801D4BD8
  c->r[5]=0u+0x00000010u; // 801D4BDC
  c->lr=0x801D4BE4u; f_8020BD24(c); // 801D4BE0
  cmps(c,0,(int32_t)c->r[3],0); // 801D4BE4
  if (crb(c,2)) { goto L_801D4BFC; } // 801D4BE8
  c->r[3]=c->r[19]|c->r[19]; // 801D4BEC
  c->r[4]=0u+0x00000000u; // 801D4BF0
  c->r[5]=0u+0x00000046u; // 801D4BF4
  c->lr=0x801D4BFCu; f_800046B4(c); // 801D4BF8
L_801D4BFC:;
  c->r[3]=c->r[19]|c->r[19]; // 801D4BFC
  c->r[4]=c->r[1]+0x00000008u; // 801D4C00
  c->r[5]=0u+0x00000006u; // 801D4C04
  c->lr=0x801D4C0Cu; f_8020BD24(c); // 801D4C08
  cmps(c,0,(int32_t)c->r[3],0); // 801D4C0C
  if (!crb(c,2)) { goto L_801D4C8C; } // 801D4C10
  cmps(c,0,(int32_t)c->r[17],9); // 801D4C14
  if (!crb(c,0)) { goto L_801D4D84; } // 801D4C18
  c->r[21]=c->r[17]+0x00000001u; // 801D4C1C
  c->r[0]=(uint32_t)((int32_t)c->r[21]*(int32_t)70); // 801D4C20
  c->r[3]=c->r[28]+c->r[0]; // 801D4C24
  c->r[22]=c->r[3]+0x00000007u; // 801D4C28
  goto L_801D4C80; // 801D4C2C
L_801D4C30:;
  c->r[3]=c->r[22]|c->r[22]; // 801D4C30
  c->r[4]=c->r[24]+0x00000268u; // 801D4C34
  c->r[5]=0u+0x00000010u; // 801D4C38
  c->lr=0x801D4C40u; f_8020BD24(c); // 801D4C3C
  cmps(c,0,(int32_t)c->r[3],0); // 801D4C40
  if (!crb(c,2)) { goto L_801D4C78; } // 801D4C44
  c->r[0]=(uint32_t)((int32_t)c->r[21]*(int32_t)70); // 801D4C48
  c->r[3]=c->r[19]|c->r[19]; // 801D4C4C
  c->r[5]=0u+0x00000046u; // 801D4C50
  c->r[4]=c->r[28]+c->r[0]; // 801D4C54
  c->r[21]=c->r[4]+0x00000001u; // 801D4C58
  c->r[4]=c->r[21]|c->r[21]; // 801D4C5C
  c->lr=0x801D4C64u; f_80004364(c); // 801D4C60
  c->r[3]=c->r[21]|c->r[21]; // 801D4C64
  c->r[4]=0u+0x00000000u; // 801D4C68
  c->r[5]=0u+0x00000046u; // 801D4C6C
  c->lr=0x801D4C74u; f_800046B4(c); // 801D4C70
  goto L_801D4C8C; // 801D4C74
L_801D4C78:;
  c->r[22]=c->r[22]+0x00000046u; // 801D4C78
  c->r[21]=c->r[21]+0x00000001u; // 801D4C7C
L_801D4C80:;
  cmps(c,0,(int32_t)c->r[21],10); // 801D4C80
  if (crb(c,0)) { IRQCHK(c); goto L_801D4C30; } // 801D4C84
  goto L_801D4D84; // 801D4C88
L_801D4C8C:;
  c->lr=0x801D4C90u; f_8018D6A0(c); // 801D4C8C
  c->r[0]=R8(c->r[27]+0x000006E9u); // 801D4C90
  c->r[22]=c->r[3]|c->r[3]; // 801D4C94
  cmps(c,0,(int32_t)c->r[0],0); // 801D4C98
  if (!crb(c,2)) { goto L_801D4CF4; } // 801D4C9C
  c->r[0]=0u+0x0000000Au; // 801D4CA0
  c->r[3]=c->r[27]|c->r[27]; // 801D4CA4
  c->r[21]=0u+0x00000000u; // 801D4CA8
  c->r[23]=0u+0x00000000u; // 801D4CAC
  c->ctr=c->r[0]; // 801D4CB0
  c->r[0]=c->r[0]|0x00000000u; // 801D4CB4
L_801D4CB8:;
  c->r[0]=R8(c->r[3]+0x0000013Du); // 801D4CB8
  cmps(c,0,(int32_t)c->r[0],0); // 801D4CBC
  if (!crb(c,2)) { goto L_801D4CE4; } // 801D4CC0
  c->r[4]=c->r[23]|c->r[23]; // 801D4CC4
  c->r[3]=c->r[24]+0x000002CCu; // 801D4CC8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D4CCC
  c->lr=0x801D4CD4u; f_801D94A0(c); // 801D4CD0
  c->r[0]=(uint32_t)((int32_t)c->r[23]*(int32_t)96); // 801D4CD4
  c->r[3]=c->r[27]+c->r[0]; // 801D4CD8
  c->r[21]=c->r[3]+0x000000E4u; // 801D4CDC
  goto L_801D4CFC; // 801D4CE0
L_801D4CE4:;
  c->r[3]=c->r[3]+0x00000060u; // 801D4CE4
  c->r[23]=c->r[23]+0x00000001u; // 801D4CE8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D4CB8; } // 801D4CEC
  goto L_801D4CFC; // 801D4CF0
L_801D4CF4:;
  c->r[3]=R32(c->r[27]+0x00000018u); // 801D4CF4
  c->r[21]=R32(c->r[3]+0x00000000u); // 801D4CF8
L_801D4CFC:;
  c->r[3]=c->r[22]|c->r[22]; // 801D4CFC
  c->lr=0x801D4D04u; f_8018D6E0(c); // 801D4D00
  cmps(c,0,(int32_t)c->r[21],0); // 801D4D04
  if (crb(c,2)) { goto L_801D4D84; } // 801D4D08
  c->r[4]=c->r[19]|c->r[19]; // 801D4D0C
  c->r[3]=c->r[21]+0x00000040u; // 801D4D10
  c->r[5]=0u+0x00000006u; // 801D4D14
  c->lr=0x801D4D1Cu; f_80004364(c); // 801D4D18
  c->r[3]=c->r[21]|c->r[21]; // 801D4D1C
  c->r[4]=c->r[20]|c->r[20]; // 801D4D20
  c->r[5]=0u+0x00000040u; // 801D4D24
  c->lr=0x801D4D2Cu; f_80004364(c); // 801D4D28
  W8(c->r[21]+0x00000059u,c->r[29]); // 801D4D2C
  c->r[0]=c->r[31]+0xFFFF8074u; // 801D4D30
  c->r[3]=c->r[24]+0x00000378u; // 801D4D34
  W8(c->r[21]+0x0000005Bu,c->r[26]); // 801D4D38
  W8(c->r[21]+0x0000005Cu,c->r[30]); // 801D4D3C
  W8(c->r[21]+0x00000057u,c->r[30]); // 801D4D40
  W16(c->r[21]+0x0000005Eu,c->r[0]); // 801D4D44
  W8(c->r[21]+0x00000058u,c->r[14]); // 801D4D48
  c->r[4]=R8(c->r[21]+0x00000040u); // 801D4D4C
  c->r[5]=R8(c->r[21]+0x00000041u); // 801D4D50
  c->r[6]=R8(c->r[21]+0x00000042u); // 801D4D54
  c->r[7]=R8(c->r[21]+0x00000043u); // 801D4D58
  c->r[8]=R8(c->r[21]+0x00000044u); // 801D4D5C
  c->r[9]=R8(c->r[21]+0x00000045u); // 801D4D60
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D4D64
  c->lr=0x801D4D6Cu; f_801D94A0(c); // 801D4D68
  c->r[4]=c->r[21]|c->r[21]; // 801D4D6C
  c->r[3]=c->r[24]+0x000005F0u; // 801D4D70
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D4D74
  c->lr=0x801D4D7Cu; f_801D94A0(c); // 801D4D78
  c->r[15]=c->r[15]+0x00000001u; // 801D4D7C
  c->r[16]=c->r[16]+0xFFFFFFFFu; // 801D4D80
L_801D4D84:;
  c->r[17]=c->r[17]+0x00000001u; // 801D4D84
  c->r[19]=c->r[19]+0x00000046u; // 801D4D88
  cmps(c,0,(int32_t)c->r[17],10); // 801D4D8C
  c->r[20]=c->r[20]+0x00000046u; // 801D4D90
  if (crb(c,0)) { IRQCHK(c); goto L_801D4BCC; } // 801D4D94
L_801D4D98:;
  c->r[0]=R32(c->r[13]+0xFFFFB680u); // 801D4D98
  cmps(c,0,(int32_t)c->r[0],0); // 801D4D9C
  if (crb(c,2)) { goto L_801D4F38; } // 801D4DA0
  c->r[3]=c->r[25]+0x000008B8u; // 801D4DA4
  c->r[4]=c->r[24]+0x0000027Cu; // 801D4DA8
  c->r[3]=c->r[3]+0x000003DBu; // 801D4DAC
  c->r[5]=0u+0x00000010u; // 801D4DB0
  c->lr=0x801D4DB8u; f_8020BD24(c); // 801D4DB4
  cmps(c,0,(int32_t)c->r[3],0); // 801D4DB8
  if (!crb(c,2)) { goto L_801D4F38; } // 801D4DBC
  c->lr=0x801D4DC4u; f_8018D6A0(c); // 801D4DC0
  c->r[16]=c->r[25]+0x00000000u; // 801D4DC4
  c->r[19]=c->r[3]|c->r[3]; // 801D4DC8
  c->r[0]=R8(c->r[16]+0x000006E9u); // 801D4DCC
  cmps(c,0,(int32_t)c->r[0],0); // 801D4DD0
  if (!crb(c,2)) { goto L_801D4E2C; } // 801D4DD4
  c->r[0]=0u+0x0000000Au; // 801D4DD8
  c->r[3]=c->r[16]|c->r[16]; // 801D4DDC
  c->r[14]=0u+0x00000000u; // 801D4DE0
  c->r[17]=0u+0x00000000u; // 801D4DE4
  c->ctr=c->r[0]; // 801D4DE8
  c->r[0]=c->r[0]|0x00000000u; // 801D4DEC
L_801D4DF0:;
  c->r[0]=R8(c->r[3]+0x0000013Du); // 801D4DF0
  cmps(c,0,(int32_t)c->r[0],0); // 801D4DF4
  if (!crb(c,2)) { goto L_801D4E1C; } // 801D4DF8
  c->r[4]=c->r[17]|c->r[17]; // 801D4DFC
  c->r[3]=c->r[24]+0x000002CCu; // 801D4E00
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D4E04
  c->lr=0x801D4E0Cu; f_801D94A0(c); // 801D4E08
  c->r[0]=(uint32_t)((int32_t)c->r[17]*(int32_t)96); // 801D4E0C
  c->r[3]=c->r[16]+c->r[0]; // 801D4E10
  c->r[14]=c->r[3]+0x000000E4u; // 801D4E14
  goto L_801D4E34; // 801D4E18
L_801D4E1C:;
  c->r[3]=c->r[3]+0x00000060u; // 801D4E1C
  c->r[17]=c->r[17]+0x00000001u; // 801D4E20
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D4DF0; } // 801D4E24
  goto L_801D4E34; // 801D4E28
L_801D4E2C:;
  c->r[3]=R32(c->r[16]+0x00000018u); // 801D4E2C
  c->r[14]=R32(c->r[3]+0x00000000u); // 801D4E30
L_801D4E34:;
  c->r[3]=c->r[19]|c->r[19]; // 801D4E34
  c->lr=0x801D4E3Cu; f_8018D6E0(c); // 801D4E38
  cmps(c,0,(int32_t)c->r[14],0); // 801D4E3C
  if (!crb(c,2)) { goto L_801D4E58; } // 801D4E40
  c->lr=0x801D4E48u; f_8018D6A0(c); // 801D4E44
  c->lr=0x801D4E4Cu; f_8018D6E0(c); // 801D4E48
  c->r[3]=c->r[25]+0x00000000u; // 801D4E4C
  c->r[15]=c->r[15]+0xFFFFFFFFu; // 801D4E50
  c->r[14]=c->r[3]+0x00000444u; // 801D4E54
L_801D4E58:;
  c->r[16]=c->r[25]+0x000008B8u; // 801D4E58
  c->r[3]=c->r[14]+0x00000040u; // 801D4E5C
  c->r[4]=c->r[16]+0x000003D5u; // 801D4E60
  c->r[5]=0u+0x00000006u; // 801D4E64
  c->lr=0x801D4E6Cu; f_80004364(c); // 801D4E68
  c->r[3]=c->r[14]|c->r[14]; // 801D4E6C
  c->r[4]=c->r[16]+0x000003DBu; // 801D4E70
  c->r[5]=0u+0x00000013u; // 801D4E74
  c->lr=0x801D4E7Cu; f_80004364(c); // 801D4E78
  c->r[3]=c->r[14]+0x00000046u; // 801D4E7C
  c->r[4]=c->r[16]+0x000003EFu; // 801D4E80
  c->r[5]=0u+0x00000010u; // 801D4E84
  c->lr=0x801D4E8Cu; f_80004364(c); // 801D4E88
  c->r[0]=0u+0x00000001u; // 801D4E8C
  W8(c->r[14]+0x00000059u,c->r[0]); // 801D4E90
  c->r[0]=0u+0x00000000u; // 801D4E94
  c->r[3]=0u+0x00010000u; // 801D4E98
  W8(c->r[14]+0x0000005Bu,c->r[0]); // 801D4E9C
  c->r[5]=0u+0x00000002u; // 801D4EA0
  c->r[4]=c->r[3]+0xFFFF8074u; // 801D4EA4
  c->r[0]=0u+0x00000003u; // 801D4EA8
  W8(c->r[14]+0x00000057u,c->r[5]); // 801D4EAC
  c->r[3]=c->r[24]+0x00000378u; // 801D4EB0
  W16(c->r[14]+0x0000005Eu,c->r[4]); // 801D4EB4
  W8(c->r[14]+0x00000058u,c->r[0]); // 801D4EB8
  W8(c->r[14]+0x0000005Cu,c->r[0]); // 801D4EBC
  c->r[4]=R8(c->r[14]+0x00000040u); // 801D4EC0
  c->r[5]=R8(c->r[14]+0x00000041u); // 801D4EC4
  c->r[6]=R8(c->r[14]+0x00000042u); // 801D4EC8
  c->r[7]=R8(c->r[14]+0x00000043u); // 801D4ECC
  c->r[8]=R8(c->r[14]+0x00000044u); // 801D4ED0
  c->r[9]=R8(c->r[14]+0x00000045u); // 801D4ED4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D4ED8
  c->lr=0x801D4EE0u; f_801D94A0(c); // 801D4EDC
  c->r[4]=c->r[14]|c->r[14]; // 801D4EE0
  c->r[3]=c->r[24]+0x000005F0u; // 801D4EE4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D4EE8
  c->lr=0x801D4EF0u; f_801D94A0(c); // 801D4EEC
  c->r[0]=rotl(c->r[15],0)&0x000000FFu; // 801D4EF0
  c->r[4]=0u+0x00000000u; // 801D4EF4
  c->r[14]=(uint32_t)((int32_t)c->r[0]*(int32_t)70); // 801D4EF8
  c->r[5]=0u+0x00000046u; // 801D4EFC
  c->r[3]=c->r[16]+c->r[14]; // 801D4F00
  c->r[17]=c->r[3]+0x00000001u; // 801D4F04
  c->r[3]=c->r[17]|c->r[17]; // 801D4F08
  c->lr=0x801D4F10u; f_800046B4(c); // 801D4F0C
  c->r[3]=c->r[17]|c->r[17]; // 801D4F10
  c->r[4]=c->r[16]+0x000003D5u; // 801D4F14
  c->r[5]=0u+0x00000006u; // 801D4F18
  c->lr=0x801D4F20u; f_80004364(c); // 801D4F1C
  c->r[3]=c->r[16]+c->r[14]; // 801D4F20
  c->r[4]=c->r[16]+0x000003DBu; // 801D4F24
  c->r[3]=c->r[3]+0x00000007u; // 801D4F28
  c->r[5]=0u+0x00000013u; // 801D4F2C
  c->lr=0x801D4F34u; f_80004364(c); // 801D4F30
  c->r[15]=c->r[15]+0x00000001u; // 801D4F34
L_801D4F38:;
  c->r[16]=c->r[25]+0x00000000u; // 801D4F38
  c->r[3]=c->r[25]+0x00001F60u; // 801D4F3C
  c->r[17]=0u+0x00000001u; // 801D4F40
  W8(c->r[25]+0x000008B8u,c->r[15]); // 801D4F44
  c->r[28]=R8(c->r[25]+0x00001F60u); // 801D4F48
  c->r[22]=c->r[3]+0x000001AFu; // 801D4F4C
  W8(c->r[16]+0x000006E9u,c->r[17]); // 801D4F50
  c->r[23]=c->r[3]+0x000001B5u; // 801D4F54
  c->r[26]=c->r[3]+0x000001F5u; // 801D4F58
  c->r[27]=0u+0x00000005u; // 801D4F5C
  c->r[15]=0u+0x00000003u; // 801D4F60
  c->r[14]=0u+0x00000002u; // 801D4F64
  c->r[30]=0u+0x00010000u; // 801D4F68
  c->r[29]=0u+0x0000000Au; // 801D4F6C
L_801D4F70:;
  cmps(c,0,(int32_t)c->r[28],0); // 801D4F70
  if (crb(c,2)) { goto L_801D510C; } // 801D4F74
  c->r[3]=c->r[22]|c->r[22]; // 801D4F78
  c->r[4]=c->r[1]+0x00000008u; // 801D4F7C
  c->r[5]=0u+0x00000006u; // 801D4F80
  c->lr=0x801D4F88u; f_8020BD24(c); // 801D4F84
  cmps(c,0,(int32_t)c->r[3],0); // 801D4F88
  if (crb(c,2)) { goto L_801D50F8; } // 801D4F8C
  c->r[21]=R8(c->r[25]+0x000008B8u); // 801D4F90
  c->r[20]=c->r[18]|c->r[18]; // 801D4F94
  c->r[19]=0u+0x00000000u; // 801D4F98
  goto L_801D4FC8; // 801D4F9C
L_801D4FA0:;
  c->r[3]=c->r[20]|c->r[20]; // 801D4FA0
  c->r[4]=c->r[22]|c->r[22]; // 801D4FA4
  c->r[5]=0u+0x00000006u; // 801D4FA8
  c->lr=0x801D4FB0u; f_8020BD24(c); // 801D4FAC
  cmps(c,0,(int32_t)c->r[3],0); // 801D4FB0
  if (!crb(c,2)) { goto L_801D4FC0; } // 801D4FB4
  c->r[0]=0u+0x00000001u; // 801D4FB8
  goto L_801D4FD4; // 801D4FBC
L_801D4FC0:;
  c->r[20]=c->r[20]+0x00000046u; // 801D4FC0
  c->r[19]=c->r[19]+0x00000001u; // 801D4FC4
L_801D4FC8:;
  cmps(c,0,(int32_t)c->r[19],(int32_t)c->r[21]); // 801D4FC8
  if (crb(c,0)) { IRQCHK(c); goto L_801D4FA0; } // 801D4FCC
  c->r[0]=0u+0x00000000u; // 801D4FD0
L_801D4FD4:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D4FD4
  if (!crb(c,2)) { goto L_801D50F8; } // 801D4FD8
  c->lr=0x801D4FE0u; f_8018D6A0(c); // 801D4FDC
  c->r[0]=R8(c->r[16]+0x000006E9u); // 801D4FE0
  c->r[20]=c->r[3]|c->r[3]; // 801D4FE4
  cmps(c,0,(int32_t)c->r[0],0); // 801D4FE8
  if (!crb(c,2)) { goto L_801D503C; } // 801D4FEC
  c->r[3]=c->r[16]|c->r[16]; // 801D4FF0
  c->r[21]=0u+0x00000000u; // 801D4FF4
  c->r[19]=0u+0x00000000u; // 801D4FF8
  c->ctr=c->r[29]; // 801D4FFC
L_801D5000:;
  c->r[0]=R8(c->r[3]+0x0000013Du); // 801D5000
  cmps(c,0,(int32_t)c->r[0],0); // 801D5004
  if (!crb(c,2)) { goto L_801D502C; } // 801D5008
  c->r[4]=c->r[19]|c->r[19]; // 801D500C
  c->r[3]=c->r[24]+0x000002CCu; // 801D5010
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D5014
  c->lr=0x801D501Cu; f_801D94A0(c); // 801D5018
  c->r[0]=(uint32_t)((int32_t)c->r[19]*(int32_t)96); // 801D501C
  c->r[3]=c->r[16]+c->r[0]; // 801D5020
  c->r[21]=c->r[3]+0x000000E4u; // 801D5024
  goto L_801D5044; // 801D5028
L_801D502C:;
  c->r[3]=c->r[3]+0x00000060u; // 801D502C
  c->r[19]=c->r[19]+0x00000001u; // 801D5030
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D5000; } // 801D5034
  goto L_801D5044; // 801D5038
L_801D503C:;
  c->r[3]=R32(c->r[16]+0x00000018u); // 801D503C
  c->r[21]=R32(c->r[3]+0x00000000u); // 801D5040
L_801D5044:;
  c->r[3]=c->r[20]|c->r[20]; // 801D5044
  c->lr=0x801D504Cu; f_8018D6E0(c); // 801D5048
  cmps(c,0,(int32_t)c->r[21],0); // 801D504C
  if (crb(c,2)) { goto L_801D50F8; } // 801D5050
  c->r[4]=c->r[22]|c->r[22]; // 801D5054
  c->r[3]=c->r[21]+0x00000040u; // 801D5058
  c->r[5]=0u+0x00000006u; // 801D505C
  c->lr=0x801D5064u; f_80004364(c); // 801D5060
  c->r[3]=c->r[21]|c->r[21]; // 801D5064
  c->r[4]=c->r[23]|c->r[23]; // 801D5068
  c->r[5]=0u+0x00000040u; // 801D506C
  c->lr=0x801D5074u; f_80004364(c); // 801D5070
  c->r[4]=c->r[26]|c->r[26]; // 801D5074
  c->r[3]=c->r[21]+0x00000046u; // 801D5078
  c->r[5]=0u+0x00000010u; // 801D507C
  c->lr=0x801D5084u; f_80004364(c); // 801D5080
  W8(c->r[21]+0x00000059u,c->r[17]); // 801D5084
  c->r[3]=c->r[21]|c->r[21]; // 801D5088
  c->r[4]=c->r[24]+0x000005FCu; // 801D508C
  c->r[5]=0u+0x00000013u; // 801D5090
  W8(c->r[21]+0x0000005Bu,c->r[17]); // 801D5094
  W8(c->r[21]+0x0000005Cu,c->r[15]); // 801D5098
  c->lr=0x801D50A0u; f_8020BD24(c); // 801D509C
  cmps(c,0,(int32_t)c->r[3],0); // 801D50A0
  if (!crb(c,2)) { goto L_801D50B8; } // 801D50A4
  W8(c->r[21]+0x00000057u,c->r[14]); // 801D50A8
  c->r[0]=c->r[30]+0xFFFF8074u; // 801D50AC
  W16(c->r[21]+0x0000005Eu,c->r[0]); // 801D50B0
  W8(c->r[21]+0x00000058u,c->r[15]); // 801D50B4
L_801D50B8:;
  c->r[4]=R8(c->r[21]+0x00000040u); // 801D50B8
  c->r[3]=c->r[24]+0x00000378u; // 801D50BC
  c->r[5]=R8(c->r[21]+0x00000041u); // 801D50C0
  c->r[6]=R8(c->r[21]+0x00000042u); // 801D50C4
  c->r[7]=R8(c->r[21]+0x00000043u); // 801D50C8
  c->r[8]=R8(c->r[21]+0x00000044u); // 801D50CC
  c->r[9]=R8(c->r[21]+0x00000045u); // 801D50D0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D50D4
  c->lr=0x801D50DCu; f_801D94A0(c); // 801D50D8
  c->r[4]=c->r[21]|c->r[21]; // 801D50DC
  c->r[3]=c->r[24]+0x000005F0u; // 801D50E0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D50E4
  c->lr=0x801D50ECu; f_801D94A0(c); // 801D50E8
  c->r[3]=c->r[21]|c->r[21]; // 801D50EC
  c->lr=0x801D50F4u; f_801D72B0(c); // 801D50F0
  c->r[28]=c->r[28]+0xFFFFFFFFu; // 801D50F4
L_801D50F8:;
  c->r[27]=addc(c,c->r[27],0xFFFFFFFFu,0); cr0(c,c->r[27]); // 801D50F8
  c->r[23]=c->r[23]+0xFFFFFFAAu; // 801D50FC
  c->r[26]=c->r[26]+0xFFFFFFAAu; // 801D5100
  c->r[22]=c->r[22]+0xFFFFFFAAu; // 801D5104
  if (!crb(c,0)) { IRQCHK(c); goto L_801D4F70; } // 801D5108
L_801D510C:;
  c->r[5]=c->r[25]+0x00000000u; // 801D510C
  c->r[3]=0u+0x00000000u; // 801D5110
  c->r[0]=0u+0x00000004u; // 801D5114
  W8(c->r[5]+0x000006E9u,c->r[3]); // 801D5118
  c->r[3]=c->r[25]+0x00001F60u; // 801D511C
  c->r[4]=0u+0x00000000u; // 801D5120
  W8(c->r[5]+0x00000010u,c->r[0]); // 801D5124
  c->r[5]=0u+0x00000205u; // 801D5128
  c->lr=0x801D5130u; f_800046B4(c); // 801D512C
  c->r[3]=c->r[25]+0x000008B8u; // 801D5130
  c->lr=0x801D5138u; f_801B8200(c); // 801D5134
  c->r[3]=c->r[25]+0x00001F60u; // 801D5138
  c->lr=0x801D5140u; f_801B8220(c); // 801D513C
  c->r[3]=0u+0x801D0000u; // 801D5140
  c->r[3]=c->r[3]+0x00004AE0u; // 801D5144
  c->lr=0x801D514Cu; f_801B79D0(c); // 801D5148
  c->r[11]=c->r[1]+0x00000060u; // 801D514C
  c->r[3]=0u+0x00000005u; // 801D5150
  c->lr=0x801D5158u; f_80207A38(c); // 801D5154
  c->r[0]=R32(c->r[1]+0x00000064u); // 801D5158
  c->lr=c->r[0]; // 801D515C
  c->r[1]=c->r[1]+0x00000060u; // 801D5160
  return; // 801D5164
}

// __wudNandResultCallback
void f_801D5170(Ctx* __restrict c) {
  trace_call(0x801D5170u);
  c->r[4]=R32(c->r[13]+0xFFFFB688u); // 801D5170
  c->r[0]=0u+0x00000000u; // 801D5174
  W8(c->r[13]+0xFFFFB68Cu,c->r[0]); // 801D5178
  cmps(c,0,(int32_t)c->r[4],1); // 801D517C
  if (crb(c,2)) { goto L_801D5198; } // 801D5180
  cmps(c,0,(int32_t)c->r[4],2); // 801D5184
  if (crb(c,2)) { goto L_801D51B0; } // 801D5188
  cmps(c,0,(int32_t)c->r[4],3); // 801D518C
  if (crb(c,2)) { goto L_801D51C8; } // 801D5190
  goto L_801D51E4; // 801D5194
L_801D5198:;
  cmps(c,0,(int32_t)c->r[3],0); // 801D5198
  c->r[0]=0u+0x000000FFu; // 801D519C
  if (!crb(c,2)) { goto L_801D51A8; } // 801D51A0
  c->r[0]=c->r[4]+0x00000001u; // 801D51A4
L_801D51A8:;
  W32(c->r[13]+0xFFFFB688u,c->r[0]); // 801D51A8
  return; // 801D51AC
L_801D51B0:;
  cmps(c,0,(int32_t)c->r[3],0); // 801D51B0
  c->r[0]=0u+0x00000005u; // 801D51B4
  if (!crb(c,2)) { goto L_801D51C0; } // 801D51B8
  c->r[0]=c->r[4]+0x00000001u; // 801D51BC
L_801D51C0:;
  W32(c->r[13]+0xFFFFB688u,c->r[0]); // 801D51C0
  return; // 801D51C4
L_801D51C8:;
  c->r[0]=c->r[3]+0xFFFC0000u; // 801D51C8
  c->r[3]=0u+0x00000005u; // 801D51CC
  cmpu(c,0,c->r[0],0x0000B000u); // 801D51D0
  if (!crb(c,2)) { goto L_801D51DC; } // 801D51D4
  c->r[3]=c->r[4]+0x00000001u; // 801D51D8
L_801D51DC:;
  W32(c->r[13]+0xFFFFB688u,c->r[3]); // 801D51DC
  return; // 801D51E0
L_801D51E4:;
  c->r[0]=0u+0x00000006u; // 801D51E4
  W32(c->r[13]+0xFFFFB688u,c->r[0]); // 801D51E8
  return; // 801D51EC
}

// __wudNandFlushCallback
void f_801D51F0(Ctx* __restrict c) {
  trace_call(0x801D51F0u);
  c->r[3]=R32(c->r[13]+0xFFFFB688u); // 801D51F0
  c->r[0]=0u+0x00000000u; // 801D51F4
  W8(c->r[13]+0xFFFFB68Cu,c->r[0]); // 801D51F8
  c->r[0]=c->r[3]+0x00000001u; // 801D51FC
  W32(c->r[13]+0xFFFFB688u,c->r[0]); // 801D5200
  return; // 801D5204
}

// __wudGetDevInfoFromWiiFit
void f_801D5210(Ctx* __restrict c) {
  trace_call(0x801D5210u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5210
  c->r[0]=c->lr; // 801D5214
  W32(c->r[1]+0x00000044u,c->r[0]); // 801D5218
  c->r[11]=c->r[1]+0x00000040u; // 801D521C
  c->lr=0x801D5224u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D5220
  c->r[0]=R8(c->r[13]+0xFFFFB68Cu); // 801D5224
  c->r[3]=0u+0x00000000u; // 801D5228
  c->r[30]=0u+0x80280000u; // 801D522C
  c->r[31]=0u+0x802E0000u; // 801D5230
  cmps(c,0,(int32_t)c->r[0],0); // 801D5234
  W32(c->r[1]+0x00000018u,c->r[3]); // 801D5238
  c->r[30]=c->r[30]+0xFFFFCB10u; // 801D523C
  c->r[31]=c->r[31]+0xFFFF9DC0u; // 801D5240
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 801D5244
  c->r[27]=c->r[30]+0x00000428u; // 801D5248
  c->r[29]=c->r[13]+0xFFFFAB58u; // 801D524C
  c->r[28]=0u+0x00000002u; // 801D5250
  W32(c->r[1]+0x00000020u,c->r[3]); // 801D5254
  W32(c->r[1]+0x00000024u,c->r[3]); // 801D5258
  if (crb(c,2)) { goto L_801D5268; } // 801D525C
  c->r[3]=0u+0x00000002u; // 801D5260
  goto L_801D5728; // 801D5264
L_801D5268:;
  c->r[0]=R32(c->r[13]+0xFFFFB678u); // 801D5268
  cmps(c,0,(int32_t)c->r[0],0); // 801D526C
  if (crb(c,2)) { goto L_801D527C; } // 801D5270
  c->r[0]=rotl(c->r[0],0)&0x0000001Fu; cr0(c,c->r[0]); // 801D5274
  if (crb(c,2)) { goto L_801D5290; } // 801D5278
L_801D527C:;
  c->r[5]=c->r[30]+0x00000610u; // 801D527C
  c->r[3]=c->r[13]+0xFFFFAB60u; // 801D5280
  c->r[4]=0u+0x00000A90u; // 801D5284
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D5288
  c->lr=0x801D5290u; f_80189A40(c); // 801D528C
L_801D5290:;
  c->r[0]=R32(c->r[13]+0xFFFFB688u); // 801D5290
  cmps(c,0,(int32_t)c->r[0],3); // 801D5294
  if (crb(c,2)) { goto L_801D5378; } // 801D5298
  if (!crb(c,0)) { goto L_801D52B8; } // 801D529C
  cmps(c,0,(int32_t)c->r[0],1); // 801D52A0
  if (crb(c,2)) { goto L_801D52F8; } // 801D52A4
  if (!crb(c,0)) { goto L_801D5350; } // 801D52A8
  cmps(c,0,(int32_t)c->r[0],0); // 801D52AC
  if (!crb(c,0)) { goto L_801D52C8; } // 801D52B0
  goto L_801D5720; // 801D52B4
L_801D52B8:;
  cmps(c,0,(int32_t)c->r[0],5); // 801D52B8
  if (crb(c,2)) { goto L_801D5700; } // 801D52BC
  if (!crb(c,0)) { goto L_801D5720; } // 801D52C0
  goto L_801D53A4; // 801D52C4
L_801D52C8:;
  c->lr=0x801D52CCu; f_801B55C0(c); // 801D52C8
  cmps(c,0,(int32_t)c->r[3],0); // 801D52CC
  if (!crb(c,2)) { goto L_801D52DC; } // 801D52D0
  c->r[0]=0u+0x00000001u; // 801D52D4
  goto L_801D52E0; // 801D52D8
L_801D52DC:;
  c->r[0]=0u+0x000000FFu; // 801D52DC
L_801D52E0:;
  W32(c->r[13]+0xFFFFB688u,c->r[0]); // 801D52E0
  c->r[4]=c->r[3]|c->r[3]; // 801D52E4
  c->r[3]=c->r[30]+0x00000668u; // 801D52E8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D52EC
  c->lr=0x801D52F4u; f_801D94A0(c); // 801D52F0
  goto L_801D5724; // 801D52F4
L_801D52F8:;
  c->lr=0x801D52FCu; f_801B85E0(c); // 801D52F8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[0]); // 801D52FC
  if (!crb(c,2)) { goto L_801D5344; } // 801D5300
  c->r[4]=c->r[27]|c->r[27]; // 801D5304
  c->r[3]=c->r[30]+0x00000454u; // 801D5308
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D530C
  c->lr=0x801D5314u; f_801D94A0(c); // 801D5310
  c->r[3]=0u+0x00000001u; // 801D5314
  c->r[0]=0u+0x00000000u; // 801D5318
  c->r[6]=0u+0x801D0000u; // 801D531C
  W8(c->r[13]+0xFFFFB68Cu,c->r[3]); // 801D5320
  c->r[3]=c->r[27]|c->r[27]; // 801D5324
  c->r[4]=c->r[31]+0x00000E00u; // 801D5328
  W32(c->r[13]+0xFFFFB684u,c->r[0]); // 801D532C
  c->r[6]=c->r[6]+0x00005170u; // 801D5330
  c->r[7]=c->r[31]+0x00000E8Cu; // 801D5334
  c->r[5]=0u+0x00000001u; // 801D5338
  c->lr=0x801D5340u; f_801B4430(c); // 801D533C
  goto L_801D5724; // 801D5340
L_801D5344:;
  c->r[0]=0u+0x00000006u; // 801D5344
  W32(c->r[13]+0xFFFFB688u,c->r[0]); // 801D5348
  goto L_801D5724; // 801D534C
L_801D5350:;
  c->r[0]=0u+0x00000001u; // 801D5350
  c->r[6]=0u+0x801D0000u; // 801D5354
  W8(c->r[13]+0xFFFFB68Cu,c->r[0]); // 801D5358
  c->r[3]=c->r[31]+0x00000E00u; // 801D535C
  c->r[6]=c->r[6]+0x00005170u; // 801D5360
  c->r[7]=c->r[31]+0x00000E8Cu; // 801D5364
  c->r[4]=0u+0x00000000u; // 801D5368
  c->r[5]=0u+0x00000000u; // 801D536C
  c->lr=0x801D5374u; f_801B3B80(c); // 801D5370
  goto L_801D5724; // 801D5374
L_801D5378:;
  c->r[0]=0u+0x00000001u; // 801D5378
  c->r[5]=0u+0x00050000u; // 801D537C
  c->r[6]=0u+0x801D0000u; // 801D5380
  W8(c->r[13]+0xFFFFB68Cu,c->r[0]); // 801D5384
  c->r[4]=R32(c->r[13]+0xFFFFB678u); // 801D5388
  c->r[3]=c->r[31]+0x00000E00u; // 801D538C
  c->r[5]=c->r[5]+0xFFFFB000u; // 801D5390
  c->r[6]=c->r[6]+0x00005170u; // 801D5394
  c->r[7]=c->r[31]+0x00000E8Cu; // 801D5398
  c->lr=0x801D53A0u; f_801B3A10(c); // 801D539C
  goto L_801D5724; // 801D53A0
L_801D53A4:;
  c->r[4]=R32(c->r[13]+0xFFFFB678u); // 801D53A4
  c->r[3]=c->r[31]+0x00000D20u; // 801D53A8
  c->r[5]=0u+0x00000080u; // 801D53AC
  c->r[4]=c->r[4]+0x00050000u; // 801D53B0
  c->r[4]=c->r[4]+0xFFFFAF18u; // 801D53B4
  c->lr=0x801D53BCu; f_80004364(c); // 801D53B8
  c->r[4]=R32(c->r[13]+0xFFFFB678u); // 801D53BC
  c->r[3]=c->r[1]+0x00000010u; // 801D53C0
  c->r[5]=0u+0x00000004u; // 801D53C4
  c->r[4]=c->r[4]+0x00050000u; // 801D53C8
  c->r[4]=c->r[4]+0xFFFFAF98u; // 801D53CC
  c->lr=0x801D53D4u; f_80004364(c); // 801D53D0
  c->r[4]=R32(c->r[1]+0x00000010u); // 801D53D4
  c->r[3]=c->r[30]+0x00000678u; // 801D53D8
  c->r[5]=c->r[4]|c->r[4]; // 801D53DC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D53E0
  c->lr=0x801D53E8u; f_801D94A0(c); // 801D53E4
  c->r[3]=0u+0x00010000u; // 801D53E8
  c->r[6]=R32(c->r[13]+0xFFFFB678u); // 801D53EC
  c->r[0]=c->r[3]+0xFFFF95E3u; // 801D53F0
  c->r[5]=0u+0x00000000u; // 801D53F4
  c->r[4]=0u+0x00000000u; // 801D53F8
  c->ctr=c->r[0]; // 801D53FC
L_801D5400:;
  c->r[3]=R16(c->r[6]+0x00000000u); // 801D5400
  c->r[0]=~(c->r[3]|c->r[3]); // 801D5404
  c->r[5]=c->r[5]+c->r[3]; // 801D5408
  c->r[3]=R16(c->r[6]+0x00000002u); // 801D540C
  c->r[0]=c->r[4]+c->r[0]; // 801D5410
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 801D5414
  c->r[0]=~(c->r[3]|c->r[3]); // 801D5418
  c->r[5]=c->r[5]+c->r[3]; // 801D541C
  c->r[3]=R16(c->r[6]+0x00000004u); // 801D5420
  c->r[0]=c->r[4]+c->r[0]; // 801D5424
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 801D5428
  c->r[0]=~(c->r[3]|c->r[3]); // 801D542C
  c->r[5]=c->r[5]+c->r[3]; // 801D5430
  c->r[3]=R16(c->r[6]+0x00000006u); // 801D5434
  c->r[0]=c->r[4]+c->r[0]; // 801D5438
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 801D543C
  c->r[6]=c->r[6]+0x00000008u; // 801D5440
  c->r[0]=~(c->r[3]|c->r[3]); // 801D5444
  c->r[5]=c->r[5]+c->r[3]; // 801D5448
  c->r[0]=c->r[4]+c->r[0]; // 801D544C
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 801D5450
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D5400; } // 801D5454
  c->r[3]=R32(c->r[13]+0xFFFFB678u); // 801D5458
  c->r[4]=(rotl(c->r[5],16)&0xFFFF0000u)|(c->r[4]&~0xFFFF0000u); // 801D545C
  c->r[0]=0u+0x00000008u; // 801D5460
  W32(c->r[13]+0xFFFFB684u,c->r[4]); // 801D5464
  c->r[3]=c->r[3]+0x00050000u; // 801D5468
  c->r[5]=rotl(c->r[4],16)&0x0000FFFFu; // 801D546C
  c->r[6]=c->r[3]+0xFFFFAF18u; // 801D5470
  c->r[27]=rotl(c->r[4],0)&0x0000FFFFu; // 801D5474
  c->ctr=c->r[0]; // 801D5478
L_801D547C:;
  c->r[3]=R16(c->r[6]+0x00000000u); // 801D547C
  c->r[0]=~(c->r[3]|c->r[3]); // 801D5480
  c->r[5]=c->r[5]+c->r[3]; // 801D5484
  c->r[3]=R16(c->r[6]+0x00000002u); // 801D5488
  c->r[0]=c->r[27]+c->r[0]; // 801D548C
  c->r[27]=rotl(c->r[0],0)&0x0000FFFFu; // 801D5490
  c->r[0]=~(c->r[3]|c->r[3]); // 801D5494
  c->r[5]=c->r[5]+c->r[3]; // 801D5498
  c->r[3]=R16(c->r[6]+0x00000004u); // 801D549C
  c->r[0]=c->r[27]+c->r[0]; // 801D54A0
  c->r[27]=rotl(c->r[0],0)&0x0000FFFFu; // 801D54A4
  c->r[0]=~(c->r[3]|c->r[3]); // 801D54A8
  c->r[5]=c->r[5]+c->r[3]; // 801D54AC
  c->r[3]=R16(c->r[6]+0x00000006u); // 801D54B0
  c->r[0]=c->r[27]+c->r[0]; // 801D54B4
  c->r[27]=rotl(c->r[0],0)&0x0000FFFFu; // 801D54B8
  c->r[0]=~(c->r[3]|c->r[3]); // 801D54BC
  c->r[5]=c->r[5]+c->r[3]; // 801D54C0
  c->r[3]=R16(c->r[6]+0x00000008u); // 801D54C4
  c->r[0]=c->r[27]+c->r[0]; // 801D54C8
  c->r[27]=rotl(c->r[0],0)&0x0000FFFFu; // 801D54CC
  c->r[0]=~(c->r[3]|c->r[3]); // 801D54D0
  c->r[5]=c->r[5]+c->r[3]; // 801D54D4
  c->r[3]=R16(c->r[6]+0x0000000Au); // 801D54D8
  c->r[0]=c->r[27]+c->r[0]; // 801D54DC
  c->r[27]=rotl(c->r[0],0)&0x0000FFFFu; // 801D54E0
  c->r[0]=~(c->r[3]|c->r[3]); // 801D54E4
  c->r[5]=c->r[5]+c->r[3]; // 801D54E8
  c->r[3]=R16(c->r[6]+0x0000000Cu); // 801D54EC
  c->r[0]=c->r[27]+c->r[0]; // 801D54F0
  c->r[27]=rotl(c->r[0],0)&0x0000FFFFu; // 801D54F4
  c->r[0]=~(c->r[3]|c->r[3]); // 801D54F8
  c->r[5]=c->r[5]+c->r[3]; // 801D54FC
  c->r[3]=R16(c->r[6]+0x0000000Eu); // 801D5500
  c->r[0]=c->r[27]+c->r[0]; // 801D5504
  c->r[27]=rotl(c->r[0],0)&0x0000FFFFu; // 801D5508
  c->r[6]=c->r[6]+0x00000010u; // 801D550C
  c->r[0]=~(c->r[3]|c->r[3]); // 801D5510
  c->r[5]=c->r[5]+c->r[3]; // 801D5514
  c->r[0]=c->r[27]+c->r[0]; // 801D5518
  c->r[27]=rotl(c->r[0],0)&0x0000FFFFu; // 801D551C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D547C; } // 801D5520
  c->r[27]=(rotl(c->r[5],16)&0xFFFF0000u)|(c->r[27]&~0xFFFF0000u); // 801D5524
  c->r[3]=c->r[30]+0x00000688u; // 801D5528
  c->r[4]=c->r[27]|c->r[27]; // 801D552C
  c->r[5]=c->r[27]|c->r[27]; // 801D5530
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D5534
  c->lr=0x801D553Cu; f_801D94A0(c); // 801D5538
  c->r[0]=R32(c->r[1]+0x00000010u); // 801D553C
  cmpu(c,0,c->r[0],c->r[27]); // 801D5540
  if (crb(c,2)) { goto L_801D5560; } // 801D5544
  c->r[0]=0u+0x00000005u; // 801D5548
  W32(c->r[13]+0xFFFFB688u,c->r[0]); // 801D554C
  c->r[3]=c->r[30]+0x00000698u; // 801D5550
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D5554
  c->lr=0x801D555Cu; f_801D94A0(c); // 801D5558
  goto L_801D5724; // 801D555C
L_801D5560:;
  c->r[3]=c->r[31]+0x00000D20u; // 801D5560
  c->r[4]=c->r[1]+0x00000018u; // 801D5564
  c->r[5]=0u+0x00000006u; // 801D5568
  c->lr=0x801D5570u; f_8020BD24(c); // 801D556C
  cmps(c,0,(int32_t)c->r[3],0); // 801D5570
  if (!crb(c,2)) { goto L_801D5590; } // 801D5574
  c->r[0]=0u+0x00000005u; // 801D5578
  W32(c->r[13]+0xFFFFB688u,c->r[0]); // 801D557C
  c->r[3]=c->r[30]+0x000006B8u; // 801D5580
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D5584
  c->lr=0x801D558Cu; f_801D94A0(c); // 801D5588
  goto L_801D5724; // 801D558C
L_801D5590:;
  c->lr=0x801D5594u; f_80187B30(c); // 801D5590
  c->r[4]=c->r[29]|c->r[29]; // 801D5594
  c->r[5]=0u+0x00000004u; // 801D5598
  c->lr=0x801D55A0u; f_8020BD24(c); // 801D559C
  cmps(c,0,(int32_t)c->r[3],0); // 801D55A0
  if (crb(c,2)) { goto L_801D55DC; } // 801D55A4
  c->r[3]=c->r[31]+0x00000D20u; // 801D55A8
  c->r[4]=c->r[1]+0x00000018u; // 801D55AC
  c->r[3]=c->r[3]+0x00000006u; // 801D55B0
  c->r[5]=0u+0x00000010u; // 801D55B4
  c->lr=0x801D55BCu; f_8020BD24(c); // 801D55B8
  cmps(c,0,(int32_t)c->r[3],0); // 801D55BC
  if (!crb(c,2)) { goto L_801D55DC; } // 801D55C0
  c->r[0]=0u+0x00000005u; // 801D55C4
  W32(c->r[13]+0xFFFFB688u,c->r[0]); // 801D55C8
  c->r[3]=c->r[30]+0x000006DCu; // 801D55CC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D55D0
  c->lr=0x801D55D8u; f_801D94A0(c); // 801D55D4
  goto L_801D5724; // 801D55D8
L_801D55DC:;
  c->r[4]=0u+0x00050000u; // 801D55DC
  c->r[3]=R32(c->r[13]+0xFFFFB678u); // 801D55E0
  c->r[5]=c->r[4]+0xFFFFB000u; // 801D55E4
  c->r[4]=0u+0x00000000u; // 801D55E8
  c->lr=0x801D55F0u; f_800046B4(c); // 801D55EC
  c->r[3]=c->r[31]+0x000008B8u; // 801D55F0
  c->r[4]=0u+0x00000000u; // 801D55F4
  c->r[5]=0u+0x00000461u; // 801D55F8
  c->lr=0x801D5600u; f_800046B4(c); // 801D55FC
  c->r[3]=c->r[31]+0x000008B8u; // 801D5600
  c->lr=0x801D5608u; f_801B81F0(c); // 801D5604
  c->r[27]=c->r[31]+0x000008B8u; // 801D5608
  c->r[4]=c->r[31]+0x00000D20u; // 801D560C
  c->r[3]=c->r[27]+0x000003D5u; // 801D5610
  c->r[5]=0u+0x00000006u; // 801D5614
  c->lr=0x801D561Cu; f_80004364(c); // 801D5618
  c->r[29]=c->r[31]+0x00000D20u; // 801D561C
  c->r[3]=c->r[27]+0x000003DBu; // 801D5620
  c->r[4]=c->r[29]+0x00000016u; // 801D5624
  c->r[5]=0u+0x00000040u; // 801D5628
  c->lr=0x801D5630u; f_80004364(c); // 801D562C
  c->r[3]=c->r[27]+0x000003EFu; // 801D5630
  c->r[4]=c->r[29]+0x00000006u; // 801D5634
  c->r[5]=0u+0x00000010u; // 801D5638
  c->lr=0x801D5640u; f_80004364(c); // 801D563C
  c->r[3]=c->r[30]+0x0000070Cu; // 801D5640
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D5644
  c->lr=0x801D564Cu; f_801D94A0(c); // 801D5648
  c->r[4]=R8(c->r[31]+0x00000D20u); // 801D564C
  c->r[3]=c->r[30]+0x00000478u; // 801D5650
  c->r[5]=R8(c->r[29]+0x00000001u); // 801D5654
  c->r[6]=R8(c->r[29]+0x00000002u); // 801D5658
  c->r[7]=R8(c->r[29]+0x00000003u); // 801D565C
  c->r[8]=R8(c->r[29]+0x00000004u); // 801D5660
  c->r[9]=R8(c->r[29]+0x00000005u); // 801D5664
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D5668
  c->lr=0x801D5670u; f_801D94A0(c); // 801D566C
  c->r[0]=R8(c->r[29]+0x0000000Du); // 801D5670
  c->r[3]=c->r[30]+0x00000498u; // 801D5674
  W32(c->r[1]+0x00000008u,c->r[0]); // 801D5678
  c->r[4]=R8(c->r[29]+0x00000006u); // 801D567C
  c->r[5]=R8(c->r[29]+0x00000007u); // 801D5680
  c->r[6]=R8(c->r[29]+0x00000008u); // 801D5684
  c->r[7]=R8(c->r[29]+0x00000009u); // 801D5688
  c->r[8]=R8(c->r[29]+0x0000000Au); // 801D568C
  c->r[9]=R8(c->r[29]+0x0000000Bu); // 801D5690
  c->r[10]=R8(c->r[29]+0x0000000Cu); // 801D5694
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D5698
  c->lr=0x801D56A0u; f_801D94A0(c); // 801D569C
  c->r[0]=R8(c->r[29]+0x00000015u); // 801D56A0
  c->r[3]=c->r[30]+0x00000498u; // 801D56A4
  W32(c->r[1]+0x00000008u,c->r[0]); // 801D56A8
  c->r[4]=R8(c->r[29]+0x0000000Eu); // 801D56AC
  c->r[5]=R8(c->r[29]+0x0000000Fu); // 801D56B0
  c->r[6]=R8(c->r[29]+0x00000010u); // 801D56B4
  c->r[7]=R8(c->r[29]+0x00000011u); // 801D56B8
  c->r[8]=R8(c->r[29]+0x00000012u); // 801D56BC
  c->r[9]=R8(c->r[29]+0x00000013u); // 801D56C0
  c->r[10]=R8(c->r[29]+0x00000014u); // 801D56C4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D56C8
  c->lr=0x801D56D0u; f_801D94A0(c); // 801D56CC
  c->r[4]=c->r[29]+0x00000016u; // 801D56D0
  c->r[3]=c->r[13]+0xFFFFAB50u; // 801D56D4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D56D8
  c->lr=0x801D56E0u; f_801D94A0(c); // 801D56DC
  c->r[3]=c->r[27]|c->r[27]; // 801D56E0
  c->lr=0x801D56E8u; f_801B8200(c); // 801D56E4
  c->r[0]=0u+0x00000001u; // 801D56E8
  c->r[3]=0u+0x801D0000u; // 801D56EC
  W8(c->r[13]+0xFFFFB68Cu,c->r[0]); // 801D56F0
  c->r[3]=c->r[3]+0x000051F0u; // 801D56F4
  c->lr=0x801D56FCu; f_801B79D0(c); // 801D56F8
  goto L_801D5724; // 801D56FC
L_801D5700:;
  c->r[0]=0u+0x00000001u; // 801D5700
  c->r[4]=0u+0x801D0000u; // 801D5704
  W8(c->r[13]+0xFFFFB68Cu,c->r[0]); // 801D5708
  c->r[3]=c->r[31]+0x00000E00u; // 801D570C
  c->r[4]=c->r[4]+0x00005170u; // 801D5710
  c->r[5]=c->r[31]+0x00000E8Cu; // 801D5714
  c->lr=0x801D571Cu; f_801B4620(c); // 801D5718
  goto L_801D5724; // 801D571C
L_801D5720:;
  c->r[28]=0u+0x00000003u; // 801D5720
L_801D5724:;
  c->r[3]=c->r[28]|c->r[28]; // 801D5724
L_801D5728:;
  c->r[11]=c->r[1]+0x00000040u; // 801D5728
  c->lr=0x801D5730u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D572C
  c->r[0]=R32(c->r[1]+0x00000044u); // 801D5730
  c->lr=c->r[0]; // 801D5734
  c->r[1]=c->r[1]+0x00000040u; // 801D5738
  return; // 801D573C
}

// __wudInitHandler
void f_801D5740(Ctx* __restrict c) {
  trace_call(0x801D5740u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5740
  c->r[0]=c->lr; // 801D5744
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D5748
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D574C
  c->r[31]=0u+0x802E0000u; // 801D5750
  c->r[31]=c->r[31]+0xFFFF9DC0u; // 801D5754
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D5758
  c->r[0]=R8(c->r[31]+0x00000010u); // 801D575C
  cmps(c,0,(int32_t)c->r[0],1); // 801D5760
  if (crb(c,2)) { goto L_801D5784; } // 801D5764
  cmps(c,0,(int32_t)c->r[0],3); // 801D5768
  if (crb(c,2)) { goto L_801D5804; } // 801D576C
  cmps(c,0,(int32_t)c->r[0],5); // 801D5770
  if (crb(c,2)) { goto L_801D580C; } // 801D5774
  cmps(c,0,(int32_t)c->r[0],2); // 801D5778
  if (crb(c,2)) { goto L_801D5834; } // 801D577C
  goto L_801D583C; // 801D5780
L_801D5784:;
  c->r[30]=0u+0x00000001u; // 801D5784
  c->lr=0x801D578Cu; f_801915F0(c); // 801D5788
  c->r[5]=0u+0x80000000u; // 801D578C
  c->r[3]=0u+0x10620000u; // 801D5790
  c->r[0]=R32(c->r[5]+0x000000F8u); // 801D5794
  c->r[3]=c->r[3]+0x00004DD3u; // 801D5798
  c->r[5]=R32(c->r[13]+0xFFFFAFD4u); // 801D579C
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801D57A0
  c->r[0]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[0])>>32); // 801D57A4
  c->r[3]=c->r[4]-c->r[5]; // 801D57A8
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 801D57AC
  c->r[0]=divwu(c->r[3],c->r[0]); // 801D57B0
  c->r[0]=addc(c,~c->r[0],0x000001F4u,1); // 801D57B4
  cmps(c,0,(int32_t)c->r[0],0); // 801D57B8
  if (!crb(c,0)) { goto L_801D57FC; } // 801D57BC
  c->lr=0x801D57C4u; f_801B6640(c); // 801D57C0
  cmpu(c,0,c->r[3],0x00000001u); // 801D57C4
  if (crb(c,2)) { goto L_801D57FC; } // 801D57C8
  c->lr=0x801D57D0u; f_801D59B0(c); // 801D57CC
  c->r[0]=R32(c->r[13]+0xFFFFB680u); // 801D57D0
  c->r[30]=0u+0x00000003u; // 801D57D4
  cmps(c,0,(int32_t)c->r[0],0); // 801D57D8
  if (crb(c,2)) { goto L_801D57FC; } // 801D57DC
  c->lr=0x801D57E4u; f_801B85E0(c); // 801D57E0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[0]); // 801D57E4
  if (!crb(c,2)) { goto L_801D57FC; } // 801D57E8
  c->r[0]=0u+0x00000000u; // 801D57EC
  W8(c->r[13]+0xFFFFB68Cu,c->r[0]); // 801D57F0
  c->r[30]=0u+0x00000002u; // 801D57F4
  W32(c->r[13]+0xFFFFB688u,c->r[0]); // 801D57F8
L_801D57FC:;
  W8(c->r[31]+0x00000010u,c->r[30]); // 801D57FC
  goto L_801D583C; // 801D5800
L_801D5804:;
  c->lr=0x801D5808u; f_801D4B30(c); // 801D5804
  goto L_801D583C; // 801D5808
L_801D580C:;
  c->r[3]=c->r[31]+0x00000710u; // 801D580C
  c->lr=0x801D5814u; f_80187FA0(c); // 801D5810
  c->r[0]=0u+0x00000001u; // 801D5814
  c->r[3]=0u+0x801D0000u; // 801D5818
  W8(c->r[31]+0x00000708u,c->r[0]); // 801D581C
  c->r[3]=c->r[3]+0x00007C90u; // 801D5820
  c->lr=0x801D5828u; f_801DF890(c); // 801D5824
  c->r[0]=0u+0x00000006u; // 801D5828
  W8(c->r[31]+0x00000010u,c->r[0]); // 801D582C
  goto L_801D583C; // 801D5830
L_801D5834:;
  c->lr=0x801D5838u; f_801D5210(c); // 801D5834
  W8(c->r[31]+0x00000010u,c->r[3]); // 801D5838
L_801D583C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D583C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D5840
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D5844
  c->lr=c->r[0]; // 801D5848
  c->r[1]=c->r[1]+0x00000010u; // 801D584C
  return; // 801D5850
}

// __wudInitHandler0
void f_801D5860(Ctx* __restrict c) {
  trace_call(0x801D5860u);
  c->r[8]=0u+0x802E0000u; // 801D5860
  c->r[7]=0u+0x801D0000u; // 801D5864
  c->r[8]=c->r[8]+0xFFFFAD20u; // 801D5868
  c->r[5]=0u+0x00000000u; // 801D586C
  c->r[7]=c->r[7]+0x00005740u; // 801D5870
  c->r[6]=0u+0x00000000u; // 801D5874
  c->r[8]=c->r[8]+0x00001000u; // 801D5878
  f_80189550(c); return; // 801D587C
}

// __wudShutdownFlushCallback
void f_801D5880(Ctx* __restrict c) {
  trace_call(0x801D5880u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5880
  c->r[0]=c->lr; // 801D5884
  c->r[6]=0u+0x80280000u; // 801D5888
  c->r[4]=c->r[3]|c->r[3]; // 801D588C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D5890
  c->r[3]=c->r[6]+0xFFFFD230u; // 801D5894
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D5898
  c->r[31]=0u+0x802E0000u; // 801D589C
  c->r[31]=c->r[31]+0xFFFF9DC0u; // 801D58A0
  c->r[5]=R8(c->r[31]+0x00000011u); // 801D58A4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D58A8
  c->lr=0x801D58B0u; f_801D94A0(c); // 801D58AC
  c->r[0]=0u+0x00000003u; // 801D58B0
  W8(c->r[31]+0x00000011u,c->r[0]); // 801D58B4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D58B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D58BC
  c->lr=c->r[0]; // 801D58C0
  c->r[1]=c->r[1]+0x00000010u; // 801D58C4
  return; // 801D58C8
}

// __wudShutdownHandler
void f_801D58D0(Ctx* __restrict c) {
  trace_call(0x801D58D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D58D0
  c->r[0]=c->lr; // 801D58D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D58D8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D58DC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D58E0
  c->r[30]=0u+0x802E0000u; // 801D58E4
  c->r[30]=c->r[30]+0xFFFF9DC0u; // 801D58E8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D58EC
  c->r[31]=c->r[30]+0x00000000u; // 801D58F0
  c->r[0]=R8(c->r[31]+0x00000011u); // 801D58F4
  cmps(c,0,(int32_t)c->r[0],1); // 801D58F8
  if (crb(c,2)) { goto L_801D590C; } // 801D58FC
  cmps(c,0,(int32_t)c->r[0],3); // 801D5900
  if (crb(c,2)) { goto L_801D595C; } // 801D5904
  goto L_801D5968; // 801D5908
L_801D590C:;
  c->r[29]=R32(c->r[13]+0xFFFFB66Cu); // 801D590C
  c->lr=0x801D5914u; f_801B6640(c); // 801D5910
  cmpu(c,0,c->r[3],0x00000001u); // 801D5914
  if (crb(c,2)) { goto L_801D5968; } // 801D5918
  c->r[3]=c->r[30]+0x000008B8u; // 801D591C
  c->lr=0x801D5924u; f_801B8200(c); // 801D5920
  c->r[29]=c->r[29]&c->r[3]; // 801D5924
  c->r[3]=c->r[30]+0x00001F60u; // 801D5928
  c->lr=0x801D5930u; f_801B8220(c); // 801D592C
  c->r[29]=c->r[29]&c->r[3]; cr0(c,c->r[29]); // 801D5930
  if (crb(c,2)) { goto L_801D5950; } // 801D5934
  c->r[0]=0u+0x00000002u; // 801D5938
  c->r[3]=0u+0x801D0000u; // 801D593C
  W8(c->r[31]+0x00000011u,c->r[0]); // 801D5940
  c->r[3]=c->r[3]+0x00005880u; // 801D5944
  c->lr=0x801D594Cu; f_801B79D0(c); // 801D5948
  goto L_801D5968; // 801D594C
L_801D5950:;
  c->r[0]=0u+0x00000003u; // 801D5950
  W8(c->r[31]+0x00000011u,c->r[0]); // 801D5954
  goto L_801D5968; // 801D5958
L_801D595C:;
  c->r[3]=c->r[31]+0x00000710u; // 801D595C
  c->lr=0x801D5964u; f_80187FA0(c); // 801D5960
  c->lr=0x801D5968u; f_801DF918(c); // 801D5964
L_801D5968:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D5968
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D596C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D5970
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D5974
  c->lr=c->r[0]; // 801D5978
  c->r[1]=c->r[1]+0x00000020u; // 801D597C
  return; // 801D5980
}

// __wudShutdownHandler0
void f_801D5990(Ctx* __restrict c) {
  trace_call(0x801D5990u);
  c->r[8]=0u+0x802E0000u; // 801D5990
  c->r[7]=0u+0x801D0000u; // 801D5994
  c->r[8]=c->r[8]+0xFFFFAD20u; // 801D5998
  c->r[5]=0u+0x00000000u; // 801D599C
  c->r[7]=c->r[7]+0x000058D0u; // 801D59A0
  c->r[6]=0u+0x00000000u; // 801D59A4
  c->r[8]=c->r[8]+0x00001000u; // 801D59A8
  f_80189550(c); return; // 801D59AC
}

// __wudClearControlBlock
void f_801D59B0(Ctx* __restrict c) {
  trace_call(0x801D59B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D59B0
  c->r[0]=c->lr; // 801D59B4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D59B8
  c->r[11]=c->r[1]+0x00000030u; // 801D59BC
  c->lr=0x801D59C4u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D59C0
  c->r[31]=0u+0x802E0000u; // 801D59C4
  c->r[3]=0u+0x80280000u; // 801D59C8
  c->r[31]=c->r[31]+0xFFFF9DC0u; // 801D59CC
  c->r[30]=c->r[31]+0x00000000u; // 801D59D0
  c->r[3]=c->r[3]+0xFFFFD268u; // 801D59D4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D59D8
  c->lr=0x801D59E0u; f_801D94A0(c); // 801D59DC
  c->r[0]=0u+0x00000002u; // 801D59E0
  c->r[29]=c->r[31]+0x00000DC0u; // 801D59E4
  c->r[12]=c->r[31]+0x00002168u; // 801D59E8
  c->r[11]=c->r[31]+0x00002188u; // 801D59EC
  c->r[3]=0u+0x00000000u; // 801D59F0
  c->r[28]=0u+0x00000000u; // 801D59F4
  c->ctr=c->r[0]; // 801D59F8
L_801D59FC:;
  c->r[9]=rotl(c->r[3],1)&0x000001FEu; // 801D59FC
  c->r[4]=c->r[3]+0x00000001u; // 801D5A00
  c->r[0]=rotl(c->r[3],2)&0x000003FCu; // 801D5A04
  c->r[8]=c->r[3]+0x00000002u; // 801D5A08
  W32(c->r[29]+c->r[0],c->r[28]); // 801D5A0C
  c->r[10]=rotl(c->r[4],2)&0x000003FCu; // 801D5A10
  c->r[27]=rotl(c->r[4],1)&0x000001FEu; // 801D5A14
  c->r[6]=c->r[3]+0x00000004u; // 801D5A18
  W16(c->r[12]+c->r[9],c->r[28]); // 801D5A1C
  c->r[5]=c->r[3]+0x00000005u; // 801D5A20
  c->r[7]=c->r[3]+0x00000003u; // 801D5A24
  c->r[26]=rotl(c->r[8],1)&0x000001FEu; // 801D5A28
  W16(c->r[11]+c->r[9],c->r[28]); // 801D5A2C
  c->r[9]=rotl(c->r[8],2)&0x000003FCu; // 801D5A30
  c->r[8]=rotl(c->r[7],2)&0x000003FCu; // 801D5A34
  c->r[25]=rotl(c->r[6],1)&0x000001FEu; // 801D5A38
  W32(c->r[29]+c->r[10],c->r[28]); // 801D5A3C
  c->r[10]=rotl(c->r[7],1)&0x000001FEu; // 801D5A40
  c->r[7]=rotl(c->r[6],2)&0x000003FCu; // 801D5A44
  c->r[0]=c->r[3]+0x00000006u; // 801D5A48
  W16(c->r[12]+c->r[27],c->r[28]); // 801D5A4C
  c->r[4]=c->r[3]+0x00000007u; // 801D5A50
  c->r[6]=rotl(c->r[5],2)&0x000003FCu; // 801D5A54
  c->r[24]=rotl(c->r[5],1)&0x000001FEu; // 801D5A58
  W16(c->r[11]+c->r[27],c->r[28]); // 801D5A5C
  c->r[5]=rotl(c->r[0],2)&0x000003FCu; // 801D5A60
  c->r[27]=rotl(c->r[0],1)&0x000001FEu; // 801D5A64
  c->r[0]=rotl(c->r[4],2)&0x000003FCu; // 801D5A68
  W32(c->r[29]+c->r[9],c->r[28]); // 801D5A6C
  c->r[4]=rotl(c->r[4],1)&0x000001FEu; // 801D5A70
  c->r[3]=c->r[3]+0x00000008u; // 801D5A74
  W16(c->r[12]+c->r[26],c->r[28]); // 801D5A78
  W16(c->r[11]+c->r[26],c->r[28]); // 801D5A7C
  W32(c->r[29]+c->r[8],c->r[28]); // 801D5A80
  W16(c->r[12]+c->r[10],c->r[28]); // 801D5A84
  W16(c->r[11]+c->r[10],c->r[28]); // 801D5A88
  W32(c->r[29]+c->r[7],c->r[28]); // 801D5A8C
  W16(c->r[12]+c->r[25],c->r[28]); // 801D5A90
  W16(c->r[11]+c->r[25],c->r[28]); // 801D5A94
  W32(c->r[29]+c->r[6],c->r[28]); // 801D5A98
  W16(c->r[12]+c->r[24],c->r[28]); // 801D5A9C
  W16(c->r[11]+c->r[24],c->r[28]); // 801D5AA0
  W32(c->r[29]+c->r[5],c->r[28]); // 801D5AA4
  W16(c->r[12]+c->r[27],c->r[28]); // 801D5AA8
  W16(c->r[11]+c->r[27],c->r[28]); // 801D5AAC
  W32(c->r[29]+c->r[0],c->r[28]); // 801D5AB0
  W16(c->r[12]+c->r[4],c->r[28]); // 801D5AB4
  W16(c->r[11]+c->r[4],c->r[28]); // 801D5AB8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D59FC; } // 801D5ABC
  c->r[0]=0u+0x00000003u; // 801D5AC0
  c->r[4]=c->r[30]+0x00000058u; // 801D5AC4
  c->r[3]=c->r[30]+0x0000001Cu; // 801D5AC8
  W32(c->r[30]+0x00000018u,c->r[4]); // 801D5ACC
  c->r[5]=c->r[30]|c->r[30]; // 801D5AD0
  c->r[4]=0u+0x00000000u; // 801D5AD4
  W32(c->r[30]+0x00000014u,c->r[3]); // 801D5AD8
  c->ctr=c->r[0]; // 801D5ADC
L_801D5AE0:;
  c->r[0]=addc(c,~c->r[4],0x00000005u,1); // 801D5AE0
  cmps(c,0,(int32_t)c->r[4],0); // 801D5AE4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)96); // 801D5AE8
  c->r[3]=c->r[30]+c->r[0]; // 801D5AEC
  c->r[0]=c->r[3]+0x000004A4u; // 801D5AF0
  W32(c->r[5]+0x0000001Cu,c->r[0]); // 801D5AF4
  if (!crb(c,2)) { goto L_801D5B04; } // 801D5AF8
  c->r[0]=0u+0x00000000u; // 801D5AFC
  goto L_801D5B14; // 801D5B00
L_801D5B04:;
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801D5B04
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 801D5B08
  c->r[3]=c->r[30]+c->r[0]; // 801D5B0C
  c->r[0]=c->r[3]+0x0000001Cu; // 801D5B10
L_801D5B14:;
  cmps(c,0,(int32_t)c->r[4],5); // 801D5B14
  W32(c->r[5]+0x00000020u,c->r[0]); // 801D5B18
  if (!crb(c,2)) { goto L_801D5B28; } // 801D5B1C
  c->r[0]=0u+0x00000000u; // 801D5B20
  goto L_801D5B38; // 801D5B24
L_801D5B28:;
  c->r[0]=c->r[4]+0x00000001u; // 801D5B28
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 801D5B2C
  c->r[3]=c->r[30]+c->r[0]; // 801D5B30
  c->r[0]=c->r[3]+0x0000001Cu; // 801D5B34
L_801D5B38:;
  c->r[4]=addc(c,c->r[4],0x00000001u,0); cr0(c,c->r[4]); // 801D5B38
  W32(c->r[5]+0x00000024u,c->r[0]); // 801D5B3C
  c->r[0]=addc(c,~c->r[4],0x00000005u,1); // 801D5B40
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)96); // 801D5B44
  c->r[3]=c->r[30]+c->r[0]; // 801D5B48
  c->r[0]=c->r[3]+0x000004A4u; // 801D5B4C
  W32(c->r[5]+0x00000028u,c->r[0]); // 801D5B50
  if (!crb(c,2)) { goto L_801D5B60; } // 801D5B54
  c->r[0]=0u+0x00000000u; // 801D5B58
  goto L_801D5B70; // 801D5B5C
L_801D5B60:;
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801D5B60
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 801D5B64
  c->r[3]=c->r[30]+c->r[0]; // 801D5B68
  c->r[0]=c->r[3]+0x0000001Cu; // 801D5B6C
L_801D5B70:;
  cmps(c,0,(int32_t)c->r[4],5); // 801D5B70
  W32(c->r[5]+0x0000002Cu,c->r[0]); // 801D5B74
  if (!crb(c,2)) { goto L_801D5B84; } // 801D5B78
  c->r[0]=0u+0x00000000u; // 801D5B7C
  goto L_801D5B94; // 801D5B80
L_801D5B84:;
  c->r[0]=c->r[4]+0x00000001u; // 801D5B84
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 801D5B88
  c->r[3]=c->r[30]+c->r[0]; // 801D5B8C
  c->r[0]=c->r[3]+0x0000001Cu; // 801D5B90
L_801D5B94:;
  W32(c->r[5]+0x00000030u,c->r[0]); // 801D5B94
  c->r[5]=c->r[5]+0x00000018u; // 801D5B98
  c->r[4]=c->r[4]+0x00000001u; // 801D5B9C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D5AE0; } // 801D5BA0
  c->r[0]=0u+0x00000005u; // 801D5BA4
  c->r[4]=c->r[30]+0x000000D8u; // 801D5BA8
  c->r[3]=c->r[30]+0x0000006Cu; // 801D5BAC
  W32(c->r[30]+0x00000068u,c->r[4]); // 801D5BB0
  c->r[5]=c->r[30]|c->r[30]; // 801D5BB4
  c->r[4]=c->r[30]+0x000000E4u; // 801D5BB8
  c->r[6]=0u+0x00000000u; // 801D5BBC
  W32(c->r[30]+0x00000064u,c->r[3]); // 801D5BC0
  c->ctr=c->r[0]; // 801D5BC4
L_801D5BC8:;
  cmps(c,0,(int32_t)c->r[6],0); // 801D5BC8
  W32(c->r[5]+0x0000006Cu,c->r[4]); // 801D5BCC
  if (!crb(c,2)) { goto L_801D5BDC; } // 801D5BD0
  c->r[0]=0u+0x00000000u; // 801D5BD4
  goto L_801D5BEC; // 801D5BD8
L_801D5BDC:;
  c->r[0]=c->r[6]+0xFFFFFFFFu; // 801D5BDC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 801D5BE0
  c->r[3]=c->r[30]+c->r[0]; // 801D5BE4
  c->r[0]=c->r[3]+0x0000006Cu; // 801D5BE8
L_801D5BEC:;
  cmps(c,0,(int32_t)c->r[6],9); // 801D5BEC
  W32(c->r[5]+0x00000070u,c->r[0]); // 801D5BF0
  if (!crb(c,2)) { goto L_801D5C00; } // 801D5BF4
  c->r[0]=0u+0x00000000u; // 801D5BF8
  goto L_801D5C10; // 801D5BFC
L_801D5C00:;
  c->r[0]=c->r[6]+0x00000001u; // 801D5C00
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 801D5C04
  c->r[3]=c->r[30]+c->r[0]; // 801D5C08
  c->r[0]=c->r[3]+0x0000006Cu; // 801D5C0C
L_801D5C10:;
  W32(c->r[5]+0x00000074u,c->r[0]); // 801D5C10
  c->r[4]=c->r[4]+0x00000060u; // 801D5C14
  c->r[6]=addc(c,c->r[6],0x00000001u,0); cr0(c,c->r[6]); // 801D5C18
  W32(c->r[5]+0x00000078u,c->r[4]); // 801D5C1C
  if (!crb(c,2)) { goto L_801D5C2C; } // 801D5C20
  c->r[0]=0u+0x00000000u; // 801D5C24
  goto L_801D5C3C; // 801D5C28
L_801D5C2C:;
  c->r[0]=c->r[6]+0xFFFFFFFFu; // 801D5C2C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 801D5C30
  c->r[3]=c->r[30]+c->r[0]; // 801D5C34
  c->r[0]=c->r[3]+0x0000006Cu; // 801D5C38
L_801D5C3C:;
  cmps(c,0,(int32_t)c->r[6],9); // 801D5C3C
  W32(c->r[5]+0x0000007Cu,c->r[0]); // 801D5C40
  if (!crb(c,2)) { goto L_801D5C50; } // 801D5C44
  c->r[0]=0u+0x00000000u; // 801D5C48
  goto L_801D5C60; // 801D5C4C
L_801D5C50:;
  c->r[0]=c->r[6]+0x00000001u; // 801D5C50
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 801D5C54
  c->r[3]=c->r[30]+c->r[0]; // 801D5C58
  c->r[0]=c->r[3]+0x0000006Cu; // 801D5C5C
L_801D5C60:;
  W32(c->r[5]+0x00000080u,c->r[0]); // 801D5C60
  c->r[4]=c->r[4]+0x00000060u; // 801D5C64
  c->r[5]=c->r[5]+0x00000018u; // 801D5C68
  c->r[6]=c->r[6]+0x00000001u; // 801D5C6C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D5BC8; } // 801D5C70
  c->r[29]=0u+0x00000000u; // 801D5C74
  c->r[6]=0u+0x00000001u; // 801D5C78
  c->r[0]=0u+0xFFFFFFBFu; // 801D5C7C
  W8(c->r[30]+0x0000000Cu,c->r[29]); // 801D5C80
  c->r[3]=c->r[30]+0x00000702u; // 801D5C84
  c->r[4]=0u+0x00000000u; // 801D5C88
  W8(c->r[30]+0x0000000Eu,c->r[29]); // 801D5C8C
  c->r[5]=0u+0x00000006u; // 801D5C90
  W8(c->r[30]+0x0000000Du,c->r[29]); // 801D5C94
  W8(c->r[30]+0x0000000Fu,c->r[29]); // 801D5C98
  W8(c->r[30]+0x00000010u,c->r[29]); // 801D5C9C
  W8(c->r[30]+0x00000011u,c->r[29]); // 801D5CA0
  W8(c->r[30]+0x000006E7u,c->r[29]); // 801D5CA4
  W8(c->r[30]+0x000006E9u,c->r[29]); // 801D5CA8
  W8(c->r[30]+0x000006E8u,c->r[6]); // 801D5CAC
  W8(c->r[30]+0x000006EAu,c->r[29]); // 801D5CB0
  W8(c->r[30]+0x000006EBu,c->r[29]); // 801D5CB4
  W8(c->r[30]+0x00000708u,c->r[29]); // 801D5CB8
  W8(c->r[30]+0x0000070Au,c->r[29]); // 801D5CBC
  W8(c->r[30]+0x0000070Bu,c->r[0]); // 801D5CC0
  c->lr=0x801D5CC8u; f_800046B4(c); // 801D5CC4
  c->r[3]=c->r[30]+0x000006FCu; // 801D5CC8
  c->r[4]=0u+0x00000000u; // 801D5CCC
  c->r[5]=0u+0x00000006u; // 801D5CD0
  c->lr=0x801D5CD8u; f_800046B4(c); // 801D5CD4
  c->r[0]=0u+0x0000000Au; // 801D5CD8
  W16(c->r[30]+0x00000744u,c->r[29]); // 801D5CDC
  W16(c->r[30]+0x00000746u,c->r[0]); // 801D5CE0
  c->lr=0x801D5CE8u; f_8018D6A0(c); // 801D5CE4
  c->r[30]=c->r[31]+0x00000000u; // 801D5CE8
  c->r[28]=c->r[3]|c->r[3]; // 801D5CEC
  c->r[3]=c->r[30]+0x000000E4u; // 801D5CF0
  c->r[4]=0u+0x00000000u; // 801D5CF4
  c->r[5]=0u+0x000003C0u; // 801D5CF8
  c->lr=0x801D5D00u; f_800046B4(c); // 801D5CFC
  c->r[3]=c->r[30]+0x000004A4u; // 801D5D00
  c->r[4]=0u+0x00000000u; // 801D5D04
  c->r[5]=0u+0x00000240u; // 801D5D08
  c->lr=0x801D5D10u; f_800046B4(c); // 801D5D0C
  W8(c->r[30]+0x00000012u,c->r[29]); // 801D5D10
  c->r[3]=c->r[28]|c->r[28]; // 801D5D14
  W8(c->r[30]+0x00000013u,c->r[29]); // 801D5D18
  W8(c->r[30]+0x000006E4u,c->r[29]); // 801D5D1C
  W8(c->r[30]+0x000006E5u,c->r[29]); // 801D5D20
  W8(c->r[30]+0x000006E6u,c->r[29]); // 801D5D24
  c->lr=0x801D5D2Cu; f_8018D6E0(c); // 801D5D28
  c->r[11]=c->r[1]+0x00000030u; // 801D5D2C
  c->lr=0x801D5D34u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D5D30
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D5D34
  c->lr=c->r[0]; // 801D5D38
  c->r[1]=c->r[1]+0x00000030u; // 801D5D3C
  return; // 801D5D40
}

// WUDInit
void f_801D5D50(Ctx* __restrict c) {
  trace_call(0x801D5D50u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5D50
  c->r[0]=c->lr; // 801D5D54
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D5D58
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D5D5C
  c->r[31]=0u+0x802E0000u; // 801D5D60
  c->r[31]=c->r[31]+0xFFFF9DC0u; // 801D5D64
  c->r[0]=R32(c->r[13]+0xFFFFB668u); // 801D5D68
  cmps(c,0,(int32_t)c->r[0],0); // 801D5D6C
  if (crb(c,2)) { goto L_801D5D7C; } // 801D5D70
  c->r[3]=0u+0x00000000u; // 801D5D74
  goto L_801D5E58; // 801D5D78
L_801D5D7C:;
  c->r[3]=0u+0x80280000u; // 801D5D7C
  c->r[3]=c->r[3]+0xFFFFD280u; // 801D5D80
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D5D84
  c->lr=0x801D5D8Cu; f_801D94A0(c); // 801D5D88
  c->lr=0x801D5D90u; f_801DC830(c); // 801D5D8C
  c->r[3]=R8(c->r[13]+0xFFFFB675u); // 801D5D90
  c->lr=0x801D5D98u; f_801DD328(c); // 801D5D94
  c->r[3]=R8(c->r[13]+0xFFFFB675u); // 801D5D98
  c->lr=0x801D5DA0u; f_801F5C40(c); // 801D5D9C
  c->r[3]=R8(c->r[13]+0xFFFFB675u); // 801D5DA0
  c->lr=0x801D5DA8u; f_80202490(c); // 801D5DA4
  c->r[3]=0u+0x80280000u; // 801D5DA8
  c->r[3]=c->r[3]+0xFFFFD298u; // 801D5DAC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D5DB0
  c->lr=0x801D5DB8u; f_801D94A0(c); // 801D5DB4
  c->r[3]=0u+0x00000000u; // 801D5DB8
  c->r[0]=0u+0x00000001u; // 801D5DBC
  W32(c->r[31]+0x00000000u,c->r[3]); // 801D5DC0
  W32(c->r[31]+0x00000004u,c->r[3]); // 801D5DC4
  W32(c->r[31]+0x00000008u,c->r[3]); // 801D5DC8
  W32(c->r[31]+0x000006F0u,c->r[3]); // 801D5DCC
  W32(c->r[31]+0x000006ECu,c->r[3]); // 801D5DD0
  W8(c->r[31]+0x00000010u,c->r[0]); // 801D5DD4
  c->lr=0x801D5DDCu; f_801B65A0(c); // 801D5DD8
  c->r[0]=R32(c->r[13]+0xFFFFB680u); // 801D5DDC
  cmps(c,0,(int32_t)c->r[0],0); // 801D5DE0
  if (crb(c,2)) { goto L_801D5DFC; } // 801D5DE4
  c->r[12]=R32(c->r[13]+0xFFFFB67Cu); // 801D5DE8
  cmps(c,0,(int32_t)c->r[12],0); // 801D5DEC
  if (crb(c,2)) { goto L_801D5DFC; } // 801D5DF0
  c->ctr=c->r[12]; // 801D5DF4
  if (true) { c->lr=0x801D5DFCu; dispatch(c,c->ctr); } // 801D5DF8
L_801D5DFC:;
  c->r[3]=c->r[31]+0x00000710u; // 801D5DFC
  c->lr=0x801D5E04u; f_80187C40(c); // 801D5E00
  c->lr=0x801D5E08u; f_801915C0(c); // 801D5E04
  c->r[5]=0u+0x80000000u; // 801D5E08
  c->r[9]=0u+0x801D0000u; // 801D5E0C
  c->r[0]=R32(c->r[5]+0x000000F8u); // 801D5E10
  c->r[6]=0u+0x10620000u; // 801D5E14
  c->r[5]=c->r[3]|c->r[3]; // 801D5E18
  c->r[9]=c->r[9]+0x00005860u; // 801D5E1C
  c->r[3]=c->r[6]+0x00004DD3u; // 801D5E20
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801D5E24
  c->r[0]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[0])>>32); // 801D5E28
  c->r[6]=c->r[4]|c->r[4]; // 801D5E2C
  c->r[3]=c->r[31]+0x00000710u; // 801D5E30
  c->r[7]=0u+0x00000000u; // 801D5E34
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 801D5E38
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)10); // 801D5E3C
  c->lr=0x801D5E44u; f_80187F10(c); // 801D5E40
  c->r[3]=0u+0x00000001u; // 801D5E44
  c->r[0]=0u+0x00000000u; // 801D5E48
  W32(c->r[13]+0xFFFFB668u,c->r[3]); // 801D5E4C
  c->r[3]=0u+0x00000001u; // 801D5E50
  W8(c->r[13]+0xFFFFB69Cu,c->r[0]); // 801D5E54
L_801D5E58:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D5E58
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D5E5C
  c->lr=c->r[0]; // 801D5E60
  c->r[1]=c->r[1]+0x00000010u; // 801D5E64
  return; // 801D5E68
}

// WUDRegisterAllocator
void f_801D5E70(Ctx* __restrict c) {
  trace_call(0x801D5E70u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5E70
  c->r[0]=c->lr; // 801D5E74
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D5E78
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D5E7C
  c->r[31]=c->r[4]|c->r[4]; // 801D5E80
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D5E84
  c->r[30]=c->r[3]|c->r[3]; // 801D5E88
  c->lr=0x801D5E90u; f_8018D6A0(c); // 801D5E8C
  c->r[4]=0u+0x802E0000u; // 801D5E90
  c->r[4]=c->r[4]+0xFFFF9DC0u; // 801D5E94
  W32(c->r[4]+0x000006F4u,c->r[30]); // 801D5E98
  W32(c->r[4]+0x000006F8u,c->r[31]); // 801D5E9C
  c->lr=0x801D5EA4u; f_8018D6E0(c); // 801D5EA0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D5EA4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D5EA8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D5EAC
  c->lr=c->r[0]; // 801D5EB0
  c->r[1]=c->r[1]+0x00000010u; // 801D5EB4
  return; // 801D5EB8
}

// WUDShutdown
void f_801D5EC0(Ctx* __restrict c) {
  trace_call(0x801D5EC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5EC0
  c->r[0]=c->lr; // 801D5EC4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D5EC8
  c->r[11]=c->r[1]+0x00000030u; // 801D5ECC
  c->lr=0x801D5ED4u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D5ED0
  c->r[31]=0u+0x802E0000u; // 801D5ED4
  c->r[4]=0u+0x80280000u; // 801D5ED8
  c->r[31]=c->r[31]+0xFFFF9DC0u; // 801D5EDC
  c->r[28]=c->r[3]|c->r[3]; // 801D5EE0
  c->r[30]=c->r[31]+0x00000000u; // 801D5EE4
  c->r[3]=c->r[4]+0xFFFFD2ACu; // 801D5EE8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D5EEC
  c->lr=0x801D5EF4u; f_801D94A0(c); // 801D5EF0
  c->lr=0x801D5EF8u; f_8018D6A0(c); // 801D5EF4
  c->r[29]=c->r[3]|c->r[3]; // 801D5EF8
  c->lr=0x801D5F00u; f_8018D6A0(c); // 801D5EFC
  c->r[0]=R8(c->r[30]+0x0000000Cu); // 801D5F00
  cmps(c,0,(int32_t)c->r[0],0); // 801D5F04
  if (!crb(c,2)) { goto L_801D5F3C; } // 801D5F08
  c->r[0]=R8(c->r[30]+0x0000000Du); // 801D5F0C
  cmps(c,0,(int32_t)c->r[0],0); // 801D5F10
  if (!crb(c,2)) { goto L_801D5F3C; } // 801D5F14
  c->r[0]=R8(c->r[30]+0x0000000Fu); // 801D5F18
  cmpu(c,0,c->r[0],0x00000004u); // 801D5F1C
  if (!crb(c,2)) { goto L_801D5F3C; } // 801D5F20
  c->r[0]=R8(c->r[30]+0x00000010u); // 801D5F24
  cmpu(c,0,c->r[0],0x00000006u); // 801D5F28
  if (!crb(c,2)) { goto L_801D5F3C; } // 801D5F2C
  c->lr=0x801D5F34u; f_8018D6E0(c); // 801D5F30
  c->r[0]=0u+0x00000000u; // 801D5F34
  goto L_801D5F44; // 801D5F38
L_801D5F3C:;
  c->lr=0x801D5F40u; f_8018D6E0(c); // 801D5F3C
  c->r[0]=0u+0x00000001u; // 801D5F40
L_801D5F44:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D5F44
  if (crb(c,2)) { goto L_801D5F54; } // 801D5F48
  c->r[3]=c->r[30]+0x00000710u; // 801D5F4C
  c->lr=0x801D5F54u; f_80187FA0(c); // 801D5F50
L_801D5F54:;
  c->r[26]=c->r[31]+0x000008B8u; // 801D5F54
  c->r[4]=0u+0x00000000u; // 801D5F58
  c->r[3]=c->r[26]+0x00000001u; // 801D5F5C
  c->r[5]=0u+0x000002BCu; // 801D5F60
  c->lr=0x801D5F68u; f_800046B4(c); // 801D5F64
  c->r[3]=c->r[31]+0x00000000u; // 801D5F68
  c->r[25]=c->r[26]+0x00000001u; // 801D5F6C
  c->r[27]=R32(c->r[3]+0x00000064u); // 801D5F70
  c->r[26]=c->r[26]+0x00000007u; // 801D5F74
  goto L_801D5FAC; // 801D5F78
L_801D5F7C:;
  c->r[4]=R32(c->r[27]+0x00000000u); // 801D5F7C
  c->r[3]=c->r[25]|c->r[25]; // 801D5F80
  c->r[5]=0u+0x00000006u; // 801D5F84
  c->r[4]=c->r[4]+0x00000040u; // 801D5F88
  c->lr=0x801D5F90u; f_80004364(c); // 801D5F8C
  c->r[4]=R32(c->r[27]+0x00000000u); // 801D5F90
  c->r[3]=c->r[26]|c->r[26]; // 801D5F94
  c->r[5]=0u+0x00000040u; // 801D5F98
  c->lr=0x801D5FA0u; f_80004364(c); // 801D5F9C
  c->r[27]=R32(c->r[27]+0x00000008u); // 801D5FA0
  c->r[25]=c->r[25]+0x00000046u; // 801D5FA4
  c->r[26]=c->r[26]+0x00000046u; // 801D5FA8
L_801D5FAC:;
  cmps(c,0,(int32_t)c->r[27],0); // 801D5FAC
  if (!crb(c,2)) { IRQCHK(c); goto L_801D5F7C; } // 801D5FB0
  c->lr=0x801D5FB8u; f_8018D6A0(c); // 801D5FB4
  c->r[26]=c->r[31]+0x00000000u; // 801D5FB8
  c->r[25]=R8(c->r[26]+0x00000012u); // 801D5FBC
  c->lr=0x801D5FC4u; f_8018D6E0(c); // 801D5FC0
  c->r[27]=c->r[31]+0x00001F60u; // 801D5FC4
  W8(c->r[31]+0x000008B8u,c->r[25]); // 801D5FC8
  c->r[3]=c->r[27]+0x00000001u; // 801D5FCC
  c->r[4]=0u+0x00000000u; // 801D5FD0
  c->r[5]=0u+0x00000204u; // 801D5FD4
  c->lr=0x801D5FDCu; f_800046B4(c); // 801D5FD8
  cmps(c,0,(int32_t)c->r[28],0); // 801D5FDC
  if (crb(c,2)) { goto L_801D6060; } // 801D5FE0
  c->r[28]=R32(c->r[26]+0x00000014u); // 801D5FE4
  c->r[25]=c->r[27]+0x00000001u; // 801D5FE8
  c->r[26]=c->r[27]+0x00000007u; // 801D5FEC
  c->r[27]=c->r[27]+0x00000047u; // 801D5FF0
  goto L_801D6040; // 801D5FF4
L_801D5FF8:;
  c->r[4]=R32(c->r[28]+0x00000000u); // 801D5FF8
  c->r[3]=c->r[25]|c->r[25]; // 801D5FFC
  c->r[5]=0u+0x00000006u; // 801D6000
  c->r[4]=c->r[4]+0x00000040u; // 801D6004
  c->lr=0x801D600Cu; f_80004364(c); // 801D6008
  c->r[4]=R32(c->r[28]+0x00000000u); // 801D600C
  c->r[3]=c->r[26]|c->r[26]; // 801D6010
  c->r[5]=0u+0x00000040u; // 801D6014
  c->lr=0x801D601Cu; f_80004364(c); // 801D6018
  c->r[4]=R32(c->r[28]+0x00000000u); // 801D601C
  c->r[3]=c->r[27]|c->r[27]; // 801D6020
  c->r[5]=0u+0x00000010u; // 801D6024
  c->r[4]=c->r[4]+0x00000046u; // 801D6028
  c->lr=0x801D6030u; f_80004364(c); // 801D602C
  c->r[28]=R32(c->r[28]+0x00000008u); // 801D6030
  c->r[25]=c->r[25]+0x00000056u; // 801D6034
  c->r[26]=c->r[26]+0x00000056u; // 801D6038
  c->r[27]=c->r[27]+0x00000056u; // 801D603C
L_801D6040:;
  cmps(c,0,(int32_t)c->r[28],0); // 801D6040
  if (!crb(c,2)) { IRQCHK(c); goto L_801D5FF8; } // 801D6044
  c->lr=0x801D604Cu; f_8018D6A0(c); // 801D6048
  c->r[4]=c->r[31]+0x00000000u; // 801D604C
  c->r[25]=R8(c->r[4]+0x00000013u); // 801D6050
  c->lr=0x801D6058u; f_8018D6E0(c); // 801D6054
  W8(c->r[31]+0x00001F60u,c->r[25]); // 801D6058
  goto L_801D6068; // 801D605C
L_801D6060:;
  c->r[0]=0u+0x00000000u; // 801D6060
  W8(c->r[31]+0x00001F60u,c->r[0]); // 801D6064
L_801D6068:;
  c->r[0]=0u+0x00000001u; // 801D6068
  W8(c->r[30]+0x00000011u,c->r[0]); // 801D606C
  c->r[3]=c->r[30]+0x00000710u; // 801D6070
  c->lr=0x801D6078u; f_80187C40(c); // 801D6074
  c->lr=0x801D607Cu; f_801915C0(c); // 801D6078
  c->r[5]=0u+0x80000000u; // 801D607C
  c->r[9]=0u+0x801D0000u; // 801D6080
  c->r[0]=R32(c->r[5]+0x000000F8u); // 801D6084
  c->r[6]=0u+0x10620000u; // 801D6088
  c->r[5]=c->r[3]|c->r[3]; // 801D608C
  c->r[9]=c->r[9]+0x00005990u; // 801D6090
  c->r[3]=c->r[6]+0x00004DD3u; // 801D6094
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801D6098
  c->r[0]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[0])>>32); // 801D609C
  c->r[6]=c->r[4]|c->r[4]; // 801D60A0
  c->r[3]=c->r[30]+0x00000710u; // 801D60A4
  c->r[7]=0u+0x00000000u; // 801D60A8
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 801D60AC
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)10); // 801D60B0
  c->lr=0x801D60B8u; f_80187F10(c); // 801D60B4
  c->r[0]=0u+0x00000004u; // 801D60B8
  W8(c->r[30]+0x00000708u,c->r[0]); // 801D60BC
  c->r[3]=c->r[29]|c->r[29]; // 801D60C0
  c->lr=0x801D60C8u; f_8018D6E0(c); // 801D60C4
  c->r[11]=c->r[1]+0x00000030u; // 801D60C8
  c->lr=0x801D60D0u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D60CC
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D60D0
  c->lr=c->r[0]; // 801D60D4
  c->r[1]=c->r[1]+0x00000030u; // 801D60D8
  return; // 801D60DC
}

// WUDGetStatus
void f_801D60E0(Ctx* __restrict c) {
  trace_call(0x801D60E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D60E0
  c->r[0]=c->lr; // 801D60E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D60E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D60EC
  c->lr=0x801D60F4u; f_8018D6A0(c); // 801D60F0
  c->r[4]=0u+0x802E0000u; // 801D60F4
  c->r[4]=c->r[4]+0xFFFF9DC0u; // 801D60F8
  c->r[31]=R8(c->r[4]+0x00000708u); // 801D60FC
  c->lr=0x801D6104u; f_8018D6E0(c); // 801D6100
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[31]; // 801D6104
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D6108
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D610C
  c->lr=c->r[0]; // 801D6110
  c->r[1]=c->r[1]+0x00000010u; // 801D6114
  return; // 801D6118
}

// WUDGetBufferStatus
void f_801D6120(Ctx* __restrict c) {
  trace_call(0x801D6120u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D6120
  c->r[0]=c->lr; // 801D6124
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D6128
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D612C
  c->lr=0x801D6134u; f_8018D6A0(c); // 801D6130
  c->r[5]=0u+0x802E0000u; // 801D6134
  c->r[5]=c->r[5]+0xFFFF9DC0u; // 801D6138
  c->r[4]=R16(c->r[5]+0x00000744u); // 801D613C
  c->r[0]=R16(c->r[5]+0x00000746u); // 801D6140
  c->r[0]=c->r[0]-c->r[4]; // 801D6144
  c->r[31]=rotl(c->r[0],0)&0x000000FFu; // 801D6148
  c->lr=0x801D6150u; f_8018D6E0(c); // 801D614C
  c->r[3]=c->r[31]|c->r[31]; // 801D6150
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D6154
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D6158
  c->lr=c->r[0]; // 801D615C
  c->r[1]=c->r[1]+0x00000010u; // 801D6160
  return; // 801D6164
}

// WUDSetSniffMode
void f_801D6170(Ctx* __restrict c) {
  trace_call(0x801D6170u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D6170
  c->r[0]=c->lr; // 801D6174
  cmps(c,0,(int32_t)c->r[4],0); // 801D6178
  c->r[7]=0u+0x802E0000u; // 801D617C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D6180
  c->r[8]=c->r[3]|c->r[3]; // 801D6184
  c->r[7]=c->r[7]+0xFFFF9DC0u; // 801D6188
  if (!crb(c,1)) { goto L_801D619C; } // 801D618C
  c->r[0]=0u+0x00000002u; // 801D6190
  W8(c->r[1]+0x00000010u,c->r[0]); // 801D6194
  goto L_801D61A4; // 801D6198
L_801D619C:;
  c->r[0]=0u+0x00000000u; // 801D619C
  W8(c->r[1]+0x00000010u,c->r[0]); // 801D61A0
L_801D61A4:;
  c->r[6]=0u+0x00000001u; // 801D61A4
  c->r[0]=0u+0x00000000u; // 801D61A8
  W16(c->r[1]+0x00000008u,c->r[4]); // 801D61AC
  c->r[5]=c->r[1]+0x00000008u; // 801D61B0
  c->r[3]=R8(c->r[7]+0x0000070Au); // 801D61B4
  W16(c->r[1]+0x0000000Au,c->r[4]); // 801D61B8
  c->r[4]=c->r[8]|c->r[8]; // 801D61BC
  W16(c->r[1]+0x0000000Cu,c->r[6]); // 801D61C0
  W16(c->r[1]+0x0000000Eu,c->r[0]); // 801D61C4
  c->lr=0x801D61CCu; f_801E870C(c); // 801D61C8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D61CC
  c->lr=c->r[0]; // 801D61D0
  c->r[1]=c->r[1]+0x00000020u; // 801D61D4
  return; // 801D61D8
}

// WUDSetSyncSimpleCallback
void f_801D61E0(Ctx* __restrict c) {
  trace_call(0x801D61E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D61E0
  c->r[0]=c->lr; // 801D61E4
  c->r[4]=0u+0x80280000u; // 801D61E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D61EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D61F0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D61F4
  c->r[30]=c->r[3]|c->r[3]; // 801D61F8
  c->r[3]=c->r[4]+0xFFFFD2BCu; // 801D61FC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D6200
  c->lr=0x801D6208u; f_801D94A0(c); // 801D6204
  c->lr=0x801D620Cu; f_8018D6A0(c); // 801D6208
  c->r[4]=0u+0x802E0000u; // 801D620C
  c->r[4]=c->r[4]+0xFFFF9DC0u; // 801D6210
  c->r[31]=R32(c->r[4]+0x00000004u); // 801D6214
  W32(c->r[4]+0x00000004u,c->r[30]); // 801D6218
  c->lr=0x801D6220u; f_8018D6E0(c); // 801D621C
  c->r[3]=c->r[31]|c->r[31]; // 801D6220
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D6224
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D6228
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D622C
  c->lr=c->r[0]; // 801D6230
  c->r[1]=c->r[1]+0x00000010u; // 801D6234
  return; // 801D6238
}

// __wudStartSyncDevice
void f_801D6240(Ctx* __restrict c) {
  trace_call(0x801D6240u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D6240
  c->r[0]=c->lr; // 801D6244
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D6248
  c->r[11]=c->r[1]+0x00000030u; // 801D624C
  c->lr=0x801D6254u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D6250
  c->r[31]=0u+0x802E0000u; // 801D6254
  c->r[28]=c->r[3]|c->r[3]; // 801D6258
  c->r[29]=c->r[4]|c->r[4]; // 801D625C
  c->r[30]=c->r[5]|c->r[5]; // 801D6260
  c->r[25]=c->r[6]|c->r[6]; // 801D6264
  c->r[31]=c->r[31]+0xFFFF9DC0u; // 801D6268
  c->r[27]=0u+0x00000000u; // 801D626C
  c->lr=0x801D6274u; f_8018D6A0(c); // 801D6270
  c->r[26]=R8(c->r[31]+0x00000708u); // 801D6274
  c->r[26]=(uint32_t)(int32_t)(int8_t)c->r[26]; // 801D6278
  c->lr=0x801D6280u; f_8018D6E0(c); // 801D627C
  cmpu(c,0,c->r[26],0x00000003u); // 801D6280
  if (!crb(c,2)) { goto L_801D6370; } // 801D6284
  c->lr=0x801D628Cu; f_8018D6A0(c); // 801D6288
  c->r[0]=R8(c->r[31]+0x0000000Cu); // 801D628C
  cmps(c,0,(int32_t)c->r[0],0); // 801D6290
  if (!crb(c,2)) { goto L_801D62C8; } // 801D6294
  c->r[0]=R8(c->r[31]+0x0000000Du); // 801D6298
  cmps(c,0,(int32_t)c->r[0],0); // 801D629C
  if (!crb(c,2)) { goto L_801D62C8; } // 801D62A0
  c->r[0]=R8(c->r[31]+0x0000000Fu); // 801D62A4
  cmpu(c,0,c->r[0],0x00000004u); // 801D62A8
  if (!crb(c,2)) { goto L_801D62C8; } // 801D62AC
  c->r[0]=R8(c->r[31]+0x00000010u); // 801D62B0
  cmpu(c,0,c->r[0],0x00000006u); // 801D62B4
  if (!crb(c,2)) { goto L_801D62C8; } // 801D62B8
  c->lr=0x801D62C0u; f_8018D6E0(c); // 801D62BC
  c->r[0]=0u+0x00000000u; // 801D62C0
  goto L_801D62D0; // 801D62C4
L_801D62C8:;
  c->lr=0x801D62CCu; f_8018D6E0(c); // 801D62C8
  c->r[0]=0u+0x00000001u; // 801D62CC
L_801D62D0:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D62D0
  if (!crb(c,2)) { goto L_801D6370; } // 801D62D4
  c->lr=0x801D62DCu; f_8018D6A0(c); // 801D62D8
  c->r[0]=0u-c->r[25]; // 801D62DC
  c->r[7]=0u+0x00000001u; // 801D62E0
  c->r[0]=c->r[0]|c->r[25]; // 801D62E4
  c->r[5]=0u+0x00000000u; // 801D62E8
  c->r[6]=rotl(c->r[0],1)&0x00000001u; // 801D62EC
  c->r[4]=0u+0x00000032u; // 801D62F0
  c->r[0]=0u+0x000000C8u; // 801D62F4
  c->r[27]=c->r[3]|c->r[3]; // 801D62F8
  W8(c->r[13]+0xFFFFB69Du,c->r[30]); // 801D62FC
  c->r[3]=c->r[31]+0x00000710u; // 801D6300
  W8(c->r[31]+0x0000000Cu,c->r[7]); // 801D6304
  W8(c->r[31]+0x000006E8u,c->r[29]); // 801D6308
  W8(c->r[31]+0x000006E9u,c->r[28]); // 801D630C
  W8(c->r[31]+0x000006E7u,c->r[6]); // 801D6310
  W8(c->r[31]+0x000006E6u,c->r[5]); // 801D6314
  W16(c->r[31]+0x00000748u,c->r[4]); // 801D6318
  W16(c->r[31]+0x0000074Au,c->r[0]); // 801D631C
  c->lr=0x801D6324u; f_80187C40(c); // 801D6320
  c->lr=0x801D6328u; f_801915C0(c); // 801D6324
  c->r[5]=0u+0x80000000u; // 801D6328
  c->r[9]=0u+0x801D0000u; // 801D632C
  c->r[0]=R32(c->r[5]+0x000000F8u); // 801D6330
  c->r[6]=0u+0x10620000u; // 801D6334
  c->r[5]=c->r[3]|c->r[3]; // 801D6338
  c->r[9]=c->r[9]+0x000041C0u; // 801D633C
  c->r[3]=c->r[6]+0x00004DD3u; // 801D6340
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801D6344
  c->r[0]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[0])>>32); // 801D6348
  c->r[6]=c->r[4]|c->r[4]; // 801D634C
  c->r[3]=c->r[31]+0x00000710u; // 801D6350
  c->r[7]=0u+0x00000000u; // 801D6354
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 801D6358
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801D635C
  c->lr=0x801D6364u; f_80187F10(c); // 801D6360
  c->r[3]=c->r[27]|c->r[27]; // 801D6364
  c->lr=0x801D636Cu; f_8018D6E0(c); // 801D6368
  c->r[27]=0u+0x00000001u; // 801D636C
L_801D6370:;
  c->r[11]=c->r[1]+0x00000030u; // 801D6370
  c->r[3]=c->r[27]|c->r[27]; // 801D6374
  c->lr=0x801D637Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D6378
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D637C
  c->lr=c->r[0]; // 801D6380
  c->r[1]=c->r[1]+0x00000030u; // 801D6384
  return; // 801D6388
}

// WUDStartFastSyncSimple
void f_801D6390(Ctx* __restrict c) {
  trace_call(0x801D6390u);
  c->r[3]=0u+0x00000001u; // 801D6390
  c->r[4]=0u+0xFFFFFFFFu; // 801D6394
  c->r[5]=0u+0x00000000u; // 801D6398
  c->r[6]=0u+0x00000001u; // 801D639C
  f_801D6240(c); return; // 801D63A0
}

// WUDCancelSyncDevice
void f_801D63B0(Ctx* __restrict c) {
  trace_call(0x801D63B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D63B0
  c->r[0]=c->lr; // 801D63B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D63B8
  c->r[0]=0u+0x00000001u; // 801D63BC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D63C0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D63C4
  c->r[30]=0u+0x00000000u; // 801D63C8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D63CC
  c->r[29]=0u+0x802E0000u; // 801D63D0
  c->r[29]=c->r[29]+0xFFFF9DC0u; // 801D63D4
  W32(c->r[13]+0xFFFFB670u,c->r[0]); // 801D63D8
  c->lr=0x801D63E0u; f_8018D6A0(c); // 801D63DC
  c->r[0]=R8(c->r[29]+0x00000708u); // 801D63E0
  c->r[31]=c->r[3]|c->r[3]; // 801D63E4
  cmps(c,0,(int32_t)c->r[0],3); // 801D63E8
  if (!crb(c,2)) { goto L_801D6418; } // 801D63EC
  c->r[0]=R8(c->r[29]+0x000006E8u); // 801D63F0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801D63F4
  if (crb(c,2)) { goto L_801D6414; } // 801D63F8
  c->r[0]=R8(c->r[29]+0x0000000Cu); // 801D63FC
  cmpu(c,0,c->r[0],0x00000003u); // 801D6400
  if (!crb(c,2)) { goto L_801D640C; } // 801D6404
  c->lr=0x801D640Cu; f_801DFAC8(c); // 801D6408
L_801D640C:;
  c->r[0]=0u+0x00000000u; // 801D640C
  W8(c->r[29]+0x000006E8u,c->r[0]); // 801D6410
L_801D6414:;
  c->r[30]=0u+0x00000001u; // 801D6414
L_801D6418:;
  c->r[3]=c->r[31]|c->r[31]; // 801D6418
  c->lr=0x801D6420u; f_8018D6E0(c); // 801D641C
  c->r[3]=c->r[30]|c->r[30]; // 801D6420
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D6424
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D6428
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D642C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D6430
  c->lr=c->r[0]; // 801D6434
  c->r[1]=c->r[1]+0x00000020u; // 801D6438
  return; // 801D643C
}

// WUDStopSyncSimple
void f_801D6440(Ctx* __restrict c) {
  trace_call(0x801D6440u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D6440
  c->r[0]=c->lr; // 801D6444
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D6448
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D644C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D6450
  c->r[30]=0u+0x00000000u; // 801D6454
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D6458
  c->r[29]=0u+0x802E0000u; // 801D645C
  c->r[29]=c->r[29]+0xFFFF9DC0u; // 801D6460
  c->lr=0x801D6468u; f_8018D6A0(c); // 801D6464
  c->r[0]=R8(c->r[29]+0x00000708u); // 801D6468
  c->r[31]=c->r[3]|c->r[3]; // 801D646C
  cmps(c,0,(int32_t)c->r[0],3); // 801D6470
  if (!crb(c,2)) { goto L_801D64A0; } // 801D6474
  c->r[0]=R8(c->r[29]+0x000006E8u); // 801D6478
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801D647C
  if (crb(c,2)) { goto L_801D649C; } // 801D6480
  c->r[0]=R8(c->r[29]+0x0000000Cu); // 801D6484
  cmpu(c,0,c->r[0],0x00000003u); // 801D6488
  if (!crb(c,2)) { goto L_801D6494; } // 801D648C
  c->lr=0x801D6494u; f_801DFAC8(c); // 801D6490
L_801D6494:;
  c->r[0]=0u+0x00000000u; // 801D6494
  W8(c->r[29]+0x000006E8u,c->r[0]); // 801D6498
L_801D649C:;
  c->r[30]=0u+0x00000001u; // 801D649C
L_801D64A0:;
  c->r[3]=c->r[31]|c->r[31]; // 801D64A0
  c->lr=0x801D64A8u; f_8018D6E0(c); // 801D64A4
  c->r[3]=c->r[30]|c->r[30]; // 801D64A8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D64AC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D64B0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D64B4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D64B8
  c->lr=c->r[0]; // 801D64BC
  c->r[1]=c->r[1]+0x00000020u; // 801D64C0
  return; // 801D64C4
}

// WUDSetDisableChannel
void f_801D64D0(Ctx* __restrict c) {
  trace_call(0x801D64D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D64D0
  c->r[0]=c->lr; // 801D64D4
  c->r[4]=0u+0x80280000u; // 801D64D8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D64DC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D64E0
  c->r[31]=0u+0x00000000u; // 801D64E4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D64E8
  c->r[30]=0u+0x802E0000u; // 801D64EC
  c->r[30]=c->r[30]+0xFFFF9DC0u; // 801D64F0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D64F4
  c->r[29]=c->r[3]|c->r[3]; // 801D64F8
  c->r[3]=c->r[4]+0xFFFFD328u; // 801D64FC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D6500
  c->lr=0x801D6508u; f_801D94A0(c); // 801D6504
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 801D6508
  cmpu(c,0,c->r[0],0x0000000Du); // 801D650C
  if (!crb(c,1)) { goto L_801D651C; } // 801D6510
  c->r[3]=0u+0x00000000u; // 801D6514
  goto L_801D659C; // 801D6518
L_801D651C:;
  c->lr=0x801D6520u; f_8018D6A0(c); // 801D651C
  c->r[30]=R8(c->r[30]+0x00000708u); // 801D6520
  c->r[30]=(uint32_t)(int32_t)(int8_t)c->r[30]; // 801D6524
  c->lr=0x801D652Cu; f_8018D6E0(c); // 801D6528
  cmpu(c,0,c->r[30],0x00000003u); // 801D652C
  if (!crb(c,2)) { goto L_801D6598; } // 801D6530
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[29]; cr0(c,c->r[3]); // 801D6534
  if (!crb(c,2)) { goto L_801D6548; } // 801D6538
  c->r[0]=0u+0x000000FFu; // 801D653C
  c->r[4]=0u+0x000000FFu; // 801D6540
  goto L_801D6570; // 801D6544
L_801D6548:;
  c->r[3]=c->r[3]+0x00000001u; // 801D6548
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801D654C
  c->r[3]=c->r[0]+c->r[3]; // 801D6550
  c->r[0]=addc(c,c->r[3],0xFFFFFFF2u,0); cr0(c,c->r[0]); // 801D6554
  c->r[4]=c->r[3]+0x0000000Eu; // 801D6558
  if (!crb(c,0)) { goto L_801D6564; } // 801D655C
  c->r[0]=0u+0x00000000u; // 801D6560
L_801D6564:;
  cmps(c,0,(int32_t)c->r[4],78); // 801D6564
  if (!crb(c,1)) { goto L_801D6570; } // 801D6568
  c->r[4]=0u+0x0000004Eu; // 801D656C
L_801D6570:;
  c->r[3]=rotl(c->r[0],0)&0x000000FFu; // 801D6570
  c->r[4]=rotl(c->r[4],0)&0x000000FFu; // 801D6574
  c->lr=0x801D657Cu; f_801E5350(c); // 801D6578
  c->r[0]=c->r[3]|c->r[3]; // 801D657C
  c->r[3]=0u+0x80280000u; // 801D6580
  c->r[3]=c->r[3]+0xFFFFD340u; // 801D6584
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 801D6588
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D658C
  c->lr=0x801D6594u; f_801D94A0(c); // 801D6590
  c->r[31]=0u+0x00000001u; // 801D6594
L_801D6598:;
  c->r[3]=c->r[31]|c->r[31]; // 801D6598
L_801D659C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D659C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D65A0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D65A4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D65A8
  c->lr=c->r[0]; // 801D65AC
  c->r[1]=c->r[1]+0x00000020u; // 801D65B0
  return; // 801D65B4
}

// WUDSetHidRecvCallback
void f_801D65C0(Ctx* __restrict c) {
  trace_call(0x801D65C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D65C0
  c->r[0]=c->lr; // 801D65C4
  c->r[4]=0u+0x80280000u; // 801D65C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D65CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D65D0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D65D4
  c->r[30]=c->r[3]|c->r[3]; // 801D65D8
  c->r[3]=c->r[4]+0xFFFFD35Cu; // 801D65DC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D65E0
  c->lr=0x801D65E8u; f_801D94A0(c); // 801D65E4
  c->lr=0x801D65ECu; f_8018D6A0(c); // 801D65E8
  c->r[4]=0u+0x802E0000u; // 801D65EC
  c->r[4]=c->r[4]+0xFFFF9DC0u; // 801D65F0
  c->r[31]=R32(c->r[4]+0x000006ECu); // 801D65F4
  W32(c->r[4]+0x000006ECu,c->r[30]); // 801D65F8
  c->lr=0x801D6600u; f_8018D6E0(c); // 801D65FC
  c->r[3]=c->r[31]|c->r[31]; // 801D6600
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D6604
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D6608
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D660C
  c->lr=c->r[0]; // 801D6610
  c->r[1]=c->r[1]+0x00000010u; // 801D6614
  return; // 801D6618
}

// WUDSetHidConnCallback
void f_801D6620(Ctx* __restrict c) {
  trace_call(0x801D6620u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D6620
  c->r[0]=c->lr; // 801D6624
  c->r[4]=0u+0x80280000u; // 801D6628
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D662C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D6630
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D6634
  c->r[30]=c->r[3]|c->r[3]; // 801D6638
  c->r[3]=c->r[4]+0xFFFFD378u; // 801D663C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D6640
  c->lr=0x801D6648u; f_801D94A0(c); // 801D6644
  c->lr=0x801D664Cu; f_8018D6A0(c); // 801D6648
  c->r[4]=0u+0x802E0000u; // 801D664C
  c->r[4]=c->r[4]+0xFFFF9DC0u; // 801D6650
  c->r[31]=R32(c->r[4]+0x000006F0u); // 801D6654
  W32(c->r[4]+0x000006F0u,c->r[30]); // 801D6658
  c->lr=0x801D6660u; f_8018D6E0(c); // 801D665C
  c->r[3]=c->r[31]|c->r[31]; // 801D6660
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D6664
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D6668
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D666C
  c->lr=c->r[0]; // 801D6670
  c->r[1]=c->r[1]+0x00000010u; // 801D6674
  return; // 801D6678
}

// WUDSetVisibility
void f_801D6680(Ctx* __restrict c) {
  trace_call(0x801D6680u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D6680
  c->r[0]=c->lr; // 801D6684
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D6688
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D668C
  c->r[31]=c->r[4]|c->r[4]; // 801D6690
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D6694
  c->r[30]=c->r[3]|c->r[3]; // 801D6698
  c->lr=0x801D66A0u; f_8018D6A0(c); // 801D669C
  c->r[4]=0u+0x802E0000u; // 801D66A0
  c->r[4]=c->r[4]+0xFFFF9DC0u; // 801D66A4
  W8(c->r[4]+0x000006EBu,c->r[30]); // 801D66A8
  W8(c->r[4]+0x000006EAu,c->r[31]); // 801D66AC
  c->lr=0x801D66B4u; f_8018D6E0(c); // 801D66B0
  c->r[3]=c->r[30]|c->r[30]; // 801D66B4
  c->r[4]=c->r[31]|c->r[31]; // 801D66B8
  c->lr=0x801D66C0u; f_801DF9EC(c); // 801D66BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D66C0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D66C4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D66C8
  c->lr=c->r[0]; // 801D66CC
  c->r[1]=c->r[1]+0x00000010u; // 801D66D0
  return; // 801D66D4
}

// __wudModuleRebootCallback
void f_801D66E0(Ctx* __restrict c) {
  trace_call(0x801D66E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D66E0
  c->r[0]=c->lr; // 801D66E4
  c->r[3]=0u+0x80280000u; // 801D66E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D66EC
  c->r[3]=c->r[3]+0xFFFFD394u; // 801D66F0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D66F4
  c->lr=0x801D66FCu; f_801D94A0(c); // 801D66F8
  c->lr=0x801D6700u; f_801D6D80(c); // 801D66FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D6700
  c->lr=c->r[0]; // 801D6704
  c->r[1]=c->r[1]+0x00000010u; // 801D6708
  return; // 801D670C
}

// __wudInstallPatchCallback
void f_801D6710(Ctx* __restrict c) {
  trace_call(0x801D6710u);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D6710
  c->r[0]=c->lr; // 801D6714
  W32(c->r[1]+0x00000124u,c->r[0]); // 801D6718
  W32(c->r[1]+0x0000011Cu,c->r[31]); // 801D671C
  c->r[31]=0u+0x80280000u; // 801D6720
  c->r[31]=c->r[31]+0xFFFFCB10u; // 801D6724
  W32(c->r[1]+0x00000118u,c->r[30]); // 801D6728
  W32(c->r[1]+0x00000114u,c->r[29]); // 801D672C
  c->r[5]=R8(c->r[13]+0xFFFFB68Du); // 801D6730
  c->r[0]=R8(c->r[13]+0xFFFFB68Eu); // 801D6734
  cmpu(c,0,c->r[0],c->r[5]); // 801D6738
  if (!crb(c,2)) { goto L_801D6748; } // 801D673C
  cmps(c,0,(int32_t)c->r[3],0); // 801D6740
  if (!crb(c,2)) { goto L_801D6750; } // 801D6744
L_801D6748:;
  cmps(c,0,(int32_t)c->r[3],0); // 801D6748
  if (!crb(c,2)) { goto L_801D676C; } // 801D674C
L_801D6750:;
  c->r[3]=c->r[31]+0x000008B0u; // 801D6750
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D6754
  c->lr=0x801D675Cu; f_801D94A0(c); // 801D6758
  c->r[3]=0u+0x801D0000u; // 801D675C
  c->r[3]=c->r[3]+0x000066E0u; // 801D6760
  c->lr=0x801D6768u; f_801E51F0(c); // 801D6764
  goto L_801D67E4; // 801D6768
L_801D676C:;
  c->r[0]=c->r[0]-c->r[5]; // 801D676C
  c->r[3]=0u+0x00000013u; // 801D6770
  cmps(c,0,(int32_t)c->r[0],19); // 801D6774
  if (!crb(c,0)) { goto L_801D6780; } // 801D6778
  c->r[3]=c->r[0]|c->r[0]; // 801D677C
L_801D6780:;
  c->r[30]=rotl(c->r[3],0)&0x000000FFu; // 801D6780
  W8(c->r[1]+0x00000008u,c->r[3]); // 801D6784
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)13); // 801D6788
  c->r[4]=c->r[31]+0x000001A4u; // 801D678C
  c->r[3]=c->r[1]+0x00000009u; // 801D6790
  c->r[29]=(uint32_t)((int32_t)c->r[30]*(int32_t)13); // 801D6794
  c->r[4]=c->r[4]+c->r[0]; // 801D6798
  c->r[5]=c->r[29]|c->r[29]; // 801D679C
  c->r[4]=c->r[4]+0x00000001u; // 801D67A0
  c->lr=0x801D67A8u; f_80004364(c); // 801D67A4
  c->r[0]=R8(c->r[13]+0xFFFFB68Du); // 801D67A8
  c->r[3]=c->r[31]+0x000008C0u; // 801D67AC
  c->r[0]=c->r[0]+c->r[30]; // 801D67B0
  W8(c->r[13]+0xFFFFB68Du,c->r[0]); // 801D67B4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D67B8
  c->lr=0x801D67C0u; f_801D94A0(c); // 801D67BC
  c->r[3]=0u+0x00010000u; // 801D67C0
  c->r[0]=c->r[29]+0x00000001u; // 801D67C4
  c->r[3]=c->r[3]+0xFFFFFC4Fu; // 801D67C8
  c->r[6]=0u+0x801D0000u; // 801D67CC
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 801D67D0
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 801D67D4
  c->r[5]=c->r[1]+0x00000008u; // 801D67D8
  c->r[6]=c->r[6]+0x00006710u; // 801D67DC
  c->lr=0x801D67E4u; f_801E61EC(c); // 801D67E0
L_801D67E4:;
  c->r[0]=R32(c->r[1]+0x00000124u); // 801D67E4
  c->r[31]=R32(c->r[1]+0x0000011Cu); // 801D67E8
  c->r[30]=R32(c->r[1]+0x00000118u); // 801D67EC
  c->r[29]=R32(c->r[1]+0x00000114u); // 801D67F0
  c->lr=c->r[0]; // 801D67F4
  c->r[1]=c->r[1]+0x00000120u; // 801D67F8
  return; // 801D67FC
}

// __wudWritePatchCallback
void f_801D6800(Ctx* __restrict c) {
  trace_call(0x801D6800u);
  {uint32_t ea=c->r[1]+0xFFFFFDE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D6800
  c->r[0]=c->lr; // 801D6804
  cmps(c,0,(int32_t)c->r[3],0); // 801D6808
  W32(c->r[1]+0x00000224u,c->r[0]); // 801D680C
  W32(c->r[1]+0x0000021Cu,c->r[31]); // 801D6810
  c->r[31]=0u+0x80280000u; // 801D6814
  c->r[31]=c->r[31]+0xFFFFCB10u; // 801D6818
  W32(c->r[1]+0x00000218u,c->r[30]); // 801D681C
  W32(c->r[1]+0x00000214u,c->r[29]); // 801D6820
  if (crb(c,2)) { goto L_801D6A20; } // 801D6824
  c->r[4]=R32(c->r[13]+0xFFFFB694u); // 801D6828
  c->r[0]=R32(c->r[13]+0xFFFFB698u); // 801D682C
  cmpu(c,0,c->r[0],c->r[4]); // 801D6830
  if (!crb(c,2)) { goto L_801D68B8; } // 801D6834
  c->r[3]=R8(c->r[31]+0x000001A4u); // 801D6838
  c->r[0]=0u+0x00000000u; // 801D683C
  W8(c->r[13]+0xFFFFB68Du,c->r[0]); // 801D6840
  c->r[0]=0u+0x00000013u; // 801D6844
  cmps(c,0,(int32_t)c->r[3],19); // 801D6848
  W8(c->r[13]+0xFFFFB68Eu,c->r[3]); // 801D684C
  if (!crb(c,0)) { goto L_801D6858; } // 801D6850
  c->r[0]=c->r[3]|c->r[3]; // 801D6854
L_801D6858:;
  c->r[30]=rotl(c->r[0],0)&0x000000FFu; // 801D6858
  c->r[4]=c->r[31]+0x000001A4u; // 801D685C
  c->r[29]=(uint32_t)((int32_t)c->r[30]*(int32_t)13); // 801D6860
  W8(c->r[1]+0x00000108u,c->r[0]); // 801D6864
  c->r[3]=c->r[1]+0x00000109u; // 801D6868
  c->r[4]=c->r[4]+0x00000001u; // 801D686C
  c->r[5]=c->r[29]|c->r[29]; // 801D6870
  c->lr=0x801D6878u; f_80004364(c); // 801D6874
  c->r[0]=R8(c->r[13]+0xFFFFB68Du); // 801D6878
  c->r[3]=c->r[31]+0x000008C0u; // 801D687C
  c->r[0]=c->r[0]+c->r[30]; // 801D6880
  W8(c->r[13]+0xFFFFB68Du,c->r[0]); // 801D6884
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D6888
  c->lr=0x801D6890u; f_801D94A0(c); // 801D688C
  c->r[3]=0u+0x00010000u; // 801D6890
  c->r[0]=c->r[29]+0x00000001u; // 801D6894
  c->r[3]=c->r[3]+0xFFFFFC4Fu; // 801D6898
  c->r[6]=0u+0x801D0000u; // 801D689C
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 801D68A0
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 801D68A4
  c->r[5]=c->r[1]+0x00000108u; // 801D68A8
  c->r[6]=c->r[6]+0x00006710u; // 801D68AC
  c->lr=0x801D68B4u; f_801E61EC(c); // 801D68B0
  goto L_801D6A38; // 801D68B4
L_801D68B8:;
  c->r[0]=c->r[0]-c->r[4]; // 801D68B8
  c->r[3]=0u+0x000000FBu; // 801D68BC
  cmpu(c,0,c->r[0],0x000000FBu); // 801D68C0
  if (!crb(c,0)) { goto L_801D68CC; } // 801D68C4
  c->r[3]=c->r[0]|c->r[0]; // 801D68C8
L_801D68CC:;
  c->r[0]=R32(c->r[13]+0xFFFFB690u); // 801D68CC
  c->r[30]=rotl(c->r[3],0)&0x000000FFu; // 801D68D0
  cmps(c,6,(int32_t)c->r[30],0); // 801D68D4
  c->r[5]=0u+0x00000000u; // 801D68D8
  c->r[0]=c->r[0]+c->r[4]; // 801D68DC
  W8(c->r[1]+0x00000008u,c->r[0]); // 801D68E0
  c->r[4]=rotl(c->r[0],24)&0x000000FFu; // 801D68E4
  c->r[3]=rotl(c->r[0],16)&0x000000FFu; // 801D68E8
  c->r[0]=rotl(c->r[0],8)&0x000000FFu; // 801D68EC
  W8(c->r[1]+0x00000009u,c->r[4]); // 801D68F0
  W8(c->r[1]+0x0000000Au,c->r[3]); // 801D68F4
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 801D68F8
  if (!crb(c,25)) { goto L_801D69E0; } // 801D68FC
  cmps(c,0,(int32_t)c->r[30],8); // 801D6900
  c->r[6]=c->r[30]+0xFFFFFFF8u; // 801D6904
  if (!crb(c,1)) { goto L_801D69A4; } // 801D6908
  c->r[4]=0u+0x00000000u; // 801D690C
  if (crb(c,24)) { goto L_801D6928; } // 801D6910
  c->r[3]=0u+0x80000000u; // 801D6914
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 801D6918
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 801D691C
  if (crb(c,1)) { goto L_801D6928; } // 801D6920
  c->r[4]=0u+0x00000001u; // 801D6924
L_801D6928:;
  cmps(c,0,(int32_t)c->r[4],0); // 801D6928
  if (crb(c,2)) { goto L_801D69A4; } // 801D692C
  c->r[0]=c->r[6]+0x00000007u; // 801D6930
  c->r[4]=R32(c->r[13]+0xFFFFB694u); // 801D6934
  c->r[3]=c->r[31]+0x000000E8u; // 801D6938
  c->r[7]=c->r[1]+0x00000008u; // 801D693C
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 801D6940
  c->r[4]=c->r[3]+c->r[4]; // 801D6944
  c->ctr=c->r[0]; // 801D6948
  cmps(c,0,(int32_t)c->r[6],0); // 801D694C
  if (!crb(c,1)) { goto L_801D69A4; } // 801D6950
L_801D6954:;
  c->r[3]=c->r[4]+c->r[5]; // 801D6954
  c->r[5]=c->r[5]+0x00000008u; // 801D6958
  c->r[0]=R8(c->r[3]+0x00000008u); // 801D695C
  W8(c->r[7]+0x00000004u,c->r[0]); // 801D6960
  c->r[0]=R8(c->r[3]+0x00000009u); // 801D6964
  W8(c->r[7]+0x00000005u,c->r[0]); // 801D6968
  c->r[0]=R8(c->r[3]+0x0000000Au); // 801D696C
  W8(c->r[7]+0x00000006u,c->r[0]); // 801D6970
  c->r[0]=R8(c->r[3]+0x0000000Bu); // 801D6974
  W8(c->r[7]+0x00000007u,c->r[0]); // 801D6978
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 801D697C
  W8(c->r[7]+0x00000008u,c->r[0]); // 801D6980
  c->r[0]=R8(c->r[3]+0x0000000Du); // 801D6984
  W8(c->r[7]+0x00000009u,c->r[0]); // 801D6988
  c->r[0]=R8(c->r[3]+0x0000000Eu); // 801D698C
  W8(c->r[7]+0x0000000Au,c->r[0]); // 801D6990
  c->r[0]=R8(c->r[3]+0x0000000Fu); // 801D6994
  W8(c->r[7]+0x0000000Bu,c->r[0]); // 801D6998
  c->r[7]=c->r[7]+0x00000008u; // 801D699C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D6954; } // 801D69A0
L_801D69A4:;
  c->r[4]=R32(c->r[13]+0xFFFFB694u); // 801D69A4
  c->r[6]=c->r[1]+0x00000008u; // 801D69A8
  c->r[3]=c->r[31]+0x000000E8u; // 801D69AC
  c->r[0]=c->r[30]-c->r[5]; // 801D69B0
  c->r[6]=c->r[6]+c->r[5]; // 801D69B4
  c->r[4]=c->r[3]+c->r[4]; // 801D69B8
  c->ctr=c->r[0]; // 801D69BC
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[30]); // 801D69C0
  if (!crb(c,0)) { goto L_801D69E0; } // 801D69C4
L_801D69C8:;
  c->r[3]=c->r[4]+c->r[5]; // 801D69C8
  c->r[5]=c->r[5]+0x00000001u; // 801D69CC
  c->r[0]=R8(c->r[3]+0x00000008u); // 801D69D0
  W8(c->r[6]+0x00000004u,c->r[0]); // 801D69D4
  c->r[6]=c->r[6]+0x00000001u; // 801D69D8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D69C8; } // 801D69DC
L_801D69E0:;
  c->r[0]=R32(c->r[13]+0xFFFFB694u); // 801D69E0
  c->r[3]=c->r[31]+0x000008D8u; // 801D69E4
  c->r[4]=c->r[0]+c->r[30]; // 801D69E8
  W32(c->r[13]+0xFFFFB694u,c->r[4]); // 801D69EC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D69F0
  c->lr=0x801D69F8u; f_801D94A0(c); // 801D69F4
  c->r[3]=0u+0x00010000u; // 801D69F8
  c->r[0]=c->r[30]+0x00000004u; // 801D69FC
  c->r[3]=c->r[3]+0xFFFFFC4Cu; // 801D6A00
  c->r[6]=0u+0x801D0000u; // 801D6A04
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 801D6A08
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 801D6A0C
  c->r[5]=c->r[1]+0x00000008u; // 801D6A10
  c->r[6]=c->r[6]+0x00006800u; // 801D6A14
  c->lr=0x801D6A1Cu; f_801E61EC(c); // 801D6A18
  goto L_801D6A38; // 801D6A1C
L_801D6A20:;
  c->r[3]=c->r[31]+0x000008B0u; // 801D6A20
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D6A24
  c->lr=0x801D6A2Cu; f_801D94A0(c); // 801D6A28
  c->r[3]=0u+0x801D0000u; // 801D6A2C
  c->r[3]=c->r[3]+0x000066E0u; // 801D6A30
  c->lr=0x801D6A38u; f_801E51F0(c); // 801D6A34
L_801D6A38:;
  c->r[0]=R32(c->r[1]+0x00000224u); // 801D6A38
  c->r[31]=R32(c->r[1]+0x0000021Cu); // 801D6A3C
  c->r[30]=R32(c->r[1]+0x00000218u); // 801D6A40
  c->r[29]=R32(c->r[1]+0x00000214u); // 801D6A44
  c->lr=c->r[0]; // 801D6A48
  c->r[1]=c->r[1]+0x00000220u; // 801D6A4C
  return; // 801D6A50
}

// __wudRemovePatchCallback
void f_801D6A60(Ctx* __restrict c) {
  trace_call(0x801D6A60u);
  {uint32_t ea=c->r[1]+0xFFFFFEF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D6A60
  c->r[0]=c->lr; // 801D6A64
  W32(c->r[1]+0x00000114u,c->r[0]); // 801D6A68
  W32(c->r[1]+0x0000010Cu,c->r[31]); // 801D6A6C
  c->r[31]=0u+0x80280000u; // 801D6A70
  c->r[31]=c->r[31]+0xFFFFCB10u; // 801D6A74
  W32(c->r[1]+0x00000108u,c->r[30]); // 801D6A78
  c->r[30]=c->r[3]|c->r[3]; // 801D6A7C
  c->r[3]=c->r[31]+0x000008F8u; // 801D6A80
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D6A84
  c->lr=0x801D6A8Cu; f_801D94A0(c); // 801D6A88
  cmps(c,0,(int32_t)c->r[30],0); // 801D6A8C
  if (crb(c,2)) { goto L_801D6BE4; } // 801D6A90
  c->r[3]=R32(c->r[13]+0xFFFFB698u); // 801D6A94
  c->r[0]=0u+0x000000FBu; // 801D6A98
  cmpu(c,0,c->r[3],0x000000FBu); // 801D6A9C
  if (!crb(c,0)) { goto L_801D6AA8; } // 801D6AA0
  c->r[0]=c->r[3]|c->r[3]; // 801D6AA4
L_801D6AA8:;
  c->r[5]=R32(c->r[13]+0xFFFFB690u); // 801D6AA8
  c->r[30]=rotl(c->r[0],0)&0x000000FFu; // 801D6AAC
  cmps(c,6,(int32_t)c->r[30],0); // 801D6AB0
  W8(c->r[1]+0x00000008u,c->r[5]); // 801D6AB4
  c->r[4]=rotl(c->r[5],24)&0x000000FFu; // 801D6AB8
  c->r[3]=rotl(c->r[5],16)&0x000000FFu; // 801D6ABC
  c->r[0]=rotl(c->r[5],8)&0x000000FFu; // 801D6AC0
  W8(c->r[1]+0x00000009u,c->r[4]); // 801D6AC4
  c->r[5]=0u+0x00000000u; // 801D6AC8
  W8(c->r[1]+0x0000000Au,c->r[3]); // 801D6ACC
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 801D6AD0
  if (!crb(c,25)) { goto L_801D6BA8; } // 801D6AD4
  cmps(c,0,(int32_t)c->r[30],8); // 801D6AD8
  c->r[6]=c->r[30]+0xFFFFFFF8u; // 801D6ADC
  if (!crb(c,1)) { goto L_801D6B74; } // 801D6AE0
  c->r[4]=0u+0x00000000u; // 801D6AE4
  if (crb(c,24)) { goto L_801D6B00; } // 801D6AE8
  c->r[3]=0u+0x80000000u; // 801D6AEC
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 801D6AF0
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 801D6AF4
  if (crb(c,1)) { goto L_801D6B00; } // 801D6AF8
  c->r[4]=0u+0x00000001u; // 801D6AFC
L_801D6B00:;
  cmps(c,0,(int32_t)c->r[4],0); // 801D6B00
  if (crb(c,2)) { goto L_801D6B74; } // 801D6B04
  c->r[0]=c->r[6]+0x00000007u; // 801D6B08
  c->r[7]=c->r[1]+0x00000008u; // 801D6B0C
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 801D6B10
  c->r[4]=c->r[31]+0x000000E8u; // 801D6B14
  c->ctr=c->r[0]; // 801D6B18
  cmps(c,0,(int32_t)c->r[6],0); // 801D6B1C
  if (!crb(c,1)) { goto L_801D6B74; } // 801D6B20
L_801D6B24:;
  c->r[3]=c->r[4]+c->r[5]; // 801D6B24
  c->r[5]=c->r[5]+0x00000008u; // 801D6B28
  c->r[0]=R8(c->r[3]+0x00000008u); // 801D6B2C
  W8(c->r[7]+0x00000004u,c->r[0]); // 801D6B30
  c->r[0]=R8(c->r[3]+0x00000009u); // 801D6B34
  W8(c->r[7]+0x00000005u,c->r[0]); // 801D6B38
  c->r[0]=R8(c->r[3]+0x0000000Au); // 801D6B3C
  W8(c->r[7]+0x00000006u,c->r[0]); // 801D6B40
  c->r[0]=R8(c->r[3]+0x0000000Bu); // 801D6B44
  W8(c->r[7]+0x00000007u,c->r[0]); // 801D6B48
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 801D6B4C
  W8(c->r[7]+0x00000008u,c->r[0]); // 801D6B50
  c->r[0]=R8(c->r[3]+0x0000000Du); // 801D6B54
  W8(c->r[7]+0x00000009u,c->r[0]); // 801D6B58
  c->r[0]=R8(c->r[3]+0x0000000Eu); // 801D6B5C
  W8(c->r[7]+0x0000000Au,c->r[0]); // 801D6B60
  c->r[0]=R8(c->r[3]+0x0000000Fu); // 801D6B64
  W8(c->r[7]+0x0000000Bu,c->r[0]); // 801D6B68
  c->r[7]=c->r[7]+0x00000008u; // 801D6B6C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D6B24; } // 801D6B70
L_801D6B74:;
  c->r[6]=c->r[1]+0x00000008u; // 801D6B74
  c->r[0]=c->r[30]-c->r[5]; // 801D6B78
  c->r[6]=c->r[6]+c->r[5]; // 801D6B7C
  c->r[4]=c->r[31]+0x000000E8u; // 801D6B80
  c->ctr=c->r[0]; // 801D6B84
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[30]); // 801D6B88
  if (!crb(c,0)) { goto L_801D6BA8; } // 801D6B8C
L_801D6B90:;
  c->r[3]=c->r[4]+c->r[5]; // 801D6B90
  c->r[5]=c->r[5]+0x00000001u; // 801D6B94
  c->r[0]=R8(c->r[3]+0x00000008u); // 801D6B98
  W8(c->r[6]+0x00000004u,c->r[0]); // 801D6B9C
  c->r[6]=c->r[6]+0x00000001u; // 801D6BA0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D6B90; } // 801D6BA4
L_801D6BA8:;
  W32(c->r[13]+0xFFFFB694u,c->r[30]); // 801D6BA8
  c->r[4]=c->r[30]|c->r[30]; // 801D6BAC
  c->r[3]=c->r[31]+0x000008D8u; // 801D6BB0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D6BB4
  c->lr=0x801D6BBCu; f_801D94A0(c); // 801D6BB8
  c->r[3]=0u+0x00010000u; // 801D6BBC
  c->r[0]=c->r[30]+0x00000004u; // 801D6BC0
  c->r[3]=c->r[3]+0xFFFFFC4Cu; // 801D6BC4
  c->r[6]=0u+0x801D0000u; // 801D6BC8
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 801D6BCC
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 801D6BD0
  c->r[5]=c->r[1]+0x00000008u; // 801D6BD4
  c->r[6]=c->r[6]+0x00006800u; // 801D6BD8
  c->lr=0x801D6BE0u; f_801E61EC(c); // 801D6BDC
  goto L_801D6BFC; // 801D6BE0
L_801D6BE4:;
  c->r[3]=c->r[31]+0x000008B0u; // 801D6BE4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D6BE8
  c->lr=0x801D6BF0u; f_801D94A0(c); // 801D6BEC
  c->r[3]=0u+0x801D0000u; // 801D6BF0
  c->r[3]=c->r[3]+0x000066E0u; // 801D6BF4
  c->lr=0x801D6BFCu; f_801E51F0(c); // 801D6BF8
L_801D6BFC:;
  c->r[0]=R32(c->r[1]+0x00000114u); // 801D6BFC
  c->r[31]=R32(c->r[1]+0x0000010Cu); // 801D6C00
  c->r[30]=R32(c->r[1]+0x00000108u); // 801D6C04
  c->lr=c->r[0]; // 801D6C08
  c->r[1]=c->r[1]+0x00000110u; // 801D6C0C
  return; // 801D6C10
}

// __wudSuperPeekPokeCallback
void f_801D6C20(Ctx* __restrict c) {
  trace_call(0x801D6C20u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D6C20
  c->r[0]=c->lr; // 801D6C24
  c->r[3]=0u+0x80280000u; // 801D6C28
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D6C2C
  c->r[3]=c->r[3]+0xFFFFD420u; // 801D6C30
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D6C34
  c->lr=0x801D6C3Cu; f_801D94A0(c); // 801D6C38
  c->r[3]=0u+0x80280000u; // 801D6C3C
  c->r[3]=c->r[3]+0xFFFFD438u; // 801D6C40
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D6C44
  c->lr=0x801D6C4Cu; f_801D94A0(c); // 801D6C48
  c->r[3]=0u+0x00010000u; // 801D6C4C
  c->r[6]=0u+0x801D0000u; // 801D6C50
  c->r[0]=c->r[3]+0xFFFFFC4Fu; // 801D6C54
  c->r[4]=0u+0x00000001u; // 801D6C58
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801D6C5C
  c->r[6]=c->r[6]+0x00006A60u; // 801D6C60
  c->r[5]=c->r[13]+0xFFFFB674u; // 801D6C64
  c->lr=0x801D6C6Cu; f_801E61EC(c); // 801D6C68
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D6C6C
  c->lr=c->r[0]; // 801D6C70
  c->r[1]=c->r[1]+0x00000010u; // 801D6C74
  return; // 801D6C78
}

// __wudAppendRuntimePatch
void f_801D6C80(Ctx* __restrict c) {
  trace_call(0x801D6C80u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D6C80
  c->r[0]=c->lr; // 801D6C84
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D6C88
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D6C8C
  c->r[31]=0u+0x80280000u; // 801D6C90
  c->r[31]=c->r[31]+0xFFFFCB10u; // 801D6C94
  c->r[3]=c->r[31]+0x00000938u; // 801D6C98
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D6C9C
  c->lr=0x801D6CA4u; f_801D94A0(c); // 801D6CA0
  c->r[8]=c->r[31]+0x000000E8u; // 801D6CA4
  c->r[0]=R32(c->r[13]+0xFFFFAF90u); // 801D6CA8
  c->r[5]=R8(c->r[8]+0x00000003u); // 801D6CAC
  c->r[3]=R8(c->r[8]+0x00000007u); // 801D6CB0
  cmps(c,0,(int32_t)c->r[0],0); // 801D6CB4
  c->r[4]=R8(c->r[8]+0x00000002u); // 801D6CB8
  c->r[5]=rotl(c->r[5],8)&0xFFFFFF00u; // 801D6CBC
  c->r[0]=R8(c->r[8]+0x00000006u); // 801D6CC0
  c->r[3]=rotl(c->r[3],8)&0xFFFFFF00u; // 801D6CC4
  c->r[4]=c->r[5]+c->r[4]; // 801D6CC8
  c->r[6]=R8(c->r[8]+0x00000001u); // 801D6CCC
  c->r[0]=c->r[3]+c->r[0]; // 801D6CD0
  c->r[3]=R8(c->r[8]+0x00000005u); // 801D6CD4
  c->r[7]=rotl(c->r[4],8)&0xFFFFFF00u; // 801D6CD8
  c->r[4]=R8(c->r[31]+0x000000E8u); // 801D6CDC
  c->r[5]=rotl(c->r[0],8)&0xFFFFFF00u; // 801D6CE0
  c->r[0]=R8(c->r[8]+0x00000004u); // 801D6CE4
  c->r[3]=c->r[5]+c->r[3]; // 801D6CE8
  c->r[6]=c->r[7]+c->r[6]; // 801D6CEC
  c->r[5]=rotl(c->r[6],8)&0xFFFFFF00u; // 801D6CF0
  c->r[3]=rotl(c->r[3],8)&0xFFFFFF00u; // 801D6CF4
  c->r[4]=c->r[5]+c->r[4]; // 801D6CF8
  W32(c->r[13]+0xFFFFB690u,c->r[4]); // 801D6CFC
  c->r[0]=c->r[3]+c->r[0]; // 801D6D00
  W32(c->r[13]+0xFFFFB698u,c->r[0]); // 801D6D04
  if (crb(c,2)) { goto L_801D6D3C; } // 801D6D08
  c->r[3]=c->r[31]+0x00000954u; // 801D6D0C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D6D10
  c->lr=0x801D6D18u; f_801D94A0(c); // 801D6D14
  c->r[3]=0u+0x00010000u; // 801D6D18
  c->r[6]=0u+0x801D0000u; // 801D6D1C
  c->r[0]=c->r[3]+0xFFFFFC0Au; // 801D6D20
  c->r[5]=c->r[31]+0x000000DCu; // 801D6D24
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801D6D28
  c->r[6]=c->r[6]+0x00006C20u; // 801D6D2C
  c->r[4]=0u+0x00000009u; // 801D6D30
  c->lr=0x801D6D38u; f_801E61EC(c); // 801D6D34
  goto L_801D6D68; // 801D6D38
L_801D6D3C:;
  c->r[3]=c->r[31]+0x00000928u; // 801D6D3C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D6D40
  c->lr=0x801D6D48u; f_801D94A0(c); // 801D6D44
  c->r[3]=0u+0x00010000u; // 801D6D48
  c->r[6]=0u+0x801D0000u; // 801D6D4C
  c->r[0]=c->r[3]+0xFFFFFC4Fu; // 801D6D50
  c->r[4]=0u+0x00000001u; // 801D6D54
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801D6D58
  c->r[6]=c->r[6]+0x00006A60u; // 801D6D5C
  c->r[5]=c->r[13]+0xFFFFB674u; // 801D6D60
  c->lr=0x801D6D68u; f_801E61EC(c); // 801D6D64
L_801D6D68:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D6D68
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D6D6C
  c->lr=c->r[0]; // 801D6D70
  c->r[1]=c->r[1]+0x00000010u; // 801D6D74
  return; // 801D6D78
}

// __wudInitSub
void f_801D6D80(Ctx* __restrict c) {
  trace_call(0x801D6D80u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D6D80
  c->r[0]=c->lr; // 801D6D84
  c->r[3]=0u+0x80280000u; // 801D6D88
  c->r[5]=R32(c->r[2]+0xFFFFA250u); // 801D6D8C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D6D90
  c->r[3]=c->r[3]+0xFFFFD474u; // 801D6D94
  c->r[4]=R16(c->r[2]+0xFFFFA254u); // 801D6D98
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D6D9C
  c->r[0]=R8(c->r[2]+0xFFFFA256u); // 801D6DA0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D6DA4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D6DA8
  W32(c->r[1]+0x00000010u,c->r[28]); // 801D6DAC
  c->r[28]=0u+0x802E0000u; // 801D6DB0
  c->r[28]=c->r[28]+0xFFFF9DC0u; // 801D6DB4
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 801D6DB8
  W16(c->r[1]+0x00000008u,c->r[4]); // 801D6DBC
  W8(c->r[1]+0x0000000Au,c->r[0]); // 801D6DC0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D6DC4
  c->lr=0x801D6DCCu; f_801D94A0(c); // 801D6DC8
  c->r[3]=c->r[1]+0x0000000Cu; // 801D6DCC
  c->lr=0x801D6DD4u; f_801DF988(c); // 801D6DD0
  c->r[3]=c->r[1]+0x00000008u; // 801D6DD4
  c->lr=0x801D6DDCu; f_801E6134(c); // 801D6DD8
  c->r[3]=0u+0x801E0000u; // 801D6DDC
  c->r[3]=c->r[3]+0xFFFF8400u; // 801D6DE0
  c->lr=0x801D6DE8u; f_801E6354(c); // 801D6DE4
  c->r[3]=0u+0x801E0000u; // 801D6DE8
  c->r[3]=c->r[3]+0xFFFF86B0u; // 801D6DEC
  c->lr=0x801D6DF4u; f_801E61D4(c); // 801D6DF0
  c->r[5]=0u+0x801E0000u; // 801D6DF4
  c->r[4]=c->r[28]+0x0000070Au; // 801D6DF8
  c->r[5]=c->r[5]+0xFFFF8A60u; // 801D6DFC
  c->r[3]=0u+0x00000003u; // 801D6E00
  c->lr=0x801D6E08u; f_801E8650(c); // 801D6E04
  c->r[3]=0u+0x00010000u; // 801D6E08
  c->r[0]=c->r[3]+0xFFFF8000u; // 801D6E0C
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801D6E10
  c->lr=0x801D6E18u; f_801E6424(c); // 801D6E14
  c->r[3]=0u+0x00000005u; // 801D6E18
  c->lr=0x801D6E20u; f_801E36E8(c); // 801D6E1C
  c->r[3]=0u+0x00000C80u; // 801D6E20
  c->lr=0x801D6E28u; f_801E3AB4(c); // 801D6E24
  c->r[30]=c->r[28]|c->r[28]; // 801D6E28
  c->r[31]=c->r[28]+0x00000124u; // 801D6E2C
  c->r[29]=0u+0x00000000u; // 801D6E30
L_801D6E34:;
  c->r[0]=R8(c->r[30]+0x0000013Du); // 801D6E34
  cmpu(c,0,c->r[0],0x00000001u); // 801D6E38
  if (!crb(c,2)) { goto L_801D6E48; } // 801D6E3C
  c->r[3]=c->r[31]|c->r[31]; // 801D6E40
  c->lr=0x801D6E48u; f_801D6EF0(c); // 801D6E44
L_801D6E48:;
  c->r[29]=c->r[29]+0x00000001u; // 801D6E48
  c->r[31]=c->r[31]+0x00000060u; // 801D6E4C
  cmps(c,0,(int32_t)c->r[29],10); // 801D6E50
  c->r[30]=c->r[30]+0x00000060u; // 801D6E54
  if (crb(c,0)) { IRQCHK(c); goto L_801D6E34; } // 801D6E58
  c->r[31]=c->r[28]|c->r[28]; // 801D6E5C
  c->r[30]=c->r[28]+0x000004E4u; // 801D6E60
  c->r[29]=0u+0x00000000u; // 801D6E64
L_801D6E68:;
  c->r[0]=R8(c->r[31]+0x000004FDu); // 801D6E68
  cmpu(c,0,c->r[0],0x00000001u); // 801D6E6C
  if (!crb(c,2)) { goto L_801D6E7C; } // 801D6E70
  c->r[3]=c->r[30]|c->r[30]; // 801D6E74
  c->lr=0x801D6E7Cu; f_801D6EF0(c); // 801D6E78
L_801D6E7C:;
  c->r[29]=c->r[29]+0x00000001u; // 801D6E7C
  c->r[30]=c->r[30]+0x00000060u; // 801D6E80
  cmps(c,0,(int32_t)c->r[29],6); // 801D6E84
  c->r[31]=c->r[31]+0x00000060u; // 801D6E88
  if (crb(c,0)) { IRQCHK(c); goto L_801D6E68; } // 801D6E8C
  c->lr=0x801D6E94u; f_8018D6A0(c); // 801D6E90
  c->r[0]=0u+0x00000003u; // 801D6E94
  c->r[31]=0u+0x00000001u; // 801D6E98
  W8(c->r[28]+0x00000708u,c->r[0]); // 801D6E9C
  W32(c->r[13]+0xFFFFB66Cu,c->r[31]); // 801D6EA0
  c->lr=0x801D6EA8u; f_8018D6E0(c); // 801D6EA4
  c->lr=0x801D6EACu; f_8018D6A0(c); // 801D6EA8
  c->r[4]=0u+0x802E0000u; // 801D6EAC
  c->r[0]=0u+0x00000000u; // 801D6EB0
  c->r[4]=c->r[4]+0xFFFF9DC0u; // 801D6EB4
  W8(c->r[4]+0x000006EBu,c->r[0]); // 801D6EB8
  W8(c->r[4]+0x000006EAu,c->r[31]); // 801D6EBC
  c->lr=0x801D6EC4u; f_8018D6E0(c); // 801D6EC0
  c->r[3]=0u+0x00000000u; // 801D6EC4
  c->r[4]=0u+0x00000001u; // 801D6EC8
  c->lr=0x801D6ED0u; f_801DF9EC(c); // 801D6ECC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D6ED0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D6ED4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D6ED8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D6EDC
  c->r[28]=R32(c->r[1]+0x00000010u); // 801D6EE0
  c->lr=c->r[0]; // 801D6EE4
  c->r[1]=c->r[1]+0x00000020u; // 801D6EE8
  return; // 801D6EEC
}

// WUDiRegisterDevice
void f_801D6EF0(Ctx* __restrict c) {
  trace_call(0x801D6EF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D6EF0
  c->r[0]=c->lr; // 801D6EF4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D6EF8
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801D6EFC
  c->r[31]=0u+0x80280000u; // 801D6F00
  c->r[31]=c->r[31]+0xFFFFCB10u; // 801D6F04
  W32(c->r[1]+0x00000028u,c->r[30]); // 801D6F08
  c->r[30]=0u+0x802E0000u; // 801D6F0C
  c->r[30]=c->r[30]+0xFFFF9DC0u; // 801D6F10
  W32(c->r[1]+0x00000024u,c->r[29]); // 801D6F14
  c->r[29]=c->r[3]|c->r[3]; // 801D6F18
  W32(c->r[1]+0x00000020u,c->r[28]); // 801D6F1C
  c->lr=0x801D6F24u; f_8018D6A0(c); // 801D6F20
  c->r[28]=c->r[3]|c->r[3]; // 801D6F24
  c->r[3]=c->r[29]|c->r[29]; // 801D6F28
  c->lr=0x801D6F30u; f_801D71D0(c); // 801D6F2C
  c->r[29]=c->r[3]|c->r[3]; // 801D6F30
  c->r[4]=c->r[3]+0x00000046u; // 801D6F34
  c->r[5]=0u+0x00000000u; // 801D6F38
  c->r[6]=0u+0x00000000u; // 801D6F3C
  c->r[3]=c->r[3]+0x00000040u; // 801D6F40
  c->lr=0x801D6F48u; f_801DFB8C(c); // 801D6F44
  c->r[0]=c->r[3]|c->r[3]; // 801D6F48
  c->r[3]=c->r[31]+0x0000097Cu; // 801D6F4C
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 801D6F50
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D6F54
  c->lr=0x801D6F5Cu; f_801D94A0(c); // 801D6F58
  c->r[3]=c->r[29]|c->r[29]; // 801D6F5C
  c->r[4]=c->r[31]+0x00000268u; // 801D6F60
  c->r[5]=0u+0x00000010u; // 801D6F64
  c->lr=0x801D6F6Cu; f_8020BD24(c); // 801D6F68
  cmps(c,0,(int32_t)c->r[3],0); // 801D6F6C
  if (crb(c,2)) { goto L_801D6F98; } // 801D6F70
  c->r[3]=c->r[29]|c->r[29]; // 801D6F74
  c->r[4]=c->r[31]+0x0000027Cu; // 801D6F78
  c->r[5]=0u+0x00000010u; // 801D6F7C
  c->lr=0x801D6F84u; f_8020BD24(c); // 801D6F80
  cmps(c,0,(int32_t)c->r[3],0); // 801D6F84
  if (!crb(c,2)) { goto L_801D6FDC; } // 801D6F88
  c->r[0]=R32(c->r[13]+0xFFFFB680u); // 801D6F8C
  cmps(c,0,(int32_t)c->r[0],0); // 801D6F90
  if (crb(c,2)) { goto L_801D6FDC; } // 801D6F94
L_801D6F98:;
  c->r[0]=c->r[31]+0x00000000u; // 801D6F98
  c->r[3]=0u+0x000000D9u; // 801D6F9C
  W16(c->r[1]+0x00000010u,c->r[3]); // 801D6FA0
  c->r[3]=c->r[31]+0x00000998u; // 801D6FA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D6FA8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D6FAC
  c->lr=0x801D6FB4u; f_801D94A0(c); // 801D6FB0
  c->r[4]=R32(c->r[1]+0x00000010u); // 801D6FB4
  c->r[3]=c->r[29]+0x00000040u; // 801D6FB8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D6FBC
  c->r[7]=c->r[1]+0x00000008u; // 801D6FC0
  W32(c->r[1]+0x00000008u,c->r[4]); // 801D6FC4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801D6FC8
  c->r[4]=R16(c->r[29]+0x0000005Eu); // 801D6FCC
  c->r[5]=R8(c->r[29]+0x00000057u); // 801D6FD0
  c->r[6]=R8(c->r[29]+0x00000058u); // 801D6FD4
  c->lr=0x801D6FDCu; f_801E2228(c); // 801D6FD8
L_801D6FDC:;
  c->r[0]=R8(c->r[29]+0x0000005Bu); // 801D6FDC
  cmps(c,0,(int32_t)c->r[0],0); // 801D6FE0
  if (crb(c,2)) { goto L_801D7000; } // 801D6FE4
  cmpu(c,0,c->r[0],0x00000004u); // 801D6FE8
  if (crb(c,2)) { goto L_801D7000; } // 801D6FEC
  cmpu(c,0,c->r[0],0x00000002u); // 801D6FF0
  if (crb(c,2)) { goto L_801D7000; } // 801D6FF4
  cmpu(c,0,c->r[0],0x00000005u); // 801D6FF8
  if (!crb(c,2)) { goto L_801D7010; } // 801D6FFC
L_801D7000:;
  c->r[3]=R8(c->r[30]+0x00000012u); // 801D7000
  c->r[0]=c->r[3]+0x00000001u; // 801D7004
  W8(c->r[30]+0x00000012u,c->r[0]); // 801D7008
  goto L_801D701C; // 801D700C
L_801D7010:;
  c->r[3]=R8(c->r[30]+0x00000013u); // 801D7010
  c->r[0]=c->r[3]+0x00000001u; // 801D7014
  W8(c->r[30]+0x00000013u,c->r[0]); // 801D7018
L_801D701C:;
  c->r[3]=c->r[28]|c->r[28]; // 801D701C
  c->lr=0x801D7024u; f_8018D6E0(c); // 801D7020
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D7024
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801D7028
  c->r[30]=R32(c->r[1]+0x00000028u); // 801D702C
  c->r[29]=R32(c->r[1]+0x00000024u); // 801D7030
  c->r[28]=R32(c->r[1]+0x00000020u); // 801D7034
  c->lr=c->r[0]; // 801D7038
  c->r[1]=c->r[1]+0x00000030u; // 801D703C
  return; // 801D7040
}

// WUDiRemoveDevice
void f_801D7050(Ctx* __restrict c) {
  trace_call(0x801D7050u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D7050
  c->r[0]=c->lr; // 801D7054
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D7058
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D705C
  c->r[31]=0u+0x80280000u; // 801D7060
  c->r[31]=c->r[31]+0xFFFFCB10u; // 801D7064
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D7068
  c->r[30]=0u+0x802E0000u; // 801D706C
  c->r[30]=c->r[30]+0xFFFF9DC0u; // 801D7070
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D7074
  c->r[29]=c->r[3]|c->r[3]; // 801D7078
  W32(c->r[1]+0x00000010u,c->r[28]); // 801D707C
  c->lr=0x801D7084u; f_8018D6A0(c); // 801D7080
  c->r[28]=c->r[3]|c->r[3]; // 801D7084
  c->r[3]=c->r[31]+0x000009A8u; // 801D7088
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D708C
  c->lr=0x801D7094u; f_801D94A0(c); // 801D7090
  c->r[3]=c->r[29]|c->r[29]; // 801D7094
  c->lr=0x801D709Cu; f_801D71D0(c); // 801D7098
  cmps(c,0,(int32_t)c->r[3],0); // 801D709C
  c->r[29]=c->r[3]|c->r[3]; // 801D70A0
  if (crb(c,2)) { goto L_801D71A8; } // 801D70A4
  c->r[4]=R8(c->r[29]+0x00000056u); // 801D70A8
  c->r[3]=c->r[31]+0x000009C0u; // 801D70AC
  c->r[5]=R8(c->r[29]+0x00000040u); // 801D70B0
  c->r[6]=R8(c->r[29]+0x00000041u); // 801D70B4
  c->r[7]=R8(c->r[29]+0x00000042u); // 801D70B8
  c->r[8]=R8(c->r[29]+0x00000043u); // 801D70BC
  c->r[9]=R8(c->r[29]+0x00000044u); // 801D70C0
  c->r[10]=R8(c->r[29]+0x00000045u); // 801D70C4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D70C8
  c->lr=0x801D70D0u; f_801D94A0(c); // 801D70CC
  c->r[3]=c->r[31]+0x000009F8u; // 801D70D0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D70D4
  c->lr=0x801D70DCu; f_801D94A0(c); // 801D70D8
  c->r[3]=c->r[29]|c->r[29]; // 801D70DC
  c->r[4]=c->r[31]+0x00000268u; // 801D70E0
  c->r[5]=0u+0x00000010u; // 801D70E4
  c->lr=0x801D70ECu; f_8020BD24(c); // 801D70E8
  cmps(c,0,(int32_t)c->r[3],0); // 801D70EC
  if (crb(c,2)) { goto L_801D7118; } // 801D70F0
  c->r[3]=c->r[29]|c->r[29]; // 801D70F4
  c->r[4]=c->r[31]+0x0000027Cu; // 801D70F8
  c->r[5]=0u+0x00000010u; // 801D70FC
  c->lr=0x801D7104u; f_8020BD24(c); // 801D7100
  cmps(c,0,(int32_t)c->r[3],0); // 801D7104
  if (!crb(c,2)) { goto L_801D713C; } // 801D7108
  c->r[0]=R32(c->r[13]+0xFFFFB680u); // 801D710C
  cmps(c,0,(int32_t)c->r[0],0); // 801D7110
  if (crb(c,2)) { goto L_801D713C; } // 801D7114
L_801D7118:;
  c->r[3]=c->r[31]+0x00000A1Cu; // 801D7118
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D711C
  c->lr=0x801D7124u; f_801D94A0(c); // 801D7120
  c->r[4]=R8(c->r[29]+0x00000056u); // 801D7124
  c->r[3]=c->r[31]+0x00000A30u; // 801D7128
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D712C
  c->lr=0x801D7134u; f_801D94A0(c); // 801D7130
  c->r[3]=R8(c->r[29]+0x00000056u); // 801D7134
  c->lr=0x801D713Cu; f_801E22D0(c); // 801D7138
L_801D713C:;
  c->r[3]=c->r[29]+0x00000040u; // 801D713C
  c->lr=0x801D7144u; f_801DFC7C(c); // 801D7140
  c->r[0]=c->r[3]|c->r[3]; // 801D7144
  c->r[3]=c->r[31]+0x00000A40u; // 801D7148
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 801D714C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D7150
  c->lr=0x801D7158u; f_801D94A0(c); // 801D7154
  c->r[3]=R8(c->r[29]+0x0000005Bu); // 801D7158
  cmps(c,0,(int32_t)c->r[3],0); // 801D715C
  if (crb(c,2)) { goto L_801D717C; } // 801D7160
  cmpu(c,0,c->r[3],0x00000002u); // 801D7164
  if (crb(c,2)) { goto L_801D717C; } // 801D7168
  c->r[0]=c->r[3]+0x000000FCu; // 801D716C
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801D7170
  cmpu(c,0,c->r[0],0x00000001u); // 801D7174
  if (crb(c,1)) { goto L_801D718C; } // 801D7178
L_801D717C:;
  c->r[3]=R8(c->r[30]+0x00000012u); // 801D717C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801D7180
  W8(c->r[30]+0x00000012u,c->r[0]); // 801D7184
  goto L_801D7198; // 801D7188
L_801D718C:;
  c->r[3]=R8(c->r[30]+0x00000013u); // 801D718C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801D7190
  W8(c->r[30]+0x00000013u,c->r[0]); // 801D7194
L_801D7198:;
  c->r[3]=c->r[29]|c->r[29]; // 801D7198
  c->r[4]=0u+0x00000000u; // 801D719C
  c->r[5]=0u+0x00000060u; // 801D71A0
  c->lr=0x801D71A8u; f_800046B4(c); // 801D71A4
L_801D71A8:;
  c->r[3]=c->r[28]|c->r[28]; // 801D71A8
  c->lr=0x801D71B0u; f_8018D6E0(c); // 801D71AC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D71B0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D71B4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D71B8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D71BC
  c->r[28]=R32(c->r[1]+0x00000010u); // 801D71C0
  c->lr=c->r[0]; // 801D71C4
  c->r[1]=c->r[1]+0x00000020u; // 801D71C8
  return; // 801D71CC
}

// WUDiGetDevInfo
void f_801D71D0(Ctx* __restrict c) {
  trace_call(0x801D71D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D71D0
  c->r[0]=c->lr; // 801D71D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D71D8
  c->r[11]=c->r[1]+0x00000020u; // 801D71DC
  c->lr=0x801D71E4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D71E0
  c->r[29]=0u+0x802E0000u; // 801D71E4
  c->r[26]=c->r[3]|c->r[3]; // 801D71E8
  c->r[29]=c->r[29]+0xFFFF9DC0u; // 801D71EC
  c->r[28]=0u+0x00000000u; // 801D71F0
  c->lr=0x801D71F8u; f_8018D6A0(c); // 801D71F4
  c->r[27]=c->r[3]|c->r[3]; // 801D71F8
  c->r[31]=c->r[29]+0x00000124u; // 801D71FC
  c->r[30]=0u+0x00000000u; // 801D7200
L_801D7204:;
  c->r[3]=c->r[31]|c->r[31]; // 801D7204
  c->r[4]=c->r[26]|c->r[26]; // 801D7208
  c->r[5]=0u+0x00000006u; // 801D720C
  c->lr=0x801D7214u; f_8020BD24(c); // 801D7210
  cmps(c,0,(int32_t)c->r[3],0); // 801D7214
  if (!crb(c,2)) { goto L_801D722C; } // 801D7218
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)96); // 801D721C
  c->r[3]=c->r[29]+c->r[0]; // 801D7220
  c->r[28]=c->r[3]+0x000000E4u; // 801D7224
  goto L_801D723C; // 801D7228
L_801D722C:;
  c->r[30]=c->r[30]+0x00000001u; // 801D722C
  c->r[31]=c->r[31]+0x00000060u; // 801D7230
  cmps(c,0,(int32_t)c->r[30],10); // 801D7234
  if (crb(c,0)) { IRQCHK(c); goto L_801D7204; } // 801D7238
L_801D723C:;
  cmps(c,0,(int32_t)c->r[28],0); // 801D723C
  if (!crb(c,2)) { goto L_801D7284; } // 801D7240
  c->r[31]=c->r[29]+0x000004E4u; // 801D7244
  c->r[30]=0u+0x00000000u; // 801D7248
L_801D724C:;
  c->r[3]=c->r[31]|c->r[31]; // 801D724C
  c->r[4]=c->r[26]|c->r[26]; // 801D7250
  c->r[5]=0u+0x00000006u; // 801D7254
  c->lr=0x801D725Cu; f_8020BD24(c); // 801D7258
  cmps(c,0,(int32_t)c->r[3],0); // 801D725C
  if (!crb(c,2)) { goto L_801D7274; } // 801D7260
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)96); // 801D7264
  c->r[3]=c->r[29]+c->r[0]; // 801D7268
  c->r[28]=c->r[3]+0x000004A4u; // 801D726C
  goto L_801D7284; // 801D7270
L_801D7274:;
  c->r[30]=c->r[30]+0x00000001u; // 801D7274
  c->r[31]=c->r[31]+0x00000060u; // 801D7278
  cmps(c,0,(int32_t)c->r[30],6); // 801D727C
  if (crb(c,0)) { IRQCHK(c); goto L_801D724C; } // 801D7280
L_801D7284:;
  c->r[3]=c->r[27]|c->r[27]; // 801D7284
  c->lr=0x801D728Cu; f_8018D6E0(c); // 801D7288
  c->r[11]=c->r[1]+0x00000020u; // 801D728C
  c->r[3]=c->r[28]|c->r[28]; // 801D7290
  c->lr=0x801D7298u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D7294
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D7298
  c->lr=c->r[0]; // 801D729C
  c->r[1]=c->r[1]+0x00000020u; // 801D72A0
  return; // 801D72A4
}

// WUDiMoveTopSmpDevInfoPtr
void f_801D72B0(Ctx* __restrict c) {
  trace_call(0x801D72B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D72B0
  c->r[0]=c->lr; // 801D72B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D72B8
  c->r[11]=c->r[1]+0x00000020u; // 801D72BC
  c->lr=0x801D72C4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D72C0
  c->r[30]=0u+0x802E0000u; // 801D72C4
  c->r[27]=c->r[3]|c->r[3]; // 801D72C8
  c->r[30]=c->r[30]+0xFFFF9DC0u; // 801D72CC
  c->lr=0x801D72D4u; f_8018D6A0(c); // 801D72D0
  c->r[29]=c->r[3]|c->r[3]; // 801D72D4
  c->r[28]=c->r[30]|c->r[30]; // 801D72D8
  c->r[31]=0u+0x00000000u; // 801D72DC
L_801D72E0:;
  c->r[3]=R32(c->r[28]+0x0000001Cu); // 801D72E0
  c->r[4]=c->r[27]+0x00000040u; // 801D72E4
  c->r[5]=0u+0x00000006u; // 801D72E8
  c->r[3]=c->r[3]+0x00000040u; // 801D72EC
  c->lr=0x801D72F4u; f_8020BD24(c); // 801D72F0
  cmps(c,0,(int32_t)c->r[3],0); // 801D72F4
  if (!crb(c,2)) { goto L_801D7394; } // 801D72F8
  c->r[28]=(uint32_t)((int32_t)c->r[31]*(int32_t)12); // 801D72FC
  c->r[3]=R32(c->r[30]+0x00000014u); // 801D7300
  c->r[5]=0u+0x00000006u; // 801D7304
  c->r[3]=R32(c->r[3]+0x00000000u); // 801D7308
  c->r[31]=c->r[30]+c->r[28]; // 801D730C
  {uint32_t ea=c->r[31]+0x0000001Cu; c->r[4]=R32(ea); c->r[31]=ea;} // 801D7310
  c->r[3]=c->r[3]+0x00000040u; // 801D7314
  c->r[4]=c->r[4]+0x00000040u; // 801D7318
  c->lr=0x801D7320u; f_8020BD24(c); // 801D731C
  cmps(c,0,(int32_t)c->r[3],0); // 801D7320
  if (crb(c,2)) { goto L_801D73A4; } // 801D7324
  c->r[28]=c->r[30]+c->r[28]; // 801D7328
  c->r[5]=0u+0x00000006u; // 801D732C
  c->r[3]=R32(c->r[28]+0x00000020u); // 801D7330
  c->r[0]=R32(c->r[28]+0x00000024u); // 801D7334
  W32(c->r[3]+0x00000008u,c->r[0]); // 801D7338
  c->r[4]=R32(c->r[30]+0x00000018u); // 801D733C
  c->r[3]=R32(c->r[31]+0x00000000u); // 801D7340
  c->r[6]=R32(c->r[4]+0x00000000u); // 801D7344
  c->r[4]=c->r[3]+0x00000040u; // 801D7348
  c->r[3]=c->r[6]+0x00000040u; // 801D734C
  c->lr=0x801D7354u; f_8020BD24(c); // 801D7350
  cmps(c,0,(int32_t)c->r[3],0); // 801D7354
  if (!crb(c,2)) { goto L_801D7368; } // 801D7358
  c->r[0]=R32(c->r[28]+0x00000020u); // 801D735C
  W32(c->r[30]+0x00000018u,c->r[0]); // 801D7360
  goto L_801D7374; // 801D7364
L_801D7368:;
  c->r[3]=R32(c->r[28]+0x00000024u); // 801D7368
  c->r[0]=R32(c->r[28]+0x00000020u); // 801D736C
  W32(c->r[3]+0x00000004u,c->r[0]); // 801D7370
L_801D7374:;
  c->r[3]=R32(c->r[30]+0x00000014u); // 801D7374
  c->r[0]=0u+0x00000000u; // 801D7378
  W32(c->r[28]+0x00000024u,c->r[3]); // 801D737C
  c->r[3]=R32(c->r[30]+0x00000014u); // 801D7380
  W32(c->r[3]+0x00000004u,c->r[31]); // 801D7384
  W32(c->r[30]+0x00000014u,c->r[31]); // 801D7388
  W32(c->r[28]+0x00000020u,c->r[0]); // 801D738C
  goto L_801D73A4; // 801D7390
L_801D7394:;
  c->r[31]=c->r[31]+0x00000001u; // 801D7394
  c->r[28]=c->r[28]+0x0000000Cu; // 801D7398
  cmps(c,0,(int32_t)c->r[31],6); // 801D739C
  if (crb(c,0)) { IRQCHK(c); goto L_801D72E0; } // 801D73A0
L_801D73A4:;
  c->r[3]=c->r[29]|c->r[29]; // 801D73A4
  c->lr=0x801D73ACu; f_8018D6E0(c); // 801D73A8
  c->r[11]=c->r[1]+0x00000020u; // 801D73AC
  c->lr=0x801D73B4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D73B0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D73B4
  c->lr=c->r[0]; // 801D73B8
  c->r[1]=c->r[1]+0x00000020u; // 801D73BC
  return; // 801D73C0
}

// WUDiMoveBottomSmpDevInfoPtr
void f_801D73D0(Ctx* __restrict c) {
  trace_call(0x801D73D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D73D0
  c->r[0]=c->lr; // 801D73D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D73D8
  c->r[11]=c->r[1]+0x00000020u; // 801D73DC
  c->lr=0x801D73E4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D73E0
  c->r[30]=0u+0x802E0000u; // 801D73E4
  c->r[27]=c->r[3]|c->r[3]; // 801D73E8
  c->r[30]=c->r[30]+0xFFFF9DC0u; // 801D73EC
  c->lr=0x801D73F4u; f_8018D6A0(c); // 801D73F0
  c->r[29]=c->r[3]|c->r[3]; // 801D73F4
  c->r[28]=c->r[30]|c->r[30]; // 801D73F8
  c->r[31]=0u+0x00000000u; // 801D73FC
L_801D7400:;
  c->r[3]=R32(c->r[28]+0x0000001Cu); // 801D7400
  c->r[4]=c->r[27]+0x00000040u; // 801D7404
  c->r[5]=0u+0x00000006u; // 801D7408
  c->r[3]=c->r[3]+0x00000040u; // 801D740C
  c->lr=0x801D7414u; f_8020BD24(c); // 801D7410
  cmps(c,0,(int32_t)c->r[3],0); // 801D7414
  if (!crb(c,2)) { goto L_801D74B4; } // 801D7418
  c->r[28]=(uint32_t)((int32_t)c->r[31]*(int32_t)12); // 801D741C
  c->r[3]=R32(c->r[30]+0x00000018u); // 801D7420
  c->r[5]=0u+0x00000006u; // 801D7424
  c->r[3]=R32(c->r[3]+0x00000000u); // 801D7428
  c->r[31]=c->r[30]+c->r[28]; // 801D742C
  {uint32_t ea=c->r[31]+0x0000001Cu; c->r[4]=R32(ea); c->r[31]=ea;} // 801D7430
  c->r[3]=c->r[3]+0x00000040u; // 801D7434
  c->r[4]=c->r[4]+0x00000040u; // 801D7438
  c->lr=0x801D7440u; f_8020BD24(c); // 801D743C
  cmps(c,0,(int32_t)c->r[3],0); // 801D7440
  if (crb(c,2)) { goto L_801D74C4; } // 801D7444
  c->r[28]=c->r[30]+c->r[28]; // 801D7448
  c->r[5]=0u+0x00000006u; // 801D744C
  c->r[3]=R32(c->r[28]+0x00000024u); // 801D7450
  c->r[0]=R32(c->r[28]+0x00000020u); // 801D7454
  W32(c->r[3]+0x00000004u,c->r[0]); // 801D7458
  c->r[4]=R32(c->r[30]+0x00000014u); // 801D745C
  c->r[3]=R32(c->r[31]+0x00000000u); // 801D7460
  c->r[6]=R32(c->r[4]+0x00000000u); // 801D7464
  c->r[4]=c->r[3]+0x00000040u; // 801D7468
  c->r[3]=c->r[6]+0x00000040u; // 801D746C
  c->lr=0x801D7474u; f_8020BD24(c); // 801D7470
  cmps(c,0,(int32_t)c->r[3],0); // 801D7474
  if (!crb(c,2)) { goto L_801D7488; } // 801D7478
  c->r[0]=R32(c->r[28]+0x00000024u); // 801D747C
  W32(c->r[30]+0x00000014u,c->r[0]); // 801D7480
  goto L_801D7494; // 801D7484
L_801D7488:;
  c->r[3]=R32(c->r[28]+0x00000020u); // 801D7488
  c->r[0]=R32(c->r[28]+0x00000024u); // 801D748C
  W32(c->r[3]+0x00000008u,c->r[0]); // 801D7490
L_801D7494:;
  c->r[3]=R32(c->r[30]+0x00000018u); // 801D7494
  c->r[0]=0u+0x00000000u; // 801D7498
  W32(c->r[28]+0x00000020u,c->r[3]); // 801D749C
  c->r[3]=R32(c->r[30]+0x00000018u); // 801D74A0
  W32(c->r[3]+0x00000008u,c->r[31]); // 801D74A4
  W32(c->r[30]+0x00000018u,c->r[31]); // 801D74A8
  W32(c->r[28]+0x00000024u,c->r[0]); // 801D74AC
  goto L_801D74C4; // 801D74B0
L_801D74B4:;
  c->r[31]=c->r[31]+0x00000001u; // 801D74B4
  c->r[28]=c->r[28]+0x0000000Cu; // 801D74B8
  cmps(c,0,(int32_t)c->r[31],6); // 801D74BC
  if (crb(c,0)) { IRQCHK(c); goto L_801D7400; } // 801D74C0
L_801D74C4:;
  c->r[3]=c->r[29]|c->r[29]; // 801D74C4
  c->lr=0x801D74CCu; f_8018D6E0(c); // 801D74C8
  c->r[11]=c->r[1]+0x00000020u; // 801D74CC
  c->lr=0x801D74D4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D74D0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D74D4
  c->lr=c->r[0]; // 801D74D8
  c->r[1]=c->r[1]+0x00000020u; // 801D74DC
  return; // 801D74E0
}

// WUDiMoveTopOfDisconnectedSmpDevice
void f_801D74F0(Ctx* __restrict c) {
  trace_call(0x801D74F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D74F0
  c->r[0]=c->lr; // 801D74F4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D74F8
  c->r[11]=c->r[1]+0x00000030u; // 801D74FC
  c->lr=0x801D7504u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D7500
  c->r[30]=0u+0x802E0000u; // 801D7504
  c->r[26]=c->r[3]|c->r[3]; // 801D7508
  c->r[30]=c->r[30]+0xFFFF9DC0u; // 801D750C
  c->lr=0x801D7514u; f_8018D6A0(c); // 801D7510
  c->r[28]=c->r[3]|c->r[3]; // 801D7514
  c->r[29]=0u+0x00000000u; // 801D7518
  c->r[25]=0u+0x00000000u; // 801D751C
L_801D7520:;
  c->r[31]=c->r[30]+c->r[25]; // 801D7520
  {uint32_t ea=c->r[31]+0x0000001Cu; c->r[3]=R32(ea); c->r[31]=ea;} // 801D7524
  c->r[4]=c->r[26]+0x00000040u; // 801D7528
  c->r[5]=0u+0x00000006u; // 801D752C
  c->r[3]=c->r[3]+0x00000040u; // 801D7530
  c->lr=0x801D7538u; f_8020BD24(c); // 801D7534
  cmps(c,0,(int32_t)c->r[3],0); // 801D7538
  if (!crb(c,2)) { goto L_801D7628; } // 801D753C
  c->r[23]=R32(c->r[30]+0x00000014u); // 801D7540
  c->r[27]=c->r[23]|c->r[23]; // 801D7544
  goto L_801D7620; // 801D7548
L_801D754C:;
  c->r[24]=R32(c->r[27]+0x00000000u); // 801D754C
  c->r[4]=c->r[26]+0x00000040u; // 801D7550
  c->r[5]=0u+0x00000006u; // 801D7554
  c->r[3]=c->r[24]+0x00000040u; // 801D7558
  c->lr=0x801D7560u; f_8020BD24(c); // 801D755C
  cmps(c,0,(int32_t)c->r[3],0); // 801D7560
  if (crb(c,2)) { goto L_801D761C; } // 801D7564
  c->r[0]=R8(c->r[24]+0x00000059u); // 801D7568
  cmpu(c,0,c->r[0],0x00000001u); // 801D756C
  if (crb(c,1)) { goto L_801D761C; } // 801D7570
  c->r[3]=c->r[30]+c->r[25]; // 801D7574
  c->r[6]=R32(c->r[23]+0x00000000u); // 801D7578
  c->r[4]=R32(c->r[3]+0x0000001Cu); // 801D757C
  c->r[5]=0u+0x00000006u; // 801D7580
  c->r[3]=c->r[6]+0x00000040u; // 801D7584
  c->r[4]=c->r[4]+0x00000040u; // 801D7588
  c->lr=0x801D7590u; f_8020BD24(c); // 801D758C
  cmps(c,0,(int32_t)c->r[3],0); // 801D7590
  if (!crb(c,2)) { goto L_801D75B4; } // 801D7594
  c->r[0]=R32(c->r[23]+0x00000008u); // 801D7598
  cmpu(c,0,c->r[27],c->r[0]); // 801D759C
  if (crb(c,2)) { goto L_801D7628; } // 801D75A0
  c->r[5]=c->r[30]+c->r[25]; // 801D75A4
  {uint32_t ea=c->r[5]+0x00000024u; c->r[0]=R32(ea); c->r[5]=ea;} // 801D75A8
  W32(c->r[30]+0x00000014u,c->r[0]); // 801D75AC
  goto L_801D75C8; // 801D75B0
L_801D75B4:;
  c->r[3]=c->r[30]+c->r[25]; // 801D75B4
  c->r[5]=c->r[3]+0x00000024u; // 801D75B8
  c->r[3]=R32(c->r[3]+0x00000020u); // 801D75BC
  c->r[0]=R32(c->r[5]+0x00000000u); // 801D75C0
  W32(c->r[3]+0x00000008u,c->r[0]); // 801D75C4
L_801D75C8:;
  c->r[4]=c->r[30]+c->r[25]; // 801D75C8
  c->r[3]=R32(c->r[5]+0x00000000u); // 801D75CC
  c->r[0]=R32(c->r[4]+0x00000020u); // 801D75D0
  W32(c->r[3]+0x00000004u,c->r[0]); // 801D75D4
  c->r[0]=R32(c->r[30]+0x00000014u); // 801D75D8
  cmpu(c,0,c->r[27],c->r[0]); // 801D75DC
  if (crb(c,2)) { goto L_801D7600; } // 801D75E0
  c->r[0]=R32(c->r[27]+0x00000004u); // 801D75E4
  W32(c->r[4]+0x00000020u,c->r[0]); // 801D75E8
  W32(c->r[5]+0x00000000u,c->r[27]); // 801D75EC
  c->r[3]=R32(c->r[27]+0x00000004u); // 801D75F0
  W32(c->r[3]+0x00000008u,c->r[31]); // 801D75F4
  W32(c->r[27]+0x00000004u,c->r[31]); // 801D75F8
  goto L_801D7628; // 801D75FC
L_801D7600:;
  W32(c->r[4]+0x00000020u,c->r[27]); // 801D7600
  c->r[0]=R32(c->r[27]+0x00000008u); // 801D7604
  W32(c->r[5]+0x00000000u,c->r[0]); // 801D7608
  c->r[3]=R32(c->r[27]+0x00000008u); // 801D760C
  W32(c->r[3]+0x00000004u,c->r[31]); // 801D7610
  W32(c->r[27]+0x00000008u,c->r[31]); // 801D7614
  goto L_801D7628; // 801D7618
L_801D761C:;
  c->r[27]=R32(c->r[27]+0x00000008u); // 801D761C
L_801D7620:;
  cmps(c,0,(int32_t)c->r[27],0); // 801D7620
  if (!crb(c,2)) { IRQCHK(c); goto L_801D754C; } // 801D7624
L_801D7628:;
  c->r[29]=c->r[29]+0x00000001u; // 801D7628
  c->r[25]=c->r[25]+0x0000000Cu; // 801D762C
  cmps(c,0,(int32_t)c->r[29],6); // 801D7630
  if (crb(c,0)) { IRQCHK(c); goto L_801D7520; } // 801D7634
  c->r[3]=c->r[28]|c->r[28]; // 801D7638
  c->lr=0x801D7640u; f_8018D6E0(c); // 801D763C
  c->r[11]=c->r[1]+0x00000030u; // 801D7640
  c->lr=0x801D7648u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D7644
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D7648
  c->lr=c->r[0]; // 801D764C
  c->r[1]=c->r[1]+0x00000030u; // 801D7650
  return; // 801D7654
}

// WUDiMoveTopStdDevInfoPtr
void f_801D7660(Ctx* __restrict c) {
  trace_call(0x801D7660u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D7660
  c->r[0]=c->lr; // 801D7664
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D7668
  c->r[11]=c->r[1]+0x00000020u; // 801D766C
  c->lr=0x801D7674u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D7670
  c->r[30]=0u+0x802E0000u; // 801D7674
  c->r[27]=c->r[3]|c->r[3]; // 801D7678
  c->r[30]=c->r[30]+0xFFFF9DC0u; // 801D767C
  c->lr=0x801D7684u; f_8018D6A0(c); // 801D7680
  c->r[29]=c->r[3]|c->r[3]; // 801D7684
  c->r[28]=c->r[30]|c->r[30]; // 801D7688
  c->r[31]=0u+0x00000000u; // 801D768C
L_801D7690:;
  c->r[3]=R32(c->r[28]+0x0000006Cu); // 801D7690
  c->r[4]=c->r[27]+0x00000040u; // 801D7694
  c->r[5]=0u+0x00000006u; // 801D7698
  c->r[3]=c->r[3]+0x00000040u; // 801D769C
  c->lr=0x801D76A4u; f_8020BD24(c); // 801D76A0
  cmps(c,0,(int32_t)c->r[3],0); // 801D76A4
  if (!crb(c,2)) { goto L_801D7744; } // 801D76A8
  c->r[28]=(uint32_t)((int32_t)c->r[31]*(int32_t)12); // 801D76AC
  c->r[3]=R32(c->r[30]+0x00000064u); // 801D76B0
  c->r[5]=0u+0x00000006u; // 801D76B4
  c->r[3]=R32(c->r[3]+0x00000000u); // 801D76B8
  c->r[31]=c->r[30]+c->r[28]; // 801D76BC
  {uint32_t ea=c->r[31]+0x0000006Cu; c->r[4]=R32(ea); c->r[31]=ea;} // 801D76C0
  c->r[3]=c->r[3]+0x00000040u; // 801D76C4
  c->r[4]=c->r[4]+0x00000040u; // 801D76C8
  c->lr=0x801D76D0u; f_8020BD24(c); // 801D76CC
  cmps(c,0,(int32_t)c->r[3],0); // 801D76D0
  if (crb(c,2)) { goto L_801D7754; } // 801D76D4
  c->r[28]=c->r[30]+c->r[28]; // 801D76D8
  c->r[5]=0u+0x00000006u; // 801D76DC
  c->r[3]=R32(c->r[28]+0x00000070u); // 801D76E0
  c->r[0]=R32(c->r[28]+0x00000074u); // 801D76E4
  W32(c->r[3]+0x00000008u,c->r[0]); // 801D76E8
  c->r[4]=R32(c->r[30]+0x00000068u); // 801D76EC
  c->r[3]=R32(c->r[31]+0x00000000u); // 801D76F0
  c->r[6]=R32(c->r[4]+0x00000000u); // 801D76F4
  c->r[4]=c->r[3]+0x00000040u; // 801D76F8
  c->r[3]=c->r[6]+0x00000040u; // 801D76FC
  c->lr=0x801D7704u; f_8020BD24(c); // 801D7700
  cmps(c,0,(int32_t)c->r[3],0); // 801D7704
  if (!crb(c,2)) { goto L_801D7718; } // 801D7708
  c->r[0]=R32(c->r[28]+0x00000070u); // 801D770C
  W32(c->r[30]+0x00000068u,c->r[0]); // 801D7710
  goto L_801D7724; // 801D7714
L_801D7718:;
  c->r[3]=R32(c->r[28]+0x00000074u); // 801D7718
  c->r[0]=R32(c->r[28]+0x00000070u); // 801D771C
  W32(c->r[3]+0x00000004u,c->r[0]); // 801D7720
L_801D7724:;
  c->r[3]=R32(c->r[30]+0x00000064u); // 801D7724
  c->r[0]=0u+0x00000000u; // 801D7728
  W32(c->r[28]+0x00000074u,c->r[3]); // 801D772C
  c->r[3]=R32(c->r[30]+0x00000064u); // 801D7730
  W32(c->r[3]+0x00000004u,c->r[31]); // 801D7734
  W32(c->r[30]+0x00000064u,c->r[31]); // 801D7738
  W32(c->r[28]+0x00000070u,c->r[0]); // 801D773C
  goto L_801D7754; // 801D7740
L_801D7744:;
  c->r[31]=c->r[31]+0x00000001u; // 801D7744
  c->r[28]=c->r[28]+0x0000000Cu; // 801D7748
  cmps(c,0,(int32_t)c->r[31],10); // 801D774C
  if (crb(c,0)) { IRQCHK(c); goto L_801D7690; } // 801D7750
L_801D7754:;
  c->r[3]=c->r[29]|c->r[29]; // 801D7754
  c->lr=0x801D775Cu; f_8018D6E0(c); // 801D7758
  c->r[11]=c->r[1]+0x00000020u; // 801D775C
  c->lr=0x801D7764u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D7760
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D7764
  c->lr=c->r[0]; // 801D7768
  c->r[1]=c->r[1]+0x00000020u; // 801D776C
  return; // 801D7770
}

// WUDiMoveBottomStdDevInfoPtr
void f_801D7780(Ctx* __restrict c) {
  trace_call(0x801D7780u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D7780
  c->r[0]=c->lr; // 801D7784
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D7788
  c->r[11]=c->r[1]+0x00000020u; // 801D778C
  c->lr=0x801D7794u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D7790
  c->r[30]=0u+0x802E0000u; // 801D7794
  c->r[27]=c->r[3]|c->r[3]; // 801D7798
  c->r[30]=c->r[30]+0xFFFF9DC0u; // 801D779C
  c->lr=0x801D77A4u; f_8018D6A0(c); // 801D77A0
  c->r[29]=c->r[3]|c->r[3]; // 801D77A4
  c->r[28]=c->r[30]|c->r[30]; // 801D77A8
  c->r[31]=0u+0x00000000u; // 801D77AC
L_801D77B0:;
  c->r[3]=R32(c->r[28]+0x0000006Cu); // 801D77B0
  c->r[4]=c->r[27]+0x00000040u; // 801D77B4
  c->r[5]=0u+0x00000006u; // 801D77B8
  c->r[3]=c->r[3]+0x00000040u; // 801D77BC
  c->lr=0x801D77C4u; f_8020BD24(c); // 801D77C0
  cmps(c,0,(int32_t)c->r[3],0); // 801D77C4
  if (!crb(c,2)) { goto L_801D7864; } // 801D77C8
  c->r[28]=(uint32_t)((int32_t)c->r[31]*(int32_t)12); // 801D77CC
  c->r[3]=R32(c->r[30]+0x00000068u); // 801D77D0
  c->r[5]=0u+0x00000006u; // 801D77D4
  c->r[3]=R32(c->r[3]+0x00000000u); // 801D77D8
  c->r[31]=c->r[30]+c->r[28]; // 801D77DC
  {uint32_t ea=c->r[31]+0x0000006Cu; c->r[4]=R32(ea); c->r[31]=ea;} // 801D77E0
  c->r[3]=c->r[3]+0x00000040u; // 801D77E4
  c->r[4]=c->r[4]+0x00000040u; // 801D77E8
  c->lr=0x801D77F0u; f_8020BD24(c); // 801D77EC
  cmps(c,0,(int32_t)c->r[3],0); // 801D77F0
  if (crb(c,2)) { goto L_801D7874; } // 801D77F4
  c->r[28]=c->r[30]+c->r[28]; // 801D77F8
  c->r[5]=0u+0x00000006u; // 801D77FC
  c->r[3]=R32(c->r[28]+0x00000074u); // 801D7800
  c->r[0]=R32(c->r[28]+0x00000070u); // 801D7804
  W32(c->r[3]+0x00000004u,c->r[0]); // 801D7808
  c->r[4]=R32(c->r[30]+0x00000064u); // 801D780C
  c->r[3]=R32(c->r[31]+0x00000000u); // 801D7810
  c->r[6]=R32(c->r[4]+0x00000000u); // 801D7814
  c->r[4]=c->r[3]+0x00000040u; // 801D7818
  c->r[3]=c->r[6]+0x00000040u; // 801D781C
  c->lr=0x801D7824u; f_8020BD24(c); // 801D7820
  cmps(c,0,(int32_t)c->r[3],0); // 801D7824
  if (!crb(c,2)) { goto L_801D7838; } // 801D7828
  c->r[0]=R32(c->r[28]+0x00000074u); // 801D782C
  W32(c->r[30]+0x00000064u,c->r[0]); // 801D7830
  goto L_801D7844; // 801D7834
L_801D7838:;
  c->r[3]=R32(c->r[28]+0x00000070u); // 801D7838
  c->r[0]=R32(c->r[28]+0x00000074u); // 801D783C
  W32(c->r[3]+0x00000008u,c->r[0]); // 801D7840
L_801D7844:;
  c->r[3]=R32(c->r[30]+0x00000068u); // 801D7844
  c->r[0]=0u+0x00000000u; // 801D7848
  W32(c->r[28]+0x00000070u,c->r[3]); // 801D784C
  c->r[3]=R32(c->r[30]+0x00000068u); // 801D7850
  W32(c->r[3]+0x00000008u,c->r[31]); // 801D7854
  W32(c->r[30]+0x00000068u,c->r[31]); // 801D7858
  W32(c->r[28]+0x00000074u,c->r[0]); // 801D785C
  goto L_801D7874; // 801D7860
L_801D7864:;
  c->r[31]=c->r[31]+0x00000001u; // 801D7864
  c->r[28]=c->r[28]+0x0000000Cu; // 801D7868
  cmps(c,0,(int32_t)c->r[31],10); // 801D786C
  if (crb(c,0)) { IRQCHK(c); goto L_801D77B0; } // 801D7870
L_801D7874:;
  c->r[3]=c->r[29]|c->r[29]; // 801D7874
  c->lr=0x801D787Cu; f_8018D6E0(c); // 801D7878
  c->r[11]=c->r[1]+0x00000020u; // 801D787C
  c->lr=0x801D7884u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D7880
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D7884
  c->lr=c->r[0]; // 801D7888
  c->r[1]=c->r[1]+0x00000020u; // 801D788C
  return; // 801D7890
}

// WUDiMoveTopOfDisconnectedStdDevice
void f_801D78A0(Ctx* __restrict c) {
  trace_call(0x801D78A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D78A0
  c->r[0]=c->lr; // 801D78A4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D78A8
  c->r[11]=c->r[1]+0x00000030u; // 801D78AC
  c->lr=0x801D78B4u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D78B0
  c->r[29]=0u+0x802E0000u; // 801D78B4
  c->r[25]=c->r[3]|c->r[3]; // 801D78B8
  c->r[29]=c->r[29]+0xFFFF9DC0u; // 801D78BC
  c->lr=0x801D78C4u; f_8018D6A0(c); // 801D78C0
  c->r[27]=c->r[3]|c->r[3]; // 801D78C4
  c->r[28]=0u+0x00000000u; // 801D78C8
  c->r[24]=0u+0x00000000u; // 801D78CC
  c->r[31]=0u+0x80280000u; // 801D78D0
L_801D78D4:;
  c->r[30]=c->r[29]+c->r[24]; // 801D78D4
  {uint32_t ea=c->r[30]+0x0000006Cu; c->r[3]=R32(ea); c->r[30]=ea;} // 801D78D8
  c->r[4]=c->r[25]+0x00000040u; // 801D78DC
  c->r[5]=0u+0x00000006u; // 801D78E0
  c->r[3]=c->r[3]+0x00000040u; // 801D78E4
  c->lr=0x801D78ECu; f_8020BD24(c); // 801D78E8
  cmps(c,0,(int32_t)c->r[3],0); // 801D78EC
  if (!crb(c,2)) { goto L_801D7A00; } // 801D78F0
  c->r[22]=R32(c->r[29]+0x00000064u); // 801D78F4
  c->r[26]=c->r[22]|c->r[22]; // 801D78F8
  goto L_801D79F8; // 801D78FC
L_801D7900:;
  c->r[23]=R32(c->r[26]+0x00000000u); // 801D7900
  c->r[4]=c->r[25]+0x00000040u; // 801D7904
  c->r[5]=0u+0x00000006u; // 801D7908
  c->r[3]=c->r[23]+0x00000040u; // 801D790C
  c->lr=0x801D7914u; f_8020BD24(c); // 801D7910
  cmps(c,0,(int32_t)c->r[3],0); // 801D7914
  if (crb(c,2)) { goto L_801D79F4; } // 801D7918
  c->r[0]=R8(c->r[23]+0x00000059u); // 801D791C
  cmpu(c,0,c->r[0],0x00000001u); // 801D7920
  if (!crb(c,1)) { goto L_801D794C; } // 801D7924
  c->r[3]=c->r[23]|c->r[23]; // 801D7928
  c->r[4]=c->r[31]+0xFFFFCD78u; // 801D792C
  c->r[5]=0u+0x00000010u; // 801D7930
  c->lr=0x801D7938u; f_8020BD24(c); // 801D7934
  cmps(c,0,(int32_t)c->r[3],0); // 801D7938
  if (crb(c,2)) { goto L_801D79F4; } // 801D793C
  c->r[0]=R32(c->r[13]+0xFFFFB680u); // 801D7940
  cmps(c,0,(int32_t)c->r[0],0); // 801D7944
  if (crb(c,2)) { goto L_801D79F4; } // 801D7948
L_801D794C:;
  c->r[3]=c->r[29]+c->r[24]; // 801D794C
  c->r[6]=R32(c->r[22]+0x00000000u); // 801D7950
  c->r[4]=R32(c->r[3]+0x0000006Cu); // 801D7954
  c->r[5]=0u+0x00000006u; // 801D7958
  c->r[3]=c->r[6]+0x00000040u; // 801D795C
  c->r[4]=c->r[4]+0x00000040u; // 801D7960
  c->lr=0x801D7968u; f_8020BD24(c); // 801D7964
  cmps(c,0,(int32_t)c->r[3],0); // 801D7968
  if (!crb(c,2)) { goto L_801D798C; } // 801D796C
  c->r[0]=R32(c->r[22]+0x00000008u); // 801D7970
  cmpu(c,0,c->r[26],c->r[0]); // 801D7974
  if (crb(c,2)) { goto L_801D7A00; } // 801D7978
  c->r[5]=c->r[29]+c->r[24]; // 801D797C
  {uint32_t ea=c->r[5]+0x00000074u; c->r[0]=R32(ea); c->r[5]=ea;} // 801D7980
  W32(c->r[29]+0x00000064u,c->r[0]); // 801D7984
  goto L_801D79A0; // 801D7988
L_801D798C:;
  c->r[3]=c->r[29]+c->r[24]; // 801D798C
  c->r[5]=c->r[3]+0x00000074u; // 801D7990
  c->r[3]=R32(c->r[3]+0x00000070u); // 801D7994
  c->r[0]=R32(c->r[5]+0x00000000u); // 801D7998
  W32(c->r[3]+0x00000008u,c->r[0]); // 801D799C
L_801D79A0:;
  c->r[4]=c->r[29]+c->r[24]; // 801D79A0
  c->r[3]=R32(c->r[5]+0x00000000u); // 801D79A4
  c->r[0]=R32(c->r[4]+0x00000070u); // 801D79A8
  W32(c->r[3]+0x00000004u,c->r[0]); // 801D79AC
  c->r[0]=R32(c->r[29]+0x00000064u); // 801D79B0
  cmpu(c,0,c->r[26],c->r[0]); // 801D79B4
  if (crb(c,2)) { goto L_801D79D8; } // 801D79B8
  c->r[0]=R32(c->r[26]+0x00000004u); // 801D79BC
  W32(c->r[4]+0x00000070u,c->r[0]); // 801D79C0
  W32(c->r[5]+0x00000000u,c->r[26]); // 801D79C4
  c->r[3]=R32(c->r[26]+0x00000004u); // 801D79C8
  W32(c->r[3]+0x00000008u,c->r[30]); // 801D79CC
  W32(c->r[26]+0x00000004u,c->r[30]); // 801D79D0
  goto L_801D7A00; // 801D79D4
L_801D79D8:;
  W32(c->r[4]+0x00000070u,c->r[26]); // 801D79D8
  c->r[0]=R32(c->r[26]+0x00000008u); // 801D79DC
  W32(c->r[5]+0x00000000u,c->r[0]); // 801D79E0
  c->r[3]=R32(c->r[26]+0x00000008u); // 801D79E4
  W32(c->r[3]+0x00000004u,c->r[30]); // 801D79E8
  W32(c->r[26]+0x00000008u,c->r[30]); // 801D79EC
  goto L_801D7A00; // 801D79F0
L_801D79F4:;
  c->r[26]=R32(c->r[26]+0x00000008u); // 801D79F4
L_801D79F8:;
  cmps(c,0,(int32_t)c->r[26],0); // 801D79F8
  if (!crb(c,2)) { IRQCHK(c); goto L_801D7900; } // 801D79FC
L_801D7A00:;
  c->r[28]=c->r[28]+0x00000001u; // 801D7A00
  c->r[24]=c->r[24]+0x0000000Cu; // 801D7A04
  cmps(c,0,(int32_t)c->r[28],10); // 801D7A08
  if (crb(c,0)) { IRQCHK(c); goto L_801D78D4; } // 801D7A0C
  c->r[3]=c->r[27]|c->r[27]; // 801D7A10
  c->lr=0x801D7A18u; f_8018D6E0(c); // 801D7A14
  c->r[11]=c->r[1]+0x00000030u; // 801D7A18
  c->lr=0x801D7A20u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D7A1C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D7A20
  c->lr=c->r[0]; // 801D7A24
  c->r[1]=c->r[1]+0x00000030u; // 801D7A28
  return; // 801D7A2C
}

// WUDiMoveTopOfUnusedStdDevice
void f_801D7A30(Ctx* __restrict c) {
  trace_call(0x801D7A30u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D7A30
  c->r[0]=c->lr; // 801D7A34
  W32(c->r[1]+0x00000044u,c->r[0]); // 801D7A38
  c->r[11]=c->r[1]+0x00000040u; // 801D7A3C
  c->lr=0x801D7A44u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D7A40
  c->r[29]=0u+0x802E0000u; // 801D7A44
  c->r[25]=c->r[3]|c->r[3]; // 801D7A48
  c->r[29]=c->r[29]+0xFFFF9DC0u; // 801D7A4C
  c->lr=0x801D7A54u; f_8018D6A0(c); // 801D7A50
  c->r[27]=c->r[3]|c->r[3]; // 801D7A54
  c->r[31]=c->r[29]|c->r[29]; // 801D7A58
  c->r[30]=c->r[29]+0x0000006Cu; // 801D7A5C
  c->r[28]=0u+0x00000000u; // 801D7A60
  c->r[24]=0u+0x00000000u; // 801D7A64
L_801D7A68:;
  c->r[3]=R32(c->r[31]+0x0000006Cu); // 801D7A68
  c->r[4]=c->r[25]+0x00000040u; // 801D7A6C
  c->r[5]=0u+0x00000006u; // 801D7A70
  c->r[22]=c->r[3]+0x00000040u; // 801D7A74
  c->r[3]=c->r[22]|c->r[22]; // 801D7A78
  c->lr=0x801D7A80u; f_8020BD24(c); // 801D7A7C
  cmps(c,0,(int32_t)c->r[3],0); // 801D7A80
  if (!crb(c,2)) { goto L_801D7B94; } // 801D7A84
  c->r[21]=R32(c->r[29]+0x00000064u); // 801D7A88
  c->r[26]=c->r[21]|c->r[21]; // 801D7A8C
  goto L_801D7B8C; // 801D7A90
L_801D7A94:;
  c->r[23]=R32(c->r[26]+0x00000000u); // 801D7A94
  c->r[4]=c->r[25]+0x00000040u; // 801D7A98
  c->r[5]=0u+0x00000006u; // 801D7A9C
  c->r[3]=c->r[23]+0x00000040u; // 801D7AA0
  c->lr=0x801D7AA8u; f_8020BD24(c); // 801D7AA4
  cmps(c,0,(int32_t)c->r[3],0); // 801D7AA8
  if (crb(c,2)) { goto L_801D7B88; } // 801D7AAC
  c->r[0]=R8(c->r[23]+0x00000059u); // 801D7AB0
  cmps(c,0,(int32_t)c->r[0],0); // 801D7AB4
  if (crb(c,2)) { goto L_801D7AC8; } // 801D7AB8
  c->r[0]=R32(c->r[29]+0x00000068u); // 801D7ABC
  cmpu(c,0,c->r[26],c->r[0]); // 801D7AC0
  if (!crb(c,2)) { goto L_801D7B88; } // 801D7AC4
L_801D7AC8:;
  c->r[3]=R32(c->r[21]+0x00000000u); // 801D7AC8
  c->r[4]=c->r[22]|c->r[22]; // 801D7ACC
  c->r[5]=0u+0x00000006u; // 801D7AD0
  c->r[3]=c->r[3]+0x00000040u; // 801D7AD4
  c->lr=0x801D7ADCu; f_8020BD24(c); // 801D7AD8
  cmps(c,0,(int32_t)c->r[3],0); // 801D7ADC
  if (!crb(c,2)) { goto L_801D7AFC; } // 801D7AE0
  c->r[0]=R32(c->r[21]+0x00000008u); // 801D7AE4
  cmpu(c,0,c->r[26],c->r[0]); // 801D7AE8
  if (crb(c,2)) { goto L_801D7B94; } // 801D7AEC
  c->r[0]=R32(c->r[31]+0x00000074u); // 801D7AF0
  W32(c->r[29]+0x00000064u,c->r[0]); // 801D7AF4
  goto L_801D7B08; // 801D7AF8
L_801D7AFC:;
  c->r[3]=R32(c->r[31]+0x00000070u); // 801D7AFC
  c->r[0]=R32(c->r[31]+0x00000074u); // 801D7B00
  W32(c->r[3]+0x00000008u,c->r[0]); // 801D7B04
L_801D7B08:;
  c->r[3]=R32(c->r[31]+0x00000074u); // 801D7B08
  c->r[0]=R32(c->r[31]+0x00000070u); // 801D7B0C
  W32(c->r[3]+0x00000004u,c->r[0]); // 801D7B10
  c->r[0]=R32(c->r[29]+0x00000068u); // 801D7B14
  cmpu(c,0,c->r[26],c->r[0]); // 801D7B18
  if (!crb(c,2)) { goto L_801D7B44; } // 801D7B1C
  c->r[3]=R32(c->r[26]+0x00000000u); // 801D7B20
  c->r[0]=R8(c->r[3]+0x00000059u); // 801D7B24
  cmps(c,0,(int32_t)c->r[0],0); // 801D7B28
  if (crb(c,2)) { goto L_801D7B44; } // 801D7B2C
  W32(c->r[31]+0x00000070u,c->r[26]); // 801D7B30
  W32(c->r[31]+0x00000074u,c->r[24]); // 801D7B34
  W32(c->r[26]+0x00000008u,c->r[30]); // 801D7B38
  W32(c->r[29]+0x00000068u,c->r[30]); // 801D7B3C
  goto L_801D7B94; // 801D7B40
L_801D7B44:;
  c->r[0]=R32(c->r[29]+0x00000064u); // 801D7B44
  cmpu(c,0,c->r[26],c->r[0]); // 801D7B48
  if (crb(c,2)) { goto L_801D7B6C; } // 801D7B4C
  c->r[0]=R32(c->r[26]+0x00000004u); // 801D7B50
  W32(c->r[31]+0x00000070u,c->r[0]); // 801D7B54
  W32(c->r[31]+0x00000074u,c->r[26]); // 801D7B58
  c->r[3]=R32(c->r[26]+0x00000004u); // 801D7B5C
  W32(c->r[3]+0x00000008u,c->r[30]); // 801D7B60
  W32(c->r[26]+0x00000004u,c->r[30]); // 801D7B64
  goto L_801D7B94; // 801D7B68
L_801D7B6C:;
  W32(c->r[31]+0x00000070u,c->r[26]); // 801D7B6C
  c->r[0]=R32(c->r[26]+0x00000008u); // 801D7B70
  W32(c->r[31]+0x00000074u,c->r[0]); // 801D7B74
  c->r[3]=R32(c->r[26]+0x00000008u); // 801D7B78
  W32(c->r[3]+0x00000004u,c->r[30]); // 801D7B7C
  W32(c->r[26]+0x00000008u,c->r[30]); // 801D7B80
  goto L_801D7B94; // 801D7B84
L_801D7B88:;
  c->r[26]=R32(c->r[26]+0x00000008u); // 801D7B88
L_801D7B8C:;
  cmps(c,0,(int32_t)c->r[26],0); // 801D7B8C
  if (!crb(c,2)) { IRQCHK(c); goto L_801D7A94; } // 801D7B90
L_801D7B94:;
  c->r[28]=c->r[28]+0x00000001u; // 801D7B94
  c->r[30]=c->r[30]+0x0000000Cu; // 801D7B98
  cmps(c,0,(int32_t)c->r[28],10); // 801D7B9C
  c->r[31]=c->r[31]+0x0000000Cu; // 801D7BA0
  if (crb(c,0)) { IRQCHK(c); goto L_801D7A68; } // 801D7BA4
  c->r[3]=c->r[27]|c->r[27]; // 801D7BA8
  c->lr=0x801D7BB0u; f_8018D6E0(c); // 801D7BAC
  c->r[11]=c->r[1]+0x00000040u; // 801D7BB0
  c->lr=0x801D7BB8u; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D7BB4
  c->r[0]=R32(c->r[1]+0x00000044u); // 801D7BB8
  c->lr=c->r[0]; // 801D7BBC
  c->r[1]=c->r[1]+0x00000040u; // 801D7BC0
  return; // 801D7BC4
}

// WUDIsBusy
void f_801D7BD0(Ctx* __restrict c) {
  trace_call(0x801D7BD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D7BD0
  c->r[0]=c->lr; // 801D7BD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D7BD8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D7BDC
  c->r[31]=0u+0x802E0000u; // 801D7BE0
  c->r[31]=c->r[31]+0xFFFF9DC0u; // 801D7BE4
  c->lr=0x801D7BECu; f_8018D6A0(c); // 801D7BE8
  c->r[0]=R8(c->r[31]+0x0000000Cu); // 801D7BEC
  cmps(c,0,(int32_t)c->r[0],0); // 801D7BF0
  if (!crb(c,2)) { goto L_801D7C28; } // 801D7BF4
  c->r[0]=R8(c->r[31]+0x0000000Du); // 801D7BF8
  cmps(c,0,(int32_t)c->r[0],0); // 801D7BFC
  if (!crb(c,2)) { goto L_801D7C28; } // 801D7C00
  c->r[0]=R8(c->r[31]+0x0000000Fu); // 801D7C04
  cmpu(c,0,c->r[0],0x00000004u); // 801D7C08
  if (!crb(c,2)) { goto L_801D7C28; } // 801D7C0C
  c->r[0]=R8(c->r[31]+0x00000010u); // 801D7C10
  cmpu(c,0,c->r[0],0x00000006u); // 801D7C14
  if (!crb(c,2)) { goto L_801D7C28; } // 801D7C18
  c->lr=0x801D7C20u; f_8018D6E0(c); // 801D7C1C
  c->r[3]=0u+0x00000000u; // 801D7C20
  goto L_801D7C30; // 801D7C24
L_801D7C28:;
  c->lr=0x801D7C2Cu; f_8018D6E0(c); // 801D7C28
  c->r[3]=0u+0x00000001u; // 801D7C2C
L_801D7C30:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D7C30
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D7C34
  c->lr=c->r[0]; // 801D7C38
  c->r[1]=c->r[1]+0x00000010u; // 801D7C3C
  return; // 801D7C40
}

// CleanupCallback
void f_801D7C50(Ctx* __restrict c) {
  trace_call(0x801D7C50u);
  cmps(c,0,(int32_t)c->r[3],0); // 801D7C50
  c->r[3]=0u+0x802E0000u; // 801D7C54
  c->r[3]=c->r[3]+0xFFFF9DC0u; // 801D7C58
  if (!crb(c,2)) { goto L_801D7C70; } // 801D7C5C
  c->r[0]=0u+0x00000000u; // 801D7C60
  W32(c->r[13]+0xFFFFB668u,c->r[0]); // 801D7C64
  W8(c->r[3]+0x00000708u,c->r[0]); // 801D7C68
  return; // 801D7C6C
L_801D7C70:;
  c->r[3]=0u+0x80280000u; // 801D7C70
  c->r[3]=c->r[3]+0xFFFFD56Cu; // 801D7C74
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D7C78
  f_801D94A0(c); return; // 801D7C7C
  return; // 801D7C80
}

// __wudSecurityEventStackCallback
void f_801D7C90(Ctx* __restrict c) {
  trace_call(0x801D7C90u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D7C90
  c->r[0]=c->lr; // 801D7C94
  W32(c->r[1]+0x00000064u,c->r[0]); // 801D7C98
  c->r[11]=c->r[1]+0x00000060u; // 801D7C9C
  c->lr=0x801D7CA4u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D7CA0
  c->r[30]=0u+0x80280000u; // 801D7CA4
  c->r[31]=0u+0x802E0000u; // 801D7CA8
  c->r[31]=c->r[31]+0xFFFF9DC0u; // 801D7CAC
  c->r[25]=c->r[3]|c->r[3]; // 801D7CB0
  c->r[30]=c->r[30]+0xFFFFCB10u; // 801D7CB4
  c->r[28]=c->r[4]|c->r[4]; // 801D7CB8
  c->r[29]=c->r[31]+0x00000000u; // 801D7CBC
  c->r[3]=c->r[30]+0x00000A7Cu; // 801D7CC0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D7CC4
  c->lr=0x801D7CCCu; f_801D94A0(c); // 801D7CC8
  cmpu(c,0,c->r[25],0x00000008u); // 801D7CCC
  if (crb(c,1)) { goto L_801D81CC; } // 801D7CD0
  c->r[3]=0u+0x80280000u; // 801D7CD4
  c->r[0]=rotl(c->r[25],2)&0xFFFFFFFCu; // 801D7CD8
  c->r[3]=c->r[3]+0xFFFFD7E8u; // 801D7CDC
  c->r[3]=R32(c->r[3]+c->r[0]); // 801D7CE0
  c->ctr=c->r[3]; // 801D7CE4
  if (true) { switch (c->ctr) { case 0x801D7CECu: goto L_801D7CEC; case 0x801D7D98u: goto L_801D7D98; case 0x801D7DB4u: goto L_801D7DB4; case 0x801D7E54u: goto L_801D7E54; case 0x801D7F60u: goto L_801D7F60; case 0x801D7F70u: goto L_801D7F70; case 0x801D805Cu: goto L_801D805C; case 0x801D81B0u: goto L_801D81B0; case 0x801D81C0u: goto L_801D81C0; default: break; } dispatch(c,c->ctr); return; } // 801D7CE8
L_801D7CEC:;
  c->r[4]=c->r[28]|c->r[28]; // 801D7CEC
  c->r[3]=c->r[29]+0x00000702u; // 801D7CF0
  c->r[5]=0u+0x00000006u; // 801D7CF4
  c->lr=0x801D7CFCu; f_80004364(c); // 801D7CF8
  c->r[3]=c->r[30]+0x00000A98u; // 801D7CFC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D7D00
  c->lr=0x801D7D08u; f_801D94A0(c); // 801D7D04
  c->r[4]=R8(c->r[29]+0x00000702u); // 801D7D08
  c->r[3]=c->r[30]+0x00000AA8u; // 801D7D0C
  c->r[5]=R8(c->r[29]+0x00000703u); // 801D7D10
  c->r[6]=R8(c->r[29]+0x00000704u); // 801D7D14
  c->r[7]=R8(c->r[29]+0x00000705u); // 801D7D18
  c->r[8]=R8(c->r[29]+0x00000706u); // 801D7D1C
  c->r[9]=R8(c->r[29]+0x00000707u); // 801D7D20
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D7D24
  c->lr=0x801D7D2Cu; f_801D94A0(c); // 801D7D28
  c->r[4]=0u+0x801E0000u; // 801D7D2C
  c->r[3]=0u+0x00000012u; // 801D7D30
  c->r[4]=c->r[4]+0xFFFF8EB0u; // 801D7D34
  c->lr=0x801D7D3Cu; f_801E1FC0(c); // 801D7D38
  c->r[0]=0u+0x00000001u; // 801D7D3C
  W8(c->r[29]+0x0000000Fu,c->r[0]); // 801D7D40
  c->r[3]=c->r[29]+0x00000710u; // 801D7D44
  c->lr=0x801D7D4Cu; f_80187C40(c); // 801D7D48
  c->lr=0x801D7D50u; f_801915C0(c); // 801D7D4C
  c->r[5]=0u+0x80000000u; // 801D7D50
  c->r[9]=0u+0x801D0000u; // 801D7D54
  c->r[0]=R32(c->r[5]+0x000000F8u); // 801D7D58
  c->r[6]=0u+0x10620000u; // 801D7D5C
  c->r[5]=c->r[3]|c->r[3]; // 801D7D60
  c->r[9]=c->r[9]+0x00004AC0u; // 801D7D64
  c->r[3]=c->r[6]+0x00004DD3u; // 801D7D68
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801D7D6C
  c->r[0]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[0])>>32); // 801D7D70
  c->r[6]=c->r[4]|c->r[4]; // 801D7D74
  c->r[3]=c->r[29]+0x00000710u; // 801D7D78
  c->r[7]=0u+0x00000000u; // 801D7D7C
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 801D7D80
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)10); // 801D7D84
  c->lr=0x801D7D8Cu; f_80187F10(c); // 801D7D88
  c->r[0]=0u+0x00000002u; // 801D7D8C
  W8(c->r[29]+0x00000708u,c->r[0]); // 801D7D90
  goto L_801D81CC; // 801D7D94
L_801D7D98:;
  c->r[3]=c->r[30]+0x00000AD0u; // 801D7D98
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D7D9C
  c->lr=0x801D7DA4u; f_801D94A0(c); // 801D7DA0
  c->r[3]=0u+0x801D0000u; // 801D7DA4
  c->r[3]=c->r[3]+0x00007C50u; // 801D7DA8
  c->lr=0x801D7DB0u; f_801DC910(c); // 801D7DAC
  goto L_801D81CC; // 801D7DB0
L_801D7DB4:;
  c->r[3]=c->r[30]+0x00000AE4u; // 801D7DB4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D7DB8
  c->lr=0x801D7DC0u; f_801D94A0(c); // 801D7DBC
  c->r[0]=R8(c->r[29]+0x000006E9u); // 801D7DC0
  cmps(c,0,(int32_t)c->r[0],0); // 801D7DC4
  if (!crb(c,2)) { goto L_801D7DD4; } // 801D7DC8
  c->r[29]=c->r[29]+0x00000702u; // 801D7DCC
  goto L_801D7DD8; // 801D7DD0
L_801D7DD4:;
  c->r[29]=c->r[28]|c->r[28]; // 801D7DD4
L_801D7DD8:;
  c->r[27]=c->r[31]+0x00000858u; // 801D7DD8
  c->r[0]=R8(c->r[27]+0x0000005Bu); // 801D7DDC
  cmpu(c,0,c->r[0],0x00000004u); // 801D7DE0
  if (!crb(c,2)) { goto L_801D7DF8; } // 801D7DE4
  c->r[3]=c->r[27]+0x00000040u; // 801D7DE8
  c->lr=0x801D7DF0u; f_801D7050(c); // 801D7DEC
  c->r[3]=c->r[27]+0x00000040u; // 801D7DF0
  c->lr=0x801D7DF8u; f_801E46F8(c); // 801D7DF4
L_801D7DF8:;
  c->r[3]=c->r[31]+0x00000858u; // 801D7DF8
  c->r[0]=0u+0x00000001u; // 801D7DFC
  W8(c->r[3]+0x0000005Au,c->r[0]); // 801D7E00
  c->lr=0x801D7E08u; f_8018D6A0(c); // 801D7E04
  c->r[0]=R8(c->r[29]+0x00000005u); // 801D7E08
  W8(c->r[1]+0x00000030u,c->r[0]); // 801D7E0C
  c->r[0]=R8(c->r[29]+0x00000004u); // 801D7E10
  W8(c->r[1]+0x00000031u,c->r[0]); // 801D7E14
  c->r[0]=R8(c->r[29]+0x00000003u); // 801D7E18
  W8(c->r[1]+0x00000032u,c->r[0]); // 801D7E1C
  c->r[0]=R8(c->r[29]+0x00000002u); // 801D7E20
  W8(c->r[1]+0x00000033u,c->r[0]); // 801D7E24
  c->r[0]=R8(c->r[29]+0x00000001u); // 801D7E28
  W8(c->r[1]+0x00000034u,c->r[0]); // 801D7E2C
  c->r[0]=R8(c->r[29]+0x00000000u); // 801D7E30
  W8(c->r[1]+0x00000035u,c->r[0]); // 801D7E34
  c->lr=0x801D7E3Cu; f_8018D6E0(c); // 801D7E38
  c->r[3]=c->r[28]|c->r[28]; // 801D7E3C
  c->r[6]=c->r[1]+0x00000030u; // 801D7E40
  c->r[4]=0u+0x00000001u; // 801D7E44
  c->r[5]=0u+0x00000006u; // 801D7E48
  c->lr=0x801D7E50u; f_801DFB00(c); // 801D7E4C
  goto L_801D81CC; // 801D7E50
L_801D7E54:;
  c->r[3]=c->r[30]+0x00000AF8u; // 801D7E54
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D7E58
  c->lr=0x801D7E60u; f_801D94A0(c); // 801D7E5C
  c->r[4]=R8(c->r[28]+0x00000000u); // 801D7E60
  c->r[3]=c->r[30]+0x00000B10u; // 801D7E64
  c->r[5]=R8(c->r[28]+0x00000001u); // 801D7E68
  c->r[6]=R8(c->r[28]+0x00000002u); // 801D7E6C
  c->r[7]=R8(c->r[28]+0x00000003u); // 801D7E70
  c->r[8]=R8(c->r[28]+0x00000004u); // 801D7E74
  c->r[9]=R8(c->r[28]+0x00000005u); // 801D7E78
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D7E7C
  c->lr=0x801D7E84u; f_801D94A0(c); // 801D7E80
  c->r[0]=R8(c->r[28]+0x00000106u); // 801D7E84
  c->r[3]=c->r[30]+0x00000B38u; // 801D7E88
  W32(c->r[1]+0x00000008u,c->r[0]); // 801D7E8C
  c->r[0]=R8(c->r[28]+0x00000107u); // 801D7E90
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801D7E94
  c->r[0]=R8(c->r[28]+0x00000108u); // 801D7E98
  W32(c->r[1]+0x00000010u,c->r[0]); // 801D7E9C
  c->r[0]=R8(c->r[28]+0x00000109u); // 801D7EA0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D7EA4
  c->r[0]=R8(c->r[28]+0x0000010Au); // 801D7EA8
  W32(c->r[1]+0x00000018u,c->r[0]); // 801D7EAC
  c->r[0]=R8(c->r[28]+0x0000010Bu); // 801D7EB0
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801D7EB4
  c->r[0]=R8(c->r[28]+0x0000010Cu); // 801D7EB8
  W32(c->r[1]+0x00000020u,c->r[0]); // 801D7EBC
  c->r[0]=R8(c->r[28]+0x0000010Du); // 801D7EC0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D7EC4
  c->r[0]=R8(c->r[28]+0x0000010Eu); // 801D7EC8
  W32(c->r[1]+0x00000028u,c->r[0]); // 801D7ECC
  c->r[4]=R8(c->r[28]+0x000000FFu); // 801D7ED0
  c->r[5]=R8(c->r[28]+0x00000100u); // 801D7ED4
  c->r[6]=R8(c->r[28]+0x00000101u); // 801D7ED8
  c->r[7]=R8(c->r[28]+0x00000102u); // 801D7EDC
  c->r[8]=R8(c->r[28]+0x00000103u); // 801D7EE0
  c->r[9]=R8(c->r[28]+0x00000104u); // 801D7EE4
  c->r[10]=R8(c->r[28]+0x00000105u); // 801D7EE8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D7EEC
  c->lr=0x801D7EF4u; f_801D94A0(c); // 801D7EF0
  c->r[4]=R8(c->r[28]+0x0000010Fu); // 801D7EF4
  c->r[3]=c->r[30]+0x00000B94u; // 801D7EF8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D7EFC
  c->lr=0x801D7F04u; f_801D94A0(c); // 801D7F00
  c->r[0]=R8(c->r[28]+0x0000010Fu); // 801D7F04
  cmps(c,0,(int32_t)c->r[0],0); // 801D7F08
  if (crb(c,2)) { goto L_801D81CC; } // 801D7F0C
  c->r[3]=c->r[28]|c->r[28]; // 801D7F10
  c->lr=0x801D7F18u; f_801D71D0(c); // 801D7F14
  c->r[27]=c->r[31]+0x00000858u; // 801D7F18
  c->r[26]=c->r[3]|c->r[3]; // 801D7F1C
  c->r[4]=c->r[28]|c->r[28]; // 801D7F20
  c->r[5]=0u+0x00000006u; // 801D7F24
  c->r[3]=c->r[27]+0x00000040u; // 801D7F28
  c->lr=0x801D7F30u; f_8020BD24(c); // 801D7F2C
  cmps(c,0,(int32_t)c->r[3],0); // 801D7F30
  if (!crb(c,2)) { goto L_801D7F4C; } // 801D7F34
  cmps(c,0,(int32_t)c->r[26],0); // 801D7F38
  c->r[0]=0u+0x0000000Cu; // 801D7F3C
  W8(c->r[27]+0x00000059u,c->r[0]); // 801D7F40
  if (!crb(c,2)) { goto L_801D7F4C; } // 801D7F44
  c->r[26]=c->r[27]|c->r[27]; // 801D7F48
L_801D7F4C:;
  c->r[3]=c->r[26]+0x00000046u; // 801D7F4C
  c->r[4]=c->r[28]+0x000000FFu; // 801D7F50
  c->r[5]=0u+0x00000010u; // 801D7F54
  c->lr=0x801D7F5Cu; f_80004364(c); // 801D7F58
  goto L_801D81CC; // 801D7F5C
L_801D7F60:;
  c->r[3]=c->r[30]+0x00000BA4u; // 801D7F60
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D7F64
  c->lr=0x801D7F6Cu; f_801D94A0(c); // 801D7F68
  goto L_801D81CC; // 801D7F6C
L_801D7F70:;
  c->r[3]=c->r[30]+0x00000BBCu; // 801D7F70
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D7F74
  c->lr=0x801D7F7Cu; f_801D94A0(c); // 801D7F78
  c->r[4]=R8(c->r[28]+0x00000000u); // 801D7F7C
  c->r[3]=c->r[30]+0x00000BD0u; // 801D7F80
  c->r[5]=R8(c->r[28]+0x00000001u); // 801D7F84
  c->r[6]=R8(c->r[28]+0x00000002u); // 801D7F88
  c->r[7]=R8(c->r[28]+0x00000003u); // 801D7F8C
  c->r[8]=R8(c->r[28]+0x00000004u); // 801D7F90
  c->r[9]=R8(c->r[28]+0x00000005u); // 801D7F94
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D7F98
  c->lr=0x801D7FA0u; f_801D94A0(c); // 801D7F9C
  c->r[3]=c->r[28]|c->r[28]; // 801D7FA0
  c->lr=0x801D7FA8u; f_801D71D0(c); // 801D7FA4
  cmps(c,0,(int32_t)c->r[3],0); // 801D7FA8
  c->r[26]=c->r[3]|c->r[3]; // 801D7FAC
  if (!crb(c,2)) { goto L_801D7FD4; } // 801D7FB0
  c->r[27]=c->r[31]+0x00000858u; // 801D7FB4
  c->r[3]=c->r[28]|c->r[28]; // 801D7FB8
  c->r[4]=c->r[27]+0x00000040u; // 801D7FBC
  c->r[5]=0u+0x00000006u; // 801D7FC0
  c->lr=0x801D7FC8u; f_8020BD24(c); // 801D7FC4
  cmps(c,0,(int32_t)c->r[3],0); // 801D7FC8
  if (!crb(c,2)) { goto L_801D7FD4; } // 801D7FCC
  c->r[26]=c->r[27]|c->r[27]; // 801D7FD0
L_801D7FD4:;
  cmps(c,0,(int32_t)c->r[26],0); // 801D7FD4
  if (crb(c,2)) { goto L_801D7FF4; } // 801D7FD8
  c->lr=0x801D7FE0u; f_8018D6A0(c); // 801D7FDC
  c->r[4]=c->r[31]+0x00000000u; // 801D7FE0
  c->r[27]=R8(c->r[4]+0x000006E5u); // 801D7FE4
  c->lr=0x801D7FECu; f_8018D6E0(c); // 801D7FE8
  cmpu(c,0,c->r[27],0x00000004u); // 801D7FEC
  if (!crb(c,2)) { goto L_801D8034; } // 801D7FF0
L_801D7FF4:;
  c->r[3]=c->r[28]|c->r[28]; // 801D7FF4
  c->lr=0x801D7FFCu; f_801E46F8(c); // 801D7FF8
  cmps(c,0,(int32_t)c->r[26],0); // 801D7FFC
  c->r[3]=c->r[30]+0x00000BFCu; // 801D8000
  c->r[4]=c->r[30]+0x00000C30u; // 801D8004
  if (!crb(c,2)) { goto L_801D8010; } // 801D8008
  c->r[4]=c->r[30]+0x00000C24u; // 801D800C
L_801D8010:;
  c->r[5]=R8(c->r[28]+0x00000000u); // 801D8010
  c->r[6]=R8(c->r[28]+0x00000001u); // 801D8014
  c->r[7]=R8(c->r[28]+0x00000002u); // 801D8018
  c->r[8]=R8(c->r[28]+0x00000003u); // 801D801C
  c->r[9]=R8(c->r[28]+0x00000004u); // 801D8020
  c->r[10]=R8(c->r[28]+0x00000005u); // 801D8024
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D8028
  c->lr=0x801D8030u; f_801D94A0(c); // 801D802C
  goto L_801D81CC; // 801D8030
L_801D8034:;
  c->r[0]=R8(c->r[26]+0x00000059u); // 801D8034
  c->r[3]=0u+0x00000003u; // 801D8038
  cmpu(c,0,c->r[0],0x00000002u); // 801D803C
  if (!crb(c,2)) { goto L_801D8048; } // 801D8040
  c->r[3]=0u+0x0000000Cu; // 801D8044
L_801D8048:;
  W8(c->r[26]+0x00000059u,c->r[3]); // 801D8048
  c->r[3]=R8(c->r[29]+0x000006E5u); // 801D804C
  c->r[0]=c->r[3]+0x00000001u; // 801D8050
  W8(c->r[29]+0x000006E5u,c->r[0]); // 801D8054
  goto L_801D81CC; // 801D8058
L_801D805C:;
  c->r[3]=c->r[30]+0x00000C40u; // 801D805C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D8060
  c->lr=0x801D8068u; f_801D94A0(c); // 801D8064
  c->r[4]=R8(c->r[28]+0x00000000u); // 801D8068
  c->r[3]=c->r[30]+0x00000BD0u; // 801D806C
  c->r[5]=R8(c->r[28]+0x00000001u); // 801D8070
  c->r[6]=R8(c->r[28]+0x00000002u); // 801D8074
  c->r[7]=R8(c->r[28]+0x00000003u); // 801D8078
  c->r[8]=R8(c->r[28]+0x00000004u); // 801D807C
  c->r[9]=R8(c->r[28]+0x00000005u); // 801D8080
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D8084
  c->lr=0x801D808Cu; f_801D94A0(c); // 801D8088
  c->r[4]=R8(c->r[28]+0x00000006u); // 801D808C
  c->r[3]=c->r[30]+0x00000C58u; // 801D8090
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D8094
  c->lr=0x801D809Cu; f_801D94A0(c); // 801D8098
  c->r[3]=c->r[28]|c->r[28]; // 801D809C
  c->lr=0x801D80A4u; f_801D71D0(c); // 801D80A0
  cmps(c,0,(int32_t)c->r[3],0); // 801D80A4
  if (crb(c,2)) { goto L_801D814C; } // 801D80A8
  c->r[0]=0u+0x00000001u; // 801D80AC
  W8(c->r[3]+0x00000059u,c->r[0]); // 801D80B0
  c->r[3]=c->r[31]+0x00000858u; // 801D80B4
  c->r[4]=c->r[28]|c->r[28]; // 801D80B8
  c->r[6]=R8(c->r[29]+0x000006E5u); // 801D80BC
  c->r[3]=c->r[3]+0x00000040u; // 801D80C0
  c->r[5]=0u+0x00000006u; // 801D80C4
  c->r[0]=c->r[6]+0xFFFFFFFFu; // 801D80C8
  W8(c->r[29]+0x000006E5u,c->r[0]); // 801D80CC
  c->lr=0x801D80D4u; f_8020BD24(c); // 801D80D0
  cmps(c,0,(int32_t)c->r[3],0); // 801D80D4
  if (!crb(c,2)) { goto L_801D80E4; } // 801D80D8
  c->r[0]=0u+0x000000FFu; // 801D80DC
  W8(c->r[29]+0x0000000Cu,c->r[0]); // 801D80E0
L_801D80E4:;
  c->r[0]=R8(c->r[28]+0x00000006u); // 801D80E4
  cmpu(c,0,c->r[0],0x00000015u); // 801D80E8
  if (!crb(c,2)) { goto L_801D818C; } // 801D80EC
  c->r[27]=c->r[31]+0x000008B8u; // 801D80F0
  c->r[25]=0u+0x00000000u; // 801D80F4
  c->r[31]=0u+0x00000001u; // 801D80F8
L_801D80FC:;
  c->r[3]=rotl(c->r[25],0)&0x000000FFu; // 801D80FC
  c->r[4]=c->r[28]|c->r[28]; // 801D8100
  c->r[0]=c->r[3]+0x0000000Au; // 801D8104
  c->r[5]=0u+0x00000006u; // 801D8108
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)70); // 801D810C
  c->r[3]=c->r[27]+c->r[0]; // 801D8110
  c->r[26]=c->r[3]+0x00000001u; // 801D8114
  c->r[3]=c->r[26]|c->r[26]; // 801D8118
  c->lr=0x801D8120u; f_8020BD24(c); // 801D811C
  cmps(c,0,(int32_t)c->r[3],0); // 801D8120
  if (!crb(c,2)) { goto L_801D813C; } // 801D8124
  c->r[3]=c->r[26]|c->r[26]; // 801D8128
  c->r[4]=0u+0x00000000u; // 801D812C
  c->r[5]=0u+0x00000046u; // 801D8130
  c->lr=0x801D8138u; f_800046B4(c); // 801D8134
  W8(c->r[13]+0xFFFFB69Cu,c->r[31]); // 801D8138
L_801D813C:;
  c->r[25]=c->r[25]+0x00000001u; // 801D813C
  cmpu(c,0,c->r[25],0x00000004u); // 801D8140
  if (crb(c,0)) { IRQCHK(c); goto L_801D80FC; } // 801D8144
  goto L_801D818C; // 801D8148
L_801D814C:;
  c->r[3]=c->r[31]+0x00000858u; // 801D814C
  c->r[4]=c->r[28]|c->r[28]; // 801D8150
  c->r[3]=c->r[3]+0x00000040u; // 801D8154
  c->r[5]=0u+0x00000006u; // 801D8158
  c->lr=0x801D8160u; f_8020BD24(c); // 801D815C
  cmps(c,0,(int32_t)c->r[3],0); // 801D8160
  if (!crb(c,2)) { goto L_801D8180; } // 801D8164
  c->r[3]=R8(c->r[29]+0x000006E5u); // 801D8168
  c->r[0]=0u+0x000000FFu; // 801D816C
  W8(c->r[29]+0x0000000Cu,c->r[0]); // 801D8170
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801D8174
  W8(c->r[29]+0x000006E5u,c->r[0]); // 801D8178
  goto L_801D818C; // 801D817C
L_801D8180:;
  c->r[3]=c->r[30]+0x00000C64u; // 801D8180
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D8184
  c->lr=0x801D818Cu; f_801D94A0(c); // 801D8188
L_801D818C:;
  c->r[0]=R8(c->r[29]+0x000006E5u); // 801D818C
  cmpu(c,0,c->r[0],0x000000FAu); // 801D8190
  if (crb(c,0)) { goto L_801D81CC; } // 801D8194
  c->r[3]=c->r[30]+0x00000C80u; // 801D8198
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D819C
  c->lr=0x801D81A4u; f_801899B0(c); // 801D81A0
  c->r[0]=0u+0x00000000u; // 801D81A4
  W8(c->r[29]+0x000006E5u,c->r[0]); // 801D81A8
  goto L_801D81CC; // 801D81AC
L_801D81B0:;
  c->r[3]=c->r[30]+0x00000CA4u; // 801D81B0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D81B4
  c->lr=0x801D81BCu; f_801D94A0(c); // 801D81B8
  goto L_801D81CC; // 801D81BC
L_801D81C0:;
  c->r[3]=c->r[30]+0x00000CC0u; // 801D81C0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D81C4
  c->lr=0x801D81CCu; f_801D94A0(c); // 801D81C8
L_801D81CC:;
  c->r[11]=c->r[1]+0x00000060u; // 801D81CC
  c->lr=0x801D81D4u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D81D0
  c->r[0]=R32(c->r[1]+0x00000064u); // 801D81D4
  c->lr=c->r[0]; // 801D81D8
  c->r[1]=c->r[1]+0x00000060u; // 801D81DC
  return; // 801D81E0
}

// __wudSearchEventStackCallback
void f_801D81F0(Ctx* __restrict c) {
  trace_call(0x801D81F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D81F0
  c->r[0]=c->lr; // 801D81F4
  cmps(c,0,(int32_t)c->r[3],0); // 801D81F8
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D81FC
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801D8200
  W32(c->r[1]+0x00000028u,c->r[30]); // 801D8204
  W32(c->r[1]+0x00000024u,c->r[29]); // 801D8208
  c->r[29]=0u+0x80280000u; // 801D820C
  c->r[29]=c->r[29]+0xFFFFCB10u; // 801D8210
  W32(c->r[1]+0x00000020u,c->r[28]); // 801D8214
  c->r[28]=c->r[4]|c->r[4]; // 801D8218
  if (crb(c,2)) { goto L_801D8244; } // 801D821C
  cmps(c,0,(int32_t)c->r[3],1); // 801D8220
  if (crb(c,2)) { goto L_801D82DC; } // 801D8224
  cmps(c,0,(int32_t)c->r[3],2); // 801D8228
  if (crb(c,2)) { goto L_801D82EC; } // 801D822C
  cmps(c,0,(int32_t)c->r[3],3); // 801D8230
  if (crb(c,2)) { goto L_801D8354; } // 801D8234
  cmps(c,0,(int32_t)c->r[3],4); // 801D8238
  if (crb(c,2)) { goto L_801D8374; } // 801D823C
  goto L_801D83CC; // 801D8240
L_801D8244:;
  c->r[0]=R8(c->r[4]+0x00000007u); // 801D8244
  c->r[3]=c->r[29]+0x00000CFCu; // 801D8248
  W32(c->r[1]+0x00000008u,c->r[0]); // 801D824C
  c->r[0]=R8(c->r[4]+0x00000008u); // 801D8250
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801D8254
  c->r[0]=R8(c->r[4]+0x00000009u); // 801D8258
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801D825C
  W32(c->r[1]+0x00000010u,c->r[0]); // 801D8260
  c->r[4]=R8(c->r[4]+0x00000000u); // 801D8264
  c->r[5]=R8(c->r[28]+0x00000001u); // 801D8268
  c->r[6]=R8(c->r[28]+0x00000002u); // 801D826C
  c->r[7]=R8(c->r[28]+0x00000003u); // 801D8270
  c->r[8]=R8(c->r[28]+0x00000004u); // 801D8274
  c->r[9]=R8(c->r[28]+0x00000005u); // 801D8278
  c->r[10]=R8(c->r[28]+0x00000006u); // 801D827C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D8280
  c->lr=0x801D8288u; f_801D94A0(c); // 801D8284
  c->r[30]=0u+0x802E0000u; // 801D8288
  c->r[0]=R8(c->r[28]+0x00000009u); // 801D828C
  c->r[30]=c->r[30]+0xFFFF9DC0u; // 801D8290
  W8(c->r[13]+0xFFFFB69Eu,c->r[0]); // 801D8294
  c->r[0]=R8(c->r[30]+0x000006E7u); // 801D8298
  cmpu(c,0,c->r[0],0x00000001u); // 801D829C
  if (crb(c,2)) { goto L_801D82C0; } // 801D82A0
  cmps(c,0,(int32_t)c->r[0],0); // 801D82A4
  if (!crb(c,2)) { goto L_801D82C8; } // 801D82A8
  c->lr=0x801D82B0u; f_8018D6A0(c); // 801D82AC
  c->r[29]=R8(c->r[30]+0x000006E5u); // 801D82B0
  c->lr=0x801D82B8u; f_8018D6E0(c); // 801D82B4
  cmpu(c,0,c->r[29],0x00000003u); // 801D82B8
  if (!crb(c,0)) { goto L_801D82C8; } // 801D82BC
L_801D82C0:;
  c->r[0]=0u+0x00001900u; // 801D82C0
  goto L_801D82D0; // 801D82C4
L_801D82C8:;
  c->r[3]=0u+0x00010000u; // 801D82C8
  c->r[0]=c->r[3]+0xFFFF8000u; // 801D82CC
L_801D82D0:;
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801D82D0
  c->lr=0x801D82D8u; f_801E6424(c); // 801D82D4
  goto L_801D83D8; // 801D82D8
L_801D82DC:;
  c->r[3]=c->r[29]+0x00000D40u; // 801D82DC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D82E0
  c->lr=0x801D82E8u; f_801D94A0(c); // 801D82E4
  goto L_801D83D8; // 801D82E8
L_801D82EC:;
  c->r[30]=0u+0x802E0000u; // 801D82EC
  c->r[5]=0u+0x00000006u; // 801D82F0
  c->r[3]=c->r[30]+0xFFFFA510u; // 801D82F4
  c->lr=0x801D82FCu; f_80004364(c); // 801D82F8
  c->r[31]=c->r[30]+0xFFFFA510u; // 801D82FC
  c->r[4]=c->r[28]+0x00000006u; // 801D8300
  c->r[3]=c->r[31]+0x00000006u; // 801D8304
  c->r[5]=0u+0x00000040u; // 801D8308
  c->lr=0x801D8310u; f_80004364(c); // 801D830C
  c->r[5]=R32(c->r[28]+0x00000100u); // 801D8310
  c->r[3]=c->r[29]+0x00000D54u; // 801D8314
  c->r[4]=R8(c->r[13]+0xFFFFB69Fu); // 801D8318
  c->r[10]=c->r[31]+0x00000006u; // 801D831C
  W32(c->r[31]+0x00000100u,c->r[5]); // 801D8320
  c->r[0]=c->r[4]+0x00000001u; // 801D8324
  W8(c->r[13]+0xFFFFB69Fu,c->r[0]); // 801D8328
  W32(c->r[1]+0x00000008u,c->r[5]); // 801D832C
  c->r[4]=R8(c->r[30]+0xFFFFA510u); // 801D8330
  c->r[5]=R8(c->r[31]+0x00000001u); // 801D8334
  c->r[6]=R8(c->r[31]+0x00000002u); // 801D8338
  c->r[7]=R8(c->r[31]+0x00000003u); // 801D833C
  c->r[8]=R8(c->r[31]+0x00000004u); // 801D8340
  c->r[9]=R8(c->r[31]+0x00000005u); // 801D8344
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D8348
  c->lr=0x801D8350u; f_801D94A0(c); // 801D834C
  goto L_801D83D8; // 801D8350
L_801D8354:;
  c->r[3]=c->r[29]+0x00000D94u; // 801D8354
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D8358
  c->lr=0x801D8360u; f_801D94A0(c); // 801D835C
  c->r[3]=0u+0x802E0000u; // 801D8360
  c->r[0]=0u+0x00000004u; // 801D8364
  c->r[3]=c->r[3]+0xFFFF9DC0u; // 801D8368
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801D836C
  goto L_801D83D8; // 801D8370
L_801D8374:;
  c->r[3]=c->r[29]+0x00000DA8u; // 801D8374
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D8378
  c->lr=0x801D8380u; f_801D94A0(c); // 801D837C
  c->r[3]=0u+0x00010000u; // 801D8380
  c->r[5]=c->r[29]+0x00000200u; // 801D8384
  c->r[0]=c->r[3]+0xFFFFFC4Cu; // 801D8388
  c->r[4]=0u+0x0000001Cu; // 801D838C
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801D8390
  c->r[6]=0u+0x00000000u; // 801D8394
  c->lr=0x801D839Cu; f_801E61EC(c); // 801D8398
  c->r[0]=0u+0x00000000u; // 801D839C
  c->r[3]=0u+0x802E0000u; // 801D83A0
  W8(c->r[13]+0xFFFFB69Fu,c->r[0]); // 801D83A4
  c->r[3]=c->r[3]+0xFFFFA510u; // 801D83A8
  c->r[4]=0u+0x00000000u; // 801D83AC
  c->r[5]=0u+0x00000108u; // 801D83B0
  c->lr=0x801D83B8u; f_800046B4(c); // 801D83B4
  c->r[3]=0u+0x802E0000u; // 801D83B8
  c->r[0]=0u+0x00000004u; // 801D83BC
  c->r[3]=c->r[3]+0xFFFF9DC0u; // 801D83C0
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801D83C4
  goto L_801D83D8; // 801D83C8
L_801D83CC:;
  c->r[3]=c->r[29]+0x00000DB8u; // 801D83CC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D83D0
  c->lr=0x801D83D8u; f_801D94A0(c); // 801D83D4
L_801D83D8:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D83D8
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801D83DC
  c->r[30]=R32(c->r[1]+0x00000028u); // 801D83E0
  c->r[29]=R32(c->r[1]+0x00000024u); // 801D83E4
  c->r[28]=R32(c->r[1]+0x00000020u); // 801D83E8
  c->lr=c->r[0]; // 801D83EC
  c->r[1]=c->r[1]+0x00000030u; // 801D83F0
  return; // 801D83F4
}

// __wudVendorSpecificEventStackCallback
void f_801D8400(Ctx* __restrict c) {
  trace_call(0x801D8400u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D8400
  c->r[0]=c->lr; // 801D8404
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D8408
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D840C
  c->r[31]=0u+0x80280000u; // 801D8410
  c->r[31]=c->r[31]+0xFFFFCB10u; // 801D8414
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D8418
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D841C
  W32(c->r[1]+0x00000010u,c->r[28]); // 801D8420
  c->r[28]=0u+0x802E0000u; // 801D8424
  c->r[28]=c->r[28]+0xFFFF9DC0u; // 801D8428
  c->r[0]=R8(c->r[4]+0x00000000u); // 801D842C
  cmps(c,0,(int32_t)c->r[0],8); // 801D8430
  if (crb(c,2)) { goto L_801D8454; } // 801D8434
  cmps(c,0,(int32_t)c->r[0],9); // 801D8438
  if (crb(c,2)) { goto L_801D84F4; } // 801D843C
  cmps(c,0,(int32_t)c->r[0],10); // 801D8440
  if (crb(c,2)) { goto L_801D8668; } // 801D8444
  cmps(c,0,(int32_t)c->r[0],16); // 801D8448
  if (crb(c,2)) { goto L_801D8674; } // 801D844C
  goto L_801D8688; // 801D8450
L_801D8454:;
  c->r[3]=c->r[31]+0x00000DE8u; // 801D8454
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D8458
  c->lr=0x801D8460u; f_801D94A0(c); // 801D845C
  c->lr=0x801D8464u; f_8018D6A0(c); // 801D8460
  c->r[0]=R8(c->r[28]+0x0000000Cu); // 801D8464
  cmps(c,0,(int32_t)c->r[0],0); // 801D8468
  if (!crb(c,2)) { goto L_801D84A0; } // 801D846C
  c->r[0]=R8(c->r[28]+0x0000000Du); // 801D8470
  cmps(c,0,(int32_t)c->r[0],0); // 801D8474
  if (!crb(c,2)) { goto L_801D84A0; } // 801D8478
  c->r[0]=R8(c->r[28]+0x0000000Fu); // 801D847C
  cmpu(c,0,c->r[0],0x00000004u); // 801D8480
  if (!crb(c,2)) { goto L_801D84A0; } // 801D8484
  c->r[0]=R8(c->r[28]+0x00000010u); // 801D8488
  cmpu(c,0,c->r[0],0x00000006u); // 801D848C
  if (!crb(c,2)) { goto L_801D84A0; } // 801D8490
  c->lr=0x801D8498u; f_8018D6E0(c); // 801D8494
  c->r[0]=0u+0x00000000u; // 801D8498
  goto L_801D84A8; // 801D849C
L_801D84A0:;
  c->lr=0x801D84A4u; f_8018D6E0(c); // 801D84A0
  c->r[0]=0u+0x00000001u; // 801D84A4
L_801D84A8:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D84A8
  if (!crb(c,2)) { goto L_801D8688; } // 801D84AC
  c->lr=0x801D84B4u; f_8018D6A0(c); // 801D84B0
  c->r[31]=R32(c->r[28]+0x00000000u); // 801D84B4
  c->lr=0x801D84BCu; f_8018D6E0(c); // 801D84B8
  cmps(c,0,(int32_t)c->r[31],0); // 801D84BC
  if (crb(c,2)) { goto L_801D84DC; } // 801D84C0
  c->r[12]=c->r[31]|c->r[31]; // 801D84C4
  c->r[3]=0u+0x00000000u; // 801D84C8
  c->r[4]=0u+0x00000000u; // 801D84CC
  c->ctr=c->r[12]; // 801D84D0
  if (true) { c->lr=0x801D84D8u; dispatch(c,c->ctr); } // 801D84D4
  goto L_801D8688; // 801D84D8
L_801D84DC:;
  c->r[3]=0u+0x00000000u; // 801D84DC
  c->r[4]=0u+0x00000003u; // 801D84E0
  c->r[5]=0u+0x00000000u; // 801D84E4
  c->r[6]=0u+0x00000000u; // 801D84E8
  c->lr=0x801D84F0u; f_801D6240(c); // 801D84EC
  goto L_801D8688; // 801D84F0
L_801D84F4:;
  c->r[3]=c->r[31]+0x00000E00u; // 801D84F4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D84F8
  c->lr=0x801D8500u; f_801D94A0(c); // 801D84FC
  c->lr=0x801D8504u; f_8018D6A0(c); // 801D8500
  c->r[29]=R32(c->r[28]+0x00000008u); // 801D8504
  c->r[30]=c->r[3]|c->r[3]; // 801D8508
  c->lr=0x801D8510u; f_8018D6A0(c); // 801D850C
  c->r[0]=R8(c->r[28]+0x0000000Cu); // 801D8510
  cmps(c,0,(int32_t)c->r[0],0); // 801D8514
  if (!crb(c,2)) { goto L_801D854C; } // 801D8518
  c->r[0]=R8(c->r[28]+0x0000000Du); // 801D851C
  cmps(c,0,(int32_t)c->r[0],0); // 801D8520
  if (!crb(c,2)) { goto L_801D854C; } // 801D8524
  c->r[0]=R8(c->r[28]+0x0000000Fu); // 801D8528
  cmpu(c,0,c->r[0],0x00000004u); // 801D852C
  if (!crb(c,2)) { goto L_801D854C; } // 801D8530
  c->r[0]=R8(c->r[28]+0x00000010u); // 801D8534
  cmpu(c,0,c->r[0],0x00000006u); // 801D8538
  if (!crb(c,2)) { goto L_801D854C; } // 801D853C
  c->lr=0x801D8544u; f_8018D6E0(c); // 801D8540
  c->r[4]=0u+0x00000000u; // 801D8544
  goto L_801D8554; // 801D8548
L_801D854C:;
  c->lr=0x801D8550u; f_8018D6E0(c); // 801D854C
  c->r[4]=0u+0x00000001u; // 801D8550
L_801D8554:;
  c->r[0]=0u-c->r[4]; // 801D8554
  c->r[3]=c->r[30]|c->r[30]; // 801D8558
  c->r[0]=c->r[0]|c->r[4]; // 801D855C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801D8560
  c->r[30]=0u-c->r[0]; // 801D8564
  c->lr=0x801D856Cu; f_8018D6E0(c); // 801D8568
  cmps(c,0,(int32_t)c->r[29],0); // 801D856C
  if (crb(c,2)) { goto L_801D8588; } // 801D8570
  c->r[12]=c->r[29]|c->r[29]; // 801D8574
  c->r[3]=c->r[30]|c->r[30]; // 801D8578
  c->ctr=c->r[12]; // 801D857C
  if (true) { c->lr=0x801D8584u; dispatch(c,c->ctr); } // 801D8580
  goto L_801D8688; // 801D8584
L_801D8588:;
  c->r[30]=0u+0x802E0000u; // 801D8588
  c->r[3]=c->r[31]+0x00000800u; // 801D858C
  c->r[30]=c->r[30]+0xFFFF9DC0u; // 801D8590
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D8594
  c->lr=0x801D859Cu; f_801D94A0(c); // 801D8598
  c->lr=0x801D85A0u; f_8018D6A0(c); // 801D859C
  c->r[31]=R8(c->r[30]+0x00000708u); // 801D85A0
  c->r[31]=(uint32_t)(int32_t)(int8_t)c->r[31]; // 801D85A4
  c->lr=0x801D85ACu; f_8018D6E0(c); // 801D85A8
  cmpu(c,0,c->r[31],0x00000003u); // 801D85AC
  if (!crb(c,2)) { goto L_801D8688; } // 801D85B0
  c->lr=0x801D85B8u; f_8018D6A0(c); // 801D85B4
  c->r[0]=R8(c->r[30]+0x0000000Cu); // 801D85B8
  cmps(c,0,(int32_t)c->r[0],0); // 801D85BC
  if (!crb(c,2)) { goto L_801D85F4; } // 801D85C0
  c->r[0]=R8(c->r[30]+0x0000000Du); // 801D85C4
  cmps(c,0,(int32_t)c->r[0],0); // 801D85C8
  if (!crb(c,2)) { goto L_801D85F4; } // 801D85CC
  c->r[0]=R8(c->r[30]+0x0000000Fu); // 801D85D0
  cmpu(c,0,c->r[0],0x00000004u); // 801D85D4
  if (!crb(c,2)) { goto L_801D85F4; } // 801D85D8
  c->r[0]=R8(c->r[30]+0x00000010u); // 801D85DC
  cmpu(c,0,c->r[0],0x00000006u); // 801D85E0
  if (!crb(c,2)) { goto L_801D85F4; } // 801D85E4
  c->lr=0x801D85ECu; f_8018D6E0(c); // 801D85E8
  c->r[0]=0u+0x00000000u; // 801D85EC
  goto L_801D85FC; // 801D85F0
L_801D85F4:;
  c->lr=0x801D85F8u; f_8018D6E0(c); // 801D85F4
  c->r[0]=0u+0x00000001u; // 801D85F8
L_801D85FC:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D85FC
  if (!crb(c,2)) { goto L_801D8688; } // 801D8600
  c->lr=0x801D8608u; f_8018D6A0(c); // 801D8604
  c->r[0]=0u+0x00000001u; // 801D8608
  W8(c->r[30]+0x0000000Du,c->r[0]); // 801D860C
  c->r[29]=c->r[3]|c->r[3]; // 801D8610
  c->r[3]=c->r[30]+0x00000710u; // 801D8614
  c->lr=0x801D861Cu; f_80187C40(c); // 801D8618
  c->lr=0x801D8620u; f_801915C0(c); // 801D861C
  c->r[5]=0u+0x80000000u; // 801D8620
  c->r[9]=0u+0x801D0000u; // 801D8624
  c->r[0]=R32(c->r[5]+0x000000F8u); // 801D8628
  c->r[6]=0u+0x10620000u; // 801D862C
  c->r[5]=c->r[3]|c->r[3]; // 801D8630
  c->r[9]=c->r[9]+0x00004840u; // 801D8634
  c->r[3]=c->r[6]+0x00004DD3u; // 801D8638
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801D863C
  c->r[0]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[0])>>32); // 801D8640
  c->r[6]=c->r[4]|c->r[4]; // 801D8644
  c->r[3]=c->r[30]+0x00000710u; // 801D8648
  c->r[7]=0u+0x00000000u; // 801D864C
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 801D8650
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801D8654
  c->lr=0x801D865Cu; f_80187F10(c); // 801D8658
  c->r[3]=c->r[29]|c->r[29]; // 801D865C
  c->lr=0x801D8664u; f_8018D6E0(c); // 801D8660
  goto L_801D8688; // 801D8664
L_801D8668:;
  c->r[0]=R8(c->r[4]+0x00000001u); // 801D8668
  W8(c->r[28]+0x00000709u,c->r[0]); // 801D866C
  goto L_801D8688; // 801D8670
L_801D8674:;
  c->r[5]=c->r[31]+0x00000E18u; // 801D8674
  c->r[3]=c->r[13]+0xFFFFAB60u; // 801D8678
  c->r[4]=0u+0x000014DEu; // 801D867C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D8680
  c->lr=0x801D8688u; f_80189A40(c); // 801D8684
L_801D8688:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D8688
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D868C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D8690
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D8694
  c->r[28]=R32(c->r[1]+0x00000010u); // 801D8698
  c->lr=c->r[0]; // 801D869C
  c->r[1]=c->r[1]+0x00000020u; // 801D86A0
  return; // 801D86A4
}

// WUDDeviceStatusCallback
void f_801D86B0(Ctx* __restrict c) {
  trace_call(0x801D86B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D86B0
  c->r[0]=c->lr; // 801D86B4
  c->r[4]=0u+0x80280000u; // 801D86B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D86BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D86C0
  c->r[31]=c->r[3]|c->r[3]; // 801D86C4
  c->r[3]=c->r[4]+0xFFFFD93Cu; // 801D86C8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D86CC
  c->lr=0x801D86D4u; f_801D94A0(c); // 801D86D0
  cmpu(c,0,c->r[31],0x00000002u); // 801D86D4
  if (!crb(c,2)) { goto L_801D86EC; } // 801D86D8
  c->r[3]=0u+0x80280000u; // 801D86DC
  c->r[3]=c->r[3]+0xFFFFD964u; // 801D86E0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D86E4
  c->lr=0x801D86ECu; f_801899B0(c); // 801D86E8
L_801D86EC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D86EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D86F0
  c->lr=c->r[0]; // 801D86F4
  c->r[1]=c->r[1]+0x00000010u; // 801D86F8
  return; // 801D86FC
}

// __wudLinkKeyEventStackCallback
void f_801D8700(Ctx* __restrict c) {
  trace_call(0x801D8700u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D8700
  c->r[0]=c->lr; // 801D8704
  W32(c->r[1]+0x00000064u,c->r[0]); // 801D8708
  c->r[11]=c->r[1]+0x00000060u; // 801D870C
  c->lr=0x801D8714u; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D8710
  c->r[0]=R8(c->r[3]+0x00000000u); // 801D8714
  c->r[30]=0u+0x80280000u; // 801D8718
  c->r[4]=0u+0x802E0000u; // 801D871C
  c->r[26]=c->r[3]|c->r[3]; // 801D8720
  cmps(c,0,(int32_t)c->r[0],1); // 801D8724
  c->r[30]=c->r[30]+0xFFFFCB10u; // 801D8728
  c->r[28]=c->r[4]+0xFFFF9DC0u; // 801D872C
  if (crb(c,2)) { goto L_801D8750; } // 801D8730
  cmps(c,0,(int32_t)c->r[0],2); // 801D8734
  if (crb(c,2)) { goto L_801D8988; } // 801D8738
  cmps(c,0,(int32_t)c->r[0],3); // 801D873C
  if (crb(c,2)) { goto L_801D89B8; } // 801D8740
  cmps(c,0,(int32_t)c->r[0],4); // 801D8744
  if (crb(c,2)) { goto L_801D89E4; } // 801D8748
  goto L_801D8A28; // 801D874C
L_801D8750:;
  c->r[3]=c->r[30]+0x00000E7Cu; // 801D8750
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D8754
  c->lr=0x801D875Cu; f_801D94A0(c); // 801D8758
  c->r[29]=c->r[26]+0x00000002u; // 801D875C
  c->r[27]=0u+0x00000000u; // 801D8760
  c->r[22]=0u+0x00000001u; // 801D8764
  c->r[23]=0u+0x00000003u; // 801D8768
  c->r[24]=0u+0x0000000Au; // 801D876C
  c->r[25]=0u+0x00000006u; // 801D8770
  goto L_801D8978; // 801D8774
L_801D8778:;
  c->r[3]=c->r[29]|c->r[29]; // 801D8778
  c->lr=0x801D8780u; f_801D71D0(c); // 801D877C
  c->r[4]=R8(c->r[29]+0x00000000u); // 801D8780
  c->r[31]=c->r[3]|c->r[3]; // 801D8784
  c->r[5]=R8(c->r[29]+0x00000001u); // 801D8788
  c->r[3]=c->r[30]+0x00000E9Cu; // 801D878C
  c->r[6]=R8(c->r[29]+0x00000002u); // 801D8790
  c->r[7]=R8(c->r[29]+0x00000003u); // 801D8794
  c->r[8]=R8(c->r[29]+0x00000004u); // 801D8798
  c->r[9]=R8(c->r[29]+0x00000005u); // 801D879C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D87A0
  c->lr=0x801D87A8u; f_801D94A0(c); // 801D87A4
  c->r[0]=R8(c->r[29]+0x0000000Du); // 801D87A8
  c->r[3]=c->r[30]+0x00000EC8u; // 801D87AC
  W32(c->r[1]+0x00000008u,c->r[0]); // 801D87B0
  c->r[0]=R8(c->r[29]+0x0000000Eu); // 801D87B4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801D87B8
  c->r[0]=R8(c->r[29]+0x0000000Fu); // 801D87BC
  W32(c->r[1]+0x00000010u,c->r[0]); // 801D87C0
  c->r[0]=R8(c->r[29]+0x00000010u); // 801D87C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D87C8
  c->r[0]=R8(c->r[29]+0x00000011u); // 801D87CC
  W32(c->r[1]+0x00000018u,c->r[0]); // 801D87D0
  c->r[0]=R8(c->r[29]+0x00000012u); // 801D87D4
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801D87D8
  c->r[0]=R8(c->r[29]+0x00000013u); // 801D87DC
  W32(c->r[1]+0x00000020u,c->r[0]); // 801D87E0
  c->r[0]=R8(c->r[29]+0x00000014u); // 801D87E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D87E8
  c->r[0]=R8(c->r[29]+0x00000015u); // 801D87EC
  W32(c->r[1]+0x00000028u,c->r[0]); // 801D87F0
  c->r[4]=R8(c->r[29]+0x00000006u); // 801D87F4
  c->r[5]=R8(c->r[29]+0x00000007u); // 801D87F8
  c->r[6]=R8(c->r[29]+0x00000008u); // 801D87FC
  c->r[7]=R8(c->r[29]+0x00000009u); // 801D8800
  c->r[8]=R8(c->r[29]+0x0000000Au); // 801D8804
  c->r[9]=R8(c->r[29]+0x0000000Bu); // 801D8808
  c->r[10]=R8(c->r[29]+0x0000000Cu); // 801D880C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D8810
  c->lr=0x801D8818u; f_801D94A0(c); // 801D8814
  cmps(c,0,(int32_t)c->r[31],0); // 801D8818
  if (!crb(c,2)) { goto L_801D890C; } // 801D881C
  c->r[3]=c->r[30]+0x00000F24u; // 801D8820
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D8824
  c->lr=0x801D882Cu; f_801D94A0(c); // 801D8828
  c->lr=0x801D8830u; f_8018D6A0(c); // 801D882C
  c->r[0]=R8(c->r[28]+0x000006E9u); // 801D8830
  c->r[21]=c->r[3]|c->r[3]; // 801D8834
  cmps(c,0,(int32_t)c->r[0],0); // 801D8838
  if (!crb(c,2)) { goto L_801D888C; } // 801D883C
  c->r[3]=c->r[28]|c->r[28]; // 801D8840
  c->r[20]=0u+0x00000000u; // 801D8844
  c->r[31]=0u+0x00000000u; // 801D8848
  c->ctr=c->r[24]; // 801D884C
L_801D8850:;
  c->r[0]=R8(c->r[3]+0x0000013Du); // 801D8850
  cmps(c,0,(int32_t)c->r[0],0); // 801D8854
  if (!crb(c,2)) { goto L_801D887C; } // 801D8858
  c->r[4]=c->r[31]|c->r[31]; // 801D885C
  c->r[3]=c->r[30]+0x000002CCu; // 801D8860
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D8864
  c->lr=0x801D886Cu; f_801D94A0(c); // 801D8868
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)96); // 801D886C
  c->r[3]=c->r[28]+c->r[0]; // 801D8870
  c->r[20]=c->r[3]+0x000000E4u; // 801D8874
  goto L_801D8894; // 801D8878
L_801D887C:;
  c->r[3]=c->r[3]+0x00000060u; // 801D887C
  c->r[31]=c->r[31]+0x00000001u; // 801D8880
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D8850; } // 801D8884
  goto L_801D8894; // 801D8888
L_801D888C:;
  c->r[3]=R32(c->r[28]+0x00000018u); // 801D888C
  c->r[20]=R32(c->r[3]+0x00000000u); // 801D8890
L_801D8894:;
  c->r[3]=c->r[21]|c->r[21]; // 801D8894
  c->lr=0x801D889Cu; f_8018D6E0(c); // 801D8898
  cmps(c,0,(int32_t)c->r[20],0); // 801D889C
  if (!crb(c,2)) { goto L_801D88D8; } // 801D88A0
  c->r[3]=c->r[28]|c->r[28]; // 801D88A4
  c->r[27]=0u+0x00000000u; // 801D88A8
  c->ctr=c->r[25]; // 801D88AC
L_801D88B0:;
  c->r[0]=R8(c->r[3]+0x000004FDu); // 801D88B0
  cmps(c,0,(int32_t)c->r[0],0); // 801D88B4
  if (!crb(c,2)) { goto L_801D88CC; } // 801D88B8
  c->r[0]=(uint32_t)((int32_t)c->r[27]*(int32_t)96); // 801D88BC
  c->r[3]=c->r[28]+c->r[0]; // 801D88C0
  c->r[20]=c->r[3]+0x000004A4u; // 801D88C4
  goto L_801D88D8; // 801D88C8
L_801D88CC:;
  c->r[3]=c->r[3]+0x00000060u; // 801D88CC
  c->r[27]=c->r[27]+0x00000001u; // 801D88D0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D88B0; } // 801D88D4
L_801D88D8:;
  cmps(c,0,(int32_t)c->r[20],0); // 801D88D8
  if (crb(c,2)) { goto L_801D8970; } // 801D88DC
  W8(c->r[20]+0x0000005Cu,c->r[22]); // 801D88E0
  c->r[4]=c->r[29]|c->r[29]; // 801D88E4
  c->r[3]=c->r[20]+0x00000040u; // 801D88E8
  c->r[5]=0u+0x00000006u; // 801D88EC
  W8(c->r[20]+0x00000059u,c->r[22]); // 801D88F0
  c->lr=0x801D88F8u; f_80004364(c); // 801D88F4
  c->r[3]=c->r[20]+0x00000046u; // 801D88F8
  c->r[4]=c->r[29]+0x00000006u; // 801D88FC
  c->r[5]=0u+0x00000010u; // 801D8900
  c->lr=0x801D8908u; f_80004364(c); // 801D8904
  goto L_801D8970; // 801D8908
L_801D890C:;
  c->r[4]=c->r[29]|c->r[29]; // 801D890C
  c->r[3]=c->r[31]+0x00000040u; // 801D8910
  c->r[5]=0u+0x00000006u; // 801D8914
  c->lr=0x801D891Cu; f_80004364(c); // 801D8918
  c->r[3]=c->r[31]+0x00000046u; // 801D891C
  c->r[4]=c->r[29]+0x00000006u; // 801D8920
  c->r[5]=0u+0x00000010u; // 801D8924
  c->lr=0x801D892Cu; f_80004364(c); // 801D8928
  c->r[0]=R8(c->r[31]+0x0000005Cu); // 801D892C
  cmpu(c,0,c->r[0],0x00000002u); // 801D8930
  if (!crb(c,2)) { goto L_801D893C; } // 801D8934
  W8(c->r[31]+0x0000005Cu,c->r[23]); // 801D8938
L_801D893C:;
  c->r[4]=c->r[29]|c->r[29]; // 801D893C
  c->r[3]=c->r[28]+0x000006FCu; // 801D8940
  c->r[5]=0u+0x00000006u; // 801D8944
  c->lr=0x801D894Cu; f_80004364(c); // 801D8948
  c->r[4]=R8(c->r[28]+0x000006FCu); // 801D894C
  c->r[3]=c->r[30]+0x00000F48u; // 801D8950
  c->r[5]=R8(c->r[28]+0x000006FDu); // 801D8954
  c->r[6]=R8(c->r[28]+0x000006FEu); // 801D8958
  c->r[7]=R8(c->r[28]+0x000006FFu); // 801D895C
  c->r[8]=R8(c->r[28]+0x00000700u); // 801D8960
  c->r[9]=R8(c->r[28]+0x00000701u); // 801D8964
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D8968
  c->lr=0x801D8970u; f_801D94A0(c); // 801D896C
L_801D8970:;
  c->r[29]=c->r[29]+0x00000016u; // 801D8970
  c->r[27]=c->r[27]+0x00000001u; // 801D8974
L_801D8978:;
  c->r[0]=R8(c->r[26]+0x00000001u); // 801D8978
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 801D897C
  if (crb(c,0)) { IRQCHK(c); goto L_801D8778; } // 801D8980
  goto L_801D8A3C; // 801D8984
L_801D8988:;
  c->r[3]=c->r[30]+0x00000F70u; // 801D8988
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D898C
  c->lr=0x801D8994u; f_801D94A0(c); // 801D8990
  c->r[4]=R8(c->r[26]+0x00000001u); // 801D8994
  c->r[3]=c->r[30]+0x00000F94u; // 801D8998
  c->r[5]=R16(c->r[26]+0x00000002u); // 801D899C
  c->r[6]=R16(c->r[26]+0x00000004u); // 801D89A0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D89A4
  c->lr=0x801D89ACu; f_801D94A0(c); // 801D89A8
  c->r[0]=0u+0x00000000u; // 801D89AC
  W8(c->r[28]+0x0000000Eu,c->r[0]); // 801D89B0
  goto L_801D8A3C; // 801D89B4
L_801D89B8:;
  c->r[3]=c->r[30]+0x00000FC0u; // 801D89B8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D89BC
  c->lr=0x801D89C4u; f_801D94A0(c); // 801D89C0
  c->r[4]=R8(c->r[26]+0x00000001u); // 801D89C4
  c->r[3]=c->r[30]+0x00000FE4u; // 801D89C8
  c->r[5]=R8(c->r[26]+0x00000002u); // 801D89CC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D89D0
  c->lr=0x801D89D8u; f_801D94A0(c); // 801D89D4
  c->r[0]=0u+0x00000000u; // 801D89D8
  W8(c->r[28]+0x0000000Eu,c->r[0]); // 801D89DC
  goto L_801D8A3C; // 801D89E0
L_801D89E4:;
  c->r[3]=c->r[30]+0x00001000u; // 801D89E4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D89E8
  c->lr=0x801D89F0u; f_801D94A0(c); // 801D89EC
  c->r[4]=R8(c->r[26]+0x00000001u); // 801D89F0
  c->r[3]=c->r[30]+0x00000FE4u; // 801D89F4
  c->r[5]=R16(c->r[26]+0x00000002u); // 801D89F8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D89FC
  c->lr=0x801D8A04u; f_801D94A0(c); // 801D8A00
  c->r[0]=R16(c->r[26]+0x00000002u); // 801D8A04
  cmps(c,0,(int32_t)c->r[0],0); // 801D8A08
  if (!crb(c,2)) { goto L_801D8A1C; } // 801D8A0C
  c->r[3]=c->r[30]+0x00001024u; // 801D8A10
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D8A14
  c->lr=0x801D8A1Cu; f_801D94A0(c); // 801D8A18
L_801D8A1C:;
  c->r[0]=0u+0x00000000u; // 801D8A1C
  W8(c->r[28]+0x0000000Eu,c->r[0]); // 801D8A20
  goto L_801D8A3C; // 801D8A24
L_801D8A28:;
  c->r[5]=c->r[30]+0x00001044u; // 801D8A28
  c->r[3]=c->r[13]+0xFFFFAB60u; // 801D8A2C
  c->r[4]=0u+0x0000157Au; // 801D8A30
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D8A34
  c->lr=0x801D8A3Cu; f_80189A40(c); // 801D8A38
L_801D8A3C:;
  c->r[11]=c->r[1]+0x00000060u; // 801D8A3C
  c->lr=0x801D8A44u; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D8A40
  c->r[0]=R32(c->r[1]+0x00000064u); // 801D8A44
  c->lr=c->r[0]; // 801D8A48
  c->r[1]=c->r[1]+0x00000060u; // 801D8A4C
  return; // 801D8A50
}

// __wudPowerMangeEventStackCallback
void f_801D8A60(Ctx* __restrict c) {
  trace_call(0x801D8A60u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D8A60
  c->r[0]=c->lr; // 801D8A64
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D8A68
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D8A6C
  c->r[31]=0u+0x80280000u; // 801D8A70
  c->r[31]=c->r[31]+0xFFFFCB10u; // 801D8A74
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D8A78
  c->r[30]=c->r[6]|c->r[6]; // 801D8A7C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D8A80
  c->r[29]=c->r[4]|c->r[4]; // 801D8A84
  W32(c->r[1]+0x00000010u,c->r[28]); // 801D8A88
  c->r[28]=c->r[3]|c->r[3]; // 801D8A8C
  c->r[3]=c->r[31]+0x00001054u; // 801D8A90
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D8A94
  c->lr=0x801D8A9Cu; f_801D94A0(c); // 801D8A98
  c->r[4]=c->r[30]|c->r[30]; // 801D8A9C
  c->r[3]=c->r[31]+0x00001078u; // 801D8AA0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D8AA4
  c->lr=0x801D8AACu; f_801D94A0(c); // 801D8AA8
  c->r[3]=c->r[28]|c->r[28]; // 801D8AAC
  c->lr=0x801D8AB4u; f_801D71D0(c); // 801D8AB0
  cmps(c,0,(int32_t)c->r[3],0); // 801D8AB4
  c->r[30]=c->r[3]|c->r[3]; // 801D8AB8
  if (!crb(c,2)) { goto L_801D8B1C; } // 801D8ABC
  c->r[30]=0u+0x802E0000u; // 801D8AC0
  c->r[4]=c->r[28]|c->r[28]; // 801D8AC4
  c->r[30]=c->r[30]+0xFFFFA618u; // 801D8AC8
  c->r[5]=0u+0x00000006u; // 801D8ACC
  c->r[3]=c->r[30]+0x00000040u; // 801D8AD0
  c->lr=0x801D8AD8u; f_8020BD24(c); // 801D8AD4
  cmps(c,0,(int32_t)c->r[3],0); // 801D8AD8
  if (!crb(c,2)) { goto L_801D8AE4; } // 801D8ADC
  goto L_801D8B1C; // 801D8AE0
L_801D8AE4:;
  c->r[3]=c->r[31]+0x0000108Cu; // 801D8AE4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D8AE8
  c->lr=0x801D8AF0u; f_801D94A0(c); // 801D8AEC
  c->r[4]=R8(c->r[28]+0x00000000u); // 801D8AF0
  c->r[10]=c->r[29]|c->r[29]; // 801D8AF4
  c->r[5]=R8(c->r[28]+0x00000001u); // 801D8AF8
  c->r[3]=c->r[31]+0x000010D0u; // 801D8AFC
  c->r[6]=R8(c->r[28]+0x00000002u); // 801D8B00
  c->r[7]=R8(c->r[28]+0x00000003u); // 801D8B04
  c->r[8]=R8(c->r[28]+0x00000004u); // 801D8B08
  c->r[9]=R8(c->r[28]+0x00000005u); // 801D8B0C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D8B10
  c->lr=0x801D8B18u; f_801D94A0(c); // 801D8B14
  goto L_801D8B6C; // 801D8B18
L_801D8B1C:;
  cmps(c,0,(int32_t)c->r[29],0); // 801D8B1C
  if (crb(c,2)) { goto L_801D8B30; } // 801D8B20
  cmps(c,0,(int32_t)c->r[29],2); // 801D8B24
  if (crb(c,2)) { goto L_801D8B3C; } // 801D8B28
  goto L_801D8B44; // 801D8B2C
L_801D8B30:;
  c->r[0]=0u+0x00000008u; // 801D8B30
  W8(c->r[30]+0x00000059u,c->r[0]); // 801D8B34
  goto L_801D8B44; // 801D8B38
L_801D8B3C:;
  c->r[0]=0u+0x00000009u; // 801D8B3C
  W8(c->r[30]+0x00000059u,c->r[0]); // 801D8B40
L_801D8B44:;
  c->r[4]=R8(c->r[30]+0x00000040u); // 801D8B44
  c->r[3]=c->r[31]+0x000010D0u; // 801D8B48
  c->r[5]=R8(c->r[30]+0x00000041u); // 801D8B4C
  c->r[6]=R8(c->r[30]+0x00000042u); // 801D8B50
  c->r[7]=R8(c->r[30]+0x00000043u); // 801D8B54
  c->r[8]=R8(c->r[30]+0x00000044u); // 801D8B58
  c->r[9]=R8(c->r[30]+0x00000045u); // 801D8B5C
  c->r[10]=R8(c->r[30]+0x00000059u); // 801D8B60
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D8B64
  c->lr=0x801D8B6Cu; f_801D94A0(c); // 801D8B68
L_801D8B6C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D8B6C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D8B70
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D8B74
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D8B78
  c->r[28]=R32(c->r[1]+0x00000010u); // 801D8B7C
  c->lr=c->r[0]; // 801D8B80
  c->r[1]=c->r[1]+0x00000020u; // 801D8B84
  return; // 801D8B88
}

// _WUDGetDevAddr
void f_801D8B90(Ctx* __restrict c) {
  trace_call(0x801D8B90u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D8B90
  c->r[0]=c->lr; // 801D8B94
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D8B98
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D8B9C
  c->r[31]=c->r[3]|c->r[3]; // 801D8BA0
  c->lr=0x801D8BA8u; f_8018D6A0(c); // 801D8BA4
  cmpu(c,0,c->r[31],0x00000010u); // 801D8BA8
  if (!crb(c,0)) { goto L_801D8BC4; } // 801D8BAC
  c->r[4]=0u+0x802E0000u; // 801D8BB0
  c->r[0]=rotl(c->r[31],2)&0x000003FCu; // 801D8BB4
  c->r[4]=c->r[4]+0xFFFFAB80u; // 801D8BB8
  c->r[31]=R32(c->r[4]+c->r[0]); // 801D8BBC
  goto L_801D8BC8; // 801D8BC0
L_801D8BC4:;
  c->r[31]=0u+0x00000000u; // 801D8BC4
L_801D8BC8:;
  c->lr=0x801D8BCCu; f_8018D6E0(c); // 801D8BC8
  c->r[3]=c->r[31]|c->r[31]; // 801D8BCC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D8BD0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D8BD4
  c->lr=c->r[0]; // 801D8BD8
  c->r[1]=c->r[1]+0x00000010u; // 801D8BDC
  return; // 801D8BE0
}

// _WUDGetQueuedSize
void f_801D8BF0(Ctx* __restrict c) {
  trace_call(0x801D8BF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D8BF0
  c->r[0]=c->lr; // 801D8BF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D8BF8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D8BFC
  c->r[31]=c->r[3]|c->r[3]; // 801D8C00
  c->lr=0x801D8C08u; f_8018D6A0(c); // 801D8C04
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 801D8C08
  cmpu(c,0,c->r[0],0x0000000Fu); // 801D8C0C
  if (crb(c,1)) { goto L_801D8C28; } // 801D8C10
  c->r[4]=0u+0x802E0000u; // 801D8C14
  c->r[0]=rotl(c->r[31],1)&0x000001FEu; // 801D8C18
  c->r[4]=c->r[4]+0xFFFFBF28u; // 801D8C1C
  c->r[31]=R16(c->r[4]+c->r[0]); // 801D8C20
  goto L_801D8C2C; // 801D8C24
L_801D8C28:;
  c->r[31]=0u+0x00000000u; // 801D8C28
L_801D8C2C:;
  c->lr=0x801D8C30u; f_8018D6E0(c); // 801D8C2C
  c->r[3]=c->r[31]|c->r[31]; // 801D8C30
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D8C34
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D8C38
  c->lr=c->r[0]; // 801D8C3C
  c->r[1]=c->r[1]+0x00000010u; // 801D8C40
  return; // 801D8C44
}

// _WUDGetNotAckedSize
void f_801D8C50(Ctx* __restrict c) {
  trace_call(0x801D8C50u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D8C50
  c->r[0]=c->lr; // 801D8C54
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D8C58
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D8C5C
  c->r[31]=c->r[3]|c->r[3]; // 801D8C60
  c->lr=0x801D8C68u; f_8018D6A0(c); // 801D8C64
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 801D8C68
  cmpu(c,0,c->r[0],0x0000000Fu); // 801D8C6C
  if (crb(c,1)) { goto L_801D8C88; } // 801D8C70
  c->r[4]=0u+0x802E0000u; // 801D8C74
  c->r[0]=rotl(c->r[31],1)&0x000001FEu; // 801D8C78
  c->r[4]=c->r[4]+0xFFFFBF48u; // 801D8C7C
  c->r[31]=R16(c->r[4]+c->r[0]); // 801D8C80
  goto L_801D8C8C; // 801D8C84
L_801D8C88:;
  c->r[31]=0u+0x00000000u; // 801D8C88
L_801D8C8C:;
  c->lr=0x801D8C90u; f_8018D6E0(c); // 801D8C8C
  c->r[3]=c->r[31]|c->r[31]; // 801D8C90
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D8C94
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D8C98
  c->lr=c->r[0]; // 801D8C9C
  c->r[1]=c->r[1]+0x00000010u; // 801D8CA0
  return; // 801D8CA4
}

// _WUDGetLinkNumber
void f_801D8CB0(Ctx* __restrict c) {
  trace_call(0x801D8CB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D8CB0
  c->r[0]=c->lr; // 801D8CB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D8CB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D8CBC
  c->lr=0x801D8CC4u; f_8018D6A0(c); // 801D8CC0
  c->r[4]=0u+0x802E0000u; // 801D8CC4
  c->r[4]=c->r[4]+0xFFFF9DC0u; // 801D8CC8
  c->r[31]=R8(c->r[4]+0x000006E5u); // 801D8CCC
  c->lr=0x801D8CD4u; f_8018D6E0(c); // 801D8CD0
  c->r[3]=c->r[31]|c->r[31]; // 801D8CD4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D8CD8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D8CDC
  c->lr=c->r[0]; // 801D8CE0
  c->r[1]=c->r[1]+0x00000010u; // 801D8CE4
  return; // 801D8CE8
}

// WUDiGetDiscoverDevice
void f_801D8CF0(Ctx* __restrict c) {
  trace_call(0x801D8CF0u);
  c->r[3]=0u+0x802E0000u; // 801D8CF0
  c->r[3]=c->r[3]+0xFFFFA618u; // 801D8CF4
  return; // 801D8CF8
}

// WUDSetDeviceHistory
void f_801D8D00(Ctx* __restrict c) {
  trace_call(0x801D8D00u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D8D00
  c->r[0]=c->lr; // 801D8D04
  cmps(c,0,(int32_t)c->r[4],0); // 801D8D08
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D8D0C
  if (!crb(c,2)) { goto L_801D8D3C; } // 801D8D10
  c->r[0]=c->r[3]+0x0000000Au; // 801D8D14
  c->r[3]=0u+0x802E0000u; // 801D8D18
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)70); // 801D8D1C
  c->r[4]=0u+0x00000000u; // 801D8D20
  c->r[3]=c->r[3]+0xFFFFA678u; // 801D8D24
  c->r[5]=0u+0x00000046u; // 801D8D28
  c->r[3]=c->r[3]+c->r[0]; // 801D8D2C
  c->r[3]=c->r[3]+0x00000001u; // 801D8D30
  c->lr=0x801D8D38u; f_800046B4(c); // 801D8D34
  goto L_801D8D5C; // 801D8D38
L_801D8D3C:;
  c->r[0]=c->r[3]+0x0000000Au; // 801D8D3C
  c->r[3]=0u+0x802E0000u; // 801D8D40
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)70); // 801D8D44
  c->r[5]=0u+0x00000006u; // 801D8D48
  c->r[3]=c->r[3]+0xFFFFA678u; // 801D8D4C
  c->r[3]=c->r[3]+c->r[0]; // 801D8D50
  c->r[3]=c->r[3]+0x00000001u; // 801D8D54
  c->lr=0x801D8D5Cu; f_80004364(c); // 801D8D58
L_801D8D5C:;
  c->r[0]=0u+0x00000001u; // 801D8D5C
  W8(c->r[13]+0xFFFFB69Cu,c->r[0]); // 801D8D60
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D8D64
  c->lr=c->r[0]; // 801D8D68
  c->r[1]=c->r[1]+0x00000010u; // 801D8D6C
  return; // 801D8D70
}

// WUDIsLatestDevice
void f_801D8D80(Ctx* __restrict c) {
  trace_call(0x801D8D80u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D8D80
  c->r[0]=c->lr; // 801D8D84
  cmps(c,0,(int32_t)c->r[4],0); // 801D8D88
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D8D8C
  if (!crb(c,2)) { goto L_801D8D9C; } // 801D8D90
  c->r[3]=0u+0x00000000u; // 801D8D94
  goto L_801D8DC4; // 801D8D98
L_801D8D9C:;
  c->r[0]=c->r[3]+0x0000000Au; // 801D8D9C
  c->r[3]=0u+0x802E0000u; // 801D8DA0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)70); // 801D8DA4
  c->r[5]=0u+0x00000006u; // 801D8DA8
  c->r[3]=c->r[3]+0xFFFFA678u; // 801D8DAC
  c->r[3]=c->r[3]+c->r[0]; // 801D8DB0
  c->r[3]=c->r[3]+0x00000001u; // 801D8DB4
  c->lr=0x801D8DBCu; f_8020BD24(c); // 801D8DB8
  c->r[0]=cntlz(c->r[3]); // 801D8DBC
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 801D8DC0
L_801D8DC4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D8DC4
  c->lr=c->r[0]; // 801D8DC8
  c->r[1]=c->r[1]+0x00000010u; // 801D8DCC
  return; // 801D8DD0
}

// WUDUpdateSCSetting
void f_801D8DE0(Ctx* __restrict c) {
  trace_call(0x801D8DE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D8DE0
  c->r[0]=c->lr; // 801D8DE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D8DE8
  c->r[0]=R8(c->r[13]+0xFFFFB69Cu); // 801D8DEC
  cmps(c,0,(int32_t)c->r[0],0); // 801D8DF0
  if (crb(c,2)) { goto L_801D8E1C; } // 801D8DF4
  c->r[3]=0u+0x802E0000u; // 801D8DF8
  c->r[3]=c->r[3]+0xFFFFA678u; // 801D8DFC
  c->lr=0x801D8E04u; f_801B8200(c); // 801D8E00
  cmps(c,0,(int32_t)c->r[3],0); // 801D8E04
  if (crb(c,2)) { goto L_801D8E1C; } // 801D8E08
  c->r[3]=0u+0x00000000u; // 801D8E0C
  c->lr=0x801D8E14u; f_801B79D0(c); // 801D8E10
  c->r[0]=0u+0x00000000u; // 801D8E14
  W8(c->r[13]+0xFFFFB69Cu,c->r[0]); // 801D8E18
L_801D8E1C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D8E1C
  c->lr=c->r[0]; // 801D8E20
  c->r[1]=c->r[1]+0x00000010u; // 801D8E24
  return; // 801D8E28
}

// WUDiSetDevAddrForHandle
void f_801D8E30(Ctx* __restrict c) {
  trace_call(0x801D8E30u);
  c->r[5]=0u+0x802E0000u; // 801D8E30
  c->r[0]=rotl(c->r[3],2)&0x000003FCu; // 801D8E34
  c->r[5]=c->r[5]+0xFFFFAB80u; // 801D8E38
  W32(c->r[5]+c->r[0],c->r[4]); // 801D8E3C
  return; // 801D8E40
}

// WUDiGetDevAddrForHandle
void f_801D8E50(Ctx* __restrict c) {
  trace_call(0x801D8E50u);
  c->r[4]=0u+0x802E0000u; // 801D8E50
  c->r[0]=rotl(c->r[3],2)&0x000003FCu; // 801D8E54
  c->r[4]=c->r[4]+0xFFFFAB80u; // 801D8E58
  c->r[3]=R32(c->r[4]+c->r[0]); // 801D8E5C
  return; // 801D8E60
}

// WUDiSetQueueSizeForHandle
void f_801D8E70(Ctx* __restrict c) {
  trace_call(0x801D8E70u);
  c->r[5]=0u+0x802E0000u; // 801D8E70
  c->r[0]=rotl(c->r[3],1)&0x000001FEu; // 801D8E74
  c->r[5]=c->r[5]+0xFFFFBF28u; // 801D8E78
  W16(c->r[5]+c->r[0],c->r[4]); // 801D8E7C
  return; // 801D8E80
}

// WUDiSetNotAckNumForHandle
void f_801D8E90(Ctx* __restrict c) {
  trace_call(0x801D8E90u);
  c->r[5]=0u+0x802E0000u; // 801D8E90
  c->r[0]=rotl(c->r[3],1)&0x000001FEu; // 801D8E94
  c->r[5]=c->r[5]+0xFFFFBF48u; // 801D8E98
  W16(c->r[5]+c->r[0],c->r[4]); // 801D8E9C
  return; // 801D8EA0
}

// WUDiHidHostEventCallback
void f_801D8EB0(Ctx* __restrict c) {
  trace_call(0x801D8EB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D8EB0
  c->r[0]=c->lr; // 801D8EB4
  cmpu(c,0,c->r[3],0x0000000Fu); // 801D8EB8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D8EBC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D8EC0
  c->r[31]=0u+0x80280000u; // 801D8EC4
  c->r[31]=c->r[31]+0xFFFFDCB8u; // 801D8EC8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D8ECC
  c->r[30]=0u+0x802E0000u; // 801D8ED0
  c->r[30]=c->r[30]+0xFFFF9DC0u; // 801D8ED4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D8ED8
  c->r[29]=c->r[4]|c->r[4]; // 801D8EDC
  W32(c->r[1]+0x00000010u,c->r[28]); // 801D8EE0
  if (crb(c,1)) { goto L_801D9410; } // 801D8EE4
  c->r[5]=0u+0x80280000u; // 801D8EE8
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801D8EEC
  c->r[5]=c->r[5]+0xFFFFDED0u; // 801D8EF0
  c->r[5]=R32(c->r[5]+c->r[0]); // 801D8EF4
  c->ctr=c->r[5]; // 801D8EF8
  if (true) { switch (c->ctr) { case 0x801D8F00u: goto L_801D8F00; case 0x801D8F1Cu: goto L_801D8F1C; case 0x801D8F2Cu: goto L_801D8F2C; case 0x801D9188u: goto L_801D9188; case 0x801D9268u: goto L_801D9268; case 0x801D92DCu: goto L_801D92DC; case 0x801D931Cu: goto L_801D931C; case 0x801D9394u: goto L_801D9394; case 0x801D93A4u: goto L_801D93A4; case 0x801D93B4u: goto L_801D93B4; case 0x801D93C4u: goto L_801D93C4; case 0x801D93D4u: goto L_801D93D4; case 0x801D93E4u: goto L_801D93E4; case 0x801D93F4u: goto L_801D93F4; case 0x801D9404u: goto L_801D9404; case 0x801D9410u: goto L_801D9410; default: break; } dispatch(c,c->ctr); return; } // 801D8EFC
L_801D8F00:;
  c->r[3]=c->r[31]+0x00000000u; // 801D8F00
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D8F04
  c->lr=0x801D8F0Cu; f_801D94A0(c); // 801D8F08
  c->r[0]=R32(c->r[30]+0x00000740u); // 801D8F0C
  c->r[0]=c->r[0]|0x00000001u; // 801D8F10
  W32(c->r[30]+0x00000740u,c->r[0]); // 801D8F14
  goto L_801D9410; // 801D8F18
L_801D8F1C:;
  c->r[3]=c->r[31]+0x00000014u; // 801D8F1C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D8F20
  c->lr=0x801D8F28u; f_801D94A0(c); // 801D8F24
  goto L_801D9410; // 801D8F28
L_801D8F2C:;
  c->r[3]=c->r[31]+0x00000028u; // 801D8F2C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D8F30
  c->lr=0x801D8F38u; f_801D94A0(c); // 801D8F34
  c->r[4]=R8(c->r[29]+0x00000007u); // 801D8F38
  c->r[3]=c->r[31]+0x0000003Cu; // 801D8F3C
  c->r[5]=R8(c->r[29]+0x00000000u); // 801D8F40
  c->r[6]=R8(c->r[29]+0x00000001u); // 801D8F44
  c->r[7]=R8(c->r[29]+0x00000002u); // 801D8F48
  c->r[8]=R8(c->r[29]+0x00000003u); // 801D8F4C
  c->r[9]=R8(c->r[29]+0x00000004u); // 801D8F50
  c->r[10]=R8(c->r[29]+0x00000005u); // 801D8F54
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D8F58
  c->lr=0x801D8F60u; f_801D94A0(c); // 801D8F5C
  c->r[4]=R8(c->r[29]+0x00000006u); // 801D8F60
  cmps(c,0,(int32_t)c->r[4],0); // 801D8F64
  if (!crb(c,2)) { goto L_801D90A4; } // 801D8F68
  c->lr=0x801D8F70u; f_801D8CF0(c); // 801D8F6C
  c->r[28]=c->r[3]|c->r[3]; // 801D8F70
  c->r[4]=c->r[29]|c->r[29]; // 801D8F74
  c->r[5]=0u+0x00000006u; // 801D8F78
  c->r[3]=c->r[3]+0x00000040u; // 801D8F7C
  c->lr=0x801D8F84u; f_8020BD24(c); // 801D8F80
  cmps(c,0,(int32_t)c->r[3],0); // 801D8F84
  if (crb(c,2)) { goto L_801D8F98; } // 801D8F88
  c->r[3]=c->r[29]|c->r[29]; // 801D8F8C
  c->lr=0x801D8F94u; f_801D71D0(c); // 801D8F90
  c->r[28]=c->r[3]|c->r[3]; // 801D8F94
L_801D8F98:;
  c->r[0]=R8(c->r[28]+0x00000059u); // 801D8F98
  cmps(c,0,(int32_t)c->r[0],12); // 801D8F9C
  if (crb(c,2)) { goto L_801D8FB0; } // 801D8FA0
  cmps(c,0,(int32_t)c->r[0],2); // 801D8FA4
  if (crb(c,2)) { goto L_801D8FBC; } // 801D8FA8
  goto L_801D8FC4; // 801D8FAC
L_801D8FB0:;
  c->r[0]=0u+0x00000012u; // 801D8FB0
  W8(c->r[30]+0x0000000Cu,c->r[0]); // 801D8FB4
  goto L_801D8FC4; // 801D8FB8
L_801D8FBC:;
  c->r[0]=0u+0x00000017u; // 801D8FBC
  W8(c->r[30]+0x0000000Cu,c->r[0]); // 801D8FC0
L_801D8FC4:;
  c->r[0]=0u+0x00000008u; // 801D8FC4
  W8(c->r[28]+0x00000059u,c->r[0]); // 801D8FC8
  c->r[3]=c->r[29]|c->r[29]; // 801D8FCC
  c->r[0]=R8(c->r[29]+0x00000007u); // 801D8FD0
  W8(c->r[28]+0x00000056u,c->r[0]); // 801D8FD4
  c->r[4]=R8(c->r[30]+0x000006E4u); // 801D8FD8
  c->r[0]=c->r[4]+0x00000001u; // 801D8FDC
  W8(c->r[30]+0x000006E4u,c->r[0]); // 801D8FE0
  c->lr=0x801D8FE8u; f_801D71D0(c); // 801D8FE4
  cmps(c,0,(int32_t)c->r[3],0); // 801D8FE8
  c->r[28]=c->r[3]|c->r[3]; // 801D8FEC
  if (!crb(c,2)) { goto L_801D8FFC; } // 801D8FF0
  c->lr=0x801D8FF8u; f_801D8CF0(c); // 801D8FF4
  c->r[28]=c->r[3]|c->r[3]; // 801D8FF8
L_801D8FFC:;
  c->r[3]=R8(c->r[29]+0x00000007u); // 801D8FFC
  c->r[4]=c->r[28]+0x00000040u; // 801D9000
  c->lr=0x801D9008u; f_801D8E30(c); // 801D9004
  c->r[3]=R8(c->r[29]+0x00000007u); // 801D9008
  c->r[4]=0u+0x00000000u; // 801D900C
  c->lr=0x801D9014u; f_801D8E70(c); // 801D9010
  c->r[3]=R8(c->r[29]+0x00000007u); // 801D9014
  c->r[4]=0u+0x00000000u; // 801D9018
  c->lr=0x801D9020u; f_801D8E90(c); // 801D901C
  c->r[0]=R8(c->r[28]+0x0000005Bu); // 801D9020
  cmpu(c,0,c->r[0],0x00000003u); // 801D9024
  if (crb(c,2)) { goto L_801D9034; } // 801D9028
  cmpu(c,0,c->r[0],0x00000001u); // 801D902C
  if (!crb(c,2)) { goto L_801D9040; } // 801D9030
L_801D9034:;
  c->r[3]=c->r[28]|c->r[28]; // 801D9034
  c->lr=0x801D903Cu; f_801D72B0(c); // 801D9038
  goto L_801D9078; // 801D903C
L_801D9040:;
  c->lr=0x801D9044u; f_801D2AB0(c); // 801D9040
  cmps(c,0,(int32_t)c->r[3],0); // 801D9044
  if (crb(c,2)) { goto L_801D9070; } // 801D9048
  c->lr=0x801D9050u; f_801D2AB0(c); // 801D904C
  cmps(c,0,(int32_t)c->r[3],0); // 801D9050
  if (crb(c,2)) { goto L_801D9078; } // 801D9054
  c->r[3]=c->r[28]|c->r[28]; // 801D9058
  c->r[4]=c->r[31]+0x00000070u; // 801D905C
  c->r[5]=0u+0x00000010u; // 801D9060
  c->lr=0x801D9068u; f_8020BD24(c); // 801D9064
  cmps(c,0,(int32_t)c->r[3],0); // 801D9068
  if (!crb(c,2)) { goto L_801D9078; } // 801D906C
L_801D9070:;
  c->r[3]=c->r[28]|c->r[28]; // 801D9070
  c->lr=0x801D9078u; f_801D7660(c); // 801D9074
L_801D9078:;
  c->r[3]=c->r[28]+0x00000040u; // 801D9078
  c->r[4]=0u+0x00000008u; // 801D907C
  c->lr=0x801D9084u; f_801D6170(c); // 801D9080
  c->r[12]=R32(c->r[30]+0x000006F0u); // 801D9084
  cmps(c,0,(int32_t)c->r[12],0); // 801D9088
  if (crb(c,2)) { goto L_801D9410; } // 801D908C
  c->r[3]=c->r[28]|c->r[28]; // 801D9090
  c->r[4]=0u+0x00000001u; // 801D9094
  c->ctr=c->r[12]; // 801D9098
  if (true) { c->lr=0x801D90A0u; dispatch(c,c->ctr); } // 801D909C
  goto L_801D9410; // 801D90A0
L_801D90A4:;
  c->r[3]=c->r[31]+0x00000088u; // 801D90A4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D90A8
  c->lr=0x801D90B0u; f_801D94A0(c); // 801D90AC
  c->r[0]=R8(c->r[30]+0x0000000Cu); // 801D90B0
  cmps(c,0,(int32_t)c->r[0],0); // 801D90B4
  if (crb(c,2)) { goto L_801D9124; } // 801D90B8
  c->lr=0x801D90C0u; f_801D8CF0(c); // 801D90BC
  c->r[31]=c->r[3]|c->r[3]; // 801D90C0
  c->r[3]=c->r[29]|c->r[29]; // 801D90C4
  c->r[4]=c->r[31]+0x00000040u; // 801D90C8
  c->r[5]=0u+0x00000006u; // 801D90CC
  c->lr=0x801D90D4u; f_8020BD24(c); // 801D90D0
  cmps(c,0,(int32_t)c->r[3],0); // 801D90D4
  if (!crb(c,2)) { goto L_801D9410; } // 801D90D8
  c->r[0]=R8(c->r[31]+0x00000059u); // 801D90DC
  cmpu(c,0,c->r[0],0x00000002u); // 801D90E0
  if (!crb(c,2)) { goto L_801D9410; } // 801D90E4
  c->r[3]=c->r[29]|c->r[29]; // 801D90E8
  c->lr=0x801D90F0u; f_801D71D0(c); // 801D90EC
  cmps(c,0,(int32_t)c->r[3],0); // 801D90F0
  if (crb(c,2)) { goto L_801D9118; } // 801D90F4
  c->r[0]=R8(c->r[29]+0x00000006u); // 801D90F8
  cmpu(c,0,c->r[0],0x0000000Cu); // 801D90FC
  if (!crb(c,2)) { goto L_801D9118; } // 801D9100
  c->r[3]=c->r[29]|c->r[29]; // 801D9104
  c->lr=0x801D910Cu; f_801D7050(c); // 801D9108
  c->r[3]=R8(c->r[30]+0x000006E5u); // 801D910C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801D9110
  W8(c->r[30]+0x000006E5u,c->r[0]); // 801D9114
L_801D9118:;
  c->r[0]=0u+0x000000FFu; // 801D9118
  W8(c->r[30]+0x0000000Cu,c->r[0]); // 801D911C
  goto L_801D9410; // 801D9120
L_801D9124:;
  c->r[3]=c->r[29]|c->r[29]; // 801D9124
  c->lr=0x801D912Cu; f_801D71D0(c); // 801D9128
  cmps(c,0,(int32_t)c->r[3],0); // 801D912C
  if (crb(c,2)) { goto L_801D9410; } // 801D9130
  c->r[0]=R8(c->r[29]+0x00000006u); // 801D9134
  cmpu(c,0,c->r[0],0x0000000Cu); // 801D9138
  if (!crb(c,2)) { goto L_801D9410; } // 801D913C
  c->r[3]=c->r[29]|c->r[29]; // 801D9140
  c->lr=0x801D9148u; f_801D71D0(c); // 801D9144
  cmps(c,0,(int32_t)c->r[3],0); // 801D9148
  if (crb(c,2)) { goto L_801D9170; } // 801D914C
  c->r[0]=R8(c->r[3]+0x0000005Bu); // 801D9150
  cmpu(c,0,c->r[0],0x00000003u); // 801D9154
  if (crb(c,2)) { goto L_801D9164; } // 801D9158
  cmpu(c,0,c->r[0],0x00000001u); // 801D915C
  if (!crb(c,2)) { goto L_801D916C; } // 801D9160
L_801D9164:;
  c->lr=0x801D9168u; f_801D73D0(c); // 801D9164
  goto L_801D9170; // 801D9168
L_801D916C:;
  c->lr=0x801D9170u; f_801D7780(c); // 801D916C
L_801D9170:;
  c->r[3]=c->r[29]|c->r[29]; // 801D9170
  c->lr=0x801D9178u; f_801D7050(c); // 801D9174
  c->r[3]=R8(c->r[30]+0x000006E5u); // 801D9178
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801D917C
  W8(c->r[30]+0x000006E5u,c->r[0]); // 801D9180
  goto L_801D9410; // 801D9184
L_801D9188:;
  c->r[3]=c->r[31]+0x00000098u; // 801D9188
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D918C
  c->lr=0x801D9194u; f_801D94A0(c); // 801D9190
  c->r[4]=R8(c->r[30]+0x000006E4u); // 801D9194
  c->r[3]=c->r[31]+0x000000ACu; // 801D9198
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801D919C
  W8(c->r[30]+0x000006E4u,c->r[0]); // 801D91A0
  c->r[4]=R8(c->r[29]+0x00000001u); // 801D91A4
  c->r[5]=R8(c->r[29]+0x00000000u); // 801D91A8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D91AC
  c->lr=0x801D91B4u; f_801D94A0(c); // 801D91B0
  c->r[3]=R8(c->r[29]+0x00000001u); // 801D91B4
  c->lr=0x801D91BCu; f_801D8E50(c); // 801D91B8
  c->lr=0x801D91C0u; f_801D71D0(c); // 801D91BC
  cmps(c,0,(int32_t)c->r[3],0); // 801D91C0
  c->r[28]=c->r[3]|c->r[3]; // 801D91C4
  if (crb(c,2)) { goto L_801D9224; } // 801D91C8
  c->r[0]=R8(c->r[3]+0x0000005Bu); // 801D91CC
  cmpu(c,0,c->r[0],0x00000003u); // 801D91D0
  if (crb(c,2)) { goto L_801D91E0; } // 801D91D4
  cmpu(c,0,c->r[0],0x00000001u); // 801D91D8
  if (!crb(c,2)) { goto L_801D91EC; } // 801D91DC
L_801D91E0:;
  c->r[3]=c->r[28]|c->r[28]; // 801D91E0
  c->lr=0x801D91E8u; f_801D74F0(c); // 801D91E4
  goto L_801D9224; // 801D91E8
L_801D91EC:;
  c->lr=0x801D91F0u; f_801D2AB0(c); // 801D91EC
  cmps(c,0,(int32_t)c->r[3],0); // 801D91F0
  if (crb(c,2)) { goto L_801D921C; } // 801D91F4
  c->lr=0x801D91FCu; f_801D2AB0(c); // 801D91F8
  cmps(c,0,(int32_t)c->r[3],0); // 801D91FC
  if (crb(c,2)) { goto L_801D9224; } // 801D9200
  c->r[3]=c->r[28]|c->r[28]; // 801D9204
  c->r[4]=c->r[31]+0x00000070u; // 801D9208
  c->r[5]=0u+0x00000010u; // 801D920C
  c->lr=0x801D9214u; f_8020BD24(c); // 801D9210
  cmps(c,0,(int32_t)c->r[3],0); // 801D9214
  if (!crb(c,2)) { goto L_801D9224; } // 801D9218
L_801D921C:;
  c->r[3]=c->r[28]|c->r[28]; // 801D921C
  c->lr=0x801D9224u; f_801D78A0(c); // 801D9220
L_801D9224:;
  c->r[3]=R8(c->r[29]+0x00000001u); // 801D9224
  c->r[4]=0u+0x00000000u; // 801D9228
  c->lr=0x801D9230u; f_801D8E30(c); // 801D922C
  c->r[3]=R8(c->r[29]+0x00000001u); // 801D9230
  c->r[4]=0u+0x00000000u; // 801D9234
  c->lr=0x801D923Cu; f_801D8E70(c); // 801D9238
  c->r[3]=R8(c->r[29]+0x00000001u); // 801D923C
  c->r[4]=0u+0x00000000u; // 801D9240
  c->lr=0x801D9248u; f_801D8E90(c); // 801D9244
  c->r[12]=R32(c->r[30]+0x000006F0u); // 801D9248
  cmps(c,0,(int32_t)c->r[12],0); // 801D924C
  if (crb(c,2)) { goto L_801D9410; } // 801D9250
  c->r[3]=c->r[28]|c->r[28]; // 801D9254
  c->r[4]=0u+0x00000000u; // 801D9258
  c->ctr=c->r[12]; // 801D925C
  if (true) { c->lr=0x801D9264u; dispatch(c,c->ctr); } // 801D9260
  goto L_801D9410; // 801D9264
L_801D9268:;
  c->r[3]=c->r[31]+0x000000D0u; // 801D9268
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D926C
  c->lr=0x801D9274u; f_801D94A0(c); // 801D9270
  c->r[0]=R8(c->r[29]+0x00000005u); // 801D9274
  c->r[3]=c->r[31]+0x000000E4u; // 801D9278
  W32(c->r[1]+0x00000008u,c->r[0]); // 801D927C
  c->r[4]=R8(c->r[29]+0x00000006u); // 801D9280
  c->r[5]=R8(c->r[29]+0x00000007u); // 801D9284
  c->r[6]=R8(c->r[29]+0x00000000u); // 801D9288
  c->r[7]=R8(c->r[29]+0x00000001u); // 801D928C
  c->r[8]=R8(c->r[29]+0x00000002u); // 801D9290
  c->r[9]=R8(c->r[29]+0x00000003u); // 801D9294
  c->r[10]=R8(c->r[29]+0x00000004u); // 801D9298
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D929C
  c->lr=0x801D92A4u; f_801D94A0(c); // 801D92A0
  c->r[3]=c->r[29]|c->r[29]; // 801D92A4
  c->lr=0x801D92ACu; f_801D71D0(c); // 801D92A8
  c->r[0]=R8(c->r[29]+0x00000007u); // 801D92AC
  c->r[4]=c->r[3]+0x00000040u; // 801D92B0
  W8(c->r[3]+0x00000056u,c->r[0]); // 801D92B4
  c->r[3]=R8(c->r[29]+0x00000007u); // 801D92B8
  c->lr=0x801D92C0u; f_801D8E30(c); // 801D92BC
  c->r[3]=R8(c->r[29]+0x00000007u); // 801D92C0
  c->r[4]=0u+0x00000000u; // 801D92C4
  c->lr=0x801D92CCu; f_801D8E70(c); // 801D92C8
  c->r[3]=R8(c->r[29]+0x00000007u); // 801D92CC
  c->r[4]=0u+0x00000000u; // 801D92D0
  c->lr=0x801D92D8u; f_801D8E90(c); // 801D92D4
  goto L_801D9410; // 801D92D8
L_801D92DC:;
  c->r[3]=c->r[31]+0x00000124u; // 801D92DC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D92E0
  c->lr=0x801D92E8u; f_801D94A0(c); // 801D92E4
  c->r[0]=R8(c->r[29]+0x00000005u); // 801D92E8
  c->r[3]=c->r[31]+0x000000E4u; // 801D92EC
  W32(c->r[1]+0x00000008u,c->r[0]); // 801D92F0
  c->r[4]=R8(c->r[29]+0x00000006u); // 801D92F4
  c->r[5]=R8(c->r[29]+0x00000007u); // 801D92F8
  c->r[6]=R8(c->r[29]+0x00000000u); // 801D92FC
  c->r[7]=R8(c->r[29]+0x00000001u); // 801D9300
  c->r[8]=R8(c->r[29]+0x00000002u); // 801D9304
  c->r[9]=R8(c->r[29]+0x00000003u); // 801D9308
  c->r[10]=R8(c->r[29]+0x00000004u); // 801D930C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D9310
  c->lr=0x801D9318u; f_801D94A0(c); // 801D9314
  goto L_801D9410; // 801D9318
L_801D931C:;
  c->r[0]=R16(c->r[4]+0x00000000u); // 801D931C
  W16(c->r[30]+0x00000744u,c->r[0]); // 801D9320
  c->r[3]=R8(c->r[30]+0x000006E5u); // 801D9324
  c->r[0]=R16(c->r[4]+0x00000002u); // 801D9328
  W16(c->r[30]+0x00000746u,c->r[0]); // 801D932C
  c->r[0]=R16(c->r[4]+0x00000004u); // 801D9330
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801D9334
  if (!crb(c,0)) { goto L_801D9350; } // 801D9338
  c->r[3]=c->r[31]+0x00000138u; // 801D933C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D9340
  c->lr=0x801D9348u; f_801899B0(c); // 801D9344
  c->r[0]=R16(c->r[29]+0x00000004u); // 801D9348
  W8(c->r[30]+0x000006E5u,c->r[0]); // 801D934C
L_801D9350:;
  c->r[30]=c->r[29]|c->r[29]; // 801D9350
  c->r[28]=0u+0x00000000u; // 801D9354
  goto L_801D9384; // 801D9358
L_801D935C:;
  c->r[3]=R8(c->r[30]+0x00000006u); // 801D935C
  cmpu(c,0,c->r[3],0x00000010u); // 801D9360
  if (!crb(c,0)) { goto L_801D937C; } // 801D9364
  c->r[4]=R16(c->r[30]+0x00000008u); // 801D9368
  c->lr=0x801D9370u; f_801D8E70(c); // 801D936C
  c->r[3]=R8(c->r[30]+0x00000006u); // 801D9370
  c->r[4]=R16(c->r[30]+0x0000000Au); // 801D9374
  c->lr=0x801D937Cu; f_801D8E90(c); // 801D9378
L_801D937C:;
  c->r[30]=c->r[30]+0x00000006u; // 801D937C
  c->r[28]=c->r[28]+0x00000001u; // 801D9380
L_801D9384:;
  c->r[0]=R16(c->r[29]+0x00000004u); // 801D9384
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 801D9388
  if (crb(c,0)) { IRQCHK(c); goto L_801D935C; } // 801D938C
  goto L_801D9410; // 801D9390
L_801D9394:;
  c->r[3]=c->r[31]+0x00000160u; // 801D9394
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D9398
  c->lr=0x801D93A0u; f_801D94A0(c); // 801D939C
  goto L_801D9410; // 801D93A0
L_801D93A4:;
  c->r[3]=c->r[31]+0x00000174u; // 801D93A4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D93A8
  c->lr=0x801D93B0u; f_801D94A0(c); // 801D93AC
  goto L_801D9410; // 801D93B0
L_801D93B4:;
  c->r[3]=c->r[31]+0x00000188u; // 801D93B4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D93B8
  c->lr=0x801D93C0u; f_801D94A0(c); // 801D93BC
  goto L_801D9410; // 801D93C0
L_801D93C4:;
  c->r[3]=c->r[31]+0x000001A0u; // 801D93C4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D93C8
  c->lr=0x801D93D0u; f_801D94A0(c); // 801D93CC
  goto L_801D9410; // 801D93D0
L_801D93D4:;
  c->r[3]=c->r[31]+0x000001B8u; // 801D93D4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D93D8
  c->lr=0x801D93E0u; f_801D94A0(c); // 801D93DC
  goto L_801D9410; // 801D93E0
L_801D93E4:;
  c->r[3]=c->r[31]+0x000001D0u; // 801D93E4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D93E8
  c->lr=0x801D93F0u; f_801D94A0(c); // 801D93EC
  goto L_801D9410; // 801D93F0
L_801D93F4:;
  c->r[3]=c->r[31]+0x000001E8u; // 801D93F4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D93F8
  c->lr=0x801D9400u; f_801D94A0(c); // 801D93FC
  goto L_801D9410; // 801D9400
L_801D9404:;
  c->r[3]=c->r[31]+0x00000200u; // 801D9404
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D9408
  c->lr=0x801D9410u; f_801D94A0(c); // 801D940C
L_801D9410:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D9410
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D9414
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D9418
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D941C
  c->r[28]=R32(c->r[1]+0x00000010u); // 801D9420
  c->lr=c->r[0]; // 801D9424
  c->r[1]=c->r[1]+0x00000020u; // 801D9428
  return; // 801D942C
}

// bta_hh_co_data
void f_801D9430(Ctx* __restrict c) {
  trace_call(0x801D9430u);
  cmpu(c,0,c->r[8],0x00000003u); // 801D9430
  c->r[6]=0u+0x802E0000u; // 801D9434
  c->r[6]=c->r[6]+0xFFFF9DC0u; // 801D9438
  if (!crb(c,2)) { goto L_801D9454; } // 801D943C
  c->r[12]=R32(c->r[6]+0x000006ECu); // 801D9440
  cmps(c,0,(int32_t)c->r[12],0); // 801D9444
  if (crb(c,2)) return; // 801D9448
  c->ctr=c->r[12]; // 801D944C
  if (true) { dispatch(c,c->ctr); return; } // 801D9450
L_801D9454:;
  c->r[3]=0u+0x80280000u; // 801D9454
  c->r[4]=c->r[8]|c->r[8]; // 801D9458
  c->r[3]=c->r[3]+0xFFFFDF10u; // 801D945C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D9460
  f_801D94A0(c); return; // 801D9464
  return; // 801D9468
}

// bta_hh_co_open
void f_801D9470(Ctx* __restrict c) {
  trace_call(0x801D9470u);
  c->r[3]=0u+0x80280000u; // 801D9470
  c->r[3]=c->r[3]+0xFFFFDF28u; // 801D9474
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D9478
  f_801D94A0(c); return; // 801D947C
}

// bta_hh_co_close
void f_801D9480(Ctx* __restrict c) {
  trace_call(0x801D9480u);
  c->r[3]=0u+0x80280000u; // 801D9480
  c->r[3]=c->r[3]+0xFFFFDF3Cu; // 801D9484
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D9488
  f_801D94A0(c); return; // 801D948C
}

// bta_dm_co_get_compress_memory
void f_801D9490(Ctx* __restrict c) {
  trace_call(0x801D9490u);
  c->r[3]=0u+0x00000000u; // 801D9490
  return; // 801D9494
}

// WUD_DEBUGPrint
void f_801D94A0(Ctx* __restrict c) {
  trace_call(0x801D94A0u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D94A0
  if (!crb(c,6)) { goto L_801D94C8; } // 801D94A4
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 801D94A8
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 801D94AC
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[3]);} // 801D94B0
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[4]);} // 801D94B4
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[5]);} // 801D94B8
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[6]);} // 801D94BC
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[7]);} // 801D94C0
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[8]);} // 801D94C4
L_801D94C8:;
  W32(c->r[1]+0x00000008u,c->r[3]); // 801D94C8
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801D94CC
  W32(c->r[1]+0x00000010u,c->r[5]); // 801D94D0
  W32(c->r[1]+0x00000014u,c->r[6]); // 801D94D4
  W32(c->r[1]+0x00000018u,c->r[7]); // 801D94D8
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 801D94DC
  W32(c->r[1]+0x00000020u,c->r[9]); // 801D94E0
  W32(c->r[1]+0x00000024u,c->r[10]); // 801D94E4
  c->r[1]=c->r[1]+0x00000070u; // 801D94E8
  return; // 801D94EC
}

// gki_init_free_queue
void f_801D94F0(Ctx* __restrict c) {
  trace_call(0x801D94F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D94F0
  c->r[0]=c->lr; // 801D94F4
  W32(c->r[1]+0x00000044u,c->r[0]); // 801D94F8
  c->r[11]=c->r[1]+0x00000040u; // 801D94FC
  c->lr=0x801D9504u; { W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D9500
  c->r[7]=c->r[4]+0x00000003u; // 801D9504
  c->r[4]=0u+0x802E0000u; // 801D9508
  c->r[9]=rotl(c->r[7],0)&0xFFFFFFFCu; // 801D950C
  c->r[25]=rotl(c->r[3],2)&0x000003FCu; // 801D9510
  c->r[26]=c->r[9]+0x0000000Cu; // 801D9514
  c->r[4]=c->r[4]+0xFFFFBF68u; // 801D9518
  c->r[8]=rotl(c->r[26],0)&0x0000FFFFu; // 801D951C
  c->r[12]=rotl(c->r[7],0)&0x0000FFFCu; // 801D9520
  c->r[10]=c->r[4]+0x00000054u; // 801D9524
  c->r[4]=rotl(c->r[3],1)&0x000001FEu; // 801D9528
  c->r[11]=c->r[10]+0x00030000u; // 801D952C
  c->r[0]=rotl(c->r[3],4)&0x00000FF0u; // 801D9530
  c->r[25]=c->r[11]+c->r[25]; // 801D9534
  cmps(c,0,(int32_t)c->r[5],0); // 801D9538
  c->r[24]=(uint32_t)((int32_t)c->r[8]*(int32_t)c->r[5]); // 801D953C
  W32(c->r[25]+0xFFFF8A1Cu,c->r[6]); // 801D9540
  c->r[7]=c->r[11]+c->r[4]; // 801D9544
  c->r[11]=c->r[11]+c->r[0]; // 801D9548
  c->r[4]=c->r[6]+c->r[24]; // 801D954C
  W32(c->r[25]+0xFFFF8A40u,c->r[4]); // 801D9550
  c->r[4]=0u+0x00000000u; // 801D9554
  W16(c->r[7]+0xFFFF8A64u,c->r[26]); // 801D9558
  c->r[7]=0u+0x00000000u; // 801D955C
  W16(c->r[11]+0xFFFF8994u,c->r[12]); // 801D9560
  W16(c->r[11]+0xFFFF8996u,c->r[5]); // 801D9564
  W16(c->r[11]+0xFFFF8998u,c->r[4]); // 801D9568
  W16(c->r[11]+0xFFFF899Au,c->r[4]); // 801D956C
  W32(c->r[11]+0xFFFF898Cu,c->r[6]); // 801D9570
  if (crb(c,2)) { goto L_801D96E4; } // 801D9574
  cmpu(c,0,c->r[5],0x00000008u); // 801D9578
  c->r[11]=c->r[5]+0x00010000u; // 801D957C
  c->r[11]=c->r[11]+0xFFFFFFF8u; // 801D9580
  if (!crb(c,1)) { goto L_801D9698; } // 801D9584
  c->r[12]=rotl(c->r[11],0)&0x0000FFFFu; // 801D9588
  c->r[27]=0u+0xDDBB0000u; // 801D958C
  c->r[11]=c->r[12]+0x00000007u; // 801D9590
  c->r[24]=0u+0x000000F0u; // 801D9594
  c->r[11]=rotl(c->r[11],29)&0x1FFFFFFFu; // 801D9598
  c->r[26]=c->r[27]+0xFFFFDDBAu; // 801D959C
  c->r[25]=0u+0x00000000u; // 801D95A0
  c->ctr=c->r[11]; // 801D95A4
  cmpu(c,0,c->r[12],0x00000000u); // 801D95A8
  if (!crb(c,1)) { goto L_801D9698; } // 801D95AC
L_801D95B0:;
  W8(c->r[6]+0x00000005u,c->r[24]); // 801D95B0
  c->r[18]=c->r[6]+c->r[8]; // 801D95B4
  c->r[19]=c->r[18]+c->r[8]; // 801D95B8
  c->r[4]=c->r[6]+c->r[9]; // 801D95BC
  W8(c->r[6]+0x00000004u,c->r[3]); // 801D95C0
  c->r[20]=c->r[19]+c->r[8]; // 801D95C4
  c->r[21]=c->r[20]+c->r[8]; // 801D95C8
  c->r[27]=c->r[18]+c->r[9]; // 801D95CC
  W8(c->r[6]+0x00000006u,c->r[25]); // 801D95D0
  c->r[22]=c->r[21]+c->r[8]; // 801D95D4
  c->r[23]=c->r[22]+c->r[8]; // 801D95D8
  c->r[28]=c->r[19]+c->r[9]; // 801D95DC
  W32(c->r[4]+0x00000008u,c->r[26]); // 801D95E0
  c->r[4]=c->r[23]+c->r[8]; // 801D95E4
  c->r[31]=c->r[20]+c->r[9]; // 801D95E8
  c->r[30]=c->r[21]+c->r[9]; // 801D95EC
  W32(c->r[6]+0x00000000u,c->r[18]); // 801D95F0
  c->r[29]=c->r[22]+c->r[9]; // 801D95F4
  c->r[12]=c->r[23]+c->r[9]; // 801D95F8
  c->r[11]=c->r[4]+c->r[9]; // 801D95FC
  W8(c->r[18]+0x00000005u,c->r[24]); // 801D9600
  c->r[6]=c->r[4]+c->r[8]; // 801D9604
  c->r[7]=c->r[7]+0x00000008u; // 801D9608
  W8(c->r[18]+0x00000004u,c->r[3]); // 801D960C
  W8(c->r[18]+0x00000006u,c->r[25]); // 801D9610
  W32(c->r[27]+0x00000008u,c->r[26]); // 801D9614
  W32(c->r[18]+0x00000000u,c->r[19]); // 801D9618
  W8(c->r[19]+0x00000005u,c->r[24]); // 801D961C
  W8(c->r[19]+0x00000004u,c->r[3]); // 801D9620
  W8(c->r[19]+0x00000006u,c->r[25]); // 801D9624
  W32(c->r[28]+0x00000008u,c->r[26]); // 801D9628
  W32(c->r[18]+c->r[8],c->r[20]); // 801D962C
  W8(c->r[20]+0x00000005u,c->r[24]); // 801D9630
  W8(c->r[20]+0x00000004u,c->r[3]); // 801D9634
  W8(c->r[20]+0x00000006u,c->r[25]); // 801D9638
  W32(c->r[31]+0x00000008u,c->r[26]); // 801D963C
  W32(c->r[19]+c->r[8],c->r[21]); // 801D9640
  W8(c->r[21]+0x00000005u,c->r[24]); // 801D9644
  W8(c->r[21]+0x00000004u,c->r[3]); // 801D9648
  W8(c->r[21]+0x00000006u,c->r[25]); // 801D964C
  W32(c->r[30]+0x00000008u,c->r[26]); // 801D9650
  W32(c->r[20]+c->r[8],c->r[22]); // 801D9654
  W8(c->r[22]+0x00000005u,c->r[24]); // 801D9658
  W8(c->r[22]+0x00000004u,c->r[3]); // 801D965C
  W8(c->r[22]+0x00000006u,c->r[25]); // 801D9660
  W32(c->r[29]+0x00000008u,c->r[26]); // 801D9664
  W32(c->r[21]+c->r[8],c->r[23]); // 801D9668
  W8(c->r[23]+0x00000005u,c->r[24]); // 801D966C
  W8(c->r[23]+0x00000004u,c->r[3]); // 801D9670
  W8(c->r[23]+0x00000006u,c->r[25]); // 801D9674
  W32(c->r[12]+0x00000008u,c->r[26]); // 801D9678
  W32(c->r[22]+c->r[8],c->r[4]); // 801D967C
  W8(c->r[4]+0x00000005u,c->r[24]); // 801D9680
  W8(c->r[4]+0x00000004u,c->r[3]); // 801D9684
  W8(c->r[4]+0x00000006u,c->r[25]); // 801D9688
  W32(c->r[11]+0x00000008u,c->r[26]); // 801D968C
  W32(c->r[23]+c->r[8],c->r[6]); // 801D9690
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D95B0; } // 801D9694
L_801D9698:;
  c->r[12]=rotl(c->r[7],0)&0x0000FFFFu; // 801D9698
  c->r[31]=0u+0xDDBB0000u; // 801D969C
  c->r[11]=c->r[5]-c->r[12]; // 801D96A0
  c->r[29]=0u+0x000000F0u; // 801D96A4
  c->r[31]=c->r[31]+0xFFFFDDBAu; // 801D96A8
  c->r[30]=0u+0x00000000u; // 801D96AC
  c->ctr=c->r[11]; // 801D96B0
  cmpu(c,0,c->r[12],c->r[5]); // 801D96B4
  if (!crb(c,0)) { goto L_801D96E4; } // 801D96B8
L_801D96BC:;
  W8(c->r[6]+0x00000005u,c->r[29]); // 801D96BC
  c->r[5]=c->r[6]+c->r[9]; // 801D96C0
  c->r[4]=c->r[6]|c->r[6]; // 801D96C4
  c->r[7]=c->r[7]+0x00000001u; // 801D96C8
  W8(c->r[6]+0x00000004u,c->r[3]); // 801D96CC
  W8(c->r[6]+0x00000006u,c->r[30]); // 801D96D0
  c->r[6]=c->r[6]+c->r[8]; // 801D96D4
  W32(c->r[5]+0x00000008u,c->r[31]); // 801D96D8
  W32(c->r[4]+0x00000000u,c->r[6]); // 801D96DC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D96BC; } // 801D96E0
L_801D96E4:;
  c->r[3]=c->r[10]+0x00030000u; // 801D96E4
  c->r[5]=0u+0x00000000u; // 801D96E8
  W32(c->r[4]+0x00000000u,c->r[5]); // 801D96EC
  c->r[3]=c->r[3]+c->r[0]; // 801D96F0
  c->r[11]=c->r[1]+0x00000040u; // 801D96F4
  W32(c->r[3]+0xFFFF8990u,c->r[4]); // 801D96F8
  c->lr=0x801D9700u; { c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D96FC
  c->r[0]=R32(c->r[1]+0x00000044u); // 801D9700
  c->lr=c->r[0]; // 801D9704
  c->r[1]=c->r[1]+0x00000040u; // 801D9708
  return; // 801D970C
}

// gki_buffer_init
void f_801D9710(Ctx* __restrict c) {
  trace_call(0x801D9710u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D9710
  c->r[0]=c->lr; // 801D9714
  c->r[3]=0u+0x802E0000u; // 801D9718
  c->r[6]=0u+0x00000000u; // 801D971C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D9720
  c->r[0]=0u+0x00000002u; // 801D9724
  c->r[3]=c->r[3]+0xFFFFBF68u; // 801D9728
  c->r[4]=0u+0x00000000u; // 801D972C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D9730
  c->r[31]=c->r[3]+0x00000054u; // 801D9734
  c->ctr=c->r[0]; // 801D9738
L_801D973C:;
  c->r[0]=rotl(c->r[6],4)&0x00000FF0u; // 801D973C
  c->r[6]=c->r[6]+0x00000001u; // 801D9740
  c->r[5]=c->r[31]+c->r[0]; // 801D9744
  c->r[3]=c->r[5]+0x00030000u; // 801D9748
  c->r[0]=rotl(c->r[6],4)&0x00000FF0u; // 801D974C
  W32(c->r[3]+0xFFFF888Cu,c->r[4]); // 801D9750
  c->r[5]=c->r[31]+c->r[0]; // 801D9754
  c->r[6]=c->r[6]+0x00000001u; // 801D9758
  W32(c->r[3]+0xFFFF890Cu,c->r[4]); // 801D975C
  c->r[0]=rotl(c->r[6],4)&0x00000FF0u; // 801D9760
  c->r[6]=c->r[6]+0x00000001u; // 801D9764
  W32(c->r[3]+0xFFFF8890u,c->r[4]); // 801D9768
  W32(c->r[3]+0xFFFF8910u,c->r[4]); // 801D976C
  W32(c->r[3]+0xFFFF8894u,c->r[4]); // 801D9770
  W32(c->r[3]+0xFFFF8914u,c->r[4]); // 801D9774
  W32(c->r[3]+0xFFFF8898u,c->r[4]); // 801D9778
  W32(c->r[3]+0xFFFF8918u,c->r[4]); // 801D977C
  c->r[3]=c->r[5]+0x00030000u; // 801D9780
  c->r[5]=c->r[31]+c->r[0]; // 801D9784
  c->r[0]=rotl(c->r[6],4)&0x00000FF0u; // 801D9788
  W32(c->r[3]+0xFFFF888Cu,c->r[4]); // 801D978C
  c->r[6]=c->r[6]+0x00000001u; // 801D9790
  W32(c->r[3]+0xFFFF890Cu,c->r[4]); // 801D9794
  W32(c->r[3]+0xFFFF8890u,c->r[4]); // 801D9798
  W32(c->r[3]+0xFFFF8910u,c->r[4]); // 801D979C
  W32(c->r[3]+0xFFFF8894u,c->r[4]); // 801D97A0
  W32(c->r[3]+0xFFFF8914u,c->r[4]); // 801D97A4
  W32(c->r[3]+0xFFFF8898u,c->r[4]); // 801D97A8
  W32(c->r[3]+0xFFFF8918u,c->r[4]); // 801D97AC
  c->r[3]=c->r[5]+0x00030000u; // 801D97B0
  c->r[5]=c->r[31]+c->r[0]; // 801D97B4
  W32(c->r[3]+0xFFFF888Cu,c->r[4]); // 801D97B8
  W32(c->r[3]+0xFFFF890Cu,c->r[4]); // 801D97BC
  W32(c->r[3]+0xFFFF8890u,c->r[4]); // 801D97C0
  W32(c->r[3]+0xFFFF8910u,c->r[4]); // 801D97C4
  W32(c->r[3]+0xFFFF8894u,c->r[4]); // 801D97C8
  W32(c->r[3]+0xFFFF8914u,c->r[4]); // 801D97CC
  W32(c->r[3]+0xFFFF8898u,c->r[4]); // 801D97D0
  W32(c->r[3]+0xFFFF8918u,c->r[4]); // 801D97D4
  c->r[3]=c->r[5]+0x00030000u; // 801D97D8
  W32(c->r[3]+0xFFFF888Cu,c->r[4]); // 801D97DC
  W32(c->r[3]+0xFFFF890Cu,c->r[4]); // 801D97E0
  W32(c->r[3]+0xFFFF8890u,c->r[4]); // 801D97E4
  W32(c->r[3]+0xFFFF8910u,c->r[4]); // 801D97E8
  W32(c->r[3]+0xFFFF8894u,c->r[4]); // 801D97EC
  W32(c->r[3]+0xFFFF8914u,c->r[4]); // 801D97F0
  W32(c->r[3]+0xFFFF8898u,c->r[4]); // 801D97F4
  W32(c->r[3]+0xFFFF8918u,c->r[4]); // 801D97F8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D973C; } // 801D97FC
  c->r[0]=0u+0x00000003u; // 801D9800
  c->r[10]=0u+0x00000000u; // 801D9804
  c->r[7]=0u+0x00000000u; // 801D9808
  c->ctr=c->r[0]; // 801D980C
L_801D9810:;
  c->r[0]=rotl(c->r[10],2)&0x000003FCu; // 801D9810
  c->r[4]=rotl(c->r[10],1)&0x000001FEu; // 801D9814
  c->r[8]=c->r[31]+c->r[0]; // 801D9818
  c->r[6]=c->r[8]+0x00030000u; // 801D981C
  c->r[0]=rotl(c->r[10],4)&0x00000FF0u; // 801D9820
  c->r[4]=c->r[4]+0x00030000u; // 801D9824
  W32(c->r[6]+0xFFFF8A1Cu,c->r[7]); // 801D9828
  c->r[9]=c->r[31]+c->r[0]; // 801D982C
  c->r[10]=c->r[10]+0x00000001u; // 801D9830
  c->r[5]=c->r[4]+0xFFFF8A64u; // 801D9834
  W32(c->r[6]+0xFFFF8A40u,c->r[7]); // 801D9838
  c->r[3]=c->r[9]+0x00030000u; // 801D983C
  c->r[0]=rotl(c->r[10],2)&0x000003FCu; // 801D9840
  W16(c->r[31]+c->r[5],c->r[7]); // 801D9844
  c->r[8]=c->r[31]+c->r[0]; // 801D9848
  c->r[4]=rotl(c->r[10],1)&0x000001FEu; // 801D984C
  c->r[0]=rotl(c->r[10],4)&0x00000FF0u; // 801D9850
  W32(c->r[3]+0xFFFF898Cu,c->r[7]); // 801D9854
  c->r[4]=c->r[4]+0x00030000u; // 801D9858
  c->r[6]=c->r[8]+0x00030000u; // 801D985C
  c->r[9]=c->r[31]+c->r[0]; // 801D9860
  W32(c->r[3]+0xFFFF8990u,c->r[7]); // 801D9864
  c->r[10]=c->r[10]+0x00000001u; // 801D9868
  c->r[5]=c->r[4]+0xFFFF8A64u; // 801D986C
  W16(c->r[3]+0xFFFF8994u,c->r[7]); // 801D9870
  c->r[0]=rotl(c->r[10],2)&0x000003FCu; // 801D9874
  c->r[8]=c->r[31]+c->r[0]; // 801D9878
  c->r[4]=rotl(c->r[10],1)&0x000001FEu; // 801D987C
  W16(c->r[3]+0xFFFF8996u,c->r[7]); // 801D9880
  c->r[0]=rotl(c->r[10],4)&0x00000FF0u; // 801D9884
  c->r[4]=c->r[4]+0x00030000u; // 801D9888
  c->r[10]=c->r[10]+0x00000001u; // 801D988C
  W16(c->r[3]+0xFFFF8998u,c->r[7]); // 801D9890
  W16(c->r[3]+0xFFFF899Au,c->r[7]); // 801D9894
  c->r[3]=c->r[9]+0x00030000u; // 801D9898
  c->r[9]=c->r[31]+c->r[0]; // 801D989C
  W32(c->r[6]+0xFFFF8A1Cu,c->r[7]); // 801D98A0
  W32(c->r[6]+0xFFFF8A40u,c->r[7]); // 801D98A4
  c->r[6]=c->r[8]+0x00030000u; // 801D98A8
  W16(c->r[31]+c->r[5],c->r[7]); // 801D98AC
  c->r[5]=c->r[4]+0xFFFF8A64u; // 801D98B0
  W32(c->r[3]+0xFFFF898Cu,c->r[7]); // 801D98B4
  W32(c->r[3]+0xFFFF8990u,c->r[7]); // 801D98B8
  W16(c->r[3]+0xFFFF8994u,c->r[7]); // 801D98BC
  W16(c->r[3]+0xFFFF8996u,c->r[7]); // 801D98C0
  W16(c->r[3]+0xFFFF8998u,c->r[7]); // 801D98C4
  W16(c->r[3]+0xFFFF899Au,c->r[7]); // 801D98C8
  c->r[3]=c->r[9]+0x00030000u; // 801D98CC
  W32(c->r[6]+0xFFFF8A1Cu,c->r[7]); // 801D98D0
  W32(c->r[6]+0xFFFF8A40u,c->r[7]); // 801D98D4
  W16(c->r[31]+c->r[5],c->r[7]); // 801D98D8
  W32(c->r[3]+0xFFFF898Cu,c->r[7]); // 801D98DC
  W32(c->r[3]+0xFFFF8990u,c->r[7]); // 801D98E0
  W16(c->r[3]+0xFFFF8994u,c->r[7]); // 801D98E4
  W16(c->r[3]+0xFFFF8996u,c->r[7]); // 801D98E8
  W16(c->r[3]+0xFFFF8998u,c->r[7]); // 801D98EC
  W16(c->r[3]+0xFFFF899Au,c->r[7]); // 801D98F0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D9810; } // 801D98F4
  c->r[4]=0u+0x00010000u; // 801D98F8
  c->r[3]=c->r[31]+0x00030000u; // 801D98FC
  c->r[0]=c->r[4]+0xFFFFFFF0u; // 801D9900
  W16(c->r[3]+0xFFFF8A7Cu,c->r[0]); // 801D9904
  c->r[6]=c->r[31]|c->r[31]; // 801D9908
  c->r[3]=0u+0x00000000u; // 801D990C
  c->r[4]=0u+0x00000040u; // 801D9910
  c->r[5]=0u+0x00000030u; // 801D9914
  c->lr=0x801D991Cu; f_801D94F0(c); // 801D9918
  c->r[6]=c->r[31]+0x00000E40u; // 801D991C
  c->r[3]=0u+0x00000001u; // 801D9920
  c->r[4]=0u+0x00000080u; // 801D9924
  c->r[5]=0u+0x0000001Au; // 801D9928
  c->lr=0x801D9930u; f_801D94F0(c); // 801D992C
  c->r[6]=c->r[31]+0x00001C78u; // 801D9930
  c->r[3]=0u+0x00000002u; // 801D9934
  c->r[4]=0u+0x00000294u; // 801D9938
  c->r[5]=0u+0x0000002Du; // 801D993C
  c->lr=0x801D9944u; f_801D94F0(c); // 801D9940
  c->r[6]=c->r[31]+0x00010000u; // 801D9944
  c->r[3]=0u+0x00000003u; // 801D9948
  c->r[4]=0u+0x00000708u; // 801D994C
  c->r[5]=0u+0x0000001Eu; // 801D9950
  c->r[6]=c->r[6]+0xFFFF9298u; // 801D9954
  c->lr=0x801D995Cu; f_801D94F0(c); // 801D9958
  c->r[6]=c->r[31]+0x00010000u; // 801D995C
  c->r[3]=0u+0x00000004u; // 801D9960
  c->r[4]=0u+0x00002000u; // 801D9964
  c->r[5]=0u+0x00000009u; // 801D9968
  c->r[6]=c->r[6]+0x000066F0u; // 801D996C
  c->lr=0x801D9974u; f_801D94F0(c); // 801D9970
  c->r[6]=c->r[31]+0x00030000u; // 801D9974
  c->r[0]=0u+0x00000000u; // 801D9978
  W8(c->r[6]+0xFFFF8A7Eu,c->r[0]); // 801D997C
  c->r[0]=0u+0x00000001u; // 801D9980
  c->r[5]=0u+0x00000002u; // 801D9984
  c->r[4]=0u+0x00000003u; // 801D9988
  W8(c->r[6]+0xFFFF8A7Fu,c->r[0]); // 801D998C
  c->r[3]=0u+0x00000004u; // 801D9990
  c->r[0]=0u+0x00000005u; // 801D9994
  W8(c->r[6]+0xFFFF8A80u,c->r[5]); // 801D9998
  W8(c->r[6]+0xFFFF8A81u,c->r[4]); // 801D999C
  W8(c->r[6]+0xFFFF8A82u,c->r[3]); // 801D99A0
  W8(c->r[6]+0xFFFF8A87u,c->r[0]); // 801D99A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D99A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D99AC
  c->lr=c->r[0]; // 801D99B0
  c->r[1]=c->r[1]+0x00000010u; // 801D99B4
  return; // 801D99B8
}

// GKI_init_q
void f_801D99C0(Ctx* __restrict c) {
  trace_call(0x801D99C0u);
  c->r[0]=0u+0x00000000u; // 801D99C0
  W32(c->r[3]+0x00000004u,c->r[0]); // 801D99C4
  W32(c->r[3]+0x00000000u,c->r[0]); // 801D99C8
  W16(c->r[3]+0x00000008u,c->r[0]); // 801D99CC
  return; // 801D99D0
}

// GKI_getbuf
void f_801D99E0(Ctx* __restrict c) {
  trace_call(0x801D99E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D99E0
  c->r[0]=c->lr; // 801D99E4
  c->r[4]=0u+0x802E0000u; // 801D99E8
  cmps(c,0,(int32_t)c->r[3],0); // 801D99EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D99F0
  c->r[4]=c->r[4]+0xFFFFBF68u; // 801D99F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D99F8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D99FC
  c->r[30]=c->r[4]+0x00000054u; // 801D9A00
  if (!crb(c,2)) { goto L_801D9A28; } // 801D9A04
  c->r[3]=0u+0x00010000u; // 801D9A08
  c->r[4]=0u+0x80280000u; // 801D9A0C
  c->r[0]=c->r[3]+0xFFFFFFF6u; // 801D9A10
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801D9A14
  c->r[4]=c->r[4]+0xFFFFDF50u; // 801D9A18
  c->lr=0x801D9A20u; f_801DB1E0(c); // 801D9A1C
  c->r[3]=0u+0x00000000u; // 801D9A20
  goto L_801D9B68; // 801D9A24
L_801D9A28:;
  c->r[4]=c->r[30]+0x00030000u; // 801D9A28
  c->r[31]=0u+0x00000000u; // 801D9A2C
  c->r[5]=R8(c->r[4]+0xFFFF8A87u); // 801D9A30
  goto L_801D9A64; // 801D9A34
L_801D9A38:;
  c->r[4]=rotl(c->r[31],0)&0x000000FFu; // 801D9A38
  c->r[4]=c->r[4]+0x00030000u; // 801D9A3C
  c->r[0]=c->r[4]+0xFFFF8A7Eu; // 801D9A40
  c->r[0]=R8(c->r[30]+c->r[0]); // 801D9A44
  c->r[4]=rotl(c->r[0],4)&0xFFFFFFF0u; // 801D9A48
  c->r[4]=c->r[4]+0x00030000u; // 801D9A4C
  c->r[0]=c->r[4]+0xFFFF8994u; // 801D9A50
  c->r[0]=R16(c->r[30]+c->r[0]); // 801D9A54
  cmpu(c,0,c->r[3],c->r[0]); // 801D9A58
  if (!crb(c,1)) { goto L_801D9A70; } // 801D9A5C
  c->r[31]=c->r[31]+0x00000001u; // 801D9A60
L_801D9A64:;
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 801D9A64
  cmpu(c,0,c->r[0],c->r[5]); // 801D9A68
  if (crb(c,0)) { IRQCHK(c); goto L_801D9A38; } // 801D9A6C
L_801D9A70:;
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 801D9A70
  cmpu(c,0,c->r[0],c->r[5]); // 801D9A74
  if (!crb(c,2)) { goto L_801D9A9C; } // 801D9A78
  c->r[3]=0u+0x00010000u; // 801D9A7C
  c->r[4]=0u+0x80280000u; // 801D9A80
  c->r[0]=c->r[3]+0xFFFFFFF7u; // 801D9A84
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801D9A88
  c->r[4]=c->r[4]+0xFFFFDF68u; // 801D9A8C
  c->lr=0x801D9A94u; f_801DB1E0(c); // 801D9A90
  c->r[3]=0u+0x00000000u; // 801D9A94
  goto L_801D9B68; // 801D9A98
L_801D9A9C:;
  c->lr=0x801D9AA0u; f_801DB190(c); // 801D9A9C
  c->r[6]=c->r[30]+0x00030000u; // 801D9AA0
  c->r[5]=0u+0x00000001u; // 801D9AA4
  c->r[7]=R8(c->r[6]+0xFFFF8A87u); // 801D9AA8
  goto L_801D9B54; // 801D9AAC
L_801D9AB0:;
  c->r[4]=rotl(c->r[31],0)&0x000000FFu; // 801D9AB0
  c->r[3]=R16(c->r[6]+0xFFFF8A7Cu); // 801D9AB4
  c->r[4]=c->r[4]+0x00030000u; // 801D9AB8
  c->r[0]=c->r[4]+0xFFFF8A7Eu; // 801D9ABC
  c->r[4]=R8(c->r[30]+c->r[0]); // 801D9AC0
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[5]<<((c->r[4])&31)); // 801D9AC4
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 801D9AC8
  if (!crb(c,2)) { goto L_801D9B50; } // 801D9ACC
  c->r[0]=rotl(c->r[4],4)&0x00000FF0u; // 801D9AD0
  c->r[4]=c->r[6]+c->r[0]; // 801D9AD4
  c->r[3]=R16(c->r[4]+0xFFFF8998u); // 801D9AD8
  c->r[0]=R16(c->r[4]+0xFFFF8996u); // 801D9ADC
  cmpu(c,0,c->r[3],c->r[0]); // 801D9AE0
  if (!crb(c,0)) { goto L_801D9B50; } // 801D9AE4
  c->r[30]=R32(c->r[4]+0xFFFF898Cu); // 801D9AE8
  c->r[0]=R32(c->r[30]+0x00000000u); // 801D9AEC
  W32(c->r[4]+0xFFFF898Cu,c->r[0]); // 801D9AF0
  cmps(c,0,(int32_t)c->r[0],0); // 801D9AF4
  if (!crb(c,2)) { goto L_801D9B04; } // 801D9AF8
  c->r[0]=0u+0x00000000u; // 801D9AFC
  W32(c->r[4]+0xFFFF8990u,c->r[0]); // 801D9B00
L_801D9B04:;
  c->r[3]=R16(c->r[4]+0xFFFF8998u); // 801D9B04
  c->r[0]=c->r[3]+0x00000001u; // 801D9B08
  W16(c->r[4]+0xFFFF8998u,c->r[0]); // 801D9B0C
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801D9B10
  c->r[0]=R16(c->r[4]+0xFFFF899Au); // 801D9B14
  cmpu(c,0,c->r[3],c->r[0]); // 801D9B18
  if (!crb(c,1)) { goto L_801D9B28; } // 801D9B1C
  c->r[0]=R16(c->r[4]+0xFFFF8998u); // 801D9B20
  W16(c->r[4]+0xFFFF899Au,c->r[0]); // 801D9B24
L_801D9B28:;
  c->lr=0x801D9B2Cu; f_801DB160(c); // 801D9B28
  c->lr=0x801D9B30u; f_801DB150(c); // 801D9B2C
  W8(c->r[30]+0x00000005u,c->r[3]); // 801D9B30
  c->r[4]=0u+0x00000001u; // 801D9B34
  c->r[0]=0u+0x00000000u; // 801D9B38
  c->r[3]=c->r[30]+0x00000008u; // 801D9B3C
  W8(c->r[30]+0x00000006u,c->r[4]); // 801D9B40
  W32(c->r[30]+0x00000000u,c->r[0]); // 801D9B44
  W8(c->r[30]+0x00000007u,c->r[0]); // 801D9B48
  goto L_801D9B68; // 801D9B4C
L_801D9B50:;
  c->r[31]=c->r[31]+0x00000001u; // 801D9B50
L_801D9B54:;
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 801D9B54
  cmpu(c,0,c->r[0],c->r[7]); // 801D9B58
  if (crb(c,0)) { IRQCHK(c); goto L_801D9AB0; } // 801D9B5C
  c->lr=0x801D9B64u; f_801DB160(c); // 801D9B60
  c->r[3]=0u+0x00000000u; // 801D9B64
L_801D9B68:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D9B68
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D9B6C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D9B70
  c->lr=c->r[0]; // 801D9B74
  c->r[1]=c->r[1]+0x00000010u; // 801D9B78
  return; // 801D9B7C
}

// GKI_getpoolbuf
void f_801D9B80(Ctx* __restrict c) {
  trace_call(0x801D9B80u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D9B80
  c->r[0]=c->lr; // 801D9B84
  c->r[4]=0u+0x802E0000u; // 801D9B88
  cmpu(c,0,c->r[3],0x00000009u); // 801D9B8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D9B90
  c->r[4]=c->r[4]+0xFFFFBF68u; // 801D9B94
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D9B98
  c->r[31]=c->r[3]|c->r[3]; // 801D9B9C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D9BA0
  c->r[30]=c->r[4]+0x00000054u; // 801D9BA4
  if (crb(c,0)) { goto L_801D9BB4; } // 801D9BA8
  c->r[3]=0u+0x00000000u; // 801D9BAC
  goto L_801D9C50; // 801D9BB0
L_801D9BB4:;
  c->lr=0x801D9BB8u; f_801DB190(c); // 801D9BB4
  c->r[31]=rotl(c->r[31],4)&0x00000FF0u; // 801D9BB8
  c->r[0]=c->r[30]+0x00030000u; // 801D9BBC
  c->r[4]=c->r[0]+c->r[31]; // 801D9BC0
  c->r[3]=R16(c->r[4]+0xFFFF8998u); // 801D9BC4
  c->r[0]=R16(c->r[4]+0xFFFF8996u); // 801D9BC8
  cmpu(c,0,c->r[3],c->r[0]); // 801D9BCC
  if (!crb(c,0)) { goto L_801D9C3C; } // 801D9BD0
  c->r[31]=R32(c->r[4]+0xFFFF898Cu); // 801D9BD4
  c->r[0]=R32(c->r[31]+0x00000000u); // 801D9BD8
  W32(c->r[4]+0xFFFF898Cu,c->r[0]); // 801D9BDC
  cmps(c,0,(int32_t)c->r[0],0); // 801D9BE0
  if (!crb(c,2)) { goto L_801D9BF0; } // 801D9BE4
  c->r[0]=0u+0x00000000u; // 801D9BE8
  W32(c->r[4]+0xFFFF8990u,c->r[0]); // 801D9BEC
L_801D9BF0:;
  c->r[3]=R16(c->r[4]+0xFFFF8998u); // 801D9BF0
  c->r[0]=c->r[3]+0x00000001u; // 801D9BF4
  W16(c->r[4]+0xFFFF8998u,c->r[0]); // 801D9BF8
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801D9BFC
  c->r[0]=R16(c->r[4]+0xFFFF899Au); // 801D9C00
  cmpu(c,0,c->r[3],c->r[0]); // 801D9C04
  if (!crb(c,1)) { goto L_801D9C14; } // 801D9C08
  c->r[0]=R16(c->r[4]+0xFFFF8998u); // 801D9C0C
  W16(c->r[4]+0xFFFF899Au,c->r[0]); // 801D9C10
L_801D9C14:;
  c->lr=0x801D9C18u; f_801DB160(c); // 801D9C14
  c->lr=0x801D9C1Cu; f_801DB150(c); // 801D9C18
  W8(c->r[31]+0x00000005u,c->r[3]); // 801D9C1C
  c->r[4]=0u+0x00000001u; // 801D9C20
  c->r[0]=0u+0x00000000u; // 801D9C24
  c->r[3]=c->r[31]+0x00000008u; // 801D9C28
  W8(c->r[31]+0x00000006u,c->r[4]); // 801D9C2C
  W32(c->r[31]+0x00000000u,c->r[0]); // 801D9C30
  W8(c->r[31]+0x00000007u,c->r[0]); // 801D9C34
  goto L_801D9C50; // 801D9C38
L_801D9C3C:;
  c->lr=0x801D9C40u; f_801DB160(c); // 801D9C3C
  c->r[0]=c->r[30]+0x00030000u; // 801D9C40
  c->r[3]=c->r[0]+c->r[31]; // 801D9C44
  c->r[3]=R16(c->r[3]+0xFFFF8994u); // 801D9C48
  c->lr=0x801D9C50u; f_801D99E0(c); // 801D9C4C
L_801D9C50:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D9C50
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D9C54
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D9C58
  c->lr=c->r[0]; // 801D9C5C
  c->r[1]=c->r[1]+0x00000010u; // 801D9C60
  return; // 801D9C64
}

// GKI_freebuf
void f_801D9C70(Ctx* __restrict c) {
  trace_call(0x801D9C70u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D9C70
  c->r[0]=c->lr; // 801D9C74
  c->r[5]=0u+0x80280000u; // 801D9C78
  cmps(c,0,(int32_t)c->r[3],0); // 801D9C7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D9C80
  c->r[5]=c->r[5]+0xFFFFDF50u; // 801D9C84
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D9C88
  if (crb(c,2)) { goto L_801D9D08; } // 801D9C8C
  c->r[31]=c->r[3]+0xFFFFFFF8u; // 801D9C90
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 801D9C94
  if (crb(c,2)) { goto L_801D9CA4; } // 801D9C98
  c->r[0]=0u+0x00000000u; // 801D9C9C
  goto L_801D9CD0; // 801D9CA0
L_801D9CA4:;
  c->r[0]=R8(c->r[31]+0x00000004u); // 801D9CA4
  cmpu(c,0,c->r[0],0x00000009u); // 801D9CA8
  if (!crb(c,0)) { goto L_801D9CCC; } // 801D9CAC
  c->r[4]=0u+0x802E0000u; // 801D9CB0
  c->r[0]=rotl(c->r[0],4)&0x00000FF0u; // 801D9CB4
  c->r[4]=c->r[4]+0xFFFFBF68u; // 801D9CB8
  c->r[4]=c->r[4]+0x00030000u; // 801D9CBC
  c->r[4]=c->r[4]+c->r[0]; // 801D9CC0
  c->r[0]=R16(c->r[4]+0xFFFF89E8u); // 801D9CC4
  goto L_801D9CD0; // 801D9CC8
L_801D9CCC:;
  c->r[0]=0u+0x00000000u; // 801D9CCC
L_801D9CD0:;
  c->r[4]=c->r[3]+c->r[0]; // 801D9CD0
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 801D9CD4
  if (crb(c,2)) { goto L_801D9CE4; } // 801D9CD8
  c->r[0]=0u+0x00000001u; // 801D9CDC
  goto L_801D9D00; // 801D9CE0
L_801D9CE4:;
  c->r[3]=0u+0xDDBB0000u; // 801D9CE4
  c->r[4]=R32(c->r[4]+0x00000000u); // 801D9CE8
  c->r[0]=c->r[3]+0xFFFFDDBAu; // 801D9CEC
  c->r[3]=c->r[0]-c->r[4]; // 801D9CF0
  c->r[0]=c->r[4]-c->r[0]; // 801D9CF4
  c->r[0]=c->r[3]|c->r[0]; // 801D9CF8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801D9CFC
L_801D9D00:;
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; cr0(c,c->r[0]); // 801D9D00
  if (crb(c,2)) { goto L_801D9D20; } // 801D9D04
L_801D9D08:;
  c->r[3]=0u+0x00010000u; // 801D9D08
  c->r[4]=c->r[5]+0x00000030u; // 801D9D0C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801D9D10
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801D9D14
  c->lr=0x801D9D1Cu; f_801DB1E0(c); // 801D9D18
  goto L_801D9DCC; // 801D9D1C
L_801D9D20:;
  c->r[0]=R8(c->r[31]+0x00000006u); // 801D9D20
  cmpu(c,0,c->r[0],0x00000001u); // 801D9D24
  if (crb(c,2)) { goto L_801D9D44; } // 801D9D28
  c->r[3]=0u+0x00010000u; // 801D9D2C
  c->r[4]=c->r[5]+0x00000048u; // 801D9D30
  c->r[0]=c->r[3]+0xFFFFFFFCu; // 801D9D34
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801D9D38
  c->lr=0x801D9D40u; f_801DB1E0(c); // 801D9D3C
  goto L_801D9DCC; // 801D9D40
L_801D9D44:;
  c->r[0]=R8(c->r[31]+0x00000004u); // 801D9D44
  cmpu(c,0,c->r[0],0x00000009u); // 801D9D48
  if (crb(c,0)) { goto L_801D9D68; } // 801D9D4C
  c->r[3]=0u+0x00010000u; // 801D9D50
  c->r[4]=c->r[5]+0x0000005Cu; // 801D9D54
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 801D9D58
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801D9D5C
  c->lr=0x801D9D64u; f_801DB1E0(c); // 801D9D60
  goto L_801D9DCC; // 801D9D64
L_801D9D68:;
  c->lr=0x801D9D6Cu; f_801DB190(c); // 801D9D68
  c->r[0]=R8(c->r[31]+0x00000004u); // 801D9D6C
  c->r[3]=0u+0x802E0000u; // 801D9D70
  c->r[3]=c->r[3]+0xFFFFBF68u; // 801D9D74
  c->r[3]=c->r[3]+0x00030000u; // 801D9D78
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 801D9D7C
  c->r[4]=c->r[3]+c->r[0]; // 801D9D80
  c->r[3]=R32(c->r[4]+0xFFFF89E4u); // 801D9D84
  cmps(c,0,(int32_t)c->r[3],0); // 801D9D88
  if (crb(c,2)) { goto L_801D9D98; } // 801D9D8C
  W32(c->r[3]+0x00000000u,c->r[31]); // 801D9D90
  goto L_801D9D9C; // 801D9D94
L_801D9D98:;
  W32(c->r[4]+0xFFFF89E0u,c->r[31]); // 801D9D98
L_801D9D9C:;
  W32(c->r[4]+0xFFFF89E4u,c->r[31]); // 801D9D9C
  c->r[3]=0u+0x00000000u; // 801D9DA0
  c->r[0]=0u+0x000000F0u; // 801D9DA4
  W32(c->r[31]+0x00000000u,c->r[3]); // 801D9DA8
  W8(c->r[31]+0x00000006u,c->r[3]); // 801D9DAC
  W8(c->r[31]+0x00000005u,c->r[0]); // 801D9DB0
  c->r[3]=R16(c->r[4]+0xFFFF89ECu); // 801D9DB4
  cmps(c,0,(int32_t)c->r[3],0); // 801D9DB8
  if (crb(c,2)) { goto L_801D9DC8; } // 801D9DBC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801D9DC0
  W16(c->r[4]+0xFFFF89ECu,c->r[0]); // 801D9DC4
L_801D9DC8:;
  c->lr=0x801D9DCCu; f_801DB160(c); // 801D9DC8
L_801D9DCC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D9DCC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D9DD0
  c->lr=c->r[0]; // 801D9DD4
  c->r[1]=c->r[1]+0x00000010u; // 801D9DD8
  return; // 801D9DDC
}

// GKI_get_buf_size
void f_801D9DE0(Ctx* __restrict c) {
  trace_call(0x801D9DE0u);
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 801D9DE0
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 801D9DE4
  if (crb(c,2)) { goto L_801D9DF4; } // 801D9DE8
  c->r[3]=0u+0x00000000u; // 801D9DEC
  return; // 801D9DF0
L_801D9DF4:;
  c->r[0]=R8(c->r[3]+0x00000004u); // 801D9DF4
  cmpu(c,0,c->r[0],0x00000009u); // 801D9DF8
  if (!crb(c,0)) { goto L_801D9E1C; } // 801D9DFC
  c->r[3]=0u+0x802E0000u; // 801D9E00
  c->r[0]=rotl(c->r[0],4)&0x00000FF0u; // 801D9E04
  c->r[3]=c->r[3]+0xFFFFBF68u; // 801D9E08
  c->r[3]=c->r[3]+0x00030000u; // 801D9E0C
  c->r[3]=c->r[3]+c->r[0]; // 801D9E10
  c->r[3]=R16(c->r[3]+0xFFFF89E8u); // 801D9E14
  return; // 801D9E18
L_801D9E1C:;
  c->r[3]=0u+0x00000000u; // 801D9E1C
  return; // 801D9E20
}

// GKI_send_msg
void f_801D9E30(Ctx* __restrict c) {
  trace_call(0x801D9E30u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D9E30
  c->r[0]=c->lr; // 801D9E34
  c->r[7]=0u+0x802E0000u; // 801D9E38
  c->r[6]=0u+0x80280000u; // 801D9E3C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D9E40
  cmpu(c,0,c->r[3],0x00000008u); // 801D9E44
  c->r[7]=c->r[7]+0xFFFFBF68u; // 801D9E48
  c->r[6]=c->r[6]+0xFFFFDF50u; // 801D9E4C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D9E50
  c->r[31]=c->r[5]|c->r[5]; // 801D9E54
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D9E58
  c->r[30]=c->r[7]+0x00000054u; // 801D9E5C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D9E60
  c->r[29]=c->r[4]|c->r[4]; // 801D9E64
  W32(c->r[1]+0x00000010u,c->r[28]); // 801D9E68
  c->r[28]=c->r[3]|c->r[3]; // 801D9E6C
  if (!crb(c,0)) { goto L_801D9E90; } // 801D9E70
  cmpu(c,0,c->r[4],0x00000004u); // 801D9E74
  if (!crb(c,0)) { goto L_801D9E90; } // 801D9E78
  c->r[0]=c->r[30]+0x00030000u; // 801D9E7C
  c->r[3]=c->r[0]+c->r[3]; // 801D9E80
  c->r[0]=R8(c->r[3]+0xFFFF87ACu); // 801D9E84
  cmps(c,0,(int32_t)c->r[0],0); // 801D9E88
  if (!crb(c,2)) { goto L_801D9EB0; } // 801D9E8C
L_801D9E90:;
  c->r[3]=0u+0x00010000u; // 801D9E90
  c->r[4]=c->r[6]+0x00000068u; // 801D9E94
  c->r[0]=c->r[3]+0xFFFFFFFBu; // 801D9E98
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801D9E9C
  c->lr=0x801D9EA4u; f_801DB1E0(c); // 801D9EA0
  c->r[3]=c->r[31]|c->r[31]; // 801D9EA4
  c->lr=0x801D9EACu; f_801D9C70(c); // 801D9EA8
  goto L_801D9FCC; // 801D9EAC
L_801D9EB0:;
  c->r[31]=c->r[5]+0xFFFFFFF8u; // 801D9EB0
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 801D9EB4
  if (crb(c,2)) { goto L_801D9EC4; } // 801D9EB8
  c->r[0]=0u+0x00000000u; // 801D9EBC
  goto L_801D9EE8; // 801D9EC0
L_801D9EC4:;
  c->r[0]=R8(c->r[31]+0x00000004u); // 801D9EC4
  cmpu(c,0,c->r[0],0x00000009u); // 801D9EC8
  if (!crb(c,0)) { goto L_801D9EE4; } // 801D9ECC
  c->r[3]=c->r[7]+0x00030000u; // 801D9ED0
  c->r[0]=rotl(c->r[0],4)&0x00000FF0u; // 801D9ED4
  c->r[3]=c->r[3]+c->r[0]; // 801D9ED8
  c->r[0]=R16(c->r[3]+0xFFFF89E8u); // 801D9EDC
  goto L_801D9EE8; // 801D9EE0
L_801D9EE4:;
  c->r[0]=0u+0x00000000u; // 801D9EE4
L_801D9EE8:;
  c->r[4]=c->r[5]+c->r[0]; // 801D9EE8
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 801D9EEC
  if (crb(c,2)) { goto L_801D9EFC; } // 801D9EF0
  c->r[0]=0u+0x00000001u; // 801D9EF4
  goto L_801D9F18; // 801D9EF8
L_801D9EFC:;
  c->r[3]=0u+0xDDBB0000u; // 801D9EFC
  c->r[4]=R32(c->r[4]+0x00000000u); // 801D9F00
  c->r[0]=c->r[3]+0xFFFFDDBAu; // 801D9F04
  c->r[3]=c->r[0]-c->r[4]; // 801D9F08
  c->r[0]=c->r[4]-c->r[0]; // 801D9F0C
  c->r[0]=c->r[3]|c->r[0]; // 801D9F10
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801D9F14
L_801D9F18:;
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; cr0(c,c->r[0]); // 801D9F18
  if (crb(c,2)) { goto L_801D9F38; } // 801D9F1C
  c->r[3]=0u+0x00010000u; // 801D9F20
  c->r[4]=c->r[6]+0x00000080u; // 801D9F24
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801D9F28
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801D9F2C
  c->lr=0x801D9F34u; f_801DB1E0(c); // 801D9F30
  goto L_801D9FCC; // 801D9F34
L_801D9F38:;
  c->r[0]=R8(c->r[31]+0x00000006u); // 801D9F38
  cmpu(c,0,c->r[0],0x00000001u); // 801D9F3C
  if (crb(c,2)) { goto L_801D9F5C; } // 801D9F40
  c->r[3]=0u+0x00010000u; // 801D9F44
  c->r[4]=c->r[6]+0x00000098u; // 801D9F48
  c->r[0]=c->r[3]+0xFFFFFFFAu; // 801D9F4C
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801D9F50
  c->lr=0x801D9F58u; f_801DB1E0(c); // 801D9F54
  goto L_801D9FCC; // 801D9F58
L_801D9F5C:;
  c->lr=0x801D9F60u; f_801DB190(c); // 801D9F5C
  c->r[4]=rotl(c->r[28],4)&0x00000FF0u; // 801D9F60
  c->r[0]=c->r[30]+0x00030000u; // 801D9F64
  c->r[5]=rotl(c->r[29],2)&0x000003FCu; // 801D9F68
  c->r[0]=c->r[0]+c->r[4]; // 801D9F6C
  c->r[3]=c->r[0]+c->r[5]; // 801D9F70
  c->r[0]=R32(c->r[3]+0xFFFF888Cu); // 801D9F74
  cmps(c,0,(int32_t)c->r[0],0); // 801D9F78
  if (crb(c,2)) { goto L_801D9F8C; } // 801D9F7C
  c->r[3]=R32(c->r[3]+0xFFFF890Cu); // 801D9F80
  W32(c->r[3]+0x00000000u,c->r[31]); // 801D9F84
  goto L_801D9F90; // 801D9F88
L_801D9F8C:;
  W32(c->r[3]+0xFFFF888Cu,c->r[31]); // 801D9F8C
L_801D9F90:;
  c->r[0]=c->r[30]+0x00030000u; // 801D9F90
  c->r[3]=0u+0x00000000u; // 801D9F94
  c->r[4]=c->r[0]+c->r[4]; // 801D9F98
  c->r[4]=c->r[4]+c->r[5]; // 801D9F9C
  c->r[0]=0u+0x00000002u; // 801D9FA0
  W32(c->r[4]+0xFFFF890Cu,c->r[31]); // 801D9FA4
  W32(c->r[31]+0x00000000u,c->r[3]); // 801D9FA8
  W8(c->r[31]+0x00000006u,c->r[0]); // 801D9FAC
  W8(c->r[31]+0x00000005u,c->r[28]); // 801D9FB0
  c->lr=0x801D9FB8u; f_801DB160(c); // 801D9FB4
  c->r[0]=0u+0x00000001u; // 801D9FB8
  c->r[3]=c->r[28]|c->r[28]; // 801D9FBC
  c->r[0]=((c->r[29])&0x20)?0u:(c->r[0]<<((c->r[29])&31)); // 801D9FC0
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 801D9FC4
  c->lr=0x801D9FCCu; f_801DB0A0(c); // 801D9FC8
L_801D9FCC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D9FCC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D9FD0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D9FD4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D9FD8
  c->r[28]=R32(c->r[1]+0x00000010u); // 801D9FDC
  c->lr=c->r[0]; // 801D9FE0
  c->r[1]=c->r[1]+0x00000020u; // 801D9FE4
  return; // 801D9FE8
}

// GKI_read_mbox
void f_801D9FF0(Ctx* __restrict c) {
  trace_call(0x801D9FF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D9FF0
  c->r[0]=c->lr; // 801D9FF4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D9FF8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D9FFC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DA000
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DA004
  c->r[29]=c->r[3]|c->r[3]; // 801DA008
  c->lr=0x801DA010u; f_801DB150(c); // 801DA00C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801DA010
  c->r[31]=c->r[3]|c->r[3]; // 801DA014
  cmpu(c,0,c->r[0],0x00000008u); // 801DA018
  c->r[30]=0u+0x00000000u; // 801DA01C
  if (!crb(c,0)) { goto L_801DA02C; } // 801DA020
  cmpu(c,0,c->r[29],0x00000004u); // 801DA024
  if (crb(c,0)) { goto L_801DA034; } // 801DA028
L_801DA02C:;
  c->r[3]=0u+0x00000000u; // 801DA02C
  goto L_801DA084; // 801DA030
L_801DA034:;
  c->lr=0x801DA038u; f_801DB190(c); // 801DA034
  c->r[3]=0u+0x802E0000u; // 801DA038
  c->r[4]=rotl(c->r[31],4)&0x00000FF0u; // 801DA03C
  c->r[3]=c->r[3]+0xFFFFBF68u; // 801DA040
  c->r[5]=rotl(c->r[29],2)&0x000003FCu; // 801DA044
  c->r[0]=c->r[3]+0x00030000u; // 801DA048
  c->r[3]=c->r[0]+c->r[4]; // 801DA04C
  c->r[6]=c->r[3]+0xFFFF88E0u; // 801DA050
  c->r[4]=R32(c->r[6]+c->r[5]); // 801DA054
  cmps(c,0,(int32_t)c->r[4],0); // 801DA058
  if (crb(c,2)) { goto L_801DA07C; } // 801DA05C
  c->r[0]=R32(c->r[4]+0x00000000u); // 801DA060
  c->r[3]=0u+0x00000000u; // 801DA064
  W32(c->r[6]+c->r[5],c->r[0]); // 801DA068
  c->r[0]=0u+0x00000001u; // 801DA06C
  c->r[30]=c->r[4]+0x00000008u; // 801DA070
  W32(c->r[4]+0x00000000u,c->r[3]); // 801DA074
  W8(c->r[4]+0x00000006u,c->r[0]); // 801DA078
L_801DA07C:;
  c->lr=0x801DA080u; f_801DB160(c); // 801DA07C
  c->r[3]=c->r[30]|c->r[30]; // 801DA080
L_801DA084:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DA084
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DA088
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DA08C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DA090
  c->lr=c->r[0]; // 801DA094
  c->r[1]=c->r[1]+0x00000020u; // 801DA098
  return; // 801DA09C
}

// GKI_enqueue
void f_801DA0A0(Ctx* __restrict c) {
  trace_call(0x801DA0A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DA0A0
  c->r[0]=c->lr; // 801DA0A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DA0A8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DA0AC
  c->r[31]=c->r[4]+0xFFFFFFF8u; // 801DA0B0
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 801DA0B4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DA0B8
  c->r[30]=c->r[4]|c->r[4]; // 801DA0BC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DA0C0
  c->r[29]=c->r[3]|c->r[3]; // 801DA0C4
  if (crb(c,2)) { goto L_801DA0D4; } // 801DA0C8
  c->r[0]=0u+0x00000000u; // 801DA0CC
  goto L_801DA100; // 801DA0D0
L_801DA0D4:;
  c->r[0]=R8(c->r[31]+0x00000004u); // 801DA0D4
  cmpu(c,0,c->r[0],0x00000009u); // 801DA0D8
  if (!crb(c,0)) { goto L_801DA0FC; } // 801DA0DC
  c->r[3]=0u+0x802E0000u; // 801DA0E0
  c->r[0]=rotl(c->r[0],4)&0x00000FF0u; // 801DA0E4
  c->r[3]=c->r[3]+0xFFFFBF68u; // 801DA0E8
  c->r[3]=c->r[3]+0x00030000u; // 801DA0EC
  c->r[3]=c->r[3]+c->r[0]; // 801DA0F0
  c->r[0]=R16(c->r[3]+0xFFFF89E8u); // 801DA0F4
  goto L_801DA100; // 801DA0F8
L_801DA0FC:;
  c->r[0]=0u+0x00000000u; // 801DA0FC
L_801DA100:;
  c->r[4]=c->r[4]+c->r[0]; // 801DA100
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 801DA104
  if (crb(c,2)) { goto L_801DA114; } // 801DA108
  c->r[0]=0u+0x00000001u; // 801DA10C
  goto L_801DA130; // 801DA110
L_801DA114:;
  c->r[3]=0u+0xDDBB0000u; // 801DA114
  c->r[4]=R32(c->r[4]+0x00000000u); // 801DA118
  c->r[0]=c->r[3]+0xFFFFDDBAu; // 801DA11C
  c->r[3]=c->r[0]-c->r[4]; // 801DA120
  c->r[0]=c->r[4]-c->r[0]; // 801DA124
  c->r[0]=c->r[3]|c->r[0]; // 801DA128
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801DA12C
L_801DA130:;
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; cr0(c,c->r[0]); // 801DA130
  if (crb(c,2)) { goto L_801DA154; } // 801DA134
  c->r[3]=0u+0x00010000u; // 801DA138
  c->r[4]=0u+0x80280000u; // 801DA13C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801DA140
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801DA144
  c->r[4]=c->r[4]+0xFFFFE000u; // 801DA148
  c->lr=0x801DA150u; f_801DB1E0(c); // 801DA14C
  goto L_801DA1C0; // 801DA150
L_801DA154:;
  c->r[0]=R8(c->r[31]+0x00000006u); // 801DA154
  cmpu(c,0,c->r[0],0x00000001u); // 801DA158
  if (crb(c,2)) { goto L_801DA17C; } // 801DA15C
  c->r[3]=0u+0x00010000u; // 801DA160
  c->r[4]=0u+0x80280000u; // 801DA164
  c->r[0]=c->r[3]+0xFFFFFFF9u; // 801DA168
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801DA16C
  c->r[4]=c->r[4]+0xFFFFE01Cu; // 801DA170
  c->lr=0x801DA178u; f_801DB1E0(c); // 801DA174
  goto L_801DA1C0; // 801DA178
L_801DA17C:;
  c->lr=0x801DA180u; f_801DB190(c); // 801DA17C
  c->r[0]=R32(c->r[29]+0x00000000u); // 801DA180
  cmps(c,0,(int32_t)c->r[0],0); // 801DA184
  if (crb(c,2)) { goto L_801DA198; } // 801DA188
  c->r[3]=R32(c->r[29]+0x00000004u); // 801DA18C
  W32(c->r[3]+0xFFFFFFF8u,c->r[31]); // 801DA190
  goto L_801DA19C; // 801DA194
L_801DA198:;
  W32(c->r[29]+0x00000000u,c->r[30]); // 801DA198
L_801DA19C:;
  c->r[4]=R16(c->r[29]+0x00000008u); // 801DA19C
  c->r[3]=0u+0x00000000u; // 801DA1A0
  W32(c->r[29]+0x00000004u,c->r[30]); // 801DA1A4
  c->r[0]=0u+0x00000002u; // 801DA1A8
  c->r[4]=c->r[4]+0x00000001u; // 801DA1AC
  W16(c->r[29]+0x00000008u,c->r[4]); // 801DA1B0
  W32(c->r[31]+0x00000000u,c->r[3]); // 801DA1B4
  W8(c->r[31]+0x00000006u,c->r[0]); // 801DA1B8
  c->lr=0x801DA1C0u; f_801DB160(c); // 801DA1BC
L_801DA1C0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DA1C0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DA1C4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DA1C8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DA1CC
  c->lr=c->r[0]; // 801DA1D0
  c->r[1]=c->r[1]+0x00000020u; // 801DA1D4
  return; // 801DA1D8
}

// GKI_enqueue_head
void f_801DA1E0(Ctx* __restrict c) {
  trace_call(0x801DA1E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DA1E0
  c->r[0]=c->lr; // 801DA1E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DA1E8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DA1EC
  c->r[31]=c->r[4]+0xFFFFFFF8u; // 801DA1F0
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 801DA1F4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DA1F8
  c->r[30]=c->r[4]|c->r[4]; // 801DA1FC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DA200
  c->r[29]=c->r[3]|c->r[3]; // 801DA204
  if (crb(c,2)) { goto L_801DA214; } // 801DA208
  c->r[0]=0u+0x00000000u; // 801DA20C
  goto L_801DA240; // 801DA210
L_801DA214:;
  c->r[0]=R8(c->r[31]+0x00000004u); // 801DA214
  cmpu(c,0,c->r[0],0x00000009u); // 801DA218
  if (!crb(c,0)) { goto L_801DA23C; } // 801DA21C
  c->r[3]=0u+0x802E0000u; // 801DA220
  c->r[0]=rotl(c->r[0],4)&0x00000FF0u; // 801DA224
  c->r[3]=c->r[3]+0xFFFFBF68u; // 801DA228
  c->r[3]=c->r[3]+0x00030000u; // 801DA22C
  c->r[3]=c->r[3]+c->r[0]; // 801DA230
  c->r[0]=R16(c->r[3]+0xFFFF89E8u); // 801DA234
  goto L_801DA240; // 801DA238
L_801DA23C:;
  c->r[0]=0u+0x00000000u; // 801DA23C
L_801DA240:;
  c->r[4]=c->r[4]+c->r[0]; // 801DA240
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 801DA244
  if (crb(c,2)) { goto L_801DA254; } // 801DA248
  c->r[0]=0u+0x00000001u; // 801DA24C
  goto L_801DA270; // 801DA250
L_801DA254:;
  c->r[3]=0u+0xDDBB0000u; // 801DA254
  c->r[4]=R32(c->r[4]+0x00000000u); // 801DA258
  c->r[0]=c->r[3]+0xFFFFDDBAu; // 801DA25C
  c->r[3]=c->r[0]-c->r[4]; // 801DA260
  c->r[0]=c->r[4]-c->r[0]; // 801DA264
  c->r[0]=c->r[3]|c->r[0]; // 801DA268
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801DA26C
L_801DA270:;
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; cr0(c,c->r[0]); // 801DA270
  if (crb(c,2)) { goto L_801DA294; } // 801DA274
  c->r[3]=0u+0x00010000u; // 801DA278
  c->r[4]=0u+0x80280000u; // 801DA27C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801DA280
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801DA284
  c->r[4]=c->r[4]+0xFFFFE000u; // 801DA288
  c->lr=0x801DA290u; f_801DB1E0(c); // 801DA28C
  goto L_801DA304; // 801DA290
L_801DA294:;
  c->r[0]=R8(c->r[31]+0x00000006u); // 801DA294
  cmpu(c,0,c->r[0],0x00000001u); // 801DA298
  if (crb(c,2)) { goto L_801DA2BC; } // 801DA29C
  c->r[3]=0u+0x00010000u; // 801DA2A0
  c->r[4]=0u+0x80280000u; // 801DA2A4
  c->r[0]=c->r[3]+0xFFFFFFF9u; // 801DA2A8
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801DA2AC
  c->r[4]=c->r[4]+0xFFFFE03Cu; // 801DA2B0
  c->lr=0x801DA2B8u; f_801DB1E0(c); // 801DA2B4
  goto L_801DA304; // 801DA2B8
L_801DA2BC:;
  c->lr=0x801DA2C0u; f_801DB190(c); // 801DA2BC
  c->r[3]=R32(c->r[29]+0x00000000u); // 801DA2C0
  cmps(c,0,(int32_t)c->r[3],0); // 801DA2C4
  if (crb(c,2)) { goto L_801DA2DC; } // 801DA2C8
  c->r[0]=c->r[3]+0xFFFFFFF8u; // 801DA2CC
  W32(c->r[31]+0x00000000u,c->r[0]); // 801DA2D0
  W32(c->r[29]+0x00000000u,c->r[30]); // 801DA2D4
  goto L_801DA2EC; // 801DA2D8
L_801DA2DC:;
  W32(c->r[29]+0x00000000u,c->r[30]); // 801DA2DC
  c->r[0]=0u+0x00000000u; // 801DA2E0
  W32(c->r[29]+0x00000004u,c->r[30]); // 801DA2E4
  W32(c->r[31]+0x00000000u,c->r[0]); // 801DA2E8
L_801DA2EC:;
  c->r[3]=R16(c->r[29]+0x00000008u); // 801DA2EC
  c->r[0]=0u+0x00000002u; // 801DA2F0
  c->r[3]=c->r[3]+0x00000001u; // 801DA2F4
  W16(c->r[29]+0x00000008u,c->r[3]); // 801DA2F8
  W8(c->r[31]+0x00000006u,c->r[0]); // 801DA2FC
  c->lr=0x801DA304u; f_801DB160(c); // 801DA300
L_801DA304:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DA304
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DA308
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DA30C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DA310
  c->lr=c->r[0]; // 801DA314
  c->r[1]=c->r[1]+0x00000020u; // 801DA318
  return; // 801DA31C
}

// GKI_dequeue
void f_801DA320(Ctx* __restrict c) {
  trace_call(0x801DA320u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DA320
  c->r[0]=c->lr; // 801DA324
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DA328
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DA32C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DA330
  c->r[30]=c->r[3]|c->r[3]; // 801DA334
  c->lr=0x801DA33Cu; f_801DB190(c); // 801DA338
  cmps(c,0,(int32_t)c->r[30],0); // 801DA33C
  if (crb(c,2)) { goto L_801DA350; } // 801DA340
  c->r[0]=R16(c->r[30]+0x00000008u); // 801DA344
  cmps(c,0,(int32_t)c->r[0],0); // 801DA348
  if (!crb(c,2)) { goto L_801DA35C; } // 801DA34C
L_801DA350:;
  c->lr=0x801DA354u; f_801DB160(c); // 801DA350
  c->r[3]=0u+0x00000000u; // 801DA354
  goto L_801DA3A8; // 801DA358
L_801DA35C:;
  c->r[31]=R32(c->r[30]+0x00000000u); // 801DA35C
  c->r[3]=R32(c->r[31]+0xFFFFFFF8u); // 801DA360
  cmps(c,0,(int32_t)c->r[3],0); // 801DA364
  if (crb(c,2)) { goto L_801DA378; } // 801DA368
  c->r[0]=c->r[3]+0x00000008u; // 801DA36C
  W32(c->r[30]+0x00000000u,c->r[0]); // 801DA370
  goto L_801DA384; // 801DA374
L_801DA378:;
  c->r[0]=0u+0x00000000u; // 801DA378
  W32(c->r[30]+0x00000000u,c->r[0]); // 801DA37C
  W32(c->r[30]+0x00000004u,c->r[0]); // 801DA380
L_801DA384:;
  c->r[4]=R16(c->r[30]+0x00000008u); // 801DA384
  c->r[3]=0u+0x00000000u; // 801DA388
  c->r[0]=0u+0x00000001u; // 801DA38C
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 801DA390
  W16(c->r[30]+0x00000008u,c->r[4]); // 801DA394
  W32(c->r[31]+0xFFFFFFF8u,c->r[3]); // 801DA398
  W8(c->r[31]+0xFFFFFFFEu,c->r[0]); // 801DA39C
  c->lr=0x801DA3A4u; f_801DB160(c); // 801DA3A0
  c->r[3]=c->r[31]|c->r[31]; // 801DA3A4
L_801DA3A8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DA3A8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DA3AC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801DA3B0
  c->lr=c->r[0]; // 801DA3B4
  c->r[1]=c->r[1]+0x00000010u; // 801DA3B8
  return; // 801DA3BC
}

// GKI_remove_from_queue
void f_801DA3C0(Ctx* __restrict c) {
  trace_call(0x801DA3C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DA3C0
  c->r[0]=c->lr; // 801DA3C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DA3C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DA3CC
  c->r[31]=c->r[4]|c->r[4]; // 801DA3D0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DA3D4
  c->r[30]=c->r[3]|c->r[3]; // 801DA3D8
  c->lr=0x801DA3E0u; f_801DB190(c); // 801DA3DC
  c->r[3]=R32(c->r[30]+0x00000000u); // 801DA3E0
  cmpu(c,0,c->r[31],c->r[3]); // 801DA3E4
  if (!crb(c,2)) { goto L_801DA3FC; } // 801DA3E8
  c->lr=0x801DA3F0u; f_801DB160(c); // 801DA3EC
  c->r[3]=c->r[30]|c->r[30]; // 801DA3F0
  c->lr=0x801DA3F8u; f_801DA320(c); // 801DA3F4
  goto L_801DA46C; // 801DA3F8
L_801DA3FC:;
  c->r[5]=c->r[31]+0xFFFFFFF8u; // 801DA3FC
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 801DA400
  goto L_801DA45C; // 801DA404
L_801DA408:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801DA408
  cmpu(c,0,c->r[0],c->r[5]); // 801DA40C
  if (!crb(c,2)) { goto L_801DA458; } // 801DA410
  c->r[0]=R32(c->r[5]+0x00000000u); // 801DA414
  W32(c->r[3]+0x00000000u,c->r[0]); // 801DA418
  c->r[0]=R32(c->r[30]+0x00000004u); // 801DA41C
  cmpu(c,0,c->r[31],c->r[0]); // 801DA420
  if (!crb(c,2)) { goto L_801DA430; } // 801DA424
  c->r[0]=c->r[3]+0x00000008u; // 801DA428
  W32(c->r[30]+0x00000004u,c->r[0]); // 801DA42C
L_801DA430:;
  c->r[4]=R16(c->r[30]+0x00000008u); // 801DA430
  c->r[3]=0u+0x00000000u; // 801DA434
  c->r[0]=0u+0x00000001u; // 801DA438
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 801DA43C
  W16(c->r[30]+0x00000008u,c->r[4]); // 801DA440
  W32(c->r[5]+0x00000000u,c->r[3]); // 801DA444
  W8(c->r[5]+0x00000006u,c->r[0]); // 801DA448
  c->lr=0x801DA450u; f_801DB160(c); // 801DA44C
  c->r[3]=c->r[31]|c->r[31]; // 801DA450
  goto L_801DA46C; // 801DA454
L_801DA458:;
  c->r[3]=c->r[0]|c->r[0]; // 801DA458
L_801DA45C:;
  cmps(c,0,(int32_t)c->r[3],0); // 801DA45C
  if (!crb(c,2)) { IRQCHK(c); goto L_801DA408; } // 801DA460
  c->lr=0x801DA468u; f_801DB160(c); // 801DA464
  c->r[3]=0u+0x00000000u; // 801DA468
L_801DA46C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DA46C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DA470
  c->r[30]=R32(c->r[1]+0x00000008u); // 801DA474
  c->lr=c->r[0]; // 801DA478
  c->r[1]=c->r[1]+0x00000010u; // 801DA47C
  return; // 801DA480
}

// GKI_getfirst
void f_801DA490(Ctx* __restrict c) {
  trace_call(0x801DA490u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 801DA490
  return; // 801DA494
}

// GKI_getnext
void f_801DA4A0(Ctx* __restrict c) {
  trace_call(0x801DA4A0u);
  c->r[3]=R32(c->r[3]+0xFFFFFFF8u); // 801DA4A0
  cmps(c,0,(int32_t)c->r[3],0); // 801DA4A4
  if (crb(c,2)) { goto L_801DA4B4; } // 801DA4A8
  c->r[3]=c->r[3]+0x00000008u; // 801DA4AC
  return; // 801DA4B0
L_801DA4B4:;
  c->r[3]=0u+0x00000000u; // 801DA4B4
  return; // 801DA4B8
}

// GKI_queue_is_empty
void f_801DA4C0(Ctx* __restrict c) {
  trace_call(0x801DA4C0u);
  c->r[0]=R16(c->r[3]+0x00000008u); // 801DA4C0
  c->r[0]=cntlz(c->r[0]); // 801DA4C4
  c->r[3]=rotl(c->r[0],27)&0x000000FFu; // 801DA4C8
  return; // 801DA4CC
}

// GKI_create_pool
void f_801DA4D0(Ctx* __restrict c) {
  trace_call(0x801DA4D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DA4D0
  c->r[0]=c->lr; // 801DA4D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DA4D8
  c->r[11]=c->r[1]+0x00000020u; // 801DA4DC
  c->lr=0x801DA4E4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DA4E0
  c->r[7]=0u+0x802E0000u; // 801DA4E4
  cmpu(c,0,c->r[3],0x0000FFF3u); // 801DA4E8
  c->r[7]=c->r[7]+0xFFFFBF68u; // 801DA4EC
  c->r[27]=c->r[3]|c->r[3]; // 801DA4F0
  c->r[28]=c->r[4]|c->r[4]; // 801DA4F4
  c->r[29]=c->r[5]|c->r[5]; // 801DA4F8
  c->r[30]=c->r[7]+0x00000054u; // 801DA4FC
  if (!crb(c,1)) { goto L_801DA50C; } // 801DA500
  c->r[3]=0u+0x000000FFu; // 801DA504
  goto L_801DA800; // 801DA508
L_801DA50C:;
  c->r[0]=0u+0x00000003u; // 801DA50C
  c->r[31]=0u+0x00000000u; // 801DA510
  c->ctr=c->r[0]; // 801DA514
L_801DA518:;
  c->r[5]=rotl(c->r[31],2)&0x000003FCu; // 801DA518
  c->r[5]=c->r[5]+0x00030000u; // 801DA51C
  c->r[0]=c->r[5]+0xFFFF8A1Cu; // 801DA520
  c->r[0]=R32(c->r[30]+c->r[0]); // 801DA524
  cmps(c,0,(int32_t)c->r[0],0); // 801DA528
  if (crb(c,2)) { goto L_801DA570; } // 801DA52C
  c->r[31]=c->r[31]+0x00000001u; // 801DA530
  c->r[5]=rotl(c->r[31],2)&0x000003FCu; // 801DA534
  c->r[5]=c->r[5]+0x00030000u; // 801DA538
  c->r[0]=c->r[5]+0xFFFF8A1Cu; // 801DA53C
  c->r[0]=R32(c->r[30]+c->r[0]); // 801DA540
  cmps(c,0,(int32_t)c->r[0],0); // 801DA544
  if (crb(c,2)) { goto L_801DA570; } // 801DA548
  c->r[31]=c->r[31]+0x00000001u; // 801DA54C
  c->r[5]=rotl(c->r[31],2)&0x000003FCu; // 801DA550
  c->r[5]=c->r[5]+0x00030000u; // 801DA554
  c->r[0]=c->r[5]+0xFFFF8A1Cu; // 801DA558
  c->r[0]=R32(c->r[30]+c->r[0]); // 801DA55C
  cmps(c,0,(int32_t)c->r[0],0); // 801DA560
  if (crb(c,2)) { goto L_801DA570; } // 801DA564
  c->r[31]=c->r[31]+0x00000001u; // 801DA568
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801DA518; } // 801DA56C
L_801DA570:;
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 801DA570
  cmpu(c,0,c->r[0],0x00000009u); // 801DA574
  if (!crb(c,2)) { goto L_801DA584; } // 801DA578
  c->r[3]=0u+0x000000FFu; // 801DA57C
  goto L_801DA800; // 801DA580
L_801DA584:;
  c->r[0]=c->r[3]+0x00000003u; // 801DA584
  cmps(c,0,(int32_t)c->r[6],0); // 801DA588
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFFCu; // 801DA58C
  c->r[0]=c->r[3]+0x0000000Cu; // 801DA590
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 801DA594
  if (!crb(c,2)) { goto L_801DA5A4; } // 801DA598
  c->lr=0x801DA5A0u; f_801DB1F0(c); // 801DA59C
  c->r[6]=c->r[3]|c->r[3]; // 801DA5A0
L_801DA5A4:;
  cmps(c,0,(int32_t)c->r[6],0); // 801DA5A4
  if (crb(c,2)) { goto L_801DA7FC; } // 801DA5A8
  c->r[4]=c->r[27]|c->r[27]; // 801DA5AC
  c->r[5]=c->r[28]|c->r[28]; // 801DA5B0
  c->r[3]=rotl(c->r[31],0)&0x000000FFu; // 801DA5B4
  c->lr=0x801DA5BCu; f_801D94F0(c); // 801DA5B8
  c->r[3]=0u+0x802E0000u; // 801DA5BC
  c->r[5]=rotl(c->r[31],4)&0x00000FF0u; // 801DA5C0
  c->r[3]=c->r[3]+0xFFFFBF68u; // 801DA5C4
  c->r[4]=0u+0x00000000u; // 801DA5C8
  c->r[3]=c->r[3]+0x00000054u; // 801DA5CC
  c->r[6]=c->r[5]+0x00030000u; // 801DA5D0
  c->r[5]=c->r[3]+0x00030000u; // 801DA5D4
  c->r[5]=R8(c->r[5]+0xFFFF8A87u); // 801DA5D8
  c->r[0]=c->r[6]+0xFFFF8994u; // 801DA5DC
  c->r[7]=R16(c->r[3]+c->r[0]); // 801DA5E0
  c->ctr=c->r[5]; // 801DA5E4
  cmps(c,0,(int32_t)c->r[5],0); // 801DA5E8
  if (!crb(c,1)) { goto L_801DA61C; } // 801DA5EC
L_801DA5F0:;
  c->r[6]=c->r[4]+0x00030000u; // 801DA5F0
  c->r[0]=c->r[6]+0xFFFF8A7Eu; // 801DA5F4
  c->r[0]=R8(c->r[3]+c->r[0]); // 801DA5F8
  c->r[6]=rotl(c->r[0],4)&0xFFFFFFF0u; // 801DA5FC
  c->r[6]=c->r[6]+0x00030000u; // 801DA600
  c->r[0]=c->r[6]+0xFFFF8994u; // 801DA604
  c->r[0]=R16(c->r[3]+c->r[0]); // 801DA608
  cmpu(c,0,c->r[7],c->r[0]); // 801DA60C
  if (!crb(c,1)) { goto L_801DA61C; } // 801DA610
  c->r[4]=c->r[4]+0x00000001u; // 801DA614
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801DA5F0; } // 801DA618
L_801DA61C:;
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[4]); // 801DA61C
  if (!crb(c,1)) { goto L_801DA784; } // 801DA620
  c->r[0]=c->r[5]-c->r[4]; // 801DA624
  c->r[8]=c->r[4]+0x00000008u; // 801DA628
  cmps(c,0,(int32_t)c->r[0],8); // 801DA62C
  if (!crb(c,1)) { goto L_801DA75C; } // 801DA630
  c->r[6]=c->r[3]+0x00030000u; // 801DA634
  c->r[9]=0u+0x00000000u; // 801DA638
  c->r[0]=R8(c->r[6]+0xFFFF8A87u); // 801DA63C
  c->r[10]=0u+0x00000000u; // 801DA640
  c->r[11]=0u+0x00000000u; // 801DA644
  c->r[7]=0u+0x00000000u; // 801DA648
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 801DA64C
  if (crb(c,0)) { goto L_801DA668; } // 801DA650
  c->r[6]=0u+0x80000000u; // 801DA654
  c->r[0]=c->r[6]+0x00000001u; // 801DA658
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801DA65C
  if (crb(c,0)) { goto L_801DA668; } // 801DA660
  c->r[7]=0u+0x00000001u; // 801DA664
L_801DA668:;
  cmps(c,0,(int32_t)c->r[7],0); // 801DA668
  if (crb(c,2)) { goto L_801DA68C; } // 801DA66C
  c->r[7]=c->r[3]+0x00030000u; // 801DA670
  c->r[6]=0u+0x80000000u; // 801DA674
  c->r[7]=R8(c->r[7]+0xFFFF8A87u); // 801DA678
  c->r[0]=c->r[6]+0x00000001u; // 801DA67C
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 801DA680
  if (crb(c,0)) { goto L_801DA68C; } // 801DA684
  c->r[11]=0u+0x00000001u; // 801DA688
L_801DA68C:;
  cmps(c,0,(int32_t)c->r[11],0); // 801DA68C
  if (crb(c,2)) { goto L_801DA6A4; } // 801DA690
  c->r[0]=c->r[4]+0x80000000u; // 801DA694
  cmpu(c,0,c->r[0],0x00000000u); // 801DA698
  if (crb(c,2)) { goto L_801DA6A4; } // 801DA69C
  c->r[10]=0u+0x00000001u; // 801DA6A0
L_801DA6A4:;
  cmps(c,0,(int32_t)c->r[10],0); // 801DA6A4
  if (crb(c,2)) { goto L_801DA6EC; } // 801DA6A8
  c->r[6]=c->r[3]+0x00030000u; // 801DA6AC
  c->r[0]=0u-c->r[4]; // 801DA6B0
  c->r[10]=R8(c->r[6]+0xFFFF8A87u); // 801DA6B4
  c->r[0]=rotl(c->r[0],0)&0x80000000u; // 801DA6B8
  c->r[6]=0u+0x00000001u; // 801DA6BC
  c->r[7]=rotl(c->r[10],0)&0x80000000u; // 801DA6C0
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 801DA6C4
  if (!crb(c,2)) { goto L_801DA6E0; } // 801DA6C8
  c->r[0]=c->r[10]-c->r[4]; // 801DA6CC
  c->r[0]=rotl(c->r[0],0)&0x80000000u; // 801DA6D0
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 801DA6D4
  if (crb(c,2)) { goto L_801DA6E0; } // 801DA6D8
  c->r[6]=0u+0x00000000u; // 801DA6DC
L_801DA6E0:;
  cmps(c,0,(int32_t)c->r[6],0); // 801DA6E0
  if (crb(c,2)) { goto L_801DA6EC; } // 801DA6E4
  c->r[9]=0u+0x00000001u; // 801DA6E8
L_801DA6EC:;
  cmps(c,0,(int32_t)c->r[9],0); // 801DA6EC
  if (crb(c,2)) { goto L_801DA75C; } // 801DA6F0
  c->r[0]=c->r[5]+0x00000007u; // 801DA6F4
  c->r[0]=c->r[0]-c->r[8]; // 801DA6F8
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 801DA6FC
  c->ctr=c->r[0]; // 801DA700
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[8]); // 801DA704
  if (!crb(c,1)) { goto L_801DA75C; } // 801DA708
L_801DA70C:;
  c->r[6]=c->r[3]+c->r[5]; // 801DA70C
  c->r[5]=c->r[5]+0xFFFFFFF8u; // 801DA710
  c->r[6]=c->r[6]+0x00030000u; // 801DA714
  c->r[0]=R8(c->r[6]+0xFFFF8A7Du); // 801DA718
  W8(c->r[6]+0xFFFF8A7Eu,c->r[0]); // 801DA71C
  c->r[0]=R8(c->r[6]+0xFFFF8A7Cu); // 801DA720
  W8(c->r[6]+0xFFFF8A7Du,c->r[0]); // 801DA724
  c->r[0]=R8(c->r[6]+0xFFFF8A7Bu); // 801DA728
  W8(c->r[6]+0xFFFF8A7Cu,c->r[0]); // 801DA72C
  c->r[0]=R8(c->r[6]+0xFFFF8A7Au); // 801DA730
  W8(c->r[6]+0xFFFF8A7Bu,c->r[0]); // 801DA734
  c->r[0]=R8(c->r[6]+0xFFFF8A79u); // 801DA738
  W8(c->r[6]+0xFFFF8A7Au,c->r[0]); // 801DA73C
  c->r[0]=R8(c->r[6]+0xFFFF8A78u); // 801DA740
  W8(c->r[6]+0xFFFF8A79u,c->r[0]); // 801DA744
  c->r[0]=R8(c->r[6]+0xFFFF8A77u); // 801DA748
  W8(c->r[6]+0xFFFF8A78u,c->r[0]); // 801DA74C
  c->r[0]=R8(c->r[6]+0xFFFF8A76u); // 801DA750
  W8(c->r[6]+0xFFFF8A77u,c->r[0]); // 801DA754
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801DA70C; } // 801DA758
L_801DA75C:;
  c->r[0]=c->r[5]-c->r[4]; // 801DA75C
  c->ctr=c->r[0]; // 801DA760
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[4]); // 801DA764
  if (!crb(c,1)) { goto L_801DA784; } // 801DA768
L_801DA76C:;
  c->r[6]=c->r[3]+c->r[5]; // 801DA76C
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801DA770
  c->r[6]=c->r[6]+0x00030000u; // 801DA774
  c->r[0]=R8(c->r[6]+0xFFFF8A7Du); // 801DA778
  W8(c->r[6]+0xFFFF8A7Eu,c->r[0]); // 801DA77C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801DA76C; } // 801DA780
L_801DA784:;
  c->r[0]=c->r[3]+0x00030000u; // 801DA784
  c->r[5]=rotl(c->r[31],0)&0x000000FFu; // 801DA788
  c->r[4]=c->r[0]+c->r[4]; // 801DA78C
  c->r[3]=0u+0x802E0000u; // 801DA790
  c->r[3]=c->r[3]+0xFFFFBF68u; // 801DA794
  cmpu(c,0,c->r[5],0x00000009u); // 801DA798
  W8(c->r[4]+0xFFFF8A7Eu,c->r[31]); // 801DA79C
  c->r[3]=c->r[3]+0x00000054u; // 801DA7A0
  if (!crb(c,0)) { goto L_801DA7E4; } // 801DA7A4
  cmpu(c,0,c->r[29],0x00000001u); // 801DA7A8
  if (!crb(c,2)) { goto L_801DA7CC; } // 801DA7AC
  c->r[4]=c->r[3]+0x00030000u; // 801DA7B0
  c->r[0]=0u+0x00000001u; // 801DA7B4
  c->r[3]=R16(c->r[4]+0xFFFF8A7Cu); // 801DA7B8
  c->r[0]=((c->r[5])&0x20)?0u:(c->r[0]<<((c->r[5])&31)); // 801DA7BC
  c->r[0]=c->r[3]|c->r[0]; // 801DA7C0
  W16(c->r[4]+0xFFFF8A7Cu,c->r[0]); // 801DA7C4
  goto L_801DA7E4; // 801DA7C8
L_801DA7CC:;
  c->r[4]=c->r[3]+0x00030000u; // 801DA7CC
  c->r[0]=0u+0x00000001u; // 801DA7D0
  c->r[3]=R16(c->r[4]+0xFFFF8A7Cu); // 801DA7D4
  c->r[0]=((c->r[5])&0x20)?0u:(c->r[0]<<((c->r[5])&31)); // 801DA7D8
  c->r[0]=c->r[3]&~c->r[0]; // 801DA7DC
  W16(c->r[4]+0xFFFF8A7Cu,c->r[0]); // 801DA7E0
L_801DA7E4:;
  c->r[5]=c->r[30]+0x00030000u; // 801DA7E4
  c->r[3]=c->r[31]|c->r[31]; // 801DA7E8
  c->r[4]=R8(c->r[5]+0xFFFF8A87u); // 801DA7EC
  c->r[0]=c->r[4]+0x00000001u; // 801DA7F0
  W8(c->r[5]+0xFFFF8A87u,c->r[0]); // 801DA7F4
  goto L_801DA800; // 801DA7F8
L_801DA7FC:;
  c->r[3]=0u+0x000000FFu; // 801DA7FC
L_801DA800:;
  c->r[11]=c->r[1]+0x00000020u; // 801DA800
  c->lr=0x801DA808u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DA804
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DA808
  c->lr=c->r[0]; // 801DA80C
  c->r[1]=c->r[1]+0x00000020u; // 801DA810
  return; // 801DA814
}

// GKI_delete_pool
void f_801DA820(Ctx* __restrict c) {
  trace_call(0x801DA820u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DA820
  c->r[0]=c->lr; // 801DA824
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DA828
  c->r[11]=c->r[1]+0x00000020u; // 801DA82C
  c->lr=0x801DA834u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DA830
  c->r[27]=0u+0x802E0000u; // 801DA834
  cmpu(c,0,c->r[3],0x00000009u); // 801DA838
  c->r[27]=c->r[27]+0xFFFFBF68u; // 801DA83C
  c->r[30]=c->r[3]|c->r[3]; // 801DA840
  c->r[31]=c->r[27]+0x00000054u; // 801DA844
  if (!crb(c,0)) { goto L_801DA970; } // 801DA848
  c->r[26]=rotl(c->r[3],2)&0x000003FCu; // 801DA84C
  c->r[0]=c->r[31]+0x00030000u; // 801DA850
  c->r[3]=c->r[0]+c->r[26]; // 801DA854
  c->r[0]=R32(c->r[3]+0xFFFF8A1Cu); // 801DA858
  cmps(c,0,(int32_t)c->r[0],0); // 801DA85C
  if (!crb(c,2)) { goto L_801DA868; } // 801DA860
  goto L_801DA970; // 801DA864
L_801DA868:;
  c->lr=0x801DA86Cu; f_801DB190(c); // 801DA868
  c->r[4]=c->r[31]+0x00030000u; // 801DA86C
  c->r[0]=rotl(c->r[30],4)&0x00000FF0u; // 801DA870
  c->r[3]=c->r[4]+c->r[0]; // 801DA874
  c->r[0]=R16(c->r[3]+0xFFFF8998u); // 801DA878
  cmps(c,0,(int32_t)c->r[0],0); // 801DA87C
  if (!crb(c,2)) { goto L_801DA954; } // 801DA880
  c->r[28]=0u+0x00000000u; // 801DA884
  W16(c->r[3]+0xFFFF8994u,c->r[28]); // 801DA888
  c->r[29]=c->r[4]+c->r[26]; // 801DA88C
  W16(c->r[3]+0xFFFF8996u,c->r[28]); // 801DA890
  W16(c->r[3]+0xFFFF8998u,c->r[28]); // 801DA894
  W16(c->r[3]+0xFFFF899Au,c->r[28]); // 801DA898
  W32(c->r[3]+0xFFFF898Cu,c->r[28]); // 801DA89C
  W32(c->r[3]+0xFFFF8990u,c->r[28]); // 801DA8A0
  c->r[3]=R32(c->r[29]+0xFFFF8A1Cu); // 801DA8A4
  c->lr=0x801DA8ACu; f_801DB220(c); // 801DA8A8
  c->r[4]=c->r[31]+0x00030000u; // 801DA8AC
  c->r[0]=rotl(c->r[30],1)&0x000001FEu; // 801DA8B0
  c->r[3]=c->r[4]+c->r[26]; // 801DA8B4
  W32(c->r[29]+0xFFFF8A1Cu,c->r[28]); // 801DA8B8
  c->r[4]=c->r[4]+c->r[0]; // 801DA8BC
  c->r[7]=c->r[31]|c->r[31]; // 801DA8C0
  W32(c->r[3]+0xFFFF8A40u,c->r[28]); // 801DA8C4
  c->r[3]=c->r[7]+0x00030000u; // 801DA8C8
  c->r[6]=0u+0x00000000u; // 801DA8CC
  W16(c->r[4]+0xFFFF8A64u,c->r[28]); // 801DA8D0
  c->r[4]=R8(c->r[3]+0xFFFF8A87u); // 801DA8D4
  goto L_801DA8FC; // 801DA8D8
  c->r[0]=c->r[0]|0x00000000u; // 801DA8DC
L_801DA8E0:;
  c->r[3]=rotl(c->r[6],0)&0x000000FFu; // 801DA8E0
  c->r[3]=c->r[3]+0x00030000u; // 801DA8E4
  c->r[0]=c->r[3]+0xFFFF8A7Eu; // 801DA8E8
  c->r[0]=R8(c->r[7]+c->r[0]); // 801DA8EC
  cmpu(c,0,c->r[30],c->r[0]); // 801DA8F0
  if (crb(c,2)) { goto L_801DA908; } // 801DA8F4
  c->r[6]=c->r[6]+0x00000001u; // 801DA8F8
L_801DA8FC:;
  c->r[0]=rotl(c->r[6],0)&0x000000FFu; // 801DA8FC
  cmpu(c,0,c->r[0],c->r[4]); // 801DA900
  if (crb(c,0)) { IRQCHK(c); goto L_801DA8E0; } // 801DA904
L_801DA908:;
  c->r[4]=c->r[7]+0x00030000u; // 801DA908
  goto L_801DA92C; // 801DA90C
L_801DA910:;
  c->r[3]=rotl(c->r[6],0)&0x000000FFu; // 801DA910
  c->r[6]=c->r[6]+0x00000001u; // 801DA914
  c->r[3]=c->r[3]+0x00030000u; // 801DA918
  c->r[3]=c->r[3]+0xFFFF8A7Eu; // 801DA91C
  c->r[3]=c->r[7]+c->r[3]; // 801DA920
  c->r[0]=R8(c->r[3]+0x00000001u); // 801DA924
  W8(c->r[3]+0x00000000u,c->r[0]); // 801DA928
L_801DA92C:;
  c->r[3]=R8(c->r[4]+0xFFFF8A87u); // 801DA92C
  c->r[5]=rotl(c->r[6],0)&0x000000FFu; // 801DA930
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801DA934
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 801DA938
  if (crb(c,0)) { IRQCHK(c); goto L_801DA910; } // 801DA93C
  c->r[4]=c->r[31]+0x00030000u; // 801DA940
  c->r[3]=R8(c->r[4]+0xFFFF8A87u); // 801DA944
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801DA948
  W8(c->r[4]+0xFFFF8A87u,c->r[0]); // 801DA94C
  goto L_801DA96C; // 801DA950
L_801DA954:;
  c->r[3]=0u+0x00010000u; // 801DA954
  c->r[4]=0u+0x80280000u; // 801DA958
  c->r[0]=c->r[3]+0xFFFFFFF8u; // 801DA95C
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801DA960
  c->r[4]=c->r[4]+0xFFFFE080u; // 801DA964
  c->lr=0x801DA96Cu; f_801DB1E0(c); // 801DA968
L_801DA96C:;
  c->lr=0x801DA970u; f_801DB160(c); // 801DA96C
L_801DA970:;
  c->r[11]=c->r[1]+0x00000020u; // 801DA970
  c->lr=0x801DA978u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DA974
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DA978
  c->lr=c->r[0]; // 801DA97C
  c->r[1]=c->r[1]+0x00000020u; // 801DA980
  return; // 801DA984
}

// gki_timers_init
void f_801DA990(Ctx* __restrict c) {
  trace_call(0x801DA990u);
  c->r[3]=0u+0x802E0000u; // 801DA990
  c->r[0]=0u+0x00000000u; // 801DA994
  c->r[3]=c->r[3]+0xFFFFBF68u; // 801DA998
  c->r[3]=c->r[3]+0x00030000u; // 801DA99C
  W32(c->r[3]+0xFFFF8838u,c->r[0]); // 801DA9A0
  W32(c->r[3]+0xFFFF883Cu,c->r[0]); // 801DA9A4
  W32(c->r[3]+0xFFFF8840u,c->r[0]); // 801DA9A8
  W32(c->r[3]+0xFFFF8860u,c->r[0]); // 801DA9AC
  W32(c->r[3]+0xFFFF8880u,c->r[0]); // 801DA9B0
  W32(c->r[3]+0xFFFF88A0u,c->r[0]); // 801DA9B4
  W32(c->r[3]+0xFFFF88C0u,c->r[0]); // 801DA9B8
  W32(c->r[3]+0xFFFF8844u,c->r[0]); // 801DA9BC
  W32(c->r[3]+0xFFFF8864u,c->r[0]); // 801DA9C0
  W32(c->r[3]+0xFFFF8884u,c->r[0]); // 801DA9C4
  W32(c->r[3]+0xFFFF88A4u,c->r[0]); // 801DA9C8
  W32(c->r[3]+0xFFFF88C4u,c->r[0]); // 801DA9CC
  W32(c->r[3]+0xFFFF8848u,c->r[0]); // 801DA9D0
  W32(c->r[3]+0xFFFF8868u,c->r[0]); // 801DA9D4
  W32(c->r[3]+0xFFFF8888u,c->r[0]); // 801DA9D8
  W32(c->r[3]+0xFFFF88A8u,c->r[0]); // 801DA9DC
  W32(c->r[3]+0xFFFF88C8u,c->r[0]); // 801DA9E0
  W32(c->r[3]+0xFFFF884Cu,c->r[0]); // 801DA9E4
  W32(c->r[3]+0xFFFF886Cu,c->r[0]); // 801DA9E8
  W32(c->r[3]+0xFFFF888Cu,c->r[0]); // 801DA9EC
  W32(c->r[3]+0xFFFF88ACu,c->r[0]); // 801DA9F0
  W32(c->r[3]+0xFFFF88CCu,c->r[0]); // 801DA9F4
  W32(c->r[3]+0xFFFF8850u,c->r[0]); // 801DA9F8
  W32(c->r[3]+0xFFFF8870u,c->r[0]); // 801DA9FC
  W32(c->r[3]+0xFFFF8890u,c->r[0]); // 801DAA00
  W32(c->r[3]+0xFFFF88B0u,c->r[0]); // 801DAA04
  W32(c->r[3]+0xFFFF88D0u,c->r[0]); // 801DAA08
  W32(c->r[3]+0xFFFF8854u,c->r[0]); // 801DAA0C
  W32(c->r[3]+0xFFFF8874u,c->r[0]); // 801DAA10
  W32(c->r[3]+0xFFFF8894u,c->r[0]); // 801DAA14
  W32(c->r[3]+0xFFFF88B4u,c->r[0]); // 801DAA18
  W32(c->r[3]+0xFFFF88D4u,c->r[0]); // 801DAA1C
  W32(c->r[3]+0xFFFF8858u,c->r[0]); // 801DAA20
  W32(c->r[3]+0xFFFF8878u,c->r[0]); // 801DAA24
  W32(c->r[3]+0xFFFF8898u,c->r[0]); // 801DAA28
  W32(c->r[3]+0xFFFF88B8u,c->r[0]); // 801DAA2C
  W32(c->r[3]+0xFFFF88D8u,c->r[0]); // 801DAA30
  W32(c->r[3]+0xFFFF885Cu,c->r[0]); // 801DAA34
  W32(c->r[3]+0xFFFF887Cu,c->r[0]); // 801DAA38
  W32(c->r[3]+0xFFFF889Cu,c->r[0]); // 801DAA3C
  W32(c->r[3]+0xFFFF88BCu,c->r[0]); // 801DAA40
  W32(c->r[3]+0xFFFF88DCu,c->r[0]); // 801DAA44
  return; // 801DAA48
}

// GKI_get_tick_count
void f_801DAA50(Ctx* __restrict c) {
  trace_call(0x801DAA50u);
  c->r[3]=0u+0x802E0000u; // 801DAA50
  c->r[3]=c->r[3]+0xFFFFBF68u; // 801DAA54
  c->r[3]=c->r[3]+0x00030000u; // 801DAA58
  c->r[3]=R32(c->r[3]+0xFFFF8828u); // 801DAA5C
  return; // 801DAA60
}

// GKI_start_timer
void f_801DAA70(Ctx* __restrict c) {
  trace_call(0x801DAA70u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DAA70
  c->r[0]=c->lr; // 801DAA74
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DAA78
  c->r[11]=c->r[1]+0x00000020u; // 801DAA7C
  c->lr=0x801DAA84u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DAA80
  c->r[27]=c->r[3]|c->r[3]; // 801DAA84
  c->r[29]=c->r[4]|c->r[4]; // 801DAA88
  c->r[31]=c->r[5]|c->r[5]; // 801DAA8C
  c->lr=0x801DAA94u; f_801DB150(c); // 801DAA90
  cmps(c,0,(int32_t)c->r[29],0); // 801DAA94
  c->r[28]=c->r[3]|c->r[3]; // 801DAA98
  c->r[30]=0u+0x00000000u; // 801DAA9C
  if (crb(c,1)) { goto L_801DAAA8; } // 801DAAA0
  c->r[29]=0u+0x00000001u; // 801DAAA4
L_801DAAA8:;
  c->r[0]=0u-c->r[31]; // 801DAAA8
  c->r[0]=c->r[0]|c->r[31]; // 801DAAAC
  c->r[0]=sraw(c,c->r[0],31); // 801DAAB0
  c->r[31]=c->r[29]&c->r[0]; // 801DAAB4
  c->lr=0x801DAABCu; f_801DB190(c); // 801DAAB8
  c->r[4]=0u+0x802E0000u; // 801DAABC
  c->r[3]=0u+0x80000000u; // 801DAAC0
  c->r[4]=c->r[4]+0xFFFFBF68u; // 801DAAC4
  c->r[5]=c->r[4]+0x00030000u; // 801DAAC8
  c->r[4]=c->r[3]+0xFFFFFFFFu; // 801DAACC
  c->r[3]=R32(c->r[5]+0xFFFF8838u); // 801DAAD0
  c->r[0]=R32(c->r[5]+0xFFFF883Cu); // 801DAAD4
  c->r[3]=c->r[0]-c->r[3]; // 801DAAD8
  c->r[0]=c->r[4]-c->r[3]; // 801DAADC
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[29]); // 801DAAE0
  if (!crb(c,1)) { goto L_801DAAEC; } // 801DAAE4
  c->r[4]=c->r[29]+c->r[3]; // 801DAAE8
L_801DAAEC:;
  cmps(c,0,(int32_t)c->r[27],0); // 801DAAEC
  if (crb(c,2)) { goto L_801DAB00; } // 801DAAF0
  cmps(c,0,(int32_t)c->r[27],1); // 801DAAF4
  if (crb(c,2)) { goto L_801DAB20; } // 801DAAF8
  goto L_801DAB40; // 801DAAFC
L_801DAB00:;
  c->r[3]=0u+0x802E0000u; // 801DAB00
  c->r[5]=rotl(c->r[28],2)&0x000003FCu; // 801DAB04
  c->r[3]=c->r[3]+0xFFFFBF68u; // 801DAB08
  c->r[0]=c->r[3]+0x00030000u; // 801DAB0C
  c->r[3]=c->r[0]+c->r[5]; // 801DAB10
  W32(c->r[3]+0xFFFF8880u,c->r[31]); // 801DAB14
  W32(c->r[3]+0xFFFF8860u,c->r[4]); // 801DAB18
  goto L_801DAB44; // 801DAB1C
L_801DAB20:;
  c->r[3]=0u+0x802E0000u; // 801DAB20
  c->r[5]=rotl(c->r[28],2)&0x000003FCu; // 801DAB24
  c->r[3]=c->r[3]+0xFFFFBF68u; // 801DAB28
  c->r[0]=c->r[3]+0x00030000u; // 801DAB2C
  c->r[3]=c->r[0]+c->r[5]; // 801DAB30
  W32(c->r[3]+0xFFFF88C0u,c->r[31]); // 801DAB34
  W32(c->r[3]+0xFFFF88A0u,c->r[4]); // 801DAB38
  goto L_801DAB44; // 801DAB3C
L_801DAB40:;
  c->r[30]=0u+0x00000001u; // 801DAB40
L_801DAB44:;
  cmps(c,0,(int32_t)c->r[30],0); // 801DAB44
  if (!crb(c,2)) { goto L_801DABA0; } // 801DAB48
  cmps(c,0,(int32_t)c->r[29],0); // 801DAB4C
  if (!crb(c,1)) { goto L_801DABA0; } // 801DAB50
  c->r[3]=0u+0x802E0000u; // 801DAB54
  c->r[3]=c->r[3]+0xFFFFBF68u; // 801DAB58
  c->r[3]=c->r[3]+0x00030000u; // 801DAB5C
  c->r[4]=R32(c->r[3]+0xFFFF883Cu); // 801DAB60
  cmps(c,0,(int32_t)c->r[4],0); // 801DAB64
  if (crb(c,2)) { goto L_801DAB80; } // 801DAB68
  c->r[0]=R32(c->r[3]+0xFFFF8838u); // 801DAB6C
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 801DAB70
  if (!crb(c,0)) { goto L_801DABA0; } // 801DAB74
  cmps(c,0,(int32_t)c->r[0],0); // 801DAB78
  if (!crb(c,1)) { goto L_801DABA0; } // 801DAB7C
L_801DAB80:;
  c->r[3]=0u+0x802E0000u; // 801DAB80
  c->r[3]=c->r[3]+0xFFFFBF68u; // 801DAB84
  c->r[3]=c->r[3]+0x00030000u; // 801DAB88
  c->r[0]=R32(c->r[3]+0xFFFF8838u); // 801DAB8C
  c->r[0]=c->r[4]-c->r[0]; // 801DAB90
  c->r[0]=c->r[29]+c->r[0]; // 801DAB94
  W32(c->r[3]+0xFFFF883Cu,c->r[0]); // 801DAB98
  W32(c->r[3]+0xFFFF8838u,c->r[29]); // 801DAB9C
L_801DABA0:;
  c->lr=0x801DABA4u; f_801DB160(c); // 801DABA0
  c->r[11]=c->r[1]+0x00000020u; // 801DABA4
  c->lr=0x801DABACu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DABA8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DABAC
  c->lr=c->r[0]; // 801DABB0
  c->r[1]=c->r[1]+0x00000020u; // 801DABB4
  return; // 801DABB8
}

// GKI_stop_timer
void f_801DABC0(Ctx* __restrict c) {
  trace_call(0x801DABC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DABC0
  c->r[0]=c->lr; // 801DABC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DABC8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DABCC
  c->r[31]=c->r[3]|c->r[3]; // 801DABD0
  c->lr=0x801DABD8u; f_801DB150(c); // 801DABD4
  cmps(c,0,(int32_t)c->r[31],0); // 801DABD8
  if (crb(c,2)) { goto L_801DABEC; } // 801DABDC
  cmps(c,0,(int32_t)c->r[31],1); // 801DABE0
  if (crb(c,2)) { goto L_801DAC10; } // 801DABE4
  goto L_801DAC30; // 801DABE8
L_801DABEC:;
  c->r[4]=0u+0x802E0000u; // 801DABEC
  c->r[3]=rotl(c->r[3],2)&0x000003FCu; // 801DABF0
  c->r[4]=c->r[4]+0xFFFFBF68u; // 801DABF4
  c->r[5]=0u+0x00000000u; // 801DABF8
  c->r[0]=c->r[4]+0x00030000u; // 801DABFC
  c->r[3]=c->r[0]+c->r[3]; // 801DAC00
  W32(c->r[3]+0xFFFF8880u,c->r[5]); // 801DAC04
  W32(c->r[3]+0xFFFF8860u,c->r[5]); // 801DAC08
  goto L_801DAC30; // 801DAC0C
L_801DAC10:;
  c->r[4]=0u+0x802E0000u; // 801DAC10
  c->r[3]=rotl(c->r[3],2)&0x000003FCu; // 801DAC14
  c->r[4]=c->r[4]+0xFFFFBF68u; // 801DAC18
  c->r[5]=0u+0x00000000u; // 801DAC1C
  c->r[0]=c->r[4]+0x00030000u; // 801DAC20
  c->r[3]=c->r[0]+c->r[3]; // 801DAC24
  W32(c->r[3]+0xFFFF88C0u,c->r[5]); // 801DAC28
  W32(c->r[3]+0xFFFF88A0u,c->r[5]); // 801DAC2C
L_801DAC30:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DAC30
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DAC34
  c->lr=c->r[0]; // 801DAC38
  c->r[1]=c->r[1]+0x00000010u; // 801DAC3C
  return; // 801DAC40
}

// GKI_init_timer_list
void f_801DAC50(Ctx* __restrict c) {
  trace_call(0x801DAC50u);
  c->r[0]=0u+0x00000000u; // 801DAC50
  W32(c->r[3]+0x00000000u,c->r[0]); // 801DAC54
  W32(c->r[3]+0x00000004u,c->r[0]); // 801DAC58
  W32(c->r[3]+0x00000008u,c->r[0]); // 801DAC5C
  return; // 801DAC60
}

// GKI_update_timer_list
void f_801DAC70(Ctx* __restrict c) {
  trace_call(0x801DAC70u);
  c->r[6]=R32(c->r[3]+0x00000000u); // 801DAC70
  c->r[7]=0u+0x00000000u; // 801DAC74
  goto L_801DAC88; // 801DAC78
  c->r[0]=c->r[0]|0x00000000u; // 801DAC7C
L_801DAC80:;
  c->r[6]=R32(c->r[6]+0x00000000u); // 801DAC80
  c->r[7]=c->r[7]+0x00000001u; // 801DAC84
L_801DAC88:;
  cmps(c,0,(int32_t)c->r[6],0); // 801DAC88
  if (crb(c,2)) { goto L_801DAC9C; } // 801DAC8C
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 801DAC90
  cmps(c,0,(int32_t)c->r[0],0); // 801DAC94
  if (!crb(c,1)) { IRQCHK(c); goto L_801DAC80; } // 801DAC98
L_801DAC9C:;
  c->r[8]=c->r[4]|c->r[4]; // 801DAC9C
  c->r[0]=0u+0x00000000u; // 801DACA0
  goto L_801DACC8; // 801DACA4
L_801DACA8:;
  c->r[9]=R32(c->r[6]+0x0000000Cu); // 801DACA8
  c->r[5]=c->r[9]-c->r[8]; cr0(c,c->r[5]); // 801DACAC
  W32(c->r[6]+0x0000000Cu,c->r[5]); // 801DACB0
  if (crb(c,1)) { goto L_801DACC0; } // 801DACB4
  W32(c->r[6]+0x0000000Cu,c->r[0]); // 801DACB8
  c->r[7]=c->r[7]+0x00000001u; // 801DACBC
L_801DACC0:;
  c->r[8]=c->r[8]-c->r[9]; // 801DACC0
  c->r[6]=R32(c->r[6]+0x00000000u); // 801DACC4
L_801DACC8:;
  cmps(c,0,(int32_t)c->r[6],0); // 801DACC8
  if (crb(c,2)) { goto L_801DACD8; } // 801DACCC
  cmps(c,0,(int32_t)c->r[8],0); // 801DACD0
  if (crb(c,1)) { IRQCHK(c); goto L_801DACA8; } // 801DACD4
L_801DACD8:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 801DACD8
  cmps(c,0,(int32_t)c->r[0],0); // 801DACDC
  if (!crb(c,1)) { goto L_801DACF8; } // 801DACE0
  c->r[0]=c->r[0]-c->r[4]; cr0(c,c->r[0]); // 801DACE4
  W32(c->r[3]+0x00000008u,c->r[0]); // 801DACE8
  if (!crb(c,0)) { goto L_801DACF8; } // 801DACEC
  c->r[0]=0u+0x00000000u; // 801DACF0
  W32(c->r[3]+0x00000008u,c->r[0]); // 801DACF4
L_801DACF8:;
  c->r[3]=c->r[7]|c->r[7]; // 801DACF8
  return; // 801DACFC
}

// GKI_add_to_timer_list
void f_801DAD00(Ctx* __restrict c) {
  trace_call(0x801DAD00u);
  c->r[5]=R32(c->r[4]+0x0000000Cu); // 801DAD00
  cmps(c,0,(int32_t)c->r[5],0); // 801DAD04
  if (crb(c,0)) return; // 801DAD08
  c->r[0]=R32(c->r[3]+0x00000008u); // 801DAD0C
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 801DAD10
  if (crb(c,0)) { goto L_801DAD68; } // 801DAD14
  c->r[0]=R32(c->r[3]+0x00000000u); // 801DAD18
  cmps(c,0,(int32_t)c->r[0],0); // 801DAD1C
  if (!crb(c,2)) { goto L_801DAD2C; } // 801DAD20
  W32(c->r[3]+0x00000000u,c->r[4]); // 801DAD24
  goto L_801DAD44; // 801DAD28
L_801DAD2C:;
  c->r[5]=R32(c->r[3]+0x00000004u); // 801DAD2C
  cmps(c,0,(int32_t)c->r[5],0); // 801DAD30
  if (crb(c,2)) { goto L_801DAD3C; } // 801DAD34
  W32(c->r[5]+0x00000000u,c->r[4]); // 801DAD38
L_801DAD3C:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 801DAD3C
  W32(c->r[4]+0x00000004u,c->r[0]); // 801DAD40
L_801DAD44:;
  c->r[0]=0u+0x00000000u; // 801DAD44
  W32(c->r[4]+0x00000000u,c->r[0]); // 801DAD48
  W32(c->r[3]+0x00000004u,c->r[4]); // 801DAD4C
  c->r[0]=R32(c->r[3]+0x00000008u); // 801DAD50
  c->r[5]=R32(c->r[4]+0x0000000Cu); // 801DAD54
  c->r[0]=c->r[5]-c->r[0]; // 801DAD58
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 801DAD5C
  W32(c->r[3]+0x00000008u,c->r[5]); // 801DAD60
  goto L_801DADE0; // 801DAD64
L_801DAD68:;
  c->r[6]=R32(c->r[3]+0x00000000u); // 801DAD68
  goto L_801DAD88; // 801DAD6C
L_801DAD70:;
  cmps(c,0,(int32_t)c->r[5],0); // 801DAD70
  if (!crb(c,1)) { goto L_801DAD84; } // 801DAD74
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 801DAD78
  c->r[0]=c->r[0]-c->r[5]; // 801DAD7C
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 801DAD80
L_801DAD84:;
  c->r[6]=R32(c->r[6]+0x00000000u); // 801DAD84
L_801DAD88:;
  c->r[5]=R32(c->r[6]+0x0000000Cu); // 801DAD88
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 801DAD8C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 801DAD90
  if (crb(c,1)) { IRQCHK(c); goto L_801DAD70; } // 801DAD94
  c->r[0]=R32(c->r[3]+0x00000000u); // 801DAD98
  cmpu(c,0,c->r[6],c->r[0]); // 801DAD9C
  if (!crb(c,2)) { goto L_801DADB8; } // 801DADA0
  W32(c->r[4]+0x00000000u,c->r[0]); // 801DADA4
  c->r[5]=R32(c->r[3]+0x00000000u); // 801DADA8
  W32(c->r[5]+0x00000004u,c->r[4]); // 801DADAC
  W32(c->r[3]+0x00000000u,c->r[4]); // 801DADB0
  goto L_801DADD0; // 801DADB4
L_801DADB8:;
  c->r[3]=R32(c->r[6]+0x00000004u); // 801DADB8
  W32(c->r[3]+0x00000000u,c->r[4]); // 801DADBC
  c->r[0]=R32(c->r[6]+0x00000004u); // 801DADC0
  W32(c->r[4]+0x00000004u,c->r[0]); // 801DADC4
  W32(c->r[6]+0x00000004u,c->r[4]); // 801DADC8
  W32(c->r[4]+0x00000000u,c->r[6]); // 801DADCC
L_801DADD0:;
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 801DADD0
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 801DADD4
  c->r[0]=c->r[0]-c->r[3]; // 801DADD8
  W32(c->r[6]+0x0000000Cu,c->r[0]); // 801DADDC
L_801DADE0:;
  c->r[0]=0u+0x00000001u; // 801DADE0
  W8(c->r[4]+0x00000016u,c->r[0]); // 801DADE4
  return; // 801DADE8
}

// GKI_remove_from_timer_list
void f_801DADF0(Ctx* __restrict c) {
  trace_call(0x801DADF0u);
  cmps(c,0,(int32_t)c->r[4],0); // 801DADF0
  if (crb(c,2)) return; // 801DADF4
  c->r[0]=R8(c->r[4]+0x00000016u); // 801DADF8
  cmps(c,0,(int32_t)c->r[0],0); // 801DADFC
  if (crb(c,2)) return; // 801DAE00
  c->r[0]=R32(c->r[3]+0x00000000u); // 801DAE04
  cmps(c,0,(int32_t)c->r[0],0); // 801DAE08
  if (!crb(c,2)) { goto L_801DAE14; } // 801DAE0C
  return; // 801DAE10
L_801DAE14:;
  c->r[6]=R32(c->r[4]+0x00000000u); // 801DAE14
  cmps(c,0,(int32_t)c->r[6],0); // 801DAE18
  if (crb(c,2)) { goto L_801DAE34; } // 801DAE1C
  c->r[5]=R32(c->r[6]+0x0000000Cu); // 801DAE20
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 801DAE24
  c->r[0]=c->r[5]+c->r[0]; // 801DAE28
  W32(c->r[6]+0x0000000Cu,c->r[0]); // 801DAE2C
  goto L_801DAE44; // 801DAE30
L_801DAE34:;
  c->r[5]=R32(c->r[4]+0x0000000Cu); // 801DAE34
  c->r[0]=R32(c->r[3]+0x00000008u); // 801DAE38
  c->r[0]=c->r[0]-c->r[5]; // 801DAE3C
  W32(c->r[3]+0x00000008u,c->r[0]); // 801DAE40
L_801DAE44:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801DAE44
  cmpu(c,0,c->r[0],c->r[4]); // 801DAE48
  if (!crb(c,2)) { goto L_801DAE80; } // 801DAE4C
  c->r[5]=R32(c->r[4]+0x00000000u); // 801DAE50
  W32(c->r[3]+0x00000000u,c->r[5]); // 801DAE54
  cmps(c,0,(int32_t)c->r[5],0); // 801DAE58
  if (crb(c,2)) { goto L_801DAE68; } // 801DAE5C
  c->r[0]=0u+0x00000000u; // 801DAE60
  W32(c->r[5]+0x00000004u,c->r[0]); // 801DAE64
L_801DAE68:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 801DAE68
  cmpu(c,0,c->r[0],c->r[4]); // 801DAE6C
  if (!crb(c,2)) { goto L_801DAEF8; } // 801DAE70
  c->r[0]=0u+0x00000000u; // 801DAE74
  W32(c->r[3]+0x00000004u,c->r[0]); // 801DAE78
  goto L_801DAEF8; // 801DAE7C
L_801DAE80:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 801DAE80
  cmpu(c,0,c->r[0],c->r[4]); // 801DAE84
  if (!crb(c,2)) { goto L_801DAEA8; } // 801DAE88
  c->r[5]=R32(c->r[4]+0x00000004u); // 801DAE8C
  W32(c->r[3]+0x00000004u,c->r[5]); // 801DAE90
  cmps(c,0,(int32_t)c->r[5],0); // 801DAE94
  if (crb(c,2)) { goto L_801DAEF8; } // 801DAE98
  c->r[0]=0u+0x00000000u; // 801DAE9C
  W32(c->r[5]+0x00000000u,c->r[0]); // 801DAEA0
  goto L_801DAEF8; // 801DAEA4
L_801DAEA8:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 801DAEA8
  cmps(c,0,(int32_t)c->r[3],0); // 801DAEAC
  if (crb(c,2)) return; // 801DAEB0
  c->r[0]=R32(c->r[3]+0x00000004u); // 801DAEB4
  cmpu(c,0,c->r[0],c->r[4]); // 801DAEB8
  if (!crb(c,2)) return; // 801DAEBC
  c->r[0]=R32(c->r[4]+0x00000004u); // 801DAEC0
  W32(c->r[3]+0x00000004u,c->r[0]); // 801DAEC4
  goto L_801DAED0; // 801DAEC8
  return; // 801DAECC
L_801DAED0:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 801DAED0
  cmps(c,0,(int32_t)c->r[3],0); // 801DAED4
  if (crb(c,2)) return; // 801DAED8
  c->r[0]=R32(c->r[3]+0x00000000u); // 801DAEDC
  cmpu(c,0,c->r[0],c->r[4]); // 801DAEE0
  if (!crb(c,2)) return; // 801DAEE4
  c->r[0]=R32(c->r[4]+0x00000000u); // 801DAEE8
  W32(c->r[3]+0x00000000u,c->r[0]); // 801DAEEC
  goto L_801DAEF8; // 801DAEF0
  return; // 801DAEF4
L_801DAEF8:;
  c->r[3]=0u+0x00000000u; // 801DAEF8
  c->r[0]=0u+0x80000000u; // 801DAEFC
  W32(c->r[4]+0x00000004u,c->r[3]); // 801DAF00
  W32(c->r[4]+0x00000000u,c->r[3]); // 801DAF04
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 801DAF08
  W8(c->r[4]+0x00000016u,c->r[3]); // 801DAF0C
  return; // 801DAF10
}

// GKI_init
void f_801DAF20(Ctx* __restrict c) {
  trace_call(0x801DAF20u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DAF20
  c->r[0]=c->lr; // 801DAF24
  c->r[5]=0u+0x00030000u; // 801DAF28
  c->r[4]=0u+0x00000000u; // 801DAF2C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DAF30
  c->r[5]=c->r[5]+0xFFFF8AE0u; // 801DAF34
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DAF38
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DAF3C
  c->r[30]=0u+0x802E0000u; // 801DAF40
  c->r[3]=c->r[30]+0xFFFFBF68u; // 801DAF44
  c->lr=0x801DAF4Cu; f_800046B4(c); // 801DAF48
  c->lr=0x801DAF50u; f_801D9710(c); // 801DAF4C
  c->lr=0x801DAF54u; f_801DA990(c); // 801DAF50
  c->r[31]=c->r[30]+0xFFFFBF68u; // 801DAF54
  c->r[4]=0u+0x00000001u; // 801DAF58
  c->r[3]=c->r[31]+0x00030000u; // 801DAF5C
  c->r[0]=0u+0x00000000u; // 801DAF60
  W8(c->r[3]+0xFFFF8802u,c->r[4]); // 801DAF64
  W32(c->r[3]+0xFFFF87E8u,c->r[0]); // 801DAF68
  W32(c->r[3]+0xFFFF8848u,c->r[0]); // 801DAF6C
  W16(c->r[3]+0xFFFF880Cu,c->r[0]); // 801DAF70
  W8(c->r[30]+0xFFFFBF68u,c->r[0]); // 801DAF74
  c->lr=0x801DAF7Cu; f_8018D6C0(c); // 801DAF78
  c->r[0]=R8(c->r[30]+0xFFFFBF68u); // 801DAF7C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801DAF80
  c->r[4]=c->r[31]+c->r[0]; // 801DAF84
  W32(c->r[4]+0x00000004u,c->r[3]); // 801DAF88
  c->r[3]=R8(c->r[30]+0xFFFFBF68u); // 801DAF8C
  c->r[0]=c->r[3]+0x00000001u; // 801DAF90
  W8(c->r[30]+0xFFFFBF68u,c->r[0]); // 801DAF94
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DAF98
  c->r[30]=R32(c->r[1]+0x00000008u); // 801DAF9C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DAFA0
  c->lr=c->r[0]; // 801DAFA4
  c->r[1]=c->r[1]+0x00000010u; // 801DAFA8
  return; // 801DAFAC
}

// GKI_shutdown
void f_801DAFB0(Ctx* __restrict c) {
  trace_call(0x801DAFB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DAFB0
  c->r[0]=c->lr; // 801DAFB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DAFB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DAFBC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DAFC0
  c->lr=0x801DAFC8u; f_8018D6A0(c); // 801DAFC4
  c->r[30]=0u+0x802E0000u; // 801DAFC8
  c->r[0]=0u+0x00000000u; // 801DAFCC
  c->r[5]=R8(c->r[30]+0xFFFFBF68u); // 801DAFD0
  c->r[31]=c->r[30]+0xFFFFBF68u; // 801DAFD4
  c->r[4]=c->r[31]+0x00030000u; // 801DAFD8
  c->r[5]=rotl(c->r[5],2)&0xFFFFFFFCu; // 801DAFDC
  c->r[5]=c->r[31]+c->r[5]; // 801DAFE0
  W32(c->r[5]+0x00000004u,c->r[3]); // 801DAFE4
  c->r[3]=R8(c->r[30]+0xFFFFBF68u); // 801DAFE8
  c->r[3]=c->r[3]+0x00000001u; // 801DAFEC
  W8(c->r[30]+0xFFFFBF68u,c->r[3]); // 801DAFF0
  W8(c->r[4]+0xFFFF8802u,c->r[0]); // 801DAFF4
  c->r[3]=R8(c->r[30]+0xFFFFBF68u); // 801DAFF8
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801DAFFC
  W8(c->r[30]+0xFFFFBF68u,c->r[0]); // 801DB000
  c->r[0]=rotl(c->r[0],2)&0x000003FCu; // 801DB004
  c->r[3]=c->r[31]+c->r[0]; // 801DB008
  c->r[3]=R32(c->r[3]+0x00000004u); // 801DB00C
  c->lr=0x801DB014u; f_8018D6E0(c); // 801DB010
  goto L_801DB034; // 801DB014
L_801DB018:;
  c->r[3]=R8(c->r[30]+0xFFFFBF68u); // 801DB018
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801DB01C
  W8(c->r[30]+0xFFFFBF68u,c->r[0]); // 801DB020
  c->r[0]=rotl(c->r[0],2)&0x000003FCu; // 801DB024
  c->r[3]=c->r[31]+c->r[0]; // 801DB028
  c->r[3]=R32(c->r[3]+0x00000004u); // 801DB02C
  c->lr=0x801DB034u; f_8018D6E0(c); // 801DB030
L_801DB034:;
  c->r[0]=R8(c->r[30]+0xFFFFBF68u); // 801DB034
  cmps(c,0,(int32_t)c->r[0],0); // 801DB038
  if (!crb(c,2)) { IRQCHK(c); goto L_801DB018; } // 801DB03C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DB040
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DB044
  c->r[30]=R32(c->r[1]+0x00000008u); // 801DB048
  c->lr=c->r[0]; // 801DB04C
  c->r[1]=c->r[1]+0x00000010u; // 801DB050
  return; // 801DB054
}

// GKI_run
void f_801DB060(Ctx* __restrict c) {
  trace_call(0x801DB060u);
  return; // 801DB060
}

// GKI_sched_lock
void f_801DB070(Ctx* __restrict c) {
  trace_call(0x801DB070u);
  return; // 801DB070
}

// GKI_sched_unlock
void f_801DB080(Ctx* __restrict c) {
  trace_call(0x801DB080u);
  return; // 801DB080
}

// GKI_delay
void f_801DB090(Ctx* __restrict c) {
  trace_call(0x801DB090u);
  return; // 801DB090
}

// GKI_send_event
void f_801DB0A0(Ctx* __restrict c) {
  trace_call(0x801DB0A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DB0A0
  c->r[0]=c->lr; // 801DB0A4
  cmpu(c,0,c->r[3],0x00000008u); // 801DB0A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DB0AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DB0B0
  c->r[31]=c->r[4]|c->r[4]; // 801DB0B4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DB0B8
  c->r[30]=c->r[3]|c->r[3]; // 801DB0BC
  if (crb(c,0)) { goto L_801DB0CC; } // 801DB0C0
  c->r[3]=0u+0x00000001u; // 801DB0C4
  goto L_801DB12C; // 801DB0C8
L_801DB0CC:;
  c->lr=0x801DB0D0u; f_8018D6A0(c); // 801DB0CC
  c->r[7]=0u+0x802E0000u; // 801DB0D0
  c->r[0]=rotl(c->r[30],1)&0x000001FEu; // 801DB0D4
  c->r[5]=R8(c->r[7]+0xFFFFBF68u); // 801DB0D8
  c->r[6]=c->r[7]+0xFFFFBF68u; // 801DB0DC
  c->r[4]=c->r[6]+0x00030000u; // 801DB0E0
  c->r[5]=rotl(c->r[5],2)&0xFFFFFFFCu; // 801DB0E4
  c->r[5]=c->r[6]+c->r[5]; // 801DB0E8
  c->r[4]=c->r[4]+c->r[0]; // 801DB0EC
  W32(c->r[5]+0x00000004u,c->r[3]); // 801DB0F0
  c->r[3]=R8(c->r[7]+0xFFFFBF68u); // 801DB0F4
  c->r[0]=c->r[3]+0x00000001u; // 801DB0F8
  W8(c->r[7]+0xFFFFBF68u,c->r[0]); // 801DB0FC
  c->r[0]=R16(c->r[4]+0xFFFF8808u); // 801DB100
  c->r[0]=c->r[0]|c->r[31]; // 801DB104
  W16(c->r[4]+0xFFFF8808u,c->r[0]); // 801DB108
  c->r[3]=R8(c->r[7]+0xFFFFBF68u); // 801DB10C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801DB110
  W8(c->r[7]+0xFFFFBF68u,c->r[0]); // 801DB114
  c->r[0]=rotl(c->r[0],2)&0x000003FCu; // 801DB118
  c->r[3]=c->r[6]+c->r[0]; // 801DB11C
  c->r[3]=R32(c->r[3]+0x00000004u); // 801DB120
  c->lr=0x801DB128u; f_8018D6E0(c); // 801DB124
  c->r[3]=0u+0x00000000u; // 801DB128
L_801DB12C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DB12C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DB130
  c->r[30]=R32(c->r[1]+0x00000008u); // 801DB134
  c->lr=c->r[0]; // 801DB138
  c->r[1]=c->r[1]+0x00000010u; // 801DB13C
  return; // 801DB140
}

// GKI_get_taskid
void f_801DB150(Ctx* __restrict c) {
  trace_call(0x801DB150u);
  c->r[3]=0u+0x00000002u; // 801DB150
  return; // 801DB154
}

// GKI_enable
void f_801DB160(Ctx* __restrict c) {
  trace_call(0x801DB160u);
  c->r[5]=0u+0x802E0000u; // 801DB160
  c->r[4]=R8(c->r[5]+0xFFFFBF68u); // 801DB164
  c->r[3]=c->r[5]+0xFFFFBF68u; // 801DB168
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801DB16C
  W8(c->r[5]+0xFFFFBF68u,c->r[0]); // 801DB170
  c->r[0]=rotl(c->r[0],2)&0x000003FCu; // 801DB174
  c->r[3]=c->r[3]+c->r[0]; // 801DB178
  c->r[3]=R32(c->r[3]+0x00000004u); // 801DB17C
  f_8018D6E0(c); return; // 801DB180
}

// GKI_disable
void f_801DB190(Ctx* __restrict c) {
  trace_call(0x801DB190u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DB190
  c->r[0]=c->lr; // 801DB194
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DB198
  c->lr=0x801DB1A0u; f_8018D6A0(c); // 801DB19C
  c->r[5]=0u+0x802E0000u; // 801DB1A0
  c->r[0]=R8(c->r[5]+0xFFFFBF68u); // 801DB1A4
  c->r[4]=c->r[5]+0xFFFFBF68u; // 801DB1A8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801DB1AC
  c->r[4]=c->r[4]+c->r[0]; // 801DB1B0
  W32(c->r[4]+0x00000004u,c->r[3]); // 801DB1B4
  c->r[3]=R8(c->r[5]+0xFFFFBF68u); // 801DB1B8
  c->r[0]=c->r[3]+0x00000001u; // 801DB1BC
  W8(c->r[5]+0xFFFFBF68u,c->r[0]); // 801DB1C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DB1C4
  c->lr=c->r[0]; // 801DB1C8
  c->r[1]=c->r[1]+0x00000010u; // 801DB1CC
  return; // 801DB1D0
}

// GKI_exception
void f_801DB1E0(Ctx* __restrict c) {
  trace_call(0x801DB1E0u);
  return; // 801DB1E0
}

// GKI_os_malloc
void f_801DB1F0(Ctx* __restrict c) {
  trace_call(0x801DB1F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DB1F0
  c->r[0]=c->lr; // 801DB1F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DB1F8
  c->lr=0x801DB200u; f_801D2AC0(c); // 801DB1FC
  cmps(c,0,(int32_t)c->r[3],0); // 801DB200
  if (!crb(c,2)) { goto L_801DB20C; } // 801DB204
  c->r[3]=0u+0x00000000u; // 801DB208
L_801DB20C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DB20C
  c->lr=c->r[0]; // 801DB210
  c->r[1]=c->r[1]+0x00000010u; // 801DB214
  return; // 801DB218
}

// GKI_os_free
void f_801DB220(Ctx* __restrict c) {
  trace_call(0x801DB220u);
  f_801D2B10(c); return; // 801DB220
}

// hcisu_h2_usb_cback
void f_801DB230(Ctx* __restrict c) {
  trace_call(0x801DB230u);
  cmps(c,0,(int32_t)c->r[3],4); // 801DB230
  if (!crb(c,2)) return; // 801DB234
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 801DB238
  f_801DC950(c); return; // 801DB23C
  return; // 801DB240
}

// hcisu_h2_receive_msg
void f_801DB250(Ctx* __restrict c) {
  trace_call(0x801DB250u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DB250
  c->r[0]=c->lr; // 801DB254
  W32(c->r[1]+0x00000064u,c->r[0]); // 801DB258
  c->r[11]=c->r[1]+0x00000060u; // 801DB25C
  c->lr=0x801DB264u; f_802079EC(c); // 801DB260
  c->r[0]=R8(c->r[4]+0x0000001Eu); // 801DB264
  c->r[15]=c->r[4]|c->r[4]; // 801DB268
  c->r[19]=0u+0x00000000u; // 801DB26C
  cmpu(c,0,c->r[0],0x00000002u); // 801DB270
  if (crb(c,2)) { goto L_801DB280; } // 801DB274
  c->r[3]=0u+0x00000000u; // 801DB278
  goto L_801DB5D0; // 801DB27C
L_801DB280:;
  c->r[20]=c->r[3]+0x00000001u; // 801DB280
  c->r[0]=rotl(c->r[3],1)&0x0001FFFEu; // 801DB284
  c->r[31]=0u+0x80300000u; // 801DB288
  c->r[22]=c->r[4]+c->r[3]; // 801DB28C
  c->r[16]=rotl(c->r[20],0)&0x0000FFFFu; // 801DB290
  c->r[23]=rotl(c->r[3],2)&0x0003FFFCu; // 801DB294
  c->r[21]=c->r[4]+c->r[0]; // 801DB298
  c->r[31]=c->r[31]+0x00004A48u; // 801DB29C
  c->r[29]=0u+0x00000000u; // 801DB2A0
  c->r[30]=0u+0x00000004u; // 801DB2A4
  c->r[28]=c->r[2]+0xFFFFA258u; // 801DB2A8
  c->r[25]=0u+0x00000003u; // 801DB2AC
  c->r[24]=0u+0x00000002u; // 801DB2B0
  c->r[14]=0u+0x80280000u; // 801DB2B4
  c->r[26]=c->r[2]+0xFFFFA260u; // 801DB2B8
  c->r[27]=0u+0x00000001u; // 801DB2BC
L_801DB2C0:;
  c->r[3]=rotl(c->r[16],0)&0x000000FFu; // 801DB2C0
  c->r[4]=c->r[1]+0x00000008u; // 801DB2C4
  c->r[5]=0u+0x00000001u; // 801DB2C8
  c->lr=0x801DB2D0u; f_801DC250(c); // 801DB2CC
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801DB2D0
  if (crb(c,2)) { goto L_801DB5CC; } // 801DB2D4
  c->r[0]=R8(c->r[22]+0x0000001Au); // 801DB2D8
  c->r[17]=0u+0x00000000u; // 801DB2DC
  c->r[19]=c->r[19]+0x00000001u; // 801DB2E0
  cmps(c,0,(int32_t)c->r[0],0); // 801DB2E4
  if (crb(c,2)) { goto L_801DB310; } // 801DB2E8
  cmps(c,0,(int32_t)c->r[0],1); // 801DB2EC
  if (crb(c,2)) { goto L_801DB3B8; } // 801DB2F0
  cmps(c,0,(int32_t)c->r[0],2); // 801DB2F4
  if (crb(c,2)) { goto L_801DB4B0; } // 801DB2F8
  cmps(c,0,(int32_t)c->r[0],3); // 801DB2FC
  if (crb(c,2)) { goto L_801DB4FC; } // 801DB300
  cmps(c,0,(int32_t)c->r[0],4); // 801DB304
  if (crb(c,2)) { goto L_801DB594; } // 801DB308
  goto L_801DB5AC; // 801DB30C
L_801DB310:;
  cmpu(c,0,c->r[16],0x00000001u); // 801DB310
  if (!crb(c,2)) { goto L_801DB32C; } // 801DB314
  c->r[3]=0u+0x00000002u; // 801DB318
  c->lr=0x801DB320u; f_801D9B80(c); // 801DB31C
  W32(c->r[15]+c->r[23],c->r[3]); // 801DB320
  W8(c->r[22]+0x00000014u,c->r[30]); // 801DB324
  goto L_801DB360; // 801DB328
L_801DB32C:;
  cmpu(c,0,c->r[16],0x00000002u); // 801DB32C
  if (!crb(c,2)) { goto L_801DB348; } // 801DB330
  c->r[3]=0u+0x00000003u; // 801DB334
  c->lr=0x801DB33Cu; f_801D9B80(c); // 801DB338
  W32(c->r[15]+c->r[23],c->r[3]); // 801DB33C
  W8(c->r[22]+0x00000014u,c->r[24]); // 801DB340
  goto L_801DB360; // 801DB344
L_801DB348:;
  cmpu(c,0,c->r[16],0x00000003u); // 801DB348
  if (!crb(c,2)) { goto L_801DB5AC; } // 801DB34C
  c->r[3]=0u+0x00000001u; // 801DB350
  c->lr=0x801DB358u; f_801D9B80(c); // 801DB354
  W32(c->r[15]+c->r[23],c->r[3]); // 801DB358
  W8(c->r[22]+0x00000014u,c->r[25]); // 801DB35C
L_801DB360:;
  c->r[3]=R32(c->r[15]+c->r[23]); // 801DB360
  cmps(c,0,(int32_t)c->r[3],0); // 801DB364
  if (crb(c,2)) { goto L_801DB398; } // 801DB368
  W16(c->r[3]+0x00000002u,c->r[29]); // 801DB36C
  c->r[0]=R8(c->r[22]+0x00000014u); // 801DB370
  c->r[3]=R32(c->r[15]+c->r[23]); // 801DB374
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DB378
  c->r[4]=c->r[26]+c->r[0]; // 801DB37C
  c->r[0]=R16(c->r[4]+0xFFFFFFFEu); // 801DB380
  W16(c->r[3]+0x00000000u,c->r[0]); // 801DB384
  c->r[3]=R32(c->r[15]+c->r[23]); // 801DB388
  W16(c->r[3]+0x00000004u,c->r[29]); // 801DB38C
  W8(c->r[22]+0x0000001Au,c->r[27]); // 801DB390
  goto L_801DB3A8; // 801DB394
L_801DB398:;
  c->r[4]=c->r[14]+0xFFFFE098u; // 801DB398
  c->r[3]=0u+0x00070000u; // 801DB39C
  c->lr=0x801DB3A4u; f_801DC730(c); // 801DB3A0
  W8(c->r[22]+0x0000001Au,c->r[24]); // 801DB3A4
L_801DB3A8:;
  c->r[0]=R8(c->r[22]+0x00000014u); // 801DB3A8
  c->r[3]=c->r[28]+c->r[0]; // 801DB3AC
  c->r[0]=R8(c->r[3]+0xFFFFFFFFu); // 801DB3B0
  W16(c->r[21]+0x0000000Cu,c->r[0]); // 801DB3B4
L_801DB3B8:;
  c->r[6]=R32(c->r[15]+c->r[23]); // 801DB3B8
  c->r[5]=R8(c->r[1]+0x00000008u); // 801DB3BC
  c->r[4]=R16(c->r[6]+0x00000002u); // 801DB3C0
  c->r[3]=c->r[6]+c->r[4]; // 801DB3C4
  c->r[0]=c->r[4]+0x00000001u; // 801DB3C8
  W8(c->r[3]+0x00000008u,c->r[5]); // 801DB3CC
  W16(c->r[6]+0x00000002u,c->r[0]); // 801DB3D0
  c->r[3]=R16(c->r[21]+0x0000000Cu); // 801DB3D4
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801DB3D8
  W16(c->r[21]+0x0000000Cu,c->r[0]); // 801DB3DC
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801DB3E0
  if (!crb(c,2)) { goto L_801DB4A4; } // 801DB3E4
  c->r[0]=R8(c->r[22]+0x00000014u); // 801DB3E8
  c->r[18]=R8(c->r[1]+0x00000008u); // 801DB3EC
  cmpu(c,0,c->r[0],0x00000002u); // 801DB3F0
  if (!crb(c,2)) { goto L_801DB438; } // 801DB3F4
  c->r[0]=R8(c->r[22]+0x00000017u); // 801DB3F8
  c->r[4]=rotl(c->r[18],8)&0x00FFFF00u; // 801DB3FC
  c->r[3]=R32(c->r[15]+c->r[23]); // 801DB400
  c->r[0]=c->r[4]+c->r[0]; // 801DB404
  c->r[18]=rotl(c->r[0],0)&0x0000FFFFu; // 801DB408
  c->lr=0x801DB410u; f_801F7E80(c); // 801DB40C
  cmps(c,0,(int32_t)c->r[3],0); // 801DB410
  W32(c->r[15]+c->r[23],c->r[3]); // 801DB414
  if (!crb(c,2)) { goto L_801DB438; } // 801DB418
  cmps(c,0,(int32_t)c->r[18],0); // 801DB41C
  W16(c->r[21]+0x0000000Cu,c->r[18]); // 801DB420
  if (!crb(c,2)) { goto L_801DB430; } // 801DB424
  W8(c->r[22]+0x0000001Au,c->r[29]); // 801DB428
  goto L_801DB5AC; // 801DB42C
L_801DB430:;
  W8(c->r[22]+0x0000001Au,c->r[30]); // 801DB430
  goto L_801DB5AC; // 801DB434
L_801DB438:;
  W16(c->r[21]+0x0000000Cu,c->r[18]); // 801DB438
  c->r[3]=R32(c->r[15]+c->r[23]); // 801DB43C
  c->lr=0x801DB444u; f_801D9DE0(c); // 801DB440
  c->r[0]=R8(c->r[22]+0x00000014u); // 801DB444
  c->r[4]=rotl(c->r[3],0)&0x0000FFFFu; // 801DB448
  c->r[3]=c->r[28]+c->r[0]; // 801DB44C
  c->r[0]=R8(c->r[3]+0xFFFFFFFFu); // 801DB450
  c->r[3]=c->r[18]+c->r[0]; // 801DB454
  c->r[0]=c->r[3]+0x00000008u; // 801DB458
  cmpu(c,0,c->r[0],c->r[4]); // 801DB45C
  if (!crb(c,1)) { goto L_801DB488; } // 801DB460
  c->r[3]=R32(c->r[15]+c->r[23]); // 801DB464
  c->lr=0x801DB46Cu; f_801D9C70(c); // 801DB468
  W32(c->r[15]+c->r[23],c->r[29]); // 801DB46C
  c->r[3]=0u+0x80280000u; // 801DB470
  c->r[4]=c->r[3]+0xFFFFE0D4u; // 801DB474
  W8(c->r[22]+0x0000001Au,c->r[30]); // 801DB478
  c->r[3]=0u+0x00070000u; // 801DB47C
  c->lr=0x801DB484u; f_801DC730(c); // 801DB480
  goto L_801DB5AC; // 801DB484
L_801DB488:;
  cmps(c,0,(int32_t)c->r[18],0); // 801DB488
  if (crb(c,2)) { goto L_801DB498; } // 801DB48C
  W8(c->r[22]+0x0000001Au,c->r[25]); // 801DB490
  goto L_801DB5AC; // 801DB494
L_801DB498:;
  W8(c->r[22]+0x0000001Au,c->r[29]); // 801DB498
  c->r[17]=0u+0x00000001u; // 801DB49C
  goto L_801DB5AC; // 801DB4A0
L_801DB4A4:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 801DB4A4
  W8(c->r[22]+0x00000017u,c->r[0]); // 801DB4A8
  goto L_801DB5AC; // 801DB4AC
L_801DB4B0:;
  c->r[3]=R16(c->r[21]+0x0000000Cu); // 801DB4B0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801DB4B4
  W16(c->r[21]+0x0000000Cu,c->r[0]); // 801DB4B8
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801DB4BC
  if (!crb(c,2)) { goto L_801DB4F0; } // 801DB4C0
  c->r[0]=R8(c->r[22]+0x00000014u); // 801DB4C4
  c->r[3]=R8(c->r[1]+0x00000008u); // 801DB4C8
  cmpu(c,0,c->r[0],0x00000002u); // 801DB4CC
  if (!crb(c,2)) { goto L_801DB4E4; } // 801DB4D0
  c->r[0]=R8(c->r[22]+0x00000017u); // 801DB4D4
  c->r[3]=rotl(c->r[3],8)&0x00FFFF00u; // 801DB4D8
  c->r[0]=c->r[3]+c->r[0]; // 801DB4DC
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801DB4E0
L_801DB4E4:;
  W16(c->r[21]+0x0000000Cu,c->r[3]); // 801DB4E4
  W8(c->r[22]+0x0000001Au,c->r[30]); // 801DB4E8
  goto L_801DB5AC; // 801DB4EC
L_801DB4F0:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 801DB4F0
  W8(c->r[22]+0x00000017u,c->r[0]); // 801DB4F4
  goto L_801DB5AC; // 801DB4F8
L_801DB4FC:;
  c->r[7]=R32(c->r[15]+c->r[23]); // 801DB4FC
  c->r[3]=rotl(c->r[20],0)&0x000000FFu; // 801DB500
  c->r[6]=R8(c->r[1]+0x00000008u); // 801DB504
  c->r[5]=R16(c->r[7]+0x00000002u); // 801DB508
  c->r[4]=c->r[7]+c->r[5]; // 801DB50C
  c->r[0]=c->r[5]+0x00000001u; // 801DB510
  W8(c->r[4]+0x00000008u,c->r[6]); // 801DB514
  W16(c->r[7]+0x00000002u,c->r[0]); // 801DB518
  c->r[4]=R16(c->r[21]+0x0000000Cu); // 801DB51C
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801DB520
  W16(c->r[21]+0x0000000Cu,c->r[0]); // 801DB524
  c->r[5]=rotl(c->r[0],0)&0x0000FFFFu; // 801DB528
  c->r[4]=R32(c->r[15]+c->r[23]); // 801DB52C
  c->r[0]=R16(c->r[4]+0x00000002u); // 801DB530
  c->r[4]=c->r[4]+c->r[0]; // 801DB534
  c->r[4]=c->r[4]+0x00000008u; // 801DB538
  c->lr=0x801DB540u; f_801DC250(c); // 801DB53C
  c->r[4]=R32(c->r[15]+c->r[23]); // 801DB540
  c->r[19]=c->r[19]+c->r[3]; // 801DB544
  c->r[0]=R16(c->r[4]+0x00000002u); // 801DB548
  c->r[0]=c->r[0]+c->r[3]; // 801DB54C
  W16(c->r[4]+0x00000002u,c->r[0]); // 801DB550
  c->r[0]=R16(c->r[21]+0x0000000Cu); // 801DB554
  c->r[0]=c->r[0]-c->r[3]; // 801DB558
  W16(c->r[21]+0x0000000Cu,c->r[0]); // 801DB55C
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801DB560
  if (!crb(c,2)) { goto L_801DB5AC; } // 801DB564
  c->r[0]=R8(c->r[22]+0x00000014u); // 801DB568
  cmpu(c,0,c->r[0],0x00000002u); // 801DB56C
  if (!crb(c,2)) { goto L_801DB588; } // 801DB570
  c->lr=0x801DB578u; f_801F8050(c); // 801DB574
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801DB578
  if (!crb(c,2)) { goto L_801DB588; } // 801DB57C
  W8(c->r[22]+0x0000001Au,c->r[29]); // 801DB580
  goto L_801DB5AC; // 801DB584
L_801DB588:;
  W8(c->r[22]+0x0000001Au,c->r[29]); // 801DB588
  c->r[17]=0u+0x00000001u; // 801DB58C
  goto L_801DB5AC; // 801DB590
L_801DB594:;
  c->r[3]=R16(c->r[21]+0x0000000Cu); // 801DB594
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801DB598
  W16(c->r[21]+0x0000000Cu,c->r[0]); // 801DB59C
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801DB5A0
  if (!crb(c,2)) { goto L_801DB5AC; } // 801DB5A4
  W8(c->r[22]+0x0000001Au,c->r[29]); // 801DB5A8
L_801DB5AC:;
  cmps(c,0,(int32_t)c->r[17],0); // 801DB5AC
  if (crb(c,2)) { IRQCHK(c); goto L_801DB2C0; } // 801DB5B0
  c->r[3]=R8(c->r[31]+0x0000001Fu); // 801DB5B4
  c->r[4]=0u+0x00000000u; // 801DB5B8
  c->r[5]=R32(c->r[15]+c->r[23]); // 801DB5BC
  c->lr=0x801DB5C4u; f_801D9E30(c); // 801DB5C0
  W32(c->r[15]+c->r[23],c->r[29]); // 801DB5C4
  IRQCHK(c); goto L_801DB2C0; // 801DB5C8
L_801DB5CC:;
  c->r[3]=c->r[19]|c->r[19]; // 801DB5CC
L_801DB5D0:;
  c->r[11]=c->r[1]+0x00000060u; // 801DB5D0
  c->lr=0x801DB5D8u; f_80207A38(c); // 801DB5D4
  c->r[0]=R32(c->r[1]+0x00000064u); // 801DB5D8
  c->lr=c->r[0]; // 801DB5DC
  c->r[1]=c->r[1]+0x00000060u; // 801DB5E0
  return; // 801DB5E4
}

// hcisu_h2_send_msg_now
void f_801DB5F0(Ctx* __restrict c) {
  trace_call(0x801DB5F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DB5F0
  c->r[0]=c->lr; // 801DB5F4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DB5F8
  c->r[11]=c->r[1]+0x00000020u; // 801DB5FC
  c->lr=0x801DB604u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DB600
  c->r[5]=R16(c->r[4]+0x00000000u); // 801DB604
  c->r[27]=c->r[4]|c->r[4]; // 801DB608
  c->r[0]=R16(c->r[4]+0x00000004u); // 801DB60C
  cmpu(c,0,c->r[5],0x00002100u); // 801DB610
  c->r[3]=c->r[4]+c->r[0]; // 801DB614
  c->r[6]=c->r[3]+0x00000008u; // 801DB618
  if (!crb(c,2)) { goto L_801DB628; } // 801DB61C
  c->r[28]=0u+0x00000002u; // 801DB620
  goto L_801DB644; // 801DB624
L_801DB628:;
  cmpu(c,0,c->r[5],0x00002200u); // 801DB628
  if (!crb(c,2)) { goto L_801DB638; } // 801DB62C
  c->r[28]=0u+0x00000003u; // 801DB630
  goto L_801DB644; // 801DB634
L_801DB638:;
  cmpu(c,0,c->r[5],0x00002000u); // 801DB638
  if (!crb(c,2)) { goto L_801DB644; } // 801DB63C
  c->r[28]=0u+0x00000000u; // 801DB640
L_801DB644:;
  cmpu(c,0,c->r[5],0x00002100u); // 801DB644
  if (!crb(c,2)) { goto L_801DB768; } // 801DB648
  c->r[3]=0u+0x80310000u; // 801DB64C
  c->r[4]=R16(c->r[4]+0x00000002u); // 801DB650
  c->r[30]=c->r[3]+0xFFFF82F0u; // 801DB654
  c->r[0]=R16(c->r[30]+0x0000007Eu); // 801DB658
  cmpu(c,0,c->r[4],c->r[0]); // 801DB65C
  if (!crb(c,1)) { goto L_801DB768; } // 801DB660
  c->r[0]=R8(c->r[6]+0x00000001u); // 801DB664
  c->r[3]=R8(c->r[6]+0x00000000u); // 801DB668
  c->r[6]=c->r[6]+0x00000002u; // 801DB66C
  c->r[0]=rotl(c->r[0],8)&0x0000FF00u; // 801DB670
  c->r[0]=c->r[3]+c->r[0]; // 801DB674
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801DB678
  c->r[0]=c->r[0]&0x0000CFFFu; cr0(c,c->r[0]); // 801DB67C
  c->r[31]=c->r[0]|0x00001000u; // 801DB680
  c->r[29]=sraw(c,c->r[31],8); // 801DB684
  goto L_801DB758; // 801DB688
L_801DB68C:;
  c->r[4]=c->r[6]|c->r[6]; // 801DB68C
  c->r[3]=c->r[28]|c->r[28]; // 801DB690
  c->r[6]=c->r[27]|c->r[27]; // 801DB694
  c->lr=0x801DB69Cu; f_801DC260(c); // 801DB698
  c->r[3]=R16(c->r[27]+0x00000004u); // 801DB69C
  c->r[0]=R16(c->r[30]+0x0000007Cu); // 801DB6A0
  c->r[4]=R16(c->r[27]+0x00000002u); // 801DB6A4
  c->r[0]=c->r[3]+c->r[0]; // 801DB6A8
  W16(c->r[27]+0x00000004u,c->r[0]); // 801DB6AC
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801DB6B0
  c->r[5]=R16(c->r[30]+0x0000007Cu); // 801DB6B4
  c->r[3]=c->r[27]+c->r[0]; // 801DB6B8
  c->r[6]=c->r[3]+0x0000000Au; // 801DB6BC
  c->r[0]=c->r[4]-c->r[5]; // 801DB6C0
  W16(c->r[27]+0x00000002u,c->r[0]); // 801DB6C4
  W8(c->r[3]+0x00000008u,c->r[31]); // 801DB6C8
  W8(c->r[3]+0x00000009u,c->r[29]); // 801DB6CC
  c->r[3]=R16(c->r[27]+0x00000002u); // 801DB6D0
  c->r[0]=R16(c->r[30]+0x0000007Eu); // 801DB6D4
  cmpu(c,0,c->r[3],c->r[0]); // 801DB6D8
  if (!crb(c,1)) { goto L_801DB6FC; } // 801DB6DC
  c->r[0]=R16(c->r[30]+0x0000007Cu); // 801DB6E0
  W8(c->r[6]+0x00000000u,c->r[0]); // 801DB6E4
  c->r[0]=R16(c->r[30]+0x0000007Cu); // 801DB6E8
  c->r[0]=sraw(c,c->r[0],8); // 801DB6EC
  W8(c->r[6]+0x00000001u,c->r[0]); // 801DB6F0
  c->r[6]=c->r[6]+0x00000002u; // 801DB6F4
  goto L_801DB718; // 801DB6F8
L_801DB6FC:;
  c->r[0]=c->r[3]+0xFFFFFFFCu; // 801DB6FC
  W8(c->r[6]+0x00000000u,c->r[0]); // 801DB700
  c->r[3]=R16(c->r[27]+0x00000002u); // 801DB704
  c->r[0]=c->r[3]+0xFFFFFFFCu; // 801DB708
  c->r[0]=sraw(c,c->r[0],8); // 801DB70C
  W8(c->r[6]+0x00000001u,c->r[0]); // 801DB710
  c->r[6]=c->r[6]+0x00000002u; // 801DB714
L_801DB718:;
  c->r[3]=R16(c->r[27]+0x00000006u); // 801DB718
  cmps(c,0,(int32_t)c->r[3],0); // 801DB71C
  if (crb(c,2)) { goto L_801DB758; } // 801DB720
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801DB724
  W16(c->r[27]+0x00000006u,c->r[0]); // 801DB728
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801DB72C
  if (!crb(c,2)) { goto L_801DB758; } // 801DB730
  c->r[0]=0u+0x00001900u; // 801DB734
  c->r[3]=0u+0x80300000u; // 801DB738
  W16(c->r[27]+0x00000000u,c->r[0]); // 801DB73C
  c->r[3]=c->r[3]+0x00004A48u; // 801DB740
  c->r[5]=c->r[27]|c->r[27]; // 801DB744
  c->r[4]=0u+0x00000000u; // 801DB748
  c->r[3]=R8(c->r[3]+0x0000001Fu); // 801DB74C
  c->lr=0x801DB754u; f_801D9E30(c); // 801DB750
  goto L_801DB784; // 801DB754
L_801DB758:;
  c->r[5]=R16(c->r[30]+0x0000007Eu); // 801DB758
  c->r[0]=R16(c->r[27]+0x00000002u); // 801DB75C
  cmpu(c,0,c->r[0],c->r[5]); // 801DB760
  if (crb(c,1)) { IRQCHK(c); goto L_801DB68C; } // 801DB764
L_801DB768:;
  c->r[5]=R16(c->r[27]+0x00000002u); // 801DB768
  c->r[4]=c->r[6]|c->r[6]; // 801DB76C
  c->r[3]=c->r[28]|c->r[28]; // 801DB770
  c->r[6]=c->r[27]|c->r[27]; // 801DB774
  c->lr=0x801DB77Cu; f_801DC260(c); // 801DB778
  c->r[3]=c->r[27]|c->r[27]; // 801DB77C
  c->lr=0x801DB784u; f_801D9C70(c); // 801DB780
L_801DB784:;
  c->r[11]=c->r[1]+0x00000020u; // 801DB784
  c->lr=0x801DB78Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DB788
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DB78C
  c->lr=c->r[0]; // 801DB790
  c->r[1]=c->r[1]+0x00000020u; // 801DB794
  return; // 801DB798
}

// hcisu_h2_init
void f_801DB7A0(Ctx* __restrict c) {
  trace_call(0x801DB7A0u);
  c->r[6]=0u+0x80300000u; // 801DB7A0
  c->r[0]=0u+0x00000000u; // 801DB7A4
  c->r[6]=c->r[6]+0x00004A48u; // 801DB7A8
  W8(c->r[6]+0x0000001Eu,c->r[0]); // 801DB7AC
  W8(c->r[6]+0x0000001Au,c->r[0]); // 801DB7B0
  W8(c->r[6]+0x0000001Bu,c->r[0]); // 801DB7B4
  W8(c->r[6]+0x0000001Cu,c->r[0]); // 801DB7B8
  W8(c->r[6]+0x0000001Fu,c->r[3]); // 801DB7BC
  W8(c->r[6]+0x00000020u,c->r[4]); // 801DB7C0
  W16(c->r[6]+0x00000012u,c->r[5]); // 801DB7C4
  return; // 801DB7C8
}

// hcisu_h2_open
void f_801DB7D0(Ctx* __restrict c) {
  trace_call(0x801DB7D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DB7D0
  c->r[0]=c->lr; // 801DB7D4
  c->r[5]=0u+0x80300000u; // 801DB7D8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DB7DC
  c->r[0]=0u+0x00000000u; // 801DB7E0
  c->r[5]=c->r[5]+0x00004A48u; // 801DB7E4
  W8(c->r[1]+0x00000013u,c->r[0]); // 801DB7E8
  c->r[0]=0u+0x00000002u; // 801DB7EC
  c->r[4]=R16(c->r[3]+0x00000000u); // 801DB7F0
  W16(c->r[1]+0x0000000Cu,c->r[4]); // 801DB7F4
  c->r[4]=R8(c->r[5]+0x0000001Fu); // 801DB7F8
  c->r[6]=R16(c->r[3]+0x00000002u); // 801DB7FC
  c->r[3]=c->r[1]+0x00000008u; // 801DB800
  W16(c->r[1]+0x0000000Eu,c->r[6]); // 801DB804
  W16(c->r[1]+0x00000010u,c->r[4]); // 801DB808
  W8(c->r[5]+0x0000001Eu,c->r[0]); // 801DB80C
  c->lr=0x801DB814u; f_801DBEB0(c); // 801DB810
  c->r[4]=0u+0x801E0000u; // 801DB814
  c->r[3]=c->r[1]+0x00000008u; // 801DB818
  c->r[4]=c->r[4]+0xFFFFB230u; // 801DB81C
  c->lr=0x801DB824u; f_801DC0C0(c); // 801DB820
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DB824
  c->r[3]=0u+0x00000001u; // 801DB828
  c->lr=c->r[0]; // 801DB82C
  c->r[1]=c->r[1]+0x00000020u; // 801DB830
  return; // 801DB834
}

// hcisu_h2_close
void f_801DB840(Ctx* __restrict c) {
  trace_call(0x801DB840u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DB840
  c->r[0]=c->lr; // 801DB844
  c->r[3]=0u+0x80300000u; // 801DB848
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DB84C
  c->r[3]=c->r[3]+0x00004A48u; // 801DB850
  c->r[0]=0u+0x00000000u; // 801DB854
  W8(c->r[3]+0x0000001Eu,c->r[0]); // 801DB858
  c->lr=0x801DB860u; f_801DC470(c); // 801DB85C
  c->lr=0x801DB864u; f_801DC520(c); // 801DB860
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DB864
  c->lr=c->r[0]; // 801DB868
  c->r[1]=c->r[1]+0x00000010u; // 801DB86C
  return; // 801DB870
}

// hcisu_h2_send
void f_801DB880(Ctx* __restrict c) {
  trace_call(0x801DB880u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DB880
  c->r[0]=c->lr; // 801DB884
  c->r[5]=0u+0x80300000u; // 801DB888
  c->r[4]=c->r[3]|c->r[3]; // 801DB88C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DB890
  c->r[3]=c->r[5]+0x00004A48u; // 801DB894
  c->lr=0x801DB89Cu; f_801DB5F0(c); // 801DB898
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DB89C
  c->r[3]=0u+0x00000001u; // 801DB8A0
  c->lr=c->r[0]; // 801DB8A4
  c->r[1]=c->r[1]+0x00000010u; // 801DB8A8
  return; // 801DB8AC
}

// hcisu_h2_handle_event
void f_801DB8B0(Ctx* __restrict c) {
  trace_call(0x801DB8B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DB8B0
  c->r[0]=c->lr; // 801DB8B4
  c->r[4]=0u+0x80300000u; // 801DB8B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DB8BC
  c->r[4]=c->r[4]+0x00004A48u; // 801DB8C0
  c->r[0]=c->r[3]+0xFFFFFFF8u; // 801DB8C4
  c->r[3]=R16(c->r[4]+0x00000012u); // 801DB8C8
  c->r[0]=c->r[0]-c->r[3]; // 801DB8CC
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801DB8D0
  c->lr=0x801DB8D8u; f_801DB250(c); // 801DB8D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DB8D8
  c->r[3]=0u+0x00000000u; // 801DB8DC
  c->lr=c->r[0]; // 801DB8E0
  c->r[1]=c->r[1]+0x00000010u; // 801DB8E4
  return; // 801DB8E8
}

// uusb_CloseDeviceCB
void f_801DB8F0(Ctx* __restrict c) {
  trace_call(0x801DB8F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DB8F0
  c->r[0]=c->lr; // 801DB8F4
  c->r[4]=0u+0x80300000u; // 801DB8F8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DB8FC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DB900
  c->r[31]=c->r[4]+0x00004A80u; // 801DB904
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DB908
  c->r[30]=0u+0x00000000u; // 801DB90C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DB910
  c->r[29]=c->r[3]|c->r[3]; // 801DB914
  W32(c->r[4]+0x00004A80u,c->r[30]); // 801DB918
  W8(c->r[31]+0x00000010u,c->r[30]); // 801DB91C
  W8(c->r[31]+0x00000011u,c->r[30]); // 801DB920
  W8(c->r[31]+0x00000012u,c->r[30]); // 801DB924
  W8(c->r[31]+0x00000013u,c->r[30]); // 801DB928
  W8(c->r[13]+0xFFFFB6A0u,c->r[30]); // 801DB92C
  c->lr=0x801DB934u; f_801D17C0(c); // 801DB930
  c->lr=0x801DB938u; f_801DB190(c); // 801DB934
  c->r[0]=0u+0x00000005u; // 801DB938
  W8(c->r[31]+0x00000029u,c->r[0]); // 801DB93C
  W8(c->r[31]+0x00000028u,c->r[30]); // 801DB940
  W8(c->r[13]+0xFFFFB6A1u,c->r[30]); // 801DB944
  c->lr=0x801DB94Cu; f_801DB160(c); // 801DB948
  c->r[12]=R32(c->r[31]+0x00000020u); // 801DB94C
  cmps(c,0,(int32_t)c->r[12],0); // 801DB950
  if (crb(c,2)) { goto L_801DB968; } // 801DB954
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[29]; // 801DB958
  c->r[3]=0u+0x00000004u; // 801DB95C
  c->ctr=c->r[12]; // 801DB960
  if (true) { c->lr=0x801DB968u; dispatch(c,c->ctr); } // 801DB964
L_801DB968:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DB968
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DB96C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DB970
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DB974
  c->lr=c->r[0]; // 801DB978
  c->r[1]=c->r[1]+0x00000020u; // 801DB97C
  return; // 801DB980
}

// uusb_ReadIntrDataCB
void f_801DB990(Ctx* __restrict c) {
  trace_call(0x801DB990u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DB990
  c->r[0]=c->lr; // 801DB994
  c->r[5]=0u+0x00000000u; // 801DB998
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DB99C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DB9A0
  c->r[31]=c->r[3]|c->r[3]; // 801DB9A4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DB9A8
  c->r[30]=0u+0x80300000u; // 801DB9AC
  c->r[30]=c->r[30]+0x00004A80u; // 801DB9B0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DB9B4
  c->r[29]=c->r[4]|c->r[4]; // 801DB9B8
  W32(c->r[1]+0x00000010u,c->r[28]); // 801DB9BC
  c->r[0]=R8(c->r[30]+0x00000029u); // 801DB9C0
  W8(c->r[30]+0x0000002Bu,c->r[5]); // 801DB9C4
  cmpu(c,0,c->r[0],0x00000002u); // 801DB9C8
  if (crb(c,2)) { goto L_801DB9EC; } // 801DB9CC
  c->r[3]=c->r[29]|c->r[29]; // 801DB9D0
  c->lr=0x801DB9D8u; f_801D9C70(c); // 801DB9D4
  c->r[3]=R8(c->r[30]+0x0000001Cu); // 801DB9D8
  c->lr=0x801DB9E0u; f_801DA820(c); // 801DB9DC
  c->r[0]=0u+0x000000FFu; // 801DB9E0
  W8(c->r[30]+0x0000001Cu,c->r[0]); // 801DB9E4
  goto L_801DBB18; // 801DB9E8
L_801DB9EC:;
  c->r[0]=0u+0x00000000u; // 801DB9EC
  cmpu(c,0,c->r[4],c->r[0]); // 801DB9F0
  if (crb(c,2)) { goto L_801DBA88; } // 801DB9F4
  cmps(c,0,(int32_t)c->r[3],0); // 801DB9F8
  if (crb(c,1)) { goto L_801DBA0C; } // 801DB9FC
  c->r[3]=c->r[29]|c->r[29]; // 801DBA00
  c->lr=0x801DBA08u; f_801D9C70(c); // 801DBA04
  goto L_801DBA88; // 801DBA08
L_801DBA0C:;
  c->r[3]=0u+0x00000002u; // 801DBA0C
  c->lr=0x801DBA14u; f_801D9B80(c); // 801DBA10
  cmps(c,0,(int32_t)c->r[3],0); // 801DBA14
  c->r[28]=c->r[3]|c->r[3]; // 801DBA18
  if (!crb(c,2)) { goto L_801DBA2C; } // 801DBA1C
  c->r[3]=c->r[29]|c->r[29]; // 801DBA20
  c->lr=0x801DBA28u; f_801D9C70(c); // 801DBA24
  goto L_801DBA88; // 801DBA28
L_801DBA2C:;
  c->r[0]=R16(c->r[29]+0x00000004u); // 801DBA2C
  c->r[5]=0u+0x00001000u; // 801DBA30
  c->r[4]=rotl(c->r[31],0)&0x0000FFFFu; // 801DBA34
  W16(c->r[29]+0x00000000u,c->r[5]); // 801DBA38
  c->r[5]=c->r[4]+c->r[0]; // 801DBA3C
  c->r[0]=c->r[5]+0x00000008u; // 801DBA40
  W16(c->r[29]+0x00000002u,c->r[31]); // 801DBA44
  c->r[5]=rotl(c->r[0],0)&0xFFFFFFFCu; // 801DBA48
  c->r[4]=c->r[29]|c->r[29]; // 801DBA4C
  c->r[5]=c->r[5]+0x00000004u; // 801DBA50
  c->lr=0x801DBA58u; f_80004364(c); // 801DBA54
  c->r[5]=0u+0x80300000u; // 801DBA58
  c->r[7]=0u+0x801E0000u; // 801DBA5C
  c->r[5]=c->r[5]+0x00004AE0u; // 801DBA60
  c->r[3]=c->r[28]|c->r[28]; // 801DBA64
  c->r[8]=c->r[5]+0x00001000u; // 801DBA68
  c->r[7]=c->r[7]+0xFFFFC630u; // 801DBA6C
  c->r[4]=0u+0x00000000u; // 801DBA70
  c->r[5]=0u+0x00000000u; // 801DBA74
  c->r[6]=0u+0x00000000u; // 801DBA78
  c->lr=0x801DBA80u; f_80189550(c); // 801DBA7C
  c->r[3]=c->r[29]|c->r[29]; // 801DBA80
  c->lr=0x801DBA88u; f_801D9C70(c); // 801DBA84
L_801DBA88:;
  c->r[30]=0u+0x80300000u; // 801DBA88
  c->r[31]=c->r[30]+0x00004A80u; // 801DBA8C
L_801DBA90:;
  c->r[3]=R8(c->r[31]+0x0000001Cu); // 801DBA90
  c->lr=0x801DBA98u; f_801D9B80(c); // 801DBA94
  cmps(c,0,(int32_t)c->r[3],0); // 801DBA98
  c->r[28]=c->r[3]|c->r[3]; // 801DBA9C
  if (crb(c,2)) { IRQCHK(c); goto L_801DBA90; } // 801DBAA0
  c->r[0]=0u+0x00001000u; // 801DBAA4
  W16(c->r[3]+0x00000000u,c->r[0]); // 801DBAA8
  c->r[0]=c->r[3]+0x00000027u; // 801DBAAC
  c->r[4]=0u+0x00000000u; // 801DBAB0
  W16(c->r[3]+0x00000002u,c->r[4]); // 801DBAB4
  c->r[29]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801DBAB8
  c->r[0]=c->r[3]+0x00000008u; // 801DBABC
  c->r[0]=c->r[29]-c->r[0]; // 801DBAC0
  W16(c->r[3]+0x00000004u,c->r[0]); // 801DBAC4
  c->lr=0x801DBACCu; f_801D9DE0(c); // 801DBAC8
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 801DBACC
  c->r[0]=R16(c->r[28]+0x00000004u); // 801DBAD0
  c->r[5]=c->r[3]+0xFFFFFFD8u; // 801DBAD4
  c->r[7]=0u+0x801E0000u; // 801DBAD8
  c->r[3]=R32(c->r[30]+0x00004A80u); // 801DBADC
  c->r[6]=c->r[29]|c->r[29]; // 801DBAE0
  c->r[4]=R8(c->r[31]+0x00000012u); // 801DBAE4
  c->r[8]=c->r[28]|c->r[28]; // 801DBAE8
  c->r[5]=c->r[5]-c->r[0]; // 801DBAEC
  c->r[7]=c->r[7]+0xFFFFB990u; // 801DBAF0
  c->lr=0x801DBAF8u; f_801D22B0(c); // 801DBAF4
  cmps(c,0,(int32_t)c->r[3],0); // 801DBAF8
  if (crb(c,2)) { goto L_801DBB08; } // 801DBAFC
  c->r[3]=c->r[28]|c->r[28]; // 801DBB00
  c->lr=0x801DBB08u; f_801D9C70(c); // 801DBB04
L_801DBB08:;
  c->r[3]=0u+0x80300000u; // 801DBB08
  c->r[0]=0u+0x00000001u; // 801DBB0C
  c->r[3]=c->r[3]+0x00004A80u; // 801DBB10
  W8(c->r[3]+0x0000002Bu,c->r[0]); // 801DBB14
L_801DBB18:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DBB18
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DBB1C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DBB20
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DBB24
  c->r[28]=R32(c->r[1]+0x00000010u); // 801DBB28
  c->lr=c->r[0]; // 801DBB2C
  c->r[1]=c->r[1]+0x00000020u; // 801DBB30
  return; // 801DBB34
}

// uusb_ReadBulkDataCB
void f_801DBB40(Ctx* __restrict c) {
  trace_call(0x801DBB40u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DBB40
  c->r[0]=c->lr; // 801DBB44
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DBB48
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DBB4C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DBB50
  c->r[30]=0u+0x80300000u; // 801DBB54
  c->r[30]=c->r[30]+0x00004A80u; // 801DBB58
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DBB5C
  c->r[29]=c->r[4]|c->r[4]; // 801DBB60
  W32(c->r[1]+0x00000010u,c->r[28]); // 801DBB64
  c->r[0]=R8(c->r[30]+0x00000029u); // 801DBB68
  cmpu(c,0,c->r[0],0x00000002u); // 801DBB6C
  if (crb(c,2)) { goto L_801DBB90; } // 801DBB70
  c->r[3]=c->r[29]|c->r[29]; // 801DBB74
  c->lr=0x801DBB7Cu; f_801D9C70(c); // 801DBB78
  c->r[3]=R8(c->r[30]+0x0000001Du); // 801DBB7C
  c->lr=0x801DBB84u; f_801DA820(c); // 801DBB80
  c->r[0]=0u+0x000000FFu; // 801DBB84
  W8(c->r[30]+0x0000001Du,c->r[0]); // 801DBB88
  goto L_801DBCBC; // 801DBB8C
L_801DBB90:;
  cmps(c,0,(int32_t)c->r[3],0); // 801DBB90
  if (crb(c,1)) { goto L_801DBBA4; } // 801DBB94
  c->r[3]=c->r[29]|c->r[29]; // 801DBB98
  c->lr=0x801DBBA0u; f_801D9C70(c); // 801DBB9C
  goto L_801DBC3C; // 801DBBA0
L_801DBBA4:;
  W16(c->r[4]+0x00000002u,c->r[3]); // 801DBBA4
  c->r[3]=0u+0x00000003u; // 801DBBA8
  c->lr=0x801DBBB0u; f_801D9B80(c); // 801DBBAC
  cmps(c,0,(int32_t)c->r[3],0); // 801DBBB0
  c->r[28]=c->r[3]|c->r[3]; // 801DBBB4
  if (!crb(c,2)) { goto L_801DBBC8; } // 801DBBB8
  c->r[3]=c->r[29]|c->r[29]; // 801DBBBC
  c->lr=0x801DBBC4u; f_801D9C70(c); // 801DBBC0
  goto L_801DBC3C; // 801DBBC4
L_801DBBC8:;
  c->r[5]=R16(c->r[29]+0x00000002u); // 801DBBC8
  c->r[4]=c->r[29]|c->r[29]; // 801DBBCC
  c->r[0]=R16(c->r[29]+0x00000004u); // 801DBBD0
  c->r[5]=c->r[5]+c->r[0]; // 801DBBD4
  c->r[0]=c->r[5]+0x00000008u; // 801DBBD8
  c->r[5]=rotl(c->r[0],0)&0xFFFFFFFCu; // 801DBBDC
  c->r[5]=c->r[5]+0x00000004u; // 801DBBE0
  c->lr=0x801DBBE8u; f_80004364(c); // 801DBBE4
  c->r[3]=c->r[28]|c->r[28]; // 801DBBE8
  c->lr=0x801DBBF0u; f_801F7E80(c); // 801DBBEC
  c->r[0]=0u+0x00000000u; // 801DBBF0
  c->r[28]=c->r[3]|c->r[3]; // 801DBBF4
  cmpu(c,0,c->r[3],c->r[0]); // 801DBBF8
  if (crb(c,2)) { goto L_801DBC34; } // 801DBBFC
  c->lr=0x801DBC04u; f_801F8050(c); // 801DBC00
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801DBC04
  if (crb(c,2)) { goto L_801DBC34; } // 801DBC08
  c->r[5]=0u+0x80300000u; // 801DBC0C
  c->r[7]=0u+0x801E0000u; // 801DBC10
  c->r[5]=c->r[5]+0x00005AE0u; // 801DBC14
  c->r[3]=c->r[28]|c->r[28]; // 801DBC18
  c->r[8]=c->r[5]+0x00001000u; // 801DBC1C
  c->r[7]=c->r[7]+0xFFFFC630u; // 801DBC20
  c->r[4]=0u+0x00000000u; // 801DBC24
  c->r[5]=0u+0x00000000u; // 801DBC28
  c->r[6]=0u+0x00000000u; // 801DBC2C
  c->lr=0x801DBC34u; f_80189550(c); // 801DBC30
L_801DBC34:;
  c->r[3]=c->r[29]|c->r[29]; // 801DBC34
  c->lr=0x801DBC3Cu; f_801D9C70(c); // 801DBC38
L_801DBC3C:;
  c->r[30]=0u+0x80300000u; // 801DBC3C
  c->r[31]=c->r[30]+0x00004A80u; // 801DBC40
L_801DBC44:;
  c->r[3]=R8(c->r[31]+0x0000001Du); // 801DBC44
  c->lr=0x801DBC4Cu; f_801D9B80(c); // 801DBC48
  cmps(c,0,(int32_t)c->r[3],0); // 801DBC4C
  c->r[28]=c->r[3]|c->r[3]; // 801DBC50
  if (crb(c,2)) { IRQCHK(c); goto L_801DBC44; } // 801DBC54
  c->r[0]=0u+0x00001100u; // 801DBC58
  W16(c->r[3]+0x00000000u,c->r[0]); // 801DBC5C
  c->r[0]=c->r[3]+0x00000027u; // 801DBC60
  c->r[4]=0u+0x00000000u; // 801DBC64
  W16(c->r[3]+0x00000002u,c->r[4]); // 801DBC68
  c->r[29]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801DBC6C
  c->r[0]=c->r[3]+0x00000008u; // 801DBC70
  c->r[0]=c->r[29]-c->r[0]; // 801DBC74
  W16(c->r[3]+0x00000004u,c->r[0]); // 801DBC78
  c->lr=0x801DBC80u; f_801D9DE0(c); // 801DBC7C
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 801DBC80
  c->r[0]=R16(c->r[28]+0x00000004u); // 801DBC84
  c->r[5]=c->r[3]+0xFFFFFFD8u; // 801DBC88
  c->r[7]=0u+0x801E0000u; // 801DBC8C
  c->r[3]=R32(c->r[30]+0x00004A80u); // 801DBC90
  c->r[6]=c->r[29]|c->r[29]; // 801DBC94
  c->r[4]=R8(c->r[31]+0x00000011u); // 801DBC98
  c->r[8]=c->r[28]|c->r[28]; // 801DBC9C
  c->r[5]=c->r[5]-c->r[0]; // 801DBCA0
  c->r[7]=c->r[7]+0xFFFFBB40u; // 801DBCA4
  c->lr=0x801DBCACu; f_801D2330(c); // 801DBCA8
  cmps(c,0,(int32_t)c->r[3],0); // 801DBCAC
  if (crb(c,2)) { goto L_801DBCBC; } // 801DBCB0
  c->r[3]=c->r[28]|c->r[28]; // 801DBCB4
  c->lr=0x801DBCBCu; f_801D9C70(c); // 801DBCB8
L_801DBCBC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DBCBC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DBCC0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DBCC4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DBCC8
  c->r[28]=R32(c->r[1]+0x00000010u); // 801DBCCC
  c->lr=c->r[0]; // 801DBCD0
  c->r[1]=c->r[1]+0x00000020u; // 801DBCD4
  return; // 801DBCD8
}

// uusb_WriteCtrlDataCB
void f_801DBCE0(Ctx* __restrict c) {
  trace_call(0x801DBCE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DBCE0
  c->r[0]=c->lr; // 801DBCE4
  cmps(c,0,(int32_t)c->r[4],0); // 801DBCE8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DBCEC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DBCF0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DBCF4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DBCF8
  if (crb(c,2)) { goto L_801DBD24; } // 801DBCFC
  c->r[3]=c->r[4]|c->r[4]; // 801DBD00
  c->lr=0x801DBD08u; f_801D9C70(c); // 801DBD04
  c->lr=0x801DBD0Cu; f_801DB190(c); // 801DBD08
  c->r[4]=0u+0x80300000u; // 801DBD0C
  c->r[4]=c->r[4]+0x00004A80u; // 801DBD10
  c->r[3]=R8(c->r[4]+0x00000048u); // 801DBD14
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801DBD18
  W8(c->r[4]+0x00000048u,c->r[0]); // 801DBD1C
  c->lr=0x801DBD24u; f_801DB160(c); // 801DBD20
L_801DBD24:;
  c->r[30]=0u+0x80300000u; // 801DBD24
  c->r[31]=c->r[30]+0x00004A80u; // 801DBD28
  c->r[0]=R8(c->r[31]+0x00000048u); // 801DBD2C
  cmpu(c,0,c->r[0],0x00000005u); // 801DBD30
  if (!crb(c,0)) { goto L_801DBDB0; } // 801DBD34
  c->r[0]=R16(c->r[31]+0x00000044u); // 801DBD38
  cmps(c,0,(int32_t)c->r[0],0); // 801DBD3C
  if (crb(c,2)) { goto L_801DBDB0; } // 801DBD40
  c->r[3]=c->r[31]+0x0000003Cu; // 801DBD44
  c->lr=0x801DBD4Cu; f_801DA320(c); // 801DBD48
  W32(c->r[1]+0x00000008u,c->r[3]); // 801DBD4C
  c->r[29]=c->r[3]|c->r[3]; // 801DBD50
  c->r[10]=0u+0x801E0000u; // 801DBD54
  c->r[4]=0u+0x00000020u; // 801DBD58
  c->r[0]=R16(c->r[3]+0x00000004u); // 801DBD5C
  c->r[10]=c->r[10]+0xFFFFBCE0u; // 801DBD60
  c->r[3]=R32(c->r[30]+0x00004A80u); // 801DBD64
  c->r[5]=0u+0x00000000u; // 801DBD68
  c->r[6]=c->r[29]+c->r[0]; // 801DBD6C
  c->r[8]=R16(c->r[29]+0x00000002u); // 801DBD70
  c->r[9]=c->r[6]+0x00000008u; // 801DBD74
  c->r[7]=0u+0x00000000u; // 801DBD78
  c->r[6]=0u+0x00000000u; // 801DBD7C
  c->lr=0x801DBD84u; f_801D2A20(c); // 801DBD80
  cmps(c,0,(int32_t)c->r[3],0); // 801DBD84
  if (!crb(c,0)) { goto L_801DBD9C; } // 801DBD88
  c->r[4]=c->r[29]|c->r[29]; // 801DBD8C
  c->r[3]=c->r[31]+0x0000003Cu; // 801DBD90
  c->lr=0x801DBD98u; f_801DA1E0(c); // 801DBD94
  goto L_801DBDB0; // 801DBD98
L_801DBD9C:;
  c->lr=0x801DBDA0u; f_801DB190(c); // 801DBD9C
  c->r[3]=R8(c->r[31]+0x00000048u); // 801DBDA0
  c->r[0]=c->r[3]+0x00000001u; // 801DBDA4
  W8(c->r[31]+0x00000048u,c->r[0]); // 801DBDA8
  c->lr=0x801DBDB0u; f_801DB160(c); // 801DBDAC
L_801DBDB0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DBDB0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DBDB4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DBDB8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DBDBC
  c->lr=c->r[0]; // 801DBDC0
  c->r[1]=c->r[1]+0x00000020u; // 801DBDC4
  return; // 801DBDC8
}

// uusb_WriteBulkDataCB
void f_801DBDD0(Ctx* __restrict c) {
  trace_call(0x801DBDD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DBDD0
  c->r[0]=c->lr; // 801DBDD4
  cmps(c,0,(int32_t)c->r[4],0); // 801DBDD8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DBDDC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DBDE0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DBDE4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DBDE8
  if (crb(c,2)) { goto L_801DBE14; } // 801DBDEC
  c->r[3]=c->r[4]|c->r[4]; // 801DBDF0
  c->lr=0x801DBDF8u; f_801D9C70(c); // 801DBDF4
  c->lr=0x801DBDFCu; f_801DB190(c); // 801DBDF8
  c->r[4]=0u+0x80300000u; // 801DBDFC
  c->r[4]=c->r[4]+0x00004A80u; // 801DBE00
  c->r[3]=R8(c->r[4]+0x00000038u); // 801DBE04
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801DBE08
  W8(c->r[4]+0x00000038u,c->r[0]); // 801DBE0C
  c->lr=0x801DBE14u; f_801DB160(c); // 801DBE10
L_801DBE14:;
  c->r[30]=0u+0x80300000u; // 801DBE14
  c->r[31]=c->r[30]+0x00004A80u; // 801DBE18
  c->r[0]=R8(c->r[31]+0x00000038u); // 801DBE1C
  cmpu(c,0,c->r[0],0x00000005u); // 801DBE20
  if (!crb(c,0)) { goto L_801DBE94; } // 801DBE24
  c->r[0]=R16(c->r[31]+0x00000034u); // 801DBE28
  cmps(c,0,(int32_t)c->r[0],0); // 801DBE2C
  if (crb(c,2)) { goto L_801DBE94; } // 801DBE30
  c->r[3]=c->r[31]+0x0000002Cu; // 801DBE34
  c->lr=0x801DBE3Cu; f_801DA320(c); // 801DBE38
  c->r[0]=R16(c->r[3]+0x00000004u); // 801DBE3C
  c->r[29]=c->r[3]|c->r[3]; // 801DBE40
  c->r[7]=0u+0x801E0000u; // 801DBE44
  c->r[3]=R32(c->r[30]+0x00004A80u); // 801DBE48
  c->r[6]=c->r[29]+c->r[0]; // 801DBE4C
  c->r[4]=R8(c->r[31]+0x00000010u); // 801DBE50
  c->r[5]=R16(c->r[29]+0x00000002u); // 801DBE54
  c->r[8]=c->r[29]|c->r[29]; // 801DBE58
  c->r[7]=c->r[7]+0xFFFFBDD0u; // 801DBE5C
  c->r[6]=c->r[6]+0x00000008u; // 801DBE60
  c->lr=0x801DBE68u; f_801D23D0(c); // 801DBE64
  cmps(c,0,(int32_t)c->r[3],0); // 801DBE68
  if (!crb(c,0)) { goto L_801DBE80; } // 801DBE6C
  c->r[4]=c->r[29]|c->r[29]; // 801DBE70
  c->r[3]=c->r[31]+0x0000002Cu; // 801DBE74
  c->lr=0x801DBE7Cu; f_801DA1E0(c); // 801DBE78
  goto L_801DBE94; // 801DBE7C
L_801DBE80:;
  c->lr=0x801DBE84u; f_801DB190(c); // 801DBE80
  c->r[3]=R8(c->r[31]+0x00000038u); // 801DBE84
  c->r[0]=c->r[3]+0x00000001u; // 801DBE88
  W8(c->r[31]+0x00000038u,c->r[0]); // 801DBE8C
  c->lr=0x801DBE94u; f_801DB160(c); // 801DBE90
L_801DBE94:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DBE94
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DBE98
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DBE9C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DBEA0
  c->lr=c->r[0]; // 801DBEA4
  c->r[1]=c->r[1]+0x00000020u; // 801DBEA8
  return; // 801DBEAC
}

// UUSB_Register
void f_801DBEB0(Ctx* __restrict c) {
  trace_call(0x801DBEB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DBEB0
  c->r[0]=c->lr; // 801DBEB4
  c->r[4]=0u+0x00000000u; // 801DBEB8
  c->r[5]=0u+0x0000004Cu; // 801DBEBC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DBEC0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DBEC4
  c->r[31]=c->r[3]|c->r[3]; // 801DBEC8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DBECC
  c->r[30]=0u+0x80300000u; // 801DBED0
  c->r[3]=c->r[30]+0x00004A80u; // 801DBED4
  c->lr=0x801DBEDCu; f_800046B4(c); // 801DBED8
  c->lr=0x801DBEE0u; f_801DB190(c); // 801DBEDC
  c->r[30]=c->r[30]+0x00004A80u; // 801DBEE0
  c->r[0]=0u+0x00000005u; // 801DBEE4
  W8(c->r[30]+0x00000029u,c->r[0]); // 801DBEE8
  c->lr=0x801DBEF0u; f_801DB160(c); // 801DBEEC
  c->r[0]=R8(c->r[13]+0xFFFFB6A1u); // 801DBEF0
  cmps(c,0,(int32_t)c->r[0],0); // 801DBEF4
  if (!crb(c,2)) { goto L_801DBF0C; } // 801DBEF8
  c->r[3]=0u+0x00000000u; // 801DBEFC
  c->r[0]=0u+0x00000001u; // 801DBF00
  W8(c->r[30]+0x00000028u,c->r[3]); // 801DBF04
  W8(c->r[13]+0xFFFFB6A1u,c->r[0]); // 801DBF08
L_801DBF0C:;
  c->lr=0x801DBF10u; f_801BB6A0(c); // 801DBF0C
  cmps(c,0,(int32_t)c->r[3],0); // 801DBF10
  if (!crb(c,2)) { goto L_801DC0A0; } // 801DBF14
  c->lr=0x801DBF1Cu; f_801D16C0(c); // 801DBF18
  cmps(c,0,(int32_t)c->r[3],0); // 801DBF1C
  if (!crb(c,2)) { goto L_801DC0A0; } // 801DBF20
  c->r[0]=R8(c->r[13]+0xFFFFB6ACu); // 801DBF24
  c->r[4]=0u+0x80300000u; // 801DBF28
  c->r[4]=c->r[4]+0x00004A80u; // 801DBF2C
  cmpu(c,0,c->r[0],0x00000001u); // 801DBF30
  W32(c->r[4]+0x00000024u,c->r[31]); // 801DBF34
  if (!crb(c,2)) { goto L_801DBF50; } // 801DBF38
  c->r[3]=R32(c->r[13]+0xFFFFB6B0u); // 801DBF3C
  c->r[0]=R32(c->r[13]+0xFFFFB6B4u); // 801DBF40
  W32(c->r[4]+0x00000014u,c->r[3]); // 801DBF44
  W32(c->r[4]+0x00000018u,c->r[0]); // 801DBF48
  goto L_801DBF60; // 801DBF4C
L_801DBF50:;
  c->r[3]=0u+0x0000057Eu; // 801DBF50
  c->r[0]=0u+0x00000305u; // 801DBF54
  W32(c->r[4]+0x00000014u,c->r[3]); // 801DBF58
  W32(c->r[4]+0x00000018u,c->r[0]); // 801DBF5C
L_801DBF60:;
  c->r[0]=R32(c->r[13]+0xFFFFB6A8u); // 801DBF60
  c->r[6]=0u+0x80300000u; // 801DBF64
  c->r[6]=c->r[6]+0x00004A80u; // 801DBF68
  c->r[3]=0u+0x00000000u; // 801DBF6C
  cmpu(c,0,c->r[0],0x00000001u); // 801DBF70
  W8(c->r[6]+0x00000010u,c->r[3]); // 801DBF74
  c->r[5]=R32(c->r[6]+0x00000018u); // 801DBF78
  W8(c->r[6]+0x00000011u,c->r[3]); // 801DBF7C
  c->r[0]=R32(c->r[6]+0x00000014u); // 801DBF80
  W8(c->r[6]+0x00000012u,c->r[3]); // 801DBF84
  W8(c->r[6]+0x00000013u,c->r[3]); // 801DBF88
  if (!crb(c,2)) { goto L_801DBFD4; } // 801DBF8C
  c->r[3]=R32(c->r[13]+0xFFFFB6A4u); // 801DBF90
  cmps(c,0,(int32_t)c->r[3],0); // 801DBF94
  if (!crb(c,2)) { goto L_801DBFB4; } // 801DBF98
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 801DBF9C
  c->r[5]=rotl(c->r[5],0)&0x0000FFFFu; // 801DBFA0
  c->r[3]=c->r[13]+0xFFFFAB70u; // 801DBFA4
  c->lr=0x801DBFACu; f_801D1970(c); // 801DBFA8
  c->r[30]=c->r[3]|c->r[3]; // 801DBFAC
  goto L_801DBFE8; // 801DBFB0
L_801DBFB4:;
  cmpu(c,0,c->r[3],0x00000001u); // 801DBFB4
  if (!crb(c,2)) { goto L_801DBFE8; } // 801DBFB8
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 801DBFBC
  c->r[5]=rotl(c->r[5],0)&0x0000FFFFu; // 801DBFC0
  c->r[3]=c->r[13]+0xFFFFAB74u; // 801DBFC4
  c->lr=0x801DBFCCu; f_801D1970(c); // 801DBFC8
  c->r[30]=c->r[3]|c->r[3]; // 801DBFCC
  goto L_801DBFE8; // 801DBFD0
L_801DBFD4:;
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 801DBFD4
  c->r[5]=rotl(c->r[5],0)&0x0000FFFFu; // 801DBFD8
  c->r[3]=c->r[13]+0xFFFFAB74u; // 801DBFDC
  c->lr=0x801DBFE4u; f_801D1970(c); // 801DBFE0
  c->r[30]=c->r[3]|c->r[3]; // 801DBFE4
L_801DBFE8:;
  cmps(c,0,(int32_t)c->r[30],0); // 801DBFE8
  if (crb(c,0)) { goto L_801DBFF4; } // 801DBFEC
  W32(c->r[13]+0xFFFFAB6Cu,c->r[30]); // 801DBFF0
L_801DBFF4:;
  cmps(c,0,(int32_t)c->r[30],0); // 801DBFF4
  if (crb(c,0)) { goto L_801DC0A0; } // 801DBFF8
  c->r[30]=0u+0x80300000u; // 801DBFFC
  c->r[3]=0u+0x00000002u; // 801DC000
  c->r[30]=c->r[30]+0x00004A80u; // 801DC004
  c->r[4]=0u+0x00000082u; // 801DC008
  c->r[0]=0u+0x00000081u; // 801DC00C
  c->r[31]=0u+0x00000000u; // 801DC010
  W8(c->r[30]+0x00000010u,c->r[3]); // 801DC014
  c->r[3]=c->r[30]+0x0000002Cu; // 801DC018
  W8(c->r[30]+0x00000011u,c->r[4]); // 801DC01C
  W8(c->r[30]+0x00000012u,c->r[0]); // 801DC020
  W8(c->r[30]+0x00000013u,c->r[31]); // 801DC024
  c->lr=0x801DC02Cu; f_801D99C0(c); // 801DC028
  W8(c->r[30]+0x00000038u,c->r[31]); // 801DC02C
  c->r[3]=c->r[30]+0x0000003Cu; // 801DC030
  c->lr=0x801DC038u; f_801D99C0(c); // 801DC034
  W8(c->r[30]+0x00000048u,c->r[31]); // 801DC038
  c->r[3]=0u+0x00000294u; // 801DC03C
  c->r[4]=0u+0x0000002Du; // 801DC040
  c->r[5]=0u+0x00000001u; // 801DC044
  c->r[6]=0u+0x00000000u; // 801DC048
  c->lr=0x801DC050u; f_801DA4D0(c); // 801DC04C
  W8(c->r[30]+0x0000001Cu,c->r[3]); // 801DC050
  c->r[3]=0u+0x00000708u; // 801DC054
  c->r[4]=0u+0x0000001Eu; // 801DC058
  c->r[5]=0u+0x00000001u; // 801DC05C
  c->r[6]=0u+0x00000000u; // 801DC060
  c->lr=0x801DC068u; f_801DA4D0(c); // 801DC064
  c->r[0]=R8(c->r[30]+0x0000001Cu); // 801DC068
  W8(c->r[30]+0x0000001Du,c->r[3]); // 801DC06C
  cmpu(c,0,c->r[0],0x000000FFu); // 801DC070
  if (crb(c,2)) { goto L_801DC0A0; } // 801DC074
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801DC078
  cmpu(c,0,c->r[0],0x000000FFu); // 801DC07C
  if (!crb(c,2)) { goto L_801DC088; } // 801DC080
  goto L_801DC0A0; // 801DC084
L_801DC088:;
  c->lr=0x801DC08Cu; f_801DB190(c); // 801DC088
  c->r[0]=0u+0x00000004u; // 801DC08C
  W8(c->r[30]+0x00000029u,c->r[0]); // 801DC090
  c->lr=0x801DC098u; f_801DB160(c); // 801DC094
  c->r[0]=0u+0x00000001u; // 801DC098
  W32(c->r[13]+0xFFFFAB68u,c->r[0]); // 801DC09C
L_801DC0A0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DC0A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DC0A4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801DC0A8
  c->lr=c->r[0]; // 801DC0AC
  c->r[1]=c->r[1]+0x00000010u; // 801DC0B0
  return; // 801DC0B4
}

// UUSB_Open
void f_801DC0C0(Ctx* __restrict c) {
  trace_call(0x801DC0C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DC0C0
  c->r[0]=c->lr; // 801DC0C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DC0C8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DC0CC
  c->r[31]=0u+0x80300000u; // 801DC0D0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DC0D4
  c->r[30]=c->r[31]+0x00004A80u; // 801DC0D8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DC0DC
  W32(c->r[1]+0x00000010u,c->r[28]); // 801DC0E0
  c->r[28]=c->r[4]|c->r[4]; // 801DC0E4
  c->r[0]=R8(c->r[30]+0x00000029u); // 801DC0E8
  cmpu(c,0,c->r[0],0x00000004u); // 801DC0EC
  if (!crb(c,2)) { goto L_801DC22C; } // 801DC0F0
  c->r[0]=R8(c->r[30]+0x0000001Cu); // 801DC0F4
  cmpu(c,0,c->r[0],0x000000FFu); // 801DC0F8
  if (crb(c,2)) { goto L_801DC22C; } // 801DC0FC
  c->r[0]=R8(c->r[30]+0x0000001Du); // 801DC100
  cmpu(c,0,c->r[0],0x000000FFu); // 801DC104
  if (!crb(c,2)) { goto L_801DC110; } // 801DC108
  goto L_801DC22C; // 801DC10C
L_801DC110:;
  c->lr=0x801DC114u; f_801DB190(c); // 801DC110
  c->r[0]=0u+0x00000002u; // 801DC114
  W32(c->r[30]+0x00000020u,c->r[28]); // 801DC118
  W8(c->r[30]+0x00000029u,c->r[0]); // 801DC11C
  c->lr=0x801DC124u; f_801DB160(c); // 801DC120
L_801DC124:;
  c->r[3]=R8(c->r[30]+0x0000001Cu); // 801DC124
  c->lr=0x801DC12Cu; f_801D9B80(c); // 801DC128
  cmps(c,0,(int32_t)c->r[3],0); // 801DC12C
  c->r[28]=c->r[3]|c->r[3]; // 801DC130
  if (crb(c,2)) { IRQCHK(c); goto L_801DC124; } // 801DC134
  c->r[0]=0u+0x00001000u; // 801DC138
  W16(c->r[3]+0x00000000u,c->r[0]); // 801DC13C
  c->r[0]=c->r[3]+0x00000027u; // 801DC140
  c->r[4]=0u+0x00000000u; // 801DC144
  W16(c->r[3]+0x00000002u,c->r[4]); // 801DC148
  c->r[29]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801DC14C
  c->r[0]=c->r[3]+0x00000008u; // 801DC150
  c->r[0]=c->r[29]-c->r[0]; // 801DC154
  W16(c->r[3]+0x00000004u,c->r[0]); // 801DC158
  c->lr=0x801DC160u; f_801D9DE0(c); // 801DC15C
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 801DC160
  c->r[0]=R16(c->r[28]+0x00000004u); // 801DC164
  c->r[5]=c->r[3]+0xFFFFFFD8u; // 801DC168
  c->r[7]=0u+0x801E0000u; // 801DC16C
  c->r[3]=R32(c->r[31]+0x00004A80u); // 801DC170
  c->r[6]=c->r[29]|c->r[29]; // 801DC174
  c->r[4]=R8(c->r[30]+0x00000012u); // 801DC178
  c->r[8]=c->r[28]|c->r[28]; // 801DC17C
  c->r[5]=c->r[5]-c->r[0]; // 801DC180
  c->r[7]=c->r[7]+0xFFFFB990u; // 801DC184
  c->lr=0x801DC18Cu; f_801D22B0(c); // 801DC188
  cmps(c,0,(int32_t)c->r[3],0); // 801DC18C
  if (crb(c,2)) { goto L_801DC19C; } // 801DC190
  c->r[3]=c->r[28]|c->r[28]; // 801DC194
  c->lr=0x801DC19Cu; f_801D9C70(c); // 801DC198
L_801DC19C:;
  c->r[30]=0u+0x80300000u; // 801DC19C
  c->r[0]=0u+0x00000001u; // 801DC1A0
  c->r[31]=c->r[30]+0x00004A80u; // 801DC1A4
  W8(c->r[31]+0x0000002Bu,c->r[0]); // 801DC1A8
L_801DC1AC:;
  c->r[3]=R8(c->r[31]+0x0000001Du); // 801DC1AC
  c->lr=0x801DC1B4u; f_801D9B80(c); // 801DC1B0
  cmps(c,0,(int32_t)c->r[3],0); // 801DC1B4
  c->r[29]=c->r[3]|c->r[3]; // 801DC1B8
  if (crb(c,2)) { IRQCHK(c); goto L_801DC1AC; } // 801DC1BC
  c->r[0]=0u+0x00001100u; // 801DC1C0
  W16(c->r[3]+0x00000000u,c->r[0]); // 801DC1C4
  c->r[0]=c->r[3]+0x00000027u; // 801DC1C8
  c->r[4]=0u+0x00000000u; // 801DC1CC
  W16(c->r[3]+0x00000002u,c->r[4]); // 801DC1D0
  c->r[28]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801DC1D4
  c->r[0]=c->r[3]+0x00000008u; // 801DC1D8
  c->r[0]=c->r[28]-c->r[0]; // 801DC1DC
  W16(c->r[3]+0x00000004u,c->r[0]); // 801DC1E0
  c->lr=0x801DC1E8u; f_801D9DE0(c); // 801DC1E4
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 801DC1E8
  c->r[0]=R16(c->r[29]+0x00000004u); // 801DC1EC
  c->r[5]=c->r[3]+0xFFFFFFD8u; // 801DC1F0
  c->r[7]=0u+0x801E0000u; // 801DC1F4
  c->r[3]=R32(c->r[30]+0x00004A80u); // 801DC1F8
  c->r[6]=c->r[28]|c->r[28]; // 801DC1FC
  c->r[4]=R8(c->r[31]+0x00000011u); // 801DC200
  c->r[8]=c->r[29]|c->r[29]; // 801DC204
  c->r[5]=c->r[5]-c->r[0]; // 801DC208
  c->r[7]=c->r[7]+0xFFFFBB40u; // 801DC20C
  c->lr=0x801DC214u; f_801D2330(c); // 801DC210
  cmps(c,0,(int32_t)c->r[3],0); // 801DC214
  if (crb(c,2)) { goto L_801DC224; } // 801DC218
  c->r[3]=c->r[29]|c->r[29]; // 801DC21C
  c->lr=0x801DC224u; f_801D9C70(c); // 801DC220
L_801DC224:;
  c->r[0]=0u+0x00000000u; // 801DC224
  W32(c->r[13]+0xFFFFAB68u,c->r[0]); // 801DC228
L_801DC22C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DC22C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DC230
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DC234
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DC238
  c->r[28]=R32(c->r[1]+0x00000010u); // 801DC23C
  c->lr=c->r[0]; // 801DC240
  c->r[1]=c->r[1]+0x00000020u; // 801DC244
  return; // 801DC248
}

// UUSB_Read
void f_801DC250(Ctx* __restrict c) {
  trace_call(0x801DC250u);
  c->r[3]=0u+0x00000000u; // 801DC250
  return; // 801DC254
}

// UUSB_Write
void f_801DC260(Ctx* __restrict c) {
  trace_call(0x801DC260u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DC260
  c->r[0]=c->lr; // 801DC264
  W32(c->r[1]+0x00000034u,c->r[0]); // 801DC268
  c->r[11]=c->r[1]+0x00000030u; // 801DC26C
  c->lr=0x801DC274u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DC270
  c->r[29]=0u+0x80300000u; // 801DC274
  c->r[25]=c->r[4]|c->r[4]; // 801DC278
  c->r[30]=c->r[29]+0x00004A80u; // 801DC27C
  c->r[31]=c->r[5]|c->r[5]; // 801DC280
  c->r[0]=R8(c->r[30]+0x00000029u); // 801DC284
  c->r[28]=0u+0x00000000u; // 801DC288
  cmpu(c,0,c->r[0],0x00000002u); // 801DC28C
  if (crb(c,2)) { goto L_801DC29C; } // 801DC290
  c->r[3]=0u+0x00000000u; // 801DC294
  goto L_801DC454; // 801DC298
L_801DC29C:;
  cmps(c,0,(int32_t)c->r[3],0); // 801DC29C
  if (crb(c,2)) { goto L_801DC2B0; } // 801DC2A0
  cmps(c,0,(int32_t)c->r[3],2); // 801DC2A4
  if (crb(c,2)) { goto L_801DC388; } // 801DC2A8
  goto L_801DC450; // 801DC2AC
L_801DC2B0:;
  c->r[3]=R8(c->r[30]+0x0000001Cu); // 801DC2B0
  c->lr=0x801DC2B8u; f_801D9B80(c); // 801DC2B4
  cmps(c,0,(int32_t)c->r[3],0); // 801DC2B8
  c->r[26]=c->r[3]|c->r[3]; // 801DC2BC
  if (!crb(c,2)) { goto L_801DC2CC; } // 801DC2C0
  c->r[3]=0u+0x00000000u; // 801DC2C4
  goto L_801DC454; // 801DC2C8
L_801DC2CC:;
  c->r[0]=c->r[3]+0x00000027u; // 801DC2CC
  W16(c->r[3]+0x00000002u,c->r[31]); // 801DC2D0
  c->r[27]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801DC2D4
  c->r[4]=c->r[25]|c->r[25]; // 801DC2D8
  c->r[0]=c->r[3]+0x00000008u; // 801DC2DC
  c->r[5]=c->r[31]|c->r[31]; // 801DC2E0
  c->r[0]=c->r[27]-c->r[0]; // 801DC2E4
  W16(c->r[3]+0x00000004u,c->r[0]); // 801DC2E8
  c->r[3]=c->r[27]|c->r[27]; // 801DC2EC
  c->lr=0x801DC2F4u; f_80004364(c); // 801DC2F0
  c->r[0]=R8(c->r[30]+0x00000048u); // 801DC2F4
  cmpu(c,0,c->r[0],0x00000005u); // 801DC2F8
  if (!crb(c,0)) { goto L_801DC340; } // 801DC2FC
  c->r[0]=R16(c->r[30]+0x00000044u); // 801DC300
  cmps(c,0,(int32_t)c->r[0],0); // 801DC304
  if (!crb(c,2)) { goto L_801DC340; } // 801DC308
  W32(c->r[1]+0x00000008u,c->r[26]); // 801DC30C
  c->r[10]=0u+0x801E0000u; // 801DC310
  c->r[8]=c->r[31]|c->r[31]; // 801DC314
  c->r[9]=c->r[27]|c->r[27]; // 801DC318
  c->r[3]=R32(c->r[29]+0x00004A80u); // 801DC31C
  c->r[10]=c->r[10]+0xFFFFBCE0u; // 801DC320
  c->r[4]=0u+0x00000020u; // 801DC324
  c->r[5]=0u+0x00000000u; // 801DC328
  c->r[6]=0u+0x00000000u; // 801DC32C
  c->r[7]=0u+0x00000000u; // 801DC330
  c->lr=0x801DC338u; f_801D2A20(c); // 801DC334
  c->r[28]=c->r[3]|c->r[3]; // 801DC338
  goto L_801DC35C; // 801DC33C
L_801DC340:;
  c->r[3]=0u+0x80300000u; // 801DC340
  c->r[4]=c->r[26]|c->r[26]; // 801DC344
  c->r[3]=c->r[3]+0x00004A80u; // 801DC348
  c->r[3]=c->r[3]+0x0000003Cu; // 801DC34C
  c->lr=0x801DC354u; f_801DA0A0(c); // 801DC350
  c->r[3]=0u+0x00000000u; // 801DC354
  goto L_801DC454; // 801DC358
L_801DC35C:;
  cmps(c,0,(int32_t)c->r[3],0); // 801DC35C
  if (crb(c,2)) { goto L_801DC370; } // 801DC360
  c->r[3]=c->r[26]|c->r[26]; // 801DC364
  c->lr=0x801DC36Cu; f_801D9C70(c); // 801DC368
  goto L_801DC450; // 801DC36C
L_801DC370:;
  c->lr=0x801DC374u; f_801DB190(c); // 801DC370
  c->r[3]=R8(c->r[30]+0x00000048u); // 801DC374
  c->r[0]=c->r[3]+0x00000001u; // 801DC378
  W8(c->r[30]+0x00000048u,c->r[0]); // 801DC37C
  c->lr=0x801DC384u; f_801DB160(c); // 801DC380
  goto L_801DC450; // 801DC384
L_801DC388:;
  c->r[3]=R8(c->r[30]+0x0000001Du); // 801DC388
  c->lr=0x801DC390u; f_801D9B80(c); // 801DC38C
  cmps(c,0,(int32_t)c->r[3],0); // 801DC390
  c->r[27]=c->r[3]|c->r[3]; // 801DC394
  if (!crb(c,2)) { goto L_801DC3A4; } // 801DC398
  c->r[3]=0u+0x00000000u; // 801DC39C
  goto L_801DC454; // 801DC3A0
L_801DC3A4:;
  c->r[0]=c->r[3]+0x00000027u; // 801DC3A4
  W16(c->r[3]+0x00000002u,c->r[31]); // 801DC3A8
  c->r[28]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801DC3AC
  c->r[4]=c->r[25]|c->r[25]; // 801DC3B0
  c->r[0]=c->r[3]+0x00000008u; // 801DC3B4
  c->r[5]=c->r[31]|c->r[31]; // 801DC3B8
  c->r[0]=c->r[28]-c->r[0]; // 801DC3BC
  W16(c->r[3]+0x00000004u,c->r[0]); // 801DC3C0
  c->r[3]=c->r[28]|c->r[28]; // 801DC3C4
  c->lr=0x801DC3CCu; f_80004364(c); // 801DC3C8
  c->r[0]=R8(c->r[30]+0x00000038u); // 801DC3CC
  cmpu(c,0,c->r[0],0x00000005u); // 801DC3D0
  if (!crb(c,0)) { goto L_801DC40C; } // 801DC3D4
  c->r[0]=R16(c->r[30]+0x00000034u); // 801DC3D8
  cmps(c,0,(int32_t)c->r[0],0); // 801DC3DC
  if (!crb(c,2)) { goto L_801DC40C; } // 801DC3E0
  c->r[7]=0u+0x801E0000u; // 801DC3E4
  c->r[3]=R32(c->r[29]+0x00004A80u); // 801DC3E8
  c->r[4]=R8(c->r[30]+0x00000010u); // 801DC3EC
  c->r[5]=c->r[31]|c->r[31]; // 801DC3F0
  c->r[6]=c->r[28]|c->r[28]; // 801DC3F4
  c->r[8]=c->r[27]|c->r[27]; // 801DC3F8
  c->r[7]=c->r[7]+0xFFFFBDD0u; // 801DC3FC
  c->lr=0x801DC404u; f_801D23D0(c); // 801DC400
  c->r[28]=c->r[3]|c->r[3]; // 801DC404
  goto L_801DC428; // 801DC408
L_801DC40C:;
  c->r[3]=0u+0x80300000u; // 801DC40C
  c->r[4]=c->r[27]|c->r[27]; // 801DC410
  c->r[3]=c->r[3]+0x00004A80u; // 801DC414
  c->r[3]=c->r[3]+0x0000002Cu; // 801DC418
  c->lr=0x801DC420u; f_801DA0A0(c); // 801DC41C
  c->r[3]=0u+0x00000000u; // 801DC420
  goto L_801DC454; // 801DC424
L_801DC428:;
  cmps(c,0,(int32_t)c->r[3],0); // 801DC428
  if (crb(c,2)) { goto L_801DC43C; } // 801DC42C
  c->r[3]=c->r[27]|c->r[27]; // 801DC430
  c->lr=0x801DC438u; f_801D9C70(c); // 801DC434
  goto L_801DC450; // 801DC438
L_801DC43C:;
  c->lr=0x801DC440u; f_801DB190(c); // 801DC43C
  c->r[3]=R8(c->r[30]+0x00000038u); // 801DC440
  c->r[0]=c->r[3]+0x00000001u; // 801DC444
  W8(c->r[30]+0x00000038u,c->r[0]); // 801DC448
  c->lr=0x801DC450u; f_801DB160(c); // 801DC44C
L_801DC450:;
  c->r[3]=rotl(c->r[28],0)&0x0000FFFFu; // 801DC450
L_801DC454:;
  c->r[11]=c->r[1]+0x00000030u; // 801DC454
  c->lr=0x801DC45Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DC458
  c->r[0]=R32(c->r[1]+0x00000034u); // 801DC45C
  c->lr=c->r[0]; // 801DC460
  c->r[1]=c->r[1]+0x00000030u; // 801DC464
  return; // 801DC468
}

// UUSB_Close
void f_801DC470(Ctx* __restrict c) {
  trace_call(0x801DC470u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DC470
  c->r[0]=c->lr; // 801DC474
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DC478
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DC47C
  c->lr=0x801DC484u; f_801DB190(c); // 801DC480
  c->r[3]=0u+0x80300000u; // 801DC484
  c->r[0]=0u+0x00000000u; // 801DC488
  c->r[31]=c->r[3]+0x00004A80u; // 801DC48C
  W8(c->r[31]+0x00000029u,c->r[0]); // 801DC490
  c->lr=0x801DC498u; f_801DB160(c); // 801DC494
  c->r[0]=R16(c->r[31]+0x00000034u); // 801DC498
  cmps(c,0,(int32_t)c->r[0],0); // 801DC49C
  if (crb(c,2)) { goto L_801DC4C0; } // 801DC4A0
  goto L_801DC4B4; // 801DC4A4
L_801DC4A8:;
  c->r[3]=c->r[31]+0x0000002Cu; // 801DC4A8
  c->lr=0x801DC4B0u; f_801DA320(c); // 801DC4AC
  c->lr=0x801DC4B4u; f_801D9C70(c); // 801DC4B0
L_801DC4B4:;
  c->r[0]=R16(c->r[31]+0x00000034u); // 801DC4B4
  cmps(c,0,(int32_t)c->r[0],0); // 801DC4B8
  if (!crb(c,2)) { IRQCHK(c); goto L_801DC4A8; } // 801DC4BC
L_801DC4C0:;
  c->r[3]=0u+0x80300000u; // 801DC4C0
  c->r[31]=c->r[3]+0x00004A80u; // 801DC4C4
  c->r[0]=R16(c->r[31]+0x00000044u); // 801DC4C8
  cmps(c,0,(int32_t)c->r[0],0); // 801DC4CC
  if (crb(c,2)) { goto L_801DC4F0; } // 801DC4D0
  goto L_801DC4E4; // 801DC4D4
L_801DC4D8:;
  c->r[3]=c->r[31]+0x0000003Cu; // 801DC4D8
  c->lr=0x801DC4E0u; f_801DA320(c); // 801DC4DC
  c->lr=0x801DC4E4u; f_801D9C70(c); // 801DC4E0
L_801DC4E4:;
  c->r[0]=R16(c->r[31]+0x00000044u); // 801DC4E4
  cmps(c,0,(int32_t)c->r[0],0); // 801DC4E8
  if (!crb(c,2)) { IRQCHK(c); goto L_801DC4D8; } // 801DC4EC
L_801DC4F0:;
  c->r[3]=0u+0x80300000u; // 801DC4F0
  c->r[4]=0u+0x801E0000u; // 801DC4F4
  c->r[3]=R32(c->r[3]+0x00004A80u); // 801DC4F8
  c->r[4]=c->r[4]+0xFFFFB8F0u; // 801DC4FC
  c->r[5]=0u+0x00000000u; // 801DC500
  c->lr=0x801DC508u; f_801D1AC0(c); // 801DC504
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DC508
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DC50C
  c->lr=c->r[0]; // 801DC510
  c->r[1]=c->r[1]+0x00000010u; // 801DC514
  return; // 801DC518
}

// UUSB_Unregister
void f_801DC520(Ctx* __restrict c) {
  trace_call(0x801DC520u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DC520
  c->r[0]=c->lr; // 801DC524
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DC528
  c->lr=0x801DC530u; f_801D17C0(c); // 801DC52C
  c->lr=0x801DC534u; f_801DB190(c); // 801DC530
  c->r[3]=0u+0x80300000u; // 801DC534
  c->r[0]=0u+0x00000000u; // 801DC538
  c->r[3]=c->r[3]+0x00004A80u; // 801DC53C
  c->r[4]=0u+0x00000005u; // 801DC540
  W8(c->r[3]+0x00000029u,c->r[4]); // 801DC544
  W8(c->r[3]+0x00000028u,c->r[0]); // 801DC548
  W8(c->r[13]+0xFFFFB6A1u,c->r[0]); // 801DC54C
  c->lr=0x801DC554u; f_801DB160(c); // 801DC550
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DC554
  c->lr=c->r[0]; // 801DC558
  c->r[1]=c->r[1]+0x00000010u; // 801DC55C
  return; // 801DC560
}

// bte_hcisu_send
void f_801DC570(Ctx* __restrict c) {
  trace_call(0x801DC570u);
  W16(c->r[3]+0x00000000u,c->r[4]); // 801DC570
  c->r[4]=R32(c->r[13]+0xFFFFB6B8u); // 801DC574
  cmps(c,0,(int32_t)c->r[4],0); // 801DC578
  if (crb(c,2)) { goto L_801DC58C; } // 801DC57C
  c->r[12]=R32(c->r[4]+0x0000000Cu); // 801DC580
  c->ctr=c->r[12]; // 801DC584
  if (true) { dispatch(c,c->ctr); return; } // 801DC588
L_801DC58C:;
  f_801D9C70(c); return; // 801DC58C
}

// bte_hcisu_task
void f_801DC590(Ctx* __restrict c) {
  trace_call(0x801DC590u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DC590
  c->r[0]=c->lr; // 801DC594
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DC598
  c->r[3]=R32(c->r[13]+0xFFFFB6B8u); // 801DC59C
  cmps(c,0,(int32_t)c->r[3],0); // 801DC5A0
  if (crb(c,2)) { goto L_801DC5E4; } // 801DC5A4
  c->r[12]=R32(c->r[3]+0x00000000u); // 801DC5A8
  cmps(c,0,(int32_t)c->r[12],0); // 801DC5AC
  if (crb(c,2)) { goto L_801DC5C8; } // 801DC5B0
  c->r[3]=0u+0x00000002u; // 801DC5B4
  c->r[4]=0u+0x00000001u; // 801DC5B8
  c->r[5]=0u+0x00000800u; // 801DC5BC
  c->ctr=c->r[12]; // 801DC5C0
  if (true) { c->lr=0x801DC5C8u; dispatch(c,c->ctr); } // 801DC5C4
L_801DC5C8:;
  c->r[3]=R32(c->r[13]+0xFFFFB6B8u); // 801DC5C8
  c->r[12]=R32(c->r[3]+0x00000004u); // 801DC5CC
  cmps(c,0,(int32_t)c->r[12],0); // 801DC5D0
  if (crb(c,2)) { goto L_801DC5E4; } // 801DC5D4
  c->r[3]=R32(c->r[13]+0xFFFFB6BCu); // 801DC5D8
  c->ctr=c->r[12]; // 801DC5DC
  if (true) { c->lr=0x801DC5E4u; dispatch(c,c->ctr); } // 801DC5E0
L_801DC5E4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DC5E4
  c->lr=c->r[0]; // 801DC5E8
  c->r[1]=c->r[1]+0x00000010u; // 801DC5EC
  return; // 801DC5F0
}

// bte_hcisu_close
void f_801DC600(Ctx* __restrict c) {
  trace_call(0x801DC600u);
  c->r[3]=R32(c->r[13]+0xFFFFB6B8u); // 801DC600
  cmps(c,0,(int32_t)c->r[3],0); // 801DC604
  if (crb(c,2)) return; // 801DC608
  c->r[12]=R32(c->r[3]+0x00000008u); // 801DC60C
  cmps(c,0,(int32_t)c->r[12],0); // 801DC610
  if (crb(c,2)) return; // 801DC614
  c->ctr=c->r[12]; // 801DC618
  if (true) { dispatch(c,c->ctr); return; } // 801DC61C
  return; // 801DC620
}

// bta_ci_hci_msg_handler
void f_801DC630(Ctx* __restrict c) {
  trace_call(0x801DC630u);
  c->r[5]=c->r[3]|c->r[3]; // 801DC630
  c->r[3]=0u+0x00000002u; // 801DC634
  c->r[4]=0u+0x00000000u; // 801DC638
  f_801D9E30(c); return; // 801DC63C
}

// BTE_InitStack
void f_801DC640(Ctx* __restrict c) {
  trace_call(0x801DC640u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DC640
  c->r[0]=c->lr; // 801DC644
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DC648
  c->lr=0x801DC650u; f_801FB1BC(c); // 801DC64C
  c->lr=0x801DC654u; f_801EE494(c); // 801DC650
  c->lr=0x801DC658u; f_801F1D68(c); // 801DC654
  c->lr=0x801DC65Cu; f_801F27EC(c); // 801DC658
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DC65C
  c->lr=c->r[0]; // 801DC660
  c->r[1]=c->r[1]+0x00000010u; // 801DC664
  return; // 801DC668
}

// LogMsg
void f_801DC670(Ctx* __restrict c) {
  trace_call(0x801DC670u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DC670
  c->r[0]=c->lr; // 801DC674
  W32(c->r[1]+0x00000084u,c->r[0]); // 801DC678
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 801DC67C
  if (!crb(c,6)) { goto L_801DC6A4; } // 801DC680
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 801DC684
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 801DC688
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[3]);} // 801DC68C
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[4]);} // 801DC690
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[5]);} // 801DC694
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[6]);} // 801DC698
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[7]);} // 801DC69C
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[8]);} // 801DC6A0
L_801DC6A4:;
  c->r[11]=c->r[1]+0x00000088u; // 801DC6A4
  c->r[0]=c->r[1]+0x00000008u; // 801DC6A8
  c->r[12]=0u+0x02000000u; // 801DC6AC
  W32(c->r[1]+0x00000008u,c->r[3]); // 801DC6B0
  c->r[31]=0u+0x80300000u; // 801DC6B4
  c->r[3]=c->r[1]+0x00000068u; // 801DC6B8
  W32(c->r[1]+0x00000010u,c->r[5]); // 801DC6BC
  c->r[5]=c->r[3]|c->r[3]; // 801DC6C0
  c->r[3]=c->r[31]+0x00006AE0u; // 801DC6C4
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801DC6C8
  W32(c->r[1]+0x00000014u,c->r[6]); // 801DC6CC
  W32(c->r[1]+0x00000018u,c->r[7]); // 801DC6D0
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 801DC6D4
  W32(c->r[1]+0x00000020u,c->r[9]); // 801DC6D8
  W32(c->r[1]+0x00000024u,c->r[10]); // 801DC6DC
  W32(c->r[1]+0x00000068u,c->r[12]); // 801DC6E0
  W32(c->r[1]+0x0000006Cu,c->r[11]); // 801DC6E4
  W32(c->r[1]+0x00000070u,c->r[0]); // 801DC6E8
  c->lr=0x801DC6F0u; f_8020E3B8(c); // 801DC6EC
  c->r[3]=c->r[31]+0x00006AE0u; // 801DC6F0
  c->r[4]=c->r[13]+0xFFFFABA8u; // 801DC6F4
  c->r[5]=c->r[3]|c->r[3]; // 801DC6F8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DC6FC
  c->lr=0x801DC704u; f_8020E530(c); // 801DC700
  c->r[3]=c->r[31]+0x00006AE0u; // 801DC704
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DC708
  c->lr=0x801DC710u; f_801899B0(c); // 801DC70C
  c->r[0]=R32(c->r[1]+0x00000084u); // 801DC710
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 801DC714
  c->lr=c->r[0]; // 801DC718
  c->r[1]=c->r[1]+0x00000080u; // 801DC71C
  return; // 801DC720
}

// LogMsg_0
void f_801DC730(Ctx* __restrict c) {
  trace_call(0x801DC730u);
  c->r[0]=R8(c->r[13]+0xFFFFB6C0u); // 801DC730
  cmps(c,0,(int32_t)c->r[0],0); // 801DC734
  if (!crb(c,2)) return; // 801DC738
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DC73C
  f_801DC670(c); return; // 801DC740
  return; // 801DC744
}

// LogMsg_1
void f_801DC750(Ctx* __restrict c) {
  trace_call(0x801DC750u);
  c->r[0]=R8(c->r[13]+0xFFFFB6C0u); // 801DC750
  cmps(c,0,(int32_t)c->r[0],0); // 801DC754
  if (!crb(c,2)) return; // 801DC758
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DC75C
  f_801DC670(c); return; // 801DC760
  return; // 801DC764
}

// LogMsg_2
void f_801DC770(Ctx* __restrict c) {
  trace_call(0x801DC770u);
  c->r[0]=R8(c->r[13]+0xFFFFB6C0u); // 801DC770
  cmps(c,0,(int32_t)c->r[0],0); // 801DC774
  if (!crb(c,2)) return; // 801DC778
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DC77C
  f_801DC670(c); return; // 801DC780
  return; // 801DC784
}

// LogMsg_3
void f_801DC790(Ctx* __restrict c) {
  trace_call(0x801DC790u);
  c->r[0]=R8(c->r[13]+0xFFFFB6C0u); // 801DC790
  cmps(c,0,(int32_t)c->r[0],0); // 801DC794
  if (!crb(c,2)) return; // 801DC798
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DC79C
  f_801DC670(c); return; // 801DC7A0
  return; // 801DC7A4
}

// LogMsg_4
void f_801DC7B0(Ctx* __restrict c) {
  trace_call(0x801DC7B0u);
  c->r[0]=R8(c->r[13]+0xFFFFB6C0u); // 801DC7B0
  cmps(c,0,(int32_t)c->r[0],0); // 801DC7B4
  if (!crb(c,2)) return; // 801DC7B8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DC7BC
  f_801DC670(c); return; // 801DC7C0
  return; // 801DC7C4
}

// LogMsg_5
void f_801DC7D0(Ctx* __restrict c) {
  trace_call(0x801DC7D0u);
  c->r[0]=R8(c->r[13]+0xFFFFB6C0u); // 801DC7D0
  cmps(c,0,(int32_t)c->r[0],0); // 801DC7D4
  if (!crb(c,2)) return; // 801DC7D8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DC7DC
  f_801DC670(c); return; // 801DC7E0
  return; // 801DC7E4
}

// LogMsg_6
void f_801DC7F0(Ctx* __restrict c) {
  trace_call(0x801DC7F0u);
  c->r[0]=R8(c->r[13]+0xFFFFB6C0u); // 801DC7F0
  cmps(c,0,(int32_t)c->r[0],0); // 801DC7F4
  if (!crb(c,2)) return; // 801DC7F8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DC7FC
  f_801DC670(c); return; // 801DC800
  return; // 801DC804
}

// BTUInterruptHandler
void f_801DC810(Ctx* __restrict c) {
  trace_call(0x801DC810u);
  c->r[4]=0u+0x80300000u; // 801DC810
  c->r[3]=0u+0x801E0000u; // 801DC814
  c->r[4]=c->r[4]+0x000072C0u; // 801DC818
  c->r[3]=c->r[3]+0xFFFFC9C0u; // 801DC81C
  c->r[4]=c->r[4]+0x00001000u; // 801DC820
  f_80189520(c); return; // 801DC824
}

// BTA_Init
void f_801DC830(Ctx* __restrict c) {
  trace_call(0x801DC830u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DC830
  c->r[0]=c->lr; // 801DC834
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DC838
  c->r[0]=0u+0x00000000u; // 801DC83C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DC840
  W32(c->r[13]+0xFFFFB6C4u,c->r[0]); // 801DC844
  c->lr=0x801DC84Cu; f_801DAF20(c); // 801DC848
  c->lr=0x801DC850u; f_801DB160(c); // 801DC84C
  c->lr=0x801DC854u; f_801EE368(c); // 801DC850
  c->r[3]=0u+0x80230000u; // 801DC854
  c->r[0]=c->r[13]+0xFFFFABB0u; // 801DC858
  c->r[3]=c->r[3]+0xFFFFC2E8u; // 801DC85C
  W32(c->r[13]+0xFFFFB6B8u,c->r[3]); // 801DC860
  c->r[3]=0u+0x00000000u; // 801DC864
  W32(c->r[13]+0xFFFFB6BCu,c->r[0]); // 801DC868
  c->lr=0x801DC870u; f_801DC590(c); // 801DC86C
  goto L_801DC87C; // 801DC870
L_801DC874:;
  c->r[3]=0u+0x00000064u; // 801DC874
  c->lr=0x801DC87Cu; f_801DB090(c); // 801DC878
L_801DC87C:;
  c->r[0]=R32(c->r[13]+0xFFFFAB68u); // 801DC87C
  cmps(c,0,(int32_t)c->r[0],0); // 801DC880
  if (!crb(c,2)) { IRQCHK(c); goto L_801DC874; } // 801DC884
  c->lr=0x801DC88Cu; f_801DC980(c); // 801DC888
  c->r[31]=0u+0x80310000u; // 801DC88C
  c->r[3]=c->r[31]+0xFFFF82C0u; // 801DC890
  c->lr=0x801DC898u; f_80187C40(c); // 801DC894
  c->lr=0x801DC89Cu; f_801915C0(c); // 801DC898
  c->r[5]=0u+0x80000000u; // 801DC89C
  c->r[9]=0u+0x801E0000u; // 801DC8A0
  c->r[0]=R32(c->r[5]+0x000000F8u); // 801DC8A4
  c->r[6]=0u+0x10620000u; // 801DC8A8
  c->r[5]=c->r[3]|c->r[3]; // 801DC8AC
  c->r[9]=c->r[9]+0xFFFFC810u; // 801DC8B0
  c->r[3]=c->r[6]+0x00004DD3u; // 801DC8B4
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801DC8B8
  c->r[0]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[0])>>32); // 801DC8BC
  c->r[6]=c->r[4]|c->r[4]; // 801DC8C0
  c->r[3]=c->r[31]+0xFFFF82C0u; // 801DC8C4
  c->r[7]=0u+0x00000000u; // 801DC8C8
  c->r[8]=rotl(c->r[0],27)&0x07FFFFFEu; // 801DC8CC
  c->lr=0x801DC8D4u; f_80187F10(c); // 801DC8D0
  c->r[3]=0u+0x00000000u; // 801DC8D4
  c->lr=0x801DC8DCu; f_801DB060(c); // 801DC8D8
  goto L_801DC8E8; // 801DC8DC
L_801DC8E0:;
  c->r[3]=0u+0x000007D0u; // 801DC8E0
  c->lr=0x801DC8E8u; f_801DB090(c); // 801DC8E4
L_801DC8E8:;
  c->lr=0x801DC8ECu; f_801DF950(c); // 801DC8E8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801DC8EC
  if (crb(c,2)) { IRQCHK(c); goto L_801DC8E0; } // 801DC8F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DC8F4
  c->r[3]=0u+0x00000000u; // 801DC8F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DC8FC
  c->lr=c->r[0]; // 801DC900
  c->r[1]=c->r[1]+0x00000010u; // 801DC904
  return; // 801DC908
}

// BTA_CleanUp
void f_801DC910(Ctx* __restrict c) {
  trace_call(0x801DC910u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DC910
  c->r[0]=c->lr; // 801DC914
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DC918
  W32(c->r[13]+0xFFFFB6C4u,c->r[3]); // 801DC91C
  c->r[3]=0u+0x80310000u; // 801DC920
  c->r[3]=c->r[3]+0xFFFF82C0u; // 801DC924
  c->lr=0x801DC92Cu; f_80187FA0(c); // 801DC928
  c->lr=0x801DC930u; f_801DC600(c); // 801DC92C
  c->lr=0x801DC934u; f_801DAFB0(c); // 801DC930
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DC934
  c->lr=c->r[0]; // 801DC938
  c->r[1]=c->r[1]+0x00000010u; // 801DC93C
  return; // 801DC940
}

// bta_usb_close_evt
void f_801DC950(Ctx* __restrict c) {
  trace_call(0x801DC950u);
  c->r[12]=R32(c->r[13]+0xFFFFB6C4u); // 801DC950
  cmps(c,0,(int32_t)c->r[12],0); // 801DC954
  if (crb(c,2)) return; // 801DC958
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[0]); // 801DC95C
  if (crb(c,0)) { goto L_801DC970; } // 801DC960
  c->r[3]=0u+0x00000000u; // 801DC964
  c->ctr=c->r[12]; // 801DC968
  if (true) { dispatch(c,c->ctr); return; } // 801DC96C
L_801DC970:;
  c->r[3]=0u+0x00000001u; // 801DC970
  c->ctr=c->r[12]; // 801DC974
  if (true) { dispatch(c,c->ctr); return; } // 801DC978
  return; // 801DC97C
}

// btu_task_init
void f_801DC980(Ctx* __restrict c) {
  trace_call(0x801DC980u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DC980
  c->r[0]=c->lr; // 801DC984
  c->r[3]=0u+0x00000001u; // 801DC988
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DC98C
  c->r[0]=0u+0x00000000u; // 801DC990
  W8(c->r[13]+0xFFFFABB8u,c->r[3]); // 801DC994
  W32(c->r[13]+0xFFFFABBCu,c->r[3]); // 801DC998
  W32(c->r[13]+0xFFFFB6C8u,c->r[0]); // 801DC99C
  W32(c->r[13]+0xFFFFB6CCu,c->r[0]); // 801DC9A0
  c->lr=0x801DC9A8u; f_801EE33C(c); // 801DC9A4
  c->lr=0x801DC9ACu; f_801DC640(c); // 801DC9A8
  c->lr=0x801DC9B0u; f_801DD0EC(c); // 801DC9AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DC9B0
  c->lr=c->r[0]; // 801DC9B4
  c->r[1]=c->r[1]+0x00000010u; // 801DC9B8
  return; // 801DC9BC
}

// btu_task_msg_handler
void f_801DC9C0(Ctx* __restrict c) {
  trace_call(0x801DC9C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DC9C0
  c->r[0]=c->lr; // 801DC9C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DC9C8
  c->r[11]=c->r[1]+0x00000020u; // 801DC9CC
  c->lr=0x801DC9D4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DC9D0
  c->r[30]=0u+0x00000000u; // 801DC9D4
  c->lr=0x801DC9DCu; f_801915C0(c); // 801DC9D8
  c->r[3]=R32(c->r[13]+0xFFFFB6C8u); // 801DC9DC
  c->r[0]=c->r[3]+0x00000001u; // 801DC9E0
  W32(c->r[13]+0xFFFFB6C8u,c->r[0]); // 801DC9E4
  c->lr=0x801DC9ECu; f_801DB190(c); // 801DC9E8
  c->r[0]=R32(c->r[13]+0xFFFFABBCu); // 801DC9EC
  cmps(c,0,(int32_t)c->r[0],0); // 801DC9F0
  if (crb(c,2)) { goto L_801DCA0C; } // 801DC9F4
  c->r[3]=0u+0x00000000u; // 801DC9F8
  c->r[0]=0u+0x00000001u; // 801DC9FC
  W32(c->r[13]+0xFFFFABBCu,c->r[3]); // 801DCA00
  W8(c->r[13]+0xFFFFABB8u,c->r[0]); // 801DCA04
  goto L_801DCA20; // 801DCA08
L_801DCA0C:;
  c->r[3]=R8(c->r[13]+0xFFFFABB8u); // 801DCA0C
  c->r[0]=c->r[3]+0x00000001u; // 801DCA10
  W8(c->r[13]+0xFFFFABB8u,c->r[0]); // 801DCA14
  c->lr=0x801DCA1Cu; f_801DB160(c); // 801DCA18
  goto L_801DCD24; // 801DCA1C
L_801DCA20:;
  c->lr=0x801DCA24u; f_801DB160(c); // 801DCA20
  c->r[3]=R32(c->r[13]+0xFFFFB6CCu); // 801DCA24
  c->r[31]=0u+0x00000005u; // 801DCA28
  c->r[4]=R32(c->r[13]+0xFFFFB6C8u); // 801DCA2C
  c->r[0]=c->r[3]+0x000001F4u; // 801DCA30
  cmpu(c,0,c->r[4],c->r[0]); // 801DCA34
  if (!crb(c,1)) { goto L_801DCA44; } // 801DCA38
  W32(c->r[13]+0xFFFFB6CCu,c->r[4]); // 801DCA3C
  c->r[31]=c->r[31]|0x00000030u; // 801DCA40
L_801DCA44:;
  c->r[3]=0u+0x80310000u; // 801DCA44
  c->r[29]=c->r[3]+0xFFFF82F0u; // 801DCA48
  goto L_801DCD14; // 801DCA4C
L_801DCA50:;
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 801DCA50
  c->r[30]=0u+0x00000001u; // 801DCA54
  if (crb(c,2)) { goto L_801DCB58; } // 801DCA58
  goto L_801DCB44; // 801DCA5C
L_801DCA60:;
  c->r[0]=R16(c->r[3]+0x00000000u); // 801DCA60
  c->r[30]=0u+0x00000000u; // 801DCA64
  c->r[28]=rotl(c->r[0],0)&0x0000FF00u; // 801DCA68
  cmps(c,0,(int32_t)c->r[28],4352); // 801DCA6C
  if (crb(c,2)) { goto L_801DCA98; } // 801DCA70
  cmps(c,0,(int32_t)c->r[28],6400); // 801DCA74
  if (crb(c,2)) { goto L_801DCAA4; } // 801DCA78
  cmps(c,0,(int32_t)c->r[28],4608); // 801DCA7C
  if (crb(c,2)) { goto L_801DCAB0; } // 801DCA80
  cmps(c,0,(int32_t)c->r[28],4096); // 801DCA84
  if (crb(c,2)) { goto L_801DCABC; } // 801DCA88
  cmps(c,0,(int32_t)c->r[28],5632); // 801DCA8C
  if (crb(c,2)) { goto L_801DCAD0; } // 801DCA90
  goto L_801DCADC; // 801DCA94
L_801DCA98:;
  c->r[3]=c->r[27]|c->r[27]; // 801DCA98
  c->lr=0x801DCAA0u; f_801F83DC(c); // 801DCA9C
  goto L_801DCB44; // 801DCAA0
L_801DCAA4:;
  c->r[3]=c->r[27]|c->r[27]; // 801DCAA4
  c->lr=0x801DCAACu; f_801F81A8(c); // 801DCAA8
  goto L_801DCB44; // 801DCAAC
L_801DCAB0:;
  c->r[3]=c->r[27]|c->r[27]; // 801DCAB0
  c->lr=0x801DCAB8u; f_801E9D14(c); // 801DCAB4
  goto L_801DCB44; // 801DCAB8
L_801DCABC:;
  c->r[3]=c->r[27]|c->r[27]; // 801DCABC
  c->lr=0x801DCAC4u; f_801ED0E0(c); // 801DCAC0
  c->r[3]=c->r[27]|c->r[27]; // 801DCAC4
  c->lr=0x801DCACCu; f_801D9C70(c); // 801DCAC8
  goto L_801DCB44; // 801DCACC
L_801DCAD0:;
  c->r[3]=c->r[27]|c->r[27]; // 801DCAD0
  c->lr=0x801DCAD8u; f_801ED698(c); // 801DCAD4
  goto L_801DCB44; // 801DCAD8
L_801DCADC:;
  c->r[26]=0u+0x00000000u; // 801DCADC
  c->r[4]=0u+0x00000000u; // 801DCAE0
  goto L_801DCB20; // 801DCAE4
L_801DCAE8:;
  c->r[0]=rotl(c->r[26],3)&0x000007F8u; // 801DCAE8
  c->r[3]=c->r[29]+c->r[0]; // 801DCAEC
  c->r[12]=R32(c->r[3]+0x00000014u); // 801DCAF0
  cmps(c,1,(int32_t)c->r[12],0); // 801DCAF4
  if (crb(c,6)) { goto L_801DCB1C; } // 801DCAF8
  c->r[0]=R16(c->r[3]+0x00000010u); // 801DCAFC
  cmpu(c,0,c->r[28],c->r[0]); // 801DCB00
  if (!crb(c,2)) { goto L_801DCB1C; } // 801DCB04
  if (crb(c,6)) { goto L_801DCB1C; } // 801DCB08
  c->r[3]=c->r[27]|c->r[27]; // 801DCB0C
  c->ctr=c->r[12]; // 801DCB10
  if (true) { c->lr=0x801DCB18u; dispatch(c,c->ctr); } // 801DCB14
  c->r[4]=0u+0x00000001u; // 801DCB18
L_801DCB1C:;
  c->r[26]=c->r[26]+0x00000001u; // 801DCB1C
L_801DCB20:;
  cmps(c,0,(int32_t)c->r[4],0); // 801DCB20
  if (!crb(c,2)) { goto L_801DCB34; } // 801DCB24
  c->r[0]=rotl(c->r[26],0)&0x000000FFu; // 801DCB28
  cmpu(c,0,c->r[0],0x00000006u); // 801DCB2C
  if (crb(c,0)) { IRQCHK(c); goto L_801DCAE8; } // 801DCB30
L_801DCB34:;
  cmps(c,0,(int32_t)c->r[4],0); // 801DCB34
  if (!crb(c,2)) { goto L_801DCB44; } // 801DCB38
  c->r[3]=c->r[27]|c->r[27]; // 801DCB3C
  c->lr=0x801DCB44u; f_801D9C70(c); // 801DCB40
L_801DCB44:;
  c->r[3]=0u+0x00000000u; // 801DCB44
  c->lr=0x801DCB4Cu; f_801D9FF0(c); // 801DCB48
  cmps(c,0,(int32_t)c->r[3],0); // 801DCB4C
  c->r[27]=c->r[3]|c->r[3]; // 801DCB50
  if (!crb(c,2)) { IRQCHK(c); goto L_801DCA60; } // 801DCB54
L_801DCB58:;
  c->r[0]=rotl(c->r[31],0)&0x00000010u; cr0(c,c->r[0]); // 801DCB58
  if (crb(c,2)) { goto L_801DCCD4; } // 801DCB5C
  c->r[3]=c->r[29]+0x00000040u; // 801DCB60
  c->r[4]=0u+0x00000001u; // 801DCB64
  c->lr=0x801DCB6Cu; f_801DAC70(c); // 801DCB68
  c->r[0]=rotl(c->r[31],0)&0xFFFFFFEFu; // 801DCB6C
  c->r[31]=rotl(c->r[0],0)&0x0000FFFFu; // 801DCB70
  goto L_801DCCBC; // 801DCB74
L_801DCB78:;
  c->r[4]=c->r[28]|c->r[28]; // 801DCB78
  c->r[3]=c->r[29]+0x00000040u; // 801DCB7C
  c->r[30]=0u+0x00000000u; // 801DCB80
  c->lr=0x801DCB88u; f_801DADF0(c); // 801DCB84
  c->r[0]=R16(c->r[28]+0x00000014u); // 801DCB88
  cmps(c,0,(int32_t)c->r[0],10); // 801DCB8C
  if (crb(c,2)) { goto L_801DCC24; } // 801DCB90
  if (!crb(c,0)) { goto L_801DCBC4; } // 801DCB94
  cmps(c,0,(int32_t)c->r[0],5); // 801DCB98
  if (crb(c,2)) { goto L_801DCC18; } // 801DCB9C
  if (!crb(c,0)) { goto L_801DCBB4; } // 801DCBA0
  cmps(c,0,(int32_t)c->r[0],1); // 801DCBA4
  if (crb(c,2)) { goto L_801DCBF4; } // 801DCBA8
  if (!crb(c,0)) { goto L_801DCC0C; } // 801DCBAC
  goto L_801DCC68; // 801DCBB0
L_801DCBB4:;
  cmps(c,0,(int32_t)c->r[0],8); // 801DCBB4
  if (crb(c,2)) { goto L_801DCC2C; } // 801DCBB8
  if (!crb(c,0)) { goto L_801DCC00; } // 801DCBBC
  goto L_801DCC68; // 801DCBC0
L_801DCBC4:;
  cmps(c,0,(int32_t)c->r[0],60); // 801DCBC4
  if (crb(c,2)) { goto L_801DCC40; } // 801DCBC8
  if (!crb(c,0)) { goto L_801DCBE8; } // 801DCBCC
  cmps(c,0,(int32_t)c->r[0],22); // 801DCBD0
  if (crb(c,2)) { goto L_801DCC54; } // 801DCBD4
  if (!crb(c,0)) { goto L_801DCC68; } // 801DCBD8
  cmps(c,0,(int32_t)c->r[0],13); // 801DCBDC
  if (!crb(c,0)) { goto L_801DCC68; } // 801DCBE0
  goto L_801DCC34; // 801DCBE4
L_801DCBE8:;
  cmps(c,0,(int32_t)c->r[0],66); // 801DCBE8
  if (crb(c,2)) { goto L_801DCC48; } // 801DCBEC
  goto L_801DCC68; // 801DCBF0
L_801DCBF4:;
  c->r[3]=c->r[28]|c->r[28]; // 801DCBF4
  c->lr=0x801DCBFCu; f_801E5440(c); // 801DCBF8
  goto L_801DCCBC; // 801DCBFC
L_801DCC00:;
  c->r[3]=c->r[28]|c->r[28]; // 801DCC00
  c->lr=0x801DCC08u; f_801E3F34(c); // 801DCC04
  goto L_801DCCBC; // 801DCC08
L_801DCC0C:;
  c->r[3]=c->r[28]|c->r[28]; // 801DCC0C
  c->lr=0x801DCC14u; f_801F917C(c); // 801DCC10
  goto L_801DCCBC; // 801DCC14
L_801DCC18:;
  c->r[3]=R32(c->r[28]+0x00000010u); // 801DCC18
  c->lr=0x801DCC20u; f_80204EDC(c); // 801DCC1C
  goto L_801DCCBC; // 801DCC20
L_801DCC24:;
  c->lr=0x801DCC28u; f_801E85B4(c); // 801DCC24
  goto L_801DCCBC; // 801DCC28
L_801DCC2C:;
  c->lr=0x801DCC30u; f_801E6B58(c); // 801DCC2C
  goto L_801DCCBC; // 801DCC30
L_801DCC34:;
  c->r[3]=c->r[28]|c->r[28]; // 801DCC34
  c->lr=0x801DCC3Cu; f_80201338(c); // 801DCC38
  goto L_801DCCBC; // 801DCC3C
L_801DCC40:;
  c->lr=0x801DCC44u; f_801EE104(c); // 801DCC40
  goto L_801DCCBC; // 801DCC44
L_801DCC48:;
  c->r[3]=c->r[28]|c->r[28]; // 801DCC48
  c->lr=0x801DCC50u; f_801F35D8(c); // 801DCC4C
  goto L_801DCCBC; // 801DCC50
L_801DCC54:;
  c->r[12]=R32(c->r[28]+0x00000010u); // 801DCC54
  c->r[3]=c->r[28]|c->r[28]; // 801DCC58
  c->ctr=c->r[12]; // 801DCC5C
  if (true) { c->lr=0x801DCC64u; dispatch(c,c->ctr); } // 801DCC60
  goto L_801DCCBC; // 801DCC64
L_801DCC68:;
  c->r[27]=0u+0x00000000u; // 801DCC68
  c->r[4]=0u+0x00000000u; // 801DCC6C
  goto L_801DCCA8; // 801DCC70
L_801DCC74:;
  c->r[0]=rotl(c->r[27],3)&0x000007F8u; // 801DCC74
  c->r[3]=c->r[29]+c->r[0]; // 801DCC78
  c->r[12]=R32(c->r[3]+0x00000004u); // 801DCC7C
  cmps(c,0,(int32_t)c->r[12],0); // 801DCC80
  if (crb(c,2)) { goto L_801DCCA4; } // 801DCC84
  c->r[0]=R32(c->r[3]+0x00000000u); // 801DCC88
  cmpu(c,0,c->r[0],c->r[28]); // 801DCC8C
  if (!crb(c,2)) { goto L_801DCCA4; } // 801DCC90
  c->r[3]=c->r[28]|c->r[28]; // 801DCC94
  c->ctr=c->r[12]; // 801DCC98
  if (true) { c->lr=0x801DCCA0u; dispatch(c,c->ctr); } // 801DCC9C
  c->r[4]=0u+0x00000001u; // 801DCCA0
L_801DCCA4:;
  c->r[27]=c->r[27]+0x00000001u; // 801DCCA4
L_801DCCA8:;
  cmps(c,0,(int32_t)c->r[4],0); // 801DCCA8
  if (!crb(c,2)) { goto L_801DCCBC; } // 801DCCAC
  c->r[0]=rotl(c->r[27],0)&0x000000FFu; // 801DCCB0
  cmpu(c,0,c->r[0],0x00000002u); // 801DCCB4
  if (crb(c,0)) { IRQCHK(c); goto L_801DCC74; } // 801DCCB8
L_801DCCBC:;
  c->r[28]=R32(c->r[29]+0x00000040u); // 801DCCBC
  cmps(c,0,(int32_t)c->r[28],0); // 801DCCC0
  if (crb(c,2)) { goto L_801DCCD4; } // 801DCCC4
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 801DCCC8
  cmps(c,0,(int32_t)c->r[0],0); // 801DCCCC
  if (crb(c,2)) { IRQCHK(c); goto L_801DCB78; } // 801DCCD0
L_801DCCD4:;
  c->r[0]=rotl(c->r[31],0)&0x00000004u; cr0(c,c->r[0]); // 801DCCD4
  if (crb(c,2)) { goto L_801DCCF8; } // 801DCCD8
  goto L_801DCCE8; // 801DCCDC
L_801DCCE0:;
  c->r[30]=0u+0x00000000u; // 801DCCE0
  c->lr=0x801DCCE8u; f_801DD150(c); // 801DCCE4
L_801DCCE8:;
  c->r[3]=0u+0x00000002u; // 801DCCE8
  c->lr=0x801DCCF0u; f_801D9FF0(c); // 801DCCEC
  cmps(c,0,(int32_t)c->r[3],0); // 801DCCF0
  if (!crb(c,2)) { IRQCHK(c); goto L_801DCCE0; } // 801DCCF4
L_801DCCF8:;
  c->r[0]=rotl(c->r[31],0)&0x00000020u; cr0(c,c->r[0]); // 801DCCF8
  if (crb(c,2)) { goto L_801DCD0C; } // 801DCCFC
  c->r[0]=rotl(c->r[31],0)&0xFFFFFFDFu; // 801DCD00
  c->r[31]=rotl(c->r[0],0)&0x0000FFFFu; // 801DCD04
  c->lr=0x801DCD0Cu; f_801DD23C(c); // 801DCD08
L_801DCD0C:;
  c->r[0]=rotl(c->r[31],0)&0x00008000u; cr0(c,c->r[0]); // 801DCD0C
  if (!crb(c,2)) { goto L_801DCD1C; } // 801DCD10
L_801DCD14:;
  cmps(c,0,(int32_t)c->r[30],0); // 801DCD14
  if (crb(c,2)) { IRQCHK(c); goto L_801DCA50; } // 801DCD18
L_801DCD1C:;
  c->r[0]=0u+0x00000001u; // 801DCD1C
  W32(c->r[13]+0xFFFFABBCu,c->r[0]); // 801DCD20
L_801DCD24:;
  c->r[11]=c->r[1]+0x00000020u; // 801DCD24
  c->lr=0x801DCD2Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DCD28
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DCD2C
  c->lr=c->r[0]; // 801DCD30
  c->r[1]=c->r[1]+0x00000020u; // 801DCD34
  return; // 801DCD38
}

// btu_start_timer
void f_801DCD40(Ctx* __restrict c) {
  trace_call(0x801DCD40u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DCD40
  c->r[0]=c->lr; // 801DCD44
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DCD48
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DCD4C
  c->r[31]=0u+0x80310000u; // 801DCD50
  c->r[31]=c->r[31]+0xFFFF82F0u; // 801DCD54
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DCD58
  c->r[30]=c->r[5]|c->r[5]; // 801DCD5C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DCD60
  c->r[29]=c->r[4]|c->r[4]; // 801DCD64
  W32(c->r[1]+0x00000010u,c->r[28]); // 801DCD68
  c->r[28]=c->r[3]|c->r[3]; // 801DCD6C
  c->r[4]=c->r[28]|c->r[28]; // 801DCD70
  c->r[3]=c->r[31]+0x00000040u; // 801DCD74
  c->lr=0x801DCD7Cu; f_801DADF0(c); // 801DCD78
  W16(c->r[28]+0x00000014u,c->r[29]); // 801DCD7C
  c->r[4]=c->r[28]|c->r[28]; // 801DCD80
  c->r[3]=c->r[31]+0x00000040u; // 801DCD84
  W32(c->r[28]+0x0000000Cu,c->r[30]); // 801DCD88
  c->lr=0x801DCD90u; f_801DAD00(c); // 801DCD8C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DCD90
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DCD94
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DCD98
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DCD9C
  c->r[28]=R32(c->r[1]+0x00000010u); // 801DCDA0
  c->lr=c->r[0]; // 801DCDA4
  c->r[1]=c->r[1]+0x00000020u; // 801DCDA8
  return; // 801DCDAC
}

// btu_stop_timer
void f_801DCDB0(Ctx* __restrict c) {
  trace_call(0x801DCDB0u);
  c->r[5]=0u+0x80310000u; // 801DCDB0
  c->r[4]=c->r[3]|c->r[3]; // 801DCDB4
  c->r[5]=c->r[5]+0xFFFF82F0u; // 801DCDB8
  c->r[3]=c->r[5]+0x00000040u; // 801DCDBC
  f_801DADF0(c); return; // 801DCDC0
}

// bdcpy
void f_801DCDC4(Ctx* __restrict c) {
  trace_call(0x801DCDC4u);
  c->r[9]=R8(c->r[4]+0x00000000u); // 801DCDC4
  c->r[8]=R8(c->r[4]+0x00000001u); // 801DCDC8
  c->r[7]=R8(c->r[4]+0x00000002u); // 801DCDCC
  c->r[6]=R8(c->r[4]+0x00000003u); // 801DCDD0
  c->r[5]=R8(c->r[4]+0x00000004u); // 801DCDD4
  c->r[0]=R8(c->r[4]+0x00000005u); // 801DCDD8
  W8(c->r[3]+0x00000000u,c->r[9]); // 801DCDDC
  W8(c->r[3]+0x00000001u,c->r[8]); // 801DCDE0
  W8(c->r[3]+0x00000002u,c->r[7]); // 801DCDE4
  W8(c->r[3]+0x00000003u,c->r[6]); // 801DCDE8
  W8(c->r[3]+0x00000004u,c->r[5]); // 801DCDEC
  W8(c->r[3]+0x00000005u,c->r[0]); // 801DCDF0
  return; // 801DCDF4
}

// bdcmp
void f_801DCDF8(Ctx* __restrict c) {
  trace_call(0x801DCDF8u);
  c->r[5]=R8(c->r[3]+0x00000000u); // 801DCDF8
  c->r[0]=R8(c->r[4]+0x00000000u); // 801DCDFC
  cmpu(c,0,c->r[5],c->r[0]); // 801DCE00
  if (crb(c,2)) { goto L_801DCE10; } // 801DCE04
  c->r[3]=0u+0xFFFFFFFFu; // 801DCE08
  return; // 801DCE0C
L_801DCE10:;
  c->r[5]=R8(c->r[3]+0x00000001u); // 801DCE10
  c->r[6]=c->r[3]+0x00000002u; // 801DCE14
  c->r[0]=R8(c->r[4]+0x00000001u); // 801DCE18
  c->r[3]=c->r[4]+0x00000002u; // 801DCE1C
  cmpu(c,0,c->r[5],c->r[0]); // 801DCE20
  if (crb(c,2)) { goto L_801DCE30; } // 801DCE24
  c->r[3]=0u+0xFFFFFFFFu; // 801DCE28
  return; // 801DCE2C
L_801DCE30:;
  c->r[5]=R8(c->r[6]+0x00000000u); // 801DCE30
  c->r[0]=R8(c->r[3]+0x00000000u); // 801DCE34
  cmpu(c,0,c->r[5],c->r[0]); // 801DCE38
  if (crb(c,2)) { goto L_801DCE48; } // 801DCE3C
  c->r[3]=0u+0xFFFFFFFFu; // 801DCE40
  return; // 801DCE44
L_801DCE48:;
  c->r[5]=R8(c->r[6]+0x00000001u); // 801DCE48
  c->r[0]=R8(c->r[3]+0x00000001u); // 801DCE4C
  cmpu(c,0,c->r[5],c->r[0]); // 801DCE50
  if (crb(c,2)) { goto L_801DCE60; } // 801DCE54
  c->r[3]=0u+0xFFFFFFFFu; // 801DCE58
  return; // 801DCE5C
L_801DCE60:;
  c->r[5]=R8(c->r[6]+0x00000002u); // 801DCE60
  c->r[0]=R8(c->r[3]+0x00000002u); // 801DCE64
  cmpu(c,0,c->r[5],c->r[0]); // 801DCE68
  if (crb(c,2)) { goto L_801DCE78; } // 801DCE6C
  c->r[3]=0u+0xFFFFFFFFu; // 801DCE70
  return; // 801DCE74
L_801DCE78:;
  c->r[5]=R8(c->r[6]+0x00000003u); // 801DCE78
  c->r[0]=R8(c->r[3]+0x00000003u); // 801DCE7C
  cmpu(c,0,c->r[5],c->r[0]); // 801DCE80
  if (crb(c,2)) { goto L_801DCE90; } // 801DCE84
  c->r[3]=0u+0xFFFFFFFFu; // 801DCE88
  return; // 801DCE8C
L_801DCE90:;
  c->r[3]=0u+0x00000000u; // 801DCE90
  return; // 801DCE94
}

// bta_sys_rm_register
void f_801DCE98(Ctx* __restrict c) {
  trace_call(0x801DCE98u);
  c->r[4]=0u+0x80310000u; // 801DCE98
  c->r[4]=c->r[4]+0xFFFF8378u; // 801DCE9C
  W32(c->r[4]+0x00000080u,c->r[3]); // 801DCEA0
  return; // 801DCEA4
}

// bta_sys_compress_register
void f_801DCEA8(Ctx* __restrict c) {
  trace_call(0x801DCEA8u);
  c->r[4]=0u+0x80310000u; // 801DCEA8
  c->r[4]=c->r[4]+0xFFFF8378u; // 801DCEAC
  W32(c->r[4]+0x00000088u,c->r[3]); // 801DCEB0
  return; // 801DCEB4
}

// bta_sys_pm_register
void f_801DCEB8(Ctx* __restrict c) {
  trace_call(0x801DCEB8u);
  c->r[4]=0u+0x80310000u; // 801DCEB8
  c->r[4]=c->r[4]+0xFFFF8378u; // 801DCEBC
  W32(c->r[4]+0x00000084u,c->r[3]); // 801DCEC0
  return; // 801DCEC4
}

// bta_sys_conn_open
void f_801DCEC8(Ctx* __restrict c) {
  trace_call(0x801DCEC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DCEC8
  c->r[0]=c->lr; // 801DCECC
  c->r[6]=0u+0x80310000u; // 801DCED0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DCED4
  c->r[6]=c->r[6]+0xFFFF8378u; // 801DCED8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DCEDC
  c->r[31]=c->r[5]|c->r[5]; // 801DCEE0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DCEE4
  c->r[30]=c->r[4]|c->r[4]; // 801DCEE8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DCEEC
  c->r[29]=c->r[3]|c->r[3]; // 801DCEF0
  c->r[12]=R32(c->r[6]+0x00000080u); // 801DCEF4
  cmps(c,0,(int32_t)c->r[12],0); // 801DCEF8
  if (crb(c,2)) { goto L_801DCF18; } // 801DCEFC
  c->r[4]=c->r[29]|c->r[29]; // 801DCF00
  c->r[5]=c->r[30]|c->r[30]; // 801DCF04
  c->r[6]=c->r[31]|c->r[31]; // 801DCF08
  c->r[3]=0u+0x00000000u; // 801DCF0C
  c->ctr=c->r[12]; // 801DCF10
  if (true) { c->lr=0x801DCF18u; dispatch(c,c->ctr); } // 801DCF14
L_801DCF18:;
  c->r[3]=0u+0x80310000u; // 801DCF18
  c->r[3]=c->r[3]+0xFFFF8378u; // 801DCF1C
  c->r[12]=R32(c->r[3]+0x00000084u); // 801DCF20
  cmps(c,0,(int32_t)c->r[12],0); // 801DCF24
  if (crb(c,2)) { goto L_801DCF44; } // 801DCF28
  c->r[4]=c->r[29]|c->r[29]; // 801DCF2C
  c->r[5]=c->r[30]|c->r[30]; // 801DCF30
  c->r[6]=c->r[31]|c->r[31]; // 801DCF34
  c->r[3]=0u+0x00000000u; // 801DCF38
  c->ctr=c->r[12]; // 801DCF3C
  if (true) { c->lr=0x801DCF44u; dispatch(c,c->ctr); } // 801DCF40
L_801DCF44:;
  c->r[3]=0u+0x80310000u; // 801DCF44
  c->r[3]=c->r[3]+0xFFFF8378u; // 801DCF48
  c->r[12]=R32(c->r[3]+0x00000088u); // 801DCF4C
  cmps(c,0,(int32_t)c->r[12],0); // 801DCF50
  if (crb(c,2)) { goto L_801DCF70; } // 801DCF54
  c->r[4]=c->r[29]|c->r[29]; // 801DCF58
  c->r[5]=c->r[30]|c->r[30]; // 801DCF5C
  c->r[6]=c->r[31]|c->r[31]; // 801DCF60
  c->r[3]=0u+0x00000000u; // 801DCF64
  c->ctr=c->r[12]; // 801DCF68
  if (true) { c->lr=0x801DCF70u; dispatch(c,c->ctr); } // 801DCF6C
L_801DCF70:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DCF70
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DCF74
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DCF78
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DCF7C
  c->lr=c->r[0]; // 801DCF80
  c->r[1]=c->r[1]+0x00000020u; // 801DCF84
  return; // 801DCF88
}

// bta_sys_conn_close
void f_801DCF8C(Ctx* __restrict c) {
  trace_call(0x801DCF8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DCF8C
  c->r[0]=c->lr; // 801DCF90
  c->r[6]=0u+0x80310000u; // 801DCF94
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DCF98
  c->r[6]=c->r[6]+0xFFFF8378u; // 801DCF9C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DCFA0
  c->r[31]=c->r[5]|c->r[5]; // 801DCFA4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DCFA8
  c->r[30]=c->r[4]|c->r[4]; // 801DCFAC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DCFB0
  c->r[29]=c->r[3]|c->r[3]; // 801DCFB4
  c->r[12]=R32(c->r[6]+0x00000080u); // 801DCFB8
  cmps(c,0,(int32_t)c->r[12],0); // 801DCFBC
  if (crb(c,2)) { goto L_801DCFDC; } // 801DCFC0
  c->r[4]=c->r[29]|c->r[29]; // 801DCFC4
  c->r[5]=c->r[30]|c->r[30]; // 801DCFC8
  c->r[6]=c->r[31]|c->r[31]; // 801DCFCC
  c->r[3]=0u+0x00000001u; // 801DCFD0
  c->ctr=c->r[12]; // 801DCFD4
  if (true) { c->lr=0x801DCFDCu; dispatch(c,c->ctr); } // 801DCFD8
L_801DCFDC:;
  c->r[3]=0u+0x80310000u; // 801DCFDC
  c->r[3]=c->r[3]+0xFFFF8378u; // 801DCFE0
  c->r[12]=R32(c->r[3]+0x00000084u); // 801DCFE4
  cmps(c,0,(int32_t)c->r[12],0); // 801DCFE8
  if (crb(c,2)) { goto L_801DD008; } // 801DCFEC
  c->r[4]=c->r[29]|c->r[29]; // 801DCFF0
  c->r[5]=c->r[30]|c->r[30]; // 801DCFF4
  c->r[6]=c->r[31]|c->r[31]; // 801DCFF8
  c->r[3]=0u+0x00000001u; // 801DCFFC
  c->ctr=c->r[12]; // 801DD000
  if (true) { c->lr=0x801DD008u; dispatch(c,c->ctr); } // 801DD004
L_801DD008:;
  c->r[3]=0u+0x80310000u; // 801DD008
  c->r[3]=c->r[3]+0xFFFF8378u; // 801DD00C
  c->r[12]=R32(c->r[3]+0x00000088u); // 801DD010
  cmps(c,0,(int32_t)c->r[12],0); // 801DD014
  if (crb(c,2)) { goto L_801DD034; } // 801DD018
  c->r[4]=c->r[29]|c->r[29]; // 801DD01C
  c->r[5]=c->r[30]|c->r[30]; // 801DD020
  c->r[6]=c->r[31]|c->r[31]; // 801DD024
  c->r[3]=0u+0x00000001u; // 801DD028
  c->ctr=c->r[12]; // 801DD02C
  if (true) { c->lr=0x801DD034u; dispatch(c,c->ctr); } // 801DD030
L_801DD034:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DD034
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DD038
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DD03C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DD040
  c->lr=c->r[0]; // 801DD044
  c->r[1]=c->r[1]+0x00000020u; // 801DD048
  return; // 801DD04C
}

// bta_sys_sco_close
void f_801DD050(Ctx* __restrict c) {
  trace_call(0x801DD050u);
  c->r[6]=0u+0x80310000u; // 801DD050
  c->r[0]=c->r[4]|c->r[4]; // 801DD054
  c->r[6]=c->r[6]+0xFFFF8378u; // 801DD058
  c->r[12]=R32(c->r[6]+0x00000084u); // 801DD05C
  c->r[6]=c->r[5]|c->r[5]; // 801DD060
  cmps(c,0,(int32_t)c->r[12],0); // 801DD064
  if (crb(c,2)) return; // 801DD068
  c->r[4]=c->r[3]|c->r[3]; // 801DD06C
  c->r[5]=c->r[0]|c->r[0]; // 801DD070
  c->r[3]=0u+0x00000005u; // 801DD074
  c->ctr=c->r[12]; // 801DD078
  if (true) { dispatch(c,c->ctr); return; } // 801DD07C
  return; // 801DD080
}

// bta_sys_idle
void f_801DD084(Ctx* __restrict c) {
  trace_call(0x801DD084u);
  c->r[6]=0u+0x80310000u; // 801DD084
  c->r[0]=c->r[4]|c->r[4]; // 801DD088
  c->r[6]=c->r[6]+0xFFFF8378u; // 801DD08C
  c->r[12]=R32(c->r[6]+0x00000084u); // 801DD090
  c->r[6]=c->r[5]|c->r[5]; // 801DD094
  cmps(c,0,(int32_t)c->r[12],0); // 801DD098
  if (crb(c,2)) return; // 801DD09C
  c->r[4]=c->r[3]|c->r[3]; // 801DD0A0
  c->r[5]=c->r[0]|c->r[0]; // 801DD0A4
  c->r[3]=0u+0x00000006u; // 801DD0A8
  c->ctr=c->r[12]; // 801DD0AC
  if (true) { dispatch(c,c->ctr); return; } // 801DD0B0
  return; // 801DD0B4
}

// bta_sys_busy
void f_801DD0B8(Ctx* __restrict c) {
  trace_call(0x801DD0B8u);
  c->r[6]=0u+0x80310000u; // 801DD0B8
  c->r[0]=c->r[4]|c->r[4]; // 801DD0BC
  c->r[6]=c->r[6]+0xFFFF8378u; // 801DD0C0
  c->r[12]=R32(c->r[6]+0x00000084u); // 801DD0C4
  c->r[6]=c->r[5]|c->r[5]; // 801DD0C8
  cmps(c,0,(int32_t)c->r[12],0); // 801DD0CC
  if (crb(c,2)) return; // 801DD0D0
  c->r[4]=c->r[3]|c->r[3]; // 801DD0D4
  c->r[5]=c->r[0]|c->r[0]; // 801DD0D8
  c->r[3]=0u+0x00000007u; // 801DD0DC
  c->ctr=c->r[12]; // 801DD0E0
  if (true) { dispatch(c,c->ctr); return; } // 801DD0E4
  return; // 801DD0E8
}

// bta_sys_init
void f_801DD0EC(Ctx* __restrict c) {
  trace_call(0x801DD0ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DD0EC
  c->r[0]=c->lr; // 801DD0F0
  c->r[4]=0u+0x00000000u; // 801DD0F4
  c->r[5]=0u+0x0000008Cu; // 801DD0F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DD0FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DD100
  c->r[31]=0u+0x80310000u; // 801DD104
  c->r[3]=c->r[31]+0xFFFF8378u; // 801DD108
  c->lr=0x801DD110u; f_800046B4(c); // 801DD10C
  c->r[5]=R32(c->r[13]+0xFFFFABA0u); // 801DD110
  c->r[31]=c->r[31]+0xFFFF8378u; // 801DD114
  c->r[3]=c->r[31]+0x00000068u; // 801DD118
  c->r[4]=0u+0x000003E8u; // 801DD11C
  c->r[5]=R8(c->r[5]+0x00000003u); // 801DD120
  c->lr=0x801DD128u; f_801DD330(c); // 801DD124
  c->lr=0x801DD12Cu; f_801DB150(c); // 801DD128
  W8(c->r[31]+0x0000007Du,c->r[3]); // 801DD12C
  c->r[3]=R32(c->r[13]+0xFFFFABA0u); // 801DD130
  c->r[0]=R8(c->r[3]+0x00000004u); // 801DD134
  W8(c->r[13]+0xFFFFB6D0u,c->r[0]); // 801DD138
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DD13C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DD140
  c->lr=c->r[0]; // 801DD144
  c->r[1]=c->r[1]+0x00000010u; // 801DD148
  return; // 801DD14C
}

// bta_sys_event
void f_801DD150(Ctx* __restrict c) {
  trace_call(0x801DD150u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DD150
  c->r[0]=c->lr; // 801DD154
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DD158
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DD15C
  c->r[31]=0u+0x00000001u; // 801DD160
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DD164
  c->r[30]=c->r[3]|c->r[3]; // 801DD168
  c->r[0]=R8(c->r[13]+0xFFFFB6D0u); // 801DD16C
  cmpu(c,0,c->r[0],0x00000004u); // 801DD170
  if (crb(c,0)) { goto L_801DD18C; } // 801DD174
  c->r[4]=0u+0x80280000u; // 801DD178
  c->r[5]=R16(c->r[30]+0x00000000u); // 801DD17C
  c->r[4]=c->r[4]+0xFFFFE108u; // 801DD180
  c->r[3]=0u+0x00000503u; // 801DD184
  c->lr=0x801DD18Cu; f_801DC750(c); // 801DD188
L_801DD18C:;
  c->r[3]=0u+0x80310000u; // 801DD18C
  c->r[4]=R16(c->r[30]+0x00000000u); // 801DD190
  c->r[3]=c->r[3]+0xFFFF8378u; // 801DD194
  c->r[0]=R8(c->r[3]+0x0000007Eu); // 801DD198
  c->r[5]=sraw(c,c->r[4],8); // 801DD19C
  cmps(c,0,(int32_t)c->r[0],0); // 801DD1A0
  if (crb(c,2)) { goto L_801DD1C0; } // 801DD1A4
  cmpu(c,0,c->r[4],0x00000101u); // 801DD1A8
  if (!crb(c,2)) { goto L_801DD1B4; } // 801DD1AC
  c->lr=0x801DD1B4u; f_801DF820(c); // 801DD1B0
L_801DD1B4:;
  c->r[3]=c->r[30]|c->r[30]; // 801DD1B4
  c->lr=0x801DD1BCu; f_801D9C70(c); // 801DD1B8
  goto L_801DD224; // 801DD1BC
L_801DD1C0:;
  c->r[0]=rotl(c->r[5],0)&0x000000FFu; // 801DD1C0
  cmpu(c,0,c->r[0],0x0000001Au); // 801DD1C4
  if (!crb(c,0)) { goto L_801DD1F4; } // 801DD1C8
  c->r[0]=rotl(c->r[5],2)&0x000003FCu; // 801DD1CC
  c->r[3]=R32(c->r[3]+c->r[0]); // 801DD1D0
  cmps(c,0,(int32_t)c->r[3],0); // 801DD1D4
  if (crb(c,2)) { goto L_801DD1F4; } // 801DD1D8
  c->r[12]=R32(c->r[3]+0x00000000u); // 801DD1DC
  c->r[3]=c->r[30]|c->r[30]; // 801DD1E0
  c->ctr=c->r[12]; // 801DD1E4
  if (true) { c->lr=0x801DD1ECu; dispatch(c,c->ctr); } // 801DD1E8
  c->r[31]=c->r[3]|c->r[3]; // 801DD1EC
  goto L_801DD214; // 801DD1F0
L_801DD1F4:;
  c->r[0]=R8(c->r[13]+0xFFFFB6D0u); // 801DD1F4
  cmpu(c,0,c->r[0],0x00000002u); // 801DD1F8
  if (crb(c,0)) { goto L_801DD214; } // 801DD1FC
  c->r[4]=0u+0x80280000u; // 801DD200
  c->r[5]=rotl(c->r[5],0)&0x000000FFu; // 801DD204
  c->r[4]=c->r[4]+0xFFFFE11Cu; // 801DD208
  c->r[3]=0u+0x00000501u; // 801DD20C
  c->lr=0x801DD214u; f_801DC750(c); // 801DD210
L_801DD214:;
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; cr0(c,c->r[0]); // 801DD214
  if (crb(c,2)) { goto L_801DD224; } // 801DD218
  c->r[3]=c->r[30]|c->r[30]; // 801DD21C
  c->lr=0x801DD224u; f_801D9C70(c); // 801DD220
L_801DD224:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DD224
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DD228
  c->r[30]=R32(c->r[1]+0x00000008u); // 801DD22C
  c->lr=c->r[0]; // 801DD230
  c->r[1]=c->r[1]+0x00000010u; // 801DD234
  return; // 801DD238
}

// bta_sys_timer_update
void f_801DD23C(Ctx* __restrict c) {
  trace_call(0x801DD23Cu);
  c->r[3]=0u+0x80310000u; // 801DD23C
  c->r[3]=c->r[3]+0xFFFF8378u; // 801DD240
  c->r[0]=R8(c->r[3]+0x0000007Cu); // 801DD244
  cmps(c,0,(int32_t)c->r[0],0); // 801DD248
  if (!crb(c,2)) return; // 801DD24C
  c->r[3]=c->r[3]+0x00000068u; // 801DD250
  f_801DD37C(c); return; // 801DD254
  return; // 801DD258
}

// bta_sys_register
void f_801DD25C(Ctx* __restrict c) {
  trace_call(0x801DD25Cu);
  c->r[5]=0u+0x80310000u; // 801DD25C
  c->r[0]=rotl(c->r[3],2)&0x000003FCu; // 801DD260
  c->r[5]=c->r[5]+0xFFFF8378u; // 801DD264
  W32(c->r[5]+c->r[0],c->r[4]); // 801DD268
  return; // 801DD26C
}

// bta_sys_sendmsg
void f_801DD270(Ctx* __restrict c) {
  trace_call(0x801DD270u);
  c->r[4]=R32(c->r[13]+0xFFFFABA0u); // 801DD270
  c->r[6]=0u+0x80310000u; // 801DD274
  c->r[6]=c->r[6]+0xFFFF8378u; // 801DD278
  c->r[5]=c->r[3]|c->r[3]; // 801DD27C
  c->r[3]=R8(c->r[6]+0x0000007Du); // 801DD280
  c->r[4]=R8(c->r[4]+0x00000002u); // 801DD284
  f_801D9E30(c); return; // 801DD288
}

// bta_sys_start_timer
void f_801DD28C(Ctx* __restrict c) {
  trace_call(0x801DD28Cu);
  c->r[7]=0u+0x80310000u; // 801DD28C
  c->r[0]=c->r[4]|c->r[4]; // 801DD290
  c->r[7]=c->r[7]+0xFFFF8378u; // 801DD294
  c->r[6]=c->r[5]|c->r[5]; // 801DD298
  c->r[4]=c->r[3]|c->r[3]; // 801DD29C
  c->r[5]=c->r[0]|c->r[0]; // 801DD2A0
  c->r[3]=c->r[7]+0x00000068u; // 801DD2A4
  f_801DD430(c); return; // 801DD2A8
}

// bta_sys_stop_timer
void f_801DD2AC(Ctx* __restrict c) {
  trace_call(0x801DD2ACu);
  c->r[5]=0u+0x80310000u; // 801DD2AC
  c->r[4]=c->r[3]|c->r[3]; // 801DD2B0
  c->r[5]=c->r[5]+0xFFFF8378u; // 801DD2B4
  c->r[3]=c->r[5]+0x00000068u; // 801DD2B8
  f_801DD4D0(c); return; // 801DD2BC
}

// bta_sys_disable
void f_801DD2C0(Ctx* __restrict c) {
  trace_call(0x801DD2C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DD2C0
  c->r[0]=c->lr; // 801DD2C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DD2C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DD2CC
  c->r[31]=0u+0x80310000u; // 801DD2D0
  c->r[31]=c->r[31]+0xFFFF8378u; // 801DD2D4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DD2D8
  c->r[30]=0u+0x00000000u; // 801DD2DC
L_801DD2E0:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 801DD2E0
  cmps(c,0,(int32_t)c->r[3],0); // 801DD2E4
  if (crb(c,2)) { goto L_801DD300; } // 801DD2E8
  c->r[12]=R32(c->r[3]+0x00000004u); // 801DD2EC
  cmps(c,0,(int32_t)c->r[12],0); // 801DD2F0
  if (crb(c,2)) { goto L_801DD300; } // 801DD2F4
  c->ctr=c->r[12]; // 801DD2F8
  if (true) { c->lr=0x801DD300u; dispatch(c,c->ctr); } // 801DD2FC
L_801DD300:;
  c->r[30]=c->r[30]+0x00000001u; // 801DD300
  c->r[31]=c->r[31]+0x00000004u; // 801DD304
  cmps(c,0,(int32_t)c->r[30],26); // 801DD308
  if (crb(c,0)) { IRQCHK(c); goto L_801DD2E0; } // 801DD30C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DD310
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DD314
  c->r[30]=R32(c->r[1]+0x00000008u); // 801DD318
  c->lr=c->r[0]; // 801DD31C
  c->r[1]=c->r[1]+0x00000010u; // 801DD320
  return; // 801DD324
}

// bta_sys_set_trace_level
void f_801DD328(Ctx* __restrict c) {
  trace_call(0x801DD328u);
  W8(c->r[13]+0xFFFFB6D0u,c->r[3]); // 801DD328
  return; // 801DD32C
}

// ptim_init
void f_801DD330(Ctx* __restrict c) {
  trace_call(0x801DD330u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DD330
  c->r[0]=c->lr; // 801DD334
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DD338
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DD33C
  c->r[31]=c->r[5]|c->r[5]; // 801DD340
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DD344
  c->r[30]=c->r[4]|c->r[4]; // 801DD348
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DD34C
  c->r[29]=c->r[3]|c->r[3]; // 801DD350
  c->lr=0x801DD358u; f_801DAC50(c); // 801DD354
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 801DD358
  W8(c->r[29]+0x00000010u,c->r[31]); // 801DD35C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DD360
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DD364
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DD368
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DD36C
  c->lr=c->r[0]; // 801DD370
  c->r[1]=c->r[1]+0x00000020u; // 801DD374
  return; // 801DD378
}

// ptim_timer_update
void f_801DD37C(Ctx* __restrict c) {
  trace_call(0x801DD37Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DD37C
  c->r[0]=c->lr; // 801DD380
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DD384
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DD388
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DD38C
  c->r[30]=c->r[3]|c->r[3]; // 801DD390
  c->r[4]=R32(c->r[3]+0x0000000Cu); // 801DD394
  c->lr=0x801DD39Cu; f_801DAC70(c); // 801DD398
  goto L_801DD3F0; // 801DD39C
L_801DD3A0:;
  c->r[3]=c->r[30]|c->r[30]; // 801DD3A0
  c->r[4]=c->r[31]|c->r[31]; // 801DD3A4
  c->lr=0x801DD3ACu; f_801DADF0(c); // 801DD3A8
  c->r[12]=R32(c->r[31]+0x00000008u); // 801DD3AC
  cmps(c,0,(int32_t)c->r[12],0); // 801DD3B0
  if (crb(c,2)) { goto L_801DD3C8; } // 801DD3B4
  c->r[3]=c->r[31]|c->r[31]; // 801DD3B8
  c->ctr=c->r[12]; // 801DD3BC
  if (true) { c->lr=0x801DD3C4u; dispatch(c,c->ctr); } // 801DD3C0
  goto L_801DD3F0; // 801DD3C4
L_801DD3C8:;
  c->r[0]=R16(c->r[31]+0x00000014u); // 801DD3C8
  cmps(c,0,(int32_t)c->r[0],0); // 801DD3CC
  if (crb(c,2)) { goto L_801DD3F0; } // 801DD3D0
  c->r[3]=0u+0x00000008u; // 801DD3D4
  c->lr=0x801DD3DCu; f_801D99E0(c); // 801DD3D8
  cmps(c,0,(int32_t)c->r[3],0); // 801DD3DC
  if (crb(c,2)) { goto L_801DD3F0; } // 801DD3E0
  c->r[0]=R16(c->r[31]+0x00000014u); // 801DD3E4
  W16(c->r[3]+0x00000000u,c->r[0]); // 801DD3E8
  c->lr=0x801DD3F0u; f_801DD270(c); // 801DD3EC
L_801DD3F0:;
  c->r[31]=R32(c->r[30]+0x00000000u); // 801DD3F0
  cmps(c,0,(int32_t)c->r[31],0); // 801DD3F4
  if (crb(c,2)) { goto L_801DD408; } // 801DD3F8
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 801DD3FC
  cmps(c,0,(int32_t)c->r[0],0); // 801DD400
  if (!crb(c,1)) { IRQCHK(c); goto L_801DD3A0; } // 801DD404
L_801DD408:;
  cmps(c,0,(int32_t)c->r[31],0); // 801DD408
  if (!crb(c,2)) { goto L_801DD418; } // 801DD40C
  c->r[3]=R8(c->r[30]+0x00000010u); // 801DD410
  c->lr=0x801DD418u; f_801DABC0(c); // 801DD414
L_801DD418:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DD418
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DD41C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801DD420
  c->lr=c->r[0]; // 801DD424
  c->r[1]=c->r[1]+0x00000010u; // 801DD428
  return; // 801DD42C
}

// ptim_start_timer
void f_801DD430(Ctx* __restrict c) {
  trace_call(0x801DD430u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DD430
  c->r[0]=c->lr; // 801DD434
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DD438
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DD43C
  c->r[31]=c->r[6]|c->r[6]; // 801DD440
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DD444
  c->r[30]=c->r[5]|c->r[5]; // 801DD448
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DD44C
  c->r[29]=c->r[4]|c->r[4]; // 801DD450
  W32(c->r[1]+0x00000010u,c->r[28]); // 801DD454
  c->r[28]=c->r[3]|c->r[3]; // 801DD458
  c->r[0]=R32(c->r[3]+0x00000000u); // 801DD45C
  cmps(c,0,(int32_t)c->r[0],0); // 801DD460
  if (!crb(c,2)) { goto L_801DD490; } // 801DD464
  c->r[4]=0u+0x66660000u; // 801DD468
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 801DD46C
  c->r[4]=c->r[4]+0x00006667u; // 801DD470
  c->r[3]=R8(c->r[3]+0x00000010u); // 801DD474
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[0])>>32); // 801DD478
  c->r[5]=0u+0x00000001u; // 801DD47C
  c->r[0]=sraw(c,c->r[0],2); // 801DD480
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 801DD484
  c->r[4]=c->r[0]+c->r[4]; // 801DD488
  c->lr=0x801DD490u; f_801DAA70(c); // 801DD48C
L_801DD490:;
  c->r[3]=c->r[28]|c->r[28]; // 801DD490
  c->r[4]=c->r[29]|c->r[29]; // 801DD494
  c->lr=0x801DD49Cu; f_801DADF0(c); // 801DD498
  W16(c->r[29]+0x00000014u,c->r[30]); // 801DD49C
  c->r[3]=c->r[28]|c->r[28]; // 801DD4A0
  c->r[4]=c->r[29]|c->r[29]; // 801DD4A4
  W32(c->r[29]+0x0000000Cu,c->r[31]); // 801DD4A8
  c->lr=0x801DD4B0u; f_801DAD00(c); // 801DD4AC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DD4B0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DD4B4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DD4B8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DD4BC
  c->r[28]=R32(c->r[1]+0x00000010u); // 801DD4C0
  c->lr=c->r[0]; // 801DD4C4
  c->r[1]=c->r[1]+0x00000020u; // 801DD4C8
  return; // 801DD4CC
}

// ptim_stop_timer
void f_801DD4D0(Ctx* __restrict c) {
  trace_call(0x801DD4D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DD4D0
  c->r[0]=c->lr; // 801DD4D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DD4D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DD4DC
  c->r[31]=c->r[3]|c->r[3]; // 801DD4E0
  c->lr=0x801DD4E8u; f_801DADF0(c); // 801DD4E4
  c->r[0]=R32(c->r[31]+0x00000000u); // 801DD4E8
  cmps(c,0,(int32_t)c->r[0],0); // 801DD4EC
  if (!crb(c,2)) { goto L_801DD4FC; } // 801DD4F0
  c->r[3]=R8(c->r[31]+0x00000010u); // 801DD4F4
  c->lr=0x801DD4FCu; f_801DABC0(c); // 801DD4F8
L_801DD4FC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DD4FC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DD500
  c->lr=c->r[0]; // 801DD504
  c->r[1]=c->r[1]+0x00000010u; // 801DD508
  return; // 801DD50C
}

// utl_freebuf
void f_801DD510(Ctx* __restrict c) {
  trace_call(0x801DD510u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DD510
  c->r[0]=c->lr; // 801DD514
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DD518
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DD51C
  c->r[31]=c->r[3]|c->r[3]; // 801DD520
  c->r[0]=R32(c->r[3]+0x00000000u); // 801DD524
  cmps(c,0,(int32_t)c->r[0],0); // 801DD528
  if (crb(c,2)) { goto L_801DD540; } // 801DD52C
  c->r[3]=c->r[0]|c->r[0]; // 801DD530
  c->lr=0x801DD538u; f_801D9C70(c); // 801DD534
  c->r[0]=0u+0x00000000u; // 801DD538
  W32(c->r[31]+0x00000000u,c->r[0]); // 801DD53C
L_801DD540:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DD540
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DD544
  c->lr=c->r[0]; // 801DD548
  c->r[1]=c->r[1]+0x00000010u; // 801DD54C
  return; // 801DD550
}

// bta_dm_enable
void f_801DD554(Ctx* __restrict c) {
  trace_call(0x801DD554u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DD554
  c->r[0]=c->lr; // 801DD558
  c->r[4]=0u+0x80310000u; // 801DD55C
  c->r[5]=0u+0x0000007Cu; // 801DD560
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DD564
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DD568
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DD56C
  c->r[30]=c->r[3]|c->r[3]; // 801DD570
  c->r[3]=c->r[4]+0xFFFF8438u; // 801DD574
  c->r[4]=0u+0x00000000u; // 801DD578
  c->lr=0x801DD580u; f_800046B4(c); // 801DD57C
  c->r[3]=0u+0x80310000u; // 801DD580
  c->r[4]=0u+0x00000000u; // 801DD584
  c->r[3]=c->r[3]+0xFFFF85B8u; // 801DD588
  c->r[5]=0u+0x0000002Eu; // 801DD58C
  c->lr=0x801DD594u; f_800046B4(c); // 801DD590
  c->r[31]=0u+0x80230000u; // 801DD594
  c->r[3]=c->r[1]+0x00000008u; // 801DD598
  c->r[4]=c->r[31]+0xFFFFC300u; // 801DD59C
  c->r[5]=0u+0x00000003u; // 801DD5A0
  c->lr=0x801DD5A8u; f_80004364(c); // 801DD5A4
  c->r[3]=c->r[1]+0x00000008u; // 801DD5A8
  c->lr=0x801DD5B0u; f_801E6134(c); // 801DD5AC
  c->r[4]=0u+0x80310000u; // 801DD5B0
  c->r[0]=R32(c->r[30]+0x00000008u); // 801DD5B4
  c->r[4]=c->r[4]+0xFFFF84B4u; // 801DD5B8
  c->r[3]=0u+0x80230000u; // 801DD5BC
  W32(c->r[4]+0x00000050u,c->r[0]); // 801DD5C0
  c->r[3]=c->r[3]+0xFFFFC430u; // 801DD5C4
  c->lr=0x801DD5CCu; f_801EA11C(c); // 801DD5C8
  c->r[31]=c->r[31]+0xFFFFC300u; // 801DD5CC
  c->r[3]=R16(c->r[31]+0x00000008u); // 801DD5D0
  c->lr=0x801DD5D8u; f_801E3AB4(c); // 801DD5D4
  c->r[3]=R16(c->r[31]+0x00000006u); // 801DD5D8
  c->lr=0x801DD5E0u; f_801E6424(c); // 801DD5DC
  c->r[3]=R16(c->r[31]+0x00000004u); // 801DD5E0
  c->lr=0x801DD5E8u; f_801E36E8(c); // 801DD5E4
  c->r[3]=0u+0x801E0000u; // 801DD5E8
  c->r[3]=c->r[3]+0xFFFFEF94u; // 801DD5EC
  c->lr=0x801DD5F4u; f_801E4130(c); // 801DD5F0
  c->r[3]=0u+0x801E0000u; // 801DD5F4
  c->r[3]=c->r[3]+0xFFFFEE3Cu; // 801DD5F8
  c->lr=0x801DD600u; f_801E6060(c); // 801DD5FC
  c->r[3]=0u+0x801E0000u; // 801DD600
  c->r[3]=c->r[3]+0xFFFFF694u; // 801DD604
  c->lr=0x801DD60Cu; f_801DCE98(c); // 801DD608
  c->r[31]=0u+0x801E0000u; // 801DD60C
  c->r[3]=c->r[31]+0xFFFFF45Cu; // 801DD610
  c->lr=0x801DD618u; f_801DCEA8(c); // 801DD614
  c->lr=0x801DD61Cu; f_801DFE5C(c); // 801DD618
  c->r[3]=0u+0x80310000u; // 801DD61C
  c->r[4]=0u+0x00000000u; // 801DD620
  c->r[3]=c->r[3]+0xFFFF8408u; // 801DD624
  c->r[5]=0u+0x0000002Du; // 801DD628
  c->lr=0x801DD630u; f_800046B4(c); // 801DD62C
  c->r[3]=c->r[31]+0xFFFFF45Cu; // 801DD630
  c->lr=0x801DD638u; f_801DCEA8(c); // 801DD634
  c->r[3]=0u+0x801E0000u; // 801DD638
  c->r[4]=0u+0x00000000u; // 801DD63C
  c->r[3]=c->r[3]+0xFFFFF378u; // 801DD640
  c->lr=0x801DD648u; f_801F5C5C(c); // 801DD644
  c->lr=0x801DD64Cu; f_801EE3B4(c); // 801DD648
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DD64C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DD650
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DD654
  c->lr=c->r[0]; // 801DD658
  c->r[1]=c->r[1]+0x00000020u; // 801DD65C
  return; // 801DD660
}

// bta_dm_disable
void f_801DD664(Ctx* __restrict c) {
  trace_call(0x801DD664u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DD664
  c->r[0]=c->lr; // 801DD668
  c->r[3]=c->r[2]+0xFFFFA2A8u; // 801DD66C
  c->r[4]=0u+0x00000000u; // 801DD670
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DD674
  c->lr=0x801DD67Cu; f_801F5B40(c); // 801DD678
  c->lr=0x801DD680u; f_801DD2C0(c); // 801DD67C
  c->r[3]=0u+0x00000000u; // 801DD680
  c->r[4]=0u+0x00000000u; // 801DD684
  c->r[5]=0u+0x00000000u; // 801DD688
  c->lr=0x801DD690u; f_801E6B5C(c); // 801DD68C
  c->r[3]=0u+0x00000000u; // 801DD690
  c->r[4]=0u+0x00000000u; // 801DD694
  c->r[5]=0u+0x00000000u; // 801DD698
  c->lr=0x801DD6A0u; f_801E6FD8(c); // 801DD69C
  c->lr=0x801DD6A4u; f_801DFEC4(c); // 801DD6A0
  c->lr=0x801DD6A8u; f_801E3B9C(c); // 801DD6A4
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801DD6A8
  if (!crb(c,2)) { goto L_801DD6D8; } // 801DD6AC
  c->r[6]=0u+0x801E0000u; // 801DD6B0
  c->r[3]=0u+0x80310000u; // 801DD6B4
  c->r[3]=c->r[3]+0xFFFF84B4u; // 801DD6B8
  c->r[4]=0u+0x00000000u; // 801DD6BC
  c->r[6]=c->r[6]+0xFFFFF284u; // 801DD6C0
  c->r[5]=0u+0x000003E8u; // 801DD6C4
  W32(c->r[3]+0x0000007Cu,c->r[6]); // 801DD6C8
  c->r[3]=c->r[3]+0x00000074u; // 801DD6CC
  c->lr=0x801DD6D4u; f_801DD28C(c); // 801DD6D0
  goto L_801DD704; // 801DD6D4
L_801DD6D8:;
  c->r[6]=0u+0x80310000u; // 801DD6D8
  c->r[5]=0u+0x801E0000u; // 801DD6DC
  c->r[6]=c->r[6]+0xFFFF84B4u; // 801DD6E0
  c->r[0]=0u+0x00000001u; // 801DD6E4
  c->r[5]=c->r[5]+0xFFFFD714u; // 801DD6E8
  W8(c->r[6]+0x00000072u,c->r[0]); // 801DD6EC
  c->r[3]=c->r[6]+0x00000074u; // 801DD6F0
  c->r[4]=0u+0x00000000u; // 801DD6F4
  W32(c->r[6]+0x0000007Cu,c->r[5]); // 801DD6F8
  c->r[5]=0u+0x00001388u; // 801DD6FC
  c->lr=0x801DD704u; f_801DD28C(c); // 801DD700
L_801DD704:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DD704
  c->lr=c->r[0]; // 801DD708
  c->r[1]=c->r[1]+0x00000010u; // 801DD70C
  return; // 801DD710
}

// bta_dm_disable_timer_cback
void f_801DD714(Ctx* __restrict c) {
  trace_call(0x801DD714u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DD714
  c->r[0]=c->lr; // 801DD718
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DD71C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DD720
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DD724
  c->r[0]=R8(c->r[13]+0xFFFFB6D0u); // 801DD728
  cmpu(c,0,c->r[0],0x00000004u); // 801DD72C
  if (crb(c,0)) { goto L_801DD744; } // 801DD730
  c->r[4]=0u+0x80280000u; // 801DD734
  c->r[3]=0u+0x00000503u; // 801DD738
  c->r[4]=c->r[4]+0xFFFFE140u; // 801DD73C
  c->lr=0x801DD744u; f_801DC730(c); // 801DD740
L_801DD744:;
  c->lr=0x801DD748u; f_801E3B9C(c); // 801DD744
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801DD748
  if (crb(c,2)) { goto L_801DD794; } // 801DD74C
  c->r[3]=0u+0x80310000u; // 801DD750
  c->r[31]=c->r[3]+0xFFFF84B4u; // 801DD754
  c->r[0]=R8(c->r[31]+0x00000101u); // 801DD758
  cmps(c,0,(int32_t)c->r[0],0); // 801DD75C
  if (!crb(c,2)) { goto L_801DD794; } // 801DD760
  c->r[30]=0u+0x00000000u; // 801DD764
  goto L_801DD780; // 801DD768
L_801DD76C:;
  c->r[0]=rotl(c->r[30],0)&0x000000FFu; // 801DD76C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 801DD770
  c->r[3]=c->r[31]+c->r[0]; // 801DD774
  c->lr=0x801DD77Cu; f_801E46F8(c); // 801DD778
  c->r[30]=c->r[30]+0x00000001u; // 801DD77C
L_801DD780:;
  c->r[0]=R8(c->r[31]+0x0000004Du); // 801DD780
  c->r[3]=rotl(c->r[30],0)&0x000000FFu; // 801DD784
  cmpu(c,0,c->r[3],c->r[0]); // 801DD788
  if (crb(c,0)) { IRQCHK(c); goto L_801DD76C; } // 801DD78C
  goto L_801DD7B8; // 801DD790
L_801DD794:;
  c->r[5]=0u+0x80310000u; // 801DD794
  c->r[0]=0u+0x00000000u; // 801DD798
  c->r[5]=c->r[5]+0xFFFF84B4u; // 801DD79C
  c->r[3]=0u+0x00000001u; // 801DD7A0
  c->r[12]=R32(c->r[5]+0x00000050u); // 801DD7A4
  c->r[4]=0u+0x00000000u; // 801DD7A8
  W8(c->r[5]+0x00000072u,c->r[0]); // 801DD7AC
  c->ctr=c->r[12]; // 801DD7B0
  if (true) { c->lr=0x801DD7B8u; dispatch(c,c->ctr); } // 801DD7B4
L_801DD7B8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DD7B8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DD7BC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801DD7C0
  c->lr=c->r[0]; // 801DD7C4
  c->r[1]=c->r[1]+0x00000010u; // 801DD7C8
  return; // 801DD7CC
}

// bta_dm_set_dev_name
void f_801DD7D0(Ctx* __restrict c) {
  trace_call(0x801DD7D0u);
  c->r[3]=c->r[3]+0x00000008u; // 801DD7D0
  f_801E5F1C(c); return; // 801DD7D4
}

// bta_dm_set_visibility
void f_801DD7D8(Ctx* __restrict c) {
  trace_call(0x801DD7D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DD7D8
  c->r[0]=c->lr; // 801DD7DC
  c->r[4]=0u+0x00000000u; // 801DD7E0
  c->r[5]=0u+0x00000000u; // 801DD7E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DD7E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DD7EC
  c->r[31]=c->r[3]|c->r[3]; // 801DD7F0
  c->r[3]=R8(c->r[3]+0x00000008u); // 801DD7F4
  c->lr=0x801DD7FCu; f_801E6B5C(c); // 801DD7F8
  c->r[3]=R8(c->r[31]+0x00000009u); // 801DD7FC
  c->r[4]=0u+0x00000000u; // 801DD800
  c->r[5]=0u+0x00000000u; // 801DD804
  c->lr=0x801DD80Cu; f_801E6FD8(c); // 801DD808
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DD80C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DD810
  c->lr=c->r[0]; // 801DD814
  c->r[1]=c->r[1]+0x00000010u; // 801DD818
  return; // 801DD81C
}

// bta_dm_bond
void f_801DD820(Ctx* __restrict c) {
  trace_call(0x801DD820u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DD820
  c->r[0]=c->lr; // 801DD824
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DD828
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DD82C
  c->r[31]=c->r[3]|c->r[3]; // 801DD830
  c->r[3]=c->r[3]+0x00000008u; // 801DD834
  c->lr=0x801DD83Cu; f_801ED0AC(c); // 801DD838
  cmps(c,0,(int32_t)c->r[3],0); // 801DD83C
  if (crb(c,2)) { goto L_801DD858; } // 801DD840
  c->r[4]=c->r[3]|c->r[3]; // 801DD844
  c->r[3]=c->r[1]+0x00000008u; // 801DD848
  c->r[5]=0u+0x00000008u; // 801DD84C
  c->lr=0x801DD854u; f_80004364(c); // 801DD850
  goto L_801DD868; // 801DD854
L_801DD858:;
  c->r[3]=c->r[1]+0x00000008u; // 801DD858
  c->r[4]=0u+0x00000000u; // 801DD85C
  c->r[5]=0u+0x00000008u; // 801DD860
  c->lr=0x801DD868u; f_800046B4(c); // 801DD864
L_801DD868:;
  c->r[4]=R8(c->r[31]+0x0000000Eu); // 801DD868
  c->r[3]=c->r[31]+0x00000008u; // 801DD86C
  c->r[5]=c->r[31]+0x0000000Fu; // 801DD870
  c->r[6]=c->r[1]+0x00000008u; // 801DD874
  c->lr=0x801DD87Cu; f_801EA7B0(c); // 801DD878
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DD87C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DD880
  c->lr=c->r[0]; // 801DD884
  c->r[1]=c->r[1]+0x00000020u; // 801DD888
  return; // 801DD88C
}

// bta_dm_pin_reply
void f_801DD890(Ctx* __restrict c) {
  trace_call(0x801DD890u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DD890
  c->r[0]=c->lr; // 801DD894
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DD898
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DD89C
  c->r[31]=c->r[3]|c->r[3]; // 801DD8A0
  c->r[3]=c->r[3]+0x00000008u; // 801DD8A4
  c->lr=0x801DD8ACu; f_801ED0AC(c); // 801DD8A8
  cmps(c,0,(int32_t)c->r[3],0); // 801DD8AC
  if (crb(c,2)) { goto L_801DD8C8; } // 801DD8B0
  c->r[4]=c->r[3]|c->r[3]; // 801DD8B4
  c->r[3]=c->r[1]+0x00000008u; // 801DD8B8
  c->r[5]=0u+0x00000008u; // 801DD8BC
  c->lr=0x801DD8C4u; f_80004364(c); // 801DD8C0
  goto L_801DD8D8; // 801DD8C4
L_801DD8C8:;
  c->r[3]=c->r[1]+0x00000008u; // 801DD8C8
  c->r[4]=0u+0x00000000u; // 801DD8CC
  c->r[5]=0u+0x00000008u; // 801DD8D0
  c->lr=0x801DD8D8u; f_800046B4(c); // 801DD8D4
L_801DD8D8:;
  c->r[0]=R8(c->r[31]+0x0000000Eu); // 801DD8D8
  cmps(c,0,(int32_t)c->r[0],0); // 801DD8DC
  if (crb(c,2)) { goto L_801DD900; } // 801DD8E0
  c->r[5]=R8(c->r[31]+0x0000000Fu); // 801DD8E4
  c->r[3]=c->r[31]+0x00000008u; // 801DD8E8
  c->r[6]=c->r[31]+0x00000010u; // 801DD8EC
  c->r[7]=c->r[1]+0x00000008u; // 801DD8F0
  c->r[4]=0u+0x00000000u; // 801DD8F4
  c->lr=0x801DD8FCu; f_801EA510(c); // 801DD8F8
  goto L_801DD918; // 801DD8FC
L_801DD900:;
  c->r[3]=c->r[31]+0x00000008u; // 801DD900
  c->r[7]=c->r[1]+0x00000008u; // 801DD904
  c->r[4]=0u+0x0000000Bu; // 801DD908
  c->r[5]=0u+0x00000000u; // 801DD90C
  c->r[6]=0u+0x00000000u; // 801DD910
  c->lr=0x801DD918u; f_801EA510(c); // 801DD914
L_801DD918:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DD918
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DD91C
  c->lr=c->r[0]; // 801DD920
  c->r[1]=c->r[1]+0x00000020u; // 801DD924
  return; // 801DD928
}

// bta_dm_auth_reply
void f_801DD92C(Ctx* __restrict c) {
  trace_call(0x801DD92Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DD92C
  c->r[0]=c->lr; // 801DD930
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DD934
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DD938
  c->r[31]=c->r[3]|c->r[3]; // 801DD93C
  c->r[3]=c->r[3]+0x00000008u; // 801DD940
  c->lr=0x801DD948u; f_801ED0AC(c); // 801DD944
  cmps(c,0,(int32_t)c->r[3],0); // 801DD948
  if (crb(c,2)) { goto L_801DD964; } // 801DD94C
  c->r[4]=c->r[3]|c->r[3]; // 801DD950
  c->r[3]=c->r[1]+0x00000008u; // 801DD954
  c->r[5]=0u+0x00000008u; // 801DD958
  c->lr=0x801DD960u; f_80004364(c); // 801DD95C
  goto L_801DD974; // 801DD960
L_801DD964:;
  c->r[3]=c->r[1]+0x00000008u; // 801DD964
  c->r[4]=0u+0x00000000u; // 801DD968
  c->r[5]=0u+0x00000008u; // 801DD96C
  c->lr=0x801DD974u; f_800046B4(c); // 801DD970
L_801DD974:;
  c->r[0]=R8(c->r[31]+0x0000000Fu); // 801DD974
  cmpu(c,0,c->r[0],0x00000002u); // 801DD978
  if (crb(c,2)) { goto L_801DD9DC; } // 801DD97C
  cmps(c,0,(int32_t)c->r[0],0); // 801DD980
  if (!crb(c,2)) { goto L_801DD9C8; } // 801DD984
  c->r[0]=R8(c->r[31]+0x0000000Eu); // 801DD988
  cmpu(c,0,c->r[0],0x00000017u); // 801DD98C
  if (crb(c,1)) { goto L_801DD9C8; } // 801DD990
  c->r[3]=0u+0x80230000u; // 801DD994
  c->r[0]=rotl(c->r[0],2)&0x000003FCu; // 801DD998
  c->r[3]=c->r[3]+0xFFFFC3D0u; // 801DD99C
  c->r[5]=c->r[1]+0x00000008u; // 801DD9A0
  c->r[4]=R32(c->r[3]+c->r[0]); // 801DD9A4
  c->r[3]=0u+0x00000001u; // 801DD9A8
  c->r[0]=rotl(c->r[4],0)&0x00001FE0u; // 801DD9AC
  c->r[6]=rotl(c->r[4],29)&0x000003FCu; // 801DD9B0
  c->r[0]=c->r[4]-c->r[0]; // 801DD9B4
  c->r[4]=R32(c->r[5]+c->r[6]); // 801DD9B8
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 801DD9BC
  c->r[0]=c->r[4]|c->r[0]; // 801DD9C0
  W32(c->r[5]+c->r[6],c->r[0]); // 801DD9C4
L_801DD9C8:;
  c->r[3]=c->r[31]+0x00000008u; // 801DD9C8
  c->r[5]=c->r[1]+0x00000008u; // 801DD9CC
  c->r[4]=0u+0x00000000u; // 801DD9D0
  c->lr=0x801DD9D8u; f_801EA5D4(c); // 801DD9D4
  goto L_801DD9EC; // 801DD9D8
L_801DD9DC:;
  c->r[3]=c->r[31]+0x00000008u; // 801DD9DC
  c->r[5]=c->r[1]+0x00000008u; // 801DD9E0
  c->r[4]=0u+0x0000000Bu; // 801DD9E4
  c->lr=0x801DD9ECu; f_801EA5D4(c); // 801DD9E8
L_801DD9EC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DD9EC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DD9F0
  c->lr=c->r[0]; // 801DD9F4
  c->r[1]=c->r[1]+0x00000020u; // 801DD9F8
  return; // 801DD9FC
}

// bta_dm_search_start
void f_801DDA00(Ctx* __restrict c) {
  trace_call(0x801DDA00u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DDA00
  c->r[0]=c->lr; // 801DDA04
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DDA08
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DDA0C
  c->r[31]=c->r[3]|c->r[3]; // 801DDA10
  c->r[3]=0u+0x00000000u; // 801DDA14
  c->lr=0x801DDA1Cu; f_801E7840(c); // 801DDA18
  c->r[0]=R32(c->r[31]+0x00000018u); // 801DDA1C
  c->r[3]=0u+0x80310000u; // 801DDA20
  c->r[4]=0u+0x801E0000u; // 801DDA24
  c->r[5]=0u+0x801E0000u; // 801DDA28
  W32(c->r[3]+0xFFFF8438u,c->r[0]); // 801DDA2C
  c->r[6]=c->r[3]+0xFFFF8438u; // 801DDA30
  c->r[3]=c->r[31]+0x00000008u; // 801DDA34
  c->r[4]=c->r[4]+0xFFFFE828u; // 801DDA38
  c->r[0]=R32(c->r[31]+0x00000014u); // 801DDA3C
  c->r[5]=c->r[5]+0xFFFFE8B8u; // 801DDA40
  W32(c->r[6]+0x00000008u,c->r[0]); // 801DDA44
  c->lr=0x801DDA4Cu; f_801E7278(c); // 801DDA48
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DDA4C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DDA50
  c->lr=c->r[0]; // 801DDA54
  c->r[1]=c->r[1]+0x00000010u; // 801DDA58
  return; // 801DDA5C
}

// bta_dm_search_cancel
void f_801DDA60(Ctx* __restrict c) {
  trace_call(0x801DDA60u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DDA60
  c->r[0]=c->lr; // 801DDA64
  c->r[3]=0u+0x00000000u; // 801DDA68
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DDA6C
  c->lr=0x801DDA74u; f_801E7840(c); // 801DDA70
  c->lr=0x801DDA78u; f_801E7160(c); // 801DDA74
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801DDA78
  if (crb(c,2)) { goto L_801DDABC; } // 801DDA7C
  c->lr=0x801DDA84u; f_801E7170(c); // 801DDA80
  c->r[4]=0u+0x80310000u; // 801DDA84
  c->r[3]=0u+0x00000004u; // 801DDA88
  c->r[12]=R32(c->r[4]+0xFFFF8438u); // 801DDA8C
  c->r[4]=0u+0x00000000u; // 801DDA90
  c->ctr=c->r[12]; // 801DDA94
  if (true) { c->lr=0x801DDA9Cu; dispatch(c,c->ctr); } // 801DDA98
  c->r[3]=0u+0x00000110u; // 801DDA9C
  c->lr=0x801DDAA4u; f_801D99E0(c); // 801DDAA0
  cmps(c,0,(int32_t)c->r[3],0); // 801DDAA4
  if (crb(c,2)) { goto L_801DDAD4; } // 801DDAA8
  c->r[0]=0u+0x00000207u; // 801DDAAC
  W16(c->r[3]+0x00000000u,c->r[0]); // 801DDAB0
  c->lr=0x801DDAB8u; f_801DD270(c); // 801DDAB4
  goto L_801DDAD4; // 801DDAB8
L_801DDABC:;
  c->r[3]=0u+0x80310000u; // 801DDABC
  c->r[3]=c->r[3]+0xFFFF8438u; // 801DDAC0
  c->r[0]=R32(c->r[3]+0x00000008u); // 801DDAC4
  cmps(c,0,(int32_t)c->r[0],0); // 801DDAC8
  if (!crb(c,2)) { goto L_801DDAD4; } // 801DDACC
  c->lr=0x801DDAD4u; f_801E7514(c); // 801DDAD0
L_801DDAD4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DDAD4
  c->lr=c->r[0]; // 801DDAD8
  c->r[1]=c->r[1]+0x00000010u; // 801DDADC
  return; // 801DDAE0
}

// bta_dm_discover
void f_801DDAE4(Ctx* __restrict c) {
  trace_call(0x801DDAE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DDAE4
  c->r[0]=c->lr; // 801DDAE8
  c->r[4]=0u+0x80310000u; // 801DDAEC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DDAF0
  c->r[0]=0u+0x00000000u; // 801DDAF4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DDAF8
  c->r[31]=c->r[4]+0xFFFF8438u; // 801DDAFC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DDB00
  c->r[30]=c->r[3]|c->r[3]; // 801DDB04
  c->r[5]=R32(c->r[3]+0x00000014u); // 801DDB08
  W32(c->r[4]+0xFFFF8438u,c->r[5]); // 801DDB0C
  c->r[4]=0u+0x801E0000u; // 801DDB10
  c->r[5]=R32(c->r[3]+0x00000010u); // 801DDB14
  c->r[3]=c->r[4]+0xFFFFE904u; // 801DDB18
  W32(c->r[31]+0x00000008u,c->r[5]); // 801DDB1C
  W32(c->r[31]+0x0000000Cu,c->r[5]); // 801DDB20
  W8(c->r[31]+0x00000070u,c->r[0]); // 801DDB24
  W32(c->r[31]+0x00000010u,c->r[0]); // 801DDB28
  W8(c->r[31]+0x00000020u,c->r[0]); // 801DDB2C
  c->lr=0x801DDB34u; f_801EA194(c); // 801DDB30
  c->r[3]=c->r[31]+0x0000001Au; // 801DDB34
  c->r[4]=c->r[30]+0x00000008u; // 801DDB38
  c->lr=0x801DDB40u; f_801DCDC4(c); // 801DDB3C
  c->r[0]=R32(c->r[31]+0x00000008u); // 801DDB40
  cmps(c,0,(int32_t)c->r[0],0); // 801DDB44
  if (crb(c,2)) { goto L_801DDB58; } // 801DDB48
  c->r[3]=c->r[31]+0x0000001Au; // 801DDB4C
  c->lr=0x801DDB54u; f_801DE560(c); // 801DDB50
  goto L_801DDBE0; // 801DDB54
L_801DDB58:;
  c->r[3]=0u+0x80310000u; // 801DDB58
  c->r[3]=c->r[3]+0xFFFF8818u; // 801DDB5C
  c->r[4]=R16(c->r[3]+0x0000064Cu); // 801DDB60
  cmpu(c,0,c->r[4],0x00007530u); // 801DDB64
  if (!crb(c,0)) { goto L_801DDB7C; } // 801DDB68
  c->r[5]=c->r[4]+0x00000064u; // 801DDB6C
  c->r[3]=c->r[31]+0x00000058u; // 801DDB70
  c->r[4]=0u+0x00000205u; // 801DDB74
  c->lr=0x801DDB7Cu; f_801DD28C(c); // 801DDB78
L_801DDB7C:;
  c->r[31]=0u+0x80310000u; // 801DDB7C
  c->r[4]=0u+0x801E0000u; // 801DDB80
  c->r[31]=c->r[31]+0xFFFF8438u; // 801DDB84
  c->r[3]=c->r[31]+0x0000001Au; // 801DDB88
  c->r[4]=c->r[4]+0xFFFFE9D0u; // 801DDB8C
  c->lr=0x801DDB94u; f_801E742C(c); // 801DDB90
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801DDB94
  cmpu(c,0,c->r[0],0x00000001u); // 801DDB98
  if (crb(c,2)) { goto L_801DDBE0; } // 801DDB9C
  c->r[3]=c->r[31]+0x00000058u; // 801DDBA0
  c->lr=0x801DDBA8u; f_801DD2AC(c); // 801DDBA4
  c->r[3]=0u+0x00000110u; // 801DDBA8
  c->lr=0x801DDBB0u; f_801D99E0(c); // 801DDBAC
  cmps(c,0,(int32_t)c->r[3],0); // 801DDBB0
  c->r[30]=c->r[3]|c->r[3]; // 801DDBB4
  if (crb(c,2)) { goto L_801DDBE0; } // 801DDBB8
  c->r[3]=c->r[3]+0x00000008u; // 801DDBBC
  c->r[4]=c->r[31]+0x0000001Au; // 801DDBC0
  c->lr=0x801DDBC8u; f_801DCDC4(c); // 801DDBC4
  c->r[3]=0u+0x00000000u; // 801DDBC8
  c->r[0]=0u+0x00000204u; // 801DDBCC
  W8(c->r[30]+0x0000000Eu,c->r[3]); // 801DDBD0
  c->r[3]=c->r[30]|c->r[30]; // 801DDBD4
  W16(c->r[30]+0x00000000u,c->r[0]); // 801DDBD8
  c->lr=0x801DDBE0u; f_801DD270(c); // 801DDBDC
L_801DDBE0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DDBE0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DDBE4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801DDBE8
  c->lr=c->r[0]; // 801DDBEC
  c->r[1]=c->r[1]+0x00000010u; // 801DDBF0
  return; // 801DDBF4
}

// bta_dm_inq_cmpl
void f_801DDBF8(Ctx* __restrict c) {
  trace_call(0x801DDBF8u);
  {uint32_t ea=c->r[1]+0xFFFFFDD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DDBF8
  c->r[0]=c->lr; // 801DDBFC
  W32(c->r[1]+0x00000234u,c->r[0]); // 801DDC00
  c->r[11]=c->r[1]+0x00000230u; // 801DDC04
  c->lr=0x801DDC0Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DDC08
  c->r[31]=c->r[3]|c->r[3]; // 801DDC0C
  c->r[27]=0u+0x00000001u; // 801DDC10
  c->lr=0x801DDC18u; f_801E764C(c); // 801DDC14
  c->r[28]=0u+0x80310000u; // 801DDC18
  cmps(c,0,(int32_t)c->r[3],0); // 801DDC1C
  c->r[29]=c->r[28]+0xFFFF8438u; // 801DDC20
  W32(c->r[29]+0x00000004u,c->r[3]); // 801DDC24
  if (crb(c,2)) { goto L_801DDDB0; } // 801DDC28
  c->r[0]=R32(c->r[29]+0x00000008u); // 801DDC2C
  c->r[27]=0u+0x00000000u; // 801DDC30
  cmps(c,0,(int32_t)c->r[0],0); // 801DDC34
  if (crb(c,2)) { goto L_801DDCB0; } // 801DDC38
  c->r[3]=c->r[3]+0x00000002u; // 801DDC3C
  c->lr=0x801DDC44u; f_801E3AC4(c); // 801DDC40
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801DDC44
  if (crb(c,2)) { goto L_801DDC58; } // 801DDC48
  c->r[0]=0u+0x00000000u; // 801DDC4C
  W8(c->r[29]+0x00000078u,c->r[0]); // 801DDC50
  goto L_801DDC60; // 801DDC54
L_801DDC58:;
  c->r[0]=0u+0x00000001u; // 801DDC58
  W8(c->r[29]+0x00000078u,c->r[0]); // 801DDC5C
L_801DDC60:;
  c->r[30]=0u+0x80310000u; // 801DDC60
  c->r[3]=0u+0x801E0000u; // 801DDC64
  c->r[30]=c->r[30]+0xFFFF8438u; // 801DDC68
  c->r[29]=0u+0x00000000u; // 801DDC6C
  W8(c->r[30]+0x00000079u,c->r[29]); // 801DDC70
  c->r[3]=c->r[3]+0xFFFFE904u; // 801DDC74
  c->lr=0x801DDC7Cu; f_801EA194(c); // 801DDC78
  c->r[0]=R32(c->r[30]+0x00000008u); // 801DDC7C
  c->r[3]=c->r[30]+0x0000001Au; // 801DDC80
  c->r[4]=R32(c->r[30]+0x00000004u); // 801DDC84
  W8(c->r[30]+0x00000070u,c->r[29]); // 801DDC88
  c->r[4]=c->r[4]+0x00000002u; // 801DDC8C
  W32(c->r[30]+0x00000010u,c->r[29]); // 801DDC90
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 801DDC94
  W8(c->r[30]+0x00000020u,c->r[29]); // 801DDC98
  c->lr=0x801DDCA0u; f_801DCDC4(c); // 801DDC9C
  c->r[3]=R32(c->r[30]+0x00000004u); // 801DDCA0
  c->r[3]=c->r[3]+0x00000002u; // 801DDCA4
  c->lr=0x801DDCACu; f_801DE560(c); // 801DDCA8
  goto L_801DDDB0; // 801DDCAC
L_801DDCB0:;
  c->r[27]=0u+0x00000001u; // 801DDCB0
  c->r[30]=0u+0x00000000u; // 801DDCB4
  goto L_801DDDA4; // 801DDCB8
L_801DDCBC:;
  c->r[0]=R8(c->r[4]+0x00000010u); // 801DDCBC
  cmps(c,0,(int32_t)c->r[0],0); // 801DDCC0
  if (crb(c,2)) { goto L_801DDCF4; } // 801DDCC4
  c->r[3]=c->r[1]+0x00000008u; // 801DDCC8
  c->r[4]=c->r[4]+0x00000002u; // 801DDCCC
  c->lr=0x801DDCD4u; f_801DCDC4(c); // 801DDCD0
  c->r[12]=R32(c->r[28]+0xFFFF8438u); // 801DDCD4
  c->r[4]=c->r[1]+0x00000008u; // 801DDCD8
  W8(c->r[1]+0x0000000Eu,c->r[30]); // 801DDCDC
  c->r[3]=0u+0x00000002u; // 801DDCE0
  W32(c->r[1]+0x00000108u,c->r[30]); // 801DDCE4
  c->ctr=c->r[12]; // 801DDCE8
  if (true) { c->lr=0x801DDCF0u; dispatch(c,c->ctr); } // 801DDCEC
  goto L_801DDD98; // 801DDCF0
L_801DDCF4:;
  c->r[3]=0u+0x80310000u; // 801DDCF4
  c->r[3]=c->r[3]+0xFFFF8818u; // 801DDCF8
  c->r[4]=R16(c->r[3]+0x0000064Cu); // 801DDCFC
  cmpu(c,0,c->r[4],0x00007530u); // 801DDD00
  if (!crb(c,0)) { goto L_801DDD20; } // 801DDD04
  c->r[3]=0u+0x80310000u; // 801DDD08
  c->r[5]=c->r[4]+0x00000064u; // 801DDD0C
  c->r[3]=c->r[3]+0xFFFF8438u; // 801DDD10
  c->r[4]=0u+0x00000205u; // 801DDD14
  c->r[3]=c->r[3]+0x00000058u; // 801DDD18
  c->lr=0x801DDD20u; f_801DD28C(c); // 801DDD1C
L_801DDD20:;
  c->r[30]=0u+0x80310000u; // 801DDD20
  c->r[4]=0u+0x801E0000u; // 801DDD24
  c->r[30]=c->r[30]+0xFFFF8438u; // 801DDD28
  c->r[3]=R32(c->r[30]+0x00000004u); // 801DDD2C
  c->r[4]=c->r[4]+0xFFFFE944u; // 801DDD30
  c->r[3]=c->r[3]+0x00000002u; // 801DDD34
  c->lr=0x801DDD3Cu; f_801E742C(c); // 801DDD38
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801DDD3C
  cmpu(c,0,c->r[0],0x00000001u); // 801DDD40
  if (crb(c,2)) { goto L_801DDD90; } // 801DDD44
  c->r[3]=c->r[30]+0x00000058u; // 801DDD48
  c->lr=0x801DDD50u; f_801DD2AC(c); // 801DDD4C
  c->r[4]=R32(c->r[30]+0x00000004u); // 801DDD50
  c->r[3]=0u+0x00000110u; // 801DDD54
  c->r[28]=c->r[4]+0x00000002u; // 801DDD58
  c->lr=0x801DDD60u; f_801D99E0(c); // 801DDD5C
  cmps(c,0,(int32_t)c->r[3],0); // 801DDD60
  c->r[29]=c->r[3]|c->r[3]; // 801DDD64
  if (crb(c,2)) { goto L_801DDD90; } // 801DDD68
  c->r[4]=c->r[28]|c->r[28]; // 801DDD6C
  c->r[3]=c->r[3]+0x00000008u; // 801DDD70
  c->lr=0x801DDD78u; f_801DCDC4(c); // 801DDD74
  c->r[3]=0u+0x00000000u; // 801DDD78
  c->r[0]=0u+0x00000204u; // 801DDD7C
  W8(c->r[29]+0x0000000Eu,c->r[3]); // 801DDD80
  c->r[3]=c->r[29]|c->r[29]; // 801DDD84
  W16(c->r[29]+0x00000000u,c->r[0]); // 801DDD88
  c->lr=0x801DDD90u; f_801DD270(c); // 801DDD8C
L_801DDD90:;
  c->r[27]=0u+0x00000000u; // 801DDD90
  goto L_801DDDB0; // 801DDD94
L_801DDD98:;
  c->r[3]=R32(c->r[29]+0x00000004u); // 801DDD98
  c->lr=0x801DDDA0u; f_801E7704(c); // 801DDD9C
  W32(c->r[29]+0x00000004u,c->r[3]); // 801DDDA0
L_801DDDA4:;
  c->r[4]=R32(c->r[29]+0x00000004u); // 801DDDA4
  cmps(c,0,(int32_t)c->r[4],0); // 801DDDA8
  if (!crb(c,2)) { IRQCHK(c); goto L_801DDCBC; } // 801DDDAC
L_801DDDB0:;
  cmps(c,0,(int32_t)c->r[27],0); // 801DDDB0
  if (crb(c,2)) { goto L_801DDDE4; } // 801DDDB4
  c->r[4]=0u+0x80310000u; // 801DDDB8
  c->r[0]=0u+0x00000000u; // 801DDDBC
  c->r[4]=c->r[4]+0xFFFF8438u; // 801DDDC0
  c->r[3]=0u+0x00000110u; // 801DDDC4
  W32(c->r[4]+0x00000008u,c->r[0]); // 801DDDC8
  c->lr=0x801DDDD0u; f_801D99E0(c); // 801DDDCC
  cmps(c,0,(int32_t)c->r[3],0); // 801DDDD0
  if (crb(c,2)) { goto L_801DDDE4; } // 801DDDD4
  c->r[0]=0u+0x00000207u; // 801DDDD8
  W16(c->r[3]+0x00000000u,c->r[0]); // 801DDDDC
  c->lr=0x801DDDE4u; f_801DD270(c); // 801DDDE0
L_801DDDE4:;
  c->r[3]=0u+0x80310000u; // 801DDDE4
  c->r[0]=R8(c->r[31]+0x00000008u); // 801DDDE8
  c->r[12]=R32(c->r[3]+0xFFFF8438u); // 801DDDEC
  c->r[4]=c->r[1]+0x00000110u; // 801DDDF0
  W8(c->r[1]+0x00000110u,c->r[0]); // 801DDDF4
  c->r[3]=0u+0x00000001u; // 801DDDF8
  c->ctr=c->r[12]; // 801DDDFC
  if (true) { c->lr=0x801DDE04u; dispatch(c,c->ctr); } // 801DDE00
  c->r[11]=c->r[1]+0x00000230u; // 801DDE04
  c->lr=0x801DDE0Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DDE08
  c->r[0]=R32(c->r[1]+0x00000234u); // 801DDE0C
  c->lr=c->r[0]; // 801DDE10
  c->r[1]=c->r[1]+0x00000230u; // 801DDE14
  return; // 801DDE18
}

// bta_dm_rmt_name
void f_801DDE1C(Ctx* __restrict c) {
  trace_call(0x801DDE1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFED0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DDE1C
  c->r[0]=c->lr; // 801DDE20
  W32(c->r[1]+0x00000134u,c->r[0]); // 801DDE24
  c->r[11]=c->r[1]+0x00000130u; // 801DDE28
  c->lr=0x801DDE30u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DDE2C
  c->r[28]=0u+0x80310000u; // 801DDE30
  c->r[31]=c->r[3]|c->r[3]; // 801DDE34
  c->r[27]=0u+0x00000001u; // 801DDE38
  c->r[30]=0u+0x00000000u; // 801DDE3C
  c->r[29]=c->r[28]+0xFFFF8438u; // 801DDE40
  goto L_801DDF20; // 801DDE44
L_801DDE48:;
  c->r[4]=R32(c->r[29]+0x00000004u); // 801DDE48
  c->r[0]=R8(c->r[4]+0x00000010u); // 801DDE4C
  cmps(c,0,(int32_t)c->r[0],0); // 801DDE50
  if (crb(c,2)) { goto L_801DDE84; } // 801DDE54
  c->r[3]=c->r[1]+0x00000008u; // 801DDE58
  c->r[4]=c->r[4]+0x00000002u; // 801DDE5C
  c->lr=0x801DDE64u; f_801DCDC4(c); // 801DDE60
  c->r[12]=R32(c->r[28]+0xFFFF8438u); // 801DDE64
  c->r[4]=c->r[1]+0x00000008u; // 801DDE68
  W8(c->r[1]+0x0000000Eu,c->r[30]); // 801DDE6C
  c->r[3]=0u+0x00000002u; // 801DDE70
  W32(c->r[1]+0x00000108u,c->r[30]); // 801DDE74
  c->ctr=c->r[12]; // 801DDE78
  if (true) { c->lr=0x801DDE80u; dispatch(c,c->ctr); } // 801DDE7C
  goto L_801DDF20; // 801DDE80
L_801DDE84:;
  c->r[3]=0u+0x80310000u; // 801DDE84
  c->r[3]=c->r[3]+0xFFFF8818u; // 801DDE88
  c->r[4]=R16(c->r[3]+0x0000064Cu); // 801DDE8C
  cmpu(c,0,c->r[4],0x00007530u); // 801DDE90
  if (!crb(c,0)) { goto L_801DDEA8; } // 801DDE94
  c->r[5]=c->r[4]+0x00000064u; // 801DDE98
  c->r[3]=c->r[29]+0x00000058u; // 801DDE9C
  c->r[4]=0u+0x00000205u; // 801DDEA0
  c->lr=0x801DDEA8u; f_801DD28C(c); // 801DDEA4
L_801DDEA8:;
  c->r[30]=0u+0x80310000u; // 801DDEA8
  c->r[4]=0u+0x801E0000u; // 801DDEAC
  c->r[30]=c->r[30]+0xFFFF8438u; // 801DDEB0
  c->r[3]=R32(c->r[30]+0x00000004u); // 801DDEB4
  c->r[4]=c->r[4]+0xFFFFE944u; // 801DDEB8
  c->r[3]=c->r[3]+0x00000002u; // 801DDEBC
  c->lr=0x801DDEC4u; f_801E742C(c); // 801DDEC0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801DDEC4
  cmpu(c,0,c->r[0],0x00000001u); // 801DDEC8
  if (crb(c,2)) { goto L_801DDF18; } // 801DDECC
  c->r[3]=c->r[30]+0x00000058u; // 801DDED0
  c->lr=0x801DDED8u; f_801DD2AC(c); // 801DDED4
  c->r[4]=R32(c->r[30]+0x00000004u); // 801DDED8
  c->r[3]=0u+0x00000110u; // 801DDEDC
  c->r[28]=c->r[4]+0x00000002u; // 801DDEE0
  c->lr=0x801DDEE8u; f_801D99E0(c); // 801DDEE4
  cmps(c,0,(int32_t)c->r[3],0); // 801DDEE8
  c->r[29]=c->r[3]|c->r[3]; // 801DDEEC
  if (crb(c,2)) { goto L_801DDF18; } // 801DDEF0
  c->r[4]=c->r[28]|c->r[28]; // 801DDEF4
  c->r[3]=c->r[3]+0x00000008u; // 801DDEF8
  c->lr=0x801DDF00u; f_801DCDC4(c); // 801DDEFC
  c->r[3]=0u+0x00000000u; // 801DDF00
  c->r[0]=0u+0x00000204u; // 801DDF04
  W8(c->r[29]+0x0000000Eu,c->r[3]); // 801DDF08
  c->r[3]=c->r[29]|c->r[29]; // 801DDF0C
  W16(c->r[29]+0x00000000u,c->r[0]); // 801DDF10
  c->lr=0x801DDF18u; f_801DD270(c); // 801DDF14
L_801DDF18:;
  c->r[27]=0u+0x00000000u; // 801DDF18
  goto L_801DDF34; // 801DDF1C
L_801DDF20:;
  c->r[3]=R32(c->r[29]+0x00000004u); // 801DDF20
  c->lr=0x801DDF28u; f_801E7704(c); // 801DDF24
  cmps(c,0,(int32_t)c->r[3],0); // 801DDF28
  W32(c->r[29]+0x00000004u,c->r[3]); // 801DDF2C
  if (!crb(c,2)) { IRQCHK(c); goto L_801DDE48; } // 801DDF30
L_801DDF34:;
  cmps(c,0,(int32_t)c->r[27],0); // 801DDF34
  if (crb(c,2)) { goto L_801DDF58; } // 801DDF38
  c->r[3]=0u+0x00000110u; // 801DDF3C
  c->lr=0x801DDF44u; f_801D99E0(c); // 801DDF40
  cmps(c,0,(int32_t)c->r[3],0); // 801DDF44
  if (crb(c,2)) { goto L_801DDF58; } // 801DDF48
  c->r[0]=0u+0x00000207u; // 801DDF4C
  W16(c->r[3]+0x00000000u,c->r[0]); // 801DDF50
  c->lr=0x801DDF58u; f_801DD270(c); // 801DDF54
L_801DDF58:;
  c->r[3]=0u+0x80310000u; // 801DDF58
  c->r[4]=c->r[31]+0x00000008u; // 801DDF5C
  c->r[12]=R32(c->r[3]+0xFFFF8438u); // 801DDF60
  c->r[3]=0u+0x00000002u; // 801DDF64
  c->ctr=c->r[12]; // 801DDF68
  if (true) { c->lr=0x801DDF70u; dispatch(c,c->ctr); } // 801DDF6C
  c->r[11]=c->r[1]+0x00000130u; // 801DDF70
  c->lr=0x801DDF78u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DDF74
  c->r[0]=R32(c->r[1]+0x00000134u); // 801DDF78
  c->lr=c->r[0]; // 801DDF7C
  c->r[1]=c->r[1]+0x00000130u; // 801DDF80
  return; // 801DDF84
}

// bta_dm_disc_rmt_name
void f_801DDF88(Ctx* __restrict c) {
  trace_call(0x801DDF88u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DDF88
  c->r[0]=c->lr; // 801DDF8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DDF90
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DDF94
  c->r[31]=c->r[3]|c->r[3]; // 801DDF98
  c->r[3]=0u+0x00000110u; // 801DDF9C
  c->lr=0x801DDFA4u; f_801D99E0(c); // 801DDFA0
  cmps(c,0,(int32_t)c->r[3],0); // 801DDFA4
  if (crb(c,2)) { goto L_801DDFB8; } // 801DDFA8
  c->r[0]=0u+0x00000207u; // 801DDFAC
  W16(c->r[3]+0x00000000u,c->r[0]); // 801DDFB0
  c->lr=0x801DDFB8u; f_801DD270(c); // 801DDFB4
L_801DDFB8:;
  c->r[0]=0u+0x00000000u; // 801DDFB8
  c->r[5]=0u+0x80310000u; // 801DDFBC
  W32(c->r[31]+0x00000108u,c->r[0]); // 801DDFC0
  c->r[4]=c->r[31]+0x00000008u; // 801DDFC4
  c->r[3]=0u+0x00000002u; // 801DDFC8
  c->r[12]=R32(c->r[5]+0xFFFF8438u); // 801DDFCC
  c->ctr=c->r[12]; // 801DDFD0
  if (true) { c->lr=0x801DDFD8u; dispatch(c,c->ctr); } // 801DDFD4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DDFD8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DDFDC
  c->lr=c->r[0]; // 801DDFE0
  c->r[1]=c->r[1]+0x00000010u; // 801DDFE4
  return; // 801DDFE8
}

// bta_dm_sdp_result
void f_801DDFEC(Ctx* __restrict c) {
  trace_call(0x801DDFECu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DDFEC
  c->r[0]=c->lr; // 801DDFF0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DDFF4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DDFF8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DDFFC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DE000
  c->r[29]=0u+0x00000000u; // 801DE004
  c->r[5]=R16(c->r[3]+0x00000008u); // 801DE008
  c->r[3]=0u+0x00000000u; // 801DE00C
  cmps(c,0,(int32_t)c->r[5],0); // 801DE010
  if (crb(c,2)) { goto L_801DE028; } // 801DE014
  cmpu(c,0,c->r[5],0x0000FFF0u); // 801DE018
  if (crb(c,2)) { goto L_801DE028; } // 801DE01C
  cmpu(c,0,c->r[5],0x0000FFF4u); // 801DE020
  if (!crb(c,2)) { goto L_801DE178; } // 801DE024
L_801DE028:;
  c->r[6]=0u+0x80310000u; // 801DE028
  c->r[4]=0u+0x80230000u; // 801DE02C
  c->r[6]=c->r[6]+0xFFFF8438u; // 801DE030
  cmpu(c,0,c->r[5],0x0000FFF4u); // 801DE034
  c->r[5]=R8(c->r[6]+0x00000070u); // 801DE038
  c->r[4]=c->r[4]+0xFFFFC3A0u; // 801DE03C
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 801DE040
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DE044
  c->r[30]=R16(c->r[4]+c->r[0]); // 801DE048
  if (crb(c,2)) { goto L_801DE068; } // 801DE04C
  c->r[3]=R32(c->r[6]+0x00000014u); // 801DE050
  c->r[4]=c->r[30]|c->r[30]; // 801DE054
  c->r[5]=0u+0x00000000u; // 801DE058
  c->lr=0x801DE060u; f_80201AAC(c); // 801DE05C
  cmps(c,0,(int32_t)c->r[3],0); // 801DE060
  if (crb(c,2)) { goto L_801DE0C8; } // 801DE064
L_801DE068:;
  cmpu(c,0,c->r[30],0x00001200u); // 801DE068
  if (!crb(c,2)) { goto L_801DE098; } // 801DE06C
  cmps(c,0,(int32_t)c->r[3],0); // 801DE070
  if (crb(c,2)) { goto L_801DE09C; } // 801DE074
  c->r[4]=0u+0x00010000u; // 801DE078
  c->r[0]=c->r[4]+0xFFFF8001u; // 801DE07C
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 801DE080
  c->lr=0x801DE088u; f_80201A84(c); // 801DE084
  cmps(c,0,(int32_t)c->r[3],0); // 801DE088
  if (crb(c,2)) { goto L_801DE09C; } // 801DE08C
  c->r[29]=0u+0x00000001u; // 801DE090
  goto L_801DE09C; // 801DE094
L_801DE098:;
  c->r[29]=0u+0x00000001u; // 801DE098
L_801DE09C:;
  cmps(c,0,(int32_t)c->r[29],0); // 801DE09C
  if (crb(c,2)) { goto L_801DE0C8; } // 801DE0A0
  c->r[6]=0u+0x80310000u; // 801DE0A4
  c->r[4]=0u+0x00000001u; // 801DE0A8
  c->r[6]=c->r[6]+0xFFFF8438u; // 801DE0AC
  c->r[3]=R8(c->r[6]+0x00000070u); // 801DE0B0
  c->r[5]=R32(c->r[6]+0x00000010u); // 801DE0B4
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801DE0B8
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[4]<<((c->r[0])&31)); // 801DE0BC
  c->r[0]=c->r[5]|c->r[0]; // 801DE0C0
  W32(c->r[6]+0x00000010u,c->r[0]); // 801DE0C4
L_801DE0C8:;
  c->r[30]=0u+0x80310000u; // 801DE0C8
  c->r[30]=c->r[30]+0xFFFF8438u; // 801DE0CC
  c->r[3]=R32(c->r[30]+0x00000014u); // 801DE0D0
  c->lr=0x801DE0D8u; f_801D9C70(c); // 801DE0D4
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 801DE0D8
  c->r[31]=0u+0x00000000u; // 801DE0DC
  W32(c->r[30]+0x00000014u,c->r[31]); // 801DE0E0
  cmps(c,0,(int32_t)c->r[0],0); // 801DE0E4
  if (crb(c,2)) { goto L_801DE0F8; } // 801DE0E8
  c->r[3]=c->r[30]+0x0000001Au; // 801DE0EC
  c->lr=0x801DE0F4u; f_801DE560(c); // 801DE0F0
  goto L_801DE238; // 801DE0F4
L_801DE0F8:;
  c->r[3]=0u+0x801E0000u; // 801DE0F8
  c->r[3]=c->r[3]+0xFFFFE904u; // 801DE0FC
  c->lr=0x801DE104u; f_801EA1E4(c); // 801DE100
  c->r[3]=0u+0x00000110u; // 801DE104
  c->lr=0x801DE10Cu; f_801D99E0(c); // 801DE108
  cmps(c,0,(int32_t)c->r[3],0); // 801DE10C
  c->r[29]=c->r[3]|c->r[3]; // 801DE110
  if (crb(c,2)) { goto L_801DE238; } // 801DE114
  c->r[0]=0u+0x00000208u; // 801DE118
  c->r[4]=c->r[30]+0x0000001Au; // 801DE11C
  W16(c->r[3]+0x00000000u,c->r[0]); // 801DE120
  W8(c->r[3]+0x0000010Cu,c->r[31]); // 801DE124
  c->r[0]=R32(c->r[30]+0x00000010u); // 801DE128
  W32(c->r[3]+0x00000108u,c->r[0]); // 801DE12C
  c->r[3]=c->r[3]+0x00000008u; // 801DE130
  c->lr=0x801DE138u; f_801DCDC4(c); // 801DE134
  c->r[0]=R8(c->r[30]+0x00000020u); // 801DE138
  c->r[31]=c->r[30]+0x00000020u; // 801DE13C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801DE140
  if (!crb(c,2)) { goto L_801DE15C; } // 801DE144
  c->r[3]=c->r[30]+0x0000001Au; // 801DE148
  c->lr=0x801DE150u; f_801E4C08(c); // 801DE14C
  cmps(c,0,(int32_t)c->r[3],0); // 801DE150
  if (crb(c,2)) { goto L_801DE15C; } // 801DE154
  c->r[31]=c->r[3]|c->r[3]; // 801DE158
L_801DE15C:;
  c->r[4]=c->r[31]|c->r[31]; // 801DE15C
  c->r[3]=c->r[29]+0x0000000Eu; // 801DE160
  c->r[5]=0u+0x00000020u; // 801DE164
  c->lr=0x801DE16Cu; f_8020E7F4(c); // 801DE168
  c->r[3]=c->r[29]|c->r[29]; // 801DE16C
  c->lr=0x801DE174u; f_801DD270(c); // 801DE170
  goto L_801DE238; // 801DE174
L_801DE178:;
  cmpu(c,0,c->r[5],0x0000FFF1u); // 801DE178
  if (crb(c,2)) { goto L_801DE190; } // 801DE17C
  c->r[0]=c->r[5]+0x0000000Au; // 801DE180
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801DE184
  cmpu(c,0,c->r[0],0x00000001u); // 801DE188
  if (crb(c,1)) { goto L_801DE1A0; } // 801DE18C
L_801DE190:;
  c->r[3]=0u+0x80310000u; // 801DE190
  c->r[0]=0u+0x00000000u; // 801DE194
  c->r[3]=c->r[3]+0xFFFF8438u; // 801DE198
  W8(c->r[3]+0x00000078u,c->r[0]); // 801DE19C
L_801DE1A0:;
  c->r[31]=0u+0x80310000u; // 801DE1A0
  c->r[31]=c->r[31]+0xFFFF8438u; // 801DE1A4
  c->r[3]=R32(c->r[31]+0x00000014u); // 801DE1A8
  c->lr=0x801DE1B0u; f_801D9C70(c); // 801DE1AC
  c->r[0]=0u+0x00000000u; // 801DE1B0
  c->r[3]=0u+0x801E0000u; // 801DE1B4
  W32(c->r[31]+0x00000014u,c->r[0]); // 801DE1B8
  c->r[3]=c->r[3]+0xFFFFE904u; // 801DE1BC
  c->lr=0x801DE1C4u; f_801EA1E4(c); // 801DE1C0
  c->r[3]=0u+0x00000110u; // 801DE1C4
  c->lr=0x801DE1CCu; f_801D99E0(c); // 801DE1C8
  cmps(c,0,(int32_t)c->r[3],0); // 801DE1CC
  c->r[29]=c->r[3]|c->r[3]; // 801DE1D0
  if (crb(c,2)) { goto L_801DE238; } // 801DE1D4
  c->r[4]=0u+0x00000208u; // 801DE1D8
  c->r[0]=0u+0x00000001u; // 801DE1DC
  W16(c->r[3]+0x00000000u,c->r[4]); // 801DE1E0
  c->r[4]=c->r[31]+0x0000001Au; // 801DE1E4
  W8(c->r[3]+0x0000010Cu,c->r[0]); // 801DE1E8
  c->r[0]=R32(c->r[31]+0x00000010u); // 801DE1EC
  W32(c->r[3]+0x00000108u,c->r[0]); // 801DE1F0
  c->r[3]=c->r[3]+0x00000008u; // 801DE1F4
  c->lr=0x801DE1FCu; f_801DCDC4(c); // 801DE1F8
  c->r[0]=R8(c->r[31]+0x00000020u); // 801DE1FC
  c->r[30]=c->r[31]+0x00000020u; // 801DE200
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801DE204
  if (!crb(c,2)) { goto L_801DE220; } // 801DE208
  c->r[3]=c->r[31]+0x0000001Au; // 801DE20C
  c->lr=0x801DE214u; f_801E4C08(c); // 801DE210
  cmps(c,0,(int32_t)c->r[3],0); // 801DE214
  if (crb(c,2)) { goto L_801DE220; } // 801DE218
  c->r[30]=c->r[3]|c->r[3]; // 801DE21C
L_801DE220:;
  c->r[4]=c->r[30]|c->r[30]; // 801DE220
  c->r[3]=c->r[29]+0x0000000Eu; // 801DE224
  c->r[5]=0u+0x00000020u; // 801DE228
  c->lr=0x801DE230u; f_8020E7F4(c); // 801DE22C
  c->r[3]=c->r[29]|c->r[29]; // 801DE230
  c->lr=0x801DE238u; f_801DD270(c); // 801DE234
L_801DE238:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DE238
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DE23C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DE240
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DE244
  c->lr=c->r[0]; // 801DE248
  c->r[1]=c->r[1]+0x00000020u; // 801DE24C
  return; // 801DE250
}

// bta_dm_search_cmpl
void f_801DE254(Ctx* __restrict c) {
  trace_call(0x801DE254u);
  c->r[4]=0u+0x80310000u; // 801DE254
  c->r[3]=0u+0x00000003u; // 801DE258
  c->r[12]=R32(c->r[4]+0xFFFF8438u); // 801DE25C
  c->r[4]=0u+0x00000000u; // 801DE260
  c->ctr=c->r[12]; // 801DE264
  if (true) { dispatch(c,c->ctr); return; } // 801DE268
}

// bta_dm_disc_result
void f_801DE26C(Ctx* __restrict c) {
  trace_call(0x801DE26Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DE26C
  c->r[0]=c->lr; // 801DE270
  c->r[4]=0u+0x80310000u; // 801DE274
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DE278
  c->r[12]=R32(c->r[4]+0xFFFF8438u); // 801DE27C
  c->r[4]=c->r[3]+0x00000008u; // 801DE280
  c->r[3]=0u+0x00000002u; // 801DE284
  c->ctr=c->r[12]; // 801DE288
  if (true) { c->lr=0x801DE290u; dispatch(c,c->ctr); } // 801DE28C
  c->r[3]=0u+0x00000110u; // 801DE290
  c->lr=0x801DE298u; f_801D99E0(c); // 801DE294
  cmps(c,0,(int32_t)c->r[3],0); // 801DE298
  if (crb(c,2)) { goto L_801DE2AC; } // 801DE29C
  c->r[0]=0u+0x00000207u; // 801DE2A0
  W16(c->r[3]+0x00000000u,c->r[0]); // 801DE2A4
  c->lr=0x801DE2ACu; f_801DD270(c); // 801DE2A8
L_801DE2AC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DE2AC
  c->lr=c->r[0]; // 801DE2B0
  c->r[1]=c->r[1]+0x00000010u; // 801DE2B4
  return; // 801DE2B8
}

// bta_dm_search_result
void f_801DE2BC(Ctx* __restrict c) {
  trace_call(0x801DE2BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DE2BC
  c->r[0]=c->lr; // 801DE2C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DE2C4
  c->r[0]=R32(c->r[3]+0x00000108u); // 801DE2C8
  cmps(c,0,(int32_t)c->r[0],0); // 801DE2CC
  if (crb(c,2)) { goto L_801DE2EC; } // 801DE2D0
  c->r[5]=0u+0x80310000u; // 801DE2D4
  c->r[4]=c->r[3]+0x00000008u; // 801DE2D8
  c->r[12]=R32(c->r[5]+0xFFFF8438u); // 801DE2DC
  c->r[3]=0u+0x00000002u; // 801DE2E0
  c->ctr=c->r[12]; // 801DE2E4
  if (true) { c->lr=0x801DE2ECu; dispatch(c,c->ctr); } // 801DE2E8
L_801DE2EC:;
  c->r[6]=0u+0x80310000u; // 801DE2EC
  c->r[6]=c->r[6]+0xFFFF8438u; // 801DE2F0
  c->r[0]=R8(c->r[6]+0x00000078u); // 801DE2F4
  cmps(c,0,(int32_t)c->r[0],0); // 801DE2F8
  if (!crb(c,2)) { goto L_801DE310; } // 801DE2FC
  c->r[0]=0u+0x00000000u; // 801DE300
  W8(c->r[6]+0x00000078u,c->r[0]); // 801DE304
  c->lr=0x801DE30Cu; f_801DE700(c); // 801DE308
  goto L_801DE334; // 801DE30C
L_801DE310:;
  c->r[5]=0u+0x801E0000u; // 801DE310
  c->r[0]=0u+0x00000001u; // 801DE314
  c->r[5]=c->r[5]+0xFFFFE344u; // 801DE318
  W8(c->r[6]+0x00000079u,c->r[0]); // 801DE31C
  c->r[3]=c->r[6]+0x00000040u; // 801DE320
  c->r[4]=0u+0x00000000u; // 801DE324
  W32(c->r[6]+0x00000048u,c->r[5]); // 801DE328
  c->r[5]=0u+0x00000BB8u; // 801DE32C
  c->lr=0x801DE334u; f_801DD28C(c); // 801DE330
L_801DE334:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DE334
  c->lr=c->r[0]; // 801DE338
  c->r[1]=c->r[1]+0x00000010u; // 801DE33C
  return; // 801DE340
}

// bta_dm_search_timer_cback
void f_801DE344(Ctx* __restrict c) {
  trace_call(0x801DE344u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DE344
  c->r[0]=c->lr; // 801DE348
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DE34C
  c->r[0]=R8(c->r[13]+0xFFFFB6D0u); // 801DE350
  cmpu(c,0,c->r[0],0x00000004u); // 801DE354
  if (crb(c,0)) { goto L_801DE36C; } // 801DE358
  c->r[4]=0u+0x80280000u; // 801DE35C
  c->r[3]=0u+0x00000503u; // 801DE360
  c->r[4]=c->r[4]+0xFFFFE160u; // 801DE364
  c->lr=0x801DE36Cu; f_801DC730(c); // 801DE368
L_801DE36C:;
  c->r[3]=0u+0x80310000u; // 801DE36C
  c->r[0]=0u+0x00000000u; // 801DE370
  c->r[3]=c->r[3]+0xFFFF8438u; // 801DE374
  W8(c->r[3]+0x00000078u,c->r[0]); // 801DE378
  c->lr=0x801DE380u; f_801DE700(c); // 801DE37C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DE380
  c->lr=c->r[0]; // 801DE384
  c->r[1]=c->r[1]+0x00000010u; // 801DE388
  return; // 801DE38C
}

// bta_dm_free_sdp_db
void f_801DE390(Ctx* __restrict c) {
  trace_call(0x801DE390u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DE390
  c->r[0]=c->lr; // 801DE394
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DE398
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DE39C
  c->r[31]=0u+0x80310000u; // 801DE3A0
  c->r[31]=c->r[31]+0xFFFF8438u; // 801DE3A4
  c->r[3]=R32(c->r[31]+0x00000014u); // 801DE3A8
  cmps(c,0,(int32_t)c->r[3],0); // 801DE3AC
  if (crb(c,2)) { goto L_801DE3C0; } // 801DE3B0
  c->lr=0x801DE3B8u; f_801D9C70(c); // 801DE3B4
  c->r[0]=0u+0x00000000u; // 801DE3B8
  W32(c->r[31]+0x00000014u,c->r[0]); // 801DE3BC
L_801DE3C0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DE3C0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DE3C4
  c->lr=c->r[0]; // 801DE3C8
  c->r[1]=c->r[1]+0x00000010u; // 801DE3CC
  return; // 801DE3D0
}

// bta_dm_queue_search
void f_801DE3D4(Ctx* __restrict c) {
  trace_call(0x801DE3D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DE3D4
  c->r[0]=c->lr; // 801DE3D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DE3DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DE3E0
  c->r[31]=c->r[3]|c->r[3]; // 801DE3E4
  c->r[3]=0u+0x0000001Cu; // 801DE3E8
  c->lr=0x801DE3F0u; f_801D99E0(c); // 801DE3EC
  c->r[6]=0u+0x80310000u; // 801DE3F0
  c->r[4]=c->r[31]|c->r[31]; // 801DE3F4
  c->r[6]=c->r[6]+0xFFFF8438u; // 801DE3F8
  c->r[5]=0u+0x0000001Cu; // 801DE3FC
  W32(c->r[6]+0x00000074u,c->r[3]); // 801DE400
  c->lr=0x801DE408u; f_80004364(c); // 801DE404
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DE408
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DE40C
  c->lr=c->r[0]; // 801DE410
  c->r[1]=c->r[1]+0x00000010u; // 801DE414
  return; // 801DE418
}

// bta_dm_queue_disc
void f_801DE41C(Ctx* __restrict c) {
  trace_call(0x801DE41Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DE41C
  c->r[0]=c->lr; // 801DE420
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DE424
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DE428
  c->r[31]=c->r[3]|c->r[3]; // 801DE42C
  c->r[3]=0u+0x00000018u; // 801DE430
  c->lr=0x801DE438u; f_801D99E0(c); // 801DE434
  c->r[6]=0u+0x80310000u; // 801DE438
  c->r[4]=c->r[31]|c->r[31]; // 801DE43C
  c->r[6]=c->r[6]+0xFFFF8438u; // 801DE440
  c->r[5]=0u+0x00000018u; // 801DE444
  W32(c->r[6]+0x00000074u,c->r[3]); // 801DE448
  c->lr=0x801DE450u; f_80004364(c); // 801DE44C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DE450
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DE454
  c->lr=c->r[0]; // 801DE458
  c->r[1]=c->r[1]+0x00000010u; // 801DE45C
  return; // 801DE460
}

// bta_dm_search_clear_queue
void f_801DE464(Ctx* __restrict c) {
  trace_call(0x801DE464u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DE464
  c->r[0]=c->lr; // 801DE468
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DE46C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DE470
  c->r[31]=0u+0x80310000u; // 801DE474
  c->r[31]=c->r[31]+0xFFFF8438u; // 801DE478
  c->r[3]=R32(c->r[31]+0x00000074u); // 801DE47C
  cmps(c,0,(int32_t)c->r[3],0); // 801DE480
  if (crb(c,2)) { goto L_801DE494; } // 801DE484
  c->lr=0x801DE48Cu; f_801D9C70(c); // 801DE488
  c->r[0]=0u+0x00000000u; // 801DE48C
  W32(c->r[31]+0x00000074u,c->r[0]); // 801DE490
L_801DE494:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DE494
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DE498
  c->lr=c->r[0]; // 801DE49C
  c->r[1]=c->r[1]+0x00000010u; // 801DE4A0
  return; // 801DE4A4
}

// bta_dm_search_cancel_cmpl
void f_801DE4A8(Ctx* __restrict c) {
  trace_call(0x801DE4A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DE4A8
  c->r[0]=c->lr; // 801DE4AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DE4B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DE4B4
  c->r[31]=0u+0x80310000u; // 801DE4B8
  c->r[31]=c->r[31]+0xFFFF8438u; // 801DE4BC
  c->r[3]=R32(c->r[31]+0x00000074u); // 801DE4C0
  cmps(c,0,(int32_t)c->r[3],0); // 801DE4C4
  if (crb(c,2)) { goto L_801DE4D8; } // 801DE4C8
  c->lr=0x801DE4D0u; f_801DD270(c); // 801DE4CC
  c->r[0]=0u+0x00000000u; // 801DE4D0
  W32(c->r[31]+0x00000074u,c->r[0]); // 801DE4D4
L_801DE4D8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DE4D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DE4DC
  c->lr=c->r[0]; // 801DE4E0
  c->r[1]=c->r[1]+0x00000010u; // 801DE4E4
  return; // 801DE4E8
}

// bta_dm_search_cancel_transac_cmpl
void f_801DE4EC(Ctx* __restrict c) {
  trace_call(0x801DE4ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DE4EC
  c->r[0]=c->lr; // 801DE4F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DE4F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DE4F8
  c->r[31]=0u+0x80310000u; // 801DE4FC
  c->r[31]=c->r[31]+0xFFFF8438u; // 801DE500
  c->r[3]=R32(c->r[31]+0x00000014u); // 801DE504
  cmps(c,0,(int32_t)c->r[3],0); // 801DE508
  if (crb(c,2)) { goto L_801DE51C; } // 801DE50C
  c->lr=0x801DE514u; f_801D9C70(c); // 801DE510
  c->r[0]=0u+0x00000000u; // 801DE514
  W32(c->r[31]+0x00000014u,c->r[0]); // 801DE518
L_801DE51C:;
  c->r[4]=0u+0x80310000u; // 801DE51C
  c->r[3]=0u+0x00000004u; // 801DE520
  c->r[12]=R32(c->r[4]+0xFFFF8438u); // 801DE524
  c->r[4]=0u+0x00000000u; // 801DE528
  c->ctr=c->r[12]; // 801DE52C
  if (true) { c->lr=0x801DE534u; dispatch(c,c->ctr); } // 801DE530
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DE534
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DE538
  c->lr=c->r[0]; // 801DE53C
  c->r[1]=c->r[1]+0x00000010u; // 801DE540
  return; // 801DE544
}

// bta_dm_search_cancel_notify
void f_801DE548(Ctx* __restrict c) {
  trace_call(0x801DE548u);
  c->r[4]=0u+0x80310000u; // 801DE548
  c->r[3]=0u+0x00000004u; // 801DE54C
  c->r[12]=R32(c->r[4]+0xFFFF8438u); // 801DE550
  c->r[4]=0u+0x00000000u; // 801DE554
  c->ctr=c->r[12]; // 801DE558
  if (true) { dispatch(c,c->ctr); return; } // 801DE55C
}

// bta_dm_find_services
void f_801DE560(Ctx* __restrict c) {
  trace_call(0x801DE560u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DE560
  c->r[0]=c->lr; // 801DE564
  W32(c->r[1]+0x00000054u,c->r[0]); // 801DE568
  c->r[11]=c->r[1]+0x00000050u; // 801DE56C
  c->lr=0x801DE574u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DE570
  c->r[4]=R16(c->r[2]+0xFFFFA270u); // 801DE574
  c->r[26]=0u+0x80310000u; // 801DE578
  c->r[0]=R16(c->r[2]+0xFFFFA272u); // 801DE57C
  c->r[25]=0u+0x80230000u; // 801DE580
  W16(c->r[1]+0x00000008u,c->r[4]); // 801DE584
  c->r[30]=c->r[3]|c->r[3]; // 801DE588
  c->r[25]=c->r[25]+0xFFFFC3A0u; // 801DE58C
  c->r[26]=c->r[26]+0xFFFF8438u; // 801DE590
  W16(c->r[1]+0x0000000Au,c->r[0]); // 801DE594
  c->r[31]=0u+0x00000001u; // 801DE598
  c->r[23]=0u+0x00000001u; // 801DE59C
  c->r[24]=0u+0x00000002u; // 801DE5A0
  c->r[27]=0u+0x801E0000u; // 801DE5A4
  c->r[28]=0u+0x00000000u; // 801DE5A8
  c->r[29]=0u+0x00000017u; // 801DE5AC
  goto L_801DE66C; // 801DE5B0
L_801DE5B4:;
  c->r[3]=R32(c->r[26]+0x0000000Cu); // 801DE5B4
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[23]<<((c->r[0])&31)); // 801DE5B8
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 801DE5BC
  if (crb(c,2)) { goto L_801DE660; } // 801DE5C0
  c->r[3]=0u+0x000000FAu; // 801DE5C4
  c->lr=0x801DE5CCu; f_801D99E0(c); // 801DE5C8
  cmps(c,0,(int32_t)c->r[3],0); // 801DE5CC
  W32(c->r[26]+0x00000014u,c->r[3]); // 801DE5D0
  if (crb(c,2)) { goto L_801DE660; } // 801DE5D4
  c->r[3]=R8(c->r[26]+0x00000070u); // 801DE5D8
  c->r[4]=R32(c->r[26]+0x0000000Cu); // 801DE5DC
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 801DE5E0
  c->r[3]=((c->r[3])&0x20)?0u:(c->r[23]<<((c->r[3])&31)); // 801DE5E4
  c->r[0]=R16(c->r[25]+c->r[0]); // 801DE5E8
  c->r[3]=c->r[4]&~c->r[3]; // 801DE5EC
  W32(c->r[26]+0x0000000Cu,c->r[3]); // 801DE5F0
  cmpu(c,0,c->r[0],0x00001200u); // 801DE5F4
  W16(c->r[1]+0x0000000Cu,c->r[24]); // 801DE5F8
  W16(c->r[1]+0x00000010u,c->r[0]); // 801DE5FC
  if (!crb(c,2)) { goto L_801DE608; } // 801DE600
  c->r[31]=0u+0x00000002u; // 801DE604
L_801DE608:;
  c->r[3]=R32(c->r[26]+0x00000014u); // 801DE608
  c->r[7]=c->r[31]|c->r[31]; // 801DE60C
  c->r[6]=c->r[1]+0x0000000Cu; // 801DE610
  c->r[8]=c->r[1]+0x00000008u; // 801DE614
  c->r[4]=0u+0x000000FAu; // 801DE618
  c->r[5]=0u+0x00000001u; // 801DE61C
  c->lr=0x801DE624u; f_8020164C(c); // 801DE620
  c->r[4]=R32(c->r[26]+0x00000014u); // 801DE624
  c->r[3]=c->r[30]|c->r[30]; // 801DE628
  c->r[5]=c->r[27]+0xFFFFE7E0u; // 801DE62C
  c->lr=0x801DE634u; f_80201A20(c); // 801DE630
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801DE634
  if (!crb(c,2)) { goto L_801DE650; } // 801DE638
  c->r[3]=R32(c->r[26]+0x00000014u); // 801DE63C
  c->lr=0x801DE644u; f_801D9C70(c); // 801DE640
  W32(c->r[26]+0x00000014u,c->r[28]); // 801DE644
  W8(c->r[26]+0x00000070u,c->r[29]); // 801DE648
  goto L_801DE660; // 801DE64C
L_801DE650:;
  c->r[3]=R8(c->r[26]+0x00000070u); // 801DE650
  c->r[0]=c->r[3]+0x00000001u; // 801DE654
  W8(c->r[26]+0x00000070u,c->r[0]); // 801DE658
  goto L_801DE6E8; // 801DE65C
L_801DE660:;
  c->r[3]=R8(c->r[26]+0x00000070u); // 801DE660
  c->r[0]=c->r[3]+0x00000001u; // 801DE664
  W8(c->r[26]+0x00000070u,c->r[0]); // 801DE668
L_801DE66C:;
  c->r[0]=R8(c->r[26]+0x00000070u); // 801DE66C
  cmpu(c,0,c->r[0],0x00000017u); // 801DE670
  if (crb(c,0)) { IRQCHK(c); goto L_801DE5B4; } // 801DE674
  if (crb(c,0)) { goto L_801DE6E8; } // 801DE678
  c->r[3]=0u+0x00000110u; // 801DE67C
  c->lr=0x801DE684u; f_801D99E0(c); // 801DE680
  cmps(c,0,(int32_t)c->r[3],0); // 801DE684
  c->r[24]=c->r[3]|c->r[3]; // 801DE688
  if (crb(c,2)) { goto L_801DE6E8; } // 801DE68C
  c->r[0]=0u+0x00000208u; // 801DE690
  c->r[4]=c->r[26]+0x0000001Au; // 801DE694
  W16(c->r[3]+0x00000000u,c->r[0]); // 801DE698
  c->r[0]=R32(c->r[26]+0x00000010u); // 801DE69C
  W32(c->r[3]+0x00000108u,c->r[0]); // 801DE6A0
  c->r[3]=c->r[3]+0x00000008u; // 801DE6A4
  c->lr=0x801DE6ACu; f_801DCDC4(c); // 801DE6A8
  c->r[0]=R8(c->r[26]+0x00000020u); // 801DE6AC
  c->r[23]=c->r[26]+0x00000020u; // 801DE6B0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801DE6B4
  if (!crb(c,2)) { goto L_801DE6D0; } // 801DE6B8
  c->r[3]=c->r[26]+0x0000001Au; // 801DE6BC
  c->lr=0x801DE6C4u; f_801E4C08(c); // 801DE6C0
  cmps(c,0,(int32_t)c->r[3],0); // 801DE6C4
  if (crb(c,2)) { goto L_801DE6D0; } // 801DE6C8
  c->r[23]=c->r[3]|c->r[3]; // 801DE6CC
L_801DE6D0:;
  c->r[4]=c->r[23]|c->r[23]; // 801DE6D0
  c->r[3]=c->r[24]+0x0000000Eu; // 801DE6D4
  c->r[5]=0u+0x00000020u; // 801DE6D8
  c->lr=0x801DE6E0u; f_8020E7F4(c); // 801DE6DC
  c->r[3]=c->r[24]|c->r[24]; // 801DE6E0
  c->lr=0x801DE6E8u; f_801DD270(c); // 801DE6E4
L_801DE6E8:;
  c->r[11]=c->r[1]+0x00000050u; // 801DE6E8
  c->lr=0x801DE6F0u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DE6EC
  c->r[0]=R32(c->r[1]+0x00000054u); // 801DE6F0
  c->lr=c->r[0]; // 801DE6F4
  c->r[1]=c->r[1]+0x00000050u; // 801DE6F8
  return; // 801DE6FC
}

// bta_dm_discover_next_device
void f_801DE700(Ctx* __restrict c) {
  trace_call(0x801DE700u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DE700
  c->r[0]=c->lr; // 801DE704
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DE708
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DE70C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DE710
  c->r[30]=0u+0x80310000u; // 801DE714
  c->r[30]=c->r[30]+0xFFFF8438u; // 801DE718
  c->r[3]=R32(c->r[30]+0x00000004u); // 801DE71C
  c->lr=0x801DE724u; f_801E7704(c); // 801DE720
  cmps(c,0,(int32_t)c->r[3],0); // 801DE724
  W32(c->r[30]+0x00000004u,c->r[3]); // 801DE728
  if (crb(c,2)) { goto L_801DE7A4; } // 801DE72C
  c->r[3]=c->r[3]+0x00000002u; // 801DE730
  c->lr=0x801DE738u; f_801E3AC4(c); // 801DE734
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801DE738
  if (crb(c,2)) { goto L_801DE74C; } // 801DE73C
  c->r[0]=0u+0x00000000u; // 801DE740
  W8(c->r[30]+0x00000078u,c->r[0]); // 801DE744
  goto L_801DE754; // 801DE748
L_801DE74C:;
  c->r[0]=0u+0x00000001u; // 801DE74C
  W8(c->r[30]+0x00000078u,c->r[0]); // 801DE750
L_801DE754:;
  c->r[31]=0u+0x80310000u; // 801DE754
  c->r[3]=0u+0x801E0000u; // 801DE758
  c->r[31]=c->r[31]+0xFFFF8438u; // 801DE75C
  c->r[30]=0u+0x00000000u; // 801DE760
  W8(c->r[31]+0x00000079u,c->r[30]); // 801DE764
  c->r[3]=c->r[3]+0xFFFFE904u; // 801DE768
  c->lr=0x801DE770u; f_801EA194(c); // 801DE76C
  c->r[0]=R32(c->r[31]+0x00000008u); // 801DE770
  c->r[3]=c->r[31]+0x0000001Au; // 801DE774
  c->r[4]=R32(c->r[31]+0x00000004u); // 801DE778
  W8(c->r[31]+0x00000070u,c->r[30]); // 801DE77C
  c->r[4]=c->r[4]+0x00000002u; // 801DE780
  W32(c->r[31]+0x00000010u,c->r[30]); // 801DE784
  W8(c->r[31]+0x00000020u,c->r[30]); // 801DE788
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801DE78C
  c->lr=0x801DE794u; f_801DCDC4(c); // 801DE790
  c->r[3]=R32(c->r[31]+0x00000004u); // 801DE794
  c->r[3]=c->r[3]+0x00000002u; // 801DE798
  c->lr=0x801DE7A0u; f_801DE560(c); // 801DE79C
  goto L_801DE7C8; // 801DE7A0
L_801DE7A4:;
  c->r[0]=0u+0x00000000u; // 801DE7A4
  c->r[3]=0u+0x00000110u; // 801DE7A8
  W32(c->r[30]+0x00000008u,c->r[0]); // 801DE7AC
  c->lr=0x801DE7B4u; f_801D99E0(c); // 801DE7B0
  cmps(c,0,(int32_t)c->r[3],0); // 801DE7B4
  if (crb(c,2)) { goto L_801DE7C8; } // 801DE7B8
  c->r[0]=0u+0x00000207u; // 801DE7BC
  W16(c->r[3]+0x00000000u,c->r[0]); // 801DE7C0
  c->lr=0x801DE7C8u; f_801DD270(c); // 801DE7C4
L_801DE7C8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DE7C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DE7CC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801DE7D0
  c->lr=c->r[0]; // 801DE7D4
  c->r[1]=c->r[1]+0x00000010u; // 801DE7D8
  return; // 801DE7DC
}

// bta_dm_sdp_callback
void f_801DE7E0(Ctx* __restrict c) {
  trace_call(0x801DE7E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DE7E0
  c->r[0]=c->lr; // 801DE7E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DE7E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DE7EC
  c->r[31]=c->r[3]|c->r[3]; // 801DE7F0
  c->r[3]=0u+0x0000000Au; // 801DE7F4
  c->lr=0x801DE7FCu; f_801D99E0(c); // 801DE7F8
  cmps(c,0,(int32_t)c->r[3],0); // 801DE7FC
  if (crb(c,2)) { goto L_801DE814; } // 801DE800
  c->r[0]=0u+0x00000206u; // 801DE804
  W16(c->r[3]+0x00000000u,c->r[0]); // 801DE808
  W16(c->r[3]+0x00000008u,c->r[31]); // 801DE80C
  c->lr=0x801DE814u; f_801DD270(c); // 801DE810
L_801DE814:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DE814
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DE818
  c->lr=c->r[0]; // 801DE81C
  c->r[1]=c->r[1]+0x00000010u; // 801DE820
  return; // 801DE824
}

// bta_dm_inq_results_cb
void f_801DE828(Ctx* __restrict c) {
  trace_call(0x801DE828u);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DE828
  c->r[0]=c->lr; // 801DE82C
  W32(c->r[1]+0x00000124u,c->r[0]); // 801DE830
  W32(c->r[1]+0x0000011Cu,c->r[31]); // 801DE834
  c->r[31]=c->r[3]|c->r[3]; // 801DE838
  c->r[3]=c->r[1]+0x00000008u; // 801DE83C
  c->r[4]=c->r[31]+0x00000002u; // 801DE840
  c->lr=0x801DE848u; f_801DCDC4(c); // 801DE844
  c->r[3]=c->r[1]+0x0000000Eu; // 801DE848
  c->r[4]=c->r[31]+0x00000008u; // 801DE84C
  c->r[5]=0u+0x00000003u; // 801DE850
  c->lr=0x801DE858u; f_80004364(c); // 801DE854
  c->r[0]=R8(c->r[31]+0x0000000Eu); // 801DE858
  c->r[3]=c->r[31]+0x00000002u; // 801DE85C
  W8(c->r[1]+0x00000011u,c->r[0]); // 801DE860
  c->lr=0x801DE868u; f_801E758C(c); // 801DE864
  cmps(c,0,(int32_t)c->r[3],0); // 801DE868
  c->r[31]=c->r[3]|c->r[3]; // 801DE86C
  if (crb(c,2)) { goto L_801DE87C; } // 801DE870
  c->r[0]=0u+0x00000000u; // 801DE874
  W8(c->r[1]+0x00000012u,c->r[0]); // 801DE878
L_801DE87C:;
  c->r[3]=0u+0x80310000u; // 801DE87C
  c->r[4]=c->r[1]+0x00000008u; // 801DE880
  c->r[12]=R32(c->r[3]+0xFFFF8438u); // 801DE884
  c->r[3]=0u+0x00000000u; // 801DE888
  c->ctr=c->r[12]; // 801DE88C
  if (true) { c->lr=0x801DE894u; dispatch(c,c->ctr); } // 801DE890
  cmps(c,0,(int32_t)c->r[31],0); // 801DE894
  if (crb(c,2)) { goto L_801DE8A4; } // 801DE898
  c->r[0]=R8(c->r[1]+0x00000012u); // 801DE89C
  W8(c->r[31]+0x00000010u,c->r[0]); // 801DE8A0
L_801DE8A4:;
  c->r[0]=R32(c->r[1]+0x00000124u); // 801DE8A4
  c->r[31]=R32(c->r[1]+0x0000011Cu); // 801DE8A8
  c->lr=c->r[0]; // 801DE8AC
  c->r[1]=c->r[1]+0x00000120u; // 801DE8B0
  return; // 801DE8B4
}

// bta_dm_inq_cmpl_cb
void f_801DE8B8(Ctx* __restrict c) {
  trace_call(0x801DE8B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DE8B8
  c->r[0]=c->lr; // 801DE8BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DE8C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DE8C4
  c->r[31]=c->r[3]|c->r[3]; // 801DE8C8
  c->r[3]=0u+0x00000110u; // 801DE8CC
  c->lr=0x801DE8D4u; f_801D99E0(c); // 801DE8D0
  cmps(c,0,(int32_t)c->r[3],0); // 801DE8D4
  if (crb(c,2)) { goto L_801DE8F0; } // 801DE8D8
  c->r[0]=0u+0x00000203u; // 801DE8DC
  W16(c->r[3]+0x00000000u,c->r[0]); // 801DE8E0
  c->r[0]=R8(c->r[31]+0x00000001u); // 801DE8E4
  W8(c->r[3]+0x00000008u,c->r[0]); // 801DE8E8
  c->lr=0x801DE8F0u; f_801DD270(c); // 801DE8EC
L_801DE8F0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DE8F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DE8F4
  c->lr=c->r[0]; // 801DE8F8
  c->r[1]=c->r[1]+0x00000010u; // 801DE8FC
  return; // 801DE900
}

// bta_dm_service_search_remname_cback
void f_801DE904(Ctx* __restrict c) {
  trace_call(0x801DE904u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DE904
  c->r[0]=c->lr; // 801DE908
  c->r[3]=0u+0x80310000u; // 801DE90C
  c->r[4]=c->r[5]|c->r[5]; // 801DE910
  c->r[3]=c->r[3]+0xFFFF8438u; // 801DE914
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DE918
  c->r[5]=0u+0x0000001Fu; // 801DE91C
  c->r[3]=c->r[3]+0x00000020u; // 801DE920
  c->lr=0x801DE928u; f_8020E7F4(c); // 801DE924
  c->r[3]=0u+0x801E0000u; // 801DE928
  c->r[3]=c->r[3]+0xFFFFE904u; // 801DE92C
  c->lr=0x801DE934u; f_801EA1E4(c); // 801DE930
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DE934
  c->lr=c->r[0]; // 801DE938
  c->r[1]=c->r[1]+0x00000010u; // 801DE93C
  return; // 801DE940
}

// bta_dm_remname_cback
void f_801DE944(Ctx* __restrict c) {
  trace_call(0x801DE944u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DE944
  c->r[0]=c->lr; // 801DE948
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DE94C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DE950
  c->r[31]=0u+0x80310000u; // 801DE954
  c->r[31]=c->r[31]+0xFFFF8438u; // 801DE958
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DE95C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DE960
  c->r[29]=c->r[3]|c->r[3]; // 801DE964
  c->r[3]=c->r[31]+0x00000058u; // 801DE968
  c->lr=0x801DE970u; f_801DD2AC(c); // 801DE96C
  c->r[3]=0u+0x00000110u; // 801DE970
  c->lr=0x801DE978u; f_801D99E0(c); // 801DE974
  cmps(c,0,(int32_t)c->r[3],0); // 801DE978
  c->r[30]=c->r[3]|c->r[3]; // 801DE97C
  if (crb(c,2)) { goto L_801DE9B4; } // 801DE980
  c->r[4]=R32(c->r[31]+0x00000004u); // 801DE984
  c->r[3]=c->r[3]+0x00000008u; // 801DE988
  c->r[4]=c->r[4]+0x00000002u; // 801DE98C
  c->lr=0x801DE994u; f_801DCDC4(c); // 801DE990
  c->r[3]=c->r[30]+0x0000000Eu; // 801DE994
  c->r[4]=c->r[29]+0x00000004u; // 801DE998
  c->r[5]=0u+0x00000020u; // 801DE99C
  c->lr=0x801DE9A4u; f_8020E7F4(c); // 801DE9A0
  c->r[0]=0u+0x00000204u; // 801DE9A4
  c->r[3]=c->r[30]|c->r[30]; // 801DE9A8
  W16(c->r[30]+0x00000000u,c->r[0]); // 801DE9AC
  c->lr=0x801DE9B4u; f_801DD270(c); // 801DE9B0
L_801DE9B4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DE9B4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DE9B8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DE9BC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DE9C0
  c->lr=c->r[0]; // 801DE9C4
  c->r[1]=c->r[1]+0x00000020u; // 801DE9C8
  return; // 801DE9CC
}

// bta_dm_disc_remname_cback
void f_801DE9D0(Ctx* __restrict c) {
  trace_call(0x801DE9D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DE9D0
  c->r[0]=c->lr; // 801DE9D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DE9D8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DE9DC
  c->r[31]=0u+0x80310000u; // 801DE9E0
  c->r[31]=c->r[31]+0xFFFF8438u; // 801DE9E4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DE9E8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DE9EC
  c->r[29]=c->r[3]|c->r[3]; // 801DE9F0
  c->r[3]=c->r[31]+0x00000058u; // 801DE9F4
  c->lr=0x801DE9FCu; f_801DD2AC(c); // 801DE9F8
  c->r[3]=0u+0x00000110u; // 801DE9FC
  c->lr=0x801DEA04u; f_801D99E0(c); // 801DEA00
  cmps(c,0,(int32_t)c->r[3],0); // 801DEA04
  c->r[30]=c->r[3]|c->r[3]; // 801DEA08
  if (crb(c,2)) { goto L_801DEA3C; } // 801DEA0C
  c->r[3]=c->r[3]+0x00000008u; // 801DEA10
  c->r[4]=c->r[31]+0x0000001Au; // 801DEA14
  c->lr=0x801DEA1Cu; f_801DCDC4(c); // 801DEA18
  c->r[3]=c->r[30]+0x0000000Eu; // 801DEA1C
  c->r[4]=c->r[29]+0x00000004u; // 801DEA20
  c->r[5]=0u+0x00000020u; // 801DEA24
  c->lr=0x801DEA2Cu; f_8020E7F4(c); // 801DEA28
  c->r[0]=0u+0x00000204u; // 801DEA2C
  c->r[3]=c->r[30]|c->r[30]; // 801DEA30
  W16(c->r[30]+0x00000000u,c->r[0]); // 801DEA34
  c->lr=0x801DEA3Cu; f_801DD270(c); // 801DEA38
L_801DEA3C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DEA3C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DEA40
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DEA44
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DEA48
  c->lr=c->r[0]; // 801DEA4C
  c->r[1]=c->r[1]+0x00000020u; // 801DEA50
  return; // 801DEA54
}

// bta_dm_cancel_rmt_name
void f_801DEA58(Ctx* __restrict c) {
  trace_call(0x801DEA58u);
  f_801E7514(c); return; // 801DEA58
}

// bta_dm_authorize_cback
void f_801DEA5C(Ctx* __restrict c) {
  trace_call(0x801DEA5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFED0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DEA5C
  c->r[0]=c->lr; // 801DEA60
  c->r[4]=c->r[3]|c->r[3]; // 801DEA64
  W32(c->r[1]+0x00000134u,c->r[0]); // 801DEA68
  c->r[3]=c->r[1]+0x00000008u; // 801DEA6C
  W32(c->r[1]+0x0000012Cu,c->r[31]); // 801DEA70
  c->r[31]=0u+0x00000001u; // 801DEA74
  W32(c->r[1]+0x00000128u,c->r[30]); // 801DEA78
  c->r[30]=c->r[7]|c->r[7]; // 801DEA7C
  W32(c->r[1]+0x00000124u,c->r[29]); // 801DEA80
  c->r[29]=c->r[5]|c->r[5]; // 801DEA84
  c->lr=0x801DEA8Cu; f_801DCDC4(c); // 801DEA88
  c->r[4]=c->r[29]|c->r[29]; // 801DEA8C
  c->r[3]=c->r[1]+0x0000000Eu; // 801DEA90
  c->r[5]=0u+0x00000020u; // 801DEA94
  c->lr=0x801DEA9Cu; f_8020E7F4(c); // 801DEA98
  c->r[3]=0u+0x80230000u; // 801DEA9C
  c->r[0]=0u+0x00000017u; // 801DEAA0
  c->r[3]=c->r[3]+0xFFFFC3D0u; // 801DEAA4
  c->ctr=c->r[0]; // 801DEAA8
L_801DEAAC:;
  c->r[0]=rotl(c->r[31],2)&0x000003FCu; // 801DEAAC
  c->r[0]=R32(c->r[3]+c->r[0]); // 801DEAB0
  cmpu(c,0,c->r[30],c->r[0]); // 801DEAB4
  if (!crb(c,2)) { goto L_801DEAC4; } // 801DEAB8
  W8(c->r[1]+0x00000106u,c->r[31]); // 801DEABC
  goto L_801DEACC; // 801DEAC0
L_801DEAC4:;
  c->r[31]=c->r[31]+0x00000001u; // 801DEAC4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801DEAAC; } // 801DEAC8
L_801DEACC:;
  c->r[3]=0u+0x80310000u; // 801DEACC
  c->r[3]=c->r[3]+0xFFFF84B4u; // 801DEAD0
  c->r[12]=R32(c->r[3]+0x00000050u); // 801DEAD4
  cmps(c,0,(int32_t)c->r[12],0); // 801DEAD8
  if (crb(c,2)) { goto L_801DEB04; } // 801DEADC
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 801DEAE0
  cmpu(c,0,c->r[0],0x00000017u); // 801DEAE4
  if (crb(c,1)) { goto L_801DEB04; } // 801DEAE8
  c->r[4]=c->r[1]+0x00000008u; // 801DEAEC
  c->r[3]=0u+0x00000004u; // 801DEAF0
  c->ctr=c->r[12]; // 801DEAF4
  if (true) { c->lr=0x801DEAFCu; dispatch(c,c->ctr); } // 801DEAF8
  c->r[3]=0u+0x00000001u; // 801DEAFC
  goto L_801DEB08; // 801DEB00
L_801DEB04:;
  c->r[3]=0u+0x0000000Bu; // 801DEB04
L_801DEB08:;
  c->r[0]=R32(c->r[1]+0x00000134u); // 801DEB08
  c->r[31]=R32(c->r[1]+0x0000012Cu); // 801DEB0C
  c->r[30]=R32(c->r[1]+0x00000128u); // 801DEB10
  c->r[29]=R32(c->r[1]+0x00000124u); // 801DEB14
  c->lr=c->r[0]; // 801DEB18
  c->r[1]=c->r[1]+0x00000130u; // 801DEB1C
  return; // 801DEB20
}

// bta_dm_pinname_cback
void f_801DEB24(Ctx* __restrict c) {
  trace_call(0x801DEB24u);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DEB24
  c->r[0]=c->lr; // 801DEB28
  W32(c->r[1]+0x00000124u,c->r[0]); // 801DEB2C
  W32(c->r[1]+0x0000011Cu,c->r[31]); // 801DEB30
  c->r[31]=0u+0x80310000u; // 801DEB34
  c->r[31]=c->r[31]+0xFFFF84B4u; // 801DEB38
  W32(c->r[1]+0x00000118u,c->r[30]); // 801DEB3C
  c->r[30]=c->r[3]|c->r[3]; // 801DEB40
  c->r[3]=c->r[1]+0x00000008u; // 801DEB44
  c->r[4]=c->r[31]+0x000000F8u; // 801DEB48
  c->lr=0x801DEB50u; f_801DCDC4(c); // 801DEB4C
  c->r[4]=R8(c->r[31]+0x000000FEu); // 801DEB50
  cmps(c,0,(int32_t)c->r[30],0); // 801DEB54
  c->r[3]=R8(c->r[31]+0x000000FFu); // 801DEB58
  c->r[0]=R8(c->r[31]+0x00000100u); // 801DEB5C
  W8(c->r[1]+0x00000106u,c->r[4]); // 801DEB60
  W8(c->r[1]+0x00000107u,c->r[3]); // 801DEB64
  W8(c->r[1]+0x00000108u,c->r[0]); // 801DEB68
  if (crb(c,2)) { goto L_801DEBA8; } // 801DEB6C
  c->r[0]=R16(c->r[30]+0x00000000u); // 801DEB70
  cmps(c,0,(int32_t)c->r[0],0); // 801DEB74
  if (!crb(c,2)) { goto L_801DEBA8; } // 801DEB78
  c->r[0]=R16(c->r[30]+0x00000002u); // 801DEB7C
  c->r[3]=c->r[1]+0x0000000Eu; // 801DEB80
  c->r[4]=c->r[30]+0x00000004u; // 801DEB84
  c->r[5]=0u+0x00000020u; // 801DEB88
  cmpu(c,0,c->r[0],0x00000020u); // 801DEB8C
  if (!crb(c,0)) { goto L_801DEB98; } // 801DEB90
  c->r[5]=c->r[0]|c->r[0]; // 801DEB94
L_801DEB98:;
  c->lr=0x801DEB9Cu; f_80004364(c); // 801DEB98
  c->r[0]=0u+0x00000000u; // 801DEB9C
  W8(c->r[1]+0x0000002Eu,c->r[0]); // 801DEBA0
  goto L_801DEBB0; // 801DEBA4
L_801DEBA8:;
  c->r[0]=0u+0x00000000u; // 801DEBA8
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 801DEBAC
L_801DEBB0:;
  c->r[5]=0u+0x80310000u; // 801DEBB0
  c->r[4]=c->r[1]+0x00000008u; // 801DEBB4
  c->r[5]=c->r[5]+0xFFFF84B4u; // 801DEBB8
  c->r[3]=0u+0x00000002u; // 801DEBBC
  c->r[12]=R32(c->r[5]+0x00000050u); // 801DEBC0
  c->ctr=c->r[12]; // 801DEBC4
  if (true) { c->lr=0x801DEBCCu; dispatch(c,c->ctr); } // 801DEBC8
  c->r[0]=R32(c->r[1]+0x00000124u); // 801DEBCC
  c->r[31]=R32(c->r[1]+0x0000011Cu); // 801DEBD0
  c->r[30]=R32(c->r[1]+0x00000118u); // 801DEBD4
  c->lr=c->r[0]; // 801DEBD8
  c->r[1]=c->r[1]+0x00000120u; // 801DEBDC
  return; // 801DEBE0
}

// bta_dm_pin_cback
void f_801DEBE4(Ctx* __restrict c) {
  trace_call(0x801DEBE4u);
  {uint32_t ea=c->r[1]+0xFFFFFED0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DEBE4
  c->r[0]=c->lr; // 801DEBE8
  W32(c->r[1]+0x00000134u,c->r[0]); // 801DEBEC
  W32(c->r[1]+0x0000012Cu,c->r[31]); // 801DEBF0
  c->r[31]=0u+0x80310000u; // 801DEBF4
  c->r[31]=c->r[31]+0xFFFF84B4u; // 801DEBF8
  W32(c->r[1]+0x00000128u,c->r[30]); // 801DEBFC
  c->r[30]=c->r[5]|c->r[5]; // 801DEC00
  W32(c->r[1]+0x00000124u,c->r[29]); // 801DEC04
  c->r[29]=c->r[4]|c->r[4]; // 801DEC08
  W32(c->r[1]+0x00000120u,c->r[28]); // 801DEC0C
  c->r[28]=c->r[3]|c->r[3]; // 801DEC10
  c->r[0]=R32(c->r[31]+0x00000050u); // 801DEC14
  cmps(c,0,(int32_t)c->r[0],0); // 801DEC18
  if (!crb(c,2)) { goto L_801DEC28; } // 801DEC1C
  c->r[3]=0u+0x0000000Bu; // 801DEC20
  goto L_801DECF4; // 801DEC24
L_801DEC28:;
  c->r[0]=R8(c->r[5]+0x00000000u); // 801DEC28
  cmps(c,0,(int32_t)c->r[0],0); // 801DEC2C
  if (!crb(c,2)) { goto L_801DEC98; } // 801DEC30
  c->r[4]=c->r[28]|c->r[28]; // 801DEC34
  c->r[3]=c->r[31]+0x000000F8u; // 801DEC38
  c->lr=0x801DEC40u; f_801DCDC4(c); // 801DEC3C
  c->r[0]=R8(c->r[29]+0x00000000u); // 801DEC40
  c->r[4]=0u+0x801E0000u; // 801DEC44
  c->r[3]=c->r[28]|c->r[28]; // 801DEC48
  W8(c->r[31]+0x000000FEu,c->r[0]); // 801DEC4C
  c->r[4]=c->r[4]+0xFFFFEB24u; // 801DEC50
  c->r[0]=R8(c->r[29]+0x00000001u); // 801DEC54
  W8(c->r[31]+0x000000FFu,c->r[0]); // 801DEC58
  c->r[0]=R8(c->r[29]+0x00000002u); // 801DEC5C
  W8(c->r[31]+0x00000100u,c->r[0]); // 801DEC60
  c->lr=0x801DEC68u; f_801E742C(c); // 801DEC64
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801DEC68
  cmpu(c,0,c->r[0],0x00000001u); // 801DEC6C
  if (!crb(c,2)) { goto L_801DEC7C; } // 801DEC70
  c->r[3]=0u+0x00000001u; // 801DEC74
  goto L_801DECF4; // 801DEC78
L_801DEC7C:;
  c->r[0]=R8(c->r[13]+0xFFFFB6D0u); // 801DEC7C
  cmpu(c,0,c->r[0],0x00000002u); // 801DEC80
  if (crb(c,0)) { goto L_801DEC98; } // 801DEC84
  c->r[4]=0u+0x80280000u; // 801DEC88
  c->r[3]=0u+0x00000501u; // 801DEC8C
  c->r[4]=c->r[4]+0xFFFFE180u; // 801DEC90
  c->lr=0x801DEC98u; f_801DC730(c); // 801DEC94
L_801DEC98:;
  c->r[4]=c->r[28]|c->r[28]; // 801DEC98
  c->r[3]=c->r[1]+0x00000008u; // 801DEC9C
  c->lr=0x801DECA4u; f_801DCDC4(c); // 801DECA0
  c->r[0]=R8(c->r[29]+0x00000000u); // 801DECA4
  c->r[4]=c->r[30]|c->r[30]; // 801DECA8
  c->r[3]=c->r[1]+0x0000000Eu; // 801DECAC
  c->r[5]=0u+0x00000020u; // 801DECB0
  W8(c->r[1]+0x00000106u,c->r[0]); // 801DECB4
  c->r[0]=R8(c->r[29]+0x00000001u); // 801DECB8
  W8(c->r[1]+0x00000107u,c->r[0]); // 801DECBC
  c->r[0]=R8(c->r[29]+0x00000002u); // 801DECC0
  W8(c->r[1]+0x00000108u,c->r[0]); // 801DECC4
  c->lr=0x801DECCCu; f_8020E7F4(c); // 801DECC8
  c->r[3]=0u+0x80310000u; // 801DECCC
  c->r[0]=0u+0x00000000u; // 801DECD0
  c->r[3]=c->r[3]+0xFFFF84B4u; // 801DECD4
  W8(c->r[1]+0x0000002Eu,c->r[0]); // 801DECD8
  c->r[12]=R32(c->r[3]+0x00000050u); // 801DECDC
  c->r[4]=c->r[1]+0x00000008u; // 801DECE0
  c->r[3]=0u+0x00000002u; // 801DECE4
  c->ctr=c->r[12]; // 801DECE8
  if (true) { c->lr=0x801DECF0u; dispatch(c,c->ctr); } // 801DECEC
  c->r[3]=0u+0x00000001u; // 801DECF0
L_801DECF4:;
  c->r[0]=R32(c->r[1]+0x00000134u); // 801DECF4
  c->r[31]=R32(c->r[1]+0x0000012Cu); // 801DECF8
  c->r[30]=R32(c->r[1]+0x00000128u); // 801DECFC
  c->r[29]=R32(c->r[1]+0x00000124u); // 801DED00
  c->r[28]=R32(c->r[1]+0x00000120u); // 801DED04
  c->lr=c->r[0]; // 801DED08
  c->r[1]=c->r[1]+0x00000130u; // 801DED0C
  return; // 801DED10
}

// bta_dm_link_key_request_cback
void f_801DED14(Ctx* __restrict c) {
  trace_call(0x801DED14u);
  c->r[3]=0u+0x0000000Bu; // 801DED14
  return; // 801DED18
}

// bta_dm_new_link_key_cback
void f_801DED1C(Ctx* __restrict c) {
  trace_call(0x801DED1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DED1C
  c->r[0]=c->lr; // 801DED20
  c->r[4]=c->r[3]|c->r[3]; // 801DED24
  W32(c->r[1]+0x00000124u,c->r[0]); // 801DED28
  c->r[3]=c->r[1]+0x00000008u; // 801DED2C
  W32(c->r[1]+0x0000011Cu,c->r[31]); // 801DED30
  c->r[31]=c->r[6]|c->r[6]; // 801DED34
  W32(c->r[1]+0x00000118u,c->r[30]); // 801DED38
  c->r[30]=c->r[5]|c->r[5]; // 801DED3C
  c->lr=0x801DED44u; f_801DCDC4(c); // 801DED40
  c->r[4]=c->r[30]|c->r[30]; // 801DED44
  c->r[3]=c->r[1]+0x0000000Eu; // 801DED48
  c->r[5]=0u+0x0000001Fu; // 801DED4C
  c->lr=0x801DED54u; f_80004364(c); // 801DED50
  c->r[0]=0u+0x00000000u; // 801DED54
  c->r[4]=c->r[31]|c->r[31]; // 801DED58
  W8(c->r[1]+0x0000002Du,c->r[0]); // 801DED5C
  c->r[3]=c->r[1]+0x00000107u; // 801DED60
  c->r[5]=0u+0x00000010u; // 801DED64
  c->lr=0x801DED6Cu; f_80004364(c); // 801DED68
  c->r[3]=0u+0x80310000u; // 801DED6C
  c->r[0]=0u+0x00000001u; // 801DED70
  c->r[3]=c->r[3]+0xFFFF84B4u; // 801DED74
  W8(c->r[1]+0x00000106u,c->r[0]); // 801DED78
  c->r[12]=R32(c->r[3]+0x00000050u); // 801DED7C
  W8(c->r[1]+0x00000117u,c->r[0]); // 801DED80
  cmps(c,0,(int32_t)c->r[12],0); // 801DED84
  if (crb(c,2)) { goto L_801DED9C; } // 801DED88
  c->r[4]=c->r[1]+0x00000008u; // 801DED8C
  c->r[3]=0u+0x00000003u; // 801DED90
  c->ctr=c->r[12]; // 801DED94
  if (true) { c->lr=0x801DED9Cu; dispatch(c,c->ctr); } // 801DED98
L_801DED9C:;
  c->r[31]=R32(c->r[1]+0x0000011Cu); // 801DED9C
  c->r[3]=0u+0x00000001u; // 801DEDA0
  c->r[30]=R32(c->r[1]+0x00000118u); // 801DEDA4
  c->r[0]=R32(c->r[1]+0x00000124u); // 801DEDA8
  c->lr=c->r[0]; // 801DEDAC
  c->r[1]=c->r[1]+0x00000120u; // 801DEDB0
  return; // 801DEDB4
}

// bta_dm_authentication_complete_cback
void f_801DEDB8(Ctx* __restrict c) {
  trace_call(0x801DEDB8u);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DEDB8
  c->r[0]=c->lr; // 801DEDBC
  cmps(c,0,(int32_t)c->r[6],0); // 801DEDC0
  W32(c->r[1]+0x00000124u,c->r[0]); // 801DEDC4
  W32(c->r[1]+0x0000011Cu,c->r[31]); // 801DEDC8
  c->r[31]=c->r[5]|c->r[5]; // 801DEDCC
  if (crb(c,2)) { goto L_801DEE24; } // 801DEDD0
  c->r[4]=c->r[3]|c->r[3]; // 801DEDD4
  c->r[3]=c->r[1]+0x00000008u; // 801DEDD8
  c->lr=0x801DEDE0u; f_801DCDC4(c); // 801DEDDC
  c->r[4]=c->r[31]|c->r[31]; // 801DEDE0
  c->r[3]=c->r[1]+0x0000000Eu; // 801DEDE4
  c->r[5]=0u+0x0000001Fu; // 801DEDE8
  c->lr=0x801DEDF0u; f_80004364(c); // 801DEDEC
  c->r[3]=0u+0x80310000u; // 801DEDF0
  c->r[0]=0u+0x00000000u; // 801DEDF4
  c->r[3]=c->r[3]+0xFFFF84B4u; // 801DEDF8
  W8(c->r[1]+0x0000002Du,c->r[0]); // 801DEDFC
  c->r[12]=R32(c->r[3]+0x00000050u); // 801DEE00
  W8(c->r[1]+0x00000117u,c->r[0]); // 801DEE04
  cmps(c,0,(int32_t)c->r[12],0); // 801DEE08
  W8(c->r[1]+0x00000106u,c->r[0]); // 801DEE0C
  if (crb(c,2)) { goto L_801DEE24; } // 801DEE10
  c->r[4]=c->r[1]+0x00000008u; // 801DEE14
  c->r[3]=0u+0x00000003u; // 801DEE18
  c->ctr=c->r[12]; // 801DEE1C
  if (true) { c->lr=0x801DEE24u; dispatch(c,c->ctr); } // 801DEE20
L_801DEE24:;
  c->r[31]=R32(c->r[1]+0x0000011Cu); // 801DEE24
  c->r[3]=0u+0x00000000u; // 801DEE28
  c->r[0]=R32(c->r[1]+0x00000124u); // 801DEE2C
  c->lr=c->r[0]; // 801DEE30
  c->r[1]=c->r[1]+0x00000120u; // 801DEE34
  return; // 801DEE38
}

// bta_dm_local_addr_cback
void f_801DEE3C(Ctx* __restrict c) {
  trace_call(0x801DEE3Cu);
  c->r[4]=0u+0x80310000u; // 801DEE3C
  c->r[4]=c->r[4]+0xFFFF84B4u; // 801DEE40
  c->r[12]=R32(c->r[4]+0x00000050u); // 801DEE44
  cmps(c,0,(int32_t)c->r[12],0); // 801DEE48
  if (crb(c,2)) return; // 801DEE4C
  c->r[4]=c->r[3]|c->r[3]; // 801DEE50
  c->r[3]=0u+0x00000000u; // 801DEE54
  c->ctr=c->r[12]; // 801DEE58
  if (true) { dispatch(c,c->ctr); return; } // 801DEE5C
  return; // 801DEE60
}

// bta_dm_signal_strength
void f_801DEE64(Ctx* __restrict c) {
  trace_call(0x801DEE64u);
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 801DEE64
  cmps(c,0,(int32_t)c->r[0],0); // 801DEE68
  if (crb(c,2)) { goto L_801DEE90; } // 801DEE6C
  c->r[4]=0u+0x80310000u; // 801DEE70
  c->r[0]=R8(c->r[3]+0x00000008u); // 801DEE74
  c->r[4]=c->r[4]+0xFFFF84B4u; // 801DEE78
  W8(c->r[4]+0x0000006Cu,c->r[0]); // 801DEE7C
  c->r[0]=R16(c->r[3]+0x0000000Au); // 801DEE80
  c->r[3]=0u+0x00000000u; // 801DEE84
  W16(c->r[4]+0x00000070u,c->r[0]); // 801DEE88
  f_801DEEA0(c); return; // 801DEE8C
L_801DEE90:;
  c->r[3]=0u+0x80310000u; // 801DEE90
  c->r[3]=c->r[3]+0xFFFF84B4u; // 801DEE94
  c->r[3]=c->r[3]+0x00000054u; // 801DEE98
  f_801DD2AC(c); return; // 801DEE9C
}

// bta_dm_signal_strength_timer_cback
void f_801DEEA0(Ctx* __restrict c) {
  trace_call(0x801DEEA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DEEA0
  c->r[0]=c->lr; // 801DEEA4
  c->r[3]=0u+0x80310000u; // 801DEEA8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DEEAC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DEEB0
  c->r[31]=c->r[3]+0xFFFF84B4u; // 801DEEB4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DEEB8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DEEBC
  c->r[0]=R8(c->r[31]+0x0000006Cu); // 801DEEC0
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801DEEC4
  if (crb(c,2)) { goto L_801DEF00; } // 801DEEC8
  c->r[29]=0u+0x00000000u; // 801DEECC
  c->r[30]=0u+0x801E0000u; // 801DEED0
  goto L_801DEEF0; // 801DEED4
L_801DEED8:;
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 801DEED8
  c->r[4]=c->r[30]+0xFFFFF2A0u; // 801DEEDC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 801DEEE0
  c->r[3]=c->r[31]+c->r[0]; // 801DEEE4
  c->lr=0x801DEEECu; f_801E424C(c); // 801DEEE8
  c->r[29]=c->r[29]+0x00000001u; // 801DEEEC
L_801DEEF0:;
  c->r[0]=R8(c->r[31]+0x0000004Du); // 801DEEF0
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 801DEEF4
  cmpu(c,0,c->r[3],c->r[0]); // 801DEEF8
  if (crb(c,0)) { IRQCHK(c); goto L_801DEED8; } // 801DEEFC
L_801DEF00:;
  c->r[3]=0u+0x80310000u; // 801DEF00
  c->r[30]=c->r[3]+0xFFFF84B4u; // 801DEF04
  c->r[0]=R8(c->r[30]+0x0000006Cu); // 801DEF08
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801DEF0C
  if (crb(c,2)) { goto L_801DEF48; } // 801DEF10
  c->r[29]=0u+0x00000000u; // 801DEF14
  c->r[31]=0u+0x801E0000u; // 801DEF18
  goto L_801DEF38; // 801DEF1C
L_801DEF20:;
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 801DEF20
  c->r[4]=c->r[31]+0xFFFFF30Cu; // 801DEF24
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 801DEF28
  c->r[3]=c->r[30]+c->r[0]; // 801DEF2C
  c->lr=0x801DEF34u; f_801E4388(c); // 801DEF30
  c->r[29]=c->r[29]+0x00000001u; // 801DEF34
L_801DEF38:;
  c->r[0]=R8(c->r[30]+0x0000004Du); // 801DEF38
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 801DEF3C
  cmpu(c,0,c->r[3],c->r[0]); // 801DEF40
  if (crb(c,0)) { IRQCHK(c); goto L_801DEF20; } // 801DEF44
L_801DEF48:;
  c->r[7]=0u+0x80310000u; // 801DEF48
  c->r[7]=c->r[7]+0xFFFF84B4u; // 801DEF4C
  c->r[0]=R16(c->r[7]+0x00000070u); // 801DEF50
  cmps(c,0,(int32_t)c->r[0],0); // 801DEF54
  if (crb(c,2)) { goto L_801DEF78; } // 801DEF58
  c->r[6]=0u+0x801E0000u; // 801DEF5C
  c->r[3]=c->r[7]+0x00000054u; // 801DEF60
  c->r[6]=c->r[6]+0xFFFFEEA0u; // 801DEF64
  c->r[4]=0u+0x00000000u; // 801DEF68
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)1000); // 801DEF6C
  W32(c->r[7]+0x0000005Cu,c->r[6]); // 801DEF70
  c->lr=0x801DEF78u; f_801DD28C(c); // 801DEF74
L_801DEF78:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DEF78
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DEF7C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DEF80
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DEF84
  c->lr=c->r[0]; // 801DEF88
  c->r[1]=c->r[1]+0x00000020u; // 801DEF8C
  return; // 801DEF90
}

// bta_dm_acl_change_cback
void f_801DEF94(Ctx* __restrict c) {
  trace_call(0x801DEF94u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DEF94
  c->r[0]=c->lr; // 801DEF98
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DEF9C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DEFA0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DEFA4
  c->r[30]=c->r[7]|c->r[7]; // 801DEFA8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DEFAC
  c->r[29]=c->r[3]|c->r[3]; // 801DEFB0
  c->r[3]=0u+0x00000012u; // 801DEFB4
  c->lr=0x801DEFBCu; f_801D99E0(c); // 801DEFB8
  cmps(c,0,(int32_t)c->r[3],0); // 801DEFBC
  c->r[31]=c->r[3]|c->r[3]; // 801DEFC0
  if (crb(c,2)) { goto L_801DEFE8; } // 801DEFC4
  c->r[4]=c->r[29]|c->r[29]; // 801DEFC8
  c->r[3]=c->r[3]+0x0000000Bu; // 801DEFCC
  c->lr=0x801DEFD4u; f_801DCDC4(c); // 801DEFD0
  W8(c->r[31]+0x0000000Au,c->r[30]); // 801DEFD4
  c->r[0]=0u+0x00000105u; // 801DEFD8
  c->r[3]=c->r[31]|c->r[31]; // 801DEFDC
  W16(c->r[31]+0x00000000u,c->r[0]); // 801DEFE0
  c->lr=0x801DEFE8u; f_801DD270(c); // 801DEFE4
L_801DEFE8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DEFE8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DEFEC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DEFF0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DEFF4
  c->lr=c->r[0]; // 801DEFF8
  c->r[1]=c->r[1]+0x00000020u; // 801DEFFC
  return; // 801DF000
}

// bta_dm_acl_change
void f_801DF004(Ctx* __restrict c) {
  trace_call(0x801DF004u);
  {uint32_t ea=c->r[1]+0xFFFFFED0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DF004
  c->r[0]=c->lr; // 801DF008
  W32(c->r[1]+0x00000134u,c->r[0]); // 801DF00C
  W32(c->r[1]+0x0000012Cu,c->r[31]); // 801DF010
  c->r[31]=c->r[3]+0x0000000Bu; // 801DF014
  W32(c->r[1]+0x00000128u,c->r[30]); // 801DF018
  W32(c->r[1]+0x00000124u,c->r[29]); // 801DF01C
  c->r[0]=R8(c->r[3]+0x0000000Au); // 801DF020
  cmps(c,0,(int32_t)c->r[0],0); // 801DF024
  if (crb(c,2)) { goto L_801DF0E8; } // 801DF028
  c->r[3]=0u+0x80310000u; // 801DF02C
  c->r[29]=0u+0x00000000u; // 801DF030
  c->r[30]=c->r[3]+0xFFFF84B4u; // 801DF034
  goto L_801DF05C; // 801DF038
L_801DF03C:;
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 801DF03C
  c->r[4]=c->r[31]|c->r[31]; // 801DF040
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 801DF044
  c->r[3]=c->r[30]+c->r[0]; // 801DF048
  c->lr=0x801DF050u; f_801DCDF8(c); // 801DF04C
  cmps(c,0,(int32_t)c->r[3],0); // 801DF050
  if (crb(c,2)) { goto L_801DF06C; } // 801DF054
  c->r[29]=c->r[29]+0x00000001u; // 801DF058
L_801DF05C:;
  c->r[0]=R8(c->r[30]+0x0000004Du); // 801DF05C
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 801DF060
  cmpu(c,0,c->r[3],c->r[0]); // 801DF064
  if (crb(c,0)) { IRQCHK(c); goto L_801DF03C; } // 801DF068
L_801DF06C:;
  c->r[30]=0u+0x80310000u; // 801DF06C
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 801DF070
  c->r[30]=c->r[30]+0xFFFF84B4u; // 801DF074
  c->r[3]=R8(c->r[30]+0x0000004Du); // 801DF078
  cmpu(c,0,c->r[0],c->r[3]); // 801DF07C
  if (!crb(c,2)) { goto L_801DF0A0; } // 801DF080
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)11); // 801DF084
  c->r[4]=c->r[31]|c->r[31]; // 801DF088
  c->r[3]=c->r[30]+c->r[0]; // 801DF08C
  c->lr=0x801DF094u; f_801DCDC4(c); // 801DF090
  c->r[3]=R8(c->r[30]+0x0000004Du); // 801DF094
  c->r[0]=c->r[3]+0x00000001u; // 801DF098
  W8(c->r[30]+0x0000004Du,c->r[0]); // 801DF09C
L_801DF0A0:;
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 801DF0A0
  c->r[30]=0u+0x80310000u; // 801DF0A4
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 801DF0A8
  c->r[3]=0u+0x00000001u; // 801DF0AC
  c->r[30]=c->r[30]+0xFFFF84B4u; // 801DF0B0
  c->r[0]=0u+0x00000000u; // 801DF0B4
  c->r[5]=c->r[30]+c->r[4]; // 801DF0B8
  W8(c->r[5]+0x00000006u,c->r[3]); // 801DF0BC
  c->r[4]=c->r[31]|c->r[31]; // 801DF0C0
  c->r[3]=c->r[1]+0x00000008u; // 801DF0C4
  W8(c->r[5]+0x00000007u,c->r[0]); // 801DF0C8
  c->lr=0x801DF0D0u; f_801DCDC4(c); // 801DF0CC
  c->r[12]=R32(c->r[30]+0x00000050u); // 801DF0D0
  c->r[4]=c->r[1]+0x00000008u; // 801DF0D4
  c->r[3]=0u+0x00000005u; // 801DF0D8
  c->ctr=c->r[12]; // 801DF0DC
  if (true) { c->lr=0x801DF0E4u; dispatch(c,c->ctr); } // 801DF0E0
  goto L_801DF268; // 801DF0E4
L_801DF0E8:;
  c->r[3]=0u+0x80310000u; // 801DF0E8
  c->r[29]=0u+0x00000000u; // 801DF0EC
  c->r[30]=c->r[3]+0xFFFF84B4u; // 801DF0F0
  goto L_801DF15C; // 801DF0F4
L_801DF0F8:;
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 801DF0F8
  c->r[4]=c->r[31]|c->r[31]; // 801DF0FC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 801DF100
  c->r[3]=c->r[30]+c->r[0]; // 801DF104
  c->lr=0x801DF10Cu; f_801DCDF8(c); // 801DF108
  cmps(c,0,(int32_t)c->r[3],0); // 801DF10C
  if (!crb(c,2)) { goto L_801DF158; } // 801DF110
  c->r[3]=0u+0x80310000u; // 801DF114
  c->r[30]=c->r[3]+0xFFFF84B4u; // 801DF118
  goto L_801DF144; // 801DF11C
L_801DF120:;
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 801DF120
  c->r[5]=0u+0x0000000Bu; // 801DF124
  c->r[0]=c->r[3]+0x00000001u; // 801DF128
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)11); // 801DF12C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 801DF130
  c->r[3]=c->r[30]+c->r[3]; // 801DF134
  c->r[4]=c->r[30]+c->r[0]; // 801DF138
  c->lr=0x801DF140u; f_80004364(c); // 801DF13C
  c->r[29]=c->r[29]+0x00000001u; // 801DF140
L_801DF144:;
  c->r[0]=R8(c->r[30]+0x0000004Du); // 801DF144
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 801DF148
  cmpu(c,0,c->r[3],c->r[0]); // 801DF14C
  if (crb(c,0)) { IRQCHK(c); goto L_801DF120; } // 801DF150
  goto L_801DF16C; // 801DF154
L_801DF158:;
  c->r[29]=c->r[29]+0x00000001u; // 801DF158
L_801DF15C:;
  c->r[0]=R8(c->r[30]+0x0000004Du); // 801DF15C
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 801DF160
  cmpu(c,0,c->r[3],c->r[0]); // 801DF164
  if (crb(c,0)) { IRQCHK(c); goto L_801DF0F8; } // 801DF168
L_801DF16C:;
  c->r[4]=0u+0x80310000u; // 801DF16C
  c->r[30]=0u+0x80310000u; // 801DF170
  c->r[4]=c->r[4]+0xFFFF84B4u; // 801DF174
  c->r[30]=c->r[30]+0xFFFF8438u; // 801DF178
  c->r[3]=R8(c->r[4]+0x0000004Du); // 801DF17C
  c->r[0]=R8(c->r[30]+0x00000078u); // 801DF180
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801DF184
  cmps(c,0,(int32_t)c->r[0],0); // 801DF188
  W8(c->r[4]+0x0000004Du,c->r[3]); // 801DF18C
  if (crb(c,2)) { goto L_801DF1EC; } // 801DF190
  c->r[4]=c->r[31]|c->r[31]; // 801DF194
  c->r[3]=c->r[30]+0x0000001Au; // 801DF198
  c->lr=0x801DF1A0u; f_801DCDF8(c); // 801DF19C
  cmps(c,0,(int32_t)c->r[3],0); // 801DF1A0
  if (!crb(c,2)) { goto L_801DF1EC; } // 801DF1A4
  c->r[0]=R8(c->r[30]+0x00000079u); // 801DF1A8
  c->r[3]=0u+0x00000000u; // 801DF1AC
  W8(c->r[30]+0x00000078u,c->r[3]); // 801DF1B0
  cmps(c,0,(int32_t)c->r[0],0); // 801DF1B4
  if (crb(c,2)) { goto L_801DF1EC; } // 801DF1B8
  c->r[0]=R8(c->r[13]+0xFFFFB6D0u); // 801DF1BC
  cmpu(c,0,c->r[0],0x00000004u); // 801DF1C0
  if (crb(c,0)) { goto L_801DF1D8; } // 801DF1C4
  c->r[4]=0u+0x80280000u; // 801DF1C8
  c->r[3]=0u+0x00000503u; // 801DF1CC
  c->r[4]=c->r[4]+0xFFFFE1C0u; // 801DF1D0
  c->lr=0x801DF1D8u; f_801DC730(c); // 801DF1D4
L_801DF1D8:;
  c->r[3]=0u+0x80310000u; // 801DF1D8
  c->r[3]=c->r[3]+0xFFFF8438u; // 801DF1DC
  c->r[3]=c->r[3]+0x00000040u; // 801DF1E0
  c->lr=0x801DF1E8u; f_801DD2AC(c); // 801DF1E4
  c->lr=0x801DF1ECu; f_801DE700(c); // 801DF1E8
L_801DF1EC:;
  c->r[30]=0u+0x80310000u; // 801DF1EC
  c->r[30]=c->r[30]+0xFFFF84B4u; // 801DF1F0
  c->r[0]=R8(c->r[30]+0x00000072u); // 801DF1F4
  cmps(c,0,(int32_t)c->r[0],0); // 801DF1F8
  if (crb(c,2)) { goto L_801DF238; } // 801DF1FC
  c->lr=0x801DF204u; f_801E3B9C(c); // 801DF200
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801DF204
  if (!crb(c,2)) { goto L_801DF238; } // 801DF208
  c->r[0]=0u+0x00000000u; // 801DF20C
  c->r[3]=c->r[30]+0x00000074u; // 801DF210
  W8(c->r[30]+0x00000072u,c->r[0]); // 801DF214
  c->lr=0x801DF21Cu; f_801DD2AC(c); // 801DF218
  c->r[5]=0u+0x801E0000u; // 801DF21C
  c->r[3]=c->r[30]+0x00000074u; // 801DF220
  c->r[5]=c->r[5]+0xFFFFF284u; // 801DF224
  c->r[4]=0u+0x00000000u; // 801DF228
  W32(c->r[30]+0x0000007Cu,c->r[5]); // 801DF22C
  c->r[5]=0u+0x000003E8u; // 801DF230
  c->lr=0x801DF238u; f_801DD28C(c); // 801DF234
L_801DF238:;
  c->r[4]=c->r[31]|c->r[31]; // 801DF238
  c->r[3]=c->r[1]+0x00000008u; // 801DF23C
  c->lr=0x801DF244u; f_801DCDC4(c); // 801DF240
  c->lr=0x801DF248u; f_801E3BF8(c); // 801DF244
  c->r[5]=0u+0x80310000u; // 801DF248
  W8(c->r[1]+0x0000000Eu,c->r[3]); // 801DF24C
  c->r[5]=c->r[5]+0xFFFF84B4u; // 801DF250
  c->r[4]=c->r[1]+0x00000008u; // 801DF254
  c->r[12]=R32(c->r[5]+0x00000050u); // 801DF258
  c->r[3]=0u+0x00000006u; // 801DF25C
  c->ctr=c->r[12]; // 801DF260
  if (true) { c->lr=0x801DF268u; dispatch(c,c->ctr); } // 801DF264
L_801DF268:;
  c->r[0]=R32(c->r[1]+0x00000134u); // 801DF268
  c->r[31]=R32(c->r[1]+0x0000012Cu); // 801DF26C
  c->r[30]=R32(c->r[1]+0x00000128u); // 801DF270
  c->r[29]=R32(c->r[1]+0x00000124u); // 801DF274
  c->lr=c->r[0]; // 801DF278
  c->r[1]=c->r[1]+0x00000130u; // 801DF27C
  return; // 801DF280
}

// bta_dm_disable_conn_down_timer_cback
void f_801DF284(Ctx* __restrict c) {
  trace_call(0x801DF284u);
  c->r[5]=0u+0x80310000u; // 801DF284
  c->r[3]=0u+0x00000001u; // 801DF288
  c->r[5]=c->r[5]+0xFFFF84B4u; // 801DF28C
  c->r[4]=0u+0x00000000u; // 801DF290
  c->r[12]=R32(c->r[5]+0x00000050u); // 801DF294
  c->ctr=c->r[12]; // 801DF298
  if (true) { dispatch(c,c->ctr); return; } // 801DF29C
}

// bta_dm_rssi_cback
void f_801DF2A0(Ctx* __restrict c) {
  trace_call(0x801DF2A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DF2A0
  c->r[0]=c->lr; // 801DF2A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DF2A8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DF2AC
  c->r[31]=c->r[3]|c->r[3]; // 801DF2B0
  c->r[0]=R8(c->r[3]+0x00000000u); // 801DF2B4
  cmps(c,0,(int32_t)c->r[0],0); // 801DF2B8
  if (!crb(c,2)) { goto L_801DF2F8; } // 801DF2BC
  c->r[3]=c->r[1]+0x00000008u; // 801DF2C0
  c->r[4]=c->r[31]+0x00000003u; // 801DF2C4
  c->lr=0x801DF2CCu; f_801DCDC4(c); // 801DF2C8
  c->r[0]=0u+0x00000001u; // 801DF2CC
  c->r[3]=0u+0x80310000u; // 801DF2D0
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 801DF2D4
  c->r[3]=c->r[3]+0xFFFF84B4u; // 801DF2D8
  c->r[12]=R32(c->r[3]+0x00000050u); // 801DF2DC
  c->r[4]=c->r[1]+0x00000008u; // 801DF2E0
  c->r[0]=R8(c->r[31]+0x00000002u); // 801DF2E4
  c->r[3]=0u+0x00000007u; // 801DF2E8
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 801DF2EC
  c->ctr=c->r[12]; // 801DF2F0
  if (true) { c->lr=0x801DF2F8u; dispatch(c,c->ctr); } // 801DF2F4
L_801DF2F8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DF2F8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DF2FC
  c->lr=c->r[0]; // 801DF300
  c->r[1]=c->r[1]+0x00000020u; // 801DF304
  return; // 801DF308
}

// bta_dm_link_quality_cback
void f_801DF30C(Ctx* __restrict c) {
  trace_call(0x801DF30Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DF30C
  c->r[0]=c->lr; // 801DF310
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DF314
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DF318
  c->r[31]=c->r[3]|c->r[3]; // 801DF31C
  c->r[0]=R8(c->r[3]+0x00000000u); // 801DF320
  cmps(c,0,(int32_t)c->r[0],0); // 801DF324
  if (!crb(c,2)) { goto L_801DF364; } // 801DF328
  c->r[3]=c->r[1]+0x00000008u; // 801DF32C
  c->r[4]=c->r[31]+0x00000003u; // 801DF330
  c->lr=0x801DF338u; f_801DCDC4(c); // 801DF334
  c->r[0]=0u+0x00000002u; // 801DF338
  c->r[3]=0u+0x80310000u; // 801DF33C
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 801DF340
  c->r[3]=c->r[3]+0xFFFF84B4u; // 801DF344
  c->r[12]=R32(c->r[3]+0x00000050u); // 801DF348
  c->r[4]=c->r[1]+0x00000008u; // 801DF34C
  c->r[0]=R8(c->r[31]+0x00000002u); // 801DF350
  c->r[3]=0u+0x00000007u; // 801DF354
  W8(c->r[1]+0x00000010u,c->r[0]); // 801DF358
  c->ctr=c->r[12]; // 801DF35C
  if (true) { c->lr=0x801DF364u; dispatch(c,c->ctr); } // 801DF360
L_801DF364:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DF364
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DF368
  c->lr=c->r[0]; // 801DF36C
  c->r[1]=c->r[1]+0x00000020u; // 801DF370
  return; // 801DF374
}

// bta_dm_l2cap_server_compress_cback
void f_801DF378(Ctx* __restrict c) {
  trace_call(0x801DF378u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DF378
  c->r[0]=c->lr; // 801DF37C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801DF380
  c->r[11]=c->r[1]+0x00000030u; // 801DF384
  c->lr=0x801DF38Cu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DF388
  c->r[31]=0u+0x80310000u; // 801DF38C
  c->r[27]=R32(c->r[1]+0x00000038u); // 801DF390
  c->r[31]=c->r[31]+0xFFFF8408u; // 801DF394
  c->r[25]=c->r[3]|c->r[3]; // 801DF398
  c->r[26]=c->r[10]|c->r[10]; // 801DF39C
  c->r[29]=0u+0x00000000u; // 801DF3A0
  c->r[30]=c->r[31]|c->r[31]; // 801DF3A4
  c->r[28]=0u+0x00000000u; // 801DF3A8
L_801DF3AC:;
  c->r[0]=R8(c->r[31]+0x00000008u); // 801DF3AC
  cmpu(c,0,c->r[0],0x00000001u); // 801DF3B0
  if (!crb(c,2)) { goto L_801DF42C; } // 801DF3B4
  c->r[3]=c->r[30]|c->r[30]; // 801DF3B8
  c->r[4]=c->r[25]|c->r[25]; // 801DF3BC
  c->lr=0x801DF3C4u; f_801DCDF8(c); // 801DF3C0
  cmps(c,0,(int32_t)c->r[3],0); // 801DF3C4
  if (!crb(c,2)) { goto L_801DF42C; } // 801DF3C8
  c->r[0]=R8(c->r[13]+0xFFFFB6D0u); // 801DF3CC
  cmpu(c,0,c->r[0],0x00000004u); // 801DF3D0
  if (crb(c,0)) { goto L_801DF400; } // 801DF3D4
  c->r[0]=rotl(c->r[28],3)&0xFFFFFFF8u; // 801DF3D8
  c->r[5]=0u+0x80310000u; // 801DF3DC
  c->r[5]=c->r[5]+0xFFFF8408u; // 801DF3E0
  c->r[4]=0u+0x80280000u; // 801DF3E4
  c->r[0]=c->r[0]+c->r[28]; // 801DF3E8
  c->r[3]=0u+0x00000503u; // 801DF3EC
  c->r[5]=c->r[5]+c->r[0]; // 801DF3F0
  c->r[4]=c->r[4]+0xFFFFE1D4u; // 801DF3F4
  c->r[5]=R8(c->r[5]+0x00000006u); // 801DF3F8
  c->lr=0x801DF400u; f_801DC750(c); // 801DF3FC
L_801DF400:;
  c->r[0]=rotl(c->r[28],3)&0xFFFFFFF8u; // 801DF400
  c->r[3]=0u+0x80310000u; // 801DF404
  c->r[3]=c->r[3]+0xFFFF8408u; // 801DF408
  c->r[4]=c->r[26]|c->r[26]; // 801DF40C
  c->r[0]=c->r[0]+c->r[28]; // 801DF410
  c->r[5]=c->r[27]|c->r[27]; // 801DF414
  c->r[3]=c->r[3]+c->r[0]; // 801DF418
  c->r[3]=R8(c->r[3]+0x00000006u); // 801DF41C
  c->lr=0x801DF424u; f_801D9490(c); // 801DF420
  c->r[29]=c->r[3]|c->r[3]; // 801DF424
  goto L_801DF440; // 801DF428
L_801DF42C:;
  c->r[28]=c->r[28]+0x00000001u; // 801DF42C
  c->r[30]=c->r[30]+0x00000009u; // 801DF430
  cmps(c,0,(int32_t)c->r[28],5); // 801DF434
  c->r[31]=c->r[31]+0x00000009u; // 801DF438
  if (crb(c,0)) { IRQCHK(c); goto L_801DF3AC; } // 801DF43C
L_801DF440:;
  c->r[11]=c->r[1]+0x00000030u; // 801DF440
  c->r[3]=c->r[29]|c->r[29]; // 801DF444
  c->lr=0x801DF44Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DF448
  c->r[0]=R32(c->r[1]+0x00000034u); // 801DF44C
  c->lr=c->r[0]; // 801DF450
  c->r[1]=c->r[1]+0x00000030u; // 801DF454
  return; // 801DF458
}

// bta_dm_compress_cback
void f_801DF45C(Ctx* __restrict c) {
  trace_call(0x801DF45Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DF45C
  c->r[0]=c->lr; // 801DF460
  cmps(c,0,(int32_t)c->r[3],0); // 801DF464
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DF468
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DF46C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DF470
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DF474
  if (!crb(c,2)) { goto L_801DF5D0; } // 801DF478
  c->r[3]=R32(c->r[13]+0xFFFFAB7Cu); // 801DF47C
  c->r[7]=0u+0x00000001u; // 801DF480
  c->r[9]=R8(c->r[3]+0x00000001u); // 801DF484
  goto L_801DF5C0; // 801DF488
L_801DF48C:;
  c->r[8]=rotl(c->r[7],0)&0x000000FFu; // 801DF48C
  c->r[0]=rotl(c->r[7],2)&0x000003FCu; // 801DF490
  c->r[0]=c->r[0]-c->r[8]; // 801DF494
  c->r[8]=c->r[3]+c->r[0]; // 801DF498
  c->r[0]=R8(c->r[8]+0x00000001u); // 801DF49C
  cmpu(c,0,c->r[5],c->r[0]); // 801DF4A0
  if (crb(c,2)) { goto L_801DF4B0; } // 801DF4A4
  cmpu(c,0,c->r[0],0x000000FFu); // 801DF4A8
  if (!crb(c,2)) { goto L_801DF5BC; } // 801DF4AC
L_801DF4B0:;
  c->r[0]=R8(c->r[8]+0x00000000u); // 801DF4B0
  cmpu(c,0,c->r[4],c->r[0]); // 801DF4B4
  if (!crb(c,2)) { goto L_801DF5BC; } // 801DF4B8
  c->r[0]=R8(c->r[8]+0x00000002u); // 801DF4BC
  cmpu(c,0,c->r[0],0x00000001u); // 801DF4C0
  if (!crb(c,2)) { goto L_801DF5BC; } // 801DF4C4
  c->r[8]=0u+0x80310000u; // 801DF4C8
  c->r[11]=R8(c->r[3]+0x00000001u); // 801DF4CC
  c->r[10]=R8(c->r[8]+0xFFFF85B8u); // 801DF4D0
  c->r[9]=c->r[8]+0xFFFF85B8u; // 801DF4D4
  c->r[31]=0u+0x00000000u; // 801DF4D8
  c->r[29]=0u+0x00000001u; // 801DF4DC
  goto L_801DF540; // 801DF4E0
L_801DF4E4:;
  c->r[8]=rotl(c->r[29],0)&0x000000FFu; // 801DF4E4
  c->r[0]=rotl(c->r[29],2)&0x000003FCu; // 801DF4E8
  c->r[0]=c->r[0]-c->r[8]; // 801DF4EC
  c->r[12]=c->r[3]+c->r[0]; // 801DF4F0
  c->r[0]=R8(c->r[12]+0x00000002u); // 801DF4F4
  cmpu(c,0,c->r[0],0x00000002u); // 801DF4F8
  if (!crb(c,2)) { goto L_801DF53C; } // 801DF4FC
  c->r[30]=0u+0x00000000u; // 801DF500
  goto L_801DF530; // 801DF504
L_801DF508:;
  c->r[8]=rotl(c->r[30],0)&0x000000FFu; // 801DF508
  c->r[0]=rotl(c->r[30],3)&0x000007F8u; // 801DF50C
  c->r[8]=c->r[0]+c->r[8]; // 801DF510
  c->r[0]=R8(c->r[12]+0x00000000u); // 801DF514
  c->r[8]=c->r[9]+c->r[8]; // 801DF518
  c->r[8]=R8(c->r[8]+0x00000007u); // 801DF51C
  cmpu(c,0,c->r[8],c->r[0]); // 801DF520
  if (!crb(c,2)) { goto L_801DF52C; } // 801DF524
  c->r[31]=0u+0x00000001u; // 801DF528
L_801DF52C:;
  c->r[30]=c->r[30]+0x00000001u; // 801DF52C
L_801DF530:;
  c->r[0]=rotl(c->r[30],0)&0x000000FFu; // 801DF530
  cmpu(c,0,c->r[0],c->r[10]); // 801DF534
  if (crb(c,0)) { IRQCHK(c); goto L_801DF508; } // 801DF538
L_801DF53C:;
  c->r[29]=c->r[29]+0x00000001u; // 801DF53C
L_801DF540:;
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 801DF540
  cmpu(c,0,c->r[0],c->r[11]); // 801DF544
  if (!crb(c,1)) { IRQCHK(c); goto L_801DF4E4; } // 801DF548
  cmps(c,0,(int32_t)c->r[31],0); // 801DF54C
  if (!crb(c,2)) { goto L_801DF678; } // 801DF550
  c->r[3]=rotl(c->r[7],0)&0x000000FFu; // 801DF554
  c->r[30]=0u+0x80310000u; // 801DF558
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801DF55C
  c->r[0]=rotl(c->r[3],3)&0xFFFFFFF8u; // 801DF560
  c->r[30]=c->r[30]+0xFFFF8408u; // 801DF564
  c->r[29]=c->r[0]+c->r[3]; // 801DF568
  c->r[31]=c->r[30]+c->r[29]; // 801DF56C
  W8(c->r[31]+0x00000007u,c->r[5]); // 801DF570
  c->r[3]=c->r[31]|c->r[31]; // 801DF574
  W8(c->r[31]+0x00000006u,c->r[4]); // 801DF578
  c->r[4]=c->r[6]|c->r[6]; // 801DF57C
  c->lr=0x801DF584u; f_801DCDC4(c); // 801DF580
  c->r[0]=R8(c->r[13]+0xFFFFB6D0u); // 801DF584
  c->r[3]=0u+0x00000001u; // 801DF588
  W8(c->r[31]+0x00000008u,c->r[3]); // 801DF58C
  c->r[7]=c->r[31]|c->r[31]; // 801DF590
  cmpu(c,0,c->r[0],0x00000004u); // 801DF594
  if (crb(c,0)) { goto L_801DF678; } // 801DF598
  c->r[4]=0u+0x80280000u; // 801DF59C
  c->r[5]=R8(c->r[31]+0x00000007u); // 801DF5A0
  c->r[6]=R8(c->r[31]+0x00000006u); // 801DF5A4
  c->r[4]=c->r[4]+0xFFFFE204u; // 801DF5A8
  c->r[7]=R8(c->r[7]+0x00000008u); // 801DF5AC
  c->r[3]=0u+0x00000503u; // 801DF5B0
  c->lr=0x801DF5B8u; f_801DC790(c); // 801DF5B4
  goto L_801DF678; // 801DF5B8
L_801DF5BC:;
  c->r[7]=c->r[7]+0x00000001u; // 801DF5BC
L_801DF5C0:;
  c->r[0]=rotl(c->r[7],0)&0x000000FFu; // 801DF5C0
  cmpu(c,0,c->r[0],c->r[9]); // 801DF5C4
  if (!crb(c,1)) { IRQCHK(c); goto L_801DF48C; } // 801DF5C8
  goto L_801DF678; // 801DF5CC
L_801DF5D0:;
  cmpu(c,0,c->r[3],0x00000001u); // 801DF5D0
  if (!crb(c,2)) { goto L_801DF678; } // 801DF5D4
  c->r[7]=R32(c->r[13]+0xFFFFAB7Cu); // 801DF5D8
  c->r[8]=0u+0x00000001u; // 801DF5DC
  c->r[6]=R8(c->r[7]+0x00000001u); // 801DF5E0
  goto L_801DF66C; // 801DF5E4
L_801DF5E8:;
  c->r[3]=rotl(c->r[8],0)&0x000000FFu; // 801DF5E8
  c->r[0]=rotl(c->r[8],2)&0x000003FCu; // 801DF5EC
  c->r[0]=c->r[0]-c->r[3]; // 801DF5F0
  c->r[3]=c->r[7]+c->r[0]; // 801DF5F4
  c->r[0]=R8(c->r[3]+0x00000001u); // 801DF5F8
  cmpu(c,0,c->r[5],c->r[0]); // 801DF5FC
  if (crb(c,2)) { goto L_801DF60C; } // 801DF600
  cmpu(c,0,c->r[0],0x000000FFu); // 801DF604
  if (!crb(c,2)) { goto L_801DF668; } // 801DF608
L_801DF60C:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 801DF60C
  cmpu(c,0,c->r[4],c->r[0]); // 801DF610
  if (!crb(c,2)) { goto L_801DF668; } // 801DF614
  c->r[3]=rotl(c->r[8],0)&0x000000FFu; // 801DF618
  c->r[0]=R8(c->r[13]+0xFFFFB6D0u); // 801DF61C
  c->r[5]=c->r[3]+0xFFFFFFFFu; // 801DF620
  c->r[3]=0u+0x80310000u; // 801DF624
  cmpu(c,0,c->r[0],0x00000004u); // 801DF628
  c->r[4]=rotl(c->r[5],3)&0xFFFFFFF8u; // 801DF62C
  c->r[0]=c->r[4]+c->r[5]; // 801DF630
  c->r[3]=c->r[3]+0xFFFF8408u; // 801DF634
  c->r[3]=c->r[3]+c->r[0]; // 801DF638
  c->r[0]=0u+0x00000000u; // 801DF63C
  W8(c->r[3]+0x00000008u,c->r[0]); // 801DF640
  if (crb(c,0)) { goto L_801DF678; } // 801DF644
  c->r[4]=0u+0x80280000u; // 801DF648
  c->r[5]=R8(c->r[3]+0x00000007u); // 801DF64C
  c->r[6]=R8(c->r[3]+0x00000006u); // 801DF650
  c->r[4]=c->r[4]+0xFFFFE240u; // 801DF654
  c->r[7]=R8(c->r[3]+0x00000008u); // 801DF658
  c->r[3]=0u+0x00000503u; // 801DF65C
  c->lr=0x801DF664u; f_801DC790(c); // 801DF660
  goto L_801DF678; // 801DF664
L_801DF668:;
  c->r[8]=c->r[8]+0x00000001u; // 801DF668
L_801DF66C:;
  c->r[0]=rotl(c->r[8],0)&0x000000FFu; // 801DF66C
  cmpu(c,0,c->r[0],c->r[6]); // 801DF670
  if (!crb(c,1)) { IRQCHK(c); goto L_801DF5E8; } // 801DF674
L_801DF678:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DF678
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DF67C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DF680
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DF684
  c->lr=c->r[0]; // 801DF688
  c->r[1]=c->r[1]+0x00000020u; // 801DF68C
  return; // 801DF690
}

// bta_dm_rm_cback
void f_801DF694(Ctx* __restrict c) {
  trace_call(0x801DF694u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DF694
  c->r[0]=c->lr; // 801DF698
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DF69C
  c->r[11]=c->r[1]+0x00000020u; // 801DF6A0
  c->lr=0x801DF6A8u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DF6A4
  cmps(c,0,(int32_t)c->r[3],0); // 801DF6A8
  c->r[30]=c->r[4]|c->r[4]; // 801DF6AC
  c->r[31]=c->r[5]|c->r[5]; // 801DF6B0
  c->r[26]=c->r[6]|c->r[6]; // 801DF6B4
  if (!crb(c,2)) { goto L_801DF784; } // 801DF6B8
  c->r[3]=0u+0x80310000u; // 801DF6BC
  c->r[27]=0u+0x00000000u; // 801DF6C0
  c->r[29]=c->r[3]+0xFFFF84B4u; // 801DF6C4
  goto L_801DF774; // 801DF6C8
L_801DF6CC:;
  c->r[0]=rotl(c->r[27],0)&0x000000FFu; // 801DF6CC
  c->r[4]=c->r[26]|c->r[26]; // 801DF6D0
  c->r[28]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 801DF6D4
  c->r[3]=c->r[29]+c->r[28]; // 801DF6D8
  c->lr=0x801DF6E0u; f_801DCDF8(c); // 801DF6DC
  cmps(c,0,(int32_t)c->r[3],0); // 801DF6E0
  if (!crb(c,2)) { goto L_801DF770; } // 801DF6E4
  c->r[3]=c->r[29]+c->r[28]; // 801DF6E8
  c->r[0]=0u+0x00000001u; // 801DF6EC
  W8(c->r[3]+0x00000006u,c->r[0]); // 801DF6F0
  c->r[7]=0u+0x00000001u; // 801DF6F4
  c->r[6]=R32(c->r[13]+0xFFFFAB78u); // 801DF6F8
  c->r[4]=R8(c->r[6]+0x00000001u); // 801DF6FC
  goto L_801DF760; // 801DF700
L_801DF704:;
  c->r[3]=rotl(c->r[7],0)&0x000000FFu; // 801DF704
  c->r[0]=rotl(c->r[7],2)&0x000003FCu; // 801DF708
  c->r[5]=c->r[0]-c->r[3]; // 801DF70C
  c->r[3]=c->r[6]+c->r[5]; // 801DF710
  c->r[0]=R8(c->r[3]+0x00000001u); // 801DF714
  cmpu(c,0,c->r[31],c->r[0]); // 801DF718
  if (crb(c,2)) { goto L_801DF728; } // 801DF71C
  cmpu(c,0,c->r[0],0x000000FFu); // 801DF720
  if (!crb(c,2)) { goto L_801DF75C; } // 801DF724
L_801DF728:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 801DF728
  cmpu(c,0,c->r[30],c->r[0]); // 801DF72C
  if (!crb(c,2)) { goto L_801DF75C; } // 801DF730
  c->r[3]=0u+0x80310000u; // 801DF734
  c->r[4]=c->r[6]+c->r[5]; // 801DF738
  c->r[3]=c->r[3]+0xFFFF84B4u; // 801DF73C
  c->r[4]=R8(c->r[4]+0x00000002u); // 801DF740
  c->r[3]=c->r[3]+c->r[28]; // 801DF744
  c->r[0]=R8(c->r[3]+0x00000007u); // 801DF748
  cmpu(c,0,c->r[4],c->r[0]); // 801DF74C
  if (!crb(c,1)) { goto L_801DF784; } // 801DF750
  W8(c->r[3]+0x00000007u,c->r[4]); // 801DF754
  goto L_801DF784; // 801DF758
L_801DF75C:;
  c->r[7]=c->r[7]+0x00000001u; // 801DF75C
L_801DF760:;
  c->r[0]=rotl(c->r[7],0)&0x000000FFu; // 801DF760
  cmpu(c,0,c->r[0],c->r[4]); // 801DF764
  if (!crb(c,1)) { IRQCHK(c); goto L_801DF704; } // 801DF768
  goto L_801DF784; // 801DF76C
L_801DF770:;
  c->r[27]=c->r[27]+0x00000001u; // 801DF770
L_801DF774:;
  c->r[0]=R8(c->r[29]+0x0000004Du); // 801DF774
  c->r[3]=rotl(c->r[27],0)&0x000000FFu; // 801DF778
  cmpu(c,0,c->r[3],c->r[0]); // 801DF77C
  if (crb(c,0)) { IRQCHK(c); goto L_801DF6CC; } // 801DF780
L_801DF784:;
  c->r[11]=c->r[1]+0x00000020u; // 801DF784
  c->lr=0x801DF78Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DF788
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DF78C
  c->lr=c->r[0]; // 801DF790
  c->r[1]=c->r[1]+0x00000020u; // 801DF794
  return; // 801DF798
}

// bta_dm_keep_acl
void f_801DF79C(Ctx* __restrict c) {
  trace_call(0x801DF79Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DF79C
  c->r[0]=c->lr; // 801DF7A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DF7A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DF7A8
  c->r[4]=R16(c->r[3]+0x00000006u); // 801DF7AC
  c->r[3]=0u+0x80310000u; // 801DF7B0
  c->r[3]=c->r[3]+0xFFFF84B4u; // 801DF7B4
  c->r[0]=rotl(c->r[4],0)&0x000000FFu; cr0(c,c->r[0]); // 801DF7B8
  W8(c->r[3]+0x00000101u,c->r[4]); // 801DF7BC
  if (crb(c,2)) { goto L_801DF7F0; } // 801DF7C0
  c->r[31]=0u+0x00010000u; // 801DF7C4
  c->r[3]=c->r[2]+0xFFFFA2A8u; // 801DF7C8
  c->r[0]=c->r[31]+0xFFFFFFFFu; // 801DF7CC
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 801DF7D0
  c->lr=0x801DF7D8u; f_801F5B40(c); // 801DF7D4
  c->r[0]=c->r[31]+0xFFFFFFFFu; // 801DF7D8
  c->r[3]=0u+0x00000000u; // 801DF7DC
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 801DF7E0
  c->r[5]=0u+0x00000001u; // 801DF7E4
  c->lr=0x801DF7ECu; f_801F5A78(c); // 801DF7E8
  goto L_801DF80C; // 801DF7EC
L_801DF7F0:;
  c->r[3]=c->r[2]+0xFFFFA2A8u; // 801DF7F0
  c->r[4]=0u+0x00000002u; // 801DF7F4
  c->lr=0x801DF7FCu; f_801F5B40(c); // 801DF7F8
  c->r[3]=0u+0x00000000u; // 801DF7FC
  c->r[4]=0u+0x00000002u; // 801DF800
  c->r[5]=0u+0x00000001u; // 801DF804
  c->lr=0x801DF80Cu; f_801F5A78(c); // 801DF808
L_801DF80C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DF80C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DF810
  c->lr=c->r[0]; // 801DF814
  c->r[1]=c->r[1]+0x00000010u; // 801DF818
  return; // 801DF81C
}

// bta_dm_immediate_disable
void f_801DF820(Ctx* __restrict c) {
  trace_call(0x801DF820u);
  c->r[5]=0u+0x80310000u; // 801DF820
  c->r[3]=0u+0x00000001u; // 801DF824
  c->r[5]=c->r[5]+0xFFFF84B4u; // 801DF828
  c->r[4]=0u+0x00000000u; // 801DF82C
  c->r[12]=R32(c->r[5]+0x00000050u); // 801DF830
  c->ctr=c->r[12]; // 801DF834
  if (true) { dispatch(c,c->ctr); return; } // 801DF838
}

// bta_dm_reset_complete
void f_801DF83C(Ctx* __restrict c) {
  trace_call(0x801DF83Cu);
  return; // 801DF83C
}

// bta_dm_send_hci_reset
void f_801DF840(Ctx* __restrict c) {
  trace_call(0x801DF840u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DF840
  c->r[0]=c->lr; // 801DF844
  c->r[4]=0u+0x80310000u; // 801DF848
  c->r[3]=0u+0x00000002u; // 801DF84C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DF850
  c->r[0]=0u+0x00000001u; // 801DF854
  c->r[4]=c->r[4]+0xFFFF8378u; // 801DF858
  W8(c->r[4]+0x0000007Eu,c->r[0]); // 801DF85C
  c->lr=0x801DF864u; f_801D9B80(c); // 801DF860
  cmps(c,0,(int32_t)c->r[3],0); // 801DF864
  if (crb(c,2)) { goto L_801DF874; } // 801DF868
  c->r[4]=0u+0x00000000u; // 801DF86C
  c->lr=0x801DF874u; f_801F11A4(c); // 801DF870
L_801DF874:;
  c->r[3]=0u+0x801E0000u; // 801DF874
  c->r[3]=c->r[3]+0xFFFFF83Cu; // 801DF878
  c->lr=0x801DF880u; f_801E528C(c); // 801DF87C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DF880
  c->lr=c->r[0]; // 801DF884
  c->r[1]=c->r[1]+0x00000010u; // 801DF888
  return; // 801DF88C
}

