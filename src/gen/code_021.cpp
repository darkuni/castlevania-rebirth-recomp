#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// BTA_EnableBluetooth
void f_801DF890(Ctx* __restrict c) {
  trace_call(0x801DF890u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DF890
  c->r[0]=c->lr; // 801DF894
  c->r[4]=0u+0x80310000u; // 801DF898
  c->r[5]=0u+0x00000104u; // 801DF89C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DF8A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DF8A4
  c->r[31]=c->r[3]|c->r[3]; // 801DF8A8
  c->r[3]=c->r[4]+0xFFFF84B4u; // 801DF8AC
  c->r[4]=0u+0x00000000u; // 801DF8B0
  c->lr=0x801DF8B8u; f_800046B4(c); // 801DF8B4
  c->lr=0x801DF8BCu; f_801DB070(c); // 801DF8B8
  c->r[3]=0u+0x00000001u; // 801DF8BC
  c->r[4]=c->r[2]+0xFFFFA278u; // 801DF8C0
  c->lr=0x801DF8C8u; f_801DD25C(c); // 801DF8C4
  c->r[3]=0u+0x00000002u; // 801DF8C8
  c->r[4]=c->r[2]+0xFFFFA280u; // 801DF8CC
  c->lr=0x801DF8D4u; f_801DD25C(c); // 801DF8D0
  c->lr=0x801DF8D8u; f_801DB080(c); // 801DF8D4
  c->r[3]=0u+0x0000000Cu; // 801DF8D8
  c->lr=0x801DF8E0u; f_801D99E0(c); // 801DF8DC
  cmps(c,0,(int32_t)c->r[3],0); // 801DF8E0
  if (crb(c,2)) { goto L_801DF900; } // 801DF8E4
  c->r[0]=0u+0x00000100u; // 801DF8E8
  W16(c->r[3]+0x00000000u,c->r[0]); // 801DF8EC
  W32(c->r[3]+0x00000008u,c->r[31]); // 801DF8F0
  c->lr=0x801DF8F8u; f_801DD270(c); // 801DF8F4
  c->r[3]=0u+0x00000000u; // 801DF8F8
  goto L_801DF904; // 801DF8FC
L_801DF900:;
  c->r[3]=0u+0x00000001u; // 801DF900
L_801DF904:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DF904
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DF908
  c->lr=c->r[0]; // 801DF90C
  c->r[1]=c->r[1]+0x00000010u; // 801DF910
  return; // 801DF914
}

// BTA_DisableBluetooth
void f_801DF918(Ctx* __restrict c) {
  trace_call(0x801DF918u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DF918
  c->r[0]=c->lr; // 801DF91C
  c->r[3]=0u+0x00000008u; // 801DF920
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DF924
  c->lr=0x801DF92Cu; f_801D99E0(c); // 801DF928
  cmps(c,0,(int32_t)c->r[3],0); // 801DF92C
  if (crb(c,2)) { goto L_801DF940; } // 801DF930
  c->r[0]=0u+0x00000101u; // 801DF934
  W16(c->r[3]+0x00000000u,c->r[0]); // 801DF938
  c->lr=0x801DF940u; f_801DD270(c); // 801DF93C
L_801DF940:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DF940
  c->lr=c->r[0]; // 801DF944
  c->r[1]=c->r[1]+0x00000010u; // 801DF948
  return; // 801DF94C
}

// BTA_DmIsDeviceUp
void f_801DF950(Ctx* __restrict c) {
  trace_call(0x801DF950u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DF950
  c->r[0]=c->lr; // 801DF954
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DF958
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DF95C
  c->lr=0x801DF964u; f_801DB070(c); // 801DF960
  c->lr=0x801DF968u; f_801E5334(c); // 801DF964
  c->r[31]=c->r[3]|c->r[3]; // 801DF968
  c->lr=0x801DF970u; f_801DB080(c); // 801DF96C
  c->r[3]=c->r[31]|c->r[31]; // 801DF970
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DF974
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DF978
  c->lr=c->r[0]; // 801DF97C
  c->r[1]=c->r[1]+0x00000010u; // 801DF980
  return; // 801DF984
}

// BTA_DmSetDeviceName
void f_801DF988(Ctx* __restrict c) {
  trace_call(0x801DF988u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DF988
  c->r[0]=c->lr; // 801DF98C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DF990
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DF994
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DF998
  c->r[30]=c->r[3]|c->r[3]; // 801DF99C
  c->r[3]=0u+0x00000028u; // 801DF9A0
  c->lr=0x801DF9A8u; f_801D99E0(c); // 801DF9A4
  cmps(c,0,(int32_t)c->r[3],0); // 801DF9A8
  c->r[31]=c->r[3]|c->r[3]; // 801DF9AC
  if (crb(c,2)) { goto L_801DF9D4; } // 801DF9B0
  c->r[0]=0u+0x00000102u; // 801DF9B4
  c->r[4]=c->r[30]|c->r[30]; // 801DF9B8
  W16(c->r[3]+0x00000000u,c->r[0]); // 801DF9BC
  c->r[5]=0u+0x00000020u; // 801DF9C0
  c->r[3]=c->r[3]+0x00000008u; // 801DF9C4
  c->lr=0x801DF9CCu; f_8020E7F4(c); // 801DF9C8
  c->r[3]=c->r[31]|c->r[31]; // 801DF9CC
  c->lr=0x801DF9D4u; f_801DD270(c); // 801DF9D0
L_801DF9D4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DF9D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DF9D8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801DF9DC
  c->lr=c->r[0]; // 801DF9E0
  c->r[1]=c->r[1]+0x00000010u; // 801DF9E4
  return; // 801DF9E8
}

// BTA_DmSetVisibility
void f_801DF9EC(Ctx* __restrict c) {
  trace_call(0x801DF9ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DF9EC
  c->r[0]=c->lr; // 801DF9F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DF9F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DF9F8
  c->r[31]=c->r[4]|c->r[4]; // 801DF9FC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DFA00
  c->r[30]=c->r[3]|c->r[3]; // 801DFA04
  c->r[3]=0u+0x00000110u; // 801DFA08
  c->lr=0x801DFA10u; f_801D99E0(c); // 801DFA0C
  cmps(c,0,(int32_t)c->r[3],0); // 801DFA10
  if (crb(c,2)) { goto L_801DFA2C; } // 801DFA14
  c->r[0]=0u+0x00000103u; // 801DFA18
  W16(c->r[3]+0x00000000u,c->r[0]); // 801DFA1C
  W8(c->r[3]+0x00000008u,c->r[30]); // 801DFA20
  W8(c->r[3]+0x00000009u,c->r[31]); // 801DFA24
  c->lr=0x801DFA2Cu; f_801DD270(c); // 801DFA28
L_801DFA2C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DFA2C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DFA30
  c->r[30]=R32(c->r[1]+0x00000008u); // 801DFA34
  c->lr=c->r[0]; // 801DFA38
  c->r[1]=c->r[1]+0x00000010u; // 801DFA3C
  return; // 801DFA40
}

// BTA_DmSearch
void f_801DFA44(Ctx* __restrict c) {
  trace_call(0x801DFA44u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DFA44
  c->r[0]=c->lr; // 801DFA48
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DFA4C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DFA50
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DFA54
  c->r[30]=c->r[5]|c->r[5]; // 801DFA58
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DFA5C
  c->r[29]=c->r[4]|c->r[4]; // 801DFA60
  W32(c->r[1]+0x00000010u,c->r[28]); // 801DFA64
  c->r[28]=c->r[3]|c->r[3]; // 801DFA68
  c->r[3]=0u+0x0000001Cu; // 801DFA6C
  c->lr=0x801DFA74u; f_801D99E0(c); // 801DFA70
  cmps(c,0,(int32_t)c->r[3],0); // 801DFA74
  c->r[31]=c->r[3]|c->r[3]; // 801DFA78
  if (crb(c,2)) { goto L_801DFAA8; } // 801DFA7C
  c->r[0]=0u+0x00000200u; // 801DFA80
  c->r[4]=c->r[28]|c->r[28]; // 801DFA84
  W16(c->r[3]+0x00000000u,c->r[0]); // 801DFA88
  c->r[5]=0u+0x0000000Au; // 801DFA8C
  c->r[3]=c->r[3]+0x00000008u; // 801DFA90
  c->lr=0x801DFA98u; f_80004364(c); // 801DFA94
  W32(c->r[31]+0x00000014u,c->r[29]); // 801DFA98
  c->r[3]=c->r[31]|c->r[31]; // 801DFA9C
  W32(c->r[31]+0x00000018u,c->r[30]); // 801DFAA0
  c->lr=0x801DFAA8u; f_801DD270(c); // 801DFAA4
L_801DFAA8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DFAA8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DFAAC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DFAB0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DFAB4
  c->r[28]=R32(c->r[1]+0x00000010u); // 801DFAB8
  c->lr=c->r[0]; // 801DFABC
  c->r[1]=c->r[1]+0x00000020u; // 801DFAC0
  return; // 801DFAC4
}

// BTA_DmSearchCancel
void f_801DFAC8(Ctx* __restrict c) {
  trace_call(0x801DFAC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DFAC8
  c->r[0]=c->lr; // 801DFACC
  c->r[3]=0u+0x00000008u; // 801DFAD0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DFAD4
  c->lr=0x801DFADCu; f_801D99E0(c); // 801DFAD8
  cmps(c,0,(int32_t)c->r[3],0); // 801DFADC
  if (crb(c,2)) { goto L_801DFAF0; } // 801DFAE0
  c->r[0]=0u+0x00000201u; // 801DFAE4
  W16(c->r[3]+0x00000000u,c->r[0]); // 801DFAE8
  c->lr=0x801DFAF0u; f_801DD270(c); // 801DFAEC
L_801DFAF0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DFAF0
  c->lr=c->r[0]; // 801DFAF4
  c->r[1]=c->r[1]+0x00000010u; // 801DFAF8
  return; // 801DFAFC
}

// BTA_DmPinReply
void f_801DFB00(Ctx* __restrict c) {
  trace_call(0x801DFB00u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DFB00
  c->r[0]=c->lr; // 801DFB04
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DFB08
  c->r[11]=c->r[1]+0x00000020u; // 801DFB0C
  c->lr=0x801DFB14u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DFB10
  c->r[27]=c->r[3]|c->r[3]; // 801DFB14
  c->r[28]=c->r[4]|c->r[4]; // 801DFB18
  c->r[29]=c->r[5]|c->r[5]; // 801DFB1C
  c->r[30]=c->r[6]|c->r[6]; // 801DFB20
  c->r[3]=0u+0x00000020u; // 801DFB24
  c->lr=0x801DFB2Cu; f_801D99E0(c); // 801DFB28
  cmps(c,0,(int32_t)c->r[3],0); // 801DFB2C
  c->r[31]=c->r[3]|c->r[3]; // 801DFB30
  if (crb(c,2)) { goto L_801DFB74; } // 801DFB34
  c->r[0]=0u+0x00000107u; // 801DFB38
  c->r[4]=c->r[27]|c->r[27]; // 801DFB3C
  W16(c->r[3]+0x00000000u,c->r[0]); // 801DFB40
  c->r[3]=c->r[3]+0x00000008u; // 801DFB44
  c->lr=0x801DFB4Cu; f_801DCDC4(c); // 801DFB48
  cmps(c,0,(int32_t)c->r[28],0); // 801DFB4C
  W8(c->r[31]+0x0000000Eu,c->r[28]); // 801DFB50
  if (crb(c,2)) { goto L_801DFB6C; } // 801DFB54
  W8(c->r[31]+0x0000000Fu,c->r[29]); // 801DFB58
  c->r[4]=c->r[30]|c->r[30]; // 801DFB5C
  c->r[5]=c->r[29]|c->r[29]; // 801DFB60
  c->r[3]=c->r[31]+0x00000010u; // 801DFB64
  c->lr=0x801DFB6Cu; f_80004364(c); // 801DFB68
L_801DFB6C:;
  c->r[3]=c->r[31]|c->r[31]; // 801DFB6C
  c->lr=0x801DFB74u; f_801DD270(c); // 801DFB70
L_801DFB74:;
  c->r[11]=c->r[1]+0x00000020u; // 801DFB74
  c->lr=0x801DFB7Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DFB78
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DFB7C
  c->lr=c->r[0]; // 801DFB80
  c->r[1]=c->r[1]+0x00000020u; // 801DFB84
  return; // 801DFB88
}

// BTA_DmAddDevice
void f_801DFB8C(Ctx* __restrict c) {
  trace_call(0x801DFB8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DFB8C
  c->r[0]=c->lr; // 801DFB90
  W32(c->r[1]+0x00000034u,c->r[0]); // 801DFB94
  c->r[11]=c->r[1]+0x00000030u; // 801DFB98
  c->lr=0x801DFBA0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DFB9C
  c->r[28]=c->r[3]|c->r[3]; // 801DFBA0
  c->r[29]=c->r[4]|c->r[4]; // 801DFBA4
  c->r[30]=c->r[5]|c->r[5]; // 801DFBA8
  c->r[27]=c->r[6]|c->r[6]; // 801DFBAC
  c->r[3]=c->r[1]+0x00000008u; // 801DFBB0
  c->r[31]=0u+0x00000000u; // 801DFBB4
  c->r[4]=0u+0x00000000u; // 801DFBB8
  c->r[5]=0u+0x00000008u; // 801DFBBC
  c->lr=0x801DFBC4u; f_800046B4(c); // 801DFBC0
  cmps(c,0,(int32_t)c->r[27],0); // 801DFBC4
  if (crb(c,2)) { goto L_801DFC30; } // 801DFBC8
  c->r[7]=0u+0x80230000u; // 801DFBCC
  c->r[5]=c->r[1]+0x00000008u; // 801DFBD0
  c->r[7]=c->r[7]+0xFFFFC3D0u; // 801DFBD4
  c->r[3]=0u+0x00000001u; // 801DFBD8
  goto L_801DFC1C; // 801DFBDC
L_801DFBE0:;
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 801DFBE0
  c->r[4]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 801DFBE4
  c->r[0]=c->r[30]&c->r[4]; cr0(c,c->r[0]); // 801DFBE8
  if (crb(c,2)) { goto L_801DFC18; } // 801DFBEC
  c->r[0]=rotl(c->r[31],2)&0x000003FCu; // 801DFBF0
  c->r[30]=c->r[30]&~c->r[4]; // 801DFBF4
  c->r[4]=R32(c->r[7]+c->r[0]); // 801DFBF8
  c->r[0]=rotl(c->r[4],0)&0x00001FE0u; // 801DFBFC
  c->r[6]=rotl(c->r[4],29)&0x000003FCu; // 801DFC00
  c->r[0]=c->r[4]-c->r[0]; // 801DFC04
  c->r[4]=R32(c->r[5]+c->r[6]); // 801DFC08
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 801DFC0C
  c->r[0]=c->r[4]|c->r[0]; // 801DFC10
  W32(c->r[5]+c->r[6],c->r[0]); // 801DFC14
L_801DFC18:;
  c->r[31]=c->r[31]+0x00000001u; // 801DFC18
L_801DFC1C:;
  cmps(c,0,(int32_t)c->r[30],0); // 801DFC1C
  if (crb(c,2)) { goto L_801DFC30; } // 801DFC20
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 801DFC24
  cmpu(c,0,c->r[0],0x00000017u); // 801DFC28
  if (crb(c,0)) { IRQCHK(c); goto L_801DFBE0; } // 801DFC2C
L_801DFC30:;
  c->lr=0x801DFC34u; f_801DB070(c); // 801DFC30
  c->r[3]=c->r[28]|c->r[28]; // 801DFC34
  c->r[8]=c->r[29]|c->r[29]; // 801DFC38
  c->r[7]=c->r[1]+0x00000008u; // 801DFC3C
  c->r[4]=0u+0x00000000u; // 801DFC40
  c->r[5]=0u+0x00000000u; // 801DFC44
  c->r[6]=0u+0x00000000u; // 801DFC48
  c->lr=0x801DFC50u; f_801E49D4(c); // 801DFC4C
  c->r[28]=c->r[3]|c->r[3]; // 801DFC50
  c->lr=0x801DFC58u; f_801DB080(c); // 801DFC54
  c->r[0]=rotl(c->r[28],0)&0x000000FFu; // 801DFC58
  c->r[11]=c->r[1]+0x00000030u; // 801DFC5C
  c->r[0]=cntlz(c->r[0]); // 801DFC60
  c->r[3]=rotl(c->r[0],27)&0x000000FFu; // 801DFC64
  c->lr=0x801DFC6Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DFC68
  c->r[0]=R32(c->r[1]+0x00000034u); // 801DFC6C
  c->lr=c->r[0]; // 801DFC70
  c->r[1]=c->r[1]+0x00000030u; // 801DFC74
  return; // 801DFC78
}

// BTA_DmRemoveDevice
void f_801DFC7C(Ctx* __restrict c) {
  trace_call(0x801DFC7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DFC7C
  c->r[0]=c->lr; // 801DFC80
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DFC84
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DFC88
  c->r[31]=c->r[3]|c->r[3]; // 801DFC8C
  c->lr=0x801DFC94u; f_801DB070(c); // 801DFC90
  c->r[3]=c->r[31]|c->r[31]; // 801DFC94
  c->lr=0x801DFC9Cu; f_801E4B5C(c); // 801DFC98
  c->r[31]=c->r[3]|c->r[3]; // 801DFC9C
  c->lr=0x801DFCA4u; f_801DB080(c); // 801DFCA0
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 801DFCA4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DFCA8
  c->r[0]=cntlz(c->r[0]); // 801DFCAC
  c->r[3]=rotl(c->r[0],27)&0x000000FFu; // 801DFCB0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DFCB4
  c->lr=c->r[0]; // 801DFCB8
  c->r[1]=c->r[1]+0x00000010u; // 801DFCBC
  return; // 801DFCC0
}

// BTA_DmSendHciReset
void f_801DFCC4(Ctx* __restrict c) {
  trace_call(0x801DFCC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DFCC4
  c->r[0]=c->lr; // 801DFCC8
  c->r[3]=0u+0x00000008u; // 801DFCCC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DFCD0
  c->lr=0x801DFCD8u; f_801D99E0(c); // 801DFCD4
  cmps(c,0,(int32_t)c->r[3],0); // 801DFCD8
  if (crb(c,2)) { goto L_801DFCEC; } // 801DFCDC
  c->r[0]=0u+0x0000010Cu; // 801DFCE0
  W16(c->r[3]+0x00000000u,c->r[0]); // 801DFCE4
  c->lr=0x801DFCECu; f_801DD270(c); // 801DFCE8
L_801DFCEC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DFCEC
  c->lr=c->r[0]; // 801DFCF0
  c->r[1]=c->r[1]+0x00000010u; // 801DFCF4
  return; // 801DFCF8
}

// bta_dm_sm_execute
void f_801DFCFC(Ctx* __restrict c) {
  trace_call(0x801DFCFCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DFCFC
  c->r[0]=c->lr; // 801DFD00
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DFD04
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DFD08
  c->r[31]=0u+0x80230000u; // 801DFD0C
  c->r[31]=c->r[31]+0xFFFFC448u; // 801DFD10
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DFD14
  c->r[30]=0u+0x80230000u; // 801DFD18
  c->r[30]=c->r[30]+0xFFFFC47Cu; // 801DFD1C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DFD20
  c->r[29]=0u+0x00000000u; // 801DFD24
  W32(c->r[1]+0x00000010u,c->r[28]); // 801DFD28
  c->r[28]=c->r[3]|c->r[3]; // 801DFD2C
L_801DFD30:;
  c->r[3]=R16(c->r[28]+0x00000000u); // 801DFD30
  c->r[0]=c->r[29]+c->r[30]; // 801DFD34
  c->r[4]=rotl(c->r[3],0)&0x000000FFu; // 801DFD38
  c->r[3]=rotl(c->r[3],2)&0x000003FCu; // 801DFD3C
  c->r[3]=c->r[3]-c->r[4]; // 801DFD40
  c->r[0]=R8(c->r[3]+c->r[0]); // 801DFD44
  cmpu(c,0,c->r[0],0x0000000Du); // 801DFD48
  if (crb(c,2)) { goto L_801DFD70; } // 801DFD4C
  c->r[0]=rotl(c->r[0],2)&0x000003FCu; // 801DFD50
  c->r[3]=c->r[28]|c->r[28]; // 801DFD54
  c->r[12]=R32(c->r[31]+c->r[0]); // 801DFD58
  c->ctr=c->r[12]; // 801DFD5C
  if (true) { c->lr=0x801DFD64u; dispatch(c,c->ctr); } // 801DFD60
  c->r[29]=c->r[29]+0x00000001u; // 801DFD64
  cmps(c,0,(int32_t)c->r[29],2); // 801DFD68
  if (crb(c,0)) { IRQCHK(c); goto L_801DFD30; } // 801DFD6C
L_801DFD70:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DFD70
  c->r[3]=0u+0x00000001u; // 801DFD74
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DFD78
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DFD7C
  c->r[28]=R32(c->r[1]+0x00000010u); // 801DFD80
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DFD84
  c->lr=c->r[0]; // 801DFD88
  c->r[1]=c->r[1]+0x00000020u; // 801DFD8C
  return; // 801DFD90
}

// bta_dm_search_sm_execute
void f_801DFD94(Ctx* __restrict c) {
  trace_call(0x801DFD94u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DFD94
  c->r[0]=c->lr; // 801DFD98
  c->r[7]=0u+0x80310000u; // 801DFD9C
  c->r[5]=0u+0x80230000u; // 801DFDA0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DFDA4
  c->r[7]=c->r[7]+0xFFFF8438u; // 801DFDA8
  c->r[5]=c->r[5]+0xFFFFC560u; // 801DFDAC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DFDB0
  c->r[31]=0u+0x80230000u; // 801DFDB4
  c->r[31]=c->r[31]+0xFFFFC4A8u; // 801DFDB8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DFDBC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DFDC0
  c->r[29]=0u+0x00000000u; // 801DFDC4
  W32(c->r[1]+0x00000010u,c->r[28]); // 801DFDC8
  c->r[28]=c->r[3]|c->r[3]; // 801DFDCC
  c->r[6]=R16(c->r[7]+0x00000018u); // 801DFDD0
  c->r[0]=R16(c->r[3]+0x00000000u); // 801DFDD4
  c->r[6]=rotl(c->r[6],2)&0xFFFFFFFCu; // 801DFDD8
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 801DFDDC
  c->r[0]=rotl(c->r[0],2)&0x000003FCu; // 801DFDE0
  c->r[30]=R32(c->r[5]+c->r[6]); // 801DFDE4
  c->r[0]=c->r[0]-c->r[4]; // 801DFDE8
  c->r[3]=c->r[30]+c->r[0]; // 801DFDEC
  c->r[0]=R8(c->r[3]+0x00000002u); // 801DFDF0
  W16(c->r[7]+0x00000018u,c->r[0]); // 801DFDF4
L_801DFDF8:;
  c->r[3]=R16(c->r[28]+0x00000000u); // 801DFDF8
  c->r[0]=c->r[29]+c->r[30]; // 801DFDFC
  c->r[4]=rotl(c->r[3],0)&0x000000FFu; // 801DFE00
  c->r[3]=rotl(c->r[3],2)&0x000003FCu; // 801DFE04
  c->r[3]=c->r[3]-c->r[4]; // 801DFE08
  c->r[0]=R8(c->r[3]+c->r[0]); // 801DFE0C
  cmpu(c,0,c->r[0],0x00000012u); // 801DFE10
  if (crb(c,2)) { goto L_801DFE38; } // 801DFE14
  c->r[0]=rotl(c->r[0],2)&0x000003FCu; // 801DFE18
  c->r[3]=c->r[28]|c->r[28]; // 801DFE1C
  c->r[12]=R32(c->r[31]+c->r[0]); // 801DFE20
  c->ctr=c->r[12]; // 801DFE24
  if (true) { c->lr=0x801DFE2Cu; dispatch(c,c->ctr); } // 801DFE28
  c->r[29]=c->r[29]+0x00000001u; // 801DFE2C
  cmps(c,0,(int32_t)c->r[29],2); // 801DFE30
  if (crb(c,0)) { IRQCHK(c); goto L_801DFDF8; } // 801DFE34
L_801DFE38:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DFE38
  c->r[3]=0u+0x00000001u; // 801DFE3C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DFE40
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DFE44
  c->r[28]=R32(c->r[1]+0x00000010u); // 801DFE48
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DFE4C
  c->lr=c->r[0]; // 801DFE50
  c->r[1]=c->r[1]+0x00000020u; // 801DFE54
  return; // 801DFE58
}

// bta_dm_init_pm
void f_801DFE5C(Ctx* __restrict c) {
  trace_call(0x801DFE5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DFE5C
  c->r[0]=c->lr; // 801DFE60
  c->r[3]=0u+0x80310000u; // 801DFE64
  c->r[4]=0u+0x00000000u; // 801DFE68
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DFE6C
  c->r[3]=c->r[3]+0xFFFF85B8u; // 801DFE70
  c->r[5]=0u+0x0000002Eu; // 801DFE74
  c->lr=0x801DFE7Cu; f_800046B4(c); // 801DFE78
  c->r[3]=R32(c->r[13]+0xFFFFAB80u); // 801DFE7C
  c->r[0]=R8(c->r[3]+0x00000001u); // 801DFE80
  cmps(c,0,(int32_t)c->r[0],0); // 801DFE84
  if (crb(c,2)) { goto L_801DFEB4; } // 801DFE88
  c->r[3]=0u+0x801E0000u; // 801DFE8C
  c->r[3]=c->r[3]+0xFFFFFEDCu; // 801DFE90
  c->lr=0x801DFE98u; f_801DCEB8(c); // 801DFE94
  c->r[4]=0u+0x80310000u; // 801DFE98
  c->r[5]=0u+0x801E0000u; // 801DFE9C
  c->r[4]=c->r[4]+0xFFFF84B4u; // 801DFEA0
  c->r[3]=0u+0x00000003u; // 801DFEA4
  c->r[4]=c->r[4]+0x00000095u; // 801DFEA8
  c->r[5]=c->r[5]+0x000005DCu; // 801DFEAC
  c->lr=0x801DFEB4u; f_801E8650(c); // 801DFEB0
L_801DFEB4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DFEB4
  c->lr=c->r[0]; // 801DFEB8
  c->r[1]=c->r[1]+0x00000010u; // 801DFEBC
  return; // 801DFEC0
}

// bta_dm_disable_pm
void f_801DFEC4(Ctx* __restrict c) {
  trace_call(0x801DFEC4u);
  c->r[4]=0u+0x80310000u; // 801DFEC4
  c->r[3]=0u+0x00000004u; // 801DFEC8
  c->r[4]=c->r[4]+0xFFFF84B4u; // 801DFECC
  c->r[5]=0u+0x00000000u; // 801DFED0
  c->r[4]=c->r[4]+0x00000095u; // 801DFED4
  f_801E8650(c); return; // 801DFED8
}

// bta_dm_pm_cback
void f_801DFEDC(Ctx* __restrict c) {
  trace_call(0x801DFEDCu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DFEDC
  c->r[0]=c->lr; // 801DFEE0
  W32(c->r[1]+0x00000044u,c->r[0]); // 801DFEE4
  c->r[11]=c->r[1]+0x00000040u; // 801DFEE8
  c->lr=0x801DFEF0u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DFEEC
  c->r[25]=c->r[3]|c->r[3]; // 801DFEF0
  c->r[26]=c->r[4]|c->r[4]; // 801DFEF4
  c->r[27]=c->r[5]|c->r[5]; // 801DFEF8
  c->r[28]=c->r[6]|c->r[6]; // 801DFEFC
  c->r[3]=c->r[1]+0x0000000Cu; // 801DFF00
  c->lr=0x801DFF08u; f_801E60E8(c); // 801DFF04
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801DFF08
  if (!crb(c,2)) { goto L_801DFF78; } // 801DFF0C
  c->r[0]=R16(c->r[1]+0x00000012u); // 801DFF10
  cmpu(c,0,c->r[0],0x0000000Fu); // 801DFF14
  if (!crb(c,2)) { goto L_801DFF78; } // 801DFF18
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 801DFF1C
  cmpu(c,0,c->r[0],0x00000003u); // 801DFF20
  if (!crb(c,0)) { goto L_801DFF78; } // 801DFF24
  cmpu(c,0,c->r[25],0x00000004u); // 801DFF28
  if (!crb(c,2)) { goto L_801DFF54; } // 801DFF2C
  c->r[5]=0u+0x80230000u; // 801DFF30
  c->r[3]=c->r[28]|c->r[28]; // 801DFF34
  c->r[5]=c->r[5]+0xFFFFC300u; // 801DFF38
  c->r[4]=c->r[1]+0x00000008u; // 801DFF3C
  c->r[0]=R16(c->r[5]+0x00000004u); // 801DFF40
  c->r[0]=c->r[0]&0x0000000Bu; cr0(c,c->r[0]); // 801DFF44
  W16(c->r[1]+0x00000008u,c->r[0]); // 801DFF48
  c->lr=0x801DFF50u; f_801E34F8(c); // 801DFF4C
  goto L_801DFF78; // 801DFF50
L_801DFF54:;
  cmpu(c,0,c->r[25],0x00000005u); // 801DFF54
  if (!crb(c,2)) { goto L_801DFF78; } // 801DFF58
  c->r[5]=0u+0x80230000u; // 801DFF5C
  c->r[3]=c->r[28]|c->r[28]; // 801DFF60
  c->r[5]=c->r[5]+0xFFFFC300u; // 801DFF64
  c->r[4]=c->r[1]+0x00000008u; // 801DFF68
  c->r[0]=R16(c->r[5]+0x00000004u); // 801DFF6C
  W16(c->r[1]+0x00000008u,c->r[0]); // 801DFF70
  c->lr=0x801DFF78u; f_801E34F8(c); // 801DFF74
L_801DFF78:;
  c->r[5]=R32(c->r[13]+0xFFFFAB80u); // 801DFF78
  c->r[30]=0u+0x00000001u; // 801DFF7C
  c->r[4]=R8(c->r[5]+0x00000001u); // 801DFF80
  goto L_801DFFBC; // 801DFF84
L_801DFF88:;
  c->r[3]=rotl(c->r[30],0)&0x000000FFu; // 801DFF88
  c->r[0]=rotl(c->r[30],2)&0x000003FCu; // 801DFF8C
  c->r[0]=c->r[0]-c->r[3]; // 801DFF90
  c->r[3]=c->r[5]+c->r[0]; // 801DFF94
  c->r[0]=R8(c->r[5]+c->r[0]); // 801DFF98
  cmpu(c,0,c->r[26],c->r[0]); // 801DFF9C
  if (!crb(c,2)) { goto L_801DFFB8; } // 801DFFA0
  c->r[0]=R8(c->r[3]+0x00000001u); // 801DFFA4
  cmpu(c,0,c->r[0],0x000000FFu); // 801DFFA8
  if (crb(c,2)) { goto L_801DFFC8; } // 801DFFAC
  cmpu(c,0,c->r[27],c->r[0]); // 801DFFB0
  if (crb(c,2)) { goto L_801DFFC8; } // 801DFFB4
L_801DFFB8:;
  c->r[30]=c->r[30]+0x00000001u; // 801DFFB8
L_801DFFBC:;
  c->r[0]=rotl(c->r[30],0)&0x000000FFu; // 801DFFBC
  cmpu(c,0,c->r[0],c->r[4]); // 801DFFC0
  if (!crb(c,1)) { IRQCHK(c); goto L_801DFF88; } // 801DFFC4
L_801DFFC8:;
  c->r[0]=R8(c->r[5]+0x00000001u); // 801DFFC8
  c->r[3]=rotl(c->r[30],0)&0x000000FFu; // 801DFFCC
  cmpu(c,0,c->r[3],c->r[0]); // 801DFFD0
  if (crb(c,1)) { goto L_801E0244; } // 801DFFD4
  c->r[23]=0u+0x80310000u; // 801DFFD8
  c->r[31]=0u+0x00000000u; // 801DFFDC
  c->r[23]=c->r[23]+0xFFFF84B4u; // 801DFFE0
L_801DFFE4:;
  c->r[29]=rotl(c->r[31],5)&0x00001FE0u; // 801DFFE4
  c->r[24]=c->r[23]+c->r[29]; // 801DFFE8
  c->r[0]=R8(c->r[24]+0x000000B6u); // 801DFFEC
  cmps(c,0,(int32_t)c->r[0],0); // 801DFFF0
  if (crb(c,2)) { goto L_801E0024; } // 801DFFF4
  c->r[4]=c->r[28]|c->r[28]; // 801DFFF8
  c->r[3]=c->r[24]+0x000000B0u; // 801DFFFC
  c->lr=0x801E0004u; f_801DCDF8(c); // 801E0000
  cmps(c,0,(int32_t)c->r[3],0); // 801E0004
  if (!crb(c,2)) { goto L_801E0024; } // 801E0008
  c->r[3]=c->r[24]|c->r[24]; // 801E000C
  c->r[3]=c->r[3]+0x00000098u; // 801E0010
  c->lr=0x801E0018u; f_801DD2AC(c); // 801E0014
  c->r[0]=0u+0x00000000u; // 801E0018
  W8(c->r[24]+0x000000B6u,c->r[0]); // 801E001C
  goto L_801E0030; // 801E0020
L_801E0024:;
  c->r[31]=c->r[31]+0x00000001u; // 801E0024
  cmpu(c,0,c->r[31],0x00000003u); // 801E0028
  if (crb(c,0)) { IRQCHK(c); goto L_801DFFE4; } // 801E002C
L_801E0030:;
  c->r[4]=rotl(c->r[30],0)&0x000000FFu; // 801E0030
  c->r[3]=rotl(c->r[30],2)&0x000003FCu; // 801E0034
  c->r[30]=c->r[3]-c->r[4]; // 801E0038
  c->r[0]=R32(c->r[13]+0xFFFFAB80u); // 801E003C
  c->r[4]=R32(c->r[13]+0xFFFFAB84u); // 801E0040
  c->r[31]=rotl(c->r[25],3)&0x000007F8u; // 801E0044
  c->r[3]=c->r[0]+c->r[30]; // 801E0048
  c->r[0]=R8(c->r[3]+0x00000002u); // 801E004C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)74); // 801E0050
  c->r[0]=c->r[4]+c->r[0]; // 801E0054
  c->r[3]=c->r[0]+c->r[31]; // 801E0058
  c->r[0]=R8(c->r[3]+0x00000002u); // 801E005C
  cmps(c,0,(int32_t)c->r[0],0); // 801E0060
  if (crb(c,2)) { goto L_801E0244; } // 801E0064
  c->r[23]=0u+0x80310000u; // 801E0068
  c->r[29]=0u+0x00000000u; // 801E006C
  c->r[24]=c->r[23]+0xFFFF85B8u; // 801E0070
  goto L_801E00B8; // 801E0074
L_801E0078:;
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 801E0078
  c->r[0]=rotl(c->r[29],3)&0x000007F8u; // 801E007C
  c->r[0]=c->r[0]+c->r[3]; // 801E0080
  c->r[3]=c->r[24]+c->r[0]; // 801E0084
  c->r[0]=R8(c->r[3]+0x00000007u); // 801E0088
  cmpu(c,0,c->r[26],c->r[0]); // 801E008C
  if (!crb(c,2)) { goto L_801E00B4; } // 801E0090
  c->r[0]=R8(c->r[3]+0x00000008u); // 801E0094
  cmpu(c,0,c->r[27],c->r[0]); // 801E0098
  if (!crb(c,2)) { goto L_801E00B4; } // 801E009C
  c->r[4]=c->r[28]|c->r[28]; // 801E00A0
  c->r[3]=c->r[3]+0x00000001u; // 801E00A4
  c->lr=0x801E00ACu; f_801DCDF8(c); // 801E00A8
  cmps(c,0,(int32_t)c->r[3],0); // 801E00AC
  if (crb(c,2)) { goto L_801E00C8; } // 801E00B0
L_801E00B4:;
  c->r[29]=c->r[29]+0x00000001u; // 801E00B4
L_801E00B8:;
  c->r[0]=R8(c->r[23]+0xFFFF85B8u); // 801E00B8
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 801E00BC
  cmpu(c,0,c->r[3],c->r[0]); // 801E00C0
  if (crb(c,0)) { IRQCHK(c); goto L_801E0078; } // 801E00C4
L_801E00C8:;
  c->r[0]=R32(c->r[13]+0xFFFFAB80u); // 801E00C8
  c->r[4]=R32(c->r[13]+0xFFFFAB84u); // 801E00CC
  c->r[3]=c->r[0]+c->r[30]; // 801E00D0
  c->r[0]=R8(c->r[3]+0x00000002u); // 801E00D4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)74); // 801E00D8
  c->r[0]=c->r[4]+c->r[0]; // 801E00DC
  c->r[3]=c->r[0]+c->r[31]; // 801E00E0
  c->r[0]=R8(c->r[3]+0x00000002u); // 801E00E4
  cmpu(c,0,c->r[0],0x00000010u); // 801E00E8
  if (!crb(c,2)) { goto L_801E015C; } // 801E00EC
  c->r[27]=0u+0x80310000u; // 801E00F0
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 801E00F4
  c->r[0]=R8(c->r[27]+0xFFFF85B8u); // 801E00F8
  cmpu(c,0,c->r[3],c->r[0]); // 801E00FC
  if (crb(c,2)) { goto L_801E01C8; } // 801E0100
  c->r[26]=c->r[27]+0xFFFF85B8u; // 801E0104
  goto L_801E0140; // 801E0108
L_801E010C:;
  c->r[6]=rotl(c->r[29],0)&0x000000FFu; // 801E010C
  c->r[4]=rotl(c->r[29],3)&0x000007F8u; // 801E0110
  c->r[3]=c->r[6]+0x00000001u; // 801E0114
  c->r[5]=0u+0x00000009u; // 801E0118
  c->r[0]=rotl(c->r[3],3)&0xFFFFFFF8u; // 801E011C
  c->r[4]=c->r[4]+c->r[6]; // 801E0120
  c->r[0]=c->r[0]+c->r[3]; // 801E0124
  c->r[3]=c->r[26]+c->r[4]; // 801E0128
  c->r[4]=c->r[26]+c->r[0]; // 801E012C
  c->r[3]=c->r[3]+0x00000001u; // 801E0130
  c->r[4]=c->r[4]+0x00000001u; // 801E0134
  c->lr=0x801E013Cu; f_80004364(c); // 801E0138
  c->r[29]=c->r[29]+0x00000001u; // 801E013C
L_801E0140:;
  c->r[3]=R8(c->r[27]+0xFFFF85B8u); // 801E0140
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 801E0144
  cmpu(c,0,c->r[0],c->r[3]); // 801E0148
  if (crb(c,0)) { IRQCHK(c); goto L_801E010C; } // 801E014C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801E0150
  W8(c->r[27]+0xFFFF85B8u,c->r[0]); // 801E0154
  goto L_801E01C8; // 801E0158
L_801E015C:;
  c->r[30]=0u+0x80310000u; // 801E015C
  c->r[4]=rotl(c->r[29],0)&0x000000FFu; // 801E0160
  c->r[0]=R8(c->r[30]+0xFFFF85B8u); // 801E0164
  cmpu(c,0,c->r[4],c->r[0]); // 801E0168
  if (!crb(c,2)) { goto L_801E01C8; } // 801E016C
  cmpu(c,0,c->r[0],0x00000005u); // 801E0170
  if (!crb(c,2)) { goto L_801E0198; } // 801E0174
  c->r[0]=R8(c->r[13]+0xFFFFB6D0u); // 801E0178
  cmpu(c,0,c->r[0],0x00000002u); // 801E017C
  if (crb(c,0)) { goto L_801E0244; } // 801E0180
  c->r[4]=0u+0x80280000u; // 801E0184
  c->r[3]=0u+0x00000501u; // 801E0188
  c->r[4]=c->r[4]+0xFFFFE280u; // 801E018C
  c->lr=0x801E0194u; f_801DC730(c); // 801E0190
  goto L_801E0244; // 801E0194
L_801E0198:;
  c->r[3]=rotl(c->r[29],3)&0x000007F8u; // 801E0198
  c->r[0]=c->r[30]+0xFFFF85B8u; // 801E019C
  c->r[3]=c->r[3]+c->r[4]; // 801E01A0
  c->r[4]=c->r[28]|c->r[28]; // 801E01A4
  c->r[5]=c->r[0]+c->r[3]; // 801E01A8
  W8(c->r[5]+0x00000007u,c->r[26]); // 801E01AC
  c->r[3]=c->r[5]+0x00000001u; // 801E01B0
  W8(c->r[5]+0x00000008u,c->r[27]); // 801E01B4
  c->lr=0x801E01BCu; f_801DCDC4(c); // 801E01B8
  c->r[3]=R8(c->r[30]+0xFFFF85B8u); // 801E01BC
  c->r[0]=c->r[3]+0x00000001u; // 801E01C0
  W8(c->r[30]+0xFFFF85B8u,c->r[0]); // 801E01C4
L_801E01C8:;
  c->r[3]=0u+0x80310000u; // 801E01C8
  c->r[24]=0u+0x00000000u; // 801E01CC
  c->r[26]=c->r[3]+0xFFFF84B4u; // 801E01D0
  goto L_801E020C; // 801E01D4
L_801E01D8:;
  c->r[0]=rotl(c->r[24],0)&0x000000FFu; // 801E01D8
  c->r[4]=c->r[28]|c->r[28]; // 801E01DC
  c->r[23]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 801E01E0
  c->r[3]=c->r[26]+c->r[23]; // 801E01E4
  c->lr=0x801E01ECu; f_801DCDF8(c); // 801E01E8
  cmps(c,0,(int32_t)c->r[3],0); // 801E01EC
  if (!crb(c,2)) { goto L_801E0208; } // 801E01F0
  c->r[3]=c->r[26]+c->r[23]; // 801E01F4
  c->r[0]=0u+0x00000000u; // 801E01F8
  W8(c->r[3]+0x00000009u,c->r[0]); // 801E01FC
  W8(c->r[3]+0x0000000Au,c->r[0]); // 801E0200
  goto L_801E021C; // 801E0204
L_801E0208:;
  c->r[24]=c->r[24]+0x00000001u; // 801E0208
L_801E020C:;
  c->r[0]=R8(c->r[26]+0x0000004Du); // 801E020C
  c->r[3]=rotl(c->r[24],0)&0x000000FFu; // 801E0210
  cmpu(c,0,c->r[3],c->r[0]); // 801E0214
  if (crb(c,0)) { IRQCHK(c); goto L_801E01D8; } // 801E0218
L_801E021C:;
  c->r[6]=0u+0x80310000u; // 801E021C
  c->r[5]=rotl(c->r[29],0)&0x000000FFu; // 801E0220
  c->r[0]=rotl(c->r[29],3)&0x000007F8u; // 801E0224
  c->r[3]=c->r[28]|c->r[28]; // 801E0228
  c->r[6]=c->r[6]+0xFFFF85B8u; // 801E022C
  c->r[4]=0u+0x00000000u; // 801E0230
  c->r[0]=c->r[0]+c->r[5]; // 801E0234
  c->r[5]=c->r[6]+c->r[0]; // 801E0238
  W8(c->r[5]+0x00000009u,c->r[25]); // 801E023C
  c->lr=0x801E0244u; f_801E025C(c); // 801E0240
L_801E0244:;
  c->r[11]=c->r[1]+0x00000040u; // 801E0244
  c->lr=0x801E024Cu; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E0248
  c->r[0]=R32(c->r[1]+0x00000044u); // 801E024C
  c->lr=c->r[0]; // 801E0250
  c->r[1]=c->r[1]+0x00000040u; // 801E0254
  return; // 801E0258
}

// bta_dm_pm_set_mode
void f_801E025C(Ctx* __restrict c) {
  trace_call(0x801E025Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E025C
  c->r[0]=c->lr; // 801E0260
  W32(c->r[1]+0x00000054u,c->r[0]); // 801E0264
  c->r[11]=c->r[1]+0x00000050u; // 801E0268
  c->lr=0x801E0270u; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E026C
  c->r[5]=0u+0x80310000u; // 801E0270
  c->r[20]=c->r[3]|c->r[3]; // 801E0274
  c->r[28]=c->r[5]+0xFFFF84B4u; // 801E0278
  c->r[21]=c->r[4]|c->r[4]; // 801E027C
  c->r[0]=R8(c->r[28]+0x0000004Du); // 801E0280
  c->r[27]=0u+0x00000000u; // 801E0284
  c->r[26]=0u+0x00000000u; // 801E0288
  c->r[25]=0u+0x00000000u; // 801E028C
  cmps(c,0,(int32_t)c->r[0],0); // 801E0290
  c->r[24]=0u+0x00000000u; // 801E0294
  c->r[23]=0u+0x00000000u; // 801E0298
  c->r[22]=0u+0x00000000u; // 801E029C
  if (crb(c,2)) { goto L_801E05C4; } // 801E02A0
  c->r[30]=0u+0x00000000u; // 801E02A4
  goto L_801E02D8; // 801E02A8
L_801E02AC:;
  c->r[0]=rotl(c->r[30],0)&0x000000FFu; // 801E02AC
  c->r[4]=c->r[20]|c->r[20]; // 801E02B0
  c->r[29]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 801E02B4
  c->r[3]=c->r[28]+c->r[29]; // 801E02B8
  c->lr=0x801E02C0u; f_801DCDF8(c); // 801E02BC
  cmps(c,0,(int32_t)c->r[3],0); // 801E02C0
  if (!crb(c,2)) { goto L_801E02D4; } // 801E02C4
  c->r[24]=c->r[28]+c->r[29]; // 801E02C8
  c->r[25]=R8(c->r[24]+0x0000000Au); // 801E02CC
  goto L_801E02E8; // 801E02D0
L_801E02D4:;
  c->r[30]=c->r[30]+0x00000001u; // 801E02D4
L_801E02D8:;
  c->r[0]=R8(c->r[28]+0x0000004Du); // 801E02D8
  c->r[3]=rotl(c->r[30],0)&0x000000FFu; // 801E02DC
  cmpu(c,0,c->r[3],c->r[0]); // 801E02E0
  if (crb(c,0)) { IRQCHK(c); goto L_801E02AC; } // 801E02E4
L_801E02E8:;
  cmps(c,0,(int32_t)c->r[24],0); // 801E02E8
  if (crb(c,2)) { goto L_801E05C4; } // 801E02EC
  c->r[30]=0u+0x80310000u; // 801E02F0
  c->r[28]=0u+0x00000000u; // 801E02F4
  c->r[31]=c->r[30]+0xFFFF85B8u; // 801E02F8
  goto L_801E042C; // 801E02FC
L_801E0300:;
  c->r[3]=rotl(c->r[28],0)&0x000000FFu; // 801E0300
  c->r[0]=rotl(c->r[28],3)&0x000007F8u; // 801E0304
  c->r[29]=c->r[0]+c->r[3]; // 801E0308
  c->r[4]=c->r[20]|c->r[20]; // 801E030C
  c->r[3]=c->r[31]+c->r[29]; // 801E0310
  c->r[3]=c->r[3]+0x00000001u; // 801E0314
  c->lr=0x801E031Cu; f_801DCDF8(c); // 801E0318
  cmps(c,0,(int32_t)c->r[3],0); // 801E031C
  if (!crb(c,2)) { goto L_801E0428; } // 801E0320
  c->r[7]=R32(c->r[13]+0xFFFFAB80u); // 801E0324
  c->r[8]=c->r[31]+c->r[29]; // 801E0328
  c->r[3]=R8(c->r[8]+0x00000008u); // 801E032C
  c->r[9]=0u+0x00000001u; // 801E0330
  c->r[6]=R8(c->r[7]+0x00000001u); // 801E0334
  c->r[4]=R8(c->r[8]+0x00000007u); // 801E0338
  goto L_801E0374; // 801E033C
L_801E0340:;
  c->r[5]=rotl(c->r[9],0)&0x000000FFu; // 801E0340
  c->r[0]=rotl(c->r[9],2)&0x000003FCu; // 801E0344
  c->r[0]=c->r[0]-c->r[5]; // 801E0348
  c->r[5]=c->r[7]+c->r[0]; // 801E034C
  c->r[0]=R8(c->r[7]+c->r[0]); // 801E0350
  cmpu(c,0,c->r[0],c->r[4]); // 801E0354
  if (!crb(c,2)) { goto L_801E0370; } // 801E0358
  c->r[0]=R8(c->r[5]+0x00000001u); // 801E035C
  cmpu(c,0,c->r[0],0x000000FFu); // 801E0360
  if (crb(c,2)) { goto L_801E0380; } // 801E0364
  cmpu(c,0,c->r[0],c->r[3]); // 801E0368
  if (crb(c,2)) { goto L_801E0380; } // 801E036C
L_801E0370:;
  c->r[9]=c->r[9]+0x00000001u; // 801E0370
L_801E0374:;
  c->r[0]=rotl(c->r[9],0)&0x000000FFu; // 801E0374
  cmpu(c,0,c->r[0],c->r[6]); // 801E0378
  if (!crb(c,1)) { IRQCHK(c); goto L_801E0340; } // 801E037C
L_801E0380:;
  c->r[3]=rotl(c->r[9],0)&0x000000FFu; // 801E0380
  c->r[0]=rotl(c->r[9],2)&0x000003FCu; // 801E0384
  c->r[3]=c->r[0]-c->r[3]; // 801E0388
  c->r[0]=R8(c->r[8]+0x00000009u); // 801E038C
  c->r[4]=c->r[7]+c->r[3]; // 801E0390
  c->r[3]=R32(c->r[13]+0xFFFFAB84u); // 801E0394
  c->r[4]=R8(c->r[4]+0x00000002u); // 801E0398
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801E039C
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)74); // 801E03A0
  c->r[5]=c->r[3]+c->r[4]; // 801E03A4
  c->r[3]=c->r[5]+c->r[0]; // 801E03A8
  c->r[0]=R8(c->r[5]+0x00000000u); // 801E03AC
  c->r[4]=R8(c->r[3]+0x00000002u); // 801E03B0
  c->r[23]=c->r[23]|c->r[0]; // 801E03B4
  c->r[0]=c->r[25]&c->r[4]; cr0(c,c->r[0]); // 801E03B8
  if (!crb(c,2)) { goto L_801E03F0; } // 801E03BC
  c->r[3]=c->r[31]+c->r[29]; // 801E03C0
  c->r[0]=rotl(c->r[27],0)&0x000000FFu; // 801E03C4
  c->r[3]=R8(c->r[3]+0x00000009u); // 801E03C8
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 801E03CC
  c->r[5]=c->r[5]+c->r[3]; // 801E03D0
  c->r[3]=R8(c->r[5]+0x00000002u); // 801E03D4
  cmpu(c,0,c->r[3],c->r[0]); // 801E03D8
  c->r[22]=c->r[22]|c->r[3]; // 801E03DC
  if (!crb(c,1)) { goto L_801E0428; } // 801E03E0
  c->r[26]=R16(c->r[5]+0x00000004u); // 801E03E4
  c->r[27]=c->r[4]|c->r[4]; // 801E03E8
  goto L_801E0428; // 801E03EC
L_801E03F0:;
  c->r[3]=R8(c->r[3]+0x00000006u); // 801E03F0
  c->r[0]=c->r[25]&c->r[3]; cr0(c,c->r[0]); // 801E03F4
  if (!crb(c,2)) { goto L_801E0428; } // 801E03F8
  c->r[4]=c->r[31]+c->r[29]; // 801E03FC
  c->r[0]=rotl(c->r[27],0)&0x000000FFu; // 801E0400
  c->r[4]=R8(c->r[4]+0x00000009u); // 801E0404
  c->r[4]=rotl(c->r[4],3)&0xFFFFFFF8u; // 801E0408
  c->r[5]=c->r[5]+c->r[4]; // 801E040C
  c->r[4]=R8(c->r[5]+0x00000006u); // 801E0410
  cmpu(c,0,c->r[4],c->r[0]); // 801E0414
  c->r[22]=c->r[22]|c->r[4]; // 801E0418
  if (!crb(c,1)) { goto L_801E0428; } // 801E041C
  c->r[27]=c->r[3]|c->r[3]; // 801E0420
  c->r[26]=R16(c->r[5]+0x00000008u); // 801E0424
L_801E0428:;
  c->r[28]=c->r[28]+0x00000001u; // 801E0428
L_801E042C:;
  c->r[0]=R8(c->r[30]+0xFFFF85B8u); // 801E042C
  c->r[3]=rotl(c->r[28],0)&0x000000FFu; // 801E0430
  cmpu(c,0,c->r[3],c->r[0]); // 801E0434
  if (crb(c,0)) { IRQCHK(c); goto L_801E0300; } // 801E0438
  c->r[0]=rotl(c->r[27],0)&0x00000003u; cr0(c,c->r[0]); // 801E043C
  if (crb(c,2)) { goto L_801E0464; } // 801E0440
  c->r[3]=rotl(c->r[23],0)&0x000000FFu; // 801E0444
  c->r[0]=rotl(c->r[27],0)&0x000000FFu; // 801E0448
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 801E044C
  if (!crb(c,2)) { goto L_801E0464; } // 801E0450
  c->r[0]=c->r[23]&c->r[22]; // 801E0454
  c->r[27]=rotl(c->r[0],0)&0x00000003u; cr0(c,c->r[27]); // 801E0458
  if (!crb(c,2)) { goto L_801E0464; } // 801E045C
  c->r[26]=0u+0x00000000u; // 801E0460
L_801E0464:;
  cmps(c,0,(int32_t)c->r[21],0); // 801E0464
  if (!crb(c,2)) { goto L_801E0508; } // 801E0468
  cmps(c,0,(int32_t)c->r[26],0); // 801E046C
  if (crb(c,2)) { goto L_801E0508; } // 801E0470
  c->r[21]=0u+0x80310000u; // 801E0474
  c->r[0]=0u+0x00000003u; // 801E0478
  c->r[21]=c->r[21]+0xFFFF84B4u; // 801E047C
  c->r[4]=0u+0x00000000u; // 801E0480
  c->ctr=c->r[0]; // 801E0484
L_801E0488:;
  c->r[22]=rotl(c->r[4],5)&0x00001FE0u; // 801E0488
  c->r[3]=c->r[21]+c->r[22]; // 801E048C
  c->r[0]=R8(c->r[3]+0x000000B6u); // 801E0490
  cmps(c,0,(int32_t)c->r[0],0); // 801E0494
  if (!crb(c,2)) { goto L_801E04D4; } // 801E0498
  c->r[0]=0u+0x00000001u; // 801E049C
  c->r[4]=c->r[20]|c->r[20]; // 801E04A0
  W8(c->r[3]+0x000000B6u,c->r[0]); // 801E04A4
  c->r[3]=c->r[3]+0x000000B0u; // 801E04A8
  c->lr=0x801E04B0u; f_801DCDC4(c); // 801E04AC
  c->r[4]=0u+0x801E0000u; // 801E04B0
  c->r[3]=c->r[21]+c->r[22]; // 801E04B4
  c->r[4]=c->r[4]+0x00000654u; // 801E04B8
  c->r[5]=c->r[26]|c->r[26]; // 801E04BC
  W32(c->r[3]+0x000000A0u,c->r[4]); // 801E04C0
  c->r[3]=c->r[3]+0x00000098u; // 801E04C4
  c->r[4]=0u+0x00000000u; // 801E04C8
  c->lr=0x801E04D0u; f_801DD28C(c); // 801E04CC
  goto L_801E05C4; // 801E04D0
L_801E04D4:;
  c->r[4]=c->r[4]+0x00000001u; // 801E04D4
  c->r[0]=rotl(c->r[4],0)&0x000000FFu; // 801E04D8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E0488; } // 801E04DC
  cmpu(c,0,c->r[0],0x00000003u); // 801E04E0
  if (!crb(c,2)) { goto L_801E0508; } // 801E04E4
  c->r[0]=R8(c->r[13]+0xFFFFB6D0u); // 801E04E8
  cmpu(c,0,c->r[0],0x00000002u); // 801E04EC
  if (crb(c,0)) { goto L_801E05C4; } // 801E04F0
  c->r[4]=0u+0x80280000u; // 801E04F4
  c->r[3]=0u+0x00000501u; // 801E04F8
  c->r[4]=c->r[4]+0xFFFFE2ACu; // 801E04FC
  c->lr=0x801E0504u; f_801DC730(c); // 801E0500
  goto L_801E05C4; // 801E0504
L_801E0508:;
  c->r[0]=rotl(c->r[27],0)&0x000000FFu; cr0(c,c->r[0]); // 801E0508
  if (crb(c,2)) { goto L_801E05C4; } // 801E050C
  cmpu(c,0,c->r[0],0x00000001u); // 801E0510
  if (!crb(c,2)) { goto L_801E0558; } // 801E0514
  c->r[0]=0u+0x00000001u; // 801E0518
  c->r[3]=c->r[20]|c->r[20]; // 801E051C
  W8(c->r[24]+0x00000009u,c->r[0]); // 801E0520
  c->r[4]=c->r[1]+0x00000009u; // 801E0524
  c->lr=0x801E052Cu; f_801E88DC(c); // 801E0528
  c->r[0]=R8(c->r[1]+0x00000009u); // 801E052C
  cmpu(c,0,c->r[0],0x00000003u); // 801E0530
  if (crb(c,2)) { goto L_801E05C4; } // 801E0534
  c->r[3]=0u+0x80310000u; // 801E0538
  c->r[5]=R32(c->r[13]+0xFFFFAB88u); // 801E053C
  c->r[3]=c->r[3]+0xFFFF84B4u; // 801E0540
  c->r[4]=c->r[20]|c->r[20]; // 801E0544
  c->r[3]=R8(c->r[3]+0x00000095u); // 801E0548
  c->r[5]=c->r[5]+0x0000000Au; // 801E054C
  c->lr=0x801E0554u; f_801E870C(c); // 801E0550
  goto L_801E05C4; // 801E0554
L_801E0558:;
  cmpu(c,0,c->r[0],0x00000002u); // 801E0558
  if (!crb(c,2)) { goto L_801E059C; } // 801E055C
  c->r[0]=0u+0x00000002u; // 801E0560
  c->r[3]=c->r[20]|c->r[20]; // 801E0564
  W8(c->r[24]+0x00000009u,c->r[0]); // 801E0568
  c->r[4]=c->r[1]+0x00000008u; // 801E056C
  c->lr=0x801E0574u; f_801E88DC(c); // 801E0570
  c->r[0]=R8(c->r[1]+0x00000008u); // 801E0574
  cmpu(c,0,c->r[0],0x00000002u); // 801E0578
  if (crb(c,2)) { goto L_801E05C4; } // 801E057C
  c->r[3]=0u+0x80310000u; // 801E0580
  c->r[5]=R32(c->r[13]+0xFFFFAB88u); // 801E0584
  c->r[3]=c->r[3]+0xFFFF84B4u; // 801E0588
  c->r[4]=c->r[20]|c->r[20]; // 801E058C
  c->r[3]=R8(c->r[3]+0x00000095u); // 801E0590
  c->lr=0x801E0598u; f_801E870C(c); // 801E0594
  goto L_801E05C4; // 801E0598
L_801E059C:;
  cmpu(c,0,c->r[0],0x00000004u); // 801E059C
  if (!crb(c,2)) { goto L_801E05C4; } // 801E05A0
  c->r[3]=0u+0x80310000u; // 801E05A4
  c->r[0]=0u+0x00000000u; // 801E05A8
  c->r[3]=c->r[3]+0xFFFF84B4u; // 801E05AC
  W8(c->r[1]+0x00000014u,c->r[0]); // 801E05B0
  c->r[3]=R8(c->r[3]+0x00000095u); // 801E05B4
  c->r[4]=c->r[20]|c->r[20]; // 801E05B8
  c->r[5]=c->r[1]+0x0000000Cu; // 801E05BC
  c->lr=0x801E05C4u; f_801E870C(c); // 801E05C0
L_801E05C4:;
  c->r[11]=c->r[1]+0x00000050u; // 801E05C4
  c->lr=0x801E05CCu; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E05C8
  c->r[0]=R32(c->r[1]+0x00000054u); // 801E05CC
  c->lr=c->r[0]; // 801E05D0
  c->r[1]=c->r[1]+0x00000050u; // 801E05D4
  return; // 801E05D8
}

// bta_dm_pm_btm_cback
void f_801E05DC(Ctx* __restrict c) {
  trace_call(0x801E05DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E05DC
  c->r[0]=c->lr; // 801E05E0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E05E4
  c->r[11]=c->r[1]+0x00000020u; // 801E05E8
  c->lr=0x801E05F0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E05EC
  c->r[27]=c->r[3]|c->r[3]; // 801E05F0
  c->r[28]=c->r[4]|c->r[4]; // 801E05F4
  c->r[29]=c->r[5]|c->r[5]; // 801E05F8
  c->r[30]=c->r[6]|c->r[6]; // 801E05FC
  c->r[3]=0u+0x00000014u; // 801E0600
  c->lr=0x801E0608u; f_801D99E0(c); // 801E0604
  cmps(c,0,(int32_t)c->r[3],0); // 801E0608
  c->r[31]=c->r[3]|c->r[3]; // 801E060C
  if (crb(c,2)) { goto L_801E063C; } // 801E0610
  c->r[0]=0u+0x00000109u; // 801E0614
  c->r[4]=c->r[27]|c->r[27]; // 801E0618
  W16(c->r[3]+0x00000000u,c->r[0]); // 801E061C
  W8(c->r[3]+0x0000000Eu,c->r[28]); // 801E0620
  W16(c->r[3]+0x00000010u,c->r[29]); // 801E0624
  W8(c->r[3]+0x00000012u,c->r[30]); // 801E0628
  c->r[3]=c->r[3]+0x00000008u; // 801E062C
  c->lr=0x801E0634u; f_801DCDC4(c); // 801E0630
  c->r[3]=c->r[31]|c->r[31]; // 801E0634
  c->lr=0x801E063Cu; f_801DD270(c); // 801E0638
L_801E063C:;
  c->r[11]=c->r[1]+0x00000020u; // 801E063C
  c->lr=0x801E0644u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E0640
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E0644
  c->lr=c->r[0]; // 801E0648
  c->r[1]=c->r[1]+0x00000020u; // 801E064C
  return; // 801E0650
}

// bta_dm_pm_timer_cback
void f_801E0654(Ctx* __restrict c) {
  trace_call(0x801E0654u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E0654
  c->r[0]=c->lr; // 801E0658
  c->r[4]=0u+0x80310000u; // 801E065C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E0660
  c->r[4]=c->r[4]+0xFFFF84B4u; // 801E0664
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E0668
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E066C
  c->r[30]=0u+0x00000000u; // 801E0670
  c->r[0]=R8(c->r[4]+0x000000B6u); // 801E0674
  cmps(c,0,(int32_t)c->r[0],0); // 801E0678
  if (crb(c,2)) { goto L_801E0698; } // 801E067C
  c->r[0]=c->r[4]+0x00000098u; // 801E0680
  cmpu(c,0,c->r[0],c->r[3]); // 801E0684
  if (!crb(c,2)) { goto L_801E0698; } // 801E0688
  c->r[0]=0u+0x00000000u; // 801E068C
  W8(c->r[4]+0x000000B6u,c->r[0]); // 801E0690
  goto L_801E06EC; // 801E0694
L_801E0698:;
  c->r[0]=R8(c->r[4]+0x000000D6u); // 801E0698
  c->r[30]=0u+0x00000001u; // 801E069C
  cmps(c,0,(int32_t)c->r[0],0); // 801E06A0
  if (crb(c,2)) { goto L_801E06C0; } // 801E06A4
  c->r[0]=c->r[4]+0x000000B8u; // 801E06A8
  cmpu(c,0,c->r[0],c->r[3]); // 801E06AC
  if (!crb(c,2)) { goto L_801E06C0; } // 801E06B0
  c->r[0]=0u+0x00000000u; // 801E06B4
  W8(c->r[4]+0x000000D6u,c->r[0]); // 801E06B8
  goto L_801E06EC; // 801E06BC
L_801E06C0:;
  c->r[0]=R8(c->r[4]+0x000000F6u); // 801E06C0
  c->r[30]=0u+0x00000002u; // 801E06C4
  cmps(c,0,(int32_t)c->r[0],0); // 801E06C8
  if (crb(c,2)) { goto L_801E06E8; } // 801E06CC
  c->r[0]=c->r[4]+0x000000D8u; // 801E06D0
  cmpu(c,0,c->r[0],c->r[3]); // 801E06D4
  if (!crb(c,2)) { goto L_801E06E8; } // 801E06D8
  c->r[0]=0u+0x00000000u; // 801E06DC
  W8(c->r[4]+0x000000F6u,c->r[0]); // 801E06E0
  goto L_801E06EC; // 801E06E4
L_801E06E8:;
  c->r[30]=0u+0x00000003u; // 801E06E8
L_801E06EC:;
  cmpu(c,0,c->r[30],0x00000003u); // 801E06EC
  if (crb(c,2)) { goto L_801E0734; } // 801E06F0
  c->r[3]=0u+0x0000000Eu; // 801E06F4
  c->lr=0x801E06FCu; f_801D99E0(c); // 801E06F8
  cmps(c,0,(int32_t)c->r[3],0); // 801E06FC
  c->r[31]=c->r[3]|c->r[3]; // 801E0700
  if (crb(c,2)) { goto L_801E0734; } // 801E0704
  c->r[4]=0u+0x80310000u; // 801E0708
  c->r[5]=0u+0x0000010Au; // 801E070C
  c->r[4]=c->r[4]+0xFFFF84B4u; // 801E0710
  c->r[0]=rotl(c->r[30],5)&0x00001FE0u; // 801E0714
  W16(c->r[3]+0x00000000u,c->r[5]); // 801E0718
  c->r[4]=c->r[4]+c->r[0]; // 801E071C
  c->r[4]=c->r[4]+0x000000B0u; // 801E0720
  c->r[3]=c->r[3]+0x00000008u; // 801E0724
  c->lr=0x801E072Cu; f_801DCDC4(c); // 801E0728
  c->r[3]=c->r[31]|c->r[31]; // 801E072C
  c->lr=0x801E0734u; f_801DD270(c); // 801E0730
L_801E0734:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E0734
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E0738
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E073C
  c->lr=c->r[0]; // 801E0740
  c->r[1]=c->r[1]+0x00000010u; // 801E0744
  return; // 801E0748
}

// bta_dm_pm_btm_status
void f_801E074C(Ctx* __restrict c) {
  trace_call(0x801E074Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E074C
  c->r[0]=c->lr; // 801E0750
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E0754
  c->r[11]=c->r[1]+0x00000020u; // 801E0758
  c->lr=0x801E0760u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E075C
  c->r[30]=0u+0x80310000u; // 801E0760
  c->r[31]=c->r[3]|c->r[3]; // 801E0764
  c->r[30]=c->r[30]+0xFFFF84B4u; // 801E0768
  c->r[27]=0u+0x00000000u; // 801E076C
L_801E0770:;
  c->r[28]=rotl(c->r[27],5)&0x00001FE0u; // 801E0770
  c->r[29]=c->r[30]+c->r[28]; // 801E0774
  c->r[0]=R8(c->r[29]+0x000000B6u); // 801E0778
  cmps(c,0,(int32_t)c->r[0],0); // 801E077C
  if (crb(c,2)) { goto L_801E07B0; } // 801E0780
  c->r[3]=c->r[29]+0x000000B0u; // 801E0784
  c->r[4]=c->r[31]+0x00000008u; // 801E0788
  c->lr=0x801E0790u; f_801DCDF8(c); // 801E078C
  cmps(c,0,(int32_t)c->r[3],0); // 801E0790
  if (!crb(c,2)) { goto L_801E07B0; } // 801E0794
  c->r[3]=c->r[29]|c->r[29]; // 801E0798
  c->r[3]=c->r[3]+0x00000098u; // 801E079C
  c->lr=0x801E07A4u; f_801DD2AC(c); // 801E07A0
  c->r[0]=0u+0x00000000u; // 801E07A4
  W8(c->r[29]+0x000000B6u,c->r[0]); // 801E07A8
  goto L_801E07BC; // 801E07AC
L_801E07B0:;
  c->r[27]=c->r[27]+0x00000001u; // 801E07B0
  cmpu(c,0,c->r[27],0x00000003u); // 801E07B4
  if (crb(c,0)) { IRQCHK(c); goto L_801E0770; } // 801E07B8
L_801E07BC:;
  c->r[0]=R8(c->r[31]+0x0000000Eu); // 801E07BC
  cmps(c,0,(int32_t)c->r[0],0); // 801E07C0
  if (crb(c,2)) { goto L_801E07CC; } // 801E07C4
  goto L_801E0854; // 801E07C8
L_801E07CC:;
  c->r[0]=R8(c->r[31]+0x00000012u); // 801E07CC
  cmps(c,0,(int32_t)c->r[0],0); // 801E07D0
  if (crb(c,2)) { goto L_801E0848; } // 801E07D4
  c->r[3]=0u+0x80310000u; // 801E07D8
  c->r[29]=0u+0x00000000u; // 801E07DC
  c->r[30]=c->r[3]+0xFFFF84B4u; // 801E07E0
  goto L_801E0834; // 801E07E4
L_801E07E8:;
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 801E07E8
  c->r[4]=c->r[31]+0x00000008u; // 801E07EC
  c->r[28]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 801E07F0
  c->r[3]=c->r[30]+c->r[28]; // 801E07F4
  c->lr=0x801E07FCu; f_801DCDF8(c); // 801E07F8
  cmps(c,0,(int32_t)c->r[3],0); // 801E07FC
  if (!crb(c,2)) { goto L_801E0830; } // 801E0800
  c->r[5]=c->r[30]+c->r[28]; // 801E0804
  c->r[0]=R8(c->r[5]+0x00000009u); // 801E0808
  c->r[6]=rotl(c->r[0],0)&0x00000003u; cr0(c,c->r[6]); // 801E080C
  if (crb(c,2)) { goto L_801E0854; } // 801E0810
  c->r[0]=R8(c->r[5]+0x0000000Au); // 801E0814
  c->r[3]=c->r[31]+0x00000008u; // 801E0818
  c->r[4]=0u+0x00000000u; // 801E081C
  c->r[0]=c->r[0]|c->r[6]; // 801E0820
  W8(c->r[5]+0x0000000Au,c->r[0]); // 801E0824
  c->lr=0x801E082Cu; f_801E025C(c); // 801E0828
  goto L_801E0854; // 801E082C
L_801E0830:;
  c->r[29]=c->r[29]+0x00000001u; // 801E0830
L_801E0834:;
  c->r[0]=R8(c->r[30]+0x0000004Du); // 801E0834
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 801E0838
  cmpu(c,0,c->r[3],c->r[0]); // 801E083C
  if (crb(c,0)) { IRQCHK(c); goto L_801E07E8; } // 801E0840
  goto L_801E0854; // 801E0844
L_801E0848:;
  c->r[3]=c->r[31]+0x00000008u; // 801E0848
  c->r[4]=0u+0x00000000u; // 801E084C
  c->lr=0x801E0854u; f_801E025C(c); // 801E0850
L_801E0854:;
  c->r[11]=c->r[1]+0x00000020u; // 801E0854
  c->lr=0x801E085Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E0858
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E085C
  c->lr=c->r[0]; // 801E0860
  c->r[1]=c->r[1]+0x00000020u; // 801E0864
  return; // 801E0868
}

// bta_dm_pm_timer
void f_801E086C(Ctx* __restrict c) {
  trace_call(0x801E086Cu);
  c->r[4]=0u+0x00000001u; // 801E086C
  c->r[3]=c->r[3]+0x00000008u; // 801E0870
  f_801E025C(c); return; // 801E0874
}

// bta_hh_api_enable
void f_801E0878(Ctx* __restrict c) {
  trace_call(0x801E0878u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E0878
  c->r[0]=c->lr; // 801E087C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E0880
  c->r[0]=0u+0x00000006u; // 801E0884
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E0888
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E088C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E0890
  c->r[29]=c->r[3]|c->r[3]; // 801E0894
  W8(c->r[1]+0x00000008u,c->r[0]); // 801E0898
  c->lr=0x801E08A0u; f_801F27EC(c); // 801E089C
  c->r[31]=0u+0x80310000u; // 801E08A0
  c->r[4]=0u+0x00000000u; // 801E08A4
  c->r[3]=c->r[31]+0xFFFF85E8u; // 801E08A8
  c->r[5]=0u+0x00000230u; // 801E08AC
  c->lr=0x801E08B4u; f_800046B4(c); // 801E08B0
  c->r[4]=R8(c->r[29]+0x00000008u); // 801E08B4
  c->r[3]=c->r[13]+0xFFFFABC0u; // 801E08B8
  c->lr=0x801E08C0u; f_801F2E2C(c); // 801E08BC
  c->r[3]=0u+0x801E0000u; // 801E08C0
  c->r[3]=c->r[3]+0x00001D28u; // 801E08C4
  c->lr=0x801E08CCu; f_801F2830(c); // 801E08C8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801E08CC
  if (!crb(c,2)) { goto L_801E09B4; } // 801E08D0
  c->r[4]=R32(c->r[29]+0x00000030u); // 801E08D4
  c->r[12]=c->r[31]+0xFFFF85E8u; // 801E08D8
  c->r[3]=0u+0x00000000u; // 801E08DC
  c->r[0]=0u+0x00000002u; // 801E08E0
  W32(c->r[12]+0x00000224u,c->r[4]); // 801E08E4
  c->r[29]=0u+0x00000000u; // 801E08E8
  c->r[11]=0u+0x00000001u; // 801E08EC
  c->r[10]=0u+0x000000FFu; // 801E08F0
  W8(c->r[1]+0x00000008u,c->r[3]); // 801E08F4
  c->r[9]=0u+0x00000010u; // 801E08F8
  c->ctr=c->r[0]; // 801E08FC
L_801E0900:;
  c->r[3]=rotl(c->r[29],5)&0x00001FE0u; // 801E0900
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 801E0904
  c->r[31]=c->r[12]+c->r[3]; // 801E0908
  c->r[8]=c->r[29]+0x00000001u; // 801E090C
  W8(c->r[31]+0x0000002Cu,c->r[11]); // 801E0910
  c->r[30]=c->r[12]+c->r[0]; // 801E0914
  c->r[7]=c->r[29]+0x00000002u; // 801E0918
  c->r[6]=c->r[29]+0x00000003u; // 801E091C
  W8(c->r[31]+0x00000026u,c->r[10]); // 801E0920
  c->r[5]=c->r[29]+0x00000004u; // 801E0924
  c->r[4]=c->r[29]+0x00000005u; // 801E0928
  c->r[3]=c->r[29]+0x00000006u; // 801E092C
  W8(c->r[31]+0x00000022u,c->r[29]); // 801E0930
  c->r[0]=c->r[29]+0x00000007u; // 801E0934
  c->r[29]=c->r[29]+0x00000008u; // 801E0938
  W8(c->r[30]+0x00000214u,c->r[9]); // 801E093C
  W8(c->r[31]+0x0000004Cu,c->r[11]); // 801E0940
  W8(c->r[31]+0x00000046u,c->r[10]); // 801E0944
  W8(c->r[31]+0x00000042u,c->r[8]); // 801E0948
  W8(c->r[30]+0x00000215u,c->r[9]); // 801E094C
  W8(c->r[31]+0x0000006Cu,c->r[11]); // 801E0950
  W8(c->r[31]+0x00000066u,c->r[10]); // 801E0954
  W8(c->r[31]+0x00000062u,c->r[7]); // 801E0958
  W8(c->r[30]+0x00000216u,c->r[9]); // 801E095C
  W8(c->r[31]+0x0000008Cu,c->r[11]); // 801E0960
  W8(c->r[31]+0x00000086u,c->r[10]); // 801E0964
  W8(c->r[31]+0x00000082u,c->r[6]); // 801E0968
  W8(c->r[30]+0x00000217u,c->r[9]); // 801E096C
  W8(c->r[31]+0x000000ACu,c->r[11]); // 801E0970
  W8(c->r[31]+0x000000A6u,c->r[10]); // 801E0974
  W8(c->r[31]+0x000000A2u,c->r[5]); // 801E0978
  W8(c->r[30]+0x00000218u,c->r[9]); // 801E097C
  W8(c->r[31]+0x000000CCu,c->r[11]); // 801E0980
  W8(c->r[31]+0x000000C6u,c->r[10]); // 801E0984
  W8(c->r[31]+0x000000C2u,c->r[4]); // 801E0988
  W8(c->r[30]+0x00000219u,c->r[9]); // 801E098C
  W8(c->r[31]+0x000000ECu,c->r[11]); // 801E0990
  W8(c->r[31]+0x000000E6u,c->r[10]); // 801E0994
  W8(c->r[31]+0x000000E2u,c->r[3]); // 801E0998
  W8(c->r[30]+0x0000021Au,c->r[9]); // 801E099C
  W8(c->r[31]+0x0000010Cu,c->r[11]); // 801E09A0
  W8(c->r[31]+0x00000106u,c->r[10]); // 801E09A4
  W8(c->r[31]+0x00000102u,c->r[0]); // 801E09A8
  W8(c->r[30]+0x0000021Bu,c->r[9]); // 801E09AC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E0900; } // 801E09B0
L_801E09B4:;
  c->r[5]=0u+0x80310000u; // 801E09B4
  c->r[4]=c->r[1]+0x00000008u; // 801E09B8
  c->r[5]=c->r[5]+0xFFFF85E8u; // 801E09BC
  c->r[3]=0u+0x00000000u; // 801E09C0
  c->r[12]=R32(c->r[5]+0x00000224u); // 801E09C4
  c->ctr=c->r[12]; // 801E09C8
  if (true) { c->lr=0x801E09D0u; dispatch(c,c->ctr); } // 801E09CC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E09D0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E09D4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E09D8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E09DC
  c->lr=c->r[0]; // 801E09E0
  c->r[1]=c->r[1]+0x00000020u; // 801E09E4
  return; // 801E09E8
}

// bta_hh_api_disable
void f_801E09EC(Ctx* __restrict c) {
  trace_call(0x801E09ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E09EC
  c->r[0]=c->lr; // 801E09F0
  c->r[3]=0u+0x80310000u; // 801E09F4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E09F8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E09FC
  c->r[31]=c->r[3]+0xFFFF85E8u; // 801E0A00
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E0A04
  c->r[0]=R32(c->r[31]+0x00000224u); // 801E0A08
  cmps(c,0,(int32_t)c->r[0],0); // 801E0A0C
  if (crb(c,2)) { goto L_801E0AD8; } // 801E0A10
  c->r[0]=R8(c->r[31]+0x0000022Du); // 801E0A14
  cmps(c,0,(int32_t)c->r[0],0); // 801E0A18
  if (!crb(c,2)) { goto L_801E0A9C; } // 801E0A1C
  c->r[0]=0u+0x00000000u; // 801E0A20
  W8(c->r[1]+0x00000008u,c->r[0]); // 801E0A24
  c->lr=0x801E0A2Cu; f_801F28AC(c); // 801E0A28
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801E0A2C
  if (crb(c,2)) { goto L_801E0A3C; } // 801E0A30
  c->r[0]=0u+0x00000006u; // 801E0A34
  W8(c->r[1]+0x00000008u,c->r[0]); // 801E0A38
L_801E0A3C:;
  c->r[31]=0u+0x80310000u; // 801E0A3C
  c->r[30]=0u+0x00000000u; // 801E0A40
  c->r[31]=c->r[31]+0xFFFF85E8u; // 801E0A44
L_801E0A48:;
  c->r[0]=rotl(c->r[30],5)&0x00001FE0u; // 801E0A48
  c->r[3]=c->r[31]+c->r[0]; // 801E0A4C
  c->r[3]=c->r[3]+0x00000014u; // 801E0A50
  c->lr=0x801E0A58u; f_801DD510(c); // 801E0A54
  c->r[30]=c->r[30]+0x00000001u; // 801E0A58
  cmpu(c,0,c->r[30],0x00000010u); // 801E0A5C
  if (crb(c,0)) { IRQCHK(c); goto L_801E0A48; } // 801E0A60
  c->r[31]=0u+0x80310000u; // 801E0A64
  c->r[31]=c->r[31]+0xFFFF85E8u; // 801E0A68
  c->r[3]=c->r[31]+0x00000228u; // 801E0A6C
  c->lr=0x801E0A74u; f_801DD510(c); // 801E0A70
  c->r[12]=R32(c->r[31]+0x00000224u); // 801E0A74
  c->r[4]=c->r[1]+0x00000008u; // 801E0A78
  c->r[3]=0u+0x00000001u; // 801E0A7C
  c->ctr=c->r[12]; // 801E0A80
  if (true) { c->lr=0x801E0A88u; dispatch(c,c->ctr); } // 801E0A84
  c->r[3]=c->r[31]|c->r[31]; // 801E0A88
  c->r[4]=0u+0x00000000u; // 801E0A8C
  c->r[5]=0u+0x00000230u; // 801E0A90
  c->lr=0x801E0A98u; f_800046B4(c); // 801E0A94
  goto L_801E0AD8; // 801E0A98
L_801E0A9C:;
  c->r[0]=0u+0x00000001u; // 801E0A9C
  c->r[30]=0u+0x00000000u; // 801E0AA0
  W8(c->r[31]+0x0000022Eu,c->r[0]); // 801E0AA4
L_801E0AA8:;
  c->r[0]=rotl(c->r[30],5)&0x00001FE0u; // 801E0AA8
  c->r[3]=c->r[31]+c->r[0]; // 801E0AAC
  c->r[0]=R8(c->r[3]+0x0000002Cu); // 801E0AB0
  cmpu(c,0,c->r[0],0x00000003u); // 801E0AB4
  if (!crb(c,2)) { goto L_801E0ACC; } // 801E0AB8
  c->r[3]=c->r[3]+0x00000010u; // 801E0ABC
  c->r[4]=0u+0x00001701u; // 801E0AC0
  c->r[5]=0u+0x00000000u; // 801E0AC4
  c->lr=0x801E0ACCu; f_801E2390(c); // 801E0AC8
L_801E0ACC:;
  c->r[30]=c->r[30]+0x00000001u; // 801E0ACC
  cmpu(c,0,c->r[30],0x00000010u); // 801E0AD0
  if (crb(c,0)) { IRQCHK(c); goto L_801E0AA8; } // 801E0AD4
L_801E0AD8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E0AD8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E0ADC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E0AE0
  c->lr=c->r[0]; // 801E0AE4
  c->r[1]=c->r[1]+0x00000020u; // 801E0AE8
  return; // 801E0AEC
}

// bta_hh_disc_cmpl
void f_801E0AF0(Ctx* __restrict c) {
  trace_call(0x801E0AF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E0AF0
  c->r[0]=c->lr; // 801E0AF4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E0AF8
  c->r[0]=0u+0x00000000u; // 801E0AFC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E0B00
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E0B04
  W8(c->r[1]+0x00000008u,c->r[0]); // 801E0B08
  c->lr=0x801E0B10u; f_801F28AC(c); // 801E0B0C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801E0B10
  if (crb(c,2)) { goto L_801E0B20; } // 801E0B14
  c->r[0]=0u+0x00000006u; // 801E0B18
  W8(c->r[1]+0x00000008u,c->r[0]); // 801E0B1C
L_801E0B20:;
  c->r[31]=0u+0x80310000u; // 801E0B20
  c->r[30]=0u+0x00000000u; // 801E0B24
  c->r[31]=c->r[31]+0xFFFF85E8u; // 801E0B28
L_801E0B2C:;
  c->r[0]=rotl(c->r[30],5)&0x00001FE0u; // 801E0B2C
  c->r[3]=c->r[31]+c->r[0]; // 801E0B30
  c->r[3]=c->r[3]+0x00000014u; // 801E0B34
  c->lr=0x801E0B3Cu; f_801DD510(c); // 801E0B38
  c->r[30]=c->r[30]+0x00000001u; // 801E0B3C
  cmpu(c,0,c->r[30],0x00000010u); // 801E0B40
  if (crb(c,0)) { IRQCHK(c); goto L_801E0B2C; } // 801E0B44
  c->r[31]=0u+0x80310000u; // 801E0B48
  c->r[31]=c->r[31]+0xFFFF85E8u; // 801E0B4C
  c->r[3]=c->r[31]+0x00000228u; // 801E0B50
  c->lr=0x801E0B58u; f_801DD510(c); // 801E0B54
  c->r[12]=R32(c->r[31]+0x00000224u); // 801E0B58
  c->r[4]=c->r[1]+0x00000008u; // 801E0B5C
  c->r[3]=0u+0x00000001u; // 801E0B60
  c->ctr=c->r[12]; // 801E0B64
  if (true) { c->lr=0x801E0B6Cu; dispatch(c,c->ctr); } // 801E0B68
  c->r[3]=c->r[31]|c->r[31]; // 801E0B6C
  c->r[4]=0u+0x00000000u; // 801E0B70
  c->r[5]=0u+0x00000230u; // 801E0B74
  c->lr=0x801E0B7Cu; f_800046B4(c); // 801E0B78
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E0B7C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E0B80
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E0B84
  c->lr=c->r[0]; // 801E0B88
  c->r[1]=c->r[1]+0x00000020u; // 801E0B8C
  return; // 801E0B90
}

// bta_hh_sdp_cback
void f_801E0B94(Ctx* __restrict c) {
  trace_call(0x801E0B94u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E0B94
  c->r[0]=c->lr; // 801E0B98
  c->r[6]=0u+0x80310000u; // 801E0B9C
  cmps(c,0,(int32_t)c->r[3],0); // 801E0BA0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E0BA4
  c->r[0]=0u+0x00000010u; // 801E0BA8
  c->r[6]=c->r[6]+0xFFFF85E8u; // 801E0BAC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E0BB0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E0BB4
  c->r[30]=c->r[5]|c->r[5]; // 801E0BB8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E0BBC
  c->r[29]=c->r[4]|c->r[4]; // 801E0BC0
  W8(c->r[1]+0x00000008u,c->r[0]); // 801E0BC4
  c->r[31]=R32(c->r[6]+0x00000210u); // 801E0BC8
  if (!crb(c,2)) { goto L_801E0C8C; } // 801E0BCC
  c->r[0]=R8(c->r[31]+0x00000014u); // 801E0BD0
  cmps(c,0,(int32_t)c->r[0],0); // 801E0BD4
  if (crb(c,2)) { goto L_801E0BE0; } // 801E0BD8
  c->r[29]=c->r[4]|0x00008000u; // 801E0BDC
L_801E0BE0:;
  c->r[0]=R8(c->r[13]+0xFFFFB6D0u); // 801E0BE0
  cmpu(c,0,c->r[0],0x00000004u); // 801E0BE4
  if (crb(c,0)) { goto L_801E0C08; } // 801E0BE8
  c->r[4]=0u+0x80280000u; // 801E0BEC
  c->r[6]=c->r[3]|c->r[3]; // 801E0BF0
  c->r[5]=c->r[31]|c->r[31]; // 801E0BF4
  c->r[7]=rotl(c->r[29],0)&0x0000FFFFu; // 801E0BF8
  c->r[4]=c->r[4]+0xFFFFE2D0u; // 801E0BFC
  c->r[3]=0u+0x00000503u; // 801E0C00
  c->lr=0x801E0C08u; f_801DC790(c); // 801E0C04
L_801E0C08:;
  c->r[4]=R8(c->r[30]+0x00000064u); // 801E0C08
  c->r[3]=c->r[31]|c->r[31]; // 801E0C0C
  c->lr=0x801E0C14u; f_801E2B5C(c); // 801E0C10
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801E0C14
  if (crb(c,2)) { goto L_801E0C84; } // 801E0C18
  c->r[0]=R8(c->r[31]+0x00000016u); // 801E0C1C
  cmpu(c,0,c->r[0],0x000000FFu); // 801E0C20
  if (!crb(c,2)) { goto L_801E0C8C; } // 801E0C24
  c->r[3]=c->r[31]+0x00000008u; // 801E0C28
  c->r[4]=rotl(c->r[29],0)&0x0000FFFFu; // 801E0C2C
  c->r[5]=c->r[1]+0x00000009u; // 801E0C30
  c->lr=0x801E0C38u; f_801F2990(c); // 801E0C34
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801E0C38
  W8(c->r[1]+0x00000008u,c->r[3]); // 801E0C3C
  if (!crb(c,2)) { goto L_801E0C78; } // 801E0C40
  c->r[3]=0u+0x80310000u; // 801E0C44
  c->r[4]=R8(c->r[1]+0x00000009u); // 801E0C48
  c->r[3]=c->r[3]+0xFFFF85E8u; // 801E0C4C
  c->r[0]=R8(c->r[31]+0x00000012u); // 801E0C50
  c->r[5]=c->r[3]+c->r[4]; // 801E0C54
  c->r[6]=c->r[30]+0x00000068u; // 801E0C58
  W8(c->r[5]+0x00000214u,c->r[0]); // 801E0C5C
  c->r[3]=c->r[31]|c->r[31]; // 801E0C60
  c->r[5]=rotl(c->r[29],0)&0x0000FFFFu; // 801E0C64
  c->r[7]=R8(c->r[30]+0x00000064u); // 801E0C68
  c->r[8]=R8(c->r[31]+0x00000015u); // 801E0C6C
  c->lr=0x801E0C74u; f_801E2AA0(c); // 801E0C70
  goto L_801E0C8C; // 801E0C74
L_801E0C78:;
  c->r[0]=0u+0x00000000u; // 801E0C78
  W8(c->r[31]+0x00000015u,c->r[0]); // 801E0C7C
  goto L_801E0C8C; // 801E0C80
L_801E0C84:;
  c->r[0]=0u+0x000000FFu; // 801E0C84
  W8(c->r[1]+0x00000008u,c->r[0]); // 801E0C88
L_801E0C8C:;
  c->r[3]=0u+0x80310000u; // 801E0C8C
  c->r[3]=c->r[3]+0xFFFF85E8u; // 801E0C90
  c->r[3]=c->r[3]+0x00000228u; // 801E0C94
  c->lr=0x801E0C9Cu; f_801DD510(c); // 801E0C98
  c->r[3]=c->r[31]|c->r[31]; // 801E0C9C
  c->r[5]=c->r[1]+0x00000008u; // 801E0CA0
  c->r[4]=0u+0x00001707u; // 801E0CA4
  c->lr=0x801E0CACu; f_801E2390(c); // 801E0CA8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E0CAC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E0CB0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E0CB4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E0CB8
  c->lr=c->r[0]; // 801E0CBC
  c->r[1]=c->r[1]+0x00000020u; // 801E0CC0
  return; // 801E0CC4
}

// bta_hh_start_sdp
void f_801E0CC8(Ctx* __restrict c) {
  trace_call(0x801E0CC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E0CC8
  c->r[0]=c->lr; // 801E0CCC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E0CD0
  c->r[0]=0u+0x00000010u; // 801E0CD4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E0CD8
  c->r[31]=c->r[3]|c->r[3]; // 801E0CDC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E0CE0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E0CE4
  c->r[29]=c->r[4]|c->r[4]; // 801E0CE8
  W8(c->r[1]+0x00000009u,c->r[0]); // 801E0CEC
  c->r[5]=R8(c->r[4]+0x0000000Eu); // 801E0CF0
  c->r[0]=R8(c->r[3]+0x00000015u); // 801E0CF4
  W8(c->r[3]+0x00000014u,c->r[5]); // 801E0CF8
  cmps(c,0,(int32_t)c->r[0],0); // 801E0CFC
  c->r[0]=R8(c->r[4]+0x0000000Fu); // 801E0D00
  W8(c->r[3]+0x0000001Bu,c->r[0]); // 801E0D04
  if (crb(c,2)) { goto L_801E0DA0; } // 801E0D08
  c->r[0]=R8(c->r[13]+0xFFFFB6D0u); // 801E0D0C
  c->r[3]=0u+0x00000000u; // 801E0D10
  W8(c->r[1]+0x00000009u,c->r[3]); // 801E0D14
  cmpu(c,0,c->r[0],0x00000005u); // 801E0D18
  if (crb(c,0)) { goto L_801E0D30; } // 801E0D1C
  c->r[4]=0u+0x80280000u; // 801E0D20
  c->r[3]=0u+0x00000504u; // 801E0D24
  c->r[4]=c->r[4]+0xFFFFE328u; // 801E0D28
  c->lr=0x801E0D30u; f_801DC730(c); // 801E0D2C
L_801E0D30:;
  c->r[0]=R8(c->r[31]+0x00000016u); // 801E0D30
  cmpu(c,0,c->r[0],0x000000FFu); // 801E0D34
  if (!crb(c,2)) { goto L_801E0D8C; } // 801E0D38
  c->r[4]=R16(c->r[31]+0x0000000Eu); // 801E0D3C
  c->r[3]=c->r[31]+0x00000008u; // 801E0D40
  c->r[5]=c->r[1]+0x00000008u; // 801E0D44
  c->lr=0x801E0D4Cu; f_801F2990(c); // 801E0D48
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801E0D4C
  W8(c->r[1]+0x00000009u,c->r[3]); // 801E0D50
  if (!crb(c,2)) { goto L_801E0D8C; } // 801E0D54
  c->r[4]=R8(c->r[1]+0x00000008u); // 801E0D58
  c->r[3]=c->r[31]|c->r[31]; // 801E0D5C
  c->r[5]=R16(c->r[31]+0x0000000Eu); // 801E0D60
  c->r[6]=0u+0x00000000u; // 801E0D64
  c->r[7]=R8(c->r[31]+0x00000013u); // 801E0D68
  c->r[8]=R8(c->r[31]+0x00000015u); // 801E0D6C
  c->lr=0x801E0D74u; f_801E2AA0(c); // 801E0D70
  c->r[3]=0u+0x80310000u; // 801E0D74
  c->r[0]=R8(c->r[1]+0x00000008u); // 801E0D78
  c->r[3]=c->r[3]+0xFFFF85E8u; // 801E0D7C
  c->r[4]=R8(c->r[31]+0x00000012u); // 801E0D80
  c->r[3]=c->r[3]+c->r[0]; // 801E0D84
  W8(c->r[3]+0x00000214u,c->r[4]); // 801E0D88
L_801E0D8C:;
  c->r[3]=c->r[31]|c->r[31]; // 801E0D8C
  c->r[5]=c->r[1]+0x00000009u; // 801E0D90
  c->r[4]=0u+0x00001707u; // 801E0D94
  c->lr=0x801E0D9Cu; f_801E2390(c); // 801E0D98
  goto L_801E0E40; // 801E0D9C
L_801E0DA0:;
  c->r[30]=0u+0x80310000u; // 801E0DA0
  c->r[30]=c->r[30]+0xFFFF85E8u; // 801E0DA4
  c->r[0]=R32(c->r[30]+0x00000228u); // 801E0DA8
  cmps(c,0,(int32_t)c->r[0],0); // 801E0DAC
  if (!crb(c,2)) { goto L_801E0E24; } // 801E0DB0
  c->r[3]=R32(c->r[13]+0xFFFFAB98u); // 801E0DB4
  c->r[3]=R16(c->r[3]+0x00000008u); // 801E0DB8
  c->lr=0x801E0DC0u; f_801D99E0(c); // 801E0DBC
  W32(c->r[30]+0x00000228u,c->r[3]); // 801E0DC0
  c->r[6]=0u+0x801E0000u; // 801E0DC4
  c->r[5]=R32(c->r[13]+0xFFFFAB98u); // 801E0DC8
  c->r[4]=c->r[3]|c->r[3]; // 801E0DCC
  W32(c->r[30]+0x00000210u,c->r[31]); // 801E0DD0
  c->r[3]=c->r[29]+0x00000008u; // 801E0DD4
  c->r[6]=c->r[6]+0x00000B94u; // 801E0DD8
  c->r[5]=R16(c->r[5]+0x00000008u); // 801E0DDC
  c->lr=0x801E0DE4u; f_801F22D4(c); // 801E0DE0
  c->r[5]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[5]); // 801E0DE4
  W8(c->r[1]+0x00000009u,c->r[3]); // 801E0DE8
  if (crb(c,2)) { goto L_801E0E24; } // 801E0DEC
  c->r[0]=R8(c->r[13]+0xFFFFB6D0u); // 801E0DF0
  cmpu(c,0,c->r[0],0x00000005u); // 801E0DF4
  if (crb(c,0)) { goto L_801E0E0C; } // 801E0DF8
  c->r[4]=0u+0x80280000u; // 801E0DFC
  c->r[3]=0u+0x00000504u; // 801E0E00
  c->r[4]=c->r[4]+0xFFFFE358u; // 801E0E04
  c->lr=0x801E0E0Cu; f_801DC750(c); // 801E0E08
L_801E0E0C:;
  c->r[0]=0u+0x00000007u; // 801E0E0C
  c->r[3]=0u+0x80310000u; // 801E0E10
  c->r[3]=c->r[3]+0xFFFF85E8u; // 801E0E14
  W8(c->r[1]+0x00000009u,c->r[0]); // 801E0E18
  c->r[3]=c->r[3]+0x00000228u; // 801E0E1C
  c->lr=0x801E0E24u; f_801DD510(c); // 801E0E20
L_801E0E24:;
  c->r[0]=R8(c->r[1]+0x00000009u); // 801E0E24
  cmps(c,0,(int32_t)c->r[0],0); // 801E0E28
  if (crb(c,2)) { goto L_801E0E40; } // 801E0E2C
  c->r[3]=c->r[31]|c->r[31]; // 801E0E30
  c->r[5]=c->r[1]+0x00000009u; // 801E0E34
  c->r[4]=0u+0x00001707u; // 801E0E38
  c->lr=0x801E0E40u; f_801E2390(c); // 801E0E3C
L_801E0E40:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E0E40
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E0E44
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E0E48
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E0E4C
  c->lr=c->r[0]; // 801E0E50
  c->r[1]=c->r[1]+0x00000020u; // 801E0E54
  return; // 801E0E58
}

// bta_hh_sdp_cmpl
void f_801E0E5C(Ctx* __restrict c) {
  trace_call(0x801E0E5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E0E5C
  c->r[0]=c->lr; // 801E0E60
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E0E64
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E0E68
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E0E6C
  c->r[30]=c->r[4]|c->r[4]; // 801E0E70
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E0E74
  c->r[29]=c->r[3]|c->r[3]; // 801E0E78
  c->r[0]=R8(c->r[13]+0xFFFFB6D0u); // 801E0E7C
  cmpu(c,0,c->r[0],0x00000005u); // 801E0E80
  if (crb(c,0)) { goto L_801E0E9C; } // 801E0E84
  c->r[4]=0u+0x80280000u; // 801E0E88
  c->r[5]=R8(c->r[30]+0x00000000u); // 801E0E8C
  c->r[4]=c->r[4]+0xFFFFE3A8u; // 801E0E90
  c->r[3]=0u+0x00000504u; // 801E0E94
  c->lr=0x801E0E9Cu; f_801DC750(c); // 801E0E98
L_801E0E9C:;
  c->r[3]=c->r[1]+0x00000008u; // 801E0E9C
  c->r[4]=0u+0x00000000u; // 801E0EA0
  c->r[5]=0u+0x00000008u; // 801E0EA4
  c->lr=0x801E0EACu; f_800046B4(c); // 801E0EA8
  c->r[0]=R8(c->r[29]+0x00000016u); // 801E0EAC
  c->r[3]=c->r[1]+0x00000008u; // 801E0EB0
  c->r[4]=c->r[29]+0x00000008u; // 801E0EB4
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 801E0EB8
  c->lr=0x801E0EC0u; f_801DCDC4(c); // 801E0EBC
  c->r[31]=R8(c->r[30]+0x00000000u); // 801E0EC0
  cmps(c,0,(int32_t)c->r[31],0); // 801E0EC4
  if (!crb(c,2)) { goto L_801E0F30; } // 801E0EC8
  c->r[0]=R8(c->r[29]+0x00000019u); // 801E0ECC
  cmps(c,0,(int32_t)c->r[0],0); // 801E0ED0
  if (!crb(c,2)) { goto L_801E0F20; } // 801E0ED4
  c->r[4]=R8(c->r[29]+0x00000014u); // 801E0ED8
  c->r[3]=c->r[13]+0xFFFFABC0u; // 801E0EDC
  c->lr=0x801E0EE4u; f_801F2E2C(c); // 801E0EE0
  c->r[3]=R8(c->r[29]+0x00000016u); // 801E0EE4
  c->lr=0x801E0EECu; f_801F2BE8(c); // 801E0EE8
  c->r[5]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[5]); // 801E0EEC
  c->r[31]=c->r[3]|c->r[3]; // 801E0EF0
  if (crb(c,2)) { goto L_801E0F30; } // 801E0EF4
  c->r[0]=R8(c->r[13]+0xFFFFB6D0u); // 801E0EF8
  cmpu(c,0,c->r[0],0x00000005u); // 801E0EFC
  if (crb(c,0)) { goto L_801E0F14; } // 801E0F00
  c->r[4]=0u+0x80280000u; // 801E0F04
  c->r[3]=0u+0x00000504u; // 801E0F08
  c->r[4]=c->r[4]+0xFFFFE3C8u; // 801E0F0C
  c->lr=0x801E0F14u; f_801DC750(c); // 801E0F10
L_801E0F14:;
  c->r[3]=R8(c->r[29]+0x00000016u); // 801E0F14
  c->lr=0x801E0F1Cu; f_801F2B20(c); // 801E0F18
  goto L_801E0F30; // 801E0F1C
L_801E0F20:;
  c->r[3]=c->r[29]|c->r[29]; // 801E0F20
  c->r[4]=0u+0x0000170Bu; // 801E0F24
  c->r[5]=0u+0x00000000u; // 801E0F28
  c->lr=0x801E0F30u; f_801E2390(c); // 801E0F2C
L_801E0F30:;
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; cr0(c,c->r[0]); // 801E0F30
  if (crb(c,2)) { goto L_801E0FA8; } // 801E0F34
  c->r[0]=R8(c->r[30]+0x00000000u); // 801E0F38
  cmpu(c,0,c->r[0],0x000000FFu); // 801E0F3C
  if (!crb(c,2)) { goto L_801E0F50; } // 801E0F40
  c->r[0]=0u+0x0000000Au; // 801E0F44
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 801E0F48
  goto L_801E0F58; // 801E0F4C
L_801E0F50:;
  c->r[0]=0u+0x00000007u; // 801E0F50
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 801E0F54
L_801E0F58:;
  c->r[5]=0u+0x80310000u; // 801E0F58
  c->r[4]=c->r[1]+0x00000008u; // 801E0F5C
  c->r[5]=c->r[5]+0xFFFF85E8u; // 801E0F60
  c->r[3]=0u+0x00000002u; // 801E0F64
  c->r[12]=R32(c->r[5]+0x00000224u); // 801E0F68
  c->ctr=c->r[12]; // 801E0F6C
  if (true) { c->lr=0x801E0F74u; dispatch(c,c->ctr); } // 801E0F70
  c->r[3]=c->r[29]|c->r[29]; // 801E0F74
  c->r[4]=0u+0x00001701u; // 801E0F78
  c->r[5]=0u+0x00000000u; // 801E0F7C
  c->lr=0x801E0F84u; f_801E2390(c); // 801E0F80
  c->r[0]=R8(c->r[29]+0x00000015u); // 801E0F84
  cmps(c,0,(int32_t)c->r[0],0); // 801E0F88
  if (!crb(c,2)) { goto L_801E0FA4; } // 801E0F8C
  c->r[0]=R8(c->r[29]+0x00000019u); // 801E0F90
  cmps(c,0,(int32_t)c->r[0],0); // 801E0F94
  if (!crb(c,2)) { goto L_801E0FA4; } // 801E0F98
  c->r[3]=c->r[29]|c->r[29]; // 801E0F9C
  c->lr=0x801E0FA4u; f_801E2A20(c); // 801E0FA0
L_801E0FA4:;
  c->lr=0x801E0FA8u; f_801E2BB0(c); // 801E0FA4
L_801E0FA8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E0FA8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E0FAC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E0FB0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E0FB4
  c->lr=c->r[0]; // 801E0FB8
  c->r[1]=c->r[1]+0x00000020u; // 801E0FBC
  return; // 801E0FC0
}

// bta_hh_api_disc_act
void f_801E0FC4(Ctx* __restrict c) {
  trace_call(0x801E0FC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E0FC4
  c->r[0]=c->lr; // 801E0FC8
  cmps(c,0,(int32_t)c->r[4],0); // 801E0FCC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E0FD0
  if (crb(c,2)) { goto L_801E0FE4; } // 801E0FD4
  c->r[0]=R16(c->r[4]+0x00000006u); // 801E0FD8
  c->r[3]=rotl(c->r[0],0)&0x000000FFu; // 801E0FDC
  goto L_801E0FE8; // 801E0FE0
L_801E0FE4:;
  c->r[3]=R8(c->r[3]+0x00000016u); // 801E0FE4
L_801E0FE8:;
  c->r[0]=0u+0x00000006u; // 801E0FE8
  W8(c->r[1]+0x00000009u,c->r[3]); // 801E0FEC
  W8(c->r[1]+0x00000008u,c->r[0]); // 801E0FF0
  c->lr=0x801E0FF8u; f_801F2D8C(c); // 801E0FF4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801E0FF8
  if (crb(c,2)) { goto L_801E101C; } // 801E0FFC
  c->r[5]=0u+0x80310000u; // 801E1000
  c->r[4]=c->r[1]+0x00000008u; // 801E1004
  c->r[5]=c->r[5]+0xFFFF85E8u; // 801E1008
  c->r[3]=0u+0x00000003u; // 801E100C
  c->r[12]=R32(c->r[5]+0x00000224u); // 801E1010
  c->ctr=c->r[12]; // 801E1014
  if (true) { c->lr=0x801E101Cu; dispatch(c,c->ctr); } // 801E1018
L_801E101C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E101C
  c->lr=c->r[0]; // 801E1020
  c->r[1]=c->r[1]+0x00000010u; // 801E1024
  return; // 801E1028
}

// bta_hh_open_cmpl_act
void f_801E102C(Ctx* __restrict c) {
  trace_call(0x801E102Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E102C
  c->r[0]=c->lr; // 801E1030
  cmps(c,0,(int32_t)c->r[4],0); // 801E1034
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E1038
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E103C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E1040
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E1044
  c->r[29]=c->r[3]|c->r[3]; // 801E1048
  if (crb(c,2)) { goto L_801E105C; } // 801E104C
  c->r[0]=R16(c->r[4]+0x00000006u); // 801E1050
  c->r[30]=rotl(c->r[0],0)&0x000000FFu; // 801E1054
  goto L_801E1060; // 801E1058
L_801E105C:;
  c->r[30]=R8(c->r[3]+0x00000016u); // 801E105C
L_801E1060:;
  c->r[3]=c->r[1]+0x00000008u; // 801E1060
  c->r[4]=0u+0x00000000u; // 801E1064
  c->r[5]=0u+0x00000008u; // 801E1068
  c->lr=0x801E1070u; f_800046B4(c); // 801E106C
  W8(c->r[1]+0x0000000Fu,c->r[30]); // 801E1070
  c->r[3]=c->r[1]+0x00000008u; // 801E1074
  c->r[4]=c->r[29]+0x00000008u; // 801E1078
  c->lr=0x801E1080u; f_801DCDC4(c); // 801E107C
  c->r[31]=0u+0x80310000u; // 801E1080
  c->r[31]=c->r[31]+0xFFFF85E8u; // 801E1084
  c->r[3]=R8(c->r[31]+0x0000022Du); // 801E1088
  c->r[0]=c->r[3]+0x00000001u; // 801E108C
  W8(c->r[31]+0x0000022Du,c->r[0]); // 801E1090
  c->r[3]=R8(c->r[29]+0x00000016u); // 801E1094
  c->r[4]=R8(c->r[29]+0x00000013u); // 801E1098
  c->r[5]=R16(c->r[29]+0x0000000Eu); // 801E109C
  c->r[6]=R8(c->r[29]+0x00000015u); // 801E10A0
  c->lr=0x801E10A8u; f_801D9470(c); // 801E10A4
  c->r[4]=R8(c->r[29]+0x00000015u); // 801E10A8
  c->r[5]=c->r[29]+0x00000008u; // 801E10AC
  c->r[3]=0u+0x00000017u; // 801E10B0
  c->lr=0x801E10B8u; f_801DCEC8(c); // 801E10B4
  c->r[5]=R8(c->r[29]+0x0000001Bu); // 801E10B8
  cmps(c,0,(int32_t)c->r[5],0); // 801E10BC
  if (crb(c,2)) { goto L_801E1114; } // 801E10C0
  c->r[3]=c->r[30]|c->r[30]; // 801E10C4
  c->r[4]=0u+0x00000007u; // 801E10C8
  c->r[6]=0u+0x00000000u; // 801E10CC
  c->r[7]=0u+0x00000000u; // 801E10D0
  c->r[8]=0u+0x00000000u; // 801E10D4
  c->lr=0x801E10DCu; f_801F2C4C(c); // 801E10D8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801E10DC
  W8(c->r[1]+0x0000000Eu,c->r[3]); // 801E10E0
  if (crb(c,2)) { goto L_801E1108; } // 801E10E4
  c->r[12]=R32(c->r[31]+0x00000224u); // 801E10E8
  c->r[0]=0u+0x00000008u; // 801E10EC
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 801E10F0
  c->r[4]=c->r[1]+0x00000008u; // 801E10F4
  c->r[3]=0u+0x00000002u; // 801E10F8
  c->ctr=c->r[12]; // 801E10FC
  if (true) { c->lr=0x801E1104u; dispatch(c,c->ctr); } // 801E1100
  goto L_801E1130; // 801E1104
L_801E1108:;
  c->r[0]=0u+0x00000002u; // 801E1108
  W16(c->r[29]+0x00000010u,c->r[0]); // 801E110C
  goto L_801E1130; // 801E1110
L_801E1114:;
  c->r[0]=0u+0x00000001u; // 801E1114
  c->r[4]=c->r[1]+0x00000008u; // 801E1118
  W8(c->r[29]+0x0000001Au,c->r[0]); // 801E111C
  c->r[3]=0u+0x00000002u; // 801E1120
  c->r[12]=R32(c->r[31]+0x00000224u); // 801E1124
  c->ctr=c->r[12]; // 801E1128
  if (true) { c->lr=0x801E1130u; dispatch(c,c->ctr); } // 801E112C
L_801E1130:;
  c->r[0]=0u+0x00000000u; // 801E1130
  W8(c->r[29]+0x00000019u,c->r[0]); // 801E1134
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E1138
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E113C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E1140
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E1144
  c->lr=c->r[0]; // 801E1148
  c->r[1]=c->r[1]+0x00000020u; // 801E114C
  return; // 801E1150
}

// bta_hh_open_act
void f_801E1154(Ctx* __restrict c) {
  trace_call(0x801E1154u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E1154
  c->r[0]=c->lr; // 801E1158
  cmps(c,0,(int32_t)c->r[4],0); // 801E115C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E1160
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E1164
  c->r[31]=c->r[4]|c->r[4]; // 801E1168
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E116C
  c->r[30]=c->r[3]|c->r[3]; // 801E1170
  if (crb(c,2)) { goto L_801E1184; } // 801E1174
  c->r[0]=R16(c->r[4]+0x00000006u); // 801E1178
  c->r[5]=rotl(c->r[0],0)&0x000000FFu; // 801E117C
  goto L_801E1188; // 801E1180
L_801E1184:;
  c->r[5]=R8(c->r[3]+0x00000016u); // 801E1184
L_801E1188:;
  c->r[0]=R8(c->r[13]+0xFFFFB6D0u); // 801E1188
  cmpu(c,0,c->r[0],0x00000004u); // 801E118C
  if (crb(c,0)) { goto L_801E11A4; } // 801E1190
  c->r[4]=0u+0x80280000u; // 801E1194
  c->r[3]=0u+0x00000503u; // 801E1198
  c->r[4]=c->r[4]+0xFFFFE414u; // 801E119C
  c->lr=0x801E11A4u; f_801DC750(c); // 801E11A0
L_801E11A4:;
  c->r[0]=R8(c->r[30]+0x00000015u); // 801E11A4
  cmps(c,0,(int32_t)c->r[0],0); // 801E11A8
  if (crb(c,2)) { goto L_801E11C4; } // 801E11AC
  c->r[3]=c->r[30]|c->r[30]; // 801E11B0
  c->r[5]=c->r[31]|c->r[31]; // 801E11B4
  c->r[4]=0u+0x0000170Bu; // 801E11B8
  c->lr=0x801E11C0u; f_801E2390(c); // 801E11BC
  goto L_801E11F4; // 801E11C0
L_801E11C4:;
  c->r[0]=0u+0x00000001u; // 801E11C4
  c->r[3]=c->r[1]+0x00000008u; // 801E11C8
  W8(c->r[30]+0x00000019u,c->r[0]); // 801E11CC
  c->r[4]=0u+0x00000000u; // 801E11D0
  c->r[5]=0u+0x00000010u; // 801E11D4
  c->lr=0x801E11DCu; f_800046B4(c); // 801E11D8
  c->r[3]=c->r[1]+0x00000010u; // 801E11DC
  c->r[4]=c->r[30]+0x00000008u; // 801E11E0
  c->lr=0x801E11E8u; f_801DCDC4(c); // 801E11E4
  c->r[3]=c->r[30]|c->r[30]; // 801E11E8
  c->r[4]=c->r[1]+0x00000008u; // 801E11EC
  c->lr=0x801E11F4u; f_801E0CC8(c); // 801E11F0
L_801E11F4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E11F4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E11F8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E11FC
  c->lr=c->r[0]; // 801E1200
  c->r[1]=c->r[1]+0x00000020u; // 801E1204
  return; // 801E1208
}

// bta_hh_data_act
void f_801E120C(Ctx* __restrict c) {
  trace_call(0x801E120Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E120C
  c->r[0]=c->lr; // 801E1210
  c->r[8]=c->r[3]|c->r[3]; // 801E1214
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E1218
  c->r[5]=R32(c->r[4]+0x0000000Cu); // 801E121C
  W32(c->r[1]+0x00000008u,c->r[5]); // 801E1220
  c->r[0]=R16(c->r[5]+0x00000004u); // 801E1224
  c->r[3]=R16(c->r[4]+0x00000006u); // 801E1228
  c->r[4]=c->r[5]+c->r[0]; // 801E122C
  c->r[5]=R16(c->r[5]+0x00000002u); // 801E1230
  c->r[6]=R8(c->r[8]+0x0000001Bu); // 801E1234
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 801E1238
  c->r[7]=R8(c->r[8]+0x00000013u); // 801E123C
  c->r[4]=c->r[4]+0x00000008u; // 801E1240
  c->r[8]=R8(c->r[8]+0x00000015u); // 801E1244
  c->lr=0x801E124Cu; f_801D9430(c); // 801E1248
  c->r[3]=c->r[1]+0x00000008u; // 801E124C
  c->lr=0x801E1254u; f_801DD510(c); // 801E1250
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E1254
  c->lr=c->r[0]; // 801E1258
  c->r[1]=c->r[1]+0x00000010u; // 801E125C
  return; // 801E1260
}

// bta_hh_handsk_act
void f_801E1264(Ctx* __restrict c) {
  trace_call(0x801E1264u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E1264
  c->r[0]=c->lr; // 801E1268
  W32(c->r[1]+0x00000044u,c->r[0]); // 801E126C
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801E1270
  c->r[31]=c->r[3]|c->r[3]; // 801E1274
  W32(c->r[1]+0x00000038u,c->r[30]); // 801E1278
  c->r[30]=0u+0x80280000u; // 801E127C
  c->r[30]=c->r[30]+0xFFFFE2D0u; // 801E1280
  W32(c->r[1]+0x00000034u,c->r[29]); // 801E1284
  c->r[29]=c->r[4]|c->r[4]; // 801E1288
  c->r[0]=R8(c->r[13]+0xFFFFB6D0u); // 801E128C
  cmpu(c,0,c->r[0],0x00000005u); // 801E1290
  if (crb(c,0)) { goto L_801E1308; } // 801E1294
  c->r[0]=R16(c->r[3]+0x00000010u); // 801E1298
  cmpu(c,0,c->r[0],0x00000009u); // 801E129C
  if (crb(c,1)) { goto L_801E12F4; } // 801E12A0
  c->r[3]=0u+0x80280000u; // 801E12A4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801E12A8
  c->r[3]=c->r[3]+0xFFFFE550u; // 801E12AC
  c->r[3]=R32(c->r[3]+c->r[0]); // 801E12B0
  c->ctr=c->r[3]; // 801E12B4
  if (true) { switch (c->ctr) { case 0x801E12BCu: goto L_801E12BC; case 0x801E12C4u: goto L_801E12C4; case 0x801E12CCu: goto L_801E12CC; case 0x801E12D4u: goto L_801E12D4; case 0x801E12DCu: goto L_801E12DC; case 0x801E12E4u: goto L_801E12E4; case 0x801E12ECu: goto L_801E12EC; case 0x801E12F4u: goto L_801E12F4; case 0x801E132Cu: goto L_801E132C; case 0x801E13ACu: goto L_801E13AC; case 0x801E141Cu: goto L_801E141C; case 0x801E1488u: goto L_801E1488; default: break; } dispatch(c,c->ctr); return; } // 801E12B8
L_801E12BC:;
  c->r[5]=c->r[30]+0x0000016Cu; // 801E12BC
  goto L_801E12F8; // 801E12C0
L_801E12C4:;
  c->r[5]=c->r[30]+0x00000180u; // 801E12C4
  goto L_801E12F8; // 801E12C8
L_801E12CC:;
  c->r[5]=c->r[30]+0x00000194u; // 801E12CC
  goto L_801E12F8; // 801E12D0
L_801E12D4:;
  c->r[5]=c->r[30]+0x000001ACu; // 801E12D4
  goto L_801E12F8; // 801E12D8
L_801E12DC:;
  c->r[5]=c->r[30]+0x000001C4u; // 801E12DC
  goto L_801E12F8; // 801E12E0
L_801E12E4:;
  c->r[5]=c->r[30]+0x000001D8u; // 801E12E4
  goto L_801E12F8; // 801E12E8
L_801E12EC:;
  c->r[5]=c->r[30]+0x000001F0u; // 801E12EC
  goto L_801E12F8; // 801E12F0
L_801E12F4:;
  c->r[5]=c->r[30]+0x00000200u; // 801E12F4
L_801E12F8:;
  c->r[6]=R32(c->r[29]+0x00000008u); // 801E12F8
  c->r[4]=c->r[30]+0x00000210u; // 801E12FC
  c->r[3]=0u+0x00000504u; // 801E1300
  c->lr=0x801E1308u; f_801DC770(c); // 801E1304
L_801E1308:;
  c->r[0]=R16(c->r[31]+0x00000010u); // 801E1308
  cmpu(c,0,c->r[0],0x00000009u); // 801E130C
  if (crb(c,1)) { goto L_801E1488; } // 801E1310
  c->r[3]=0u+0x80280000u; // 801E1314
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801E1318
  c->r[3]=c->r[3]+0xFFFFE528u; // 801E131C
  c->r[3]=R32(c->r[3]+c->r[0]); // 801E1320
  c->ctr=c->r[3]; // 801E1324
  if (true) { switch (c->ctr) { case 0x801E12BCu: goto L_801E12BC; case 0x801E12C4u: goto L_801E12C4; case 0x801E12CCu: goto L_801E12CC; case 0x801E12D4u: goto L_801E12D4; case 0x801E12DCu: goto L_801E12DC; case 0x801E12E4u: goto L_801E12E4; case 0x801E12ECu: goto L_801E12EC; case 0x801E12F4u: goto L_801E12F4; case 0x801E132Cu: goto L_801E132C; case 0x801E13ACu: goto L_801E13AC; case 0x801E141Cu: goto L_801E141C; case 0x801E1488u: goto L_801E1488; default: break; } dispatch(c,c->ctr); return; } // 801E1328
L_801E132C:;
  c->r[3]=c->r[1]+0x00000018u; // 801E132C
  c->r[4]=0u+0x00000000u; // 801E1330
  c->r[5]=0u+0x0000000Au; // 801E1334
  c->lr=0x801E133Cu; f_800046B4(c); // 801E1338
  c->r[0]=R8(c->r[31]+0x00000016u); // 801E133C
  W8(c->r[1]+0x00000019u,c->r[0]); // 801E1340
  c->r[0]=R32(c->r[29]+0x00000008u); // 801E1344
  cmps(c,0,(int32_t)c->r[0],5); // 801E1348
  if (!crb(c,0)) { goto L_801E1360; } // 801E134C
  cmps(c,0,(int32_t)c->r[0],0); // 801E1350
  if (crb(c,2)) { goto L_801E136C; } // 801E1354
  if (!crb(c,0)) { goto L_801E1374; } // 801E1358
  goto L_801E137C; // 801E135C
L_801E1360:;
  cmps(c,0,(int32_t)c->r[0],16); // 801E1360
  if (!crb(c,0)) { goto L_801E137C; } // 801E1364
  goto L_801E137C; // 801E1368
L_801E136C:;
  c->r[0]=0u+0x00000000u; // 801E136C
  goto L_801E1380; // 801E1370
L_801E1374:;
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801E1374
  goto L_801E1380; // 801E1378
L_801E137C:;
  c->r[0]=0u+0x00000005u; // 801E137C
L_801E1380:;
  c->r[3]=0u+0x80310000u; // 801E1380
  W8(c->r[1]+0x00000018u,c->r[0]); // 801E1384
  c->r[3]=c->r[3]+0xFFFF85E8u; // 801E1388
  c->r[4]=c->r[1]+0x00000018u; // 801E138C
  c->r[12]=R32(c->r[3]+0x00000224u); // 801E1390
  c->r[3]=R16(c->r[31]+0x00000010u); // 801E1394
  c->ctr=c->r[12]; // 801E1398
  if (true) { c->lr=0x801E13A0u; dispatch(c,c->ctr); } // 801E139C
  c->r[0]=0u+0x00000000u; // 801E13A0
  W16(c->r[31]+0x00000010u,c->r[0]); // 801E13A4
  goto L_801E14A0; // 801E13A8
L_801E13AC:;
  c->r[0]=R8(c->r[31]+0x00000016u); // 801E13AC
  W8(c->r[1]+0x00000009u,c->r[0]); // 801E13B0
  c->r[0]=R32(c->r[29]+0x00000008u); // 801E13B4
  cmps(c,0,(int32_t)c->r[0],5); // 801E13B8
  if (!crb(c,0)) { goto L_801E13D0; } // 801E13BC
  cmps(c,0,(int32_t)c->r[0],0); // 801E13C0
  if (crb(c,2)) { goto L_801E13DC; } // 801E13C4
  if (!crb(c,0)) { goto L_801E13E4; } // 801E13C8
  goto L_801E13EC; // 801E13CC
L_801E13D0:;
  cmps(c,0,(int32_t)c->r[0],16); // 801E13D0
  if (!crb(c,0)) { goto L_801E13EC; } // 801E13D4
  goto L_801E13EC; // 801E13D8
L_801E13DC:;
  c->r[0]=0u+0x00000000u; // 801E13DC
  goto L_801E13F0; // 801E13E0
L_801E13E4:;
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801E13E4
  goto L_801E13F0; // 801E13E8
L_801E13EC:;
  c->r[0]=0u+0x00000005u; // 801E13EC
L_801E13F0:;
  c->r[3]=0u+0x80310000u; // 801E13F0
  W8(c->r[1]+0x00000008u,c->r[0]); // 801E13F4
  c->r[3]=c->r[3]+0xFFFF85E8u; // 801E13F8
  c->r[4]=c->r[1]+0x00000008u; // 801E13FC
  c->r[12]=R32(c->r[3]+0x00000224u); // 801E1400
  c->r[3]=R16(c->r[31]+0x00000010u); // 801E1404
  c->ctr=c->r[12]; // 801E1408
  if (true) { c->lr=0x801E1410u; dispatch(c,c->ctr); } // 801E140C
  c->r[0]=0u+0x00000000u; // 801E1410
  W16(c->r[31]+0x00000010u,c->r[0]); // 801E1414
  goto L_801E14A0; // 801E1418
L_801E141C:;
  c->r[0]=R32(c->r[29]+0x00000008u); // 801E141C
  c->r[3]=0u+0x00000000u; // 801E1420
  cmps(c,0,(int32_t)c->r[0],0); // 801E1424
  if (crb(c,2)) { goto L_801E1430; } // 801E1428
  c->r[3]=0u+0x00000008u; // 801E142C
L_801E1430:;
  W8(c->r[1]+0x00000016u,c->r[3]); // 801E1430
  c->r[3]=c->r[1]+0x00000010u; // 801E1434
  c->r[4]=c->r[31]+0x00000008u; // 801E1438
  c->r[0]=R8(c->r[31]+0x00000016u); // 801E143C
  W8(c->r[1]+0x00000017u,c->r[0]); // 801E1440
  c->lr=0x801E1448u; f_801DCDC4(c); // 801E1444
  c->r[5]=0u+0x80310000u; // 801E1448
  c->r[4]=c->r[1]+0x00000010u; // 801E144C
  c->r[5]=c->r[5]+0xFFFF85E8u; // 801E1450
  c->r[3]=R16(c->r[31]+0x00000010u); // 801E1454
  c->r[12]=R32(c->r[5]+0x00000224u); // 801E1458
  c->ctr=c->r[12]; // 801E145C
  if (true) { c->lr=0x801E1464u; dispatch(c,c->ctr); } // 801E1460
  c->lr=0x801E1468u; f_801E2BB0(c); // 801E1464
  c->r[0]=0u+0x00000000u; // 801E1468
  W16(c->r[31]+0x00000010u,c->r[0]); // 801E146C
  c->r[0]=R8(c->r[1]+0x00000016u); // 801E1470
  cmps(c,0,(int32_t)c->r[0],0); // 801E1474
  if (!crb(c,2)) { goto L_801E14A0; } // 801E1478
  c->r[0]=0u+0x00000001u; // 801E147C
  W8(c->r[31]+0x0000001Au,c->r[0]); // 801E1480
  goto L_801E14A0; // 801E1484
L_801E1488:;
  c->r[0]=R8(c->r[13]+0xFFFFB6D0u); // 801E1488
  cmpu(c,0,c->r[0],0x00000005u); // 801E148C
  if (crb(c,0)) { goto L_801E14A0; } // 801E1490
  c->r[4]=c->r[30]+0x0000023Cu; // 801E1494
  c->r[3]=0u+0x00000504u; // 801E1498
  c->lr=0x801E14A0u; f_801DC730(c); // 801E149C
L_801E14A0:;
  c->r[4]=R8(c->r[31]+0x00000015u); // 801E14A0
  c->r[5]=c->r[31]+0x00000008u; // 801E14A4
  c->r[3]=0u+0x00000017u; // 801E14A8
  c->lr=0x801E14B0u; f_801DD084(c); // 801E14AC
  c->r[0]=R32(c->r[1]+0x00000044u); // 801E14B0
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801E14B4
  c->r[30]=R32(c->r[1]+0x00000038u); // 801E14B8
  c->r[29]=R32(c->r[1]+0x00000034u); // 801E14BC
  c->lr=c->r[0]; // 801E14C0
  c->r[1]=c->r[1]+0x00000040u; // 801E14C4
  return; // 801E14C8
}

// bta_hh_ctrl_dat_act
void f_801E14CC(Ctx* __restrict c) {
  trace_call(0x801E14CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E14CC
  c->r[0]=c->lr; // 801E14D0
  W32(c->r[1]+0x00000034u,c->r[0]); // 801E14D4
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801E14D8
  c->r[31]=c->r[3]|c->r[3]; // 801E14DC
  W32(c->r[1]+0x00000028u,c->r[30]); // 801E14E0
  W32(c->r[1]+0x00000024u,c->r[29]); // 801E14E4
  c->r[29]=0u+0x80280000u; // 801E14E8
  c->r[29]=c->r[29]+0xFFFFE2D0u; // 801E14EC
  c->r[4]=R32(c->r[4]+0x0000000Cu); // 801E14F0
  c->r[0]=R8(c->r[13]+0xFFFFB6D0u); // 801E14F4
  W32(c->r[1]+0x00000008u,c->r[4]); // 801E14F8
  cmpu(c,0,c->r[0],0x00000005u); // 801E14FC
  c->r[0]=R16(c->r[4]+0x00000004u); // 801E1500
  c->r[30]=c->r[4]+c->r[0]; // 801E1504
  if (crb(c,0)) { goto L_801E1578; } // 801E1508
  c->r[0]=R16(c->r[3]+0x00000010u); // 801E150C
  cmpu(c,0,c->r[0],0x00000009u); // 801E1510
  if (crb(c,1)) { goto L_801E1568; } // 801E1514
  c->r[3]=0u+0x80280000u; // 801E1518
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801E151C
  c->r[3]=c->r[3]+0xFFFFE5FCu; // 801E1520
  c->r[3]=R32(c->r[3]+c->r[0]); // 801E1524
  c->ctr=c->r[3]; // 801E1528
  if (true) { switch (c->ctr) { case 0x801E1530u: goto L_801E1530; case 0x801E1538u: goto L_801E1538; case 0x801E1540u: goto L_801E1540; case 0x801E1548u: goto L_801E1548; case 0x801E1550u: goto L_801E1550; case 0x801E1558u: goto L_801E1558; case 0x801E1560u: goto L_801E1560; case 0x801E1568u: goto L_801E1568; case 0x801E1614u: goto L_801E1614; case 0x801E161Cu: goto L_801E161C; case 0x801E1624u: goto L_801E1624; case 0x801E162Cu: goto L_801E162C; case 0x801E1634u: goto L_801E1634; case 0x801E163Cu: goto L_801E163C; case 0x801E1644u: goto L_801E1644; case 0x801E164Cu: goto L_801E164C; default: break; } dispatch(c,c->ctr); return; } // 801E152C
L_801E1530:;
  c->r[5]=c->r[29]+0x0000016Cu; // 801E1530
  goto L_801E156C; // 801E1534
L_801E1538:;
  c->r[5]=c->r[29]+0x00000180u; // 801E1538
  goto L_801E156C; // 801E153C
L_801E1540:;
  c->r[5]=c->r[29]+0x00000194u; // 801E1540
  goto L_801E156C; // 801E1544
L_801E1548:;
  c->r[5]=c->r[29]+0x000001ACu; // 801E1548
  goto L_801E156C; // 801E154C
L_801E1550:;
  c->r[5]=c->r[29]+0x000001C4u; // 801E1550
  goto L_801E156C; // 801E1554
L_801E1558:;
  c->r[5]=c->r[29]+0x000001D8u; // 801E1558
  goto L_801E156C; // 801E155C
L_801E1560:;
  c->r[5]=c->r[29]+0x000001F0u; // 801E1560
  goto L_801E156C; // 801E1564
L_801E1568:;
  c->r[5]=c->r[29]+0x00000200u; // 801E1568
L_801E156C:;
  c->r[4]=c->r[29]+0x000002A8u; // 801E156C
  c->r[3]=0u+0x00000504u; // 801E1570
  c->lr=0x801E1578u; f_801DC750(c); // 801E1574
L_801E1578:;
  c->r[0]=0u+0x00000000u; // 801E1578
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801E157C
  c->r[0]=R8(c->r[31]+0x00000016u); // 801E1580
  W8(c->r[1]+0x0000000Du,c->r[0]); // 801E1584
  c->r[4]=R16(c->r[31]+0x00000010u); // 801E1588
  cmps(c,0,(int32_t)c->r[4],7); // 801E158C
  if (crb(c,2)) { goto L_801E15E8; } // 801E1590
  if (!crb(c,0)) { goto L_801E15B0; } // 801E1594
  cmps(c,0,(int32_t)c->r[4],5); // 801E1598
  if (crb(c,2)) { goto L_801E15E8; } // 801E159C
  if (!crb(c,0)) { goto L_801E15DC; } // 801E15A0
  cmps(c,0,(int32_t)c->r[4],4); // 801E15A4
  if (!crb(c,0)) { goto L_801E15C8; } // 801E15A8
  goto L_801E15E8; // 801E15AC
L_801E15B0:;
  cmps(c,0,(int32_t)c->r[4],9); // 801E15B0
  if (crb(c,2)) { goto L_801E15E8; } // 801E15B4
  if (!crb(c,0)) { goto L_801E15E8; } // 801E15B8
  c->r[0]=R8(c->r[30]+0x00000008u); // 801E15BC
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 801E15C0
  goto L_801E165C; // 801E15C4
L_801E15C8:;
  c->r[4]=R32(c->r[1]+0x00000008u); // 801E15C8
  c->r[3]=c->r[1]+0x0000000Eu; // 801E15CC
  c->r[5]=0u+0x00000008u; // 801E15D0
  c->lr=0x801E15D8u; f_80004364(c); // 801E15D4
  goto L_801E165C; // 801E15D8
L_801E15DC:;
  c->r[0]=R8(c->r[30]+0x00000008u); // 801E15DC
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 801E15E0
  goto L_801E165C; // 801E15E4
L_801E15E8:;
  c->r[0]=R8(c->r[13]+0xFFFFB6D0u); // 801E15E8
  cmpu(c,0,c->r[0],0x00000005u); // 801E15EC
  if (crb(c,0)) { goto L_801E165C; } // 801E15F0
  cmpu(c,0,c->r[4],0x00000009u); // 801E15F4
  if (crb(c,1)) { goto L_801E164C; } // 801E15F8
  c->r[3]=0u+0x80280000u; // 801E15FC
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801E1600
  c->r[3]=c->r[3]+0xFFFFE5D4u; // 801E1604
  c->r[3]=R32(c->r[3]+c->r[0]); // 801E1608
  c->ctr=c->r[3]; // 801E160C
  if (true) { switch (c->ctr) { case 0x801E1530u: goto L_801E1530; case 0x801E1538u: goto L_801E1538; case 0x801E1540u: goto L_801E1540; case 0x801E1548u: goto L_801E1548; case 0x801E1550u: goto L_801E1550; case 0x801E1558u: goto L_801E1558; case 0x801E1560u: goto L_801E1560; case 0x801E1568u: goto L_801E1568; case 0x801E1614u: goto L_801E1614; case 0x801E161Cu: goto L_801E161C; case 0x801E1624u: goto L_801E1624; case 0x801E162Cu: goto L_801E162C; case 0x801E1634u: goto L_801E1634; case 0x801E163Cu: goto L_801E163C; case 0x801E1644u: goto L_801E1644; case 0x801E164Cu: goto L_801E164C; default: break; } dispatch(c,c->ctr); return; } // 801E1610
L_801E1614:;
  c->r[5]=c->r[29]+0x0000016Cu; // 801E1614
  goto L_801E1650; // 801E1618
L_801E161C:;
  c->r[5]=c->r[29]+0x00000180u; // 801E161C
  goto L_801E1650; // 801E1620
L_801E1624:;
  c->r[5]=c->r[29]+0x00000194u; // 801E1624
  goto L_801E1650; // 801E1628
L_801E162C:;
  c->r[5]=c->r[29]+0x000001ACu; // 801E162C
  goto L_801E1650; // 801E1630
L_801E1634:;
  c->r[5]=c->r[29]+0x000001C4u; // 801E1634
  goto L_801E1650; // 801E1638
L_801E163C:;
  c->r[5]=c->r[29]+0x000001D8u; // 801E163C
  goto L_801E1650; // 801E1640
L_801E1644:;
  c->r[5]=c->r[29]+0x000001F0u; // 801E1644
  goto L_801E1650; // 801E1648
L_801E164C:;
  c->r[5]=c->r[29]+0x00000200u; // 801E164C
L_801E1650:;
  c->r[4]=c->r[29]+0x000002CCu; // 801E1650
  c->r[3]=0u+0x00000504u; // 801E1654
  c->lr=0x801E165Cu; f_801DC750(c); // 801E1658
L_801E165C:;
  c->r[4]=R8(c->r[31]+0x00000015u); // 801E165C
  c->r[5]=c->r[31]+0x00000008u; // 801E1660
  c->r[3]=0u+0x00000017u; // 801E1664
  c->lr=0x801E166Cu; f_801DD0B8(c); // 801E1668
  c->r[4]=R8(c->r[31]+0x00000015u); // 801E166C
  c->r[5]=c->r[31]+0x00000008u; // 801E1670
  c->r[3]=0u+0x00000017u; // 801E1674
  c->lr=0x801E167Cu; f_801DD084(c); // 801E1678
  c->r[5]=0u+0x80310000u; // 801E167C
  c->r[4]=c->r[1]+0x0000000Cu; // 801E1680
  c->r[5]=c->r[5]+0xFFFF85E8u; // 801E1684
  c->r[3]=R16(c->r[31]+0x00000010u); // 801E1688
  c->r[12]=R32(c->r[5]+0x00000224u); // 801E168C
  c->ctr=c->r[12]; // 801E1690
  if (true) { c->lr=0x801E1698u; dispatch(c,c->ctr); } // 801E1694
  c->r[0]=0u+0x00000000u; // 801E1698
  c->r[3]=c->r[1]+0x00000008u; // 801E169C
  W16(c->r[31]+0x00000010u,c->r[0]); // 801E16A0
  c->lr=0x801E16A8u; f_801DD510(c); // 801E16A4
  c->r[0]=R32(c->r[1]+0x00000034u); // 801E16A8
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801E16AC
  c->r[30]=R32(c->r[1]+0x00000028u); // 801E16B0
  c->r[29]=R32(c->r[1]+0x00000024u); // 801E16B4
  c->lr=c->r[0]; // 801E16B8
  c->r[1]=c->r[1]+0x00000030u; // 801E16BC
  return; // 801E16C0
}

// bta_hh_close_act
void f_801E16C4(Ctx* __restrict c) {
  trace_call(0x801E16C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E16C4
  c->r[0]=c->lr; // 801E16C8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E16CC
  c->r[0]=0u+0x00000000u; // 801E16D0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E16D4
  c->r[31]=c->r[3]|c->r[3]; // 801E16D8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E16DC
  c->r[30]=0u+0x00000003u; // 801E16E0
  W16(c->r[1]+0x0000000Cu,c->r[0]); // 801E16E4
  c->r[0]=R8(c->r[3]+0x00000017u); // 801E16E8
  c->r[6]=R32(c->r[4]+0x00000008u); // 801E16EC
  cmps(c,0,(int32_t)c->r[0],0); // 801E16F0
  if (crb(c,2)) { goto L_801E16FC; } // 801E16F4
  c->r[30]=0u+0x0000000Du; // 801E16F8
L_801E16FC:;
  c->r[5]=R8(c->r[3]+0x00000016u); // 801E16FC
  c->r[0]=rotl(c->r[6],0)&0x00000700u; cr0(c,c->r[0]); // 801E1700
  W8(c->r[1]+0x0000000Du,c->r[5]); // 801E1704
  c->r[0]=R32(c->r[4]+0x00000008u); // 801E1708
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801E170C
  if (!crb(c,2)) { goto L_801E1730; } // 801E1710
  cmpu(c,0,c->r[6],0x0000000Fu); // 801E1714
  if (crb(c,2)) { goto L_801E1730; } // 801E1718
  cmpu(c,0,c->r[6],0x0000000Eu); // 801E171C
  if (crb(c,2)) { goto L_801E1730; } // 801E1720
  c->r[0]=R8(c->r[3]+0x0000001Au); // 801E1724
  cmps(c,0,(int32_t)c->r[0],0); // 801E1728
  if (!crb(c,2)) { goto L_801E1784; } // 801E172C
L_801E1730:;
  c->r[3]=R8(c->r[3]+0x00000016u); // 801E1730
  cmpu(c,0,c->r[6],0x0000000Fu); // 801E1734
  c->r[0]=0u+0x00000006u; // 801E1738
  W8(c->r[1]+0x00000017u,c->r[3]); // 801E173C
  if (!crb(c,2)) { goto L_801E1748; } // 801E1740
  c->r[0]=0u+0x0000000Cu; // 801E1744
L_801E1748:;
  W8(c->r[1]+0x00000016u,c->r[0]); // 801E1748
  c->r[3]=c->r[1]+0x00000010u; // 801E174C
  c->r[4]=c->r[31]+0x00000008u; // 801E1750
  c->lr=0x801E1758u; f_801DCDC4(c); // 801E1754
  c->r[3]=R8(c->r[31]+0x00000016u); // 801E1758
  c->lr=0x801E1760u; f_801F2D8C(c); // 801E175C
  c->r[5]=0u+0x80310000u; // 801E1760
  c->r[4]=c->r[1]+0x00000010u; // 801E1764
  c->r[5]=c->r[5]+0xFFFF85E8u; // 801E1768
  c->r[3]=0u+0x00000002u; // 801E176C
  c->r[12]=R32(c->r[5]+0x00000224u); // 801E1770
  c->ctr=c->r[12]; // 801E1774
  if (true) { c->lr=0x801E177Cu; dispatch(c,c->ctr); } // 801E1778
  c->lr=0x801E1780u; f_801E2BB0(c); // 801E177C
  goto L_801E18AC; // 801E1780
L_801E1784:;
  c->r[3]=R8(c->r[3]+0x00000016u); // 801E1784
  c->r[4]=R8(c->r[31]+0x00000015u); // 801E1788
  c->lr=0x801E1790u; f_801D9480(c); // 801E178C
  c->r[4]=R8(c->r[31]+0x00000015u); // 801E1790
  c->r[5]=c->r[31]+0x00000008u; // 801E1794
  c->r[3]=0u+0x00000017u; // 801E1798
  c->lr=0x801E17A0u; f_801DCF8C(c); // 801E179C
  c->r[4]=0u+0x80310000u; // 801E17A0
  c->r[0]=0u+0x00000000u; // 801E17A4
  c->r[4]=c->r[4]+0xFFFF85E8u; // 801E17A8
  c->r[3]=R8(c->r[4]+0x0000022Du); // 801E17AC
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801E17B0
  W8(c->r[4]+0x0000022Du,c->r[3]); // 801E17B4
  W8(c->r[31]+0x0000001Au,c->r[0]); // 801E17B8
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 801E17BC
  cmps(c,0,(int32_t)c->r[0],0); // 801E17C0
  if (crb(c,2)) { goto L_801E17D0; } // 801E17C4
  c->r[0]=0u+0x00000006u; // 801E17C8
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801E17CC
L_801E17D0:;
  c->r[5]=0u+0x80310000u; // 801E17D0
  c->r[3]=c->r[30]|c->r[30]; // 801E17D4
  c->r[5]=c->r[5]+0xFFFF85E8u; // 801E17D8
  c->r[4]=c->r[1]+0x0000000Cu; // 801E17DC
  c->r[12]=R32(c->r[5]+0x00000224u); // 801E17E0
  c->ctr=c->r[12]; // 801E17E4
  if (true) { c->lr=0x801E17ECu; dispatch(c,c->ctr); } // 801E17E8
  c->r[0]=R8(c->r[31]+0x00000017u); // 801E17EC
  cmps(c,0,(int32_t)c->r[0],0); // 801E17F0
  if (crb(c,2)) { goto L_801E1808; } // 801E17F4
  c->r[3]=R8(c->r[31]+0x00000016u); // 801E17F8
  c->lr=0x801E1800u; f_801F2B20(c); // 801E17FC
  c->r[3]=c->r[31]|c->r[31]; // 801E1800
  c->lr=0x801E1808u; f_801E2A20(c); // 801E1804
L_801E1808:;
  c->lr=0x801E180Cu; f_801E2BB0(c); // 801E1808
  c->r[4]=0u+0x00000000u; // 801E180C
  c->r[3]=0u+0x80310000u; // 801E1810
  W8(c->r[31]+0x00000017u,c->r[4]); // 801E1814
  c->r[3]=c->r[3]+0xFFFF85E8u; // 801E1818
  W16(c->r[31]+0x00000010u,c->r[4]); // 801E181C
  c->r[0]=R8(c->r[3]+0x0000022Du); // 801E1820
  cmps(c,0,(int32_t)c->r[0],0); // 801E1824
  if (!crb(c,2)) { goto L_801E18AC; } // 801E1828
  c->r[0]=R8(c->r[3]+0x0000022Eu); // 801E182C
  cmps(c,0,(int32_t)c->r[0],0); // 801E1830
  if (crb(c,2)) { goto L_801E18AC; } // 801E1834
  W8(c->r[1]+0x00000008u,c->r[4]); // 801E1838
  c->lr=0x801E1840u; f_801F28AC(c); // 801E183C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801E1840
  if (crb(c,2)) { goto L_801E1850; } // 801E1844
  c->r[0]=0u+0x00000006u; // 801E1848
  W8(c->r[1]+0x00000008u,c->r[0]); // 801E184C
L_801E1850:;
  c->r[31]=0u+0x80310000u; // 801E1850
  c->r[30]=0u+0x00000000u; // 801E1854
  c->r[31]=c->r[31]+0xFFFF85E8u; // 801E1858
L_801E185C:;
  c->r[0]=rotl(c->r[30],5)&0x00001FE0u; // 801E185C
  c->r[3]=c->r[31]+c->r[0]; // 801E1860
  c->r[3]=c->r[3]+0x00000014u; // 801E1864
  c->lr=0x801E186Cu; f_801DD510(c); // 801E1868
  c->r[30]=c->r[30]+0x00000001u; // 801E186C
  cmpu(c,0,c->r[30],0x00000010u); // 801E1870
  if (crb(c,0)) { IRQCHK(c); goto L_801E185C; } // 801E1874
  c->r[31]=0u+0x80310000u; // 801E1878
  c->r[31]=c->r[31]+0xFFFF85E8u; // 801E187C
  c->r[3]=c->r[31]+0x00000228u; // 801E1880
  c->lr=0x801E1888u; f_801DD510(c); // 801E1884
  c->r[12]=R32(c->r[31]+0x00000224u); // 801E1888
  c->r[4]=c->r[1]+0x00000008u; // 801E188C
  c->r[3]=0u+0x00000001u; // 801E1890
  c->ctr=c->r[12]; // 801E1894
  if (true) { c->lr=0x801E189Cu; dispatch(c,c->ctr); } // 801E1898
  c->r[3]=c->r[31]|c->r[31]; // 801E189C
  c->r[4]=0u+0x00000000u; // 801E18A0
  c->r[5]=0u+0x00000230u; // 801E18A4
  c->lr=0x801E18ACu; f_800046B4(c); // 801E18A8
L_801E18AC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E18AC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E18B0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E18B4
  c->lr=c->r[0]; // 801E18B8
  c->r[1]=c->r[1]+0x00000020u; // 801E18BC
  return; // 801E18C0
}

// bta_hh_get_dscp_act
void f_801E18C4(Ctx* __restrict c) {
  trace_call(0x801E18C4u);
  c->r[5]=0u+0x80310000u; // 801E18C4
  c->r[4]=c->r[3]|c->r[3]; // 801E18C8
  c->r[5]=c->r[5]+0xFFFF85E8u; // 801E18CC
  c->r[3]=0u+0x0000000Au; // 801E18D0
  c->r[12]=R32(c->r[5]+0x00000224u); // 801E18D4
  c->ctr=c->r[12]; // 801E18D8
  if (true) { dispatch(c,c->ctr); return; } // 801E18DC
}

// bta_hh_maint_dev_act
void f_801E18E0(Ctx* __restrict c) {
  trace_call(0x801E18E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E18E0
  c->r[0]=c->lr; // 801E18E4
  c->r[5]=0u+0x00000006u; // 801E18E8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E18EC
  c->r[0]=0u+0x000000FFu; // 801E18F0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E18F4
  c->r[31]=c->r[4]|c->r[4]; // 801E18F8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E18FC
  c->r[30]=c->r[3]|c->r[3]; // 801E1900
  W8(c->r[1]+0x00000016u,c->r[5]); // 801E1904
  W8(c->r[1]+0x00000017u,c->r[0]); // 801E1908
  c->r[0]=R16(c->r[4]+0x00000010u); // 801E190C
  cmps(c,0,(int32_t)c->r[0],12); // 801E1910
  if (crb(c,2)) { goto L_801E19B0; } // 801E1914
  if (!crb(c,0)) { goto L_801E19F4; } // 801E1918
  cmps(c,0,(int32_t)c->r[0],11); // 801E191C
  if (!crb(c,0)) { goto L_801E1928; } // 801E1920
  goto L_801E19F4; // 801E1924
L_801E1928:;
  c->r[3]=c->r[1]+0x00000010u; // 801E1928
  c->r[4]=c->r[4]+0x00000008u; // 801E192C
  c->lr=0x801E1934u; f_801DCDC4(c); // 801E1930
  c->r[3]=R8(c->r[30]+0x00000016u); // 801E1934
  cmpu(c,0,c->r[3],0x000000FFu); // 801E1938
  if (!crb(c,2)) { goto L_801E199C; } // 801E193C
  c->r[4]=R16(c->r[31]+0x0000000Eu); // 801E1940
  c->r[3]=c->r[31]+0x00000008u; // 801E1944
  c->r[5]=c->r[1]+0x00000008u; // 801E1948
  c->lr=0x801E1950u; f_801F2990(c); // 801E194C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801E1950
  if (!crb(c,2)) { goto L_801E19A8; } // 801E1954
  c->r[4]=R8(c->r[1]+0x00000008u); // 801E1958
  c->r[0]=0u+0x00000000u; // 801E195C
  W8(c->r[1]+0x00000016u,c->r[0]); // 801E1960
  c->r[3]=c->r[30]|c->r[30]; // 801E1964
  c->r[6]=0u+0x00000000u; // 801E1968
  W8(c->r[1]+0x00000017u,c->r[4]); // 801E196C
  c->r[5]=R16(c->r[31]+0x0000000Eu); // 801E1970
  c->r[7]=R8(c->r[31]+0x00000012u); // 801E1974
  c->r[8]=R8(c->r[31]+0x00000013u); // 801E1978
  c->lr=0x801E1980u; f_801E2AA0(c); // 801E197C
  c->r[3]=0u+0x80310000u; // 801E1980
  c->r[0]=R8(c->r[1]+0x00000008u); // 801E1984
  c->r[3]=c->r[3]+0xFFFF85E8u; // 801E1988
  c->r[4]=R8(c->r[30]+0x00000012u); // 801E198C
  c->r[3]=c->r[3]+c->r[0]; // 801E1990
  W8(c->r[3]+0x00000214u,c->r[4]); // 801E1994
  goto L_801E19A8; // 801E1998
L_801E199C:;
  c->r[0]=0u+0x00000000u; // 801E199C
  W8(c->r[1]+0x00000017u,c->r[3]); // 801E19A0
  W8(c->r[1]+0x00000016u,c->r[0]); // 801E19A4
L_801E19A8:;
  c->lr=0x801E19ACu; f_801E2BB0(c); // 801E19A8
  goto L_801E1A10; // 801E19AC
L_801E19B0:;
  c->r[0]=R16(c->r[4]+0x00000006u); // 801E19B0
  c->r[3]=c->r[1]+0x00000010u; // 801E19B4
  c->r[4]=c->r[30]+0x00000008u; // 801E19B8
  W8(c->r[1]+0x00000017u,c->r[0]); // 801E19BC
  c->lr=0x801E19C4u; f_801DCDC4(c); // 801E19C0
  c->r[0]=R8(c->r[30]+0x0000001Cu); // 801E19C4
  cmpu(c,0,c->r[0],0x00000003u); // 801E19C8
  if (crb(c,2)) { goto L_801E1A10; } // 801E19CC
  c->r[3]=R8(c->r[1]+0x00000017u); // 801E19D0
  c->lr=0x801E19D8u; f_801F2B20(c); // 801E19D4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801E19D8
  if (!crb(c,2)) { goto L_801E1A10; } // 801E19DC
  c->r[0]=0u+0x00000000u; // 801E19E0
  c->r[3]=c->r[30]|c->r[30]; // 801E19E4
  W8(c->r[1]+0x00000016u,c->r[0]); // 801E19E8
  c->lr=0x801E19F0u; f_801E2A20(c); // 801E19EC
  goto L_801E1A10; // 801E19F0
L_801E19F4:;
  c->r[0]=R8(c->r[13]+0xFFFFB6D0u); // 801E19F4
  cmpu(c,0,c->r[0],0x00000005u); // 801E19F8
  if (crb(c,0)) { goto L_801E1A10; } // 801E19FC
  c->r[4]=0u+0x80280000u; // 801E1A00
  c->r[3]=0u+0x00000504u; // 801E1A04
  c->r[4]=c->r[4]+0xFFFFE628u; // 801E1A08
  c->lr=0x801E1A10u; f_801DC730(c); // 801E1A0C
L_801E1A10:;
  c->r[5]=0u+0x80310000u; // 801E1A10
  c->r[4]=c->r[1]+0x00000010u; // 801E1A14
  c->r[5]=c->r[5]+0xFFFF85E8u; // 801E1A18
  c->r[3]=R16(c->r[31]+0x00000010u); // 801E1A1C
  c->r[12]=R32(c->r[5]+0x00000224u); // 801E1A20
  c->ctr=c->r[12]; // 801E1A24
  if (true) { c->lr=0x801E1A2Cu; dispatch(c,c->ctr); } // 801E1A28
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E1A2C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E1A30
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E1A34
  c->lr=c->r[0]; // 801E1A38
  c->r[1]=c->r[1]+0x00000020u; // 801E1A3C
  return; // 801E1A40
}

// bta_hh_get_acl_q_info
void f_801E1A44(Ctx* __restrict c) {
  trace_call(0x801E1A44u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E1A44
  c->r[0]=c->lr; // 801E1A48
  W32(c->r[1]+0x00000044u,c->r[0]); // 801E1A4C
  c->r[11]=c->r[1]+0x00000040u; // 801E1A50
  c->lr=0x801E1A58u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E1A54
  c->r[3]=c->r[1]+0x00000008u; // 801E1A58
  c->r[31]=0u+0x00000000u; // 801E1A5C
  c->r[4]=0u+0x00000000u; // 801E1A60
  c->r[5]=0u+0x0000001Eu; // 801E1A64
  c->lr=0x801E1A6Cu; f_800046B4(c); // 801E1A68
  c->r[30]=0u+0x80310000u; // 801E1A6C
  c->r[29]=0u+0x80310000u; // 801E1A70
  c->r[30]=c->r[30]+0xFFFFB4D8u; // 801E1A74
  c->r[27]=0u+0x00000000u; // 801E1A78
  c->r[29]=c->r[29]+0xFFFF85E8u; // 801E1A7C
L_801E1A80:;
  c->r[0]=rotl(c->r[27],5)&0x00001FE0u; // 801E1A80
  c->r[3]=c->r[29]+c->r[0]; // 801E1A84
  c->r[0]=R8(c->r[3]+0x00000028u); // 801E1A88
  cmps(c,0,(int32_t)c->r[0],0); // 801E1A8C
  if (crb(c,2)) { goto L_801E1B00; } // 801E1A90
  c->r[0]=R8(c->r[3]+0x0000002Cu); // 801E1A94
  cmpu(c,0,c->r[0],0x00000003u); // 801E1A98
  if (!crb(c,2)) { goto L_801E1B00; } // 801E1A9C
  c->r[4]=R8(c->r[3]+0x00000026u); // 801E1AA0
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 801E1AA4
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)6); // 801E1AA8
  c->r[28]=c->r[1]+0x00000008u; // 801E1AAC
  c->r[3]=0u+0x00000000u; // 801E1AB0
  c->r[28]=c->r[28]+c->r[5]; // 801E1AB4
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)52); // 801E1AB8
  W8(c->r[28]+0x00000006u,c->r[4]); // 801E1ABC
  c->r[4]=c->r[30]+c->r[0]; // 801E1AC0
  c->r[4]=R16(c->r[4]+0x00000016u); // 801E1AC4
  c->lr=0x801E1ACCu; f_801FA9A8(c); // 801E1AC8
  cmps(c,0,(int32_t)c->r[3],0); // 801E1ACC
  if (crb(c,2)) { goto L_801E1AFC; } // 801E1AD0
  c->r[3]=R32(c->r[3]+0x00000010u); // 801E1AD4
  cmps(c,0,(int32_t)c->r[3],0); // 801E1AD8
  if (crb(c,2)) { goto L_801E1AFC; } // 801E1ADC
  c->r[0]=R8(c->r[3]+0x00000000u); // 801E1AE0
  cmps(c,0,(int32_t)c->r[0],0); // 801E1AE4
  if (crb(c,2)) { goto L_801E1AFC; } // 801E1AE8
  c->r[0]=R16(c->r[3]+0x0000004Cu); // 801E1AEC
  W16(c->r[28]+0x00000008u,c->r[0]); // 801E1AF0
  c->r[0]=R16(c->r[3]+0x00000038u); // 801E1AF4
  W16(c->r[28]+0x0000000Au,c->r[0]); // 801E1AF8
L_801E1AFC:;
  c->r[31]=c->r[31]+0x00000001u; // 801E1AFC
L_801E1B00:;
  c->r[27]=c->r[27]+0x00000001u; // 801E1B00
  cmpu(c,0,c->r[27],0x00000010u); // 801E1B04
  if (crb(c,0)) { IRQCHK(c); goto L_801E1A80; } // 801E1B08
  c->r[4]=0u+0x80310000u; // 801E1B0C
  c->r[3]=0u+0x80310000u; // 801E1B10
  c->r[4]=c->r[4]+0xFFFFB8E0u; // 801E1B14
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 801E1B18
  c->r[3]=c->r[3]+0xFFFF85E8u; // 801E1B1C
  c->r[6]=R16(c->r[4]+0x00000004u); // 801E1B20
  c->r[5]=R16(c->r[4]+0x00000002u); // 801E1B24
  c->r[4]=c->r[1]+0x00000008u; // 801E1B28
  c->r[12]=R32(c->r[3]+0x00000224u); // 801E1B2C
  c->r[3]=0u+0x0000000Fu; // 801E1B30
  W16(c->r[1]+0x00000008u,c->r[6]); // 801E1B34
  W16(c->r[1]+0x0000000Au,c->r[5]); // 801E1B38
  W16(c->r[1]+0x0000000Cu,c->r[0]); // 801E1B3C
  c->ctr=c->r[12]; // 801E1B40
  if (true) { c->lr=0x801E1B48u; dispatch(c,c->ctr); } // 801E1B44
  c->r[11]=c->r[1]+0x00000040u; // 801E1B48
  c->lr=0x801E1B50u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E1B4C
  c->r[0]=R32(c->r[1]+0x00000044u); // 801E1B50
  c->lr=c->r[0]; // 801E1B54
  c->r[1]=c->r[1]+0x00000040u; // 801E1B58
  return; // 801E1B5C
}

// bta_hh_write_dev_act
void f_801E1B60(Ctx* __restrict c) {
  trace_call(0x801E1B60u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E1B60
  c->r[0]=c->lr; // 801E1B64
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E1B68
  c->r[0]=0u+0x00000000u; // 801E1B6C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E1B70
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E1B74
  c->r[30]=c->r[4]|c->r[4]; // 801E1B78
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E1B7C
  c->r[29]=c->r[3]|c->r[3]; // 801E1B80
  W16(c->r[1]+0x00000008u,c->r[0]); // 801E1B84
  c->r[31]=R8(c->r[4]+0x00000008u); // 801E1B88
  c->r[0]=R8(c->r[3]+0x00000016u); // 801E1B8C
  W8(c->r[1]+0x00000009u,c->r[0]); // 801E1B90
  c->r[3]=R8(c->r[3]+0x00000016u); // 801E1B94
  c->r[4]=R8(c->r[4]+0x00000008u); // 801E1B98
  c->r[5]=R8(c->r[30]+0x00000009u); // 801E1B9C
  c->r[6]=R16(c->r[30]+0x0000000Cu); // 801E1BA0
  c->r[7]=R8(c->r[30]+0x0000000Au); // 801E1BA4
  c->r[8]=R32(c->r[30]+0x00000010u); // 801E1BA8
  c->lr=0x801E1BB0u; f_801F2C4C(c); // 801E1BAC
  c->r[5]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[5]); // 801E1BB0
  if (crb(c,2)) { goto L_801E1C3C; } // 801E1BB4
  c->r[0]=R8(c->r[13]+0xFFFFB6D0u); // 801E1BB8
  cmpu(c,0,c->r[0],0x00000001u); // 801E1BBC
  if (crb(c,0)) { goto L_801E1BD4; } // 801E1BC0
  c->r[4]=0u+0x80280000u; // 801E1BC4
  c->r[3]=0u+0x00000500u; // 801E1BC8
  c->r[4]=c->r[4]+0xFFFFE638u; // 801E1BCC
  c->lr=0x801E1BD4u; f_801DC750(c); // 801E1BD0
L_801E1BD4:;
  c->r[0]=0u+0x00000006u; // 801E1BD4
  W8(c->r[1]+0x00000008u,c->r[0]); // 801E1BD8
  c->r[0]=R8(c->r[30]+0x00000008u); // 801E1BDC
  cmpu(c,0,c->r[0],0x00000001u); // 801E1BE0
  if (crb(c,2)) { goto L_801E1C10; } // 801E1BE4
  cmpu(c,0,c->r[0],0x0000000Au); // 801E1BE8
  if (crb(c,2)) { goto L_801E1C10; } // 801E1BEC
  c->r[5]=0u+0x80310000u; // 801E1BF0
  c->r[3]=c->r[31]|c->r[31]; // 801E1BF4
  c->r[5]=c->r[5]+0xFFFF85E8u; // 801E1BF8
  c->r[4]=c->r[1]+0x00000008u; // 801E1BFC
  c->r[12]=R32(c->r[5]+0x00000224u); // 801E1C00
  c->ctr=c->r[12]; // 801E1C04
  if (true) { c->lr=0x801E1C0Cu; dispatch(c,c->ctr); } // 801E1C08
  goto L_801E1D0C; // 801E1C0C
L_801E1C10:;
  c->r[0]=R8(c->r[30]+0x00000009u); // 801E1C10
  cmpu(c,0,c->r[0],0x00000005u); // 801E1C14
  if (!crb(c,2)) { goto L_801E1D0C; } // 801E1C18
  c->r[5]=0u+0x80310000u; // 801E1C1C
  c->r[4]=c->r[1]+0x00000008u; // 801E1C20
  c->r[5]=c->r[5]+0xFFFF85E8u; // 801E1C24
  c->r[3]=0u+0x0000000Du; // 801E1C28
  c->r[12]=R32(c->r[5]+0x00000224u); // 801E1C2C
  c->ctr=c->r[12]; // 801E1C30
  if (true) { c->lr=0x801E1C38u; dispatch(c,c->ctr); } // 801E1C34
  goto L_801E1D0C; // 801E1C38
L_801E1C3C:;
  c->r[5]=R8(c->r[30]+0x00000008u); // 801E1C3C
  cmps(c,0,(int32_t)c->r[5],10); // 801E1C40
  if (crb(c,2)) { goto L_801E1C70; } // 801E1C44
  if (!crb(c,0)) { goto L_801E1C88; } // 801E1C48
  cmps(c,0,(int32_t)c->r[5],1); // 801E1C4C
  if (crb(c,2)) { goto L_801E1C70; } // 801E1C50
  if (crb(c,0)) { goto L_801E1C88; } // 801E1C54
  cmps(c,0,(int32_t)c->r[5],4); // 801E1C58
  if (!crb(c,0)) { goto L_801E1C68; } // 801E1C5C
  goto L_801E1C88; // 801E1C60
  goto L_801E1C88; // 801E1C64
L_801E1C68:;
  W16(c->r[29]+0x00000010u,c->r[31]); // 801E1C68
  goto L_801E1CA4; // 801E1C6C
L_801E1C70:;
  c->r[0]=R8(c->r[30]+0x00000009u); // 801E1C70
  cmpu(c,0,c->r[0],0x00000005u); // 801E1C74
  if (!crb(c,2)) { goto L_801E1CA4; } // 801E1C78
  c->r[0]=0u+0x00000001u; // 801E1C7C
  W8(c->r[29]+0x00000017u,c->r[0]); // 801E1C80
  goto L_801E1CA4; // 801E1C84
L_801E1C88:;
  c->r[0]=R8(c->r[13]+0xFFFFB6D0u); // 801E1C88
  cmpu(c,0,c->r[0],0x00000005u); // 801E1C8C
  if (crb(c,0)) { goto L_801E1CA4; } // 801E1C90
  c->r[4]=0u+0x80280000u; // 801E1C94
  c->r[3]=0u+0x00000504u; // 801E1C98
  c->r[4]=c->r[4]+0xFFFFE654u; // 801E1C9C
  c->lr=0x801E1CA4u; f_801DC750(c); // 801E1CA0
L_801E1CA4:;
  c->r[0]=R8(c->r[30]+0x00000008u); // 801E1CA4
  cmpu(c,0,c->r[0],0x00000001u); // 801E1CA8
  if (crb(c,2)) { goto L_801E1CD4; } // 801E1CAC
  c->r[4]=R8(c->r[29]+0x00000015u); // 801E1CB0
  c->r[5]=c->r[29]+0x00000008u; // 801E1CB4
  c->r[3]=0u+0x00000017u; // 801E1CB8
  c->lr=0x801E1CC0u; f_801DD0B8(c); // 801E1CBC
  c->r[4]=R8(c->r[29]+0x00000015u); // 801E1CC0
  c->r[5]=c->r[29]+0x00000008u; // 801E1CC4
  c->r[3]=0u+0x00000017u; // 801E1CC8
  c->lr=0x801E1CD0u; f_801DD084(c); // 801E1CCC
  goto L_801E1D0C; // 801E1CD0
L_801E1CD4:;
  c->r[0]=R8(c->r[30]+0x00000009u); // 801E1CD4
  cmpu(c,0,c->r[0],0x00000003u); // 801E1CD8
  if (!crb(c,2)) { goto L_801E1CF4; } // 801E1CDC
  c->r[4]=R8(c->r[29]+0x00000015u); // 801E1CE0
  c->r[5]=c->r[29]+0x00000008u; // 801E1CE4
  c->r[3]=0u+0x00000017u; // 801E1CE8
  c->lr=0x801E1CF0u; f_801DD050(c); // 801E1CEC
  goto L_801E1D0C; // 801E1CF0
L_801E1CF4:;
  cmpu(c,0,c->r[0],0x00000004u); // 801E1CF4
  if (!crb(c,2)) { goto L_801E1D0C; } // 801E1CF8
  c->r[4]=R8(c->r[29]+0x00000015u); // 801E1CFC
  c->r[5]=c->r[29]+0x00000008u; // 801E1D00
  c->r[3]=0u+0x00000017u; // 801E1D04
  c->lr=0x801E1D0Cu; f_801DD0B8(c); // 801E1D08
L_801E1D0C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E1D0C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E1D10
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E1D14
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E1D18
  c->lr=c->r[0]; // 801E1D1C
  c->r[1]=c->r[1]+0x00000020u; // 801E1D20
  return; // 801E1D24
}

// bta_hh_cback
void f_801E1D28(Ctx* __restrict c) {
  trace_call(0x801E1D28u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E1D28
  c->r[0]=c->lr; // 801E1D2C
  c->r[7]=0u+0x80280000u; // 801E1D30
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E1D34
  c->r[7]=c->r[7]+0xFFFFE2D0u; // 801E1D38
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E1D3C
  c->r[31]=0u+0x00001710u; // 801E1D40
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E1D44
  c->r[30]=c->r[5]|c->r[5]; // 801E1D48
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E1D4C
  c->r[29]=c->r[4]|c->r[4]; // 801E1D50
  W32(c->r[1]+0x00000010u,c->r[28]); // 801E1D54
  c->r[28]=c->r[3]|c->r[3]; // 801E1D58
  c->r[0]=R8(c->r[13]+0xFFFFB6D0u); // 801E1D5C
  W32(c->r[1]+0x00000008u,c->r[6]); // 801E1D60
  cmpu(c,0,c->r[0],0x00000005u); // 801E1D64
  if (crb(c,0)) { goto L_801E1DE4; } // 801E1D68
  cmpu(c,0,c->r[4],0x00000008u); // 801E1D6C
  if (crb(c,1)) { goto L_801E1DD4; } // 801E1D70
  c->r[3]=0u+0x80280000u; // 801E1D74
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801E1D78
  c->r[3]=c->r[3]+0xFFFFE7A4u; // 801E1D7C
  c->r[3]=R32(c->r[3]+c->r[0]); // 801E1D80
  c->ctr=c->r[3]; // 801E1D84
  if (true) { switch (c->ctr) { case 0x801E1D8Cu: goto L_801E1D8C; case 0x801E1D94u: goto L_801E1D94; case 0x801E1D9Cu: goto L_801E1D9C; case 0x801E1DA4u: goto L_801E1DA4; case 0x801E1DACu: goto L_801E1DAC; case 0x801E1DB4u: goto L_801E1DB4; case 0x801E1DBCu: goto L_801E1DBC; case 0x801E1DC4u: goto L_801E1DC4; case 0x801E1DCCu: goto L_801E1DCC; case 0x801E1E04u: goto L_801E1E04; case 0x801E1E0Cu: goto L_801E1E0C; case 0x801E1E14u: goto L_801E1E14; case 0x801E1E1Cu: goto L_801E1E1C; case 0x801E1E24u: goto L_801E1E24; case 0x801E1E2Cu: goto L_801E1E2C; case 0x801E1E38u: goto L_801E1E38; case 0x801E1F70u: goto L_801E1F70; default: break; } dispatch(c,c->ctr); return; } // 801E1D88
L_801E1D8C:;
  c->r[5]=c->r[7]+0x000003ACu; // 801E1D8C
  goto L_801E1DD8; // 801E1D90
L_801E1D94:;
  c->r[5]=c->r[7]+0x000003C0u; // 801E1D94
  goto L_801E1DD8; // 801E1D98
L_801E1D9C:;
  c->r[5]=c->r[7]+0x000003D4u; // 801E1D9C
  goto L_801E1DD8; // 801E1DA0
L_801E1DA4:;
  c->r[5]=c->r[7]+0x000003ECu; // 801E1DA4
  goto L_801E1DD8; // 801E1DA8
L_801E1DAC:;
  c->r[5]=c->r[7]+0x00000404u; // 801E1DAC
  goto L_801E1DD8; // 801E1DB0
L_801E1DB4:;
  c->r[5]=c->r[7]+0x0000041Cu; // 801E1DB4
  goto L_801E1DD8; // 801E1DB8
L_801E1DBC:;
  c->r[5]=c->r[7]+0x00000434u; // 801E1DBC
  goto L_801E1DD8; // 801E1DC0
L_801E1DC4:;
  c->r[5]=c->r[7]+0x0000044Cu; // 801E1DC4
  goto L_801E1DD8; // 801E1DC8
L_801E1DCC:;
  c->r[5]=c->r[7]+0x00000464u; // 801E1DCC
  goto L_801E1DD8; // 801E1DD0
L_801E1DD4:;
  c->r[5]=c->r[7]+0x0000047Cu; // 801E1DD4
L_801E1DD8:;
  c->r[4]=c->r[7]+0x00000490u; // 801E1DD8
  c->r[3]=0u+0x00000504u; // 801E1DDC
  c->lr=0x801E1DE4u; f_801DC750(c); // 801E1DE0
L_801E1DE4:;
  cmpu(c,0,c->r[29],0x00000008u); // 801E1DE4
  if (crb(c,1)) { goto L_801E1F70; } // 801E1DE8
  c->r[3]=0u+0x80280000u; // 801E1DEC
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 801E1DF0
  c->r[3]=c->r[3]+0xFFFFE780u; // 801E1DF4
  c->r[3]=R32(c->r[3]+c->r[0]); // 801E1DF8
  c->ctr=c->r[3]; // 801E1DFC
  if (true) { switch (c->ctr) { case 0x801E1D8Cu: goto L_801E1D8C; case 0x801E1D94u: goto L_801E1D94; case 0x801E1D9Cu: goto L_801E1D9C; case 0x801E1DA4u: goto L_801E1DA4; case 0x801E1DACu: goto L_801E1DAC; case 0x801E1DB4u: goto L_801E1DB4; case 0x801E1DBCu: goto L_801E1DBC; case 0x801E1DC4u: goto L_801E1DC4; case 0x801E1DCCu: goto L_801E1DCC; case 0x801E1E04u: goto L_801E1E04; case 0x801E1E0Cu: goto L_801E1E0C; case 0x801E1E14u: goto L_801E1E14; case 0x801E1E1Cu: goto L_801E1E1C; case 0x801E1E24u: goto L_801E1E24; case 0x801E1E2Cu: goto L_801E1E2C; case 0x801E1E38u: goto L_801E1E38; case 0x801E1F70u: goto L_801E1F70; default: break; } dispatch(c,c->ctr); return; } // 801E1E00
L_801E1E04:;
  c->r[31]=0u+0x00001702u; // 801E1E04
  goto L_801E1F70; // 801E1E08
L_801E1E0C:;
  c->r[31]=0u+0x00001703u; // 801E1E0C
  goto L_801E1F70; // 801E1E10
L_801E1E14:;
  c->r[31]=0u+0x00001704u; // 801E1E14
  goto L_801E1F70; // 801E1E18
L_801E1E1C:;
  c->r[31]=0u+0x00001706u; // 801E1E1C
  goto L_801E1F70; // 801E1E20
L_801E1E24:;
  c->r[31]=0u+0x00001705u; // 801E1E24
  goto L_801E1F70; // 801E1E28
L_801E1E2C:;
  c->r[3]=c->r[1]+0x00000008u; // 801E1E2C
  c->lr=0x801E1E34u; f_801DD510(c); // 801E1E30
  goto L_801E1F70; // 801E1E34
L_801E1E38:;
  c->r[4]=0u+0x80310000u; // 801E1E38
  c->r[0]=0u+0x00000002u; // 801E1E3C
  c->r[4]=c->r[4]+0xFFFF85E8u; // 801E1E40
  c->r[5]=0u+0x00000000u; // 801E1E44
  c->ctr=c->r[0]; // 801E1E48
L_801E1E4C:;
  c->r[0]=rotl(c->r[5],5)&0x00001FE0u; // 801E1E4C
  c->r[3]=c->r[4]+c->r[0]; // 801E1E50
  c->r[0]=R8(c->r[3]+0x00000026u); // 801E1E54
  cmpu(c,0,c->r[28],c->r[0]); // 801E1E58
  if (!crb(c,2)) { goto L_801E1E6C; } // 801E1E5C
  c->r[0]=0u+0x00000001u; // 801E1E60
  W8(c->r[3]+0x00000027u,c->r[0]); // 801E1E64
  goto L_801E1F70; // 801E1E68
L_801E1E6C:;
  c->r[5]=c->r[5]+0x00000001u; // 801E1E6C
  c->r[0]=rotl(c->r[5],5)&0x00001FE0u; // 801E1E70
  c->r[3]=c->r[4]+c->r[0]; // 801E1E74
  c->r[0]=R8(c->r[3]+0x00000026u); // 801E1E78
  cmpu(c,0,c->r[28],c->r[0]); // 801E1E7C
  if (!crb(c,2)) { goto L_801E1E90; } // 801E1E80
  c->r[0]=0u+0x00000001u; // 801E1E84
  W8(c->r[3]+0x00000027u,c->r[0]); // 801E1E88
  goto L_801E1F70; // 801E1E8C
L_801E1E90:;
  c->r[5]=c->r[5]+0x00000001u; // 801E1E90
  c->r[0]=rotl(c->r[5],5)&0x00001FE0u; // 801E1E94
  c->r[3]=c->r[4]+c->r[0]; // 801E1E98
  c->r[0]=R8(c->r[3]+0x00000026u); // 801E1E9C
  cmpu(c,0,c->r[28],c->r[0]); // 801E1EA0
  if (!crb(c,2)) { goto L_801E1EB4; } // 801E1EA4
  c->r[0]=0u+0x00000001u; // 801E1EA8
  W8(c->r[3]+0x00000027u,c->r[0]); // 801E1EAC
  goto L_801E1F70; // 801E1EB0
L_801E1EB4:;
  c->r[5]=c->r[5]+0x00000001u; // 801E1EB4
  c->r[0]=rotl(c->r[5],5)&0x00001FE0u; // 801E1EB8
  c->r[3]=c->r[4]+c->r[0]; // 801E1EBC
  c->r[0]=R8(c->r[3]+0x00000026u); // 801E1EC0
  cmpu(c,0,c->r[28],c->r[0]); // 801E1EC4
  if (!crb(c,2)) { goto L_801E1ED8; } // 801E1EC8
  c->r[0]=0u+0x00000001u; // 801E1ECC
  W8(c->r[3]+0x00000027u,c->r[0]); // 801E1ED0
  goto L_801E1F70; // 801E1ED4
L_801E1ED8:;
  c->r[5]=c->r[5]+0x00000001u; // 801E1ED8
  c->r[0]=rotl(c->r[5],5)&0x00001FE0u; // 801E1EDC
  c->r[3]=c->r[4]+c->r[0]; // 801E1EE0
  c->r[0]=R8(c->r[3]+0x00000026u); // 801E1EE4
  cmpu(c,0,c->r[28],c->r[0]); // 801E1EE8
  if (!crb(c,2)) { goto L_801E1EFC; } // 801E1EEC
  c->r[0]=0u+0x00000001u; // 801E1EF0
  W8(c->r[3]+0x00000027u,c->r[0]); // 801E1EF4
  goto L_801E1F70; // 801E1EF8
L_801E1EFC:;
  c->r[5]=c->r[5]+0x00000001u; // 801E1EFC
  c->r[0]=rotl(c->r[5],5)&0x00001FE0u; // 801E1F00
  c->r[3]=c->r[4]+c->r[0]; // 801E1F04
  c->r[0]=R8(c->r[3]+0x00000026u); // 801E1F08
  cmpu(c,0,c->r[28],c->r[0]); // 801E1F0C
  if (!crb(c,2)) { goto L_801E1F20; } // 801E1F10
  c->r[0]=0u+0x00000001u; // 801E1F14
  W8(c->r[3]+0x00000027u,c->r[0]); // 801E1F18
  goto L_801E1F70; // 801E1F1C
L_801E1F20:;
  c->r[5]=c->r[5]+0x00000001u; // 801E1F20
  c->r[0]=rotl(c->r[5],5)&0x00001FE0u; // 801E1F24
  c->r[3]=c->r[4]+c->r[0]; // 801E1F28
  c->r[0]=R8(c->r[3]+0x00000026u); // 801E1F2C
  cmpu(c,0,c->r[28],c->r[0]); // 801E1F30
  if (!crb(c,2)) { goto L_801E1F44; } // 801E1F34
  c->r[0]=0u+0x00000001u; // 801E1F38
  W8(c->r[3]+0x00000027u,c->r[0]); // 801E1F3C
  goto L_801E1F70; // 801E1F40
L_801E1F44:;
  c->r[5]=c->r[5]+0x00000001u; // 801E1F44
  c->r[0]=rotl(c->r[5],5)&0x00001FE0u; // 801E1F48
  c->r[3]=c->r[4]+c->r[0]; // 801E1F4C
  c->r[0]=R8(c->r[3]+0x00000026u); // 801E1F50
  cmpu(c,0,c->r[28],c->r[0]); // 801E1F54
  if (!crb(c,2)) { goto L_801E1F68; } // 801E1F58
  c->r[0]=0u+0x00000001u; // 801E1F5C
  W8(c->r[3]+0x00000027u,c->r[0]); // 801E1F60
  goto L_801E1F70; // 801E1F64
L_801E1F68:;
  c->r[5]=c->r[5]+0x00000001u; // 801E1F68
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E1E4C; } // 801E1F6C
L_801E1F70:;
  cmpu(c,0,c->r[31],0x00001710u); // 801E1F70
  if (crb(c,2)) { goto L_801E1FA0; } // 801E1F74
  c->r[3]=0u+0x00000018u; // 801E1F78
  c->lr=0x801E1F80u; f_801D99E0(c); // 801E1F7C
  cmps(c,0,(int32_t)c->r[3],0); // 801E1F80
  if (crb(c,2)) { goto L_801E1FA0; } // 801E1F84
  W16(c->r[3]+0x00000000u,c->r[31]); // 801E1F88
  W16(c->r[3]+0x00000006u,c->r[28]); // 801E1F8C
  W32(c->r[3]+0x00000008u,c->r[30]); // 801E1F90
  c->r[0]=R32(c->r[1]+0x00000008u); // 801E1F94
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801E1F98
  c->lr=0x801E1FA0u; f_801DD270(c); // 801E1F9C
L_801E1FA0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E1FA0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E1FA4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E1FA8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E1FAC
  c->r[28]=R32(c->r[1]+0x00000010u); // 801E1FB0
  c->lr=c->r[0]; // 801E1FB4
  c->r[1]=c->r[1]+0x00000020u; // 801E1FB8
  return; // 801E1FBC
}

// BTA_HhEnable
void f_801E1FC0(Ctx* __restrict c) {
  trace_call(0x801E1FC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E1FC0
  c->r[0]=c->lr; // 801E1FC4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E1FC8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E1FCC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E1FD0
  c->r[30]=c->r[4]|c->r[4]; // 801E1FD4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E1FD8
  c->r[29]=c->r[3]|c->r[3]; // 801E1FDC
  c->lr=0x801E1FE4u; f_801DB070(c); // 801E1FE0
  c->r[3]=0u+0x00000017u; // 801E1FE4
  c->r[4]=c->r[2]+0xFFFFA288u; // 801E1FE8
  c->lr=0x801E1FF0u; f_801DD25C(c); // 801E1FEC
  c->lr=0x801E1FF4u; f_801DB080(c); // 801E1FF0
  c->r[3]=0u+0x00000034u; // 801E1FF4
  c->lr=0x801E1FFCu; f_801D99E0(c); // 801E1FF8
  cmps(c,0,(int32_t)c->r[3],0); // 801E1FFC
  c->r[31]=c->r[3]|c->r[3]; // 801E2000
  if (crb(c,2)) { goto L_801E202C; } // 801E2004
  c->r[4]=0u+0x00000000u; // 801E2008
  c->r[5]=0u+0x00000034u; // 801E200C
  c->lr=0x801E2014u; f_800046B4(c); // 801E2010
  c->r[0]=0u+0x0000170Cu; // 801E2014
  c->r[3]=c->r[31]|c->r[31]; // 801E2018
  W16(c->r[31]+0x00000000u,c->r[0]); // 801E201C
  W32(c->r[31]+0x00000030u,c->r[30]); // 801E2020
  W8(c->r[31]+0x00000008u,c->r[29]); // 801E2024
  c->lr=0x801E202Cu; f_801DD270(c); // 801E2028
L_801E202C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E202C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E2030
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E2034
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E2038
  c->lr=c->r[0]; // 801E203C
  c->r[1]=c->r[1]+0x00000020u; // 801E2040
  return; // 801E2044
}

// BTA_HhDisable
void f_801E2048(Ctx* __restrict c) {
  trace_call(0x801E2048u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E2048
  c->r[0]=c->lr; // 801E204C
  c->r[3]=0u+0x00000008u; // 801E2050
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E2054
  c->lr=0x801E205Cu; f_801D99E0(c); // 801E2058
  cmps(c,0,(int32_t)c->r[3],0); // 801E205C
  if (crb(c,2)) { goto L_801E2070; } // 801E2060
  c->r[0]=0u+0x0000170Du; // 801E2064
  W16(c->r[3]+0x00000000u,c->r[0]); // 801E2068
  c->lr=0x801E2070u; f_801DD270(c); // 801E206C
L_801E2070:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E2070
  c->lr=c->r[0]; // 801E2074
  c->r[1]=c->r[1]+0x00000010u; // 801E2078
  return; // 801E207C
}

// BTA_HhClose
void f_801E2080(Ctx* __restrict c) {
  trace_call(0x801E2080u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E2080
  c->r[0]=c->lr; // 801E2084
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E2088
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E208C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E2090
  c->r[30]=c->r[3]|c->r[3]; // 801E2094
  c->r[3]=0u+0x00000008u; // 801E2098
  c->lr=0x801E20A0u; f_801D99E0(c); // 801E209C
  cmps(c,0,(int32_t)c->r[3],0); // 801E20A0
  c->r[31]=c->r[3]|c->r[3]; // 801E20A4
  if (crb(c,2)) { goto L_801E20CC; } // 801E20A8
  c->r[4]=0u+0x00000000u; // 801E20AC
  c->r[5]=0u+0x00000008u; // 801E20B0
  c->lr=0x801E20B8u; f_800046B4(c); // 801E20B4
  c->r[0]=0u+0x00001701u; // 801E20B8
  c->r[3]=c->r[31]|c->r[31]; // 801E20BC
  W16(c->r[31]+0x00000000u,c->r[0]); // 801E20C0
  W16(c->r[31]+0x00000006u,c->r[30]); // 801E20C4
  c->lr=0x801E20CCu; f_801DD270(c); // 801E20C8
L_801E20CC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E20CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E20D0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E20D4
  c->lr=c->r[0]; // 801E20D8
  c->r[1]=c->r[1]+0x00000010u; // 801E20DC
  return; // 801E20E0
}

// BTA_HhOpen
void f_801E20E4(Ctx* __restrict c) {
  trace_call(0x801E20E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E20E4
  c->r[0]=c->lr; // 801E20E8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E20EC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E20F0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E20F4
  c->r[30]=c->r[5]|c->r[5]; // 801E20F8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E20FC
  c->r[29]=c->r[4]|c->r[4]; // 801E2100
  W32(c->r[1]+0x00000010u,c->r[28]); // 801E2104
  c->r[28]=c->r[3]|c->r[3]; // 801E2108
  c->r[3]=0u+0x00000010u; // 801E210C
  c->lr=0x801E2114u; f_801D99E0(c); // 801E2110
  cmps(c,0,(int32_t)c->r[3],0); // 801E2114
  c->r[31]=c->r[3]|c->r[3]; // 801E2118
  if (crb(c,2)) { goto L_801E215C; } // 801E211C
  c->r[4]=0u+0x00000000u; // 801E2120
  c->r[5]=0u+0x00000010u; // 801E2124
  c->lr=0x801E212Cu; f_800046B4(c); // 801E2128
  c->r[3]=0u+0x00001700u; // 801E212C
  c->r[0]=0u+0x000000FFu; // 801E2130
  W16(c->r[31]+0x00000000u,c->r[3]); // 801E2134
  c->r[4]=c->r[28]|c->r[28]; // 801E2138
  c->r[3]=c->r[31]+0x00000008u; // 801E213C
  W16(c->r[31]+0x00000006u,c->r[0]); // 801E2140
  W8(c->r[31]+0x0000000Eu,c->r[30]); // 801E2144
  W8(c->r[31]+0x0000000Fu,c->r[29]); // 801E2148
  c->lr=0x801E2150u; f_801DCDC4(c); // 801E214C
  c->r[3]=c->r[31]|c->r[31]; // 801E2150
  c->lr=0x801E2158u; f_801DD270(c); // 801E2154
  goto L_801E2178; // 801E2158
L_801E215C:;
  c->r[0]=R8(c->r[13]+0xFFFFB6D0u); // 801E215C
  cmpu(c,0,c->r[0],0x00000001u); // 801E2160
  if (crb(c,0)) { goto L_801E2178; } // 801E2164
  c->r[4]=0u+0x80280000u; // 801E2168
  c->r[3]=0u+0x00000500u; // 801E216C
  c->r[4]=c->r[4]+0xFFFFE7C8u; // 801E2170
  c->lr=0x801E2178u; f_801DC730(c); // 801E2174
L_801E2178:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E2178
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E217C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E2180
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E2184
  c->r[28]=R32(c->r[1]+0x00000010u); // 801E2188
  c->lr=c->r[0]; // 801E218C
  c->r[1]=c->r[1]+0x00000020u; // 801E2190
  return; // 801E2194
}

// BTA_HhSendData
void f_801E2198(Ctx* __restrict c) {
  trace_call(0x801E2198u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E2198
  c->r[0]=c->lr; // 801E219C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E21A0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E21A4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E21A8
  c->r[30]=c->r[4]|c->r[4]; // 801E21AC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E21B0
  c->r[29]=c->r[3]|c->r[3]; // 801E21B4
  c->r[3]=0u+0x00000014u; // 801E21B8
  c->lr=0x801E21C0u; f_801D99E0(c); // 801E21BC
  cmps(c,0,(int32_t)c->r[3],0); // 801E21C0
  c->r[31]=c->r[3]|c->r[3]; // 801E21C4
  if (crb(c,2)) { goto L_801E220C; } // 801E21C8
  c->r[4]=0u+0x00000000u; // 801E21CC
  c->r[5]=0u+0x00000014u; // 801E21D0
  c->lr=0x801E21D8u; f_800046B4(c); // 801E21D4
  c->r[0]=0u+0x00001708u; // 801E21D8
  c->r[5]=0u+0x0000000Au; // 801E21DC
  W16(c->r[31]+0x00000000u,c->r[0]); // 801E21E0
  c->r[4]=0u+0x00000000u; // 801E21E4
  c->r[0]=0u+0x00000002u; // 801E21E8
  c->r[3]=c->r[31]|c->r[31]; // 801E21EC
  W16(c->r[31]+0x00000006u,c->r[29]); // 801E21F0
  W8(c->r[31]+0x00000008u,c->r[5]); // 801E21F4
  W16(c->r[31]+0x0000000Cu,c->r[4]); // 801E21F8
  W8(c->r[31]+0x00000009u,c->r[0]); // 801E21FC
  W32(c->r[31]+0x00000010u,c->r[30]); // 801E2200
  W8(c->r[31]+0x0000000Au,c->r[4]); // 801E2204
  c->lr=0x801E220Cu; f_801DD270(c); // 801E2208
L_801E220C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E220C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E2210
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E2214
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E2218
  c->lr=c->r[0]; // 801E221C
  c->r[1]=c->r[1]+0x00000020u; // 801E2220
  return; // 801E2224
}

// BTA_HhAddDev
void f_801E2228(Ctx* __restrict c) {
  trace_call(0x801E2228u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E2228
  c->r[0]=c->lr; // 801E222C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E2230
  c->r[11]=c->r[1]+0x00000020u; // 801E2234
  c->lr=0x801E223Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E2238
  c->r[26]=c->r[3]|c->r[3]; // 801E223C
  c->r[27]=c->r[4]|c->r[4]; // 801E2240
  c->r[28]=c->r[5]|c->r[5]; // 801E2244
  c->r[29]=c->r[6]|c->r[6]; // 801E2248
  c->r[30]=c->r[7]|c->r[7]; // 801E224C
  c->r[3]=0u+0x0000001Cu; // 801E2250
  c->lr=0x801E2258u; f_801D99E0(c); // 801E2254
  cmps(c,0,(int32_t)c->r[3],0); // 801E2258
  c->r[31]=c->r[3]|c->r[3]; // 801E225C
  if (crb(c,2)) { goto L_801E22B8; } // 801E2260
  c->r[4]=0u+0x00000000u; // 801E2264
  c->r[5]=0u+0x0000001Cu; // 801E2268
  c->lr=0x801E2270u; f_800046B4(c); // 801E226C
  c->r[0]=0u+0x0000170Au; // 801E2270
  c->r[5]=0u+0x0000000Bu; // 801E2274
  W16(c->r[31]+0x00000000u,c->r[0]); // 801E2278
  c->r[0]=0u+0x000000FFu; // 801E227C
  c->r[4]=c->r[30]|c->r[30]; // 801E2280
  c->r[3]=c->r[31]+0x00000014u; // 801E2284
  W16(c->r[31]+0x00000010u,c->r[5]); // 801E2288
  c->r[5]=0u+0x00000008u; // 801E228C
  W16(c->r[31]+0x00000006u,c->r[0]); // 801E2290
  W16(c->r[31]+0x0000000Eu,c->r[27]); // 801E2294
  W8(c->r[31]+0x00000012u,c->r[28]); // 801E2298
  W8(c->r[31]+0x00000013u,c->r[29]); // 801E229C
  c->lr=0x801E22A4u; f_80004364(c); // 801E22A0
  c->r[4]=c->r[26]|c->r[26]; // 801E22A4
  c->r[3]=c->r[31]+0x00000008u; // 801E22A8
  c->lr=0x801E22B0u; f_801DCDC4(c); // 801E22AC
  c->r[3]=c->r[31]|c->r[31]; // 801E22B0
  c->lr=0x801E22B8u; f_801DD270(c); // 801E22B4
L_801E22B8:;
  c->r[11]=c->r[1]+0x00000020u; // 801E22B8
  c->lr=0x801E22C0u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E22BC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E22C0
  c->lr=c->r[0]; // 801E22C4
  c->r[1]=c->r[1]+0x00000020u; // 801E22C8
  return; // 801E22CC
}

// BTA_HhRemoveDev
void f_801E22D0(Ctx* __restrict c) {
  trace_call(0x801E22D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E22D0
  c->r[0]=c->lr; // 801E22D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E22D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E22DC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E22E0
  c->r[30]=c->r[3]|c->r[3]; // 801E22E4
  c->r[3]=0u+0x0000001Cu; // 801E22E8
  c->lr=0x801E22F0u; f_801D99E0(c); // 801E22EC
  cmps(c,0,(int32_t)c->r[3],0); // 801E22F0
  c->r[31]=c->r[3]|c->r[3]; // 801E22F4
  if (crb(c,2)) { goto L_801E2324; } // 801E22F8
  c->r[4]=0u+0x00000000u; // 801E22FC
  c->r[5]=0u+0x0000001Cu; // 801E2300
  c->lr=0x801E2308u; f_800046B4(c); // 801E2304
  c->r[3]=0u+0x0000170Au; // 801E2308
  c->r[0]=0u+0x0000000Cu; // 801E230C
  W16(c->r[31]+0x00000000u,c->r[3]); // 801E2310
  c->r[3]=c->r[31]|c->r[31]; // 801E2314
  W16(c->r[31]+0x00000010u,c->r[0]); // 801E2318
  W16(c->r[31]+0x00000006u,c->r[30]); // 801E231C
  c->lr=0x801E2324u; f_801DD270(c); // 801E2320
L_801E2324:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E2324
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E2328
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E232C
  c->lr=c->r[0]; // 801E2330
  c->r[1]=c->r[1]+0x00000010u; // 801E2334
  return; // 801E2338
}

// BTA_HhGetAclQueueInfo
void f_801E233C(Ctx* __restrict c) {
  trace_call(0x801E233Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E233C
  c->r[0]=c->lr; // 801E2340
  c->r[3]=0u+0x00000008u; // 801E2344
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E2348
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E234C
  c->lr=0x801E2354u; f_801D99E0(c); // 801E2350
  cmps(c,0,(int32_t)c->r[3],0); // 801E2354
  c->r[31]=c->r[3]|c->r[3]; // 801E2358
  if (crb(c,2)) { goto L_801E237C; } // 801E235C
  c->r[4]=0u+0x00000000u; // 801E2360
  c->r[5]=0u+0x00000008u; // 801E2364
  c->lr=0x801E236Cu; f_800046B4(c); // 801E2368
  c->r[0]=0u+0x0000170Eu; // 801E236C
  c->r[3]=c->r[31]|c->r[31]; // 801E2370
  W16(c->r[31]+0x00000000u,c->r[0]); // 801E2374
  c->lr=0x801E237Cu; f_801DD270(c); // 801E2378
L_801E237C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E237C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E2380
  c->lr=c->r[0]; // 801E2384
  c->r[1]=c->r[1]+0x00000010u; // 801E2388
  return; // 801E238C
}

// bta_hh_sm_execute
void f_801E2390(Ctx* __restrict c) {
  trace_call(0x801E2390u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E2390
  c->r[0]=c->lr; // 801E2394
  W32(c->r[1]+0x00000044u,c->r[0]); // 801E2398
  c->r[11]=c->r[1]+0x00000040u; // 801E239C
  c->lr=0x801E23A4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E23A0
  c->r[31]=0u+0x80280000u; // 801E23A4
  c->r[27]=c->r[3]|c->r[3]; // 801E23A8
  c->r[28]=c->r[4]|c->r[4]; // 801E23AC
  c->r[29]=c->r[5]|c->r[5]; // 801E23B0
  c->r[31]=c->r[31]+0xFFFFE7F8u; // 801E23B4
  c->r[3]=c->r[1]+0x00000008u; // 801E23B8
  c->r[30]=0u+0x00000000u; // 801E23BC
  c->r[4]=0u+0x00000000u; // 801E23C0
  c->r[5]=0u+0x00000020u; // 801E23C4
  c->lr=0x801E23CCu; f_800046B4(c); // 801E23C8
  cmps(c,0,(int32_t)c->r[27],0); // 801E23CC
  if (!crb(c,2)) { goto L_801E2528; } // 801E23D0
  c->r[3]=0u+0x80310000u; // 801E23D4
  c->r[3]=c->r[3]+0xFFFF85E8u; // 801E23D8
  c->r[0]=R32(c->r[3]+0x00000224u); // 801E23DC
  cmps(c,0,(int32_t)c->r[0],0); // 801E23E0
  if (crb(c,2)) { goto L_801E26CC; } // 801E23E4
  cmps(c,0,(int32_t)c->r[28],5896); // 801E23E8
  if (crb(c,2)) { goto L_801E247C; } // 801E23EC
  if (!crb(c,0)) { goto L_801E240C; } // 801E23F0
  cmps(c,0,(int32_t)c->r[28],5889); // 801E23F4
  if (crb(c,2)) { goto L_801E24D0; } // 801E23F8
  if (!crb(c,0)) { goto L_801E24E8; } // 801E23FC
  cmps(c,0,(int32_t)c->r[28],5888); // 801E2400
  if (!crb(c,0)) { goto L_801E2418; } // 801E2404
  goto L_801E24E8; // 801E2408
L_801E240C:;
  cmps(c,0,(int32_t)c->r[28],5898); // 801E240C
  if (crb(c,2)) { goto L_801E243C; } // 801E2410
  goto L_801E24E8; // 801E2414
L_801E2418:;
  c->r[3]=c->r[1]+0x00000008u; // 801E2418
  c->r[4]=c->r[29]+0x00000008u; // 801E241C
  c->r[30]=0u+0x00000002u; // 801E2420
  c->lr=0x801E2428u; f_801DCDC4(c); // 801E2424
  c->r[3]=0u+0x00000009u; // 801E2428
  c->r[0]=0u+0x000000FFu; // 801E242C
  W8(c->r[1]+0x0000000Eu,c->r[3]); // 801E2430
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 801E2434
  goto L_801E2504; // 801E2438
L_801E243C:;
  c->r[30]=R16(c->r[29]+0x00000010u); // 801E243C
  cmpu(c,0,c->r[30],0x0000000Bu); // 801E2440
  if (!crb(c,2)) { goto L_801E2468; } // 801E2444
  c->r[3]=c->r[1]+0x00000008u; // 801E2448
  c->r[4]=c->r[29]+0x00000008u; // 801E244C
  c->lr=0x801E2454u; f_801DCDC4(c); // 801E2450
  c->r[3]=0u+0x00000009u; // 801E2454
  c->r[0]=0u+0x000000FFu; // 801E2458
  W8(c->r[1]+0x0000000Eu,c->r[3]); // 801E245C
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 801E2460
  goto L_801E2504; // 801E2464
L_801E2468:;
  c->r[0]=0u+0x0000000Du; // 801E2468
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 801E246C
  c->r[0]=R16(c->r[29]+0x00000006u); // 801E2470
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 801E2474
  goto L_801E2504; // 801E2478
L_801E247C:;
  c->r[30]=R8(c->r[29]+0x00000008u); // 801E247C
  cmpu(c,0,c->r[30],0x00000007u); // 801E2480
  if (crb(c,2)) { goto L_801E2498; } // 801E2484
  cmpu(c,0,c->r[30],0x00000005u); // 801E2488
  if (crb(c,2)) { goto L_801E2498; } // 801E248C
  cmpu(c,0,c->r[30],0x00000009u); // 801E2490
  if (!crb(c,2)) { goto L_801E24AC; } // 801E2494
L_801E2498:;
  c->r[0]=0u+0x0000000Du; // 801E2498
  W8(c->r[1]+0x00000008u,c->r[0]); // 801E249C
  c->r[0]=R16(c->r[29]+0x00000006u); // 801E24A0
  W8(c->r[1]+0x00000009u,c->r[0]); // 801E24A4
  goto L_801E2504; // 801E24A8
L_801E24AC:;
  cmpu(c,0,c->r[30],0x0000000Au); // 801E24AC
  if (crb(c,2)) { goto L_801E2504; } // 801E24B0
  cmpu(c,0,c->r[30],0x00000001u); // 801E24B4
  if (crb(c,2)) { goto L_801E2504; } // 801E24B8
  c->r[3]=R16(c->r[29]+0x00000006u); // 801E24BC
  c->r[0]=0u+0x0000000Du; // 801E24C0
  W8(c->r[1]+0x00000009u,c->r[3]); // 801E24C4
  W8(c->r[1]+0x00000008u,c->r[0]); // 801E24C8
  goto L_801E2504; // 801E24CC
L_801E24D0:;
  c->r[0]=0u+0x0000000Du; // 801E24D0
  c->r[30]=0u+0x00000003u; // 801E24D4
  W8(c->r[1]+0x00000008u,c->r[0]); // 801E24D8
  c->r[0]=R16(c->r[29]+0x00000006u); // 801E24DC
  W8(c->r[1]+0x00000009u,c->r[0]); // 801E24E0
  goto L_801E2504; // 801E24E4
L_801E24E8:;
  c->r[0]=R8(c->r[13]+0xFFFFB6D0u); // 801E24E8
  cmpu(c,0,c->r[0],0x00000001u); // 801E24EC
  if (crb(c,0)) { goto L_801E2504; } // 801E24F0
  c->r[5]=R16(c->r[29]+0x00000006u); // 801E24F4
  c->r[4]=c->r[31]+0x00000000u; // 801E24F8
  c->r[3]=0u+0x00000500u; // 801E24FC
  c->lr=0x801E2504u; f_801DC750(c); // 801E2500
L_801E2504:;
  c->r[3]=rotl(c->r[30],0)&0x0000FFFFu; cr0(c,c->r[3]); // 801E2504
  if (crb(c,2)) { goto L_801E26CC; } // 801E2508
  c->r[5]=0u+0x80310000u; // 801E250C
  c->r[4]=c->r[1]+0x00000008u; // 801E2510
  c->r[5]=c->r[5]+0xFFFF85E8u; // 801E2514
  c->r[12]=R32(c->r[5]+0x00000224u); // 801E2518
  c->ctr=c->r[12]; // 801E251C
  if (true) { c->lr=0x801E2524u; dispatch(c,c->ctr); } // 801E2520
  goto L_801E26CC; // 801E2524
L_801E2528:;
  c->r[0]=R8(c->r[13]+0xFFFFB6D0u); // 801E2528
  c->r[30]=R8(c->r[27]+0x0000001Cu); // 801E252C
  cmpu(c,0,c->r[0],0x00000004u); // 801E2530
  if (crb(c,0)) { goto L_801E25A4; } // 801E2534
  cmps(c,0,(int32_t)c->r[30],2); // 801E2538
  if (crb(c,2)) { goto L_801E2570; } // 801E253C
  if (!crb(c,0)) { goto L_801E2554; } // 801E2540
  cmps(c,0,(int32_t)c->r[30],0); // 801E2544
  if (crb(c,2)) { goto L_801E2560; } // 801E2548
  if (!crb(c,0)) { goto L_801E2568; } // 801E254C
  goto L_801E2580; // 801E2550
L_801E2554:;
  cmps(c,0,(int32_t)c->r[30],4); // 801E2554
  if (!crb(c,0)) { goto L_801E2580; } // 801E2558
  goto L_801E2578; // 801E255C
L_801E2560:;
  c->r[26]=c->r[31]+0x0000001Cu; // 801E2560
  goto L_801E2584; // 801E2564
L_801E2568:;
  c->r[26]=c->r[31]+0x0000002Cu; // 801E2568
  goto L_801E2584; // 801E256C
L_801E2570:;
  c->r[26]=c->r[31]+0x0000003Cu; // 801E2570
  goto L_801E2584; // 801E2574
L_801E2578:;
  c->r[26]=c->r[31]+0x00000050u; // 801E2578
  goto L_801E2584; // 801E257C
L_801E2580:;
  c->r[26]=c->r[31]+0x00000060u; // 801E2580
L_801E2584:;
  c->r[3]=c->r[28]|c->r[28]; // 801E2584
  c->lr=0x801E258Cu; f_801E2830(c); // 801E2588
  c->r[7]=c->r[3]|c->r[3]; // 801E258C
  c->r[5]=c->r[30]|c->r[30]; // 801E2590
  c->r[6]=c->r[26]|c->r[26]; // 801E2594
  c->r[4]=c->r[31]+0x00000078u; // 801E2598
  c->r[3]=0u+0x00000503u; // 801E259C
  c->lr=0x801E25A4u; f_801DC790(c); // 801E25A0
L_801E25A4:;
  c->r[4]=R8(c->r[27]+0x0000001Cu); // 801E25A4
  c->r[3]=0u+0x80230000u; // 801E25A8
  c->r[3]=c->r[3]+0xFFFFC5E8u; // 801E25AC
  c->r[28]=rotl(c->r[28],0)&0x000000FFu; // 801E25B0
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801E25B4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801E25B8
  c->r[4]=rotl(c->r[28],1)&0xFFFFFFFEu; // 801E25BC
  c->r[5]=R32(c->r[3]+c->r[0]); // 801E25C0
  c->r[3]=c->r[5]+c->r[4]; // 801E25C4
  c->r[0]=R8(c->r[3]+0x00000001u); // 801E25C8
  W8(c->r[27]+0x0000001Cu,c->r[0]); // 801E25CC
  c->r[0]=R8(c->r[5]+c->r[4]); // 801E25D0
  cmpu(c,0,c->r[0],0x0000000Cu); // 801E25D4
  if (crb(c,2)) { goto L_801E25FC; } // 801E25D8
  c->r[4]=0u+0x80230000u; // 801E25DC
  c->r[0]=rotl(c->r[0],2)&0x000003FCu; // 801E25E0
  c->r[4]=c->r[4]+0xFFFFC570u; // 801E25E4
  c->r[3]=c->r[27]|c->r[27]; // 801E25E8
  c->r[12]=R32(c->r[4]+c->r[0]); // 801E25EC
  c->r[4]=c->r[29]|c->r[29]; // 801E25F0
  c->ctr=c->r[12]; // 801E25F4
  if (true) { c->lr=0x801E25FCu; dispatch(c,c->ctr); } // 801E25F8
L_801E25FC:;
  c->r[3]=R8(c->r[27]+0x0000001Cu); // 801E25FC
  cmpu(c,0,c->r[30],c->r[3]); // 801E2600
  if (crb(c,2)) { goto L_801E26CC; } // 801E2604
  c->r[0]=R8(c->r[13]+0xFFFFB6D0u); // 801E2608
  cmpu(c,0,c->r[0],0x00000005u); // 801E260C
  if (crb(c,0)) { goto L_801E26CC; } // 801E2610
  cmps(c,0,(int32_t)c->r[30],2); // 801E2614
  if (crb(c,2)) { goto L_801E264C; } // 801E2618
  if (!crb(c,0)) { goto L_801E2630; } // 801E261C
  cmps(c,0,(int32_t)c->r[30],0); // 801E2620
  if (crb(c,2)) { goto L_801E263C; } // 801E2624
  if (!crb(c,0)) { goto L_801E2644; } // 801E2628
  goto L_801E265C; // 801E262C
L_801E2630:;
  cmps(c,0,(int32_t)c->r[30],4); // 801E2630
  if (!crb(c,0)) { goto L_801E265C; } // 801E2634
  goto L_801E2654; // 801E2638
L_801E263C:;
  c->r[26]=c->r[31]+0x0000001Cu; // 801E263C
  goto L_801E2660; // 801E2640
L_801E2644:;
  c->r[26]=c->r[31]+0x0000002Cu; // 801E2644
  goto L_801E2660; // 801E2648
L_801E264C:;
  c->r[26]=c->r[31]+0x0000003Cu; // 801E264C
  goto L_801E2660; // 801E2650
L_801E2654:;
  c->r[26]=c->r[31]+0x00000050u; // 801E2654
  goto L_801E2660; // 801E2658
L_801E265C:;
  c->r[26]=c->r[31]+0x00000060u; // 801E265C
L_801E2660:;
  cmps(c,0,(int32_t)c->r[3],2); // 801E2660
  if (crb(c,2)) { goto L_801E2698; } // 801E2664
  if (!crb(c,0)) { goto L_801E267C; } // 801E2668
  cmps(c,0,(int32_t)c->r[3],0); // 801E266C
  if (crb(c,2)) { goto L_801E2688; } // 801E2670
  if (!crb(c,0)) { goto L_801E2690; } // 801E2674
  goto L_801E26A8; // 801E2678
L_801E267C:;
  cmps(c,0,(int32_t)c->r[3],4); // 801E267C
  if (!crb(c,0)) { goto L_801E26A8; } // 801E2680
  goto L_801E26A0; // 801E2684
L_801E2688:;
  c->r[27]=c->r[31]+0x0000001Cu; // 801E2688
  goto L_801E26AC; // 801E268C
L_801E2690:;
  c->r[27]=c->r[31]+0x0000002Cu; // 801E2690
  goto L_801E26AC; // 801E2694
L_801E2698:;
  c->r[27]=c->r[31]+0x0000003Cu; // 801E2698
  goto L_801E26AC; // 801E269C
L_801E26A0:;
  c->r[27]=c->r[31]+0x00000050u; // 801E26A0
  goto L_801E26AC; // 801E26A4
L_801E26A8:;
  c->r[27]=c->r[31]+0x00000060u; // 801E26A8
L_801E26AC:;
  c->r[3]=c->r[28]|c->r[28]; // 801E26AC
  c->lr=0x801E26B4u; f_801E2830(c); // 801E26B0
  c->r[7]=c->r[3]|c->r[3]; // 801E26B4
  c->r[5]=c->r[26]|c->r[26]; // 801E26B8
  c->r[6]=c->r[27]|c->r[27]; // 801E26BC
  c->r[4]=c->r[31]+0x000000ACu; // 801E26C0
  c->r[3]=0u+0x00000504u; // 801E26C4
  c->lr=0x801E26CCu; f_801DC790(c); // 801E26C8
L_801E26CC:;
  c->r[11]=c->r[1]+0x00000040u; // 801E26CC
  c->lr=0x801E26D4u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E26D0
  c->r[0]=R32(c->r[1]+0x00000044u); // 801E26D4
  c->lr=c->r[0]; // 801E26D8
  c->r[1]=c->r[1]+0x00000040u; // 801E26DC
  return; // 801E26E0
}

// bta_hh_hdl_event
void f_801E26E4(Ctx* __restrict c) {
  trace_call(0x801E26E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E26E4
  c->r[0]=c->lr; // 801E26E8
  c->r[6]=0u+0x00000010u; // 801E26EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E26F0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E26F4
  c->r[31]=0u+0x00000000u; // 801E26F8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E26FC
  c->r[30]=c->r[3]|c->r[3]; // 801E2700
  c->r[0]=R16(c->r[3]+0x00000000u); // 801E2704
  cmps(c,0,(int32_t)c->r[0],5902); // 801E2708
  if (crb(c,2)) { goto L_801E2748; } // 801E270C
  if (!crb(c,0)) { goto L_801E2724; } // 801E2710
  cmps(c,0,(int32_t)c->r[0],5900); // 801E2714
  if (crb(c,2)) { goto L_801E2730; } // 801E2718
  if (!crb(c,0)) { goto L_801E2738; } // 801E271C
  goto L_801E2750; // 801E2720
L_801E2724:;
  cmps(c,0,(int32_t)c->r[0],5904); // 801E2724
  if (!crb(c,0)) { goto L_801E2750; } // 801E2728
  goto L_801E2740; // 801E272C
L_801E2730:;
  c->lr=0x801E2734u; f_801E0878(c); // 801E2730
  goto L_801E2814; // 801E2734
L_801E2738:;
  c->lr=0x801E273Cu; f_801E09EC(c); // 801E2738
  goto L_801E2814; // 801E273C
L_801E2740:;
  c->lr=0x801E2744u; f_801E0AF0(c); // 801E2740
  goto L_801E2814; // 801E2744
L_801E2748:;
  c->lr=0x801E274Cu; f_801E1A44(c); // 801E2748
  goto L_801E2814; // 801E274C
L_801E2750:;
  cmpu(c,0,c->r[0],0x00001700u); // 801E2750
  if (!crb(c,2)) { goto L_801E2768; } // 801E2754
  c->r[3]=c->r[3]+0x00000008u; // 801E2758
  c->lr=0x801E2760u; f_801E28E4(c); // 801E275C
  c->r[6]=c->r[3]|c->r[3]; // 801E2760
  goto L_801E27C0; // 801E2764
L_801E2768:;
  cmpu(c,0,c->r[0],0x0000170Au); // 801E2768
  if (!crb(c,2)) { goto L_801E27A4; } // 801E276C
  c->r[0]=R16(c->r[3]+0x00000010u); // 801E2770
  cmpu(c,0,c->r[0],0x0000000Bu); // 801E2774
  if (!crb(c,2)) { goto L_801E278C; } // 801E2778
  c->r[3]=c->r[3]+0x00000008u; // 801E277C
  c->lr=0x801E2784u; f_801E28E4(c); // 801E2780
  c->r[6]=c->r[3]|c->r[3]; // 801E2784
  goto L_801E27C0; // 801E2788
L_801E278C:;
  c->r[4]=0u+0x80310000u; // 801E278C
  c->r[0]=R16(c->r[3]+0x00000006u); // 801E2790
  c->r[4]=c->r[4]+0xFFFF85E8u; // 801E2794
  c->r[3]=c->r[4]+c->r[0]; // 801E2798
  c->r[6]=R8(c->r[3]+0x00000214u); // 801E279C
  goto L_801E27C0; // 801E27A0
L_801E27A4:;
  c->r[0]=R16(c->r[3]+0x00000006u); // 801E27A4
  cmpu(c,0,c->r[0],0x00000010u); // 801E27A8
  if (!crb(c,0)) { goto L_801E27C0; } // 801E27AC
  c->r[3]=0u+0x80310000u; // 801E27B0
  c->r[3]=c->r[3]+0xFFFF85E8u; // 801E27B4
  c->r[3]=c->r[3]+c->r[0]; // 801E27B8
  c->r[6]=R8(c->r[3]+0x00000214u); // 801E27BC
L_801E27C0:;
  c->r[0]=rotl(c->r[6],0)&0x000000FFu; // 801E27C0
  cmpu(c,0,c->r[0],0x00000010u); // 801E27C4
  if (crb(c,2)) { goto L_801E27E0; } // 801E27C8
  c->r[3]=0u+0x80310000u; // 801E27CC
  c->r[0]=rotl(c->r[6],5)&0x00001FE0u; // 801E27D0
  c->r[3]=c->r[3]+0xFFFF85E8u; // 801E27D4
  c->r[3]=c->r[3]+c->r[0]; // 801E27D8
  c->r[31]=c->r[3]+0x00000010u; // 801E27DC
L_801E27E0:;
  c->r[0]=R8(c->r[13]+0xFFFFB6D0u); // 801E27E0
  cmpu(c,0,c->r[0],0x00000005u); // 801E27E4
  if (crb(c,0)) { goto L_801E2804; } // 801E27E8
  c->r[4]=0u+0x80280000u; // 801E27EC
  c->r[5]=R16(c->r[30]+0x00000006u); // 801E27F0
  c->r[4]=c->r[4]+0xFFFFE8D4u; // 801E27F4
  c->r[6]=rotl(c->r[6],0)&0x000000FFu; // 801E27F8
  c->r[3]=0u+0x00000504u; // 801E27FC
  c->lr=0x801E2804u; f_801DC770(c); // 801E2800
L_801E2804:;
  c->r[4]=R16(c->r[30]+0x00000000u); // 801E2804
  c->r[3]=c->r[31]|c->r[31]; // 801E2808
  c->r[5]=c->r[30]|c->r[30]; // 801E280C
  c->lr=0x801E2814u; f_801E2390(c); // 801E2810
L_801E2814:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E2814
  c->r[3]=0u+0x00000001u; // 801E2818
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E281C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E2820
  c->lr=c->r[0]; // 801E2824
  c->r[1]=c->r[1]+0x00000010u; // 801E2828
  return; // 801E282C
}

// bta_hh_evt_code
void f_801E2830(Ctx* __restrict c) {
  trace_call(0x801E2830u);
  c->r[0]=c->r[3]+0xFFFFE900u; // 801E2830
  c->r[4]=0u+0x80280000u; // 801E2834
  cmpu(c,0,c->r[0],0x0000000Fu); // 801E2838
  c->r[4]=c->r[4]+0xFFFFE7F8u; // 801E283C
  if (crb(c,1)) { goto L_801E28DC; } // 801E2840
  c->r[3]=0u+0x80280000u; // 801E2844
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801E2848
  c->r[3]=c->r[3]+0xFFFFEA98u; // 801E284C
  c->r[3]=R32(c->r[3]+c->r[0]); // 801E2850
  c->ctr=c->r[3]; // 801E2854
  if (true) { switch (c->ctr) { case 0x801E285Cu: goto L_801E285C; case 0x801E2864u: goto L_801E2864; case 0x801E286Cu: goto L_801E286C; case 0x801E2874u: goto L_801E2874; case 0x801E287Cu: goto L_801E287C; case 0x801E2884u: goto L_801E2884; case 0x801E288Cu: goto L_801E288C; case 0x801E2894u: goto L_801E2894; case 0x801E289Cu: goto L_801E289C; case 0x801E28A4u: goto L_801E28A4; case 0x801E28ACu: goto L_801E28AC; case 0x801E28B4u: goto L_801E28B4; case 0x801E28BCu: goto L_801E28BC; case 0x801E28C4u: goto L_801E28C4; case 0x801E28CCu: goto L_801E28CC; case 0x801E28D4u: goto L_801E28D4; default: break; } dispatch(c,c->ctr); return; } // 801E2858
L_801E285C:;
  c->r[3]=c->r[4]+0x00000108u; // 801E285C
  return; // 801E2860
L_801E2864:;
  c->r[3]=c->r[4]+0x00000120u; // 801E2864
  return; // 801E2868
L_801E286C:;
  c->r[3]=c->r[4]+0x00000138u; // 801E286C
  return; // 801E2870
L_801E2874:;
  c->r[3]=c->r[4]+0x0000014Cu; // 801E2874
  return; // 801E2878
L_801E287C:;
  c->r[3]=c->r[4]+0x00000164u; // 801E287C
  return; // 801E2880
L_801E2884:;
  c->r[3]=c->r[4]+0x00000178u; // 801E2884
  return; // 801E2888
L_801E288C:;
  c->r[3]=c->r[4]+0x00000190u; // 801E288C
  return; // 801E2890
L_801E2894:;
  c->r[3]=c->r[4]+0x000001A8u; // 801E2894
  return; // 801E2898
L_801E289C:;
  c->r[3]=c->r[4]+0x000001BCu; // 801E289C
  return; // 801E28A0
L_801E28A4:;
  c->r[3]=c->r[4]+0x000001D4u; // 801E28A4
  return; // 801E28A8
L_801E28AC:;
  c->r[3]=c->r[4]+0x000001F0u; // 801E28AC
  return; // 801E28B0
L_801E28B4:;
  c->r[3]=c->r[4]+0x00000204u; // 801E28B4
  return; // 801E28B8
L_801E28BC:;
  c->r[3]=c->r[4]+0x0000021Cu; // 801E28BC
  return; // 801E28C0
L_801E28C4:;
  c->r[3]=c->r[4]+0x00000238u; // 801E28C4
  return; // 801E28C8
L_801E28CC:;
  c->r[3]=c->r[4]+0x00000250u; // 801E28CC
  return; // 801E28D0
L_801E28D4:;
  c->r[3]=c->r[4]+0x00000268u; // 801E28D4
  return; // 801E28D8
L_801E28DC:;
  c->r[3]=c->r[4]+0x00000284u; // 801E28DC
  return; // 801E28E0
}

// bta_hh_find_cb
void f_801E28E4(Ctx* __restrict c) {
  trace_call(0x801E28E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E28E4
  c->r[0]=c->lr; // 801E28E8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E28EC
  c->r[11]=c->r[1]+0x00000020u; // 801E28F0
  c->lr=0x801E28F8u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E28F4
  c->r[31]=0u+0x80310000u; // 801E28F8
  c->r[30]=0u+0x80280000u; // 801E28FC
  c->r[27]=c->r[3]|c->r[3]; // 801E2900
  c->r[28]=0u+0x00000000u; // 801E2904
  c->r[30]=c->r[30]+0xFFFFEAD8u; // 801E2908
  c->r[31]=c->r[31]+0xFFFF85E8u; // 801E290C
L_801E2910:;
  c->r[29]=rotl(c->r[28],5)&0x00001FE0u; // 801E2910
  c->r[3]=c->r[27]|c->r[27]; // 801E2914
  c->r[4]=c->r[31]+c->r[29]; // 801E2918
  c->r[4]=c->r[4]+0x00000018u; // 801E291C
  c->lr=0x801E2924u; f_801DCDF8(c); // 801E2920
  cmps(c,0,(int32_t)c->r[3],0); // 801E2924
  if (!crb(c,2)) { goto L_801E296C; } // 801E2928
  c->r[3]=c->r[27]|c->r[27]; // 801E292C
  c->r[4]=c->r[2]+0xFFFFA7E8u; // 801E2930
  c->lr=0x801E2938u; f_801DCDF8(c); // 801E2934
  cmps(c,0,(int32_t)c->r[3],0); // 801E2938
  if (crb(c,2)) { goto L_801E296C; } // 801E293C
  c->r[0]=R8(c->r[13]+0xFFFFB6D0u); // 801E2940
  cmpu(c,0,c->r[0],0x00000005u); // 801E2944
  if (crb(c,0)) { goto L_801E2964; } // 801E2948
  c->r[3]=c->r[31]+c->r[29]; // 801E294C
  c->r[4]=c->r[30]+0x00000000u; // 801E2950
  c->r[6]=R8(c->r[3]+0x00000026u); // 801E2954
  c->r[5]=rotl(c->r[28],0)&0x000000FFu; // 801E2958
  c->r[3]=0u+0x00000504u; // 801E295C
  c->lr=0x801E2964u; f_801DC770(c); // 801E2960
L_801E2964:;
  c->r[3]=c->r[28]|c->r[28]; // 801E2964
  goto L_801E2A08; // 801E2968
L_801E296C:;
  c->r[0]=R8(c->r[13]+0xFFFFB6D0u); // 801E296C
  cmpu(c,0,c->r[0],0x00000005u); // 801E2970
  if (crb(c,0)) { goto L_801E2998; } // 801E2974
  c->r[8]=c->r[31]+c->r[29]; // 801E2978
  c->r[4]=c->r[30]+0x00000024u; // 801E297C
  c->r[5]=R8(c->r[8]+0x00000028u); // 801E2980
  c->r[6]=rotl(c->r[28],0)&0x000000FFu; // 801E2984
  c->r[7]=R8(c->r[8]+0x00000026u); // 801E2988
  c->r[3]=0u+0x00000504u; // 801E298C
  c->r[8]=R8(c->r[8]+0x0000002Cu); // 801E2990
  c->lr=0x801E2998u; f_801DC7B0(c); // 801E2994
L_801E2998:;
  c->r[28]=c->r[28]+0x00000001u; // 801E2998
  cmpu(c,0,c->r[28],0x00000010u); // 801E299C
  if (crb(c,0)) { IRQCHK(c); goto L_801E2910; } // 801E29A0
  c->r[4]=0u+0x80310000u; // 801E29A4
  c->r[0]=0u+0x00000010u; // 801E29A8
  c->r[4]=c->r[4]+0xFFFF85E8u; // 801E29AC
  c->r[29]=0u+0x00000000u; // 801E29B0
  c->ctr=c->r[0]; // 801E29B4
L_801E29B8:;
  c->r[0]=rotl(c->r[29],5)&0x00001FE0u; // 801E29B8
  c->r[3]=c->r[4]+c->r[0]; // 801E29BC
  c->r[0]=R8(c->r[3]+0x00000028u); // 801E29C0
  cmps(c,0,(int32_t)c->r[0],0); // 801E29C4
  if (!crb(c,2)) { goto L_801E29DC; } // 801E29C8
  c->r[4]=c->r[27]|c->r[27]; // 801E29CC
  c->r[3]=c->r[3]+0x00000018u; // 801E29D0
  c->lr=0x801E29D8u; f_801DCDC4(c); // 801E29D4
  goto L_801E29E4; // 801E29D8
L_801E29DC:;
  c->r[29]=c->r[29]+0x00000001u; // 801E29DC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E29B8; } // 801E29E0
L_801E29E4:;
  c->r[0]=R8(c->r[13]+0xFFFFB6D0u); // 801E29E4
  cmpu(c,0,c->r[0],0x00000005u); // 801E29E8
  if (crb(c,0)) { goto L_801E2A04; } // 801E29EC
  c->r[4]=c->r[30]+0x00000058u; // 801E29F0
  c->r[5]=rotl(c->r[29],0)&0x000000FFu; // 801E29F4
  c->r[3]=0u+0x00000504u; // 801E29F8
  c->r[6]=0u+0x00000010u; // 801E29FC
  c->lr=0x801E2A04u; f_801DC770(c); // 801E2A00
L_801E2A04:;
  c->r[3]=c->r[29]|c->r[29]; // 801E2A04
L_801E2A08:;
  c->r[11]=c->r[1]+0x00000020u; // 801E2A08
  c->lr=0x801E2A10u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E2A0C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E2A10
  c->lr=c->r[0]; // 801E2A14
  c->r[1]=c->r[1]+0x00000020u; // 801E2A18
  return; // 801E2A1C
}

// bta_hh_clean_up_kdev
void f_801E2A20(Ctx* __restrict c) {
  trace_call(0x801E2A20u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E2A20
  c->r[0]=c->lr; // 801E2A24
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E2A28
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E2A2C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E2A30
  c->r[30]=c->r[3]|c->r[3]; // 801E2A34
  c->r[5]=R8(c->r[3]+0x00000016u); // 801E2A38
  cmpu(c,0,c->r[5],0x000000FFu); // 801E2A3C
  if (crb(c,2)) { goto L_801E2A58; } // 801E2A40
  c->r[4]=0u+0x80310000u; // 801E2A44
  c->r[0]=0u+0x00000010u; // 801E2A48
  c->r[4]=c->r[4]+0xFFFF85E8u; // 801E2A4C
  c->r[4]=c->r[4]+c->r[5]; // 801E2A50
  W8(c->r[4]+0x00000214u,c->r[0]); // 801E2A54
L_801E2A58:;
  c->r[31]=R8(c->r[3]+0x00000012u); // 801E2A58
  c->r[3]=c->r[3]+0x00000004u; // 801E2A5C
  c->lr=0x801E2A64u; f_801DD510(c); // 801E2A60
  c->r[3]=c->r[30]|c->r[30]; // 801E2A64
  c->r[4]=0u+0x00000000u; // 801E2A68
  c->r[5]=0u+0x00000020u; // 801E2A6C
  c->lr=0x801E2A74u; f_800046B4(c); // 801E2A70
  c->r[3]=0u+0x00000001u; // 801E2A74
  c->r[0]=0u+0x000000FFu; // 801E2A78
  W8(c->r[30]+0x00000012u,c->r[31]); // 801E2A7C
  W8(c->r[30]+0x0000001Cu,c->r[3]); // 801E2A80
  W8(c->r[30]+0x00000016u,c->r[0]); // 801E2A84
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E2A88
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E2A8C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E2A90
  c->lr=c->r[0]; // 801E2A94
  c->r[1]=c->r[1]+0x00000010u; // 801E2A98
  return; // 801E2A9C
}

// bta_hh_add_device_to_list
void f_801E2AA0(Ctx* __restrict c) {
  trace_call(0x801E2AA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E2AA0
  c->r[0]=c->lr; // 801E2AA4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E2AA8
  c->r[11]=c->r[1]+0x00000020u; // 801E2AAC
  c->lr=0x801E2AB4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E2AB0
  c->r[0]=R8(c->r[13]+0xFFFFB6D0u); // 801E2AB4
  c->r[26]=c->r[3]|c->r[3]; // 801E2AB8
  c->r[27]=c->r[4]|c->r[4]; // 801E2ABC
  c->r[28]=c->r[5]|c->r[5]; // 801E2AC0
  cmpu(c,0,c->r[0],0x00000005u); // 801E2AC4
  c->r[29]=c->r[6]|c->r[6]; // 801E2AC8
  c->r[30]=c->r[7]|c->r[7]; // 801E2ACC
  c->r[31]=c->r[8]|c->r[8]; // 801E2AD0
  if (crb(c,0)) { goto L_801E2AEC; } // 801E2AD4
  c->r[4]=0u+0x80280000u; // 801E2AD8
  c->r[5]=c->r[30]|c->r[30]; // 801E2ADC
  c->r[4]=c->r[4]+0xFFFFEB5Cu; // 801E2AE0
  c->r[3]=0u+0x00000504u; // 801E2AE4
  c->lr=0x801E2AECu; f_801DC750(c); // 801E2AE8
L_801E2AEC:;
  c->r[0]=0u+0x00000001u; // 801E2AEC
  cmps(c,0,(int32_t)c->r[29],0); // 801E2AF0
  W8(c->r[26]+0x00000016u,c->r[27]); // 801E2AF4
  W8(c->r[26]+0x00000018u,c->r[0]); // 801E2AF8
  W16(c->r[26]+0x0000000Eu,c->r[28]); // 801E2AFC
  W8(c->r[26]+0x00000013u,c->r[30]); // 801E2B00
  W8(c->r[26]+0x00000015u,c->r[31]); // 801E2B04
  if (crb(c,2)) { goto L_801E2B44; } // 801E2B08
  c->r[3]=c->r[26]+0x00000004u; // 801E2B0C
  c->lr=0x801E2B14u; f_801DD510(c); // 801E2B10
  c->r[3]=R16(c->r[29]+0x00000000u); // 801E2B14
  cmps(c,0,(int32_t)c->r[3],0); // 801E2B18
  if (crb(c,2)) { goto L_801E2B44; } // 801E2B1C
  c->lr=0x801E2B24u; f_801D99E0(c); // 801E2B20
  cmps(c,0,(int32_t)c->r[3],0); // 801E2B24
  W32(c->r[26]+0x00000004u,c->r[3]); // 801E2B28
  if (crb(c,2)) { goto L_801E2B44; } // 801E2B2C
  c->r[0]=R16(c->r[29]+0x00000000u); // 801E2B30
  W16(c->r[26]+0x00000000u,c->r[0]); // 801E2B34
  c->r[4]=R32(c->r[29]+0x00000004u); // 801E2B38
  c->r[5]=R16(c->r[29]+0x00000000u); // 801E2B3C
  c->lr=0x801E2B44u; f_80004364(c); // 801E2B40
L_801E2B44:;
  c->r[11]=c->r[1]+0x00000020u; // 801E2B44
  c->lr=0x801E2B4Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E2B48
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E2B4C
  c->lr=c->r[0]; // 801E2B50
  c->r[1]=c->r[1]+0x00000020u; // 801E2B54
  return; // 801E2B58
}

// bta_hh_tod_spt
void f_801E2B5C(Ctx* __restrict c) {
  trace_call(0x801E2B5Cu);
  c->r[7]=R32(c->r[13]+0xFFFFAB98u); // 801E2B5C
  c->r[9]=rotl(c->r[4],30)&0x0000003Fu; // 801E2B60
  c->r[8]=0u+0x00000000u; // 801E2B64
  c->r[5]=R8(c->r[7]+0x00000000u); // 801E2B68
  goto L_801E2B9C; // 801E2B6C
L_801E2B70:;
  c->r[4]=R32(c->r[7]+0x00000004u); // 801E2B70
  c->r[6]=rotl(c->r[8],1)&0x000001FEu; // 801E2B74
  c->r[0]=R8(c->r[4]+c->r[6]); // 801E2B78
  cmpu(c,0,c->r[9],c->r[0]); // 801E2B7C
  if (!crb(c,2)) { goto L_801E2B98; } // 801E2B80
  c->r[4]=c->r[4]+c->r[6]; // 801E2B84
  c->r[0]=R8(c->r[4]+0x00000001u); // 801E2B88
  W8(c->r[3]+0x00000015u,c->r[0]); // 801E2B8C
  c->r[3]=0u+0x00000001u; // 801E2B90
  return; // 801E2B94
L_801E2B98:;
  c->r[8]=c->r[8]+0x00000001u; // 801E2B98
L_801E2B9C:;
  c->r[0]=rotl(c->r[8],0)&0x000000FFu; // 801E2B9C
  cmpu(c,0,c->r[0],c->r[5]); // 801E2BA0
  if (crb(c,0)) { IRQCHK(c); goto L_801E2B70; } // 801E2BA4
  c->r[3]=0u+0x00000000u; // 801E2BA8
  return; // 801E2BAC
}

// bta_hh_trace_dev_db
void f_801E2BB0(Ctx* __restrict c) {
  trace_call(0x801E2BB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E2BB0
  c->r[0]=c->lr; // 801E2BB4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E2BB8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E2BBC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E2BC0
  c->r[30]=0u+0x80280000u; // 801E2BC4
  c->r[30]=c->r[30]+0xFFFFEAD8u; // 801E2BC8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E2BCC
  c->r[0]=R8(c->r[13]+0xFFFFB6D0u); // 801E2BD0
  cmpu(c,0,c->r[0],0x00000005u); // 801E2BD4
  if (crb(c,0)) { goto L_801E2BE8; } // 801E2BD8
  c->r[4]=c->r[30]+0x000001E4u; // 801E2BDC
  c->r[3]=0u+0x00000504u; // 801E2BE0
  c->lr=0x801E2BE8u; f_801DC730(c); // 801E2BE4
L_801E2BE8:;
  c->r[3]=0u+0x80310000u; // 801E2BE8
  c->r[29]=0u+0x00000000u; // 801E2BEC
  c->r[31]=c->r[3]+0xFFFF85E8u; // 801E2BF0
L_801E2BF4:;
  c->r[0]=R8(c->r[13]+0xFFFFB6D0u); // 801E2BF4
  cmpu(c,0,c->r[0],0x00000005u); // 801E2BF8
  if (crb(c,0)) { goto L_801E2C20; } // 801E2BFC
  c->r[0]=rotl(c->r[29],5)&0x00001FE0u; // 801E2C00
  c->r[4]=c->r[30]+0x00000220u; // 801E2C04
  c->r[7]=c->r[31]+c->r[0]; // 801E2C08
  c->r[5]=rotl(c->r[29],0)&0x000000FFu; // 801E2C0C
  c->r[6]=R8(c->r[7]+0x00000028u); // 801E2C10
  c->r[3]=0u+0x00000504u; // 801E2C14
  c->r[7]=R8(c->r[7]+0x00000026u); // 801E2C18
  c->lr=0x801E2C20u; f_801DC790(c); // 801E2C1C
L_801E2C20:;
  c->r[0]=R8(c->r[13]+0xFFFFB6D0u); // 801E2C20
  cmpu(c,0,c->r[0],0x00000005u); // 801E2C24
  if (crb(c,0)) { goto L_801E2C50; } // 801E2C28
  c->r[0]=rotl(c->r[29],5)&0x00001FE0u; // 801E2C2C
  c->r[4]=c->r[30]+0x00000244u; // 801E2C30
  c->r[8]=c->r[31]+c->r[0]; // 801E2C34
  c->r[3]=0u+0x00000504u; // 801E2C38
  c->r[5]=R16(c->r[8]+0x0000001Eu); // 801E2C3C
  c->r[6]=R8(c->r[8]+0x0000002Cu); // 801E2C40
  c->r[7]=R8(c->r[8]+0x00000023u); // 801E2C44
  c->r[8]=R8(c->r[8]+0x00000022u); // 801E2C48
  c->lr=0x801E2C50u; f_801DC7B0(c); // 801E2C4C
L_801E2C50:;
  c->r[29]=c->r[29]+0x00000001u; // 801E2C50
  cmpu(c,0,c->r[29],0x00000010u); // 801E2C54
  if (crb(c,0)) { IRQCHK(c); goto L_801E2BF4; } // 801E2C58
  c->r[0]=R8(c->r[13]+0xFFFFB6D0u); // 801E2C5C
  cmpu(c,0,c->r[0],0x00000005u); // 801E2C60
  if (crb(c,0)) { goto L_801E2C74; } // 801E2C64
  c->r[4]=c->r[30]+0x00000280u; // 801E2C68
  c->r[3]=0u+0x00000504u; // 801E2C6C
  c->lr=0x801E2C74u; f_801DC730(c); // 801E2C70
L_801E2C74:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E2C74
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E2C78
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E2C7C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E2C80
  c->lr=c->r[0]; // 801E2C84
  c->r[1]=c->r[1]+0x00000020u; // 801E2C88
  return; // 801E2C8C
}

// btm_acl_init
void f_801E2C90(Ctx* __restrict c) {
  trace_call(0x801E2C90u);
  c->r[3]=0u+0x80310000u; // 801E2C90
  c->r[4]=0u+0x00007D00u; // 801E2C94
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E2C98
  c->r[0]=0u+0x000000FFu; // 801E2C9C
  W16(c->r[3]+0x000004C6u,c->r[4]); // 801E2CA0
  W8(c->r[3]+0x000027BFu,c->r[0]); // 801E2CA4
  return; // 801E2CA8
}

// btm_handle_to_acl_index
void f_801E2CAC(Ctx* __restrict c) {
  trace_call(0x801E2CACu);
  c->r[4]=0u+0x80310000u; // 801E2CAC
  c->r[5]=0u+0x00000000u; // 801E2CB0
  c->r[4]=c->r[4]+0xFFFF8818u; // 801E2CB4
  c->r[0]=R8(c->r[4]+0x0000014Du); // 801E2CB8
  cmps(c,0,(int32_t)c->r[0],0); // 801E2CBC
  if (crb(c,2)) { goto L_801E2CD0; } // 801E2CC0
  c->r[0]=R16(c->r[4]+0x00000034u); // 801E2CC4
  cmpu(c,0,c->r[0],c->r[3]); // 801E2CC8
  if (crb(c,2)) { goto L_801E2D28; } // 801E2CCC
L_801E2CD0:;
  c->r[0]=R8(c->r[4]+0x00000269u); // 801E2CD0
  c->r[5]=0u+0x00000001u; // 801E2CD4
  cmps(c,0,(int32_t)c->r[0],0); // 801E2CD8
  if (crb(c,2)) { goto L_801E2CEC; } // 801E2CDC
  c->r[0]=R16(c->r[4]+0x00000150u); // 801E2CE0
  cmpu(c,0,c->r[0],c->r[3]); // 801E2CE4
  if (crb(c,2)) { goto L_801E2D28; } // 801E2CE8
L_801E2CEC:;
  c->r[0]=R8(c->r[4]+0x00000385u); // 801E2CEC
  c->r[5]=0u+0x00000002u; // 801E2CF0
  cmps(c,0,(int32_t)c->r[0],0); // 801E2CF4
  if (crb(c,2)) { goto L_801E2D08; } // 801E2CF8
  c->r[0]=R16(c->r[4]+0x0000026Cu); // 801E2CFC
  cmpu(c,0,c->r[0],c->r[3]); // 801E2D00
  if (crb(c,2)) { goto L_801E2D28; } // 801E2D04
L_801E2D08:;
  c->r[0]=R8(c->r[4]+0x000004A1u); // 801E2D08
  c->r[5]=0u+0x00000003u; // 801E2D0C
  cmps(c,0,(int32_t)c->r[0],0); // 801E2D10
  if (crb(c,2)) { goto L_801E2D24; } // 801E2D14
  c->r[0]=R16(c->r[4]+0x00000388u); // 801E2D18
  cmpu(c,0,c->r[0],c->r[3]); // 801E2D1C
  if (crb(c,2)) { goto L_801E2D28; } // 801E2D20
L_801E2D24:;
  c->r[5]=0u+0x00000004u; // 801E2D24
L_801E2D28:;
  c->r[3]=c->r[5]|c->r[5]; // 801E2D28
  return; // 801E2D2C
}

// btm_acl_created
void f_801E2D30(Ctx* __restrict c) {
  trace_call(0x801E2D30u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E2D30
  c->r[0]=c->lr; // 801E2D34
  W32(c->r[1]+0x00000034u,c->r[0]); // 801E2D38
  c->r[11]=c->r[1]+0x00000030u; // 801E2D3C
  c->lr=0x801E2D44u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E2D40
  c->r[8]=0u+0x80310000u; // 801E2D44
  c->r[30]=c->r[3]|c->r[3]; // 801E2D48
  c->r[8]=c->r[8]+0xFFFF8818u; // 801E2D4C
  c->r[25]=c->r[4]|c->r[4]; // 801E2D50
  c->r[26]=c->r[5]|c->r[5]; // 801E2D54
  c->r[27]=c->r[6]|c->r[6]; // 801E2D58
  c->r[28]=c->r[7]|c->r[7]; // 801E2D5C
  c->r[29]=c->r[8]+0x00000034u; // 801E2D60
  c->r[31]=0u+0x00000000u; // 801E2D64
L_801E2D68:;
  c->r[0]=R8(c->r[29]+0x00000119u); // 801E2D68
  cmps(c,0,(int32_t)c->r[0],0); // 801E2D6C
  if (crb(c,2)) { goto L_801E2D90; } // 801E2D70
  c->r[4]=c->r[30]|c->r[30]; // 801E2D74
  c->r[3]=c->r[29]+0x00000008u; // 801E2D78
  c->r[5]=0u+0x00000006u; // 801E2D7C
  c->lr=0x801E2D84u; f_8020BD24(c); // 801E2D80
  cmps(c,0,(int32_t)c->r[3],0); // 801E2D84
  if (!crb(c,2)) { goto L_801E2D90; } // 801E2D88
  goto L_801E2DA4; // 801E2D8C
L_801E2D90:;
  c->r[31]=c->r[31]+0x00000001u; // 801E2D90
  c->r[29]=c->r[29]+0x0000011Cu; // 801E2D94
  cmpu(c,0,c->r[31],0x00000004u); // 801E2D98
  if (crb(c,0)) { IRQCHK(c); goto L_801E2D68; } // 801E2D9C
  c->r[29]=0u+0x00000000u; // 801E2DA0
L_801E2DA4:;
  cmps(c,0,(int32_t)c->r[29],0); // 801E2DA4
  if (crb(c,2)) { goto L_801E2DF8; } // 801E2DA8
  W16(c->r[29]+0x00000000u,c->r[27]); // 801E2DAC
  c->r[3]=0u+0x80310000u; // 801E2DB0
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E2DB4
  W8(c->r[29]+0x0000011Au,c->r[28]); // 801E2DB8
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801E2DBC
  cmpu(c,0,c->r[0],0x00000004u); // 801E2DC0
  if (crb(c,0)) { goto L_801E302C; } // 801E2DC4
  c->r[3]=0u+0x000D0000u; // 801E2DC8
  c->r[4]=0u+0x80280000u; // 801E2DCC
  c->r[5]=R8(c->r[30]+0x00000000u); // 801E2DD0
  c->r[3]=c->r[3]+0x00000003u; // 801E2DD4
  c->r[6]=R8(c->r[30]+0x00000001u); // 801E2DD8
  c->r[4]=c->r[4]+0xFFFFED98u; // 801E2DDC
  c->r[7]=R8(c->r[30]+0x00000002u); // 801E2DE0
  c->r[8]=R8(c->r[30]+0x00000003u); // 801E2DE4
  c->r[9]=R8(c->r[30]+0x00000004u); // 801E2DE8
  c->r[10]=R8(c->r[30]+0x00000005u); // 801E2DEC
  c->lr=0x801E2DF4u; f_801DC7F0(c); // 801E2DF0
  goto L_801E302C; // 801E2DF4
L_801E2DF8:;
  c->r[3]=0u+0x80310000u; // 801E2DF8
  c->r[0]=0u+0x00000004u; // 801E2DFC
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E2E00
  c->r[4]=0u+0x00000000u; // 801E2E04
  c->r[31]=c->r[3]+0x00000034u; // 801E2E08
  c->ctr=c->r[0]; // 801E2E0C
L_801E2E10:;
  c->r[0]=R8(c->r[31]+0x00000119u); // 801E2E10
  cmps(c,0,(int32_t)c->r[0],0); // 801E2E14
  if (!crb(c,2)) { goto L_801E3020; } // 801E2E18
  c->r[3]=0u+0x00000001u; // 801E2E1C
  c->r[0]=0u+0x00000000u; // 801E2E20
  W8(c->r[31]+0x00000119u,c->r[3]); // 801E2E24
  c->r[3]=rotl(c->r[4],0)&0x000000FFu; // 801E2E28
  W16(c->r[31]+0x00000000u,c->r[27]); // 801E2E2C
  W8(c->r[31]+0x0000011Au,c->r[28]); // 801E2E30
  W16(c->r[31]+0x00000004u,c->r[0]); // 801E2E34
  c->lr=0x801E2E3Cu; f_801E8A0C(c); // 801E2E38
  c->r[4]=c->r[30]|c->r[30]; // 801E2E3C
  c->r[3]=c->r[31]+0x00000008u; // 801E2E40
  c->r[5]=0u+0x00000006u; // 801E2E44
  c->lr=0x801E2E4Cu; f_80004364(c); // 801E2E48
  cmps(c,0,(int32_t)c->r[25],0); // 801E2E4C
  if (crb(c,2)) { goto L_801E2E64; } // 801E2E50
  c->r[4]=c->r[25]|c->r[25]; // 801E2E54
  c->r[3]=c->r[31]+0x0000000Eu; // 801E2E58
  c->r[5]=0u+0x00000003u; // 801E2E5C
  c->lr=0x801E2E64u; f_80004364(c); // 801E2E60
L_801E2E64:;
  cmps(c,0,(int32_t)c->r[26],0); // 801E2E64
  if (crb(c,2)) { goto L_801E2E7C; } // 801E2E68
  c->r[4]=c->r[26]|c->r[26]; // 801E2E6C
  c->r[3]=c->r[31]+0x00000011u; // 801E2E70
  c->r[5]=0u+0x000000F8u; // 801E2E74
  c->lr=0x801E2E7Cu; f_80004364(c); // 801E2E78
L_801E2E7C:;
  c->r[3]=R16(c->r[31]+0x00000000u); // 801E2E7C
  c->lr=0x801E2E84u; f_801F0390(c); // 801E2E80
  c->r[3]=R16(c->r[31]+0x00000000u); // 801E2E84
  c->lr=0x801E2E8Cu; f_801F0314(c); // 801E2E88
  c->r[3]=c->r[27]|c->r[27]; // 801E2E8C
  c->lr=0x801E2E94u; f_801E4DC8(c); // 801E2E90
  cmps(c,0,(int32_t)c->r[3],0); // 801E2E94
  c->r[5]=c->r[3]|c->r[3]; // 801E2E98
  if (crb(c,2)) { goto L_801E3014; } // 801E2E9C
  c->r[0]=0u+0x00000008u; // 801E2EA0
  c->r[6]=0u+0x00000000u; // 801E2EA4
  c->ctr=c->r[0]; // 801E2EA8
L_801E2EAC:;
  c->r[0]=rotl(c->r[6],0)&0x000000FFu; // 801E2EAC
  c->r[4]=c->r[3]+c->r[0]; // 801E2EB0
  c->r[0]=R8(c->r[4]+0x00000077u); // 801E2EB4
  cmps(c,0,(int32_t)c->r[0],0); // 801E2EB8
  if (crb(c,2)) { goto L_801E300C; } // 801E2EBC
  c->r[4]=c->r[5]+0x00000077u; // 801E2EC0
  c->r[3]=c->r[31]+0x00000110u; // 801E2EC4
  c->r[5]=0u+0x00000008u; // 801E2EC8
  c->lr=0x801E2ED0u; f_80004364(c); // 801E2ECC
  c->r[3]=0u+0x80310000u; // 801E2ED0
  c->r[0]=0u+0xFFFFCCF9u; // 801E2ED4
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E2ED8
  c->r[5]=R16(c->r[3]+0x00000654u); // 801E2EDC
  c->r[3]=R8(c->r[3]+0x00000636u); // 801E2EE0
  c->r[4]=c->r[5]&0x0000CC18u; cr0(c,c->r[4]); // 801E2EE4
  cmpu(c,0,c->r[3],0x00000003u); // 801E2EE8
  c->r[30]=c->r[4]&c->r[0]; // 801E2EEC
  if (crb(c,0)) { goto L_801E2F00; } // 801E2EF0
  c->r[0]=c->r[5]&0x00003306u; cr0(c,c->r[0]); // 801E2EF4
  c->r[0]=c->r[4]|c->r[0]; // 801E2EF8
  c->r[30]=rotl(c->r[0],0)&0x0000FFFFu; // 801E2EFC
L_801E2F00:;
  c->r[3]=0u+0x80310000u; // 801E2F00
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E2F04
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801E2F08
  cmpu(c,0,c->r[0],0x00000004u); // 801E2F0C
  if (crb(c,0)) { goto L_801E2F2C; } // 801E2F10
  c->r[3]=0u+0x000D0000u; // 801E2F14
  c->r[4]=0u+0x80280000u; // 801E2F18
  c->r[3]=c->r[3]+0x00000003u; // 801E2F1C
  c->r[5]=rotl(c->r[30],0)&0x0000FFFFu; // 801E2F20
  c->r[4]=c->r[4]+0xFFFFEDD8u; // 801E2F24
  c->lr=0x801E2F2Cu; f_801DC750(c); // 801E2F28
L_801E2F2C:;
  c->r[3]=R16(c->r[31]+0x00000000u); // 801E2F2C
  c->r[4]=rotl(c->r[30],0)&0x0000FFFFu; // 801E2F30
  c->lr=0x801E2F38u; f_801EFF88(c); // 801E2F34
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801E2F38
  if (crb(c,2)) { goto L_801E2F44; } // 801E2F3C
  W16(c->r[31]+0x00000002u,c->r[30]); // 801E2F40
L_801E2F44:;
  c->r[4]=0u+0x80310000u; // 801E2F44
  c->r[4]=c->r[4]+0xFFFF8818u; // 801E2F48
  c->r[0]=R16(c->r[4]+0x000004C4u); // 801E2F4C
  cmps(c,0,(int32_t)c->r[0],0); // 801E2F50
  if (crb(c,2)) { goto L_801E2F64; } // 801E2F54
  c->r[3]=c->r[31]+0x00000008u; // 801E2F58
  c->r[4]=c->r[4]+0x000004C4u; // 801E2F5C
  c->lr=0x801E2F64u; f_801E34F8(c); // 801E2F60
L_801E2F64:;
  c->r[3]=0u+0x80310000u; // 801E2F64
  c->r[29]=0u+0x00000000u; // 801E2F68
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E2F6C
  c->r[28]=R16(c->r[3]+0x000004C6u); // 801E2F70
  c->r[30]=c->r[3]+0x00000034u; // 801E2F74
L_801E2F78:;
  c->r[0]=R8(c->r[30]+0x00000119u); // 801E2F78
  cmps(c,0,(int32_t)c->r[0],0); // 801E2F7C
  if (crb(c,2)) { goto L_801E2FA0; } // 801E2F80
  c->r[3]=c->r[30]+0x00000008u; // 801E2F84
  c->r[4]=c->r[31]+0x00000008u; // 801E2F88
  c->r[5]=0u+0x00000006u; // 801E2F8C
  c->lr=0x801E2F94u; f_8020BD24(c); // 801E2F90
  cmps(c,0,(int32_t)c->r[3],0); // 801E2F94
  if (!crb(c,2)) { goto L_801E2FA0; } // 801E2F98
  goto L_801E2FB4; // 801E2F9C
L_801E2FA0:;
  c->r[29]=c->r[29]+0x00000001u; // 801E2FA0
  c->r[30]=c->r[30]+0x0000011Cu; // 801E2FA4
  cmpu(c,0,c->r[29],0x00000004u); // 801E2FA8
  if (crb(c,0)) { IRQCHK(c); goto L_801E2F78; } // 801E2FAC
  c->r[30]=0u+0x00000000u; // 801E2FB0
L_801E2FB4:;
  cmps(c,0,(int32_t)c->r[30],0); // 801E2FB4
  if (crb(c,2)) { goto L_801E2FD8; } // 801E2FB8
  W16(c->r[30]+0x0000010Eu,c->r[28]); // 801E2FBC
  c->r[0]=R8(c->r[30]+0x0000011Au); // 801E2FC0
  cmps(c,0,(int32_t)c->r[0],0); // 801E2FC4
  if (!crb(c,2)) { goto L_801E2FD8; } // 801E2FC8
  c->r[3]=R16(c->r[30]+0x00000000u); // 801E2FCC
  c->r[4]=c->r[28]|c->r[28]; // 801E2FD0
  c->lr=0x801E2FD8u; f_801F1488(c); // 801E2FD4
L_801E2FD8:;
  c->r[3]=0u+0x80310000u; // 801E2FD8
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E2FDC
  c->r[12]=R32(c->r[3]+0x000004C8u); // 801E2FE0
  cmps(c,0,(int32_t)c->r[12],0); // 801E2FE4
  if (crb(c,2)) { goto L_801E302C; } // 801E2FE8
  c->r[3]=c->r[31]+0x00000008u; // 801E2FEC
  c->r[4]=c->r[31]+0x0000000Eu; // 801E2FF0
  c->r[5]=c->r[31]+0x00000011u; // 801E2FF4
  c->r[6]=c->r[31]+0x00000110u; // 801E2FF8
  c->r[7]=0u+0x00000001u; // 801E2FFC
  c->ctr=c->r[12]; // 801E3000
  if (true) { c->lr=0x801E3008u; dispatch(c,c->ctr); } // 801E3004
  goto L_801E302C; // 801E3008
L_801E300C:;
  c->r[6]=c->r[6]+0x00000001u; // 801E300C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E2EAC; } // 801E3010
L_801E3014:;
  c->r[3]=R16(c->r[31]+0x00000000u); // 801E3014
  c->lr=0x801E301Cu; f_801F0298(c); // 801E3018
  goto L_801E302C; // 801E301C
L_801E3020:;
  c->r[4]=c->r[4]+0x00000001u; // 801E3020
  c->r[31]=c->r[31]+0x0000011Cu; // 801E3024
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E2E10; } // 801E3028
L_801E302C:;
  c->r[11]=c->r[1]+0x00000030u; // 801E302C
  c->lr=0x801E3034u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E3030
  c->r[0]=R32(c->r[1]+0x00000034u); // 801E3034
  c->lr=c->r[0]; // 801E3038
  c->r[1]=c->r[1]+0x00000030u; // 801E303C
  return; // 801E3040
}

// btm_acl_removed
void f_801E3044(Ctx* __restrict c) {
  trace_call(0x801E3044u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E3044
  c->r[0]=c->lr; // 801E3048
  c->r[4]=0u+0x80310000u; // 801E304C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E3050
  c->r[4]=c->r[4]+0xFFFF8818u; // 801E3054
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E3058
  c->r[31]=0u+0x00000000u; // 801E305C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E3060
  c->r[30]=c->r[4]+0x00000034u; // 801E3064
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E3068
  c->r[29]=c->r[3]|c->r[3]; // 801E306C
L_801E3070:;
  c->r[0]=R8(c->r[30]+0x00000119u); // 801E3070
  cmps(c,0,(int32_t)c->r[0],0); // 801E3074
  if (crb(c,2)) { goto L_801E3098; } // 801E3078
  c->r[4]=c->r[29]|c->r[29]; // 801E307C
  c->r[3]=c->r[30]+0x00000008u; // 801E3080
  c->r[5]=0u+0x00000006u; // 801E3084
  c->lr=0x801E308Cu; f_8020BD24(c); // 801E3088
  cmps(c,0,(int32_t)c->r[3],0); // 801E308C
  if (!crb(c,2)) { goto L_801E3098; } // 801E3090
  goto L_801E30AC; // 801E3094
L_801E3098:;
  c->r[31]=c->r[31]+0x00000001u; // 801E3098
  c->r[30]=c->r[30]+0x0000011Cu; // 801E309C
  cmpu(c,0,c->r[31],0x00000004u); // 801E30A0
  if (crb(c,0)) { IRQCHK(c); goto L_801E3070; } // 801E30A4
  c->r[30]=0u+0x00000000u; // 801E30A8
L_801E30AC:;
  cmps(c,0,(int32_t)c->r[30],0); // 801E30AC
  if (crb(c,2)) { goto L_801E30EC; } // 801E30B0
  c->r[0]=0u+0x00000000u; // 801E30B4
  c->r[3]=0u+0x80310000u; // 801E30B8
  W8(c->r[30]+0x00000119u,c->r[0]); // 801E30BC
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E30C0
  c->r[12]=R32(c->r[3]+0x000004C8u); // 801E30C4
  cmps(c,0,(int32_t)c->r[12],0); // 801E30C8
  if (crb(c,2)) { goto L_801E30EC; } // 801E30CC
  c->r[3]=c->r[29]|c->r[29]; // 801E30D0
  c->r[4]=0u+0x00000000u; // 801E30D4
  c->r[5]=0u+0x00000000u; // 801E30D8
  c->r[6]=0u+0x00000000u; // 801E30DC
  c->r[7]=0u+0x00000000u; // 801E30E0
  c->ctr=c->r[12]; // 801E30E4
  if (true) { c->lr=0x801E30ECu; dispatch(c,c->ctr); } // 801E30E8
L_801E30EC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E30EC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E30F0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E30F4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E30F8
  c->lr=c->r[0]; // 801E30FC
  c->r[1]=c->r[1]+0x00000020u; // 801E3100
  return; // 801E3104
}

// btm_acl_device_down
void f_801E3108(Ctx* __restrict c) {
  trace_call(0x801E3108u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E3108
  c->r[0]=c->lr; // 801E310C
  c->r[3]=0u+0x80310000u; // 801E3110
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E3114
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E3118
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E311C
  c->r[31]=c->r[3]+0x00000034u; // 801E3120
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E3124
  c->r[30]=0u+0x00000000u; // 801E3128
L_801E312C:;
  c->r[0]=R8(c->r[31]+0x00000119u); // 801E312C
  cmps(c,0,(int32_t)c->r[0],0); // 801E3130
  if (crb(c,2)) { goto L_801E3144; } // 801E3134
  c->r[3]=R16(c->r[31]+0x00000000u); // 801E3138
  c->r[4]=0u+0x00000003u; // 801E313C
  c->lr=0x801E3144u; f_801F757C(c); // 801E3140
L_801E3144:;
  c->r[30]=c->r[30]+0x00000001u; // 801E3144
  c->r[31]=c->r[31]+0x0000011Cu; // 801E3148
  cmpu(c,0,c->r[30],0x00000004u); // 801E314C
  if (crb(c,0)) { IRQCHK(c); goto L_801E312C; } // 801E3150
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E3154
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E3158
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E315C
  c->lr=c->r[0]; // 801E3160
  c->r[1]=c->r[1]+0x00000010u; // 801E3164
  return; // 801E3168
}

// BTM_SwitchRole
void f_801E316C(Ctx* __restrict c) {
  trace_call(0x801E316Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E316C
  c->r[0]=c->lr; // 801E3170
  W32(c->r[1]+0x00000034u,c->r[0]); // 801E3174
  c->r[11]=c->r[1]+0x00000030u; // 801E3178
  c->lr=0x801E3180u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E317C
  c->r[6]=0u+0x80310000u; // 801E3180
  c->r[28]=c->r[3]|c->r[3]; // 801E3184
  c->r[6]=c->r[6]+0xFFFF8818u; // 801E3188
  c->r[29]=c->r[4]|c->r[4]; // 801E318C
  c->r[0]=R8(c->r[6]+0x00000640u); // 801E3190
  c->r[30]=c->r[5]|c->r[5]; // 801E3194
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 801E3198
  if (!crb(c,2)) { goto L_801E31A8; } // 801E319C
  c->r[3]=0u+0x00000004u; // 801E31A0
  goto L_801E3370; // 801E31A4
L_801E31A8:;
  c->r[31]=c->r[6]+0x00000034u; // 801E31A8
  c->r[27]=0u+0x00000000u; // 801E31AC
L_801E31B0:;
  c->r[0]=R8(c->r[31]+0x00000119u); // 801E31B0
  cmps(c,0,(int32_t)c->r[0],0); // 801E31B4
  if (crb(c,2)) { goto L_801E31D8; } // 801E31B8
  c->r[4]=c->r[28]|c->r[28]; // 801E31BC
  c->r[3]=c->r[31]+0x00000008u; // 801E31C0
  c->r[5]=0u+0x00000006u; // 801E31C4
  c->lr=0x801E31CCu; f_8020BD24(c); // 801E31C8
  cmps(c,0,(int32_t)c->r[3],0); // 801E31CC
  if (!crb(c,2)) { goto L_801E31D8; } // 801E31D0
  goto L_801E31EC; // 801E31D4
L_801E31D8:;
  c->r[27]=c->r[27]+0x00000001u; // 801E31D8
  c->r[31]=c->r[31]+0x0000011Cu; // 801E31DC
  cmpu(c,0,c->r[27],0x00000004u); // 801E31E0
  if (crb(c,0)) { IRQCHK(c); goto L_801E31B0; } // 801E31E4
  c->r[31]=0u+0x00000000u; // 801E31E8
L_801E31EC:;
  cmps(c,0,(int32_t)c->r[31],0); // 801E31EC
  if (!crb(c,2)) { goto L_801E31FC; } // 801E31F0
  c->r[3]=0u+0x00000007u; // 801E31F4
  goto L_801E3370; // 801E31F8
L_801E31FC:;
  c->r[0]=R8(c->r[31]+0x0000011Au); // 801E31FC
  cmpu(c,0,c->r[0],c->r[29]); // 801E3200
  if (!crb(c,2)) { goto L_801E3210; } // 801E3204
  c->r[3]=0u+0x00000000u; // 801E3208
  goto L_801E3370; // 801E320C
L_801E3210:;
  c->r[3]=c->r[28]|c->r[28]; // 801E3210
  c->lr=0x801E3218u; f_801EA094(c); // 801E3214
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801E3218
  cmpu(c,0,c->r[0],0x00000001u); // 801E321C
  if (!crb(c,2)) { goto L_801E322C; } // 801E3220
  c->r[3]=0u+0x00000003u; // 801E3224
  goto L_801E3370; // 801E3228
L_801E322C:;
  c->r[0]=R8(c->r[31]+0x0000011Bu); // 801E322C
  cmps(c,0,(int32_t)c->r[0],0); // 801E3230
  if (crb(c,2)) { goto L_801E3268; } // 801E3234
  c->r[3]=0u+0x80310000u; // 801E3238
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E323C
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801E3240
  cmpu(c,0,c->r[0],0x00000005u); // 801E3244
  if (crb(c,0)) { goto L_801E3260; } // 801E3248
  c->r[3]=0u+0x000D0000u; // 801E324C
  c->r[4]=0u+0x80280000u; // 801E3250
  c->r[3]=c->r[3]+0x00000004u; // 801E3254
  c->r[4]=c->r[4]+0xFFFFEDF8u; // 801E3258
  c->lr=0x801E3260u; f_801DC730(c); // 801E325C
L_801E3260:;
  c->r[3]=0u+0x00000002u; // 801E3260
  goto L_801E3370; // 801E3264
L_801E3268:;
  c->r[3]=0u+0x80310000u; // 801E3268
  c->r[4]=0u+0x00000000u; // 801E326C
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E3270
  c->r[5]=0u+0x00000008u; // 801E3274
  c->r[3]=c->r[3]+0x00000624u; // 801E3278
  c->lr=0x801E3280u; f_800046B4(c); // 801E327C
  c->r[3]=c->r[31]+0x00000008u; // 801E3280
  c->r[4]=c->r[1]+0x00000008u; // 801E3284
  c->lr=0x801E328Cu; f_801E88DC(c); // 801E3288
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801E328C
  if (crb(c,2)) { goto L_801E3298; } // 801E3290
  goto L_801E3370; // 801E3294
L_801E3298:;
  c->r[3]=R8(c->r[1]+0x00000008u); // 801E3298
  c->r[0]=c->r[3]+0x000000FEu; // 801E329C
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801E32A0
  cmpu(c,0,c->r[0],0x00000001u); // 801E32A4
  if (crb(c,1)) { goto L_801E32E4; } // 801E32A8
  c->r[0]=0u+0x00000000u; // 801E32AC
  c->r[4]=c->r[31]+0x00000008u; // 801E32B0
  W8(c->r[1]+0x00000014u,c->r[0]); // 801E32B4
  c->r[5]=c->r[1]+0x0000000Cu; // 801E32B8
  c->r[3]=0u+0x00000080u; // 801E32BC
  c->lr=0x801E32C4u; f_801E870C(c); // 801E32C0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801E32C4
  cmpu(c,0,c->r[0],0x00000001u); // 801E32C8
  if (crb(c,2)) { goto L_801E32D8; } // 801E32CC
  c->r[3]=0u+0x00000006u; // 801E32D0
  goto L_801E3370; // 801E32D4
L_801E32D8:;
  c->r[0]=0u+0x00000001u; // 801E32D8
  W8(c->r[31]+0x0000011Bu,c->r[0]); // 801E32DC
  goto L_801E334C; // 801E32E0
L_801E32E4:;
  c->r[3]=c->r[28]|c->r[28]; // 801E32E4
  c->lr=0x801E32ECu; f_801E4E80(c); // 801E32E8
  cmps(c,0,(int32_t)c->r[3],0); // 801E32EC
  if (crb(c,2)) { goto L_801E3328; } // 801E32F0
  c->r[0]=R8(c->r[3]+0x00000076u); // 801E32F4
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801E32F8
  if (crb(c,2)) { goto L_801E3328; } // 801E32FC
  c->r[3]=R16(c->r[31]+0x00000000u); // 801E3300
  c->r[4]=0u+0x00000000u; // 801E3304
  c->lr=0x801E330Cu; f_801F0094(c); // 801E3308
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801E330C
  if (!crb(c,2)) { goto L_801E331C; } // 801E3310
  c->r[3]=0u+0x00000003u; // 801E3314
  goto L_801E3370; // 801E3318
L_801E331C:;
  c->r[0]=0u+0x00000002u; // 801E331C
  W8(c->r[31]+0x0000011Bu,c->r[0]); // 801E3320
  goto L_801E334C; // 801E3324
L_801E3328:;
  c->r[3]=c->r[28]|c->r[28]; // 801E3328
  c->r[4]=c->r[29]|c->r[29]; // 801E332C
  c->lr=0x801E3334u; f_801F098C(c); // 801E3330
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801E3334
  if (!crb(c,2)) { goto L_801E3344; } // 801E3338
  c->r[3]=0u+0x00000003u; // 801E333C
  goto L_801E3370; // 801E3340
L_801E3344:;
  c->r[0]=0u+0x00000005u; // 801E3344
  W8(c->r[31]+0x0000011Bu,c->r[0]); // 801E3348
L_801E334C:;
  c->r[31]=0u+0x80310000u; // 801E334C
  c->r[4]=c->r[28]|c->r[28]; // 801E3350
  c->r[31]=c->r[31]+0xFFFF8818u; // 801E3354
  c->r[5]=0u+0x00000006u; // 801E3358
  c->r[3]=c->r[31]+0x00000626u; // 801E335C
  c->lr=0x801E3364u; f_80004364(c); // 801E3360
  W8(c->r[31]+0x00000625u,c->r[29]); // 801E3364
  c->r[3]=0u+0x00000001u; // 801E3368
  W32(c->r[31]+0x0000062Cu,c->r[30]); // 801E336C
L_801E3370:;
  c->r[11]=c->r[1]+0x00000030u; // 801E3370
  c->lr=0x801E3378u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E3374
  c->r[0]=R32(c->r[1]+0x00000034u); // 801E3378
  c->lr=c->r[0]; // 801E337C
  c->r[1]=c->r[1]+0x00000030u; // 801E3380
  return; // 801E3384
}

// btm_acl_encrypt_change
void f_801E3388(Ctx* __restrict c) {
  trace_call(0x801E3388u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E3388
  c->r[0]=c->lr; // 801E338C
  c->r[4]=0u+0x80310000u; // 801E3390
  c->r[6]=0u+0x00000000u; // 801E3394
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E3398
  c->r[4]=c->r[4]+0xFFFF8818u; // 801E339C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E33A0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E33A4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E33A8
  c->r[0]=R8(c->r[4]+0x0000014Du); // 801E33AC
  cmps(c,0,(int32_t)c->r[0],0); // 801E33B0
  if (crb(c,2)) { goto L_801E33C4; } // 801E33B4
  c->r[0]=R16(c->r[4]+0x00000034u); // 801E33B8
  cmpu(c,0,c->r[0],c->r[3]); // 801E33BC
  if (crb(c,2)) { goto L_801E341C; } // 801E33C0
L_801E33C4:;
  c->r[0]=R8(c->r[4]+0x00000269u); // 801E33C4
  c->r[6]=0u+0x00000001u; // 801E33C8
  cmps(c,0,(int32_t)c->r[0],0); // 801E33CC
  if (crb(c,2)) { goto L_801E33E0; } // 801E33D0
  c->r[0]=R16(c->r[4]+0x00000150u); // 801E33D4
  cmpu(c,0,c->r[0],c->r[3]); // 801E33D8
  if (crb(c,2)) { goto L_801E341C; } // 801E33DC
L_801E33E0:;
  c->r[0]=R8(c->r[4]+0x00000385u); // 801E33E0
  c->r[6]=0u+0x00000002u; // 801E33E4
  cmps(c,0,(int32_t)c->r[0],0); // 801E33E8
  if (crb(c,2)) { goto L_801E33FC; } // 801E33EC
  c->r[0]=R16(c->r[4]+0x0000026Cu); // 801E33F0
  cmpu(c,0,c->r[0],c->r[3]); // 801E33F4
  if (crb(c,2)) { goto L_801E341C; } // 801E33F8
L_801E33FC:;
  c->r[0]=R8(c->r[4]+0x000004A1u); // 801E33FC
  c->r[6]=0u+0x00000003u; // 801E3400
  cmps(c,0,(int32_t)c->r[0],0); // 801E3404
  if (crb(c,2)) { goto L_801E3418; } // 801E3408
  c->r[0]=R16(c->r[4]+0x00000388u); // 801E340C
  cmpu(c,0,c->r[0],c->r[3]); // 801E3410
  if (crb(c,2)) { goto L_801E341C; } // 801E3414
L_801E3418:;
  c->r[6]=0u+0x00000004u; // 801E3418
L_801E341C:;
  cmpu(c,0,c->r[6],0x00000004u); // 801E341C
  if (!crb(c,0)) { goto L_801E34DC; } // 801E3420
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)284); // 801E3424
  c->r[30]=0u+0x80310000u; // 801E3428
  c->r[30]=c->r[30]+0xFFFF8818u; // 801E342C
  c->r[29]=c->r[30]+c->r[0]; // 801E3430
  goto L_801E343C; // 801E3434
  goto L_801E34DC; // 801E3438
L_801E343C:;
  c->r[0]=R8(c->r[29]+0x0000014Fu); // 801E343C
  cmpu(c,0,c->r[0],0x00000002u); // 801E3440
  if (!crb(c,2)) { goto L_801E34B0; } // 801E3444
  cmps(c,0,(int32_t)c->r[5],0); // 801E3448
  if (crb(c,2)) { goto L_801E345C; } // 801E344C
  c->r[0]=0u+0x00000000u; // 801E3450
  W8(c->r[29]+0x0000014Fu,c->r[0]); // 801E3454
  goto L_801E3464; // 801E3458
L_801E345C:;
  c->r[0]=0u+0x00000003u; // 801E345C
  W8(c->r[29]+0x0000014Fu,c->r[0]); // 801E3460
L_801E3464:;
  c->r[0]=R8(c->r[29]+0x0000014Eu); // 801E3464
  c->r[3]=c->r[29]+0x0000003Cu; // 801E3468
  c->r[0]=cntlz(c->r[0]); // 801E346C
  c->r[4]=rotl(c->r[0],27)&0x000000FFu; // 801E3470
  c->lr=0x801E3478u; f_801F098C(c); // 801E3474
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801E3478
  if (!crb(c,2)) { goto L_801E34DC; } // 801E347C
  c->r[30]=0u+0x00000000u; // 801E3480
  c->r[31]=0u+0x80310000u; // 801E3484
  W8(c->r[29]+0x0000014Fu,c->r[30]); // 801E3488
  c->r[31]=c->r[31]+0xFFFF8818u; // 801E348C
  c->r[12]=R32(c->r[31]+0x0000062Cu); // 801E3490
  cmps(c,0,(int32_t)c->r[12],0); // 801E3494
  if (crb(c,2)) { goto L_801E34DC; } // 801E3498
  c->r[3]=c->r[31]+0x00000624u; // 801E349C
  c->ctr=c->r[12]; // 801E34A0
  if (true) { c->lr=0x801E34A8u; dispatch(c,c->ctr); } // 801E34A4
  W32(c->r[31]+0x0000062Cu,c->r[30]); // 801E34A8
  goto L_801E34DC; // 801E34AC
L_801E34B0:;
  cmpu(c,0,c->r[0],0x00000004u); // 801E34B0
  if (!crb(c,2)) { goto L_801E34DC; } // 801E34B4
  c->r[31]=0u+0x00000000u; // 801E34B8
  W8(c->r[29]+0x0000014Fu,c->r[31]); // 801E34BC
  c->r[12]=R32(c->r[30]+0x0000062Cu); // 801E34C0
  cmps(c,0,(int32_t)c->r[12],0); // 801E34C4
  if (crb(c,2)) { goto L_801E34DC; } // 801E34C8
  c->r[3]=c->r[30]+0x00000624u; // 801E34CC
  c->ctr=c->r[12]; // 801E34D0
  if (true) { c->lr=0x801E34D8u; dispatch(c,c->ctr); } // 801E34D4
  W32(c->r[30]+0x0000062Cu,c->r[31]); // 801E34D8
L_801E34DC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E34DC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E34E0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E34E4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E34E8
  c->lr=c->r[0]; // 801E34EC
  c->r[1]=c->r[1]+0x00000020u; // 801E34F0
  return; // 801E34F4
}

// BTM_SetLinkPolicy
void f_801E34F8(Ctx* __restrict c) {
  trace_call(0x801E34F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E34F8
  c->r[0]=c->lr; // 801E34FC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E3500
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E3504
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E3508
  c->r[30]=0u+0x80280000u; // 801E350C
  c->r[30]=c->r[30]+0xFFFFED98u; // 801E3510
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E3514
  c->r[29]=c->r[4]|c->r[4]; // 801E3518
  W32(c->r[1]+0x00000010u,c->r[28]); // 801E351C
  c->r[28]=c->r[3]|c->r[3]; // 801E3520
  c->lr=0x801E3528u; f_801E61C4(c); // 801E3524
  c->r[4]=R16(c->r[29]+0x00000000u); // 801E3528
  c->r[31]=c->r[3]|c->r[3]; // 801E352C
  cmps(c,0,(int32_t)c->r[4],0); // 801E3530
  if (crb(c,2)) { goto L_801E3650; } // 801E3534
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 801E3538
  if (crb(c,2)) { goto L_801E3578; } // 801E353C
  c->r[0]=R8(c->r[3]+0x00000000u); // 801E3540
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 801E3544
  if (!crb(c,2)) { goto L_801E3578; } // 801E3548
  c->r[5]=rotl(c->r[4],0)&0x0000FFFEu; // 801E354C
  c->r[3]=0u+0x80310000u; // 801E3550
  W16(c->r[29]+0x00000000u,c->r[5]); // 801E3554
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E3558
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801E355C
  cmpu(c,0,c->r[0],0x00000003u); // 801E3560
  if (crb(c,0)) { goto L_801E3578; } // 801E3564
  c->r[3]=0u+0x000D0000u; // 801E3568
  c->r[4]=c->r[30]+0x000000BCu; // 801E356C
  c->r[3]=c->r[3]+0x00000002u; // 801E3570
  c->lr=0x801E3578u; f_801DC750(c); // 801E3574
L_801E3578:;
  c->r[3]=R16(c->r[29]+0x00000000u); // 801E3578
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 801E357C
  if (crb(c,2)) { goto L_801E35C0; } // 801E3580
  c->r[0]=R8(c->r[31]+0x00000000u); // 801E3584
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 801E3588
  if (!crb(c,2)) { goto L_801E35C0; } // 801E358C
  c->r[5]=rotl(c->r[3],0)&0xFFFFFFFDu; // 801E3590
  c->r[3]=0u+0x80310000u; // 801E3594
  W16(c->r[29]+0x00000000u,c->r[5]); // 801E3598
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E359C
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801E35A0
  cmpu(c,0,c->r[0],0x00000003u); // 801E35A4
  if (crb(c,0)) { goto L_801E35C0; } // 801E35A8
  c->r[3]=0u+0x000D0000u; // 801E35AC
  c->r[4]=c->r[30]+0x000000F8u; // 801E35B0
  c->r[3]=c->r[3]+0x00000002u; // 801E35B4
  c->r[5]=rotl(c->r[5],0)&0x0000FFFFu; // 801E35B8
  c->lr=0x801E35C0u; f_801DC750(c); // 801E35BC
L_801E35C0:;
  c->r[3]=R16(c->r[29]+0x00000000u); // 801E35C0
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 801E35C4
  if (crb(c,2)) { goto L_801E3608; } // 801E35C8
  c->r[0]=R8(c->r[31]+0x00000000u); // 801E35CC
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801E35D0
  if (!crb(c,2)) { goto L_801E3608; } // 801E35D4
  c->r[5]=rotl(c->r[3],0)&0xFFFFFFFBu; // 801E35D8
  c->r[3]=0u+0x80310000u; // 801E35DC
  W16(c->r[29]+0x00000000u,c->r[5]); // 801E35E0
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E35E4
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801E35E8
  cmpu(c,0,c->r[0],0x00000003u); // 801E35EC
  if (crb(c,0)) { goto L_801E3608; } // 801E35F0
  c->r[3]=0u+0x000D0000u; // 801E35F4
  c->r[4]=c->r[30]+0x00000130u; // 801E35F8
  c->r[3]=c->r[3]+0x00000002u; // 801E35FC
  c->r[5]=rotl(c->r[5],0)&0x0000FFFFu; // 801E3600
  c->lr=0x801E3608u; f_801DC750(c); // 801E3604
L_801E3608:;
  c->r[3]=R16(c->r[29]+0x00000000u); // 801E3608
  c->r[0]=rotl(c->r[3],0)&0x00000008u; cr0(c,c->r[0]); // 801E360C
  if (crb(c,2)) { goto L_801E3650; } // 801E3610
  c->r[0]=R8(c->r[31]+0x00000001u); // 801E3614
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801E3618
  if (!crb(c,2)) { goto L_801E3650; } // 801E361C
  c->r[5]=rotl(c->r[3],0)&0xFFFFFFF7u; // 801E3620
  c->r[3]=0u+0x80310000u; // 801E3624
  W16(c->r[29]+0x00000000u,c->r[5]); // 801E3628
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E362C
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801E3630
  cmpu(c,0,c->r[0],0x00000003u); // 801E3634
  if (crb(c,0)) { goto L_801E3650; } // 801E3638
  c->r[3]=0u+0x000D0000u; // 801E363C
  c->r[4]=c->r[30]+0x00000170u; // 801E3640
  c->r[3]=c->r[3]+0x00000002u; // 801E3644
  c->r[5]=rotl(c->r[5],0)&0x0000FFFFu; // 801E3648
  c->lr=0x801E3650u; f_801DC750(c); // 801E364C
L_801E3650:;
  c->r[3]=0u+0x80310000u; // 801E3650
  c->r[30]=0u+0x00000000u; // 801E3654
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E3658
  c->r[31]=c->r[3]+0x00000034u; // 801E365C
L_801E3660:;
  c->r[0]=R8(c->r[31]+0x00000119u); // 801E3660
  cmps(c,0,(int32_t)c->r[0],0); // 801E3664
  if (crb(c,2)) { goto L_801E3688; } // 801E3668
  c->r[4]=c->r[28]|c->r[28]; // 801E366C
  c->r[3]=c->r[31]+0x00000008u; // 801E3670
  c->r[5]=0u+0x00000006u; // 801E3674
  c->lr=0x801E367Cu; f_8020BD24(c); // 801E3678
  cmps(c,0,(int32_t)c->r[3],0); // 801E367C
  if (!crb(c,2)) { goto L_801E3688; } // 801E3680
  goto L_801E369C; // 801E3684
L_801E3688:;
  c->r[30]=c->r[30]+0x00000001u; // 801E3688
  c->r[31]=c->r[31]+0x0000011Cu; // 801E368C
  cmpu(c,0,c->r[30],0x00000004u); // 801E3690
  if (crb(c,0)) { IRQCHK(c); goto L_801E3660; } // 801E3694
  c->r[31]=0u+0x00000000u; // 801E3698
L_801E369C:;
  cmps(c,0,(int32_t)c->r[31],0); // 801E369C
  if (crb(c,2)) { goto L_801E36C4; } // 801E36A0
  c->r[3]=R16(c->r[31]+0x00000000u); // 801E36A4
  c->r[4]=R16(c->r[29]+0x00000000u); // 801E36A8
  c->lr=0x801E36B0u; f_801F0A3C(c); // 801E36AC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801E36B0
  c->r[3]=0u+0x00000003u; // 801E36B4
  if (crb(c,2)) { goto L_801E36C8; } // 801E36B8
  c->r[3]=0u+0x00000001u; // 801E36BC
  goto L_801E36C8; // 801E36C0
L_801E36C4:;
  c->r[3]=0u+0x00000007u; // 801E36C4
L_801E36C8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E36C8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E36CC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E36D0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E36D4
  c->r[28]=R32(c->r[1]+0x00000010u); // 801E36D8
  c->lr=c->r[0]; // 801E36DC
  c->r[1]=c->r[1]+0x00000020u; // 801E36E0
  return; // 801E36E4
}

// BTM_SetDefaultLinkPolicy
void f_801E36E8(Ctx* __restrict c) {
  trace_call(0x801E36E8u);
  c->r[4]=0u+0x80310000u; // 801E36E8
  c->r[4]=c->r[4]+0xFFFF8818u; // 801E36EC
  W16(c->r[4]+0x000004C4u,c->r[3]); // 801E36F0
  return; // 801E36F4
}

// btm_read_link_policy_complete
void f_801E36F8(Ctx* __restrict c) {
  trace_call(0x801E36F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E36F8
  c->r[0]=c->lr; // 801E36FC
  W32(c->r[1]+0x00000034u,c->r[0]); // 801E3700
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801E3704
  c->r[31]=0u+0x80310000u; // 801E3708
  c->r[31]=c->r[31]+0xFFFF8818u; // 801E370C
  W32(c->r[1]+0x00000028u,c->r[30]); // 801E3710
  W32(c->r[1]+0x00000024u,c->r[29]); // 801E3714
  c->r[29]=c->r[31]+0x00000034u; // 801E3718
  W32(c->r[1]+0x00000020u,c->r[28]); // 801E371C
  c->r[28]=c->r[3]|c->r[3]; // 801E3720
  c->r[3]=c->r[31]+0x000005ACu; // 801E3724
  c->r[30]=R32(c->r[31]+0x000005C4u); // 801E3728
  c->lr=0x801E3730u; f_801DCDB0(c); // 801E372C
  c->r[3]=0u+0x00000000u; // 801E3730
  cmps(c,0,(int32_t)c->r[30],0); // 801E3734
  W32(c->r[31]+0x000005C4u,c->r[3]); // 801E3738
  if (crb(c,2)) { goto L_801E37DC; } // 801E373C
  c->r[0]=R8(c->r[28]+0x00000000u); // 801E3740
  cmps(c,0,(int32_t)c->r[0],0); // 801E3744
  W8(c->r[1]+0x00000009u,c->r[0]); // 801E3748
  if (!crb(c,2)) { goto L_801E37C4; } // 801E374C
  W8(c->r[1]+0x00000008u,c->r[3]); // 801E3750
  c->r[0]=0u+0x00000004u; // 801E3754
  c->r[7]=0u+0x00000000u; // 801E3758
  c->r[4]=R8(c->r[28]+0x00000002u); // 801E375C
  c->r[3]=R8(c->r[28]+0x00000004u); // 801E3760
  c->r[5]=rotl(c->r[4],8)&0xFFFFFF00u; // 801E3764
  c->r[6]=R8(c->r[28]+0x00000001u); // 801E3768
  c->r[4]=R8(c->r[28]+0x00000003u); // 801E376C
  c->r[3]=rotl(c->r[3],8)&0xFFFFFF00u; // 801E3770
  c->r[5]=c->r[6]+c->r[5]; // 801E3774
  c->r[3]=c->r[4]+c->r[3]; // 801E3778
  W16(c->r[1]+0x00000010u,c->r[3]); // 801E377C
  c->r[3]=rotl(c->r[5],0)&0x0000FFFFu; // 801E3780
  c->ctr=c->r[0]; // 801E3784
L_801E3788:;
  c->r[0]=R8(c->r[29]+0x00000119u); // 801E3788
  cmps(c,0,(int32_t)c->r[0],0); // 801E378C
  if (crb(c,2)) { goto L_801E37B4; } // 801E3790
  c->r[0]=R16(c->r[29]+0x00000000u); // 801E3794
  cmpu(c,0,c->r[3],c->r[0]); // 801E3798
  if (!crb(c,2)) { goto L_801E37B4; } // 801E379C
  c->r[3]=c->r[1]+0x0000000Au; // 801E37A0
  c->r[4]=c->r[29]+0x00000008u; // 801E37A4
  c->r[5]=0u+0x00000006u; // 801E37A8
  c->lr=0x801E37B0u; f_80004364(c); // 801E37AC
  goto L_801E37CC; // 801E37B0
L_801E37B4:;
  c->r[7]=c->r[7]+0x00000001u; // 801E37B4
  c->r[29]=c->r[29]+0x0000011Cu; // 801E37B8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E3788; } // 801E37BC
  goto L_801E37CC; // 801E37C0
L_801E37C4:;
  c->r[0]=0u+0x0000000Au; // 801E37C4
  W8(c->r[1]+0x00000008u,c->r[0]); // 801E37C8
L_801E37CC:;
  c->r[12]=c->r[30]|c->r[30]; // 801E37CC
  c->r[3]=c->r[1]+0x00000008u; // 801E37D0
  c->ctr=c->r[12]; // 801E37D4
  if (true) { c->lr=0x801E37DCu; dispatch(c,c->ctr); } // 801E37D8
L_801E37DC:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801E37DC
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801E37E0
  c->r[30]=R32(c->r[1]+0x00000028u); // 801E37E4
  c->r[29]=R32(c->r[1]+0x00000024u); // 801E37E8
  c->r[28]=R32(c->r[1]+0x00000020u); // 801E37EC
  c->lr=c->r[0]; // 801E37F0
  c->r[1]=c->r[1]+0x00000030u; // 801E37F4
  return; // 801E37F8
}

// btm_read_remote_version_complete
void f_801E37FC(Ctx* __restrict c) {
  trace_call(0x801E37FCu);
  c->r[0]=R8(c->r[3]+0x00000000u); // 801E37FC
  c->r[4]=0u+0x80310000u; // 801E3800
  c->r[4]=c->r[4]+0xFFFF8818u; // 801E3804
  cmps(c,0,(int32_t)c->r[0],0); // 801E3808
  c->r[6]=c->r[4]+0x00000034u; // 801E380C
  if (!crb(c,2)) return; // 801E3810
  c->r[4]=R8(c->r[3]+0x00000002u); // 801E3814
  c->r[0]=0u+0x00000004u; // 801E3818
  c->r[5]=R8(c->r[3]+0x00000001u); // 801E381C
  c->r[4]=rotl(c->r[4],8)&0xFFFFFF00u; // 801E3820
  c->r[4]=c->r[5]+c->r[4]; // 801E3824
  c->r[4]=rotl(c->r[4],0)&0x0000FFFFu; // 801E3828
  c->ctr=c->r[0]; // 801E382C
L_801E3830:;
  c->r[0]=R8(c->r[6]+0x00000119u); // 801E3830
  cmps(c,0,(int32_t)c->r[0],0); // 801E3834
  if (crb(c,2)) { goto L_801E387C; } // 801E3838
  c->r[0]=R16(c->r[6]+0x00000000u); // 801E383C
  cmpu(c,0,c->r[0],c->r[4]); // 801E3840
  if (!crb(c,2)) { goto L_801E387C; } // 801E3844
  c->r[0]=R8(c->r[3]+0x00000003u); // 801E3848
  W8(c->r[6]+0x00000118u,c->r[0]); // 801E384C
  c->r[0]=R8(c->r[3]+0x00000005u); // 801E3850
  c->r[4]=R8(c->r[3]+0x00000004u); // 801E3854
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801E3858
  c->r[0]=c->r[4]+c->r[0]; // 801E385C
  W16(c->r[6]+0x0000010Au,c->r[0]); // 801E3860
  c->r[0]=R8(c->r[3]+0x00000007u); // 801E3864
  c->r[3]=R8(c->r[3]+0x00000006u); // 801E3868
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801E386C
  c->r[0]=c->r[3]+c->r[0]; // 801E3870
  W16(c->r[6]+0x0000010Cu,c->r[0]); // 801E3874
  return; // 801E3878
L_801E387C:;
  c->r[6]=c->r[6]+0x0000011Cu; // 801E387C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E3830; } // 801E3880
  return; // 801E3884
}

// btm_read_remote_features_complete
void f_801E3888(Ctx* __restrict c) {
  trace_call(0x801E3888u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E3888
  c->r[0]=c->lr; // 801E388C
  c->r[4]=0u+0x80310000u; // 801E3890
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E3894
  c->r[4]=c->r[4]+0xFFFF8818u; // 801E3898
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E389C
  c->r[31]=c->r[4]+0x00000034u; // 801E38A0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E38A4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E38A8
  W32(c->r[1]+0x00000010u,c->r[28]); // 801E38AC
  c->r[0]=R8(c->r[3]+0x00000000u); // 801E38B0
  cmps(c,0,(int32_t)c->r[0],0); // 801E38B4
  if (!crb(c,2)) { goto L_801E3A94; } // 801E38B8
  c->r[4]=R8(c->r[3]+0x00000002u); // 801E38BC
  c->r[0]=0u+0x00000004u; // 801E38C0
  c->r[5]=R8(c->r[3]+0x00000001u); // 801E38C4
  c->r[4]=rotl(c->r[4],8)&0xFFFFFF00u; // 801E38C8
  c->r[4]=c->r[5]+c->r[4]; // 801E38CC
  c->r[4]=rotl(c->r[4],0)&0x0000FFFFu; // 801E38D0
  c->ctr=c->r[0]; // 801E38D4
L_801E38D8:;
  c->r[0]=R8(c->r[31]+0x00000119u); // 801E38D8
  cmps(c,0,(int32_t)c->r[0],0); // 801E38DC
  if (crb(c,2)) { goto L_801E3A8C; } // 801E38E0
  c->r[0]=R16(c->r[31]+0x00000000u); // 801E38E4
  cmpu(c,0,c->r[0],c->r[4]); // 801E38E8
  if (!crb(c,2)) { goto L_801E3A8C; } // 801E38EC
  c->r[0]=R8(c->r[3]+0x00000003u); // 801E38F0
  W8(c->r[31]+0x00000110u,c->r[0]); // 801E38F4
  c->r[0]=R8(c->r[3]+0x00000004u); // 801E38F8
  W8(c->r[31]+0x00000111u,c->r[0]); // 801E38FC
  c->r[0]=R8(c->r[3]+0x00000005u); // 801E3900
  W8(c->r[31]+0x00000112u,c->r[0]); // 801E3904
  c->r[0]=R8(c->r[3]+0x00000006u); // 801E3908
  W8(c->r[31]+0x00000113u,c->r[0]); // 801E390C
  c->r[0]=R8(c->r[3]+0x00000007u); // 801E3910
  W8(c->r[31]+0x00000114u,c->r[0]); // 801E3914
  c->r[0]=R8(c->r[3]+0x00000008u); // 801E3918
  W8(c->r[31]+0x00000115u,c->r[0]); // 801E391C
  c->r[0]=R8(c->r[3]+0x00000009u); // 801E3920
  W8(c->r[31]+0x00000116u,c->r[0]); // 801E3924
  c->r[0]=R8(c->r[3]+0x0000000Au); // 801E3928
  c->r[3]=c->r[4]|c->r[4]; // 801E392C
  W8(c->r[31]+0x00000117u,c->r[0]); // 801E3930
  c->lr=0x801E3938u; f_801E4DC8(c); // 801E3934
  cmps(c,0,(int32_t)c->r[3],0); // 801E3938
  if (crb(c,2)) { goto L_801E3950; } // 801E393C
  c->r[4]=c->r[31]+0x00000110u; // 801E3940
  c->r[5]=0u+0x00000008u; // 801E3944
  c->r[3]=c->r[3]+0x00000077u; // 801E3948
  c->lr=0x801E3950u; f_80004364(c); // 801E394C
L_801E3950:;
  c->r[3]=0u+0x80310000u; // 801E3950
  c->r[0]=0u+0xFFFFCCF9u; // 801E3954
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E3958
  c->r[5]=R16(c->r[3]+0x00000654u); // 801E395C
  c->r[3]=R8(c->r[3]+0x00000636u); // 801E3960
  c->r[4]=c->r[5]&0x0000CC18u; cr0(c,c->r[4]); // 801E3964
  cmpu(c,0,c->r[3],0x00000003u); // 801E3968
  c->r[30]=c->r[4]&c->r[0]; // 801E396C
  if (crb(c,0)) { goto L_801E3980; } // 801E3970
  c->r[0]=c->r[5]&0x00003306u; cr0(c,c->r[0]); // 801E3974
  c->r[0]=c->r[4]|c->r[0]; // 801E3978
  c->r[30]=rotl(c->r[0],0)&0x0000FFFFu; // 801E397C
L_801E3980:;
  c->r[3]=0u+0x80310000u; // 801E3980
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E3984
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801E3988
  cmpu(c,0,c->r[0],0x00000004u); // 801E398C
  if (crb(c,0)) { goto L_801E39AC; } // 801E3990
  c->r[3]=0u+0x000D0000u; // 801E3994
  c->r[4]=0u+0x80280000u; // 801E3998
  c->r[3]=c->r[3]+0x00000003u; // 801E399C
  c->r[5]=rotl(c->r[30],0)&0x0000FFFFu; // 801E39A0
  c->r[4]=c->r[4]+0xFFFFEDD8u; // 801E39A4
  c->lr=0x801E39ACu; f_801DC750(c); // 801E39A8
L_801E39AC:;
  c->r[3]=R16(c->r[31]+0x00000000u); // 801E39AC
  c->r[4]=rotl(c->r[30],0)&0x0000FFFFu; // 801E39B0
  c->lr=0x801E39B8u; f_801EFF88(c); // 801E39B4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801E39B8
  if (crb(c,2)) { goto L_801E39C4; } // 801E39BC
  W16(c->r[31]+0x00000002u,c->r[30]); // 801E39C0
L_801E39C4:;
  c->r[4]=0u+0x80310000u; // 801E39C4
  c->r[4]=c->r[4]+0xFFFF8818u; // 801E39C8
  c->r[0]=R16(c->r[4]+0x000004C4u); // 801E39CC
  cmps(c,0,(int32_t)c->r[0],0); // 801E39D0
  if (crb(c,2)) { goto L_801E39E4; } // 801E39D4
  c->r[3]=c->r[31]+0x00000008u; // 801E39D8
  c->r[4]=c->r[4]+0x000004C4u; // 801E39DC
  c->lr=0x801E39E4u; f_801E34F8(c); // 801E39E0
L_801E39E4:;
  c->r[3]=0u+0x80310000u; // 801E39E4
  c->r[30]=0u+0x00000000u; // 801E39E8
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E39EC
  c->r[28]=R16(c->r[3]+0x000004C6u); // 801E39F0
  c->r[29]=c->r[3]+0x00000034u; // 801E39F4
L_801E39F8:;
  c->r[0]=R8(c->r[29]+0x00000119u); // 801E39F8
  cmps(c,0,(int32_t)c->r[0],0); // 801E39FC
  if (crb(c,2)) { goto L_801E3A20; } // 801E3A00
  c->r[3]=c->r[29]+0x00000008u; // 801E3A04
  c->r[4]=c->r[31]+0x00000008u; // 801E3A08
  c->r[5]=0u+0x00000006u; // 801E3A0C
  c->lr=0x801E3A14u; f_8020BD24(c); // 801E3A10
  cmps(c,0,(int32_t)c->r[3],0); // 801E3A14
  if (!crb(c,2)) { goto L_801E3A20; } // 801E3A18
  goto L_801E3A34; // 801E3A1C
L_801E3A20:;
  c->r[30]=c->r[30]+0x00000001u; // 801E3A20
  c->r[29]=c->r[29]+0x0000011Cu; // 801E3A24
  cmpu(c,0,c->r[30],0x00000004u); // 801E3A28
  if (crb(c,0)) { IRQCHK(c); goto L_801E39F8; } // 801E3A2C
  c->r[29]=0u+0x00000000u; // 801E3A30
L_801E3A34:;
  cmps(c,0,(int32_t)c->r[29],0); // 801E3A34
  if (crb(c,2)) { goto L_801E3A58; } // 801E3A38
  W16(c->r[29]+0x0000010Eu,c->r[28]); // 801E3A3C
  c->r[0]=R8(c->r[29]+0x0000011Au); // 801E3A40
  cmps(c,0,(int32_t)c->r[0],0); // 801E3A44
  if (!crb(c,2)) { goto L_801E3A58; } // 801E3A48
  c->r[3]=R16(c->r[29]+0x00000000u); // 801E3A4C
  c->r[4]=c->r[28]|c->r[28]; // 801E3A50
  c->lr=0x801E3A58u; f_801F1488(c); // 801E3A54
L_801E3A58:;
  c->r[3]=0u+0x80310000u; // 801E3A58
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E3A5C
  c->r[12]=R32(c->r[3]+0x000004C8u); // 801E3A60
  cmps(c,0,(int32_t)c->r[12],0); // 801E3A64
  if (crb(c,2)) { goto L_801E3A94; } // 801E3A68
  c->r[3]=c->r[31]+0x00000008u; // 801E3A6C
  c->r[4]=c->r[31]+0x0000000Eu; // 801E3A70
  c->r[5]=c->r[31]+0x00000011u; // 801E3A74
  c->r[6]=c->r[31]+0x00000110u; // 801E3A78
  c->r[7]=0u+0x00000001u; // 801E3A7C
  c->ctr=c->r[12]; // 801E3A80
  if (true) { c->lr=0x801E3A88u; dispatch(c,c->ctr); } // 801E3A84
  goto L_801E3A94; // 801E3A88
L_801E3A8C:;
  c->r[31]=c->r[31]+0x0000011Cu; // 801E3A8C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E38D8; } // 801E3A90
L_801E3A94:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E3A94
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E3A98
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E3A9C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E3AA0
  c->r[28]=R32(c->r[1]+0x00000010u); // 801E3AA4
  c->lr=c->r[0]; // 801E3AA8
  c->r[1]=c->r[1]+0x00000020u; // 801E3AAC
  return; // 801E3AB0
}

// BTM_SetDefaultLinkSuperTout
void f_801E3AB4(Ctx* __restrict c) {
  trace_call(0x801E3AB4u);
  c->r[4]=0u+0x80310000u; // 801E3AB4
  c->r[4]=c->r[4]+0xFFFF8818u; // 801E3AB8
  W16(c->r[4]+0x000004C6u,c->r[3]); // 801E3ABC
  return; // 801E3AC0
}

// BTM_IsAclConnectionUp
void f_801E3AC4(Ctx* __restrict c) {
  trace_call(0x801E3AC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E3AC4
  c->r[0]=c->lr; // 801E3AC8
  c->r[4]=0u+0x80310000u; // 801E3ACC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E3AD0
  c->r[4]=c->r[4]+0xFFFF8818u; // 801E3AD4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E3AD8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E3ADC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E3AE0
  c->r[29]=c->r[3]|c->r[3]; // 801E3AE4
  c->r[0]=R8(c->r[4]+0x000027C0u); // 801E3AE8
  cmpu(c,0,c->r[0],0x00000003u); // 801E3AEC
  if (crb(c,0)) { goto L_801E3B20; } // 801E3AF0
  c->r[3]=0u+0x000D0000u; // 801E3AF4
  c->r[4]=0u+0x80280000u; // 801E3AF8
  c->r[5]=R8(c->r[29]+0x00000000u); // 801E3AFC
  c->r[3]=c->r[3]+0x00000002u; // 801E3B00
  c->r[6]=R8(c->r[29]+0x00000001u); // 801E3B04
  c->r[4]=c->r[4]+0xFFFFEF78u; // 801E3B08
  c->r[7]=R8(c->r[29]+0x00000002u); // 801E3B0C
  c->r[8]=R8(c->r[29]+0x00000003u); // 801E3B10
  c->r[9]=R8(c->r[29]+0x00000004u); // 801E3B14
  c->r[10]=R8(c->r[29]+0x00000005u); // 801E3B18
  c->lr=0x801E3B20u; f_801DC7F0(c); // 801E3B1C
L_801E3B20:;
  c->r[3]=0u+0x80310000u; // 801E3B20
  c->r[31]=0u+0x00000000u; // 801E3B24
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E3B28
  c->r[30]=c->r[3]+0x00000034u; // 801E3B2C
L_801E3B30:;
  c->r[0]=R8(c->r[30]+0x00000119u); // 801E3B30
  cmps(c,0,(int32_t)c->r[0],0); // 801E3B34
  if (crb(c,2)) { goto L_801E3B58; } // 801E3B38
  c->r[4]=c->r[29]|c->r[29]; // 801E3B3C
  c->r[3]=c->r[30]+0x00000008u; // 801E3B40
  c->r[5]=0u+0x00000006u; // 801E3B44
  c->lr=0x801E3B4Cu; f_8020BD24(c); // 801E3B48
  cmps(c,0,(int32_t)c->r[3],0); // 801E3B4C
  if (!crb(c,2)) { goto L_801E3B58; } // 801E3B50
  goto L_801E3B6C; // 801E3B54
L_801E3B58:;
  c->r[31]=c->r[31]+0x00000001u; // 801E3B58
  c->r[30]=c->r[30]+0x0000011Cu; // 801E3B5C
  cmpu(c,0,c->r[31],0x00000004u); // 801E3B60
  if (crb(c,0)) { IRQCHK(c); goto L_801E3B30; } // 801E3B64
  c->r[30]=0u+0x00000000u; // 801E3B68
L_801E3B6C:;
  cmps(c,0,(int32_t)c->r[30],0); // 801E3B6C
  if (crb(c,2)) { goto L_801E3B7C; } // 801E3B70
  c->r[3]=0u+0x00000001u; // 801E3B74
  goto L_801E3B80; // 801E3B78
L_801E3B7C:;
  c->r[3]=0u+0x00000000u; // 801E3B7C
L_801E3B80:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E3B80
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E3B84
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E3B88
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E3B8C
  c->lr=c->r[0]; // 801E3B90
  c->r[1]=c->r[1]+0x00000020u; // 801E3B94
  return; // 801E3B98
}

// BTM_GetNumAclLinks
void f_801E3B9C(Ctx* __restrict c) {
  trace_call(0x801E3B9Cu);
  c->r[4]=0u+0x80310000u; // 801E3B9C
  c->r[3]=0u+0x00000000u; // 801E3BA0
  c->r[4]=c->r[4]+0xFFFF8818u; // 801E3BA4
  c->r[0]=R8(c->r[4]+0x0000014Du); // 801E3BA8
  cmps(c,0,(int32_t)c->r[0],0); // 801E3BAC
  if (crb(c,2)) { goto L_801E3BB8; } // 801E3BB0
  c->r[3]=0u+0x00000001u; // 801E3BB4
L_801E3BB8:;
  c->r[0]=R8(c->r[4]+0x00000269u); // 801E3BB8
  cmps(c,0,(int32_t)c->r[0],0); // 801E3BBC
  if (crb(c,2)) { goto L_801E3BCC; } // 801E3BC0
  c->r[0]=c->r[3]+0x00000001u; // 801E3BC4
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801E3BC8
L_801E3BCC:;
  c->r[0]=R8(c->r[4]+0x00000385u); // 801E3BCC
  cmps(c,0,(int32_t)c->r[0],0); // 801E3BD0
  if (crb(c,2)) { goto L_801E3BE0; } // 801E3BD4
  c->r[0]=c->r[3]+0x00000001u; // 801E3BD8
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801E3BDC
L_801E3BE0:;
  c->r[0]=R8(c->r[4]+0x000004A1u); // 801E3BE0
  cmps(c,0,(int32_t)c->r[0],0); // 801E3BE4
  if (crb(c,2)) return; // 801E3BE8
  c->r[0]=c->r[3]+0x00000001u; // 801E3BEC
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801E3BF0
  return; // 801E3BF4
}

// btm_get_acl_disc_reason_code
void f_801E3BF8(Ctx* __restrict c) {
  trace_call(0x801E3BF8u);
  c->r[3]=0u+0x80310000u; // 801E3BF8
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E3BFC
  c->r[3]=R8(c->r[3]+0x000027BFu); // 801E3C00
  return; // 801E3C04
}

// BTM_GetHCIConnHandle
void f_801E3C08(Ctx* __restrict c) {
  trace_call(0x801E3C08u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E3C08
  c->r[0]=c->lr; // 801E3C0C
  c->r[4]=0u+0x80310000u; // 801E3C10
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E3C14
  c->r[4]=c->r[4]+0xFFFF8818u; // 801E3C18
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E3C1C
  c->r[31]=0u+0x00000000u; // 801E3C20
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E3C24
  c->r[30]=c->r[4]+0x00000034u; // 801E3C28
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E3C2C
  c->r[29]=c->r[3]|c->r[3]; // 801E3C30
L_801E3C34:;
  c->r[0]=R8(c->r[30]+0x00000119u); // 801E3C34
  cmps(c,0,(int32_t)c->r[0],0); // 801E3C38
  if (crb(c,2)) { goto L_801E3C5C; } // 801E3C3C
  c->r[4]=c->r[29]|c->r[29]; // 801E3C40
  c->r[3]=c->r[30]+0x00000008u; // 801E3C44
  c->r[5]=0u+0x00000006u; // 801E3C48
  c->lr=0x801E3C50u; f_8020BD24(c); // 801E3C4C
  cmps(c,0,(int32_t)c->r[3],0); // 801E3C50
  if (!crb(c,2)) { goto L_801E3C5C; } // 801E3C54
  goto L_801E3C70; // 801E3C58
L_801E3C5C:;
  c->r[31]=c->r[31]+0x00000001u; // 801E3C5C
  c->r[30]=c->r[30]+0x0000011Cu; // 801E3C60
  cmpu(c,0,c->r[31],0x00000004u); // 801E3C64
  if (crb(c,0)) { IRQCHK(c); goto L_801E3C34; } // 801E3C68
  c->r[30]=0u+0x00000000u; // 801E3C6C
L_801E3C70:;
  cmps(c,0,(int32_t)c->r[30],0); // 801E3C70
  if (crb(c,2)) { goto L_801E3C80; } // 801E3C74
  c->r[3]=R16(c->r[30]+0x00000000u); // 801E3C78
  goto L_801E3C88; // 801E3C7C
L_801E3C80:;
  c->r[3]=0u+0x00010000u; // 801E3C80
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801E3C84
L_801E3C88:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E3C88
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E3C8C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E3C90
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E3C94
  c->lr=c->r[0]; // 801E3C98
  c->r[1]=c->r[1]+0x00000020u; // 801E3C9C
  return; // 801E3CA0
}

// btm_process_clk_off_comp_evt
void f_801E3CA4(Ctx* __restrict c) {
  trace_call(0x801E3CA4u);
  c->r[5]=0u+0x80310000u; // 801E3CA4
  c->r[6]=0u+0x00000000u; // 801E3CA8
  c->r[5]=c->r[5]+0xFFFF8818u; // 801E3CAC
  c->r[0]=R8(c->r[5]+0x0000014Du); // 801E3CB0
  cmps(c,0,(int32_t)c->r[0],0); // 801E3CB4
  if (crb(c,2)) { goto L_801E3CC8; } // 801E3CB8
  c->r[0]=R16(c->r[5]+0x00000034u); // 801E3CBC
  cmpu(c,0,c->r[0],c->r[3]); // 801E3CC0
  if (crb(c,2)) { goto L_801E3D20; } // 801E3CC4
L_801E3CC8:;
  c->r[0]=R8(c->r[5]+0x00000269u); // 801E3CC8
  c->r[6]=0u+0x00000001u; // 801E3CCC
  cmps(c,0,(int32_t)c->r[0],0); // 801E3CD0
  if (crb(c,2)) { goto L_801E3CE4; } // 801E3CD4
  c->r[0]=R16(c->r[5]+0x00000150u); // 801E3CD8
  cmpu(c,0,c->r[0],c->r[3]); // 801E3CDC
  if (crb(c,2)) { goto L_801E3D20; } // 801E3CE0
L_801E3CE4:;
  c->r[0]=R8(c->r[5]+0x00000385u); // 801E3CE4
  c->r[6]=0u+0x00000002u; // 801E3CE8
  cmps(c,0,(int32_t)c->r[0],0); // 801E3CEC
  if (crb(c,2)) { goto L_801E3D00; } // 801E3CF0
  c->r[0]=R16(c->r[5]+0x0000026Cu); // 801E3CF4
  cmpu(c,0,c->r[0],c->r[3]); // 801E3CF8
  if (crb(c,2)) { goto L_801E3D20; } // 801E3CFC
L_801E3D00:;
  c->r[0]=R8(c->r[5]+0x000004A1u); // 801E3D00
  c->r[6]=0u+0x00000003u; // 801E3D04
  cmps(c,0,(int32_t)c->r[0],0); // 801E3D08
  if (crb(c,2)) { goto L_801E3D1C; } // 801E3D0C
  c->r[0]=R16(c->r[5]+0x00000388u); // 801E3D10
  cmpu(c,0,c->r[0],c->r[3]); // 801E3D14
  if (crb(c,2)) { goto L_801E3D20; } // 801E3D18
L_801E3D1C:;
  c->r[6]=0u+0x00000004u; // 801E3D1C
L_801E3D20:;
  cmpu(c,0,c->r[6],0x00000004u); // 801E3D20
  if (!crb(c,0)) return; // 801E3D24
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)284); // 801E3D28
  c->r[3]=0u+0x80310000u; // 801E3D2C
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E3D30
  c->r[3]=c->r[3]+c->r[0]; // 801E3D34
  W16(c->r[3]+0x0000003Au,c->r[4]); // 801E3D38
  return; // 801E3D3C
}

// btm_acl_role_changed
void f_801E3D40(Ctx* __restrict c) {
  trace_call(0x801E3D40u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E3D40
  c->r[0]=c->lr; // 801E3D44
  W32(c->r[1]+0x00000034u,c->r[0]); // 801E3D48
  c->r[11]=c->r[1]+0x00000030u; // 801E3D4C
  c->lr=0x801E3D54u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E3D50
  cmps(c,0,(int32_t)c->r[4],0); // 801E3D54
  c->r[25]=c->r[3]|c->r[3]; // 801E3D58
  c->r[26]=c->r[4]|c->r[4]; // 801E3D5C
  c->r[28]=c->r[5]|c->r[5]; // 801E3D60
  if (crb(c,2)) { goto L_801E3D70; } // 801E3D64
  c->r[27]=c->r[26]|c->r[26]; // 801E3D68
  goto L_801E3D7C; // 801E3D6C
L_801E3D70:;
  c->r[3]=0u+0x80310000u; // 801E3D70
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E3D74
  c->r[27]=c->r[3]+0x000027B4u; // 801E3D78
L_801E3D7C:;
  c->r[3]=0u+0x80310000u; // 801E3D7C
  c->r[30]=0u+0x00000000u; // 801E3D80
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E3D84
  c->r[29]=c->r[3]+0x00000034u; // 801E3D88
L_801E3D8C:;
  c->r[0]=R8(c->r[29]+0x00000119u); // 801E3D8C
  cmps(c,0,(int32_t)c->r[0],0); // 801E3D90
  if (crb(c,2)) { goto L_801E3DB4; } // 801E3D94
  c->r[4]=c->r[27]|c->r[27]; // 801E3D98
  c->r[3]=c->r[29]+0x00000008u; // 801E3D9C
  c->r[5]=0u+0x00000006u; // 801E3DA0
  c->lr=0x801E3DA8u; f_8020BD24(c); // 801E3DA4
  cmps(c,0,(int32_t)c->r[3],0); // 801E3DA8
  if (!crb(c,2)) { goto L_801E3DB4; } // 801E3DAC
  goto L_801E3DC8; // 801E3DB0
L_801E3DB4:;
  c->r[30]=c->r[30]+0x00000001u; // 801E3DB4
  c->r[29]=c->r[29]+0x0000011Cu; // 801E3DB8
  cmpu(c,0,c->r[30],0x00000004u); // 801E3DBC
  if (crb(c,0)) { IRQCHK(c); goto L_801E3D8C; } // 801E3DC0
  c->r[29]=0u+0x00000000u; // 801E3DC4
L_801E3DC8:;
  c->r[3]=0u+0x80310000u; // 801E3DC8
  cmps(c,0,(int32_t)c->r[29],0); // 801E3DCC
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E3DD0
  c->r[31]=c->r[3]+0x00000624u; // 801E3DD4
  if (crb(c,2)) { goto L_801E3F1C; } // 801E3DD8
  cmps(c,0,(int32_t)c->r[25],0); // 801E3DDC
  W8(c->r[31]+0x00000000u,c->r[25]); // 801E3DE0
  if (!crb(c,2)) { goto L_801E3E00; } // 801E3DE4
  W8(c->r[31]+0x00000001u,c->r[28]); // 801E3DE8
  c->r[4]=c->r[27]|c->r[27]; // 801E3DEC
  c->r[3]=c->r[31]+0x00000002u; // 801E3DF0
  c->r[5]=0u+0x00000006u; // 801E3DF4
  c->lr=0x801E3DFCu; f_80004364(c); // 801E3DF8
  W8(c->r[29]+0x0000011Au,c->r[28]); // 801E3DFC
L_801E3E00:;
  cmps(c,0,(int32_t)c->r[26],0); // 801E3E00
  if (crb(c,2)) { goto L_801E3E7C; } // 801E3E04
  c->r[3]=0u+0x80310000u; // 801E3E08
  c->r[30]=R16(c->r[29]+0x0000010Eu); // 801E3E0C
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E3E10
  c->r[28]=0u+0x00000000u; // 801E3E14
  c->r[27]=c->r[3]+0x00000034u; // 801E3E18
L_801E3E1C:;
  c->r[0]=R8(c->r[27]+0x00000119u); // 801E3E1C
  cmps(c,0,(int32_t)c->r[0],0); // 801E3E20
  if (crb(c,2)) { goto L_801E3E44; } // 801E3E24
  c->r[3]=c->r[27]+0x00000008u; // 801E3E28
  c->r[4]=c->r[29]+0x00000008u; // 801E3E2C
  c->r[5]=0u+0x00000006u; // 801E3E30
  c->lr=0x801E3E38u; f_8020BD24(c); // 801E3E34
  cmps(c,0,(int32_t)c->r[3],0); // 801E3E38
  if (!crb(c,2)) { goto L_801E3E44; } // 801E3E3C
  goto L_801E3E58; // 801E3E40
L_801E3E44:;
  c->r[28]=c->r[28]+0x00000001u; // 801E3E44
  c->r[27]=c->r[27]+0x0000011Cu; // 801E3E48
  cmpu(c,0,c->r[28],0x00000004u); // 801E3E4C
  if (crb(c,0)) { IRQCHK(c); goto L_801E3E1C; } // 801E3E50
  c->r[27]=0u+0x00000000u; // 801E3E54
L_801E3E58:;
  cmps(c,0,(int32_t)c->r[27],0); // 801E3E58
  if (crb(c,2)) { goto L_801E3E7C; } // 801E3E5C
  W16(c->r[27]+0x0000010Eu,c->r[30]); // 801E3E60
  c->r[0]=R8(c->r[27]+0x0000011Au); // 801E3E64
  cmps(c,0,(int32_t)c->r[0],0); // 801E3E68
  if (!crb(c,2)) { goto L_801E3E7C; } // 801E3E6C
  c->r[3]=R16(c->r[27]+0x00000000u); // 801E3E70
  c->r[4]=c->r[30]|c->r[30]; // 801E3E74
  c->lr=0x801E3E7Cu; f_801F1488(c); // 801E3E78
L_801E3E7C:;
  c->r[0]=R8(c->r[29]+0x0000011Bu); // 801E3E7C
  cmpu(c,0,c->r[0],0x00000003u); // 801E3E80
  if (!crb(c,2)) { goto L_801E3EA8; } // 801E3E84
  c->r[3]=R16(c->r[29]+0x00000000u); // 801E3E88
  c->r[4]=0u+0x00000001u; // 801E3E8C
  c->lr=0x801E3E94u; f_801F0094(c); // 801E3E90
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801E3E94
  if (crb(c,2)) { goto L_801E3EA8; } // 801E3E98
  c->r[0]=0u+0x00000004u; // 801E3E9C
  W8(c->r[29]+0x0000011Bu,c->r[0]); // 801E3EA0
  goto L_801E3F1C; // 801E3EA4
L_801E3EA8:;
  cmps(c,0,(int32_t)c->r[29],0); // 801E3EA8
  if (crb(c,2)) { goto L_801E3EC4; } // 801E3EAC
  c->r[0]=R8(c->r[29]+0x0000011Bu); // 801E3EB0
  cmpu(c,0,c->r[0],0x00000005u); // 801E3EB4
  if (!crb(c,2)) { goto L_801E3EC4; } // 801E3EB8
  c->r[0]=0u+0x00000000u; // 801E3EBC
  W8(c->r[29]+0x0000011Bu,c->r[0]); // 801E3EC0
L_801E3EC4:;
  c->r[30]=0u+0x80310000u; // 801E3EC4
  c->r[30]=c->r[30]+0xFFFF8818u; // 801E3EC8
  c->r[12]=R32(c->r[30]+0x0000062Cu); // 801E3ECC
  cmps(c,0,(int32_t)c->r[12],0); // 801E3ED0
  if (crb(c,2)) { goto L_801E3EEC; } // 801E3ED4
  c->r[3]=c->r[31]|c->r[31]; // 801E3ED8
  c->ctr=c->r[12]; // 801E3EDC
  if (true) { c->lr=0x801E3EE4u; dispatch(c,c->ctr); } // 801E3EE0
  c->r[0]=0u+0x00000000u; // 801E3EE4
  W32(c->r[30]+0x0000062Cu,c->r[0]); // 801E3EE8
L_801E3EEC:;
  c->r[3]=0u+0x80310000u; // 801E3EEC
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E3EF0
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801E3EF4
  cmpu(c,0,c->r[0],0x00000004u); // 801E3EF8
  if (crb(c,0)) { goto L_801E3F1C; } // 801E3EFC
  c->r[3]=0u+0x000D0000u; // 801E3F00
  c->r[4]=0u+0x80280000u; // 801E3F04
  c->r[5]=R8(c->r[31]+0x00000001u); // 801E3F08
  c->r[3]=c->r[3]+0x00000003u; // 801E3F0C
  c->r[6]=R8(c->r[31]+0x00000000u); // 801E3F10
  c->r[4]=c->r[4]+0xFFFFEFB4u; // 801E3F14
  c->lr=0x801E3F1Cu; f_801DC770(c); // 801E3F18
L_801E3F1C:;
  c->r[11]=c->r[1]+0x00000030u; // 801E3F1C
  c->lr=0x801E3F24u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E3F20
  c->r[0]=R32(c->r[1]+0x00000034u); // 801E3F24
  c->lr=c->r[0]; // 801E3F28
  c->r[1]=c->r[1]+0x00000030u; // 801E3F2C
  return; // 801E3F30
}

// btm_acl_timeout
void f_801E3F34(Ctx* __restrict c) {
  trace_call(0x801E3F34u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E3F34
  c->r[0]=c->lr; // 801E3F38
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E3F3C
  c->r[0]=R32(c->r[3]+0x00000010u); // 801E3F40
  cmpu(c,0,c->r[0],0x00000004u); // 801E3F44
  if (!crb(c,2)) { goto L_801E3F80; } // 801E3F48
  c->r[4]=0u+0x80310000u; // 801E3F4C
  c->r[3]=0u+0x0000000Au; // 801E3F50
  c->r[4]=c->r[4]+0xFFFF8818u; // 801E3F54
  c->r[0]=0u+0x00000000u; // 801E3F58
  c->r[12]=R32(c->r[4]+0x000005C4u); // 801E3F5C
  W8(c->r[1]+0x00000008u,c->r[3]); // 801E3F60
  cmps(c,0,(int32_t)c->r[12],0); // 801E3F64
  W16(c->r[1]+0x00000010u,c->r[0]); // 801E3F68
  W32(c->r[4]+0x000005C4u,c->r[0]); // 801E3F6C
  if (crb(c,2)) { goto L_801E3F80; } // 801E3F70
  c->r[3]=c->r[1]+0x00000008u; // 801E3F74
  c->ctr=c->r[12]; // 801E3F78
  if (true) { c->lr=0x801E3F80u; dispatch(c,c->ctr); } // 801E3F7C
L_801E3F80:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E3F80
  c->lr=c->r[0]; // 801E3F84
  c->r[1]=c->r[1]+0x00000020u; // 801E3F88
  return; // 801E3F8C
}

// btm_get_max_packet_size
void f_801E3F90(Ctx* __restrict c) {
  trace_call(0x801E3F90u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E3F90
  c->r[0]=c->lr; // 801E3F94
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E3F98
  c->r[11]=c->r[1]+0x00000020u; // 801E3F9C
  c->lr=0x801E3FA4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E3FA0
  c->r[4]=0u+0x80310000u; // 801E3FA4
  c->r[27]=c->r[3]|c->r[3]; // 801E3FA8
  c->r[4]=c->r[4]+0xFFFF8818u; // 801E3FAC
  c->r[30]=0u+0x00000000u; // 801E3FB0
  c->r[29]=c->r[4]+0x00000034u; // 801E3FB4
L_801E3FB8:;
  c->r[0]=R8(c->r[29]+0x00000119u); // 801E3FB8
  cmps(c,0,(int32_t)c->r[0],0); // 801E3FBC
  if (crb(c,2)) { goto L_801E3FE0; } // 801E3FC0
  c->r[4]=c->r[27]|c->r[27]; // 801E3FC4
  c->r[3]=c->r[29]+0x00000008u; // 801E3FC8
  c->r[5]=0u+0x00000006u; // 801E3FCC
  c->lr=0x801E3FD4u; f_8020BD24(c); // 801E3FD0
  cmps(c,0,(int32_t)c->r[3],0); // 801E3FD4
  if (!crb(c,2)) { goto L_801E3FE0; } // 801E3FD8
  goto L_801E3FF4; // 801E3FDC
L_801E3FE0:;
  c->r[30]=c->r[30]+0x00000001u; // 801E3FE0
  c->r[29]=c->r[29]+0x0000011Cu; // 801E3FE4
  cmpu(c,0,c->r[30],0x00000004u); // 801E3FE8
  if (crb(c,0)) { IRQCHK(c); goto L_801E3FB8; } // 801E3FEC
  c->r[29]=0u+0x00000000u; // 801E3FF0
L_801E3FF4:;
  cmps(c,0,(int32_t)c->r[29],0); // 801E3FF4
  c->r[28]=0u+0x00000000u; // 801E3FF8
  c->r[31]=0u+0x00000000u; // 801E3FFC
  if (crb(c,2)) { goto L_801E400C; } // 801E4000
  c->r[28]=R16(c->r[29]+0x00000002u); // 801E4004
  goto L_801E4030; // 801E4008
L_801E400C:;
  c->r[30]=0u+0x80310000u; // 801E400C
  c->r[4]=c->r[27]|c->r[27]; // 801E4010
  c->r[30]=c->r[30]+0xFFFF8818u; // 801E4014
  c->r[5]=0u+0x00000006u; // 801E4018
  c->r[3]=c->r[30]+0x00000630u; // 801E401C
  c->lr=0x801E4024u; f_8020BD24(c); // 801E4020
  cmps(c,0,(int32_t)c->r[3],0); // 801E4024
  if (!crb(c,2)) { goto L_801E4030; } // 801E4028
  c->r[28]=R16(c->r[30]+0x00000654u); // 801E402C
L_801E4030:;
  cmps(c,0,(int32_t)c->r[28],0); // 801E4030
  if (crb(c,2)) { goto L_801E40F4; } // 801E4034
  c->r[0]=rotl(c->r[28],0)&0x00002000u; cr0(c,c->r[0]); // 801E4038
  if (!crb(c,2)) { goto L_801E4048; } // 801E403C
  c->r[31]=0u+0x000003FDu; // 801E4040
  goto L_801E40F4; // 801E4044
L_801E4048:;
  c->r[0]=rotl(c->r[28],0)&0x00001000u; cr0(c,c->r[0]); // 801E4048
  if (!crb(c,2)) { goto L_801E4058; } // 801E404C
  c->r[31]=0u+0x000002A7u; // 801E4050
  goto L_801E40F4; // 801E4054
L_801E4058:;
  c->r[0]=rotl(c->r[28],0)&0x00000200u; cr0(c,c->r[0]); // 801E4058
  if (!crb(c,2)) { goto L_801E4068; } // 801E405C
  c->r[31]=0u+0x00000228u; // 801E4060
  goto L_801E40F4; // 801E4064
L_801E4068:;
  c->r[0]=rotl(c->r[28],0)&0x00008000u; cr0(c,c->r[0]); // 801E4068
  if (crb(c,2)) { goto L_801E4078; } // 801E406C
  c->r[31]=0u+0x00000153u; // 801E4070
  goto L_801E40F4; // 801E4074
L_801E4078:;
  c->r[0]=rotl(c->r[28],0)&0x00000100u; cr0(c,c->r[0]); // 801E4078
  if (!crb(c,2)) { goto L_801E4088; } // 801E407C
  c->r[31]=0u+0x0000016Fu; // 801E4080
  goto L_801E40F4; // 801E4084
L_801E4088:;
  c->r[0]=rotl(c->r[28],0)&0x00004000u; cr0(c,c->r[0]); // 801E4088
  if (crb(c,2)) { goto L_801E4098; } // 801E408C
  c->r[31]=0u+0x000000E0u; // 801E4090
  goto L_801E40F4; // 801E4094
L_801E4098:;
  c->r[0]=rotl(c->r[28],0)&0x00000800u; cr0(c,c->r[0]); // 801E4098
  if (crb(c,2)) { goto L_801E40A8; } // 801E409C
  c->r[31]=0u+0x000000B7u; // 801E40A0
  goto L_801E40F4; // 801E40A4
L_801E40A8:;
  c->r[0]=rotl(c->r[28],0)&0x00000400u; cr0(c,c->r[0]); // 801E40A8
  if (crb(c,2)) { goto L_801E40B8; } // 801E40AC
  c->r[31]=0u+0x00000079u; // 801E40B0
  goto L_801E40F4; // 801E40B4
L_801E40B8:;
  c->r[0]=rotl(c->r[28],0)&0x00000004u; cr0(c,c->r[0]); // 801E40B8
  if (!crb(c,2)) { goto L_801E40C8; } // 801E40BC
  c->r[31]=0u+0x00000053u; // 801E40C0
  goto L_801E40F4; // 801E40C4
L_801E40C8:;
  c->r[0]=rotl(c->r[28],0)&0x00000002u; cr0(c,c->r[0]); // 801E40C8
  if (!crb(c,2)) { goto L_801E40D8; } // 801E40CC
  c->r[31]=0u+0x00000036u; // 801E40D0
  goto L_801E40F4; // 801E40D4
L_801E40D8:;
  c->r[0]=rotl(c->r[28],0)&0x00000010u; cr0(c,c->r[0]); // 801E40D8
  if (crb(c,2)) { goto L_801E40E8; } // 801E40DC
  c->r[31]=0u+0x0000001Bu; // 801E40E0
  goto L_801E40F4; // 801E40E4
L_801E40E8:;
  c->r[0]=rotl(c->r[28],0)&0x00000008u; cr0(c,c->r[0]); // 801E40E8
  if (crb(c,2)) { goto L_801E40F4; } // 801E40EC
  c->r[31]=0u+0x00000011u; // 801E40F0
L_801E40F4:;
  cmpu(c,0,c->r[31],0x000003FDu); // 801E40F4
  if (!crb(c,2)) { goto L_801E4114; } // 801E40F8
  c->r[3]=0u+0x80310000u; // 801E40FC
  c->r[3]=c->r[3]+0xFFFF82F0u; // 801E4100
  c->r[0]=R16(c->r[3]+0x0000007Cu); // 801E4104
  cmpu(c,0,c->r[0],0x000003F9u); // 801E4108
  if (!crb(c,2)) { goto L_801E4114; } // 801E410C
  c->r[31]=0u+0x000003F9u; // 801E4110
L_801E4114:;
  c->r[11]=c->r[1]+0x00000020u; // 801E4114
  c->r[3]=c->r[31]|c->r[31]; // 801E4118
  c->lr=0x801E4120u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E411C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E4120
  c->lr=c->r[0]; // 801E4124
  c->r[1]=c->r[1]+0x00000020u; // 801E4128
  return; // 801E412C
}

// BTM_AclRegisterForChanges
void f_801E4130(Ctx* __restrict c) {
  trace_call(0x801E4130u);
  cmps(c,0,(int32_t)c->r[3],0); // 801E4130
  if (!crb(c,2)) { goto L_801E414C; } // 801E4134
  c->r[3]=0u+0x80310000u; // 801E4138
  c->r[0]=0u+0x00000000u; // 801E413C
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E4140
  W32(c->r[3]+0x000004C8u,c->r[0]); // 801E4144
  goto L_801E416C; // 801E4148
L_801E414C:;
  c->r[4]=0u+0x80310000u; // 801E414C
  c->r[4]=c->r[4]+0xFFFF8818u; // 801E4150
  c->r[0]=R32(c->r[4]+0x000004C8u); // 801E4154
  cmps(c,0,(int32_t)c->r[0],0); // 801E4158
  if (crb(c,2)) { goto L_801E4168; } // 801E415C
  c->r[3]=0u+0x00000002u; // 801E4160
  return; // 801E4164
L_801E4168:;
  W32(c->r[4]+0x000004C8u,c->r[3]); // 801E4168
L_801E416C:;
  c->r[3]=0u+0x00000000u; // 801E416C
  return; // 801E4170
}

// btm_qos_setup_complete
void f_801E4174(Ctx* __restrict c) {
  trace_call(0x801E4174u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E4174
  c->r[0]=c->lr; // 801E4178
  W32(c->r[1]+0x00000044u,c->r[0]); // 801E417C
  c->r[11]=c->r[1]+0x00000040u; // 801E4180
  c->lr=0x801E4188u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E4184
  c->r[31]=0u+0x80310000u; // 801E4188
  c->r[27]=c->r[3]|c->r[3]; // 801E418C
  c->r[31]=c->r[31]+0xFFFF8818u; // 801E4190
  c->r[28]=c->r[4]|c->r[4]; // 801E4194
  c->r[30]=R32(c->r[31]+0x00000618u); // 801E4198
  c->r[29]=c->r[5]|c->r[5]; // 801E419C
  c->r[3]=c->r[31]+0x00000600u; // 801E41A0
  c->lr=0x801E41A8u; f_801DCDB0(c); // 801E41A4
  c->r[0]=0u+0x00000000u; // 801E41A8
  cmps(c,0,(int32_t)c->r[30],0); // 801E41AC
  W32(c->r[31]+0x00000618u,c->r[0]); // 801E41B0
  if (crb(c,2)) { goto L_801E4234; } // 801E41B4
  cmps(c,0,(int32_t)c->r[29],0); // 801E41B8
  W8(c->r[1]+0x00000022u,c->r[27]); // 801E41BC
  W16(c->r[1]+0x00000020u,c->r[28]); // 801E41C0
  if (crb(c,2)) { goto L_801E41F8; } // 801E41C4
  c->r[0]=R8(c->r[29]+0x00000000u); // 801E41C8
  W8(c->r[1]+0x00000008u,c->r[0]); // 801E41CC
  c->r[0]=R8(c->r[29]+0x00000001u); // 801E41D0
  W8(c->r[1]+0x00000009u,c->r[0]); // 801E41D4
  c->r[0]=R32(c->r[29]+0x00000004u); // 801E41D8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801E41DC
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 801E41E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E41E4
  c->r[0]=R32(c->r[29]+0x00000010u); // 801E41E8
  W32(c->r[1]+0x00000018u,c->r[0]); // 801E41EC
  c->r[0]=R32(c->r[29]+0x00000014u); // 801E41F0
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801E41F4
L_801E41F8:;
  c->r[3]=0u+0x80310000u; // 801E41F8
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E41FC
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801E4200
  cmpu(c,0,c->r[0],0x00000005u); // 801E4204
  if (crb(c,0)) { goto L_801E4224; } // 801E4208
  c->r[3]=0u+0x000D0000u; // 801E420C
  c->r[4]=0u+0x80280000u; // 801E4210
  c->r[5]=R32(c->r[29]+0x00000014u); // 801E4214
  c->r[3]=c->r[3]+0x00000004u; // 801E4218
  c->r[4]=c->r[4]+0xFFFFF01Cu; // 801E421C
  c->lr=0x801E4224u; f_801DC750(c); // 801E4220
L_801E4224:;
  c->r[12]=c->r[30]|c->r[30]; // 801E4224
  c->r[3]=c->r[1]+0x00000008u; // 801E4228
  c->ctr=c->r[12]; // 801E422C
  if (true) { c->lr=0x801E4234u; dispatch(c,c->ctr); } // 801E4230
L_801E4234:;
  c->r[11]=c->r[1]+0x00000040u; // 801E4234
  c->lr=0x801E423Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E4238
  c->r[0]=R32(c->r[1]+0x00000044u); // 801E423C
  c->lr=c->r[0]; // 801E4240
  c->r[1]=c->r[1]+0x00000040u; // 801E4244
  return; // 801E4248
}

// BTM_ReadRSSI
void f_801E424C(Ctx* __restrict c) {
  trace_call(0x801E424Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E424C
  c->r[0]=c->lr; // 801E4250
  c->r[5]=0u+0x80310000u; // 801E4254
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E4258
  c->r[5]=c->r[5]+0xFFFF8818u; // 801E425C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E4260
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E4264
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E4268
  c->r[29]=c->r[4]|c->r[4]; // 801E426C
  W32(c->r[1]+0x00000010u,c->r[28]); // 801E4270
  c->r[28]=c->r[3]|c->r[3]; // 801E4274
  c->r[0]=R8(c->r[5]+0x000027C0u); // 801E4278
  cmpu(c,0,c->r[0],0x00000003u); // 801E427C
  if (crb(c,0)) { goto L_801E42B0; } // 801E4280
  c->r[3]=0u+0x000D0000u; // 801E4284
  c->r[4]=0u+0x80280000u; // 801E4288
  c->r[5]=R8(c->r[28]+0x00000000u); // 801E428C
  c->r[3]=c->r[3]+0x00000002u; // 801E4290
  c->r[6]=R8(c->r[28]+0x00000001u); // 801E4294
  c->r[4]=c->r[4]+0xFFFFF044u; // 801E4298
  c->r[7]=R8(c->r[28]+0x00000002u); // 801E429C
  c->r[8]=R8(c->r[28]+0x00000003u); // 801E42A0
  c->r[9]=R8(c->r[28]+0x00000004u); // 801E42A4
  c->r[10]=R8(c->r[28]+0x00000005u); // 801E42A8
  c->lr=0x801E42B0u; f_801DC7F0(c); // 801E42AC
L_801E42B0:;
  c->r[3]=0u+0x80310000u; // 801E42B0
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E42B4
  c->r[0]=R32(c->r[3]+0x000005E0u); // 801E42B8
  cmps(c,0,(int32_t)c->r[0],0); // 801E42BC
  if (crb(c,2)) { goto L_801E42CC; } // 801E42C0
  c->r[3]=0u+0x00000002u; // 801E42C4
  goto L_801E4368; // 801E42C8
L_801E42CC:;
  c->r[30]=c->r[3]+0x00000034u; // 801E42CC
  c->r[31]=0u+0x00000000u; // 801E42D0
L_801E42D4:;
  c->r[0]=R8(c->r[30]+0x00000119u); // 801E42D4
  cmps(c,0,(int32_t)c->r[0],0); // 801E42D8
  if (crb(c,2)) { goto L_801E42FC; } // 801E42DC
  c->r[4]=c->r[28]|c->r[28]; // 801E42E0
  c->r[3]=c->r[30]+0x00000008u; // 801E42E4
  c->r[5]=0u+0x00000006u; // 801E42E8
  c->lr=0x801E42F0u; f_8020BD24(c); // 801E42EC
  cmps(c,0,(int32_t)c->r[3],0); // 801E42F0
  if (!crb(c,2)) { goto L_801E42FC; } // 801E42F4
  goto L_801E4310; // 801E42F8
L_801E42FC:;
  c->r[31]=c->r[31]+0x00000001u; // 801E42FC
  c->r[30]=c->r[30]+0x0000011Cu; // 801E4300
  cmpu(c,0,c->r[31],0x00000004u); // 801E4304
  if (crb(c,0)) { IRQCHK(c); goto L_801E42D4; } // 801E4308
  c->r[30]=0u+0x00000000u; // 801E430C
L_801E4310:;
  cmps(c,0,(int32_t)c->r[30],0); // 801E4310
  if (crb(c,2)) { goto L_801E4364; } // 801E4314
  c->r[31]=0u+0x80310000u; // 801E4318
  c->r[4]=0u+0x00000009u; // 801E431C
  c->r[31]=c->r[31]+0xFFFF8818u; // 801E4320
  c->r[5]=0u+0x00000003u; // 801E4324
  c->r[3]=c->r[31]+0x000005C8u; // 801E4328
  c->lr=0x801E4330u; f_801DCD40(c); // 801E432C
  W32(c->r[31]+0x000005E0u,c->r[29]); // 801E4330
  c->r[3]=R16(c->r[30]+0x00000000u); // 801E4334
  c->lr=0x801E433Cu; f_801F174C(c); // 801E4338
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801E433C
  if (!crb(c,2)) { goto L_801E435C; } // 801E4340
  c->r[0]=0u+0x00000000u; // 801E4344
  c->r[3]=c->r[31]+0x000005C8u; // 801E4348
  W32(c->r[31]+0x000005E0u,c->r[0]); // 801E434C
  c->lr=0x801E4354u; f_801DCDB0(c); // 801E4350
  c->r[3]=0u+0x00000003u; // 801E4354
  goto L_801E4368; // 801E4358
L_801E435C:;
  c->r[3]=0u+0x00000001u; // 801E435C
  goto L_801E4368; // 801E4360
L_801E4364:;
  c->r[3]=0u+0x00000007u; // 801E4364
L_801E4368:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E4368
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E436C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E4370
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E4374
  c->r[28]=R32(c->r[1]+0x00000010u); // 801E4378
  c->lr=c->r[0]; // 801E437C
  c->r[1]=c->r[1]+0x00000020u; // 801E4380
  return; // 801E4384
}

// BTM_ReadLinkQuality
void f_801E4388(Ctx* __restrict c) {
  trace_call(0x801E4388u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E4388
  c->r[0]=c->lr; // 801E438C
  c->r[5]=0u+0x80310000u; // 801E4390
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E4394
  c->r[5]=c->r[5]+0xFFFF8818u; // 801E4398
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E439C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E43A0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E43A4
  c->r[29]=c->r[4]|c->r[4]; // 801E43A8
  W32(c->r[1]+0x00000010u,c->r[28]); // 801E43AC
  c->r[28]=c->r[3]|c->r[3]; // 801E43B0
  c->r[0]=R8(c->r[5]+0x000027C0u); // 801E43B4
  cmpu(c,0,c->r[0],0x00000003u); // 801E43B8
  if (crb(c,0)) { goto L_801E43EC; } // 801E43BC
  c->r[3]=0u+0x000D0000u; // 801E43C0
  c->r[4]=0u+0x80280000u; // 801E43C4
  c->r[5]=R8(c->r[28]+0x00000000u); // 801E43C8
  c->r[3]=c->r[3]+0x00000002u; // 801E43CC
  c->r[6]=R8(c->r[28]+0x00000001u); // 801E43D0
  c->r[4]=c->r[4]+0xFFFFF078u; // 801E43D4
  c->r[7]=R8(c->r[28]+0x00000002u); // 801E43D8
  c->r[8]=R8(c->r[28]+0x00000003u); // 801E43DC
  c->r[9]=R8(c->r[28]+0x00000004u); // 801E43E0
  c->r[10]=R8(c->r[28]+0x00000005u); // 801E43E4
  c->lr=0x801E43ECu; f_801DC7F0(c); // 801E43E8
L_801E43EC:;
  c->r[3]=0u+0x80310000u; // 801E43EC
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E43F0
  c->r[0]=R32(c->r[3]+0x000005FCu); // 801E43F4
  cmps(c,0,(int32_t)c->r[0],0); // 801E43F8
  if (crb(c,2)) { goto L_801E4408; } // 801E43FC
  c->r[3]=0u+0x00000002u; // 801E4400
  goto L_801E44A4; // 801E4404
L_801E4408:;
  c->r[30]=c->r[3]+0x00000034u; // 801E4408
  c->r[31]=0u+0x00000000u; // 801E440C
L_801E4410:;
  c->r[0]=R8(c->r[30]+0x00000119u); // 801E4410
  cmps(c,0,(int32_t)c->r[0],0); // 801E4414
  if (crb(c,2)) { goto L_801E4438; } // 801E4418
  c->r[4]=c->r[28]|c->r[28]; // 801E441C
  c->r[3]=c->r[30]+0x00000008u; // 801E4420
  c->r[5]=0u+0x00000006u; // 801E4424
  c->lr=0x801E442Cu; f_8020BD24(c); // 801E4428
  cmps(c,0,(int32_t)c->r[3],0); // 801E442C
  if (!crb(c,2)) { goto L_801E4438; } // 801E4430
  goto L_801E444C; // 801E4434
L_801E4438:;
  c->r[31]=c->r[31]+0x00000001u; // 801E4438
  c->r[30]=c->r[30]+0x0000011Cu; // 801E443C
  cmpu(c,0,c->r[31],0x00000004u); // 801E4440
  if (crb(c,0)) { IRQCHK(c); goto L_801E4410; } // 801E4444
  c->r[30]=0u+0x00000000u; // 801E4448
L_801E444C:;
  cmps(c,0,(int32_t)c->r[30],0); // 801E444C
  if (crb(c,2)) { goto L_801E44A0; } // 801E4450
  c->r[31]=0u+0x80310000u; // 801E4454
  c->r[4]=0u+0x00000009u; // 801E4458
  c->r[31]=c->r[31]+0xFFFF8818u; // 801E445C
  c->r[5]=0u+0x00000003u; // 801E4460
  c->r[3]=c->r[31]+0x000005E4u; // 801E4464
  c->lr=0x801E446Cu; f_801DCD40(c); // 801E4468
  W32(c->r[31]+0x000005FCu,c->r[29]); // 801E446C
  c->r[3]=R16(c->r[30]+0x00000000u); // 801E4470
  c->lr=0x801E4478u; f_801F16D0(c); // 801E4474
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801E4478
  if (!crb(c,2)) { goto L_801E4498; } // 801E447C
  c->r[3]=c->r[31]+0x000005E4u; // 801E4480
  c->lr=0x801E4488u; f_801DCDB0(c); // 801E4484
  c->r[0]=0u+0x00000000u; // 801E4488
  c->r[3]=0u+0x00000003u; // 801E448C
  W32(c->r[31]+0x000005FCu,c->r[0]); // 801E4490
  goto L_801E44A4; // 801E4494
L_801E4498:;
  c->r[3]=0u+0x00000001u; // 801E4498
  goto L_801E44A4; // 801E449C
L_801E44A0:;
  c->r[3]=0u+0x00000007u; // 801E44A0
L_801E44A4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E44A4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E44A8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E44AC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E44B0
  c->r[28]=R32(c->r[1]+0x00000010u); // 801E44B4
  c->lr=c->r[0]; // 801E44B8
  c->r[1]=c->r[1]+0x00000020u; // 801E44BC
  return; // 801E44C0
}

// btm_read_rssi_complete
void f_801E44C4(Ctx* __restrict c) {
  trace_call(0x801E44C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E44C4
  c->r[0]=c->lr; // 801E44C8
  W32(c->r[1]+0x00000034u,c->r[0]); // 801E44CC
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801E44D0
  c->r[31]=0u+0x80310000u; // 801E44D4
  c->r[31]=c->r[31]+0xFFFF8818u; // 801E44D8
  W32(c->r[1]+0x00000028u,c->r[30]); // 801E44DC
  W32(c->r[1]+0x00000024u,c->r[29]); // 801E44E0
  c->r[29]=c->r[31]+0x00000034u; // 801E44E4
  W32(c->r[1]+0x00000020u,c->r[28]); // 801E44E8
  c->r[28]=c->r[3]|c->r[3]; // 801E44EC
  c->r[3]=c->r[31]+0x000005C8u; // 801E44F0
  c->r[30]=R32(c->r[31]+0x000005E0u); // 801E44F4
  c->lr=0x801E44FCu; f_801DCDB0(c); // 801E44F8
  c->r[0]=0u+0x00000000u; // 801E44FC
  cmps(c,0,(int32_t)c->r[30],0); // 801E4500
  W32(c->r[31]+0x000005E0u,c->r[0]); // 801E4504
  if (crb(c,2)) { goto L_801E45C0; } // 801E4508
  c->r[6]=R8(c->r[28]+0x00000000u); // 801E450C
  cmps(c,0,(int32_t)c->r[6],0); // 801E4510
  W8(c->r[1]+0x00000009u,c->r[6]); // 801E4514
  if (!crb(c,2)) { goto L_801E45A8; } // 801E4518
  W8(c->r[1]+0x00000008u,c->r[0]); // 801E451C
  c->r[0]=R8(c->r[31]+0x000027C0u); // 801E4520
  c->r[3]=R8(c->r[28]+0x00000002u); // 801E4524
  c->r[4]=R8(c->r[28]+0x00000001u); // 801E4528
  cmpu(c,0,c->r[0],0x00000004u); // 801E452C
  c->r[5]=R8(c->r[28]+0x00000003u); // 801E4530
  c->r[0]=rotl(c->r[3],8)&0xFFFFFF00u; // 801E4534
  c->r[0]=c->r[4]+c->r[0]; // 801E4538
  W8(c->r[1]+0x0000000Au,c->r[5]); // 801E453C
  c->r[31]=rotl(c->r[0],0)&0x0000FFFFu; // 801E4540
  if (crb(c,0)) { goto L_801E4560; } // 801E4544
  c->r[3]=0u+0x000D0000u; // 801E4548
  c->r[4]=0u+0x80280000u; // 801E454C
  c->r[3]=c->r[3]+0x00000003u; // 801E4550
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 801E4554
  c->r[4]=c->r[4]+0xFFFFF0B4u; // 801E4558
  c->lr=0x801E4560u; f_801DC770(c); // 801E455C
L_801E4560:;
  c->r[0]=0u+0x00000004u; // 801E4560
  c->r[3]=0u+0x00000000u; // 801E4564
  c->ctr=c->r[0]; // 801E4568
L_801E456C:;
  c->r[0]=R8(c->r[29]+0x00000119u); // 801E456C
  cmps(c,0,(int32_t)c->r[0],0); // 801E4570
  if (crb(c,2)) { goto L_801E4598; } // 801E4574
  c->r[0]=R16(c->r[29]+0x00000000u); // 801E4578
  cmpu(c,0,c->r[31],c->r[0]); // 801E457C
  if (!crb(c,2)) { goto L_801E4598; } // 801E4580
  c->r[3]=c->r[1]+0x0000000Bu; // 801E4584
  c->r[4]=c->r[29]+0x00000008u; // 801E4588
  c->r[5]=0u+0x00000006u; // 801E458C
  c->lr=0x801E4594u; f_80004364(c); // 801E4590
  goto L_801E45B0; // 801E4594
L_801E4598:;
  c->r[3]=c->r[3]+0x00000001u; // 801E4598
  c->r[29]=c->r[29]+0x0000011Cu; // 801E459C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E456C; } // 801E45A0
  goto L_801E45B0; // 801E45A4
L_801E45A8:;
  c->r[0]=0u+0x0000000Au; // 801E45A8
  W8(c->r[1]+0x00000008u,c->r[0]); // 801E45AC
L_801E45B0:;
  c->r[12]=c->r[30]|c->r[30]; // 801E45B0
  c->r[3]=c->r[1]+0x00000008u; // 801E45B4
  c->ctr=c->r[12]; // 801E45B8
  if (true) { c->lr=0x801E45C0u; dispatch(c,c->ctr); } // 801E45BC
L_801E45C0:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801E45C0
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801E45C4
  c->r[30]=R32(c->r[1]+0x00000028u); // 801E45C8
  c->r[29]=R32(c->r[1]+0x00000024u); // 801E45CC
  c->r[28]=R32(c->r[1]+0x00000020u); // 801E45D0
  c->lr=c->r[0]; // 801E45D4
  c->r[1]=c->r[1]+0x00000030u; // 801E45D8
  return; // 801E45DC
}

// btm_read_link_quality_complete
void f_801E45E0(Ctx* __restrict c) {
  trace_call(0x801E45E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E45E0
  c->r[0]=c->lr; // 801E45E4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801E45E8
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801E45EC
  c->r[31]=0u+0x80310000u; // 801E45F0
  c->r[31]=c->r[31]+0xFFFF8818u; // 801E45F4
  W32(c->r[1]+0x00000028u,c->r[30]); // 801E45F8
  W32(c->r[1]+0x00000024u,c->r[29]); // 801E45FC
  c->r[29]=c->r[31]+0x00000034u; // 801E4600
  W32(c->r[1]+0x00000020u,c->r[28]); // 801E4604
  c->r[28]=c->r[3]|c->r[3]; // 801E4608
  c->r[3]=c->r[31]+0x000005C8u; // 801E460C
  c->r[30]=R32(c->r[31]+0x000005FCu); // 801E4610
  c->lr=0x801E4618u; f_801DCDB0(c); // 801E4614
  c->r[0]=0u+0x00000000u; // 801E4618
  cmps(c,0,(int32_t)c->r[30],0); // 801E461C
  W32(c->r[31]+0x000005FCu,c->r[0]); // 801E4620
  if (crb(c,2)) { goto L_801E46D8; } // 801E4624
  c->r[6]=R8(c->r[28]+0x00000000u); // 801E4628
  cmps(c,0,(int32_t)c->r[6],0); // 801E462C
  W8(c->r[1]+0x00000009u,c->r[6]); // 801E4630
  if (!crb(c,2)) { goto L_801E46C0; } // 801E4634
  W8(c->r[1]+0x00000008u,c->r[0]); // 801E4638
  c->r[0]=R8(c->r[31]+0x000027C0u); // 801E463C
  c->r[3]=R8(c->r[28]+0x00000002u); // 801E4640
  c->r[4]=R8(c->r[28]+0x00000001u); // 801E4644
  cmpu(c,0,c->r[0],0x00000004u); // 801E4648
  c->r[5]=R8(c->r[28]+0x00000003u); // 801E464C
  c->r[0]=rotl(c->r[3],8)&0xFFFFFF00u; // 801E4650
  c->r[0]=c->r[4]+c->r[0]; // 801E4654
  W8(c->r[1]+0x0000000Au,c->r[5]); // 801E4658
  c->r[31]=rotl(c->r[0],0)&0x0000FFFFu; // 801E465C
  if (crb(c,0)) { goto L_801E4678; } // 801E4660
  c->r[3]=0u+0x000D0000u; // 801E4664
  c->r[4]=0u+0x80280000u; // 801E4668
  c->r[3]=c->r[3]+0x00000003u; // 801E466C
  c->r[4]=c->r[4]+0xFFFFF0E4u; // 801E4670
  c->lr=0x801E4678u; f_801DC770(c); // 801E4674
L_801E4678:;
  c->r[0]=0u+0x00000004u; // 801E4678
  c->r[3]=0u+0x00000000u; // 801E467C
  c->ctr=c->r[0]; // 801E4680
L_801E4684:;
  c->r[0]=R8(c->r[29]+0x00000119u); // 801E4684
  cmps(c,0,(int32_t)c->r[0],0); // 801E4688
  if (crb(c,2)) { goto L_801E46B0; } // 801E468C
  c->r[0]=R16(c->r[29]+0x00000000u); // 801E4690
  cmpu(c,0,c->r[31],c->r[0]); // 801E4694
  if (!crb(c,2)) { goto L_801E46B0; } // 801E4698
  c->r[3]=c->r[1]+0x0000000Bu; // 801E469C
  c->r[4]=c->r[29]+0x00000008u; // 801E46A0
  c->r[5]=0u+0x00000006u; // 801E46A4
  c->lr=0x801E46ACu; f_80004364(c); // 801E46A8
  goto L_801E46C8; // 801E46AC
L_801E46B0:;
  c->r[3]=c->r[3]+0x00000001u; // 801E46B0
  c->r[29]=c->r[29]+0x0000011Cu; // 801E46B4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E4684; } // 801E46B8
  goto L_801E46C8; // 801E46BC
L_801E46C0:;
  c->r[0]=0u+0x0000000Au; // 801E46C0
  W8(c->r[1]+0x00000008u,c->r[0]); // 801E46C4
L_801E46C8:;
  c->r[12]=c->r[30]|c->r[30]; // 801E46C8
  c->r[3]=c->r[1]+0x00000008u; // 801E46CC
  c->ctr=c->r[12]; // 801E46D0
  if (true) { c->lr=0x801E46D8u; dispatch(c,c->ctr); } // 801E46D4
L_801E46D8:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801E46D8
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801E46DC
  c->r[30]=R32(c->r[1]+0x00000028u); // 801E46E0
  c->r[29]=R32(c->r[1]+0x00000024u); // 801E46E4
  c->r[28]=R32(c->r[1]+0x00000020u); // 801E46E8
  c->lr=c->r[0]; // 801E46EC
  c->r[1]=c->r[1]+0x00000030u; // 801E46F0
  return; // 801E46F4
}

// btm_remove_acl
void f_801E46F8(Ctx* __restrict c) {
  trace_call(0x801E46F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E46F8
  c->r[0]=c->lr; // 801E46FC
  c->r[4]=0u+0x80310000u; // 801E4700
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E4704
  c->r[4]=c->r[4]+0xFFFF8818u; // 801E4708
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E470C
  c->r[31]=0u+0x00000000u; // 801E4710
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E4714
  c->r[30]=c->r[4]+0x00000034u; // 801E4718
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E471C
  c->r[29]=c->r[3]|c->r[3]; // 801E4720
L_801E4724:;
  c->r[0]=R8(c->r[30]+0x00000119u); // 801E4724
  cmps(c,0,(int32_t)c->r[0],0); // 801E4728
  if (crb(c,2)) { goto L_801E474C; } // 801E472C
  c->r[4]=c->r[29]|c->r[29]; // 801E4730
  c->r[3]=c->r[30]+0x00000008u; // 801E4734
  c->r[5]=0u+0x00000006u; // 801E4738
  c->lr=0x801E4740u; f_8020BD24(c); // 801E473C
  cmps(c,0,(int32_t)c->r[3],0); // 801E4740
  if (!crb(c,2)) { goto L_801E474C; } // 801E4744
  goto L_801E4760; // 801E4748
L_801E474C:;
  c->r[31]=c->r[31]+0x00000001u; // 801E474C
  c->r[30]=c->r[30]+0x0000011Cu; // 801E4750
  cmpu(c,0,c->r[31],0x00000004u); // 801E4754
  if (crb(c,0)) { IRQCHK(c); goto L_801E4724; } // 801E4758
  c->r[30]=0u+0x00000000u; // 801E475C
L_801E4760:;
  cmps(c,0,(int32_t)c->r[30],0); // 801E4760
  if (crb(c,2)) { goto L_801E4770; } // 801E4764
  c->r[3]=R16(c->r[30]+0x00000000u); // 801E4768
  goto L_801E4778; // 801E476C
L_801E4770:;
  c->r[3]=0u+0x00010000u; // 801E4770
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801E4774
L_801E4778:;
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 801E4778
  c->r[4]=0u+0x00000013u; // 801E477C
  c->lr=0x801E4784u; f_801EF8F4(c); // 801E4780
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801E4784
  if (!crb(c,2)) { goto L_801E4794; } // 801E4788
  c->r[3]=0u+0x00000003u; // 801E478C
  goto L_801E4798; // 801E4790
L_801E4794:;
  c->r[3]=0u+0x00000000u; // 801E4794
L_801E4798:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E4798
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E479C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E47A0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E47A4
  c->lr=c->r[0]; // 801E47A8
  c->r[1]=c->r[1]+0x00000020u; // 801E47AC
  return; // 801E47B0
}

// btm_chg_all_acl_pkt_types
void f_801E47B4(Ctx* __restrict c) {
  trace_call(0x801E47B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E47B4
  c->r[0]=c->lr; // 801E47B8
  W32(c->r[1]+0x00000044u,c->r[0]); // 801E47BC
  c->r[11]=c->r[1]+0x00000040u; // 801E47C0
  c->lr=0x801E47C8u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E47C4
  c->r[4]=0u+0x80310000u; // 801E47C8
  cmps(c,0,(int32_t)c->r[3],0); // 801E47CC
  c->r[31]=c->r[4]+0xFFFF8818u; // 801E47D0
  c->r[30]=0u+0x80280000u; // 801E47D4
  c->r[30]=c->r[30]+0xFFFFED98u; // 801E47D8
  c->r[28]=c->r[31]+0x00000034u; // 801E47DC
  if (crb(c,2)) { goto L_801E48A8; } // 801E47E0
  c->r[29]=0u+0x00000000u; // 801E47E4
  c->r[26]=0u+0x000D0000u; // 801E47E8
  c->r[24]=0u+0xFFFFCCF9u; // 801E47EC
L_801E47F0:;
  c->r[0]=R8(c->r[28]+0x00000119u); // 801E47F0
  cmps(c,0,(int32_t)c->r[0],0); // 801E47F4
  if (crb(c,2)) { goto L_801E4894; } // 801E47F8
  c->r[0]=R8(c->r[31]+0x000027C0u); // 801E47FC
  cmpu(c,0,c->r[0],0x00000005u); // 801E4800
  if (crb(c,0)) { goto L_801E4818; } // 801E4804
  c->r[5]=R16(c->r[28]+0x00000000u); // 801E4808
  c->r[3]=c->r[26]+0x00000004u; // 801E480C
  c->r[4]=c->r[30]+0x0000038Cu; // 801E4810
  c->lr=0x801E4818u; f_801DC750(c); // 801E4814
L_801E4818:;
  c->r[0]=R16(c->r[28]+0x00000002u); // 801E4818
  c->r[5]=0u+0x00000018u; // 801E481C
  W16(c->r[28]+0x00000004u,c->r[0]); // 801E4820
  c->r[3]=R8(c->r[31]+0x00000636u); // 801E4824
  cmpu(c,0,c->r[3],0x00000003u); // 801E4828
  if (crb(c,0)) { goto L_801E4838; } // 801E482C
  c->r[0]=c->r[5]|0x00003300u; // 801E4830
  c->r[5]=rotl(c->r[0],0)&0x0000FFFFu; // 801E4834
L_801E4838:;
  c->r[4]=R16(c->r[31]+0x00000654u); // 801E4838
  cmpu(c,1,c->r[3],0x00000003u); // 801E483C
  c->r[0]=c->r[5]&c->r[4]; // 801E4840
  c->r[3]=c->r[0]&0x0000CC18u; cr0(c,c->r[3]); // 801E4844
  c->r[25]=c->r[3]&c->r[24]; // 801E4848
  if (crb(c,4)) { goto L_801E4860; } // 801E484C
  c->r[0]=c->r[5]|c->r[4]; // 801E4850
  c->r[0]=c->r[0]&0x00003306u; cr0(c,c->r[0]); // 801E4854
  c->r[0]=c->r[3]|c->r[0]; // 801E4858
  c->r[25]=rotl(c->r[0],0)&0x0000FFFFu; // 801E485C
L_801E4860:;
  c->r[0]=R8(c->r[31]+0x000027C0u); // 801E4860
  cmpu(c,0,c->r[0],0x00000004u); // 801E4864
  if (crb(c,0)) { goto L_801E487C; } // 801E4868
  c->r[3]=c->r[26]+0x00000003u; // 801E486C
  c->r[4]=c->r[30]+0x00000040u; // 801E4870
  c->r[5]=rotl(c->r[25],0)&0x0000FFFFu; // 801E4874
  c->lr=0x801E487Cu; f_801DC750(c); // 801E4878
L_801E487C:;
  c->r[3]=R16(c->r[28]+0x00000000u); // 801E487C
  c->r[4]=rotl(c->r[25],0)&0x0000FFFFu; // 801E4880
  c->lr=0x801E4888u; f_801EFF88(c); // 801E4884
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801E4888
  if (crb(c,2)) { goto L_801E4894; } // 801E488C
  W16(c->r[28]+0x00000002u,c->r[25]); // 801E4890
L_801E4894:;
  c->r[29]=c->r[29]+0x00000001u; // 801E4894
  c->r[28]=c->r[28]+0x0000011Cu; // 801E4898
  cmpu(c,0,c->r[29],0x00000004u); // 801E489C
  if (crb(c,0)) { IRQCHK(c); goto L_801E47F0; } // 801E48A0
  goto L_801E49BC; // 801E48A4
L_801E48A8:;
  c->r[29]=0u+0x00000000u; // 801E48A8
  c->r[24]=0u+0x000D0000u; // 801E48AC
  c->r[25]=0u+0x00000000u; // 801E48B0
  c->r[27]=0u+0xFFFFCCF9u; // 801E48B4
L_801E48B8:;
  c->r[0]=R8(c->r[28]+0x00000119u); // 801E48B8
  cmps(c,0,(int32_t)c->r[0],0); // 801E48BC
  if (crb(c,2)) { goto L_801E49AC; } // 801E48C0
  c->r[0]=R16(c->r[28]+0x00000004u); // 801E48C4
  cmps(c,0,(int32_t)c->r[0],0); // 801E48C8
  if (crb(c,2)) { goto L_801E49AC; } // 801E48CC
  c->r[3]=c->r[28]+0x00000008u; // 801E48D0
  c->r[4]=c->r[1]+0x00000008u; // 801E48D4
  c->lr=0x801E48DCu; f_801E88DC(c); // 801E48D8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801E48DC
  if (!crb(c,2)) { goto L_801E49AC; } // 801E48E0
  c->r[0]=R8(c->r[1]+0x00000008u); // 801E48E4
  cmpu(c,0,c->r[0],0x00000002u); // 801E48E8
  if (!crb(c,2)) { goto L_801E4924; } // 801E48EC
  c->r[0]=R8(c->r[31]+0x000027C0u); // 801E48F0
  cmpu(c,0,c->r[0],0x00000005u); // 801E48F4
  if (crb(c,0)) { goto L_801E490C; } // 801E48F8
  c->r[5]=R16(c->r[28]+0x00000000u); // 801E48FC
  c->r[3]=c->r[24]+0x00000004u; // 801E4900
  c->r[4]=c->r[30]+0x000003BCu; // 801E4904
  c->lr=0x801E490Cu; f_801DC750(c); // 801E4908
L_801E490C:;
  W8(c->r[1]+0x00000014u,c->r[25]); // 801E490C
  c->r[4]=c->r[28]+0x00000008u; // 801E4910
  c->r[5]=c->r[1]+0x0000000Cu; // 801E4914
  c->r[3]=0u+0x00000080u; // 801E4918
  c->lr=0x801E4920u; f_801E870C(c); // 801E491C
  goto L_801E49AC; // 801E4920
L_801E4924:;
  c->r[0]=R8(c->r[31]+0x000027C0u); // 801E4924
  cmpu(c,0,c->r[0],0x00000005u); // 801E4928
  if (crb(c,0)) { goto L_801E4944; } // 801E492C
  c->r[5]=R16(c->r[28]+0x00000000u); // 801E4930
  c->r[3]=c->r[24]+0x00000004u; // 801E4934
  c->r[6]=R16(c->r[28]+0x00000002u); // 801E4938
  c->r[4]=c->r[30]+0x000003ECu; // 801E493C
  c->lr=0x801E4944u; f_801DC770(c); // 801E4940
L_801E4944:;
  c->r[4]=R16(c->r[28]+0x00000004u); // 801E4944
  c->r[5]=R16(c->r[31]+0x00000654u); // 801E4948
  c->r[0]=R8(c->r[31]+0x00000636u); // 801E494C
  c->r[3]=c->r[4]&c->r[5]; // 801E4950
  c->r[3]=c->r[3]&0x0000CC18u; cr0(c,c->r[3]); // 801E4954
  cmpu(c,0,c->r[0],0x00000003u); // 801E4958
  c->r[26]=c->r[3]&c->r[27]; // 801E495C
  if (crb(c,0)) { goto L_801E4974; } // 801E4960
  c->r[0]=c->r[4]|c->r[5]; // 801E4964
  c->r[0]=c->r[0]&0x00003306u; cr0(c,c->r[0]); // 801E4968
  c->r[0]=c->r[3]|c->r[0]; // 801E496C
  c->r[26]=rotl(c->r[0],0)&0x0000FFFFu; // 801E4970
L_801E4974:;
  c->r[0]=R8(c->r[31]+0x000027C0u); // 801E4974
  cmpu(c,0,c->r[0],0x00000004u); // 801E4978
  if (crb(c,0)) { goto L_801E4990; } // 801E497C
  c->r[3]=c->r[24]+0x00000003u; // 801E4980
  c->r[4]=c->r[30]+0x00000040u; // 801E4984
  c->r[5]=rotl(c->r[26],0)&0x0000FFFFu; // 801E4988
  c->lr=0x801E4990u; f_801DC750(c); // 801E498C
L_801E4990:;
  c->r[3]=R16(c->r[28]+0x00000000u); // 801E4990
  c->r[4]=rotl(c->r[26],0)&0x0000FFFFu; // 801E4994
  c->lr=0x801E499Cu; f_801EFF88(c); // 801E4998
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801E499C
  if (crb(c,2)) { goto L_801E49A8; } // 801E49A0
  W16(c->r[28]+0x00000002u,c->r[26]); // 801E49A4
L_801E49A8:;
  W16(c->r[28]+0x00000004u,c->r[25]); // 801E49A8
L_801E49AC:;
  c->r[29]=c->r[29]+0x00000001u; // 801E49AC
  c->r[28]=c->r[28]+0x0000011Cu; // 801E49B0
  cmpu(c,0,c->r[29],0x00000004u); // 801E49B4
  if (crb(c,0)) { IRQCHK(c); goto L_801E48B8; } // 801E49B8
L_801E49BC:;
  c->r[11]=c->r[1]+0x00000040u; // 801E49BC
  c->lr=0x801E49C4u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E49C0
  c->r[0]=R32(c->r[1]+0x00000044u); // 801E49C4
  c->lr=c->r[0]; // 801E49C8
  c->r[1]=c->r[1]+0x00000040u; // 801E49CC
  return; // 801E49D0
}

// BTM_SecAddDevice
void f_801E49D4(Ctx* __restrict c) {
  trace_call(0x801E49D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E49D4
  c->r[0]=c->lr; // 801E49D8
  W32(c->r[1]+0x00000034u,c->r[0]); // 801E49DC
  c->r[11]=c->r[1]+0x00000030u; // 801E49E0
  c->lr=0x801E49E8u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E49E4
  c->r[9]=0u+0x80310000u; // 801E49E8
  c->r[24]=c->r[3]|c->r[3]; // 801E49EC
  c->r[9]=c->r[9]+0xFFFF8818u; // 801E49F0
  c->r[25]=c->r[4]|c->r[4]; // 801E49F4
  c->r[26]=c->r[5]|c->r[5]; // 801E49F8
  c->r[27]=c->r[6]|c->r[6]; // 801E49FC
  c->r[28]=c->r[7]|c->r[7]; // 801E4A00
  c->r[29]=c->r[8]|c->r[8]; // 801E4A04
  c->r[30]=c->r[9]+0x00001F30u; // 801E4A08
  c->r[31]=0u+0x00000000u; // 801E4A0C
L_801E4A10:;
  c->r[0]=R8(c->r[30]+0x00000076u); // 801E4A10
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801E4A14
  if (crb(c,2)) { goto L_801E4A38; } // 801E4A18
  c->r[4]=c->r[24]|c->r[24]; // 801E4A1C
  c->r[3]=c->r[30]+0x0000001Cu; // 801E4A20
  c->r[5]=0u+0x00000006u; // 801E4A24
  c->lr=0x801E4A2Cu; f_8020BD24(c); // 801E4A28
  cmps(c,0,(int32_t)c->r[3],0); // 801E4A2C
  if (!crb(c,2)) { goto L_801E4A38; } // 801E4A30
  goto L_801E4A4C; // 801E4A34
L_801E4A38:;
  c->r[31]=c->r[31]+0x00000001u; // 801E4A38
  c->r[30]=c->r[30]+0x00000088u; // 801E4A3C
  cmps(c,0,(int32_t)c->r[31],16); // 801E4A40
  if (crb(c,0)) { IRQCHK(c); goto L_801E4A10; } // 801E4A44
  c->r[30]=0u+0x00000000u; // 801E4A48
L_801E4A4C:;
  cmps(c,0,(int32_t)c->r[30],0); // 801E4A4C
  if (!crb(c,2)) { goto L_801E4A70; } // 801E4A50
  c->r[3]=c->r[24]|c->r[24]; // 801E4A54
  c->lr=0x801E4A5Cu; f_801E4CA8(c); // 801E4A58
  cmps(c,0,(int32_t)c->r[3],0); // 801E4A5C
  c->r[30]=c->r[3]|c->r[3]; // 801E4A60
  if (!crb(c,2)) { goto L_801E4A88; } // 801E4A64
  c->r[3]=0u+0x00000000u; // 801E4A68
  goto L_801E4B44; // 801E4A6C
L_801E4A70:;
  c->r[4]=0u+0x80310000u; // 801E4A70
  c->r[4]=c->r[4]+0xFFFF8818u; // 801E4A74
  c->r[3]=R32(c->r[4]+0x00001974u); // 801E4A78
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 801E4A7C
  c->r[0]=c->r[3]+0x00000001u; // 801E4A80
  W32(c->r[4]+0x00001974u,c->r[0]); // 801E4A84
L_801E4A88:;
  cmps(c,0,(int32_t)c->r[25],0); // 801E4A88
  if (crb(c,2)) { goto L_801E4AA0; } // 801E4A8C
  c->r[4]=c->r[25]|c->r[25]; // 801E4A90
  c->r[3]=c->r[30]+0x00000022u; // 801E4A94
  c->r[5]=0u+0x00000003u; // 801E4A98
  c->lr=0x801E4AA0u; f_80004364(c); // 801E4A9C
L_801E4AA0:;
  c->r[3]=c->r[30]+0x00000035u; // 801E4AA0
  c->r[4]=0u+0x00000000u; // 801E4AA4
  c->r[5]=0u+0x00000041u; // 801E4AA8
  c->lr=0x801E4AB0u; f_800046B4(c); // 801E4AAC
  cmps(c,0,(int32_t)c->r[26],0); // 801E4AB0
  if (crb(c,2)) { goto L_801E4AE0; } // 801E4AB4
  c->r[0]=R8(c->r[26]+0x00000000u); // 801E4AB8
  cmps(c,0,(int32_t)c->r[0],0); // 801E4ABC
  if (crb(c,2)) { goto L_801E4AE0; } // 801E4AC0
  c->r[0]=R8(c->r[30]+0x00000076u); // 801E4AC4
  c->r[4]=c->r[26]|c->r[26]; // 801E4AC8
  c->r[3]=c->r[30]+0x00000035u; // 801E4ACC
  c->r[5]=0u+0x00000040u; // 801E4AD0
  c->r[0]=c->r[0]|0x00000008u; // 801E4AD4
  W8(c->r[30]+0x00000076u,c->r[0]); // 801E4AD8
  c->lr=0x801E4AE0u; f_8020E7F4(c); // 801E4ADC
L_801E4AE0:;
  cmps(c,0,(int32_t)c->r[27],0); // 801E4AE0
  if (crb(c,2)) { goto L_801E4AFC; } // 801E4AE4
  c->r[4]=c->r[27]|c->r[27]; // 801E4AE8
  c->r[3]=c->r[30]+0x00000077u; // 801E4AEC
  c->r[5]=0u+0x00000008u; // 801E4AF0
  c->lr=0x801E4AF8u; f_80004364(c); // 801E4AF4
  goto L_801E4B0C; // 801E4AF8
L_801E4AFC:;
  c->r[3]=c->r[30]+0x00000077u; // 801E4AFC
  c->r[4]=0u+0x00000000u; // 801E4B00
  c->r[5]=0u+0x00000008u; // 801E4B04
  c->lr=0x801E4B0Cu; f_800046B4(c); // 801E4B08
L_801E4B0C:;
  c->r[0]=R32(c->r[28]+0x00000000u); // 801E4B0C
  cmps(c,0,(int32_t)c->r[29],0); // 801E4B10
  W32(c->r[30]+0x00000010u,c->r[0]); // 801E4B14
  c->r[0]=R32(c->r[28]+0x00000004u); // 801E4B18
  W32(c->r[30]+0x00000014u,c->r[0]); // 801E4B1C
  if (crb(c,2)) { goto L_801E4B40; } // 801E4B20
  c->r[0]=R8(c->r[30]+0x00000076u); // 801E4B24
  c->r[4]=c->r[29]|c->r[29]; // 801E4B28
  c->r[3]=c->r[30]+0x00000025u; // 801E4B2C
  c->r[5]=0u+0x00000010u; // 801E4B30
  c->r[0]=c->r[0]|0x00000010u; // 801E4B34
  W8(c->r[30]+0x00000076u,c->r[0]); // 801E4B38
  c->lr=0x801E4B40u; f_80004364(c); // 801E4B3C
L_801E4B40:;
  c->r[3]=0u+0x00000001u; // 801E4B40
L_801E4B44:;
  c->r[11]=c->r[1]+0x00000030u; // 801E4B44
  c->lr=0x801E4B4Cu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E4B48
  c->r[0]=R32(c->r[1]+0x00000034u); // 801E4B4C
  c->lr=c->r[0]; // 801E4B50
  c->r[1]=c->r[1]+0x00000030u; // 801E4B54
  return; // 801E4B58
}

// BTM_SecDeleteDevice
void f_801E4B5C(Ctx* __restrict c) {
  trace_call(0x801E4B5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E4B5C
  c->r[0]=c->lr; // 801E4B60
  c->r[4]=0u+0x80310000u; // 801E4B64
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E4B68
  c->r[4]=c->r[4]+0xFFFF8818u; // 801E4B6C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E4B70
  c->r[31]=0u+0x00000000u; // 801E4B74
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E4B78
  c->r[30]=c->r[4]+0x00001F30u; // 801E4B7C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E4B80
  c->r[29]=c->r[3]|c->r[3]; // 801E4B84
L_801E4B88:;
  c->r[0]=R8(c->r[30]+0x00000076u); // 801E4B88
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801E4B8C
  if (crb(c,2)) { goto L_801E4BB0; } // 801E4B90
  c->r[4]=c->r[29]|c->r[29]; // 801E4B94
  c->r[3]=c->r[30]+0x0000001Cu; // 801E4B98
  c->r[5]=0u+0x00000006u; // 801E4B9C
  c->lr=0x801E4BA4u; f_8020BD24(c); // 801E4BA0
  cmps(c,0,(int32_t)c->r[3],0); // 801E4BA4
  if (!crb(c,2)) { goto L_801E4BB0; } // 801E4BA8
  goto L_801E4BC4; // 801E4BAC
L_801E4BB0:;
  c->r[31]=c->r[31]+0x00000001u; // 801E4BB0
  c->r[30]=c->r[30]+0x00000088u; // 801E4BB4
  cmps(c,0,(int32_t)c->r[31],16); // 801E4BB8
  if (crb(c,0)) { IRQCHK(c); goto L_801E4B88; } // 801E4BBC
  c->r[30]=0u+0x00000000u; // 801E4BC0
L_801E4BC4:;
  cmps(c,0,(int32_t)c->r[30],0); // 801E4BC4
  if (!crb(c,2)) { goto L_801E4BD4; } // 801E4BC8
  c->r[3]=0u+0x00000000u; // 801E4BCC
  goto L_801E4BEC; // 801E4BD0
L_801E4BD4:;
  c->r[0]=0u+0x00000000u; // 801E4BD4
  c->r[3]=c->r[29]|c->r[29]; // 801E4BD8
  W8(c->r[30]+0x00000076u,c->r[0]); // 801E4BDC
  c->r[4]=0u+0x00000000u; // 801E4BE0
  c->lr=0x801E4BE8u; f_801E666C(c); // 801E4BE4
  c->r[3]=0u+0x00000001u; // 801E4BE8
L_801E4BEC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E4BEC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E4BF0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E4BF4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E4BF8
  c->lr=c->r[0]; // 801E4BFC
  c->r[1]=c->r[1]+0x00000020u; // 801E4C00
  return; // 801E4C04
}

// BTM_SecReadDevName
void f_801E4C08(Ctx* __restrict c) {
  trace_call(0x801E4C08u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E4C08
  c->r[0]=c->lr; // 801E4C0C
  c->r[4]=0u+0x80310000u; // 801E4C10
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E4C14
  c->r[4]=c->r[4]+0xFFFF8818u; // 801E4C18
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E4C1C
  c->r[31]=0u+0x00000000u; // 801E4C20
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E4C24
  c->r[30]=c->r[4]+0x00001F30u; // 801E4C28
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E4C2C
  c->r[29]=0u+0x00000000u; // 801E4C30
  W32(c->r[1]+0x00000010u,c->r[28]); // 801E4C34
  c->r[28]=c->r[3]|c->r[3]; // 801E4C38
L_801E4C3C:;
  c->r[0]=R8(c->r[30]+0x00000076u); // 801E4C3C
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801E4C40
  if (crb(c,2)) { goto L_801E4C64; } // 801E4C44
  c->r[4]=c->r[28]|c->r[28]; // 801E4C48
  c->r[3]=c->r[30]+0x0000001Cu; // 801E4C4C
  c->r[5]=0u+0x00000006u; // 801E4C50
  c->lr=0x801E4C58u; f_8020BD24(c); // 801E4C54
  cmps(c,0,(int32_t)c->r[3],0); // 801E4C58
  if (!crb(c,2)) { goto L_801E4C64; } // 801E4C5C
  goto L_801E4C78; // 801E4C60
L_801E4C64:;
  c->r[31]=c->r[31]+0x00000001u; // 801E4C64
  c->r[30]=c->r[30]+0x00000088u; // 801E4C68
  cmps(c,0,(int32_t)c->r[31],16); // 801E4C6C
  if (crb(c,0)) { IRQCHK(c); goto L_801E4C3C; } // 801E4C70
  c->r[30]=0u+0x00000000u; // 801E4C74
L_801E4C78:;
  cmps(c,0,(int32_t)c->r[30],0); // 801E4C78
  if (crb(c,2)) { goto L_801E4C84; } // 801E4C7C
  c->r[29]=c->r[30]+0x00000035u; // 801E4C80
L_801E4C84:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E4C84
  c->r[3]=c->r[29]|c->r[29]; // 801E4C88
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E4C8C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E4C90
  c->r[28]=R32(c->r[1]+0x00000010u); // 801E4C94
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E4C98
  c->lr=c->r[0]; // 801E4C9C
  c->r[1]=c->r[1]+0x00000020u; // 801E4CA0
  return; // 801E4CA4
}

// btm_sec_alloc_dev
void f_801E4CA8(Ctx* __restrict c) {
  trace_call(0x801E4CA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E4CA8
  c->r[0]=c->lr; // 801E4CAC
  c->r[4]=0u+0x80310000u; // 801E4CB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E4CB4
  c->r[0]=0u+0x00000010u; // 801E4CB8
  c->r[4]=c->r[4]+0xFFFF8818u; // 801E4CBC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E4CC0
  c->r[31]=0u+0x00000000u; // 801E4CC4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E4CC8
  c->r[30]=c->r[3]|c->r[3]; // 801E4CCC
  c->r[3]=0u+0x00000000u; // 801E4CD0
  c->ctr=c->r[0]; // 801E4CD4
L_801E4CD8:;
  c->r[0]=R8(c->r[4]+0x00001FA6u); // 801E4CD8
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801E4CDC
  if (!crb(c,2)) { goto L_801E4CFC; } // 801E4CE0
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)136); // 801E4CE4
  c->r[3]=0u+0x80310000u; // 801E4CE8
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E4CEC
  c->r[3]=c->r[3]+c->r[0]; // 801E4CF0
  c->r[31]=c->r[3]+0x00001F30u; // 801E4CF4
  goto L_801E4D08; // 801E4CF8
L_801E4CFC:;
  c->r[4]=c->r[4]+0x00000088u; // 801E4CFC
  c->r[3]=c->r[3]+0x00000001u; // 801E4D00
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E4CD8; } // 801E4D04
L_801E4D08:;
  cmps(c,0,(int32_t)c->r[31],0); // 801E4D08
  if (!crb(c,2)) { goto L_801E4D18; } // 801E4D0C
  c->lr=0x801E4D14u; f_801E4F08(c); // 801E4D10
  c->r[31]=c->r[3]|c->r[3]; // 801E4D14
L_801E4D18:;
  c->r[3]=c->r[31]|c->r[31]; // 801E4D18
  c->r[4]=0u+0x00000000u; // 801E4D1C
  c->r[5]=0u+0x00000088u; // 801E4D20
  c->lr=0x801E4D28u; f_800046B4(c); // 801E4D24
  c->r[3]=0u+0x00000080u; // 801E4D28
  c->r[0]=0u+0x00000000u; // 801E4D2C
  W8(c->r[31]+0x00000076u,c->r[3]); // 801E4D30
  c->r[3]=c->r[30]|c->r[30]; // 801E4D34
  W8(c->r[31]+0x00000085u,c->r[0]); // 801E4D38
  c->lr=0x801E4D40u; f_801E758C(c); // 801E4D3C
  cmps(c,0,(int32_t)c->r[3],0); // 801E4D40
  c->r[4]=c->r[3]|c->r[3]; // 801E4D44
  if (crb(c,2)) { goto L_801E4D60; } // 801E4D48
  c->r[3]=c->r[31]+0x00000022u; // 801E4D4C
  c->r[4]=c->r[4]+0x00000008u; // 801E4D50
  c->r[5]=0u+0x00000003u; // 801E4D54
  c->lr=0x801E4D5Cu; f_80004364(c); // 801E4D58
  goto L_801E4D78; // 801E4D5C
L_801E4D60:;
  c->r[4]=0u+0x80310000u; // 801E4D60
  c->r[3]=c->r[31]+0x00000022u; // 801E4D64
  c->r[4]=c->r[4]+0xFFFF8818u; // 801E4D68
  c->r[5]=0u+0x00000003u; // 801E4D6C
  c->r[4]=c->r[4]+0x000027BAu; // 801E4D70
  c->lr=0x801E4D78u; f_80004364(c); // 801E4D74
L_801E4D78:;
  c->r[4]=c->r[30]|c->r[30]; // 801E4D78
  c->r[3]=c->r[31]+0x0000001Cu; // 801E4D7C
  c->r[5]=0u+0x00000006u; // 801E4D80
  c->lr=0x801E4D88u; f_80004364(c); // 801E4D84
  c->r[3]=c->r[30]|c->r[30]; // 801E4D88
  c->lr=0x801E4D90u; f_801E3C08(c); // 801E4D8C
  W16(c->r[31]+0x00000018u,c->r[3]); // 801E4D90
  c->r[5]=0u+0x80310000u; // 801E4D94
  c->r[5]=c->r[5]+0xFFFF8818u; // 801E4D98
  c->r[3]=c->r[31]|c->r[31]; // 801E4D9C
  c->r[4]=R32(c->r[5]+0x00001974u); // 801E4DA0
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 801E4DA4
  c->r[0]=c->r[4]+0x00000001u; // 801E4DA8
  W32(c->r[5]+0x00001974u,c->r[0]); // 801E4DAC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E4DB0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E4DB4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E4DB8
  c->lr=c->r[0]; // 801E4DBC
  c->r[1]=c->r[1]+0x00000010u; // 801E4DC0
  return; // 801E4DC4
}

// btm_find_dev_by_handle
void f_801E4DC8(Ctx* __restrict c) {
  trace_call(0x801E4DC8u);
  c->r[4]=0u+0x80310000u; // 801E4DC8
  c->r[0]=0u+0x00000004u; // 801E4DCC
  c->r[4]=c->r[4]+0xFFFF8818u; // 801E4DD0
  c->r[5]=0u+0x00000000u; // 801E4DD4
  c->r[4]=c->r[4]+0x00001F30u; // 801E4DD8
  c->ctr=c->r[0]; // 801E4DDC
L_801E4DE0:;
  c->r[0]=R8(c->r[4]+0x00000076u); // 801E4DE0
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801E4DE4
  if (crb(c,2)) { goto L_801E4E00; } // 801E4DE8
  c->r[0]=R16(c->r[4]+0x00000018u); // 801E4DEC
  cmpu(c,0,c->r[0],c->r[3]); // 801E4DF0
  if (!crb(c,2)) { goto L_801E4E00; } // 801E4DF4
  c->r[3]=c->r[4]|c->r[4]; // 801E4DF8
  return; // 801E4DFC
L_801E4E00:;
  c->r[0]=R8(c->r[4]+0x000000FEu); // 801E4E00
  c->r[4]=c->r[4]+0x00000088u; // 801E4E04
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801E4E08
  if (crb(c,2)) { goto L_801E4E24; } // 801E4E0C
  c->r[0]=R16(c->r[4]+0x00000018u); // 801E4E10
  cmpu(c,0,c->r[0],c->r[3]); // 801E4E14
  if (!crb(c,2)) { goto L_801E4E24; } // 801E4E18
  c->r[3]=c->r[4]|c->r[4]; // 801E4E1C
  return; // 801E4E20
L_801E4E24:;
  c->r[0]=R8(c->r[4]+0x000000FEu); // 801E4E24
  c->r[4]=c->r[4]+0x00000088u; // 801E4E28
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801E4E2C
  if (crb(c,2)) { goto L_801E4E48; } // 801E4E30
  c->r[0]=R16(c->r[4]+0x00000018u); // 801E4E34
  cmpu(c,0,c->r[0],c->r[3]); // 801E4E38
  if (!crb(c,2)) { goto L_801E4E48; } // 801E4E3C
  c->r[3]=c->r[4]|c->r[4]; // 801E4E40
  return; // 801E4E44
L_801E4E48:;
  c->r[0]=R8(c->r[4]+0x000000FEu); // 801E4E48
  c->r[4]=c->r[4]+0x00000088u; // 801E4E4C
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801E4E50
  if (crb(c,2)) { goto L_801E4E6C; } // 801E4E54
  c->r[0]=R16(c->r[4]+0x00000018u); // 801E4E58
  cmpu(c,0,c->r[0],c->r[3]); // 801E4E5C
  if (!crb(c,2)) { goto L_801E4E6C; } // 801E4E60
  c->r[3]=c->r[4]|c->r[4]; // 801E4E64
  return; // 801E4E68
L_801E4E6C:;
  c->r[5]=c->r[5]+0x00000003u; // 801E4E6C
  c->r[4]=c->r[4]+0x00000088u; // 801E4E70
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E4DE0; } // 801E4E74
  c->r[3]=0u+0x00000000u; // 801E4E78
  return; // 801E4E7C
}

// btm_find_dev
void f_801E4E80(Ctx* __restrict c) {
  trace_call(0x801E4E80u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E4E80
  c->r[0]=c->lr; // 801E4E84
  c->r[4]=0u+0x80310000u; // 801E4E88
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E4E8C
  c->r[4]=c->r[4]+0xFFFF8818u; // 801E4E90
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E4E94
  c->r[31]=c->r[4]+0x00001F30u; // 801E4E98
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E4E9C
  c->r[30]=0u+0x00000000u; // 801E4EA0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E4EA4
  c->r[29]=c->r[3]|c->r[3]; // 801E4EA8
L_801E4EAC:;
  c->r[0]=R8(c->r[31]+0x00000076u); // 801E4EAC
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801E4EB0
  if (crb(c,2)) { goto L_801E4ED8; } // 801E4EB4
  c->r[4]=c->r[29]|c->r[29]; // 801E4EB8
  c->r[3]=c->r[31]+0x0000001Cu; // 801E4EBC
  c->r[5]=0u+0x00000006u; // 801E4EC0
  c->lr=0x801E4EC8u; f_8020BD24(c); // 801E4EC4
  cmps(c,0,(int32_t)c->r[3],0); // 801E4EC8
  if (!crb(c,2)) { goto L_801E4ED8; } // 801E4ECC
  c->r[3]=c->r[31]|c->r[31]; // 801E4ED0
  goto L_801E4EEC; // 801E4ED4
L_801E4ED8:;
  c->r[30]=c->r[30]+0x00000001u; // 801E4ED8
  c->r[31]=c->r[31]+0x00000088u; // 801E4EDC
  cmps(c,0,(int32_t)c->r[30],16); // 801E4EE0
  if (crb(c,0)) { IRQCHK(c); goto L_801E4EAC; } // 801E4EE4
  c->r[3]=0u+0x00000000u; // 801E4EE8
L_801E4EEC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E4EEC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E4EF0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E4EF4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E4EF8
  c->lr=c->r[0]; // 801E4EFC
  c->r[1]=c->r[1]+0x00000020u; // 801E4F00
  return; // 801E4F04
}

// btm_find_oldest_dev
void f_801E4F08(Ctx* __restrict c) {
  trace_call(0x801E4F08u);
  c->r[3]=0u+0x80310000u; // 801E4F08
  c->r[0]=0u+0x00000004u; // 801E4F0C
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E4F10
  c->r[6]=0u+0xFFFFFFFFu; // 801E4F14
  c->r[5]=c->r[3]+0x00001F30u; // 801E4F18
  c->r[7]=0u+0x00000000u; // 801E4F1C
  c->r[3]=c->r[5]|c->r[5]; // 801E4F20
  c->ctr=c->r[0]; // 801E4F24
L_801E4F28:;
  c->r[4]=R8(c->r[5]+0x00000076u); // 801E4F28
  c->r[0]=rotl(c->r[4],0)&0x00000080u; cr0(c,c->r[0]); // 801E4F2C
  if (crb(c,2)) { goto L_801E4F50; } // 801E4F30
  c->r[0]=rotl(c->r[4],0)&0x00000010u; cr0(c,c->r[0]); // 801E4F34
  if (!crb(c,2)) { goto L_801E4F50; } // 801E4F38
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 801E4F3C
  cmpu(c,0,c->r[0],c->r[6]); // 801E4F40
  if (!crb(c,0)) { goto L_801E4F50; } // 801E4F44
  c->r[3]=c->r[5]|c->r[5]; // 801E4F48
  c->r[6]=c->r[0]|c->r[0]; // 801E4F4C
L_801E4F50:;
  c->r[4]=R8(c->r[5]+0x000000FEu); // 801E4F50
  c->r[5]=c->r[5]+0x00000088u; // 801E4F54
  c->r[0]=rotl(c->r[4],0)&0x00000080u; cr0(c,c->r[0]); // 801E4F58
  if (crb(c,2)) { goto L_801E4F7C; } // 801E4F5C
  c->r[0]=rotl(c->r[4],0)&0x00000010u; cr0(c,c->r[0]); // 801E4F60
  if (!crb(c,2)) { goto L_801E4F7C; } // 801E4F64
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 801E4F68
  cmpu(c,0,c->r[0],c->r[6]); // 801E4F6C
  if (!crb(c,0)) { goto L_801E4F7C; } // 801E4F70
  c->r[3]=c->r[5]|c->r[5]; // 801E4F74
  c->r[6]=c->r[0]|c->r[0]; // 801E4F78
L_801E4F7C:;
  c->r[4]=R8(c->r[5]+0x000000FEu); // 801E4F7C
  c->r[5]=c->r[5]+0x00000088u; // 801E4F80
  c->r[0]=rotl(c->r[4],0)&0x00000080u; cr0(c,c->r[0]); // 801E4F84
  if (crb(c,2)) { goto L_801E4FA8; } // 801E4F88
  c->r[0]=rotl(c->r[4],0)&0x00000010u; cr0(c,c->r[0]); // 801E4F8C
  if (!crb(c,2)) { goto L_801E4FA8; } // 801E4F90
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 801E4F94
  cmpu(c,0,c->r[0],c->r[6]); // 801E4F98
  if (!crb(c,0)) { goto L_801E4FA8; } // 801E4F9C
  c->r[3]=c->r[5]|c->r[5]; // 801E4FA0
  c->r[6]=c->r[0]|c->r[0]; // 801E4FA4
L_801E4FA8:;
  c->r[4]=R8(c->r[5]+0x000000FEu); // 801E4FA8
  c->r[5]=c->r[5]+0x00000088u; // 801E4FAC
  c->r[0]=rotl(c->r[4],0)&0x00000080u; cr0(c,c->r[0]); // 801E4FB0
  if (crb(c,2)) { goto L_801E4FD4; } // 801E4FB4
  c->r[0]=rotl(c->r[4],0)&0x00000010u; cr0(c,c->r[0]); // 801E4FB8
  if (!crb(c,2)) { goto L_801E4FD4; } // 801E4FBC
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 801E4FC0
  cmpu(c,0,c->r[0],c->r[6]); // 801E4FC4
  if (!crb(c,0)) { goto L_801E4FD4; } // 801E4FC8
  c->r[3]=c->r[5]|c->r[5]; // 801E4FCC
  c->r[6]=c->r[0]|c->r[0]; // 801E4FD0
L_801E4FD4:;
  c->r[7]=c->r[7]+0x00000003u; // 801E4FD4
  c->r[5]=c->r[5]+0x00000088u; // 801E4FD8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E4F28; } // 801E4FDC
  c->r[0]=c->r[6]+0x00010000u; // 801E4FE0
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801E4FE4
  if (!crb(c,2)) return; // 801E4FE8
  c->r[4]=0u+0x80310000u; // 801E4FEC
  c->r[0]=0u+0x00000004u; // 801E4FF0
  c->r[4]=c->r[4]+0xFFFF8818u; // 801E4FF4
  c->r[5]=0u+0x00000000u; // 801E4FF8
  c->r[4]=c->r[4]+0x00001F30u; // 801E4FFC
  c->ctr=c->r[0]; // 801E5000
L_801E5004:;
  c->r[0]=R8(c->r[4]+0x00000076u); // 801E5004
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801E5008
  if (crb(c,2)) { goto L_801E5024; } // 801E500C
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 801E5010
  cmpu(c,0,c->r[0],c->r[6]); // 801E5014
  if (!crb(c,0)) { goto L_801E5024; } // 801E5018
  c->r[3]=c->r[4]|c->r[4]; // 801E501C
  c->r[6]=c->r[0]|c->r[0]; // 801E5020
L_801E5024:;
  c->r[0]=R8(c->r[4]+0x000000FEu); // 801E5024
  c->r[4]=c->r[4]+0x00000088u; // 801E5028
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801E502C
  if (crb(c,2)) { goto L_801E5048; } // 801E5030
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 801E5034
  cmpu(c,0,c->r[0],c->r[6]); // 801E5038
  if (!crb(c,0)) { goto L_801E5048; } // 801E503C
  c->r[3]=c->r[4]|c->r[4]; // 801E5040
  c->r[6]=c->r[0]|c->r[0]; // 801E5044
L_801E5048:;
  c->r[0]=R8(c->r[4]+0x000000FEu); // 801E5048
  c->r[4]=c->r[4]+0x00000088u; // 801E504C
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801E5050
  if (crb(c,2)) { goto L_801E506C; } // 801E5054
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 801E5058
  cmpu(c,0,c->r[0],c->r[6]); // 801E505C
  if (!crb(c,0)) { goto L_801E506C; } // 801E5060
  c->r[3]=c->r[4]|c->r[4]; // 801E5064
  c->r[6]=c->r[0]|c->r[0]; // 801E5068
L_801E506C:;
  c->r[0]=R8(c->r[4]+0x000000FEu); // 801E506C
  c->r[4]=c->r[4]+0x00000088u; // 801E5070
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801E5074
  if (crb(c,2)) { goto L_801E5090; } // 801E5078
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 801E507C
  cmpu(c,0,c->r[0],c->r[6]); // 801E5080
  if (!crb(c,0)) { goto L_801E5090; } // 801E5084
  c->r[3]=c->r[4]|c->r[4]; // 801E5088
  c->r[6]=c->r[0]|c->r[0]; // 801E508C
L_801E5090:;
  c->r[5]=c->r[5]+0x00000003u; // 801E5090
  c->r[4]=c->r[4]+0x00000088u; // 801E5094
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E5004; } // 801E5098
  return; // 801E509C
}

// btm_dev_init
void f_801E50A0(Ctx* __restrict c) {
  trace_call(0x801E50A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E50A0
  c->r[0]=c->lr; // 801E50A4
  c->r[4]=c->r[13]+0xFFFFABC8u; // 801E50A8
  c->r[5]=0u+0x00000003u; // 801E50AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E50B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E50B4
  c->r[31]=0u+0x80310000u; // 801E50B8
  c->r[31]=c->r[31]+0xFFFF8818u; // 801E50BC
  c->r[3]=c->r[31]+0x00000648u; // 801E50C0
  c->lr=0x801E50C8u; f_80004364(c); // 801E50C4
  c->r[3]=0u+0x00010000u; // 801E50C8
  c->r[7]=0u+0x000000FFu; // 801E50CC
  c->r[9]=c->r[3]+0xFFFFCC18u; // 801E50D0
  c->r[12]=0u+0x00000001u; // 801E50D4
  c->r[3]=0u+0x00001400u; // 801E50D8
  c->r[11]=0u+0x00000002u; // 801E50DC
  c->r[10]=0u+0x00000004u; // 801E50E0
  c->r[8]=0u+0x0000003Fu; // 801E50E4
  c->r[6]=0u+0x00000000u; // 801E50E8
  c->r[0]=0u+0x00000005u; // 801E50EC
  W16(c->r[31]+0x0000064Cu,c->r[3]); // 801E50F0
  c->r[3]=c->r[31]+0x00000574u; // 801E50F4
  c->r[4]=0u+0x00000001u; // 801E50F8
  c->r[5]=0u+0x00000004u; // 801E50FC
  W32(c->r[31]+0x00000584u,c->r[12]); // 801E5100
  W32(c->r[31]+0x000005A0u,c->r[11]); // 801E5104
  W32(c->r[31]+0x000005BCu,c->r[10]); // 801E5108
  W16(c->r[31]+0x00000654u,c->r[9]); // 801E510C
  W16(c->r[31]+0x00000656u,c->r[8]); // 801E5110
  W8(c->r[31]+0x000027BDu,c->r[7]); // 801E5114
  W8(c->r[31]+0x000027BEu,c->r[7]); // 801E5118
  W8(c->r[31]+0x0000064Eu,c->r[6]); // 801E511C
  W8(c->r[31]+0x0000064Fu,c->r[0]); // 801E5120
  c->lr=0x801E5128u; f_801DCD40(c); // 801E5124
  c->lr=0x801E512Cu; f_801F0AD0(c); // 801E5128
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E512C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E5130
  c->lr=c->r[0]; // 801E5134
  c->r[1]=c->r[1]+0x00000010u; // 801E5138
  return; // 801E513C
}

// btm_db_reset
void f_801E5140(Ctx* __restrict c) {
  trace_call(0x801E5140u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E5140
  c->r[0]=c->lr; // 801E5144
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E5148
  c->r[0]=0u+0x0000000Cu; // 801E514C
  W8(c->r[1]+0x00000008u,c->r[0]); // 801E5150
  c->lr=0x801E5158u; f_801E7910(c); // 801E5154
  c->lr=0x801E515Cu; f_801E6AA0(c); // 801E5158
  c->r[3]=0u+0x80310000u; // 801E515C
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E5160
  c->r[12]=R32(c->r[3]+0x000005A8u); // 801E5164
  cmps(c,0,(int32_t)c->r[12],0); // 801E5168
  if (crb(c,2)) { goto L_801E5188; } // 801E516C
  c->r[0]=0u+0x00000000u; // 801E5170
  W32(c->r[3]+0x000005A8u,c->r[0]); // 801E5174
  if (crb(c,2)) { goto L_801E5188; } // 801E5178
  c->r[3]=0u+0x00000000u; // 801E517C
  c->ctr=c->r[12]; // 801E5180
  if (true) { c->lr=0x801E5188u; dispatch(c,c->ctr); } // 801E5184
L_801E5188:;
  c->r[3]=0u+0x80310000u; // 801E5188
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E518C
  c->r[12]=R32(c->r[3]+0x000005C4u); // 801E5190
  cmps(c,0,(int32_t)c->r[12],0); // 801E5194
  if (crb(c,2)) { goto L_801E51B4; } // 801E5198
  c->r[0]=0u+0x00000000u; // 801E519C
  W32(c->r[3]+0x000005C4u,c->r[0]); // 801E51A0
  if (crb(c,2)) { goto L_801E51B4; } // 801E51A4
  c->r[3]=c->r[1]+0x00000008u; // 801E51A8
  c->ctr=c->r[12]; // 801E51AC
  if (true) { c->lr=0x801E51B4u; dispatch(c,c->ctr); } // 801E51B0
L_801E51B4:;
  c->r[3]=0u+0x80310000u; // 801E51B4
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E51B8
  c->r[12]=R32(c->r[3]+0x000005E0u); // 801E51BC
  cmps(c,0,(int32_t)c->r[12],0); // 801E51C0
  if (crb(c,2)) { goto L_801E51E0; } // 801E51C4
  c->r[0]=0u+0x00000000u; // 801E51C8
  W32(c->r[3]+0x000005E0u,c->r[0]); // 801E51CC
  if (crb(c,2)) { goto L_801E51E0; } // 801E51D0
  c->r[3]=c->r[1]+0x00000008u; // 801E51D4
  c->ctr=c->r[12]; // 801E51D8
  if (true) { c->lr=0x801E51E0u; dispatch(c,c->ctr); } // 801E51DC
L_801E51E0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E51E0
  c->lr=c->r[0]; // 801E51E4
  c->r[1]=c->r[1]+0x00000010u; // 801E51E8
  return; // 801E51EC
}

// BTM_DeviceReset
void f_801E51F0(Ctx* __restrict c) {
  trace_call(0x801E51F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E51F0
  c->r[0]=c->lr; // 801E51F4
  c->r[4]=0u+0x80310000u; // 801E51F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E51FC
  c->r[4]=c->r[4]+0xFFFF8818u; // 801E5200
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E5204
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E5208
  c->r[30]=c->r[3]|c->r[3]; // 801E520C
  c->r[0]=R32(c->r[4]+0x0000058Cu); // 801E5210
  cmps(c,0,(int32_t)c->r[0],0); // 801E5214
  if (crb(c,2)) { goto L_801E5224; } // 801E5218
  cmpu(c,0,c->r[0],c->r[3]); // 801E521C
  if (!crb(c,2)) { goto L_801E5274; } // 801E5220
L_801E5224:;
  c->lr=0x801E5228u; f_801E3108(c); // 801E5224
  c->lr=0x801E522Cu; f_801E5140(c); // 801E5228
  c->r[31]=0u+0x80310000u; // 801E522C
  c->r[6]=0u+0x00000000u; // 801E5230
  c->r[31]=c->r[31]+0xFFFF8818u; // 801E5234
  c->r[0]=0u+0x00000005u; // 801E5238
  W32(c->r[31]+0x0000058Cu,c->r[30]); // 801E523C
  c->r[3]=c->r[31]+0x00000574u; // 801E5240
  c->r[4]=0u+0x00000001u; // 801E5244
  c->r[5]=0u+0x00000004u; // 801E5248
  W8(c->r[31]+0x0000064Eu,c->r[6]); // 801E524C
  W8(c->r[31]+0x0000064Fu,c->r[0]); // 801E5250
  c->lr=0x801E5258u; f_801DCD40(c); // 801E5254
  c->lr=0x801E525Cu; f_801F0AD0(c); // 801E5258
  c->r[12]=R32(c->r[31]+0x00000568u); // 801E525C
  cmps(c,0,(int32_t)c->r[12],0); // 801E5260
  if (crb(c,2)) { goto L_801E5274; } // 801E5264
  c->r[3]=0u+0x00000001u; // 801E5268
  c->ctr=c->r[12]; // 801E526C
  if (true) { c->lr=0x801E5274u; dispatch(c,c->ctr); } // 801E5270
L_801E5274:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E5274
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E5278
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E527C
  c->lr=c->r[0]; // 801E5280
  c->r[1]=c->r[1]+0x00000010u; // 801E5284
  return; // 801E5288
}

// BTM_SendHciReset
void f_801E528C(Ctx* __restrict c) {
  trace_call(0x801E528Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E528C
  c->r[0]=c->lr; // 801E5290
  c->r[4]=0u+0x80310000u; // 801E5294
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E5298
  c->r[4]=c->r[4]+0xFFFF8818u; // 801E529C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E52A0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E52A4
  c->r[30]=c->r[3]|c->r[3]; // 801E52A8
  c->r[0]=R32(c->r[4]+0x0000058Cu); // 801E52AC
  cmps(c,0,(int32_t)c->r[0],0); // 801E52B0
  if (crb(c,2)) { goto L_801E52CC; } // 801E52B4
  cmpu(c,0,c->r[0],c->r[3]); // 801E52B8
  if (crb(c,2)) { goto L_801E52CC; } // 801E52BC
  c->r[0]=R32(c->r[4]+0x00000620u); // 801E52C0
  cmpu(c,0,c->r[0],c->r[3]); // 801E52C4
  if (!crb(c,2)) { goto L_801E531C; } // 801E52C8
L_801E52CC:;
  c->lr=0x801E52D0u; f_801E3108(c); // 801E52CC
  c->lr=0x801E52D4u; f_801E5140(c); // 801E52D0
  c->r[31]=0u+0x80310000u; // 801E52D4
  c->r[6]=0u+0x00000000u; // 801E52D8
  c->r[31]=c->r[31]+0xFFFF8818u; // 801E52DC
  c->r[0]=0u+0x00000005u; // 801E52E0
  W32(c->r[31]+0x00000620u,c->r[30]); // 801E52E4
  c->r[3]=c->r[31]+0x00000574u; // 801E52E8
  c->r[4]=0u+0x00000001u; // 801E52EC
  c->r[5]=0u+0x00000004u; // 801E52F0
  W8(c->r[31]+0x0000064Eu,c->r[6]); // 801E52F4
  W8(c->r[31]+0x0000064Fu,c->r[0]); // 801E52F8
  c->lr=0x801E5300u; f_801DCD40(c); // 801E52FC
  c->lr=0x801E5304u; f_801F0AD0(c); // 801E5300
  c->r[12]=R32(c->r[31]+0x00000568u); // 801E5304
  cmps(c,0,(int32_t)c->r[12],0); // 801E5308
  if (crb(c,2)) { goto L_801E531C; } // 801E530C
  c->r[3]=0u+0x00000001u; // 801E5310
  c->ctr=c->r[12]; // 801E5314
  if (true) { c->lr=0x801E531Cu; dispatch(c,c->ctr); } // 801E5318
L_801E531C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E531C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E5320
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E5324
  c->lr=c->r[0]; // 801E5328
  c->r[1]=c->r[1]+0x00000010u; // 801E532C
  return; // 801E5330
}

// BTM_IsDeviceUp
void f_801E5334(Ctx* __restrict c) {
  trace_call(0x801E5334u);
  c->r[3]=0u+0x80310000u; // 801E5334
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E5338
  c->r[3]=R8(c->r[3]+0x0000064Eu); // 801E533C
  c->r[0]=c->r[3]+0xFFFFFFFBu; // 801E5340
  c->r[0]=cntlz(c->r[0]); // 801E5344
  c->r[3]=rotl(c->r[0],27)&0x000000FFu; // 801E5348
  return; // 801E534C
}

// BTM_SetAfhChannels
void f_801E5350(Ctx* __restrict c) {
  trace_call(0x801E5350u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E5350
  c->r[0]=c->lr; // 801E5354
  c->r[7]=0u+0x80310000u; // 801E5358
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E535C
  c->r[7]=c->r[7]+0xFFFF8818u; // 801E5360
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E5364
  c->r[31]=c->r[4]|c->r[4]; // 801E5368
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E536C
  c->r[30]=c->r[3]|c->r[3]; // 801E5370
  c->r[0]=R8(c->r[7]+0x000027C0u); // 801E5374
  cmpu(c,0,c->r[0],0x00000003u); // 801E5378
  if (crb(c,0)) { goto L_801E53A4; } // 801E537C
  c->r[3]=0u+0x000D0000u; // 801E5380
  c->r[4]=0u+0x80280000u; // 801E5384
  c->r[6]=R8(c->r[7]+0x000027BDu); // 801E5388
  c->r[5]=c->r[30]|c->r[30]; // 801E538C
  c->r[8]=R8(c->r[7]+0x000027BEu); // 801E5390
  c->r[7]=c->r[31]|c->r[31]; // 801E5394
  c->r[3]=c->r[3]+0x00000002u; // 801E5398
  c->r[4]=c->r[4]+0xFFFFF1B8u; // 801E539C
  c->lr=0x801E53A4u; f_801DC7B0(c); // 801E53A0
L_801E53A4:;
  c->r[3]=0u+0x80310000u; // 801E53A4
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E53A8
  c->r[4]=R8(c->r[3]+0x00000645u); // 801E53AC
  c->r[0]=rotl(c->r[4],0)&0x00000008u; cr0(c,c->r[0]); // 801E53B0
  if (!crb(c,2)) { goto L_801E53D4; } // 801E53B4
  c->r[0]=R8(c->r[3]+0x00000644u); // 801E53B8
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 801E53BC
  if (!crb(c,2)) { goto L_801E53D4; } // 801E53C0
  c->r[0]=rotl(c->r[4],0)&0x00000010u; cr0(c,c->r[0]); // 801E53C4
  if (!crb(c,2)) { goto L_801E53D4; } // 801E53C8
  c->r[3]=0u+0x00000004u; // 801E53CC
  goto L_801E5428; // 801E53D0
L_801E53D4:;
  c->r[3]=0u+0x80310000u; // 801E53D4
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E53D8
  c->r[0]=R8(c->r[3]+0x000027BDu); // 801E53DC
  cmpu(c,0,c->r[0],c->r[30]); // 801E53E0
  if (!crb(c,2)) { goto L_801E53F4; } // 801E53E4
  c->r[0]=R8(c->r[3]+0x000027BEu); // 801E53E8
  cmpu(c,0,c->r[0],c->r[31]); // 801E53EC
  if (crb(c,2)) { goto L_801E5424; } // 801E53F0
L_801E53F4:;
  c->r[3]=c->r[30]|c->r[30]; // 801E53F4
  c->r[4]=c->r[31]|c->r[31]; // 801E53F8
  c->lr=0x801E5400u; f_801F17C4(c); // 801E53FC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801E5400
  if (crb(c,2)) { goto L_801E541C; } // 801E5404
  c->r[3]=0u+0x80310000u; // 801E5408
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E540C
  W8(c->r[3]+0x000027BDu,c->r[30]); // 801E5410
  W8(c->r[3]+0x000027BEu,c->r[31]); // 801E5414
  goto L_801E5424; // 801E5418
L_801E541C:;
  c->r[3]=0u+0x00000003u; // 801E541C
  goto L_801E5428; // 801E5420
L_801E5424:;
  c->r[3]=0u+0x00000000u; // 801E5424
L_801E5428:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E5428
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E542C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E5430
  c->lr=c->r[0]; // 801E5434
  c->r[1]=c->r[1]+0x00000010u; // 801E5438
  return; // 801E543C
}

// btm_dev_timeout
void f_801E5440(Ctx* __restrict c) {
  trace_call(0x801E5440u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E5440
  c->r[0]=c->lr; // 801E5444
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E5448
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E544C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E5450
  c->r[0]=R32(c->r[3]+0x00000010u); // 801E5454
  cmpu(c,0,c->r[0],0x00000001u); // 801E5458
  if (!crb(c,2)) { goto L_801E5690; } // 801E545C
  c->r[6]=0u+0x80310000u; // 801E5460
  c->r[6]=c->r[6]+0xFFFF8818u; // 801E5464
  c->r[0]=R8(c->r[6]+0x0000064Eu); // 801E5468
  cmps(c,0,(int32_t)c->r[0],2); // 801E546C
  if (crb(c,2)) { goto L_801E55D0; } // 801E5470
  if (!crb(c,0)) { goto L_801E5488; } // 801E5474
  cmps(c,0,(int32_t)c->r[0],0); // 801E5478
  if (crb(c,2)) { goto L_801E5494; } // 801E547C
  if (!crb(c,0)) { goto L_801E54BC; } // 801E5480
  goto L_801E56C0; // 801E5484
L_801E5488:;
  cmps(c,0,(int32_t)c->r[0],4); // 801E5488
  if (!crb(c,0)) { goto L_801E56C0; } // 801E548C
  goto L_801E5634; // 801E5490
L_801E5494:;
  c->r[3]=0u+0x00000000u; // 801E5494
  c->r[0]=0u+0x00000005u; // 801E5498
  W8(c->r[6]+0x0000064Eu,c->r[3]); // 801E549C
  c->r[3]=c->r[6]+0x00000574u; // 801E54A0
  c->r[4]=0u+0x00000001u; // 801E54A4
  c->r[5]=0u+0x00000004u; // 801E54A8
  W8(c->r[6]+0x0000064Fu,c->r[0]); // 801E54AC
  c->lr=0x801E54B4u; f_801DCD40(c); // 801E54B0
  c->lr=0x801E54B8u; f_801F0AD0(c); // 801E54B4
  goto L_801E56C0; // 801E54B8
L_801E54BC:;
  c->r[0]=0u+0x00000004u; // 801E54BC
  c->r[3]=0u+0x00000002u; // 801E54C0
  W8(c->r[6]+0x0000064Eu,c->r[3]); // 801E54C4
  W8(c->r[6]+0x0000064Fu,c->r[0]); // 801E54C8
  goto L_801E54E4; // 801E54CC
  W8(c->r[6]+0x0000064Fu,c->r[0]); // 801E54D0
  W8(c->r[6]+0x0000064Eu,c->r[0]); // 801E54D4
  c->lr=0x801E54DCu; f_801DCD40(c); // 801E54D8
  c->lr=0x801E54E0u; f_801F0AD0(c); // 801E54DC
  goto L_801E5508; // 801E54E0
L_801E54E4:;
  c->r[3]=c->r[6]+0x00000574u; // 801E54E4
  c->r[4]=0u+0x00000001u; // 801E54E8
  c->r[5]=0u+0x00000001u; // 801E54EC
  c->lr=0x801E54F4u; f_801DCD40(c); // 801E54F0
  c->r[3]=0u+0x00000002u; // 801E54F4
  c->lr=0x801E54FCu; f_801D9B80(c); // 801E54F8
  cmps(c,0,(int32_t)c->r[3],0); // 801E54FC
  if (crb(c,2)) { goto L_801E5508; } // 801E5500
  c->lr=0x801E5508u; f_801F1648(c); // 801E5504
L_801E5508:;
  c->r[31]=0u+0x80310000u; // 801E5508
  c->r[5]=0u+0x00000003u; // 801E550C
  c->r[31]=c->r[31]+0xFFFF8818u; // 801E5510
  c->r[3]=c->r[31]+0x00000648u; // 801E5514
  c->r[4]=c->r[3]|c->r[3]; // 801E5518
  c->lr=0x801E5520u; f_80004364(c); // 801E551C
  c->r[0]=R8(c->r[31]+0x0000064Eu); // 801E5520
  cmps(c,0,(int32_t)c->r[0],0); // 801E5524
  if (crb(c,2)) { goto L_801E554C; } // 801E5528
  cmpu(c,0,c->r[0],0x00000001u); // 801E552C
  if (crb(c,2)) { goto L_801E554C; } // 801E5530
  c->r[3]=0u+0x00000002u; // 801E5534
  c->lr=0x801E553Cu; f_801D9B80(c); // 801E5538
  cmps(c,0,(int32_t)c->r[3],0); // 801E553C
  if (crb(c,2)) { goto L_801E554C; } // 801E5540
  c->r[4]=c->r[31]+0x00000648u; // 801E5544
  c->lr=0x801E554Cu; f_801F1344(c); // 801E5548
L_801E554C:;
  c->r[0]=0u+0x80310000u; // 801E554C
  c->r[31]=addc(c,c->r[0],0xFFFF8818u,0); cr0(c,c->r[31]); // 801E5550
  if (crb(c,2)) { goto L_801E55B4; } // 801E5554
  c->r[0]=R8(c->r[31]+0x0000064Eu); // 801E5558
  cmps(c,0,(int32_t)c->r[0],0); // 801E555C
  if (crb(c,2)) { goto L_801E55B4; } // 801E5560
  cmpu(c,0,c->r[0],0x00000001u); // 801E5564
  if (crb(c,2)) { goto L_801E55B4; } // 801E5568
  c->r[3]=0u+0x00000002u; // 801E556C
  c->lr=0x801E5574u; f_801D9B80(c); // 801E5570
  cmps(c,0,(int32_t)c->r[3],0); // 801E5574
  c->r[30]=c->r[3]|c->r[3]; // 801E5578
  if (crb(c,2)) { goto L_801E55B4; } // 801E557C
  cmpu(c,0,c->r[31],c->r[31]); // 801E5580
  if (crb(c,2)) { goto L_801E55A8; } // 801E5584
  c->r[3]=c->r[31]|c->r[31]; // 801E5588
  c->r[4]=0u+0x00000000u; // 801E558C
  c->r[5]=0u+0x00000020u; // 801E5590
  c->lr=0x801E5598u; f_800046B4(c); // 801E5594
  c->r[3]=c->r[31]|c->r[31]; // 801E5598
  c->r[4]=c->r[31]|c->r[31]; // 801E559C
  c->r[5]=0u+0x0000001Fu; // 801E55A0
  c->lr=0x801E55A8u; f_8020E7F4(c); // 801E55A4
L_801E55A8:;
  c->r[3]=c->r[30]|c->r[30]; // 801E55A8
  c->r[4]=c->r[31]|c->r[31]; // 801E55AC
  c->lr=0x801E55B4u; f_801F102C(c); // 801E55B0
L_801E55B4:;
  c->r[5]=0u+0x80310000u; // 801E55B4
  c->r[5]=c->r[5]+0xFFFF8818u; // 801E55B8
  c->r[3]=R8(c->r[5]+0x00000020u); // 801E55BC
  c->r[4]=c->r[5]+0x00000022u; // 801E55C0
  c->r[5]=R8(c->r[5]+0x00000021u); // 801E55C4
  c->lr=0x801E55CCu; f_801EA238(c); // 801E55C8
  goto L_801E56C0; // 801E55CC
L_801E55D0:;
  c->r[3]=R8(c->r[6]+0x0000064Fu); // 801E55D0
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801E55D4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801E55D8
  W8(c->r[6]+0x0000064Fu,c->r[3]); // 801E55DC
  if (!crb(c,2)) { goto L_801E560C; } // 801E55E0
  c->r[3]=0u+0x00000000u; // 801E55E4
  c->r[0]=0u+0x00000005u; // 801E55E8
  W8(c->r[6]+0x0000064Eu,c->r[3]); // 801E55EC
  c->r[3]=c->r[6]+0x00000574u; // 801E55F0
  c->r[4]=0u+0x00000001u; // 801E55F4
  c->r[5]=0u+0x00000004u; // 801E55F8
  W8(c->r[6]+0x0000064Fu,c->r[0]); // 801E55FC
  c->lr=0x801E5604u; f_801DCD40(c); // 801E5600
  c->lr=0x801E5608u; f_801F0AD0(c); // 801E5604
  goto L_801E56C0; // 801E5608
L_801E560C:;
  c->r[3]=c->r[6]+0x00000574u; // 801E560C
  c->r[4]=0u+0x00000001u; // 801E5610
  c->r[5]=0u+0x00000001u; // 801E5614
  c->lr=0x801E561Cu; f_801DCD40(c); // 801E5618
  c->r[3]=0u+0x00000002u; // 801E561C
  c->lr=0x801E5624u; f_801D9B80(c); // 801E5620
  cmps(c,0,(int32_t)c->r[3],0); // 801E5624
  if (crb(c,2)) { goto L_801E56C0; } // 801E5628
  c->lr=0x801E5630u; f_801F1648(c); // 801E562C
  goto L_801E56C0; // 801E5630
L_801E5634:;
  c->r[3]=R8(c->r[6]+0x0000064Fu); // 801E5634
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801E5638
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801E563C
  W8(c->r[6]+0x0000064Fu,c->r[3]); // 801E5640
  if (!crb(c,2)) { goto L_801E5670; } // 801E5644
  c->r[3]=0u+0x00000000u; // 801E5648
  c->r[0]=0u+0x00000005u; // 801E564C
  W8(c->r[6]+0x0000064Eu,c->r[3]); // 801E5650
  c->r[3]=c->r[6]+0x00000574u; // 801E5654
  c->r[4]=0u+0x00000001u; // 801E5658
  c->r[5]=0u+0x00000004u; // 801E565C
  W8(c->r[6]+0x0000064Fu,c->r[0]); // 801E5660
  c->lr=0x801E5668u; f_801DCD40(c); // 801E5664
  c->lr=0x801E566Cu; f_801F0AD0(c); // 801E5668
  goto L_801E56C0; // 801E566C
L_801E5670:;
  c->r[3]=c->r[6]+0x00000574u; // 801E5670
  c->r[4]=0u+0x00000001u; // 801E5674
  c->r[5]=0u+0x00000001u; // 801E5678
  c->lr=0x801E5680u; f_801DCD40(c); // 801E567C
  c->lr=0x801E5684u; f_801F158C(c); // 801E5680
  c->lr=0x801E5688u; f_801F1670(c); // 801E5684
  c->lr=0x801E568Cu; f_801E8994(c); // 801E5688
  goto L_801E56C0; // 801E568C
L_801E5690:;
  cmpu(c,0,c->r[0],0x00000002u); // 801E5690
  if (!crb(c,2)) { goto L_801E56C0; } // 801E5694
  c->r[3]=0u+0x80310000u; // 801E5698
  c->r[0]=0u+0x00000000u; // 801E569C
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E56A0
  c->r[12]=R32(c->r[3]+0x000005A8u); // 801E56A4
  cmps(c,0,(int32_t)c->r[12],0); // 801E56A8
  W32(c->r[3]+0x000005A8u,c->r[0]); // 801E56AC
  if (crb(c,2)) { goto L_801E56C0; } // 801E56B0
  c->r[3]=0u+0x00000000u; // 801E56B4
  c->ctr=c->r[12]; // 801E56B8
  if (true) { c->lr=0x801E56C0u; dispatch(c,c->ctr); } // 801E56BC
L_801E56C0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E56C0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E56C4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E56C8
  c->lr=c->r[0]; // 801E56CC
  c->r[1]=c->r[1]+0x00000010u; // 801E56D0
  return; // 801E56D4
}

// btm_reset_complete
void f_801E56D8(Ctx* __restrict c) {
  trace_call(0x801E56D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E56D8
  c->r[0]=c->lr; // 801E56DC
  c->r[3]=0u+0x80310000u; // 801E56E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E56E4
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E56E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E56EC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E56F0
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801E56F4
  cmpu(c,0,c->r[0],0x00000004u); // 801E56F8
  if (crb(c,0)) { goto L_801E5714; } // 801E56FC
  c->r[3]=0u+0x000D0000u; // 801E5700
  c->r[4]=0u+0x80280000u; // 801E5704
  c->r[3]=c->r[3]+0x00000003u; // 801E5708
  c->r[4]=c->r[4]+0xFFFFF1E8u; // 801E570C
  c->lr=0x801E5714u; f_801DC730(c); // 801E5710
L_801E5714:;
  c->r[31]=0u+0x80310000u; // 801E5714
  c->r[31]=c->r[31]+0xFFFF8818u; // 801E5718
  c->r[12]=R32(c->r[31]+0x00000620u); // 801E571C
  cmps(c,0,(int32_t)c->r[12],0); // 801E5720
  if (crb(c,2)) { goto L_801E5740; } // 801E5724
  c->r[0]=0u+0x00000000u; // 801E5728
  c->r[3]=0u+0x00000000u; // 801E572C
  W32(c->r[31]+0x00000620u,c->r[0]); // 801E5730
  c->ctr=c->r[12]; // 801E5734
  if (true) { c->lr=0x801E573Cu; dispatch(c,c->ctr); } // 801E5738
  goto L_801E5884; // 801E573C
L_801E5740:;
  c->r[0]=R8(c->r[31]+0x0000064Eu); // 801E5740
  cmps(c,0,(int32_t)c->r[0],0); // 801E5744
  if (!crb(c,2)) { goto L_801E5884; } // 801E5748
  c->lr=0x801E5750u; f_801FADF0(c); // 801E574C
  c->r[6]=0u+0x00000012u; // 801E5750
  c->r[5]=0u+0x00000800u; // 801E5754
  c->r[4]=0u+0x00000000u; // 801E5758
  c->r[0]=0u+0x00000004u; // 801E575C
  c->r[3]=0u+0x00000002u; // 801E5760
  W16(c->r[31]+0x000016A0u,c->r[6]); // 801E5764
  W16(c->r[31]+0x000016A2u,c->r[5]); // 801E5768
  W16(c->r[31]+0x000016A4u,c->r[4]); // 801E576C
  W16(c->r[31]+0x0000169Cu,c->r[6]); // 801E5770
  W16(c->r[31]+0x0000169Eu,c->r[5]); // 801E5774
  W16(c->r[31]+0x000016A6u,c->r[4]); // 801E5778
  W8(c->r[31]+0x0000064Eu,c->r[3]); // 801E577C
  W8(c->r[31]+0x0000064Fu,c->r[0]); // 801E5780
  goto L_801E579C; // 801E5784
  W8(c->r[31]+0x0000064Eu,c->r[4]); // 801E5788
  W8(c->r[31]+0x0000064Fu,c->r[0]); // 801E578C
  c->lr=0x801E5794u; f_801DCD40(c); // 801E5790
  c->lr=0x801E5798u; f_801F0AD0(c); // 801E5794
  goto L_801E57C0; // 801E5798
L_801E579C:;
  c->r[3]=c->r[31]+0x00000574u; // 801E579C
  c->r[4]=0u+0x00000001u; // 801E57A0
  c->r[5]=0u+0x00000001u; // 801E57A4
  c->lr=0x801E57ACu; f_801DCD40(c); // 801E57A8
  c->r[3]=0u+0x00000002u; // 801E57AC
  c->lr=0x801E57B4u; f_801D9B80(c); // 801E57B0
  cmps(c,0,(int32_t)c->r[3],0); // 801E57B4
  if (crb(c,2)) { goto L_801E57C0; } // 801E57B8
  c->lr=0x801E57C0u; f_801F1648(c); // 801E57BC
L_801E57C0:;
  c->r[31]=0u+0x80310000u; // 801E57C0
  c->r[5]=0u+0x00000003u; // 801E57C4
  c->r[31]=c->r[31]+0xFFFF8818u; // 801E57C8
  c->r[3]=c->r[31]+0x00000648u; // 801E57CC
  c->r[4]=c->r[3]|c->r[3]; // 801E57D0
  c->lr=0x801E57D8u; f_80004364(c); // 801E57D4
  c->r[0]=R8(c->r[31]+0x0000064Eu); // 801E57D8
  cmps(c,0,(int32_t)c->r[0],0); // 801E57DC
  if (crb(c,2)) { goto L_801E5804; } // 801E57E0
  cmpu(c,0,c->r[0],0x00000001u); // 801E57E4
  if (crb(c,2)) { goto L_801E5804; } // 801E57E8
  c->r[3]=0u+0x00000002u; // 801E57EC
  c->lr=0x801E57F4u; f_801D9B80(c); // 801E57F0
  cmps(c,0,(int32_t)c->r[3],0); // 801E57F4
  if (crb(c,2)) { goto L_801E5804; } // 801E57F8
  c->r[4]=c->r[31]+0x00000648u; // 801E57FC
  c->lr=0x801E5804u; f_801F1344(c); // 801E5800
L_801E5804:;
  c->r[0]=0u+0x80310000u; // 801E5804
  c->r[31]=addc(c,c->r[0],0xFFFF8818u,0); cr0(c,c->r[31]); // 801E5808
  if (crb(c,2)) { goto L_801E586C; } // 801E580C
  c->r[0]=R8(c->r[31]+0x0000064Eu); // 801E5810
  cmps(c,0,(int32_t)c->r[0],0); // 801E5814
  if (crb(c,2)) { goto L_801E586C; } // 801E5818
  cmpu(c,0,c->r[0],0x00000001u); // 801E581C
  if (crb(c,2)) { goto L_801E586C; } // 801E5820
  c->r[3]=0u+0x00000002u; // 801E5824
  c->lr=0x801E582Cu; f_801D9B80(c); // 801E5828
  cmps(c,0,(int32_t)c->r[3],0); // 801E582C
  c->r[30]=c->r[3]|c->r[3]; // 801E5830
  if (crb(c,2)) { goto L_801E586C; } // 801E5834
  cmpu(c,0,c->r[31],c->r[31]); // 801E5838
  if (crb(c,2)) { goto L_801E5860; } // 801E583C
  c->r[3]=c->r[31]|c->r[31]; // 801E5840
  c->r[4]=0u+0x00000000u; // 801E5844
  c->r[5]=0u+0x00000020u; // 801E5848
  c->lr=0x801E5850u; f_800046B4(c); // 801E584C
  c->r[3]=c->r[31]|c->r[31]; // 801E5850
  c->r[4]=c->r[31]|c->r[31]; // 801E5854
  c->r[5]=0u+0x0000001Fu; // 801E5858
  c->lr=0x801E5860u; f_8020E7F4(c); // 801E585C
L_801E5860:;
  c->r[3]=c->r[30]|c->r[30]; // 801E5860
  c->r[4]=c->r[31]|c->r[31]; // 801E5864
  c->lr=0x801E586Cu; f_801F102C(c); // 801E5868
L_801E586C:;
  c->r[5]=0u+0x80310000u; // 801E586C
  c->r[5]=c->r[5]+0xFFFF8818u; // 801E5870
  c->r[3]=R8(c->r[5]+0x00000020u); // 801E5874
  c->r[4]=c->r[5]+0x00000022u; // 801E5878
  c->r[5]=R8(c->r[5]+0x00000021u); // 801E587C
  c->lr=0x801E5884u; f_801EA238(c); // 801E5880
L_801E5884:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E5884
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E5888
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E588C
  c->lr=c->r[0]; // 801E5890
  c->r[1]=c->r[1]+0x00000010u; // 801E5894
  return; // 801E5898
}

// btm_read_hci_buf_size_complete
void f_801E589C(Ctx* __restrict c) {
  trace_call(0x801E589Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E589C
  c->r[0]=c->lr; // 801E58A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E58A4
  c->r[0]=R8(c->r[3]+0x00000000u); // 801E58A8
  cmps(c,0,(int32_t)c->r[0],0); // 801E58AC
  if (!crb(c,2)) { goto L_801E5908; } // 801E58B0
  c->r[0]=R8(c->r[3]+0x00000002u); // 801E58B4
  c->r[6]=0u+0x80310000u; // 801E58B8
  c->r[4]=R8(c->r[3]+0x00000001u); // 801E58BC
  c->r[6]=c->r[6]+0xFFFF82F0u; // 801E58C0
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801E58C4
  c->r[0]=c->r[4]+c->r[0]; // 801E58C8
  W16(c->r[6]+0x0000007Cu,c->r[0]); // 801E58CC
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 801E58D0
  c->r[0]=c->r[4]+0x00000004u; // 801E58D4
  c->r[4]=R8(c->r[3]+0x00000005u); // 801E58D8
  c->r[5]=R8(c->r[3]+0x00000004u); // 801E58DC
  c->r[3]=rotl(c->r[4],8)&0xFFFFFF00u; // 801E58E0
  c->r[3]=c->r[5]+c->r[3]; // 801E58E4
  W16(c->r[6]+0x0000007Eu,c->r[0]); // 801E58E8
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 801E58EC
  c->lr=0x801E58F4u; f_801F7E6C(c); // 801E58F0
  c->r[3]=0u+0x0000069Bu; // 801E58F4
  c->r[4]=0u+0x0000001Eu; // 801E58F8
  c->r[5]=0u+0x00000014u; // 801E58FC
  c->r[6]=0u+0x0000000Au; // 801E5900
  c->lr=0x801E5908u; f_801F13CC(c); // 801E5904
L_801E5908:;
  c->r[3]=0u+0x80310000u; // 801E5908
  c->r[0]=0u+0x00000004u; // 801E590C
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E5910
  c->r[4]=0u+0x00000003u; // 801E5914
  W8(c->r[3]+0x0000064Eu,c->r[4]); // 801E5918
  W8(c->r[3]+0x0000064Fu,c->r[0]); // 801E591C
  goto L_801E5938; // 801E5920
  W8(c->r[3]+0x0000064Fu,c->r[0]); // 801E5924
  W8(c->r[3]+0x0000064Eu,c->r[0]); // 801E5928
  c->lr=0x801E5930u; f_801DCD40(c); // 801E592C
  c->lr=0x801E5934u; f_801F0AD0(c); // 801E5930
  goto L_801E5954; // 801E5934
L_801E5938:;
  c->r[3]=c->r[3]+0x00000574u; // 801E5938
  c->r[4]=0u+0x00000001u; // 801E593C
  c->r[5]=0u+0x00000001u; // 801E5940
  c->lr=0x801E5948u; f_801DCD40(c); // 801E5944
  c->lr=0x801E594Cu; f_801F158C(c); // 801E5948
  c->lr=0x801E5950u; f_801F1670(c); // 801E594C
  c->lr=0x801E5954u; f_801E8994(c); // 801E5950
L_801E5954:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E5954
  c->lr=c->r[0]; // 801E5958
  c->r[1]=c->r[1]+0x00000010u; // 801E595C
  return; // 801E5960
}

// btm_read_local_version_complete
void f_801E5964(Ctx* __restrict c) {
  trace_call(0x801E5964u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E5964
  c->r[0]=c->lr; // 801E5968
  c->r[5]=0u+0x80310000u; // 801E596C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E5970
  c->r[5]=c->r[5]+0xFFFF8818u; // 801E5974
  c->r[0]=R8(c->r[3]+0x00000000u); // 801E5978
  cmps(c,0,(int32_t)c->r[0],0); // 801E597C
  if (!crb(c,2)) { goto L_801E59D0; } // 801E5980
  c->r[0]=R8(c->r[3]+0x00000001u); // 801E5984
  W8(c->r[5]+0x00000636u,c->r[0]); // 801E5988
  c->r[0]=R8(c->r[3]+0x00000003u); // 801E598C
  c->r[4]=R8(c->r[3]+0x00000002u); // 801E5990
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801E5994
  c->r[0]=c->r[4]+c->r[0]; // 801E5998
  W16(c->r[5]+0x00000638u,c->r[0]); // 801E599C
  c->r[0]=R8(c->r[3]+0x00000004u); // 801E59A0
  W8(c->r[5]+0x0000063Au,c->r[0]); // 801E59A4
  c->r[0]=R8(c->r[3]+0x00000006u); // 801E59A8
  c->r[4]=R8(c->r[3]+0x00000005u); // 801E59AC
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801E59B0
  c->r[0]=c->r[4]+c->r[0]; // 801E59B4
  W16(c->r[5]+0x0000063Cu,c->r[0]); // 801E59B8
  c->r[0]=R8(c->r[3]+0x00000008u); // 801E59BC
  c->r[3]=R8(c->r[3]+0x00000007u); // 801E59C0
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801E59C4
  c->r[0]=c->r[3]+c->r[0]; // 801E59C8
  W16(c->r[5]+0x0000063Eu,c->r[0]); // 801E59CC
L_801E59D0:;
  c->r[3]=0u+0x80310000u; // 801E59D0
  c->r[0]=0u+0x00000004u; // 801E59D4
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E59D8
  W8(c->r[3]+0x0000064Eu,c->r[0]); // 801E59DC
  W8(c->r[3]+0x0000064Fu,c->r[0]); // 801E59E0
  goto L_801E59FC; // 801E59E4
  W8(c->r[3]+0x0000064Fu,c->r[0]); // 801E59E8
  W8(c->r[3]+0x0000064Eu,c->r[0]); // 801E59EC
  c->lr=0x801E59F4u; f_801DCD40(c); // 801E59F0
  c->lr=0x801E59F8u; f_801F0AD0(c); // 801E59F4
  goto L_801E5A10; // 801E59F8
L_801E59FC:;
  c->r[3]=c->r[3]+0x00000574u; // 801E59FC
  c->r[4]=0u+0x00000001u; // 801E5A00
  c->r[5]=0u+0x00000001u; // 801E5A04
  c->lr=0x801E5A0Cu; f_801DCD40(c); // 801E5A08
  c->lr=0x801E5A10u; f_801F15EC(c); // 801E5A0C
L_801E5A10:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E5A10
  c->lr=c->r[0]; // 801E5A14
  c->r[1]=c->r[1]+0x00000010u; // 801E5A18
  return; // 801E5A1C
}

// btm_read_local_features_complete
void f_801E5A20(Ctx* __restrict c) {
  trace_call(0x801E5A20u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E5A20
  c->r[0]=c->lr; // 801E5A24
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E5A28
  c->r[11]=c->r[1]+0x00000020u; // 801E5A2C
  c->lr=0x801E5A34u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E5A30
  c->r[31]=0u+0x80310000u; // 801E5A34
  c->r[30]=0u+0x80280000u; // 801E5A38
  c->r[31]=c->r[31]+0xFFFF8818u; // 801E5A3C
  c->r[0]=0u+0x00000000u; // 801E5A40
  c->r[28]=R32(c->r[31]+0x0000058Cu); // 801E5A44
  c->r[30]=c->r[30]+0xFFFFF1B8u; // 801E5A48
  W32(c->r[31]+0x0000058Cu,c->r[0]); // 801E5A4C
  c->r[0]=R8(c->r[3]+0x00000000u); // 801E5A50
  cmps(c,0,(int32_t)c->r[0],0); // 801E5A54
  if (!crb(c,2)) { goto L_801E5F04; } // 801E5A58
  c->r[0]=0u+0x00000005u; // 801E5A5C
  c->r[4]=0u+0x00000018u; // 801E5A60
  W8(c->r[31]+0x0000064Eu,c->r[0]); // 801E5A64
  c->r[0]=R8(c->r[3]+0x00000001u); // 801E5A68
  W8(c->r[31]+0x00000640u,c->r[0]); // 801E5A6C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801E5A70
  c->r[0]=R8(c->r[3]+0x00000002u); // 801E5A74
  W8(c->r[31]+0x00000641u,c->r[0]); // 801E5A78
  c->r[0]=R8(c->r[3]+0x00000003u); // 801E5A7C
  W8(c->r[31]+0x00000642u,c->r[0]); // 801E5A80
  c->r[0]=R8(c->r[3]+0x00000004u); // 801E5A84
  W8(c->r[31]+0x00000643u,c->r[0]); // 801E5A88
  c->r[0]=R8(c->r[3]+0x00000005u); // 801E5A8C
  W8(c->r[31]+0x00000644u,c->r[0]); // 801E5A90
  c->r[0]=R8(c->r[3]+0x00000006u); // 801E5A94
  W8(c->r[31]+0x00000645u,c->r[0]); // 801E5A98
  c->r[0]=R8(c->r[3]+0x00000007u); // 801E5A9C
  W8(c->r[31]+0x00000646u,c->r[0]); // 801E5AA0
  c->r[0]=R8(c->r[3]+0x00000008u); // 801E5AA4
  W8(c->r[31]+0x00000647u,c->r[0]); // 801E5AA8
  W16(c->r[31]+0x00000654u,c->r[4]); // 801E5AAC
  if (crb(c,2)) { goto L_801E5ABC; } // 801E5AB0
  c->r[0]=c->r[4]|0x00000C00u; // 801E5AB4
  W16(c->r[31]+0x00000654u,c->r[0]); // 801E5AB8
L_801E5ABC:;
  c->r[0]=R8(c->r[31]+0x00000640u); // 801E5ABC
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801E5AC0
  if (crb(c,2)) { goto L_801E5ADC; } // 801E5AC4
  c->r[3]=0u+0x80310000u; // 801E5AC8
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E5ACC
  c->r[0]=R16(c->r[3]+0x00000654u); // 801E5AD0
  c->r[0]=c->r[0]|0x0000C000u; // 801E5AD4
  W16(c->r[3]+0x00000654u,c->r[0]); // 801E5AD8
L_801E5ADC:;
  c->r[3]=0u+0x80310000u; // 801E5ADC
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E5AE0
  c->r[0]=R8(c->r[3]+0x00000636u); // 801E5AE4
  cmpu(c,0,c->r[0],0x00000003u); // 801E5AE8
  if (crb(c,0)) { goto L_801E5B7C; } // 801E5AEC
  c->r[0]=R8(c->r[31]+0x00000643u); // 801E5AF0
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801E5AF4
  if (!crb(c,2)) { goto L_801E5B08; } // 801E5AF8
  c->r[0]=R16(c->r[3]+0x00000654u); // 801E5AFC
  c->r[0]=c->r[0]|0x00001102u; // 801E5B00
  W16(c->r[3]+0x00000654u,c->r[0]); // 801E5B04
L_801E5B08:;
  c->r[0]=R8(c->r[31]+0x00000643u); // 801E5B08
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801E5B0C
  if (!crb(c,2)) { goto L_801E5B28; } // 801E5B10
  c->r[3]=0u+0x80310000u; // 801E5B14
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E5B18
  c->r[0]=R16(c->r[3]+0x00000654u); // 801E5B1C
  c->r[0]=c->r[0]|0x00002204u; // 801E5B20
  W16(c->r[3]+0x00000654u,c->r[0]); // 801E5B24
L_801E5B28:;
  c->r[3]=R8(c->r[31]+0x00000643u); // 801E5B28
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 801E5B2C
  if (!crb(c,2)) { goto L_801E5B3C; } // 801E5B30
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 801E5B34
  if (crb(c,2)) { goto L_801E5B7C; } // 801E5B38
L_801E5B3C:;
  c->r[0]=R8(c->r[31]+0x00000644u); // 801E5B3C
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801E5B40
  if (!crb(c,2)) { goto L_801E5B5C; } // 801E5B44
  c->r[3]=0u+0x80310000u; // 801E5B48
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E5B4C
  c->r[0]=R16(c->r[3]+0x00000654u); // 801E5B50
  c->r[0]=c->r[0]|0x00000300u; // 801E5B54
  W16(c->r[3]+0x00000654u,c->r[0]); // 801E5B58
L_801E5B5C:;
  c->r[0]=R8(c->r[31]+0x00000645u); // 801E5B5C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801E5B60
  if (!crb(c,2)) { goto L_801E5B7C; } // 801E5B64
  c->r[3]=0u+0x80310000u; // 801E5B68
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E5B6C
  c->r[0]=R16(c->r[3]+0x00000654u); // 801E5B70
  c->r[0]=c->r[0]|0x00003000u; // 801E5B74
  W16(c->r[3]+0x00000654u,c->r[0]); // 801E5B78
L_801E5B7C:;
  c->r[4]=0u+0x80310000u; // 801E5B7C
  c->r[4]=c->r[4]+0xFFFF8818u; // 801E5B80
  c->r[0]=R8(c->r[4]+0x000027C0u); // 801E5B84
  cmpu(c,0,c->r[0],0x00000005u); // 801E5B88
  if (crb(c,0)) { goto L_801E5BA4; } // 801E5B8C
  c->r[3]=0u+0x000D0000u; // 801E5B90
  c->r[5]=R16(c->r[4]+0x00000654u); // 801E5B94
  c->r[3]=c->r[3]+0x00000004u; // 801E5B98
  c->r[4]=c->r[30]+0x00000044u; // 801E5B9C
  c->lr=0x801E5BA4u; f_801DC750(c); // 801E5BA0
L_801E5BA4:;
  c->r[3]=R8(c->r[31]+0x00000641u); // 801E5BA4
  c->r[4]=0u+0x80310000u; // 801E5BA8
  c->r[4]=c->r[4]+0xFFFF8818u; // 801E5BAC
  c->r[5]=0u+0x00000000u; // 801E5BB0
  c->r[0]=rotl(c->r[3],0)&0x00000008u; cr0(c,c->r[0]); // 801E5BB4
  W16(c->r[4]+0x00000656u,c->r[5]); // 801E5BB8
  W8(c->r[4]+0x00001908u,c->r[5]); // 801E5BBC
  if (crb(c,2)) { goto L_801E5BFC; } // 801E5BC0
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 801E5BC4
  c->r[0]=0u+0x00000001u; // 801E5BC8
  W16(c->r[4]+0x00000656u,c->r[0]); // 801E5BCC
  if (crb(c,2)) { goto L_801E5BDC; } // 801E5BD0
  c->r[0]=c->r[0]|0x00000002u; // 801E5BD4
  W16(c->r[4]+0x00000656u,c->r[0]); // 801E5BD8
L_801E5BDC:;
  c->r[0]=R8(c->r[31]+0x00000641u); // 801E5BDC
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 801E5BE0
  if (crb(c,2)) { goto L_801E5BFC; } // 801E5BE4
  c->r[3]=0u+0x80310000u; // 801E5BE8
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E5BEC
  c->r[0]=R16(c->r[3]+0x00000656u); // 801E5BF0
  c->r[0]=c->r[0]|0x00000004u; // 801E5BF4
  W16(c->r[3]+0x00000656u,c->r[0]); // 801E5BF8
L_801E5BFC:;
  c->r[0]=R8(c->r[31]+0x00000643u); // 801E5BFC
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801E5C00
  if (crb(c,2)) { goto L_801E5C1C; } // 801E5C04
  c->r[3]=0u+0x80310000u; // 801E5C08
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E5C0C
  c->r[0]=R16(c->r[3]+0x00000656u); // 801E5C10
  c->r[0]=c->r[0]|0x00000008u; // 801E5C14
  W16(c->r[3]+0x00000656u,c->r[0]); // 801E5C18
L_801E5C1C:;
  c->r[0]=R8(c->r[31]+0x00000644u); // 801E5C1C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801E5C20
  if (crb(c,2)) { goto L_801E5C3C; } // 801E5C24
  c->r[3]=0u+0x80310000u; // 801E5C28
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E5C2C
  c->r[0]=R16(c->r[3]+0x00000656u); // 801E5C30
  c->r[0]=c->r[0]|0x00000010u; // 801E5C34
  W16(c->r[3]+0x00000656u,c->r[0]); // 801E5C38
L_801E5C3C:;
  c->r[0]=R8(c->r[31]+0x00000644u); // 801E5C3C
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801E5C40
  if (crb(c,2)) { goto L_801E5C5C; } // 801E5C44
  c->r[3]=0u+0x80310000u; // 801E5C48
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E5C4C
  c->r[0]=R16(c->r[3]+0x00000656u); // 801E5C50
  c->r[0]=c->r[0]|0x00000020u; // 801E5C54
  W16(c->r[3]+0x00000656u,c->r[0]); // 801E5C58
L_801E5C5C:;
  c->r[4]=0u+0x80310000u; // 801E5C5C
  c->r[4]=c->r[4]+0xFFFF8818u; // 801E5C60
  c->r[3]=R16(c->r[4]+0x00000656u); // 801E5C64
  c->r[0]=rotl(c->r[3],0)&0x00000038u; cr0(c,c->r[0]); // 801E5C68
  if (crb(c,2)) { goto L_801E5CE0; } // 801E5C6C
  c->r[5]=R8(c->r[31]+0x00000645u); // 801E5C70
  c->r[0]=0u+0x00000001u; // 801E5C74
  W8(c->r[4]+0x00001908u,c->r[0]); // 801E5C78
  c->r[0]=rotl(c->r[5],0)&0x00000020u; cr0(c,c->r[0]); // 801E5C7C
  if (crb(c,2)) { goto L_801E5C98; } // 801E5C80
  c->r[0]=rotl(c->r[5],0)&0x00000080u; cr0(c,c->r[0]); // 801E5C84
  if (!crb(c,2)) { goto L_801E5CA0; } // 801E5C88
  c->r[0]=c->r[3]|0x00000100u; // 801E5C8C
  W16(c->r[4]+0x00000656u,c->r[0]); // 801E5C90
  goto L_801E5CA0; // 801E5C94
L_801E5C98:;
  c->r[0]=c->r[3]|0x00000140u; // 801E5C98
  W16(c->r[4]+0x00000656u,c->r[0]); // 801E5C9C
L_801E5CA0:;
  c->r[3]=R8(c->r[31]+0x00000645u); // 801E5CA0
  c->r[0]=rotl(c->r[3],0)&0x00000040u; cr0(c,c->r[0]); // 801E5CA4
  if (crb(c,2)) { goto L_801E5CCC; } // 801E5CA8
  c->r[0]=rotl(c->r[3],0)&0x00000080u; cr0(c,c->r[0]); // 801E5CAC
  if (!crb(c,2)) { goto L_801E5CE0; } // 801E5CB0
  c->r[3]=0u+0x80310000u; // 801E5CB4
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E5CB8
  c->r[0]=R16(c->r[3]+0x00000656u); // 801E5CBC
  c->r[0]=c->r[0]|0x00000200u; // 801E5CC0
  W16(c->r[3]+0x00000656u,c->r[0]); // 801E5CC4
  goto L_801E5CE0; // 801E5CC8
L_801E5CCC:;
  c->r[3]=0u+0x80310000u; // 801E5CCC
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E5CD0
  c->r[0]=R16(c->r[3]+0x00000656u); // 801E5CD4
  c->r[0]=c->r[0]|0x00000280u; // 801E5CD8
  W16(c->r[3]+0x00000656u,c->r[0]); // 801E5CDC
L_801E5CE0:;
  c->r[4]=0u+0x80310000u; // 801E5CE0
  c->r[4]=c->r[4]+0xFFFF8818u; // 801E5CE4
  c->r[0]=R8(c->r[4]+0x000027C0u); // 801E5CE8
  cmpu(c,0,c->r[0],0x00000005u); // 801E5CEC
  if (crb(c,0)) { goto L_801E5D08; } // 801E5CF0
  c->r[3]=0u+0x000D0000u; // 801E5CF4
  c->r[5]=R16(c->r[4]+0x00000656u); // 801E5CF8
  c->r[3]=c->r[3]+0x00000004u; // 801E5CFC
  c->r[4]=c->r[30]+0x00000070u; // 801E5D00
  c->lr=0x801E5D08u; f_801DC750(c); // 801E5D04
L_801E5D08:;
  c->r[0]=R8(c->r[31]+0x00000640u); // 801E5D08
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 801E5D0C
  if (crb(c,2)) { goto L_801E5D2C; } // 801E5D10
  c->r[3]=0u+0x80310000u; // 801E5D14
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E5D18
  c->r[0]=R16(c->r[3]+0x000004C4u); // 801E5D1C
  c->r[0]=c->r[0]|0x00000001u; // 801E5D20
  W16(c->r[3]+0x000004C4u,c->r[0]); // 801E5D24
  goto L_801E5D40; // 801E5D28
L_801E5D2C:;
  c->r[3]=0u+0x80310000u; // 801E5D2C
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E5D30
  c->r[0]=R16(c->r[3]+0x000004C4u); // 801E5D34
  c->r[0]=rotl(c->r[0],0)&0x0000FFFEu; // 801E5D38
  W16(c->r[3]+0x000004C4u,c->r[0]); // 801E5D3C
L_801E5D40:;
  c->r[0]=R8(c->r[31]+0x00000640u); // 801E5D40
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 801E5D44
  if (crb(c,2)) { goto L_801E5D64; } // 801E5D48
  c->r[3]=0u+0x80310000u; // 801E5D4C
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E5D50
  c->r[0]=R16(c->r[3]+0x000004C4u); // 801E5D54
  c->r[0]=c->r[0]|0x00000002u; // 801E5D58
  W16(c->r[3]+0x000004C4u,c->r[0]); // 801E5D5C
  goto L_801E5D78; // 801E5D60
L_801E5D64:;
  c->r[3]=0u+0x80310000u; // 801E5D64
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E5D68
  c->r[0]=R16(c->r[3]+0x000004C4u); // 801E5D6C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 801E5D70
  W16(c->r[3]+0x000004C4u,c->r[0]); // 801E5D74
L_801E5D78:;
  c->r[0]=R8(c->r[31]+0x00000640u); // 801E5D78
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801E5D7C
  if (crb(c,2)) { goto L_801E5D9C; } // 801E5D80
  c->r[3]=0u+0x80310000u; // 801E5D84
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E5D88
  c->r[0]=R16(c->r[3]+0x000004C4u); // 801E5D8C
  c->r[0]=c->r[0]|0x00000004u; // 801E5D90
  W16(c->r[3]+0x000004C4u,c->r[0]); // 801E5D94
  goto L_801E5DB0; // 801E5D98
L_801E5D9C:;
  c->r[3]=0u+0x80310000u; // 801E5D9C
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E5DA0
  c->r[0]=R16(c->r[3]+0x000004C4u); // 801E5DA4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 801E5DA8
  W16(c->r[3]+0x000004C4u,c->r[0]); // 801E5DAC
L_801E5DB0:;
  c->r[0]=R8(c->r[31]+0x00000641u); // 801E5DB0
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801E5DB4
  if (crb(c,2)) { goto L_801E5DD4; } // 801E5DB8
  c->r[3]=0u+0x80310000u; // 801E5DBC
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E5DC0
  c->r[0]=R16(c->r[3]+0x000004C4u); // 801E5DC4
  c->r[0]=c->r[0]|0x00000008u; // 801E5DC8
  W16(c->r[3]+0x000004C4u,c->r[0]); // 801E5DCC
  goto L_801E5DE8; // 801E5DD0
L_801E5DD4:;
  c->r[3]=0u+0x80310000u; // 801E5DD4
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E5DD8
  c->r[0]=R16(c->r[3]+0x000004C4u); // 801E5DDC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 801E5DE0
  W16(c->r[3]+0x000004C4u,c->r[0]); // 801E5DE4
L_801E5DE8:;
  c->lr=0x801E5DECu; f_801EB3C4(c); // 801E5DE8
  c->r[4]=0u+0x80310000u; // 801E5DEC
  c->r[4]=c->r[4]+0xFFFF8818u; // 801E5DF0
  c->r[29]=R8(c->r[4]+0x000027BEu); // 801E5DF4
  cmpu(c,0,c->r[29],0x000000FFu); // 801E5DF8
  if (crb(c,2)) { goto L_801E5EA8; } // 801E5DFC
  c->r[0]=R8(c->r[4]+0x000027C0u); // 801E5E00
  c->r[3]=0u+0x000000FFu; // 801E5E04
  c->r[27]=R8(c->r[4]+0x000027BDu); // 801E5E08
  cmpu(c,0,c->r[0],0x00000003u); // 801E5E0C
  W8(c->r[4]+0x000027BEu,c->r[3]); // 801E5E10
  W8(c->r[4]+0x000027BDu,c->r[3]); // 801E5E14
  if (crb(c,0)) { goto L_801E5E3C; } // 801E5E18
  c->r[3]=0u+0x000D0000u; // 801E5E1C
  c->r[5]=c->r[27]|c->r[27]; // 801E5E20
  c->r[7]=c->r[29]|c->r[29]; // 801E5E24
  c->r[4]=c->r[30]+0x00000000u; // 801E5E28
  c->r[3]=c->r[3]+0x00000002u; // 801E5E2C
  c->r[6]=0u+0x000000FFu; // 801E5E30
  c->r[8]=0u+0x000000FFu; // 801E5E34
  c->lr=0x801E5E3Cu; f_801DC7B0(c); // 801E5E38
L_801E5E3C:;
  c->r[3]=0u+0x80310000u; // 801E5E3C
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E5E40
  c->r[4]=R8(c->r[3]+0x00000645u); // 801E5E44
  c->r[0]=rotl(c->r[4],0)&0x00000008u; cr0(c,c->r[0]); // 801E5E48
  if (!crb(c,2)) { goto L_801E5E64; } // 801E5E4C
  c->r[0]=R8(c->r[3]+0x00000644u); // 801E5E50
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 801E5E54
  if (!crb(c,2)) { goto L_801E5E64; } // 801E5E58
  c->r[0]=rotl(c->r[4],0)&0x00000010u; cr0(c,c->r[0]); // 801E5E5C
  if (crb(c,2)) { goto L_801E5EA8; } // 801E5E60
L_801E5E64:;
  c->r[3]=0u+0x80310000u; // 801E5E64
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E5E68
  c->r[0]=R8(c->r[3]+0x000027BDu); // 801E5E6C
  cmpu(c,0,c->r[0],c->r[27]); // 801E5E70
  if (!crb(c,2)) { goto L_801E5E84; } // 801E5E74
  c->r[0]=R8(c->r[3]+0x000027BEu); // 801E5E78
  cmpu(c,0,c->r[0],c->r[29]); // 801E5E7C
  if (crb(c,2)) { goto L_801E5EA8; } // 801E5E80
L_801E5E84:;
  c->r[3]=c->r[27]|c->r[27]; // 801E5E84
  c->r[4]=c->r[29]|c->r[29]; // 801E5E88
  c->lr=0x801E5E90u; f_801F17C4(c); // 801E5E8C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801E5E90
  if (crb(c,2)) { goto L_801E5EA8; } // 801E5E94
  c->r[3]=0u+0x80310000u; // 801E5E98
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E5E9C
  W8(c->r[3]+0x000027BDu,c->r[27]); // 801E5EA0
  W8(c->r[3]+0x000027BEu,c->r[29]); // 801E5EA4
L_801E5EA8:;
  c->r[0]=R8(c->r[31]+0x00000643u); // 801E5EA8
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 801E5EAC
  if (crb(c,2)) { goto L_801E5EBC; } // 801E5EB0
  c->r[3]=0u+0x00000001u; // 801E5EB4
  c->lr=0x801E5EBCu; f_801E6F40(c); // 801E5EB8
L_801E5EBC:;
  c->r[3]=0u+0x00000001u; // 801E5EBC
  c->lr=0x801E5EC4u; f_801E6E90(c); // 801E5EC0
  c->r[3]=0u+0x00000001u; // 801E5EC4
  c->lr=0x801E5ECCu; f_801E6DE0(c); // 801E5EC8
  c->r[3]=0u+0x80310000u; // 801E5ECC
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E5ED0
  c->r[12]=R32(c->r[3]+0x00000568u); // 801E5ED4
  cmps(c,0,(int32_t)c->r[12],0); // 801E5ED8
  if (crb(c,2)) { goto L_801E5EEC; } // 801E5EDC
  c->r[3]=0u+0x00000000u; // 801E5EE0
  c->ctr=c->r[12]; // 801E5EE4
  if (true) { c->lr=0x801E5EECu; dispatch(c,c->ctr); } // 801E5EE8
L_801E5EEC:;
  cmps(c,0,(int32_t)c->r[28],0); // 801E5EEC
  if (crb(c,2)) { goto L_801E5F04; } // 801E5EF0
  c->r[12]=c->r[28]|c->r[28]; // 801E5EF4
  c->r[3]=0u+0x00000000u; // 801E5EF8
  c->ctr=c->r[12]; // 801E5EFC
  if (true) { c->lr=0x801E5F04u; dispatch(c,c->ctr); } // 801E5F00
L_801E5F04:;
  c->r[11]=c->r[1]+0x00000020u; // 801E5F04
  c->lr=0x801E5F0Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E5F08
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E5F0C
  c->lr=c->r[0]; // 801E5F10
  c->r[1]=c->r[1]+0x00000020u; // 801E5F14
  return; // 801E5F18
}

// BTM_SetLocalDeviceName
void f_801E5F1C(Ctx* __restrict c) {
  trace_call(0x801E5F1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E5F1C
  c->r[0]=c->lr; // 801E5F20
  cmps(c,0,(int32_t)c->r[3],0); // 801E5F24
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E5F28
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E5F2C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E5F30
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E5F34
  c->r[29]=c->r[3]|c->r[3]; // 801E5F38
  if (!crb(c,2)) { goto L_801E5F48; } // 801E5F3C
  c->r[3]=0u+0x00000005u; // 801E5F40
  goto L_801E5FB8; // 801E5F44
L_801E5F48:;
  c->r[30]=0u+0x80310000u; // 801E5F48
  c->r[30]=c->r[30]+0xFFFF8818u; // 801E5F4C
  c->r[0]=R8(c->r[30]+0x0000064Eu); // 801E5F50
  cmpu(c,0,c->r[0],0x00000001u); // 801E5F54
  if (crb(c,1)) { goto L_801E5F64; } // 801E5F58
  c->r[3]=0u+0x0000000Cu; // 801E5F5C
  goto L_801E5FB8; // 801E5F60
L_801E5F64:;
  c->r[3]=0u+0x00000002u; // 801E5F64
  c->lr=0x801E5F6Cu; f_801D9B80(c); // 801E5F68
  cmps(c,0,(int32_t)c->r[3],0); // 801E5F6C
  c->r[31]=c->r[3]|c->r[3]; // 801E5F70
  if (crb(c,2)) { goto L_801E5FB4; } // 801E5F74
  cmpu(c,0,c->r[30],c->r[29]); // 801E5F78
  if (crb(c,2)) { goto L_801E5FA0; } // 801E5F7C
  c->r[3]=c->r[30]|c->r[30]; // 801E5F80
  c->r[4]=0u+0x00000000u; // 801E5F84
  c->r[5]=0u+0x00000020u; // 801E5F88
  c->lr=0x801E5F90u; f_800046B4(c); // 801E5F8C
  c->r[3]=c->r[30]|c->r[30]; // 801E5F90
  c->r[4]=c->r[29]|c->r[29]; // 801E5F94
  c->r[5]=0u+0x0000001Fu; // 801E5F98
  c->lr=0x801E5FA0u; f_8020E7F4(c); // 801E5F9C
L_801E5FA0:;
  c->r[3]=c->r[31]|c->r[31]; // 801E5FA0
  c->r[4]=c->r[30]|c->r[30]; // 801E5FA4
  c->lr=0x801E5FACu; f_801F102C(c); // 801E5FA8
  c->r[3]=0u+0x00000001u; // 801E5FAC
  goto L_801E5FB8; // 801E5FB0
L_801E5FB4:;
  c->r[3]=0u+0x00000003u; // 801E5FB4
L_801E5FB8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E5FB8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E5FBC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E5FC0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E5FC4
  c->lr=c->r[0]; // 801E5FC8
  c->r[1]=c->r[1]+0x00000020u; // 801E5FCC
  return; // 801E5FD0
}

// btm_read_local_name_complete
void f_801E5FD4(Ctx* __restrict c) {
  trace_call(0x801E5FD4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E5FD4
  c->r[0]=c->lr; // 801E5FD8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E5FDC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E5FE0
  c->r[31]=0u+0x80310000u; // 801E5FE4
  c->r[31]=c->r[31]+0xFFFF8818u; // 801E5FE8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E5FEC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E5FF0
  c->r[29]=c->r[3]|c->r[3]; // 801E5FF4
  c->r[3]=c->r[31]+0x00000590u; // 801E5FF8
  c->r[30]=R32(c->r[31]+0x000005A8u); // 801E5FFC
  c->lr=0x801E6004u; f_801DCDB0(c); // 801E6000
  c->r[0]=0u+0x00000000u; // 801E6004
  cmps(c,0,(int32_t)c->r[30],0); // 801E6008
  W32(c->r[31]+0x000005A8u,c->r[0]); // 801E600C
  if (crb(c,2)) { goto L_801E6044; } // 801E6010
  c->r[0]=R8(c->r[29]+0x00000000u); // 801E6014
  cmps(c,0,(int32_t)c->r[0],0); // 801E6018
  if (!crb(c,2)) { goto L_801E6034; } // 801E601C
  c->r[12]=c->r[30]|c->r[30]; // 801E6020
  c->r[3]=c->r[29]+0x00000001u; // 801E6024
  c->ctr=c->r[12]; // 801E6028
  if (true) { c->lr=0x801E6030u; dispatch(c,c->ctr); } // 801E602C
  goto L_801E6044; // 801E6030
L_801E6034:;
  c->r[12]=c->r[30]|c->r[30]; // 801E6034
  c->r[3]=0u+0x00000000u; // 801E6038
  c->ctr=c->r[12]; // 801E603C
  if (true) { c->lr=0x801E6044u; dispatch(c,c->ctr); } // 801E6040
L_801E6044:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E6044
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E6048
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E604C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E6050
  c->lr=c->r[0]; // 801E6054
  c->r[1]=c->r[1]+0x00000020u; // 801E6058
  return; // 801E605C
}

// BTM_ReadLocalDeviceAddr
void f_801E6060(Ctx* __restrict c) {
  trace_call(0x801E6060u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E6060
  c->r[0]=c->lr; // 801E6064
  cmps(c,0,(int32_t)c->r[3],0); // 801E6068
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E606C
  if (crb(c,2)) { goto L_801E608C; } // 801E6070
  c->r[4]=0u+0x80310000u; // 801E6074
  c->r[12]=c->r[3]|c->r[3]; // 801E6078
  c->r[4]=c->r[4]+0xFFFF8818u; // 801E607C
  c->r[3]=c->r[4]+0x00000630u; // 801E6080
  c->ctr=c->r[12]; // 801E6084
  if (true) { c->lr=0x801E608Cu; dispatch(c,c->ctr); } // 801E6088
L_801E608C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E608C
  c->r[3]=0u+0x00000000u; // 801E6090
  c->lr=c->r[0]; // 801E6094
  c->r[1]=c->r[1]+0x00000010u; // 801E6098
  return; // 801E609C
}

// btm_read_local_addr_complete
void f_801E60A0(Ctx* __restrict c) {
  trace_call(0x801E60A0u);
  c->r[0]=R8(c->r[3]+0x00000000u); // 801E60A0
  cmps(c,0,(int32_t)c->r[0],0); // 801E60A4
  if (!crb(c,2)) return; // 801E60A8
  c->r[4]=0u+0x80310000u; // 801E60AC
  c->r[0]=R8(c->r[3]+0x00000001u); // 801E60B0
  c->r[4]=c->r[4]+0xFFFF8818u; // 801E60B4
  W8(c->r[4]+0x00000635u,c->r[0]); // 801E60B8
  c->r[0]=R8(c->r[3]+0x00000002u); // 801E60BC
  W8(c->r[4]+0x00000634u,c->r[0]); // 801E60C0
  c->r[0]=R8(c->r[3]+0x00000003u); // 801E60C4
  W8(c->r[4]+0x00000633u,c->r[0]); // 801E60C8
  c->r[0]=R8(c->r[3]+0x00000004u); // 801E60CC
  W8(c->r[4]+0x00000632u,c->r[0]); // 801E60D0
  c->r[0]=R8(c->r[3]+0x00000005u); // 801E60D4
  W8(c->r[4]+0x00000631u,c->r[0]); // 801E60D8
  c->r[0]=R8(c->r[3]+0x00000006u); // 801E60DC
  W8(c->r[4]+0x00000630u,c->r[0]); // 801E60E0
  return; // 801E60E4
}

// BTM_ReadLocalVersion
void f_801E60E8(Ctx* __restrict c) {
  trace_call(0x801E60E8u);
  c->r[5]=0u+0x80310000u; // 801E60E8
  c->r[5]=c->r[5]+0xFFFF8818u; // 801E60EC
  c->r[0]=R8(c->r[5]+0x0000064Eu); // 801E60F0
  cmpu(c,0,c->r[0],0x00000004u); // 801E60F4
  if (!crb(c,0)) { goto L_801E6104; } // 801E60F8
  c->r[3]=0u+0x0000000Cu; // 801E60FC
  return; // 801E6100
L_801E6104:;
  c->r[4]=R16(c->r[5]+0x00000636u); // 801E6104
  c->r[0]=R16(c->r[5]+0x00000638u); // 801E6108
  W16(c->r[3]+0x00000000u,c->r[4]); // 801E610C
  W16(c->r[3]+0x00000002u,c->r[0]); // 801E6110
  c->r[4]=R16(c->r[5]+0x0000063Au); // 801E6114
  c->r[0]=R16(c->r[5]+0x0000063Cu); // 801E6118
  W16(c->r[3]+0x00000004u,c->r[4]); // 801E611C
  W16(c->r[3]+0x00000006u,c->r[0]); // 801E6120
  c->r[0]=R16(c->r[5]+0x0000063Eu); // 801E6124
  W16(c->r[3]+0x00000008u,c->r[0]); // 801E6128
  c->r[3]=0u+0x00000000u; // 801E612C
  return; // 801E6130
}

// BTM_SetDeviceClass
void f_801E6134(Ctx* __restrict c) {
  trace_call(0x801E6134u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E6134
  c->r[0]=c->lr; // 801E6138
  c->r[5]=0u+0x00000003u; // 801E613C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E6140
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E6144
  c->r[31]=0u+0x80310000u; // 801E6148
  c->r[31]=c->r[31]+0xFFFF8818u; // 801E614C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E6150
  c->r[30]=c->r[3]|c->r[3]; // 801E6154
  c->r[4]=c->r[30]|c->r[30]; // 801E6158
  c->r[3]=c->r[31]+0x00000648u; // 801E615C
  c->lr=0x801E6164u; f_80004364(c); // 801E6160
  c->r[0]=R8(c->r[31]+0x0000064Eu); // 801E6164
  cmpu(c,0,c->r[0],0x00000001u); // 801E6168
  if (crb(c,1)) { goto L_801E6178; } // 801E616C
  c->r[3]=0u+0x0000000Cu; // 801E6170
  goto L_801E619C; // 801E6174
L_801E6178:;
  c->r[3]=0u+0x00000002u; // 801E6178
  c->lr=0x801E6180u; f_801D9B80(c); // 801E617C
  cmps(c,0,(int32_t)c->r[3],0); // 801E6180
  if (crb(c,2)) { goto L_801E6198; } // 801E6184
  c->r[4]=c->r[30]|c->r[30]; // 801E6188
  c->lr=0x801E6190u; f_801F1344(c); // 801E618C
  c->r[3]=0u+0x00000000u; // 801E6190
  goto L_801E619C; // 801E6194
L_801E6198:;
  c->r[3]=0u+0x00000003u; // 801E6198
L_801E619C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E619C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E61A0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E61A4
  c->lr=c->r[0]; // 801E61A8
  c->r[1]=c->r[1]+0x00000010u; // 801E61AC
  return; // 801E61B0
}

// BTM_ReadDeviceClass
void f_801E61B4(Ctx* __restrict c) {
  trace_call(0x801E61B4u);
  c->r[3]=0u+0x80310000u; // 801E61B4
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E61B8
  c->r[3]=c->r[3]+0x00000648u; // 801E61BC
  return; // 801E61C0
}

// BTM_ReadLocalFeatures
void f_801E61C4(Ctx* __restrict c) {
  trace_call(0x801E61C4u);
  c->r[3]=0u+0x80310000u; // 801E61C4
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E61C8
  c->r[3]=c->r[3]+0x00000640u; // 801E61CC
  return; // 801E61D0
}

// BTM_RegisterForDeviceStatusNotif
void f_801E61D4(Ctx* __restrict c) {
  trace_call(0x801E61D4u);
  c->r[4]=0u+0x80310000u; // 801E61D4
  c->r[0]=c->r[3]|c->r[3]; // 801E61D8
  c->r[4]=c->r[4]+0xFFFF8818u; // 801E61DC
  c->r[3]=R32(c->r[4]+0x00000568u); // 801E61E0
  W32(c->r[4]+0x00000568u,c->r[0]); // 801E61E4
  return; // 801E61E8
}

// BTM_VendorSpecificCommand
void f_801E61EC(Ctx* __restrict c) {
  trace_call(0x801E61ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E61EC
  c->r[0]=c->lr; // 801E61F0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E61F4
  c->r[11]=c->r[1]+0x00000020u; // 801E61F8
  c->lr=0x801E6200u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E61FC
  c->r[7]=0u+0x80310000u; // 801E6200
  c->r[27]=c->r[3]|c->r[3]; // 801E6204
  c->r[7]=c->r[7]+0xFFFF8818u; // 801E6208
  c->r[28]=c->r[4]|c->r[4]; // 801E620C
  c->r[0]=R8(c->r[7]+0x000027C0u); // 801E6210
  c->r[29]=c->r[5]|c->r[5]; // 801E6214
  c->r[30]=c->r[6]|c->r[6]; // 801E6218
  cmpu(c,0,c->r[0],0x00000004u); // 801E621C
  if (crb(c,0)) { goto L_801E6240; } // 801E6220
  c->r[3]=0u+0x000D0000u; // 801E6224
  c->r[4]=0u+0x80280000u; // 801E6228
  c->r[5]=c->r[27]|c->r[27]; // 801E622C
  c->r[6]=c->r[28]|c->r[28]; // 801E6230
  c->r[3]=c->r[3]+0x00000003u; // 801E6234
  c->r[4]=c->r[4]+0xFFFFF254u; // 801E6238
  c->lr=0x801E6240u; f_801DC770(c); // 801E623C
L_801E6240:;
  c->r[31]=0u+0x80310000u; // 801E6240
  c->r[31]=c->r[31]+0xFFFF8818u; // 801E6244
  c->r[0]=R8(c->r[31]+0x00000650u); // 801E6248
  cmps(c,0,(int32_t)c->r[0],0); // 801E624C
  if (crb(c,2)) { goto L_801E627C; } // 801E6250
  c->r[0]=R8(c->r[31]+0x000027C0u); // 801E6254
  cmpu(c,0,c->r[0],0x00000004u); // 801E6258
  if (crb(c,0)) { goto L_801E6274; } // 801E625C
  c->r[3]=0u+0x000D0000u; // 801E6260
  c->r[4]=0u+0x80280000u; // 801E6264
  c->r[3]=c->r[3]+0x00000003u; // 801E6268
  c->r[4]=c->r[4]+0xFFFFF294u; // 801E626C
  c->lr=0x801E6274u; f_801DC730(c); // 801E6270
L_801E6274:;
  c->r[3]=0u+0x00000002u; // 801E6274
  goto L_801E62D0; // 801E6278
L_801E627C:;
  c->r[0]=c->r[28]+0x0000000Bu; // 801E627C
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801E6280
  c->lr=0x801E6288u; f_801D99E0(c); // 801E6284
  cmps(c,0,(int32_t)c->r[3],0); // 801E6288
  if (crb(c,2)) { goto L_801E62CC; } // 801E628C
  cmps(c,0,(int32_t)c->r[30],0); // 801E6290
  W32(c->r[31]+0x0000061Cu,c->r[30]); // 801E6294
  if (crb(c,2)) { goto L_801E62A4; } // 801E6298
  c->r[0]=0u+0x00000001u; // 801E629C
  W8(c->r[31]+0x00000650u,c->r[0]); // 801E62A0
L_801E62A4:;
  c->r[4]=c->r[27]|c->r[27]; // 801E62A4
  c->r[5]=c->r[28]|c->r[28]; // 801E62A8
  c->r[6]=c->r[29]|c->r[29]; // 801E62AC
  c->lr=0x801E62B4u; f_801F1C74(c); // 801E62B0
  cmps(c,0,(int32_t)c->r[30],0); // 801E62B4
  if (crb(c,2)) { goto L_801E62C4; } // 801E62B8
  c->r[3]=0u+0x00000001u; // 801E62BC
  goto L_801E62D0; // 801E62C0
L_801E62C4:;
  c->r[3]=0u+0x00000000u; // 801E62C4
  goto L_801E62D0; // 801E62C8
L_801E62CC:;
  c->r[3]=0u+0x00000003u; // 801E62CC
L_801E62D0:;
  c->r[11]=c->r[1]+0x00000020u; // 801E62D0
  c->lr=0x801E62D8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E62D4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E62D8
  c->lr=c->r[0]; // 801E62DC
  c->r[1]=c->r[1]+0x00000020u; // 801E62E0
  return; // 801E62E4
}

// btm_vsc_complete
void f_801E62E8(Ctx* __restrict c) {
  trace_call(0x801E62E8u);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E62E8
  c->r[0]=c->lr; // 801E62EC
  c->r[6]=0u+0x80310000u; // 801E62F0
  c->r[7]=c->r[3]|c->r[3]; // 801E62F4
  W32(c->r[1]+0x00000124u,c->r[0]); // 801E62F8
  c->r[6]=c->r[6]+0xFFFF8818u; // 801E62FC
  c->r[0]=0u+0x00000000u; // 801E6300
  c->r[3]=c->r[1]+0x0000000Cu; // 801E6304
  W32(c->r[1]+0x0000011Cu,c->r[31]); // 801E6308
  c->r[31]=R32(c->r[6]+0x0000061Cu); // 801E630C
  W8(c->r[6]+0x00000650u,c->r[0]); // 801E6310
  cmps(c,0,(int32_t)c->r[31],0); // 801E6314
  W32(c->r[6]+0x0000061Cu,c->r[0]); // 801E6318
  if (crb(c,2)) { goto L_801E6340; } // 801E631C
  W16(c->r[1]+0x00000008u,c->r[4]); // 801E6320
  c->r[4]=c->r[7]|c->r[7]; // 801E6324
  W16(c->r[1]+0x0000000Au,c->r[5]); // 801E6328
  c->lr=0x801E6330u; f_80004364(c); // 801E632C
  c->r[12]=c->r[31]|c->r[31]; // 801E6330
  c->r[3]=c->r[1]+0x00000008u; // 801E6334
  c->ctr=c->r[12]; // 801E6338
  if (true) { c->lr=0x801E6340u; dispatch(c,c->ctr); } // 801E633C
L_801E6340:;
  c->r[0]=R32(c->r[1]+0x00000124u); // 801E6340
  c->r[31]=R32(c->r[1]+0x0000011Cu); // 801E6344
  c->lr=c->r[0]; // 801E6348
  c->r[1]=c->r[1]+0x00000120u; // 801E634C
  return; // 801E6350
}

// BTM_RegisterForVSEvents
void f_801E6354(Ctx* __restrict c) {
  trace_call(0x801E6354u);
  c->r[4]=0u+0x80310000u; // 801E6354
  c->r[4]=c->r[4]+0xFFFF8818u; // 801E6358
  c->r[0]=R32(c->r[4]+0x0000056Cu); // 801E635C
  cmps(c,0,(int32_t)c->r[0],0); // 801E6360
  if (crb(c,2)) { goto L_801E6378; } // 801E6364
  cmps(c,0,(int32_t)c->r[3],0); // 801E6368
  if (crb(c,2)) { goto L_801E6378; } // 801E636C
  c->r[3]=0u+0x00000002u; // 801E6370
  return; // 801E6374
L_801E6378:;
  c->r[4]=0u+0x80310000u; // 801E6378
  c->r[4]=c->r[4]+0xFFFF8818u; // 801E637C
  W32(c->r[4]+0x0000056Cu,c->r[3]); // 801E6380
  c->r[3]=0u+0x00000000u; // 801E6384
  return; // 801E6388
}

// btm_vendor_specific_evt
void f_801E638C(Ctx* __restrict c) {
  trace_call(0x801E638Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E638C
  c->r[0]=c->lr; // 801E6390
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E6394
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E6398
  c->r[31]=0u+0x80310000u; // 801E639C
  c->r[31]=c->r[31]+0xFFFF8818u; // 801E63A0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E63A4
  c->r[30]=c->r[4]|c->r[4]; // 801E63A8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E63AC
  c->r[29]=c->r[3]|c->r[3]; // 801E63B0
  c->r[0]=R16(c->r[31]+0x0000063Cu); // 801E63B4
  cmpu(c,0,c->r[0],0x00000012u); // 801E63B8
  if (crb(c,2)) { goto L_801E63E0; } // 801E63BC
  c->r[0]=R8(c->r[31]+0x000027C0u); // 801E63C0
  cmpu(c,0,c->r[0],0x00000004u); // 801E63C4
  if (crb(c,0)) { goto L_801E63E0; } // 801E63C8
  c->r[3]=0u+0x000D0000u; // 801E63CC
  c->r[4]=0u+0x80280000u; // 801E63D0
  c->r[3]=c->r[3]+0x00000003u; // 801E63D4
  c->r[4]=c->r[4]+0xFFFFF2D8u; // 801E63D8
  c->lr=0x801E63E0u; f_801DC730(c); // 801E63DC
L_801E63E0:;
  c->r[12]=R32(c->r[31]+0x0000056Cu); // 801E63E0
  c->r[0]=0u+0x00000000u; // 801E63E4
  W32(c->r[31]+0x0000061Cu,c->r[0]); // 801E63E8
  cmps(c,0,(int32_t)c->r[12],0); // 801E63EC
  W8(c->r[31]+0x00000650u,c->r[0]); // 801E63F0
  if (crb(c,2)) { goto L_801E6408; } // 801E63F4
  c->r[3]=c->r[30]|c->r[30]; // 801E63F8
  c->r[4]=c->r[29]|c->r[29]; // 801E63FC
  c->ctr=c->r[12]; // 801E6400
  if (true) { c->lr=0x801E6408u; dispatch(c,c->ctr); } // 801E6404
L_801E6408:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E6408
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E640C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E6410
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E6414
  c->lr=c->r[0]; // 801E6418
  c->r[1]=c->r[1]+0x00000020u; // 801E641C
  return; // 801E6420
}

// BTM_WritePageTimeout
void f_801E6424(Ctx* __restrict c) {
  trace_call(0x801E6424u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E6424
  c->r[0]=c->lr; // 801E6428
  c->r[4]=0u+0x80310000u; // 801E642C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E6430
  c->r[4]=c->r[4]+0xFFFF8818u; // 801E6434
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E6438
  c->r[31]=c->r[3]|c->r[3]; // 801E643C
  c->r[0]=R8(c->r[4]+0x000027C0u); // 801E6440
  cmpu(c,0,c->r[0],0x00000004u); // 801E6444
  if (crb(c,0)) { goto L_801E6464; } // 801E6448
  c->r[3]=0u+0x000D0000u; // 801E644C
  c->r[4]=0u+0x80280000u; // 801E6450
  c->r[5]=c->r[31]|c->r[31]; // 801E6454
  c->r[3]=c->r[3]+0x00000003u; // 801E6458
  c->r[4]=c->r[4]+0xFFFFF318u; // 801E645C
  c->lr=0x801E6464u; f_801DC750(c); // 801E6460
L_801E6464:;
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)625); // 801E6464
  c->r[3]=0u+0x10620000u; // 801E6468
  c->r[4]=0u+0x80310000u; // 801E646C
  c->r[3]=c->r[3]+0x00004DD3u; // 801E6470
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 801E6474
  c->r[4]=c->r[4]+0xFFFF8818u; // 801E6478
  c->r[3]=0u+0x00000002u; // 801E647C
  c->r[0]=sraw(c,c->r[0],6); // 801E6480
  c->r[5]=rotl(c->r[0],1)&0x00000001u; // 801E6484
  c->r[0]=c->r[0]+c->r[5]; // 801E6488
  W16(c->r[4]+0x0000064Cu,c->r[0]); // 801E648C
  c->lr=0x801E6494u; f_801D9B80(c); // 801E6490
  cmps(c,0,(int32_t)c->r[3],0); // 801E6494
  if (crb(c,2)) { goto L_801E64AC; } // 801E6498
  c->r[4]=c->r[31]|c->r[31]; // 801E649C
  c->lr=0x801E64A4u; f_801F116C(c); // 801E64A0
  c->r[3]=0u+0x00000000u; // 801E64A4
  goto L_801E64B0; // 801E64A8
L_801E64AC:;
  c->r[3]=0u+0x00000003u; // 801E64AC
L_801E64B0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E64B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E64B4
  c->lr=c->r[0]; // 801E64B8
  c->r[1]=c->r[1]+0x00000010u; // 801E64BC
  return; // 801E64C0
}

// BTM_ReadStoredLinkKey
void f_801E64C4(Ctx* __restrict c) {
  trace_call(0x801E64C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E64C4
  c->r[0]=c->lr; // 801E64C8
  c->r[5]=0u+0x80310000u; // 801E64CC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E64D0
  c->r[5]=c->r[5]+0xFFFF8818u; // 801E64D4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E64D8
  c->r[31]=0u+0x00000000u; // 801E64DC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E64E0
  c->r[30]=c->r[4]|c->r[4]; // 801E64E4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E64E8
  c->r[29]=c->r[3]|c->r[3]; // 801E64EC
  c->r[0]=R32(c->r[5]+0x00000570u); // 801E64F0
  cmps(c,0,(int32_t)c->r[0],0); // 801E64F4
  if (crb(c,2)) { goto L_801E6504; } // 801E64F8
  c->r[3]=0u+0x00000002u; // 801E64FC
  goto L_801E6580; // 801E6500
L_801E6504:;
  cmps(c,0,(int32_t)c->r[3],0); // 801E6504
  if (!crb(c,2)) { goto L_801E6514; } // 801E6508
  c->r[31]=0u+0x00000001u; // 801E650C
  c->r[29]=c->r[1]+0x00000008u; // 801E6510
L_801E6514:;
  c->r[3]=0u+0x80310000u; // 801E6514
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E6518
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801E651C
  cmpu(c,0,c->r[0],0x00000004u); // 801E6520
  if (crb(c,0)) { goto L_801E654C; } // 801E6524
  cmps(c,0,(int32_t)c->r[31],0); // 801E6528
  c->r[3]=0u+0x000D0000u; // 801E652C
  c->r[4]=0u+0x80280000u; // 801E6530
  c->r[5]=c->r[13]+0xFFFFABD4u; // 801E6534
  c->r[3]=c->r[3]+0x00000003u; // 801E6538
  c->r[4]=c->r[4]+0xFFFFF388u; // 801E653C
  if (crb(c,2)) { goto L_801E6548; } // 801E6540
  c->r[5]=c->r[13]+0xFFFFABCCu; // 801E6544
L_801E6548:;
  c->lr=0x801E654Cu; f_801DC750(c); // 801E6548
L_801E654C:;
  c->r[3]=0u+0x00000002u; // 801E654C
  c->lr=0x801E6554u; f_801D9B80(c); // 801E6550
  cmps(c,0,(int32_t)c->r[3],0); // 801E6554
  if (crb(c,2)) { goto L_801E657C; } // 801E6558
  c->r[6]=0u+0x80310000u; // 801E655C
  c->r[4]=c->r[29]|c->r[29]; // 801E6560
  c->r[6]=c->r[6]+0xFFFF8818u; // 801E6564
  c->r[5]=c->r[31]|c->r[31]; // 801E6568
  W32(c->r[6]+0x00000570u,c->r[30]); // 801E656C
  c->lr=0x801E6574u; f_801F0D5C(c); // 801E6570
  c->r[3]=0u+0x00000000u; // 801E6574
  goto L_801E6580; // 801E6578
L_801E657C:;
  c->r[3]=0u+0x00000003u; // 801E657C
L_801E6580:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E6580
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E6584
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E6588
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E658C
  c->lr=c->r[0]; // 801E6590
  c->r[1]=c->r[1]+0x00000020u; // 801E6594
  return; // 801E6598
}

// BTM_WriteStoredLinkKey
void f_801E659C(Ctx* __restrict c) {
  trace_call(0x801E659Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E659C
  c->r[0]=c->lr; // 801E65A0
  c->r[7]=0u+0x80310000u; // 801E65A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E65A8
  c->r[7]=c->r[7]+0xFFFF8818u; // 801E65AC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E65B0
  c->r[31]=c->r[6]|c->r[6]; // 801E65B4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E65B8
  c->r[30]=c->r[5]|c->r[5]; // 801E65BC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E65C0
  c->r[29]=c->r[4]|c->r[4]; // 801E65C4
  W32(c->r[1]+0x00000010u,c->r[28]); // 801E65C8
  c->r[28]=c->r[3]|c->r[3]; // 801E65CC
  c->r[0]=R32(c->r[7]+0x00000570u); // 801E65D0
  cmps(c,0,(int32_t)c->r[0],0); // 801E65D4
  if (crb(c,2)) { goto L_801E65E4; } // 801E65D8
  c->r[3]=0u+0x00000002u; // 801E65DC
  goto L_801E664C; // 801E65E0
L_801E65E4:;
  c->r[0]=R8(c->r[7]+0x000027C0u); // 801E65E4
  cmpu(c,0,c->r[0],0x00000004u); // 801E65E8
  if (crb(c,0)) { goto L_801E6608; } // 801E65EC
  c->r[3]=0u+0x000D0000u; // 801E65F0
  c->r[4]=0u+0x80280000u; // 801E65F4
  c->r[5]=c->r[28]|c->r[28]; // 801E65F8
  c->r[3]=c->r[3]+0x00000003u; // 801E65FC
  c->r[4]=c->r[4]+0xFFFFF3B4u; // 801E6600
  c->lr=0x801E6608u; f_801DC750(c); // 801E6604
L_801E6608:;
  cmpu(c,0,c->r[28],0x0000000Bu); // 801E6608
  if (!crb(c,1)) { goto L_801E6614; } // 801E660C
  c->r[28]=0u+0x0000000Bu; // 801E6610
L_801E6614:;
  c->r[3]=0u+0x00000002u; // 801E6614
  c->lr=0x801E661Cu; f_801D9B80(c); // 801E6618
  cmps(c,0,(int32_t)c->r[3],0); // 801E661C
  if (crb(c,2)) { goto L_801E6648; } // 801E6620
  c->r[6]=0u+0x80310000u; // 801E6624
  c->r[4]=c->r[28]|c->r[28]; // 801E6628
  c->r[6]=c->r[6]+0xFFFF8818u; // 801E662C
  c->r[5]=c->r[29]|c->r[29]; // 801E6630
  W32(c->r[6]+0x00000570u,c->r[31]); // 801E6634
  c->r[6]=c->r[30]|c->r[30]; // 801E6638
  c->lr=0x801E6640u; f_801F0DBC(c); // 801E663C
  c->r[3]=0u+0x00000000u; // 801E6640
  goto L_801E664C; // 801E6644
L_801E6648:;
  c->r[3]=0u+0x00000003u; // 801E6648
L_801E664C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E664C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E6650
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E6654
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E6658
  c->r[28]=R32(c->r[1]+0x00000010u); // 801E665C
  c->lr=c->r[0]; // 801E6660
  c->r[1]=c->r[1]+0x00000020u; // 801E6664
  return; // 801E6668
}

// BTM_DeleteStoredLinkKey
void f_801E666C(Ctx* __restrict c) {
  trace_call(0x801E666Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E666C
  c->r[0]=c->lr; // 801E6670
  c->r[5]=0u+0x80310000u; // 801E6674
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E6678
  c->r[5]=c->r[5]+0xFFFF8818u; // 801E667C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E6680
  c->r[31]=0u+0x00000000u; // 801E6684
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E6688
  c->r[30]=c->r[4]|c->r[4]; // 801E668C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E6690
  c->r[29]=c->r[3]|c->r[3]; // 801E6694
  c->r[0]=R32(c->r[5]+0x00000570u); // 801E6698
  cmps(c,0,(int32_t)c->r[0],0); // 801E669C
  if (crb(c,2)) { goto L_801E66AC; } // 801E66A0
  c->r[3]=0u+0x00000002u; // 801E66A4
  goto L_801E6720; // 801E66A8
L_801E66AC:;
  cmps(c,0,(int32_t)c->r[3],0); // 801E66AC
  if (!crb(c,2)) { goto L_801E66BC; } // 801E66B0
  c->r[31]=0u+0x00000001u; // 801E66B4
  c->r[29]=c->r[1]+0x00000008u; // 801E66B8
L_801E66BC:;
  c->r[3]=0u+0x80310000u; // 801E66BC
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E66C0
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801E66C4
  cmpu(c,0,c->r[0],0x00000004u); // 801E66C8
  if (crb(c,0)) { goto L_801E66F4; } // 801E66CC
  cmps(c,0,(int32_t)c->r[31],0); // 801E66D0
  c->r[3]=0u+0x000D0000u; // 801E66D4
  c->r[4]=0u+0x80280000u; // 801E66D8
  c->r[5]=c->r[13]+0xFFFFABD4u; // 801E66DC
  c->r[3]=c->r[3]+0x00000003u; // 801E66E0
  c->r[4]=c->r[4]+0xFFFFF3E0u; // 801E66E4
  if (crb(c,2)) { goto L_801E66F0; } // 801E66E8
  c->r[5]=c->r[13]+0xFFFFABCCu; // 801E66EC
L_801E66F0:;
  c->lr=0x801E66F4u; f_801DC750(c); // 801E66F0
L_801E66F4:;
  c->r[5]=0u+0x80310000u; // 801E66F4
  c->r[3]=c->r[29]|c->r[29]; // 801E66F8
  c->r[5]=c->r[5]+0xFFFF8818u; // 801E66FC
  c->r[4]=c->r[31]|c->r[31]; // 801E6700
  W32(c->r[5]+0x00000570u,c->r[30]); // 801E6704
  c->lr=0x801E670Cu; f_801F0F7C(c); // 801E6708
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801E670C
  if (!crb(c,2)) { goto L_801E671C; } // 801E6710
  c->r[3]=0u+0x00000003u; // 801E6714
  goto L_801E6720; // 801E6718
L_801E671C:;
  c->r[3]=0u+0x00000000u; // 801E671C
L_801E6720:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E6720
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E6724
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E6728
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E672C
  c->lr=c->r[0]; // 801E6730
  c->r[1]=c->r[1]+0x00000020u; // 801E6734
  return; // 801E6738
}

// btm_read_stored_link_key_complete
void f_801E673C(Ctx* __restrict c) {
  trace_call(0x801E673Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E673C
  c->r[0]=c->lr; // 801E6740
  c->r[4]=0u+0x80310000u; // 801E6744
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E6748
  c->r[4]=c->r[4]+0xFFFF8818u; // 801E674C
  c->r[0]=0u+0x00000000u; // 801E6750
  c->r[12]=R32(c->r[4]+0x00000570u); // 801E6754
  cmps(c,0,(int32_t)c->r[12],0); // 801E6758
  W32(c->r[4]+0x00000570u,c->r[0]); // 801E675C
  if (crb(c,2)) { goto L_801E67A8; } // 801E6760
  c->r[0]=0u+0x00000002u; // 801E6764
  W8(c->r[1]+0x00000008u,c->r[0]); // 801E6768
  c->r[0]=R8(c->r[3]+0x00000000u); // 801E676C
  W8(c->r[1]+0x00000009u,c->r[0]); // 801E6770
  c->r[0]=R8(c->r[3]+0x00000002u); // 801E6774
  c->r[4]=R8(c->r[3]+0x00000001u); // 801E6778
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801E677C
  c->r[0]=c->r[4]+c->r[0]; // 801E6780
  W16(c->r[1]+0x0000000Au,c->r[0]); // 801E6784
  c->r[0]=R8(c->r[3]+0x00000004u); // 801E6788
  c->r[4]=R8(c->r[3]+0x00000003u); // 801E678C
  c->r[3]=c->r[1]+0x00000008u; // 801E6790
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801E6794
  c->r[0]=c->r[4]+c->r[0]; // 801E6798
  W16(c->r[1]+0x0000000Cu,c->r[0]); // 801E679C
  c->ctr=c->r[12]; // 801E67A0
  if (true) { c->lr=0x801E67A8u; dispatch(c,c->ctr); } // 801E67A4
L_801E67A8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E67A8
  c->lr=c->r[0]; // 801E67AC
  c->r[1]=c->r[1]+0x00000010u; // 801E67B0
  return; // 801E67B4
}

// btm_write_stored_link_key_complete
void f_801E67B8(Ctx* __restrict c) {
  trace_call(0x801E67B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E67B8
  c->r[0]=c->lr; // 801E67BC
  c->r[4]=0u+0x80310000u; // 801E67C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E67C4
  c->r[4]=c->r[4]+0xFFFF8818u; // 801E67C8
  c->r[0]=0u+0x00000000u; // 801E67CC
  c->r[12]=R32(c->r[4]+0x00000570u); // 801E67D0
  cmps(c,0,(int32_t)c->r[12],0); // 801E67D4
  W32(c->r[4]+0x00000570u,c->r[0]); // 801E67D8
  if (crb(c,2)) { goto L_801E6804; } // 801E67DC
  c->r[0]=0u+0x00000003u; // 801E67E0
  W8(c->r[1]+0x00000008u,c->r[0]); // 801E67E4
  c->r[0]=R8(c->r[3]+0x00000000u); // 801E67E8
  W8(c->r[1]+0x00000009u,c->r[0]); // 801E67EC
  c->r[0]=R8(c->r[3]+0x00000001u); // 801E67F0
  c->r[3]=c->r[1]+0x00000008u; // 801E67F4
  W8(c->r[1]+0x0000000Au,c->r[0]); // 801E67F8
  c->ctr=c->r[12]; // 801E67FC
  if (true) { c->lr=0x801E6804u; dispatch(c,c->ctr); } // 801E6800
L_801E6804:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E6804
  c->lr=c->r[0]; // 801E6808
  c->r[1]=c->r[1]+0x00000010u; // 801E680C
  return; // 801E6810
}

// btm_delete_stored_link_key_complete
void f_801E6814(Ctx* __restrict c) {
  trace_call(0x801E6814u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E6814
  c->r[0]=c->lr; // 801E6818
  c->r[4]=0u+0x80310000u; // 801E681C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E6820
  c->r[4]=c->r[4]+0xFFFF8818u; // 801E6824
  c->r[0]=0u+0x00000000u; // 801E6828
  c->r[12]=R32(c->r[4]+0x00000570u); // 801E682C
  cmps(c,0,(int32_t)c->r[12],0); // 801E6830
  W32(c->r[4]+0x00000570u,c->r[0]); // 801E6834
  if (crb(c,2)) { goto L_801E686C; } // 801E6838
  c->r[0]=0u+0x00000004u; // 801E683C
  W8(c->r[1]+0x00000008u,c->r[0]); // 801E6840
  c->r[0]=R8(c->r[3]+0x00000000u); // 801E6844
  W8(c->r[1]+0x00000009u,c->r[0]); // 801E6848
  c->r[0]=R8(c->r[3]+0x00000002u); // 801E684C
  c->r[4]=R8(c->r[3]+0x00000001u); // 801E6850
  c->r[3]=c->r[1]+0x00000008u; // 801E6854
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801E6858
  c->r[0]=c->r[4]+c->r[0]; // 801E685C
  W16(c->r[1]+0x0000000Au,c->r[0]); // 801E6860
  c->ctr=c->r[12]; // 801E6864
  if (true) { c->lr=0x801E686Cu; dispatch(c,c->ctr); } // 801E6868
L_801E686C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E686C
  c->lr=c->r[0]; // 801E6870
  c->r[1]=c->r[1]+0x00000010u; // 801E6874
  return; // 801E6878
}

// btm_return_link_keys_evt
void f_801E687C(Ctx* __restrict c) {
  trace_call(0x801E687Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E687C
  c->r[0]=c->lr; // 801E6880
  c->r[4]=0u+0x80310000u; // 801E6884
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E6888
  c->r[4]=c->r[4]+0xFFFF8818u; // 801E688C
  c->r[12]=R32(c->r[4]+0x00000570u); // 801E6890
  cmps(c,0,(int32_t)c->r[12],0); // 801E6894
  if (crb(c,2)) { goto L_801E69F8; } // 801E6898
  c->r[5]=c->r[3]+0x00000002u; // 801E689C
  c->r[4]=0u+0x00000000u; // 801E68A0
  goto L_801E69E0; // 801E68A4
L_801E68A8:;
  c->r[11]=R8(c->r[5]+0x00000000u); // 801E68A8
  c->r[4]=c->r[4]+0x00000001u; // 801E68AC
  c->r[10]=R8(c->r[5]+0x00000001u); // 801E68B0
  c->r[9]=R8(c->r[5]+0x00000002u); // 801E68B4
  c->r[8]=R8(c->r[5]+0x00000003u); // 801E68B8
  c->r[7]=R8(c->r[5]+0x00000004u); // 801E68BC
  c->r[6]=R8(c->r[5]+0x00000005u); // 801E68C0
  c->r[0]=R8(c->r[5]+0x00000006u); // 801E68C4
  W8(c->r[1]+0x00000017u,c->r[0]); // 801E68C8
  c->r[0]=R8(c->r[5]+0x00000007u); // 801E68CC
  W8(c->r[1]+0x00000016u,c->r[0]); // 801E68D0
  c->r[0]=R8(c->r[5]+0x00000008u); // 801E68D4
  W8(c->r[1]+0x00000015u,c->r[0]); // 801E68D8
  c->r[0]=R8(c->r[5]+0x00000009u); // 801E68DC
  W8(c->r[1]+0x00000014u,c->r[0]); // 801E68E0
  c->r[0]=R8(c->r[5]+0x0000000Au); // 801E68E4
  W8(c->r[1]+0x00000013u,c->r[0]); // 801E68E8
  c->r[0]=R8(c->r[5]+0x0000000Bu); // 801E68EC
  W8(c->r[1]+0x00000012u,c->r[0]); // 801E68F0
  c->r[0]=R8(c->r[5]+0x0000000Cu); // 801E68F4
  W8(c->r[1]+0x00000011u,c->r[0]); // 801E68F8
  c->r[0]=R8(c->r[5]+0x0000000Du); // 801E68FC
  W8(c->r[1]+0x00000010u,c->r[0]); // 801E6900
  c->r[0]=R8(c->r[5]+0x0000000Eu); // 801E6904
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 801E6908
  c->r[0]=R8(c->r[5]+0x0000000Fu); // 801E690C
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 801E6910
  c->r[0]=R8(c->r[5]+0x00000010u); // 801E6914
  W8(c->r[1]+0x0000000Du,c->r[0]); // 801E6918
  c->r[0]=R8(c->r[5]+0x00000011u); // 801E691C
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801E6920
  c->r[0]=R8(c->r[5]+0x00000012u); // 801E6924
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 801E6928
  c->r[0]=R8(c->r[5]+0x00000013u); // 801E692C
  W8(c->r[1]+0x0000000Au,c->r[0]); // 801E6930
  c->r[0]=R8(c->r[5]+0x00000014u); // 801E6934
  W8(c->r[1]+0x00000009u,c->r[0]); // 801E6938
  c->r[0]=R8(c->r[5]+0x00000015u); // 801E693C
  W8(c->r[1]+0x00000008u,c->r[0]); // 801E6940
  W8(c->r[5]+0x00000000u,c->r[6]); // 801E6944
  W8(c->r[5]+0x00000001u,c->r[7]); // 801E6948
  W8(c->r[5]+0x00000002u,c->r[8]); // 801E694C
  W8(c->r[5]+0x00000003u,c->r[9]); // 801E6950
  W8(c->r[5]+0x00000004u,c->r[10]); // 801E6954
  W8(c->r[5]+0x00000005u,c->r[11]); // 801E6958
  c->r[0]=R8(c->r[1]+0x00000008u); // 801E695C
  W8(c->r[5]+0x00000006u,c->r[0]); // 801E6960
  c->r[0]=R8(c->r[1]+0x00000009u); // 801E6964
  W8(c->r[5]+0x00000007u,c->r[0]); // 801E6968
  c->r[0]=R8(c->r[1]+0x0000000Au); // 801E696C
  W8(c->r[5]+0x00000008u,c->r[0]); // 801E6970
  c->r[0]=R8(c->r[1]+0x0000000Bu); // 801E6974
  W8(c->r[5]+0x00000009u,c->r[0]); // 801E6978
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 801E697C
  W8(c->r[5]+0x0000000Au,c->r[0]); // 801E6980
  c->r[0]=R8(c->r[1]+0x0000000Du); // 801E6984
  W8(c->r[5]+0x0000000Bu,c->r[0]); // 801E6988
  c->r[0]=R8(c->r[1]+0x0000000Eu); // 801E698C
  W8(c->r[5]+0x0000000Cu,c->r[0]); // 801E6990
  c->r[0]=R8(c->r[1]+0x0000000Fu); // 801E6994
  W8(c->r[5]+0x0000000Du,c->r[0]); // 801E6998
  c->r[0]=R8(c->r[1]+0x00000010u); // 801E699C
  W8(c->r[5]+0x0000000Eu,c->r[0]); // 801E69A0
  c->r[0]=R8(c->r[1]+0x00000011u); // 801E69A4
  W8(c->r[5]+0x0000000Fu,c->r[0]); // 801E69A8
  c->r[0]=R8(c->r[1]+0x00000012u); // 801E69AC
  W8(c->r[5]+0x00000010u,c->r[0]); // 801E69B0
  c->r[0]=R8(c->r[1]+0x00000013u); // 801E69B4
  W8(c->r[5]+0x00000011u,c->r[0]); // 801E69B8
  c->r[0]=R8(c->r[1]+0x00000014u); // 801E69BC
  W8(c->r[5]+0x00000012u,c->r[0]); // 801E69C0
  c->r[0]=R8(c->r[1]+0x00000015u); // 801E69C4
  W8(c->r[5]+0x00000013u,c->r[0]); // 801E69C8
  c->r[0]=R8(c->r[1]+0x00000016u); // 801E69CC
  W8(c->r[5]+0x00000014u,c->r[0]); // 801E69D0
  c->r[0]=R8(c->r[1]+0x00000017u); // 801E69D4
  W8(c->r[5]+0x00000015u,c->r[0]); // 801E69D8
  c->r[5]=c->r[5]+0x00000016u; // 801E69DC
L_801E69E0:;
  c->r[0]=R8(c->r[3]+0x00000001u); // 801E69E0
  c->r[6]=rotl(c->r[4],0)&0x000000FFu; // 801E69E4
  cmpu(c,0,c->r[6],c->r[0]); // 801E69E8
  if (crb(c,0)) { IRQCHK(c); goto L_801E68A8; } // 801E69EC
  c->ctr=c->r[12]; // 801E69F0
  if (true) { c->lr=0x801E69F8u; dispatch(c,c->ctr); } // 801E69F4
L_801E69F8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E69F8
  c->lr=c->r[0]; // 801E69FC
  c->r[1]=c->r[1]+0x00000020u; // 801E6A00
  return; // 801E6A04
}

// btm_report_device_status
void f_801E6A08(Ctx* __restrict c) {
  trace_call(0x801E6A08u);
  c->r[4]=0u+0x80310000u; // 801E6A08
  c->r[4]=c->r[4]+0xFFFF8818u; // 801E6A0C
  c->r[12]=R32(c->r[4]+0x00000568u); // 801E6A10
  cmps(c,0,(int32_t)c->r[12],0); // 801E6A14
  if (crb(c,2)) return; // 801E6A18
  c->ctr=c->r[12]; // 801E6A1C
  if (true) { dispatch(c,c->ctr); return; } // 801E6A20
  return; // 801E6A24
}

// btm_discovery_db_init
void f_801E6A28(Ctx* __restrict c) {
  trace_call(0x801E6A28u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E6A28
  c->r[0]=c->lr; // 801E6A2C
  c->r[4]=0u+0x00000000u; // 801E6A30
  c->r[5]=0u+0x00001020u; // 801E6A34
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E6A38
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E6A3C
  c->r[31]=0u+0x80310000u; // 801E6A40
  c->r[31]=c->r[31]+0xFFFF8818u; // 801E6A44
  c->r[0]=c->r[31]+0x000006D4u; // 801E6A48
  W32(c->r[31]+0x00001678u,c->r[0]); // 801E6A4C
  c->r[3]=c->r[31]+0x00000658u; // 801E6A50
  c->lr=0x801E6A58u; f_800046B4(c); // 801E6A54
  c->r[3]=0u+0x00000001u; // 801E6A58
  c->r[4]=0u+0x00000002u; // 801E6A5C
  c->r[0]=0u+0x00001002u; // 801E6A60
  W16(c->r[31]+0x00000670u,c->r[3]); // 801E6A64
  c->r[3]=R32(c->r[31]+0x00001678u); // 801E6A68
  c->r[6]=c->r[31]+0x00000674u; // 801E6A6C
  W16(c->r[31]+0x00000674u,c->r[4]); // 801E6A70
  c->r[4]=0u+0x00000FA0u; // 801E6A74
  c->r[5]=0u+0x00000001u; // 801E6A78
  c->r[7]=0u+0x00000000u; // 801E6A7C
  W16(c->r[31]+0x00000678u,c->r[0]); // 801E6A80
  c->r[8]=0u+0x00000000u; // 801E6A84
  c->lr=0x801E6A8Cu; f_8020164C(c); // 801E6A88
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E6A8C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E6A90
  c->lr=c->r[0]; // 801E6A94
  c->r[1]=c->r[1]+0x00000010u; // 801E6A98
  return; // 801E6A9C
}

// btm_discovery_db_reset
void f_801E6AA0(Ctx* __restrict c) {
  trace_call(0x801E6AA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E6AA0
  c->r[0]=c->lr; // 801E6AA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E6AA8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E6AAC
  c->r[31]=0u+0x80310000u; // 801E6AB0
  c->r[31]=c->r[31]+0xFFFF8818u; // 801E6AB4
  c->r[3]=c->r[31]+0x00000658u; // 801E6AB8
  c->lr=0x801E6AC0u; f_801DCDB0(c); // 801E6ABC
  c->r[0]=R8(c->r[31]+0x00001674u); // 801E6AC0
  cmps(c,0,(int32_t)c->r[0],0); // 801E6AC4
  if (crb(c,2)) { goto L_801E6AF0; } // 801E6AC8
  c->r[12]=R32(c->r[31]+0x000006D0u); // 801E6ACC
  c->r[0]=0u+0x00000000u; // 801E6AD0
  W8(c->r[31]+0x00001674u,c->r[0]); // 801E6AD4
  cmps(c,0,(int32_t)c->r[12],0); // 801E6AD8
  W32(c->r[31]+0x000006D0u,c->r[0]); // 801E6ADC
  if (crb(c,2)) { goto L_801E6AF0; } // 801E6AE0
  c->r[3]=0u+0x00000000u; // 801E6AE4
  c->ctr=c->r[12]; // 801E6AE8
  if (true) { c->lr=0x801E6AF0u; dispatch(c,c->ctr); } // 801E6AEC
L_801E6AF0:;
  c->r[31]=0u+0x80310000u; // 801E6AF0
  c->r[4]=0u+0x00000000u; // 801E6AF4
  c->r[31]=c->r[31]+0xFFFF8818u; // 801E6AF8
  c->r[5]=0u+0x00001020u; // 801E6AFC
  c->r[0]=c->r[31]+0x000006D4u; // 801E6B00
  W32(c->r[31]+0x00001678u,c->r[0]); // 801E6B04
  c->r[3]=c->r[31]+0x00000658u; // 801E6B08
  c->lr=0x801E6B10u; f_800046B4(c); // 801E6B0C
  c->r[3]=0u+0x00000001u; // 801E6B10
  c->r[4]=0u+0x00000002u; // 801E6B14
  c->r[0]=0u+0x00001002u; // 801E6B18
  W16(c->r[31]+0x00000670u,c->r[3]); // 801E6B1C
  c->r[3]=R32(c->r[31]+0x00001678u); // 801E6B20
  c->r[6]=c->r[31]+0x00000674u; // 801E6B24
  W16(c->r[31]+0x00000674u,c->r[4]); // 801E6B28
  c->r[4]=0u+0x00000FA0u; // 801E6B2C
  c->r[5]=0u+0x00000001u; // 801E6B30
  c->r[7]=0u+0x00000000u; // 801E6B34
  W16(c->r[31]+0x00000678u,c->r[0]); // 801E6B38
  c->r[8]=0u+0x00000000u; // 801E6B3C
  c->lr=0x801E6B44u; f_8020164C(c); // 801E6B40
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E6B44
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E6B48
  c->lr=c->r[0]; // 801E6B4C
  c->r[1]=c->r[1]+0x00000010u; // 801E6B50
  return; // 801E6B54
}

// btm_discovery_timeout
void f_801E6B58(Ctx* __restrict c) {
  trace_call(0x801E6B58u);
  return; // 801E6B58
}

// BTM_SetDiscoverability
void f_801E6B5C(Ctx* __restrict c) {
  trace_call(0x801E6B5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E6B5C
  c->r[0]=c->lr; // 801E6B60
  W32(c->r[1]+0x00000034u,c->r[0]); // 801E6B64
  c->r[11]=c->r[1]+0x00000030u; // 801E6B68
  c->lr=0x801E6B70u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E6B6C
  cmps(c,0,(int32_t)c->r[3],0); // 801E6B70
  c->r[31]=c->r[3]|c->r[3]; // 801E6B74
  c->r[27]=c->r[4]|c->r[4]; // 801E6B78
  c->r[28]=c->r[5]|c->r[5]; // 801E6B7C
  c->r[30]=0u+0x00000000u; // 801E6B80
  if (crb(c,2)) { goto L_801E6BA0; } // 801E6B84
  cmpu(c,0,c->r[3],0x00000001u); // 801E6B88
  if (crb(c,2)) { goto L_801E6BA0; } // 801E6B8C
  cmpu(c,0,c->r[3],0x00000002u); // 801E6B90
  if (crb(c,2)) { goto L_801E6BA0; } // 801E6B94
  c->r[3]=0u+0x00000005u; // 801E6B98
  goto L_801E6DC8; // 801E6B9C
L_801E6BA0:;
  c->r[3]=0u+0x80310000u; // 801E6BA0
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E6BA4
  c->r[0]=R8(c->r[3]+0x0000064Eu); // 801E6BA8
  cmpu(c,0,c->r[0],0x00000003u); // 801E6BAC
  if (!crb(c,0)) { goto L_801E6BBC; } // 801E6BB0
  c->r[3]=0u+0x0000000Cu; // 801E6BB4
  goto L_801E6DC8; // 801E6BB8
L_801E6BBC:;
  cmps(c,0,(int32_t)c->r[4],0); // 801E6BBC
  if (!crb(c,2)) { goto L_801E6BC8; } // 801E6BC0
  c->r[27]=0u+0x00000012u; // 801E6BC4
L_801E6BC8:;
  cmps(c,0,(int32_t)c->r[5],0); // 801E6BC8
  if (!crb(c,2)) { goto L_801E6BD4; } // 801E6BCC
  c->r[28]=0u+0x00000800u; // 801E6BD0
L_801E6BD4:;
  c->r[3]=0u+0x80310000u; // 801E6BD4
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E6BD8
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801E6BDC
  cmpu(c,0,c->r[0],0x00000003u); // 801E6BE0
  if (crb(c,0)) { goto L_801E6C08; } // 801E6BE4
  c->r[3]=0u+0x000D0000u; // 801E6BE8
  c->r[4]=0u+0x80280000u; // 801E6BEC
  c->r[5]=c->r[31]|c->r[31]; // 801E6BF0
  c->r[6]=c->r[27]|c->r[27]; // 801E6BF4
  c->r[7]=c->r[28]|c->r[28]; // 801E6BF8
  c->r[3]=c->r[3]+0x00000002u; // 801E6BFC
  c->r[4]=c->r[4]+0xFFFFF418u; // 801E6C00
  c->lr=0x801E6C08u; f_801DC790(c); // 801E6C04
L_801E6C08:;
  cmps(c,0,(int32_t)c->r[31],0); // 801E6C08
  if (crb(c,2)) { goto L_801E6C40; } // 801E6C0C
  cmpu(c,0,c->r[27],0x00000012u); // 801E6C10
  if (crb(c,0)) { goto L_801E6C38; } // 801E6C14
  cmpu(c,0,c->r[27],0x00001000u); // 801E6C18
  if (crb(c,1)) { goto L_801E6C38; } // 801E6C1C
  cmpu(c,0,c->r[28],0x00000012u); // 801E6C20
  if (crb(c,0)) { goto L_801E6C38; } // 801E6C24
  cmpu(c,0,c->r[28],0x00001000u); // 801E6C28
  if (crb(c,1)) { goto L_801E6C38; } // 801E6C2C
  cmpu(c,0,c->r[27],c->r[28]); // 801E6C30
  if (!crb(c,1)) { goto L_801E6C40; } // 801E6C34
L_801E6C38:;
  c->r[3]=0u+0x00000005u; // 801E6C38
  goto L_801E6DC8; // 801E6C3C
L_801E6C40:;
  cmps(c,0,(int32_t)c->r[31],0); // 801E6C40
  if (crb(c,2)) { goto L_801E6CB4; } // 801E6C44
  c->r[3]=0u+0x00000002u; // 801E6C48
  c->lr=0x801E6C50u; f_801D9B80(c); // 801E6C4C
  cmps(c,0,(int32_t)c->r[3],0); // 801E6C50
  c->r[29]=c->r[3]|c->r[3]; // 801E6C54
  if (crb(c,2)) { goto L_801E6CAC; } // 801E6C58
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 801E6C5C
  if (crb(c,2)) { goto L_801E6C98; } // 801E6C60
  c->r[3]=c->r[1]+0x0000000Cu; // 801E6C64
  c->r[4]=c->r[2]+0xFFFFA294u; // 801E6C68
  c->r[5]=0u+0x00000003u; // 801E6C6C
  c->lr=0x801E6C74u; f_80004364(c); // 801E6C70
  c->r[3]=c->r[1]+0x0000000Fu; // 801E6C74
  c->r[4]=c->r[2]+0xFFFFA290u; // 801E6C78
  c->r[5]=0u+0x00000003u; // 801E6C7C
  c->lr=0x801E6C84u; f_80004364(c); // 801E6C80
  c->r[3]=c->r[29]|c->r[29]; // 801E6C84
  c->r[5]=c->r[1]+0x0000000Cu; // 801E6C88
  c->r[4]=0u+0x00000002u; // 801E6C8C
  c->lr=0x801E6C94u; f_801F151C(c); // 801E6C90
  goto L_801E6CA4; // 801E6C94
L_801E6C98:;
  c->r[4]=0u+0x00000001u; // 801E6C98
  c->r[5]=c->r[2]+0xFFFFA290u; // 801E6C9C
  c->lr=0x801E6CA4u; f_801F151C(c); // 801E6CA0
L_801E6CA4:;
  c->r[30]=c->r[30]|0x00000001u; // 801E6CA4
  goto L_801E6CB4; // 801E6CA8
L_801E6CAC:;
  c->r[3]=0u+0x00000003u; // 801E6CAC
  goto L_801E6DC8; // 801E6CB0
L_801E6CB4:;
  c->r[3]=0u+0x80310000u; // 801E6CB4
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E6CB8
  c->r[0]=R16(c->r[3]+0x000016A0u); // 801E6CBC
  cmpu(c,0,c->r[27],c->r[0]); // 801E6CC0
  if (!crb(c,2)) { goto L_801E6CD4; } // 801E6CC4
  c->r[0]=R16(c->r[3]+0x000016A2u); // 801E6CC8
  cmpu(c,0,c->r[28],c->r[0]); // 801E6CCC
  if (crb(c,2)) { goto L_801E6D0C; } // 801E6CD0
L_801E6CD4:;
  c->r[3]=0u+0x00000002u; // 801E6CD4
  c->lr=0x801E6CDCu; f_801D9B80(c); // 801E6CD8
  cmps(c,0,(int32_t)c->r[3],0); // 801E6CDC
  if (crb(c,2)) { goto L_801E6D04; } // 801E6CE0
  c->r[6]=0u+0x80310000u; // 801E6CE4
  c->r[4]=c->r[28]|c->r[28]; // 801E6CE8
  c->r[6]=c->r[6]+0xFFFF8818u; // 801E6CEC
  c->r[5]=c->r[27]|c->r[27]; // 801E6CF0
  W16(c->r[6]+0x000016A0u,c->r[27]); // 801E6CF4
  W16(c->r[6]+0x000016A2u,c->r[28]); // 801E6CF8
  c->lr=0x801E6D00u; f_801F1218(c); // 801E6CFC
  goto L_801E6D0C; // 801E6D00
L_801E6D04:;
  c->r[3]=0u+0x00000003u; // 801E6D04
  goto L_801E6DC8; // 801E6D08
L_801E6D0C:;
  c->r[3]=0u+0x00000002u; // 801E6D0C
  c->lr=0x801E6D14u; f_801D9B80(c); // 801E6D10
  cmps(c,0,(int32_t)c->r[3],0); // 801E6D14
  if (crb(c,2)) { goto L_801E6D50; } // 801E6D18
  c->r[4]=0u+0x80310000u; // 801E6D1C
  c->r[4]=c->r[4]+0xFFFF8818u; // 801E6D20
  c->r[0]=R16(c->r[4]+0x0000169Au); // 801E6D24
  cmps(c,0,(int32_t)c->r[0],0); // 801E6D28
  if (crb(c,2)) { goto L_801E6D38; } // 801E6D2C
  c->r[0]=c->r[30]|0x00000002u; // 801E6D30
  c->r[30]=rotl(c->r[0],0)&0x000000FFu; // 801E6D34
L_801E6D38:;
  c->r[5]=0u+0x80310000u; // 801E6D38
  c->r[4]=rotl(c->r[30],0)&0x000000FFu; // 801E6D3C
  c->r[5]=c->r[5]+0xFFFF8818u; // 801E6D40
  W16(c->r[5]+0x00001698u,c->r[31]); // 801E6D44
  c->lr=0x801E6D4Cu; f_801F11A4(c); // 801E6D48
  goto L_801E6D58; // 801E6D4C
L_801E6D50:;
  c->r[3]=0u+0x00000003u; // 801E6D50
  goto L_801E6DC8; // 801E6D54
L_801E6D58:;
  c->lr=0x801E6D5Cu; f_801E61B4(c); // 801E6D58
  c->r[4]=R8(c->r[3]+0x00000000u); // 801E6D5C
  c->r[6]=rotl(c->r[31],0)&0x00000001u; // 801E6D60
  c->r[5]=R8(c->r[3]+0x00000001u); // 801E6D64
  c->r[4]=rotl(c->r[4],8)&0x0000FF00u; // 801E6D68
  c->r[0]=rotl(c->r[5],0)&0x000000E0u; // 801E6D6C
  c->r[4]=c->r[4]+c->r[0]; // 801E6D70
  c->r[0]=rotl(c->r[4],27)&0x00000001u; // 801E6D74
  c->r[0]=c->r[6]^c->r[0]; cr0(c,c->r[0]); // 801E6D78
  c->r[4]=rotl(c->r[4],0)&0x0000FFFFu; // 801E6D7C
  if (crb(c,2)) { goto L_801E6DC4; } // 801E6D80
  c->r[3]=R8(c->r[3]+0x00000002u); // 801E6D84
  cmps(c,0,(int32_t)c->r[6],0); // 801E6D88
  c->r[0]=rotl(c->r[4],0)&0xFFFFFFDFu; // 801E6D8C
  c->r[5]=rotl(c->r[5],0)&0x0000001Fu; // 801E6D90
  c->r[6]=rotl(c->r[3],0)&0x000000FCu; // 801E6D94
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801E6D98
  if (crb(c,2)) { goto L_801E6DA4; } // 801E6D9C
  c->r[0]=c->r[4]|0x00000020u; // 801E6DA0
L_801E6DA4:;
  c->r[3]=rotl(c->r[0],0)&0x000000E0u; // 801E6DA4
  c->r[0]=rotl(c->r[0],24)&0x000000FFu; // 801E6DA8
  c->r[4]=c->r[5]+c->r[3]; // 801E6DAC
  W8(c->r[1]+0x0000000Au,c->r[6]); // 801E6DB0
  c->r[3]=c->r[1]+0x00000008u; // 801E6DB4
  W8(c->r[1]+0x00000009u,c->r[4]); // 801E6DB8
  W8(c->r[1]+0x00000008u,c->r[0]); // 801E6DBC
  c->lr=0x801E6DC4u; f_801E6134(c); // 801E6DC0
L_801E6DC4:;
  c->r[3]=0u+0x00000000u; // 801E6DC4
L_801E6DC8:;
  c->r[11]=c->r[1]+0x00000030u; // 801E6DC8
  c->lr=0x801E6DD0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E6DCC
  c->r[0]=R32(c->r[1]+0x00000034u); // 801E6DD0
  c->lr=c->r[0]; // 801E6DD4
  c->r[1]=c->r[1]+0x00000030u; // 801E6DD8
  return; // 801E6DDC
}

// BTM_SetInquiryScanType
void f_801E6DE0(Ctx* __restrict c) {
  trace_call(0x801E6DE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E6DE0
  c->r[0]=c->lr; // 801E6DE4
  cmps(c,0,(int32_t)c->r[3],0); // 801E6DE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E6DEC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E6DF0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E6DF4
  c->r[30]=c->r[3]|c->r[3]; // 801E6DF8
  if (crb(c,2)) { goto L_801E6E10; } // 801E6DFC
  cmpu(c,0,c->r[3],0x00000001u); // 801E6E00
  if (crb(c,2)) { goto L_801E6E10; } // 801E6E04
  c->r[3]=0u+0x00000005u; // 801E6E08
  goto L_801E6E78; // 801E6E0C
L_801E6E10:;
  c->r[31]=0u+0x80310000u; // 801E6E10
  c->r[31]=c->r[31]+0xFFFF8818u; // 801E6E14
  c->r[0]=R8(c->r[31]+0x00000643u); // 801E6E18
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 801E6E1C
  if (!crb(c,2)) { goto L_801E6E2C; } // 801E6E20
  c->r[3]=0u+0x00000004u; // 801E6E24
  goto L_801E6E78; // 801E6E28
L_801E6E2C:;
  c->r[0]=R16(c->r[31]+0x000016A4u); // 801E6E2C
  cmpu(c,0,c->r[3],c->r[0]); // 801E6E30
  if (crb(c,2)) { goto L_801E6E74; } // 801E6E34
  c->lr=0x801E6E3Cu; f_801E5334(c); // 801E6E38
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801E6E3C
  if (crb(c,2)) { goto L_801E6E6C; } // 801E6E40
  c->r[3]=0u+0x00000002u; // 801E6E44
  c->lr=0x801E6E4Cu; f_801D9B80(c); // 801E6E48
  cmps(c,0,(int32_t)c->r[3],0); // 801E6E4C
  if (crb(c,2)) { goto L_801E6E64; } // 801E6E50
  c->r[4]=rotl(c->r[30],0)&0x000000FFu; // 801E6E54
  c->lr=0x801E6E5Cu; f_801F1BE4(c); // 801E6E58
  W16(c->r[31]+0x000016A4u,c->r[30]); // 801E6E5C
  goto L_801E6E74; // 801E6E60
L_801E6E64:;
  c->r[3]=0u+0x00000003u; // 801E6E64
  goto L_801E6E78; // 801E6E68
L_801E6E6C:;
  c->r[3]=0u+0x00000006u; // 801E6E6C
  goto L_801E6E78; // 801E6E70
L_801E6E74:;
  c->r[3]=0u+0x00000000u; // 801E6E74
L_801E6E78:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E6E78
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E6E7C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E6E80
  c->lr=c->r[0]; // 801E6E84
  c->r[1]=c->r[1]+0x00000010u; // 801E6E88
  return; // 801E6E8C
}

// BTM_SetPageScanType
void f_801E6E90(Ctx* __restrict c) {
  trace_call(0x801E6E90u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E6E90
  c->r[0]=c->lr; // 801E6E94
  cmps(c,0,(int32_t)c->r[3],0); // 801E6E98
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E6E9C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E6EA0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E6EA4
  c->r[30]=c->r[3]|c->r[3]; // 801E6EA8
  if (crb(c,2)) { goto L_801E6EC0; } // 801E6EAC
  cmpu(c,0,c->r[3],0x00000001u); // 801E6EB0
  if (crb(c,2)) { goto L_801E6EC0; } // 801E6EB4
  c->r[3]=0u+0x00000005u; // 801E6EB8
  goto L_801E6F28; // 801E6EBC
L_801E6EC0:;
  c->r[31]=0u+0x80310000u; // 801E6EC0
  c->r[31]=c->r[31]+0xFFFF8818u; // 801E6EC4
  c->r[0]=R8(c->r[31]+0x00000643u); // 801E6EC8
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 801E6ECC
  if (!crb(c,2)) { goto L_801E6EDC; } // 801E6ED0
  c->r[3]=0u+0x00000004u; // 801E6ED4
  goto L_801E6F28; // 801E6ED8
L_801E6EDC:;
  c->r[0]=R16(c->r[31]+0x000016A6u); // 801E6EDC
  cmpu(c,0,c->r[3],c->r[0]); // 801E6EE0
  if (crb(c,2)) { goto L_801E6F24; } // 801E6EE4
  c->lr=0x801E6EECu; f_801E5334(c); // 801E6EE8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801E6EEC
  if (crb(c,2)) { goto L_801E6F1C; } // 801E6EF0
  c->r[3]=0u+0x00000002u; // 801E6EF4
  c->lr=0x801E6EFCu; f_801D9B80(c); // 801E6EF8
  cmps(c,0,(int32_t)c->r[3],0); // 801E6EFC
  if (crb(c,2)) { goto L_801E6F14; } // 801E6F00
  c->r[4]=rotl(c->r[30],0)&0x000000FFu; // 801E6F04
  c->lr=0x801E6F0Cu; f_801F1C44(c); // 801E6F08
  W16(c->r[31]+0x000016A6u,c->r[30]); // 801E6F0C
  goto L_801E6F24; // 801E6F10
L_801E6F14:;
  c->r[3]=0u+0x00000003u; // 801E6F14
  goto L_801E6F28; // 801E6F18
L_801E6F1C:;
  c->r[3]=0u+0x00000006u; // 801E6F1C
  goto L_801E6F28; // 801E6F20
L_801E6F24:;
  c->r[3]=0u+0x00000000u; // 801E6F24
L_801E6F28:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E6F28
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E6F2C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E6F30
  c->lr=c->r[0]; // 801E6F34
  c->r[1]=c->r[1]+0x00000010u; // 801E6F38
  return; // 801E6F3C
}

// BTM_SetInquiryMode
void f_801E6F40(Ctx* __restrict c) {
  trace_call(0x801E6F40u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E6F40
  c->r[0]=c->lr; // 801E6F44
  cmps(c,0,(int32_t)c->r[3],0); // 801E6F48
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E6F4C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E6F50
  c->r[31]=c->r[3]|c->r[3]; // 801E6F54
  if (crb(c,2)) { goto L_801E6F6C; } // 801E6F58
  cmpu(c,0,c->r[3],0x00000001u); // 801E6F5C
  if (crb(c,2)) { goto L_801E6F6C; } // 801E6F60
  c->r[3]=0u+0x00000005u; // 801E6F64
  goto L_801E6FC4; // 801E6F68
L_801E6F6C:;
  c->r[3]=0u+0x80310000u; // 801E6F6C
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E6F70
  c->r[0]=R8(c->r[3]+0x00000643u); // 801E6F74
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 801E6F78
  if (!crb(c,2)) { goto L_801E6F88; } // 801E6F7C
  c->r[3]=0u+0x00000004u; // 801E6F80
  goto L_801E6FC4; // 801E6F84
L_801E6F88:;
  c->lr=0x801E6F8Cu; f_801E5334(c); // 801E6F88
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801E6F8C
  if (!crb(c,2)) { goto L_801E6F9C; } // 801E6F90
  c->r[3]=0u+0x00000006u; // 801E6F94
  goto L_801E6FC4; // 801E6F98
L_801E6F9C:;
  c->r[3]=0u+0x00000002u; // 801E6F9C
  c->lr=0x801E6FA4u; f_801D9B80(c); // 801E6FA0
  cmps(c,0,(int32_t)c->r[3],0); // 801E6FA4
  if (crb(c,2)) { goto L_801E6FB8; } // 801E6FA8
  c->r[4]=c->r[31]|c->r[31]; // 801E6FAC
  c->lr=0x801E6FB4u; f_801F1C14(c); // 801E6FB0
  goto L_801E6FC0; // 801E6FB4
L_801E6FB8:;
  c->r[3]=0u+0x00000003u; // 801E6FB8
  goto L_801E6FC4; // 801E6FBC
L_801E6FC0:;
  c->r[3]=0u+0x00000000u; // 801E6FC0
L_801E6FC4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E6FC4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E6FC8
  c->lr=c->r[0]; // 801E6FCC
  c->r[1]=c->r[1]+0x00000010u; // 801E6FD0
  return; // 801E6FD4
}

// BTM_SetConnectability
void f_801E6FD8(Ctx* __restrict c) {
  trace_call(0x801E6FD8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E6FD8
  c->r[0]=c->lr; // 801E6FDC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E6FE0
  c->r[11]=c->r[1]+0x00000020u; // 801E6FE4
  c->lr=0x801E6FECu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E6FE8
  cmps(c,0,(int32_t)c->r[3],0); // 801E6FEC
  c->r[31]=0u+0x80310000u; // 801E6FF0
  c->r[27]=c->r[3]|c->r[3]; // 801E6FF4
  c->r[28]=c->r[4]|c->r[4]; // 801E6FF8
  c->r[29]=c->r[5]|c->r[5]; // 801E6FFC
  c->r[31]=c->r[31]+0xFFFF8818u; // 801E7000
  c->r[30]=0u+0x00000000u; // 801E7004
  if (crb(c,2)) { goto L_801E701C; } // 801E7008
  cmpu(c,0,c->r[3],0x00000001u); // 801E700C
  if (crb(c,2)) { goto L_801E701C; } // 801E7010
  c->r[3]=0u+0x00000005u; // 801E7014
  goto L_801E7148; // 801E7018
L_801E701C:;
  c->r[3]=0u+0x80310000u; // 801E701C
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E7020
  c->r[0]=R8(c->r[3]+0x0000064Eu); // 801E7024
  cmpu(c,0,c->r[0],0x00000003u); // 801E7028
  if (!crb(c,0)) { goto L_801E7038; } // 801E702C
  c->r[3]=0u+0x0000000Cu; // 801E7030
  goto L_801E7148; // 801E7034
L_801E7038:;
  cmps(c,0,(int32_t)c->r[4],0); // 801E7038
  if (!crb(c,2)) { goto L_801E7044; } // 801E703C
  c->r[28]=0u+0x00000012u; // 801E7040
L_801E7044:;
  cmps(c,0,(int32_t)c->r[5],0); // 801E7044
  if (!crb(c,2)) { goto L_801E7050; } // 801E7048
  c->r[29]=0u+0x00000800u; // 801E704C
L_801E7050:;
  c->r[3]=0u+0x80310000u; // 801E7050
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E7054
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801E7058
  cmpu(c,0,c->r[0],0x00000003u); // 801E705C
  if (crb(c,0)) { goto L_801E7084; } // 801E7060
  c->r[3]=0u+0x000D0000u; // 801E7064
  c->r[4]=0u+0x80280000u; // 801E7068
  c->r[5]=c->r[27]|c->r[27]; // 801E706C
  c->r[6]=c->r[28]|c->r[28]; // 801E7070
  c->r[7]=c->r[29]|c->r[29]; // 801E7074
  c->r[3]=c->r[3]+0x00000002u; // 801E7078
  c->r[4]=c->r[4]+0xFFFFF474u; // 801E707C
  c->lr=0x801E7084u; f_801DC790(c); // 801E7080
L_801E7084:;
  cmpu(c,0,c->r[27],0x00000001u); // 801E7084
  if (!crb(c,2)) { goto L_801E70C0; } // 801E7088
  cmpu(c,0,c->r[28],0x00000012u); // 801E708C
  if (crb(c,0)) { goto L_801E70B4; } // 801E7090
  cmpu(c,0,c->r[28],0x00001000u); // 801E7094
  if (crb(c,1)) { goto L_801E70B4; } // 801E7098
  cmpu(c,0,c->r[29],0x00000012u); // 801E709C
  if (crb(c,0)) { goto L_801E70B4; } // 801E70A0
  cmpu(c,0,c->r[29],0x00001000u); // 801E70A4
  if (crb(c,1)) { goto L_801E70B4; } // 801E70A8
  cmpu(c,0,c->r[28],c->r[29]); // 801E70AC
  if (!crb(c,1)) { goto L_801E70BC; } // 801E70B0
L_801E70B4:;
  c->r[3]=0u+0x00000005u; // 801E70B4
  goto L_801E7148; // 801E70B8
L_801E70BC:;
  c->r[30]=c->r[30]|0x00000002u; // 801E70BC
L_801E70C0:;
  c->r[0]=R16(c->r[31]+0x0000169Cu); // 801E70C0
  cmpu(c,0,c->r[28],c->r[0]); // 801E70C4
  if (!crb(c,2)) { goto L_801E70D8; } // 801E70C8
  c->r[0]=R16(c->r[31]+0x0000169Eu); // 801E70CC
  cmpu(c,0,c->r[29],c->r[0]); // 801E70D0
  if (crb(c,2)) { goto L_801E7108; } // 801E70D4
L_801E70D8:;
  c->r[3]=0u+0x00000002u; // 801E70D8
  c->lr=0x801E70E0u; f_801D9B80(c); // 801E70DC
  cmps(c,0,(int32_t)c->r[3],0); // 801E70E0
  if (crb(c,2)) { goto L_801E7100; } // 801E70E4
  W16(c->r[31]+0x0000169Cu,c->r[28]); // 801E70E8
  c->r[4]=c->r[29]|c->r[29]; // 801E70EC
  c->r[5]=c->r[28]|c->r[28]; // 801E70F0
  W16(c->r[31]+0x0000169Eu,c->r[29]); // 801E70F4
  c->lr=0x801E70FCu; f_801F11D4(c); // 801E70F8
  goto L_801E7108; // 801E70FC
L_801E7100:;
  c->r[3]=0u+0x00000003u; // 801E7100
  goto L_801E7148; // 801E7104
L_801E7108:;
  c->r[3]=0u+0x00000002u; // 801E7108
  c->lr=0x801E7110u; f_801D9B80(c); // 801E710C
  cmps(c,0,(int32_t)c->r[3],0); // 801E7110
  if (crb(c,2)) { goto L_801E713C; } // 801E7114
  c->r[0]=R16(c->r[31]+0x00001698u); // 801E7118
  cmps(c,0,(int32_t)c->r[0],0); // 801E711C
  if (crb(c,2)) { goto L_801E712C; } // 801E7120
  c->r[0]=c->r[30]|0x00000001u; // 801E7124
  c->r[30]=rotl(c->r[0],0)&0x000000FFu; // 801E7128
L_801E712C:;
  W16(c->r[31]+0x0000169Au,c->r[27]); // 801E712C
  c->r[4]=rotl(c->r[30],0)&0x000000FFu; // 801E7130
  c->lr=0x801E7138u; f_801F11A4(c); // 801E7134
  goto L_801E7144; // 801E7138
L_801E713C:;
  c->r[3]=0u+0x00000003u; // 801E713C
  goto L_801E7148; // 801E7140
L_801E7144:;
  c->r[3]=0u+0x00000000u; // 801E7144
L_801E7148:;
  c->r[11]=c->r[1]+0x00000020u; // 801E7148
  c->lr=0x801E7150u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E714C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E7150
  c->lr=c->r[0]; // 801E7154
  c->r[1]=c->r[1]+0x00000020u; // 801E7158
  return; // 801E715C
}

// BTM_IsInquiryActive
void f_801E7160(Ctx* __restrict c) {
  trace_call(0x801E7160u);
  c->r[3]=0u+0x80310000u; // 801E7160
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E7164
  c->r[3]=R8(c->r[3]+0x00001848u); // 801E7168
  return; // 801E716C
}

// BTM_CancelInquiry
void f_801E7170(Ctx* __restrict c) {
  trace_call(0x801E7170u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E7170
  c->r[0]=c->lr; // 801E7174
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E7178
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E717C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E7180
  c->r[30]=0u+0x80310000u; // 801E7184
  c->r[30]=c->r[30]+0xFFFF8818u; // 801E7188
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E718C
  c->r[29]=0u+0x00000000u; // 801E7190
  c->r[0]=R8(c->r[30]+0x000027C0u); // 801E7194
  cmpu(c,0,c->r[0],0x00000003u); // 801E7198
  if (crb(c,0)) { goto L_801E71B4; } // 801E719C
  c->r[3]=0u+0x000D0000u; // 801E71A0
  c->r[4]=0u+0x80280000u; // 801E71A4
  c->r[3]=c->r[3]+0x00000002u; // 801E71A8
  c->r[4]=c->r[4]+0xFFFFF4C8u; // 801E71AC
  c->lr=0x801E71B4u; f_801DC730(c); // 801E71B0
L_801E71B4:;
  c->lr=0x801E71B8u; f_801E5334(c); // 801E71B4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801E71B8
  if (!crb(c,2)) { goto L_801E71C8; } // 801E71BC
  c->r[3]=0u+0x00000006u; // 801E71C0
  goto L_801E725C; // 801E71C4
L_801E71C8:;
  c->r[0]=R8(c->r[30]+0x00001848u); // 801E71C8
  cmps(c,0,(int32_t)c->r[0],0); // 801E71CC
  if (crb(c,2)) { goto L_801E7258; } // 801E71D0
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801E71D4
  if (!crb(c,2)) { goto L_801E7258; } // 801E71D8
  c->r[0]=R8(c->r[30]+0x00001844u); // 801E71DC
  c->r[4]=0u+0x00000000u; // 801E71E0
  W8(c->r[30]+0x00001848u,c->r[4]); // 801E71E4
  cmps(c,0,(int32_t)c->r[0],0); // 801E71E8
  W8(c->r[30]+0x00001847u,c->r[4]); // 801E71EC
  W32(c->r[30]+0x000016B4u,c->r[4]); // 801E71F0
  W32(c->r[30]+0x000016B0u,c->r[4]); // 801E71F4
  if (crb(c,2)) { goto L_801E7210; } // 801E71F8
  c->r[3]=R8(c->r[30]+0x00001845u); // 801E71FC
  W8(c->r[30]+0x00001844u,c->r[4]); // 801E7200
  c->r[0]=c->r[3]+0x00000001u; // 801E7204
  W8(c->r[30]+0x00001845u,c->r[0]); // 801E7208
  goto L_801E7220; // 801E720C
L_801E7210:;
  c->lr=0x801E7214u; f_801EF6F4(c); // 801E7210
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801E7214
  if (!crb(c,2)) { goto L_801E7220; } // 801E7218
  c->r[29]=0u+0x00000003u; // 801E721C
L_801E7220:;
  c->r[31]=0u+0x80310000u; // 801E7220
  c->r[4]=R32(c->r[30]+0x000016C0u); // 801E7224
  c->r[31]=c->r[31]+0xFFFF8818u; // 801E7228
  c->r[3]=R32(c->r[31]+0x000016DCu); // 801E722C
  c->r[0]=c->r[4]+0x00000001u; // 801E7230
  W32(c->r[30]+0x000016C0u,c->r[0]); // 801E7234
  cmps(c,0,(int32_t)c->r[3],0); // 801E7238
  if (crb(c,2)) { goto L_801E724C; } // 801E723C
  c->lr=0x801E7244u; f_801D9C70(c); // 801E7240
  c->r[0]=0u+0x00000000u; // 801E7244
  W32(c->r[31]+0x000016DCu,c->r[0]); // 801E7248
L_801E724C:;
  c->r[0]=0u+0x00000000u; // 801E724C
  W16(c->r[31]+0x000016E0u,c->r[0]); // 801E7250
  W16(c->r[31]+0x000016E2u,c->r[0]); // 801E7254
L_801E7258:;
  c->r[3]=c->r[29]|c->r[29]; // 801E7258
L_801E725C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E725C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E7260
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E7264
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E7268
  c->lr=c->r[0]; // 801E726C
  c->r[1]=c->r[1]+0x00000020u; // 801E7270
  return; // 801E7274
}

// BTM_StartInquiry
void f_801E7278(Ctx* __restrict c) {
  trace_call(0x801E7278u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E7278
  c->r[0]=c->lr; // 801E727C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E7280
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E7284
  c->r[31]=0u+0x80310000u; // 801E7288
  c->r[31]=c->r[31]+0xFFFF8818u; // 801E728C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E7290
  c->r[30]=c->r[5]|c->r[5]; // 801E7294
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E7298
  c->r[29]=c->r[4]|c->r[4]; // 801E729C
  W32(c->r[1]+0x00000010u,c->r[28]); // 801E72A0
  c->r[28]=c->r[3]|c->r[3]; // 801E72A4
  c->r[0]=R8(c->r[31]+0x000027C0u); // 801E72A8
  cmpu(c,0,c->r[0],0x00000003u); // 801E72AC
  if (crb(c,0)) { goto L_801E72D8; } // 801E72B0
  c->r[3]=0u+0x000D0000u; // 801E72B4
  c->r[4]=0u+0x80280000u; // 801E72B8
  c->r[5]=R8(c->r[28]+0x00000000u); // 801E72BC
  c->r[3]=c->r[3]+0x00000002u; // 801E72C0
  c->r[6]=R8(c->r[28]+0x00000001u); // 801E72C4
  c->r[4]=c->r[4]+0xFFFFF4E4u; // 801E72C8
  c->r[7]=R8(c->r[28]+0x00000002u); // 801E72CC
  c->r[8]=R8(c->r[28]+0x00000003u); // 801E72D0
  c->lr=0x801E72D8u; f_801DC7B0(c); // 801E72D4
L_801E72D8:;
  c->r[0]=R8(c->r[31]+0x00001848u); // 801E72D8
  cmps(c,0,(int32_t)c->r[0],0); // 801E72DC
  if (!crb(c,2)) { goto L_801E72F0; } // 801E72E0
  c->r[0]=R8(c->r[31]+0x00001844u); // 801E72E4
  cmps(c,0,(int32_t)c->r[0],0); // 801E72E8
  if (crb(c,2)) { goto L_801E72F8; } // 801E72EC
L_801E72F0:;
  c->r[3]=0u+0x00000002u; // 801E72F0
  goto L_801E740C; // 801E72F4
L_801E72F8:;
  c->r[0]=R8(c->r[28]+0x00000000u); // 801E72F8
  cmps(c,0,(int32_t)c->r[0],0); // 801E72FC
  if (crb(c,2)) { goto L_801E7314; } // 801E7300
  cmpu(c,0,c->r[0],0x00000001u); // 801E7304
  if (crb(c,2)) { goto L_801E7314; } // 801E7308
  c->r[3]=0u+0x00000005u; // 801E730C
  goto L_801E740C; // 801E7310
L_801E7314:;
  c->lr=0x801E7318u; f_801E5334(c); // 801E7314
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801E7318
  if (!crb(c,2)) { goto L_801E7328; } // 801E731C
  c->r[3]=0u+0x00000006u; // 801E7320
  goto L_801E740C; // 801E7324
L_801E7328:;
  c->r[5]=R8(c->r[28]+0x00000000u); // 801E7328
  c->r[0]=0u+0x00000003u; // 801E732C
  c->r[3]=R8(c->r[28]+0x00000001u); // 801E7330
  c->r[6]=0u+0x00000000u; // 801E7334
  c->r[4]=0u+0x00000001u; // 801E7338
  W8(c->r[31]+0x00001834u,c->r[5]); // 801E733C
  W8(c->r[31]+0x00001835u,c->r[3]); // 801E7340
  c->r[5]=R8(c->r[28]+0x00000002u); // 801E7344
  c->r[3]=R8(c->r[28]+0x00000003u); // 801E7348
  W8(c->r[31]+0x00001836u,c->r[5]); // 801E734C
  W8(c->r[31]+0x00001837u,c->r[3]); // 801E7350
  c->r[5]=R8(c->r[28]+0x00000004u); // 801E7354
  c->r[3]=R8(c->r[28]+0x00000005u); // 801E7358
  W8(c->r[31]+0x00001838u,c->r[5]); // 801E735C
  W8(c->r[31]+0x00001839u,c->r[3]); // 801E7360
  c->r[5]=R8(c->r[28]+0x00000006u); // 801E7364
  c->r[3]=R8(c->r[28]+0x00000007u); // 801E7368
  W8(c->r[31]+0x0000183Au,c->r[5]); // 801E736C
  W8(c->r[31]+0x0000183Bu,c->r[3]); // 801E7370
  c->r[3]=R8(c->r[28]+0x00000008u); // 801E7374
  W8(c->r[31]+0x0000183Cu,c->r[3]); // 801E7378
  c->r[3]=R8(c->r[28]+0x00000009u); // 801E737C
  W8(c->r[31]+0x0000183Du,c->r[3]); // 801E7380
  W8(c->r[31]+0x00001847u,c->r[0]); // 801E7384
  W32(c->r[31]+0x000016B0u,c->r[30]); // 801E7388
  W32(c->r[31]+0x000016B4u,c->r[29]); // 801E738C
  W8(c->r[31]+0x0000183Fu,c->r[6]); // 801E7390
  c->r[5]=R8(c->r[28]+0x00000000u); // 801E7394
  c->r[3]=c->r[5]+0xFFFFFFFFu; // 801E7398
  c->r[0]=addc(c,~c->r[5],0x00000001u,1); // 801E739C
  c->r[0]=~(c->r[3]|c->r[0]); // 801E73A0
  c->r[3]=sraw(c,c->r[0],31); // 801E73A4
  c->r[0]=c->r[3]+0x00000002u; // 801E73A8
  W8(c->r[31]+0x00001848u,c->r[0]); // 801E73AC
  c->r[0]=R8(c->r[28]+0x00000003u); // 801E73B0
  cmps(c,0,(int32_t)c->r[0],0); // 801E73B4
  if (crb(c,2)) { goto L_801E73CC; } // 801E73B8
  if (crb(c,0)) { goto L_801E73E4; } // 801E73BC
  cmps(c,0,(int32_t)c->r[0],3); // 801E73C0
  if (!crb(c,0)) { goto L_801E73E4; } // 801E73C4
  goto L_801E73D8; // 801E73C8
L_801E73CC:;
  c->r[0]=0u+0x00000002u; // 801E73CC
  W8(c->r[31]+0x00001847u,c->r[0]); // 801E73D0
  goto L_801E73EC; // 801E73D4
L_801E73D8:;
  W8(c->r[31]+0x00001847u,c->r[4]); // 801E73D8
  W8(c->r[28]+0x00000003u,c->r[6]); // 801E73DC
  goto L_801E73EC; // 801E73E0
L_801E73E4:;
  c->r[3]=0u+0x00000005u; // 801E73E4
  goto L_801E740C; // 801E73E8
L_801E73EC:;
  c->r[3]=R8(c->r[28]+0x00000003u); // 801E73EC
  c->r[4]=c->r[28]+0x00000004u; // 801E73F0
  c->lr=0x801E73F8u; f_801E7C8C(c); // 801E73F4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801E73F8
  cmpu(c,0,c->r[0],0x00000001u); // 801E73FC
  if (crb(c,2)) { goto L_801E740C; } // 801E7400
  c->r[0]=0u+0x00000000u; // 801E7404
  W8(c->r[31]+0x00001847u,c->r[0]); // 801E7408
L_801E740C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E740C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E7410
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E7414
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E7418
  c->r[28]=R32(c->r[1]+0x00000010u); // 801E741C
  c->lr=c->r[0]; // 801E7420
  c->r[1]=c->r[1]+0x00000020u; // 801E7424
  return; // 801E7428
}

// BTM_ReadRemoteDeviceName
void f_801E742C(Ctx* __restrict c) {
  trace_call(0x801E742Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E742C
  c->r[0]=c->lr; // 801E7430
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E7434
  c->r[11]=c->r[1]+0x00000020u; // 801E7438
  c->lr=0x801E7440u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E743C
  c->r[5]=0u+0x80310000u; // 801E7440
  c->r[27]=c->r[3]|c->r[3]; // 801E7444
  c->r[5]=c->r[5]+0xFFFF8818u; // 801E7448
  c->r[28]=c->r[4]|c->r[4]; // 801E744C
  c->r[0]=R8(c->r[5]+0x000027C0u); // 801E7450
  c->r[29]=0u+0x00000000u; // 801E7454
  cmpu(c,0,c->r[0],0x00000003u); // 801E7458
  if (crb(c,0)) { goto L_801E748C; } // 801E745C
  c->r[3]=0u+0x000D0000u; // 801E7460
  c->r[4]=0u+0x80280000u; // 801E7464
  c->r[5]=R8(c->r[27]+0x00000000u); // 801E7468
  c->r[3]=c->r[3]+0x00000002u; // 801E746C
  c->r[6]=R8(c->r[27]+0x00000001u); // 801E7470
  c->r[4]=c->r[4]+0xFFFFF51Cu; // 801E7474
  c->r[7]=R8(c->r[27]+0x00000002u); // 801E7478
  c->r[8]=R8(c->r[27]+0x00000003u); // 801E747C
  c->r[9]=R8(c->r[27]+0x00000004u); // 801E7480
  c->r[10]=R8(c->r[27]+0x00000005u); // 801E7484
  c->lr=0x801E748Cu; f_801DC7F0(c); // 801E7488
L_801E748C:;
  c->r[3]=0u+0x80310000u; // 801E748C
  c->r[30]=0u+0x00000000u; // 801E7490
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E7494
  c->r[31]=c->r[3]+0x000016E4u; // 801E7498
L_801E749C:;
  c->r[0]=R8(c->r[31]+0x0000001Au); // 801E749C
  cmps(c,0,(int32_t)c->r[0],0); // 801E74A0
  if (crb(c,2)) { goto L_801E74C4; } // 801E74A4
  c->r[4]=c->r[27]|c->r[27]; // 801E74A8
  c->r[3]=c->r[31]+0x0000000Au; // 801E74AC
  c->r[5]=0u+0x00000006u; // 801E74B0
  c->lr=0x801E74B8u; f_8020BD24(c); // 801E74B4
  cmps(c,0,(int32_t)c->r[3],0); // 801E74B8
  if (!crb(c,2)) { goto L_801E74C4; } // 801E74BC
  goto L_801E74D8; // 801E74C0
L_801E74C4:;
  c->r[30]=c->r[30]+0x00000001u; // 801E74C4
  c->r[31]=c->r[31]+0x0000001Cu; // 801E74C8
  cmpu(c,0,c->r[30],0x0000000Cu); // 801E74CC
  if (crb(c,0)) { IRQCHK(c); goto L_801E749C; } // 801E74D0
  c->r[31]=0u+0x00000000u; // 801E74D4
L_801E74D8:;
  cmps(c,0,(int32_t)c->r[31],0); // 801E74D8
  if (crb(c,2)) { goto L_801E74E4; } // 801E74DC
  c->r[29]=c->r[31]+0x00000008u; // 801E74E0
L_801E74E4:;
  c->r[3]=c->r[27]|c->r[27]; // 801E74E4
  c->r[4]=c->r[29]|c->r[29]; // 801E74E8
  c->r[7]=c->r[28]|c->r[28]; // 801E74EC
  c->r[5]=0u+0x00000001u; // 801E74F0
  c->r[6]=0u+0x00000028u; // 801E74F4
  c->lr=0x801E74FCu; f_801E830C(c); // 801E74F8
  c->r[11]=c->r[1]+0x00000020u; // 801E74FC
  c->lr=0x801E7504u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E7500
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E7504
  c->lr=c->r[0]; // 801E7508
  c->r[1]=c->r[1]+0x00000020u; // 801E750C
  return; // 801E7510
}

// BTM_CancelRemoteDeviceName
void f_801E7514(Ctx* __restrict c) {
  trace_call(0x801E7514u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E7514
  c->r[0]=c->lr; // 801E7518
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E751C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E7520
  c->r[31]=0u+0x80310000u; // 801E7524
  c->r[31]=c->r[31]+0xFFFF8818u; // 801E7528
  c->r[0]=R8(c->r[31]+0x000027C0u); // 801E752C
  cmpu(c,0,c->r[0],0x00000003u); // 801E7530
  if (crb(c,0)) { goto L_801E754C; } // 801E7534
  c->r[3]=0u+0x000D0000u; // 801E7538
  c->r[4]=0u+0x80280000u; // 801E753C
  c->r[3]=c->r[3]+0x00000002u; // 801E7540
  c->r[4]=c->r[4]+0xFFFFF55Cu; // 801E7544
  c->lr=0x801E754Cu; f_801DC730(c); // 801E7548
L_801E754C:;
  c->r[0]=R8(c->r[31]+0x000016AEu); // 801E754C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801E7550
  if (crb(c,2)) { goto L_801E7574; } // 801E7554
  c->r[3]=c->r[31]+0x000016A8u; // 801E7558
  c->lr=0x801E7560u; f_801F01F8(c); // 801E755C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801E7560
  c->r[3]=0u+0x00000003u; // 801E7564
  if (crb(c,2)) { goto L_801E7578; } // 801E7568
  c->r[3]=0u+0x00000001u; // 801E756C
  goto L_801E7578; // 801E7570
L_801E7574:;
  c->r[3]=0u+0x00000006u; // 801E7574
L_801E7578:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E7578
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E757C
  c->lr=c->r[0]; // 801E7580
  c->r[1]=c->r[1]+0x00000010u; // 801E7584
  return; // 801E7588
}

// BTM_InqDbRead
void f_801E758C(Ctx* __restrict c) {
  trace_call(0x801E758Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E758C
  c->r[0]=c->lr; // 801E7590
  c->r[4]=0u+0x80310000u; // 801E7594
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E7598
  c->r[4]=c->r[4]+0xFFFF8818u; // 801E759C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E75A0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E75A4
  c->r[30]=c->r[4]+0x000016E4u; // 801E75A8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E75AC
  c->r[29]=c->r[3]|c->r[3]; // 801E75B0
  c->r[0]=R8(c->r[4]+0x000027C0u); // 801E75B4
  cmpu(c,0,c->r[0],0x00000003u); // 801E75B8
  if (crb(c,0)) { goto L_801E75EC; } // 801E75BC
  c->r[3]=0u+0x000D0000u; // 801E75C0
  c->r[4]=0u+0x80280000u; // 801E75C4
  c->r[5]=R8(c->r[29]+0x00000000u); // 801E75C8
  c->r[3]=c->r[3]+0x00000002u; // 801E75CC
  c->r[6]=R8(c->r[29]+0x00000001u); // 801E75D0
  c->r[4]=c->r[4]+0xFFFFF57Cu; // 801E75D4
  c->r[7]=R8(c->r[29]+0x00000002u); // 801E75D8
  c->r[8]=R8(c->r[29]+0x00000003u); // 801E75DC
  c->r[9]=R8(c->r[29]+0x00000004u); // 801E75E0
  c->r[10]=R8(c->r[29]+0x00000005u); // 801E75E4
  c->lr=0x801E75ECu; f_801DC7F0(c); // 801E75E8
L_801E75EC:;
  c->r[31]=0u+0x00000000u; // 801E75EC
L_801E75F0:;
  c->r[0]=R8(c->r[30]+0x0000001Au); // 801E75F0
  cmps(c,0,(int32_t)c->r[0],0); // 801E75F4
  if (crb(c,2)) { goto L_801E761C; } // 801E75F8
  c->r[4]=c->r[29]|c->r[29]; // 801E75FC
  c->r[3]=c->r[30]+0x0000000Au; // 801E7600
  c->r[5]=0u+0x00000006u; // 801E7604
  c->lr=0x801E760Cu; f_8020BD24(c); // 801E7608
  cmps(c,0,(int32_t)c->r[3],0); // 801E760C
  if (!crb(c,2)) { goto L_801E761C; } // 801E7610
  c->r[3]=c->r[30]+0x00000008u; // 801E7614
  goto L_801E7630; // 801E7618
L_801E761C:;
  c->r[31]=c->r[31]+0x00000001u; // 801E761C
  c->r[30]=c->r[30]+0x0000001Cu; // 801E7620
  cmpu(c,0,c->r[31],0x0000000Cu); // 801E7624
  if (crb(c,0)) { IRQCHK(c); goto L_801E75F0; } // 801E7628
  c->r[3]=0u+0x00000000u; // 801E762C
L_801E7630:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E7630
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E7634
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E7638
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E763C
  c->lr=c->r[0]; // 801E7640
  c->r[1]=c->r[1]+0x00000020u; // 801E7644
  return; // 801E7648
}

// BTM_InqDbFirst
void f_801E764C(Ctx* __restrict c) {
  trace_call(0x801E764Cu);
  c->r[3]=0u+0x80310000u; // 801E764C
  c->r[0]=0u+0x00000002u; // 801E7650
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E7654
  c->r[4]=0u+0x00000000u; // 801E7658
  c->r[3]=c->r[3]+0x000016E4u; // 801E765C
  c->ctr=c->r[0]; // 801E7660
L_801E7664:;
  c->r[0]=R8(c->r[3]+0x0000001Au); // 801E7664
  cmps(c,0,(int32_t)c->r[0],0); // 801E7668
  if (crb(c,2)) { goto L_801E7678; } // 801E766C
  c->r[3]=c->r[3]+0x00000008u; // 801E7670
  return; // 801E7674
L_801E7678:;
  c->r[0]=R8(c->r[3]+0x00000036u); // 801E7678
  c->r[4]=c->r[4]+0x00000001u; // 801E767C
  cmps(c,0,(int32_t)c->r[0],0); // 801E7680
  if (crb(c,2)) { goto L_801E7690; } // 801E7684
  c->r[3]=c->r[3]+0x00000024u; // 801E7688
  return; // 801E768C
L_801E7690:;
  c->r[0]=R8(c->r[3]+0x00000052u); // 801E7690
  c->r[4]=c->r[4]+0x00000001u; // 801E7694
  cmps(c,0,(int32_t)c->r[0],0); // 801E7698
  if (crb(c,2)) { goto L_801E76A8; } // 801E769C
  c->r[3]=c->r[3]+0x00000040u; // 801E76A0
  return; // 801E76A4
L_801E76A8:;
  c->r[0]=R8(c->r[3]+0x0000006Eu); // 801E76A8
  c->r[4]=c->r[4]+0x00000001u; // 801E76AC
  cmps(c,0,(int32_t)c->r[0],0); // 801E76B0
  if (crb(c,2)) { goto L_801E76C0; } // 801E76B4
  c->r[3]=c->r[3]+0x0000005Cu; // 801E76B8
  return; // 801E76BC
L_801E76C0:;
  c->r[0]=R8(c->r[3]+0x0000008Au); // 801E76C0
  c->r[4]=c->r[4]+0x00000001u; // 801E76C4
  cmps(c,0,(int32_t)c->r[0],0); // 801E76C8
  if (crb(c,2)) { goto L_801E76D8; } // 801E76CC
  c->r[3]=c->r[3]+0x00000078u; // 801E76D0
  return; // 801E76D4
L_801E76D8:;
  c->r[0]=R8(c->r[3]+0x000000A6u); // 801E76D8
  c->r[4]=c->r[4]+0x00000001u; // 801E76DC
  cmps(c,0,(int32_t)c->r[0],0); // 801E76E0
  if (crb(c,2)) { goto L_801E76F0; } // 801E76E4
  c->r[3]=c->r[3]+0x00000094u; // 801E76E8
  return; // 801E76EC
L_801E76F0:;
  c->r[4]=c->r[4]+0x00000001u; // 801E76F0
  c->r[3]=c->r[3]+0x000000A8u; // 801E76F4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E7664; } // 801E76F8
  c->r[3]=0u+0x00000000u; // 801E76FC
  return; // 801E7700
}

// BTM_InqDbNext
void f_801E7704(Ctx* __restrict c) {
  trace_call(0x801E7704u);
  cmps(c,0,(int32_t)c->r[3],0); // 801E7704
  if (crb(c,2)) { goto L_801E7788; } // 801E7708
  c->r[5]=0u+0x80310000u; // 801E770C
  c->r[4]=0u+0x92490000u; // 801E7710
  c->r[5]=c->r[5]+0xFFFF8818u; // 801E7714
  c->r[0]=c->r[3]+0xFFFFFFF8u; // 801E7718
  c->r[3]=c->r[5]+0x000016E4u; // 801E771C
  c->r[4]=c->r[4]+0x00002493u; // 801E7720
  c->r[0]=c->r[0]-c->r[3]; // 801E7724
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[0])>>32); // 801E7728
  c->r[0]=c->r[3]+c->r[0]; // 801E772C
  c->r[0]=sraw(c,c->r[0],4); // 801E7730
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801E7734
  c->r[3]=c->r[0]+c->r[3]; // 801E7738
  c->r[0]=c->r[3]+0x00000001u; // 801E773C
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 801E7740
  c->r[3]=(uint32_t)((int32_t)c->r[4]*(int32_t)28); // 801E7744
  c->r[0]=addc(c,~c->r[4],0x0000000Cu,1); // 801E7748
  c->r[3]=c->r[5]+c->r[3]; // 801E774C
  c->r[3]=c->r[3]+0x000016E4u; // 801E7750
  c->ctr=c->r[0]; // 801E7754
  cmpu(c,0,c->r[4],0x0000000Cu); // 801E7758
  if (!crb(c,0)) { goto L_801E7780; } // 801E775C
L_801E7760:;
  c->r[0]=R8(c->r[3]+0x0000001Au); // 801E7760
  cmps(c,0,(int32_t)c->r[0],0); // 801E7764
  if (crb(c,2)) { goto L_801E7774; } // 801E7768
  c->r[3]=c->r[3]+0x00000008u; // 801E776C
  return; // 801E7770
L_801E7774:;
  c->r[4]=c->r[4]+0x00000001u; // 801E7774
  c->r[3]=c->r[3]+0x0000001Cu; // 801E7778
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E7760; } // 801E777C
L_801E7780:;
  c->r[3]=0u+0x00000000u; // 801E7780
  return; // 801E7784
L_801E7788:;
  c->r[3]=0u+0x80310000u; // 801E7788
  c->r[0]=0u+0x00000002u; // 801E778C
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E7790
  c->r[4]=0u+0x00000000u; // 801E7794
  c->r[3]=c->r[3]+0x000016E4u; // 801E7798
  c->ctr=c->r[0]; // 801E779C
L_801E77A0:;
  c->r[0]=R8(c->r[3]+0x0000001Au); // 801E77A0
  cmps(c,0,(int32_t)c->r[0],0); // 801E77A4
  if (crb(c,2)) { goto L_801E77B4; } // 801E77A8
  c->r[3]=c->r[3]+0x00000008u; // 801E77AC
  return; // 801E77B0
L_801E77B4:;
  c->r[0]=R8(c->r[3]+0x00000036u); // 801E77B4
  c->r[4]=c->r[4]+0x00000001u; // 801E77B8
  cmps(c,0,(int32_t)c->r[0],0); // 801E77BC
  if (crb(c,2)) { goto L_801E77CC; } // 801E77C0
  c->r[3]=c->r[3]+0x00000024u; // 801E77C4
  return; // 801E77C8
L_801E77CC:;
  c->r[0]=R8(c->r[3]+0x00000052u); // 801E77CC
  c->r[4]=c->r[4]+0x00000001u; // 801E77D0
  cmps(c,0,(int32_t)c->r[0],0); // 801E77D4
  if (crb(c,2)) { goto L_801E77E4; } // 801E77D8
  c->r[3]=c->r[3]+0x00000040u; // 801E77DC
  return; // 801E77E0
L_801E77E4:;
  c->r[0]=R8(c->r[3]+0x0000006Eu); // 801E77E4
  c->r[4]=c->r[4]+0x00000001u; // 801E77E8
  cmps(c,0,(int32_t)c->r[0],0); // 801E77EC
  if (crb(c,2)) { goto L_801E77FC; } // 801E77F0
  c->r[3]=c->r[3]+0x0000005Cu; // 801E77F4
  return; // 801E77F8
L_801E77FC:;
  c->r[0]=R8(c->r[3]+0x0000008Au); // 801E77FC
  c->r[4]=c->r[4]+0x00000001u; // 801E7800
  cmps(c,0,(int32_t)c->r[0],0); // 801E7804
  if (crb(c,2)) { goto L_801E7814; } // 801E7808
  c->r[3]=c->r[3]+0x00000078u; // 801E780C
  return; // 801E7810
L_801E7814:;
  c->r[0]=R8(c->r[3]+0x000000A6u); // 801E7814
  c->r[4]=c->r[4]+0x00000001u; // 801E7818
  cmps(c,0,(int32_t)c->r[0],0); // 801E781C
  if (crb(c,2)) { goto L_801E782C; } // 801E7820
  c->r[3]=c->r[3]+0x00000094u; // 801E7824
  return; // 801E7828
L_801E782C:;
  c->r[4]=c->r[4]+0x00000001u; // 801E782C
  c->r[3]=c->r[3]+0x000000A8u; // 801E7830
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E77A0; } // 801E7834
  c->r[3]=0u+0x00000000u; // 801E7838
  return; // 801E783C
}

// BTM_ClearInqDb
void f_801E7840(Ctx* __restrict c) {
  trace_call(0x801E7840u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E7840
  c->r[0]=c->lr; // 801E7844
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E7848
  c->r[11]=c->r[1]+0x00000020u; // 801E784C
  c->lr=0x801E7854u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E7850
  c->r[4]=0u+0x80310000u; // 801E7854
  c->r[27]=c->r[3]|c->r[3]; // 801E7858
  c->r[30]=c->r[4]+0xFFFF8818u; // 801E785C
  c->r[0]=R8(c->r[30]+0x00001848u); // 801E7860
  cmps(c,0,(int32_t)c->r[0],0); // 801E7864
  if (!crb(c,2)) { goto L_801E7884; } // 801E7868
  c->r[0]=R8(c->r[30]+0x000016AEu); // 801E786C
  cmps(c,0,(int32_t)c->r[0],0); // 801E7870
  if (!crb(c,2)) { goto L_801E7884; } // 801E7874
  c->r[0]=R8(c->r[30]+0x00001844u); // 801E7878
  cmps(c,0,(int32_t)c->r[0],0); // 801E787C
  if (crb(c,2)) { goto L_801E788C; } // 801E7880
L_801E7884:;
  c->r[3]=0u+0x00000002u; // 801E7884
  goto L_801E78F8; // 801E7888
L_801E788C:;
  c->r[28]=c->r[30]+0x000016E4u; // 801E788C
  c->r[29]=0u+0x00000000u; // 801E7890
  c->r[31]=0u+0x00000000u; // 801E7894
L_801E7898:;
  c->r[0]=R8(c->r[28]+0x0000001Au); // 801E7898
  cmps(c,0,(int32_t)c->r[0],0); // 801E789C
  if (crb(c,2)) { goto L_801E78E4; } // 801E78A0
  cmps(c,0,(int32_t)c->r[27],0); // 801E78A4
  if (crb(c,2)) { goto L_801E78C4; } // 801E78A8
  c->r[4]=c->r[27]|c->r[27]; // 801E78AC
  c->r[3]=c->r[28]+0x0000000Au; // 801E78B0
  c->r[5]=0u+0x00000006u; // 801E78B4
  c->lr=0x801E78BCu; f_8020BD24(c); // 801E78B8
  cmps(c,0,(int32_t)c->r[3],0); // 801E78BC
  if (!crb(c,2)) { goto L_801E78E4; } // 801E78C0
L_801E78C4:;
  W8(c->r[28]+0x0000001Au,c->r[31]); // 801E78C4
  c->r[12]=R32(c->r[30]+0x000016BCu); // 801E78C8
  cmps(c,0,(int32_t)c->r[12],0); // 801E78CC
  if (crb(c,2)) { goto L_801E78E4; } // 801E78D0
  c->r[3]=c->r[28]+0x00000008u; // 801E78D4
  c->r[4]=0u+0x00000000u; // 801E78D8
  c->ctr=c->r[12]; // 801E78DC
  if (true) { c->lr=0x801E78E4u; dispatch(c,c->ctr); } // 801E78E0
L_801E78E4:;
  c->r[29]=c->r[29]+0x00000001u; // 801E78E4
  c->r[28]=c->r[28]+0x0000001Cu; // 801E78E8
  cmpu(c,0,c->r[29],0x0000000Cu); // 801E78EC
  if (crb(c,0)) { IRQCHK(c); goto L_801E7898; } // 801E78F0
  c->r[3]=0u+0x00000000u; // 801E78F4
L_801E78F8:;
  c->r[11]=c->r[1]+0x00000020u; // 801E78F8
  c->lr=0x801E7900u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E78FC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E7900
  c->lr=c->r[0]; // 801E7904
  c->r[1]=c->r[1]+0x00000020u; // 801E7908
  return; // 801E790C
}

// btm_inq_db_reset
void f_801E7910(Ctx* __restrict c) {
  trace_call(0x801E7910u);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E7910
  c->r[0]=c->lr; // 801E7914
  W32(c->r[1]+0x00000124u,c->r[0]); // 801E7918
  c->r[11]=c->r[1]+0x00000120u; // 801E791C
  c->lr=0x801E7924u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E7920
  c->r[29]=0u+0x80310000u; // 801E7924
  c->r[29]=c->r[29]+0xFFFF8818u; // 801E7928
  c->r[3]=c->r[29]+0x000016C4u; // 801E792C
  c->lr=0x801E7934u; f_801DCDB0(c); // 801E7930
  c->r[3]=R8(c->r[29]+0x00001848u); // 801E7934
  cmps(c,0,(int32_t)c->r[3],0); // 801E7938
  if (crb(c,2)) { goto L_801E7974; } // 801E793C
  c->r[0]=c->r[3]+0x000000FFu; // 801E7940
  c->r[3]=0u+0x00000000u; // 801E7944
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801E7948
  W8(c->r[29]+0x00001848u,c->r[3]); // 801E794C
  cmpu(c,0,c->r[0],0x00000001u); // 801E7950
  if (crb(c,1)) { goto L_801E7974; } // 801E7954
  c->r[12]=R32(c->r[29]+0x000016B0u); // 801E7958
  cmps(c,0,(int32_t)c->r[12],0); // 801E795C
  if (crb(c,2)) { goto L_801E7974; } // 801E7960
  W8(c->r[1]+0x00000009u,c->r[3]); // 801E7964
  c->r[3]=c->r[1]+0x00000009u; // 801E7968
  c->ctr=c->r[12]; // 801E796C
  if (true) { c->lr=0x801E7974u; dispatch(c,c->ctr); } // 801E7970
L_801E7974:;
  c->r[0]=R8(c->r[29]+0x000016AEu); // 801E7974
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801E7978
  if (crb(c,2)) { goto L_801E79C4; } // 801E797C
  c->r[3]=c->r[29]+0x00001680u; // 801E7980
  c->lr=0x801E7988u; f_801DCDB0(c); // 801E7984
  c->r[30]=0u+0x00000000u; // 801E7988
  c->r[3]=c->r[29]+0x000016A8u; // 801E798C
  W8(c->r[29]+0x000016AEu,c->r[30]); // 801E7990
  c->r[4]=0u+0x00000000u; // 801E7994
  c->r[5]=0u+0x00000006u; // 801E7998
  c->lr=0x801E79A0u; f_800046B4(c); // 801E799C
  c->r[12]=R32(c->r[29]+0x0000167Cu); // 801E79A0
  cmps(c,0,(int32_t)c->r[12],0); // 801E79A4
  if (crb(c,2)) { goto L_801E79C4; } // 801E79A8
  c->r[0]=0u+0x0000000Cu; // 801E79AC
  c->r[3]=c->r[1]+0x0000000Cu; // 801E79B0
  W16(c->r[1]+0x0000000Cu,c->r[0]); // 801E79B4
  c->ctr=c->r[12]; // 801E79B8
  if (true) { c->lr=0x801E79C0u; dispatch(c,c->ctr); } // 801E79BC
  W32(c->r[29]+0x0000167Cu,c->r[30]); // 801E79C0
L_801E79C4:;
  c->r[0]=R8(c->r[29]+0x00001844u); // 801E79C4
  cmps(c,0,(int32_t)c->r[0],0); // 801E79C8
  if (crb(c,2)) { goto L_801E79F8; } // 801E79CC
  c->r[12]=R32(c->r[29]+0x000016B8u); // 801E79D0
  c->r[0]=0u+0x00000000u; // 801E79D4
  W8(c->r[29]+0x00001844u,c->r[0]); // 801E79D8
  cmps(c,0,(int32_t)c->r[12],0); // 801E79DC
  if (crb(c,2)) { goto L_801E79F8; } // 801E79E0
  c->r[0]=0u+0x0000000Cu; // 801E79E4
  c->r[3]=c->r[1]+0x00000008u; // 801E79E8
  W8(c->r[1]+0x00000008u,c->r[0]); // 801E79EC
  c->ctr=c->r[12]; // 801E79F0
  if (true) { c->lr=0x801E79F8u; dispatch(c,c->ctr); } // 801E79F4
L_801E79F8:;
  c->r[30]=0u+0x00000000u; // 801E79F8
  c->r[31]=0u+0x80310000u; // 801E79FC
  c->r[31]=c->r[31]+0xFFFF8818u; // 801E7A00
  W8(c->r[29]+0x00001847u,c->r[30]); // 801E7A04
  c->r[28]=0u+0x00000000u; // 801E7A08
  W8(c->r[29]+0x00001845u,c->r[30]); // 801E7A0C
  c->r[27]=c->r[31]+0x000016E4u; // 801E7A10
  W32(c->r[29]+0x000016B4u,c->r[30]); // 801E7A14
L_801E7A18:;
  c->r[0]=R8(c->r[27]+0x0000001Au); // 801E7A18
  cmps(c,0,(int32_t)c->r[0],0); // 801E7A1C
  if (crb(c,2)) { goto L_801E7A44; } // 801E7A20
  W8(c->r[27]+0x0000001Au,c->r[30]); // 801E7A24
  c->r[12]=R32(c->r[31]+0x000016BCu); // 801E7A28
  cmps(c,0,(int32_t)c->r[12],0); // 801E7A2C
  if (crb(c,2)) { goto L_801E7A44; } // 801E7A30
  c->r[3]=c->r[27]+0x00000008u; // 801E7A34
  c->r[4]=0u+0x00000000u; // 801E7A38
  c->ctr=c->r[12]; // 801E7A3C
  if (true) { c->lr=0x801E7A44u; dispatch(c,c->ctr); } // 801E7A40
L_801E7A44:;
  c->r[28]=c->r[28]+0x00000001u; // 801E7A44
  c->r[27]=c->r[27]+0x0000001Cu; // 801E7A48
  cmpu(c,0,c->r[28],0x0000000Cu); // 801E7A4C
  if (crb(c,0)) { IRQCHK(c); goto L_801E7A18; } // 801E7A50
  c->r[31]=0u+0x80310000u; // 801E7A54
  c->r[31]=c->r[31]+0xFFFF8818u; // 801E7A58
  c->r[3]=R32(c->r[31]+0x000016DCu); // 801E7A5C
  cmps(c,0,(int32_t)c->r[3],0); // 801E7A60
  if (crb(c,2)) { goto L_801E7A74; } // 801E7A64
  c->lr=0x801E7A6Cu; f_801D9C70(c); // 801E7A68
  c->r[0]=0u+0x00000000u; // 801E7A6C
  W32(c->r[31]+0x000016DCu,c->r[0]); // 801E7A70
L_801E7A74:;
  c->r[0]=0u+0x00000000u; // 801E7A74
  c->r[11]=c->r[1]+0x00000120u; // 801E7A78
  W16(c->r[31]+0x000016E0u,c->r[0]); // 801E7A7C
  W16(c->r[31]+0x000016E2u,c->r[0]); // 801E7A80
  W16(c->r[29]+0x00001698u,c->r[0]); // 801E7A84
  W16(c->r[29]+0x0000169Au,c->r[0]); // 801E7A88
  W16(c->r[29]+0x000016A6u,c->r[0]); // 801E7A8C
  W16(c->r[29]+0x000016A4u,c->r[0]); // 801E7A90
  c->lr=0x801E7A98u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E7A94
  c->r[0]=R32(c->r[1]+0x00000124u); // 801E7A98
  c->lr=c->r[0]; // 801E7A9C
  c->r[1]=c->r[1]+0x00000120u; // 801E7AA0
  return; // 801E7AA4
}

// btm_inq_db_init
void f_801E7AA8(Ctx* __restrict c) {
  trace_call(0x801E7AA8u);
  return; // 801E7AA8
}

// btm_inq_find_bdaddr
void f_801E7AAC(Ctx* __restrict c) {
  trace_call(0x801E7AACu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E7AAC
  c->r[0]=c->lr; // 801E7AB0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E7AB4
  c->r[11]=c->r[1]+0x00000020u; // 801E7AB8
  c->lr=0x801E7AC0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E7ABC
  c->r[31]=0u+0x80310000u; // 801E7AC0
  c->r[27]=c->r[3]|c->r[3]; // 801E7AC4
  c->r[31]=c->r[31]+0xFFFF8818u; // 801E7AC8
  c->r[0]=R8(c->r[31]+0x00001848u); // 801E7ACC
  c->r[29]=R32(c->r[31]+0x000016DCu); // 801E7AD0
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801E7AD4
  if (!crb(c,2)) { goto L_801E7AE4; } // 801E7AD8
  cmps(c,0,(int32_t)c->r[29],0); // 801E7ADC
  if (!crb(c,2)) { goto L_801E7AEC; } // 801E7AE0
L_801E7AE4:;
  c->r[3]=0u+0x00000000u; // 801E7AE4
  goto L_801E7B70; // 801E7AE8
L_801E7AEC:;
  c->r[30]=R16(c->r[31]+0x000016E0u); // 801E7AEC
  c->r[28]=0u+0x00000000u; // 801E7AF0
  goto L_801E7B30; // 801E7AF4
L_801E7AF8:;
  c->r[4]=c->r[27]|c->r[27]; // 801E7AF8
  c->r[3]=c->r[29]+0x00000004u; // 801E7AFC
  c->r[5]=0u+0x00000006u; // 801E7B00
  c->lr=0x801E7B08u; f_8020BD24(c); // 801E7B04
  cmps(c,0,(int32_t)c->r[3],0); // 801E7B08
  if (!crb(c,2)) { goto L_801E7B28; } // 801E7B0C
  c->r[3]=R32(c->r[29]+0x00000000u); // 801E7B10
  c->r[0]=R32(c->r[31]+0x000016C0u); // 801E7B14
  cmpu(c,0,c->r[3],c->r[0]); // 801E7B18
  if (!crb(c,2)) { goto L_801E7B28; } // 801E7B1C
  c->r[3]=0u+0x00000001u; // 801E7B20
  goto L_801E7B70; // 801E7B24
L_801E7B28:;
  c->r[28]=c->r[28]+0x00000001u; // 801E7B28
  c->r[29]=c->r[29]+0x0000000Cu; // 801E7B2C
L_801E7B30:;
  c->r[3]=rotl(c->r[28],0)&0x0000FFFFu; // 801E7B30
  cmpu(c,0,c->r[3],c->r[30]); // 801E7B34
  if (crb(c,0)) { IRQCHK(c); goto L_801E7AF8; } // 801E7B38
  c->r[0]=R16(c->r[31]+0x000016E2u); // 801E7B3C
  cmpu(c,0,c->r[3],c->r[0]); // 801E7B40
  if (!crb(c,0)) { goto L_801E7B6C; } // 801E7B44
  c->r[0]=R32(c->r[31]+0x000016C0u); // 801E7B48
  c->r[4]=c->r[27]|c->r[27]; // 801E7B4C
  c->r[3]=c->r[29]+0x00000004u; // 801E7B50
  c->r[5]=0u+0x00000006u; // 801E7B54
  W32(c->r[29]+0x00000000u,c->r[0]); // 801E7B58
  c->lr=0x801E7B60u; f_80004364(c); // 801E7B5C
  c->r[3]=R16(c->r[31]+0x000016E0u); // 801E7B60
  c->r[0]=c->r[3]+0x00000001u; // 801E7B64
  W16(c->r[31]+0x000016E0u,c->r[0]); // 801E7B68
L_801E7B6C:;
  c->r[3]=0u+0x00000000u; // 801E7B6C
L_801E7B70:;
  c->r[11]=c->r[1]+0x00000020u; // 801E7B70
  c->lr=0x801E7B78u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E7B74
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E7B78
  c->lr=c->r[0]; // 801E7B7C
  c->r[1]=c->r[1]+0x00000020u; // 801E7B80
  return; // 801E7B84
}

// btm_inq_db_new
void f_801E7B88(Ctx* __restrict c) {
  trace_call(0x801E7B88u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E7B88
  c->r[0]=c->lr; // 801E7B8C
  c->r[4]=0u+0x80310000u; // 801E7B90
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E7B94
  c->r[4]=c->r[4]+0xFFFF8818u; // 801E7B98
  c->r[0]=0u+0x0000000Cu; // 801E7B9C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E7BA0
  c->r[31]=c->r[4]+0x000016E4u; // 801E7BA4
  c->r[4]=0u+0xFFFFFFFFu; // 801E7BA8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E7BAC
  c->r[30]=c->r[31]|c->r[31]; // 801E7BB0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E7BB4
  c->r[29]=c->r[3]|c->r[3]; // 801E7BB8
  c->r[3]=0u+0x00000000u; // 801E7BBC
  c->ctr=c->r[0]; // 801E7BC0
L_801E7BC4:;
  c->r[0]=R8(c->r[31]+0x0000001Au); // 801E7BC4
  cmps(c,0,(int32_t)c->r[0],0); // 801E7BC8
  if (!crb(c,2)) { goto L_801E7C00; } // 801E7BCC
  c->r[3]=c->r[31]|c->r[31]; // 801E7BD0
  c->r[4]=0u+0x00000000u; // 801E7BD4
  c->r[5]=0u+0x0000001Cu; // 801E7BD8
  c->lr=0x801E7BE0u; f_800046B4(c); // 801E7BDC
  c->r[4]=c->r[29]|c->r[29]; // 801E7BE0
  c->r[3]=c->r[31]+0x0000000Au; // 801E7BE4
  c->r[5]=0u+0x00000006u; // 801E7BE8
  c->lr=0x801E7BF0u; f_80004364(c); // 801E7BEC
  c->r[0]=0u+0x00000001u; // 801E7BF0
  c->r[3]=c->r[31]|c->r[31]; // 801E7BF4
  W8(c->r[31]+0x0000001Au,c->r[0]); // 801E7BF8
  goto L_801E7C70; // 801E7BFC
L_801E7C00:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 801E7C00
  cmpu(c,0,c->r[0],c->r[4]); // 801E7C04
  if (!crb(c,0)) { goto L_801E7C14; } // 801E7C08
  c->r[30]=c->r[31]|c->r[31]; // 801E7C0C
  c->r[4]=c->r[0]|c->r[0]; // 801E7C10
L_801E7C14:;
  c->r[3]=c->r[3]+0x00000001u; // 801E7C14
  c->r[31]=c->r[31]+0x0000001Cu; // 801E7C18
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E7BC4; } // 801E7C1C
  c->r[3]=0u+0x80310000u; // 801E7C20
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E7C24
  c->r[12]=R32(c->r[3]+0x000016BCu); // 801E7C28
  cmps(c,0,(int32_t)c->r[12],0); // 801E7C2C
  if (crb(c,2)) { goto L_801E7C44; } // 801E7C30
  c->r[3]=c->r[30]+0x00000008u; // 801E7C34
  c->r[4]=0u+0x00000000u; // 801E7C38
  c->ctr=c->r[12]; // 801E7C3C
  if (true) { c->lr=0x801E7C44u; dispatch(c,c->ctr); } // 801E7C40
L_801E7C44:;
  c->r[3]=c->r[30]|c->r[30]; // 801E7C44
  c->r[4]=0u+0x00000000u; // 801E7C48
  c->r[5]=0u+0x0000001Cu; // 801E7C4C
  c->lr=0x801E7C54u; f_800046B4(c); // 801E7C50
  c->r[4]=c->r[29]|c->r[29]; // 801E7C54
  c->r[3]=c->r[30]+0x0000000Au; // 801E7C58
  c->r[5]=0u+0x00000006u; // 801E7C5C
  c->lr=0x801E7C64u; f_80004364(c); // 801E7C60
  c->r[0]=0u+0x00000001u; // 801E7C64
  c->r[3]=c->r[30]|c->r[30]; // 801E7C68
  W8(c->r[30]+0x0000001Au,c->r[0]); // 801E7C6C
L_801E7C70:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E7C70
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E7C74
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E7C78
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E7C7C
  c->lr=c->r[0]; // 801E7C80
  c->r[1]=c->r[1]+0x00000020u; // 801E7C84
  return; // 801E7C88
}

// btm_set_inq_event_filter
void f_801E7C8C(Ctx* __restrict c) {
  trace_call(0x801E7C8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E7C8C
  c->r[0]=c->lr; // 801E7C90
  W32(c->r[1]+0x00000034u,c->r[0]); // 801E7C94
  c->r[11]=c->r[1]+0x00000030u; // 801E7C98
  c->lr=0x801E7CA0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E7C9C
  c->r[27]=c->r[3]|c->r[3]; // 801E7CA0
  c->r[28]=c->r[4]|c->r[4]; // 801E7CA4
  c->r[29]=c->r[1]+0x00000008u; // 801E7CA8
  c->r[30]=0u+0x00000006u; // 801E7CAC
  c->r[3]=0u+0x00000002u; // 801E7CB0
  c->lr=0x801E7CB8u; f_801D9B80(c); // 801E7CB4
  cmps(c,0,(int32_t)c->r[3],0); // 801E7CB8
  c->r[31]=c->r[3]|c->r[3]; // 801E7CBC
  if (crb(c,2)) { goto L_801E7D54; } // 801E7CC0
  cmps(c,0,(int32_t)c->r[27],1); // 801E7CC4
  if (crb(c,2)) { goto L_801E7CE8; } // 801E7CC8
  if (!crb(c,0)) { goto L_801E7CDC; } // 801E7CCC
  cmps(c,0,(int32_t)c->r[27],0); // 801E7CD0
  if (!crb(c,0)) { goto L_801E7D14; } // 801E7CD4
  goto L_801E7D1C; // 801E7CD8
L_801E7CDC:;
  cmps(c,0,(int32_t)c->r[27],3); // 801E7CDC
  if (!crb(c,0)) { goto L_801E7D1C; } // 801E7CE0
  goto L_801E7D0C; // 801E7CE4
L_801E7CE8:;
  c->r[3]=c->r[29]|c->r[29]; // 801E7CE8
  c->r[4]=c->r[28]|c->r[28]; // 801E7CEC
  c->r[5]=0u+0x00000003u; // 801E7CF0
  c->lr=0x801E7CF8u; f_80004364(c); // 801E7CF4
  c->r[3]=c->r[1]+0x0000000Bu; // 801E7CF8
  c->r[4]=c->r[28]+0x00000003u; // 801E7CFC
  c->r[5]=0u+0x00000003u; // 801E7D00
  c->lr=0x801E7D08u; f_80004364(c); // 801E7D04
  goto L_801E7D24; // 801E7D08
L_801E7D0C:;
  c->r[29]=c->r[28]|c->r[28]; // 801E7D0C
  goto L_801E7D24; // 801E7D10
L_801E7D14:;
  c->r[30]=0u+0x00000000u; // 801E7D14
  goto L_801E7D24; // 801E7D18
L_801E7D1C:;
  c->r[3]=0u+0x00000005u; // 801E7D1C
  goto L_801E7D58; // 801E7D20
L_801E7D24:;
  c->r[4]=0u+0x80310000u; // 801E7D24
  c->r[0]=0u+0x00000001u; // 801E7D28
  c->r[4]=c->r[4]+0xFFFF8818u; // 801E7D2C
  c->r[3]=c->r[31]|c->r[31]; // 801E7D30
  W8(c->r[4]+0x00001844u,c->r[0]); // 801E7D34
  c->r[5]=c->r[27]|c->r[27]; // 801E7D38
  c->r[6]=c->r[29]|c->r[29]; // 801E7D3C
  c->r[7]=c->r[30]|c->r[30]; // 801E7D40
  c->r[4]=0u+0x00000001u; // 801E7D44
  c->lr=0x801E7D4Cu; f_801F0B2C(c); // 801E7D48
  c->r[3]=0u+0x00000001u; // 801E7D4C
  goto L_801E7D58; // 801E7D50
L_801E7D54:;
  c->r[3]=0u+0x00000003u; // 801E7D54
L_801E7D58:;
  c->r[11]=c->r[1]+0x00000030u; // 801E7D58
  c->lr=0x801E7D60u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E7D5C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801E7D60
  c->lr=c->r[0]; // 801E7D64
  c->r[1]=c->r[1]+0x00000030u; // 801E7D68
  return; // 801E7D6C
}

// btm_event_filter_complete
void f_801E7D70(Ctx* __restrict c) {
  trace_call(0x801E7D70u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E7D70
  c->r[0]=c->lr; // 801E7D74
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E7D78
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E7D7C
  c->r[31]=0u+0x80310000u; // 801E7D80
  c->r[31]=c->r[31]+0xFFFF8818u; // 801E7D84
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E7D88
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E7D8C
  c->r[4]=R8(c->r[31]+0x00001845u); // 801E7D90
  c->r[29]=R32(c->r[31]+0x000016B8u); // 801E7D94
  cmps(c,0,(int32_t)c->r[4],0); // 801E7D98
  if (crb(c,2)) { goto L_801E7DAC; } // 801E7D9C
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801E7DA0
  W8(c->r[31]+0x00001845u,c->r[0]); // 801E7DA4
  goto L_801E7F74; // 801E7DA8
L_801E7DAC:;
  c->r[0]=R8(c->r[31]+0x00001844u); // 801E7DAC
  cmpu(c,0,c->r[0],0x00000001u); // 801E7DB0
  if (!crb(c,2)) { goto L_801E7F74; } // 801E7DB4
  c->r[5]=R8(c->r[3]+0x00000000u); // 801E7DB8
  cmps(c,0,(int32_t)c->r[5],0); // 801E7DBC
  if (crb(c,2)) { goto L_801E7DF0; } // 801E7DC0
  c->r[0]=R8(c->r[31]+0x000027C0u); // 801E7DC4
  cmpu(c,0,c->r[0],0x00000002u); // 801E7DC8
  if (crb(c,0)) { goto L_801E7DE4; } // 801E7DCC
  c->r[3]=0u+0x000D0000u; // 801E7DD0
  c->r[4]=0u+0x80280000u; // 801E7DD4
  c->r[3]=c->r[3]+0x00000001u; // 801E7DD8
  c->r[4]=c->r[4]+0xFFFFF5B0u; // 801E7DDC
  c->lr=0x801E7DE4u; f_801DC750(c); // 801E7DE0
L_801E7DE4:;
  c->r[0]=0u+0x0000000Au; // 801E7DE4
  W8(c->r[1]+0x00000008u,c->r[0]); // 801E7DE8
  goto L_801E7DF8; // 801E7DEC
L_801E7DF0:;
  c->r[0]=0u+0x00000000u; // 801E7DF0
  W8(c->r[1]+0x00000008u,c->r[0]); // 801E7DF4
L_801E7DF8:;
  c->r[3]=R8(c->r[31]+0x00001847u); // 801E7DF8
  cmps(c,0,(int32_t)c->r[3],0); // 801E7DFC
  if (!crb(c,2)) { goto L_801E7E28; } // 801E7E00
  c->r[0]=0u+0x00000000u; // 801E7E04
  cmps(c,0,(int32_t)c->r[29],0); // 801E7E08
  W8(c->r[31]+0x00001844u,c->r[0]); // 801E7E0C
  if (crb(c,2)) { goto L_801E7F74; } // 801E7E10
  c->r[12]=c->r[29]|c->r[29]; // 801E7E14
  c->r[3]=c->r[1]+0x00000008u; // 801E7E18
  c->ctr=c->r[12]; // 801E7E1C
  if (true) { c->lr=0x801E7E24u; dispatch(c,c->ctr); } // 801E7E20
  goto L_801E7F74; // 801E7E24
L_801E7E28:;
  cmps(c,0,(int32_t)c->r[0],0); // 801E7E28
  if (crb(c,2)) { goto L_801E7E4C; } // 801E7E2C
  c->r[3]=0u+0x0000000Au; // 801E7E30
  c->lr=0x801E7E38u; f_801E8208(c); // 801E7E34
  c->r[0]=0u+0x00000000u; // 801E7E38
  W8(c->r[31]+0x00001844u,c->r[0]); // 801E7E3C
  W8(c->r[31]+0x00001848u,c->r[0]); // 801E7E40
  W8(c->r[31]+0x00001847u,c->r[0]); // 801E7E44
  goto L_801E7F74; // 801E7E48
L_801E7E4C:;
  cmpu(c,0,c->r[3],0x00000001u); // 801E7E4C
  if (!crb(c,2)) { goto L_801E7E90; } // 801E7E50
  c->r[3]=R8(c->r[31]+0x00001837u); // 801E7E54
  c->r[4]=c->r[31]+0x00001838u; // 801E7E58
  c->lr=0x801E7E60u; f_801E7C8C(c); // 801E7E5C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801E7E60
  W8(c->r[1]+0x00000008u,c->r[3]); // 801E7E64
  cmpu(c,0,c->r[0],0x00000001u); // 801E7E68
  if (!crb(c,2)) { goto L_801E7E7C; } // 801E7E6C
  c->r[0]=0u+0x00000002u; // 801E7E70
  W8(c->r[31]+0x00001847u,c->r[0]); // 801E7E74
  goto L_801E7F74; // 801E7E78
L_801E7E7C:;
  c->r[0]=0u+0x00000000u; // 801E7E7C
  c->r[3]=0u+0x0000000Au; // 801E7E80
  W8(c->r[31]+0x00001844u,c->r[0]); // 801E7E84
  c->lr=0x801E7E8Cu; f_801E8208(c); // 801E7E88
  goto L_801E7F74; // 801E7E8C
L_801E7E90:;
  c->r[4]=R8(c->r[31]+0x00001836u); // 801E7E90
  c->r[0]=0u+0x00000003u; // 801E7E94
  c->r[3]=0u+0x00000000u; // 801E7E98
  W8(c->r[31]+0x00001847u,c->r[0]); // 801E7E9C
  cmpu(c,0,c->r[4],0x0000000Cu); // 801E7EA0
  c->r[0]=0u+0x0000000Cu; // 801E7EA4
  W8(c->r[31]+0x00001844u,c->r[3]); // 801E7EA8
  if (crb(c,1)) { goto L_801E7EB4; } // 801E7EAC
  c->r[0]=c->r[4]|c->r[4]; // 801E7EB0
L_801E7EB4:;
  c->r[3]=R8(c->r[31]+0x00001848u); // 801E7EB4
  c->r[29]=c->r[2]+0xFFFFA290u; // 801E7EB8
  W8(c->r[31]+0x00001836u,c->r[0]); // 801E7EBC
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 801E7EC0
  if (crb(c,2)) { goto L_801E7ECC; } // 801E7EC4
  c->r[29]=c->r[2]+0xFFFFA294u; // 801E7EC8
L_801E7ECC:;
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 801E7ECC
  if (crb(c,2)) { goto L_801E7F00; } // 801E7ED0
  c->r[3]=R16(c->r[31]+0x00001842u); // 801E7ED4
  c->r[5]=c->r[29]|c->r[29]; // 801E7ED8
  c->r[4]=R16(c->r[31]+0x00001840u); // 801E7EDC
  c->r[6]=R8(c->r[31]+0x00001835u); // 801E7EE0
  c->r[7]=R8(c->r[31]+0x00001836u); // 801E7EE4
  c->lr=0x801E7EECu; f_801EF754(c); // 801E7EE8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801E7EEC
  if (!crb(c,2)) { goto L_801E7F74; } // 801E7EF0
  c->r[3]=0u+0x00000003u; // 801E7EF4
  c->lr=0x801E7EFCu; f_801E8208(c); // 801E7EF8
  goto L_801E7F74; // 801E7EFC
L_801E7F00:;
  c->r[30]=0u+0x80310000u; // 801E7F00
  c->r[30]=c->r[30]+0xFFFF8818u; // 801E7F04
  c->r[3]=R32(c->r[30]+0x000016DCu); // 801E7F08
  cmps(c,0,(int32_t)c->r[3],0); // 801E7F0C
  if (crb(c,2)) { goto L_801E7F20; } // 801E7F10
  c->lr=0x801E7F18u; f_801D9C70(c); // 801E7F14
  c->r[0]=0u+0x00000000u; // 801E7F18
  W32(c->r[30]+0x000016DCu,c->r[0]); // 801E7F1C
L_801E7F20:;
  c->r[0]=0u+0x00000000u; // 801E7F20
  c->r[3]=0u+0x00000708u; // 801E7F24
  W16(c->r[30]+0x000016E0u,c->r[0]); // 801E7F28
  W16(c->r[30]+0x000016E2u,c->r[0]); // 801E7F2C
  c->lr=0x801E7F34u; f_801D99E0(c); // 801E7F30
  cmps(c,0,(int32_t)c->r[3],0); // 801E7F34
  W32(c->r[31]+0x000016DCu,c->r[3]); // 801E7F38
  if (crb(c,2)) { goto L_801E7F54; } // 801E7F3C
  c->r[0]=0u+0x00000096u; // 801E7F40
  c->r[4]=0u+0x00000000u; // 801E7F44
  W16(c->r[31]+0x000016E2u,c->r[0]); // 801E7F48
  c->r[5]=0u+0x00000708u; // 801E7F4C
  c->lr=0x801E7F54u; f_800046B4(c); // 801E7F50
L_801E7F54:;
  c->r[4]=R8(c->r[31]+0x00001835u); // 801E7F54
  c->r[3]=c->r[29]|c->r[29]; // 801E7F58
  c->r[5]=0u+0x00000000u; // 801E7F5C
  c->lr=0x801E7F64u; f_801EF64C(c); // 801E7F60
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801E7F64
  if (!crb(c,2)) { goto L_801E7F74; } // 801E7F68
  c->r[3]=0u+0x00000003u; // 801E7F6C
  c->lr=0x801E7F74u; f_801E8208(c); // 801E7F70
L_801E7F74:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E7F74
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E7F78
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E7F7C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E7F80
  c->lr=c->r[0]; // 801E7F84
  c->r[1]=c->r[1]+0x00000020u; // 801E7F88
  return; // 801E7F8C
}

// btm_process_inq_results
void f_801E7F90(Ctx* __restrict c) {
  trace_call(0x801E7F90u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E7F90
  c->r[0]=c->lr; // 801E7F94
  W32(c->r[1]+0x00000064u,c->r[0]); // 801E7F98
  c->r[11]=c->r[1]+0x00000060u; // 801E7F9C
  c->lr=0x801E7FA4u; { W32(c->r[11]+0xFFFFFFC0u,c->r[16]); W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E7FA0
  c->r[5]=0u+0x80310000u; // 801E7FA4
  c->r[18]=c->r[4]|c->r[4]; // 801E7FA8
  c->r[27]=c->r[5]+0xFFFF8818u; // 801E7FAC
  c->r[23]=0u+0x00000001u; // 801E7FB0
  c->r[0]=R8(c->r[27]+0x00001848u); // 801E7FB4
  c->r[21]=0u+0x00000000u; // 801E7FB8
  c->r[22]=R32(c->r[27]+0x000016B4u); // 801E7FBC
  c->r[20]=0u+0x00000000u; // 801E7FC0
  cmps(c,0,(int32_t)c->r[0],0); // 801E7FC4
  if (crb(c,2)) { goto L_801E81F0; } // 801E7FC8
  c->r[28]=R8(c->r[3]+0x00000000u); // 801E7FCC
  c->r[17]=c->r[3]+0x00000001u; // 801E7FD0
  c->r[26]=0u+0x00000000u; // 801E7FD4
  c->r[31]=0u+0x0000007Fu; // 801E7FD8
  c->r[16]=0u+0x00000000u; // 801E7FDC
  goto L_801E81E4; // 801E7FE0
L_801E7FE4:;
  c->r[0]=R8(c->r[17]+0x00000000u); // 801E7FE4
  cmps(c,0,(int32_t)c->r[18],0); // 801E7FE8
  W8(c->r[1]+0x00000011u,c->r[0]); // 801E7FEC
  c->r[0]=R8(c->r[17]+0x00000001u); // 801E7FF0
  W8(c->r[1]+0x00000010u,c->r[0]); // 801E7FF4
  c->r[0]=R8(c->r[17]+0x00000002u); // 801E7FF8
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 801E7FFC
  c->r[0]=R8(c->r[17]+0x00000003u); // 801E8000
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 801E8004
  c->r[0]=R8(c->r[17]+0x00000004u); // 801E8008
  W8(c->r[1]+0x0000000Du,c->r[0]); // 801E800C
  c->r[0]=R8(c->r[17]+0x00000005u); // 801E8010
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801E8014
  c->r[29]=R8(c->r[17]+0x00000006u); // 801E8018
  c->r[30]=R8(c->r[17]+0x00000007u); // 801E801C
  c->r[17]=c->r[17]+0x00000008u; // 801E8020
  if (!crb(c,2)) { goto L_801E8030; } // 801E8024
  c->r[21]=R8(c->r[17]+0x00000000u); // 801E8028
  c->r[17]=c->r[17]+0x00000001u; // 801E802C
L_801E8030:;
  c->r[0]=R8(c->r[17]+0x00000000u); // 801E8030
  cmps(c,0,(int32_t)c->r[18],0); // 801E8034
  W8(c->r[1]+0x0000000Au,c->r[0]); // 801E8038
  c->r[0]=R8(c->r[17]+0x00000001u); // 801E803C
  W8(c->r[1]+0x00000009u,c->r[0]); // 801E8040
  c->r[0]=R8(c->r[17]+0x00000002u); // 801E8044
  W8(c->r[1]+0x00000008u,c->r[0]); // 801E8048
  c->r[0]=R8(c->r[17]+0x00000004u); // 801E804C
  c->r[3]=R8(c->r[17]+0x00000003u); // 801E8050
  c->r[17]=c->r[17]+0x00000005u; // 801E8054
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801E8058
  c->r[0]=c->r[3]+c->r[0]; // 801E805C
  c->r[19]=rotl(c->r[0],0)&0x0000FFFFu; // 801E8060
  if (crb(c,2)) { goto L_801E8070; } // 801E8064
  c->r[20]=R8(c->r[17]+0x00000000u); // 801E8068
  c->r[17]=c->r[17]+0x00000001u; // 801E806C
L_801E8070:;
  c->r[3]=c->r[1]+0x0000000Cu; // 801E8070
  c->lr=0x801E8078u; f_801E7AAC(c); // 801E8074
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801E8078
  if (!crb(c,2)) { goto L_801E81E0; } // 801E807C
  c->r[12]=R32(c->r[27]+0x0000184Cu); // 801E8080
  cmps(c,0,(int32_t)c->r[12],0); // 801E8084
  if (crb(c,2)) { goto L_801E80A4; } // 801E8088
  c->r[3]=c->r[1]+0x0000000Cu; // 801E808C
  c->r[4]=c->r[1]+0x00000008u; // 801E8090
  c->ctr=c->r[12]; // 801E8094
  if (true) { c->lr=0x801E809Cu; dispatch(c,c->ctr); } // 801E8098
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801E809C
  if (crb(c,2)) { goto L_801E81E0; } // 801E80A0
L_801E80A4:;
  c->r[25]=c->r[27]+0x000016E4u; // 801E80A4
  c->r[24]=0u+0x00000000u; // 801E80A8
L_801E80AC:;
  c->r[0]=R8(c->r[25]+0x0000001Au); // 801E80AC
  cmps(c,0,(int32_t)c->r[0],0); // 801E80B0
  if (crb(c,2)) { goto L_801E80D4; } // 801E80B4
  c->r[3]=c->r[25]+0x0000000Au; // 801E80B8
  c->r[4]=c->r[1]+0x0000000Cu; // 801E80BC
  c->r[5]=0u+0x00000006u; // 801E80C0
  c->lr=0x801E80C8u; f_8020BD24(c); // 801E80C4
  cmps(c,0,(int32_t)c->r[3],0); // 801E80C8
  if (!crb(c,2)) { goto L_801E80D4; } // 801E80CC
  goto L_801E80E8; // 801E80D0
L_801E80D4:;
  c->r[24]=c->r[24]+0x00000001u; // 801E80D4
  c->r[25]=c->r[25]+0x0000001Cu; // 801E80D8
  cmpu(c,0,c->r[24],0x0000000Cu); // 801E80DC
  if (crb(c,0)) { IRQCHK(c); goto L_801E80AC; } // 801E80E0
  c->r[25]=0u+0x00000000u; // 801E80E4
L_801E80E8:;
  cmps(c,0,(int32_t)c->r[25],0); // 801E80E8
  if (!crb(c,2)) { goto L_801E8104; } // 801E80EC
  c->r[3]=c->r[1]+0x0000000Cu; // 801E80F0
  c->lr=0x801E80F8u; f_801E7B88(c); // 801E80F4
  c->r[25]=c->r[3]|c->r[3]; // 801E80F8
  c->r[23]=0u+0x00000001u; // 801E80FC
  goto L_801E8118; // 801E8100
L_801E8104:;
  c->r[3]=R32(c->r[25]+0x00000004u); // 801E8104
  c->r[0]=R32(c->r[27]+0x000016C0u); // 801E8108
  cmpu(c,0,c->r[3],c->r[0]); // 801E810C
  if (!crb(c,2)) { goto L_801E8118; } // 801E8110
  c->r[23]=0u+0x00000000u; // 801E8114
L_801E8118:;
  cmpu(c,0,c->r[23],0x00000001u); // 801E8118
  if (!crb(c,2)) { goto L_801E81E0; } // 801E811C
  W8(c->r[25]+0x00000013u,c->r[29]); // 801E8120
  cmps(c,0,(int32_t)c->r[18],0); // 801E8124
  c->r[5]=R8(c->r[1]+0x00000008u); // 801E8128
  c->r[0]=c->r[19]|0x00008000u; // 801E812C
  W8(c->r[25]+0x00000014u,c->r[30]); // 801E8130
  c->r[24]=c->r[25]+0x00000008u; // 801E8134
  c->r[4]=R8(c->r[1]+0x00000009u); // 801E8138
  W8(c->r[25]+0x00000015u,c->r[21]); // 801E813C
  c->r[3]=R8(c->r[1]+0x0000000Au); // 801E8140
  W8(c->r[25]+0x00000010u,c->r[5]); // 801E8144
  W8(c->r[25]+0x00000011u,c->r[4]); // 801E8148
  W8(c->r[25]+0x00000012u,c->r[3]); // 801E814C
  W16(c->r[25]+0x00000008u,c->r[0]); // 801E8150
  if (crb(c,2)) { goto L_801E8160; } // 801E8154
  W8(c->r[24]+0x0000000Eu,c->r[20]); // 801E8158
  goto L_801E8164; // 801E815C
L_801E8160:;
  W8(c->r[24]+0x0000000Eu,c->r[31]); // 801E8160
L_801E8164:;
  c->lr=0x801E8168u; f_801DAA50(c); // 801E8164
  W32(c->r[25]+0x00000000u,c->r[3]); // 801E8168
  c->r[0]=R32(c->r[27]+0x000016C0u); // 801E816C
  W32(c->r[25]+0x00000004u,c->r[0]); // 801E8170
  c->r[0]=R8(c->r[27]+0x00001848u); // 801E8174
  c->r[3]=R8(c->r[27]+0x0000183Fu); // 801E8178
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801E817C
  c->r[0]=c->r[3]+0x00000001u; // 801E8180
  W8(c->r[27]+0x0000183Fu,c->r[0]); // 801E8184
  if (!crb(c,2)) { goto L_801E81A8; } // 801E8188
  c->r[3]=R8(c->r[27]+0x00001836u); // 801E818C
  cmps(c,0,(int32_t)c->r[3],0); // 801E8190
  if (crb(c,2)) { goto L_801E81A8; } // 801E8194
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801E8198
  cmpu(c,0,c->r[0],c->r[3]); // 801E819C
  if (!crb(c,2)) { goto L_801E81A8; } // 801E81A0
  c->lr=0x801E81A8u; f_801EF6F4(c); // 801E81A4
L_801E81A8:;
  cmps(c,0,(int32_t)c->r[22],0); // 801E81A8
  W8(c->r[25]+0x00000018u,c->r[16]); // 801E81AC
  if (crb(c,2)) { goto L_801E81C4; } // 801E81B0
  c->r[12]=c->r[22]|c->r[22]; // 801E81B4
  c->r[3]=c->r[24]|c->r[24]; // 801E81B8
  c->ctr=c->r[12]; // 801E81BC
  if (true) { c->lr=0x801E81C4u; dispatch(c,c->ctr); } // 801E81C0
L_801E81C4:;
  c->r[12]=R32(c->r[27]+0x000016BCu); // 801E81C4
  cmps(c,0,(int32_t)c->r[12],0); // 801E81C8
  if (crb(c,2)) { goto L_801E81E0; } // 801E81CC
  c->r[3]=c->r[25]+0x00000008u; // 801E81D0
  c->r[4]=0u+0x00000001u; // 801E81D4
  c->ctr=c->r[12]; // 801E81D8
  if (true) { c->lr=0x801E81E0u; dispatch(c,c->ctr); } // 801E81DC
L_801E81E0:;
  c->r[26]=c->r[26]+0x00000001u; // 801E81E0
L_801E81E4:;
  c->r[0]=rotl(c->r[26],0)&0x000000FFu; // 801E81E4
  cmpu(c,0,c->r[0],c->r[28]); // 801E81E8
  if (crb(c,0)) { IRQCHK(c); goto L_801E7FE4; } // 801E81EC
L_801E81F0:;
  c->r[11]=c->r[1]+0x00000060u; // 801E81F0
  c->lr=0x801E81F8u; { c->r[16]=R32(c->r[11]+0xFFFFFFC0u); c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E81F4
  c->r[0]=R32(c->r[1]+0x00000064u); // 801E81F8
  c->lr=c->r[0]; // 801E81FC
  c->r[1]=c->r[1]+0x00000060u; // 801E8200
  return; // 801E8204
}

// btm_process_inq_complete
void f_801E8208(Ctx* __restrict c) {
  trace_call(0x801E8208u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E8208
  c->r[0]=c->lr; // 801E820C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E8210
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E8214
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E8218
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E821C
  c->r[29]=0u+0x80310000u; // 801E8220
  c->r[29]=c->r[29]+0xFFFF8818u; // 801E8224
  W32(c->r[1]+0x00000010u,c->r[28]); // 801E8228
  c->r[0]=R8(c->r[29]+0x00001848u); // 801E822C
  c->r[28]=R32(c->r[29]+0x000016B0u); // 801E8230
  cmps(c,0,(int32_t)c->r[0],0); // 801E8234
  if (crb(c,2)) { goto L_801E82EC; } // 801E8238
  c->r[4]=R32(c->r[29]+0x000016C0u); // 801E823C
  cmps(c,0,(int32_t)c->r[3],0); // 801E8240
  c->r[3]=0u+0x0000000Au; // 801E8244
  c->r[0]=c->r[4]+0x00000001u; // 801E8248
  W32(c->r[29]+0x000016C0u,c->r[0]); // 801E824C
  if (!crb(c,2)) { goto L_801E8258; } // 801E8250
  c->r[3]=0u+0x00000000u; // 801E8254
L_801E8258:;
  c->r[0]=R8(c->r[29]+0x00001848u); // 801E8258
  W8(c->r[29]+0x0000183Eu,c->r[3]); // 801E825C
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801E8260
  if (!crb(c,2)) { goto L_801E82EC; } // 801E8264
  c->r[31]=0u+0x80310000u; // 801E8268
  c->r[30]=0u+0x00000000u; // 801E826C
  c->r[31]=c->r[31]+0xFFFF8818u; // 801E8270
  W32(c->r[29]+0x000016B4u,c->r[30]); // 801E8274
  c->r[3]=R32(c->r[31]+0x000016DCu); // 801E8278
  W8(c->r[29]+0x00001848u,c->r[30]); // 801E827C
  cmps(c,0,(int32_t)c->r[3],0); // 801E8280
  W8(c->r[29]+0x00001847u,c->r[30]); // 801E8284
  W32(c->r[29]+0x000016B0u,c->r[30]); // 801E8288
  if (crb(c,2)) { goto L_801E8298; } // 801E828C
  c->lr=0x801E8294u; f_801D9C70(c); // 801E8290
  W32(c->r[31]+0x000016DCu,c->r[30]); // 801E8294
L_801E8298:;
  c->r[3]=0u+0x80310000u; // 801E8298
  c->r[4]=0u+0x00000000u; // 801E829C
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E82A0
  W16(c->r[31]+0x000016E0u,c->r[4]); // 801E82A4
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801E82A8
  W16(c->r[31]+0x000016E2u,c->r[4]); // 801E82AC
  cmpu(c,0,c->r[0],0x00000005u); // 801E82B0
  if (crb(c,0)) { goto L_801E82D4; } // 801E82B4
  c->r[3]=0u+0x000D0000u; // 801E82B8
  c->r[4]=0u+0x80280000u; // 801E82BC
  c->r[5]=R8(c->r[29]+0x0000183Eu); // 801E82C0
  c->r[3]=c->r[3]+0x00000004u; // 801E82C4
  c->r[6]=R8(c->r[29]+0x0000183Fu); // 801E82C8
  c->r[4]=c->r[4]+0xFFFFF5ECu; // 801E82CC
  c->lr=0x801E82D4u; f_801DC770(c); // 801E82D0
L_801E82D4:;
  cmps(c,0,(int32_t)c->r[28],0); // 801E82D4
  if (crb(c,2)) { goto L_801E82EC; } // 801E82D8
  c->r[12]=c->r[28]|c->r[28]; // 801E82DC
  c->r[3]=c->r[29]+0x0000183Eu; // 801E82E0
  c->ctr=c->r[12]; // 801E82E4
  if (true) { c->lr=0x801E82ECu; dispatch(c,c->ctr); } // 801E82E8
L_801E82EC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E82EC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E82F0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E82F4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E82F8
  c->r[28]=R32(c->r[1]+0x00000010u); // 801E82FC
  c->lr=c->r[0]; // 801E8300
  c->r[1]=c->r[1]+0x00000020u; // 801E8304
  return; // 801E8308
}

// btm_initiate_rem_name
void f_801E830C(Ctx* __restrict c) {
  trace_call(0x801E830Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E830C
  c->r[0]=c->lr; // 801E8310
  W32(c->r[1]+0x00000034u,c->r[0]); // 801E8314
  c->r[11]=c->r[1]+0x00000030u; // 801E8318
  c->lr=0x801E8320u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E831C
  c->r[31]=0u+0x80310000u; // 801E8320
  c->r[23]=c->r[3]|c->r[3]; // 801E8324
  c->r[24]=c->r[4]|c->r[4]; // 801E8328
  c->r[25]=c->r[5]|c->r[5]; // 801E832C
  c->r[26]=c->r[6]|c->r[6]; // 801E8330
  c->r[27]=c->r[7]|c->r[7]; // 801E8334
  c->r[31]=c->r[31]+0xFFFF8818u; // 801E8338
  c->r[30]=0u+0x00000001u; // 801E833C
  c->r[29]=0u+0x00000001u; // 801E8340
  c->r[28]=0u+0x00000001u; // 801E8344
  c->lr=0x801E834Cu; f_801E5334(c); // 801E8348
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801E834C
  if (!crb(c,2)) { goto L_801E835C; } // 801E8350
  c->r[3]=0u+0x00000006u; // 801E8354
  goto L_801E8444; // 801E8358
L_801E835C:;
  c->r[3]=R8(c->r[31]+0x000016AEu); // 801E835C
  c->r[0]=c->r[3]&c->r[25]; cr0(c,c->r[0]); // 801E8360
  if (!crb(c,2)) { goto L_801E843C; } // 801E8364
  cmpu(c,0,c->r[25],0x00000001u); // 801E8368
  if (!crb(c,2)) { goto L_801E83A8; } // 801E836C
  cmps(c,0,(int32_t)c->r[3],0); // 801E8370
  if (crb(c,2)) { goto L_801E83A0; } // 801E8374
  c->r[3]=c->r[23]|c->r[23]; // 801E8378
  c->r[4]=c->r[31]+0x000016A8u; // 801E837C
  c->r[5]=0u+0x00000006u; // 801E8380
  c->lr=0x801E8388u; f_8020BD24(c); // 801E8384
  cmps(c,0,(int32_t)c->r[3],0); // 801E8388
  if (!crb(c,2)) { goto L_801E8398; } // 801E838C
  c->r[30]=0u+0x00000000u; // 801E8390
  goto L_801E83A0; // 801E8394
L_801E8398:;
  c->r[3]=0u+0x00000002u; // 801E8398
  goto L_801E8444; // 801E839C
L_801E83A0:;
  W32(c->r[31]+0x0000167Cu,c->r[27]); // 801E83A0
  goto L_801E83B8; // 801E83A4
L_801E83A8:;
  cmps(c,0,(int32_t)c->r[3],0); // 801E83A8
  if (crb(c,2)) { goto L_801E83B8; } // 801E83AC
  c->r[3]=0u+0x00000002u; // 801E83B0
  goto L_801E8444; // 801E83B4
L_801E83B8:;
  cmps(c,0,(int32_t)c->r[30],0); // 801E83B8
  if (crb(c,2)) { goto L_801E841C; } // 801E83BC
  c->r[4]=c->r[23]|c->r[23]; // 801E83C0
  c->r[3]=c->r[31]+0x000016A8u; // 801E83C4
  c->r[5]=0u+0x00000006u; // 801E83C8
  c->lr=0x801E83D0u; f_80004364(c); // 801E83CC
  c->r[5]=c->r[26]|c->r[26]; // 801E83D0
  c->r[3]=c->r[31]+0x00001680u; // 801E83D4
  c->r[4]=0u+0x0000000Au; // 801E83D8
  c->lr=0x801E83E0u; f_801DCD40(c); // 801E83DC
  cmps(c,0,(int32_t)c->r[24],0); // 801E83E0
  if (crb(c,2)) { goto L_801E8404; } // 801E83E4
  c->r[0]=R16(c->r[24]+0x00000000u); // 801E83E8
  c->r[3]=c->r[23]|c->r[23]; // 801E83EC
  c->r[4]=R8(c->r[24]+0x0000000Bu); // 801E83F0
  c->r[5]=R8(c->r[24]+0x0000000Du); // 801E83F4
  c->r[6]=c->r[0]|0x00008000u; // 801E83F8
  c->lr=0x801E8400u; f_801F0120(c); // 801E83FC
  goto L_801E8418; // 801E8400
L_801E8404:;
  c->r[3]=c->r[23]|c->r[23]; // 801E8404
  c->r[4]=0u+0x00000001u; // 801E8408
  c->r[5]=0u+0x00000000u; // 801E840C
  c->r[6]=0u+0x00000000u; // 801E8410
  c->lr=0x801E8418u; f_801F0120(c); // 801E8414
L_801E8418:;
  c->r[29]=c->r[3]|c->r[3]; // 801E8418
L_801E841C:;
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; cr0(c,c->r[0]); // 801E841C
  if (crb(c,2)) { goto L_801E8434; } // 801E8420
  c->r[0]=R8(c->r[31]+0x000016AEu); // 801E8424
  c->r[0]=c->r[0]|c->r[25]; // 801E8428
  W8(c->r[31]+0x000016AEu,c->r[0]); // 801E842C
  goto L_801E8440; // 801E8430
L_801E8434:;
  c->r[28]=0u+0x00000003u; // 801E8434
  goto L_801E8440; // 801E8438
L_801E843C:;
  c->r[28]=0u+0x00000002u; // 801E843C
L_801E8440:;
  c->r[3]=c->r[28]|c->r[28]; // 801E8440
L_801E8444:;
  c->r[11]=c->r[1]+0x00000030u; // 801E8444
  c->lr=0x801E844Cu; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E8448
  c->r[0]=R32(c->r[1]+0x00000034u); // 801E844C
  c->lr=c->r[0]; // 801E8450
  c->r[1]=c->r[1]+0x00000030u; // 801E8454
  return; // 801E8458
}

// btm_process_remote_name
void f_801E845C(Ctx* __restrict c) {
  trace_call(0x801E845Cu);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E845C
  c->r[0]=c->lr; // 801E8460
  W32(c->r[1]+0x00000124u,c->r[0]); // 801E8464
  c->r[11]=c->r[1]+0x00000120u; // 801E8468
  c->lr=0x801E8470u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E846C
  c->r[31]=0u+0x80310000u; // 801E8470
  c->r[26]=c->r[4]|c->r[4]; // 801E8474
  c->r[31]=c->r[31]+0xFFFF8818u; // 801E8478
  c->r[27]=c->r[5]|c->r[5]; // 801E847C
  c->r[30]=R32(c->r[31]+0x0000167Cu); // 801E8480
  c->r[28]=c->r[6]|c->r[6]; // 801E8484
  c->r[29]=R8(c->r[31]+0x000016AEu); // 801E8488
  c->r[3]=c->r[31]+0x00001680u; // 801E848C
  c->lr=0x801E8494u; f_801DCDB0(c); // 801E8490
  c->r[3]=0u+0x00000000u; // 801E8494
  cmps(c,0,(int32_t)c->r[28],0); // 801E8498
  W8(c->r[31]+0x000016AEu,c->r[3]); // 801E849C
  if (!crb(c,2)) { goto L_801E8554; } // 801E84A0
  cmpu(c,0,c->r[27],0x000000F8u); // 801E84A4
  c->r[4]=c->r[1]+0x0000000Cu; // 801E84A8
  c->r[3]=0u+0x000000F8u; // 801E84AC
  if (!crb(c,0)) { goto L_801E84B8; } // 801E84B0
  c->r[3]=c->r[27]|c->r[27]; // 801E84B4
L_801E84B8:;
  c->r[5]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[5]); // 801E84B8
  c->r[0]=0u+0x00000000u; // 801E84BC
  W16(c->r[1]+0x0000000Au,c->r[3]); // 801E84C0
  W16(c->r[1]+0x00000008u,c->r[0]); // 801E84C4
  c->r[3]=c->r[5]|c->r[5]; // 801E84C8
  if (crb(c,2)) { goto L_801E8564; } // 801E84CC
  c->r[0]=rotl(c->r[5],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 801E84D0
  c->ctr=c->r[0]; // 801E84D4
  if (crb(c,2)) { goto L_801E8534; } // 801E84D8
L_801E84DC:;
  c->r[0]=R8(c->r[26]+0x00000000u); // 801E84DC
  c->r[5]=c->r[5]+0xFFFFFFF8u; // 801E84E0
  W8(c->r[4]+0x00000000u,c->r[0]); // 801E84E4
  c->r[0]=R8(c->r[26]+0x00000001u); // 801E84E8
  W8(c->r[4]+0x00000001u,c->r[0]); // 801E84EC
  c->r[0]=R8(c->r[26]+0x00000002u); // 801E84F0
  W8(c->r[4]+0x00000002u,c->r[0]); // 801E84F4
  c->r[0]=R8(c->r[26]+0x00000003u); // 801E84F8
  W8(c->r[4]+0x00000003u,c->r[0]); // 801E84FC
  c->r[0]=R8(c->r[26]+0x00000004u); // 801E8500
  W8(c->r[4]+0x00000004u,c->r[0]); // 801E8504
  c->r[0]=R8(c->r[26]+0x00000005u); // 801E8508
  W8(c->r[4]+0x00000005u,c->r[0]); // 801E850C
  c->r[0]=R8(c->r[26]+0x00000006u); // 801E8510
  W8(c->r[4]+0x00000006u,c->r[0]); // 801E8514
  c->r[0]=R8(c->r[26]+0x00000007u); // 801E8518
  c->r[26]=c->r[26]+0x00000008u; // 801E851C
  W8(c->r[4]+0x00000007u,c->r[0]); // 801E8520
  c->r[4]=c->r[4]+0x00000008u; // 801E8524
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E84DC; } // 801E8528
  c->r[3]=c->r[3]&0x00000007u; cr0(c,c->r[3]); // 801E852C
  if (crb(c,2)) { goto L_801E8564; } // 801E8530
L_801E8534:;
  c->ctr=c->r[3]; // 801E8534
L_801E8538:;
  c->r[0]=R8(c->r[26]+0x00000000u); // 801E8538
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801E853C
  c->r[26]=c->r[26]+0x00000001u; // 801E8540
  W8(c->r[4]+0x00000000u,c->r[0]); // 801E8544
  c->r[4]=c->r[4]+0x00000001u; // 801E8548
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E8538; } // 801E854C
  goto L_801E8564; // 801E8550
L_801E8554:;
  c->r[0]=0u+0x00000009u; // 801E8554
  W16(c->r[1]+0x0000000Au,c->r[3]); // 801E8558
  W16(c->r[1]+0x00000008u,c->r[0]); // 801E855C
  W8(c->r[1]+0x0000000Cu,c->r[3]); // 801E8560
L_801E8564:;
  c->r[3]=c->r[31]+0x000016A8u; // 801E8564
  c->r[4]=0u+0x00000000u; // 801E8568
  c->r[5]=0u+0x00000006u; // 801E856C
  c->lr=0x801E8574u; f_800046B4(c); // 801E8570
  c->r[0]=rotl(c->r[29],0)&0x00000001u; cr0(c,c->r[0]); // 801E8574
  if (crb(c,2)) { goto L_801E859C; } // 801E8578
  c->r[0]=0u+0x00000000u; // 801E857C
  cmps(c,0,(int32_t)c->r[30],0); // 801E8580
  W32(c->r[31]+0x0000167Cu,c->r[0]); // 801E8584
  if (crb(c,2)) { goto L_801E859C; } // 801E8588
  c->r[12]=c->r[30]|c->r[30]; // 801E858C
  c->r[3]=c->r[1]+0x00000008u; // 801E8590
  c->ctr=c->r[12]; // 801E8594
  if (true) { c->lr=0x801E859Cu; dispatch(c,c->ctr); } // 801E8598
L_801E859C:;
  c->r[11]=c->r[1]+0x00000120u; // 801E859C
  c->lr=0x801E85A4u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E85A0
  c->r[0]=R32(c->r[1]+0x00000124u); // 801E85A4
  c->lr=c->r[0]; // 801E85A8
  c->r[1]=c->r[1]+0x00000120u; // 801E85AC
  return; // 801E85B0
}

// btm_inq_rmt_name_failed
void f_801E85B4(Ctx* __restrict c) {
  trace_call(0x801E85B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E85B4
  c->r[0]=c->lr; // 801E85B8
  c->r[3]=0u+0x00000000u; // 801E85BC
  c->r[4]=0u+0x00000000u; // 801E85C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E85C4
  c->r[5]=0u+0x00000000u; // 801E85C8
  c->r[6]=0u+0x0000001Fu; // 801E85CC
  c->lr=0x801E85D4u; f_801E845C(c); // 801E85D0
  c->r[3]=0u+0x00000000u; // 801E85D4
  c->r[4]=0u+0x00000000u; // 801E85D8
  c->r[5]=0u+0x0000001Fu; // 801E85DC
  c->lr=0x801E85E4u; f_801EB4B8(c); // 801E85E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E85E4
  c->lr=c->r[0]; // 801E85E8
  c->r[1]=c->r[1]+0x00000010u; // 801E85EC
  return; // 801E85F0
}

// btm_init
void f_801E85F4(Ctx* __restrict c) {
  trace_call(0x801E85F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E85F4
  c->r[0]=c->lr; // 801E85F8
  c->r[4]=0u+0x00000000u; // 801E85FC
  c->r[5]=0u+0x000027C4u; // 801E8600
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E8604
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E8608
  c->r[31]=0u+0x80310000u; // 801E860C
  c->r[3]=c->r[31]+0xFFFF8818u; // 801E8610
  c->lr=0x801E8618u; f_800046B4(c); // 801E8614
  c->r[3]=c->r[31]+0xFFFF8818u; // 801E8618
  c->r[0]=0u+0x00000000u; // 801E861C
  W8(c->r[3]+0x000027C0u,c->r[0]); // 801E8620
  c->lr=0x801E8628u; f_801E7AA8(c); // 801E8624
  c->lr=0x801E862Cu; f_801E2C90(c); // 801E8628
  c->r[3]=0u+0x00000002u; // 801E862C
  c->lr=0x801E8634u; f_801EB3A8(c); // 801E8630
  c->lr=0x801E8638u; f_801E92E4(c); // 801E8634
  c->lr=0x801E863Cu; f_801E50A0(c); // 801E8638
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E863C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E8640
  c->lr=c->r[0]; // 801E8644
  c->r[1]=c->r[1]+0x00000010u; // 801E8648
  return; // 801E864C
}

// BTM_PmRegister
void f_801E8650(Ctx* __restrict c) {
  trace_call(0x801E8650u);
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 801E8650
  if (crb(c,2)) { goto L_801E868C; } // 801E8654
  c->r[0]=R8(c->r[4]+0x00000000u); // 801E8658
  cmpu(c,0,c->r[0],0x00000002u); // 801E865C
  if (crb(c,0)) { goto L_801E866C; } // 801E8660
  c->r[3]=0u+0x00000005u; // 801E8664
  return; // 801E8668
L_801E866C:;
  c->r[3]=0u+0x80310000u; // 801E866C
  c->r[0]=rotl(c->r[0],3)&0x000007F8u; // 801E8670
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E8674
  c->r[5]=0u+0x00000000u; // 801E8678
  c->r[4]=c->r[3]+c->r[0]; // 801E867C
  W8(c->r[4]+0x00000558u,c->r[5]); // 801E8680
  c->r[3]=0u+0x00000000u; // 801E8684
  return; // 801E8688
L_801E868C:;
  c->r[6]=0u+0x80310000u; // 801E868C
  c->r[0]=0u+0x00000002u; // 801E8690
  c->r[6]=c->r[6]+0xFFFF8818u; // 801E8694
  c->r[7]=0u+0x00000000u; // 801E8698
  c->ctr=c->r[0]; // 801E869C
L_801E86A0:;
  c->r[0]=R8(c->r[6]+0x00000558u); // 801E86A0
  cmps(c,0,(int32_t)c->r[0],0); // 801E86A4
  if (!crb(c,2)) { goto L_801E86F8; } // 801E86A8
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 801E86AC
  if (crb(c,2)) { goto L_801E86D8; } // 801E86B0
  cmps(c,0,(int32_t)c->r[5],0); // 801E86B4
  if (!crb(c,2)) { goto L_801E86C4; } // 801E86B8
  c->r[3]=0u+0x00000005u; // 801E86BC
  return; // 801E86C0
L_801E86C4:;
  c->r[6]=0u+0x80310000u; // 801E86C4
  c->r[0]=rotl(c->r[7],3)&0xFFFFFFF8u; // 801E86C8
  c->r[6]=c->r[6]+0xFFFF8818u; // 801E86CC
  c->r[6]=c->r[6]+c->r[0]; // 801E86D0
  W32(c->r[6]+0x00000554u,c->r[5]); // 801E86D4
L_801E86D8:;
  c->r[5]=0u+0x80310000u; // 801E86D8
  c->r[0]=rotl(c->r[7],3)&0xFFFFFFF8u; // 801E86DC
  c->r[5]=c->r[5]+0xFFFF8818u; // 801E86E0
  c->r[5]=c->r[5]+c->r[0]; // 801E86E4
  W8(c->r[5]+0x00000558u,c->r[3]); // 801E86E8
  c->r[3]=0u+0x00000000u; // 801E86EC
  W8(c->r[4]+0x00000000u,c->r[7]); // 801E86F0
  return; // 801E86F4
L_801E86F8:;
  c->r[6]=c->r[6]+0x00000008u; // 801E86F8
  c->r[7]=c->r[7]+0x00000001u; // 801E86FC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E86A0; } // 801E8700
  c->r[3]=0u+0x00000003u; // 801E8704
  return; // 801E8708
}

// BTM_SetPowerMode
void f_801E870C(Ctx* __restrict c) {
  trace_call(0x801E870Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E870C
  c->r[0]=c->lr; // 801E8710
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E8714
  c->r[11]=c->r[1]+0x00000020u; // 801E8718
  c->lr=0x801E8720u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E871C
  cmpu(c,0,c->r[3],0x00000002u); // 801E8720
  c->r[27]=c->r[3]|c->r[3]; // 801E8724
  c->r[26]=c->r[4]|c->r[4]; // 801E8728
  c->r[28]=c->r[5]|c->r[5]; // 801E872C
  if (crb(c,0)) { goto L_801E8738; } // 801E8730
  c->r[27]=0u+0x00000080u; // 801E8734
L_801E8738:;
  cmps(c,0,(int32_t)c->r[5],0); // 801E8738
  if (!crb(c,2)) { goto L_801E8748; } // 801E873C
  c->r[3]=0u+0x00000005u; // 801E8740
  goto L_801E88C4; // 801E8744
L_801E8748:;
  c->r[0]=R8(c->r[5]+0x00000008u); // 801E8748
  c->r[3]=0u+0x80310000u; // 801E874C
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E8750
  c->r[29]=0u+0x00000000u; // 801E8754
  c->r[31]=rotl(c->r[0],0)&0xFFFFFFEFu; // 801E8758
  c->r[30]=c->r[3]+0x00000034u; // 801E875C
L_801E8760:;
  c->r[0]=R8(c->r[30]+0x00000119u); // 801E8760
  cmps(c,0,(int32_t)c->r[0],0); // 801E8764
  if (crb(c,2)) { goto L_801E8784; } // 801E8768
  c->r[4]=c->r[26]|c->r[26]; // 801E876C
  c->r[3]=c->r[30]+0x00000008u; // 801E8770
  c->r[5]=0u+0x00000006u; // 801E8774
  c->lr=0x801E877Cu; f_8020BD24(c); // 801E8778
  cmps(c,0,(int32_t)c->r[3],0); // 801E877C
  if (crb(c,2)) { goto L_801E8794; } // 801E8780
L_801E8784:;
  c->r[29]=c->r[29]+0x00000001u; // 801E8784
  c->r[30]=c->r[30]+0x0000011Cu; // 801E8788
  cmpu(c,0,c->r[29],0x00000004u); // 801E878C
  if (crb(c,0)) { IRQCHK(c); goto L_801E8760; } // 801E8790
L_801E8794:;
  c->r[30]=rotl(c->r[29],0)&0x000000FFu; // 801E8794
  cmps(c,0,(int32_t)c->r[30],4); // 801E8798
  if (!crb(c,2)) { goto L_801E87A8; } // 801E879C
  c->r[3]=0u+0x00000007u; // 801E87A0
  goto L_801E88C4; // 801E87A4
L_801E87A8:;
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)34); // 801E87A8
  c->r[4]=0u+0x80310000u; // 801E87AC
  c->r[3]=rotl(c->r[31],0)&0x000000FFu; cr0(c,c->r[3]); // 801E87B0
  c->r[4]=c->r[4]+0xFFFF8818u; // 801E87B4
  c->r[4]=c->r[4]+c->r[0]; // 801E87B8
  c->r[29]=c->r[4]+0x000004CCu; // 801E87BC
  if (crb(c,2)) { goto L_801E87F0; } // 801E87C0
  c->r[26]=c->r[3]+0xFFFFFFFFu; // 801E87C4
  c->lr=0x801E87CCu; f_801E61C4(c); // 801E87C8
  c->r[4]=c->r[2]+0xFFFFA298u; // 801E87CC
  c->r[5]=c->r[2]+0xFFFFA29Cu; // 801E87D0
  c->r[0]=R8(c->r[4]+c->r[26]); // 801E87D4
  c->r[4]=R8(c->r[5]+c->r[26]); // 801E87D8
  c->r[0]=R8(c->r[3]+c->r[0]); // 801E87DC
  c->r[0]=c->r[4]&c->r[0]; cr0(c,c->r[0]); // 801E87E0
  if (!crb(c,2)) { goto L_801E87F0; } // 801E87E4
  c->r[3]=0u+0x00000004u; // 801E87E8
  goto L_801E88C4; // 801E87EC
L_801E87F0:;
  c->r[0]=R8(c->r[29]+0x00000020u); // 801E87F0
  c->r[3]=rotl(c->r[31],0)&0x000000FFu; // 801E87F4
  cmpu(c,0,c->r[3],c->r[0]); // 801E87F8
  if (!crb(c,2)) { goto L_801E882C; } // 801E87FC
  cmps(c,0,(int32_t)c->r[3],0); // 801E8800
  if (crb(c,2)) { goto L_801E8824; } // 801E8804
  c->r[3]=R16(c->r[29]+0x0000001Eu); // 801E8808
  c->r[0]=R16(c->r[28]+0x00000000u); // 801E880C
  cmpu(c,0,c->r[0],c->r[3]); // 801E8810
  if (crb(c,0)) { goto L_801E882C; } // 801E8814
  c->r[0]=R16(c->r[28]+0x00000002u); // 801E8818
  cmpu(c,0,c->r[0],c->r[3]); // 801E881C
  if (crb(c,1)) { goto L_801E882C; } // 801E8820
L_801E8824:;
  c->r[3]=0u+0x00000000u; // 801E8824
  goto L_801E88C4; // 801E8828
L_801E882C:;
  cmpu(c,0,c->r[27],0x00000080u); // 801E882C
  if (crb(c,2)) { goto L_801E8884; } // 801E8830
  c->r[3]=0u+0x80310000u; // 801E8834
  c->r[0]=rotl(c->r[27],3)&0x000007F8u; // 801E8838
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E883C
  c->r[3]=c->r[3]+c->r[0]; // 801E8840
  c->r[0]=R8(c->r[3]+0x00000558u); // 801E8844
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801E8848
  if (crb(c,2)) { goto L_801E8884; } // 801E884C
  c->r[4]=R16(c->r[28]+0x00000000u); // 801E8850
  c->r[5]=(uint32_t)((int32_t)c->r[27]*(int32_t)10); // 801E8854
  c->r[3]=R16(c->r[28]+0x00000002u); // 801E8858
  c->r[0]=0u+0x00000001u; // 801E885C
  {uint32_t ea=c->r[5]+c->r[29]; W16(ea,c->r[4]); c->r[5]=ea;} // 801E8860
  W16(c->r[5]+0x00000002u,c->r[3]); // 801E8864
  c->r[4]=R16(c->r[28]+0x00000004u); // 801E8868
  c->r[3]=R16(c->r[28]+0x00000006u); // 801E886C
  W16(c->r[5]+0x00000004u,c->r[4]); // 801E8870
  W16(c->r[5]+0x00000006u,c->r[3]); // 801E8874
  c->r[3]=R16(c->r[28]+0x00000008u); // 801E8878
  W16(c->r[5]+0x00000008u,c->r[3]); // 801E887C
  W8(c->r[29]+0x00000021u,c->r[0]); // 801E8880
L_801E8884:;
  c->r[0]=R8(c->r[29]+0x00000020u); // 801E8884
  cmpu(c,0,c->r[0],0x00000001u); // 801E8888
  if (crb(c,2)) { goto L_801E88AC; } // 801E888C
  cmpu(c,0,c->r[0],0x00000004u); // 801E8890
  if (crb(c,2)) { goto L_801E88AC; } // 801E8894
  c->r[3]=0u+0x80310000u; // 801E8898
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E889C
  c->r[0]=R8(c->r[3]+0x00000564u); // 801E88A0
  cmpu(c,0,c->r[0],0x00000004u); // 801E88A4
  if (crb(c,2)) { goto L_801E88B4; } // 801E88A8
L_801E88AC:;
  c->r[3]=0u+0x0000000Du; // 801E88AC
  goto L_801E88C4; // 801E88B0
L_801E88B4:;
  c->r[3]=c->r[27]|c->r[27]; // 801E88B4
  c->r[4]=c->r[30]|c->r[30]; // 801E88B8
  c->r[5]=c->r[28]|c->r[28]; // 801E88BC
  c->lr=0x801E88C4u; f_801E8DD8(c); // 801E88C0
L_801E88C4:;
  c->r[11]=c->r[1]+0x00000020u; // 801E88C4
  c->lr=0x801E88CCu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E88C8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E88CC
  c->lr=c->r[0]; // 801E88D0
  c->r[1]=c->r[1]+0x00000020u; // 801E88D4
  return; // 801E88D8
}

// BTM_ReadPowerMode
void f_801E88DC(Ctx* __restrict c) {
  trace_call(0x801E88DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E88DC
  c->r[0]=c->lr; // 801E88E0
  c->r[5]=0u+0x80310000u; // 801E88E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E88E8
  c->r[5]=c->r[5]+0xFFFF8818u; // 801E88EC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E88F0
  c->r[31]=0u+0x00000000u; // 801E88F4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E88F8
  c->r[30]=c->r[5]+0x00000034u; // 801E88FC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E8900
  c->r[29]=c->r[4]|c->r[4]; // 801E8904
  W32(c->r[1]+0x00000010u,c->r[28]); // 801E8908
  c->r[28]=c->r[3]|c->r[3]; // 801E890C
L_801E8910:;
  c->r[0]=R8(c->r[30]+0x00000119u); // 801E8910
  cmps(c,0,(int32_t)c->r[0],0); // 801E8914
  if (crb(c,2)) { goto L_801E8934; } // 801E8918
  c->r[4]=c->r[28]|c->r[28]; // 801E891C
  c->r[3]=c->r[30]+0x00000008u; // 801E8920
  c->r[5]=0u+0x00000006u; // 801E8924
  c->lr=0x801E892Cu; f_8020BD24(c); // 801E8928
  cmps(c,0,(int32_t)c->r[3],0); // 801E892C
  if (crb(c,2)) { goto L_801E8944; } // 801E8930
L_801E8934:;
  c->r[31]=c->r[31]+0x00000001u; // 801E8934
  c->r[30]=c->r[30]+0x0000011Cu; // 801E8938
  cmpu(c,0,c->r[31],0x00000004u); // 801E893C
  if (crb(c,0)) { IRQCHK(c); goto L_801E8910; } // 801E8940
L_801E8944:;
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 801E8944
  cmps(c,0,(int32_t)c->r[0],4); // 801E8948
  if (!crb(c,2)) { goto L_801E8958; } // 801E894C
  c->r[3]=0u+0x00000007u; // 801E8950
  goto L_801E8974; // 801E8954
L_801E8958:;
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)34); // 801E8958
  c->r[4]=0u+0x80310000u; // 801E895C
  c->r[3]=0u+0x00000000u; // 801E8960
  c->r[4]=c->r[4]+0xFFFF8818u; // 801E8964
  c->r[4]=c->r[4]+c->r[0]; // 801E8968
  c->r[0]=R8(c->r[4]+0x000004ECu); // 801E896C
  W8(c->r[29]+0x00000000u,c->r[0]); // 801E8970
L_801E8974:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E8974
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E8978
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E897C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E8980
  c->r[28]=R32(c->r[1]+0x00000010u); // 801E8984
  c->lr=c->r[0]; // 801E8988
  c->r[1]=c->r[1]+0x00000020u; // 801E898C
  return; // 801E8990
}

// btm_pm_reset
void f_801E8994(Ctx* __restrict c) {
  trace_call(0x801E8994u);
  c->r[3]=0u+0x80310000u; // 801E8994
  c->r[12]=0u+0x00000000u; // 801E8998
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E899C
  c->r[0]=R8(c->r[3]+0x00000565u); // 801E89A0
  cmpu(c,0,c->r[0],0x00000080u); // 801E89A4
  if (crb(c,2)) { goto L_801E89C4; } // 801E89A8
  c->r[0]=rotl(c->r[0],3)&0x000007F8u; // 801E89AC
  c->r[3]=c->r[3]+c->r[0]; // 801E89B0
  c->r[0]=R8(c->r[3]+0x00000558u); // 801E89B4
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801E89B8
  if (crb(c,2)) { goto L_801E89C4; } // 801E89BC
  c->r[12]=R32(c->r[3]+0x00000554u); // 801E89C0
L_801E89C4:;
  c->r[3]=0u+0x80310000u; // 801E89C4
  cmps(c,0,(int32_t)c->r[12],0); // 801E89C8
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E89CC
  c->r[0]=0u+0x00000000u; // 801E89D0
  c->r[4]=0u+0x00000004u; // 801E89D4
  W8(c->r[3]+0x00000558u,c->r[0]); // 801E89D8
  W8(c->r[3]+0x00000564u,c->r[4]); // 801E89DC
  W8(c->r[3]+0x00000560u,c->r[0]); // 801E89E0
  if (crb(c,2)) return; // 801E89E4
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)284); // 801E89E8
  c->r[4]=0u+0x00000005u; // 801E89EC
  c->r[5]=0u+0x0000000Cu; // 801E89F0
  c->r[6]=0u+0x00000000u; // 801E89F4
  c->r[3]=c->r[3]+c->r[0]; // 801E89F8
  c->r[3]=c->r[3]+0x0000003Cu; // 801E89FC
  c->ctr=c->r[12]; // 801E8A00
  if (true) { dispatch(c,c->ctr); return; } // 801E8A04
  return; // 801E8A08
}

// btm_pm_sm_alloc
void f_801E8A0C(Ctx* __restrict c) {
  trace_call(0x801E8A0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E8A0C
  c->r[0]=c->lr; // 801E8A10
  c->r[4]=0u+0x00000000u; // 801E8A14
  c->r[5]=0u+0x00000022u; // 801E8A18
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E8A1C
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)34); // 801E8A20
  c->r[3]=0u+0x80310000u; // 801E8A24
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E8A28
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E8A2C
  c->r[3]=c->r[3]+c->r[0]; // 801E8A30
  c->r[31]=c->r[3]+0x000004CCu; // 801E8A34
  c->r[3]=c->r[31]|c->r[31]; // 801E8A38
  c->lr=0x801E8A40u; f_800046B4(c); // 801E8A3C
  c->r[0]=0u+0x00000000u; // 801E8A40
  W8(c->r[31]+0x00000020u,c->r[0]); // 801E8A44
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E8A48
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E8A4C
  c->lr=c->r[0]; // 801E8A50
  c->r[1]=c->r[1]+0x00000010u; // 801E8A54
  return; // 801E8A58
}

// btm_pm_compare_modes
void f_801E8A5C(Ctx* __restrict c) {
  trace_call(0x801E8A5Cu);
  cmps(c,0,(int32_t)c->r[3],0); // 801E8A5C
  if (!crb(c,2)) { goto L_801E8A94; } // 801E8A60
  c->r[6]=R16(c->r[4]+0x00000000u); // 801E8A64
  c->r[3]=c->r[4]|c->r[4]; // 801E8A68
  c->r[0]=R16(c->r[4]+0x00000002u); // 801E8A6C
  W16(c->r[5]+0x00000000u,c->r[6]); // 801E8A70
  W16(c->r[5]+0x00000002u,c->r[0]); // 801E8A74
  c->r[6]=R16(c->r[4]+0x00000004u); // 801E8A78
  c->r[0]=R16(c->r[4]+0x00000006u); // 801E8A7C
  W16(c->r[5]+0x00000004u,c->r[6]); // 801E8A80
  W16(c->r[5]+0x00000006u,c->r[0]); // 801E8A84
  c->r[0]=R16(c->r[4]+0x00000008u); // 801E8A88
  W16(c->r[5]+0x00000008u,c->r[0]); // 801E8A8C
  return; // 801E8A90
L_801E8A94:;
  c->r[9]=R8(c->r[4]+0x00000008u); // 801E8A94
  cmps(c,0,(int32_t)c->r[9],0); // 801E8A98
  if (crb(c,2)) { goto L_801E8AAC; } // 801E8A9C
  c->r[8]=R8(c->r[3]+0x00000008u); // 801E8AA0
  cmps(c,0,(int32_t)c->r[8],0); // 801E8AA4
  if (!crb(c,2)) { goto L_801E8AB4; } // 801E8AA8
L_801E8AAC:;
  c->r[3]=0u+0x00000000u; // 801E8AAC
  return; // 801E8AB0
L_801E8AB4:;
  c->r[0]=rotl(c->r[8],0)&0x00000010u; cr0(c,c->r[0]); // 801E8AB4
  if (crb(c,2)) { goto L_801E8AF8; } // 801E8AB8
  c->r[4]=R16(c->r[3]+0x00000000u); // 801E8ABC
  c->r[0]=R16(c->r[3]+0x00000002u); // 801E8AC0
  W16(c->r[5]+0x00000000u,c->r[4]); // 801E8AC4
  W16(c->r[5]+0x00000002u,c->r[0]); // 801E8AC8
  c->r[4]=R16(c->r[3]+0x00000004u); // 801E8ACC
  c->r[0]=R16(c->r[3]+0x00000006u); // 801E8AD0
  W16(c->r[5]+0x00000004u,c->r[4]); // 801E8AD4
  W16(c->r[5]+0x00000006u,c->r[0]); // 801E8AD8
  c->r[0]=R16(c->r[3]+0x00000008u); // 801E8ADC
  c->r[3]=c->r[5]|c->r[5]; // 801E8AE0
  W16(c->r[5]+0x00000008u,c->r[0]); // 801E8AE4
  c->r[0]=R8(c->r[5]+0x00000008u); // 801E8AE8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFEFu; // 801E8AEC
  W8(c->r[5]+0x00000008u,c->r[0]); // 801E8AF0
  return; // 801E8AF4
L_801E8AF8:;
  c->r[0]=rotl(c->r[9],0)&0x00000010u; cr0(c,c->r[0]); // 801E8AF8
  if (crb(c,2)) { goto L_801E8B3C; } // 801E8AFC
  c->r[6]=R16(c->r[4]+0x00000000u); // 801E8B00
  c->r[3]=c->r[5]|c->r[5]; // 801E8B04
  c->r[0]=R16(c->r[4]+0x00000002u); // 801E8B08
  W16(c->r[5]+0x00000000u,c->r[6]); // 801E8B0C
  W16(c->r[5]+0x00000002u,c->r[0]); // 801E8B10
  c->r[6]=R16(c->r[4]+0x00000004u); // 801E8B14
  c->r[0]=R16(c->r[4]+0x00000006u); // 801E8B18
  W16(c->r[5]+0x00000004u,c->r[6]); // 801E8B1C
  W16(c->r[5]+0x00000006u,c->r[0]); // 801E8B20
  c->r[0]=R16(c->r[4]+0x00000008u); // 801E8B24
  W16(c->r[5]+0x00000008u,c->r[0]); // 801E8B28
  c->r[0]=R8(c->r[5]+0x00000008u); // 801E8B2C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFEFu; // 801E8B30
  W8(c->r[5]+0x00000008u,c->r[0]); // 801E8B34
  return; // 801E8B38
L_801E8B3C:;
  c->r[7]=c->r[8]+0xFFFFFFFFu; // 801E8B3C
  c->r[6]=0u+0x80230000u; // 801E8B40
  c->r[0]=rotl(c->r[7],2)&0xFFFFFFFCu; // 801E8B44
  c->r[0]=c->r[0]-c->r[7]; // 801E8B48
  c->r[6]=c->r[6]+0xFFFFC5F8u; // 801E8B4C
  c->r[7]=c->r[9]+c->r[0]; // 801E8B50
  c->r[0]=c->r[7]+0xFFFFFFFFu; // 801E8B54
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801E8B58
  c->r[0]=R8(c->r[6]+c->r[0]); // 801E8B5C
  cmps(c,0,(int32_t)c->r[0],2); // 801E8B60
  if (crb(c,2)) { goto L_801E8BB0; } // 801E8B64
  if (!crb(c,0)) { goto L_801E8B78; } // 801E8B68
  cmps(c,0,(int32_t)c->r[0],1); // 801E8B6C
  if (!crb(c,0)) { goto L_801E8B84; } // 801E8B70
  goto L_801E8C70; // 801E8B74
L_801E8B78:;
  cmps(c,0,(int32_t)c->r[0],4); // 801E8B78
  if (!crb(c,0)) { goto L_801E8C70; } // 801E8B7C
  goto L_801E8BE0; // 801E8B80
L_801E8B84:;
  c->r[4]=R16(c->r[3]+0x00000000u); // 801E8B84
  c->r[0]=R16(c->r[3]+0x00000002u); // 801E8B88
  W16(c->r[5]+0x00000000u,c->r[4]); // 801E8B8C
  W16(c->r[5]+0x00000002u,c->r[0]); // 801E8B90
  c->r[4]=R16(c->r[3]+0x00000004u); // 801E8B94
  c->r[0]=R16(c->r[3]+0x00000006u); // 801E8B98
  W16(c->r[5]+0x00000004u,c->r[4]); // 801E8B9C
  W16(c->r[5]+0x00000006u,c->r[0]); // 801E8BA0
  c->r[0]=R16(c->r[3]+0x00000008u); // 801E8BA4
  W16(c->r[5]+0x00000008u,c->r[0]); // 801E8BA8
  return; // 801E8BAC
L_801E8BB0:;
  c->r[6]=R16(c->r[4]+0x00000000u); // 801E8BB0
  c->r[3]=c->r[4]|c->r[4]; // 801E8BB4
  c->r[0]=R16(c->r[4]+0x00000002u); // 801E8BB8
  W16(c->r[5]+0x00000000u,c->r[6]); // 801E8BBC
  W16(c->r[5]+0x00000002u,c->r[0]); // 801E8BC0
  c->r[6]=R16(c->r[4]+0x00000004u); // 801E8BC4
  c->r[0]=R16(c->r[4]+0x00000006u); // 801E8BC8
  W16(c->r[5]+0x00000004u,c->r[6]); // 801E8BCC
  W16(c->r[5]+0x00000006u,c->r[0]); // 801E8BD0
  c->r[0]=R16(c->r[4]+0x00000008u); // 801E8BD4
  W16(c->r[5]+0x00000008u,c->r[0]); // 801E8BD8
  return; // 801E8BDC
L_801E8BE0:;
  W8(c->r[5]+0x00000008u,c->r[8]); // 801E8BE0
  c->r[6]=R16(c->r[4]+0x00000000u); // 801E8BE4
  c->r[0]=R16(c->r[3]+0x00000000u); // 801E8BE8
  cmpu(c,0,c->r[0],c->r[6]); // 801E8BEC
  if (!crb(c,0)) { goto L_801E8BF8; } // 801E8BF0
  c->r[6]=c->r[0]|c->r[0]; // 801E8BF4
L_801E8BF8:;
  W16(c->r[5]+0x00000000u,c->r[6]); // 801E8BF8
  c->r[7]=R16(c->r[4]+0x00000002u); // 801E8BFC
  c->r[0]=R16(c->r[3]+0x00000002u); // 801E8C00
  cmpu(c,0,c->r[0],c->r[7]); // 801E8C04
  if (!crb(c,1)) { goto L_801E8C10; } // 801E8C08
  c->r[7]=c->r[0]|c->r[0]; // 801E8C0C
L_801E8C10:;
  c->r[6]=R16(c->r[5]+0x00000000u); // 801E8C10
  c->r[0]=rotl(c->r[7],0)&0x0000FFFFu; // 801E8C14
  W16(c->r[5]+0x00000002u,c->r[7]); // 801E8C18
  cmpu(c,0,c->r[6],c->r[0]); // 801E8C1C
  if (!crb(c,0)) { goto L_801E8C2C; } // 801E8C20
  c->r[3]=0u+0x00000000u; // 801E8C24
  return; // 801E8C28
L_801E8C2C:;
  c->r[0]=R8(c->r[5]+0x00000008u); // 801E8C2C
  cmpu(c,0,c->r[0],0x00000002u); // 801E8C30
  if (!crb(c,2)) { goto L_801E8C68; } // 801E8C34
  c->r[6]=R16(c->r[4]+0x00000004u); // 801E8C38
  c->r[0]=R16(c->r[3]+0x00000004u); // 801E8C3C
  cmpu(c,0,c->r[0],c->r[6]); // 801E8C40
  if (!crb(c,1)) { goto L_801E8C4C; } // 801E8C44
  c->r[6]=c->r[0]|c->r[0]; // 801E8C48
L_801E8C4C:;
  W16(c->r[5]+0x00000004u,c->r[6]); // 801E8C4C
  c->r[4]=R16(c->r[4]+0x00000006u); // 801E8C50
  c->r[0]=R16(c->r[3]+0x00000006u); // 801E8C54
  cmpu(c,0,c->r[0],c->r[4]); // 801E8C58
  if (!crb(c,1)) { goto L_801E8C64; } // 801E8C5C
  c->r[4]=c->r[0]|c->r[0]; // 801E8C60
L_801E8C64:;
  W16(c->r[5]+0x00000006u,c->r[4]); // 801E8C64
L_801E8C68:;
  c->r[3]=c->r[5]|c->r[5]; // 801E8C68
  return; // 801E8C6C
L_801E8C70:;
  c->r[3]=0u+0x00000000u; // 801E8C70
  return; // 801E8C74
}

// btm_pm_get_set_mode
void f_801E8C78(Ctx* __restrict c) {
  trace_call(0x801E8C78u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E8C78
  c->r[0]=c->lr; // 801E8C7C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E8C80
  c->r[11]=c->r[1]+0x00000020u; // 801E8C84
  c->lr=0x801E8C8Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E8C88
  cmps(c,0,(int32_t)c->r[5],0); // 801E8C8C
  c->r[26]=c->r[3]|c->r[3]; // 801E8C90
  c->r[27]=c->r[5]|c->r[5]; // 801E8C94
  c->r[28]=c->r[6]|c->r[6]; // 801E8C98
  c->r[7]=0u+0x00000000u; // 801E8C9C
  if (crb(c,2)) { goto L_801E8CE8; } // 801E8CA0
  c->r[0]=R8(c->r[5]+0x00000008u); // 801E8CA4
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 801E8CA8
  if (crb(c,2)) { goto L_801E8CE8; } // 801E8CAC
  c->r[3]=R16(c->r[5]+0x00000000u); // 801E8CB0
  c->r[0]=R16(c->r[5]+0x00000002u); // 801E8CB4
  W16(c->r[6]+0x00000000u,c->r[3]); // 801E8CB8
  W16(c->r[6]+0x00000002u,c->r[0]); // 801E8CBC
  c->r[3]=R16(c->r[5]+0x00000004u); // 801E8CC0
  c->r[0]=R16(c->r[5]+0x00000006u); // 801E8CC4
  W16(c->r[6]+0x00000004u,c->r[3]); // 801E8CC8
  W16(c->r[6]+0x00000006u,c->r[0]); // 801E8CCC
  c->r[0]=R16(c->r[5]+0x00000008u); // 801E8CD0
  W16(c->r[6]+0x00000008u,c->r[0]); // 801E8CD4
  c->r[0]=R8(c->r[6]+0x00000008u); // 801E8CD8
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFEFu; // 801E8CDC
  W8(c->r[6]+0x00000008u,c->r[3]); // 801E8CE0
  goto L_801E8DC0; // 801E8CE4
L_801E8CE8:;
  c->r[31]=0u+0x80310000u; // 801E8CE8
  c->r[30]=c->r[4]|c->r[4]; // 801E8CEC
  c->r[31]=c->r[31]+0xFFFF8818u; // 801E8CF0
  c->r[29]=0u+0x00000000u; // 801E8CF4
L_801E8CF8:;
  c->r[0]=R8(c->r[31]+0x00000558u); // 801E8CF8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801E8CFC
  if (crb(c,2)) { goto L_801E8D3C; } // 801E8D00
  c->r[0]=R8(c->r[30]+0x00000008u); // 801E8D04
  cmps(c,0,(int32_t)c->r[0],0); // 801E8D08
  if (!crb(c,2)) { goto L_801E8D18; } // 801E8D0C
  c->r[3]=0u+0x00000000u; // 801E8D10
  goto L_801E8DC0; // 801E8D14
L_801E8D18:;
  c->r[3]=c->r[7]|c->r[7]; // 801E8D18
  c->r[4]=c->r[30]|c->r[30]; // 801E8D1C
  c->r[5]=c->r[28]|c->r[28]; // 801E8D20
  c->lr=0x801E8D28u; f_801E8A5C(c); // 801E8D24
  cmps(c,0,(int32_t)c->r[3],0); // 801E8D28
  if (!crb(c,2)) { goto L_801E8D38; } // 801E8D2C
  c->r[3]=0u+0x00000000u; // 801E8D30
  goto L_801E8DC0; // 801E8D34
L_801E8D38:;
  c->r[7]=c->r[28]|c->r[28]; // 801E8D38
L_801E8D3C:;
  c->r[29]=c->r[29]+0x00000001u; // 801E8D3C
  c->r[30]=c->r[30]+0x0000000Au; // 801E8D40
  cmps(c,0,(int32_t)c->r[29],2); // 801E8D44
  c->r[31]=c->r[31]+0x00000008u; // 801E8D48
  if (crb(c,0)) { IRQCHK(c); goto L_801E8CF8; } // 801E8D4C
  cmps(c,0,(int32_t)c->r[7],0); // 801E8D50
  if (!crb(c,2)) { goto L_801E8D94; } // 801E8D54
  cmps(c,0,(int32_t)c->r[27],0); // 801E8D58
  if (crb(c,2)) { goto L_801E8D8C; } // 801E8D5C
  c->r[3]=R16(c->r[27]+0x00000000u); // 801E8D60
  c->r[0]=R16(c->r[27]+0x00000002u); // 801E8D64
  W16(c->r[28]+0x00000000u,c->r[3]); // 801E8D68
  W16(c->r[28]+0x00000002u,c->r[0]); // 801E8D6C
  c->r[3]=R16(c->r[27]+0x00000004u); // 801E8D70
  c->r[0]=R16(c->r[27]+0x00000006u); // 801E8D74
  W16(c->r[28]+0x00000004u,c->r[3]); // 801E8D78
  W16(c->r[28]+0x00000006u,c->r[0]); // 801E8D7C
  c->r[0]=R16(c->r[27]+0x00000008u); // 801E8D80
  W16(c->r[28]+0x00000008u,c->r[0]); // 801E8D84
  goto L_801E8DBC; // 801E8D88
L_801E8D8C:;
  c->r[3]=0u+0x00000000u; // 801E8D8C
  goto L_801E8DC0; // 801E8D90
L_801E8D94:;
  cmpu(c,0,c->r[26],0x00000080u); // 801E8D94
  if (!crb(c,2)) { goto L_801E8DBC; } // 801E8D98
  c->r[3]=c->r[27]|c->r[27]; // 801E8D9C
  c->r[4]=c->r[7]|c->r[7]; // 801E8DA0
  c->r[5]=c->r[28]|c->r[28]; // 801E8DA4
  c->lr=0x801E8DACu; f_801E8A5C(c); // 801E8DA8
  cmps(c,0,(int32_t)c->r[3],0); // 801E8DAC
  if (!crb(c,2)) { goto L_801E8DBC; } // 801E8DB0
  c->r[3]=0u+0x00000000u; // 801E8DB4
  goto L_801E8DC0; // 801E8DB8
L_801E8DBC:;
  c->r[3]=R8(c->r[28]+0x00000008u); // 801E8DBC
L_801E8DC0:;
  c->r[11]=c->r[1]+0x00000020u; // 801E8DC0
  c->lr=0x801E8DC8u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E8DC4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E8DC8
  c->lr=c->r[0]; // 801E8DCC
  c->r[1]=c->r[1]+0x00000020u; // 801E8DD0
  return; // 801E8DD4
}

// btm_pm_snd_md_req
void f_801E8DD8(Ctx* __restrict c) {
  trace_call(0x801E8DD8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E8DD8
  c->r[0]=c->lr; // 801E8DDC
  c->r[6]=0u+0x80310000u; // 801E8DE0
  W32(c->r[1]+0x00000034u,c->r[0]); // 801E8DE4
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)34); // 801E8DE8
  c->r[6]=c->r[6]+0xFFFF8818u; // 801E8DEC
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801E8DF0
  c->r[31]=0u+0x00000000u; // 801E8DF4
  W32(c->r[1]+0x00000028u,c->r[30]); // 801E8DF8
  c->r[30]=c->r[4]|c->r[4]; // 801E8DFC
  W32(c->r[1]+0x00000024u,c->r[29]); // 801E8E00
  c->r[29]=c->r[3]|c->r[3]; // 801E8E04
  c->r[3]=c->r[6]+c->r[0]; // 801E8E08
  c->r[6]=c->r[1]+0x00000008u; // 801E8E0C
  W32(c->r[1]+0x00000020u,c->r[28]); // 801E8E10
  c->r[28]=c->r[3]+0x000004CCu; // 801E8E14
  c->r[3]=c->r[29]|c->r[29]; // 801E8E18
  c->r[4]=c->r[28]|c->r[28]; // 801E8E1C
  c->lr=0x801E8E24u; f_801E8C78(c); // 801E8E20
  c->r[4]=R8(c->r[28]+0x00000020u); // 801E8E24
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801E8E28
  W8(c->r[1]+0x00000010u,c->r[3]); // 801E8E2C
  cmpu(c,0,c->r[4],c->r[0]); // 801E8E30
  if (!crb(c,2)) { goto L_801E8E68; } // 801E8E34
  cmps(c,0,(int32_t)c->r[0],0); // 801E8E38
  if (crb(c,2)) { goto L_801E8E5C; } // 801E8E3C
  c->r[4]=R16(c->r[28]+0x0000001Eu); // 801E8E40
  c->r[0]=R16(c->r[1]+0x00000008u); // 801E8E44
  cmpu(c,0,c->r[0],c->r[4]); // 801E8E48
  if (crb(c,0)) { goto L_801E8E64; } // 801E8E4C
  c->r[0]=R16(c->r[1]+0x0000000Au); // 801E8E50
  cmpu(c,0,c->r[0],c->r[4]); // 801E8E54
  if (crb(c,1)) { goto L_801E8E64; } // 801E8E58
L_801E8E5C:;
  c->r[3]=0u+0x0000000Du; // 801E8E5C
  goto L_801E8FEC; // 801E8E60
L_801E8E64:;
  c->r[31]=0u+0x00000001u; // 801E8E64
L_801E8E68:;
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801E8E68
  W8(c->r[28]+0x00000021u,c->r[31]); // 801E8E6C
  if (crb(c,2)) { goto L_801E8E88; } // 801E8E70
  c->r[0]=R8(c->r[28]+0x00000020u); // 801E8E74
  cmps(c,0,(int32_t)c->r[0],0); // 801E8E78
  if (crb(c,2)) { goto L_801E8E88; } // 801E8E7C
  c->r[0]=0u+0x00000001u; // 801E8E80
  W8(c->r[28]+0x00000021u,c->r[0]); // 801E8E84
L_801E8E88:;
  c->r[3]=0u+0x00000002u; // 801E8E88
  c->lr=0x801E8E90u; f_801D9B80(c); // 801E8E8C
  cmps(c,0,(int32_t)c->r[3],0); // 801E8E90
  c->r[31]=c->r[3]|c->r[3]; // 801E8E94
  if (!crb(c,2)) { goto L_801E8EA4; } // 801E8E98
  c->r[3]=0u+0x00000003u; // 801E8E9C
  goto L_801E8FEC; // 801E8EA0
L_801E8EA4:;
  c->r[0]=R8(c->r[28]+0x00000021u); // 801E8EA4
  cmpu(c,0,c->r[0],0x00000001u); // 801E8EA8
  if (!crb(c,2)) { goto L_801E8EB8; } // 801E8EAC
  c->r[0]=0u+0x00000000u; // 801E8EB0
  W8(c->r[1]+0x00000010u,c->r[0]); // 801E8EB4
L_801E8EB8:;
  c->r[0]=R8(c->r[1]+0x00000010u); // 801E8EB8
  c->r[4]=0u+0x80310000u; // 801E8EBC
  c->r[4]=c->r[4]+0xFFFF8818u; // 801E8EC0
  cmps(c,0,(int32_t)c->r[0],2); // 801E8EC4
  W8(c->r[4]+0x00000564u,c->r[30]); // 801E8EC8
  W8(c->r[4]+0x00000565u,c->r[29]); // 801E8ECC
  if (crb(c,2)) { goto L_801E8F74; } // 801E8ED0
  if (!crb(c,0)) { goto L_801E8EE8; } // 801E8ED4
  cmps(c,0,(int32_t)c->r[0],0); // 801E8ED8
  if (crb(c,2)) { goto L_801E8EF4; } // 801E8EDC
  if (!crb(c,0)) { goto L_801E8F54; } // 801E8EE0
  goto L_801E8FBC; // 801E8EE4
L_801E8EE8:;
  cmps(c,0,(int32_t)c->r[0],4); // 801E8EE8
  if (!crb(c,0)) { goto L_801E8FBC; } // 801E8EEC
  goto L_801E8F9C; // 801E8EF0
L_801E8EF4:;
  c->r[0]=R8(c->r[28]+0x00000020u); // 801E8EF4
  cmps(c,0,(int32_t)c->r[0],3); // 801E8EF8
  if (crb(c,2)) { goto L_801E8F28; } // 801E8EFC
  if (!crb(c,0)) { goto L_801E8F40; } // 801E8F00
  cmps(c,0,(int32_t)c->r[0],2); // 801E8F04
  if (!crb(c,0)) { goto L_801E8F10; } // 801E8F08
  goto L_801E8F40; // 801E8F0C
L_801E8F10:;
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)284); // 801E8F10
  c->r[3]=c->r[31]|c->r[31]; // 801E8F14
  c->r[4]=c->r[4]+c->r[0]; // 801E8F18
  c->r[4]=R16(c->r[4]+0x00000034u); // 801E8F1C
  c->lr=0x801E8F24u; f_801F07D0(c); // 801E8F20
  goto L_801E8FCC; // 801E8F24
L_801E8F28:;
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)284); // 801E8F28
  c->r[3]=c->r[31]|c->r[31]; // 801E8F2C
  c->r[4]=c->r[4]+c->r[0]; // 801E8F30
  c->r[4]=R16(c->r[4]+0x00000034u); // 801E8F34
  c->lr=0x801E8F3Cu; f_801F0908(c); // 801E8F38
  goto L_801E8FCC; // 801E8F3C
L_801E8F40:;
  c->r[3]=0u+0x80310000u; // 801E8F40
  c->r[0]=0u+0x00000004u; // 801E8F44
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E8F48
  W8(c->r[3]+0x00000564u,c->r[0]); // 801E8F4C
  goto L_801E8FCC; // 801E8F50
L_801E8F54:;
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)284); // 801E8F54
  c->r[5]=R16(c->r[1]+0x00000008u); // 801E8F58
  c->r[6]=R16(c->r[1]+0x0000000Au); // 801E8F5C
  c->r[3]=c->r[31]|c->r[31]; // 801E8F60
  c->r[4]=c->r[4]+c->r[0]; // 801E8F64
  c->r[4]=R16(c->r[4]+0x00000034u); // 801E8F68
  c->lr=0x801E8F70u; f_801F0650(c); // 801E8F6C
  goto L_801E8FCC; // 801E8F70
L_801E8F74:;
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)284); // 801E8F74
  c->r[5]=R16(c->r[1]+0x00000008u); // 801E8F78
  c->r[6]=R16(c->r[1]+0x0000000Au); // 801E8F7C
  c->r[3]=c->r[31]|c->r[31]; // 801E8F80
  c->r[7]=R16(c->r[1]+0x0000000Cu); // 801E8F84
  c->r[4]=c->r[4]+c->r[0]; // 801E8F88
  c->r[4]=R16(c->r[4]+0x00000034u); // 801E8F8C
  c->r[8]=R16(c->r[1]+0x0000000Eu); // 801E8F90
  c->lr=0x801E8F98u; f_801F0704(c); // 801E8F94
  goto L_801E8FCC; // 801E8F98
L_801E8F9C:;
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)284); // 801E8F9C
  c->r[5]=R16(c->r[1]+0x00000008u); // 801E8FA0
  c->r[6]=R16(c->r[1]+0x0000000Au); // 801E8FA4
  c->r[3]=c->r[31]|c->r[31]; // 801E8FA8
  c->r[4]=c->r[4]+c->r[0]; // 801E8FAC
  c->r[4]=R16(c->r[4]+0x00000034u); // 801E8FB0
  c->lr=0x801E8FB8u; f_801F0854(c); // 801E8FB4
  goto L_801E8FCC; // 801E8FB8
L_801E8FBC:;
  c->r[3]=0u+0x80310000u; // 801E8FBC
  c->r[0]=0u+0x00000004u; // 801E8FC0
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E8FC4
  W8(c->r[3]+0x00000564u,c->r[0]); // 801E8FC8
L_801E8FCC:;
  c->r[3]=0u+0x80310000u; // 801E8FCC
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E8FD0
  c->r[0]=R8(c->r[3]+0x00000564u); // 801E8FD4
  cmpu(c,0,c->r[0],0x00000004u); // 801E8FD8
  if (!crb(c,2)) { goto L_801E8FE8; } // 801E8FDC
  c->r[3]=c->r[31]|c->r[31]; // 801E8FE0
  c->lr=0x801E8FE8u; f_801D9C70(c); // 801E8FE4
L_801E8FE8:;
  c->r[3]=0u+0x00000001u; // 801E8FE8
L_801E8FEC:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801E8FEC
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801E8FF0
  c->r[30]=R32(c->r[1]+0x00000028u); // 801E8FF4
  c->r[29]=R32(c->r[1]+0x00000024u); // 801E8FF8
  c->r[28]=R32(c->r[1]+0x00000020u); // 801E8FFC
  c->lr=c->r[0]; // 801E9000
  c->r[1]=c->r[1]+0x00000030u; // 801E9004
  return; // 801E9008
}

// btm_pm_proc_cmd_status
void f_801E900C(Ctx* __restrict c) {
  trace_call(0x801E900Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E900C
  c->r[0]=c->lr; // 801E9010
  c->r[4]=0u+0x80310000u; // 801E9014
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E9018
  c->r[4]=c->r[4]+0xFFFF8818u; // 801E901C
  c->r[0]=R8(c->r[4]+0x00000564u); // 801E9020
  cmpu(c,0,c->r[0],0x00000004u); // 801E9024
  if (!crb(c,0)) { goto L_801E90AC; } // 801E9028
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)34); // 801E902C
  cmps(c,0,(int32_t)c->r[3],0); // 801E9030
  c->r[5]=c->r[4]+c->r[0]; // 801E9034
  if (!crb(c,2)) { goto L_801E904C; } // 801E9038
  c->r[0]=0u+0x00000004u; // 801E903C
  c->r[4]=0u+0x00000004u; // 801E9040
  W8(c->r[5]+0x000004ECu,c->r[0]); // 801E9044
  goto L_801E9050; // 801E9048
L_801E904C:;
  c->r[4]=0u+0x00000005u; // 801E904C
L_801E9050:;
  c->r[7]=0u+0x80310000u; // 801E9050
  c->r[7]=c->r[7]+0xFFFF8818u; // 801E9054
  c->r[0]=R8(c->r[7]+0x00000565u); // 801E9058
  cmpu(c,0,c->r[0],0x00000080u); // 801E905C
  if (crb(c,2)) { goto L_801E909C; } // 801E9060
  c->r[0]=rotl(c->r[0],3)&0x000007F8u; // 801E9064
  c->r[5]=c->r[7]+c->r[0]; // 801E9068
  c->r[0]=R8(c->r[5]+0x00000558u); // 801E906C
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801E9070
  if (crb(c,2)) { goto L_801E909C; } // 801E9074
  c->r[0]=R8(c->r[7]+0x00000564u); // 801E9078
  c->r[6]=c->r[3]|c->r[3]; // 801E907C
  c->r[12]=R32(c->r[5]+0x00000554u); // 801E9080
  c->r[5]=0u+0x00000000u; // 801E9084
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)284); // 801E9088
  c->r[3]=c->r[7]+c->r[0]; // 801E908C
  c->r[3]=c->r[3]+0x0000003Cu; // 801E9090
  c->ctr=c->r[12]; // 801E9094
  if (true) { c->lr=0x801E909Cu; dispatch(c,c->ctr); } // 801E9098
L_801E909C:;
  c->r[3]=0u+0x80310000u; // 801E909C
  c->r[0]=0u+0x00000004u; // 801E90A0
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E90A4
  W8(c->r[3]+0x00000564u,c->r[0]); // 801E90A8
L_801E90AC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E90AC
  c->lr=c->r[0]; // 801E90B0
  c->r[1]=c->r[1]+0x00000010u; // 801E90B4
  return; // 801E90B8
}

// btm_pm_proc_mode_change
void f_801E90BC(Ctx* __restrict c) {
  trace_call(0x801E90BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E90BC
  c->r[0]=c->lr; // 801E90C0
  W32(c->r[1]+0x00000034u,c->r[0]); // 801E90C4
  c->r[11]=c->r[1]+0x00000030u; // 801E90C8
  c->lr=0x801E90D0u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E90CC
  c->r[26]=c->r[4]|c->r[4]; // 801E90D0
  c->r[25]=c->r[3]|c->r[3]; // 801E90D4
  c->r[27]=c->r[5]|c->r[5]; // 801E90D8
  c->r[28]=c->r[6]|c->r[6]; // 801E90DC
  c->r[3]=c->r[26]|c->r[26]; // 801E90E0
  c->lr=0x801E90E8u; f_801E2CAC(c); // 801E90E4
  c->r[29]=rotl(c->r[3],0)&0x000000FFu; // 801E90E8
  cmps(c,0,(int32_t)c->r[29],4); // 801E90EC
  if (!crb(c,0)) { goto L_801E92CC; } // 801E90F0
  c->r[30]=(uint32_t)((int32_t)c->r[29]*(int32_t)284); // 801E90F4
  c->r[24]=0u+0x80310000u; // 801E90F8
  cmps(c,0,(int32_t)c->r[27],0); // 801E90FC
  c->r[24]=c->r[24]+0xFFFF8818u; // 801E9100
  c->r[31]=c->r[24]+c->r[30]; // 801E9104
  if (!crb(c,2)) { goto L_801E9160; } // 801E9108
  c->r[0]=R16(c->r[31]+0x00000038u); // 801E910C
  cmps(c,0,(int32_t)c->r[0],0); // 801E9110
  if (crb(c,2)) { goto L_801E9160; } // 801E9114
  c->lr=0x801E911Cu; f_801EA034(c); // 801E9118
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801E911C
  if (!crb(c,2)) { goto L_801E9160; } // 801E9120
  c->r[0]=0u+0x00000000u; // 801E9124
  W16(c->r[31]+0x00000038u,c->r[0]); // 801E9128
  c->r[0]=R8(c->r[24]+0x000027C0u); // 801E912C
  cmpu(c,0,c->r[0],0x00000005u); // 801E9130
  if (crb(c,0)) { goto L_801E9154; } // 801E9134
  c->r[3]=0u+0x000D0000u; // 801E9138
  c->r[4]=0u+0x80280000u; // 801E913C
  c->r[6]=R16(c->r[31]+0x00000036u); // 801E9140
  c->r[5]=c->r[26]|c->r[26]; // 801E9144
  c->r[3]=c->r[3]+0x00000004u; // 801E9148
  c->r[4]=c->r[4]+0xFFFFF628u; // 801E914C
  c->lr=0x801E9154u; f_801DC770(c); // 801E9150
L_801E9154:;
  c->r[3]=R16(c->r[31]+0x00000034u); // 801E9154
  c->r[4]=R16(c->r[31]+0x00000036u); // 801E9158
  c->lr=0x801E9160u; f_801EFF88(c); // 801E915C
L_801E9160:;
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)34); // 801E9160
  c->r[3]=0u+0x80310000u; // 801E9164
  cmps(c,0,(int32_t)c->r[27],0); // 801E9168
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E916C
  c->r[4]=c->r[3]+c->r[0]; // 801E9170
  W8(c->r[4]+0x000004ECu,c->r[27]); // 801E9174
  c->r[0]=0u+0x00000000u; // 801E9178
  W16(c->r[4]+0x000004EAu,c->r[28]); // 801E917C
  if (!crb(c,2)) { goto L_801E9194; } // 801E9180
  c->r[3]=R8(c->r[4]+0x000004D4u); // 801E9184
  cmpu(c,0,c->r[3],0x00000001u); // 801E9188
  if (!crb(c,2)) { goto L_801E9194; } // 801E918C
  W8(c->r[4]+0x000004D4u,c->r[0]); // 801E9190
L_801E9194:;
  cmps(c,0,(int32_t)c->r[27],0); // 801E9194
  c->r[5]=c->r[4]+0x000004D6u; // 801E9198
  if (!crb(c,2)) { goto L_801E91B0; } // 801E919C
  c->r[3]=R8(c->r[5]+0x00000008u); // 801E91A0
  cmpu(c,0,c->r[3],0x00000001u); // 801E91A4
  if (!crb(c,2)) { goto L_801E91B0; } // 801E91A8
  W8(c->r[5]+0x00000008u,c->r[0]); // 801E91AC
L_801E91B0:;
  c->r[0]=R8(c->r[4]+0x000004EDu); // 801E91B0
  cmpu(c,0,c->r[0],0x00000001u); // 801E91B4
  if (!crb(c,2)) { goto L_801E91CC; } // 801E91B8
  c->r[4]=c->r[29]|c->r[29]; // 801E91BC
  c->r[3]=0u+0x00000080u; // 801E91C0
  c->r[5]=0u+0x00000000u; // 801E91C4
  c->lr=0x801E91CCu; f_801E8DD8(c); // 801E91C8
L_801E91CC:;
  c->r[24]=0u+0x80310000u; // 801E91CC
  c->r[29]=0u+0x00000000u; // 801E91D0
  c->r[24]=c->r[24]+0xFFFF8818u; // 801E91D4
L_801E91D8:;
  c->r[0]=R8(c->r[24]+0x00000558u); // 801E91D8
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801E91DC
  if (crb(c,2)) { goto L_801E9200; } // 801E91E0
  c->r[12]=R32(c->r[24]+0x00000554u); // 801E91E4
  c->r[4]=c->r[27]|c->r[27]; // 801E91E8
  c->r[5]=c->r[28]|c->r[28]; // 801E91EC
  c->r[6]=c->r[25]|c->r[25]; // 801E91F0
  c->r[3]=c->r[31]+0x0000003Cu; // 801E91F4
  c->ctr=c->r[12]; // 801E91F8
  if (true) { c->lr=0x801E9200u; dispatch(c,c->ctr); } // 801E91FC
L_801E9200:;
  c->r[29]=c->r[29]+0x00000001u; // 801E9200
  c->r[24]=c->r[24]+0x00000008u; // 801E9204
  cmps(c,0,(int32_t)c->r[29],2); // 801E9208
  if (crb(c,0)) { IRQCHK(c); goto L_801E91D8; } // 801E920C
  c->r[3]=0u+0x80310000u; // 801E9210
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E9214
  c->r[28]=c->r[3]+c->r[30]; // 801E9218
  c->r[0]=R8(c->r[28]+0x0000014Fu); // 801E921C
  cmpu(c,0,c->r[0],0x00000001u); // 801E9220
  if (!crb(c,2)) { goto L_801E92CC; } // 801E9224
  c->r[24]=c->r[28]+0x0000003Cu; // 801E9228
  c->r[3]=c->r[24]|c->r[24]; // 801E922C
  c->lr=0x801E9234u; f_801E4E80(c); // 801E9230
  cmps(c,0,(int32_t)c->r[3],0); // 801E9234
  if (crb(c,2)) { goto L_801E9268; } // 801E9238
  c->r[0]=R8(c->r[3]+0x00000076u); // 801E923C
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801E9240
  if (crb(c,2)) { goto L_801E9268; } // 801E9244
  c->r[3]=c->r[26]|c->r[26]; // 801E9248
  c->r[4]=0u+0x00000000u; // 801E924C
  c->lr=0x801E9254u; f_801F0094(c); // 801E9250
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801E9254
  if (crb(c,2)) { goto L_801E929C; } // 801E9258
  c->r[0]=0u+0x00000002u; // 801E925C
  W8(c->r[28]+0x0000014Fu,c->r[0]); // 801E9260
  goto L_801E92CC; // 801E9264
L_801E9268:;
  c->r[4]=0u+0x80310000u; // 801E9268
  c->r[3]=c->r[24]|c->r[24]; // 801E926C
  c->r[4]=c->r[4]+0xFFFF8818u; // 801E9270
  c->r[4]=c->r[4]+c->r[30]; // 801E9274
  c->r[0]=R8(c->r[4]+0x0000014Eu); // 801E9278
  c->r[0]=cntlz(c->r[0]); // 801E927C
  c->r[4]=rotl(c->r[0],27)&0x000000FFu; // 801E9280
  c->lr=0x801E9288u; f_801F098C(c); // 801E9284
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801E9288
  if (crb(c,2)) { goto L_801E929C; } // 801E928C
  c->r[0]=0u+0x00000000u; // 801E9290
  W8(c->r[28]+0x0000014Fu,c->r[0]); // 801E9294
  goto L_801E92CC; // 801E9298
L_801E929C:;
  c->r[27]=0u+0x00000000u; // 801E929C
  c->r[26]=0u+0x80310000u; // 801E92A0
  W8(c->r[28]+0x0000014Fu,c->r[27]); // 801E92A4
  c->r[26]=c->r[26]+0xFFFF8818u; // 801E92A8
  c->r[12]=R32(c->r[26]+0x0000062Cu); // 801E92AC
  cmps(c,0,(int32_t)c->r[12],0); // 801E92B0
  if (crb(c,2)) { goto L_801E92CC; } // 801E92B4
  W8(c->r[26]+0x00000624u,c->r[25]); // 801E92B8
  c->r[3]=c->r[26]+0x00000624u; // 801E92BC
  c->ctr=c->r[12]; // 801E92C0
  if (true) { c->lr=0x801E92C8u; dispatch(c,c->ctr); } // 801E92C4
  W32(c->r[26]+0x0000062Cu,c->r[27]); // 801E92C8
L_801E92CC:;
  c->r[11]=c->r[1]+0x00000030u; // 801E92CC
  c->lr=0x801E92D4u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E92D0
  c->r[0]=R32(c->r[1]+0x00000034u); // 801E92D4
  c->lr=c->r[0]; // 801E92D8
  c->r[1]=c->r[1]+0x00000030u; // 801E92DC
  return; // 801E92E0
}

// btm_sco_init
void f_801E92E4(Ctx* __restrict c) {
  trace_call(0x801E92E4u);
  c->r[3]=0u+0x80230000u; // 801E92E4
  {uint32_t ea=c->r[3]+0xFFFFC608u; c->r[6]=R32(ea); c->r[3]=ea;} // 801E92E8
  c->r[4]=0u+0x00010000u; // 801E92EC
  c->r[7]=0u+0x80310000u; // 801E92F0
  c->r[8]=c->r[4]+0xFFFFFFFFu; // 801E92F4
  c->r[5]=R32(c->r[3]+0x00000004u); // 801E92F8
  c->r[7]=c->r[7]+0xFFFF8818u; // 801E92FC
  c->r[4]=R32(c->r[3]+0x00000008u); // 801E9300
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 801E9304
  c->r[0]=0u+0x00000002u; // 801E9308
  W16(c->r[7]+0x000018F6u,c->r[8]); // 801E930C
  W32(c->r[7]+0x000018F8u,c->r[6]); // 801E9310
  W32(c->r[7]+0x000018FCu,c->r[5]); // 801E9314
  W32(c->r[7]+0x00001900u,c->r[4]); // 801E9318
  W32(c->r[7]+0x00001904u,c->r[3]); // 801E931C
  W8(c->r[7]+0x00001909u,c->r[0]); // 801E9320
  return; // 801E9324
}

// btm_esco_conn_rsp
void f_801E9328(Ctx* __restrict c) {
  trace_call(0x801E9328u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E9328
  c->r[0]=c->lr; // 801E932C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E9330
  c->r[11]=c->r[1]+0x00000020u; // 801E9334
  c->lr=0x801E933Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E9338
  c->r[26]=c->r[3]|c->r[3]; // 801E933C
  c->r[27]=c->r[4]|c->r[4]; // 801E9340
  c->r[29]=c->r[5]|c->r[5]; // 801E9344
  c->r[28]=c->r[6]|c->r[6]; // 801E9348
  c->r[31]=0u+0x00000000u; // 801E934C
  c->r[3]=0u+0x00000002u; // 801E9350
  c->lr=0x801E9358u; f_801D9B80(c); // 801E9354
  cmps(c,0,(int32_t)c->r[3],0); // 801E9358
  c->r[30]=c->r[3]|c->r[3]; // 801E935C
  if (!crb(c,2)) { goto L_801E938C; } // 801E9360
  c->r[3]=0u+0x80310000u; // 801E9364
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E9368
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801E936C
  cmpu(c,0,c->r[0],0x00000001u); // 801E9370
  if (crb(c,0)) { goto L_801E94EC; } // 801E9374
  c->r[4]=0u+0x80280000u; // 801E9378
  c->r[3]=0u+0x000D0000u; // 801E937C
  c->r[4]=c->r[4]+0xFFFFF668u; // 801E9380
  c->lr=0x801E9388u; f_801DC730(c); // 801E9384
  goto L_801E94EC; // 801E9388
L_801E938C:;
  cmpu(c,0,c->r[26],0x00000003u); // 801E938C
  if (!crb(c,0)) { goto L_801E93A8; } // 801E9390
  c->r[0]=(uint32_t)((int32_t)c->r[26]*(int32_t)52); // 801E9394
  c->r[3]=0u+0x80310000u; // 801E9398
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E939C
  c->r[3]=c->r[3]+c->r[0]; // 801E93A0
  c->r[31]=c->r[3]+0x00001854u; // 801E93A4
L_801E93A8:;
  cmps(c,0,(int32_t)c->r[27],0); // 801E93A8
  if (crb(c,2)) { goto L_801E9408; } // 801E93AC
  cmps(c,0,(int32_t)c->r[31],0); // 801E93B0
  if (crb(c,2)) { goto L_801E93CC; } // 801E93B4
  c->r[3]=R16(c->r[31]+0x00000008u); // 801E93B8
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 801E93BC
  c->r[0]=cntlz(c->r[0]); // 801E93C0
  c->r[0]=rotl(c->r[0],27)&0x0000FFFFu; // 801E93C4
  W16(c->r[31]+0x00000008u,c->r[0]); // 801E93C8
L_801E93CC:;
  c->r[3]=0u+0x80310000u; // 801E93CC
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E93D0
  c->r[0]=R8(c->r[3]+0x00001908u); // 801E93D4
  cmps(c,0,(int32_t)c->r[0],0); // 801E93D8
  if (!crb(c,2)) { goto L_801E93F4; } // 801E93DC
  c->r[3]=c->r[30]|c->r[30]; // 801E93E0
  c->r[4]=c->r[29]|c->r[29]; // 801E93E4
  c->r[5]=c->r[27]|c->r[27]; // 801E93E8
  c->lr=0x801E93F0u; f_801EFA68(c); // 801E93EC
  goto L_801E94EC; // 801E93F0
L_801E93F4:;
  c->r[3]=c->r[30]|c->r[30]; // 801E93F4
  c->r[4]=c->r[29]|c->r[29]; // 801E93F8
  c->r[5]=c->r[27]|c->r[27]; // 801E93FC
  c->lr=0x801E9404u; f_801F05F0(c); // 801E9400
  goto L_801E94EC; // 801E9404
L_801E9408:;
  c->r[3]=0u+0x00000001u; // 801E9408
  c->lr=0x801E9410u; f_801E47B4(c); // 801E940C
  c->r[0]=0u+0x00000003u; // 801E9410
  c->r[3]=0u+0x80310000u; // 801E9414
  W16(c->r[31]+0x00000008u,c->r[0]); // 801E9418
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E941C
  c->r[0]=R8(c->r[3]+0x00001908u); // 801E9420
  cmps(c,0,(int32_t)c->r[0],0); // 801E9424
  if (crb(c,2)) { goto L_801E94DC; } // 801E9428
  c->r[0]=R8(c->r[31]+0x0000002Eu); // 801E942C
  cmpu(c,0,c->r[0],0x00000002u); // 801E9430
  if (!crb(c,2)) { goto L_801E94DC; } // 801E9434
  cmps(c,0,(int32_t)c->r[28],0); // 801E9438
  if (crb(c,2)) { goto L_801E9460; } // 801E943C
  c->r[3]=R32(c->r[28]+0x00000000u); // 801E9440
  c->r[0]=R32(c->r[28]+0x00000004u); // 801E9444
  W32(c->r[31]+0x00000014u,c->r[3]); // 801E9448
  W32(c->r[31]+0x00000018u,c->r[0]); // 801E944C
  c->r[3]=R32(c->r[28]+0x00000008u); // 801E9450
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 801E9454
  W32(c->r[31]+0x0000001Cu,c->r[3]); // 801E9458
  W32(c->r[31]+0x00000020u,c->r[0]); // 801E945C
L_801E9460:;
  c->r[3]=0u+0x80310000u; // 801E9460
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E9464
  c->r[4]=R16(c->r[3]+0x00001904u); // 801E9468
  W16(c->r[31]+0x00000020u,c->r[4]); // 801E946C
  c->r[5]=R16(c->r[3]+0x00000656u); // 801E9470
  c->r[3]=c->r[4]&c->r[5]; // 801E9474
  c->r[0]=rotl(c->r[3],0)&0x00000038u; cr0(c,c->r[0]); // 801E9478
  c->r[28]=rotl(c->r[3],0)&0x0000003Fu; // 801E947C
  if (!crb(c,2)) { goto L_801E948C; } // 801E9480
  c->r[0]=c->r[28]|0x00000008u; // 801E9484
  c->r[28]=rotl(c->r[0],0)&0x0000FFFFu; // 801E9488
L_801E948C:;
  c->r[3]=0u+0x80310000u; // 801E948C
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E9490
  c->r[0]=R8(c->r[3]+0x00000636u); // 801E9494
  cmpu(c,0,c->r[0],0x00000003u); // 801E9498
  if (crb(c,0)) { goto L_801E94B0; } // 801E949C
  c->r[0]=c->r[4]|c->r[5]; // 801E94A0
  c->r[0]=rotl(c->r[0],0)&0x000003C0u; // 801E94A4
  c->r[0]=c->r[28]|c->r[0]; // 801E94A8
  c->r[28]=rotl(c->r[0],0)&0x0000FFFFu; // 801E94AC
L_801E94B0:;
  c->r[5]=R32(c->r[31]+0x00000014u); // 801E94B0
  c->r[3]=c->r[30]|c->r[30]; // 801E94B4
  c->r[6]=R32(c->r[31]+0x00000018u); // 801E94B8
  c->r[4]=c->r[29]|c->r[29]; // 801E94BC
  c->r[7]=R16(c->r[31]+0x0000001Cu); // 801E94C0
  c->r[10]=rotl(c->r[28],0)&0x0000FFFFu; // 801E94C4
  c->r[8]=R16(c->r[31]+0x0000001Eu); // 801E94C8
  c->r[9]=R8(c->r[31]+0x00000022u); // 801E94CC
  c->lr=0x801E94D4u; f_801F0508(c); // 801E94D0
  W16(c->r[31]+0x00000020u,c->r[28]); // 801E94D4
  goto L_801E94EC; // 801E94D8
L_801E94DC:;
  c->r[3]=c->r[30]|c->r[30]; // 801E94DC
  c->r[4]=c->r[29]|c->r[29]; // 801E94E0
  c->r[5]=0u+0x00000000u; // 801E94E4
  c->lr=0x801E94ECu; f_801EFA08(c); // 801E94E8
L_801E94EC:;
  c->r[11]=c->r[1]+0x00000020u; // 801E94EC
  c->lr=0x801E94F4u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E94F0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E94F4
  c->lr=c->r[0]; // 801E94F8
  c->r[1]=c->r[1]+0x00000020u; // 801E94FC
  return; // 801E9500
}

// btm_sco_chk_pend_unpark
void f_801E9504(Ctx* __restrict c) {
  trace_call(0x801E9504u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E9504
  c->r[0]=c->lr; // 801E9508
  W32(c->r[1]+0x00000044u,c->r[0]); // 801E950C
  c->r[11]=c->r[1]+0x00000040u; // 801E9510
  c->lr=0x801E9518u; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E9514
  c->r[28]=0u+0x80310000u; // 801E9518
  c->r[23]=c->r[3]|c->r[3]; // 801E951C
  c->r[28]=c->r[28]+0xFFFF8818u; // 801E9520
  c->r[24]=c->r[4]|c->r[4]; // 801E9524
  c->r[25]=c->r[5]|c->r[5]; // 801E9528
  c->r[27]=0u+0x00000000u; // 801E952C
  c->r[26]=c->r[28]+0x00001854u; // 801E9530
  c->r[30]=0u+0x000D0000u; // 801E9534
  c->r[31]=0u+0x80280000u; // 801E9538
  c->r[21]=0u+0x80280000u; // 801E953C
  c->r[22]=0u+0x00000003u; // 801E9540
L_801E9544:;
  c->r[0]=R16(c->r[26]+0x00000008u); // 801E9544
  cmpu(c,0,c->r[0],0x00000006u); // 801E9548
  if (!crb(c,2)) { goto L_801E9668; } // 801E954C
  cmps(c,0,(int32_t)c->r[25],0); // 801E9550
  if (!crb(c,2)) { goto L_801E9668; } // 801E9554
  cmps(c,0,(int32_t)c->r[23],0); // 801E9558
  if (!crb(c,2)) { goto L_801E9668; } // 801E955C
  c->r[3]=c->r[26]+0x00000028u; // 801E9560
  c->lr=0x801E9568u; f_801E3C08(c); // 801E9564
  c->r[5]=rotl(c->r[3],0)&0x0000FFFFu; // 801E9568
  c->r[29]=c->r[3]|c->r[3]; // 801E956C
  cmpu(c,0,c->r[24],c->r[5]); // 801E9570
  if (!crb(c,2)) { goto L_801E9668; } // 801E9574
  c->r[0]=R8(c->r[28]+0x000027C0u); // 801E9578
  cmpu(c,0,c->r[0],0x00000003u); // 801E957C
  if (crb(c,0)) { goto L_801E9594; } // 801E9580
  c->r[6]=R8(c->r[28]+0x00001909u); // 801E9584
  c->r[3]=c->r[30]+0x00000002u; // 801E9588
  c->r[4]=c->r[31]+0xFFFFF744u; // 801E958C
  c->lr=0x801E9594u; f_801DC770(c); // 801E9590
L_801E9594:;
  c->r[3]=0u+0x00000001u; // 801E9594
  c->lr=0x801E959Cu; f_801E47B4(c); // 801E9598
  c->r[0]=R8(c->r[28]+0x00001908u); // 801E959C
  cmps(c,0,(int32_t)c->r[0],0); // 801E95A0
  if (!crb(c,2)) { goto L_801E95C8; } // 801E95A4
  c->r[0]=R16(c->r[26]+0x00000020u); // 801E95A8
  c->r[3]=rotl(c->r[29],0)&0x0000FFFFu; // 801E95AC
  c->r[4]=rotl(c->r[0],5)&0x000000E0u; // 801E95B0
  c->lr=0x801E95B8u; f_801EF97C(c); // 801E95B4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801E95B8
  if (!crb(c,2)) { goto L_801E9658; } // 801E95BC
  c->r[0]=0u+0x00000003u; // 801E95C0
  goto L_801E965C; // 801E95C4
L_801E95C8:;
  c->r[0]=R8(c->r[28]+0x00000636u); // 801E95C8
  c->r[3]=R16(c->r[28]+0x00000656u); // 801E95CC
  c->r[4]=R16(c->r[26]+0x00000020u); // 801E95D0
  cmpu(c,0,c->r[0],0x00000003u); // 801E95D4
  c->r[0]=c->r[4]&c->r[3]; // 801E95D8
  c->r[20]=rotl(c->r[0],0)&0x0000003Fu; // 801E95DC
  if (crb(c,0)) { goto L_801E95F4; } // 801E95E0
  c->r[0]=c->r[4]|c->r[3]; // 801E95E4
  c->r[0]=rotl(c->r[0],0)&0x000003C0u; // 801E95E8
  c->r[0]=c->r[20]|c->r[0]; // 801E95EC
  c->r[20]=rotl(c->r[0],0)&0x0000FFFFu; // 801E95F0
L_801E95F4:;
  c->r[0]=R8(c->r[28]+0x000027C0u); // 801E95F4
  cmpu(c,0,c->r[0],0x00000003u); // 801E95F8
  if (crb(c,0)) { goto L_801E9624; } // 801E95FC
  c->r[5]=R32(c->r[26]+0x00000014u); // 801E9600
  c->r[3]=c->r[30]+0x00000002u; // 801E9604
  c->r[6]=R32(c->r[26]+0x00000018u); // 801E9608
  c->r[4]=c->r[21]+0xFFFFF6F4u; // 801E960C
  c->r[7]=R16(c->r[26]+0x0000001Cu); // 801E9610
  c->r[10]=rotl(c->r[20],0)&0x0000FFFFu; // 801E9614
  c->r[8]=R16(c->r[26]+0x0000001Eu); // 801E9618
  c->r[9]=R8(c->r[26]+0x00000022u); // 801E961C
  c->lr=0x801E9624u; f_801DC7F0(c); // 801E9620
L_801E9624:;
  c->r[4]=R32(c->r[26]+0x00000014u); // 801E9624
  c->r[3]=rotl(c->r[29],0)&0x0000FFFFu; // 801E9628
  c->r[5]=R32(c->r[26]+0x00000018u); // 801E962C
  c->r[9]=rotl(c->r[20],0)&0x0000FFFFu; // 801E9630
  c->r[6]=R16(c->r[26]+0x0000001Cu); // 801E9634
  c->r[7]=R16(c->r[26]+0x0000001Eu); // 801E9638
  c->r[8]=R8(c->r[26]+0x00000022u); // 801E963C
  c->lr=0x801E9644u; f_801F040C(c); // 801E9640
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801E9644
  if (!crb(c,2)) { goto L_801E9654; } // 801E9648
  c->r[0]=0u+0x00000003u; // 801E964C
  goto L_801E965C; // 801E9650
L_801E9654:;
  W16(c->r[26]+0x00000020u,c->r[20]); // 801E9654
L_801E9658:;
  c->r[0]=0u+0x00000001u; // 801E9658
L_801E965C:;
  cmpu(c,0,c->r[0],0x00000001u); // 801E965C
  if (!crb(c,2)) { goto L_801E9668; } // 801E9660
  W16(c->r[26]+0x00000008u,c->r[22]); // 801E9664
L_801E9668:;
  c->r[27]=c->r[27]+0x00000001u; // 801E9668
  c->r[26]=c->r[26]+0x00000034u; // 801E966C
  cmpu(c,0,c->r[27],0x00000003u); // 801E9670
  if (crb(c,0)) { IRQCHK(c); goto L_801E9544; } // 801E9674
  c->r[11]=c->r[1]+0x00000040u; // 801E9678
  c->lr=0x801E9680u; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E967C
  c->r[0]=R32(c->r[1]+0x00000044u); // 801E9680
  c->lr=c->r[0]; // 801E9684
  c->r[1]=c->r[1]+0x00000040u; // 801E9688
  return; // 801E968C
}

// btm_sco_conn_req
void f_801E9690(Ctx* __restrict c) {
  trace_call(0x801E9690u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E9690
  c->r[0]=c->lr; // 801E9694
  W32(c->r[1]+0x00000034u,c->r[0]); // 801E9698
  c->r[11]=c->r[1]+0x00000030u; // 801E969C
  c->lr=0x801E96A4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E96A0
  c->r[6]=0u+0x80310000u; // 801E96A4
  c->r[30]=c->r[3]|c->r[3]; // 801E96A8
  c->r[6]=c->r[6]+0xFFFF8818u; // 801E96AC
  c->r[29]=c->r[4]|c->r[4]; // 801E96B0
  c->r[31]=c->r[5]|c->r[5]; // 801E96B4
  c->r[28]=0u+0x00000000u; // 801E96B8
  c->r[27]=c->r[6]+0x00001854u; // 801E96BC
L_801E96C0:;
  c->r[3]=R16(c->r[27]+0x00000008u); // 801E96C0
  cmpu(c,0,c->r[3],0x00000001u); // 801E96C4
  if (!crb(c,2)) { goto L_801E96D8; } // 801E96C8
  c->r[0]=R8(c->r[27]+0x0000000Du); // 801E96CC
  cmps(c,0,(int32_t)c->r[0],0); // 801E96D0
  if (!crb(c,2)) { goto L_801E96E0; } // 801E96D4
L_801E96D8:;
  cmpu(c,0,c->r[3],0x00000003u); // 801E96D8
  if (!crb(c,2)) { goto L_801E9780; } // 801E96DC
L_801E96E0:;
  c->r[4]=c->r[30]|c->r[30]; // 801E96E0
  c->r[3]=c->r[27]+0x00000028u; // 801E96E4
  c->r[5]=0u+0x00000006u; // 801E96E8
  c->lr=0x801E96F0u; f_8020BD24(c); // 801E96EC
  cmps(c,0,(int32_t)c->r[3],0); // 801E96F0
  if (!crb(c,2)) { goto L_801E9780; } // 801E96F4
  c->r[0]=0u+0x00000001u; // 801E96F8
  c->r[4]=c->r[30]|c->r[30]; // 801E96FC
  W8(c->r[27]+0x0000000Du,c->r[0]); // 801E9700
  c->r[3]=c->r[27]+0x00000028u; // 801E9704
  c->r[5]=0u+0x00000006u; // 801E9708
  W8(c->r[27]+0x0000002Eu,c->r[31]); // 801E970C
  c->lr=0x801E9714u; f_80004364(c); // 801E9710
  c->r[0]=R32(c->r[27]+0x00000010u); // 801E9714
  cmps(c,0,(int32_t)c->r[0],0); // 801E9718
  if (!crb(c,2)) { goto L_801E9738; } // 801E971C
  c->r[5]=c->r[30]|c->r[30]; // 801E9720
  c->r[3]=rotl(c->r[28],0)&0x0000FFFFu; // 801E9724
  c->r[4]=0u+0x00000000u; // 801E9728
  c->r[6]=0u+0x00000000u; // 801E972C
  c->lr=0x801E9734u; f_801E9328(c); // 801E9730
  goto L_801E9858; // 801E9734
L_801E9738:;
  c->r[4]=c->r[30]|c->r[30]; // 801E9738
  c->r[3]=c->r[1]+0x0000000Au; // 801E973C
  c->r[5]=0u+0x00000006u; // 801E9740
  c->lr=0x801E9748u; f_80004364(c); // 801E9744
  c->r[4]=c->r[29]|c->r[29]; // 801E9748
  c->r[3]=c->r[1]+0x00000010u; // 801E974C
  c->r[5]=0u+0x00000003u; // 801E9750
  c->lr=0x801E9758u; f_80004364(c); // 801E9754
  c->r[0]=0u+0x00000002u; // 801E9758
  W8(c->r[1]+0x00000013u,c->r[31]); // 801E975C
  c->r[4]=c->r[1]+0x00000008u; // 801E9760
  c->r[3]=0u+0x00000002u; // 801E9764
  W16(c->r[27]+0x00000008u,c->r[0]); // 801E9768
  c->r[12]=R32(c->r[27]+0x00000010u); // 801E976C
  W16(c->r[1]+0x00000008u,c->r[28]); // 801E9770
  c->ctr=c->r[12]; // 801E9774
  if (true) { c->lr=0x801E977Cu; dispatch(c,c->ctr); } // 801E9778
  goto L_801E9858; // 801E977C
L_801E9780:;
  c->r[28]=c->r[28]+0x00000001u; // 801E9780
  c->r[27]=c->r[27]+0x00000034u; // 801E9784
  cmpu(c,0,c->r[28],0x00000003u); // 801E9788
  if (crb(c,0)) { IRQCHK(c); goto L_801E96C0; } // 801E978C
  c->r[3]=0u+0x80310000u; // 801E9790
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E9794
  c->r[0]=R32(c->r[3]+0x00001850u); // 801E9798
  cmps(c,0,(int32_t)c->r[0],0); // 801E979C
  if (crb(c,2)) { goto L_801E981C; } // 801E97A0
  c->r[0]=0u+0x00000003u; // 801E97A4
  c->r[28]=c->r[3]+0x00001854u; // 801E97A8
  c->r[27]=0u+0x00000000u; // 801E97AC
  c->ctr=c->r[0]; // 801E97B0
L_801E97B4:;
  c->r[0]=R16(c->r[28]+0x00000008u); // 801E97B4
  cmps(c,0,(int32_t)c->r[0],0); // 801E97B8
  if (!crb(c,2)) { goto L_801E97EC; } // 801E97BC
  c->r[0]=0u+0x00000000u; // 801E97C0
  c->r[29]=0u+0x00000001u; // 801E97C4
  W8(c->r[28]+0x0000000Cu,c->r[0]); // 801E97C8
  c->r[4]=c->r[30]|c->r[30]; // 801E97CC
  c->r[3]=c->r[28]+0x00000028u; // 801E97D0
  c->r[5]=0u+0x00000006u; // 801E97D4
  W16(c->r[28]+0x00000008u,c->r[29]); // 801E97D8
  W8(c->r[28]+0x0000002Eu,c->r[31]); // 801E97DC
  c->lr=0x801E97E4u; f_80004364(c); // 801E97E0
  W8(c->r[28]+0x0000000Du,c->r[29]); // 801E97E4
  goto L_801E97F8; // 801E97E8
L_801E97EC:;
  c->r[27]=c->r[27]+0x00000001u; // 801E97EC
  c->r[28]=c->r[28]+0x00000034u; // 801E97F0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E97B4; } // 801E97F4
L_801E97F8:;
  c->r[3]=rotl(c->r[27],0)&0x0000FFFFu; // 801E97F8
  cmpu(c,0,c->r[3],0x00000003u); // 801E97FC
  if (!crb(c,0)) { goto L_801E981C; } // 801E9800
  c->r[4]=0u+0x80310000u; // 801E9804
  c->r[4]=c->r[4]+0xFFFF8818u; // 801E9808
  c->r[12]=R32(c->r[4]+0x00001850u); // 801E980C
  c->ctr=c->r[12]; // 801E9810
  if (true) { c->lr=0x801E9818u; dispatch(c,c->ctr); } // 801E9814
  goto L_801E9858; // 801E9818
L_801E981C:;
  c->r[3]=0u+0x80310000u; // 801E981C
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E9820
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801E9824
  cmpu(c,0,c->r[0],0x00000002u); // 801E9828
  if (crb(c,0)) { goto L_801E9844; } // 801E982C
  c->r[3]=0u+0x000D0000u; // 801E9830
  c->r[4]=0u+0x80280000u; // 801E9834
  c->r[3]=c->r[3]+0x00000001u; // 801E9838
  c->r[4]=c->r[4]+0xFFFFF794u; // 801E983C
  c->lr=0x801E9844u; f_801DC730(c); // 801E9840
L_801E9844:;
  c->r[5]=c->r[30]|c->r[30]; // 801E9844
  c->r[3]=0u+0x00000003u; // 801E9848
  c->r[4]=0u+0x0000000Du; // 801E984C
  c->r[6]=0u+0x00000000u; // 801E9850
  c->lr=0x801E9858u; f_801E9328(c); // 801E9854
L_801E9858:;
  c->r[11]=c->r[1]+0x00000030u; // 801E9858
  c->lr=0x801E9860u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E985C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801E9860
  c->lr=c->r[0]; // 801E9864
  c->r[1]=c->r[1]+0x00000030u; // 801E9868
  return; // 801E986C
}

// btm_sco_connected
void f_801E9870(Ctx* __restrict c) {
  trace_call(0x801E9870u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E9870
  c->r[0]=c->lr; // 801E9874
  W32(c->r[1]+0x00000034u,c->r[0]); // 801E9878
  c->r[11]=c->r[1]+0x00000030u; // 801E987C
  c->lr=0x801E9884u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E9880
  c->r[7]=0u+0x80310000u; // 801E9884
  c->r[24]=c->r[3]|c->r[3]; // 801E9888
  c->r[7]=c->r[7]+0xFFFF8818u; // 801E988C
  c->r[25]=c->r[4]|c->r[4]; // 801E9890
  W16(c->r[7]+0x000018F6u,c->r[3]); // 801E9894
  c->r[26]=c->r[5]|c->r[5]; // 801E9898
  c->r[29]=c->r[6]|c->r[6]; // 801E989C
  c->r[31]=c->r[7]+0x00001854u; // 801E98A0
  c->r[27]=0u+0x00000000u; // 801E98A4
  c->r[30]=0u+0x00000000u; // 801E98A8
L_801E98AC:;
  c->r[28]=R16(c->r[31]+0x00000008u); // 801E98AC
  c->r[3]=c->r[28]+0x00010000u; // 801E98B0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801E98B4
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801E98B8
  cmpu(c,0,c->r[0],0x00000002u); // 801E98BC
  if (crb(c,1)) { goto L_801E99E8; } // 801E98C0
  c->r[0]=R8(c->r[31]+0x0000000Du); // 801E98C4
  cmps(c,0,(int32_t)c->r[0],0); // 801E98C8
  if (crb(c,2)) { goto L_801E99E8; } // 801E98CC
  cmps(c,0,(int32_t)c->r[25],0); // 801E98D0
  if (crb(c,2)) { goto L_801E98F0; } // 801E98D4
  c->r[4]=c->r[25]|c->r[25]; // 801E98D8
  c->r[3]=c->r[31]+0x00000028u; // 801E98DC
  c->r[5]=0u+0x00000006u; // 801E98E0
  c->lr=0x801E98E8u; f_8020BD24(c); // 801E98E4
  cmps(c,0,(int32_t)c->r[3],0); // 801E98E8
  if (!crb(c,2)) { goto L_801E99E8; } // 801E98EC
L_801E98F0:;
  cmps(c,0,(int32_t)c->r[24],0); // 801E98F0
  if (crb(c,2)) { goto L_801E9930; } // 801E98F4
  cmpu(c,0,c->r[28],0x00000003u); // 801E98F8
  if (!crb(c,2)) { goto L_801E9924; } // 801E98FC
  cmpu(c,0,c->r[24],0x00000023u); // 801E9900
  if (crb(c,2)) { goto L_801E99F8; } // 801E9904
  c->r[0]=0u+0x00000000u; // 801E9908
  c->r[3]=rotl(c->r[30],0)&0x0000FFFFu; // 801E990C
  W16(c->r[31]+0x00000008u,c->r[0]); // 801E9910
  c->r[12]=R32(c->r[31]+0x00000004u); // 801E9914
  c->ctr=c->r[12]; // 801E9918
  if (true) { c->lr=0x801E9920u; dispatch(c,c->ctr); } // 801E991C
  goto L_801E99F8; // 801E9920
L_801E9924:;
  c->r[0]=0u+0x00000001u; // 801E9924
  W16(c->r[31]+0x00000008u,c->r[0]); // 801E9928
  goto L_801E99F8; // 801E992C
L_801E9930:;
  cmpu(c,0,c->r[28],0x00000001u); // 801E9930
  if (!crb(c,2)) { goto L_801E993C; } // 801E9934
  c->r[27]=0u+0x00000001u; // 801E9938
L_801E993C:;
  c->r[0]=0u+0x00000004u; // 801E993C
  c->r[3]=0u+0x80310000u; // 801E9940
  W16(c->r[31]+0x00000008u,c->r[0]); // 801E9944
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E9948
  W16(c->r[31]+0x0000000Au,c->r[26]); // 801E994C
  c->r[0]=R8(c->r[3]+0x00001908u); // 801E9950
  cmps(c,0,(int32_t)c->r[0],0); // 801E9954
  if (!crb(c,2)) { goto L_801E9994; } // 801E9958
  c->r[0]=0u+0x00000000u; // 801E995C
  cmps(c,0,(int32_t)c->r[27],0); // 801E9960
  W8(c->r[31]+0x0000002Eu,c->r[0]); // 801E9964
  if (crb(c,2)) { goto L_801E99D4; } // 801E9968
  c->r[6]=R16(c->r[31]+0x00000020u); // 801E996C
  c->r[3]=rotl(c->r[30],0)&0x0000FFFFu; // 801E9970
  c->r[5]=R16(c->r[31]+0x0000001Cu); // 801E9974
  c->r[4]=c->r[1]+0x00000008u; // 801E9978
  c->r[0]=R8(c->r[31]+0x00000022u); // 801E997C
  W16(c->r[1]+0x0000000Au,c->r[6]); // 801E9980
  W16(c->r[1]+0x00000008u,c->r[5]); // 801E9984
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801E9988
  c->lr=0x801E9990u; f_801E9D18(c); // 801E998C
  goto L_801E99D4; // 801E9990
L_801E9994:;
  cmps(c,0,(int32_t)c->r[29],0); // 801E9994
  if (crb(c,2)) { goto L_801E99D4; } // 801E9998
  c->r[3]=R16(c->r[29]+0x00000000u); // 801E999C
  c->r[0]=R16(c->r[29]+0x00000002u); // 801E99A0
  W16(c->r[31]+0x00000024u,c->r[3]); // 801E99A4
  W16(c->r[31]+0x00000026u,c->r[0]); // 801E99A8
  c->r[3]=R16(c->r[29]+0x00000004u); // 801E99AC
  c->r[0]=R16(c->r[29]+0x00000006u); // 801E99B0
  W16(c->r[31]+0x00000028u,c->r[3]); // 801E99B4
  W16(c->r[31]+0x0000002Au,c->r[0]); // 801E99B8
  c->r[0]=R16(c->r[29]+0x00000008u); // 801E99BC
  W16(c->r[31]+0x0000002Cu,c->r[0]); // 801E99C0
  c->r[0]=R16(c->r[29]+0x0000000Au); // 801E99C4
  W16(c->r[31]+0x0000002Eu,c->r[0]); // 801E99C8
  c->r[0]=R16(c->r[29]+0x0000000Cu); // 801E99CC
  W16(c->r[31]+0x00000030u,c->r[0]); // 801E99D0
L_801E99D4:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 801E99D4
  c->r[3]=rotl(c->r[30],0)&0x0000FFFFu; // 801E99D8
  c->ctr=c->r[12]; // 801E99DC
  if (true) { c->lr=0x801E99E4u; dispatch(c,c->ctr); } // 801E99E0
  goto L_801E99F8; // 801E99E4
L_801E99E8:;
  c->r[30]=c->r[30]+0x00000001u; // 801E99E8
  c->r[31]=c->r[31]+0x00000034u; // 801E99EC
  cmpu(c,0,c->r[30],0x00000003u); // 801E99F0
  if (crb(c,0)) { IRQCHK(c); goto L_801E98AC; } // 801E99F4
L_801E99F8:;
  c->r[11]=c->r[1]+0x00000030u; // 801E99F8
  c->lr=0x801E9A00u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E99FC
  c->r[0]=R32(c->r[1]+0x00000034u); // 801E9A00
  c->lr=c->r[0]; // 801E9A04
  c->r[1]=c->r[1]+0x00000030u; // 801E9A08
  return; // 801E9A0C
}

// BTM_RemoveSco
void f_801E9A10(Ctx* __restrict c) {
  trace_call(0x801E9A10u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E9A10
  c->r[0]=c->lr; // 801E9A14
  c->r[4]=0u+0x80310000u; // 801E9A18
  cmpu(c,0,c->r[3],0x00000003u); // 801E9A1C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E9A20
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)52); // 801E9A24
  c->r[4]=c->r[4]+0xFFFF8818u; // 801E9A28
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E9A2C
  c->r[31]=c->r[4]+c->r[0]; // 801E9A30
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E9A34
  if (!crb(c,0)) { goto L_801E9A48; } // 801E9A38
  c->r[30]=R16(c->r[31]+0x0000185Cu); // 801E9A3C
  cmps(c,0,(int32_t)c->r[30],0); // 801E9A40
  if (!crb(c,2)) { goto L_801E9A50; } // 801E9A44
L_801E9A48:;
  c->r[3]=0u+0x00000007u; // 801E9A48
  goto L_801E9AB0; // 801E9A4C
L_801E9A50:;
  c->r[0]=R16(c->r[31]+0x0000185Eu); // 801E9A50
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801E9A54
  if (crb(c,2)) { goto L_801E9A64; } // 801E9A58
  cmpu(c,0,c->r[30],0x00000006u); // 801E9A5C
  if (!crb(c,2)) { goto L_801E9A84; } // 801E9A60
L_801E9A64:;
  c->r[3]=0u+0x00010000u; // 801E9A64
  c->r[0]=0u+0x00000000u; // 801E9A68
  c->r[4]=c->r[3]+0xFFFFFFFFu; // 801E9A6C
  W16(c->r[31]+0x0000185Eu,c->r[4]); // 801E9A70
  c->r[3]=0u+0x00000000u; // 801E9A74
  W16(c->r[31]+0x0000185Cu,c->r[0]); // 801E9A78
  W32(c->r[31]+0x00001864u,c->r[0]); // 801E9A7C
  goto L_801E9AB0; // 801E9A80
L_801E9A84:;
  c->r[0]=0u+0x00000005u; // 801E9A84
  c->r[4]=0u+0x00000013u; // 801E9A88
  W16(c->r[31]+0x0000185Cu,c->r[0]); // 801E9A8C
  c->r[3]=R16(c->r[31]+0x0000185Eu); // 801E9A90
  c->lr=0x801E9A98u; f_801EF8F4(c); // 801E9A94
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801E9A98
  if (!crb(c,2)) { goto L_801E9AAC; } // 801E9A9C
  W16(c->r[31]+0x0000185Cu,c->r[30]); // 801E9AA0
  c->r[3]=0u+0x00000003u; // 801E9AA4
  goto L_801E9AB0; // 801E9AA8
L_801E9AAC:;
  c->r[3]=0u+0x00000001u; // 801E9AAC
L_801E9AB0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E9AB0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E9AB4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E9AB8
  c->lr=c->r[0]; // 801E9ABC
  c->r[1]=c->r[1]+0x00000010u; // 801E9AC0
  return; // 801E9AC4
}

// btm_remove_sco_links
void f_801E9AC8(Ctx* __restrict c) {
  trace_call(0x801E9AC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E9AC8
  c->r[0]=c->lr; // 801E9ACC
  c->r[4]=0u+0x80310000u; // 801E9AD0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E9AD4
  c->r[4]=c->r[4]+0xFFFF8818u; // 801E9AD8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E9ADC
  c->r[31]=c->r[4]+0x00001854u; // 801E9AE0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E9AE4
  c->r[30]=0u+0x00000000u; // 801E9AE8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E9AEC
  c->r[29]=c->r[3]|c->r[3]; // 801E9AF0
L_801E9AF4:;
  c->r[0]=R8(c->r[31]+0x0000000Du); // 801E9AF4
  cmps(c,0,(int32_t)c->r[0],0); // 801E9AF8
  if (crb(c,2)) { goto L_801E9B20; } // 801E9AFC
  c->r[4]=c->r[29]|c->r[29]; // 801E9B00
  c->r[3]=c->r[31]+0x00000028u; // 801E9B04
  c->r[5]=0u+0x00000006u; // 801E9B08
  c->lr=0x801E9B10u; f_8020BD24(c); // 801E9B0C
  cmps(c,0,(int32_t)c->r[3],0); // 801E9B10
  if (!crb(c,2)) { goto L_801E9B20; } // 801E9B14
  c->r[3]=rotl(c->r[30],0)&0x0000FFFFu; // 801E9B18
  c->lr=0x801E9B20u; f_801E9A10(c); // 801E9B1C
L_801E9B20:;
  c->r[30]=c->r[30]+0x00000001u; // 801E9B20
  c->r[31]=c->r[31]+0x00000034u; // 801E9B24
  cmpu(c,0,c->r[30],0x00000003u); // 801E9B28
  if (crb(c,0)) { IRQCHK(c); goto L_801E9AF4; } // 801E9B2C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E9B30
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E9B34
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E9B38
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E9B3C
  c->lr=c->r[0]; // 801E9B40
  c->r[1]=c->r[1]+0x00000020u; // 801E9B44
  return; // 801E9B48
}

// btm_sco_removed
void f_801E9B4C(Ctx* __restrict c) {
  trace_call(0x801E9B4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E9B4C
  c->r[0]=c->lr; // 801E9B50
  c->r[5]=0u+0x80310000u; // 801E9B54
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E9B58
  c->r[5]=c->r[5]+0xFFFF8818u; // 801E9B5C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E9B60
  c->r[31]=c->r[3]|c->r[3]; // 801E9B64
  c->r[3]=0u+0x00000000u; // 801E9B68
  W16(c->r[5]+0x000018F6u,c->r[4]); // 801E9B6C
  c->r[0]=R16(c->r[5]+0x0000185Cu); // 801E9B70
  cmps(c,0,(int32_t)c->r[0],7); // 801E9B74
  if (!crb(c,0)) { goto L_801E9B8C; } // 801E9B78
  cmps(c,0,(int32_t)c->r[0],2); // 801E9B7C
  if (!crb(c,0)) { goto L_801E9B88; } // 801E9B80
  goto L_801E9B8C; // 801E9B84
L_801E9B88:;
  c->r[3]=0u+0x00000001u; // 801E9B88
L_801E9B8C:;
  c->r[0]=R16(c->r[5]+0x00001890u); // 801E9B8C
  cmps(c,0,(int32_t)c->r[0],7); // 801E9B90
  if (!crb(c,0)) { goto L_801E9BA8; } // 801E9B94
  cmps(c,0,(int32_t)c->r[0],2); // 801E9B98
  if (!crb(c,0)) { goto L_801E9BA4; } // 801E9B9C
  goto L_801E9BA8; // 801E9BA0
L_801E9BA4:;
  c->r[3]=c->r[3]+0x00000001u; // 801E9BA4
L_801E9BA8:;
  c->r[0]=R16(c->r[5]+0x000018C4u); // 801E9BA8
  cmps(c,0,(int32_t)c->r[0],7); // 801E9BAC
  if (!crb(c,0)) { goto L_801E9BC4; } // 801E9BB0
  cmps(c,0,(int32_t)c->r[0],2); // 801E9BB4
  if (!crb(c,0)) { goto L_801E9BC0; } // 801E9BB8
  goto L_801E9BC4; // 801E9BBC
L_801E9BC0:;
  c->r[3]=c->r[3]+0x00000001u; // 801E9BC0
L_801E9BC4:;
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801E9BC4
  cmpu(c,0,c->r[0],0x00000001u); // 801E9BC8
  if (crb(c,1)) { goto L_801E9BD8; } // 801E9BCC
  c->r[3]=0u+0x00000000u; // 801E9BD0
  c->lr=0x801E9BD8u; f_801E47B4(c); // 801E9BD4
L_801E9BD8:;
  c->r[3]=0u+0x80310000u; // 801E9BD8
  c->r[0]=0u+0x00000003u; // 801E9BDC
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E9BE0
  c->r[6]=0u+0x00000000u; // 801E9BE4
  c->r[5]=c->r[3]+0x00001854u; // 801E9BE8
  c->ctr=c->r[0]; // 801E9BEC
L_801E9BF0:;
  c->r[0]=R16(c->r[5]+0x00000008u); // 801E9BF0
  cmps(c,0,(int32_t)c->r[0],0); // 801E9BF4
  if (crb(c,2)) { goto L_801E9C40; } // 801E9BF8
  cmpu(c,0,c->r[0],0x00000001u); // 801E9BFC
  if (crb(c,2)) { goto L_801E9C40; } // 801E9C00
  c->r[0]=R16(c->r[5]+0x0000000Au); // 801E9C04
  cmpu(c,0,c->r[0],c->r[31]); // 801E9C08
  if (!crb(c,2)) { goto L_801E9C40; } // 801E9C0C
  c->r[4]=0u+0x00000000u; // 801E9C10
  c->r[3]=0u+0x00010000u; // 801E9C14
  W16(c->r[5]+0x00000008u,c->r[4]); // 801E9C18
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801E9C1C
  c->r[3]=rotl(c->r[6],0)&0x0000FFFFu; // 801E9C20
  W16(c->r[5]+0x0000000Au,c->r[0]); // 801E9C24
  W8(c->r[5]+0x0000000Du,c->r[4]); // 801E9C28
  W32(c->r[5]+0x00000010u,c->r[4]); // 801E9C2C
  c->r[12]=R32(c->r[5]+0x00000004u); // 801E9C30
  c->ctr=c->r[12]; // 801E9C34
  if (true) { c->lr=0x801E9C3Cu; dispatch(c,c->ctr); } // 801E9C38
  goto L_801E9C4C; // 801E9C3C
L_801E9C40:;
  c->r[6]=c->r[6]+0x00000001u; // 801E9C40
  c->r[5]=c->r[5]+0x00000034u; // 801E9C44
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E9BF0; } // 801E9C48
L_801E9C4C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E9C4C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E9C50
  c->lr=c->r[0]; // 801E9C54
  c->r[1]=c->r[1]+0x00000010u; // 801E9C58
  return; // 801E9C5C
}

// btm_sco_acl_removed
void f_801E9C60(Ctx* __restrict c) {
  trace_call(0x801E9C60u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E9C60
  c->r[0]=c->lr; // 801E9C64
  c->r[4]=0u+0x80310000u; // 801E9C68
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E9C6C
  c->r[4]=c->r[4]+0xFFFF8818u; // 801E9C70
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E9C74
  c->r[31]=0u+0x00000000u; // 801E9C78
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E9C7C
  c->r[30]=c->r[4]+0x00001854u; // 801E9C80
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E9C84
  c->r[29]=0u+0x00000000u; // 801E9C88
  W32(c->r[1]+0x00000010u,c->r[28]); // 801E9C8C
  c->r[28]=c->r[3]|c->r[3]; // 801E9C90
L_801E9C94:;
  c->r[0]=R16(c->r[30]+0x00000008u); // 801E9C94
  cmps(c,0,(int32_t)c->r[0],0); // 801E9C98
  if (crb(c,2)) { goto L_801E9CE4; } // 801E9C9C
  cmps(c,0,(int32_t)c->r[28],0); // 801E9CA0
  if (crb(c,2)) { goto L_801E9CCC; } // 801E9CA4
  c->r[4]=c->r[28]|c->r[28]; // 801E9CA8
  c->r[3]=c->r[30]+0x00000028u; // 801E9CAC
  c->r[5]=0u+0x00000006u; // 801E9CB0
  c->lr=0x801E9CB8u; f_8020BD24(c); // 801E9CB4
  cmps(c,0,(int32_t)c->r[3],0); // 801E9CB8
  if (!crb(c,2)) { goto L_801E9CE4; } // 801E9CBC
  c->r[0]=R8(c->r[30]+0x0000000Du); // 801E9CC0
  cmps(c,0,(int32_t)c->r[0],0); // 801E9CC4
  if (crb(c,2)) { goto L_801E9CE4; } // 801E9CC8
L_801E9CCC:;
  W16(c->r[30]+0x00000008u,c->r[31]); // 801E9CCC
  c->r[3]=rotl(c->r[29],0)&0x0000FFFFu; // 801E9CD0
  W32(c->r[30]+0x00000010u,c->r[31]); // 801E9CD4
  c->r[12]=R32(c->r[30]+0x00000004u); // 801E9CD8
  c->ctr=c->r[12]; // 801E9CDC
  if (true) { c->lr=0x801E9CE4u; dispatch(c,c->ctr); } // 801E9CE0
L_801E9CE4:;
  c->r[29]=c->r[29]+0x00000001u; // 801E9CE4
  c->r[30]=c->r[30]+0x00000034u; // 801E9CE8
  cmpu(c,0,c->r[29],0x00000003u); // 801E9CEC
  if (crb(c,0)) { IRQCHK(c); goto L_801E9C94; } // 801E9CF0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E9CF4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E9CF8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E9CFC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E9D00
  c->r[28]=R32(c->r[1]+0x00000010u); // 801E9D04
  c->lr=c->r[0]; // 801E9D08
  c->r[1]=c->r[1]+0x00000020u; // 801E9D0C
  return; // 801E9D10
}

// btm_route_sco_data
void f_801E9D14(Ctx* __restrict c) {
  trace_call(0x801E9D14u);
  f_801D9C70(c); return; // 801E9D14
}

// BTM_ChangeEScoLinkParms
void f_801E9D18(Ctx* __restrict c) {
  trace_call(0x801E9D18u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E9D18
  c->r[0]=c->lr; // 801E9D1C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E9D20
  c->r[11]=c->r[1]+0x00000020u; // 801E9D24
  c->lr=0x801E9D2Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E9D28
  cmpu(c,0,c->r[3],0x00000003u); // 801E9D2C
  c->r[30]=0u+0x80280000u; // 801E9D30
  c->r[28]=c->r[4]|c->r[4]; // 801E9D34
  c->r[30]=c->r[30]+0xFFFFF668u; // 801E9D38
  if (!crb(c,0)) { goto L_801E9D5C; } // 801E9D3C
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)52); // 801E9D40
  c->r[3]=0u+0x80310000u; // 801E9D44
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E9D48
  c->r[31]=c->r[3]+c->r[0]; // 801E9D4C
  c->r[0]=R16(c->r[31]+0x0000185Cu); // 801E9D50
  cmpu(c,0,c->r[0],0x00000004u); // 801E9D54
  if (crb(c,2)) { goto L_801E9D64; } // 801E9D58
L_801E9D5C:;
  c->r[3]=0u+0x00000006u; // 801E9D5C
  goto L_801E9EA8; // 801E9D60
L_801E9D64:;
  c->r[0]=R8(c->r[31]+0x00001882u); // 801E9D64
  c->r[29]=c->r[31]+0x00001868u; // 801E9D68
  cmps(c,0,(int32_t)c->r[0],0); // 801E9D6C
  if (crb(c,2)) { goto L_801E9D80; } // 801E9D70
  c->r[0]=R8(c->r[3]+0x00001908u); // 801E9D74
  cmps(c,0,(int32_t)c->r[0],0); // 801E9D78
  if (!crb(c,2)) { goto L_801E9DE0; } // 801E9D7C
L_801E9D80:;
  c->r[3]=0u+0x80310000u; // 801E9D80
  c->r[4]=R16(c->r[4]+0x00000002u); // 801E9D84
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E9D88
  c->r[0]=R16(c->r[3]+0x00000656u); // 801E9D8C
  c->r[0]=rotl(c->r[0],0)&0x00000007u; // 801E9D90
  c->r[0]=c->r[4]&c->r[0]; // 801E9D94
  W16(c->r[29]+0x0000000Cu,c->r[0]); // 801E9D98
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801E9D9C
  cmpu(c,0,c->r[0],0x00000003u); // 801E9DA0
  if (crb(c,0)) { goto L_801E9DC0; } // 801E9DA4
  c->r[3]=0u+0x000D0000u; // 801E9DA8
  c->r[5]=R16(c->r[31]+0x0000185Eu); // 801E9DAC
  c->r[6]=R16(c->r[29]+0x0000000Cu); // 801E9DB0
  c->r[3]=c->r[3]+0x00000002u; // 801E9DB4
  c->r[4]=c->r[30]+0x00000248u; // 801E9DB8
  c->lr=0x801E9DC0u; f_801DC770(c); // 801E9DBC
L_801E9DC0:;
  c->r[0]=R16(c->r[29]+0x0000000Cu); // 801E9DC0
  c->r[3]=R16(c->r[31]+0x0000185Eu); // 801E9DC4
  c->r[4]=rotl(c->r[0],5)&0x000000E0u; // 801E9DC8
  c->lr=0x801E9DD0u; f_801EFF88(c); // 801E9DCC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801E9DD0
  if (!crb(c,2)) { goto L_801E9EA4; } // 801E9DD4
  c->r[3]=0u+0x00000003u; // 801E9DD8
  goto L_801E9EA8; // 801E9DDC
L_801E9DE0:;
  c->r[0]=R8(c->r[3]+0x00000636u); // 801E9DE0
  c->r[3]=R16(c->r[3]+0x00000656u); // 801E9DE4
  c->r[4]=R16(c->r[4]+0x00000002u); // 801E9DE8
  cmpu(c,0,c->r[0],0x00000003u); // 801E9DEC
  c->r[0]=c->r[4]&c->r[3]; // 801E9DF0
  c->r[27]=rotl(c->r[0],0)&0x0000003Fu; // 801E9DF4
  if (crb(c,0)) { goto L_801E9E0C; } // 801E9DF8
  c->r[0]=c->r[4]|c->r[3]; // 801E9DFC
  c->r[0]=rotl(c->r[0],0)&0x000003C0u; // 801E9E00
  c->r[0]=c->r[27]|c->r[0]; // 801E9E04
  c->r[27]=rotl(c->r[0],0)&0x0000FFFFu; // 801E9E08
L_801E9E0C:;
  c->r[3]=0u+0x80310000u; // 801E9E0C
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E9E10
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801E9E14
  cmpu(c,0,c->r[0],0x00000003u); // 801E9E18
  if (crb(c,0)) { goto L_801E9E34; } // 801E9E1C
  c->r[3]=0u+0x000D0000u; // 801E9E20
  c->r[5]=R16(c->r[31]+0x0000185Eu); // 801E9E24
  c->r[3]=c->r[3]+0x00000002u; // 801E9E28
  c->r[4]=c->r[30]+0x0000028Cu; // 801E9E2C
  c->lr=0x801E9E34u; f_801DC750(c); // 801E9E30
L_801E9E34:;
  c->r[3]=0u+0x80310000u; // 801E9E34
  c->r[3]=c->r[3]+0xFFFF8818u; // 801E9E38
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801E9E3C
  cmpu(c,0,c->r[0],0x00000003u); // 801E9E40
  if (crb(c,0)) { goto L_801E9E70; } // 801E9E44
  c->r[3]=0u+0x000D0000u; // 801E9E48
  c->r[5]=R32(c->r[29]+0x00000000u); // 801E9E4C
  c->r[6]=R32(c->r[29]+0x00000004u); // 801E9E50
  c->r[3]=c->r[3]+0x00000002u; // 801E9E54
  c->r[7]=R16(c->r[28]+0x00000000u); // 801E9E58
  c->r[4]=c->r[30]+0x0000008Cu; // 801E9E5C
  c->r[8]=R16(c->r[29]+0x0000000Au); // 801E9E60
  c->r[10]=rotl(c->r[27],0)&0x0000FFFFu; // 801E9E64
  c->r[9]=R8(c->r[28]+0x00000004u); // 801E9E68
  c->lr=0x801E9E70u; f_801DC7F0(c); // 801E9E6C
L_801E9E70:;
  c->r[3]=R16(c->r[31]+0x0000185Eu); // 801E9E70
  c->r[9]=rotl(c->r[27],0)&0x0000FFFFu; // 801E9E74
  c->r[4]=R32(c->r[29]+0x00000000u); // 801E9E78
  c->r[5]=R32(c->r[29]+0x00000004u); // 801E9E7C
  c->r[6]=R16(c->r[28]+0x00000000u); // 801E9E80
  c->r[7]=R16(c->r[29]+0x0000000Au); // 801E9E84
  c->r[8]=R8(c->r[28]+0x00000004u); // 801E9E88
  c->lr=0x801E9E90u; f_801F040C(c); // 801E9E8C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801E9E90
  if (!crb(c,2)) { goto L_801E9EA0; } // 801E9E94
  c->r[3]=0u+0x00000003u; // 801E9E98
  goto L_801E9EA8; // 801E9E9C
L_801E9EA0:;
  W16(c->r[28]+0x00000002u,c->r[27]); // 801E9EA0
L_801E9EA4:;
  c->r[3]=0u+0x00000001u; // 801E9EA4
L_801E9EA8:;
  c->r[11]=c->r[1]+0x00000020u; // 801E9EA8
  c->lr=0x801E9EB0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E9EAC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E9EB0
  c->lr=c->r[0]; // 801E9EB4
  c->r[1]=c->r[1]+0x00000020u; // 801E9EB8
  return; // 801E9EBC
}

// btm_esco_proc_conn_chg
void f_801E9EC0(Ctx* __restrict c) {
  trace_call(0x801E9EC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E9EC0
  c->r[0]=c->lr; // 801E9EC4
  W32(c->r[1]+0x00000044u,c->r[0]); // 801E9EC8
  c->r[11]=c->r[1]+0x00000040u; // 801E9ECC
  c->lr=0x801E9ED4u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E9ED0
  c->r[9]=0u+0x80310000u; // 801E9ED4
  c->r[24]=c->r[3]|c->r[3]; // 801E9ED8
  c->r[9]=c->r[9]+0xFFFF8818u; // 801E9EDC
  c->r[25]=c->r[4]|c->r[4]; // 801E9EE0
  c->r[0]=R8(c->r[9]+0x000027C0u); // 801E9EE4
  c->r[26]=c->r[5]|c->r[5]; // 801E9EE8
  c->r[27]=c->r[6]|c->r[6]; // 801E9EEC
  c->r[28]=c->r[7]|c->r[7]; // 801E9EF0
  cmpu(c,0,c->r[0],0x00000004u); // 801E9EF4
  c->r[29]=c->r[8]|c->r[8]; // 801E9EF8
  c->r[31]=c->r[9]+0x00001854u; // 801E9EFC
  if (crb(c,0)) { goto L_801E9F20; } // 801E9F00
  c->r[3]=0u+0x000D0000u; // 801E9F04
  c->r[4]=0u+0x80280000u; // 801E9F08
  c->r[5]=c->r[25]|c->r[25]; // 801E9F0C
  c->r[6]=c->r[24]|c->r[24]; // 801E9F10
  c->r[3]=c->r[3]+0x00000003u; // 801E9F14
  c->r[4]=c->r[4]+0xFFFFF92Cu; // 801E9F18
  c->lr=0x801E9F20u; f_801DC770(c); // 801E9F1C
L_801E9F20:;
  c->r[0]=0u+0x00000003u; // 801E9F20
  c->r[30]=0u+0x00000000u; // 801E9F24
  c->ctr=c->r[0]; // 801E9F28
L_801E9F2C:;
  c->r[0]=R16(c->r[31]+0x00000008u); // 801E9F2C
  cmpu(c,0,c->r[0],0x00000004u); // 801E9F30
  if (!crb(c,2)) { goto L_801E9FA0; } // 801E9F34
  c->r[0]=R16(c->r[31]+0x0000000Au); // 801E9F38
  cmpu(c,0,c->r[25],c->r[0]); // 801E9F3C
  if (!crb(c,2)) { goto L_801E9FA0; } // 801E9F40
  c->r[0]=R32(c->r[31]+0x00000010u); // 801E9F44
  cmps(c,0,(int32_t)c->r[0],0); // 801E9F48
  if (crb(c,2)) { goto L_801E9FAC; } // 801E9F4C
  c->r[3]=c->r[1]+0x0000000Eu; // 801E9F50
  c->r[4]=c->r[31]+0x00000028u; // 801E9F54
  c->r[5]=0u+0x00000006u; // 801E9F58
  c->lr=0x801E9F60u; f_80004364(c); // 801E9F5C
  W16(c->r[31]+0x00000024u,c->r[28]); // 801E9F60
  c->r[4]=c->r[1]+0x00000008u; // 801E9F64
  c->r[3]=0u+0x00000001u; // 801E9F68
  W16(c->r[31]+0x00000026u,c->r[29]); // 801E9F6C
  W8(c->r[31]+0x0000002Fu,c->r[26]); // 801E9F70
  W8(c->r[31]+0x00000030u,c->r[27]); // 801E9F74
  c->r[12]=R32(c->r[31]+0x00000010u); // 801E9F78
  W8(c->r[1]+0x00000014u,c->r[24]); // 801E9F7C
  W16(c->r[1]+0x00000008u,c->r[30]); // 801E9F80
  W16(c->r[1]+0x0000000Au,c->r[28]); // 801E9F84
  W16(c->r[1]+0x0000000Cu,c->r[29]); // 801E9F88
  W8(c->r[1]+0x00000015u,c->r[26]); // 801E9F8C
  W8(c->r[1]+0x00000016u,c->r[27]); // 801E9F90
  c->ctr=c->r[12]; // 801E9F94
  if (true) { c->lr=0x801E9F9Cu; dispatch(c,c->ctr); } // 801E9F98
  goto L_801E9FAC; // 801E9F9C
L_801E9FA0:;
  c->r[30]=c->r[30]+0x00000001u; // 801E9FA0
  c->r[31]=c->r[31]+0x00000034u; // 801E9FA4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E9F2C; } // 801E9FA8
L_801E9FAC:;
  c->r[11]=c->r[1]+0x00000040u; // 801E9FAC
  c->lr=0x801E9FB4u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E9FB0
  c->r[0]=R32(c->r[1]+0x00000044u); // 801E9FB4
  c->lr=c->r[0]; // 801E9FB8
  c->r[1]=c->r[1]+0x00000040u; // 801E9FBC
  return; // 801E9FC0
}

// btm_is_sco_active
void f_801E9FC4(Ctx* __restrict c) {
  trace_call(0x801E9FC4u);
  c->r[4]=0u+0x80310000u; // 801E9FC4
  c->r[4]=c->r[4]+0xFFFF8818u; // 801E9FC8
  c->r[0]=R16(c->r[4]+0x0000185Eu); // 801E9FCC
  cmpu(c,0,c->r[3],c->r[0]); // 801E9FD0
  if (!crb(c,2)) { goto L_801E9FEC; } // 801E9FD4
  c->r[0]=R16(c->r[4]+0x0000185Cu); // 801E9FD8
  cmpu(c,0,c->r[0],0x00000004u); // 801E9FDC
  if (!crb(c,2)) { goto L_801E9FEC; } // 801E9FE0
  c->r[3]=0u+0x00000001u; // 801E9FE4
  return; // 801E9FE8
L_801E9FEC:;
  c->r[0]=R16(c->r[4]+0x00001892u); // 801E9FEC
  cmpu(c,0,c->r[3],c->r[0]); // 801E9FF0
  if (!crb(c,2)) { goto L_801EA00C; } // 801E9FF4
  c->r[0]=R16(c->r[4]+0x00001890u); // 801E9FF8
  cmpu(c,0,c->r[0],0x00000004u); // 801E9FFC
  if (!crb(c,2)) { goto L_801EA00C; } // 801EA000
  c->r[3]=0u+0x00000001u; // 801EA004
  return; // 801EA008
L_801EA00C:;
  c->r[0]=R16(c->r[4]+0x000018C6u); // 801EA00C
  cmpu(c,0,c->r[3],c->r[0]); // 801EA010
  if (!crb(c,2)) { goto L_801EA02C; } // 801EA014
  c->r[0]=R16(c->r[4]+0x000018C4u); // 801EA018
  cmpu(c,0,c->r[0],0x00000004u); // 801EA01C
  if (!crb(c,2)) { goto L_801EA02C; } // 801EA020
  c->r[3]=0u+0x00000001u; // 801EA024
  return; // 801EA028
L_801EA02C:;
  c->r[3]=0u+0x00000000u; // 801EA02C
  return; // 801EA030
}

// btm_num_sco_links_active
void f_801EA034(Ctx* __restrict c) {
  trace_call(0x801EA034u);
  c->r[4]=0u+0x80310000u; // 801EA034
  c->r[3]=0u+0x00000000u; // 801EA038
  c->r[4]=c->r[4]+0xFFFF8818u; // 801EA03C
  c->r[0]=R16(c->r[4]+0x0000185Cu); // 801EA040
  cmps(c,0,(int32_t)c->r[0],7); // 801EA044
  if (!crb(c,0)) { goto L_801EA05C; } // 801EA048
  cmps(c,0,(int32_t)c->r[0],2); // 801EA04C
  if (!crb(c,0)) { goto L_801EA058; } // 801EA050
  goto L_801EA05C; // 801EA054
L_801EA058:;
  c->r[3]=0u+0x00000001u; // 801EA058
L_801EA05C:;
  c->r[0]=R16(c->r[4]+0x00001890u); // 801EA05C
  cmps(c,0,(int32_t)c->r[0],7); // 801EA060
  if (!crb(c,0)) { goto L_801EA078; } // 801EA064
  cmps(c,0,(int32_t)c->r[0],2); // 801EA068
  if (!crb(c,0)) { goto L_801EA074; } // 801EA06C
  goto L_801EA078; // 801EA070
L_801EA074:;
  c->r[3]=c->r[3]+0x00000001u; // 801EA074
L_801EA078:;
  c->r[0]=R16(c->r[4]+0x000018C4u); // 801EA078
  cmps(c,0,(int32_t)c->r[0],7); // 801EA07C
  if (!crb(c,0)) return; // 801EA080
  cmps(c,0,(int32_t)c->r[0],2); // 801EA084
  if (crb(c,0)) return; // 801EA088
  c->r[3]=c->r[3]+0x00000001u; // 801EA08C
  return; // 801EA090
}

// btm_is_sco_active_by_bdaddr
void f_801EA094(Ctx* __restrict c) {
  trace_call(0x801EA094u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EA094
  c->r[0]=c->lr; // 801EA098
  c->r[4]=0u+0x80310000u; // 801EA09C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EA0A0
  c->r[4]=c->r[4]+0xFFFF8818u; // 801EA0A4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801EA0A8
  c->r[31]=0u+0x00000000u; // 801EA0AC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801EA0B0
  c->r[30]=c->r[4]+0x00001854u; // 801EA0B4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801EA0B8
  c->r[29]=c->r[3]|c->r[3]; // 801EA0BC
L_801EA0C0:;
  c->r[4]=c->r[29]|c->r[29]; // 801EA0C0
  c->r[3]=c->r[30]+0x00000028u; // 801EA0C4
  c->r[5]=0u+0x00000006u; // 801EA0C8
  c->lr=0x801EA0D0u; f_8020BD24(c); // 801EA0CC
  cmps(c,0,(int32_t)c->r[3],0); // 801EA0D0
  if (!crb(c,2)) { goto L_801EA0EC; } // 801EA0D4
  c->r[0]=R16(c->r[30]+0x00000008u); // 801EA0D8
  cmpu(c,0,c->r[0],0x00000004u); // 801EA0DC
  if (!crb(c,2)) { goto L_801EA0EC; } // 801EA0E0
  c->r[3]=0u+0x00000001u; // 801EA0E4
  goto L_801EA100; // 801EA0E8
L_801EA0EC:;
  c->r[31]=c->r[31]+0x00000001u; // 801EA0EC
  c->r[30]=c->r[30]+0x00000034u; // 801EA0F0
  cmpu(c,0,c->r[31],0x00000003u); // 801EA0F4
  if (crb(c,0)) { IRQCHK(c); goto L_801EA0C0; } // 801EA0F8
  c->r[3]=0u+0x00000000u; // 801EA0FC
L_801EA100:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EA100
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801EA104
  c->r[30]=R32(c->r[1]+0x00000018u); // 801EA108
  c->r[29]=R32(c->r[1]+0x00000014u); // 801EA10C
  c->lr=c->r[0]; // 801EA110
  c->r[1]=c->r[1]+0x00000020u; // 801EA114
  return; // 801EA118
}

// BTM_SecRegister
void f_801EA11C(Ctx* __restrict c) {
  trace_call(0x801EA11Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EA11C
  c->r[0]=c->lr; // 801EA120
  c->r[6]=0u+0x80310000u; // 801EA124
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EA128
  c->r[6]=c->r[6]+0xFFFF8818u; // 801EA12C
  c->r[5]=R32(c->r[3]+0x00000000u); // 801EA130
  c->r[4]=R32(c->r[3]+0x00000004u); // 801EA134
  c->r[0]=R8(c->r[6]+0x000027C0u); // 801EA138
  W32(c->r[6]+0x0000190Cu,c->r[5]); // 801EA13C
  cmpu(c,0,c->r[0],0x00000004u); // 801EA140
  W32(c->r[6]+0x00001910u,c->r[4]); // 801EA144
  c->r[4]=R32(c->r[3]+0x00000008u); // 801EA148
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 801EA14C
  W32(c->r[6]+0x00001914u,c->r[4]); // 801EA150
  W32(c->r[6]+0x00001918u,c->r[0]); // 801EA154
  c->r[4]=R32(c->r[3]+0x00000010u); // 801EA158
  c->r[0]=R32(c->r[3]+0x00000014u); // 801EA15C
  W32(c->r[6]+0x0000191Cu,c->r[4]); // 801EA160
  W32(c->r[6]+0x00001920u,c->r[0]); // 801EA164
  if (crb(c,0)) { goto L_801EA180; } // 801EA168
  c->r[3]=0u+0x000D0000u; // 801EA16C
  c->r[4]=0u+0x80280000u; // 801EA170
  c->r[3]=c->r[3]+0x00000003u; // 801EA174
  c->r[4]=c->r[4]+0xFFFFF968u; // 801EA178
  c->lr=0x801EA180u; f_801DC730(c); // 801EA17C
L_801EA180:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EA180
  c->r[3]=0u+0x00000001u; // 801EA184
  c->lr=c->r[0]; // 801EA188
  c->r[1]=c->r[1]+0x00000010u; // 801EA18C
  return; // 801EA190
}

// BTM_SecAddRmtNameNotifyCallback
void f_801EA194(Ctx* __restrict c) {
  trace_call(0x801EA194u);
  c->r[4]=0u+0x80310000u; // 801EA194
  c->r[0]=0u+0x00000002u; // 801EA198
  c->r[4]=c->r[4]+0xFFFF8818u; // 801EA19C
  c->r[5]=0u+0x00000000u; // 801EA1A0
  c->ctr=c->r[0]; // 801EA1A4
L_801EA1A8:;
  c->r[0]=R32(c->r[4]+0x0000192Cu); // 801EA1A8
  cmps(c,0,(int32_t)c->r[0],0); // 801EA1AC
  if (!crb(c,2)) { goto L_801EA1D0; } // 801EA1B0
  c->r[4]=0u+0x80310000u; // 801EA1B4
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 801EA1B8
  c->r[4]=c->r[4]+0xFFFF8818u; // 801EA1BC
  c->r[4]=c->r[4]+c->r[0]; // 801EA1C0
  W32(c->r[4]+0x0000192Cu,c->r[3]); // 801EA1C4
  c->r[3]=0u+0x00000001u; // 801EA1C8
  return; // 801EA1CC
L_801EA1D0:;
  c->r[4]=c->r[4]+0x00000004u; // 801EA1D0
  c->r[5]=c->r[5]+0x00000001u; // 801EA1D4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801EA1A8; } // 801EA1D8
  c->r[3]=0u+0x00000000u; // 801EA1DC
  return; // 801EA1E0
}

// BTM_SecDeleteRmtNameNotifyCallback
void f_801EA1E4(Ctx* __restrict c) {
  trace_call(0x801EA1E4u);
  c->r[4]=0u+0x80310000u; // 801EA1E4
  c->r[0]=0u+0x00000002u; // 801EA1E8
  c->r[4]=c->r[4]+0xFFFF8818u; // 801EA1EC
  c->r[5]=0u+0x00000000u; // 801EA1F0
  c->ctr=c->r[0]; // 801EA1F4
L_801EA1F8:;
  c->r[0]=R32(c->r[4]+0x0000192Cu); // 801EA1F8
  cmpu(c,0,c->r[0],c->r[3]); // 801EA1FC
  if (!crb(c,2)) { goto L_801EA224; } // 801EA200
  c->r[3]=0u+0x80310000u; // 801EA204
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 801EA208
  c->r[3]=c->r[3]+0xFFFF8818u; // 801EA20C
  c->r[5]=0u+0x00000000u; // 801EA210
  c->r[4]=c->r[3]+c->r[0]; // 801EA214
  W32(c->r[4]+0x0000192Cu,c->r[5]); // 801EA218
  c->r[3]=0u+0x00000001u; // 801EA21C
  return; // 801EA220
L_801EA224:;
  c->r[4]=c->r[4]+0x00000004u; // 801EA224
  c->r[5]=c->r[5]+0x00000001u; // 801EA228
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801EA1F8; } // 801EA22C
  c->r[3]=0u+0x00000000u; // 801EA230
  return; // 801EA234
}

// BTM_SetPinType
void f_801EA238(Ctx* __restrict c) {
  trace_call(0x801EA238u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EA238
  c->r[0]=c->lr; // 801EA23C
  c->r[6]=0u+0x80310000u; // 801EA240
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EA244
  c->r[6]=c->r[6]+0xFFFF8818u; // 801EA248
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801EA24C
  c->r[31]=c->r[5]|c->r[5]; // 801EA250
  W32(c->r[1]+0x00000018u,c->r[30]); // 801EA254
  c->r[30]=c->r[4]|c->r[4]; // 801EA258
  W32(c->r[1]+0x00000014u,c->r[29]); // 801EA25C
  c->r[29]=c->r[3]|c->r[3]; // 801EA260
  c->r[0]=R8(c->r[6]+0x000027C0u); // 801EA264
  cmpu(c,0,c->r[0],0x00000003u); // 801EA268
  if (crb(c,0)) { goto L_801EA290; } // 801EA26C
  c->r[3]=0u+0x000D0000u; // 801EA270
  c->r[4]=0u+0x80280000u; // 801EA274
  c->r[5]=c->r[29]|c->r[29]; // 801EA278
  c->r[6]=c->r[30]|c->r[30]; // 801EA27C
  c->r[7]=c->r[31]|c->r[31]; // 801EA280
  c->r[3]=c->r[3]+0x00000002u; // 801EA284
  c->r[4]=c->r[4]+0xFFFFFA00u; // 801EA288
  c->lr=0x801EA290u; f_801DC790(c); // 801EA28C
L_801EA290:;
  c->r[3]=0u+0x80310000u; // 801EA290
  c->r[3]=c->r[3]+0xFFFF8818u; // 801EA294
  c->r[0]=R8(c->r[3]+0x0000064Eu); // 801EA298
  cmpu(c,0,c->r[0],0x00000001u); // 801EA29C
  if (!crb(c,1)) { goto L_801EA2AC; } // 801EA2A0
  c->r[3]=c->r[29]|c->r[29]; // 801EA2A4
  c->lr=0x801EA2ACu; f_801F0CE8(c); // 801EA2A8
L_801EA2AC:;
  c->r[6]=0u+0x80310000u; // 801EA2AC
  c->r[4]=c->r[30]|c->r[30]; // 801EA2B0
  c->r[6]=c->r[6]+0xFFFF8818u; // 801EA2B4
  c->r[5]=c->r[31]|c->r[31]; // 801EA2B8
  W8(c->r[6]+0x00000020u,c->r[29]); // 801EA2BC
  c->r[3]=c->r[6]+0x00000022u; // 801EA2C0
  W8(c->r[6]+0x00000021u,c->r[31]); // 801EA2C4
  c->lr=0x801EA2CCu; f_80004364(c); // 801EA2C8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EA2CC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801EA2D0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801EA2D4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801EA2D8
  c->lr=c->r[0]; // 801EA2DC
  c->r[1]=c->r[1]+0x00000020u; // 801EA2E0
  return; // 801EA2E4
}

// BTM_SetSecurityLevel
void f_801EA2E8(Ctx* __restrict c) {
  trace_call(0x801EA2E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EA2E8
  c->r[0]=c->lr; // 801EA2EC
  W32(c->r[1]+0x00000044u,c->r[0]); // 801EA2F0
  c->r[11]=c->r[1]+0x00000040u; // 801EA2F4
  c->lr=0x801EA2FCu; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801EA2F8
  c->r[10]=0u+0x80310000u; // 801EA2FC
  c->r[31]=0u+0x80280000u; // 801EA300
  c->r[10]=c->r[10]+0xFFFF8818u; // 801EA304
  c->r[11]=0u+0x00010000u; // 801EA308
  c->r[20]=c->r[3]|c->r[3]; // 801EA30C
  c->r[21]=c->r[4]|c->r[4]; // 801EA310
  c->r[22]=c->r[5]|c->r[5]; // 801EA314
  c->r[23]=c->r[6]|c->r[6]; // 801EA318
  c->r[24]=c->r[7]|c->r[7]; // 801EA31C
  c->r[25]=c->r[8]|c->r[8]; // 801EA320
  c->r[26]=c->r[9]|c->r[9]; // 801EA324
  c->r[31]=c->r[31]+0xFFFFF968u; // 801EA328
  c->r[28]=c->r[11]+0xFFFFFFFFu; // 801EA32C
  c->r[30]=c->r[10]+0x00001990u; // 801EA330
  c->r[27]=0u+0x00000000u; // 801EA334
  c->r[29]=0u+0x00000000u; // 801EA338
L_801EA33C:;
  c->r[0]=R8(c->r[30]+0x0000000Eu); // 801EA33C
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801EA340
  if (crb(c,2)) { goto L_801EA3A4; } // 801EA344
  c->r[0]=R16(c->r[30]+0x0000000Cu); // 801EA348
  cmpu(c,0,c->r[0],c->r[24]); // 801EA34C
  if (!crb(c,2)) { goto L_801EA3B4; } // 801EA350
  c->r[0]=R32(c->r[30]+0x00000000u); // 801EA354
  cmpu(c,0,c->r[0],c->r[25]); // 801EA358
  if (!crb(c,2)) { goto L_801EA3B4; } // 801EA35C
  c->r[0]=R8(c->r[30]+0x0000000Fu); // 801EA360
  cmpu(c,0,c->r[22],c->r[0]); // 801EA364
  if (!crb(c,2)) { goto L_801EA3B4; } // 801EA368
  c->r[3]=c->r[21]|c->r[21]; // 801EA36C
  c->r[4]=c->r[30]+0x00000010u; // 801EA370
  c->r[5]=0u+0x00000015u; // 801EA374
  c->lr=0x801EA37Cu; f_8020E9CC(c); // 801EA378
  cmps(c,0,(int32_t)c->r[3],0); // 801EA37C
  if (crb(c,2)) { goto L_801EA39C; } // 801EA380
  c->r[3]=c->r[21]|c->r[21]; // 801EA384
  c->r[4]=c->r[30]+0x00000026u; // 801EA388
  c->r[5]=0u+0x00000015u; // 801EA38C
  c->lr=0x801EA394u; f_8020E9CC(c); // 801EA390
  cmps(c,0,(int32_t)c->r[3],0); // 801EA394
  if (!crb(c,2)) { goto L_801EA3B4; } // 801EA398
L_801EA39C:;
  c->r[27]=0u+0x00000001u; // 801EA39C
  goto L_801EA3C4; // 801EA3A0
L_801EA3A4:;
  cmps(c,0,(int32_t)c->r[27],0); // 801EA3A4
  if (!crb(c,2)) { goto L_801EA3B4; } // 801EA3A8
  c->r[27]=0u+0x00000001u; // 801EA3AC
  c->r[28]=c->r[29]|c->r[29]; // 801EA3B0
L_801EA3B4:;
  c->r[29]=c->r[29]+0x00000001u; // 801EA3B4
  c->r[30]=c->r[30]+0x0000003Cu; // 801EA3B8
  cmpu(c,0,c->r[29],0x00000018u); // 801EA3BC
  if (crb(c,0)) { IRQCHK(c); goto L_801EA33C; } // 801EA3C0
L_801EA3C4:;
  cmps(c,0,(int32_t)c->r[27],0); // 801EA3C4
  if (crb(c,2)) { goto L_801EA4CC; } // 801EA3C8
  c->r[0]=rotl(c->r[29],0)&0x0000FFFFu; // 801EA3CC
  cmpu(c,0,c->r[0],0x00000018u); // 801EA3D0
  if (crb(c,0)) { goto L_801EA3F4; } // 801EA3D4
  c->r[0]=rotl(c->r[28],0)&0x0000FFFFu; // 801EA3D8
  c->r[3]=0u+0x80310000u; // 801EA3DC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)60); // 801EA3E0
  c->r[29]=c->r[28]|c->r[28]; // 801EA3E4
  c->r[3]=c->r[3]+0xFFFF8818u; // 801EA3E8
  c->r[3]=c->r[3]+c->r[0]; // 801EA3EC
  c->r[30]=c->r[3]+0x00001990u; // 801EA3F0
L_801EA3F4:;
  W16(c->r[30]+0x0000000Cu,c->r[24]); // 801EA3F4
  cmps(c,0,(int32_t)c->r[20],0); // 801EA3F8
  W8(c->r[30]+0x0000000Fu,c->r[22]); // 801EA3FC
  W32(c->r[30]+0x00000000u,c->r[25]); // 801EA400
  if (crb(c,2)) { goto L_801EA42C; } // 801EA404
  W32(c->r[30]+0x00000004u,c->r[26]); // 801EA408
  c->r[4]=c->r[21]|c->r[21]; // 801EA40C
  c->r[3]=c->r[30]+0x00000010u; // 801EA410
  c->r[5]=0u+0x00000015u; // 801EA414
  c->r[0]=R8(c->r[30]+0x0000000Eu); // 801EA418
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFC7u; // 801EA41C
  W8(c->r[30]+0x0000000Eu,c->r[0]); // 801EA420
  c->lr=0x801EA428u; f_8020E7F4(c); // 801EA424
  goto L_801EA44C; // 801EA428
L_801EA42C:;
  W32(c->r[30]+0x00000008u,c->r[26]); // 801EA42C
  c->r[4]=c->r[21]|c->r[21]; // 801EA430
  c->r[3]=c->r[30]+0x00000026u; // 801EA434
  c->r[5]=0u+0x00000015u; // 801EA438
  c->r[0]=R8(c->r[30]+0x0000000Eu); // 801EA43C
  c->r[0]=rotl(c->r[0],0)&0x000000F8u; // 801EA440
  W8(c->r[30]+0x0000000Eu,c->r[0]); // 801EA444
  c->lr=0x801EA44Cu; f_8020E7F4(c); // 801EA448
L_801EA44C:;
  c->r[4]=R8(c->r[30]+0x0000000Eu); // 801EA44C
  c->r[0]=c->r[23]|0x00000080u; // 801EA450
  c->r[3]=0u+0x80310000u; // 801EA454
  c->r[0]=c->r[4]|c->r[0]; // 801EA458
  W8(c->r[30]+0x0000000Eu,c->r[0]); // 801EA45C
  c->r[3]=c->r[3]+0xFFFF8818u; // 801EA460
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801EA464
  cmpu(c,0,c->r[0],0x00000003u); // 801EA468
  if (crb(c,0)) { goto L_801EA498; } // 801EA46C
  c->r[3]=0u+0x000D0000u; // 801EA470
  c->r[6]=c->r[22]|c->r[22]; // 801EA474
  c->r[7]=c->r[20]|c->r[20]; // 801EA478
  c->r[8]=c->r[24]|c->r[24]; // 801EA47C
  c->r[9]=c->r[25]|c->r[25]; // 801EA480
  c->r[10]=c->r[26]|c->r[26]; // 801EA484
  c->r[3]=c->r[3]+0x00000002u; // 801EA488
  c->r[4]=c->r[31]+0x000000E0u; // 801EA48C
  c->r[5]=rotl(c->r[29],0)&0x0000FFFFu; // 801EA490
  c->lr=0x801EA498u; f_801DC7F0(c); // 801EA494
L_801EA498:;
  c->r[3]=0u+0x80310000u; // 801EA498
  c->r[3]=c->r[3]+0xFFFF8818u; // 801EA49C
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801EA4A0
  cmpu(c,0,c->r[0],0x00000003u); // 801EA4A4
  if (crb(c,0)) { goto L_801EA4F4; } // 801EA4A8
  c->r[3]=0u+0x000D0000u; // 801EA4AC
  c->r[5]=R8(c->r[30]+0x0000000Eu); // 801EA4B0
  c->r[6]=c->r[21]|c->r[21]; // 801EA4B4
  c->r[4]=c->r[31]+0x00000128u; // 801EA4B8
  c->r[3]=c->r[3]+0x00000002u; // 801EA4BC
  c->r[7]=0u+0x00000015u; // 801EA4C0
  c->lr=0x801EA4C8u; f_801DC790(c); // 801EA4C4
  goto L_801EA4F4; // 801EA4C8
L_801EA4CC:;
  c->r[3]=0u+0x80310000u; // 801EA4CC
  c->r[3]=c->r[3]+0xFFFF8818u; // 801EA4D0
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801EA4D4
  cmpu(c,0,c->r[0],0x00000002u); // 801EA4D8
  if (crb(c,0)) { goto L_801EA4F4; } // 801EA4DC
  c->r[3]=0u+0x000D0000u; // 801EA4E0
  c->r[4]=c->r[31]+0x00000170u; // 801EA4E4
  c->r[3]=c->r[3]+0x00000001u; // 801EA4E8
  c->r[5]=0u+0x00000018u; // 801EA4EC
  c->lr=0x801EA4F4u; f_801DC750(c); // 801EA4F0
L_801EA4F4:;
  c->r[11]=c->r[1]+0x00000040u; // 801EA4F4
  c->r[3]=c->r[27]|c->r[27]; // 801EA4F8
  c->lr=0x801EA500u; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801EA4FC
  c->r[0]=R32(c->r[1]+0x00000044u); // 801EA500
  c->lr=c->r[0]; // 801EA504
  c->r[1]=c->r[1]+0x00000040u; // 801EA508
  return; // 801EA50C
}

// BTM_PINCodeReply
void f_801EA510(Ctx* __restrict c) {
  trace_call(0x801EA510u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EA510
  c->r[0]=c->lr; // 801EA514
  W32(c->r[1]+0x00000034u,c->r[0]); // 801EA518
  c->r[11]=c->r[1]+0x00000030u; // 801EA51C
  c->lr=0x801EA524u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801EA520
  c->r[30]=0u+0x80310000u; // 801EA524
  c->r[25]=c->r[3]|c->r[3]; // 801EA528
  c->r[30]=c->r[30]+0xFFFF8818u; // 801EA52C
  c->r[26]=c->r[4]|c->r[4]; // 801EA530
  c->r[0]=R32(c->r[30]+0x0000194Cu); // 801EA534
  c->r[27]=c->r[5]|c->r[5]; // 801EA538
  c->r[28]=c->r[6]|c->r[6]; // 801EA53C
  c->r[29]=c->r[7]|c->r[7]; // 801EA540
  cmps(c,0,(int32_t)c->r[0],0); // 801EA544
  if (crb(c,2)) { goto L_801EA5BC; } // 801EA548
  c->r[3]=c->r[30]+0x0000193Cu; // 801EA54C
  c->lr=0x801EA554u; f_801DCDB0(c); // 801EA550
  c->r[31]=0u+0x00000000u; // 801EA554
  c->r[3]=c->r[30]+0x00001954u; // 801EA558
  W32(c->r[30]+0x0000194Cu,c->r[31]); // 801EA55C
  c->r[4]=0u+0x000000FFu; // 801EA560
  c->r[5]=0u+0x00000006u; // 801EA564
  c->lr=0x801EA56Cu; f_800046B4(c); // 801EA568
  cmps(c,0,(int32_t)c->r[26],0); // 801EA56C
  if (crb(c,2)) { goto L_801EA588; } // 801EA570
  c->r[0]=0u+0x0000000Eu; // 801EA574
  c->r[3]=c->r[25]|c->r[25]; // 801EA578
  W8(c->r[30]+0x000027BFu,c->r[0]); // 801EA57C
  c->lr=0x801EA584u; f_801EFEE8(c); // 801EA580
  goto L_801EA5BC; // 801EA584
L_801EA588:;
  W8(c->r[30]+0x000027BFu,c->r[31]); // 801EA588
  c->r[3]=c->r[25]|c->r[25]; // 801EA58C
  c->r[4]=c->r[27]|c->r[27]; // 801EA590
  c->r[5]=c->r[28]|c->r[28]; // 801EA594
  c->lr=0x801EA59Cu; f_801EFD04(c); // 801EA598
  c->r[3]=c->r[25]|c->r[25]; // 801EA59C
  c->lr=0x801EA5A4u; f_801E4E80(c); // 801EA5A0
  cmps(c,0,(int32_t)c->r[3],0); // 801EA5A4
  if (crb(c,2)) { goto L_801EA5BC; } // 801EA5A8
  c->r[0]=R32(c->r[29]+0x00000000u); // 801EA5AC
  W32(c->r[3]+0x00000010u,c->r[0]); // 801EA5B0
  c->r[0]=R32(c->r[29]+0x00000004u); // 801EA5B4
  W32(c->r[3]+0x00000014u,c->r[0]); // 801EA5B8
L_801EA5BC:;
  c->r[11]=c->r[1]+0x00000030u; // 801EA5BC
  c->lr=0x801EA5C4u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801EA5C0
  c->r[0]=R32(c->r[1]+0x00000034u); // 801EA5C4
  c->lr=c->r[0]; // 801EA5C8
  c->r[1]=c->r[1]+0x00000030u; // 801EA5CC
  return; // 801EA5D0
}

// BTM_DeviceAuthorized
void f_801EA5D4(Ctx* __restrict c) {
  trace_call(0x801EA5D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EA5D4
  c->r[0]=c->lr; // 801EA5D8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EA5DC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801EA5E0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801EA5E4
  c->r[30]=c->r[3]|c->r[3]; // 801EA5E8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801EA5EC
  c->r[29]=c->r[5]|c->r[5]; // 801EA5F0
  W32(c->r[1]+0x00000010u,c->r[28]); // 801EA5F4
  c->r[28]=c->r[4]|c->r[4]; // 801EA5F8
  c->lr=0x801EA600u; f_801E4E80(c); // 801EA5FC
  cmps(c,1,(int32_t)c->r[3],0); // 801EA600
  c->r[31]=c->r[3]|c->r[3]; // 801EA604
  if (!crb(c,6)) { goto L_801EA650; } // 801EA608
  c->r[3]=0u+0x80310000u; // 801EA60C
  c->r[3]=c->r[3]+0xFFFF8818u; // 801EA610
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801EA614
  cmpu(c,0,c->r[0],0x00000002u); // 801EA618
  if (crb(c,0)) { goto L_801EA790; } // 801EA61C
  c->r[3]=0u+0x000D0000u; // 801EA620
  c->r[4]=0u+0x80280000u; // 801EA624
  c->r[5]=R8(c->r[30]+0x00000000u); // 801EA628
  c->r[3]=c->r[3]+0x00000001u; // 801EA62C
  c->r[6]=R8(c->r[30]+0x00000001u); // 801EA630
  c->r[4]=c->r[4]+0xFFFFFB08u; // 801EA634
  c->r[7]=R8(c->r[30]+0x00000002u); // 801EA638
  c->r[8]=R8(c->r[30]+0x00000003u); // 801EA63C
  c->r[9]=R8(c->r[30]+0x00000004u); // 801EA640
  c->r[10]=R8(c->r[30]+0x00000005u); // 801EA644
  c->lr=0x801EA64Cu; f_801DC7F0(c); // 801EA648
  goto L_801EA790; // 801EA64C
L_801EA650:;
  c->r[3]=0u+0x80310000u; // 801EA650
  c->r[3]=c->r[3]+0xFFFF8818u; // 801EA654
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801EA658
  cmpu(c,0,c->r[0],0x00000004u); // 801EA65C
  if (crb(c,0)) { goto L_801EA68C; } // 801EA660
  c->r[3]=0u+0x000D0000u; // 801EA664
  c->r[4]=0u+0x80280000u; // 801EA668
  c->r[5]=c->r[28]|c->r[28]; // 801EA66C
  c->r[3]=c->r[3]+0x00000003u; // 801EA670
  c->r[4]=c->r[4]+0xFFFFFB68u; // 801EA674
  if (crb(c,6)) { goto L_801EA684; } // 801EA678
  c->r[6]=R8(c->r[31]+0x0000007Fu); // 801EA67C
  goto L_801EA688; // 801EA680
L_801EA684:;
  c->r[6]=0u+0x00000000u; // 801EA684
L_801EA688:;
  c->lr=0x801EA68Cu; f_801DC770(c); // 801EA688
L_801EA68C:;
  cmps(c,0,(int32_t)c->r[28],0); // 801EA68C
  if (!crb(c,2)) { goto L_801EA6B0; } // 801EA690
  c->r[0]=R8(c->r[31]+0x00000076u); // 801EA694
  c->r[0]=c->r[0]|0x00000001u; // 801EA698
  W8(c->r[31]+0x00000076u,c->r[0]); // 801EA69C
  c->r[0]=R32(c->r[29]+0x00000000u); // 801EA6A0
  W32(c->r[31]+0x00000010u,c->r[0]); // 801EA6A4
  c->r[0]=R32(c->r[29]+0x00000004u); // 801EA6A8
  W32(c->r[31]+0x00000014u,c->r[0]); // 801EA6AC
L_801EA6B0:;
  c->r[0]=R8(c->r[31]+0x0000007Fu); // 801EA6B0
  cmpu(c,0,c->r[0],0x00000004u); // 801EA6B4
  if (!crb(c,2)) { goto L_801EA790; } // 801EA6B8
  c->r[29]=0u+0x00000000u; // 801EA6BC
  cmps(c,0,(int32_t)c->r[28],0); // 801EA6C0
  W8(c->r[31]+0x0000007Fu,c->r[29]); // 801EA6C4
  if (crb(c,2)) { goto L_801EA724; } // 801EA6C8
  c->r[0]=R32(c->r[31]+0x00000004u); // 801EA6CC
  cmps(c,0,(int32_t)c->r[0],0); // 801EA6D0
  if (crb(c,2)) { goto L_801EA790; } // 801EA6D4
  c->r[0]=R8(c->r[31]+0x00000080u); // 801EA6D8
  cmps(c,0,(int32_t)c->r[0],0); // 801EA6DC
  if (crb(c,2)) { goto L_801EA700; } // 801EA6E0
  c->r[3]=R32(c->r[31]+0x00000000u); // 801EA6E4
  cmps(c,0,(int32_t)c->r[3],0); // 801EA6E8
  if (crb(c,2)) { goto L_801EA700; } // 801EA6EC
  c->r[0]=R32(c->r[3]+0x00000000u); // 801EA6F0
  cmpu(c,0,c->r[0],0x00000003u); // 801EA6F4
  if (!crb(c,2)) { goto L_801EA700; } // 801EA6F8
  W32(c->r[3]+0x00000004u,c->r[29]); // 801EA6FC
L_801EA700:;
  c->r[12]=R32(c->r[31]+0x00000004u); // 801EA700
  c->r[3]=c->r[30]|c->r[30]; // 801EA704
  c->r[5]=c->r[28]|c->r[28]; // 801EA708
  c->r[4]=R32(c->r[31]+0x00000008u); // 801EA70C
  c->ctr=c->r[12]; // 801EA710
  if (true) { c->lr=0x801EA718u; dispatch(c,c->ctr); } // 801EA714
  c->r[0]=0u+0x00000000u; // 801EA718
  W32(c->r[31]+0x00000004u,c->r[0]); // 801EA71C
  goto L_801EA790; // 801EA720
L_801EA724:;
  c->r[3]=c->r[31]|c->r[31]; // 801EA724
  c->lr=0x801EA72Cu; f_801ECAD0(c); // 801EA728
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801EA72C
  c->r[4]=c->r[3]|c->r[3]; // 801EA730
  cmpu(c,0,c->r[0],0x00000001u); // 801EA734
  if (crb(c,2)) { goto L_801EA790; } // 801EA738
  c->r[0]=R32(c->r[31]+0x00000004u); // 801EA73C
  cmps(c,0,(int32_t)c->r[0],0); // 801EA740
  if (crb(c,2)) { goto L_801EA790; } // 801EA744
  c->r[0]=R8(c->r[31]+0x00000080u); // 801EA748
  cmps(c,0,(int32_t)c->r[0],0); // 801EA74C
  if (crb(c,2)) { goto L_801EA770; } // 801EA750
  c->r[3]=R32(c->r[31]+0x00000000u); // 801EA754
  cmps(c,0,(int32_t)c->r[3],0); // 801EA758
  if (crb(c,2)) { goto L_801EA770; } // 801EA75C
  c->r[0]=R32(c->r[3]+0x00000000u); // 801EA760
  cmpu(c,0,c->r[0],0x00000003u); // 801EA764
  if (!crb(c,2)) { goto L_801EA770; } // 801EA768
  W32(c->r[3]+0x00000004u,c->r[29]); // 801EA76C
L_801EA770:;
  c->r[12]=R32(c->r[31]+0x00000004u); // 801EA770
  c->r[5]=rotl(c->r[4],0)&0x000000FFu; // 801EA774
  c->r[3]=c->r[30]|c->r[30]; // 801EA778
  c->r[4]=R32(c->r[31]+0x00000008u); // 801EA77C
  c->ctr=c->r[12]; // 801EA780
  if (true) { c->lr=0x801EA788u; dispatch(c,c->ctr); } // 801EA784
  c->r[0]=0u+0x00000000u; // 801EA788
  W32(c->r[31]+0x00000004u,c->r[0]); // 801EA78C
L_801EA790:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EA790
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801EA794
  c->r[30]=R32(c->r[1]+0x00000018u); // 801EA798
  c->r[29]=R32(c->r[1]+0x00000014u); // 801EA79C
  c->r[28]=R32(c->r[1]+0x00000010u); // 801EA7A0
  c->lr=c->r[0]; // 801EA7A4
  c->r[1]=c->r[1]+0x00000020u; // 801EA7A8
  return; // 801EA7AC
}

// BTM_SecBond
void f_801EA7B0(Ctx* __restrict c) {
  trace_call(0x801EA7B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EA7B0
  c->r[0]=c->lr; // 801EA7B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EA7B8
  c->r[11]=c->r[1]+0x00000020u; // 801EA7BC
  c->lr=0x801EA7C4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801EA7C0
  c->r[7]=0u+0x80310000u; // 801EA7C4
  c->r[31]=0u+0x80280000u; // 801EA7C8
  c->r[7]=c->r[7]+0xFFFF8818u; // 801EA7CC
  c->r[28]=c->r[3]|c->r[3]; // 801EA7D0
  c->r[0]=R8(c->r[7]+0x000027C0u); // 801EA7D4
  c->r[29]=c->r[4]|c->r[4]; // 801EA7D8
  c->r[26]=c->r[5]|c->r[5]; // 801EA7DC
  c->r[27]=c->r[6]|c->r[6]; // 801EA7E0
  cmpu(c,0,c->r[0],0x00000003u); // 801EA7E4
  c->r[31]=c->r[31]+0xFFFFF968u; // 801EA7E8
  if (crb(c,0)) { goto L_801EA818; } // 801EA7EC
  c->r[3]=0u+0x000D0000u; // 801EA7F0
  c->r[5]=R8(c->r[28]+0x00000000u); // 801EA7F4
  c->r[6]=R8(c->r[28]+0x00000001u); // 801EA7F8
  c->r[3]=c->r[3]+0x00000002u; // 801EA7FC
  c->r[7]=R8(c->r[28]+0x00000002u); // 801EA800
  c->r[4]=c->r[31]+0x00000230u; // 801EA804
  c->r[8]=R8(c->r[28]+0x00000003u); // 801EA808
  c->r[9]=R8(c->r[28]+0x00000004u); // 801EA80C
  c->r[10]=R8(c->r[28]+0x00000005u); // 801EA810
  c->lr=0x801EA818u; f_801DC7F0(c); // 801EA814
L_801EA818:;
  cmpu(c,0,c->r[29],0x00000010u); // 801EA818
  if (!crb(c,1)) { goto L_801EA84C; } // 801EA81C
  c->r[3]=0u+0x80310000u; // 801EA820
  c->r[3]=c->r[3]+0xFFFF8818u; // 801EA824
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801EA828
  cmpu(c,0,c->r[0],0x00000001u); // 801EA82C
  if (crb(c,0)) { goto L_801EA844; } // 801EA830
  c->r[5]=c->r[29]|c->r[29]; // 801EA834
  c->r[4]=c->r[31]+0x00000260u; // 801EA838
  c->r[3]=0u+0x000D0000u; // 801EA83C
  c->lr=0x801EA844u; f_801DC750(c); // 801EA840
L_801EA844:;
  c->r[3]=0u+0x00000005u; // 801EA844
  goto L_801EAB64; // 801EA848
L_801EA84C:;
  c->r[3]=c->r[28]|c->r[28]; // 801EA84C
  c->lr=0x801EA854u; f_801E4E80(c); // 801EA850
  cmps(c,0,(int32_t)c->r[3],0); // 801EA854
  c->r[30]=c->r[3]|c->r[3]; // 801EA858
  if (!crb(c,2)) { goto L_801EA89C; } // 801EA85C
  c->r[3]=c->r[28]|c->r[28]; // 801EA860
  c->lr=0x801EA868u; f_801E4CA8(c); // 801EA864
  cmps(c,0,(int32_t)c->r[3],0); // 801EA868
  c->r[30]=c->r[3]|c->r[3]; // 801EA86C
  if (!crb(c,2)) { goto L_801EA89C; } // 801EA870
  c->r[3]=0u+0x80310000u; // 801EA874
  c->r[3]=c->r[3]+0xFFFF8818u; // 801EA878
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801EA87C
  cmpu(c,0,c->r[0],0x00000001u); // 801EA880
  if (crb(c,0)) { goto L_801EA894; } // 801EA884
  c->r[4]=c->r[31]+0x00000280u; // 801EA888
  c->r[3]=0u+0x000D0000u; // 801EA88C
  c->lr=0x801EA894u; f_801DC730(c); // 801EA890
L_801EA894:;
  c->r[3]=0u+0x00000003u; // 801EA894
  goto L_801EAB64; // 801EA898
L_801EA89C:;
  c->r[0]=R16(c->r[30]+0x00000018u); // 801EA89C
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801EA8A0
  if (crb(c,2)) { goto L_801EA8E0; } // 801EA8A4
  c->r[0]=R8(c->r[30]+0x00000076u); // 801EA8A8
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801EA8AC
  if (crb(c,2)) { goto L_801EA8E0; } // 801EA8B0
  c->r[3]=0u+0x80310000u; // 801EA8B4
  c->r[3]=c->r[3]+0xFFFF8818u; // 801EA8B8
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801EA8BC
  cmpu(c,0,c->r[0],0x00000002u); // 801EA8C0
  if (crb(c,0)) { goto L_801EA8D8; } // 801EA8C4
  c->r[3]=0u+0x000D0000u; // 801EA8C8
  c->r[4]=c->r[31]+0x000002A0u; // 801EA8CC
  c->r[3]=c->r[3]+0x00000001u; // 801EA8D0
  c->lr=0x801EA8D8u; f_801DC730(c); // 801EA8D4
L_801EA8D8:;
  c->r[3]=0u+0x00000000u; // 801EA8D8
  goto L_801EAB64; // 801EA8DC
L_801EA8E0:;
  c->r[3]=c->r[28]|c->r[28]; // 801EA8E0
  c->r[4]=0u+0x00000000u; // 801EA8E4
  c->lr=0x801EA8ECu; f_801E666C(c); // 801EA8E8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801EA8EC
  if (crb(c,2)) { goto L_801EA8FC; } // 801EA8F0
  c->r[3]=0u+0x00000003u; // 801EA8F4
  goto L_801EAB64; // 801EA8F8
L_801EA8FC:;
  c->r[0]=0u+0x00000050u; // 801EA8FC
  c->r[3]=0u+0x80310000u; // 801EA900
  W8(c->r[30]+0x00000081u,c->r[0]); // 801EA904
  c->r[0]=0u+0x00000001u; // 801EA908
  cmps(c,0,(int32_t)c->r[29],0); // 801EA90C
  c->r[3]=c->r[3]+0xFFFF8818u; // 801EA910
  W8(c->r[30]+0x00000080u,c->r[0]); // 801EA914
  c->r[0]=R32(c->r[27]+0x00000000u); // 801EA918
  W32(c->r[30]+0x00000010u,c->r[0]); // 801EA91C
  c->r[0]=R32(c->r[27]+0x00000004u); // 801EA920
  W32(c->r[30]+0x00000014u,c->r[0]); // 801EA924
  W8(c->r[3]+0x0000197Fu,c->r[29]); // 801EA928
  if (crb(c,2)) { goto L_801EA940; } // 801EA92C
  c->r[4]=c->r[26]|c->r[26]; // 801EA930
  c->r[5]=c->r[29]|c->r[29]; // 801EA934
  c->r[3]=c->r[3]+0x00001980u; // 801EA938
  c->lr=0x801EA940u; f_80004364(c); // 801EA93C
L_801EA940:;
  c->r[3]=R8(c->r[30]+0x00000076u); // 801EA940
  c->r[0]=0u+0xFFFFFFE9u; // 801EA944
  c->r[0]=c->r[3]&c->r[0]; // 801EA948
  W8(c->r[30]+0x00000076u,c->r[0]); // 801EA94C
  c->r[0]=R8(c->r[30]+0x00000023u); // 801EA950
  c->r[0]=rotl(c->r[0],0)&0x0000001Fu; // 801EA954
  cmps(c,0,(int32_t)c->r[0],5); // 801EA958
  if (!crb(c,2)) { goto L_801EA990; } // 801EA95C
  c->r[0]=R8(c->r[30]+0x00000024u); // 801EA960
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 801EA964
  if (crb(c,2)) { goto L_801EA990; } // 801EA968
  c->r[4]=0u+0x80310000u; // 801EA96C
  c->r[4]=c->r[4]+0xFFFF8818u; // 801EA970
  c->r[0]=R8(c->r[4]+0x00000020u); // 801EA974
  cmpu(c,0,c->r[0],0x00000001u); // 801EA978
  if (crb(c,2)) { goto L_801EA990; } // 801EA97C
  c->r[0]=0u+0x00000001u; // 801EA980
  c->r[3]=0u+0x00000001u; // 801EA984
  W8(c->r[4]+0x0000197Cu,c->r[0]); // 801EA988
  c->lr=0x801EA990u; f_801F0CE8(c); // 801EA98C
L_801EA990:;
  c->r[29]=0u+0x80310000u; // 801EA990
  c->r[27]=0u+0x00000000u; // 801EA994
  c->r[29]=c->r[29]+0xFFFF8818u; // 801EA998
  W8(c->r[29]+0x0000197Eu,c->r[27]); // 801EA99C
  c->r[0]=R16(c->r[30]+0x00000018u); // 801EA9A0
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801EA9A4
  if (crb(c,2)) { goto L_801EA9E4; } // 801EA9A8
  c->r[3]=R8(c->r[30]+0x00000076u); // 801EA9AC
  c->r[0]=0u+0x00000001u; // 801EA9B0
  c->r[3]=rotl(c->r[3],0)&0xFFFFFFEFu; // 801EA9B4
  W8(c->r[30]+0x00000076u,c->r[3]); // 801EA9B8
  W8(c->r[30]+0x0000007Fu,c->r[0]); // 801EA9BC
  c->r[3]=R16(c->r[30]+0x00000018u); // 801EA9C0
  c->lr=0x801EA9C8u; f_801F0018(c); // 801EA9C4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801EA9C8
  if (!crb(c,2)) { goto L_801EA9D8; } // 801EA9CC
  c->r[3]=0u+0x00000003u; // 801EA9D0
  goto L_801EAB64; // 801EA9D4
L_801EA9D8:;
  W8(c->r[29]+0x0000197Du,c->r[27]); // 801EA9D8
  c->r[3]=0u+0x00000001u; // 801EA9DC
  goto L_801EAB64; // 801EA9E0
L_801EA9E4:;
  c->r[0]=R8(c->r[29]+0x00001978u); // 801EA9E4
  cmpu(c,0,c->r[0],0x00000003u); // 801EA9E8
  if (crb(c,2)) { goto L_801EAA54; } // 801EA9EC
  c->r[0]=R8(c->r[29]+0x000027C0u); // 801EA9F0
  cmpu(c,0,c->r[0],0x00000005u); // 801EA9F4
  if (crb(c,0)) { goto L_801EAA0C; } // 801EA9F8
  c->r[3]=0u+0x000D0000u; // 801EA9FC
  c->r[4]=c->r[31]+0x000002C0u; // 801EAA00
  c->r[3]=c->r[3]+0x00000004u; // 801EAA04
  c->lr=0x801EAA0Cu; f_801DC730(c); // 801EAA08
L_801EAA0C:;
  c->r[3]=0u+0x00000001u; // 801EAA0C
  c->lr=0x801EAA14u; f_801F125C(c); // 801EAA10
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801EAA14
  if (!crb(c,2)) { goto L_801EAA44; } // 801EAA18
  c->r[3]=0u+0x80310000u; // 801EAA1C
  c->r[3]=c->r[3]+0xFFFF8818u; // 801EAA20
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801EAA24
  cmpu(c,0,c->r[0],0x00000001u); // 801EAA28
  if (crb(c,0)) { goto L_801EAA3C; } // 801EAA2C
  c->r[4]=c->r[31]+0x000002E4u; // 801EAA30
  c->r[3]=0u+0x000D0000u; // 801EAA34
  c->lr=0x801EAA3Cu; f_801DC730(c); // 801EAA38
L_801EAA3C:;
  c->r[3]=0u+0x00000003u; // 801EAA3C
  goto L_801EAB64; // 801EAA40
L_801EAA44:;
  c->r[3]=0u+0x80310000u; // 801EAA44
  c->r[0]=0u+0x00000001u; // 801EAA48
  c->r[3]=c->r[3]+0xFFFF8818u; // 801EAA4C
  W8(c->r[3]+0x0000197Bu,c->r[0]); // 801EAA50
L_801EAA54:;
  c->r[3]=0u+0x80310000u; // 801EAA54
  c->r[0]=0u+0x00000001u; // 801EAA58
  c->r[3]=c->r[3]+0xFFFF8818u; // 801EAA5C
  W8(c->r[3]+0x0000197Du,c->r[0]); // 801EAA60
  c->lr=0x801EAA68u; f_801E61C4(c); // 801EAA64
  c->r[4]=R8(c->r[3]+0x00000000u); // 801EAA68
  c->r[0]=0u+0x00000000u; // 801EAA6C
  c->r[3]=c->r[28]|c->r[28]; // 801EAA70
  W8(c->r[30]+0x00000085u,c->r[0]); // 801EAA74
  c->r[27]=rotl(c->r[4],27)&0x00000001u; // 801EAA78
  c->lr=0x801EAA80u; f_801E758C(c); // 801EAA7C
  cmps(c,0,(int32_t)c->r[3],0); // 801EAA80
  c->r[4]=c->r[3]|c->r[3]; // 801EAA84
  if (crb(c,2)) { goto L_801EAAB0; } // 801EAA88
  c->r[0]=R16(c->r[4]+0x00000000u); // 801EAA8C
  c->r[3]=c->r[28]|c->r[28]; // 801EAA90
  c->r[5]=R8(c->r[4]+0x0000000Bu); // 801EAA94
  c->r[8]=c->r[27]|c->r[27]; // 801EAA98
  c->r[6]=R8(c->r[4]+0x0000000Du); // 801EAA9C
  c->r[7]=c->r[0]|0x00008000u; // 801EAAA0
  c->r[4]=0u+0x00000018u; // 801EAAA4
  c->lr=0x801EAAACu; f_801EF814(c); // 801EAAA8
  goto L_801EAACC; // 801EAAAC
L_801EAAB0:;
  c->r[7]=R16(c->r[30]+0x0000001Au); // 801EAAB0
  c->r[3]=c->r[28]|c->r[28]; // 801EAAB4
  c->r[8]=c->r[27]|c->r[27]; // 801EAAB8
  c->r[4]=0u+0x00000018u; // 801EAABC
  c->r[5]=0u+0x00000001u; // 801EAAC0
  c->r[6]=0u+0x00000000u; // 801EAAC4
  c->lr=0x801EAACCu; f_801EF814(c); // 801EAAC8
L_801EAACC:;
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801EAACC
  if (crb(c,2)) { goto L_801EAADC; } // 801EAAD0
  c->r[3]=0u+0x00000001u; // 801EAAD4
  goto L_801EAB64; // 801EAAD8
L_801EAADC:;
  c->r[3]=0u+0x80310000u; // 801EAADC
  c->r[3]=c->r[3]+0xFFFF8818u; // 801EAAE0
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801EAAE4
  cmpu(c,0,c->r[0],0x00000001u); // 801EAAE8
  if (crb(c,0)) { goto L_801EAAFC; } // 801EAAEC
  c->r[4]=c->r[31]+0x000002E4u; // 801EAAF0
  c->r[3]=0u+0x000D0000u; // 801EAAF4
  c->lr=0x801EAAFCu; f_801DC730(c); // 801EAAF8
L_801EAAFC:;
  c->r[4]=0u+0x80310000u; // 801EAAFC
  c->r[4]=c->r[4]+0xFFFF8818u; // 801EAB00
  c->r[0]=R8(c->r[4]+0x0000197Bu); // 801EAB04
  cmps(c,0,(int32_t)c->r[0],0); // 801EAB08
  if (crb(c,2)) { goto L_801EAB60; } // 801EAB0C
  c->r[0]=R8(c->r[4]+0x000027C0u); // 801EAB10
  c->r[3]=0u+0x00000000u; // 801EAB14
  W8(c->r[4]+0x0000197Bu,c->r[3]); // 801EAB18
  cmpu(c,0,c->r[0],0x00000005u); // 801EAB1C
  if (crb(c,0)) { goto L_801EAB44; } // 801EAB20
  c->r[5]=R8(c->r[4]+0x00001978u); // 801EAB24
  c->r[3]=0u+0x000D0000u; // 801EAB28
  c->r[3]=c->r[3]+0x00000004u; // 801EAB2C
  c->r[4]=c->r[31]+0x000002FCu; // 801EAB30
  c->r[0]=c->r[5]+0xFFFFFFFDu; // 801EAB34
  c->r[0]=cntlz(c->r[0]); // 801EAB38
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 801EAB3C
  c->lr=0x801EAB44u; f_801DC750(c); // 801EAB40
L_801EAB44:;
  c->r[3]=0u+0x80310000u; // 801EAB44
  c->r[3]=c->r[3]+0xFFFF8818u; // 801EAB48
  c->r[3]=R8(c->r[3]+0x00001978u); // 801EAB4C
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 801EAB50
  c->r[0]=cntlz(c->r[0]); // 801EAB54
  c->r[3]=rotl(c->r[0],27)&0x000000FFu; // 801EAB58
  c->lr=0x801EAB60u; f_801F125C(c); // 801EAB5C
L_801EAB60:;
  c->r[3]=0u+0x00000003u; // 801EAB60
L_801EAB64:;
  c->r[11]=c->r[1]+0x00000020u; // 801EAB64
  c->lr=0x801EAB6Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801EAB68
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EAB6C
  c->lr=c->r[0]; // 801EAB70
  c->r[1]=c->r[1]+0x00000020u; // 801EAB74
  return; // 801EAB78
}

// btm_sec_l2cap_access_req
void f_801EAB7C(Ctx* __restrict c) {
  trace_call(0x801EAB7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EAB7C
  c->r[0]=c->lr; // 801EAB80
  W32(c->r[1]+0x00000034u,c->r[0]); // 801EAB84
  c->r[11]=c->r[1]+0x00000030u; // 801EAB88
  c->lr=0x801EAB90u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801EAB8C
  c->r[31]=0u+0x80280000u; // 801EAB90
  c->r[24]=c->r[3]|c->r[3]; // 801EAB94
  c->r[25]=c->r[4]|c->r[4]; // 801EAB98
  c->r[26]=c->r[5]|c->r[5]; // 801EAB9C
  c->r[27]=c->r[6]|c->r[6]; // 801EABA0
  c->r[28]=c->r[7]|c->r[7]; // 801EABA4
  c->r[31]=c->r[31]+0xFFFFF968u; // 801EABA8
  c->lr=0x801EABB0u; f_801E4E80(c); // 801EABAC
  cmps(c,0,(int32_t)c->r[3],0); // 801EABB0
  c->r[30]=c->r[3]|c->r[3]; // 801EABB4
  if (!crb(c,2)) { goto L_801EAC20; } // 801EABB8
  c->r[3]=c->r[24]|c->r[24]; // 801EABBC
  c->lr=0x801EABC4u; f_801E4CA8(c); // 801EABC0
  cmps(c,0,(int32_t)c->r[3],0); // 801EABC4
  c->r[30]=c->r[3]|c->r[3]; // 801EABC8
  if (!crb(c,2)) { goto L_801EAC20; } // 801EABCC
  c->r[3]=0u+0x80310000u; // 801EABD0
  c->r[3]=c->r[3]+0xFFFF8818u; // 801EABD4
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801EABD8
  cmpu(c,0,c->r[0],0x00000002u); // 801EABDC
  if (crb(c,0)) { goto L_801EABF8; } // 801EABE0
  c->r[3]=0u+0x000D0000u; // 801EABE4
  c->r[5]=c->r[25]|c->r[25]; // 801EABE8
  c->r[3]=c->r[3]+0x00000001u; // 801EABEC
  c->r[4]=c->r[31]+0x00000410u; // 801EABF0
  c->lr=0x801EABF8u; f_801DC750(c); // 801EABF4
L_801EABF8:;
  cmps(c,0,(int32_t)c->r[28],0); // 801EABF8
  if (crb(c,2)) { goto L_801EAC18; } // 801EABFC
  c->r[12]=c->r[28]|c->r[28]; // 801EAC00
  c->r[3]=c->r[24]|c->r[24]; // 801EAC04
  c->r[4]=0u+0x00000000u; // 801EAC08
  c->r[5]=0u+0x00000003u; // 801EAC0C
  c->ctr=c->r[12]; // 801EAC10
  if (true) { c->lr=0x801EAC18u; dispatch(c,c->ctr); } // 801EAC14
L_801EAC18:;
  c->r[3]=0u+0x00000003u; // 801EAC18
  goto L_801EAFC8; // 801EAC1C
L_801EAC20:;
  c->r[3]=0u+0x80310000u; // 801EAC20
  c->r[0]=0u+0x00000004u; // 801EAC24
  c->r[3]=c->r[3]+0xFFFF8818u; // 801EAC28
  W16(c->r[30]+0x00000018u,c->r[26]); // 801EAC2C
  c->r[4]=c->r[3]+0x00001990u; // 801EAC30
  c->r[3]=0u+0x00000000u; // 801EAC34
  c->ctr=c->r[0]; // 801EAC38
L_801EAC3C:;
  c->r[0]=R8(c->r[4]+0x0000000Eu); // 801EAC3C
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801EAC40
  if (crb(c,2)) { goto L_801EAC58; } // 801EAC44
  c->r[0]=R16(c->r[4]+0x0000000Cu); // 801EAC48
  cmpu(c,0,c->r[0],c->r[25]); // 801EAC4C
  if (!crb(c,2)) { goto L_801EAC58; } // 801EAC50
  goto L_801EAD08; // 801EAC54
L_801EAC58:;
  c->r[0]=R8(c->r[4]+0x0000004Au); // 801EAC58
  c->r[4]=c->r[4]+0x0000003Cu; // 801EAC5C
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801EAC60
  if (crb(c,2)) { goto L_801EAC78; } // 801EAC64
  c->r[0]=R16(c->r[4]+0x0000000Cu); // 801EAC68
  cmpu(c,0,c->r[0],c->r[25]); // 801EAC6C
  if (!crb(c,2)) { goto L_801EAC78; } // 801EAC70
  goto L_801EAD08; // 801EAC74
L_801EAC78:;
  c->r[0]=R8(c->r[4]+0x0000004Au); // 801EAC78
  c->r[4]=c->r[4]+0x0000003Cu; // 801EAC7C
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801EAC80
  if (crb(c,2)) { goto L_801EAC98; } // 801EAC84
  c->r[0]=R16(c->r[4]+0x0000000Cu); // 801EAC88
  cmpu(c,0,c->r[0],c->r[25]); // 801EAC8C
  if (!crb(c,2)) { goto L_801EAC98; } // 801EAC90
  goto L_801EAD08; // 801EAC94
L_801EAC98:;
  c->r[0]=R8(c->r[4]+0x0000004Au); // 801EAC98
  c->r[4]=c->r[4]+0x0000003Cu; // 801EAC9C
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801EACA0
  if (crb(c,2)) { goto L_801EACB8; } // 801EACA4
  c->r[0]=R16(c->r[4]+0x0000000Cu); // 801EACA8
  cmpu(c,0,c->r[0],c->r[25]); // 801EACAC
  if (!crb(c,2)) { goto L_801EACB8; } // 801EACB0
  goto L_801EAD08; // 801EACB4
L_801EACB8:;
  c->r[0]=R8(c->r[4]+0x0000004Au); // 801EACB8
  c->r[4]=c->r[4]+0x0000003Cu; // 801EACBC
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801EACC0
  if (crb(c,2)) { goto L_801EACD8; } // 801EACC4
  c->r[0]=R16(c->r[4]+0x0000000Cu); // 801EACC8
  cmpu(c,0,c->r[0],c->r[25]); // 801EACCC
  if (!crb(c,2)) { goto L_801EACD8; } // 801EACD0
  goto L_801EAD08; // 801EACD4
L_801EACD8:;
  c->r[0]=R8(c->r[4]+0x0000004Au); // 801EACD8
  c->r[4]=c->r[4]+0x0000003Cu; // 801EACDC
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801EACE0
  if (crb(c,2)) { goto L_801EACF8; } // 801EACE4
  c->r[0]=R16(c->r[4]+0x0000000Cu); // 801EACE8
  cmpu(c,0,c->r[0],c->r[25]); // 801EACEC
  if (!crb(c,2)) { goto L_801EACF8; } // 801EACF0
  goto L_801EAD08; // 801EACF4
L_801EACF8:;
  c->r[3]=c->r[3]+0x00000005u; // 801EACF8
  c->r[4]=c->r[4]+0x0000003Cu; // 801EACFC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801EAC3C; } // 801EAD00
  c->r[4]=0u+0x00000000u; // 801EAD04
L_801EAD08:;
  cmps(c,0,(int32_t)c->r[4],0); // 801EAD08
  if (!crb(c,2)) { goto L_801EAD60; } // 801EAD0C
  c->r[3]=0u+0x80310000u; // 801EAD10
  c->r[3]=c->r[3]+0xFFFF8818u; // 801EAD14
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801EAD18
  cmpu(c,0,c->r[0],0x00000002u); // 801EAD1C
  if (crb(c,0)) { goto L_801EAD38; } // 801EAD20
  c->r[3]=0u+0x000D0000u; // 801EAD24
  c->r[5]=c->r[25]|c->r[25]; // 801EAD28
  c->r[3]=c->r[3]+0x00000001u; // 801EAD2C
  c->r[4]=c->r[31]+0x00000448u; // 801EAD30
  c->lr=0x801EAD38u; f_801DC750(c); // 801EAD34
L_801EAD38:;
  cmps(c,0,(int32_t)c->r[28],0); // 801EAD38
  if (crb(c,2)) { goto L_801EAD58; } // 801EAD3C
  c->r[12]=c->r[28]|c->r[28]; // 801EAD40
  c->r[3]=c->r[24]|c->r[24]; // 801EAD44
  c->r[4]=0u+0x00000000u; // 801EAD48
  c->r[5]=0u+0x00000004u; // 801EAD4C
  c->ctr=c->r[12]; // 801EAD50
  if (true) { c->lr=0x801EAD58u; dispatch(c,c->ctr); } // 801EAD54
L_801EAD58:;
  c->r[3]=0u+0x00000004u; // 801EAD58
  goto L_801EAFC8; // 801EAD5C
L_801EAD60:;
  cmps(c,0,(int32_t)c->r[27],0); // 801EAD60
  if (crb(c,2)) { goto L_801EAD78; } // 801EAD64
  if (crb(c,2)) { goto L_801EAD7C; } // 801EAD68
  c->r[0]=R32(c->r[30]+0x00000000u); // 801EAD6C
  cmps(c,0,(int32_t)c->r[0],0); // 801EAD70
  if (!crb(c,2)) { goto L_801EAD7C; } // 801EAD74
L_801EAD78:;
  W32(c->r[30]+0x00000000u,c->r[4]); // 801EAD78
L_801EAD7C:;
  c->r[3]=0u+0x80310000u; // 801EAD7C
  c->r[0]=0u+0x00000006u; // 801EAD80
  c->r[3]=c->r[3]+0xFFFF8818u; // 801EAD84
  c->r[29]=R8(c->r[4]+0x0000000Eu); // 801EAD88
  c->r[7]=c->r[3]+0x00001990u; // 801EAD8C
  c->r[6]=0u+0x00000000u; // 801EAD90
  c->r[5]=0u+0x00000000u; // 801EAD94
  c->ctr=c->r[0]; // 801EAD98
L_801EAD9C:;
  c->r[0]=R8(c->r[7]+0x0000000Eu); // 801EAD9C
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801EADA0
  if (crb(c,2)) { goto L_801EADD4; } // 801EADA4
  c->r[3]=R16(c->r[7]+0x0000000Cu); // 801EADA8
  c->r[0]=R16(c->r[4]+0x0000000Cu); // 801EADAC
  cmpu(c,0,c->r[3],c->r[0]); // 801EADB0
  if (!crb(c,2)) { goto L_801EADD4; } // 801EADB4
  cmps(c,0,(int32_t)c->r[6],0); // 801EADB8
  if (!crb(c,2)) { goto L_801EAE98; } // 801EADBC
  cmpu(c,0,c->r[4],c->r[7]); // 801EADC0
  if (!crb(c,2)) { goto L_801EADD4; } // 801EADC4
  c->r[6]=0u+0x00000001u; // 801EADC8
  goto L_801EADD4; // 801EADCC
  goto L_801EAE98; // 801EADD0
L_801EADD4:;
  c->r[0]=R8(c->r[7]+0x0000004Au); // 801EADD4
  c->r[7]=c->r[7]+0x0000003Cu; // 801EADD8
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801EADDC
  if (crb(c,2)) { goto L_801EAE10; } // 801EADE0
  c->r[3]=R16(c->r[7]+0x0000000Cu); // 801EADE4
  c->r[0]=R16(c->r[4]+0x0000000Cu); // 801EADE8
  cmpu(c,0,c->r[3],c->r[0]); // 801EADEC
  if (!crb(c,2)) { goto L_801EAE10; } // 801EADF0
  cmps(c,0,(int32_t)c->r[6],0); // 801EADF4
  if (!crb(c,2)) { goto L_801EAE98; } // 801EADF8
  cmpu(c,0,c->r[4],c->r[7]); // 801EADFC
  if (!crb(c,2)) { goto L_801EAE10; } // 801EAE00
  c->r[6]=0u+0x00000001u; // 801EAE04
  goto L_801EAE10; // 801EAE08
  goto L_801EAE98; // 801EAE0C
L_801EAE10:;
  c->r[0]=R8(c->r[7]+0x0000004Au); // 801EAE10
  c->r[7]=c->r[7]+0x0000003Cu; // 801EAE14
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801EAE18
  if (crb(c,2)) { goto L_801EAE4C; } // 801EAE1C
  c->r[3]=R16(c->r[7]+0x0000000Cu); // 801EAE20
  c->r[0]=R16(c->r[4]+0x0000000Cu); // 801EAE24
  cmpu(c,0,c->r[3],c->r[0]); // 801EAE28
  if (!crb(c,2)) { goto L_801EAE4C; } // 801EAE2C
  cmps(c,0,(int32_t)c->r[6],0); // 801EAE30
  if (!crb(c,2)) { goto L_801EAE98; } // 801EAE34
  cmpu(c,0,c->r[4],c->r[7]); // 801EAE38
  if (!crb(c,2)) { goto L_801EAE4C; } // 801EAE3C
  c->r[6]=0u+0x00000001u; // 801EAE40
  goto L_801EAE4C; // 801EAE44
  goto L_801EAE98; // 801EAE48
L_801EAE4C:;
  c->r[0]=R8(c->r[7]+0x0000004Au); // 801EAE4C
  c->r[7]=c->r[7]+0x0000003Cu; // 801EAE50
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801EAE54
  if (crb(c,2)) { goto L_801EAE88; } // 801EAE58
  c->r[3]=R16(c->r[7]+0x0000000Cu); // 801EAE5C
  c->r[0]=R16(c->r[4]+0x0000000Cu); // 801EAE60
  cmpu(c,0,c->r[3],c->r[0]); // 801EAE64
  if (!crb(c,2)) { goto L_801EAE88; } // 801EAE68
  cmps(c,0,(int32_t)c->r[6],0); // 801EAE6C
  if (!crb(c,2)) { goto L_801EAE98; } // 801EAE70
  cmpu(c,0,c->r[4],c->r[7]); // 801EAE74
  if (!crb(c,2)) { goto L_801EAE88; } // 801EAE78
  c->r[6]=0u+0x00000001u; // 801EAE7C
  goto L_801EAE88; // 801EAE80
  goto L_801EAE98; // 801EAE84
L_801EAE88:;
  c->r[5]=c->r[5]+0x00000003u; // 801EAE88
  c->r[7]=c->r[7]+0x0000003Cu; // 801EAE8C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801EAD9C; } // 801EAE90
  c->r[7]=0u+0x00000000u; // 801EAE94
L_801EAE98:;
  cmps(c,0,(int32_t)c->r[7],0); // 801EAE98
  if (crb(c,2)) { goto L_801EAEF0; } // 801EAE9C
  c->r[3]=0u+0x80310000u; // 801EAEA0
  c->r[3]=c->r[3]+0xFFFF8818u; // 801EAEA4
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801EAEA8
  cmpu(c,0,c->r[0],0x00000004u); // 801EAEAC
  if (crb(c,0)) { goto L_801EAEC8; } // 801EAEB0
  c->r[3]=0u+0x000D0000u; // 801EAEB4
  c->r[5]=c->r[25]|c->r[25]; // 801EAEB8
  c->r[3]=c->r[3]+0x00000003u; // 801EAEBC
  c->r[4]=c->r[31]+0x0000048Cu; // 801EAEC0
  c->lr=0x801EAEC8u; f_801DC750(c); // 801EAEC4
L_801EAEC8:;
  cmps(c,0,(int32_t)c->r[28],0); // 801EAEC8
  if (crb(c,2)) { goto L_801EAEE8; } // 801EAECC
  c->r[12]=c->r[28]|c->r[28]; // 801EAED0
  c->r[3]=c->r[24]|c->r[24]; // 801EAED4
  c->r[4]=0u+0x00000000u; // 801EAED8
  c->r[5]=0u+0x00000000u; // 801EAEDC
  c->ctr=c->r[12]; // 801EAEE0
  if (true) { c->lr=0x801EAEE8u; dispatch(c,c->ctr); } // 801EAEE4
L_801EAEE8:;
  c->r[3]=0u+0x00000000u; // 801EAEE8
  goto L_801EAFC8; // 801EAEEC
L_801EAEF0:;
  W32(c->r[30]+0x00000004u,c->r[28]); // 801EAEF0
  c->r[0]=0u+0x00000000u; // 801EAEF4
  c->r[3]=0u+0x80310000u; // 801EAEF8
  W32(c->r[30]+0x00000008u,c->r[0]); // 801EAEFC
  c->r[3]=c->r[3]+0xFFFF8818u; // 801EAF00
  W8(c->r[30]+0x00000081u,c->r[29]); // 801EAF04
  W8(c->r[30]+0x00000080u,c->r[27]); // 801EAF08
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801EAF0C
  cmpu(c,0,c->r[0],0x00000004u); // 801EAF10
  if (crb(c,0)) { goto L_801EAF3C; } // 801EAF14
  c->r[3]=0u+0x000D0000u; // 801EAF18
  c->r[7]=R8(c->r[30]+0x0000007Fu); // 801EAF1C
  c->r[8]=R8(c->r[30]+0x00000076u); // 801EAF20
  c->r[5]=c->r[25]|c->r[25]; // 801EAF24
  c->r[6]=c->r[26]|c->r[26]; // 801EAF28
  c->r[9]=c->r[29]|c->r[29]; // 801EAF2C
  c->r[3]=c->r[3]+0x00000003u; // 801EAF30
  c->r[4]=c->r[31]+0x000004D0u; // 801EAF34
  c->lr=0x801EAF3Cu; f_801DC7D0(c); // 801EAF38
L_801EAF3C:;
  cmps(c,0,(int32_t)c->r[27],0); // 801EAF3C
  if (!crb(c,2)) { goto L_801EAF88; } // 801EAF40
  c->r[0]=rotl(c->r[29],0)&0x00000001u; cr0(c,c->r[0]); // 801EAF44
  if (crb(c,2)) { goto L_801EAF88; } // 801EAF48
  c->r[0]=R8(c->r[30]+0x00000076u); // 801EAF4C
  c->r[3]=0u+0x80310000u; // 801EAF50
  c->r[3]=c->r[3]+0xFFFF8818u; // 801EAF54
  c->r[0]=rotl(c->r[0],0)&0x000000FEu; // 801EAF58
  W8(c->r[30]+0x00000076u,c->r[0]); // 801EAF5C
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801EAF60
  cmpu(c,0,c->r[0],0x00000004u); // 801EAF64
  if (crb(c,0)) { goto L_801EAF88; } // 801EAF68
  c->r[3]=0u+0x000D0000u; // 801EAF6C
  c->r[5]=R32(c->r[30]+0x00000014u); // 801EAF70
  c->r[6]=R32(c->r[30]+0x00000010u); // 801EAF74
  c->r[3]=c->r[3]+0x00000003u; // 801EAF78
  c->r[7]=R8(c->r[30]+0x00000076u); // 801EAF7C
  c->r[4]=c->r[31]+0x00000528u; // 801EAF80
  c->lr=0x801EAF88u; f_801DC790(c); // 801EAF84
L_801EAF88:;
  c->r[3]=c->r[30]|c->r[30]; // 801EAF88
  c->lr=0x801EAF90u; f_801ECAD0(c); // 801EAF8C
  c->r[5]=rotl(c->r[3],0)&0x000000FFu; // 801EAF90
  c->r[25]=c->r[3]|c->r[3]; // 801EAF94
  cmpu(c,0,c->r[5],0x00000001u); // 801EAF98
  if (crb(c,2)) { goto L_801EAFC4; } // 801EAF9C
  cmps(c,0,(int32_t)c->r[28],0); // 801EAFA0
  if (crb(c,2)) { goto L_801EAFC4; } // 801EAFA4
  c->r[12]=c->r[28]|c->r[28]; // 801EAFA8
  c->r[3]=c->r[24]|c->r[24]; // 801EAFAC
  c->r[4]=R32(c->r[30]+0x00000008u); // 801EAFB0
  c->ctr=c->r[12]; // 801EAFB4
  if (true) { c->lr=0x801EAFBCu; dispatch(c,c->ctr); } // 801EAFB8
  c->r[0]=0u+0x00000000u; // 801EAFBC
  W32(c->r[30]+0x00000004u,c->r[0]); // 801EAFC0
L_801EAFC4:;
  c->r[3]=c->r[25]|c->r[25]; // 801EAFC4
L_801EAFC8:;
  c->r[11]=c->r[1]+0x00000030u; // 801EAFC8
  c->lr=0x801EAFD0u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801EAFCC
  c->r[0]=R32(c->r[1]+0x00000034u); // 801EAFD0
  c->lr=c->r[0]; // 801EAFD4
  c->r[1]=c->r[1]+0x00000030u; // 801EAFD8
  return; // 801EAFDC
}

// btm_sec_mx_access_request
void f_801EAFE0(Ctx* __restrict c) {
  trace_call(0x801EAFE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EAFE0
  c->r[0]=c->lr; // 801EAFE4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801EAFE8
  c->r[11]=c->r[1]+0x00000030u; // 801EAFEC
  c->lr=0x801EAFF4u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801EAFF0
  c->r[24]=c->r[3]|c->r[3]; // 801EAFF4
  c->r[25]=c->r[4]|c->r[4]; // 801EAFF8
  c->r[26]=c->r[5]|c->r[5]; // 801EAFFC
  c->r[27]=c->r[6]|c->r[6]; // 801EB000
  c->r[28]=c->r[7]|c->r[7]; // 801EB004
  c->r[29]=c->r[8]|c->r[8]; // 801EB008
  c->r[30]=c->r[9]|c->r[9]; // 801EB00C
  c->lr=0x801EB014u; f_801E4E80(c); // 801EB010
  cmps(c,0,(int32_t)c->r[3],0); // 801EB014
  c->r[31]=c->r[3]|c->r[3]; // 801EB018
  if (!crb(c,2)) { goto L_801EB058; } // 801EB01C
  c->r[3]=c->r[24]|c->r[24]; // 801EB020
  c->lr=0x801EB028u; f_801E4CA8(c); // 801EB024
  cmps(c,0,(int32_t)c->r[3],0); // 801EB028
  c->r[31]=c->r[3]|c->r[3]; // 801EB02C
  if (!crb(c,2)) { goto L_801EB058; } // 801EB030
  cmps(c,0,(int32_t)c->r[29],0); // 801EB034
  if (crb(c,2)) { goto L_801EB264; } // 801EB038
  c->r[12]=c->r[29]|c->r[29]; // 801EB03C
  c->r[3]=c->r[24]|c->r[24]; // 801EB040
  c->r[4]=c->r[30]|c->r[30]; // 801EB044
  c->r[5]=0u+0x00000003u; // 801EB048
  c->ctr=c->r[12]; // 801EB04C
  if (true) { c->lr=0x801EB054u; dispatch(c,c->ctr); } // 801EB050
  goto L_801EB264; // 801EB054
L_801EB058:;
  c->r[3]=0u+0x80310000u; // 801EB058
  c->r[0]=0u+0x00000008u; // 801EB05C
  c->r[3]=c->r[3]+0xFFFF8818u; // 801EB060
  c->r[4]=0u+0x00000000u; // 801EB064
  c->r[5]=c->r[3]+0x00001990u; // 801EB068
  c->ctr=c->r[0]; // 801EB06C
L_801EB070:;
  c->r[0]=R8(c->r[5]+0x0000000Eu); // 801EB070
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801EB074
  if (crb(c,2)) { goto L_801EB0C0; } // 801EB078
  c->r[0]=R16(c->r[5]+0x0000000Cu); // 801EB07C
  cmpu(c,0,c->r[0],c->r[25]); // 801EB080
  if (!crb(c,2)) { goto L_801EB0C0; } // 801EB084
  c->r[0]=R32(c->r[5]+0x00000000u); // 801EB088
  cmpu(c,0,c->r[0],c->r[27]); // 801EB08C
  if (!crb(c,2)) { goto L_801EB0C0; } // 801EB090
  cmps(c,0,(int32_t)c->r[26],0); // 801EB094
  if (crb(c,2)) { goto L_801EB0A8; } // 801EB098
  c->r[0]=R32(c->r[5]+0x00000004u); // 801EB09C
  cmpu(c,0,c->r[0],c->r[28]); // 801EB0A0
  if (crb(c,2)) { goto L_801EB178; } // 801EB0A4
L_801EB0A8:;
  cmps(c,0,(int32_t)c->r[26],0); // 801EB0A8
  if (!crb(c,2)) { goto L_801EB0C0; } // 801EB0AC
  c->r[0]=R32(c->r[5]+0x00000008u); // 801EB0B0
  cmpu(c,0,c->r[0],c->r[28]); // 801EB0B4
  if (!crb(c,2)) { goto L_801EB0C0; } // 801EB0B8
  goto L_801EB178; // 801EB0BC
L_801EB0C0:;
  c->r[0]=R8(c->r[5]+0x0000004Au); // 801EB0C0
  c->r[5]=c->r[5]+0x0000003Cu; // 801EB0C4
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801EB0C8
  if (crb(c,2)) { goto L_801EB114; } // 801EB0CC
  c->r[0]=R16(c->r[5]+0x0000000Cu); // 801EB0D0
  cmpu(c,0,c->r[0],c->r[25]); // 801EB0D4
  if (!crb(c,2)) { goto L_801EB114; } // 801EB0D8
  c->r[0]=R32(c->r[5]+0x00000000u); // 801EB0DC
  cmpu(c,0,c->r[0],c->r[27]); // 801EB0E0
  if (!crb(c,2)) { goto L_801EB114; } // 801EB0E4
  cmps(c,0,(int32_t)c->r[26],0); // 801EB0E8
  if (crb(c,2)) { goto L_801EB0FC; } // 801EB0EC
  c->r[0]=R32(c->r[5]+0x00000004u); // 801EB0F0
  cmpu(c,0,c->r[0],c->r[28]); // 801EB0F4
  if (crb(c,2)) { goto L_801EB178; } // 801EB0F8
L_801EB0FC:;
  cmps(c,0,(int32_t)c->r[26],0); // 801EB0FC
  if (!crb(c,2)) { goto L_801EB114; } // 801EB100
  c->r[0]=R32(c->r[5]+0x00000008u); // 801EB104
  cmpu(c,0,c->r[0],c->r[28]); // 801EB108
  if (!crb(c,2)) { goto L_801EB114; } // 801EB10C
  goto L_801EB178; // 801EB110
L_801EB114:;
  c->r[0]=R8(c->r[5]+0x0000004Au); // 801EB114
  c->r[5]=c->r[5]+0x0000003Cu; // 801EB118
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801EB11C
  if (crb(c,2)) { goto L_801EB168; } // 801EB120
  c->r[0]=R16(c->r[5]+0x0000000Cu); // 801EB124
  cmpu(c,0,c->r[0],c->r[25]); // 801EB128
  if (!crb(c,2)) { goto L_801EB168; } // 801EB12C
  c->r[0]=R32(c->r[5]+0x00000000u); // 801EB130
  cmpu(c,0,c->r[0],c->r[27]); // 801EB134
  if (!crb(c,2)) { goto L_801EB168; } // 801EB138
  cmps(c,0,(int32_t)c->r[26],0); // 801EB13C
  if (crb(c,2)) { goto L_801EB150; } // 801EB140
  c->r[0]=R32(c->r[5]+0x00000004u); // 801EB144
  cmpu(c,0,c->r[0],c->r[28]); // 801EB148
  if (crb(c,2)) { goto L_801EB178; } // 801EB14C
L_801EB150:;
  cmps(c,0,(int32_t)c->r[26],0); // 801EB150
  if (!crb(c,2)) { goto L_801EB168; } // 801EB154
  c->r[0]=R32(c->r[5]+0x00000008u); // 801EB158
  cmpu(c,0,c->r[0],c->r[28]); // 801EB15C
  if (!crb(c,2)) { goto L_801EB168; } // 801EB160
  goto L_801EB178; // 801EB164
L_801EB168:;
  c->r[4]=c->r[4]+0x00000002u; // 801EB168
  c->r[5]=c->r[5]+0x0000003Cu; // 801EB16C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801EB070; } // 801EB170
  c->r[5]=0u+0x00000000u; // 801EB174
L_801EB178:;
  cmps(c,0,(int32_t)c->r[5],0); // 801EB178
  if (!crb(c,2)) { goto L_801EB1D4; } // 801EB17C
  cmps(c,0,(int32_t)c->r[29],0); // 801EB180
  if (crb(c,2)) { goto L_801EB1A0; } // 801EB184
  c->r[12]=c->r[29]|c->r[29]; // 801EB188
  c->r[3]=c->r[24]|c->r[24]; // 801EB18C
  c->r[4]=c->r[30]|c->r[30]; // 801EB190
  c->r[5]=0u+0x00000004u; // 801EB194
  c->ctr=c->r[12]; // 801EB198
  if (true) { c->lr=0x801EB1A0u; dispatch(c,c->ctr); } // 801EB19C
L_801EB1A0:;
  c->r[3]=0u+0x80310000u; // 801EB1A0
  c->r[3]=c->r[3]+0xFFFF8818u; // 801EB1A4
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801EB1A8
  cmpu(c,0,c->r[0],0x00000001u); // 801EB1AC
  if (crb(c,0)) { goto L_801EB264; } // 801EB1B0
  c->r[4]=0u+0x80280000u; // 801EB1B4
  c->r[5]=c->r[25]|c->r[25]; // 801EB1B8
  c->r[6]=c->r[27]|c->r[27]; // 801EB1BC
  c->r[7]=c->r[28]|c->r[28]; // 801EB1C0
  c->r[4]=c->r[4]+0xFFFFFEC0u; // 801EB1C4
  c->r[3]=0u+0x000D0000u; // 801EB1C8
  c->lr=0x801EB1D0u; f_801DC790(c); // 801EB1CC
  goto L_801EB264; // 801EB1D0
L_801EB1D4:;
  W32(c->r[31]+0x00000000u,c->r[5]); // 801EB1D4
  c->r[3]=c->r[31]|c->r[31]; // 801EB1D8
  c->r[0]=R8(c->r[5]+0x0000000Eu); // 801EB1DC
  W8(c->r[31]+0x00000081u,c->r[0]); // 801EB1E0
  W8(c->r[31]+0x00000080u,c->r[26]); // 801EB1E4
  W32(c->r[31]+0x00000004u,c->r[29]); // 801EB1E8
  W32(c->r[31]+0x00000008u,c->r[30]); // 801EB1EC
  c->r[0]=R8(c->r[31]+0x00000076u); // 801EB1F0
  c->r[0]=rotl(c->r[0],0)&0x000000FEu; // 801EB1F4
  W8(c->r[31]+0x00000076u,c->r[0]); // 801EB1F8
  c->lr=0x801EB200u; f_801ECAD0(c); // 801EB1FC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801EB200
  c->r[5]=c->r[3]|c->r[3]; // 801EB204
  cmpu(c,0,c->r[0],0x00000001u); // 801EB208
  if (crb(c,2)) { goto L_801EB264; } // 801EB20C
  cmps(c,0,(int32_t)c->r[29],0); // 801EB210
  if (crb(c,2)) { goto L_801EB264; } // 801EB214
  c->r[0]=R8(c->r[31]+0x00000080u); // 801EB218
  cmps(c,0,(int32_t)c->r[0],0); // 801EB21C
  if (crb(c,2)) { goto L_801EB244; } // 801EB220
  c->r[3]=R32(c->r[31]+0x00000000u); // 801EB224
  cmps(c,0,(int32_t)c->r[3],0); // 801EB228
  if (crb(c,2)) { goto L_801EB244; } // 801EB22C
  c->r[0]=R32(c->r[3]+0x00000000u); // 801EB230
  cmpu(c,0,c->r[0],0x00000003u); // 801EB234
  if (!crb(c,2)) { goto L_801EB244; } // 801EB238
  c->r[0]=0u+0x00000000u; // 801EB23C
  W32(c->r[3]+0x00000004u,c->r[0]); // 801EB240
L_801EB244:;
  c->r[12]=c->r[29]|c->r[29]; // 801EB244
  c->r[3]=c->r[24]|c->r[24]; // 801EB248
  c->r[4]=c->r[30]|c->r[30]; // 801EB24C
  c->r[5]=rotl(c->r[5],0)&0x000000FFu; // 801EB250
  c->ctr=c->r[12]; // 801EB254
  if (true) { c->lr=0x801EB25Cu; dispatch(c,c->ctr); } // 801EB258
  c->r[0]=0u+0x00000000u; // 801EB25C
  W32(c->r[31]+0x00000004u,c->r[0]); // 801EB260
L_801EB264:;
  c->r[11]=c->r[1]+0x00000030u; // 801EB264
  c->lr=0x801EB26Cu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801EB268
  c->r[0]=R32(c->r[1]+0x00000034u); // 801EB26C
  c->lr=c->r[0]; // 801EB270
  c->r[1]=c->r[1]+0x00000030u; // 801EB274
  return; // 801EB278
}

// btm_sec_conn_req
void f_801EB27C(Ctx* __restrict c) {
  trace_call(0x801EB27Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EB27C
  c->r[0]=c->lr; // 801EB280
  c->r[5]=0u+0x80310000u; // 801EB284
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EB288
  c->r[5]=c->r[5]+0xFFFF8818u; // 801EB28C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801EB290
  W32(c->r[1]+0x00000018u,c->r[30]); // 801EB294
  c->r[30]=c->r[4]|c->r[4]; // 801EB298
  W32(c->r[1]+0x00000014u,c->r[29]); // 801EB29C
  c->r[29]=c->r[3]|c->r[3]; // 801EB2A0
  c->r[0]=R8(c->r[5]+0x0000197Au); // 801EB2A4
  cmps(c,0,(int32_t)c->r[0],0); // 801EB2A8
  if (crb(c,2)) { goto L_801EB310; } // 801EB2AC
  c->lr=0x801EB2B4u; f_801E4E80(c); // 801EB2B0
  cmps(c,0,(int32_t)c->r[3],0); // 801EB2B4
  if (crb(c,2)) { goto L_801EB2C8; } // 801EB2B8
  c->r[0]=R8(c->r[3]+0x00000076u); // 801EB2BC
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 801EB2C0
  if (!crb(c,2)) { goto L_801EB310; } // 801EB2C4
L_801EB2C8:;
  c->r[3]=0u+0x80310000u; // 801EB2C8
  c->r[3]=c->r[3]+0xFFFF8818u; // 801EB2CC
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801EB2D0
  cmpu(c,0,c->r[0],0x00000004u); // 801EB2D4
  if (crb(c,0)) { goto L_801EB2F0; } // 801EB2D8
  c->r[3]=0u+0x000D0000u; // 801EB2DC
  c->r[4]=0u+0x80280000u; // 801EB2E0
  c->r[3]=c->r[3]+0x00000003u; // 801EB2E4
  c->r[4]=c->r[4]+0xFFFFFF00u; // 801EB2E8
  c->lr=0x801EB2F0u; f_801DC730(c); // 801EB2EC
L_801EB2F0:;
  c->r[3]=0u+0x00000002u; // 801EB2F0
  c->lr=0x801EB2F8u; f_801D9B80(c); // 801EB2F4
  cmps(c,0,(int32_t)c->r[3],0); // 801EB2F8
  if (crb(c,2)) { goto L_801EB38C; } // 801EB2FC
  c->r[4]=c->r[29]|c->r[29]; // 801EB300
  c->r[5]=0u+0x0000000Fu; // 801EB304
  c->lr=0x801EB30Cu; f_801EFA68(c); // 801EB308
  goto L_801EB38C; // 801EB30C
L_801EB310:;
  c->r[3]=0u+0x80310000u; // 801EB310
  c->r[3]=c->r[3]+0xFFFF8818u; // 801EB314
  c->r[12]=R32(c->r[3]+0x00001934u); // 801EB318
  cmps(c,0,(int32_t)c->r[12],0); // 801EB31C
  if (crb(c,2)) { goto L_801EB35C; } // 801EB320
  c->r[3]=c->r[29]|c->r[29]; // 801EB324
  c->r[4]=c->r[30]|c->r[30]; // 801EB328
  c->ctr=c->r[12]; // 801EB32C
  if (true) { c->lr=0x801EB334u; dispatch(c,c->ctr); } // 801EB330
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801EB334
  if (!crb(c,2)) { goto L_801EB35C; } // 801EB338
  c->r[3]=0u+0x00000002u; // 801EB33C
  c->lr=0x801EB344u; f_801D9B80(c); // 801EB340
  cmps(c,0,(int32_t)c->r[3],0); // 801EB344
  if (crb(c,2)) { goto L_801EB38C; } // 801EB348
  c->r[4]=c->r[29]|c->r[29]; // 801EB34C
  c->r[5]=0u+0x0000000Fu; // 801EB350
  c->lr=0x801EB358u; f_801EFA68(c); // 801EB354
  goto L_801EB38C; // 801EB358
L_801EB35C:;
  c->r[31]=0u+0x80310000u; // 801EB35C
  c->r[4]=c->r[29]|c->r[29]; // 801EB360
  c->r[31]=c->r[31]+0xFFFF8818u; // 801EB364
  c->r[5]=0u+0x00000006u; // 801EB368
  c->r[3]=c->r[31]+0x000027B4u; // 801EB36C
  c->lr=0x801EB374u; f_80004364(c); // 801EB370
  c->r[4]=c->r[30]|c->r[30]; // 801EB374
  c->r[3]=c->r[31]+0x000027BAu; // 801EB378
  c->r[5]=0u+0x00000003u; // 801EB37C
  c->lr=0x801EB384u; f_80004364(c); // 801EB380
  c->r[3]=c->r[29]|c->r[29]; // 801EB384
  c->lr=0x801EB38Cu; f_801F713C(c); // 801EB388
L_801EB38C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EB38C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801EB390
  c->r[30]=R32(c->r[1]+0x00000018u); // 801EB394
  c->r[29]=R32(c->r[1]+0x00000014u); // 801EB398
  c->lr=c->r[0]; // 801EB39C
  c->r[1]=c->r[1]+0x00000020u; // 801EB3A0
  return; // 801EB3A4
}

// btm_sec_init
void f_801EB3A8(Ctx* __restrict c) {
  trace_call(0x801EB3A8u);
  c->r[6]=0u+0x80310000u; // 801EB3A8
  c->r[4]=0u+0x000000FFu; // 801EB3AC
  c->r[6]=c->r[6]+0xFFFF8818u; // 801EB3B0
  c->r[5]=0u+0x00000006u; // 801EB3B4
  W8(c->r[6]+0x00001978u,c->r[3]); // 801EB3B8
  c->r[3]=c->r[6]+0x00001954u; // 801EB3BC
  f_800046B4(c); return; // 801EB3C0
}

// btm_sec_dev_reset
void f_801EB3C4(Ctx* __restrict c) {
  trace_call(0x801EB3C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EB3C4
  c->r[0]=c->lr; // 801EB3C8
  c->r[3]=0u+0x80310000u; // 801EB3CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EB3D0
  c->r[3]=c->r[3]+0xFFFF8818u; // 801EB3D4
  c->r[0]=R8(c->r[3]+0x00001978u); // 801EB3D8
  cmpu(c,0,c->r[0],0x00000003u); // 801EB3DC
  if (!crb(c,2)) { goto L_801EB3F4; } // 801EB3E0
  c->r[3]=0u+0x00000001u; // 801EB3E4
  c->lr=0x801EB3ECu; f_801F125C(c); // 801EB3E8
  c->r[3]=0u+0x00000001u; // 801EB3EC
  c->lr=0x801EB3F4u; f_801F12D0(c); // 801EB3F0
L_801EB3F4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EB3F4
  c->lr=c->r[0]; // 801EB3F8
  c->r[1]=c->r[1]+0x00000010u; // 801EB3FC
  return; // 801EB400
}

// btm_sec_abort_access_req
void f_801EB404(Ctx* __restrict c) {
  trace_call(0x801EB404u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EB404
  c->r[0]=c->lr; // 801EB408
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EB40C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EB410
  W32(c->r[1]+0x00000008u,c->r[30]); // 801EB414
  c->r[30]=c->r[3]|c->r[3]; // 801EB418
  c->lr=0x801EB420u; f_801E4E80(c); // 801EB41C
  cmps(c,0,(int32_t)c->r[3],0); // 801EB420
  c->r[31]=c->r[3]|c->r[3]; // 801EB424
  if (crb(c,2)) { goto L_801EB4A0; } // 801EB428
  c->r[3]=0u+0x80310000u; // 801EB42C
  c->r[3]=c->r[3]+0xFFFF8818u; // 801EB430
  c->r[12]=R32(c->r[3]+0x00001920u); // 801EB434
  cmps(c,0,(int32_t)c->r[12],0); // 801EB438
  if (crb(c,2)) { goto L_801EB454; } // 801EB43C
  c->r[3]=c->r[30]|c->r[30]; // 801EB440
  c->r[4]=c->r[31]+0x00000022u; // 801EB444
  c->r[5]=c->r[31]+0x00000035u; // 801EB448
  c->ctr=c->r[12]; // 801EB44C
  if (true) { c->lr=0x801EB454u; dispatch(c,c->ctr); } // 801EB450
L_801EB454:;
  c->r[0]=R8(c->r[31]+0x0000007Fu); // 801EB454
  cmpu(c,0,c->r[0],0x00000004u); // 801EB458
  if (crb(c,2)) { goto L_801EB468; } // 801EB45C
  cmpu(c,0,c->r[0],0x00000001u); // 801EB460
  if (!crb(c,2)) { goto L_801EB4A0; } // 801EB464
L_801EB468:;
  c->r[3]=0u+0x00000000u; // 801EB468
  W8(c->r[31]+0x0000007Fu,c->r[3]); // 801EB46C
  c->r[0]=R8(c->r[31]+0x00000080u); // 801EB470
  cmps(c,0,(int32_t)c->r[0],0); // 801EB474
  if (crb(c,2)) { goto L_801EB498; } // 801EB478
  c->r[4]=R32(c->r[31]+0x00000000u); // 801EB47C
  cmps(c,0,(int32_t)c->r[4],0); // 801EB480
  if (crb(c,2)) { goto L_801EB498; } // 801EB484
  c->r[0]=R32(c->r[4]+0x00000000u); // 801EB488
  cmpu(c,0,c->r[0],0x00000003u); // 801EB48C
  if (!crb(c,2)) { goto L_801EB498; } // 801EB490
  W32(c->r[4]+0x00000004u,c->r[3]); // 801EB494
L_801EB498:;
  c->r[0]=0u+0x00000000u; // 801EB498
  W32(c->r[31]+0x00000004u,c->r[0]); // 801EB49C
L_801EB4A0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EB4A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EB4A4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801EB4A8
  c->lr=c->r[0]; // 801EB4AC
  c->r[1]=c->r[1]+0x00000010u; // 801EB4B0
  return; // 801EB4B4
}

// btm_sec_rmt_name_request_complete
void f_801EB4B8(Ctx* __restrict c) {
  trace_call(0x801EB4B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EB4B8
  c->r[0]=c->lr; // 801EB4BC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EB4C0
  c->r[11]=c->r[1]+0x00000020u; // 801EB4C4
  c->lr=0x801EB4CCu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801EB4C8
  cmps(c,0,(int32_t)c->r[3],0); // 801EB4CC
  c->r[27]=c->r[3]|c->r[3]; // 801EB4D0
  c->r[28]=c->r[4]|c->r[4]; // 801EB4D4
  c->r[30]=c->r[5]|c->r[5]; // 801EB4D8
  if (crb(c,2)) { goto L_801EB4EC; } // 801EB4DC
  c->lr=0x801EB4E4u; f_801E4E80(c); // 801EB4E0
  c->r[31]=c->r[3]|c->r[3]; // 801EB4E4
  goto L_801EB594; // 801EB4E8
L_801EB4EC:;
  c->r[3]=0u+0x80310000u; // 801EB4EC
  c->r[0]=0u+0x00000004u; // 801EB4F0
  c->r[3]=c->r[3]+0xFFFF8818u; // 801EB4F4
  c->r[4]=0u+0x00000000u; // 801EB4F8
  c->r[31]=c->r[3]+0x00001F30u; // 801EB4FC
  c->ctr=c->r[0]; // 801EB500
L_801EB504:;
  c->r[0]=R8(c->r[31]+0x00000076u); // 801EB504
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801EB508
  if (crb(c,2)) { goto L_801EB51C; } // 801EB50C
  c->r[0]=R8(c->r[31]+0x0000007Fu); // 801EB510
  cmpu(c,0,c->r[0],0x00000003u); // 801EB514
  if (crb(c,2)) { goto L_801EB588; } // 801EB518
L_801EB51C:;
  c->r[0]=R8(c->r[31]+0x000000FEu); // 801EB51C
  c->r[4]=c->r[4]+0x00000001u; // 801EB520
  c->r[31]=c->r[31]+0x00000088u; // 801EB524
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801EB528
  if (crb(c,2)) { goto L_801EB53C; } // 801EB52C
  c->r[0]=R8(c->r[31]+0x0000007Fu); // 801EB530
  cmpu(c,0,c->r[0],0x00000003u); // 801EB534
  if (crb(c,2)) { goto L_801EB588; } // 801EB538
L_801EB53C:;
  c->r[0]=R8(c->r[31]+0x000000FEu); // 801EB53C
  c->r[4]=c->r[4]+0x00000001u; // 801EB540
  c->r[31]=c->r[31]+0x00000088u; // 801EB544
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801EB548
  if (crb(c,2)) { goto L_801EB55C; } // 801EB54C
  c->r[0]=R8(c->r[31]+0x0000007Fu); // 801EB550
  cmpu(c,0,c->r[0],0x00000003u); // 801EB554
  if (crb(c,2)) { goto L_801EB588; } // 801EB558
L_801EB55C:;
  c->r[0]=R8(c->r[31]+0x000000FEu); // 801EB55C
  c->r[4]=c->r[4]+0x00000001u; // 801EB560
  c->r[31]=c->r[31]+0x00000088u; // 801EB564
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801EB568
  if (crb(c,2)) { goto L_801EB57C; } // 801EB56C
  c->r[0]=R8(c->r[31]+0x0000007Fu); // 801EB570
  cmpu(c,0,c->r[0],0x00000003u); // 801EB574
  if (crb(c,2)) { goto L_801EB588; } // 801EB578
L_801EB57C:;
  c->r[4]=c->r[4]+0x00000001u; // 801EB57C
  c->r[31]=c->r[31]+0x00000088u; // 801EB580
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801EB504; } // 801EB584
L_801EB588:;
  cmps(c,0,(int32_t)c->r[4],16); // 801EB588
  if (!crb(c,2)) { goto L_801EB594; } // 801EB58C
  c->r[31]=0u+0x00000000u; // 801EB590
L_801EB594:;
  c->r[3]=0u+0x80310000u; // 801EB594
  c->r[3]=c->r[3]+0xFFFF8818u; // 801EB598
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801EB59C
  cmpu(c,0,c->r[0],0x00000004u); // 801EB5A0
  if (crb(c,0)) { goto L_801EB5D4; } // 801EB5A4
  cmps(c,0,(int32_t)c->r[31],0); // 801EB5A8
  c->r[3]=0u+0x000D0000u; // 801EB5AC
  c->r[4]=0u+0x80280000u; // 801EB5B0
  c->r[5]=c->r[30]|c->r[30]; // 801EB5B4
  c->r[3]=c->r[3]+0x00000003u; // 801EB5B8
  c->r[4]=c->r[4]+0xFFFFFF3Cu; // 801EB5BC
  if (crb(c,2)) { goto L_801EB5CC; } // 801EB5C0
  c->r[6]=R8(c->r[31]+0x0000007Fu); // 801EB5C4
  goto L_801EB5D0; // 801EB5C8
L_801EB5CC:;
  c->r[6]=0u+0x00000000u; // 801EB5CC
L_801EB5D0:;
  c->lr=0x801EB5D4u; f_801DC770(c); // 801EB5D0
L_801EB5D4:;
  cmps(c,0,(int32_t)c->r[31],0); // 801EB5D4
  if (crb(c,2)) { goto L_801EB788; } // 801EB5D8
  cmps(c,0,(int32_t)c->r[30],0); // 801EB5DC
  if (!crb(c,2)) { goto L_801EB63C; } // 801EB5E0
  c->r[4]=c->r[28]|c->r[28]; // 801EB5E4
  c->r[3]=c->r[31]+0x00000035u; // 801EB5E8
  c->r[5]=0u+0x00000040u; // 801EB5EC
  c->lr=0x801EB5F4u; f_80004364(c); // 801EB5F0
  c->r[0]=R8(c->r[31]+0x00000076u); // 801EB5F4
  c->r[29]=0u+0x80310000u; // 801EB5F8
  c->r[29]=c->r[29]+0xFFFF8818u; // 801EB5FC
  c->r[28]=0u+0x00000000u; // 801EB600
  c->r[0]=c->r[0]|0x00000008u; // 801EB604
  W8(c->r[31]+0x00000076u,c->r[0]); // 801EB608
L_801EB60C:;
  c->r[12]=R32(c->r[29]+0x0000192Cu); // 801EB60C
  cmps(c,0,(int32_t)c->r[12],0); // 801EB610
  if (crb(c,2)) { goto L_801EB62C; } // 801EB614
  c->r[3]=c->r[27]|c->r[27]; // 801EB618
  c->r[4]=c->r[31]+0x00000022u; // 801EB61C
  c->r[5]=c->r[31]+0x00000035u; // 801EB620
  c->ctr=c->r[12]; // 801EB624
  if (true) { c->lr=0x801EB62Cu; dispatch(c,c->ctr); } // 801EB628
L_801EB62C:;
  c->r[28]=c->r[28]+0x00000001u; // 801EB62C
  c->r[29]=c->r[29]+0x00000004u; // 801EB630
  cmps(c,0,(int32_t)c->r[28],2); // 801EB634
  if (crb(c,0)) { IRQCHK(c); goto L_801EB60C; } // 801EB638
L_801EB63C:;
  c->r[0]=R8(c->r[31]+0x00000082u); // 801EB63C
  cmps(c,0,(int32_t)c->r[0],0); // 801EB640
  if (crb(c,2)) { goto L_801EB6DC; } // 801EB644
  c->r[0]=R8(c->r[31]+0x00000081u); // 801EB648
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 801EB64C
  if (crb(c,2)) { goto L_801EB660; } // 801EB650
  c->r[0]=R8(c->r[31]+0x00000085u); // 801EB654
  cmps(c,0,(int32_t)c->r[0],0); // 801EB658
  if (crb(c,2)) { goto L_801EB788; } // 801EB65C
L_801EB660:;
  c->r[0]=0u+0x00000000u; // 801EB660
  c->r[3]=0u+0x80310000u; // 801EB664
  W8(c->r[31]+0x00000082u,c->r[0]); // 801EB668
  c->r[3]=c->r[3]+0xFFFF8818u; // 801EB66C
  c->r[12]=R32(c->r[3]+0x00001914u); // 801EB670
  cmps(c,0,(int32_t)c->r[12],0); // 801EB674
  if (crb(c,2)) { goto L_801EB698; } // 801EB678
  c->r[3]=c->r[31]+0x0000001Cu; // 801EB67C
  c->r[4]=c->r[31]+0x00000022u; // 801EB680
  c->r[5]=c->r[31]+0x00000035u; // 801EB684
  c->r[6]=c->r[31]+0x00000025u; // 801EB688
  c->r[7]=R8(c->r[31]+0x00000083u); // 801EB68C
  c->ctr=c->r[12]; // 801EB690
  if (true) { c->lr=0x801EB698u; dispatch(c,c->ctr); } // 801EB694
L_801EB698:;
  c->r[29]=0u+0x80310000u; // 801EB698
  c->r[28]=0u+0x00000000u; // 801EB69C
  c->r[29]=c->r[29]+0xFFFF8818u; // 801EB6A0
L_801EB6A4:;
  c->r[12]=R32(c->r[29]+0x00001924u); // 801EB6A4
  cmps(c,0,(int32_t)c->r[12],0); // 801EB6A8
  if (crb(c,2)) { goto L_801EB6CC; } // 801EB6AC
  c->r[3]=c->r[31]+0x0000001Cu; // 801EB6B0
  c->r[4]=c->r[31]+0x00000022u; // 801EB6B4
  c->r[5]=c->r[31]+0x00000035u; // 801EB6B8
  c->r[6]=c->r[31]+0x00000025u; // 801EB6BC
  c->r[7]=R8(c->r[31]+0x00000083u); // 801EB6C0
  c->ctr=c->r[12]; // 801EB6C4
  if (true) { c->lr=0x801EB6CCu; dispatch(c,c->ctr); } // 801EB6C8
L_801EB6CC:;
  c->r[28]=c->r[28]+0x00000001u; // 801EB6CC
  c->r[29]=c->r[29]+0x00000004u; // 801EB6D0
  cmps(c,0,(int32_t)c->r[28],2); // 801EB6D4
  if (crb(c,0)) { IRQCHK(c); goto L_801EB6A4; } // 801EB6D8
L_801EB6DC:;
  c->r[3]=R8(c->r[31]+0x00000081u); // 801EB6DC
  c->r[0]=rotl(c->r[3],0)&0x00000040u; cr0(c,c->r[0]); // 801EB6E0
  if (crb(c,2)) { goto L_801EB710; } // 801EB6E4
  c->r[0]=R8(c->r[31]+0x00000076u); // 801EB6E8
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801EB6EC
  if (crb(c,2)) { goto L_801EB710; } // 801EB6F0
  c->r[0]=0u+0xFFFFFFAFu; // 801EB6F4
  c->r[4]=0u+0x00000013u; // 801EB6F8
  c->r[0]=c->r[3]&c->r[0]; // 801EB6FC
  W8(c->r[31]+0x00000081u,c->r[0]); // 801EB700
  c->r[3]=R16(c->r[31]+0x00000018u); // 801EB704
  c->lr=0x801EB70Cu; f_801EF8F4(c); // 801EB708
  goto L_801EB788; // 801EB70C
L_801EB710:;
  c->r[0]=R8(c->r[31]+0x0000007Fu); // 801EB710
  cmpu(c,0,c->r[0],0x00000003u); // 801EB714
  if (!crb(c,2)) { goto L_801EB788; } // 801EB718
  c->r[29]=0u+0x00000000u; // 801EB71C
  cmps(c,0,(int32_t)c->r[30],0); // 801EB720
  W8(c->r[31]+0x0000007Fu,c->r[29]); // 801EB724
  if (crb(c,2)) { goto L_801EB754; } // 801EB728
  c->r[12]=R32(c->r[31]+0x00000004u); // 801EB72C
  cmps(c,0,(int32_t)c->r[12],0); // 801EB730
  if (crb(c,2)) { goto L_801EB788; } // 801EB734
  c->r[3]=c->r[31]+0x0000001Cu; // 801EB738
  c->r[4]=R32(c->r[31]+0x00000008u); // 801EB73C
  c->r[5]=0u+0x0000000Au; // 801EB740
  c->ctr=c->r[12]; // 801EB744
  if (true) { c->lr=0x801EB74Cu; dispatch(c,c->ctr); } // 801EB748
  W32(c->r[31]+0x00000004u,c->r[29]); // 801EB74C
  goto L_801EB788; // 801EB750
L_801EB754:;
  c->r[3]=c->r[31]|c->r[31]; // 801EB754
  c->lr=0x801EB75Cu; f_801ECAD0(c); // 801EB758
  c->r[5]=rotl(c->r[3],0)&0x000000FFu; // 801EB75C
  cmpu(c,0,c->r[5],0x00000001u); // 801EB760
  if (crb(c,2)) { goto L_801EB788; } // 801EB764
  c->r[12]=R32(c->r[31]+0x00000004u); // 801EB768
  cmps(c,0,(int32_t)c->r[12],0); // 801EB76C
  if (crb(c,2)) { goto L_801EB788; } // 801EB770
  c->r[3]=c->r[31]+0x0000001Cu; // 801EB774
  c->r[4]=R32(c->r[31]+0x00000008u); // 801EB778
  c->ctr=c->r[12]; // 801EB77C
  if (true) { c->lr=0x801EB784u; dispatch(c,c->ctr); } // 801EB780
  W32(c->r[31]+0x00000004u,c->r[29]); // 801EB784
L_801EB788:;
  c->r[11]=c->r[1]+0x00000020u; // 801EB788
  c->lr=0x801EB790u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801EB78C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EB790
  c->lr=c->r[0]; // 801EB794
  c->r[1]=c->r[1]+0x00000020u; // 801EB798
  return; // 801EB79C
}

// btm_sec_auth_complete
void f_801EB7A0(Ctx* __restrict c) {
  trace_call(0x801EB7A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EB7A0
  c->r[0]=c->lr; // 801EB7A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EB7A8
  c->r[11]=c->r[1]+0x00000020u; // 801EB7AC
  c->lr=0x801EB7B4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801EB7B0
  c->r[29]=c->r[3]|c->r[3]; // 801EB7B4
  c->r[30]=c->r[4]|c->r[4]; // 801EB7B8
  c->lr=0x801EB7C0u; f_801E4DC8(c); // 801EB7BC
  c->r[4]=0u+0x80310000u; // 801EB7C0
  c->r[31]=c->r[3]|c->r[3]; // 801EB7C4
  c->r[4]=c->r[4]+0xFFFF8818u; // 801EB7C8
  c->r[0]=R8(c->r[4]+0x000027C0u); // 801EB7CC
  cmpu(c,0,c->r[0],0x00000004u); // 801EB7D0
  if (crb(c,0)) { goto L_801EB804; } // 801EB7D4
  cmps(c,0,(int32_t)c->r[31],0); // 801EB7D8
  c->r[3]=0u+0x000D0000u; // 801EB7DC
  c->r[4]=0u+0x80280000u; // 801EB7E0
  c->r[5]=c->r[30]|c->r[30]; // 801EB7E4
  c->r[3]=c->r[3]+0x00000003u; // 801EB7E8
  c->r[4]=c->r[4]+0xFFFFFF74u; // 801EB7EC
  if (crb(c,2)) { goto L_801EB7FC; } // 801EB7F0
  c->r[6]=R8(c->r[31]+0x0000007Fu); // 801EB7F4
  goto L_801EB800; // 801EB7F8
L_801EB7FC:;
  c->r[6]=0u+0x00000000u; // 801EB7FC
L_801EB800:;
  c->lr=0x801EB804u; f_801DC770(c); // 801EB800
L_801EB804:;
  c->r[4]=0u+0x80310000u; // 801EB804
  c->r[4]=c->r[4]+0xFFFF8818u; // 801EB808
  c->r[0]=R8(c->r[4]+0x0000197Bu); // 801EB80C
  cmps(c,0,(int32_t)c->r[0],0); // 801EB810
  if (crb(c,2)) { goto L_801EB86C; } // 801EB814
  c->r[0]=R8(c->r[4]+0x000027C0u); // 801EB818
  c->r[3]=0u+0x00000000u; // 801EB81C
  W8(c->r[4]+0x0000197Bu,c->r[3]); // 801EB820
  cmpu(c,0,c->r[0],0x00000005u); // 801EB824
  if (crb(c,0)) { goto L_801EB850; } // 801EB828
  c->r[3]=R8(c->r[4]+0x00001978u); // 801EB82C
  c->r[4]=0u+0x80280000u; // 801EB830
  c->r[5]=0u+0x000D0000u; // 801EB834
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 801EB838
  c->r[4]=c->r[4]+0xFFFFFC64u; // 801EB83C
  c->r[0]=cntlz(c->r[0]); // 801EB840
  c->r[3]=c->r[5]+0x00000004u; // 801EB844
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 801EB848
  c->lr=0x801EB850u; f_801DC750(c); // 801EB84C
L_801EB850:;
  c->r[3]=0u+0x80310000u; // 801EB850
  c->r[3]=c->r[3]+0xFFFF8818u; // 801EB854
  c->r[3]=R8(c->r[3]+0x00001978u); // 801EB858
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 801EB85C
  c->r[0]=cntlz(c->r[0]); // 801EB860
  c->r[3]=rotl(c->r[0],27)&0x000000FFu; // 801EB864
  c->lr=0x801EB86Cu; f_801F125C(c); // 801EB868
L_801EB86C:;
  c->r[4]=0u+0x80310000u; // 801EB86C
  c->r[4]=c->r[4]+0xFFFF8818u; // 801EB870
  c->r[0]=R8(c->r[4]+0x0000197Cu); // 801EB874
  cmps(c,0,(int32_t)c->r[0],0); // 801EB878
  if (crb(c,2)) { goto L_801EB890; } // 801EB87C
  c->r[0]=0u+0x00000000u; // 801EB880
  c->r[3]=R8(c->r[4]+0x00000020u); // 801EB884
  W8(c->r[4]+0x0000197Cu,c->r[0]); // 801EB888
  c->lr=0x801EB890u; f_801F0CE8(c); // 801EB88C
L_801EB890:;
  cmps(c,0,(int32_t)c->r[31],0); // 801EB890
  if (crb(c,2)) { goto L_801EB924; } // 801EB894
  c->r[3]=R8(c->r[31]+0x00000081u); // 801EB898
  c->r[0]=rotl(c->r[3],0)&0x00000040u; cr0(c,c->r[0]); // 801EB89C
  if (crb(c,2)) { goto L_801EB924; } // 801EB8A0
  c->r[27]=0u+0x80310000u; // 801EB8A4
  c->r[27]=c->r[27]+0xFFFF8818u; // 801EB8A8
  c->r[0]=R8(c->r[27]+0x0000197Du); // 801EB8AC
  cmps(c,0,(int32_t)c->r[0],0); // 801EB8B0
  if (!crb(c,2)) { goto L_801EB924; } // 801EB8B4
  c->r[0]=0u+0xFFFFFFAFu; // 801EB8B8
  c->r[0]=c->r[3]&c->r[0]; // 801EB8BC
  W8(c->r[31]+0x00000081u,c->r[0]); // 801EB8C0
  c->r[26]=R8(c->r[27]+0x0000197Eu); // 801EB8C4
  cmps(c,0,(int32_t)c->r[26],0); // 801EB8C8
  if (crb(c,2)) { goto L_801EB924; } // 801EB8CC
  c->r[3]=c->r[29]|c->r[29]; // 801EB8D0
  c->lr=0x801EB8D8u; f_801E4DC8(c); // 801EB8D4
  cmps(c,0,(int32_t)c->r[3],0); // 801EB8D8
  c->r[28]=c->r[3]|c->r[3]; // 801EB8DC
  if (crb(c,2)) { goto L_801EB924; } // 801EB8E0
  c->r[0]=R8(c->r[3]+0x00000081u); // 801EB8E4
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 801EB8E8
  if (crb(c,2)) { goto L_801EB8F8; } // 801EB8EC
  W8(c->r[27]+0x0000197Eu,c->r[26]); // 801EB8F0
  goto L_801EB924; // 801EB8F4
L_801EB8F8:;
  c->r[27]=R8(c->r[3]+0x0000007Fu); // 801EB8F8
  cmpu(c,0,c->r[27],0x00000005u); // 801EB8FC
  if (crb(c,2)) { goto L_801EB924; } // 801EB900
  c->r[0]=0u+0x00000005u; // 801EB904
  c->r[4]=c->r[26]|c->r[26]; // 801EB908
  W8(c->r[3]+0x0000007Fu,c->r[0]); // 801EB90C
  c->r[3]=c->r[29]|c->r[29]; // 801EB910
  c->lr=0x801EB918u; f_801EF8F4(c); // 801EB914
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801EB918
  if (!crb(c,2)) { goto L_801EB924; } // 801EB91C
  W8(c->r[28]+0x0000007Fu,c->r[27]); // 801EB920
L_801EB924:;
  cmps(c,0,(int32_t)c->r[31],0); // 801EB924
  if (crb(c,2)) { goto L_801EBACC; } // 801EB928
  c->r[0]=R8(c->r[31]+0x0000007Fu); // 801EB92C
  cmpu(c,0,c->r[0],0x00000001u); // 801EB930
  if (crb(c,2)) { goto L_801EB970; } // 801EB934
  c->r[3]=0u+0x80310000u; // 801EB938
  c->r[3]=c->r[3]+0xFFFF8818u; // 801EB93C
  c->r[12]=R32(c->r[3]+0x0000191Cu); // 801EB940
  cmps(c,0,(int32_t)c->r[12],0); // 801EB944
  if (crb(c,2)) { goto L_801EBACC; } // 801EB948
  cmps(c,0,(int32_t)c->r[30],0); // 801EB94C
  if (crb(c,2)) { goto L_801EBACC; } // 801EB950
  c->r[6]=c->r[30]|c->r[30]; // 801EB954
  c->r[3]=c->r[31]+0x0000001Cu; // 801EB958
  c->r[4]=c->r[31]+0x00000022u; // 801EB95C
  c->r[5]=c->r[31]+0x00000035u; // 801EB960
  c->ctr=c->r[12]; // 801EB964
  if (true) { c->lr=0x801EB96Cu; dispatch(c,c->ctr); } // 801EB968
  goto L_801EBACC; // 801EB96C
L_801EB970:;
  cmpu(c,0,c->r[30],0x0000000Cu); // 801EB970
  if (!crb(c,2)) { goto L_801EB98C; } // 801EB974
  c->r[0]=R8(c->r[31]+0x00000076u); // 801EB978
  c->r[0]=rotl(c->r[0],0)&0x00000006u; // 801EB97C
  cmps(c,0,(int32_t)c->r[0],6); // 801EB980
  if (!crb(c,2)) { goto L_801EB98C; } // 801EB984
  c->r[30]=0u+0x00000000u; // 801EB988
L_801EB98C:;
  c->r[3]=0u+0x80310000u; // 801EB98C
  c->r[3]=c->r[3]+0xFFFF8818u; // 801EB990
  c->r[12]=R32(c->r[3]+0x0000191Cu); // 801EB994
  cmps(c,0,(int32_t)c->r[12],0); // 801EB998
  if (crb(c,2)) { goto L_801EB9B8; } // 801EB99C
  c->r[6]=c->r[30]|c->r[30]; // 801EB9A0
  c->r[3]=c->r[31]+0x0000001Cu; // 801EB9A4
  c->r[4]=c->r[31]+0x00000022u; // 801EB9A8
  c->r[5]=c->r[31]+0x00000035u; // 801EB9AC
  c->ctr=c->r[12]; // 801EB9B0
  if (true) { c->lr=0x801EB9B8u; dispatch(c,c->ctr); } // 801EB9B4
L_801EB9B8:;
  c->r[29]=0u+0x00000000u; // 801EB9B8
  W8(c->r[31]+0x0000007Fu,c->r[29]); // 801EB9BC
  c->r[3]=R8(c->r[31]+0x00000081u); // 801EB9C0
  c->r[0]=rotl(c->r[3],0)&0x00000040u; cr0(c,c->r[0]); // 801EB9C4
  if (crb(c,2)) { goto L_801EB9E8; } // 801EB9C8
  c->r[0]=0u+0xFFFFFFAFu; // 801EB9CC
  c->r[4]=0u+0x00000013u; // 801EB9D0
  c->r[0]=c->r[3]&c->r[0]; // 801EB9D4
  W8(c->r[31]+0x00000081u,c->r[0]); // 801EB9D8
  c->r[3]=R16(c->r[31]+0x00000018u); // 801EB9DC
  c->lr=0x801EB9E4u; f_801EF8F4(c); // 801EB9E0
  goto L_801EBACC; // 801EB9E4
L_801EB9E8:;
  cmps(c,0,(int32_t)c->r[30],0); // 801EB9E8
  if (crb(c,2)) { goto L_801EBA54; } // 801EB9EC
  c->r[0]=R32(c->r[31]+0x00000004u); // 801EB9F0
  cmps(c,0,(int32_t)c->r[0],0); // 801EB9F4
  if (crb(c,2)) { goto L_801EBA44; } // 801EB9F8
  c->r[0]=R8(c->r[31]+0x00000080u); // 801EB9FC
  cmps(c,0,(int32_t)c->r[0],0); // 801EBA00
  if (crb(c,2)) { goto L_801EBA24; } // 801EBA04
  c->r[3]=R32(c->r[31]+0x00000000u); // 801EBA08
  cmps(c,0,(int32_t)c->r[3],0); // 801EBA0C
  if (crb(c,2)) { goto L_801EBA24; } // 801EBA10
  c->r[0]=R32(c->r[3]+0x00000000u); // 801EBA14
  cmpu(c,0,c->r[0],0x00000003u); // 801EBA18
  if (!crb(c,2)) { goto L_801EBA24; } // 801EBA1C
  W32(c->r[3]+0x00000004u,c->r[29]); // 801EBA20
L_801EBA24:;
  c->r[12]=R32(c->r[31]+0x00000004u); // 801EBA24
  c->r[3]=c->r[31]+0x0000001Cu; // 801EBA28
  c->r[4]=R32(c->r[31]+0x00000008u); // 801EBA2C
  c->r[5]=0u+0x0000000Au; // 801EBA30
  c->ctr=c->r[12]; // 801EBA34
  if (true) { c->lr=0x801EBA3Cu; dispatch(c,c->ctr); } // 801EBA38
  c->r[0]=0u+0x00000000u; // 801EBA3C
  W32(c->r[31]+0x00000004u,c->r[0]); // 801EBA40
L_801EBA44:;
  c->r[3]=R16(c->r[31]+0x00000018u); // 801EBA44
  c->r[4]=0u+0x00000005u; // 801EBA48
  c->lr=0x801EBA50u; f_801EF8F4(c); // 801EBA4C
  goto L_801EBACC; // 801EBA50
L_801EBA54:;
  c->r[0]=R8(c->r[31]+0x00000076u); // 801EBA54
  c->r[3]=c->r[31]|c->r[31]; // 801EBA58
  c->r[0]=c->r[0]|0x00000002u; // 801EBA5C
  W8(c->r[31]+0x00000076u,c->r[0]); // 801EBA60
  c->lr=0x801EBA68u; f_801ECAD0(c); // 801EBA64
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801EBA68
  c->r[4]=c->r[3]|c->r[3]; // 801EBA6C
  cmpu(c,0,c->r[0],0x00000001u); // 801EBA70
  if (crb(c,2)) { goto L_801EBACC; } // 801EBA74
  c->r[0]=R32(c->r[31]+0x00000004u); // 801EBA78
  cmps(c,0,(int32_t)c->r[0],0); // 801EBA7C
  if (crb(c,2)) { goto L_801EBACC; } // 801EBA80
  c->r[0]=R8(c->r[31]+0x00000080u); // 801EBA84
  cmps(c,0,(int32_t)c->r[0],0); // 801EBA88
  if (crb(c,2)) { goto L_801EBAAC; } // 801EBA8C
  c->r[3]=R32(c->r[31]+0x00000000u); // 801EBA90
  cmps(c,0,(int32_t)c->r[3],0); // 801EBA94
  if (crb(c,2)) { goto L_801EBAAC; } // 801EBA98
  c->r[0]=R32(c->r[3]+0x00000000u); // 801EBA9C
  cmpu(c,0,c->r[0],0x00000003u); // 801EBAA0
  if (!crb(c,2)) { goto L_801EBAAC; } // 801EBAA4
  W32(c->r[3]+0x00000004u,c->r[29]); // 801EBAA8
L_801EBAAC:;
  c->r[12]=R32(c->r[31]+0x00000004u); // 801EBAAC
  c->r[5]=rotl(c->r[4],0)&0x000000FFu; // 801EBAB0
  c->r[3]=c->r[31]+0x0000001Cu; // 801EBAB4
  c->r[4]=R32(c->r[31]+0x00000008u); // 801EBAB8
  c->ctr=c->r[12]; // 801EBABC
  if (true) { c->lr=0x801EBAC4u; dispatch(c,c->ctr); } // 801EBAC0
  c->r[0]=0u+0x00000000u; // 801EBAC4
  W32(c->r[31]+0x00000004u,c->r[0]); // 801EBAC8
L_801EBACC:;
  c->r[11]=c->r[1]+0x00000020u; // 801EBACC
  c->lr=0x801EBAD4u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801EBAD0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EBAD4
  c->lr=c->r[0]; // 801EBAD8
  c->r[1]=c->r[1]+0x00000020u; // 801EBADC
  return; // 801EBAE0
}

// btm_sec_mkey_comp_event
void f_801EBAE4(Ctx* __restrict c) {
  trace_call(0x801EBAE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EBAE4
  c->r[0]=c->lr; // 801EBAE8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EBAEC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801EBAF0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801EBAF4
  c->r[30]=c->r[5]|c->r[5]; // 801EBAF8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801EBAFC
  c->r[29]=c->r[4]|c->r[4]; // 801EBB00
  c->lr=0x801EBB08u; f_801E4DC8(c); // 801EBB04
  c->r[4]=0u+0x80310000u; // 801EBB08
  c->r[7]=R8(c->r[2]+0xFFFFA2A0u); // 801EBB0C
  c->r[4]=c->r[4]+0xFFFF8818u; // 801EBB10
  c->r[6]=R8(c->r[2]+0xFFFFA2A1u); // 801EBB14
  c->r[0]=R8(c->r[4]+0x000027C0u); // 801EBB18
  c->r[31]=c->r[3]|c->r[3]; // 801EBB1C
  c->r[5]=R8(c->r[2]+0xFFFFA2A2u); // 801EBB20
  c->r[4]=R8(c->r[2]+0xFFFFA2A3u); // 801EBB24
  cmpu(c,0,c->r[0],0x00000004u); // 801EBB28
  c->r[3]=R8(c->r[2]+0xFFFFA2A4u); // 801EBB2C
  c->r[0]=R8(c->r[2]+0xFFFFA2A5u); // 801EBB30
  W8(c->r[1]+0x00000008u,c->r[7]); // 801EBB34
  W8(c->r[1]+0x00000009u,c->r[6]); // 801EBB38
  W8(c->r[1]+0x0000000Au,c->r[5]); // 801EBB3C
  W8(c->r[1]+0x0000000Bu,c->r[4]); // 801EBB40
  W8(c->r[1]+0x0000000Cu,c->r[3]); // 801EBB44
  W8(c->r[1]+0x0000000Du,c->r[0]); // 801EBB48
  if (crb(c,0)) { goto L_801EBB7C; } // 801EBB4C
  cmps(c,0,(int32_t)c->r[31],0); // 801EBB50
  c->r[3]=0u+0x000D0000u; // 801EBB54
  c->r[4]=0u+0x80280000u; // 801EBB58
  c->r[5]=c->r[29]|c->r[29]; // 801EBB5C
  c->r[3]=c->r[3]+0x00000003u; // 801EBB60
  c->r[4]=c->r[4]+0xFFFFFFA8u; // 801EBB64
  if (crb(c,2)) { goto L_801EBB74; } // 801EBB68
  c->r[6]=R8(c->r[31]+0x0000007Fu); // 801EBB6C
  goto L_801EBB78; // 801EBB70
L_801EBB74:;
  c->r[6]=0u+0x00000000u; // 801EBB74
L_801EBB78:;
  c->lr=0x801EBB7Cu; f_801DC770(c); // 801EBB78
L_801EBB7C:;
  c->r[3]=0u+0x80310000u; // 801EBB7C
  c->r[3]=c->r[3]+0xFFFF8818u; // 801EBB80
  c->r[12]=R32(c->r[3]+0x000027B0u); // 801EBB84
  cmps(c,0,(int32_t)c->r[12],0); // 801EBB88
  if (crb(c,2)) { goto L_801EBBC4; } // 801EBB8C
  cmps(c,0,(int32_t)c->r[31],0); // 801EBB90
  if (!crb(c,2)) { goto L_801EBBB0; } // 801EBB94
  c->r[4]=c->r[29]|c->r[29]; // 801EBB98
  c->r[5]=c->r[30]|c->r[30]; // 801EBB9C
  c->r[3]=c->r[1]+0x00000008u; // 801EBBA0
  c->ctr=c->r[12]; // 801EBBA4
  if (true) { c->lr=0x801EBBACu; dispatch(c,c->ctr); } // 801EBBA8
  goto L_801EBBC4; // 801EBBAC
L_801EBBB0:;
  c->r[4]=c->r[29]|c->r[29]; // 801EBBB0
  c->r[5]=c->r[30]|c->r[30]; // 801EBBB4
  c->r[3]=c->r[31]+0x0000001Cu; // 801EBBB8
  c->ctr=c->r[12]; // 801EBBBC
  if (true) { c->lr=0x801EBBC4u; dispatch(c,c->ctr); } // 801EBBC0
L_801EBBC4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EBBC4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801EBBC8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801EBBCC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801EBBD0
  c->lr=c->r[0]; // 801EBBD4
  c->r[1]=c->r[1]+0x00000020u; // 801EBBD8
  return; // 801EBBDC
}

// btm_sec_encrypt_change
void f_801EBBE0(Ctx* __restrict c) {
  trace_call(0x801EBBE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EBBE0
  c->r[0]=c->lr; // 801EBBE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EBBE8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EBBEC
  c->r[31]=c->r[4]|c->r[4]; // 801EBBF0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801EBBF4
  c->lr=0x801EBBFCu; f_801E4DC8(c); // 801EBBF8
  c->r[4]=0u+0x80310000u; // 801EBBFC
  c->r[30]=c->r[3]|c->r[3]; // 801EBC00
  c->r[4]=c->r[4]+0xFFFF8818u; // 801EBC04
  c->r[0]=R8(c->r[4]+0x000027C0u); // 801EBC08
  cmpu(c,0,c->r[0],0x00000004u); // 801EBC0C
  if (crb(c,0)) { goto L_801EBC40; } // 801EBC10
  cmps(c,0,(int32_t)c->r[30],0); // 801EBC14
  c->r[3]=0u+0x000D0000u; // 801EBC18
  c->r[4]=0u+0x80280000u; // 801EBC1C
  c->r[5]=c->r[31]|c->r[31]; // 801EBC20
  c->r[3]=c->r[3]+0x00000003u; // 801EBC24
  c->r[4]=c->r[4]+0xFFFFFFD8u; // 801EBC28
  if (crb(c,2)) { goto L_801EBC38; } // 801EBC2C
  c->r[6]=R8(c->r[30]+0x0000007Fu); // 801EBC30
  goto L_801EBC3C; // 801EBC34
L_801EBC38:;
  c->r[6]=0u+0x00000000u; // 801EBC38
L_801EBC3C:;
  c->lr=0x801EBC40u; f_801DC770(c); // 801EBC3C
L_801EBC40:;
  cmps(c,0,(int32_t)c->r[30],0); // 801EBC40
  if (crb(c,2)) { goto L_801EBD04; } // 801EBC44
  cmpu(c,0,c->r[31],0x00000023u); // 801EBC48
  if (!crb(c,2)) { goto L_801EBC7C; } // 801EBC4C
  c->r[7]=0u+0x80310000u; // 801EBC50
  c->r[6]=0u+0x801F0000u; // 801EBC54
  c->r[7]=c->r[7]+0xFFFF8818u; // 801EBC58
  c->r[4]=0u+0x00000016u; // 801EBC5C
  c->r[6]=c->r[6]+0xFFFFCFCCu; // 801EBC60
  W32(c->r[7]+0x00001938u,c->r[30]); // 801EBC64
  c->r[3]=c->r[7]+0x0000195Cu; // 801EBC68
  c->r[5]=0u+0x00000001u; // 801EBC6C
  W32(c->r[7]+0x0000196Cu,c->r[6]); // 801EBC70
  c->lr=0x801EBC78u; f_801DCD40(c); // 801EBC74
  goto L_801EBD04; // 801EBC78
L_801EBC7C:;
  cmps(c,0,(int32_t)c->r[31],0); // 801EBC7C
  if (crb(c,2)) { goto L_801EBCB0; } // 801EBC80
  c->r[12]=R32(c->r[30]+0x00000004u); // 801EBC84
  cmps(c,0,(int32_t)c->r[12],0); // 801EBC88
  if (crb(c,2)) { goto L_801EBD04; } // 801EBC8C
  c->r[3]=c->r[30]+0x0000001Cu; // 801EBC90
  c->r[4]=R32(c->r[30]+0x00000008u); // 801EBC94
  c->r[5]=0u+0x0000000Au; // 801EBC98
  c->ctr=c->r[12]; // 801EBC9C
  if (true) { c->lr=0x801EBCA4u; dispatch(c,c->ctr); } // 801EBCA0
  c->r[0]=0u+0x00000000u; // 801EBCA4
  W32(c->r[30]+0x00000004u,c->r[0]); // 801EBCA8
  goto L_801EBD04; // 801EBCAC
L_801EBCB0:;
  c->r[0]=R8(c->r[30]+0x00000076u); // 801EBCB0
  c->r[0]=c->r[0]|0x00000006u; // 801EBCB4
  W8(c->r[30]+0x00000076u,c->r[0]); // 801EBCB8
  c->r[0]=R8(c->r[30]+0x0000007Fu); // 801EBCBC
  cmpu(c,0,c->r[0],0x00000002u); // 801EBCC0
  if (!crb(c,2)) { goto L_801EBD04; } // 801EBCC4
  c->r[31]=0u+0x00000000u; // 801EBCC8
  c->r[3]=c->r[30]|c->r[30]; // 801EBCCC
  W8(c->r[30]+0x0000007Fu,c->r[31]); // 801EBCD0
  c->lr=0x801EBCD8u; f_801ECAD0(c); // 801EBCD4
  c->r[5]=rotl(c->r[3],0)&0x000000FFu; // 801EBCD8
  cmpu(c,0,c->r[5],0x00000001u); // 801EBCDC
  if (crb(c,2)) { goto L_801EBD04; } // 801EBCE0
  c->r[12]=R32(c->r[30]+0x00000004u); // 801EBCE4
  cmps(c,0,(int32_t)c->r[12],0); // 801EBCE8
  if (crb(c,2)) { goto L_801EBD04; } // 801EBCEC
  c->r[3]=c->r[30]+0x0000001Cu; // 801EBCF0
  c->r[4]=R32(c->r[30]+0x00000008u); // 801EBCF4
  c->ctr=c->r[12]; // 801EBCF8
  if (true) { c->lr=0x801EBD00u; dispatch(c,c->ctr); } // 801EBCFC
  W32(c->r[30]+0x00000004u,c->r[31]); // 801EBD00
L_801EBD04:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EBD04
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EBD08
  c->r[30]=R32(c->r[1]+0x00000008u); // 801EBD0C
  c->lr=c->r[0]; // 801EBD10
  c->r[1]=c->r[1]+0x00000010u; // 801EBD14
  return; // 801EBD18
}

// btm_sec_is_bonding
void f_801EBD1C(Ctx* __restrict c) {
  trace_call(0x801EBD1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EBD1C
  c->r[0]=c->lr; // 801EBD20
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EBD24
  c->lr=0x801EBD2Cu; f_801E4DC8(c); // 801EBD28
  cmps(c,0,(int32_t)c->r[3],0); // 801EBD2C
  if (crb(c,2)) { goto L_801EBD48; } // 801EBD30
  c->r[0]=R8(c->r[3]+0x00000081u); // 801EBD34
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 801EBD38
  if (crb(c,2)) { goto L_801EBD48; } // 801EBD3C
  c->r[3]=0u+0x00000001u; // 801EBD40
  goto L_801EBD4C; // 801EBD44
L_801EBD48:;
  c->r[3]=0u+0x00000000u; // 801EBD48
L_801EBD4C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EBD4C
  c->lr=c->r[0]; // 801EBD50
  c->r[1]=c->r[1]+0x00000010u; // 801EBD54
  return; // 801EBD58
}

// btm_sec_connected
void f_801EBD5C(Ctx* __restrict c) {
  trace_call(0x801EBD5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EBD5C
  c->r[0]=c->lr; // 801EBD60
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EBD64
  c->r[11]=c->r[1]+0x00000020u; // 801EBD68
  c->lr=0x801EBD70u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801EBD6C
  c->r[27]=c->r[3]|c->r[3]; // 801EBD70
  c->r[28]=c->r[4]|c->r[4]; // 801EBD74
  c->r[29]=c->r[5]|c->r[5]; // 801EBD78
  c->r[30]=c->r[6]|c->r[6]; // 801EBD7C
  c->lr=0x801EBD84u; f_801E4E80(c); // 801EBD80
  c->r[4]=0u+0x80310000u; // 801EBD84
  c->r[31]=c->r[3]|c->r[3]; // 801EBD88
  c->r[4]=c->r[4]+0xFFFF8818u; // 801EBD8C
  c->r[0]=R8(c->r[4]+0x000027C0u); // 801EBD90
  cmpu(c,0,c->r[0],0x00000004u); // 801EBD94
  if (crb(c,0)) { goto L_801EBDBC; } // 801EBD98
  c->r[3]=0u+0x000D0000u; // 801EBD9C
  c->r[4]=0u+0x80280000u; // 801EBDA0
  c->r[5]=c->r[28]|c->r[28]; // 801EBDA4
  c->r[6]=c->r[29]|c->r[29]; // 801EBDA8
  c->r[7]=c->r[30]|c->r[30]; // 801EBDAC
  c->r[3]=c->r[3]+0x00000003u; // 801EBDB0
  c->r[4]=c->r[4]+0x0000000Cu; // 801EBDB4
  c->lr=0x801EBDBCu; f_801DC790(c); // 801EBDB8
L_801EBDBC:;
  cmps(c,0,(int32_t)c->r[31],0); // 801EBDBC
  if (!crb(c,2)) { goto L_801EBDE8; } // 801EBDC0
  cmps(c,0,(int32_t)c->r[29],0); // 801EBDC4
  if (!crb(c,2)) { goto L_801EC1C4; } // 801EBDC8
  c->r[3]=c->r[27]|c->r[27]; // 801EBDCC
  c->lr=0x801EBDD4u; f_801E4CA8(c); // 801EBDD0
  cmps(c,0,(int32_t)c->r[3],0); // 801EBDD4
  c->r[31]=c->r[3]|c->r[3]; // 801EBDD8
  if (!crb(c,2)) { goto L_801EBE08; } // 801EBDDC
  goto L_801EC1C4; // 801EBDE0
  goto L_801EC1C4; // 801EBDE4
L_801EBDE8:;
  c->r[4]=0u+0x80310000u; // 801EBDE8
  c->r[0]=0u+0x00000001u; // 801EBDEC
  c->r[4]=c->r[4]+0xFFFF8818u; // 801EBDF0
  c->r[3]=R32(c->r[4]+0x00001974u); // 801EBDF4
  W32(c->r[31]+0x0000000Cu,c->r[3]); // 801EBDF8
  c->r[3]=c->r[3]+0x00000001u; // 801EBDFC
  W32(c->r[4]+0x00001974u,c->r[3]); // 801EBE00
  W8(c->r[31]+0x00000085u,c->r[0]); // 801EBE04
L_801EBE08:;
  c->r[0]=R8(c->r[31]+0x00000081u); // 801EBE08
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 801EBE0C
  if (crb(c,2)) { goto L_801EBEA0; } // 801EBE10
  c->r[4]=0u+0x80310000u; // 801EBE14
  c->r[4]=c->r[4]+0xFFFF8818u; // 801EBE18
  c->r[0]=R8(c->r[4]+0x0000197Bu); // 801EBE1C
  cmps(c,0,(int32_t)c->r[0],0); // 801EBE20
  if (crb(c,2)) { goto L_801EBE7C; } // 801EBE24
  c->r[0]=R8(c->r[4]+0x000027C0u); // 801EBE28
  c->r[3]=0u+0x00000000u; // 801EBE2C
  W8(c->r[4]+0x0000197Bu,c->r[3]); // 801EBE30
  cmpu(c,0,c->r[0],0x00000005u); // 801EBE34
  if (crb(c,0)) { goto L_801EBE60; } // 801EBE38
  c->r[3]=R8(c->r[4]+0x00001978u); // 801EBE3C
  c->r[4]=0u+0x80280000u; // 801EBE40
  c->r[5]=0u+0x000D0000u; // 801EBE44
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 801EBE48
  c->r[4]=c->r[4]+0xFFFFFC64u; // 801EBE4C
  c->r[0]=cntlz(c->r[0]); // 801EBE50
  c->r[3]=c->r[5]+0x00000004u; // 801EBE54
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 801EBE58
  c->lr=0x801EBE60u; f_801DC750(c); // 801EBE5C
L_801EBE60:;
  c->r[3]=0u+0x80310000u; // 801EBE60
  c->r[3]=c->r[3]+0xFFFF8818u; // 801EBE64
  c->r[3]=R8(c->r[3]+0x00001978u); // 801EBE68
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 801EBE6C
  c->r[0]=cntlz(c->r[0]); // 801EBE70
  c->r[3]=rotl(c->r[0],27)&0x000000FFu; // 801EBE74
  c->lr=0x801EBE7Cu; f_801F125C(c); // 801EBE78
L_801EBE7C:;
  c->r[4]=0u+0x80310000u; // 801EBE7C
  c->r[4]=c->r[4]+0xFFFF8818u; // 801EBE80
  c->r[0]=R8(c->r[4]+0x0000197Cu); // 801EBE84
  cmps(c,0,(int32_t)c->r[0],0); // 801EBE88
  if (crb(c,2)) { goto L_801EBEA0; } // 801EBE8C
  c->r[0]=0u+0x00000000u; // 801EBE90
  c->r[3]=R8(c->r[4]+0x00000020u); // 801EBE94
  W8(c->r[4]+0x0000197Cu,c->r[0]); // 801EBE98
  c->lr=0x801EBEA0u; f_801F0CE8(c); // 801EBE9C
L_801EBEA0:;
  cmps(c,0,(int32_t)c->r[29],0); // 801EBEA0
  if (crb(c,2)) { goto L_801EC010; } // 801EBEA4
  cmpu(c,0,c->r[29],0x00000005u); // 801EBEA8
  if (crb(c,2)) { goto L_801EBEFC; } // 801EBEAC
  cmpu(c,0,c->r[29],0x00000006u); // 801EBEB0
  if (crb(c,2)) { goto L_801EBEFC; } // 801EBEB4
  cmpu(c,0,c->r[29],0x0000000Eu); // 801EBEB8
  if (crb(c,2)) { goto L_801EBEFC; } // 801EBEBC
  cmpu(c,0,c->r[29],0x00000018u); // 801EBEC0
  if (crb(c,2)) { goto L_801EBEFC; } // 801EBEC4
  cmpu(c,0,c->r[29],0x00000026u); // 801EBEC8
  if (crb(c,2)) { goto L_801EBEFC; } // 801EBECC
  cmpu(c,0,c->r[29],0x00000029u); // 801EBED0
  if (crb(c,2)) { goto L_801EBEFC; } // 801EBED4
  cmpu(c,0,c->r[29],0x00000025u); // 801EBED8
  if (crb(c,2)) { goto L_801EBEFC; } // 801EBEDC
  cmpu(c,0,c->r[29],0x00000017u); // 801EBEE0
  if (crb(c,2)) { goto L_801EBEFC; } // 801EBEE4
  cmpu(c,0,c->r[29],0x00000022u); // 801EBEE8
  if (crb(c,2)) { goto L_801EBEFC; } // 801EBEEC
  c->r[0]=R8(c->r[31]+0x00000081u); // 801EBEF0
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 801EBEF4
  if (crb(c,2)) { goto L_801EBF88; } // 801EBEF8
L_801EBEFC:;
  c->r[3]=R8(c->r[31]+0x00000081u); // 801EBEFC
  c->r[0]=0u+0xFFFFFFAFu; // 801EBF00
  c->r[28]=0u+0x80310000u; // 801EBF04
  c->r[0]=c->r[3]&c->r[0]; // 801EBF08
  W8(c->r[31]+0x00000081u,c->r[0]); // 801EBF0C
  c->r[28]=c->r[28]+0xFFFF8818u; // 801EBF10
  c->r[0]=R8(c->r[31]+0x00000076u); // 801EBF14
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFEFu; // 801EBF18
  W8(c->r[31]+0x00000076u,c->r[0]); // 801EBF1C
  c->r[0]=R32(c->r[28]+0x0000194Cu); // 801EBF20
  cmps(c,0,(int32_t)c->r[0],0); // 801EBF24
  if (crb(c,2)) { goto L_801EBF40; } // 801EBF28
  c->r[3]=c->r[28]+0x0000193Cu; // 801EBF2C
  c->lr=0x801EBF34u; f_801DCDB0(c); // 801EBF30
  c->r[0]=0u+0x00000000u; // 801EBF34
  c->r[29]=0u+0x0000000Eu; // 801EBF38
  W32(c->r[28]+0x0000194Cu,c->r[0]); // 801EBF3C
L_801EBF40:;
  c->r[3]=0u+0x80310000u; // 801EBF40
  c->r[3]=c->r[3]+0xFFFF8818u; // 801EBF44
  c->r[0]=R8(c->r[3]+0x000027BFu); // 801EBF48
  cmpu(c,0,c->r[0],0x0000000Eu); // 801EBF4C
  if (!crb(c,2)) { goto L_801EBF58; } // 801EBF50
  c->r[29]=0u+0x0000000Eu; // 801EBF54
L_801EBF58:;
  c->r[3]=0u+0x80310000u; // 801EBF58
  c->r[3]=c->r[3]+0xFFFF8818u; // 801EBF5C
  c->r[12]=R32(c->r[3]+0x0000191Cu); // 801EBF60
  cmps(c,0,(int32_t)c->r[12],0); // 801EBF64
  if (crb(c,2)) { goto L_801EC1C4; } // 801EBF68
  c->r[6]=c->r[29]|c->r[29]; // 801EBF6C
  c->r[3]=c->r[31]+0x0000001Cu; // 801EBF70
  c->r[4]=c->r[31]+0x00000022u; // 801EBF74
  c->r[5]=c->r[31]+0x00000035u; // 801EBF78
  c->ctr=c->r[12]; // 801EBF7C
  if (true) { c->lr=0x801EBF84u; dispatch(c,c->ctr); } // 801EBF80
  goto L_801EC1C4; // 801EBF84
L_801EBF88:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 801EBF88
  cmps(c,0,(int32_t)c->r[0],0); // 801EBF8C
  if (crb(c,2)) { goto L_801EC1C4; } // 801EBF90
  c->r[0]=R8(c->r[31]+0x00000080u); // 801EBF94
  cmps(c,0,(int32_t)c->r[0],0); // 801EBF98
  if (crb(c,2)) { goto L_801EBFC0; } // 801EBF9C
  c->r[3]=R32(c->r[31]+0x00000000u); // 801EBFA0
  cmps(c,0,(int32_t)c->r[3],0); // 801EBFA4
  if (crb(c,2)) { goto L_801EBFC0; } // 801EBFA8
  c->r[0]=R32(c->r[3]+0x00000000u); // 801EBFAC
  cmpu(c,0,c->r[0],0x00000003u); // 801EBFB0
  if (!crb(c,2)) { goto L_801EBFC0; } // 801EBFB4
  c->r[0]=0u+0x00000000u; // 801EBFB8
  W32(c->r[3]+0x00000004u,c->r[0]); // 801EBFBC
L_801EBFC0:;
  cmpu(c,0,c->r[29],0x00000008u); // 801EBFC0
  if (crb(c,2)) { goto L_801EBFD8; } // 801EBFC4
  cmpu(c,0,c->r[29],0x0000001Fu); // 801EBFC8
  if (crb(c,2)) { goto L_801EBFD8; } // 801EBFCC
  cmpu(c,0,c->r[29],0x00000004u); // 801EBFD0
  if (!crb(c,2)) { goto L_801EBFF4; } // 801EBFD4
L_801EBFD8:;
  c->r[12]=R32(c->r[31]+0x00000004u); // 801EBFD8
  c->r[3]=c->r[31]+0x0000001Cu; // 801EBFDC
  c->r[4]=R32(c->r[31]+0x00000008u); // 801EBFE0
  c->r[5]=0u+0x00000008u; // 801EBFE4
  c->ctr=c->r[12]; // 801EBFE8
  if (true) { c->lr=0x801EBFF0u; dispatch(c,c->ctr); } // 801EBFEC
  goto L_801EC1C4; // 801EBFF0
L_801EBFF4:;
  c->r[12]=R32(c->r[31]+0x00000004u); // 801EBFF4
  c->r[3]=c->r[31]+0x0000001Cu; // 801EBFF8
  c->r[4]=R32(c->r[31]+0x00000008u); // 801EBFFC
  c->r[5]=0u+0x0000000Au; // 801EC000
  c->ctr=c->r[12]; // 801EC004
  if (true) { c->lr=0x801EC00Cu; dispatch(c,c->ctr); } // 801EC008
  goto L_801EC1C4; // 801EC00C
L_801EC010:;
  c->r[0]=R8(c->r[31]+0x00000081u); // 801EC010
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 801EC014
  if (crb(c,2)) { goto L_801EC0F0; } // 801EC018
  c->r[0]=R8(c->r[31]+0x00000082u); // 801EC01C
  cmps(c,0,(int32_t)c->r[0],0); // 801EC020
  if (crb(c,2)) { goto L_801EC0F0; } // 801EC024
  c->r[0]=0u+0x00000000u; // 801EC028
  c->r[3]=0u+0x80310000u; // 801EC02C
  W8(c->r[31]+0x00000082u,c->r[0]); // 801EC030
  c->r[3]=c->r[3]+0xFFFF8818u; // 801EC034
  c->r[12]=R32(c->r[3]+0x00001914u); // 801EC038
  cmps(c,0,(int32_t)c->r[12],0); // 801EC03C
  if (crb(c,2)) { goto L_801EC060; } // 801EC040
  c->r[3]=c->r[31]+0x0000001Cu; // 801EC044
  c->r[4]=c->r[31]+0x00000022u; // 801EC048
  c->r[5]=c->r[31]+0x00000035u; // 801EC04C
  c->r[6]=c->r[31]+0x00000025u; // 801EC050
  c->r[7]=R8(c->r[31]+0x00000083u); // 801EC054
  c->ctr=c->r[12]; // 801EC058
  if (true) { c->lr=0x801EC060u; dispatch(c,c->ctr); } // 801EC05C
L_801EC060:;
  c->r[29]=0u+0x80310000u; // 801EC060
  c->r[30]=0u+0x00000000u; // 801EC064
  c->r[29]=c->r[29]+0xFFFF8818u; // 801EC068
L_801EC06C:;
  c->r[12]=R32(c->r[29]+0x00001924u); // 801EC06C
  cmps(c,0,(int32_t)c->r[12],0); // 801EC070
  if (crb(c,2)) { goto L_801EC094; } // 801EC074
  c->r[3]=c->r[31]+0x0000001Cu; // 801EC078
  c->r[4]=c->r[31]+0x00000022u; // 801EC07C
  c->r[5]=c->r[31]+0x00000035u; // 801EC080
  c->r[6]=c->r[31]+0x00000025u; // 801EC084
  c->r[7]=R8(c->r[31]+0x00000083u); // 801EC088
  c->ctr=c->r[12]; // 801EC08C
  if (true) { c->lr=0x801EC094u; dispatch(c,c->ctr); } // 801EC090
L_801EC094:;
  c->r[30]=c->r[30]+0x00000001u; // 801EC094
  c->r[29]=c->r[29]+0x00000004u; // 801EC098
  cmps(c,0,(int32_t)c->r[30],2); // 801EC09C
  if (crb(c,0)) { IRQCHK(c); goto L_801EC06C; } // 801EC0A0
  c->r[3]=0u+0x80310000u; // 801EC0A4
  c->r[3]=c->r[3]+0xFFFF8818u; // 801EC0A8
  c->r[12]=R32(c->r[3]+0x0000191Cu); // 801EC0AC
  cmps(c,0,(int32_t)c->r[12],0); // 801EC0B0
  if (crb(c,2)) { goto L_801EC0D0; } // 801EC0B4
  c->r[3]=c->r[31]+0x0000001Cu; // 801EC0B8
  c->r[4]=c->r[31]+0x00000022u; // 801EC0BC
  c->r[5]=c->r[31]+0x00000035u; // 801EC0C0
  c->r[6]=0u+0x00000000u; // 801EC0C4
  c->ctr=c->r[12]; // 801EC0C8
  if (true) { c->lr=0x801EC0D0u; dispatch(c,c->ctr); } // 801EC0CC
L_801EC0D0:;
  c->r[5]=R8(c->r[31]+0x00000081u); // 801EC0D0
  c->r[0]=0u+0xFFFFFFAFu; // 801EC0D4
  c->r[3]=c->r[28]|c->r[28]; // 801EC0D8
  c->r[4]=0u+0x00000013u; // 801EC0DC
  c->r[0]=c->r[5]&c->r[0]; // 801EC0E0
  W8(c->r[31]+0x00000081u,c->r[0]); // 801EC0E4
  c->lr=0x801EC0ECu; f_801EF8F4(c); // 801EC0E8
  goto L_801EC1C4; // 801EC0EC
L_801EC0F0:;
  W16(c->r[31]+0x00000018u,c->r[28]); // 801EC0F0
  cmps(c,0,(int32_t)c->r[30],0); // 801EC0F4
  c->r[0]=R8(c->r[31]+0x00000076u); // 801EC0F8
  c->r[0]=rotl(c->r[0],0)&0x000000F8u; // 801EC0FC
  W8(c->r[31]+0x00000076u,c->r[0]); // 801EC100
  if (crb(c,2)) { goto L_801EC114; } // 801EC104
  c->r[0]=R8(c->r[31]+0x00000076u); // 801EC108
  c->r[0]=c->r[0]|0x00000006u; // 801EC10C
  W8(c->r[31]+0x00000076u,c->r[0]); // 801EC110
L_801EC114:;
  c->r[3]=0u+0x80310000u; // 801EC114
  c->r[3]=c->r[3]+0xFFFF8818u; // 801EC118
  c->r[0]=R8(c->r[3]+0x00001978u); // 801EC11C
  cmpu(c,0,c->r[0],0x00000003u); // 801EC120
  if (!crb(c,2)) { goto L_801EC134; } // 801EC124
  c->r[0]=R8(c->r[31]+0x00000076u); // 801EC128
  c->r[0]=c->r[0]|0x00000002u; // 801EC12C
  W8(c->r[31]+0x00000076u,c->r[0]); // 801EC130
L_801EC134:;
  c->r[0]=0u+0x00000000u; // 801EC134
  W8(c->r[31]+0x00000084u,c->r[0]); // 801EC138
  c->r[0]=R8(c->r[31]+0x00000076u); // 801EC13C
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 801EC140
  if (crb(c,2)) { goto L_801EC154; } // 801EC144
  c->r[0]=R8(c->r[31]+0x00000080u); // 801EC148
  cmps(c,0,(int32_t)c->r[0],0); // 801EC14C
  if (crb(c,2)) { goto L_801EC1C4; } // 801EC150
L_801EC154:;
  c->r[3]=c->r[31]|c->r[31]; // 801EC154
  c->lr=0x801EC15Cu; f_801ECAD0(c); // 801EC158
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801EC15C
  c->r[4]=c->r[3]|c->r[3]; // 801EC160
  cmpu(c,0,c->r[0],0x00000001u); // 801EC164
  if (crb(c,2)) { goto L_801EC1C4; } // 801EC168
  c->r[0]=R32(c->r[31]+0x00000004u); // 801EC16C
  cmps(c,0,(int32_t)c->r[0],0); // 801EC170
  if (crb(c,2)) { goto L_801EC1C4; } // 801EC174
  c->r[0]=R8(c->r[31]+0x00000080u); // 801EC178
  cmps(c,0,(int32_t)c->r[0],0); // 801EC17C
  if (crb(c,2)) { goto L_801EC1A4; } // 801EC180
  c->r[3]=R32(c->r[31]+0x00000000u); // 801EC184
  cmps(c,0,(int32_t)c->r[3],0); // 801EC188
  if (crb(c,2)) { goto L_801EC1A4; } // 801EC18C
  c->r[0]=R32(c->r[3]+0x00000000u); // 801EC190
  cmpu(c,0,c->r[0],0x00000003u); // 801EC194
  if (!crb(c,2)) { goto L_801EC1A4; } // 801EC198
  c->r[0]=0u+0x00000000u; // 801EC19C
  W32(c->r[3]+0x00000004u,c->r[0]); // 801EC1A0
L_801EC1A4:;
  c->r[12]=R32(c->r[31]+0x00000004u); // 801EC1A4
  c->r[5]=rotl(c->r[4],0)&0x000000FFu; // 801EC1A8
  c->r[3]=c->r[31]+0x0000001Cu; // 801EC1AC
  c->r[4]=R32(c->r[31]+0x00000008u); // 801EC1B0
  c->ctr=c->r[12]; // 801EC1B4
  if (true) { c->lr=0x801EC1BCu; dispatch(c,c->ctr); } // 801EC1B8
  c->r[0]=0u+0x00000000u; // 801EC1BC
  W32(c->r[31]+0x00000004u,c->r[0]); // 801EC1C0
L_801EC1C4:;
  c->r[11]=c->r[1]+0x00000020u; // 801EC1C4
  c->lr=0x801EC1CCu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801EC1C8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EC1CC
  c->lr=c->r[0]; // 801EC1D0
  c->r[1]=c->r[1]+0x00000020u; // 801EC1D4
  return; // 801EC1D8
}

// btm_sec_disconnect
void f_801EC1DC(Ctx* __restrict c) {
  trace_call(0x801EC1DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EC1DC
  c->r[0]=c->lr; // 801EC1E0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EC1E4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801EC1E8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801EC1EC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801EC1F0
  c->r[29]=c->r[4]|c->r[4]; // 801EC1F4
  W32(c->r[1]+0x00000010u,c->r[28]); // 801EC1F8
  c->r[28]=c->r[3]|c->r[3]; // 801EC1FC
  c->lr=0x801EC204u; f_801E4DC8(c); // 801EC200
  cmps(c,0,(int32_t)c->r[3],0); // 801EC204
  c->r[31]=c->r[3]|c->r[3]; // 801EC208
  if (!crb(c,2)) { goto L_801EC218; } // 801EC20C
  c->r[3]=0u+0x00000005u; // 801EC210
  goto L_801EC278; // 801EC214
L_801EC218:;
  c->r[0]=R8(c->r[3]+0x00000081u); // 801EC218
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 801EC21C
  if (crb(c,2)) { goto L_801EC238; } // 801EC220
  c->r[4]=0u+0x80310000u; // 801EC224
  c->r[3]=0u+0x00000000u; // 801EC228
  c->r[4]=c->r[4]+0xFFFF8818u; // 801EC22C
  W8(c->r[4]+0x0000197Eu,c->r[29]); // 801EC230
  goto L_801EC278; // 801EC234
L_801EC238:;
  c->r[30]=R8(c->r[3]+0x0000007Fu); // 801EC238
  cmpu(c,0,c->r[30],0x00000005u); // 801EC23C
  if (!crb(c,2)) { goto L_801EC24C; } // 801EC240
  c->r[3]=0u+0x00000001u; // 801EC244
  goto L_801EC278; // 801EC248
L_801EC24C:;
  c->r[0]=0u+0x00000005u; // 801EC24C
  c->r[4]=c->r[29]|c->r[29]; // 801EC250
  W8(c->r[3]+0x0000007Fu,c->r[0]); // 801EC254
  c->r[3]=c->r[28]|c->r[28]; // 801EC258
  c->lr=0x801EC260u; f_801EF8F4(c); // 801EC25C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801EC260
  if (crb(c,2)) { goto L_801EC270; } // 801EC264
  c->r[3]=0u+0x00000001u; // 801EC268
  goto L_801EC278; // 801EC26C
L_801EC270:;
  W8(c->r[31]+0x0000007Fu,c->r[30]); // 801EC270
  c->r[3]=0u+0x00000003u; // 801EC274
L_801EC278:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EC278
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801EC27C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801EC280
  c->r[29]=R32(c->r[1]+0x00000014u); // 801EC284
  c->r[28]=R32(c->r[1]+0x00000010u); // 801EC288
  c->lr=c->r[0]; // 801EC28C
  c->r[1]=c->r[1]+0x00000020u; // 801EC290
  return; // 801EC294
}

// btm_sec_disconnected
void f_801EC298(Ctx* __restrict c) {
  trace_call(0x801EC298u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EC298
  c->r[0]=c->lr; // 801EC29C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EC2A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EC2A4
  c->r[31]=c->r[4]|c->r[4]; // 801EC2A8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801EC2AC
  c->lr=0x801EC2B4u; f_801E4DC8(c); // 801EC2B0
  cmps(c,0,(int32_t)c->r[3],0); // 801EC2B4
  c->r[30]=c->r[3]|c->r[3]; // 801EC2B8
  if (crb(c,2)) { goto L_801EC3BC; } // 801EC2BC
  c->r[0]=R8(c->r[3]+0x00000081u); // 801EC2C0
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 801EC2C4
  if (crb(c,2)) { goto L_801EC31C; } // 801EC2C8
  c->r[4]=0u+0x80310000u; // 801EC2CC
  c->r[4]=c->r[4]+0xFFFF8818u; // 801EC2D0
  c->r[12]=R32(c->r[4]+0x0000191Cu); // 801EC2D4
  cmps(c,0,(int32_t)c->r[12],0); // 801EC2D8
  if (crb(c,2)) { goto L_801EC31C; } // 801EC2DC
  cmpu(c,0,c->r[31],0x00000017u); // 801EC2E0
  if (!crb(c,2)) { goto L_801EC304; } // 801EC2E4
  c->r[4]=c->r[3]+0x00000022u; // 801EC2E8
  c->r[5]=c->r[3]+0x00000035u; // 801EC2EC
  c->r[6]=0u+0x00000017u; // 801EC2F0
  c->ctr=c->r[12]; // 801EC2F4
  c->r[3]=c->r[3]+0x0000001Cu; // 801EC2F8
  if (true) { c->lr=0x801EC300u; dispatch(c,c->ctr); } // 801EC2FC
  goto L_801EC31C; // 801EC300
L_801EC304:;
  c->r[4]=c->r[3]+0x00000022u; // 801EC304
  c->r[5]=c->r[3]+0x00000035u; // 801EC308
  c->r[6]=0u+0x00000005u; // 801EC30C
  c->ctr=c->r[12]; // 801EC310
  c->r[3]=c->r[3]+0x0000001Cu; // 801EC314
  if (true) { c->lr=0x801EC31Cu; dispatch(c,c->ctr); } // 801EC318
L_801EC31C:;
  c->r[31]=0u+0x80310000u; // 801EC31C
  c->r[31]=c->r[31]+0xFFFF8818u; // 801EC320
  c->r[0]=R32(c->r[31]+0x0000194Cu); // 801EC324
  cmps(c,0,(int32_t)c->r[0],0); // 801EC328
  if (crb(c,2)) { goto L_801EC38C; } // 801EC32C
  c->r[3]=c->r[31]+0x00001954u; // 801EC330
  c->r[4]=c->r[30]+0x0000001Cu; // 801EC334
  c->r[5]=0u+0x00000006u; // 801EC338
  c->lr=0x801EC340u; f_8020BD24(c); // 801EC33C
  cmps(c,0,(int32_t)c->r[3],0); // 801EC340
  if (!crb(c,2)) { goto L_801EC38C; } // 801EC344
  c->r[3]=c->r[31]+0x0000193Cu; // 801EC348
  c->lr=0x801EC350u; f_801DCDB0(c); // 801EC34C
  c->r[0]=0u+0x00000000u; // 801EC350
  c->r[3]=c->r[31]+0x00001954u; // 801EC354
  W32(c->r[31]+0x0000194Cu,c->r[0]); // 801EC358
  c->r[4]=0u+0x000000FFu; // 801EC35C
  c->r[5]=0u+0x00000006u; // 801EC360
  c->lr=0x801EC368u; f_800046B4(c); // 801EC364
  c->r[12]=R32(c->r[31]+0x0000191Cu); // 801EC368
  cmps(c,0,(int32_t)c->r[12],0); // 801EC36C
  if (crb(c,2)) { goto L_801EC38C; } // 801EC370
  c->r[3]=c->r[30]+0x0000001Cu; // 801EC374
  c->r[4]=c->r[30]+0x00000022u; // 801EC378
  c->r[5]=c->r[30]+0x00000035u; // 801EC37C
  c->r[6]=0u+0x0000000Eu; // 801EC380
  c->ctr=c->r[12]; // 801EC384
  if (true) { c->lr=0x801EC38Cu; dispatch(c,c->ctr); } // 801EC388
L_801EC38C:;
  c->r[4]=0u+0x00010000u; // 801EC38C
  c->r[3]=0u+0x00000000u; // 801EC390
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801EC394
  W16(c->r[30]+0x00000018u,c->r[0]); // 801EC398
  W8(c->r[30]+0x0000007Fu,c->r[3]); // 801EC39C
  c->r[0]=R8(c->r[30]+0x00000076u); // 801EC3A0
  c->r[0]=rotl(c->r[0],0)&0x000000F8u; // 801EC3A4
  W8(c->r[30]+0x00000076u,c->r[0]); // 801EC3A8
  c->r[0]=R8(c->r[30]+0x00000081u); // 801EC3AC
  c->r[0]=rotl(c->r[0],0)&0x00000080u; // 801EC3B0
  W8(c->r[30]+0x00000081u,c->r[0]); // 801EC3B4
  W32(c->r[30]+0x00000004u,c->r[3]); // 801EC3B8
L_801EC3BC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EC3BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EC3C0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801EC3C4
  c->lr=c->r[0]; // 801EC3C8
  c->r[1]=c->r[1]+0x00000010u; // 801EC3CC
  return; // 801EC3D0
}

// btm_sec_link_key_notification
void f_801EC3D4(Ctx* __restrict c) {
  trace_call(0x801EC3D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EC3D4
  c->r[0]=c->lr; // 801EC3D8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EC3DC
  c->r[11]=c->r[1]+0x00000020u; // 801EC3E0
  c->lr=0x801EC3E8u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801EC3E4
  c->r[29]=c->r[3]|c->r[3]; // 801EC3E8
  c->r[30]=c->r[4]|c->r[4]; // 801EC3EC
  c->r[27]=c->r[5]|c->r[5]; // 801EC3F0
  c->lr=0x801EC3F8u; f_801E4E80(c); // 801EC3F4
  cmps(c,0,(int32_t)c->r[3],0); // 801EC3F8
  c->r[31]=c->r[3]|c->r[3]; // 801EC3FC
  if (!crb(c,2)) { goto L_801EC418; } // 801EC400
  c->r[3]=c->r[29]|c->r[29]; // 801EC404
  c->lr=0x801EC40Cu; f_801E4CA8(c); // 801EC408
  cmps(c,0,(int32_t)c->r[3],0); // 801EC40C
  c->r[31]=c->r[3]|c->r[3]; // 801EC410
  if (crb(c,2)) { goto L_801EC568; } // 801EC414
L_801EC418:;
  c->r[3]=0u+0x80310000u; // 801EC418
  c->r[3]=c->r[3]+0xFFFF8818u; // 801EC41C
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801EC420
  cmpu(c,0,c->r[0],0x00000004u); // 801EC424
  if (crb(c,0)) { goto L_801EC458; } // 801EC428
  c->r[3]=0u+0x000D0000u; // 801EC42C
  c->r[4]=0u+0x80280000u; // 801EC430
  c->r[5]=R8(c->r[29]+0x00000000u); // 801EC434
  c->r[3]=c->r[3]+0x00000003u; // 801EC438
  c->r[6]=R8(c->r[29]+0x00000001u); // 801EC43C
  c->r[4]=c->r[4]+0x00000050u; // 801EC440
  c->r[7]=R8(c->r[29]+0x00000002u); // 801EC444
  c->r[8]=R8(c->r[29]+0x00000003u); // 801EC448
  c->r[9]=R8(c->r[29]+0x00000004u); // 801EC44C
  c->r[10]=R8(c->r[29]+0x00000005u); // 801EC450
  c->lr=0x801EC458u; f_801DC7F0(c); // 801EC454
L_801EC458:;
  c->r[3]=0u+0x80310000u; // 801EC458
  c->r[3]=c->r[3]+0xFFFF8818u; // 801EC45C
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801EC460
  cmpu(c,0,c->r[0],0x00000004u); // 801EC464
  if (crb(c,0)) { goto L_801EC484; } // 801EC468
  c->r[3]=0u+0x000D0000u; // 801EC46C
  c->r[4]=0u+0x80280000u; // 801EC470
  c->r[5]=c->r[27]|c->r[27]; // 801EC474
  c->r[3]=c->r[3]+0x00000003u; // 801EC478
  c->r[4]=c->r[4]+0x00000094u; // 801EC47C
  c->lr=0x801EC484u; f_801DC750(c); // 801EC480
L_801EC484:;
  c->r[3]=0u+0x80310000u; // 801EC484
  c->r[3]=c->r[3]+0xFFFF8818u; // 801EC488
  c->r[0]=R8(c->r[3]+0x00000636u); // 801EC48C
  cmpu(c,0,c->r[0],0x00000001u); // 801EC490
  if (!crb(c,0)) { goto L_801EC4A4; } // 801EC494
  c->r[0]=0u+0x000000FFu; // 801EC498
  W8(c->r[31]+0x00000083u,c->r[0]); // 801EC49C
  goto L_801EC4A8; // 801EC4A0
L_801EC4A4:;
  W8(c->r[31]+0x00000083u,c->r[27]); // 801EC4A4
L_801EC4A8:;
  c->r[0]=R8(c->r[31]+0x00000076u); // 801EC4A8
  c->r[4]=c->r[30]|c->r[30]; // 801EC4AC
  c->r[3]=c->r[31]+0x00000025u; // 801EC4B0
  c->r[5]=0u+0x00000010u; // 801EC4B4
  c->r[0]=c->r[0]|0x00000010u; // 801EC4B8
  W8(c->r[31]+0x00000076u,c->r[0]); // 801EC4BC
  c->lr=0x801EC4C4u; f_80004364(c); // 801EC4C0
  c->r[0]=R8(c->r[31]+0x00000076u); // 801EC4C4
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 801EC4C8
  if (crb(c,2)) { goto L_801EC4E8; } // 801EC4CC
  c->r[0]=R8(c->r[31]+0x00000081u); // 801EC4D0
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 801EC4D4
  if (crb(c,2)) { goto L_801EC4F4; } // 801EC4D8
  c->r[0]=R8(c->r[31]+0x00000085u); // 801EC4DC
  cmps(c,0,(int32_t)c->r[0],0); // 801EC4E0
  if (!crb(c,2)) { goto L_801EC4F4; } // 801EC4E4
L_801EC4E8:;
  c->r[0]=0u+0x00000001u; // 801EC4E8
  W8(c->r[31]+0x00000082u,c->r[0]); // 801EC4EC
  goto L_801EC568; // 801EC4F0
L_801EC4F4:;
  c->r[3]=0u+0x80310000u; // 801EC4F4
  c->r[3]=c->r[3]+0xFFFF8818u; // 801EC4F8
  c->r[12]=R32(c->r[3]+0x00001914u); // 801EC4FC
  cmps(c,0,(int32_t)c->r[12],0); // 801EC500
  if (crb(c,2)) { goto L_801EC524; } // 801EC504
  c->r[3]=c->r[29]|c->r[29]; // 801EC508
  c->r[6]=c->r[30]|c->r[30]; // 801EC50C
  c->r[4]=c->r[31]+0x00000022u; // 801EC510
  c->r[5]=c->r[31]+0x00000035u; // 801EC514
  c->r[7]=R8(c->r[31]+0x00000083u); // 801EC518
  c->ctr=c->r[12]; // 801EC51C
  if (true) { c->lr=0x801EC524u; dispatch(c,c->ctr); } // 801EC520
L_801EC524:;
  c->r[28]=0u+0x80310000u; // 801EC524
  c->r[27]=0u+0x00000000u; // 801EC528
  c->r[28]=c->r[28]+0xFFFF8818u; // 801EC52C
L_801EC530:;
  c->r[12]=R32(c->r[28]+0x00001924u); // 801EC530
  cmps(c,0,(int32_t)c->r[12],0); // 801EC534
  if (crb(c,2)) { goto L_801EC558; } // 801EC538
  c->r[3]=c->r[29]|c->r[29]; // 801EC53C
  c->r[6]=c->r[30]|c->r[30]; // 801EC540
  c->r[4]=c->r[31]+0x00000022u; // 801EC544
  c->r[5]=c->r[31]+0x00000035u; // 801EC548
  c->r[7]=R8(c->r[31]+0x00000083u); // 801EC54C
  c->ctr=c->r[12]; // 801EC550
  if (true) { c->lr=0x801EC558u; dispatch(c,c->ctr); } // 801EC554
L_801EC558:;
  c->r[27]=c->r[27]+0x00000001u; // 801EC558
  c->r[28]=c->r[28]+0x00000004u; // 801EC55C
  cmps(c,0,(int32_t)c->r[27],2); // 801EC560
  if (crb(c,0)) { IRQCHK(c); goto L_801EC530; } // 801EC564
L_801EC568:;
  c->r[11]=c->r[1]+0x00000020u; // 801EC568
  c->lr=0x801EC570u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801EC56C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EC570
  c->lr=c->r[0]; // 801EC574
  c->r[1]=c->r[1]+0x00000020u; // 801EC578
  return; // 801EC57C
}

// btm_sec_link_key_request
void f_801EC580(Ctx* __restrict c) {
  trace_call(0x801EC580u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EC580
  c->r[0]=c->lr; // 801EC584
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EC588
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801EC58C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801EC590
  c->r[30]=c->r[3]|c->r[3]; // 801EC594
  c->lr=0x801EC59Cu; f_801E4E80(c); // 801EC598
  c->r[4]=0u+0x80310000u; // 801EC59C
  c->r[31]=c->r[3]|c->r[3]; // 801EC5A0
  c->r[4]=c->r[4]+0xFFFF8818u; // 801EC5A4
  c->r[0]=R8(c->r[4]+0x000027C0u); // 801EC5A8
  cmpu(c,0,c->r[0],0x00000004u); // 801EC5AC
  if (crb(c,0)) { goto L_801EC5E0; } // 801EC5B0
  c->r[3]=0u+0x000D0000u; // 801EC5B4
  c->r[4]=0u+0x80280000u; // 801EC5B8
  c->r[5]=R8(c->r[30]+0x00000000u); // 801EC5BC
  c->r[3]=c->r[3]+0x00000003u; // 801EC5C0
  c->r[6]=R8(c->r[30]+0x00000001u); // 801EC5C4
  c->r[4]=c->r[4]+0x000000C0u; // 801EC5C8
  c->r[7]=R8(c->r[30]+0x00000002u); // 801EC5CC
  c->r[8]=R8(c->r[30]+0x00000003u); // 801EC5D0
  c->r[9]=R8(c->r[30]+0x00000004u); // 801EC5D4
  c->r[10]=R8(c->r[30]+0x00000005u); // 801EC5D8
  c->lr=0x801EC5E0u; f_801DC7F0(c); // 801EC5DC
L_801EC5E0:;
  cmps(c,0,(int32_t)c->r[31],0); // 801EC5E0
  if (crb(c,2)) { goto L_801EC604; } // 801EC5E4
  c->r[0]=R8(c->r[31]+0x00000076u); // 801EC5E8
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 801EC5EC
  if (crb(c,2)) { goto L_801EC604; } // 801EC5F0
  c->r[3]=c->r[30]|c->r[30]; // 801EC5F4
  c->r[4]=c->r[31]+0x00000025u; // 801EC5F8
  c->lr=0x801EC600u; f_801EFAC4(c); // 801EC5FC
  goto L_801EC698; // 801EC600
L_801EC604:;
  cmps(c,0,(int32_t)c->r[31],0); // 801EC604
  if (!crb(c,2)) { goto L_801EC618; } // 801EC608
  c->r[3]=c->r[30]|c->r[30]; // 801EC60C
  c->lr=0x801EC614u; f_801E4CA8(c); // 801EC610
  c->r[31]=c->r[3]|c->r[3]; // 801EC614
L_801EC618:;
  c->r[0]=R8(c->r[31]+0x00000081u); // 801EC618
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 801EC61C
  if (!crb(c,2)) { goto L_801EC690; } // 801EC620
  c->r[3]=0u+0x80310000u; // 801EC624
  c->r[3]=c->r[3]+0xFFFF8818u; // 801EC628
  c->r[12]=R32(c->r[3]+0x00001918u); // 801EC62C
  cmps(c,0,(int32_t)c->r[12],0); // 801EC630
  if (crb(c,2)) { goto L_801EC690; } // 801EC634
  cmps(c,0,(int32_t)c->r[31],0); // 801EC638
  if (crb(c,2)) { goto L_801EC668; } // 801EC63C
  c->r[3]=c->r[30]|c->r[30]; // 801EC640
  c->r[4]=c->r[31]+0x00000025u; // 801EC644
  c->ctr=c->r[12]; // 801EC648
  if (true) { c->lr=0x801EC650u; dispatch(c,c->ctr); } // 801EC64C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801EC650
  if (!crb(c,2)) { goto L_801EC690; } // 801EC654
  c->r[3]=c->r[30]|c->r[30]; // 801EC658
  c->r[4]=c->r[31]+0x00000025u; // 801EC65C
  c->lr=0x801EC664u; f_801EFAC4(c); // 801EC660
  goto L_801EC698; // 801EC664
L_801EC668:;
  c->r[3]=c->r[30]|c->r[30]; // 801EC668
  c->r[4]=c->r[1]+0x00000008u; // 801EC66C
  c->ctr=c->r[12]; // 801EC670
  if (true) { c->lr=0x801EC678u; dispatch(c,c->ctr); } // 801EC674
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801EC678
  if (!crb(c,2)) { goto L_801EC690; } // 801EC67C
  c->r[3]=c->r[30]|c->r[30]; // 801EC680
  c->r[4]=c->r[1]+0x00000008u; // 801EC684
  c->lr=0x801EC68Cu; f_801EFAC4(c); // 801EC688
  goto L_801EC698; // 801EC68C
L_801EC690:;
  c->r[3]=c->r[30]|c->r[30]; // 801EC690
  c->lr=0x801EC698u; f_801EFC64(c); // 801EC694
L_801EC698:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EC698
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801EC69C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801EC6A0
  c->lr=c->r[0]; // 801EC6A4
  c->r[1]=c->r[1]+0x00000020u; // 801EC6A8
  return; // 801EC6AC
}

// btm_sec_pin_code_request_timeout
void f_801EC6B0(Ctx* __restrict c) {
  trace_call(0x801EC6B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EC6B0
  c->r[0]=c->lr; // 801EC6B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EC6B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EC6BC
  c->r[31]=0u+0x80310000u; // 801EC6C0
  c->r[31]=c->r[31]+0xFFFF8818u; // 801EC6C4
  c->r[0]=R8(c->r[31]+0x000027C0u); // 801EC6C8
  cmpu(c,0,c->r[0],0x00000004u); // 801EC6CC
  if (crb(c,0)) { goto L_801EC6E8; } // 801EC6D0
  c->r[3]=0u+0x000D0000u; // 801EC6D4
  c->r[4]=0u+0x80280000u; // 801EC6D8
  c->r[3]=c->r[3]+0x00000003u; // 801EC6DC
  c->r[4]=c->r[4]+0x00000100u; // 801EC6E0
  c->lr=0x801EC6E8u; f_801DC730(c); // 801EC6E4
L_801EC6E8:;
  c->r[0]=0u+0x00000000u; // 801EC6E8
  c->r[3]=0u+0x80310000u; // 801EC6EC
  c->r[3]=c->r[3]+0xFFFF8818u; // 801EC6F0
  W32(c->r[31]+0x0000194Cu,c->r[0]); // 801EC6F4
  c->r[3]=c->r[3]+0x00001954u; // 801EC6F8
  c->r[4]=0u+0x000000FFu; // 801EC6FC
  c->r[5]=0u+0x00000006u; // 801EC700
  c->lr=0x801EC708u; f_800046B4(c); // 801EC704
  c->r[3]=c->r[31]+0x000027B4u; // 801EC708
  c->lr=0x801EC710u; f_801EFEE8(c); // 801EC70C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EC710
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EC714
  c->lr=c->r[0]; // 801EC718
  c->r[1]=c->r[1]+0x00000010u; // 801EC71C
  return; // 801EC720
}

// btm_sec_pin_code_request
void f_801EC724(Ctx* __restrict c) {
  trace_call(0x801EC724u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EC724
  c->r[0]=c->lr; // 801EC728
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EC72C
  c->r[11]=c->r[1]+0x00000020u; // 801EC730
  c->lr=0x801EC738u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801EC734
  c->r[29]=0u+0x80310000u; // 801EC738
  c->r[31]=0u+0x80280000u; // 801EC73C
  c->r[29]=c->r[29]+0xFFFF8818u; // 801EC740
  c->r[27]=c->r[3]|c->r[3]; // 801EC744
  c->r[0]=R8(c->r[29]+0x000027C0u); // 801EC748
  c->r[31]=c->r[31]+0xFFFFF968u; // 801EC74C
  c->r[28]=0u+0x00000000u; // 801EC750
  c->r[30]=0u+0x00000000u; // 801EC754
  cmpu(c,0,c->r[0],0x00000004u); // 801EC758
  if (crb(c,0)) { goto L_801EC788; } // 801EC75C
  c->r[3]=0u+0x000D0000u; // 801EC760
  c->r[5]=R8(c->r[27]+0x00000000u); // 801EC764
  c->r[6]=R8(c->r[27]+0x00000001u); // 801EC768
  c->r[3]=c->r[3]+0x00000003u; // 801EC76C
  c->r[7]=R8(c->r[27]+0x00000002u); // 801EC770
  c->r[4]=c->r[31]+0x000007BCu; // 801EC774
  c->r[8]=R8(c->r[27]+0x00000003u); // 801EC778
  c->r[9]=R8(c->r[27]+0x00000004u); // 801EC77C
  c->r[10]=R8(c->r[27]+0x00000005u); // 801EC780
  c->lr=0x801EC788u; f_801DC7F0(c); // 801EC784
L_801EC788:;
  c->r[0]=R8(c->r[29]+0x00001979u); // 801EC788
  cmps(c,0,(int32_t)c->r[0],0); // 801EC78C
  if (!crb(c,2)) { goto L_801EC874; } // 801EC790
  c->r[0]=R8(c->r[29]+0x00000020u); // 801EC794
  cmpu(c,0,c->r[0],0x00000001u); // 801EC798
  if (!crb(c,2)) { goto L_801EC874; } // 801EC79C
  c->r[3]=c->r[27]|c->r[27]; // 801EC7A0
  c->lr=0x801EC7A8u; f_801E4E80(c); // 801EC7A4
  cmps(c,0,(int32_t)c->r[3],0); // 801EC7A8
  if (!crb(c,2)) { goto L_801EC84C; } // 801EC7AC
  c->r[3]=0u+0x80310000u; // 801EC7B0
  c->r[0]=0u+0x00000002u; // 801EC7B4
  c->r[3]=c->r[3]+0xFFFF8818u; // 801EC7B8
  c->r[3]=c->r[3]+0x00001F30u; // 801EC7BC
  c->ctr=c->r[0]; // 801EC7C0
L_801EC7C4:;
  c->r[0]=R8(c->r[3]+0x00000076u); // 801EC7C4
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801EC7C8
  if (crb(c,2)) { goto L_801EC84C; } // 801EC7CC
  c->r[0]=R8(c->r[3]+0x000000FEu); // 801EC7D0
  c->r[30]=c->r[30]+0x00000001u; // 801EC7D4
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801EC7D8
  if (crb(c,2)) { goto L_801EC84C; } // 801EC7DC
  c->r[0]=R8(c->r[3]+0x00000186u); // 801EC7E0
  c->r[30]=c->r[30]+0x00000001u; // 801EC7E4
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801EC7E8
  if (crb(c,2)) { goto L_801EC84C; } // 801EC7EC
  c->r[0]=R8(c->r[3]+0x0000020Eu); // 801EC7F0
  c->r[30]=c->r[30]+0x00000001u; // 801EC7F4
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801EC7F8
  if (crb(c,2)) { goto L_801EC84C; } // 801EC7FC
  c->r[0]=R8(c->r[3]+0x00000296u); // 801EC800
  c->r[30]=c->r[30]+0x00000001u; // 801EC804
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801EC808
  if (crb(c,2)) { goto L_801EC84C; } // 801EC80C
  c->r[0]=R8(c->r[3]+0x0000031Eu); // 801EC810
  c->r[30]=c->r[30]+0x00000001u; // 801EC814
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801EC818
  if (crb(c,2)) { goto L_801EC84C; } // 801EC81C
  c->r[0]=R8(c->r[3]+0x000003A6u); // 801EC820
  c->r[30]=c->r[30]+0x00000001u; // 801EC824
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801EC828
  if (crb(c,2)) { goto L_801EC84C; } // 801EC82C
  c->r[0]=R8(c->r[3]+0x0000042Eu); // 801EC830
  c->r[30]=c->r[30]+0x00000001u; // 801EC834
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801EC838
  if (crb(c,2)) { goto L_801EC84C; } // 801EC83C
  c->r[30]=c->r[30]+0x00000001u; // 801EC840
  c->r[3]=c->r[3]+0x00000440u; // 801EC844
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801EC7C4; } // 801EC848
L_801EC84C:;
  cmps(c,0,(int32_t)c->r[30],16); // 801EC84C
  if (crb(c,0)) { goto L_801EC860; } // 801EC850
  c->r[3]=c->r[27]|c->r[27]; // 801EC854
  c->lr=0x801EC85Cu; f_801EFEE8(c); // 801EC858
  goto L_801ECA68; // 801EC85C
L_801EC860:;
  c->r[4]=R8(c->r[29]+0x00000021u); // 801EC860
  c->r[3]=c->r[27]|c->r[27]; // 801EC864
  c->r[5]=c->r[29]+0x00000022u; // 801EC868
  c->lr=0x801EC870u; f_801EFD04(c); // 801EC86C
  goto L_801ECA68; // 801EC870
L_801EC874:;
  c->r[3]=c->r[27]|c->r[27]; // 801EC874
  c->lr=0x801EC87Cu; f_801E4E80(c); // 801EC878
  cmps(c,0,(int32_t)c->r[3],0); // 801EC87C
  c->r[30]=c->r[3]|c->r[3]; // 801EC880
  if (!crb(c,2)) { goto L_801EC894; } // 801EC884
  c->r[3]=c->r[27]|c->r[27]; // 801EC888
  c->lr=0x801EC890u; f_801E4CA8(c); // 801EC88C
  c->r[30]=c->r[3]|c->r[3]; // 801EC890
L_801EC894:;
  c->r[3]=0u+0x80310000u; // 801EC894
  c->r[4]=c->r[27]|c->r[27]; // 801EC898
  c->r[3]=c->r[3]+0xFFFF8818u; // 801EC89C
  c->r[5]=0u+0x00000006u; // 801EC8A0
  c->r[3]=c->r[3]+0x00001954u; // 801EC8A4
  c->lr=0x801EC8ACu; f_80004364(c); // 801EC8A8
  cmps(c,0,(int32_t)c->r[30],0); // 801EC8AC
  if (crb(c,2)) { goto L_801ECA24; } // 801EC8B0
  c->r[3]=c->r[27]|c->r[27]; // 801EC8B4
  c->r[4]=c->r[29]+0x000027B4u; // 801EC8B8
  c->r[5]=0u+0x00000006u; // 801EC8BC
  c->lr=0x801EC8C4u; f_8020BD24(c); // 801EC8C0
  cmps(c,0,(int32_t)c->r[3],0); // 801EC8C4
  if (!crb(c,2)) { goto L_801EC8DC; } // 801EC8C8
  c->r[3]=c->r[30]+0x00000022u; // 801EC8CC
  c->r[4]=c->r[29]+0x000027BAu; // 801EC8D0
  c->r[5]=0u+0x00000003u; // 801EC8D4
  c->lr=0x801EC8DCu; f_80004364(c); // 801EC8D8
L_801EC8DC:;
  c->r[0]=R8(c->r[30]+0x00000081u); // 801EC8DC
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 801EC8E0
  if (crb(c,2)) { goto L_801EC984; } // 801EC8E4
  c->r[3]=0u+0x80310000u; // 801EC8E8
  c->r[3]=c->r[3]+0xFFFF8818u; // 801EC8EC
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801EC8F0
  cmpu(c,0,c->r[0],0x00000004u); // 801EC8F4
  if (crb(c,0)) { goto L_801EC90C; } // 801EC8F8
  c->r[3]=0u+0x000D0000u; // 801EC8FC
  c->r[4]=c->r[31]+0x000007FCu; // 801EC900
  c->r[3]=c->r[3]+0x00000003u; // 801EC904
  c->lr=0x801EC90Cu; f_801DC730(c); // 801EC908
L_801EC90C:;
  c->r[4]=R8(c->r[29]+0x0000197Fu); // 801EC90C
  c->r[3]=c->r[27]|c->r[27]; // 801EC910
  c->r[5]=c->r[29]+0x00001980u; // 801EC914
  c->lr=0x801EC91Cu; f_801EFD04(c); // 801EC918
  c->r[4]=0u+0x80310000u; // 801EC91C
  c->r[4]=c->r[4]+0xFFFF8818u; // 801EC920
  c->r[0]=R8(c->r[4]+0x0000197Bu); // 801EC924
  cmps(c,0,(int32_t)c->r[0],0); // 801EC928
  if (crb(c,2)) { goto L_801ECA28; } // 801EC92C
  c->r[0]=R8(c->r[4]+0x000027C0u); // 801EC930
  c->r[3]=0u+0x00000000u; // 801EC934
  W8(c->r[4]+0x0000197Bu,c->r[3]); // 801EC938
  cmpu(c,0,c->r[0],0x00000005u); // 801EC93C
  if (crb(c,0)) { goto L_801EC964; } // 801EC940
  c->r[5]=R8(c->r[4]+0x00001978u); // 801EC944
  c->r[3]=0u+0x000D0000u; // 801EC948
  c->r[3]=c->r[3]+0x00000004u; // 801EC94C
  c->r[4]=c->r[31]+0x0000082Cu; // 801EC950
  c->r[0]=c->r[5]+0xFFFFFFFDu; // 801EC954
  c->r[0]=cntlz(c->r[0]); // 801EC958
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 801EC95C
  c->lr=0x801EC964u; f_801DC750(c); // 801EC960
L_801EC964:;
  c->r[3]=0u+0x80310000u; // 801EC964
  c->r[3]=c->r[3]+0xFFFF8818u; // 801EC968
  c->r[3]=R8(c->r[3]+0x00001978u); // 801EC96C
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 801EC970
  c->r[0]=cntlz(c->r[0]); // 801EC974
  c->r[3]=rotl(c->r[0],27)&0x000000FFu; // 801EC978
  c->lr=0x801EC980u; f_801F125C(c); // 801EC97C
  goto L_801ECA28; // 801EC980
L_801EC984:;
  c->r[0]=R8(c->r[29]+0x00001979u); // 801EC984
  cmps(c,0,(int32_t)c->r[0],0); // 801EC988
  if (!crb(c,2)) { goto L_801EC9C4; } // 801EC98C
  c->r[0]=R32(c->r[29]+0x00001910u); // 801EC990
  cmps(c,0,(int32_t)c->r[0],0); // 801EC994
  if (crb(c,2)) { goto L_801EC9C4; } // 801EC998
  c->r[0]=R8(c->r[30]+0x00000080u); // 801EC99C
  cmps(c,0,(int32_t)c->r[0],0); // 801EC9A0
  if (!crb(c,2)) { goto L_801EC9CC; } // 801EC9A4
  c->r[0]=R8(c->r[30]+0x00000023u); // 801EC9A8
  c->r[0]=rotl(c->r[0],0)&0x0000001Fu; // 801EC9AC
  cmps(c,0,(int32_t)c->r[0],5); // 801EC9B0
  if (!crb(c,2)) { goto L_801EC9CC; } // 801EC9B4
  c->r[0]=R8(c->r[30]+0x00000024u); // 801EC9B8
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 801EC9BC
  if (crb(c,2)) { goto L_801EC9CC; } // 801EC9C0
L_801EC9C4:;
  c->r[28]=0u+0x00000001u; // 801EC9C4
  goto L_801ECA28; // 801EC9C8
L_801EC9CC:;
  c->r[4]=c->r[27]|c->r[27]; // 801EC9CC
  c->r[3]=c->r[29]+0x000027B4u; // 801EC9D0
  c->r[5]=0u+0x00000006u; // 801EC9D4
  c->lr=0x801EC9DCu; f_80004364(c); // 801EC9D8
  c->r[3]=c->r[29]+0x000027BAu; // 801EC9DC
  c->r[4]=c->r[30]+0x00000022u; // 801EC9E0
  c->r[5]=0u+0x00000003u; // 801EC9E4
  c->lr=0x801EC9ECu; f_80004364(c); // 801EC9E8
  c->r[5]=0u+0x801F0000u; // 801EC9EC
  c->r[3]=c->r[29]+0x0000193Cu; // 801EC9F0
  c->r[5]=c->r[5]+0xFFFFC6B0u; // 801EC9F4
  c->r[4]=0u+0x00000016u; // 801EC9F8
  W32(c->r[29]+0x0000194Cu,c->r[5]); // 801EC9FC
  c->r[5]=0u+0x0000003Cu; // 801ECA00
  c->lr=0x801ECA08u; f_801DCD40(c); // 801ECA04
  c->r[12]=R32(c->r[29]+0x00001910u); // 801ECA08
  c->r[3]=c->r[27]|c->r[27]; // 801ECA0C
  c->r[4]=c->r[30]+0x00000022u; // 801ECA10
  c->r[5]=c->r[30]+0x00000035u; // 801ECA14
  c->ctr=c->r[12]; // 801ECA18
  if (true) { c->lr=0x801ECA20u; dispatch(c,c->ctr); } // 801ECA1C
  goto L_801ECA28; // 801ECA20
L_801ECA24:;
  c->r[28]=0u+0x00000001u; // 801ECA24
L_801ECA28:;
  cmps(c,0,(int32_t)c->r[28],0); // 801ECA28
  if (crb(c,2)) { goto L_801ECA68; } // 801ECA2C
  c->r[3]=0u+0x80310000u; // 801ECA30
  c->r[3]=c->r[3]+0xFFFF8818u; // 801ECA34
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801ECA38
  cmpu(c,0,c->r[0],0x00000002u); // 801ECA3C
  if (crb(c,0)) { goto L_801ECA60; } // 801ECA40
  c->r[3]=0u+0x000D0000u; // 801ECA44
  c->r[5]=R8(c->r[29]+0x00001979u); // 801ECA48
  c->r[6]=R32(c->r[29]+0x00001910u); // 801ECA4C
  c->r[7]=c->r[30]|c->r[30]; // 801ECA50
  c->r[3]=c->r[3]+0x00000001u; // 801ECA54
  c->r[4]=c->r[31]+0x0000085Cu; // 801ECA58
  c->lr=0x801ECA60u; f_801DC790(c); // 801ECA5C
L_801ECA60:;
  c->r[3]=c->r[27]|c->r[27]; // 801ECA60
  c->lr=0x801ECA68u; f_801EFEE8(c); // 801ECA64
L_801ECA68:;
  c->r[11]=c->r[1]+0x00000020u; // 801ECA68
  c->lr=0x801ECA70u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801ECA6C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801ECA70
  c->lr=c->r[0]; // 801ECA74
  c->r[1]=c->r[1]+0x00000020u; // 801ECA78
  return; // 801ECA7C
}

// btm_sec_update_clock_offset
void f_801ECA80(Ctx* __restrict c) {
  trace_call(0x801ECA80u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ECA80
  c->r[0]=c->lr; // 801ECA84
  W32(c->r[1]+0x00000014u,c->r[0]); // 801ECA88
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801ECA8C
  c->r[31]=c->r[4]|c->r[4]; // 801ECA90
  c->lr=0x801ECA98u; f_801E4DC8(c); // 801ECA94
  cmps(c,0,(int32_t)c->r[3],0); // 801ECA98
  if (crb(c,2)) { goto L_801ECABC; } // 801ECA9C
  c->r[31]=c->r[31]|0x00008000u; // 801ECAA0
  W16(c->r[3]+0x0000001Au,c->r[31]); // 801ECAA4
  c->r[3]=c->r[3]+0x0000001Cu; // 801ECAA8
  c->lr=0x801ECAB0u; f_801E758C(c); // 801ECAAC
  cmps(c,0,(int32_t)c->r[3],0); // 801ECAB0
  if (crb(c,2)) { goto L_801ECABC; } // 801ECAB4
  W16(c->r[3]+0x00000000u,c->r[31]); // 801ECAB8
L_801ECABC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801ECABC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801ECAC0
  c->lr=c->r[0]; // 801ECAC4
  c->r[1]=c->r[1]+0x00000010u; // 801ECAC8
  return; // 801ECACC
}

// btm_sec_execute_procedure
void f_801ECAD0(Ctx* __restrict c) {
  trace_call(0x801ECAD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ECAD0
  c->r[0]=c->lr; // 801ECAD4
  c->r[4]=0u+0x80310000u; // 801ECAD8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801ECADC
  c->r[4]=c->r[4]+0xFFFF8818u; // 801ECAE0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801ECAE4
  c->r[31]=0u+0x80280000u; // 801ECAE8
  c->r[31]=c->r[31]+0xFFFFF968u; // 801ECAEC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801ECAF0
  c->r[30]=c->r[3]|c->r[3]; // 801ECAF4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801ECAF8
  c->r[0]=R8(c->r[4]+0x000027C0u); // 801ECAFC
  cmpu(c,0,c->r[0],0x00000004u); // 801ECB00
  if (crb(c,0)) { goto L_801ECB24; } // 801ECB04
  c->r[3]=0u+0x000D0000u; // 801ECB08
  c->r[5]=R8(c->r[30]+0x00000081u); // 801ECB0C
  c->r[6]=R8(c->r[30]+0x00000076u); // 801ECB10
  c->r[3]=c->r[3]+0x00000003u; // 801ECB14
  c->r[7]=R8(c->r[30]+0x0000007Fu); // 801ECB18
  c->r[4]=c->r[31]+0x000008ACu; // 801ECB1C
  c->lr=0x801ECB24u; f_801DC790(c); // 801ECB20
L_801ECB24:;
  c->r[0]=R8(c->r[30]+0x0000007Fu); // 801ECB24
  cmps(c,0,(int32_t)c->r[0],0); // 801ECB28
  if (crb(c,2)) { goto L_801ECB38; } // 801ECB2C
  c->r[3]=0u+0x00000001u; // 801ECB30
  goto L_801ECE94; // 801ECB34
L_801ECB38:;
  c->r[0]=R16(c->r[30]+0x00000018u); // 801ECB38
  cmpu(c,1,c->r[0],0x0000FFFFu); // 801ECB3C
  if (!crb(c,6)) { goto L_801ECBA0; } // 801ECB40
  c->r[3]=c->r[30]+0x0000001Cu; // 801ECB44
  c->lr=0x801ECB4Cu; f_801F92F8(c); // 801ECB48
  cmps(c,0,(int32_t)c->r[3],0); // 801ECB4C
  if (!crb(c,2)) { goto L_801ECB7C; } // 801ECB50
  c->r[3]=0u+0x80310000u; // 801ECB54
  c->r[0]=R8(c->r[3]+0xFFFFB8E0u); // 801ECB58
  cmpu(c,0,c->r[0],0x00000002u); // 801ECB5C
  if (crb(c,0)) { goto L_801ECB74; } // 801ECB60
  c->r[3]=0u+0x00080000u; // 801ECB64
  c->r[4]=c->r[31]+0x000008ECu; // 801ECB68
  c->r[3]=c->r[3]+0x00000001u; // 801ECB6C
  c->lr=0x801ECB74u; f_801DC730(c); // 801ECB70
L_801ECB74:;
  c->r[3]=0u+0x00000003u; // 801ECB74
  goto L_801ECE94; // 801ECB78
L_801ECB7C:;
  c->lr=0x801ECB80u; f_801FAE5C(c); // 801ECB7C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801ECB80
  if (!crb(c,2)) { goto L_801ECB90; } // 801ECB84
  c->r[3]=0u+0x00000003u; // 801ECB88
  goto L_801ECE94; // 801ECB8C
L_801ECB90:;
  c->r[0]=0u+0x00000001u; // 801ECB90
  c->r[3]=0u+0x00000001u; // 801ECB94
  W8(c->r[30]+0x00000080u,c->r[0]); // 801ECB98
  goto L_801ECE94; // 801ECB9C
L_801ECBA0:;
  c->r[0]=R8(c->r[30]+0x00000076u); // 801ECBA0
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 801ECBA4
  if (!crb(c,2)) { goto L_801ECC30; } // 801ECBA8
  if (crb(c,6)) { goto L_801ECC30; } // 801ECBAC
  c->r[3]=0u+0x80310000u; // 801ECBB0
  c->r[3]=c->r[3]+0xFFFF8818u; // 801ECBB4
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801ECBB8
  cmpu(c,0,c->r[0],0x00000004u); // 801ECBBC
  if (crb(c,0)) { goto L_801ECBD4; } // 801ECBC0
  c->r[3]=0u+0x000D0000u; // 801ECBC4
  c->r[4]=c->r[31]+0x00000910u; // 801ECBC8
  c->r[3]=c->r[3]+0x00000003u; // 801ECBCC
  c->lr=0x801ECBD4u; f_801DC730(c); // 801ECBD0
L_801ECBD4:;
  c->r[29]=R8(c->r[30]+0x0000007Fu); // 801ECBD4
  c->r[0]=0u+0x00000003u; // 801ECBD8
  c->r[3]=c->r[30]+0x0000001Cu; // 801ECBDC
  c->r[4]=0u+0x00000000u; // 801ECBE0
  W8(c->r[30]+0x0000007Fu,c->r[0]); // 801ECBE4
  c->r[5]=0u+0x00000002u; // 801ECBE8
  c->r[6]=0u+0x0000001Eu; // 801ECBEC
  c->r[7]=0u+0x00000000u; // 801ECBF0
  c->lr=0x801ECBF8u; f_801E830C(c); // 801ECBF4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801ECBF8
  cmpu(c,0,c->r[0],0x00000001u); // 801ECBFC
  if (crb(c,2)) { goto L_801ECC10; } // 801ECC00
  W8(c->r[30]+0x0000007Fu,c->r[29]); // 801ECC04
  c->r[0]=0u+0x00000000u; // 801ECC08
  goto L_801ECC14; // 801ECC0C
L_801ECC10:;
  c->r[0]=0u+0x00000001u; // 801ECC10
L_801ECC14:;
  cmps(c,0,(int32_t)c->r[0],0); // 801ECC14
  if (crb(c,2)) { goto L_801ECC24; } // 801ECC18
  c->r[3]=0u+0x00000001u; // 801ECC1C
  goto L_801ECE94; // 801ECC20
L_801ECC24:;
  c->r[0]=R8(c->r[30]+0x00000076u); // 801ECC24
  c->r[0]=c->r[0]|0x00000008u; // 801ECC28
  W8(c->r[30]+0x00000076u,c->r[0]); // 801ECC2C
L_801ECC30:;
  c->r[4]=R8(c->r[30]+0x00000076u); // 801ECC30
  c->r[0]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[0]); // 801ECC34
  if (!crb(c,2)) { goto L_801ECCC0; } // 801ECC38
  c->r[3]=R8(c->r[30]+0x00000080u); // 801ECC3C
  cmps(c,0,(int32_t)c->r[3],0); // 801ECC40
  if (crb(c,2)) { goto L_801ECC54; } // 801ECC44
  c->r[0]=R8(c->r[30]+0x00000081u); // 801ECC48
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 801ECC4C
  if (!crb(c,2)) { goto L_801ECC68; } // 801ECC50
L_801ECC54:;
  cmps(c,0,(int32_t)c->r[3],0); // 801ECC54
  if (!crb(c,2)) { goto L_801ECCC0; } // 801ECC58
  c->r[0]=R8(c->r[30]+0x00000081u); // 801ECC5C
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801ECC60
  if (crb(c,2)) { goto L_801ECCC0; } // 801ECC64
L_801ECC68:;
  c->r[0]=R16(c->r[30]+0x00000018u); // 801ECC68
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801ECC6C
  if (crb(c,2)) { goto L_801ECCC0; } // 801ECC70
  c->r[3]=0u+0x80310000u; // 801ECC74
  c->r[3]=c->r[3]+0xFFFF8818u; // 801ECC78
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801ECC7C
  cmpu(c,0,c->r[0],0x00000004u); // 801ECC80
  if (crb(c,0)) { goto L_801ECC98; } // 801ECC84
  c->r[3]=0u+0x000D0000u; // 801ECC88
  c->r[4]=c->r[31]+0x00000934u; // 801ECC8C
  c->r[3]=c->r[3]+0x00000003u; // 801ECC90
  c->lr=0x801ECC98u; f_801DC730(c); // 801ECC94
L_801ECC98:;
  c->r[0]=0u+0x00000001u; // 801ECC98
  c->r[3]=R16(c->r[30]+0x00000018u); // 801ECC9C
  W8(c->r[30]+0x0000007Fu,c->r[0]); // 801ECCA0
  c->lr=0x801ECCA8u; f_801F0018(c); // 801ECCA4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801ECCA8
  if (!crb(c,2)) { goto L_801ECCB8; } // 801ECCAC
  c->r[3]=0u+0x00000003u; // 801ECCB0
  goto L_801ECE94; // 801ECCB4
L_801ECCB8:;
  c->r[3]=0u+0x00000001u; // 801ECCB8
  goto L_801ECE94; // 801ECCBC
L_801ECCC0:;
  c->r[0]=rotl(c->r[4],0)&0x00000004u; cr0(c,c->r[0]); // 801ECCC0
  if (!crb(c,2)) { goto L_801ECD64; } // 801ECCC4
  c->r[3]=R8(c->r[30]+0x00000080u); // 801ECCC8
  cmps(c,0,(int32_t)c->r[3],0); // 801ECCCC
  if (crb(c,2)) { goto L_801ECCE0; } // 801ECCD0
  c->r[0]=R8(c->r[30]+0x00000081u); // 801ECCD4
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 801ECCD8
  if (!crb(c,2)) { goto L_801ECCF4; } // 801ECCDC
L_801ECCE0:;
  cmps(c,0,(int32_t)c->r[3],0); // 801ECCE0
  if (!crb(c,2)) { goto L_801ECD64; } // 801ECCE4
  c->r[0]=R8(c->r[30]+0x00000081u); // 801ECCE8
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801ECCEC
  if (crb(c,2)) { goto L_801ECD64; } // 801ECCF0
L_801ECCF4:;
  c->r[0]=R16(c->r[30]+0x00000018u); // 801ECCF4
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801ECCF8
  if (crb(c,2)) { goto L_801ECD64; } // 801ECCFC
  c->r[3]=0u+0x80310000u; // 801ECD00
  c->r[3]=c->r[3]+0xFFFF8818u; // 801ECD04
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801ECD08
  cmpu(c,0,c->r[0],0x00000004u); // 801ECD0C
  if (crb(c,0)) { goto L_801ECD24; } // 801ECD10
  c->r[3]=0u+0x000D0000u; // 801ECD14
  c->r[4]=c->r[31]+0x0000095Cu; // 801ECD18
  c->r[3]=c->r[3]+0x00000003u; // 801ECD1C
  c->lr=0x801ECD24u; f_801DC730(c); // 801ECD20
L_801ECD24:;
  c->r[3]=R16(c->r[30]+0x00000018u); // 801ECD24
  c->r[4]=0u+0x00000001u; // 801ECD28
  c->lr=0x801ECD30u; f_801F0094(c); // 801ECD2C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801ECD30
  if (!crb(c,2)) { goto L_801ECD40; } // 801ECD34
  c->r[3]=0u+0x00000000u; // 801ECD38
  goto L_801ECD4C; // 801ECD3C
L_801ECD40:;
  c->r[0]=0u+0x00000002u; // 801ECD40
  c->r[3]=0u+0x00000001u; // 801ECD44
  W8(c->r[30]+0x0000007Fu,c->r[0]); // 801ECD48
L_801ECD4C:;
  cmps(c,0,(int32_t)c->r[3],0); // 801ECD4C
  if (!crb(c,2)) { goto L_801ECD5C; } // 801ECD50
  c->r[3]=0u+0x00000003u; // 801ECD54
  goto L_801ECE94; // 801ECD58
L_801ECD5C:;
  c->r[3]=0u+0x00000001u; // 801ECD5C
  goto L_801ECE94; // 801ECD60
L_801ECD64:;
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 801ECD64
  if (!crb(c,2)) { goto L_801ECE34; } // 801ECD68
  c->r[3]=R8(c->r[30]+0x00000080u); // 801ECD6C
  cmps(c,0,(int32_t)c->r[3],0); // 801ECD70
  if (crb(c,2)) { goto L_801ECD84; } // 801ECD74
  c->r[0]=R8(c->r[30]+0x00000081u); // 801ECD78
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 801ECD7C
  if (!crb(c,2)) { goto L_801ECD98; } // 801ECD80
L_801ECD84:;
  cmps(c,0,(int32_t)c->r[3],0); // 801ECD84
  if (!crb(c,2)) { goto L_801ECE34; } // 801ECD88
  c->r[0]=R8(c->r[30]+0x00000081u); // 801ECD8C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801ECD90
  if (crb(c,2)) { goto L_801ECE34; } // 801ECD94
L_801ECD98:;
  c->r[3]=R32(c->r[30]+0x00000010u); // 801ECD98
  c->r[0]=c->r[3]+0x00010000u; // 801ECD9C
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801ECDA0
  if (crb(c,2)) { goto L_801ECDB0; } // 801ECDA4
  c->r[0]=0u+0x00000000u; // 801ECDA8
  goto L_801ECDCC; // 801ECDAC
L_801ECDB0:;
  c->r[3]=R32(c->r[30]+0x00000014u); // 801ECDB0
  c->r[0]=c->r[3]+0x00010000u; // 801ECDB4
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801ECDB8
  if (crb(c,2)) { goto L_801ECDC8; } // 801ECDBC
  c->r[0]=0u+0x00000000u; // 801ECDC0
  goto L_801ECDCC; // 801ECDC4
L_801ECDC8:;
  c->r[0]=0u+0x00000001u; // 801ECDC8
L_801ECDCC:;
  cmps(c,0,(int32_t)c->r[0],0); // 801ECDCC
  if (!crb(c,2)) { goto L_801ECE34; } // 801ECDD0
  c->r[3]=R32(c->r[30]+0x00000000u); // 801ECDD4
  c->r[3]=R8(c->r[3]+0x0000000Fu); // 801ECDD8
  cmpu(c,0,c->r[3],0x0000002Eu); // 801ECDDC
  if (!crb(c,0)) { goto L_801ECE34; } // 801ECDE0
  c->r[0]=rotl(c->r[3],29)&0x0000001Cu; // 801ECDE4
  c->r[4]=rotl(c->r[3],0)&0x0000001Fu; // 801ECDE8
  c->r[3]=c->r[30]+c->r[0]; // 801ECDEC
  c->r[5]=0u+0x00000001u; // 801ECDF0
  c->r[0]=R32(c->r[3]+0x00000010u); // 801ECDF4
  c->r[3]=((c->r[4])&0x20)?0u:(c->r[5]<<((c->r[4])&31)); // 801ECDF8
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 801ECDFC
  if (!crb(c,2)) { goto L_801ECE34; } // 801ECE00
  c->r[3]=0u+0x80310000u; // 801ECE04
  c->r[3]=c->r[3]+0xFFFF8818u; // 801ECE08
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801ECE0C
  cmpu(c,0,c->r[0],0x00000004u); // 801ECE10
  if (crb(c,0)) { goto L_801ECE28; } // 801ECE14
  c->r[3]=0u+0x000D0000u; // 801ECE18
  c->r[4]=c->r[31]+0x00000980u; // 801ECE1C
  c->r[3]=c->r[3]+0x00000003u; // 801ECE20
  c->lr=0x801ECE28u; f_801DC730(c); // 801ECE24
L_801ECE28:;
  c->r[3]=c->r[30]|c->r[30]; // 801ECE28
  c->lr=0x801ECE30u; f_801ECEB0(c); // 801ECE2C
  goto L_801ECE94; // 801ECE30
L_801ECE34:;
  c->r[0]=R8(c->r[30]+0x00000081u); // 801ECE34
  c->r[3]=0u+0x80310000u; // 801ECE38
  c->r[3]=c->r[3]+0xFFFF8818u; // 801ECE3C
  c->r[0]=rotl(c->r[0],0)&0x000000C0u; // 801ECE40
  W8(c->r[30]+0x00000081u,c->r[0]); // 801ECE44
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801ECE48
  cmpu(c,0,c->r[0],0x00000004u); // 801ECE4C
  if (crb(c,0)) { goto L_801ECE6C; } // 801ECE50
  c->r[3]=0u+0x000D0000u; // 801ECE54
  c->r[5]=R32(c->r[30]+0x00000014u); // 801ECE58
  c->r[6]=R32(c->r[30]+0x00000010u); // 801ECE5C
  c->r[3]=c->r[3]+0x00000003u; // 801ECE60
  c->r[4]=c->r[31]+0x000009A8u; // 801ECE64
  c->lr=0x801ECE6Cu; f_801DC770(c); // 801ECE68
L_801ECE6C:;
  c->r[3]=0u+0x80310000u; // 801ECE6C
  c->r[3]=c->r[3]+0xFFFF8818u; // 801ECE70
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801ECE74
  cmpu(c,0,c->r[0],0x00000004u); // 801ECE78
  if (crb(c,0)) { goto L_801ECE90; } // 801ECE7C
  c->r[3]=0u+0x000D0000u; // 801ECE80
  c->r[4]=c->r[31]+0x000009D0u; // 801ECE84
  c->r[3]=c->r[3]+0x00000003u; // 801ECE88
  c->lr=0x801ECE90u; f_801DC730(c); // 801ECE8C
L_801ECE90:;
  c->r[3]=0u+0x00000000u; // 801ECE90
L_801ECE94:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801ECE94
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801ECE98
  c->r[30]=R32(c->r[1]+0x00000018u); // 801ECE9C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801ECEA0
  c->lr=c->r[0]; // 801ECEA4
  c->r[1]=c->r[1]+0x00000020u; // 801ECEA8
  return; // 801ECEAC
}

// btm_sec_start_authorization
void f_801ECEB0(Ctx* __restrict c) {
  trace_call(0x801ECEB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ECEB0
  c->r[0]=c->lr; // 801ECEB4
  c->r[6]=0u+0x00000000u; // 801ECEB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801ECEBC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801ECEC0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801ECEC4
  c->r[30]=c->r[3]|c->r[3]; // 801ECEC8
  c->r[0]=R8(c->r[3]+0x00000076u); // 801ECECC
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 801ECED0
  if (!crb(c,2)) { goto L_801ECEE4; } // 801ECED4
  c->r[0]=R16(c->r[3]+0x00000018u); // 801ECED8
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801ECEDC
  if (!crb(c,2)) { goto L_801ECF7C; } // 801ECEE0
L_801ECEE4:;
  c->r[4]=0u+0x80310000u; // 801ECEE4
  c->r[4]=c->r[4]+0xFFFF8818u; // 801ECEE8
  c->r[0]=R32(c->r[4]+0x0000190Cu); // 801ECEEC
  cmps(c,0,(int32_t)c->r[0],0); // 801ECEF0
  if (!crb(c,2)) { goto L_801ECF00; } // 801ECEF4
  c->r[3]=0u+0x00000004u; // 801ECEF8
  goto L_801ECFB4; // 801ECEFC
L_801ECF00:;
  c->r[4]=R32(c->r[3]+0x00000000u); // 801ECF00
  cmps(c,0,(int32_t)c->r[4],0); // 801ECF04
  if (crb(c,2)) { goto L_801ECF2C; } // 801ECF08
  c->r[0]=R8(c->r[3]+0x00000080u); // 801ECF0C
  cmps(c,0,(int32_t)c->r[0],0); // 801ECF10
  if (crb(c,2)) { goto L_801ECF20; } // 801ECF14
  c->r[6]=c->r[4]+0x00000010u; // 801ECF18
  goto L_801ECF24; // 801ECF1C
L_801ECF20:;
  c->r[6]=c->r[4]+0x00000026u; // 801ECF20
L_801ECF24:;
  c->r[7]=R8(c->r[4]+0x0000000Fu); // 801ECF24
  goto L_801ECF30; // 801ECF28
L_801ECF2C:;
  c->r[7]=0u+0x00000000u; // 801ECF2C
L_801ECF30:;
  c->r[0]=0u+0x00000004u; // 801ECF30
  c->r[4]=0u+0x80310000u; // 801ECF34
  W8(c->r[3]+0x0000007Fu,c->r[0]); // 801ECF38
  c->r[4]=c->r[4]+0xFFFF8818u; // 801ECF3C
  c->r[5]=c->r[3]+0x00000035u; // 801ECF40
  c->r[8]=R8(c->r[3]+0x00000080u); // 801ECF44
  c->r[12]=R32(c->r[4]+0x0000190Cu); // 801ECF48
  c->r[4]=c->r[3]+0x00000022u; // 801ECF4C
  c->ctr=c->r[12]; // 801ECF50
  c->r[3]=c->r[3]+0x0000001Cu; // 801ECF54
  if (true) { c->lr=0x801ECF5Cu; dispatch(c,c->ctr); } // 801ECF58
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801ECF5C
  if (!crb(c,2)) { goto L_801ECFB4; } // 801ECF60
  c->r[4]=R8(c->r[30]+0x00000076u); // 801ECF64
  c->r[0]=0u+0x00000000u; // 801ECF68
  W8(c->r[30]+0x0000007Fu,c->r[0]); // 801ECF6C
  c->r[0]=c->r[4]|0x00000001u; // 801ECF70
  W8(c->r[30]+0x00000076u,c->r[0]); // 801ECF74
  goto L_801ECFB4; // 801ECF78
L_801ECF7C:;
  c->r[31]=R8(c->r[3]+0x0000007Fu); // 801ECF7C
  c->r[0]=0u+0x00000003u; // 801ECF80
  c->r[4]=0u+0x00000000u; // 801ECF84
  c->r[5]=0u+0x00000002u; // 801ECF88
  W8(c->r[3]+0x0000007Fu,c->r[0]); // 801ECF8C
  c->r[6]=0u+0x0000001Eu; // 801ECF90
  c->r[7]=0u+0x00000000u; // 801ECF94
  c->r[3]=c->r[3]+0x0000001Cu; // 801ECF98
  c->lr=0x801ECFA0u; f_801E830C(c); // 801ECF9C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801ECFA0
  cmpu(c,0,c->r[0],0x00000001u); // 801ECFA4
  if (crb(c,2)) { goto L_801ECFB0; } // 801ECFA8
  W8(c->r[30]+0x0000007Fu,c->r[31]); // 801ECFAC
L_801ECFB0:;
  c->r[3]=0u+0x00000001u; // 801ECFB0
L_801ECFB4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801ECFB4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801ECFB8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801ECFBC
  c->lr=c->r[0]; // 801ECFC0
  c->r[1]=c->r[1]+0x00000010u; // 801ECFC4
  return; // 801ECFC8
}

// btm_sec_collision_timeout
void f_801ECFCC(Ctx* __restrict c) {
  trace_call(0x801ECFCCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ECFCC
  c->r[0]=c->lr; // 801ECFD0
  c->r[3]=0u+0x80310000u; // 801ECFD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801ECFD8
  c->r[3]=c->r[3]+0xFFFF8818u; // 801ECFDC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801ECFE0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801ECFE4
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801ECFE8
  cmpu(c,0,c->r[0],0x00000004u); // 801ECFEC
  if (crb(c,0)) { goto L_801ED008; } // 801ECFF0
  c->r[3]=0u+0x000D0000u; // 801ECFF4
  c->r[4]=0u+0x80280000u; // 801ECFF8
  c->r[3]=c->r[3]+0x00000003u; // 801ECFFC
  c->r[4]=c->r[4]+0x0000035Cu; // 801ED000
  c->lr=0x801ED008u; f_801DC730(c); // 801ED004
L_801ED008:;
  c->r[31]=0u+0x80310000u; // 801ED008
  c->r[30]=0u+0x00000000u; // 801ED00C
  c->r[31]=c->r[31]+0xFFFF8818u; // 801ED010
  W32(c->r[31]+0x0000196Cu,c->r[30]); // 801ED014
  c->r[3]=R32(c->r[31]+0x00001938u); // 801ED018
  c->lr=0x801ED020u; f_801ECAD0(c); // 801ED01C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801ED020
  cmpu(c,0,c->r[0],0x00000001u); // 801ED024
  if (crb(c,2)) { goto L_801ED094; } // 801ED028
  c->r[4]=R32(c->r[31]+0x00001938u); // 801ED02C
  c->r[0]=R32(c->r[4]+0x00000004u); // 801ED030
  cmps(c,0,(int32_t)c->r[0],0); // 801ED034
  if (crb(c,2)) { goto L_801ED094; } // 801ED038
  c->r[0]=R8(c->r[4]+0x00000080u); // 801ED03C
  cmps(c,0,(int32_t)c->r[0],0); // 801ED040
  if (crb(c,2)) { goto L_801ED064; } // 801ED044
  c->r[4]=R32(c->r[4]+0x00000000u); // 801ED048
  cmps(c,0,(int32_t)c->r[4],0); // 801ED04C
  if (crb(c,2)) { goto L_801ED064; } // 801ED050
  c->r[0]=R32(c->r[4]+0x00000000u); // 801ED054
  cmpu(c,0,c->r[0],0x00000003u); // 801ED058
  if (!crb(c,2)) { goto L_801ED064; } // 801ED05C
  W32(c->r[4]+0x00000004u,c->r[30]); // 801ED060
L_801ED064:;
  c->r[31]=0u+0x80310000u; // 801ED064
  c->r[5]=rotl(c->r[3],0)&0x000000FFu; // 801ED068
  c->r[31]=c->r[31]+0xFFFF8818u; // 801ED06C
  c->r[4]=R32(c->r[31]+0x00001938u); // 801ED070
  c->r[12]=R32(c->r[4]+0x00000004u); // 801ED074
  c->r[3]=c->r[4]+0x0000001Cu; // 801ED078
  c->r[4]=R32(c->r[4]+0x00000008u); // 801ED07C
  c->ctr=c->r[12]; // 801ED080
  if (true) { c->lr=0x801ED088u; dispatch(c,c->ctr); } // 801ED084
  c->r[3]=R32(c->r[31]+0x00001938u); // 801ED088
  c->r[0]=0u+0x00000000u; // 801ED08C
  W32(c->r[3]+0x00000004u,c->r[0]); // 801ED090
L_801ED094:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801ED094
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801ED098
  c->r[30]=R32(c->r[1]+0x00000008u); // 801ED09C
  c->lr=c->r[0]; // 801ED0A0
  c->r[1]=c->r[1]+0x00000010u; // 801ED0A4
  return; // 801ED0A8
}

// btm_read_trusted_mask
void f_801ED0AC(Ctx* __restrict c) {
  trace_call(0x801ED0ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ED0AC
  c->r[0]=c->lr; // 801ED0B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801ED0B4
  c->lr=0x801ED0BCu; f_801E4E80(c); // 801ED0B8
  cmps(c,0,(int32_t)c->r[3],0); // 801ED0BC
  if (crb(c,2)) { goto L_801ED0CC; } // 801ED0C0
  c->r[3]=c->r[3]+0x00000010u; // 801ED0C4
  goto L_801ED0D0; // 801ED0C8
L_801ED0CC:;
  c->r[3]=0u+0x00000000u; // 801ED0CC
L_801ED0D0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801ED0D0
  c->lr=c->r[0]; // 801ED0D4
  c->r[1]=c->r[1]+0x00000010u; // 801ED0D8
  return; // 801ED0DC
}

// btu_hcif_process_event
void f_801ED0E0(Ctx* __restrict c) {
  trace_call(0x801ED0E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ED0E0
  c->r[0]=c->lr; // 801ED0E4
  c->r[4]=0u+0x80310000u; // 801ED0E8
  W32(c->r[1]+0x00000044u,c->r[0]); // 801ED0EC
  c->r[4]=c->r[4]+0xFFFF8818u; // 801ED0F0
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801ED0F4
  W32(c->r[1]+0x00000038u,c->r[30]); // 801ED0F8
  W32(c->r[1]+0x00000034u,c->r[29]); // 801ED0FC
  W32(c->r[1]+0x00000030u,c->r[28]); // 801ED100
  c->r[5]=R16(c->r[3]+0x00000004u); // 801ED104
  c->r[0]=R8(c->r[4]+0x0000064Eu); // 801ED108
  c->r[7]=c->r[3]+c->r[5]; // 801ED10C
  cmps(c,0,(int32_t)c->r[0],0); // 801ED110
  c->r[3]=R8(c->r[7]+0x00000008u); // 801ED114
  c->r[4]=R8(c->r[7]+0x00000009u); // 801ED118
  if (!crb(c,2)) { goto L_801ED130; } // 801ED11C
  cmpu(c,0,c->r[3],0x0000000Eu); // 801ED120
  if (crb(c,2)) { goto L_801ED130; } // 801ED124
  cmpu(c,0,c->r[3],0x0000000Fu); // 801ED128
  if (!crb(c,2)) { goto L_801ED678; } // 801ED12C
L_801ED130:;
  cmps(c,0,(int32_t)c->r[3],20); // 801ED130
  if (crb(c,2)) { goto L_801ED494; } // 801ED134
  if (!crb(c,0)) { goto L_801ED1CC; } // 801ED138
  cmps(c,0,(int32_t)c->r[3],10); // 801ED13C
  if (crb(c,2)) { goto L_801ED3A0; } // 801ED140
  if (!crb(c,0)) { goto L_801ED190; } // 801ED144
  cmps(c,0,(int32_t)c->r[3],5); // 801ED148
  if (crb(c,2)) { goto L_801ED294; } // 801ED14C
  if (!crb(c,0)) { goto L_801ED178; } // 801ED150
  cmps(c,0,(int32_t)c->r[3],2); // 801ED154
  if (crb(c,2)) { goto L_801ED25C; } // 801ED158
  if (!crb(c,0)) { goto L_801ED16C; } // 801ED15C
  cmps(c,0,(int32_t)c->r[3],1); // 801ED160
  if (!crb(c,0)) { goto L_801ED250; } // 801ED164
  goto L_801ED678; // 801ED168
L_801ED16C:;
  cmps(c,0,(int32_t)c->r[3],4); // 801ED16C
  if (!crb(c,0)) { goto L_801ED288; } // 801ED170
  goto L_801ED27C; // 801ED174
L_801ED178:;
  cmps(c,0,(int32_t)c->r[3],8); // 801ED178
  if (crb(c,2)) { goto L_801ED360; } // 801ED17C
  if (!crb(c,0)) { goto L_801ED678; } // 801ED180
  cmps(c,0,(int32_t)c->r[3],7); // 801ED184
  if (!crb(c,0)) { goto L_801ED2FC; } // 801ED188
  goto L_801ED2DC; // 801ED18C
L_801ED190:;
  cmps(c,0,(int32_t)c->r[3],15); // 801ED190
  if (crb(c,2)) { goto L_801ED3F4; } // 801ED194
  if (!crb(c,0)) { goto L_801ED1B4; } // 801ED198
  cmps(c,0,(int32_t)c->r[3],13); // 801ED19C
  if (crb(c,2)) { goto L_801ED3DC; } // 801ED1A0
  if (!crb(c,0)) { goto L_801ED3E8; } // 801ED1A4
  cmps(c,0,(int32_t)c->r[3],12); // 801ED1A8
  if (!crb(c,0)) { goto L_801ED3D0; } // 801ED1AC
  goto L_801ED3C4; // 801ED1B0
L_801ED1B4:;
  cmps(c,0,(int32_t)c->r[3],18); // 801ED1B4
  if (crb(c,2)) { goto L_801ED428; } // 801ED1B8
  if (!crb(c,0)) { goto L_801ED488; } // 801ED1BC
  cmps(c,0,(int32_t)c->r[3],17); // 801ED1C0
  if (!crb(c,0)) { goto L_801ED678; } // 801ED1C4
  goto L_801ED400; // 801ED1C8
L_801ED1CC:;
  cmps(c,0,(int32_t)c->r[3],33); // 801ED1CC
  if (crb(c,2)) { goto L_801ED678; } // 801ED1D0
  if (!crb(c,0)) { goto L_801ED214; } // 801ED1D4
  cmps(c,0,(int32_t)c->r[3],28); // 801ED1D8
  if (crb(c,2)) { goto L_801ED5A8; } // 801ED1DC
  if (!crb(c,0)) { goto L_801ED208; } // 801ED1E0
  cmps(c,0,(int32_t)c->r[3],23); // 801ED1E4
  if (crb(c,2)) { goto L_801ED560; } // 801ED1E8
  if (!crb(c,0)) { goto L_801ED1FC; } // 801ED1EC
  cmps(c,0,(int32_t)c->r[3],22); // 801ED1F0
  if (!crb(c,0)) { goto L_801ED51C; } // 801ED1F4
  goto L_801ED4FC; // 801ED1F8
L_801ED1FC:;
  cmps(c,0,(int32_t)c->r[3],25); // 801ED1FC
  if (!crb(c,0)) { goto L_801ED678; } // 801ED200
  goto L_801ED59C; // 801ED204
L_801ED208:;
  cmps(c,0,(int32_t)c->r[3],30); // 801ED208
  if (crb(c,2)) { goto L_801ED5F8; } // 801ED20C
  goto L_801ED678; // 801ED210
L_801ED214:;
  cmps(c,0,(int32_t)c->r[3],239); // 801ED214
  if (crb(c,2)) { goto L_801ED670; } // 801ED218
  if (!crb(c,0)) { goto L_801ED244; } // 801ED21C
  cmps(c,0,(int32_t)c->r[3],44); // 801ED220
  if (crb(c,2)) { goto L_801ED614; } // 801ED224
  if (!crb(c,0)) { goto L_801ED238; } // 801ED228
  cmps(c,0,(int32_t)c->r[3],35); // 801ED22C
  if (!crb(c,0)) { goto L_801ED678; } // 801ED230
  goto L_801ED26C; // 801ED234
L_801ED238:;
  cmps(c,0,(int32_t)c->r[3],46); // 801ED238
  if (!crb(c,0)) { goto L_801ED678; } // 801ED23C
  goto L_801ED620; // 801ED240
L_801ED244:;
  cmps(c,0,(int32_t)c->r[3],255); // 801ED244
  if (crb(c,2)) { goto L_801ED670; } // 801ED248
  goto L_801ED678; // 801ED24C
L_801ED250:;
  c->r[3]=R8(c->r[7]+0x0000000Au); // 801ED250
  c->lr=0x801ED258u; f_801E8208(c); // 801ED254
  goto L_801ED678; // 801ED258
L_801ED25C:;
  c->r[3]=c->r[7]+0x0000000Au; // 801ED25C
  c->r[4]=0u+0x00000000u; // 801ED260
  c->lr=0x801ED268u; f_801E7F90(c); // 801ED264
  goto L_801ED678; // 801ED268
L_801ED26C:;
  c->r[3]=c->r[7]+0x0000000Au; // 801ED26C
  c->r[4]=0u+0x00000001u; // 801ED270
  c->lr=0x801ED278u; f_801E7F90(c); // 801ED274
  goto L_801ED678; // 801ED278
L_801ED27C:;
  c->r[3]=c->r[7]+0x0000000Au; // 801ED27C
  c->lr=0x801ED284u; f_801ED824(c); // 801ED280
  goto L_801ED678; // 801ED284
L_801ED288:;
  c->r[3]=c->r[7]+0x0000000Au; // 801ED288
  c->lr=0x801ED290u; f_801ED900(c); // 801ED28C
  goto L_801ED678; // 801ED290
L_801ED294:;
  c->r[0]=R8(c->r[7]+0x0000000Cu); // 801ED294
  c->r[3]=R8(c->r[7]+0x0000000Bu); // 801ED298
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801ED29C
  c->r[31]=R8(c->r[7]+0x0000000Du); // 801ED2A0
  c->r[0]=c->r[3]+c->r[0]; // 801ED2A4
  c->r[28]=rotl(c->r[0],0)&0x00000FFFu; // 801ED2A8
  c->r[4]=c->r[31]|c->r[31]; // 801ED2AC
  c->r[3]=c->r[28]|c->r[28]; // 801ED2B0
  c->lr=0x801ED2B8u; f_801F757C(c); // 801ED2B4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801ED2B8
  if (!crb(c,2)) { goto L_801ED2CC; } // 801ED2BC
  c->r[3]=c->r[28]|c->r[28]; // 801ED2C0
  c->r[4]=c->r[31]|c->r[31]; // 801ED2C4
  c->lr=0x801ED2CCu; f_801E9B4C(c); // 801ED2C8
L_801ED2CC:;
  c->r[3]=c->r[28]|c->r[28]; // 801ED2CC
  c->r[4]=c->r[31]|c->r[31]; // 801ED2D0
  c->lr=0x801ED2D8u; f_801EC298(c); // 801ED2D4
  goto L_801ED678; // 801ED2D8
L_801ED2DC:;
  c->r[0]=R8(c->r[7]+0x0000000Cu); // 801ED2DC
  c->r[3]=R8(c->r[7]+0x0000000Bu); // 801ED2E0
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801ED2E4
  c->r[4]=R8(c->r[7]+0x0000000Au); // 801ED2E8
  c->r[0]=c->r[3]+c->r[0]; // 801ED2EC
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801ED2F0
  c->lr=0x801ED2F8u; f_801EB7A0(c); // 801ED2F4
  goto L_801ED678; // 801ED2F8
L_801ED2FC:;
  c->r[30]=R8(c->r[7]+0x0000000Au); // 801ED2FC
  c->r[0]=c->r[4]+0xFFFFFFF9u; // 801ED300
  c->r[3]=R8(c->r[7]+0x0000000Bu); // 801ED304
  c->r[31]=c->r[7]+0x00000011u; // 801ED308
  c->r[5]=rotl(c->r[0],0)&0x0000FFFFu; // 801ED30C
  c->r[6]=c->r[30]|c->r[30]; // 801ED310
  W8(c->r[1]+0x00000025u,c->r[3]); // 801ED314
  c->r[4]=c->r[31]|c->r[31]; // 801ED318
  c->r[3]=c->r[1]+0x00000020u; // 801ED31C
  c->r[0]=R8(c->r[7]+0x0000000Cu); // 801ED320
  W8(c->r[1]+0x00000024u,c->r[0]); // 801ED324
  c->r[0]=R8(c->r[7]+0x0000000Du); // 801ED328
  W8(c->r[1]+0x00000023u,c->r[0]); // 801ED32C
  c->r[0]=R8(c->r[7]+0x0000000Eu); // 801ED330
  W8(c->r[1]+0x00000022u,c->r[0]); // 801ED334
  c->r[0]=R8(c->r[7]+0x0000000Fu); // 801ED338
  W8(c->r[1]+0x00000021u,c->r[0]); // 801ED33C
  c->r[0]=R8(c->r[7]+0x00000010u); // 801ED340
  W8(c->r[1]+0x00000020u,c->r[0]); // 801ED344
  c->lr=0x801ED34Cu; f_801E845C(c); // 801ED348
  c->r[4]=c->r[31]|c->r[31]; // 801ED34C
  c->r[5]=c->r[30]|c->r[30]; // 801ED350
  c->r[3]=c->r[1]+0x00000020u; // 801ED354
  c->lr=0x801ED35Cu; f_801EB4B8(c); // 801ED358
  goto L_801ED678; // 801ED35C
L_801ED360:;
  c->r[0]=R8(c->r[7]+0x0000000Cu); // 801ED360
  c->r[3]=R8(c->r[7]+0x0000000Bu); // 801ED364
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801ED368
  c->r[29]=R8(c->r[7]+0x0000000Au); // 801ED36C
  c->r[0]=c->r[3]+c->r[0]; // 801ED370
  c->r[30]=R8(c->r[7]+0x0000000Du); // 801ED374
  c->r[31]=rotl(c->r[0],0)&0x0000FFFFu; // 801ED378
  c->r[4]=c->r[29]|c->r[29]; // 801ED37C
  c->r[3]=c->r[31]|c->r[31]; // 801ED380
  c->r[5]=c->r[30]|c->r[30]; // 801ED384
  c->lr=0x801ED38Cu; f_801E3388(c); // 801ED388
  c->r[3]=c->r[31]|c->r[31]; // 801ED38C
  c->r[4]=c->r[29]|c->r[29]; // 801ED390
  c->r[5]=c->r[30]|c->r[30]; // 801ED394
  c->lr=0x801ED39Cu; f_801EBBE0(c); // 801ED398
  goto L_801ED678; // 801ED39C
L_801ED3A0:;
  c->r[0]=R8(c->r[7]+0x0000000Cu); // 801ED3A0
  c->r[3]=R8(c->r[7]+0x0000000Bu); // 801ED3A4
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801ED3A8
  c->r[4]=R8(c->r[7]+0x0000000Au); // 801ED3AC
  c->r[0]=c->r[3]+c->r[0]; // 801ED3B0
  c->r[5]=R8(c->r[7]+0x0000000Du); // 801ED3B4
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801ED3B8
  c->lr=0x801ED3C0u; f_801EBAE4(c); // 801ED3BC
  goto L_801ED678; // 801ED3C0
L_801ED3C4:;
  c->r[3]=c->r[7]+0x0000000Au; // 801ED3C4
  c->lr=0x801ED3CCu; f_801E3888(c); // 801ED3C8
  goto L_801ED678; // 801ED3CC
L_801ED3D0:;
  c->r[3]=c->r[7]+0x0000000Au; // 801ED3D0
  c->lr=0x801ED3D8u; f_801E37FC(c); // 801ED3D4
  goto L_801ED678; // 801ED3D8
L_801ED3DC:;
  c->r[3]=c->r[7]+0x0000000Au; // 801ED3DC
  c->lr=0x801ED3E4u; f_801ED98C(c); // 801ED3E0
  goto L_801ED678; // 801ED3E4
L_801ED3E8:;
  c->r[3]=c->r[7]+0x0000000Au; // 801ED3E8
  c->lr=0x801ED3F0u; f_801EDCC4(c); // 801ED3EC
  goto L_801ED678; // 801ED3F0
L_801ED3F4:;
  c->r[3]=c->r[7]+0x0000000Au; // 801ED3F4
  c->lr=0x801ED3FCu; f_801EDFDC(c); // 801ED3F8
  goto L_801ED678; // 801ED3FC
L_801ED400:;
  c->r[4]=0u+0x80280000u; // 801ED400
  c->r[3]=0u+0x00070000u; // 801ED404
  c->r[4]=c->r[4]+0x00000378u; // 801ED408
  c->lr=0x801ED410u; f_801DC730(c); // 801ED40C
  c->lr=0x801ED414u; f_801E5334(c); // 801ED410
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801ED414
  if (crb(c,2)) { goto L_801ED678; } // 801ED418
  c->r[3]=0u+0x00000000u; // 801ED41C
  c->lr=0x801ED424u; f_801E51F0(c); // 801ED420
  goto L_801ED678; // 801ED424
L_801ED428:;
  c->r[29]=R8(c->r[7]+0x0000000Au); // 801ED428
  c->r[0]=R8(c->r[7]+0x0000000Bu); // 801ED42C
  cmps(c,0,(int32_t)c->r[29],0); // 801ED430
  W8(c->r[1]+0x0000001Du,c->r[0]); // 801ED434
  c->r[0]=R8(c->r[7]+0x0000000Cu); // 801ED438
  W8(c->r[1]+0x0000001Cu,c->r[0]); // 801ED43C
  c->r[0]=R8(c->r[7]+0x0000000Du); // 801ED440
  W8(c->r[1]+0x0000001Bu,c->r[0]); // 801ED444
  c->r[0]=R8(c->r[7]+0x0000000Eu); // 801ED448
  W8(c->r[1]+0x0000001Au,c->r[0]); // 801ED44C
  c->r[0]=R8(c->r[7]+0x0000000Fu); // 801ED450
  W8(c->r[1]+0x00000019u,c->r[0]); // 801ED454
  c->r[0]=R8(c->r[7]+0x00000010u); // 801ED458
  W8(c->r[1]+0x00000018u,c->r[0]); // 801ED45C
  c->r[31]=R8(c->r[7]+0x00000011u); // 801ED460
  if (!crb(c,2)) { goto L_801ED474; } // 801ED464
  c->r[4]=c->r[31]|c->r[31]; // 801ED468
  c->r[3]=c->r[1]+0x00000018u; // 801ED46C
  c->lr=0x801ED474u; f_801F80BC(c); // 801ED470
L_801ED474:;
  c->r[3]=c->r[29]|c->r[29]; // 801ED474
  c->r[5]=c->r[31]|c->r[31]; // 801ED478
  c->r[4]=c->r[1]+0x00000018u; // 801ED47C
  c->lr=0x801ED484u; f_801E3D40(c); // 801ED480
  goto L_801ED678; // 801ED484
L_801ED488:;
  c->r[3]=c->r[7]+0x0000000Au; // 801ED488
  c->lr=0x801ED490u; f_801F7D88(c); // 801ED48C
  goto L_801ED678; // 801ED490
L_801ED494:;
  c->r[3]=R8(c->r[7]+0x0000000Cu); // 801ED494
  c->r[0]=R8(c->r[7]+0x0000000Fu); // 801ED498
  c->r[4]=rotl(c->r[3],8)&0xFFFFFF00u; // 801ED49C
  c->r[5]=R8(c->r[7]+0x0000000Bu); // 801ED4A0
  c->r[3]=R8(c->r[7]+0x0000000Eu); // 801ED4A4
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801ED4A8
  c->r[4]=c->r[5]+c->r[4]; // 801ED4AC
  c->r[30]=R8(c->r[7]+0x0000000Du); // 801ED4B0
  c->r[31]=rotl(c->r[4],0)&0x0000FFFFu; // 801ED4B4
  c->r[0]=c->r[3]+c->r[0]; // 801ED4B8
  c->r[28]=R8(c->r[7]+0x0000000Au); // 801ED4BC
  c->r[4]=c->r[31]|c->r[31]; // 801ED4C0
  c->r[5]=c->r[30]|c->r[30]; // 801ED4C4
  c->r[29]=rotl(c->r[0],0)&0x0000FFFFu; // 801ED4C8
  c->r[3]=c->r[28]|c->r[28]; // 801ED4CC
  c->lr=0x801ED4D4u; f_801E9504(c); // 801ED4D0
  c->r[3]=c->r[28]|c->r[28]; // 801ED4D4
  c->r[4]=c->r[31]|c->r[31]; // 801ED4D8
  c->r[5]=c->r[30]|c->r[30]; // 801ED4DC
  c->r[6]=c->r[29]|c->r[29]; // 801ED4E0
  c->lr=0x801ED4E8u; f_801E90BC(c); // 801ED4E4
  c->r[3]=c->r[28]|c->r[28]; // 801ED4E8
  c->r[4]=c->r[30]|c->r[30]; // 801ED4EC
  c->r[5]=c->r[29]|c->r[29]; // 801ED4F0
  c->lr=0x801ED4F8u; f_801F2130(c); // 801ED4F4
  goto L_801ED678; // 801ED4F8
L_801ED4FC:;
  c->r[0]=R8(c->r[7]+0x0000000Au); // 801ED4FC
  cmps(c,0,(int32_t)c->r[0],0); // 801ED500
  if (crb(c,2)) { goto L_801ED678; } // 801ED504
  c->r[0]=0u+0x00000001u; // 801ED508
  c->r[3]=c->r[7]+0x00000009u; // 801ED50C
  W8(c->r[7]+0x00000009u,c->r[0]); // 801ED510
  c->lr=0x801ED518u; f_801E687C(c); // 801ED514
  goto L_801ED678; // 801ED518
L_801ED51C:;
  c->r[0]=R8(c->r[7]+0x0000000Au); // 801ED51C
  c->r[3]=c->r[1]+0x00000010u; // 801ED520
  W8(c->r[1]+0x00000015u,c->r[0]); // 801ED524
  c->r[0]=R8(c->r[7]+0x0000000Bu); // 801ED528
  W8(c->r[1]+0x00000014u,c->r[0]); // 801ED52C
  c->r[0]=R8(c->r[7]+0x0000000Cu); // 801ED530
  W8(c->r[1]+0x00000013u,c->r[0]); // 801ED534
  c->r[0]=R8(c->r[7]+0x0000000Du); // 801ED538
  W8(c->r[1]+0x00000012u,c->r[0]); // 801ED53C
  c->r[0]=R8(c->r[7]+0x0000000Eu); // 801ED540
  W8(c->r[1]+0x00000011u,c->r[0]); // 801ED544
  c->r[0]=R8(c->r[7]+0x0000000Fu); // 801ED548
  W8(c->r[1]+0x00000010u,c->r[0]); // 801ED54C
  c->lr=0x801ED554u; f_801F8284(c); // 801ED550
  c->r[3]=c->r[1]+0x00000010u; // 801ED554
  c->lr=0x801ED55Cu; f_801EC724(c); // 801ED558
  goto L_801ED678; // 801ED55C
L_801ED560:;
  c->r[0]=R8(c->r[7]+0x0000000Au); // 801ED560
  c->r[3]=c->r[1]+0x00000008u; // 801ED564
  W8(c->r[1]+0x0000000Du,c->r[0]); // 801ED568
  c->r[0]=R8(c->r[7]+0x0000000Bu); // 801ED56C
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801ED570
  c->r[0]=R8(c->r[7]+0x0000000Cu); // 801ED574
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 801ED578
  c->r[0]=R8(c->r[7]+0x0000000Du); // 801ED57C
  W8(c->r[1]+0x0000000Au,c->r[0]); // 801ED580
  c->r[0]=R8(c->r[7]+0x0000000Eu); // 801ED584
  W8(c->r[1]+0x00000009u,c->r[0]); // 801ED588
  c->r[0]=R8(c->r[7]+0x0000000Fu); // 801ED58C
  W8(c->r[1]+0x00000008u,c->r[0]); // 801ED590
  c->lr=0x801ED598u; f_801EC580(c); // 801ED594
  goto L_801ED678; // 801ED598
L_801ED59C:;
  c->r[3]=c->r[7]+0x0000000Au; // 801ED59C
  c->lr=0x801ED5A4u; f_801EE25C(c); // 801ED5A0
  goto L_801ED678; // 801ED5A4
L_801ED5A8:;
  c->r[0]=R8(c->r[7]+0x0000000Au); // 801ED5A8
  cmps(c,0,(int32_t)c->r[0],0); // 801ED5AC
  if (!crb(c,2)) { goto L_801ED678; } // 801ED5B0
  c->r[3]=R8(c->r[7]+0x0000000Cu); // 801ED5B4
  c->r[0]=R8(c->r[7]+0x0000000Eu); // 801ED5B8
  c->r[4]=rotl(c->r[3],8)&0xFFFFFF00u; // 801ED5BC
  c->r[5]=R8(c->r[7]+0x0000000Bu); // 801ED5C0
  c->r[3]=R8(c->r[7]+0x0000000Du); // 801ED5C4
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801ED5C8
  c->r[4]=c->r[5]+c->r[4]; // 801ED5CC
  c->r[0]=c->r[3]+c->r[0]; // 801ED5D0
  c->r[29]=rotl(c->r[4],0)&0x00000FFFu; // 801ED5D4
  c->r[28]=rotl(c->r[0],0)&0x0000FFFFu; // 801ED5D8
  c->r[3]=c->r[29]|c->r[29]; // 801ED5DC
  c->r[4]=c->r[28]|c->r[28]; // 801ED5E0
  c->lr=0x801ED5E8u; f_801E3CA4(c); // 801ED5E4
  c->r[3]=c->r[29]|c->r[29]; // 801ED5E8
  c->r[4]=c->r[28]|c->r[28]; // 801ED5EC
  c->lr=0x801ED5F4u; f_801ECA80(c); // 801ED5F0
  goto L_801ED678; // 801ED5F4
L_801ED5F8:;
  c->r[0]=R8(c->r[7]+0x0000000Bu); // 801ED5F8
  c->r[3]=R8(c->r[7]+0x0000000Au); // 801ED5FC
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801ED600
  c->r[0]=c->r[3]+c->r[0]; // 801ED604
  c->r[3]=rotl(c->r[0],0)&0x00000FFFu; // 801ED608
  c->lr=0x801ED610u; f_801F7638(c); // 801ED60C
  goto L_801ED678; // 801ED610
L_801ED614:;
  c->r[3]=c->r[7]+0x0000000Au; // 801ED614
  c->lr=0x801ED61Cu; f_801EDA8C(c); // 801ED618
  goto L_801ED678; // 801ED61C
L_801ED620:;
  c->r[4]=R8(c->r[7]+0x0000000Cu); // 801ED620
  c->r[3]=R8(c->r[7]+0x00000010u); // 801ED624
  c->r[0]=R8(c->r[7]+0x00000012u); // 801ED628
  c->r[6]=rotl(c->r[4],8)&0xFFFFFF00u; // 801ED62C
  c->r[8]=R8(c->r[7]+0x0000000Bu); // 801ED630
  c->r[3]=rotl(c->r[3],8)&0xFFFFFF00u; // 801ED634
  c->r[5]=R8(c->r[7]+0x0000000Fu); // 801ED638
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801ED63C
  c->r[9]=c->r[8]+c->r[6]; // 801ED640
  c->r[4]=R8(c->r[7]+0x00000011u); // 801ED644
  c->r[8]=c->r[5]+c->r[3]; // 801ED648
  c->r[3]=R8(c->r[7]+0x0000000Au); // 801ED64C
  c->r[0]=c->r[4]+c->r[0]; // 801ED650
  c->r[5]=R8(c->r[7]+0x0000000Du); // 801ED654
  c->r[6]=R8(c->r[7]+0x0000000Eu); // 801ED658
  c->r[7]=rotl(c->r[8],0)&0x0000FFFFu; // 801ED65C
  c->r[4]=rotl(c->r[9],0)&0x0000FFFFu; // 801ED660
  c->r[8]=rotl(c->r[0],0)&0x0000FFFFu; // 801ED664
  c->lr=0x801ED66Cu; f_801E9EC0(c); // 801ED668
  goto L_801ED678; // 801ED66C
L_801ED670:;
  c->r[3]=c->r[7]+0x0000000Au; // 801ED670
  c->lr=0x801ED678u; f_801E638C(c); // 801ED674
L_801ED678:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 801ED678
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801ED67C
  c->r[30]=R32(c->r[1]+0x00000038u); // 801ED680
  c->r[29]=R32(c->r[1]+0x00000034u); // 801ED684
  c->r[28]=R32(c->r[1]+0x00000030u); // 801ED688
  c->lr=c->r[0]; // 801ED68C
  c->r[1]=c->r[1]+0x00000040u; // 801ED690
  return; // 801ED694
}

// btu_hcif_send_cmd
void f_801ED698(Ctx* __restrict c) {
  trace_call(0x801ED698u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ED698
  c->r[0]=c->lr; // 801ED69C
  cmps(c,0,(int32_t)c->r[3],0); // 801ED6A0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801ED6A4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801ED6A8
  c->r[31]=c->r[3]|c->r[3]; // 801ED6AC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801ED6B0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801ED6B4
  if (crb(c,2)) { goto L_801ED6E0; } // 801ED6B8
  c->r[3]=0u+0x80310000u; // 801ED6BC
  c->r[3]=c->r[3]+0xFFFF82F0u; // 801ED6C0
  c->r[0]=R16(c->r[3]+0x0000006Cu); // 801ED6C4
  cmps(c,0,(int32_t)c->r[0],0); // 801ED6C8
  if (crb(c,2)) { goto L_801ED6E0; } // 801ED6CC
  c->r[4]=c->r[31]|c->r[31]; // 801ED6D0
  c->r[3]=c->r[3]+0x00000064u; // 801ED6D4
  c->lr=0x801ED6DCu; f_801DA0A0(c); // 801ED6D8
  c->r[31]=0u+0x00000000u; // 801ED6DC
L_801ED6E0:;
  c->r[4]=0u+0x80310000u; // 801ED6E0
  c->r[4]=c->r[4]+0xFFFF82F0u; // 801ED6E4
  c->r[0]=R16(c->r[4]+0x00000080u); // 801ED6E8
  cmps(c,0,(int32_t)c->r[0],0); // 801ED6EC
  if (!crb(c,2)) { goto L_801ED714; } // 801ED6F0
  c->r[3]=0u+0x80310000u; // 801ED6F4
  c->r[3]=c->r[3]+0xFFFF8818u; // 801ED6F8
  c->r[0]=R8(c->r[3]+0x0000064Eu); // 801ED6FC
  cmps(c,0,(int32_t)c->r[0],0); // 801ED700
  if (!crb(c,2)) { goto L_801ED714; } // 801ED704
  c->r[3]=R16(c->r[4]+0x0000006Cu); // 801ED708
  c->r[0]=c->r[3]+0x00000001u; // 801ED70C
  W16(c->r[4]+0x00000080u,c->r[0]); // 801ED710
L_801ED714:;
  c->r[3]=0u+0x80310000u; // 801ED714
  c->r[30]=c->r[3]+0xFFFF82F0u; // 801ED718
  goto L_801ED7E0; // 801ED71C
L_801ED720:;
  cmps(c,0,(int32_t)c->r[31],0); // 801ED720
  if (!crb(c,2)) { goto L_801ED734; } // 801ED724
  c->r[3]=c->r[30]+0x00000064u; // 801ED728
  c->lr=0x801ED730u; f_801DA320(c); // 801ED72C
  c->r[31]=c->r[3]|c->r[3]; // 801ED730
L_801ED734:;
  cmps(c,0,(int32_t)c->r[31],0); // 801ED734
  if (crb(c,2)) { goto L_801ED7EC; } // 801ED738
  c->r[0]=R16(c->r[31]+0x00000004u); // 801ED73C
  c->r[3]=c->r[31]+c->r[0]; // 801ED740
  c->r[0]=R8(c->r[3]+0x00000009u); // 801ED744
  c->r[3]=R8(c->r[3]+0x00000008u); // 801ED748
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801ED74C
  c->r[0]=c->r[3]+c->r[0]; // 801ED750
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801ED754
  cmpu(c,0,c->r[0],0x00000C03u); // 801ED758
  if (crb(c,2)) { goto L_801ED7C4; } // 801ED75C
  cmpu(c,0,c->r[0],0x00000C35u); // 801ED760
  if (crb(c,2)) { goto L_801ED7C4; } // 801ED764
  c->r[3]=0u+0x00000002u; // 801ED768
  c->lr=0x801ED770u; f_801D9B80(c); // 801ED76C
  cmps(c,0,(int32_t)c->r[3],0); // 801ED770
  c->r[29]=c->r[3]|c->r[3]; // 801ED774
  if (crb(c,2)) { goto L_801ED7C4; } // 801ED778
  c->r[4]=c->r[31]|c->r[31]; // 801ED77C
  c->r[5]=0u+0x00000008u; // 801ED780
  c->lr=0x801ED788u; f_80004364(c); // 801ED784
  c->r[3]=R16(c->r[29]+0x00000004u); // 801ED788
  c->r[0]=R16(c->r[31]+0x00000004u); // 801ED78C
  c->r[3]=c->r[29]+c->r[3]; // 801ED790
  c->r[5]=R16(c->r[31]+0x00000002u); // 801ED794
  c->r[4]=c->r[31]+c->r[0]; // 801ED798
  c->r[3]=c->r[3]+0x00000008u; // 801ED79C
  c->r[4]=c->r[4]+0x00000008u; // 801ED7A0
  c->lr=0x801ED7A8u; f_80004364(c); // 801ED7A4
  c->r[4]=c->r[29]|c->r[29]; // 801ED7A8
  c->r[3]=c->r[30]+0x00000070u; // 801ED7AC
  c->lr=0x801ED7B4u; f_801DA0A0(c); // 801ED7B0
  c->r[3]=c->r[30]+0x0000004Cu; // 801ED7B4
  c->r[4]=0u+0x0000003Cu; // 801ED7B8
  c->r[5]=0u+0x00000008u; // 801ED7BC
  c->lr=0x801ED7C4u; f_801DCD40(c); // 801ED7C0
L_801ED7C4:;
  c->r[5]=R16(c->r[30]+0x00000080u); // 801ED7C4
  c->r[3]=c->r[31]|c->r[31]; // 801ED7C8
  c->r[4]=0u+0x00002000u; // 801ED7CC
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 801ED7D0
  W16(c->r[30]+0x00000080u,c->r[0]); // 801ED7D4
  c->lr=0x801ED7DCu; f_801DC570(c); // 801ED7D8
  c->r[31]=0u+0x00000000u; // 801ED7DC
L_801ED7E0:;
  c->r[0]=R16(c->r[30]+0x00000080u); // 801ED7E0
  cmps(c,0,(int32_t)c->r[0],0); // 801ED7E4
  if (!crb(c,2)) { IRQCHK(c); goto L_801ED720; } // 801ED7E8
L_801ED7EC:;
  cmps(c,0,(int32_t)c->r[31],0); // 801ED7EC
  if (crb(c,2)) { goto L_801ED808; } // 801ED7F0
  c->r[3]=0u+0x80310000u; // 801ED7F4
  c->r[4]=c->r[31]|c->r[31]; // 801ED7F8
  c->r[3]=c->r[3]+0xFFFF82F0u; // 801ED7FC
  c->r[3]=c->r[3]+0x00000064u; // 801ED800
  c->lr=0x801ED808u; f_801DA0A0(c); // 801ED804
L_801ED808:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801ED808
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801ED80C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801ED810
  c->r[29]=R32(c->r[1]+0x00000014u); // 801ED814
  c->lr=c->r[0]; // 801ED818
  c->r[1]=c->r[1]+0x00000020u; // 801ED81C
  return; // 801ED820
}

// btu_hcif_connection_comp_evt
void f_801ED824(Ctx* __restrict c) {
  trace_call(0x801ED824u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ED824
  c->r[0]=c->lr; // 801ED828
  W32(c->r[1]+0x00000034u,c->r[0]); // 801ED82C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801ED830
  W32(c->r[1]+0x00000028u,c->r[30]); // 801ED834
  c->r[0]=R8(c->r[3]+0x00000002u); // 801ED838
  c->r[31]=R8(c->r[3]+0x00000000u); // 801ED83C
  c->r[4]=rotl(c->r[0],8)&0xFFFFFF00u; // 801ED840
  c->r[5]=R8(c->r[3]+0x00000001u); // 801ED844
  c->r[0]=R8(c->r[3]+0x00000003u); // 801ED848
  c->r[4]=c->r[5]+c->r[4]; // 801ED84C
  W8(c->r[1]+0x0000000Du,c->r[0]); // 801ED850
  c->r[30]=rotl(c->r[4],0)&0x00000FFFu; // 801ED854
  c->r[0]=R8(c->r[3]+0x00000004u); // 801ED858
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801ED85C
  c->r[0]=R8(c->r[3]+0x00000005u); // 801ED860
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 801ED864
  c->r[0]=R8(c->r[3]+0x00000006u); // 801ED868
  W8(c->r[1]+0x0000000Au,c->r[0]); // 801ED86C
  c->r[0]=R8(c->r[3]+0x00000007u); // 801ED870
  W8(c->r[1]+0x00000009u,c->r[0]); // 801ED874
  c->r[0]=R8(c->r[3]+0x00000008u); // 801ED878
  W8(c->r[1]+0x00000008u,c->r[0]); // 801ED87C
  c->r[0]=R8(c->r[3]+0x00000009u); // 801ED880
  c->r[6]=R8(c->r[3]+0x0000000Au); // 801ED884
  cmpu(c,0,c->r[0],0x00000001u); // 801ED888
  if (!crb(c,2)) { goto L_801ED8B4; } // 801ED88C
  c->r[4]=c->r[30]|c->r[30]; // 801ED890
  c->r[5]=c->r[31]|c->r[31]; // 801ED894
  c->r[3]=c->r[1]+0x00000008u; // 801ED898
  c->lr=0x801ED8A0u; f_801EBD5C(c); // 801ED89C
  c->r[3]=c->r[31]|c->r[31]; // 801ED8A0
  c->r[4]=c->r[30]|c->r[30]; // 801ED8A4
  c->r[5]=c->r[1]+0x00000008u; // 801ED8A8
  c->lr=0x801ED8B0u; f_801F7290(c); // 801ED8AC
  goto L_801ED8E8; // 801ED8B0
L_801ED8B4:;
  c->r[3]=c->r[1]+0x00000010u; // 801ED8B4
  c->r[4]=0u+0x00000000u; // 801ED8B8
  c->r[5]=0u+0x0000000Eu; // 801ED8BC
  c->lr=0x801ED8C4u; f_800046B4(c); // 801ED8C0
  c->r[3]=c->r[1]+0x00000014u; // 801ED8C4
  c->r[4]=c->r[1]+0x00000008u; // 801ED8C8
  c->r[5]=0u+0x00000006u; // 801ED8CC
  c->lr=0x801ED8D4u; f_80004364(c); // 801ED8D0
  c->r[3]=c->r[31]|c->r[31]; // 801ED8D4
  c->r[5]=c->r[30]|c->r[30]; // 801ED8D8
  c->r[4]=c->r[1]+0x00000008u; // 801ED8DC
  c->r[6]=c->r[1]+0x00000010u; // 801ED8E0
  c->lr=0x801ED8E8u; f_801E9870(c); // 801ED8E4
L_801ED8E8:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801ED8E8
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801ED8EC
  c->r[30]=R32(c->r[1]+0x00000028u); // 801ED8F0
  c->lr=c->r[0]; // 801ED8F4
  c->r[1]=c->r[1]+0x00000030u; // 801ED8F8
  return; // 801ED8FC
}

// btu_hcif_connection_request_evt
void f_801ED900(Ctx* __restrict c) {
  trace_call(0x801ED900u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ED900
  c->r[0]=c->lr; // 801ED904
  W32(c->r[1]+0x00000024u,c->r[0]); // 801ED908
  c->r[0]=R8(c->r[3]+0x00000000u); // 801ED90C
  W8(c->r[1]+0x00000011u,c->r[0]); // 801ED910
  c->r[0]=R8(c->r[3]+0x00000001u); // 801ED914
  W8(c->r[1]+0x00000010u,c->r[0]); // 801ED918
  c->r[0]=R8(c->r[3]+0x00000002u); // 801ED91C
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 801ED920
  c->r[0]=R8(c->r[3]+0x00000003u); // 801ED924
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 801ED928
  c->r[0]=R8(c->r[3]+0x00000004u); // 801ED92C
  W8(c->r[1]+0x0000000Du,c->r[0]); // 801ED930
  c->r[0]=R8(c->r[3]+0x00000005u); // 801ED934
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801ED938
  c->r[0]=R8(c->r[3]+0x00000006u); // 801ED93C
  W8(c->r[1]+0x0000000Au,c->r[0]); // 801ED940
  c->r[0]=R8(c->r[3]+0x00000007u); // 801ED944
  W8(c->r[1]+0x00000009u,c->r[0]); // 801ED948
  c->r[0]=R8(c->r[3]+0x00000008u); // 801ED94C
  W8(c->r[1]+0x00000008u,c->r[0]); // 801ED950
  c->r[5]=R8(c->r[3]+0x00000009u); // 801ED954
  cmpu(c,0,c->r[5],0x00000001u); // 801ED958
  if (!crb(c,2)) { goto L_801ED970; } // 801ED95C
  c->r[3]=c->r[1]+0x0000000Cu; // 801ED960
  c->r[4]=c->r[1]+0x00000008u; // 801ED964
  c->lr=0x801ED96Cu; f_801EB27C(c); // 801ED968
  goto L_801ED97C; // 801ED96C
L_801ED970:;
  c->r[3]=c->r[1]+0x0000000Cu; // 801ED970
  c->r[4]=c->r[1]+0x00000008u; // 801ED974
  c->lr=0x801ED97Cu; f_801E9690(c); // 801ED978
L_801ED97C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801ED97C
  c->lr=c->r[0]; // 801ED980
  c->r[1]=c->r[1]+0x00000020u; // 801ED984
  return; // 801ED988
}

// btu_hcif_qos_setup_comp_evt
void f_801ED98C(Ctx* __restrict c) {
  trace_call(0x801ED98Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ED98C
  c->r[0]=c->lr; // 801ED990
  c->r[6]=c->r[3]|c->r[3]; // 801ED994
  W32(c->r[1]+0x00000024u,c->r[0]); // 801ED998
  c->r[5]=c->r[1]+0x00000008u; // 801ED99C
  c->r[4]=R8(c->r[6]+0x00000002u); // 801ED9A0
  c->r[3]=R8(c->r[3]+0x00000000u); // 801ED9A4
  c->r[7]=R8(c->r[6]+0x00000001u); // 801ED9A8
  c->r[4]=rotl(c->r[4],8)&0xFFFFFF00u; // 801ED9AC
  c->r[0]=R8(c->r[6]+0x00000003u); // 801ED9B0
  c->r[4]=c->r[7]+c->r[4]; // 801ED9B4
  W8(c->r[1]+0x00000008u,c->r[0]); // 801ED9B8
  c->r[4]=rotl(c->r[4],0)&0x0000FFFFu; // 801ED9BC
  c->r[0]=R8(c->r[6]+0x00000004u); // 801ED9C0
  W8(c->r[1]+0x00000009u,c->r[0]); // 801ED9C4
  c->r[7]=R8(c->r[6]+0x00000008u); // 801ED9C8
  c->r[8]=R8(c->r[6]+0x00000007u); // 801ED9CC
  c->r[0]=R8(c->r[6]+0x00000006u); // 801ED9D0
  c->r[9]=rotl(c->r[7],24)&0xFF000000u; // 801ED9D4
  c->r[7]=R8(c->r[6]+0x00000005u); // 801ED9D8
  c->r[8]=rotl(c->r[8],16)&0xFFFF0000u; // 801ED9DC
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801ED9E0
  c->r[7]=c->r[8]+c->r[7]; // 801ED9E4
  c->r[0]=c->r[9]+c->r[0]; // 801ED9E8
  c->r[0]=c->r[7]+c->r[0]; // 801ED9EC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801ED9F0
  c->r[7]=R8(c->r[6]+0x0000000Cu); // 801ED9F4
  c->r[8]=R8(c->r[6]+0x0000000Bu); // 801ED9F8
  c->r[0]=R8(c->r[6]+0x0000000Au); // 801ED9FC
  c->r[9]=rotl(c->r[7],24)&0xFF000000u; // 801EDA00
  c->r[7]=R8(c->r[6]+0x00000009u); // 801EDA04
  c->r[8]=rotl(c->r[8],16)&0xFFFF0000u; // 801EDA08
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801EDA0C
  c->r[7]=c->r[8]+c->r[7]; // 801EDA10
  c->r[0]=c->r[9]+c->r[0]; // 801EDA14
  c->r[0]=c->r[7]+c->r[0]; // 801EDA18
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EDA1C
  c->r[7]=R8(c->r[6]+0x00000010u); // 801EDA20
  c->r[8]=R8(c->r[6]+0x0000000Fu); // 801EDA24
  c->r[0]=R8(c->r[6]+0x0000000Eu); // 801EDA28
  c->r[9]=rotl(c->r[7],24)&0xFF000000u; // 801EDA2C
  c->r[7]=R8(c->r[6]+0x0000000Du); // 801EDA30
  c->r[8]=rotl(c->r[8],16)&0xFFFF0000u; // 801EDA34
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801EDA38
  c->r[7]=c->r[8]+c->r[7]; // 801EDA3C
  c->r[0]=c->r[9]+c->r[0]; // 801EDA40
  c->r[0]=c->r[7]+c->r[0]; // 801EDA44
  W32(c->r[1]+0x00000018u,c->r[0]); // 801EDA48
  c->r[8]=R8(c->r[6]+0x00000014u); // 801EDA4C
  c->r[7]=R8(c->r[6]+0x00000013u); // 801EDA50
  c->r[0]=R8(c->r[6]+0x00000012u); // 801EDA54
  c->r[8]=rotl(c->r[8],24)&0xFF000000u; // 801EDA58
  c->r[6]=R8(c->r[6]+0x00000011u); // 801EDA5C
  c->r[7]=rotl(c->r[7],16)&0xFFFF0000u; // 801EDA60
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801EDA64
  c->r[6]=c->r[7]+c->r[6]; // 801EDA68
  c->r[0]=c->r[8]+c->r[0]; // 801EDA6C
  c->r[0]=c->r[6]+c->r[0]; // 801EDA70
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801EDA74
  c->lr=0x801EDA7Cu; f_801E4174(c); // 801EDA78
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EDA7C
  c->lr=c->r[0]; // 801EDA80
  c->r[1]=c->r[1]+0x00000020u; // 801EDA84
  return; // 801EDA88
}

// btu_hcif_esco_connection_comp_evt
void f_801EDA8C(Ctx* __restrict c) {
  trace_call(0x801EDA8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EDA8C
  c->r[0]=c->lr; // 801EDA90
  c->r[5]=0u+0x00000006u; // 801EDA94
  W32(c->r[1]+0x00000034u,c->r[0]); // 801EDA98
  c->r[4]=c->r[1]+0x00000008u; // 801EDA9C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801EDAA0
  W32(c->r[1]+0x00000028u,c->r[30]); // 801EDAA4
  c->r[0]=R8(c->r[3]+0x00000002u); // 801EDAA8
  c->r[31]=R8(c->r[3]+0x00000000u); // 801EDAAC
  c->r[6]=rotl(c->r[0],8)&0xFFFFFF00u; // 801EDAB0
  c->r[7]=R8(c->r[3]+0x00000001u); // 801EDAB4
  c->r[0]=R8(c->r[3]+0x00000003u); // 801EDAB8
  c->r[6]=c->r[7]+c->r[6]; // 801EDABC
  W8(c->r[1]+0x0000000Du,c->r[0]); // 801EDAC0
  c->r[30]=rotl(c->r[6],0)&0x0000FFFFu; // 801EDAC4
  c->r[0]=R8(c->r[3]+0x00000004u); // 801EDAC8
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801EDACC
  c->r[0]=R8(c->r[3]+0x00000005u); // 801EDAD0
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 801EDAD4
  c->r[0]=R8(c->r[3]+0x00000006u); // 801EDAD8
  W8(c->r[1]+0x0000000Au,c->r[0]); // 801EDADC
  c->r[0]=R8(c->r[3]+0x00000007u); // 801EDAE0
  W8(c->r[1]+0x00000009u,c->r[0]); // 801EDAE4
  c->r[0]=R8(c->r[3]+0x00000008u); // 801EDAE8
  W8(c->r[1]+0x00000008u,c->r[0]); // 801EDAEC
  c->r[0]=R8(c->r[3]+0x00000009u); // 801EDAF0
  W8(c->r[1]+0x0000001Au,c->r[0]); // 801EDAF4
  c->r[0]=R8(c->r[3]+0x0000000Au); // 801EDAF8
  W8(c->r[1]+0x0000001Bu,c->r[0]); // 801EDAFC
  c->r[0]=R8(c->r[3]+0x0000000Bu); // 801EDB00
  W8(c->r[1]+0x0000001Cu,c->r[0]); // 801EDB04
  c->r[0]=R8(c->r[3]+0x0000000Du); // 801EDB08
  c->r[6]=R8(c->r[3]+0x0000000Cu); // 801EDB0C
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801EDB10
  c->r[0]=c->r[6]+c->r[0]; // 801EDB14
  W16(c->r[1]+0x00000010u,c->r[0]); // 801EDB18
  c->r[0]=R8(c->r[3]+0x0000000Fu); // 801EDB1C
  c->r[6]=R8(c->r[3]+0x0000000Eu); // 801EDB20
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801EDB24
  c->r[0]=c->r[6]+c->r[0]; // 801EDB28
  W16(c->r[1]+0x00000012u,c->r[0]); // 801EDB2C
  c->r[0]=R8(c->r[3]+0x00000010u); // 801EDB30
  c->r[3]=c->r[1]+0x00000014u; // 801EDB34
  W8(c->r[1]+0x0000001Du,c->r[0]); // 801EDB38
  c->lr=0x801EDB40u; f_80004364(c); // 801EDB3C
  c->r[3]=c->r[31]|c->r[31]; // 801EDB40
  c->r[5]=c->r[30]|c->r[30]; // 801EDB44
  c->r[4]=c->r[1]+0x00000008u; // 801EDB48
  c->r[6]=c->r[1]+0x00000010u; // 801EDB4C
  c->lr=0x801EDB54u; f_801E9870(c); // 801EDB50
  c->r[0]=R32(c->r[1]+0x00000034u); // 801EDB54
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801EDB58
  c->r[30]=R32(c->r[1]+0x00000028u); // 801EDB5C
  c->lr=c->r[0]; // 801EDB60
  c->r[1]=c->r[1]+0x00000030u; // 801EDB64
  return; // 801EDB68
}

// btu_hcif_hdl_command_complete
void f_801EDB6C(Ctx* __restrict c) {
  trace_call(0x801EDB6Cu);
  cmps(c,0,(int32_t)c->r[3],3092); // 801EDB6C
  c->r[6]=c->r[3]|c->r[3]; // 801EDB70
  if (crb(c,2)) { goto L_801EDC7C; } // 801EDB74
  if (!crb(c,0)) { goto L_801EDBD0; } // 801EDB78
  cmps(c,0,(int32_t)c->r[3],3077); // 801EDB7C
  if (crb(c,2)) { goto L_801EDC30; } // 801EDB80
  if (!crb(c,0)) { goto L_801EDBAC; } // 801EDB84
  cmps(c,0,(int32_t)c->r[3],2060); // 801EDB88
  if (crb(c,2)) { goto L_801EDC5C; } // 801EDB8C
  if (!crb(c,0)) { goto L_801EDBA0; } // 801EDB90
  cmps(c,0,(int32_t)c->r[3],1026); // 801EDB94
  if (crb(c,2)) { goto L_801EDC28; } // 801EDB98
  goto L_801EDCA4; // 801EDB9C
L_801EDBA0:;
  cmps(c,0,(int32_t)c->r[3],3075); // 801EDBA0
  if (crb(c,2)) { goto L_801EDC24; } // 801EDBA4
  goto L_801EDCA4; // 801EDBA8
L_801EDBAC:;
  cmps(c,0,(int32_t)c->r[3],3089); // 801EDBAC
  if (crb(c,2)) { goto L_801EDC40; } // 801EDBB0
  if (!crb(c,0)) { goto L_801EDBC4; } // 801EDBB4
  cmps(c,0,(int32_t)c->r[3],3085); // 801EDBB8
  if (crb(c,2)) { goto L_801EDC38; } // 801EDBBC
  goto L_801EDCA4; // 801EDBC0
L_801EDBC4:;
  cmps(c,0,(int32_t)c->r[3],3091); // 801EDBC4
  if (!crb(c,0)) { goto L_801EDCA4; } // 801EDBC8
  goto L_801EDC48; // 801EDBCC
L_801EDBD0:;
  cmps(c,0,(int32_t)c->r[3],4105); // 801EDBD0
  if (crb(c,2)) { goto L_801EDC88; } // 801EDBD4
  if (!crb(c,0)) { goto L_801EDC00; } // 801EDBD8
  cmps(c,0,(int32_t)c->r[3],4099); // 801EDBDC
  if (crb(c,2)) { goto L_801EDC70; } // 801EDBE0
  if (!crb(c,0)) { goto L_801EDBF4; } // 801EDBE4
  cmps(c,0,(int32_t)c->r[3],4097); // 801EDBE8
  if (crb(c,2)) { goto L_801EDC50; } // 801EDBEC
  goto L_801EDCA4; // 801EDBF0
L_801EDBF4:;
  cmps(c,0,(int32_t)c->r[3],4101); // 801EDBF4
  if (crb(c,2)) { goto L_801EDC64; } // 801EDBF8
  goto L_801EDCA4; // 801EDBFC
L_801EDC00:;
  cmps(c,0,(int32_t)c->r[3],5124); // 801EDC00
  if (crb(c,2)) { goto L_801EDCA4; } // 801EDC04
  if (!crb(c,0)) { goto L_801EDC18; } // 801EDC08
  cmps(c,0,(int32_t)c->r[3],5123); // 801EDC0C
  if (!crb(c,0)) { goto L_801EDC94; } // 801EDC10
  goto L_801EDCA4; // 801EDC14
L_801EDC18:;
  cmps(c,0,(int32_t)c->r[3],5126); // 801EDC18
  if (!crb(c,0)) { goto L_801EDCA4; } // 801EDC1C
  goto L_801EDC9C; // 801EDC20
L_801EDC24:;
  f_801E56D8(c); return; // 801EDC24
L_801EDC28:;
  c->r[3]=0u+0x00000000u; // 801EDC28
  f_801E8208(c); return; // 801EDC2C
L_801EDC30:;
  c->r[3]=c->r[4]|c->r[4]; // 801EDC30
  f_801E7D70(c); return; // 801EDC34
L_801EDC38:;
  c->r[3]=c->r[4]|c->r[4]; // 801EDC38
  f_801E673C(c); return; // 801EDC3C
L_801EDC40:;
  c->r[3]=c->r[4]|c->r[4]; // 801EDC40
  f_801E67B8(c); return; // 801EDC44
L_801EDC48:;
  c->r[3]=c->r[4]|c->r[4]; // 801EDC48
  f_801E6814(c); return; // 801EDC4C
L_801EDC50:;
  c->r[3]=c->r[4]|c->r[4]; // 801EDC50
  c->r[4]=c->r[5]|c->r[5]; // 801EDC54
  f_801E5964(c); return; // 801EDC58
L_801EDC5C:;
  c->r[3]=c->r[4]|c->r[4]; // 801EDC5C
  f_801E36F8(c); return; // 801EDC60
L_801EDC64:;
  c->r[3]=c->r[4]|c->r[4]; // 801EDC64
  c->r[4]=c->r[5]|c->r[5]; // 801EDC68
  f_801E589C(c); return; // 801EDC6C
L_801EDC70:;
  c->r[3]=c->r[4]|c->r[4]; // 801EDC70
  c->r[4]=c->r[5]|c->r[5]; // 801EDC74
  f_801E5A20(c); return; // 801EDC78
L_801EDC7C:;
  c->r[3]=c->r[4]|c->r[4]; // 801EDC7C
  c->r[4]=c->r[5]|c->r[5]; // 801EDC80
  f_801E5FD4(c); return; // 801EDC84
L_801EDC88:;
  c->r[3]=c->r[4]|c->r[4]; // 801EDC88
  c->r[4]=c->r[5]|c->r[5]; // 801EDC8C
  f_801E60A0(c); return; // 801EDC90
L_801EDC94:;
  c->r[3]=c->r[4]|c->r[4]; // 801EDC94
  f_801E45E0(c); return; // 801EDC98
L_801EDC9C:;
  c->r[3]=c->r[4]|c->r[4]; // 801EDC9C
  f_801E44C4(c); return; // 801EDCA0
L_801EDCA4:;
  c->r[3]=rotl(c->r[3],0)&0x0000FC00u; // 801EDCA4
  c->r[0]=c->r[3]+0x00000000u; // 801EDCA8
  cmpu(c,0,c->r[0],0x0000FC00u); // 801EDCAC
  if (!crb(c,2)) return; // 801EDCB0
  c->r[3]=c->r[4]|c->r[4]; // 801EDCB4
  c->r[4]=c->r[6]|c->r[6]; // 801EDCB8
  f_801E62E8(c); return; // 801EDCBC
  return; // 801EDCC0
}

// btu_hcif_command_complete_evt
void f_801EDCC4(Ctx* __restrict c) {
  trace_call(0x801EDCC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EDCC4
  c->r[0]=c->lr; // 801EDCC8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EDCCC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801EDCD0
  c->r[31]=0u+0x80310000u; // 801EDCD4
  c->r[31]=c->r[31]+0xFFFF82F0u; // 801EDCD8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801EDCDC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801EDCE0
  c->r[29]=c->r[4]|c->r[4]; // 801EDCE4
  W32(c->r[1]+0x00000010u,c->r[28]); // 801EDCE8
  c->r[28]=c->r[3]|c->r[3]; // 801EDCEC
  c->r[0]=R8(c->r[3]+0x00000000u); // 801EDCF0
  W16(c->r[31]+0x00000080u,c->r[0]); // 801EDCF4
  c->r[0]=R8(c->r[3]+0x00000002u); // 801EDCF8
  c->r[3]=R8(c->r[3]+0x00000001u); // 801EDCFC
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801EDD00
  c->r[0]=c->r[3]+c->r[0]; // 801EDD04
  c->r[30]=rotl(c->r[0],0)&0x0000FFFFu; // 801EDD08
  cmpu(c,0,c->r[30],0x00000C03u); // 801EDD0C
  if (crb(c,2)) { goto L_801EDDA0; } // 801EDD10
  cmpu(c,0,c->r[30],0x00000C35u); // 801EDD14
  if (crb(c,2)) { goto L_801EDDA0; } // 801EDD18
  cmps(c,0,(int32_t)c->r[30],0); // 801EDD1C
  if (crb(c,2)) { goto L_801EDDA0; } // 801EDD20
  c->r[3]=c->r[31]+0x00000070u; // 801EDD24
  c->lr=0x801EDD2Cu; f_801DA320(c); // 801EDD28
  cmps(c,0,(int32_t)c->r[3],0); // 801EDD2C
  if (crb(c,2)) { goto L_801EDD6C; } // 801EDD30
  c->r[0]=R8(c->r[3]+0x00000009u); // 801EDD34
  cmpu(c,0,c->r[30],0x0000FC4Cu); // 801EDD38
  c->r[4]=R8(c->r[3]+0x00000008u); // 801EDD3C
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801EDD40
  c->r[0]=c->r[4]+c->r[0]; // 801EDD44
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801EDD48
  if (!crb(c,2)) { goto L_801EDD68; } // 801EDD4C
  cmpu(c,0,c->r[0],c->r[30]); // 801EDD50
  if (crb(c,2)) { goto L_801EDD68; } // 801EDD54
  c->r[4]=c->r[3]|c->r[3]; // 801EDD58
  c->r[3]=c->r[31]+0x00000070u; // 801EDD5C
  c->lr=0x801EDD64u; f_801DA1E0(c); // 801EDD60
  goto L_801EDDBC; // 801EDD64
L_801EDD68:;
  c->lr=0x801EDD6Cu; f_801D9C70(c); // 801EDD68
L_801EDD6C:;
  c->r[31]=0u+0x80310000u; // 801EDD6C
  c->r[31]=c->r[31]+0xFFFF82F0u; // 801EDD70
  c->r[3]=c->r[31]+0x00000070u; // 801EDD74
  c->lr=0x801EDD7Cu; f_801DA4C0(c); // 801EDD78
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801EDD7C
  if (!crb(c,2)) { goto L_801EDD98; } // 801EDD80
  c->r[3]=c->r[31]+0x0000004Cu; // 801EDD84
  c->r[4]=0u+0x0000003Cu; // 801EDD88
  c->r[5]=0u+0x00000008u; // 801EDD8C
  c->lr=0x801EDD94u; f_801DCD40(c); // 801EDD90
  goto L_801EDDA0; // 801EDD94
L_801EDD98:;
  c->r[3]=c->r[31]+0x0000004Cu; // 801EDD98
  c->lr=0x801EDDA0u; f_801DCDB0(c); // 801EDD9C
L_801EDDA0:;
  c->r[0]=c->r[29]+0xFFFFFFFDu; // 801EDDA0
  c->r[3]=c->r[30]|c->r[30]; // 801EDDA4
  c->r[4]=c->r[28]+0x00000003u; // 801EDDA8
  c->r[5]=rotl(c->r[0],0)&0x0000FFFFu; // 801EDDAC
  c->lr=0x801EDDB4u; f_801EDB6C(c); // 801EDDB0
  c->r[3]=0u+0x00000000u; // 801EDDB4
  c->lr=0x801EDDBCu; f_801ED698(c); // 801EDDB8
L_801EDDBC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EDDBC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801EDDC0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801EDDC4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801EDDC8
  c->r[28]=R32(c->r[1]+0x00000010u); // 801EDDCC
  c->lr=c->r[0]; // 801EDDD0
  c->r[1]=c->r[1]+0x00000020u; // 801EDDD4
  return; // 801EDDD8
}

// btu_hcif_hdl_command_status
void f_801EDDDC(Ctx* __restrict c) {
  trace_call(0x801EDDDCu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EDDDC
  c->r[0]=c->lr; // 801EDDE0
  cmps(c,0,(int32_t)c->r[3],2050); // 801EDDE4
  c->r[6]=c->r[3]|c->r[3]; // 801EDDE8
  W32(c->r[1]+0x00000034u,c->r[0]); // 801EDDEC
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801EDDF0
  W32(c->r[1]+0x00000028u,c->r[30]); // 801EDDF4
  c->r[30]=c->r[4]|c->r[4]; // 801EDDF8
  if (crb(c,2)) { goto L_801EDE24; } // 801EDDFC
  if (!crb(c,0)) { goto L_801EDE10; } // 801EDE00
  cmps(c,0,(int32_t)c->r[3],2049); // 801EDE04
  if (!crb(c,0)) { goto L_801EDE18; } // 801EDE08
  goto L_801EDE24; // 801EDE0C
L_801EDE10:;
  cmps(c,0,(int32_t)c->r[3],2055); // 801EDE10
  if (!crb(c,0)) { goto L_801EDE24; } // 801EDE14
L_801EDE18:;
  c->r[3]=c->r[30]|c->r[30]; // 801EDE18
  c->lr=0x801EDE20u; f_801E900C(c); // 801EDE1C
  goto L_801EDFC4; // 801EDE20
L_801EDE24:;
  cmps(c,0,(int32_t)c->r[4],0); // 801EDE24
  if (crb(c,2)) { goto L_801EDFC4; } // 801EDE28
  cmps(c,0,(int32_t)c->r[3],1049); // 801EDE2C
  if (crb(c,2)) { goto L_801EDE80; } // 801EDE30
  if (!crb(c,0)) { goto L_801EDE5C; } // 801EDE34
  cmps(c,0,(int32_t)c->r[3],1025); // 801EDE38
  if (crb(c,2)) { goto L_801EDE74; } // 801EDE3C
  if (!crb(c,0)) { goto L_801EDE50; } // 801EDE40
  cmps(c,0,(int32_t)c->r[3],13); // 801EDE44
  if (crb(c,2)) { goto L_801EDEA8; } // 801EDE48
  goto L_801EDFA4; // 801EDE4C
L_801EDE50:;
  cmps(c,0,(int32_t)c->r[3],1029); // 801EDE50
  if (crb(c,2)) { goto L_801EDED4; } // 801EDE54
  goto L_801EDFA4; // 801EDE58
L_801EDE5C:;
  cmps(c,0,(int32_t)c->r[3],2059); // 801EDE5C
  if (crb(c,2)) { goto L_801EDEBC; } // 801EDE60
  if (!crb(c,0)) { goto L_801EDFA4; } // 801EDE64
  cmps(c,0,(int32_t)c->r[3],1064); // 801EDE68
  if (crb(c,2)) { goto L_801EDF40; } // 801EDE6C
  goto L_801EDFA4; // 801EDE70
L_801EDE74:;
  c->r[3]=c->r[30]|c->r[30]; // 801EDE74
  c->lr=0x801EDE7Cu; f_801E8208(c); // 801EDE78
  goto L_801EDFC4; // 801EDE7C
L_801EDE80:;
  c->r[6]=c->r[30]|c->r[30]; // 801EDE80
  c->r[3]=0u+0x00000000u; // 801EDE84
  c->r[4]=0u+0x00000000u; // 801EDE88
  c->r[5]=0u+0x00000000u; // 801EDE8C
  c->lr=0x801EDE94u; f_801E845C(c); // 801EDE90
  c->r[5]=c->r[30]|c->r[30]; // 801EDE94
  c->r[3]=0u+0x00000000u; // 801EDE98
  c->r[4]=0u+0x00000000u; // 801EDE9C
  c->lr=0x801EDEA4u; f_801EB4B8(c); // 801EDEA0
  goto L_801EDFC4; // 801EDEA4
L_801EDEA8:;
  c->r[3]=c->r[30]|c->r[30]; // 801EDEA8
  c->r[4]=0u+0x00000000u; // 801EDEAC
  c->r[5]=0u+0x00000000u; // 801EDEB0
  c->lr=0x801EDEB8u; f_801E4174(c); // 801EDEB4
  goto L_801EDFC4; // 801EDEB8
L_801EDEBC:;
  c->r[3]=c->r[30]|c->r[30]; // 801EDEBC
  c->r[4]=0u+0x00000000u; // 801EDEC0
  c->r[5]=0u+0x000000FFu; // 801EDEC4
  c->lr=0x801EDECCu; f_801E3D40(c); // 801EDEC8
  c->lr=0x801EDED0u; f_801F813C(c); // 801EDECC
  goto L_801EDFC4; // 801EDED0
L_801EDED4:;
  cmps(c,0,(int32_t)c->r[5],0); // 801EDED4
  if (crb(c,2)) { goto L_801EDFC4; } // 801EDED8
  c->r[4]=R8(c->r[5]+0x00000001u); // 801EDEDC
  c->r[31]=0u+0x00010000u; // 801EDEE0
  c->r[0]=c->r[31]+0xFFFFFFFFu; // 801EDEE4
  c->r[3]=c->r[1]+0x00000008u; // 801EDEE8
  W8(c->r[1]+0x0000000Du,c->r[4]); // 801EDEEC
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 801EDEF0
  c->r[6]=0u+0x00000000u; // 801EDEF4
  c->r[0]=R8(c->r[5]+0x00000002u); // 801EDEF8
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801EDEFC
  c->r[0]=R8(c->r[5]+0x00000003u); // 801EDF00
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 801EDF04
  c->r[0]=R8(c->r[5]+0x00000004u); // 801EDF08
  W8(c->r[1]+0x0000000Au,c->r[0]); // 801EDF0C
  c->r[0]=R8(c->r[5]+0x00000005u); // 801EDF10
  W8(c->r[1]+0x00000009u,c->r[0]); // 801EDF14
  c->r[0]=R8(c->r[5]+0x00000006u); // 801EDF18
  c->r[5]=c->r[30]|c->r[30]; // 801EDF1C
  W8(c->r[1]+0x00000008u,c->r[0]); // 801EDF20
  c->lr=0x801EDF28u; f_801EBD5C(c); // 801EDF24
  c->r[0]=c->r[31]+0xFFFFFFFFu; // 801EDF28
  c->r[3]=c->r[30]|c->r[30]; // 801EDF2C
  c->r[5]=c->r[1]+0x00000008u; // 801EDF30
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 801EDF34
  c->lr=0x801EDF3Cu; f_801F7290(c); // 801EDF38
  goto L_801EDFC4; // 801EDF3C
L_801EDF40:;
  cmps(c,0,(int32_t)c->r[5],0); // 801EDF40
  if (crb(c,2)) { goto L_801EDFC4; } // 801EDF44
  c->r[0]=R8(c->r[5]+0x00000002u); // 801EDF48
  c->r[3]=R8(c->r[5]+0x00000001u); // 801EDF4C
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801EDF50
  c->r[0]=c->r[3]+c->r[0]; // 801EDF54
  c->r[31]=rotl(c->r[0],0)&0x0000FFFFu; // 801EDF58
  c->r[3]=c->r[31]|c->r[31]; // 801EDF5C
  c->lr=0x801EDF64u; f_801E9FC4(c); // 801EDF60
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801EDF64
  if (crb(c,2)) { goto L_801EDF8C; } // 801EDF68
  c->r[3]=c->r[30]|c->r[30]; // 801EDF6C
  c->r[4]=c->r[31]|c->r[31]; // 801EDF70
  c->r[5]=0u+0x00000000u; // 801EDF74
  c->r[6]=0u+0x00000000u; // 801EDF78
  c->r[7]=0u+0x00000000u; // 801EDF7C
  c->r[8]=0u+0x00000000u; // 801EDF80
  c->lr=0x801EDF88u; f_801E9EC0(c); // 801EDF84
  goto L_801EDFC4; // 801EDF88
L_801EDF8C:;
  c->r[3]=c->r[30]|c->r[30]; // 801EDF8C
  c->r[5]=c->r[31]|c->r[31]; // 801EDF90
  c->r[6]=c->r[1]+0x00000010u; // 801EDF94
  c->r[4]=0u+0x00000000u; // 801EDF98
  c->lr=0x801EDFA0u; f_801E9870(c); // 801EDF9C
  goto L_801EDFC4; // 801EDFA0
L_801EDFA4:;
  c->r[3]=rotl(c->r[3],0)&0x0000FC00u; // 801EDFA4
  c->r[0]=c->r[3]+0x00000000u; // 801EDFA8
  cmpu(c,0,c->r[0],0x0000FC00u); // 801EDFAC
  if (!crb(c,2)) { goto L_801EDFC4; } // 801EDFB0
  c->r[3]=c->r[5]|c->r[5]; // 801EDFB4
  c->r[4]=c->r[6]|c->r[6]; // 801EDFB8
  c->r[5]=0u+0x00000001u; // 801EDFBC
  c->lr=0x801EDFC4u; f_801E62E8(c); // 801EDFC0
L_801EDFC4:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801EDFC4
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801EDFC8
  c->r[30]=R32(c->r[1]+0x00000028u); // 801EDFCC
  c->lr=c->r[0]; // 801EDFD0
  c->r[1]=c->r[1]+0x00000030u; // 801EDFD4
  return; // 801EDFD8
}

// btu_hcif_command_status_evt
void f_801EDFDC(Ctx* __restrict c) {
  trace_call(0x801EDFDCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EDFDC
  c->r[0]=c->lr; // 801EDFE0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EDFE4
  c->r[11]=c->r[1]+0x00000020u; // 801EDFE8
  c->lr=0x801EDFF0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801EDFEC
  c->r[4]=0u+0x80310000u; // 801EDFF0
  c->r[29]=R8(c->r[3]+0x00000000u); // 801EDFF4
  c->r[0]=R8(c->r[3]+0x00000001u); // 801EDFF8
  c->r[4]=c->r[4]+0xFFFF82F0u; // 801EDFFC
  c->r[31]=0u+0x00000000u; // 801EE000
  c->r[27]=0u+0x00000000u; // 801EE004
  W16(c->r[4]+0x00000080u,c->r[0]); // 801EE008
  c->r[0]=R8(c->r[3]+0x00000003u); // 801EE00C
  c->r[3]=R8(c->r[3]+0x00000002u); // 801EE010
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801EE014
  c->r[0]=c->r[3]+c->r[0]; // 801EE018
  c->r[28]=rotl(c->r[0],0)&0x0000FFFFu; // 801EE01C
  cmpu(c,0,c->r[28],0x00000C03u); // 801EE020
  if (crb(c,2)) { goto L_801EE0C4; } // 801EE024
  cmpu(c,0,c->r[28],0x00000C35u); // 801EE028
  if (crb(c,2)) { goto L_801EE0C4; } // 801EE02C
  cmps(c,0,(int32_t)c->r[28],0); // 801EE030
  if (crb(c,2)) { goto L_801EE0C4; } // 801EE034
  c->r[3]=c->r[4]+0x00000070u; // 801EE038
  c->lr=0x801EE040u; f_801DA320(c); // 801EE03C
  cmps(c,0,(int32_t)c->r[3],0); // 801EE040
  c->r[31]=c->r[3]|c->r[3]; // 801EE044
  if (crb(c,2)) { goto L_801EE090; } // 801EE048
  c->r[0]=R16(c->r[3]+0x00000004u); // 801EE04C
  c->r[3]=c->r[3]+c->r[0]; // 801EE050
  c->r[0]=R8(c->r[3]+0x00000009u); // 801EE054
  c->r[27]=c->r[3]+0x0000000Au; // 801EE058
  c->r[3]=R8(c->r[3]+0x00000008u); // 801EE05C
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801EE060
  c->r[0]=c->r[3]+c->r[0]; // 801EE064
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801EE068
  cmpu(c,0,c->r[6],c->r[28]); // 801EE06C
  if (crb(c,2)) { goto L_801EE090; } // 801EE070
  c->r[3]=0u+0x00070000u; // 801EE074
  c->r[4]=0u+0x80280000u; // 801EE078
  c->r[5]=c->r[28]|c->r[28]; // 801EE07C
  c->r[27]=0u+0x00000000u; // 801EE080
  c->r[3]=c->r[3]+0x00000001u; // 801EE084
  c->r[4]=c->r[4]+0x00000390u; // 801EE088
  c->lr=0x801EE090u; f_801DC770(c); // 801EE08C
L_801EE090:;
  c->r[30]=0u+0x80310000u; // 801EE090
  c->r[30]=c->r[30]+0xFFFF82F0u; // 801EE094
  c->r[3]=c->r[30]+0x00000070u; // 801EE098
  c->lr=0x801EE0A0u; f_801DA4C0(c); // 801EE09C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801EE0A0
  if (!crb(c,2)) { goto L_801EE0BC; } // 801EE0A4
  c->r[3]=c->r[30]+0x0000004Cu; // 801EE0A8
  c->r[4]=0u+0x0000003Cu; // 801EE0AC
  c->r[5]=0u+0x00000008u; // 801EE0B0
  c->lr=0x801EE0B8u; f_801DCD40(c); // 801EE0B4
  goto L_801EE0C4; // 801EE0B8
L_801EE0BC:;
  c->r[3]=c->r[30]+0x0000004Cu; // 801EE0BC
  c->lr=0x801EE0C4u; f_801DCDB0(c); // 801EE0C0
L_801EE0C4:;
  c->r[3]=c->r[28]|c->r[28]; // 801EE0C4
  c->r[4]=c->r[29]|c->r[29]; // 801EE0C8
  c->r[5]=c->r[27]|c->r[27]; // 801EE0CC
  c->lr=0x801EE0D4u; f_801EDDDC(c); // 801EE0D0
  cmps(c,0,(int32_t)c->r[31],0); // 801EE0D4
  if (crb(c,2)) { goto L_801EE0E4; } // 801EE0D8
  c->r[3]=c->r[31]|c->r[31]; // 801EE0DC
  c->lr=0x801EE0E4u; f_801D9C70(c); // 801EE0E0
L_801EE0E4:;
  c->r[3]=0u+0x00000000u; // 801EE0E4
  c->lr=0x801EE0ECu; f_801ED698(c); // 801EE0E8
  c->r[11]=c->r[1]+0x00000020u; // 801EE0EC
  c->lr=0x801EE0F4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801EE0F0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EE0F4
  c->lr=c->r[0]; // 801EE0F8
  c->r[1]=c->r[1]+0x00000020u; // 801EE0FC
  return; // 801EE100
}

// btu_hcif_cmd_timeout
void f_801EE104(Ctx* __restrict c) {
  trace_call(0x801EE104u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EE104
  c->r[0]=c->lr; // 801EE108
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EE10C
  c->r[0]=0u+0x00000001u; // 801EE110
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801EE114
  c->r[31]=0u+0x80310000u; // 801EE118
  c->r[31]=c->r[31]+0xFFFF82F0u; // 801EE11C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801EE120
  c->r[3]=c->r[31]+0x00000070u; // 801EE124
  W32(c->r[1]+0x00000014u,c->r[29]); // 801EE128
  W16(c->r[31]+0x00000080u,c->r[0]); // 801EE12C
  c->lr=0x801EE134u; f_801DA320(c); // 801EE130
  cmps(c,0,(int32_t)c->r[3],0); // 801EE134
  c->r[30]=c->r[3]|c->r[3]; // 801EE138
  if (!crb(c,2)) { goto L_801EE158; } // 801EE13C
  c->r[3]=0u+0x00070000u; // 801EE140
  c->r[4]=0u+0x80280000u; // 801EE144
  c->r[3]=c->r[3]+0x00000001u; // 801EE148
  c->r[4]=c->r[4]+0x000003B8u; // 801EE14C
  c->lr=0x801EE154u; f_801DC730(c); // 801EE150
  goto L_801EE240; // 801EE154
L_801EE158:;
  c->r[3]=c->r[31]+0x00000070u; // 801EE158
  c->lr=0x801EE160u; f_801DA4C0(c); // 801EE15C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801EE160
  if (!crb(c,2)) { goto L_801EE178; } // 801EE164
  c->r[3]=c->r[31]+0x0000004Cu; // 801EE168
  c->r[4]=0u+0x0000003Cu; // 801EE16C
  c->r[5]=0u+0x00000008u; // 801EE170
  c->lr=0x801EE178u; f_801DCD40(c); // 801EE174
L_801EE178:;
  c->r[0]=R16(c->r[30]+0x00000004u); // 801EE178
  c->r[3]=0u+0x00070000u; // 801EE17C
  c->r[4]=0u+0x80280000u; // 801EE180
  c->r[31]=c->r[30]+c->r[0]; // 801EE184
  c->r[3]=c->r[3]+0x00000001u; // 801EE188
  c->r[0]=R8(c->r[31]+0x00000009u); // 801EE18C
  c->r[4]=c->r[4]+0x000003D8u; // 801EE190
  c->r[5]=R8(c->r[31]+0x00000008u); // 801EE194
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801EE198
  c->r[0]=c->r[5]+c->r[0]; // 801EE19C
  c->r[29]=rotl(c->r[0],0)&0x0000FFFFu; // 801EE1A0
  c->r[5]=c->r[29]|c->r[29]; // 801EE1A4
  c->lr=0x801EE1ACu; f_801DC750(c); // 801EE1A8
  cmps(c,0,(int32_t)c->r[29],1049); // 801EE1AC
  if (crb(c,2)) { goto L_801EE1FC; } // 801EE1B0
  if (!crb(c,0)) { goto L_801EE1DC; } // 801EE1B4
  cmps(c,0,(int32_t)c->r[29],1025); // 801EE1B8
  if (crb(c,2)) { goto L_801EE1FC; } // 801EE1BC
  if (!crb(c,0)) { goto L_801EE1D0; } // 801EE1C0
  cmps(c,0,(int32_t)c->r[29],13); // 801EE1C4
  if (crb(c,2)) { goto L_801EE1FC; } // 801EE1C8
  goto L_801EE210; // 801EE1CC
L_801EE1D0:;
  cmps(c,0,(int32_t)c->r[29],1029); // 801EE1D0
  if (crb(c,2)) { goto L_801EE1FC; } // 801EE1D4
  goto L_801EE210; // 801EE1D8
L_801EE1DC:;
  cmps(c,0,(int32_t)c->r[29],2050); // 801EE1DC
  if (crb(c,2)) { goto L_801EE210; } // 801EE1E0
  if (!crb(c,0)) { goto L_801EE1F4; } // 801EE1E4
  cmps(c,0,(int32_t)c->r[29],2049); // 801EE1E8
  if (!crb(c,0)) { goto L_801EE1FC; } // 801EE1EC
  goto L_801EE210; // 801EE1F0
L_801EE1F4:;
  cmps(c,0,(int32_t)c->r[29],2055); // 801EE1F4
  if (!crb(c,0)) { goto L_801EE210; } // 801EE1F8
L_801EE1FC:;
  c->r[3]=c->r[29]|c->r[29]; // 801EE1FC
  c->r[5]=c->r[31]+0x0000000Au; // 801EE200
  c->r[4]=0u+0x0000001Fu; // 801EE204
  c->lr=0x801EE20Cu; f_801EDDDC(c); // 801EE208
  goto L_801EE228; // 801EE20C
L_801EE210:;
  c->r[0]=0u+0x0000001Fu; // 801EE210
  c->r[3]=c->r[29]|c->r[29]; // 801EE214
  W8(c->r[1]+0x00000008u,c->r[0]); // 801EE218
  c->r[4]=c->r[1]+0x00000008u; // 801EE21C
  c->r[5]=0u+0x00000001u; // 801EE220
  c->lr=0x801EE228u; f_801EDB6C(c); // 801EE224
L_801EE228:;
  c->r[3]=c->r[30]|c->r[30]; // 801EE228
  c->lr=0x801EE230u; f_801D9C70(c); // 801EE22C
  c->r[3]=0u+0x00000002u; // 801EE230
  c->lr=0x801EE238u; f_801E6A08(c); // 801EE234
  c->r[3]=0u+0x00000000u; // 801EE238
  c->lr=0x801EE240u; f_801ED698(c); // 801EE23C
L_801EE240:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EE240
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801EE244
  c->r[30]=R32(c->r[1]+0x00000018u); // 801EE248
  c->r[29]=R32(c->r[1]+0x00000014u); // 801EE24C
  c->lr=c->r[0]; // 801EE250
  c->r[1]=c->r[1]+0x00000020u; // 801EE254
  return; // 801EE258
}

// btu_hcif_link_key_notification_evt
void f_801EE25C(Ctx* __restrict c) {
  trace_call(0x801EE25Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EE25C
  c->r[0]=c->lr; // 801EE260
  c->r[5]=c->r[3]+0x00000016u; // 801EE264
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EE268
  c->r[4]=c->r[1]+0x00000010u; // 801EE26C
  c->r[0]=R8(c->r[3]+0x00000000u); // 801EE270
  W8(c->r[1]+0x0000000Du,c->r[0]); // 801EE274
  c->r[0]=R8(c->r[3]+0x00000001u); // 801EE278
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801EE27C
  c->r[0]=R8(c->r[3]+0x00000002u); // 801EE280
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 801EE284
  c->r[0]=R8(c->r[3]+0x00000003u); // 801EE288
  W8(c->r[1]+0x0000000Au,c->r[0]); // 801EE28C
  c->r[0]=R8(c->r[3]+0x00000004u); // 801EE290
  W8(c->r[1]+0x00000009u,c->r[0]); // 801EE294
  c->r[0]=R8(c->r[3]+0x00000005u); // 801EE298
  W8(c->r[1]+0x00000008u,c->r[0]); // 801EE29C
  c->r[0]=R8(c->r[3]+0x00000006u); // 801EE2A0
  W8(c->r[1]+0x0000001Fu,c->r[0]); // 801EE2A4
  c->r[0]=R8(c->r[3]+0x00000007u); // 801EE2A8
  W8(c->r[1]+0x0000001Eu,c->r[0]); // 801EE2AC
  c->r[0]=R8(c->r[3]+0x00000008u); // 801EE2B0
  W8(c->r[1]+0x0000001Du,c->r[0]); // 801EE2B4
  c->r[0]=R8(c->r[3]+0x00000009u); // 801EE2B8
  W8(c->r[1]+0x0000001Cu,c->r[0]); // 801EE2BC
  c->r[0]=R8(c->r[3]+0x0000000Au); // 801EE2C0
  W8(c->r[1]+0x0000001Bu,c->r[0]); // 801EE2C4
  c->r[0]=R8(c->r[3]+0x0000000Bu); // 801EE2C8
  W8(c->r[1]+0x0000001Au,c->r[0]); // 801EE2CC
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 801EE2D0
  W8(c->r[1]+0x00000019u,c->r[0]); // 801EE2D4
  c->r[0]=R8(c->r[3]+0x0000000Du); // 801EE2D8
  W8(c->r[1]+0x00000018u,c->r[0]); // 801EE2DC
  c->r[0]=R8(c->r[3]+0x0000000Eu); // 801EE2E0
  W8(c->r[1]+0x00000017u,c->r[0]); // 801EE2E4
  c->r[0]=R8(c->r[3]+0x0000000Fu); // 801EE2E8
  W8(c->r[1]+0x00000016u,c->r[0]); // 801EE2EC
  c->r[0]=R8(c->r[3]+0x00000010u); // 801EE2F0
  W8(c->r[1]+0x00000015u,c->r[0]); // 801EE2F4
  c->r[0]=R8(c->r[3]+0x00000011u); // 801EE2F8
  W8(c->r[1]+0x00000014u,c->r[0]); // 801EE2FC
  c->r[0]=R8(c->r[3]+0x00000012u); // 801EE300
  W8(c->r[1]+0x00000013u,c->r[0]); // 801EE304
  c->r[0]=R8(c->r[3]+0x00000013u); // 801EE308
  W8(c->r[1]+0x00000012u,c->r[0]); // 801EE30C
  c->r[0]=R8(c->r[3]+0x00000014u); // 801EE310
  W8(c->r[1]+0x00000011u,c->r[0]); // 801EE314
  c->r[0]=R8(c->r[3]+0x00000015u); // 801EE318
  c->r[3]=c->r[1]+0x00000008u; // 801EE31C
  W8(c->r[1]+0x00000010u,c->r[0]); // 801EE320
  c->r[5]=R8(c->r[5]+0x00000000u); // 801EE324
  c->lr=0x801EE32Cu; f_801EC3D4(c); // 801EE328
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EE32C
  c->lr=c->r[0]; // 801EE330
  c->r[1]=c->r[1]+0x00000020u; // 801EE334
  return; // 801EE338
}

// btu_init_core
void f_801EE33C(Ctx* __restrict c) {
  trace_call(0x801EE33Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EE33C
  c->r[0]=c->lr; // 801EE340
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EE344
  c->lr=0x801EE34Cu; f_801E85F4(c); // 801EE348
  c->lr=0x801EE350u; f_801F82C8(c); // 801EE34C
  c->lr=0x801EE354u; f_802043F8(c); // 801EE350
  c->lr=0x801EE358u; f_801E6A28(c); // 801EE354
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EE358
  c->lr=c->r[0]; // 801EE35C
  c->r[1]=c->r[1]+0x00000010u; // 801EE360
  return; // 801EE364
}

// BTE_Init
void f_801EE368(Ctx* __restrict c) {
  trace_call(0x801EE368u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EE368
  c->r[0]=c->lr; // 801EE36C
  c->r[4]=0u+0x00000000u; // 801EE370
  c->r[5]=0u+0x00000084u; // 801EE374
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EE378
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EE37C
  c->r[31]=0u+0x80310000u; // 801EE380
  c->r[3]=c->r[31]+0xFFFF82F0u; // 801EE384
  c->lr=0x801EE38Cu; f_800046B4(c); // 801EE388
  c->r[3]=c->r[31]+0xFFFF82F0u; // 801EE38C
  c->r[4]=0u+0x000002A4u; // 801EE390
  c->r[0]=0u+0x00000001u; // 801EE394
  W16(c->r[3]+0x0000007Eu,c->r[4]); // 801EE398
  W16(c->r[3]+0x00000080u,c->r[0]); // 801EE39C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EE3A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EE3A4
  c->lr=c->r[0]; // 801EE3A8
  c->r[1]=c->r[1]+0x00000010u; // 801EE3AC
  return; // 801EE3B0
}

// WBT_ExtCreateRecord
void f_801EE3B4(Ctx* __restrict c) {
  trace_call(0x801EE3B4u);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EE3B4
  c->r[0]=c->lr; // 801EE3B8
  W32(c->r[1]+0x00000124u,c->r[0]); // 801EE3BC
  c->r[0]=0u+0x00001002u; // 801EE3C0
  c->r[3]=c->r[1]+0x00000014u; // 801EE3C4
  c->r[4]=c->r[1]+0x00000010u; // 801EE3C8
  W32(c->r[1]+0x0000011Cu,c->r[31]); // 801EE3CC
  c->r[31]=0u+0x00000000u; // 801EE3D0
  W32(c->r[1]+0x00000118u,c->r[30]); // 801EE3D4
  W32(c->r[1]+0x00000010u,c->r[31]); // 801EE3D8
  W16(c->r[1]+0x00000008u,c->r[0]); // 801EE3DC
  c->lr=0x801EE3E4u; f_80201FE0(c); // 801EE3E0
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801EE3E4
  if (crb(c,2)) { goto L_801EE434; } // 801EE3E8
  c->r[30]=c->r[1]+0x00000016u; // 801EE3EC
  c->r[4]=0u+0x00000000u; // 801EE3F0
  c->r[3]=c->r[30]|c->r[30]; // 801EE3F4
  c->r[5]=0u+0x000000FAu; // 801EE3F8
  c->lr=0x801EE400u; f_800046B4(c); // 801EE3FC
  c->r[0]=0u+0x00000001u; // 801EE400
  c->r[3]=0u+0x0000000Fu; // 801EE404
  W16(c->r[1]+0x00000016u,c->r[3]); // 801EE408
  c->r[3]=c->r[30]|c->r[30]; // 801EE40C
  c->r[4]=c->r[1]+0x00000010u; // 801EE410
  W16(c->r[1]+0x00000018u,c->r[0]); // 801EE414
  W8(c->r[1]+0x0000001Eu,c->r[0]); // 801EE418
  c->lr=0x801EE420u; f_80201C80(c); // 801EE41C
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801EE420
  if (crb(c,2)) { goto L_801EE434; } // 801EE424
  W32(c->r[1]+0x00000010u,c->r[31]); // 801EE428
  c->r[3]=0u+0x00000000u; // 801EE42C
  goto L_801EE47C; // 801EE430
L_801EE434:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 801EE434
  c->r[6]=c->r[1]+0x00000008u; // 801EE438
  c->r[4]=0u+0x00000005u; // 801EE43C
  c->r[5]=0u+0x00000001u; // 801EE440
  c->lr=0x801EE448u; f_80202CF0(c); // 801EE444
  c->r[0]=0u+0x00000000u; // 801EE448
  c->r[4]=0u+0x00000001u; // 801EE44C
  c->r[3]=0u+0x00010000u; // 801EE450
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801EE454
  c->r[0]=c->r[3]+0xFFFF8001u; // 801EE458
  c->r[3]=R32(c->r[1]+0x00000010u); // 801EE45C
  W8(c->r[1]+0x0000000Du,c->r[4]); // 801EE460
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 801EE464
  c->r[7]=c->r[1]+0x0000000Cu; // 801EE468
  c->r[5]=0u+0x00000001u; // 801EE46C
  c->r[6]=0u+0x00000002u; // 801EE470
  c->lr=0x801EE478u; f_80202958(c); // 801EE474
  c->r[3]=0u+0x00000001u; // 801EE478
L_801EE47C:;
  c->r[0]=R32(c->r[1]+0x00000124u); // 801EE47C
  c->r[31]=R32(c->r[1]+0x0000011Cu); // 801EE480
  c->r[30]=R32(c->r[1]+0x00000118u); // 801EE484
  c->lr=c->r[0]; // 801EE488
  c->r[1]=c->r[1]+0x00000120u; // 801EE48C
  return; // 801EE490
}

// GAP_Init
void f_801EE494(Ctx* __restrict c) {
  trace_call(0x801EE494u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EE494
  c->r[0]=c->lr; // 801EE498
  c->r[4]=0u+0x00000000u; // 801EE49C
  c->r[5]=0u+0x000003ACu; // 801EE4A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EE4A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EE4A8
  c->r[31]=0u+0x80310000u; // 801EE4AC
  c->r[3]=c->r[31]+0xFFFFAFE0u; // 801EE4B0
  c->lr=0x801EE4B8u; f_800046B4(c); // 801EE4B4
  c->r[5]=0u+0x801F0000u; // 801EE4B8
  c->r[3]=0u+0x801F0000u; // 801EE4BC
  c->r[5]=c->r[5]+0xFFFFF208u; // 801EE4C0
  c->r[4]=c->r[31]+0xFFFFAFE0u; // 801EE4C4
  c->r[3]=c->r[3]+0xFFFFF214u; // 801EE4C8
  c->r[0]=0u+0x00000005u; // 801EE4CC
  W32(c->r[4]+0x00000020u,c->r[5]); // 801EE4D0
  W32(c->r[4]+0x00000024u,c->r[3]); // 801EE4D4
  W8(c->r[4]+0x00000028u,c->r[0]); // 801EE4D8
  c->lr=0x801EE4E0u; f_801EE4F4(c); // 801EE4DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EE4E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EE4E4
  c->lr=c->r[0]; // 801EE4E8
  c->r[1]=c->r[1]+0x00000010u; // 801EE4EC
  return; // 801EE4F0
}

// gap_conn_init
void f_801EE4F4(Ctx* __restrict c) {
  trace_call(0x801EE4F4u);
  c->r[10]=0u+0x801F0000u; // 801EE4F4
  c->r[9]=0u+0x80310000u; // 801EE4F8
  c->r[8]=0u+0x801F0000u; // 801EE4FC
  c->r[7]=0u+0x801F0000u; // 801EE500
  c->r[6]=0u+0x801F0000u; // 801EE504
  c->r[5]=0u+0x801F0000u; // 801EE508
  c->r[4]=0u+0x801F0000u; // 801EE50C
  c->r[3]=0u+0x801F0000u; // 801EE510
  c->r[10]=c->r[10]+0xFFFFE564u; // 801EE514
  c->r[9]=c->r[9]+0xFFFFAFE0u; // 801EE518
  c->r[0]=0u+0x00000000u; // 801EE51C
  c->r[8]=c->r[8]+0xFFFFE6F0u; // 801EE520
  c->r[7]=c->r[7]+0xFFFFE8CCu; // 801EE524
  c->r[6]=c->r[6]+0xFFFFEA08u; // 801EE528
  c->r[5]=c->r[5]+0xFFFFEBF4u; // 801EE52C
  c->r[4]=c->r[4]+0xFFFFEDECu; // 801EE530
  c->r[3]=c->r[3]+0xFFFFEEFCu; // 801EE534
  W32(c->r[9]+0x00000084u,c->r[10]); // 801EE538
  W32(c->r[9]+0x00000088u,c->r[8]); // 801EE53C
  W32(c->r[9]+0x0000008Cu,c->r[0]); // 801EE540
  W32(c->r[9]+0x00000090u,c->r[7]); // 801EE544
  W32(c->r[9]+0x00000094u,c->r[6]); // 801EE548
  W32(c->r[9]+0x00000098u,c->r[5]); // 801EE54C
  W32(c->r[9]+0x0000009Cu,c->r[0]); // 801EE550
  W32(c->r[9]+0x000000A0u,c->r[0]); // 801EE554
  W32(c->r[9]+0x000000A4u,c->r[4]); // 801EE558
  W32(c->r[9]+0x000000A8u,c->r[3]); // 801EE55C
  return; // 801EE560
}

// gap_connect_ind
void f_801EE564(Ctx* __restrict c) {
  trace_call(0x801EE564u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EE564
  c->r[0]=c->lr; // 801EE568
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EE56C
  c->r[11]=c->r[1]+0x00000020u; // 801EE570
  c->lr=0x801EE578u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801EE574
  c->r[7]=0u+0x80310000u; // 801EE578
  c->r[26]=c->r[3]|c->r[3]; // 801EE57C
  c->r[7]=c->r[7]+0xFFFFAFE0u; // 801EE580
  c->r[31]=c->r[4]|c->r[4]; // 801EE584
  c->r[27]=c->r[5]|c->r[5]; // 801EE588
  c->r[28]=c->r[6]|c->r[6]; // 801EE58C
  c->r[29]=c->r[7]+0x000000ACu; // 801EE590
  c->r[30]=0u+0x00000000u; // 801EE594
L_801EE598:;
  c->r[0]=R8(c->r[29]+0x00000000u); // 801EE598
  cmpu(c,0,c->r[0],0x00000001u); // 801EE59C
  if (!crb(c,2)) { goto L_801EE5D4; } // 801EE5A0
  c->r[0]=R16(c->r[29]+0x00000010u); // 801EE5A4
  cmpu(c,0,c->r[0],c->r[27]); // 801EE5A8
  if (!crb(c,2)) { goto L_801EE5D4; } // 801EE5AC
  c->r[0]=R8(c->r[29]+0x00000008u); // 801EE5B0
  cmps(c,0,(int32_t)c->r[0],0); // 801EE5B4
  if (crb(c,2)) { goto L_801EE5E4; } // 801EE5B8
  c->r[3]=c->r[26]|c->r[26]; // 801EE5BC
  c->r[4]=c->r[29]+0x00000009u; // 801EE5C0
  c->r[5]=0u+0x00000006u; // 801EE5C4
  c->lr=0x801EE5CCu; f_8020BD24(c); // 801EE5C8
  cmps(c,0,(int32_t)c->r[3],0); // 801EE5CC
  if (crb(c,2)) { goto L_801EE5E4; } // 801EE5D0
L_801EE5D4:;
  c->r[30]=c->r[30]+0x00000001u; // 801EE5D4
  c->r[29]=c->r[29]+0x00000060u; // 801EE5D8
  cmpu(c,0,c->r[30],0x00000008u); // 801EE5DC
  if (crb(c,0)) { IRQCHK(c); goto L_801EE598; } // 801EE5E0
L_801EE5E4:;
  c->r[0]=rotl(c->r[30],0)&0x0000FFFFu; // 801EE5E4
  cmpu(c,0,c->r[0],0x00000008u); // 801EE5E8
  if (!crb(c,2)) { goto L_801EE66C; } // 801EE5EC
  c->r[3]=0u+0x80310000u; // 801EE5F0
  c->r[3]=c->r[3]+0xFFFFAFE0u; // 801EE5F4
  c->r[0]=R8(c->r[3]+0x00000028u); // 801EE5F8
  cmpu(c,0,c->r[0],0x00000002u); // 801EE5FC
  if (crb(c,0)) { goto L_801EE614; } // 801EE600
  c->r[3]=0u+0x000E0000u; // 801EE604
  c->r[4]=c->r[13]+0xFFFFABE0u; // 801EE608
  c->r[3]=c->r[3]+0x00000001u; // 801EE60C
  c->lr=0x801EE614u; f_801DC730(c); // 801EE610
L_801EE614:;
  c->r[3]=0u+0x80310000u; // 801EE614
  c->r[3]=c->r[3]+0xFFFFAFE0u; // 801EE618
  c->r[0]=R8(c->r[3]+0x00000028u); // 801EE61C
  cmpu(c,0,c->r[0],0x00000002u); // 801EE620
  if (crb(c,0)) { goto L_801EE63C; } // 801EE624
  c->r[3]=0u+0x000E0000u; // 801EE628
  c->r[4]=0u+0x80280000u; // 801EE62C
  c->r[3]=c->r[3]+0x00000001u; // 801EE630
  c->r[4]=c->r[4]+0x00000408u; // 801EE634
  c->lr=0x801EE63Cu; f_801DC730(c); // 801EE638
L_801EE63C:;
  c->r[3]=0u+0x80310000u; // 801EE63C
  c->r[3]=c->r[3]+0xFFFFAFE0u; // 801EE640
  c->r[0]=R8(c->r[3]+0x00000028u); // 801EE644
  cmpu(c,0,c->r[0],0x00000002u); // 801EE648
  if (crb(c,0)) { goto L_801EE660; } // 801EE64C
  c->r[3]=0u+0x000E0000u; // 801EE650
  c->r[4]=c->r[13]+0xFFFFABE0u; // 801EE654
  c->r[3]=c->r[3]+0x00000001u; // 801EE658
  c->lr=0x801EE660u; f_801DC730(c); // 801EE65C
L_801EE660:;
  c->r[3]=c->r[31]|c->r[31]; // 801EE660
  c->lr=0x801EE668u; f_801F580C(c); // 801EE664
  goto L_801EE6D8; // 801EE668
L_801EE66C:;
  c->r[0]=0u+0x00000003u; // 801EE66C
  c->r[4]=c->r[26]|c->r[26]; // 801EE670
  W8(c->r[29]+0x00000000u,c->r[0]); // 801EE674
  c->r[3]=c->r[29]+0x00000009u; // 801EE678
  c->r[5]=0u+0x00000006u; // 801EE67C
  c->lr=0x801EE684u; f_80004364(c); // 801EE680
  W16(c->r[29]+0x00000006u,c->r[31]); // 801EE684
  c->r[3]=c->r[26]|c->r[26]; // 801EE688
  c->r[4]=c->r[28]|c->r[28]; // 801EE68C
  c->r[5]=c->r[31]|c->r[31]; // 801EE690
  c->r[6]=0u+0x00000000u; // 801EE694
  c->r[7]=0u+0x00000000u; // 801EE698
  c->lr=0x801EE6A0u; f_801F54F4(c); // 801EE69C
  c->r[3]=0u+0x80310000u; // 801EE6A0
  c->r[3]=c->r[3]+0xFFFFAFE0u; // 801EE6A4
  c->r[0]=R8(c->r[3]+0x00000028u); // 801EE6A8
  cmpu(c,0,c->r[0],0x00000004u); // 801EE6AC
  if (crb(c,0)) { goto L_801EE6CC; } // 801EE6B0
  c->r[3]=0u+0x000E0000u; // 801EE6B4
  c->r[4]=0u+0x80280000u; // 801EE6B8
  c->r[5]=R16(c->r[29]+0x00000006u); // 801EE6BC
  c->r[3]=c->r[3]+0x00000003u; // 801EE6C0
  c->r[4]=c->r[4]+0x0000044Cu; // 801EE6C4
  c->lr=0x801EE6CCu; f_801DC750(c); // 801EE6C8
L_801EE6CC:;
  c->r[3]=c->r[31]|c->r[31]; // 801EE6CC
  c->r[4]=c->r[29]+0x00000024u; // 801EE6D0
  c->lr=0x801EE6D8u; f_801F5684(c); // 801EE6D4
L_801EE6D8:;
  c->r[11]=c->r[1]+0x00000020u; // 801EE6D8
  c->lr=0x801EE6E0u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801EE6DC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EE6E0
  c->lr=c->r[0]; // 801EE6E4
  c->r[1]=c->r[1]+0x00000020u; // 801EE6E8
  return; // 801EE6EC
}

// gap_connect_cfm
void f_801EE6F0(Ctx* __restrict c) {
  trace_call(0x801EE6F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EE6F0
  c->r[0]=c->lr; // 801EE6F4
  c->r[5]=0u+0x80310000u; // 801EE6F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EE6FC
  c->r[0]=0u+0x00000002u; // 801EE700
  c->r[5]=c->r[5]+0xFFFFAFE0u; // 801EE704
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EE708
  c->r[31]=c->r[5]+0x000000ACu; // 801EE70C
  c->r[5]=0u+0x00000000u; // 801EE710
  W32(c->r[1]+0x00000008u,c->r[30]); // 801EE714
  c->ctr=c->r[0]; // 801EE718
L_801EE71C:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 801EE71C
  cmps(c,0,(int32_t)c->r[0],0); // 801EE720
  if (crb(c,2)) { goto L_801EE738; } // 801EE724
  c->r[0]=R16(c->r[31]+0x00000006u); // 801EE728
  cmpu(c,0,c->r[0],c->r[3]); // 801EE72C
  if (!crb(c,2)) { goto L_801EE738; } // 801EE730
  goto L_801EE7A8; // 801EE734
L_801EE738:;
  {uint32_t ea=c->r[31]+0x00000060u; c->r[0]=R8(ea); c->r[31]=ea;} // 801EE738
  c->r[5]=c->r[5]+0x00000001u; // 801EE73C
  cmps(c,0,(int32_t)c->r[0],0); // 801EE740
  if (crb(c,2)) { goto L_801EE758; } // 801EE744
  c->r[0]=R16(c->r[31]+0x00000006u); // 801EE748
  cmpu(c,0,c->r[0],c->r[3]); // 801EE74C
  if (!crb(c,2)) { goto L_801EE758; } // 801EE750
  goto L_801EE7A8; // 801EE754
L_801EE758:;
  {uint32_t ea=c->r[31]+0x00000060u; c->r[0]=R8(ea); c->r[31]=ea;} // 801EE758
  c->r[5]=c->r[5]+0x00000001u; // 801EE75C
  cmps(c,0,(int32_t)c->r[0],0); // 801EE760
  if (crb(c,2)) { goto L_801EE778; } // 801EE764
  c->r[0]=R16(c->r[31]+0x00000006u); // 801EE768
  cmpu(c,0,c->r[0],c->r[3]); // 801EE76C
  if (!crb(c,2)) { goto L_801EE778; } // 801EE770
  goto L_801EE7A8; // 801EE774
L_801EE778:;
  {uint32_t ea=c->r[31]+0x00000060u; c->r[0]=R8(ea); c->r[31]=ea;} // 801EE778
  c->r[5]=c->r[5]+0x00000001u; // 801EE77C
  cmps(c,0,(int32_t)c->r[0],0); // 801EE780
  if (crb(c,2)) { goto L_801EE798; } // 801EE784
  c->r[0]=R16(c->r[31]+0x00000006u); // 801EE788
  cmpu(c,0,c->r[0],c->r[3]); // 801EE78C
  if (!crb(c,2)) { goto L_801EE798; } // 801EE790
  goto L_801EE7A8; // 801EE794
L_801EE798:;
  c->r[5]=c->r[5]+0x00000001u; // 801EE798
  c->r[31]=c->r[31]+0x00000060u; // 801EE79C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801EE71C; } // 801EE7A0
  c->r[31]=0u+0x00000000u; // 801EE7A4
L_801EE7A8:;
  cmps(c,0,(int32_t)c->r[31],0); // 801EE7A8
  if (crb(c,2)) { goto L_801EE8B4; } // 801EE7AC
  cmps(c,0,(int32_t)c->r[4],0); // 801EE7B0
  if (!crb(c,2)) { goto L_801EE7D8; } // 801EE7B4
  c->r[0]=R8(c->r[31]+0x00000000u); // 801EE7B8
  cmpu(c,0,c->r[0],0x00000002u); // 801EE7BC
  if (!crb(c,2)) { goto L_801EE7D8; } // 801EE7C0
  c->r[0]=0u+0x00000003u; // 801EE7C4
  c->r[4]=c->r[31]+0x00000024u; // 801EE7C8
  W8(c->r[31]+0x00000000u,c->r[0]); // 801EE7CC
  c->lr=0x801EE7D4u; f_801F5684(c); // 801EE7D0
  goto L_801EE8B4; // 801EE7D4
L_801EE7D8:;
  c->r[12]=R32(c->r[31]+0x00000020u); // 801EE7D8
  cmps(c,0,(int32_t)c->r[12],0); // 801EE7DC
  if (crb(c,2)) { goto L_801EE7F4; } // 801EE7E0
  c->r[3]=R16(c->r[31]+0x00000004u); // 801EE7E4
  c->r[4]=0u+0x00000101u; // 801EE7E8
  c->ctr=c->r[12]; // 801EE7EC
  if (true) { c->lr=0x801EE7F4u; dispatch(c,c->ctr); } // 801EE7F0
L_801EE7F4:;
  c->r[30]=R16(c->r[31]+0x00000010u); // 801EE7F4
  goto L_801EE808; // 801EE7F8
L_801EE7FC:;
  c->r[3]=c->r[31]+0x00000014u; // 801EE7FC
  c->lr=0x801EE804u; f_801DA320(c); // 801EE800
  c->lr=0x801EE808u; f_801D9C70(c); // 801EE804
L_801EE808:;
  c->r[0]=R32(c->r[31]+0x00000014u); // 801EE808
  cmps(c,0,(int32_t)c->r[0],0); // 801EE80C
  if (!crb(c,2)) { IRQCHK(c); goto L_801EE7FC; } // 801EE810
  c->r[3]=0u+0x80310000u; // 801EE814
  c->r[4]=0u+0x00000000u; // 801EE818
  c->r[3]=c->r[3]+0xFFFFAFE0u; // 801EE81C
  c->r[0]=0u+0x00000002u; // 801EE820
  W8(c->r[31]+0x00000000u,c->r[4]); // 801EE824
  c->r[4]=c->r[3]+0x000000ACu; // 801EE828
  c->r[3]=0u+0x00000000u; // 801EE82C
  c->ctr=c->r[0]; // 801EE830
L_801EE834:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 801EE834
  cmps(c,0,(int32_t)c->r[0],0); // 801EE838
  if (crb(c,2)) { goto L_801EE84C; } // 801EE83C
  c->r[0]=R16(c->r[4]+0x00000010u); // 801EE840
  cmpu(c,0,c->r[0],c->r[30]); // 801EE844
  if (crb(c,2)) { goto L_801EE8B4; } // 801EE848
L_801EE84C:;
  c->r[0]=R8(c->r[4]+0x00000060u); // 801EE84C
  c->r[3]=c->r[3]+0x00000001u; // 801EE850
  cmps(c,0,(int32_t)c->r[0],0); // 801EE854
  if (crb(c,2)) { goto L_801EE868; } // 801EE858
  c->r[0]=R16(c->r[4]+0x00000070u); // 801EE85C
  cmpu(c,0,c->r[0],c->r[30]); // 801EE860
  if (crb(c,2)) { goto L_801EE8B4; } // 801EE864
L_801EE868:;
  c->r[0]=R8(c->r[4]+0x000000C0u); // 801EE868
  c->r[3]=c->r[3]+0x00000001u; // 801EE86C
  cmps(c,0,(int32_t)c->r[0],0); // 801EE870
  if (crb(c,2)) { goto L_801EE884; } // 801EE874
  c->r[0]=R16(c->r[4]+0x000000D0u); // 801EE878
  cmpu(c,0,c->r[0],c->r[30]); // 801EE87C
  if (crb(c,2)) { goto L_801EE8B4; } // 801EE880
L_801EE884:;
  c->r[0]=R8(c->r[4]+0x00000120u); // 801EE884
  c->r[3]=c->r[3]+0x00000001u; // 801EE888
  cmps(c,0,(int32_t)c->r[0],0); // 801EE88C
  if (crb(c,2)) { goto L_801EE8A0; } // 801EE890
  c->r[0]=R16(c->r[4]+0x00000130u); // 801EE894
  cmpu(c,0,c->r[0],c->r[30]); // 801EE898
  if (crb(c,2)) { goto L_801EE8B4; } // 801EE89C
L_801EE8A0:;
  c->r[3]=c->r[3]+0x00000001u; // 801EE8A0
  c->r[4]=c->r[4]+0x00000180u; // 801EE8A4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801EE834; } // 801EE8A8
  c->r[3]=c->r[30]|c->r[30]; // 801EE8AC
  c->lr=0x801EE8B4u; f_801F5230(c); // 801EE8B0
L_801EE8B4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EE8B4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EE8B8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801EE8BC
  c->lr=c->r[0]; // 801EE8C0
  c->r[1]=c->r[1]+0x00000010u; // 801EE8C4
  return; // 801EE8C8
}

// gap_config_ind
void f_801EE8CC(Ctx* __restrict c) {
  trace_call(0x801EE8CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EE8CC
  c->r[0]=c->lr; // 801EE8D0
  c->r[5]=0u+0x80310000u; // 801EE8D4
  c->r[6]=0u+0x00000000u; // 801EE8D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EE8DC
  c->r[0]=0u+0x00000002u; // 801EE8E0
  c->r[5]=c->r[5]+0xFFFFAFE0u; // 801EE8E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EE8E8
  c->r[31]=c->r[5]+0x000000ACu; // 801EE8EC
  c->ctr=c->r[0]; // 801EE8F0
L_801EE8F4:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 801EE8F4
  cmps(c,0,(int32_t)c->r[0],0); // 801EE8F8
  if (crb(c,2)) { goto L_801EE910; } // 801EE8FC
  c->r[0]=R16(c->r[31]+0x00000006u); // 801EE900
  cmpu(c,0,c->r[0],c->r[3]); // 801EE904
  if (!crb(c,2)) { goto L_801EE910; } // 801EE908
  goto L_801EE980; // 801EE90C
L_801EE910:;
  {uint32_t ea=c->r[31]+0x00000060u; c->r[0]=R8(ea); c->r[31]=ea;} // 801EE910
  c->r[6]=c->r[6]+0x00000001u; // 801EE914
  cmps(c,0,(int32_t)c->r[0],0); // 801EE918
  if (crb(c,2)) { goto L_801EE930; } // 801EE91C
  c->r[0]=R16(c->r[31]+0x00000006u); // 801EE920
  cmpu(c,0,c->r[0],c->r[3]); // 801EE924
  if (!crb(c,2)) { goto L_801EE930; } // 801EE928
  goto L_801EE980; // 801EE92C
L_801EE930:;
  {uint32_t ea=c->r[31]+0x00000060u; c->r[0]=R8(ea); c->r[31]=ea;} // 801EE930
  c->r[6]=c->r[6]+0x00000001u; // 801EE934
  cmps(c,0,(int32_t)c->r[0],0); // 801EE938
  if (crb(c,2)) { goto L_801EE950; } // 801EE93C
  c->r[0]=R16(c->r[31]+0x00000006u); // 801EE940
  cmpu(c,0,c->r[0],c->r[3]); // 801EE944
  if (!crb(c,2)) { goto L_801EE950; } // 801EE948
  goto L_801EE980; // 801EE94C
L_801EE950:;
  {uint32_t ea=c->r[31]+0x00000060u; c->r[0]=R8(ea); c->r[31]=ea;} // 801EE950
  c->r[6]=c->r[6]+0x00000001u; // 801EE954
  cmps(c,0,(int32_t)c->r[0],0); // 801EE958
  if (crb(c,2)) { goto L_801EE970; } // 801EE95C
  c->r[0]=R16(c->r[31]+0x00000006u); // 801EE960
  cmpu(c,0,c->r[0],c->r[3]); // 801EE964
  if (!crb(c,2)) { goto L_801EE970; } // 801EE968
  goto L_801EE980; // 801EE96C
L_801EE970:;
  c->r[6]=c->r[6]+0x00000001u; // 801EE970
  c->r[31]=c->r[31]+0x00000060u; // 801EE974
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801EE8F4; } // 801EE978
  c->r[31]=0u+0x00000000u; // 801EE97C
L_801EE980:;
  cmps(c,0,(int32_t)c->r[31],0); // 801EE980
  if (crb(c,2)) { goto L_801EE9F4; } // 801EE984
  c->r[0]=R8(c->r[4]+0x00000002u); // 801EE988
  cmps(c,0,(int32_t)c->r[0],0); // 801EE98C
  if (crb(c,2)) { goto L_801EE9A0; } // 801EE990
  c->r[0]=R16(c->r[4]+0x00000004u); // 801EE994
  cmpu(c,0,c->r[0],0x0000069Bu); // 801EE998
  if (!crb(c,1)) { goto L_801EE9AC; } // 801EE99C
L_801EE9A0:;
  c->r[0]=0u+0x0000069Bu; // 801EE9A0
  W16(c->r[31]+0x00000012u,c->r[0]); // 801EE9A4
  goto L_801EE9B0; // 801EE9A8
L_801EE9AC:;
  W16(c->r[31]+0x00000012u,c->r[0]); // 801EE9AC
L_801EE9B0:;
  c->r[0]=0u+0x00000000u; // 801EE9B0
  W8(c->r[4]+0x00000020u,c->r[0]); // 801EE9B4
  W8(c->r[4]+0x00000002u,c->r[0]); // 801EE9B8
  W16(c->r[4]+0x00000000u,c->r[0]); // 801EE9BC
  c->lr=0x801EE9C4u; f_801F573C(c); // 801EE9C0
  c->r[0]=R8(c->r[31]+0x00000001u); // 801EE9C4
  c->r[3]=c->r[0]|0x00000002u; // 801EE9C8
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 801EE9CC
  W8(c->r[31]+0x00000001u,c->r[3]); // 801EE9D0
  if (crb(c,2)) { goto L_801EE9F4; } // 801EE9D4
  c->r[0]=0u+0x00000004u; // 801EE9D8
  c->r[4]=0u+0x00000100u; // 801EE9DC
  W8(c->r[31]+0x00000000u,c->r[0]); // 801EE9E0
  c->r[12]=R32(c->r[31]+0x00000020u); // 801EE9E4
  c->r[3]=R16(c->r[31]+0x00000004u); // 801EE9E8
  c->ctr=c->r[12]; // 801EE9EC
  if (true) { c->lr=0x801EE9F4u; dispatch(c,c->ctr); } // 801EE9F0
L_801EE9F4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EE9F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EE9F8
  c->lr=c->r[0]; // 801EE9FC
  c->r[1]=c->r[1]+0x00000010u; // 801EEA00
  return; // 801EEA04
}

// gap_config_cfm
void f_801EEA08(Ctx* __restrict c) {
  trace_call(0x801EEA08u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EEA08
  c->r[0]=c->lr; // 801EEA0C
  c->r[5]=0u+0x80310000u; // 801EEA10
  c->r[6]=0u+0x00000000u; // 801EEA14
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EEA18
  c->r[0]=0u+0x00000002u; // 801EEA1C
  c->r[5]=c->r[5]+0xFFFFAFE0u; // 801EEA20
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EEA24
  c->r[31]=c->r[5]+0x000000ACu; // 801EEA28
  W32(c->r[1]+0x00000008u,c->r[30]); // 801EEA2C
  c->ctr=c->r[0]; // 801EEA30
L_801EEA34:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 801EEA34
  cmps(c,0,(int32_t)c->r[0],0); // 801EEA38
  if (crb(c,2)) { goto L_801EEA50; } // 801EEA3C
  c->r[0]=R16(c->r[31]+0x00000006u); // 801EEA40
  cmpu(c,0,c->r[0],c->r[3]); // 801EEA44
  if (!crb(c,2)) { goto L_801EEA50; } // 801EEA48
  goto L_801EEAC0; // 801EEA4C
L_801EEA50:;
  {uint32_t ea=c->r[31]+0x00000060u; c->r[0]=R8(ea); c->r[31]=ea;} // 801EEA50
  c->r[6]=c->r[6]+0x00000001u; // 801EEA54
  cmps(c,0,(int32_t)c->r[0],0); // 801EEA58
  if (crb(c,2)) { goto L_801EEA70; } // 801EEA5C
  c->r[0]=R16(c->r[31]+0x00000006u); // 801EEA60
  cmpu(c,0,c->r[0],c->r[3]); // 801EEA64
  if (!crb(c,2)) { goto L_801EEA70; } // 801EEA68
  goto L_801EEAC0; // 801EEA6C
L_801EEA70:;
  {uint32_t ea=c->r[31]+0x00000060u; c->r[0]=R8(ea); c->r[31]=ea;} // 801EEA70
  c->r[6]=c->r[6]+0x00000001u; // 801EEA74
  cmps(c,0,(int32_t)c->r[0],0); // 801EEA78
  if (crb(c,2)) { goto L_801EEA90; } // 801EEA7C
  c->r[0]=R16(c->r[31]+0x00000006u); // 801EEA80
  cmpu(c,0,c->r[0],c->r[3]); // 801EEA84
  if (!crb(c,2)) { goto L_801EEA90; } // 801EEA88
  goto L_801EEAC0; // 801EEA8C
L_801EEA90:;
  {uint32_t ea=c->r[31]+0x00000060u; c->r[0]=R8(ea); c->r[31]=ea;} // 801EEA90
  c->r[6]=c->r[6]+0x00000001u; // 801EEA94
  cmps(c,0,(int32_t)c->r[0],0); // 801EEA98
  if (crb(c,2)) { goto L_801EEAB0; } // 801EEA9C
  c->r[0]=R16(c->r[31]+0x00000006u); // 801EEAA0
  cmpu(c,0,c->r[0],c->r[3]); // 801EEAA4
  if (!crb(c,2)) { goto L_801EEAB0; } // 801EEAA8
  goto L_801EEAC0; // 801EEAAC
L_801EEAB0:;
  c->r[6]=c->r[6]+0x00000001u; // 801EEAB0
  c->r[31]=c->r[31]+0x00000060u; // 801EEAB4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801EEA34; } // 801EEAB8
  c->r[31]=0u+0x00000000u; // 801EEABC
L_801EEAC0:;
  cmps(c,0,(int32_t)c->r[31],0); // 801EEAC0
  if (crb(c,2)) { goto L_801EEBDC; } // 801EEAC4
  c->r[0]=R16(c->r[4]+0x00000000u); // 801EEAC8
  cmps(c,0,(int32_t)c->r[0],0); // 801EEACC
  if (!crb(c,2)) { goto L_801EEB08; } // 801EEAD0
  c->r[0]=R8(c->r[31]+0x00000001u); // 801EEAD4
  c->r[3]=c->r[0]|0x00000004u; // 801EEAD8
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 801EEADC
  W8(c->r[31]+0x00000001u,c->r[3]); // 801EEAE0
  if (crb(c,2)) { goto L_801EEBDC; } // 801EEAE4
  c->r[0]=0u+0x00000004u; // 801EEAE8
  c->r[4]=0u+0x00000100u; // 801EEAEC
  W8(c->r[31]+0x00000000u,c->r[0]); // 801EEAF0
  c->r[12]=R32(c->r[31]+0x00000020u); // 801EEAF4
  c->r[3]=R16(c->r[31]+0x00000004u); // 801EEAF8
  c->ctr=c->r[12]; // 801EEAFC
  if (true) { c->lr=0x801EEB04u; dispatch(c,c->ctr); } // 801EEB00
  goto L_801EEBDC; // 801EEB04
L_801EEB08:;
  c->r[12]=R32(c->r[31]+0x00000020u); // 801EEB08
  c->r[4]=0u+0x00000101u; // 801EEB0C
  c->r[3]=R16(c->r[31]+0x00000004u); // 801EEB10
  c->ctr=c->r[12]; // 801EEB14
  if (true) { c->lr=0x801EEB1Cu; dispatch(c,c->ctr); } // 801EEB18
  c->r[30]=R16(c->r[31]+0x00000010u); // 801EEB1C
  goto L_801EEB30; // 801EEB20
L_801EEB24:;
  c->r[3]=c->r[31]+0x00000014u; // 801EEB24
  c->lr=0x801EEB2Cu; f_801DA320(c); // 801EEB28
  c->lr=0x801EEB30u; f_801D9C70(c); // 801EEB2C
L_801EEB30:;
  c->r[0]=R32(c->r[31]+0x00000014u); // 801EEB30
  cmps(c,0,(int32_t)c->r[0],0); // 801EEB34
  if (!crb(c,2)) { IRQCHK(c); goto L_801EEB24; } // 801EEB38
  c->r[3]=0u+0x80310000u; // 801EEB3C
  c->r[4]=0u+0x00000000u; // 801EEB40
  c->r[3]=c->r[3]+0xFFFFAFE0u; // 801EEB44
  c->r[0]=0u+0x00000002u; // 801EEB48
  W8(c->r[31]+0x00000000u,c->r[4]); // 801EEB4C
  c->r[4]=c->r[3]+0x000000ACu; // 801EEB50
  c->r[3]=0u+0x00000000u; // 801EEB54
  c->ctr=c->r[0]; // 801EEB58
L_801EEB5C:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 801EEB5C
  cmps(c,0,(int32_t)c->r[0],0); // 801EEB60
  if (crb(c,2)) { goto L_801EEB74; } // 801EEB64
  c->r[0]=R16(c->r[4]+0x00000010u); // 801EEB68
  cmpu(c,0,c->r[0],c->r[30]); // 801EEB6C
  if (crb(c,2)) { goto L_801EEBDC; } // 801EEB70
L_801EEB74:;
  c->r[0]=R8(c->r[4]+0x00000060u); // 801EEB74
  c->r[3]=c->r[3]+0x00000001u; // 801EEB78
  cmps(c,0,(int32_t)c->r[0],0); // 801EEB7C
  if (crb(c,2)) { goto L_801EEB90; } // 801EEB80
  c->r[0]=R16(c->r[4]+0x00000070u); // 801EEB84
  cmpu(c,0,c->r[0],c->r[30]); // 801EEB88
  if (crb(c,2)) { goto L_801EEBDC; } // 801EEB8C
L_801EEB90:;
  c->r[0]=R8(c->r[4]+0x000000C0u); // 801EEB90
  c->r[3]=c->r[3]+0x00000001u; // 801EEB94
  cmps(c,0,(int32_t)c->r[0],0); // 801EEB98
  if (crb(c,2)) { goto L_801EEBAC; } // 801EEB9C
  c->r[0]=R16(c->r[4]+0x000000D0u); // 801EEBA0
  cmpu(c,0,c->r[0],c->r[30]); // 801EEBA4
  if (crb(c,2)) { goto L_801EEBDC; } // 801EEBA8
L_801EEBAC:;
  c->r[0]=R8(c->r[4]+0x00000120u); // 801EEBAC
  c->r[3]=c->r[3]+0x00000001u; // 801EEBB0
  cmps(c,0,(int32_t)c->r[0],0); // 801EEBB4
  if (crb(c,2)) { goto L_801EEBC8; } // 801EEBB8
  c->r[0]=R16(c->r[4]+0x00000130u); // 801EEBBC
  cmpu(c,0,c->r[0],c->r[30]); // 801EEBC0
  if (crb(c,2)) { goto L_801EEBDC; } // 801EEBC4
L_801EEBC8:;
  c->r[3]=c->r[3]+0x00000001u; // 801EEBC8
  c->r[4]=c->r[4]+0x00000180u; // 801EEBCC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801EEB5C; } // 801EEBD0
  c->r[3]=c->r[30]|c->r[30]; // 801EEBD4
  c->lr=0x801EEBDCu; f_801F5230(c); // 801EEBD8
L_801EEBDC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EEBDC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EEBE0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801EEBE4
  c->lr=c->r[0]; // 801EEBE8
  c->r[1]=c->r[1]+0x00000010u; // 801EEBEC
  return; // 801EEBF0
}

// gap_disconnect_ind
void f_801EEBF4(Ctx* __restrict c) {
  trace_call(0x801EEBF4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EEBF4
  c->r[0]=c->lr; // 801EEBF8
  c->r[5]=0u+0x80310000u; // 801EEBFC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EEC00
  c->r[5]=c->r[5]+0xFFFFAFE0u; // 801EEC04
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801EEC08
  W32(c->r[1]+0x00000018u,c->r[30]); // 801EEC0C
  c->r[30]=c->r[4]|c->r[4]; // 801EEC10
  W32(c->r[1]+0x00000014u,c->r[29]); // 801EEC14
  c->r[29]=c->r[3]|c->r[3]; // 801EEC18
  c->r[0]=R8(c->r[5]+0x00000028u); // 801EEC1C
  cmpu(c,0,c->r[0],0x00000004u); // 801EEC20
  if (crb(c,0)) { goto L_801EEC40; } // 801EEC24
  c->r[3]=0u+0x000E0000u; // 801EEC28
  c->r[4]=0u+0x80280000u; // 801EEC2C
  c->r[5]=c->r[29]|c->r[29]; // 801EEC30
  c->r[3]=c->r[3]+0x00000003u; // 801EEC34
  c->r[4]=c->r[4]+0x00000478u; // 801EEC38
  c->lr=0x801EEC40u; f_801DC750(c); // 801EEC3C
L_801EEC40:;
  c->r[3]=0u+0x80310000u; // 801EEC40
  c->r[0]=0u+0x00000002u; // 801EEC44
  c->r[3]=c->r[3]+0xFFFFAFE0u; // 801EEC48
  c->r[4]=0u+0x00000000u; // 801EEC4C
  c->r[31]=c->r[3]+0x000000ACu; // 801EEC50
  c->ctr=c->r[0]; // 801EEC54
L_801EEC58:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 801EEC58
  cmps(c,0,(int32_t)c->r[0],0); // 801EEC5C
  if (crb(c,2)) { goto L_801EEC74; } // 801EEC60
  c->r[0]=R16(c->r[31]+0x00000006u); // 801EEC64
  cmpu(c,0,c->r[0],c->r[29]); // 801EEC68
  if (!crb(c,2)) { goto L_801EEC74; } // 801EEC6C
  goto L_801EECE4; // 801EEC70
L_801EEC74:;
  {uint32_t ea=c->r[31]+0x00000060u; c->r[0]=R8(ea); c->r[31]=ea;} // 801EEC74
  c->r[4]=c->r[4]+0x00000001u; // 801EEC78
  cmps(c,0,(int32_t)c->r[0],0); // 801EEC7C
  if (crb(c,2)) { goto L_801EEC94; } // 801EEC80
  c->r[0]=R16(c->r[31]+0x00000006u); // 801EEC84
  cmpu(c,0,c->r[0],c->r[29]); // 801EEC88
  if (!crb(c,2)) { goto L_801EEC94; } // 801EEC8C
  goto L_801EECE4; // 801EEC90
L_801EEC94:;
  {uint32_t ea=c->r[31]+0x00000060u; c->r[0]=R8(ea); c->r[31]=ea;} // 801EEC94
  c->r[4]=c->r[4]+0x00000001u; // 801EEC98
  cmps(c,0,(int32_t)c->r[0],0); // 801EEC9C
  if (crb(c,2)) { goto L_801EECB4; } // 801EECA0
  c->r[0]=R16(c->r[31]+0x00000006u); // 801EECA4
  cmpu(c,0,c->r[0],c->r[29]); // 801EECA8
  if (!crb(c,2)) { goto L_801EECB4; } // 801EECAC
  goto L_801EECE4; // 801EECB0
L_801EECB4:;
  {uint32_t ea=c->r[31]+0x00000060u; c->r[0]=R8(ea); c->r[31]=ea;} // 801EECB4
  c->r[4]=c->r[4]+0x00000001u; // 801EECB8
  cmps(c,0,(int32_t)c->r[0],0); // 801EECBC
  if (crb(c,2)) { goto L_801EECD4; } // 801EECC0
  c->r[0]=R16(c->r[31]+0x00000006u); // 801EECC4
  cmpu(c,0,c->r[0],c->r[29]); // 801EECC8
  if (!crb(c,2)) { goto L_801EECD4; } // 801EECCC
  goto L_801EECE4; // 801EECD0
L_801EECD4:;
  c->r[4]=c->r[4]+0x00000001u; // 801EECD4
  c->r[31]=c->r[31]+0x00000060u; // 801EECD8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801EEC58; } // 801EECDC
  c->r[31]=0u+0x00000000u; // 801EECE0
L_801EECE4:;
  cmps(c,0,(int32_t)c->r[31],0); // 801EECE4
  if (crb(c,2)) { goto L_801EEDD0; } // 801EECE8
  cmps(c,0,(int32_t)c->r[30],0); // 801EECEC
  if (crb(c,2)) { goto L_801EECFC; } // 801EECF0
  c->r[3]=c->r[29]|c->r[29]; // 801EECF4
  c->lr=0x801EECFCu; f_801F58B0(c); // 801EECF8
L_801EECFC:;
  c->r[12]=R32(c->r[31]+0x00000020u); // 801EECFC
  c->r[4]=0u+0x00000101u; // 801EED00
  c->r[3]=R16(c->r[31]+0x00000004u); // 801EED04
  c->ctr=c->r[12]; // 801EED08
  if (true) { c->lr=0x801EED10u; dispatch(c,c->ctr); } // 801EED0C
  c->r[30]=R16(c->r[31]+0x00000010u); // 801EED10
  goto L_801EED24; // 801EED14
L_801EED18:;
  c->r[3]=c->r[31]+0x00000014u; // 801EED18
  c->lr=0x801EED20u; f_801DA320(c); // 801EED1C
  c->lr=0x801EED24u; f_801D9C70(c); // 801EED20
L_801EED24:;
  c->r[0]=R32(c->r[31]+0x00000014u); // 801EED24
  cmps(c,0,(int32_t)c->r[0],0); // 801EED28
  if (!crb(c,2)) { IRQCHK(c); goto L_801EED18; } // 801EED2C
  c->r[3]=0u+0x80310000u; // 801EED30
  c->r[4]=0u+0x00000000u; // 801EED34
  c->r[3]=c->r[3]+0xFFFFAFE0u; // 801EED38
  c->r[0]=0u+0x00000002u; // 801EED3C
  W8(c->r[31]+0x00000000u,c->r[4]); // 801EED40
  c->r[4]=c->r[3]+0x000000ACu; // 801EED44
  c->r[3]=0u+0x00000000u; // 801EED48
  c->ctr=c->r[0]; // 801EED4C
L_801EED50:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 801EED50
  cmps(c,0,(int32_t)c->r[0],0); // 801EED54
  if (crb(c,2)) { goto L_801EED68; } // 801EED58
  c->r[0]=R16(c->r[4]+0x00000010u); // 801EED5C
  cmpu(c,0,c->r[0],c->r[30]); // 801EED60
  if (crb(c,2)) { goto L_801EEDD0; } // 801EED64
L_801EED68:;
  c->r[0]=R8(c->r[4]+0x00000060u); // 801EED68
  c->r[3]=c->r[3]+0x00000001u; // 801EED6C
  cmps(c,0,(int32_t)c->r[0],0); // 801EED70
  if (crb(c,2)) { goto L_801EED84; } // 801EED74
  c->r[0]=R16(c->r[4]+0x00000070u); // 801EED78
  cmpu(c,0,c->r[0],c->r[30]); // 801EED7C
  if (crb(c,2)) { goto L_801EEDD0; } // 801EED80
L_801EED84:;
  c->r[0]=R8(c->r[4]+0x000000C0u); // 801EED84
  c->r[3]=c->r[3]+0x00000001u; // 801EED88
  cmps(c,0,(int32_t)c->r[0],0); // 801EED8C
  if (crb(c,2)) { goto L_801EEDA0; } // 801EED90
  c->r[0]=R16(c->r[4]+0x000000D0u); // 801EED94
  cmpu(c,0,c->r[0],c->r[30]); // 801EED98
  if (crb(c,2)) { goto L_801EEDD0; } // 801EED9C
L_801EEDA0:;
  c->r[0]=R8(c->r[4]+0x00000120u); // 801EEDA0
  c->r[3]=c->r[3]+0x00000001u; // 801EEDA4
  cmps(c,0,(int32_t)c->r[0],0); // 801EEDA8
  if (crb(c,2)) { goto L_801EEDBC; } // 801EEDAC
  c->r[0]=R16(c->r[4]+0x00000130u); // 801EEDB0
  cmpu(c,0,c->r[0],c->r[30]); // 801EEDB4
  if (crb(c,2)) { goto L_801EEDD0; } // 801EEDB8
L_801EEDBC:;
  c->r[3]=c->r[3]+0x00000001u; // 801EEDBC
  c->r[4]=c->r[4]+0x00000180u; // 801EEDC0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801EED50; } // 801EEDC4
  c->r[3]=c->r[30]|c->r[30]; // 801EEDC8
  c->lr=0x801EEDD0u; f_801F5230(c); // 801EEDCC
L_801EEDD0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EEDD0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801EEDD4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801EEDD8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801EEDDC
  c->lr=c->r[0]; // 801EEDE0
  c->r[1]=c->r[1]+0x00000020u; // 801EEDE4
  return; // 801EEDE8
}

// gap_data_ind
void f_801EEDEC(Ctx* __restrict c) {
  trace_call(0x801EEDECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EEDEC
  c->r[0]=c->lr; // 801EEDF0
  c->r[5]=0u+0x80310000u; // 801EEDF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EEDF8
  c->r[0]=0u+0x00000002u; // 801EEDFC
  c->r[5]=c->r[5]+0xFFFFAFE0u; // 801EEE00
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EEE04
  c->r[31]=c->r[5]+0x000000ACu; // 801EEE08
  c->r[5]=0u+0x00000000u; // 801EEE0C
  c->ctr=c->r[0]; // 801EEE10
L_801EEE14:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 801EEE14
  cmps(c,0,(int32_t)c->r[0],0); // 801EEE18
  if (crb(c,2)) { goto L_801EEE30; } // 801EEE1C
  c->r[0]=R16(c->r[31]+0x00000006u); // 801EEE20
  cmpu(c,0,c->r[0],c->r[3]); // 801EEE24
  if (!crb(c,2)) { goto L_801EEE30; } // 801EEE28
  goto L_801EEEA0; // 801EEE2C
L_801EEE30:;
  {uint32_t ea=c->r[31]+0x00000060u; c->r[0]=R8(ea); c->r[31]=ea;} // 801EEE30
  c->r[5]=c->r[5]+0x00000001u; // 801EEE34
  cmps(c,0,(int32_t)c->r[0],0); // 801EEE38
  if (crb(c,2)) { goto L_801EEE50; } // 801EEE3C
  c->r[0]=R16(c->r[31]+0x00000006u); // 801EEE40
  cmpu(c,0,c->r[0],c->r[3]); // 801EEE44
  if (!crb(c,2)) { goto L_801EEE50; } // 801EEE48
  goto L_801EEEA0; // 801EEE4C
L_801EEE50:;
  {uint32_t ea=c->r[31]+0x00000060u; c->r[0]=R8(ea); c->r[31]=ea;} // 801EEE50
  c->r[5]=c->r[5]+0x00000001u; // 801EEE54
  cmps(c,0,(int32_t)c->r[0],0); // 801EEE58
  if (crb(c,2)) { goto L_801EEE70; } // 801EEE5C
  c->r[0]=R16(c->r[31]+0x00000006u); // 801EEE60
  cmpu(c,0,c->r[0],c->r[3]); // 801EEE64
  if (!crb(c,2)) { goto L_801EEE70; } // 801EEE68
  goto L_801EEEA0; // 801EEE6C
L_801EEE70:;
  {uint32_t ea=c->r[31]+0x00000060u; c->r[0]=R8(ea); c->r[31]=ea;} // 801EEE70
  c->r[5]=c->r[5]+0x00000001u; // 801EEE74
  cmps(c,0,(int32_t)c->r[0],0); // 801EEE78
  if (crb(c,2)) { goto L_801EEE90; } // 801EEE7C
  c->r[0]=R16(c->r[31]+0x00000006u); // 801EEE80
  cmpu(c,0,c->r[0],c->r[3]); // 801EEE84
  if (!crb(c,2)) { goto L_801EEE90; } // 801EEE88
  goto L_801EEEA0; // 801EEE8C
L_801EEE90:;
  c->r[5]=c->r[5]+0x00000001u; // 801EEE90
  c->r[31]=c->r[31]+0x00000060u; // 801EEE94
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801EEE14; } // 801EEE98
  c->r[31]=0u+0x00000000u; // 801EEE9C
L_801EEEA0:;
  cmps(c,0,(int32_t)c->r[31],0); // 801EEEA0
  if (!crb(c,2)) { goto L_801EEEB4; } // 801EEEA4
  c->r[3]=c->r[4]|c->r[4]; // 801EEEA8
  c->lr=0x801EEEB0u; f_801D9C70(c); // 801EEEAC
  goto L_801EEEE8; // 801EEEB0
L_801EEEB4:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 801EEEB4
  cmpu(c,0,c->r[0],0x00000004u); // 801EEEB8
  if (!crb(c,2)) { goto L_801EEEE0; } // 801EEEBC
  c->r[3]=c->r[31]+0x00000014u; // 801EEEC0
  c->lr=0x801EEEC8u; f_801DA0A0(c); // 801EEEC4
  c->r[12]=R32(c->r[31]+0x00000020u); // 801EEEC8
  c->r[4]=0u+0x00000102u; // 801EEECC
  c->r[3]=R16(c->r[31]+0x00000004u); // 801EEED0
  c->ctr=c->r[12]; // 801EEED4
  if (true) { c->lr=0x801EEEDCu; dispatch(c,c->ctr); } // 801EEED8
  goto L_801EEEE8; // 801EEEDC
L_801EEEE0:;
  c->r[3]=c->r[4]|c->r[4]; // 801EEEE0
  c->lr=0x801EEEE8u; f_801D9C70(c); // 801EEEE4
L_801EEEE8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EEEE8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EEEEC
  c->lr=c->r[0]; // 801EEEF0
  c->r[1]=c->r[1]+0x00000010u; // 801EEEF4
  return; // 801EEEF8
}

// gap_congestion_ind
void f_801EEEFC(Ctx* __restrict c) {
  trace_call(0x801EEEFCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EEEFC
  c->r[0]=c->lr; // 801EEF00
  c->r[5]=0u+0x80310000u; // 801EEF04
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EEF08
  c->r[5]=c->r[5]+0xFFFFAFE0u; // 801EEF0C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EEF10
  c->r[31]=c->r[4]|c->r[4]; // 801EEF14
  W32(c->r[1]+0x00000008u,c->r[30]); // 801EEF18
  c->r[30]=c->r[3]|c->r[3]; // 801EEF1C
  c->r[0]=R8(c->r[5]+0x00000028u); // 801EEF20
  cmpu(c,0,c->r[0],0x00000004u); // 801EEF24
  if (crb(c,0)) { goto L_801EEF48; } // 801EEF28
  c->r[3]=0u+0x000E0000u; // 801EEF2C
  c->r[4]=0u+0x80280000u; // 801EEF30
  c->r[5]=c->r[31]|c->r[31]; // 801EEF34
  c->r[6]=c->r[30]|c->r[30]; // 801EEF38
  c->r[3]=c->r[3]+0x00000003u; // 801EEF3C
  c->r[4]=c->r[4]+0x000004A0u; // 801EEF40
  c->lr=0x801EEF48u; f_801DC770(c); // 801EEF44
L_801EEF48:;
  c->r[3]=0u+0x80310000u; // 801EEF48
  c->r[0]=0u+0x00000002u; // 801EEF4C
  c->r[3]=c->r[3]+0xFFFFAFE0u; // 801EEF50
  c->r[4]=0u+0x00000000u; // 801EEF54
  c->r[3]=c->r[3]+0x000000ACu; // 801EEF58
  c->ctr=c->r[0]; // 801EEF5C
L_801EEF60:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 801EEF60
  cmps(c,0,(int32_t)c->r[0],0); // 801EEF64
  if (crb(c,2)) { goto L_801EEF7C; } // 801EEF68
  c->r[0]=R16(c->r[3]+0x00000006u); // 801EEF6C
  cmpu(c,0,c->r[0],c->r[30]); // 801EEF70
  if (!crb(c,2)) { goto L_801EEF7C; } // 801EEF74
  goto L_801EEFEC; // 801EEF78
L_801EEF7C:;
  {uint32_t ea=c->r[3]+0x00000060u; c->r[0]=R8(ea); c->r[3]=ea;} // 801EEF7C
  c->r[4]=c->r[4]+0x00000001u; // 801EEF80
  cmps(c,0,(int32_t)c->r[0],0); // 801EEF84
  if (crb(c,2)) { goto L_801EEF9C; } // 801EEF88
  c->r[0]=R16(c->r[3]+0x00000006u); // 801EEF8C
  cmpu(c,0,c->r[0],c->r[30]); // 801EEF90
  if (!crb(c,2)) { goto L_801EEF9C; } // 801EEF94
  goto L_801EEFEC; // 801EEF98
L_801EEF9C:;
  {uint32_t ea=c->r[3]+0x00000060u; c->r[0]=R8(ea); c->r[3]=ea;} // 801EEF9C
  c->r[4]=c->r[4]+0x00000001u; // 801EEFA0
  cmps(c,0,(int32_t)c->r[0],0); // 801EEFA4
  if (crb(c,2)) { goto L_801EEFBC; } // 801EEFA8
  c->r[0]=R16(c->r[3]+0x00000006u); // 801EEFAC
  cmpu(c,0,c->r[0],c->r[30]); // 801EEFB0
  if (!crb(c,2)) { goto L_801EEFBC; } // 801EEFB4
  goto L_801EEFEC; // 801EEFB8
L_801EEFBC:;
  {uint32_t ea=c->r[3]+0x00000060u; c->r[0]=R8(ea); c->r[3]=ea;} // 801EEFBC
  c->r[4]=c->r[4]+0x00000001u; // 801EEFC0
  cmps(c,0,(int32_t)c->r[0],0); // 801EEFC4
  if (crb(c,2)) { goto L_801EEFDC; } // 801EEFC8
  c->r[0]=R16(c->r[3]+0x00000006u); // 801EEFCC
  cmpu(c,0,c->r[0],c->r[30]); // 801EEFD0
  if (!crb(c,2)) { goto L_801EEFDC; } // 801EEFD4
  goto L_801EEFEC; // 801EEFD8
L_801EEFDC:;
  c->r[4]=c->r[4]+0x00000001u; // 801EEFDC
  c->r[3]=c->r[3]+0x00000060u; // 801EEFE0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801EEF60; } // 801EEFE4
  c->r[3]=0u+0x00000000u; // 801EEFE8
L_801EEFEC:;
  cmps(c,0,(int32_t)c->r[3],0); // 801EEFEC
  if (crb(c,2)) { goto L_801EF018; } // 801EEFF0
  c->r[0]=0u-c->r[31]; // 801EEFF4
  c->r[12]=R32(c->r[3]+0x00000020u); // 801EEFF8
  c->r[0]=c->r[0]|c->r[31]; // 801EEFFC
  c->r[3]=R16(c->r[3]+0x00000004u); // 801EF000
  c->r[4]=sraw(c,c->r[0],31); // 801EF004
  c->r[0]=c->r[4]+0x00000104u; // 801EF008
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 801EF00C
  c->ctr=c->r[12]; // 801EF010
  if (true) { c->lr=0x801EF018u; dispatch(c,c->ctr); } // 801EF014
L_801EF018:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EF018
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EF01C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801EF020
  c->lr=c->r[0]; // 801EF024
  c->r[1]=c->r[1]+0x00000010u; // 801EF028
  return; // 801EF02C
}

// btm_cback
void f_801EF030(Ctx* __restrict c) {
  trace_call(0x801EF030u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EF030
  c->r[0]=c->lr; // 801EF034
  c->r[7]=0u+0x80280000u; // 801EF038
  cmpu(c,0,c->r[3],0x00000002u); // 801EF03C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EF040
  c->r[7]=c->r[7]+0x000004D8u; // 801EF044
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801EF048
  W32(c->r[1]+0x00000018u,c->r[30]); // 801EF04C
  c->r[30]=c->r[4]|c->r[4]; // 801EF050
  if (!crb(c,0)) { goto L_801EF1F0; } // 801EF054
  c->r[8]=0u+0x80310000u; // 801EF058
  c->r[0]=rotl(c->r[3],4)&0x000FFFF0u; // 801EF05C
  c->r[8]=c->r[8]+0xFFFFAFE0u; // 801EF060
  c->r[31]=c->r[8]+c->r[0]; // 801EF064
  c->r[0]=R8(c->r[31]+0x0000000Fu); // 801EF068
  cmps(c,0,(int32_t)c->r[0],0); // 801EF06C
  if (crb(c,2)) { goto L_801EF1F0; } // 801EF070
  c->r[0]=R16(c->r[31]+0x0000000Cu); // 801EF074
  cmps(c,0,(int32_t)c->r[0],3); // 801EF078
  if (crb(c,2)) { goto L_801EF0E8; } // 801EF07C
  if (!crb(c,0)) { goto L_801EF090; } // 801EF080
  cmps(c,0,(int32_t)c->r[0],2); // 801EF084
  if (!crb(c,0)) { goto L_801EF09C; } // 801EF088
  goto L_801EF1C0; // 801EF08C
L_801EF090:;
  cmps(c,0,(int32_t)c->r[0],5); // 801EF090
  if (!crb(c,0)) { goto L_801EF1C0; } // 801EF094
  goto L_801EF134; // 801EF098
L_801EF09C:;
  c->r[6]=R8(c->r[4]+0x00000001u); // 801EF09C
  c->r[3]=0u+0x00000114u; // 801EF0A0
  c->r[0]=R8(c->r[8]+0x00000028u); // 801EF0A4
  c->r[30]=c->r[1]+0x00000008u; // 801EF0A8
  W8(c->r[1]+0x0000000Au,c->r[6]); // 801EF0AC
  cmpu(c,0,c->r[0],0x00000004u); // 801EF0B0
  c->r[0]=R8(c->r[4]+0x00000000u); // 801EF0B4
  c->r[0]=cntlz(c->r[0]); // 801EF0B8
  c->r[0]=rotl(c->r[0],27)&0x00000001u; // 801EF0BC
  c->r[0]=0u-c->r[0]; // 801EF0C0
  c->r[0]=c->r[3]&~c->r[0]; // 801EF0C4
  W16(c->r[1]+0x00000008u,c->r[0]); // 801EF0C8
  if (crb(c,0)) { goto L_801EF1C0; } // 801EF0CC
  c->r[3]=0u+0x000E0000u; // 801EF0D0
  c->r[4]=c->r[7]+0x00000000u; // 801EF0D4
  c->r[3]=c->r[3]+0x00000003u; // 801EF0D8
  c->r[5]=rotl(c->r[0],0)&0x0000FFFFu; // 801EF0DC
  c->lr=0x801EF0E4u; f_801DC770(c); // 801EF0E0
  goto L_801EF1C0; // 801EF0E4
L_801EF0E8:;
  c->r[5]=R16(c->r[4]+0x00000000u); // 801EF0E8
  cmps(c,0,(int32_t)c->r[5],0); // 801EF0EC
  if (crb(c,2)) { goto L_801EF114; } // 801EF0F0
  c->r[0]=R8(c->r[8]+0x00000028u); // 801EF0F4
  cmpu(c,0,c->r[0],0x00000004u); // 801EF0F8
  if (crb(c,0)) { goto L_801EF1C0; } // 801EF0FC
  c->r[3]=0u+0x000E0000u; // 801EF100
  c->r[4]=c->r[7]+0x0000003Cu; // 801EF104
  c->r[3]=c->r[3]+0x00000003u; // 801EF108
  c->lr=0x801EF110u; f_801DC750(c); // 801EF10C
  goto L_801EF1C0; // 801EF110
L_801EF114:;
  c->r[0]=R8(c->r[8]+0x00000028u); // 801EF114
  cmpu(c,0,c->r[0],0x00000004u); // 801EF118
  if (crb(c,0)) { goto L_801EF1C0; } // 801EF11C
  c->r[3]=0u+0x000E0000u; // 801EF120
  c->r[4]=c->r[7]+0x00000070u; // 801EF124
  c->r[3]=c->r[3]+0x00000003u; // 801EF128
  c->lr=0x801EF130u; f_801DC730(c); // 801EF12C
  goto L_801EF1C0; // 801EF130
L_801EF134:;
  c->r[0]=R16(c->r[4]+0x00000000u); // 801EF134
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801EF138
  cmpu(c,0,c->r[0],0x00000008u); // 801EF13C
  if (crb(c,1)) { goto L_801EF194; } // 801EF140
  c->r[3]=0u+0x80280000u; // 801EF144
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801EF148
  c->r[3]=c->r[3]+0x000005A4u; // 801EF14C
  c->r[3]=R32(c->r[3]+c->r[0]); // 801EF150
  c->ctr=c->r[3]; // 801EF154
  if (true) { switch (c->ctr) { case 0x801EF15Cu: goto L_801EF15C; case 0x801EF164u: goto L_801EF164; case 0x801EF16Cu: goto L_801EF16C; case 0x801EF174u: goto L_801EF174; case 0x801EF17Cu: goto L_801EF17C; case 0x801EF184u: goto L_801EF184; case 0x801EF18Cu: goto L_801EF18C; case 0x801EF194u: goto L_801EF194; default: break; } dispatch(c,c->ctr); return; } // 801EF158
L_801EF15C:;
  c->r[5]=0u+0x00000000u; // 801EF15C
  goto L_801EF198; // 801EF160
L_801EF164:;
  c->r[5]=0u+0x0000010Bu; // 801EF164
  goto L_801EF198; // 801EF168
L_801EF16C:;
  c->r[5]=0u+0x00000103u; // 801EF16C
  goto L_801EF198; // 801EF170
L_801EF174:;
  c->r[5]=0u+0x00000109u; // 801EF174
  goto L_801EF198; // 801EF178
L_801EF17C:;
  c->r[5]=0u+0x0000010Cu; // 801EF17C
  goto L_801EF198; // 801EF180
L_801EF184:;
  c->r[5]=0u+0x0000010Du; // 801EF184
  goto L_801EF198; // 801EF188
L_801EF18C:;
  c->r[5]=0u+0x00000115u; // 801EF18C
  goto L_801EF198; // 801EF190
L_801EF194:;
  c->r[5]=0u+0x00000114u; // 801EF194
L_801EF198:;
  c->r[3]=0u+0x80310000u; // 801EF198
  W16(c->r[4]+0x00000000u,c->r[5]); // 801EF19C
  c->r[3]=c->r[3]+0xFFFFAFE0u; // 801EF1A0
  c->r[0]=R8(c->r[3]+0x00000028u); // 801EF1A4
  cmpu(c,0,c->r[0],0x00000004u); // 801EF1A8
  if (crb(c,0)) { goto L_801EF1C0; } // 801EF1AC
  c->r[3]=0u+0x000E0000u; // 801EF1B0
  c->r[4]=c->r[7]+0x00000098u; // 801EF1B4
  c->r[3]=c->r[3]+0x00000003u; // 801EF1B8
  c->lr=0x801EF1C0u; f_801DC750(c); // 801EF1BC
L_801EF1C0:;
  c->r[12]=R32(c->r[31]+0x00000004u); // 801EF1C0
  cmps(c,0,(int32_t)c->r[12],0); // 801EF1C4
  if (crb(c,2)) { goto L_801EF1DC; } // 801EF1C8
  c->r[4]=c->r[30]|c->r[30]; // 801EF1CC
  c->r[3]=R16(c->r[31]+0x0000000Cu); // 801EF1D0
  c->ctr=c->r[12]; // 801EF1D4
  if (true) { c->lr=0x801EF1DCu; dispatch(c,c->ctr); } // 801EF1D8
L_801EF1DC:;
  cmps(c,0,(int32_t)c->r[31],0); // 801EF1DC
  if (crb(c,2)) { goto L_801EF1F0; } // 801EF1E0
  c->r[0]=0u+0x00000000u; // 801EF1E4
  W32(c->r[31]+0x00000004u,c->r[0]); // 801EF1E8
  W8(c->r[31]+0x0000000Fu,c->r[0]); // 801EF1EC
L_801EF1F0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EF1F0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801EF1F4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801EF1F8
  c->lr=c->r[0]; // 801EF1FC
  c->r[1]=c->r[1]+0x00000020u; // 801EF200
  return; // 801EF204
}

// gap_btm_cback0
void f_801EF208(Ctx* __restrict c) {
  trace_call(0x801EF208u);
  c->r[4]=c->r[3]|c->r[3]; // 801EF208
  c->r[3]=0u+0x00000000u; // 801EF20C
  f_801EF030(c); return; // 801EF210
}

// gap_btm_cback1
void f_801EF214(Ctx* __restrict c) {
  trace_call(0x801EF214u);
  c->r[4]=c->r[3]|c->r[3]; // 801EF214
  c->r[3]=0u+0x00000001u; // 801EF218
  f_801EF030(c); return; // 801EF21C
}

// gap_find_addr_name_cb
void f_801EF220(Ctx* __restrict c) {
  trace_call(0x801EF220u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EF220
  c->r[0]=c->lr; // 801EF224
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EF228
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801EF22C
  c->r[31]=0u+0x80310000u; // 801EF230
  c->r[31]=c->r[31]+0xFFFFAFE0u; // 801EF234
  W32(c->r[1]+0x00000018u,c->r[30]); // 801EF238
  c->r[30]=c->r[31]+0x00000034u; // 801EF23C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801EF240
  c->r[29]=c->r[3]|c->r[3]; // 801EF244
  c->r[0]=R8(c->r[31]+0x0000007Eu); // 801EF248
  cmps(c,0,(int32_t)c->r[0],0); // 801EF24C
  if (crb(c,2)) { goto L_801EF41C; } // 801EF250
  c->r[5]=R16(c->r[3]+0x00000000u); // 801EF254
  cmps(c,0,(int32_t)c->r[5],0); // 801EF258
  if (!crb(c,2)) { goto L_801EF36C; } // 801EF25C
  c->r[0]=R8(c->r[31]+0x00000028u); // 801EF260
  cmpu(c,0,c->r[0],0x00000004u); // 801EF264
  if (crb(c,0)) { goto L_801EF284; } // 801EF268
  c->r[3]=0u+0x000E0000u; // 801EF26C
  c->r[4]=0u+0x80280000u; // 801EF270
  c->r[6]=c->r[29]+0x00000004u; // 801EF274
  c->r[3]=c->r[3]+0x00000003u; // 801EF278
  c->r[4]=c->r[4]+0x00000650u; // 801EF27C
  c->lr=0x801EF284u; f_801DC770(c); // 801EF280
L_801EF284:;
  c->r[3]=c->r[30]+0x00000008u; // 801EF284
  c->lr=0x801EF28Cu; f_80206CB4(c); // 801EF288
  c->r[5]=c->r[3]|c->r[3]; // 801EF28C
  c->r[3]=c->r[30]+0x00000008u; // 801EF290
  c->r[4]=c->r[29]+0x00000004u; // 801EF294
  c->lr=0x801EF29Cu; f_8020E9CC(c); // 801EF298
  cmps(c,0,(int32_t)c->r[3],0); // 801EF29C
  if (!crb(c,2)) { goto L_801EF2C4; } // 801EF2A0
  c->r[4]=R32(c->r[31]+0x00000030u); // 801EF2A4
  c->r[3]=c->r[30]+0x00000002u; // 801EF2A8
  c->r[5]=0u+0x00000006u; // 801EF2AC
  c->r[4]=c->r[4]+0x00000002u; // 801EF2B0
  c->lr=0x801EF2B8u; f_80004364(c); // 801EF2B4
  c->r[0]=0u+0x00000000u; // 801EF2B8
  W16(c->r[30]+0x00000000u,c->r[0]); // 801EF2BC
  goto L_801EF3F4; // 801EF2C0
L_801EF2C4:;
  c->r[3]=R32(c->r[31]+0x00000030u); // 801EF2C4
  c->lr=0x801EF2CCu; f_801E7704(c); // 801EF2C8
  cmps(c,0,(int32_t)c->r[3],0); // 801EF2CC
  W32(c->r[31]+0x00000030u,c->r[3]); // 801EF2D0
  if (crb(c,2)) { goto L_801EF360; } // 801EF2D4
  c->r[4]=0u+0x801F0000u; // 801EF2D8
  c->r[3]=c->r[3]+0x00000002u; // 801EF2DC
  c->r[4]=c->r[4]+0xFFFFF220u; // 801EF2E0
  c->lr=0x801EF2E8u; f_801E742C(c); // 801EF2E4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801EF2E8
  cmpu(c,0,c->r[0],0x00000001u); // 801EF2EC
  if (crb(c,2)) { goto L_801EF41C; } // 801EF2F0
  c->r[0]=R16(c->r[29]+0x00000000u); // 801EF2F4
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801EF2F8
  cmpu(c,0,c->r[0],0x00000008u); // 801EF2FC
  if (crb(c,1)) { goto L_801EF354; } // 801EF300
  c->r[3]=0u+0x80280000u; // 801EF304
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801EF308
  c->r[3]=c->r[3]+0x000006F4u; // 801EF30C
  c->r[3]=R32(c->r[3]+c->r[0]); // 801EF310
  c->ctr=c->r[3]; // 801EF314
  if (true) { switch (c->ctr) { case 0x801EF31Cu: goto L_801EF31C; case 0x801EF324u: goto L_801EF324; case 0x801EF32Cu: goto L_801EF32C; case 0x801EF334u: goto L_801EF334; case 0x801EF33Cu: goto L_801EF33C; case 0x801EF344u: goto L_801EF344; case 0x801EF34Cu: goto L_801EF34C; case 0x801EF354u: goto L_801EF354; case 0x801EF3B4u: goto L_801EF3B4; case 0x801EF3BCu: goto L_801EF3BC; case 0x801EF3C4u: goto L_801EF3C4; case 0x801EF3CCu: goto L_801EF3CC; case 0x801EF3D4u: goto L_801EF3D4; case 0x801EF3DCu: goto L_801EF3DC; case 0x801EF3E4u: goto L_801EF3E4; case 0x801EF3ECu: goto L_801EF3EC; default: break; } dispatch(c,c->ctr); return; } // 801EF318
L_801EF31C:;
  c->r[0]=0u+0x00000000u; // 801EF31C
  goto L_801EF358; // 801EF320
L_801EF324:;
  c->r[0]=0u+0x0000010Bu; // 801EF324
  goto L_801EF358; // 801EF328
L_801EF32C:;
  c->r[0]=0u+0x00000103u; // 801EF32C
  goto L_801EF358; // 801EF330
L_801EF334:;
  c->r[0]=0u+0x00000109u; // 801EF334
  goto L_801EF358; // 801EF338
L_801EF33C:;
  c->r[0]=0u+0x0000010Cu; // 801EF33C
  goto L_801EF358; // 801EF340
L_801EF344:;
  c->r[0]=0u+0x0000010Du; // 801EF344
  goto L_801EF358; // 801EF348
L_801EF34C:;
  c->r[0]=0u+0x00000115u; // 801EF34C
  goto L_801EF358; // 801EF350
L_801EF354:;
  c->r[0]=0u+0x00000114u; // 801EF354
L_801EF358:;
  W16(c->r[30]+0x00000000u,c->r[0]); // 801EF358
  goto L_801EF3F4; // 801EF35C
L_801EF360:;
  c->r[0]=0u+0x00000102u; // 801EF360
  W16(c->r[30]+0x00000000u,c->r[0]); // 801EF364
  goto L_801EF3F4; // 801EF368
L_801EF36C:;
  c->r[0]=R8(c->r[31]+0x00000028u); // 801EF36C
  cmpu(c,0,c->r[0],0x00000004u); // 801EF370
  if (crb(c,0)) { goto L_801EF38C; } // 801EF374
  c->r[3]=0u+0x000E0000u; // 801EF378
  c->r[4]=0u+0x80280000u; // 801EF37C
  c->r[3]=c->r[3]+0x00000003u; // 801EF380
  c->r[4]=c->r[4]+0x00000694u; // 801EF384
  c->lr=0x801EF38Cu; f_801DC750(c); // 801EF388
L_801EF38C:;
  c->r[0]=R16(c->r[29]+0x00000000u); // 801EF38C
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801EF390
  cmpu(c,0,c->r[0],0x00000008u); // 801EF394
  if (crb(c,1)) { goto L_801EF3EC; } // 801EF398
  c->r[3]=0u+0x80280000u; // 801EF39C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801EF3A0
  c->r[3]=c->r[3]+0x000006D0u; // 801EF3A4
  c->r[3]=R32(c->r[3]+c->r[0]); // 801EF3A8
  c->ctr=c->r[3]; // 801EF3AC
  if (true) { switch (c->ctr) { case 0x801EF31Cu: goto L_801EF31C; case 0x801EF324u: goto L_801EF324; case 0x801EF32Cu: goto L_801EF32C; case 0x801EF334u: goto L_801EF334; case 0x801EF33Cu: goto L_801EF33C; case 0x801EF344u: goto L_801EF344; case 0x801EF34Cu: goto L_801EF34C; case 0x801EF354u: goto L_801EF354; case 0x801EF3B4u: goto L_801EF3B4; case 0x801EF3BCu: goto L_801EF3BC; case 0x801EF3C4u: goto L_801EF3C4; case 0x801EF3CCu: goto L_801EF3CC; case 0x801EF3D4u: goto L_801EF3D4; case 0x801EF3DCu: goto L_801EF3DC; case 0x801EF3E4u: goto L_801EF3E4; case 0x801EF3ECu: goto L_801EF3EC; default: break; } dispatch(c,c->ctr); return; } // 801EF3B0
L_801EF3B4:;
  c->r[0]=0u+0x00000000u; // 801EF3B4
  goto L_801EF3F0; // 801EF3B8
L_801EF3BC:;
  c->r[0]=0u+0x0000010Bu; // 801EF3BC
  goto L_801EF3F0; // 801EF3C0
L_801EF3C4:;
  c->r[0]=0u+0x00000103u; // 801EF3C4
  goto L_801EF3F0; // 801EF3C8
L_801EF3CC:;
  c->r[0]=0u+0x00000109u; // 801EF3CC
  goto L_801EF3F0; // 801EF3D0
L_801EF3D4:;
  c->r[0]=0u+0x0000010Cu; // 801EF3D4
  goto L_801EF3F0; // 801EF3D8
L_801EF3DC:;
  c->r[0]=0u+0x0000010Du; // 801EF3DC
  goto L_801EF3F0; // 801EF3E0
L_801EF3E4:;
  c->r[0]=0u+0x00000115u; // 801EF3E4
  goto L_801EF3F0; // 801EF3E8
L_801EF3EC:;
  c->r[0]=0u+0x00000114u; // 801EF3EC
L_801EF3F0:;
  W16(c->r[30]+0x00000000u,c->r[0]); // 801EF3F0
L_801EF3F4:;
  c->r[12]=R32(c->r[31]+0x0000002Cu); // 801EF3F4
  cmps(c,0,(int32_t)c->r[12],0); // 801EF3F8
  if (crb(c,2)) { goto L_801EF410; } // 801EF3FC
  c->r[4]=c->r[30]|c->r[30]; // 801EF400
  c->r[3]=0u+0x00000005u; // 801EF404
  c->ctr=c->r[12]; // 801EF408
  if (true) { c->lr=0x801EF410u; dispatch(c,c->ctr); } // 801EF40C
L_801EF410:;
  c->r[0]=0u+0x00000000u; // 801EF410
  W8(c->r[31]+0x0000007Eu,c->r[0]); // 801EF414
  W32(c->r[31]+0x0000002Cu,c->r[0]); // 801EF418
L_801EF41C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EF41C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801EF420
  c->r[30]=R32(c->r[1]+0x00000018u); // 801EF424
  c->r[29]=R32(c->r[1]+0x00000014u); // 801EF428
  c->lr=c->r[0]; // 801EF42C
  c->r[1]=c->r[1]+0x00000020u; // 801EF430
  return; // 801EF434
}

// gap_find_addr_inq_cb
void f_801EF438(Ctx* __restrict c) {
  trace_call(0x801EF438u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EF438
  c->r[0]=c->lr; // 801EF43C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EF440
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801EF444
  c->r[31]=0u+0x80310000u; // 801EF448
  c->r[31]=c->r[31]+0xFFFFAFE0u; // 801EF44C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801EF450
  c->r[30]=c->r[31]+0x00000034u; // 801EF454
  W32(c->r[1]+0x00000014u,c->r[29]); // 801EF458
  c->r[29]=c->r[3]|c->r[3]; // 801EF45C
  c->r[0]=R8(c->r[31]+0x0000007Eu); // 801EF460
  cmps(c,0,(int32_t)c->r[0],0); // 801EF464
  if (crb(c,2)) { goto L_801EF5D0; } // 801EF468
  c->r[0]=R8(c->r[31]+0x00000028u); // 801EF46C
  cmpu(c,0,c->r[0],0x00000004u); // 801EF470
  if (crb(c,0)) { goto L_801EF494; } // 801EF474
  c->r[3]=0u+0x000E0000u; // 801EF478
  c->r[4]=0u+0x80280000u; // 801EF47C
  c->r[5]=R8(c->r[29]+0x00000000u); // 801EF480
  c->r[3]=c->r[3]+0x00000003u; // 801EF484
  c->r[6]=R8(c->r[29]+0x00000001u); // 801EF488
  c->r[4]=c->r[4]+0x00000718u; // 801EF48C
  c->lr=0x801EF494u; f_801DC770(c); // 801EF490
L_801EF494:;
  c->r[0]=R8(c->r[29]+0x00000000u); // 801EF494
  cmps(c,0,(int32_t)c->r[0],0); // 801EF498
  if (!crb(c,2)) { goto L_801EF548; } // 801EF49C
  c->r[0]=0u+0x00000111u; // 801EF4A0
  W16(c->r[30]+0x00000000u,c->r[0]); // 801EF4A4
  c->lr=0x801EF4ACu; f_801E764C(c); // 801EF4A8
  cmps(c,0,(int32_t)c->r[3],0); // 801EF4AC
  W32(c->r[31]+0x00000030u,c->r[3]); // 801EF4B0
  if (crb(c,2)) { goto L_801EF53C; } // 801EF4B4
  c->r[4]=0u+0x801F0000u; // 801EF4B8
  c->r[3]=c->r[3]+0x00000002u; // 801EF4BC
  c->r[4]=c->r[4]+0xFFFFF220u; // 801EF4C0
  c->lr=0x801EF4C8u; f_801E742C(c); // 801EF4C4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801EF4C8
  cmpu(c,0,c->r[0],0x00000001u); // 801EF4CC
  if (crb(c,2)) { goto L_801EF5D0; } // 801EF4D0
  c->r[0]=R8(c->r[29]+0x00000000u); // 801EF4D4
  cmpu(c,0,c->r[0],0x00000008u); // 801EF4D8
  if (crb(c,1)) { goto L_801EF530; } // 801EF4DC
  c->r[3]=0u+0x80280000u; // 801EF4E0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801EF4E4
  c->r[3]=c->r[3]+0x00000780u; // 801EF4E8
  c->r[3]=R32(c->r[3]+c->r[0]); // 801EF4EC
  c->ctr=c->r[3]; // 801EF4F0
  if (true) { switch (c->ctr) { case 0x801EF4F8u: goto L_801EF4F8; case 0x801EF500u: goto L_801EF500; case 0x801EF508u: goto L_801EF508; case 0x801EF510u: goto L_801EF510; case 0x801EF518u: goto L_801EF518; case 0x801EF520u: goto L_801EF520; case 0x801EF528u: goto L_801EF528; case 0x801EF530u: goto L_801EF530; case 0x801EF568u: goto L_801EF568; case 0x801EF570u: goto L_801EF570; case 0x801EF578u: goto L_801EF578; case 0x801EF580u: goto L_801EF580; case 0x801EF588u: goto L_801EF588; case 0x801EF590u: goto L_801EF590; case 0x801EF598u: goto L_801EF598; case 0x801EF5A0u: goto L_801EF5A0; default: break; } dispatch(c,c->ctr); return; } // 801EF4F4
L_801EF4F8:;
  c->r[0]=0u+0x00000000u; // 801EF4F8
  goto L_801EF534; // 801EF4FC
L_801EF500:;
  c->r[0]=0u+0x0000010Bu; // 801EF500
  goto L_801EF534; // 801EF504
L_801EF508:;
  c->r[0]=0u+0x00000103u; // 801EF508
  goto L_801EF534; // 801EF50C
L_801EF510:;
  c->r[0]=0u+0x00000109u; // 801EF510
  goto L_801EF534; // 801EF514
L_801EF518:;
  c->r[0]=0u+0x0000010Cu; // 801EF518
  goto L_801EF534; // 801EF51C
L_801EF520:;
  c->r[0]=0u+0x0000010Du; // 801EF520
  goto L_801EF534; // 801EF524
L_801EF528:;
  c->r[0]=0u+0x00000115u; // 801EF528
  goto L_801EF534; // 801EF52C
L_801EF530:;
  c->r[0]=0u+0x00000114u; // 801EF530
L_801EF534:;
  W16(c->r[30]+0x00000000u,c->r[0]); // 801EF534
  goto L_801EF5A8; // 801EF538
L_801EF53C:;
  c->r[0]=0u+0x00000102u; // 801EF53C
  W16(c->r[30]+0x00000000u,c->r[0]); // 801EF540
  goto L_801EF5A8; // 801EF544
L_801EF548:;
  cmpu(c,0,c->r[0],0x00000008u); // 801EF548
  if (crb(c,1)) { goto L_801EF5A0; } // 801EF54C
  c->r[3]=0u+0x80280000u; // 801EF550
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801EF554
  c->r[3]=c->r[3]+0x0000075Cu; // 801EF558
  c->r[3]=R32(c->r[3]+c->r[0]); // 801EF55C
  c->ctr=c->r[3]; // 801EF560
  if (true) { switch (c->ctr) { case 0x801EF4F8u: goto L_801EF4F8; case 0x801EF500u: goto L_801EF500; case 0x801EF508u: goto L_801EF508; case 0x801EF510u: goto L_801EF510; case 0x801EF518u: goto L_801EF518; case 0x801EF520u: goto L_801EF520; case 0x801EF528u: goto L_801EF528; case 0x801EF530u: goto L_801EF530; case 0x801EF568u: goto L_801EF568; case 0x801EF570u: goto L_801EF570; case 0x801EF578u: goto L_801EF578; case 0x801EF580u: goto L_801EF580; case 0x801EF588u: goto L_801EF588; case 0x801EF590u: goto L_801EF590; case 0x801EF598u: goto L_801EF598; case 0x801EF5A0u: goto L_801EF5A0; default: break; } dispatch(c,c->ctr); return; } // 801EF564
L_801EF568:;
  c->r[0]=0u+0x00000000u; // 801EF568
  goto L_801EF5A4; // 801EF56C
L_801EF570:;
  c->r[0]=0u+0x0000010Bu; // 801EF570
  goto L_801EF5A4; // 801EF574
L_801EF578:;
  c->r[0]=0u+0x00000103u; // 801EF578
  goto L_801EF5A4; // 801EF57C
L_801EF580:;
  c->r[0]=0u+0x00000109u; // 801EF580
  goto L_801EF5A4; // 801EF584
L_801EF588:;
  c->r[0]=0u+0x0000010Cu; // 801EF588
  goto L_801EF5A4; // 801EF58C
L_801EF590:;
  c->r[0]=0u+0x0000010Du; // 801EF590
  goto L_801EF5A4; // 801EF594
L_801EF598:;
  c->r[0]=0u+0x00000115u; // 801EF598
  goto L_801EF5A4; // 801EF59C
L_801EF5A0:;
  c->r[0]=0u+0x00000114u; // 801EF5A0
L_801EF5A4:;
  W16(c->r[30]+0x00000000u,c->r[0]); // 801EF5A4
L_801EF5A8:;
  c->r[12]=R32(c->r[31]+0x0000002Cu); // 801EF5A8
  cmps(c,0,(int32_t)c->r[12],0); // 801EF5AC
  if (crb(c,2)) { goto L_801EF5C4; } // 801EF5B0
  c->r[4]=c->r[30]|c->r[30]; // 801EF5B4
  c->r[3]=0u+0x00000005u; // 801EF5B8
  c->ctr=c->r[12]; // 801EF5BC
  if (true) { c->lr=0x801EF5C4u; dispatch(c,c->ctr); } // 801EF5C0
L_801EF5C4:;
  c->r[0]=0u+0x00000000u; // 801EF5C4
  W8(c->r[31]+0x0000007Eu,c->r[0]); // 801EF5C8
  W32(c->r[31]+0x0000002Cu,c->r[0]); // 801EF5CC
L_801EF5D0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EF5D0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801EF5D4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801EF5D8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801EF5DC
  c->lr=c->r[0]; // 801EF5E0
  c->r[1]=c->r[1]+0x00000020u; // 801EF5E4
  return; // 801EF5E8
}

// gap_convert_btm_status
void f_801EF5EC(Ctx* __restrict c) {
  trace_call(0x801EF5ECu);
  cmpu(c,0,c->r[3],0x00000008u); // 801EF5EC
  if (crb(c,1)) { goto L_801EF644; } // 801EF5F0
  c->r[4]=0u+0x80280000u; // 801EF5F4
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801EF5F8
  c->r[4]=c->r[4]+0x000007A4u; // 801EF5FC
  c->r[4]=R32(c->r[4]+c->r[0]); // 801EF600
  c->ctr=c->r[4]; // 801EF604
  if (true) { switch (c->ctr) { case 0x801EF60Cu: goto L_801EF60C; case 0x801EF614u: goto L_801EF614; case 0x801EF61Cu: goto L_801EF61C; case 0x801EF624u: goto L_801EF624; case 0x801EF62Cu: goto L_801EF62C; case 0x801EF634u: goto L_801EF634; case 0x801EF63Cu: goto L_801EF63C; case 0x801EF644u: goto L_801EF644; default: break; } dispatch(c,c->ctr); return; } // 801EF608
L_801EF60C:;
  c->r[3]=0u+0x00000000u; // 801EF60C
  return; // 801EF610
L_801EF614:;
  c->r[3]=0u+0x0000010Bu; // 801EF614
  return; // 801EF618
L_801EF61C:;
  c->r[3]=0u+0x00000103u; // 801EF61C
  return; // 801EF620
L_801EF624:;
  c->r[3]=0u+0x00000109u; // 801EF624
  return; // 801EF628
L_801EF62C:;
  c->r[3]=0u+0x0000010Cu; // 801EF62C
  return; // 801EF630
L_801EF634:;
  c->r[3]=0u+0x0000010Du; // 801EF634
  return; // 801EF638
L_801EF63C:;
  c->r[3]=0u+0x00000115u; // 801EF63C
  return; // 801EF640
L_801EF644:;
  c->r[3]=0u+0x00000114u; // 801EF644
  return; // 801EF648
}

// btsnd_hcic_inquiry
void f_801EF64C(Ctx* __restrict c) {
  trace_call(0x801EF64Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EF64C
  c->r[0]=c->lr; // 801EF650
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EF654
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801EF658
  c->r[31]=c->r[5]|c->r[5]; // 801EF65C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801EF660
  c->r[30]=c->r[4]|c->r[4]; // 801EF664
  W32(c->r[1]+0x00000014u,c->r[29]); // 801EF668
  c->r[29]=c->r[3]|c->r[3]; // 801EF66C
  c->r[3]=0u+0x00000002u; // 801EF670
  c->lr=0x801EF678u; f_801D9B80(c); // 801EF674
  cmps(c,0,(int32_t)c->r[3],0); // 801EF678
  if (!crb(c,2)) { goto L_801EF688; } // 801EF67C
  c->r[3]=0u+0x00000000u; // 801EF680
  goto L_801EF6D8; // 801EF684
L_801EF688:;
  c->r[0]=0u+0x00000008u; // 801EF688
  c->r[5]=0u+0x00000000u; // 801EF68C
  W16(c->r[3]+0x00000002u,c->r[0]); // 801EF690
  c->r[4]=0u+0x00000001u; // 801EF694
  c->r[0]=0u+0x00000004u; // 801EF698
  c->r[6]=0u+0x00000005u; // 801EF69C
  W16(c->r[3]+0x00000004u,c->r[5]); // 801EF6A0
  c->r[5]=R8(c->r[29]+0x00000002u); // 801EF6A4
  W8(c->r[3]+0x00000008u,c->r[4]); // 801EF6A8
  c->r[4]=R8(c->r[29]+0x00000001u); // 801EF6AC
  W8(c->r[3]+0x00000009u,c->r[0]); // 801EF6B0
  c->r[0]=R8(c->r[29]+0x00000000u); // 801EF6B4
  W8(c->r[3]+0x0000000Au,c->r[6]); // 801EF6B8
  W8(c->r[3]+0x0000000Bu,c->r[5]); // 801EF6BC
  W8(c->r[3]+0x0000000Cu,c->r[4]); // 801EF6C0
  W8(c->r[3]+0x0000000Du,c->r[0]); // 801EF6C4
  W8(c->r[3]+0x0000000Eu,c->r[30]); // 801EF6C8
  W8(c->r[3]+0x0000000Fu,c->r[31]); // 801EF6CC
  c->lr=0x801EF6D4u; f_801ED698(c); // 801EF6D0
  c->r[3]=0u+0x00000001u; // 801EF6D4
L_801EF6D8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EF6D8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801EF6DC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801EF6E0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801EF6E4
  c->lr=c->r[0]; // 801EF6E8
  c->r[1]=c->r[1]+0x00000020u; // 801EF6EC
  return; // 801EF6F0
}

// btsnd_hcic_inq_cancel
void f_801EF6F4(Ctx* __restrict c) {
  trace_call(0x801EF6F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EF6F4
  c->r[0]=c->lr; // 801EF6F8
  c->r[3]=0u+0x00000002u; // 801EF6FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EF700
  c->lr=0x801EF708u; f_801D9B80(c); // 801EF704
  cmps(c,0,(int32_t)c->r[3],0); // 801EF708
  if (!crb(c,2)) { goto L_801EF718; } // 801EF70C
  c->r[3]=0u+0x00000000u; // 801EF710
  goto L_801EF744; // 801EF714
L_801EF718:;
  c->r[0]=0u+0x00000003u; // 801EF718
  c->r[5]=0u+0x00000000u; // 801EF71C
  W16(c->r[3]+0x00000002u,c->r[0]); // 801EF720
  c->r[4]=0u+0x00000002u; // 801EF724
  c->r[0]=0u+0x00000004u; // 801EF728
  W16(c->r[3]+0x00000004u,c->r[5]); // 801EF72C
  W8(c->r[3]+0x00000008u,c->r[4]); // 801EF730
  W8(c->r[3]+0x00000009u,c->r[0]); // 801EF734
  W8(c->r[3]+0x0000000Au,c->r[5]); // 801EF738
  c->lr=0x801EF740u; f_801ED698(c); // 801EF73C
  c->r[3]=0u+0x00000001u; // 801EF740
L_801EF744:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EF744
  c->lr=c->r[0]; // 801EF748
  c->r[1]=c->r[1]+0x00000010u; // 801EF74C
  return; // 801EF750
}

// btsnd_hcic_per_inq_mode
void f_801EF754(Ctx* __restrict c) {
  trace_call(0x801EF754u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EF754
  c->r[0]=c->lr; // 801EF758
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EF75C
  c->r[11]=c->r[1]+0x00000020u; // 801EF760
  c->lr=0x801EF768u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801EF764
  c->r[27]=c->r[3]|c->r[3]; // 801EF768
  c->r[28]=c->r[4]|c->r[4]; // 801EF76C
  c->r[29]=c->r[5]|c->r[5]; // 801EF770
  c->r[30]=c->r[6]|c->r[6]; // 801EF774
  c->r[31]=c->r[7]|c->r[7]; // 801EF778
  c->r[3]=0u+0x00000002u; // 801EF77C
  c->lr=0x801EF784u; f_801D9B80(c); // 801EF780
  cmps(c,0,(int32_t)c->r[3],0); // 801EF784
  if (!crb(c,2)) { goto L_801EF794; } // 801EF788
  c->r[3]=0u+0x00000000u; // 801EF78C
  goto L_801EF7FC; // 801EF790
L_801EF794:;
  c->r[0]=0u+0x0000000Cu; // 801EF794
  c->r[5]=0u+0x00000000u; // 801EF798
  W16(c->r[3]+0x00000002u,c->r[0]); // 801EF79C
  c->r[4]=0u+0x00000003u; // 801EF7A0
  c->r[0]=0u+0x00000004u; // 801EF7A4
  c->r[8]=0u+0x00000009u; // 801EF7A8
  W16(c->r[3]+0x00000004u,c->r[5]); // 801EF7AC
  c->r[7]=sraw(c,c->r[27],8); // 801EF7B0
  c->r[6]=rotl(c->r[28],24)&0x000000FFu; // 801EF7B4
  c->r[5]=R8(c->r[29]+0x00000002u); // 801EF7B8
  W8(c->r[3]+0x00000008u,c->r[4]); // 801EF7BC
  c->r[4]=R8(c->r[29]+0x00000001u); // 801EF7C0
  W8(c->r[3]+0x00000009u,c->r[0]); // 801EF7C4
  c->r[0]=R8(c->r[29]+0x00000000u); // 801EF7C8
  W8(c->r[3]+0x0000000Au,c->r[8]); // 801EF7CC
  W8(c->r[3]+0x0000000Bu,c->r[27]); // 801EF7D0
  W8(c->r[3]+0x0000000Cu,c->r[7]); // 801EF7D4
  W8(c->r[3]+0x0000000Du,c->r[28]); // 801EF7D8
  W8(c->r[3]+0x0000000Eu,c->r[6]); // 801EF7DC
  W8(c->r[3]+0x0000000Fu,c->r[5]); // 801EF7E0
  W8(c->r[3]+0x00000010u,c->r[4]); // 801EF7E4
  W8(c->r[3]+0x00000011u,c->r[0]); // 801EF7E8
  W8(c->r[3]+0x00000012u,c->r[30]); // 801EF7EC
  W8(c->r[3]+0x00000013u,c->r[31]); // 801EF7F0
  c->lr=0x801EF7F8u; f_801ED698(c); // 801EF7F4
  c->r[3]=0u+0x00000001u; // 801EF7F8
L_801EF7FC:;
  c->r[11]=c->r[1]+0x00000020u; // 801EF7FC
  c->lr=0x801EF804u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801EF800
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EF804
  c->lr=c->r[0]; // 801EF808
  c->r[1]=c->r[1]+0x00000020u; // 801EF80C
  return; // 801EF810
}

// btsnd_hcic_create_conn
void f_801EF814(Ctx* __restrict c) {
  trace_call(0x801EF814u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EF814
  c->r[0]=c->lr; // 801EF818
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EF81C
  c->r[11]=c->r[1]+0x00000020u; // 801EF820
  c->lr=0x801EF828u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801EF824
  c->r[26]=c->r[3]|c->r[3]; // 801EF828
  c->r[27]=c->r[4]|c->r[4]; // 801EF82C
  c->r[28]=c->r[5]|c->r[5]; // 801EF830
  c->r[29]=c->r[6]|c->r[6]; // 801EF834
  c->r[30]=c->r[7]|c->r[7]; // 801EF838
  c->r[31]=c->r[8]|c->r[8]; // 801EF83C
  c->r[3]=0u+0x00000002u; // 801EF840
  c->lr=0x801EF848u; f_801D9B80(c); // 801EF844
  cmps(c,0,(int32_t)c->r[3],0); // 801EF848
  if (!crb(c,2)) { goto L_801EF858; } // 801EF84C
  c->r[3]=0u+0x00000000u; // 801EF850
  goto L_801EF8DC; // 801EF854
L_801EF858:;
  c->r[4]=0u+0x00000010u; // 801EF858
  c->r[0]=0u+0x00000000u; // 801EF85C
  W16(c->r[3]+0x00000002u,c->r[4]); // 801EF860
  c->r[7]=0u+0x00000005u; // 801EF864
  c->r[6]=0u+0x00000004u; // 801EF868
  c->r[5]=0u+0x0000000Du; // 801EF86C
  W16(c->r[3]+0x00000004u,c->r[0]); // 801EF870
  c->r[4]=sraw(c,c->r[27],8); // 801EF874
  c->r[0]=rotl(c->r[30],24)&0x000000FFu; // 801EF878
  W8(c->r[3]+0x00000008u,c->r[7]); // 801EF87C
  W8(c->r[3]+0x00000009u,c->r[6]); // 801EF880
  W8(c->r[3]+0x0000000Au,c->r[5]); // 801EF884
  c->r[5]=R8(c->r[26]+0x00000005u); // 801EF888
  W8(c->r[3]+0x0000000Bu,c->r[5]); // 801EF88C
  c->r[5]=R8(c->r[26]+0x00000004u); // 801EF890
  W8(c->r[3]+0x0000000Cu,c->r[5]); // 801EF894
  c->r[5]=R8(c->r[26]+0x00000003u); // 801EF898
  W8(c->r[3]+0x0000000Du,c->r[5]); // 801EF89C
  c->r[5]=R8(c->r[26]+0x00000002u); // 801EF8A0
  W8(c->r[3]+0x0000000Eu,c->r[5]); // 801EF8A4
  c->r[5]=R8(c->r[26]+0x00000001u); // 801EF8A8
  W8(c->r[3]+0x0000000Fu,c->r[5]); // 801EF8AC
  c->r[5]=R8(c->r[26]+0x00000000u); // 801EF8B0
  W8(c->r[3]+0x00000010u,c->r[5]); // 801EF8B4
  W8(c->r[3]+0x00000011u,c->r[27]); // 801EF8B8
  W8(c->r[3]+0x00000012u,c->r[4]); // 801EF8BC
  W8(c->r[3]+0x00000013u,c->r[28]); // 801EF8C0
  W8(c->r[3]+0x00000014u,c->r[29]); // 801EF8C4
  W8(c->r[3]+0x00000015u,c->r[30]); // 801EF8C8
  W8(c->r[3]+0x00000016u,c->r[0]); // 801EF8CC
  W8(c->r[3]+0x00000017u,c->r[31]); // 801EF8D0
  c->lr=0x801EF8D8u; f_801ED698(c); // 801EF8D4
  c->r[3]=0u+0x00000001u; // 801EF8D8
L_801EF8DC:;
  c->r[11]=c->r[1]+0x00000020u; // 801EF8DC
  c->lr=0x801EF8E4u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801EF8E0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EF8E4
  c->lr=c->r[0]; // 801EF8E8
  c->r[1]=c->r[1]+0x00000020u; // 801EF8EC
  return; // 801EF8F0
}

// btsnd_hcic_disconnect
void f_801EF8F4(Ctx* __restrict c) {
  trace_call(0x801EF8F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EF8F4
  c->r[0]=c->lr; // 801EF8F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EF8FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EF900
  c->r[31]=c->r[4]|c->r[4]; // 801EF904
  W32(c->r[1]+0x00000008u,c->r[30]); // 801EF908
  c->r[30]=c->r[3]|c->r[3]; // 801EF90C
  c->r[3]=0u+0x00000002u; // 801EF910
  c->lr=0x801EF918u; f_801D9B80(c); // 801EF914
  cmps(c,0,(int32_t)c->r[3],0); // 801EF918
  if (!crb(c,2)) { goto L_801EF928; } // 801EF91C
  c->r[3]=0u+0x00000000u; // 801EF920
  goto L_801EF964; // 801EF924
L_801EF928:;
  c->r[7]=0u+0x00000006u; // 801EF928
  c->r[6]=0u+0x00000000u; // 801EF92C
  W16(c->r[3]+0x00000002u,c->r[7]); // 801EF930
  c->r[5]=0u+0x00000004u; // 801EF934
  c->r[4]=0u+0x00000003u; // 801EF938
  c->r[0]=rotl(c->r[30],24)&0x000000FFu; // 801EF93C
  W16(c->r[3]+0x00000004u,c->r[6]); // 801EF940
  W8(c->r[3]+0x00000008u,c->r[7]); // 801EF944
  W8(c->r[3]+0x00000009u,c->r[5]); // 801EF948
  W8(c->r[3]+0x0000000Au,c->r[4]); // 801EF94C
  W8(c->r[3]+0x0000000Bu,c->r[30]); // 801EF950
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801EF954
  W8(c->r[3]+0x0000000Du,c->r[31]); // 801EF958
  c->lr=0x801EF960u; f_801ED698(c); // 801EF95C
  c->r[3]=0u+0x00000001u; // 801EF960
L_801EF964:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EF964
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EF968
  c->r[30]=R32(c->r[1]+0x00000008u); // 801EF96C
  c->lr=c->r[0]; // 801EF970
  c->r[1]=c->r[1]+0x00000010u; // 801EF974
  return; // 801EF978
}

// btsnd_hcic_add_SCO_conn
void f_801EF97C(Ctx* __restrict c) {
  trace_call(0x801EF97Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EF97C
  c->r[0]=c->lr; // 801EF980
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EF984
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EF988
  c->r[31]=c->r[4]|c->r[4]; // 801EF98C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801EF990
  c->r[30]=c->r[3]|c->r[3]; // 801EF994
  c->r[3]=0u+0x00000002u; // 801EF998
  c->lr=0x801EF9A0u; f_801D9B80(c); // 801EF99C
  cmps(c,0,(int32_t)c->r[3],0); // 801EF9A0
  if (!crb(c,2)) { goto L_801EF9B0; } // 801EF9A4
  c->r[3]=0u+0x00000000u; // 801EF9A8
  goto L_801EF9F0; // 801EF9AC
L_801EF9B0:;
  c->r[7]=0u+0x00000007u; // 801EF9B0
  c->r[6]=0u+0x00000000u; // 801EF9B4
  W16(c->r[3]+0x00000002u,c->r[7]); // 801EF9B8
  c->r[5]=0u+0x00000004u; // 801EF9BC
  c->r[4]=sraw(c,c->r[30],8); // 801EF9C0
  c->r[0]=rotl(c->r[31],24)&0x000000FFu; // 801EF9C4
  W16(c->r[3]+0x00000004u,c->r[6]); // 801EF9C8
  W8(c->r[3]+0x00000008u,c->r[7]); // 801EF9CC
  W8(c->r[3]+0x00000009u,c->r[5]); // 801EF9D0
  W8(c->r[3]+0x0000000Au,c->r[5]); // 801EF9D4
  W8(c->r[3]+0x0000000Bu,c->r[30]); // 801EF9D8
  W8(c->r[3]+0x0000000Cu,c->r[4]); // 801EF9DC
  W8(c->r[3]+0x0000000Du,c->r[31]); // 801EF9E0
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 801EF9E4
  c->lr=0x801EF9ECu; f_801ED698(c); // 801EF9E8
  c->r[3]=0u+0x00000001u; // 801EF9EC
L_801EF9F0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EF9F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EF9F4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801EF9F8
  c->lr=c->r[0]; // 801EF9FC
  c->r[1]=c->r[1]+0x00000010u; // 801EFA00
  return; // 801EFA04
}

// btsnd_hcic_accept_conn
void f_801EFA08(Ctx* __restrict c) {
  trace_call(0x801EFA08u);
  c->r[9]=0u+0x0000000Au; // 801EFA08
  c->r[8]=0u+0x00000000u; // 801EFA0C
  c->r[7]=0u+0x00000009u; // 801EFA10
  c->r[6]=0u+0x00000004u; // 801EFA14
  c->r[0]=0u+0x00000007u; // 801EFA18
  W16(c->r[3]+0x00000002u,c->r[9]); // 801EFA1C
  W16(c->r[3]+0x00000004u,c->r[8]); // 801EFA20
  W8(c->r[3]+0x00000008u,c->r[7]); // 801EFA24
  W8(c->r[3]+0x00000009u,c->r[6]); // 801EFA28
  W8(c->r[3]+0x0000000Au,c->r[0]); // 801EFA2C
  c->r[0]=R8(c->r[4]+0x00000005u); // 801EFA30
  W8(c->r[3]+0x0000000Bu,c->r[0]); // 801EFA34
  c->r[0]=R8(c->r[4]+0x00000004u); // 801EFA38
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801EFA3C
  c->r[0]=R8(c->r[4]+0x00000003u); // 801EFA40
  W8(c->r[3]+0x0000000Du,c->r[0]); // 801EFA44
  c->r[0]=R8(c->r[4]+0x00000002u); // 801EFA48
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 801EFA4C
  c->r[0]=R8(c->r[4]+0x00000001u); // 801EFA50
  W8(c->r[3]+0x0000000Fu,c->r[0]); // 801EFA54
  c->r[0]=R8(c->r[4]+0x00000000u); // 801EFA58
  W8(c->r[3]+0x00000010u,c->r[0]); // 801EFA5C
  W8(c->r[3]+0x00000011u,c->r[5]); // 801EFA60
  f_801ED698(c); return; // 801EFA64
}

// btsnd_hcic_reject_conn
void f_801EFA68(Ctx* __restrict c) {
  trace_call(0x801EFA68u);
  c->r[8]=0u+0x0000000Au; // 801EFA68
  c->r[7]=0u+0x00000000u; // 801EFA6C
  c->r[6]=0u+0x00000004u; // 801EFA70
  c->r[0]=0u+0x00000007u; // 801EFA74
  W16(c->r[3]+0x00000002u,c->r[8]); // 801EFA78
  W16(c->r[3]+0x00000004u,c->r[7]); // 801EFA7C
  W8(c->r[3]+0x00000008u,c->r[8]); // 801EFA80
  W8(c->r[3]+0x00000009u,c->r[6]); // 801EFA84
  W8(c->r[3]+0x0000000Au,c->r[0]); // 801EFA88
  c->r[0]=R8(c->r[4]+0x00000005u); // 801EFA8C
  W8(c->r[3]+0x0000000Bu,c->r[0]); // 801EFA90
  c->r[0]=R8(c->r[4]+0x00000004u); // 801EFA94
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801EFA98
  c->r[0]=R8(c->r[4]+0x00000003u); // 801EFA9C
  W8(c->r[3]+0x0000000Du,c->r[0]); // 801EFAA0
  c->r[0]=R8(c->r[4]+0x00000002u); // 801EFAA4
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 801EFAA8
  c->r[0]=R8(c->r[4]+0x00000001u); // 801EFAAC
  W8(c->r[3]+0x0000000Fu,c->r[0]); // 801EFAB0
  c->r[0]=R8(c->r[4]+0x00000000u); // 801EFAB4
  W8(c->r[3]+0x00000010u,c->r[0]); // 801EFAB8
  W8(c->r[3]+0x00000011u,c->r[5]); // 801EFABC
  f_801ED698(c); return; // 801EFAC0
}

// btsnd_hcic_link_key_req_reply
void f_801EFAC4(Ctx* __restrict c) {
  trace_call(0x801EFAC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EFAC4
  c->r[0]=c->lr; // 801EFAC8
  W32(c->r[1]+0x00000034u,c->r[0]); // 801EFACC
  c->r[11]=c->r[1]+0x00000030u; // 801EFAD0
  c->lr=0x801EFAD8u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801EFAD4
  c->r[30]=c->r[3]|c->r[3]; // 801EFAD8
  c->r[31]=c->r[4]|c->r[4]; // 801EFADC
  c->r[3]=0u+0x00000002u; // 801EFAE0
  c->lr=0x801EFAE8u; f_801D9B80(c); // 801EFAE4
  cmps(c,0,(int32_t)c->r[3],0); // 801EFAE8
  if (!crb(c,2)) { goto L_801EFAF8; } // 801EFAEC
  c->r[3]=0u+0x00000000u; // 801EFAF0
  goto L_801EFC4C; // 801EFAF4
L_801EFAF8:;
  c->r[0]=0u+0x00000019u; // 801EFAF8
  c->r[4]=0u+0x00000000u; // 801EFAFC
  W16(c->r[3]+0x00000002u,c->r[0]); // 801EFB00
  c->r[0]=0u+0x0000000Bu; // 801EFB04
  c->r[6]=0u+0x00000004u; // 801EFB08
  c->r[5]=0u+0x00000016u; // 801EFB0C
  W16(c->r[3]+0x00000004u,c->r[4]); // 801EFB10
  c->r[24]=addc(c,~c->r[4],0x0000000Fu,1); // 801EFB14
  c->r[25]=0u+0x00000001u; // 801EFB18
  c->r[27]=0u+0x00000002u; // 801EFB1C
  W8(c->r[3]+0x00000008u,c->r[0]); // 801EFB20
  c->r[26]=addc(c,~c->r[25],0x0000000Fu,1); // 801EFB24
  c->r[28]=addc(c,~c->r[27],0x0000000Fu,1); // 801EFB28
  c->r[4]=0u+0x00000003u; // 801EFB2C
  W8(c->r[3]+0x00000009u,c->r[6]); // 801EFB30
  c->r[29]=addc(c,~c->r[4],0x0000000Fu,1); // 801EFB34
  c->r[9]=0u+0x00000005u; // 801EFB38
  c->r[10]=addc(c,~c->r[6],0x0000000Fu,1); // 801EFB3C
  W8(c->r[3]+0x0000000Au,c->r[5]); // 801EFB40
  c->r[8]=addc(c,~c->r[9],0x0000000Fu,1); // 801EFB44
  c->r[7]=0u+0x00000006u; // 801EFB48
  c->r[5]=0u+0x00000007u; // 801EFB4C
  c->r[4]=R8(c->r[30]+0x00000005u); // 801EFB50
  c->r[6]=addc(c,~c->r[7],0x0000000Fu,1); // 801EFB54
  c->r[23]=0u+0x00000008u; // 801EFB58
  c->r[25]=0u+0x00000009u; // 801EFB5C
  W8(c->r[3]+0x0000000Bu,c->r[4]); // 801EFB60
  c->r[4]=addc(c,~c->r[5],0x0000000Fu,1); // 801EFB64
  c->r[27]=0u+0x0000000Au; // 801EFB68
  c->r[11]=0u+0x0000000Cu; // 801EFB6C
  c->r[5]=R8(c->r[30]+0x00000004u); // 801EFB70
  c->r[9]=0u+0x0000000Du; // 801EFB74
  c->r[7]=0u+0x0000000Eu; // 801EFB78
  W8(c->r[3]+0x0000000Cu,c->r[5]); // 801EFB7C
  c->r[5]=0u+0x0000000Fu; // 801EFB80
  c->r[12]=R8(c->r[30]+0x00000003u); // 801EFB84
  W8(c->r[3]+0x0000000Du,c->r[12]); // 801EFB88
  c->r[12]=R8(c->r[30]+0x00000002u); // 801EFB8C
  W8(c->r[3]+0x0000000Eu,c->r[12]); // 801EFB90
  c->r[12]=R8(c->r[30]+0x00000001u); // 801EFB94
  W8(c->r[3]+0x0000000Fu,c->r[12]); // 801EFB98
  c->r[12]=R8(c->r[30]+0x00000000u); // 801EFB9C
  W8(c->r[3]+0x00000010u,c->r[12]); // 801EFBA0
  c->r[12]=R8(c->r[31]+c->r[24]); // 801EFBA4
  c->r[24]=addc(c,~c->r[23],0x0000000Fu,1); // 801EFBA8
  W8(c->r[3]+0x00000011u,c->r[12]); // 801EFBAC
  c->r[12]=R8(c->r[31]+c->r[26]); // 801EFBB0
  c->r[26]=addc(c,~c->r[25],0x0000000Fu,1); // 801EFBB4
  W8(c->r[3]+0x00000012u,c->r[12]); // 801EFBB8
  c->r[12]=R8(c->r[31]+c->r[28]); // 801EFBBC
  c->r[28]=addc(c,~c->r[27],0x0000000Fu,1); // 801EFBC0
  W8(c->r[3]+0x00000013u,c->r[12]); // 801EFBC4
  c->r[12]=R8(c->r[31]+c->r[29]); // 801EFBC8
  c->r[29]=addc(c,~c->r[0],0x0000000Fu,1); // 801EFBCC
  W8(c->r[3]+0x00000014u,c->r[12]); // 801EFBD0
  c->r[0]=R8(c->r[31]+c->r[10]); // 801EFBD4
  c->r[10]=addc(c,~c->r[11],0x0000000Fu,1); // 801EFBD8
  W8(c->r[3]+0x00000015u,c->r[0]); // 801EFBDC
  c->r[0]=R8(c->r[31]+c->r[8]); // 801EFBE0
  c->r[8]=addc(c,~c->r[9],0x0000000Fu,1); // 801EFBE4
  W8(c->r[3]+0x00000016u,c->r[0]); // 801EFBE8
  c->r[0]=R8(c->r[31]+c->r[6]); // 801EFBEC
  c->r[6]=addc(c,~c->r[7],0x0000000Fu,1); // 801EFBF0
  W8(c->r[3]+0x00000017u,c->r[0]); // 801EFBF4
  c->r[0]=R8(c->r[31]+c->r[4]); // 801EFBF8
  c->r[4]=addc(c,~c->r[5],0x0000000Fu,1); // 801EFBFC
  W8(c->r[3]+0x00000018u,c->r[0]); // 801EFC00
  c->r[12]=R8(c->r[31]+c->r[24]); // 801EFC04
  W8(c->r[3]+0x00000019u,c->r[12]); // 801EFC08
  c->r[12]=R8(c->r[31]+c->r[26]); // 801EFC0C
  W8(c->r[3]+0x0000001Au,c->r[12]); // 801EFC10
  c->r[12]=R8(c->r[31]+c->r[28]); // 801EFC14
  W8(c->r[3]+0x0000001Bu,c->r[12]); // 801EFC18
  c->r[12]=R8(c->r[31]+c->r[29]); // 801EFC1C
  W8(c->r[3]+0x0000001Cu,c->r[12]); // 801EFC20
  c->r[0]=R8(c->r[31]+c->r[10]); // 801EFC24
  W8(c->r[3]+0x0000001Du,c->r[0]); // 801EFC28
  c->r[0]=R8(c->r[31]+c->r[8]); // 801EFC2C
  W8(c->r[3]+0x0000001Eu,c->r[0]); // 801EFC30
  c->r[0]=R8(c->r[31]+c->r[6]); // 801EFC34
  W8(c->r[3]+0x0000001Fu,c->r[0]); // 801EFC38
  c->r[0]=R8(c->r[31]+c->r[4]); // 801EFC3C
  W8(c->r[3]+0x00000020u,c->r[0]); // 801EFC40
  c->lr=0x801EFC48u; f_801ED698(c); // 801EFC44
  c->r[3]=0u+0x00000001u; // 801EFC48
L_801EFC4C:;
  c->r[11]=c->r[1]+0x00000030u; // 801EFC4C
  c->lr=0x801EFC54u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801EFC50
  c->r[0]=R32(c->r[1]+0x00000034u); // 801EFC54
  c->lr=c->r[0]; // 801EFC58
  c->r[1]=c->r[1]+0x00000030u; // 801EFC5C
  return; // 801EFC60
}

// btsnd_hcic_link_key_neg_reply
void f_801EFC64(Ctx* __restrict c) {
  trace_call(0x801EFC64u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EFC64
  c->r[0]=c->lr; // 801EFC68
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EFC6C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EFC70
  c->r[31]=c->r[3]|c->r[3]; // 801EFC74
  c->r[3]=0u+0x00000002u; // 801EFC78
  c->lr=0x801EFC80u; f_801D9B80(c); // 801EFC7C
  cmps(c,0,(int32_t)c->r[3],0); // 801EFC80
  if (!crb(c,2)) { goto L_801EFC90; } // 801EFC84
  c->r[3]=0u+0x00000000u; // 801EFC88
  goto L_801EFCF0; // 801EFC8C
L_801EFC90:;
  c->r[0]=0u+0x00000009u; // 801EFC90
  c->r[6]=0u+0x00000000u; // 801EFC94
  W16(c->r[3]+0x00000002u,c->r[0]); // 801EFC98
  c->r[5]=0u+0x0000000Cu; // 801EFC9C
  c->r[4]=0u+0x00000004u; // 801EFCA0
  c->r[0]=0u+0x00000006u; // 801EFCA4
  W16(c->r[3]+0x00000004u,c->r[6]); // 801EFCA8
  W8(c->r[3]+0x00000008u,c->r[5]); // 801EFCAC
  W8(c->r[3]+0x00000009u,c->r[4]); // 801EFCB0
  W8(c->r[3]+0x0000000Au,c->r[0]); // 801EFCB4
  c->r[0]=R8(c->r[31]+0x00000005u); // 801EFCB8
  W8(c->r[3]+0x0000000Bu,c->r[0]); // 801EFCBC
  c->r[0]=R8(c->r[31]+0x00000004u); // 801EFCC0
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801EFCC4
  c->r[0]=R8(c->r[31]+0x00000003u); // 801EFCC8
  W8(c->r[3]+0x0000000Du,c->r[0]); // 801EFCCC
  c->r[0]=R8(c->r[31]+0x00000002u); // 801EFCD0
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 801EFCD4
  c->r[0]=R8(c->r[31]+0x00000001u); // 801EFCD8
  W8(c->r[3]+0x0000000Fu,c->r[0]); // 801EFCDC
  c->r[0]=R8(c->r[31]+0x00000000u); // 801EFCE0
  W8(c->r[3]+0x00000010u,c->r[0]); // 801EFCE4
  c->lr=0x801EFCECu; f_801ED698(c); // 801EFCE8
  c->r[3]=0u+0x00000001u; // 801EFCEC
L_801EFCF0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EFCF0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EFCF4
  c->lr=c->r[0]; // 801EFCF8
  c->r[1]=c->r[1]+0x00000010u; // 801EFCFC
  return; // 801EFD00
}

// btsnd_hcic_pin_code_req_reply
void f_801EFD04(Ctx* __restrict c) {
  trace_call(0x801EFD04u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EFD04
  c->r[0]=c->lr; // 801EFD08
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EFD0C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801EFD10
  c->r[31]=c->r[5]|c->r[5]; // 801EFD14
  W32(c->r[1]+0x00000018u,c->r[30]); // 801EFD18
  c->r[30]=c->r[4]|c->r[4]; // 801EFD1C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801EFD20
  c->r[29]=c->r[3]|c->r[3]; // 801EFD24
  c->r[3]=0u+0x00000002u; // 801EFD28
  c->lr=0x801EFD30u; f_801D9B80(c); // 801EFD2C
  cmps(c,0,(int32_t)c->r[3],0); // 801EFD30
  if (!crb(c,2)) { goto L_801EFD40; } // 801EFD34
  c->r[3]=0u+0x00000000u; // 801EFD38
  goto L_801EFECC; // 801EFD3C
L_801EFD40:;
  c->r[0]=0u+0x0000001Au; // 801EFD40
  c->r[4]=0u+0x00000000u; // 801EFD44
  W16(c->r[3]+0x00000002u,c->r[0]); // 801EFD48
  c->r[7]=0u+0x0000000Du; // 801EFD4C
  c->r[6]=0u+0x00000004u; // 801EFD50
  c->r[0]=0u+0x00000017u; // 801EFD54
  W16(c->r[3]+0x00000004u,c->r[4]); // 801EFD58
  cmps(c,1,(int32_t)c->r[30],0); // 801EFD5C
  c->r[4]=c->r[3]+0x00000012u; // 801EFD60
  c->r[5]=0u+0x00000000u; // 801EFD64
  W8(c->r[3]+0x00000008u,c->r[7]); // 801EFD68
  W8(c->r[3]+0x00000009u,c->r[6]); // 801EFD6C
  W8(c->r[3]+0x0000000Au,c->r[0]); // 801EFD70
  c->r[0]=R8(c->r[29]+0x00000005u); // 801EFD74
  W8(c->r[3]+0x0000000Bu,c->r[0]); // 801EFD78
  c->r[0]=R8(c->r[29]+0x00000004u); // 801EFD7C
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801EFD80
  c->r[0]=R8(c->r[29]+0x00000003u); // 801EFD84
  W8(c->r[3]+0x0000000Du,c->r[0]); // 801EFD88
  c->r[0]=R8(c->r[29]+0x00000002u); // 801EFD8C
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 801EFD90
  c->r[0]=R8(c->r[29]+0x00000001u); // 801EFD94
  W8(c->r[3]+0x0000000Fu,c->r[0]); // 801EFD98
  c->r[0]=R8(c->r[29]+0x00000000u); // 801EFD9C
  W8(c->r[3]+0x00000010u,c->r[0]); // 801EFDA0
  W8(c->r[3]+0x00000011u,c->r[30]); // 801EFDA4
  if (!crb(c,5)) { goto L_801EFE68; } // 801EFDA8
  cmps(c,0,(int32_t)c->r[30],8); // 801EFDAC
  c->r[7]=c->r[30]+0xFFFFFFF8u; // 801EFDB0
  if (!crb(c,1)) { goto L_801EFE40; } // 801EFDB4
  c->r[8]=0u+0x00000000u; // 801EFDB8
  if (crb(c,4)) { goto L_801EFDD4; } // 801EFDBC
  c->r[6]=0u+0x80000000u; // 801EFDC0
  c->r[0]=c->r[6]+0xFFFFFFFEu; // 801EFDC4
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 801EFDC8
  if (crb(c,1)) { goto L_801EFDD4; } // 801EFDCC
  c->r[8]=0u+0x00000001u; // 801EFDD0
L_801EFDD4:;
  cmps(c,0,(int32_t)c->r[8],0); // 801EFDD4
  if (crb(c,2)) { goto L_801EFE40; } // 801EFDD8
  c->r[0]=c->r[7]+0x00000007u; // 801EFDDC
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 801EFDE0
  c->ctr=c->r[0]; // 801EFDE4
  cmps(c,0,(int32_t)c->r[7],0); // 801EFDE8
  if (!crb(c,1)) { goto L_801EFE40; } // 801EFDEC
L_801EFDF0:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 801EFDF0
  c->r[5]=c->r[5]+0x00000008u; // 801EFDF4
  W8(c->r[4]+0x00000000u,c->r[0]); // 801EFDF8
  c->r[0]=R8(c->r[31]+0x00000001u); // 801EFDFC
  W8(c->r[4]+0x00000001u,c->r[0]); // 801EFE00
  c->r[0]=R8(c->r[31]+0x00000002u); // 801EFE04
  W8(c->r[4]+0x00000002u,c->r[0]); // 801EFE08
  c->r[0]=R8(c->r[31]+0x00000003u); // 801EFE0C
  W8(c->r[4]+0x00000003u,c->r[0]); // 801EFE10
  c->r[0]=R8(c->r[31]+0x00000004u); // 801EFE14
  W8(c->r[4]+0x00000004u,c->r[0]); // 801EFE18
  c->r[0]=R8(c->r[31]+0x00000005u); // 801EFE1C
  W8(c->r[4]+0x00000005u,c->r[0]); // 801EFE20
  c->r[0]=R8(c->r[31]+0x00000006u); // 801EFE24
  W8(c->r[4]+0x00000006u,c->r[0]); // 801EFE28
  c->r[0]=R8(c->r[31]+0x00000007u); // 801EFE2C
  c->r[31]=c->r[31]+0x00000008u; // 801EFE30
  W8(c->r[4]+0x00000007u,c->r[0]); // 801EFE34
  c->r[4]=c->r[4]+0x00000008u; // 801EFE38
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801EFDF0; } // 801EFE3C
L_801EFE40:;
  c->r[0]=c->r[30]-c->r[5]; // 801EFE40
  c->ctr=c->r[0]; // 801EFE44
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[30]); // 801EFE48
  if (!crb(c,0)) { goto L_801EFE68; } // 801EFE4C
L_801EFE50:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 801EFE50
  c->r[5]=c->r[5]+0x00000001u; // 801EFE54
  c->r[31]=c->r[31]+0x00000001u; // 801EFE58
  W8(c->r[4]+0x00000000u,c->r[0]); // 801EFE5C
  c->r[4]=c->r[4]+0x00000001u; // 801EFE60
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801EFE50; } // 801EFE64
L_801EFE68:;
  cmps(c,0,(int32_t)c->r[5],16); // 801EFE68
  c->r[5]=addc(c,~c->r[5],0x00000010u,1); // 801EFE6C
  c->r[6]=0u+0x00000000u; // 801EFE70
  if (!crb(c,0)) { goto L_801EFEC4; } // 801EFE74
  c->r[0]=rotl(c->r[5],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 801EFE78
  c->ctr=c->r[0]; // 801EFE7C
  if (crb(c,2)) { goto L_801EFEB4; } // 801EFE80
L_801EFE84:;
  W8(c->r[4]+0x00000000u,c->r[6]); // 801EFE84
  W8(c->r[4]+0x00000001u,c->r[6]); // 801EFE88
  W8(c->r[4]+0x00000002u,c->r[6]); // 801EFE8C
  W8(c->r[4]+0x00000003u,c->r[6]); // 801EFE90
  W8(c->r[4]+0x00000004u,c->r[6]); // 801EFE94
  W8(c->r[4]+0x00000005u,c->r[6]); // 801EFE98
  W8(c->r[4]+0x00000006u,c->r[6]); // 801EFE9C
  W8(c->r[4]+0x00000007u,c->r[6]); // 801EFEA0
  c->r[4]=c->r[4]+0x00000008u; // 801EFEA4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801EFE84; } // 801EFEA8
  c->r[5]=c->r[5]&0x00000007u; cr0(c,c->r[5]); // 801EFEAC
  if (crb(c,2)) { goto L_801EFEC4; } // 801EFEB0
L_801EFEB4:;
  c->ctr=c->r[5]; // 801EFEB4
L_801EFEB8:;
  W8(c->r[4]+0x00000000u,c->r[6]); // 801EFEB8
  c->r[4]=c->r[4]+0x00000001u; // 801EFEBC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801EFEB8; } // 801EFEC0
L_801EFEC4:;
  c->lr=0x801EFEC8u; f_801ED698(c); // 801EFEC4
  c->r[3]=0u+0x00000001u; // 801EFEC8
L_801EFECC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EFECC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801EFED0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801EFED4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801EFED8
  c->lr=c->r[0]; // 801EFEDC
  c->r[1]=c->r[1]+0x00000020u; // 801EFEE0
  return; // 801EFEE4
}

// btsnd_hcic_pin_code_neg_reply
void f_801EFEE8(Ctx* __restrict c) {
  trace_call(0x801EFEE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EFEE8
  c->r[0]=c->lr; // 801EFEEC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EFEF0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EFEF4
  c->r[31]=c->r[3]|c->r[3]; // 801EFEF8
  c->r[3]=0u+0x00000002u; // 801EFEFC
  c->lr=0x801EFF04u; f_801D9B80(c); // 801EFF00
  cmps(c,0,(int32_t)c->r[3],0); // 801EFF04
  if (!crb(c,2)) { goto L_801EFF14; } // 801EFF08
  c->r[3]=0u+0x00000000u; // 801EFF0C
  goto L_801EFF74; // 801EFF10
L_801EFF14:;
  c->r[0]=0u+0x00000009u; // 801EFF14
  c->r[6]=0u+0x00000000u; // 801EFF18
  W16(c->r[3]+0x00000002u,c->r[0]); // 801EFF1C
  c->r[5]=0u+0x0000000Eu; // 801EFF20
  c->r[4]=0u+0x00000004u; // 801EFF24
  c->r[0]=0u+0x00000006u; // 801EFF28
  W16(c->r[3]+0x00000004u,c->r[6]); // 801EFF2C
  W8(c->r[3]+0x00000008u,c->r[5]); // 801EFF30
  W8(c->r[3]+0x00000009u,c->r[4]); // 801EFF34
  W8(c->r[3]+0x0000000Au,c->r[0]); // 801EFF38
  c->r[0]=R8(c->r[31]+0x00000005u); // 801EFF3C
  W8(c->r[3]+0x0000000Bu,c->r[0]); // 801EFF40
  c->r[0]=R8(c->r[31]+0x00000004u); // 801EFF44
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801EFF48
  c->r[0]=R8(c->r[31]+0x00000003u); // 801EFF4C
  W8(c->r[3]+0x0000000Du,c->r[0]); // 801EFF50
  c->r[0]=R8(c->r[31]+0x00000002u); // 801EFF54
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 801EFF58
  c->r[0]=R8(c->r[31]+0x00000001u); // 801EFF5C
  W8(c->r[3]+0x0000000Fu,c->r[0]); // 801EFF60
  c->r[0]=R8(c->r[31]+0x00000000u); // 801EFF64
  W8(c->r[3]+0x00000010u,c->r[0]); // 801EFF68
  c->lr=0x801EFF70u; f_801ED698(c); // 801EFF6C
  c->r[3]=0u+0x00000001u; // 801EFF70
L_801EFF74:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EFF74
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EFF78
  c->lr=c->r[0]; // 801EFF7C
  c->r[1]=c->r[1]+0x00000010u; // 801EFF80
  return; // 801EFF84
}

// btsnd_hcic_change_conn_type
void f_801EFF88(Ctx* __restrict c) {
  trace_call(0x801EFF88u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EFF88
  c->r[0]=c->lr; // 801EFF8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EFF90
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EFF94
  c->r[31]=c->r[4]|c->r[4]; // 801EFF98
  W32(c->r[1]+0x00000008u,c->r[30]); // 801EFF9C
  c->r[30]=c->r[3]|c->r[3]; // 801EFFA0
  c->r[3]=0u+0x00000002u; // 801EFFA4
  c->lr=0x801EFFACu; f_801D9B80(c); // 801EFFA8
  cmps(c,0,(int32_t)c->r[3],0); // 801EFFAC
  if (!crb(c,2)) { goto L_801EFFBC; } // 801EFFB0
  c->r[3]=0u+0x00000000u; // 801EFFB4
  goto L_801F0000; // 801EFFB8
L_801EFFBC:;
  c->r[4]=0u+0x00000007u; // 801EFFBC
  c->r[0]=0u+0x00000000u; // 801EFFC0
  W16(c->r[3]+0x00000002u,c->r[4]); // 801EFFC4
  c->r[6]=0u+0x0000000Fu; // 801EFFC8
  c->r[5]=0u+0x00000004u; // 801EFFCC
  c->r[4]=sraw(c,c->r[30],8); // 801EFFD0
  W16(c->r[3]+0x00000004u,c->r[0]); // 801EFFD4
  c->r[0]=rotl(c->r[31],24)&0x000000FFu; // 801EFFD8
  W8(c->r[3]+0x00000008u,c->r[6]); // 801EFFDC
  W8(c->r[3]+0x00000009u,c->r[5]); // 801EFFE0
  W8(c->r[3]+0x0000000Au,c->r[5]); // 801EFFE4
  W8(c->r[3]+0x0000000Bu,c->r[30]); // 801EFFE8
  W8(c->r[3]+0x0000000Cu,c->r[4]); // 801EFFEC
  W8(c->r[3]+0x0000000Du,c->r[31]); // 801EFFF0
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 801EFFF4
  c->lr=0x801EFFFCu; f_801ED698(c); // 801EFFF8
  c->r[3]=0u+0x00000001u; // 801EFFFC
L_801F0000:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F0000
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F0004
  c->r[30]=R32(c->r[1]+0x00000008u); // 801F0008
  c->lr=c->r[0]; // 801F000C
  c->r[1]=c->r[1]+0x00000010u; // 801F0010
  return; // 801F0014
}

// btsnd_hcic_auth_request
void f_801F0018(Ctx* __restrict c) {
  trace_call(0x801F0018u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F0018
  c->r[0]=c->lr; // 801F001C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F0020
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F0024
  c->r[31]=c->r[3]|c->r[3]; // 801F0028
  c->r[3]=0u+0x00000002u; // 801F002C
  c->lr=0x801F0034u; f_801D9B80(c); // 801F0030
  cmps(c,0,(int32_t)c->r[3],0); // 801F0034
  if (!crb(c,2)) { goto L_801F0044; } // 801F0038
  c->r[3]=0u+0x00000000u; // 801F003C
  goto L_801F0080; // 801F0040
L_801F0044:;
  c->r[4]=0u+0x00000005u; // 801F0044
  c->r[0]=0u+0x00000000u; // 801F0048
  W16(c->r[3]+0x00000002u,c->r[4]); // 801F004C
  c->r[6]=0u+0x00000011u; // 801F0050
  c->r[5]=0u+0x00000004u; // 801F0054
  c->r[4]=0u+0x00000002u; // 801F0058
  W16(c->r[3]+0x00000004u,c->r[0]); // 801F005C
  c->r[0]=rotl(c->r[31],24)&0x000000FFu; // 801F0060
  W8(c->r[3]+0x00000008u,c->r[6]); // 801F0064
  W8(c->r[3]+0x00000009u,c->r[5]); // 801F0068
  W8(c->r[3]+0x0000000Au,c->r[4]); // 801F006C
  W8(c->r[3]+0x0000000Bu,c->r[31]); // 801F0070
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801F0074
  c->lr=0x801F007Cu; f_801ED698(c); // 801F0078
  c->r[3]=0u+0x00000001u; // 801F007C
L_801F0080:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F0080
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F0084
  c->lr=c->r[0]; // 801F0088
  c->r[1]=c->r[1]+0x00000010u; // 801F008C
  return; // 801F0090
}

// btsnd_hcic_set_conn_encrypt
void f_801F0094(Ctx* __restrict c) {
  trace_call(0x801F0094u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F0094
  c->r[0]=c->lr; // 801F0098
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F009C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F00A0
  c->r[31]=c->r[4]|c->r[4]; // 801F00A4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801F00A8
  c->r[30]=c->r[3]|c->r[3]; // 801F00AC
  c->r[3]=0u+0x00000002u; // 801F00B0
  c->lr=0x801F00B8u; f_801D9B80(c); // 801F00B4
  cmps(c,0,(int32_t)c->r[3],0); // 801F00B8
  if (!crb(c,2)) { goto L_801F00C8; } // 801F00BC
  c->r[3]=0u+0x00000000u; // 801F00C0
  goto L_801F0108; // 801F00C4
L_801F00C8:;
  c->r[4]=0u+0x00000006u; // 801F00C8
  c->r[0]=0u+0x00000000u; // 801F00CC
  W16(c->r[3]+0x00000002u,c->r[4]); // 801F00D0
  c->r[6]=0u+0x00000013u; // 801F00D4
  c->r[5]=0u+0x00000004u; // 801F00D8
  c->r[4]=0u+0x00000003u; // 801F00DC
  W16(c->r[3]+0x00000004u,c->r[0]); // 801F00E0
  c->r[0]=rotl(c->r[30],24)&0x000000FFu; // 801F00E4
  W8(c->r[3]+0x00000008u,c->r[6]); // 801F00E8
  W8(c->r[3]+0x00000009u,c->r[5]); // 801F00EC
  W8(c->r[3]+0x0000000Au,c->r[4]); // 801F00F0
  W8(c->r[3]+0x0000000Bu,c->r[30]); // 801F00F4
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801F00F8
  W8(c->r[3]+0x0000000Du,c->r[31]); // 801F00FC
  c->lr=0x801F0104u; f_801ED698(c); // 801F0100
  c->r[3]=0u+0x00000001u; // 801F0104
L_801F0108:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F0108
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F010C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801F0110
  c->lr=c->r[0]; // 801F0114
  c->r[1]=c->r[1]+0x00000010u; // 801F0118
  return; // 801F011C
}

// btsnd_hcic_rmt_name_req
void f_801F0120(Ctx* __restrict c) {
  trace_call(0x801F0120u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F0120
  c->r[0]=c->lr; // 801F0124
  W32(c->r[1]+0x00000024u,c->r[0]); // 801F0128
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801F012C
  c->r[31]=c->r[6]|c->r[6]; // 801F0130
  W32(c->r[1]+0x00000018u,c->r[30]); // 801F0134
  c->r[30]=c->r[5]|c->r[5]; // 801F0138
  W32(c->r[1]+0x00000014u,c->r[29]); // 801F013C
  c->r[29]=c->r[4]|c->r[4]; // 801F0140
  W32(c->r[1]+0x00000010u,c->r[28]); // 801F0144
  c->r[28]=c->r[3]|c->r[3]; // 801F0148
  c->r[3]=0u+0x00000002u; // 801F014C
  c->lr=0x801F0154u; f_801D9B80(c); // 801F0150
  cmps(c,0,(int32_t)c->r[3],0); // 801F0154
  if (!crb(c,2)) { goto L_801F0164; } // 801F0158
  c->r[3]=0u+0x00000000u; // 801F015C
  goto L_801F01D8; // 801F0160
L_801F0164:;
  c->r[4]=0u+0x0000000Du; // 801F0164
  c->r[0]=0u+0x00000000u; // 801F0168
  W16(c->r[3]+0x00000002u,c->r[4]); // 801F016C
  c->r[6]=0u+0x00000019u; // 801F0170
  c->r[5]=0u+0x00000004u; // 801F0174
  c->r[4]=0u+0x0000000Au; // 801F0178
  W16(c->r[3]+0x00000004u,c->r[0]); // 801F017C
  c->r[0]=rotl(c->r[31],24)&0x000000FFu; // 801F0180
  W8(c->r[3]+0x00000008u,c->r[6]); // 801F0184
  W8(c->r[3]+0x00000009u,c->r[5]); // 801F0188
  W8(c->r[3]+0x0000000Au,c->r[4]); // 801F018C
  c->r[4]=R8(c->r[28]+0x00000005u); // 801F0190
  W8(c->r[3]+0x0000000Bu,c->r[4]); // 801F0194
  c->r[4]=R8(c->r[28]+0x00000004u); // 801F0198
  W8(c->r[3]+0x0000000Cu,c->r[4]); // 801F019C
  c->r[4]=R8(c->r[28]+0x00000003u); // 801F01A0
  W8(c->r[3]+0x0000000Du,c->r[4]); // 801F01A4
  c->r[4]=R8(c->r[28]+0x00000002u); // 801F01A8
  W8(c->r[3]+0x0000000Eu,c->r[4]); // 801F01AC
  c->r[4]=R8(c->r[28]+0x00000001u); // 801F01B0
  W8(c->r[3]+0x0000000Fu,c->r[4]); // 801F01B4
  c->r[4]=R8(c->r[28]+0x00000000u); // 801F01B8
  W8(c->r[3]+0x00000010u,c->r[4]); // 801F01BC
  W8(c->r[3]+0x00000011u,c->r[29]); // 801F01C0
  W8(c->r[3]+0x00000012u,c->r[30]); // 801F01C4
  W8(c->r[3]+0x00000013u,c->r[31]); // 801F01C8
  W8(c->r[3]+0x00000014u,c->r[0]); // 801F01CC
  c->lr=0x801F01D4u; f_801ED698(c); // 801F01D0
  c->r[3]=0u+0x00000001u; // 801F01D4
L_801F01D8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801F01D8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801F01DC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801F01E0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801F01E4
  c->r[28]=R32(c->r[1]+0x00000010u); // 801F01E8
  c->lr=c->r[0]; // 801F01EC
  c->r[1]=c->r[1]+0x00000020u; // 801F01F0
  return; // 801F01F4
}

// btsnd_hcic_rmt_name_req_cancel
void f_801F01F8(Ctx* __restrict c) {
  trace_call(0x801F01F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F01F8
  c->r[0]=c->lr; // 801F01FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F0200
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F0204
  c->r[31]=c->r[3]|c->r[3]; // 801F0208
  c->r[3]=0u+0x00000002u; // 801F020C
  c->lr=0x801F0214u; f_801D9B80(c); // 801F0210
  cmps(c,0,(int32_t)c->r[3],0); // 801F0214
  if (!crb(c,2)) { goto L_801F0224; } // 801F0218
  c->r[3]=0u+0x00000000u; // 801F021C
  goto L_801F0284; // 801F0220
L_801F0224:;
  c->r[0]=0u+0x00000009u; // 801F0224
  c->r[6]=0u+0x00000000u; // 801F0228
  W16(c->r[3]+0x00000002u,c->r[0]); // 801F022C
  c->r[5]=0u+0x0000001Au; // 801F0230
  c->r[4]=0u+0x00000004u; // 801F0234
  c->r[0]=0u+0x00000006u; // 801F0238
  W16(c->r[3]+0x00000004u,c->r[6]); // 801F023C
  W8(c->r[3]+0x00000008u,c->r[5]); // 801F0240
  W8(c->r[3]+0x00000009u,c->r[4]); // 801F0244
  W8(c->r[3]+0x0000000Au,c->r[0]); // 801F0248
  c->r[0]=R8(c->r[31]+0x00000005u); // 801F024C
  W8(c->r[3]+0x0000000Bu,c->r[0]); // 801F0250
  c->r[0]=R8(c->r[31]+0x00000004u); // 801F0254
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801F0258
  c->r[0]=R8(c->r[31]+0x00000003u); // 801F025C
  W8(c->r[3]+0x0000000Du,c->r[0]); // 801F0260
  c->r[0]=R8(c->r[31]+0x00000002u); // 801F0264
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 801F0268
  c->r[0]=R8(c->r[31]+0x00000001u); // 801F026C
  W8(c->r[3]+0x0000000Fu,c->r[0]); // 801F0270
  c->r[0]=R8(c->r[31]+0x00000000u); // 801F0274
  W8(c->r[3]+0x00000010u,c->r[0]); // 801F0278
  c->lr=0x801F0280u; f_801ED698(c); // 801F027C
  c->r[3]=0u+0x00000001u; // 801F0280
L_801F0284:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F0284
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F0288
  c->lr=c->r[0]; // 801F028C
  c->r[1]=c->r[1]+0x00000010u; // 801F0290
  return; // 801F0294
}

// btsnd_hcic_rmt_features_req
void f_801F0298(Ctx* __restrict c) {
  trace_call(0x801F0298u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F0298
  c->r[0]=c->lr; // 801F029C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F02A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F02A4
  c->r[31]=c->r[3]|c->r[3]; // 801F02A8
  c->r[3]=0u+0x00000002u; // 801F02AC
  c->lr=0x801F02B4u; f_801D9B80(c); // 801F02B0
  cmps(c,0,(int32_t)c->r[3],0); // 801F02B4
  if (!crb(c,2)) { goto L_801F02C4; } // 801F02B8
  c->r[3]=0u+0x00000000u; // 801F02BC
  goto L_801F0300; // 801F02C0
L_801F02C4:;
  c->r[4]=0u+0x00000005u; // 801F02C4
  c->r[0]=0u+0x00000000u; // 801F02C8
  W16(c->r[3]+0x00000002u,c->r[4]); // 801F02CC
  c->r[6]=0u+0x0000001Bu; // 801F02D0
  c->r[5]=0u+0x00000004u; // 801F02D4
  c->r[4]=0u+0x00000002u; // 801F02D8
  W16(c->r[3]+0x00000004u,c->r[0]); // 801F02DC
  c->r[0]=rotl(c->r[31],24)&0x000000FFu; // 801F02E0
  W8(c->r[3]+0x00000008u,c->r[6]); // 801F02E4
  W8(c->r[3]+0x00000009u,c->r[5]); // 801F02E8
  W8(c->r[3]+0x0000000Au,c->r[4]); // 801F02EC
  W8(c->r[3]+0x0000000Bu,c->r[31]); // 801F02F0
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801F02F4
  c->lr=0x801F02FCu; f_801ED698(c); // 801F02F8
  c->r[3]=0u+0x00000001u; // 801F02FC
L_801F0300:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F0300
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F0304
  c->lr=c->r[0]; // 801F0308
  c->r[1]=c->r[1]+0x00000010u; // 801F030C
  return; // 801F0310
}

// btsnd_hcic_rmt_ver_req
void f_801F0314(Ctx* __restrict c) {
  trace_call(0x801F0314u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F0314
  c->r[0]=c->lr; // 801F0318
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F031C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F0320
  c->r[31]=c->r[3]|c->r[3]; // 801F0324
  c->r[3]=0u+0x00000002u; // 801F0328
  c->lr=0x801F0330u; f_801D9B80(c); // 801F032C
  cmps(c,0,(int32_t)c->r[3],0); // 801F0330
  if (!crb(c,2)) { goto L_801F0340; } // 801F0334
  c->r[3]=0u+0x00000000u; // 801F0338
  goto L_801F037C; // 801F033C
L_801F0340:;
  c->r[4]=0u+0x00000005u; // 801F0340
  c->r[0]=0u+0x00000000u; // 801F0344
  W16(c->r[3]+0x00000002u,c->r[4]); // 801F0348
  c->r[6]=0u+0x0000001Du; // 801F034C
  c->r[5]=0u+0x00000004u; // 801F0350
  c->r[4]=0u+0x00000002u; // 801F0354
  W16(c->r[3]+0x00000004u,c->r[0]); // 801F0358
  c->r[0]=rotl(c->r[31],24)&0x000000FFu; // 801F035C
  W8(c->r[3]+0x00000008u,c->r[6]); // 801F0360
  W8(c->r[3]+0x00000009u,c->r[5]); // 801F0364
  W8(c->r[3]+0x0000000Au,c->r[4]); // 801F0368
  W8(c->r[3]+0x0000000Bu,c->r[31]); // 801F036C
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801F0370
  c->lr=0x801F0378u; f_801ED698(c); // 801F0374
  c->r[3]=0u+0x00000001u; // 801F0378
L_801F037C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F037C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F0380
  c->lr=c->r[0]; // 801F0384
  c->r[1]=c->r[1]+0x00000010u; // 801F0388
  return; // 801F038C
}

// btsnd_hcic_read_rmt_clk_offset
void f_801F0390(Ctx* __restrict c) {
  trace_call(0x801F0390u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F0390
  c->r[0]=c->lr; // 801F0394
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F0398
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F039C
  c->r[31]=c->r[3]|c->r[3]; // 801F03A0
  c->r[3]=0u+0x00000002u; // 801F03A4
  c->lr=0x801F03ACu; f_801D9B80(c); // 801F03A8
  cmps(c,0,(int32_t)c->r[3],0); // 801F03AC
  if (!crb(c,2)) { goto L_801F03BC; } // 801F03B0
  c->r[3]=0u+0x00000000u; // 801F03B4
  goto L_801F03F8; // 801F03B8
L_801F03BC:;
  c->r[4]=0u+0x00000005u; // 801F03BC
  c->r[0]=0u+0x00000000u; // 801F03C0
  W16(c->r[3]+0x00000002u,c->r[4]); // 801F03C4
  c->r[6]=0u+0x0000001Fu; // 801F03C8
  c->r[5]=0u+0x00000004u; // 801F03CC
  c->r[4]=0u+0x00000002u; // 801F03D0
  W16(c->r[3]+0x00000004u,c->r[0]); // 801F03D4
  c->r[0]=rotl(c->r[31],24)&0x000000FFu; // 801F03D8
  W8(c->r[3]+0x00000008u,c->r[6]); // 801F03DC
  W8(c->r[3]+0x00000009u,c->r[5]); // 801F03E0
  W8(c->r[3]+0x0000000Au,c->r[4]); // 801F03E4
  W8(c->r[3]+0x0000000Bu,c->r[31]); // 801F03E8
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801F03EC
  c->lr=0x801F03F4u; f_801ED698(c); // 801F03F0
  c->r[3]=0u+0x00000001u; // 801F03F4
L_801F03F8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F03F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F03FC
  c->lr=c->r[0]; // 801F0400
  c->r[1]=c->r[1]+0x00000010u; // 801F0404
  return; // 801F0408
}

// btsnd_hcic_setup_esco_conn
void f_801F040C(Ctx* __restrict c) {
  trace_call(0x801F040Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F040C
  c->r[0]=c->lr; // 801F0410
  W32(c->r[1]+0x00000034u,c->r[0]); // 801F0414
  c->r[11]=c->r[1]+0x00000030u; // 801F0418
  c->lr=0x801F0420u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801F041C
  c->r[25]=c->r[3]|c->r[3]; // 801F0420
  c->r[26]=c->r[4]|c->r[4]; // 801F0424
  c->r[27]=c->r[5]|c->r[5]; // 801F0428
  c->r[28]=c->r[6]|c->r[6]; // 801F042C
  c->r[29]=c->r[7]|c->r[7]; // 801F0430
  c->r[30]=c->r[8]|c->r[8]; // 801F0434
  c->r[31]=c->r[9]|c->r[9]; // 801F0438
  c->r[3]=0u+0x00000002u; // 801F043C
  c->lr=0x801F0444u; f_801D9B80(c); // 801F0440
  cmps(c,0,(int32_t)c->r[3],0); // 801F0444
  if (!crb(c,2)) { goto L_801F0454; } // 801F0448
  c->r[3]=0u+0x00000000u; // 801F044C
  goto L_801F04F0; // 801F0450
L_801F0454:;
  c->r[0]=0u+0x00000014u; // 801F0454
  c->r[12]=sraw(c,c->r[25],8); // 801F0458
  W16(c->r[3]+0x00000002u,c->r[0]); // 801F045C
  c->r[0]=0u+0x00000000u; // 801F0460
  c->r[6]=0u+0x00000028u; // 801F0464
  c->r[4]=0u+0x00000004u; // 801F0468
  W16(c->r[3]+0x00000004u,c->r[0]); // 801F046C
  c->r[0]=0u+0x00000011u; // 801F0470
  c->r[11]=rotl(c->r[26],24)&0x000000FFu; // 801F0474
  c->r[10]=rotl(c->r[26],16)&0x000000FFu; // 801F0478
  W8(c->r[3]+0x00000008u,c->r[6]); // 801F047C
  c->r[9]=rotl(c->r[26],8)&0x000000FFu; // 801F0480
  c->r[8]=rotl(c->r[27],24)&0x000000FFu; // 801F0484
  c->r[7]=rotl(c->r[27],16)&0x000000FFu; // 801F0488
  W8(c->r[3]+0x00000009u,c->r[4]); // 801F048C
  c->r[5]=sraw(c,c->r[28],8); // 801F0490
  c->r[6]=rotl(c->r[27],8)&0x000000FFu; // 801F0494
  c->r[4]=sraw(c,c->r[29],8); // 801F0498
  W8(c->r[3]+0x0000000Au,c->r[0]); // 801F049C
  c->r[0]=rotl(c->r[31],24)&0x000000FFu; // 801F04A0
  W8(c->r[3]+0x0000000Bu,c->r[25]); // 801F04A4
  W8(c->r[3]+0x0000000Cu,c->r[12]); // 801F04A8
  W8(c->r[3]+0x0000000Du,c->r[26]); // 801F04AC
  W8(c->r[3]+0x0000000Eu,c->r[11]); // 801F04B0
  W8(c->r[3]+0x0000000Fu,c->r[10]); // 801F04B4
  W8(c->r[3]+0x00000010u,c->r[9]); // 801F04B8
  W8(c->r[3]+0x00000011u,c->r[27]); // 801F04BC
  W8(c->r[3]+0x00000012u,c->r[8]); // 801F04C0
  W8(c->r[3]+0x00000013u,c->r[7]); // 801F04C4
  W8(c->r[3]+0x00000014u,c->r[6]); // 801F04C8
  W8(c->r[3]+0x00000015u,c->r[28]); // 801F04CC
  W8(c->r[3]+0x00000016u,c->r[5]); // 801F04D0
  W8(c->r[3]+0x00000017u,c->r[29]); // 801F04D4
  W8(c->r[3]+0x00000018u,c->r[4]); // 801F04D8
  W8(c->r[3]+0x00000019u,c->r[30]); // 801F04DC
  W8(c->r[3]+0x0000001Au,c->r[31]); // 801F04E0
  W8(c->r[3]+0x0000001Bu,c->r[0]); // 801F04E4
  c->lr=0x801F04ECu; f_801ED698(c); // 801F04E8
  c->r[3]=0u+0x00000001u; // 801F04EC
L_801F04F0:;
  c->r[11]=c->r[1]+0x00000030u; // 801F04F0
  c->lr=0x801F04F8u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801F04F4
  c->r[0]=R32(c->r[1]+0x00000034u); // 801F04F8
  c->lr=c->r[0]; // 801F04FC
  c->r[1]=c->r[1]+0x00000030u; // 801F0500
  return; // 801F0504
}

// btsnd_hcic_accept_esco_conn
void f_801F0508(Ctx* __restrict c) {
  trace_call(0x801F0508u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F0508
  c->r[0]=c->lr; // 801F050C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801F0510
  c->r[11]=c->r[1]+0x00000030u; // 801F0514
  c->lr=0x801F051Cu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801F0518
  c->r[26]=0u+0x00000018u; // 801F051C
  c->r[12]=0u+0x00000000u; // 801F0520
  c->r[11]=0u+0x00000029u; // 801F0524
  c->r[0]=0u+0x00000004u; // 801F0528
  c->r[25]=0u+0x00000015u; // 801F052C
  W16(c->r[3]+0x00000002u,c->r[26]); // 801F0530
  c->r[26]=rotl(c->r[5],24)&0x000000FFu; // 801F0534
  c->r[27]=rotl(c->r[5],16)&0x000000FFu; // 801F0538
  W16(c->r[3]+0x00000004u,c->r[12]); // 801F053C
  c->r[28]=rotl(c->r[5],8)&0x000000FFu; // 801F0540
  c->r[29]=rotl(c->r[6],24)&0x000000FFu; // 801F0544
  c->r[30]=rotl(c->r[6],16)&0x000000FFu; // 801F0548
  W8(c->r[3]+0x00000008u,c->r[11]); // 801F054C
  c->r[31]=rotl(c->r[6],8)&0x000000FFu; // 801F0550
  c->r[12]=sraw(c,c->r[7],8); // 801F0554
  c->r[11]=rotl(c->r[8],24)&0x000000FFu; // 801F0558
  W8(c->r[3]+0x00000009u,c->r[0]); // 801F055C
  c->r[0]=rotl(c->r[10],24)&0x000000FFu; // 801F0560
  W8(c->r[3]+0x0000000Au,c->r[25]); // 801F0564
  c->r[25]=R8(c->r[4]+0x00000005u); // 801F0568
  W8(c->r[3]+0x0000000Bu,c->r[25]); // 801F056C
  c->r[25]=R8(c->r[4]+0x00000004u); // 801F0570
  W8(c->r[3]+0x0000000Cu,c->r[25]); // 801F0574
  c->r[25]=R8(c->r[4]+0x00000003u); // 801F0578
  W8(c->r[3]+0x0000000Du,c->r[25]); // 801F057C
  c->r[25]=R8(c->r[4]+0x00000002u); // 801F0580
  W8(c->r[3]+0x0000000Eu,c->r[25]); // 801F0584
  c->r[25]=R8(c->r[4]+0x00000001u); // 801F0588
  W8(c->r[3]+0x0000000Fu,c->r[25]); // 801F058C
  c->r[4]=R8(c->r[4]+0x00000000u); // 801F0590
  W8(c->r[3]+0x00000010u,c->r[4]); // 801F0594
  W8(c->r[3]+0x00000011u,c->r[5]); // 801F0598
  W8(c->r[3]+0x00000012u,c->r[26]); // 801F059C
  W8(c->r[3]+0x00000013u,c->r[27]); // 801F05A0
  W8(c->r[3]+0x00000014u,c->r[28]); // 801F05A4
  W8(c->r[3]+0x00000015u,c->r[6]); // 801F05A8
  W8(c->r[3]+0x00000016u,c->r[29]); // 801F05AC
  W8(c->r[3]+0x00000017u,c->r[30]); // 801F05B0
  W8(c->r[3]+0x00000018u,c->r[31]); // 801F05B4
  W8(c->r[3]+0x00000019u,c->r[7]); // 801F05B8
  W8(c->r[3]+0x0000001Au,c->r[12]); // 801F05BC
  W8(c->r[3]+0x0000001Bu,c->r[8]); // 801F05C0
  W8(c->r[3]+0x0000001Cu,c->r[11]); // 801F05C4
  W8(c->r[3]+0x0000001Du,c->r[9]); // 801F05C8
  W8(c->r[3]+0x0000001Eu,c->r[10]); // 801F05CC
  W8(c->r[3]+0x0000001Fu,c->r[0]); // 801F05D0
  c->lr=0x801F05D8u; f_801ED698(c); // 801F05D4
  c->r[11]=c->r[1]+0x00000030u; // 801F05D8
  c->lr=0x801F05E0u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801F05DC
  c->r[0]=R32(c->r[1]+0x00000034u); // 801F05E0
  c->lr=c->r[0]; // 801F05E4
  c->r[1]=c->r[1]+0x00000030u; // 801F05E8
  return; // 801F05EC
}

// btsnd_hcic_reject_esco_conn
void f_801F05F0(Ctx* __restrict c) {
  trace_call(0x801F05F0u);
  c->r[9]=0u+0x0000000Au; // 801F05F0
  c->r[8]=0u+0x00000000u; // 801F05F4
  c->r[7]=0u+0x0000002Au; // 801F05F8
  c->r[6]=0u+0x00000004u; // 801F05FC
  c->r[0]=0u+0x00000007u; // 801F0600
  W16(c->r[3]+0x00000002u,c->r[9]); // 801F0604
  W16(c->r[3]+0x00000004u,c->r[8]); // 801F0608
  W8(c->r[3]+0x00000008u,c->r[7]); // 801F060C
  W8(c->r[3]+0x00000009u,c->r[6]); // 801F0610
  W8(c->r[3]+0x0000000Au,c->r[0]); // 801F0614
  c->r[0]=R8(c->r[4]+0x00000005u); // 801F0618
  W8(c->r[3]+0x0000000Bu,c->r[0]); // 801F061C
  c->r[0]=R8(c->r[4]+0x00000004u); // 801F0620
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801F0624
  c->r[0]=R8(c->r[4]+0x00000003u); // 801F0628
  W8(c->r[3]+0x0000000Du,c->r[0]); // 801F062C
  c->r[0]=R8(c->r[4]+0x00000002u); // 801F0630
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 801F0634
  c->r[0]=R8(c->r[4]+0x00000001u); // 801F0638
  W8(c->r[3]+0x0000000Fu,c->r[0]); // 801F063C
  c->r[0]=R8(c->r[4]+0x00000000u); // 801F0640
  W8(c->r[3]+0x00000010u,c->r[0]); // 801F0644
  W8(c->r[3]+0x00000011u,c->r[5]); // 801F0648
  f_801ED698(c); return; // 801F064C
}

// btsnd_hcic_hold_mode
void f_801F0650(Ctx* __restrict c) {
  trace_call(0x801F0650u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F0650
  c->r[0]=c->lr; // 801F0654
  cmps(c,0,(int32_t)c->r[3],0); // 801F0658
  W32(c->r[1]+0x00000024u,c->r[0]); // 801F065C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801F0660
  c->r[31]=c->r[6]|c->r[6]; // 801F0664
  W32(c->r[1]+0x00000018u,c->r[30]); // 801F0668
  c->r[30]=c->r[5]|c->r[5]; // 801F066C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801F0670
  c->r[29]=c->r[4]|c->r[4]; // 801F0674
  if (!crb(c,2)) { goto L_801F0694; } // 801F0678
  c->r[3]=0u+0x00000002u; // 801F067C
  c->lr=0x801F0684u; f_801D9B80(c); // 801F0680
  cmps(c,0,(int32_t)c->r[3],0); // 801F0684
  if (!crb(c,2)) { goto L_801F0694; } // 801F0688
  c->r[3]=0u+0x00000000u; // 801F068C
  goto L_801F06E8; // 801F0690
L_801F0694:;
  c->r[0]=0u+0x00000009u; // 801F0694
  c->r[5]=sraw(c,c->r[29],8); // 801F0698
  W16(c->r[3]+0x00000002u,c->r[0]); // 801F069C
  c->r[0]=0u+0x00000000u; // 801F06A0
  c->r[8]=0u+0x00000001u; // 801F06A4
  c->r[7]=0u+0x00000008u; // 801F06A8
  W16(c->r[3]+0x00000004u,c->r[0]); // 801F06AC
  c->r[6]=0u+0x00000006u; // 801F06B0
  c->r[4]=sraw(c,c->r[30],8); // 801F06B4
  c->r[0]=rotl(c->r[31],24)&0x000000FFu; // 801F06B8
  W8(c->r[3]+0x00000008u,c->r[8]); // 801F06BC
  W8(c->r[3]+0x00000009u,c->r[7]); // 801F06C0
  W8(c->r[3]+0x0000000Au,c->r[6]); // 801F06C4
  W8(c->r[3]+0x0000000Bu,c->r[29]); // 801F06C8
  W8(c->r[3]+0x0000000Cu,c->r[5]); // 801F06CC
  W8(c->r[3]+0x0000000Du,c->r[30]); // 801F06D0
  W8(c->r[3]+0x0000000Eu,c->r[4]); // 801F06D4
  W8(c->r[3]+0x0000000Fu,c->r[31]); // 801F06D8
  W8(c->r[3]+0x00000010u,c->r[0]); // 801F06DC
  c->lr=0x801F06E4u; f_801ED698(c); // 801F06E0
  c->r[3]=0u+0x00000001u; // 801F06E4
L_801F06E8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801F06E8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801F06EC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801F06F0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801F06F4
  c->lr=c->r[0]; // 801F06F8
  c->r[1]=c->r[1]+0x00000020u; // 801F06FC
  return; // 801F0700
}

// btsnd_hcic_sniff_mode
void f_801F0704(Ctx* __restrict c) {
  trace_call(0x801F0704u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F0704
  c->r[0]=c->lr; // 801F0708
  W32(c->r[1]+0x00000024u,c->r[0]); // 801F070C
  c->r[11]=c->r[1]+0x00000020u; // 801F0710
  c->lr=0x801F0718u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801F0714
  cmps(c,0,(int32_t)c->r[3],0); // 801F0718
  c->r[27]=c->r[4]|c->r[4]; // 801F071C
  c->r[28]=c->r[5]|c->r[5]; // 801F0720
  c->r[29]=c->r[6]|c->r[6]; // 801F0724
  c->r[30]=c->r[7]|c->r[7]; // 801F0728
  c->r[31]=c->r[8]|c->r[8]; // 801F072C
  if (!crb(c,2)) { goto L_801F074C; } // 801F0730
  c->r[3]=0u+0x00000002u; // 801F0734
  c->lr=0x801F073Cu; f_801D9B80(c); // 801F0738
  cmps(c,0,(int32_t)c->r[3],0); // 801F073C
  if (!crb(c,2)) { goto L_801F074C; } // 801F0740
  c->r[3]=0u+0x00000000u; // 801F0744
  goto L_801F07B8; // 801F0748
L_801F074C:;
  c->r[0]=0u+0x0000000Du; // 801F074C
  c->r[7]=sraw(c,c->r[27],8); // 801F0750
  W16(c->r[3]+0x00000002u,c->r[0]); // 801F0754
  c->r[4]=0u+0x00000000u; // 801F0758
  c->r[6]=sraw(c,c->r[28],8); // 801F075C
  c->r[0]=0u+0x00000003u; // 801F0760
  W16(c->r[3]+0x00000004u,c->r[4]); // 801F0764
  c->r[5]=sraw(c,c->r[29],8); // 801F0768
  c->r[9]=0u+0x00000008u; // 801F076C
  c->r[8]=0u+0x0000000Au; // 801F0770
  W8(c->r[3]+0x00000008u,c->r[0]); // 801F0774
  c->r[4]=sraw(c,c->r[30],8); // 801F0778
  c->r[0]=rotl(c->r[31],24)&0x000000FFu; // 801F077C
  W8(c->r[3]+0x00000009u,c->r[9]); // 801F0780
  W8(c->r[3]+0x0000000Au,c->r[8]); // 801F0784
  W8(c->r[3]+0x0000000Bu,c->r[27]); // 801F0788
  W8(c->r[3]+0x0000000Cu,c->r[7]); // 801F078C
  W8(c->r[3]+0x0000000Du,c->r[28]); // 801F0790
  W8(c->r[3]+0x0000000Eu,c->r[6]); // 801F0794
  W8(c->r[3]+0x0000000Fu,c->r[29]); // 801F0798
  W8(c->r[3]+0x00000010u,c->r[5]); // 801F079C
  W8(c->r[3]+0x00000011u,c->r[30]); // 801F07A0
  W8(c->r[3]+0x00000012u,c->r[4]); // 801F07A4
  W8(c->r[3]+0x00000013u,c->r[31]); // 801F07A8
  W8(c->r[3]+0x00000014u,c->r[0]); // 801F07AC
  c->lr=0x801F07B4u; f_801ED698(c); // 801F07B0
  c->r[3]=0u+0x00000001u; // 801F07B4
L_801F07B8:;
  c->r[11]=c->r[1]+0x00000020u; // 801F07B8
  c->lr=0x801F07C0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801F07BC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801F07C0
  c->lr=c->r[0]; // 801F07C4
  c->r[1]=c->r[1]+0x00000020u; // 801F07C8
  return; // 801F07CC
}

// btsnd_hcic_exit_sniff_mode
void f_801F07D0(Ctx* __restrict c) {
  trace_call(0x801F07D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F07D0
  c->r[0]=c->lr; // 801F07D4
  cmps(c,0,(int32_t)c->r[3],0); // 801F07D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F07DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F07E0
  c->r[31]=c->r[4]|c->r[4]; // 801F07E4
  if (!crb(c,2)) { goto L_801F0804; } // 801F07E8
  c->r[3]=0u+0x00000002u; // 801F07EC
  c->lr=0x801F07F4u; f_801D9B80(c); // 801F07F0
  cmps(c,0,(int32_t)c->r[3],0); // 801F07F4
  if (!crb(c,2)) { goto L_801F0804; } // 801F07F8
  c->r[3]=0u+0x00000000u; // 801F07FC
  goto L_801F0840; // 801F0800
L_801F0804:;
  c->r[4]=0u+0x00000005u; // 801F0804
  c->r[0]=0u+0x00000000u; // 801F0808
  W16(c->r[3]+0x00000002u,c->r[4]); // 801F080C
  c->r[6]=0u+0x00000004u; // 801F0810
  c->r[5]=0u+0x00000008u; // 801F0814
  c->r[4]=0u+0x00000002u; // 801F0818
  W16(c->r[3]+0x00000004u,c->r[0]); // 801F081C
  c->r[0]=rotl(c->r[31],24)&0x000000FFu; // 801F0820
  W8(c->r[3]+0x00000008u,c->r[6]); // 801F0824
  W8(c->r[3]+0x00000009u,c->r[5]); // 801F0828
  W8(c->r[3]+0x0000000Au,c->r[4]); // 801F082C
  W8(c->r[3]+0x0000000Bu,c->r[31]); // 801F0830
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801F0834
  c->lr=0x801F083Cu; f_801ED698(c); // 801F0838
  c->r[3]=0u+0x00000001u; // 801F083C
L_801F0840:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F0840
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F0844
  c->lr=c->r[0]; // 801F0848
  c->r[1]=c->r[1]+0x00000010u; // 801F084C
  return; // 801F0850
}

// btsnd_hcic_park_mode
void f_801F0854(Ctx* __restrict c) {
  trace_call(0x801F0854u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F0854
  c->r[0]=c->lr; // 801F0858
  cmps(c,0,(int32_t)c->r[3],0); // 801F085C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801F0860
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801F0864
  c->r[31]=c->r[6]|c->r[6]; // 801F0868
  W32(c->r[1]+0x00000018u,c->r[30]); // 801F086C
  c->r[30]=c->r[5]|c->r[5]; // 801F0870
  W32(c->r[1]+0x00000014u,c->r[29]); // 801F0874
  c->r[29]=c->r[4]|c->r[4]; // 801F0878
  if (!crb(c,2)) { goto L_801F0898; } // 801F087C
  c->r[3]=0u+0x00000002u; // 801F0880
  c->lr=0x801F0888u; f_801D9B80(c); // 801F0884
  cmps(c,0,(int32_t)c->r[3],0); // 801F0888
  if (!crb(c,2)) { goto L_801F0898; } // 801F088C
  c->r[3]=0u+0x00000000u; // 801F0890
  goto L_801F08EC; // 801F0894
L_801F0898:;
  c->r[0]=0u+0x00000009u; // 801F0898
  c->r[5]=sraw(c,c->r[29],8); // 801F089C
  W16(c->r[3]+0x00000002u,c->r[0]); // 801F08A0
  c->r[0]=0u+0x00000000u; // 801F08A4
  c->r[8]=0u+0x00000005u; // 801F08A8
  c->r[7]=0u+0x00000008u; // 801F08AC
  W16(c->r[3]+0x00000004u,c->r[0]); // 801F08B0
  c->r[6]=0u+0x00000006u; // 801F08B4
  c->r[4]=sraw(c,c->r[30],8); // 801F08B8
  c->r[0]=rotl(c->r[31],24)&0x000000FFu; // 801F08BC
  W8(c->r[3]+0x00000008u,c->r[8]); // 801F08C0
  W8(c->r[3]+0x00000009u,c->r[7]); // 801F08C4
  W8(c->r[3]+0x0000000Au,c->r[6]); // 801F08C8
  W8(c->r[3]+0x0000000Bu,c->r[29]); // 801F08CC
  W8(c->r[3]+0x0000000Cu,c->r[5]); // 801F08D0
  W8(c->r[3]+0x0000000Du,c->r[30]); // 801F08D4
  W8(c->r[3]+0x0000000Eu,c->r[4]); // 801F08D8
  W8(c->r[3]+0x0000000Fu,c->r[31]); // 801F08DC
  W8(c->r[3]+0x00000010u,c->r[0]); // 801F08E0
  c->lr=0x801F08E8u; f_801ED698(c); // 801F08E4
  c->r[3]=0u+0x00000001u; // 801F08E8
L_801F08EC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801F08EC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801F08F0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801F08F4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801F08F8
  c->lr=c->r[0]; // 801F08FC
  c->r[1]=c->r[1]+0x00000020u; // 801F0900
  return; // 801F0904
}

// btsnd_hcic_exit_park_mode
void f_801F0908(Ctx* __restrict c) {
  trace_call(0x801F0908u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F0908
  c->r[0]=c->lr; // 801F090C
  cmps(c,0,(int32_t)c->r[3],0); // 801F0910
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F0914
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F0918
  c->r[31]=c->r[4]|c->r[4]; // 801F091C
  if (!crb(c,2)) { goto L_801F093C; } // 801F0920
  c->r[3]=0u+0x00000002u; // 801F0924
  c->lr=0x801F092Cu; f_801D9B80(c); // 801F0928
  cmps(c,0,(int32_t)c->r[3],0); // 801F092C
  if (!crb(c,2)) { goto L_801F093C; } // 801F0930
  c->r[3]=0u+0x00000000u; // 801F0934
  goto L_801F0978; // 801F0938
L_801F093C:;
  c->r[4]=0u+0x00000005u; // 801F093C
  c->r[0]=0u+0x00000000u; // 801F0940
  W16(c->r[3]+0x00000002u,c->r[4]); // 801F0944
  c->r[6]=0u+0x00000006u; // 801F0948
  c->r[5]=0u+0x00000008u; // 801F094C
  c->r[4]=0u+0x00000002u; // 801F0950
  W16(c->r[3]+0x00000004u,c->r[0]); // 801F0954
  c->r[0]=rotl(c->r[31],24)&0x000000FFu; // 801F0958
  W8(c->r[3]+0x00000008u,c->r[6]); // 801F095C
  W8(c->r[3]+0x00000009u,c->r[5]); // 801F0960
  W8(c->r[3]+0x0000000Au,c->r[4]); // 801F0964
  W8(c->r[3]+0x0000000Bu,c->r[31]); // 801F0968
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801F096C
  c->lr=0x801F0974u; f_801ED698(c); // 801F0970
  c->r[3]=0u+0x00000001u; // 801F0974
L_801F0978:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F0978
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F097C
  c->lr=c->r[0]; // 801F0980
  c->r[1]=c->r[1]+0x00000010u; // 801F0984
  return; // 801F0988
}

// btsnd_hcic_switch_role
void f_801F098C(Ctx* __restrict c) {
  trace_call(0x801F098Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F098C
  c->r[0]=c->lr; // 801F0990
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F0994
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F0998
  c->r[31]=c->r[4]|c->r[4]; // 801F099C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801F09A0
  c->r[30]=c->r[3]|c->r[3]; // 801F09A4
  c->r[3]=0u+0x00000002u; // 801F09A8
  c->lr=0x801F09B0u; f_801D9B80(c); // 801F09AC
  cmps(c,0,(int32_t)c->r[3],0); // 801F09B0
  if (!crb(c,2)) { goto L_801F09C0; } // 801F09B4
  c->r[3]=0u+0x00000000u; // 801F09B8
  goto L_801F0A24; // 801F09BC
L_801F09C0:;
  c->r[0]=0u+0x0000000Au; // 801F09C0
  c->r[6]=0u+0x00000000u; // 801F09C4
  W16(c->r[3]+0x00000002u,c->r[0]); // 801F09C8
  c->r[5]=0u+0x0000000Bu; // 801F09CC
  c->r[4]=0u+0x00000008u; // 801F09D0
  c->r[0]=0u+0x00000007u; // 801F09D4
  W16(c->r[3]+0x00000004u,c->r[6]); // 801F09D8
  W8(c->r[3]+0x00000008u,c->r[5]); // 801F09DC
  W8(c->r[3]+0x00000009u,c->r[4]); // 801F09E0
  W8(c->r[3]+0x0000000Au,c->r[0]); // 801F09E4
  c->r[0]=R8(c->r[30]+0x00000005u); // 801F09E8
  W8(c->r[3]+0x0000000Bu,c->r[0]); // 801F09EC
  c->r[0]=R8(c->r[30]+0x00000004u); // 801F09F0
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801F09F4
  c->r[0]=R8(c->r[30]+0x00000003u); // 801F09F8
  W8(c->r[3]+0x0000000Du,c->r[0]); // 801F09FC
  c->r[0]=R8(c->r[30]+0x00000002u); // 801F0A00
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 801F0A04
  c->r[0]=R8(c->r[30]+0x00000001u); // 801F0A08
  W8(c->r[3]+0x0000000Fu,c->r[0]); // 801F0A0C
  c->r[0]=R8(c->r[30]+0x00000000u); // 801F0A10
  W8(c->r[3]+0x00000010u,c->r[0]); // 801F0A14
  W8(c->r[3]+0x00000011u,c->r[31]); // 801F0A18
  c->lr=0x801F0A20u; f_801ED698(c); // 801F0A1C
  c->r[3]=0u+0x00000001u; // 801F0A20
L_801F0A24:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F0A24
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F0A28
  c->r[30]=R32(c->r[1]+0x00000008u); // 801F0A2C
  c->lr=c->r[0]; // 801F0A30
  c->r[1]=c->r[1]+0x00000010u; // 801F0A34
  return; // 801F0A38
}

// btsnd_hcic_write_policy_set
void f_801F0A3C(Ctx* __restrict c) {
  trace_call(0x801F0A3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F0A3C
  c->r[0]=c->lr; // 801F0A40
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F0A44
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F0A48
  c->r[31]=c->r[4]|c->r[4]; // 801F0A4C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801F0A50
  c->r[30]=c->r[3]|c->r[3]; // 801F0A54
  c->r[3]=0u+0x00000002u; // 801F0A58
  c->lr=0x801F0A60u; f_801D9B80(c); // 801F0A5C
  cmps(c,0,(int32_t)c->r[3],0); // 801F0A60
  if (!crb(c,2)) { goto L_801F0A70; } // 801F0A64
  c->r[3]=0u+0x00000000u; // 801F0A68
  goto L_801F0AB8; // 801F0A6C
L_801F0A70:;
  c->r[4]=0u+0x00000007u; // 801F0A70
  c->r[0]=0u+0x00000000u; // 801F0A74
  W16(c->r[3]+0x00000002u,c->r[4]); // 801F0A78
  c->r[7]=0u+0x0000000Du; // 801F0A7C
  c->r[6]=0u+0x00000008u; // 801F0A80
  c->r[5]=0u+0x00000004u; // 801F0A84
  W16(c->r[3]+0x00000004u,c->r[0]); // 801F0A88
  c->r[4]=sraw(c,c->r[30],8); // 801F0A8C
  c->r[0]=rotl(c->r[31],24)&0x000000FFu; // 801F0A90
  W8(c->r[3]+0x00000008u,c->r[7]); // 801F0A94
  W8(c->r[3]+0x00000009u,c->r[6]); // 801F0A98
  W8(c->r[3]+0x0000000Au,c->r[5]); // 801F0A9C
  W8(c->r[3]+0x0000000Bu,c->r[30]); // 801F0AA0
  W8(c->r[3]+0x0000000Cu,c->r[4]); // 801F0AA4
  W8(c->r[3]+0x0000000Du,c->r[31]); // 801F0AA8
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 801F0AAC
  c->lr=0x801F0AB4u; f_801ED698(c); // 801F0AB0
  c->r[3]=0u+0x00000001u; // 801F0AB4
L_801F0AB8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F0AB8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F0ABC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801F0AC0
  c->lr=c->r[0]; // 801F0AC4
  c->r[1]=c->r[1]+0x00000010u; // 801F0AC8
  return; // 801F0ACC
}

// btsnd_hcic_reset
void f_801F0AD0(Ctx* __restrict c) {
  trace_call(0x801F0AD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F0AD0
  c->r[0]=c->lr; // 801F0AD4
  c->r[3]=0u+0x00000002u; // 801F0AD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F0ADC
  c->lr=0x801F0AE4u; f_801D9B80(c); // 801F0AE0
  cmps(c,0,(int32_t)c->r[3],0); // 801F0AE4
  if (!crb(c,2)) { goto L_801F0AF4; } // 801F0AE8
  c->r[3]=0u+0x00000000u; // 801F0AEC
  goto L_801F0B1C; // 801F0AF0
L_801F0AF4:;
  c->r[5]=0u+0x00000003u; // 801F0AF4
  c->r[4]=0u+0x00000000u; // 801F0AF8
  W16(c->r[3]+0x00000002u,c->r[5]); // 801F0AFC
  c->r[0]=0u+0x0000000Cu; // 801F0B00
  W16(c->r[3]+0x00000004u,c->r[4]); // 801F0B04
  W8(c->r[3]+0x00000008u,c->r[5]); // 801F0B08
  W8(c->r[3]+0x00000009u,c->r[0]); // 801F0B0C
  W8(c->r[3]+0x0000000Au,c->r[4]); // 801F0B10
  c->lr=0x801F0B18u; f_801ED698(c); // 801F0B14
  c->r[3]=0u+0x00000001u; // 801F0B18
L_801F0B1C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F0B1C
  c->lr=c->r[0]; // 801F0B20
  c->r[1]=c->r[1]+0x00000010u; // 801F0B24
  return; // 801F0B28
}

// btsnd_hcic_set_event_filter
void f_801F0B2C(Ctx* __restrict c) {
  trace_call(0x801F0B2Cu);
  c->r[0]=0u+0x00000000u; // 801F0B2C
  c->r[9]=0u+0x00000005u; // 801F0B30
  c->r[8]=0u+0x0000000Cu; // 801F0B34
  W16(c->r[3]+0x00000004u,c->r[0]); // 801F0B38
  cmps(c,0,(int32_t)c->r[4],0); // 801F0B3C
  c->r[0]=c->r[6]|c->r[6]; // 801F0B40
  W8(c->r[3]+0x00000008u,c->r[9]); // 801F0B44
  W8(c->r[3]+0x00000009u,c->r[8]); // 801F0B48
  if (crb(c,2)) { goto L_801F0CD0; } // 801F0B4C
  c->r[8]=c->r[7]+0x00000005u; // 801F0B50
  c->r[9]=c->r[7]+0x00000002u; // 801F0B54
  W16(c->r[3]+0x00000002u,c->r[8]); // 801F0B58
  cmpu(c,0,c->r[5],0x00000001u); // 801F0B5C
  c->r[8]=c->r[3]+0x0000000Du; // 801F0B60
  W8(c->r[3]+0x0000000Au,c->r[9]); // 801F0B64
  W8(c->r[3]+0x0000000Bu,c->r[4]); // 801F0B68
  W8(c->r[3]+0x0000000Cu,c->r[5]); // 801F0B6C
  if (!crb(c,2)) { goto L_801F0BB8; } // 801F0B70
  c->r[4]=R8(c->r[6]+0x00000002u); // 801F0B74
  c->r[0]=c->r[7]+0xFFFFFFFAu; // 801F0B78
  c->r[7]=rotl(c->r[0],0)&0x000000FFu; // 801F0B7C
  W8(c->r[8]+0x00000000u,c->r[4]); // 801F0B80
  c->r[0]=c->r[6]+0x00000006u; // 801F0B84
  c->r[4]=R8(c->r[6]+0x00000001u); // 801F0B88
  W8(c->r[8]+0x00000001u,c->r[4]); // 801F0B8C
  c->r[4]=R8(c->r[6]+0x00000000u); // 801F0B90
  W8(c->r[8]+0x00000002u,c->r[4]); // 801F0B94
  c->r[4]=R8(c->r[6]+0x00000005u); // 801F0B98
  W8(c->r[8]+0x00000003u,c->r[4]); // 801F0B9C
  c->r[4]=R8(c->r[6]+0x00000004u); // 801F0BA0
  W8(c->r[8]+0x00000004u,c->r[4]); // 801F0BA4
  c->r[4]=R8(c->r[6]+0x00000003u); // 801F0BA8
  W8(c->r[8]+0x00000005u,c->r[4]); // 801F0BAC
  c->r[8]=c->r[8]+0x00000006u; // 801F0BB0
  goto L_801F0C00; // 801F0BB4
L_801F0BB8:;
  cmpu(c,0,c->r[5],0x00000002u); // 801F0BB8
  if (!crb(c,2)) { goto L_801F0C00; } // 801F0BBC
  c->r[4]=R8(c->r[6]+0x00000005u); // 801F0BC0
  c->r[0]=c->r[7]+0xFFFFFFFAu; // 801F0BC4
  c->r[7]=rotl(c->r[0],0)&0x000000FFu; // 801F0BC8
  W8(c->r[8]+0x00000000u,c->r[4]); // 801F0BCC
  c->r[0]=c->r[6]+0x00000006u; // 801F0BD0
  c->r[4]=R8(c->r[6]+0x00000004u); // 801F0BD4
  W8(c->r[8]+0x00000001u,c->r[4]); // 801F0BD8
  c->r[4]=R8(c->r[6]+0x00000003u); // 801F0BDC
  W8(c->r[8]+0x00000002u,c->r[4]); // 801F0BE0
  c->r[4]=R8(c->r[6]+0x00000002u); // 801F0BE4
  W8(c->r[8]+0x00000003u,c->r[4]); // 801F0BE8
  c->r[4]=R8(c->r[6]+0x00000001u); // 801F0BEC
  W8(c->r[8]+0x00000004u,c->r[4]); // 801F0BF0
  c->r[4]=R8(c->r[6]+0x00000000u); // 801F0BF4
  W8(c->r[8]+0x00000005u,c->r[4]); // 801F0BF8
  c->r[8]=c->r[8]+0x00000006u; // 801F0BFC
L_801F0C00:;
  cmps(c,1,(int32_t)c->r[7],0); // 801F0C00
  if (crb(c,6)) { goto L_801F0CE4; } // 801F0C04
  c->r[9]=0u+0x00000000u; // 801F0C08
  if (!crb(c,5)) { goto L_801F0CE4; } // 801F0C0C
  cmps(c,0,(int32_t)c->r[7],8); // 801F0C10
  c->r[5]=c->r[7]+0xFFFFFFF8u; // 801F0C14
  if (!crb(c,1)) { goto L_801F0CA4; } // 801F0C18
  c->r[6]=0u+0x00000000u; // 801F0C1C
  if (crb(c,4)) { goto L_801F0C38; } // 801F0C20
  c->r[4]=0u+0x80000000u; // 801F0C24
  c->r[4]=c->r[4]+0xFFFFFFFEu; // 801F0C28
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[4]); // 801F0C2C
  if (crb(c,1)) { goto L_801F0C38; } // 801F0C30
  c->r[6]=0u+0x00000001u; // 801F0C34
L_801F0C38:;
  cmps(c,0,(int32_t)c->r[6],0); // 801F0C38
  if (crb(c,2)) { goto L_801F0CA4; } // 801F0C3C
  c->r[4]=c->r[5]+0x00000007u; // 801F0C40
  c->r[4]=rotl(c->r[4],29)&0x1FFFFFFFu; // 801F0C44
  c->ctr=c->r[4]; // 801F0C48
  cmps(c,0,(int32_t)c->r[5],0); // 801F0C4C
  if (!crb(c,1)) { goto L_801F0CA4; } // 801F0C50
L_801F0C54:;
  c->r[4]=R8(c->r[9]+c->r[0]); // 801F0C54
  c->r[5]=c->r[0]+c->r[9]; // 801F0C58
  c->r[9]=c->r[9]+0x00000008u; // 801F0C5C
  W8(c->r[8]+0x00000000u,c->r[4]); // 801F0C60
  c->r[4]=R8(c->r[5]+0x00000001u); // 801F0C64
  W8(c->r[8]+0x00000001u,c->r[4]); // 801F0C68
  c->r[4]=R8(c->r[5]+0x00000002u); // 801F0C6C
  W8(c->r[8]+0x00000002u,c->r[4]); // 801F0C70
  c->r[4]=R8(c->r[5]+0x00000003u); // 801F0C74
  W8(c->r[8]+0x00000003u,c->r[4]); // 801F0C78
  c->r[4]=R8(c->r[5]+0x00000004u); // 801F0C7C
  W8(c->r[8]+0x00000004u,c->r[4]); // 801F0C80
  c->r[4]=R8(c->r[5]+0x00000005u); // 801F0C84
  W8(c->r[8]+0x00000005u,c->r[4]); // 801F0C88
  c->r[4]=R8(c->r[5]+0x00000006u); // 801F0C8C
  W8(c->r[8]+0x00000006u,c->r[4]); // 801F0C90
  c->r[4]=R8(c->r[5]+0x00000007u); // 801F0C94
  W8(c->r[8]+0x00000007u,c->r[4]); // 801F0C98
  c->r[8]=c->r[8]+0x00000008u; // 801F0C9C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801F0C54; } // 801F0CA0
L_801F0CA4:;
  c->r[4]=c->r[7]-c->r[9]; // 801F0CA4
  c->r[5]=c->r[0]+c->r[9]; // 801F0CA8
  c->ctr=c->r[4]; // 801F0CAC
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[7]); // 801F0CB0
  if (!crb(c,0)) { goto L_801F0CE4; } // 801F0CB4
L_801F0CB8:;
  c->r[0]=R8(c->r[5]+0x00000000u); // 801F0CB8
  c->r[5]=c->r[5]+0x00000001u; // 801F0CBC
  W8(c->r[8]+0x00000000u,c->r[0]); // 801F0CC0
  c->r[8]=c->r[8]+0x00000001u; // 801F0CC4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801F0CB8; } // 801F0CC8
  goto L_801F0CE4; // 801F0CCC
L_801F0CD0:;
  c->r[5]=0u+0x00000004u; // 801F0CD0
  c->r[0]=0u+0x00000001u; // 801F0CD4
  W16(c->r[3]+0x00000002u,c->r[5]); // 801F0CD8
  W8(c->r[3]+0x0000000Au,c->r[0]); // 801F0CDC
  W8(c->r[3]+0x0000000Bu,c->r[4]); // 801F0CE0
L_801F0CE4:;
  f_801ED698(c); return; // 801F0CE4
}

// btsnd_hcic_write_pin_type
void f_801F0CE8(Ctx* __restrict c) {
  trace_call(0x801F0CE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F0CE8
  c->r[0]=c->lr; // 801F0CEC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F0CF0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F0CF4
  c->r[31]=c->r[3]|c->r[3]; // 801F0CF8
  c->r[3]=0u+0x00000002u; // 801F0CFC
  c->lr=0x801F0D04u; f_801D9B80(c); // 801F0D00
  cmps(c,0,(int32_t)c->r[3],0); // 801F0D04
  if (!crb(c,2)) { goto L_801F0D14; } // 801F0D08
  c->r[3]=0u+0x00000000u; // 801F0D0C
  goto L_801F0D48; // 801F0D10
L_801F0D14:;
  c->r[0]=0u+0x00000004u; // 801F0D14
  c->r[6]=0u+0x00000000u; // 801F0D18
  W16(c->r[3]+0x00000002u,c->r[0]); // 801F0D1C
  c->r[5]=0u+0x0000000Au; // 801F0D20
  c->r[4]=0u+0x0000000Cu; // 801F0D24
  c->r[0]=0u+0x00000001u; // 801F0D28
  W16(c->r[3]+0x00000004u,c->r[6]); // 801F0D2C
  W8(c->r[3]+0x00000008u,c->r[5]); // 801F0D30
  W8(c->r[3]+0x00000009u,c->r[4]); // 801F0D34
  W8(c->r[3]+0x0000000Au,c->r[0]); // 801F0D38
  W8(c->r[3]+0x0000000Bu,c->r[31]); // 801F0D3C
  c->lr=0x801F0D44u; f_801ED698(c); // 801F0D40
  c->r[3]=0u+0x00000001u; // 801F0D44
L_801F0D48:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F0D48
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F0D4C
  c->lr=c->r[0]; // 801F0D50
  c->r[1]=c->r[1]+0x00000010u; // 801F0D54
  return; // 801F0D58
}

// btsnd_hcic_read_stored_key
void f_801F0D5C(Ctx* __restrict c) {
  trace_call(0x801F0D5Cu);
  c->r[9]=0u+0x0000000Au; // 801F0D5C
  c->r[8]=0u+0x00000000u; // 801F0D60
  c->r[7]=0u+0x0000000Du; // 801F0D64
  c->r[6]=0u+0x0000000Cu; // 801F0D68
  c->r[0]=0u+0x00000007u; // 801F0D6C
  W16(c->r[3]+0x00000002u,c->r[9]); // 801F0D70
  W16(c->r[3]+0x00000004u,c->r[8]); // 801F0D74
  W8(c->r[3]+0x00000008u,c->r[7]); // 801F0D78
  W8(c->r[3]+0x00000009u,c->r[6]); // 801F0D7C
  W8(c->r[3]+0x0000000Au,c->r[0]); // 801F0D80
  c->r[0]=R8(c->r[4]+0x00000005u); // 801F0D84
  W8(c->r[3]+0x0000000Bu,c->r[0]); // 801F0D88
  c->r[0]=R8(c->r[4]+0x00000004u); // 801F0D8C
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801F0D90
  c->r[0]=R8(c->r[4]+0x00000003u); // 801F0D94
  W8(c->r[3]+0x0000000Du,c->r[0]); // 801F0D98
  c->r[0]=R8(c->r[4]+0x00000002u); // 801F0D9C
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 801F0DA0
  c->r[0]=R8(c->r[4]+0x00000001u); // 801F0DA4
  W8(c->r[3]+0x0000000Fu,c->r[0]); // 801F0DA8
  c->r[0]=R8(c->r[4]+0x00000000u); // 801F0DAC
  W8(c->r[3]+0x00000010u,c->r[0]); // 801F0DB0
  W8(c->r[3]+0x00000011u,c->r[5]); // 801F0DB4
  f_801ED698(c); return; // 801F0DB8
}

// btsnd_hcic_write_stored_key
void f_801F0DBC(Ctx* __restrict c) {
  trace_call(0x801F0DBCu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F0DBC
  c->r[0]=c->lr; // 801F0DC0
  W32(c->r[1]+0x00000034u,c->r[0]); // 801F0DC4
  c->r[11]=c->r[1]+0x00000030u; // 801F0DC8
  c->lr=0x801F0DD0u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801F0DCC
  c->r[7]=(uint32_t)((int32_t)c->r[4]*(int32_t)22); // 801F0DD0
  c->r[0]=0u+0x00000000u; // 801F0DD4
  c->r[9]=0u+0x00000011u; // 801F0DD8
  W16(c->r[3]+0x00000004u,c->r[0]); // 801F0DDC
  c->r[8]=0u+0x0000000Cu; // 801F0DE0
  c->r[10]=c->r[7]+0x00000004u; // 801F0DE4
  c->r[7]=rotl(c->r[10],0)&0x0000FFFFu; // 801F0DE8
  cmpu(c,0,c->r[4],0x0000000Bu); // 801F0DEC
  c->r[0]=c->r[7]+0xFFFFFFFDu; // 801F0DF0
  W16(c->r[3]+0x00000002u,c->r[10]); // 801F0DF4
  W8(c->r[3]+0x00000008u,c->r[9]); // 801F0DF8
  W8(c->r[3]+0x00000009u,c->r[8]); // 801F0DFC
  W8(c->r[3]+0x0000000Au,c->r[0]); // 801F0E00
  if (!crb(c,1)) { goto L_801F0E0C; } // 801F0E04
  c->r[4]=0u+0x0000000Bu; // 801F0E08
L_801F0E0C:;
  W8(c->r[3]+0x0000000Bu,c->r[4]); // 801F0E0C
  c->r[7]=c->r[3]+0x0000000Cu; // 801F0E10
  c->ctr=c->r[4]; // 801F0E14
  cmps(c,0,(int32_t)c->r[4],0); // 801F0E18
  if (!crb(c,1)) { goto L_801F0F60; } // 801F0E1C
L_801F0E20:;
  c->r[0]=R8(c->r[5]+0x00000005u); // 801F0E20
  c->r[22]=0u+0x00000000u; // 801F0E24
  c->r[23]=addc(c,~c->r[22],0x0000000Fu,1); // 801F0E28
  c->r[24]=0u+0x00000001u; // 801F0E2C
  W8(c->r[7]+0x00000000u,c->r[0]); // 801F0E30
  c->r[25]=addc(c,~c->r[24],0x0000000Fu,1); // 801F0E34
  c->r[26]=0u+0x00000002u; // 801F0E38
  c->r[28]=0u+0x00000003u; // 801F0E3C
  c->r[0]=R8(c->r[5]+0x00000004u); // 801F0E40
  c->r[27]=addc(c,~c->r[26],0x0000000Fu,1); // 801F0E44
  c->r[29]=addc(c,~c->r[28],0x0000000Fu,1); // 801F0E48
  c->r[30]=0u+0x00000004u; // 801F0E4C
  W8(c->r[7]+0x00000001u,c->r[0]); // 801F0E50
  c->r[31]=addc(c,~c->r[30],0x0000000Fu,1); // 801F0E54
  c->r[12]=0u+0x00000005u; // 801F0E58
  c->r[10]=0u+0x00000006u; // 801F0E5C
  c->r[0]=R8(c->r[5]+0x00000003u); // 801F0E60
  c->r[11]=addc(c,~c->r[12],0x0000000Fu,1); // 801F0E64
  c->r[9]=addc(c,~c->r[10],0x0000000Fu,1); // 801F0E68
  c->r[8]=0u+0x00000007u; // 801F0E6C
  W8(c->r[7]+0x00000002u,c->r[0]); // 801F0E70
  c->r[4]=addc(c,~c->r[8],0x0000000Fu,1); // 801F0E74
  c->r[22]=0u+0x00000008u; // 801F0E78
  c->r[24]=0u+0x00000009u; // 801F0E7C
  c->r[0]=R8(c->r[5]+0x00000002u); // 801F0E80
  c->r[26]=0u+0x0000000Au; // 801F0E84
  c->r[28]=0u+0x0000000Bu; // 801F0E88
  c->r[30]=0u+0x0000000Cu; // 801F0E8C
  W8(c->r[7]+0x00000003u,c->r[0]); // 801F0E90
  c->r[12]=0u+0x0000000Du; // 801F0E94
  c->r[10]=0u+0x0000000Eu; // 801F0E98
  c->r[8]=0u+0x0000000Fu; // 801F0E9C
  c->r[0]=R8(c->r[5]+0x00000001u); // 801F0EA0
  W8(c->r[7]+0x00000004u,c->r[0]); // 801F0EA4
  c->r[0]=R8(c->r[5]+0x00000000u); // 801F0EA8
  c->r[5]=c->r[5]+0x00000006u; // 801F0EAC
  W8(c->r[7]+0x00000005u,c->r[0]); // 801F0EB0
  c->r[0]=R8(c->r[6]+c->r[23]); // 801F0EB4
  c->r[23]=addc(c,~c->r[22],0x0000000Fu,1); // 801F0EB8
  W8(c->r[7]+0x00000006u,c->r[0]); // 801F0EBC
  c->r[0]=R8(c->r[6]+c->r[25]); // 801F0EC0
  c->r[25]=addc(c,~c->r[24],0x0000000Fu,1); // 801F0EC4
  W8(c->r[7]+0x00000007u,c->r[0]); // 801F0EC8
  c->r[0]=R8(c->r[6]+c->r[27]); // 801F0ECC
  c->r[27]=addc(c,~c->r[26],0x0000000Fu,1); // 801F0ED0
  W8(c->r[7]+0x00000008u,c->r[0]); // 801F0ED4
  c->r[0]=R8(c->r[6]+c->r[29]); // 801F0ED8
  c->r[29]=addc(c,~c->r[28],0x0000000Fu,1); // 801F0EDC
  W8(c->r[7]+0x00000009u,c->r[0]); // 801F0EE0
  c->r[0]=R8(c->r[6]+c->r[31]); // 801F0EE4
  c->r[31]=addc(c,~c->r[30],0x0000000Fu,1); // 801F0EE8
  W8(c->r[7]+0x0000000Au,c->r[0]); // 801F0EEC
  c->r[0]=R8(c->r[6]+c->r[11]); // 801F0EF0
  c->r[11]=addc(c,~c->r[12],0x0000000Fu,1); // 801F0EF4
  W8(c->r[7]+0x0000000Bu,c->r[0]); // 801F0EF8
  c->r[0]=R8(c->r[6]+c->r[9]); // 801F0EFC
  c->r[9]=addc(c,~c->r[10],0x0000000Fu,1); // 801F0F00
  W8(c->r[7]+0x0000000Cu,c->r[0]); // 801F0F04
  c->r[0]=R8(c->r[6]+c->r[4]); // 801F0F08
  c->r[4]=addc(c,~c->r[8],0x0000000Fu,1); // 801F0F0C
  W8(c->r[7]+0x0000000Du,c->r[0]); // 801F0F10
  c->r[0]=R8(c->r[6]+c->r[23]); // 801F0F14
  W8(c->r[7]+0x0000000Eu,c->r[0]); // 801F0F18
  c->r[0]=R8(c->r[6]+c->r[25]); // 801F0F1C
  W8(c->r[7]+0x0000000Fu,c->r[0]); // 801F0F20
  c->r[0]=R8(c->r[6]+c->r[27]); // 801F0F24
  W8(c->r[7]+0x00000010u,c->r[0]); // 801F0F28
  c->r[0]=R8(c->r[6]+c->r[29]); // 801F0F2C
  W8(c->r[7]+0x00000011u,c->r[0]); // 801F0F30
  c->r[0]=R8(c->r[6]+c->r[31]); // 801F0F34
  W8(c->r[7]+0x00000012u,c->r[0]); // 801F0F38
  c->r[0]=R8(c->r[6]+c->r[11]); // 801F0F3C
  W8(c->r[7]+0x00000013u,c->r[0]); // 801F0F40
  c->r[0]=R8(c->r[6]+c->r[9]); // 801F0F44
  W8(c->r[7]+0x00000014u,c->r[0]); // 801F0F48
  c->r[0]=R8(c->r[6]+c->r[4]); // 801F0F4C
  c->r[6]=c->r[6]+0x00000010u; // 801F0F50
  W8(c->r[7]+0x00000015u,c->r[0]); // 801F0F54
  c->r[7]=c->r[7]+0x00000016u; // 801F0F58
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801F0E20; } // 801F0F5C
L_801F0F60:;
  c->lr=0x801F0F64u; f_801ED698(c); // 801F0F60
  c->r[11]=c->r[1]+0x00000030u; // 801F0F64
  c->lr=0x801F0F6Cu; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801F0F68
  c->r[0]=R32(c->r[1]+0x00000034u); // 801F0F6C
  c->lr=c->r[0]; // 801F0F70
  c->r[1]=c->r[1]+0x00000030u; // 801F0F74
  return; // 801F0F78
}

// btsnd_hcic_delete_stored_key
void f_801F0F7C(Ctx* __restrict c) {
  trace_call(0x801F0F7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F0F7C
  c->r[0]=c->lr; // 801F0F80
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F0F84
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F0F88
  c->r[31]=c->r[4]|c->r[4]; // 801F0F8C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801F0F90
  c->r[30]=c->r[3]|c->r[3]; // 801F0F94
  c->r[3]=0u+0x00000002u; // 801F0F98
  c->lr=0x801F0FA0u; f_801D9B80(c); // 801F0F9C
  cmps(c,0,(int32_t)c->r[3],0); // 801F0FA0
  if (!crb(c,2)) { goto L_801F0FB0; } // 801F0FA4
  c->r[3]=0u+0x00000000u; // 801F0FA8
  goto L_801F1014; // 801F0FAC
L_801F0FB0:;
  c->r[0]=0u+0x0000000Au; // 801F0FB0
  c->r[6]=0u+0x00000000u; // 801F0FB4
  W16(c->r[3]+0x00000002u,c->r[0]); // 801F0FB8
  c->r[5]=0u+0x00000012u; // 801F0FBC
  c->r[4]=0u+0x0000000Cu; // 801F0FC0
  c->r[0]=0u+0x00000007u; // 801F0FC4
  W16(c->r[3]+0x00000004u,c->r[6]); // 801F0FC8
  W8(c->r[3]+0x00000008u,c->r[5]); // 801F0FCC
  W8(c->r[3]+0x00000009u,c->r[4]); // 801F0FD0
  W8(c->r[3]+0x0000000Au,c->r[0]); // 801F0FD4
  c->r[0]=R8(c->r[30]+0x00000005u); // 801F0FD8
  W8(c->r[3]+0x0000000Bu,c->r[0]); // 801F0FDC
  c->r[0]=R8(c->r[30]+0x00000004u); // 801F0FE0
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801F0FE4
  c->r[0]=R8(c->r[30]+0x00000003u); // 801F0FE8
  W8(c->r[3]+0x0000000Du,c->r[0]); // 801F0FEC
  c->r[0]=R8(c->r[30]+0x00000002u); // 801F0FF0
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 801F0FF4
  c->r[0]=R8(c->r[30]+0x00000001u); // 801F0FF8
  W8(c->r[3]+0x0000000Fu,c->r[0]); // 801F0FFC
  c->r[0]=R8(c->r[30]+0x00000000u); // 801F1000
  W8(c->r[3]+0x00000010u,c->r[0]); // 801F1004
  W8(c->r[3]+0x00000011u,c->r[31]); // 801F1008
  c->lr=0x801F1010u; f_801ED698(c); // 801F100C
  c->r[3]=0u+0x00000001u; // 801F1010
L_801F1014:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F1014
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F1018
  c->r[30]=R32(c->r[1]+0x00000008u); // 801F101C
  c->lr=c->r[0]; // 801F1020
  c->r[1]=c->r[1]+0x00000010u; // 801F1024
  return; // 801F1028
}

// btsnd_hcic_change_name
void f_801F102C(Ctx* __restrict c) {
  trace_call(0x801F102Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F102C
  c->r[0]=c->lr; // 801F1030
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F1034
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F1038
  c->r[31]=c->r[3]|c->r[3]; // 801F103C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801F1040
  c->r[30]=c->r[4]|c->r[4]; // 801F1044
  c->r[3]=c->r[30]|c->r[30]; // 801F1048
  c->lr=0x801F1050u; f_80206CB4(c); // 801F104C
  c->r[0]=c->r[3]+0x00000001u; // 801F1050
  c->r[6]=0u+0x000000FBu; // 801F1054
  c->r[7]=rotl(c->r[0],0)&0x0000FFFFu; // 801F1058
  c->r[5]=0u+0x00000000u; // 801F105C
  c->r[4]=0u+0x00000013u; // 801F1060
  c->r[3]=0u+0x0000000Cu; // 801F1064
  c->r[0]=0u+0x000000F8u; // 801F1068
  W16(c->r[31]+0x00000002u,c->r[6]); // 801F106C
  cmps(c,1,(int32_t)c->r[7],0); // 801F1070
  c->r[6]=c->r[31]+0x0000000Bu; // 801F1074
  W16(c->r[31]+0x00000004u,c->r[5]); // 801F1078
  c->r[8]=0u+0x00000000u; // 801F107C
  W8(c->r[31]+0x00000008u,c->r[4]); // 801F1080
  W8(c->r[31]+0x00000009u,c->r[3]); // 801F1084
  W8(c->r[31]+0x0000000Au,c->r[0]); // 801F1088
  if (!crb(c,5)) { goto L_801F114C; } // 801F108C
  cmps(c,0,(int32_t)c->r[7],8); // 801F1090
  c->r[4]=c->r[7]+0xFFFFFFF8u; // 801F1094
  if (!crb(c,1)) { goto L_801F1124; } // 801F1098
  c->r[5]=0u+0x00000000u; // 801F109C
  if (crb(c,4)) { goto L_801F10B8; } // 801F10A0
  c->r[3]=0u+0x80000000u; // 801F10A4
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 801F10A8
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 801F10AC
  if (crb(c,1)) { goto L_801F10B8; } // 801F10B0
  c->r[5]=0u+0x00000001u; // 801F10B4
L_801F10B8:;
  cmps(c,0,(int32_t)c->r[5],0); // 801F10B8
  if (crb(c,2)) { goto L_801F1124; } // 801F10BC
  c->r[0]=c->r[4]+0x00000007u; // 801F10C0
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 801F10C4
  c->ctr=c->r[0]; // 801F10C8
  cmps(c,0,(int32_t)c->r[4],0); // 801F10CC
  if (!crb(c,1)) { goto L_801F1124; } // 801F10D0
L_801F10D4:;
  c->r[0]=R8(c->r[30]+c->r[8]); // 801F10D4
  c->r[3]=c->r[30]+c->r[8]; // 801F10D8
  c->r[8]=c->r[8]+0x00000008u; // 801F10DC
  W8(c->r[6]+0x00000000u,c->r[0]); // 801F10E0
  c->r[0]=R8(c->r[3]+0x00000001u); // 801F10E4
  W8(c->r[6]+0x00000001u,c->r[0]); // 801F10E8
  c->r[0]=R8(c->r[3]+0x00000002u); // 801F10EC
  W8(c->r[6]+0x00000002u,c->r[0]); // 801F10F0
  c->r[0]=R8(c->r[3]+0x00000003u); // 801F10F4
  W8(c->r[6]+0x00000003u,c->r[0]); // 801F10F8
  c->r[0]=R8(c->r[3]+0x00000004u); // 801F10FC
  W8(c->r[6]+0x00000004u,c->r[0]); // 801F1100
  c->r[0]=R8(c->r[3]+0x00000005u); // 801F1104
  W8(c->r[6]+0x00000005u,c->r[0]); // 801F1108
  c->r[0]=R8(c->r[3]+0x00000006u); // 801F110C
  W8(c->r[6]+0x00000006u,c->r[0]); // 801F1110
  c->r[0]=R8(c->r[3]+0x00000007u); // 801F1114
  W8(c->r[6]+0x00000007u,c->r[0]); // 801F1118
  c->r[6]=c->r[6]+0x00000008u; // 801F111C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801F10D4; } // 801F1120
L_801F1124:;
  c->r[0]=c->r[7]-c->r[8]; // 801F1124
  c->r[3]=c->r[30]+c->r[8]; // 801F1128
  c->ctr=c->r[0]; // 801F112C
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[7]); // 801F1130
  if (!crb(c,0)) { goto L_801F114C; } // 801F1134
L_801F1138:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 801F1138
  c->r[3]=c->r[3]+0x00000001u; // 801F113C
  W8(c->r[6]+0x00000000u,c->r[0]); // 801F1140
  c->r[6]=c->r[6]+0x00000001u; // 801F1144
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801F1138; } // 801F1148
L_801F114C:;
  c->r[3]=c->r[31]|c->r[31]; // 801F114C
  c->lr=0x801F1154u; f_801ED698(c); // 801F1150
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F1154
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F1158
  c->r[30]=R32(c->r[1]+0x00000008u); // 801F115C
  c->lr=c->r[0]; // 801F1160
  c->r[1]=c->r[1]+0x00000010u; // 801F1164
  return; // 801F1168
}

// btsnd_hcic_write_page_tout
void f_801F116C(Ctx* __restrict c) {
  trace_call(0x801F116Cu);
  c->r[0]=rotl(c->r[4],24)&0x000000FFu; // 801F116C
  c->r[9]=0u+0x00000005u; // 801F1170
  c->r[8]=0u+0x00000000u; // 801F1174
  c->r[7]=0u+0x00000018u; // 801F1178
  c->r[6]=0u+0x0000000Cu; // 801F117C
  c->r[5]=0u+0x00000002u; // 801F1180
  W16(c->r[3]+0x00000002u,c->r[9]); // 801F1184
  W16(c->r[3]+0x00000004u,c->r[8]); // 801F1188
  W8(c->r[3]+0x00000008u,c->r[7]); // 801F118C
  W8(c->r[3]+0x00000009u,c->r[6]); // 801F1190
  W8(c->r[3]+0x0000000Au,c->r[5]); // 801F1194
  W8(c->r[3]+0x0000000Bu,c->r[4]); // 801F1198
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801F119C
  f_801ED698(c); return; // 801F11A0
}

// btsnd_hcic_write_scan_enable
void f_801F11A4(Ctx* __restrict c) {
  trace_call(0x801F11A4u);
  c->r[8]=0u+0x00000004u; // 801F11A4
  c->r[7]=0u+0x00000000u; // 801F11A8
  c->r[6]=0u+0x0000001Au; // 801F11AC
  c->r[5]=0u+0x0000000Cu; // 801F11B0
  c->r[0]=0u+0x00000001u; // 801F11B4
  W16(c->r[3]+0x00000002u,c->r[8]); // 801F11B8
  W16(c->r[3]+0x00000004u,c->r[7]); // 801F11BC
  W8(c->r[3]+0x00000008u,c->r[6]); // 801F11C0
  W8(c->r[3]+0x00000009u,c->r[5]); // 801F11C4
  W8(c->r[3]+0x0000000Au,c->r[0]); // 801F11C8
  W8(c->r[3]+0x0000000Bu,c->r[4]); // 801F11CC
  f_801ED698(c); return; // 801F11D0
}

// btsnd_hcic_write_pagescan_cfg
void f_801F11D4(Ctx* __restrict c) {
  trace_call(0x801F11D4u);
  c->r[6]=rotl(c->r[4],24)&0x000000FFu; // 801F11D4
  c->r[0]=rotl(c->r[5],24)&0x000000FFu; // 801F11D8
  c->r[11]=0u+0x00000007u; // 801F11DC
  c->r[10]=0u+0x00000000u; // 801F11E0
  c->r[9]=0u+0x0000001Cu; // 801F11E4
  c->r[8]=0u+0x0000000Cu; // 801F11E8
  c->r[7]=0u+0x00000004u; // 801F11EC
  W16(c->r[3]+0x00000002u,c->r[11]); // 801F11F0
  W16(c->r[3]+0x00000004u,c->r[10]); // 801F11F4
  W8(c->r[3]+0x00000008u,c->r[9]); // 801F11F8
  W8(c->r[3]+0x00000009u,c->r[8]); // 801F11FC
  W8(c->r[3]+0x0000000Au,c->r[7]); // 801F1200
  W8(c->r[3]+0x0000000Bu,c->r[4]); // 801F1204
  W8(c->r[3]+0x0000000Cu,c->r[6]); // 801F1208
  W8(c->r[3]+0x0000000Du,c->r[5]); // 801F120C
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 801F1210
  f_801ED698(c); return; // 801F1214
}

// btsnd_hcic_write_inqscan_cfg
void f_801F1218(Ctx* __restrict c) {
  trace_call(0x801F1218u);
  c->r[6]=rotl(c->r[4],24)&0x000000FFu; // 801F1218
  c->r[0]=rotl(c->r[5],24)&0x000000FFu; // 801F121C
  c->r[11]=0u+0x00000007u; // 801F1220
  c->r[10]=0u+0x00000000u; // 801F1224
  c->r[9]=0u+0x0000001Eu; // 801F1228
  c->r[8]=0u+0x0000000Cu; // 801F122C
  c->r[7]=0u+0x00000004u; // 801F1230
  W16(c->r[3]+0x00000002u,c->r[11]); // 801F1234
  W16(c->r[3]+0x00000004u,c->r[10]); // 801F1238
  W8(c->r[3]+0x00000008u,c->r[9]); // 801F123C
  W8(c->r[3]+0x00000009u,c->r[8]); // 801F1240
  W8(c->r[3]+0x0000000Au,c->r[7]); // 801F1244
  W8(c->r[3]+0x0000000Bu,c->r[4]); // 801F1248
  W8(c->r[3]+0x0000000Cu,c->r[6]); // 801F124C
  W8(c->r[3]+0x0000000Du,c->r[5]); // 801F1250
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 801F1254
  f_801ED698(c); return; // 801F1258
}

// btsnd_hcic_write_auth_enable
void f_801F125C(Ctx* __restrict c) {
  trace_call(0x801F125Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F125C
  c->r[0]=c->lr; // 801F1260
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F1264
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F1268
  c->r[31]=c->r[3]|c->r[3]; // 801F126C
  c->r[3]=0u+0x00000002u; // 801F1270
  c->lr=0x801F1278u; f_801D9B80(c); // 801F1274
  cmps(c,0,(int32_t)c->r[3],0); // 801F1278
  if (!crb(c,2)) { goto L_801F1288; } // 801F127C
  c->r[3]=0u+0x00000000u; // 801F1280
  goto L_801F12BC; // 801F1284
L_801F1288:;
  c->r[0]=0u+0x00000004u; // 801F1288
  c->r[6]=0u+0x00000000u; // 801F128C
  W16(c->r[3]+0x00000002u,c->r[0]); // 801F1290
  c->r[5]=0u+0x00000020u; // 801F1294
  c->r[4]=0u+0x0000000Cu; // 801F1298
  c->r[0]=0u+0x00000001u; // 801F129C
  W16(c->r[3]+0x00000004u,c->r[6]); // 801F12A0
  W8(c->r[3]+0x00000008u,c->r[5]); // 801F12A4
  W8(c->r[3]+0x00000009u,c->r[4]); // 801F12A8
  W8(c->r[3]+0x0000000Au,c->r[0]); // 801F12AC
  W8(c->r[3]+0x0000000Bu,c->r[31]); // 801F12B0
  c->lr=0x801F12B8u; f_801ED698(c); // 801F12B4
  c->r[3]=0u+0x00000001u; // 801F12B8
L_801F12BC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F12BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F12C0
  c->lr=c->r[0]; // 801F12C4
  c->r[1]=c->r[1]+0x00000010u; // 801F12C8
  return; // 801F12CC
}

// btsnd_hcic_write_encr_mode
void f_801F12D0(Ctx* __restrict c) {
  trace_call(0x801F12D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F12D0
  c->r[0]=c->lr; // 801F12D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F12D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F12DC
  c->r[31]=c->r[3]|c->r[3]; // 801F12E0
  c->r[3]=0u+0x00000002u; // 801F12E4
  c->lr=0x801F12ECu; f_801D9B80(c); // 801F12E8
  cmps(c,0,(int32_t)c->r[3],0); // 801F12EC
  if (!crb(c,2)) { goto L_801F12FC; } // 801F12F0
  c->r[3]=0u+0x00000000u; // 801F12F4
  goto L_801F1330; // 801F12F8
L_801F12FC:;
  c->r[0]=0u+0x00000004u; // 801F12FC
  c->r[6]=0u+0x00000000u; // 801F1300
  W16(c->r[3]+0x00000002u,c->r[0]); // 801F1304
  c->r[5]=0u+0x00000022u; // 801F1308
  c->r[4]=0u+0x0000000Cu; // 801F130C
  c->r[0]=0u+0x00000001u; // 801F1310
  W16(c->r[3]+0x00000004u,c->r[6]); // 801F1314
  W8(c->r[3]+0x00000008u,c->r[5]); // 801F1318
  W8(c->r[3]+0x00000009u,c->r[4]); // 801F131C
  W8(c->r[3]+0x0000000Au,c->r[0]); // 801F1320
  W8(c->r[3]+0x0000000Bu,c->r[31]); // 801F1324
  c->lr=0x801F132Cu; f_801ED698(c); // 801F1328
  c->r[3]=0u+0x00000001u; // 801F132C
L_801F1330:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F1330
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F1334
  c->lr=c->r[0]; // 801F1338
  c->r[1]=c->r[1]+0x00000010u; // 801F133C
  return; // 801F1340
}

// btsnd_hcic_write_dev_class
void f_801F1344(Ctx* __restrict c) {
  trace_call(0x801F1344u);
  c->r[8]=0u+0x00000006u; // 801F1344
  c->r[7]=0u+0x00000000u; // 801F1348
  c->r[6]=0u+0x00000024u; // 801F134C
  c->r[5]=0u+0x0000000Cu; // 801F1350
  c->r[0]=0u+0x00000003u; // 801F1354
  W16(c->r[3]+0x00000002u,c->r[8]); // 801F1358
  W16(c->r[3]+0x00000004u,c->r[7]); // 801F135C
  W8(c->r[3]+0x00000008u,c->r[6]); // 801F1360
  W8(c->r[3]+0x00000009u,c->r[5]); // 801F1364
  W8(c->r[3]+0x0000000Au,c->r[0]); // 801F1368
  c->r[0]=R8(c->r[4]+0x00000002u); // 801F136C
  W8(c->r[3]+0x0000000Bu,c->r[0]); // 801F1370
  c->r[0]=R8(c->r[4]+0x00000001u); // 801F1374
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801F1378
  c->r[0]=R8(c->r[4]+0x00000000u); // 801F137C
  W8(c->r[3]+0x0000000Du,c->r[0]); // 801F1380
  f_801ED698(c); return; // 801F1384
}

// btsnd_hcic_write_auto_flush_tout
void f_801F1388(Ctx* __restrict c) {
  trace_call(0x801F1388u);
  c->r[6]=rotl(c->r[4],24)&0x000000FFu; // 801F1388
  c->r[0]=rotl(c->r[5],24)&0x000000FFu; // 801F138C
  c->r[11]=0u+0x00000007u; // 801F1390
  c->r[10]=0u+0x00000000u; // 801F1394
  c->r[9]=0u+0x00000028u; // 801F1398
  c->r[8]=0u+0x0000000Cu; // 801F139C
  c->r[7]=0u+0x00000004u; // 801F13A0
  W16(c->r[3]+0x00000002u,c->r[11]); // 801F13A4
  W16(c->r[3]+0x00000004u,c->r[10]); // 801F13A8
  W8(c->r[3]+0x00000008u,c->r[9]); // 801F13AC
  W8(c->r[3]+0x00000009u,c->r[8]); // 801F13B0
  W8(c->r[3]+0x0000000Au,c->r[7]); // 801F13B4
  W8(c->r[3]+0x0000000Bu,c->r[4]); // 801F13B8
  W8(c->r[3]+0x0000000Cu,c->r[6]); // 801F13BC
  W8(c->r[3]+0x0000000Du,c->r[5]); // 801F13C0
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 801F13C4
  f_801ED698(c); return; // 801F13C8
}

// btsnd_hcic_set_host_buf_size
void f_801F13CC(Ctx* __restrict c) {
  trace_call(0x801F13CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F13CC
  c->r[0]=c->lr; // 801F13D0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801F13D4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801F13D8
  c->r[31]=c->r[6]|c->r[6]; // 801F13DC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801F13E0
  c->r[30]=c->r[5]|c->r[5]; // 801F13E4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801F13E8
  c->r[29]=c->r[4]|c->r[4]; // 801F13EC
  W32(c->r[1]+0x00000010u,c->r[28]); // 801F13F0
  c->r[28]=c->r[3]|c->r[3]; // 801F13F4
  c->r[3]=0u+0x00000002u; // 801F13F8
  c->lr=0x801F1400u; f_801D9B80(c); // 801F13FC
  cmps(c,0,(int32_t)c->r[3],0); // 801F1400
  if (!crb(c,2)) { goto L_801F1410; } // 801F1404
  c->r[3]=0u+0x00000000u; // 801F1408
  goto L_801F1468; // 801F140C
L_801F1410:;
  c->r[0]=0u+0x0000000Au; // 801F1410
  c->r[5]=sraw(c,c->r[28],8); // 801F1414
  W16(c->r[3]+0x00000002u,c->r[0]); // 801F1418
  c->r[0]=0u+0x00000000u; // 801F141C
  c->r[8]=0u+0x00000033u; // 801F1420
  c->r[7]=0u+0x0000000Cu; // 801F1424
  W16(c->r[3]+0x00000004u,c->r[0]); // 801F1428
  c->r[6]=0u+0x00000007u; // 801F142C
  c->r[4]=sraw(c,c->r[30],8); // 801F1430
  c->r[0]=rotl(c->r[31],24)&0x000000FFu; // 801F1434
  W8(c->r[3]+0x00000008u,c->r[8]); // 801F1438
  W8(c->r[3]+0x00000009u,c->r[7]); // 801F143C
  W8(c->r[3]+0x0000000Au,c->r[6]); // 801F1440
  W8(c->r[3]+0x0000000Bu,c->r[28]); // 801F1444
  W8(c->r[3]+0x0000000Cu,c->r[5]); // 801F1448
  W8(c->r[3]+0x0000000Du,c->r[29]); // 801F144C
  W8(c->r[3]+0x0000000Eu,c->r[30]); // 801F1450
  W8(c->r[3]+0x0000000Fu,c->r[4]); // 801F1454
  W8(c->r[3]+0x00000010u,c->r[31]); // 801F1458
  W8(c->r[3]+0x00000011u,c->r[0]); // 801F145C
  c->lr=0x801F1464u; f_801ED698(c); // 801F1460
  c->r[3]=0u+0x00000001u; // 801F1464
L_801F1468:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801F1468
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801F146C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801F1470
  c->r[29]=R32(c->r[1]+0x00000014u); // 801F1474
  c->r[28]=R32(c->r[1]+0x00000010u); // 801F1478
  c->lr=c->r[0]; // 801F147C
  c->r[1]=c->r[1]+0x00000020u; // 801F1480
  return; // 801F1484
}

// btsnd_hcic_write_link_super_tout
void f_801F1488(Ctx* __restrict c) {
  trace_call(0x801F1488u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F1488
  c->r[0]=c->lr; // 801F148C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F1490
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F1494
  c->r[31]=c->r[4]|c->r[4]; // 801F1498
  W32(c->r[1]+0x00000008u,c->r[30]); // 801F149C
  c->r[30]=c->r[3]|c->r[3]; // 801F14A0
  c->r[3]=0u+0x00000002u; // 801F14A4
  c->lr=0x801F14ACu; f_801D9B80(c); // 801F14A8
  cmps(c,0,(int32_t)c->r[3],0); // 801F14AC
  if (!crb(c,2)) { goto L_801F14BC; } // 801F14B0
  c->r[3]=0u+0x00000000u; // 801F14B4
  goto L_801F1504; // 801F14B8
L_801F14BC:;
  c->r[4]=0u+0x00000007u; // 801F14BC
  c->r[0]=0u+0x00000000u; // 801F14C0
  W16(c->r[3]+0x00000002u,c->r[4]); // 801F14C4
  c->r[7]=0u+0x00000037u; // 801F14C8
  c->r[6]=0u+0x0000000Cu; // 801F14CC
  c->r[5]=0u+0x00000004u; // 801F14D0
  W16(c->r[3]+0x00000004u,c->r[0]); // 801F14D4
  c->r[4]=sraw(c,c->r[30],8); // 801F14D8
  c->r[0]=rotl(c->r[31],24)&0x000000FFu; // 801F14DC
  W8(c->r[3]+0x00000008u,c->r[7]); // 801F14E0
  W8(c->r[3]+0x00000009u,c->r[6]); // 801F14E4
  W8(c->r[3]+0x0000000Au,c->r[5]); // 801F14E8
  W8(c->r[3]+0x0000000Bu,c->r[30]); // 801F14EC
  W8(c->r[3]+0x0000000Cu,c->r[4]); // 801F14F0
  W8(c->r[3]+0x0000000Du,c->r[31]); // 801F14F4
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 801F14F8
  c->lr=0x801F1500u; f_801ED698(c); // 801F14FC
  c->r[3]=0u+0x00000001u; // 801F1500
L_801F1504:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F1504
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F1508
  c->r[30]=R32(c->r[1]+0x00000008u); // 801F150C
  c->lr=c->r[0]; // 801F1510
  c->r[1]=c->r[1]+0x00000010u; // 801F1514
  return; // 801F1518
}

// btsnd_hcic_write_cur_iac_lap
void f_801F151C(Ctx* __restrict c) {
  trace_call(0x801F151Cu);
  c->r[0]=rotl(c->r[4],2)&0x000003FCu; // 801F151C
  c->r[9]=0u+0x00000000u; // 801F1520
  c->r[6]=c->r[0]-c->r[4]; // 801F1524
  c->r[8]=0u+0x0000003Au; // 801F1528
  c->r[10]=c->r[6]+0x00000004u; // 801F152C
  c->r[7]=0u+0x0000000Cu; // 801F1530
  c->r[6]=rotl(c->r[10],0)&0x0000FFFFu; // 801F1534
  W16(c->r[3]+0x00000002u,c->r[10]); // 801F1538
  c->r[0]=c->r[6]+0xFFFFFFFDu; // 801F153C
  c->r[6]=c->r[3]+0x0000000Cu; // 801F1540
  W16(c->r[3]+0x00000004u,c->r[9]); // 801F1544
  W8(c->r[3]+0x00000008u,c->r[8]); // 801F1548
  W8(c->r[3]+0x00000009u,c->r[7]); // 801F154C
  W8(c->r[3]+0x0000000Au,c->r[0]); // 801F1550
  W8(c->r[3]+0x0000000Bu,c->r[4]); // 801F1554
  c->ctr=c->r[4]; // 801F1558
  cmps(c,0,(int32_t)c->r[4],0); // 801F155C
  if (!crb(c,1)) { goto L_801F1588; } // 801F1560
L_801F1564:;
  c->r[0]=R8(c->r[5]+0x00000002u); // 801F1564
  W8(c->r[6]+0x00000000u,c->r[0]); // 801F1568
  c->r[0]=R8(c->r[5]+0x00000001u); // 801F156C
  W8(c->r[6]+0x00000001u,c->r[0]); // 801F1570
  c->r[0]=R8(c->r[5]+0x00000000u); // 801F1574
  c->r[5]=c->r[5]+0x00000003u; // 801F1578
  W8(c->r[6]+0x00000002u,c->r[0]); // 801F157C
  c->r[6]=c->r[6]+0x00000003u; // 801F1580
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801F1564; } // 801F1584
L_801F1588:;
  f_801ED698(c); return; // 801F1588
}

// btsnd_hcic_read_local_ver
void f_801F158C(Ctx* __restrict c) {
  trace_call(0x801F158Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F158C
  c->r[0]=c->lr; // 801F1590
  c->r[3]=0u+0x00000002u; // 801F1594
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F1598
  c->lr=0x801F15A0u; f_801D9B80(c); // 801F159C
  cmps(c,0,(int32_t)c->r[3],0); // 801F15A0
  if (!crb(c,2)) { goto L_801F15B0; } // 801F15A4
  c->r[3]=0u+0x00000000u; // 801F15A8
  goto L_801F15DC; // 801F15AC
L_801F15B0:;
  c->r[0]=0u+0x00000003u; // 801F15B0
  c->r[5]=0u+0x00000000u; // 801F15B4
  W16(c->r[3]+0x00000002u,c->r[0]); // 801F15B8
  c->r[4]=0u+0x00000001u; // 801F15BC
  c->r[0]=0u+0x00000010u; // 801F15C0
  W16(c->r[3]+0x00000004u,c->r[5]); // 801F15C4
  W8(c->r[3]+0x00000008u,c->r[4]); // 801F15C8
  W8(c->r[3]+0x00000009u,c->r[0]); // 801F15CC
  W8(c->r[3]+0x0000000Au,c->r[5]); // 801F15D0
  c->lr=0x801F15D8u; f_801ED698(c); // 801F15D4
  c->r[3]=0u+0x00000001u; // 801F15D8
L_801F15DC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F15DC
  c->lr=c->r[0]; // 801F15E0
  c->r[1]=c->r[1]+0x00000010u; // 801F15E4
  return; // 801F15E8
}

// btsnd_hcic_read_local_features
void f_801F15EC(Ctx* __restrict c) {
  trace_call(0x801F15ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F15EC
  c->r[0]=c->lr; // 801F15F0
  c->r[3]=0u+0x00000002u; // 801F15F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F15F8
  c->lr=0x801F1600u; f_801D9B80(c); // 801F15FC
  cmps(c,0,(int32_t)c->r[3],0); // 801F1600
  if (!crb(c,2)) { goto L_801F1610; } // 801F1604
  c->r[3]=0u+0x00000000u; // 801F1608
  goto L_801F1638; // 801F160C
L_801F1610:;
  c->r[5]=0u+0x00000003u; // 801F1610
  c->r[4]=0u+0x00000000u; // 801F1614
  W16(c->r[3]+0x00000002u,c->r[5]); // 801F1618
  c->r[0]=0u+0x00000010u; // 801F161C
  W16(c->r[3]+0x00000004u,c->r[4]); // 801F1620
  W8(c->r[3]+0x00000008u,c->r[5]); // 801F1624
  W8(c->r[3]+0x00000009u,c->r[0]); // 801F1628
  W8(c->r[3]+0x0000000Au,c->r[4]); // 801F162C
  c->lr=0x801F1634u; f_801ED698(c); // 801F1630
  c->r[3]=0u+0x00000001u; // 801F1634
L_801F1638:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F1638
  c->lr=c->r[0]; // 801F163C
  c->r[1]=c->r[1]+0x00000010u; // 801F1640
  return; // 801F1644
}

// btsnd_hcic_read_buffer_size
void f_801F1648(Ctx* __restrict c) {
  trace_call(0x801F1648u);
  c->r[5]=0u+0x00000000u; // 801F1648
  c->r[6]=0u+0x00000003u; // 801F164C
  c->r[4]=0u+0x00000005u; // 801F1650
  c->r[0]=0u+0x00000010u; // 801F1654
  W16(c->r[3]+0x00000002u,c->r[6]); // 801F1658
  W16(c->r[3]+0x00000004u,c->r[5]); // 801F165C
  W8(c->r[3]+0x00000008u,c->r[4]); // 801F1660
  W8(c->r[3]+0x00000009u,c->r[0]); // 801F1664
  W8(c->r[3]+0x0000000Au,c->r[5]); // 801F1668
  f_801ED698(c); return; // 801F166C
}

// btsnd_hcic_read_bd_addr
void f_801F1670(Ctx* __restrict c) {
  trace_call(0x801F1670u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F1670
  c->r[0]=c->lr; // 801F1674
  c->r[3]=0u+0x00000002u; // 801F1678
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F167C
  c->lr=0x801F1684u; f_801D9B80(c); // 801F1680
  cmps(c,0,(int32_t)c->r[3],0); // 801F1684
  if (!crb(c,2)) { goto L_801F1694; } // 801F1688
  c->r[3]=0u+0x00000000u; // 801F168C
  goto L_801F16C0; // 801F1690
L_801F1694:;
  c->r[0]=0u+0x00000003u; // 801F1694
  c->r[5]=0u+0x00000000u; // 801F1698
  W16(c->r[3]+0x00000002u,c->r[0]); // 801F169C
  c->r[4]=0u+0x00000009u; // 801F16A0
  c->r[0]=0u+0x00000010u; // 801F16A4
  W16(c->r[3]+0x00000004u,c->r[5]); // 801F16A8
  W8(c->r[3]+0x00000008u,c->r[4]); // 801F16AC
  W8(c->r[3]+0x00000009u,c->r[0]); // 801F16B0
  W8(c->r[3]+0x0000000Au,c->r[5]); // 801F16B4
  c->lr=0x801F16BCu; f_801ED698(c); // 801F16B8
  c->r[3]=0u+0x00000001u; // 801F16BC
L_801F16C0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F16C0
  c->lr=c->r[0]; // 801F16C4
  c->r[1]=c->r[1]+0x00000010u; // 801F16C8
  return; // 801F16CC
}

// btsnd_hcic_get_link_quality
void f_801F16D0(Ctx* __restrict c) {
  trace_call(0x801F16D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F16D0
  c->r[0]=c->lr; // 801F16D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F16D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F16DC
  c->r[31]=c->r[3]|c->r[3]; // 801F16E0
  c->r[3]=0u+0x00000002u; // 801F16E4
  c->lr=0x801F16ECu; f_801D9B80(c); // 801F16E8
  cmps(c,0,(int32_t)c->r[3],0); // 801F16EC
  if (!crb(c,2)) { goto L_801F16FC; } // 801F16F0
  c->r[3]=0u+0x00000000u; // 801F16F4
  goto L_801F1738; // 801F16F8
L_801F16FC:;
  c->r[4]=0u+0x00000005u; // 801F16FC
  c->r[0]=0u+0x00000000u; // 801F1700
  W16(c->r[3]+0x00000002u,c->r[4]); // 801F1704
  c->r[6]=0u+0x00000003u; // 801F1708
  c->r[5]=0u+0x00000014u; // 801F170C
  c->r[4]=0u+0x00000002u; // 801F1710
  W16(c->r[3]+0x00000004u,c->r[0]); // 801F1714
  c->r[0]=rotl(c->r[31],24)&0x000000FFu; // 801F1718
  W8(c->r[3]+0x00000008u,c->r[6]); // 801F171C
  W8(c->r[3]+0x00000009u,c->r[5]); // 801F1720
  W8(c->r[3]+0x0000000Au,c->r[4]); // 801F1724
  W8(c->r[3]+0x0000000Bu,c->r[31]); // 801F1728
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801F172C
  c->lr=0x801F1734u; f_801ED698(c); // 801F1730
  c->r[3]=0u+0x00000001u; // 801F1734
L_801F1738:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F1738
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F173C
  c->lr=c->r[0]; // 801F1740
  c->r[1]=c->r[1]+0x00000010u; // 801F1744
  return; // 801F1748
}

// btsnd_hcic_read_rssi
void f_801F174C(Ctx* __restrict c) {
  trace_call(0x801F174Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F174C
  c->r[0]=c->lr; // 801F1750
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F1754
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F1758
  c->r[31]=c->r[3]|c->r[3]; // 801F175C
  c->r[3]=0u+0x00000002u; // 801F1760
  c->lr=0x801F1768u; f_801D9B80(c); // 801F1764
  cmps(c,0,(int32_t)c->r[3],0); // 801F1768
  if (!crb(c,2)) { goto L_801F1778; } // 801F176C
  c->r[3]=0u+0x00000000u; // 801F1770
  goto L_801F17B0; // 801F1774
L_801F1778:;
  c->r[7]=0u+0x00000005u; // 801F1778
  c->r[6]=0u+0x00000000u; // 801F177C
  W16(c->r[3]+0x00000002u,c->r[7]); // 801F1780
  c->r[5]=0u+0x00000014u; // 801F1784
  c->r[4]=0u+0x00000002u; // 801F1788
  c->r[0]=rotl(c->r[31],24)&0x000000FFu; // 801F178C
  W16(c->r[3]+0x00000004u,c->r[6]); // 801F1790
  W8(c->r[3]+0x00000008u,c->r[7]); // 801F1794
  W8(c->r[3]+0x00000009u,c->r[5]); // 801F1798
  W8(c->r[3]+0x0000000Au,c->r[4]); // 801F179C
  W8(c->r[3]+0x0000000Bu,c->r[31]); // 801F17A0
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801F17A4
  c->lr=0x801F17ACu; f_801ED698(c); // 801F17A8
  c->r[3]=0u+0x00000001u; // 801F17AC
L_801F17B0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F17B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F17B4
  c->lr=c->r[0]; // 801F17B8
  c->r[1]=c->r[1]+0x00000010u; // 801F17BC
  return; // 801F17C0
}

// btsnd_hcic_set_afh_channels
void f_801F17C4(Ctx* __restrict c) {
  trace_call(0x801F17C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F17C4
  c->r[0]=c->lr; // 801F17C8
  W32(c->r[1]+0x00000034u,c->r[0]); // 801F17CC
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801F17D0
  c->r[31]=c->r[4]|c->r[4]; // 801F17D4
  W32(c->r[1]+0x00000028u,c->r[30]); // 801F17D8
  c->r[30]=c->r[3]|c->r[3]; // 801F17DC
  c->r[3]=0u+0x00000002u; // 801F17E0
  W32(c->r[1]+0x00000024u,c->r[29]); // 801F17E4
  c->r[29]=0u+0x80230000u; // 801F17E8
  {uint32_t ea=c->r[29]+0xFFFFC618u; c->r[12]=R8(ea); c->r[29]=ea;} // 801F17EC
  c->r[11]=R8(c->r[29]+0x00000001u); // 801F17F0
  c->r[10]=R8(c->r[29]+0x00000002u); // 801F17F4
  c->r[9]=R8(c->r[29]+0x00000003u); // 801F17F8
  c->r[8]=R8(c->r[29]+0x00000004u); // 801F17FC
  c->r[7]=R8(c->r[29]+0x00000005u); // 801F1800
  c->r[6]=R8(c->r[29]+0x00000006u); // 801F1804
  c->r[5]=R8(c->r[29]+0x00000007u); // 801F1808
  c->r[4]=R8(c->r[29]+0x00000008u); // 801F180C
  c->r[0]=R8(c->r[29]+0x00000009u); // 801F1810
  W8(c->r[1]+0x00000008u,c->r[12]); // 801F1814
  W8(c->r[1]+0x00000009u,c->r[11]); // 801F1818
  W8(c->r[1]+0x0000000Au,c->r[10]); // 801F181C
  W8(c->r[1]+0x0000000Bu,c->r[9]); // 801F1820
  W8(c->r[1]+0x0000000Cu,c->r[8]); // 801F1824
  W8(c->r[1]+0x0000000Du,c->r[7]); // 801F1828
  W8(c->r[1]+0x0000000Eu,c->r[6]); // 801F182C
  W8(c->r[1]+0x0000000Fu,c->r[5]); // 801F1830
  W8(c->r[1]+0x00000010u,c->r[4]); // 801F1834
  W8(c->r[1]+0x00000011u,c->r[0]); // 801F1838
  c->lr=0x801F1840u; f_801D9B80(c); // 801F183C
  cmps(c,0,(int32_t)c->r[3],0); // 801F1840
  if (!crb(c,2)) { goto L_801F1850; } // 801F1844
  c->r[3]=0u+0x00000000u; // 801F1848
  goto L_801F1BC8; // 801F184C
L_801F1850:;
  c->r[4]=0u+0x0000000Du; // 801F1850
  c->r[0]=0u+0x00000000u; // 801F1854
  W16(c->r[3]+0x00000002u,c->r[4]); // 801F1858
  c->r[5]=0u+0x0000003Fu; // 801F185C
  c->r[4]=0u+0x0000000Cu; // 801F1860
  cmpu(c,0,c->r[30],c->r[31]); // 801F1864
  W16(c->r[3]+0x00000004u,c->r[0]); // 801F1868
  c->r[0]=0u+0x0000000Au; // 801F186C
  W8(c->r[3]+0x00000008u,c->r[5]); // 801F1870
  W8(c->r[3]+0x00000009u,c->r[4]); // 801F1874
  W8(c->r[3]+0x0000000Au,c->r[0]); // 801F1878
  if (crb(c,1)) { goto L_801F1B70; } // 801F187C
  cmpu(c,0,c->r[31],0x0000004Eu); // 801F1880
  if (crb(c,1)) { goto L_801F1B70; } // 801F1884
  cmps(c,1,(int32_t)c->r[30],(int32_t)c->r[31]); // 801F1888
  if (crb(c,5)) { goto L_801F1B70; } // 801F188C
  c->r[11]=c->r[31]-c->r[30]; // 801F1890
  c->r[7]=c->r[31]+0xFFFFFFF8u; // 801F1894
  c->r[12]=c->r[11]+0x00000001u; // 801F1898
  cmps(c,0,(int32_t)c->r[12],8); // 801F189C
  if (!crb(c,1)) { goto L_801F1B20; } // 801F18A0
  c->r[5]=0u+0x00000000u; // 801F18A4
  c->r[6]=0u+0x00000000u; // 801F18A8
  c->r[8]=0u+0x00000000u; // 801F18AC
  c->r[9]=0u+0x00000000u; // 801F18B0
  c->r[10]=0u+0x00000000u; // 801F18B4
  if (crb(c,5)) { goto L_801F18D0; } // 801F18B8
  c->r[4]=0u+0x80000000u; // 801F18BC
  c->r[0]=c->r[4]+0xFFFFFFFEu; // 801F18C0
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 801F18C4
  if (crb(c,1)) { goto L_801F18D0; } // 801F18C8
  c->r[10]=0u+0x00000001u; // 801F18CC
L_801F18D0:;
  cmps(c,0,(int32_t)c->r[10],0); // 801F18D0
  if (crb(c,2)) { goto L_801F18EC; } // 801F18D4
  c->r[4]=0u+0x80000000u; // 801F18D8
  c->r[0]=c->r[4]+0xFFFFFFFEu; // 801F18DC
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 801F18E0
  if (crb(c,1)) { goto L_801F18EC; } // 801F18E4
  c->r[9]=0u+0x00000001u; // 801F18E8
L_801F18EC:;
  cmps(c,0,(int32_t)c->r[9],0); // 801F18EC
  if (crb(c,2)) { goto L_801F1904; } // 801F18F0
  c->r[0]=c->r[30]+0x80000000u; // 801F18F4
  cmpu(c,0,c->r[0],0x00000000u); // 801F18F8
  if (crb(c,2)) { goto L_801F1904; } // 801F18FC
  c->r[8]=0u+0x00000001u; // 801F1900
L_801F1904:;
  cmps(c,0,(int32_t)c->r[8],0); // 801F1904
  if (crb(c,2)) { goto L_801F1940; } // 801F1908
  c->r[0]=0u-c->r[30]; // 801F190C
  c->r[8]=rotl(c->r[31],0)&0x80000000u; // 801F1910
  c->r[0]=rotl(c->r[0],0)&0x80000000u; // 801F1914
  c->r[4]=0u+0x00000001u; // 801F1918
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 801F191C
  if (!crb(c,2)) { goto L_801F1934; } // 801F1920
  c->r[0]=rotl(c->r[11],0)&0x80000000u; // 801F1924
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 801F1928
  if (crb(c,2)) { goto L_801F1934; } // 801F192C
  c->r[4]=0u+0x00000000u; // 801F1930
L_801F1934:;
  cmps(c,0,(int32_t)c->r[4],0); // 801F1934
  if (crb(c,2)) { goto L_801F1940; } // 801F1938
  c->r[6]=0u+0x00000001u; // 801F193C
L_801F1940:;
  cmps(c,0,(int32_t)c->r[6],0); // 801F1940
  if (crb(c,2)) { goto L_801F196C; } // 801F1944
  c->r[0]=rotl(c->r[11],0)&0x80000000u; cr0(c,c->r[0]); // 801F1948
  c->r[4]=0u+0x00000001u; // 801F194C
  if (!crb(c,2)) { goto L_801F1960; } // 801F1950
  c->r[0]=rotl(c->r[12],0)&0x80000000u; cr0(c,c->r[0]); // 801F1954
  if (crb(c,2)) { goto L_801F1960; } // 801F1958
  c->r[4]=0u+0x00000000u; // 801F195C
L_801F1960:;
  cmps(c,0,(int32_t)c->r[4],0); // 801F1960
  if (crb(c,2)) { goto L_801F196C; } // 801F1964
  c->r[5]=0u+0x00000001u; // 801F1968
L_801F196C:;
  cmps(c,0,(int32_t)c->r[5],0); // 801F196C
  if (crb(c,2)) { goto L_801F1B20; } // 801F1970
  c->r[5]=c->r[7]+0x00000008u; // 801F1974
  c->r[0]=sraw(c,c->r[30],3); // 801F1978
  c->r[5]=c->r[5]-c->r[30]; // 801F197C
  c->r[4]=c->r[1]+0x00000008u; // 801F1980
  c->r[6]=addc(c,c->r[0],0,c->xer_ca); // 801F1984
  c->r[0]=0u+0x00000001u; // 801F1988
  c->r[5]=rotl(c->r[5],29)&0x1FFFFFFFu; // 801F198C
  c->r[6]=c->r[4]+c->r[6]; // 801F1990
  c->ctr=c->r[5]; // 801F1994
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[7]); // 801F1998
  if (crb(c,1)) { goto L_801F1B20; } // 801F199C
L_801F19A0:;
  c->r[5]=rotl(c->r[30],29)&0xE0000000u; // 801F19A0
  c->r[8]=rotl(c->r[30],1)&0x00000001u; // 801F19A4
  c->r[5]=c->r[5]-c->r[8]; // 801F19A8
  c->r[10]=R8(c->r[6]+0x00000000u); // 801F19AC
  c->r[5]=rotl(c->r[5],3)&0xFFFFFFFFu; // 801F19B0
  c->r[7]=c->r[30]+0x00000001u; // 801F19B4
  c->r[5]=c->r[5]+c->r[8]; // 801F19B8
  c->r[9]=c->r[30]+0x00000002u; // 801F19BC
  c->r[5]=((c->r[5])&0x20)?0u:(c->r[0]<<((c->r[5])&31)); // 801F19C0
  c->r[8]=c->r[30]+0x00000003u; // 801F19C4
  c->r[11]=c->r[10]&~c->r[5]; // 801F19C8
  c->r[10]=rotl(c->r[7],1)&0x00000001u; // 801F19CC
  W8(c->r[6]+0x00000000u,c->r[11]); // 801F19D0
  c->r[5]=rotl(c->r[7],29)&0xE0000000u; // 801F19D4
  c->r[11]=sraw(c,c->r[7],3); // 801F19D8
  c->r[7]=c->r[30]+0x00000004u; // 801F19DC
  c->r[5]=c->r[5]-c->r[10]; // 801F19E0
  c->r[6]=c->r[6]+0x00000001u; // 801F19E4
  c->r[29]=addc(c,c->r[11],0,c->xer_ca); // 801F19E8
  c->r[5]=rotl(c->r[5],3)&0xFFFFFFFFu; // 801F19EC
  c->r[12]=R8(c->r[4]+c->r[29]); // 801F19F0
  c->r[10]=c->r[5]+c->r[10]; // 801F19F4
  c->r[11]=((c->r[10])&0x20)?0u:(c->r[0]<<((c->r[10])&31)); // 801F19F8
  c->r[5]=rotl(c->r[9],29)&0xE0000000u; // 801F19FC
  c->r[10]=rotl(c->r[9],1)&0x00000001u; // 801F1A00
  c->r[9]=sraw(c,c->r[9],3); // 801F1A04
  c->r[11]=c->r[12]&~c->r[11]; // 801F1A08
  c->r[5]=c->r[5]-c->r[10]; // 801F1A0C
  W8(c->r[4]+c->r[29],c->r[11]); // 801F1A10
  c->r[29]=addc(c,c->r[9],0,c->xer_ca); // 801F1A14
  c->r[9]=c->r[30]+0x00000005u; // 801F1A18
  c->r[5]=rotl(c->r[5],3)&0xFFFFFFFFu; // 801F1A1C
  c->r[12]=R8(c->r[4]+c->r[29]); // 801F1A20
  c->r[5]=c->r[5]+c->r[10]; // 801F1A24
  c->r[10]=sraw(c,c->r[8],3); // 801F1A28
  c->r[11]=((c->r[5])&0x20)?0u:(c->r[0]<<((c->r[5])&31)); // 801F1A2C
  c->r[12]=c->r[12]&~c->r[11]; // 801F1A30
  c->r[5]=rotl(c->r[8],29)&0xE0000000u; // 801F1A34
  c->r[8]=rotl(c->r[8],1)&0x00000001u; // 801F1A38
  W8(c->r[4]+c->r[29],c->r[12]); // 801F1A3C
  c->r[5]=c->r[5]-c->r[8]; // 801F1A40
  c->r[11]=addc(c,c->r[10],0,c->xer_ca); // 801F1A44
  c->r[5]=rotl(c->r[5],3)&0xFFFFFFFFu; // 801F1A48
  c->r[10]=R8(c->r[4]+c->r[11]); // 801F1A4C
  c->r[8]=c->r[5]+c->r[8]; // 801F1A50
  c->r[5]=sraw(c,c->r[7],3); // 801F1A54
  c->r[8]=((c->r[8])&0x20)?0u:(c->r[0]<<((c->r[8])&31)); // 801F1A58
  c->r[10]=c->r[10]&~c->r[8]; // 801F1A5C
  c->r[29]=addc(c,c->r[5],0,c->xer_ca); // 801F1A60
  W8(c->r[4]+c->r[11],c->r[10]); // 801F1A64
  c->r[5]=rotl(c->r[7],29)&0xE0000000u; // 801F1A68
  c->r[8]=rotl(c->r[7],1)&0x00000001u; // 801F1A6C
  c->r[7]=sraw(c,c->r[9],3); // 801F1A70
  c->r[5]=c->r[5]-c->r[8]; // 801F1A74
  c->r[11]=R8(c->r[4]+c->r[29]); // 801F1A78
  c->r[5]=rotl(c->r[5],3)&0xFFFFFFFFu; // 801F1A7C
  c->r[12]=addc(c,c->r[7],0,c->xer_ca); // 801F1A80
  c->r[5]=c->r[5]+c->r[8]; // 801F1A84
  c->r[8]=c->r[30]+0x00000006u; // 801F1A88
  c->r[10]=((c->r[5])&0x20)?0u:(c->r[0]<<((c->r[5])&31)); // 801F1A8C
  c->r[5]=rotl(c->r[9],29)&0xE0000000u; // 801F1A90
  c->r[9]=rotl(c->r[9],1)&0x00000001u; // 801F1A94
  c->r[10]=c->r[11]&~c->r[10]; // 801F1A98
  W8(c->r[4]+c->r[29],c->r[10]); // 801F1A9C
  c->r[5]=c->r[5]-c->r[9]; // 801F1AA0
  c->r[7]=rotl(c->r[5],3)&0xFFFFFFFFu; // 801F1AA4
  c->r[9]=c->r[7]+c->r[9]; // 801F1AA8
  c->r[5]=sraw(c,c->r[8],3); // 801F1AAC
  c->r[11]=addc(c,c->r[5],0,c->xer_ca); // 801F1AB0
  c->r[7]=c->r[30]+0x00000007u; // 801F1AB4
  c->r[10]=R8(c->r[4]+c->r[12]); // 801F1AB8
  c->r[9]=((c->r[9])&0x20)?0u:(c->r[0]<<((c->r[9])&31)); // 801F1ABC
  c->r[5]=rotl(c->r[8],29)&0xE0000000u; // 801F1AC0
  c->r[30]=c->r[30]+0x00000008u; // 801F1AC4
  c->r[10]=c->r[10]&~c->r[9]; // 801F1AC8
  c->r[9]=rotl(c->r[8],1)&0x00000001u; // 801F1ACC
  W8(c->r[4]+c->r[12],c->r[10]); // 801F1AD0
  c->r[5]=c->r[5]-c->r[9]; // 801F1AD4
  c->r[5]=rotl(c->r[5],3)&0xFFFFFFFFu; // 801F1AD8
  c->r[8]=sraw(c,c->r[7],3); // 801F1ADC
  c->r[5]=c->r[5]+c->r[9]; // 801F1AE0
  c->r[10]=R8(c->r[4]+c->r[11]); // 801F1AE4
  c->r[9]=((c->r[5])&0x20)?0u:(c->r[0]<<((c->r[5])&31)); // 801F1AE8
  c->r[5]=rotl(c->r[7],29)&0xE0000000u; // 801F1AEC
  c->r[7]=rotl(c->r[7],1)&0x00000001u; // 801F1AF0
  c->r[9]=c->r[10]&~c->r[9]; // 801F1AF4
  c->r[5]=c->r[5]-c->r[7]; // 801F1AF8
  W8(c->r[4]+c->r[11],c->r[9]); // 801F1AFC
  c->r[9]=addc(c,c->r[8],0,c->xer_ca); // 801F1B00
  c->r[5]=rotl(c->r[5],3)&0xFFFFFFFFu; // 801F1B04
  c->r[8]=R8(c->r[4]+c->r[9]); // 801F1B08
  c->r[5]=c->r[5]+c->r[7]; // 801F1B0C
  c->r[5]=((c->r[5])&0x20)?0u:(c->r[0]<<((c->r[5])&31)); // 801F1B10
  c->r[5]=c->r[8]&~c->r[5]; // 801F1B14
  W8(c->r[4]+c->r[9],c->r[5]); // 801F1B18
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801F19A0; } // 801F1B1C
L_801F1B20:;
  c->r[0]=c->r[31]+0x00000001u; // 801F1B20
  c->r[7]=c->r[1]+0x00000008u; // 801F1B24
  c->r[0]=c->r[0]-c->r[30]; // 801F1B28
  c->r[5]=0u+0x00000001u; // 801F1B2C
  c->ctr=c->r[0]; // 801F1B30
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[31]); // 801F1B34
  if (crb(c,1)) { goto L_801F1B70; } // 801F1B38
L_801F1B3C:;
  c->r[0]=rotl(c->r[30],29)&0xE0000000u; // 801F1B3C
  c->r[4]=rotl(c->r[30],1)&0x00000001u; // 801F1B40
  c->r[6]=sraw(c,c->r[30],3); // 801F1B44
  c->r[30]=c->r[30]+0x00000001u; // 801F1B48
  c->r[0]=c->r[0]-c->r[4]; // 801F1B4C
  c->r[8]=addc(c,c->r[6],0,c->xer_ca); // 801F1B50
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFFFu; // 801F1B54
  c->r[6]=R8(c->r[7]+c->r[8]); // 801F1B58
  c->r[0]=c->r[0]+c->r[4]; // 801F1B5C
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[5]<<((c->r[0])&31)); // 801F1B60
  c->r[0]=c->r[6]&~c->r[0]; // 801F1B64
  W8(c->r[7]+c->r[8],c->r[0]); // 801F1B68
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801F1B3C; } // 801F1B6C
L_801F1B70:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 801F1B70
  W8(c->r[3]+0x0000000Bu,c->r[0]); // 801F1B74
  c->r[0]=R8(c->r[1]+0x00000009u); // 801F1B78
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801F1B7C
  c->r[0]=R8(c->r[1]+0x0000000Au); // 801F1B80
  W8(c->r[3]+0x0000000Du,c->r[0]); // 801F1B84
  c->r[0]=R8(c->r[1]+0x0000000Bu); // 801F1B88
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 801F1B8C
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 801F1B90
  W8(c->r[3]+0x0000000Fu,c->r[0]); // 801F1B94
  c->r[0]=R8(c->r[1]+0x0000000Du); // 801F1B98
  W8(c->r[3]+0x00000010u,c->r[0]); // 801F1B9C
  c->r[0]=R8(c->r[1]+0x0000000Eu); // 801F1BA0
  W8(c->r[3]+0x00000011u,c->r[0]); // 801F1BA4
  c->r[0]=R8(c->r[1]+0x0000000Fu); // 801F1BA8
  W8(c->r[3]+0x00000012u,c->r[0]); // 801F1BAC
  c->r[0]=R8(c->r[1]+0x00000010u); // 801F1BB0
  W8(c->r[3]+0x00000013u,c->r[0]); // 801F1BB4
  c->r[0]=R8(c->r[1]+0x00000011u); // 801F1BB8
  W8(c->r[3]+0x00000014u,c->r[0]); // 801F1BBC
  c->lr=0x801F1BC4u; f_801ED698(c); // 801F1BC0
  c->r[3]=0u+0x00000001u; // 801F1BC4
L_801F1BC8:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801F1BC8
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801F1BCC
  c->r[30]=R32(c->r[1]+0x00000028u); // 801F1BD0
  c->r[29]=R32(c->r[1]+0x00000024u); // 801F1BD4
  c->lr=c->r[0]; // 801F1BD8
  c->r[1]=c->r[1]+0x00000030u; // 801F1BDC
  return; // 801F1BE0
}

// btsnd_hcic_write_inqscan_type
void f_801F1BE4(Ctx* __restrict c) {
  trace_call(0x801F1BE4u);
  c->r[8]=0u+0x00000004u; // 801F1BE4
  c->r[7]=0u+0x00000000u; // 801F1BE8
  c->r[6]=0u+0x00000043u; // 801F1BEC
  c->r[5]=0u+0x0000000Cu; // 801F1BF0
  c->r[0]=0u+0x00000001u; // 801F1BF4
  W16(c->r[3]+0x00000002u,c->r[8]); // 801F1BF8
  W16(c->r[3]+0x00000004u,c->r[7]); // 801F1BFC
  W8(c->r[3]+0x00000008u,c->r[6]); // 801F1C00
  W8(c->r[3]+0x00000009u,c->r[5]); // 801F1C04
  W8(c->r[3]+0x0000000Au,c->r[0]); // 801F1C08
  W8(c->r[3]+0x0000000Bu,c->r[4]); // 801F1C0C
  f_801ED698(c); return; // 801F1C10
}

// btsnd_hcic_write_inquiry_mode
void f_801F1C14(Ctx* __restrict c) {
  trace_call(0x801F1C14u);
  c->r[8]=0u+0x00000004u; // 801F1C14
  c->r[7]=0u+0x00000000u; // 801F1C18
  c->r[6]=0u+0x00000045u; // 801F1C1C
  c->r[5]=0u+0x0000000Cu; // 801F1C20
  c->r[0]=0u+0x00000001u; // 801F1C24
  W16(c->r[3]+0x00000002u,c->r[8]); // 801F1C28
  W16(c->r[3]+0x00000004u,c->r[7]); // 801F1C2C
  W8(c->r[3]+0x00000008u,c->r[6]); // 801F1C30
  W8(c->r[3]+0x00000009u,c->r[5]); // 801F1C34
  W8(c->r[3]+0x0000000Au,c->r[0]); // 801F1C38
  W8(c->r[3]+0x0000000Bu,c->r[4]); // 801F1C3C
  f_801ED698(c); return; // 801F1C40
}

// btsnd_hcic_write_pagescan_type
void f_801F1C44(Ctx* __restrict c) {
  trace_call(0x801F1C44u);
  c->r[8]=0u+0x00000004u; // 801F1C44
  c->r[7]=0u+0x00000000u; // 801F1C48
  c->r[6]=0u+0x00000047u; // 801F1C4C
  c->r[5]=0u+0x0000000Cu; // 801F1C50
  c->r[0]=0u+0x00000001u; // 801F1C54
  W16(c->r[3]+0x00000002u,c->r[8]); // 801F1C58
  W16(c->r[3]+0x00000004u,c->r[7]); // 801F1C5C
  W8(c->r[3]+0x00000008u,c->r[6]); // 801F1C60
  W8(c->r[3]+0x00000009u,c->r[5]); // 801F1C64
  W8(c->r[3]+0x0000000Au,c->r[0]); // 801F1C68
  W8(c->r[3]+0x0000000Bu,c->r[4]); // 801F1C6C
  f_801ED698(c); return; // 801F1C70
}

// btsnd_hcic_vendor_spec_cmd
void f_801F1C74(Ctx* __restrict c) {
  trace_call(0x801F1C74u);
  c->r[8]=c->r[4]|0x0000FC00u; // 801F1C74
  c->r[7]=c->r[5]+0x00000003u; // 801F1C78
  c->r[0]=sraw(c,c->r[8],8); // 801F1C7C
  c->r[4]=0u+0x00000000u; // 801F1C80
  cmps(c,1,(int32_t)c->r[5],0); // 801F1C84
  W16(c->r[3]+0x00000002u,c->r[7]); // 801F1C88
  c->r[9]=c->r[3]+0x0000000Bu; // 801F1C8C
  c->r[10]=0u+0x00000000u; // 801F1C90
  W16(c->r[3]+0x00000004u,c->r[4]); // 801F1C94
  W8(c->r[3]+0x00000008u,c->r[8]); // 801F1C98
  W8(c->r[3]+0x00000009u,c->r[0]); // 801F1C9C
  W8(c->r[3]+0x0000000Au,c->r[5]); // 801F1CA0
  if (!crb(c,5)) { goto L_801F1D64; } // 801F1CA4
  cmps(c,0,(int32_t)c->r[5],8); // 801F1CA8
  c->r[7]=c->r[5]+0xFFFFFFF8u; // 801F1CAC
  if (!crb(c,1)) { goto L_801F1D3C; } // 801F1CB0
  c->r[8]=0u+0x00000000u; // 801F1CB4
  if (crb(c,4)) { goto L_801F1CD0; } // 801F1CB8
  c->r[4]=0u+0x80000000u; // 801F1CBC
  c->r[0]=c->r[4]+0xFFFFFFFEu; // 801F1CC0
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 801F1CC4
  if (crb(c,1)) { goto L_801F1CD0; } // 801F1CC8
  c->r[8]=0u+0x00000001u; // 801F1CCC
L_801F1CD0:;
  cmps(c,0,(int32_t)c->r[8],0); // 801F1CD0
  if (crb(c,2)) { goto L_801F1D3C; } // 801F1CD4
  c->r[0]=c->r[7]+0x00000007u; // 801F1CD8
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 801F1CDC
  c->ctr=c->r[0]; // 801F1CE0
  cmps(c,0,(int32_t)c->r[7],0); // 801F1CE4
  if (!crb(c,1)) { goto L_801F1D3C; } // 801F1CE8
L_801F1CEC:;
  c->r[0]=R8(c->r[6]+c->r[10]); // 801F1CEC
  c->r[4]=c->r[6]+c->r[10]; // 801F1CF0
  c->r[10]=c->r[10]+0x00000008u; // 801F1CF4
  W8(c->r[9]+0x00000000u,c->r[0]); // 801F1CF8
  c->r[0]=R8(c->r[4]+0x00000001u); // 801F1CFC
  W8(c->r[9]+0x00000001u,c->r[0]); // 801F1D00
  c->r[0]=R8(c->r[4]+0x00000002u); // 801F1D04
  W8(c->r[9]+0x00000002u,c->r[0]); // 801F1D08
  c->r[0]=R8(c->r[4]+0x00000003u); // 801F1D0C
  W8(c->r[9]+0x00000003u,c->r[0]); // 801F1D10
  c->r[0]=R8(c->r[4]+0x00000004u); // 801F1D14
  W8(c->r[9]+0x00000004u,c->r[0]); // 801F1D18
  c->r[0]=R8(c->r[4]+0x00000005u); // 801F1D1C
  W8(c->r[9]+0x00000005u,c->r[0]); // 801F1D20
  c->r[0]=R8(c->r[4]+0x00000006u); // 801F1D24
  W8(c->r[9]+0x00000006u,c->r[0]); // 801F1D28
  c->r[0]=R8(c->r[4]+0x00000007u); // 801F1D2C
  W8(c->r[9]+0x00000007u,c->r[0]); // 801F1D30
  c->r[9]=c->r[9]+0x00000008u; // 801F1D34
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801F1CEC; } // 801F1D38
L_801F1D3C:;
  c->r[0]=c->r[5]-c->r[10]; // 801F1D3C
  c->r[4]=c->r[6]+c->r[10]; // 801F1D40
  c->ctr=c->r[0]; // 801F1D44
  cmps(c,0,(int32_t)c->r[10],(int32_t)c->r[5]); // 801F1D48
  if (!crb(c,0)) { goto L_801F1D64; } // 801F1D4C
L_801F1D50:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 801F1D50
  c->r[4]=c->r[4]+0x00000001u; // 801F1D54
  W8(c->r[9]+0x00000000u,c->r[0]); // 801F1D58
  c->r[9]=c->r[9]+0x00000001u; // 801F1D5C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801F1D50; } // 801F1D60
L_801F1D64:;
  f_801ED698(c); return; // 801F1D64
}

// HID_DevInit
void f_801F1D68(Ctx* __restrict c) {
  trace_call(0x801F1D68u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F1D68
  c->r[0]=c->lr; // 801F1D6C
  c->r[4]=0u+0x00000000u; // 801F1D70
  c->r[5]=0u+0x00000144u; // 801F1D74
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F1D78
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F1D7C
  c->r[31]=0u+0x80310000u; // 801F1D80
  c->r[3]=c->r[31]+0xFFFFB390u; // 801F1D84
  c->lr=0x801F1D8Cu; f_800046B4(c); // 801F1D88
  c->r[3]=0u+0x801F0000u; // 801F1D8C
  c->r[5]=c->r[31]+0xFFFFB390u; // 801F1D90
  c->r[6]=0u+0x00000001u; // 801F1D94
  c->r[4]=0u+0x00000040u; // 801F1D98
  c->r[3]=c->r[3]+0x00001E90u; // 801F1D9C
  c->r[0]=0u+0x00000000u; // 801F1DA0
  W8(c->r[5]+0x000000CAu,c->r[6]); // 801F1DA4
  W16(c->r[5]+0x000000CCu,c->r[4]); // 801F1DA8
  W8(c->r[5]+0x00000106u,c->r[6]); // 801F1DAC
  W16(c->r[5]+0x00000108u,c->r[4]); // 801F1DB0
  W32(c->r[5]+0x0000002Cu,c->r[3]); // 801F1DB4
  W8(c->r[5]+0x00000141u,c->r[0]); // 801F1DB8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F1DBC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F1DC0
  c->lr=c->r[0]; // 801F1DC4
  c->r[1]=c->r[1]+0x00000010u; // 801F1DC8
  return; // 801F1DCC
}

// hidd_conn_initiate
void f_801F1DD0(Ctx* __restrict c) {
  trace_call(0x801F1DD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F1DD0
  c->r[0]=c->lr; // 801F1DD4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801F1DD8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801F1DDC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801F1DE0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801F1DE4
  c->r[29]=0u+0x80310000u; // 801F1DE8
  c->r[29]=c->r[29]+0xFFFFB390u; // 801F1DEC
  c->r[0]=R8(c->r[29]+0x00000141u); // 801F1DF0
  cmpu(c,0,c->r[0],0x00000004u); // 801F1DF4
  if (crb(c,0)) { goto L_801F1E10; } // 801F1DF8
  c->r[3]=0u+0x001E0000u; // 801F1DFC
  c->r[4]=0u+0x80280000u; // 801F1E00
  c->r[3]=c->r[3]+0x00000003u; // 801F1E04
  c->r[4]=c->r[4]+0x000007C8u; // 801F1E08
  c->lr=0x801F1E10u; f_801DC730(c); // 801F1E0C
L_801F1E10:;
  c->r[0]=0u+0x00000000u; // 801F1E10
  c->r[30]=0u+0x00000001u; // 801F1E14
  c->r[31]=0u+0x80310000u; // 801F1E18
  W16(c->r[29]+0x00000014u,c->r[0]); // 801F1E1C
  c->r[4]=c->r[31]+0xFFFFB390u; // 801F1E20
  c->r[3]=0u+0x00000011u; // 801F1E24
  W16(c->r[29]+0x00000016u,c->r[0]); // 801F1E28
  W8(c->r[29]+0x00000011u,c->r[30]); // 801F1E2C
  c->lr=0x801F1E34u; f_801F52C0(c); // 801F1E30
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801F1E34
  W16(c->r[29]+0x00000014u,c->r[3]); // 801F1E38
  if (!crb(c,2)) { goto L_801F1E6C; } // 801F1E3C
  c->r[3]=c->r[31]+0xFFFFB390u; // 801F1E40
  c->r[0]=R8(c->r[3]+0x00000141u); // 801F1E44
  cmpu(c,0,c->r[0],0x00000002u); // 801F1E48
  if (crb(c,0)) { goto L_801F1E64; } // 801F1E4C
  c->r[3]=0u+0x001E0000u; // 801F1E50
  c->r[4]=0u+0x80280000u; // 801F1E54
  c->r[3]=c->r[3]+0x00000001u; // 801F1E58
  c->r[4]=c->r[4]+0x000007E0u; // 801F1E5C
  c->lr=0x801F1E64u; f_801DC730(c); // 801F1E60
L_801F1E64:;
  c->r[3]=0u+0x0000000Eu; // 801F1E64
  goto L_801F1E74; // 801F1E68
L_801F1E6C:;
  W8(c->r[29]+0x00000010u,c->r[30]); // 801F1E6C
  c->r[3]=0u+0x00000000u; // 801F1E70
L_801F1E74:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801F1E74
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801F1E78
  c->r[30]=R32(c->r[1]+0x00000018u); // 801F1E7C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801F1E80
  c->lr=c->r[0]; // 801F1E84
  c->r[1]=c->r[1]+0x00000020u; // 801F1E88
  return; // 801F1E8C
}

