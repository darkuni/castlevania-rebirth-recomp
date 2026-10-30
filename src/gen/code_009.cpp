#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_800CDE60
void f_800CDE60(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CDE60
  c->r[0]=c->lr; // 800CDE64
  cmps(c,0,(int32_t)c->r[3],0); // 800CDE68
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CDE6C
  if (crb(c,2)) { goto L_800CDE88; } // 800CDE70
  cmps(c,0,(int32_t)c->r[3],1); // 800CDE74
  if (crb(c,2)) { goto L_800CDE90; } // 800CDE78
  cmps(c,0,(int32_t)c->r[3],2); // 800CDE7C
  if (crb(c,2)) { goto L_800CDE98; } // 800CDE80
  goto L_800CDEA0; // 800CDE84
L_800CDE88:;
  c->r[3]=0u+0x00000001u; // 800CDE88
  goto L_800CDEC0; // 800CDE8C
L_800CDE90:;
  c->r[3]=0u+0x00000002u; // 800CDE90
  goto L_800CDEC0; // 800CDE94
L_800CDE98:;
  c->r[3]=0u+0x00000003u; // 800CDE98
  goto L_800CDEC0; // 800CDE9C
L_800CDEA0:;
  c->r[3]=0u+0x80250000u; // 800CDEA0
  c->r[5]=0u+0x80250000u; // 800CDEA4
  c->r[3]=c->r[3]+0x00005D08u; // 800CDEA8
  c->r[4]=0u+0x0000005Bu; // 800CDEAC
  c->r[5]=c->r[5]+0x00005D18u; // 800CDEB0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CDEB4
  c->lr=0x800CDEBCu; f_800F1300(c); // 800CDEB8
  c->r[3]=0u+0x00000001u; // 800CDEBC
L_800CDEC0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CDEC0
  c->lr=c->r[0]; // 800CDEC4
  c->r[1]=c->r[1]+0x00000010u; // 800CDEC8
  return; // 800CDECC
}

// fn_800CDED0
void f_800CDED0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CDED0
  c->r[0]=c->lr; // 800CDED4
  cmps(c,0,(int32_t)c->r[3],0); // 800CDED8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CDEDC
  if (crb(c,2)) { goto L_800CDEF8; } // 800CDEE0
  cmps(c,0,(int32_t)c->r[3],1); // 800CDEE4
  if (crb(c,2)) { goto L_800CDF00; } // 800CDEE8
  cmps(c,0,(int32_t)c->r[3],2); // 800CDEEC
  if (crb(c,2)) { goto L_800CDF08; } // 800CDEF0
  goto L_800CDF10; // 800CDEF4
L_800CDEF8:;
  c->r[3]=c->r[13]+0xFFFF9E9Cu; // 800CDEF8
  goto L_800CDF30; // 800CDEFC
L_800CDF00:;
  c->r[3]=c->r[13]+0xFFFF9EA0u; // 800CDF00
  goto L_800CDF30; // 800CDF04
L_800CDF08:;
  c->r[3]=c->r[13]+0xFFFF9EA8u; // 800CDF08
  goto L_800CDF30; // 800CDF0C
L_800CDF10:;
  c->r[3]=0u+0x80250000u; // 800CDF10
  c->r[5]=0u+0x80250000u; // 800CDF14
  c->r[3]=c->r[3]+0x00005D08u; // 800CDF18
  c->r[4]=0u+0x0000006Bu; // 800CDF1C
  c->r[5]=c->r[5]+0x00005D18u; // 800CDF20
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CDF24
  c->lr=0x800CDF2Cu; f_800F1300(c); // 800CDF28
  c->r[3]=c->r[13]+0xFFFF9EB0u; // 800CDF2C
L_800CDF30:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CDF30
  c->lr=c->r[0]; // 800CDF34
  c->r[1]=c->r[1]+0x00000010u; // 800CDF38
  return; // 800CDF3C
}

// fn_800CDF40
void f_800CDF40(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF9A90u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CDF40
  c->r[4]=0u+0x00000000u; // 800CDF44
  {uint32_t ea=c->r[2]+0xFFFF9A98u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CDF48
  c->r[5]=0u+0x80220000u; // 800CDF4C
  c->r[5]=c->r[5]+0x00000D20u; // 800CDF50
  {uint32_t ea=c->r[2]+0xFFFF9A94u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CDF54
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 800CDF58
  {uint32_t ea=c->r[5]+0x000001FCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CDF5C
  c->r[0]=0u+0x0000007Fu; // 800CDF60
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[1]);} // 800CDF64
  W16(c->r[3]+0x00000016u,c->r[4]); // 800CDF68
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[2]);} // 800CDF6C
  W8(c->r[3]+0x00000014u,c->r[0]); // 800CDF70
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[2]);} // 800CDF74
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 800CDF78
  W32(c->r[3]+0x00000000u,c->r[4]); // 800CDF7C
  return; // 800CDF80
}

// fn_800CDF90
void f_800CDF90(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF9A98u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CDF90
  c->r[4]=0u+0x00000000u; // 800CDF94
  c->r[5]=0u+0x80220000u; // 800CDF98
  {uint32_t ea=c->r[2]+0xFFFF9A94u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CDF9C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 800CDFA0
  c->r[5]=c->r[5]+0x00000D20u; // 800CDFA4
  {uint32_t ea=c->r[5]+0x000001FCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CDFA8
  c->r[0]=0u+0x0000007Fu; // 800CDFAC
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[1]);} // 800CDFB0
  W16(c->r[3]+0x00000016u,c->r[4]); // 800CDFB4
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[2]);} // 800CDFB8
  W8(c->r[3]+0x00000014u,c->r[0]); // 800CDFBC
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[2]);} // 800CDFC0
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 800CDFC4
  W32(c->r[3]+0x00000000u,c->r[4]); // 800CDFC8
  return; // 800CDFCC
}

// fn_800CDFD0
void f_800CDFD0(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF9A98u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CDFD0
  c->r[0]=0u+0x00000000u; // 800CDFD4
  W32(c->r[3]+0x00000000u,c->r[0]); // 800CDFD8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 800CDFDC
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 800CDFE0
  return; // 800CDFE4
}

// fn_800CDFF0
void f_800CDFF0(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000000u); // 800CDFF0
  cmps(c,0,(int32_t)c->r[0],0); // 800CDFF4
  if (!crb(c,2)) { goto L_800CE00C; } // 800CDFF8
  {uint32_t ea=c->r[2]+0xFFFF9A9Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CDFFC
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CE000
  fcmp(c,0,c->f[1],c->f[0]); // 800CE004
  if (crb(c,2)) return; // 800CE008
L_800CE00C:;
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CE00C
  {uint32_t ea=c->r[2]+0xFFFF9A98u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CE010
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 800CE014
  return; // 800CE018
}

// fn_800CE020
void f_800CE020(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CE020
  c->r[0]=c->lr; // 800CE024
  W32(c->r[1]+0x00000034u,c->r[0]); // 800CE028
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800CE02C
  W32(c->r[1]+0x00000028u,c->r[30]); // 800CE030
  c->r[30]=c->r[4]|c->r[4]; // 800CE034
  W32(c->r[1]+0x00000024u,c->r[29]); // 800CE038
  c->r[29]=c->r[3]|c->r[3]; // 800CE03C
  c->r[0]=R32(c->r[3]+0x00000000u); // 800CE040
  cmps(c,0,(int32_t)c->r[0],0); // 800CE044
  if (crb(c,2)) { goto L_800CE068; } // 800CE048
  cmps(c,0,(int32_t)c->r[0],1); // 800CE04C
  if (crb(c,2)) { goto L_800CE0B4; } // 800CE050
  cmps(c,0,(int32_t)c->r[0],2); // 800CE054
  if (crb(c,2)) { goto L_800CE0EC; } // 800CE058
  cmps(c,0,(int32_t)c->r[0],4); // 800CE05C
  if (crb(c,2)) { goto L_800CE19C; } // 800CE060
  goto L_800CE1CC; // 800CE064
L_800CE068:;
  {uint32_t ea=c->r[2]+0xFFFF9AA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CE068
  c->ctr=c->r[4]; // 800CE06C
  cmps(c,0,(int32_t)c->r[4],0); // 800CE070
  if (!crb(c,1)) { goto L_800CE1CC; } // 800CE074
L_800CE078:;
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CE078
  {uint32_t ea=c->r[3]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CE07C
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800CE080
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 800CE084
  fcmp(c,0,c->f[1],c->f[0]); // 800CE088
  if (!crb(c,1)) { goto L_800CE0AC; } // 800CE08C
  {uint32_t ea=c->r[2]+0xFFFF9A9Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CE090
  c->r[4]=0u+0x00000001u; // 800CE094
  c->r[0]=R16(c->r[3]+0x00000016u); // 800CE098
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 800CE09C
  W32(c->r[3]+0x00000000u,c->r[4]); // 800CE0A0
  W16(c->r[3]+0x00000018u,c->r[0]); // 800CE0A4
  goto L_800CE1CC; // 800CE0A8
L_800CE0AC:;
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CE078; } // 800CE0AC
  goto L_800CE1CC; // 800CE0B0
L_800CE0B4:;
  c->r[6]=R16(c->r[3]+0x00000018u); // 800CE0B4
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[6]); // 800CE0B8
  if (!crb(c,0)) { goto L_800CE0CC; } // 800CE0BC
  c->r[0]=c->r[6]-c->r[4]; // 800CE0C0
  W16(c->r[3]+0x00000018u,c->r[0]); // 800CE0C4
  goto L_800CE0E0; // 800CE0C8
L_800CE0CC:;
  c->r[5]=0u+0x00000000u; // 800CE0CC
  c->r[0]=0u+0x00000002u; // 800CE0D0
  W16(c->r[3]+0x00000018u,c->r[5]); // 800CE0D4
  c->r[30]=c->r[4]-c->r[6]; // 800CE0D8
  W32(c->r[3]+0x00000000u,c->r[0]); // 800CE0DC
L_800CE0E0:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800CE0E0
  cmps(c,0,(int32_t)c->r[0],2); // 800CE0E4
  if (!crb(c,2)) { goto L_800CE1CC; } // 800CE0E8
L_800CE0EC:;
  c->r[31]=R8(c->r[3]+0x00000014u); // 800CE0EC
  c->r[0]=0u+0x00000000u; // 800CE0F0
  cmpu(c,0,c->r[31],0x0000007Fu); // 800CE0F4
  if (crb(c,1)) { goto L_800CE100; } // 800CE0F8
  c->r[0]=0u+0x00000001u; // 800CE0FC
L_800CE100:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CE100
  if (!crb(c,2)) { goto L_800CE130; } // 800CE104
  c->r[3]=0u+0x80250000u; // 800CE108
  c->r[5]=0u+0x80250000u; // 800CE10C
  c->r[6]=c->r[31]|c->r[31]; // 800CE110
  c->r[4]=0u+0x00000160u; // 800CE114
  c->r[3]=c->r[3]+0x00005D38u; // 800CE118
  c->r[5]=c->r[5]+0x00005D50u; // 800CE11C
  c->r[7]=0u+0x00000000u; // 800CE120
  c->r[8]=0u+0x0000007Fu; // 800CE124
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CE128
  c->lr=0x800CE130u; f_800F1300(c); // 800CE12C
L_800CE130:;
  c->r[3]=0u+0x43300000u; // 800CE130
  c->r[0]=c->r[30]^0x80000000u; // 800CE134
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CE138
  c->r[4]=0u+0x80220000u; // 800CE13C
  {uint32_t ea=c->r[2]+0xFFFF9AA8u; c->f[3]=RF64(ea);} // 800CE140
  c->r[0]=rotl(c->r[31],1)&0xFFFFFFFEu; // 800CE144
  W32(c->r[1]+0x00000010u,c->r[3]); // 800CE148
  c->r[4]=c->r[4]+0x00000C20u; // 800CE14C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+c->r[0]); // 800CE150
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 800CE154
  c->r[0]=c->r[0]^0x80000000u; // 800CE158
  {uint32_t ea=c->r[29]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CE15C
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[3]); // 800CE160
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800CE164
  {uint32_t ea=c->r[29]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CE168
  W32(c->r[1]+0x00000008u,c->r[3]); // 800CE16C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 800CE170
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 800CE174
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800CE178
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[3]); // 800CE17C
  {uint32_t ea=c->r[29]+0x00000004u; WF32(ea,c->f[0]);} // 800CE180
  fcmp(c,0,c->f[0],c->f[1]); // 800CE184
  if (!crb(c,0)) { goto L_800CE1CC; } // 800CE188
  c->r[0]=0u+0x00000003u; // 800CE18C
  {uint32_t ea=c->r[29]+0x00000004u; WF32(ea,c->f[1]);} // 800CE190
  W32(c->r[29]+0x00000000u,c->r[0]); // 800CE194
  goto L_800CE1CC; // 800CE198
L_800CE19C:;
  c->r[4]=c->r[4]^0x80000000u; // 800CE19C
  c->r[0]=0u+0x43300000u; // 800CE1A0
  W32(c->r[1]+0x00000014u,c->r[4]); // 800CE1A4
  {uint32_t ea=c->r[2]+0xFFFF9AA8u; c->f[3]=RF64(ea);} // 800CE1A8
  W32(c->r[1]+0x00000010u,c->r[0]); // 800CE1AC
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CE1B0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 800CE1B4
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CE1B8
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 800CE1BC
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 800CE1C0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800CE1C4
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 800CE1C8
L_800CE1CC:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800CE1CC
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800CE1D0
  c->r[30]=R32(c->r[1]+0x00000028u); // 800CE1D4
  c->r[29]=R32(c->r[1]+0x00000024u); // 800CE1D8
  c->lr=c->r[0]; // 800CE1DC
  c->r[1]=c->r[1]+0x00000030u; // 800CE1E0
  return; // 800CE1E4
}

// fn_800CE1F0
void f_800CE1F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CE1F0
  c->r[0]=c->lr; // 800CE1F4
  cmpu(c,0,c->r[4],0x0000007Fu); // 800CE1F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CE1FC
  c->r[0]=0u+0x00000000u; // 800CE200
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CE204
  c->r[31]=c->r[4]|c->r[4]; // 800CE208
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CE20C
  c->r[30]=c->r[3]|c->r[3]; // 800CE210
  if (crb(c,1)) { goto L_800CE21C; } // 800CE214
  c->r[0]=0u+0x00000001u; // 800CE218
L_800CE21C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CE21C
  if (!crb(c,2)) { goto L_800CE24C; } // 800CE220
  c->r[3]=0u+0x80250000u; // 800CE224
  c->r[5]=0u+0x80250000u; // 800CE228
  c->r[6]=c->r[31]|c->r[31]; // 800CE22C
  c->r[4]=0u+0x00000107u; // 800CE230
  c->r[3]=c->r[3]+0x00005D38u; // 800CE234
  c->r[5]=c->r[5]+0x00005D8Cu; // 800CE238
  c->r[7]=0u+0x00000000u; // 800CE23C
  c->r[8]=0u+0x0000007Fu; // 800CE240
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CE244
  c->lr=0x800CE24Cu; f_800F1300(c); // 800CE248
L_800CE24C:;
  c->r[3]=0u+0x80220000u; // 800CE24C
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800CE250
  c->r[3]=c->r[3]+0x00000D20u; // 800CE254
  {uint32_t ea=c->r[3]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 800CE258
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[0]);} // 800CE25C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CE260
  c->r[30]=R32(c->r[1]+0x00000008u); // 800CE264
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CE268
  c->lr=c->r[0]; // 800CE26C
  c->r[1]=c->r[1]+0x00000010u; // 800CE270
  return; // 800CE274
}

// fn_800CE280
void f_800CE280(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CE280
  c->r[0]=c->lr; // 800CE284
  cmpu(c,0,c->r[4],0x0000007Fu); // 800CE288
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CE28C
  c->r[0]=0u+0x00000000u; // 800CE290
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CE294
  c->r[31]=c->r[4]|c->r[4]; // 800CE298
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CE29C
  c->r[30]=c->r[3]|c->r[3]; // 800CE2A0
  if (crb(c,1)) { goto L_800CE2AC; } // 800CE2A4
  c->r[0]=0u+0x00000001u; // 800CE2A8
L_800CE2AC:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CE2AC
  if (!crb(c,2)) { goto L_800CE2DC; } // 800CE2B0
  c->r[3]=0u+0x80250000u; // 800CE2B4
  c->r[5]=0u+0x80250000u; // 800CE2B8
  c->r[6]=c->r[31]|c->r[31]; // 800CE2BC
  c->r[4]=0u+0x00000116u; // 800CE2C0
  c->r[3]=c->r[3]+0x00005D38u; // 800CE2C4
  c->r[5]=c->r[5]+0x00005DCCu; // 800CE2C8
  c->r[7]=0u+0x00000000u; // 800CE2CC
  c->r[8]=0u+0x0000007Fu; // 800CE2D0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CE2D4
  c->lr=0x800CE2DCu; f_800F1300(c); // 800CE2D8
L_800CE2DC:;
  c->r[0]=c->r[31]+0x00000001u; // 800CE2DC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[0]); // 800CE2E0
  c->r[0]=sraw(c,c->r[0],2); // 800CE2E4
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 800CE2E8
  W16(c->r[30]+0x00000016u,c->r[0]); // 800CE2EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CE2F0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800CE2F4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CE2F8
  c->lr=c->r[0]; // 800CE2FC
  c->r[1]=c->r[1]+0x00000010u; // 800CE300
  return; // 800CE304
}

// fn_800CE310
void f_800CE310(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CE310
  c->r[0]=c->lr; // 800CE314
  cmpu(c,0,c->r[4],0x0000007Fu); // 800CE318
  W32(c->r[1]+0x00000034u,c->r[0]); // 800CE31C
  c->r[0]=0u+0x00000000u; // 800CE320
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800CE324
  c->r[31]=0u+0x80250000u; // 800CE328
  c->r[31]=c->r[31]+0x00005D38u; // 800CE32C
  W32(c->r[1]+0x00000028u,c->r[30]); // 800CE330
  c->r[30]=c->r[4]|c->r[4]; // 800CE334
  W32(c->r[1]+0x00000024u,c->r[29]); // 800CE338
  c->r[29]=c->r[3]|c->r[3]; // 800CE33C
  if (crb(c,1)) { goto L_800CE348; } // 800CE340
  c->r[0]=0u+0x00000001u; // 800CE344
L_800CE348:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CE348
  if (!crb(c,2)) { goto L_800CE370; } // 800CE34C
  c->r[6]=c->r[30]|c->r[30]; // 800CE350
  c->r[3]=c->r[31]+0x00000000u; // 800CE354
  c->r[5]=c->r[31]+0x000000D0u; // 800CE358
  c->r[4]=0u+0x00000126u; // 800CE35C
  c->r[7]=0u+0x00000000u; // 800CE360
  c->r[8]=0u+0x0000007Fu; // 800CE364
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CE368
  c->lr=0x800CE370u; f_800F1300(c); // 800CE36C
L_800CE370:;
  cmpu(c,0,c->r[30],0x0000007Fu); // 800CE370
  c->r[0]=0u+0x00000000u; // 800CE374
  if (crb(c,1)) { goto L_800CE380; } // 800CE378
  c->r[0]=0u+0x00000001u; // 800CE37C
L_800CE380:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CE380
  if (!crb(c,2)) { goto L_800CE3A8; } // 800CE384
  c->r[6]=c->r[30]|c->r[30]; // 800CE388
  c->r[3]=c->r[31]+0x00000000u; // 800CE38C
  c->r[5]=c->r[31]+0x00000110u; // 800CE390
  c->r[4]=0u+0x00000151u; // 800CE394
  c->r[7]=0u+0x00000000u; // 800CE398
  c->r[8]=0u+0x0000007Fu; // 800CE39C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CE3A0
  c->lr=0x800CE3A8u; f_800F1300(c); // 800CE3A4
L_800CE3A8:;
  cmps(c,0,(int32_t)c->r[30],127); // 800CE3A8
  if (!crb(c,2)) { goto L_800CE3B8; } // 800CE3AC
  {uint32_t ea=c->r[2]+0xFFFF9A94u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CE3B0
  goto L_800CE438; // 800CE3B4
L_800CE3B8:;
  cmps(c,0,(int32_t)c->r[30],126); // 800CE3B8
  if (!crb(c,2)) { goto L_800CE3C8; } // 800CE3BC
  {uint32_t ea=c->r[2]+0xFFFF9AB0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CE3C0
  goto L_800CE438; // 800CE3C4
L_800CE3C8:;
  cmps(c,0,(int32_t)c->r[30],50); // 800CE3C8
  if (!crb(c,0)) { goto L_800CE408; } // 800CE3CC
  c->r[3]=rotl(c->r[30],1)&0xFFFFFFFEu; // 800CE3D0
  c->r[0]=0u+0x43300000u; // 800CE3D4
  c->r[3]=c->r[3]+0x00000001u; // 800CE3D8
  W32(c->r[1]+0x00000008u,c->r[0]); // 800CE3DC
  c->r[0]=c->r[3]^0x80000000u; // 800CE3E0
  {uint32_t ea=c->r[2]+0xFFFF9AA8u; c->f[3]=RF64(ea);} // 800CE3E4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800CE3E8
  {uint32_t ea=c->r[2]+0xFFFF9AB4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CE3EC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 800CE3F0
  {uint32_t ea=c->r[2]+0xFFFF9AB8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CE3F4
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 800CE3F8
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800CE3FC
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 800CE400
  goto L_800CE438; // 800CE404
L_800CE408:;
  c->r[3]=addc(c,~c->r[30],0x0000007Eu,1); // 800CE408
  c->r[0]=0u+0x43300000u; // 800CE40C
  c->r[3]=c->r[3]^0x80000000u; // 800CE410
  W32(c->r[1]+0x00000014u,c->r[3]); // 800CE414
  {uint32_t ea=c->r[2]+0xFFFF9AA8u; c->f[3]=RF64(ea);} // 800CE418
  W32(c->r[1]+0x00000010u,c->r[0]); // 800CE41C
  {uint32_t ea=c->r[2]+0xFFFF9ABCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CE420
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 800CE424
  {uint32_t ea=c->r[2]+0xFFFF9AB8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CE428
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 800CE42C
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 800CE430
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 800CE434
L_800CE438:;
  {uint32_t ea=c->r[29]+0x00000008u; WF32(ea,c->f[0]);} // 800CE438
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800CE43C
  c->r[30]=R32(c->r[1]+0x00000028u); // 800CE440
  c->r[29]=R32(c->r[1]+0x00000024u); // 800CE444
  c->r[0]=R32(c->r[1]+0x00000034u); // 800CE448
  c->lr=c->r[0]; // 800CE44C
  c->r[1]=c->r[1]+0x00000030u; // 800CE450
  return; // 800CE454
}

// fn_800CE460
void f_800CE460(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CE460
  c->r[0]=c->lr; // 800CE464
  cmpu(c,0,c->r[4],0x0000007Fu); // 800CE468
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CE46C
  c->r[0]=0u+0x00000000u; // 800CE470
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CE474
  c->r[31]=c->r[4]|c->r[4]; // 800CE478
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CE47C
  c->r[30]=c->r[3]|c->r[3]; // 800CE480
  if (crb(c,1)) { goto L_800CE48C; } // 800CE484
  c->r[0]=0u+0x00000001u; // 800CE488
L_800CE48C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CE48C
  if (!crb(c,2)) { goto L_800CE4BC; } // 800CE490
  c->r[3]=0u+0x80250000u; // 800CE494
  c->r[5]=0u+0x80250000u; // 800CE498
  c->r[6]=c->r[31]|c->r[31]; // 800CE49C
  c->r[4]=0u+0x00000136u; // 800CE4A0
  c->r[3]=c->r[3]+0x00005D38u; // 800CE4A4
  c->r[5]=c->r[5]+0x00005E88u; // 800CE4A8
  c->r[7]=0u+0x00000000u; // 800CE4AC
  c->r[8]=0u+0x0000007Fu; // 800CE4B0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CE4B4
  c->lr=0x800CE4BCu; f_800F1300(c); // 800CE4B8
L_800CE4BC:;
  W8(c->r[30]+0x00000014u,c->r[31]); // 800CE4BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CE4C0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800CE4C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CE4C8
  c->lr=c->r[0]; // 800CE4CC
  c->r[1]=c->r[1]+0x00000010u; // 800CE4D0
  return; // 800CE4D4
}

// fn_800CE4E0
void f_800CE4E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CE4E0
  c->r[0]=c->lr; // 800CE4E4
  cmpu(c,0,c->r[4],0x0000007Fu); // 800CE4E8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CE4EC
  c->r[0]=0u+0x00000000u; // 800CE4F0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CE4F4
  c->r[31]=c->r[4]|c->r[4]; // 800CE4F8
  W32(c->r[1]+0x00000018u,c->r[30]); // 800CE4FC
  c->r[30]=c->r[3]|c->r[3]; // 800CE500
  if (crb(c,1)) { goto L_800CE50C; } // 800CE504
  c->r[0]=0u+0x00000001u; // 800CE508
L_800CE50C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CE50C
  if (!crb(c,2)) { goto L_800CE53C; } // 800CE510
  c->r[3]=0u+0x80250000u; // 800CE514
  c->r[5]=0u+0x80250000u; // 800CE518
  c->r[6]=c->r[31]|c->r[31]; // 800CE51C
  c->r[4]=0u+0x00000146u; // 800CE520
  c->r[3]=c->r[3]+0x00005D38u; // 800CE524
  c->r[5]=c->r[5]+0x00005E48u; // 800CE528
  c->r[7]=0u+0x00000000u; // 800CE52C
  c->r[8]=0u+0x0000007Fu; // 800CE530
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CE534
  c->lr=0x800CE53Cu; f_800F1300(c); // 800CE538
L_800CE53C:;
  cmpu(c,0,c->r[31],0x0000007Fu); // 800CE53C
  c->r[0]=0u+0x00000000u; // 800CE540
  if (crb(c,1)) { goto L_800CE54C; } // 800CE544
  c->r[0]=0u+0x00000001u; // 800CE548
L_800CE54C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CE54C
  if (!crb(c,2)) { goto L_800CE57C; } // 800CE550
  c->r[3]=0u+0x80250000u; // 800CE554
  c->r[5]=0u+0x80250000u; // 800CE558
  c->r[6]=c->r[31]|c->r[31]; // 800CE55C
  c->r[4]=0u+0x00000151u; // 800CE560
  c->r[3]=c->r[3]+0x00005D38u; // 800CE564
  c->r[5]=c->r[5]+0x00005E48u; // 800CE568
  c->r[7]=0u+0x00000000u; // 800CE56C
  c->r[8]=0u+0x0000007Fu; // 800CE570
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CE574
  c->lr=0x800CE57Cu; f_800F1300(c); // 800CE578
L_800CE57C:;
  cmps(c,0,(int32_t)c->r[31],127); // 800CE57C
  if (!crb(c,2)) { goto L_800CE58C; } // 800CE580
  {uint32_t ea=c->r[2]+0xFFFF9A94u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CE584
  goto L_800CE60C; // 800CE588
L_800CE58C:;
  cmps(c,0,(int32_t)c->r[31],126); // 800CE58C
  if (!crb(c,2)) { goto L_800CE59C; } // 800CE590
  {uint32_t ea=c->r[2]+0xFFFF9AB0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CE594
  goto L_800CE60C; // 800CE598
L_800CE59C:;
  cmps(c,0,(int32_t)c->r[31],50); // 800CE59C
  if (!crb(c,0)) { goto L_800CE5DC; } // 800CE5A0
  c->r[3]=rotl(c->r[31],1)&0xFFFFFFFEu; // 800CE5A4
  c->r[0]=0u+0x43300000u; // 800CE5A8
  c->r[3]=c->r[3]+0x00000001u; // 800CE5AC
  W32(c->r[1]+0x00000008u,c->r[0]); // 800CE5B0
  c->r[0]=c->r[3]^0x80000000u; // 800CE5B4
  {uint32_t ea=c->r[2]+0xFFFF9AA8u; c->f[3]=RF64(ea);} // 800CE5B8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800CE5BC
  {uint32_t ea=c->r[2]+0xFFFF9AB4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CE5C0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 800CE5C4
  {uint32_t ea=c->r[2]+0xFFFF9AB8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CE5C8
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 800CE5CC
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800CE5D0
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 800CE5D4
  goto L_800CE60C; // 800CE5D8
L_800CE5DC:;
  c->r[3]=addc(c,~c->r[31],0x0000007Eu,1); // 800CE5DC
  c->r[0]=0u+0x43300000u; // 800CE5E0
  c->r[3]=c->r[3]^0x80000000u; // 800CE5E4
  W32(c->r[1]+0x00000014u,c->r[3]); // 800CE5E8
  {uint32_t ea=c->r[2]+0xFFFF9AA8u; c->f[3]=RF64(ea);} // 800CE5EC
  W32(c->r[1]+0x00000010u,c->r[0]); // 800CE5F0
  {uint32_t ea=c->r[2]+0xFFFF9ABCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CE5F4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 800CE5F8
  {uint32_t ea=c->r[2]+0xFFFF9AB8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CE5FC
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 800CE600
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 800CE604
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 800CE608
L_800CE60C:;
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[0]);} // 800CE60C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CE610
  c->r[30]=R32(c->r[1]+0x00000018u); // 800CE614
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CE618
  c->lr=c->r[0]; // 800CE61C
  c->r[1]=c->r[1]+0x00000020u; // 800CE620
  return; // 800CE624
}

// fn_800CE630
void f_800CE630(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CE630
  c->r[0]=c->lr; // 800CE634
  W32(c->r[1]+0x00000054u,c->r[0]); // 800CE638
  c->r[11]=c->r[1]+0x00000050u; // 800CE63C
  c->lr=0x800CE644u; { W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CE640
  cmps(c,0,(int32_t)c->r[4],0); // 800CE644
  c->r[26]=c->r[3]|c->r[3]; // 800CE648
  c->r[27]=c->r[4]|c->r[4]; // 800CE64C
  if (!crb(c,2)) { goto L_800CE670; } // 800CE650
  c->r[3]=0u+0x80250000u; // 800CE654
  c->r[5]=0u+0x80250000u; // 800CE658
  c->r[3]=c->r[3]+0x00005EC8u; // 800CE65C
  c->r[4]=0u+0x00000081u; // 800CE660
  c->r[5]=c->r[5]+0x00005EE4u; // 800CE664
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CE668
  c->lr=0x800CE670u; f_800F1300(c); // 800CE66C
L_800CE670:;
  c->lr=0x800CE674u; f_800DD3D0(c); // 800CE670
  c->r[3]=c->r[3]+0x00000354u; // 800CE674
  c->lr=0x800CE67Cu; f_8018E950(c); // 800CE678
  c->r[3]=R8(c->r[27]+0x00000098u); // 800CE67C
  c->r[0]=R32(c->r[27]+0x00000050u); // 800CE680
  c->r[3]=c->r[3]+c->r[0]; // 800CE684
  cmps(c,0,(int32_t)c->r[3],127); // 800CE688
  if (!crb(c,1)) { goto L_800CE698; } // 800CE68C
  c->r[28]=0u+0x0000007Fu; // 800CE690
  goto L_800CE6A0; // 800CE694
L_800CE698:;
  c->r[0]=sraw(c,c->r[3],31); // 800CE698
  c->r[28]=c->r[3]&~c->r[0]; // 800CE69C
L_800CE6A0:;
  c->r[0]=R32(c->r[26]+0x0000000Cu); // 800CE6A0
  cmps(c,0,(int32_t)c->r[0],0); // 800CE6A4
  if (!crb(c,2)) { goto L_800CE6C0; } // 800CE6A8
  c->lr=0x800CE6B0u; f_800DD3D0(c); // 800CE6AC
  c->r[3]=c->r[3]+0x00000354u; // 800CE6B0
  c->lr=0x800CE6B8u; f_8018EA30(c); // 800CE6B4
  c->r[3]=0u+0x00000000u; // 800CE6B8
  goto L_800CE858; // 800CE6BC
L_800CE6C0:;
  c->r[24]=c->r[26]+0x00000004u; // 800CE6C0
  c->r[30]=0u+0x80250000u; // 800CE6C4
  c->r[31]=0u+0x80250000u; // 800CE6C8
  c->r[22]=0u+0x80250000u; // 800CE6CC
  c->r[23]=0u+0x80250000u; // 800CE6D0
  goto L_800CE7F0; // 800CE6D4
L_800CE6D8:;
  c->r[25]=R32(c->r[26]+0x00000004u); // 800CE6D8
  c->r[21]=0u+0x00000080u; // 800CE6DC
  c->r[29]=0u+0x00000000u; // 800CE6E0
  goto L_800CE778; // 800CE6E4
L_800CE6E8:;
  cmps(c,0,(int32_t)c->r[25],0); // 800CE6E8
  if (!crb(c,2)) { goto L_800CE704; } // 800CE6EC
  c->r[3]=c->r[30]+0x00005F90u; // 800CE6F0
  c->r[5]=c->r[31]+0x00005F6Cu; // 800CE6F4
  c->r[4]=0u+0x0000023Du; // 800CE6F8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CE6FC
  c->lr=0x800CE704u; f_800F1300(c); // 800CE700
L_800CE704:;
  c->r[3]=R8(c->r[25]+0xFFFFFF90u); // 800CE704
  c->r[19]=c->r[25]+0xFFFFFEF8u; // 800CE708
  c->r[0]=R32(c->r[25]+0xFFFFFF48u); // 800CE70C
  c->r[3]=c->r[3]+c->r[0]; // 800CE710
  cmps(c,0,(int32_t)c->r[3],127); // 800CE714
  if (!crb(c,1)) { goto L_800CE724; } // 800CE718
  c->r[20]=0u+0x0000007Fu; // 800CE71C
  goto L_800CE72C; // 800CE720
L_800CE724:;
  c->r[0]=sraw(c,c->r[3],31); // 800CE724
  c->r[20]=c->r[3]&~c->r[0]; // 800CE728
L_800CE72C:;
  cmps(c,0,(int32_t)c->r[21],(int32_t)c->r[20]); // 800CE72C
  if (!crb(c,1)) { goto L_800CE774; } // 800CE730
  cmps(c,0,(int32_t)c->r[25],0); // 800CE734
  if (!crb(c,2)) { goto L_800CE750; } // 800CE738
  c->r[3]=c->r[30]+0x00005F90u; // 800CE73C
  c->r[5]=c->r[31]+0x00005F6Cu; // 800CE740
  c->r[4]=0u+0x0000023Du; // 800CE744
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CE748
  c->lr=0x800CE750u; f_800F1300(c); // 800CE74C
L_800CE750:;
  cmps(c,0,(int32_t)c->r[19],0); // 800CE750
  if (!crb(c,2)) { goto L_800CE76C; } // 800CE754
  c->r[3]=c->r[22]+0x00005F30u; // 800CE758
  c->r[5]=c->r[23]+0x00005F0Cu; // 800CE75C
  c->r[4]=0u+0x00000193u; // 800CE760
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CE764
  c->lr=0x800CE76Cu; f_800F1300(c); // 800CE768
L_800CE76C:;
  c->r[29]=c->r[19]|c->r[19]; // 800CE76C
  c->r[21]=c->r[20]|c->r[20]; // 800CE770
L_800CE774:;
  c->r[25]=R32(c->r[25]+0x00000000u); // 800CE774
L_800CE778:;
  cmpu(c,0,c->r[25],c->r[24]); // 800CE778
  if (!crb(c,2)) { IRQCHK(c); goto L_800CE6E8; } // 800CE77C
  cmps(c,0,(int32_t)c->r[29],0); // 800CE780
  if (!crb(c,2)) { goto L_800CE79C; } // 800CE784
  c->lr=0x800CE78Cu; f_800DD3D0(c); // 800CE788
  c->r[3]=c->r[3]+0x00000354u; // 800CE78C
  c->lr=0x800CE794u; f_8018EA30(c); // 800CE790
  c->r[3]=0u+0x00000000u; // 800CE794
  goto L_800CE858; // 800CE798
L_800CE79C:;
  c->r[3]=R8(c->r[29]+0x00000098u); // 800CE79C
  c->r[0]=R32(c->r[29]+0x00000050u); // 800CE7A0
  c->r[3]=c->r[3]+c->r[0]; // 800CE7A4
  cmps(c,0,(int32_t)c->r[3],127); // 800CE7A8
  if (!crb(c,1)) { goto L_800CE7B8; } // 800CE7AC
  c->r[0]=0u+0x0000007Fu; // 800CE7B0
  goto L_800CE7C0; // 800CE7B4
L_800CE7B8:;
  c->r[0]=sraw(c,c->r[3],31); // 800CE7B8
  c->r[0]=c->r[3]&~c->r[0]; // 800CE7BC
L_800CE7C0:;
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 800CE7C0
  if (!crb(c,0)) { goto L_800CE7DC; } // 800CE7C4
  c->lr=0x800CE7CCu; f_800DD3D0(c); // 800CE7C8
  c->r[3]=c->r[3]+0x00000354u; // 800CE7CC
  c->lr=0x800CE7D4u; f_8018EA30(c); // 800CE7D0
  c->r[3]=0u+0x00000000u; // 800CE7D4
  goto L_800CE858; // 800CE7D8
L_800CE7DC:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 800CE7DC
  c->r[3]=c->r[29]|c->r[29]; // 800CE7E0
  c->r[12]=R32(c->r[12]+0x00000010u); // 800CE7E4
  c->ctr=c->r[12]; // 800CE7E8
  if (true) { c->lr=0x800CE7F0u; dispatch(c,c->ctr); } // 800CE7EC
L_800CE7F0:;
  c->r[3]=R32(c->r[26]+0x00000000u); // 800CE7F0
  c->r[0]=R32(c->r[26]+0x0000000Cu); // 800CE7F4
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800CE7F8
  if (!crb(c,0)) { IRQCHK(c); goto L_800CE6D8; } // 800CE7FC
  cmps(c,0,(int32_t)c->r[27],0); // 800CE800
  c->r[24]=c->r[26]+0x00000004u; // 800CE804
  if (!crb(c,2)) { goto L_800CE828; } // 800CE808
  c->r[3]=0u+0x80250000u; // 800CE80C
  c->r[5]=0u+0x80250000u; // 800CE810
  c->r[3]=c->r[3]+0x00005F60u; // 800CE814
  c->r[4]=0u+0x00000233u; // 800CE818
  c->r[5]=c->r[5]+0x00005F3Cu; // 800CE81C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CE820
  c->lr=0x800CE828u; f_800F1300(c); // 800CE824
L_800CE828:;
  W32(c->r[1]+0x00000008u,c->r[24]); // 800CE828
  c->r[3]=c->r[26]|c->r[26]; // 800CE82C
  c->r[4]=c->r[1]+0x00000008u; // 800CE830
  c->r[5]=c->r[27]+0x00000108u; // 800CE834
  c->lr=0x800CE83Cu; f_800F1CC0(c); // 800CE838
  c->r[3]=c->r[27]|c->r[27]; // 800CE83C
  c->r[4]=c->r[26]|c->r[26]; // 800CE840
  c->lr=0x800CE848u; f_800CBD10(c); // 800CE844
  c->lr=0x800CE84Cu; f_800DD3D0(c); // 800CE848
  c->r[3]=c->r[3]+0x00000354u; // 800CE84C
  c->lr=0x800CE854u; f_8018EA30(c); // 800CE850
  c->r[3]=0u+0x00000001u; // 800CE854
L_800CE858:;
  c->r[11]=c->r[1]+0x00000050u; // 800CE858
  c->lr=0x800CE860u; { c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CE85C
  c->r[0]=R32(c->r[1]+0x00000054u); // 800CE860
  c->lr=c->r[0]; // 800CE864
  c->r[1]=c->r[1]+0x00000050u; // 800CE868
  return; // 800CE86C
}

// fn_800CE870
void f_800CE870(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CE870
  c->r[0]=c->lr; // 800CE874
  cmps(c,0,(int32_t)c->r[4],0); // 800CE878
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CE87C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CE880
  c->r[31]=c->r[4]|c->r[4]; // 800CE884
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CE888
  c->r[30]=c->r[3]|c->r[3]; // 800CE88C
  if (!crb(c,2)) { goto L_800CE8B0; } // 800CE890
  c->r[3]=0u+0x80250000u; // 800CE894
  c->r[5]=0u+0x80250000u; // 800CE898
  c->r[3]=c->r[3]+0x00005F60u; // 800CE89C
  c->r[4]=0u+0x00000233u; // 800CE8A0
  c->r[5]=c->r[5]+0x00005F3Cu; // 800CE8A4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CE8A8
  c->lr=0x800CE8B0u; f_800F1300(c); // 800CE8AC
L_800CE8B0:;
  c->r[3]=c->r[30]|c->r[30]; // 800CE8B0
  c->r[4]=c->r[31]+0x00000108u; // 800CE8B4
  c->lr=0x800CE8BCu; f_800F1DC0(c); // 800CE8B8
  c->r[3]=c->r[31]|c->r[31]; // 800CE8BC
  c->r[4]=c->r[30]|c->r[30]; // 800CE8C0
  c->lr=0x800CE8C8u; f_800CBDA0(c); // 800CE8C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CE8C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CE8CC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800CE8D0
  c->lr=c->r[0]; // 800CE8D4
  c->r[1]=c->r[1]+0x00000010u; // 800CE8D8
  return; // 800CE8DC
}

// fn_800CE8E0
void f_800CE8E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CE8E0
  c->r[0]=c->lr; // 800CE8E4
  W32(c->r[1]+0x00000044u,c->r[0]); // 800CE8E8
  c->r[11]=c->r[1]+0x00000040u; // 800CE8EC
  c->lr=0x800CE8F4u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CE8F0
  c->r[5]=R32(c->r[3]+0x0000000Cu); // 800CE8F4
  c->r[31]=c->r[4]|c->r[4]; // 800CE8F8
  cmps(c,0,(int32_t)c->r[5],0); // 800CE8FC
  if (!crb(c,2)) { goto L_800CE90C; } // 800CE900
  c->r[3]=0u+0x00000000u; // 800CE904
  goto L_800CEA1C; // 800CE908
L_800CE90C:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800CE90C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 800CE910
  if (crb(c,0)) { goto L_800CEA18; } // 800CE914
  c->r[30]=R32(c->r[3]+0x00000004u); // 800CE918
  c->r[29]=c->r[3]+0x00000004u; // 800CE91C
  c->r[23]=0u+0x00000080u; // 800CE920
  c->r[24]=0u+0x00000000u; // 800CE924
  c->r[25]=0u+0x80250000u; // 800CE928
  c->r[26]=0u+0x80250000u; // 800CE92C
  c->r[27]=0u+0x80250000u; // 800CE930
  c->r[28]=0u+0x80250000u; // 800CE934
  goto L_800CE9CC; // 800CE938
L_800CE93C:;
  cmps(c,0,(int32_t)c->r[30],0); // 800CE93C
  if (!crb(c,2)) { goto L_800CE958; } // 800CE940
  c->r[3]=c->r[25]+0x00005F90u; // 800CE944
  c->r[5]=c->r[26]+0x00005F6Cu; // 800CE948
  c->r[4]=0u+0x0000023Du; // 800CE94C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CE950
  c->lr=0x800CE958u; f_800F1300(c); // 800CE954
L_800CE958:;
  c->r[3]=R8(c->r[30]+0xFFFFFF90u); // 800CE958
  c->r[21]=c->r[30]+0xFFFFFEF8u; // 800CE95C
  c->r[0]=R32(c->r[30]+0xFFFFFF48u); // 800CE960
  c->r[3]=c->r[3]+c->r[0]; // 800CE964
  cmps(c,0,(int32_t)c->r[3],127); // 800CE968
  if (!crb(c,1)) { goto L_800CE978; } // 800CE96C
  c->r[22]=0u+0x0000007Fu; // 800CE970
  goto L_800CE980; // 800CE974
L_800CE978:;
  c->r[0]=sraw(c,c->r[3],31); // 800CE978
  c->r[22]=c->r[3]&~c->r[0]; // 800CE97C
L_800CE980:;
  cmps(c,0,(int32_t)c->r[23],(int32_t)c->r[22]); // 800CE980
  if (!crb(c,1)) { goto L_800CE9C8; } // 800CE984
  cmps(c,0,(int32_t)c->r[30],0); // 800CE988
  if (!crb(c,2)) { goto L_800CE9A4; } // 800CE98C
  c->r[3]=c->r[25]+0x00005F90u; // 800CE990
  c->r[5]=c->r[26]+0x00005F6Cu; // 800CE994
  c->r[4]=0u+0x0000023Du; // 800CE998
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CE99C
  c->lr=0x800CE9A4u; f_800F1300(c); // 800CE9A0
L_800CE9A4:;
  cmps(c,0,(int32_t)c->r[21],0); // 800CE9A4
  if (!crb(c,2)) { goto L_800CE9C0; } // 800CE9A8
  c->r[3]=c->r[27]+0x00005F30u; // 800CE9AC
  c->r[5]=c->r[28]+0x00005F0Cu; // 800CE9B0
  c->r[4]=0u+0x00000193u; // 800CE9B4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CE9B8
  c->lr=0x800CE9C0u; f_800F1300(c); // 800CE9BC
L_800CE9C0:;
  c->r[24]=c->r[21]|c->r[21]; // 800CE9C0
  c->r[23]=c->r[22]|c->r[22]; // 800CE9C4
L_800CE9C8:;
  c->r[30]=R32(c->r[30]+0x00000000u); // 800CE9C8
L_800CE9CC:;
  cmpu(c,0,c->r[30],c->r[29]); // 800CE9CC
  if (!crb(c,2)) { IRQCHK(c); goto L_800CE93C; } // 800CE9D0
  cmps(c,0,(int32_t)c->r[24],0); // 800CE9D4
  if (!crb(c,2)) { goto L_800CE9E4; } // 800CE9D8
  c->r[3]=0u+0x00000000u; // 800CE9DC
  goto L_800CEA1C; // 800CE9E0
L_800CE9E4:;
  c->r[3]=R8(c->r[24]+0x00000098u); // 800CE9E4
  c->r[0]=R32(c->r[24]+0x00000050u); // 800CE9E8
  c->r[3]=c->r[3]+c->r[0]; // 800CE9EC
  cmps(c,0,(int32_t)c->r[3],127); // 800CE9F0
  if (!crb(c,1)) { goto L_800CEA00; } // 800CE9F4
  c->r[0]=0u+0x0000007Fu; // 800CE9F8
  goto L_800CEA08; // 800CE9FC
L_800CEA00:;
  c->r[0]=sraw(c,c->r[3],31); // 800CEA00
  c->r[0]=c->r[3]&~c->r[0]; // 800CEA04
L_800CEA08:;
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 800CEA08
  if (!crb(c,0)) { goto L_800CEA18; } // 800CEA0C
  c->r[3]=0u+0x00000000u; // 800CEA10
  goto L_800CEA1C; // 800CEA14
L_800CEA18:;
  c->r[3]=0u+0x00000001u; // 800CEA18
L_800CEA1C:;
  c->r[11]=c->r[1]+0x00000040u; // 800CEA1C
  c->lr=0x800CEA24u; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CEA20
  c->r[0]=R32(c->r[1]+0x00000044u); // 800CEA24
  c->lr=c->r[0]; // 800CEA28
  c->r[1]=c->r[1]+0x00000040u; // 800CEA2C
  return; // 800CEA30
}

// fn_800CEA40
void f_800CEA40(Ctx* __restrict c) {
  c->r[4]=c->r[3]+0x00000008u; // 800CEA40
  c->r[0]=0u+0x00000000u; // 800CEA44
  W32(c->r[3]+0x00000000u,c->r[0]); // 800CEA48
  W32(c->r[3]+0x00000004u,c->r[0]); // 800CEA4C
  W32(c->r[3]+0x00000008u,c->r[4]); // 800CEA50
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 800CEA54
  return; // 800CEA58
}

// fn_800CEA60
void f_800CEA60(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CEA60
  c->r[0]=c->lr; // 800CEA64
  W32(c->r[1]+0x00000054u,c->r[0]); // 800CEA68
  c->r[11]=c->r[1]+0x00000050u; // 800CEA6C
  c->lr=0x800CEA74u; { W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CEA70
  cmps(c,0,(int32_t)c->r[3],0); // 800CEA74
  c->r[30]=c->r[3]|c->r[3]; // 800CEA78
  c->r[31]=c->r[4]|c->r[4]; // 800CEA7C
  if (crb(c,2)) { goto L_800CEC00; } // 800CEA80
  c->r[0]=R32(c->r[3]+0x00000000u); // 800CEA84
  cmps(c,0,(int32_t)c->r[0],0); // 800CEA88
  if (crb(c,2)) { goto L_800CEBE0; } // 800CEA8C
  if (crb(c,2)) { goto L_800CEBE0; } // 800CEA90
  c->r[20]=c->r[3]+0x00000008u; // 800CEA94
  c->r[26]=0u+0x80250000u; // 800CEA98
  c->r[27]=0u+0x80250000u; // 800CEA9C
  c->r[18]=0u+0x80250000u; // 800CEAA0
  c->r[19]=0u+0x80250000u; // 800CEAA4
  c->r[21]=0u+0x80250000u; // 800CEAA8
  c->r[22]=0u+0x80250000u; // 800CEAAC
  c->r[23]=0u+0x80250000u; // 800CEAB0
  c->r[24]=0u+0x80250000u; // 800CEAB4
  c->r[28]=0u+0x80250000u; // 800CEAB8
  c->r[29]=0u+0x80250000u; // 800CEABC
  goto L_800CEBB8; // 800CEAC0
L_800CEAC4:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CEAC4
  if (!crb(c,2)) { goto L_800CEAE0; } // 800CEAC8
  c->r[3]=c->r[18]+0x0000625Cu; // 800CEACC
  c->r[5]=c->r[19]+0x00006238u; // 800CEAD0
  c->r[4]=0u+0x000001FBu; // 800CEAD4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CEAD8
  c->lr=0x800CEAE0u; f_800F1300(c); // 800CEADC
L_800CEAE0:;
  c->r[17]=R32(c->r[20]+0x00000004u); // 800CEAE0
  cmps(c,0,(int32_t)c->r[17],0); // 800CEAE4
  if (!crb(c,2)) { goto L_800CEB00; } // 800CEAE8
  c->r[3]=c->r[21]+0x000061FCu; // 800CEAEC
  c->r[5]=c->r[22]+0x000061D8u; // 800CEAF0
  c->r[4]=0u+0x0000023Du; // 800CEAF4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CEAF8
  c->lr=0x800CEB00u; f_800F1300(c); // 800CEAFC
L_800CEB00:;
  cmps(c,0,(int32_t)c->r[17],0); // 800CEB00
  if (!crb(c,2)) { goto L_800CEB1C; } // 800CEB04
  c->r[3]=c->r[23]+0x0000622Cu; // 800CEB08
  c->r[5]=c->r[24]+0x00006208u; // 800CEB0C
  c->r[4]=0u+0x00000193u; // 800CEB10
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CEB14
  c->lr=0x800CEB1Cu; f_800F1300(c); // 800CEB18
L_800CEB1C:;
  cmps(c,0,(int32_t)c->r[17],0); // 800CEB1C
  if (crb(c,2)) { goto L_800CEB90; } // 800CEB20
  c->r[25]=c->r[17]+0x0000000Cu; // 800CEB24
  goto L_800CEB74; // 800CEB28
L_800CEB2C:;
  c->r[25]=R32(c->r[25]+0x00000004u); // 800CEB2C
  cmps(c,0,(int32_t)c->r[25],0); // 800CEB30
  if (!crb(c,2)) { goto L_800CEB4C; } // 800CEB34
  c->r[3]=c->r[26]+0x0000619Cu; // 800CEB38
  c->r[5]=c->r[27]+0x00006178u; // 800CEB3C
  c->r[4]=0u+0x0000023Du; // 800CEB40
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CEB44
  c->lr=0x800CEB4Cu; f_800F1300(c); // 800CEB48
L_800CEB4C:;
  cmps(c,0,(int32_t)c->r[25],0); // 800CEB4C
  if (crb(c,2)) { goto L_800CEB74; } // 800CEB50
  c->r[12]=R32(c->r[25]+0x00000010u); // 800CEB54
  cmps(c,0,(int32_t)c->r[12],0); // 800CEB58
  if (crb(c,2)) { goto L_800CEB74; } // 800CEB5C
  c->r[3]=R32(c->r[25]+0x00000008u); // 800CEB60
  c->r[4]=R32(c->r[25]+0x0000000Cu); // 800CEB64
  c->r[5]=R32(c->r[25]+0x00000014u); // 800CEB68
  c->ctr=c->r[12]; // 800CEB6C
  if (true) { c->lr=0x800CEB74u; dispatch(c,c->ctr); } // 800CEB70
L_800CEB74:;
  c->r[0]=R32(c->r[17]+0x0000000Cu); // 800CEB74
  cmpu(c,0,c->r[25],c->r[0]); // 800CEB78
  if (!crb(c,2)) { IRQCHK(c); goto L_800CEB2C; } // 800CEB7C
  c->r[3]=addc(c,c->r[17],0x00000008u,0); cr0(c,c->r[3]); // 800CEB80
  if (crb(c,2)) { goto L_800CEB90; } // 800CEB84
  c->r[4]=0u+0x00000000u; // 800CEB88
  c->lr=0x800CEB90u; f_800F1940(c); // 800CEB8C
L_800CEB90:;
  cmps(c,0,(int32_t)c->r[17],0); // 800CEB90
  if (!crb(c,2)) { goto L_800CEBAC; } // 800CEB94
  c->r[3]=c->r[28]+0x000061CCu; // 800CEB98
  c->r[5]=c->r[29]+0x000061A8u; // 800CEB9C
  c->r[4]=0u+0x00000233u; // 800CEBA0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CEBA4
  c->lr=0x800CEBACu; f_800F1300(c); // 800CEBA8
L_800CEBAC:;
  c->r[4]=c->r[17]|c->r[17]; // 800CEBAC
  c->r[3]=c->r[30]+0x00000004u; // 800CEBB0
  c->lr=0x800CEBB8u; f_800F1DC0(c); // 800CEBB4
L_800CEBB8:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 800CEBB8
  cmps(c,0,(int32_t)c->r[0],0); // 800CEBBC
  if (!crb(c,2)) { IRQCHK(c); goto L_800CEAC4; } // 800CEBC0
  c->r[3]=R32(c->r[30]+0x00000000u); // 800CEBC4
  c->r[4]=0u+0x00000003u; // 800CEBC8
  c->lr=0x800CEBD0u; f_801B2360(c); // 800CEBCC
  c->r[3]=R32(c->r[30]+0x00000000u); // 800CEBD0
  c->lr=0x800CEBD8u; f_801B2210(c); // 800CEBD4
  c->r[0]=0u+0x00000000u; // 800CEBD8
  W32(c->r[30]+0x00000000u,c->r[0]); // 800CEBDC
L_800CEBE0:;
  c->r[3]=addc(c,c->r[30],0x00000004u,0); cr0(c,c->r[3]); // 800CEBE0
  if (crb(c,2)) { goto L_800CEBF0; } // 800CEBE4
  c->r[4]=0u+0x00000000u; // 800CEBE8
  c->lr=0x800CEBF0u; f_800F1940(c); // 800CEBEC
L_800CEBF0:;
  cmps(c,0,(int32_t)c->r[31],0); // 800CEBF0
  if (!crb(c,1)) { goto L_800CEC00; } // 800CEBF4
  c->r[3]=c->r[30]|c->r[30]; // 800CEBF8
  c->lr=0x800CEC00u; f_8015D040(c); // 800CEBFC
L_800CEC00:;
  c->r[11]=c->r[1]+0x00000050u; // 800CEC00
  c->r[3]=c->r[30]|c->r[30]; // 800CEC04
  c->lr=0x800CEC0Cu; { c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CEC08
  c->r[0]=R32(c->r[1]+0x00000054u); // 800CEC0C
  c->lr=c->r[0]; // 800CEC10
  c->r[1]=c->r[1]+0x00000050u; // 800CEC14
  return; // 800CEC18
}

// fn_800CEC20
void f_800CEC20(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CEC20
  c->r[0]=c->lr; // 800CEC24
  W32(c->r[1]+0x00000054u,c->r[0]); // 800CEC28
  c->r[11]=c->r[1]+0x00000050u; // 800CEC2C
  c->lr=0x800CEC34u; { W32(c->r[11]+0xFFFFFFC0u,c->r[16]); W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CEC30
  cmps(c,0,(int32_t)c->r[4],0); // 800CEC34
  c->r[29]=c->r[3]|c->r[3]; // 800CEC38
  c->r[30]=c->r[4]|c->r[4]; // 800CEC3C
  c->r[31]=c->r[5]|c->r[5]; // 800CEC40
  if (!crb(c,2)) { goto L_800CEC64; } // 800CEC44
  c->r[3]=0u+0x80250000u; // 800CEC48
  c->r[5]=0u+0x80250000u; // 800CEC4C
  c->r[3]=c->r[3]+0x00005FA0u; // 800CEC50
  c->r[4]=0u+0x0000004Bu; // 800CEC54
  c->r[5]=c->r[5]+0x00005FB4u; // 800CEC58
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CEC5C
  c->lr=0x800CEC64u; f_800F1300(c); // 800CEC60
L_800CEC64:;
  c->r[0]=R32(c->r[29]+0x00000000u); // 800CEC64
  cmps(c,0,(int32_t)c->r[0],0); // 800CEC68
  if (crb(c,2)) { goto L_800CEDCC; } // 800CEC6C
  if (crb(c,2)) { goto L_800CEDCC; } // 800CEC70
  c->r[0]=R32(c->r[29]+0x00000004u); // 800CEC74
  cmps(c,0,(int32_t)c->r[0],0); // 800CEC78
  if (crb(c,2)) { goto L_800CEDB0; } // 800CEC7C
  c->r[28]=c->r[29]+0x00000008u; // 800CEC80
  c->r[24]=0u+0x80250000u; // 800CEC84
  c->r[25]=0u+0x80250000u; // 800CEC88
  c->r[17]=0u+0x80250000u; // 800CEC8C
  c->r[18]=0u+0x80250000u; // 800CEC90
  c->r[19]=0u+0x80250000u; // 800CEC94
  c->r[20]=0u+0x80250000u; // 800CEC98
  c->r[21]=0u+0x80250000u; // 800CEC9C
  c->r[22]=0u+0x80250000u; // 800CECA0
  c->r[26]=0u+0x80250000u; // 800CECA4
  c->r[27]=0u+0x80250000u; // 800CECA8
  goto L_800CEDA4; // 800CECAC
L_800CECB0:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CECB0
  if (!crb(c,2)) { goto L_800CECCC; } // 800CECB4
  c->r[3]=c->r[17]+0x0000625Cu; // 800CECB8
  c->r[5]=c->r[18]+0x00006238u; // 800CECBC
  c->r[4]=0u+0x000001FBu; // 800CECC0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CECC4
  c->lr=0x800CECCCu; f_800F1300(c); // 800CECC8
L_800CECCC:;
  c->r[16]=R32(c->r[28]+0x00000004u); // 800CECCC
  cmps(c,0,(int32_t)c->r[16],0); // 800CECD0
  if (!crb(c,2)) { goto L_800CECEC; } // 800CECD4
  c->r[3]=c->r[19]+0x000061FCu; // 800CECD8
  c->r[5]=c->r[20]+0x000061D8u; // 800CECDC
  c->r[4]=0u+0x0000023Du; // 800CECE0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CECE4
  c->lr=0x800CECECu; f_800F1300(c); // 800CECE8
L_800CECEC:;
  cmps(c,0,(int32_t)c->r[16],0); // 800CECEC
  if (!crb(c,2)) { goto L_800CED08; } // 800CECF0
  c->r[3]=c->r[21]+0x0000622Cu; // 800CECF4
  c->r[5]=c->r[22]+0x00006208u; // 800CECF8
  c->r[4]=0u+0x00000193u; // 800CECFC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CED00
  c->lr=0x800CED08u; f_800F1300(c); // 800CED04
L_800CED08:;
  cmps(c,0,(int32_t)c->r[16],0); // 800CED08
  if (crb(c,2)) { goto L_800CED7C; } // 800CED0C
  c->r[23]=c->r[16]+0x0000000Cu; // 800CED10
  goto L_800CED60; // 800CED14
L_800CED18:;
  c->r[23]=R32(c->r[23]+0x00000004u); // 800CED18
  cmps(c,0,(int32_t)c->r[23],0); // 800CED1C
  if (!crb(c,2)) { goto L_800CED38; } // 800CED20
  c->r[3]=c->r[24]+0x0000619Cu; // 800CED24
  c->r[5]=c->r[25]+0x00006178u; // 800CED28
  c->r[4]=0u+0x0000023Du; // 800CED2C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CED30
  c->lr=0x800CED38u; f_800F1300(c); // 800CED34
L_800CED38:;
  cmps(c,0,(int32_t)c->r[23],0); // 800CED38
  if (crb(c,2)) { goto L_800CED60; } // 800CED3C
  c->r[12]=R32(c->r[23]+0x00000010u); // 800CED40
  cmps(c,0,(int32_t)c->r[12],0); // 800CED44
  if (crb(c,2)) { goto L_800CED60; } // 800CED48
  c->r[3]=R32(c->r[23]+0x00000008u); // 800CED4C
  c->r[4]=R32(c->r[23]+0x0000000Cu); // 800CED50
  c->r[5]=R32(c->r[23]+0x00000014u); // 800CED54
  c->ctr=c->r[12]; // 800CED58
  if (true) { c->lr=0x800CED60u; dispatch(c,c->ctr); } // 800CED5C
L_800CED60:;
  c->r[0]=R32(c->r[16]+0x0000000Cu); // 800CED60
  cmpu(c,0,c->r[23],c->r[0]); // 800CED64
  if (!crb(c,2)) { IRQCHK(c); goto L_800CED18; } // 800CED68
  c->r[3]=addc(c,c->r[16],0x00000008u,0); cr0(c,c->r[3]); // 800CED6C
  if (crb(c,2)) { goto L_800CED7C; } // 800CED70
  c->r[4]=0u+0x00000000u; // 800CED74
  c->lr=0x800CED7Cu; f_800F1940(c); // 800CED78
L_800CED7C:;
  cmps(c,0,(int32_t)c->r[16],0); // 800CED7C
  if (!crb(c,2)) { goto L_800CED98; } // 800CED80
  c->r[3]=c->r[26]+0x000061CCu; // 800CED84
  c->r[5]=c->r[27]+0x000061A8u; // 800CED88
  c->r[4]=0u+0x00000233u; // 800CED8C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CED90
  c->lr=0x800CED98u; f_800F1300(c); // 800CED94
L_800CED98:;
  c->r[4]=c->r[16]|c->r[16]; // 800CED98
  c->r[3]=c->r[29]+0x00000004u; // 800CED9C
  c->lr=0x800CEDA4u; f_800F1DC0(c); // 800CEDA0
L_800CEDA4:;
  c->r[0]=R32(c->r[29]+0x00000004u); // 800CEDA4
  cmps(c,0,(int32_t)c->r[0],0); // 800CEDA8
  if (!crb(c,2)) { IRQCHK(c); goto L_800CECB0; } // 800CEDAC
L_800CEDB0:;
  c->r[3]=R32(c->r[29]+0x00000000u); // 800CEDB0
  c->r[4]=0u+0x00000003u; // 800CEDB4
  c->lr=0x800CEDBCu; f_801B2360(c); // 800CEDB8
  c->r[3]=R32(c->r[29]+0x00000000u); // 800CEDBC
  c->lr=0x800CEDC4u; f_801B2210(c); // 800CEDC0
  c->r[0]=0u+0x00000000u; // 800CEDC4
  W32(c->r[29]+0x00000000u,c->r[0]); // 800CEDC8
L_800CEDCC:;
  c->r[0]=c->r[30]+0x00000003u; // 800CEDCC
  c->r[4]=c->r[30]+c->r[31]; // 800CEDD0
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFFCu; // 800CEDD4
  cmpu(c,0,c->r[3],c->r[4]); // 800CEDD8
  if (!crb(c,1)) { goto L_800CEDE8; } // 800CEDDC
  c->r[3]=0u+0x00000000u; // 800CEDE0
  goto L_800CEEA4; // 800CEDE4
L_800CEDE8:;
  c->r[4]=c->r[4]-c->r[3]; // 800CEDE8
  c->r[5]=0u+0x00000000u; // 800CEDEC
  c->lr=0x800CEDF4u; f_801B2180(c); // 800CEDF0
  cmps(c,0,(int32_t)c->r[3],0); // 800CEDF4
  W32(c->r[29]+0x00000000u,c->r[3]); // 800CEDF8
  if (!crb(c,2)) { goto L_800CEE08; } // 800CEDFC
  c->r[3]=0u+0x00000000u; // 800CEE00
  goto L_800CEEA4; // 800CEE04
L_800CEE08:;
  c->r[4]=0u+0x00000014u; // 800CEE08
  c->r[5]=0u+0x00000004u; // 800CEE0C
  c->lr=0x800CEE14u; f_801B2240(c); // 800CEE10
  cmps(c,0,(int32_t)c->r[3],0); // 800CEE14
  if (!crb(c,2)) { goto L_800CEE24; } // 800CEE18
  c->r[0]=0u+0x00000000u; // 800CEE1C
  goto L_800CEE90; // 800CEE20
L_800CEE24:;
  c->r[17]=c->r[3]|c->r[3]; // 800CEE24
  if (crb(c,2)) { goto L_800CEE50; } // 800CEE28
  c->r[0]=0u+0x00000000u; // 800CEE2C
  W32(c->r[3]+0x00000000u,c->r[0]); // 800CEE30
  c->r[4]=c->r[3]+0x0000000Cu; // 800CEE34
  W32(c->r[3]+0x00000004u,c->r[0]); // 800CEE38
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800CEE3C
  W32(c->r[3]+0x00000010u,c->r[0]); // 800CEE40
  W32(c->r[3]+0x00000008u,c->r[0]); // 800CEE44
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 800CEE48
  W32(c->r[3]+0x00000010u,c->r[4]); // 800CEE4C
L_800CEE50:;
  cmps(c,0,(int32_t)c->r[3],0); // 800CEE50
  c->r[28]=c->r[29]+0x00000008u; // 800CEE54
  if (!crb(c,2)) { goto L_800CEE78; } // 800CEE58
  c->r[3]=0u+0x80250000u; // 800CEE5C
  c->r[5]=0u+0x80250000u; // 800CEE60
  c->r[3]=c->r[3]+0x000061CCu; // 800CEE64
  c->r[4]=0u+0x00000233u; // 800CEE68
  c->r[5]=c->r[5]+0x000061A8u; // 800CEE6C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CEE70
  c->lr=0x800CEE78u; f_800F1300(c); // 800CEE74
L_800CEE78:;
  W32(c->r[1]+0x00000008u,c->r[28]); // 800CEE78
  c->r[5]=c->r[17]|c->r[17]; // 800CEE7C
  c->r[3]=c->r[29]+0x00000004u; // 800CEE80
  c->r[4]=c->r[1]+0x00000008u; // 800CEE84
  c->lr=0x800CEE8Cu; f_800F1CC0(c); // 800CEE88
  c->r[0]=0u+0x00000001u; // 800CEE8C
L_800CEE90:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CEE90
  if (!crb(c,2)) { goto L_800CEEA0; } // 800CEE94
  c->r[3]=0u+0x00000000u; // 800CEE98
  goto L_800CEEA4; // 800CEE9C
L_800CEEA0:;
  c->r[3]=0u+0x00000001u; // 800CEEA0
L_800CEEA4:;
  c->r[11]=c->r[1]+0x00000050u; // 800CEEA4
  c->lr=0x800CEEACu; { c->r[16]=R32(c->r[11]+0xFFFFFFC0u); c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CEEA8
  c->r[0]=R32(c->r[1]+0x00000054u); // 800CEEAC
  c->lr=c->r[0]; // 800CEEB0
  c->r[1]=c->r[1]+0x00000050u; // 800CEEB4
  return; // 800CEEB8
}

// fn_800CEEC0
void f_800CEEC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CEEC0
  c->r[0]=c->lr; // 800CEEC4
  W32(c->r[1]+0x00000044u,c->r[0]); // 800CEEC8
  c->r[11]=c->r[1]+0x00000040u; // 800CEECC
  c->lr=0x800CEED4u; { W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CEED0
  c->r[0]=R32(c->r[3]+0x00000000u); // 800CEED4
  c->r[31]=c->r[3]|c->r[3]; // 800CEED8
  cmps(c,0,(int32_t)c->r[0],0); // 800CEEDC
  if (crb(c,2)) { goto L_800CF03C; } // 800CEEE0
  c->r[0]=R32(c->r[3]+0x00000004u); // 800CEEE4
  cmps(c,0,(int32_t)c->r[0],0); // 800CEEE8
  if (crb(c,2)) { goto L_800CF020; } // 800CEEEC
  c->r[30]=c->r[3]+0x00000008u; // 800CEEF0
  c->r[26]=0u+0x80250000u; // 800CEEF4
  c->r[27]=0u+0x80250000u; // 800CEEF8
  c->r[19]=0u+0x80250000u; // 800CEEFC
  c->r[20]=0u+0x80250000u; // 800CEF00
  c->r[21]=0u+0x80250000u; // 800CEF04
  c->r[22]=0u+0x80250000u; // 800CEF08
  c->r[23]=0u+0x80250000u; // 800CEF0C
  c->r[24]=0u+0x80250000u; // 800CEF10
  c->r[28]=0u+0x80250000u; // 800CEF14
  c->r[29]=0u+0x80250000u; // 800CEF18
  goto L_800CF014; // 800CEF1C
L_800CEF20:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CEF20
  if (!crb(c,2)) { goto L_800CEF3C; } // 800CEF24
  c->r[3]=c->r[19]+0x0000625Cu; // 800CEF28
  c->r[5]=c->r[20]+0x00006238u; // 800CEF2C
  c->r[4]=0u+0x000001FBu; // 800CEF30
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CEF34
  c->lr=0x800CEF3Cu; f_800F1300(c); // 800CEF38
L_800CEF3C:;
  c->r[18]=R32(c->r[30]+0x00000004u); // 800CEF3C
  cmps(c,0,(int32_t)c->r[18],0); // 800CEF40
  if (!crb(c,2)) { goto L_800CEF5C; } // 800CEF44
  c->r[3]=c->r[21]+0x000061FCu; // 800CEF48
  c->r[5]=c->r[22]+0x000061D8u; // 800CEF4C
  c->r[4]=0u+0x0000023Du; // 800CEF50
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CEF54
  c->lr=0x800CEF5Cu; f_800F1300(c); // 800CEF58
L_800CEF5C:;
  cmps(c,0,(int32_t)c->r[18],0); // 800CEF5C
  if (!crb(c,2)) { goto L_800CEF78; } // 800CEF60
  c->r[3]=c->r[23]+0x0000622Cu; // 800CEF64
  c->r[5]=c->r[24]+0x00006208u; // 800CEF68
  c->r[4]=0u+0x00000193u; // 800CEF6C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CEF70
  c->lr=0x800CEF78u; f_800F1300(c); // 800CEF74
L_800CEF78:;
  cmps(c,0,(int32_t)c->r[18],0); // 800CEF78
  if (crb(c,2)) { goto L_800CEFEC; } // 800CEF7C
  c->r[25]=c->r[18]+0x0000000Cu; // 800CEF80
  goto L_800CEFD0; // 800CEF84
L_800CEF88:;
  c->r[25]=R32(c->r[25]+0x00000004u); // 800CEF88
  cmps(c,0,(int32_t)c->r[25],0); // 800CEF8C
  if (!crb(c,2)) { goto L_800CEFA8; } // 800CEF90
  c->r[3]=c->r[26]+0x0000619Cu; // 800CEF94
  c->r[5]=c->r[27]+0x00006178u; // 800CEF98
  c->r[4]=0u+0x0000023Du; // 800CEF9C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CEFA0
  c->lr=0x800CEFA8u; f_800F1300(c); // 800CEFA4
L_800CEFA8:;
  cmps(c,0,(int32_t)c->r[25],0); // 800CEFA8
  if (crb(c,2)) { goto L_800CEFD0; } // 800CEFAC
  c->r[12]=R32(c->r[25]+0x00000010u); // 800CEFB0
  cmps(c,0,(int32_t)c->r[12],0); // 800CEFB4
  if (crb(c,2)) { goto L_800CEFD0; } // 800CEFB8
  c->r[3]=R32(c->r[25]+0x00000008u); // 800CEFBC
  c->r[4]=R32(c->r[25]+0x0000000Cu); // 800CEFC0
  c->r[5]=R32(c->r[25]+0x00000014u); // 800CEFC4
  c->ctr=c->r[12]; // 800CEFC8
  if (true) { c->lr=0x800CEFD0u; dispatch(c,c->ctr); } // 800CEFCC
L_800CEFD0:;
  c->r[0]=R32(c->r[18]+0x0000000Cu); // 800CEFD0
  cmpu(c,0,c->r[25],c->r[0]); // 800CEFD4
  if (!crb(c,2)) { IRQCHK(c); goto L_800CEF88; } // 800CEFD8
  c->r[3]=addc(c,c->r[18],0x00000008u,0); cr0(c,c->r[3]); // 800CEFDC
  if (crb(c,2)) { goto L_800CEFEC; } // 800CEFE0
  c->r[4]=0u+0x00000000u; // 800CEFE4
  c->lr=0x800CEFECu; f_800F1940(c); // 800CEFE8
L_800CEFEC:;
  cmps(c,0,(int32_t)c->r[18],0); // 800CEFEC
  if (!crb(c,2)) { goto L_800CF008; } // 800CEFF0
  c->r[3]=c->r[28]+0x000061CCu; // 800CEFF4
  c->r[5]=c->r[29]+0x000061A8u; // 800CEFF8
  c->r[4]=0u+0x00000233u; // 800CEFFC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CF000
  c->lr=0x800CF008u; f_800F1300(c); // 800CF004
L_800CF008:;
  c->r[4]=c->r[18]|c->r[18]; // 800CF008
  c->r[3]=c->r[31]+0x00000004u; // 800CF00C
  c->lr=0x800CF014u; f_800F1DC0(c); // 800CF010
L_800CF014:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 800CF014
  cmps(c,0,(int32_t)c->r[0],0); // 800CF018
  if (!crb(c,2)) { IRQCHK(c); goto L_800CEF20; } // 800CF01C
L_800CF020:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 800CF020
  c->r[4]=0u+0x00000003u; // 800CF024
  c->lr=0x800CF02Cu; f_801B2360(c); // 800CF028
  c->r[3]=R32(c->r[31]+0x00000000u); // 800CF02C
  c->lr=0x800CF034u; f_801B2210(c); // 800CF030
  c->r[0]=0u+0x00000000u; // 800CF034
  W32(c->r[31]+0x00000000u,c->r[0]); // 800CF038
L_800CF03C:;
  c->r[11]=c->r[1]+0x00000040u; // 800CF03C
  c->lr=0x800CF044u; { c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CF040
  c->r[0]=R32(c->r[1]+0x00000044u); // 800CF044
  c->lr=c->r[0]; // 800CF048
  c->r[1]=c->r[1]+0x00000040u; // 800CF04C
  return; // 800CF050
}

// fn_800CF060
void f_800CF060(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF060
  c->r[0]=c->lr; // 800CF064
  W32(c->r[1]+0x00000034u,c->r[0]); // 800CF068
  c->r[11]=c->r[1]+0x00000030u; // 800CF06C
  c->lr=0x800CF074u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CF070
  c->r[0]=R32(c->r[3]+0x00000000u); // 800CF074
  c->r[30]=0u+0x80250000u; // 800CF078
  c->r[25]=c->r[3]|c->r[3]; // 800CF07C
  c->r[26]=c->r[4]|c->r[4]; // 800CF080
  cmps(c,0,(int32_t)c->r[0],0); // 800CF084
  c->r[27]=c->r[5]|c->r[5]; // 800CF088
  c->r[31]=c->r[6]|c->r[6]; // 800CF08C
  c->r[30]=c->r[30]+0x00005FA0u; // 800CF090
  if (!crb(c,2)) { goto L_800CF0AC; } // 800CF094
  c->r[3]=c->r[30]+0x00000000u; // 800CF098
  c->r[5]=c->r[30]+0x00000048u; // 800CF09C
  c->r[4]=0u+0x000000A1u; // 800CF0A0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CF0A4
  c->lr=0x800CF0ACu; f_800F1300(c); // 800CF0A8
L_800CF0AC:;
  c->r[0]=c->r[26]+0x0000001Fu; // 800CF0AC
  c->r[3]=R32(c->r[25]+0x00000000u); // 800CF0B0
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800CF0B4
  c->r[5]=0u+0x00000020u; // 800CF0B8
  c->r[4]=c->r[4]+0x00000020u; // 800CF0BC
  c->lr=0x800CF0C4u; f_801B2240(c); // 800CF0C0
  cmps(c,0,(int32_t)c->r[3],0); // 800CF0C4
  c->r[28]=c->r[3]|c->r[3]; // 800CF0C8
  if (!crb(c,2)) { goto L_800CF0D8; } // 800CF0CC
  c->r[3]=0u+0x00000000u; // 800CF0D0
  goto L_800CF1D0; // 800CF0D4
L_800CF0D8:;
  c->r[29]=c->r[3]+0x00000020u; // 800CF0D8
  c->r[0]=rotl(c->r[29],0)&0x0000001Fu; cr0(c,c->r[0]); // 800CF0DC
  if (crb(c,2)) { goto L_800CF0F8; } // 800CF0E0
  c->r[3]=c->r[30]+0x00000000u; // 800CF0E4
  c->r[5]=c->r[30]+0x00000094u; // 800CF0E8
  c->r[4]=0u+0x000000ABu; // 800CF0EC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CF0F0
  c->lr=0x800CF0F8u; f_800F1300(c); // 800CF0F4
L_800CF0F8:;
  cmps(c,0,(int32_t)c->r[28],0); // 800CF0F8
  if (crb(c,2)) { goto L_800CF11C; } // 800CF0FC
  c->r[0]=0u+0x00000000u; // 800CF100
  W32(c->r[28]+0x00000000u,c->r[0]); // 800CF104
  W32(c->r[28]+0x00000004u,c->r[0]); // 800CF108
  W32(c->r[28]+0x00000008u,c->r[29]); // 800CF10C
  W32(c->r[28]+0x0000000Cu,c->r[26]); // 800CF110
  W32(c->r[28]+0x00000010u,c->r[27]); // 800CF114
  W32(c->r[28]+0x00000014u,c->r[31]); // 800CF118
L_800CF11C:;
  c->r[0]=R32(c->r[25]+0x00000004u); // 800CF11C
  cmps(c,0,(int32_t)c->r[0],0); // 800CF120
  if (!crb(c,2)) { goto L_800CF144; } // 800CF124
  c->r[3]=0u+0x80250000u; // 800CF128
  c->r[5]=0u+0x80250000u; // 800CF12C
  c->r[3]=c->r[3]+0x0000625Cu; // 800CF130
  c->r[4]=0u+0x000001FBu; // 800CF134
  c->r[5]=c->r[5]+0x00006238u; // 800CF138
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CF13C
  c->lr=0x800CF144u; f_800F1300(c); // 800CF140
L_800CF144:;
  c->r[30]=R32(c->r[25]+0x0000000Cu); // 800CF144
  cmps(c,0,(int32_t)c->r[30],0); // 800CF148
  if (!crb(c,2)) { goto L_800CF16C; } // 800CF14C
  c->r[3]=0u+0x80250000u; // 800CF150
  c->r[5]=0u+0x80250000u; // 800CF154
  c->r[3]=c->r[3]+0x000061FCu; // 800CF158
  c->r[4]=0u+0x0000023Du; // 800CF15C
  c->r[5]=c->r[5]+0x000061D8u; // 800CF160
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CF164
  c->lr=0x800CF16Cu; f_800F1300(c); // 800CF168
L_800CF16C:;
  cmps(c,0,(int32_t)c->r[30],0); // 800CF16C
  if (!crb(c,2)) { goto L_800CF190; } // 800CF170
  c->r[3]=0u+0x80250000u; // 800CF174
  c->r[5]=0u+0x80250000u; // 800CF178
  c->r[3]=c->r[3]+0x0000622Cu; // 800CF17C
  c->r[4]=0u+0x00000193u; // 800CF180
  c->r[5]=c->r[5]+0x00006208u; // 800CF184
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CF188
  c->lr=0x800CF190u; f_800F1300(c); // 800CF18C
L_800CF190:;
  cmps(c,0,(int32_t)c->r[28],0); // 800CF190
  c->r[31]=c->r[30]+0x0000000Cu; // 800CF194
  if (!crb(c,2)) { goto L_800CF1B8; } // 800CF198
  c->r[3]=0u+0x80250000u; // 800CF19C
  c->r[5]=0u+0x80250000u; // 800CF1A0
  c->r[3]=c->r[3]+0x0000628Cu; // 800CF1A4
  c->r[4]=0u+0x00000233u; // 800CF1A8
  c->r[5]=c->r[5]+0x00006268u; // 800CF1AC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CF1B0
  c->lr=0x800CF1B8u; f_800F1300(c); // 800CF1B4
L_800CF1B8:;
  W32(c->r[1]+0x00000008u,c->r[31]); // 800CF1B8
  c->r[5]=c->r[28]|c->r[28]; // 800CF1BC
  c->r[3]=c->r[30]+0x00000008u; // 800CF1C0
  c->r[4]=c->r[1]+0x00000008u; // 800CF1C4
  c->lr=0x800CF1CCu; f_800F1CC0(c); // 800CF1C8
  c->r[3]=c->r[29]|c->r[29]; // 800CF1CC
L_800CF1D0:;
  c->r[11]=c->r[1]+0x00000030u; // 800CF1D0
  c->lr=0x800CF1D8u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CF1D4
  c->r[0]=R32(c->r[1]+0x00000034u); // 800CF1D8
  c->lr=c->r[0]; // 800CF1DC
  c->r[1]=c->r[1]+0x00000030u; // 800CF1E0
  return; // 800CF1E4
}

// fn_800CF1F0
void f_800CF1F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF1F0
  c->r[0]=c->lr; // 800CF1F4
  cmps(c,0,(int32_t)c->r[4],0); // 800CF1F8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CF1FC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CF200
  c->r[31]=c->r[3]|c->r[3]; // 800CF204
  W32(c->r[1]+0x00000018u,c->r[30]); // 800CF208
  c->r[30]=c->r[6]|c->r[6]; // 800CF20C
  W32(c->r[1]+0x00000014u,c->r[29]); // 800CF210
  c->r[29]=c->r[5]|c->r[5]; // 800CF214
  W32(c->r[1]+0x00000010u,c->r[28]); // 800CF218
  c->r[28]=c->r[4]|c->r[4]; // 800CF21C
  if (!crb(c,2)) { goto L_800CF240; } // 800CF220
  c->r[3]=0u+0x80250000u; // 800CF224
  c->r[5]=0u+0x80250000u; // 800CF228
  c->r[3]=c->r[3]+0x00006298u; // 800CF22C
  c->r[4]=0u+0x00000026u; // 800CF230
  c->r[5]=c->r[5]+0x000062B0u; // 800CF234
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CF238
  c->lr=0x800CF240u; f_800F1300(c); // 800CF23C
L_800CF240:;
  c->lr=0x800CF244u; f_8018D6A0(c); // 800CF240
  c->r[0]=c->r[28]+0x00000003u; // 800CF244
  c->r[4]=c->r[30]+0x00000003u; // 800CF248
  c->r[6]=rotl(c->r[0],0)&0xFFFFFFFCu; // 800CF24C
  c->r[7]=0u+0x00000000u; // 800CF250
  c->r[0]=c->r[6]-c->r[28]; // 800CF254
  c->r[4]=rotl(c->r[4],0)&0xFFFFFFFCu; // 800CF258
  c->r[0]=c->r[29]-c->r[0]; // 800CF25C
  c->r[30]=divwu(c->r[0],c->r[4]); cr0(c,c->r[30]); // 800CF260
  if (crb(c,2)) { goto L_800CF330; } // 800CF264
  cmpu(c,0,c->r[30],0x00000008u); // 800CF268
  c->r[5]=c->r[30]+0xFFFFFFF8u; // 800CF26C
  if (!crb(c,1)) { goto L_800CF30C; } // 800CF270
  c->r[0]=c->r[5]+0x00000007u; // 800CF274
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 800CF278
  c->ctr=c->r[0]; // 800CF27C
  cmpu(c,0,c->r[5],0x00000000u); // 800CF280
  if (!crb(c,1)) { goto L_800CF30C; } // 800CF284
L_800CF288:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 800CF288
  c->r[8]=c->r[6]|c->r[6]; // 800CF28C
  W32(c->r[6]+0x00000000u,c->r[0]); // 800CF290
  c->r[7]=c->r[7]+0x00000008u; // 800CF294
  W32(c->r[31]+0x00000000u,c->r[6]); // 800CF298
  c->r[6]=c->r[6]+c->r[4]; // 800CF29C
  c->r[5]=c->r[6]|c->r[6]; // 800CF2A0
  W32(c->r[6]+0x00000000u,c->r[8]); // 800CF2A4
  W32(c->r[31]+0x00000000u,c->r[6]); // 800CF2A8
  c->r[6]=c->r[6]+c->r[4]; // 800CF2AC
  c->r[0]=c->r[6]|c->r[6]; // 800CF2B0
  W32(c->r[6]+0x00000000u,c->r[5]); // 800CF2B4
  W32(c->r[31]+0x00000000u,c->r[6]); // 800CF2B8
  c->r[6]=c->r[6]+c->r[4]; // 800CF2BC
  c->r[5]=c->r[6]|c->r[6]; // 800CF2C0
  W32(c->r[6]+0x00000000u,c->r[0]); // 800CF2C4
  W32(c->r[31]+0x00000000u,c->r[6]); // 800CF2C8
  c->r[6]=c->r[6]+c->r[4]; // 800CF2CC
  c->r[0]=c->r[6]|c->r[6]; // 800CF2D0
  W32(c->r[6]+0x00000000u,c->r[5]); // 800CF2D4
  W32(c->r[31]+0x00000000u,c->r[6]); // 800CF2D8
  c->r[6]=c->r[6]+c->r[4]; // 800CF2DC
  c->r[5]=c->r[6]|c->r[6]; // 800CF2E0
  W32(c->r[6]+0x00000000u,c->r[0]); // 800CF2E4
  W32(c->r[31]+0x00000000u,c->r[6]); // 800CF2E8
  c->r[6]=c->r[6]+c->r[4]; // 800CF2EC
  c->r[0]=c->r[6]|c->r[6]; // 800CF2F0
  W32(c->r[6]+0x00000000u,c->r[5]); // 800CF2F4
  W32(c->r[31]+0x00000000u,c->r[6]); // 800CF2F8
  {uint32_t ea=c->r[6]+c->r[4]; W32(ea,c->r[0]); c->r[6]=ea;} // 800CF2FC
  W32(c->r[31]+0x00000000u,c->r[6]); // 800CF300
  c->r[6]=c->r[6]+c->r[4]; // 800CF304
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CF288; } // 800CF308
L_800CF30C:;
  c->r[0]=c->r[30]-c->r[7]; // 800CF30C
  c->ctr=c->r[0]; // 800CF310
  cmpu(c,0,c->r[7],c->r[30]); // 800CF314
  if (!crb(c,0)) { goto L_800CF330; } // 800CF318
L_800CF31C:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 800CF31C
  W32(c->r[6]+0x00000000u,c->r[0]); // 800CF320
  W32(c->r[31]+0x00000000u,c->r[6]); // 800CF324
  c->r[6]=c->r[6]+c->r[4]; // 800CF328
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CF31C; } // 800CF32C
L_800CF330:;
  c->lr=0x800CF334u; f_8018D6E0(c); // 800CF330
  c->r[3]=c->r[30]|c->r[30]; // 800CF334
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CF338
  c->r[30]=R32(c->r[1]+0x00000018u); // 800CF33C
  c->r[29]=R32(c->r[1]+0x00000014u); // 800CF340
  c->r[28]=R32(c->r[1]+0x00000010u); // 800CF344
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CF348
  c->lr=c->r[0]; // 800CF34C
  c->r[1]=c->r[1]+0x00000020u; // 800CF350
  return; // 800CF354
}

// fn_800CF360
void f_800CF360(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF360
  c->r[0]=c->lr; // 800CF364
  cmps(c,0,(int32_t)c->r[4],0); // 800CF368
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CF36C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CF370
  c->r[31]=c->r[5]|c->r[5]; // 800CF374
  W32(c->r[1]+0x00000018u,c->r[30]); // 800CF378
  c->r[30]=c->r[4]|c->r[4]; // 800CF37C
  W32(c->r[1]+0x00000014u,c->r[29]); // 800CF380
  c->r[29]=c->r[3]|c->r[3]; // 800CF384
  if (!crb(c,2)) { goto L_800CF3A8; } // 800CF388
  c->r[3]=0u+0x80250000u; // 800CF38C
  c->r[5]=0u+0x80250000u; // 800CF390
  c->r[3]=c->r[3]+0x00006298u; // 800CF394
  c->r[4]=0u+0x00000044u; // 800CF398
  c->r[5]=c->r[5]+0x000062B0u; // 800CF39C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CF3A0
  c->lr=0x800CF3A8u; f_800F1300(c); // 800CF3A4
L_800CF3A8:;
  c->lr=0x800CF3ACu; f_8018D6A0(c); // 800CF3A8
  c->r[5]=R32(c->r[29]+0x00000000u); // 800CF3AC
  c->r[4]=c->r[30]+c->r[31]; // 800CF3B0
  goto L_800CF3DC; // 800CF3B4
L_800CF3B8:;
  cmpu(c,0,c->r[30],c->r[5]); // 800CF3B8
  if (crb(c,1)) { goto L_800CF3D4; } // 800CF3BC
  cmpu(c,0,c->r[5],c->r[4]); // 800CF3C0
  if (!crb(c,0)) { goto L_800CF3D4; } // 800CF3C4
  c->r[0]=R32(c->r[5]+0x00000000u); // 800CF3C8
  W32(c->r[29]+0x00000000u,c->r[0]); // 800CF3CC
  goto L_800CF3D8; // 800CF3D0
L_800CF3D4:;
  c->r[29]=c->r[5]|c->r[5]; // 800CF3D4
L_800CF3D8:;
  c->r[5]=R32(c->r[5]+0x00000000u); // 800CF3D8
L_800CF3DC:;
  cmps(c,0,(int32_t)c->r[5],0); // 800CF3DC
  if (!crb(c,2)) { IRQCHK(c); goto L_800CF3B8; } // 800CF3E0
  c->lr=0x800CF3E8u; f_8018D6E0(c); // 800CF3E4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CF3E8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CF3EC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800CF3F0
  c->r[29]=R32(c->r[1]+0x00000014u); // 800CF3F4
  c->lr=c->r[0]; // 800CF3F8
  c->r[1]=c->r[1]+0x00000020u; // 800CF3FC
  return; // 800CF400
}

// fn_800CF410
void f_800CF410(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF410
  c->r[0]=c->lr; // 800CF414
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CF418
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CF41C
  c->r[31]=c->r[3]|c->r[3]; // 800CF420
  c->lr=0x800CF428u; f_8018D6A0(c); // 800CF424
  c->r[4]=R32(c->r[31]+0x00000000u); // 800CF428
  c->r[31]=0u+0x00000000u; // 800CF42C
  goto L_800CF440; // 800CF430
  c->r[0]=c->r[0]|0x00000000u; // 800CF434
L_800CF438:;
  c->r[4]=R32(c->r[4]+0x00000000u); // 800CF438
  c->r[31]=c->r[31]+0x00000001u; // 800CF43C
L_800CF440:;
  cmps(c,0,(int32_t)c->r[4],0); // 800CF440
  if (!crb(c,2)) { IRQCHK(c); goto L_800CF438; } // 800CF444
  c->lr=0x800CF44Cu; f_8018D6E0(c); // 800CF448
  c->r[3]=c->r[31]|c->r[31]; // 800CF44C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CF450
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CF454
  c->lr=c->r[0]; // 800CF458
  c->r[1]=c->r[1]+0x00000010u; // 800CF45C
  return; // 800CF460
}

// AllocImpl__Q44nw4r3snd6detail8PoolImplFv
void f_800CF470(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF470
  c->r[0]=c->lr; // 800CF474
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CF478
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CF47C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CF480
  c->r[30]=c->r[3]|c->r[3]; // 800CF484
  c->lr=0x800CF48Cu; f_8018D6A0(c); // 800CF488
  c->r[31]=R32(c->r[30]+0x00000000u); // 800CF48C
  cmps(c,0,(int32_t)c->r[31],0); // 800CF490
  if (!crb(c,2)) { goto L_800CF4A4; } // 800CF494
  c->lr=0x800CF49Cu; f_8018D6E0(c); // 800CF498
  c->r[3]=0u+0x00000000u; // 800CF49C
  goto L_800CF4B4; // 800CF4A0
L_800CF4A4:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 800CF4A4
  W32(c->r[30]+0x00000000u,c->r[0]); // 800CF4A8
  c->lr=0x800CF4B0u; f_8018D6E0(c); // 800CF4AC
  c->r[3]=c->r[31]|c->r[31]; // 800CF4B0
L_800CF4B4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CF4B4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CF4B8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800CF4BC
  c->lr=c->r[0]; // 800CF4C0
  c->r[1]=c->r[1]+0x00000010u; // 800CF4C4
  return; // 800CF4C8
}

// FreeImpl__Q44nw4r3snd6detail8PoolImplFPv
void f_800CF4D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF4D0
  c->r[0]=c->lr; // 800CF4D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CF4D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CF4DC
  c->r[31]=c->r[4]|c->r[4]; // 800CF4E0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CF4E4
  c->r[30]=c->r[3]|c->r[3]; // 800CF4E8
  c->lr=0x800CF4F0u; f_8018D6A0(c); // 800CF4EC
  c->r[0]=R32(c->r[30]+0x00000000u); // 800CF4F0
  W32(c->r[31]+0x00000000u,c->r[0]); // 800CF4F4
  W32(c->r[30]+0x00000000u,c->r[31]); // 800CF4F8
  c->lr=0x800CF500u; f_8018D6E0(c); // 800CF4FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CF500
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CF504
  c->r[30]=R32(c->r[1]+0x00000008u); // 800CF508
  c->lr=c->r[0]; // 800CF50C
  c->r[1]=c->r[1]+0x00000010u; // 800CF510
  return; // 800CF514
}

// Init__Q44nw4r3snd6detail8LfoParamFv
void f_800CF520(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF9AC0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CF520
  c->r[4]=0u+0x00000001u; // 800CF524
  {uint32_t ea=c->r[2]+0xFFFF9AC4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CF528
  c->r[0]=0u+0x00000000u; // 800CF52C
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[1]);} // 800CF530
  W8(c->r[3]+0x0000000Cu,c->r[4]); // 800CF534
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 800CF538
  W32(c->r[3]+0x00000008u,c->r[0]); // 800CF53C
  return; // 800CF540
}

// fn_800CF550
void f_800CF550(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF9AC0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CF550
  c->r[0]=0u+0x00000000u; // 800CF554
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 800CF558
  W32(c->r[3]+0x00000010u,c->r[0]); // 800CF55C
  return; // 800CF560
}

// fn_800CF570
void f_800CF570(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF570
  c->r[6]=R32(c->r[3]+0x00000008u); // 800CF574
  c->r[5]=R32(c->r[3]+0x00000010u); // 800CF578
  cmpu(c,0,c->r[5],c->r[6]); // 800CF57C
  if (!crb(c,0)) { goto L_800CF5A4; } // 800CF580
  c->r[0]=c->r[5]+c->r[4]; // 800CF584
  cmpu(c,0,c->r[0],c->r[6]); // 800CF588
  if (crb(c,1)) { goto L_800CF598; } // 800CF58C
  W32(c->r[3]+0x00000010u,c->r[0]); // 800CF590
  goto L_800CF600; // 800CF594
L_800CF598:;
  c->r[0]=c->r[6]-c->r[5]; // 800CF598
  W32(c->r[3]+0x00000010u,c->r[6]); // 800CF59C
  c->r[4]=c->r[4]-c->r[0]; // 800CF5A0
L_800CF5A4:;
  c->r[0]=0u+0x43300000u; // 800CF5A4
  c->r[4]=c->r[4]^0x80000000u; // 800CF5A8
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800CF5AC
  {uint32_t ea=c->r[2]+0xFFFF9AD0u; c->f[4]=RF64(ea);} // 800CF5B0
  W32(c->r[1]+0x00000008u,c->r[0]); // 800CF5B4
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CF5B8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 800CF5BC
  {uint32_t ea=c->r[2]+0xFFFF9AC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CF5C0
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 800CF5C4
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CF5C8
  W32(c->r[1]+0x00000018u,c->r[0]); // 800CF5CC
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[3]); // 800CF5D0
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 800CF5D4
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 800CF5D8
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 800CF5DC
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 800CF5E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CF5E4
  c->r[0]=c->r[0]^0x80000000u; // 800CF5E8
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800CF5EC
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 800CF5F0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 800CF5F4
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 800CF5F8
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 800CF5FC
L_800CF600:;
  c->r[1]=c->r[1]+0x00000020u; // 800CF600
  return; // 800CF604
}

// fn_800CF610
void f_800CF610(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF610
  c->r[0]=c->lr; // 800CF614
  {uint32_t ea=c->r[2]+0xFFFF9AC0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CF618
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CF61C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CF620
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CF624
  c->r[31]=c->r[3]|c->r[3]; // 800CF628
  fcmp(c,0,c->f[1],c->f[0]); // 800CF62C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800CF630
  if (!crb(c,2)) { goto L_800CF63C; } // 800CF634
  goto L_800CF774; // 800CF638
L_800CF63C:;
  c->r[4]=R32(c->r[3]+0x00000010u); // 800CF63C
  c->r[0]=R32(c->r[3]+0x00000008u); // 800CF640
  cmpu(c,0,c->r[4],c->r[0]); // 800CF644
  if (!crb(c,0)) { goto L_800CF650; } // 800CF648
  goto L_800CF774; // 800CF64C
L_800CF650:;
  {uint32_t ea=c->r[2]+0xFFFF9ADCu; c->f[2]=c->ps1[2]=RF32(ea);} // 800CF650
  c->r[0]=0u+0x00000000u; // 800CF654
  {uint32_t ea=c->r[3]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CF658
  {uint32_t ea=c->r[2]+0xFFFF9AD8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CF65C
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800CF660
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 800CF664
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800CF668
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 800CF66C
  c->r[30]=R32(c->r[1]+0x0000000Cu); // 800CF670
  cmpu(c,0,c->r[30],0x0000007Fu); // 800CF674
  if (crb(c,1)) { goto L_800CF680; } // 800CF678
  c->r[0]=0u+0x00000001u; // 800CF67C
L_800CF680:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CF680
  if (!crb(c,2)) { goto L_800CF6B0; } // 800CF684
  c->r[3]=0u+0x80250000u; // 800CF688
  c->r[5]=0u+0x80250000u; // 800CF68C
  c->r[6]=c->r[30]|c->r[30]; // 800CF690
  c->r[4]=0u+0x0000007Bu; // 800CF694
  c->r[3]=c->r[3]+0x000062D8u; // 800CF698
  c->r[5]=c->r[5]+0x000062E4u; // 800CF69C
  c->r[7]=0u+0x00000000u; // 800CF6A0
  c->r[8]=0u+0x00000080u; // 800CF6A4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CF6A8
  c->lr=0x800CF6B0u; f_800F1300(c); // 800CF6AC
L_800CF6B0:;
  cmps(c,0,(int32_t)c->r[30],32); // 800CF6B0
  if (!crb(c,0)) { goto L_800CF6CC; } // 800CF6B4
  c->r[3]=0u+0x80220000u; // 800CF6B8
  c->r[3]=c->r[3]+0x00000F20u; // 800CF6BC
  c->r[0]=R8(c->r[3]+c->r[30]); // 800CF6C0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800CF6C4
  goto L_800CF72C; // 800CF6C8
L_800CF6CC:;
  cmps(c,0,(int32_t)c->r[30],64); // 800CF6CC
  if (!crb(c,0)) { goto L_800CF6EC; } // 800CF6D0
  c->r[3]=0u+0x80220000u; // 800CF6D4
  c->r[0]=addc(c,~c->r[30],0x00000040u,1); // 800CF6D8
  c->r[3]=c->r[3]+0x00000F20u; // 800CF6DC
  c->r[0]=R8(c->r[3]+c->r[0]); // 800CF6E0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800CF6E4
  goto L_800CF72C; // 800CF6E8
L_800CF6EC:;
  cmps(c,0,(int32_t)c->r[30],96); // 800CF6EC
  if (!crb(c,0)) { goto L_800CF710; } // 800CF6F0
  c->r[3]=0u+0x80220000u; // 800CF6F4
  c->r[3]=c->r[3]+0x00000F20u; // 800CF6F8
  c->r[3]=c->r[30]+c->r[3]; // 800CF6FC
  c->r[0]=R8(c->r[3]+0xFFFFFFC0u); // 800CF700
  c->r[0]=0u-c->r[0]; // 800CF704
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800CF708
  goto L_800CF72C; // 800CF70C
L_800CF710:;
  c->r[0]=c->r[30]+0xFFFFFFA0u; // 800CF710
  c->r[3]=0u+0x80220000u; // 800CF714
  c->r[0]=addc(c,~c->r[0],0x00000020u,1); // 800CF718
  c->r[3]=c->r[3]+0x00000F20u; // 800CF71C
  c->r[0]=R8(c->r[3]+c->r[0]); // 800CF720
  c->r[0]=0u-c->r[0]; // 800CF724
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800CF728
L_800CF72C:;
  c->r[3]=0u+0x43300000u; // 800CF72C
  c->r[0]=c->r[0]^0x80000000u; // 800CF730
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800CF734
  {uint32_t ea=c->r[2]+0xFFFF9AD0u; c->f[2]=RF64(ea);} // 800CF738
  W32(c->r[1]+0x00000008u,c->r[3]); // 800CF73C
  c->r[0]=R8(c->r[31]+0x0000000Cu); // 800CF740
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 800CF744
  {uint32_t ea=c->r[2]+0xFFFF9AE0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CF748
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800CF74C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CF750
  {uint32_t ea=c->r[31]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 800CF754
  W32(c->r[1]+0x00000010u,c->r[3]); // 800CF758
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 800CF75C
  {uint32_t ea=c->r[2]+0xFFFF9AE8u; c->f[2]=RF64(ea);} // 800CF760
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 800CF764
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[3]); // 800CF768
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 800CF76C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 800CF770
L_800CF774:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CF774
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CF778
  c->r[30]=R32(c->r[1]+0x00000018u); // 800CF77C
  c->lr=c->r[0]; // 800CF780
  c->r[1]=c->r[1]+0x00000020u; // 800CF784
  return; // 800CF788
}

// fn_800CF790
void f_800CF790(Ctx* __restrict c) {
  f_800D3400(c); return; // 800CF790
}

// fn_800CF7A0
void f_800CF7A0(Ctx* __restrict c) {
  c->r[12]=R32(c->r[3]+0x00000000u); // 800CF7A0
  c->r[12]=R32(c->r[12]+0x00000010u); // 800CF7A4
  c->ctr=c->r[12]; // 800CF7A8
  if (true) { dispatch(c,c->ctr); return; } // 800CF7AC
}

// fn_800CF7B0
void f_800CF7B0(Ctx* __restrict c) {
  return; // 800CF7B0
}

// fn_800CF7C0
void f_800CF7C0(Ctx* __restrict c) {
  return; // 800CF7C0
}

// fn_800CF7D0
void f_800CF7D0(Ctx* __restrict c) {
  c->r[3]=R8(c->r[3]+0x000000CEu); // 800CF7D0
  return; // 800CF7D4
}

// fn_800CF7E0
void f_800CF7E0(Ctx* __restrict c) {
  c->r[3]=R8(c->r[3]+0x000000CDu); // 800CF7E0
  return; // 800CF7E4
}

// fn_800CF7F0
void f_800CF7F0(Ctx* __restrict c) {
  c->r[3]=R8(c->r[3]+0x000000CCu); // 800CF7F0
  return; // 800CF7F4
}

// fn_800CF800
void f_800CF800(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFF4Cu; // 800CF800
  f_800CF7B0(c); return; // 800CF804
}

// fn_800CF810
void f_800CF810(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFF4Cu; // 800CF810
  f_800D2FD0(c); return; // 800CF814
}

// fn_800CF820
void f_800CF820(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFF40u; // 800CF820
  f_800CF7A0(c); return; // 800CF824
}

// fn_800CF830
void f_800CF830(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFF40u; // 800CF830
  f_800CF790(c); return; // 800CF834
}

// fn_800CF840
void f_800CF840(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF840
  c->r[0]=c->lr; // 800CF844
  cmps(c,0,(int32_t)c->r[3],0); // 800CF848
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CF84C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CF850
  c->r[31]=c->r[3]|c->r[3]; // 800CF854
  if (crb(c,2)) { goto L_800CF868; } // 800CF858
  cmps(c,0,(int32_t)c->r[4],0); // 800CF85C
  if (!crb(c,1)) { goto L_800CF868; } // 800CF860
  c->lr=0x800CF868u; f_8015D040(c); // 800CF864
L_800CF868:;
  c->r[3]=c->r[31]|c->r[31]; // 800CF868
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CF86C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CF870
  c->lr=c->r[0]; // 800CF874
  c->r[1]=c->r[1]+0x00000010u; // 800CF878
  return; // 800CF87C
}

// fn_800CF880
void f_800CF880(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF880
  c->r[0]=c->lr; // 800CF884
  W32(c->r[1]+0x00000034u,c->r[0]); // 800CF888
  c->r[11]=c->r[1]+0x00000030u; // 800CF88C
  c->lr=0x800CF894u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CF890
  cmps(c,0,(int32_t)c->r[4],0); // 800CF894
  c->r[31]=0u+0x80250000u; // 800CF898
  c->r[22]=c->r[3]|c->r[3]; // 800CF89C
  c->r[23]=c->r[4]|c->r[4]; // 800CF8A0
  c->r[24]=c->r[5]|c->r[5]; // 800CF8A4
  c->r[31]=c->r[31]+0x00006320u; // 800CF8A8
  if (!crb(c,2)) { goto L_800CF8C4; } // 800CF8AC
  c->r[3]=c->r[31]+0x00000000u; // 800CF8B0
  c->r[5]=c->r[31]+0x00000014u; // 800CF8B4
  c->r[4]=0u+0x00000031u; // 800CF8B8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CF8BC
  c->lr=0x800CF8C4u; f_800F1300(c); // 800CF8C0
L_800CF8C4:;
  c->r[30]=R32(c->r[23]+0x000000C4u); // 800CF8C4
  cmps(c,0,(int32_t)c->r[30],0); // 800CF8C8
  if (!crb(c,2)) { goto L_800CF8E4; } // 800CF8CC
  c->r[3]=c->r[31]+0x00000000u; // 800CF8D0
  c->r[5]=c->r[31]+0x0000003Cu; // 800CF8D4
  c->r[4]=0u+0x00000033u; // 800CF8D8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CF8DC
  c->lr=0x800CF8E4u; f_800F1300(c); // 800CF8E0
L_800CF8E4:;
  c->r[3]=R32(c->r[23]+0x00000020u); // 800CF8E4
  c->r[27]=0u+0x00000000u; // 800CF8E8
  c->r[0]=0u+0x00000000u; // 800CF8EC
  c->r[26]=0u+0x00000001u; // 800CF8F0
  c->r[5]=c->r[3]+0x00000001u; // 800CF8F4
  W32(c->r[23]+0x00000020u,c->r[5]); // 800CF8F8
  c->r[25]=R8(c->r[3]+0x00000000u); // 800CF8FC
  cmpu(c,0,c->r[25],0x000000A2u); // 800CF900
  if (!crb(c,2)) { goto L_800CF924; } // 800CF904
  c->r[4]=R8(c->r[23]+0x00000024u); // 800CF908
  c->r[3]=c->r[5]+0x00000001u; // 800CF90C
  W32(c->r[23]+0x00000020u,c->r[3]); // 800CF910
  c->r[3]=0u-c->r[4]; // 800CF914
  c->r[3]=c->r[3]|c->r[4]; // 800CF918
  c->r[25]=R8(c->r[5]+0x00000000u); // 800CF91C
  c->r[26]=rotl(c->r[3],1)&0x00000001u; // 800CF920
L_800CF924:;
  cmpu(c,0,c->r[25],0x000000A3u); // 800CF924
  if (!crb(c,2)) { goto L_800CF944; } // 800CF928
  c->r[4]=R32(c->r[23]+0x00000020u); // 800CF92C
  c->r[27]=0u+0x00000002u; // 800CF930
  c->r[3]=c->r[4]+0x00000001u; // 800CF934
  W32(c->r[23]+0x00000020u,c->r[3]); // 800CF938
  c->r[25]=R8(c->r[4]+0x00000000u); // 800CF93C
  goto L_800CF980; // 800CF940
L_800CF944:;
  cmpu(c,0,c->r[25],0x000000A4u); // 800CF944
  if (!crb(c,2)) { goto L_800CF964; } // 800CF948
  c->r[4]=R32(c->r[23]+0x00000020u); // 800CF94C
  c->r[27]=0u+0x00000004u; // 800CF950
  c->r[3]=c->r[4]+0x00000001u; // 800CF954
  W32(c->r[23]+0x00000020u,c->r[3]); // 800CF958
  c->r[25]=R8(c->r[4]+0x00000000u); // 800CF95C
  goto L_800CF980; // 800CF960
L_800CF964:;
  cmpu(c,0,c->r[25],0x000000A5u); // 800CF964
  if (!crb(c,2)) { goto L_800CF980; } // 800CF968
  c->r[4]=R32(c->r[23]+0x00000020u); // 800CF96C
  c->r[27]=0u+0x00000005u; // 800CF970
  c->r[3]=c->r[4]+0x00000001u; // 800CF974
  W32(c->r[23]+0x00000020u,c->r[3]); // 800CF978
  c->r[25]=R8(c->r[4]+0x00000000u); // 800CF97C
L_800CF980:;
  cmpu(c,0,c->r[25],0x000000A0u); // 800CF980
  if (!crb(c,2)) { goto L_800CF9A4; } // 800CF984
  c->r[4]=R32(c->r[23]+0x00000020u); // 800CF988
  c->r[28]=0u+0x00000004u; // 800CF98C
  c->r[0]=0u+0x00000001u; // 800CF990
  c->r[3]=c->r[4]+0x00000001u; // 800CF994
  W32(c->r[23]+0x00000020u,c->r[3]); // 800CF998
  c->r[25]=R8(c->r[4]+0x00000000u); // 800CF99C
  goto L_800CF9C4; // 800CF9A0
L_800CF9A4:;
  cmpu(c,0,c->r[25],0x000000A1u); // 800CF9A4
  if (!crb(c,2)) { goto L_800CF9C4; } // 800CF9A8
  c->r[4]=R32(c->r[23]+0x00000020u); // 800CF9AC
  c->r[28]=0u+0x00000005u; // 800CF9B0
  c->r[0]=0u+0x00000001u; // 800CF9B4
  c->r[3]=c->r[4]+0x00000001u; // 800CF9B8
  W32(c->r[23]+0x00000020u,c->r[3]); // 800CF9BC
  c->r[25]=R8(c->r[4]+0x00000000u); // 800CF9C0
L_800CF9C4:;
  c->r[3]=rotl(c->r[25],0)&0x00000080u; cr0(c,c->r[3]); // 800CF9C4
  if (!crb(c,2)) { goto L_800CFAA0; } // 800CF9C8
  c->r[7]=R32(c->r[23]+0x00000020u); // 800CF9CC
  cmps(c,0,(int32_t)c->r[0],0); // 800CF9D0
  c->r[3]=c->r[22]|c->r[22]; // 800CF9D4
  c->r[5]=c->r[30]|c->r[30]; // 800CF9D8
  c->r[0]=c->r[7]+0x00000001u; // 800CF9DC
  W32(c->r[23]+0x00000020u,c->r[0]); // 800CF9E0
  c->r[6]=c->r[23]|c->r[23]; // 800CF9E4
  c->r[4]=c->r[23]+0x00000020u; // 800CF9E8
  c->r[27]=R8(c->r[7]+0x00000000u); // 800CF9EC
  c->r[7]=0u+0x00000003u; // 800CF9F0
  if (crb(c,2)) { goto L_800CF9FC; } // 800CF9F4
  c->r[7]=c->r[28]|c->r[28]; // 800CF9F8
L_800CF9FC:;
  c->lr=0x800CFA00u; f_800D0AC0(c); // 800CF9FC
  c->r[0]=R8(c->r[23]+0x0000008Cu); // 800CFA00
  cmps(c,0,(int32_t)c->r[26],0); // 800CFA04
  c->r[26]=c->r[3]|c->r[3]; // 800CFA08
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800CFA0C
  c->r[3]=c->r[25]+c->r[0]; // 800CFA10
  if (!crb(c,2)) { goto L_800CFA20; } // 800CFA14
  c->r[3]=0u+0x00000000u; // 800CFA18
  goto L_800CFF90; // 800CFA1C
L_800CFA20:;
  cmps(c,0,(int32_t)c->r[3],127); // 800CFA20
  if (!crb(c,1)) { goto L_800CFA30; } // 800CFA24
  c->r[5]=0u+0x0000007Fu; // 800CFA28
  goto L_800CFA38; // 800CFA2C
L_800CFA30:;
  c->r[0]=sraw(c,c->r[3],31); // 800CFA30
  c->r[5]=c->r[3]&~c->r[0]; // 800CFA34
L_800CFA38:;
  c->r[0]=R8(c->r[23]+0x00000048u); // 800CFA38
  cmps(c,0,(int32_t)c->r[0],0); // 800CFA3C
  if (!crb(c,2)) { goto L_800CFA7C; } // 800CFA40
  cmps(c,0,(int32_t)c->r[24],0); // 800CFA44
  if (crb(c,2)) { goto L_800CFA7C; } // 800CFA48
  cmps(c,0,(int32_t)c->r[26],0); // 800CFA4C
  c->r[3]=c->r[22]|c->r[22]; // 800CFA50
  c->r[4]=c->r[23]|c->r[23]; // 800CFA54
  c->r[6]=c->r[27]|c->r[27]; // 800CFA58
  c->r[7]=0u+0xFFFFFFFFu; // 800CFA5C
  if (!crb(c,1)) { goto L_800CFA68; } // 800CFA60
  c->r[7]=c->r[26]|c->r[26]; // 800CFA64
L_800CFA68:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 800CFA68
  c->r[8]=R8(c->r[23]+0x00000026u); // 800CFA6C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800CFA70
  c->ctr=c->r[12]; // 800CFA74
  if (true) { c->lr=0x800CFA7Cu; dispatch(c,c->ctr); } // 800CFA78
L_800CFA7C:;
  c->r[0]=R8(c->r[23]+0x00000025u); // 800CFA7C
  cmps(c,0,(int32_t)c->r[0],0); // 800CFA80
  if (crb(c,2)) { goto L_800CFF8C; } // 800CFA84
  cmps(c,0,(int32_t)c->r[26],0); // 800CFA88
  W32(c->r[23]+0x00000044u,c->r[26]); // 800CFA8C
  if (!crb(c,2)) { goto L_800CFF8C; } // 800CFA90
  c->r[0]=0u+0x00000001u; // 800CFA94
  W8(c->r[23]+0x0000004Au,c->r[0]); // 800CFA98
  goto L_800CFF8C; // 800CFA9C
L_800CFAA0:;
  c->r[3]=rotl(c->r[25],0)&0x000000F0u; // 800CFAA0
  c->r[29]=0u+0x00000000u; // 800CFAA4
  cmps(c,0,(int32_t)c->r[3],192); // 800CFAA8
  c->r[24]=0u+0x00000000u; // 800CFAAC
  if (crb(c,2)) { goto L_800CFCE8; } // 800CFAB0
  if (!crb(c,0)) { goto L_800CFAE8; } // 800CFAB4
  cmps(c,0,(int32_t)c->r[3],160); // 800CFAB8
  if (crb(c,2)) { goto L_800CFF74; } // 800CFABC
  if (!crb(c,0)) { goto L_800CFADC; } // 800CFAC0
  cmps(c,0,(int32_t)c->r[3],144); // 800CFAC4
  if (crb(c,2)) { goto L_800CFD7C; } // 800CFAC8
  if (!crb(c,0)) { goto L_800CFF8C; } // 800CFACC
  cmps(c,0,(int32_t)c->r[3],128); // 800CFAD0
  if (crb(c,2)) { goto L_800CFB0C; } // 800CFAD4
  goto L_800CFF8C; // 800CFAD8
L_800CFADC:;
  cmps(c,0,(int32_t)c->r[3],176); // 800CFADC
  if (crb(c,2)) { goto L_800CFCE8; } // 800CFAE0
  goto L_800CFF8C; // 800CFAE4
L_800CFAE8:;
  cmps(c,0,(int32_t)c->r[3],224); // 800CFAE8
  if (crb(c,2)) { goto L_800CFDAC; } // 800CFAEC
  if (!crb(c,0)) { goto L_800CFB00; } // 800CFAF0
  cmps(c,0,(int32_t)c->r[3],208); // 800CFAF4
  if (crb(c,2)) { goto L_800CFCE8; } // 800CFAF8
  goto L_800CFF8C; // 800CFAFC
L_800CFB00:;
  cmps(c,0,(int32_t)c->r[3],240); // 800CFB00
  if (crb(c,2)) { goto L_800CFE00; } // 800CFB04
  goto L_800CFF8C; // 800CFB08
L_800CFB0C:;
  cmpu(c,0,c->r[25],0x00000080u); // 800CFB0C
  if (crb(c,2)) { goto L_800CFB38; } // 800CFB10
  cmpu(c,0,c->r[25],0x00000081u); // 800CFB14
  if (crb(c,2)) { goto L_800CFB6C; } // 800CFB18
  cmpu(c,0,c->r[25],0x00000088u); // 800CFB1C
  if (crb(c,2)) { goto L_800CFBC0; } // 800CFB20
  cmpu(c,0,c->r[25],0x00000089u); // 800CFB24
  if (crb(c,2)) { goto L_800CFC28; } // 800CFB28
  cmpu(c,0,c->r[25],0x0000008Au); // 800CFB2C
  if (crb(c,2)) { goto L_800CFC88; } // 800CFB30
  goto L_800CFF8C; // 800CFB34
L_800CFB38:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CFB38
  c->r[3]=c->r[22]|c->r[22]; // 800CFB3C
  c->r[5]=c->r[30]|c->r[30]; // 800CFB40
  c->r[6]=c->r[23]|c->r[23]; // 800CFB44
  c->r[4]=c->r[23]+0x00000020u; // 800CFB48
  c->r[7]=0u+0x00000003u; // 800CFB4C
  if (crb(c,2)) { goto L_800CFB58; } // 800CFB50
  c->r[7]=c->r[28]|c->r[28]; // 800CFB54
L_800CFB58:;
  c->lr=0x800CFB5Cu; f_800D0AC0(c); // 800CFB58
  cmps(c,0,(int32_t)c->r[26],0); // 800CFB5C
  if (crb(c,2)) { goto L_800CFF8C; } // 800CFB60
  W32(c->r[23]+0x00000044u,c->r[3]); // 800CFB64
  goto L_800CFF8C; // 800CFB68
L_800CFB6C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CFB6C
  c->r[3]=c->r[22]|c->r[22]; // 800CFB70
  c->r[5]=c->r[30]|c->r[30]; // 800CFB74
  c->r[6]=c->r[23]|c->r[23]; // 800CFB78
  c->r[4]=c->r[23]+0x00000020u; // 800CFB7C
  c->r[7]=0u+0x00000003u; // 800CFB80
  if (crb(c,2)) { goto L_800CFB8C; } // 800CFB84
  c->r[7]=c->r[28]|c->r[28]; // 800CFB88
L_800CFB8C:;
  c->lr=0x800CFB90u; f_800D0AC0(c); // 800CFB8C
  cmps(c,0,(int32_t)c->r[26],0); // 800CFB90
  c->r[6]=c->r[3]|c->r[3]; // 800CFB94
  if (crb(c,2)) { goto L_800CFF8C; } // 800CFB98
  c->r[12]=R32(c->r[22]+0x00000000u); // 800CFB9C
  c->r[3]=c->r[22]|c->r[22]; // 800CFBA0
  c->r[4]=c->r[23]|c->r[23]; // 800CFBA4
  c->r[5]=c->r[25]|c->r[25]; // 800CFBA8
  c->r[12]=R32(c->r[12]+0x00000008u); // 800CFBAC
  c->r[7]=0u+0x00000000u; // 800CFBB0
  c->ctr=c->r[12]; // 800CFBB4
  if (true) { c->lr=0x800CFBBCu; dispatch(c,c->ctr); } // 800CFBB8
  goto L_800CFF8C; // 800CFBBC
L_800CFBC0:;
  c->r[3]=R32(c->r[23]+0x00000020u); // 800CFBC0
  cmps(c,0,(int32_t)c->r[26],0); // 800CFBC4
  c->r[4]=c->r[3]+0x00000001u; // 800CFBC8
  W32(c->r[23]+0x00000020u,c->r[4]); // 800CFBCC
  c->r[5]=c->r[4]+0x00000001u; // 800CFBD0
  c->r[6]=R8(c->r[3]+0x00000000u); // 800CFBD4
  c->r[3]=c->r[5]+0x00000001u; // 800CFBD8
  c->r[0]=c->r[3]+0x00000001u; // 800CFBDC
  W32(c->r[23]+0x00000020u,c->r[5]); // 800CFBE0
  c->r[4]=R8(c->r[4]+0x00000000u); // 800CFBE4
  W32(c->r[23]+0x00000020u,c->r[3]); // 800CFBE8
  c->r[7]=R8(c->r[5]+0x00000000u); // 800CFBEC
  c->r[7]=(rotl(c->r[4],8)&0x0000FF00u)|(c->r[7]&~0x0000FF00u); // 800CFBF0
  W32(c->r[23]+0x00000020u,c->r[0]); // 800CFBF4
  c->r[7]=rotl(c->r[7],8)&0xFFFFFF00u; // 800CFBF8
  c->r[0]=R8(c->r[5]+0x00000001u); // 800CFBFC
  c->r[7]=c->r[7]|c->r[0]; // 800CFC00
  if (crb(c,2)) { goto L_800CFF8C; } // 800CFC04
  c->r[12]=R32(c->r[22]+0x00000000u); // 800CFC08
  c->r[3]=c->r[22]|c->r[22]; // 800CFC0C
  c->r[4]=c->r[23]|c->r[23]; // 800CFC10
  c->r[5]=c->r[25]|c->r[25]; // 800CFC14
  c->r[12]=R32(c->r[12]+0x00000008u); // 800CFC18
  c->ctr=c->r[12]; // 800CFC1C
  if (true) { c->lr=0x800CFC24u; dispatch(c,c->ctr); } // 800CFC20
  goto L_800CFF8C; // 800CFC24
L_800CFC28:;
  c->r[4]=R32(c->r[23]+0x00000020u); // 800CFC28
  cmps(c,0,(int32_t)c->r[26],0); // 800CFC2C
  c->r[5]=c->r[4]+0x00000001u; // 800CFC30
  W32(c->r[23]+0x00000020u,c->r[5]); // 800CFC34
  c->r[3]=c->r[5]+0x00000001u; // 800CFC38
  c->r[4]=R8(c->r[4]+0x00000000u); // 800CFC3C
  c->r[0]=c->r[3]+0x00000001u; // 800CFC40
  W32(c->r[23]+0x00000020u,c->r[3]); // 800CFC44
  c->r[6]=R8(c->r[5]+0x00000000u); // 800CFC48
  c->r[6]=(rotl(c->r[4],8)&0x0000FF00u)|(c->r[6]&~0x0000FF00u); // 800CFC4C
  W32(c->r[23]+0x00000020u,c->r[0]); // 800CFC50
  c->r[6]=rotl(c->r[6],8)&0xFFFFFF00u; // 800CFC54
  c->r[0]=R8(c->r[5]+0x00000001u); // 800CFC58
  c->r[6]=c->r[6]|c->r[0]; // 800CFC5C
  if (crb(c,2)) { goto L_800CFF8C; } // 800CFC60
  c->r[12]=R32(c->r[22]+0x00000000u); // 800CFC64
  c->r[3]=c->r[22]|c->r[22]; // 800CFC68
  c->r[4]=c->r[23]|c->r[23]; // 800CFC6C
  c->r[5]=c->r[25]|c->r[25]; // 800CFC70
  c->r[12]=R32(c->r[12]+0x00000008u); // 800CFC74
  c->r[7]=0u+0x00000000u; // 800CFC78
  c->ctr=c->r[12]; // 800CFC7C
  if (true) { c->lr=0x800CFC84u; dispatch(c,c->ctr); } // 800CFC80
  goto L_800CFF8C; // 800CFC84
L_800CFC88:;
  c->r[4]=R32(c->r[23]+0x00000020u); // 800CFC88
  cmps(c,0,(int32_t)c->r[26],0); // 800CFC8C
  c->r[5]=c->r[4]+0x00000001u; // 800CFC90
  W32(c->r[23]+0x00000020u,c->r[5]); // 800CFC94
  c->r[3]=c->r[5]+0x00000001u; // 800CFC98
  c->r[4]=R8(c->r[4]+0x00000000u); // 800CFC9C
  c->r[0]=c->r[3]+0x00000001u; // 800CFCA0
  W32(c->r[23]+0x00000020u,c->r[3]); // 800CFCA4
  c->r[6]=R8(c->r[5]+0x00000000u); // 800CFCA8
  c->r[6]=(rotl(c->r[4],8)&0x0000FF00u)|(c->r[6]&~0x0000FF00u); // 800CFCAC
  W32(c->r[23]+0x00000020u,c->r[0]); // 800CFCB0
  c->r[6]=rotl(c->r[6],8)&0xFFFFFF00u; // 800CFCB4
  c->r[0]=R8(c->r[5]+0x00000001u); // 800CFCB8
  c->r[6]=c->r[6]|c->r[0]; // 800CFCBC
  if (crb(c,2)) { goto L_800CFF8C; } // 800CFCC0
  c->r[12]=R32(c->r[22]+0x00000000u); // 800CFCC4
  c->r[3]=c->r[22]|c->r[22]; // 800CFCC8
  c->r[4]=c->r[23]|c->r[23]; // 800CFCCC
  c->r[5]=c->r[25]|c->r[25]; // 800CFCD0
  c->r[12]=R32(c->r[12]+0x00000008u); // 800CFCD4
  c->r[7]=0u+0x00000000u; // 800CFCD8
  c->ctr=c->r[12]; // 800CFCDC
  if (true) { c->lr=0x800CFCE4u; dispatch(c,c->ctr); } // 800CFCE0
  goto L_800CFF8C; // 800CFCE4
L_800CFCE8:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CFCE8
  c->r[3]=c->r[22]|c->r[22]; // 800CFCEC
  c->r[5]=c->r[30]|c->r[30]; // 800CFCF0
  c->r[6]=c->r[23]|c->r[23]; // 800CFCF4
  c->r[4]=c->r[23]+0x00000020u; // 800CFCF8
  c->r[7]=0u+0x00000001u; // 800CFCFC
  if (crb(c,2)) { goto L_800CFD08; } // 800CFD00
  c->r[7]=c->r[28]|c->r[28]; // 800CFD04
L_800CFD08:;
  c->lr=0x800CFD0Cu; f_800D0AC0(c); // 800CFD08
  cmps(c,0,(int32_t)c->r[27],0); // 800CFD0C
  c->r[28]=c->r[3]|c->r[3]; // 800CFD10
  if (crb(c,2)) { goto L_800CFD34; } // 800CFD14
  c->r[3]=c->r[22]|c->r[22]; // 800CFD18
  c->r[5]=c->r[30]|c->r[30]; // 800CFD1C
  c->r[6]=c->r[23]|c->r[23]; // 800CFD20
  c->r[7]=c->r[27]|c->r[27]; // 800CFD24
  c->r[4]=c->r[23]+0x00000020u; // 800CFD28
  c->lr=0x800CFD30u; f_800D0AC0(c); // 800CFD2C
  c->r[24]=c->r[3]|c->r[3]; // 800CFD30
L_800CFD34:;
  cmps(c,0,(int32_t)c->r[26],0); // 800CFD34
  if (crb(c,2)) { goto L_800CFF8C; } // 800CFD38
  c->r[0]=c->r[25]+0xFFFFFF3Du; // 800CFD3C
  c->r[3]=c->r[22]|c->r[22]; // 800CFD40
  cmpu(c,0,c->r[0],0x00000001u); // 800CFD44
  c->r[4]=c->r[23]|c->r[23]; // 800CFD48
  c->r[5]=c->r[25]|c->r[25]; // 800CFD4C
  if (crb(c,1)) { goto L_800CFD60; } // 800CFD50
  c->r[6]=rotl(c->r[28],0)&0x000000FFu; // 800CFD54
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 800CFD58
  goto L_800CFD64; // 800CFD5C
L_800CFD60:;
  c->r[6]=rotl(c->r[28],0)&0x000000FFu; // 800CFD60
L_800CFD64:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 800CFD64
  c->r[7]=c->r[24]|c->r[24]; // 800CFD68
  c->r[12]=R32(c->r[12]+0x00000008u); // 800CFD6C
  c->ctr=c->r[12]; // 800CFD70
  if (true) { c->lr=0x800CFD78u; dispatch(c,c->ctr); } // 800CFD74
  goto L_800CFF8C; // 800CFD78
L_800CFD7C:;
  cmps(c,0,(int32_t)c->r[26],0); // 800CFD7C
  if (crb(c,2)) { goto L_800CFF8C; } // 800CFD80
  c->r[12]=R32(c->r[22]+0x00000000u); // 800CFD84
  c->r[3]=c->r[22]|c->r[22]; // 800CFD88
  c->r[4]=c->r[23]|c->r[23]; // 800CFD8C
  c->r[5]=c->r[25]|c->r[25]; // 800CFD90
  c->r[12]=R32(c->r[12]+0x00000008u); // 800CFD94
  c->r[6]=0u+0x00000000u; // 800CFD98
  c->r[7]=0u+0x00000000u; // 800CFD9C
  c->ctr=c->r[12]; // 800CFDA0
  if (true) { c->lr=0x800CFDA8u; dispatch(c,c->ctr); } // 800CFDA4
  goto L_800CFF8C; // 800CFDA8
L_800CFDAC:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CFDAC
  c->r[3]=c->r[22]|c->r[22]; // 800CFDB0
  c->r[5]=c->r[30]|c->r[30]; // 800CFDB4
  c->r[6]=c->r[23]|c->r[23]; // 800CFDB8
  c->r[4]=c->r[23]+0x00000020u; // 800CFDBC
  c->r[7]=0u+0x00000002u; // 800CFDC0
  if (crb(c,2)) { goto L_800CFDCC; } // 800CFDC4
  c->r[7]=c->r[28]|c->r[28]; // 800CFDC8
L_800CFDCC:;
  c->lr=0x800CFDD0u; f_800D0AC0(c); // 800CFDCC
  cmps(c,0,(int32_t)c->r[26],0); // 800CFDD0
  c->r[6]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 800CFDD4
  if (crb(c,2)) { goto L_800CFF8C; } // 800CFDD8
  c->r[12]=R32(c->r[22]+0x00000000u); // 800CFDDC
  c->r[3]=c->r[22]|c->r[22]; // 800CFDE0
  c->r[4]=c->r[23]|c->r[23]; // 800CFDE4
  c->r[5]=c->r[25]|c->r[25]; // 800CFDE8
  c->r[12]=R32(c->r[12]+0x00000008u); // 800CFDEC
  c->r[7]=0u+0x00000000u; // 800CFDF0
  c->ctr=c->r[12]; // 800CFDF4
  if (true) { c->lr=0x800CFDFCu; dispatch(c,c->ctr); } // 800CFDF8
  goto L_800CFF8C; // 800CFDFC
L_800CFE00:;
  cmpu(c,0,c->r[25],0x000000FEu); // 800CFE00
  if (crb(c,2)) { goto L_800CFE1C; } // 800CFE04
  cmpu(c,0,c->r[25],0x000000FFu); // 800CFE08
  if (crb(c,2)) { goto L_800CFE40; } // 800CFE0C
  cmpu(c,0,c->r[25],0x000000F0u); // 800CFE10
  if (crb(c,2)) { goto L_800CFE50; } // 800CFE14
  goto L_800CFF44; // 800CFE18
L_800CFE1C:;
  c->r[6]=R32(c->r[23]+0x00000020u); // 800CFE1C
  c->r[3]=c->r[31]+0x00000000u; // 800CFE20
  c->r[5]=c->r[31]+0x00000064u; // 800CFE24
  c->r[4]=0u+0x00000138u; // 800CFE28
  c->r[0]=c->r[6]+0x00000002u; // 800CFE2C
  W32(c->r[23]+0x00000020u,c->r[0]); // 800CFE30
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CFE34
  c->lr=0x800CFE3Cu; f_800F1300(c); // 800CFE38
  goto L_800CFF8C; // 800CFE3C
L_800CFE40:;
  cmps(c,0,(int32_t)c->r[26],0); // 800CFE40
  if (crb(c,2)) { goto L_800CFF8C; } // 800CFE44
  c->r[3]=0u+0x00000001u; // 800CFE48
  goto L_800CFF90; // 800CFE4C
L_800CFE50:;
  c->r[4]=R32(c->r[23]+0x00000020u); // 800CFE50
  c->r[3]=c->r[4]+0x00000001u; // 800CFE54
  W32(c->r[23]+0x00000020u,c->r[3]); // 800CFE58
  c->r[27]=R8(c->r[4]+0x00000000u); // 800CFE5C
  c->r[3]=rotl(c->r[27],0)&0x000000F0u; // 800CFE60
  cmpu(c,0,c->r[3],0x000000E0u); // 800CFE64
  if (crb(c,2)) { goto L_800CFE80; } // 800CFE68
  cmpu(c,0,c->r[3],0x00000080u); // 800CFE6C
  if (crb(c,2)) { goto L_800CFEDC; } // 800CFE70
  cmpu(c,0,c->r[3],0x00000090u); // 800CFE74
  if (crb(c,2)) { goto L_800CFEDC; } // 800CFE78
  goto L_800CFF44; // 800CFE7C
L_800CFE80:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CFE80
  c->r[3]=c->r[22]|c->r[22]; // 800CFE84
  c->r[5]=c->r[30]|c->r[30]; // 800CFE88
  c->r[6]=c->r[23]|c->r[23]; // 800CFE8C
  c->r[4]=c->r[23]+0x00000020u; // 800CFE90
  c->r[7]=0u+0x00000002u; // 800CFE94
  if (crb(c,2)) { goto L_800CFEA0; } // 800CFE98
  c->r[7]=c->r[28]|c->r[28]; // 800CFE9C
L_800CFEA0:;
  c->lr=0x800CFEA4u; f_800D0AC0(c); // 800CFEA0
  cmps(c,0,(int32_t)c->r[26],0); // 800CFEA4
  c->r[29]=rotl(c->r[3],0)&0x0000FFFFu; // 800CFEA8
  if (crb(c,2)) { goto L_800CFF44; } // 800CFEAC
  c->r[12]=R32(c->r[22]+0x00000000u); // 800CFEB0
  c->r[0]=rotl(c->r[25],8)&0xFFFFFF00u; // 800CFEB4
  c->r[3]=c->r[22]|c->r[22]; // 800CFEB8
  c->r[4]=c->r[23]|c->r[23]; // 800CFEBC
  c->r[12]=R32(c->r[12]+0x00000008u); // 800CFEC0
  c->r[6]=c->r[29]|c->r[29]; // 800CFEC4
  c->r[5]=c->r[0]+c->r[27]; // 800CFEC8
  c->r[7]=0u+0x00000000u; // 800CFECC
  c->ctr=c->r[12]; // 800CFED0
  if (true) { c->lr=0x800CFED8u; dispatch(c,c->ctr); } // 800CFED4
  goto L_800CFF44; // 800CFED8
L_800CFEDC:;
  c->r[7]=R32(c->r[23]+0x00000020u); // 800CFEDC
  cmps(c,0,(int32_t)c->r[0],0); // 800CFEE0
  c->r[3]=c->r[22]|c->r[22]; // 800CFEE4
  c->r[5]=c->r[30]|c->r[30]; // 800CFEE8
  c->r[0]=c->r[7]+0x00000001u; // 800CFEEC
  W32(c->r[23]+0x00000020u,c->r[0]); // 800CFEF0
  c->r[6]=c->r[23]|c->r[23]; // 800CFEF4
  c->r[4]=c->r[23]+0x00000020u; // 800CFEF8
  c->r[29]=R8(c->r[7]+0x00000000u); // 800CFEFC
  c->r[7]=0u+0x00000002u; // 800CFF00
  if (crb(c,2)) { goto L_800CFF0C; } // 800CFF04
  c->r[7]=c->r[28]|c->r[28]; // 800CFF08
L_800CFF0C:;
  c->lr=0x800CFF10u; f_800D0AC0(c); // 800CFF0C
  cmps(c,0,(int32_t)c->r[26],0); // 800CFF10
  c->r[24]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 800CFF14
  if (crb(c,2)) { goto L_800CFF44; } // 800CFF18
  c->r[12]=R32(c->r[22]+0x00000000u); // 800CFF1C
  c->r[0]=rotl(c->r[25],8)&0xFFFFFF00u; // 800CFF20
  c->r[3]=c->r[22]|c->r[22]; // 800CFF24
  c->r[4]=c->r[23]|c->r[23]; // 800CFF28
  c->r[12]=R32(c->r[12]+0x00000008u); // 800CFF2C
  c->r[6]=c->r[29]|c->r[29]; // 800CFF30
  c->r[7]=c->r[24]|c->r[24]; // 800CFF34
  c->r[5]=c->r[0]+c->r[27]; // 800CFF38
  c->ctr=c->r[12]; // 800CFF3C
  if (true) { c->lr=0x800CFF44u; dispatch(c,c->ctr); } // 800CFF40
L_800CFF44:;
  cmps(c,0,(int32_t)c->r[26],0); // 800CFF44
  if (crb(c,2)) { goto L_800CFF8C; } // 800CFF48
  c->r[12]=R32(c->r[22]+0x00000000u); // 800CFF4C
  c->r[3]=c->r[22]|c->r[22]; // 800CFF50
  c->r[4]=c->r[23]|c->r[23]; // 800CFF54
  c->r[5]=c->r[25]|c->r[25]; // 800CFF58
  c->r[12]=R32(c->r[12]+0x00000008u); // 800CFF5C
  c->r[6]=c->r[29]|c->r[29]; // 800CFF60
  c->r[7]=c->r[24]|c->r[24]; // 800CFF64
  c->ctr=c->r[12]; // 800CFF68
  if (true) { c->lr=0x800CFF70u; dispatch(c,c->ctr); } // 800CFF6C
  goto L_800CFF8C; // 800CFF70
L_800CFF74:;
  c->r[6]=c->r[25]|c->r[25]; // 800CFF74
  c->r[3]=c->r[31]+0x00000000u; // 800CFF78
  c->r[5]=c->r[31]+0x00000090u; // 800CFF7C
  c->r[4]=0u+0x00000188u; // 800CFF80
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CFF84
  c->lr=0x800CFF8Cu; f_800F1300(c); // 800CFF88
L_800CFF8C:;
  c->r[3]=0u+0x00000000u; // 800CFF8C
L_800CFF90:;
  c->r[11]=c->r[1]+0x00000030u; // 800CFF90
  c->lr=0x800CFF98u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CFF94
  c->r[0]=R32(c->r[1]+0x00000034u); // 800CFF98
  c->lr=c->r[0]; // 800CFF9C
  c->r[1]=c->r[1]+0x00000030u; // 800CFFA0
  return; // 800CFFA4
}

// fn_800CFFB0
void f_800CFFB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CFFB0
  c->r[0]=c->lr; // 800CFFB4
  W32(c->r[1]+0x00000044u,c->r[0]); // 800CFFB8
  c->r[11]=c->r[1]+0x00000040u; // 800CFFBC
  c->lr=0x800CFFC4u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CFFC0
  cmps(c,0,(int32_t)c->r[4],0); // 800CFFC4
  c->r[0]=0u+0x43300000u; // 800CFFC8
  c->r[31]=0u+0x80250000u; // 800CFFCC
  W32(c->r[1]+0x00000008u,c->r[0]); // 800CFFD0
  c->r[26]=c->r[4]|c->r[4]; // 800CFFD4
  c->r[24]=c->r[5]|c->r[5]; // 800CFFD8
  W32(c->r[1]+0x00000010u,c->r[0]); // 800CFFDC
  c->r[27]=c->r[6]|c->r[6]; // 800CFFE0
  c->r[28]=c->r[7]|c->r[7]; // 800CFFE4
  c->r[31]=c->r[31]+0x00006320u; // 800CFFE8
  if (!crb(c,2)) { goto L_800D0004; } // 800CFFEC
  c->r[3]=c->r[31]+0x00000000u; // 800CFFF0
  c->r[5]=c->r[31]+0x00000014u; // 800CFFF4
  c->r[4]=0u+0x000001A5u; // 800CFFF8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CFFFC
  c->lr=0x800D0004u; f_800F1300(c); // 800D0000
L_800D0004:;
  c->r[25]=R32(c->r[26]+0x000000C4u); // 800D0004
  cmps(c,0,(int32_t)c->r[25],0); // 800D0008
  if (!crb(c,2)) { goto L_800D0024; } // 800D000C
  c->r[3]=c->r[31]+0x00000000u; // 800D0010
  c->r[5]=c->r[31]+0x0000003Cu; // 800D0014
  c->r[4]=0u+0x000001A7u; // 800D0018
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D001C
  c->lr=0x800D0024u; f_800F1300(c); // 800D0020
L_800D0024:;
  cmpu(c,0,c->r[24],0x000000FFu); // 800D0024
  c->r[30]=c->r[26]+0x0000001Cu; // 800D0028
  if (crb(c,1)) { goto L_800D0748; } // 800D002C
  c->r[0]=c->r[24]+0xFFFFFF7Fu; // 800D0030
  cmpu(c,0,c->r[0],0x0000007Cu); // 800D0034
  if (crb(c,1)) { goto L_800D0A88; } // 800D0038
  c->r[3]=0u+0x80250000u; // 800D003C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D0040
  c->r[3]=c->r[3]+0x000065ECu; // 800D0044
  c->r[3]=R32(c->r[3]+c->r[0]); // 800D0048
  c->ctr=c->r[3]; // 800D004C
  if (true) { switch (c->ctr) { case 0x800D0054u: goto L_800D0054; case 0x800D0074u: goto L_800D0074; case 0x800D007Cu: goto L_800D007C; case 0x800D00B0u: goto L_800D00B0; case 0x800D00C0u: goto L_800D00C0; case 0x800D010Cu: goto L_800D010C; case 0x800D0114u: goto L_800D0114; case 0x800D011Cu: goto L_800D011C; case 0x800D0124u: goto L_800D0124; case 0x800D012Cu: goto L_800D012C; case 0x800D0184u: goto L_800D0184; case 0x800D018Cu: goto L_800D018C; case 0x800D01E8u: goto L_800D01E8; case 0x800D01F4u: goto L_800D01F4; case 0x800D024Cu: goto L_800D024C; case 0x800D0254u: goto L_800D0254; case 0x800D0268u: goto L_800D0268; case 0x800D0270u: goto L_800D0270; case 0x800D0294u: goto L_800D0294; case 0x800D02B8u: goto L_800D02B8; case 0x800D02C0u: goto L_800D02C0; case 0x800D02C8u: goto L_800D02C8; case 0x800D02D8u: goto L_800D02D8; case 0x800D02FCu: goto L_800D02FC; case 0x800D0304u: goto L_800D0304; case 0x800D030Cu: goto L_800D030C; case 0x800D0314u: goto L_800D0314; case 0x800D031Cu: goto L_800D031C; case 0x800D0328u: goto L_800D0328; case 0x800D0344u: goto L_800D0344; case 0x800D0368u: goto L_800D0368; case 0x800D0390u: goto L_800D0390; case 0x800D03BCu: goto L_800D03BC; case 0x800D03D4u: goto L_800D03D4; case 0x800D03E8u: goto L_800D03E8; case 0x800D0410u: goto L_800D0410; case 0x800D0418u: goto L_800D0418; case 0x800D043Cu: goto L_800D043C; case 0x800D0444u: goto L_800D0444; case 0x800D044Cu: goto L_800D044C; case 0x800D0454u: goto L_800D0454; case 0x800D045Cu: goto L_800D045C; case 0x800D0534u: goto L_800D0534; case 0x800D05A4u: goto L_800D05A4; case 0x800D05B4u: goto L_800D05B4; case 0x800D060Cu: goto L_800D060C; case 0x800D0674u: goto L_800D0674; case 0x800D06C4u: goto L_800D06C4; case 0x800D0A88u: goto L_800D0A88; default: break; } dispatch(c,c->ctr); return; } // 800D0050
L_800D0054:;
  cmps(c,0,(int32_t)c->r[27],1023); // 800D0054
  if (!crb(c,1)) { goto L_800D0064; } // 800D0058
  c->r[0]=0u+0x000003FFu; // 800D005C
  goto L_800D006C; // 800D0060
L_800D0064:;
  c->r[0]=sraw(c,c->r[27],31); // 800D0064
  c->r[0]=c->r[27]&~c->r[0]; // 800D0068
L_800D006C:;
  W16(c->r[25]+0x000000ECu,c->r[0]); // 800D006C
  goto L_800D0A88; // 800D0070
L_800D0074:;
  W8(c->r[25]+0x000000EAu,c->r[27]); // 800D0074
  goto L_800D0A88; // 800D0078
L_800D007C:;
  c->r[0]=0u+0x00010000u; // 800D007C
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 800D0080
  if (!crb(c,0)) { goto L_800D0094; } // 800D0084
  c->r[0]=rotl(c->r[27],0)&0x0000FFFFu; // 800D0088
  W32(c->r[30]+0x00000038u,c->r[0]); // 800D008C
  goto L_800D0A88; // 800D0090
L_800D0094:;
  c->r[6]=c->r[27]|c->r[27]; // 800D0094
  c->r[3]=c->r[31]+0x00000000u; // 800D0098
  c->r[5]=c->r[31]+0x000000ACu; // 800D009C
  c->r[4]=0u+0x000001C1u; // 800D00A0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D00A4
  c->lr=0x800D00ACu; f_800F13A0(c); // 800D00A8
  goto L_800D0A88; // 800D00AC
L_800D00B0:;
  c->r[3]=c->r[26]|c->r[26]; // 800D00B0
  c->r[4]=c->r[27]|c->r[27]; // 800D00B4
  c->lr=0x800D00BCu; f_800D55E0(c); // 800D00B8
  goto L_800D0A88; // 800D00BC
L_800D00C0:;
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000056u); // 800D00C0
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000058u); // 800D00C4
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[4]); // 800D00C8
  if (crb(c,0)) { goto L_800D00D8; } // 800D00CC
  c->r[3]=R8(c->r[30]+0x00000055u); // 800D00D0
  goto L_800D00F4; // 800D00D4
L_800D00D8:;
  c->r[5]=R8(c->r[30]+0x00000054u); // 800D00D8
  c->r[0]=R8(c->r[30]+0x00000055u); // 800D00DC
  c->r[0]=c->r[0]-c->r[5]; // 800D00E0
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 800D00E4
  c->r[0]=divw((int32_t)c->r[0],(int32_t)c->r[4]); // 800D00E8
  c->r[0]=c->r[5]+c->r[0]; // 800D00EC
  c->r[3]=rotl(c->r[0],0)&0x000000FFu; // 800D00F0
L_800D00F4:;
  c->r[0]=0u+0x00000000u; // 800D00F4
  W8(c->r[30]+0x00000054u,c->r[3]); // 800D00F8
  W8(c->r[30]+0x00000055u,c->r[27]); // 800D00FC
  W16(c->r[30]+0x00000056u,c->r[28]); // 800D0100
  W16(c->r[30]+0x00000058u,c->r[0]); // 800D0104
  goto L_800D0A88; // 800D0108
L_800D010C:;
  W8(c->r[30]+0x0000006Cu,c->r[27]); // 800D010C
  goto L_800D0A88; // 800D0110
L_800D0114:;
  W8(c->r[30]+0x0000006Du,c->r[27]); // 800D0114
  goto L_800D0A88; // 800D0118
L_800D011C:;
  W8(c->r[25]+0x000000E8u,c->r[27]); // 800D011C
  goto L_800D0A88; // 800D0120
L_800D0124:;
  W8(c->r[30]+0x00000070u,c->r[27]); // 800D0124
  goto L_800D0A88; // 800D0128
L_800D012C:;
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000068u); // 800D012C
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x0000006Au); // 800D0130
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[5]); // 800D0134
  if (crb(c,0)) { goto L_800D0148; } // 800D0138
  c->r[0]=R8(c->r[30]+0x00000067u); // 800D013C
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800D0140
  goto L_800D016C; // 800D0144
L_800D0148:;
  c->r[6]=R8(c->r[30]+0x00000066u); // 800D0148
  c->r[0]=R8(c->r[30]+0x00000067u); // 800D014C
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 800D0150
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800D0154
  c->r[0]=c->r[0]-c->r[3]; // 800D0158
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 800D015C
  c->r[0]=divw((int32_t)c->r[0],(int32_t)c->r[5]); // 800D0160
  c->r[0]=c->r[6]+c->r[0]; // 800D0164
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800D0168
L_800D016C:;
  c->r[0]=0u+0x00000000u; // 800D016C
  W8(c->r[30]+0x00000066u,c->r[3]); // 800D0170
  W8(c->r[30]+0x00000067u,c->r[27]); // 800D0174
  W16(c->r[30]+0x00000068u,c->r[28]); // 800D0178
  W16(c->r[30]+0x0000006Au,c->r[0]); // 800D017C
  goto L_800D0A88; // 800D0180
L_800D0184:;
  W8(c->r[30]+0x0000006Eu,c->r[27]); // 800D0184
  goto L_800D0A88; // 800D0188
L_800D018C:;
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x0000005Cu); // 800D018C
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x0000005Eu); // 800D0190
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[5]); // 800D0194
  if (crb(c,0)) { goto L_800D01A8; } // 800D0198
  c->r[0]=R8(c->r[30]+0x0000005Bu); // 800D019C
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800D01A0
  goto L_800D01CC; // 800D01A4
L_800D01A8:;
  c->r[6]=R8(c->r[30]+0x0000005Au); // 800D01A8
  c->r[0]=R8(c->r[30]+0x0000005Bu); // 800D01AC
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 800D01B0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800D01B4
  c->r[0]=c->r[0]-c->r[3]; // 800D01B8
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 800D01BC
  c->r[0]=divw((int32_t)c->r[0],(int32_t)c->r[5]); // 800D01C0
  c->r[0]=c->r[6]+c->r[0]; // 800D01C4
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800D01C8
L_800D01CC:;
  c->r[3]=c->r[27]+0xFFFFFFC0u; // 800D01CC
  c->r[0]=0u+0x00000000u; // 800D01D0
  W8(c->r[30]+0x0000005Au,c->r[4]); // 800D01D4
  W8(c->r[30]+0x0000005Bu,c->r[3]); // 800D01D8
  W16(c->r[30]+0x0000005Cu,c->r[28]); // 800D01DC
  W16(c->r[30]+0x0000005Eu,c->r[0]); // 800D01E0
  goto L_800D0A88; // 800D01E4
L_800D01E8:;
  c->r[0]=c->r[27]+0xFFFFFFC0u; // 800D01E8
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 800D01EC
  goto L_800D0A88; // 800D01F0
L_800D01F4:;
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000062u); // 800D01F4
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000064u); // 800D01F8
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[5]); // 800D01FC
  if (crb(c,0)) { goto L_800D0210; } // 800D0200
  c->r[0]=R8(c->r[30]+0x00000061u); // 800D0204
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800D0208
  goto L_800D0234; // 800D020C
L_800D0210:;
  c->r[6]=R8(c->r[30]+0x00000060u); // 800D0210
  c->r[0]=R8(c->r[30]+0x00000061u); // 800D0214
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 800D0218
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800D021C
  c->r[0]=c->r[0]-c->r[3]; // 800D0220
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 800D0224
  c->r[0]=divw((int32_t)c->r[0],(int32_t)c->r[5]); // 800D0228
  c->r[0]=c->r[6]+c->r[0]; // 800D022C
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800D0230
L_800D0234:;
  c->r[0]=0u+0x00000000u; // 800D0234
  W8(c->r[30]+0x00000060u,c->r[3]); // 800D0238
  W8(c->r[30]+0x00000061u,c->r[27]); // 800D023C
  W16(c->r[30]+0x00000062u,c->r[28]); // 800D0240
  W16(c->r[30]+0x00000064u,c->r[0]); // 800D0244
  goto L_800D0A88; // 800D0248
L_800D024C:;
  W8(c->r[30]+0x00000071u,c->r[27]); // 800D024C
  goto L_800D0A88; // 800D0250
L_800D0254:;
  c->r[0]=0u-c->r[27]; // 800D0254
  c->r[0]=c->r[0]|c->r[27]; // 800D0258
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800D025C
  W8(c->r[30]+0x00000009u,c->r[0]); // 800D0260
  goto L_800D0A88; // 800D0264
L_800D0268:;
  W8(c->r[30]+0x00000073u,c->r[27]); // 800D0268
  goto L_800D0A88; // 800D026C
L_800D0270:;
  c->r[0]=rotl(c->r[27],0)&0x000000FFu; // 800D0270
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800D0274
  {uint32_t ea=c->r[2]+0xFFFF9B00u; c->f[2]=RF64(ea);} // 800D0278
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 800D027C
  {uint32_t ea=c->r[2]+0xFFFF9AF0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0280
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800D0284
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800D0288
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[0]);} // 800D028C
  goto L_800D0A88; // 800D0290
L_800D0294:;
  c->r[0]=rotl(c->r[27],0)&0x000000FFu; // 800D0294
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D0298
  {uint32_t ea=c->r[2]+0xFFFF9B00u; c->f[2]=RF64(ea);} // 800D029C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 800D02A0
  {uint32_t ea=c->r[2]+0xFFFF9AF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D02A4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800D02A8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 800D02AC
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[0]);} // 800D02B0
  goto L_800D0A88; // 800D02B4
L_800D02B8:;
  W8(c->r[30]+0x0000004Cu,c->r[27]); // 800D02B8
  goto L_800D0A88; // 800D02BC
L_800D02C0:;
  W8(c->r[30]+0x00000048u,c->r[27]); // 800D02C0
  goto L_800D0A88; // 800D02C4
L_800D02C8:;
  c->r[0]=rotl(c->r[27],2)&0xFFFFFFFCu; // 800D02C8
  c->r[0]=c->r[0]+c->r[27]; // 800D02CC
  W32(c->r[30]+0x00000044u,c->r[0]); // 800D02D0
  goto L_800D0A88; // 800D02D4
L_800D02D8:;
  c->r[0]=c->r[27]^0x80000000u; // 800D02D8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800D02DC
  {uint32_t ea=c->r[2]+0xFFFF9B08u; c->f[2]=RF64(ea);} // 800D02E0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 800D02E4
  {uint32_t ea=c->r[2]+0xFFFF9AF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D02E8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800D02EC
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800D02F0
  {uint32_t ea=c->r[30]+0x00000050u; WF32(ea,c->f[0]);} // 800D02F4
  goto L_800D0A88; // 800D02F8
L_800D02FC:;
  W8(c->r[30]+0x00000074u,c->r[27]); // 800D02FC
  goto L_800D0A88; // 800D0300
L_800D0304:;
  W8(c->r[30]+0x00000075u,c->r[27]); // 800D0304
  goto L_800D0A88; // 800D0308
L_800D030C:;
  W8(c->r[30]+0x00000076u,c->r[27]); // 800D030C
  goto L_800D0A88; // 800D0310
L_800D0314:;
  W8(c->r[30]+0x00000077u,c->r[27]); // 800D0314
  goto L_800D0A88; // 800D0318
L_800D031C:;
  c->r[0]=rotl(c->r[27],0)&0x000000FFu; // 800D031C
  W16(c->r[30]+0x00000078u,c->r[0]); // 800D0320
  goto L_800D0A88; // 800D0324
L_800D0328:;
  c->r[0]=0u+0x000000FFu; // 800D0328
  W8(c->r[30]+0x00000074u,c->r[0]); // 800D032C
  W8(c->r[30]+0x00000075u,c->r[0]); // 800D0330
  W8(c->r[30]+0x00000076u,c->r[0]); // 800D0334
  W8(c->r[30]+0x00000077u,c->r[0]); // 800D0338
  W16(c->r[30]+0x00000078u,c->r[0]); // 800D033C
  goto L_800D0A88; // 800D0340
L_800D0344:;
  c->r[4]=rotl(c->r[27],0)&0x000000FFu; // 800D0344
  c->r[3]=0u+0x00000040u; // 800D0348
  c->r[0]=c->r[4]+0xFFFFFFC0u; // 800D034C
  c->r[3]=c->r[4]|~c->r[3]; // 800D0350
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800D0354
  c->r[0]=c->r[3]-c->r[0]; // 800D0358
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800D035C
  W8(c->r[30]+0x00000030u,c->r[0]); // 800D0360
  goto L_800D0A88; // 800D0364
L_800D0368:;
  c->r[0]=0u-c->r[27]; // 800D0368
  c->r[3]=c->r[26]|c->r[26]; // 800D036C
  c->r[0]=c->r[0]|c->r[27]; // 800D0370
  c->r[4]=0u+0xFFFFFFFFu; // 800D0374
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800D0378
  W8(c->r[30]+0x0000000Au,c->r[0]); // 800D037C
  c->lr=0x800D0384u; f_800D4CC0(c); // 800D0380
  c->r[3]=c->r[26]|c->r[26]; // 800D0384
  c->lr=0x800D038Cu; f_800D5410(c); // 800D0388
  goto L_800D0A88; // 800D038C
L_800D0390:;
  c->r[0]=0u-c->r[27]; // 800D0390
  c->r[0]=c->r[0]|c->r[27]; // 800D0394
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800D0398
  W8(c->r[30]+0x0000000Bu,c->r[0]); // 800D039C
  if (crb(c,2)) { goto L_800D0A88; } // 800D03A0
  c->r[3]=c->r[26]|c->r[26]; // 800D03A4
  c->r[4]=0u+0xFFFFFFFFu; // 800D03A8
  c->lr=0x800D03B0u; f_800D4CC0(c); // 800D03AC
  c->r[3]=c->r[26]|c->r[26]; // 800D03B0
  c->lr=0x800D03B8u; f_800D5410(c); // 800D03B4
  goto L_800D0A88; // 800D03B8
L_800D03BC:;
  c->r[3]=R8(c->r[30]+0x00000070u); // 800D03BC
  c->r[0]=0u+0x00000001u; // 800D03C0
  W8(c->r[30]+0x0000002Fu,c->r[0]); // 800D03C4
  c->r[0]=c->r[27]+c->r[3]; // 800D03C8
  W8(c->r[30]+0x00000072u,c->r[0]); // 800D03CC
  goto L_800D0A88; // 800D03D0
L_800D03D4:;
  c->r[0]=0u-c->r[27]; // 800D03D4
  c->r[0]=c->r[0]|c->r[27]; // 800D03D8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800D03DC
  W8(c->r[30]+0x0000002Fu,c->r[0]); // 800D03E0
  goto L_800D0A88; // 800D03E4
L_800D03E8:;
  c->r[0]=c->r[27]+0xFFFFFFC0u; // 800D03E8
  {uint32_t ea=c->r[2]+0xFFFF9B08u; c->f[2]=RF64(ea);} // 800D03EC
  c->r[0]=c->r[0]^0x80000000u; // 800D03F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D03F4
  {uint32_t ea=c->r[2]+0xFFFF9AF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D03F8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 800D03FC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800D0400
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800D0404
  {uint32_t ea=c->r[30]+0x00000080u; WF32(ea,c->f[0]);} // 800D0408
  goto L_800D0A88; // 800D040C
L_800D0410:;
  W8(c->r[30]+0x0000007Eu,c->r[27]); // 800D0410
  goto L_800D0A88; // 800D0414
L_800D0418:;
  c->r[0]=c->r[27]^0x80000000u; // 800D0418
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800D041C
  {uint32_t ea=c->r[2]+0xFFFF9B08u; c->f[2]=RF64(ea);} // 800D0420
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 800D0424
  {uint32_t ea=c->r[2]+0xFFFF9AFCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0428
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800D042C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 800D0430
  {uint32_t ea=c->r[30]+0x00000084u; WF32(ea,c->f[0]);} // 800D0434
  goto L_800D0A88; // 800D0438
L_800D043C:;
  W8(c->r[30]+0x0000007Bu,c->r[27]); // 800D043C
  goto L_800D0A88; // 800D0440
L_800D0444:;
  W8(c->r[30]+0x0000007Cu,c->r[27]); // 800D0444
  goto L_800D0A88; // 800D0448
L_800D044C:;
  W8(c->r[30]+0x0000007Du,c->r[27]); // 800D044C
  goto L_800D0A88; // 800D0450
L_800D0454:;
  W8(c->r[30]+0x0000007Au,c->r[27]); // 800D0454
  goto L_800D0A88; // 800D0458
L_800D045C:;
  c->r[0]=R8(c->r[13]+0xFFFFADE8u); // 800D045C
  cmps(c,0,(int32_t)c->r[0],0); // 800D0460
  if (crb(c,2)) { goto L_800D0A88; } // 800D0464
  cmpu(c,0,c->r[27],0x00000030u); // 800D0468
  c->r[0]=0u+0x00000000u; // 800D046C
  if (crb(c,1)) { goto L_800D0478; } // 800D0470
  c->r[0]=0u+0x00000001u; // 800D0474
L_800D0478:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D0478
  if (!crb(c,2)) { goto L_800D04A0; } // 800D047C
  c->r[6]=c->r[27]|c->r[27]; // 800D0480
  c->r[3]=c->r[31]+0x00000000u; // 800D0484
  c->r[5]=c->r[31]+0x000000D8u; // 800D0488
  c->r[4]=0u+0x000003F9u; // 800D048C
  c->r[7]=0u+0x00000000u; // 800D0490
  c->r[8]=0u+0x00000030u; // 800D0494
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D0498
  c->lr=0x800D04A0u; f_800F1300(c); // 800D049C
L_800D04A0:;
  cmps(c,0,(int32_t)c->r[27],32); // 800D04A0
  if (!crb(c,0)) { goto L_800D04B8; } // 800D04A4
  c->r[3]=c->r[25]|c->r[25]; // 800D04A8
  c->r[4]=c->r[27]|c->r[27]; // 800D04AC
  c->lr=0x800D04B4u; f_800D3350(c); // 800D04B0
  goto L_800D04D4; // 800D04B4
L_800D04B8:;
  cmps(c,0,(int32_t)c->r[27],48); // 800D04B8
  if (!crb(c,0)) { goto L_800D04D0; } // 800D04BC
  c->r[3]=c->r[26]|c->r[26]; // 800D04C0
  c->r[4]=c->r[27]+0xFFFFFFE0u; // 800D04C4
  c->lr=0x800D04CCu; f_800D5960(c); // 800D04C8
  goto L_800D04D4; // 800D04CC
L_800D04D0:;
  c->r[3]=0u+0x00000000u; // 800D04D0
L_800D04D4:;
  cmps(c,0,(int32_t)c->r[27],32); // 800D04D4
  if (crb(c,0)) { goto L_800D04E4; } // 800D04D8
  c->r[7]=c->r[27]+0xFFFFFFE0u; // 800D04DC
  goto L_800D04F4; // 800D04E0
L_800D04E4:;
  cmps(c,0,(int32_t)c->r[27],16); // 800D04E4
  c->r[7]=c->r[27]|c->r[27]; // 800D04E8
  if (crb(c,0)) { goto L_800D04F4; } // 800D04EC
  c->r[7]=c->r[27]+0xFFFFFFF0u; // 800D04F0
L_800D04F4:;
  cmps(c,0,(int32_t)c->r[27],32); // 800D04F4
  if (crb(c,0)) { goto L_800D0504; } // 800D04F8
  c->r[6]=c->r[13]+0xFFFF9EB8u; // 800D04FC
  goto L_800D0514; // 800D0500
L_800D0504:;
  cmps(c,0,(int32_t)c->r[27],16); // 800D0504
  c->r[6]=c->r[13]+0xFFFF9EC0u; // 800D0508
  if (crb(c,0)) { goto L_800D0514; } // 800D050C
  c->r[6]=c->r[13]+0xFFFF9EBCu; // 800D0510
L_800D0514:;
  c->r[9]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000000u); // 800D0514
  c->r[4]=c->r[25]|c->r[25]; // 800D0518
  c->r[5]=R8(c->r[26]+0x00000004u); // 800D051C
  c->r[8]=c->r[27]|c->r[27]; // 800D0520
  c->r[3]=c->r[31]+0x00000114u; // 800D0524
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D0528
  c->lr=0x800D0530u; f_801899B0(c); // 800D052C
  goto L_800D0A88; // 800D0530
L_800D0534:;
  c->r[3]=c->r[25]|c->r[25]; // 800D0534
  c->r[4]=c->r[27]|c->r[27]; // 800D0538
  c->lr=0x800D0540u; f_800D31C0(c); // 800D053C
  cmps(c,0,(int32_t)c->r[3],0); // 800D0540
  c->r[25]=c->r[3]|c->r[3]; // 800D0544
  if (!crb(c,2)) { goto L_800D0564; } // 800D0548
  c->r[3]=c->r[31]+0x00000000u; // 800D054C
  c->r[5]=c->r[31]+0x00000140u; // 800D0550
  c->r[4]=0u+0x00000287u; // 800D0554
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D0558
  c->lr=0x800D0560u; f_800F13A0(c); // 800D055C
  goto L_800D0A88; // 800D0560
L_800D0564:;
  cmpu(c,0,c->r[3],c->r[26]); // 800D0564
  if (!crb(c,2)) { goto L_800D0584; } // 800D0568
  c->r[3]=c->r[31]+0x00000000u; // 800D056C
  c->r[5]=c->r[31]+0x00000178u; // 800D0570
  c->r[4]=0u+0x0000028Cu; // 800D0574
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D0578
  c->lr=0x800D0580u; f_800F13A0(c); // 800D057C
  goto L_800D0A88; // 800D0580
L_800D0584:;
  c->lr=0x800D0588u; f_800D4990(c); // 800D0584
  c->r[4]=R32(c->r[30]+0x00000000u); // 800D0588
  c->r[3]=c->r[25]|c->r[25]; // 800D058C
  c->r[5]=c->r[28]|c->r[28]; // 800D0590
  c->lr=0x800D0598u; f_800D4960(c); // 800D0594
  c->r[3]=c->r[25]|c->r[25]; // 800D0598
  c->lr=0x800D05A0u; f_800D4970(c); // 800D059C
  goto L_800D0A88; // 800D05A0
L_800D05A4:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 800D05A4
  c->r[0]=c->r[0]+c->r[27]; // 800D05A8
  W32(c->r[30]+0x00000004u,c->r[0]); // 800D05AC
  goto L_800D0A88; // 800D05B0
L_800D05B4:;
  c->r[0]=R8(c->r[30]+0x00000024u); // 800D05B4
  cmpu(c,0,c->r[0],0x00000003u); // 800D05B8
  if (crb(c,0)) { goto L_800D05D8; } // 800D05BC
  c->r[3]=c->r[31]+0x00000000u; // 800D05C0
  c->r[5]=c->r[31]+0x000001A8u; // 800D05C4
  c->r[4]=0u+0x0000029Cu; // 800D05C8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D05CC
  c->lr=0x800D05D4u; f_800F13A0(c); // 800D05D0
  goto L_800D0A88; // 800D05D4
L_800D05D8:;
  c->r[0]=rotl(c->r[0],3)&0x000007F8u; // 800D05D8
  c->r[3]=R32(c->r[30]+0x00000004u); // 800D05DC
  c->r[4]=c->r[30]+c->r[0]; // 800D05E0
  W32(c->r[4]+0x00000010u,c->r[3]); // 800D05E4
  c->r[0]=0u+0x00000000u; // 800D05E8
  W8(c->r[4]+0x0000000Cu,c->r[0]); // 800D05EC
  c->r[3]=R8(c->r[30]+0x00000024u); // 800D05F0
  c->r[0]=R32(c->r[30]+0x00000000u); // 800D05F4
  c->r[3]=c->r[3]+0x00000001u; // 800D05F8
  W8(c->r[30]+0x00000024u,c->r[3]); // 800D05FC
  c->r[0]=c->r[0]+c->r[27]; // 800D0600
  W32(c->r[30]+0x00000004u,c->r[0]); // 800D0604
  goto L_800D0A88; // 800D0608
L_800D060C:;
  c->r[4]=0u+0x00000000u; // 800D060C
  goto L_800D063C; // 800D0610
L_800D0614:;
  c->r[3]=R8(c->r[30]+0x00000024u); // 800D0614
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800D0618
  W8(c->r[30]+0x00000024u,c->r[0]); // 800D061C
  c->r[0]=rotl(c->r[0],3)&0x000007F8u; // 800D0620
  c->r[3]=c->r[30]+c->r[0]; // 800D0624
  {uint32_t ea=c->r[3]+0x0000000Cu; c->r[0]=R8(ea); c->r[3]=ea;} // 800D0628
  cmps(c,0,(int32_t)c->r[0],0); // 800D062C
  if (!crb(c,2)) { goto L_800D063C; } // 800D0630
  c->r[4]=c->r[3]|c->r[3]; // 800D0634
  goto L_800D0648; // 800D0638
L_800D063C:;
  c->r[0]=R8(c->r[30]+0x00000024u); // 800D063C
  cmps(c,0,(int32_t)c->r[0],0); // 800D0640
  if (!crb(c,2)) { IRQCHK(c); goto L_800D0614; } // 800D0644
L_800D0648:;
  cmps(c,0,(int32_t)c->r[4],0); // 800D0648
  if (!crb(c,2)) { goto L_800D0668; } // 800D064C
  c->r[3]=c->r[31]+0x00000000u; // 800D0650
  c->r[5]=c->r[31]+0x000001E8u; // 800D0654
  c->r[4]=0u+0x000002B3u; // 800D0658
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D065C
  c->lr=0x800D0664u; f_800F13A0(c); // 800D0660
  goto L_800D0A88; // 800D0664
L_800D0668:;
  c->r[0]=R32(c->r[4]+0x00000004u); // 800D0668
  W32(c->r[30]+0x00000004u,c->r[0]); // 800D066C
  goto L_800D0A88; // 800D0670
L_800D0674:;
  c->r[0]=R8(c->r[30]+0x00000024u); // 800D0674
  cmpu(c,0,c->r[0],0x00000003u); // 800D0678
  if (crb(c,0)) { goto L_800D0698; } // 800D067C
  c->r[3]=c->r[31]+0x00000000u; // 800D0680
  c->r[5]=c->r[31]+0x00000220u; // 800D0684
  c->r[4]=0u+0x000002BDu; // 800D0688
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D068C
  c->lr=0x800D0694u; f_800F13A0(c); // 800D0690
  goto L_800D0A88; // 800D0694
L_800D0698:;
  c->r[0]=rotl(c->r[0],3)&0x000007F8u; // 800D0698
  c->r[3]=R32(c->r[30]+0x00000004u); // 800D069C
  c->r[4]=c->r[30]+c->r[0]; // 800D06A0
  W32(c->r[4]+0x00000010u,c->r[3]); // 800D06A4
  c->r[0]=0u+0x00000001u; // 800D06A8
  W8(c->r[4]+0x0000000Du,c->r[27]); // 800D06AC
  W8(c->r[4]+0x0000000Cu,c->r[0]); // 800D06B0
  c->r[3]=R8(c->r[30]+0x00000024u); // 800D06B4
  c->r[0]=c->r[3]+0x00000001u; // 800D06B8
  W8(c->r[30]+0x00000024u,c->r[0]); // 800D06BC
  goto L_800D0A88; // 800D06C0
L_800D06C4:;
  c->r[3]=R8(c->r[30]+0x00000024u); // 800D06C4
  cmps(c,0,(int32_t)c->r[3],0); // 800D06C8
  if (!crb(c,2)) { goto L_800D06E8; } // 800D06CC
  c->r[3]=c->r[31]+0x00000000u; // 800D06D0
  c->r[5]=c->r[31]+0x00000264u; // 800D06D4
  c->r[4]=0u+0x000002CCu; // 800D06D8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D06DC
  c->lr=0x800D06E4u; f_800F13A0(c); // 800D06E0
  goto L_800D0A88; // 800D06E4
L_800D06E8:;
  c->r[4]=c->r[3]+0xFFFFFFFFu; // 800D06E8
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 800D06EC
  c->r[3]=c->r[30]+c->r[0]; // 800D06F0
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 800D06F4
  cmps(c,0,(int32_t)c->r[0],0); // 800D06F8
  if (!crb(c,2)) { goto L_800D0718; } // 800D06FC
  c->r[3]=c->r[31]+0x00000000u; // 800D0700
  c->r[5]=c->r[31]+0x00000264u; // 800D0704
  c->r[4]=0u+0x000002D2u; // 800D0708
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D070C
  c->lr=0x800D0714u; f_800F13A0(c); // 800D0710
  goto L_800D0A88; // 800D0714
L_800D0718:;
  c->r[5]=R8(c->r[3]+0x0000000Du); // 800D0718
  cmps(c,0,(int32_t)c->r[5],0); // 800D071C
  if (crb(c,2)) { goto L_800D0738; } // 800D0720
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 800D0724
  c->r[0]=rotl(c->r[5],0)&0x000000FFu; cr0(c,c->r[0]); // 800D0728
  if (!crb(c,2)) { goto L_800D0738; } // 800D072C
  W8(c->r[30]+0x00000024u,c->r[4]); // 800D0730
  goto L_800D0A88; // 800D0734
L_800D0738:;
  W8(c->r[3]+0x0000000Du,c->r[5]); // 800D0738
  c->r[0]=R32(c->r[3]+0x00000010u); // 800D073C
  W32(c->r[30]+0x00000004u,c->r[0]); // 800D0740
  goto L_800D0A88; // 800D0744
L_800D0748:;
  cmpu(c,0,c->r[24],0x0000FFFFu); // 800D0748
  if (crb(c,1)) { goto L_800D0A88; } // 800D074C
  c->r[0]=rotl(c->r[24],24)&0x00FFFFFFu; // 800D0750
  c->r[24]=rotl(c->r[24],0)&0x000000FFu; // 800D0754
  cmpu(c,0,c->r[0],0x000000F0u); // 800D0758
  if (crb(c,2)) { goto L_800D0774; } // 800D075C
  c->r[3]=c->r[31]+0x00000000u; // 800D0760
  c->r[5]=c->r[31]+0x000002A0u; // 800D0764
  c->r[4]=0u+0x000002E9u; // 800D0768
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D076C
  c->lr=0x800D0774u; f_800F1300(c); // 800D0770
L_800D0774:;
  c->r[0]=rotl(c->r[24],0)&0x000000F0u; // 800D0774
  c->r[29]=0u+0x00000000u; // 800D0778
  cmpu(c,0,c->r[0],0x00000080u); // 800D077C
  if (crb(c,2)) { goto L_800D078C; } // 800D0780
  cmpu(c,0,c->r[0],0x00000090u); // 800D0784
  if (!crb(c,2)) { goto L_800D0804; } // 800D0788
L_800D078C:;
  cmpu(c,0,c->r[27],0x00000030u); // 800D078C
  c->r[0]=0u+0x00000000u; // 800D0790
  if (crb(c,1)) { goto L_800D079C; } // 800D0794
  c->r[0]=0u+0x00000001u; // 800D0798
L_800D079C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D079C
  if (!crb(c,2)) { goto L_800D07C4; } // 800D07A0
  c->r[6]=c->r[27]|c->r[27]; // 800D07A4
  c->r[3]=c->r[31]+0x00000000u; // 800D07A8
  c->r[5]=c->r[31]+0x000000D8u; // 800D07AC
  c->r[4]=0u+0x000003F9u; // 800D07B0
  c->r[7]=0u+0x00000000u; // 800D07B4
  c->r[8]=0u+0x00000030u; // 800D07B8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D07BC
  c->lr=0x800D07C4u; f_800F1300(c); // 800D07C0
L_800D07C4:;
  cmps(c,0,(int32_t)c->r[27],32); // 800D07C4
  if (!crb(c,0)) { goto L_800D07DC; } // 800D07C8
  c->r[3]=c->r[25]|c->r[25]; // 800D07CC
  c->r[4]=c->r[27]|c->r[27]; // 800D07D0
  c->lr=0x800D07D8u; f_800D3350(c); // 800D07D4
  goto L_800D07F8; // 800D07D8
L_800D07DC:;
  cmps(c,0,(int32_t)c->r[27],48); // 800D07DC
  if (!crb(c,0)) { goto L_800D07F4; } // 800D07E0
  c->r[3]=c->r[26]|c->r[26]; // 800D07E4
  c->r[4]=c->r[27]+0xFFFFFFE0u; // 800D07E8
  c->lr=0x800D07F0u; f_800D5960(c); // 800D07EC
  goto L_800D07F8; // 800D07F0
L_800D07F4:;
  c->r[3]=0u+0x00000000u; // 800D07F4
L_800D07F8:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D07F8
  c->r[29]=c->r[3]|c->r[3]; // 800D07FC
  if (crb(c,2)) { goto L_800D0A88; } // 800D0800
L_800D0804:;
  cmps(c,0,(int32_t)c->r[24],138); // 800D0804
  if (crb(c,2)) { goto L_800D099C; } // 800D0808
  if (!crb(c,0)) { goto L_800D0864; } // 800D080C
  cmps(c,0,(int32_t)c->r[24],132); // 800D0810
  if (crb(c,2)) { goto L_800D08E8; } // 800D0814
  if (!crb(c,0)) { goto L_800D0840; } // 800D0818
  cmps(c,0,(int32_t)c->r[24],129); // 800D081C
  if (crb(c,2)) { goto L_800D08B8; } // 800D0820
  if (!crb(c,0)) { goto L_800D0834; } // 800D0824
  cmps(c,0,(int32_t)c->r[24],128); // 800D0828
  if (!crb(c,0)) { goto L_800D08B0; } // 800D082C
  goto L_800D0A88; // 800D0830
L_800D0834:;
  cmps(c,0,(int32_t)c->r[24],131); // 800D0834
  if (!crb(c,0)) { goto L_800D08D8; } // 800D0838
  goto L_800D08C8; // 800D083C
L_800D0840:;
  cmps(c,0,(int32_t)c->r[24],135); // 800D0840
  if (crb(c,2)) { goto L_800D096C; } // 800D0844
  if (!crb(c,0)) { goto L_800D0858; } // 800D0848
  cmps(c,0,(int32_t)c->r[24],134); // 800D084C
  if (!crb(c,0)) { goto L_800D092C; } // 800D0850
  goto L_800D0900; // 800D0854
L_800D0858:;
  cmps(c,0,(int32_t)c->r[24],137); // 800D0858
  if (!crb(c,0)) { goto L_800D098C; } // 800D085C
  goto L_800D097C; // 800D0860
L_800D0864:;
  cmps(c,0,(int32_t)c->r[24],147); // 800D0864
  if (crb(c,2)) { goto L_800D0A20; } // 800D0868
  if (!crb(c,0)) { goto L_800D0894; } // 800D086C
  cmps(c,0,(int32_t)c->r[24],144); // 800D0870
  if (crb(c,2)) { goto L_800D09CC; } // 800D0874
  if (!crb(c,0)) { goto L_800D0888; } // 800D0878
  cmps(c,0,(int32_t)c->r[24],140); // 800D087C
  if (!crb(c,0)) { goto L_800D0A88; } // 800D0880
  goto L_800D09AC; // 800D0884
L_800D0888:;
  cmps(c,0,(int32_t)c->r[24],146); // 800D0888
  if (!crb(c,0)) { goto L_800D0A00; } // 800D088C
  goto L_800D09E4; // 800D0890
L_800D0894:;
  cmps(c,0,(int32_t)c->r[24],224); // 800D0894
  if (crb(c,2)) { goto L_800D0A78; } // 800D0898
  if (!crb(c,0)) { goto L_800D0A88; } // 800D089C
  cmps(c,0,(int32_t)c->r[24],149); // 800D08A0
  if (crb(c,2)) { goto L_800D0A5C; } // 800D08A4
  if (!crb(c,0)) { goto L_800D0A88; } // 800D08A8
  goto L_800D0A3C; // 800D08AC
L_800D08B0:;
  W16(c->r[29]+0x00000000u,c->r[28]); // 800D08B0
  goto L_800D0A88; // 800D08B4
L_800D08B8:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000000u); // 800D08B8
  c->r[0]=c->r[0]+c->r[28]; // 800D08BC
  W16(c->r[29]+0x00000000u,c->r[0]); // 800D08C0
  goto L_800D0A88; // 800D08C4
L_800D08C8:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000000u); // 800D08C8
  c->r[0]=c->r[0]-c->r[28]; // 800D08CC
  W16(c->r[29]+0x00000000u,c->r[0]); // 800D08D0
  goto L_800D0A88; // 800D08D4
L_800D08D8:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000000u); // 800D08D8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[28]); // 800D08DC
  W16(c->r[29]+0x00000000u,c->r[0]); // 800D08E0
  goto L_800D0A88; // 800D08E4
L_800D08E8:;
  cmps(c,0,(int32_t)c->r[28],0); // 800D08E8
  if (crb(c,2)) { goto L_800D0A88; } // 800D08EC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000000u); // 800D08F0
  c->r[0]=divw((int32_t)c->r[0],(int32_t)c->r[28]); // 800D08F4
  W16(c->r[29]+0x00000000u,c->r[0]); // 800D08F8
  goto L_800D0A88; // 800D08FC
L_800D0900:;
  cmps(c,0,(int32_t)c->r[28],0); // 800D0900
  if (crb(c,0)) { goto L_800D0918; } // 800D0904
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000000u); // 800D0908
  c->r[0]=((c->r[28])&0x20)?0u:(c->r[0]<<((c->r[28])&31)); // 800D090C
  W16(c->r[29]+0x00000000u,c->r[0]); // 800D0910
  goto L_800D0A88; // 800D0914
L_800D0918:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000000u); // 800D0918
  c->r[0]=0u-c->r[28]; // 800D091C
  c->r[0]=sraw(c,c->r[3],(c->r[0])&63); // 800D0920
  W16(c->r[29]+0x00000000u,c->r[0]); // 800D0924
  goto L_800D0A88; // 800D0928
L_800D092C:;
  cmps(c,0,(int32_t)c->r[28],0); // 800D092C
  c->r[24]=0u+0x00000000u; // 800D0930
  if (!crb(c,0)) { goto L_800D0944; } // 800D0934
  c->r[0]=0u-c->r[28]; // 800D0938
  c->r[24]=0u+0x00000001u; // 800D093C
  c->r[28]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 800D0940
L_800D0944:;
  c->lr=0x800D0948u; f_800E7160(c); // 800D0944
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 800D0948
  c->r[0]=c->r[28]+0x00000001u; // 800D094C
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 800D0950
  cmps(c,0,(int32_t)c->r[24],0); // 800D0954
  c->r[3]=sraw(c,c->r[3],16); // 800D0958
  if (crb(c,2)) { goto L_800D0964; } // 800D095C
  c->r[3]=0u-c->r[3]; // 800D0960
L_800D0964:;
  W16(c->r[29]+0x00000000u,c->r[3]); // 800D0964
  goto L_800D0A88; // 800D0968
L_800D096C:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000000u); // 800D096C
  c->r[0]=c->r[0]&c->r[28]; // 800D0970
  W16(c->r[29]+0x00000000u,c->r[0]); // 800D0974
  goto L_800D0A88; // 800D0978
L_800D097C:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000000u); // 800D097C
  c->r[0]=c->r[0]|c->r[28]; // 800D0980
  W16(c->r[29]+0x00000000u,c->r[0]); // 800D0984
  goto L_800D0A88; // 800D0988
L_800D098C:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000000u); // 800D098C
  c->r[0]=c->r[0]^c->r[28]; // 800D0990
  W16(c->r[29]+0x00000000u,c->r[0]); // 800D0994
  goto L_800D0A88; // 800D0998
L_800D099C:;
  c->r[0]=rotl(c->r[28],0)&0x0000FFFFu; // 800D099C
  c->r[0]=~(c->r[0]|c->r[0]); // 800D09A0
  W16(c->r[29]+0x00000000u,c->r[0]); // 800D09A4
  goto L_800D0A88; // 800D09A8
L_800D09AC:;
  cmps(c,0,(int32_t)c->r[28],0); // 800D09AC
  if (crb(c,2)) { goto L_800D0A88; } // 800D09B0
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000000u); // 800D09B4
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[28]); // 800D09B8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[28]); // 800D09BC
  c->r[0]=c->r[3]-c->r[0]; // 800D09C0
  W16(c->r[29]+0x00000000u,c->r[0]); // 800D09C4
  goto L_800D0A88; // 800D09C8
L_800D09CC:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000000u); // 800D09CC
  c->r[0]=c->r[28]-c->r[0]; // 800D09D0
  c->r[0]=cntlz(c->r[0]); // 800D09D4
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D09D8
  W8(c->r[30]+0x00000008u,c->r[0]); // 800D09DC
  goto L_800D0A88; // 800D09E0
L_800D09E4:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000000u); // 800D09E4
  c->r[3]=rotl(c->r[28],1)&0x00000001u; // 800D09E8
  c->r[4]=sraw(c,c->r[0],31); // 800D09EC
  c->r[0]=addc(c,~c->r[28],c->r[0],1); // 800D09F0
  c->r[0]=addc(c,c->r[4],c->r[3],c->xer_ca); // 800D09F4
  W8(c->r[30]+0x00000008u,c->r[0]); // 800D09F8
  goto L_800D0A88; // 800D09FC
L_800D0A00:;
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000000u); // 800D0A00
  c->r[0]=c->r[4]^c->r[28]; // 800D0A04
  c->r[3]=sraw(c,c->r[0],1); // 800D0A08
  c->r[0]=c->r[0]&c->r[4]; // 800D0A0C
  c->r[0]=c->r[3]-c->r[0]; // 800D0A10
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800D0A14
  W8(c->r[30]+0x00000008u,c->r[0]); // 800D0A18
  goto L_800D0A88; // 800D0A1C
L_800D0A20:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000000u); // 800D0A20
  c->r[4]=sraw(c,c->r[28],31); // 800D0A24
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800D0A28
  c->r[0]=addc(c,~c->r[0],c->r[28],1); // 800D0A2C
  c->r[0]=addc(c,c->r[4],c->r[3],c->xer_ca); // 800D0A30
  W8(c->r[30]+0x00000008u,c->r[0]); // 800D0A34
  goto L_800D0A88; // 800D0A38
L_800D0A3C:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000000u); // 800D0A3C
  c->r[0]=c->r[28]^c->r[0]; // 800D0A40
  c->r[3]=sraw(c,c->r[0],1); // 800D0A44
  c->r[0]=c->r[0]&c->r[28]; // 800D0A48
  c->r[0]=c->r[3]-c->r[0]; // 800D0A4C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800D0A50
  W8(c->r[30]+0x00000008u,c->r[0]); // 800D0A54
  goto L_800D0A88; // 800D0A58
L_800D0A5C:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000000u); // 800D0A5C
  c->r[3]=c->r[28]-c->r[0]; // 800D0A60
  c->r[0]=c->r[0]-c->r[28]; // 800D0A64
  c->r[0]=c->r[3]|c->r[0]; // 800D0A68
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800D0A6C
  W8(c->r[30]+0x00000008u,c->r[0]); // 800D0A70
  goto L_800D0A88; // 800D0A74
L_800D0A78:;
  c->r[3]=c->r[25]|c->r[25]; // 800D0A78
  c->r[5]=c->r[26]|c->r[26]; // 800D0A7C
  c->r[4]=rotl(c->r[27],0)&0x0000FFFFu; // 800D0A80
  c->lr=0x800D0A88u; f_800D2F10(c); // 800D0A84
L_800D0A88:;
  c->r[11]=c->r[1]+0x00000040u; // 800D0A88
  c->lr=0x800D0A90u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D0A8C
  c->r[0]=R32(c->r[1]+0x00000044u); // 800D0A90
  c->lr=c->r[0]; // 800D0A94
  c->r[1]=c->r[1]+0x00000040u; // 800D0A98
  return; // 800D0A9C
}

// fn_800D0AA0
void f_800D0AA0(Ctx* __restrict c) {
  c->r[3]=c->r[4]|c->r[4]; // 800D0AA0
  c->r[4]=c->r[5]|c->r[5]; // 800D0AA4
  c->r[5]=c->r[6]|c->r[6]; // 800D0AA8
  c->r[6]=c->r[7]|c->r[7]; // 800D0AAC
  c->r[7]=c->r[8]|c->r[8]; // 800D0AB0
  f_800D59F0(c); return; // 800D0AB4
}

// fn_800D0AC0
void f_800D0AC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D0AC0
  c->r[0]=c->lr; // 800D0AC4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D0AC8
  c->r[11]=c->r[1]+0x00000020u; // 800D0ACC
  c->lr=0x800D0AD4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D0AD0
  cmps(c,0,(int32_t)c->r[7],1); // 800D0AD4
  c->r[31]=0u+0x80250000u; // 800D0AD8
  c->r[27]=c->r[4]|c->r[4]; // 800D0ADC
  c->r[28]=c->r[5]|c->r[5]; // 800D0AE0
  c->r[29]=c->r[6]|c->r[6]; // 800D0AE4
  c->r[31]=c->r[31]+0x00006320u; // 800D0AE8
  if (crb(c,2)) { goto L_800D0B14; } // 800D0AEC
  cmps(c,0,(int32_t)c->r[7],2); // 800D0AF0
  if (crb(c,2)) { goto L_800D0B28; } // 800D0AF4
  cmps(c,0,(int32_t)c->r[7],3); // 800D0AF8
  if (crb(c,2)) { goto L_800D0B4C; } // 800D0AFC
  cmps(c,0,(int32_t)c->r[7],5); // 800D0B00
  if (crb(c,2)) { goto L_800D0BA0; } // 800D0B04
  cmps(c,0,(int32_t)c->r[7],4); // 800D0B08
  if (crb(c,2)) { goto L_800D0C2C; } // 800D0B0C
  goto L_800D0C8C; // 800D0B10
L_800D0B14:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 800D0B14
  c->r[0]=c->r[3]+0x00000001u; // 800D0B18
  W32(c->r[4]+0x00000000u,c->r[0]); // 800D0B1C
  c->r[29]=R8(c->r[3]+0x00000000u); // 800D0B20
  goto L_800D0C8C; // 800D0B24
L_800D0B28:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 800D0B28
  c->r[5]=c->r[3]+0x00000001u; // 800D0B2C
  W32(c->r[4]+0x00000000u,c->r[5]); // 800D0B30
  c->r[0]=c->r[5]+0x00000001u; // 800D0B34
  c->r[3]=R8(c->r[3]+0x00000000u); // 800D0B38
  W32(c->r[4]+0x00000000u,c->r[0]); // 800D0B3C
  c->r[29]=R8(c->r[5]+0x00000000u); // 800D0B40
  c->r[29]=(rotl(c->r[3],8)&0x0000FF00u)|(c->r[29]&~0x0000FF00u); // 800D0B44
  goto L_800D0C8C; // 800D0B48
L_800D0B4C:;
  c->r[29]=0u+0x00000000u; // 800D0B4C
  c->r[30]=0u+0x00000000u; // 800D0B50
L_800D0B54:;
  cmps(c,0,(int32_t)c->r[30],4); // 800D0B54
  if (crb(c,0)) { goto L_800D0B70; } // 800D0B58
  c->r[3]=c->r[31]+0x00000000u; // 800D0B5C
  c->r[5]=c->r[31]+0x000004C0u; // 800D0B60
  c->r[4]=0u+0x000003AFu; // 800D0B64
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D0B68
  c->lr=0x800D0B70u; f_800F1300(c); // 800D0B6C
L_800D0B70:;
  c->r[3]=R32(c->r[27]+0x00000000u); // 800D0B70
  c->r[29]=rotl(c->r[29],7)&0xFFFFFF80u; // 800D0B74
  c->r[0]=c->r[3]+0x00000001u; // 800D0B78
  W32(c->r[27]+0x00000000u,c->r[0]); // 800D0B7C
  c->r[3]=R8(c->r[3]+0x00000000u); // 800D0B80
  c->r[0]=rotl(c->r[3],0)&0x00000080u; cr0(c,c->r[0]); // 800D0B84
  c->r[0]=rotl(c->r[3],0)&0x0000007Fu; // 800D0B88
  c->r[29]=c->r[29]|c->r[0]; // 800D0B8C
  if (crb(c,2)) { goto L_800D0C8C; } // 800D0B90
  c->r[30]=c->r[30]+0x00000001u; // 800D0B94
  IRQCHK(c); goto L_800D0B54; // 800D0B98
  goto L_800D0C8C; // 800D0B9C
L_800D0BA0:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 800D0BA0
  c->r[5]=0u+0x00000000u; // 800D0BA4
  c->r[0]=c->r[3]+0x00000001u; // 800D0BA8
  W32(c->r[4]+0x00000000u,c->r[0]); // 800D0BAC
  c->r[30]=R8(c->r[3]+0x00000000u); // 800D0BB0
  cmpu(c,0,c->r[30],0x00000030u); // 800D0BB4
  if (crb(c,1)) { goto L_800D0BC0; } // 800D0BB8
  c->r[5]=0u+0x00000001u; // 800D0BBC
L_800D0BC0:;
  cmps(c,0,(int32_t)c->r[5],0); // 800D0BC0
  if (!crb(c,2)) { goto L_800D0BE8; } // 800D0BC4
  c->r[6]=c->r[30]|c->r[30]; // 800D0BC8
  c->r[3]=c->r[31]+0x00000000u; // 800D0BCC
  c->r[5]=c->r[31]+0x000000D8u; // 800D0BD0
  c->r[4]=0u+0x000003F9u; // 800D0BD4
  c->r[7]=0u+0x00000000u; // 800D0BD8
  c->r[8]=0u+0x00000030u; // 800D0BDC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D0BE0
  c->lr=0x800D0BE8u; f_800F1300(c); // 800D0BE4
L_800D0BE8:;
  cmps(c,0,(int32_t)c->r[30],32); // 800D0BE8
  if (!crb(c,0)) { goto L_800D0C00; } // 800D0BEC
  c->r[3]=c->r[28]|c->r[28]; // 800D0BF0
  c->r[4]=c->r[30]|c->r[30]; // 800D0BF4
  c->lr=0x800D0BFCu; f_800D3350(c); // 800D0BF8
  goto L_800D0C1C; // 800D0BFC
L_800D0C00:;
  cmps(c,0,(int32_t)c->r[30],48); // 800D0C00
  if (!crb(c,0)) { goto L_800D0C18; } // 800D0C04
  c->r[3]=c->r[29]|c->r[29]; // 800D0C08
  c->r[4]=c->r[30]+0xFFFFFFE0u; // 800D0C0C
  c->lr=0x800D0C14u; f_800D5960(c); // 800D0C10
  goto L_800D0C1C; // 800D0C14
L_800D0C18:;
  c->r[3]=0u+0x00000000u; // 800D0C18
L_800D0C1C:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D0C1C
  if (crb(c,2)) { goto L_800D0C8C; } // 800D0C20
  c->r[29]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000000u); // 800D0C24
  goto L_800D0C8C; // 800D0C28
L_800D0C2C:;
  c->r[5]=R32(c->r[4]+0x00000000u); // 800D0C2C
  c->r[7]=c->r[5]+0x00000001u; // 800D0C30
  W32(c->r[4]+0x00000000u,c->r[7]); // 800D0C34
  c->r[3]=c->r[7]+0x00000001u; // 800D0C38
  c->r[6]=R8(c->r[5]+0x00000000u); // 800D0C3C
  c->r[5]=c->r[3]+0x00000001u; // 800D0C40
  c->r[0]=c->r[5]+0x00000001u; // 800D0C44
  W32(c->r[4]+0x00000000u,c->r[3]); // 800D0C48
  c->r[7]=R8(c->r[7]+0x00000000u); // 800D0C4C
  c->r[7]=(rotl(c->r[6],8)&0x0000FF00u)|(c->r[7]&~0x0000FF00u); // 800D0C50
  W32(c->r[4]+0x00000000u,c->r[5]); // 800D0C54
  c->r[29]=(uint32_t)(int32_t)(int16_t)c->r[7]; // 800D0C58
  c->r[3]=R8(c->r[3]+0x00000000u); // 800D0C5C
  W32(c->r[4]+0x00000000u,c->r[0]); // 800D0C60
  c->r[30]=R8(c->r[5]+0x00000000u); // 800D0C64
  c->r[30]=(rotl(c->r[3],8)&0x0000FF00u)|(c->r[30]&~0x0000FF00u); // 800D0C68
  c->lr=0x800D0C70u; f_800E7160(c); // 800D0C6C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[30]; // 800D0C70
  c->r[4]=rotl(c->r[3],0)&0x0000FFFFu; // 800D0C74
  c->r[3]=c->r[0]-c->r[29]; // 800D0C78
  c->r[0]=c->r[3]+0x00000001u; // 800D0C7C
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 800D0C80
  c->r[4]=sraw(c,c->r[4],16); // 800D0C84
  c->r[29]=c->r[4]+c->r[29]; // 800D0C88
L_800D0C8C:;
  c->r[11]=c->r[1]+0x00000020u; // 800D0C8C
  c->r[3]=c->r[29]|c->r[29]; // 800D0C90
  c->lr=0x800D0C98u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D0C94
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D0C98
  c->lr=c->r[0]; // 800D0C9C
  c->r[1]=c->r[1]+0x00000020u; // 800D0CA0
  return; // 800D0CA4
}

// fn_800D0CB0
void f_800D0CB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D0CB0
  c->r[0]=c->lr; // 800D0CB4
  cmps(c,0,(int32_t)c->r[3],0); // 800D0CB8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D0CBC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D0CC0
  c->r[31]=0u+0x80250000u; // 800D0CC4
  c->r[31]=c->r[31]+0x00006320u; // 800D0CC8
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D0CCC
  c->r[30]=c->r[5]|c->r[5]; // 800D0CD0
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D0CD4
  c->r[29]=c->r[4]|c->r[4]; // 800D0CD8
  W32(c->r[1]+0x00000010u,c->r[28]); // 800D0CDC
  c->r[28]=c->r[3]|c->r[3]; // 800D0CE0
  if (!crb(c,2)) { goto L_800D0CFC; } // 800D0CE4
  c->r[3]=c->r[31]+0x00000000u; // 800D0CE8
  c->r[5]=c->r[31]+0x000004DCu; // 800D0CEC
  c->r[4]=0u+0x0000041Eu; // 800D0CF0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D0CF4
  c->lr=0x800D0CFCu; f_800F1300(c); // 800D0CF8
L_800D0CFC:;
  cmps(c,0,(int32_t)c->r[30],0); // 800D0CFC
  if (!crb(c,2)) { goto L_800D0D18; } // 800D0D00
  c->r[3]=c->r[31]+0x00000000u; // 800D0D04
  c->r[5]=c->r[31]+0x00000508u; // 800D0D08
  c->r[4]=0u+0x0000041Fu; // 800D0D0C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D0D10
  c->lr=0x800D0D18u; f_800F1300(c); // 800D0D14
L_800D0D18:;
  c->r[0]=R8(c->r[29]+c->r[28]); // 800D0D18
  c->r[4]=c->r[29]+c->r[28]; // 800D0D1C
  cmpu(c,0,c->r[0],0x000000FEu); // 800D0D20
  if (crb(c,2)) { goto L_800D0D38; } // 800D0D24
  c->r[0]=0u+0x00000001u; // 800D0D28
  W32(c->r[30]+0x00000000u,c->r[0]); // 800D0D2C
  c->r[3]=c->r[29]|c->r[29]; // 800D0D30
  goto L_800D0D50; // 800D0D34
L_800D0D38:;
  c->r[5]=R8(c->r[4]+0x00000001u); // 800D0D38
  c->r[3]=c->r[29]+0x00000003u; // 800D0D3C
  c->r[0]=R8(c->r[4]+0x00000002u); // 800D0D40
  c->r[5]=rotl(c->r[5],8)&0xFFFFFF00u; // 800D0D44
  c->r[5]=c->r[5]|c->r[0]; // 800D0D48
  W32(c->r[30]+0x00000000u,c->r[5]); // 800D0D4C
L_800D0D50:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D0D50
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D0D54
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D0D58
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D0D5C
  c->r[28]=R32(c->r[1]+0x00000010u); // 800D0D60
  c->lr=c->r[0]; // 800D0D64
  c->r[1]=c->r[1]+0x00000020u; // 800D0D68
  return; // 800D0D6C
}

// fn_800D0D70
void f_800D0D70(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D0D70
  c->r[0]=c->lr; // 800D0D74
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D0D78
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D0D7C
  c->r[31]=c->r[3]|c->r[3]; // 800D0D80
  c->lr=0x800D0D88u; f_800D4620(c); // 800D0D84
  c->r[4]=0u+0x80250000u; // 800D0D88
  c->r[3]=c->r[31]|c->r[31]; // 800D0D8C
  c->r[4]=c->r[4]+0x00006868u; // 800D0D90
  W32(c->r[31]+0x00000000u,c->r[4]); // 800D0D94
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D0D98
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D0D9C
  c->lr=c->r[0]; // 800D0DA0
  c->r[1]=c->r[1]+0x00000010u; // 800D0DA4
  return; // 800D0DA8
}

// fn_800D0DB0
void f_800D0DB0(Ctx* __restrict c) {
  c->r[0]=c->r[3]|c->r[3]; // 800D0DB0
  c->r[3]=R32(c->r[3]+0x000000CCu); // 800D0DB4
  c->r[5]=c->r[4]|c->r[4]; // 800D0DB8
  c->r[4]=c->r[0]|c->r[0]; // 800D0DBC
  f_800CF880(c); return; // 800D0DC0
}

// fn_800D0DD0
void f_800D0DD0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D0DD0
  c->r[0]=c->lr; // 800D0DD4
  cmps(c,0,(int32_t)c->r[3],0); // 800D0DD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D0DDC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D0DE0
  c->r[31]=c->r[4]|c->r[4]; // 800D0DE4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D0DE8
  c->r[30]=c->r[3]|c->r[3]; // 800D0DEC
  if (crb(c,2)) { goto L_800D0E0C; } // 800D0DF0
  c->r[4]=0u+0x00000000u; // 800D0DF4
  c->lr=0x800D0DFCu; f_800D46C0(c); // 800D0DF8
  cmps(c,0,(int32_t)c->r[31],0); // 800D0DFC
  if (!crb(c,1)) { goto L_800D0E0C; } // 800D0E00
  c->r[3]=c->r[30]|c->r[30]; // 800D0E04
  c->lr=0x800D0E0Cu; f_8015D040(c); // 800D0E08
L_800D0E0C:;
  c->r[3]=c->r[30]|c->r[30]; // 800D0E0C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D0E10
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D0E14
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D0E18
  c->lr=c->r[0]; // 800D0E1C
  c->r[1]=c->r[1]+0x00000010u; // 800D0E20
  return; // 800D0E24
}

// fn_800D0E30
void f_800D0E30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D0E30
  c->r[0]=c->lr; // 800D0E34
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D0E38
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D0E3C
  c->r[31]=c->r[4]|c->r[4]; // 800D0E40
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D0E44
  c->r[30]=c->r[3]|c->r[3]; // 800D0E48
  c->r[3]=c->r[3]+0x00000008u; // 800D0E4C
  c->lr=0x800D0E54u; f_800CF470(c); // 800D0E50
  cmps(c,0,(int32_t)c->r[3],0); // 800D0E54
  if (!crb(c,2)) { goto L_800D0E64; } // 800D0E58
  c->r[3]=0u+0x00000000u; // 800D0E5C
  goto L_800D0E6C; // 800D0E60
L_800D0E64:;
  if (crb(c,2)) { goto L_800D0E6C; } // 800D0E64
  c->lr=0x800D0E6Cu; f_800D0D70(c); // 800D0E68
L_800D0E6C:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D0E6C
  if (crb(c,2)) { goto L_800D0E80; } // 800D0E70
  W32(c->r[3]+0x000000C4u,c->r[31]); // 800D0E74
  c->r[0]=R32(c->r[30]+0x00000004u); // 800D0E78
  W32(c->r[3]+0x000000CCu,c->r[0]); // 800D0E7C
L_800D0E80:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D0E80
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D0E84
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D0E88
  c->lr=c->r[0]; // 800D0E8C
  c->r[1]=c->r[1]+0x00000010u; // 800D0E90
  return; // 800D0E94
}

// fn_800D0EA0
void f_800D0EA0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D0EA0
  c->r[0]=c->lr; // 800D0EA4
  cmps(c,0,(int32_t)c->r[4],0); // 800D0EA8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D0EAC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D0EB0
  c->r[31]=c->r[4]|c->r[4]; // 800D0EB4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D0EB8
  c->r[30]=c->r[3]|c->r[3]; // 800D0EBC
  if (!crb(c,2)) { goto L_800D0EE0; } // 800D0EC0
  c->r[3]=0u+0x80250000u; // 800D0EC4
  c->r[5]=0u+0x80250000u; // 800D0EC8
  c->r[3]=c->r[3]+0x00006878u; // 800D0ECC
  c->r[4]=0u+0x0000003Bu; // 800D0ED0
  c->r[5]=c->r[5]+0x00006898u; // 800D0ED4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D0ED8
  c->lr=0x800D0EE0u; f_800F1300(c); // 800D0EDC
L_800D0EE0:;
  cmps(c,0,(int32_t)c->r[31],0); // 800D0EE0
  c->r[0]=0u+0x00000000u; // 800D0EE4
  W32(c->r[31]+0x000000C4u,c->r[0]); // 800D0EE8
  if (crb(c,2)) { goto L_800D0F14; } // 800D0EEC
  c->r[12]=R32(c->r[31]+0x00000000u); // 800D0EF0
  c->r[3]=c->r[31]|c->r[31]; // 800D0EF4
  c->r[4]=0u+0xFFFFFFFFu; // 800D0EF8
  c->r[12]=R32(c->r[12]+0x00000008u); // 800D0EFC
  c->ctr=c->r[12]; // 800D0F00
  if (true) { c->lr=0x800D0F08u; dispatch(c,c->ctr); } // 800D0F04
  c->r[4]=c->r[31]|c->r[31]; // 800D0F08
  c->r[3]=c->r[30]+0x00000008u; // 800D0F0C
  c->lr=0x800D0F14u; f_800CF4D0(c); // 800D0F10
L_800D0F14:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D0F14
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D0F18
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D0F1C
  c->lr=c->r[0]; // 800D0F20
  c->r[1]=c->r[1]+0x00000010u; // 800D0F24
  return; // 800D0F28
}

// fn_800D0F30
void f_800D0F30(Ctx* __restrict c) {
  c->r[6]=0u+0x000000D0u; // 800D0F30
  c->r[3]=c->r[3]+0x00000008u; // 800D0F34
  f_800CF1F0(c); return; // 800D0F38
}

// fn_800D0F40
void f_800D0F40(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000008u; // 800D0F40
  f_800CF410(c); return; // 800D0F44
}

// fn_800D0F50
void f_800D0F50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D0F50
  c->r[0]=c->lr; // 800D0F54
  cmps(c,0,(int32_t)c->r[3],0); // 800D0F58
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D0F5C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D0F60
  c->r[31]=c->r[3]|c->r[3]; // 800D0F64
  if (crb(c,2)) { goto L_800D0F78; } // 800D0F68
  cmps(c,0,(int32_t)c->r[4],0); // 800D0F6C
  if (!crb(c,1)) { goto L_800D0F78; } // 800D0F70
  c->lr=0x800D0F78u; f_8015D040(c); // 800D0F74
L_800D0F78:;
  c->r[3]=c->r[31]|c->r[31]; // 800D0F78
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D0F7C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D0F80
  c->lr=c->r[0]; // 800D0F84
  c->r[1]=c->r[1]+0x00000010u; // 800D0F88
  return; // 800D0F8C
}

// fn_800D0F90
void f_800D0F90(Ctx* __restrict c) {
  c->r[4]=0u+0x80250000u; // 800D0F90
  c->r[0]=0u+0x00000000u; // 800D0F94
  c->r[4]=c->r[4]+0x000069D8u; // 800D0F98
  W32(c->r[3]+0x00000000u,c->r[4]); // 800D0F9C
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D0FA0
  W32(c->r[3]+0x00000008u,c->r[0]); // 800D0FA4
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800D0FA8
  W32(c->r[3]+0x00000010u,c->r[0]); // 800D0FAC
  W32(c->r[3]+0x00000014u,c->r[0]); // 800D0FB0
  W32(c->r[3]+0x00000018u,c->r[0]); // 800D0FB4
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 800D0FB8
  return; // 800D0FBC
}

// fn_800D0FC0
void f_800D0FC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D0FC0
  c->r[0]=c->lr; // 800D0FC4
  cmps(c,0,(int32_t)c->r[3],0); // 800D0FC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D0FCC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D0FD0
  c->r[31]=c->r[3]|c->r[3]; // 800D0FD4
  if (crb(c,2)) { goto L_800D0FE8; } // 800D0FD8
  cmps(c,0,(int32_t)c->r[4],0); // 800D0FDC
  if (!crb(c,1)) { goto L_800D0FE8; } // 800D0FE0
  c->lr=0x800D0FE8u; f_8015D040(c); // 800D0FE4
L_800D0FE8:;
  c->r[3]=c->r[31]|c->r[31]; // 800D0FE8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D0FEC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D0FF0
  c->lr=c->r[0]; // 800D0FF4
  c->r[1]=c->r[1]+0x00000010u; // 800D0FF8
  return; // 800D0FFC
}

// fn_800D1000
void f_800D1000(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1000
  c->r[0]=c->lr; // 800D1004
  cmps(c,0,(int32_t)c->r[3],0); // 800D1008
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D100C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D1010
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D1014
  c->r[30]=c->r[4]|c->r[4]; // 800D1018
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D101C
  c->r[29]=c->r[3]|c->r[3]; // 800D1020
  if (crb(c,2)) { goto L_800D10A4; } // 800D1024
  c->r[4]=0u+0x80250000u; // 800D1028
  c->r[4]=c->r[4]+0x000069D8u; // 800D102C
  W32(c->r[3]+0x00000000u,c->r[4]); // 800D1030
  c->lr=0x800D1038u; f_800DD3D0(c); // 800D1034
  c->r[3]=c->r[3]+0x00000354u; // 800D1038
  c->lr=0x800D1040u; f_8018E950(c); // 800D103C
  c->r[31]=R32(c->r[29]+0x0000000Cu); // 800D1040
  c->lr=0x800D1048u; f_800CD960(c); // 800D1044
  c->r[0]=R32(c->r[29]+0x00000014u); // 800D1048
  c->r[4]=c->r[31]|c->r[31]; // 800D104C
  c->r[6]=0u+0x00000000u; // 800D1050
  c->r[5]=c->r[0]-c->r[31]; // 800D1054
  c->lr=0x800D105Cu; f_800CDB40(c); // 800D1058
  c->r[31]=R32(c->r[29]+0x0000000Cu); // 800D105C
  c->lr=0x800D1064u; f_800CD960(c); // 800D1060
  c->r[0]=R32(c->r[29]+0x00000014u); // 800D1064
  c->r[4]=c->r[31]|c->r[31]; // 800D1068
  c->r[6]=0u+0x00000000u; // 800D106C
  c->r[5]=c->r[0]-c->r[31]; // 800D1070
  c->lr=0x800D1078u; f_800CDC90(c); // 800D1074
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 800D1078
  W32(c->r[29]+0x00000014u,c->r[0]); // 800D107C
  c->lr=0x800D1084u; f_800DD3D0(c); // 800D1080
  c->r[3]=c->r[3]+0x00000354u; // 800D1084
  c->lr=0x800D108Cu; f_8018EA30(c); // 800D1088
  cmps(c,0,(int32_t)c->r[30],0); // 800D108C
  c->r[0]=0u+0x00000000u; // 800D1090
  W32(c->r[29]+0x00000014u,c->r[0]); // 800D1094
  if (!crb(c,1)) { goto L_800D10A4; } // 800D1098
  c->r[3]=c->r[29]|c->r[29]; // 800D109C
  c->lr=0x800D10A4u; f_8015D040(c); // 800D10A0
L_800D10A4:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D10A4
  c->r[3]=c->r[29]|c->r[29]; // 800D10A8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D10AC
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D10B0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D10B4
  c->lr=c->r[0]; // 800D10B8
  c->r[1]=c->r[1]+0x00000020u; // 800D10BC
  return; // 800D10C0
}

// fn_800D10D0
void f_800D10D0(Ctx* __restrict c) {
  c->r[0]=c->r[4]+0x0000001Fu; // 800D10D0
  c->r[4]=c->r[5]+c->r[4]; // 800D10D4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800D10D8
  cmpu(c,0,c->r[0],c->r[4]); // 800D10DC
  if (!crb(c,1)) { goto L_800D10EC; } // 800D10E0
  c->r[3]=0u+0x00000000u; // 800D10E4
  return; // 800D10E8
L_800D10EC:;
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800D10EC
  W32(c->r[3]+0x00000010u,c->r[4]); // 800D10F0
  W32(c->r[3]+0x00000014u,c->r[0]); // 800D10F4
  c->r[3]=0u+0x00000001u; // 800D10F8
  return; // 800D10FC
}

// fn_800D1100
void f_800D1100(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1100
  c->r[0]=c->lr; // 800D1104
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D1108
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D110C
  c->r[31]=c->r[4]|c->r[4]; // 800D1110
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D1114
  c->r[30]=c->r[3]|c->r[3]; // 800D1118
  c->r[6]=R32(c->r[3]+0x00000014u); // 800D111C
  c->r[0]=rotl(c->r[6],0)&0x0000001Fu; cr0(c,c->r[0]); // 800D1120
  if (crb(c,2)) { goto L_800D1144; } // 800D1124
  c->r[3]=0u+0x80250000u; // 800D1128
  c->r[5]=0u+0x80250000u; // 800D112C
  c->r[4]=0u+0x0000006Cu; // 800D1130
  c->r[3]=c->r[3]+0x000068D8u; // 800D1134
  c->r[5]=c->r[5]+0x000068ECu; // 800D1138
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D113C
  c->lr=0x800D1144u; f_800F1300(c); // 800D1140
L_800D1144:;
  c->r[3]=R32(c->r[30]+0x00000014u); // 800D1144
  c->r[0]=R32(c->r[30]+0x00000010u); // 800D1148
  c->r[4]=c->r[31]+c->r[3]; // 800D114C
  cmpu(c,0,c->r[4],c->r[0]); // 800D1150
  if (!crb(c,1)) { goto L_800D1160; } // 800D1154
  c->r[3]=0u+0x00000000u; // 800D1158
  goto L_800D116C; // 800D115C
L_800D1160:;
  c->r[0]=c->r[4]+0x0000001Fu; // 800D1160
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800D1164
  W32(c->r[30]+0x00000014u,c->r[0]); // 800D1168
L_800D116C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D116C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D1170
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D1174
  c->lr=c->r[0]; // 800D1178
  c->r[1]=c->r[1]+0x00000010u; // 800D117C
  return; // 800D1180
}

// fn_800D1190
void f_800D1190(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1190
  c->r[0]=c->lr; // 800D1194
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D1198
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D119C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D11A0
  c->r[30]=c->r[3]|c->r[3]; // 800D11A4
  c->lr=0x800D11ACu; f_800DD3D0(c); // 800D11A8
  c->r[3]=c->r[3]+0x00000354u; // 800D11AC
  c->lr=0x800D11B4u; f_8018E950(c); // 800D11B0
  c->r[31]=R32(c->r[30]+0x0000000Cu); // 800D11B4
  c->lr=0x800D11BCu; f_800CD960(c); // 800D11B8
  c->r[0]=R32(c->r[30]+0x00000014u); // 800D11BC
  c->r[4]=c->r[31]|c->r[31]; // 800D11C0
  c->r[6]=0u+0x00000000u; // 800D11C4
  c->r[5]=c->r[0]-c->r[31]; // 800D11C8
  c->lr=0x800D11D0u; f_800CDB40(c); // 800D11CC
  c->r[31]=R32(c->r[30]+0x0000000Cu); // 800D11D0
  c->lr=0x800D11D8u; f_800CD960(c); // 800D11D4
  c->r[0]=R32(c->r[30]+0x00000014u); // 800D11D8
  c->r[4]=c->r[31]|c->r[31]; // 800D11DC
  c->r[6]=0u+0x00000000u; // 800D11E0
  c->r[5]=c->r[0]-c->r[31]; // 800D11E4
  c->lr=0x800D11ECu; f_800CDC90(c); // 800D11E8
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 800D11EC
  W32(c->r[30]+0x00000014u,c->r[0]); // 800D11F0
  c->lr=0x800D11F8u; f_800DD3D0(c); // 800D11F4
  c->r[3]=c->r[3]+0x00000354u; // 800D11F8
  c->lr=0x800D1200u; f_8018EA30(c); // 800D11FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D1200
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D1204
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D1208
  c->lr=c->r[0]; // 800D120C
  c->r[1]=c->r[1]+0x00000010u; // 800D1210
  return; // 800D1214
}

// fn_800D1220
void f_800D1220(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1220
  c->r[0]=c->lr; // 800D1224
  c->r[4]=R32(c->r[3]+0x00000014u); // 800D1228
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D122C
  c->r[0]=R32(c->r[3]+0x00000010u); // 800D1230
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D1234
  c->r[31]=c->r[0]-c->r[4]; cr0(c,c->r[31]); // 800D1238
  if (!crb(c,0)) { goto L_800D125C; } // 800D123C
  c->r[3]=0u+0x80250000u; // 800D1240
  c->r[5]=0u+0x80250000u; // 800D1244
  c->r[3]=c->r[3]+0x000068D8u; // 800D1248
  c->r[4]=0u+0x0000009Du; // 800D124C
  c->r[5]=c->r[5]+0x0000693Cu; // 800D1250
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D1254
  c->lr=0x800D125Cu; f_800F1300(c); // 800D1258
L_800D125C:;
  c->r[3]=c->r[31]|c->r[31]; // 800D125C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D1260
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D1264
  c->lr=c->r[0]; // 800D1268
  c->r[1]=c->r[1]+0x00000010u; // 800D126C
  return; // 800D1270
}

// fn_800D1280
void f_800D1280(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1280
  c->r[0]=c->lr; // 800D1284
  cmps(c,0,(int32_t)c->r[4],0); // 800D1288
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D128C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D1290
  c->r[31]=0u+0x80250000u; // 800D1294
  c->r[31]=c->r[31]+0x000068D8u; // 800D1298
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D129C
  c->r[30]=c->r[4]|c->r[4]; // 800D12A0
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D12A4
  c->r[29]=c->r[3]|c->r[3]; // 800D12A8
  if (!crb(c,2)) { goto L_800D12C4; } // 800D12AC
  c->r[3]=c->r[31]+0x00000000u; // 800D12B0
  c->r[5]=c->r[31]+0x00000088u; // 800D12B4
  c->r[4]=0u+0x000000ACu; // 800D12B8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D12BC
  c->lr=0x800D12C4u; f_800F1300(c); // 800D12C0
L_800D12C4:;
  c->r[0]=R32(c->r[29]+0x00000004u); // 800D12C4
  cmps(c,0,(int32_t)c->r[0],0); // 800D12C8
  if (crb(c,2)) { goto L_800D12E4; } // 800D12CC
  c->r[3]=c->r[31]+0x00000000u; // 800D12D0
  c->r[5]=c->r[31]+0x000000B0u; // 800D12D4
  c->r[4]=0u+0x000000ADu; // 800D12D8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D12DC
  c->lr=0x800D12E4u; f_800F1300(c); // 800D12E0
L_800D12E4:;
  W32(c->r[29]+0x00000004u,c->r[30]); // 800D12E4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D12E8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D12EC
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D12F0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D12F4
  c->lr=c->r[0]; // 800D12F8
  c->r[1]=c->r[1]+0x00000020u; // 800D12FC
  return; // 800D1300
}

// fn_800D1310
void f_800D1310(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1310
  c->r[0]=c->lr; // 800D1314
  cmps(c,0,(int32_t)c->r[4],0); // 800D1318
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D131C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D1320
  c->r[31]=0u+0x80250000u; // 800D1324
  c->r[31]=c->r[31]+0x000068D8u; // 800D1328
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D132C
  c->r[30]=c->r[4]|c->r[4]; // 800D1330
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D1334
  c->r[29]=c->r[3]|c->r[3]; // 800D1338
  if (!crb(c,2)) { goto L_800D1354; } // 800D133C
  c->r[3]=c->r[31]+0x00000000u; // 800D1340
  c->r[5]=c->r[31]+0x00000088u; // 800D1344
  c->r[4]=0u+0x000000BDu; // 800D1348
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D134C
  c->lr=0x800D1354u; f_800F1300(c); // 800D1350
L_800D1354:;
  c->r[0]=R32(c->r[29]+0x00000004u); // 800D1354
  cmpu(c,0,c->r[30],c->r[0]); // 800D1358
  if (crb(c,2)) { goto L_800D1374; } // 800D135C
  c->r[3]=c->r[31]+0x00000000u; // 800D1360
  c->r[5]=c->r[31]+0x000000D8u; // 800D1364
  c->r[4]=0u+0x000000BEu; // 800D1368
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D136C
  c->lr=0x800D1374u; f_800F1300(c); // 800D1370
L_800D1374:;
  c->r[0]=0u+0x00000000u; // 800D1374
  W32(c->r[29]+0x00000004u,c->r[0]); // 800D1378
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D137C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D1380
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D1384
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D1388
  c->lr=c->r[0]; // 800D138C
  c->r[1]=c->r[1]+0x00000020u; // 800D1390
  return; // 800D1394
}

// fn_800D13A0
void f_800D13A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D13A0
  c->r[0]=c->lr; // 800D13A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D13A8
  c->r[0]=0u+0x00000000u; // 800D13AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D13B0
  c->r[31]=c->r[3]|c->r[3]; // 800D13B4
  W8(c->r[3]+0x00000000u,c->r[0]); // 800D13B8
  W8(c->r[3]+0x00000001u,c->r[0]); // 800D13BC
  W8(c->r[3]+0x00000002u,c->r[0]); // 800D13C0
  W8(c->r[3]+0x00000003u,c->r[0]); // 800D13C4
  W8(c->r[3]+0x00000004u,c->r[0]); // 800D13C8
  W8(c->r[3]+0x00000005u,c->r[0]); // 800D13CC
  W32(c->r[3]+0x00000008u,c->r[0]); // 800D13D0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800D13D4
  W32(c->r[3]+0x00000010u,c->r[0]); // 800D13D8
  W32(c->r[3]+0x00000038u,c->r[0]); // 800D13DC
  c->r[3]=c->r[3]+0x00000040u; // 800D13E0
  c->lr=0x800D13E8u; f_80187C40(c); // 800D13E4
  c->r[4]=c->r[31]|c->r[31]; // 800D13E8
  c->r[3]=c->r[31]+0x00000040u; // 800D13EC
  c->lr=0x800D13F4u; f_801883D0(c); // 800D13F0
  c->r[3]=c->r[31]+0x00000070u; // 800D13F4
  c->lr=0x800D13FCu; f_80187C40(c); // 800D13F8
  c->r[4]=c->r[31]|c->r[31]; // 800D13FC
  c->r[3]=c->r[31]+0x00000070u; // 800D1400
  c->lr=0x800D1408u; f_801883D0(c); // 800D1404
  c->r[3]=c->r[31]|c->r[31]; // 800D1408
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D140C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D1410
  c->lr=c->r[0]; // 800D1414
  c->r[1]=c->r[1]+0x00000010u; // 800D1418
  return; // 800D141C
}

// fn_800D1420
void f_800D1420(Ctx* __restrict c) {
  c->r[0]=R8(c->r[3]+0x00000005u); // 800D1420
  cmps(c,0,(int32_t)c->r[0],0); // 800D1424
  if (!crb(c,2)) return; // 800D1428
  c->r[4]=R32(c->r[3]+0x0000000Cu); // 800D142C
  cmps(c,0,(int32_t)c->r[4],0); // 800D1430
  if (crb(c,2)) { goto L_800D143C; } // 800D1434
  goto L_800D1440; // 800D1438
L_800D143C:;
  c->r[4]=R32(c->r[3]+0x00000010u); // 800D143C
L_800D1440:;
  c->r[0]=0u+0x00000000u; // 800D1440
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800D1444
  W32(c->r[3]+0x00000010u,c->r[0]); // 800D1448
  f_800D1460(c); return; // 800D144C
  return; // 800D1450
}

// fn_800D1460
void f_800D1460(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 800D1460
  if (crb(c,2)) return; // 800D1464
  cmps(c,0,(int32_t)c->r[4],1); // 800D1468
  if (crb(c,2)) { goto L_800D1484; } // 800D146C
  cmps(c,0,(int32_t)c->r[4],2); // 800D1470
  if (crb(c,2)) { goto L_800D14A8; } // 800D1474
  cmps(c,0,(int32_t)c->r[4],3); // 800D1478
  if (crb(c,2)) { goto L_800D14D0; } // 800D147C
  goto L_800D14F8; // 800D1480
L_800D1484:;
  c->r[0]=0u+0x00000001u; // 800D1484
  c->r[5]=0u+0x800D0000u; // 800D1488
  W8(c->r[3]+0x00000004u,c->r[0]); // 800D148C
  c->r[5]=c->r[5]+0x00001880u; // 800D1490
  c->r[4]=0u+0x00000001u; // 800D1494
  W8(c->r[3]+0x00000005u,c->r[0]); // 800D1498
  W32(c->r[3]+0x00000008u,c->r[0]); // 800D149C
  c->r[3]=R32(c->r[3]+0x00000034u); // 800D14A0
  f_801C4740(c); return; // 800D14A4
L_800D14A8:;
  c->r[6]=0u+0x00000001u; // 800D14A8
  c->r[0]=0u+0x00000003u; // 800D14AC
  c->r[5]=0u+0x800D0000u; // 800D14B0
  W8(c->r[3]+0x00000004u,c->r[6]); // 800D14B4
  c->r[5]=c->r[5]+0x000019D0u; // 800D14B8
  c->r[4]=0u+0x00000004u; // 800D14BC
  W8(c->r[3]+0x00000005u,c->r[6]); // 800D14C0
  W32(c->r[3]+0x00000008u,c->r[0]); // 800D14C4
  c->r[3]=R32(c->r[3]+0x00000034u); // 800D14C8
  f_801C4740(c); return; // 800D14CC
L_800D14D0:;
  c->r[6]=0u+0x00000001u; // 800D14D0
  c->r[0]=0u+0x00000005u; // 800D14D4
  c->r[5]=0u+0x800D0000u; // 800D14D8
  W8(c->r[3]+0x00000004u,c->r[6]); // 800D14DC
  c->r[5]=c->r[5]+0x00001AF0u; // 800D14E0
  c->r[4]=0u+0x00000000u; // 800D14E4
  W8(c->r[3]+0x00000005u,c->r[6]); // 800D14E8
  W32(c->r[3]+0x00000008u,c->r[0]); // 800D14EC
  c->r[3]=R32(c->r[3]+0x00000034u); // 800D14F0
  f_801C4740(c); return; // 800D14F4
L_800D14F8:;
  c->r[3]=0u+0x80250000u; // 800D14F8
  c->r[5]=0u+0x80250000u; // 800D14FC
  c->r[3]=c->r[3]+0x000069F8u; // 800D1500
  c->r[4]=0u+0x00000123u; // 800D1504
  c->r[5]=c->r[5]+0x00006A10u; // 800D1508
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D150C
  f_800F1300(c); return; // 800D1510
  return; // 800D1514
}

// fn_800D1520
void f_800D1520(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1520
  c->r[0]=c->lr; // 800D1524
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D1528
  c->r[11]=c->r[1]+0x00000040u; // 800D152C
  c->lr=0x800D1534u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D1530
  c->r[0]=R32(c->r[3]+0x00000008u); // 800D1534
  c->r[26]=0u+0x80250000u; // 800D1538
  c->r[28]=c->r[3]|c->r[3]; // 800D153C
  c->r[29]=c->r[4]|c->r[4]; // 800D1540
  cmps(c,0,(int32_t)c->r[0],4); // 800D1544
  c->r[26]=c->r[26]+0x000069F8u; // 800D1548
  if (crb(c,2)) { goto L_800D1564; } // 800D154C
  c->r[3]=c->r[26]+0x00000000u; // 800D1550
  c->r[5]=c->r[26]+0x0000002Cu; // 800D1554
  c->r[4]=0u+0x00000133u; // 800D1558
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D155C
  c->lr=0x800D1564u; f_800F1300(c); // 800D1560
L_800D1564:;
  c->r[0]=R32(c->r[28]+0x00000008u); // 800D1564
  cmps(c,0,(int32_t)c->r[0],4); // 800D1568
  if (!crb(c,2)) { goto L_800D1860; } // 800D156C
  c->r[0]=R8(c->r[28]+0x00000002u); // 800D1570
  c->r[30]=0u+0x00000001u; // 800D1574
  cmps(c,0,(int32_t)c->r[0],0); // 800D1578
  if (crb(c,2)) { goto L_800D1670; } // 800D157C
  c->r[0]=0u+0x00000002u; // 800D1580
  c->r[5]=c->r[29]|c->r[29]; // 800D1584
  c->r[4]=0u+0x00000001u; // 800D1588
  c->r[3]=0u+0x00000000u; // 800D158C
  c->ctr=c->r[0]; // 800D1590
  c->r[0]=c->r[0]|0x00000000u; // 800D1594
L_800D1598:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 800D1598
  cmps(c,0,(int32_t)c->r[0],0); // 800D159C
  if (crb(c,2)) { goto L_800D15AC; } // 800D15A0
  c->r[4]=0u+0x00000000u; // 800D15A4
  goto L_800D1674; // 800D15A8
L_800D15AC:;
  c->r[0]=R32(c->r[5]+0x00000004u); // 800D15AC
  cmps(c,0,(int32_t)c->r[0],0); // 800D15B0
  if (crb(c,2)) { goto L_800D15C0; } // 800D15B4
  c->r[4]=0u+0x00000000u; // 800D15B8
  goto L_800D1674; // 800D15BC
L_800D15C0:;
  c->r[0]=R32(c->r[5]+0x00000008u); // 800D15C0
  cmps(c,0,(int32_t)c->r[0],0); // 800D15C4
  if (crb(c,2)) { goto L_800D15D4; } // 800D15C8
  c->r[4]=0u+0x00000000u; // 800D15CC
  goto L_800D1674; // 800D15D0
L_800D15D4:;
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 800D15D4
  cmps(c,0,(int32_t)c->r[0],0); // 800D15D8
  if (crb(c,2)) { goto L_800D15E8; } // 800D15DC
  c->r[4]=0u+0x00000000u; // 800D15E0
  goto L_800D1674; // 800D15E4
L_800D15E8:;
  c->r[0]=R32(c->r[5]+0x00000010u); // 800D15E8
  cmps(c,0,(int32_t)c->r[0],0); // 800D15EC
  if (crb(c,2)) { goto L_800D15FC; } // 800D15F0
  c->r[4]=0u+0x00000000u; // 800D15F4
  goto L_800D1674; // 800D15F8
L_800D15FC:;
  c->r[0]=R32(c->r[5]+0x00000014u); // 800D15FC
  cmps(c,0,(int32_t)c->r[0],0); // 800D1600
  if (crb(c,2)) { goto L_800D1610; } // 800D1604
  c->r[4]=0u+0x00000000u; // 800D1608
  goto L_800D1674; // 800D160C
L_800D1610:;
  c->r[0]=R32(c->r[5]+0x00000018u); // 800D1610
  cmps(c,0,(int32_t)c->r[0],0); // 800D1614
  if (crb(c,2)) { goto L_800D1624; } // 800D1618
  c->r[4]=0u+0x00000000u; // 800D161C
  goto L_800D1674; // 800D1620
L_800D1624:;
  c->r[0]=R32(c->r[5]+0x0000001Cu); // 800D1624
  cmps(c,0,(int32_t)c->r[0],0); // 800D1628
  if (crb(c,2)) { goto L_800D1638; } // 800D162C
  c->r[4]=0u+0x00000000u; // 800D1630
  goto L_800D1674; // 800D1634
L_800D1638:;
  c->r[0]=R32(c->r[5]+0x00000020u); // 800D1638
  cmps(c,0,(int32_t)c->r[0],0); // 800D163C
  if (crb(c,2)) { goto L_800D164C; } // 800D1640
  c->r[4]=0u+0x00000000u; // 800D1644
  goto L_800D1674; // 800D1648
L_800D164C:;
  c->r[0]=R32(c->r[5]+0x00000024u); // 800D164C
  cmps(c,0,(int32_t)c->r[0],0); // 800D1650
  if (crb(c,2)) { goto L_800D1660; } // 800D1654
  c->r[4]=0u+0x00000000u; // 800D1658
  goto L_800D1674; // 800D165C
L_800D1660:;
  c->r[5]=c->r[5]+0x00000028u; // 800D1660
  c->r[3]=c->r[3]+0x00000009u; // 800D1664
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D1598; } // 800D1668
  goto L_800D1674; // 800D166C
L_800D1670:;
  c->r[4]=0u+0x00000001u; // 800D1670
L_800D1674:;
  cmps(c,0,(int32_t)c->r[4],0); // 800D1674
  if (crb(c,2)) { goto L_800D1680; } // 800D1678
  c->r[30]=0u+0x00000000u; // 800D167C
L_800D1680:;
  c->r[0]=R8(c->r[28]+0x00000001u); // 800D1680
  c->r[25]=0u+0x00000000u; // 800D1684
  cmps(c,0,(int32_t)c->r[0],0); // 800D1688
  if (!crb(c,2)) { goto L_800D169C; } // 800D168C
  cmps(c,0,(int32_t)c->r[30],0); // 800D1690
  if (crb(c,2)) { goto L_800D169C; } // 800D1694
  c->r[25]=0u+0x00000001u; // 800D1698
L_800D169C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D169C
  c->r[31]=0u+0x00000000u; // 800D16A0
  if (crb(c,2)) { goto L_800D16B4; } // 800D16A4
  cmps(c,0,(int32_t)c->r[30],0); // 800D16A8
  if (!crb(c,2)) { goto L_800D16B4; } // 800D16AC
  c->r[31]=0u+0x00000001u; // 800D16B0
L_800D16B4:;
  cmps(c,0,(int32_t)c->r[30],0); // 800D16B4
  if (crb(c,2)) { goto L_800D1798; } // 800D16B8
  c->lr=0x800D16C0u; f_8018D6A0(c); // 800D16BC
  c->r[27]=c->r[3]|c->r[3]; // 800D16C0
  c->r[3]=R32(c->r[28]+0x00000034u); // 800D16C4
  c->lr=0x800D16CCu; f_801C5F10(c); // 800D16C8
  cmps(c,0,(int32_t)c->r[3],0); // 800D16CC
  if (!crb(c,2)) { goto L_800D16E0; } // 800D16D0
  c->r[3]=c->r[27]|c->r[27]; // 800D16D4
  c->lr=0x800D16DCu; f_8018D6E0(c); // 800D16D8
  goto L_800D1860; // 800D16DC
L_800D16E0:;
  c->r[4]=R8(c->r[28]+0x00000003u); // 800D16E0
  c->r[0]=0u+0x00000000u; // 800D16E4
  c->r[5]=c->r[29]|c->r[29]; // 800D16E8
  c->r[3]=c->r[28]+0x00000014u; // 800D16EC
  c->r[4]=cntlz(c->r[4]); // 800D16F0
  W8(c->r[28]+0x00000003u,c->r[0]); // 800D16F4
  c->r[4]=rotl(c->r[4],27)&0x07FFFFFFu; // 800D16F8
  c->r[7]=c->r[1]+0x00000008u; // 800D16FC
  c->r[6]=0u+0x00000028u; // 800D1700
  c->lr=0x800D1708u; f_801B8664(c); // 800D1704
  c->r[3]=R32(c->r[28]+0x00000034u); // 800D1708
  c->r[4]=c->r[1]+0x00000008u; // 800D170C
  c->r[5]=0u+0x00000014u; // 800D1710
  c->lr=0x800D1718u; f_801C5FA0(c); // 800D1714
  cmps(c,0,(int32_t)c->r[3],0); // 800D1718
  c->r[29]=c->r[3]|c->r[3]; // 800D171C
  if (crb(c,2)) { goto L_800D173C; } // 800D1720
  c->r[6]=c->r[29]|c->r[29]; // 800D1724
  c->r[3]=c->r[26]+0x00000000u; // 800D1728
  c->r[5]=c->r[26]+0x00000050u; // 800D172C
  c->r[4]=0u+0x00000166u; // 800D1730
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D1734
  c->lr=0x800D173Cu; f_800F13A0(c); // 800D1738
L_800D173C:;
  cmps(c,0,(int32_t)c->r[29],0); // 800D173C
  if (crb(c,2)) { goto L_800D1790; } // 800D1740
  c->r[29]=0u+0x00000000u; // 800D1744
  c->r[30]=0u+0x00000001u; // 800D1748
  W32(c->r[28]+0x00000010u,c->r[30]); // 800D174C
  c->r[3]=c->r[28]+0x00000040u; // 800D1750
  W32(c->r[28]+0x00000008u,c->r[29]); // 800D1754
  W8(c->r[28]+0x00000001u,c->r[29]); // 800D1758
  W8(c->r[28]+0x00000002u,c->r[29]); // 800D175C
  c->lr=0x800D1764u; f_80187FA0(c); // 800D1760
  W8(c->r[28]+0x00000006u,c->r[29]); // 800D1764
  c->r[3]=c->r[28]+0x00000070u; // 800D1768
  c->lr=0x800D1770u; f_80187FA0(c); // 800D176C
  W8(c->r[28]+0x00000007u,c->r[29]); // 800D1770
  c->r[3]=c->r[27]|c->r[27]; // 800D1774
  W8(c->r[28]+0x00000006u,c->r[29]); // 800D1778
  W8(c->r[28]+0x00000001u,c->r[29]); // 800D177C
  W8(c->r[28]+0x00000002u,c->r[30]); // 800D1780
  W8(c->r[28]+0x00000007u,c->r[29]); // 800D1784
  c->lr=0x800D178Cu; f_8018D6E0(c); // 800D1788
  goto L_800D1860; // 800D178C
L_800D1790:;
  c->r[3]=c->r[27]|c->r[27]; // 800D1790
  c->lr=0x800D1798u; f_8018D6E0(c); // 800D1794
L_800D1798:;
  cmps(c,0,(int32_t)c->r[25],0); // 800D1798
  if (crb(c,2)) { goto L_800D1814; } // 800D179C
  c->lr=0x800D17A4u; f_8018D6A0(c); // 800D17A0
  c->r[0]=R8(c->r[28]+0x00000006u); // 800D17A4
  c->r[27]=c->r[3]|c->r[3]; // 800D17A8
  cmps(c,0,(int32_t)c->r[0],0); // 800D17AC
  if (!crb(c,2)) { goto L_800D17FC; } // 800D17B0
  c->r[3]=0u+0x80000000u; // 800D17B4
  c->r[7]=0u+0x800D0000u; // 800D17B8
  c->r[0]=R32(c->r[3]+0x000000F8u); // 800D17BC
  c->r[4]=0u+0x000001E0u; // 800D17C0
  c->r[5]=0u+0x00000000u; // 800D17C4
  c->r[3]=c->r[28]+0x00000040u; // 800D17C8
  c->r[6]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800D17CC
  c->r[7]=c->r[7]+0x00001C10u; // 800D17D0
  c->r[0]=(uint32_t)(((uint64_t)c->r[6]*(uint64_t)c->r[4])>>32); // 800D17D4
  c->r[4]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[4]); // 800D17D8
  c->r[6]=(uint32_t)((int32_t)c->r[6]*(int32_t)480); // 800D17DC
  c->r[5]=c->r[0]+c->r[4]; // 800D17E0
  c->lr=0x800D17E8u; f_80187EA0(c); // 800D17E4
  c->lr=0x800D17ECu; f_801915C0(c); // 800D17E8
  c->r[0]=0u+0x00000001u; // 800D17EC
  W32(c->r[28]+0x000000A4u,c->r[4]); // 800D17F0
  W32(c->r[28]+0x000000A0u,c->r[3]); // 800D17F4
  W8(c->r[28]+0x00000006u,c->r[0]); // 800D17F8
L_800D17FC:;
  c->r[3]=c->r[28]+0x00000070u; // 800D17FC
  c->lr=0x800D1804u; f_80187FA0(c); // 800D1800
  c->r[0]=0u+0x00000000u; // 800D1804
  W8(c->r[28]+0x00000007u,c->r[0]); // 800D1808
  c->r[3]=c->r[27]|c->r[27]; // 800D180C
  c->lr=0x800D1814u; f_8018D6E0(c); // 800D1810
L_800D1814:;
  cmps(c,0,(int32_t)c->r[31],0); // 800D1814
  if (crb(c,2)) { goto L_800D185C; } // 800D1818
  c->lr=0x800D1820u; f_8018D6A0(c); // 800D181C
  c->r[0]=0u+0x00000001u; // 800D1820
  W8(c->r[28]+0x00000007u,c->r[0]); // 800D1824
  c->r[27]=c->r[3]|c->r[3]; // 800D1828
  c->r[3]=c->r[28]+0x00000070u; // 800D182C
  c->lr=0x800D1834u; f_80187FA0(c); // 800D1830
  c->r[3]=0u+0x80000000u; // 800D1834
  c->r[7]=0u+0x800D0000u; // 800D1838
  c->r[0]=R32(c->r[3]+0x000000F8u); // 800D183C
  c->r[3]=c->r[28]+0x00000070u; // 800D1840
  c->r[7]=c->r[7]+0x00001C60u; // 800D1844
  c->r[5]=0u+0x00000000u; // 800D1848
  c->r[6]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800D184C
  c->lr=0x800D1854u; f_80187EA0(c); // 800D1850
  c->r[3]=c->r[27]|c->r[27]; // 800D1854
  c->lr=0x800D185Cu; f_8018D6E0(c); // 800D1858
L_800D185C:;
  W8(c->r[28]+0x00000001u,c->r[30]); // 800D185C
L_800D1860:;
  c->r[11]=c->r[1]+0x00000040u; // 800D1860
  c->lr=0x800D1868u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D1864
  c->r[0]=R32(c->r[1]+0x00000044u); // 800D1868
  c->lr=c->r[0]; // 800D186C
  c->r[1]=c->r[1]+0x00000040u; // 800D1870
  return; // 800D1874
}

// fn_800D1880
void f_800D1880(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1880
  c->r[0]=c->lr; // 800D1884
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D1888
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D188C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D1890
  c->r[30]=0u+0x80250000u; // 800D1894
  c->r[30]=c->r[30]+0x000069F8u; // 800D1898
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D189C
  c->r[29]=c->r[4]|c->r[4]; // 800D18A0
  W32(c->r[1]+0x00000010u,c->r[28]); // 800D18A4
  c->r[28]=c->r[3]|c->r[3]; // 800D18A8
  c->lr=0x800D18B0u; f_800D1CD0(c); // 800D18AC
  c->r[4]=c->r[28]|c->r[28]; // 800D18B0
  c->lr=0x800D18B8u; f_800D1D70(c); // 800D18B4
  cmps(c,0,(int32_t)c->r[29],0); // 800D18B8
  c->r[31]=c->r[3]|c->r[3]; // 800D18BC
  if (crb(c,2)) { goto L_800D18E0; } // 800D18C0
  cmps(c,0,(int32_t)c->r[29],-2); // 800D18C4
  if (crb(c,2)) { goto L_800D1908; } // 800D18C8
  cmps(c,0,(int32_t)c->r[29],-3); // 800D18CC
  if (crb(c,2)) { goto L_800D1914; } // 800D18D0
  cmps(c,0,(int32_t)c->r[29],-1); // 800D18D4
  if (crb(c,2)) { goto L_800D1934; } // 800D18D8
  goto L_800D1940; // 800D18DC
L_800D18E0:;
  c->r[0]=0u+0x00000001u; // 800D18E0
  W8(c->r[3]+0x00000003u,c->r[0]); // 800D18E4
  c->r[4]=0u+0x00000000u; // 800D18E8
  c->r[5]=0u+0x00000020u; // 800D18EC
  c->r[3]=c->r[3]+0x00000014u; // 800D18F0
  c->lr=0x800D18F8u; f_800046B4(c); // 800D18F4
  c->r[0]=0u+0x00000002u; // 800D18F8
  W32(c->r[31]+0x00000008u,c->r[0]); // 800D18FC
  W32(c->r[31]+0x00000010u,c->r[0]); // 800D1900
  goto L_800D195C; // 800D1904
L_800D1908:;
  c->r[0]=0u+0x00000001u; // 800D1908
  W32(c->r[3]+0x00000010u,c->r[0]); // 800D190C
  goto L_800D195C; // 800D1910
L_800D1914:;
  c->r[3]=c->r[30]+0x00000000u; // 800D1914
  c->r[5]=c->r[30]+0x00000070u; // 800D1918
  c->r[4]=0u+0x000001CCu; // 800D191C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D1920
  c->lr=0x800D1928u; f_800F13A0(c); // 800D1924
  c->r[0]=0u+0x00000000u; // 800D1928
  W32(c->r[31]+0x00000008u,c->r[0]); // 800D192C
  goto L_800D195C; // 800D1930
L_800D1934:;
  c->r[0]=0u+0x00000000u; // 800D1934
  W32(c->r[3]+0x00000008u,c->r[0]); // 800D1938
  goto L_800D195C; // 800D193C
L_800D1940:;
  c->r[3]=c->r[30]+0x00000000u; // 800D1940
  c->r[5]=c->r[30]+0x00000088u; // 800D1944
  c->r[4]=0u+0x000001D3u; // 800D1948
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D194C
  c->lr=0x800D1954u; f_800F1300(c); // 800D1950
  c->r[0]=0u+0x00000000u; // 800D1954
  W32(c->r[31]+0x00000008u,c->r[0]); // 800D1958
L_800D195C:;
  cmps(c,0,(int32_t)c->r[29],0); // 800D195C
  if (crb(c,2)) { goto L_800D199C; } // 800D1960
  cmps(c,0,(int32_t)c->r[29],-2); // 800D1964
  if (crb(c,2)) { goto L_800D199C; } // 800D1968
  c->r[0]=R8(c->r[31]+0x00000004u); // 800D196C
  cmps(c,0,(int32_t)c->r[0],0); // 800D1970
  if (crb(c,2)) { goto L_800D199C; } // 800D1974
  c->r[12]=R32(c->r[31]+0x00000038u); // 800D1978
  cmps(c,0,(int32_t)c->r[12],0); // 800D197C
  if (crb(c,2)) { goto L_800D199C; } // 800D1980
  c->r[3]=c->r[28]|c->r[28]; // 800D1984
  c->r[4]=c->r[29]|c->r[29]; // 800D1988
  c->ctr=c->r[12]; // 800D198C
  if (true) { c->lr=0x800D1994u; dispatch(c,c->ctr); } // 800D1990
  c->r[0]=0u+0x00000000u; // 800D1994
  W32(c->r[31]+0x00000038u,c->r[0]); // 800D1998
L_800D199C:;
  c->r[0]=0u+0x00000000u; // 800D199C
  W8(c->r[31]+0x00000005u,c->r[0]); // 800D19A0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D19A4
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D19A8
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D19AC
  c->r[28]=R32(c->r[1]+0x00000010u); // 800D19B0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D19B4
  c->lr=c->r[0]; // 800D19B8
  c->r[1]=c->r[1]+0x00000020u; // 800D19BC
  return; // 800D19C0
}

// fn_800D19D0
void f_800D19D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D19D0
  c->r[0]=c->lr; // 800D19D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D19D8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D19DC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D19E0
  c->r[30]=0u+0x80250000u; // 800D19E4
  c->r[30]=c->r[30]+0x000069F8u; // 800D19E8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D19EC
  c->r[29]=c->r[4]|c->r[4]; // 800D19F0
  W32(c->r[1]+0x00000010u,c->r[28]); // 800D19F4
  c->r[28]=c->r[3]|c->r[3]; // 800D19F8
  c->lr=0x800D1A00u; f_800D1CD0(c); // 800D19FC
  c->r[4]=c->r[28]|c->r[28]; // 800D1A00
  c->lr=0x800D1A08u; f_800D1D70(c); // 800D1A04
  cmps(c,0,(int32_t)c->r[29],0); // 800D1A08
  c->r[31]=c->r[3]|c->r[3]; // 800D1A0C
  if (crb(c,2)) { goto L_800D1A30; } // 800D1A10
  cmps(c,0,(int32_t)c->r[29],-2); // 800D1A14
  if (crb(c,2)) { goto L_800D1A3C; } // 800D1A18
  cmps(c,0,(int32_t)c->r[29],-3); // 800D1A1C
  if (crb(c,2)) { goto L_800D1A48; } // 800D1A20
  cmps(c,0,(int32_t)c->r[29],-1); // 800D1A24
  if (crb(c,2)) { goto L_800D1A68; } // 800D1A28
  goto L_800D1A74; // 800D1A2C
L_800D1A30:;
  c->r[0]=0u+0x00000004u; // 800D1A30
  W32(c->r[3]+0x00000008u,c->r[0]); // 800D1A34
  goto L_800D1A90; // 800D1A38
L_800D1A3C:;
  c->r[0]=0u+0x00000002u; // 800D1A3C
  W32(c->r[3]+0x00000010u,c->r[0]); // 800D1A40
  goto L_800D1A90; // 800D1A44
L_800D1A48:;
  c->r[3]=c->r[30]+0x00000000u; // 800D1A48
  c->r[5]=c->r[30]+0x000000ACu; // 800D1A4C
  c->r[4]=0u+0x000001F9u; // 800D1A50
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D1A54
  c->lr=0x800D1A5Cu; f_800F13A0(c); // 800D1A58
  c->r[0]=0u+0x00000000u; // 800D1A5C
  W32(c->r[31]+0x00000008u,c->r[0]); // 800D1A60
  goto L_800D1A90; // 800D1A64
L_800D1A68:;
  c->r[0]=0u+0x00000000u; // 800D1A68
  W32(c->r[3]+0x00000008u,c->r[0]); // 800D1A6C
  goto L_800D1A90; // 800D1A70
L_800D1A74:;
  c->r[3]=c->r[30]+0x00000000u; // 800D1A74
  c->r[5]=c->r[30]+0x00000088u; // 800D1A78
  c->r[4]=0u+0x00000200u; // 800D1A7C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D1A80
  c->lr=0x800D1A88u; f_800F1300(c); // 800D1A84
  c->r[0]=0u+0x00000000u; // 800D1A88
  W32(c->r[31]+0x00000008u,c->r[0]); // 800D1A8C
L_800D1A90:;
  cmps(c,0,(int32_t)c->r[29],-2); // 800D1A90
  if (crb(c,2)) { goto L_800D1AC8; } // 800D1A94
  c->r[0]=R8(c->r[31]+0x00000004u); // 800D1A98
  cmps(c,0,(int32_t)c->r[0],0); // 800D1A9C
  if (crb(c,2)) { goto L_800D1AC8; } // 800D1AA0
  c->r[12]=R32(c->r[31]+0x00000038u); // 800D1AA4
  cmps(c,0,(int32_t)c->r[12],0); // 800D1AA8
  if (crb(c,2)) { goto L_800D1AC8; } // 800D1AAC
  c->r[3]=c->r[28]|c->r[28]; // 800D1AB0
  c->r[4]=c->r[29]|c->r[29]; // 800D1AB4
  c->ctr=c->r[12]; // 800D1AB8
  if (true) { c->lr=0x800D1AC0u; dispatch(c,c->ctr); } // 800D1ABC
  c->r[0]=0u+0x00000000u; // 800D1AC0
  W32(c->r[31]+0x00000038u,c->r[0]); // 800D1AC4
L_800D1AC8:;
  c->r[0]=0u+0x00000000u; // 800D1AC8
  W8(c->r[31]+0x00000005u,c->r[0]); // 800D1ACC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D1AD0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D1AD4
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D1AD8
  c->r[28]=R32(c->r[1]+0x00000010u); // 800D1ADC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D1AE0
  c->lr=c->r[0]; // 800D1AE4
  c->r[1]=c->r[1]+0x00000020u; // 800D1AE8
  return; // 800D1AEC
}

// fn_800D1AF0
void f_800D1AF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1AF0
  c->r[0]=c->lr; // 800D1AF4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D1AF8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D1AFC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D1B00
  c->r[30]=0u+0x80250000u; // 800D1B04
  c->r[30]=c->r[30]+0x000069F8u; // 800D1B08
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D1B0C
  c->r[29]=c->r[4]|c->r[4]; // 800D1B10
  W32(c->r[1]+0x00000010u,c->r[28]); // 800D1B14
  c->r[28]=c->r[3]|c->r[3]; // 800D1B18
  c->lr=0x800D1B20u; f_800D1CD0(c); // 800D1B1C
  c->r[4]=c->r[28]|c->r[28]; // 800D1B20
  c->lr=0x800D1B28u; f_800D1D70(c); // 800D1B24
  cmps(c,0,(int32_t)c->r[29],0); // 800D1B28
  c->r[31]=c->r[3]|c->r[3]; // 800D1B2C
  if (crb(c,2)) { goto L_800D1B50; } // 800D1B30
  cmps(c,0,(int32_t)c->r[29],-2); // 800D1B34
  if (crb(c,2)) { goto L_800D1B5C; } // 800D1B38
  cmps(c,0,(int32_t)c->r[29],-3); // 800D1B3C
  if (crb(c,2)) { goto L_800D1B68; } // 800D1B40
  cmps(c,0,(int32_t)c->r[29],-1); // 800D1B44
  if (crb(c,2)) { goto L_800D1B88; } // 800D1B48
  goto L_800D1B94; // 800D1B4C
L_800D1B50:;
  c->r[0]=0u+0x00000006u; // 800D1B50
  W32(c->r[3]+0x00000008u,c->r[0]); // 800D1B54
  goto L_800D1BB0; // 800D1B58
L_800D1B5C:;
  c->r[0]=0u+0x00000003u; // 800D1B5C
  W32(c->r[3]+0x00000010u,c->r[0]); // 800D1B60
  goto L_800D1BB0; // 800D1B64
L_800D1B68:;
  c->r[3]=c->r[30]+0x00000000u; // 800D1B68
  c->r[5]=c->r[30]+0x000000C8u; // 800D1B6C
  c->r[4]=0u+0x00000226u; // 800D1B70
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D1B74
  c->lr=0x800D1B7Cu; f_800F13A0(c); // 800D1B78
  c->r[0]=0u+0x00000000u; // 800D1B7C
  W32(c->r[31]+0x00000008u,c->r[0]); // 800D1B80
  goto L_800D1BB0; // 800D1B84
L_800D1B88:;
  c->r[0]=0u+0x00000000u; // 800D1B88
  W32(c->r[3]+0x00000008u,c->r[0]); // 800D1B8C
  goto L_800D1BB0; // 800D1B90
L_800D1B94:;
  c->r[3]=c->r[30]+0x00000000u; // 800D1B94
  c->r[5]=c->r[30]+0x00000088u; // 800D1B98
  c->r[4]=0u+0x0000022Du; // 800D1B9C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D1BA0
  c->lr=0x800D1BA8u; f_800F1300(c); // 800D1BA4
  c->r[0]=0u+0x00000000u; // 800D1BA8
  W32(c->r[31]+0x00000008u,c->r[0]); // 800D1BAC
L_800D1BB0:;
  cmps(c,0,(int32_t)c->r[29],-2); // 800D1BB0
  if (crb(c,2)) { goto L_800D1BE8; } // 800D1BB4
  c->r[0]=R8(c->r[31]+0x00000004u); // 800D1BB8
  cmps(c,0,(int32_t)c->r[0],0); // 800D1BBC
  if (crb(c,2)) { goto L_800D1BE8; } // 800D1BC0
  c->r[12]=R32(c->r[31]+0x00000038u); // 800D1BC4
  cmps(c,0,(int32_t)c->r[12],0); // 800D1BC8
  if (crb(c,2)) { goto L_800D1BE8; } // 800D1BCC
  c->r[3]=c->r[28]|c->r[28]; // 800D1BD0
  c->r[4]=c->r[29]|c->r[29]; // 800D1BD4
  c->ctr=c->r[12]; // 800D1BD8
  if (true) { c->lr=0x800D1BE0u; dispatch(c,c->ctr); } // 800D1BDC
  c->r[0]=0u+0x00000000u; // 800D1BE0
  W32(c->r[31]+0x00000038u,c->r[0]); // 800D1BE4
L_800D1BE8:;
  c->r[0]=0u+0x00000000u; // 800D1BE8
  W8(c->r[31]+0x00000005u,c->r[0]); // 800D1BEC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D1BF0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D1BF4
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D1BF8
  c->r[28]=R32(c->r[1]+0x00000010u); // 800D1BFC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D1C00
  c->lr=c->r[0]; // 800D1C04
  c->r[1]=c->r[1]+0x00000020u; // 800D1C08
  return; // 800D1C0C
}

// fn_800D1C10
void f_800D1C10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1C10
  c->r[0]=c->lr; // 800D1C14
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D1C18
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D1C1C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D1C20
  c->r[30]=c->r[3]|c->r[3]; // 800D1C24
  c->lr=0x800D1C2Cu; f_8018D6A0(c); // 800D1C28
  c->r[31]=c->r[3]|c->r[3]; // 800D1C2C
  c->r[3]=c->r[30]|c->r[30]; // 800D1C30
  c->lr=0x800D1C38u; f_801883E0(c); // 800D1C34
  c->r[3]=c->r[31]|c->r[31]; // 800D1C38
  c->lr=0x800D1C40u; f_8018D6E0(c); // 800D1C3C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D1C40
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D1C44
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D1C48
  c->lr=c->r[0]; // 800D1C4C
  c->r[1]=c->r[1]+0x00000010u; // 800D1C50
  return; // 800D1C54
}

// fn_800D1C60
void f_800D1C60(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1C60
  c->r[0]=c->lr; // 800D1C64
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D1C68
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D1C6C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D1C70
  c->r[30]=c->r[3]|c->r[3]; // 800D1C74
  c->lr=0x800D1C7Cu; f_8018D6A0(c); // 800D1C78
  c->r[31]=c->r[3]|c->r[3]; // 800D1C7C
  c->r[3]=c->r[30]|c->r[30]; // 800D1C80
  c->lr=0x800D1C88u; f_801883E0(c); // 800D1C84
  c->r[0]=R8(c->r[3]+0x00000007u); // 800D1C88
  c->r[30]=c->r[3]|c->r[3]; // 800D1C8C
  cmps(c,0,(int32_t)c->r[0],0); // 800D1C90
  if (crb(c,2)) { goto L_800D1CA8; } // 800D1C94
  c->r[3]=c->r[3]+0x00000040u; // 800D1C98
  c->lr=0x800D1CA0u; f_80187FA0(c); // 800D1C9C
  c->r[0]=0u+0x00000000u; // 800D1CA0
  W8(c->r[30]+0x00000006u,c->r[0]); // 800D1CA4
L_800D1CA8:;
  c->r[0]=0u+0x00000000u; // 800D1CA8
  W8(c->r[30]+0x00000007u,c->r[0]); // 800D1CAC
  c->r[3]=c->r[31]|c->r[31]; // 800D1CB0
  c->lr=0x800D1CB8u; f_8018D6E0(c); // 800D1CB4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D1CB8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D1CBC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D1CC0
  c->lr=c->r[0]; // 800D1CC4
  c->r[1]=c->r[1]+0x00000010u; // 800D1CC8
  return; // 800D1CCC
}

// GetInstance__Q44nw4r3snd6detail20RemoteSpeakerManagerFv
void f_800D1CD0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1CD0
  c->r[0]=c->lr; // 800D1CD4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D1CD8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D1CDC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D1CE0
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D1CE4
  c->r[0]=R8(c->r[13]+0xFFFFADF0u); // 800D1CE8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800D1CEC
  if (!crb(c,2)) { goto L_800D1D44; } // 800D1CF0
  c->r[3]=0u+0x80290000u; // 800D1CF4
  c->r[0]=0u+0x00000000u; // 800D1CF8
  c->r[30]=c->r[3]+0x00003ED0u; // 800D1CFC
  W8(c->r[3]+0x00003ED0u,c->r[0]); // 800D1D00
  c->r[29]=c->r[30]+0x00000038u; // 800D1D04
  c->r[31]=c->r[30]+0x000002D8u; // 800D1D08
L_800D1D0C:;
  c->r[3]=c->r[29]|c->r[29]; // 800D1D0C
  c->lr=0x800D1D14u; f_800D13A0(c); // 800D1D10
  c->r[29]=c->r[29]+0x000000A8u; // 800D1D14
  cmpu(c,0,c->r[29],c->r[31]); // 800D1D18
  if (crb(c,0)) { IRQCHK(c); goto L_800D1D0C; } // 800D1D1C
  c->r[4]=0u+0x00000001u; // 800D1D20
  c->r[5]=0u+0x00000000u; // 800D1D24
  c->r[3]=0u+0x00000002u; // 800D1D28
  c->r[0]=0u+0x00000003u; // 800D1D2C
  W32(c->r[30]+0x0000006Cu,c->r[5]); // 800D1D30
  W32(c->r[30]+0x00000114u,c->r[4]); // 800D1D34
  W32(c->r[30]+0x000001BCu,c->r[3]); // 800D1D38
  W32(c->r[30]+0x00000264u,c->r[0]); // 800D1D3C
  W8(c->r[13]+0xFFFFADF0u,c->r[4]); // 800D1D40
L_800D1D44:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D1D44
  c->r[3]=0u+0x80290000u; // 800D1D48
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D1D4C
  c->r[3]=c->r[3]+0x00003ED0u; // 800D1D50
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D1D54
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D1D58
  c->lr=c->r[0]; // 800D1D5C
  c->r[1]=c->r[1]+0x00000020u; // 800D1D60
  return; // 800D1D64
}

// fn_800D1D70
void f_800D1D70(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1D70
  c->r[0]=c->lr; // 800D1D74
  cmpu(c,0,c->r[4],0x00000003u); // 800D1D78
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D1D7C
  c->r[0]=0u+0x00000000u; // 800D1D80
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D1D84
  c->r[31]=c->r[4]|c->r[4]; // 800D1D88
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D1D8C
  c->r[30]=c->r[3]|c->r[3]; // 800D1D90
  if (crb(c,1)) { goto L_800D1D9C; } // 800D1D94
  c->r[0]=0u+0x00000001u; // 800D1D98
L_800D1D9C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D1D9C
  if (!crb(c,2)) { goto L_800D1DCC; } // 800D1DA0
  c->r[3]=0u+0x80250000u; // 800D1DA4
  c->r[5]=0u+0x80250000u; // 800D1DA8
  c->r[6]=c->r[31]|c->r[31]; // 800D1DAC
  c->r[4]=0u+0x00000047u; // 800D1DB0
  c->r[3]=c->r[3]+0x00006AD8u; // 800D1DB4
  c->r[5]=c->r[5]+0x00006AF8u; // 800D1DB8
  c->r[7]=0u+0x00000000u; // 800D1DBC
  c->r[8]=0u+0x00000004u; // 800D1DC0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D1DC4
  c->lr=0x800D1DCCu; f_800F1300(c); // 800D1DC8
L_800D1DCC:;
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)168); // 800D1DCC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D1DD0
  c->r[3]=c->r[30]+c->r[0]; // 800D1DD4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D1DD8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D1DDC
  c->r[3]=c->r[3]+0x00000038u; // 800D1DE0
  c->lr=c->r[0]; // 800D1DE4
  c->r[1]=c->r[1]+0x00000010u; // 800D1DE8
  return; // 800D1DEC
}

// Setup__Q44nw4r3snd6detail20RemoteSpeakerManagerFv
void f_800D1DF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1DF0
  c->r[0]=c->lr; // 800D1DF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D1DF8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D1DFC
  c->r[31]=c->r[3]|c->r[3]; // 800D1E00
  c->r[0]=R8(c->r[3]+0x00000000u); // 800D1E04
  cmps(c,0,(int32_t)c->r[0],0); // 800D1E08
  if (!crb(c,2)) { goto L_800D1E78; } // 800D1E0C
  c->r[3]=c->r[3]+0x00000008u; // 800D1E10
  c->lr=0x800D1E18u; f_80187C40(c); // 800D1E14
  c->lr=0x800D1E1Cu; f_801915C0(c); // 800D1E18
  c->r[6]=0u+0x80000000u; // 800D1E1C
  c->r[5]=0u+0x431C0000u; // 800D1E20
  c->r[0]=R32(c->r[6]+0x000000F8u); // 800D1E24
  c->r[6]=0u+0x10620000u; // 800D1E28
  c->r[10]=c->r[6]+0x00004DD3u; // 800D1E2C
  c->r[9]=0u+0x800D0000u; // 800D1E30
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800D1E34
  c->r[5]=c->r[5]+0xFFFFDE83u; // 800D1E38
  c->r[8]=(uint32_t)(((uint64_t)c->r[5]*(uint64_t)c->r[0])>>32); // 800D1E3C
  c->r[7]=0u+0x00660000u; // 800D1E40
  c->r[6]=c->r[4]|c->r[4]; // 800D1E44
  c->r[0]=c->r[7]+0xFFFFB9ABu; // 800D1E48
  c->r[5]=c->r[3]|c->r[3]; // 800D1E4C
  c->r[3]=c->r[31]+0x00000008u; // 800D1E50
  c->r[4]=rotl(c->r[8],17)&0x0001FFFFu; // 800D1E54
  c->r[9]=c->r[9]+0x00001E90u; // 800D1E58
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 800D1E5C
  c->r[7]=0u+0x00000000u; // 800D1E60
  c->r[0]=(uint32_t)(((uint64_t)c->r[10]*(uint64_t)c->r[0])>>32); // 800D1E64
  c->r[8]=rotl(c->r[0],23)&0x007FFFFFu; // 800D1E68
  c->lr=0x800D1E70u; f_80187F10(c); // 800D1E6C
  c->r[0]=0u+0x00000001u; // 800D1E70
  W8(c->r[31]+0x00000000u,c->r[0]); // 800D1E74
L_800D1E78:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D1E78
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D1E7C
  c->lr=c->r[0]; // 800D1E80
  c->r[1]=c->r[1]+0x00000010u; // 800D1E84
  return; // 800D1E88
}

// fn_800D1E90
void f_800D1E90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1E90
  c->r[0]=c->lr; // 800D1E94
  W32(c->r[1]+0x00000074u,c->r[0]); // 800D1E98
  c->r[11]=c->r[1]+0x00000070u; // 800D1E9C
  c->lr=0x800D1EA4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D1EA0
  c->r[0]=R8(c->r[13]+0xFFFFADF0u); // 800D1EA4
  c->r[29]=0u+0x80250000u; // 800D1EA8
  c->r[27]=c->r[3]|c->r[3]; // 800D1EAC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800D1EB0
  c->r[29]=c->r[29]+0x00006AD8u; // 800D1EB4
  if (!crb(c,2)) { goto L_800D1F0C; } // 800D1EB8
  c->r[3]=0u+0x80290000u; // 800D1EBC
  c->r[0]=0u+0x00000000u; // 800D1EC0
  c->r[30]=c->r[3]+0x00003ED0u; // 800D1EC4
  W8(c->r[3]+0x00003ED0u,c->r[0]); // 800D1EC8
  c->r[28]=c->r[30]+0x00000038u; // 800D1ECC
  c->r[31]=c->r[30]+0x000002D8u; // 800D1ED0
L_800D1ED4:;
  c->r[3]=c->r[28]|c->r[28]; // 800D1ED4
  c->lr=0x800D1EDCu; f_800D13A0(c); // 800D1ED8
  c->r[28]=c->r[28]+0x000000A8u; // 800D1EDC
  cmpu(c,0,c->r[28],c->r[31]); // 800D1EE0
  if (crb(c,0)) { IRQCHK(c); goto L_800D1ED4; } // 800D1EE4
  c->r[4]=0u+0x00000001u; // 800D1EE8
  c->r[5]=0u+0x00000000u; // 800D1EEC
  c->r[3]=0u+0x00000002u; // 800D1EF0
  c->r[0]=0u+0x00000003u; // 800D1EF4
  W32(c->r[30]+0x0000006Cu,c->r[5]); // 800D1EF8
  W32(c->r[30]+0x00000114u,c->r[4]); // 800D1EFC
  W32(c->r[30]+0x000001BCu,c->r[3]); // 800D1F00
  W32(c->r[30]+0x00000264u,c->r[0]); // 800D1F04
  W8(c->r[13]+0xFFFFADF0u,c->r[4]); // 800D1F08
L_800D1F0C:;
  c->r[30]=0u+0x80290000u; // 800D1F0C
  c->r[30]=c->r[30]+0x00003ED0u; // 800D1F10
  c->r[0]=c->r[30]+0x00000008u; // 800D1F14
  cmpu(c,0,c->r[0],c->r[27]); // 800D1F18
  if (crb(c,2)) { goto L_800D1F34; } // 800D1F1C
  c->r[3]=c->r[29]+0x00000000u; // 800D1F20
  c->r[5]=c->r[29]+0x0000006Cu; // 800D1F24
  c->r[4]=0u+0x00000089u; // 800D1F28
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D1F2C
  c->lr=0x800D1F34u; f_800F1300(c); // 800D1F30
L_800D1F34:;
  c->lr=0x800D1F38u; f_801AF180(c); // 800D1F34
  cmps(c,0,(int32_t)c->r[3],40); // 800D1F38
  if (crb(c,0)) { goto L_800D1FB0; } // 800D1F3C
  c->r[28]=c->r[30]+0x00000038u; // 800D1F40
  c->r[31]=0u+0x00000000u; // 800D1F44
L_800D1F48:;
  c->r[0]=R32(c->r[30]+0x00000040u); // 800D1F48
  cmps(c,0,(int32_t)c->r[0],4); // 800D1F4C
  if (!crb(c,2)) { goto L_800D1F8C; } // 800D1F50
  c->r[3]=c->r[31]|c->r[31]; // 800D1F54
  c->r[4]=c->r[1]+0x00000008u; // 800D1F58
  c->r[5]=0u+0x00000028u; // 800D1F5C
  c->lr=0x800D1F64u; f_801AF1B0(c); // 800D1F60
  cmps(c,0,(int32_t)c->r[3],40); // 800D1F64
  if (crb(c,2)) { goto L_800D1F80; } // 800D1F68
  c->r[3]=c->r[29]+0x00000000u; // 800D1F6C
  c->r[5]=c->r[29]+0x000000A8u; // 800D1F70
  c->r[4]=0u+0x00000099u; // 800D1F74
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D1F78
  c->lr=0x800D1F80u; f_800F13A0(c); // 800D1F7C
L_800D1F80:;
  c->r[3]=c->r[28]|c->r[28]; // 800D1F80
  c->r[4]=c->r[1]+0x00000008u; // 800D1F84
  c->lr=0x800D1F8Cu; f_800D1520(c); // 800D1F88
L_800D1F8C:;
  c->r[3]=c->r[28]|c->r[28]; // 800D1F8C
  c->lr=0x800D1F94u; f_800D1420(c); // 800D1F90
  c->r[31]=c->r[31]+0x00000001u; // 800D1F94
  c->r[28]=c->r[28]+0x000000A8u; // 800D1F98
  cmps(c,0,(int32_t)c->r[31],4); // 800D1F9C
  c->r[30]=c->r[30]+0x000000A8u; // 800D1FA0
  if (crb(c,0)) { IRQCHK(c); goto L_800D1F48; } // 800D1FA4
  c->r[3]=0u+0x00000028u; // 800D1FA8
  c->lr=0x800D1FB0u; f_801AF280(c); // 800D1FAC
L_800D1FB0:;
  c->r[11]=c->r[1]+0x00000070u; // 800D1FB0
  c->lr=0x800D1FB8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D1FB4
  c->r[0]=R32(c->r[1]+0x00000074u); // 800D1FB8
  c->lr=c->r[0]; // 800D1FBC
  c->r[1]=c->r[1]+0x00000070u; // 800D1FC0
  return; // 800D1FC4
}

// fn_800D1FD0
void f_800D1FD0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1FD0
  c->r[0]=c->lr; // 800D1FD4
  cmps(c,0,(int32_t)c->r[4],0); // 800D1FD8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D1FDC
  c->r[0]=0u+0x00000000u; // 800D1FE0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D1FE4
  c->r[31]=0u+0x80250000u; // 800D1FE8
  c->r[31]=c->r[31]+0x00006BA0u; // 800D1FEC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D1FF0
  c->r[30]=c->r[3]|c->r[3]; // 800D1FF4
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D1FF8
  W32(c->r[1]+0x00000010u,c->r[28]); // 800D1FFC
  c->r[28]=c->r[4]|c->r[4]; // 800D2000
  W32(c->r[3]+0x00000000u,c->r[0]); // 800D2004
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D2008
  if (!crb(c,2)) { goto L_800D2024; } // 800D200C
  c->r[3]=c->r[31]+0x00000000u; // 800D2010
  c->r[5]=c->r[31]+0x000000A0u; // 800D2014
  c->r[4]=0u+0x0000004Eu; // 800D2018
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D201C
  c->lr=0x800D2024u; f_800F1300(c); // 800D2020
L_800D2024:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 800D2024
  c->r[0]=c->r[3]+0xADAD0000u; // 800D2028
  cmpu(c,0,c->r[0],0x00004551u); // 800D202C
  if (crb(c,2)) { goto L_800D2048; } // 800D2030
  c->r[3]=c->r[31]+0x00000000u; // 800D2034
  c->r[5]=c->r[31]+0x00000010u; // 800D2038
  c->r[4]=0u+0x0000002Bu; // 800D203C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D2040
  c->lr=0x800D2048u; f_800F1300(c); // 800D2044
L_800D2048:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 800D2048
  c->r[0]=c->r[3]+0xADAD0000u; // 800D204C
  cmpu(c,0,c->r[0],0x00004551u); // 800D2050
  if (crb(c,2)) { goto L_800D2060; } // 800D2054
  c->r[0]=0u+0x00000000u; // 800D2058
  goto L_800D20C4; // 800D205C
L_800D2060:;
  c->r[0]=R16(c->r[28]+0x00000006u); // 800D2060
  cmpu(c,0,c->r[0],0x00000100u); // 800D2064
  if (!crb(c,0)) { goto L_800D2080; } // 800D2068
  c->r[3]=c->r[31]+0x00000000u; // 800D206C
  c->r[5]=c->r[31]+0x00000044u; // 800D2070
  c->r[4]=0u+0x00000033u; // 800D2074
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D2078
  c->lr=0x800D2080u; f_800F1300(c); // 800D207C
L_800D2080:;
  c->r[29]=R16(c->r[28]+0x00000006u); // 800D2080
  cmpu(c,0,c->r[29],0x00000100u); // 800D2084
  if (!crb(c,0)) { goto L_800D2094; } // 800D2088
  c->r[0]=0u+0x00000000u; // 800D208C
  goto L_800D20C4; // 800D2090
L_800D2094:;
  if (!crb(c,1)) { goto L_800D20AC; } // 800D2094
  c->r[3]=c->r[31]+0x00000000u; // 800D2098
  c->r[5]=c->r[31]+0x00000044u; // 800D209C
  c->r[4]=0u+0x0000003Bu; // 800D20A0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D20A4
  c->lr=0x800D20ACu; f_800F1300(c); // 800D20A8
L_800D20AC:;
  c->r[0]=addc(c,~c->r[29],0x00000100u,1); // 800D20AC
  c->r[3]=0u+0x00000100u; // 800D20B0
  c->r[3]=c->r[3]|~c->r[29]; // 800D20B4
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800D20B8
  c->r[0]=c->r[3]-c->r[0]; // 800D20BC
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800D20C0
L_800D20C4:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D20C4
  if (!crb(c,2)) { goto L_800D20D4; } // 800D20C8
  c->r[3]=c->r[30]|c->r[30]; // 800D20CC
  goto L_800D210C; // 800D20D0
L_800D20D4:;
  W32(c->r[30]+0x00000000u,c->r[28]); // 800D20D4
  c->r[0]=R32(c->r[28]+0x00000010u); // 800D20D8
  c->r[3]=c->r[0]+c->r[28]; // 800D20DC
  W32(c->r[30]+0x00000004u,c->r[3]); // 800D20E0
  c->r[3]=R32(c->r[3]+0x00000000u); // 800D20E4
  c->r[0]=c->r[3]+0xBBBF0000u; // 800D20E8
  cmpu(c,0,c->r[0],0x00005441u); // 800D20EC
  if (crb(c,2)) { goto L_800D2108; } // 800D20F0
  c->r[3]=c->r[31]+0x00000000u; // 800D20F4
  c->r[5]=c->r[31]+0x000000C8u; // 800D20F8
  c->r[4]=0u+0x00000057u; // 800D20FC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D2100
  c->lr=0x800D2108u; f_800F1300(c); // 800D2104
L_800D2108:;
  c->r[3]=c->r[30]|c->r[30]; // 800D2108
L_800D210C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D210C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D2110
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D2114
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D2118
  c->r[28]=R32(c->r[1]+0x00000010u); // 800D211C
  c->lr=c->r[0]; // 800D2120
  c->r[1]=c->r[1]+0x00000020u; // 800D2124
  return; // 800D2128
}

// fn_800D2130
void f_800D2130(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2130
  c->r[0]=c->lr; // 800D2134
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D2138
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D213C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D2140
  c->r[31]=c->r[3]|c->r[3]; // 800D2144
  cmps(c,0,(int32_t)c->r[0],0); // 800D2148
  if (!crb(c,2)) { goto L_800D216C; } // 800D214C
  c->r[3]=0u+0x80250000u; // 800D2150
  c->r[5]=0u+0x80250000u; // 800D2154
  c->r[3]=c->r[3]+0x00006BA0u; // 800D2158
  c->r[4]=0u+0x00000065u; // 800D215C
  c->r[5]=c->r[5]+0x00006CC0u; // 800D2160
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D2164
  c->lr=0x800D216Cu; f_800F1300(c); // 800D2168
L_800D216C:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 800D216C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D2170
  c->r[0]=R32(c->r[3]+0x00000008u); // 800D2174
  c->r[3]=c->r[0]+c->r[3]; // 800D2178
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D217C
  c->lr=c->r[0]; // 800D2180
  c->r[1]=c->r[1]+0x00000010u; // 800D2184
  return; // 800D2188
}

// fn_800D2190
void f_800D2190(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2190
  c->r[0]=c->lr; // 800D2194
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D2198
  c->r[11]=c->r[1]+0x00000030u; // 800D219C
  c->lr=0x800D21A4u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D21A0
  cmps(c,0,(int32_t)c->r[5],0); // 800D21A4
  c->r[31]=0u+0x80250000u; // 800D21A8
  c->r[26]=c->r[3]|c->r[3]; // 800D21AC
  c->r[24]=c->r[4]|c->r[4]; // 800D21B0
  c->r[25]=c->r[5]|c->r[5]; // 800D21B4
  c->r[31]=c->r[31]+0x00006BA0u; // 800D21B8
  if (!crb(c,2)) { goto L_800D21D4; } // 800D21BC
  c->r[3]=c->r[31]+0x00000000u; // 800D21C0
  c->r[5]=c->r[31]+0x00000148u; // 800D21C4
  c->r[4]=0u+0x00000075u; // 800D21C8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D21CC
  c->lr=0x800D21D4u; f_800F1300(c); // 800D21D0
L_800D21D4:;
  c->r[3]=R32(c->r[26]+0x00000000u); // 800D21D4
  c->r[0]=R32(c->r[3]+0x00000018u); // 800D21D8
  c->r[29]=c->r[0]+c->r[3]; cr0(c,c->r[29]); // 800D21DC
  if (!crb(c,2)) { goto L_800D21EC; } // 800D21E0
  c->r[3]=0u+0x00000000u; // 800D21E4
  goto L_800D2274; // 800D21E8
L_800D21EC:;
  c->r[3]=c->r[24]|c->r[24]; // 800D21EC
  c->lr=0x800D21F4u; f_80206CB4(c); // 800D21F0
  c->r[28]=c->r[3]|c->r[3]; // 800D21F4
  c->r[30]=c->r[29]|c->r[29]; // 800D21F8
  c->r[27]=0u+0x00000000u; // 800D21FC
  goto L_800D2264; // 800D2200
L_800D2204:;
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 800D2204
  c->r[0]=c->r[29]+c->r[0]; // 800D2208
  c->r[26]=addc(c,c->r[0],0x00000008u,0); cr0(c,c->r[26]); // 800D220C
  if (!crb(c,2)) { goto L_800D2228; } // 800D2210
  c->r[3]=c->r[31]+0x00000000u; // 800D2214
  c->r[5]=c->r[31]+0x00000174u; // 800D2218
  c->r[4]=0u+0x00000085u; // 800D221C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D2220
  c->lr=0x800D2228u; f_800F1300(c); // 800D2224
L_800D2228:;
  c->r[0]=R32(c->r[26]+0x00000004u); // 800D2228
  cmpu(c,0,c->r[28],c->r[0]); // 800D222C
  if (!crb(c,2)) { goto L_800D225C; } // 800D2230
  c->r[3]=c->r[24]|c->r[24]; // 800D2234
  c->r[5]=c->r[28]|c->r[28]; // 800D2238
  c->r[4]=c->r[26]+0x00000008u; // 800D223C
  c->lr=0x800D2244u; f_8020E9CC(c); // 800D2240
  cmps(c,0,(int32_t)c->r[3],0); // 800D2244
  if (!crb(c,2)) { goto L_800D225C; } // 800D2248
  c->r[0]=R32(c->r[26]+0x00000000u); // 800D224C
  c->r[3]=0u+0x00000001u; // 800D2250
  W32(c->r[25]+0x00000000u,c->r[0]); // 800D2254
  goto L_800D2274; // 800D2258
L_800D225C:;
  c->r[30]=c->r[30]+0x00000004u; // 800D225C
  c->r[27]=c->r[27]+0x00000001u; // 800D2260
L_800D2264:;
  c->r[0]=R32(c->r[29]+0x00000008u); // 800D2264
  cmpu(c,0,c->r[27],c->r[0]); // 800D2268
  if (crb(c,0)) { IRQCHK(c); goto L_800D2204; } // 800D226C
  c->r[3]=0u+0x00000000u; // 800D2270
L_800D2274:;
  c->r[11]=c->r[1]+0x00000030u; // 800D2274
  c->lr=0x800D227Cu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D2278
  c->r[0]=R32(c->r[1]+0x00000034u); // 800D227C
  c->lr=c->r[0]; // 800D2280
  c->r[1]=c->r[1]+0x00000030u; // 800D2284
  return; // 800D2288
}

// fn_800D2290
void f_800D2290(Ctx* __restrict c) {
  c->r[3]=0u+0x80290000u; // 800D2290
  c->r[0]=0u+0xFFFFFFFFu; // 800D2294
  {uint32_t ea=c->r[3]+0x000041A8u; W16(ea,c->r[0]); c->r[3]=ea;} // 800D2298
  W16(c->r[3]+0x00000002u,c->r[0]); // 800D229C
  W16(c->r[3]+0x00000004u,c->r[0]); // 800D22A0
  W16(c->r[3]+0x00000006u,c->r[0]); // 800D22A4
  W16(c->r[3]+0x00000008u,c->r[0]); // 800D22A8
  W16(c->r[3]+0x0000000Au,c->r[0]); // 800D22AC
  W16(c->r[3]+0x0000000Cu,c->r[0]); // 800D22B0
  W16(c->r[3]+0x0000000Eu,c->r[0]); // 800D22B4
  W16(c->r[3]+0x00000010u,c->r[0]); // 800D22B8
  W16(c->r[3]+0x00000012u,c->r[0]); // 800D22BC
  W16(c->r[3]+0x00000014u,c->r[0]); // 800D22C0
  W16(c->r[3]+0x00000016u,c->r[0]); // 800D22C4
  W16(c->r[3]+0x00000018u,c->r[0]); // 800D22C8
  W16(c->r[3]+0x0000001Au,c->r[0]); // 800D22CC
  W16(c->r[3]+0x0000001Cu,c->r[0]); // 800D22D0
  W16(c->r[3]+0x0000001Eu,c->r[0]); // 800D22D4
  return; // 800D22D8
}

// fn_800D22E0
void f_800D22E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D22E0
  c->r[0]=c->lr; // 800D22E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D22E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D22EC
  c->r[31]=c->r[3]|c->r[3]; // 800D22F0
  c->lr=0x800D22F8u; f_800CA2E0(c); // 800D22F4
  c->r[9]=0u+0x80250000u; // 800D22F8
  c->r[10]=0u+0x00000000u; // 800D22FC
  c->r[9]=c->r[9]+0x00006FF0u; // 800D2300
  {uint32_t ea=c->r[2]+0xFFFF9B10u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D2304
  {uint32_t ea=c->r[2]+0xFFFF9B14u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D2308
  c->r[8]=c->r[9]+0x00000024u; // 800D230C
  c->r[7]=c->r[9]+0x00000038u; // 800D2310
  c->r[6]=0u+0x00000078u; // 800D2314
  c->r[5]=0u+0x00000030u; // 800D2318
  c->r[4]=0u+0x0000007Fu; // 800D231C
  c->r[3]=0u+0x00000040u; // 800D2320
  W32(c->r[31]+0x000000B4u,c->r[10]); // 800D2324
  c->r[0]=0u+0xFFFFFFFFu; // 800D2328
  W32(c->r[31]+0x000000B8u,c->r[10]); // 800D232C
  W32(c->r[31]+0x000000C0u,c->r[10]); // 800D2330
  W32(c->r[31]+0x000000C4u,c->r[10]); // 800D2334
  W32(c->r[31]+0x00000000u,c->r[9]); // 800D2338
  W32(c->r[31]+0x000000BCu,c->r[8]); // 800D233C
  W32(c->r[31]+0x000000C8u,c->r[7]); // 800D2340
  W8(c->r[31]+0x000000CCu,c->r[10]); // 800D2344
  W8(c->r[31]+0x000000CDu,c->r[10]); // 800D2348
  W8(c->r[31]+0x000000CEu,c->r[10]); // 800D234C
  W8(c->r[31]+0x000000CFu,c->r[10]); // 800D2350
  {uint32_t ea=c->r[31]+0x000000D4u; WF32(ea,c->f[1]);} // 800D2354
  {uint32_t ea=c->r[31]+0x000000D8u; WF32(ea,c->f[0]);} // 800D2358
  W32(c->r[31]+0x000000DCu,c->r[10]); // 800D235C
  {uint32_t ea=c->r[31]+0x000000E0u; WF32(ea,c->f[0]);} // 800D2360
  {uint32_t ea=c->r[31]+0x000000D0u; WF32(ea,c->f[1]);} // 800D2364
  W32(c->r[31]+0x00000160u,c->r[10]); // 800D2368
  W32(c->r[31]+0x000000E4u,c->r[10]); // 800D236C
  W32(c->r[31]+0x000000F8u,c->r[10]); // 800D2370
  W32(c->r[31]+0x000000FCu,c->r[10]); // 800D2374
  W16(c->r[31]+0x000000ECu,c->r[6]); // 800D2378
  W8(c->r[31]+0x000000EAu,c->r[5]); // 800D237C
  W8(c->r[31]+0x000000E8u,c->r[4]); // 800D2380
  W8(c->r[31]+0x000000E9u,c->r[3]); // 800D2384
  W32(c->r[31]+0x000000F0u,c->r[10]); // 800D2388
  W16(c->r[31]+0x00000140u,c->r[0]); // 800D238C
  W16(c->r[31]+0x00000142u,c->r[0]); // 800D2390
  W16(c->r[31]+0x00000144u,c->r[0]); // 800D2394
  W16(c->r[31]+0x00000146u,c->r[0]); // 800D2398
  W16(c->r[31]+0x00000148u,c->r[0]); // 800D239C
  W16(c->r[31]+0x0000014Au,c->r[0]); // 800D23A0
  W16(c->r[31]+0x0000014Cu,c->r[0]); // 800D23A4
  W16(c->r[31]+0x0000014Eu,c->r[0]); // 800D23A8
  W16(c->r[31]+0x00000150u,c->r[0]); // 800D23AC
  W16(c->r[31]+0x00000152u,c->r[0]); // 800D23B0
  W16(c->r[31]+0x00000154u,c->r[0]); // 800D23B4
  W16(c->r[31]+0x00000156u,c->r[0]); // 800D23B8
  W16(c->r[31]+0x00000158u,c->r[0]); // 800D23BC
  W16(c->r[31]+0x0000015Au,c->r[0]); // 800D23C0
  W16(c->r[31]+0x0000015Cu,c->r[0]); // 800D23C4
  W16(c->r[31]+0x0000015Eu,c->r[0]); // 800D23C8
  c->r[0]=0u+0x00000000u; // 800D23CC
  W32(c->r[31]+0x00000100u,c->r[0]); // 800D23D0
  c->r[3]=c->r[31]|c->r[31]; // 800D23D4
  W32(c->r[31]+0x00000104u,c->r[0]); // 800D23D8
  W32(c->r[31]+0x00000108u,c->r[0]); // 800D23DC
  W32(c->r[31]+0x0000010Cu,c->r[0]); // 800D23E0
  W32(c->r[31]+0x00000110u,c->r[0]); // 800D23E4
  W32(c->r[31]+0x00000114u,c->r[0]); // 800D23E8
  W32(c->r[31]+0x00000118u,c->r[0]); // 800D23EC
  W32(c->r[31]+0x0000011Cu,c->r[0]); // 800D23F0
  W32(c->r[31]+0x00000120u,c->r[0]); // 800D23F4
  W32(c->r[31]+0x00000124u,c->r[0]); // 800D23F8
  W32(c->r[31]+0x00000128u,c->r[0]); // 800D23FC
  W32(c->r[31]+0x0000012Cu,c->r[0]); // 800D2400
  W32(c->r[31]+0x00000130u,c->r[0]); // 800D2404
  W32(c->r[31]+0x00000134u,c->r[0]); // 800D2408
  W32(c->r[31]+0x00000138u,c->r[0]); // 800D240C
  W32(c->r[31]+0x0000013Cu,c->r[0]); // 800D2410
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D2414
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D2418
  c->lr=c->r[0]; // 800D241C
  c->r[1]=c->r[1]+0x00000010u; // 800D2420
  return; // 800D2424
}

// fn_800D2430
void f_800D2430(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2430
  c->r[0]=c->lr; // 800D2434
  cmps(c,0,(int32_t)c->r[3],0); // 800D2438
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D243C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D2440
  c->r[31]=c->r[3]|c->r[3]; // 800D2444
  if (crb(c,2)) { goto L_800D2458; } // 800D2448
  cmps(c,0,(int32_t)c->r[4],0); // 800D244C
  if (!crb(c,1)) { goto L_800D2458; } // 800D2450
  c->lr=0x800D2458u; f_8015D040(c); // 800D2454
L_800D2458:;
  c->r[3]=c->r[31]|c->r[31]; // 800D2458
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D245C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D2460
  c->lr=c->r[0]; // 800D2464
  c->r[1]=c->r[1]+0x00000010u; // 800D2468
  return; // 800D246C
}

// fn_800D2470
void f_800D2470(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2470
  c->r[0]=c->lr; // 800D2474
  cmps(c,0,(int32_t)c->r[3],0); // 800D2478
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D247C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D2480
  c->r[31]=c->r[3]|c->r[3]; // 800D2484
  if (crb(c,2)) { goto L_800D2498; } // 800D2488
  cmps(c,0,(int32_t)c->r[4],0); // 800D248C
  if (!crb(c,1)) { goto L_800D2498; } // 800D2490
  c->lr=0x800D2498u; f_8015D040(c); // 800D2494
L_800D2498:;
  c->r[3]=c->r[31]|c->r[31]; // 800D2498
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D249C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D24A0
  c->lr=c->r[0]; // 800D24A4
  c->r[1]=c->r[1]+0x00000010u; // 800D24A8
  return; // 800D24AC
}

// fn_800D24B0
void f_800D24B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D24B0
  c->r[0]=c->lr; // 800D24B4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D24B8
  c->r[11]=c->r[1]+0x00000030u; // 800D24BC
  c->lr=0x800D24C4u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D24C0
  cmps(c,0,(int32_t)c->r[3],0); // 800D24C4
  c->r[30]=c->r[3]|c->r[3]; // 800D24C8
  c->r[31]=c->r[4]|c->r[4]; // 800D24CC
  if (crb(c,2)) { goto L_800D265C; } // 800D24D0
  c->r[5]=0u+0x80250000u; // 800D24D4
  c->r[5]=c->r[5]+0x00006FF0u; // 800D24D8
  W32(c->r[3]+0x00000000u,c->r[5]); // 800D24DC
  c->r[4]=c->r[5]+0x00000024u; // 800D24E0
  c->r[0]=c->r[5]+0x00000038u; // 800D24E4
  W32(c->r[3]+0x000000BCu,c->r[4]); // 800D24E8
  W32(c->r[3]+0x000000C8u,c->r[0]); // 800D24EC
  c->lr=0x800D24F4u; f_800DD3D0(c); // 800D24F0
  c->r[3]=c->r[3]+0x00000354u; // 800D24F4
  c->lr=0x800D24FCu; f_8018E950(c); // 800D24F8
  c->lr=0x800D2500u; f_800DD3D0(c); // 800D24FC
  c->r[3]=c->r[3]+0x00000354u; // 800D2500
  c->lr=0x800D2508u; f_8018E950(c); // 800D2504
  c->r[0]=R8(c->r[30]+0x000000CDu); // 800D2508
  cmps(c,0,(int32_t)c->r[0],0); // 800D250C
  if (crb(c,2)) { goto L_800D2538; } // 800D2510
  cmps(c,0,(int32_t)c->r[30],0); // 800D2514
  c->r[26]=c->r[30]|c->r[30]; // 800D2518
  if (crb(c,2)) { goto L_800D2524; } // 800D251C
  c->r[26]=c->r[30]+0x000000C0u; // 800D2520
L_800D2524:;
  c->lr=0x800D2528u; f_800DD3D0(c); // 800D2524
  c->r[4]=c->r[26]|c->r[26]; // 800D2528
  c->lr=0x800D2530u; f_800DD990(c); // 800D252C
  c->r[0]=0u+0x00000000u; // 800D2530
  W8(c->r[30]+0x000000CDu,c->r[0]); // 800D2534
L_800D2538:;
  c->r[0]=R8(c->r[30]+0x000000CCu); // 800D2538
  cmps(c,0,(int32_t)c->r[0],0); // 800D253C
  if (crb(c,2)) { goto L_800D2568; } // 800D2540
  cmps(c,0,(int32_t)c->r[30],0); // 800D2544
  c->r[26]=c->r[30]|c->r[30]; // 800D2548
  if (crb(c,2)) { goto L_800D2554; } // 800D254C
  c->r[26]=c->r[30]+0x000000B4u; // 800D2550
L_800D2554:;
  c->lr=0x800D2558u; f_800CD960(c); // 800D2554
  c->r[4]=c->r[26]|c->r[26]; // 800D2558
  c->lr=0x800D2560u; f_800CDAD0(c); // 800D255C
  c->r[0]=0u+0x00000000u; // 800D2560
  W8(c->r[30]+0x000000CCu,c->r[0]); // 800D2564
L_800D2568:;
  c->r[26]=0u+0x00000000u; // 800D2568
  c->r[25]=0u+0x00000000u; // 800D256C
  c->r[27]=0u+0x80250000u; // 800D2570
  c->r[28]=0u+0x80250000u; // 800D2574
  c->r[29]=0u+0x00000000u; // 800D2578
L_800D257C:;
  c->lr=0x800D2580u; f_800DD3D0(c); // 800D257C
  c->r[3]=c->r[3]+0x00000354u; // 800D2580
  c->lr=0x800D2588u; f_8018E950(c); // 800D2584
  cmpu(c,0,c->r[26],0x0000000Fu); // 800D2588
  c->r[0]=0u+0x00000000u; // 800D258C
  if (crb(c,1)) { goto L_800D2598; } // 800D2590
  c->r[0]=0u+0x00000001u; // 800D2594
L_800D2598:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D2598
  if (!crb(c,2)) { goto L_800D25C0; } // 800D259C
  c->r[6]=c->r[26]|c->r[26]; // 800D25A0
  c->r[3]=c->r[27]+0x00006D40u; // 800D25A4
  c->r[5]=c->r[28]+0x00006D54u; // 800D25A8
  c->r[4]=0u+0x00000261u; // 800D25AC
  c->r[7]=0u+0x00000000u; // 800D25B0
  c->r[8]=0u+0x00000010u; // 800D25B4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D25B8
  c->lr=0x800D25C0u; f_800F1300(c); // 800D25BC
L_800D25C0:;
  cmps(c,0,(int32_t)c->r[26],15); // 800D25C0
  if (!crb(c,1)) { goto L_800D25D0; } // 800D25C4
  c->r[3]=0u+0x00000000u; // 800D25C8
  goto L_800D25D8; // 800D25CC
L_800D25D0:;
  c->r[3]=c->r[30]+c->r[25]; // 800D25D0
  c->r[3]=R32(c->r[3]+0x00000100u); // 800D25D4
L_800D25D8:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D25D8
  if (!crb(c,2)) { goto L_800D25F0; } // 800D25DC
  c->lr=0x800D25E4u; f_800DD3D0(c); // 800D25E0
  c->r[3]=c->r[3]+0x00000354u; // 800D25E4
  c->lr=0x800D25ECu; f_8018EA30(c); // 800D25E8
  goto L_800D2624; // 800D25EC
L_800D25F0:;
  c->lr=0x800D25F4u; f_800D4990(c); // 800D25F0
  c->r[3]=R32(c->r[30]+0x000000F4u); // 800D25F4
  c->r[4]=c->r[30]+c->r[25]; // 800D25F8
  c->r[4]=R32(c->r[4]+0x00000100u); // 800D25FC
  c->r[12]=R32(c->r[3]+0x00000000u); // 800D2600
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D2604
  c->ctr=c->r[12]; // 800D2608
  if (true) { c->lr=0x800D2610u; dispatch(c,c->ctr); } // 800D260C
  c->r[3]=c->r[30]+c->r[25]; // 800D2610
  W32(c->r[3]+0x00000100u,c->r[29]); // 800D2614
  c->lr=0x800D261Cu; f_800DD3D0(c); // 800D2618
  c->r[3]=c->r[3]+0x00000354u; // 800D261C
  c->lr=0x800D2624u; f_8018EA30(c); // 800D2620
L_800D2624:;
  c->r[26]=c->r[26]+0x00000001u; // 800D2624
  c->r[25]=c->r[25]+0x00000004u; // 800D2628
  cmps(c,0,(int32_t)c->r[26],16); // 800D262C
  if (crb(c,0)) { IRQCHK(c); goto L_800D257C; } // 800D2630
  c->lr=0x800D2638u; f_800DD3D0(c); // 800D2634
  c->r[3]=c->r[3]+0x00000354u; // 800D2638
  c->lr=0x800D2640u; f_8018EA30(c); // 800D263C
  c->lr=0x800D2644u; f_800DD3D0(c); // 800D2640
  c->r[3]=c->r[3]+0x00000354u; // 800D2644
  c->lr=0x800D264Cu; f_8018EA30(c); // 800D2648
  cmps(c,0,(int32_t)c->r[31],0); // 800D264C
  if (!crb(c,1)) { goto L_800D265C; } // 800D2650
  c->r[3]=c->r[30]|c->r[30]; // 800D2654
  c->lr=0x800D265Cu; f_8015D040(c); // 800D2658
L_800D265C:;
  c->r[11]=c->r[1]+0x00000030u; // 800D265C
  c->r[3]=c->r[30]|c->r[30]; // 800D2660
  c->lr=0x800D2668u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D2664
  c->r[0]=R32(c->r[1]+0x00000034u); // 800D2668
  c->lr=c->r[0]; // 800D266C
  c->r[1]=c->r[1]+0x00000030u; // 800D2670
  return; // 800D2674
}

// InitParam__Q44nw4r3snd6detail9SeqPlayerFiPQ44nw4r3snd6detail14NoteOnCallback
void f_800D2680(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2680
  c->r[0]=c->lr; // 800D2684
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D2688
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D268C
  c->r[31]=c->r[5]|c->r[5]; // 800D2690
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D2694
  c->r[30]=c->r[4]|c->r[4]; // 800D2698
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D269C
  c->r[29]=c->r[3]|c->r[3]; // 800D26A0
  c->lr=0x800D26A8u; f_800CA3A0(c); // 800D26A4
  {uint32_t ea=c->r[2]+0xFFFF9B10u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D26A8
  c->r[7]=0u+0x00000000u; // 800D26AC
  {uint32_t ea=c->r[2]+0xFFFF9B14u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D26B0
  c->r[6]=0u+0x00000078u; // 800D26B4
  c->r[5]=0u+0x00000030u; // 800D26B8
  c->r[4]=0u+0x0000007Fu; // 800D26BC
  c->r[3]=0u+0x00000040u; // 800D26C0
  W8(c->r[29]+0x000000CDu,c->r[7]); // 800D26C4
  c->r[0]=0u+0xFFFFFFFFu; // 800D26C8
  W8(c->r[29]+0x000000CEu,c->r[7]); // 800D26CC
  {uint32_t ea=c->r[29]+0x000000D4u; WF32(ea,c->f[1]);} // 800D26D0
  W32(c->r[29]+0x000000DCu,c->r[7]); // 800D26D4
  {uint32_t ea=c->r[29]+0x000000E0u; WF32(ea,c->f[0]);} // 800D26D8
  {uint32_t ea=c->r[29]+0x000000D0u; WF32(ea,c->f[1]);} // 800D26DC
  W32(c->r[29]+0x00000160u,c->r[7]); // 800D26E0
  W32(c->r[29]+0x000000E4u,c->r[30]); // 800D26E4
  W16(c->r[29]+0x000000ECu,c->r[6]); // 800D26E8
  W8(c->r[29]+0x000000EAu,c->r[5]); // 800D26EC
  W8(c->r[29]+0x000000E8u,c->r[4]); // 800D26F0
  W8(c->r[29]+0x000000E9u,c->r[3]); // 800D26F4
  W32(c->r[29]+0x000000F0u,c->r[31]); // 800D26F8
  {uint32_t ea=c->r[29]+0x000000D8u; WF32(ea,c->f[0]);} // 800D26FC
  W16(c->r[29]+0x00000140u,c->r[0]); // 800D2700
  W16(c->r[29]+0x00000142u,c->r[0]); // 800D2704
  W16(c->r[29]+0x00000144u,c->r[0]); // 800D2708
  W16(c->r[29]+0x00000146u,c->r[0]); // 800D270C
  W16(c->r[29]+0x00000148u,c->r[0]); // 800D2710
  W16(c->r[29]+0x0000014Au,c->r[0]); // 800D2714
  W16(c->r[29]+0x0000014Cu,c->r[0]); // 800D2718
  W16(c->r[29]+0x0000014Eu,c->r[0]); // 800D271C
  W16(c->r[29]+0x00000150u,c->r[0]); // 800D2720
  W16(c->r[29]+0x00000152u,c->r[0]); // 800D2724
  W16(c->r[29]+0x00000154u,c->r[0]); // 800D2728
  W16(c->r[29]+0x00000156u,c->r[0]); // 800D272C
  W16(c->r[29]+0x00000158u,c->r[0]); // 800D2730
  W16(c->r[29]+0x0000015Au,c->r[0]); // 800D2734
  W16(c->r[29]+0x0000015Cu,c->r[0]); // 800D2738
  W16(c->r[29]+0x0000015Eu,c->r[0]); // 800D273C
  c->r[0]=0u+0x00000000u; // 800D2740
  W32(c->r[29]+0x00000100u,c->r[0]); // 800D2744
  W32(c->r[29]+0x00000104u,c->r[0]); // 800D2748
  W32(c->r[29]+0x00000108u,c->r[0]); // 800D274C
  W32(c->r[29]+0x0000010Cu,c->r[0]); // 800D2750
  W32(c->r[29]+0x00000110u,c->r[0]); // 800D2754
  W32(c->r[29]+0x00000114u,c->r[0]); // 800D2758
  W32(c->r[29]+0x00000118u,c->r[0]); // 800D275C
  W32(c->r[29]+0x0000011Cu,c->r[0]); // 800D2760
  W32(c->r[29]+0x00000120u,c->r[0]); // 800D2764
  W32(c->r[29]+0x00000124u,c->r[0]); // 800D2768
  W32(c->r[29]+0x00000128u,c->r[0]); // 800D276C
  W32(c->r[29]+0x0000012Cu,c->r[0]); // 800D2770
  W32(c->r[29]+0x00000130u,c->r[0]); // 800D2774
  W32(c->r[29]+0x00000134u,c->r[0]); // 800D2778
  W32(c->r[29]+0x00000138u,c->r[0]); // 800D277C
  W32(c->r[29]+0x0000013Cu,c->r[0]); // 800D2780
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D2784
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D2788
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D278C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D2790
  c->lr=c->r[0]; // 800D2794
  c->r[1]=c->r[1]+0x00000020u; // 800D2798
  return; // 800D279C
}

// fn_800D27A0
void f_800D27A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D27A0
  c->r[0]=c->lr; // 800D27A4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D27A8
  c->r[11]=c->r[1]+0x00000030u; // 800D27AC
  c->lr=0x800D27B4u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D27B0
  c->r[27]=0u+0x80250000u; // 800D27B4
  c->r[29]=c->r[3]|c->r[3]; // 800D27B8
  c->r[30]=c->r[4]|c->r[4]; // 800D27BC
  c->r[31]=c->r[5]|c->r[5]; // 800D27C0
  c->r[23]=c->r[6]|c->r[6]; // 800D27C4
  c->r[24]=c->r[7]|c->r[7]; // 800D27C8
  c->r[27]=c->r[27]+0x00006D40u; // 800D27CC
  c->lr=0x800D27D4u; f_800DD3D0(c); // 800D27D0
  c->r[3]=c->r[3]+0x00000354u; // 800D27D4
  c->lr=0x800D27DCu; f_8018E950(c); // 800D27D8
  c->lr=0x800D27E0u; f_800DD3D0(c); // 800D27DC
  c->r[3]=c->r[3]+0x00000354u; // 800D27E0
  c->lr=0x800D27E8u; f_8018E950(c); // 800D27E4
  c->lr=0x800D27ECu; f_800DD3D0(c); // 800D27E8
  c->r[3]=c->r[3]+0x00000354u; // 800D27EC
  c->lr=0x800D27F4u; f_8018E950(c); // 800D27F0
  c->r[0]=R8(c->r[29]+0x000000CDu); // 800D27F4
  cmps(c,0,(int32_t)c->r[0],0); // 800D27F8
  if (crb(c,2)) { goto L_800D2824; } // 800D27FC
  cmps(c,0,(int32_t)c->r[29],0); // 800D2800
  c->r[26]=c->r[29]|c->r[29]; // 800D2804
  if (crb(c,2)) { goto L_800D2810; } // 800D2808
  c->r[26]=c->r[29]+0x000000C0u; // 800D280C
L_800D2810:;
  c->lr=0x800D2814u; f_800DD3D0(c); // 800D2810
  c->r[4]=c->r[26]|c->r[26]; // 800D2814
  c->lr=0x800D281Cu; f_800DD990(c); // 800D2818
  c->r[0]=0u+0x00000000u; // 800D281C
  W8(c->r[29]+0x000000CDu,c->r[0]); // 800D2820
L_800D2824:;
  c->r[0]=R8(c->r[29]+0x000000CCu); // 800D2824
  cmps(c,0,(int32_t)c->r[0],0); // 800D2828
  if (crb(c,2)) { goto L_800D2854; } // 800D282C
  cmps(c,0,(int32_t)c->r[29],0); // 800D2830
  c->r[26]=c->r[29]|c->r[29]; // 800D2834
  if (crb(c,2)) { goto L_800D2840; } // 800D2838
  c->r[26]=c->r[29]+0x000000B4u; // 800D283C
L_800D2840:;
  c->lr=0x800D2844u; f_800CD960(c); // 800D2840
  c->r[4]=c->r[26]|c->r[26]; // 800D2844
  c->lr=0x800D284Cu; f_800CDAD0(c); // 800D2848
  c->r[0]=0u+0x00000000u; // 800D284C
  W8(c->r[29]+0x000000CCu,c->r[0]); // 800D2850
L_800D2854:;
  c->r[25]=c->r[29]|c->r[29]; // 800D2854
  c->r[26]=0u+0x00000000u; // 800D2858
  c->r[28]=0u+0x00000000u; // 800D285C
L_800D2860:;
  c->lr=0x800D2864u; f_800DD3D0(c); // 800D2860
  c->r[3]=c->r[3]+0x00000354u; // 800D2864
  c->lr=0x800D286Cu; f_8018E950(c); // 800D2868
  cmpu(c,0,c->r[26],0x0000000Fu); // 800D286C
  c->r[0]=0u+0x00000000u; // 800D2870
  if (crb(c,1)) { goto L_800D287C; } // 800D2874
  c->r[0]=0u+0x00000001u; // 800D2878
L_800D287C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D287C
  if (!crb(c,2)) { goto L_800D28A4; } // 800D2880
  c->r[6]=c->r[26]|c->r[26]; // 800D2884
  c->r[3]=c->r[27]+0x00000000u; // 800D2888
  c->r[5]=c->r[27]+0x00000014u; // 800D288C
  c->r[4]=0u+0x00000261u; // 800D2890
  c->r[7]=0u+0x00000000u; // 800D2894
  c->r[8]=0u+0x00000010u; // 800D2898
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D289C
  c->lr=0x800D28A4u; f_800F1300(c); // 800D28A0
L_800D28A4:;
  cmps(c,0,(int32_t)c->r[26],15); // 800D28A4
  if (!crb(c,1)) { goto L_800D28B4; } // 800D28A8
  c->r[3]=0u+0x00000000u; // 800D28AC
  goto L_800D28B8; // 800D28B0
L_800D28B4:;
  c->r[3]=R32(c->r[25]+0x00000100u); // 800D28B4
L_800D28B8:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D28B8
  if (!crb(c,2)) { goto L_800D28D0; } // 800D28BC
  c->lr=0x800D28C4u; f_800DD3D0(c); // 800D28C0
  c->r[3]=c->r[3]+0x00000354u; // 800D28C4
  c->lr=0x800D28CCu; f_8018EA30(c); // 800D28C8
  goto L_800D28FC; // 800D28CC
L_800D28D0:;
  c->lr=0x800D28D4u; f_800D4990(c); // 800D28D0
  c->r[3]=R32(c->r[29]+0x000000F4u); // 800D28D4
  c->r[4]=R32(c->r[25]+0x00000100u); // 800D28D8
  c->r[12]=R32(c->r[3]+0x00000000u); // 800D28DC
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D28E0
  c->ctr=c->r[12]; // 800D28E4
  if (true) { c->lr=0x800D28ECu; dispatch(c,c->ctr); } // 800D28E8
  W32(c->r[25]+0x00000100u,c->r[28]); // 800D28EC
  c->lr=0x800D28F4u; f_800DD3D0(c); // 800D28F0
  c->r[3]=c->r[3]+0x00000354u; // 800D28F4
  c->lr=0x800D28FCu; f_8018EA30(c); // 800D28F8
L_800D28FC:;
  c->r[26]=c->r[26]+0x00000001u; // 800D28FC
  c->r[25]=c->r[25]+0x00000004u; // 800D2900
  cmps(c,0,(int32_t)c->r[26],16); // 800D2904
  if (crb(c,0)) { IRQCHK(c); goto L_800D2860; } // 800D2908
  c->lr=0x800D2910u; f_800DD3D0(c); // 800D290C
  c->r[3]=c->r[3]+0x00000354u; // 800D2910
  c->lr=0x800D2918u; f_8018EA30(c); // 800D2914
  c->lr=0x800D291Cu; f_800DD3D0(c); // 800D2918
  c->r[3]=c->r[3]+0x00000354u; // 800D291C
  c->lr=0x800D2924u; f_8018EA30(c); // 800D2920
  c->r[3]=c->r[29]|c->r[29]; // 800D2924
  c->r[4]=c->r[23]|c->r[23]; // 800D2928
  c->r[5]=c->r[24]|c->r[24]; // 800D292C
  c->lr=0x800D2934u; f_800D2680(c); // 800D2930
  c->lr=0x800D2938u; f_8018D6A0(c); // 800D2934
  c->r[28]=c->r[3]|c->r[3]; // 800D2938
  c->r[3]=c->r[31]|c->r[31]; // 800D293C
  c->r[25]=0u+0x00000000u; // 800D2940
  goto L_800D2958; // 800D2944
L_800D2948:;
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 800D2948
  if (crb(c,2)) { goto L_800D2954; } // 800D294C
  c->r[25]=c->r[25]+0x00000001u; // 800D2950
L_800D2954:;
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800D2954
L_800D2958:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D2958
  if (!crb(c,2)) { IRQCHK(c); goto L_800D2948; } // 800D295C
  c->r[12]=R32(c->r[30]+0x00000000u); // 800D2960
  c->r[3]=c->r[30]|c->r[30]; // 800D2964
  c->r[12]=R32(c->r[12]+0x00000014u); // 800D2968
  c->ctr=c->r[12]; // 800D296C
  if (true) { c->lr=0x800D2974u; dispatch(c,c->ctr); } // 800D2970
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[3]); // 800D2974
  if (!crb(c,1)) { goto L_800D2998; } // 800D2978
  c->r[3]=c->r[28]|c->r[28]; // 800D297C
  c->lr=0x800D2984u; f_8018D6E0(c); // 800D2980
  c->lr=0x800D2988u; f_800DD3D0(c); // 800D2984
  c->r[3]=c->r[3]+0x00000354u; // 800D2988
  c->lr=0x800D2990u; f_8018EA30(c); // 800D298C
  c->r[3]=0u+0x00000001u; // 800D2990
  goto L_800D2A78; // 800D2994
L_800D2998:;
  c->r[26]=c->r[29]|c->r[29]; // 800D2998
  c->r[25]=0u+0x00000000u; // 800D299C
  goto L_800D2A30; // 800D29A0
L_800D29A4:;
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 800D29A4
  if (crb(c,2)) { goto L_800D2A24; } // 800D29A8
  c->r[12]=R32(c->r[30]+0x00000000u); // 800D29AC
  c->r[3]=c->r[30]|c->r[30]; // 800D29B0
  c->r[4]=c->r[29]|c->r[29]; // 800D29B4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D29B8
  c->ctr=c->r[12]; // 800D29BC
  if (true) { c->lr=0x800D29C4u; dispatch(c,c->ctr); } // 800D29C0
  cmps(c,0,(int32_t)c->r[3],0); // 800D29C4
  c->r[24]=c->r[3]|c->r[3]; // 800D29C8
  if (!crb(c,2)) { goto L_800D29E4; } // 800D29CC
  c->r[3]=c->r[27]+0x00000000u; // 800D29D0
  c->r[5]=c->r[27]+0x00000054u; // 800D29D4
  c->r[4]=0u+0x000000C7u; // 800D29D8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D29DC
  c->lr=0x800D29E4u; f_800F1300(c); // 800D29E0
L_800D29E4:;
  c->lr=0x800D29E8u; f_800DD3D0(c); // 800D29E4
  c->r[3]=c->r[3]+0x00000354u; // 800D29E8
  c->lr=0x800D29F0u; f_8018E950(c); // 800D29EC
  cmps(c,0,(int32_t)c->r[25],15); // 800D29F0
  if (!crb(c,1)) { goto L_800D2A08; } // 800D29F4
  c->lr=0x800D29FCu; f_800DD3D0(c); // 800D29F8
  c->r[3]=c->r[3]+0x00000354u; // 800D29FC
  c->lr=0x800D2A04u; f_8018EA30(c); // 800D2A00
  goto L_800D2A24; // 800D2A04
L_800D2A08:;
  W32(c->r[26]+0x00000100u,c->r[24]); // 800D2A08
  c->r[3]=c->r[24]|c->r[24]; // 800D2A0C
  c->r[4]=c->r[25]|c->r[25]; // 800D2A10
  c->lr=0x800D2A18u; f_800D45A0(c); // 800D2A14
  c->lr=0x800D2A1Cu; f_800DD3D0(c); // 800D2A18
  c->r[3]=c->r[3]+0x00000354u; // 800D2A1C
  c->lr=0x800D2A24u; f_8018EA30(c); // 800D2A20
L_800D2A24:;
  c->r[31]=rotl(c->r[31],31)&0x7FFFFFFFu; // 800D2A24
  c->r[26]=c->r[26]+0x00000004u; // 800D2A28
  c->r[25]=c->r[25]+0x00000001u; // 800D2A2C
L_800D2A30:;
  cmps(c,0,(int32_t)c->r[31],0); // 800D2A30
  if (!crb(c,2)) { IRQCHK(c); goto L_800D29A4; } // 800D2A34
  c->r[3]=c->r[28]|c->r[28]; // 800D2A38
  c->lr=0x800D2A40u; f_8018D6E0(c); // 800D2A3C
  cmps(c,0,(int32_t)c->r[29],0); // 800D2A40
  c->r[26]=c->r[29]|c->r[29]; // 800D2A44
  if (crb(c,2)) { goto L_800D2A50; } // 800D2A48
  c->r[26]=c->r[29]+0x000000B4u; // 800D2A4C
L_800D2A50:;
  c->lr=0x800D2A54u; f_800CD960(c); // 800D2A50
  c->r[4]=c->r[26]|c->r[26]; // 800D2A54
  c->lr=0x800D2A5Cu; f_800CDA50(c); // 800D2A58
  c->r[0]=0u+0x00000001u; // 800D2A5C
  W32(c->r[29]+0x000000F4u,c->r[30]); // 800D2A60
  W8(c->r[29]+0x000000CCu,c->r[0]); // 800D2A64
  c->lr=0x800D2A6Cu; f_800DD3D0(c); // 800D2A68
  c->r[3]=c->r[3]+0x00000354u; // 800D2A6C
  c->lr=0x800D2A74u; f_8018EA30(c); // 800D2A70
  c->r[3]=0u+0x00000000u; // 800D2A74
L_800D2A78:;
  c->r[11]=c->r[1]+0x00000030u; // 800D2A78
  c->lr=0x800D2A80u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D2A7C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800D2A80
  c->lr=c->r[0]; // 800D2A84
  c->r[1]=c->r[1]+0x00000030u; // 800D2A88
  return; // 800D2A8C
}

// fn_800D2A90
void f_800D2A90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2A90
  c->r[0]=c->lr; // 800D2A94
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D2A98
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D2A9C
  c->r[31]=c->r[3]|c->r[3]; // 800D2AA0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D2AA4
  c->r[30]=c->r[5]|c->r[5]; // 800D2AA8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D2AAC
  c->r[29]=c->r[4]|c->r[4]; // 800D2AB0
  c->lr=0x800D2AB8u; f_800DD3D0(c); // 800D2AB4
  c->r[3]=c->r[3]+0x00000354u; // 800D2AB8
  c->lr=0x800D2AC0u; f_8018E950(c); // 800D2ABC
  c->r[31]=R32(c->r[31]+0x00000100u); // 800D2AC0
  cmps(c,0,(int32_t)c->r[31],0); // 800D2AC4
  if (!crb(c,2)) { goto L_800D2AE8; } // 800D2AC8
  c->r[3]=0u+0x80250000u; // 800D2ACC
  c->r[5]=0u+0x80250000u; // 800D2AD0
  c->r[3]=c->r[3]+0x00006D40u; // 800D2AD4
  c->r[4]=0u+0x000000F5u; // 800D2AD8
  c->r[5]=c->r[5]+0x00006DBCu; // 800D2ADC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D2AE0
  c->lr=0x800D2AE8u; f_800F1300(c); // 800D2AE4
L_800D2AE8:;
  cmps(c,0,(int32_t)c->r[29],0); // 800D2AE8
  if (crb(c,2)) { goto L_800D2B08; } // 800D2AEC
  c->r[3]=c->r[31]|c->r[31]; // 800D2AF0
  c->r[4]=c->r[29]|c->r[29]; // 800D2AF4
  c->r[5]=c->r[30]|c->r[30]; // 800D2AF8
  c->lr=0x800D2B00u; f_800D4960(c); // 800D2AFC
  c->r[3]=c->r[31]|c->r[31]; // 800D2B00
  c->lr=0x800D2B08u; f_800D4970(c); // 800D2B04
L_800D2B08:;
  c->lr=0x800D2B0Cu; f_800DD3D0(c); // 800D2B08
  c->r[3]=c->r[3]+0x00000354u; // 800D2B0C
  c->lr=0x800D2B14u; f_8018EA30(c); // 800D2B10
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D2B14
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D2B18
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D2B1C
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D2B20
  c->lr=c->r[0]; // 800D2B24
  c->r[1]=c->r[1]+0x00000020u; // 800D2B28
  return; // 800D2B2C
}

// fn_800D2B30
void f_800D2B30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2B30
  c->r[0]=c->lr; // 800D2B34
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D2B38
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D2B3C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D2B40
  c->r[30]=c->r[3]|c->r[3]; // 800D2B44
  c->lr=0x800D2B4Cu; f_800DD3D0(c); // 800D2B48
  c->r[3]=c->r[3]+0x00000354u; // 800D2B4C
  c->lr=0x800D2B54u; f_8018E950(c); // 800D2B50
  cmps(c,0,(int32_t)c->r[30],0); // 800D2B54
  c->r[31]=c->r[30]|c->r[30]; // 800D2B58
  if (crb(c,2)) { goto L_800D2B64; } // 800D2B5C
  c->r[31]=c->r[30]+0x000000C0u; // 800D2B60
L_800D2B64:;
  c->lr=0x800D2B68u; f_800DD3D0(c); // 800D2B64
  c->r[4]=c->r[31]|c->r[31]; // 800D2B68
  c->lr=0x800D2B70u; f_800DD8F0(c); // 800D2B6C
  c->r[0]=0u+0x00000001u; // 800D2B70
  W8(c->r[30]+0x000000CDu,c->r[0]); // 800D2B74
  c->lr=0x800D2B7Cu; f_800DD3D0(c); // 800D2B78
  c->r[3]=c->r[3]+0x00000354u; // 800D2B7C
  c->lr=0x800D2B84u; f_8018EA30(c); // 800D2B80
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D2B84
  c->r[3]=0u+0x00000001u; // 800D2B88
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D2B8C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D2B90
  c->lr=c->r[0]; // 800D2B94
  c->r[1]=c->r[1]+0x00000010u; // 800D2B98
  return; // 800D2B9C
}

// fn_800D2BA0
void f_800D2BA0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2BA0
  c->r[0]=c->lr; // 800D2BA4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D2BA8
  c->r[11]=c->r[1]+0x00000020u; // 800D2BAC
  c->lr=0x800D2BB4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D2BB0
  c->r[26]=c->r[3]|c->r[3]; // 800D2BB4
  c->lr=0x800D2BBCu; f_800DD3D0(c); // 800D2BB8
  c->r[3]=c->r[3]+0x00000354u; // 800D2BBC
  c->lr=0x800D2BC4u; f_8018E950(c); // 800D2BC0
  c->lr=0x800D2BC8u; f_800DD3D0(c); // 800D2BC4
  c->r[3]=c->r[3]+0x00000354u; // 800D2BC8
  c->lr=0x800D2BD0u; f_8018E950(c); // 800D2BCC
  c->r[0]=R8(c->r[26]+0x000000CDu); // 800D2BD0
  cmps(c,0,(int32_t)c->r[0],0); // 800D2BD4
  if (crb(c,2)) { goto L_800D2C00; } // 800D2BD8
  cmps(c,0,(int32_t)c->r[26],0); // 800D2BDC
  c->r[28]=c->r[26]|c->r[26]; // 800D2BE0
  if (crb(c,2)) { goto L_800D2BEC; } // 800D2BE4
  c->r[28]=c->r[26]+0x000000C0u; // 800D2BE8
L_800D2BEC:;
  c->lr=0x800D2BF0u; f_800DD3D0(c); // 800D2BEC
  c->r[4]=c->r[28]|c->r[28]; // 800D2BF0
  c->lr=0x800D2BF8u; f_800DD990(c); // 800D2BF4
  c->r[0]=0u+0x00000000u; // 800D2BF8
  W8(c->r[26]+0x000000CDu,c->r[0]); // 800D2BFC
L_800D2C00:;
  c->r[0]=R8(c->r[26]+0x000000CCu); // 800D2C00
  cmps(c,0,(int32_t)c->r[0],0); // 800D2C04
  if (crb(c,2)) { goto L_800D2C30; } // 800D2C08
  cmps(c,0,(int32_t)c->r[26],0); // 800D2C0C
  c->r[28]=c->r[26]|c->r[26]; // 800D2C10
  if (crb(c,2)) { goto L_800D2C1C; } // 800D2C14
  c->r[28]=c->r[26]+0x000000B4u; // 800D2C18
L_800D2C1C:;
  c->lr=0x800D2C20u; f_800CD960(c); // 800D2C1C
  c->r[4]=c->r[28]|c->r[28]; // 800D2C20
  c->lr=0x800D2C28u; f_800CDAD0(c); // 800D2C24
  c->r[0]=0u+0x00000000u; // 800D2C28
  W8(c->r[26]+0x000000CCu,c->r[0]); // 800D2C2C
L_800D2C30:;
  c->r[27]=c->r[26]|c->r[26]; // 800D2C30
  c->r[28]=0u+0x00000000u; // 800D2C34
  c->r[29]=0u+0x80250000u; // 800D2C38
  c->r[30]=0u+0x80250000u; // 800D2C3C
  c->r[31]=0u+0x00000000u; // 800D2C40
L_800D2C44:;
  c->lr=0x800D2C48u; f_800DD3D0(c); // 800D2C44
  c->r[3]=c->r[3]+0x00000354u; // 800D2C48
  c->lr=0x800D2C50u; f_8018E950(c); // 800D2C4C
  cmpu(c,0,c->r[28],0x0000000Fu); // 800D2C50
  c->r[0]=0u+0x00000000u; // 800D2C54
  if (crb(c,1)) { goto L_800D2C60; } // 800D2C58
  c->r[0]=0u+0x00000001u; // 800D2C5C
L_800D2C60:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D2C60
  if (!crb(c,2)) { goto L_800D2C88; } // 800D2C64
  c->r[6]=c->r[28]|c->r[28]; // 800D2C68
  c->r[3]=c->r[29]+0x00006D40u; // 800D2C6C
  c->r[5]=c->r[30]+0x00006D54u; // 800D2C70
  c->r[4]=0u+0x00000261u; // 800D2C74
  c->r[7]=0u+0x00000000u; // 800D2C78
  c->r[8]=0u+0x00000010u; // 800D2C7C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D2C80
  c->lr=0x800D2C88u; f_800F1300(c); // 800D2C84
L_800D2C88:;
  cmps(c,0,(int32_t)c->r[28],15); // 800D2C88
  if (!crb(c,1)) { goto L_800D2C98; } // 800D2C8C
  c->r[3]=0u+0x00000000u; // 800D2C90
  goto L_800D2C9C; // 800D2C94
L_800D2C98:;
  c->r[3]=R32(c->r[27]+0x00000100u); // 800D2C98
L_800D2C9C:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D2C9C
  if (!crb(c,2)) { goto L_800D2CB4; } // 800D2CA0
  c->lr=0x800D2CA8u; f_800DD3D0(c); // 800D2CA4
  c->r[3]=c->r[3]+0x00000354u; // 800D2CA8
  c->lr=0x800D2CB0u; f_8018EA30(c); // 800D2CAC
  goto L_800D2CE0; // 800D2CB0
L_800D2CB4:;
  c->lr=0x800D2CB8u; f_800D4990(c); // 800D2CB4
  c->r[3]=R32(c->r[26]+0x000000F4u); // 800D2CB8
  c->r[4]=R32(c->r[27]+0x00000100u); // 800D2CBC
  c->r[12]=R32(c->r[3]+0x00000000u); // 800D2CC0
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D2CC4
  c->ctr=c->r[12]; // 800D2CC8
  if (true) { c->lr=0x800D2CD0u; dispatch(c,c->ctr); } // 800D2CCC
  W32(c->r[27]+0x00000100u,c->r[31]); // 800D2CD0
  c->lr=0x800D2CD8u; f_800DD3D0(c); // 800D2CD4
  c->r[3]=c->r[3]+0x00000354u; // 800D2CD8
  c->lr=0x800D2CE0u; f_8018EA30(c); // 800D2CDC
L_800D2CE0:;
  c->r[28]=c->r[28]+0x00000001u; // 800D2CE0
  c->r[27]=c->r[27]+0x00000004u; // 800D2CE4
  cmps(c,0,(int32_t)c->r[28],16); // 800D2CE8
  if (crb(c,0)) { IRQCHK(c); goto L_800D2C44; } // 800D2CEC
  c->lr=0x800D2CF4u; f_800DD3D0(c); // 800D2CF0
  c->r[3]=c->r[3]+0x00000354u; // 800D2CF4
  c->lr=0x800D2CFCu; f_8018EA30(c); // 800D2CF8
  c->lr=0x800D2D00u; f_800DD3D0(c); // 800D2CFC
  c->r[3]=c->r[3]+0x00000354u; // 800D2D00
  c->lr=0x800D2D08u; f_8018EA30(c); // 800D2D04
  c->r[11]=c->r[1]+0x00000020u; // 800D2D08
  c->lr=0x800D2D10u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D2D0C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D2D10
  c->lr=c->r[0]; // 800D2D14
  c->r[1]=c->r[1]+0x00000020u; // 800D2D18
  return; // 800D2D1C
}

// fn_800D2D20
void f_800D2D20(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2D20
  c->r[0]=c->lr; // 800D2D24
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D2D28
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D2D2C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D2D30
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D2D34
  c->r[29]=c->r[4]|c->r[4]; // 800D2D38
  W32(c->r[1]+0x00000010u,c->r[28]); // 800D2D3C
  c->r[28]=c->r[3]|c->r[3]; // 800D2D40
  c->lr=0x800D2D48u; f_800DD3D0(c); // 800D2D44
  c->r[3]=c->r[3]+0x00000354u; // 800D2D48
  c->lr=0x800D2D50u; f_8018E950(c); // 800D2D4C
  W8(c->r[28]+0x000000CEu,c->r[29]); // 800D2D50
  c->r[30]=0u+0x00000000u; // 800D2D54
  c->r[31]=0u+0x00000000u; // 800D2D58
L_800D2D5C:;
  c->r[3]=c->r[28]+c->r[31]; // 800D2D5C
  c->r[3]=R32(c->r[3]+0x00000100u); // 800D2D60
  cmps(c,0,(int32_t)c->r[3],0); // 800D2D64
  if (crb(c,2)) { goto L_800D2D74; } // 800D2D68
  c->r[4]=c->r[29]|c->r[29]; // 800D2D6C
  c->lr=0x800D2D74u; f_800D4DA0(c); // 800D2D70
L_800D2D74:;
  c->r[30]=c->r[30]+0x00000001u; // 800D2D74
  c->r[31]=c->r[31]+0x00000004u; // 800D2D78
  cmps(c,0,(int32_t)c->r[30],16); // 800D2D7C
  if (crb(c,0)) { IRQCHK(c); goto L_800D2D5C; } // 800D2D80
  c->lr=0x800D2D88u; f_800DD3D0(c); // 800D2D84
  c->r[3]=c->r[3]+0x00000354u; // 800D2D88
  c->lr=0x800D2D90u; f_8018EA30(c); // 800D2D8C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D2D90
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D2D94
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D2D98
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D2D9C
  c->r[28]=R32(c->r[1]+0x00000010u); // 800D2DA0
  c->lr=c->r[0]; // 800D2DA4
  c->r[1]=c->r[1]+0x00000020u; // 800D2DA8
  return; // 800D2DAC
}

// fn_800D2DB0
void f_800D2DB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2DB0
  c->r[0]=c->lr; // 800D2DB4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D2DB8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D2DBC
  c->r[31]=c->r[5]|c->r[5]; // 800D2DC0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D2DC4
  c->r[30]=c->r[4]|c->r[4]; // 800D2DC8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D2DCC
  c->r[29]=c->r[3]|c->r[3]; // 800D2DD0
  c->lr=0x800D2DD8u; f_800DD3D0(c); // 800D2DD4
  c->r[3]=c->r[3]+0x00000354u; // 800D2DD8
  c->lr=0x800D2DE0u; f_8018E950(c); // 800D2DDC
  c->r[0]=R8(c->r[29]+0x000000CCu); // 800D2DE0
  cmps(c,0,(int32_t)c->r[0],0); // 800D2DE4
  if (!crb(c,2)) { goto L_800D2DFC; } // 800D2DE8
  c->lr=0x800D2DF0u; f_800DD3D0(c); // 800D2DEC
  c->r[3]=c->r[3]+0x00000354u; // 800D2DF0
  c->lr=0x800D2DF8u; f_8018EA30(c); // 800D2DF4
  goto L_800D2E54; // 800D2DF8
L_800D2DFC:;
  cmps(c,0,(int32_t)c->r[30],0); // 800D2DFC
  if (crb(c,2)) { goto L_800D2E10; } // 800D2E00
  cmps(c,0,(int32_t)c->r[30],1); // 800D2E04
  if (crb(c,2)) { goto L_800D2E20; } // 800D2E08
  goto L_800D2E48; // 800D2E0C
L_800D2E10:;
  c->r[0]=R32(c->r[29]+0x000000DCu); // 800D2E10
  c->r[0]=c->r[0]+c->r[31]; // 800D2E14
  W32(c->r[29]+0x000000DCu,c->r[0]); // 800D2E18
  goto L_800D2E48; // 800D2E1C
L_800D2E20:;
  c->r[3]=c->r[31]^0x80000000u; // 800D2E20
  c->r[0]=0u+0x43300000u; // 800D2E24
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800D2E28
  {uint32_t ea=c->r[2]+0xFFFF9B18u; c->f[2]=RF64(ea);} // 800D2E2C
  W32(c->r[1]+0x00000008u,c->r[0]); // 800D2E30
  {uint32_t ea=c->r[29]+0x000000E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D2E34
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 800D2E38
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800D2E3C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800D2E40
  {uint32_t ea=c->r[29]+0x000000E0u; WF32(ea,c->f[0]);} // 800D2E44
L_800D2E48:;
  c->lr=0x800D2E4Cu; f_800DD3D0(c); // 800D2E48
  c->r[3]=c->r[3]+0x00000354u; // 800D2E4C
  c->lr=0x800D2E54u; f_8018EA30(c); // 800D2E50
L_800D2E54:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D2E54
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D2E58
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D2E5C
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D2E60
  c->lr=c->r[0]; // 800D2E64
  c->r[1]=c->r[1]+0x00000020u; // 800D2E68
  return; // 800D2E6C
}

// fn_800D2E70
void f_800D2E70(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2E70
  c->r[0]=c->lr; // 800D2E74
  cmpu(c,0,c->r[4],0x0000007Fu); // 800D2E78
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D2E7C
  c->r[0]=0u+0x00000000u; // 800D2E80
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D2E84
  c->r[31]=c->r[4]|c->r[4]; // 800D2E88
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D2E8C
  c->r[30]=c->r[3]|c->r[3]; // 800D2E90
  if (crb(c,1)) { goto L_800D2E9C; } // 800D2E94
  c->r[0]=0u+0x00000001u; // 800D2E98
L_800D2E9C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D2E9C
  if (!crb(c,2)) { goto L_800D2ECC; } // 800D2EA0
  c->r[3]=0u+0x80250000u; // 800D2EA4
  c->r[5]=0u+0x80250000u; // 800D2EA8
  c->r[6]=c->r[31]|c->r[31]; // 800D2EAC
  c->r[4]=0u+0x00000166u; // 800D2EB0
  c->r[3]=c->r[3]+0x00006D40u; // 800D2EB4
  c->r[5]=c->r[5]+0x00006E14u; // 800D2EB8
  c->r[7]=0u+0x00000000u; // 800D2EBC
  c->r[8]=0u+0x0000007Fu; // 800D2EC0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D2EC4
  c->lr=0x800D2ECCu; f_800F1300(c); // 800D2EC8
L_800D2ECC:;
  W8(c->r[30]+0x000000E9u,c->r[31]); // 800D2ECC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D2ED0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D2ED4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D2ED8
  c->lr=c->r[0]; // 800D2EDC
  c->r[1]=c->r[1]+0x00000010u; // 800D2EE0
  return; // 800D2EE4
}

// fn_800D2EF0
void f_800D2EF0(Ctx* __restrict c) {
  W8(c->r[3]+0x000000CFu,c->r[4]); // 800D2EF0
  return; // 800D2EF4
}

// fn_800D2F00
void f_800D2F00(Ctx* __restrict c) {
  W32(c->r[3]+0x000000F8u,c->r[4]); // 800D2F00
  W32(c->r[3]+0x000000FCu,c->r[5]); // 800D2F04
  return; // 800D2F08
}

// fn_800D2F10
void f_800D2F10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2F10
  c->r[0]=c->lr; // 800D2F14
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D2F18
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800D2F1C
  c->r[31]=c->r[5]|c->r[5]; // 800D2F20
  W32(c->r[1]+0x00000028u,c->r[30]); // 800D2F24
  c->r[30]=c->r[4]|c->r[4]; // 800D2F28
  W32(c->r[1]+0x00000024u,c->r[29]); // 800D2F2C
  c->r[29]=c->r[3]|c->r[3]; // 800D2F30
  c->r[0]=R32(c->r[3]+0x000000F8u); // 800D2F34
  cmps(c,0,(int32_t)c->r[0],0); // 800D2F38
  if (crb(c,2)) { goto L_800D2FB0; } // 800D2F3C
  cmps(c,0,(int32_t)c->r[5],0); // 800D2F40
  if (!crb(c,2)) { goto L_800D2F64; } // 800D2F44
  c->r[3]=0u+0x80250000u; // 800D2F48
  c->r[5]=0u+0x80250000u; // 800D2F4C
  c->r[3]=c->r[3]+0x00006D40u; // 800D2F50
  c->r[4]=0u+0x00000179u; // 800D2F54
  c->r[5]=c->r[5]+0x00006D94u; // 800D2F58
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D2F5C
  c->lr=0x800D2F64u; f_800F1300(c); // 800D2F60
L_800D2F64:;
  c->r[5]=0u+0x80290000u; // 800D2F64
  c->r[0]=c->r[29]+0x00000140u; // 800D2F68
  c->r[5]=c->r[5]+0x000041A8u; // 800D2F6C
  W32(c->r[1]+0x00000008u,c->r[0]); // 800D2F70
  c->r[3]=c->r[31]|c->r[31]; // 800D2F74
  c->r[4]=0u+0x00000000u; // 800D2F78
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800D2F7C
  c->lr=0x800D2F84u; f_800D5960(c); // 800D2F80
  W32(c->r[1]+0x00000010u,c->r[3]); // 800D2F84
  c->r[3]=c->r[30]|c->r[30]; // 800D2F88
  c->r[4]=c->r[1]+0x00000008u; // 800D2F8C
  c->r[0]=R8(c->r[31]+0x00000024u); // 800D2F90
  W8(c->r[1]+0x00000014u,c->r[0]); // 800D2F94
  c->r[12]=R32(c->r[29]+0x000000F8u); // 800D2F98
  c->r[5]=R32(c->r[29]+0x000000FCu); // 800D2F9C
  c->ctr=c->r[12]; // 800D2FA0
  if (true) { c->lr=0x800D2FA8u; dispatch(c,c->ctr); } // 800D2FA4
  c->r[0]=R8(c->r[1]+0x00000014u); // 800D2FA8
  W8(c->r[31]+0x00000024u,c->r[0]); // 800D2FAC
L_800D2FB0:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800D2FB0
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800D2FB4
  c->r[30]=R32(c->r[1]+0x00000028u); // 800D2FB8
  c->r[29]=R32(c->r[1]+0x00000024u); // 800D2FBC
  c->lr=c->r[0]; // 800D2FC0
  c->r[1]=c->r[1]+0x00000030u; // 800D2FC4
  return; // 800D2FC8
}

// fn_800D2FD0
void f_800D2FD0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2FD0
  c->r[0]=c->lr; // 800D2FD4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D2FD8
  c->r[11]=c->r[1]+0x00000020u; // 800D2FDC
  c->lr=0x800D2FE4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D2FE0
  c->r[31]=c->r[3]|c->r[3]; // 800D2FE4
  c->r[27]=c->r[4]|c->r[4]; // 800D2FE8
  c->r[26]=c->r[5]|c->r[5]; // 800D2FEC
  c->lr=0x800D2FF4u; f_800DD3D0(c); // 800D2FF0
  c->r[3]=c->r[3]+0x00000354u; // 800D2FF4
  c->lr=0x800D2FFCu; f_8018E950(c); // 800D2FF8
  c->r[0]=R8(c->r[31]+0x000000CCu); // 800D2FFC
  cmps(c,0,(int32_t)c->r[0],0); // 800D3000
  if (crb(c,2)) { goto L_800D3198; } // 800D3004
  c->r[0]=0u+0x00000010u; // 800D3008
  c->r[3]=0u+0x00000000u; // 800D300C
  c->ctr=c->r[0]; // 800D3010
  c->r[0]=c->r[0]|0x00000000u; // 800D3014
L_800D3018:;
  c->r[4]=c->r[31]+c->r[3]; // 800D3018
  c->r[4]=R32(c->r[4]+0x00000100u); // 800D301C
  cmps(c,0,(int32_t)c->r[4],0); // 800D3020
  if (crb(c,2)) { goto L_800D3190; } // 800D3024
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 800D3028
  cmpu(c,0,c->r[27],c->r[0]); // 800D302C
  if (crb(c,1)) { goto L_800D3190; } // 800D3030
  cmpu(c,0,c->r[0],c->r[26]); // 800D3034
  if (crb(c,1)) { goto L_800D3190; } // 800D3038
  c->lr=0x800D3040u; f_800DD3D0(c); // 800D303C
  c->r[3]=c->r[3]+0x00000354u; // 800D3040
  c->lr=0x800D3048u; f_8018E950(c); // 800D3044
  c->lr=0x800D304Cu; f_800DD3D0(c); // 800D3048
  c->r[3]=c->r[3]+0x00000354u; // 800D304C
  c->lr=0x800D3054u; f_8018E950(c); // 800D3050
  c->r[0]=R8(c->r[31]+0x000000CDu); // 800D3054
  cmps(c,0,(int32_t)c->r[0],0); // 800D3058
  if (crb(c,2)) { goto L_800D3084; } // 800D305C
  cmps(c,0,(int32_t)c->r[31],0); // 800D3060
  c->r[27]=c->r[31]|c->r[31]; // 800D3064
  if (crb(c,2)) { goto L_800D3070; } // 800D3068
  c->r[27]=c->r[31]+0x000000C0u; // 800D306C
L_800D3070:;
  c->lr=0x800D3074u; f_800DD3D0(c); // 800D3070
  c->r[4]=c->r[27]|c->r[27]; // 800D3074
  c->lr=0x800D307Cu; f_800DD990(c); // 800D3078
  c->r[0]=0u+0x00000000u; // 800D307C
  W8(c->r[31]+0x000000CDu,c->r[0]); // 800D3080
L_800D3084:;
  c->r[0]=R8(c->r[31]+0x000000CCu); // 800D3084
  cmps(c,0,(int32_t)c->r[0],0); // 800D3088
  if (crb(c,2)) { goto L_800D30B4; } // 800D308C
  cmps(c,0,(int32_t)c->r[31],0); // 800D3090
  c->r[27]=c->r[31]|c->r[31]; // 800D3094
  if (crb(c,2)) { goto L_800D30A0; } // 800D3098
  c->r[27]=c->r[31]+0x000000B4u; // 800D309C
L_800D30A0:;
  c->lr=0x800D30A4u; f_800CD960(c); // 800D30A0
  c->r[4]=c->r[27]|c->r[27]; // 800D30A4
  c->lr=0x800D30ACu; f_800CDAD0(c); // 800D30A8
  c->r[0]=0u+0x00000000u; // 800D30AC
  W8(c->r[31]+0x000000CCu,c->r[0]); // 800D30B0
L_800D30B4:;
  c->r[26]=c->r[31]|c->r[31]; // 800D30B4
  c->r[27]=0u+0x00000000u; // 800D30B8
  c->r[28]=0u+0x80250000u; // 800D30BC
  c->r[29]=0u+0x80250000u; // 800D30C0
  c->r[30]=0u+0x00000000u; // 800D30C4
L_800D30C8:;
  c->lr=0x800D30CCu; f_800DD3D0(c); // 800D30C8
  c->r[3]=c->r[3]+0x00000354u; // 800D30CC
  c->lr=0x800D30D4u; f_8018E950(c); // 800D30D0
  cmpu(c,0,c->r[27],0x0000000Fu); // 800D30D4
  c->r[0]=0u+0x00000000u; // 800D30D8
  if (crb(c,1)) { goto L_800D30E4; } // 800D30DC
  c->r[0]=0u+0x00000001u; // 800D30E0
L_800D30E4:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D30E4
  if (!crb(c,2)) { goto L_800D310C; } // 800D30E8
  c->r[6]=c->r[27]|c->r[27]; // 800D30EC
  c->r[3]=c->r[28]+0x00006D40u; // 800D30F0
  c->r[5]=c->r[29]+0x00006D54u; // 800D30F4
  c->r[4]=0u+0x00000261u; // 800D30F8
  c->r[7]=0u+0x00000000u; // 800D30FC
  c->r[8]=0u+0x00000010u; // 800D3100
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D3104
  c->lr=0x800D310Cu; f_800F1300(c); // 800D3108
L_800D310C:;
  cmps(c,0,(int32_t)c->r[27],15); // 800D310C
  if (!crb(c,1)) { goto L_800D311C; } // 800D3110
  c->r[3]=0u+0x00000000u; // 800D3114
  goto L_800D3120; // 800D3118
L_800D311C:;
  c->r[3]=R32(c->r[26]+0x00000100u); // 800D311C
L_800D3120:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D3120
  if (!crb(c,2)) { goto L_800D3138; } // 800D3124
  c->lr=0x800D312Cu; f_800DD3D0(c); // 800D3128
  c->r[3]=c->r[3]+0x00000354u; // 800D312C
  c->lr=0x800D3134u; f_8018EA30(c); // 800D3130
  goto L_800D3164; // 800D3134
L_800D3138:;
  c->lr=0x800D313Cu; f_800D4990(c); // 800D3138
  c->r[3]=R32(c->r[31]+0x000000F4u); // 800D313C
  c->r[4]=R32(c->r[26]+0x00000100u); // 800D3140
  c->r[12]=R32(c->r[3]+0x00000000u); // 800D3144
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D3148
  c->ctr=c->r[12]; // 800D314C
  if (true) { c->lr=0x800D3154u; dispatch(c,c->ctr); } // 800D3150
  W32(c->r[26]+0x00000100u,c->r[30]); // 800D3154
  c->lr=0x800D315Cu; f_800DD3D0(c); // 800D3158
  c->r[3]=c->r[3]+0x00000354u; // 800D315C
  c->lr=0x800D3164u; f_8018EA30(c); // 800D3160
L_800D3164:;
  c->r[27]=c->r[27]+0x00000001u; // 800D3164
  c->r[26]=c->r[26]+0x00000004u; // 800D3168
  cmps(c,0,(int32_t)c->r[27],16); // 800D316C
  if (crb(c,0)) { IRQCHK(c); goto L_800D30C8; } // 800D3170
  c->lr=0x800D3178u; f_800DD3D0(c); // 800D3174
  c->r[3]=c->r[3]+0x00000354u; // 800D3178
  c->lr=0x800D3180u; f_8018EA30(c); // 800D317C
  c->lr=0x800D3184u; f_800DD3D0(c); // 800D3180
  c->r[3]=c->r[3]+0x00000354u; // 800D3184
  c->lr=0x800D318Cu; f_8018EA30(c); // 800D3188
  goto L_800D3198; // 800D318C
L_800D3190:;
  c->r[3]=c->r[3]+0x00000004u; // 800D3190
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D3018; } // 800D3194
L_800D3198:;
  c->lr=0x800D319Cu; f_800DD3D0(c); // 800D3198
  c->r[3]=c->r[3]+0x00000354u; // 800D319C
  c->lr=0x800D31A4u; f_8018EA30(c); // 800D31A0
  c->r[11]=c->r[1]+0x00000020u; // 800D31A4
  c->lr=0x800D31ACu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D31A8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D31AC
  c->lr=c->r[0]; // 800D31B0
  c->r[1]=c->r[1]+0x00000020u; // 800D31B4
  return; // 800D31B8
}

// GetPlayerTrack__Q44nw4r3snd6detail9SeqPlayerFi
void f_800D31C0(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],15); // 800D31C0
  if (!crb(c,1)) { goto L_800D31D0; } // 800D31C4
  c->r[3]=0u+0x00000000u; // 800D31C8
  return; // 800D31CC
L_800D31D0:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800D31D0
  c->r[3]=c->r[3]+c->r[0]; // 800D31D4
  c->r[3]=R32(c->r[3]+0x00000100u); // 800D31D8
  return; // 800D31DC
}

// fn_800D31E0
void f_800D31E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D31E0
  c->r[0]=c->lr; // 800D31E4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D31E8
  c->r[11]=c->r[1]+0x00000030u; // 800D31EC
  c->lr=0x800D31F4u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D31F0
  c->r[22]=c->r[3]|c->r[3]; // 800D31F4
  c->r[23]=c->r[4]|c->r[4]; // 800D31F8
  c->lr=0x800D3200u; f_800DD3D0(c); // 800D31FC
  c->r[3]=c->r[3]+0x00000354u; // 800D3200
  c->lr=0x800D3208u; f_8018E950(c); // 800D3204
  c->r[25]=0u+0x00000000u; // 800D3208
  c->r[24]=0u+0x00000000u; // 800D320C
  c->r[30]=c->r[25]|c->r[25]; // 800D3210
  c->r[31]=0u+0x00000000u; // 800D3214
  c->r[28]=0u+0x80250000u; // 800D3218
  c->r[29]=0u+0x80250000u; // 800D321C
L_800D3220:;
  c->r[27]=c->r[22]+c->r[31]; // 800D3220
  c->r[26]=R32(c->r[27]+0x00000100u); // 800D3224
  cmps(c,0,(int32_t)c->r[26],0); // 800D3228
  if (crb(c,2)) { goto L_800D32F8; } // 800D322C
  c->r[3]=c->r[26]|c->r[26]; // 800D3230
  c->lr=0x800D3238u; f_800D4A60(c); // 800D3234
  c->r[3]=c->r[26]|c->r[26]; // 800D3238
  c->r[4]=c->r[23]|c->r[23]; // 800D323C
  c->lr=0x800D3244u; f_800D4B30(c); // 800D3240
  cmps(c,0,(int32_t)c->r[3],0); // 800D3244
  if (!crb(c,0)) { goto L_800D32E8; } // 800D3248
  c->lr=0x800D3250u; f_800DD3D0(c); // 800D324C
  c->r[3]=c->r[3]+0x00000354u; // 800D3250
  c->lr=0x800D3258u; f_8018E950(c); // 800D3254
  cmpu(c,0,c->r[24],0x0000000Fu); // 800D3258
  c->r[0]=0u+0x00000000u; // 800D325C
  if (crb(c,1)) { goto L_800D3268; } // 800D3260
  c->r[0]=0u+0x00000001u; // 800D3264
L_800D3268:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D3268
  if (!crb(c,2)) { goto L_800D3290; } // 800D326C
  c->r[6]=c->r[24]|c->r[24]; // 800D3270
  c->r[3]=c->r[28]+0x00006D40u; // 800D3274
  c->r[5]=c->r[29]+0x00006D54u; // 800D3278
  c->r[4]=0u+0x00000261u; // 800D327C
  c->r[7]=0u+0x00000000u; // 800D3280
  c->r[8]=0u+0x00000010u; // 800D3284
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D3288
  c->lr=0x800D3290u; f_800F1300(c); // 800D328C
L_800D3290:;
  cmps(c,0,(int32_t)c->r[24],15); // 800D3290
  if (!crb(c,1)) { goto L_800D32A0; } // 800D3294
  c->r[3]=0u+0x00000000u; // 800D3298
  goto L_800D32A4; // 800D329C
L_800D32A0:;
  c->r[3]=R32(c->r[27]+0x00000100u); // 800D32A0
L_800D32A4:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D32A4
  if (!crb(c,2)) { goto L_800D32BC; } // 800D32A8
  c->lr=0x800D32B0u; f_800DD3D0(c); // 800D32AC
  c->r[3]=c->r[3]+0x00000354u; // 800D32B0
  c->lr=0x800D32B8u; f_8018EA30(c); // 800D32B4
  goto L_800D32E8; // 800D32B8
L_800D32BC:;
  c->lr=0x800D32C0u; f_800D4990(c); // 800D32BC
  c->r[3]=R32(c->r[22]+0x000000F4u); // 800D32C0
  c->r[4]=R32(c->r[27]+0x00000100u); // 800D32C4
  c->r[12]=R32(c->r[3]+0x00000000u); // 800D32C8
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D32CC
  c->ctr=c->r[12]; // 800D32D0
  if (true) { c->lr=0x800D32D8u; dispatch(c,c->ctr); } // 800D32D4
  W32(c->r[27]+0x00000100u,c->r[30]); // 800D32D8
  c->lr=0x800D32E0u; f_800DD3D0(c); // 800D32DC
  c->r[3]=c->r[3]+0x00000354u; // 800D32E0
  c->lr=0x800D32E8u; f_8018EA30(c); // 800D32E4
L_800D32E8:;
  c->r[0]=R8(c->r[26]+0x00000005u); // 800D32E8
  cmps(c,0,(int32_t)c->r[0],0); // 800D32EC
  if (crb(c,2)) { goto L_800D32F8; } // 800D32F0
  c->r[25]=0u+0x00000001u; // 800D32F4
L_800D32F8:;
  c->r[24]=c->r[24]+0x00000001u; // 800D32F8
  c->r[31]=c->r[31]+0x00000004u; // 800D32FC
  cmps(c,0,(int32_t)c->r[24],16); // 800D3300
  if (crb(c,0)) { IRQCHK(c); goto L_800D3220; } // 800D3304
  cmps(c,0,(int32_t)c->r[25],0); // 800D3308
  if (!crb(c,2)) { goto L_800D3324; } // 800D330C
  c->lr=0x800D3314u; f_800DD3D0(c); // 800D3310
  c->r[3]=c->r[3]+0x00000354u; // 800D3314
  c->lr=0x800D331Cu; f_8018EA30(c); // 800D3318
  c->r[3]=0u+0x00000001u; // 800D331C
  goto L_800D3334; // 800D3320
L_800D3324:;
  c->lr=0x800D3328u; f_800DD3D0(c); // 800D3324
  c->r[3]=c->r[3]+0x00000354u; // 800D3328
  c->lr=0x800D3330u; f_8018EA30(c); // 800D332C
  c->r[3]=0u+0x00000000u; // 800D3330
L_800D3334:;
  c->r[11]=c->r[1]+0x00000030u; // 800D3334
  c->lr=0x800D333Cu; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D3338
  c->r[0]=R32(c->r[1]+0x00000034u); // 800D333C
  c->lr=c->r[0]; // 800D3340
  c->r[1]=c->r[1]+0x00000030u; // 800D3344
  return; // 800D3348
}

// fn_800D3350
void f_800D3350(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3350
  c->r[0]=c->lr; // 800D3354
  cmpu(c,0,c->r[4],0x00000020u); // 800D3358
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D335C
  c->r[0]=0u+0x00000000u; // 800D3360
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D3364
  c->r[31]=c->r[4]|c->r[4]; // 800D3368
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D336C
  c->r[30]=c->r[3]|c->r[3]; // 800D3370
  if (crb(c,1)) { goto L_800D337C; } // 800D3374
  c->r[0]=0u+0x00000001u; // 800D3378
L_800D337C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D337C
  if (!crb(c,2)) { goto L_800D33AC; } // 800D3380
  c->r[3]=0u+0x80250000u; // 800D3384
  c->r[5]=0u+0x80250000u; // 800D3388
  c->r[6]=c->r[31]|c->r[31]; // 800D338C
  c->r[4]=0u+0x000002EAu; // 800D3390
  c->r[3]=c->r[3]+0x00006D40u; // 800D3394
  c->r[5]=c->r[5]+0x00006F64u; // 800D3398
  c->r[7]=0u+0x00000000u; // 800D339C
  c->r[8]=0u+0x00000020u; // 800D33A0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D33A4
  c->lr=0x800D33ACu; f_800F1300(c); // 800D33A8
L_800D33AC:;
  cmps(c,0,(int32_t)c->r[31],16); // 800D33AC
  if (!crb(c,0)) { goto L_800D33C4; } // 800D33B0
  c->r[0]=rotl(c->r[31],1)&0xFFFFFFFEu; // 800D33B4
  c->r[3]=c->r[30]+c->r[0]; // 800D33B8
  c->r[3]=c->r[3]+0x00000140u; // 800D33BC
  goto L_800D33E4; // 800D33C0
L_800D33C4:;
  cmps(c,0,(int32_t)c->r[31],32); // 800D33C4
  c->r[3]=0u+0x00000000u; // 800D33C8
  if (!crb(c,0)) { goto L_800D33E4; } // 800D33CC
  c->r[0]=c->r[31]+0xFFFFFFF0u; // 800D33D0
  c->r[3]=0u+0x80290000u; // 800D33D4
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800D33D8
  c->r[3]=c->r[3]+0x000041A8u; // 800D33DC
  c->r[3]=c->r[3]+c->r[0]; // 800D33E0
L_800D33E4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D33E4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D33E8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D33EC
  c->lr=c->r[0]; // 800D33F0
  c->r[1]=c->r[1]+0x00000010u; // 800D33F4
  return; // 800D33F8
}

// fn_800D3400
void f_800D3400(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3400
  c->r[0]=c->lr; // 800D3404
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3408
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D340C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D3410
  c->r[30]=c->r[3]|c->r[3]; // 800D3414
  c->lr=0x800D341Cu; f_800DD3D0(c); // 800D3418
  c->r[3]=c->r[3]+0x00000354u; // 800D341C
  c->lr=0x800D3424u; f_8018E950(c); // 800D3420
  c->r[0]=R8(c->r[30]+0x000000CCu); // 800D3424
  cmps(c,0,(int32_t)c->r[0],0); // 800D3428
  if (!crb(c,2)) { goto L_800D344C; } // 800D342C
  c->r[3]=0u+0x80250000u; // 800D3430
  c->r[5]=0u+0x80250000u; // 800D3434
  c->r[3]=c->r[3]+0x00006D40u; // 800D3438
  c->r[4]=0u+0x00000304u; // 800D343C
  c->r[5]=c->r[5]+0x00006FA0u; // 800D3440
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D3444
  c->lr=0x800D344Cu; f_800F1300(c); // 800D3448
L_800D344C:;
  c->r[0]=R8(c->r[30]+0x000000CCu); // 800D344C
  cmps(c,0,(int32_t)c->r[0],0); // 800D3450
  if (!crb(c,2)) { goto L_800D3468; } // 800D3454
  c->lr=0x800D345Cu; f_800DD3D0(c); // 800D3458
  c->r[3]=c->r[3]+0x00000354u; // 800D345C
  c->lr=0x800D3464u; f_8018EA30(c); // 800D3460
  goto L_800D351C; // 800D3464
L_800D3468:;
  c->r[0]=R8(c->r[30]+0x000000CDu); // 800D3468
  cmps(c,0,(int32_t)c->r[0],0); // 800D346C
  if (!crb(c,2)) { goto L_800D3484; } // 800D3470
  c->lr=0x800D3478u; f_800DD3D0(c); // 800D3474
  c->r[3]=c->r[3]+0x00000354u; // 800D3478
  c->lr=0x800D3480u; f_8018EA30(c); // 800D347C
  goto L_800D351C; // 800D3480
L_800D3484:;
  c->r[0]=R32(c->r[30]+0x000000DCu); // 800D3484
  cmps(c,0,(int32_t)c->r[0],0); // 800D3488
  if (!crb(c,2)) { goto L_800D34A0; } // 800D348C
  {uint32_t ea=c->r[30]+0x000000E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D3490
  {uint32_t ea=c->r[2]+0xFFFF9B14u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D3494
  fcmp(c,0,c->f[1],c->f[0]); // 800D3498
  if (!crb(c,1)) { goto L_800D34AC; } // 800D349C
L_800D34A0:;
  c->r[3]=c->r[30]|c->r[30]; // 800D34A0
  c->lr=0x800D34A8u; f_800D37E0(c); // 800D34A4
  goto L_800D34C4; // 800D34A8
L_800D34AC:;
  c->r[0]=R8(c->r[30]+0x000000CEu); // 800D34AC
  cmps(c,0,(int32_t)c->r[0],0); // 800D34B0
  if (!crb(c,2)) { goto L_800D34C4; } // 800D34B4
  c->r[3]=c->r[30]|c->r[30]; // 800D34B8
  c->r[4]=0u+0x00000003u; // 800D34BC
  c->lr=0x800D34C4u; f_800D3540(c); // 800D34C0
L_800D34C4:;
  c->lr=0x800D34C8u; f_800DD3D0(c); // 800D34C4
  c->r[3]=c->r[3]+0x00000354u; // 800D34C8
  c->lr=0x800D34D0u; f_8018E950(c); // 800D34CC
  c->r[31]=0u+0x00000000u; // 800D34D0
L_800D34D4:;
  cmps(c,0,(int32_t)c->r[31],15); // 800D34D4
  if (!crb(c,1)) { goto L_800D34E4; } // 800D34D8
  c->r[3]=0u+0x00000000u; // 800D34DC
  goto L_800D34E8; // 800D34E0
L_800D34E4:;
  c->r[3]=R32(c->r[30]+0x00000100u); // 800D34E4
L_800D34E8:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D34E8
  if (crb(c,2)) { goto L_800D34F4; } // 800D34EC
  c->lr=0x800D34F4u; f_800D4E40(c); // 800D34F0
L_800D34F4:;
  c->r[31]=c->r[31]+0x00000001u; // 800D34F4
  c->r[30]=c->r[30]+0x00000004u; // 800D34F8
  cmps(c,0,(int32_t)c->r[31],16); // 800D34FC
  if (crb(c,0)) { IRQCHK(c); goto L_800D34D4; } // 800D3500
  c->lr=0x800D3508u; f_800DD3D0(c); // 800D3504
  c->r[3]=c->r[3]+0x00000354u; // 800D3508
  c->lr=0x800D3510u; f_8018EA30(c); // 800D350C
  c->lr=0x800D3514u; f_800DD3D0(c); // 800D3510
  c->r[3]=c->r[3]+0x00000354u; // 800D3514
  c->lr=0x800D351Cu; f_8018EA30(c); // 800D3518
L_800D351C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D351C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D3520
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D3524
  c->lr=c->r[0]; // 800D3528
  c->r[1]=c->r[1]+0x00000010u; // 800D352C
  return; // 800D3530
}

// fn_800D3540
void f_800D3540(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3540
  c->r[0]=c->lr; // 800D3544
  W32(c->r[1]+0x00000084u,c->r[0]); // 800D3548
  c->r[11]=c->r[1]+0x00000030u; // 800D354C
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[31]);} // 800D3550
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,31,ea,0,0);} // 800D3554
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[30]);} // 800D3558
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,30,ea,0,0);} // 800D355C
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[29]);} // 800D3560
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,29,ea,0,0);} // 800D3564
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[28]);} // 800D3568
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,28,ea,0,0);} // 800D356C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[27]);} // 800D3570
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,27,ea,0,0);} // 800D3574
  c->lr=0x800D357Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D3578
  c->r[5]=R8(c->r[3]+0x000000EAu); // 800D357C
  c->r[28]=0u+0x43300000u; // 800D3580
  c->r[0]=R16(c->r[3]+0x000000ECu); // 800D3584
  c->r[31]=c->r[3]|c->r[3]; // 800D3588
  W32(c->r[1]+0x00000008u,c->r[28]); // 800D358C
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[0]); // 800D3590
  {uint32_t ea=c->r[2]+0xFFFF9B18u; c->f[28]=RF64(ea);} // 800D3594
  {uint32_t ea=c->r[3]+0x000000D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D3598
  {uint32_t ea=c->r[2]+0xFFFF9B20u; c->f[29]=c->ps1[29]=RF32(ea);} // 800D359C
  {uint32_t ea=c->r[2]+0xFFFF9B14u; c->f[30]=c->ps1[30]=RF32(ea);} // 800D35A0
  c->r[0]=c->r[0]^0x80000000u; // 800D35A4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800D35A8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 800D35AC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[28]); // 800D35B0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 800D35B4
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[29]); // 800D35B8
  fcmp(c,0,c->f[30],c->f[1]); // 800D35BC
  if (crb(c,2)) { goto L_800D3794; } // 800D35C0
  {uint32_t ea=c->r[3]+0x000000D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D35C4
  c->r[0]=c->r[4]^0x80000000u; // 800D35C8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800D35CC
  c->f[2]=c->ps1[2]=S(c->f[0]/c->f[1]); // 800D35D0
  {uint32_t ea=c->r[2]+0xFFFF9B10u; c->f[31]=c->ps1[31]=RF32(ea);} // 800D35D4
  W32(c->r[1]+0x00000008u,c->r[28]); // 800D35D8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 800D35DC
  c->f[27]=c->ps1[27]=S(c->f[0]-c->f[28]); // 800D35E0
  goto L_800D3780; // 800D35E4
L_800D35E8:;
  c->f[27]=c->ps1[27]=S(c->f[27]-c->f[2]); // 800D35E8
  c->r[3]=c->r[31]|c->r[31]; // 800D35EC
  c->r[4]=0u+0x00000001u; // 800D35F0
  c->lr=0x800D35F8u; f_800D31E0(c); // 800D35F4
  cmps(c,0,(int32_t)c->r[3],0); // 800D35F8
  if (crb(c,2)) { goto L_800D373C; } // 800D35FC
  c->lr=0x800D3604u; f_800DD3D0(c); // 800D3600
  c->r[3]=c->r[3]+0x00000354u; // 800D3604
  c->lr=0x800D360Cu; f_8018E950(c); // 800D3608
  c->r[0]=R8(c->r[31]+0x000000CDu); // 800D360C
  cmps(c,0,(int32_t)c->r[0],0); // 800D3610
  if (crb(c,2)) { goto L_800D363C; } // 800D3614
  cmps(c,0,(int32_t)c->r[31],0); // 800D3618
  c->r[27]=c->r[31]|c->r[31]; // 800D361C
  if (crb(c,2)) { goto L_800D3628; } // 800D3620
  c->r[27]=c->r[31]+0x000000C0u; // 800D3624
L_800D3628:;
  c->lr=0x800D362Cu; f_800DD3D0(c); // 800D3628
  c->r[4]=c->r[27]|c->r[27]; // 800D362C
  c->lr=0x800D3634u; f_800DD990(c); // 800D3630
  c->r[0]=0u+0x00000000u; // 800D3634
  W8(c->r[31]+0x000000CDu,c->r[0]); // 800D3638
L_800D363C:;
  c->r[0]=R8(c->r[31]+0x000000CCu); // 800D363C
  cmps(c,0,(int32_t)c->r[0],0); // 800D3640
  if (crb(c,2)) { goto L_800D366C; } // 800D3644
  cmps(c,0,(int32_t)c->r[31],0); // 800D3648
  c->r[27]=c->r[31]|c->r[31]; // 800D364C
  if (crb(c,2)) { goto L_800D3658; } // 800D3650
  c->r[27]=c->r[31]+0x000000B4u; // 800D3654
L_800D3658:;
  c->lr=0x800D365Cu; f_800CD960(c); // 800D3658
  c->r[4]=c->r[27]|c->r[27]; // 800D365C
  c->lr=0x800D3664u; f_800CDAD0(c); // 800D3660
  c->r[0]=0u+0x00000000u; // 800D3664
  W8(c->r[31]+0x000000CCu,c->r[0]); // 800D3668
L_800D366C:;
  c->r[26]=c->r[31]|c->r[31]; // 800D366C
  c->r[27]=0u+0x00000000u; // 800D3670
  c->r[28]=0u+0x80250000u; // 800D3674
  c->r[29]=0u+0x80250000u; // 800D3678
  c->r[30]=0u+0x00000000u; // 800D367C
L_800D3680:;
  c->lr=0x800D3684u; f_800DD3D0(c); // 800D3680
  c->r[3]=c->r[3]+0x00000354u; // 800D3684
  c->lr=0x800D368Cu; f_8018E950(c); // 800D3688
  cmpu(c,0,c->r[27],0x0000000Fu); // 800D368C
  c->r[0]=0u+0x00000000u; // 800D3690
  if (crb(c,1)) { goto L_800D369C; } // 800D3694
  c->r[0]=0u+0x00000001u; // 800D3698
L_800D369C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D369C
  if (!crb(c,2)) { goto L_800D36C4; } // 800D36A0
  c->r[6]=c->r[27]|c->r[27]; // 800D36A4
  c->r[3]=c->r[28]+0x00006D40u; // 800D36A8
  c->r[5]=c->r[29]+0x00006D54u; // 800D36AC
  c->r[4]=0u+0x00000261u; // 800D36B0
  c->r[7]=0u+0x00000000u; // 800D36B4
  c->r[8]=0u+0x00000010u; // 800D36B8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D36BC
  c->lr=0x800D36C4u; f_800F1300(c); // 800D36C0
L_800D36C4:;
  cmps(c,0,(int32_t)c->r[27],15); // 800D36C4
  if (!crb(c,1)) { goto L_800D36D4; } // 800D36C8
  c->r[3]=0u+0x00000000u; // 800D36CC
  goto L_800D36D8; // 800D36D0
L_800D36D4:;
  c->r[3]=R32(c->r[26]+0x00000100u); // 800D36D4
L_800D36D8:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D36D8
  if (!crb(c,2)) { goto L_800D36F0; } // 800D36DC
  c->lr=0x800D36E4u; f_800DD3D0(c); // 800D36E0
  c->r[3]=c->r[3]+0x00000354u; // 800D36E4
  c->lr=0x800D36ECu; f_8018EA30(c); // 800D36E8
  goto L_800D371C; // 800D36EC
L_800D36F0:;
  c->lr=0x800D36F4u; f_800D4990(c); // 800D36F0
  c->r[3]=R32(c->r[31]+0x000000F4u); // 800D36F4
  c->r[4]=R32(c->r[26]+0x00000100u); // 800D36F8
  c->r[12]=R32(c->r[3]+0x00000000u); // 800D36FC
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D3700
  c->ctr=c->r[12]; // 800D3704
  if (true) { c->lr=0x800D370Cu; dispatch(c,c->ctr); } // 800D3708
  W32(c->r[26]+0x00000100u,c->r[30]); // 800D370C
  c->lr=0x800D3714u; f_800DD3D0(c); // 800D3710
  c->r[3]=c->r[3]+0x00000354u; // 800D3714
  c->lr=0x800D371Cu; f_8018EA30(c); // 800D3718
L_800D371C:;
  c->r[27]=c->r[27]+0x00000001u; // 800D371C
  c->r[26]=c->r[26]+0x00000004u; // 800D3720
  cmps(c,0,(int32_t)c->r[27],16); // 800D3724
  if (crb(c,0)) { IRQCHK(c); goto L_800D3680; } // 800D3728
  c->lr=0x800D3730u; f_800DD3D0(c); // 800D372C
  c->r[3]=c->r[3]+0x00000354u; // 800D3730
  c->lr=0x800D3738u; f_8018EA30(c); // 800D3734
  goto L_800D3794; // 800D3738
L_800D373C:;
  c->r[3]=R8(c->r[31]+0x000000EAu); // 800D373C
  c->r[0]=R16(c->r[31]+0x000000ECu); // 800D3740
  W32(c->r[1]+0x00000008u,c->r[28]); // 800D3744
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 800D3748
  c->r[4]=R32(c->r[31]+0x00000160u); // 800D374C
  {uint32_t ea=c->r[31]+0x000000D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D3750
  c->r[3]=c->r[4]+0x00000001u; // 800D3754
  W32(c->r[31]+0x00000160u,c->r[3]); // 800D3758
  c->r[0]=c->r[0]^0x80000000u; // 800D375C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800D3760
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 800D3764
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[28]); // 800D3768
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 800D376C
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[29]); // 800D3770
  fcmp(c,0,c->f[30],c->f[1]); // 800D3774
  if (crb(c,2)) { goto L_800D3794; } // 800D3778
  c->f[2]=c->ps1[2]=S(c->f[31]/c->f[1]); // 800D377C
L_800D3780:;
  fcmp(c,0,c->f[2],c->f[27]); // 800D3780
  if (crb(c,0)) { IRQCHK(c); goto L_800D35E8; } // 800D3784
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[27]); // 800D3788
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[1]); // 800D378C
  {uint32_t ea=c->r[31]+0x000000D8u; WF32(ea,c->f[0]);} // 800D3790
L_800D3794:;
  c->r[11]=c->r[1]+0x00000030u; // 800D3794
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,31,ea,0,0);} // 800D3798
  {uint32_t ea=c->r[1]+0x00000070u; c->f[31]=RF64(ea);} // 800D379C
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,30,ea,0,0);} // 800D37A0
  {uint32_t ea=c->r[1]+0x00000060u; c->f[30]=RF64(ea);} // 800D37A4
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,29,ea,0,0);} // 800D37A8
  {uint32_t ea=c->r[1]+0x00000050u; c->f[29]=RF64(ea);} // 800D37AC
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,28,ea,0,0);} // 800D37B0
  {uint32_t ea=c->r[1]+0x00000040u; c->f[28]=RF64(ea);} // 800D37B4
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,27,ea,0,0);} // 800D37B8
  {uint32_t ea=c->r[1]+0x00000030u; c->f[27]=RF64(ea);} // 800D37BC
  c->lr=0x800D37C4u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D37C0
  c->r[0]=R32(c->r[1]+0x00000084u); // 800D37C4
  c->lr=c->r[0]; // 800D37C8
  c->r[1]=c->r[1]+0x00000080u; // 800D37CC
  return; // 800D37D0
}

// fn_800D37E0
void f_800D37E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D37E0
  c->r[0]=c->lr; // 800D37E4
  W32(c->r[1]+0x00000084u,c->r[0]); // 800D37E8
  c->r[11]=c->r[1]+0x00000030u; // 800D37EC
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[31]);} // 800D37F0
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,31,ea,0,0);} // 800D37F4
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[30]);} // 800D37F8
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,30,ea,0,0);} // 800D37FC
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[29]);} // 800D3800
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,29,ea,0,0);} // 800D3804
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[28]);} // 800D3808
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,28,ea,0,0);} // 800D380C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[27]);} // 800D3810
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,27,ea,0,0);} // 800D3814
  c->lr=0x800D381Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D3818
  c->r[31]=0u+0x80250000u; // 800D381C
  c->r[30]=c->r[3]|c->r[3]; // 800D3820
  c->r[31]=c->r[31]+0x00006D40u; // 800D3824
  c->r[27]=0u+0x00000000u; // 800D3828
  c->r[29]=0u+0x00000000u; // 800D382C
L_800D3830:;
  c->r[3]=c->r[30]+c->r[29]; // 800D3830
  c->r[28]=R32(c->r[3]+0x00000100u); // 800D3834
  cmps(c,0,(int32_t)c->r[28],0); // 800D3838
  if (crb(c,2)) { goto L_800D3854; } // 800D383C
  c->r[3]=c->r[28]|c->r[28]; // 800D3840
  c->r[4]=0u+0x0000007Fu; // 800D3844
  c->lr=0x800D384Cu; f_800D4CC0(c); // 800D3848
  c->r[3]=c->r[28]|c->r[28]; // 800D384C
  c->lr=0x800D3854u; f_800D5410(c); // 800D3850
L_800D3854:;
  c->r[27]=c->r[27]+0x00000001u; // 800D3854
  c->r[29]=c->r[29]+0x00000004u; // 800D3858
  cmps(c,0,(int32_t)c->r[27],16); // 800D385C
  if (crb(c,0)) { IRQCHK(c); goto L_800D3830; } // 800D3860
  {uint32_t ea=c->r[2]+0xFFFF9B18u; c->f[29]=RF64(ea);} // 800D3864
  c->r[27]=0u+0x00000000u; // 800D3868
  {uint32_t ea=c->r[2]+0xFFFF9B20u; c->f[30]=c->ps1[30]=RF32(ea);} // 800D386C
  c->r[29]=0u+0x43300000u; // 800D3870
  {uint32_t ea=c->r[2]+0xFFFF9B10u; c->f[31]=c->ps1[31]=RF32(ea);} // 800D3874
  {uint32_t ea=c->r[2]+0xFFFF9B14u; c->f[28]=c->ps1[28]=RF32(ea);} // 800D3878
  goto L_800D3A50; // 800D387C
L_800D3880:;
  cmps(c,0,(int32_t)c->r[27],768); // 800D3880
  if (!crb(c,0)) { goto L_800D3AA4; } // 800D3884
  cmps(c,0,(int32_t)c->r[4],0); // 800D3888
  if (crb(c,2)) { goto L_800D38A0; } // 800D388C
  c->r[3]=R32(c->r[30]+0x000000DCu); // 800D3890
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800D3894
  W32(c->r[30]+0x000000DCu,c->r[0]); // 800D3898
  goto L_800D38F8; // 800D389C
L_800D38A0:;
  c->r[3]=R8(c->r[30]+0x000000EAu); // 800D38A0
  c->r[0]=R16(c->r[30]+0x000000ECu); // 800D38A4
  W32(c->r[1]+0x00000008u,c->r[29]); // 800D38A8
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 800D38AC
  {uint32_t ea=c->r[30]+0x000000D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D38B0
  c->r[0]=c->r[0]^0x80000000u; // 800D38B4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800D38B8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 800D38BC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[29]); // 800D38C0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 800D38C4
  c->f[27]=c->ps1[27]=S(c->f[0]/c->f[30]); // 800D38C8
  fcmp(c,0,c->f[27],c->f[28]); // 800D38CC
  if (crb(c,1)) { goto L_800D38E8; } // 800D38D0
  c->r[3]=c->r[31]+0x00000000u; // 800D38D4
  c->r[5]=c->r[31]+0x00000284u; // 800D38D8
  c->r[4]=0u+0x00000358u; // 800D38DC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D38E0
  c->lr=0x800D38E8u; f_800F1300(c); // 800D38E4
L_800D38E8:;
  c->f[1]=c->ps1[1]=S(c->f[31]/c->f[27]); // 800D38E8
  {uint32_t ea=c->r[30]+0x000000E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D38EC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800D38F0
  {uint32_t ea=c->r[30]+0x000000E0u; WF32(ea,c->f[0]);} // 800D38F4
L_800D38F8:;
  c->r[3]=c->r[30]|c->r[30]; // 800D38F8
  c->r[4]=0u+0x00000000u; // 800D38FC
  c->lr=0x800D3904u; f_800D31E0(c); // 800D3900
  cmps(c,0,(int32_t)c->r[3],0); // 800D3904
  if (crb(c,2)) { goto L_800D3A40; } // 800D3908
  c->lr=0x800D3910u; f_800DD3D0(c); // 800D390C
  c->r[3]=c->r[3]+0x00000354u; // 800D3910
  c->lr=0x800D3918u; f_8018E950(c); // 800D3914
  c->r[0]=R8(c->r[30]+0x000000CDu); // 800D3918
  cmps(c,0,(int32_t)c->r[0],0); // 800D391C
  if (crb(c,2)) { goto L_800D3948; } // 800D3920
  cmps(c,0,(int32_t)c->r[30],0); // 800D3924
  c->r[28]=c->r[30]|c->r[30]; // 800D3928
  if (crb(c,2)) { goto L_800D3934; } // 800D392C
  c->r[28]=c->r[30]+0x000000C0u; // 800D3930
L_800D3934:;
  c->lr=0x800D3938u; f_800DD3D0(c); // 800D3934
  c->r[4]=c->r[28]|c->r[28]; // 800D3938
  c->lr=0x800D3940u; f_800DD990(c); // 800D393C
  c->r[0]=0u+0x00000000u; // 800D3940
  W8(c->r[30]+0x000000CDu,c->r[0]); // 800D3944
L_800D3948:;
  c->r[0]=R8(c->r[30]+0x000000CCu); // 800D3948
  cmps(c,0,(int32_t)c->r[0],0); // 800D394C
  if (crb(c,2)) { goto L_800D3978; } // 800D3950
  cmps(c,0,(int32_t)c->r[30],0); // 800D3954
  c->r[28]=c->r[30]|c->r[30]; // 800D3958
  if (crb(c,2)) { goto L_800D3964; } // 800D395C
  c->r[28]=c->r[30]+0x000000B4u; // 800D3960
L_800D3964:;
  c->lr=0x800D3968u; f_800CD960(c); // 800D3964
  c->r[4]=c->r[28]|c->r[28]; // 800D3968
  c->lr=0x800D3970u; f_800CDAD0(c); // 800D396C
  c->r[0]=0u+0x00000000u; // 800D3970
  W8(c->r[30]+0x000000CCu,c->r[0]); // 800D3974
L_800D3978:;
  c->r[27]=c->r[30]|c->r[30]; // 800D3978
  c->r[28]=0u+0x00000000u; // 800D397C
  c->r[29]=0u+0x00000000u; // 800D3980
L_800D3984:;
  c->lr=0x800D3988u; f_800DD3D0(c); // 800D3984
  c->r[3]=c->r[3]+0x00000354u; // 800D3988
  c->lr=0x800D3990u; f_8018E950(c); // 800D398C
  cmpu(c,0,c->r[28],0x0000000Fu); // 800D3990
  c->r[0]=0u+0x00000000u; // 800D3994
  if (crb(c,1)) { goto L_800D39A0; } // 800D3998
  c->r[0]=0u+0x00000001u; // 800D399C
L_800D39A0:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D39A0
  if (!crb(c,2)) { goto L_800D39C8; } // 800D39A4
  c->r[6]=c->r[28]|c->r[28]; // 800D39A8
  c->r[3]=c->r[31]+0x00000000u; // 800D39AC
  c->r[5]=c->r[31]+0x00000014u; // 800D39B0
  c->r[4]=0u+0x00000261u; // 800D39B4
  c->r[7]=0u+0x00000000u; // 800D39B8
  c->r[8]=0u+0x00000010u; // 800D39BC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D39C0
  c->lr=0x800D39C8u; f_800F1300(c); // 800D39C4
L_800D39C8:;
  cmps(c,0,(int32_t)c->r[28],15); // 800D39C8
  if (!crb(c,1)) { goto L_800D39D8; } // 800D39CC
  c->r[3]=0u+0x00000000u; // 800D39D0
  goto L_800D39DC; // 800D39D4
L_800D39D8:;
  c->r[3]=R32(c->r[27]+0x00000100u); // 800D39D8
L_800D39DC:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D39DC
  if (!crb(c,2)) { goto L_800D39F4; } // 800D39E0
  c->lr=0x800D39E8u; f_800DD3D0(c); // 800D39E4
  c->r[3]=c->r[3]+0x00000354u; // 800D39E8
  c->lr=0x800D39F0u; f_8018EA30(c); // 800D39EC
  goto L_800D3A20; // 800D39F0
L_800D39F4:;
  c->lr=0x800D39F8u; f_800D4990(c); // 800D39F4
  c->r[3]=R32(c->r[30]+0x000000F4u); // 800D39F8
  c->r[4]=R32(c->r[27]+0x00000100u); // 800D39FC
  c->r[12]=R32(c->r[3]+0x00000000u); // 800D3A00
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D3A04
  c->ctr=c->r[12]; // 800D3A08
  if (true) { c->lr=0x800D3A10u; dispatch(c,c->ctr); } // 800D3A0C
  W32(c->r[27]+0x00000100u,c->r[29]); // 800D3A10
  c->lr=0x800D3A18u; f_800DD3D0(c); // 800D3A14
  c->r[3]=c->r[3]+0x00000354u; // 800D3A18
  c->lr=0x800D3A20u; f_8018EA30(c); // 800D3A1C
L_800D3A20:;
  c->r[28]=c->r[28]+0x00000001u; // 800D3A20
  c->r[27]=c->r[27]+0x00000004u; // 800D3A24
  cmps(c,0,(int32_t)c->r[28],16); // 800D3A28
  if (crb(c,0)) { IRQCHK(c); goto L_800D3984; } // 800D3A2C
  c->lr=0x800D3A34u; f_800DD3D0(c); // 800D3A30
  c->r[3]=c->r[3]+0x00000354u; // 800D3A34
  c->lr=0x800D3A3Cu; f_8018EA30(c); // 800D3A38
  goto L_800D3AA4; // 800D3A3C
L_800D3A40:;
  c->r[3]=R32(c->r[30]+0x00000160u); // 800D3A40
  c->r[27]=c->r[27]+0x00000001u; // 800D3A44
  c->r[0]=c->r[3]+0x00000001u; // 800D3A48
  W32(c->r[30]+0x00000160u,c->r[0]); // 800D3A4C
L_800D3A50:;
  c->r[4]=R32(c->r[30]+0x000000DCu); // 800D3A50
  cmps(c,0,(int32_t)c->r[4],0); // 800D3A54
  if (!crb(c,2)) { IRQCHK(c); goto L_800D3880; } // 800D3A58
  c->r[3]=R8(c->r[30]+0x000000EAu); // 800D3A5C
  c->r[0]=R16(c->r[30]+0x000000ECu); // 800D3A60
  W32(c->r[1]+0x00000008u,c->r[29]); // 800D3A64
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 800D3A68
  {uint32_t ea=c->r[30]+0x000000D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D3A6C
  {uint32_t ea=c->r[30]+0x000000E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D3A70
  c->r[0]=c->r[0]^0x80000000u; // 800D3A74
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800D3A78
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 800D3A7C
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[29]); // 800D3A80
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 800D3A84
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[30]); // 800D3A88
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 800D3A8C
  fcmp(c,0,c->f[0],c->f[31]); // 800D3A90
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800D3A94
  if (crb(c,2)) { IRQCHK(c); goto L_800D3880; } // 800D3A98
  {uint32_t ea=c->r[2]+0xFFFF9B14u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D3A9C
  {uint32_t ea=c->r[30]+0x000000E0u; WF32(ea,c->f[0]);} // 800D3AA0
L_800D3AA4:;
  c->r[11]=c->r[1]+0x00000030u; // 800D3AA4
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,31,ea,0,0);} // 800D3AA8
  {uint32_t ea=c->r[1]+0x00000070u; c->f[31]=RF64(ea);} // 800D3AAC
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,30,ea,0,0);} // 800D3AB0
  {uint32_t ea=c->r[1]+0x00000060u; c->f[30]=RF64(ea);} // 800D3AB4
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,29,ea,0,0);} // 800D3AB8
  {uint32_t ea=c->r[1]+0x00000050u; c->f[29]=RF64(ea);} // 800D3ABC
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,28,ea,0,0);} // 800D3AC0
  {uint32_t ea=c->r[1]+0x00000040u; c->f[28]=RF64(ea);} // 800D3AC4
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,27,ea,0,0);} // 800D3AC8
  {uint32_t ea=c->r[1]+0x00000030u; c->f[27]=RF64(ea);} // 800D3ACC
  c->lr=0x800D3AD4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D3AD0
  c->r[0]=R32(c->r[1]+0x00000084u); // 800D3AD4
  c->lr=c->r[0]; // 800D3AD8
  c->r[1]=c->r[1]+0x00000080u; // 800D3ADC
  return; // 800D3AE0
}

// NoteOn__Q44nw4r3snd6detail9SeqPlayerFiRCQ44nw4r3snd6detail10NoteOnInfo
void f_800D3AF0(Ctx* __restrict c) {
  c->r[7]=c->r[3]|c->r[3]; // 800D3AF0
  c->r[3]=R32(c->r[3]+0x000000F0u); // 800D3AF4
  c->r[0]=c->r[4]|c->r[4]; // 800D3AF8
  c->r[6]=c->r[5]|c->r[5]; // 800D3AFC
  c->r[12]=R32(c->r[3]+0x00000000u); // 800D3B00
  c->r[4]=c->r[7]|c->r[7]; // 800D3B04
  c->r[5]=c->r[0]|c->r[0]; // 800D3B08
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D3B0C
  c->ctr=c->r[12]; // 800D3B10
  if (true) { dispatch(c,c->ctr); return; } // 800D3B14
}

// fn_800D3B20
void f_800D3B20(Ctx* __restrict c) {
  return; // 800D3B20
}

// fn_800D3B30
void f_800D3B30(Ctx* __restrict c) {
  return; // 800D3B30
}

// fn_800D3B40
void f_800D3B40(Ctx* __restrict c) {
  return; // 800D3B40
}

// fn_800D3B50
void f_800D3B50(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFF4Cu; // 800D3B50
  f_800D24B0(c); return; // 800D3B54
}

// fn_800D3B60
void f_800D3B60(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFF40u; // 800D3B60
  f_800D24B0(c); return; // 800D3B64
}

// fn_800D3B70
void f_800D3B70(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3B70
  c->r[0]=c->lr; // 800D3B74
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3B78
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D3B7C
  c->r[31]=c->r[4]|c->r[4]; // 800D3B80
  c->r[4]=c->r[5]|c->r[5]; // 800D3B84
  c->r[5]=c->r[6]|c->r[6]; // 800D3B88
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D3B8C
  c->r[30]=c->r[3]|c->r[3]; // 800D3B90
  c->lr=0x800D3B98u; f_800CA780(c); // 800D3B94
  c->r[4]=0u+0x80250000u; // 800D3B98
  c->r[3]=c->r[30]+0x00000110u; // 800D3B9C
  c->r[4]=c->r[4]+0x00007298u; // 800D3BA0
  W32(c->r[30]+0x00000000u,c->r[4]); // 800D3BA4
  c->lr=0x800D3BACu; f_800D22E0(c); // 800D3BA8
  c->r[4]=0u+0x80250000u; // 800D3BAC
  c->r[0]=0u+0x00000000u; // 800D3BB0
  W8(c->r[30]+0x00000288u,c->r[0]); // 800D3BB4
  c->r[4]=c->r[4]+0x000072D0u; // 800D3BB8
  c->r[3]=c->r[30]|c->r[30]; // 800D3BBC
  W8(c->r[30]+0x00000289u,c->r[0]); // 800D3BC0
  W32(c->r[30]+0x00000274u,c->r[0]); // 800D3BC4
  W32(c->r[30]+0x00000278u,c->r[31]); // 800D3BC8
  W32(c->r[30]+0x00000284u,c->r[0]); // 800D3BCC
  W32(c->r[30]+0x0000028Cu,c->r[0]); // 800D3BD0
  W32(c->r[30]+0x00000494u,c->r[0]); // 800D3BD4
  W32(c->r[30]+0x00000498u,c->r[0]); // 800D3BD8
  W8(c->r[30]+0x0000049Cu,c->r[0]); // 800D3BDC
  W32(c->r[30]+0x00000490u,c->r[4]); // 800D3BE0
  W32(c->r[30]+0x000004A0u,c->r[0]); // 800D3BE4
  W32(c->r[30]+0x000004A4u,c->r[0]); // 800D3BE8
  W32(c->r[30]+0x000004ACu,c->r[0]); // 800D3BEC
  W32(c->r[30]+0x000004B0u,c->r[0]); // 800D3BF0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D3BF4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D3BF8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D3BFC
  c->lr=c->r[0]; // 800D3C00
  c->r[1]=c->r[1]+0x00000010u; // 800D3C04
  return; // 800D3C08
}

// fn_800D3C10
void f_800D3C10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3C10
  c->r[0]=c->lr; // 800D3C14
  cmps(c,0,(int32_t)c->r[3],0); // 800D3C18
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3C1C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D3C20
  c->r[31]=c->r[4]|c->r[4]; // 800D3C24
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D3C28
  c->r[30]=c->r[3]|c->r[3]; // 800D3C2C
  if (crb(c,2)) { goto L_800D3C4C; } // 800D3C30
  c->r[4]=0u+0x00000000u; // 800D3C34
  c->lr=0x800D3C3Cu; f_800E25A0(c); // 800D3C38
  cmps(c,0,(int32_t)c->r[31],0); // 800D3C3C
  if (!crb(c,1)) { goto L_800D3C4C; } // 800D3C40
  c->r[3]=c->r[30]|c->r[30]; // 800D3C44
  c->lr=0x800D3C4Cu; f_8015D040(c); // 800D3C48
L_800D3C4C:;
  c->r[3]=c->r[30]|c->r[30]; // 800D3C4C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D3C50
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D3C54
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D3C58
  c->lr=c->r[0]; // 800D3C5C
  c->r[1]=c->r[1]+0x00000010u; // 800D3C60
  return; // 800D3C64
}

// fn_800D3C70
void f_800D3C70(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3C70
  c->r[0]=c->lr; // 800D3C74
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3C78
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D3C7C
  c->r[31]=c->r[3]|c->r[3]; // 800D3C80
  c->lr=0x800D3C88u; f_800CA8F0(c); // 800D3C84
  c->r[0]=0u+0x00000000u; // 800D3C88
  W32(c->r[31]+0x00000284u,c->r[0]); // 800D3C8C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D3C90
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D3C94
  c->lr=c->r[0]; // 800D3C98
  c->r[1]=c->r[1]+0x00000010u; // 800D3C9C
  return; // 800D3CA0
}

// fn_800D3CB0
void f_800D3CB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3CB0
  c->r[0]=c->lr; // 800D3CB4
  cmps(c,0,(int32_t)c->r[6],0); // 800D3CB8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D3CBC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D3CC0
  c->r[31]=c->r[6]|c->r[6]; // 800D3CC4
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D3CC8
  c->r[30]=c->r[5]|c->r[5]; // 800D3CCC
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D3CD0
  c->r[29]=c->r[4]|c->r[4]; // 800D3CD4
  W32(c->r[1]+0x00000010u,c->r[28]); // 800D3CD8
  c->r[28]=c->r[3]|c->r[3]; // 800D3CDC
  if (!crb(c,2)) { goto L_800D3D00; } // 800D3CE0
  c->r[3]=0u+0x80250000u; // 800D3CE4
  c->r[5]=0u+0x80250000u; // 800D3CE8
  c->r[3]=c->r[3]+0x00007088u; // 800D3CEC
  c->r[4]=0u+0x0000005Fu; // 800D3CF0
  c->r[5]=c->r[5]+0x0000709Cu; // 800D3CF4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D3CF8
  c->lr=0x800D3D00u; f_800F1300(c); // 800D3CFC
L_800D3D00:;
  c->r[12]=R32(c->r[28]+0x00000000u); // 800D3D00
  c->r[3]=c->r[28]|c->r[28]; // 800D3D04
  c->r[12]=R32(c->r[12]+0x00000020u); // 800D3D08
  c->ctr=c->r[12]; // 800D3D0C
  if (true) { c->lr=0x800D3D14u; dispatch(c,c->ctr); } // 800D3D10
  c->r[3]=c->r[28]|c->r[28]; // 800D3D14
  c->lr=0x800D3D1Cu; f_800CBE30(c); // 800D3D18
  c->r[6]=c->r[3]|c->r[3]; // 800D3D1C
  c->r[4]=c->r[29]|c->r[29]; // 800D3D20
  c->r[5]=c->r[30]|c->r[30]; // 800D3D24
  c->r[7]=c->r[31]|c->r[31]; // 800D3D28
  c->r[3]=c->r[28]+0x00000110u; // 800D3D2C
  c->lr=0x800D3D34u; f_800D27A0(c); // 800D3D30
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D3D34
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D3D38
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D3D3C
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D3D40
  c->r[28]=R32(c->r[1]+0x00000010u); // 800D3D44
  c->lr=c->r[0]; // 800D3D48
  c->r[1]=c->r[1]+0x00000020u; // 800D3D4C
  return; // 800D3D50
}

// fn_800D3D60
void f_800D3D60(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3D60
  c->r[0]=c->lr; // 800D3D64
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D3D68
  c->r[11]=c->r[1]+0x00000020u; // 800D3D6C
  c->lr=0x800D3D74u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D3D70
  cmps(c,0,(int32_t)c->r[4],0); // 800D3D74
  c->r[27]=c->r[3]|c->r[3]; // 800D3D78
  c->r[28]=c->r[4]|c->r[4]; // 800D3D7C
  c->r[29]=c->r[5]|c->r[5]; // 800D3D80
  c->r[30]=c->r[6]|c->r[6]; // 800D3D84
  c->r[31]=c->r[7]|c->r[7]; // 800D3D88
  if (!crb(c,2)) { goto L_800D3DAC; } // 800D3D8C
  c->r[3]=0u+0x80250000u; // 800D3D90
  c->r[5]=0u+0x80250000u; // 800D3D94
  c->r[3]=c->r[3]+0x00007088u; // 800D3D98
  c->r[4]=0u+0x0000007Cu; // 800D3D9C
  c->r[5]=c->r[5]+0x000070C8u; // 800D3DA0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D3DA4
  c->lr=0x800D3DACu; f_800F1300(c); // 800D3DA8
L_800D3DAC:;
  c->r[4]=c->r[28]|c->r[28]; // 800D3DAC
  c->r[5]=c->r[29]|c->r[29]; // 800D3DB0
  c->r[3]=c->r[27]+0x00000110u; // 800D3DB4
  c->lr=0x800D3DBCu; f_800D2A90(c); // 800D3DB8
  cmps(c,0,(int32_t)c->r[31],0); // 800D3DBC
  if (!crb(c,1)) { goto L_800D3DD4; } // 800D3DC0
  c->r[4]=c->r[30]|c->r[30]; // 800D3DC4
  c->r[5]=c->r[31]|c->r[31]; // 800D3DC8
  c->r[3]=c->r[27]+0x00000110u; // 800D3DCC
  c->lr=0x800D3DD4u; f_800D2DB0(c); // 800D3DD0
L_800D3DD4:;
  c->r[0]=0u+0x00000001u; // 800D3DD4
  W8(c->r[27]+0x00000289u,c->r[0]); // 800D3DD8
  c->r[11]=c->r[1]+0x00000020u; // 800D3DDC
  c->lr=0x800D3DE4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D3DE0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D3DE4
  c->lr=c->r[0]; // 800D3DE8
  c->r[1]=c->r[1]+0x00000020u; // 800D3DEC
  return; // 800D3DF0
}

// fn_800D3E00
void f_800D3E00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3E00
  c->r[0]=c->lr; // 800D3E04
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D3E08
  c->r[0]=0u+0x00000001u; // 800D3E0C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D3E10
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D3E14
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D3E18
  c->r[29]=c->r[3]|c->r[3]; // 800D3E1C
  c->r[30]=R32(c->r[3]+0x00000004u); // 800D3E20
  W32(c->r[3]+0x0000028Cu,c->r[4]); // 800D3E24
  cmps(c,0,(int32_t)c->r[30],0); // 800D3E28
  W32(c->r[3]+0x0000027Cu,c->r[5]); // 800D3E2C
  W32(c->r[3]+0x00000280u,c->r[6]); // 800D3E30
  W32(c->r[3]+0x00000284u,c->r[7]); // 800D3E34
  W8(c->r[3]+0x00000288u,c->r[0]); // 800D3E38
  if (!crb(c,2)) { goto L_800D3E48; } // 800D3E3C
  c->r[0]=0u+0x00000000u; // 800D3E40
  goto L_800D3EBC; // 800D3E44
L_800D3E48:;
  c->r[12]=R32(c->r[4]+0x00000000u); // 800D3E48
  c->r[3]=c->r[4]|c->r[4]; // 800D3E4C
  c->r[12]=R32(c->r[12]+0x00000040u); // 800D3E50
  c->ctr=c->r[12]; // 800D3E54
  if (true) { c->lr=0x800D3E5Cu; dispatch(c,c->ctr); } // 800D3E58
  c->r[12]=R32(c->r[30]+0x00000000u); // 800D3E5C
  c->r[31]=c->r[3]|c->r[3]; // 800D3E60
  c->r[3]=c->r[30]|c->r[30]; // 800D3E64
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D3E68
  c->r[4]=c->r[31]|c->r[31]; // 800D3E6C
  c->ctr=c->r[12]; // 800D3E70
  if (true) { c->lr=0x800D3E78u; dispatch(c,c->ctr); } // 800D3E74
  cmps(c,0,(int32_t)c->r[3],0); // 800D3E78
  if (!crb(c,2)) { goto L_800D3E88; } // 800D3E7C
  c->r[0]=0u+0x00000000u; // 800D3E80
  goto L_800D3EBC; // 800D3E84
L_800D3E88:;
  c->r[0]=R32(c->r[29]+0x0000028Cu); // 800D3E88
  c->r[4]=0u+0x800D0000u; // 800D3E8C
  c->r[4]=c->r[4]+0x00003F00u; // 800D3E90
  W32(c->r[29]+0x000004A0u,c->r[0]); // 800D3E94
  W32(c->r[29]+0x000004A4u,c->r[3]); // 800D3E98
  W32(c->r[29]+0x000004A8u,c->r[31]); // 800D3E9C
  W32(c->r[29]+0x000004ACu,c->r[4]); // 800D3EA0
  W32(c->r[29]+0x000004B0u,c->r[29]); // 800D3EA4
  c->lr=0x800D3EACu; f_800E2630(c); // 800D3EA8
  c->r[4]=c->r[29]+0x00000490u; // 800D3EAC
  c->r[5]=0u+0x00000001u; // 800D3EB0
  c->lr=0x800D3EB8u; f_800E27C0(c); // 800D3EB4
  c->r[0]=0u+0x00000001u; // 800D3EB8
L_800D3EBC:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D3EBC
  if (!crb(c,2)) { goto L_800D3ED8; } // 800D3EC0
  c->r[12]=R32(c->r[29]+0x00000000u); // 800D3EC4
  c->r[3]=c->r[29]|c->r[29]; // 800D3EC8
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D3ECC
  c->ctr=c->r[12]; // 800D3ED0
  if (true) { c->lr=0x800D3ED8u; dispatch(c,c->ctr); } // 800D3ED4
L_800D3ED8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D3ED8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D3EDC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D3EE0
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D3EE4
  c->lr=c->r[0]; // 800D3EE8
  c->r[1]=c->r[1]+0x00000020u; // 800D3EEC
  return; // 800D3EF0
}

// fn_800D3F00
void f_800D3F00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3F00
  c->r[0]=c->lr; // 800D3F04
  cmps(c,0,(int32_t)c->r[5],0); // 800D3F08
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D3F0C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D3F10
  c->r[31]=0u+0x80250000u; // 800D3F14
  c->r[31]=c->r[31]+0x00007088u; // 800D3F18
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D3F1C
  c->r[30]=c->r[5]|c->r[5]; // 800D3F20
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D3F24
  c->r[29]=c->r[4]|c->r[4]; // 800D3F28
  W32(c->r[1]+0x00000010u,c->r[28]); // 800D3F2C
  c->r[28]=c->r[3]|c->r[3]; // 800D3F30
  if (!crb(c,2)) { goto L_800D3F4C; } // 800D3F34
  c->r[3]=c->r[31]+0x00000000u; // 800D3F38
  c->r[5]=c->r[31]+0x00000068u; // 800D3F3C
  c->r[4]=0u+0x000000B2u; // 800D3F40
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D3F44
  c->lr=0x800D3F4Cu; f_800F1300(c); // 800D3F48
L_800D3F4C:;
  cmps(c,0,(int32_t)c->r[28],0); // 800D3F4C
  c->r[0]=0u+0x00000000u; // 800D3F50
  W8(c->r[30]+0x00000288u,c->r[0]); // 800D3F54
  if (!crb(c,2)) { goto L_800D3F6C; } // 800D3F58
  c->r[3]=c->r[30]|c->r[30]; // 800D3F5C
  c->r[4]=0u+0x00000000u; // 800D3F60
  c->lr=0x800D3F68u; f_800CAA70(c); // 800D3F64
  goto L_800D3FB8; // 800D3F68
L_800D3F6C:;
  cmps(c,0,(int32_t)c->r[29],0); // 800D3F6C
  if (!crb(c,2)) { goto L_800D3F88; } // 800D3F70
  c->r[3]=c->r[31]+0x00000000u; // 800D3F74
  c->r[5]=c->r[31]+0x00000040u; // 800D3F78
  c->r[4]=0u+0x000000BDu; // 800D3F7C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D3F80
  c->lr=0x800D3F88u; f_800F1300(c); // 800D3F84
L_800D3F88:;
  c->r[5]=R32(c->r[30]+0x0000027Cu); // 800D3F88
  c->r[4]=c->r[29]|c->r[29]; // 800D3F8C
  c->r[3]=c->r[30]+0x00000110u; // 800D3F90
  c->lr=0x800D3F98u; f_800D2A90(c); // 800D3F94
  c->r[5]=R32(c->r[30]+0x00000284u); // 800D3F98
  cmps(c,0,(int32_t)c->r[5],0); // 800D3F9C
  if (!crb(c,1)) { goto L_800D3FB0; } // 800D3FA0
  c->r[4]=R32(c->r[30]+0x00000280u); // 800D3FA4
  c->r[3]=c->r[30]+0x00000110u; // 800D3FA8
  c->lr=0x800D3FB0u; f_800D2DB0(c); // 800D3FAC
L_800D3FB0:;
  c->r[0]=0u+0x00000001u; // 800D3FB0
  W8(c->r[30]+0x00000289u,c->r[0]); // 800D3FB4
L_800D3FB8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D3FB8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D3FBC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D3FC0
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D3FC4
  c->r[28]=R32(c->r[1]+0x00000010u); // 800D3FC8
  c->lr=c->r[0]; // 800D3FCC
  c->r[1]=c->r[1]+0x00000020u; // 800D3FD0
  return; // 800D3FD4
}

// fn_800D3FE0
void f_800D3FE0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3FE0
  c->r[0]=c->lr; // 800D3FE4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D3FE8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D3FEC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D3FF0
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D3FF4
  c->r[29]=c->r[3]|c->r[3]; // 800D3FF8
  c->r[0]=R8(c->r[3]+0x00000288u); // 800D3FFC
  cmps(c,0,(int32_t)c->r[0],0); // 800D4000
  if (crb(c,2)) { goto L_800D4014; } // 800D4004
  c->lr=0x800D400Cu; f_800E2630(c); // 800D4008
  c->r[4]=c->r[29]+0x00000490u; // 800D400C
  c->lr=0x800D4014u; f_800E2E20(c); // 800D4010
L_800D4014:;
  c->r[3]=R32(c->r[29]+0x0000028Cu); // 800D4014
  cmps(c,0,(int32_t)c->r[3],0); // 800D4018
  if (crb(c,2)) { goto L_800D4038; } // 800D401C
  c->r[12]=R32(c->r[3]+0x00000000u); // 800D4020
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D4024
  c->ctr=c->r[12]; // 800D4028
  if (true) { c->lr=0x800D4030u; dispatch(c,c->ctr); } // 800D402C
  c->r[0]=0u+0x00000000u; // 800D4030
  W32(c->r[29]+0x0000028Cu,c->r[0]); // 800D4034
L_800D4038:;
  c->r[3]=c->r[29]|c->r[29]; // 800D4038
  c->lr=0x800D4040u; f_800CB8D0(c); // 800D403C
  cmps(c,0,(int32_t)c->r[29],0); // 800D4040
  c->r[30]=R32(c->r[29]+0x00000278u); // 800D4044
  if (!crb(c,2)) { goto L_800D4068; } // 800D4048
  c->r[3]=0u+0x80250000u; // 800D404C
  c->r[5]=0u+0x80250000u; // 800D4050
  c->r[3]=c->r[3]+0x00007370u; // 800D4054
  c->r[4]=0u+0x0000009Eu; // 800D4058
  c->r[5]=c->r[5]+0x00007348u; // 800D405C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D4060
  c->lr=0x800D4068u; f_800F1300(c); // 800D4064
L_800D4068:;
  c->r[31]=c->r[30]+0x00000010u; // 800D4068
  c->r[3]=c->r[31]|c->r[31]; // 800D406C
  c->lr=0x800D4074u; f_8018E950(c); // 800D4070
  c->r[0]=R32(c->r[30]+0x00000004u); // 800D4074
  cmps(c,0,(int32_t)c->r[0],0); // 800D4078
  if (!crb(c,2)) { goto L_800D408C; } // 800D407C
  c->r[3]=c->r[31]|c->r[31]; // 800D4080
  c->lr=0x800D4088u; f_8018EA30(c); // 800D4084
  goto L_800D40E8; // 800D4088
L_800D408C:;
  cmps(c,0,(int32_t)c->r[29],0); // 800D408C
  if (!crb(c,2)) { goto L_800D40B0; } // 800D4090
  c->r[3]=0u+0x80250000u; // 800D4094
  c->r[5]=0u+0x80250000u; // 800D4098
  c->r[3]=c->r[3]+0x0000733Cu; // 800D409C
  c->r[4]=0u+0x00000233u; // 800D40A0
  c->r[5]=c->r[5]+0x00007318u; // 800D40A4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D40A8
  c->lr=0x800D40B0u; f_800F1300(c); // 800D40AC
L_800D40B0:;
  c->r[3]=c->r[30]+0x00000004u; // 800D40B0
  c->r[4]=c->r[29]+0x000000F0u; // 800D40B4
  c->lr=0x800D40BCu; f_800F1DC0(c); // 800D40B8
  c->r[12]=R32(c->r[29]+0x00000000u); // 800D40BC
  c->r[3]=c->r[29]|c->r[29]; // 800D40C0
  c->r[4]=0u+0xFFFFFFFFu; // 800D40C4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D40C8
  c->ctr=c->r[12]; // 800D40CC
  if (true) { c->lr=0x800D40D4u; dispatch(c,c->ctr); } // 800D40D0
  c->r[3]=c->r[30]|c->r[30]; // 800D40D4
  c->r[4]=c->r[29]|c->r[29]; // 800D40D8
  c->lr=0x800D40E0u; f_800CF4D0(c); // 800D40DC
  c->r[3]=c->r[31]|c->r[31]; // 800D40E0
  c->lr=0x800D40E8u; f_8018EA30(c); // 800D40E4
L_800D40E8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D40E8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D40EC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D40F0
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D40F4
  c->lr=c->r[0]; // 800D40F8
  c->r[1]=c->r[1]+0x00000020u; // 800D40FC
  return; // 800D4100
}

// __dt__Q44nw4r3snd6detail8SeqSoundFv
void f_800D4110(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4110
  c->r[0]=c->lr; // 800D4114
  cmps(c,0,(int32_t)c->r[3],0); // 800D4118
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D411C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D4120
  c->r[31]=c->r[4]|c->r[4]; // 800D4124
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D4128
  c->r[30]=c->r[3]|c->r[3]; // 800D412C
  if (crb(c,2)) { goto L_800D4160; } // 800D4130
  c->r[3]=addc(c,c->r[3],0x00000490u,0); cr0(c,c->r[3]); // 800D4134
  if (crb(c,2)) { goto L_800D4144; } // 800D4138
  c->r[4]=0u+0x00000000u; // 800D413C
  c->lr=0x800D4144u; f_800E25A0(c); // 800D4140
L_800D4144:;
  c->r[3]=c->r[30]+0x00000110u; // 800D4144
  c->r[4]=0u+0xFFFFFFFFu; // 800D4148
  c->lr=0x800D4150u; f_800D24B0(c); // 800D414C
  cmps(c,0,(int32_t)c->r[31],0); // 800D4150
  if (!crb(c,1)) { goto L_800D4160; } // 800D4154
  c->r[3]=c->r[30]|c->r[30]; // 800D4158
  c->lr=0x800D4160u; f_8015D040(c); // 800D415C
L_800D4160:;
  c->r[3]=c->r[30]|c->r[30]; // 800D4160
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D4164
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D4168
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D416C
  c->lr=c->r[0]; // 800D4170
  c->r[1]=c->r[1]+0x00000010u; // 800D4174
  return; // 800D4178
}

// fn_800D4180
void f_800D4180(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4180
  c->r[0]=c->lr; // 800D4184
  cmpu(c,0,c->r[4],0x0000007Fu); // 800D4188
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D418C
  c->r[0]=0u+0x00000000u; // 800D4190
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D4194
  c->r[31]=c->r[4]|c->r[4]; // 800D4198
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D419C
  c->r[30]=c->r[3]|c->r[3]; // 800D41A0
  if (crb(c,1)) { goto L_800D41AC; } // 800D41A4
  c->r[0]=0u+0x00000001u; // 800D41A8
L_800D41AC:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D41AC
  if (!crb(c,2)) { goto L_800D41DC; } // 800D41B0
  c->r[3]=0u+0x80250000u; // 800D41B4
  c->r[5]=0u+0x80250000u; // 800D41B8
  c->r[6]=c->r[31]|c->r[31]; // 800D41BC
  c->r[4]=0u+0x0000010Au; // 800D41C0
  c->r[3]=c->r[3]+0x00007088u; // 800D41C4
  c->r[5]=c->r[5]+0x00007144u; // 800D41C8
  c->r[7]=0u+0x00000000u; // 800D41CC
  c->r[8]=0u+0x0000007Fu; // 800D41D0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D41D4
  c->lr=0x800D41DCu; f_800F1300(c); // 800D41D8
L_800D41DC:;
  c->r[4]=c->r[31]|c->r[31]; // 800D41DC
  c->r[3]=c->r[30]+0x00000110u; // 800D41E0
  c->lr=0x800D41E8u; f_800D2E70(c); // 800D41E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D41E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D41EC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D41F0
  c->lr=c->r[0]; // 800D41F4
  c->r[1]=c->r[1]+0x00000010u; // 800D41F8
  return; // 800D41FC
}

// fn_800D4200
void f_800D4200(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000110u; // 800D4200
  f_800D2EF0(c); return; // 800D4204
}

// fn_800D4210
void f_800D4210(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000110u; // 800D4210
  f_800D2F00(c); return; // 800D4214
}

// fn_800D4220
void f_800D4220(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4220
  c->r[0]=c->lr; // 800D4224
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D4228
  c->r[11]=c->r[1]+0x00000040u; // 800D422C
  c->lr=0x800D4234u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D4230
  c->r[4]=R8(c->r[3]+0x00000098u); // 800D4234
  c->r[31]=c->r[3]|c->r[3]; // 800D4238
  c->r[0]=R32(c->r[3]+0x00000050u); // 800D423C
  c->r[4]=c->r[4]+c->r[0]; // 800D4240
  cmps(c,0,(int32_t)c->r[4],127); // 800D4244
  if (!crb(c,1)) { goto L_800D4254; } // 800D4248
  c->r[24]=0u+0x0000007Fu; // 800D424C
  goto L_800D425C; // 800D4250
L_800D4254:;
  c->r[0]=sraw(c,c->r[4],31); // 800D4254
  c->r[24]=c->r[4]&~c->r[0]; // 800D4258
L_800D425C:;
  c->r[25]=R32(c->r[3]+0x00000278u); // 800D425C
  c->r[26]=c->r[25]+0x00000010u; // 800D4260
  c->r[3]=c->r[26]|c->r[26]; // 800D4264
  c->lr=0x800D426Cu; f_8018E950(c); // 800D4268
  cmps(c,0,(int32_t)c->r[31],0); // 800D426C
  if (!crb(c,2)) { goto L_800D4290; } // 800D4270
  c->r[3]=0u+0x80250000u; // 800D4274
  c->r[5]=0u+0x80250000u; // 800D4278
  c->r[3]=c->r[3]+0x0000733Cu; // 800D427C
  c->r[4]=0u+0x00000233u; // 800D4280
  c->r[5]=c->r[5]+0x00007318u; // 800D4284
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D4288
  c->lr=0x800D4290u; f_800F1300(c); // 800D428C
L_800D4290:;
  c->r[23]=c->r[31]+0x000000F0u; // 800D4290
  c->r[3]=c->r[25]+0x00000004u; // 800D4294
  c->r[4]=c->r[23]|c->r[23]; // 800D4298
  c->lr=0x800D42A0u; f_800F1DC0(c); // 800D429C
  c->r[30]=R32(c->r[25]+0x00000008u); // 800D42A0
  c->r[29]=c->r[25]+0x00000008u; // 800D42A4
  c->r[27]=0u+0x80250000u; // 800D42A8
  c->r[28]=0u+0x80250000u; // 800D42AC
  goto L_800D4300; // 800D42B0
L_800D42B4:;
  cmps(c,0,(int32_t)c->r[30],0); // 800D42B4
  if (!crb(c,2)) { goto L_800D42D0; } // 800D42B8
  c->r[3]=c->r[27]+0x0000730Cu; // 800D42BC
  c->r[5]=c->r[28]+0x000072E8u; // 800D42C0
  c->r[4]=0u+0x0000023Du; // 800D42C4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D42C8
  c->lr=0x800D42D0u; f_800F1300(c); // 800D42CC
L_800D42D0:;
  c->r[3]=R8(c->r[30]+0xFFFFFFA8u); // 800D42D0
  c->r[0]=R32(c->r[30]+0xFFFFFF60u); // 800D42D4
  c->r[3]=c->r[3]+c->r[0]; // 800D42D8
  cmps(c,0,(int32_t)c->r[3],127); // 800D42DC
  if (!crb(c,1)) { goto L_800D42EC; } // 800D42E0
  c->r[0]=0u+0x0000007Fu; // 800D42E4
  goto L_800D42F4; // 800D42E8
L_800D42EC:;
  c->r[0]=sraw(c,c->r[3],31); // 800D42EC
  c->r[0]=c->r[3]&~c->r[0]; // 800D42F0
L_800D42F4:;
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[0]); // 800D42F4
  if (crb(c,0)) { goto L_800D4308; } // 800D42F8
  c->r[30]=R32(c->r[30]+0x00000000u); // 800D42FC
L_800D4300:;
  cmpu(c,0,c->r[30],c->r[29]); // 800D4300
  if (!crb(c,2)) { IRQCHK(c); goto L_800D42B4; } // 800D4304
L_800D4308:;
  cmps(c,0,(int32_t)c->r[31],0); // 800D4308
  if (!crb(c,2)) { goto L_800D432C; } // 800D430C
  c->r[3]=0u+0x80250000u; // 800D4310
  c->r[5]=0u+0x80250000u; // 800D4314
  c->r[3]=c->r[3]+0x0000733Cu; // 800D4318
  c->r[4]=0u+0x00000233u; // 800D431C
  c->r[5]=c->r[5]+0x00007318u; // 800D4320
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D4324
  c->lr=0x800D432Cu; f_800F1300(c); // 800D4328
L_800D432C:;
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D432C
  c->r[5]=c->r[23]|c->r[23]; // 800D4330
  c->r[3]=c->r[25]+0x00000004u; // 800D4334
  c->r[4]=c->r[1]+0x00000008u; // 800D4338
  c->lr=0x800D4340u; f_800F1CC0(c); // 800D433C
  c->r[3]=c->r[26]|c->r[26]; // 800D4340
  c->lr=0x800D4348u; f_8018EA30(c); // 800D4344
  c->r[11]=c->r[1]+0x00000040u; // 800D4348
  c->lr=0x800D4350u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D434C
  c->r[0]=R32(c->r[1]+0x00000044u); // 800D4350
  c->lr=c->r[0]; // 800D4354
  c->r[1]=c->r[1]+0x00000040u; // 800D4358
  return; // 800D435C
}

// fn_800D4360
void f_800D4360(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000274u); // 800D4360
  c->r[0]=0u-c->r[3]; // 800D4364
  c->r[0]=c->r[0]|c->r[3]; // 800D4368
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800D436C
  return; // 800D4370
}

// fn_800D4380
void f_800D4380(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000274u); // 800D4380
  f_800D4560(c); return; // 800D4384
}

// fn_800D4390
void f_800D4390(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4390
  c->r[0]=c->lr; // 800D4394
  c->r[4]=0u+0x00000000u; // 800D4398
  c->r[5]=0u+0x00000000u; // 800D439C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D43A0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D43A4
  c->r[31]=c->r[3]|c->r[3]; // 800D43A8
  c->r[3]=R32(c->r[3]+0x00000010u); // 800D43AC
  c->r[12]=R32(c->r[3]+0x00000000u); // 800D43B0
  c->r[12]=R32(c->r[12]+0x00000044u); // 800D43B4
  c->ctr=c->r[12]; // 800D43B8
  if (true) { c->lr=0x800D43C0u; dispatch(c,c->ctr); } // 800D43BC
  c->r[3]=R32(c->r[31]+0x00000010u); // 800D43C0
  c->r[4]=R32(c->r[31]+0x00000014u); // 800D43C4
  c->r[12]=R32(c->r[3]+0x00000000u); // 800D43C8
  c->r[5]=R32(c->r[31]+0x00000018u); // 800D43CC
  c->r[12]=R32(c->r[12]+0x00000014u); // 800D43D0
  c->ctr=c->r[12]; // 800D43D4
  if (true) { c->lr=0x800D43DCu; dispatch(c,c->ctr); } // 800D43D8
  cmps(c,0,(int32_t)c->r[3],-3); // 800D43DC
  c->r[0]=0u+0x00000000u; // 800D43E0
  W32(c->r[31]+0x00000010u,c->r[0]); // 800D43E4
  if (!crb(c,2)) { goto L_800D4410; } // 800D43E8
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 800D43EC
  cmps(c,0,(int32_t)c->r[12],0); // 800D43F0
  if (crb(c,2)) { goto L_800D4498; } // 800D43F4
  c->r[5]=R32(c->r[31]+0x00000020u); // 800D43F8
  c->r[3]=0u+0x00000000u; // 800D43FC
  c->r[4]=0u+0x00000000u; // 800D4400
  c->ctr=c->r[12]; // 800D4404
  if (true) { c->lr=0x800D440Cu; dispatch(c,c->ctr); } // 800D4408
  goto L_800D4498; // 800D440C
L_800D4410:;
  c->r[0]=R32(c->r[31]+0x00000018u); // 800D4410
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800D4414
  if (crb(c,2)) { goto L_800D4464; } // 800D4418
  cmps(c,0,(int32_t)c->r[3],0); // 800D441C
  if (!crb(c,2)) { goto L_800D4440; } // 800D4420
  c->r[3]=0u+0x80250000u; // 800D4424
  c->r[5]=0u+0x80250000u; // 800D4428
  c->r[3]=c->r[3]+0x00007088u; // 800D442C
  c->r[4]=0u+0x000002CCu; // 800D4430
  c->r[5]=c->r[5]+0x00007274u; // 800D4434
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D4438
  c->lr=0x800D4440u; f_800F13A0(c); // 800D443C
L_800D4440:;
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 800D4440
  cmps(c,0,(int32_t)c->r[12],0); // 800D4444
  if (crb(c,2)) { goto L_800D4498; } // 800D4448
  c->r[5]=R32(c->r[31]+0x00000020u); // 800D444C
  c->r[3]=0u+0x00000000u; // 800D4450
  c->r[4]=0u+0x00000000u; // 800D4454
  c->ctr=c->r[12]; // 800D4458
  if (true) { c->lr=0x800D4460u; dispatch(c,c->ctr); } // 800D445C
  goto L_800D4498; // 800D4460
L_800D4464:;
  c->r[4]=R32(c->r[31]+0x00000014u); // 800D4464
  c->r[3]=c->r[1]+0x00000008u; // 800D4468
  c->lr=0x800D4470u; f_800D1FD0(c); // 800D446C
  c->r[3]=c->r[1]+0x00000008u; // 800D4470
  c->lr=0x800D4478u; f_800D2130(c); // 800D4474
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 800D4478
  cmps(c,0,(int32_t)c->r[12],0); // 800D447C
  if (crb(c,2)) { goto L_800D4498; } // 800D4480
  c->r[4]=c->r[3]|c->r[3]; // 800D4484
  c->r[5]=R32(c->r[31]+0x00000020u); // 800D4488
  c->r[3]=0u+0x00000001u; // 800D448C
  c->ctr=c->r[12]; // 800D4490
  if (true) { c->lr=0x800D4498u; dispatch(c,c->ctr); } // 800D4494
L_800D4498:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D4498
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D449C
  c->lr=c->r[0]; // 800D44A0
  c->r[1]=c->r[1]+0x00000020u; // 800D44A4
  return; // 800D44A8
}

// fn_800D44B0
void f_800D44B0(Ctx* __restrict c) {
  c->r[12]=R32(c->r[3]+0x0000001Cu); // 800D44B0
  cmps(c,0,(int32_t)c->r[12],0); // 800D44B4
  if (crb(c,2)) return; // 800D44B8
  c->r[5]=R32(c->r[3]+0x00000020u); // 800D44BC
  c->r[3]=0u+0x00000000u; // 800D44C0
  c->r[4]=0u+0x00000000u; // 800D44C4
  c->ctr=c->r[12]; // 800D44C8
  if (true) { dispatch(c,c->ctr); return; } // 800D44CC
  return; // 800D44D0
}

// fn_800D44E0
void f_800D44E0(Ctx* __restrict c) {
  c->r[4]=R32(c->r[3]+0x00000010u); // 800D44E0
  c->r[0]=0u+0x00000000u; // 800D44E4
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 800D44E8
  cmps(c,0,(int32_t)c->r[4],0); // 800D44EC
  if (crb(c,2)) return; // 800D44F0
  c->r[12]=R32(c->r[4]+0x00000000u); // 800D44F4
  c->r[3]=c->r[4]|c->r[4]; // 800D44F8
  c->r[12]=R32(c->r[12]+0x00000048u); // 800D44FC
  c->ctr=c->r[12]; // 800D4500
  if (true) { dispatch(c,c->ctr); return; } // 800D4504
  return; // 800D4508
}

// fn_800D4510
void f_800D4510(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000110u; // 800D4510
  return; // 800D4514
}

// fn_800D4520
void f_800D4520(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000110u; // 800D4520
  return; // 800D4524
}

// fn_800D4530
void f_800D4530(Ctx* __restrict c) {
  c->r[3]=R8(c->r[3]+0x00000289u); // 800D4530
  return; // 800D4534
}

// fn_800D4540
void f_800D4540(Ctx* __restrict c) {
  c->r[3]=c->r[13]+0xFFFFADF8u; // 800D4540
  return; // 800D4544
}

// fn_800D4550
void f_800D4550(Ctx* __restrict c) {
  c->r[0]=c->r[13]+0xFFFFADD0u; // 800D4550
  W32(c->r[13]+0xFFFFADF8u,c->r[0]); // 800D4554
  return; // 800D4558
}

// fn_800D4560
void f_800D4560(Ctx* __restrict c) {
  c->r[4]=R32(c->r[3]+0x00000000u); // 800D4560
  cmps(c,0,(int32_t)c->r[4],0); // 800D4564
  if (crb(c,2)) { goto L_800D4580; } // 800D4568
  c->r[0]=R32(c->r[4]+0x00000274u); // 800D456C
  cmpu(c,0,c->r[0],c->r[3]); // 800D4570
  if (!crb(c,2)) { goto L_800D4580; } // 800D4574
  c->r[0]=0u+0x00000000u; // 800D4578
  W32(c->r[4]+0x00000274u,c->r[0]); // 800D457C
L_800D4580:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D4580
  cmps(c,0,(int32_t)c->r[0],0); // 800D4584
  if (crb(c,2)) return; // 800D4588
  c->r[0]=0u+0x00000000u; // 800D458C
  W32(c->r[3]+0x00000000u,c->r[0]); // 800D4590
  return; // 800D4594
}

// fn_800D45A0
void f_800D45A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D45A0
  c->r[0]=c->lr; // 800D45A4
  cmpu(c,0,c->r[4],0x00000010u); // 800D45A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D45AC
  c->r[0]=0u+0x00000000u; // 800D45B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D45B4
  c->r[31]=c->r[4]|c->r[4]; // 800D45B8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D45BC
  c->r[30]=c->r[3]|c->r[3]; // 800D45C0
  if (crb(c,1)) { goto L_800D45CC; } // 800D45C4
  c->r[0]=0u+0x00000001u; // 800D45C8
L_800D45CC:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D45CC
  if (!crb(c,2)) { goto L_800D45FC; } // 800D45D0
  c->r[3]=0u+0x80250000u; // 800D45D4
  c->r[5]=0u+0x80250000u; // 800D45D8
  c->r[6]=c->r[31]|c->r[31]; // 800D45DC
  c->r[4]=0u+0x00000026u; // 800D45E0
  c->r[3]=c->r[3]+0x00007388u; // 800D45E4
  c->r[5]=c->r[5]+0x0000739Cu; // 800D45E8
  c->r[7]=0u+0x00000000u; // 800D45EC
  c->r[8]=0u+0x00000010u; // 800D45F0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D45F4
  c->lr=0x800D45FCu; f_800F1300(c); // 800D45F8
L_800D45FC:;
  W8(c->r[30]+0x00000004u,c->r[31]); // 800D45FC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D4600
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D4604
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D4608
  c->lr=c->r[0]; // 800D460C
  c->r[1]=c->r[1]+0x00000010u; // 800D4610
  return; // 800D4614
}

// __ct__Q44nw4r3snd6detail8SeqTrackFv
void f_800D4620(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4620
  c->r[0]=c->lr; // 800D4624
  c->r[4]=0u+0x80250000u; // 800D4628
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D462C
  c->r[4]=c->r[4]+0x000075F8u; // 800D4630
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D4634
  c->r[31]=0u+0x00000000u; // 800D4638
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D463C
  c->r[30]=c->r[3]|c->r[3]; // 800D4640
  W32(c->r[3]+0x00000000u,c->r[4]); // 800D4644
  W8(c->r[3]+0x00000005u,c->r[31]); // 800D4648
  c->r[3]=c->r[3]+0x00000058u; // 800D464C
  c->lr=0x800D4654u; f_800CF520(c); // 800D4650
  W8(c->r[30]+0x00000070u,c->r[31]); // 800D4654
  c->r[3]=c->r[30]|c->r[30]; // 800D4658
  W8(c->r[30]+0x00000071u,c->r[31]); // 800D465C
  W16(c->r[30]+0x00000072u,c->r[31]); // 800D4660
  W16(c->r[30]+0x00000074u,c->r[31]); // 800D4664
  W8(c->r[30]+0x00000076u,c->r[31]); // 800D4668
  W8(c->r[30]+0x00000077u,c->r[31]); // 800D466C
  W16(c->r[30]+0x00000078u,c->r[31]); // 800D4670
  W16(c->r[30]+0x0000007Au,c->r[31]); // 800D4674
  W8(c->r[30]+0x0000007Cu,c->r[31]); // 800D4678
  W8(c->r[30]+0x0000007Du,c->r[31]); // 800D467C
  W16(c->r[30]+0x0000007Eu,c->r[31]); // 800D4680
  W16(c->r[30]+0x00000080u,c->r[31]); // 800D4684
  W8(c->r[30]+0x00000082u,c->r[31]); // 800D4688
  W8(c->r[30]+0x00000083u,c->r[31]); // 800D468C
  W16(c->r[30]+0x00000084u,c->r[31]); // 800D4690
  W16(c->r[30]+0x00000086u,c->r[31]); // 800D4694
  W32(c->r[30]+0x000000C4u,c->r[31]); // 800D4698
  W32(c->r[30]+0x000000C8u,c->r[31]); // 800D469C
  c->lr=0x800D46A4u; f_800D47D0(c); // 800D46A0
  c->r[3]=c->r[30]|c->r[30]; // 800D46A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D46A8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D46AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D46B0
  c->lr=c->r[0]; // 800D46B4
  c->r[1]=c->r[1]+0x00000010u; // 800D46B8
  return; // 800D46BC
}

// __dt__Q44nw4r3snd6detail8SeqTrackFv
void f_800D46C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D46C0
  c->r[0]=c->lr; // 800D46C4
  cmps(c,0,(int32_t)c->r[3],0); // 800D46C8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D46CC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D46D0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D46D4
  c->r[30]=c->r[4]|c->r[4]; // 800D46D8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D46DC
  c->r[29]=c->r[3]|c->r[3]; // 800D46E0
  if (crb(c,2)) { goto L_800D47A4; } // 800D46E4
  c->r[4]=0u+0x80250000u; // 800D46E8
  c->r[4]=c->r[4]+0x000075F8u; // 800D46EC
  W32(c->r[3]+0x00000000u,c->r[4]); // 800D46F0
  c->lr=0x800D46F8u; f_800DD3D0(c); // 800D46F4
  c->r[3]=c->r[3]+0x00000354u; // 800D46F8
  c->lr=0x800D4700u; f_8018E950(c); // 800D46FC
  c->lr=0x800D4704u; f_800DD3D0(c); // 800D4700
  c->r[3]=c->r[3]+0x00000354u; // 800D4704
  c->lr=0x800D470Cu; f_8018E950(c); // 800D4708
  c->r[3]=c->r[29]|c->r[29]; // 800D470C
  c->lr=0x800D4714u; f_800D4E40(c); // 800D4710
  c->r[31]=R32(c->r[29]+0x000000C8u); // 800D4714
  goto L_800D4734; // 800D4718
L_800D471C:;
  c->r[0]=R8(c->r[31]+0x00000036u); // 800D471C
  cmps(c,0,(int32_t)c->r[0],0); // 800D4720
  if (crb(c,2)) { goto L_800D4730; } // 800D4724
  c->r[3]=c->r[31]|c->r[31]; // 800D4728
  c->lr=0x800D4730u; f_800CD280(c); // 800D472C
L_800D4730:;
  c->r[31]=R32(c->r[31]+0x000000D4u); // 800D4730
L_800D4734:;
  cmps(c,0,(int32_t)c->r[31],0); // 800D4734
  if (!crb(c,2)) { IRQCHK(c); goto L_800D471C; } // 800D4738
  c->lr=0x800D4740u; f_800DD3D0(c); // 800D473C
  c->r[3]=c->r[3]+0x00000354u; // 800D4740
  c->lr=0x800D4748u; f_8018EA30(c); // 800D4744
  c->lr=0x800D474Cu; f_800DD3D0(c); // 800D4748
  c->r[3]=c->r[3]+0x00000354u; // 800D474C
  c->lr=0x800D4754u; f_8018E950(c); // 800D4750
  c->r[31]=R32(c->r[29]+0x000000C8u); // 800D4754
  goto L_800D4768; // 800D4758
L_800D475C:;
  c->r[3]=c->r[31]|c->r[31]; // 800D475C
  c->lr=0x800D4764u; f_800CD940(c); // 800D4760
  c->r[31]=R32(c->r[31]+0x000000D4u); // 800D4764
L_800D4768:;
  cmps(c,0,(int32_t)c->r[31],0); // 800D4768
  if (!crb(c,2)) { IRQCHK(c); goto L_800D475C; } // 800D476C
  c->r[31]=0u+0x00000000u; // 800D4770
  W32(c->r[29]+0x000000C8u,c->r[31]); // 800D4774
  c->lr=0x800D477Cu; f_800DD3D0(c); // 800D4778
  c->r[3]=c->r[3]+0x00000354u; // 800D477C
  c->lr=0x800D4784u; f_8018EA30(c); // 800D4780
  W8(c->r[29]+0x00000005u,c->r[31]); // 800D4784
  c->lr=0x800D478Cu; f_800DD3D0(c); // 800D4788
  c->r[3]=c->r[3]+0x00000354u; // 800D478C
  c->lr=0x800D4794u; f_8018EA30(c); // 800D4790
  cmps(c,0,(int32_t)c->r[30],0); // 800D4794
  if (!crb(c,1)) { goto L_800D47A4; } // 800D4798
  c->r[3]=c->r[29]|c->r[29]; // 800D479C
  c->lr=0x800D47A4u; f_8015D040(c); // 800D47A0
L_800D47A4:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D47A4
  c->r[3]=c->r[29]|c->r[29]; // 800D47A8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D47AC
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D47B0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D47B4
  c->lr=c->r[0]; // 800D47B8
  c->r[1]=c->r[1]+0x00000020u; // 800D47BC
  return; // 800D47C0
}

// InitParam__Q44nw4r3snd6detail8SeqTrackFv
void f_800D47D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D47D0
  c->r[0]=c->lr; // 800D47D4
  {uint32_t ea=c->r[2]+0xFFFF9B28u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D47D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D47DC
  c->r[0]=0u+0x00000001u; // 800D47E0
  {uint32_t ea=c->r[2]+0xFFFF9B2Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D47E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D47E8
  c->r[31]=0u+0x00000000u; // 800D47EC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D47F0
  c->r[30]=c->r[3]|c->r[3]; // 800D47F4
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 800D47F8
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 800D47FC
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 800D4800
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 800D4804
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[1]);} // 800D4808
  W32(c->r[3]+0x0000001Cu,c->r[31]); // 800D480C
  W32(c->r[3]+0x00000020u,c->r[31]); // 800D4810
  W8(c->r[3]+0x00000024u,c->r[0]); // 800D4814
  W8(c->r[3]+0x00000025u,c->r[0]); // 800D4818
  W8(c->r[3]+0x00000026u,c->r[31]); // 800D481C
  W8(c->r[3]+0x00000027u,c->r[31]); // 800D4820
  W8(c->r[3]+0x00000040u,c->r[31]); // 800D4824
  W32(c->r[3]+0x00000044u,c->r[31]); // 800D4828
  W8(c->r[3]+0x00000048u,c->r[31]); // 800D482C
  W8(c->r[3]+0x00000049u,c->r[31]); // 800D4830
  W8(c->r[3]+0x0000004Au,c->r[31]); // 800D4834
  W8(c->r[3]+0x0000004Bu,c->r[31]); // 800D4838
  W8(c->r[3]+0x0000004Cu,c->r[31]); // 800D483C
  W32(c->r[3]+0x00000050u,c->r[31]); // 800D4840
  W32(c->r[3]+0x00000054u,c->r[31]); // 800D4844
  c->r[3]=c->r[3]+0x00000058u; // 800D4848
  c->lr=0x800D4850u; f_800CF520(c); // 800D484C
  {uint32_t ea=c->r[2]+0xFFFF9B2Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D4850
  c->r[7]=0u+0x0000007Fu; // 800D4854
  c->r[3]=0u+0x000000FFu; // 800D4858
  c->r[6]=0u+0x00000002u; // 800D485C
  c->r[5]=0u+0x00000040u; // 800D4860
  c->r[4]=0u+0x0000003Cu; // 800D4864
  W8(c->r[30]+0x00000068u,c->r[31]); // 800D4868
  c->r[0]=0u+0xFFFFFFFFu; // 800D486C
  {uint32_t ea=c->r[30]+0x0000006Cu; WF32(ea,c->f[0]);} // 800D4870
  W8(c->r[30]+0x00000070u,c->r[7]); // 800D4874
  W8(c->r[30]+0x00000071u,c->r[7]); // 800D4878
  W16(c->r[30]+0x00000072u,c->r[31]); // 800D487C
  W16(c->r[30]+0x00000074u,c->r[31]); // 800D4880
  W8(c->r[30]+0x00000076u,c->r[31]); // 800D4884
  W8(c->r[30]+0x00000077u,c->r[31]); // 800D4888
  W16(c->r[30]+0x00000078u,c->r[31]); // 800D488C
  W16(c->r[30]+0x0000007Au,c->r[31]); // 800D4890
  W8(c->r[30]+0x0000007Cu,c->r[31]); // 800D4894
  W8(c->r[30]+0x0000007Du,c->r[31]); // 800D4898
  W16(c->r[30]+0x0000007Eu,c->r[31]); // 800D489C
  W16(c->r[30]+0x00000080u,c->r[31]); // 800D48A0
  W8(c->r[30]+0x00000088u,c->r[7]); // 800D48A4
  W8(c->r[30]+0x00000089u,c->r[7]); // 800D48A8
  W8(c->r[30]+0x00000082u,c->r[31]); // 800D48AC
  W8(c->r[30]+0x00000083u,c->r[31]); // 800D48B0
  W16(c->r[30]+0x00000084u,c->r[31]); // 800D48B4
  W16(c->r[30]+0x00000086u,c->r[31]); // 800D48B8
  W8(c->r[30]+0x0000008Au,c->r[6]); // 800D48BC
  W8(c->r[30]+0x0000008Bu,c->r[31]); // 800D48C0
  W8(c->r[30]+0x0000008Cu,c->r[31]); // 800D48C4
  W8(c->r[30]+0x0000008Du,c->r[5]); // 800D48C8
  W8(c->r[30]+0x0000008Eu,c->r[4]); // 800D48CC
  W8(c->r[30]+0x0000008Fu,c->r[31]); // 800D48D0
  W8(c->r[30]+0x00000090u,c->r[3]); // 800D48D4
  W8(c->r[30]+0x00000091u,c->r[3]); // 800D48D8
  W8(c->r[30]+0x00000092u,c->r[3]); // 800D48DC
  W8(c->r[30]+0x00000093u,c->r[3]); // 800D48E0
  W16(c->r[30]+0x00000094u,c->r[3]); // 800D48E4
  W8(c->r[30]+0x00000096u,c->r[7]); // 800D48E8
  W8(c->r[30]+0x00000097u,c->r[31]); // 800D48EC
  W8(c->r[30]+0x00000098u,c->r[31]); // 800D48F0
  W8(c->r[30]+0x00000099u,c->r[31]); // 800D48F4
  {uint32_t ea=c->r[30]+0x0000009Cu; WF32(ea,c->f[0]);} // 800D48F8
  W8(c->r[30]+0x0000009Au,c->r[31]); // 800D48FC
  {uint32_t ea=c->r[30]+0x000000A0u; WF32(ea,c->f[0]);} // 800D4900
  W16(c->r[30]+0x000000A4u,c->r[0]); // 800D4904
  W16(c->r[30]+0x000000A6u,c->r[0]); // 800D4908
  W16(c->r[30]+0x000000A8u,c->r[0]); // 800D490C
  W16(c->r[30]+0x000000AAu,c->r[0]); // 800D4910
  W16(c->r[30]+0x000000ACu,c->r[0]); // 800D4914
  W16(c->r[30]+0x000000AEu,c->r[0]); // 800D4918
  W16(c->r[30]+0x000000B0u,c->r[0]); // 800D491C
  W16(c->r[30]+0x000000B2u,c->r[0]); // 800D4920
  W16(c->r[30]+0x000000B4u,c->r[0]); // 800D4924
  W16(c->r[30]+0x000000B6u,c->r[0]); // 800D4928
  W16(c->r[30]+0x000000B8u,c->r[0]); // 800D492C
  W16(c->r[30]+0x000000BAu,c->r[0]); // 800D4930
  W16(c->r[30]+0x000000BCu,c->r[0]); // 800D4934
  W16(c->r[30]+0x000000BEu,c->r[0]); // 800D4938
  W16(c->r[30]+0x000000C0u,c->r[0]); // 800D493C
  W16(c->r[30]+0x000000C2u,c->r[0]); // 800D4940
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D4944
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D4948
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D494C
  c->lr=c->r[0]; // 800D4950
  c->r[1]=c->r[1]+0x00000010u; // 800D4954
  return; // 800D4958
}

// SetSeqData__Q44nw4r3snd6detail8SeqTrackFPCvl
void f_800D4960(Ctx* __restrict c) {
  c->r[0]=c->r[4]+c->r[5]; // 800D4960
  W32(c->r[3]+0x0000001Cu,c->r[4]); // 800D4964
  W32(c->r[3]+0x00000020u,c->r[0]); // 800D4968
  return; // 800D496C
}

// Open__Q44nw4r3snd6detail8SeqTrackFv
void f_800D4970(Ctx* __restrict c) {
  c->r[4]=0u+0x00000000u; // 800D4970
  c->r[0]=0u+0x00000001u; // 800D4974
  W8(c->r[3]+0x0000004Au,c->r[4]); // 800D4978
  W8(c->r[3]+0x00000040u,c->r[4]); // 800D497C
  W32(c->r[3]+0x00000044u,c->r[4]); // 800D4980
  W8(c->r[3]+0x00000005u,c->r[0]); // 800D4984
  return; // 800D4988
}

// Close__Q44nw4r3snd6detail8SeqTrackFv
void f_800D4990(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4990
  c->r[0]=c->lr; // 800D4994
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D4998
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D499C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D49A0
  c->r[30]=c->r[3]|c->r[3]; // 800D49A4
  c->lr=0x800D49ACu; f_800DD3D0(c); // 800D49A8
  c->r[3]=c->r[3]+0x00000354u; // 800D49AC
  c->lr=0x800D49B4u; f_8018E950(c); // 800D49B0
  c->lr=0x800D49B8u; f_800DD3D0(c); // 800D49B4
  c->r[3]=c->r[3]+0x00000354u; // 800D49B8
  c->lr=0x800D49C0u; f_8018E950(c); // 800D49BC
  c->r[3]=c->r[30]|c->r[30]; // 800D49C0
  c->lr=0x800D49C8u; f_800D4E40(c); // 800D49C4
  c->r[31]=R32(c->r[30]+0x000000C8u); // 800D49C8
  goto L_800D49E8; // 800D49CC
L_800D49D0:;
  c->r[0]=R8(c->r[31]+0x00000036u); // 800D49D0
  cmps(c,0,(int32_t)c->r[0],0); // 800D49D4
  if (crb(c,2)) { goto L_800D49E4; } // 800D49D8
  c->r[3]=c->r[31]|c->r[31]; // 800D49DC
  c->lr=0x800D49E4u; f_800CD280(c); // 800D49E0
L_800D49E4:;
  c->r[31]=R32(c->r[31]+0x000000D4u); // 800D49E4
L_800D49E8:;
  cmps(c,0,(int32_t)c->r[31],0); // 800D49E8
  if (!crb(c,2)) { IRQCHK(c); goto L_800D49D0; } // 800D49EC
  c->lr=0x800D49F4u; f_800DD3D0(c); // 800D49F0
  c->r[3]=c->r[3]+0x00000354u; // 800D49F4
  c->lr=0x800D49FCu; f_8018EA30(c); // 800D49F8
  c->lr=0x800D4A00u; f_800DD3D0(c); // 800D49FC
  c->r[3]=c->r[3]+0x00000354u; // 800D4A00
  c->lr=0x800D4A08u; f_8018E950(c); // 800D4A04
  c->r[31]=R32(c->r[30]+0x000000C8u); // 800D4A08
  goto L_800D4A1C; // 800D4A0C
L_800D4A10:;
  c->r[3]=c->r[31]|c->r[31]; // 800D4A10
  c->lr=0x800D4A18u; f_800CD940(c); // 800D4A14
  c->r[31]=R32(c->r[31]+0x000000D4u); // 800D4A18
L_800D4A1C:;
  cmps(c,0,(int32_t)c->r[31],0); // 800D4A1C
  if (!crb(c,2)) { IRQCHK(c); goto L_800D4A10; } // 800D4A20
  c->r[31]=0u+0x00000000u; // 800D4A24
  W32(c->r[30]+0x000000C8u,c->r[31]); // 800D4A28
  c->lr=0x800D4A30u; f_800DD3D0(c); // 800D4A2C
  c->r[3]=c->r[3]+0x00000354u; // 800D4A30
  c->lr=0x800D4A38u; f_8018EA30(c); // 800D4A34
  W8(c->r[30]+0x00000005u,c->r[31]); // 800D4A38
  c->lr=0x800D4A40u; f_800DD3D0(c); // 800D4A3C
  c->r[3]=c->r[3]+0x00000354u; // 800D4A40
  c->lr=0x800D4A48u; f_8018EA30(c); // 800D4A44
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D4A48
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D4A4C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D4A50
  c->lr=c->r[0]; // 800D4A54
  c->r[1]=c->r[1]+0x00000010u; // 800D4A58
  return; // 800D4A5C
}

// UpdateChannelLength__Q44nw4r3snd6detail8SeqTrackFv
void f_800D4A60(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4A60
  c->r[0]=c->lr; // 800D4A64
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D4A68
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D4A6C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D4A70
  c->r[30]=c->r[3]|c->r[3]; // 800D4A74
  c->lr=0x800D4A7Cu; f_800DD3D0(c); // 800D4A78
  c->r[3]=c->r[3]+0x00000354u; // 800D4A7C
  c->lr=0x800D4A84u; f_8018E950(c); // 800D4A80
  c->r[0]=R8(c->r[30]+0x00000005u); // 800D4A84
  cmps(c,0,(int32_t)c->r[0],0); // 800D4A88
  if (!crb(c,2)) { goto L_800D4AA0; } // 800D4A8C
  c->lr=0x800D4A94u; f_800DD3D0(c); // 800D4A90
  c->r[3]=c->r[3]+0x00000354u; // 800D4A94
  c->lr=0x800D4A9Cu; f_8018EA30(c); // 800D4A98
  goto L_800D4B18; // 800D4A9C
L_800D4AA0:;
  c->r[31]=R32(c->r[30]+0x000000C8u); // 800D4AA0
  goto L_800D4B04; // 800D4AA4
L_800D4AA8:;
  c->r[3]=R32(c->r[31]+0x000000B0u); // 800D4AA8
  cmps(c,0,(int32_t)c->r[3],0); // 800D4AAC
  if (!crb(c,1)) { goto L_800D4ABC; } // 800D4AB0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800D4AB4
  W32(c->r[31]+0x000000B0u,c->r[0]); // 800D4AB8
L_800D4ABC:;
  c->r[0]=R32(c->r[31]+0x000000B0u); // 800D4ABC
  cmps(c,0,(int32_t)c->r[0],0); // 800D4AC0
  if (!crb(c,2)) { goto L_800D4AE8; } // 800D4AC4
  c->r[0]=R32(c->r[31]+0x00000000u); // 800D4AC8
  cmps(c,0,(int32_t)c->r[0],4); // 800D4ACC
  if (crb(c,2)) { goto L_800D4AE8; } // 800D4AD0
  c->r[0]=R8(c->r[30]+0x0000004Cu); // 800D4AD4
  cmps(c,0,(int32_t)c->r[0],0); // 800D4AD8
  if (!crb(c,2)) { goto L_800D4AE8; } // 800D4ADC
  c->r[3]=c->r[31]|c->r[31]; // 800D4AE0
  c->lr=0x800D4AE8u; f_800CD2F0(c); // 800D4AE4
L_800D4AE8:;
  c->r[0]=R8(c->r[31]+0x00000038u); // 800D4AE8
  cmps(c,0,(int32_t)c->r[0],0); // 800D4AEC
  if (!crb(c,2)) { goto L_800D4B00; } // 800D4AF0
  c->r[3]=c->r[31]|c->r[31]; // 800D4AF4
  c->r[4]=0u+0x00000001u; // 800D4AF8
  c->lr=0x800D4B00u; f_800CD4C0(c); // 800D4AFC
L_800D4B00:;
  c->r[31]=R32(c->r[31]+0x000000D4u); // 800D4B00
L_800D4B04:;
  cmps(c,0,(int32_t)c->r[31],0); // 800D4B04
  if (!crb(c,2)) { IRQCHK(c); goto L_800D4AA8; } // 800D4B08
  c->lr=0x800D4B10u; f_800DD3D0(c); // 800D4B0C
  c->r[3]=c->r[3]+0x00000354u; // 800D4B10
  c->lr=0x800D4B18u; f_8018EA30(c); // 800D4B14
L_800D4B18:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D4B18
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D4B1C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D4B20
  c->lr=c->r[0]; // 800D4B24
  c->r[1]=c->r[1]+0x00000010u; // 800D4B28
  return; // 800D4B2C
}

// ParseNextTick__Q44nw4r3snd6detail8SeqTrackFb
void f_800D4B30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4B30
  c->r[0]=c->lr; // 800D4B34
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D4B38
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D4B3C
  c->r[31]=c->r[4]|c->r[4]; // 800D4B40
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D4B44
  c->r[30]=c->r[3]|c->r[3]; // 800D4B48
  c->lr=0x800D4B50u; f_800DD3D0(c); // 800D4B4C
  c->r[3]=c->r[3]+0x00000354u; // 800D4B50
  c->lr=0x800D4B58u; f_8018E950(c); // 800D4B54
  c->r[0]=R8(c->r[30]+0x00000005u); // 800D4B58
  cmps(c,0,(int32_t)c->r[0],0); // 800D4B5C
  if (!crb(c,2)) { goto L_800D4B78; } // 800D4B60
  c->lr=0x800D4B68u; f_800DD3D0(c); // 800D4B64
  c->r[3]=c->r[3]+0x00000354u; // 800D4B68
  c->lr=0x800D4B70u; f_8018EA30(c); // 800D4B6C
  c->r[3]=0u+0x00000000u; // 800D4B70
  goto L_800D4CA4; // 800D4B74
L_800D4B78:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000074u); // 800D4B78
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000072u); // 800D4B7C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800D4B80
  if (!crb(c,0)) { goto L_800D4B90; } // 800D4B84
  c->r[0]=c->r[3]+0x00000001u; // 800D4B88
  W16(c->r[30]+0x00000074u,c->r[0]); // 800D4B8C
L_800D4B90:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x0000007Au); // 800D4B90
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000078u); // 800D4B94
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800D4B98
  if (!crb(c,0)) { goto L_800D4BA8; } // 800D4B9C
  c->r[0]=c->r[3]+0x00000001u; // 800D4BA0
  W16(c->r[30]+0x0000007Au,c->r[0]); // 800D4BA4
L_800D4BA8:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000080u); // 800D4BA8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x0000007Eu); // 800D4BAC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800D4BB0
  if (!crb(c,0)) { goto L_800D4BC0; } // 800D4BB4
  c->r[0]=c->r[3]+0x00000001u; // 800D4BB8
  W16(c->r[30]+0x00000080u,c->r[0]); // 800D4BBC
L_800D4BC0:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000086u); // 800D4BC0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000084u); // 800D4BC4
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800D4BC8
  if (!crb(c,0)) { goto L_800D4BD8; } // 800D4BCC
  c->r[0]=c->r[3]+0x00000001u; // 800D4BD0
  W16(c->r[30]+0x00000086u,c->r[0]); // 800D4BD4
L_800D4BD8:;
  c->r[0]=R8(c->r[30]+0x0000004Au); // 800D4BD8
  cmps(c,0,(int32_t)c->r[0],0); // 800D4BDC
  if (crb(c,2)) { goto L_800D4C0C; } // 800D4BE0
  c->r[0]=R32(c->r[30]+0x000000C8u); // 800D4BE4
  cmps(c,0,(int32_t)c->r[0],0); // 800D4BE8
  if (crb(c,2)) { goto L_800D4C04; } // 800D4BEC
  c->lr=0x800D4BF4u; f_800DD3D0(c); // 800D4BF0
  c->r[3]=c->r[3]+0x00000354u; // 800D4BF4
  c->lr=0x800D4BFCu; f_8018EA30(c); // 800D4BF8
  c->r[3]=0u+0x00000001u; // 800D4BFC
  goto L_800D4CA4; // 800D4C00
L_800D4C04:;
  c->r[0]=0u+0x00000000u; // 800D4C04
  W8(c->r[30]+0x0000004Au,c->r[0]); // 800D4C08
L_800D4C0C:;
  c->r[3]=R32(c->r[30]+0x00000044u); // 800D4C0C
  cmps(c,0,(int32_t)c->r[3],0); // 800D4C10
  if (!crb(c,1)) { goto L_800D4C38; } // 800D4C14
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 800D4C18
  W32(c->r[30]+0x00000044u,c->r[0]); // 800D4C1C
  if (!crb(c,1)) { goto L_800D4C38; } // 800D4C20
  c->lr=0x800D4C28u; f_800DD3D0(c); // 800D4C24
  c->r[3]=c->r[3]+0x00000354u; // 800D4C28
  c->lr=0x800D4C30u; f_8018EA30(c); // 800D4C2C
  c->r[3]=0u+0x00000001u; // 800D4C30
  goto L_800D4CA4; // 800D4C34
L_800D4C38:;
  c->r[0]=R32(c->r[30]+0x00000020u); // 800D4C38
  cmps(c,0,(int32_t)c->r[0],0); // 800D4C3C
  if (crb(c,2)) { goto L_800D4C94; } // 800D4C40
  goto L_800D4C7C; // 800D4C44
L_800D4C48:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 800D4C48
  c->r[3]=c->r[30]|c->r[30]; // 800D4C4C
  c->r[4]=c->r[31]|c->r[31]; // 800D4C50
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D4C54
  c->ctr=c->r[12]; // 800D4C58
  if (true) { c->lr=0x800D4C60u; dispatch(c,c->ctr); } // 800D4C5C
  cmps(c,0,(int32_t)c->r[3],1); // 800D4C60
  if (!crb(c,2)) { goto L_800D4C7C; } // 800D4C64
  c->lr=0x800D4C6Cu; f_800DD3D0(c); // 800D4C68
  c->r[3]=c->r[3]+0x00000354u; // 800D4C6C
  c->lr=0x800D4C74u; f_8018EA30(c); // 800D4C70
  c->r[3]=0u+0xFFFFFFFFu; // 800D4C74
  goto L_800D4CA4; // 800D4C78
L_800D4C7C:;
  c->r[0]=R32(c->r[30]+0x00000044u); // 800D4C7C
  cmps(c,0,(int32_t)c->r[0],0); // 800D4C80
  if (!crb(c,2)) { goto L_800D4C94; } // 800D4C84
  c->r[0]=R8(c->r[30]+0x0000004Au); // 800D4C88
  cmps(c,0,(int32_t)c->r[0],0); // 800D4C8C
  if (crb(c,2)) { IRQCHK(c); goto L_800D4C48; } // 800D4C90
L_800D4C94:;
  c->lr=0x800D4C98u; f_800DD3D0(c); // 800D4C94
  c->r[3]=c->r[3]+0x00000354u; // 800D4C98
  c->lr=0x800D4CA0u; f_8018EA30(c); // 800D4C9C
  c->r[3]=0u+0x00000001u; // 800D4CA0
L_800D4CA4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D4CA4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D4CA8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D4CAC
  c->lr=c->r[0]; // 800D4CB0
  c->r[1]=c->r[1]+0x00000010u; // 800D4CB4
  return; // 800D4CB8
}

// fn_800D4CC0
void f_800D4CC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4CC0
  c->r[0]=c->lr; // 800D4CC4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D4CC8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D4CCC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D4CD0
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D4CD4
  c->r[29]=c->r[3]|c->r[3]; // 800D4CD8
  W32(c->r[1]+0x00000010u,c->r[28]); // 800D4CDC
  c->r[28]=c->r[4]|c->r[4]; // 800D4CE0
  c->lr=0x800D4CE8u; f_800DD3D0(c); // 800D4CE4
  c->r[3]=c->r[3]+0x00000354u; // 800D4CE8
  c->lr=0x800D4CF0u; f_8018E950(c); // 800D4CEC
  c->r[3]=c->r[29]|c->r[29]; // 800D4CF0
  c->lr=0x800D4CF8u; f_800D4E40(c); // 800D4CF4
  c->r[29]=R32(c->r[29]+0x000000C8u); // 800D4CF8
  c->r[30]=0u+0x80250000u; // 800D4CFC
  c->r[31]=0u+0x80250000u; // 800D4D00
  goto L_800D4D6C; // 800D4D04
L_800D4D08:;
  c->r[0]=R8(c->r[29]+0x00000036u); // 800D4D08
  cmps(c,0,(int32_t)c->r[0],0); // 800D4D0C
  if (crb(c,2)) { goto L_800D4D68; } // 800D4D10
  cmps(c,0,(int32_t)c->r[28],0); // 800D4D14
  if (crb(c,0)) { goto L_800D4D60; } // 800D4D18
  cmpu(c,0,c->r[28],0x0000007Fu); // 800D4D1C
  c->r[0]=0u+0x00000000u; // 800D4D20
  if (crb(c,1)) { goto L_800D4D2C; } // 800D4D24
  c->r[0]=0u+0x00000001u; // 800D4D28
L_800D4D2C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D4D2C
  if (!crb(c,2)) { goto L_800D4D54; } // 800D4D30
  c->r[6]=c->r[28]|c->r[28]; // 800D4D34
  c->r[3]=c->r[30]+0x00007388u; // 800D4D38
  c->r[5]=c->r[31]+0x000073E8u; // 800D4D3C
  c->r[4]=0u+0x0000014Au; // 800D4D40
  c->r[7]=0u+0x00000000u; // 800D4D44
  c->r[8]=0u+0x0000007Fu; // 800D4D48
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D4D4C
  c->lr=0x800D4D54u; f_800F1300(c); // 800D4D50
L_800D4D54:;
  c->r[3]=c->r[29]|c->r[29]; // 800D4D54
  c->r[4]=rotl(c->r[28],0)&0x000000FFu; // 800D4D58
  c->lr=0x800D4D60u; f_800CE4E0(c); // 800D4D5C
L_800D4D60:;
  c->r[3]=c->r[29]|c->r[29]; // 800D4D60
  c->lr=0x800D4D68u; f_800CD280(c); // 800D4D64
L_800D4D68:;
  c->r[29]=R32(c->r[29]+0x000000D4u); // 800D4D68
L_800D4D6C:;
  cmps(c,0,(int32_t)c->r[29],0); // 800D4D6C
  if (!crb(c,2)) { IRQCHK(c); goto L_800D4D08; } // 800D4D70
  c->lr=0x800D4D78u; f_800DD3D0(c); // 800D4D74
  c->r[3]=c->r[3]+0x00000354u; // 800D4D78
  c->lr=0x800D4D80u; f_8018EA30(c); // 800D4D7C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D4D80
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D4D84
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D4D88
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D4D8C
  c->r[28]=R32(c->r[1]+0x00000010u); // 800D4D90
  c->lr=c->r[0]; // 800D4D94
  c->r[1]=c->r[1]+0x00000020u; // 800D4D98
  return; // 800D4D9C
}

// fn_800D4DA0
void f_800D4DA0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4DA0
  c->r[0]=c->lr; // 800D4DA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D4DA8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D4DAC
  c->r[31]=c->r[3]|c->r[3]; // 800D4DB0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D4DB4
  c->r[30]=c->r[4]|c->r[4]; // 800D4DB8
  c->lr=0x800D4DC0u; f_800DD3D0(c); // 800D4DBC
  c->r[3]=c->r[3]+0x00000354u; // 800D4DC0
  c->lr=0x800D4DC8u; f_8018E950(c); // 800D4DC4
  c->r[31]=R32(c->r[31]+0x000000C8u); // 800D4DC8
  goto L_800D4E08; // 800D4DCC
L_800D4DD0:;
  c->r[0]=R8(c->r[31]+0x00000036u); // 800D4DD0
  cmps(c,0,(int32_t)c->r[0],0); // 800D4DD4
  if (crb(c,2)) { goto L_800D4E04; } // 800D4DD8
  c->r[3]=R8(c->r[31]+0x00000035u); // 800D4DDC
  c->r[0]=0u-c->r[3]; // 800D4DE0
  c->r[0]=c->r[0]|c->r[3]; // 800D4DE4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800D4DE8
  cmpu(c,0,c->r[30],c->r[0]); // 800D4DEC
  if (crb(c,2)) { goto L_800D4E04; } // 800D4DF0
  W8(c->r[31]+0x00000035u,c->r[30]); // 800D4DF4
  c->r[4]=c->r[30]|c->r[30]; // 800D4DF8
  c->r[3]=R32(c->r[31]+0x000000D0u); // 800D4DFC
  c->lr=0x800D4E04u; f_800E42E0(c); // 800D4E00
L_800D4E04:;
  c->r[31]=R32(c->r[31]+0x000000D4u); // 800D4E04
L_800D4E08:;
  cmps(c,0,(int32_t)c->r[31],0); // 800D4E08
  if (!crb(c,2)) { IRQCHK(c); goto L_800D4DD0; } // 800D4E0C
  c->lr=0x800D4E14u; f_800DD3D0(c); // 800D4E10
  c->r[3]=c->r[3]+0x00000354u; // 800D4E14
  c->lr=0x800D4E1Cu; f_8018EA30(c); // 800D4E18
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D4E1C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D4E20
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D4E24
  c->lr=c->r[0]; // 800D4E28
  c->r[1]=c->r[1]+0x00000010u; // 800D4E2C
  return; // 800D4E30
}

// fn_800D4E40
void f_800D4E40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFEF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4E40
  c->r[0]=c->lr; // 800D4E44
  W32(c->r[1]+0x00000114u,c->r[0]); // 800D4E48
  c->r[11]=c->r[1]+0x00000050u; // 800D4E4C
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[31]);} // 800D4E50
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,31,ea,0,0);} // 800D4E54
  {uint32_t ea=c->r[1]+0x000000F0u; WF64(ea,c->f[30]);} // 800D4E58
  {uint32_t ea=c->r[1]+0x000000F8u; psq_store(c,30,ea,0,0);} // 800D4E5C
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[29]);} // 800D4E60
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,29,ea,0,0);} // 800D4E64
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[28]);} // 800D4E68
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,28,ea,0,0);} // 800D4E6C
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[27]);} // 800D4E70
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,27,ea,0,0);} // 800D4E74
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[26]);} // 800D4E78
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,26,ea,0,0);} // 800D4E7C
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[25]);} // 800D4E80
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,25,ea,0,0);} // 800D4E84
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[24]);} // 800D4E88
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,24,ea,0,0);} // 800D4E8C
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[23]);} // 800D4E90
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,23,ea,0,0);} // 800D4E94
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[22]);} // 800D4E98
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,22,ea,0,0);} // 800D4E9C
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[21]);} // 800D4EA0
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,21,ea,0,0);} // 800D4EA4
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[20]);} // 800D4EA8
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,20,ea,0,0);} // 800D4EAC
  c->lr=0x800D4EB4u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D4EB0
  c->r[0]=0u+0x43300000u; // 800D4EB4
  W32(c->r[1]+0x00000018u,c->r[0]); // 800D4EB8
  c->r[29]=c->r[3]|c->r[3]; // 800D4EBC
  W32(c->r[1]+0x00000020u,c->r[0]); // 800D4EC0
  c->lr=0x800D4EC8u; f_800DD3D0(c); // 800D4EC4
  c->r[3]=c->r[3]+0x00000354u; // 800D4EC8
  c->lr=0x800D4ED0u; f_8018E950(c); // 800D4ECC
  c->r[0]=R8(c->r[29]+0x00000005u); // 800D4ED0
  cmps(c,0,(int32_t)c->r[0],0); // 800D4ED4
  if (!crb(c,2)) { goto L_800D4EEC; } // 800D4ED8
  c->lr=0x800D4EE0u; f_800DD3D0(c); // 800D4EDC
  c->r[3]=c->r[3]+0x00000354u; // 800D4EE0
  c->lr=0x800D4EE8u; f_8018EA30(c); // 800D4EE4
  goto L_800D5394; // 800D4EE8
L_800D4EEC:;
  c->r[0]=R32(c->r[29]+0x000000C8u); // 800D4EEC
  cmps(c,0,(int32_t)c->r[0],0); // 800D4EF0
  if (!crb(c,2)) { goto L_800D4F08; } // 800D4EF4
  c->lr=0x800D4EFCu; f_800DD3D0(c); // 800D4EF8
  c->r[3]=c->r[3]+0x00000354u; // 800D4EFC
  c->lr=0x800D4F04u; f_8018EA30(c); // 800D4F00
  goto L_800D5394; // 800D4F04
L_800D4F08:;
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000072u); // 800D4F08
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000074u); // 800D4F0C
  {uint32_t ea=c->r[2]+0xFFFF9B28u; c->f[29]=c->ps1[29]=RF32(ea);} // 800D4F10
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[4]); // 800D4F14
  if (crb(c,0)) { goto L_800D4F24; } // 800D4F18
  c->r[0]=R8(c->r[29]+0x00000071u); // 800D4F1C
  goto L_800D4F40; // 800D4F20
L_800D4F24:;
  c->r[5]=R8(c->r[29]+0x00000070u); // 800D4F24
  c->r[0]=R8(c->r[29]+0x00000071u); // 800D4F28
  c->r[0]=c->r[0]-c->r[5]; // 800D4F2C
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 800D4F30
  c->r[0]=divw((int32_t)c->r[0],(int32_t)c->r[4]); // 800D4F34
  c->r[0]=c->r[5]+c->r[0]; // 800D4F38
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 800D4F3C
L_800D4F40:;
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800D4F40
  c->r[0]=R8(c->r[29]+0x00000088u); // 800D4F44
  {uint32_t ea=c->r[2]+0xFFFF9B48u; c->f[3]=RF64(ea);} // 800D4F48
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=RF64(ea);} // 800D4F4C
  c->r[3]=R32(c->r[29]+0x000000C4u); // 800D4F50
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D4F54
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[3]); // 800D4F58
  c->r[0]=R8(c->r[3]+0x000000E8u); // 800D4F5C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=RF64(ea);} // 800D4F60
  {uint32_t ea=c->r[2]+0xFFFF9B30u; c->f[4]=c->ps1[4]=RF32(ea);} // 800D4F64
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[3]); // 800D4F68
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800D4F6C
  c->f[6]=c->ps1[6]=S(c->f[1]/c->f[4]); // 800D4F70
  {uint32_t ea=c->r[29]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D4F74
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=RF64(ea);} // 800D4F78
  {uint32_t ea=c->r[3]+0x00000004u; c->f[5]=c->ps1[5]=RF32(ea);} // 800D4F7C
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000084u); // 800D4F80
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000086u); // 800D4F84
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[3]); // 800D4F88
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[6]); // 800D4F8C
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[4]); // 800D4F90
  c->f[1]=c->ps1[1]=S(c->f[6]*c->f[6]); // 800D4F94
  c->f[3]=c->ps1[3]=S(c->f[3]/c->f[4]); // 800D4F98
  c->f[29]=c->ps1[29]=S(c->f[29]*c->f[1]); // 800D4F9C
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 800D4FA0
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[3]); // 800D4FA4
  c->f[29]=c->ps1[29]=S(c->f[29]*c->f[2]); // 800D4FA8
  c->f[29]=c->ps1[29]=S(c->f[29]*c->f[1]); // 800D4FAC
  c->f[29]=c->ps1[29]=S(c->f[29]*c->f[0]); // 800D4FB0
  c->f[29]=c->ps1[29]=S(c->f[29]*c->f[5]); // 800D4FB4
  if (crb(c,0)) { goto L_800D4FC8; } // 800D4FB8
  c->r[0]=R8(c->r[29]+0x00000083u); // 800D4FBC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800D4FC0
  goto L_800D4FEC; // 800D4FC4
L_800D4FC8:;
  c->r[7]=R8(c->r[29]+0x00000082u); // 800D4FC8
  c->r[0]=R8(c->r[29]+0x00000083u); // 800D4FCC
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[7]; // 800D4FD0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800D4FD4
  c->r[0]=c->r[0]-c->r[4]; // 800D4FD8
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[0]); // 800D4FDC
  c->r[0]=divw((int32_t)c->r[0],(int32_t)c->r[6]); // 800D4FE0
  c->r[0]=c->r[7]+c->r[0]; // 800D4FE4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800D4FE8
L_800D4FEC:;
  c->r[0]=c->r[0]^0x80000000u; // 800D4FEC
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800D4FF0
  c->r[0]=R8(c->r[29]+0x0000008Au); // 800D4FF4
  {uint32_t ea=c->r[2]+0xFFFF9B50u; c->f[1]=RF64(ea);} // 800D4FF8
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 800D4FFC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D5000
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 800D5004
  {uint32_t ea=c->r[2]+0xFFFF9B34u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D5008
  {uint32_t ea=c->r[2]+0xFFFF9B48u; c->f[3]=RF64(ea);} // 800D500C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[2]=RF64(ea);} // 800D5010
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 800D5014
  {uint32_t ea=c->r[2]+0xFFFF9B28u; c->f[27]=c->ps1[27]=RF32(ea);} // 800D5018
  {uint32_t ea=c->r[3]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 800D501C
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 800D5020
  {uint32_t ea=c->r[29]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D5024
  c->f[27]=c->ps1[27]=S(c->f[27]*c->f[4]); // 800D5028
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000078u); // 800D502C
  c->f[28]=c->ps1[28]=S(c->f[2]*c->f[1]); // 800D5030
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x0000007Au); // 800D5034
  c->f[27]=c->ps1[27]=S(c->f[27]*c->f[0]); // 800D5038
  {uint32_t ea=c->r[2]+0xFFFF9B2Cu; c->f[26]=c->ps1[26]=RF32(ea);} // 800D503C
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[6]); // 800D5040
  if (crb(c,0)) { goto L_800D5054; } // 800D5044
  c->r[0]=R8(c->r[29]+0x00000077u); // 800D5048
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800D504C
  goto L_800D5078; // 800D5050
L_800D5054:;
  c->r[7]=R8(c->r[29]+0x00000076u); // 800D5054
  c->r[0]=R8(c->r[29]+0x00000077u); // 800D5058
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[7]; // 800D505C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800D5060
  c->r[0]=c->r[0]-c->r[4]; // 800D5064
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[0]); // 800D5068
  c->r[0]=divw((int32_t)c->r[0],(int32_t)c->r[6]); // 800D506C
  c->r[0]=c->r[7]+c->r[0]; // 800D5070
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800D5074
L_800D5078:;
  c->r[0]=c->r[0]^0x80000000u; // 800D5078
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D507C
  {uint32_t ea=c->r[2]+0xFFFF9B50u; c->f[2]=RF64(ea);} // 800D5080
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=RF64(ea);} // 800D5084
  {uint32_t ea=c->r[2]+0xFFFF9B38u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D5088
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800D508C
  {uint32_t ea=c->r[2]+0xFFFF9B28u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D5090
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 800D5094
  fcmp(c,0,c->f[0],c->f[2]); // 800D5098
  if (!crb(c,1)) { goto L_800D50A4; } // 800D509C
  goto L_800D50B8; // 800D50A0
L_800D50A4:;
  {uint32_t ea=c->r[2]+0xFFFF9B3Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800D50A4
  fcmp(c,0,c->f[0],c->f[2]); // 800D50A8
  if (!crb(c,0)) { goto L_800D50B4; } // 800D50AC
  goto L_800D50B8; // 800D50B0
L_800D50B4:;
  c->f[2]=c->f[0]; // 800D50B4
L_800D50B8:;
  c->f[26]=c->ps1[26]=S(c->f[26]+c->f[2]); // 800D50B8
  {uint32_t ea=c->r[29]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D50BC
  {uint32_t ea=c->r[3]+0x000000D0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D50C0
  {uint32_t ea=c->r[29]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D50C4
  c->f[26]=c->ps1[26]=S(c->f[26]*c->f[1]); // 800D50C8
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D50CC
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x0000007Eu); // 800D50D0
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000080u); // 800D50D4
  c->f[26]=c->ps1[26]=S(c->f[26]*c->f[2]); // 800D50D8
  {uint32_t ea=c->r[2]+0xFFFF9B2Cu; c->f[25]=c->ps1[25]=RF32(ea);} // 800D50DC
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[6]); // 800D50E0
  c->f[26]=c->ps1[26]=S(c->f[26]+c->f[0]); // 800D50E4
  c->f[26]=c->ps1[26]=S(c->f[26]+c->f[1]); // 800D50E8
  if (crb(c,0)) { goto L_800D50FC; } // 800D50EC
  c->r[0]=R8(c->r[29]+0x0000007Du); // 800D50F0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800D50F4
  goto L_800D5120; // 800D50F8
L_800D50FC:;
  c->r[7]=R8(c->r[29]+0x0000007Cu); // 800D50FC
  c->r[0]=R8(c->r[29]+0x0000007Du); // 800D5100
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[7]; // 800D5104
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800D5108
  c->r[0]=c->r[0]-c->r[4]; // 800D510C
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[0]); // 800D5110
  c->r[0]=divw((int32_t)c->r[0],(int32_t)c->r[6]); // 800D5114
  c->r[0]=c->r[7]+c->r[0]; // 800D5118
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800D511C
L_800D5120:;
  c->r[0]=c->r[0]^0x80000000u; // 800D5120
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800D5124
  {uint32_t ea=c->r[2]+0xFFFF9B50u; c->f[2]=RF64(ea);} // 800D5128
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=RF64(ea);} // 800D512C
  {uint32_t ea=c->r[2]+0xFFFF9B38u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D5130
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800D5134
  {uint32_t ea=c->r[2]+0xFFFF9B40u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D5138
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 800D513C
  fcmp(c,0,c->f[0],c->f[2]); // 800D5140
  if (!crb(c,1)) { goto L_800D514C; } // 800D5144
  goto L_800D5160; // 800D5148
L_800D514C:;
  {uint32_t ea=c->r[2]+0xFFFF9B2Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800D514C
  fcmp(c,0,c->f[0],c->f[2]); // 800D5150
  if (!crb(c,0)) { goto L_800D515C; } // 800D5154
  goto L_800D5160; // 800D5158
L_800D515C:;
  c->f[2]=c->f[0]; // 800D515C
L_800D5160:;
  c->f[25]=c->ps1[25]=S(c->f[25]+c->f[2]); // 800D5160
  {uint32_t ea=c->r[29]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D5164
  {uint32_t ea=c->r[2]+0xFFFF9B2Cu; c->f[24]=c->ps1[24]=RF32(ea);} // 800D5168
  {uint32_t ea=c->r[29]+0x0000009Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D516C
  c->f[25]=c->ps1[25]=S(c->f[25]+c->f[1]); // 800D5170
  {uint32_t ea=c->r[3]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D5174
  c->f[24]=c->ps1[24]=S(c->f[24]+c->f[0]); // 800D5178
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 800D517C
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D5180
  cmps(c,0,(int32_t)c->r[0],0); // 800D5184
  c->f[25]=c->ps1[25]=S(c->f[25]+c->f[1]); // 800D5188
  c->r[31]=R8(c->r[29]+0x0000009Au); // 800D518C
  c->f[24]=c->ps1[24]=S(c->f[24]+c->f[0]); // 800D5190
  {uint32_t ea=c->r[29]+0x000000A0u; c->f[23]=c->ps1[23]=RF32(ea);} // 800D5194
  if (crb(c,2)) { goto L_800D51A4; } // 800D5198
  {uint32_t ea=c->r[3]+0x00000018u; c->f[23]=c->ps1[23]=RF32(ea);} // 800D519C
  c->r[31]=c->r[0]|c->r[0]; // 800D51A0
L_800D51A4:;
  c->r[0]=R8(c->r[29]+0x00000096u); // 800D51A4
  c->r[25]=c->r[1]+0x00000008u; // 800D51A8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D51AC
  c->r[27]=0u+0x00000000u; // 800D51B0
  {uint32_t ea=c->r[2]+0xFFFF9B2Cu; c->f[22]=c->ps1[22]=RF32(ea);} // 800D51B4
  {uint32_t ea=c->r[2]+0xFFFF9B48u; c->f[30]=RF64(ea);} // 800D51B8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=RF64(ea);} // 800D51BC
  c->f[21]=c->f[22]; // 800D51C0
  {uint32_t ea=c->r[2]+0xFFFF9B30u; c->f[31]=c->ps1[31]=RF32(ea);} // 800D51C4
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[30]); // 800D51C8
  {uint32_t ea=c->r[2]+0xFFFF9B28u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D51CC
  {uint32_t ea=c->r[3]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D51D0
  c->r[26]=R8(c->r[3]+0x0000001Du); // 800D51D4
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[31]); // 800D51D8
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 800D51DC
  c->f[22]=c->ps1[22]=S(c->f[22]+c->f[0]); // 800D51E0
  c->f[22]=c->ps1[22]=S(c->f[22]+c->f[2]); // 800D51E4
L_800D51E8:;
  c->r[3]=c->r[29]+c->r[27]; // 800D51E8
  {uint32_t ea=c->r[25]+0x00000000u; WF32(ea,c->f[21]);} // 800D51EC
  c->r[0]=R8(c->r[3]+0x00000097u); // 800D51F0
  c->r[4]=c->r[27]|c->r[27]; // 800D51F4
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800D51F8
  {uint32_t ea=c->r[25]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D51FC
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=RF64(ea);} // 800D5200
  c->r[3]=R32(c->r[29]+0x000000C4u); // 800D5204
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[30]); // 800D5208
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[31]); // 800D520C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800D5210
  {uint32_t ea=c->r[25]+0x00000000u; WF32(ea,c->f[0]);} // 800D5214
  c->lr=0x800D521Cu; f_800CA440(c); // 800D5218
  {uint32_t ea=c->r[25]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D521C
  c->r[27]=c->r[27]+0x00000001u; // 800D5220
  cmps(c,0,(int32_t)c->r[27],3); // 800D5224
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800D5228
  {uint32_t ea=c->r[25]+0x00000000u; WF32(ea,c->f[0]);} // 800D522C
  c->r[25]=c->r[25]+0x00000004u; // 800D5230
  if (crb(c,0)) { IRQCHK(c); goto L_800D51E8; } // 800D5234
  c->r[30]=R32(c->r[29]+0x000000C8u); // 800D5238
  c->r[27]=0u+0x80250000u; // 800D523C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[21]=c->ps1[21]=RF32(ea);} // 800D5240
  c->r[28]=0u+0x80250000u; // 800D5244
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[20]=c->ps1[20]=RF32(ea);} // 800D5248
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=c->ps1[31]=RF32(ea);} // 800D524C
  goto L_800D5380; // 800D5250
L_800D5254:;
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[29]);} // 800D5254
  c->f[1]=c->f[23]; // 800D5258
  c->r[3]=c->r[30]|c->r[30]; // 800D525C
  c->r[4]=c->r[31]|c->r[31]; // 800D5260
  {uint32_t ea=c->r[30]+0x00000080u; WF32(ea,c->f[28]);} // 800D5264
  {uint32_t ea=c->r[30]+0x00000044u; WF32(ea,c->f[27]);} // 800D5268
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[26]);} // 800D526C
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[25]);} // 800D5270
  {uint32_t ea=c->r[30]+0x00000050u; WF32(ea,c->f[24]);} // 800D5274
  c->lr=0x800D527Cu; f_800CD500(c); // 800D5278
  W8(c->r[30]+0x0000003Cu,c->r[26]); // 800D527C
  c->r[25]=c->r[30]|c->r[30]; // 800D5280
  c->r[24]=0u+0x00000000u; // 800D5284
  c->r[3]=R32(c->r[29]+0x000000C4u); // 800D5288
  c->r[0]=R32(c->r[3]+0x00000020u); // 800D528C
  W32(c->r[30]+0x00000058u,c->r[0]); // 800D5290
  c->r[3]=R32(c->r[29]+0x000000C4u); // 800D5294
  {uint32_t ea=c->r[3]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D5298
  {uint32_t ea=c->r[30]+0x0000005Cu; WF32(ea,c->f[0]);} // 800D529C
  {uint32_t ea=c->r[30]+0x00000060u; WF32(ea,c->f[22]);} // 800D52A0
  {uint32_t ea=c->r[30]+0x00000064u; WF32(ea,c->f[21]);} // 800D52A4
  {uint32_t ea=c->r[30]+0x00000068u; WF32(ea,c->f[20]);} // 800D52A8
  {uint32_t ea=c->r[30]+0x0000006Cu; WF32(ea,c->f[31]);} // 800D52AC
L_800D52B0:;
  c->r[3]=R32(c->r[29]+0x000000C4u); // 800D52B0
  c->r[4]=c->r[24]|c->r[24]; // 800D52B4
  c->lr=0x800D52BCu; f_800CA6C0(c); // 800D52B8
  c->f[30]=c->f[1]; // 800D52BC
  cmpu(c,0,c->r[24],0x00000003u); // 800D52C0
  c->r[0]=0u+0x00000000u; // 800D52C4
  if (crb(c,1)) { goto L_800D52D0; } // 800D52C8
  c->r[0]=0u+0x00000001u; // 800D52CC
L_800D52D0:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D52D0
  if (!crb(c,2)) { goto L_800D52F8; } // 800D52D4
  c->r[6]=c->r[24]|c->r[24]; // 800D52D8
  c->r[3]=c->r[27]+0x000076A0u; // 800D52DC
  c->r[5]=c->r[28]+0x00007658u; // 800D52E0
  c->r[4]=0u+0x000000BAu; // 800D52E4
  c->r[7]=0u+0x00000000u; // 800D52E8
  c->r[8]=0u+0x00000004u; // 800D52EC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D52F0
  c->lr=0x800D52F8u; f_800F1300(c); // 800D52F4
L_800D52F8:;
  c->r[24]=c->r[24]+0x00000001u; // 800D52F8
  {uint32_t ea=c->r[25]+0x00000070u; WF32(ea,c->f[30]);} // 800D52FC
  cmps(c,0,(int32_t)c->r[24],4); // 800D5300
  c->r[25]=c->r[25]+0x00000004u; // 800D5304
  if (crb(c,0)) { IRQCHK(c); goto L_800D52B0; } // 800D5308
  c->r[24]=0u+0x00000000u; // 800D530C
  c->r[25]=0u+0x00000000u; // 800D5310
  goto L_800D5334; // 800D5314
L_800D5318:;
  c->r[5]=c->r[3]+c->r[25]; // 800D5318
  c->r[3]=R32(c->r[30]+0x000000D0u); // 800D531C
  c->r[4]=c->r[24]|c->r[24]; // 800D5320
  c->r[5]=c->r[5]+0x00000050u; // 800D5324
  c->lr=0x800D532Cu; f_800E4820(c); // 800D5328
  c->r[25]=c->r[25]+0x00000018u; // 800D532C
  c->r[24]=c->r[24]+0x00000001u; // 800D5330
L_800D5334:;
  c->r[3]=R32(c->r[29]+0x000000C4u); // 800D5334
  c->r[0]=R32(c->r[3]+0x000000E4u); // 800D5338
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[0]); // 800D533C
  if (crb(c,0)) { IRQCHK(c); goto L_800D5318; } // 800D5340
  {uint32_t ea=c->r[29]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D5344
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 800D5348
  {uint32_t ea=c->r[29]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D534C
  {uint32_t ea=c->r[30]+0x00000020u; WF32(ea,c->f[0]);} // 800D5350
  c->r[0]=R32(c->r[29]+0x00000060u); // 800D5354
  W32(c->r[30]+0x00000024u,c->r[0]); // 800D5358
  c->r[0]=R8(c->r[29]+0x00000064u); // 800D535C
  W8(c->r[30]+0x00000028u,c->r[0]); // 800D5360
  c->r[0]=R16(c->r[29]+0x00000065u); // 800D5364
  W16(c->r[30]+0x00000029u,c->r[0]); // 800D5368
  c->r[0]=R8(c->r[29]+0x00000067u); // 800D536C
  W8(c->r[30]+0x0000002Bu,c->r[0]); // 800D5370
  c->r[0]=R8(c->r[29]+0x00000068u); // 800D5374
  W8(c->r[30]+0x00000034u,c->r[0]); // 800D5378
  c->r[30]=R32(c->r[30]+0x000000D4u); // 800D537C
L_800D5380:;
  cmps(c,0,(int32_t)c->r[30],0); // 800D5380
  if (!crb(c,2)) { IRQCHK(c); goto L_800D5254; } // 800D5384
  c->lr=0x800D538Cu; f_800DD3D0(c); // 800D5388
  c->r[3]=c->r[3]+0x00000354u; // 800D538C
  c->lr=0x800D5394u; f_8018EA30(c); // 800D5390
L_800D5394:;
  c->r[11]=c->r[1]+0x00000050u; // 800D5394
  {uint32_t ea=c->r[1]+0x00000108u; psq_load(c,31,ea,0,0);} // 800D5398
  {uint32_t ea=c->r[1]+0x00000100u; c->f[31]=RF64(ea);} // 800D539C
  {uint32_t ea=c->r[1]+0x000000F8u; psq_load(c,30,ea,0,0);} // 800D53A0
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[30]=RF64(ea);} // 800D53A4
  {uint32_t ea=c->r[1]+0x000000E8u; psq_load(c,29,ea,0,0);} // 800D53A8
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[29]=RF64(ea);} // 800D53AC
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,28,ea,0,0);} // 800D53B0
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[28]=RF64(ea);} // 800D53B4
  {uint32_t ea=c->r[1]+0x000000C8u; psq_load(c,27,ea,0,0);} // 800D53B8
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[27]=RF64(ea);} // 800D53BC
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,26,ea,0,0);} // 800D53C0
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[26]=RF64(ea);} // 800D53C4
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,25,ea,0,0);} // 800D53C8
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[25]=RF64(ea);} // 800D53CC
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,24,ea,0,0);} // 800D53D0
  {uint32_t ea=c->r[1]+0x00000090u; c->f[24]=RF64(ea);} // 800D53D4
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,23,ea,0,0);} // 800D53D8
  {uint32_t ea=c->r[1]+0x00000080u; c->f[23]=RF64(ea);} // 800D53DC
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,22,ea,0,0);} // 800D53E0
  {uint32_t ea=c->r[1]+0x00000070u; c->f[22]=RF64(ea);} // 800D53E4
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,21,ea,0,0);} // 800D53E8
  {uint32_t ea=c->r[1]+0x00000060u; c->f[21]=RF64(ea);} // 800D53EC
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,20,ea,0,0);} // 800D53F0
  {uint32_t ea=c->r[1]+0x00000050u; c->f[20]=RF64(ea);} // 800D53F4
  c->lr=0x800D53FCu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D53F8
  c->r[0]=R32(c->r[1]+0x00000114u); // 800D53FC
  c->lr=c->r[0]; // 800D5400
  c->r[1]=c->r[1]+0x00000110u; // 800D5404
  return; // 800D5408
}

// fn_800D5410
void f_800D5410(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5410
  c->r[0]=c->lr; // 800D5414
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D5418
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D541C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D5420
  c->r[30]=c->r[3]|c->r[3]; // 800D5424
  c->lr=0x800D542Cu; f_800DD3D0(c); // 800D5428
  c->r[3]=c->r[3]+0x00000354u; // 800D542C
  c->lr=0x800D5434u; f_8018E950(c); // 800D5430
  c->r[31]=R32(c->r[30]+0x000000C8u); // 800D5434
  goto L_800D5448; // 800D5438
L_800D543C:;
  c->r[3]=c->r[31]|c->r[31]; // 800D543C
  c->lr=0x800D5444u; f_800CD940(c); // 800D5440
  c->r[31]=R32(c->r[31]+0x000000D4u); // 800D5444
L_800D5448:;
  cmps(c,0,(int32_t)c->r[31],0); // 800D5448
  if (!crb(c,2)) { IRQCHK(c); goto L_800D543C; } // 800D544C
  c->r[0]=0u+0x00000000u; // 800D5450
  W32(c->r[30]+0x000000C8u,c->r[0]); // 800D5454
  c->lr=0x800D545Cu; f_800DD3D0(c); // 800D5458
  c->r[3]=c->r[3]+0x00000354u; // 800D545C
  c->lr=0x800D5464u; f_8018EA30(c); // 800D5460
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D5464
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D5468
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D546C
  c->lr=c->r[0]; // 800D5470
  c->r[1]=c->r[1]+0x00000010u; // 800D5474
  return; // 800D5478
}

// fn_800D5480
void f_800D5480(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5480
  c->r[0]=c->lr; // 800D5484
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D5488
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D548C
  c->r[31]=0u+0x80250000u; // 800D5490
  c->r[31]=c->r[31]+0x00007388u; // 800D5494
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D5498
  c->r[30]=c->r[4]|c->r[4]; // 800D549C
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D54A0
  c->r[29]=c->r[5]|c->r[5]; // 800D54A4
  W32(c->r[1]+0x00000010u,c->r[28]); // 800D54A8
  c->r[28]=c->r[3]|c->r[3]; // 800D54AC
  c->lr=0x800D54B4u; f_800DD3D0(c); // 800D54B0
  c->r[3]=c->r[3]+0x00000354u; // 800D54B4
  c->lr=0x800D54BCu; f_8018E950(c); // 800D54B8
  cmps(c,0,(int32_t)c->r[28],0); // 800D54BC
  if (!crb(c,2)) { goto L_800D54D8; } // 800D54C0
  c->r[3]=c->r[31]+0x00000000u; // 800D54C4
  c->r[5]=c->r[31]+0x000000A0u; // 800D54C8
  c->r[4]=0u+0x0000023Bu; // 800D54CC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D54D0
  c->lr=0x800D54D8u; f_800F1300(c); // 800D54D4
L_800D54D8:;
  cmps(c,0,(int32_t)c->r[29],0); // 800D54D8
  if (!crb(c,2)) { goto L_800D54F4; } // 800D54DC
  c->r[3]=c->r[31]+0x00000000u; // 800D54E0
  c->r[5]=c->r[31]+0x000000CCu; // 800D54E4
  c->r[4]=0u+0x0000023Cu; // 800D54E8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D54EC
  c->lr=0x800D54F4u; f_800F1300(c); // 800D54F0
L_800D54F4:;
  cmps(c,0,(int32_t)c->r[30],0); // 800D54F4
  if (crb(c,2)) { goto L_800D5504; } // 800D54F8
  cmps(c,0,(int32_t)c->r[30],2); // 800D54FC
  if (!crb(c,2)) { goto L_800D550C; } // 800D5500
L_800D5504:;
  c->r[3]=c->r[28]|c->r[28]; // 800D5504
  c->lr=0x800D550Cu; f_800CD940(c); // 800D5508
L_800D550C:;
  c->r[3]=R32(c->r[29]+0x000000C4u); // 800D550C
  cmps(c,0,(int32_t)c->r[3],0); // 800D5510
  if (crb(c,2)) { goto L_800D552C; } // 800D5514
  c->r[12]=R32(c->r[3]+0x00000000u); // 800D5518
  c->r[4]=c->r[28]|c->r[28]; // 800D551C
  c->r[12]=R32(c->r[12]+0x00000058u); // 800D5520
  c->ctr=c->r[12]; // 800D5524
  if (true) { c->lr=0x800D552Cu; dispatch(c,c->ctr); } // 800D5528
L_800D552C:;
  c->r[30]=R32(c->r[29]+0x000000C8u); // 800D552C
  cmpu(c,0,c->r[30],c->r[28]); // 800D5530
  if (!crb(c,2)) { goto L_800D5550; } // 800D5534
  c->r[0]=R32(c->r[28]+0x000000D4u); // 800D5538
  W32(c->r[29]+0x000000C8u,c->r[0]); // 800D553C
  c->lr=0x800D5544u; f_800DD3D0(c); // 800D5540
  c->r[3]=c->r[3]+0x00000354u; // 800D5544
  c->lr=0x800D554Cu; f_8018EA30(c); // 800D5548
  goto L_800D55C0; // 800D554C
L_800D5550:;
  cmps(c,0,(int32_t)c->r[30],0); // 800D5550
  if (!crb(c,2)) { goto L_800D5594; } // 800D5554
  c->r[3]=c->r[31]+0x00000000u; // 800D5558
  c->r[5]=c->r[31]+0x000000F8u; // 800D555C
  c->r[4]=0u+0x00000251u; // 800D5560
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D5564
  c->lr=0x800D556Cu; f_800F1300(c); // 800D5568
  goto L_800D5594; // 800D556C
L_800D5570:;
  cmpu(c,0,c->r[0],c->r[28]); // 800D5570
  if (!crb(c,2)) { goto L_800D5590; } // 800D5574
  c->r[0]=R32(c->r[28]+0x000000D4u); // 800D5578
  W32(c->r[30]+0x000000D4u,c->r[0]); // 800D557C
  c->lr=0x800D5584u; f_800DD3D0(c); // 800D5580
  c->r[3]=c->r[3]+0x00000354u; // 800D5584
  c->lr=0x800D558Cu; f_8018EA30(c); // 800D5588
  goto L_800D55C0; // 800D558C
L_800D5590:;
  c->r[30]=c->r[0]|c->r[0]; // 800D5590
L_800D5594:;
  c->r[0]=R32(c->r[30]+0x000000D4u); // 800D5594
  cmps(c,0,(int32_t)c->r[0],0); // 800D5598
  if (!crb(c,2)) { IRQCHK(c); goto L_800D5570; } // 800D559C
  c->r[3]=c->r[31]+0x00000000u; // 800D55A0
  c->r[5]=c->r[31]+0x00000120u; // 800D55A4
  c->r[4]=0u+0x0000025Au; // 800D55A8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D55AC
  c->lr=0x800D55B4u; f_800F1300(c); // 800D55B0
  c->lr=0x800D55B8u; f_800DD3D0(c); // 800D55B4
  c->r[3]=c->r[3]+0x00000354u; // 800D55B8
  c->lr=0x800D55C0u; f_8018EA30(c); // 800D55BC
L_800D55C0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D55C0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D55C4
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D55C8
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D55CC
  c->r[28]=R32(c->r[1]+0x00000010u); // 800D55D0
  c->lr=c->r[0]; // 800D55D4
  c->r[1]=c->r[1]+0x00000020u; // 800D55D8
  return; // 800D55DC
}

// fn_800D55E0
void f_800D55E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D55E0
  c->r[0]=c->lr; // 800D55E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D55E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D55EC
  c->r[31]=c->r[4]|c->r[4]; // 800D55F0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D55F4
  c->r[30]=c->r[3]|c->r[3]; // 800D55F8
  c->lr=0x800D5600u; f_800DD3D0(c); // 800D55FC
  c->r[3]=c->r[3]+0x00000354u; // 800D5600
  c->lr=0x800D5608u; f_8018E950(c); // 800D5604
  cmps(c,0,(int32_t)c->r[31],0); // 800D5608
  if (crb(c,2)) { goto L_800D562C; } // 800D560C
  cmps(c,0,(int32_t)c->r[31],3); // 800D5610
  if (crb(c,2)) { goto L_800D5638; } // 800D5614
  cmps(c,0,(int32_t)c->r[31],2); // 800D5618
  if (crb(c,2)) { goto L_800D5688; } // 800D561C
  cmps(c,0,(int32_t)c->r[31],1); // 800D5620
  if (crb(c,2)) { goto L_800D5718; } // 800D5624
  goto L_800D5720; // 800D5628
L_800D562C:;
  c->r[0]=0u+0x00000000u; // 800D562C
  W8(c->r[30]+0x00000048u,c->r[0]); // 800D5630
  goto L_800D5720; // 800D5634
L_800D5638:;
  c->lr=0x800D563Cu; f_800DD3D0(c); // 800D5638
  c->r[3]=c->r[3]+0x00000354u; // 800D563C
  c->lr=0x800D5644u; f_8018E950(c); // 800D5640
  c->r[31]=R32(c->r[30]+0x000000C8u); // 800D5644
  goto L_800D5660; // 800D5648
L_800D564C:;
  c->r[3]=c->r[31]|c->r[31]; // 800D564C
  c->lr=0x800D5654u; f_800CD940(c); // 800D5650
  c->r[3]=c->r[31]|c->r[31]; // 800D5654
  c->lr=0x800D565Cu; f_800CD370(c); // 800D5658
  c->r[31]=R32(c->r[31]+0x000000D4u); // 800D565C
L_800D5660:;
  cmps(c,0,(int32_t)c->r[31],0); // 800D5660
  if (!crb(c,2)) { IRQCHK(c); goto L_800D564C; } // 800D5664
  c->r[0]=0u+0x00000000u; // 800D5668
  W32(c->r[30]+0x000000C8u,c->r[0]); // 800D566C
  c->lr=0x800D5674u; f_800DD3D0(c); // 800D5670
  c->r[3]=c->r[3]+0x00000354u; // 800D5674
  c->lr=0x800D567Cu; f_8018EA30(c); // 800D5678
  c->r[0]=0u+0x00000001u; // 800D567C
  W8(c->r[30]+0x00000048u,c->r[0]); // 800D5680
  goto L_800D5720; // 800D5684
L_800D5688:;
  c->lr=0x800D568Cu; f_800DD3D0(c); // 800D5688
  c->r[3]=c->r[3]+0x00000354u; // 800D568C
  c->lr=0x800D5694u; f_8018E950(c); // 800D5690
  c->r[3]=c->r[30]|c->r[30]; // 800D5694
  c->lr=0x800D569Cu; f_800D4E40(c); // 800D5698
  c->r[31]=R32(c->r[30]+0x000000C8u); // 800D569C
  goto L_800D56BC; // 800D56A0
L_800D56A4:;
  c->r[0]=R8(c->r[31]+0x00000036u); // 800D56A4
  cmps(c,0,(int32_t)c->r[0],0); // 800D56A8
  if (crb(c,2)) { goto L_800D56B8; } // 800D56AC
  c->r[3]=c->r[31]|c->r[31]; // 800D56B0
  c->lr=0x800D56B8u; f_800CD280(c); // 800D56B4
L_800D56B8:;
  c->r[31]=R32(c->r[31]+0x000000D4u); // 800D56B8
L_800D56BC:;
  cmps(c,0,(int32_t)c->r[31],0); // 800D56BC
  if (!crb(c,2)) { IRQCHK(c); goto L_800D56A4; } // 800D56C0
  c->lr=0x800D56C8u; f_800DD3D0(c); // 800D56C4
  c->r[3]=c->r[3]+0x00000354u; // 800D56C8
  c->lr=0x800D56D0u; f_8018EA30(c); // 800D56CC
  c->lr=0x800D56D4u; f_800DD3D0(c); // 800D56D0
  c->r[3]=c->r[3]+0x00000354u; // 800D56D4
  c->lr=0x800D56DCu; f_8018E950(c); // 800D56D8
  c->r[31]=R32(c->r[30]+0x000000C8u); // 800D56DC
  goto L_800D56F0; // 800D56E0
L_800D56E4:;
  c->r[3]=c->r[31]|c->r[31]; // 800D56E4
  c->lr=0x800D56ECu; f_800CD940(c); // 800D56E8
  c->r[31]=R32(c->r[31]+0x000000D4u); // 800D56EC
L_800D56F0:;
  cmps(c,0,(int32_t)c->r[31],0); // 800D56F0
  if (!crb(c,2)) { IRQCHK(c); goto L_800D56E4; } // 800D56F4
  c->r[0]=0u+0x00000000u; // 800D56F8
  W32(c->r[30]+0x000000C8u,c->r[0]); // 800D56FC
  c->lr=0x800D5704u; f_800DD3D0(c); // 800D5700
  c->r[3]=c->r[3]+0x00000354u; // 800D5704
  c->lr=0x800D570Cu; f_8018EA30(c); // 800D5708
  c->r[0]=0u+0x00000001u; // 800D570C
  W8(c->r[30]+0x00000048u,c->r[0]); // 800D5710
  goto L_800D5720; // 800D5714
L_800D5718:;
  c->r[0]=0u+0x00000001u; // 800D5718
  W8(c->r[30]+0x00000048u,c->r[0]); // 800D571C
L_800D5720:;
  c->lr=0x800D5724u; f_800DD3D0(c); // 800D5720
  c->r[3]=c->r[3]+0x00000354u; // 800D5724
  c->lr=0x800D572Cu; f_8018EA30(c); // 800D5728
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D572C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D5730
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D5734
  c->lr=c->r[0]; // 800D5738
  c->r[1]=c->r[1]+0x00000010u; // 800D573C
  return; // 800D5740
}

// fn_800D5750
void f_800D5750(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5750
  c->r[0]=c->lr; // 800D5754
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D5758
  c->r[11]=c->r[1]+0x00000030u; // 800D575C
  c->lr=0x800D5764u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D5760
  c->r[26]=c->r[3]|c->r[3]; // 800D5764
  c->r[25]=c->r[4]|c->r[4]; // 800D5768
  c->r[24]=c->r[5]|c->r[5]; // 800D576C
  c->lr=0x800D5774u; f_800DD3D0(c); // 800D5770
  c->r[3]=c->r[3]+0x00000354u; // 800D5774
  c->lr=0x800D577Cu; f_8018E950(c); // 800D5778
  c->r[3]=0u+0x55550000u; // 800D577C
  c->r[0]=0u-c->r[25]; // 800D5780
  c->r[4]=c->r[24]+0x00000002u; // 800D5784
  W8(c->r[26]+0x00000049u,c->r[25]); // 800D5788
  c->r[3]=c->r[3]+0x00005556u; // 800D578C
  c->r[31]=R32(c->r[26]+0x000000C8u); // 800D5790
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[4])>>32); // 800D5794
  c->r[28]=c->r[0]|c->r[25]; // 800D5798
  c->r[25]=0u+0x80250000u; // 800D579C
  c->r[26]=0u+0x80250000u; // 800D57A0
  c->r[27]=0u+0x00010000u; // 800D57A4
  c->r[29]=0u+0x000000FFu; // 800D57A8
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 800D57AC
  c->r[30]=0u+0x00000000u; // 800D57B0
  c->r[24]=c->r[3]+c->r[0]; // 800D57B4
  goto L_800D5844; // 800D57B8
L_800D57BC:;
  cmpu(c,0,c->r[24],0x0000FFFFu); // 800D57BC
  c->r[0]=0u+0x00000000u; // 800D57C0
  if (crb(c,1)) { goto L_800D57CC; } // 800D57C4
  c->r[0]=0u+0x00000001u; // 800D57C8
L_800D57CC:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D57CC
  if (!crb(c,2)) { goto L_800D57F4; } // 800D57D0
  c->r[6]=c->r[24]|c->r[24]; // 800D57D4
  c->r[3]=c->r[25]+0x0000764Cu; // 800D57D8
  c->r[5]=c->r[26]+0x00007608u; // 800D57DC
  c->r[8]=c->r[27]+0xFFFFFFFFu; // 800D57E0
  c->r[4]=0u+0x0000008Au; // 800D57E4
  c->r[7]=0u+0x00000000u; // 800D57E8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D57EC
  c->lr=0x800D57F4u; f_800F1300(c); // 800D57F0
L_800D57F4:;
  c->r[4]=R16(c->r[31]+0x000000A2u); // 800D57F4
  c->r[5]=R16(c->r[31]+0x000000A4u); // 800D57F8
  cmpu(c,0,c->r[5],c->r[4]); // 800D57FC
  if (crb(c,0)) { goto L_800D580C; } // 800D5800
  c->r[0]=R8(c->r[31]+0x000000A1u); // 800D5804
  goto L_800D5828; // 800D5808
L_800D580C:;
  c->r[3]=R8(c->r[31]+0x000000A0u); // 800D580C
  c->r[0]=R8(c->r[31]+0x000000A1u); // 800D5810
  c->r[0]=c->r[0]-c->r[3]; // 800D5814
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[0]); // 800D5818
  c->r[0]=divw((int32_t)c->r[0],(int32_t)c->r[4]); // 800D581C
  c->r[0]=c->r[3]+c->r[0]; // 800D5820
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 800D5824
L_800D5828:;
  W8(c->r[31]+0x000000A0u,c->r[0]); // 800D5828
  c->r[0]=sraw(c,c->r[28],31); // 800D582C
  c->r[0]=c->r[29]&~c->r[0]; // 800D5830
  W8(c->r[31]+0x000000A1u,c->r[0]); // 800D5834
  W16(c->r[31]+0x000000A2u,c->r[24]); // 800D5838
  W16(c->r[31]+0x000000A4u,c->r[30]); // 800D583C
  c->r[31]=R32(c->r[31]+0x000000D4u); // 800D5840
L_800D5844:;
  cmps(c,0,(int32_t)c->r[31],0); // 800D5844
  if (!crb(c,2)) { IRQCHK(c); goto L_800D57BC; } // 800D5848
  c->lr=0x800D5850u; f_800DD3D0(c); // 800D584C
  c->r[3]=c->r[3]+0x00000354u; // 800D5850
  c->lr=0x800D5858u; f_8018EA30(c); // 800D5854
  c->r[11]=c->r[1]+0x00000030u; // 800D5858
  c->lr=0x800D5860u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D585C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800D5860
  c->lr=c->r[0]; // 800D5864
  c->r[1]=c->r[1]+0x00000030u; // 800D5868
  return; // 800D586C
}

// fn_800D5870
void f_800D5870(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 800D5870
  return; // 800D5874
}

// fn_800D5880
void f_800D5880(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5880
  c->r[0]=c->lr; // 800D5884
  {uint32_t ea=c->r[2]+0xFFFF9B2Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D5888
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D588C
  fcmp(c,0,c->f[1],c->f[0]); // 800D5890
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 800D5894
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 800D5898
  c->f[31]=c->f[1]; // 800D589C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D58A0
  c->r[31]=c->r[3]|c->r[3]; // 800D58A4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800D58A8
  if (crb(c,2)) { goto L_800D58CC; } // 800D58AC
  c->r[3]=0u+0x80250000u; // 800D58B0
  c->r[5]=0u+0x80250000u; // 800D58B4
  c->r[3]=c->r[3]+0x00007388u; // 800D58B8
  c->r[4]=0u+0x0000028Du; // 800D58BC
  c->r[5]=c->r[5]+0x000074C4u; // 800D58C0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D58C4
  c->lr=0x800D58CCu; f_800F1300(c); // 800D58C8
L_800D58CC:;
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[31]);} // 800D58CC
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 800D58D0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 800D58D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D58D8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D58DC
  c->lr=c->r[0]; // 800D58E0
  c->r[1]=c->r[1]+0x00000020u; // 800D58E4
  return; // 800D58E8
}

// fn_800D58F0
void f_800D58F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[1]);} // 800D58F0
  return; // 800D58F4
}

// fn_800D5900
void f_800D5900(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[1]);} // 800D5900
  return; // 800D5904
}

// fn_800D5910
void f_800D5910(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[1]);} // 800D5910
  return; // 800D5914
}

// fn_800D5920
void f_800D5920(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x0000009Cu; WF32(ea,c->f[1]);} // 800D5920
  return; // 800D5924
}

// fn_800D5930
void f_800D5930(Ctx* __restrict c) {
  W8(c->r[3]+0x0000009Au,c->r[4]); // 800D5930
  {uint32_t ea=c->r[3]+0x000000A0u; WF32(ea,c->f[1]);} // 800D5934
  return; // 800D5938
}

// fn_800D5940
void f_800D5940(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000058u; WF32(ea,c->f[1]);} // 800D5940
  return; // 800D5944
}

// fn_800D5950
void f_800D5950(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x0000005Cu; WF32(ea,c->f[1]);} // 800D5950
  return; // 800D5954
}

// fn_800D5960
void f_800D5960(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5960
  c->r[0]=c->lr; // 800D5964
  cmpu(c,0,c->r[4],0x00000010u); // 800D5968
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D596C
  c->r[0]=0u+0x00000000u; // 800D5970
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D5974
  c->r[31]=c->r[4]|c->r[4]; // 800D5978
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D597C
  c->r[30]=c->r[3]|c->r[3]; // 800D5980
  if (crb(c,1)) { goto L_800D598C; } // 800D5984
  c->r[0]=0u+0x00000001u; // 800D5988
L_800D598C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D598C
  if (!crb(c,2)) { goto L_800D59BC; } // 800D5990
  c->r[3]=0u+0x80250000u; // 800D5994
  c->r[5]=0u+0x80250000u; // 800D5998
  c->r[6]=c->r[31]|c->r[31]; // 800D599C
  c->r[4]=0u+0x000002E3u; // 800D59A0
  c->r[3]=c->r[3]+0x00007388u; // 800D59A4
  c->r[5]=c->r[5]+0x00007524u; // 800D59A8
  c->r[7]=0u+0x00000000u; // 800D59AC
  c->r[8]=0u+0x00000010u; // 800D59B0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D59B4
  c->lr=0x800D59BCu; f_800F1300(c); // 800D59B8
L_800D59BC:;
  cmps(c,0,(int32_t)c->r[31],16); // 800D59BC
  if (!crb(c,0)) { goto L_800D59D4; } // 800D59C0
  c->r[0]=rotl(c->r[31],1)&0xFFFFFFFEu; // 800D59C4
  c->r[3]=c->r[30]+c->r[0]; // 800D59C8
  c->r[3]=c->r[3]+0x000000A4u; // 800D59CC
  goto L_800D59D8; // 800D59D0
L_800D59D4:;
  c->r[3]=0u+0x00000000u; // 800D59D4
L_800D59D8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D59D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D59DC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D59E0
  c->lr=c->r[0]; // 800D59E4
  c->r[1]=c->r[1]+0x00000010u; // 800D59E8
  return; // 800D59EC
}

// fn_800D59F0
void f_800D59F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D59F0
  c->r[0]=c->lr; // 800D59F4
  W32(c->r[1]+0x00000084u,c->r[0]); // 800D59F8
  c->r[11]=c->r[1]+0x00000070u; // 800D59FC
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[31]);} // 800D5A00
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,31,ea,0,0);} // 800D5A04
  c->lr=0x800D5A0Cu; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D5A08
  c->r[0]=0u+0x43300000u; // 800D5A0C
  c->r[30]=0u+0x80250000u; // 800D5A10
  W32(c->r[1]+0x00000030u,c->r[0]); // 800D5A14
  c->r[24]=c->r[3]|c->r[3]; // 800D5A18
  c->r[25]=c->r[4]|c->r[4]; // 800D5A1C
  c->r[26]=c->r[5]|c->r[5]; // 800D5A20
  W32(c->r[1]+0x00000038u,c->r[0]); // 800D5A24
  c->r[27]=c->r[6]|c->r[6]; // 800D5A28
  c->r[28]=c->r[7]|c->r[7]; // 800D5A2C
  c->r[30]=c->r[30]+0x00007388u; // 800D5A30
  c->lr=0x800D5A38u; f_800DD3D0(c); // 800D5A34
  c->r[3]=c->r[3]+0x00000354u; // 800D5A38
  c->lr=0x800D5A40u; f_8018E950(c); // 800D5A3C
  cmpu(c,0,c->r[25],0x0000007Fu); // 800D5A40
  c->r[0]=0u+0x00000000u; // 800D5A44
  if (crb(c,1)) { goto L_800D5A50; } // 800D5A48
  c->r[0]=0u+0x00000001u; // 800D5A4C
L_800D5A50:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D5A50
  if (!crb(c,2)) { goto L_800D5A78; } // 800D5A54
  c->r[6]=c->r[25]|c->r[25]; // 800D5A58
  c->r[3]=c->r[30]+0x00000000u; // 800D5A5C
  c->r[5]=c->r[30]+0x000001D8u; // 800D5A60
  c->r[4]=0u+0x00000304u; // 800D5A64
  c->r[7]=0u+0x00000000u; // 800D5A68
  c->r[8]=0u+0x0000007Fu; // 800D5A6C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D5A70
  c->lr=0x800D5A78u; f_800F1300(c); // 800D5A74
L_800D5A78:;
  cmpu(c,0,c->r[26],0x0000007Fu); // 800D5A78
  c->r[0]=0u+0x00000000u; // 800D5A7C
  if (crb(c,1)) { goto L_800D5A88; } // 800D5A80
  c->r[0]=0u+0x00000001u; // 800D5A84
L_800D5A88:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D5A88
  if (!crb(c,2)) { goto L_800D5AB0; } // 800D5A8C
  c->r[6]=c->r[26]|c->r[26]; // 800D5A90
  c->r[3]=c->r[30]+0x00000000u; // 800D5A94
  c->r[5]=c->r[30]+0x00000210u; // 800D5A98
  c->r[4]=0u+0x00000305u; // 800D5A9C
  c->r[7]=0u+0x00000000u; // 800D5AA0
  c->r[8]=0u+0x0000007Fu; // 800D5AA4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D5AA8
  c->lr=0x800D5AB0u; f_800F1300(c); // 800D5AAC
L_800D5AB0:;
  c->r[0]=R8(c->r[24]+0x00000089u); // 800D5AB0
  c->r[3]=0u+0x81020000u; // 800D5AB4
  c->r[3]=c->r[3]+0x00000409u; // 800D5AB8
  cmps(c,0,(int32_t)c->r[28],0); // 800D5ABC
  c->r[0]=(uint32_t)((int32_t)c->r[26]*(int32_t)c->r[0]); // 800D5AC0
  c->r[31]=R32(c->r[24]+0x000000C4u); // 800D5AC4
  c->r[29]=0u+0x00000000u; // 800D5AC8
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 800D5ACC
  c->r[0]=c->r[3]+c->r[0]; // 800D5AD0
  c->r[0]=sraw(c,c->r[0],6); // 800D5AD4
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800D5AD8
  c->r[26]=c->r[0]+c->r[3]; // 800D5ADC
  if (crb(c,2)) { goto L_800D5B1C; } // 800D5AE0
  c->r[29]=R32(c->r[24]+0x000000C8u); // 800D5AE4
  cmps(c,0,(int32_t)c->r[29],0); // 800D5AE8
  if (crb(c,2)) { goto L_800D5B1C; } // 800D5AEC
  c->r[0]=c->r[26]^0x80000000u; // 800D5AF0
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D5AF4
  c->r[0]=rotl(c->r[25],0)&0x000000FFu; // 800D5AF8
  {uint32_t ea=c->r[2]+0xFFFF9B50u; c->f[2]=RF64(ea);} // 800D5AFC
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=RF64(ea);} // 800D5B00
  {uint32_t ea=c->r[2]+0xFFFF9B30u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D5B04
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800D5B08
  W32(c->r[29]+0x000000A8u,c->r[0]); // 800D5B0C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 800D5B10
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 800D5B14
  {uint32_t ea=c->r[29]+0x00000090u; WF32(ea,c->f[0]);} // 800D5B18
L_800D5B1C:;
  c->r[0]=R8(c->r[24]+0x00000027u); // 800D5B1C
  cmps(c,0,(int32_t)c->r[0],0); // 800D5B20
  if (crb(c,2)) { goto L_800D5B80; } // 800D5B24
  c->r[29]=R32(c->r[24]+0x000000C8u); // 800D5B28
  cmps(c,0,(int32_t)c->r[29],0); // 800D5B2C
  if (crb(c,2)) { goto L_800D5B80; } // 800D5B30
  c->r[0]=R32(c->r[29]+0x00000000u); // 800D5B34
  cmps(c,0,(int32_t)c->r[0],4); // 800D5B38
  if (!crb(c,2)) { goto L_800D5B50; } // 800D5B3C
  c->r[3]=c->r[29]|c->r[29]; // 800D5B40
  c->lr=0x800D5B48u; f_800CD370(c); // 800D5B44
  c->r[29]=0u+0x00000000u; // 800D5B48
  goto L_800D5B80; // 800D5B4C
L_800D5B50:;
  c->r[0]=c->r[26]^0x80000000u; // 800D5B50
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 800D5B54
  c->r[0]=rotl(c->r[25],0)&0x000000FFu; // 800D5B58
  {uint32_t ea=c->r[2]+0xFFFF9B50u; c->f[2]=RF64(ea);} // 800D5B5C
  {uint32_t ea=c->r[1]+0x00000038u; c->f[1]=RF64(ea);} // 800D5B60
  {uint32_t ea=c->r[2]+0xFFFF9B30u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D5B64
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800D5B68
  W32(c->r[29]+0x000000A8u,c->r[0]); // 800D5B6C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 800D5B70
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 800D5B74
  {uint32_t ea=c->r[29]+0x00000090u; WF32(ea,c->f[0]);} // 800D5B78
  W32(c->r[29]+0x000000B0u,c->r[27]); // 800D5B7C
L_800D5B80:;
  cmps(c,0,(int32_t)c->r[29],0); // 800D5B80
  if (!crb(c,2)) { goto L_800D5CAC; } // 800D5B84
  c->r[3]=0u+0x80220000u; // 800D5B88
  {uint32_t ea=c->r[3]+0x00000F48u; c->r[11]=R32(ea); c->r[3]=ea;} // 800D5B8C
  W32(c->r[1]+0x00000008u,c->r[11]); // 800D5B90
  cmps(c,0,(int32_t)c->r[28],0); // 800D5B94
  c->r[10]=R32(c->r[3]+0x00000004u); // 800D5B98
  c->r[0]=0u+0xFFFFFFFFu; // 800D5B9C
  c->r[9]=R32(c->r[3]+0x00000008u); // 800D5BA0
  c->r[8]=R32(c->r[3]+0x0000000Cu); // 800D5BA4
  c->r[7]=R32(c->r[3]+0x00000010u); // 800D5BA8
  c->r[6]=R32(c->r[3]+0x00000014u); // 800D5BAC
  c->r[5]=R32(c->r[3]+0x00000018u); // 800D5BB0
  c->r[4]=R32(c->r[3]+0x0000001Cu); // 800D5BB4
  c->r[3]=R32(c->r[3]+0x00000020u); // 800D5BB8
  W32(c->r[1]+0x0000000Cu,c->r[10]); // 800D5BBC
  W32(c->r[1]+0x00000010u,c->r[9]); // 800D5BC0
  W32(c->r[1]+0x00000014u,c->r[8]); // 800D5BC4
  W32(c->r[1]+0x00000018u,c->r[7]); // 800D5BC8
  W32(c->r[1]+0x0000001Cu,c->r[6]); // 800D5BCC
  W32(c->r[1]+0x00000020u,c->r[5]); // 800D5BD0
  W32(c->r[1]+0x00000024u,c->r[4]); // 800D5BD4
  W32(c->r[1]+0x00000028u,c->r[3]); // 800D5BD8
  c->r[3]=R32(c->r[24]+0x00000054u); // 800D5BDC
  W32(c->r[1]+0x00000008u,c->r[3]); // 800D5BE0
  W32(c->r[1]+0x0000000Cu,c->r[25]); // 800D5BE4
  W32(c->r[1]+0x00000010u,c->r[26]); // 800D5BE8
  if (!crb(c,2)) { goto L_800D5BF4; } // 800D5BEC
  c->r[0]=c->r[27]|c->r[27]; // 800D5BF0
L_800D5BF4:;
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D5BF4
  c->r[5]=c->r[1]+0x00000008u; // 800D5BF8
  c->r[0]=R8(c->r[24]+0x0000008Bu); // 800D5BFC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800D5C00
  W32(c->r[1]+0x00000018u,c->r[0]); // 800D5C04
  c->r[3]=R8(c->r[31]+0x000000E9u); // 800D5C08
  c->r[0]=R8(c->r[24]+0x0000008Du); // 800D5C0C
  c->r[0]=c->r[3]+c->r[0]; // 800D5C10
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800D5C14
  c->r[3]=R32(c->r[24]+0x000000C4u); // 800D5C18
  c->r[0]=R32(c->r[3]+0x000000E4u); // 800D5C1C
  W32(c->r[1]+0x00000020u,c->r[0]); // 800D5C20
  W32(c->r[1]+0x00000028u,c->r[24]); // 800D5C24
  c->r[4]=R32(c->r[24]+0x00000050u); // 800D5C28
  c->lr=0x800D5C30u; f_800D3AF0(c); // 800D5C2C
  cmps(c,0,(int32_t)c->r[3],0); // 800D5C30
  c->r[29]=c->r[3]|c->r[3]; // 800D5C34
  if (!crb(c,2)) { goto L_800D5C50; } // 800D5C38
  c->lr=0x800D5C40u; f_800DD3D0(c); // 800D5C3C
  c->r[3]=c->r[3]+0x00000354u; // 800D5C40
  c->lr=0x800D5C48u; f_8018EA30(c); // 800D5C44
  c->r[3]=0u+0x00000000u; // 800D5C48
  goto L_800D5E84; // 800D5C4C
L_800D5C50:;
  c->r[0]=R32(c->r[3]+0x000000BCu); // 800D5C50
  cmps(c,0,(int32_t)c->r[0],0); // 800D5C54
  if (!crb(c,1)) { goto L_800D5C88; } // 800D5C58
  c->r[26]=R32(c->r[24]+0x000000C8u); // 800D5C5C
  goto L_800D5C80; // 800D5C60
L_800D5C64:;
  c->r[3]=R32(c->r[26]+0x000000BCu); // 800D5C64
  c->r[0]=R32(c->r[29]+0x000000BCu); // 800D5C68
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800D5C6C
  if (!crb(c,2)) { goto L_800D5C7C; } // 800D5C70
  c->r[3]=c->r[26]|c->r[26]; // 800D5C74
  c->lr=0x800D5C7Cu; f_800CD280(c); // 800D5C78
L_800D5C7C:;
  c->r[26]=R32(c->r[26]+0x000000D4u); // 800D5C7C
L_800D5C80:;
  cmps(c,0,(int32_t)c->r[26],0); // 800D5C80
  if (!crb(c,2)) { IRQCHK(c); goto L_800D5C64; } // 800D5C84
L_800D5C88:;
  c->lr=0x800D5C8Cu; f_800DD3D0(c); // 800D5C88
  c->r[3]=c->r[3]+0x00000354u; // 800D5C8C
  c->lr=0x800D5C94u; f_8018E950(c); // 800D5C90
  c->r[0]=R32(c->r[24]+0x000000C8u); // 800D5C94
  W32(c->r[29]+0x000000D4u,c->r[0]); // 800D5C98
  W32(c->r[24]+0x000000C8u,c->r[29]); // 800D5C9C
  c->lr=0x800D5CA4u; f_800DD3D0(c); // 800D5CA0
  c->r[3]=c->r[3]+0x00000354u; // 800D5CA4
  c->lr=0x800D5CACu; f_8018EA30(c); // 800D5CA8
L_800D5CAC:;
  c->r[4]=R8(c->r[24]+0x00000090u); // 800D5CAC
  cmpu(c,0,c->r[4],0x0000007Fu); // 800D5CB0
  if (crb(c,1)) { goto L_800D5CC0; } // 800D5CB4
  c->r[3]=c->r[29]|c->r[29]; // 800D5CB8
  c->lr=0x800D5CC0u; f_800CE1F0(c); // 800D5CBC
L_800D5CC0:;
  c->r[4]=R8(c->r[24]+0x00000091u); // 800D5CC0
  cmpu(c,0,c->r[4],0x0000007Fu); // 800D5CC4
  if (crb(c,1)) { goto L_800D5CD4; } // 800D5CC8
  c->r[3]=c->r[29]|c->r[29]; // 800D5CCC
  c->lr=0x800D5CD4u; f_800CE310(c); // 800D5CD0
L_800D5CD4:;
  c->r[4]=R8(c->r[24]+0x00000092u); // 800D5CD4
  cmpu(c,0,c->r[4],0x0000007Fu); // 800D5CD8
  if (crb(c,1)) { goto L_800D5CE8; } // 800D5CDC
  c->r[3]=c->r[29]|c->r[29]; // 800D5CE0
  c->lr=0x800D5CE8u; f_800CE460(c); // 800D5CE4
L_800D5CE8:;
  c->r[4]=R8(c->r[24]+0x00000093u); // 800D5CE8
  cmpu(c,0,c->r[4],0x0000007Fu); // 800D5CEC
  if (crb(c,1)) { goto L_800D5CFC; } // 800D5CF0
  c->r[3]=c->r[29]|c->r[29]; // 800D5CF4
  c->lr=0x800D5CFCu; f_800CE4E0(c); // 800D5CF8
L_800D5CFC:;
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[24]+0x00000094u); // 800D5CFC
  cmps(c,0,(int32_t)c->r[4],127); // 800D5D00
  if (crb(c,1)) { goto L_800D5D10; } // 800D5D04
  c->r[3]=c->r[29]|c->r[29]; // 800D5D08
  c->lr=0x800D5D10u; f_800CE280(c); // 800D5D0C
L_800D5D10:;
  c->r[0]=R8(c->r[24]+0x0000004Bu); // 800D5D10
  {uint32_t ea=c->r[24]+0x0000006Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 800D5D14
  cmps(c,0,(int32_t)c->r[0],0); // 800D5D18
  if (crb(c,2)) { goto L_800D5D40; } // 800D5D1C
  c->r[0]=R8(c->r[24]+0x0000008Eu); // 800D5D20
  {uint32_t ea=c->r[2]+0xFFFF9B50u; c->f[1]=RF64(ea);} // 800D5D24
  c->r[0]=c->r[0]-c->r[25]; // 800D5D28
  c->r[0]=c->r[0]^0x80000000u; // 800D5D2C
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D5D30
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 800D5D34
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800D5D38
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[0]); // 800D5D3C
L_800D5D40:;
  c->r[0]=R8(c->r[24]+0x0000008Fu); // 800D5D40
  cmps(c,0,(int32_t)c->r[0],0); // 800D5D44
  if (!crb(c,2)) { goto L_800D5D80; } // 800D5D48
  cmps(c,0,(int32_t)c->r[27],0); // 800D5D4C
  if (!crb(c,2)) { goto L_800D5D68; } // 800D5D50
  c->r[3]=c->r[30]+0x00000000u; // 800D5D54
  c->r[5]=c->r[30]+0x00000254u; // 800D5D58
  c->r[4]=0u+0x0000037Au; // 800D5D5C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D5D60
  c->lr=0x800D5D68u; f_800F13A0(c); // 800D5D64
L_800D5D68:;
  c->f[1]=c->f[31]; // 800D5D68
  c->r[3]=c->r[29]|c->r[29]; // 800D5D6C
  c->r[4]=c->r[27]|c->r[27]; // 800D5D70
  c->r[5]=0u+0x00000000u; // 800D5D74
  c->lr=0x800D5D7Cu; f_800CD4E0(c); // 800D5D78
  goto L_800D5DE0; // 800D5D7C
L_800D5D80:;
  {uint32_t ea=c->r[2]+0xFFFF9B2Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D5D80
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[0]); // 800D5D84
  fcmp(c,0,c->f[31],c->f[0]); // 800D5D88
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800D5D8C
  if (!crb(c,2)) { goto L_800D5D9C; } // 800D5D90
  c->f[3]=c->f[31]; // 800D5D94
  goto L_800D5DA0; // 800D5D98
L_800D5D9C:;
  c->f[3]=-c->f[31]; // 800D5D9C
L_800D5DA0:;
  c->r[0]=c->r[0]^0x80000000u; // 800D5DA0
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 800D5DA4
  {uint32_t ea=c->r[2]+0xFFFF9B50u; c->f[2]=RF64(ea);} // 800D5DA8
  c->f[1]=c->f[31]; // 800D5DAC
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 800D5DB0
  c->r[3]=c->r[29]|c->r[29]; // 800D5DB4
  c->r[5]=0u+0x00000001u; // 800D5DB8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 800D5DBC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[3]); // 800D5DC0
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800D5DC4
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[0]);} // 800D5DC8
  c->r[0]=R32(c->r[1]+0x00000044u); // 800D5DCC
  c->r[4]=sraw(c,c->r[0],5); // 800D5DD0
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800D5DD4
  c->r[4]=c->r[0]+c->r[4]; // 800D5DD8
  c->lr=0x800D5DE0u; f_800CD4E0(c); // 800D5DDC
L_800D5DE0:;
  W8(c->r[24]+0x0000008Eu,c->r[25]); // 800D5DE0
  c->r[3]=R8(c->r[24]+0x00000049u); // 800D5DE4
  c->r[5]=R16(c->r[29]+0x000000A2u); // 800D5DE8
  c->r[4]=R16(c->r[29]+0x000000A4u); // 800D5DEC
  c->r[0]=0u-c->r[3]; // 800D5DF0
  c->r[0]=c->r[0]|c->r[3]; // 800D5DF4
  cmpu(c,0,c->r[4],c->r[5]); // 800D5DF8
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800D5DFC
  if (crb(c,0)) { goto L_800D5E0C; } // 800D5E00
  c->r[4]=R8(c->r[29]+0x000000A1u); // 800D5E04
  goto L_800D5E28; // 800D5E08
L_800D5E0C:;
  c->r[6]=R8(c->r[29]+0x000000A0u); // 800D5E0C
  c->r[0]=R8(c->r[29]+0x000000A1u); // 800D5E10
  c->r[0]=c->r[0]-c->r[6]; // 800D5E14
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 800D5E18
  c->r[0]=divw((int32_t)c->r[0],(int32_t)c->r[5]); // 800D5E1C
  c->r[0]=c->r[6]+c->r[0]; // 800D5E20
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 800D5E24
L_800D5E28:;
  c->r[0]=0u-c->r[3]; // 800D5E28
  W8(c->r[29]+0x000000A0u,c->r[4]); // 800D5E2C
  c->r[0]=c->r[0]|c->r[3]; // 800D5E30
  c->r[3]=0u+0x000000FFu; // 800D5E34
  c->r[4]=sraw(c,c->r[0],31); // 800D5E38
  c->r[3]=c->r[3]&~c->r[4]; // 800D5E3C
  W8(c->r[29]+0x000000A1u,c->r[3]); // 800D5E40
  c->r[0]=0u+0x00000000u; // 800D5E44
  W16(c->r[29]+0x000000A2u,c->r[0]); // 800D5E48
  W16(c->r[29]+0x000000A4u,c->r[0]); // 800D5E4C
  c->r[3]=R32(c->r[24]+0x000000C4u); // 800D5E50
  c->r[0]=R8(c->r[3]+0x000000CFu); // 800D5E54
  W8(c->r[29]+0x00000039u,c->r[0]); // 800D5E58
  c->r[3]=R32(c->r[24]+0x000000C4u); // 800D5E5C
  c->r[0]=R32(c->r[3]+0x0000002Cu); // 800D5E60
  W32(c->r[29]+0x000000B4u,c->r[0]); // 800D5E64
  c->r[3]=R32(c->r[24]+0x000000C4u); // 800D5E68
  c->r[0]=R32(c->r[3]+0x00000030u); // 800D5E6C
  W32(c->r[29]+0x000000B8u,c->r[0]); // 800D5E70
  c->lr=0x800D5E78u; f_800DD3D0(c); // 800D5E74
  c->r[3]=c->r[3]+0x00000354u; // 800D5E78
  c->lr=0x800D5E80u; f_8018EA30(c); // 800D5E7C
  c->r[3]=c->r[29]|c->r[29]; // 800D5E80
L_800D5E84:;
  c->r[11]=c->r[1]+0x00000070u; // 800D5E84
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,31,ea,0,0);} // 800D5E88
  {uint32_t ea=c->r[1]+0x00000070u; c->f[31]=RF64(ea);} // 800D5E8C
  c->lr=0x800D5E94u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D5E90
  c->r[0]=R32(c->r[1]+0x00000084u); // 800D5E94
  c->lr=c->r[0]; // 800D5E98
  c->r[1]=c->r[1]+0x00000080u; // 800D5E9C
  return; // 800D5EA0
}

// fn_800D5EB0
void f_800D5EB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5EB0
  c->r[0]=c->lr; // 800D5EB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D5EB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D5EBC
  c->r[31]=c->r[4]|c->r[4]; // 800D5EC0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D5EC4
  c->r[30]=c->r[3]|c->r[3]; // 800D5EC8
  c->r[0]=R32(c->r[3]+0x00000010u); // 800D5ECC
  cmps(c,0,(int32_t)c->r[0],0); // 800D5ED0
  if (!crb(c,2)) { goto L_800D5EF4; } // 800D5ED4
  c->r[3]=0u+0x80250000u; // 800D5ED8
  c->r[5]=0u+0x80250000u; // 800D5EDC
  c->r[3]=c->r[3]+0x000076E0u; // 800D5EE0
  c->r[4]=0u+0x000000C2u; // 800D5EE4
  c->r[5]=c->r[5]+0x000076B0u; // 800D5EE8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D5EEC
  c->lr=0x800D5EF4u; f_800F1300(c); // 800D5EF0
L_800D5EF4:;
  c->r[3]=R32(c->r[30]+0x00000010u); // 800D5EF4
  c->r[4]=c->r[31]|c->r[31]; // 800D5EF8
  c->lr=0x800D5F00u; f_800D6050(c); // 800D5EFC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D5F00
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D5F04
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D5F08
  c->lr=c->r[0]; // 800D5F0C
  c->r[1]=c->r[1]+0x00000010u; // 800D5F10
  return; // 800D5F14
}

// fn_800D5F20
void f_800D5F20(Ctx* __restrict c) {
  c->r[5]=0u+0x80250000u; // 800D5F20
  c->r[4]=0u+0x00000000u; // 800D5F24
  c->r[5]=c->r[5]+0x00007758u; // 800D5F28
  c->r[0]=0u+0x0000002Fu; // 800D5F2C
  W32(c->r[3]+0x00000000u,c->r[5]); // 800D5F30
  W32(c->r[3]+0x00000004u,c->r[4]); // 800D5F34
  W8(c->r[3]+0x00000008u,c->r[0]); // 800D5F38
  W8(c->r[3]+0x00000009u,c->r[4]); // 800D5F3C
  return; // 800D5F40
}

// fn_800D5F50
void f_800D5F50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5F50
  c->r[0]=c->lr; // 800D5F54
  cmps(c,0,(int32_t)c->r[3],0); // 800D5F58
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D5F5C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D5F60
  c->r[31]=c->r[3]|c->r[3]; // 800D5F64
  if (crb(c,2)) { goto L_800D5F78; } // 800D5F68
  cmps(c,0,(int32_t)c->r[4],0); // 800D5F6C
  if (!crb(c,1)) { goto L_800D5F78; } // 800D5F70
  c->lr=0x800D5F78u; f_8015D040(c); // 800D5F74
L_800D5F78:;
  c->r[3]=c->r[31]|c->r[31]; // 800D5F78
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D5F7C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D5F80
  c->lr=c->r[0]; // 800D5F84
  c->r[1]=c->r[1]+0x00000010u; // 800D5F88
  return; // 800D5F8C
}

// fn_800D5F90
void f_800D5F90(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000004u); // 800D5F90
  c->r[0]=0u-c->r[3]; // 800D5F94
  c->r[0]=c->r[0]|c->r[3]; // 800D5F98
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800D5F9C
  return; // 800D5FA0
}

// fn_800D5FB0
void f_800D5FB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5FB0
  c->r[0]=c->lr; // 800D5FB4
  cmps(c,0,(int32_t)c->r[4],0); // 800D5FB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D5FBC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D5FC0
  c->r[31]=c->r[4]|c->r[4]; // 800D5FC4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D5FC8
  c->r[30]=c->r[3]|c->r[3]; // 800D5FCC
  if (!crb(c,2)) { goto L_800D5FF0; } // 800D5FD0
  c->r[3]=0u+0x80250000u; // 800D5FD4
  c->r[5]=0u+0x80250000u; // 800D5FD8
  c->r[3]=c->r[3]+0x000076F8u; // 800D5FDC
  c->r[4]=0u+0x00000046u; // 800D5FE0
  c->r[5]=c->r[5]+0x00007710u; // 800D5FE4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D5FE8
  c->lr=0x800D5FF0u; f_800F1300(c); // 800D5FEC
L_800D5FF0:;
  W32(c->r[30]+0x00000004u,c->r[31]); // 800D5FF0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D5FF4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D5FF8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D5FFC
  c->lr=c->r[0]; // 800D6000
  c->r[1]=c->r[1]+0x00000010u; // 800D6004
  return; // 800D6008
}

// fn_800D6010
void f_800D6010(Ctx* __restrict c) {
  c->r[4]=0u+0x00000000u; // 800D6010
  c->r[0]=0u+0x0000002Fu; // 800D6014
  W32(c->r[3]+0x00000004u,c->r[4]); // 800D6018
  W8(c->r[3]+0x00000008u,c->r[0]); // 800D601C
  W8(c->r[3]+0x00000009u,c->r[4]); // 800D6020
  return; // 800D6024
}

// fn_800D6030
void f_800D6030(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000004u); // 800D6030
  f_800D75E0(c); return; // 800D6034
}

// fn_800D6040
void f_800D6040(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000004u); // 800D6040
  f_800D7650(c); return; // 800D6044
}

// fn_800D6050
void f_800D6050(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000004u); // 800D6050
  c->r[5]=c->r[4]|c->r[4]; // 800D6054
  c->r[4]=R32(c->r[3]+0x00000034u); // 800D6058
  f_800D7AA0(c); return; // 800D605C
}

// fn_800D6060
void f_800D6060(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000004u); // 800D6060
  f_800D6970(c); return; // 800D6064
}

// fn_800D6070
void f_800D6070(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000004u); // 800D6070
  f_800D6AC0(c); return; // 800D6074
}

// fn_800D6080
void f_800D6080(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000004u); // 800D6080
  f_800D6C40(c); return; // 800D6084
}

// fn_800D6090
void f_800D6090(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000004u); // 800D6090
  f_800D6D50(c); return; // 800D6094
}

// fn_800D60A0
void f_800D60A0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000004u); // 800D60A0
  f_800D6E80(c); return; // 800D60A4
}

// fn_800D60B0
void f_800D60B0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000004u); // 800D60B0
  f_800D7080(c); return; // 800D60B4
}

// fn_800D60C0
void f_800D60C0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000004u); // 800D60C0
  f_800D7520(c); return; // 800D60C4
}

// fn_800D60D0
void f_800D60D0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000004u); // 800D60D0
  f_800D6F80(c); return; // 800D60D4
}

// fn_800D60E0
void f_800D60E0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000004u); // 800D60E0
  f_800D7190(c); return; // 800D60E4
}

// fn_800D60F0
void f_800D60F0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000004u); // 800D60F0
  f_800D7340(c); return; // 800D60F4
}

// fn_800D6100
void f_800D6100(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000004u); // 800D6100
  f_800D76D0(c); return; // 800D6104
}

// fn_800D6110
void f_800D6110(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000004u); // 800D6110
  f_800D7740(c); return; // 800D6114
}

// fn_800D6120
void f_800D6120(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000004u); // 800D6120
  f_800D78E0(c); return; // 800D6124
}

// fn_800D6130
void f_800D6130(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFD90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6130
  c->r[0]=c->lr; // 800D6134
  W32(c->r[1]+0x00000274u,c->r[0]); // 800D6138
  c->r[11]=c->r[1]+0x00000270u; // 800D613C
  c->lr=0x800D6144u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D6140
  c->r[29]=c->r[3]|c->r[3]; // 800D6144
  c->r[3]=R32(c->r[3]+0x00000004u); // 800D6148
  c->r[30]=c->r[5]|c->r[5]; // 800D614C
  c->r[25]=c->r[4]|c->r[4]; // 800D6150
  c->r[31]=c->r[6]|c->r[6]; // 800D6154
  c->r[5]=c->r[1]+0x00000010u; // 800D6158
  c->lr=0x800D6160u; f_800D7740(c); // 800D615C
  cmps(c,0,(int32_t)c->r[3],0); // 800D6160
  if (!crb(c,2)) { goto L_800D6170; } // 800D6164
  c->r[3]=0u+0x00000000u; // 800D6168
  goto L_800D6388; // 800D616C
L_800D6170:;
  c->r[26]=R32(c->r[1]+0x00000018u); // 800D6170
  cmps(c,0,(int32_t)c->r[26],0); // 800D6174
  if (crb(c,2)) { goto L_800D6230; } // 800D6178
  c->r[0]=R8(c->r[26]+0x00000000u); // 800D617C
  c->r[27]=R32(c->r[1]+0x00000010u); // 800D6180
  cmps(c,0,(int32_t)c->r[0],47); // 800D6184
  if (!crb(c,2)) { goto L_800D6190; } // 800D6188
  goto L_800D6204; // 800D618C
L_800D6190:;
  c->r[3]=c->r[26]|c->r[26]; // 800D6190
  c->lr=0x800D6198u; f_80206CB4(c); // 800D6194
  c->r[28]=c->r[3]|c->r[3]; // 800D6198
  c->r[3]=c->r[29]+0x00000008u; // 800D619C
  c->lr=0x800D61A4u; f_80206CB4(c); // 800D61A0
  c->r[0]=c->r[28]+c->r[3]; // 800D61A4
  c->r[5]=c->r[3]|c->r[3]; // 800D61A8
  cmpu(c,0,c->r[0],0x00000100u); // 800D61AC
  if (crb(c,0)) { goto L_800D61E0; } // 800D61B0
  c->r[3]=0u+0x80250000u; // 800D61B4
  c->r[5]=0u+0x80250000u; // 800D61B8
  c->r[7]=c->r[26]|c->r[26]; // 800D61BC
  c->r[6]=c->r[29]+0x00000008u; // 800D61C0
  c->r[3]=c->r[3]+0x000076F8u; // 800D61C4
  c->r[5]=c->r[5]+0x0000773Cu; // 800D61C8
  c->r[4]=0u+0x0000015Du; // 800D61CC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D61D0
  c->lr=0x800D61D8u; f_800F13A0(c); // 800D61D4
  c->r[3]=0u+0x00000000u; // 800D61D8
  goto L_800D6388; // 800D61DC
L_800D61E0:;
  c->r[3]=c->r[1]+0x00000150u; // 800D61E0
  c->r[4]=c->r[29]+0x00000008u; // 800D61E4
  c->r[5]=c->r[5]+0x00000001u; // 800D61E8
  c->lr=0x800D61F0u; f_8020E7F4(c); // 800D61EC
  c->r[4]=c->r[26]|c->r[26]; // 800D61F0
  c->r[3]=c->r[1]+0x00000150u; // 800D61F4
  c->r[5]=c->r[28]+0x00000001u; // 800D61F8
  c->lr=0x800D6200u; f_8020E864(c); // 800D61FC
  c->r[26]=c->r[1]+0x00000150u; // 800D6200
L_800D6204:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 800D6204
  c->r[3]=c->r[29]|c->r[29]; // 800D6208
  c->r[4]=c->r[30]|c->r[30]; // 800D620C
  c->r[5]=c->r[31]|c->r[31]; // 800D6210
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 800D6214
  c->r[6]=c->r[26]|c->r[26]; // 800D6218
  c->r[8]=c->r[27]|c->r[27]; // 800D621C
  c->r[7]=0u+0x00000000u; // 800D6220
  c->ctr=c->r[12]; // 800D6224
  if (true) { c->lr=0x800D622Cu; dispatch(c,c->ctr); } // 800D6228
  goto L_800D6388; // 800D622C
L_800D6230:;
  c->r[3]=R32(c->r[29]+0x00000004u); // 800D6230
  c->r[4]=c->r[25]|c->r[25]; // 800D6234
  c->r[6]=c->r[1]+0x00000008u; // 800D6238
  c->r[5]=0u+0x00000000u; // 800D623C
  c->lr=0x800D6244u; f_800D78E0(c); // 800D6240
  cmps(c,0,(int32_t)c->r[3],0); // 800D6244
  if (!crb(c,2)) { goto L_800D6254; } // 800D6248
  c->r[3]=0u+0x00000000u; // 800D624C
  goto L_800D6388; // 800D6250
L_800D6254:;
  c->r[3]=R32(c->r[29]+0x00000004u); // 800D6254
  c->r[5]=c->r[1]+0x00000038u; // 800D6258
  c->r[4]=R32(c->r[1]+0x00000008u); // 800D625C
  c->lr=0x800D6264u; f_800D7190(c); // 800D6260
  cmps(c,0,(int32_t)c->r[3],0); // 800D6264
  if (!crb(c,2)) { goto L_800D6274; } // 800D6268
  c->r[3]=0u+0x00000000u; // 800D626C
  goto L_800D6388; // 800D6270
L_800D6274:;
  c->r[3]=R32(c->r[29]+0x00000004u); // 800D6274
  c->r[6]=c->r[1]+0x00000020u; // 800D6278
  c->r[4]=R32(c->r[1]+0x00000008u); // 800D627C
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 800D6280
  c->lr=0x800D6288u; f_800D7340(c); // 800D6284
  cmps(c,0,(int32_t)c->r[3],0); // 800D6288
  if (!crb(c,2)) { goto L_800D6298; } // 800D628C
  c->r[3]=0u+0x00000000u; // 800D6290
  goto L_800D6388; // 800D6294
L_800D6298:;
  c->r[26]=R32(c->r[1]+0x0000003Cu); // 800D6298
  c->r[3]=R32(c->r[1]+0x00000040u); // 800D629C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D62A0
  cmps(c,0,(int32_t)c->r[26],0); // 800D62A4
  c->r[25]=R32(c->r[1]+0x00000028u); // 800D62A8
  c->r[27]=c->r[3]+c->r[0]; // 800D62AC
  if (crb(c,2)) { goto L_800D6364; } // 800D62B0
  c->r[0]=R8(c->r[26]+0x00000000u); // 800D62B4
  cmps(c,0,(int32_t)c->r[0],47); // 800D62B8
  if (!crb(c,2)) { goto L_800D62C4; } // 800D62BC
  goto L_800D6338; // 800D62C0
L_800D62C4:;
  c->r[3]=c->r[26]|c->r[26]; // 800D62C4
  c->lr=0x800D62CCu; f_80206CB4(c); // 800D62C8
  c->r[28]=c->r[3]|c->r[3]; // 800D62CC
  c->r[3]=c->r[29]+0x00000008u; // 800D62D0
  c->lr=0x800D62D8u; f_80206CB4(c); // 800D62D4
  c->r[0]=c->r[28]+c->r[3]; // 800D62D8
  c->r[5]=c->r[3]|c->r[3]; // 800D62DC
  cmpu(c,0,c->r[0],0x00000100u); // 800D62E0
  if (crb(c,0)) { goto L_800D6314; } // 800D62E4
  c->r[3]=0u+0x80250000u; // 800D62E8
  c->r[5]=0u+0x80250000u; // 800D62EC
  c->r[7]=c->r[26]|c->r[26]; // 800D62F0
  c->r[6]=c->r[29]+0x00000008u; // 800D62F4
  c->r[3]=c->r[3]+0x000076F8u; // 800D62F8
  c->r[5]=c->r[5]+0x0000773Cu; // 800D62FC
  c->r[4]=0u+0x0000015Du; // 800D6300
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D6304
  c->lr=0x800D630Cu; f_800F13A0(c); // 800D6308
  c->r[3]=0u+0x00000000u; // 800D630C
  goto L_800D6388; // 800D6310
L_800D6314:;
  c->r[3]=c->r[1]+0x00000050u; // 800D6314
  c->r[4]=c->r[29]+0x00000008u; // 800D6318
  c->r[5]=c->r[5]+0x00000001u; // 800D631C
  c->lr=0x800D6324u; f_8020E7F4(c); // 800D6320
  c->r[4]=c->r[26]|c->r[26]; // 800D6324
  c->r[3]=c->r[1]+0x00000050u; // 800D6328
  c->r[5]=c->r[28]+0x00000001u; // 800D632C
  c->lr=0x800D6334u; f_8020E864(c); // 800D6330
  c->r[26]=c->r[1]+0x00000050u; // 800D6334
L_800D6338:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 800D6338
  c->r[3]=c->r[29]|c->r[29]; // 800D633C
  c->r[4]=c->r[30]|c->r[30]; // 800D6340
  c->r[5]=c->r[31]|c->r[31]; // 800D6344
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 800D6348
  c->r[6]=c->r[26]|c->r[26]; // 800D634C
  c->r[7]=c->r[27]|c->r[27]; // 800D6350
  c->r[8]=c->r[25]|c->r[25]; // 800D6354
  c->ctr=c->r[12]; // 800D6358
  if (true) { c->lr=0x800D6360u; dispatch(c,c->ctr); } // 800D635C
  goto L_800D6388; // 800D6360
L_800D6364:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 800D6364
  c->r[3]=c->r[29]|c->r[29]; // 800D6368
  c->r[4]=c->r[30]|c->r[30]; // 800D636C
  c->r[5]=c->r[31]|c->r[31]; // 800D6370
  c->r[12]=R32(c->r[12]+0x00000018u); // 800D6374
  c->r[6]=c->r[27]|c->r[27]; // 800D6378
  c->r[7]=c->r[25]|c->r[25]; // 800D637C
  c->ctr=c->r[12]; // 800D6380
  if (true) { c->lr=0x800D6388u; dispatch(c,c->ctr); } // 800D6384
L_800D6388:;
  c->r[11]=c->r[1]+0x00000270u; // 800D6388
  c->lr=0x800D6390u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D638C
  c->r[0]=R32(c->r[1]+0x00000274u); // 800D6390
  c->lr=c->r[0]; // 800D6394
  c->r[1]=c->r[1]+0x00000270u; // 800D6398
  return; // 800D639C
}

// fn_800D63A0
void f_800D63A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFEC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D63A0
  c->r[0]=c->lr; // 800D63A4
  W32(c->r[1]+0x00000144u,c->r[0]); // 800D63A8
  c->r[11]=c->r[1]+0x00000140u; // 800D63AC
  c->lr=0x800D63B4u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D63B0
  c->r[25]=c->r[3]|c->r[3]; // 800D63B4
  c->r[3]=R32(c->r[3]+0x00000004u); // 800D63B8
  c->r[26]=c->r[5]|c->r[5]; // 800D63BC
  c->r[27]=c->r[6]|c->r[6]; // 800D63C0
  c->r[5]=c->r[1]+0x00000008u; // 800D63C4
  c->lr=0x800D63CCu; f_800D7190(c); // 800D63C8
  cmps(c,0,(int32_t)c->r[3],0); // 800D63CC
  if (!crb(c,2)) { goto L_800D63DC; } // 800D63D0
  c->r[3]=0u+0x00000000u; // 800D63D4
  goto L_800D64C4; // 800D63D8
L_800D63DC:;
  c->r[28]=R32(c->r[1]+0x0000000Cu); // 800D63DC
  cmps(c,0,(int32_t)c->r[28],0); // 800D63E0
  if (crb(c,2)) { goto L_800D64A0; } // 800D63E4
  c->r[0]=R8(c->r[28]+0x00000000u); // 800D63E8
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D63EC
  cmps(c,0,(int32_t)c->r[0],47); // 800D63F0
  c->r[30]=R32(c->r[1]+0x00000010u); // 800D63F4
  if (!crb(c,2)) { goto L_800D6400; } // 800D63F8
  goto L_800D6474; // 800D63FC
L_800D6400:;
  c->r[3]=c->r[28]|c->r[28]; // 800D6400
  c->lr=0x800D6408u; f_80206CB4(c); // 800D6404
  c->r[31]=c->r[3]|c->r[3]; // 800D6408
  c->r[3]=c->r[25]+0x00000008u; // 800D640C
  c->lr=0x800D6414u; f_80206CB4(c); // 800D6410
  c->r[0]=c->r[31]+c->r[3]; // 800D6414
  c->r[5]=c->r[3]|c->r[3]; // 800D6418
  cmpu(c,0,c->r[0],0x00000100u); // 800D641C
  if (crb(c,0)) { goto L_800D6450; } // 800D6420
  c->r[3]=0u+0x80250000u; // 800D6424
  c->r[5]=0u+0x80250000u; // 800D6428
  c->r[7]=c->r[28]|c->r[28]; // 800D642C
  c->r[6]=c->r[25]+0x00000008u; // 800D6430
  c->r[3]=c->r[3]+0x000076F8u; // 800D6434
  c->r[5]=c->r[5]+0x0000773Cu; // 800D6438
  c->r[4]=0u+0x0000015Du; // 800D643C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D6440
  c->lr=0x800D6448u; f_800F13A0(c); // 800D6444
  c->r[3]=0u+0x00000000u; // 800D6448
  goto L_800D64C4; // 800D644C
L_800D6450:;
  c->r[3]=c->r[1]+0x00000020u; // 800D6450
  c->r[4]=c->r[25]+0x00000008u; // 800D6454
  c->r[5]=c->r[5]+0x00000001u; // 800D6458
  c->lr=0x800D6460u; f_8020E7F4(c); // 800D645C
  c->r[4]=c->r[28]|c->r[28]; // 800D6460
  c->r[3]=c->r[1]+0x00000020u; // 800D6464
  c->r[5]=c->r[31]+0x00000001u; // 800D6468
  c->lr=0x800D6470u; f_8020E864(c); // 800D646C
  c->r[28]=c->r[1]+0x00000020u; // 800D6470
L_800D6474:;
  c->r[12]=R32(c->r[25]+0x00000000u); // 800D6474
  c->r[3]=c->r[25]|c->r[25]; // 800D6478
  c->r[4]=c->r[26]|c->r[26]; // 800D647C
  c->r[5]=c->r[27]|c->r[27]; // 800D6480
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 800D6484
  c->r[6]=c->r[28]|c->r[28]; // 800D6488
  c->r[7]=c->r[30]|c->r[30]; // 800D648C
  c->r[8]=c->r[29]|c->r[29]; // 800D6490
  c->ctr=c->r[12]; // 800D6494
  if (true) { c->lr=0x800D649Cu; dispatch(c,c->ctr); } // 800D6498
  goto L_800D64C4; // 800D649C
L_800D64A0:;
  c->r[12]=R32(c->r[25]+0x00000000u); // 800D64A0
  c->r[3]=c->r[25]|c->r[25]; // 800D64A4
  c->r[4]=c->r[26]|c->r[26]; // 800D64A8
  c->r[5]=c->r[27]|c->r[27]; // 800D64AC
  c->r[12]=R32(c->r[12]+0x00000018u); // 800D64B0
  c->r[6]=R32(c->r[1]+0x00000010u); // 800D64B4
  c->r[7]=R32(c->r[1]+0x00000014u); // 800D64B8
  c->ctr=c->r[12]; // 800D64BC
  if (true) { c->lr=0x800D64C4u; dispatch(c,c->ctr); } // 800D64C0
L_800D64C4:;
  c->r[11]=c->r[1]+0x00000140u; // 800D64C4
  c->lr=0x800D64CCu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D64C8
  c->r[0]=R32(c->r[1]+0x00000144u); // 800D64CC
  c->lr=c->r[0]; // 800D64D0
  c->r[1]=c->r[1]+0x00000140u; // 800D64D4
  return; // 800D64D8
}

// fn_800D64E0
void f_800D64E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFEC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D64E0
  c->r[0]=c->lr; // 800D64E4
  W32(c->r[1]+0x00000144u,c->r[0]); // 800D64E8
  c->r[11]=c->r[1]+0x00000140u; // 800D64EC
  c->lr=0x800D64F4u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D64F0
  c->r[25]=c->r[3]|c->r[3]; // 800D64F4
  c->r[3]=R32(c->r[3]+0x00000004u); // 800D64F8
  c->r[26]=c->r[5]|c->r[5]; // 800D64FC
  c->r[27]=c->r[6]|c->r[6]; // 800D6500
  c->r[5]=c->r[1]+0x00000008u; // 800D6504
  c->lr=0x800D650Cu; f_800D7190(c); // 800D6508
  cmps(c,0,(int32_t)c->r[3],0); // 800D650C
  if (!crb(c,2)) { goto L_800D651C; } // 800D6510
  c->r[3]=0u+0x00000000u; // 800D6514
  goto L_800D6604; // 800D6518
L_800D651C:;
  c->r[28]=R32(c->r[1]+0x0000000Cu); // 800D651C
  cmps(c,0,(int32_t)c->r[28],0); // 800D6520
  if (crb(c,2)) { goto L_800D65E0; } // 800D6524
  c->r[0]=R8(c->r[28]+0x00000000u); // 800D6528
  c->r[29]=R32(c->r[1]+0x0000001Cu); // 800D652C
  cmps(c,0,(int32_t)c->r[0],47); // 800D6530
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D6534
  if (!crb(c,2)) { goto L_800D6540; } // 800D6538
  goto L_800D65B4; // 800D653C
L_800D6540:;
  c->r[3]=c->r[28]|c->r[28]; // 800D6540
  c->lr=0x800D6548u; f_80206CB4(c); // 800D6544
  c->r[31]=c->r[3]|c->r[3]; // 800D6548
  c->r[3]=c->r[25]+0x00000008u; // 800D654C
  c->lr=0x800D6554u; f_80206CB4(c); // 800D6550
  c->r[0]=c->r[31]+c->r[3]; // 800D6554
  c->r[5]=c->r[3]|c->r[3]; // 800D6558
  cmpu(c,0,c->r[0],0x00000100u); // 800D655C
  if (crb(c,0)) { goto L_800D6590; } // 800D6560
  c->r[3]=0u+0x80250000u; // 800D6564
  c->r[5]=0u+0x80250000u; // 800D6568
  c->r[7]=c->r[28]|c->r[28]; // 800D656C
  c->r[6]=c->r[25]+0x00000008u; // 800D6570
  c->r[3]=c->r[3]+0x000076F8u; // 800D6574
  c->r[5]=c->r[5]+0x0000773Cu; // 800D6578
  c->r[4]=0u+0x0000015Du; // 800D657C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D6580
  c->lr=0x800D6588u; f_800F13A0(c); // 800D6584
  c->r[3]=0u+0x00000000u; // 800D6588
  goto L_800D6604; // 800D658C
L_800D6590:;
  c->r[3]=c->r[1]+0x00000020u; // 800D6590
  c->r[4]=c->r[25]+0x00000008u; // 800D6594
  c->r[5]=c->r[5]+0x00000001u; // 800D6598
  c->lr=0x800D65A0u; f_8020E7F4(c); // 800D659C
  c->r[4]=c->r[28]|c->r[28]; // 800D65A0
  c->r[3]=c->r[1]+0x00000020u; // 800D65A4
  c->r[5]=c->r[31]+0x00000001u; // 800D65A8
  c->lr=0x800D65B0u; f_8020E864(c); // 800D65AC
  c->r[28]=c->r[1]+0x00000020u; // 800D65B0
L_800D65B4:;
  c->r[12]=R32(c->r[25]+0x00000000u); // 800D65B4
  c->r[3]=c->r[25]|c->r[25]; // 800D65B8
  c->r[4]=c->r[26]|c->r[26]; // 800D65BC
  c->r[5]=c->r[27]|c->r[27]; // 800D65C0
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 800D65C4
  c->r[6]=c->r[28]|c->r[28]; // 800D65C8
  c->r[7]=c->r[30]|c->r[30]; // 800D65CC
  c->r[8]=c->r[29]|c->r[29]; // 800D65D0
  c->ctr=c->r[12]; // 800D65D4
  if (true) { c->lr=0x800D65DCu; dispatch(c,c->ctr); } // 800D65D8
  goto L_800D6604; // 800D65DC
L_800D65E0:;
  c->r[12]=R32(c->r[25]+0x00000000u); // 800D65E0
  c->r[3]=c->r[25]|c->r[25]; // 800D65E4
  c->r[4]=c->r[26]|c->r[26]; // 800D65E8
  c->r[5]=c->r[27]|c->r[27]; // 800D65EC
  c->r[12]=R32(c->r[12]+0x00000018u); // 800D65F0
  c->r[6]=R32(c->r[1]+0x00000018u); // 800D65F4
  c->r[7]=R32(c->r[1]+0x0000001Cu); // 800D65F8
  c->ctr=c->r[12]; // 800D65FC
  if (true) { c->lr=0x800D6604u; dispatch(c,c->ctr); } // 800D6600
L_800D6604:;
  c->r[11]=c->r[1]+0x00000140u; // 800D6604
  c->lr=0x800D660Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D6608
  c->r[0]=R32(c->r[1]+0x00000144u); // 800D660C
  c->lr=c->r[0]; // 800D6610
  c->r[1]=c->r[1]+0x00000140u; // 800D6614
  return; // 800D6618
}

// fn_800D6620
void f_800D6620(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800D6620
  W32(c->r[3]+0x00000028u,c->r[0]); // 800D6624
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 800D6628
  W32(c->r[3]+0x00000030u,c->r[0]); // 800D662C
  W32(c->r[3]+0x00000034u,c->r[0]); // 800D6630
  W32(c->r[3]+0x00000038u,c->r[0]); // 800D6634
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 800D6638
  W32(c->r[3]+0x00000040u,c->r[0]); // 800D663C
  return; // 800D6640
}

// fn_800D6650
void f_800D6650(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6650
  c->r[0]=c->lr; // 800D6654
  cmps(c,0,(int32_t)c->r[4],0); // 800D6658
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D665C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D6660
  c->r[31]=c->r[4]|c->r[4]; // 800D6664
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D6668
  c->r[30]=c->r[3]|c->r[3]; // 800D666C
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D6670
  c->r[29]=0u+0x80250000u; // 800D6674
  c->r[29]=c->r[29]+0x00007778u; // 800D6678
  if (!crb(c,2)) { goto L_800D6694; } // 800D667C
  c->r[3]=c->r[29]+0x00000000u; // 800D6680
  c->r[5]=c->r[29]+0x0000001Cu; // 800D6684
  c->r[4]=0u+0x00000032u; // 800D6688
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D668C
  c->lr=0x800D6694u; f_800F1300(c); // 800D6690
L_800D6694:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 800D6694
  c->r[0]=c->r[3]+0xADAD0000u; // 800D6698
  cmpu(c,0,c->r[0],0x00004152u); // 800D669C
  if (crb(c,2)) { goto L_800D66B8; } // 800D66A0
  c->r[3]=c->r[29]+0x00000000u; // 800D66A4
  c->r[5]=c->r[29]+0x00000050u; // 800D66A8
  c->r[4]=0u+0x0000004Bu; // 800D66AC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D66B0
  c->lr=0x800D66B8u; f_800F1300(c); // 800D66B4
L_800D66B8:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 800D66B8
  c->r[0]=c->r[3]+0xADAD0000u; // 800D66BC
  cmpu(c,0,c->r[0],0x00004152u); // 800D66C0
  if (crb(c,2)) { goto L_800D66D0; } // 800D66C4
  c->r[0]=0u+0x00000000u; // 800D66C8
  goto L_800D673C; // 800D66CC
L_800D66D0:;
  c->r[0]=R16(c->r[31]+0x00000006u); // 800D66D0
  cmpu(c,0,c->r[0],0x00000100u); // 800D66D4
  if (!crb(c,0)) { goto L_800D66F0; } // 800D66D8
  c->r[3]=c->r[29]+0x00000000u; // 800D66DC
  c->r[5]=c->r[29]+0x00000090u; // 800D66E0
  c->r[4]=0u+0x00000053u; // 800D66E4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D66E8
  c->lr=0x800D66F0u; f_800F1300(c); // 800D66EC
L_800D66F0:;
  c->r[0]=R16(c->r[31]+0x00000006u); // 800D66F0
  cmpu(c,0,c->r[0],0x00000100u); // 800D66F4
  if (!crb(c,0)) { goto L_800D6704; } // 800D66F8
  c->r[0]=0u+0x00000000u; // 800D66FC
  goto L_800D673C; // 800D6700
L_800D6704:;
  cmpu(c,0,c->r[0],0x00000104u); // 800D6704
  if (!crb(c,1)) { goto L_800D6720; } // 800D6708
  c->r[3]=c->r[29]+0x00000000u; // 800D670C
  c->r[5]=c->r[29]+0x00000090u; // 800D6710
  c->r[4]=0u+0x00000059u; // 800D6714
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D6718
  c->lr=0x800D6720u; f_800F1300(c); // 800D671C
L_800D6720:;
  c->r[4]=R16(c->r[31]+0x00000006u); // 800D6720
  c->r[3]=0u+0x00000104u; // 800D6724
  c->r[0]=addc(c,~c->r[4],0x00000104u,1); // 800D6728
  c->r[3]=c->r[3]|~c->r[4]; // 800D672C
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800D6730
  c->r[0]=c->r[3]-c->r[0]; // 800D6734
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800D6738
L_800D673C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D673C
  if (crb(c,2)) { goto L_800D6794; } // 800D6740
  c->r[3]=R32(c->r[31]+0x00000000u); // 800D6744
  c->r[0]=R32(c->r[31]+0x00000004u); // 800D6748
  W32(c->r[30]+0x00000004u,c->r[0]); // 800D674C
  W32(c->r[30]+0x00000000u,c->r[3]); // 800D6750
  c->r[3]=R32(c->r[31]+0x00000008u); // 800D6754
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800D6758
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 800D675C
  W32(c->r[30]+0x00000008u,c->r[3]); // 800D6760
  c->r[0]=R32(c->r[31]+0x00000010u); // 800D6764
  W32(c->r[30]+0x00000010u,c->r[0]); // 800D6768
  c->r[0]=R32(c->r[31]+0x00000014u); // 800D676C
  W32(c->r[30]+0x00000014u,c->r[0]); // 800D6770
  c->r[0]=R32(c->r[31]+0x00000018u); // 800D6774
  W32(c->r[30]+0x00000018u,c->r[0]); // 800D6778
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 800D677C
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 800D6780
  c->r[0]=R32(c->r[31]+0x00000020u); // 800D6784
  W32(c->r[30]+0x00000020u,c->r[0]); // 800D6788
  c->r[0]=R32(c->r[31]+0x00000024u); // 800D678C
  W32(c->r[30]+0x00000024u,c->r[0]); // 800D6790
L_800D6794:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D6794
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D6798
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D679C
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D67A0
  c->lr=c->r[0]; // 800D67A4
  c->r[1]=c->r[1]+0x00000020u; // 800D67A8
  return; // 800D67AC
}

// fn_800D67B0
void f_800D67B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D67B0
  c->r[0]=c->lr; // 800D67B4
  cmps(c,0,(int32_t)c->r[4],0); // 800D67B8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D67BC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D67C0
  c->r[31]=c->r[3]|c->r[3]; // 800D67C4
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D67C8
  c->r[30]=0u+0x80250000u; // 800D67CC
  c->r[30]=c->r[30]+0x00007778u; // 800D67D0
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D67D4
  c->r[29]=c->r[4]|c->r[4]; // 800D67D8
  if (!crb(c,2)) { goto L_800D67F4; } // 800D67DC
  c->r[3]=c->r[30]+0x00000000u; // 800D67E0
  c->r[5]=c->r[30]+0x000000F0u; // 800D67E4
  c->r[4]=0u+0x00000063u; // 800D67E8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D67EC
  c->lr=0x800D67F4u; f_800F1300(c); // 800D67F0
L_800D67F4:;
  c->r[3]=R32(c->r[29]+0x00000000u); // 800D67F4
  c->r[0]=c->r[3]+0xACA70000u; // 800D67F8
  cmpu(c,0,c->r[0],0x00004D42u); // 800D67FC
  if (crb(c,2)) { goto L_800D6818; } // 800D6800
  c->r[3]=c->r[30]+0x00000000u; // 800D6804
  c->r[5]=c->r[30]+0x0000011Cu; // 800D6808
  c->r[4]=0u+0x00000066u; // 800D680C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D6810
  c->lr=0x800D6818u; f_800F1300(c); // 800D6814
L_800D6818:;
  c->r[4]=c->r[29]+0x00000008u; // 800D6818
  W32(c->r[31]+0x0000002Cu,c->r[4]); // 800D681C
  c->r[0]=R32(c->r[29]+0x00000008u); // 800D6820
  cmps(c,0,(int32_t)c->r[0],0); // 800D6824
  if (!crb(c,2)) { goto L_800D6834; } // 800D6828
  c->r[0]=0u+0x00000000u; // 800D682C
  goto L_800D6838; // 800D6830
L_800D6834:;
  c->r[0]=c->r[0]+c->r[4]; // 800D6834
L_800D6838:;
  W32(c->r[31]+0x00000030u,c->r[0]); // 800D6838
  c->r[0]=R32(c->r[31]+0x0000002Cu); // 800D683C
  c->r[3]=R32(c->r[4]+0x00000004u); // 800D6840
  cmps(c,0,(int32_t)c->r[3],0); // 800D6844
  if (!crb(c,2)) { goto L_800D6854; } // 800D6848
  c->r[0]=0u+0x00000000u; // 800D684C
  goto L_800D6858; // 800D6850
L_800D6854:;
  c->r[0]=c->r[3]+c->r[0]; // 800D6854
L_800D6858:;
  W32(c->r[31]+0x00000034u,c->r[0]); // 800D6858
  c->r[0]=R32(c->r[31]+0x0000002Cu); // 800D685C
  c->r[3]=R32(c->r[4]+0x00000008u); // 800D6860
  cmps(c,0,(int32_t)c->r[3],0); // 800D6864
  if (!crb(c,2)) { goto L_800D6874; } // 800D6868
  c->r[0]=0u+0x00000000u; // 800D686C
  goto L_800D6878; // 800D6870
L_800D6874:;
  c->r[0]=c->r[3]+c->r[0]; // 800D6874
L_800D6878:;
  W32(c->r[31]+0x00000038u,c->r[0]); // 800D6878
  c->r[0]=R32(c->r[31]+0x0000002Cu); // 800D687C
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 800D6880
  cmps(c,0,(int32_t)c->r[3],0); // 800D6884
  if (!crb(c,2)) { goto L_800D6894; } // 800D6888
  c->r[0]=0u+0x00000000u; // 800D688C
  goto L_800D6898; // 800D6890
L_800D6894:;
  c->r[0]=c->r[3]+c->r[0]; // 800D6894
L_800D6898:;
  W32(c->r[31]+0x0000003Cu,c->r[0]); // 800D6898
  c->r[0]=R32(c->r[31]+0x0000002Cu); // 800D689C
  c->r[3]=R32(c->r[4]+0x00000010u); // 800D68A0
  cmps(c,0,(int32_t)c->r[3],0); // 800D68A4
  if (!crb(c,2)) { goto L_800D68B4; } // 800D68A8
  c->r[0]=0u+0x00000000u; // 800D68AC
  goto L_800D68B8; // 800D68B0
L_800D68B4:;
  c->r[0]=c->r[3]+c->r[0]; // 800D68B4
L_800D68B8:;
  W32(c->r[31]+0x00000040u,c->r[0]); // 800D68B8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D68BC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D68C0
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D68C4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D68C8
  c->lr=c->r[0]; // 800D68CC
  c->r[1]=c->r[1]+0x00000020u; // 800D68D0
  return; // 800D68D4
}

// fn_800D68E0
void f_800D68E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D68E0
  c->r[0]=c->lr; // 800D68E4
  cmps(c,0,(int32_t)c->r[4],0); // 800D68E8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D68EC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D68F0
  c->r[31]=0u+0x80250000u; // 800D68F4
  c->r[31]=c->r[31]+0x00007778u; // 800D68F8
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D68FC
  c->r[30]=c->r[4]|c->r[4]; // 800D6900
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D6904
  c->r[29]=c->r[3]|c->r[3]; // 800D6908
  if (!crb(c,2)) { goto L_800D6924; } // 800D690C
  c->r[3]=c->r[31]+0x00000000u; // 800D6910
  c->r[5]=c->r[31]+0x0000017Cu; // 800D6914
  c->r[4]=0u+0x0000007Bu; // 800D6918
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D691C
  c->lr=0x800D6924u; f_800F1300(c); // 800D6920
L_800D6924:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 800D6924
  c->r[0]=c->r[3]+0xB6B20000u; // 800D6928
  cmpu(c,0,c->r[0],0x0000464Fu); // 800D692C
  if (crb(c,2)) { goto L_800D6948; } // 800D6930
  c->r[3]=c->r[31]+0x00000000u; // 800D6934
  c->r[5]=c->r[31]+0x000001A8u; // 800D6938
  c->r[4]=0u+0x0000007Eu; // 800D693C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D6940
  c->lr=0x800D6948u; f_800F1300(c); // 800D6944
L_800D6948:;
  c->r[0]=c->r[30]+0x00000008u; // 800D6948
  W32(c->r[29]+0x00000028u,c->r[0]); // 800D694C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D6950
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D6954
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D6958
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D695C
  c->lr=c->r[0]; // 800D6960
  c->r[1]=c->r[1]+0x00000020u; // 800D6964
  return; // 800D6968
}

// fn_800D6970
void f_800D6970(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6970
  c->r[0]=c->lr; // 800D6974
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D6978
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D697C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D6980
  c->r[30]=R32(c->r[3]+0x00000028u); // 800D6984
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D6988
  c->r[29]=c->r[4]|c->r[4]; // 800D698C
  W32(c->r[1]+0x00000010u,c->r[28]); // 800D6990
  c->r[28]=c->r[3]|c->r[3]; // 800D6994
  c->r[0]=R8(c->r[30]+0x00000001u); // 800D6998
  cmps(c,0,(int32_t)c->r[0],0); // 800D699C
  if (crb(c,2)) { goto L_800D69BC; } // 800D69A0
  c->r[5]=0u+0x80250000u; // 800D69A4
  c->r[3]=c->r[13]+0xFFFF9F48u; // 800D69A8
  c->r[5]=c->r[5]+0x00007C88u; // 800D69AC
  c->r[4]=0u+0x0000008Du; // 800D69B0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D69B4
  c->lr=0x800D69BCu; f_800F1300(c); // 800D69B8
L_800D69BC:;
  c->r[3]=R8(c->r[30]+0x00000000u); // 800D69BC
  c->r[5]=c->r[30]|c->r[30]; // 800D69C0
  c->r[4]=R32(c->r[30]+0x00000004u); // 800D69C4
  c->lr=0x800D69CCu; f_800E7190(c); // 800D69C8
  cmps(c,0,(int32_t)c->r[3],0); // 800D69CC
  c->r[31]=c->r[3]|c->r[3]; // 800D69D0
  if (!crb(c,2)) { goto L_800D69E0; } // 800D69D4
  c->r[3]=0u+0x00000000u; // 800D69D8
  goto L_800D6AA0; // 800D69DC
L_800D69E0:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D69E0
  cmpu(c,0,c->r[29],c->r[0]); // 800D69E4
  if (crb(c,0)) { goto L_800D69F4; } // 800D69E8
  c->r[3]=0u+0x00000000u; // 800D69EC
  goto L_800D6AA0; // 800D69F0
L_800D69F4:;
  c->r[0]=R16(c->r[28]+0x00000006u); // 800D69F4
  cmpu(c,0,c->r[0],0x00000101u); // 800D69F8
  if (crb(c,0)) { goto L_800D6A5C; } // 800D69FC
  c->r[29]=rotl(c->r[29],3)&0xFFFFFFF8u; // 800D6A00
  c->r[30]=R32(c->r[28]+0x00000028u); // 800D6A04
  c->r[3]=c->r[3]+c->r[29]; // 800D6A08
  c->r[0]=R8(c->r[3]+0x00000005u); // 800D6A0C
  cmps(c,0,(int32_t)c->r[0],0); // 800D6A10
  if (crb(c,2)) { goto L_800D6A30; } // 800D6A14
  c->r[5]=0u+0x80250000u; // 800D6A18
  c->r[3]=c->r[13]+0xFFFF9F50u; // 800D6A1C
  c->r[5]=c->r[5]+0x00007CB0u; // 800D6A20
  c->r[4]=0u+0x0000008Du; // 800D6A24
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D6A28
  c->lr=0x800D6A30u; f_800F1300(c); // 800D6A2C
L_800D6A30:;
  c->r[4]=c->r[31]+c->r[29]; // 800D6A30
  c->r[5]=c->r[30]|c->r[30]; // 800D6A34
  c->r[3]=R8(c->r[4]+0x00000004u); // 800D6A38
  c->r[4]=R32(c->r[4]+0x00000008u); // 800D6A3C
  c->lr=0x800D6A44u; f_800E7190(c); // 800D6A40
  cmps(c,0,(int32_t)c->r[3],0); // 800D6A44
  if (!crb(c,2)) { goto L_800D6A54; } // 800D6A48
  c->r[3]=0u+0x00000000u; // 800D6A4C
  goto L_800D6AA0; // 800D6A50
L_800D6A54:;
  c->r[0]=R8(c->r[3]+0x00000016u); // 800D6A54
  goto L_800D6A68; // 800D6A58
L_800D6A5C:;
  c->r[0]=rotl(c->r[29],3)&0xFFFFFFF8u; // 800D6A5C
  c->r[3]=c->r[3]+c->r[0]; // 800D6A60
  c->r[0]=R8(c->r[3]+0x00000005u); // 800D6A64
L_800D6A68:;
  cmps(c,0,(int32_t)c->r[0],1); // 800D6A68
  if (crb(c,2)) { goto L_800D6A84; } // 800D6A6C
  cmps(c,0,(int32_t)c->r[0],2); // 800D6A70
  if (crb(c,2)) { goto L_800D6A8C; } // 800D6A74
  cmps(c,0,(int32_t)c->r[0],3); // 800D6A78
  if (crb(c,2)) { goto L_800D6A94; } // 800D6A7C
  goto L_800D6A9C; // 800D6A80
L_800D6A84:;
  c->r[3]=0u+0x00000001u; // 800D6A84
  goto L_800D6AA0; // 800D6A88
L_800D6A8C:;
  c->r[3]=0u+0x00000002u; // 800D6A8C
  goto L_800D6AA0; // 800D6A90
L_800D6A94:;
  c->r[3]=0u+0x00000003u; // 800D6A94
  goto L_800D6AA0; // 800D6A98
L_800D6A9C:;
  c->r[3]=0u+0x00000000u; // 800D6A9C
L_800D6AA0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D6AA0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D6AA4
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D6AA8
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D6AAC
  c->r[28]=R32(c->r[1]+0x00000010u); // 800D6AB0
  c->lr=c->r[0]; // 800D6AB4
  c->r[1]=c->r[1]+0x00000020u; // 800D6AB8
  return; // 800D6ABC
}

// fn_800D6AC0
void f_800D6AC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6AC0
  c->r[0]=c->lr; // 800D6AC4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D6AC8
  c->r[11]=c->r[1]+0x00000020u; // 800D6ACC
  c->lr=0x800D6AD4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D6AD0
  c->r[28]=R32(c->r[3]+0x00000028u); // 800D6AD4
  c->r[30]=c->r[3]|c->r[3]; // 800D6AD8
  c->r[27]=c->r[4]|c->r[4]; // 800D6ADC
  c->r[31]=c->r[5]|c->r[5]; // 800D6AE0
  c->r[0]=R8(c->r[28]+0x00000001u); // 800D6AE4
  cmps(c,0,(int32_t)c->r[0],0); // 800D6AE8
  if (crb(c,2)) { goto L_800D6B08; } // 800D6AEC
  c->r[5]=0u+0x80250000u; // 800D6AF0
  c->r[3]=c->r[13]+0xFFFF9F48u; // 800D6AF4
  c->r[5]=c->r[5]+0x00007C88u; // 800D6AF8
  c->r[4]=0u+0x0000008Du; // 800D6AFC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D6B00
  c->lr=0x800D6B08u; f_800F1300(c); // 800D6B04
L_800D6B08:;
  c->r[3]=R8(c->r[28]+0x00000000u); // 800D6B08
  c->r[5]=c->r[28]|c->r[28]; // 800D6B0C
  c->r[4]=R32(c->r[28]+0x00000004u); // 800D6B10
  c->lr=0x800D6B18u; f_800E7190(c); // 800D6B14
  cmps(c,0,(int32_t)c->r[3],0); // 800D6B18
  c->r[29]=c->r[3]|c->r[3]; // 800D6B1C
  if (!crb(c,2)) { goto L_800D6B2C; } // 800D6B20
  c->r[3]=0u+0x00000000u; // 800D6B24
  goto L_800D6BA8; // 800D6B28
L_800D6B2C:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D6B2C
  cmpu(c,0,c->r[27],c->r[0]); // 800D6B30
  if (crb(c,0)) { goto L_800D6B40; } // 800D6B34
  c->r[3]=0u+0x00000000u; // 800D6B38
  goto L_800D6BA8; // 800D6B3C
L_800D6B40:;
  c->r[0]=R16(c->r[30]+0x00000006u); // 800D6B40
  cmpu(c,0,c->r[0],0x00000101u); // 800D6B44
  if (crb(c,0)) { goto L_800D6B94; } // 800D6B48
  c->r[27]=rotl(c->r[27],3)&0xFFFFFFF8u; // 800D6B4C
  c->r[28]=R32(c->r[30]+0x00000028u); // 800D6B50
  c->r[3]=c->r[3]+c->r[27]; // 800D6B54
  c->r[0]=R8(c->r[3]+0x00000005u); // 800D6B58
  cmps(c,0,(int32_t)c->r[0],0); // 800D6B5C
  if (crb(c,2)) { goto L_800D6B7C; } // 800D6B60
  c->r[5]=0u+0x80250000u; // 800D6B64
  c->r[3]=c->r[13]+0xFFFF9F50u; // 800D6B68
  c->r[5]=c->r[5]+0x00007CB0u; // 800D6B6C
  c->r[4]=0u+0x0000008Du; // 800D6B70
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D6B74
  c->lr=0x800D6B7Cu; f_800F1300(c); // 800D6B78
L_800D6B7C:;
  c->r[4]=c->r[29]+c->r[27]; // 800D6B7C
  c->r[5]=c->r[28]|c->r[28]; // 800D6B80
  c->r[3]=R8(c->r[4]+0x00000004u); // 800D6B84
  c->r[4]=R32(c->r[4]+0x00000008u); // 800D6B88
  c->lr=0x800D6B90u; f_800E7190(c); // 800D6B8C
  goto L_800D6BA8; // 800D6B90
L_800D6B94:;
  c->r[4]=rotl(c->r[27],3)&0xFFFFFFF8u; // 800D6B94
  c->r[0]=R32(c->r[30]+0x00000028u); // 800D6B98
  c->r[3]=c->r[3]+c->r[4]; // 800D6B9C
  c->r[3]=R32(c->r[3]+0x00000008u); // 800D6BA0
  c->r[3]=c->r[3]+c->r[0]; // 800D6BA4
L_800D6BA8:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D6BA8
  if (!crb(c,2)) { goto L_800D6BB8; } // 800D6BAC
  c->r[3]=0u+0x00000000u; // 800D6BB0
  goto L_800D6C1C; // 800D6BB4
L_800D6BB8:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D6BB8
  W32(c->r[31]+0x00000000u,c->r[0]); // 800D6BBC
  c->r[0]=R16(c->r[30]+0x00000006u); // 800D6BC0
  c->r[4]=R32(c->r[3]+0x00000008u); // 800D6BC4
  W32(c->r[31]+0x00000004u,c->r[4]); // 800D6BC8
  cmpu(c,0,c->r[0],0x00000102u); // 800D6BCC
  c->r[0]=R8(c->r[3]+0x0000002Au); // 800D6BD0
  W32(c->r[31]+0x00000008u,c->r[0]); // 800D6BD4
  c->r[0]=R8(c->r[3]+0x00000015u); // 800D6BD8
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800D6BDC
  c->r[0]=R8(c->r[3]+0x00000014u); // 800D6BE0
  W32(c->r[31]+0x00000010u,c->r[0]); // 800D6BE4
  c->r[0]=R8(c->r[3]+0x00000017u); // 800D6BE8
  W32(c->r[31]+0x00000014u,c->r[0]); // 800D6BEC
  if (crb(c,0)) { goto L_800D6C08; } // 800D6BF0
  c->r[0]=R8(c->r[3]+0x00000028u); // 800D6BF4
  W32(c->r[31]+0x00000018u,c->r[0]); // 800D6BF8
  c->r[0]=R8(c->r[3]+0x00000029u); // 800D6BFC
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 800D6C00
  goto L_800D6C18; // 800D6C04
L_800D6C08:;
  c->r[3]=0u+0x00000001u; // 800D6C08
  c->r[0]=0u+0x00000000u; // 800D6C0C
  W32(c->r[31]+0x00000018u,c->r[3]); // 800D6C10
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 800D6C14
L_800D6C18:;
  c->r[3]=0u+0x00000001u; // 800D6C18
L_800D6C1C:;
  c->r[11]=c->r[1]+0x00000020u; // 800D6C1C
  c->lr=0x800D6C24u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D6C20
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D6C24
  c->lr=c->r[0]; // 800D6C28
  c->r[1]=c->r[1]+0x00000020u; // 800D6C2C
  return; // 800D6C30
}

// fn_800D6C40
void f_800D6C40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6C40
  c->r[0]=c->lr; // 800D6C44
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D6C48
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D6C4C
  c->r[31]=c->r[4]|c->r[4]; // 800D6C50
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D6C54
  c->r[30]=c->r[5]|c->r[5]; // 800D6C58
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D6C5C
  c->r[29]=c->r[3]|c->r[3]; // 800D6C60
  c->lr=0x800D6C68u; f_800D6970(c); // 800D6C64
  cmps(c,0,(int32_t)c->r[3],1); // 800D6C68
  if (crb(c,2)) { goto L_800D6C78; } // 800D6C6C
  c->r[3]=0u+0x00000000u; // 800D6C70
  goto L_800D6CD0; // 800D6C74
L_800D6C78:;
  c->r[3]=c->r[29]|c->r[29]; // 800D6C78
  c->r[4]=c->r[31]|c->r[31]; // 800D6C7C
  c->r[5]=c->r[1]+0x00000008u; // 800D6C80
  c->lr=0x800D6C88u; f_800D7C20(c); // 800D6C84
  cmps(c,0,(int32_t)c->r[3],0); // 800D6C88
  if (!crb(c,2)) { goto L_800D6C98; } // 800D6C8C
  c->r[3]=0u+0x00000000u; // 800D6C90
  goto L_800D6CD0; // 800D6C94
L_800D6C98:;
  c->r[0]=R8(c->r[1]+0x00000009u); // 800D6C98
  c->r[31]=R32(c->r[29]+0x00000028u); // 800D6C9C
  cmpu(c,0,c->r[0],0x00000001u); // 800D6CA0
  if (crb(c,2)) { goto L_800D6CC0; } // 800D6CA4
  c->r[5]=0u+0x80250000u; // 800D6CA8
  c->r[3]=c->r[13]+0xFFFF9EF0u; // 800D6CAC
  c->r[5]=c->r[5]+0x00007A80u; // 800D6CB0
  c->r[4]=0u+0x0000008Eu; // 800D6CB4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D6CB8
  c->lr=0x800D6CC0u; f_800F1300(c); // 800D6CBC
L_800D6CC0:;
  c->r[3]=R8(c->r[1]+0x00000008u); // 800D6CC0
  c->r[5]=c->r[31]|c->r[31]; // 800D6CC4
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 800D6CC8
  c->lr=0x800D6CD0u; f_800E7190(c); // 800D6CCC
L_800D6CD0:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D6CD0
  if (!crb(c,2)) { goto L_800D6CE0; } // 800D6CD4
  c->r[3]=0u+0x00000000u; // 800D6CD8
  goto L_800D6D30; // 800D6CDC
L_800D6CE0:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D6CE0
  W32(c->r[30]+0x00000000u,c->r[0]); // 800D6CE4
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D6CE8
  W32(c->r[30]+0x00000004u,c->r[0]); // 800D6CEC
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 800D6CF0
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 800D6CF4
  c->r[0]=R32(c->r[3]+0x00000008u); // 800D6CF8
  W32(c->r[30]+0x00000008u,c->r[0]); // 800D6CFC
  c->r[0]=R16(c->r[29]+0x00000006u); // 800D6D00
  cmpu(c,0,c->r[0],0x00000103u); // 800D6D04
  if (crb(c,0)) { goto L_800D6D24; } // 800D6D08
  c->r[3]=R8(c->r[3]+0x0000000Du); // 800D6D0C
  c->r[0]=0u-c->r[3]; // 800D6D10
  c->r[0]=c->r[0]|c->r[3]; // 800D6D14
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800D6D18
  W8(c->r[30]+0x00000010u,c->r[0]); // 800D6D1C
  goto L_800D6D2C; // 800D6D20
L_800D6D24:;
  c->r[0]=0u+0x00000000u; // 800D6D24
  W8(c->r[30]+0x00000010u,c->r[0]); // 800D6D28
L_800D6D2C:;
  c->r[3]=0u+0x00000001u; // 800D6D2C
L_800D6D30:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D6D30
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D6D34
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D6D38
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D6D3C
  c->lr=c->r[0]; // 800D6D40
  c->r[1]=c->r[1]+0x00000020u; // 800D6D44
  return; // 800D6D48
}

// fn_800D6D50
void f_800D6D50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6D50
  c->r[0]=c->lr; // 800D6D54
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D6D58
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D6D5C
  c->r[31]=c->r[4]|c->r[4]; // 800D6D60
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D6D64
  c->r[30]=c->r[5]|c->r[5]; // 800D6D68
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D6D6C
  c->r[29]=c->r[3]|c->r[3]; // 800D6D70
  c->lr=0x800D6D78u; f_800D6970(c); // 800D6D74
  cmps(c,0,(int32_t)c->r[3],2); // 800D6D78
  if (crb(c,2)) { goto L_800D6D88; } // 800D6D7C
  c->r[3]=0u+0x00000000u; // 800D6D80
  goto L_800D6DE0; // 800D6D84
L_800D6D88:;
  c->r[3]=c->r[29]|c->r[29]; // 800D6D88
  c->r[4]=c->r[31]|c->r[31]; // 800D6D8C
  c->r[5]=c->r[1]+0x00000008u; // 800D6D90
  c->lr=0x800D6D98u; f_800D7C20(c); // 800D6D94
  cmps(c,0,(int32_t)c->r[3],0); // 800D6D98
  if (!crb(c,2)) { goto L_800D6DA8; } // 800D6D9C
  c->r[3]=0u+0x00000000u; // 800D6DA0
  goto L_800D6DE0; // 800D6DA4
L_800D6DA8:;
  c->r[0]=R8(c->r[1]+0x00000009u); // 800D6DA8
  c->r[31]=R32(c->r[29]+0x00000028u); // 800D6DAC
  cmpu(c,0,c->r[0],0x00000002u); // 800D6DB0
  if (crb(c,2)) { goto L_800D6DD0; } // 800D6DB4
  c->r[5]=0u+0x80250000u; // 800D6DB8
  c->r[3]=c->r[13]+0xFFFF9EE8u; // 800D6DBC
  c->r[5]=c->r[5]+0x00007A58u; // 800D6DC0
  c->r[4]=0u+0x0000008Fu; // 800D6DC4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D6DC8
  c->lr=0x800D6DD0u; f_800F1300(c); // 800D6DCC
L_800D6DD0:;
  c->r[3]=R8(c->r[1]+0x00000008u); // 800D6DD0
  c->r[5]=c->r[31]|c->r[31]; // 800D6DD4
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 800D6DD8
  c->lr=0x800D6DE0u; f_800E7190(c); // 800D6DDC
L_800D6DE0:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D6DE0
  if (!crb(c,2)) { goto L_800D6DF0; } // 800D6DE4
  c->r[3]=0u+0x00000000u; // 800D6DE8
  goto L_800D6E60; // 800D6DEC
L_800D6DF0:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D6DF0
  W32(c->r[30]+0x00000000u,c->r[0]); // 800D6DF4
  c->r[0]=R16(c->r[3]+0x00000006u); // 800D6DF8
  W16(c->r[30]+0x00000006u,c->r[0]); // 800D6DFC
  c->r[0]=R16(c->r[29]+0x00000006u); // 800D6E00
  cmpu(c,0,c->r[0],0x00000104u); // 800D6E04
  if (crb(c,0)) { goto L_800D6E18; } // 800D6E08
  c->r[0]=R16(c->r[3]+0x00000004u); // 800D6E0C
  W16(c->r[30]+0x00000004u,c->r[0]); // 800D6E10
  goto L_800D6E5C; // 800D6E14
L_800D6E18:;
  c->r[0]=0u+0x00000000u; // 800D6E18
  W16(c->r[30]+0x00000004u,c->r[0]); // 800D6E1C
  c->r[4]=R16(c->r[3]+0x00000004u); // 800D6E20
  goto L_800D6E54; // 800D6E24
L_800D6E28:;
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 800D6E28
  if (crb(c,2)) { goto L_800D6E40; } // 800D6E2C
  c->r[3]=R16(c->r[30]+0x00000004u); // 800D6E30
  c->r[0]=c->r[3]+0x00000001u; // 800D6E34
  W16(c->r[30]+0x00000004u,c->r[0]); // 800D6E38
  goto L_800D6E50; // 800D6E3C
L_800D6E40:;
  c->r[0]=rotl(c->r[4],0)&0x0000FFFFu; cr0(c,c->r[0]); // 800D6E40
  if (crb(c,2)) { goto L_800D6E50; } // 800D6E44
  c->r[3]=0u+0x00000000u; // 800D6E48
  goto L_800D6E60; // 800D6E4C
L_800D6E50:;
  c->r[4]=rotl(c->r[4],31)&0x00007FFFu; // 800D6E50
L_800D6E54:;
  c->r[0]=rotl(c->r[4],0)&0x0000FFFFu; cr0(c,c->r[0]); // 800D6E54
  if (!crb(c,2)) { IRQCHK(c); goto L_800D6E28; } // 800D6E58
L_800D6E5C:;
  c->r[3]=0u+0x00000001u; // 800D6E5C
L_800D6E60:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D6E60
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D6E64
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D6E68
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D6E6C
  c->lr=c->r[0]; // 800D6E70
  c->r[1]=c->r[1]+0x00000020u; // 800D6E74
  return; // 800D6E78
}

// fn_800D6E80
void f_800D6E80(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6E80
  c->r[0]=c->lr; // 800D6E84
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D6E88
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D6E8C
  c->r[31]=c->r[4]|c->r[4]; // 800D6E90
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D6E94
  c->r[30]=c->r[5]|c->r[5]; // 800D6E98
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D6E9C
  c->r[29]=c->r[3]|c->r[3]; // 800D6EA0
  c->lr=0x800D6EA8u; f_800D6970(c); // 800D6EA4
  cmps(c,0,(int32_t)c->r[3],3); // 800D6EA8
  if (crb(c,2)) { goto L_800D6EB8; } // 800D6EAC
  c->r[3]=0u+0x00000000u; // 800D6EB0
  goto L_800D6F10; // 800D6EB4
L_800D6EB8:;
  c->r[3]=c->r[29]|c->r[29]; // 800D6EB8
  c->r[4]=c->r[31]|c->r[31]; // 800D6EBC
  c->r[5]=c->r[1]+0x00000008u; // 800D6EC0
  c->lr=0x800D6EC8u; f_800D7C20(c); // 800D6EC4
  cmps(c,0,(int32_t)c->r[3],0); // 800D6EC8
  if (!crb(c,2)) { goto L_800D6ED8; } // 800D6ECC
  c->r[3]=0u+0x00000000u; // 800D6ED0
  goto L_800D6F10; // 800D6ED4
L_800D6ED8:;
  c->r[0]=R8(c->r[1]+0x00000009u); // 800D6ED8
  c->r[31]=R32(c->r[29]+0x00000028u); // 800D6EDC
  cmpu(c,0,c->r[0],0x00000003u); // 800D6EE0
  if (crb(c,2)) { goto L_800D6F00; } // 800D6EE4
  c->r[5]=0u+0x80250000u; // 800D6EE8
  c->r[3]=c->r[13]+0xFFFF9EE0u; // 800D6EEC
  c->r[5]=c->r[5]+0x00007A30u; // 800D6EF0
  c->r[4]=0u+0x00000090u; // 800D6EF4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D6EF8
  c->lr=0x800D6F00u; f_800F1300(c); // 800D6EFC
L_800D6F00:;
  c->r[3]=R8(c->r[1]+0x00000008u); // 800D6F00
  c->r[5]=c->r[31]|c->r[31]; // 800D6F04
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 800D6F08
  c->lr=0x800D6F10u; f_800E7190(c); // 800D6F0C
L_800D6F10:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D6F10
  if (!crb(c,2)) { goto L_800D6F20; } // 800D6F14
  c->r[3]=0u+0x00000000u; // 800D6F18
  goto L_800D6F60; // 800D6F1C
L_800D6F20:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D6F20
  W32(c->r[30]+0x00000000u,c->r[0]); // 800D6F24
  c->r[0]=R8(c->r[3]+0x00000008u); // 800D6F28
  W32(c->r[30]+0x00000004u,c->r[0]); // 800D6F2C
  c->r[0]=R16(c->r[29]+0x00000006u); // 800D6F30
  cmpu(c,0,c->r[0],0x00000103u); // 800D6F34
  if (crb(c,0)) { goto L_800D6F54; } // 800D6F38
  c->r[3]=R8(c->r[3]+0x00000009u); // 800D6F3C
  c->r[0]=0u-c->r[3]; // 800D6F40
  c->r[0]=c->r[0]|c->r[3]; // 800D6F44
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800D6F48
  W8(c->r[30]+0x00000008u,c->r[0]); // 800D6F4C
  goto L_800D6F5C; // 800D6F50
L_800D6F54:;
  c->r[0]=0u+0x00000000u; // 800D6F54
  W8(c->r[30]+0x00000008u,c->r[0]); // 800D6F58
L_800D6F5C:;
  c->r[3]=0u+0x00000001u; // 800D6F5C
L_800D6F60:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D6F60
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D6F64
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D6F68
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D6F6C
  c->lr=c->r[0]; // 800D6F70
  c->r[1]=c->r[1]+0x00000020u; // 800D6F74
  return; // 800D6F78
}

// fn_800D6F80
void f_800D6F80(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6F80
  c->r[0]=c->lr; // 800D6F84
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D6F88
  c->r[11]=c->r[1]+0x00000020u; // 800D6F8C
  c->lr=0x800D6F94u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D6F90
  c->r[30]=R32(c->r[3]+0x00000028u); // 800D6F94
  c->r[27]=c->r[3]|c->r[3]; // 800D6F98
  c->r[29]=c->r[4]|c->r[4]; // 800D6F9C
  c->r[28]=c->r[5]|c->r[5]; // 800D6FA0
  c->r[0]=R8(c->r[30]+0x00000009u); // 800D6FA4
  cmps(c,0,(int32_t)c->r[0],0); // 800D6FA8
  if (crb(c,2)) { goto L_800D6FC8; } // 800D6FAC
  c->r[5]=0u+0x80250000u; // 800D6FB0
  c->r[3]=c->r[13]+0xFFFF9F18u; // 800D6FB4
  c->r[5]=c->r[5]+0x00007B48u; // 800D6FB8
  c->r[4]=0u+0x0000008Du; // 800D6FBC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D6FC0
  c->lr=0x800D6FC8u; f_800F1300(c); // 800D6FC4
L_800D6FC8:;
  c->r[3]=R8(c->r[30]+0x00000008u); // 800D6FC8
  c->r[5]=c->r[30]|c->r[30]; // 800D6FCC
  c->r[4]=R32(c->r[30]+0x0000000Cu); // 800D6FD0
  c->lr=0x800D6FD8u; f_800E7190(c); // 800D6FD4
  cmps(c,0,(int32_t)c->r[3],0); // 800D6FD8
  c->r[31]=c->r[3]|c->r[3]; // 800D6FDC
  if (!crb(c,2)) { goto L_800D6FEC; } // 800D6FE0
  c->r[3]=0u+0x00000000u; // 800D6FE4
  goto L_800D7044; // 800D6FE8
L_800D6FEC:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D6FEC
  cmpu(c,0,c->r[29],c->r[0]); // 800D6FF0
  if (crb(c,0)) { goto L_800D7000; } // 800D6FF4
  c->r[3]=0u+0x00000000u; // 800D6FF8
  goto L_800D7044; // 800D6FFC
L_800D7000:;
  c->r[29]=rotl(c->r[29],3)&0xFFFFFFF8u; // 800D7000
  c->r[30]=R32(c->r[27]+0x00000028u); // 800D7004
  c->r[3]=c->r[3]+c->r[29]; // 800D7008
  c->r[0]=R8(c->r[3]+0x00000005u); // 800D700C
  cmps(c,0,(int32_t)c->r[0],0); // 800D7010
  if (crb(c,2)) { goto L_800D7030; } // 800D7014
  c->r[5]=0u+0x80250000u; // 800D7018
  c->r[3]=c->r[13]+0xFFFF9ED8u; // 800D701C
  c->r[5]=c->r[5]+0x00007A08u; // 800D7020
  c->r[4]=0u+0x0000008Du; // 800D7024
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D7028
  c->lr=0x800D7030u; f_800F1300(c); // 800D702C
L_800D7030:;
  c->r[4]=c->r[31]+c->r[29]; // 800D7030
  c->r[5]=c->r[30]|c->r[30]; // 800D7034
  c->r[3]=R8(c->r[4]+0x00000004u); // 800D7038
  c->r[4]=R32(c->r[4]+0x00000008u); // 800D703C
  c->lr=0x800D7044u; f_800E7190(c); // 800D7040
L_800D7044:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D7044
  if (!crb(c,2)) { goto L_800D7054; } // 800D7048
  c->r[3]=0u+0x00000000u; // 800D704C
  goto L_800D7060; // 800D7050
L_800D7054:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D7054
  c->r[3]=0u+0x00000001u; // 800D7058
  W32(c->r[28]+0x00000000u,c->r[0]); // 800D705C
L_800D7060:;
  c->r[11]=c->r[1]+0x00000020u; // 800D7060
  c->lr=0x800D7068u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D7064
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D7068
  c->lr=c->r[0]; // 800D706C
  c->r[1]=c->r[1]+0x00000020u; // 800D7070
  return; // 800D7074
}

// fn_800D7080
void f_800D7080(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7080
  c->r[0]=c->lr; // 800D7084
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D7088
  c->r[11]=c->r[1]+0x00000020u; // 800D708C
  c->lr=0x800D7094u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D7090
  c->r[30]=R32(c->r[3]+0x00000028u); // 800D7094
  c->r[27]=c->r[3]|c->r[3]; // 800D7098
  c->r[29]=c->r[4]|c->r[4]; // 800D709C
  c->r[28]=c->r[5]|c->r[5]; // 800D70A0
  c->r[0]=R8(c->r[30]+0x00000011u); // 800D70A4
  cmps(c,0,(int32_t)c->r[0],0); // 800D70A8
  if (crb(c,2)) { goto L_800D70C8; } // 800D70AC
  c->r[5]=0u+0x80250000u; // 800D70B0
  c->r[3]=c->r[13]+0xFFFF9F28u; // 800D70B4
  c->r[5]=c->r[5]+0x00007B98u; // 800D70B8
  c->r[4]=0u+0x0000008Du; // 800D70BC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D70C0
  c->lr=0x800D70C8u; f_800F1300(c); // 800D70C4
L_800D70C8:;
  c->r[3]=R8(c->r[30]+0x00000010u); // 800D70C8
  c->r[5]=c->r[30]|c->r[30]; // 800D70CC
  c->r[4]=R32(c->r[30]+0x00000014u); // 800D70D0
  c->lr=0x800D70D8u; f_800E7190(c); // 800D70D4
  cmps(c,0,(int32_t)c->r[3],0); // 800D70D8
  c->r[31]=c->r[3]|c->r[3]; // 800D70DC
  if (!crb(c,2)) { goto L_800D70EC; } // 800D70E0
  c->r[4]=0u+0x00000000u; // 800D70E4
  goto L_800D7148; // 800D70E8
L_800D70EC:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D70EC
  cmpu(c,0,c->r[29],c->r[0]); // 800D70F0
  if (crb(c,0)) { goto L_800D7100; } // 800D70F4
  c->r[4]=0u+0x00000000u; // 800D70F8
  goto L_800D7148; // 800D70FC
L_800D7100:;
  c->r[29]=rotl(c->r[29],3)&0xFFFFFFF8u; // 800D7100
  c->r[30]=R32(c->r[27]+0x00000028u); // 800D7104
  c->r[3]=c->r[3]+c->r[29]; // 800D7108
  c->r[0]=R8(c->r[3]+0x00000005u); // 800D710C
  cmps(c,0,(int32_t)c->r[0],0); // 800D7110
  if (crb(c,2)) { goto L_800D7130; } // 800D7114
  c->r[5]=0u+0x80250000u; // 800D7118
  c->r[3]=c->r[13]+0xFFFF9ED0u; // 800D711C
  c->r[5]=c->r[5]+0x000079E0u; // 800D7120
  c->r[4]=0u+0x0000008Du; // 800D7124
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D7128
  c->lr=0x800D7130u; f_800F1300(c); // 800D712C
L_800D7130:;
  c->r[4]=c->r[31]+c->r[29]; // 800D7130
  c->r[5]=c->r[30]|c->r[30]; // 800D7134
  c->r[3]=R8(c->r[4]+0x00000004u); // 800D7138
  c->r[4]=R32(c->r[4]+0x00000008u); // 800D713C
  c->lr=0x800D7144u; f_800E7190(c); // 800D7140
  c->r[4]=c->r[3]|c->r[3]; // 800D7144
L_800D7148:;
  cmps(c,0,(int32_t)c->r[4],0); // 800D7148
  if (!crb(c,2)) { goto L_800D7158; } // 800D714C
  c->r[3]=0u+0x00000000u; // 800D7150
  goto L_800D716C; // 800D7154
L_800D7158:;
  c->r[0]=R8(c->r[4]+0x00000004u); // 800D7158
  c->r[3]=0u+0x00000001u; // 800D715C
  W32(c->r[28]+0x00000000u,c->r[0]); // 800D7160
  c->r[0]=R32(c->r[4]+0x00000008u); // 800D7164
  W32(c->r[28]+0x00000004u,c->r[0]); // 800D7168
L_800D716C:;
  c->r[11]=c->r[1]+0x00000020u; // 800D716C
  c->lr=0x800D7174u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D7170
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D7174
  c->lr=c->r[0]; // 800D7178
  c->r[1]=c->r[1]+0x00000020u; // 800D717C
  return; // 800D7180
}

// fn_800D7190
void f_800D7190(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7190
  c->r[0]=c->lr; // 800D7194
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D7198
  c->r[11]=c->r[1]+0x00000020u; // 800D719C
  c->lr=0x800D71A4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D71A0
  c->r[28]=R32(c->r[3]+0x00000028u); // 800D71A4
  c->r[27]=c->r[3]|c->r[3]; // 800D71A8
  c->r[29]=c->r[4]|c->r[4]; // 800D71AC
  c->r[31]=c->r[5]|c->r[5]; // 800D71B0
  c->r[0]=R8(c->r[28]+0x00000021u); // 800D71B4
  cmps(c,0,(int32_t)c->r[0],0); // 800D71B8
  if (crb(c,2)) { goto L_800D71D8; } // 800D71BC
  c->r[5]=0u+0x80250000u; // 800D71C0
  c->r[3]=c->r[13]+0xFFFF9F20u; // 800D71C4
  c->r[5]=c->r[5]+0x00007B70u; // 800D71C8
  c->r[4]=0u+0x0000008Du; // 800D71CC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D71D0
  c->lr=0x800D71D8u; f_800F1300(c); // 800D71D4
L_800D71D8:;
  c->r[3]=R8(c->r[28]+0x00000020u); // 800D71D8
  c->r[5]=c->r[28]|c->r[28]; // 800D71DC
  c->r[4]=R32(c->r[28]+0x00000024u); // 800D71E0
  c->lr=0x800D71E8u; f_800E7190(c); // 800D71E4
  cmps(c,0,(int32_t)c->r[3],0); // 800D71E8
  c->r[30]=c->r[3]|c->r[3]; // 800D71EC
  if (!crb(c,2)) { goto L_800D71FC; } // 800D71F0
  c->r[29]=0u+0x00000000u; // 800D71F4
  goto L_800D7258; // 800D71F8
L_800D71FC:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D71FC
  cmpu(c,0,c->r[29],c->r[0]); // 800D7200
  if (crb(c,0)) { goto L_800D7210; } // 800D7204
  c->r[29]=0u+0x00000000u; // 800D7208
  goto L_800D7258; // 800D720C
L_800D7210:;
  c->r[28]=rotl(c->r[29],3)&0xFFFFFFF8u; // 800D7210
  c->r[29]=R32(c->r[27]+0x00000028u); // 800D7214
  c->r[3]=c->r[3]+c->r[28]; // 800D7218
  c->r[0]=R8(c->r[3]+0x00000005u); // 800D721C
  cmps(c,0,(int32_t)c->r[0],0); // 800D7220
  if (crb(c,2)) { goto L_800D7240; } // 800D7224
  c->r[5]=0u+0x80250000u; // 800D7228
  c->r[3]=c->r[13]+0xFFFF9EC8u; // 800D722C
  c->r[5]=c->r[5]+0x000079B8u; // 800D7230
  c->r[4]=0u+0x0000008Du; // 800D7234
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D7238
  c->lr=0x800D7240u; f_800F1300(c); // 800D723C
L_800D7240:;
  c->r[4]=c->r[30]+c->r[28]; // 800D7240
  c->r[5]=c->r[29]|c->r[29]; // 800D7244
  c->r[3]=R8(c->r[4]+0x00000004u); // 800D7248
  c->r[4]=R32(c->r[4]+0x00000008u); // 800D724C
  c->lr=0x800D7254u; f_800E7190(c); // 800D7250
  c->r[29]=c->r[3]|c->r[3]; // 800D7254
L_800D7258:;
  cmps(c,0,(int32_t)c->r[29],0); // 800D7258
  if (!crb(c,2)) { goto L_800D7268; } // 800D725C
  c->r[3]=0u+0x00000000u; // 800D7260
  goto L_800D731C; // 800D7264
L_800D7268:;
  c->r[0]=R8(c->r[29]+0x00000021u); // 800D7268
  c->r[30]=R32(c->r[27]+0x00000028u); // 800D726C
  cmps(c,0,(int32_t)c->r[0],0); // 800D7270
  if (crb(c,2)) { goto L_800D7290; } // 800D7274
  c->r[5]=0u+0x80250000u; // 800D7278
  c->r[3]=c->r[13]+0xFFFF9F40u; // 800D727C
  c->r[5]=c->r[5]+0x00007C10u; // 800D7280
  c->r[4]=0u+0x0000008Du; // 800D7284
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D7288
  c->lr=0x800D7290u; f_800F1300(c); // 800D728C
L_800D7290:;
  c->r[3]=R8(c->r[29]+0x00000020u); // 800D7290
  c->r[5]=c->r[30]|c->r[30]; // 800D7294
  c->r[4]=R32(c->r[29]+0x00000024u); // 800D7298
  c->lr=0x800D72A0u; f_800E7190(c); // 800D729C
  cmps(c,0,(int32_t)c->r[3],0); // 800D72A0
  c->r[30]=c->r[3]|c->r[3]; // 800D72A4
  if (!crb(c,2)) { goto L_800D72B4; } // 800D72A8
  c->r[3]=0u+0x00000000u; // 800D72AC
  goto L_800D731C; // 800D72B0
L_800D72B4:;
  c->r[0]=R8(c->r[29]+0x00000009u); // 800D72B4
  c->r[28]=R32(c->r[27]+0x00000028u); // 800D72B8
  cmps(c,0,(int32_t)c->r[0],0); // 800D72BC
  if (crb(c,2)) { goto L_800D72DC; } // 800D72C0
  c->r[5]=0u+0x80250000u; // 800D72C4
  c->r[3]=c->r[13]+0xFFFF9E70u; // 800D72C8
  c->r[5]=c->r[5]+0x00004F68u; // 800D72CC
  c->r[4]=0u+0x0000008Du; // 800D72D0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D72D4
  c->lr=0x800D72DCu; f_800F1300(c); // 800D72D8
L_800D72DC:;
  c->r[3]=R8(c->r[29]+0x00000008u); // 800D72DC
  c->r[5]=c->r[28]|c->r[28]; // 800D72E0
  c->r[4]=R32(c->r[29]+0x0000000Cu); // 800D72E4
  c->lr=0x800D72ECu; f_800E7190(c); // 800D72E8
  W32(c->r[31]+0x00000004u,c->r[3]); // 800D72EC
  c->r[3]=0u+0x00000001u; // 800D72F0
  c->r[0]=R32(c->r[29]+0x00000010u); // 800D72F4
  W32(c->r[31]+0x00000008u,c->r[0]); // 800D72F8
  c->r[0]=R32(c->r[29]+0x00000014u); // 800D72FC
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800D7300
  c->r[0]=R32(c->r[29]+0x00000018u); // 800D7304
  W32(c->r[31]+0x00000010u,c->r[0]); // 800D7308
  c->r[0]=R32(c->r[29]+0x0000001Cu); // 800D730C
  W32(c->r[31]+0x00000014u,c->r[0]); // 800D7310
  c->r[0]=R32(c->r[30]+0x00000000u); // 800D7314
  W32(c->r[31]+0x00000000u,c->r[0]); // 800D7318
L_800D731C:;
  c->r[11]=c->r[1]+0x00000020u; // 800D731C
  c->lr=0x800D7324u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D7320
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D7324
  c->lr=c->r[0]; // 800D7328
  c->r[1]=c->r[1]+0x00000020u; // 800D732C
  return; // 800D7330
}

// fn_800D7340
void f_800D7340(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7340
  c->r[0]=c->lr; // 800D7344
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D7348
  c->r[11]=c->r[1]+0x00000020u; // 800D734C
  c->lr=0x800D7354u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D7350
  c->r[28]=R32(c->r[3]+0x00000028u); // 800D7354
  c->r[30]=c->r[3]|c->r[3]; // 800D7358
  c->r[27]=c->r[4]|c->r[4]; // 800D735C
  c->r[26]=c->r[5]|c->r[5]; // 800D7360
  c->r[0]=R8(c->r[28]+0x00000021u); // 800D7364
  c->r[31]=c->r[6]|c->r[6]; // 800D7368
  cmps(c,0,(int32_t)c->r[0],0); // 800D736C
  if (crb(c,2)) { goto L_800D738C; } // 800D7370
  c->r[5]=0u+0x80250000u; // 800D7374
  c->r[3]=c->r[13]+0xFFFF9F20u; // 800D7378
  c->r[5]=c->r[5]+0x00007B70u; // 800D737C
  c->r[4]=0u+0x0000008Du; // 800D7380
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D7384
  c->lr=0x800D738Cu; f_800F1300(c); // 800D7388
L_800D738C:;
  c->r[3]=R8(c->r[28]+0x00000020u); // 800D738C
  c->r[5]=c->r[28]|c->r[28]; // 800D7390
  c->r[4]=R32(c->r[28]+0x00000024u); // 800D7394
  c->lr=0x800D739Cu; f_800E7190(c); // 800D7398
  cmps(c,0,(int32_t)c->r[3],0); // 800D739C
  c->r[29]=c->r[3]|c->r[3]; // 800D73A0
  if (!crb(c,2)) { goto L_800D73B0; } // 800D73A4
  c->r[29]=0u+0x00000000u; // 800D73A8
  goto L_800D740C; // 800D73AC
L_800D73B0:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D73B0
  cmpu(c,0,c->r[27],c->r[0]); // 800D73B4
  if (crb(c,0)) { goto L_800D73C4; } // 800D73B8
  c->r[29]=0u+0x00000000u; // 800D73BC
  goto L_800D740C; // 800D73C0
L_800D73C4:;
  c->r[27]=rotl(c->r[27],3)&0xFFFFFFF8u; // 800D73C4
  c->r[28]=R32(c->r[30]+0x00000028u); // 800D73C8
  c->r[3]=c->r[3]+c->r[27]; // 800D73CC
  c->r[0]=R8(c->r[3]+0x00000005u); // 800D73D0
  cmps(c,0,(int32_t)c->r[0],0); // 800D73D4
  if (crb(c,2)) { goto L_800D73F4; } // 800D73D8
  c->r[5]=0u+0x80250000u; // 800D73DC
  c->r[3]=c->r[13]+0xFFFF9EC8u; // 800D73E0
  c->r[5]=c->r[5]+0x000079B8u; // 800D73E4
  c->r[4]=0u+0x0000008Du; // 800D73E8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D73EC
  c->lr=0x800D73F4u; f_800F1300(c); // 800D73F0
L_800D73F4:;
  c->r[4]=c->r[29]+c->r[27]; // 800D73F4
  c->r[5]=c->r[28]|c->r[28]; // 800D73F8
  c->r[3]=R8(c->r[4]+0x00000004u); // 800D73FC
  c->r[4]=R32(c->r[4]+0x00000008u); // 800D7400
  c->lr=0x800D7408u; f_800E7190(c); // 800D7404
  c->r[29]=c->r[3]|c->r[3]; // 800D7408
L_800D740C:;
  cmps(c,0,(int32_t)c->r[29],0); // 800D740C
  if (!crb(c,2)) { goto L_800D741C; } // 800D7410
  c->r[3]=0u+0x00000000u; // 800D7414
  goto L_800D74FC; // 800D7418
L_800D741C:;
  c->r[0]=R8(c->r[29]+0x00000021u); // 800D741C
  c->r[28]=R32(c->r[30]+0x00000028u); // 800D7420
  cmps(c,0,(int32_t)c->r[0],0); // 800D7424
  if (crb(c,2)) { goto L_800D7444; } // 800D7428
  c->r[5]=0u+0x80250000u; // 800D742C
  c->r[3]=c->r[13]+0xFFFF9F40u; // 800D7430
  c->r[5]=c->r[5]+0x00007C10u; // 800D7434
  c->r[4]=0u+0x0000008Du; // 800D7438
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D743C
  c->lr=0x800D7444u; f_800F1300(c); // 800D7440
L_800D7444:;
  c->r[3]=R8(c->r[29]+0x00000020u); // 800D7444
  c->r[5]=c->r[28]|c->r[28]; // 800D7448
  c->r[4]=R32(c->r[29]+0x00000024u); // 800D744C
  c->lr=0x800D7454u; f_800E7190(c); // 800D7450
  cmps(c,0,(int32_t)c->r[3],0); // 800D7454
  c->r[29]=c->r[3]|c->r[3]; // 800D7458
  if (!crb(c,2)) { goto L_800D7468; } // 800D745C
  c->r[3]=0u+0x00000000u; // 800D7460
  goto L_800D74FC; // 800D7464
L_800D7468:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D7468
  cmpu(c,0,c->r[26],c->r[0]); // 800D746C
  if (crb(c,0)) { goto L_800D747C; } // 800D7470
  c->r[3]=0u+0x00000000u; // 800D7474
  goto L_800D74FC; // 800D7478
L_800D747C:;
  c->r[27]=rotl(c->r[26],3)&0xFFFFFFF8u; // 800D747C
  c->r[28]=R32(c->r[30]+0x00000028u); // 800D7480
  c->r[3]=c->r[3]+c->r[27]; // 800D7484
  c->r[0]=R8(c->r[3]+0x00000005u); // 800D7488
  cmps(c,0,(int32_t)c->r[0],0); // 800D748C
  if (crb(c,2)) { goto L_800D74AC; } // 800D7490
  c->r[5]=0u+0x80250000u; // 800D7494
  c->r[3]=c->r[13]+0xFFFF9F38u; // 800D7498
  c->r[5]=c->r[5]+0x00007BE8u; // 800D749C
  c->r[4]=0u+0x0000008Du; // 800D74A0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D74A4
  c->lr=0x800D74ACu; f_800F1300(c); // 800D74A8
L_800D74AC:;
  c->r[4]=c->r[29]+c->r[27]; // 800D74AC
  c->r[5]=c->r[28]|c->r[28]; // 800D74B0
  c->r[3]=R8(c->r[4]+0x00000004u); // 800D74B4
  c->r[4]=R32(c->r[4]+0x00000008u); // 800D74B8
  c->lr=0x800D74C0u; f_800E7190(c); // 800D74BC
  cmps(c,0,(int32_t)c->r[3],0); // 800D74C0
  if (!crb(c,2)) { goto L_800D74D0; } // 800D74C4
  c->r[3]=0u+0x00000000u; // 800D74C8
  goto L_800D74FC; // 800D74CC
L_800D74D0:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D74D0
  W32(c->r[31]+0x00000000u,c->r[0]); // 800D74D4
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D74D8
  W32(c->r[31]+0x00000004u,c->r[0]); // 800D74DC
  c->r[0]=R32(c->r[3]+0x00000008u); // 800D74E0
  W32(c->r[31]+0x00000008u,c->r[0]); // 800D74E4
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800D74E8
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800D74EC
  c->r[0]=R32(c->r[3]+0x00000010u); // 800D74F0
  c->r[3]=0u+0x00000001u; // 800D74F4
  W32(c->r[31]+0x00000010u,c->r[0]); // 800D74F8
L_800D74FC:;
  c->r[11]=c->r[1]+0x00000020u; // 800D74FC
  c->lr=0x800D7504u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D7500
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D7504
  c->lr=c->r[0]; // 800D7508
  c->r[1]=c->r[1]+0x00000020u; // 800D750C
  return; // 800D7510
}

// fn_800D7520
void f_800D7520(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7520
  c->r[0]=c->lr; // 800D7524
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D7528
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D752C
  c->r[31]=R32(c->r[3]+0x00000028u); // 800D7530
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D7534
  c->r[30]=c->r[4]|c->r[4]; // 800D7538
  c->r[0]=R8(c->r[31]+0x00000029u); // 800D753C
  cmps(c,0,(int32_t)c->r[0],0); // 800D7540
  if (crb(c,2)) { goto L_800D7560; } // 800D7544
  c->r[5]=0u+0x80250000u; // 800D7548
  c->r[3]=c->r[13]+0xFFFF9F30u; // 800D754C
  c->r[5]=c->r[5]+0x00007BC0u; // 800D7550
  c->r[4]=0u+0x0000008Du; // 800D7554
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D7558
  c->lr=0x800D7560u; f_800F1300(c); // 800D755C
L_800D7560:;
  c->r[3]=R8(c->r[31]+0x00000028u); // 800D7560
  c->r[5]=c->r[31]|c->r[31]; // 800D7564
  c->r[4]=R32(c->r[31]+0x0000002Cu); // 800D7568
  c->lr=0x800D7570u; f_800E7190(c); // 800D756C
  cmps(c,0,(int32_t)c->r[30],0); // 800D7570
  if (!crb(c,2)) { goto L_800D7580; } // 800D7574
  c->r[3]=0u+0x00000000u; // 800D7578
  goto L_800D75BC; // 800D757C
L_800D7580:;
  c->r[0]=R16(c->r[3]+0x00000000u); // 800D7580
  W32(c->r[30]+0x00000000u,c->r[0]); // 800D7584
  c->r[0]=R16(c->r[3]+0x00000002u); // 800D7588
  W32(c->r[30]+0x00000004u,c->r[0]); // 800D758C
  c->r[0]=R16(c->r[3]+0x00000004u); // 800D7590
  W32(c->r[30]+0x00000008u,c->r[0]); // 800D7594
  c->r[0]=R16(c->r[3]+0x00000006u); // 800D7598
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 800D759C
  c->r[0]=R16(c->r[3]+0x00000008u); // 800D75A0
  W32(c->r[30]+0x00000010u,c->r[0]); // 800D75A4
  c->r[0]=R16(c->r[3]+0x0000000Au); // 800D75A8
  W32(c->r[30]+0x00000014u,c->r[0]); // 800D75AC
  c->r[0]=R16(c->r[3]+0x0000000Cu); // 800D75B0
  c->r[3]=0u+0x00000001u; // 800D75B4
  W32(c->r[30]+0x00000018u,c->r[0]); // 800D75B8
L_800D75BC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D75BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D75C0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D75C4
  c->lr=c->r[0]; // 800D75C8
  c->r[1]=c->r[1]+0x00000010u; // 800D75CC
  return; // 800D75D0
}

// fn_800D75E0
void f_800D75E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D75E0
  c->r[0]=c->lr; // 800D75E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D75E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D75EC
  c->r[31]=R32(c->r[3]+0x00000028u); // 800D75F0
  c->r[0]=R8(c->r[31]+0x00000011u); // 800D75F4
  cmps(c,0,(int32_t)c->r[0],0); // 800D75F8
  if (crb(c,2)) { goto L_800D7618; } // 800D75FC
  c->r[5]=0u+0x80250000u; // 800D7600
  c->r[3]=c->r[13]+0xFFFF9F28u; // 800D7604
  c->r[5]=c->r[5]+0x00007B98u; // 800D7608
  c->r[4]=0u+0x0000008Du; // 800D760C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D7610
  c->lr=0x800D7618u; f_800F1300(c); // 800D7614
L_800D7618:;
  c->r[3]=R8(c->r[31]+0x00000010u); // 800D7618
  c->r[5]=c->r[31]|c->r[31]; // 800D761C
  c->r[4]=R32(c->r[31]+0x00000014u); // 800D7620
  c->lr=0x800D7628u; f_800E7190(c); // 800D7624
  cmps(c,0,(int32_t)c->r[3],0); // 800D7628
  if (!crb(c,2)) { goto L_800D7638; } // 800D762C
  c->r[3]=0u+0x00000000u; // 800D7630
  goto L_800D763C; // 800D7634
L_800D7638:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 800D7638
L_800D763C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D763C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D7640
  c->lr=c->r[0]; // 800D7644
  c->r[1]=c->r[1]+0x00000010u; // 800D7648
  return; // 800D764C
}

// fn_800D7650
void f_800D7650(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7650
  c->r[0]=c->lr; // 800D7654
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D7658
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D765C
  c->r[31]=R32(c->r[3]+0x00000028u); // 800D7660
  c->r[0]=R8(c->r[31]+0x00000021u); // 800D7664
  cmps(c,0,(int32_t)c->r[0],0); // 800D7668
  if (crb(c,2)) { goto L_800D7688; } // 800D766C
  c->r[5]=0u+0x80250000u; // 800D7670
  c->r[3]=c->r[13]+0xFFFF9F20u; // 800D7674
  c->r[5]=c->r[5]+0x00007B70u; // 800D7678
  c->r[4]=0u+0x0000008Du; // 800D767C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D7680
  c->lr=0x800D7688u; f_800F1300(c); // 800D7684
L_800D7688:;
  c->r[3]=R8(c->r[31]+0x00000020u); // 800D7688
  c->r[5]=c->r[31]|c->r[31]; // 800D768C
  c->r[4]=R32(c->r[31]+0x00000024u); // 800D7690
  c->lr=0x800D7698u; f_800E7190(c); // 800D7694
  cmps(c,0,(int32_t)c->r[3],0); // 800D7698
  if (!crb(c,2)) { goto L_800D76A8; } // 800D769C
  c->r[3]=0u+0x00000000u; // 800D76A0
  goto L_800D76B0; // 800D76A4
L_800D76A8:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 800D76A8
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 800D76AC
L_800D76B0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D76B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D76B4
  c->lr=c->r[0]; // 800D76B8
  c->r[1]=c->r[1]+0x00000010u; // 800D76BC
  return; // 800D76C0
}

// fn_800D76D0
void f_800D76D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D76D0
  c->r[0]=c->lr; // 800D76D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D76D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D76DC
  c->r[31]=R32(c->r[3]+0x00000028u); // 800D76E0
  c->r[0]=R8(c->r[31]+0x00000019u); // 800D76E4
  cmps(c,0,(int32_t)c->r[0],0); // 800D76E8
  if (crb(c,2)) { goto L_800D7708; } // 800D76EC
  c->r[5]=0u+0x80250000u; // 800D76F0
  c->r[3]=c->r[13]+0xFFFF9F10u; // 800D76F4
  c->r[5]=c->r[5]+0x00007B20u; // 800D76F8
  c->r[4]=0u+0x0000008Du; // 800D76FC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D7700
  c->lr=0x800D7708u; f_800F1300(c); // 800D7704
L_800D7708:;
  c->r[3]=R8(c->r[31]+0x00000018u); // 800D7708
  c->r[5]=c->r[31]|c->r[31]; // 800D770C
  c->r[4]=R32(c->r[31]+0x0000001Cu); // 800D7710
  c->lr=0x800D7718u; f_800E7190(c); // 800D7714
  cmps(c,0,(int32_t)c->r[3],0); // 800D7718
  if (!crb(c,2)) { goto L_800D7728; } // 800D771C
  c->r[3]=0u+0x00000000u; // 800D7720
  goto L_800D772C; // 800D7724
L_800D7728:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 800D7728
L_800D772C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D772C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D7730
  c->lr=c->r[0]; // 800D7734
  c->r[1]=c->r[1]+0x00000010u; // 800D7738
  return; // 800D773C
}

// fn_800D7740
void f_800D7740(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7740
  c->r[0]=c->lr; // 800D7744
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D7748
  c->r[11]=c->r[1]+0x00000020u; // 800D774C
  c->lr=0x800D7754u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D7750
  c->r[28]=R32(c->r[3]+0x00000028u); // 800D7754
  c->r[27]=c->r[3]|c->r[3]; // 800D7758
  c->r[30]=c->r[4]|c->r[4]; // 800D775C
  c->r[31]=c->r[5]|c->r[5]; // 800D7760
  c->r[0]=R8(c->r[28]+0x00000019u); // 800D7764
  cmps(c,0,(int32_t)c->r[0],0); // 800D7768
  if (crb(c,2)) { goto L_800D7788; } // 800D776C
  c->r[5]=0u+0x80250000u; // 800D7770
  c->r[3]=c->r[13]+0xFFFF9F10u; // 800D7774
  c->r[5]=c->r[5]+0x00007B20u; // 800D7778
  c->r[4]=0u+0x0000008Du; // 800D777C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D7780
  c->lr=0x800D7788u; f_800F1300(c); // 800D7784
L_800D7788:;
  c->r[3]=R8(c->r[28]+0x00000018u); // 800D7788
  c->r[5]=c->r[28]|c->r[28]; // 800D778C
  c->r[4]=R32(c->r[28]+0x0000001Cu); // 800D7790
  c->lr=0x800D7798u; f_800E7190(c); // 800D7794
  cmps(c,0,(int32_t)c->r[3],0); // 800D7798
  c->r[29]=c->r[3]|c->r[3]; // 800D779C
  if (!crb(c,2)) { goto L_800D77AC; } // 800D77A0
  c->r[3]=0u+0x00000000u; // 800D77A4
  goto L_800D78BC; // 800D77A8
L_800D77AC:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D77AC
  cmpu(c,0,c->r[30],c->r[0]); // 800D77B0
  if (crb(c,0)) { goto L_800D77C0; } // 800D77B4
  c->r[3]=0u+0x00000000u; // 800D77B8
  goto L_800D78BC; // 800D77BC
L_800D77C0:;
  c->r[28]=rotl(c->r[30],3)&0xFFFFFFF8u; // 800D77C0
  c->r[30]=R32(c->r[27]+0x00000028u); // 800D77C4
  c->r[3]=c->r[3]+c->r[28]; // 800D77C8
  c->r[0]=R8(c->r[3]+0x00000005u); // 800D77CC
  cmps(c,0,(int32_t)c->r[0],0); // 800D77D0
  if (crb(c,2)) { goto L_800D77F0; } // 800D77D4
  c->r[5]=0u+0x80250000u; // 800D77D8
  c->r[3]=c->r[13]+0xFFFF9F00u; // 800D77DC
  c->r[5]=c->r[5]+0x00007AD0u; // 800D77E0
  c->r[4]=0u+0x0000008Du; // 800D77E4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D77E8
  c->lr=0x800D77F0u; f_800F1300(c); // 800D77EC
L_800D77F0:;
  c->r[4]=c->r[29]+c->r[28]; // 800D77F0
  c->r[5]=c->r[30]|c->r[30]; // 800D77F4
  c->r[3]=R8(c->r[4]+0x00000004u); // 800D77F8
  c->r[4]=R32(c->r[4]+0x00000008u); // 800D77FC
  c->lr=0x800D7804u; f_800E7190(c); // 800D7800
  cmps(c,0,(int32_t)c->r[3],0); // 800D7804
  c->r[29]=c->r[3]|c->r[3]; // 800D7808
  if (!crb(c,2)) { goto L_800D7818; } // 800D780C
  c->r[3]=0u+0x00000000u; // 800D7810
  goto L_800D78BC; // 800D7814
L_800D7818:;
  c->r[0]=R8(c->r[3]+0x00000015u); // 800D7818
  c->r[30]=R32(c->r[27]+0x00000028u); // 800D781C
  cmps(c,0,(int32_t)c->r[0],0); // 800D7820
  if (crb(c,2)) { goto L_800D7840; } // 800D7824
  c->r[5]=0u+0x80250000u; // 800D7828
  c->r[3]=c->r[13]+0xFFFF9F08u; // 800D782C
  c->r[5]=c->r[5]+0x00007AF8u; // 800D7830
  c->r[4]=0u+0x0000008Du; // 800D7834
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D7838
  c->lr=0x800D7840u; f_800F1300(c); // 800D783C
L_800D7840:;
  c->r[3]=R8(c->r[29]+0x00000014u); // 800D7840
  c->r[5]=c->r[30]|c->r[30]; // 800D7844
  c->r[4]=R32(c->r[29]+0x00000018u); // 800D7848
  c->lr=0x800D7850u; f_800E7190(c); // 800D784C
  cmps(c,0,(int32_t)c->r[3],0); // 800D7850
  c->r[30]=c->r[3]|c->r[3]; // 800D7854
  if (!crb(c,2)) { goto L_800D7864; } // 800D7858
  c->r[3]=0u+0x00000000u; // 800D785C
  goto L_800D78BC; // 800D7860
L_800D7864:;
  c->r[0]=R32(c->r[29]+0x00000000u); // 800D7864
  W32(c->r[31]+0x00000000u,c->r[0]); // 800D7868
  c->r[28]=R32(c->r[27]+0x00000028u); // 800D786C
  c->r[0]=R32(c->r[29]+0x00000004u); // 800D7870
  W32(c->r[31]+0x00000004u,c->r[0]); // 800D7874
  c->r[0]=R8(c->r[29]+0x0000000Du); // 800D7878
  cmps(c,0,(int32_t)c->r[0],0); // 800D787C
  if (crb(c,2)) { goto L_800D789C; } // 800D7880
  c->r[5]=0u+0x80250000u; // 800D7884
  c->r[3]=c->r[13]+0xFFFF9E70u; // 800D7888
  c->r[5]=c->r[5]+0x00004F68u; // 800D788C
  c->r[4]=0u+0x0000008Du; // 800D7890
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D7894
  c->lr=0x800D789Cu; f_800F1300(c); // 800D7898
L_800D789C:;
  c->r[3]=R8(c->r[29]+0x0000000Cu); // 800D789C
  c->r[5]=c->r[28]|c->r[28]; // 800D78A0
  c->r[4]=R32(c->r[29]+0x00000010u); // 800D78A4
  c->lr=0x800D78ACu; f_800E7190(c); // 800D78A8
  W32(c->r[31]+0x00000008u,c->r[3]); // 800D78AC
  c->r[3]=0u+0x00000001u; // 800D78B0
  c->r[0]=R32(c->r[30]+0x00000000u); // 800D78B4
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800D78B8
L_800D78BC:;
  c->r[11]=c->r[1]+0x00000020u; // 800D78BC
  c->lr=0x800D78C4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D78C0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D78C4
  c->lr=c->r[0]; // 800D78C8
  c->r[1]=c->r[1]+0x00000020u; // 800D78CC
  return; // 800D78D0
}

// fn_800D78E0
void f_800D78E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D78E0
  c->r[0]=c->lr; // 800D78E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D78E8
  c->r[11]=c->r[1]+0x00000020u; // 800D78EC
  c->lr=0x800D78F4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D78F0
  c->r[28]=R32(c->r[3]+0x00000028u); // 800D78F4
  c->r[30]=c->r[3]|c->r[3]; // 800D78F8
  c->r[27]=c->r[4]|c->r[4]; // 800D78FC
  c->r[26]=c->r[5]|c->r[5]; // 800D7900
  c->r[0]=R8(c->r[28]+0x00000019u); // 800D7904
  c->r[31]=c->r[6]|c->r[6]; // 800D7908
  cmps(c,0,(int32_t)c->r[0],0); // 800D790C
  if (crb(c,2)) { goto L_800D792C; } // 800D7910
  c->r[5]=0u+0x80250000u; // 800D7914
  c->r[3]=c->r[13]+0xFFFF9F10u; // 800D7918
  c->r[5]=c->r[5]+0x00007B20u; // 800D791C
  c->r[4]=0u+0x0000008Du; // 800D7920
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D7924
  c->lr=0x800D792Cu; f_800F1300(c); // 800D7928
L_800D792C:;
  c->r[3]=R8(c->r[28]+0x00000018u); // 800D792C
  c->r[5]=c->r[28]|c->r[28]; // 800D7930
  c->r[4]=R32(c->r[28]+0x0000001Cu); // 800D7934
  c->lr=0x800D793Cu; f_800E7190(c); // 800D7938
  cmps(c,0,(int32_t)c->r[3],0); // 800D793C
  c->r[29]=c->r[3]|c->r[3]; // 800D7940
  if (!crb(c,2)) { goto L_800D7950; } // 800D7944
  c->r[3]=0u+0x00000000u; // 800D7948
  goto L_800D7A84; // 800D794C
L_800D7950:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D7950
  cmpu(c,0,c->r[27],c->r[0]); // 800D7954
  if (crb(c,0)) { goto L_800D7964; } // 800D7958
  c->r[3]=0u+0x00000000u; // 800D795C
  goto L_800D7A84; // 800D7960
L_800D7964:;
  c->r[27]=rotl(c->r[27],3)&0xFFFFFFF8u; // 800D7964
  c->r[28]=R32(c->r[30]+0x00000028u); // 800D7968
  c->r[3]=c->r[3]+c->r[27]; // 800D796C
  c->r[0]=R8(c->r[3]+0x00000005u); // 800D7970
  cmps(c,0,(int32_t)c->r[0],0); // 800D7974
  if (crb(c,2)) { goto L_800D7994; } // 800D7978
  c->r[5]=0u+0x80250000u; // 800D797C
  c->r[3]=c->r[13]+0xFFFF9F00u; // 800D7980
  c->r[5]=c->r[5]+0x00007AD0u; // 800D7984
  c->r[4]=0u+0x0000008Du; // 800D7988
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D798C
  c->lr=0x800D7994u; f_800F1300(c); // 800D7990
L_800D7994:;
  c->r[4]=c->r[29]+c->r[27]; // 800D7994
  c->r[5]=c->r[28]|c->r[28]; // 800D7998
  c->r[3]=R8(c->r[4]+0x00000004u); // 800D799C
  c->r[4]=R32(c->r[4]+0x00000008u); // 800D79A0
  c->lr=0x800D79A8u; f_800E7190(c); // 800D79A4
  cmps(c,0,(int32_t)c->r[3],0); // 800D79A8
  c->r[29]=c->r[3]|c->r[3]; // 800D79AC
  if (!crb(c,2)) { goto L_800D79BC; } // 800D79B0
  c->r[3]=0u+0x00000000u; // 800D79B4
  goto L_800D7A84; // 800D79B8
L_800D79BC:;
  c->r[0]=R8(c->r[3]+0x00000015u); // 800D79BC
  c->r[28]=R32(c->r[30]+0x00000028u); // 800D79C0
  cmps(c,0,(int32_t)c->r[0],0); // 800D79C4
  if (crb(c,2)) { goto L_800D79E4; } // 800D79C8
  c->r[5]=0u+0x80250000u; // 800D79CC
  c->r[3]=c->r[13]+0xFFFF9F08u; // 800D79D0
  c->r[5]=c->r[5]+0x00007AF8u; // 800D79D4
  c->r[4]=0u+0x0000008Du; // 800D79D8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D79DC
  c->lr=0x800D79E4u; f_800F1300(c); // 800D79E0
L_800D79E4:;
  c->r[3]=R8(c->r[29]+0x00000014u); // 800D79E4
  c->r[5]=c->r[28]|c->r[28]; // 800D79E8
  c->r[4]=R32(c->r[29]+0x00000018u); // 800D79EC
  c->lr=0x800D79F4u; f_800E7190(c); // 800D79F0
  cmps(c,0,(int32_t)c->r[3],0); // 800D79F4
  c->r[29]=c->r[3]|c->r[3]; // 800D79F8
  if (!crb(c,2)) { goto L_800D7A08; } // 800D79FC
  c->r[3]=0u+0x00000000u; // 800D7A00
  goto L_800D7A84; // 800D7A04
L_800D7A08:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D7A08
  cmpu(c,0,c->r[26],c->r[0]); // 800D7A0C
  if (crb(c,0)) { goto L_800D7A1C; } // 800D7A10
  c->r[3]=0u+0x00000000u; // 800D7A14
  goto L_800D7A84; // 800D7A18
L_800D7A1C:;
  c->r[27]=rotl(c->r[26],3)&0xFFFFFFF8u; // 800D7A1C
  c->r[28]=R32(c->r[30]+0x00000028u); // 800D7A20
  c->r[3]=c->r[3]+c->r[27]; // 800D7A24
  c->r[0]=R8(c->r[3]+0x00000005u); // 800D7A28
  cmps(c,0,(int32_t)c->r[0],0); // 800D7A2C
  if (crb(c,2)) { goto L_800D7A4C; } // 800D7A30
  c->r[5]=0u+0x80250000u; // 800D7A34
  c->r[3]=c->r[13]+0xFFFF9EF8u; // 800D7A38
  c->r[5]=c->r[5]+0x00007AA8u; // 800D7A3C
  c->r[4]=0u+0x0000008Du; // 800D7A40
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D7A44
  c->lr=0x800D7A4Cu; f_800F1300(c); // 800D7A48
L_800D7A4C:;
  c->r[4]=c->r[29]+c->r[27]; // 800D7A4C
  c->r[5]=c->r[28]|c->r[28]; // 800D7A50
  c->r[3]=R8(c->r[4]+0x00000004u); // 800D7A54
  c->r[4]=R32(c->r[4]+0x00000008u); // 800D7A58
  c->lr=0x800D7A60u; f_800E7190(c); // 800D7A5C
  cmps(c,0,(int32_t)c->r[3],0); // 800D7A60
  if (!crb(c,2)) { goto L_800D7A70; } // 800D7A64
  c->r[3]=0u+0x00000000u; // 800D7A68
  goto L_800D7A84; // 800D7A6C
L_800D7A70:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D7A70
  W32(c->r[31]+0x00000000u,c->r[0]); // 800D7A74
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D7A78
  c->r[3]=0u+0x00000001u; // 800D7A7C
  W32(c->r[31]+0x00000004u,c->r[0]); // 800D7A80
L_800D7A84:;
  c->r[11]=c->r[1]+0x00000020u; // 800D7A84
  c->lr=0x800D7A8Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D7A88
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D7A8C
  c->lr=c->r[0]; // 800D7A90
  c->r[1]=c->r[1]+0x00000020u; // 800D7A94
  return; // 800D7A98
}

// fn_800D7AA0
void f_800D7AA0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7AA0
  c->r[0]=c->lr; // 800D7AA4
  cmps(c,0,(int32_t)c->r[4],0); // 800D7AA8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D7AAC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D7AB0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D7AB4
  c->r[30]=c->r[5]|c->r[5]; // 800D7AB8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D7ABC
  c->r[29]=c->r[4]|c->r[4]; // 800D7AC0
  W32(c->r[1]+0x00000010u,c->r[28]); // 800D7AC4
  c->r[28]=c->r[3]|c->r[3]; // 800D7AC8
  if (!crb(c,2)) { goto L_800D7AD8; } // 800D7ACC
  c->r[3]=0u+0xFFFFFFFFu; // 800D7AD0
  goto L_800D7BF8; // 800D7AD4
L_800D7AD8:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 800D7AD8
  c->r[0]=R32(c->r[4]+0x00000004u); // 800D7ADC
  cmpu(c,0,c->r[3],c->r[0]); // 800D7AE0
  if (crb(c,0)) { goto L_800D7AF0; } // 800D7AE4
  c->r[3]=0u+0xFFFFFFFFu; // 800D7AE8
  goto L_800D7BF8; // 800D7AEC
L_800D7AF0:;
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 800D7AF0
  c->r[3]=c->r[30]|c->r[30]; // 800D7AF4
  c->r[4]=c->r[4]+c->r[0]; // 800D7AF8
  c->r[31]=c->r[4]+0x00000008u; // 800D7AFC
  c->lr=0x800D7B04u; f_80206CB4(c); // 800D7B00
  c->r[5]=0u+0x00000001u; // 800D7B04
  goto L_800D7B54; // 800D7B08
  c->r[0]=c->r[0]|0x00000000u; // 800D7B0C
L_800D7B10:;
  c->r[0]=R16(c->r[31]+0x00000002u); // 800D7B10
  c->r[4]=sraw(c,c->r[0],3); // 800D7B14
  c->r[6]=rotl(c->r[0],0)&0x00000007u; // 800D7B18
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[3]); // 800D7B1C
  if (!crb(c,0)) { goto L_800D7B44; } // 800D7B20
  c->r[0]=R8(c->r[30]+c->r[4]); // 800D7B24
  c->r[4]=addc(c,~c->r[6],0x00000007u,1); // 800D7B28
  c->r[4]=((c->r[4])&0x20)?0u:(c->r[5]<<((c->r[4])&31)); // 800D7B2C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800D7B30
  c->r[0]=c->r[4]&c->r[0]; cr0(c,c->r[0]); // 800D7B34
  if (crb(c,2)) { goto L_800D7B44; } // 800D7B38
  c->r[0]=R32(c->r[31]+0x00000008u); // 800D7B3C
  goto L_800D7B48; // 800D7B40
L_800D7B44:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 800D7B44
L_800D7B48:;
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800D7B48
  c->r[4]=c->r[29]+c->r[0]; // 800D7B4C
  c->r[31]=c->r[4]+0x00000008u; // 800D7B50
L_800D7B54:;
  c->r[0]=R16(c->r[31]+0x00000000u); // 800D7B54
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800D7B58
  if (crb(c,2)) { IRQCHK(c); goto L_800D7B10; } // 800D7B5C
  c->r[29]=R32(c->r[31]+0x0000000Cu); // 800D7B60
  c->r[0]=c->r[29]+0x00010000u; // 800D7B64
  cmpu(c,0,c->r[0],0x0000FFFFu); // 800D7B68
  if (!crb(c,2)) { goto L_800D7B78; } // 800D7B6C
  c->r[4]=0u+0x00000000u; // 800D7B70
  goto L_800D7BDC; // 800D7B74
L_800D7B78:;
  c->r[3]=R32(c->r[28]+0x00000030u); // 800D7B78
  cmps(c,0,(int32_t)c->r[3],0); // 800D7B7C
  if (!crb(c,2)) { goto L_800D7B8C; } // 800D7B80
  c->r[4]=0u+0x00000000u; // 800D7B84
  goto L_800D7BDC; // 800D7B88
L_800D7B8C:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D7B8C
  cmpu(c,0,c->r[29],c->r[0]); // 800D7B90
  if (crb(c,0)) { goto L_800D7BB4; } // 800D7B94
  c->r[3]=0u+0x80250000u; // 800D7B98
  c->r[5]=0u+0x80250000u; // 800D7B9C
  c->r[3]=c->r[3]+0x00007778u; // 800D7BA0
  c->r[4]=0u+0x000001FCu; // 800D7BA4
  c->r[5]=c->r[5]+0x0000797Cu; // 800D7BA8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D7BAC
  c->lr=0x800D7BB4u; f_800F1300(c); // 800D7BB0
L_800D7BB4:;
  c->r[3]=R32(c->r[28]+0x00000030u); // 800D7BB4
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 800D7BB8
  c->r[4]=R32(c->r[28]+0x0000002Cu); // 800D7BBC
  c->r[3]=c->r[3]+c->r[0]; // 800D7BC0
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D7BC4
  cmps(c,0,(int32_t)c->r[0],0); // 800D7BC8
  if (!crb(c,2)) { goto L_800D7BD8; } // 800D7BCC
  c->r[4]=0u+0x00000000u; // 800D7BD0
  goto L_800D7BDC; // 800D7BD4
L_800D7BD8:;
  c->r[4]=c->r[0]+c->r[4]; // 800D7BD8
L_800D7BDC:;
  c->r[3]=c->r[30]|c->r[30]; // 800D7BDC
  c->lr=0x800D7BE4u; f_8020E8B0(c); // 800D7BE0
  cmps(c,0,(int32_t)c->r[3],0); // 800D7BE4
  if (!crb(c,2)) { goto L_800D7BF4; } // 800D7BE8
  c->r[3]=R32(c->r[31]+0x00000010u); // 800D7BEC
  goto L_800D7BF8; // 800D7BF0
L_800D7BF4:;
  c->r[3]=0u+0xFFFFFFFFu; // 800D7BF4
L_800D7BF8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D7BF8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D7BFC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D7C00
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D7C04
  c->r[28]=R32(c->r[1]+0x00000010u); // 800D7C08
  c->lr=c->r[0]; // 800D7C0C
  c->r[1]=c->r[1]+0x00000020u; // 800D7C10
  return; // 800D7C14
}

// fn_800D7C20
void f_800D7C20(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7C20
  c->r[0]=c->lr; // 800D7C24
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D7C28
  c->r[11]=c->r[1]+0x00000020u; // 800D7C2C
  c->lr=0x800D7C34u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D7C30
  c->r[29]=R32(c->r[3]+0x00000028u); // 800D7C34
  c->r[27]=c->r[3]|c->r[3]; // 800D7C38
  c->r[28]=c->r[4]|c->r[4]; // 800D7C3C
  c->r[31]=c->r[5]|c->r[5]; // 800D7C40
  c->r[0]=R8(c->r[29]+0x00000001u); // 800D7C44
  cmps(c,0,(int32_t)c->r[0],0); // 800D7C48
  if (crb(c,2)) { goto L_800D7C68; } // 800D7C4C
  c->r[5]=0u+0x80250000u; // 800D7C50
  c->r[3]=c->r[13]+0xFFFF9F48u; // 800D7C54
  c->r[5]=c->r[5]+0x00007C88u; // 800D7C58
  c->r[4]=0u+0x0000008Du; // 800D7C5C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D7C60
  c->lr=0x800D7C68u; f_800F1300(c); // 800D7C64
L_800D7C68:;
  c->r[3]=R8(c->r[29]+0x00000000u); // 800D7C68
  c->r[5]=c->r[29]|c->r[29]; // 800D7C6C
  c->r[4]=R32(c->r[29]+0x00000004u); // 800D7C70
  c->lr=0x800D7C78u; f_800E7190(c); // 800D7C74
  cmps(c,0,(int32_t)c->r[3],0); // 800D7C78
  c->r[30]=c->r[3]|c->r[3]; // 800D7C7C
  if (!crb(c,2)) { goto L_800D7C8C; } // 800D7C80
  c->r[3]=0u+0x00000000u; // 800D7C84
  goto L_800D7D54; // 800D7C88
L_800D7C8C:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D7C8C
  cmpu(c,0,c->r[28],c->r[0]); // 800D7C90
  if (crb(c,0)) { goto L_800D7CA0; } // 800D7C94
  c->r[3]=0u+0x00000000u; // 800D7C98
  goto L_800D7D54; // 800D7C9C
L_800D7CA0:;
  c->r[0]=R16(c->r[27]+0x00000006u); // 800D7CA0
  cmpu(c,0,c->r[0],0x00000101u); // 800D7CA4
  if (crb(c,0)) { goto L_800D7D28; } // 800D7CA8
  c->r[28]=rotl(c->r[28],3)&0xFFFFFFF8u; // 800D7CAC
  c->r[29]=R32(c->r[27]+0x00000028u); // 800D7CB0
  c->r[3]=c->r[3]+c->r[28]; // 800D7CB4
  c->r[0]=R8(c->r[3]+0x00000005u); // 800D7CB8
  cmps(c,0,(int32_t)c->r[0],0); // 800D7CBC
  if (crb(c,2)) { goto L_800D7CDC; } // 800D7CC0
  c->r[5]=0u+0x80250000u; // 800D7CC4
  c->r[3]=c->r[13]+0xFFFF9F50u; // 800D7CC8
  c->r[5]=c->r[5]+0x00007CB0u; // 800D7CCC
  c->r[4]=0u+0x0000008Du; // 800D7CD0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D7CD4
  c->lr=0x800D7CDCu; f_800F1300(c); // 800D7CD8
L_800D7CDC:;
  c->r[4]=c->r[30]+c->r[28]; // 800D7CDC
  c->r[5]=c->r[29]|c->r[29]; // 800D7CE0
  c->r[3]=R8(c->r[4]+0x00000004u); // 800D7CE4
  c->r[4]=R32(c->r[4]+0x00000008u); // 800D7CE8
  c->lr=0x800D7CF0u; f_800E7190(c); // 800D7CEC
  cmps(c,0,(int32_t)c->r[3],0); // 800D7CF0
  if (!crb(c,2)) { goto L_800D7D00; } // 800D7CF4
  c->r[3]=0u+0x00000000u; // 800D7CF8
  goto L_800D7D54; // 800D7CFC
L_800D7D00:;
  c->r[0]=R8(c->r[3]+0x00000018u); // 800D7D00
  W8(c->r[31]+0x00000000u,c->r[0]); // 800D7D04
  c->r[0]=R8(c->r[3]+0x00000019u); // 800D7D08
  W8(c->r[31]+0x00000001u,c->r[0]); // 800D7D0C
  c->r[0]=R16(c->r[3]+0x0000001Au); // 800D7D10
  W16(c->r[31]+0x00000002u,c->r[0]); // 800D7D14
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 800D7D18
  c->r[3]=0u+0x00000001u; // 800D7D1C
  W32(c->r[31]+0x00000004u,c->r[0]); // 800D7D20
  goto L_800D7D54; // 800D7D24
L_800D7D28:;
  c->r[0]=rotl(c->r[28],3)&0xFFFFFFF8u; // 800D7D28
  c->r[6]=c->r[3]+c->r[0]; // 800D7D2C
  c->r[3]=0u+0x00000001u; // 800D7D30
  c->r[4]=R32(c->r[6]+0x00000008u); // 800D7D34
  c->r[5]=R8(c->r[6]+0x00000005u); // 800D7D38
  c->r[0]=R8(c->r[6]+0x00000004u); // 800D7D3C
  c->r[4]=c->r[4]+0x0000001Cu; // 800D7D40
  W8(c->r[31]+0x00000000u,c->r[0]); // 800D7D44
  W8(c->r[31]+0x00000001u,c->r[5]); // 800D7D48
  W16(c->r[31]+0x00000002u,c->r[29]); // 800D7D4C
  W32(c->r[31]+0x00000004u,c->r[4]); // 800D7D50
L_800D7D54:;
  c->r[11]=c->r[1]+0x00000020u; // 800D7D54
  c->lr=0x800D7D5Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D7D58
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D7D5C
  c->lr=c->r[0]; // 800D7D60
  c->r[1]=c->r[1]+0x00000020u; // 800D7D64
  return; // 800D7D68
}

// __ct__Q44nw4r3snd6detail18SoundArchiveLoaderFRCQ34nw4r3snd12SoundArchive
void f_800D7D70(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7D70
  c->r[0]=c->lr; // 800D7D74
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D7D78
  c->r[0]=0u+0x00000000u; // 800D7D7C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D7D80
  c->r[31]=c->r[3]|c->r[3]; // 800D7D84
  W32(c->r[3]+0x00000018u,c->r[4]); // 800D7D88
  W32(c->r[3]+0x0000021Cu,c->r[0]); // 800D7D8C
  c->lr=0x800D7D94u; f_8018E910(c); // 800D7D90
  c->r[3]=c->r[31]|c->r[31]; // 800D7D94
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D7D98
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D7D9C
  c->lr=c->r[0]; // 800D7DA0
  c->r[1]=c->r[1]+0x00000010u; // 800D7DA4
  return; // 800D7DA8
}

// fn_800D7DB0
void f_800D7DB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7DB0
  c->r[0]=c->lr; // 800D7DB4
  cmps(c,0,(int32_t)c->r[3],0); // 800D7DB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D7DBC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D7DC0
  c->r[31]=c->r[3]|c->r[3]; // 800D7DC4
  if (crb(c,2)) { goto L_800D7DD8; } // 800D7DC8
  cmps(c,0,(int32_t)c->r[4],0); // 800D7DCC
  if (!crb(c,1)) { goto L_800D7DD8; } // 800D7DD0
  c->lr=0x800D7DD8u; f_8015D040(c); // 800D7DD4
L_800D7DD8:;
  c->r[3]=c->r[31]|c->r[31]; // 800D7DD8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D7DDC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D7DE0
  c->lr=c->r[0]; // 800D7DE4
  c->r[1]=c->r[1]+0x00000010u; // 800D7DE8
  return; // 800D7DEC
}

// fn_800D7DF0
void f_800D7DF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7DF0
  c->r[0]=c->lr; // 800D7DF4
  W32(c->r[1]+0x00000054u,c->r[0]); // 800D7DF8
  c->r[11]=c->r[1]+0x00000050u; // 800D7DFC
  c->lr=0x800D7E04u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D7E00
  cmps(c,0,(int32_t)c->r[5],0); // 800D7E04
  c->r[31]=c->r[3]|c->r[3]; // 800D7E08
  c->r[26]=c->r[4]|c->r[4]; // 800D7E0C
  c->r[25]=c->r[5]|c->r[5]; // 800D7E10
  c->r[23]=c->r[6]|c->r[6]; // 800D7E14
  c->r[24]=c->r[7]|c->r[7]; // 800D7E18
  if (!crb(c,2)) { goto L_800D7E3C; } // 800D7E1C
  c->r[3]=0u+0x80250000u; // 800D7E20
  c->r[5]=0u+0x80250000u; // 800D7E24
  c->r[3]=c->r[3]+0x00007CD8u; // 800D7E28
  c->r[4]=0u+0x0000004Cu; // 800D7E2C
  c->r[5]=c->r[5]+0x00007CF4u; // 800D7E30
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D7E34
  c->lr=0x800D7E3Cu; f_800F1300(c); // 800D7E38
L_800D7E3C:;
  c->r[3]=c->r[31]|c->r[31]; // 800D7E3C
  c->lr=0x800D7E44u; f_8018E950(c); // 800D7E40
  c->r[3]=R32(c->r[31]+0x00000018u); // 800D7E44
  c->r[4]=c->r[26]|c->r[26]; // 800D7E48
  c->r[5]=c->r[31]+0x0000001Cu; // 800D7E4C
  c->r[6]=0u+0x00000200u; // 800D7E50
  c->lr=0x800D7E58u; f_800D63A0(c); // 800D7E54
  cmps(c,0,(int32_t)c->r[3],0); // 800D7E58
  c->r[29]=c->r[3]|c->r[3]; // 800D7E5C
  if (!crb(c,2)) { goto L_800D7E88; } // 800D7E60
  if (crb(c,2)) { goto L_800D7E78; } // 800D7E64
  c->r[12]=R32(c->r[3]+0x00000000u); // 800D7E68
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D7E6C
  c->ctr=c->r[12]; // 800D7E70
  if (true) { c->lr=0x800D7E78u; dispatch(c,c->ctr); } // 800D7E74
L_800D7E78:;
  c->r[3]=c->r[31]|c->r[31]; // 800D7E78
  c->lr=0x800D7E80u; f_8018EA30(c); // 800D7E7C
  c->r[3]=0u+0x00000000u; // 800D7E80
  goto L_800D83D4; // 800D7E84
L_800D7E88:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 800D7E88
  c->r[12]=R32(c->r[12]+0x00000050u); // 800D7E8C
  c->ctr=c->r[12]; // 800D7E90
  if (true) { c->lr=0x800D7E98u; dispatch(c,c->ctr); } // 800D7E94
  cmps(c,0,(int32_t)c->r[3],0); // 800D7E98
  if (crb(c,2)) { goto L_800D7EBC; } // 800D7E9C
  c->r[12]=R32(c->r[29]+0x00000000u); // 800D7EA0
  c->r[3]=c->r[29]|c->r[29]; // 800D7EA4
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800D7EA8
  c->ctr=c->r[12]; // 800D7EAC
  if (true) { c->lr=0x800D7EB4u; dispatch(c,c->ctr); } // 800D7EB0
  cmps(c,0,(int32_t)c->r[3],0); // 800D7EB4
  if (!crb(c,2)) { goto L_800D7EE8; } // 800D7EB8
L_800D7EBC:;
  cmps(c,0,(int32_t)c->r[29],0); // 800D7EBC
  if (crb(c,2)) { goto L_800D7ED8; } // 800D7EC0
  c->r[12]=R32(c->r[29]+0x00000000u); // 800D7EC4
  c->r[3]=c->r[29]|c->r[29]; // 800D7EC8
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D7ECC
  c->ctr=c->r[12]; // 800D7ED0
  if (true) { c->lr=0x800D7ED8u; dispatch(c,c->ctr); } // 800D7ED4
L_800D7ED8:;
  c->r[3]=c->r[31]|c->r[31]; // 800D7ED8
  c->lr=0x800D7EE0u; f_8018EA30(c); // 800D7EDC
  c->r[3]=0u+0x00000000u; // 800D7EE0
  goto L_800D83D4; // 800D7EE4
L_800D7EE8:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 800D7EE8
  c->r[3]=c->r[29]|c->r[29]; // 800D7EEC
  c->r[12]=R32(c->r[12]+0x00000040u); // 800D7EF0
  c->ctr=c->r[12]; // 800D7EF4
  if (true) { c->lr=0x800D7EFCu; dispatch(c,c->ctr); } // 800D7EF8
  c->r[12]=R32(c->r[25]+0x00000000u); // 800D7EFC
  c->r[4]=c->r[3]|c->r[3]; // 800D7F00
  c->r[3]=c->r[25]|c->r[25]; // 800D7F04
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D7F08
  c->ctr=c->r[12]; // 800D7F0C
  if (true) { c->lr=0x800D7F14u; dispatch(c,c->ctr); } // 800D7F10
  cmps(c,0,(int32_t)c->r[3],0); // 800D7F14
  c->r[27]=c->r[3]|c->r[3]; // 800D7F18
  if (!crb(c,2)) { goto L_800D7F4C; } // 800D7F1C
  cmps(c,0,(int32_t)c->r[29],0); // 800D7F20
  if (crb(c,2)) { goto L_800D7F3C; } // 800D7F24
  c->r[12]=R32(c->r[29]+0x00000000u); // 800D7F28
  c->r[3]=c->r[29]|c->r[29]; // 800D7F2C
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D7F30
  c->ctr=c->r[12]; // 800D7F34
  if (true) { c->lr=0x800D7F3Cu; dispatch(c,c->ctr); } // 800D7F38
L_800D7F3C:;
  c->r[3]=c->r[31]|c->r[31]; // 800D7F3C
  c->lr=0x800D7F44u; f_8018EA30(c); // 800D7F40
  c->r[3]=0u+0x00000000u; // 800D7F44
  goto L_800D83D4; // 800D7F48
L_800D7F4C:;
  cmps(c,0,(int32_t)c->r[24],0); // 800D7F4C
  W32(c->r[31]+0x0000021Cu,c->r[29]); // 800D7F50
  if (!crb(c,2)) { goto L_800D7FC4; } // 800D7F54
  c->r[12]=R32(c->r[29]+0x00000000u); // 800D7F58
  c->r[3]=c->r[29]|c->r[29]; // 800D7F5C
  c->r[12]=R32(c->r[12]+0x00000040u); // 800D7F60
  c->ctr=c->r[12]; // 800D7F64
  if (true) { c->lr=0x800D7F6Cu; dispatch(c,c->ctr); } // 800D7F68
  c->r[12]=R32(c->r[29]+0x00000000u); // 800D7F6C
  c->r[5]=c->r[3]|c->r[3]; // 800D7F70
  c->r[3]=c->r[29]|c->r[29]; // 800D7F74
  c->r[4]=c->r[27]|c->r[27]; // 800D7F78
  c->r[12]=R32(c->r[12]+0x00000014u); // 800D7F7C
  c->ctr=c->r[12]; // 800D7F80
  if (true) { c->lr=0x800D7F88u; dispatch(c,c->ctr); } // 800D7F84
  cmps(c,0,(int32_t)c->r[3],0); // 800D7F88
  if (!crb(c,0)) { goto L_800D8068; } // 800D7F8C
  cmps(c,0,(int32_t)c->r[29],0); // 800D7F90
  c->r[0]=0u+0x00000000u; // 800D7F94
  W32(c->r[31]+0x0000021Cu,c->r[0]); // 800D7F98
  if (crb(c,2)) { goto L_800D7FB4; } // 800D7F9C
  c->r[12]=R32(c->r[29]+0x00000000u); // 800D7FA0
  c->r[3]=c->r[29]|c->r[29]; // 800D7FA4
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D7FA8
  c->ctr=c->r[12]; // 800D7FAC
  if (true) { c->lr=0x800D7FB4u; dispatch(c,c->ctr); } // 800D7FB0
L_800D7FB4:;
  c->r[3]=c->r[31]|c->r[31]; // 800D7FB4
  c->lr=0x800D7FBCu; f_8018EA30(c); // 800D7FB8
  c->r[3]=0u+0x00000000u; // 800D7FBC
  goto L_800D83D4; // 800D7FC0
L_800D7FC4:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 800D7FC4
  c->r[3]=c->r[29]|c->r[29]; // 800D7FC8
  c->r[28]=c->r[27]|c->r[27]; // 800D7FCC
  c->r[12]=R32(c->r[12]+0x00000040u); // 800D7FD0
  c->ctr=c->r[12]; // 800D7FD4
  if (true) { c->lr=0x800D7FDCu; dispatch(c,c->ctr); } // 800D7FD8
  c->r[30]=c->r[3]|c->r[3]; // 800D7FDC
  goto L_800D8060; // 800D7FE0
L_800D7FE4:;
  cmpu(c,0,c->r[24],c->r[30]); // 800D7FE4
  c->r[3]=c->r[29]|c->r[29]; // 800D7FE8
  c->r[4]=c->r[28]|c->r[28]; // 800D7FEC
  c->r[5]=c->r[24]|c->r[24]; // 800D7FF0
  if (!crb(c,1)) { goto L_800D7FFC; } // 800D7FF4
  c->r[5]=c->r[30]|c->r[30]; // 800D7FF8
L_800D7FFC:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 800D7FFC
  c->r[12]=R32(c->r[12]+0x00000014u); // 800D8000
  c->ctr=c->r[12]; // 800D8004
  if (true) { c->lr=0x800D800Cu; dispatch(c,c->ctr); } // 800D8008
  cmps(c,0,(int32_t)c->r[3],0); // 800D800C
  if (!crb(c,0)) { goto L_800D8048; } // 800D8010
  cmps(c,0,(int32_t)c->r[29],0); // 800D8014
  c->r[0]=0u+0x00000000u; // 800D8018
  W32(c->r[31]+0x0000021Cu,c->r[0]); // 800D801C
  if (crb(c,2)) { goto L_800D8038; } // 800D8020
  c->r[12]=R32(c->r[29]+0x00000000u); // 800D8024
  c->r[3]=c->r[29]|c->r[29]; // 800D8028
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D802C
  c->ctr=c->r[12]; // 800D8030
  if (true) { c->lr=0x800D8038u; dispatch(c,c->ctr); } // 800D8034
L_800D8038:;
  c->r[3]=c->r[31]|c->r[31]; // 800D8038
  c->lr=0x800D8040u; f_8018EA30(c); // 800D803C
  c->r[3]=0u+0x00000000u; // 800D8040
  goto L_800D83D4; // 800D8044
L_800D8048:;
  cmpu(c,0,c->r[30],c->r[3]); // 800D8048
  if (!crb(c,1)) { goto L_800D805C; } // 800D804C
  c->r[30]=c->r[30]-c->r[3]; // 800D8050
  c->r[28]=c->r[28]+c->r[3]; // 800D8054
  goto L_800D8060; // 800D8058
L_800D805C:;
  c->r[30]=0u+0x00000000u; // 800D805C
L_800D8060:;
  cmps(c,0,(int32_t)c->r[30],0); // 800D8060
  if (!crb(c,2)) { IRQCHK(c); goto L_800D7FE4; } // 800D8064
L_800D8068:;
  c->r[30]=0u+0x00000000u; // 800D8068
  W32(c->r[31]+0x0000021Cu,c->r[30]); // 800D806C
  c->r[3]=R32(c->r[31]+0x00000018u); // 800D8070
  c->r[4]=c->r[26]|c->r[26]; // 800D8074
  c->r[5]=c->r[1]+0x00000008u; // 800D8078
  c->lr=0x800D8080u; f_800D60E0(c); // 800D807C
  cmps(c,0,(int32_t)c->r[3],0); // 800D8080
  if (!crb(c,2)) { goto L_800D80B4; } // 800D8084
  cmps(c,0,(int32_t)c->r[29],0); // 800D8088
  if (crb(c,2)) { goto L_800D80A4; } // 800D808C
  c->r[12]=R32(c->r[29]+0x00000000u); // 800D8090
  c->r[3]=c->r[29]|c->r[29]; // 800D8094
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D8098
  c->ctr=c->r[12]; // 800D809C
  if (true) { c->lr=0x800D80A4u; dispatch(c,c->ctr); } // 800D80A0
L_800D80A4:;
  c->r[3]=c->r[31]|c->r[31]; // 800D80A4
  c->lr=0x800D80ACu; f_8018EA30(c); // 800D80A8
  c->r[3]=0u+0x00000000u; // 800D80AC
  goto L_800D83D4; // 800D80B0
L_800D80B4:;
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 800D80B4
  cmps(c,0,(int32_t)c->r[0],0); // 800D80B8
  if (crb(c,2)) { goto L_800D83A0; } // 800D80BC
  c->r[3]=R32(c->r[31]+0x00000018u); // 800D80C0
  c->r[4]=c->r[26]|c->r[26]; // 800D80C4
  c->r[5]=c->r[31]+0x0000001Cu; // 800D80C8
  c->r[6]=0u+0x00000200u; // 800D80CC
  c->lr=0x800D80D4u; f_800D64E0(c); // 800D80D0
  cmps(c,0,(int32_t)c->r[3],0); // 800D80D4
  c->r[28]=c->r[3]|c->r[3]; // 800D80D8
  if (!crb(c,2)) { goto L_800D8120; } // 800D80DC
  if (crb(c,2)) { goto L_800D80F4; } // 800D80E0
  c->r[12]=R32(c->r[3]+0x00000000u); // 800D80E4
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D80E8
  c->ctr=c->r[12]; // 800D80EC
  if (true) { c->lr=0x800D80F4u; dispatch(c,c->ctr); } // 800D80F0
L_800D80F4:;
  cmps(c,0,(int32_t)c->r[29],0); // 800D80F4
  if (crb(c,2)) { goto L_800D8110; } // 800D80F8
  c->r[12]=R32(c->r[29]+0x00000000u); // 800D80FC
  c->r[3]=c->r[29]|c->r[29]; // 800D8100
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D8104
  c->ctr=c->r[12]; // 800D8108
  if (true) { c->lr=0x800D8110u; dispatch(c,c->ctr); } // 800D810C
L_800D8110:;
  c->r[3]=c->r[31]|c->r[31]; // 800D8110
  c->lr=0x800D8118u; f_8018EA30(c); // 800D8114
  c->r[3]=0u+0x00000000u; // 800D8118
  goto L_800D83D4; // 800D811C
L_800D8120:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 800D8120
  c->r[12]=R32(c->r[12]+0x00000050u); // 800D8124
  c->ctr=c->r[12]; // 800D8128
  if (true) { c->lr=0x800D8130u; dispatch(c,c->ctr); } // 800D812C
  cmps(c,0,(int32_t)c->r[3],0); // 800D8130
  if (crb(c,2)) { goto L_800D8154; } // 800D8134
  c->r[12]=R32(c->r[28]+0x00000000u); // 800D8138
  c->r[3]=c->r[28]|c->r[28]; // 800D813C
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800D8140
  c->ctr=c->r[12]; // 800D8144
  if (true) { c->lr=0x800D814Cu; dispatch(c,c->ctr); } // 800D8148
  cmps(c,0,(int32_t)c->r[3],0); // 800D814C
  if (!crb(c,2)) { goto L_800D819C; } // 800D8150
L_800D8154:;
  cmps(c,0,(int32_t)c->r[28],0); // 800D8154
  if (crb(c,2)) { goto L_800D8170; } // 800D8158
  c->r[12]=R32(c->r[28]+0x00000000u); // 800D815C
  c->r[3]=c->r[28]|c->r[28]; // 800D8160
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D8164
  c->ctr=c->r[12]; // 800D8168
  if (true) { c->lr=0x800D8170u; dispatch(c,c->ctr); } // 800D816C
L_800D8170:;
  cmps(c,0,(int32_t)c->r[29],0); // 800D8170
  if (crb(c,2)) { goto L_800D818C; } // 800D8174
  c->r[12]=R32(c->r[29]+0x00000000u); // 800D8178
  c->r[3]=c->r[29]|c->r[29]; // 800D817C
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D8180
  c->ctr=c->r[12]; // 800D8184
  if (true) { c->lr=0x800D818Cu; dispatch(c,c->ctr); } // 800D8188
L_800D818C:;
  c->r[3]=c->r[31]|c->r[31]; // 800D818C
  c->lr=0x800D8194u; f_8018EA30(c); // 800D8190
  c->r[3]=0u+0x00000000u; // 800D8194
  goto L_800D83D4; // 800D8198
L_800D819C:;
  c->r[12]=R32(c->r[28]+0x00000000u); // 800D819C
  c->r[3]=c->r[28]|c->r[28]; // 800D81A0
  c->r[12]=R32(c->r[12]+0x00000040u); // 800D81A4
  c->ctr=c->r[12]; // 800D81A8
  if (true) { c->lr=0x800D81B0u; dispatch(c,c->ctr); } // 800D81AC
  c->r[12]=R32(c->r[25]+0x00000000u); // 800D81B0
  c->r[4]=c->r[3]|c->r[3]; // 800D81B4
  c->r[3]=c->r[25]|c->r[25]; // 800D81B8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D81BC
  c->ctr=c->r[12]; // 800D81C0
  if (true) { c->lr=0x800D81C8u; dispatch(c,c->ctr); } // 800D81C4
  cmps(c,0,(int32_t)c->r[3],0); // 800D81C8
  c->r[26]=c->r[3]|c->r[3]; // 800D81CC
  if (!crb(c,2)) { goto L_800D821C; } // 800D81D0
  cmps(c,0,(int32_t)c->r[28],0); // 800D81D4
  if (crb(c,2)) { goto L_800D81F0; } // 800D81D8
  c->r[12]=R32(c->r[28]+0x00000000u); // 800D81DC
  c->r[3]=c->r[28]|c->r[28]; // 800D81E0
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D81E4
  c->ctr=c->r[12]; // 800D81E8
  if (true) { c->lr=0x800D81F0u; dispatch(c,c->ctr); } // 800D81EC
L_800D81F0:;
  cmps(c,0,(int32_t)c->r[29],0); // 800D81F0
  if (crb(c,2)) { goto L_800D820C; } // 800D81F4
  c->r[12]=R32(c->r[29]+0x00000000u); // 800D81F8
  c->r[3]=c->r[29]|c->r[29]; // 800D81FC
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D8200
  c->ctr=c->r[12]; // 800D8204
  if (true) { c->lr=0x800D820Cu; dispatch(c,c->ctr); } // 800D8208
L_800D820C:;
  c->r[3]=c->r[31]|c->r[31]; // 800D820C
  c->lr=0x800D8214u; f_8018EA30(c); // 800D8210
  c->r[3]=0u+0x00000000u; // 800D8214
  goto L_800D83D4; // 800D8218
L_800D821C:;
  cmps(c,0,(int32_t)c->r[24],0); // 800D821C
  W32(c->r[31]+0x0000021Cu,c->r[28]); // 800D8220
  if (!crb(c,2)) { goto L_800D82AC; } // 800D8224
  c->r[12]=R32(c->r[28]+0x00000000u); // 800D8228
  c->r[3]=c->r[28]|c->r[28]; // 800D822C
  c->r[12]=R32(c->r[12]+0x00000040u); // 800D8230
  c->ctr=c->r[12]; // 800D8234
  if (true) { c->lr=0x800D823Cu; dispatch(c,c->ctr); } // 800D8238
  c->r[12]=R32(c->r[28]+0x00000000u); // 800D823C
  c->r[5]=c->r[3]|c->r[3]; // 800D8240
  c->r[3]=c->r[28]|c->r[28]; // 800D8244
  c->r[4]=c->r[26]|c->r[26]; // 800D8248
  c->r[12]=R32(c->r[12]+0x00000014u); // 800D824C
  c->ctr=c->r[12]; // 800D8250
  if (true) { c->lr=0x800D8258u; dispatch(c,c->ctr); } // 800D8254
  cmps(c,0,(int32_t)c->r[3],0); // 800D8258
  if (!crb(c,0)) { goto L_800D836C; } // 800D825C
  cmps(c,0,(int32_t)c->r[28],0); // 800D8260
  W32(c->r[31]+0x0000021Cu,c->r[30]); // 800D8264
  if (crb(c,2)) { goto L_800D8280; } // 800D8268
  c->r[12]=R32(c->r[28]+0x00000000u); // 800D826C
  c->r[3]=c->r[28]|c->r[28]; // 800D8270
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D8274
  c->ctr=c->r[12]; // 800D8278
  if (true) { c->lr=0x800D8280u; dispatch(c,c->ctr); } // 800D827C
L_800D8280:;
  cmps(c,0,(int32_t)c->r[29],0); // 800D8280
  if (crb(c,2)) { goto L_800D829C; } // 800D8284
  c->r[12]=R32(c->r[29]+0x00000000u); // 800D8288
  c->r[3]=c->r[29]|c->r[29]; // 800D828C
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D8290
  c->ctr=c->r[12]; // 800D8294
  if (true) { c->lr=0x800D829Cu; dispatch(c,c->ctr); } // 800D8298
L_800D829C:;
  c->r[3]=c->r[31]|c->r[31]; // 800D829C
  c->lr=0x800D82A4u; f_8018EA30(c); // 800D82A0
  c->r[3]=0u+0x00000000u; // 800D82A4
  goto L_800D83D4; // 800D82A8
L_800D82AC:;
  c->r[12]=R32(c->r[28]+0x00000000u); // 800D82AC
  c->r[3]=c->r[28]|c->r[28]; // 800D82B0
  c->r[30]=c->r[26]|c->r[26]; // 800D82B4
  c->r[12]=R32(c->r[12]+0x00000040u); // 800D82B8
  c->ctr=c->r[12]; // 800D82BC
  if (true) { c->lr=0x800D82C4u; dispatch(c,c->ctr); } // 800D82C0
  c->r[25]=c->r[3]|c->r[3]; // 800D82C4
  goto L_800D8364; // 800D82C8
L_800D82CC:;
  cmpu(c,0,c->r[24],c->r[25]); // 800D82CC
  c->r[3]=c->r[28]|c->r[28]; // 800D82D0
  c->r[4]=c->r[30]|c->r[30]; // 800D82D4
  c->r[5]=c->r[24]|c->r[24]; // 800D82D8
  if (!crb(c,1)) { goto L_800D82E4; } // 800D82DC
  c->r[5]=c->r[25]|c->r[25]; // 800D82E0
L_800D82E4:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 800D82E4
  c->r[12]=R32(c->r[12]+0x00000014u); // 800D82E8
  c->ctr=c->r[12]; // 800D82EC
  if (true) { c->lr=0x800D82F4u; dispatch(c,c->ctr); } // 800D82F0
  cmps(c,0,(int32_t)c->r[3],0); // 800D82F4
  if (!crb(c,0)) { goto L_800D834C; } // 800D82F8
  cmps(c,0,(int32_t)c->r[28],0); // 800D82FC
  c->r[0]=0u+0x00000000u; // 800D8300
  W32(c->r[31]+0x0000021Cu,c->r[0]); // 800D8304
  if (crb(c,2)) { goto L_800D8320; } // 800D8308
  c->r[12]=R32(c->r[28]+0x00000000u); // 800D830C
  c->r[3]=c->r[28]|c->r[28]; // 800D8310
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D8314
  c->ctr=c->r[12]; // 800D8318
  if (true) { c->lr=0x800D8320u; dispatch(c,c->ctr); } // 800D831C
L_800D8320:;
  cmps(c,0,(int32_t)c->r[29],0); // 800D8320
  if (crb(c,2)) { goto L_800D833C; } // 800D8324
  c->r[12]=R32(c->r[29]+0x00000000u); // 800D8328
  c->r[3]=c->r[29]|c->r[29]; // 800D832C
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D8330
  c->ctr=c->r[12]; // 800D8334
  if (true) { c->lr=0x800D833Cu; dispatch(c,c->ctr); } // 800D8338
L_800D833C:;
  c->r[3]=c->r[31]|c->r[31]; // 800D833C
  c->lr=0x800D8344u; f_8018EA30(c); // 800D8340
  c->r[3]=0u+0x00000000u; // 800D8344
  goto L_800D83D4; // 800D8348
L_800D834C:;
  cmpu(c,0,c->r[25],c->r[3]); // 800D834C
  if (!crb(c,1)) { goto L_800D8360; } // 800D8350
  c->r[25]=c->r[25]-c->r[3]; // 800D8354
  c->r[30]=c->r[30]+c->r[3]; // 800D8358
  goto L_800D8364; // 800D835C
L_800D8360:;
  c->r[25]=0u+0x00000000u; // 800D8360
L_800D8364:;
  cmps(c,0,(int32_t)c->r[25],0); // 800D8364
  if (!crb(c,2)) { IRQCHK(c); goto L_800D82CC; } // 800D8368
L_800D836C:;
  cmps(c,0,(int32_t)c->r[23],0); // 800D836C
  c->r[0]=0u+0x00000000u; // 800D8370
  W32(c->r[31]+0x0000021Cu,c->r[0]); // 800D8374
  if (crb(c,2)) { goto L_800D8380; } // 800D8378
  W32(c->r[23]+0x00000000u,c->r[26]); // 800D837C
L_800D8380:;
  cmps(c,0,(int32_t)c->r[28],0); // 800D8380
  if (crb(c,2)) { goto L_800D83AC; } // 800D8384
  c->r[12]=R32(c->r[28]+0x00000000u); // 800D8388
  c->r[3]=c->r[28]|c->r[28]; // 800D838C
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D8390
  c->ctr=c->r[12]; // 800D8394
  if (true) { c->lr=0x800D839Cu; dispatch(c,c->ctr); } // 800D8398
  goto L_800D83AC; // 800D839C
L_800D83A0:;
  cmps(c,0,(int32_t)c->r[23],0); // 800D83A0
  if (crb(c,2)) { goto L_800D83AC; } // 800D83A4
  W32(c->r[23]+0x00000000u,c->r[30]); // 800D83A8
L_800D83AC:;
  cmps(c,0,(int32_t)c->r[29],0); // 800D83AC
  if (crb(c,2)) { goto L_800D83C8; } // 800D83B0
  c->r[12]=R32(c->r[29]+0x00000000u); // 800D83B4
  c->r[3]=c->r[29]|c->r[29]; // 800D83B8
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D83BC
  c->ctr=c->r[12]; // 800D83C0
  if (true) { c->lr=0x800D83C8u; dispatch(c,c->ctr); } // 800D83C4
L_800D83C8:;
  c->r[3]=c->r[31]|c->r[31]; // 800D83C8
  c->lr=0x800D83D0u; f_8018EA30(c); // 800D83CC
  c->r[3]=c->r[27]|c->r[27]; // 800D83D0
L_800D83D4:;
  c->r[11]=c->r[1]+0x00000050u; // 800D83D4
  c->lr=0x800D83DCu; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D83D8
  c->r[0]=R32(c->r[1]+0x00000054u); // 800D83DC
  c->lr=c->r[0]; // 800D83E0
  c->r[1]=c->r[1]+0x00000050u; // 800D83E4
  return; // 800D83E8
}

// fn_800D83F0
void f_800D83F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D83F0
  c->r[0]=c->lr; // 800D83F4
  c->r[6]=0u+0x80260000u; // 800D83F8
  c->r[5]=0u+0x80260000u; // 800D83FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D8400
  c->r[6]=c->r[6]+0xFFFF8788u; // 800D8404
  c->r[4]=0u+0x80260000u; // 800D8408
  c->r[7]=c->r[3]+0x0000004Cu; // 800D840C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D8410
  c->r[31]=0u+0x00000000u; // 800D8414
  c->r[0]=c->r[6]+0x00000014u; // 800D8418
  c->r[5]=c->r[5]+0xFFFF87C8u; // 800D841C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D8420
  c->r[4]=c->r[4]+0xFFFF87B8u; // 800D8424
  c->r[30]=c->r[3]|c->r[3]; // 800D8428
  W32(c->r[3]+0x00000000u,c->r[31]); // 800D842C
  W32(c->r[3]+0x00000004u,c->r[31]); // 800D8430
  W32(c->r[3]+0x00000008u,c->r[6]); // 800D8434
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800D8438
  W32(c->r[3]+0x00000010u,c->r[31]); // 800D843C
  W32(c->r[3]+0x00000014u,c->r[31]); // 800D8440
  W32(c->r[3]+0x00000018u,c->r[31]); // 800D8444
  W32(c->r[3]+0x0000001Cu,c->r[31]); // 800D8448
  W32(c->r[3]+0x00000020u,c->r[5]); // 800D844C
  W32(c->r[3]+0x00000024u,c->r[3]); // 800D8450
  W32(c->r[3]+0x00000028u,c->r[4]); // 800D8454
  W32(c->r[3]+0x0000002Cu,c->r[3]); // 800D8458
  W32(c->r[3]+0x00000034u,c->r[31]); // 800D845C
  W32(c->r[3]+0x00000038u,c->r[31]); // 800D8460
  W32(c->r[3]+0x0000003Cu,c->r[31]); // 800D8464
  W32(c->r[3]+0x00000040u,c->r[31]); // 800D8468
  W32(c->r[3]+0x00000044u,c->r[31]); // 800D846C
  W32(c->r[3]+0x00000048u,c->r[31]); // 800D8470
  W32(c->r[3]+0x0000004Cu,c->r[7]); // 800D8474
  W32(c->r[3]+0x00000050u,c->r[7]); // 800D8478
  c->r[3]=c->r[3]+0x00000054u; // 800D847C
  c->lr=0x800D8484u; f_8018E910(c); // 800D8480
  c->r[0]=c->r[30]+0x00000074u; // 800D8484
  W32(c->r[30]+0x0000006Cu,c->r[31]); // 800D8488
  c->r[3]=c->r[30]+0x0000007Cu; // 800D848C
  W32(c->r[30]+0x00000070u,c->r[31]); // 800D8490
  W32(c->r[30]+0x00000074u,c->r[0]); // 800D8494
  W32(c->r[30]+0x00000078u,c->r[0]); // 800D8498
  c->lr=0x800D84A0u; f_8018E910(c); // 800D849C
  c->r[0]=c->r[30]+0x0000009Cu; // 800D84A0
  W32(c->r[30]+0x00000094u,c->r[31]); // 800D84A4
  c->r[3]=c->r[30]+0x000000A4u; // 800D84A8
  W32(c->r[30]+0x00000098u,c->r[31]); // 800D84AC
  W32(c->r[30]+0x0000009Cu,c->r[0]); // 800D84B0
  W32(c->r[30]+0x000000A0u,c->r[0]); // 800D84B4
  c->lr=0x800D84BCu; f_8018E910(c); // 800D84B8
  c->r[4]=0u+0x80250000u; // 800D84BC
  c->r[3]=0u+0x80250000u; // 800D84C0
  c->r[4]=c->r[4]+0x000068C0u; // 800D84C4
  c->r[0]=c->r[30]+0x000000E0u; // 800D84C8
  c->r[3]=c->r[3]+0x00006858u; // 800D84CC
  W32(c->r[30]+0x000000BCu,c->r[4]); // 800D84D0
  W32(c->r[30]+0x000000C0u,c->r[0]); // 800D84D4
  W32(c->r[30]+0x000000C4u,c->r[31]); // 800D84D8
  W32(c->r[30]+0x000000E0u,c->r[3]); // 800D84DC
  W32(c->r[30]+0x000000E4u,c->r[31]); // 800D84E0
  W32(c->r[30]+0x000000E8u,c->r[31]); // 800D84E4
  c->lr=0x800D84ECu; f_800CD960(c); // 800D84E8
  c->r[4]=c->r[30]|c->r[30]; // 800D84EC
  c->lr=0x800D84F4u; f_800CDA50(c); // 800D84F0
  c->r[3]=c->r[30]|c->r[30]; // 800D84F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D84F8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D84FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D8500
  c->lr=c->r[0]; // 800D8504
  c->r[1]=c->r[1]+0x00000010u; // 800D8508
  return; // 800D850C
}

// fn_800D8510
void f_800D8510(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8510
  c->r[0]=c->lr; // 800D8514
  cmps(c,0,(int32_t)c->r[3],0); // 800D8518
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D851C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D8520
  c->r[31]=c->r[3]|c->r[3]; // 800D8524
  if (crb(c,2)) { goto L_800D8538; } // 800D8528
  cmps(c,0,(int32_t)c->r[4],0); // 800D852C
  if (!crb(c,1)) { goto L_800D8538; } // 800D8530
  c->lr=0x800D8538u; f_8015D040(c); // 800D8534
L_800D8538:;
  c->r[3]=c->r[31]|c->r[31]; // 800D8538
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D853C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D8540
  c->lr=c->r[0]; // 800D8544
  c->r[1]=c->r[1]+0x00000010u; // 800D8548
  return; // 800D854C
}

// fn_800D8550
void f_800D8550(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8550
  c->r[0]=c->lr; // 800D8554
  cmps(c,0,(int32_t)c->r[3],0); // 800D8558
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D855C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D8560
  c->r[31]=c->r[3]|c->r[3]; // 800D8564
  if (crb(c,2)) { goto L_800D8578; } // 800D8568
  cmps(c,0,(int32_t)c->r[4],0); // 800D856C
  if (!crb(c,1)) { goto L_800D8578; } // 800D8570
  c->lr=0x800D8578u; f_8015D040(c); // 800D8574
L_800D8578:;
  c->r[3]=c->r[31]|c->r[31]; // 800D8578
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D857C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D8580
  c->lr=c->r[0]; // 800D8584
  c->r[1]=c->r[1]+0x00000010u; // 800D8588
  return; // 800D858C
}

// fn_800D8590
void f_800D8590(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8590
  c->r[0]=c->lr; // 800D8594
  cmps(c,0,(int32_t)c->r[3],0); // 800D8598
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D859C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D85A0
  c->r[31]=c->r[3]|c->r[3]; // 800D85A4
  if (crb(c,2)) { goto L_800D85B8; } // 800D85A8
  cmps(c,0,(int32_t)c->r[4],0); // 800D85AC
  if (!crb(c,1)) { goto L_800D85B8; } // 800D85B0
  c->lr=0x800D85B8u; f_8015D040(c); // 800D85B4
L_800D85B8:;
  c->r[3]=c->r[31]|c->r[31]; // 800D85B8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D85BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D85C0
  c->lr=c->r[0]; // 800D85C4
  c->r[1]=c->r[1]+0x00000010u; // 800D85C8
  return; // 800D85CC
}

// fn_800D85D0
void f_800D85D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D85D0
  c->r[0]=c->lr; // 800D85D4
  cmps(c,0,(int32_t)c->r[3],0); // 800D85D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D85DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D85E0
  c->r[31]=c->r[3]|c->r[3]; // 800D85E4
  if (crb(c,2)) { goto L_800D85F8; } // 800D85E8
  cmps(c,0,(int32_t)c->r[4],0); // 800D85EC
  if (!crb(c,1)) { goto L_800D85F8; } // 800D85F0
  c->lr=0x800D85F8u; f_8015D040(c); // 800D85F4
L_800D85F8:;
  c->r[3]=c->r[31]|c->r[31]; // 800D85F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D85FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D8600
  c->lr=c->r[0]; // 800D8604
  c->r[1]=c->r[1]+0x00000010u; // 800D8608
  return; // 800D860C
}

// fn_800D8610
void f_800D8610(Ctx* __restrict c) {
  c->r[4]=c->r[3]+0x00000004u; // 800D8610
  c->r[0]=0u+0x00000000u; // 800D8614
  W32(c->r[3]+0x00000000u,c->r[0]); // 800D8618
  W32(c->r[3]+0x00000004u,c->r[4]); // 800D861C
  W32(c->r[3]+0x00000008u,c->r[4]); // 800D8620
  return; // 800D8624
}

// fn_800D8630
void f_800D8630(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8630
  c->r[0]=c->lr; // 800D8634
  cmps(c,0,(int32_t)c->r[3],0); // 800D8638
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D863C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D8640
  c->r[31]=c->r[4]|c->r[4]; // 800D8644
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D8648
  c->r[30]=c->r[3]|c->r[3]; // 800D864C
  if (crb(c,2)) { goto L_800D866C; } // 800D8650
  c->r[4]=0u+0x00000000u; // 800D8654
  c->lr=0x800D865Cu; f_800F1940(c); // 800D8658
  cmps(c,0,(int32_t)c->r[31],0); // 800D865C
  if (!crb(c,1)) { goto L_800D866C; } // 800D8660
  c->r[3]=c->r[30]|c->r[30]; // 800D8664
  c->lr=0x800D866Cu; f_8015D040(c); // 800D8668
L_800D866C:;
  c->r[3]=c->r[30]|c->r[30]; // 800D866C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D8670
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D8674
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D8678
  c->lr=c->r[0]; // 800D867C
  c->r[1]=c->r[1]+0x00000010u; // 800D8680
  return; // 800D8684
}

// fn_800D8690
void f_800D8690(Ctx* __restrict c) {
  c->r[4]=c->r[3]+0x00000004u; // 800D8690
  c->r[0]=0u+0x00000000u; // 800D8694
  W32(c->r[3]+0x00000000u,c->r[0]); // 800D8698
  W32(c->r[3]+0x00000004u,c->r[4]); // 800D869C
  W32(c->r[3]+0x00000008u,c->r[4]); // 800D86A0
  return; // 800D86A4
}

// fn_800D86B0
void f_800D86B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D86B0
  c->r[0]=c->lr; // 800D86B4
  cmps(c,0,(int32_t)c->r[3],0); // 800D86B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D86BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D86C0
  c->r[31]=c->r[4]|c->r[4]; // 800D86C4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D86C8
  c->r[30]=c->r[3]|c->r[3]; // 800D86CC
  if (crb(c,2)) { goto L_800D86EC; } // 800D86D0
  c->r[4]=0u+0x00000000u; // 800D86D4
  c->lr=0x800D86DCu; f_800F1940(c); // 800D86D8
  cmps(c,0,(int32_t)c->r[31],0); // 800D86DC
  if (!crb(c,1)) { goto L_800D86EC; } // 800D86E0
  c->r[3]=c->r[30]|c->r[30]; // 800D86E4
  c->lr=0x800D86ECu; f_8015D040(c); // 800D86E8
L_800D86EC:;
  c->r[3]=c->r[30]|c->r[30]; // 800D86EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D86F0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D86F4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D86F8
  c->lr=c->r[0]; // 800D86FC
  c->r[1]=c->r[1]+0x00000010u; // 800D8700
  return; // 800D8704
}

// fn_800D8710
void f_800D8710(Ctx* __restrict c) {
  c->r[4]=c->r[3]+0x00000004u; // 800D8710
  c->r[0]=0u+0x00000000u; // 800D8714
  W32(c->r[3]+0x00000000u,c->r[0]); // 800D8718
  W32(c->r[3]+0x00000004u,c->r[4]); // 800D871C
  W32(c->r[3]+0x00000008u,c->r[4]); // 800D8720
  return; // 800D8724
}

// fn_800D8730
void f_800D8730(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8730
  c->r[0]=c->lr; // 800D8734
  cmps(c,0,(int32_t)c->r[3],0); // 800D8738
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D873C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D8740
  c->r[31]=c->r[4]|c->r[4]; // 800D8744
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D8748
  c->r[30]=c->r[3]|c->r[3]; // 800D874C
  if (crb(c,2)) { goto L_800D876C; } // 800D8750
  c->r[4]=0u+0x00000000u; // 800D8754
  c->lr=0x800D875Cu; f_800F1940(c); // 800D8758
  cmps(c,0,(int32_t)c->r[31],0); // 800D875C
  if (!crb(c,1)) { goto L_800D876C; } // 800D8760
  c->r[3]=c->r[30]|c->r[30]; // 800D8764
  c->lr=0x800D876Cu; f_8015D040(c); // 800D8768
L_800D876C:;
  c->r[3]=c->r[30]|c->r[30]; // 800D876C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D8770
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D8774
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D8778
  c->lr=c->r[0]; // 800D877C
  c->r[1]=c->r[1]+0x00000010u; // 800D8780
  return; // 800D8784
}

// fn_800D8790
void f_800D8790(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8790
  c->r[0]=c->lr; // 800D8794
  cmps(c,0,(int32_t)c->r[3],0); // 800D8798
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D879C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D87A0
  c->r[31]=c->r[4]|c->r[4]; // 800D87A4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D87A8
  c->r[30]=c->r[3]|c->r[3]; // 800D87AC
  if (crb(c,2)) { goto L_800D882C; } // 800D87B0
  c->r[4]=0u+0x80260000u; // 800D87B4
  c->r[4]=c->r[4]+0xFFFF8788u; // 800D87B8
  W32(c->r[3]+0x00000008u,c->r[4]); // 800D87BC
  c->r[0]=c->r[4]+0x00000014u; // 800D87C0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800D87C4
  c->lr=0x800D87CCu; f_800CD960(c); // 800D87C8
  c->r[4]=c->r[30]|c->r[30]; // 800D87CC
  c->lr=0x800D87D4u; f_800CDAD0(c); // 800D87D0
  c->r[0]=addc(c,c->r[30],0x00000094u,0); cr0(c,c->r[0]); // 800D87D4
  if (crb(c,2)) { goto L_800D87EC; } // 800D87D8
  c->r[3]=addc(c,c->r[0],0x00000004u,0); cr0(c,c->r[3]); // 800D87DC
  if (crb(c,2)) { goto L_800D87EC; } // 800D87E0
  c->r[4]=0u+0x00000000u; // 800D87E4
  c->lr=0x800D87ECu; f_800F1940(c); // 800D87E8
L_800D87EC:;
  c->r[0]=addc(c,c->r[30],0x0000006Cu,0); cr0(c,c->r[0]); // 800D87EC
  if (crb(c,2)) { goto L_800D8804; } // 800D87F0
  c->r[3]=addc(c,c->r[0],0x00000004u,0); cr0(c,c->r[3]); // 800D87F4
  if (crb(c,2)) { goto L_800D8804; } // 800D87F8
  c->r[4]=0u+0x00000000u; // 800D87FC
  c->lr=0x800D8804u; f_800F1940(c); // 800D8800
L_800D8804:;
  c->r[0]=addc(c,c->r[30],0x00000044u,0); cr0(c,c->r[0]); // 800D8804
  if (crb(c,2)) { goto L_800D881C; } // 800D8808
  c->r[3]=addc(c,c->r[0],0x00000004u,0); cr0(c,c->r[3]); // 800D880C
  if (crb(c,2)) { goto L_800D881C; } // 800D8810
  c->r[4]=0u+0x00000000u; // 800D8814
  c->lr=0x800D881Cu; f_800F1940(c); // 800D8818
L_800D881C:;
  cmps(c,0,(int32_t)c->r[31],0); // 800D881C
  if (!crb(c,1)) { goto L_800D882C; } // 800D8820
  c->r[3]=c->r[30]|c->r[30]; // 800D8824
  c->lr=0x800D882Cu; f_8015D040(c); // 800D8828
L_800D882C:;
  c->r[3]=c->r[30]|c->r[30]; // 800D882C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D8830
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D8834
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D8838
  c->lr=c->r[0]; // 800D883C
  c->r[1]=c->r[1]+0x00000010u; // 800D8840
  return; // 800D8844
}

// fn_800D8850
void f_800D8850(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8850
  c->r[0]=c->lr; // 800D8854
  W32(c->r[1]+0x00000084u,c->r[0]); // 800D8858
  c->r[11]=c->r[1]+0x00000080u; // 800D885C
  c->lr=0x800D8864u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D8860
  c->r[30]=0u+0x80250000u; // 800D8864
  c->r[31]=c->r[3]|c->r[3]; // 800D8868
  c->r[24]=c->r[4]|c->r[4]; // 800D886C
  c->r[25]=c->r[5]|c->r[5]; // 800D8870
  c->r[26]=c->r[6]|c->r[6]; // 800D8874
  c->r[27]=c->r[7]|c->r[7]; // 800D8878
  c->r[28]=c->r[8]|c->r[8]; // 800D887C
  c->r[30]=c->r[30]+0x00007D20u; // 800D8880
  c->lr=0x800D8888u; f_800DD370(c); // 800D8884
  cmps(c,0,(int32_t)c->r[3],0); // 800D8888
  if (!crb(c,2)) { goto L_800D88A4; } // 800D888C
  c->r[3]=c->r[30]+0x00000000u; // 800D8890
  c->r[5]=c->r[30]+0x0000001Cu; // 800D8894
  c->r[4]=0u+0x00000083u; // 800D8898
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D889C
  c->lr=0x800D88A4u; f_800F1300(c); // 800D88A0
L_800D88A4:;
  c->lr=0x800D88A8u; f_800DD370(c); // 800D88A4
  cmps(c,0,(int32_t)c->r[3],0); // 800D88A8
  if (!crb(c,2)) { goto L_800D88B8; } // 800D88AC
  c->r[3]=0u+0x00000000u; // 800D88B0
  goto L_800D8A3C; // 800D88B4
L_800D88B8:;
  cmps(c,0,(int32_t)c->r[24],0); // 800D88B8
  if (!crb(c,2)) { goto L_800D88D4; } // 800D88BC
  c->r[3]=c->r[30]+0x00000000u; // 800D88C0
  c->r[5]=c->r[30]+0x0000005Cu; // 800D88C4
  c->r[4]=0u+0x00000089u; // 800D88C8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D88CC
  c->lr=0x800D88D4u; f_800F1300(c); // 800D88D0
L_800D88D4:;
  cmps(c,0,(int32_t)c->r[25],0); // 800D88D4
  if (!crb(c,2)) { goto L_800D88F0; } // 800D88D8
  c->r[3]=c->r[30]+0x00000000u; // 800D88DC
  c->r[5]=c->r[30]+0x00000080u; // 800D88E0
  c->r[4]=0u+0x0000008Au; // 800D88E4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D88E8
  c->lr=0x800D88F0u; f_800F1300(c); // 800D88EC
L_800D88F0:;
  cmps(c,0,(int32_t)c->r[28],0); // 800D88F0
  if (crb(c,2)) { goto L_800D8914; } // 800D88F4
  cmps(c,0,(int32_t)c->r[27],0); // 800D88F8
  if (!crb(c,2)) { goto L_800D8914; } // 800D88FC
  c->r[3]=c->r[30]+0x00000000u; // 800D8900
  c->r[5]=c->r[30]+0x000000A8u; // 800D8904
  c->r[4]=0u+0x0000008Cu; // 800D8908
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D890C
  c->lr=0x800D8914u; f_800F1300(c); // 800D8910
L_800D8914:;
  cmps(c,0,(int32_t)c->r[24],0); // 800D8914
  if (!crb(c,2)) { goto L_800D8930; } // 800D8918
  c->r[3]=c->r[30]+0x00000000u; // 800D891C
  c->r[5]=c->r[30]+0x0000005Cu; // 800D8920
  c->r[4]=0u+0x00000110u; // 800D8924
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D8928
  c->lr=0x800D8930u; f_800F1300(c); // 800D892C
L_800D8930:;
  c->r[3]=c->r[24]|c->r[24]; // 800D8930
  c->r[4]=c->r[1]+0x00000040u; // 800D8934
  c->r[29]=0u+0x00000000u; // 800D8938
  c->lr=0x800D8940u; f_800D60C0(c); // 800D893C
  cmps(c,0,(int32_t)c->r[3],0); // 800D8940
  if (crb(c,2)) { goto L_800D894C; } // 800D8944
  c->r[29]=R32(c->r[1]+0x00000050u); // 800D8948
L_800D894C:;
  c->r[3]=0u+0x00010000u; // 800D894C
  c->r[0]=c->r[3]+0xFFFFA000u; // 800D8950
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)c->r[0]); // 800D8954
  cmpu(c,0,c->r[28],c->r[0]); // 800D8958
  if (!crb(c,0)) { goto L_800D8974; } // 800D895C
  c->r[3]=c->r[30]+0x00000000u; // 800D8960
  c->r[5]=c->r[30]+0x000000D4u; // 800D8964
  c->r[4]=0u+0x0000008Eu; // 800D8968
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D896C
  c->lr=0x800D8974u; f_800F1300(c); // 800D8970
L_800D8974:;
  c->r[3]=c->r[31]|c->r[31]; // 800D8974
  c->r[4]=c->r[24]|c->r[24]; // 800D8978
  c->r[5]=c->r[25]|c->r[25]; // 800D897C
  c->r[6]=c->r[26]|c->r[26]; // 800D8980
  c->lr=0x800D8988u; f_800D8C50(c); // 800D8984
  cmps(c,0,(int32_t)c->r[3],0); // 800D8988
  if (!crb(c,2)) { goto L_800D8998; } // 800D898C
  c->r[3]=0u+0x00000000u; // 800D8990
  goto L_800D8A3C; // 800D8994
L_800D8998:;
  cmps(c,0,(int32_t)c->r[24],0); // 800D8998
  if (!crb(c,2)) { goto L_800D89B4; } // 800D899C
  c->r[3]=c->r[30]+0x00000000u; // 800D89A0
  c->r[5]=c->r[30]+0x0000005Cu; // 800D89A4
  c->r[4]=0u+0x00000110u; // 800D89A8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D89AC
  c->lr=0x800D89B4u; f_800F1300(c); // 800D89B0
L_800D89B4:;
  c->r[3]=c->r[24]|c->r[24]; // 800D89B4
  c->r[4]=c->r[1]+0x00000024u; // 800D89B8
  c->r[29]=0u+0x00000000u; // 800D89BC
  c->lr=0x800D89C4u; f_800D60C0(c); // 800D89C0
  cmps(c,0,(int32_t)c->r[3],0); // 800D89C4
  if (crb(c,2)) { goto L_800D89D0; } // 800D89C8
  c->r[29]=R32(c->r[1]+0x00000034u); // 800D89CC
L_800D89D0:;
  c->r[3]=0u+0x00010000u; // 800D89D0
  c->r[0]=c->r[3]+0xFFFFA000u; // 800D89D4
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)c->r[0]); // 800D89D8
  cmpu(c,0,c->r[28],c->r[0]); // 800D89DC
  if (!crb(c,0)) { goto L_800D89EC; } // 800D89E0
  c->r[0]=0u+0x00000000u; // 800D89E4
  goto L_800D8A20; // 800D89E8
L_800D89EC:;
  c->r[3]=c->r[24]|c->r[24]; // 800D89EC
  c->r[4]=c->r[1]+0x00000008u; // 800D89F0
  c->r[29]=0u+0x00000000u; // 800D89F4
  c->lr=0x800D89FCu; f_800D60C0(c); // 800D89F8
  cmps(c,0,(int32_t)c->r[3],0); // 800D89FC
  if (crb(c,2)) { goto L_800D8A08; } // 800D8A00
  c->r[29]=R32(c->r[1]+0x00000018u); // 800D8A04
L_800D8A08:;
  c->r[4]=c->r[27]|c->r[27]; // 800D8A08
  c->r[5]=c->r[28]|c->r[28]; // 800D8A0C
  c->r[6]=c->r[29]|c->r[29]; // 800D8A10
  c->r[3]=c->r[31]+0x000000C8u; // 800D8A14
  c->lr=0x800D8A1Cu; f_800DDB80(c); // 800D8A18
  c->r[0]=0u+0x00000001u; // 800D8A1C
L_800D8A20:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D8A20
  if (!crb(c,2)) { goto L_800D8A30; } // 800D8A24
  c->r[3]=0u+0x00000000u; // 800D8A28
  goto L_800D8A3C; // 800D8A2C
L_800D8A30:;
  c->r[0]=c->r[31]+0x000000BCu; // 800D8A30
  W32(c->r[31]+0x00000030u,c->r[0]); // 800D8A34
  c->r[3]=0u+0x00000001u; // 800D8A38
L_800D8A3C:;
  c->r[11]=c->r[1]+0x00000080u; // 800D8A3C
  c->lr=0x800D8A44u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D8A40
  c->r[0]=R32(c->r[1]+0x00000084u); // 800D8A44
  c->lr=c->r[0]; // 800D8A48
  c->r[1]=c->r[1]+0x00000080u; // 800D8A4C
  return; // 800D8A50
}

// fn_800D8A60
void f_800D8A60(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8A60
  c->r[0]=c->lr; // 800D8A64
  cmps(c,0,(int32_t)c->r[4],0); // 800D8A68
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D8A6C
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800D8A70
  W32(c->r[1]+0x00000038u,c->r[30]); // 800D8A74
  c->r[30]=c->r[4]|c->r[4]; // 800D8A78
  W32(c->r[1]+0x00000034u,c->r[29]); // 800D8A7C
  W32(c->r[1]+0x00000030u,c->r[28]); // 800D8A80
  if (!crb(c,2)) { goto L_800D8AA4; } // 800D8A84
  c->r[3]=0u+0x80250000u; // 800D8A88
  c->r[5]=0u+0x80250000u; // 800D8A8C
  c->r[3]=c->r[3]+0x00007D20u; // 800D8A90
  c->r[4]=0u+0x000000D2u; // 800D8A94
  c->r[5]=c->r[5]+0x00007D7Cu; // 800D8A98
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D8A9C
  c->lr=0x800D8AA4u; f_800F1300(c); // 800D8AA0
L_800D8AA4:;
  c->r[3]=c->r[30]|c->r[30]; // 800D8AA4
  c->lr=0x800D8AACu; f_800D6030(c); // 800D8AA8
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)100); // 800D8AAC
  c->r[29]=c->r[3]|c->r[3]; // 800D8AB0
  c->r[28]=0u+0x00000000u; // 800D8AB4
  c->r[0]=c->r[4]+0x00000003u; // 800D8AB8
  c->r[31]=rotl(c->r[0],0)&0xFFFFFFFCu; // 800D8ABC
  goto L_800D8B14; // 800D8AC0
L_800D8AC4:;
  c->r[3]=c->r[30]|c->r[30]; // 800D8AC4
  c->r[4]=c->r[28]|c->r[28]; // 800D8AC8
  c->r[5]=c->r[1]+0x00000008u; // 800D8ACC
  c->lr=0x800D8AD4u; f_800D60B0(c); // 800D8AD0
  cmps(c,0,(int32_t)c->r[3],0); // 800D8AD4
  if (crb(c,2)) { goto L_800D8B10; } // 800D8AD8
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 800D8ADC
  c->r[5]=R32(c->r[1]+0x00000008u); // 800D8AE0
  c->r[0]=c->r[3]+0x00000003u; // 800D8AE4
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFFCu; // 800D8AE8
  c->ctr=c->r[5]; // 800D8AEC
  cmps(c,0,(int32_t)c->r[5],0); // 800D8AF0
  if (!crb(c,1)) { goto L_800D8B10; } // 800D8AF4
L_800D8AF8:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D8AF8
  if (crb(c,2)) { goto L_800D8B0C; } // 800D8AFC
  c->r[0]=c->r[31]+0x0000003Fu; // 800D8B00
  c->r[31]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800D8B04
  c->r[31]=c->r[31]+c->r[4]; // 800D8B08
L_800D8B0C:;
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D8AF8; } // 800D8B0C
L_800D8B10:;
  c->r[28]=c->r[28]+0x00000001u; // 800D8B10
L_800D8B14:;
  cmpu(c,0,c->r[28],c->r[29]); // 800D8B14
  if (crb(c,0)) { IRQCHK(c); goto L_800D8AC4; } // 800D8B18
  c->r[3]=c->r[30]|c->r[30]; // 800D8B1C
  c->lr=0x800D8B24u; f_800D6040(c); // 800D8B20
  c->r[4]=rotl(c->r[3],3)&0xFFFFFFF8u; // 800D8B24
  c->r[3]=c->r[30]|c->r[30]; // 800D8B28
  c->r[0]=c->r[4]+0x00000007u; // 800D8B2C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFCu; // 800D8B30
  c->r[4]=c->r[1]+0x00000010u; // 800D8B34
  c->r[31]=c->r[31]+c->r[0]; // 800D8B38
  c->lr=0x800D8B40u; f_800D60C0(c); // 800D8B3C
  cmps(c,0,(int32_t)c->r[3],0); // 800D8B40
  if (crb(c,2)) { goto L_800D8B98; } // 800D8B44
  c->r[0]=R32(c->r[1]+0x00000010u); // 800D8B48
  c->r[4]=R32(c->r[1]+0x00000018u); // 800D8B4C
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)1204); // 800D8B50
  c->r[3]=R32(c->r[1]+0x00000024u); // 800D8B54
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D8B58
  c->r[5]=(uint32_t)((int32_t)c->r[4]*(int32_t)4276); // 800D8B5C
  c->r[6]=c->r[6]+0x00000003u; // 800D8B60
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)564); // 800D8B64
  c->r[3]=rotl(c->r[6],0)&0xFFFFFFFCu; // 800D8B68
  c->r[5]=c->r[5]+0x00000003u; // 800D8B6C
  c->r[31]=c->r[31]+c->r[3]; // 800D8B70
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)208); // 800D8B74
  c->r[5]=rotl(c->r[5],0)&0xFFFFFFFCu; // 800D8B78
  c->r[0]=c->r[4]+0x00000003u; // 800D8B7C
  c->r[31]=c->r[31]+c->r[5]; // 800D8B80
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFFCu; // 800D8B84
  c->r[0]=c->r[3]+0x00000003u; // 800D8B88
  c->r[31]=c->r[31]+c->r[4]; // 800D8B8C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFCu; // 800D8B90
  c->r[31]=c->r[31]+c->r[0]; // 800D8B94
L_800D8B98:;
  c->r[3]=c->r[30]|c->r[30]; // 800D8B98
  c->lr=0x800D8BA0u; f_800D6100(c); // 800D8B9C
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 800D8BA0
  c->r[0]=c->r[3]+0x00000007u; // 800D8BA4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFCu; // 800D8BA8
  c->r[3]=c->r[31]+c->r[0]; // 800D8BAC
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800D8BB0
  c->r[30]=R32(c->r[1]+0x00000038u); // 800D8BB4
  c->r[29]=R32(c->r[1]+0x00000034u); // 800D8BB8
  c->r[28]=R32(c->r[1]+0x00000030u); // 800D8BBC
  c->r[0]=R32(c->r[1]+0x00000044u); // 800D8BC0
  c->lr=c->r[0]; // 800D8BC4
  c->r[1]=c->r[1]+0x00000040u; // 800D8BC8
  return; // 800D8BCC
}

// fn_800D8BD0
void f_800D8BD0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8BD0
  c->r[0]=c->lr; // 800D8BD4
  cmps(c,0,(int32_t)c->r[4],0); // 800D8BD8
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D8BDC
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800D8BE0
  c->r[31]=c->r[4]|c->r[4]; // 800D8BE4
  if (!crb(c,2)) { goto L_800D8C08; } // 800D8BE8
  c->r[3]=0u+0x80250000u; // 800D8BEC
  c->r[5]=0u+0x80250000u; // 800D8BF0
  c->r[3]=c->r[3]+0x00007D20u; // 800D8BF4
  c->r[4]=0u+0x00000110u; // 800D8BF8
  c->r[5]=c->r[5]+0x00007D7Cu; // 800D8BFC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D8C00
  c->lr=0x800D8C08u; f_800F1300(c); // 800D8C04
L_800D8C08:;
  c->r[3]=c->r[31]|c->r[31]; // 800D8C08
  c->r[4]=c->r[1]+0x00000008u; // 800D8C0C
  c->r[31]=0u+0x00000000u; // 800D8C10
  c->lr=0x800D8C18u; f_800D60C0(c); // 800D8C14
  cmps(c,0,(int32_t)c->r[3],0); // 800D8C18
  if (crb(c,2)) { goto L_800D8C24; } // 800D8C1C
  c->r[31]=R32(c->r[1]+0x00000018u); // 800D8C20
L_800D8C24:;
  c->r[3]=0u+0x00010000u; // 800D8C24
  c->r[0]=c->r[3]+0xFFFFA000u; // 800D8C28
  c->r[3]=(uint32_t)((int32_t)c->r[31]*(int32_t)c->r[0]); // 800D8C2C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800D8C30
  c->r[0]=R32(c->r[1]+0x00000034u); // 800D8C34
  c->lr=c->r[0]; // 800D8C38
  c->r[1]=c->r[1]+0x00000030u; // 800D8C3C
  return; // 800D8C40
}

// fn_800D8C50
void f_800D8C50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8C50
  c->r[0]=c->lr; // 800D8C54
  W32(c->r[1]+0x00000064u,c->r[0]); // 800D8C58
  c->r[11]=c->r[1]+0x00000060u; // 800D8C5C
  c->lr=0x800D8C64u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D8C60
  cmps(c,0,(int32_t)c->r[4],0); // 800D8C64
  c->r[31]=0u+0x80250000u; // 800D8C68
  c->r[26]=c->r[3]|c->r[3]; // 800D8C6C
  c->r[27]=c->r[4]|c->r[4]; // 800D8C70
  c->r[28]=c->r[5]|c->r[5]; // 800D8C74
  c->r[29]=c->r[6]|c->r[6]; // 800D8C78
  c->r[31]=c->r[31]+0x00007D20u; // 800D8C7C
  if (!crb(c,2)) { goto L_800D8C98; } // 800D8C80
  c->r[3]=c->r[31]+0x00000000u; // 800D8C84
  c->r[5]=c->r[31]+0x0000005Cu; // 800D8C88
  c->r[4]=0u+0x00000130u; // 800D8C8C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D8C90
  c->lr=0x800D8C98u; f_800F1300(c); // 800D8C94
L_800D8C98:;
  cmps(c,0,(int32_t)c->r[28],0); // 800D8C98
  if (!crb(c,2)) { goto L_800D8CB4; } // 800D8C9C
  c->r[3]=c->r[31]+0x00000000u; // 800D8CA0
  c->r[5]=c->r[31]+0x00000080u; // 800D8CA4
  c->r[4]=0u+0x00000131u; // 800D8CA8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D8CAC
  c->lr=0x800D8CB4u; f_800F1300(c); // 800D8CB0
L_800D8CB4:;
  c->r[0]=rotl(c->r[28],0)&0x00000003u; cr0(c,c->r[0]); // 800D8CB4
  if (crb(c,2)) { goto L_800D8CD4; } // 800D8CB8
  c->r[6]=c->r[28]|c->r[28]; // 800D8CBC
  c->r[3]=c->r[31]+0x00000000u; // 800D8CC0
  c->r[5]=c->r[31]+0x00000120u; // 800D8CC4
  c->r[4]=0u+0x00000132u; // 800D8CC8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D8CCC
  c->lr=0x800D8CD4u; f_800F1300(c); // 800D8CD0
L_800D8CD4:;
  c->r[3]=c->r[26]|c->r[26]; // 800D8CD4
  c->r[4]=c->r[27]|c->r[27]; // 800D8CD8
  c->lr=0x800D8CE0u; f_800D8A60(c); // 800D8CDC
  cmpu(c,0,c->r[29],c->r[3]); // 800D8CE0
  if (!crb(c,0)) { goto L_800D8CFC; } // 800D8CE4
  c->r[3]=c->r[31]+0x00000000u; // 800D8CE8
  c->r[5]=c->r[31]+0x00000168u; // 800D8CEC
  c->r[4]=0u+0x00000133u; // 800D8CF0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D8CF4
  c->lr=0x800D8CFCu; f_800F1300(c); // 800D8CF8
L_800D8CFC:;
  c->r[30]=c->r[28]+c->r[29]; // 800D8CFC
  W32(c->r[1]+0x00000008u,c->r[28]); // 800D8D00
  c->r[3]=c->r[26]|c->r[26]; // 800D8D04
  c->r[4]=c->r[27]|c->r[27]; // 800D8D08
  c->r[6]=c->r[30]|c->r[30]; // 800D8D0C
  c->r[5]=c->r[1]+0x00000008u; // 800D8D10
  c->lr=0x800D8D18u; f_800D9200(c); // 800D8D14
  cmps(c,0,(int32_t)c->r[3],0); // 800D8D18
  if (!crb(c,2)) { goto L_800D8D28; } // 800D8D1C
  c->r[3]=0u+0x00000000u; // 800D8D20
  goto L_800D9114; // 800D8D24
L_800D8D28:;
  c->r[3]=c->r[27]|c->r[27]; // 800D8D28
  c->lr=0x800D8D30u; f_800D6040(c); // 800D8D2C
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 800D8D30
  c->r[5]=R32(c->r[1]+0x00000008u); // 800D8D34
  c->r[0]=c->r[3]+0x00000004u; // 800D8D38
  c->r[3]=c->r[0]+c->r[5]; // 800D8D3C
  c->r[0]=c->r[3]+0x00000003u; // 800D8D40
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFFCu; // 800D8D44
  c->r[0]=c->r[4]-c->r[30]; cr0(c,c->r[0]); // 800D8D48
  if (!crb(c,1)) { goto L_800D8D58; } // 800D8D4C
  c->r[0]=0u+0x00000000u; // 800D8D50
  goto L_800D8DB0; // 800D8D54
L_800D8D58:;
  W32(c->r[26]+0x00000014u,c->r[5]); // 800D8D58
  c->r[3]=c->r[27]|c->r[27]; // 800D8D5C
  W32(c->r[1]+0x00000008u,c->r[4]); // 800D8D60
  c->lr=0x800D8D68u; f_800D6040(c); // 800D8D64
  c->r[5]=R32(c->r[26]+0x00000014u); // 800D8D68
  c->r[6]=0u+0x00000000u; // 800D8D6C
  c->r[7]=0u+0x00000000u; // 800D8D70
  c->r[4]=0u+0x00000000u; // 800D8D74
  W32(c->r[5]+0x00000000u,c->r[3]); // 800D8D78
  goto L_800D8D9C; // 800D8D7C
L_800D8D80:;
  c->r[3]=c->r[3]+c->r[7]; // 800D8D80
  c->r[6]=c->r[6]+0x00000001u; // 800D8D84
  W32(c->r[3]+0x00000004u,c->r[4]); // 800D8D88
  c->r[0]=R32(c->r[26]+0x00000014u); // 800D8D8C
  c->r[3]=c->r[0]+c->r[7]; // 800D8D90
  c->r[7]=c->r[7]+0x00000008u; // 800D8D94
  W32(c->r[3]+0x00000008u,c->r[4]); // 800D8D98
L_800D8D9C:;
  c->r[3]=R32(c->r[26]+0x00000014u); // 800D8D9C
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D8DA0
  cmpu(c,0,c->r[6],c->r[0]); // 800D8DA4
  if (crb(c,0)) { IRQCHK(c); goto L_800D8D80; } // 800D8DA8
  c->r[0]=0u+0x00000001u; // 800D8DAC
L_800D8DB0:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D8DB0
  if (!crb(c,2)) { goto L_800D8DC0; } // 800D8DB4
  c->r[3]=0u+0x00000000u; // 800D8DB8
  goto L_800D9114; // 800D8DBC
L_800D8DC0:;
  c->r[3]=c->r[27]|c->r[27]; // 800D8DC0
  c->lr=0x800D8DC8u; f_800D6100(c); // 800D8DC4
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 800D8DC8
  c->r[5]=R32(c->r[1]+0x00000008u); // 800D8DCC
  c->r[0]=c->r[3]+0x00000004u; // 800D8DD0
  c->r[3]=c->r[0]+c->r[5]; // 800D8DD4
  c->r[0]=c->r[3]+0x00000003u; // 800D8DD8
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFFCu; // 800D8DDC
  c->r[0]=c->r[4]-c->r[30]; cr0(c,c->r[0]); // 800D8DE0
  if (!crb(c,1)) { goto L_800D8DF0; } // 800D8DE4
  c->r[0]=0u+0x00000000u; // 800D8DE8
  goto L_800D8E48; // 800D8DEC
L_800D8DF0:;
  W32(c->r[26]+0x00000018u,c->r[5]); // 800D8DF0
  c->r[3]=c->r[27]|c->r[27]; // 800D8DF4
  W32(c->r[1]+0x00000008u,c->r[4]); // 800D8DF8
  c->lr=0x800D8E00u; f_800D6100(c); // 800D8DFC
  c->r[5]=R32(c->r[26]+0x00000018u); // 800D8E00
  c->r[6]=0u+0x00000000u; // 800D8E04
  c->r[7]=0u+0x00000000u; // 800D8E08
  c->r[4]=0u+0x00000000u; // 800D8E0C
  W32(c->r[5]+0x00000000u,c->r[3]); // 800D8E10
  goto L_800D8E34; // 800D8E14
L_800D8E18:;
  c->r[3]=c->r[3]+c->r[7]; // 800D8E18
  c->r[6]=c->r[6]+0x00000001u; // 800D8E1C
  W32(c->r[3]+0x00000004u,c->r[4]); // 800D8E20
  c->r[0]=R32(c->r[26]+0x00000018u); // 800D8E24
  c->r[3]=c->r[0]+c->r[7]; // 800D8E28
  c->r[7]=c->r[7]+0x00000008u; // 800D8E2C
  W32(c->r[3]+0x00000008u,c->r[4]); // 800D8E30
L_800D8E34:;
  c->r[3]=R32(c->r[26]+0x00000018u); // 800D8E34
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D8E38
  cmpu(c,0,c->r[6],c->r[0]); // 800D8E3C
  if (crb(c,0)) { IRQCHK(c); goto L_800D8E18; } // 800D8E40
  c->r[0]=0u+0x00000001u; // 800D8E44
L_800D8E48:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D8E48
  if (!crb(c,2)) { goto L_800D8E58; } // 800D8E4C
  c->r[3]=0u+0x00000000u; // 800D8E50
  goto L_800D9114; // 800D8E54
L_800D8E58:;
  c->r[3]=c->r[27]|c->r[27]; // 800D8E58
  c->r[4]=c->r[1]+0x0000000Cu; // 800D8E5C
  c->lr=0x800D8E64u; f_800D60C0(c); // 800D8E60
  cmps(c,0,(int32_t)c->r[3],0); // 800D8E64
  if (crb(c,2)) { goto L_800D90D4; } // 800D8E68
  c->r[22]=R32(c->r[1]+0x0000000Cu); // 800D8E6C
  c->r[21]=R32(c->r[1]+0x00000008u); // 800D8E70
  c->r[24]=(uint32_t)((int32_t)c->r[22]*(int32_t)1204); // 800D8E74
  c->r[3]=c->r[24]+c->r[21]; // 800D8E78
  c->r[0]=c->r[3]+0x00000003u; // 800D8E7C
  c->r[23]=rotl(c->r[0],0)&0xFFFFFFFCu; // 800D8E80
  c->r[0]=c->r[23]-c->r[30]; cr0(c,c->r[0]); // 800D8E84
  if (!crb(c,1)) { goto L_800D8E94; } // 800D8E88
  c->r[0]=0u+0x00000000u; // 800D8E8C
  goto L_800D8F08; // 800D8E90
L_800D8E94:;
  cmps(c,0,(int32_t)c->r[21],0); // 800D8E94
  if (!crb(c,2)) { goto L_800D8EB8; } // 800D8E98
  c->r[3]=0u+0x80260000u; // 800D8E9C
  c->r[5]=0u+0x80260000u; // 800D8EA0
  c->r[3]=c->r[3]+0xFFFF8C20u; // 800D8EA4
  c->r[4]=0u+0x00000043u; // 800D8EA8
  c->r[5]=c->r[5]+0xFFFF8BF8u; // 800D8EAC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D8EB0
  c->lr=0x800D8EB8u; f_800F1300(c); // 800D8EB4
L_800D8EB8:;
  c->r[25]=c->r[26]+0x00000054u; // 800D8EB8
  c->r[3]=c->r[25]|c->r[25]; // 800D8EBC
  c->lr=0x800D8EC4u; f_8018E950(c); // 800D8EC0
  c->r[4]=c->r[21]|c->r[21]; // 800D8EC4
  c->r[5]=c->r[24]|c->r[24]; // 800D8EC8
  c->r[3]=c->r[26]+0x00000044u; // 800D8ECC
  c->r[6]=0u+0x000004B4u; // 800D8ED0
  c->lr=0x800D8ED8u; f_800CF1F0(c); // 800D8ED4
  c->r[24]=c->r[3]|c->r[3]; // 800D8ED8
  c->r[3]=c->r[25]|c->r[25]; // 800D8EDC
  c->lr=0x800D8EE4u; f_8018EA30(c); // 800D8EE0
  cmpu(c,0,c->r[24],c->r[22]); // 800D8EE4
  if (crb(c,2)) { goto L_800D8F00; } // 800D8EE8
  c->r[3]=c->r[31]+0x00000000u; // 800D8EEC
  c->r[5]=c->r[31]+0x000001A0u; // 800D8EF0
  c->r[4]=0u+0x00000218u; // 800D8EF4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D8EF8
  c->lr=0x800D8F00u; f_800F1300(c); // 800D8EFC
L_800D8F00:;
  W32(c->r[1]+0x00000008u,c->r[23]); // 800D8F00
  c->r[0]=0u+0x00000001u; // 800D8F04
L_800D8F08:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D8F08
  if (!crb(c,2)) { goto L_800D8F18; } // 800D8F0C
  c->r[3]=0u+0x00000000u; // 800D8F10
  goto L_800D9114; // 800D8F14
L_800D8F18:;
  c->r[23]=R32(c->r[1]+0x00000014u); // 800D8F18
  c->r[21]=R32(c->r[1]+0x00000008u); // 800D8F1C
  c->r[24]=(uint32_t)((int32_t)c->r[23]*(int32_t)4276); // 800D8F20
  c->r[3]=c->r[24]+c->r[21]; // 800D8F24
  c->r[0]=c->r[3]+0x00000003u; // 800D8F28
  c->r[22]=rotl(c->r[0],0)&0xFFFFFFFCu; // 800D8F2C
  c->r[0]=c->r[22]-c->r[30]; cr0(c,c->r[0]); // 800D8F30
  if (!crb(c,1)) { goto L_800D8F40; } // 800D8F34
  c->r[0]=0u+0x00000000u; // 800D8F38
  goto L_800D8FB4; // 800D8F3C
L_800D8F40:;
  cmps(c,0,(int32_t)c->r[21],0); // 800D8F40
  if (!crb(c,2)) { goto L_800D8F64; } // 800D8F44
  c->r[3]=0u+0x80260000u; // 800D8F48
  c->r[5]=0u+0x80260000u; // 800D8F4C
  c->r[3]=c->r[3]+0xFFFF8BA0u; // 800D8F50
  c->r[4]=0u+0x00000043u; // 800D8F54
  c->r[5]=c->r[5]+0xFFFF8B78u; // 800D8F58
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D8F5C
  c->lr=0x800D8F64u; f_800F1300(c); // 800D8F60
L_800D8F64:;
  c->r[25]=c->r[26]+0x0000007Cu; // 800D8F64
  c->r[3]=c->r[25]|c->r[25]; // 800D8F68
  c->lr=0x800D8F70u; f_8018E950(c); // 800D8F6C
  c->r[4]=c->r[21]|c->r[21]; // 800D8F70
  c->r[5]=c->r[24]|c->r[24]; // 800D8F74
  c->r[3]=c->r[26]+0x0000006Cu; // 800D8F78
  c->r[6]=0u+0x000010B4u; // 800D8F7C
  c->lr=0x800D8F84u; f_800CF1F0(c); // 800D8F80
  c->r[24]=c->r[3]|c->r[3]; // 800D8F84
  c->r[3]=c->r[25]|c->r[25]; // 800D8F88
  c->lr=0x800D8F90u; f_8018EA30(c); // 800D8F8C
  cmpu(c,0,c->r[24],c->r[23]); // 800D8F90
  if (crb(c,2)) { goto L_800D8FAC; } // 800D8F94
  c->r[3]=c->r[31]+0x00000000u; // 800D8F98
  c->r[5]=c->r[31]+0x000001A0u; // 800D8F9C
  c->r[4]=0u+0x00000258u; // 800D8FA0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D8FA4
  c->lr=0x800D8FACu; f_800F1300(c); // 800D8FA8
L_800D8FAC:;
  W32(c->r[1]+0x00000008u,c->r[22]); // 800D8FAC
  c->r[0]=0u+0x00000001u; // 800D8FB0
L_800D8FB4:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D8FB4
  if (!crb(c,2)) { goto L_800D8FC4; } // 800D8FB8
  c->r[3]=0u+0x00000000u; // 800D8FBC
  goto L_800D9114; // 800D8FC0
L_800D8FC4:;
  c->r[23]=R32(c->r[1]+0x00000020u); // 800D8FC4
  c->r[21]=R32(c->r[1]+0x00000008u); // 800D8FC8
  c->r[25]=(uint32_t)((int32_t)c->r[23]*(int32_t)564); // 800D8FCC
  c->r[3]=c->r[25]+c->r[21]; // 800D8FD0
  c->r[0]=c->r[3]+0x00000003u; // 800D8FD4
  c->r[22]=rotl(c->r[0],0)&0xFFFFFFFCu; // 800D8FD8
  c->r[0]=c->r[22]-c->r[30]; cr0(c,c->r[0]); // 800D8FDC
  if (!crb(c,1)) { goto L_800D8FEC; } // 800D8FE0
  c->r[0]=0u+0x00000000u; // 800D8FE4
  goto L_800D9060; // 800D8FE8
L_800D8FEC:;
  cmps(c,0,(int32_t)c->r[21],0); // 800D8FEC
  if (!crb(c,2)) { goto L_800D9010; } // 800D8FF0
  c->r[3]=0u+0x80260000u; // 800D8FF4
  c->r[5]=0u+0x80260000u; // 800D8FF8
  c->r[3]=c->r[3]+0xFFFF8BE0u; // 800D8FFC
  c->r[4]=0u+0x00000043u; // 800D9000
  c->r[5]=c->r[5]+0xFFFF8BB8u; // 800D9004
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D9008
  c->lr=0x800D9010u; f_800F1300(c); // 800D900C
L_800D9010:;
  c->r[24]=c->r[26]+0x000000A4u; // 800D9010
  c->r[3]=c->r[24]|c->r[24]; // 800D9014
  c->lr=0x800D901Cu; f_8018E950(c); // 800D9018
  c->r[4]=c->r[21]|c->r[21]; // 800D901C
  c->r[5]=c->r[25]|c->r[25]; // 800D9020
  c->r[3]=c->r[26]+0x00000094u; // 800D9024
  c->r[6]=0u+0x00000234u; // 800D9028
  c->lr=0x800D9030u; f_800CF1F0(c); // 800D902C
  c->r[25]=c->r[3]|c->r[3]; // 800D9030
  c->r[3]=c->r[24]|c->r[24]; // 800D9034
  c->lr=0x800D903Cu; f_8018EA30(c); // 800D9038
  cmpu(c,0,c->r[25],c->r[23]); // 800D903C
  if (crb(c,2)) { goto L_800D9058; } // 800D9040
  c->r[3]=c->r[31]+0x00000000u; // 800D9044
  c->r[5]=c->r[31]+0x000001A0u; // 800D9048
  c->r[4]=0u+0x00000238u; // 800D904C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D9050
  c->lr=0x800D9058u; f_800F1300(c); // 800D9054
L_800D9058:;
  W32(c->r[1]+0x00000008u,c->r[22]); // 800D9058
  c->r[0]=0u+0x00000001u; // 800D905C
L_800D9060:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D9060
  if (!crb(c,2)) { goto L_800D9070; } // 800D9064
  c->r[3]=0u+0x00000000u; // 800D9068
  goto L_800D9114; // 800D906C
L_800D9070:;
  c->r[23]=R32(c->r[1]+0x00000010u); // 800D9070
  c->r[4]=R32(c->r[1]+0x00000008u); // 800D9074
  c->r[5]=(uint32_t)((int32_t)c->r[23]*(int32_t)208); // 800D9078
  c->r[3]=c->r[5]+c->r[4]; // 800D907C
  c->r[0]=c->r[3]+0x00000003u; // 800D9080
  c->r[22]=rotl(c->r[0],0)&0xFFFFFFFCu; // 800D9084
  c->r[0]=c->r[22]-c->r[30]; cr0(c,c->r[0]); // 800D9088
  if (!crb(c,1)) { goto L_800D9098; } // 800D908C
  c->r[0]=0u+0x00000000u; // 800D9090
  goto L_800D90C4; // 800D9094
L_800D9098:;
  c->r[3]=c->r[26]+0x000000BCu; // 800D9098
  c->lr=0x800D90A0u; f_800D0F30(c); // 800D909C
  cmpu(c,0,c->r[3],c->r[23]); // 800D90A0
  if (crb(c,2)) { goto L_800D90BC; } // 800D90A4
  c->r[3]=c->r[31]+0x00000000u; // 800D90A8
  c->r[5]=c->r[31]+0x000001D0u; // 800D90AC
  c->r[4]=0u+0x00000278u; // 800D90B0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D90B4
  c->lr=0x800D90BCu; f_800F1300(c); // 800D90B8
L_800D90BC:;
  W32(c->r[1]+0x00000008u,c->r[22]); // 800D90BC
  c->r[0]=0u+0x00000001u; // 800D90C0
L_800D90C4:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D90C4
  if (!crb(c,2)) { goto L_800D90D4; } // 800D90C8
  c->r[3]=0u+0x00000000u; // 800D90CC
  goto L_800D9114; // 800D90D0
L_800D90D4:;
  c->r[3]=c->r[26]|c->r[26]; // 800D90D4
  c->r[4]=c->r[27]|c->r[27]; // 800D90D8
  c->lr=0x800D90E0u; f_800D8A60(c); // 800D90DC
  c->r[0]=R32(c->r[1]+0x00000008u); // 800D90E0
  c->r[0]=c->r[0]-c->r[28]; // 800D90E4
  cmpu(c,0,c->r[0],c->r[3]); // 800D90E8
  if (crb(c,2)) { goto L_800D9104; } // 800D90EC
  c->r[3]=c->r[31]+0x00000000u; // 800D90F0
  c->r[5]=c->r[31]+0x00000200u; // 800D90F4
  c->r[4]=0u+0x0000015Fu; // 800D90F8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D90FC
  c->lr=0x800D9104u; f_800F1300(c); // 800D9100
L_800D9104:;
  W32(c->r[26]+0x00000010u,c->r[27]); // 800D9104
  c->r[3]=0u+0x00000001u; // 800D9108
  W32(c->r[26]+0x000000E4u,c->r[28]); // 800D910C
  W32(c->r[26]+0x000000E8u,c->r[29]); // 800D9110
L_800D9114:;
  c->r[11]=c->r[1]+0x00000060u; // 800D9114
  c->lr=0x800D911Cu; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D9118
  c->r[0]=R32(c->r[1]+0x00000064u); // 800D911C
  c->lr=c->r[0]; // 800D9120
  c->r[1]=c->r[1]+0x00000060u; // 800D9124
  return; // 800D9128
}

// fn_800D9130
void f_800D9130(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9130
  c->r[0]=c->lr; // 800D9134
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D9138
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D913C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D9140
  c->r[30]=c->r[6]|c->r[6]; // 800D9144
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D9148
  c->r[29]=c->r[5]|c->r[5]; // 800D914C
  W32(c->r[1]+0x00000010u,c->r[28]); // 800D9150
  c->r[28]=c->r[4]|c->r[4]; // 800D9154
  c->r[31]=R32(c->r[4]+0x00000000u); // 800D9158
  c->r[0]=c->r[31]+0x00000023u; // 800D915C
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFFCu; // 800D9160
  c->r[0]=c->r[3]-c->r[5]; cr0(c,c->r[0]); // 800D9164
  if (!crb(c,1)) { goto L_800D9174; } // 800D9168
  c->r[3]=0u+0x00000000u; // 800D916C
  goto L_800D91DC; // 800D9170
L_800D9174:;
  cmps(c,0,(int32_t)c->r[31],0); // 800D9174
  W32(c->r[4]+0x00000000u,c->r[3]); // 800D9178
  if (crb(c,2)) { goto L_800D918C; } // 800D917C
  c->r[3]=c->r[31]|c->r[31]; // 800D9180
  c->lr=0x800D9188u; f_800D0F90(c); // 800D9184
  c->r[31]=c->r[3]|c->r[3]; // 800D9188
L_800D918C:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 800D918C
  c->r[0]=c->r[3]+0x0000001Fu; // 800D9190
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800D9194
  W32(c->r[28]+0x00000000u,c->r[4]); // 800D9198
  c->r[3]=c->r[30]+c->r[4]; // 800D919C
  c->r[0]=c->r[3]+0x00000003u; // 800D91A0
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFFCu; // 800D91A4
  c->r[0]=c->r[3]-c->r[29]; cr0(c,c->r[0]); // 800D91A8
  if (!crb(c,1)) { goto L_800D91B8; } // 800D91AC
  c->r[3]=0u+0x00000000u; // 800D91B0
  goto L_800D91DC; // 800D91B4
L_800D91B8:;
  W32(c->r[28]+0x00000000u,c->r[3]); // 800D91B8
  c->r[3]=c->r[31]|c->r[31]; // 800D91BC
  c->r[5]=c->r[30]|c->r[30]; // 800D91C0
  c->lr=0x800D91C8u; f_800D10D0(c); // 800D91C4
  cmps(c,0,(int32_t)c->r[3],0); // 800D91C8
  if (crb(c,2)) { goto L_800D91D8; } // 800D91CC
  c->r[3]=c->r[31]|c->r[31]; // 800D91D0
  goto L_800D91DC; // 800D91D4
L_800D91D8:;
  c->r[3]=0u+0x00000000u; // 800D91D8
L_800D91DC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D91DC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D91E0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D91E4
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D91E8
  c->r[28]=R32(c->r[1]+0x00000010u); // 800D91EC
  c->lr=c->r[0]; // 800D91F0
  c->r[1]=c->r[1]+0x00000020u; // 800D91F4
  return; // 800D91F8
}

// fn_800D9200
void f_800D9200(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9200
  c->r[0]=c->lr; // 800D9204
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D9208
  c->r[11]=c->r[1]+0x00000040u; // 800D920C
  c->lr=0x800D9214u; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D9210
  c->r[29]=c->r[4]|c->r[4]; // 800D9214
  c->r[28]=c->r[3]|c->r[3]; // 800D9218
  c->r[30]=c->r[5]|c->r[5]; // 800D921C
  c->r[31]=c->r[6]|c->r[6]; // 800D9220
  c->r[3]=c->r[29]|c->r[29]; // 800D9224
  c->lr=0x800D922Cu; f_800D6030(c); // 800D9228
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)100); // 800D922C
  c->r[24]=R32(c->r[30]+0x00000000u); // 800D9230
  c->r[25]=c->r[3]|c->r[3]; // 800D9234
  c->r[4]=c->r[0]+c->r[24]; // 800D9238
  c->r[0]=c->r[4]+0x00000003u; // 800D923C
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFFCu; // 800D9240
  c->r[0]=c->r[4]-c->r[31]; cr0(c,c->r[0]); // 800D9244
  if (!crb(c,1)) { goto L_800D9254; } // 800D9248
  c->r[3]=0u+0x00000000u; // 800D924C
  goto L_800D9340; // 800D9250
L_800D9254:;
  W32(c->r[30]+0x00000000u,c->r[4]); // 800D9254
  c->r[23]=0u+0x00000000u; // 800D9258
  c->r[26]=0u+0x80250000u; // 800D925C
  c->r[27]=0u+0x80250000u; // 800D9260
  W32(c->r[28]+0x00000040u,c->r[24]); // 800D9264
  W32(c->r[28]+0x0000003Cu,c->r[3]); // 800D9268
  goto L_800D9334; // 800D926C
L_800D9270:;
  cmps(c,0,(int32_t)c->r[24],0); // 800D9270
  c->r[22]=c->r[24]|c->r[24]; // 800D9274
  if (crb(c,2)) { goto L_800D9288; } // 800D9278
  c->r[3]=c->r[24]|c->r[24]; // 800D927C
  c->lr=0x800D9284u; f_800DBFA0(c); // 800D9280
  c->r[22]=c->r[3]|c->r[3]; // 800D9284
L_800D9288:;
  c->r[3]=c->r[29]|c->r[29]; // 800D9288
  c->r[4]=c->r[23]|c->r[23]; // 800D928C
  c->r[5]=c->r[1]+0x00000008u; // 800D9290
  c->lr=0x800D9298u; f_800D60B0(c); // 800D9294
  cmps(c,0,(int32_t)c->r[3],0); // 800D9298
  if (crb(c,2)) { goto L_800D932C; } // 800D929C
  c->r[4]=R32(c->r[1]+0x00000008u); // 800D92A0
  c->r[3]=c->r[22]|c->r[22]; // 800D92A4
  c->lr=0x800D92ACu; f_800DC9B0(c); // 800D92A8
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800D92AC
  cmps(c,0,(int32_t)c->r[0],0); // 800D92B0
  if (crb(c,2)) { goto L_800D932C; } // 800D92B4
  c->r[21]=0u+0x00000000u; // 800D92B8
  goto L_800D9318; // 800D92BC
L_800D92C0:;
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 800D92C0
  c->r[3]=c->r[28]|c->r[28]; // 800D92C4
  c->r[4]=c->r[30]|c->r[30]; // 800D92C8
  c->r[5]=c->r[31]|c->r[31]; // 800D92CC
  c->lr=0x800D92D4u; f_800D9130(c); // 800D92D0
  cmps(c,0,(int32_t)c->r[3],0); // 800D92D4
  c->r[20]=c->r[3]|c->r[3]; // 800D92D8
  if (!crb(c,2)) { goto L_800D92F8; } // 800D92DC
  c->r[6]=c->r[23]|c->r[23]; // 800D92E0
  c->r[3]=c->r[26]+0x00007D20u; // 800D92E4
  c->r[5]=c->r[27]+0x00007F88u; // 800D92E8
  c->r[4]=0u+0x000001BAu; // 800D92EC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D92F0
  c->lr=0x800D92F8u; f_800F13A0(c); // 800D92F4
L_800D92F8:;
  cmps(c,0,(int32_t)c->r[20],0); // 800D92F8
  if (!crb(c,2)) { goto L_800D9308; } // 800D92FC
  c->r[3]=0u+0x00000000u; // 800D9300
  goto L_800D9340; // 800D9304
L_800D9308:;
  c->r[3]=c->r[22]|c->r[22]; // 800D9308
  c->r[4]=c->r[20]|c->r[20]; // 800D930C
  c->lr=0x800D9314u; f_800DCCD0(c); // 800D9310
  c->r[21]=c->r[21]+0x00000001u; // 800D9314
L_800D9318:;
  c->r[4]=R32(c->r[1]+0x00000008u); // 800D9318
  cmps(c,0,(int32_t)c->r[21],(int32_t)c->r[4]); // 800D931C
  if (crb(c,0)) { IRQCHK(c); goto L_800D92C0; } // 800D9320
  c->r[3]=c->r[22]|c->r[22]; // 800D9324
  c->lr=0x800D932Cu; f_800DCB20(c); // 800D9328
L_800D932C:;
  c->r[23]=c->r[23]+0x00000001u; // 800D932C
  c->r[24]=c->r[24]+0x00000064u; // 800D9330
L_800D9334:;
  cmpu(c,0,c->r[23],c->r[25]); // 800D9334
  if (crb(c,0)) { IRQCHK(c); goto L_800D9270; } // 800D9338
  c->r[3]=0u+0x00000001u; // 800D933C
L_800D9340:;
  c->r[11]=c->r[1]+0x00000040u; // 800D9340
  c->lr=0x800D9348u; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D9344
  c->r[0]=R32(c->r[1]+0x00000044u); // 800D9348
  c->lr=c->r[0]; // 800D934C
  c->r[1]=c->r[1]+0x00000040u; // 800D9350
  return; // 800D9354
}

// fn_800D9360
void f_800D9360(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFED90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9360
  c->r[0]=c->lr; // 800D9364
  W32(c->r[1]+0x00001274u,c->r[0]); // 800D9368
  c->r[11]=c->r[1]+0x00001270u; // 800D936C
  c->lr=0x800D9374u; { W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D9370
  c->r[31]=c->r[3]|c->r[3]; // 800D9374
  c->r[19]=0u+0x00000000u; // 800D9378
  c->r[18]=0u+0x00000000u; // 800D937C
  c->r[21]=0u+0x80250000u; // 800D9380
  c->r[20]=0u+0x80250000u; // 800D9384
  goto L_800D93C4; // 800D9388
L_800D938C:;
  cmpu(c,0,c->r[19],c->r[8]); // 800D938C
  if (crb(c,0)) { goto L_800D93B0; } // 800D9390
  c->r[6]=c->r[19]|c->r[19]; // 800D9394
  c->r[3]=c->r[21]+0x00007D20u; // 800D9398
  c->r[5]=c->r[20]+0x00007FBCu; // 800D939C
  c->r[4]=0u+0x000002B9u; // 800D93A0
  c->r[7]=0u+0x00000000u; // 800D93A4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D93A8
  c->lr=0x800D93B0u; f_800F1300(c); // 800D93AC
L_800D93B0:;
  c->r[0]=R32(c->r[31]+0x00000040u); // 800D93B0
  c->r[3]=c->r[0]+c->r[18]; // 800D93B4
  c->lr=0x800D93BCu; f_800DC0B0(c); // 800D93B8
  c->r[18]=c->r[18]+0x00000064u; // 800D93BC
  c->r[19]=c->r[19]+0x00000001u; // 800D93C0
L_800D93C4:;
  c->r[8]=R32(c->r[31]+0x0000003Cu); // 800D93C4
  cmpu(c,0,c->r[19],c->r[8]); // 800D93C8
  if (crb(c,0)) { IRQCHK(c); goto L_800D938C; } // 800D93CC
  c->r[0]=R32(c->r[31]+0x00000048u); // 800D93D0
  cmpu(c,0,c->r[0],0x00000002u); // 800D93D4
  if (crb(c,0)) { goto L_800D961C; } // 800D93D8
  c->r[30]=c->r[31]+0x00000054u; // 800D93DC
  c->r[3]=c->r[30]|c->r[30]; // 800D93E0
  c->lr=0x800D93E8u; f_8018E950(c); // 800D93E4
  c->r[4]=0u+0x800E0000u; // 800D93E8
  c->r[5]=0u+0x800E0000u; // 800D93EC
  c->r[3]=c->r[1]+0x00000C38u; // 800D93F0
  c->r[6]=0u+0x0000000Cu; // 800D93F4
  c->r[4]=c->r[4]+0xFFFF8610u; // 800D93F8
  c->r[5]=c->r[5]+0xFFFF8630u; // 800D93FC
  c->r[7]=0u+0x00000080u; // 800D9400
  c->lr=0x800D9408u; f_802073CC(c); // 800D9404
  c->r[29]=0u+0x80260000u; // 800D9408
  c->r[28]=0u+0x80260000u; // 800D940C
  c->r[27]=0u+0x80250000u; // 800D9410
  c->r[26]=0u+0x80250000u; // 800D9414
  c->r[25]=0u+0x80260000u; // 800D9418
  c->r[24]=0u+0x80260000u; // 800D941C
  c->r[21]=0u+0x80250000u; // 800D9420
  c->r[20]=0u+0x80250000u; // 800D9424
  goto L_800D94FC; // 800D9428
L_800D942C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D942C
  if (!crb(c,2)) { goto L_800D9448; } // 800D9430
  c->r[3]=c->r[29]+0xFFFF8B6Cu; // 800D9434
  c->r[5]=c->r[28]+0xFFFF8B48u; // 800D9438
  c->r[4]=0u+0x000001F1u; // 800D943C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D9440
  c->lr=0x800D9448u; f_800F1300(c); // 800D9444
L_800D9448:;
  c->r[22]=R32(c->r[31]+0x0000004Cu); // 800D9448
  cmps(c,0,(int32_t)c->r[22],0); // 800D944C
  if (!crb(c,2)) { goto L_800D9468; } // 800D9450
  c->r[3]=c->r[27]+0x0000730Cu; // 800D9454
  c->r[5]=c->r[26]+0x000072E8u; // 800D9458
  c->r[4]=0u+0x0000023Du; // 800D945C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D9460
  c->lr=0x800D9468u; f_800F1300(c); // 800D9464
L_800D9468:;
  c->r[23]=addc(c,c->r[22],0xFFFFFF10u,0); cr0(c,c->r[23]); // 800D9468
  if (!crb(c,2)) { goto L_800D9484; } // 800D946C
  c->r[3]=c->r[25]+0xFFFF8B3Cu; // 800D9470
  c->r[5]=c->r[24]+0xFFFF8B18u; // 800D9474
  c->r[4]=0u+0x00000193u; // 800D9478
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D947C
  c->lr=0x800D9484u; f_800F1300(c); // 800D9480
L_800D9484:;
  c->r[0]=R32(c->r[31]+0x0000004Cu); // 800D9484
  c->r[3]=c->r[31]+0x00000048u; // 800D9488
  W32(c->r[1]+0x00000028u,c->r[0]); // 800D948C
  c->r[4]=c->r[1]+0x00000028u; // 800D9490
  c->lr=0x800D9498u; f_800F1A70(c); // 800D9494
  c->r[3]=R8(c->r[23]+0x00000098u); // 800D9498
  c->r[0]=R32(c->r[23]+0x00000050u); // 800D949C
  c->r[3]=c->r[3]+c->r[0]; // 800D94A0
  cmps(c,0,(int32_t)c->r[3],127); // 800D94A4
  if (!crb(c,1)) { goto L_800D94B4; } // 800D94A8
  c->r[0]=0u+0x0000007Fu; // 800D94AC
  goto L_800D94BC; // 800D94B0
L_800D94B4:;
  c->r[0]=sraw(c,c->r[3],31); // 800D94B4
  c->r[0]=c->r[3]&~c->r[0]; // 800D94B8
L_800D94BC:;
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 800D94BC
  c->r[19]=c->r[1]+0x00000C38u; // 800D94C0
  cmps(c,0,(int32_t)c->r[23],0); // 800D94C4
  c->r[19]=c->r[19]+c->r[0]; // 800D94C8
  c->r[22]=c->r[19]+0x00000004u; // 800D94CC
  if (!crb(c,2)) { goto L_800D94E8; } // 800D94D0
  c->r[3]=c->r[21]+0x0000733Cu; // 800D94D4
  c->r[5]=c->r[20]+0x00007318u; // 800D94D8
  c->r[4]=0u+0x00000233u; // 800D94DC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D94E0
  c->lr=0x800D94E8u; f_800F1300(c); // 800D94E4
L_800D94E8:;
  W32(c->r[1]+0x0000002Cu,c->r[22]); // 800D94E8
  c->r[3]=c->r[19]|c->r[19]; // 800D94EC
  c->r[4]=c->r[1]+0x0000002Cu; // 800D94F0
  c->r[5]=c->r[23]+0x000000F0u; // 800D94F4
  c->lr=0x800D94FCu; f_800F1CC0(c); // 800D94F8
L_800D94FC:;
  c->r[0]=R32(c->r[31]+0x00000048u); // 800D94FC
  cmps(c,0,(int32_t)c->r[0],0); // 800D9500
  if (!crb(c,2)) { IRQCHK(c); goto L_800D942C; } // 800D9504
  c->r[18]=c->r[1]+0x00000C38u; // 800D9508
  c->r[19]=0u+0x00000000u; // 800D950C
  c->r[29]=0u+0x80260000u; // 800D9510
  c->r[28]=0u+0x80260000u; // 800D9514
  c->r[26]=0u+0x80250000u; // 800D9518
  c->r[25]=0u+0x80250000u; // 800D951C
  c->r[24]=0u+0x80260000u; // 800D9520
  c->r[22]=0u+0x80260000u; // 800D9524
  c->r[21]=0u+0x80250000u; // 800D9528
  c->r[20]=0u+0x80250000u; // 800D952C
L_800D9530:;
  c->r[0]=R32(c->r[18]+0x00000000u); // 800D9530
  cmps(c,0,(int32_t)c->r[0],0); // 800D9534
  if (crb(c,2)) { goto L_800D95EC; } // 800D9538
  c->r[23]=c->r[31]+0x0000004Cu; // 800D953C
  goto L_800D95E0; // 800D9540
L_800D9544:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D9544
  if (!crb(c,2)) { goto L_800D9560; } // 800D9548
  c->r[3]=c->r[29]+0xFFFF8B6Cu; // 800D954C
  c->r[5]=c->r[28]+0xFFFF8B48u; // 800D9550
  c->r[4]=0u+0x000001F1u; // 800D9554
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D9558
  c->lr=0x800D9560u; f_800F1300(c); // 800D955C
L_800D9560:;
  c->r[27]=R32(c->r[18]+0x00000004u); // 800D9560
  cmps(c,0,(int32_t)c->r[27],0); // 800D9564
  if (!crb(c,2)) { goto L_800D9580; } // 800D9568
  c->r[3]=c->r[26]+0x0000730Cu; // 800D956C
  c->r[5]=c->r[25]+0x000072E8u; // 800D9570
  c->r[4]=0u+0x0000023Du; // 800D9574
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D9578
  c->lr=0x800D9580u; f_800F1300(c); // 800D957C
L_800D9580:;
  c->r[27]=addc(c,c->r[27],0xFFFFFF10u,0); cr0(c,c->r[27]); // 800D9580
  if (!crb(c,2)) { goto L_800D959C; } // 800D9584
  c->r[3]=c->r[24]+0xFFFF8B3Cu; // 800D9588
  c->r[5]=c->r[22]+0xFFFF8B18u; // 800D958C
  c->r[4]=0u+0x00000193u; // 800D9590
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D9594
  c->lr=0x800D959Cu; f_800F1300(c); // 800D9598
L_800D959C:;
  c->r[0]=R32(c->r[18]+0x00000004u); // 800D959C
  c->r[3]=c->r[18]|c->r[18]; // 800D95A0
  W32(c->r[1]+0x00000030u,c->r[0]); // 800D95A4
  c->r[4]=c->r[1]+0x00000030u; // 800D95A8
  c->lr=0x800D95B0u; f_800F1A70(c); // 800D95AC
  cmps(c,0,(int32_t)c->r[27],0); // 800D95B0
  if (!crb(c,2)) { goto L_800D95CC; } // 800D95B4
  c->r[3]=c->r[21]+0x0000733Cu; // 800D95B8
  c->r[5]=c->r[20]+0x00007318u; // 800D95BC
  c->r[4]=0u+0x00000233u; // 800D95C0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D95C4
  c->lr=0x800D95CCu; f_800F1300(c); // 800D95C8
L_800D95CC:;
  W32(c->r[1]+0x00000034u,c->r[23]); // 800D95CC
  c->r[3]=c->r[31]+0x00000048u; // 800D95D0
  c->r[4]=c->r[1]+0x00000034u; // 800D95D4
  c->r[5]=c->r[27]+0x000000F0u; // 800D95D8
  c->lr=0x800D95E0u; f_800F1CC0(c); // 800D95DC
L_800D95E0:;
  c->r[0]=R32(c->r[18]+0x00000000u); // 800D95E0
  cmps(c,0,(int32_t)c->r[0],0); // 800D95E4
  if (!crb(c,2)) { IRQCHK(c); goto L_800D9544; } // 800D95E8
L_800D95EC:;
  c->r[19]=c->r[19]+0x00000001u; // 800D95EC
  c->r[18]=c->r[18]+0x0000000Cu; // 800D95F0
  cmps(c,0,(int32_t)c->r[19],128); // 800D95F4
  if (crb(c,0)) { IRQCHK(c); goto L_800D9530; } // 800D95F8
  c->r[4]=0u+0x800E0000u; // 800D95FC
  c->r[3]=c->r[1]+0x00000C38u; // 800D9600
  c->r[4]=c->r[4]+0xFFFF8630u; // 800D9604
  c->r[5]=0u+0x0000000Cu; // 800D9608
  c->r[6]=0u+0x00000080u; // 800D960C
  c->lr=0x800D9614u; f_802074C4(c); // 800D9610
  c->r[3]=c->r[30]|c->r[30]; // 800D9614
  c->lr=0x800D961Cu; f_8018EA30(c); // 800D9618
L_800D961C:;
  c->r[0]=R32(c->r[31]+0x00000070u); // 800D961C
  cmpu(c,0,c->r[0],0x00000002u); // 800D9620
  if (crb(c,0)) { goto L_800D9868; } // 800D9624
  c->r[30]=c->r[31]+0x0000007Cu; // 800D9628
  c->r[3]=c->r[30]|c->r[30]; // 800D962C
  c->lr=0x800D9634u; f_8018E950(c); // 800D9630
  c->r[4]=0u+0x800E0000u; // 800D9634
  c->r[5]=0u+0x800E0000u; // 800D9638
  c->r[3]=c->r[1]+0x00000638u; // 800D963C
  c->r[6]=0u+0x0000000Cu; // 800D9640
  c->r[4]=c->r[4]+0xFFFF8690u; // 800D9644
  c->r[5]=c->r[5]+0xFFFF86B0u; // 800D9648
  c->r[7]=0u+0x00000080u; // 800D964C
  c->lr=0x800D9654u; f_802073CC(c); // 800D9650
  c->r[29]=0u+0x80260000u; // 800D9654
  c->r[28]=0u+0x80260000u; // 800D9658
  c->r[27]=0u+0x80260000u; // 800D965C
  c->r[26]=0u+0x80260000u; // 800D9660
  c->r[25]=0u+0x80260000u; // 800D9664
  c->r[24]=0u+0x80260000u; // 800D9668
  c->r[21]=0u+0x80260000u; // 800D966C
  c->r[20]=0u+0x80260000u; // 800D9670
  goto L_800D9748; // 800D9674
L_800D9678:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D9678
  if (!crb(c,2)) { goto L_800D9694; } // 800D967C
  c->r[3]=c->r[29]+0xFFFF8AACu; // 800D9680
  c->r[5]=c->r[28]+0xFFFF8A88u; // 800D9684
  c->r[4]=0u+0x000001F1u; // 800D9688
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D968C
  c->lr=0x800D9694u; f_800F1300(c); // 800D9690
L_800D9694:;
  c->r[22]=R32(c->r[31]+0x00000074u); // 800D9694
  cmps(c,0,(int32_t)c->r[22],0); // 800D9698
  if (!crb(c,2)) { goto L_800D96B4; } // 800D969C
  c->r[3]=c->r[27]+0xFFFF8A4Cu; // 800D96A0
  c->r[5]=c->r[26]+0xFFFF8A28u; // 800D96A4
  c->r[4]=0u+0x0000023Du; // 800D96A8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D96AC
  c->lr=0x800D96B4u; f_800F1300(c); // 800D96B0
L_800D96B4:;
  c->r[23]=addc(c,c->r[22],0xFFFFFF10u,0); cr0(c,c->r[23]); // 800D96B4
  if (!crb(c,2)) { goto L_800D96D0; } // 800D96B8
  c->r[3]=c->r[25]+0xFFFF8A7Cu; // 800D96BC
  c->r[5]=c->r[24]+0xFFFF8A58u; // 800D96C0
  c->r[4]=0u+0x00000193u; // 800D96C4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D96C8
  c->lr=0x800D96D0u; f_800F1300(c); // 800D96CC
L_800D96D0:;
  c->r[0]=R32(c->r[31]+0x00000074u); // 800D96D0
  c->r[3]=c->r[31]+0x00000070u; // 800D96D4
  W32(c->r[1]+0x00000018u,c->r[0]); // 800D96D8
  c->r[4]=c->r[1]+0x00000018u; // 800D96DC
  c->lr=0x800D96E4u; f_800F1A70(c); // 800D96E0
  c->r[3]=R8(c->r[23]+0x00000098u); // 800D96E4
  c->r[0]=R32(c->r[23]+0x00000050u); // 800D96E8
  c->r[3]=c->r[3]+c->r[0]; // 800D96EC
  cmps(c,0,(int32_t)c->r[3],127); // 800D96F0
  if (!crb(c,1)) { goto L_800D9700; } // 800D96F4
  c->r[0]=0u+0x0000007Fu; // 800D96F8
  goto L_800D9708; // 800D96FC
L_800D9700:;
  c->r[0]=sraw(c,c->r[3],31); // 800D9700
  c->r[0]=c->r[3]&~c->r[0]; // 800D9704
L_800D9708:;
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 800D9708
  c->r[19]=c->r[1]+0x00000638u; // 800D970C
  cmps(c,0,(int32_t)c->r[23],0); // 800D9710
  c->r[19]=c->r[19]+c->r[0]; // 800D9714
  c->r[22]=c->r[19]+0x00000004u; // 800D9718
  if (!crb(c,2)) { goto L_800D9734; } // 800D971C
  c->r[3]=c->r[21]+0xFFFF8A1Cu; // 800D9720
  c->r[5]=c->r[20]+0xFFFF89F8u; // 800D9724
  c->r[4]=0u+0x00000233u; // 800D9728
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D972C
  c->lr=0x800D9734u; f_800F1300(c); // 800D9730
L_800D9734:;
  W32(c->r[1]+0x0000001Cu,c->r[22]); // 800D9734
  c->r[3]=c->r[19]|c->r[19]; // 800D9738
  c->r[4]=c->r[1]+0x0000001Cu; // 800D973C
  c->r[5]=c->r[23]+0x000000F0u; // 800D9740
  c->lr=0x800D9748u; f_800F1CC0(c); // 800D9744
L_800D9748:;
  c->r[0]=R32(c->r[31]+0x00000070u); // 800D9748
  cmps(c,0,(int32_t)c->r[0],0); // 800D974C
  if (!crb(c,2)) { IRQCHK(c); goto L_800D9678; } // 800D9750
  c->r[18]=c->r[1]+0x00000638u; // 800D9754
  c->r[19]=0u+0x00000000u; // 800D9758
  c->r[29]=0u+0x80260000u; // 800D975C
  c->r[28]=0u+0x80260000u; // 800D9760
  c->r[26]=0u+0x80260000u; // 800D9764
  c->r[25]=0u+0x80260000u; // 800D9768
  c->r[24]=0u+0x80260000u; // 800D976C
  c->r[22]=0u+0x80260000u; // 800D9770
  c->r[21]=0u+0x80260000u; // 800D9774
  c->r[20]=0u+0x80260000u; // 800D9778
L_800D977C:;
  c->r[0]=R32(c->r[18]+0x00000000u); // 800D977C
  cmps(c,0,(int32_t)c->r[0],0); // 800D9780
  if (crb(c,2)) { goto L_800D9838; } // 800D9784
  c->r[23]=c->r[31]+0x00000074u; // 800D9788
  goto L_800D982C; // 800D978C
L_800D9790:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D9790
  if (!crb(c,2)) { goto L_800D97AC; } // 800D9794
  c->r[3]=c->r[29]+0xFFFF8AACu; // 800D9798
  c->r[5]=c->r[28]+0xFFFF8A88u; // 800D979C
  c->r[4]=0u+0x000001F1u; // 800D97A0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D97A4
  c->lr=0x800D97ACu; f_800F1300(c); // 800D97A8
L_800D97AC:;
  c->r[27]=R32(c->r[18]+0x00000004u); // 800D97AC
  cmps(c,0,(int32_t)c->r[27],0); // 800D97B0
  if (!crb(c,2)) { goto L_800D97CC; } // 800D97B4
  c->r[3]=c->r[26]+0xFFFF8A4Cu; // 800D97B8
  c->r[5]=c->r[25]+0xFFFF8A28u; // 800D97BC
  c->r[4]=0u+0x0000023Du; // 800D97C0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D97C4
  c->lr=0x800D97CCu; f_800F1300(c); // 800D97C8
L_800D97CC:;
  c->r[27]=addc(c,c->r[27],0xFFFFFF10u,0); cr0(c,c->r[27]); // 800D97CC
  if (!crb(c,2)) { goto L_800D97E8; } // 800D97D0
  c->r[3]=c->r[24]+0xFFFF8A7Cu; // 800D97D4
  c->r[5]=c->r[22]+0xFFFF8A58u; // 800D97D8
  c->r[4]=0u+0x00000193u; // 800D97DC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D97E0
  c->lr=0x800D97E8u; f_800F1300(c); // 800D97E4
L_800D97E8:;
  c->r[0]=R32(c->r[18]+0x00000004u); // 800D97E8
  c->r[3]=c->r[18]|c->r[18]; // 800D97EC
  W32(c->r[1]+0x00000020u,c->r[0]); // 800D97F0
  c->r[4]=c->r[1]+0x00000020u; // 800D97F4
  c->lr=0x800D97FCu; f_800F1A70(c); // 800D97F8
  cmps(c,0,(int32_t)c->r[27],0); // 800D97FC
  if (!crb(c,2)) { goto L_800D9818; } // 800D9800
  c->r[3]=c->r[21]+0xFFFF8A1Cu; // 800D9804
  c->r[5]=c->r[20]+0xFFFF89F8u; // 800D9808
  c->r[4]=0u+0x00000233u; // 800D980C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D9810
  c->lr=0x800D9818u; f_800F1300(c); // 800D9814
L_800D9818:;
  W32(c->r[1]+0x00000024u,c->r[23]); // 800D9818
  c->r[3]=c->r[31]+0x00000070u; // 800D981C
  c->r[4]=c->r[1]+0x00000024u; // 800D9820
  c->r[5]=c->r[27]+0x000000F0u; // 800D9824
  c->lr=0x800D982Cu; f_800F1CC0(c); // 800D9828
L_800D982C:;
  c->r[0]=R32(c->r[18]+0x00000000u); // 800D982C
  cmps(c,0,(int32_t)c->r[0],0); // 800D9830
  if (!crb(c,2)) { IRQCHK(c); goto L_800D9790; } // 800D9834
L_800D9838:;
  c->r[19]=c->r[19]+0x00000001u; // 800D9838
  c->r[18]=c->r[18]+0x0000000Cu; // 800D983C
  cmps(c,0,(int32_t)c->r[19],128); // 800D9840
  if (crb(c,0)) { IRQCHK(c); goto L_800D977C; } // 800D9844
  c->r[4]=0u+0x800E0000u; // 800D9848
  c->r[3]=c->r[1]+0x00000638u; // 800D984C
  c->r[4]=c->r[4]+0xFFFF86B0u; // 800D9850
  c->r[5]=0u+0x0000000Cu; // 800D9854
  c->r[6]=0u+0x00000080u; // 800D9858
  c->lr=0x800D9860u; f_802074C4(c); // 800D985C
  c->r[3]=c->r[30]|c->r[30]; // 800D9860
  c->lr=0x800D9868u; f_8018EA30(c); // 800D9864
L_800D9868:;
  c->r[0]=R32(c->r[31]+0x00000098u); // 800D9868
  cmpu(c,0,c->r[0],0x00000002u); // 800D986C
  if (crb(c,0)) { goto L_800D9AB4; } // 800D9870
  c->r[24]=c->r[31]+0x000000A4u; // 800D9874
  c->r[3]=c->r[24]|c->r[24]; // 800D9878
  c->lr=0x800D9880u; f_8018E950(c); // 800D987C
  c->r[4]=0u+0x800E0000u; // 800D9880
  c->r[5]=0u+0x800E0000u; // 800D9884
  c->r[3]=c->r[1]+0x00000038u; // 800D9888
  c->r[6]=0u+0x0000000Cu; // 800D988C
  c->r[4]=c->r[4]+0xFFFF8710u; // 800D9890
  c->r[5]=c->r[5]+0xFFFF8730u; // 800D9894
  c->r[7]=0u+0x00000080u; // 800D9898
  c->lr=0x800D98A0u; f_802073CC(c); // 800D989C
  c->r[25]=0u+0x80260000u; // 800D98A0
  c->r[26]=0u+0x80260000u; // 800D98A4
  c->r[27]=0u+0x80260000u; // 800D98A8
  c->r[28]=0u+0x80260000u; // 800D98AC
  c->r[29]=0u+0x80260000u; // 800D98B0
  c->r[30]=0u+0x80260000u; // 800D98B4
  c->r[21]=0u+0x80260000u; // 800D98B8
  c->r[20]=0u+0x80260000u; // 800D98BC
  goto L_800D9994; // 800D98C0
L_800D98C4:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D98C4
  if (!crb(c,2)) { goto L_800D98E0; } // 800D98C8
  c->r[3]=c->r[25]+0xFFFF89ECu; // 800D98CC
  c->r[5]=c->r[26]+0xFFFF89C8u; // 800D98D0
  c->r[4]=0u+0x000001F1u; // 800D98D4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D98D8
  c->lr=0x800D98E0u; f_800F1300(c); // 800D98DC
L_800D98E0:;
  c->r[22]=R32(c->r[31]+0x0000009Cu); // 800D98E0
  cmps(c,0,(int32_t)c->r[22],0); // 800D98E4
  if (!crb(c,2)) { goto L_800D9900; } // 800D98E8
  c->r[3]=c->r[27]+0xFFFF898Cu; // 800D98EC
  c->r[5]=c->r[28]+0xFFFF8968u; // 800D98F0
  c->r[4]=0u+0x0000023Du; // 800D98F4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D98F8
  c->lr=0x800D9900u; f_800F1300(c); // 800D98FC
L_800D9900:;
  c->r[23]=addc(c,c->r[22],0xFFFFFF10u,0); cr0(c,c->r[23]); // 800D9900
  if (!crb(c,2)) { goto L_800D991C; } // 800D9904
  c->r[3]=c->r[29]+0xFFFF89BCu; // 800D9908
  c->r[5]=c->r[30]+0xFFFF8998u; // 800D990C
  c->r[4]=0u+0x00000193u; // 800D9910
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D9914
  c->lr=0x800D991Cu; f_800F1300(c); // 800D9918
L_800D991C:;
  c->r[0]=R32(c->r[31]+0x0000009Cu); // 800D991C
  c->r[3]=c->r[31]+0x00000098u; // 800D9920
  W32(c->r[1]+0x00000008u,c->r[0]); // 800D9924
  c->r[4]=c->r[1]+0x00000008u; // 800D9928
  c->lr=0x800D9930u; f_800F1A70(c); // 800D992C
  c->r[3]=R8(c->r[23]+0x00000098u); // 800D9930
  c->r[0]=R32(c->r[23]+0x00000050u); // 800D9934
  c->r[3]=c->r[3]+c->r[0]; // 800D9938
  cmps(c,0,(int32_t)c->r[3],127); // 800D993C
  if (!crb(c,1)) { goto L_800D994C; } // 800D9940
  c->r[0]=0u+0x0000007Fu; // 800D9944
  goto L_800D9954; // 800D9948
L_800D994C:;
  c->r[0]=sraw(c,c->r[3],31); // 800D994C
  c->r[0]=c->r[3]&~c->r[0]; // 800D9950
L_800D9954:;
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 800D9954
  c->r[19]=c->r[1]+0x00000038u; // 800D9958
  cmps(c,0,(int32_t)c->r[23],0); // 800D995C
  c->r[19]=c->r[19]+c->r[0]; // 800D9960
  c->r[22]=c->r[19]+0x00000004u; // 800D9964
  if (!crb(c,2)) { goto L_800D9980; } // 800D9968
  c->r[3]=c->r[21]+0xFFFF895Cu; // 800D996C
  c->r[5]=c->r[20]+0xFFFF8938u; // 800D9970
  c->r[4]=0u+0x00000233u; // 800D9974
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D9978
  c->lr=0x800D9980u; f_800F1300(c); // 800D997C
L_800D9980:;
  W32(c->r[1]+0x0000000Cu,c->r[22]); // 800D9980
  c->r[3]=c->r[19]|c->r[19]; // 800D9984
  c->r[4]=c->r[1]+0x0000000Cu; // 800D9988
  c->r[5]=c->r[23]+0x000000F0u; // 800D998C
  c->lr=0x800D9994u; f_800F1CC0(c); // 800D9990
L_800D9994:;
  c->r[0]=R32(c->r[31]+0x00000098u); // 800D9994
  cmps(c,0,(int32_t)c->r[0],0); // 800D9998
  if (!crb(c,2)) { IRQCHK(c); goto L_800D98C4; } // 800D999C
  c->r[18]=c->r[1]+0x00000038u; // 800D99A0
  c->r[19]=0u+0x00000000u; // 800D99A4
  c->r[20]=0u+0x80260000u; // 800D99A8
  c->r[21]=0u+0x80260000u; // 800D99AC
  c->r[30]=0u+0x80260000u; // 800D99B0
  c->r[29]=0u+0x80260000u; // 800D99B4
  c->r[28]=0u+0x80260000u; // 800D99B8
  c->r[27]=0u+0x80260000u; // 800D99BC
  c->r[26]=0u+0x80260000u; // 800D99C0
  c->r[25]=0u+0x80260000u; // 800D99C4
L_800D99C8:;
  c->r[0]=R32(c->r[18]+0x00000000u); // 800D99C8
  cmps(c,0,(int32_t)c->r[0],0); // 800D99CC
  if (crb(c,2)) { goto L_800D9A84; } // 800D99D0
  c->r[23]=c->r[31]+0x0000009Cu; // 800D99D4
  goto L_800D9A78; // 800D99D8
L_800D99DC:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D99DC
  if (!crb(c,2)) { goto L_800D99F8; } // 800D99E0
  c->r[3]=c->r[20]+0xFFFF89ECu; // 800D99E4
  c->r[5]=c->r[21]+0xFFFF89C8u; // 800D99E8
  c->r[4]=0u+0x000001F1u; // 800D99EC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D99F0
  c->lr=0x800D99F8u; f_800F1300(c); // 800D99F4
L_800D99F8:;
  c->r[22]=R32(c->r[18]+0x00000004u); // 800D99F8
  cmps(c,0,(int32_t)c->r[22],0); // 800D99FC
  if (!crb(c,2)) { goto L_800D9A18; } // 800D9A00
  c->r[3]=c->r[30]+0xFFFF898Cu; // 800D9A04
  c->r[5]=c->r[29]+0xFFFF8968u; // 800D9A08
  c->r[4]=0u+0x0000023Du; // 800D9A0C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D9A10
  c->lr=0x800D9A18u; f_800F1300(c); // 800D9A14
L_800D9A18:;
  c->r[22]=addc(c,c->r[22],0xFFFFFF10u,0); cr0(c,c->r[22]); // 800D9A18
  if (!crb(c,2)) { goto L_800D9A34; } // 800D9A1C
  c->r[3]=c->r[28]+0xFFFF89BCu; // 800D9A20
  c->r[5]=c->r[27]+0xFFFF8998u; // 800D9A24
  c->r[4]=0u+0x00000193u; // 800D9A28
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D9A2C
  c->lr=0x800D9A34u; f_800F1300(c); // 800D9A30
L_800D9A34:;
  c->r[0]=R32(c->r[18]+0x00000004u); // 800D9A34
  c->r[3]=c->r[18]|c->r[18]; // 800D9A38
  W32(c->r[1]+0x00000010u,c->r[0]); // 800D9A3C
  c->r[4]=c->r[1]+0x00000010u; // 800D9A40
  c->lr=0x800D9A48u; f_800F1A70(c); // 800D9A44
  cmps(c,0,(int32_t)c->r[22],0); // 800D9A48
  if (!crb(c,2)) { goto L_800D9A64; } // 800D9A4C
  c->r[3]=c->r[26]+0xFFFF895Cu; // 800D9A50
  c->r[5]=c->r[25]+0xFFFF8938u; // 800D9A54
  c->r[4]=0u+0x00000233u; // 800D9A58
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D9A5C
  c->lr=0x800D9A64u; f_800F1300(c); // 800D9A60
L_800D9A64:;
  W32(c->r[1]+0x00000014u,c->r[23]); // 800D9A64
  c->r[3]=c->r[31]+0x00000098u; // 800D9A68
  c->r[4]=c->r[1]+0x00000014u; // 800D9A6C
  c->r[5]=c->r[22]+0x000000F0u; // 800D9A70
  c->lr=0x800D9A78u; f_800F1CC0(c); // 800D9A74
L_800D9A78:;
  c->r[0]=R32(c->r[18]+0x00000000u); // 800D9A78
  cmps(c,0,(int32_t)c->r[0],0); // 800D9A7C
  if (!crb(c,2)) { IRQCHK(c); goto L_800D99DC; } // 800D9A80
L_800D9A84:;
  c->r[19]=c->r[19]+0x00000001u; // 800D9A84
  c->r[18]=c->r[18]+0x0000000Cu; // 800D9A88
  cmps(c,0,(int32_t)c->r[19],128); // 800D9A8C
  if (crb(c,0)) { IRQCHK(c); goto L_800D99C8; } // 800D9A90
  c->r[4]=0u+0x800E0000u; // 800D9A94
  c->r[3]=c->r[1]+0x00000038u; // 800D9A98
  c->r[4]=c->r[4]+0xFFFF8730u; // 800D9A9C
  c->r[5]=0u+0x0000000Cu; // 800D9AA0
  c->r[6]=0u+0x00000080u; // 800D9AA4
  c->lr=0x800D9AACu; f_802074C4(c); // 800D9AA8
  c->r[3]=c->r[24]|c->r[24]; // 800D9AAC
  c->lr=0x800D9AB4u; f_8018EA30(c); // 800D9AB0
L_800D9AB4:;
  c->r[11]=c->r[1]+0x00001270u; // 800D9AB4
  c->lr=0x800D9ABCu; { c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D9AB8
  c->r[0]=R32(c->r[1]+0x00001274u); // 800D9ABC
  c->lr=c->r[0]; // 800D9AC0
  c->r[1]=c->r[1]+0x00001270u; // 800D9AC4
  return; // 800D9AC8
}

// fn_800D9AD0
void f_800D9AD0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9AD0
  c->r[0]=c->lr; // 800D9AD4
  W32(c->r[1]+0x00000054u,c->r[0]); // 800D9AD8
  c->r[11]=c->r[1]+0x00000050u; // 800D9ADC
  c->lr=0x800D9AE4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D9AE0
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 800D9AE4
  c->r[31]=0u+0x80250000u; // 800D9AE8
  c->r[27]=c->r[3]|c->r[3]; // 800D9AEC
  c->r[28]=c->r[4]|c->r[4]; // 800D9AF0
  cmps(c,0,(int32_t)c->r[0],0); // 800D9AF4
  c->r[31]=c->r[31]+0x00007D20u; // 800D9AF8
  if (crb(c,2)) { goto L_800D9B20; } // 800D9AFC
  c->r[3]=c->r[0]|c->r[0]; // 800D9B00
  c->r[12]=R32(c->r[3]+0x00000000u); // 800D9B04
  c->r[12]=R32(c->r[12]+0x00000008u); // 800D9B08
  c->ctr=c->r[12]; // 800D9B0C
  if (true) { c->lr=0x800D9B14u; dispatch(c,c->ctr); } // 800D9B10
  cmps(c,0,(int32_t)c->r[3],0); // 800D9B14
  if (crb(c,2)) { goto L_800D9B20; } // 800D9B18
  goto L_800D9C74; // 800D9B1C
L_800D9B20:;
  c->r[3]=R32(c->r[27]+0x00000010u); // 800D9B20
  c->r[4]=c->r[28]|c->r[28]; // 800D9B24
  c->r[12]=R32(c->r[3]+0x00000000u); // 800D9B28
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D9B2C
  c->ctr=c->r[12]; // 800D9B30
  if (true) { c->lr=0x800D9B38u; dispatch(c,c->ctr); } // 800D9B34
  cmps(c,0,(int32_t)c->r[3],0); // 800D9B38
  if (crb(c,2)) { goto L_800D9B44; } // 800D9B3C
  goto L_800D9C74; // 800D9B40
L_800D9B44:;
  c->r[3]=R32(c->r[27]+0x00000018u); // 800D9B44
  cmps(c,0,(int32_t)c->r[3],0); // 800D9B48
  if (!crb(c,2)) { goto L_800D9B70; } // 800D9B4C
  if (!crb(c,2)) { goto L_800D9B68; } // 800D9B50
  c->r[3]=c->r[31]+0x00000000u; // 800D9B54
  c->r[5]=c->r[31]+0x00000328u; // 800D9B58
  c->r[4]=0u+0x000003AEu; // 800D9B5C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D9B60
  c->lr=0x800D9B68u; f_800F13A0(c); // 800D9B64
L_800D9B68:;
  c->r[3]=0u+0x00000000u; // 800D9B68
  goto L_800D9B90; // 800D9B6C
L_800D9B70:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D9B70
  cmpu(c,0,c->r[28],c->r[0]); // 800D9B74
  if (crb(c,0)) { goto L_800D9B84; } // 800D9B78
  c->r[3]=0u+0x00000000u; // 800D9B7C
  goto L_800D9B90; // 800D9B80
L_800D9B84:;
  c->r[0]=rotl(c->r[28],3)&0xFFFFFFF8u; // 800D9B84
  c->r[3]=c->r[3]+c->r[0]; // 800D9B88
  c->r[3]=R32(c->r[3]+0x00000004u); // 800D9B8C
L_800D9B90:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D9B90
  if (crb(c,2)) { goto L_800D9B9C; } // 800D9B94
  goto L_800D9C74; // 800D9B98
L_800D9B9C:;
  c->r[3]=R32(c->r[27]+0x00000010u); // 800D9B9C
  c->r[4]=c->r[28]|c->r[28]; // 800D9BA0
  c->r[5]=c->r[1]+0x00000010u; // 800D9BA4
  c->lr=0x800D9BACu; f_800D6110(c); // 800D9BA8
  cmps(c,0,(int32_t)c->r[3],0); // 800D9BAC
  if (!crb(c,2)) { goto L_800D9BBC; } // 800D9BB0
  c->r[3]=0u+0x00000000u; // 800D9BB4
  goto L_800D9C74; // 800D9BB8
L_800D9BBC:;
  c->r[29]=0u+0x00000000u; // 800D9BBC
  goto L_800D9C64; // 800D9BC0
L_800D9BC4:;
  c->r[3]=R32(c->r[27]+0x00000010u); // 800D9BC4
  c->r[4]=c->r[28]|c->r[28]; // 800D9BC8
  c->r[5]=c->r[29]|c->r[29]; // 800D9BCC
  c->r[6]=c->r[1]+0x00000008u; // 800D9BD0
  c->lr=0x800D9BD8u; f_800D6120(c); // 800D9BD4
  cmps(c,0,(int32_t)c->r[3],0); // 800D9BD8
  if (crb(c,2)) { goto L_800D9C60; } // 800D9BDC
  c->r[4]=R32(c->r[27]+0x00000014u); // 800D9BE0
  c->r[3]=R32(c->r[1]+0x00000008u); // 800D9BE4
  cmps(c,0,(int32_t)c->r[4],0); // 800D9BE8
  if (!crb(c,2)) { goto L_800D9C10; } // 800D9BEC
  if (!crb(c,2)) { goto L_800D9C08; } // 800D9BF0
  c->r[3]=c->r[31]+0x00000000u; // 800D9BF4
  c->r[5]=c->r[31]+0x0000037Cu; // 800D9BF8
  c->r[4]=0u+0x00000348u; // 800D9BFC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D9C00
  c->lr=0x800D9C08u; f_800F13A0(c); // 800D9C04
L_800D9C08:;
  c->r[30]=0u+0x00000000u; // 800D9C08
  goto L_800D9C30; // 800D9C0C
L_800D9C10:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 800D9C10
  cmpu(c,0,c->r[3],c->r[0]); // 800D9C14
  if (crb(c,0)) { goto L_800D9C24; } // 800D9C18
  c->r[30]=0u+0x00000000u; // 800D9C1C
  goto L_800D9C30; // 800D9C20
L_800D9C24:;
  c->r[0]=rotl(c->r[3],3)&0xFFFFFFF8u; // 800D9C24
  c->r[3]=c->r[4]+c->r[0]; // 800D9C28
  c->r[30]=R32(c->r[3]+0x00000004u); // 800D9C2C
L_800D9C30:;
  cmps(c,0,(int32_t)c->r[30],0); // 800D9C30
  if (crb(c,2)) { goto L_800D9C60; } // 800D9C34
  c->r[3]=R32(c->r[27]+0x00000010u); // 800D9C38
  c->r[6]=c->r[1]+0x00000020u; // 800D9C3C
  c->r[4]=R32(c->r[1]+0x00000008u); // 800D9C40
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 800D9C44
  c->lr=0x800D9C4Cu; f_800D60F0(c); // 800D9C48
  cmps(c,0,(int32_t)c->r[3],0); // 800D9C4C
  if (crb(c,2)) { goto L_800D9C60; } // 800D9C50
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D9C54
  c->r[3]=c->r[30]+c->r[0]; // 800D9C58
  goto L_800D9C74; // 800D9C5C
L_800D9C60:;
  c->r[29]=c->r[29]+0x00000001u; // 800D9C60
L_800D9C64:;
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 800D9C64
  cmpu(c,0,c->r[29],c->r[0]); // 800D9C68
  if (crb(c,0)) { IRQCHK(c); goto L_800D9BC4; } // 800D9C6C
  c->r[3]=0u+0x00000000u; // 800D9C70
L_800D9C74:;
  c->r[11]=c->r[1]+0x00000050u; // 800D9C74
  c->lr=0x800D9C7Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D9C78
  c->r[0]=R32(c->r[1]+0x00000054u); // 800D9C7C
  c->lr=c->r[0]; // 800D9C80
  c->r[1]=c->r[1]+0x00000050u; // 800D9C84
  return; // 800D9C88
}

// fn_800D9C90
void f_800D9C90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9C90
  c->r[0]=c->lr; // 800D9C94
  W32(c->r[1]+0x00000054u,c->r[0]); // 800D9C98
  c->r[11]=c->r[1]+0x00000050u; // 800D9C9C
  c->lr=0x800D9CA4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D9CA0
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 800D9CA4
  c->r[31]=0u+0x80250000u; // 800D9CA8
  c->r[27]=c->r[3]|c->r[3]; // 800D9CAC
  c->r[28]=c->r[4]|c->r[4]; // 800D9CB0
  cmps(c,0,(int32_t)c->r[0],0); // 800D9CB4
  c->r[31]=c->r[31]+0x00007D20u; // 800D9CB8
  if (crb(c,2)) { goto L_800D9CE0; } // 800D9CBC
  c->r[3]=c->r[0]|c->r[0]; // 800D9CC0
  c->r[12]=R32(c->r[3]+0x00000000u); // 800D9CC4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D9CC8
  c->ctr=c->r[12]; // 800D9CCC
  if (true) { c->lr=0x800D9CD4u; dispatch(c,c->ctr); } // 800D9CD0
  cmps(c,0,(int32_t)c->r[3],0); // 800D9CD4
  if (crb(c,2)) { goto L_800D9CE0; } // 800D9CD8
  goto L_800D9E34; // 800D9CDC
L_800D9CE0:;
  c->r[3]=R32(c->r[27]+0x00000010u); // 800D9CE0
  c->r[4]=c->r[28]|c->r[28]; // 800D9CE4
  c->r[12]=R32(c->r[3]+0x00000000u); // 800D9CE8
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D9CEC
  c->ctr=c->r[12]; // 800D9CF0
  if (true) { c->lr=0x800D9CF8u; dispatch(c,c->ctr); } // 800D9CF4
  cmps(c,0,(int32_t)c->r[3],0); // 800D9CF8
  if (crb(c,2)) { goto L_800D9D04; } // 800D9CFC
  goto L_800D9E34; // 800D9D00
L_800D9D04:;
  c->r[3]=R32(c->r[27]+0x00000018u); // 800D9D04
  cmps(c,0,(int32_t)c->r[3],0); // 800D9D08
  if (!crb(c,2)) { goto L_800D9D30; } // 800D9D0C
  if (!crb(c,2)) { goto L_800D9D28; } // 800D9D10
  c->r[3]=c->r[31]+0x00000000u; // 800D9D14
  c->r[5]=c->r[31]+0x000003D4u; // 800D9D18
  c->r[4]=0u+0x000003E1u; // 800D9D1C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D9D20
  c->lr=0x800D9D28u; f_800F13A0(c); // 800D9D24
L_800D9D28:;
  c->r[3]=0u+0x00000000u; // 800D9D28
  goto L_800D9D50; // 800D9D2C
L_800D9D30:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D9D30
  cmpu(c,0,c->r[28],c->r[0]); // 800D9D34
  if (crb(c,0)) { goto L_800D9D44; } // 800D9D38
  c->r[3]=0u+0x00000000u; // 800D9D3C
  goto L_800D9D50; // 800D9D40
L_800D9D44:;
  c->r[0]=rotl(c->r[28],3)&0xFFFFFFF8u; // 800D9D44
  c->r[3]=c->r[3]+c->r[0]; // 800D9D48
  c->r[3]=R32(c->r[3]+0x00000008u); // 800D9D4C
L_800D9D50:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D9D50
  if (crb(c,2)) { goto L_800D9D5C; } // 800D9D54
  goto L_800D9E34; // 800D9D58
L_800D9D5C:;
  c->r[3]=R32(c->r[27]+0x00000010u); // 800D9D5C
  c->r[4]=c->r[28]|c->r[28]; // 800D9D60
  c->r[5]=c->r[1]+0x00000010u; // 800D9D64
  c->lr=0x800D9D6Cu; f_800D6110(c); // 800D9D68
  cmps(c,0,(int32_t)c->r[3],0); // 800D9D6C
  if (!crb(c,2)) { goto L_800D9D7C; } // 800D9D70
  c->r[3]=0u+0x00000000u; // 800D9D74
  goto L_800D9E34; // 800D9D78
L_800D9D7C:;
  c->r[29]=0u+0x00000000u; // 800D9D7C
  goto L_800D9E24; // 800D9D80
L_800D9D84:;
  c->r[3]=R32(c->r[27]+0x00000010u); // 800D9D84
  c->r[4]=c->r[28]|c->r[28]; // 800D9D88
  c->r[5]=c->r[29]|c->r[29]; // 800D9D8C
  c->r[6]=c->r[1]+0x00000008u; // 800D9D90
  c->lr=0x800D9D98u; f_800D6120(c); // 800D9D94
  cmps(c,0,(int32_t)c->r[3],0); // 800D9D98
  if (crb(c,2)) { goto L_800D9E20; } // 800D9D9C
  c->r[4]=R32(c->r[27]+0x00000014u); // 800D9DA0
  c->r[3]=R32(c->r[1]+0x00000008u); // 800D9DA4
  cmps(c,0,(int32_t)c->r[4],0); // 800D9DA8
  if (!crb(c,2)) { goto L_800D9DD0; } // 800D9DAC
  if (!crb(c,2)) { goto L_800D9DC8; } // 800D9DB0
  c->r[3]=c->r[31]+0x00000000u; // 800D9DB4
  c->r[5]=c->r[31]+0x00000430u; // 800D9DB8
  c->r[4]=0u+0x0000037Bu; // 800D9DBC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D9DC0
  c->lr=0x800D9DC8u; f_800F13A0(c); // 800D9DC4
L_800D9DC8:;
  c->r[30]=0u+0x00000000u; // 800D9DC8
  goto L_800D9DF0; // 800D9DCC
L_800D9DD0:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 800D9DD0
  cmpu(c,0,c->r[3],c->r[0]); // 800D9DD4
  if (crb(c,0)) { goto L_800D9DE4; } // 800D9DD8
  c->r[30]=0u+0x00000000u; // 800D9DDC
  goto L_800D9DF0; // 800D9DE0
L_800D9DE4:;
  c->r[0]=rotl(c->r[3],3)&0xFFFFFFF8u; // 800D9DE4
  c->r[3]=c->r[4]+c->r[0]; // 800D9DE8
  c->r[30]=R32(c->r[3]+0x00000008u); // 800D9DEC
L_800D9DF0:;
  cmps(c,0,(int32_t)c->r[30],0); // 800D9DF0
  if (crb(c,2)) { goto L_800D9E20; } // 800D9DF4
  c->r[3]=R32(c->r[27]+0x00000010u); // 800D9DF8
  c->r[6]=c->r[1]+0x00000020u; // 800D9DFC
  c->r[4]=R32(c->r[1]+0x00000008u); // 800D9E00
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 800D9E04
  c->lr=0x800D9E0Cu; f_800D60F0(c); // 800D9E08
  cmps(c,0,(int32_t)c->r[3],0); // 800D9E0C
  if (crb(c,2)) { goto L_800D9E20; } // 800D9E10
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 800D9E14
  c->r[3]=c->r[30]+c->r[0]; // 800D9E18
  goto L_800D9E34; // 800D9E1C
L_800D9E20:;
  c->r[29]=c->r[29]+0x00000001u; // 800D9E20
L_800D9E24:;
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 800D9E24
  cmpu(c,0,c->r[29],c->r[0]); // 800D9E28
  if (crb(c,0)) { IRQCHK(c); goto L_800D9D84; } // 800D9E2C
  c->r[3]=0u+0x00000000u; // 800D9E30
L_800D9E34:;
  c->r[11]=c->r[1]+0x00000050u; // 800D9E34
  c->lr=0x800D9E3Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D9E38
  c->r[0]=R32(c->r[1]+0x00000054u); // 800D9E3C
  c->lr=c->r[0]; // 800D9E40
  c->r[1]=c->r[1]+0x00000050u; // 800D9E44
  return; // 800D9E48
}

// fn_800D9E50
void f_800D9E50(Ctx* __restrict c) {
  c->r[8]=c->r[6]|c->r[6]; // 800D9E50
  c->r[9]=c->r[7]|c->r[7]; // 800D9E54
  c->r[6]=0u+0x00000000u; // 800D9E58
  c->r[7]=0u+0x00000000u; // 800D9E5C
  f_800D9E70(c); return; // 800D9E60
}

// fn_800D9E70
void f_800D9E70(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9E70
  c->r[0]=c->lr; // 800D9E74
  W32(c->r[1]+0x000000D4u,c->r[0]); // 800D9E78
  c->r[11]=c->r[1]+0x000000D0u; // 800D9E7C
  c->lr=0x800D9E84u; f_802079EC(c); // 800D9E80
  cmps(c,0,(int32_t)c->r[4],0); // 800D9E84
  c->r[27]=0u+0x80250000u; // 800D9E88
  W32(c->r[1]+0x00000008u,c->r[4]); // 800D9E8C
  c->r[15]=c->r[3]|c->r[3]; // 800D9E90
  c->r[16]=c->r[5]|c->r[5]; // 800D9E94
  c->r[17]=c->r[6]|c->r[6]; // 800D9E98
  W32(c->r[1]+0x0000000Cu,c->r[7]); // 800D9E9C
  c->r[14]=c->r[9]|c->r[9]; // 800D9EA0
  c->r[27]=c->r[27]+0x00007D20u; // 800D9EA4
  W8(c->r[1]+0x00000010u,c->r[8]); // 800D9EA8
  if (!crb(c,2)) { goto L_800D9EC4; } // 800D9EAC
  c->r[3]=c->r[27]+0x00000000u; // 800D9EB0
  c->r[5]=c->r[27]+0x00000678u; // 800D9EB4
  c->r[4]=0u+0x00000454u; // 800D9EB8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D9EBC
  c->lr=0x800D9EC4u; f_800F1300(c); // 800D9EC0
L_800D9EC4:;
  c->r[3]=R32(c->r[15]+0x00000010u); // 800D9EC4
  cmps(c,0,(int32_t)c->r[3],0); // 800D9EC8
  if (!crb(c,2)) { goto L_800D9ED8; } // 800D9ECC
  c->r[3]=0u+0x00000000u; // 800D9ED0
  goto L_800D9EDC; // 800D9ED4
L_800D9ED8:;
  c->lr=0x800D9EDCu; f_800D5F90(c); // 800D9ED8
L_800D9EDC:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D9EDC
  if (!crb(c,2)) { goto L_800D9EEC; } // 800D9EE0
  c->r[3]=0u+0x00000007u; // 800D9EE4
  goto L_800DAD18; // 800D9EE8
L_800D9EEC:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 800D9EEC
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D9EF0
  cmps(c,0,(int32_t)c->r[0],0); // 800D9EF4
  if (crb(c,2)) { goto L_800D9F00; } // 800D9EF8
  c->lr=0x800D9F00u; f_800DBDA0(c); // 800D9EFC
L_800D9F00:;
  c->r[3]=R32(c->r[15]+0x00000010u); // 800D9F00
  c->r[4]=c->r[16]|c->r[16]; // 800D9F04
  c->r[5]=c->r[1]+0x00000048u; // 800D9F08
  c->lr=0x800D9F10u; f_800D6070(c); // 800D9F0C
  cmps(c,0,(int32_t)c->r[3],0); // 800D9F10
  if (!crb(c,2)) { goto L_800D9F20; } // 800D9F14
  c->r[3]=0u+0x00000003u; // 800D9F18
  goto L_800DAD18; // 800D9F1C
L_800D9F20:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 800D9F20
  cmps(c,0,(int32_t)c->r[14],0); // 800D9F24
  W32(c->r[1]+0x00000070u,c->r[0]); // 800D9F28
  c->r[0]=0u+0x00000000u; // 800D9F2C
  c->r[18]=R32(c->r[1]+0x0000004Cu); // 800D9F30
  W32(c->r[1]+0x00000078u,c->r[0]); // 800D9F34
  c->r[0]=0u+0x00000000u; // 800D9F38
  c->r[19]=R32(c->r[1]+0x00000050u); // 800D9F3C
  W32(c->r[1]+0x00000074u,c->r[0]); // 800D9F40
  c->r[0]=0u+0x00000000u; // 800D9F44
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 800D9F48
  c->r[0]=0u+0x00000000u; // 800D9F4C
  W32(c->r[1]+0x00000068u,c->r[0]); // 800D9F50
  if (crb(c,2)) { goto L_800D9FB4; } // 800D9F54
  c->r[3]=R32(c->r[14]+0x00000000u); // 800D9F58
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 800D9F5C
  if (crb(c,2)) { goto L_800D9F74; } // 800D9F60
  c->r[0]=R32(c->r[14]+0x00000004u); // 800D9F64
  W32(c->r[1]+0x00000078u,c->r[0]); // 800D9F68
  c->r[0]=R32(c->r[14]+0x00000008u); // 800D9F6C
  W32(c->r[1]+0x00000074u,c->r[0]); // 800D9F70
L_800D9F74:;
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 800D9F74
  if (crb(c,2)) { goto L_800D9F84; } // 800D9F78
  c->r[0]=R32(c->r[14]+0x00000010u); // 800D9F7C
  W32(c->r[1]+0x00000070u,c->r[0]); // 800D9F80
L_800D9F84:;
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 800D9F84
  if (crb(c,2)) { goto L_800D9F90; } // 800D9F88
  c->r[18]=R32(c->r[14]+0x0000000Cu); // 800D9F8C
L_800D9F90:;
  c->r[0]=rotl(c->r[3],0)&0x00000008u; cr0(c,c->r[0]); // 800D9F90
  if (crb(c,2)) { goto L_800D9F9C; } // 800D9F94
  c->r[19]=R32(c->r[14]+0x00000014u); // 800D9F98
L_800D9F9C:;
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 800D9F9C
  if (crb(c,2)) { goto L_800D9FB4; } // 800D9FA0
  c->r[0]=R32(c->r[14]+0x00000018u); // 800D9FA4
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 800D9FA8
  c->r[0]=R32(c->r[14]+0x0000001Cu); // 800D9FAC
  W32(c->r[1]+0x00000068u,c->r[0]); // 800D9FB0
L_800D9FB4:;
  c->r[0]=R8(c->r[1]+0x00000010u); // 800D9FB4
  c->r[23]=R32(c->r[1]+0x00000070u); // 800D9FB8
  cmps(c,0,(int32_t)c->r[0],0); // 800D9FBC
  if (crb(c,2)) { goto L_800D9FCC; } // 800D9FC0
  c->r[3]=c->r[23]|c->r[23]; // 800D9FC4
  c->r[23]=c->r[3]+0xFFFFFFFFu; // 800D9FC8
L_800D9FCC:;
  cmps(c,0,(int32_t)c->r[17],0); // 800D9FCC
  c->r[22]=0u+0x00000000u; // 800D9FD0
  if (crb(c,2)) { goto L_800D9FE8; } // 800D9FD4
  c->r[3]=c->r[17]|c->r[17]; // 800D9FD8
  c->r[4]=c->r[16]|c->r[16]; // 800D9FDC
  c->lr=0x800D9FE4u; f_800CC240(c); // 800D9FE0
  c->r[22]=c->r[3]|c->r[3]; // 800D9FE4
L_800D9FE8:;
  c->r[24]=c->r[23]+c->r[22]; // 800D9FE8
  cmps(c,0,(int32_t)c->r[24],127); // 800D9FEC
  if (!crb(c,1)) { goto L_800D9FFC; } // 800D9FF0
  c->r[14]=0u+0x0000007Fu; // 800D9FF4
  goto L_800DA004; // 800D9FF8
L_800D9FFC:;
  c->r[0]=sraw(c,c->r[24],31); // 800D9FFC
  c->r[14]=c->r[24]&~c->r[0]; // 800DA000
L_800DA004:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800DA004
  c->r[21]=0u+0x00000000u; // 800DA008
  cmps(c,0,(int32_t)c->r[0],0); // 800DA00C
  if (crb(c,2)) { goto L_800DA064; } // 800DA010
  cmps(c,0,(int32_t)c->r[19],0); // 800DA014
  if (crb(c,0)) { goto L_800DA024; } // 800DA018
  cmps(c,0,(int32_t)c->r[19],4); // 800DA01C
  if (crb(c,0)) { goto L_800DA02C; } // 800DA020
L_800DA024:;
  c->r[21]=0u+0x00000000u; // 800DA024
  goto L_800DA038; // 800DA028
L_800DA02C:;
  c->r[3]=rotl(c->r[19],4)&0xFFFFFFF0u; // 800DA02C
  c->r[3]=c->r[0]+c->r[3]; // 800DA030
  c->r[21]=c->r[3]+0x00000008u; // 800DA034
L_800DA038:;
  cmps(c,0,(int32_t)c->r[21],0); // 800DA038
  if (!crb(c,2)) { goto L_800DA064; } // 800DA03C
  c->r[6]=c->r[19]|c->r[19]; // 800DA040
  c->r[3]=c->r[27]+0x00000000u; // 800DA044
  c->r[5]=c->r[27]+0x000006A0u; // 800DA048
  c->r[4]=0u+0x0000049Du; // 800DA04C
  c->r[7]=0u+0x00000003u; // 800DA050
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DA054
  c->lr=0x800DA05Cu; f_800F13A0(c); // 800DA058
  c->r[3]=0u+0x0000000Au; // 800DA05C
  goto L_800DAD18; // 800DA060
L_800DA064:;
  c->lr=0x800DA068u; f_800DD3D0(c); // 800DA064
  c->r[3]=c->r[3]+0x00000354u; // 800DA068
  c->lr=0x800DA070u; f_8018E950(c); // 800DA06C
  c->r[8]=R32(c->r[15]+0x0000003Cu); // 800DA070
  cmpu(c,0,c->r[18],c->r[8]); // 800DA074
  if (crb(c,0)) { goto L_800DA098; } // 800DA078
  c->r[6]=c->r[18]|c->r[18]; // 800DA07C
  c->r[3]=c->r[27]+0x00000000u; // 800DA080
  c->r[5]=c->r[27]+0x0000029Cu; // 800DA084
  c->r[4]=0u+0x000002B9u; // 800DA088
  c->r[7]=0u+0x00000000u; // 800DA08C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DA090
  c->lr=0x800DA098u; f_800F1300(c); // 800DA094
L_800DA098:;
  c->r[0]=(uint32_t)((int32_t)c->r[18]*(int32_t)100); // 800DA098
  c->r[3]=R32(c->r[15]+0x00000040u); // 800DA09C
  c->r[4]=c->r[14]|c->r[14]; // 800DA0A0
  c->r[0]=c->r[3]+c->r[0]; // 800DA0A4
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 800DA0A8
  c->r[3]=c->r[0]|c->r[0]; // 800DA0AC
  c->lr=0x800DA0B4u; f_800DCB80(c); // 800DA0B0
  cmps(c,0,(int32_t)c->r[3],0); // 800DA0B4
  if (!crb(c,2)) { goto L_800DA0D0; } // 800DA0B8
  c->lr=0x800DA0C0u; f_800DD3D0(c); // 800DA0BC
  c->r[3]=c->r[3]+0x00000354u; // 800DA0C0
  c->lr=0x800DA0C8u; f_8018EA30(c); // 800DA0C4
  c->r[3]=0u+0x00000001u; // 800DA0C8
  goto L_800DAD18; // 800DA0CC
L_800DA0D0:;
  cmps(c,0,(int32_t)c->r[21],0); // 800DA0D0
  if (crb(c,2)) { goto L_800DA100; } // 800DA0D4
  c->r[3]=c->r[21]|c->r[21]; // 800DA0D8
  c->r[4]=c->r[14]|c->r[14]; // 800DA0DC
  c->lr=0x800DA0E4u; f_800CE8E0(c); // 800DA0E0
  cmps(c,0,(int32_t)c->r[3],0); // 800DA0E4
  if (!crb(c,2)) { goto L_800DA100; } // 800DA0E8
  c->lr=0x800DA0F0u; f_800DD3D0(c); // 800DA0EC
  c->r[3]=c->r[3]+0x00000354u; // 800DA0F0
  c->lr=0x800DA0F8u; f_8018EA30(c); // 800DA0F4
  c->r[3]=0u+0x00000001u; // 800DA0F8
  goto L_800DAD18; // 800DA0FC
L_800DA100:;
  c->r[3]=R32(c->r[15]+0x00000010u); // 800DA100
  c->r[4]=c->r[16]|c->r[16]; // 800DA104
  c->r[20]=0u+0x00000000u; // 800DA108
  c->r[19]=0u+0x00000000u; // 800DA10C
  c->r[18]=0u+0x00000000u; // 800DA110
  c->lr=0x800DA118u; f_800D6060(c); // 800DA114
  cmps(c,0,(int32_t)c->r[3],1); // 800DA118
  if (crb(c,2)) { goto L_800DA134; } // 800DA11C
  cmps(c,0,(int32_t)c->r[3],2); // 800DA120
  if (crb(c,2)) { goto L_800DA40C; } // 800DA124
  cmps(c,0,(int32_t)c->r[3],3); // 800DA128
  if (crb(c,2)) { goto L_800DA6E4; } // 800DA12C
  goto L_800DA9BC; // 800DA130
L_800DA134:;
  c->r[0]=addc(c,c->r[15],0x00000044u,0); cr0(c,c->r[0]); // 800DA134
  if (!crb(c,2)) { goto L_800DA150; } // 800DA138
  c->r[3]=c->r[27]+0x00000000u; // 800DA13C
  c->r[5]=c->r[27]+0x000006D0u; // 800DA140
  c->r[4]=0u+0x0000041Au; // 800DA144
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DA148
  c->lr=0x800DA150u; f_800F1300(c); // 800DA14C
L_800DA150:;
  cmps(c,0,(int32_t)c->r[24],127); // 800DA150
  if (!crb(c,1)) { goto L_800DA160; } // 800DA154
  c->r[26]=0u+0x0000007Fu; // 800DA158
  goto L_800DA168; // 800DA15C
L_800DA160:;
  c->r[0]=sraw(c,c->r[24],31); // 800DA160
  c->r[26]=c->r[24]&~c->r[0]; // 800DA164
L_800DA168:;
  c->r[28]=c->r[15]+0x00000054u; // 800DA168
  c->r[3]=c->r[28]|c->r[28]; // 800DA16C
  c->lr=0x800DA174u; f_8018E950(c); // 800DA170
  c->r[20]=0u+0x00000000u; // 800DA174
  c->r[29]=0u+0x80260000u; // 800DA178
  c->r[30]=0u+0x80260000u; // 800DA17C
  c->r[31]=0u+0x80250000u; // 800DA180
  c->r[14]=0u+0x80250000u; // 800DA184
  goto L_800DA2E0; // 800DA188
L_800DA18C:;
  c->r[3]=c->r[15]+0x00000044u; // 800DA18C
  c->lr=0x800DA194u; f_800CF470(c); // 800DA190
  cmps(c,0,(int32_t)c->r[3],0); // 800DA194
  if (crb(c,2)) { goto L_800DA1BC; } // 800DA198
  c->r[20]=c->r[3]|c->r[3]; // 800DA19C
  if (crb(c,2)) { goto L_800DA2E0; } // 800DA1A0
  c->r[5]=c->r[23]|c->r[23]; // 800DA1A4
  c->r[6]=c->r[22]|c->r[22]; // 800DA1A8
  c->r[4]=c->r[15]+0x00000044u; // 800DA1AC
  c->lr=0x800DA1B4u; f_800D3B70(c); // 800DA1B0
  c->r[20]=c->r[3]|c->r[3]; // 800DA1B4
  goto L_800DA2E0; // 800DA1B8
L_800DA1BC:;
  c->r[0]=R32(c->r[15]+0x00000048u); // 800DA1BC
  cmps(c,0,(int32_t)c->r[0],0); // 800DA1C0
  if (!crb(c,2)) { goto L_800DA1D0; } // 800DA1C4
  c->r[25]=0u+0x00000000u; // 800DA1C8
  goto L_800DA22C; // 800DA1CC
L_800DA1D0:;
  if (!crb(c,2)) { goto L_800DA1E8; } // 800DA1D0
  c->r[3]=c->r[29]+0xFFFF8B6Cu; // 800DA1D4
  c->r[5]=c->r[30]+0xFFFF8B48u; // 800DA1D8
  c->r[4]=0u+0x000001F1u; // 800DA1DC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DA1E0
  c->lr=0x800DA1E8u; f_800F1300(c); // 800DA1E4
L_800DA1E8:;
  c->r[24]=R32(c->r[15]+0x0000004Cu); // 800DA1E8
  cmps(c,0,(int32_t)c->r[24],0); // 800DA1EC
  if (!crb(c,2)) { goto L_800DA208; } // 800DA1F0
  c->r[3]=c->r[31]+0x0000730Cu; // 800DA1F4
  c->r[5]=c->r[14]+0x000072E8u; // 800DA1F8
  c->r[4]=0u+0x0000023Du; // 800DA1FC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DA200
  c->lr=0x800DA208u; f_800F1300(c); // 800DA204
L_800DA208:;
  c->r[25]=addc(c,c->r[24],0xFFFFFF10u,0); cr0(c,c->r[25]); // 800DA208
  if (!crb(c,2)) { goto L_800DA22C; } // 800DA20C
  c->r[3]=0u+0x80260000u; // 800DA210
  c->r[4]=0u+0x80260000u; // 800DA214
  c->r[5]=c->r[4]+0xFFFF8B18u; // 800DA218
  c->r[3]=c->r[3]+0xFFFF8B3Cu; // 800DA21C
  c->r[4]=0u+0x00000193u; // 800DA220
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DA224
  c->lr=0x800DA22Cu; f_800F1300(c); // 800DA228
L_800DA22C:;
  cmps(c,0,(int32_t)c->r[25],0); // 800DA22C
  if (!crb(c,2)) { goto L_800DA244; } // 800DA230
  c->r[3]=c->r[28]|c->r[28]; // 800DA234
  c->lr=0x800DA23Cu; f_8018EA30(c); // 800DA238
  c->r[20]=0u+0x00000000u; // 800DA23C
  goto L_800DA390; // 800DA240
L_800DA244:;
  c->r[3]=R8(c->r[25]+0x00000098u); // 800DA244
  c->r[0]=R32(c->r[25]+0x00000050u); // 800DA248
  c->r[3]=c->r[3]+c->r[0]; // 800DA24C
  cmps(c,0,(int32_t)c->r[3],127); // 800DA250
  if (!crb(c,1)) { goto L_800DA260; } // 800DA254
  c->r[0]=0u+0x0000007Fu; // 800DA258
  goto L_800DA268; // 800DA25C
L_800DA260:;
  c->r[0]=sraw(c,c->r[3],31); // 800DA260
  c->r[0]=c->r[3]&~c->r[0]; // 800DA264
L_800DA268:;
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 800DA268
  if (!crb(c,0)) { goto L_800DA280; } // 800DA26C
  c->r[3]=c->r[28]|c->r[28]; // 800DA270
  c->lr=0x800DA278u; f_8018EA30(c); // 800DA274
  c->r[20]=0u+0x00000000u; // 800DA278
  goto L_800DA390; // 800DA27C
L_800DA280:;
  c->r[3]=c->r[15]+0x00000054u; // 800DA280
  c->lr=0x800DA288u; f_8018EA30(c); // 800DA284
  c->r[3]=0u+0x00000000u; // 800DA288
  c->lr=0x800DA290u; f_800CDE60(c); // 800DA28C
  c->lr=0x800DA294u; f_800CDDE0(c); // 800DA290
  cmps(c,0,(int32_t)c->r[3],0); // 800DA294
  if (crb(c,2)) { goto L_800DA2CC; } // 800DA298
  c->r[24]=R32(c->r[25]+0x0000009Cu); // 800DA29C
  c->r[3]=0u+0x00000000u; // 800DA2A0
  c->lr=0x800DA2A8u; f_800CDED0(c); // 800DA2A4
  c->r[7]=c->r[3]|c->r[3]; // 800DA2A8
  c->r[3]=0u+0x80260000u; // 800DA2AC
  c->r[4]=0u+0x80260000u; // 800DA2B0
  c->r[6]=c->r[24]|c->r[24]; // 800DA2B4
  c->r[5]=c->r[4]+0xFFFF883Cu; // 800DA2B8
  c->r[3]=c->r[3]+0xFFFF8878u; // 800DA2BC
  c->r[4]=0u+0x00000085u; // 800DA2C0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DA2C4
  c->lr=0x800DA2CCu; f_800F13A0(c); // 800DA2C8
L_800DA2CC:;
  c->r[3]=c->r[25]|c->r[25]; // 800DA2CC
  c->r[4]=0u+0x00000000u; // 800DA2D0
  c->lr=0x800DA2D8u; f_800CAA70(c); // 800DA2D4
  c->r[3]=c->r[15]+0x00000054u; // 800DA2D8
  c->lr=0x800DA2E0u; f_8018E950(c); // 800DA2DC
L_800DA2E0:;
  cmps(c,0,(int32_t)c->r[20],0); // 800DA2E0
  if (crb(c,2)) { IRQCHK(c); goto L_800DA18C; } // 800DA2E4
  c->r[23]=R32(c->r[15]+0x0000004Cu); // 800DA2E8
  c->r[24]=c->r[15]+0x0000004Cu; // 800DA2EC
  c->r[22]=0u+0x80250000u; // 800DA2F0
  c->r[14]=0u+0x80250000u; // 800DA2F4
  goto L_800DA348; // 800DA2F8
L_800DA2FC:;
  cmps(c,0,(int32_t)c->r[23],0); // 800DA2FC
  if (!crb(c,2)) { goto L_800DA318; } // 800DA300
  c->r[3]=c->r[22]+0x0000730Cu; // 800DA304
  c->r[5]=c->r[14]+0x000072E8u; // 800DA308
  c->r[4]=0u+0x0000023Du; // 800DA30C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DA310
  c->lr=0x800DA318u; f_800F1300(c); // 800DA314
L_800DA318:;
  c->r[3]=R8(c->r[23]+0xFFFFFFA8u); // 800DA318
  c->r[0]=R32(c->r[23]+0xFFFFFF60u); // 800DA31C
  c->r[3]=c->r[3]+c->r[0]; // 800DA320
  cmps(c,0,(int32_t)c->r[3],127); // 800DA324
  if (!crb(c,1)) { goto L_800DA334; } // 800DA328
  c->r[0]=0u+0x0000007Fu; // 800DA32C
  goto L_800DA33C; // 800DA330
L_800DA334:;
  c->r[0]=sraw(c,c->r[3],31); // 800DA334
  c->r[0]=c->r[3]&~c->r[0]; // 800DA338
L_800DA33C:;
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 800DA33C
  if (crb(c,0)) { goto L_800DA350; } // 800DA340
  c->r[23]=R32(c->r[23]+0x00000000u); // 800DA344
L_800DA348:;
  cmpu(c,0,c->r[23],c->r[24]); // 800DA348
  if (!crb(c,2)) { IRQCHK(c); goto L_800DA2FC; } // 800DA34C
L_800DA350:;
  cmps(c,0,(int32_t)c->r[20],0); // 800DA350
  if (!crb(c,2)) { goto L_800DA374; } // 800DA354
  c->r[3]=0u+0x80250000u; // 800DA358
  c->r[5]=0u+0x80250000u; // 800DA35C
  c->r[3]=c->r[3]+0x0000733Cu; // 800DA360
  c->r[4]=0u+0x00000233u; // 800DA364
  c->r[5]=c->r[5]+0x00007318u; // 800DA368
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DA36C
  c->lr=0x800DA374u; f_800F1300(c); // 800DA370
L_800DA374:;
  W32(c->r[1]+0x0000001Cu,c->r[23]); // 800DA374
  c->r[3]=c->r[15]+0x00000048u; // 800DA378
  c->r[4]=c->r[1]+0x0000001Cu; // 800DA37C
  c->r[5]=c->r[20]+0x000000F0u; // 800DA380
  c->lr=0x800DA388u; f_800F1CC0(c); // 800DA384
  c->r[3]=c->r[28]|c->r[28]; // 800DA388
  c->lr=0x800DA390u; f_8018EA30(c); // 800DA38C
L_800DA390:;
  cmps(c,0,(int32_t)c->r[20],0); // 800DA390
  if (!crb(c,2)) { goto L_800DA3A0; } // 800DA394
  c->r[20]=0u+0x00000000u; // 800DA398
  goto L_800DA3C0; // 800DA39C
L_800DA3A0:;
  c->r[3]=c->r[20]|c->r[20]; // 800DA3A0
  c->r[4]=c->r[16]|c->r[16]; // 800DA3A4
  c->lr=0x800DA3ACu; f_800CC2B0(c); // 800DA3A8
  cmps(c,0,(int32_t)c->r[17],0); // 800DA3AC
  if (crb(c,2)) { goto L_800DA3C0; } // 800DA3B0
  c->r[3]=c->r[20]|c->r[20]; // 800DA3B4
  c->r[4]=c->r[17]|c->r[17]; // 800DA3B8
  c->lr=0x800DA3C0u; f_800CC130(c); // 800DA3BC
L_800DA3C0:;
  cmps(c,0,(int32_t)c->r[20],0); // 800DA3C0
  if (!crb(c,2)) { goto L_800DA404; } // 800DA3C4
  c->r[3]=0u+0x00000001u; // 800DA3C8
  c->lr=0x800DA3D0u; f_800CDDE0(c); // 800DA3CC
  cmps(c,0,(int32_t)c->r[3],0); // 800DA3D0
  if (crb(c,2)) { goto L_800DA3F0; } // 800DA3D4
  c->r[6]=c->r[16]|c->r[16]; // 800DA3D8
  c->r[3]=c->r[27]+0x00000000u; // 800DA3DC
  c->r[5]=c->r[27]+0x000006F8u; // 800DA3E0
  c->r[4]=0u+0x000004C4u; // 800DA3E4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DA3E8
  c->lr=0x800DA3F0u; f_800F13A0(c); // 800DA3EC
L_800DA3F0:;
  c->lr=0x800DA3F4u; f_800DD3D0(c); // 800DA3F0
  c->r[3]=c->r[3]+0x00000354u; // 800DA3F4
  c->lr=0x800DA3FCu; f_8018EA30(c); // 800DA3F8
  c->r[3]=0u+0x00000009u; // 800DA3FC
  goto L_800DAD18; // 800DA400
L_800DA404:;
  c->r[14]=c->r[20]|c->r[20]; // 800DA404
  goto L_800DA9D0; // 800DA408
L_800DA40C:;
  c->r[0]=addc(c,c->r[15],0x0000006Cu,0); cr0(c,c->r[0]); // 800DA40C
  if (!crb(c,2)) { goto L_800DA428; } // 800DA410
  c->r[3]=c->r[27]+0x00000000u; // 800DA414
  c->r[5]=c->r[27]+0x000006D0u; // 800DA418
  c->r[4]=0u+0x0000041Au; // 800DA41C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DA420
  c->lr=0x800DA428u; f_800F1300(c); // 800DA424
L_800DA428:;
  cmps(c,0,(int32_t)c->r[24],127); // 800DA428
  if (!crb(c,1)) { goto L_800DA438; } // 800DA42C
  c->r[28]=0u+0x0000007Fu; // 800DA430
  goto L_800DA440; // 800DA434
L_800DA438:;
  c->r[0]=sraw(c,c->r[24],31); // 800DA438
  c->r[28]=c->r[24]&~c->r[0]; // 800DA43C
L_800DA440:;
  c->r[26]=c->r[15]+0x0000007Cu; // 800DA440
  c->r[3]=c->r[26]|c->r[26]; // 800DA444
  c->lr=0x800DA44Cu; f_8018E950(c); // 800DA448
  c->r[19]=0u+0x00000000u; // 800DA44C
  c->r[25]=0u+0x80260000u; // 800DA450
  c->r[24]=0u+0x80260000u; // 800DA454
  c->r[14]=0u+0x80260000u; // 800DA458
  c->r[31]=0u+0x80260000u; // 800DA45C
  goto L_800DA5B8; // 800DA460
L_800DA464:;
  c->r[3]=c->r[15]+0x0000006Cu; // 800DA464
  c->lr=0x800DA46Cu; f_800CF470(c); // 800DA468
  cmps(c,0,(int32_t)c->r[3],0); // 800DA46C
  if (crb(c,2)) { goto L_800DA494; } // 800DA470
  c->r[19]=c->r[3]|c->r[3]; // 800DA474
  if (crb(c,2)) { goto L_800DA5B8; } // 800DA478
  c->r[5]=c->r[23]|c->r[23]; // 800DA47C
  c->r[6]=c->r[22]|c->r[22]; // 800DA480
  c->r[4]=c->r[15]+0x0000006Cu; // 800DA484
  c->lr=0x800DA48Cu; f_800E1DE0(c); // 800DA488
  c->r[19]=c->r[3]|c->r[3]; // 800DA48C
  goto L_800DA5B8; // 800DA490
L_800DA494:;
  c->r[0]=R32(c->r[15]+0x00000070u); // 800DA494
  cmps(c,0,(int32_t)c->r[0],0); // 800DA498
  if (!crb(c,2)) { goto L_800DA4A8; } // 800DA49C
  c->r[29]=0u+0x00000000u; // 800DA4A0
  goto L_800DA504; // 800DA4A4
L_800DA4A8:;
  if (!crb(c,2)) { goto L_800DA4C0; } // 800DA4A8
  c->r[3]=c->r[25]+0xFFFF8AACu; // 800DA4AC
  c->r[5]=c->r[24]+0xFFFF8A88u; // 800DA4B0
  c->r[4]=0u+0x000001F1u; // 800DA4B4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DA4B8
  c->lr=0x800DA4C0u; f_800F1300(c); // 800DA4BC
L_800DA4C0:;
  c->r[29]=R32(c->r[15]+0x00000074u); // 800DA4C0
  cmps(c,0,(int32_t)c->r[29],0); // 800DA4C4
  if (!crb(c,2)) { goto L_800DA4E0; } // 800DA4C8
  c->r[3]=c->r[14]+0xFFFF8A4Cu; // 800DA4CC
  c->r[5]=c->r[31]+0xFFFF8A28u; // 800DA4D0
  c->r[4]=0u+0x0000023Du; // 800DA4D4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DA4D8
  c->lr=0x800DA4E0u; f_800F1300(c); // 800DA4DC
L_800DA4E0:;
  c->r[29]=addc(c,c->r[29],0xFFFFFF10u,0); cr0(c,c->r[29]); // 800DA4E0
  if (!crb(c,2)) { goto L_800DA504; } // 800DA4E4
  c->r[3]=0u+0x80260000u; // 800DA4E8
  c->r[4]=0u+0x80260000u; // 800DA4EC
  c->r[5]=c->r[4]+0xFFFF8A58u; // 800DA4F0
  c->r[3]=c->r[3]+0xFFFF8A7Cu; // 800DA4F4
  c->r[4]=0u+0x00000193u; // 800DA4F8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DA4FC
  c->lr=0x800DA504u; f_800F1300(c); // 800DA500
L_800DA504:;
  cmps(c,0,(int32_t)c->r[29],0); // 800DA504
  if (!crb(c,2)) { goto L_800DA51C; } // 800DA508
  c->r[3]=c->r[26]|c->r[26]; // 800DA50C
  c->lr=0x800DA514u; f_8018EA30(c); // 800DA510
  c->r[19]=0u+0x00000000u; // 800DA514
  goto L_800DA668; // 800DA518
L_800DA51C:;
  c->r[3]=R8(c->r[29]+0x00000098u); // 800DA51C
  c->r[0]=R32(c->r[29]+0x00000050u); // 800DA520
  c->r[3]=c->r[3]+c->r[0]; // 800DA524
  cmps(c,0,(int32_t)c->r[3],127); // 800DA528
  if (!crb(c,1)) { goto L_800DA538; } // 800DA52C
  c->r[0]=0u+0x0000007Fu; // 800DA530
  goto L_800DA540; // 800DA534
L_800DA538:;
  c->r[0]=sraw(c,c->r[3],31); // 800DA538
  c->r[0]=c->r[3]&~c->r[0]; // 800DA53C
L_800DA540:;
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 800DA540
  if (!crb(c,0)) { goto L_800DA558; } // 800DA544
  c->r[3]=c->r[26]|c->r[26]; // 800DA548
  c->lr=0x800DA550u; f_8018EA30(c); // 800DA54C
  c->r[19]=0u+0x00000000u; // 800DA550
  goto L_800DA668; // 800DA554
L_800DA558:;
  c->r[3]=c->r[15]+0x0000007Cu; // 800DA558
  c->lr=0x800DA560u; f_8018EA30(c); // 800DA55C
  c->r[3]=0u+0x00000001u; // 800DA560
  c->lr=0x800DA568u; f_800CDE60(c); // 800DA564
  c->lr=0x800DA56Cu; f_800CDDE0(c); // 800DA568
  cmps(c,0,(int32_t)c->r[3],0); // 800DA56C
  if (crb(c,2)) { goto L_800DA5A4; } // 800DA570
  c->r[30]=R32(c->r[29]+0x0000009Cu); // 800DA574
  c->r[3]=0u+0x00000001u; // 800DA578
  c->lr=0x800DA580u; f_800CDED0(c); // 800DA57C
  c->r[7]=c->r[3]|c->r[3]; // 800DA580
  c->r[3]=0u+0x80260000u; // 800DA584
  c->r[4]=0u+0x80260000u; // 800DA588
  c->r[6]=c->r[30]|c->r[30]; // 800DA58C
  c->r[5]=c->r[4]+0xFFFF8890u; // 800DA590
  c->r[3]=c->r[3]+0xFFFF88CCu; // 800DA594
  c->r[4]=0u+0x00000085u; // 800DA598
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DA59C
  c->lr=0x800DA5A4u; f_800F13A0(c); // 800DA5A0
L_800DA5A4:;
  c->r[3]=c->r[29]|c->r[29]; // 800DA5A4
  c->r[4]=0u+0x00000000u; // 800DA5A8
  c->lr=0x800DA5B0u; f_800CAA70(c); // 800DA5AC
  c->r[3]=c->r[15]+0x0000007Cu; // 800DA5B0
  c->lr=0x800DA5B8u; f_8018E950(c); // 800DA5B4
L_800DA5B8:;
  cmps(c,0,(int32_t)c->r[19],0); // 800DA5B8
  if (crb(c,2)) { IRQCHK(c); goto L_800DA464; } // 800DA5BC
  c->r[23]=R32(c->r[15]+0x00000074u); // 800DA5C0
  c->r[24]=c->r[15]+0x00000074u; // 800DA5C4
  c->r[22]=0u+0x80260000u; // 800DA5C8
  c->r[14]=0u+0x80260000u; // 800DA5CC
  goto L_800DA620; // 800DA5D0
L_800DA5D4:;
  cmps(c,0,(int32_t)c->r[23],0); // 800DA5D4
  if (!crb(c,2)) { goto L_800DA5F0; } // 800DA5D8
  c->r[3]=c->r[22]+0xFFFF8A4Cu; // 800DA5DC
  c->r[5]=c->r[14]+0xFFFF8A28u; // 800DA5E0
  c->r[4]=0u+0x0000023Du; // 800DA5E4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DA5E8
  c->lr=0x800DA5F0u; f_800F1300(c); // 800DA5EC
L_800DA5F0:;
  c->r[3]=R8(c->r[23]+0xFFFFFFA8u); // 800DA5F0
  c->r[0]=R32(c->r[23]+0xFFFFFF60u); // 800DA5F4
  c->r[3]=c->r[3]+c->r[0]; // 800DA5F8
  cmps(c,0,(int32_t)c->r[3],127); // 800DA5FC
  if (!crb(c,1)) { goto L_800DA60C; } // 800DA600
  c->r[0]=0u+0x0000007Fu; // 800DA604
  goto L_800DA614; // 800DA608
L_800DA60C:;
  c->r[0]=sraw(c,c->r[3],31); // 800DA60C
  c->r[0]=c->r[3]&~c->r[0]; // 800DA610
L_800DA614:;
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 800DA614
  if (crb(c,0)) { goto L_800DA628; } // 800DA618
  c->r[23]=R32(c->r[23]+0x00000000u); // 800DA61C
L_800DA620:;
  cmpu(c,0,c->r[23],c->r[24]); // 800DA620
  if (!crb(c,2)) { IRQCHK(c); goto L_800DA5D4; } // 800DA624
L_800DA628:;
  cmps(c,0,(int32_t)c->r[19],0); // 800DA628
  if (!crb(c,2)) { goto L_800DA64C; } // 800DA62C
  c->r[3]=0u+0x80260000u; // 800DA630
  c->r[5]=0u+0x80260000u; // 800DA634
  c->r[3]=c->r[3]+0xFFFF8A1Cu; // 800DA638
  c->r[4]=0u+0x00000233u; // 800DA63C
  c->r[5]=c->r[5]+0xFFFF89F8u; // 800DA640
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DA644
  c->lr=0x800DA64Cu; f_800F1300(c); // 800DA648
L_800DA64C:;
  W32(c->r[1]+0x00000018u,c->r[23]); // 800DA64C
  c->r[3]=c->r[15]+0x00000070u; // 800DA650
  c->r[4]=c->r[1]+0x00000018u; // 800DA654
  c->r[5]=c->r[19]+0x000000F0u; // 800DA658
  c->lr=0x800DA660u; f_800F1CC0(c); // 800DA65C
  c->r[3]=c->r[26]|c->r[26]; // 800DA660
  c->lr=0x800DA668u; f_8018EA30(c); // 800DA664
L_800DA668:;
  cmps(c,0,(int32_t)c->r[19],0); // 800DA668
  if (!crb(c,2)) { goto L_800DA678; } // 800DA66C
  c->r[19]=0u+0x00000000u; // 800DA670
  goto L_800DA698; // 800DA674
L_800DA678:;
  c->r[3]=c->r[19]|c->r[19]; // 800DA678
  c->r[4]=c->r[16]|c->r[16]; // 800DA67C
  c->lr=0x800DA684u; f_800CC2B0(c); // 800DA680
  cmps(c,0,(int32_t)c->r[17],0); // 800DA684
  if (crb(c,2)) { goto L_800DA698; } // 800DA688
  c->r[3]=c->r[19]|c->r[19]; // 800DA68C
  c->r[4]=c->r[17]|c->r[17]; // 800DA690
  c->lr=0x800DA698u; f_800CC130(c); // 800DA694
L_800DA698:;
  cmps(c,0,(int32_t)c->r[19],0); // 800DA698
  if (!crb(c,2)) { goto L_800DA6DC; } // 800DA69C
  c->r[3]=0u+0x00000002u; // 800DA6A0
  c->lr=0x800DA6A8u; f_800CDDE0(c); // 800DA6A4
  cmps(c,0,(int32_t)c->r[3],0); // 800DA6A8
  if (crb(c,2)) { goto L_800DA6C8; } // 800DA6AC
  c->r[6]=c->r[16]|c->r[16]; // 800DA6B0
  c->r[3]=c->r[27]+0x00000000u; // 800DA6B4
  c->r[5]=c->r[27]+0x00000738u; // 800DA6B8
  c->r[4]=0u+0x000004D8u; // 800DA6BC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DA6C0
  c->lr=0x800DA6C8u; f_800F13A0(c); // 800DA6C4
L_800DA6C8:;
  c->lr=0x800DA6CCu; f_800DD3D0(c); // 800DA6C8
  c->r[3]=c->r[3]+0x00000354u; // 800DA6CC
  c->lr=0x800DA6D4u; f_8018EA30(c); // 800DA6D0
  c->r[3]=0u+0x00000009u; // 800DA6D4
  goto L_800DAD18; // 800DA6D8
L_800DA6DC:;
  c->r[14]=c->r[19]|c->r[19]; // 800DA6DC
  goto L_800DA9D0; // 800DA6E0
L_800DA6E4:;
  c->r[0]=addc(c,c->r[15],0x00000094u,0); cr0(c,c->r[0]); // 800DA6E4
  if (!crb(c,2)) { goto L_800DA700; } // 800DA6E8
  c->r[3]=c->r[27]+0x00000000u; // 800DA6EC
  c->r[5]=c->r[27]+0x000006D0u; // 800DA6F0
  c->r[4]=0u+0x0000041Au; // 800DA6F4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DA6F8
  c->lr=0x800DA700u; f_800F1300(c); // 800DA6FC
L_800DA700:;
  cmps(c,0,(int32_t)c->r[24],127); // 800DA700
  if (!crb(c,1)) { goto L_800DA710; } // 800DA704
  c->r[28]=0u+0x0000007Fu; // 800DA708
  goto L_800DA718; // 800DA70C
L_800DA710:;
  c->r[0]=sraw(c,c->r[24],31); // 800DA710
  c->r[28]=c->r[24]&~c->r[0]; // 800DA714
L_800DA718:;
  c->r[26]=c->r[15]+0x000000A4u; // 800DA718
  c->r[3]=c->r[26]|c->r[26]; // 800DA71C
  c->lr=0x800DA724u; f_8018E950(c); // 800DA720
  c->r[18]=0u+0x00000000u; // 800DA724
  c->r[25]=0u+0x80260000u; // 800DA728
  c->r[24]=0u+0x80260000u; // 800DA72C
  c->r[14]=0u+0x80260000u; // 800DA730
  c->r[31]=0u+0x80260000u; // 800DA734
  goto L_800DA890; // 800DA738
L_800DA73C:;
  c->r[3]=c->r[15]+0x00000094u; // 800DA73C
  c->lr=0x800DA744u; f_800CF470(c); // 800DA740
  cmps(c,0,(int32_t)c->r[3],0); // 800DA744
  if (crb(c,2)) { goto L_800DA76C; } // 800DA748
  c->r[18]=c->r[3]|c->r[3]; // 800DA74C
  if (crb(c,2)) { goto L_800DA890; } // 800DA750
  c->r[5]=c->r[23]|c->r[23]; // 800DA754
  c->r[6]=c->r[22]|c->r[22]; // 800DA758
  c->r[4]=c->r[15]+0x00000094u; // 800DA75C
  c->lr=0x800DA764u; f_800E7810(c); // 800DA760
  c->r[18]=c->r[3]|c->r[3]; // 800DA764
  goto L_800DA890; // 800DA768
L_800DA76C:;
  c->r[0]=R32(c->r[15]+0x00000098u); // 800DA76C
  cmps(c,0,(int32_t)c->r[0],0); // 800DA770
  if (!crb(c,2)) { goto L_800DA780; } // 800DA774
  c->r[29]=0u+0x00000000u; // 800DA778
  goto L_800DA7DC; // 800DA77C
L_800DA780:;
  if (!crb(c,2)) { goto L_800DA798; } // 800DA780
  c->r[3]=c->r[25]+0xFFFF89ECu; // 800DA784
  c->r[5]=c->r[24]+0xFFFF89C8u; // 800DA788
  c->r[4]=0u+0x000001F1u; // 800DA78C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DA790
  c->lr=0x800DA798u; f_800F1300(c); // 800DA794
L_800DA798:;
  c->r[29]=R32(c->r[15]+0x0000009Cu); // 800DA798
  cmps(c,0,(int32_t)c->r[29],0); // 800DA79C
  if (!crb(c,2)) { goto L_800DA7B8; } // 800DA7A0
  c->r[3]=c->r[14]+0xFFFF898Cu; // 800DA7A4
  c->r[5]=c->r[31]+0xFFFF8968u; // 800DA7A8
  c->r[4]=0u+0x0000023Du; // 800DA7AC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DA7B0
  c->lr=0x800DA7B8u; f_800F1300(c); // 800DA7B4
L_800DA7B8:;
  c->r[29]=addc(c,c->r[29],0xFFFFFF10u,0); cr0(c,c->r[29]); // 800DA7B8
  if (!crb(c,2)) { goto L_800DA7DC; } // 800DA7BC
  c->r[3]=0u+0x80260000u; // 800DA7C0
  c->r[4]=0u+0x80260000u; // 800DA7C4
  c->r[5]=c->r[4]+0xFFFF8998u; // 800DA7C8
  c->r[3]=c->r[3]+0xFFFF89BCu; // 800DA7CC
  c->r[4]=0u+0x00000193u; // 800DA7D0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DA7D4
  c->lr=0x800DA7DCu; f_800F1300(c); // 800DA7D8
L_800DA7DC:;
  cmps(c,0,(int32_t)c->r[29],0); // 800DA7DC
  if (!crb(c,2)) { goto L_800DA7F4; } // 800DA7E0
  c->r[3]=c->r[26]|c->r[26]; // 800DA7E4
  c->lr=0x800DA7ECu; f_8018EA30(c); // 800DA7E8
  c->r[18]=0u+0x00000000u; // 800DA7EC
  goto L_800DA940; // 800DA7F0
L_800DA7F4:;
  c->r[3]=R8(c->r[29]+0x00000098u); // 800DA7F4
  c->r[0]=R32(c->r[29]+0x00000050u); // 800DA7F8
  c->r[3]=c->r[3]+c->r[0]; // 800DA7FC
  cmps(c,0,(int32_t)c->r[3],127); // 800DA800
  if (!crb(c,1)) { goto L_800DA810; } // 800DA804
  c->r[0]=0u+0x0000007Fu; // 800DA808
  goto L_800DA818; // 800DA80C
L_800DA810:;
  c->r[0]=sraw(c,c->r[3],31); // 800DA810
  c->r[0]=c->r[3]&~c->r[0]; // 800DA814
L_800DA818:;
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 800DA818
  if (!crb(c,0)) { goto L_800DA830; } // 800DA81C
  c->r[3]=c->r[26]|c->r[26]; // 800DA820
  c->lr=0x800DA828u; f_8018EA30(c); // 800DA824
  c->r[18]=0u+0x00000000u; // 800DA828
  goto L_800DA940; // 800DA82C
L_800DA830:;
  c->r[3]=c->r[15]+0x000000A4u; // 800DA830
  c->lr=0x800DA838u; f_8018EA30(c); // 800DA834
  c->r[3]=0u+0x00000002u; // 800DA838
  c->lr=0x800DA840u; f_800CDE60(c); // 800DA83C
  c->lr=0x800DA844u; f_800CDDE0(c); // 800DA840
  cmps(c,0,(int32_t)c->r[3],0); // 800DA844
  if (crb(c,2)) { goto L_800DA87C; } // 800DA848
  c->r[30]=R32(c->r[29]+0x0000009Cu); // 800DA84C
  c->r[3]=0u+0x00000002u; // 800DA850
  c->lr=0x800DA858u; f_800CDED0(c); // 800DA854
  c->r[7]=c->r[3]|c->r[3]; // 800DA858
  c->r[3]=0u+0x80260000u; // 800DA85C
  c->r[4]=0u+0x80260000u; // 800DA860
  c->r[6]=c->r[30]|c->r[30]; // 800DA864
  c->r[5]=c->r[4]+0xFFFF88E4u; // 800DA868
  c->r[3]=c->r[3]+0xFFFF8920u; // 800DA86C
  c->r[4]=0u+0x00000085u; // 800DA870
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DA874
  c->lr=0x800DA87Cu; f_800F13A0(c); // 800DA878
L_800DA87C:;
  c->r[3]=c->r[29]|c->r[29]; // 800DA87C
  c->r[4]=0u+0x00000000u; // 800DA880
  c->lr=0x800DA888u; f_800CAA70(c); // 800DA884
  c->r[3]=c->r[15]+0x000000A4u; // 800DA888
  c->lr=0x800DA890u; f_8018E950(c); // 800DA88C
L_800DA890:;
  cmps(c,0,(int32_t)c->r[18],0); // 800DA890
  if (crb(c,2)) { IRQCHK(c); goto L_800DA73C; } // 800DA894
  c->r[23]=R32(c->r[15]+0x0000009Cu); // 800DA898
  c->r[24]=c->r[15]+0x0000009Cu; // 800DA89C
  c->r[22]=0u+0x80260000u; // 800DA8A0
  c->r[14]=0u+0x80260000u; // 800DA8A4
  goto L_800DA8F8; // 800DA8A8
L_800DA8AC:;
  cmps(c,0,(int32_t)c->r[23],0); // 800DA8AC
  if (!crb(c,2)) { goto L_800DA8C8; } // 800DA8B0
  c->r[3]=c->r[22]+0xFFFF898Cu; // 800DA8B4
  c->r[5]=c->r[14]+0xFFFF8968u; // 800DA8B8
  c->r[4]=0u+0x0000023Du; // 800DA8BC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DA8C0
  c->lr=0x800DA8C8u; f_800F1300(c); // 800DA8C4
L_800DA8C8:;
  c->r[3]=R8(c->r[23]+0xFFFFFFA8u); // 800DA8C8
  c->r[0]=R32(c->r[23]+0xFFFFFF60u); // 800DA8CC
  c->r[3]=c->r[3]+c->r[0]; // 800DA8D0
  cmps(c,0,(int32_t)c->r[3],127); // 800DA8D4
  if (!crb(c,1)) { goto L_800DA8E4; } // 800DA8D8
  c->r[0]=0u+0x0000007Fu; // 800DA8DC
  goto L_800DA8EC; // 800DA8E0
L_800DA8E4:;
  c->r[0]=sraw(c,c->r[3],31); // 800DA8E4
  c->r[0]=c->r[3]&~c->r[0]; // 800DA8E8
L_800DA8EC:;
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 800DA8EC
  if (crb(c,0)) { goto L_800DA900; } // 800DA8F0
  c->r[23]=R32(c->r[23]+0x00000000u); // 800DA8F4
L_800DA8F8:;
  cmpu(c,0,c->r[23],c->r[24]); // 800DA8F8
  if (!crb(c,2)) { IRQCHK(c); goto L_800DA8AC; } // 800DA8FC
L_800DA900:;
  cmps(c,0,(int32_t)c->r[18],0); // 800DA900
  if (!crb(c,2)) { goto L_800DA924; } // 800DA904
  c->r[3]=0u+0x80260000u; // 800DA908
  c->r[5]=0u+0x80260000u; // 800DA90C
  c->r[3]=c->r[3]+0xFFFF895Cu; // 800DA910
  c->r[4]=0u+0x00000233u; // 800DA914
  c->r[5]=c->r[5]+0xFFFF8938u; // 800DA918
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DA91C
  c->lr=0x800DA924u; f_800F1300(c); // 800DA920
L_800DA924:;
  W32(c->r[1]+0x00000014u,c->r[23]); // 800DA924
  c->r[3]=c->r[15]+0x00000098u; // 800DA928
  c->r[4]=c->r[1]+0x00000014u; // 800DA92C
  c->r[5]=c->r[18]+0x000000F0u; // 800DA930
  c->lr=0x800DA938u; f_800F1CC0(c); // 800DA934
  c->r[3]=c->r[26]|c->r[26]; // 800DA938
  c->lr=0x800DA940u; f_8018EA30(c); // 800DA93C
L_800DA940:;
  cmps(c,0,(int32_t)c->r[18],0); // 800DA940
  if (!crb(c,2)) { goto L_800DA950; } // 800DA944
  c->r[18]=0u+0x00000000u; // 800DA948
  goto L_800DA970; // 800DA94C
L_800DA950:;
  c->r[3]=c->r[18]|c->r[18]; // 800DA950
  c->r[4]=c->r[16]|c->r[16]; // 800DA954
  c->lr=0x800DA95Cu; f_800CC2B0(c); // 800DA958
  cmps(c,0,(int32_t)c->r[17],0); // 800DA95C
  if (crb(c,2)) { goto L_800DA970; } // 800DA960
  c->r[3]=c->r[18]|c->r[18]; // 800DA964
  c->r[4]=c->r[17]|c->r[17]; // 800DA968
  c->lr=0x800DA970u; f_800CC130(c); // 800DA96C
L_800DA970:;
  cmps(c,0,(int32_t)c->r[18],0); // 800DA970
  if (!crb(c,2)) { goto L_800DA9B4; } // 800DA974
  c->r[3]=0u+0x00000003u; // 800DA978
  c->lr=0x800DA980u; f_800CDDE0(c); // 800DA97C
  cmps(c,0,(int32_t)c->r[3],0); // 800DA980
  if (crb(c,2)) { goto L_800DA9A0; } // 800DA984
  c->r[6]=c->r[16]|c->r[16]; // 800DA988
  c->r[3]=c->r[27]+0x00000000u; // 800DA98C
  c->r[5]=c->r[27]+0x0000077Cu; // 800DA990
  c->r[4]=0u+0x000004ECu; // 800DA994
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DA998
  c->lr=0x800DA9A0u; f_800F13A0(c); // 800DA99C
L_800DA9A0:;
  c->lr=0x800DA9A4u; f_800DD3D0(c); // 800DA9A0
  c->r[3]=c->r[3]+0x00000354u; // 800DA9A4
  c->lr=0x800DA9ACu; f_8018EA30(c); // 800DA9A8
  c->r[3]=0u+0x00000009u; // 800DA9AC
  goto L_800DAD18; // 800DA9B0
L_800DA9B4:;
  c->r[14]=c->r[18]|c->r[18]; // 800DA9B4
  goto L_800DA9D0; // 800DA9B8
L_800DA9BC:;
  c->lr=0x800DA9C0u; f_800DD3D0(c); // 800DA9BC
  c->r[3]=c->r[3]+0x00000354u; // 800DA9C0
  c->lr=0x800DA9C8u; f_8018EA30(c); // 800DA9C4
  c->r[3]=0u+0x00000003u; // 800DA9C8
  goto L_800DAD18; // 800DA9CC
L_800DA9D0:;
  c->r[3]=R32(c->r[1]+0x0000007Cu); // 800DA9D0
  c->r[4]=c->r[14]|c->r[14]; // 800DA9D4
  c->lr=0x800DA9DCu; f_800DC600(c); // 800DA9D8
  cmps(c,0,(int32_t)c->r[3],0); // 800DA9DC
  if (!crb(c,2)) { goto L_800DAA0C; } // 800DA9E0
  c->r[12]=R32(c->r[14]+0x00000000u); // 800DA9E4
  c->r[3]=c->r[14]|c->r[14]; // 800DA9E8
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DA9EC
  c->ctr=c->r[12]; // 800DA9F0
  if (true) { c->lr=0x800DA9F8u; dispatch(c,c->ctr); } // 800DA9F4
  c->lr=0x800DA9FCu; f_800DD3D0(c); // 800DA9F8
  c->r[3]=c->r[3]+0x00000354u; // 800DA9FC
  c->lr=0x800DAA04u; f_8018EA30(c); // 800DAA00
  c->r[3]=0u+0x000000FFu; // 800DAA04
  goto L_800DAD18; // 800DAA08
L_800DAA0C:;
  c->r[3]=R32(c->r[15]+0x00000010u); // 800DAA0C
  c->r[4]=c->r[16]|c->r[16]; // 800DAA10
  c->lr=0x800DAA18u; f_800D6060(c); // 800DAA14
  cmps(c,0,(int32_t)c->r[3],1); // 800DAA18
  if (crb(c,2)) { goto L_800DAA34; } // 800DAA1C
  cmps(c,0,(int32_t)c->r[3],2); // 800DAA20
  if (crb(c,2)) { goto L_800DAAF4; } // 800DAA24
  cmps(c,0,(int32_t)c->r[3],3); // 800DAA28
  if (crb(c,2)) { goto L_800DABA0; } // 800DAA2C
  goto L_800DAC4C; // 800DAA30
L_800DAA34:;
  cmps(c,0,(int32_t)c->r[20],0); // 800DAA34
  if (!crb(c,2)) { goto L_800DAA50; } // 800DAA38
  c->r[3]=c->r[27]+0x00000000u; // 800DAA3C
  c->r[5]=c->r[27]+0x000007C0u; // 800DAA40
  c->r[4]=0u+0x00000502u; // 800DAA44
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DAA48
  c->lr=0x800DAA50u; f_800F1300(c); // 800DAA4C
L_800DAA50:;
  c->r[3]=R32(c->r[1]+0x0000007Cu); // 800DAA50
  c->r[4]=c->r[20]|c->r[20]; // 800DAA54
  c->lr=0x800DAA5Cu; f_800DCD90(c); // 800DAA58
  c->r[3]=R32(c->r[15]+0x00000010u); // 800DAA5C
  c->r[4]=c->r[16]|c->r[16]; // 800DAA60
  c->r[5]=c->r[1]+0x00000034u; // 800DAA64
  c->lr=0x800DAA6Cu; f_800D6080(c); // 800DAA68
  cmps(c,0,(int32_t)c->r[3],0); // 800DAA6C
  if (!crb(c,2)) { goto L_800DAA9C; } // 800DAA70
  c->r[12]=R32(c->r[20]+0x00000000u); // 800DAA74
  c->r[3]=c->r[20]|c->r[20]; // 800DAA78
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DAA7C
  c->ctr=c->r[12]; // 800DAA80
  if (true) { c->lr=0x800DAA88u; dispatch(c,c->ctr); } // 800DAA84
  c->lr=0x800DAA8Cu; f_800DD3D0(c); // 800DAA88
  c->r[3]=c->r[3]+0x00000354u; // 800DAA8C
  c->lr=0x800DAA94u; f_8018EA30(c); // 800DAA90
  c->r[3]=0u+0x00000003u; // 800DAA94
  goto L_800DAD18; // 800DAA98
L_800DAA9C:;
  c->r[7]=R32(c->r[1]+0x00000078u); // 800DAA9C
  c->r[3]=c->r[15]|c->r[15]; // 800DAAA0
  c->r[8]=R32(c->r[1]+0x00000074u); // 800DAAA4
  c->r[4]=c->r[20]|c->r[20]; // 800DAAA8
  c->r[9]=R32(c->r[1]+0x0000006Cu); // 800DAAAC
  c->r[5]=c->r[1]+0x00000048u; // 800DAAB0
  c->r[10]=R32(c->r[1]+0x00000068u); // 800DAAB4
  c->r[6]=c->r[1]+0x00000034u; // 800DAAB8
  c->lr=0x800DAAC0u; f_800DAD30(c); // 800DAABC
  cmps(c,0,(int32_t)c->r[3],0); // 800DAAC0
  c->r[15]=c->r[3]|c->r[3]; // 800DAAC4
  if (crb(c,2)) { goto L_800DAC88; } // 800DAAC8
  c->r[12]=R32(c->r[20]+0x00000000u); // 800DAACC
  c->r[3]=c->r[20]|c->r[20]; // 800DAAD0
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DAAD4
  c->ctr=c->r[12]; // 800DAAD8
  if (true) { c->lr=0x800DAAE0u; dispatch(c,c->ctr); } // 800DAADC
  c->lr=0x800DAAE4u; f_800DD3D0(c); // 800DAAE0
  c->r[3]=c->r[3]+0x00000354u; // 800DAAE4
  c->lr=0x800DAAECu; f_8018EA30(c); // 800DAAE8
  c->r[3]=c->r[15]|c->r[15]; // 800DAAEC
  goto L_800DAD18; // 800DAAF0
L_800DAAF4:;
  cmps(c,0,(int32_t)c->r[19],0); // 800DAAF4
  if (!crb(c,2)) { goto L_800DAB10; } // 800DAAF8
  c->r[3]=c->r[27]+0x00000000u; // 800DAAFC
  c->r[5]=c->r[27]+0x000007ECu; // 800DAB00
  c->r[4]=0u+0x00000522u; // 800DAB04
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DAB08
  c->lr=0x800DAB10u; f_800F1300(c); // 800DAB0C
L_800DAB10:;
  c->r[3]=R32(c->r[15]+0x00000010u); // 800DAB10
  c->r[4]=c->r[16]|c->r[16]; // 800DAB14
  c->r[5]=c->r[1]+0x00000020u; // 800DAB18
  c->lr=0x800DAB20u; f_800D6090(c); // 800DAB1C
  cmps(c,0,(int32_t)c->r[3],0); // 800DAB20
  if (!crb(c,2)) { goto L_800DAB50; } // 800DAB24
  c->r[12]=R32(c->r[19]+0x00000000u); // 800DAB28
  c->r[3]=c->r[19]|c->r[19]; // 800DAB2C
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DAB30
  c->ctr=c->r[12]; // 800DAB34
  if (true) { c->lr=0x800DAB3Cu; dispatch(c,c->ctr); } // 800DAB38
  c->lr=0x800DAB40u; f_800DD3D0(c); // 800DAB3C
  c->r[3]=c->r[3]+0x00000354u; // 800DAB40
  c->lr=0x800DAB48u; f_8018EA30(c); // 800DAB44
  c->r[3]=0u+0x00000003u; // 800DAB48
  goto L_800DAD18; // 800DAB4C
L_800DAB50:;
  c->r[7]=R32(c->r[1]+0x00000078u); // 800DAB50
  c->r[3]=c->r[15]|c->r[15]; // 800DAB54
  c->r[8]=R32(c->r[1]+0x00000074u); // 800DAB58
  c->r[4]=c->r[19]|c->r[19]; // 800DAB5C
  c->r[5]=c->r[1]+0x00000048u; // 800DAB60
  c->r[6]=c->r[1]+0x00000020u; // 800DAB64
  c->lr=0x800DAB6Cu; f_800DB200(c); // 800DAB68
  cmps(c,0,(int32_t)c->r[3],0); // 800DAB6C
  c->r[15]=c->r[3]|c->r[3]; // 800DAB70
  if (crb(c,2)) { goto L_800DAC88; } // 800DAB74
  c->r[12]=R32(c->r[19]+0x00000000u); // 800DAB78
  c->r[3]=c->r[19]|c->r[19]; // 800DAB7C
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DAB80
  c->ctr=c->r[12]; // 800DAB84
  if (true) { c->lr=0x800DAB8Cu; dispatch(c,c->ctr); } // 800DAB88
  c->lr=0x800DAB90u; f_800DD3D0(c); // 800DAB8C
  c->r[3]=c->r[3]+0x00000354u; // 800DAB90
  c->lr=0x800DAB98u; f_8018EA30(c); // 800DAB94
  c->r[3]=c->r[15]|c->r[15]; // 800DAB98
  goto L_800DAD18; // 800DAB9C
L_800DABA0:;
  cmps(c,0,(int32_t)c->r[18],0); // 800DABA0
  if (!crb(c,2)) { goto L_800DABBC; } // 800DABA4
  c->r[3]=c->r[27]+0x00000000u; // 800DABA8
  c->r[5]=c->r[27]+0x00000818u; // 800DABAC
  c->r[4]=0u+0x0000053Du; // 800DABB0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DABB4
  c->lr=0x800DABBCu; f_800F1300(c); // 800DABB8
L_800DABBC:;
  c->r[3]=R32(c->r[15]+0x00000010u); // 800DABBC
  c->r[4]=c->r[16]|c->r[16]; // 800DABC0
  c->r[5]=c->r[1]+0x00000028u; // 800DABC4
  c->lr=0x800DABCCu; f_800D60A0(c); // 800DABC8
  cmps(c,0,(int32_t)c->r[3],0); // 800DABCC
  if (!crb(c,2)) { goto L_800DABFC; } // 800DABD0
  c->r[12]=R32(c->r[18]+0x00000000u); // 800DABD4
  c->r[3]=c->r[18]|c->r[18]; // 800DABD8
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DABDC
  c->ctr=c->r[12]; // 800DABE0
  if (true) { c->lr=0x800DABE8u; dispatch(c,c->ctr); } // 800DABE4
  c->lr=0x800DABECu; f_800DD3D0(c); // 800DABE8
  c->r[3]=c->r[3]+0x00000354u; // 800DABEC
  c->lr=0x800DABF4u; f_8018EA30(c); // 800DABF0
  c->r[3]=0u+0x00000003u; // 800DABF4
  goto L_800DAD18; // 800DABF8
L_800DABFC:;
  c->r[7]=R32(c->r[1]+0x00000078u); // 800DABFC
  c->r[3]=c->r[15]|c->r[15]; // 800DAC00
  c->r[8]=R32(c->r[1]+0x00000074u); // 800DAC04
  c->r[4]=c->r[18]|c->r[18]; // 800DAC08
  c->r[5]=c->r[1]+0x00000048u; // 800DAC0C
  c->r[6]=c->r[1]+0x00000028u; // 800DAC10
  c->lr=0x800DAC18u; f_800DB4F0(c); // 800DAC14
  cmps(c,0,(int32_t)c->r[3],0); // 800DAC18
  c->r[15]=c->r[3]|c->r[3]; // 800DAC1C
  if (crb(c,2)) { goto L_800DAC88; } // 800DAC20
  c->r[12]=R32(c->r[18]+0x00000000u); // 800DAC24
  c->r[3]=c->r[18]|c->r[18]; // 800DAC28
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DAC2C
  c->ctr=c->r[12]; // 800DAC30
  if (true) { c->lr=0x800DAC38u; dispatch(c,c->ctr); } // 800DAC34
  c->lr=0x800DAC3Cu; f_800DD3D0(c); // 800DAC38
  c->r[3]=c->r[3]+0x00000354u; // 800DAC3C
  c->lr=0x800DAC44u; f_8018EA30(c); // 800DAC40
  c->r[3]=c->r[15]|c->r[15]; // 800DAC44
  goto L_800DAD18; // 800DAC48
L_800DAC4C:;
  c->r[3]=c->r[27]+0x00000000u; // 800DAC4C
  c->r[5]=c->r[27]+0x00000844u; // 800DAC50
  c->r[4]=0u+0x00000557u; // 800DAC54
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DAC58
  c->lr=0x800DAC60u; f_800F1300(c); // 800DAC5C
  c->r[12]=R32(c->r[14]+0x00000000u); // 800DAC60
  c->r[3]=c->r[14]|c->r[14]; // 800DAC64
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DAC68
  c->ctr=c->r[12]; // 800DAC6C
  if (true) { c->lr=0x800DAC74u; dispatch(c,c->ctr); } // 800DAC70
  c->lr=0x800DAC78u; f_800DD3D0(c); // 800DAC74
  c->r[3]=c->r[3]+0x00000354u; // 800DAC78
  c->lr=0x800DAC80u; f_8018EA30(c); // 800DAC7C
  c->r[3]=0u+0x00000003u; // 800DAC80
  goto L_800DAD18; // 800DAC84
L_800DAC88:;
  cmps(c,0,(int32_t)c->r[21],0); // 800DAC88
  if (crb(c,2)) { goto L_800DACCC; } // 800DAC8C
  c->r[3]=c->r[21]|c->r[21]; // 800DAC90
  c->r[4]=c->r[14]|c->r[14]; // 800DAC94
  c->lr=0x800DAC9Cu; f_800CE630(c); // 800DAC98
  cmps(c,0,(int32_t)c->r[3],0); // 800DAC9C
  if (!crb(c,2)) { goto L_800DACCC; } // 800DACA0
  c->r[12]=R32(c->r[14]+0x00000000u); // 800DACA4
  c->r[3]=c->r[14]|c->r[14]; // 800DACA8
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DACAC
  c->ctr=c->r[12]; // 800DACB0
  if (true) { c->lr=0x800DACB8u; dispatch(c,c->ctr); } // 800DACB4
  c->lr=0x800DACBCu; f_800DD3D0(c); // 800DACB8
  c->r[3]=c->r[3]+0x00000354u; // 800DACBC
  c->lr=0x800DACC4u; f_8018EA30(c); // 800DACC0
  c->r[3]=0u+0x000000FFu; // 800DACC4
  goto L_800DAD18; // 800DACC8
L_800DACCC:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800DACCC
  cmps(c,0,(int32_t)c->r[0],0); // 800DACD0
  if (crb(c,2)) { goto L_800DACE4; } // 800DACD4
  c->r[3]=c->r[14]|c->r[14]; // 800DACD8
  c->r[4]=c->r[0]|c->r[0]; // 800DACDC
  c->lr=0x800DACE4u; f_800CBC80(c); // 800DACE0
L_800DACE4:;
  c->r[0]=R8(c->r[1]+0x00000010u); // 800DACE4
  cmps(c,0,(int32_t)c->r[0],0); // 800DACE8
  if (crb(c,2)) { goto L_800DACFC; } // 800DACEC
  c->r[4]=R32(c->r[1]+0x00000070u); // 800DACF0
  c->r[3]=c->r[14]|c->r[14]; // 800DACF4
  c->lr=0x800DACFCu; f_800CBE40(c); // 800DACF8
L_800DACFC:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 800DACFC
  c->r[4]=c->r[14]|c->r[14]; // 800DAD00
  c->lr=0x800DAD08u; f_800DBD20(c); // 800DAD04
  c->lr=0x800DAD0Cu; f_800DD3D0(c); // 800DAD08
  c->r[3]=c->r[3]+0x00000354u; // 800DAD0C
  c->lr=0x800DAD14u; f_8018EA30(c); // 800DAD10
  c->r[3]=0u+0x00000000u; // 800DAD14
L_800DAD18:;
  c->r[11]=c->r[1]+0x000000D0u; // 800DAD18
  c->lr=0x800DAD20u; f_80207A38(c); // 800DAD1C
  c->r[0]=R32(c->r[1]+0x000000D4u); // 800DAD20
  c->lr=c->r[0]; // 800DAD24
  c->r[1]=c->r[1]+0x000000D0u; // 800DAD28
  return; // 800DAD2C
}

// fn_800DAD30
void f_800DAD30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DAD30
  c->r[0]=c->lr; // 800DAD34
  W32(c->r[1]+0x00000074u,c->r[0]); // 800DAD38
  c->r[11]=c->r[1]+0x00000070u; // 800DAD3C
  c->lr=0x800DAD44u; { W32(c->r[11]+0xFFFFFFC0u,c->r[16]); W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800DAD40
  cmps(c,0,(int32_t)c->r[6],0); // 800DAD44
  c->r[31]=0u+0x80250000u; // 800DAD48
  c->r[23]=c->r[3]|c->r[3]; // 800DAD4C
  c->r[24]=c->r[4]|c->r[4]; // 800DAD50
  c->r[25]=c->r[5]|c->r[5]; // 800DAD54
  c->r[26]=c->r[6]|c->r[6]; // 800DAD58
  c->r[27]=c->r[7]|c->r[7]; // 800DAD5C
  c->r[28]=c->r[8]|c->r[8]; // 800DAD60
  c->r[17]=c->r[9]|c->r[9]; // 800DAD64
  c->r[16]=c->r[10]|c->r[10]; // 800DAD68
  c->r[31]=c->r[31]+0x00007D20u; // 800DAD6C
  if (!crb(c,2)) { goto L_800DAD88; } // 800DAD70
  c->r[3]=c->r[31]+0x00000000u; // 800DAD74
  c->r[5]=c->r[31]+0x00000860u; // 800DAD78
  c->r[4]=0u+0x0000058Eu; // 800DAD7C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DAD80
  c->lr=0x800DAD88u; f_800F1300(c); // 800DAD84
L_800DAD88:;
  c->r[0]=R32(c->r[26]+0x00000008u); // 800DAD88
  cmps(c,0,(int32_t)c->r[17],0); // 800DAD8C
  c->r[30]=0u+0x00000000u; // 800DAD90
  W32(c->r[1]+0x0000000Cu,c->r[30]); // 800DAD94
  c->r[29]=0u+0x00000000u; // 800DAD98
  W32(c->r[1]+0x00000008u,c->r[0]); // 800DAD9C
  if (crb(c,2)) { goto L_800DADFC; } // 800DADA0
  c->r[0]=0u+0x00000000u; // 800DADA4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800DADA8
  c->r[30]=c->r[17]|c->r[17]; // 800DADAC
  c->r[4]=c->r[17]|c->r[17]; // 800DADB0
  c->r[3]=c->r[1]+0x00000020u; // 800DADB4
  c->lr=0x800DADBCu; f_800D1FD0(c); // 800DADB8
  cmps(c,0,(int32_t)c->r[16],0); // 800DADBC
  if (crb(c,2)) { goto L_800DADE4; } // 800DADC0
  c->r[4]=c->r[16]|c->r[16]; // 800DADC4
  c->r[3]=c->r[1]+0x00000020u; // 800DADC8
  c->r[5]=c->r[1]+0x0000000Cu; // 800DADCC
  c->lr=0x800DADD4u; f_800D2190(c); // 800DADD0
  cmps(c,0,(int32_t)c->r[3],0); // 800DADD4
  if (!crb(c,2)) { goto L_800DADE4; } // 800DADD8
  c->r[3]=0u+0x0000000Bu; // 800DADDC
  goto L_800DB1DC; // 800DADE0
L_800DADE4:;
  c->r[3]=c->r[1]+0x00000020u; // 800DADE4
  c->lr=0x800DADECu; f_800D2130(c); // 800DADE8
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 800DADEC
  c->r[5]=c->r[1]+0x00000008u; // 800DADF0
  c->lr=0x800DADF8u; f_800D0CB0(c); // 800DADF4
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800DADF8
L_800DADFC:;
  cmps(c,0,(int32_t)c->r[30],0); // 800DADFC
  if (!crb(c,2)) { goto L_800DAE50; } // 800DAE00
  c->r[4]=R32(c->r[25]+0x00000000u); // 800DAE04
  c->r[3]=c->r[23]|c->r[23]; // 800DAE08
  c->lr=0x800DAE10u; f_800D9AD0(c); // 800DAE0C
  c->r[0]=R32(c->r[26]+0x00000000u); // 800DAE10
  cmps(c,0,(int32_t)c->r[16],0); // 800DAE14
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800DAE18
  c->r[30]=c->r[3]|c->r[3]; // 800DAE1C
  if (crb(c,2)) { goto L_800DAE50; } // 800DAE20
  c->r[4]=c->r[30]|c->r[30]; // 800DAE24
  c->r[3]=c->r[1]+0x00000018u; // 800DAE28
  c->lr=0x800DAE30u; f_800D1FD0(c); // 800DAE2C
  c->r[4]=c->r[16]|c->r[16]; // 800DAE30
  c->r[3]=c->r[1]+0x00000018u; // 800DAE34
  c->r[5]=c->r[1]+0x0000000Cu; // 800DAE38
  c->lr=0x800DAE40u; f_800D2190(c); // 800DAE3C
  cmps(c,0,(int32_t)c->r[3],0); // 800DAE40
  if (!crb(c,2)) { goto L_800DAE50; } // 800DAE44
  c->r[3]=0u+0x0000000Bu; // 800DAE48
  goto L_800DB1DC; // 800DAE4C
L_800DAE50:;
  cmps(c,0,(int32_t)c->r[30],0); // 800DAE50
  if (!crb(c,2)) { goto L_800DAEF0; } // 800DAE54
  c->r[17]=R32(c->r[24]+0x00000004u); // 800DAE58
  cmps(c,0,(int32_t)c->r[17],0); // 800DAE5C
  if (!crb(c,2)) { goto L_800DAE6C; } // 800DAE60
  c->r[3]=0u+0x00000004u; // 800DAE64
  goto L_800DB1DC; // 800DAE68
L_800DAE6C:;
  c->r[16]=addc(c,c->r[24],0x00000290u,0); cr0(c,c->r[16]); // 800DAE6C
  if (!crb(c,2)) { goto L_800DAE88; } // 800DAE70
  c->r[3]=c->r[31]+0x00000000u; // 800DAE74
  c->r[5]=c->r[31]+0x00000888u; // 800DAE78
  c->r[4]=0u+0x000005C5u; // 800DAE7C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DAE80
  c->lr=0x800DAE88u; f_800F1300(c); // 800DAE84
L_800DAE88:;
  c->r[3]=R32(c->r[23]+0x00000010u); // 800DAE88
  c->r[5]=c->r[16]|c->r[16]; // 800DAE8C
  c->r[4]=R32(c->r[25]+0x00000000u); // 800DAE90
  c->r[6]=0u+0x00000200u; // 800DAE94
  c->lr=0x800DAE9Cu; f_800D6130(c); // 800DAE98
  cmps(c,0,(int32_t)c->r[3],0); // 800DAE9C
  c->r[29]=c->r[3]|c->r[3]; // 800DAEA0
  if (!crb(c,2)) { goto L_800DAEB0; } // 800DAEA4
  c->r[3]=0u+0x00000006u; // 800DAEA8
  goto L_800DB1DC; // 800DAEAC
L_800DAEB0:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 800DAEB0
  c->r[12]=R32(c->r[12]+0x00000040u); // 800DAEB4
  c->ctr=c->r[12]; // 800DAEB8
  if (true) { c->lr=0x800DAEC0u; dispatch(c,c->ctr); } // 800DAEBC
  c->r[16]=c->r[3]|c->r[3]; // 800DAEC0
  c->r[3]=c->r[17]|c->r[17]; // 800DAEC4
  c->lr=0x800DAECCu; f_800D1220(c); // 800DAEC8
  cmpu(c,0,c->r[3],c->r[16]); // 800DAECC
  if (!crb(c,0)) { goto L_800DAEF0; } // 800DAED0
  c->r[12]=R32(c->r[29]+0x00000000u); // 800DAED4
  c->r[3]=c->r[29]|c->r[29]; // 800DAED8
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DAEDC
  c->ctr=c->r[12]; // 800DAEE0
  if (true) { c->lr=0x800DAEE8u; dispatch(c,c->ctr); } // 800DAEE4
  c->r[3]=0u+0x00000005u; // 800DAEE8
  goto L_800DB1DC; // 800DAEEC
L_800DAEF0:;
  c->r[4]=R32(c->r[23]+0x00000030u); // 800DAEF0
  c->r[3]=c->r[24]|c->r[24]; // 800DAEF4
  c->r[5]=R32(c->r[1]+0x00000008u); // 800DAEF8
  c->r[6]=c->r[23]+0x00000020u; // 800DAEFC
  c->lr=0x800DAF04u; f_800D3CB0(c); // 800DAF00
  c->r[16]=0u+0x80260000u; // 800DAF04
  c->r[17]=0u+0x80260000u; // 800DAF08
  c->r[19]=0u+0x80250000u; // 800DAF0C
  c->r[20]=0u+0x80250000u; // 800DAF10
  c->r[21]=0u+0x80260000u; // 800DAF14
  c->r[22]=0u+0x80260000u; // 800DAF18
  goto L_800DB08C; // 800DAF1C
L_800DAF20:;
  cmps(c,0,(int32_t)c->r[3],1); // 800DAF20
  if (!crb(c,2)) { goto L_800DB084; } // 800DAF24
  c->r[0]=R32(c->r[23]+0x00000048u); // 800DAF28
  cmpu(c,0,c->r[0],0x00000001u); // 800DAF2C
  if (!crb(c,2)) { goto L_800DAF80; } // 800DAF30
  cmps(c,0,(int32_t)c->r[29],0); // 800DAF34
  if (crb(c,2)) { goto L_800DAF50; } // 800DAF38
  c->r[12]=R32(c->r[29]+0x00000000u); // 800DAF3C
  c->r[3]=c->r[29]|c->r[29]; // 800DAF40
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DAF44
  c->ctr=c->r[12]; // 800DAF48
  if (true) { c->lr=0x800DAF50u; dispatch(c,c->ctr); } // 800DAF4C
L_800DAF50:;
  c->r[3]=0u+0x00000004u; // 800DAF50
  c->lr=0x800DAF58u; f_800CDDE0(c); // 800DAF54
  cmps(c,0,(int32_t)c->r[3],0); // 800DAF58
  if (crb(c,2)) { goto L_800DAF78; } // 800DAF5C
  c->r[6]=R32(c->r[24]+0x0000009Cu); // 800DAF60
  c->r[3]=c->r[31]+0x00000000u; // 800DAF64
  c->r[5]=c->r[31]+0x000008C0u; // 800DAF68
  c->r[4]=0u+0x000005F0u; // 800DAF6C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DAF70
  c->lr=0x800DAF78u; f_800F13A0(c); // 800DAF74
L_800DAF78:;
  c->r[3]=0u+0x00000009u; // 800DAF78
  goto L_800DB1DC; // 800DAF7C
L_800DAF80:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DAF80
  if (!crb(c,2)) { goto L_800DAF90; } // 800DAF84
  c->r[18]=0u+0x00000000u; // 800DAF88
  goto L_800DAFE4; // 800DAF8C
L_800DAF90:;
  if (!crb(c,2)) { goto L_800DAFA8; } // 800DAF90
  c->r[3]=c->r[16]+0xFFFF8B6Cu; // 800DAF94
  c->r[5]=c->r[17]+0xFFFF8B48u; // 800DAF98
  c->r[4]=0u+0x000001F1u; // 800DAF9C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DAFA0
  c->lr=0x800DAFA8u; f_800F1300(c); // 800DAFA4
L_800DAFA8:;
  c->r[18]=R32(c->r[23]+0x0000004Cu); // 800DAFA8
  cmps(c,0,(int32_t)c->r[18],0); // 800DAFAC
  if (!crb(c,2)) { goto L_800DAFC8; } // 800DAFB0
  c->r[3]=c->r[19]+0x0000730Cu; // 800DAFB4
  c->r[5]=c->r[20]+0x000072E8u; // 800DAFB8
  c->r[4]=0u+0x0000023Du; // 800DAFBC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DAFC0
  c->lr=0x800DAFC8u; f_800F1300(c); // 800DAFC4
L_800DAFC8:;
  c->r[18]=addc(c,c->r[18],0xFFFFFF10u,0); cr0(c,c->r[18]); // 800DAFC8
  if (!crb(c,2)) { goto L_800DAFE4; } // 800DAFCC
  c->r[3]=c->r[21]+0xFFFF8B3Cu; // 800DAFD0
  c->r[5]=c->r[22]+0xFFFF8B18u; // 800DAFD4
  c->r[4]=0u+0x00000193u; // 800DAFD8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DAFDC
  c->lr=0x800DAFE4u; f_800F1300(c); // 800DAFE0
L_800DAFE4:;
  cmpu(c,0,c->r[24],c->r[18]); // 800DAFE4
  if (!crb(c,2)) { goto L_800DB038; } // 800DAFE8
  cmps(c,0,(int32_t)c->r[29],0); // 800DAFEC
  if (crb(c,2)) { goto L_800DB008; } // 800DAFF0
  c->r[12]=R32(c->r[29]+0x00000000u); // 800DAFF4
  c->r[3]=c->r[29]|c->r[29]; // 800DAFF8
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DAFFC
  c->ctr=c->r[12]; // 800DB000
  if (true) { c->lr=0x800DB008u; dispatch(c,c->ctr); } // 800DB004
L_800DB008:;
  c->r[3]=0u+0x00000004u; // 800DB008
  c->lr=0x800DB010u; f_800CDDE0(c); // 800DB00C
  cmps(c,0,(int32_t)c->r[3],0); // 800DB010
  if (crb(c,2)) { goto L_800DB030; } // 800DB014
  c->r[6]=R32(c->r[24]+0x0000009Cu); // 800DB018
  c->r[3]=c->r[31]+0x00000000u; // 800DB01C
  c->r[5]=c->r[31]+0x000008C0u; // 800DB020
  c->r[4]=0u+0x00000600u; // 800DB024
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DB028
  c->lr=0x800DB030u; f_800F13A0(c); // 800DB02C
L_800DB030:;
  c->r[3]=0u+0x00000009u; // 800DB030
  goto L_800DB1DC; // 800DB034
L_800DB038:;
  c->r[3]=0u+0x00000004u; // 800DB038
  c->lr=0x800DB040u; f_800CDDE0(c); // 800DB03C
  cmps(c,0,(int32_t)c->r[3],0); // 800DB040
  if (crb(c,2)) { goto L_800DB060; } // 800DB044
  c->r[6]=R32(c->r[18]+0x0000009Cu); // 800DB048
  c->r[3]=c->r[31]+0x00000000u; // 800DB04C
  c->r[5]=c->r[31]+0x00000900u; // 800DB050
  c->r[4]=0u+0x00000609u; // 800DB054
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DB058
  c->lr=0x800DB060u; f_800F13A0(c); // 800DB05C
L_800DB060:;
  c->r[3]=c->r[18]|c->r[18]; // 800DB060
  c->r[4]=0u+0x00000000u; // 800DB064
  c->lr=0x800DB06Cu; f_800CAA70(c); // 800DB068
  c->r[4]=R32(c->r[23]+0x00000030u); // 800DB06C
  c->r[3]=c->r[24]|c->r[24]; // 800DB070
  c->r[5]=R32(c->r[1]+0x00000008u); // 800DB074
  c->r[6]=c->r[23]+0x00000020u; // 800DB078
  c->lr=0x800DB080u; f_800D3CB0(c); // 800DB07C
  goto L_800DB08C; // 800DB080
L_800DB084:;
  c->r[3]=0u+0x000000FFu; // 800DB084
  goto L_800DB1DC; // 800DB088
L_800DB08C:;
  cmps(c,0,(int32_t)c->r[3],0); // 800DB08C
  if (!crb(c,2)) { IRQCHK(c); goto L_800DAF20; } // 800DB090
  cmps(c,0,(int32_t)c->r[24],0); // 800DB094
  if (!crb(c,2)) { goto L_800DB0B0; } // 800DB098
  c->r[3]=c->r[31]+0x00000000u; // 800DB09C
  c->r[5]=c->r[31]+0x0000093Cu; // 800DB0A0
  c->r[4]=0u+0x00000716u; // 800DB0A4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DB0A8
  c->lr=0x800DB0B0u; f_800F1300(c); // 800DB0AC
L_800DB0B0:;
  cmps(c,0,(int32_t)c->r[25],0); // 800DB0B0
  if (!crb(c,2)) { goto L_800DB0CC; } // 800DB0B4
  c->r[3]=c->r[31]+0x00000000u; // 800DB0B8
  c->r[5]=c->r[31]+0x00000964u; // 800DB0BC
  c->r[4]=0u+0x00000717u; // 800DB0C0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DB0C4
  c->lr=0x800DB0CCu; f_800F1300(c); // 800DB0C8
L_800DB0CC:;
  c->r[4]=R32(c->r[25]+0x00000010u); // 800DB0CC
  c->r[0]=0u+0x43300000u; // 800DB0D0
  W32(c->r[1]+0x00000028u,c->r[0]); // 800DB0D4
  c->r[3]=c->r[24]|c->r[24]; // 800DB0D8
  c->r[0]=c->r[4]^0x80000000u; // 800DB0DC
  {uint32_t ea=c->r[2]+0xFFFF9B60u; c->f[2]=RF64(ea);} // 800DB0E0
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800DB0E4
  {uint32_t ea=c->r[2]+0xFFFF9B58u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DB0E8
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=RF64(ea);} // 800DB0EC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800DB0F0
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 800DB0F4
  c->lr=0x800DB0FCu; f_800CBEF0(c); // 800DB0F8
  c->r[4]=R32(c->r[25]+0x00000014u); // 800DB0FC
  c->r[3]=c->r[24]|c->r[24]; // 800DB100
  c->lr=0x800DB108u; f_800CC070(c); // 800DB104
  c->r[4]=R32(c->r[25]+0x00000018u); // 800DB108
  c->r[3]=c->r[24]|c->r[24]; // 800DB10C
  c->lr=0x800DB114u; f_800CC0B0(c); // 800DB110
  c->r[4]=R32(c->r[25]+0x0000001Cu); // 800DB114
  c->r[3]=c->r[24]|c->r[24]; // 800DB118
  c->lr=0x800DB120u; f_800CC0F0(c); // 800DB11C
  c->r[4]=R32(c->r[26]+0x0000000Cu); // 800DB120
  c->r[3]=c->r[24]|c->r[24]; // 800DB124
  c->lr=0x800DB12Cu; f_800D4180(c); // 800DB128
  c->r[4]=R8(c->r[26]+0x00000010u); // 800DB12C
  c->r[3]=c->r[24]|c->r[24]; // 800DB130
  c->lr=0x800DB138u; f_800D4200(c); // 800DB134
  c->r[4]=R32(c->r[23]+0x00000034u); // 800DB138
  c->r[3]=c->r[24]|c->r[24]; // 800DB13C
  c->r[5]=R32(c->r[23]+0x00000038u); // 800DB140
  c->lr=0x800DB148u; f_800D4210(c); // 800DB144
  cmps(c,0,(int32_t)c->r[27],0); // 800DB148
  if (crb(c,2)) { goto L_800DB164; } // 800DB14C
  cmps(c,0,(int32_t)c->r[27],1); // 800DB150
  if (crb(c,2)) { goto L_800DB16C; } // 800DB154
  cmps(c,0,(int32_t)c->r[27],2); // 800DB158
  if (crb(c,2)) { goto L_800DB174; } // 800DB15C
  goto L_800DB180; // 800DB160
L_800DB164:;
  c->r[16]=0u+0x00000001u; // 800DB164
  goto L_800DB188; // 800DB168
L_800DB16C:;
  c->r[16]=0u+0x00000000u; // 800DB16C
  goto L_800DB188; // 800DB170
L_800DB174:;
  c->r[16]=0u+0x00000000u; // 800DB174
  c->r[28]=0u+0x00000000u; // 800DB178
  goto L_800DB188; // 800DB17C
L_800DB180:;
  c->r[16]=0u+0x00000000u; // 800DB180
  c->r[28]=0u+0x00000000u; // 800DB184
L_800DB188:;
  cmps(c,0,(int32_t)c->r[30],0); // 800DB188
  if (crb(c,2)) { goto L_800DB1C0; } // 800DB18C
  c->r[4]=c->r[30]|c->r[30]; // 800DB190
  c->r[3]=c->r[1]+0x00000010u; // 800DB194
  c->lr=0x800DB19Cu; f_800D1FD0(c); // 800DB198
  c->r[3]=c->r[1]+0x00000010u; // 800DB19C
  c->lr=0x800DB1A4u; f_800D2130(c); // 800DB1A0
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 800DB1A4
  c->r[4]=c->r[3]|c->r[3]; // 800DB1A8
  c->r[3]=c->r[24]|c->r[24]; // 800DB1AC
  c->r[6]=c->r[16]|c->r[16]; // 800DB1B0
  c->r[7]=c->r[28]|c->r[28]; // 800DB1B4
  c->lr=0x800DB1BCu; f_800D3D60(c); // 800DB1B8
  goto L_800DB1D8; // 800DB1BC
L_800DB1C0:;
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 800DB1C0
  c->r[3]=c->r[24]|c->r[24]; // 800DB1C4
  c->r[4]=c->r[29]|c->r[29]; // 800DB1C8
  c->r[6]=c->r[16]|c->r[16]; // 800DB1CC
  c->r[7]=c->r[28]|c->r[28]; // 800DB1D0
  c->lr=0x800DB1D8u; f_800D3E00(c); // 800DB1D4
L_800DB1D8:;
  c->r[3]=0u+0x00000000u; // 800DB1D8
L_800DB1DC:;
  c->r[11]=c->r[1]+0x00000070u; // 800DB1DC
  c->lr=0x800DB1E4u; { c->r[16]=R32(c->r[11]+0xFFFFFFC0u); c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800DB1E0
  c->r[0]=R32(c->r[1]+0x00000074u); // 800DB1E4
  c->lr=c->r[0]; // 800DB1E8
  c->r[1]=c->r[1]+0x00000070u; // 800DB1EC
  return; // 800DB1F0
}

// fn_800DB200
void f_800DB200(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB200
  c->r[0]=c->lr; // 800DB204
  W32(c->r[1]+0x00000054u,c->r[0]); // 800DB208
  c->r[11]=c->r[1]+0x00000050u; // 800DB20C
  c->lr=0x800DB214u; { W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800DB210
  c->r[31]=c->r[5]|c->r[5]; // 800DB214
  c->r[21]=0u+0x80250000u; // 800DB218
  c->r[29]=c->r[3]|c->r[3]; // 800DB21C
  c->r[30]=c->r[4]|c->r[4]; // 800DB220
  c->r[18]=c->r[6]|c->r[6]; // 800DB224
  c->r[5]=R16(c->r[6]+0x00000004u); // 800DB228
  c->r[6]=R16(c->r[6]+0x00000006u); // 800DB22C
  c->r[19]=c->r[7]|c->r[7]; // 800DB230
  c->r[20]=c->r[8]|c->r[8]; // 800DB234
  c->r[3]=c->r[30]|c->r[30]; // 800DB238
  c->r[21]=c->r[21]+0x00007D20u; // 800DB23C
  c->r[4]=c->r[29]+0x000000C8u; // 800DB240
  c->lr=0x800DB248u; f_800E1FE0(c); // 800DB244
  c->r[22]=0u+0x80260000u; // 800DB248
  c->r[23]=0u+0x80260000u; // 800DB24C
  c->r[25]=0u+0x80260000u; // 800DB250
  c->r[26]=0u+0x80260000u; // 800DB254
  c->r[27]=0u+0x80260000u; // 800DB258
  c->r[28]=0u+0x80260000u; // 800DB25C
  goto L_800DB398; // 800DB260
L_800DB264:;
  cmps(c,0,(int32_t)c->r[3],1); // 800DB264
  if (!crb(c,2)) { goto L_800DB390; } // 800DB268
  c->r[0]=R32(c->r[29]+0x00000070u); // 800DB26C
  cmpu(c,0,c->r[0],0x00000001u); // 800DB270
  if (!crb(c,2)) { goto L_800DB2A8; } // 800DB274
  c->r[3]=0u+0x00000004u; // 800DB278
  c->lr=0x800DB280u; f_800CDDE0(c); // 800DB27C
  cmps(c,0,(int32_t)c->r[3],0); // 800DB280
  if (crb(c,2)) { goto L_800DB2A0; } // 800DB284
  c->r[6]=R32(c->r[30]+0x0000009Cu); // 800DB288
  c->r[3]=c->r[21]+0x00000000u; // 800DB28C
  c->r[5]=c->r[21]+0x00000990u; // 800DB290
  c->r[4]=0u+0x00000670u; // 800DB294
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DB298
  c->lr=0x800DB2A0u; f_800F13A0(c); // 800DB29C
L_800DB2A0:;
  c->r[3]=0u+0x00000009u; // 800DB2A0
  goto L_800DB4D4; // 800DB2A4
L_800DB2A8:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DB2A8
  if (!crb(c,2)) { goto L_800DB2B8; } // 800DB2AC
  c->r[24]=0u+0x00000000u; // 800DB2B0
  goto L_800DB30C; // 800DB2B4
L_800DB2B8:;
  if (!crb(c,2)) { goto L_800DB2D0; } // 800DB2B8
  c->r[3]=c->r[22]+0xFFFF8AACu; // 800DB2BC
  c->r[5]=c->r[23]+0xFFFF8A88u; // 800DB2C0
  c->r[4]=0u+0x000001F1u; // 800DB2C4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DB2C8
  c->lr=0x800DB2D0u; f_800F1300(c); // 800DB2CC
L_800DB2D0:;
  c->r[24]=R32(c->r[29]+0x00000074u); // 800DB2D0
  cmps(c,0,(int32_t)c->r[24],0); // 800DB2D4
  if (!crb(c,2)) { goto L_800DB2F0; } // 800DB2D8
  c->r[3]=c->r[25]+0xFFFF8A4Cu; // 800DB2DC
  c->r[5]=c->r[26]+0xFFFF8A28u; // 800DB2E0
  c->r[4]=0u+0x0000023Du; // 800DB2E4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DB2E8
  c->lr=0x800DB2F0u; f_800F1300(c); // 800DB2EC
L_800DB2F0:;
  c->r[24]=addc(c,c->r[24],0xFFFFFF10u,0); cr0(c,c->r[24]); // 800DB2F0
  if (!crb(c,2)) { goto L_800DB30C; } // 800DB2F4
  c->r[3]=c->r[27]+0xFFFF8A7Cu; // 800DB2F8
  c->r[5]=c->r[28]+0xFFFF8A58u; // 800DB2FC
  c->r[4]=0u+0x00000193u; // 800DB300
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DB304
  c->lr=0x800DB30Cu; f_800F1300(c); // 800DB308
L_800DB30C:;
  cmpu(c,0,c->r[30],c->r[24]); // 800DB30C
  if (!crb(c,2)) { goto L_800DB344; } // 800DB310
  c->r[3]=0u+0x00000004u; // 800DB314
  c->lr=0x800DB31Cu; f_800CDDE0(c); // 800DB318
  cmps(c,0,(int32_t)c->r[3],0); // 800DB31C
  if (crb(c,2)) { goto L_800DB33C; } // 800DB320
  c->r[6]=R32(c->r[30]+0x0000009Cu); // 800DB324
  c->r[3]=c->r[21]+0x00000000u; // 800DB328
  c->r[5]=c->r[21]+0x00000990u; // 800DB32C
  c->r[4]=0u+0x0000067Cu; // 800DB330
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DB334
  c->lr=0x800DB33Cu; f_800F13A0(c); // 800DB338
L_800DB33C:;
  c->r[3]=0u+0x00000009u; // 800DB33C
  goto L_800DB4D4; // 800DB340
L_800DB344:;
  c->r[3]=0u+0x00000005u; // 800DB344
  c->lr=0x800DB34Cu; f_800CDDE0(c); // 800DB348
  cmps(c,0,(int32_t)c->r[3],0); // 800DB34C
  if (crb(c,2)) { goto L_800DB36C; } // 800DB350
  c->r[6]=R32(c->r[24]+0x0000009Cu); // 800DB354
  c->r[3]=c->r[21]+0x00000000u; // 800DB358
  c->r[5]=c->r[21]+0x000009D4u; // 800DB35C
  c->r[4]=0u+0x00000685u; // 800DB360
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DB364
  c->lr=0x800DB36Cu; f_800F13A0(c); // 800DB368
L_800DB36C:;
  c->r[3]=c->r[24]|c->r[24]; // 800DB36C
  c->r[4]=0u+0x00000000u; // 800DB370
  c->lr=0x800DB378u; f_800CAA70(c); // 800DB374
  c->r[5]=R16(c->r[18]+0x00000004u); // 800DB378
  c->r[3]=c->r[30]|c->r[30]; // 800DB37C
  c->r[6]=R16(c->r[18]+0x00000006u); // 800DB380
  c->r[4]=c->r[29]+0x000000C8u; // 800DB384
  c->lr=0x800DB38Cu; f_800E1FE0(c); // 800DB388
  goto L_800DB398; // 800DB38C
L_800DB390:;
  c->r[3]=0u+0x000000FFu; // 800DB390
  goto L_800DB4D4; // 800DB394
L_800DB398:;
  cmps(c,0,(int32_t)c->r[3],0); // 800DB398
  if (!crb(c,2)) { IRQCHK(c); goto L_800DB264; } // 800DB39C
  cmps(c,0,(int32_t)c->r[19],0); // 800DB3A0
  if (crb(c,2)) { goto L_800DB3BC; } // 800DB3A4
  cmps(c,0,(int32_t)c->r[19],1); // 800DB3A8
  if (crb(c,2)) { goto L_800DB3C4; } // 800DB3AC
  cmps(c,0,(int32_t)c->r[19],2); // 800DB3B0
  if (crb(c,2)) { goto L_800DB3D0; } // 800DB3B4
  goto L_800DB3D8; // 800DB3B8
L_800DB3BC:;
  c->r[23]=0u+0x00000001u; // 800DB3BC
  goto L_800DB3E0; // 800DB3C0
L_800DB3C4:;
  c->r[23]=0u+0x00000000u; // 800DB3C4
  c->r[20]=0u+0x00000000u; // 800DB3C8
  goto L_800DB3E0; // 800DB3CC
L_800DB3D0:;
  c->r[23]=0u+0x00000000u; // 800DB3D0
  goto L_800DB3E0; // 800DB3D4
L_800DB3D8:;
  c->r[23]=0u+0x00000000u; // 800DB3D8
  c->r[20]=0u+0x00000000u; // 800DB3DC
L_800DB3E0:;
  c->r[22]=addc(c,c->r[30],0x00000EB4u,0); cr0(c,c->r[22]); // 800DB3E0
  if (!crb(c,2)) { goto L_800DB3FC; } // 800DB3E4
  c->r[3]=c->r[21]+0x00000000u; // 800DB3E8
  c->r[5]=c->r[21]+0x00000888u; // 800DB3EC
  c->r[4]=0u+0x000006A8u; // 800DB3F0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DB3F4
  c->lr=0x800DB3FCu; f_800F1300(c); // 800DB3F8
L_800DB3FC:;
  c->r[3]=R32(c->r[29]+0x00000010u); // 800DB3FC
  c->r[5]=c->r[22]|c->r[22]; // 800DB400
  c->r[4]=R32(c->r[31]+0x00000000u); // 800DB404
  c->r[6]=0u+0x00000200u; // 800DB408
  c->lr=0x800DB410u; f_800D6130(c); // 800DB40C
  cmps(c,0,(int32_t)c->r[3],0); // 800DB410
  c->r[6]=c->r[3]|c->r[3]; // 800DB414
  if (!crb(c,2)) { goto L_800DB424; } // 800DB418
  c->r[3]=0u+0x00000006u; // 800DB41C
  goto L_800DB4D4; // 800DB420
L_800DB424:;
  c->r[3]=c->r[30]|c->r[30]; // 800DB424
  c->r[4]=c->r[23]|c->r[23]; // 800DB428
  c->r[5]=c->r[20]|c->r[20]; // 800DB42C
  c->lr=0x800DB434u; f_800E2090(c); // 800DB430
  cmps(c,0,(int32_t)c->r[3],0); // 800DB434
  if (!crb(c,2)) { goto L_800DB444; } // 800DB438
  c->r[3]=0u+0x000000FFu; // 800DB43C
  goto L_800DB4D4; // 800DB440
L_800DB444:;
  cmps(c,0,(int32_t)c->r[30],0); // 800DB444
  if (!crb(c,2)) { goto L_800DB460; } // 800DB448
  c->r[3]=c->r[21]+0x00000000u; // 800DB44C
  c->r[5]=c->r[21]+0x0000093Cu; // 800DB450
  c->r[4]=0u+0x00000716u; // 800DB454
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DB458
  c->lr=0x800DB460u; f_800F1300(c); // 800DB45C
L_800DB460:;
  cmps(c,0,(int32_t)c->r[31],0); // 800DB460
  if (!crb(c,2)) { goto L_800DB47C; } // 800DB464
  c->r[3]=c->r[21]+0x00000000u; // 800DB468
  c->r[5]=c->r[21]+0x00000964u; // 800DB46C
  c->r[4]=0u+0x00000717u; // 800DB470
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DB474
  c->lr=0x800DB47Cu; f_800F1300(c); // 800DB478
L_800DB47C:;
  c->r[4]=R32(c->r[31]+0x00000010u); // 800DB47C
  c->r[0]=0u+0x43300000u; // 800DB480
  W32(c->r[1]+0x00000008u,c->r[0]); // 800DB484
  c->r[3]=c->r[30]|c->r[30]; // 800DB488
  c->r[0]=c->r[4]^0x80000000u; // 800DB48C
  {uint32_t ea=c->r[2]+0xFFFF9B60u; c->f[2]=RF64(ea);} // 800DB490
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800DB494
  {uint32_t ea=c->r[2]+0xFFFF9B58u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DB498
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 800DB49C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800DB4A0
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 800DB4A4
  c->lr=0x800DB4ACu; f_800CBEF0(c); // 800DB4A8
  c->r[4]=R32(c->r[31]+0x00000014u); // 800DB4AC
  c->r[3]=c->r[30]|c->r[30]; // 800DB4B0
  c->lr=0x800DB4B8u; f_800CC070(c); // 800DB4B4
  c->r[4]=R32(c->r[31]+0x00000018u); // 800DB4B8
  c->r[3]=c->r[30]|c->r[30]; // 800DB4BC
  c->lr=0x800DB4C4u; f_800CC0B0(c); // 800DB4C0
  c->r[4]=R32(c->r[31]+0x0000001Cu); // 800DB4C4
  c->r[3]=c->r[30]|c->r[30]; // 800DB4C8
  c->lr=0x800DB4D0u; f_800CC0F0(c); // 800DB4CC
  c->r[3]=0u+0x00000000u; // 800DB4D0
L_800DB4D4:;
  c->r[11]=c->r[1]+0x00000050u; // 800DB4D4
  c->lr=0x800DB4DCu; { c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800DB4D8
  c->r[0]=R32(c->r[1]+0x00000054u); // 800DB4DC
  c->lr=c->r[0]; // 800DB4E0
  c->r[1]=c->r[1]+0x00000050u; // 800DB4E4
  return; // 800DB4E8
}

// fn_800DB4F0
void f_800DB4F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB4F0
  c->r[0]=c->lr; // 800DB4F4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800DB4F8
  c->r[11]=c->r[1]+0x00000030u; // 800DB4FC
  c->lr=0x800DB504u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800DB500
  cmps(c,0,(int32_t)c->r[6],0); // 800DB504
  c->r[31]=0u+0x80250000u; // 800DB508
  c->r[25]=c->r[3]|c->r[3]; // 800DB50C
  c->r[26]=c->r[4]|c->r[4]; // 800DB510
  c->r[27]=c->r[5]|c->r[5]; // 800DB514
  c->r[28]=c->r[6]|c->r[6]; // 800DB518
  c->r[29]=c->r[7]|c->r[7]; // 800DB51C
  c->r[30]=c->r[8]|c->r[8]; // 800DB520
  c->r[31]=c->r[31]+0x00007D20u; // 800DB524
  if (!crb(c,2)) { goto L_800DB540; } // 800DB528
  c->r[3]=c->r[31]+0x00000000u; // 800DB52C
  c->r[5]=c->r[31]+0x00000860u; // 800DB530
  c->r[4]=0u+0x000006D7u; // 800DB534
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DB538
  c->lr=0x800DB540u; f_800F1300(c); // 800DB53C
L_800DB540:;
  c->r[4]=R32(c->r[27]+0x00000000u); // 800DB540
  c->r[3]=c->r[25]|c->r[25]; // 800DB544
  c->lr=0x800DB54Cu; f_800D9AD0(c); // 800DB548
  cmps(c,0,(int32_t)c->r[3],0); // 800DB54C
  c->r[4]=c->r[3]|c->r[3]; // 800DB550
  if (!crb(c,2)) { goto L_800DB560; } // 800DB554
  c->r[3]=0u+0x00000004u; // 800DB558
  goto L_800DB670; // 800DB55C
L_800DB560:;
  cmps(c,0,(int32_t)c->r[29],0); // 800DB560
  if (crb(c,2)) { goto L_800DB57C; } // 800DB564
  cmps(c,0,(int32_t)c->r[29],1); // 800DB568
  if (crb(c,2)) { goto L_800DB584; } // 800DB56C
  cmps(c,0,(int32_t)c->r[29],2); // 800DB570
  if (crb(c,2)) { goto L_800DB590; } // 800DB574
  goto L_800DB598; // 800DB578
L_800DB57C:;
  c->r[6]=0u+0x00000001u; // 800DB57C
  goto L_800DB5A0; // 800DB580
L_800DB584:;
  c->r[6]=0u+0x00000000u; // 800DB584
  c->r[30]=0u+0x00000000u; // 800DB588
  goto L_800DB5A0; // 800DB58C
L_800DB590:;
  c->r[6]=0u+0x00000000u; // 800DB590
  goto L_800DB5A0; // 800DB594
L_800DB598:;
  c->r[6]=0u+0x00000000u; // 800DB598
  c->r[30]=0u+0x00000000u; // 800DB59C
L_800DB5A0:;
  c->r[5]=R32(c->r[28]+0x00000000u); // 800DB5A0
  c->r[3]=c->r[26]|c->r[26]; // 800DB5A4
  c->r[9]=R32(c->r[27]+0x00000000u); // 800DB5A8
  c->r[7]=c->r[30]|c->r[30]; // 800DB5AC
  c->r[8]=c->r[25]+0x00000028u; // 800DB5B0
  c->lr=0x800DB5B8u; f_800E78C0(c); // 800DB5B4
  cmps(c,0,(int32_t)c->r[3],0); // 800DB5B8
  if (!crb(c,2)) { goto L_800DB5C8; } // 800DB5BC
  c->r[3]=0u+0x000000FFu; // 800DB5C0
  goto L_800DB670; // 800DB5C4
L_800DB5C8:;
  cmps(c,0,(int32_t)c->r[26],0); // 800DB5C8
  if (!crb(c,2)) { goto L_800DB5E4; } // 800DB5CC
  c->r[3]=c->r[31]+0x00000000u; // 800DB5D0
  c->r[5]=c->r[31]+0x0000093Cu; // 800DB5D4
  c->r[4]=0u+0x00000716u; // 800DB5D8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DB5DC
  c->lr=0x800DB5E4u; f_800F1300(c); // 800DB5E0
L_800DB5E4:;
  cmps(c,0,(int32_t)c->r[27],0); // 800DB5E4
  if (!crb(c,2)) { goto L_800DB600; } // 800DB5E8
  c->r[3]=c->r[31]+0x00000000u; // 800DB5EC
  c->r[5]=c->r[31]+0x00000964u; // 800DB5F0
  c->r[4]=0u+0x00000717u; // 800DB5F4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DB5F8
  c->lr=0x800DB600u; f_800F1300(c); // 800DB5FC
L_800DB600:;
  c->r[4]=R32(c->r[27]+0x00000010u); // 800DB600
  c->r[0]=0u+0x43300000u; // 800DB604
  W32(c->r[1]+0x00000008u,c->r[0]); // 800DB608
  c->r[3]=c->r[26]|c->r[26]; // 800DB60C
  c->r[0]=c->r[4]^0x80000000u; // 800DB610
  {uint32_t ea=c->r[2]+0xFFFF9B60u; c->f[2]=RF64(ea);} // 800DB614
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800DB618
  {uint32_t ea=c->r[2]+0xFFFF9B58u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DB61C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 800DB620
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800DB624
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 800DB628
  c->lr=0x800DB630u; f_800CBEF0(c); // 800DB62C
  c->r[4]=R32(c->r[27]+0x00000014u); // 800DB630
  c->r[3]=c->r[26]|c->r[26]; // 800DB634
  c->lr=0x800DB63Cu; f_800CC070(c); // 800DB638
  c->r[4]=R32(c->r[27]+0x00000018u); // 800DB63C
  c->r[3]=c->r[26]|c->r[26]; // 800DB640
  c->lr=0x800DB648u; f_800CC0B0(c); // 800DB644
  c->r[4]=R32(c->r[27]+0x0000001Cu); // 800DB648
  c->r[3]=c->r[26]|c->r[26]; // 800DB64C
  c->lr=0x800DB654u; f_800CC0F0(c); // 800DB650
  c->r[4]=R32(c->r[28]+0x00000004u); // 800DB654
  c->r[3]=c->r[26]|c->r[26]; // 800DB658
  c->lr=0x800DB660u; f_800E7AE0(c); // 800DB65C
  c->r[4]=R8(c->r[28]+0x00000008u); // 800DB660
  c->r[3]=c->r[26]|c->r[26]; // 800DB664
  c->lr=0x800DB66Cu; f_800E7B60(c); // 800DB668
  c->r[3]=0u+0x00000000u; // 800DB66C
L_800DB670:;
  c->r[11]=c->r[1]+0x00000030u; // 800DB670
  c->lr=0x800DB678u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800DB674
  c->r[0]=R32(c->r[1]+0x00000034u); // 800DB678
  c->lr=c->r[0]; // 800DB67C
  c->r[1]=c->r[1]+0x00000030u; // 800DB680
  return; // 800DB684
}

// fn_800DB690
void f_800DB690(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFDB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB690
  c->r[0]=c->lr; // 800DB694
  W32(c->r[1]+0x00000254u,c->r[0]); // 800DB698
  c->r[11]=c->r[1]+0x00000250u; // 800DB69C
  c->lr=0x800DB6A4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800DB6A0
  c->r[0]=R32(c->r[3]+0x00000010u); // 800DB6A4
  c->r[28]=0u+0x80250000u; // 800DB6A8
  c->r[30]=c->r[3]|c->r[3]; // 800DB6AC
  c->r[31]=c->r[4]|c->r[4]; // 800DB6B0
  cmps(c,0,(int32_t)c->r[0],0); // 800DB6B4
  c->r[27]=c->r[5]|c->r[5]; // 800DB6B8
  c->r[29]=c->r[6]|c->r[6]; // 800DB6BC
  c->r[28]=c->r[28]+0x00007D20u; // 800DB6C0
  if (!crb(c,2)) { goto L_800DB6DC; } // 800DB6C4
  c->r[3]=c->r[28]+0x00000000u; // 800DB6C8
  c->r[5]=c->r[28]+0x000002F8u; // 800DB6CC
  c->r[4]=0u+0x0000072Fu; // 800DB6D0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DB6D4
  c->lr=0x800DB6DCu; f_800F1300(c); // 800DB6D8
L_800DB6DC:;
  c->r[0]=rotl(c->r[29],0)&0x0000001Fu; cr0(c,c->r[0]); // 800DB6DC
  if (crb(c,2)) { goto L_800DB6FC; } // 800DB6E0
  c->r[6]=c->r[29]|c->r[29]; // 800DB6E4
  c->r[3]=c->r[28]+0x00000000u; // 800DB6E8
  c->r[5]=c->r[28]+0x00000A14u; // 800DB6EC
  c->r[4]=0u+0x00000730u; // 800DB6F0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DB6F4
  c->lr=0x800DB6FCu; f_800F1300(c); // 800DB6F8
L_800DB6FC:;
  c->r[3]=R32(c->r[30]+0x00000010u); // 800DB6FC
  cmps(c,0,(int32_t)c->r[3],0); // 800DB700
  if (!crb(c,2)) { goto L_800DB710; } // 800DB704
  c->r[3]=0u+0x00000000u; // 800DB708
  goto L_800DB714; // 800DB70C
L_800DB710:;
  c->lr=0x800DB714u; f_800D5F90(c); // 800DB710
L_800DB714:;
  cmps(c,0,(int32_t)c->r[3],0); // 800DB714
  if (!crb(c,2)) { goto L_800DB724; } // 800DB718
  c->r[3]=0u+0x00000000u; // 800DB71C
  goto L_800DB8C0; // 800DB720
L_800DB724:;
  c->r[3]=R32(c->r[30]+0x00000010u); // 800DB724
  c->lr=0x800DB72Cu; f_800D6040(c); // 800DB728
  cmpu(c,0,c->r[31],c->r[3]); // 800DB72C
  if (crb(c,0)) { goto L_800DB73C; } // 800DB730
  c->r[3]=0u+0x00000000u; // 800DB734
  goto L_800DB8C0; // 800DB738
L_800DB73C:;
  c->r[3]=R32(c->r[30]+0x00000014u); // 800DB73C
  cmps(c,0,(int32_t)c->r[3],0); // 800DB740
  if (!crb(c,2)) { goto L_800DB768; } // 800DB744
  if (!crb(c,2)) { goto L_800DB760; } // 800DB748
  c->r[3]=c->r[28]+0x00000000u; // 800DB74C
  c->r[5]=c->r[28]+0x0000037Cu; // 800DB750
  c->r[4]=0u+0x00000348u; // 800DB754
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DB758
  c->lr=0x800DB760u; f_800F13A0(c); // 800DB75C
L_800DB760:;
  c->r[0]=0u+0x00000000u; // 800DB760
  goto L_800DB788; // 800DB764
L_800DB768:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DB768
  cmpu(c,0,c->r[31],c->r[0]); // 800DB76C
  if (crb(c,0)) { goto L_800DB77C; } // 800DB770
  c->r[0]=0u+0x00000000u; // 800DB774
  goto L_800DB788; // 800DB778
L_800DB77C:;
  c->r[0]=rotl(c->r[31],3)&0xFFFFFFF8u; // 800DB77C
  c->r[3]=c->r[3]+c->r[0]; // 800DB780
  c->r[0]=R32(c->r[3]+0x00000004u); // 800DB784
L_800DB788:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DB788
  if (crb(c,2)) { goto L_800DB798; } // 800DB78C
  c->r[3]=0u+0x00000001u; // 800DB790
  goto L_800DB8C0; // 800DB794
L_800DB798:;
  cmps(c,0,(int32_t)c->r[27],0); // 800DB798
  if (!crb(c,2)) { goto L_800DB7A8; } // 800DB79C
  c->r[3]=0u+0x00000000u; // 800DB7A0
  goto L_800DB8C0; // 800DB7A4
L_800DB7A8:;
  c->r[4]=R32(c->r[30]+0x00000010u); // 800DB7A8
  c->r[3]=c->r[1]+0x00000010u; // 800DB7AC
  c->lr=0x800DB7B4u; f_800D7D70(c); // 800DB7B0
  c->r[4]=c->r[31]|c->r[31]; // 800DB7B4
  c->r[5]=c->r[27]|c->r[27]; // 800DB7B8
  c->r[7]=c->r[29]|c->r[29]; // 800DB7BC
  c->r[3]=c->r[1]+0x00000010u; // 800DB7C0
  c->r[6]=c->r[1]+0x00000008u; // 800DB7C4
  c->lr=0x800DB7CCu; f_800D7DF0(c); // 800DB7C8
  cmps(c,0,(int32_t)c->r[3],0); // 800DB7CC
  c->r[29]=c->r[3]|c->r[3]; // 800DB7D0
  if (!crb(c,2)) { goto L_800DB7EC; } // 800DB7D4
  c->r[3]=c->r[1]+0x00000010u; // 800DB7D8
  c->r[4]=0u+0xFFFFFFFFu; // 800DB7DC
  c->lr=0x800DB7E4u; f_800D7DB0(c); // 800DB7E0
  c->r[3]=0u+0x00000000u; // 800DB7E4
  goto L_800DB8C0; // 800DB7E8
L_800DB7EC:;
  c->r[3]=R32(c->r[30]+0x00000014u); // 800DB7EC
  cmps(c,0,(int32_t)c->r[3],0); // 800DB7F0
  if (!crb(c,2)) { goto L_800DB814; } // 800DB7F4
  if (!crb(c,2)) { goto L_800DB84C; } // 800DB7F8
  c->r[3]=c->r[28]+0x00000000u; // 800DB7FC
  c->r[5]=c->r[28]+0x00000490u; // 800DB800
  c->r[4]=0u+0x00000362u; // 800DB804
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DB808
  c->lr=0x800DB810u; f_800F13A0(c); // 800DB80C
  goto L_800DB84C; // 800DB810
L_800DB814:;
  c->r[8]=R32(c->r[3]+0x00000000u); // 800DB814
  cmpu(c,0,c->r[31],c->r[8]); // 800DB818
  if (crb(c,0)) { goto L_800DB83C; } // 800DB81C
  c->r[6]=c->r[31]|c->r[31]; // 800DB820
  c->r[3]=c->r[28]+0x00000000u; // 800DB824
  c->r[5]=c->r[28]+0x000004E8u; // 800DB828
  c->r[4]=0u+0x00000366u; // 800DB82C
  c->r[7]=0u+0x00000000u; // 800DB830
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DB834
  c->lr=0x800DB83Cu; f_800F1300(c); // 800DB838
L_800DB83C:;
  c->r[3]=R32(c->r[30]+0x00000014u); // 800DB83C
  c->r[0]=rotl(c->r[31],3)&0xFFFFFFF8u; // 800DB840
  c->r[3]=c->r[3]+c->r[0]; // 800DB844
  W32(c->r[3]+0x00000004u,c->r[29]); // 800DB848
L_800DB84C:;
  c->r[3]=R32(c->r[30]+0x00000014u); // 800DB84C
  c->r[29]=R32(c->r[1]+0x00000008u); // 800DB850
  cmps(c,0,(int32_t)c->r[3],0); // 800DB854
  if (!crb(c,2)) { goto L_800DB878; } // 800DB858
  if (!crb(c,2)) { goto L_800DB8B0; } // 800DB85C
  c->r[3]=c->r[28]+0x00000000u; // 800DB860
  c->r[5]=c->r[28]+0x00000528u; // 800DB864
  c->r[4]=0u+0x00000395u; // 800DB868
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DB86C
  c->lr=0x800DB874u; f_800F13A0(c); // 800DB870
  goto L_800DB8B0; // 800DB874
L_800DB878:;
  c->r[8]=R32(c->r[3]+0x00000000u); // 800DB878
  cmpu(c,0,c->r[31],c->r[8]); // 800DB87C
  if (crb(c,0)) { goto L_800DB8A0; } // 800DB880
  c->r[6]=c->r[31]|c->r[31]; // 800DB884
  c->r[3]=c->r[28]+0x00000000u; // 800DB888
  c->r[5]=c->r[28]+0x000004E8u; // 800DB88C
  c->r[4]=0u+0x00000399u; // 800DB890
  c->r[7]=0u+0x00000000u; // 800DB894
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DB898
  c->lr=0x800DB8A0u; f_800F1300(c); // 800DB89C
L_800DB8A0:;
  c->r[3]=R32(c->r[30]+0x00000014u); // 800DB8A0
  c->r[0]=rotl(c->r[31],3)&0xFFFFFFF8u; // 800DB8A4
  c->r[3]=c->r[3]+c->r[0]; // 800DB8A8
  W32(c->r[3]+0x00000008u,c->r[29]); // 800DB8AC
L_800DB8B0:;
  c->r[3]=c->r[1]+0x00000010u; // 800DB8B0
  c->r[4]=0u+0xFFFFFFFFu; // 800DB8B4
  c->lr=0x800DB8BCu; f_800D7DB0(c); // 800DB8B8
  c->r[3]=0u+0x00000001u; // 800DB8BC
L_800DB8C0:;
  c->r[11]=c->r[1]+0x00000250u; // 800DB8C0
  c->lr=0x800DB8C8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800DB8C4
  c->r[0]=R32(c->r[1]+0x00000254u); // 800DB8C8
  c->lr=c->r[0]; // 800DB8CC
  c->r[1]=c->r[1]+0x00000250u; // 800DB8D0
  return; // 800DB8D4
}

// fn_800DB8E0
void f_800DB8E0(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000018u); // 800DB8E0
  cmps(c,0,(int32_t)c->r[0],0); // 800DB8E4
  if (crb(c,2)) { goto L_800DB934; } // 800DB8E8
  c->r[9]=0u+0x00000000u; // 800DB8EC
  c->r[7]=0u+0x00000000u; // 800DB8F0
  c->r[6]=0u+0x00000000u; // 800DB8F4
  goto L_800DB924; // 800DB8F8
  c->r[0]=c->r[0]|0x00000000u; // 800DB8FC
L_800DB900:;
  c->r[8]=c->r[8]+c->r[7]; // 800DB900
  c->r[0]=R32(c->r[8]+0x00000004u); // 800DB904
  cmpu(c,0,c->r[4],c->r[0]); // 800DB908
  if (crb(c,1)) { goto L_800DB91C; } // 800DB90C
  cmpu(c,0,c->r[0],c->r[5]); // 800DB910
  if (crb(c,1)) { goto L_800DB91C; } // 800DB914
  W32(c->r[8]+0x00000004u,c->r[6]); // 800DB918
L_800DB91C:;
  c->r[7]=c->r[7]+0x00000008u; // 800DB91C
  c->r[9]=c->r[9]+0x00000001u; // 800DB920
L_800DB924:;
  c->r[8]=R32(c->r[3]+0x00000018u); // 800DB924
  c->r[0]=R32(c->r[8]+0x00000000u); // 800DB928
  cmpu(c,0,c->r[9],c->r[0]); // 800DB92C
  if (crb(c,0)) { IRQCHK(c); goto L_800DB900; } // 800DB930
L_800DB934:;
  c->r[0]=R32(c->r[3]+0x00000014u); // 800DB934
  cmps(c,0,(int32_t)c->r[0],0); // 800DB938
  if (crb(c,2)) return; // 800DB93C
  c->r[9]=0u+0x00000000u; // 800DB940
  c->r[7]=0u+0x00000000u; // 800DB944
  c->r[6]=0u+0x00000000u; // 800DB948
  goto L_800DB974; // 800DB94C
L_800DB950:;
  c->r[8]=c->r[8]+c->r[7]; // 800DB950
  c->r[0]=R32(c->r[8]+0x00000004u); // 800DB954
  cmpu(c,0,c->r[4],c->r[0]); // 800DB958
  if (crb(c,1)) { goto L_800DB96C; } // 800DB95C
  cmpu(c,0,c->r[0],c->r[5]); // 800DB960
  if (crb(c,1)) { goto L_800DB96C; } // 800DB964
  W32(c->r[8]+0x00000004u,c->r[6]); // 800DB968
L_800DB96C:;
  c->r[7]=c->r[7]+0x00000008u; // 800DB96C
  c->r[9]=c->r[9]+0x00000001u; // 800DB970
L_800DB974:;
  c->r[8]=R32(c->r[3]+0x00000014u); // 800DB974
  c->r[0]=R32(c->r[8]+0x00000000u); // 800DB978
  cmpu(c,0,c->r[9],c->r[0]); // 800DB97C
  if (crb(c,0)) { IRQCHK(c); goto L_800DB950; } // 800DB980
  return; // 800DB984
}

// fn_800DB990
void f_800DB990(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000018u); // 800DB990
  cmps(c,0,(int32_t)c->r[0],0); // 800DB994
  if (crb(c,2)) { goto L_800DB9E4; } // 800DB998
  c->r[9]=0u+0x00000000u; // 800DB99C
  c->r[7]=0u+0x00000000u; // 800DB9A0
  c->r[6]=0u+0x00000000u; // 800DB9A4
  goto L_800DB9D4; // 800DB9A8
  c->r[0]=c->r[0]|0x00000000u; // 800DB9AC
L_800DB9B0:;
  c->r[8]=c->r[8]+c->r[7]; // 800DB9B0
  c->r[0]=R32(c->r[8]+0x00000008u); // 800DB9B4
  cmpu(c,0,c->r[4],c->r[0]); // 800DB9B8
  if (crb(c,1)) { goto L_800DB9CC; } // 800DB9BC
  cmpu(c,0,c->r[0],c->r[5]); // 800DB9C0
  if (crb(c,1)) { goto L_800DB9CC; } // 800DB9C4
  W32(c->r[8]+0x00000008u,c->r[6]); // 800DB9C8
L_800DB9CC:;
  c->r[7]=c->r[7]+0x00000008u; // 800DB9CC
  c->r[9]=c->r[9]+0x00000001u; // 800DB9D0
L_800DB9D4:;
  c->r[8]=R32(c->r[3]+0x00000018u); // 800DB9D4
  c->r[0]=R32(c->r[8]+0x00000000u); // 800DB9D8
  cmpu(c,0,c->r[9],c->r[0]); // 800DB9DC
  if (crb(c,0)) { IRQCHK(c); goto L_800DB9B0; } // 800DB9E0
L_800DB9E4:;
  c->r[0]=R32(c->r[3]+0x00000014u); // 800DB9E4
  cmps(c,0,(int32_t)c->r[0],0); // 800DB9E8
  if (crb(c,2)) return; // 800DB9EC
  c->r[9]=0u+0x00000000u; // 800DB9F0
  c->r[7]=0u+0x00000000u; // 800DB9F4
  c->r[6]=0u+0x00000000u; // 800DB9F8
  goto L_800DBA24; // 800DB9FC
L_800DBA00:;
  c->r[8]=c->r[8]+c->r[7]; // 800DBA00
  c->r[0]=R32(c->r[8]+0x00000008u); // 800DBA04
  cmpu(c,0,c->r[4],c->r[0]); // 800DBA08
  if (crb(c,1)) { goto L_800DBA1C; } // 800DBA0C
  cmpu(c,0,c->r[0],c->r[5]); // 800DBA10
  if (crb(c,1)) { goto L_800DBA1C; } // 800DBA14
  W32(c->r[8]+0x00000008u,c->r[6]); // 800DBA18
L_800DBA1C:;
  c->r[7]=c->r[7]+0x00000008u; // 800DBA1C
  c->r[9]=c->r[9]+0x00000001u; // 800DBA20
L_800DBA24:;
  c->r[8]=R32(c->r[3]+0x00000014u); // 800DBA24
  c->r[0]=R32(c->r[8]+0x00000000u); // 800DBA28
  cmpu(c,0,c->r[9],c->r[0]); // 800DBA2C
  if (crb(c,0)) { IRQCHK(c); goto L_800DBA00; } // 800DBA30
  return; // 800DBA34
}

// fn_800DBA40
void f_800DBA40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DBA40
  c->r[0]=c->lr; // 800DBA44
  W32(c->r[1]+0x00000054u,c->r[0]); // 800DBA48
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800DBA4C
  W32(c->r[1]+0x00000048u,c->r[30]); // 800DBA50
  c->r[30]=c->r[6]|c->r[6]; // 800DBA54
  W32(c->r[1]+0x00000044u,c->r[29]); // 800DBA58
  c->r[29]=c->r[4]|c->r[4]; // 800DBA5C
  W32(c->r[1]+0x00000040u,c->r[28]); // 800DBA60
  c->r[28]=c->r[3]|c->r[3]; // 800DBA64
  c->r[5]=R32(c->r[3]+0x00000004u); // 800DBA68
  c->r[3]=R32(c->r[5]+0x00000010u); // 800DBA6C
  cmps(c,0,(int32_t)c->r[3],0); // 800DBA70
  if (!crb(c,2)) { goto L_800DBA80; } // 800DBA74
  c->r[3]=0u+0x00000000u; // 800DBA78
  goto L_800DBA84; // 800DBA7C
L_800DBA80:;
  c->lr=0x800DBA84u; f_800D5F90(c); // 800DBA80
L_800DBA84:;
  cmps(c,0,(int32_t)c->r[3],0); // 800DBA84
  if (!crb(c,2)) { goto L_800DBA94; } // 800DBA88
  c->r[3]=0u+0x00000000u; // 800DBA8C
  goto L_800DBB98; // 800DBA90
L_800DBA94:;
  c->r[31]=R32(c->r[28]+0x00000004u); // 800DBA94
  c->r[0]=R32(c->r[31]+0x00000010u); // 800DBA98
  cmps(c,0,(int32_t)c->r[0],0); // 800DBA9C
  if (!crb(c,2)) { goto L_800DBAC0; } // 800DBAA0
  c->r[3]=0u+0x80250000u; // 800DBAA4
  c->r[5]=0u+0x80260000u; // 800DBAA8
  c->r[3]=c->r[3]+0x00007D20u; // 800DBAAC
  c->r[4]=0u+0x000002B3u; // 800DBAB0
  c->r[5]=c->r[5]+0xFFFF8000u; // 800DBAB4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DBAB8
  c->lr=0x800DBAC0u; f_800F1300(c); // 800DBABC
L_800DBAC0:;
  c->r[31]=R32(c->r[31]+0x00000010u); // 800DBAC0
  c->r[5]=c->r[1]+0x00000020u; // 800DBAC4
  c->r[4]=R32(c->r[29]+0x000000B0u); // 800DBAC8
  c->r[3]=c->r[31]|c->r[31]; // 800DBACC
  c->lr=0x800DBAD4u; f_800D6080(c); // 800DBAD0
  cmps(c,0,(int32_t)c->r[3],0); // 800DBAD4
  if (!crb(c,2)) { goto L_800DBAE4; } // 800DBAD8
  c->r[3]=0u+0x00000000u; // 800DBADC
  goto L_800DBB98; // 800DBAE0
L_800DBAE4:;
  c->r[4]=R32(c->r[1]+0x00000024u); // 800DBAE4
  c->r[3]=c->r[31]|c->r[31]; // 800DBAE8
  c->r[5]=c->r[1]+0x00000008u; // 800DBAEC
  c->lr=0x800DBAF4u; f_800D60D0(c); // 800DBAF0
  cmps(c,0,(int32_t)c->r[3],0); // 800DBAF4
  if (!crb(c,2)) { goto L_800DBB04; } // 800DBAF8
  c->r[3]=0u+0x00000000u; // 800DBAFC
  goto L_800DBB98; // 800DBB00
L_800DBB04:;
  c->r[3]=R32(c->r[28]+0x00000004u); // 800DBB04
  c->r[4]=R32(c->r[1]+0x00000008u); // 800DBB08
  c->lr=0x800DBB10u; f_800D9AD0(c); // 800DBB0C
  cmps(c,0,(int32_t)c->r[3],0); // 800DBB10
  if (!crb(c,2)) { goto L_800DBB20; } // 800DBB14
  c->r[3]=0u+0x00000000u; // 800DBB18
  goto L_800DBB98; // 800DBB1C
L_800DBB20:;
  c->r[4]=c->r[3]|c->r[3]; // 800DBB20
  c->r[3]=c->r[1]+0x00000010u; // 800DBB24
  c->lr=0x800DBB2Cu; f_800C9620(c); // 800DBB28
  c->r[3]=R32(c->r[28]+0x00000004u); // 800DBB2C
  c->r[4]=R32(c->r[1]+0x00000008u); // 800DBB30
  c->lr=0x800DBB38u; f_800D9C90(c); // 800DBB34
  cmps(c,0,(int32_t)c->r[3],0); // 800DBB38
  c->r[31]=c->r[3]|c->r[3]; // 800DBB3C
  if (!crb(c,2)) { goto L_800DBB58; } // 800DBB40
  c->r[3]=c->r[1]+0x00000010u; // 800DBB44
  c->r[4]=0u+0xFFFFFFFFu; // 800DBB48
  c->lr=0x800DBB50u; f_800C9660(c); // 800DBB4C
  c->r[3]=0u+0x00000000u; // 800DBB50
  goto L_800DBB98; // 800DBB54
L_800DBB58:;
  if (!crb(c,2)) { goto L_800DBB74; } // 800DBB58
  c->r[5]=0u+0x80260000u; // 800DBB5C
  c->r[3]=c->r[13]+0xFFFF9F58u; // 800DBB60
  c->r[5]=c->r[5]+0xFFFF8CF8u; // 800DBB64
  c->r[4]=0u+0x00000032u; // 800DBB68
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DBB6C
  c->lr=0x800DBB74u; f_800F1300(c); // 800DBB70
L_800DBB74:;
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800DBB74
  c->r[4]=c->r[30]|c->r[30]; // 800DBB78
  c->r[3]=c->r[1]+0x00000010u; // 800DBB7C
  c->lr=0x800DBB84u; f_800C96A0(c); // 800DBB80
  c->r[31]=c->r[3]|c->r[3]; // 800DBB84
  c->r[3]=c->r[1]+0x00000010u; // 800DBB88
  c->r[4]=0u+0xFFFFFFFFu; // 800DBB8C
  c->lr=0x800DBB94u; f_800C9660(c); // 800DBB90
  c->r[3]=c->r[31]|c->r[31]; // 800DBB94
L_800DBB98:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 800DBB98
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800DBB9C
  c->r[30]=R32(c->r[1]+0x00000048u); // 800DBBA0
  c->r[29]=R32(c->r[1]+0x00000044u); // 800DBBA4
  c->r[28]=R32(c->r[1]+0x00000040u); // 800DBBA8
  c->lr=c->r[0]; // 800DBBAC
  c->r[1]=c->r[1]+0x00000050u; // 800DBBB0
  return; // 800DBBB4
}

// fn_800DBBC0
void f_800DBBC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DBBC0
  c->r[0]=c->lr; // 800DBBC4
  W32(c->r[1]+0x00000044u,c->r[0]); // 800DBBC8
  c->r[11]=c->r[1]+0x00000040u; // 800DBBCC
  c->lr=0x800DBBD4u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800DBBD0
  c->r[11]=R32(c->r[3]+0x00000004u); // 800DBBD4
  c->r[24]=c->r[3]|c->r[3]; // 800DBBD8
  c->r[25]=c->r[4]|c->r[4]; // 800DBBDC
  c->r[26]=c->r[5]|c->r[5]; // 800DBBE0
  c->r[3]=R32(c->r[11]+0x00000010u); // 800DBBE4
  c->r[27]=c->r[6]|c->r[6]; // 800DBBE8
  c->r[28]=c->r[7]|c->r[7]; // 800DBBEC
  c->r[29]=c->r[8]|c->r[8]; // 800DBBF0
  cmps(c,0,(int32_t)c->r[3],0); // 800DBBF4
  c->r[30]=c->r[9]|c->r[9]; // 800DBBF8
  c->r[31]=c->r[10]|c->r[10]; // 800DBBFC
  if (!crb(c,2)) { goto L_800DBC0C; } // 800DBC00
  c->r[3]=0u+0x00000000u; // 800DBC04
  goto L_800DBC10; // 800DBC08
L_800DBC0C:;
  c->lr=0x800DBC10u; f_800D5F90(c); // 800DBC0C
L_800DBC10:;
  cmps(c,0,(int32_t)c->r[3],0); // 800DBC10
  if (!crb(c,2)) { goto L_800DBC20; } // 800DBC14
  c->r[3]=0u+0x00000000u; // 800DBC18
  goto L_800DBCD0; // 800DBC1C
L_800DBC20:;
  c->r[3]=R32(c->r[24]+0x00000004u); // 800DBC20
  c->r[0]=R32(c->r[3]+0x00000010u); // 800DBC24
  cmps(c,0,(int32_t)c->r[0],0); // 800DBC28
  if (!crb(c,2)) { goto L_800DBC4C; } // 800DBC2C
  c->r[3]=0u+0x80250000u; // 800DBC30
  c->r[5]=0u+0x80260000u; // 800DBC34
  c->r[3]=c->r[3]+0x00007D20u; // 800DBC38
  c->r[4]=0u+0x000002B3u; // 800DBC3C
  c->r[5]=c->r[5]+0xFFFF8000u; // 800DBC40
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DBC44
  c->lr=0x800DBC4Cu; f_800F1300(c); // 800DBC48
L_800DBC4C:;
  c->r[3]=R32(c->r[24]+0x00000004u); // 800DBC4C
  c->r[4]=c->r[31]|c->r[31]; // 800DBC50
  c->lr=0x800DBC58u; f_800D9C90(c); // 800DBC54
  cmps(c,0,(int32_t)c->r[3],0); // 800DBC58
  c->r[31]=c->r[3]|c->r[3]; // 800DBC5C
  if (!crb(c,2)) { goto L_800DBC6C; } // 800DBC60
  c->r[3]=0u+0x00000000u; // 800DBC64
  goto L_800DBCD0; // 800DBC68
L_800DBC6C:;
  c->r[4]=c->r[28]|c->r[28]; // 800DBC6C
  c->r[3]=c->r[1]+0x00000008u; // 800DBC70
  c->lr=0x800DBC78u; f_800E7D70(c); // 800DBC74
  c->r[4]=c->r[25]|c->r[25]; // 800DBC78
  c->r[5]=c->r[29]|c->r[29]; // 800DBC7C
  c->r[3]=c->r[1]+0x00000008u; // 800DBC80
  c->lr=0x800DBC88u; f_800E7F20(c); // 800DBC84
  cmps(c,0,(int32_t)c->r[3],0); // 800DBC88
  if (!crb(c,2)) { goto L_800DBC98; } // 800DBC8C
  c->r[3]=0u+0x00000000u; // 800DBC90
  goto L_800DBCD0; // 800DBC94
L_800DBC98:;
  c->r[4]=c->r[26]|c->r[26]; // 800DBC98
  c->r[5]=c->r[29]|c->r[29]; // 800DBC9C
  c->r[6]=c->r[30]|c->r[30]; // 800DBCA0
  c->r[3]=c->r[1]+0x00000008u; // 800DBCA4
  c->lr=0x800DBCACu; f_800E80A0(c); // 800DBCA8
  cmps(c,0,(int32_t)c->r[3],0); // 800DBCAC
  if (!crb(c,2)) { goto L_800DBCBC; } // 800DBCB0
  c->r[3]=0u+0x00000000u; // 800DBCB4
  goto L_800DBCD0; // 800DBCB8
L_800DBCBC:;
  c->r[4]=R32(c->r[26]+0x00000000u); // 800DBCBC
  c->r[5]=c->r[27]|c->r[27]; // 800DBCC0
  c->r[6]=c->r[31]|c->r[31]; // 800DBCC4
  c->r[3]=c->r[1]+0x00000008u; // 800DBCC8
  c->lr=0x800DBCD0u; f_800E8230(c); // 800DBCCC
L_800DBCD0:;
  c->r[11]=c->r[1]+0x00000040u; // 800DBCD0
  c->lr=0x800DBCD8u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800DBCD4
  c->r[0]=R32(c->r[1]+0x00000044u); // 800DBCD8
  c->lr=c->r[0]; // 800DBCDC
  c->r[1]=c->r[1]+0x00000040u; // 800DBCE0
  return; // 800DBCE4
}

// fn_800DBCF0
void f_800DBCF0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFF4u; // 800DBCF0
  f_800D5EB0(c); return; // 800DBCF4
}

// fn_800DBD00
void f_800DBD00(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFF4u; // 800DBD00
  f_800D9E50(c); return; // 800DBD04
}

// fn_800DBD10
void f_800DBD10(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFF4u; // 800DBD10
  f_800D8790(c); return; // 800DBD14
}

// fn_800DBD20
void f_800DBD20(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DBD20
  c->r[0]=c->lr; // 800DBD24
  cmps(c,0,(int32_t)c->r[4],0); // 800DBD28
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DBD2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DBD30
  c->r[31]=c->r[4]|c->r[4]; // 800DBD34
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DBD38
  c->r[30]=c->r[3]|c->r[3]; // 800DBD3C
  if (!crb(c,2)) { goto L_800DBD60; } // 800DBD40
  c->r[3]=0u+0x80260000u; // 800DBD44
  c->r[5]=0u+0x80260000u; // 800DBD48
  c->r[3]=c->r[3]+0xFFFF8D70u; // 800DBD4C
  c->r[4]=0u+0x00000051u; // 800DBD50
  c->r[5]=c->r[5]+0xFFFF8D84u; // 800DBD54
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DBD58
  c->lr=0x800DBD60u; f_800F1300(c); // 800DBD5C
L_800DBD60:;
  W32(c->r[30]+0x00000000u,c->r[31]); // 800DBD60
  c->r[3]=c->r[31]|c->r[31]; // 800DBD64
  c->lr=0x800DBD6Cu; f_800CC280(c); // 800DBD68
  cmps(c,0,(int32_t)c->r[3],0); // 800DBD6C
  if (crb(c,2)) { goto L_800DBD7C; } // 800DBD70
  c->r[3]=R32(c->r[30]+0x00000000u); // 800DBD74
  c->lr=0x800DBD7Cu; f_800CC2A0(c); // 800DBD78
L_800DBD7C:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 800DBD7C
  W32(c->r[3]+0x00000008u,c->r[30]); // 800DBD80
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DBD84
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DBD88
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DBD8C
  c->lr=c->r[0]; // 800DBD90
  c->r[1]=c->r[1]+0x00000010u; // 800DBD94
  return; // 800DBD98
}

// fn_800DBDA0
void f_800DBDA0(Ctx* __restrict c) {
  c->r[4]=R32(c->r[3]+0x00000000u); // 800DBDA0
  cmps(c,0,(int32_t)c->r[4],0); // 800DBDA4
  if (crb(c,2)) { goto L_800DBDD8; } // 800DBDA8
  c->r[0]=R32(c->r[4]+0x00000008u); // 800DBDAC
  cmpu(c,0,c->r[0],c->r[3]); // 800DBDB0
  if (!crb(c,2)) { goto L_800DBDC0; } // 800DBDB4
  c->r[0]=0u+0x00000000u; // 800DBDB8
  W32(c->r[4]+0x00000008u,c->r[0]); // 800DBDBC
L_800DBDC0:;
  c->r[4]=R32(c->r[3]+0x00000000u); // 800DBDC0
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 800DBDC4
  cmpu(c,0,c->r[0],c->r[3]); // 800DBDC8
  if (!crb(c,2)) { goto L_800DBDD8; } // 800DBDCC
  c->r[0]=0u+0x00000000u; // 800DBDD0
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 800DBDD4
L_800DBDD8:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DBDD8
  cmps(c,0,(int32_t)c->r[0],0); // 800DBDDC
  if (crb(c,2)) return; // 800DBDE0
  c->r[0]=0u+0x00000000u; // 800DBDE4
  W32(c->r[3]+0x00000000u,c->r[0]); // 800DBDE8
  return; // 800DBDEC
}

// fn_800DBDF0
void f_800DBDF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DBDF0
  c->r[0]=c->lr; // 800DBDF4
  c->r[4]=0u+0x80260000u; // 800DBDF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DBDFC
  c->r[4]=c->r[4]+0xFFFF8DB0u; // 800DBE00
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DBE04
  c->r[31]=c->r[3]|c->r[3]; // 800DBE08
  W32(c->r[3]+0x00000000u,c->r[4]); // 800DBE0C
  c->r[3]=c->r[3]+0x0000001Cu; // 800DBE10
  c->lr=0x800DBE18u; f_800CEA40(c); // 800DBE14
  c->r[3]=c->r[31]+0x00000004u; // 800DBE18
  c->lr=0x800DBE20u; f_8018E910(c); // 800DBE1C
  c->r[3]=c->r[31]|c->r[31]; // 800DBE20
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DBE24
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DBE28
  c->lr=c->r[0]; // 800DBE2C
  c->r[1]=c->r[1]+0x00000010u; // 800DBE30
  return; // 800DBE34
}

// fn_800DBE40
void f_800DBE40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DBE40
  c->r[0]=c->lr; // 800DBE44
  cmps(c,0,(int32_t)c->r[3],0); // 800DBE48
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DBE4C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DBE50
  c->r[31]=c->r[4]|c->r[4]; // 800DBE54
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DBE58
  c->r[30]=c->r[3]|c->r[3]; // 800DBE5C
  if (crb(c,2)) { goto L_800DBE94; } // 800DBE60
  c->r[4]=0u+0x80260000u; // 800DBE64
  c->r[4]=c->r[4]+0xFFFF8DB0u; // 800DBE68
  W32(c->r[3]+0x00000000u,c->r[4]); // 800DBE6C
  c->r[3]=c->r[3]+0x0000001Cu; // 800DBE70
  c->lr=0x800DBE78u; f_800CEEC0(c); // 800DBE74
  c->r[3]=c->r[30]+0x0000001Cu; // 800DBE78
  c->r[4]=0u+0xFFFFFFFFu; // 800DBE7C
  c->lr=0x800DBE84u; f_800CEA60(c); // 800DBE80
  cmps(c,0,(int32_t)c->r[31],0); // 800DBE84
  if (!crb(c,1)) { goto L_800DBE94; } // 800DBE88
  c->r[3]=c->r[30]|c->r[30]; // 800DBE8C
  c->lr=0x800DBE94u; f_8015D040(c); // 800DBE90
L_800DBE94:;
  c->r[3]=c->r[30]|c->r[30]; // 800DBE94
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DBE98
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DBE9C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DBEA0
  c->lr=c->r[0]; // 800DBEA4
  c->r[1]=c->r[1]+0x00000010u; // 800DBEA8
  return; // 800DBEAC
}

// fn_800DBEB0
void f_800DBEB0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x0000001Cu; // 800DBEB0
  f_800CEC20(c); return; // 800DBEB4
}

// fn_800DBEC0
void f_800DBEC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DBEC0
  c->r[0]=c->lr; // 800DBEC4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DBEC8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800DBECC
  c->r[31]=c->r[3]+0x00000004u; // 800DBED0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800DBED4
  c->r[30]=c->r[4]|c->r[4]; // 800DBED8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800DBEDC
  c->r[29]=c->r[3]|c->r[3]; // 800DBEE0
  c->r[3]=c->r[31]|c->r[31]; // 800DBEE4
  c->lr=0x800DBEECu; f_8018E950(c); // 800DBEE8
  c->r[5]=0u+0x800E0000u; // 800DBEEC
  c->r[4]=c->r[30]|c->r[30]; // 800DBEF0
  c->r[3]=c->r[29]+0x0000001Cu; // 800DBEF4
  c->r[6]=0u+0x00000000u; // 800DBEF8
  c->r[5]=c->r[5]+0xFFFFBF30u; // 800DBEFC
  c->lr=0x800DBF04u; f_800CF060(c); // 800DBF00
  c->r[30]=c->r[3]|c->r[3]; // 800DBF04
  c->r[3]=c->r[31]|c->r[31]; // 800DBF08
  c->lr=0x800DBF10u; f_8018EA30(c); // 800DBF0C
  c->r[3]=c->r[30]|c->r[30]; // 800DBF10
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800DBF14
  c->r[30]=R32(c->r[1]+0x00000018u); // 800DBF18
  c->r[29]=R32(c->r[1]+0x00000014u); // 800DBF1C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DBF20
  c->lr=c->r[0]; // 800DBF24
  c->r[1]=c->r[1]+0x00000020u; // 800DBF28
  return; // 800DBF2C
}

// fn_800DBF30
void f_800DBF30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DBF30
  c->r[0]=c->lr; // 800DBF34
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DBF38
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800DBF3C
  c->r[31]=c->r[5]|c->r[5]; // 800DBF40
  W32(c->r[1]+0x00000018u,c->r[30]); // 800DBF44
  c->r[30]=c->r[4]|c->r[4]; // 800DBF48
  W32(c->r[1]+0x00000014u,c->r[29]); // 800DBF4C
  c->r[29]=c->r[3]|c->r[3]; // 800DBF50
  c->lr=0x800DBF58u; f_800CD960(c); // 800DBF54
  c->r[4]=c->r[29]|c->r[29]; // 800DBF58
  c->r[5]=c->r[30]|c->r[30]; // 800DBF5C
  c->r[6]=c->r[31]|c->r[31]; // 800DBF60
  c->lr=0x800DBF68u; f_800CDB40(c); // 800DBF64
  c->lr=0x800DBF6Cu; f_800CD960(c); // 800DBF68
  c->r[4]=c->r[29]|c->r[29]; // 800DBF6C
  c->r[5]=c->r[30]|c->r[30]; // 800DBF70
  c->r[6]=c->r[31]|c->r[31]; // 800DBF74
  c->lr=0x800DBF7Cu; f_800CDC90(c); // 800DBF78
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DBF7C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800DBF80
  c->r[30]=R32(c->r[1]+0x00000018u); // 800DBF84
  c->r[29]=R32(c->r[1]+0x00000014u); // 800DBF88
  c->lr=c->r[0]; // 800DBF8C
  c->r[1]=c->r[1]+0x00000020u; // 800DBF90
  return; // 800DBF94
}

// fn_800DBFA0
void f_800DBFA0(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF9B68u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DBFA0
  c->r[4]=0u+0x80000000u; // 800DBFA4
  {uint32_t ea=c->r[2]+0xFFFF9B6Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DBFA8
  c->r[6]=0u+0x00000000u; // 800DBFAC
  c->r[7]=c->r[3]+0x00000004u; // 800DBFB0
  c->r[8]=c->r[3]+0x00000010u; // 800DBFB4
  c->r[9]=c->r[3]+0x0000001Cu; // 800DBFB8
  c->r[5]=0u+0x00000001u; // 800DBFBC
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800DBFC0
  W32(c->r[3]+0x00000000u,c->r[6]); // 800DBFC4
  W32(c->r[3]+0x00000004u,c->r[7]); // 800DBFC8
  W32(c->r[3]+0x00000008u,c->r[7]); // 800DBFCC
  W32(c->r[3]+0x0000000Cu,c->r[6]); // 800DBFD0
  W32(c->r[3]+0x00000010u,c->r[8]); // 800DBFD4
  W32(c->r[3]+0x00000014u,c->r[8]); // 800DBFD8
  W32(c->r[3]+0x00000018u,c->r[6]); // 800DBFDC
  W32(c->r[3]+0x0000001Cu,c->r[9]); // 800DBFE0
  W32(c->r[3]+0x00000020u,c->r[9]); // 800DBFE4
  W32(c->r[3]+0x00000024u,c->r[5]); // 800DBFE8
  W32(c->r[3]+0x00000028u,c->r[0]); // 800DBFEC
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[1]);} // 800DBFF0
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[0]);} // 800DBFF4
  W32(c->r[3]+0x00000034u,c->r[5]); // 800DBFF8
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[1]);} // 800DBFFC
  W32(c->r[3]+0x0000003Cu,c->r[6]); // 800DC000
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[0]);} // 800DC004
  {uint32_t ea=c->r[3]+0x00000054u; WF32(ea,c->f[0]);} // 800DC008
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[1]);} // 800DC00C
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[1]);} // 800DC010
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[1]);} // 800DC014
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[1]);} // 800DC018
  {uint32_t ea=c->r[3]+0x00000058u; WF32(ea,c->f[0]);} // 800DC01C
  {uint32_t ea=c->r[3]+0x0000005Cu; WF32(ea,c->f[0]);} // 800DC020
  {uint32_t ea=c->r[3]+0x00000060u; WF32(ea,c->f[0]);} // 800DC024
  return; // 800DC028
}

// fn_800DC030
void f_800DC030(Ctx* __restrict c) {
  c->r[4]=c->r[3]+0x00000004u; // 800DC030
  c->r[0]=0u+0x00000000u; // 800DC034
  W32(c->r[3]+0x00000000u,c->r[0]); // 800DC038
  W32(c->r[3]+0x00000004u,c->r[4]); // 800DC03C
  W32(c->r[3]+0x00000008u,c->r[4]); // 800DC040
  return; // 800DC044
}

// fn_800DC050
void f_800DC050(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC050
  c->r[0]=c->lr; // 800DC054
  cmps(c,0,(int32_t)c->r[3],0); // 800DC058
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DC05C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DC060
  c->r[31]=c->r[4]|c->r[4]; // 800DC064
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DC068
  c->r[30]=c->r[3]|c->r[3]; // 800DC06C
  if (crb(c,2)) { goto L_800DC08C; } // 800DC070
  c->r[4]=0u+0x00000000u; // 800DC074
  c->lr=0x800DC07Cu; f_800F1940(c); // 800DC078
  cmps(c,0,(int32_t)c->r[31],0); // 800DC07C
  if (!crb(c,1)) { goto L_800DC08C; } // 800DC080
  c->r[3]=c->r[30]|c->r[30]; // 800DC084
  c->lr=0x800DC08Cu; f_8015D040(c); // 800DC088
L_800DC08C:;
  c->r[3]=c->r[30]|c->r[30]; // 800DC08C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DC090
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DC094
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DC098
  c->lr=c->r[0]; // 800DC09C
  c->r[1]=c->r[1]+0x00000010u; // 800DC0A0
  return; // 800DC0A4
}

// fn_800DC0B0
void f_800DC0B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC0B0
  c->r[0]=c->lr; // 800DC0B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DC0B8
  c->r[11]=c->r[1]+0x00000020u; // 800DC0BC
  c->lr=0x800DC0C4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800DC0C0
  c->r[26]=c->r[3]|c->r[3]; // 800DC0C4
  c->lr=0x800DC0CCu; f_800DD3D0(c); // 800DC0C8
  c->r[3]=c->r[3]+0x00000354u; // 800DC0CC
  c->lr=0x800DC0D4u; f_8018E950(c); // 800DC0D0
  c->r[31]=R32(c->r[26]+0x00000004u); // 800DC0D4
  c->r[30]=c->r[26]+0x00000004u; // 800DC0D8
  c->r[28]=0u+0x80260000u; // 800DC0DC
  c->r[29]=0u+0x80260000u; // 800DC0E0
  goto L_800DC110; // 800DC0E4
L_800DC0E8:;
  c->r[27]=c->r[31]|c->r[31]; cr0(c,c->r[27]); // 800DC0E8
  c->r[31]=R32(c->r[31]+0x00000000u); // 800DC0EC
  if (!crb(c,2)) { goto L_800DC108; } // 800DC0F0
  c->r[3]=c->r[28]+0xFFFF90A8u; // 800DC0F4
  c->r[5]=c->r[29]+0xFFFF9084u; // 800DC0F8
  c->r[4]=0u+0x0000023Du; // 800DC0FC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DC100
  c->lr=0x800DC108u; f_800F1300(c); // 800DC104
L_800DC108:;
  c->r[3]=c->r[27]+0xFFFFFF08u; // 800DC108
  c->lr=0x800DC110u; f_800CAF30(c); // 800DC10C
L_800DC110:;
  cmpu(c,0,c->r[31],c->r[30]); // 800DC110
  if (!crb(c,2)) { IRQCHK(c); goto L_800DC0E8; } // 800DC114
  c->r[3]=c->r[26]|c->r[26]; // 800DC118
  c->lr=0x800DC120u; f_800DC330(c); // 800DC11C
  c->lr=0x800DC124u; f_800DD3D0(c); // 800DC120
  c->r[3]=c->r[3]+0x00000354u; // 800DC124
  c->lr=0x800DC12Cu; f_8018EA30(c); // 800DC128
  c->r[11]=c->r[1]+0x00000020u; // 800DC12C
  c->lr=0x800DC134u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800DC130
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DC134
  c->lr=c->r[0]; // 800DC138
  c->r[1]=c->r[1]+0x00000020u; // 800DC13C
  return; // 800DC140
}

// fn_800DC150
void f_800DC150(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC150
  c->r[0]=c->lr; // 800DC154
  cmpu(c,0,c->r[4],0x00000003u); // 800DC158
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DC15C
  c->r[0]=0u+0x00000000u; // 800DC160
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DC164
  c->r[31]=c->r[4]|c->r[4]; // 800DC168
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DC16C
  c->r[30]=c->r[3]|c->r[3]; // 800DC170
  if (crb(c,1)) { goto L_800DC17C; } // 800DC174
  c->r[0]=0u+0x00000001u; // 800DC178
L_800DC17C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DC17C
  if (!crb(c,2)) { goto L_800DC1AC; } // 800DC180
  c->r[3]=0u+0x80260000u; // 800DC184
  c->r[5]=0u+0x80260000u; // 800DC188
  c->r[6]=c->r[31]|c->r[31]; // 800DC18C
  c->r[4]=0u+0x000000FBu; // 800DC190
  c->r[3]=c->r[3]+0xFFFF8DC0u; // 800DC194
  c->r[5]=c->r[5]+0xFFFF8DFCu; // 800DC198
  c->r[7]=0u+0x00000000u; // 800DC19C
  c->r[8]=0u+0x00000004u; // 800DC1A0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DC1A4
  c->lr=0x800DC1ACu; f_800F1300(c); // 800DC1A8
L_800DC1AC:;
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800DC1AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DC1B0
  c->r[3]=c->r[30]+c->r[0]; // 800DC1B4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DC1B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DC1BC
  {uint32_t ea=c->r[3]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DC1C0
  c->lr=c->r[0]; // 800DC1C4
  c->r[1]=c->r[1]+0x00000010u; // 800DC1C8
  return; // 800DC1CC
}

// fn_800DC1D0
void f_800DC1D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC1D0
  c->r[0]=c->lr; // 800DC1D4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800DC1D8
  c->r[11]=c->r[1]+0x00000030u; // 800DC1DC
  c->lr=0x800DC1E4u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800DC1E0
  c->r[25]=c->r[3]|c->r[3]; // 800DC1E4
  c->r[26]=c->r[4]|c->r[4]; // 800DC1E8
  c->lr=0x800DC1F0u; f_800DD3D0(c); // 800DC1EC
  c->r[3]=c->r[3]+0x00000354u; // 800DC1F0
  c->lr=0x800DC1F8u; f_8018E950(c); // 800DC1F4
  cmps(c,0,(int32_t)c->r[26],0); // 800DC1F8
  if (!crb(c,2)) { goto L_800DC21C; } // 800DC1FC
  c->r[3]=0u+0x80260000u; // 800DC200
  c->r[5]=0u+0x80260000u; // 800DC204
  c->r[3]=c->r[3]+0xFFFF9048u; // 800DC208
  c->r[4]=0u+0x00000233u; // 800DC20C
  c->r[5]=c->r[5]+0xFFFF9024u; // 800DC210
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DC214
  c->lr=0x800DC21Cu; f_800F1300(c); // 800DC218
L_800DC21C:;
  c->r[27]=c->r[26]+0x00000100u; // 800DC21C
  c->r[3]=c->r[25]+0x0000000Cu; // 800DC220
  c->r[4]=c->r[27]|c->r[27]; // 800DC224
  c->lr=0x800DC22Cu; f_800F1DC0(c); // 800DC228
  c->lr=0x800DC230u; f_800DD3D0(c); // 800DC22C
  c->r[3]=c->r[3]+0x00000354u; // 800DC230
  c->lr=0x800DC238u; f_8018EA30(c); // 800DC234
  c->lr=0x800DC23Cu; f_800DD3D0(c); // 800DC238
  c->r[3]=c->r[3]+0x00000354u; // 800DC23C
  c->lr=0x800DC244u; f_8018E950(c); // 800DC240
  c->r[31]=R32(c->r[25]+0x00000010u); // 800DC244
  c->r[30]=c->r[25]+0x00000010u; // 800DC248
  c->r[28]=0u+0x80260000u; // 800DC24C
  c->r[29]=0u+0x80260000u; // 800DC250
  goto L_800DC2C8; // 800DC254
L_800DC258:;
  cmps(c,0,(int32_t)c->r[31],0); // 800DC258
  if (!crb(c,2)) { goto L_800DC274; } // 800DC25C
  c->r[3]=c->r[28]+0xFFFF90D8u; // 800DC260
  c->r[5]=c->r[29]+0xFFFF90B4u; // 800DC264
  c->r[4]=0u+0x0000023Du; // 800DC268
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DC26C
  c->lr=0x800DC274u; f_800F1300(c); // 800DC270
L_800DC274:;
  c->r[3]=R8(c->r[31]+0xFFFFFF98u); // 800DC274
  c->r[0]=R32(c->r[31]+0xFFFFFF50u); // 800DC278
  c->r[3]=c->r[3]+c->r[0]; // 800DC27C
  cmps(c,0,(int32_t)c->r[3],127); // 800DC280
  if (!crb(c,1)) { goto L_800DC290; } // 800DC284
  c->r[4]=0u+0x0000007Fu; // 800DC288
  goto L_800DC298; // 800DC28C
L_800DC290:;
  c->r[0]=sraw(c,c->r[3],31); // 800DC290
  c->r[4]=c->r[3]&~c->r[0]; // 800DC294
L_800DC298:;
  c->r[3]=R8(c->r[26]+0x00000098u); // 800DC298
  c->r[0]=R32(c->r[26]+0x00000050u); // 800DC29C
  c->r[3]=c->r[3]+c->r[0]; // 800DC2A0
  cmps(c,0,(int32_t)c->r[3],127); // 800DC2A4
  if (!crb(c,1)) { goto L_800DC2B4; } // 800DC2A8
  c->r[0]=0u+0x0000007Fu; // 800DC2AC
  goto L_800DC2BC; // 800DC2B0
L_800DC2B4:;
  c->r[0]=sraw(c,c->r[3],31); // 800DC2B4
  c->r[0]=c->r[3]&~c->r[0]; // 800DC2B8
L_800DC2BC:;
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 800DC2BC
  if (crb(c,0)) { goto L_800DC2D0; } // 800DC2C0
  c->r[31]=R32(c->r[31]+0x00000000u); // 800DC2C4
L_800DC2C8:;
  cmpu(c,0,c->r[31],c->r[30]); // 800DC2C8
  if (!crb(c,2)) { IRQCHK(c); goto L_800DC258; } // 800DC2CC
L_800DC2D0:;
  cmps(c,0,(int32_t)c->r[26],0); // 800DC2D0
  if (!crb(c,2)) { goto L_800DC2F4; } // 800DC2D4
  c->r[3]=0u+0x80260000u; // 800DC2D8
  c->r[5]=0u+0x80260000u; // 800DC2DC
  c->r[3]=c->r[3]+0xFFFF9048u; // 800DC2E0
  c->r[4]=0u+0x00000233u; // 800DC2E4
  c->r[5]=c->r[5]+0xFFFF9024u; // 800DC2E8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DC2EC
  c->lr=0x800DC2F4u; f_800F1300(c); // 800DC2F0
L_800DC2F4:;
  W32(c->r[1]+0x00000008u,c->r[31]); // 800DC2F4
  c->r[5]=c->r[27]|c->r[27]; // 800DC2F8
  c->r[3]=c->r[25]+0x0000000Cu; // 800DC2FC
  c->r[4]=c->r[1]+0x00000008u; // 800DC300
  c->lr=0x800DC308u; f_800F1CC0(c); // 800DC304
  c->lr=0x800DC30Cu; f_800DD3D0(c); // 800DC308
  c->r[3]=c->r[3]+0x00000354u; // 800DC30C
  c->lr=0x800DC314u; f_8018EA30(c); // 800DC310
  c->r[11]=c->r[1]+0x00000030u; // 800DC314
  c->lr=0x800DC31Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800DC318
  c->r[0]=R32(c->r[1]+0x00000034u); // 800DC31C
  c->lr=c->r[0]; // 800DC320
  c->r[1]=c->r[1]+0x00000030u; // 800DC324
  return; // 800DC328
}

// fn_800DC330
void f_800DC330(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC330
  c->r[0]=c->lr; // 800DC334
  W32(c->r[1]+0x00000054u,c->r[0]); // 800DC338
  c->r[11]=c->r[1]+0x00000050u; // 800DC33C
  c->lr=0x800DC344u; { W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800DC340
  c->r[24]=c->r[3]|c->r[3]; // 800DC344
  c->lr=0x800DC34Cu; f_800DD3D0(c); // 800DC348
  c->r[3]=c->r[3]+0x00000354u; // 800DC34C
  c->lr=0x800DC354u; f_8018E950(c); // 800DC350
  c->r[0]=R32(c->r[24]+0x0000000Cu); // 800DC354
  cmpu(c,0,c->r[0],0x00000002u); // 800DC358
  if (!crb(c,0)) { goto L_800DC370; } // 800DC35C
  c->lr=0x800DC364u; f_800DD3D0(c); // 800DC360
  c->r[3]=c->r[3]+0x00000354u; // 800DC364
  c->lr=0x800DC36Cu; f_8018EA30(c); // 800DC368
  goto L_800DC5C8; // 800DC36C
L_800DC370:;
  c->r[0]=R8(c->r[13]+0xFFFFAE00u); // 800DC370
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800DC374
  if (!crb(c,2)) { goto L_800DC3C0; } // 800DC378
  c->r[3]=0u+0x80290000u; // 800DC37C
  c->r[4]=0u+0x800E0000u; // 800DC380
  c->r[5]=0u+0x800E0000u; // 800DC384
  c->r[6]=0u+0x0000000Cu; // 800DC388
  c->r[3]=c->r[3]+0x000041D8u; // 800DC38C
  c->r[4]=c->r[4]+0xFFFFC030u; // 800DC390
  c->r[5]=c->r[5]+0xFFFFC050u; // 800DC394
  c->r[7]=0u+0x00000080u; // 800DC398
  c->lr=0x800DC3A0u; f_802073CC(c); // 800DC39C
  c->r[4]=0u+0x800E0000u; // 800DC3A0
  c->r[5]=0u+0x80290000u; // 800DC3A4
  c->r[4]=c->r[4]+0xFFFFC5E0u; // 800DC3A8
  c->r[3]=0u+0x00000000u; // 800DC3AC
  c->r[5]=c->r[5]+0x000041C8u; // 800DC3B0
  c->lr=0x800DC3B8u; f_80206D98(c); // 800DC3B4
  c->r[0]=0u+0x00000001u; // 800DC3B8
  W8(c->r[13]+0xFFFFAE00u,c->r[0]); // 800DC3BC
L_800DC3C0:;
  c->r[20]=0u+0x80290000u; // 800DC3C0
  c->r[26]=0u+0x80260000u; // 800DC3C4
  c->r[20]=c->r[20]+0x000041D8u; // 800DC3C8
  c->r[27]=0u+0x80260000u; // 800DC3CC
  c->r[28]=0u+0x80260000u; // 800DC3D0
  c->r[29]=0u+0x80260000u; // 800DC3D4
  c->r[30]=0u+0x80260000u; // 800DC3D8
  c->r[31]=0u+0x80260000u; // 800DC3DC
  c->r[22]=0u+0x80260000u; // 800DC3E0
  c->r[21]=0u+0x80260000u; // 800DC3E4
  goto L_800DC4B8; // 800DC3E8
L_800DC3EC:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DC3EC
  if (!crb(c,2)) { goto L_800DC408; } // 800DC3F0
  c->r[3]=c->r[26]+0xFFFF9138u; // 800DC3F4
  c->r[5]=c->r[27]+0xFFFF9114u; // 800DC3F8
  c->r[4]=0u+0x000001F1u; // 800DC3FC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DC400
  c->lr=0x800DC408u; f_800F1300(c); // 800DC404
L_800DC408:;
  c->r[23]=R32(c->r[24]+0x00000010u); // 800DC408
  cmps(c,0,(int32_t)c->r[23],0); // 800DC40C
  if (!crb(c,2)) { goto L_800DC428; } // 800DC410
  c->r[3]=c->r[28]+0xFFFF90D8u; // 800DC414
  c->r[5]=c->r[29]+0xFFFF90B4u; // 800DC418
  c->r[4]=0u+0x0000023Du; // 800DC41C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DC420
  c->lr=0x800DC428u; f_800F1300(c); // 800DC424
L_800DC428:;
  c->r[25]=addc(c,c->r[23],0xFFFFFF00u,0); cr0(c,c->r[25]); // 800DC428
  if (!crb(c,2)) { goto L_800DC444; } // 800DC42C
  c->r[3]=c->r[30]+0xFFFF9108u; // 800DC430
  c->r[5]=c->r[31]+0xFFFF90E4u; // 800DC434
  c->r[4]=0u+0x00000193u; // 800DC438
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DC43C
  c->lr=0x800DC444u; f_800F1300(c); // 800DC440
L_800DC444:;
  c->r[0]=R32(c->r[24]+0x00000010u); // 800DC444
  c->r[3]=c->r[24]+0x0000000Cu; // 800DC448
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DC44C
  c->r[4]=c->r[1]+0x00000014u; // 800DC450
  c->lr=0x800DC458u; f_800F1A70(c); // 800DC454
  c->r[3]=R8(c->r[25]+0x00000098u); // 800DC458
  c->r[0]=R32(c->r[25]+0x00000050u); // 800DC45C
  c->r[3]=c->r[3]+c->r[0]; // 800DC460
  cmps(c,0,(int32_t)c->r[3],127); // 800DC464
  if (!crb(c,1)) { goto L_800DC474; } // 800DC468
  c->r[0]=0u+0x0000007Fu; // 800DC46C
  goto L_800DC47C; // 800DC470
L_800DC474:;
  c->r[0]=sraw(c,c->r[3],31); // 800DC474
  c->r[0]=c->r[3]&~c->r[0]; // 800DC478
L_800DC47C:;
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 800DC47C
  cmps(c,0,(int32_t)c->r[25],0); // 800DC480
  c->r[19]=c->r[20]+c->r[0]; // 800DC484
  c->r[23]=c->r[19]+0x00000004u; // 800DC488
  if (!crb(c,2)) { goto L_800DC4A4; } // 800DC48C
  c->r[3]=c->r[22]+0xFFFF9048u; // 800DC490
  c->r[5]=c->r[21]+0xFFFF9024u; // 800DC494
  c->r[4]=0u+0x00000233u; // 800DC498
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DC49C
  c->lr=0x800DC4A4u; f_800F1300(c); // 800DC4A0
L_800DC4A4:;
  W32(c->r[1]+0x00000010u,c->r[23]); // 800DC4A4
  c->r[3]=c->r[19]|c->r[19]; // 800DC4A8
  c->r[4]=c->r[1]+0x00000010u; // 800DC4AC
  c->r[5]=c->r[25]+0x00000100u; // 800DC4B0
  c->lr=0x800DC4B8u; f_800F1CC0(c); // 800DC4B4
L_800DC4B8:;
  c->r[0]=R32(c->r[24]+0x0000000Cu); // 800DC4B8
  cmps(c,0,(int32_t)c->r[0],0); // 800DC4BC
  if (!crb(c,2)) { IRQCHK(c); goto L_800DC3EC; } // 800DC4C0
  c->r[20]=0u+0x80290000u; // 800DC4C4
  c->r[18]=0u+0x00000000u; // 800DC4C8
  c->r[20]=c->r[20]+0x000041D8u; // 800DC4CC
  c->r[21]=0u+0x80260000u; // 800DC4D0
  c->r[22]=0u+0x80260000u; // 800DC4D4
  c->r[31]=0u+0x80260000u; // 800DC4D8
  c->r[30]=0u+0x80260000u; // 800DC4DC
  c->r[29]=0u+0x80260000u; // 800DC4E0
  c->r[28]=0u+0x80260000u; // 800DC4E4
  c->r[27]=0u+0x80260000u; // 800DC4E8
  c->r[26]=0u+0x80260000u; // 800DC4EC
L_800DC4F0:;
  c->r[0]=R32(c->r[20]+0x00000000u); // 800DC4F0
  cmps(c,0,(int32_t)c->r[0],0); // 800DC4F4
  if (crb(c,2)) { goto L_800DC5AC; } // 800DC4F8
  c->r[25]=c->r[24]+0x00000010u; // 800DC4FC
  goto L_800DC5A0; // 800DC500
L_800DC504:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DC504
  if (!crb(c,2)) { goto L_800DC520; } // 800DC508
  c->r[3]=c->r[21]+0xFFFF9138u; // 800DC50C
  c->r[5]=c->r[22]+0xFFFF9114u; // 800DC510
  c->r[4]=0u+0x000001F1u; // 800DC514
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DC518
  c->lr=0x800DC520u; f_800F1300(c); // 800DC51C
L_800DC520:;
  c->r[23]=R32(c->r[20]+0x00000004u); // 800DC520
  cmps(c,0,(int32_t)c->r[23],0); // 800DC524
  if (!crb(c,2)) { goto L_800DC540; } // 800DC528
  c->r[3]=c->r[31]+0xFFFF90D8u; // 800DC52C
  c->r[5]=c->r[30]+0xFFFF90B4u; // 800DC530
  c->r[4]=0u+0x0000023Du; // 800DC534
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DC538
  c->lr=0x800DC540u; f_800F1300(c); // 800DC53C
L_800DC540:;
  c->r[19]=addc(c,c->r[23],0xFFFFFF00u,0); cr0(c,c->r[19]); // 800DC540
  if (!crb(c,2)) { goto L_800DC55C; } // 800DC544
  c->r[3]=c->r[29]+0xFFFF9108u; // 800DC548
  c->r[5]=c->r[28]+0xFFFF90E4u; // 800DC54C
  c->r[4]=0u+0x00000193u; // 800DC550
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DC554
  c->lr=0x800DC55Cu; f_800F1300(c); // 800DC558
L_800DC55C:;
  c->r[0]=R32(c->r[20]+0x00000004u); // 800DC55C
  c->r[3]=c->r[20]|c->r[20]; // 800DC560
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800DC564
  c->r[4]=c->r[1]+0x0000000Cu; // 800DC568
  c->lr=0x800DC570u; f_800F1A70(c); // 800DC56C
  cmps(c,0,(int32_t)c->r[19],0); // 800DC570
  if (!crb(c,2)) { goto L_800DC58C; } // 800DC574
  c->r[3]=c->r[27]+0xFFFF9048u; // 800DC578
  c->r[5]=c->r[26]+0xFFFF9024u; // 800DC57C
  c->r[4]=0u+0x00000233u; // 800DC580
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DC584
  c->lr=0x800DC58Cu; f_800F1300(c); // 800DC588
L_800DC58C:;
  W32(c->r[1]+0x00000008u,c->r[25]); // 800DC58C
  c->r[3]=c->r[24]+0x0000000Cu; // 800DC590
  c->r[4]=c->r[1]+0x00000008u; // 800DC594
  c->r[5]=c->r[19]+0x00000100u; // 800DC598
  c->lr=0x800DC5A0u; f_800F1CC0(c); // 800DC59C
L_800DC5A0:;
  c->r[0]=R32(c->r[20]+0x00000000u); // 800DC5A0
  cmps(c,0,(int32_t)c->r[0],0); // 800DC5A4
  if (!crb(c,2)) { IRQCHK(c); goto L_800DC504; } // 800DC5A8
L_800DC5AC:;
  c->r[18]=c->r[18]+0x00000001u; // 800DC5AC
  c->r[20]=c->r[20]+0x0000000Cu; // 800DC5B0
  cmps(c,0,(int32_t)c->r[18],128); // 800DC5B4
  if (crb(c,0)) { IRQCHK(c); goto L_800DC4F0; } // 800DC5B8
  c->lr=0x800DC5C0u; f_800DD3D0(c); // 800DC5BC
  c->r[3]=c->r[3]+0x00000354u; // 800DC5C0
  c->lr=0x800DC5C8u; f_8018EA30(c); // 800DC5C4
L_800DC5C8:;
  c->r[11]=c->r[1]+0x00000050u; // 800DC5C8
  c->lr=0x800DC5D0u; { c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800DC5CC
  c->r[0]=R32(c->r[1]+0x00000054u); // 800DC5D0
  c->lr=c->r[0]; // 800DC5D4
  c->r[1]=c->r[1]+0x00000050u; // 800DC5D8
  return; // 800DC5DC
}

// fn_800DC5E0
void f_800DC5E0(Ctx* __restrict c) {
  c->r[3]=0u+0x80290000u; // 800DC5E0
  c->r[4]=0u+0x800E0000u; // 800DC5E4
  c->r[3]=c->r[3]+0x000041D8u; // 800DC5E8
  c->r[5]=0u+0x0000000Cu; // 800DC5EC
  c->r[4]=c->r[4]+0xFFFFC050u; // 800DC5F0
  c->r[6]=0u+0x00000080u; // 800DC5F4
  f_802074C4(c); return; // 800DC5F8
}

// fn_800DC600
void f_800DC600(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC600
  c->r[0]=c->lr; // 800DC604
  W32(c->r[1]+0x00000044u,c->r[0]); // 800DC608
  c->r[11]=c->r[1]+0x00000040u; // 800DC60C
  c->lr=0x800DC614u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800DC610
  cmps(c,0,(int32_t)c->r[4],0); // 800DC614
  c->r[29]=c->r[3]|c->r[3]; // 800DC618
  c->r[30]=c->r[4]|c->r[4]; // 800DC61C
  if (!crb(c,2)) { goto L_800DC640; } // 800DC620
  c->r[3]=0u+0x80260000u; // 800DC624
  c->r[5]=0u+0x80260000u; // 800DC628
  c->r[3]=c->r[3]+0xFFFF8DC0u; // 800DC62C
  c->r[4]=0u+0x00000195u; // 800DC630
  c->r[5]=c->r[5]+0xFFFF8E7Cu; // 800DC634
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DC638
  c->lr=0x800DC640u; f_800F1300(c); // 800DC63C
L_800DC640:;
  c->lr=0x800DC644u; f_800DD3D0(c); // 800DC640
  c->r[3]=c->r[3]+0x00000354u; // 800DC644
  c->lr=0x800DC64Cu; f_8018E950(c); // 800DC648
  c->r[3]=R8(c->r[30]+0x00000098u); // 800DC64C
  c->r[0]=R32(c->r[30]+0x00000050u); // 800DC650
  c->r[3]=c->r[3]+c->r[0]; // 800DC654
  cmps(c,0,(int32_t)c->r[3],127); // 800DC658
  if (!crb(c,1)) { goto L_800DC668; } // 800DC65C
  c->r[31]=0u+0x0000007Fu; // 800DC660
  goto L_800DC670; // 800DC664
L_800DC668:;
  c->r[0]=sraw(c,c->r[3],31); // 800DC668
  c->r[31]=c->r[3]&~c->r[0]; // 800DC66C
L_800DC670:;
  c->r[0]=R32(c->r[29]+0x00000024u); // 800DC670
  cmps(c,0,(int32_t)c->r[0],0); // 800DC674
  if (!crb(c,2)) { goto L_800DC690; } // 800DC678
  c->lr=0x800DC680u; f_800DD3D0(c); // 800DC67C
  c->r[3]=c->r[3]+0x00000354u; // 800DC680
  c->lr=0x800DC688u; f_8018EA30(c); // 800DC684
  c->r[3]=0u+0x00000000u; // 800DC688
  goto L_800DC8BC; // 800DC68C
L_800DC690:;
  c->r[22]=0u+0x80260000u; // 800DC690
  c->r[23]=0u+0x80260000u; // 800DC694
  c->r[25]=0u+0x80260000u; // 800DC698
  c->r[28]=0u+0x80260000u; // 800DC69C
  c->r[27]=0u+0x80260000u; // 800DC6A0
  c->r[26]=0u+0x80260000u; // 800DC6A4
  goto L_800DC778; // 800DC6A8
L_800DC6AC:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 800DC6AC
  cmps(c,0,(int32_t)c->r[0],0); // 800DC6B0
  if (!crb(c,2)) { goto L_800DC6CC; } // 800DC6B4
  c->r[3]=c->r[22]+0xFFFF9138u; // 800DC6B8
  c->r[5]=c->r[23]+0xFFFF9114u; // 800DC6BC
  c->r[4]=0u+0x000001F1u; // 800DC6C0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DC6C4
  c->lr=0x800DC6CCu; f_800F1300(c); // 800DC6C8
L_800DC6CC:;
  c->r[24]=R32(c->r[29]+0x00000010u); // 800DC6CC
  cmps(c,0,(int32_t)c->r[24],0); // 800DC6D0
  if (!crb(c,2)) { goto L_800DC6EC; } // 800DC6D4
  c->r[3]=c->r[25]+0xFFFF90D8u; // 800DC6D8
  c->r[5]=c->r[28]+0xFFFF90B4u; // 800DC6DC
  c->r[4]=0u+0x0000023Du; // 800DC6E0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DC6E4
  c->lr=0x800DC6ECu; f_800F1300(c); // 800DC6E8
L_800DC6EC:;
  c->r[24]=addc(c,c->r[24],0xFFFFFF00u,0); cr0(c,c->r[24]); // 800DC6EC
  if (!crb(c,2)) { goto L_800DC708; } // 800DC6F0
  c->r[3]=c->r[27]+0xFFFF9108u; // 800DC6F4
  c->r[5]=c->r[26]+0xFFFF90E4u; // 800DC6F8
  c->r[4]=0u+0x00000193u; // 800DC6FC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DC700
  c->lr=0x800DC708u; f_800F1300(c); // 800DC704
L_800DC708:;
  cmps(c,0,(int32_t)c->r[24],0); // 800DC708
  if (!crb(c,2)) { goto L_800DC724; } // 800DC70C
  c->lr=0x800DC714u; f_800DD3D0(c); // 800DC710
  c->r[3]=c->r[3]+0x00000354u; // 800DC714
  c->lr=0x800DC71Cu; f_8018EA30(c); // 800DC718
  c->r[3]=0u+0x00000000u; // 800DC71C
  goto L_800DC8BC; // 800DC720
L_800DC724:;
  c->r[3]=R8(c->r[24]+0x00000098u); // 800DC724
  c->r[0]=R32(c->r[24]+0x00000050u); // 800DC728
  c->r[3]=c->r[3]+c->r[0]; // 800DC72C
  cmps(c,0,(int32_t)c->r[3],127); // 800DC730
  if (!crb(c,1)) { goto L_800DC740; } // 800DC734
  c->r[0]=0u+0x0000007Fu; // 800DC738
  goto L_800DC748; // 800DC73C
L_800DC740:;
  c->r[0]=sraw(c,c->r[3],31); // 800DC740
  c->r[0]=c->r[3]&~c->r[0]; // 800DC744
L_800DC748:;
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 800DC748
  if (!crb(c,0)) { goto L_800DC764; } // 800DC74C
  c->lr=0x800DC754u; f_800DD3D0(c); // 800DC750
  c->r[3]=c->r[3]+0x00000354u; // 800DC754
  c->lr=0x800DC75Cu; f_8018EA30(c); // 800DC758
  c->r[3]=0u+0x00000000u; // 800DC75C
  goto L_800DC8BC; // 800DC760
L_800DC764:;
  c->r[12]=R32(c->r[24]+0x00000000u); // 800DC764
  c->r[3]=c->r[24]|c->r[24]; // 800DC768
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DC76C
  c->ctr=c->r[12]; // 800DC770
  if (true) { c->lr=0x800DC778u; dispatch(c,c->ctr); } // 800DC774
L_800DC778:;
  c->r[3]=R32(c->r[29]+0x00000000u); // 800DC778
  c->r[0]=R32(c->r[29]+0x00000024u); // 800DC77C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800DC780
  if (!crb(c,0)) { IRQCHK(c); goto L_800DC6AC; } // 800DC784
  cmps(c,0,(int32_t)c->r[30],0); // 800DC788
  c->r[26]=c->r[29]+0x00000004u; // 800DC78C
  if (!crb(c,2)) { goto L_800DC7B0; } // 800DC790
  c->r[3]=0u+0x80260000u; // 800DC794
  c->r[5]=0u+0x80260000u; // 800DC798
  c->r[3]=c->r[3]+0xFFFF9078u; // 800DC79C
  c->r[4]=0u+0x00000233u; // 800DC7A0
  c->r[5]=c->r[5]+0xFFFF9054u; // 800DC7A4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DC7A8
  c->lr=0x800DC7B0u; f_800F1300(c); // 800DC7AC
L_800DC7B0:;
  W32(c->r[1]+0x0000000Cu,c->r[26]); // 800DC7B0
  c->r[3]=c->r[29]|c->r[29]; // 800DC7B4
  c->r[4]=c->r[1]+0x0000000Cu; // 800DC7B8
  c->r[5]=c->r[30]+0x000000F8u; // 800DC7BC
  c->lr=0x800DC7C4u; f_800F1CC0(c); // 800DC7C0
  c->lr=0x800DC7C8u; f_800DD3D0(c); // 800DC7C4
  c->r[3]=c->r[3]+0x00000354u; // 800DC7C8
  c->lr=0x800DC7D0u; f_8018E950(c); // 800DC7CC
  c->r[31]=R32(c->r[29]+0x00000010u); // 800DC7D0
  c->r[28]=c->r[29]+0x00000010u; // 800DC7D4
  c->r[26]=0u+0x80260000u; // 800DC7D8
  c->r[27]=0u+0x80260000u; // 800DC7DC
  goto L_800DC854; // 800DC7E0
L_800DC7E4:;
  cmps(c,0,(int32_t)c->r[31],0); // 800DC7E4
  if (!crb(c,2)) { goto L_800DC800; } // 800DC7E8
  c->r[3]=c->r[26]+0xFFFF90D8u; // 800DC7EC
  c->r[5]=c->r[27]+0xFFFF90B4u; // 800DC7F0
  c->r[4]=0u+0x0000023Du; // 800DC7F4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DC7F8
  c->lr=0x800DC800u; f_800F1300(c); // 800DC7FC
L_800DC800:;
  c->r[3]=R8(c->r[31]+0xFFFFFF98u); // 800DC800
  c->r[0]=R32(c->r[31]+0xFFFFFF50u); // 800DC804
  c->r[3]=c->r[3]+c->r[0]; // 800DC808
  cmps(c,0,(int32_t)c->r[3],127); // 800DC80C
  if (!crb(c,1)) { goto L_800DC81C; } // 800DC810
  c->r[4]=0u+0x0000007Fu; // 800DC814
  goto L_800DC824; // 800DC818
L_800DC81C:;
  c->r[0]=sraw(c,c->r[3],31); // 800DC81C
  c->r[4]=c->r[3]&~c->r[0]; // 800DC820
L_800DC824:;
  c->r[3]=R8(c->r[30]+0x00000098u); // 800DC824
  c->r[0]=R32(c->r[30]+0x00000050u); // 800DC828
  c->r[3]=c->r[3]+c->r[0]; // 800DC82C
  cmps(c,0,(int32_t)c->r[3],127); // 800DC830
  if (!crb(c,1)) { goto L_800DC840; } // 800DC834
  c->r[0]=0u+0x0000007Fu; // 800DC838
  goto L_800DC848; // 800DC83C
L_800DC840:;
  c->r[0]=sraw(c,c->r[3],31); // 800DC840
  c->r[0]=c->r[3]&~c->r[0]; // 800DC844
L_800DC848:;
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 800DC848
  if (crb(c,0)) { goto L_800DC85C; } // 800DC84C
  c->r[31]=R32(c->r[31]+0x00000000u); // 800DC850
L_800DC854:;
  cmpu(c,0,c->r[31],c->r[28]); // 800DC854
  if (!crb(c,2)) { IRQCHK(c); goto L_800DC7E4; } // 800DC858
L_800DC85C:;
  cmps(c,0,(int32_t)c->r[30],0); // 800DC85C
  if (!crb(c,2)) { goto L_800DC880; } // 800DC860
  c->r[3]=0u+0x80260000u; // 800DC864
  c->r[5]=0u+0x80260000u; // 800DC868
  c->r[3]=c->r[3]+0xFFFF9048u; // 800DC86C
  c->r[4]=0u+0x00000233u; // 800DC870
  c->r[5]=c->r[5]+0xFFFF9024u; // 800DC874
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DC878
  c->lr=0x800DC880u; f_800F1300(c); // 800DC87C
L_800DC880:;
  W32(c->r[1]+0x00000008u,c->r[31]); // 800DC880
  c->r[3]=c->r[29]+0x0000000Cu; // 800DC884
  c->r[4]=c->r[1]+0x00000008u; // 800DC888
  c->r[5]=c->r[30]+0x00000100u; // 800DC88C
  c->lr=0x800DC894u; f_800F1CC0(c); // 800DC890
  c->lr=0x800DC898u; f_800DD3D0(c); // 800DC894
  c->r[3]=c->r[3]+0x00000354u; // 800DC898
  c->lr=0x800DC8A0u; f_8018EA30(c); // 800DC89C
  c->r[3]=c->r[30]|c->r[30]; // 800DC8A0
  c->r[4]=c->r[29]|c->r[29]; // 800DC8A4
  c->lr=0x800DC8ACu; f_800CBB60(c); // 800DC8A8
  c->lr=0x800DC8B0u; f_800DD3D0(c); // 800DC8AC
  c->r[3]=c->r[3]+0x00000354u; // 800DC8B0
  c->lr=0x800DC8B8u; f_8018EA30(c); // 800DC8B4
  c->r[3]=0u+0x00000001u; // 800DC8B8
L_800DC8BC:;
  c->r[11]=c->r[1]+0x00000040u; // 800DC8BC
  c->lr=0x800DC8C4u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800DC8C0
  c->r[0]=R32(c->r[1]+0x00000044u); // 800DC8C4
  c->lr=c->r[0]; // 800DC8C8
  c->r[1]=c->r[1]+0x00000040u; // 800DC8CC
  return; // 800DC8D0
}

// fn_800DC8E0
void f_800DC8E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC8E0
  c->r[0]=c->lr; // 800DC8E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DC8E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DC8EC
  c->r[31]=c->r[4]|c->r[4]; // 800DC8F0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DC8F4
  c->r[30]=c->r[3]|c->r[3]; // 800DC8F8
  c->lr=0x800DC900u; f_800DD3D0(c); // 800DC8FC
  c->r[3]=c->r[3]+0x00000354u; // 800DC900
  c->lr=0x800DC908u; f_8018E950(c); // 800DC904
  cmps(c,0,(int32_t)c->r[31],0); // 800DC908
  if (!crb(c,2)) { goto L_800DC92C; } // 800DC90C
  c->r[3]=0u+0x80260000u; // 800DC910
  c->r[5]=0u+0x80260000u; // 800DC914
  c->r[3]=c->r[3]+0xFFFF9048u; // 800DC918
  c->r[4]=0u+0x00000233u; // 800DC91C
  c->r[5]=c->r[5]+0xFFFF9024u; // 800DC920
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DC924
  c->lr=0x800DC92Cu; f_800F1300(c); // 800DC928
L_800DC92C:;
  c->r[3]=c->r[30]+0x0000000Cu; // 800DC92C
  c->r[4]=c->r[31]+0x00000100u; // 800DC930
  c->lr=0x800DC938u; f_800F1DC0(c); // 800DC934
  c->lr=0x800DC93Cu; f_800DD3D0(c); // 800DC938
  c->r[3]=c->r[3]+0x00000354u; // 800DC93C
  c->lr=0x800DC944u; f_8018EA30(c); // 800DC940
  c->lr=0x800DC948u; f_800DD3D0(c); // 800DC944
  c->r[3]=c->r[3]+0x00000354u; // 800DC948
  c->lr=0x800DC950u; f_8018E950(c); // 800DC94C
  cmps(c,0,(int32_t)c->r[31],0); // 800DC950
  if (!crb(c,2)) { goto L_800DC974; } // 800DC954
  c->r[3]=0u+0x80260000u; // 800DC958
  c->r[5]=0u+0x80260000u; // 800DC95C
  c->r[3]=c->r[3]+0xFFFF9078u; // 800DC960
  c->r[4]=0u+0x00000233u; // 800DC964
  c->r[5]=c->r[5]+0xFFFF9054u; // 800DC968
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DC96C
  c->lr=0x800DC974u; f_800F1300(c); // 800DC970
L_800DC974:;
  c->r[3]=c->r[30]|c->r[30]; // 800DC974
  c->r[4]=c->r[31]+0x000000F8u; // 800DC978
  c->lr=0x800DC980u; f_800F1DC0(c); // 800DC97C
  c->r[3]=c->r[31]|c->r[31]; // 800DC980
  c->r[4]=c->r[30]|c->r[30]; // 800DC984
  c->lr=0x800DC98Cu; f_800CBBF0(c); // 800DC988
  c->lr=0x800DC990u; f_800DD3D0(c); // 800DC98C
  c->r[3]=c->r[3]+0x00000354u; // 800DC990
  c->lr=0x800DC998u; f_8018EA30(c); // 800DC994
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DC998
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DC99C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DC9A0
  c->lr=c->r[0]; // 800DC9A4
  c->r[1]=c->r[1]+0x00000010u; // 800DC9A8
  return; // 800DC9AC
}

// fn_800DC9B0
void f_800DC9B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC9B0
  c->r[0]=c->lr; // 800DC9B4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800DC9B8
  c->r[11]=c->r[1]+0x00000030u; // 800DC9BC
  c->lr=0x800DC9C4u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800DC9C0
  cmps(c,0,(int32_t)c->r[4],0); // 800DC9C4
  c->r[24]=0u+0x80260000u; // 800DC9C8
  c->r[23]=c->r[3]|c->r[3]; // 800DC9CC
  c->r[25]=c->r[4]|c->r[4]; // 800DC9D0
  c->r[24]=c->r[24]+0xFFFF8DC0u; // 800DC9D4
  if (!crb(c,0)) { goto L_800DC9F0; } // 800DC9D8
  c->r[3]=c->r[24]+0x00000000u; // 800DC9DC
  c->r[5]=c->r[24]+0x000000E4u; // 800DC9E0
  c->r[4]=0u+0x000001C8u; // 800DC9E4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DC9E8
  c->lr=0x800DC9F0u; f_800F1300(c); // 800DC9EC
L_800DC9F0:;
  c->lr=0x800DC9F4u; f_800DD3D0(c); // 800DC9F0
  c->r[3]=c->r[3]+0x00000354u; // 800DC9F4
  c->lr=0x800DC9FCu; f_8018E950(c); // 800DC9F8
  c->r[0]=R32(c->r[23]+0x00000028u); // 800DC9FC
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[0]); // 800DCA00
  if (!crb(c,1)) { goto L_800DCA1C; } // 800DCA04
  c->r[3]=c->r[24]+0x00000000u; // 800DCA08
  c->r[5]=c->r[24]+0x00000108u; // 800DCA0C
  c->r[4]=0u+0x000001CDu; // 800DCA10
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DCA14
  c->lr=0x800DCA1Cu; f_800F13A0(c); // 800DCA18
L_800DCA1C:;
  c->r[0]=R32(c->r[23]+0x00000028u); // 800DCA1C
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[0]); // 800DCA20
  if (!crb(c,1)) { goto L_800DCA2C; } // 800DCA24
  goto L_800DCA34; // 800DCA28
L_800DCA2C:;
  c->r[0]=sraw(c,c->r[25],31); // 800DCA2C
  c->r[0]=c->r[25]&~c->r[0]; // 800DCA30
L_800DCA34:;
  W32(c->r[23]+0x00000024u,c->r[0]); // 800DCA34
  c->r[25]=0u+0x80260000u; // 800DCA38
  c->r[26]=0u+0x80260000u; // 800DCA3C
  c->r[28]=0u+0x80260000u; // 800DCA40
  c->r[29]=0u+0x80260000u; // 800DCA44
  c->r[30]=0u+0x80260000u; // 800DCA48
  c->r[31]=0u+0x80260000u; // 800DCA4C
  goto L_800DCAE0; // 800DCA50
L_800DCA54:;
  c->r[0]=R32(c->r[23]+0x0000000Cu); // 800DCA54
  cmps(c,0,(int32_t)c->r[0],0); // 800DCA58
  if (!crb(c,2)) { goto L_800DCA74; } // 800DCA5C
  c->r[3]=c->r[25]+0xFFFF9138u; // 800DCA60
  c->r[5]=c->r[26]+0xFFFF9114u; // 800DCA64
  c->r[4]=0u+0x000001F1u; // 800DCA68
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DCA6C
  c->lr=0x800DCA74u; f_800F1300(c); // 800DCA70
L_800DCA74:;
  c->r[27]=R32(c->r[23]+0x00000010u); // 800DCA74
  cmps(c,0,(int32_t)c->r[27],0); // 800DCA78
  if (!crb(c,2)) { goto L_800DCA94; } // 800DCA7C
  c->r[3]=c->r[28]+0xFFFF90D8u; // 800DCA80
  c->r[5]=c->r[29]+0xFFFF90B4u; // 800DCA84
  c->r[4]=0u+0x0000023Du; // 800DCA88
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DCA8C
  c->lr=0x800DCA94u; f_800F1300(c); // 800DCA90
L_800DCA94:;
  c->r[27]=addc(c,c->r[27],0xFFFFFF00u,0); cr0(c,c->r[27]); // 800DCA94
  if (!crb(c,2)) { goto L_800DCAB0; } // 800DCA98
  c->r[3]=c->r[30]+0xFFFF9108u; // 800DCA9C
  c->r[5]=c->r[31]+0xFFFF90E4u; // 800DCAA0
  c->r[4]=0u+0x00000193u; // 800DCAA4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DCAA8
  c->lr=0x800DCAB0u; f_800F1300(c); // 800DCAAC
L_800DCAB0:;
  cmps(c,0,(int32_t)c->r[27],0); // 800DCAB0
  if (!crb(c,2)) { goto L_800DCACC; } // 800DCAB4
  c->r[3]=c->r[24]+0x00000000u; // 800DCAB8
  c->r[5]=c->r[24]+0x0000012Cu; // 800DCABC
  c->r[4]=0u+0x000001D6u; // 800DCAC0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DCAC4
  c->lr=0x800DCACCu; f_800F1300(c); // 800DCAC8
L_800DCACC:;
  c->r[12]=R32(c->r[27]+0x00000000u); // 800DCACC
  c->r[3]=c->r[27]|c->r[27]; // 800DCAD0
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DCAD4
  c->ctr=c->r[12]; // 800DCAD8
  if (true) { c->lr=0x800DCAE0u; dispatch(c,c->ctr); } // 800DCADC
L_800DCAE0:;
  c->r[3]=R32(c->r[23]+0x00000000u); // 800DCAE0
  c->r[0]=R32(c->r[23]+0x00000024u); // 800DCAE4
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800DCAE8
  if (crb(c,1)) { IRQCHK(c); goto L_800DCA54; } // 800DCAEC
  c->lr=0x800DCAF4u; f_800DD3D0(c); // 800DCAF0
  c->r[3]=c->r[3]+0x00000354u; // 800DCAF4
  c->lr=0x800DCAFCu; f_8018EA30(c); // 800DCAF8
  c->r[11]=c->r[1]+0x00000030u; // 800DCAFC
  c->lr=0x800DCB04u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800DCB00
  c->r[0]=R32(c->r[1]+0x00000034u); // 800DCB04
  c->lr=c->r[0]; // 800DCB08
  c->r[1]=c->r[1]+0x00000030u; // 800DCB0C
  return; // 800DCB10
}

// fn_800DCB20
void f_800DCB20(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DCB20
  c->r[0]=c->lr; // 800DCB24
  cmps(c,0,(int32_t)c->r[4],0); // 800DCB28
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DCB2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DCB30
  c->r[31]=c->r[4]|c->r[4]; // 800DCB34
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DCB38
  c->r[30]=c->r[3]|c->r[3]; // 800DCB3C
  if (!crb(c,0)) { goto L_800DCB60; } // 800DCB40
  c->r[3]=0u+0x80260000u; // 800DCB44
  c->r[5]=0u+0x80260000u; // 800DCB48
  c->r[3]=c->r[3]+0xFFFF8DC0u; // 800DCB4C
  c->r[4]=0u+0x000001E6u; // 800DCB50
  c->r[5]=c->r[5]+0xFFFF8F18u; // 800DCB54
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DCB58
  c->lr=0x800DCB60u; f_800F1300(c); // 800DCB5C
L_800DCB60:;
  W32(c->r[30]+0x00000028u,c->r[31]); // 800DCB60
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DCB64
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DCB68
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DCB6C
  c->lr=c->r[0]; // 800DCB70
  c->r[1]=c->r[1]+0x00000010u; // 800DCB74
  return; // 800DCB78
}

// fn_800DCB80
void f_800DCB80(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DCB80
  c->r[0]=c->lr; // 800DCB84
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DCB88
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DCB8C
  c->r[31]=c->r[3]|c->r[3]; // 800DCB90
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DCB94
  c->r[30]=c->r[4]|c->r[4]; // 800DCB98
  c->lr=0x800DCBA0u; f_800DD3D0(c); // 800DCB9C
  c->r[3]=c->r[3]+0x00000354u; // 800DCBA0
  c->lr=0x800DCBA8u; f_8018E950(c); // 800DCBA4
  c->r[3]=R32(c->r[31]+0x00000024u); // 800DCBA8
  cmps(c,0,(int32_t)c->r[3],0); // 800DCBAC
  if (!crb(c,2)) { goto L_800DCBC8; } // 800DCBB0
  c->lr=0x800DCBB8u; f_800DD3D0(c); // 800DCBB4
  c->r[3]=c->r[3]+0x00000354u; // 800DCBB8
  c->lr=0x800DCBC0u; f_8018EA30(c); // 800DCBBC
  c->r[3]=0u+0x00000000u; // 800DCBC0
  goto L_800DCCB4; // 800DCBC4
L_800DCBC8:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 800DCBC8
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 800DCBCC
  if (crb(c,0)) { goto L_800DCCA4; } // 800DCBD0
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800DCBD4
  cmps(c,0,(int32_t)c->r[0],0); // 800DCBD8
  if (!crb(c,2)) { goto L_800DCBFC; } // 800DCBDC
  c->r[3]=0u+0x80260000u; // 800DCBE0
  c->r[5]=0u+0x80260000u; // 800DCBE4
  c->r[3]=c->r[3]+0xFFFF9138u; // 800DCBE8
  c->r[4]=0u+0x000001F1u; // 800DCBEC
  c->r[5]=c->r[5]+0xFFFF9114u; // 800DCBF0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DCBF4
  c->lr=0x800DCBFCu; f_800F1300(c); // 800DCBF8
L_800DCBFC:;
  c->r[31]=R32(c->r[31]+0x00000010u); // 800DCBFC
  cmps(c,0,(int32_t)c->r[31],0); // 800DCC00
  if (!crb(c,2)) { goto L_800DCC24; } // 800DCC04
  c->r[3]=0u+0x80260000u; // 800DCC08
  c->r[5]=0u+0x80260000u; // 800DCC0C
  c->r[3]=c->r[3]+0xFFFF90D8u; // 800DCC10
  c->r[4]=0u+0x0000023Du; // 800DCC14
  c->r[5]=c->r[5]+0xFFFF90B4u; // 800DCC18
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DCC1C
  c->lr=0x800DCC24u; f_800F1300(c); // 800DCC20
L_800DCC24:;
  c->r[31]=addc(c,c->r[31],0xFFFFFF00u,0); cr0(c,c->r[31]); // 800DCC24
  if (!crb(c,2)) { goto L_800DCC48; } // 800DCC28
  c->r[3]=0u+0x80260000u; // 800DCC2C
  c->r[5]=0u+0x80260000u; // 800DCC30
  c->r[3]=c->r[3]+0xFFFF9108u; // 800DCC34
  c->r[4]=0u+0x00000193u; // 800DCC38
  c->r[5]=c->r[5]+0xFFFF90E4u; // 800DCC3C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DCC40
  c->lr=0x800DCC48u; f_800F1300(c); // 800DCC44
L_800DCC48:;
  cmps(c,0,(int32_t)c->r[31],0); // 800DCC48
  if (!crb(c,2)) { goto L_800DCC64; } // 800DCC4C
  c->lr=0x800DCC54u; f_800DD3D0(c); // 800DCC50
  c->r[3]=c->r[3]+0x00000354u; // 800DCC54
  c->lr=0x800DCC5Cu; f_8018EA30(c); // 800DCC58
  c->r[3]=0u+0x00000000u; // 800DCC5C
  goto L_800DCCB4; // 800DCC60
L_800DCC64:;
  c->r[3]=R8(c->r[31]+0x00000098u); // 800DCC64
  c->r[0]=R32(c->r[31]+0x00000050u); // 800DCC68
  c->r[3]=c->r[3]+c->r[0]; // 800DCC6C
  cmps(c,0,(int32_t)c->r[3],127); // 800DCC70
  if (!crb(c,1)) { goto L_800DCC80; } // 800DCC74
  c->r[0]=0u+0x0000007Fu; // 800DCC78
  goto L_800DCC88; // 800DCC7C
L_800DCC80:;
  c->r[0]=sraw(c,c->r[3],31); // 800DCC80
  c->r[0]=c->r[3]&~c->r[0]; // 800DCC84
L_800DCC88:;
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 800DCC88
  if (!crb(c,0)) { goto L_800DCCA4; } // 800DCC8C
  c->lr=0x800DCC94u; f_800DD3D0(c); // 800DCC90
  c->r[3]=c->r[3]+0x00000354u; // 800DCC94
  c->lr=0x800DCC9Cu; f_8018EA30(c); // 800DCC98
  c->r[3]=0u+0x00000000u; // 800DCC9C
  goto L_800DCCB4; // 800DCCA0
L_800DCCA4:;
  c->lr=0x800DCCA8u; f_800DD3D0(c); // 800DCCA4
  c->r[3]=c->r[3]+0x00000354u; // 800DCCA8
  c->lr=0x800DCCB0u; f_8018EA30(c); // 800DCCAC
  c->r[3]=0u+0x00000001u; // 800DCCB0
L_800DCCB4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DCCB4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DCCB8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DCCBC
  c->lr=c->r[0]; // 800DCCC0
  c->r[1]=c->r[1]+0x00000010u; // 800DCCC4
  return; // 800DCCC8
}

// fn_800DCCD0
void f_800DCCD0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DCCD0
  c->r[0]=c->lr; // 800DCCD4
  cmps(c,0,(int32_t)c->r[4],0); // 800DCCD8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DCCDC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800DCCE0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800DCCE4
  c->r[30]=c->r[4]|c->r[4]; // 800DCCE8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800DCCEC
  c->r[29]=c->r[3]|c->r[3]; // 800DCCF0
  if (!crb(c,2)) { goto L_800DCD14; } // 800DCCF4
  c->r[3]=0u+0x80260000u; // 800DCCF8
  c->r[5]=0u+0x80260000u; // 800DCCFC
  c->r[3]=c->r[3]+0xFFFF8DC0u; // 800DCD00
  c->r[4]=0u+0x0000020Fu; // 800DCD04
  c->r[5]=c->r[5]+0xFFFF8F3Cu; // 800DCD08
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DCD0C
  c->lr=0x800DCD14u; f_800F1300(c); // 800DCD10
L_800DCD14:;
  c->lr=0x800DCD18u; f_800DD3D0(c); // 800DCD14
  c->r[3]=c->r[3]+0x00000354u; // 800DCD18
  c->lr=0x800DCD20u; f_8018E950(c); // 800DCD1C
  cmps(c,0,(int32_t)c->r[30],0); // 800DCD20
  W32(c->r[30]+0x00000008u,c->r[29]); // 800DCD24
  c->r[31]=c->r[29]+0x0000001Cu; // 800DCD28
  if (!crb(c,2)) { goto L_800DCD4C; } // 800DCD2C
  c->r[3]=0u+0x80260000u; // 800DCD30
  c->r[5]=0u+0x80260000u; // 800DCD34
  c->r[3]=c->r[3]+0xFFFF9018u; // 800DCD38
  c->r[4]=0u+0x00000233u; // 800DCD3C
  c->r[5]=c->r[5]+0xFFFF8FF4u; // 800DCD40
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DCD44
  c->lr=0x800DCD4Cu; f_800F1300(c); // 800DCD48
L_800DCD4C:;
  W32(c->r[1]+0x00000008u,c->r[31]); // 800DCD4C
  c->r[3]=c->r[29]+0x00000018u; // 800DCD50
  c->r[4]=c->r[1]+0x00000008u; // 800DCD54
  c->r[5]=c->r[30]+0x00000018u; // 800DCD58
  c->lr=0x800DCD60u; f_800F1CC0(c); // 800DCD5C
  c->lr=0x800DCD64u; f_800DD3D0(c); // 800DCD60
  c->r[3]=c->r[3]+0x00000354u; // 800DCD64
  c->lr=0x800DCD6Cu; f_8018EA30(c); // 800DCD68
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DCD6C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800DCD70
  c->r[30]=R32(c->r[1]+0x00000018u); // 800DCD74
  c->r[29]=R32(c->r[1]+0x00000014u); // 800DCD78
  c->lr=c->r[0]; // 800DCD7C
  c->r[1]=c->r[1]+0x00000020u; // 800DCD80
  return; // 800DCD84
}

// fn_800DCD90
void f_800DCD90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DCD90
  c->r[0]=c->lr; // 800DCD94
  cmps(c,0,(int32_t)c->r[4],0); // 800DCD98
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DCD9C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800DCDA0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800DCDA4
  c->r[30]=c->r[4]|c->r[4]; // 800DCDA8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800DCDAC
  c->r[29]=c->r[3]|c->r[3]; // 800DCDB0
  if (!crb(c,2)) { goto L_800DCDD4; } // 800DCDB4
  c->r[3]=0u+0x80260000u; // 800DCDB8
  c->r[5]=0u+0x80260000u; // 800DCDBC
  c->r[3]=c->r[3]+0xFFFF8DC0u; // 800DCDC0
  c->r[4]=0u+0x00000230u; // 800DCDC4
  c->r[5]=c->r[5]+0xFFFF8E7Cu; // 800DCDC8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DCDCC
  c->lr=0x800DCDD4u; f_800F1300(c); // 800DCDD0
L_800DCDD4:;
  c->lr=0x800DCDD8u; f_800DD3D0(c); // 800DCDD4
  c->r[3]=c->r[3]+0x00000354u; // 800DCDD8
  c->lr=0x800DCDE0u; f_8018E950(c); // 800DCDDC
  c->r[0]=R32(c->r[29]+0x00000018u); // 800DCDE0
  cmps(c,0,(int32_t)c->r[0],0); // 800DCDE4
  if (!crb(c,2)) { goto L_800DCE00; } // 800DCDE8
  c->lr=0x800DCDF0u; f_800DD3D0(c); // 800DCDEC
  c->r[3]=c->r[3]+0x00000354u; // 800DCDF0
  c->lr=0x800DCDF8u; f_8018EA30(c); // 800DCDF4
  c->r[3]=0u+0x00000000u; // 800DCDF8
  goto L_800DCEB0; // 800DCDFC
L_800DCE00:;
  if (!crb(c,2)) { goto L_800DCE20; } // 800DCE00
  c->r[3]=0u+0x80260000u; // 800DCE04
  c->r[5]=0u+0x80260000u; // 800DCE08
  c->r[3]=c->r[3]+0xFFFF8FE8u; // 800DCE0C
  c->r[4]=0u+0x000001F1u; // 800DCE10
  c->r[5]=c->r[5]+0xFFFF8FC4u; // 800DCE14
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DCE18
  c->lr=0x800DCE20u; f_800F1300(c); // 800DCE1C
L_800DCE20:;
  c->r[31]=R32(c->r[29]+0x0000001Cu); // 800DCE20
  cmps(c,0,(int32_t)c->r[31],0); // 800DCE24
  if (!crb(c,2)) { goto L_800DCE48; } // 800DCE28
  c->r[3]=0u+0x80260000u; // 800DCE2C
  c->r[5]=0u+0x80260000u; // 800DCE30
  c->r[3]=c->r[3]+0xFFFF8F88u; // 800DCE34
  c->r[4]=0u+0x0000023Du; // 800DCE38
  c->r[5]=c->r[5]+0xFFFF8F64u; // 800DCE3C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DCE40
  c->lr=0x800DCE48u; f_800F1300(c); // 800DCE44
L_800DCE48:;
  c->r[31]=addc(c,c->r[31],0xFFFFFFE8u,0); cr0(c,c->r[31]); // 800DCE48
  if (!crb(c,2)) { goto L_800DCE6C; } // 800DCE4C
  c->r[3]=0u+0x80260000u; // 800DCE50
  c->r[5]=0u+0x80260000u; // 800DCE54
  c->r[3]=c->r[3]+0xFFFF8FB8u; // 800DCE58
  c->r[4]=0u+0x00000193u; // 800DCE5C
  c->r[5]=c->r[5]+0xFFFF8F94u; // 800DCE60
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DCE64
  c->lr=0x800DCE6Cu; f_800F1300(c); // 800DCE68
L_800DCE6C:;
  c->r[0]=R32(c->r[29]+0x0000001Cu); // 800DCE6C
  c->r[3]=c->r[29]+0x00000018u; // 800DCE70
  W32(c->r[1]+0x00000008u,c->r[0]); // 800DCE74
  c->r[4]=c->r[1]+0x00000008u; // 800DCE78
  c->lr=0x800DCE80u; f_800F1A70(c); // 800DCE7C
  c->r[3]=c->r[31]|c->r[31]; // 800DCE80
  c->r[4]=c->r[30]|c->r[30]; // 800DCE84
  c->lr=0x800DCE8Cu; f_800D1280(c); // 800DCE88
  c->r[3]=c->r[30]|c->r[30]; // 800DCE8C
  c->r[4]=c->r[31]|c->r[31]; // 800DCE90
  c->lr=0x800DCE98u; f_800CBA40(c); // 800DCE94
  c->r[3]=c->r[31]|c->r[31]; // 800DCE98
  c->lr=0x800DCEA0u; f_800D1190(c); // 800DCE9C
  c->lr=0x800DCEA4u; f_800DD3D0(c); // 800DCEA0
  c->r[3]=c->r[3]+0x00000354u; // 800DCEA4
  c->lr=0x800DCEACu; f_8018EA30(c); // 800DCEA8
  c->r[3]=c->r[31]|c->r[31]; // 800DCEAC
L_800DCEB0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DCEB0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800DCEB4
  c->r[30]=R32(c->r[1]+0x00000018u); // 800DCEB8
  c->r[29]=R32(c->r[1]+0x00000014u); // 800DCEBC
  c->lr=c->r[0]; // 800DCEC0
  c->r[1]=c->r[1]+0x00000020u; // 800DCEC4
  return; // 800DCEC8
}

// fn_800DCED0
void f_800DCED0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DCED0
  c->r[0]=c->lr; // 800DCED4
  cmps(c,0,(int32_t)c->r[4],0); // 800DCED8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DCEDC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800DCEE0
  c->r[31]=c->r[4]|c->r[4]; // 800DCEE4
  W32(c->r[1]+0x00000018u,c->r[30]); // 800DCEE8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800DCEEC
  c->r[29]=c->r[3]|c->r[3]; // 800DCEF0
  if (!crb(c,2)) { goto L_800DCF14; } // 800DCEF4
  c->r[3]=0u+0x80260000u; // 800DCEF8
  c->r[5]=0u+0x80260000u; // 800DCEFC
  c->r[3]=c->r[3]+0xFFFF8DC0u; // 800DCF00
  c->r[4]=0u+0x0000024Eu; // 800DCF04
  c->r[5]=c->r[5]+0xFFFF8E7Cu; // 800DCF08
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DCF0C
  c->lr=0x800DCF14u; f_800F1300(c); // 800DCF10
L_800DCF14:;
  c->lr=0x800DCF18u; f_800DD3D0(c); // 800DCF14
  c->r[3]=c->r[3]+0x00000354u; // 800DCF18
  c->lr=0x800DCF20u; f_8018E950(c); // 800DCF1C
  c->r[30]=R32(c->r[31]+0x00000004u); // 800DCF20
  cmps(c,0,(int32_t)c->r[30],0); // 800DCF24
  if (!crb(c,2)) { goto L_800DCF3C; } // 800DCF28
  c->lr=0x800DCF30u; f_800DD3D0(c); // 800DCF2C
  c->r[3]=c->r[3]+0x00000354u; // 800DCF30
  c->lr=0x800DCF38u; f_8018EA30(c); // 800DCF34
  goto L_800DCF9C; // 800DCF38
L_800DCF3C:;
  c->r[3]=c->r[30]|c->r[30]; // 800DCF3C
  c->r[4]=c->r[31]|c->r[31]; // 800DCF40
  c->lr=0x800DCF48u; f_800D1310(c); // 800DCF44
  c->r[3]=c->r[31]|c->r[31]; // 800DCF48
  c->r[4]=c->r[30]|c->r[30]; // 800DCF4C
  c->lr=0x800DCF54u; f_800CBAD0(c); // 800DCF50
  cmps(c,0,(int32_t)c->r[30],0); // 800DCF54
  c->r[31]=c->r[29]+0x0000001Cu; // 800DCF58
  if (!crb(c,2)) { goto L_800DCF7C; } // 800DCF5C
  c->r[3]=0u+0x80260000u; // 800DCF60
  c->r[5]=0u+0x80260000u; // 800DCF64
  c->r[3]=c->r[3]+0xFFFF9018u; // 800DCF68
  c->r[4]=0u+0x00000233u; // 800DCF6C
  c->r[5]=c->r[5]+0xFFFF8FF4u; // 800DCF70
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DCF74
  c->lr=0x800DCF7Cu; f_800F1300(c); // 800DCF78
L_800DCF7C:;
  W32(c->r[1]+0x00000008u,c->r[31]); // 800DCF7C
  c->r[3]=c->r[29]+0x00000018u; // 800DCF80
  c->r[4]=c->r[1]+0x00000008u; // 800DCF84
  c->r[5]=c->r[30]+0x00000018u; // 800DCF88
  c->lr=0x800DCF90u; f_800F1CC0(c); // 800DCF8C
  c->lr=0x800DCF94u; f_800DD3D0(c); // 800DCF90
  c->r[3]=c->r[3]+0x00000354u; // 800DCF94
  c->lr=0x800DCF9Cu; f_8018EA30(c); // 800DCF98
L_800DCF9C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DCF9C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800DCFA0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800DCFA4
  c->r[29]=R32(c->r[1]+0x00000014u); // 800DCFA8
  c->lr=c->r[0]; // 800DCFAC
  c->r[1]=c->r[1]+0x00000020u; // 800DCFB0
  return; // 800DCFB4
}

// detail_StartSound__Q34nw4r3snd14SoundStartableFPQ34nw4r3snd11SoundHandleUlPCQ44nw4r3snd14SoundStartable9StartInfo
void f_800DCFC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DCFC0
  c->r[0]=c->lr; // 800DCFC4
  c->r[7]=c->r[6]|c->r[6]; // 800DCFC8
  c->r[6]=0u+0x00000000u; // 800DCFCC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DCFD0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DCFD4
  c->r[31]=c->r[4]|c->r[4]; // 800DCFD8
  c->r[12]=R32(c->r[3]+0x00000000u); // 800DCFDC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800DCFE0
  c->ctr=c->r[12]; // 800DCFE4
  if (true) { c->lr=0x800DCFECu; dispatch(c,c->ctr); } // 800DCFE8
  cmps(c,0,(int32_t)c->r[3],0); // 800DCFEC
  if (crb(c,2)) { goto L_800DCFF8; } // 800DCFF0
  goto L_800DD00C; // 800DCFF4
L_800DCFF8:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 800DCFF8
  cmps(c,0,(int32_t)c->r[3],0); // 800DCFFC
  if (crb(c,2)) { goto L_800DD008; } // 800DD000
  c->lr=0x800DD008u; f_800CAA50(c); // 800DD004
L_800DD008:;
  c->r[3]=0u+0x00000000u; // 800DD008
L_800DD00C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DD00C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DD010
  c->lr=c->r[0]; // 800DD014
  c->r[1]=c->r[1]+0x00000010u; // 800DD018
  return; // 800DD01C
}

// fn_800DD020
void f_800DD020(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD020
  c->r[0]=c->lr; // 800DD024
  c->r[5]=0u+0x00010000u; // 800DD028
  c->r[6]=0u+0x80290000u; // 800DD02C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DD030
  c->r[0]=0u+0x00004000u; // 800DD034
  c->r[5]=c->r[5]+0x000055E0u; // 800DD038
  W32(c->r[1]+0x00000008u,c->r[3]); // 800DD03C
  c->r[3]=c->r[1]+0x00000008u; // 800DD040
  W32(c->r[1]+0x00000010u,c->r[4]); // 800DD044
  c->r[4]=c->r[6]+0x00004B20u; // 800DD048
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800DD04C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DD050
  c->lr=0x800DD058u; f_800DD070(c); // 800DD054
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DD058
  c->lr=c->r[0]; // 800DD05C
  c->r[1]=c->r[1]+0x00000020u; // 800DD060
  return; // 800DD064
}

// fn_800DD070
void f_800DD070(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD070
  c->r[0]=c->lr; // 800DD074
  W32(c->r[1]+0x00000034u,c->r[0]); // 800DD078
  c->r[11]=c->r[1]+0x00000030u; // 800DD07C
  c->lr=0x800DD084u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800DD080
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; cr0(c,c->r[0]); // 800DD084
  c->r[31]=0u+0x80260000u; // 800DD088
  c->r[28]=c->r[3]|c->r[3]; // 800DD08C
  c->r[29]=c->r[4]|c->r[4]; // 800DD090
  c->r[30]=c->r[5]|c->r[5]; // 800DD094
  c->r[31]=c->r[31]+0xFFFF9148u; // 800DD098
  if (crb(c,2)) { goto L_800DD0B8; } // 800DD09C
  c->r[6]=c->r[29]|c->r[29]; // 800DD0A0
  c->r[3]=c->r[31]+0x00000048u; // 800DD0A4
  c->r[5]=c->r[31]+0x000000D0u; // 800DD0A8
  c->r[4]=0u+0x00000090u; // 800DD0AC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DD0B0
  c->lr=0x800DD0B8u; f_800F1300(c); // 800DD0B4
L_800DD0B8:;
  c->r[0]=R32(c->r[28]+0x00000004u); // 800DD0B8
  c->r[0]=rotl(c->r[0],0)&0x00000007u; cr0(c,c->r[0]); // 800DD0BC
  if (crb(c,2)) { goto L_800DD0D8; } // 800DD0C0
  c->r[3]=c->r[31]+0x00000048u; // 800DD0C4
  c->r[5]=c->r[31]+0x0000005Cu; // 800DD0C8
  c->r[4]=0u+0x0000006Au; // 800DD0CC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DD0D0
  c->lr=0x800DD0D8u; f_800F1300(c); // 800DD0D4
L_800DD0D8:;
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 800DD0D8
  c->r[0]=rotl(c->r[0],0)&0x00000007u; cr0(c,c->r[0]); // 800DD0DC
  if (crb(c,2)) { goto L_800DD0F8; } // 800DD0E0
  c->r[3]=c->r[31]+0x00000048u; // 800DD0E4
  c->r[5]=c->r[31]+0x00000098u; // 800DD0E8
  c->r[4]=0u+0x0000006Bu; // 800DD0EC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DD0F0
  c->lr=0x800DD0F8u; f_800F1300(c); // 800DD0F4
L_800DD0F8:;
  c->lr=0x800DD0FCu; f_801B04B0(c); // 800DD0F8
  c->r[25]=c->r[3]|c->r[3]; // 800DD0FC
  c->lr=0x800DD104u; f_800E6060(c); // 800DD100
  c->r[4]=c->r[25]|c->r[25]; // 800DD104
  c->lr=0x800DD10Cu; f_800E6150(c); // 800DD108
  c->r[27]=c->r[3]|c->r[3]; // 800DD10C
  c->lr=0x800DD114u; f_800C8A10(c); // 800DD110
  c->r[4]=c->r[25]|c->r[25]; // 800DD114
  c->lr=0x800DD11Cu; f_800C8B30(c); // 800DD118
  c->r[4]=R32(c->r[28]+0x00000004u); // 800DD11C
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 800DD120
  c->r[26]=c->r[3]+c->r[4]; // 800DD124
  c->r[27]=c->r[27]+c->r[0]; // 800DD128
  c->lr=0x800DD130u; f_800CC790(c); // 800DD12C
  c->r[4]=c->r[25]|c->r[25]; // 800DD130
  c->lr=0x800DD138u; f_800CC870(c); // 800DD134
  c->r[0]=c->r[26]+c->r[27]; // 800DD138
  c->r[0]=c->r[3]+c->r[0]; // 800DD13C
  cmpu(c,0,c->r[30],c->r[0]); // 800DD140
  if (!crb(c,0)) { goto L_800DD15C; } // 800DD144
  c->r[3]=c->r[31]+0x00000048u; // 800DD148
  c->r[5]=c->r[31]+0x0000011Cu; // 800DD14C
  c->r[4]=0u+0x00000091u; // 800DD150
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DD154
  c->lr=0x800DD15Cu; f_800F1300(c); // 800DD158
L_800DD15C:;
  c->r[0]=R8(c->r[13]+0xFFFFAE08u); // 800DD15C
  cmps(c,0,(int32_t)c->r[0],0); // 800DD160
  if (!crb(c,2)) { goto L_800DD350; } // 800DD164
  c->r[0]=0u+0x00000001u; // 800DD168
  W8(c->r[13]+0xFFFFAE08u,c->r[0]); // 800DD16C
  c->r[3]=R32(c->r[13]+0xFFFF9F60u); // 800DD170
  c->lr=0x800DD178u; f_80187B20(c); // 800DD174
  c->lr=0x800DD17Cu; f_800C4CC0(c); // 800DD178
  c->lr=0x800DD180u; f_800C4DB0(c); // 800DD17C
  c->lr=0x800DD184u; f_801B65A0(c); // 800DD180
L_800DD184:;
  c->lr=0x800DD188u; f_801B6640(c); // 800DD184
  cmpu(c,0,c->r[3],0x00000001u); // 800DD188
  if (crb(c,2)) { IRQCHK(c); goto L_800DD184; } // 800DD18C
  cmps(c,0,(int32_t)c->r[3],0); // 800DD190
  if (crb(c,2)) { goto L_800DD1AC; } // 800DD194
  c->r[3]=c->r[31]+0x00000048u; // 800DD198
  c->r[5]=c->r[31]+0x00000160u; // 800DD19C
  c->r[4]=0u+0x000000ABu; // 800DD1A0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DD1A4
  c->lr=0x800DD1ACu; f_800F1300(c); // 800DD1A8
L_800DD1AC:;
  c->lr=0x800DD1B0u; f_801B8150(c); // 800DD1AC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 800DD1B0
  if (crb(c,2)) { goto L_800DD1CC; } // 800DD1B4
  cmps(c,0,(int32_t)c->r[0],1); // 800DD1B8
  if (crb(c,2)) { goto L_800DD1DC; } // 800DD1BC
  cmps(c,0,(int32_t)c->r[0],2); // 800DD1C0
  if (crb(c,2)) { goto L_800DD1EC; } // 800DD1C4
  goto L_800DD1FC; // 800DD1C8
L_800DD1CC:;
  c->lr=0x800DD1D0u; f_800C4CC0(c); // 800DD1CC
  c->r[4]=0u+0x00000003u; // 800DD1D0
  c->lr=0x800DD1D8u; f_800C54C0(c); // 800DD1D4
  goto L_800DD208; // 800DD1D8
L_800DD1DC:;
  c->lr=0x800DD1E0u; f_800C4CC0(c); // 800DD1DC
  c->r[4]=0u+0x00000000u; // 800DD1E0
  c->lr=0x800DD1E8u; f_800C54C0(c); // 800DD1E4
  goto L_800DD208; // 800DD1E8
L_800DD1EC:;
  c->lr=0x800DD1F0u; f_800C4CC0(c); // 800DD1EC
  c->r[4]=0u+0x00000002u; // 800DD1F0
  c->lr=0x800DD1F8u; f_800C54C0(c); // 800DD1F4
  goto L_800DD208; // 800DD1F8
L_800DD1FC:;
  c->lr=0x800DD200u; f_800C4CC0(c); // 800DD1FC
  c->r[4]=0u+0x00000000u; // 800DD200
  c->lr=0x800DD208u; f_800C54C0(c); // 800DD204
L_800DD208:;
  c->lr=0x800DD20Cu; f_800D1CD0(c); // 800DD208
  c->lr=0x800DD210u; f_800D1DF0(c); // 800DD20C
  c->r[3]=R32(c->r[28]+0x0000000Cu); // 800DD210
  c->r[0]=R32(c->r[28]+0x00000004u); // 800DD214
  c->r[25]=c->r[29]+c->r[3]; // 800DD218
  c->r[26]=c->r[25]|c->r[25]; // 800DD21C
  c->r[25]=c->r[25]+c->r[0]; // 800DD220
  c->lr=0x800DD228u; f_801B04B0(c); // 800DD224
  W32(c->r[13]+0xFFFFAE0Cu,c->r[3]); // 800DD228
  c->r[24]=c->r[25]|c->r[25]; // 800DD22C
  c->lr=0x800DD234u; f_800C8A10(c); // 800DD230
  c->r[4]=R32(c->r[13]+0xFFFFAE0Cu); // 800DD234
  c->lr=0x800DD23Cu; f_800C8B30(c); // 800DD238
  c->r[25]=c->r[25]+c->r[3]; // 800DD23C
  c->lr=0x800DD244u; f_800C8A10(c); // 800DD240
  c->r[4]=R32(c->r[13]+0xFFFFAE0Cu); // 800DD244
  c->lr=0x800DD24Cu; f_800C8B30(c); // 800DD248
  c->r[27]=c->r[3]|c->r[3]; // 800DD24C
  c->lr=0x800DD254u; f_800C8A10(c); // 800DD250
  c->r[4]=c->r[24]|c->r[24]; // 800DD254
  c->r[5]=c->r[27]|c->r[27]; // 800DD258
  c->lr=0x800DD260u; f_800C8B40(c); // 800DD25C
  c->r[24]=c->r[25]|c->r[25]; // 800DD260
  c->lr=0x800DD268u; f_800E6060(c); // 800DD264
  c->r[4]=R32(c->r[13]+0xFFFFAE0Cu); // 800DD268
  c->lr=0x800DD270u; f_800E6150(c); // 800DD26C
  c->r[25]=c->r[25]+c->r[3]; // 800DD270
  c->lr=0x800DD278u; f_800E6060(c); // 800DD274
  c->r[4]=R32(c->r[13]+0xFFFFAE0Cu); // 800DD278
  c->lr=0x800DD280u; f_800E6150(c); // 800DD27C
  c->r[27]=c->r[3]|c->r[3]; // 800DD280
  c->lr=0x800DD288u; f_800E6060(c); // 800DD284
  c->r[4]=c->r[24]|c->r[24]; // 800DD288
  c->r[5]=c->r[27]|c->r[27]; // 800DD28C
  c->lr=0x800DD294u; f_800E6160(c); // 800DD290
  c->r[24]=c->r[25]|c->r[25]; // 800DD294
  c->lr=0x800DD29Cu; f_800CC790(c); // 800DD298
  c->r[4]=R32(c->r[13]+0xFFFFAE0Cu); // 800DD29C
  c->lr=0x800DD2A4u; f_800CC870(c); // 800DD2A0
  c->r[25]=c->r[25]+c->r[3]; // 800DD2A4
  c->lr=0x800DD2ACu; f_800CC790(c); // 800DD2A8
  c->r[4]=R32(c->r[13]+0xFFFFAE0Cu); // 800DD2AC
  c->lr=0x800DD2B4u; f_800CC870(c); // 800DD2B0
  c->r[27]=c->r[3]|c->r[3]; // 800DD2B4
  c->lr=0x800DD2BCu; f_800CC790(c); // 800DD2B8
  c->r[4]=c->r[24]|c->r[24]; // 800DD2BC
  c->r[5]=c->r[27]|c->r[27]; // 800DD2C0
  c->lr=0x800DD2C8u; f_800CC880(c); // 800DD2C4
  c->lr=0x800DD2CCu; f_800D2290(c); // 800DD2C8
  c->r[3]=0u+0x80290000u; // 800DD2CC
  c->r[4]=R32(c->r[28]+0x00000008u); // 800DD2D0
  c->r[6]=R32(c->r[28]+0x0000000Cu); // 800DD2D4
  c->r[5]=c->r[29]|c->r[29]; // 800DD2D8
  c->r[3]=c->r[3]+0x000047F0u; // 800DD2DC
  c->lr=0x800DD2E4u; f_800E3120(c); // 800DD2E0
  cmps(c,0,(int32_t)c->r[3],0); // 800DD2E4
  if (!crb(c,2)) { goto L_800DD300; } // 800DD2E8
  c->r[3]=c->r[31]+0x00000048u; // 800DD2EC
  c->r[5]=c->r[31]+0x00000194u; // 800DD2F0
  c->r[4]=0u+0x000000F7u; // 800DD2F4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DD2F8
  c->lr=0x800DD300u; f_800F1300(c); // 800DD2FC
L_800DD300:;
  c->lr=0x800DD304u; f_800DD3D0(c); // 800DD300
  c->r[4]=R32(c->r[28]+0x00000000u); // 800DD304
  c->r[5]=c->r[26]|c->r[26]; // 800DD308
  c->r[6]=R32(c->r[28]+0x00000004u); // 800DD30C
  c->lr=0x800DD314u; f_800DD500(c); // 800DD310
  cmps(c,0,(int32_t)c->r[3],0); // 800DD314
  if (!crb(c,2)) { goto L_800DD330; } // 800DD318
  c->r[3]=c->r[31]+0x00000048u; // 800DD31C
  c->r[5]=c->r[31]+0x00000194u; // 800DD320
  c->r[4]=0u+0x000000FFu; // 800DD324
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DD328
  c->lr=0x800DD330u; f_800F1300(c); // 800DD32C
L_800DD330:;
  c->r[0]=c->r[29]+c->r[30]; // 800DD330
  cmpu(c,0,c->r[25],c->r[0]); // 800DD334
  if (!crb(c,1)) { goto L_800DD350; } // 800DD338
  c->r[3]=c->r[31]+0x00000048u; // 800DD33C
  c->r[5]=c->r[31]+0x000001B4u; // 800DD340
  c->r[4]=0u+0x00000101u; // 800DD344
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DD348
  c->lr=0x800DD350u; f_800F1300(c); // 800DD34C
L_800DD350:;
  c->r[11]=c->r[1]+0x00000030u; // 800DD350
  c->lr=0x800DD358u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800DD354
  c->r[0]=R32(c->r[1]+0x00000034u); // 800DD358
  c->lr=c->r[0]; // 800DD35C
  c->r[1]=c->r[1]+0x00000030u; // 800DD360
  return; // 800DD364
}

// fn_800DD370
void f_800DD370(Ctx* __restrict c) {
  c->r[3]=R8(c->r[13]+0xFFFFAE08u); // 800DD370
  return; // 800DD374
}

// fn_800DD380
void f_800DD380(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD380
  c->r[0]=c->lr; // 800DD384
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DD388
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DD38C
  c->r[31]=0u+0x80290000u; // 800DD390
  c->r[3]=c->r[31]+0x000047F0u; // 800DD394
  c->lr=0x800DD39Cu; f_800E3050(c); // 800DD398
  c->r[4]=0u+0x800E0000u; // 800DD39C
  c->r[5]=0u+0x80290000u; // 800DD3A0
  c->r[3]=c->r[31]+0x000047F0u; // 800DD3A4
  c->r[4]=c->r[4]+0x00003070u; // 800DD3A8
  c->r[5]=c->r[5]+0x000047E0u; // 800DD3AC
  c->lr=0x800DD3B4u; f_80206D98(c); // 800DD3B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DD3B4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DD3B8
  c->lr=c->r[0]; // 800DD3BC
  c->r[1]=c->r[1]+0x00000010u; // 800DD3C0
  return; // 800DD3C4
}

// fn_800DD3D0
void f_800DD3D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD3D0
  c->r[0]=c->lr; // 800DD3D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DD3D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DD3DC
  c->r[0]=R8(c->r[13]+0xFFFFAE10u); // 800DD3E0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800DD3E4
  if (!crb(c,2)) { goto L_800DD46C; } // 800DD3E8
  c->r[31]=0u+0x802B0000u; // 800DD3EC
  c->r[0]=0u+0x00000000u; // 800DD3F0
  c->r[31]=c->r[31]+0xFFFFA110u; // 800DD3F4
  c->r[5]=0u+0x00000004u; // 800DD3F8
  c->r[7]=c->r[31]+0x0000037Cu; // 800DD3FC
  W32(c->r[31]+0x00000350u,c->r[0]); // 800DD400
  c->r[6]=c->r[31]+0x00000388u; // 800DD404
  c->r[3]=c->r[31]+0x00000320u; // 800DD408
  W32(c->r[31]+0x0000036Cu,c->r[0]); // 800DD40C
  c->r[4]=c->r[31]+0x00000340u; // 800DD410
  W32(c->r[31]+0x00000370u,c->r[0]); // 800DD414
  W32(c->r[31]+0x00000378u,c->r[0]); // 800DD418
  W32(c->r[31]+0x0000037Cu,c->r[7]); // 800DD41C
  W32(c->r[31]+0x00000380u,c->r[7]); // 800DD420
  W32(c->r[31]+0x00000384u,c->r[0]); // 800DD424
  W32(c->r[31]+0x00000388u,c->r[6]); // 800DD428
  W32(c->r[31]+0x0000038Cu,c->r[6]); // 800DD42C
  W8(c->r[31]+0x00000394u,c->r[0]); // 800DD430
  W8(c->r[31]+0x00000395u,c->r[0]); // 800DD434
  c->lr=0x800DD43Cu; f_8018DE90(c); // 800DD438
  c->r[3]=c->r[31]+0x00000318u; // 800DD43C
  c->lr=0x800DD444u; f_80190370(c); // 800DD440
  c->r[3]=c->r[31]+0x00000354u; // 800DD444
  c->lr=0x800DD44Cu; f_8018E910(c); // 800DD448
  c->r[4]=0u+0x800E0000u; // 800DD44C
  c->r[5]=0u+0x802B0000u; // 800DD450
  c->r[3]=c->r[31]|c->r[31]; // 800DD454
  c->r[4]=c->r[4]+0xFFFFD490u; // 800DD458
  c->r[5]=c->r[5]+0xFFFFA100u; // 800DD45C
  c->lr=0x800DD464u; f_80206D98(c); // 800DD460
  c->r[0]=0u+0x00000001u; // 800DD464
  W8(c->r[13]+0xFFFFAE10u,c->r[0]); // 800DD468
L_800DD46C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DD46C
  c->r[3]=0u+0x802B0000u; // 800DD470
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DD474
  c->r[3]=c->r[3]+0xFFFFA110u; // 800DD478
  c->lr=c->r[0]; // 800DD47C
  c->r[1]=c->r[1]+0x00000010u; // 800DD480
  return; // 800DD484
}

// fn_800DD490
void f_800DD490(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD490
  c->r[0]=c->lr; // 800DD494
  cmps(c,0,(int32_t)c->r[3],0); // 800DD498
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DD49C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DD4A0
  c->r[31]=c->r[4]|c->r[4]; // 800DD4A4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DD4A8
  c->r[30]=c->r[3]|c->r[3]; // 800DD4AC
  if (crb(c,2)) { goto L_800DD4E4; } // 800DD4B0
  c->r[3]=addc(c,c->r[3],0x00000384u,0); cr0(c,c->r[3]); // 800DD4B4
  if (crb(c,2)) { goto L_800DD4C4; } // 800DD4B8
  c->r[4]=0u+0x00000000u; // 800DD4BC
  c->lr=0x800DD4C4u; f_800F1940(c); // 800DD4C0
L_800DD4C4:;
  c->r[3]=addc(c,c->r[30],0x00000378u,0); cr0(c,c->r[3]); // 800DD4C4
  if (crb(c,2)) { goto L_800DD4D4; } // 800DD4C8
  c->r[4]=0u+0x00000000u; // 800DD4CC
  c->lr=0x800DD4D4u; f_800F1940(c); // 800DD4D0
L_800DD4D4:;
  cmps(c,0,(int32_t)c->r[31],0); // 800DD4D4
  if (!crb(c,1)) { goto L_800DD4E4; } // 800DD4D8
  c->r[3]=c->r[30]|c->r[30]; // 800DD4DC
  c->lr=0x800DD4E4u; f_8015D040(c); // 800DD4E0
L_800DD4E4:;
  c->r[3]=c->r[30]|c->r[30]; // 800DD4E4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DD4E8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DD4EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DD4F0
  c->lr=c->r[0]; // 800DD4F4
  c->r[1]=c->r[1]+0x00000010u; // 800DD4F8
  return; // 800DD4FC
}

// fn_800DD500
void f_800DD500(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD500
  c->r[0]=c->lr; // 800DD504
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DD508
  c->r[11]=c->r[1]+0x00000020u; // 800DD50C
  c->lr=0x800DD514u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800DD510
  c->r[31]=0u+0x80260000u; // 800DD514
  c->r[26]=c->r[3]|c->r[3]; // 800DD518
  c->r[27]=c->r[4]|c->r[4]; // 800DD51C
  c->r[28]=c->r[5]|c->r[5]; // 800DD520
  c->r[29]=c->r[6]|c->r[6]; // 800DD524
  c->r[31]=c->r[31]+0xFFFF9378u; // 800DD528
  c->lr=0x800DD530u; f_800C4CC0(c); // 800DD52C
  c->r[0]=R8(c->r[3]+0x00000018u); // 800DD530
  cmps(c,0,(int32_t)c->r[0],0); // 800DD534
  if (!crb(c,2)) { goto L_800DD550; } // 800DD538
  c->r[3]=c->r[31]+0x00000000u; // 800DD53C
  c->r[5]=c->r[31]+0x00000014u; // 800DD540
  c->r[4]=0u+0x0000004Fu; // 800DD544
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DD548
  c->lr=0x800DD550u; f_800F1300(c); // 800DD54C
L_800DD550:;
  cmps(c,0,(int32_t)c->r[28],0); // 800DD550
  if (!crb(c,2)) { goto L_800DD56C; } // 800DD554
  c->r[3]=c->r[31]+0x00000000u; // 800DD558
  c->r[5]=c->r[31]+0x00000038u; // 800DD55C
  c->r[4]=0u+0x00000050u; // 800DD560
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DD564
  c->lr=0x800DD56Cu; f_800F1300(c); // 800DD568
L_800DD56C:;
  c->r[0]=rotl(c->r[28],0)&0x00000003u; cr0(c,c->r[0]); // 800DD56C
  if (crb(c,2)) { goto L_800DD58C; } // 800DD570
  c->r[6]=c->r[28]|c->r[28]; // 800DD574
  c->r[3]=c->r[31]+0x00000000u; // 800DD578
  c->r[5]=c->r[31]+0x00000060u; // 800DD57C
  c->r[4]=0u+0x00000051u; // 800DD580
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DD584
  c->lr=0x800DD58Cu; f_800F1300(c); // 800DD588
L_800DD58C:;
  c->r[0]=R8(c->r[26]+0x00000394u); // 800DD58C
  cmps(c,0,(int32_t)c->r[0],0); // 800DD590
  if (crb(c,2)) { goto L_800DD5A0; } // 800DD594
  c->r[3]=0u+0x00000001u; // 800DD598
  goto L_800DD67C; // 800DD59C
L_800DD5A0:;
  c->r[31]=0u+0x00000001u; // 800DD5A0
  W8(c->r[26]+0x00000394u,c->r[31]); // 800DD5A4
  W32(c->r[26]+0x00000350u,c->r[28]); // 800DD5A8
  c->r[0]=R8(c->r[13]+0xFFFFAE10u); // 800DD5AC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800DD5B0
  if (!crb(c,2)) { goto L_800DD634; } // 800DD5B4
  c->r[30]=0u+0x802B0000u; // 800DD5B8
  c->r[0]=0u+0x00000000u; // 800DD5BC
  c->r[30]=c->r[30]+0xFFFFA110u; // 800DD5C0
  c->r[5]=0u+0x00000004u; // 800DD5C4
  c->r[6]=c->r[30]+0x0000037Cu; // 800DD5C8
  W32(c->r[30]+0x00000350u,c->r[0]); // 800DD5CC
  c->r[7]=c->r[30]+0x00000388u; // 800DD5D0
  c->r[3]=c->r[30]+0x00000320u; // 800DD5D4
  W32(c->r[30]+0x0000036Cu,c->r[0]); // 800DD5D8
  c->r[4]=c->r[30]+0x00000340u; // 800DD5DC
  W32(c->r[30]+0x00000370u,c->r[0]); // 800DD5E0
  W32(c->r[30]+0x00000378u,c->r[0]); // 800DD5E4
  W32(c->r[30]+0x0000037Cu,c->r[6]); // 800DD5E8
  W32(c->r[30]+0x00000380u,c->r[6]); // 800DD5EC
  W32(c->r[30]+0x00000384u,c->r[0]); // 800DD5F0
  W32(c->r[30]+0x00000388u,c->r[7]); // 800DD5F4
  W32(c->r[30]+0x0000038Cu,c->r[7]); // 800DD5F8
  W8(c->r[30]+0x00000394u,c->r[0]); // 800DD5FC
  W8(c->r[30]+0x00000395u,c->r[0]); // 800DD600
  c->lr=0x800DD608u; f_8018DE90(c); // 800DD604
  c->r[3]=c->r[30]+0x00000318u; // 800DD608
  c->lr=0x800DD610u; f_80190370(c); // 800DD60C
  c->r[3]=c->r[30]+0x00000354u; // 800DD610
  c->lr=0x800DD618u; f_8018E910(c); // 800DD614
  c->r[4]=0u+0x800E0000u; // 800DD618
  c->r[5]=0u+0x802B0000u; // 800DD61C
  c->r[3]=c->r[30]|c->r[30]; // 800DD620
  c->r[4]=c->r[4]+0xFFFFD490u; // 800DD624
  c->r[5]=c->r[5]+0xFFFFA100u; // 800DD628
  c->lr=0x800DD630u; f_80206D98(c); // 800DD62C
  W8(c->r[13]+0xFFFFAE10u,c->r[31]); // 800DD630
L_800DD634:;
  c->r[4]=0u+0x800E0000u; // 800DD634
  c->r[5]=0u+0x802B0000u; // 800DD638
  c->r[3]=c->r[26]|c->r[26]; // 800DD63C
  c->r[7]=c->r[29]|c->r[29]; // 800DD640
  c->r[8]=c->r[27]|c->r[27]; // 800DD644
  c->r[4]=c->r[4]+0xFFFFD7E0u; // 800DD648
  c->r[5]=c->r[5]+0xFFFFA110u; // 800DD64C
  c->r[6]=c->r[28]+c->r[29]; // 800DD650
  c->r[9]=0u+0x00000000u; // 800DD654
  c->lr=0x800DD65Cu; f_80190910(c); // 800DD658
  cmps(c,0,(int32_t)c->r[3],0); // 800DD65C
  c->r[31]=c->r[3]|c->r[3]; // 800DD660
  if (crb(c,2)) { goto L_800DD670; } // 800DD664
  c->r[3]=c->r[26]|c->r[26]; // 800DD668
  c->lr=0x800DD670u; f_80190FA0(c); // 800DD66C
L_800DD670:;
  c->r[0]=0u-c->r[31]; // 800DD670
  c->r[0]=c->r[0]|c->r[31]; // 800DD674
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800DD678
L_800DD67C:;
  c->r[11]=c->r[1]+0x00000020u; // 800DD67C
  c->lr=0x800DD684u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800DD680
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DD684
  c->lr=c->r[0]; // 800DD688
  c->r[1]=c->r[1]+0x00000020u; // 800DD68C
  return; // 800DD690
}

// fn_800DD6A0
void f_800DD6A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD6A0
  c->r[0]=c->lr; // 800DD6A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DD6A8
  c->r[11]=c->r[1]+0x00000020u; // 800DD6AC
  c->lr=0x800DD6B4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800DD6B0
  c->r[0]=R8(c->r[13]+0xFFFFAE10u); // 800DD6B4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800DD6B8
  if (!crb(c,2)) { goto L_800DD740; } // 800DD6BC
  c->r[28]=0u+0x802B0000u; // 800DD6C0
  c->r[0]=0u+0x00000000u; // 800DD6C4
  c->r[28]=c->r[28]+0xFFFFA110u; // 800DD6C8
  c->r[5]=0u+0x00000004u; // 800DD6CC
  c->r[6]=c->r[28]+0x0000037Cu; // 800DD6D0
  W32(c->r[28]+0x00000350u,c->r[0]); // 800DD6D4
  c->r[7]=c->r[28]+0x00000388u; // 800DD6D8
  c->r[3]=c->r[28]+0x00000320u; // 800DD6DC
  W32(c->r[28]+0x0000036Cu,c->r[0]); // 800DD6E0
  c->r[4]=c->r[28]+0x00000340u; // 800DD6E4
  W32(c->r[28]+0x00000370u,c->r[0]); // 800DD6E8
  W32(c->r[28]+0x00000378u,c->r[0]); // 800DD6EC
  W32(c->r[28]+0x0000037Cu,c->r[6]); // 800DD6F0
  W32(c->r[28]+0x00000380u,c->r[6]); // 800DD6F4
  W32(c->r[28]+0x00000384u,c->r[0]); // 800DD6F8
  W32(c->r[28]+0x00000388u,c->r[7]); // 800DD6FC
  W32(c->r[28]+0x0000038Cu,c->r[7]); // 800DD700
  W8(c->r[28]+0x00000394u,c->r[0]); // 800DD704
  W8(c->r[28]+0x00000395u,c->r[0]); // 800DD708
  c->lr=0x800DD710u; f_8018DE90(c); // 800DD70C
  c->r[3]=c->r[28]+0x00000318u; // 800DD710
  c->lr=0x800DD718u; f_80190370(c); // 800DD714
  c->r[3]=c->r[28]+0x00000354u; // 800DD718
  c->lr=0x800DD720u; f_8018E910(c); // 800DD71C
  c->r[4]=0u+0x800E0000u; // 800DD720
  c->r[5]=0u+0x802B0000u; // 800DD724
  c->r[3]=c->r[28]|c->r[28]; // 800DD728
  c->r[4]=c->r[4]+0xFFFFD490u; // 800DD72C
  c->r[5]=c->r[5]+0xFFFFA100u; // 800DD730
  c->lr=0x800DD738u; f_80206D98(c); // 800DD734
  c->r[0]=0u+0x00000001u; // 800DD738
  W8(c->r[13]+0xFFFFAE10u,c->r[0]); // 800DD73C
L_800DD740:;
  c->r[28]=0u+0x802B0000u; // 800DD740
  c->r[28]=c->r[28]+0xFFFFA110u; // 800DD744
  c->r[0]=R8(c->r[28]+0x00000395u); // 800DD748
  cmps(c,0,(int32_t)c->r[0],0); // 800DD74C
  if (!crb(c,2)) { goto L_800DD764; } // 800DD750
  c->r[3]=c->r[28]+0x00000320u; // 800DD754
  c->r[4]=0u+0x00000001u; // 800DD758
  c->r[5]=0u+0x00000000u; // 800DD75C
  c->lr=0x800DD764u; f_8018DEF0(c); // 800DD760
L_800DD764:;
  c->r[31]=R32(c->r[28]+0x00000388u); // 800DD764
  c->r[30]=c->r[28]+0x00000388u; // 800DD768
  c->r[28]=0u+0x80260000u; // 800DD76C
  c->r[29]=0u+0x80260000u; // 800DD770
  goto L_800DD7AC; // 800DD774
L_800DD778:;
  c->r[27]=c->r[31]|c->r[31]; cr0(c,c->r[27]); // 800DD778
  c->r[31]=R32(c->r[31]+0x00000000u); // 800DD77C
  if (!crb(c,2)) { goto L_800DD798; } // 800DD780
  c->r[3]=c->r[28]+0xFFFF9530u; // 800DD784
  c->r[5]=c->r[29]+0xFFFF950Cu; // 800DD788
  c->r[4]=0u+0x0000023Du; // 800DD78C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DD790
  c->lr=0x800DD798u; f_800F1300(c); // 800DD794
L_800DD798:;
  c->r[12]=R32(c->r[27]+0x00000008u); // 800DD798
  c->r[3]=c->r[27]|c->r[27]; // 800DD79C
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DD7A0
  c->ctr=c->r[12]; // 800DD7A4
  if (true) { c->lr=0x800DD7ACu; dispatch(c,c->ctr); } // 800DD7A8
L_800DD7AC:;
  cmpu(c,0,c->r[31],c->r[30]); // 800DD7AC
  if (!crb(c,2)) { IRQCHK(c); goto L_800DD778; } // 800DD7B0
  c->lr=0x800DD7B8u; f_800E6060(c); // 800DD7B4
  c->lr=0x800DD7BCu; f_800E68B0(c); // 800DD7B8
  c->r[11]=c->r[1]+0x00000020u; // 800DD7BC
  c->lr=0x800DD7C4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800DD7C0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DD7C4
  c->lr=c->r[0]; // 800DD7C8
  c->r[1]=c->r[1]+0x00000020u; // 800DD7CC
  return; // 800DD7D0
}

// fn_800DD7E0
void f_800DD7E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD7E0
  c->r[0]=c->lr; // 800DD7E4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800DD7E8
  c->r[11]=c->r[1]+0x00000030u; // 800DD7EC
  c->lr=0x800DD7F4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800DD7F0
  c->r[26]=c->r[3]|c->r[3]; // 800DD7F4
  c->lr=0x800DD7FCu; f_800C4CC0(c); // 800DD7F8
  c->r[5]=0u+0x800E0000u; // 800DD7FC
  c->r[4]=c->r[26]+0x0000036Cu; // 800DD800
  c->r[5]=c->r[5]+0xFFFFD6A0u; // 800DD804
  c->lr=0x800DD80Cu; f_800C53A0(c); // 800DD808
  c->r[29]=0u+0x80260000u; // 800DD80C
  c->r[28]=0u+0x80260000u; // 800DD810
L_800DD814:;
  c->r[3]=c->r[26]+0x00000320u; // 800DD814
  c->r[4]=c->r[1]+0x00000008u; // 800DD818
  c->r[5]=0u+0x00000001u; // 800DD81C
  c->lr=0x800DD824u; f_8018DFC0(c); // 800DD820
  c->r[0]=R32(c->r[1]+0x00000008u); // 800DD824
  cmpu(c,0,c->r[0],0x00000001u); // 800DD828
  if (!crb(c,2)) { goto L_800DD83C; } // 800DD82C
  c->r[3]=c->r[26]|c->r[26]; // 800DD830
  c->lr=0x800DD838u; f_800DDA10(c); // 800DD834
  goto L_800DD844; // 800DD838
L_800DD83C:;
  cmpu(c,0,c->r[0],0x00000002u); // 800DD83C
  if (crb(c,2)) { goto L_800DD870; } // 800DD840
L_800DD844:;
  c->r[3]=R32(c->r[26]+0x00000350u); // 800DD844
  c->r[3]=R32(c->r[3]+0x00000000u); // 800DD848
  c->r[0]=c->r[3]+0x21530000u; // 800DD84C
  cmpu(c,0,c->r[0],0x0000BABEu); // 800DD850
  if (crb(c,2)) { IRQCHK(c); goto L_800DD814; } // 800DD854
  c->r[3]=c->r[29]+0xFFFF9378u; // 800DD858
  c->r[5]=c->r[28]+0xFFFF9440u; // 800DD85C
  c->r[4]=0u+0x0000014Bu; // 800DD860
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DD864
  c->lr=0x800DD86Cu; f_800F1300(c); // 800DD868
  IRQCHK(c); goto L_800DD814; // 800DD86C
L_800DD870:;
  c->r[31]=R32(c->r[26]+0x00000388u); // 800DD870
  c->r[30]=c->r[26]+0x00000388u; // 800DD874
  c->r[28]=0u+0x80260000u; // 800DD878
  c->r[29]=0u+0x80260000u; // 800DD87C
  goto L_800DD8B8; // 800DD880
L_800DD884:;
  c->r[27]=c->r[31]|c->r[31]; cr0(c,c->r[27]); // 800DD884
  c->r[31]=R32(c->r[31]+0x00000000u); // 800DD888
  if (!crb(c,2)) { goto L_800DD8A4; } // 800DD88C
  c->r[3]=c->r[28]+0xFFFF9530u; // 800DD890
  c->r[5]=c->r[29]+0xFFFF950Cu; // 800DD894
  c->r[4]=0u+0x0000023Du; // 800DD898
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DD89C
  c->lr=0x800DD8A4u; f_800F1300(c); // 800DD8A0
L_800DD8A4:;
  c->r[12]=R32(c->r[27]+0x00000008u); // 800DD8A4
  c->r[3]=c->r[27]|c->r[27]; // 800DD8A8
  c->r[12]=R32(c->r[12]+0x00000014u); // 800DD8AC
  c->ctr=c->r[12]; // 800DD8B0
  if (true) { c->lr=0x800DD8B8u; dispatch(c,c->ctr); } // 800DD8B4
L_800DD8B8:;
  cmpu(c,0,c->r[31],c->r[30]); // 800DD8B8
  if (!crb(c,2)) { IRQCHK(c); goto L_800DD884; } // 800DD8BC
  c->lr=0x800DD8C4u; f_800C4CC0(c); // 800DD8C0
  c->r[4]=c->r[26]+0x0000036Cu; // 800DD8C4
  c->lr=0x800DD8CCu; f_800C5440(c); // 800DD8C8
  c->r[11]=c->r[1]+0x00000030u; // 800DD8CC
  c->r[3]=0u+0x00000000u; // 800DD8D0
  c->lr=0x800DD8D8u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800DD8D4
  c->r[0]=R32(c->r[1]+0x00000034u); // 800DD8D8
  c->lr=c->r[0]; // 800DD8DC
  c->r[1]=c->r[1]+0x00000030u; // 800DD8E0
  return; // 800DD8E4
}

// fn_800DD8F0
void f_800DD8F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD8F0
  c->r[0]=c->lr; // 800DD8F4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DD8F8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800DD8FC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800DD900
  c->r[30]=c->r[3]+0x00000354u; // 800DD904
  W32(c->r[1]+0x00000014u,c->r[29]); // 800DD908
  c->r[29]=c->r[4]|c->r[4]; // 800DD90C
  W32(c->r[1]+0x00000010u,c->r[28]); // 800DD910
  c->r[28]=c->r[3]|c->r[3]; // 800DD914
  c->r[3]=c->r[30]|c->r[30]; // 800DD918
  c->lr=0x800DD920u; f_8018E950(c); // 800DD91C
  cmps(c,0,(int32_t)c->r[29],0); // 800DD920
  c->r[31]=c->r[28]+0x00000388u; // 800DD924
  if (!crb(c,2)) { goto L_800DD948; } // 800DD928
  c->r[3]=0u+0x80260000u; // 800DD92C
  c->r[5]=0u+0x80260000u; // 800DD930
  c->r[3]=c->r[3]+0xFFFF94D0u; // 800DD934
  c->r[4]=0u+0x00000233u; // 800DD938
  c->r[5]=c->r[5]+0xFFFF94ACu; // 800DD93C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DD940
  c->lr=0x800DD948u; f_800F1300(c); // 800DD944
L_800DD948:;
  W32(c->r[1]+0x00000008u,c->r[31]); // 800DD948
  c->r[5]=c->r[29]|c->r[29]; // 800DD94C
  c->r[3]=c->r[28]+0x00000384u; // 800DD950
  c->r[4]=c->r[1]+0x00000008u; // 800DD954
  c->lr=0x800DD95Cu; f_800F1CC0(c); // 800DD958
  c->r[3]=c->r[30]|c->r[30]; // 800DD95C
  c->lr=0x800DD964u; f_8018EA30(c); // 800DD960
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DD964
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800DD968
  c->r[30]=R32(c->r[1]+0x00000018u); // 800DD96C
  c->r[29]=R32(c->r[1]+0x00000014u); // 800DD970
  c->r[28]=R32(c->r[1]+0x00000010u); // 800DD974
  c->lr=c->r[0]; // 800DD978
  c->r[1]=c->r[1]+0x00000020u; // 800DD97C
  return; // 800DD980
}

// fn_800DD990
void f_800DD990(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD990
  c->r[0]=c->lr; // 800DD994
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DD998
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800DD99C
  c->r[31]=c->r[3]+0x00000354u; // 800DD9A0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800DD9A4
  c->r[30]=c->r[4]|c->r[4]; // 800DD9A8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800DD9AC
  c->r[29]=c->r[3]|c->r[3]; // 800DD9B0
  c->r[3]=c->r[31]|c->r[31]; // 800DD9B4
  c->lr=0x800DD9BCu; f_8018E950(c); // 800DD9B8
  cmps(c,0,(int32_t)c->r[30],0); // 800DD9BC
  if (!crb(c,2)) { goto L_800DD9E0; } // 800DD9C0
  c->r[3]=0u+0x80260000u; // 800DD9C4
  c->r[5]=0u+0x80260000u; // 800DD9C8
  c->r[3]=c->r[3]+0xFFFF94D0u; // 800DD9CC
  c->r[4]=0u+0x00000233u; // 800DD9D0
  c->r[5]=c->r[5]+0xFFFF94ACu; // 800DD9D4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DD9D8
  c->lr=0x800DD9E0u; f_800F1300(c); // 800DD9DC
L_800DD9E0:;
  c->r[4]=c->r[30]|c->r[30]; // 800DD9E0
  c->r[3]=c->r[29]+0x00000384u; // 800DD9E4
  c->lr=0x800DD9ECu; f_800F1DC0(c); // 800DD9E8
  c->r[3]=c->r[31]|c->r[31]; // 800DD9EC
  c->lr=0x800DD9F4u; f_8018EA30(c); // 800DD9F0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DD9F4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800DD9F8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800DD9FC
  c->r[29]=R32(c->r[1]+0x00000014u); // 800DDA00
  c->lr=c->r[0]; // 800DDA04
  c->r[1]=c->r[1]+0x00000020u; // 800DDA08
  return; // 800DDA0C
}

// fn_800DDA10
void f_800DDA10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DDA10
  c->r[0]=c->lr; // 800DDA14
  W32(c->r[1]+0x00000034u,c->r[0]); // 800DDA18
  c->r[11]=c->r[1]+0x00000030u; // 800DDA1C
  c->lr=0x800DDA24u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800DDA20
  c->r[26]=c->r[3]+0x00000354u; // 800DDA24
  c->r[24]=c->r[3]|c->r[3]; // 800DDA28
  c->r[3]=c->r[26]|c->r[26]; // 800DDA2C
  c->lr=0x800DDA34u; f_8018E950(c); // 800DDA30
  c->r[31]=R32(c->r[24]+0x0000037Cu); // 800DDA34
  c->r[30]=c->r[24]+0x0000037Cu; // 800DDA38
  c->r[28]=0u+0x80260000u; // 800DDA3C
  c->r[27]=0u+0x80260000u; // 800DDA40
  goto L_800DDA7C; // 800DDA44
L_800DDA48:;
  c->r[29]=c->r[31]|c->r[31]; cr0(c,c->r[29]); // 800DDA48
  c->r[31]=R32(c->r[31]+0x00000000u); // 800DDA4C
  if (!crb(c,2)) { goto L_800DDA68; } // 800DDA50
  c->r[3]=c->r[28]+0xFFFF94A0u; // 800DDA54
  c->r[5]=c->r[27]+0xFFFF947Cu; // 800DDA58
  c->r[4]=0u+0x0000023Du; // 800DDA5C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DDA60
  c->lr=0x800DDA68u; f_800F1300(c); // 800DDA64
L_800DDA68:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800DDA68
  c->r[3]=c->r[29]|c->r[29]; // 800DDA6C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800DDA70
  c->ctr=c->r[12]; // 800DDA74
  if (true) { c->lr=0x800DDA7Cu; dispatch(c,c->ctr); } // 800DDA78
L_800DDA7C:;
  cmpu(c,0,c->r[31],c->r[30]); // 800DDA7C
  if (!crb(c,2)) { IRQCHK(c); goto L_800DDA48; } // 800DDA80
  c->lr=0x800DDA88u; f_801915E0(c); // 800DDA84
  c->r[27]=c->r[3]|c->r[3]; // 800DDA88
  c->lr=0x800DDA90u; f_800C8A10(c); // 800DDA8C
  c->lr=0x800DDA94u; f_800C93B0(c); // 800DDA90
  c->lr=0x800DDA98u; f_800C4CC0(c); // 800DDA94
  c->lr=0x800DDA9Cu; f_800C4F70(c); // 800DDA98
  c->r[30]=R32(c->r[24]+0x00000388u); // 800DDA9C
  c->r[31]=c->r[24]+0x00000388u; // 800DDAA0
  c->r[29]=0u+0x80260000u; // 800DDAA4
  c->r[28]=0u+0x80260000u; // 800DDAA8
  goto L_800DDAE4; // 800DDAAC
L_800DDAB0:;
  c->r[25]=c->r[30]|c->r[30]; cr0(c,c->r[25]); // 800DDAB0
  c->r[30]=R32(c->r[30]+0x00000000u); // 800DDAB4
  if (!crb(c,2)) { goto L_800DDAD0; } // 800DDAB8
  c->r[3]=c->r[29]+0xFFFF9530u; // 800DDABC
  c->r[5]=c->r[28]+0xFFFF950Cu; // 800DDAC0
  c->r[4]=0u+0x0000023Du; // 800DDAC4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DDAC8
  c->lr=0x800DDAD0u; f_800F1300(c); // 800DDACC
L_800DDAD0:;
  c->r[12]=R32(c->r[25]+0x00000008u); // 800DDAD0
  c->r[3]=c->r[25]|c->r[25]; // 800DDAD4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800DDAD8
  c->ctr=c->r[12]; // 800DDADC
  if (true) { c->lr=0x800DDAE4u; dispatch(c,c->ctr); } // 800DDAE0
L_800DDAE4:;
  cmpu(c,0,c->r[30],c->r[31]); // 800DDAE4
  if (!crb(c,2)) { IRQCHK(c); goto L_800DDAB0; } // 800DDAE8
  c->lr=0x800DDAF0u; f_800CC790(c); // 800DDAEC
  c->lr=0x800DDAF4u; f_800CC920(c); // 800DDAF0
  c->lr=0x800DDAF8u; f_800E7160(c); // 800DDAF4
  c->lr=0x800DDAFCu; f_800E6060(c); // 800DDAF8
  c->lr=0x800DDB00u; f_800E67A0(c); // 800DDAFC
  c->lr=0x800DDB04u; f_801915E0(c); // 800DDB00
  c->r[0]=c->r[3]-c->r[27]; // 800DDB04
  c->r[30]=R32(c->r[24]+0x0000037Cu); // 800DDB08
  W32(c->r[24]+0x00000390u,c->r[0]); // 800DDB0C
  c->r[31]=c->r[24]+0x0000037Cu; // 800DDB10
  c->r[28]=0u+0x80260000u; // 800DDB14
  c->r[29]=0u+0x80260000u; // 800DDB18
  goto L_800DDB54; // 800DDB1C
L_800DDB20:;
  c->r[25]=c->r[30]|c->r[30]; cr0(c,c->r[25]); // 800DDB20
  c->r[30]=R32(c->r[30]+0x00000000u); // 800DDB24
  if (!crb(c,2)) { goto L_800DDB40; } // 800DDB28
  c->r[3]=c->r[28]+0xFFFF94A0u; // 800DDB2C
  c->r[5]=c->r[29]+0xFFFF947Cu; // 800DDB30
  c->r[4]=0u+0x0000023Du; // 800DDB34
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DDB38
  c->lr=0x800DDB40u; f_800F1300(c); // 800DDB3C
L_800DDB40:;
  c->r[12]=R32(c->r[25]+0x00000008u); // 800DDB40
  c->r[3]=c->r[25]|c->r[25]; // 800DDB44
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DDB48
  c->ctr=c->r[12]; // 800DDB4C
  if (true) { c->lr=0x800DDB54u; dispatch(c,c->ctr); } // 800DDB50
L_800DDB54:;
  cmpu(c,0,c->r[30],c->r[31]); // 800DDB54
  if (!crb(c,2)) { IRQCHK(c); goto L_800DDB20; } // 800DDB58
  c->r[3]=c->r[26]|c->r[26]; // 800DDB5C
  c->lr=0x800DDB64u; f_8018EA30(c); // 800DDB60
  c->r[11]=c->r[1]+0x00000030u; // 800DDB64
  c->lr=0x800DDB6Cu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800DDB68
  c->r[0]=R32(c->r[1]+0x00000034u); // 800DDB6C
  c->lr=c->r[0]; // 800DDB70
  c->r[1]=c->r[1]+0x00000030u; // 800DDB74
  return; // 800DDB78
}

// fn_800DDB80
void f_800DDB80(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DDB80
  c->r[0]=c->lr; // 800DDB84
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DDB88
  c->r[11]=c->r[1]+0x00000020u; // 800DDB8C
  c->lr=0x800DDB94u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800DDB90
  cmps(c,0,(int32_t)c->r[6],0); // 800DDB94
  c->r[27]=c->r[3]|c->r[3]; // 800DDB98
  c->r[28]=c->r[4]|c->r[4]; // 800DDB9C
  c->r[29]=c->r[5]|c->r[5]; // 800DDBA0
  c->r[30]=c->r[6]|c->r[6]; // 800DDBA4
  if (crb(c,2)) { goto L_800DDC10; } // 800DDBA8
  c->lr=0x800DDBB0u; f_8018D6A0(c); // 800DDBAC
  c->r[4]=divwu(c->r[29],c->r[30]); // 800DDBB0
  c->r[0]=0u+0x00000000u; // 800DDBB4
  c->r[31]=c->r[3]|c->r[3]; // 800DDBB8
  W32(c->r[27]+0x00000000u,c->r[28]); // 800DDBBC
  c->r[3]=c->r[27]+0x00000014u; // 800DDBC0
  W32(c->r[27]+0x00000004u,c->r[29]); // 800DDBC4
  W32(c->r[27]+0x00000008u,c->r[4]); // 800DDBC8
  c->r[4]=0u+0x00000000u; // 800DDBCC
  c->r[5]=0u+0x00000004u; // 800DDBD0
  W32(c->r[27]+0x0000000Cu,c->r[30]); // 800DDBD4
  W32(c->r[27]+0x00000010u,c->r[0]); // 800DDBD8
  c->lr=0x800DDBE0u; f_800046B4(c); // 800DDBDC
  c->r[0]=R32(c->r[27]+0x0000000Cu); // 800DDBE0
  cmps(c,0,(int32_t)c->r[0],32); // 800DDBE4
  if (!crb(c,1)) { goto L_800DDC08; } // 800DDBE8
  c->r[3]=0u+0x80260000u; // 800DDBEC
  c->r[5]=0u+0x80260000u; // 800DDBF0
  c->r[3]=c->r[3]+0xFFFF9540u; // 800DDBF4
  c->r[4]=0u+0x0000002Au; // 800DDBF8
  c->r[5]=c->r[5]+0xFFFF9554u; // 800DDBFC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DDC00
  c->lr=0x800DDC08u; f_800F1300(c); // 800DDC04
L_800DDC08:;
  c->r[3]=c->r[31]|c->r[31]; // 800DDC08
  c->lr=0x800DDC10u; f_8018D6E0(c); // 800DDC0C
L_800DDC10:;
  c->r[11]=c->r[1]+0x00000020u; // 800DDC10
  c->lr=0x800DDC18u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800DDC14
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DDC18
  c->lr=c->r[0]; // 800DDC1C
  c->r[1]=c->r[1]+0x00000020u; // 800DDC20
  return; // 800DDC24
}

// fn_800DDC30
void f_800DDC30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DDC30
  c->r[0]=c->lr; // 800DDC34
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DDC38
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DDC3C
  c->r[31]=c->r[3]|c->r[3]; // 800DDC40
  c->lr=0x800DDC48u; f_8018D6A0(c); // 800DDC44
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 800DDC48
  c->r[0]=R32(c->r[31]+0x00000010u); // 800DDC4C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 800DDC50
  if (crb(c,0)) { goto L_800DDC64; } // 800DDC54
  c->lr=0x800DDC5Cu; f_8018D6E0(c); // 800DDC58
  c->r[3]=0u+0x00000000u; // 800DDC5C
  goto L_800DDD04; // 800DDC60
L_800DDC64:;
  c->r[0]=c->r[4]+0x00000007u; // 800DDC64
  c->r[8]=0u+0x00000000u; // 800DDC68
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFF8u; // 800DDC6C
  c->r[4]=sraw(c,c->r[4],3); // 800DDC70
  c->r[0]=0u+0x00000008u; // 800DDC74
  c->r[7]=addc(c,c->r[4],0,c->xer_ca); // 800DDC78
  goto L_800DDCF4; // 800DDC7C
L_800DDC80:;
  c->r[6]=c->r[31]+c->r[8]; // 800DDC80
  c->r[5]=R8(c->r[6]+0x00000014u); // 800DDC84
  cmpu(c,0,c->r[5],0x000000FFu); // 800DDC88
  if (crb(c,2)) { goto L_800DDCF0; } // 800DDC8C
  c->r[9]=0u+0x00000001u; // 800DDC90
  c->r[10]=0u+0x00000000u; // 800DDC94
  c->ctr=c->r[0]; // 800DDC98
  c->r[0]=c->r[0]|0x00000000u; // 800DDC9C
L_800DDCA0:;
  c->r[4]=c->r[5]&c->r[9]; cr0(c,c->r[4]); // 800DDCA0
  if (!crb(c,2)) { goto L_800DDCE4; } // 800DDCA4
  c->r[4]=R8(c->r[6]+0x00000014u); // 800DDCA8
  c->r[0]=rotl(c->r[8],3)&0xFFFFFFF8u; // 800DDCAC
  c->r[0]=c->r[10]+c->r[0]; // 800DDCB0
  c->r[4]=c->r[4]|c->r[9]; // 800DDCB4
  W8(c->r[6]+0x00000014u,c->r[4]); // 800DDCB8
  c->r[4]=R32(c->r[31]+0x00000008u); // 800DDCBC
  c->r[5]=R32(c->r[31]+0x00000010u); // 800DDCC0
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 800DDCC4
  c->r[0]=R32(c->r[31]+0x00000000u); // 800DDCC8
  c->r[5]=c->r[5]+0x00000001u; // 800DDCCC
  W32(c->r[31]+0x00000010u,c->r[5]); // 800DDCD0
  c->r[31]=c->r[4]+c->r[0]; // 800DDCD4
  c->lr=0x800DDCDCu; f_8018D6E0(c); // 800DDCD8
  c->r[3]=c->r[31]|c->r[31]; // 800DDCDC
  goto L_800DDD04; // 800DDCE0
L_800DDCE4:;
  c->r[9]=rotl(c->r[9],1)&0x000000FEu; // 800DDCE4
  c->r[10]=c->r[10]+0x00000001u; // 800DDCE8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800DDCA0; } // 800DDCEC
L_800DDCF0:;
  c->r[8]=c->r[8]+0x00000001u; // 800DDCF0
L_800DDCF4:;
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[7]); // 800DDCF4
  if (crb(c,0)) { IRQCHK(c); goto L_800DDC80; } // 800DDCF8
  c->lr=0x800DDD00u; f_8018D6E0(c); // 800DDCFC
  c->r[3]=0u+0x00000000u; // 800DDD00
L_800DDD04:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DDD04
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DDD08
  c->lr=c->r[0]; // 800DDD0C
  c->r[1]=c->r[1]+0x00000010u; // 800DDD10
  return; // 800DDD14
}

// fn_800DDD20
void f_800DDD20(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DDD20
  c->r[0]=c->lr; // 800DDD24
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DDD28
  c->r[11]=c->r[1]+0x00000020u; // 800DDD2C
  c->lr=0x800DDD34u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800DDD30
  c->r[28]=0u+0x80260000u; // 800DDD34
  c->r[31]=c->r[3]|c->r[3]; // 800DDD38
  c->r[27]=c->r[4]|c->r[4]; // 800DDD3C
  c->r[28]=c->r[28]+0xFFFF9540u; // 800DDD40
  c->lr=0x800DDD48u; f_8018D6A0(c); // 800DDD44
  c->r[4]=R32(c->r[31]+0x00000000u); // 800DDD48
  c->r[30]=c->r[3]|c->r[3]; // 800DDD4C
  c->r[0]=R32(c->r[31]+0x00000008u); // 800DDD50
  c->r[3]=c->r[27]-c->r[4]; // 800DDD54
  c->r[29]=divwu(c->r[3],c->r[0]); // 800DDD58
  cmpu(c,0,c->r[29],0x00000020u); // 800DDD5C
  if (crb(c,0)) { goto L_800DDD78; } // 800DDD60
  c->r[3]=c->r[28]+0x00000000u; // 800DDD64
  c->r[5]=c->r[28]+0x00000034u; // 800DDD68
  c->r[4]=0u+0x0000005Cu; // 800DDD6C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DDD70
  c->lr=0x800DDD78u; f_800F1300(c); // 800DDD74
L_800DDD78:;
  c->r[0]=rotl(c->r[29],29)&0x1FFFFFFFu; // 800DDD78
  c->r[3]=rotl(c->r[29],0)&0x00000007u; // 800DDD7C
  c->r[29]=c->r[31]+c->r[0]; // 800DDD80
  c->r[4]=0u+0x00000001u; // 800DDD84
  c->r[0]=R8(c->r[29]+0x00000014u); // 800DDD88
  c->r[27]=((c->r[3])&0x20)?0u:(c->r[4]<<((c->r[3])&31)); // 800DDD8C
  c->r[0]=c->r[27]&c->r[0]; cr0(c,c->r[0]); // 800DDD90
  if (!crb(c,2)) { goto L_800DDDAC; } // 800DDD94
  c->r[3]=c->r[28]+0x00000000u; // 800DDD98
  c->r[5]=c->r[28]+0x00000064u; // 800DDD9C
  c->r[4]=0u+0x00000061u; // 800DDDA0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DDDA4
  c->lr=0x800DDDACu; f_800F1300(c); // 800DDDA8
L_800DDDAC:;
  c->r[0]=R8(c->r[29]+0x00000014u); // 800DDDAC
  c->r[0]=c->r[0]&~c->r[27]; // 800DDDB0
  W8(c->r[29]+0x00000014u,c->r[0]); // 800DDDB4
  c->r[3]=R32(c->r[31]+0x00000010u); // 800DDDB8
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 800DDDBC
  W32(c->r[31]+0x00000010u,c->r[0]); // 800DDDC0
  if (!crb(c,0)) { goto L_800DDDDC; } // 800DDDC4
  c->r[3]=c->r[28]+0x00000000u; // 800DDDC8
  c->r[5]=c->r[28]+0x000000A4u; // 800DDDCC
  c->r[4]=0u+0x00000064u; // 800DDDD0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DDDD4
  c->lr=0x800DDDDCu; f_800F1300(c); // 800DDDD8
L_800DDDDC:;
  c->r[3]=c->r[30]|c->r[30]; // 800DDDDC
  c->lr=0x800DDDE4u; f_8018D6E0(c); // 800DDDE0
  c->r[11]=c->r[1]+0x00000020u; // 800DDDE4
  c->lr=0x800DDDECu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800DDDE8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DDDEC
  c->lr=c->r[0]; // 800DDDF0
  c->r[1]=c->r[1]+0x00000020u; // 800DDDF4
  return; // 800DDDF8
}

// fn_800DDE00
void f_800DDE00(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800DDE00
  W32(c->r[3]+0x00000000u,c->r[0]); // 800DDE04
  W32(c->r[3]+0x00000004u,c->r[0]); // 800DDE08
  return; // 800DDE0C
}

// fn_800DDE10
void f_800DDE10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DDE10
  c->r[0]=c->lr; // 800DDE14
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DDE18
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DDE1C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800DDE20
  c->r[31]=c->r[3]|c->r[3]; // 800DDE24
  cmps(c,0,(int32_t)c->r[0],0); // 800DDE28
  W32(c->r[1]+0x00000018u,c->r[30]); // 800DDE2C
  c->r[30]=c->r[4]|c->r[4]; // 800DDE30
  W32(c->r[1]+0x00000014u,c->r[29]); // 800DDE34
  c->r[29]=0u+0x80260000u; // 800DDE38
  c->r[29]=c->r[29]+0xFFFF9610u; // 800DDE3C
  if (!crb(c,2)) { goto L_800DDE58; } // 800DDE40
  c->r[3]=c->r[29]+0x00000000u; // 800DDE44
  c->r[5]=c->r[29]+0x00000158u; // 800DDE48
  c->r[4]=0u+0x000000B8u; // 800DDE4C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DDE50
  c->lr=0x800DDE58u; f_800F1300(c); // 800DDE54
L_800DDE58:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 800DDE58
  c->r[0]=R8(c->r[3]+0x00000009u); // 800DDE5C
  c->r[31]=c->r[3]+0x00000008u; // 800DDE60
  cmps(c,0,(int32_t)c->r[0],0); // 800DDE64
  if (crb(c,2)) { goto L_800DDE84; } // 800DDE68
  c->r[5]=0u+0x80260000u; // 800DDE6C
  c->r[3]=c->r[13]+0xFFFF9F98u; // 800DDE70
  c->r[5]=c->r[5]+0xFFFF9A50u; // 800DDE74
  c->r[4]=0u+0x0000008Du; // 800DDE78
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DDE7C
  c->lr=0x800DDE84u; f_800F1300(c); // 800DDE80
L_800DDE84:;
  c->r[3]=R8(c->r[31]+0x00000000u); // 800DDE84
  c->r[5]=c->r[31]|c->r[31]; // 800DDE88
  c->r[4]=R32(c->r[31]+0x00000004u); // 800DDE8C
  c->lr=0x800DDE94u; f_800E7190(c); // 800DDE90
  c->r[6]=R16(c->r[3]+0x00000006u); // 800DDE94
  c->r[31]=c->r[3]|c->r[3]; // 800DDE98
  c->r[0]=rotl(c->r[6],0)&0x0000001Fu; cr0(c,c->r[0]); // 800DDE9C
  if (crb(c,2)) { goto L_800DDEB8; } // 800DDEA0
  c->r[3]=c->r[29]+0x00000000u; // 800DDEA4
  c->r[5]=c->r[29]+0x00000180u; // 800DDEA8
  c->r[4]=0u+0x000000C0u; // 800DDEAC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DDEB0
  c->lr=0x800DDEB8u; f_800F1300(c); // 800DDEB4
L_800DDEB8:;
  c->r[6]=R32(c->r[31]+0x00000018u); // 800DDEB8
  c->r[0]=rotl(c->r[6],0)&0x0000001Fu; cr0(c,c->r[0]); // 800DDEBC
  if (crb(c,2)) { goto L_800DDED8; } // 800DDEC0
  c->r[3]=c->r[29]+0x00000000u; // 800DDEC4
  c->r[5]=c->r[29]+0x000001DCu; // 800DDEC8
  c->r[4]=0u+0x000000C1u; // 800DDECC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DDED0
  c->lr=0x800DDED8u; f_800F1300(c); // 800DDED4
L_800DDED8:;
  c->r[6]=R32(c->r[31]+0x00000028u); // 800DDED8
  c->r[0]=rotl(c->r[6],0)&0x0000001Fu; cr0(c,c->r[0]); // 800DDEDC
  if (crb(c,2)) { goto L_800DDEF8; } // 800DDEE0
  c->r[3]=c->r[29]+0x00000000u; // 800DDEE4
  c->r[5]=c->r[29]+0x00000230u; // 800DDEE8
  c->r[4]=0u+0x000000C2u; // 800DDEEC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DDEF0
  c->lr=0x800DDEF8u; f_800F1300(c); // 800DDEF4
L_800DDEF8:;
  c->r[6]=R8(c->r[31]+0x00000000u); // 800DDEF8
  cmps(c,0,(int32_t)c->r[6],2); // 800DDEFC
  if (crb(c,2)) { goto L_800DDF18; } // 800DDF00
  cmps(c,0,(int32_t)c->r[6],1); // 800DDF04
  if (crb(c,2)) { goto L_800DDF20; } // 800DDF08
  cmps(c,0,(int32_t)c->r[6],0); // 800DDF0C
  if (crb(c,2)) { goto L_800DDF28; } // 800DDF10
  goto L_800DDF30; // 800DDF14
L_800DDF18:;
  c->r[0]=0u+0x00000003u; // 800DDF18
  goto L_800DDF48; // 800DDF1C
L_800DDF20:;
  c->r[0]=0u+0x00000001u; // 800DDF20
  goto L_800DDF48; // 800DDF24
L_800DDF28:;
  c->r[0]=0u+0x00000002u; // 800DDF28
  goto L_800DDF48; // 800DDF2C
L_800DDF30:;
  c->r[3]=c->r[29]+0x00000000u; // 800DDF30
  c->r[5]=c->r[29]+0x0000028Cu; // 800DDF34
  c->r[4]=0u+0x0000014Du; // 800DDF38
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DDF3C
  c->lr=0x800DDF44u; f_800F1300(c); // 800DDF40
  c->r[0]=0u+0x00000003u; // 800DDF44
L_800DDF48:;
  W32(c->r[30]+0x00000000u,c->r[0]); // 800DDF48
  c->r[3]=0u+0x00000001u; // 800DDF4C
  c->r[4]=R8(c->r[31]+0x00000001u); // 800DDF50
  c->r[0]=0u-c->r[4]; // 800DDF54
  c->r[0]=c->r[0]|c->r[4]; // 800DDF58
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800DDF5C
  W8(c->r[30]+0x00000004u,c->r[0]); // 800DDF60
  c->r[0]=R8(c->r[31]+0x00000002u); // 800DDF64
  W32(c->r[30]+0x00000008u,c->r[0]); // 800DDF68
  c->r[4]=R8(c->r[31]+0x00000003u); // 800DDF6C
  c->r[0]=R16(c->r[31]+0x00000004u); // 800DDF70
  c->r[4]=rotl(c->r[4],16)&0xFFFF0000u; // 800DDF74
  c->r[0]=c->r[4]+c->r[0]; // 800DDF78
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 800DDF7C
  c->r[0]=R16(c->r[31]+0x00000006u); // 800DDF80
  W16(c->r[30]+0x00000010u,c->r[0]); // 800DDF84
  c->r[0]=R32(c->r[31]+0x00000008u); // 800DDF88
  W32(c->r[30]+0x00000014u,c->r[0]); // 800DDF8C
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800DDF90
  W32(c->r[30]+0x00000018u,c->r[0]); // 800DDF94
  c->r[0]=R32(c->r[31]+0x00000010u); // 800DDF98
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 800DDF9C
  c->r[0]=R32(c->r[31]+0x00000014u); // 800DDFA0
  W32(c->r[30]+0x00000020u,c->r[0]); // 800DDFA4
  c->r[0]=R32(c->r[31]+0x00000018u); // 800DDFA8
  W32(c->r[30]+0x00000024u,c->r[0]); // 800DDFAC
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 800DDFB0
  W32(c->r[30]+0x00000028u,c->r[0]); // 800DDFB4
  c->r[0]=R32(c->r[31]+0x00000020u); // 800DDFB8
  W32(c->r[30]+0x0000002Cu,c->r[0]); // 800DDFBC
  c->r[0]=R32(c->r[31]+0x00000024u); // 800DDFC0
  W32(c->r[30]+0x00000030u,c->r[0]); // 800DDFC4
  c->r[0]=R32(c->r[31]+0x00000028u); // 800DDFC8
  W32(c->r[30]+0x00000034u,c->r[0]); // 800DDFCC
  c->r[0]=R32(c->r[31]+0x0000002Cu); // 800DDFD0
  W32(c->r[30]+0x00000038u,c->r[0]); // 800DDFD4
  c->r[0]=R32(c->r[31]+0x00000030u); // 800DDFD8
  W32(c->r[30]+0x0000003Cu,c->r[0]); // 800DDFDC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800DDFE0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800DDFE4
  c->r[29]=R32(c->r[1]+0x00000014u); // 800DDFE8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DDFEC
  c->lr=c->r[0]; // 800DDFF0
  c->r[1]=c->r[1]+0x00000020u; // 800DDFF4
  return; // 800DDFF8
}

// fn_800DE000
void f_800DE000(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DE000
  c->r[0]=c->lr; // 800DE004
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DE008
  c->r[11]=c->r[1]+0x00000020u; // 800DE00C
  c->lr=0x800DE014u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800DE010
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DE014
  c->r[29]=0u+0x80260000u; // 800DE018
  c->r[26]=c->r[3]|c->r[3]; // 800DE01C
  c->r[31]=c->r[4]|c->r[4]; // 800DE020
  cmps(c,0,(int32_t)c->r[0],0); // 800DE024
  c->r[27]=c->r[5]|c->r[5]; // 800DE028
  c->r[29]=c->r[29]+0xFFFF9610u; // 800DE02C
  if (!crb(c,2)) { goto L_800DE048; } // 800DE030
  c->r[3]=c->r[29]+0x00000000u; // 800DE034
  c->r[5]=c->r[29]+0x00000158u; // 800DE038
  c->r[4]=0u+0x000000DAu; // 800DE03C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DE040
  c->lr=0x800DE048u; f_800F1300(c); // 800DE044
L_800DE048:;
  c->r[28]=R32(c->r[26]+0x00000004u); // 800DE048
  c->r[0]=R8(c->r[28]+0x00000011u); // 800DE04C
  c->r[30]=c->r[28]+0x00000008u; // 800DE050
  cmps(c,0,(int32_t)c->r[0],0); // 800DE054
  if (crb(c,2)) { goto L_800DE074; } // 800DE058
  c->r[5]=0u+0x80260000u; // 800DE05C
  c->r[3]=c->r[13]+0xFFFF9F90u; // 800DE060
  c->r[5]=c->r[5]+0xFFFF9A28u; // 800DE064
  c->r[4]=0u+0x0000008Du; // 800DE068
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DE06C
  c->lr=0x800DE074u; f_800F1300(c); // 800DE070
L_800DE074:;
  c->r[3]=R8(c->r[28]+0x00000010u); // 800DE074
  c->r[5]=c->r[30]|c->r[30]; // 800DE078
  c->r[4]=R32(c->r[28]+0x00000014u); // 800DE07C
  c->lr=0x800DE084u; f_800E7190(c); // 800DE080
  c->r[0]=R8(c->r[3]+0x00000000u); // 800DE084
  c->r[30]=c->r[3]|c->r[3]; // 800DE088
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 800DE08C
  if (crb(c,0)) { goto L_800DE09C; } // 800DE090
  c->r[3]=0u+0x00000000u; // 800DE094
  goto L_800DE364; // 800DE098
L_800DE09C:;
  c->r[0]=R8(c->r[3]+0x00000001u); // 800DE09C
  cmps(c,0,(int32_t)c->r[0],0); // 800DE0A0
  if (crb(c,2)) { goto L_800DE0B4; } // 800DE0A4
  cmps(c,0,(int32_t)c->r[0],1); // 800DE0A8
  if (crb(c,2)) { goto L_800DE200; } // 800DE0AC
  goto L_800DE34C; // 800DE0B0
L_800DE0B4:;
  c->r[28]=rotl(c->r[27],3)&0xFFFFFFF8u; // 800DE0B4
  c->r[4]=R32(c->r[26]+0x00000004u); // 800DE0B8
  c->r[3]=c->r[3]+c->r[28]; // 800DE0BC
  c->r[0]=R8(c->r[3]+0x00000005u); // 800DE0C0
  c->r[29]=c->r[4]+0x00000008u; // 800DE0C4
  cmps(c,0,(int32_t)c->r[0],0); // 800DE0C8
  if (crb(c,2)) { goto L_800DE0E8; } // 800DE0CC
  c->r[5]=0u+0x80260000u; // 800DE0D0
  c->r[3]=c->r[13]+0xFFFF9F78u; // 800DE0D4
  c->r[5]=c->r[5]+0xFFFF99B0u; // 800DE0D8
  c->r[4]=0u+0x0000008Du; // 800DE0DC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DE0E0
  c->lr=0x800DE0E8u; f_800F1300(c); // 800DE0E4
L_800DE0E8:;
  c->r[4]=c->r[30]+c->r[28]; // 800DE0E8
  c->r[5]=c->r[29]|c->r[29]; // 800DE0EC
  c->r[3]=R8(c->r[4]+0x00000004u); // 800DE0F0
  c->r[4]=R32(c->r[4]+0x00000008u); // 800DE0F4
  c->lr=0x800DE0FCu; f_800E7190(c); // 800DE0F8
  cmps(c,0,(int32_t)c->r[3],0); // 800DE0FC
  if (!crb(c,2)) { goto L_800DE10C; } // 800DE100
  c->r[3]=0u+0x00000000u; // 800DE104
  goto L_800DE364; // 800DE108
L_800DE10C:;
  c->r[4]=0u+0x0000007Fu; // 800DE10C
  c->r[0]=0u+0x00000040u; // 800DE110
  W8(c->r[31]+0x00000000u,c->r[4]); // 800DE114
  c->r[5]=0u+0x00000020u; // 800DE118
  W8(c->r[31]+0x00000001u,c->r[0]); // 800DE11C
  c->r[0]=R8(c->r[3]+0x00000000u); // 800DE120
  W32(c->r[31]+0x00000004u,c->r[0]); // 800DE124
  cmps(c,0,(int32_t)c->r[0],32); // 800DE128
  if (crb(c,1)) { goto L_800DE134; } // 800DE12C
  c->r[5]=c->r[0]|c->r[0]; // 800DE130
L_800DE134:;
  cmps(c,1,(int32_t)c->r[5],0); // 800DE134
  c->r[8]=0u+0x00000000u; // 800DE138
  if (!crb(c,5)) { goto L_800DE360; } // 800DE13C
  cmps(c,0,(int32_t)c->r[5],8); // 800DE140
  c->r[6]=c->r[5]+0xFFFFFFF8u; // 800DE144
  if (!crb(c,1)) { goto L_800DE1D4; } // 800DE148
  c->r[7]=0u+0x00000000u; // 800DE14C
  if (crb(c,4)) { goto L_800DE168; } // 800DE150
  c->r[4]=0u+0x80000000u; // 800DE154
  c->r[0]=c->r[4]+0xFFFFFFFEu; // 800DE158
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 800DE15C
  if (crb(c,1)) { goto L_800DE168; } // 800DE160
  c->r[7]=0u+0x00000001u; // 800DE164
L_800DE168:;
  cmps(c,0,(int32_t)c->r[7],0); // 800DE168
  if (crb(c,2)) { goto L_800DE1D4; } // 800DE16C
  c->r[0]=c->r[6]+0x00000007u; // 800DE170
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 800DE174
  c->ctr=c->r[0]; // 800DE178
  cmps(c,0,(int32_t)c->r[6],0); // 800DE17C
  if (!crb(c,1)) { goto L_800DE1D4; } // 800DE180
L_800DE184:;
  c->r[4]=c->r[3]+c->r[8]; // 800DE184
  c->r[6]=c->r[31]+c->r[8]; // 800DE188
  c->r[0]=R8(c->r[4]+0x00000001u); // 800DE18C
  c->r[8]=c->r[8]+0x00000008u; // 800DE190
  W8(c->r[6]+0x00000008u,c->r[0]); // 800DE194
  c->r[0]=R8(c->r[4]+0x00000002u); // 800DE198
  W8(c->r[6]+0x00000009u,c->r[0]); // 800DE19C
  c->r[0]=R8(c->r[4]+0x00000003u); // 800DE1A0
  W8(c->r[6]+0x0000000Au,c->r[0]); // 800DE1A4
  c->r[0]=R8(c->r[4]+0x00000004u); // 800DE1A8
  W8(c->r[6]+0x0000000Bu,c->r[0]); // 800DE1AC
  c->r[0]=R8(c->r[4]+0x00000005u); // 800DE1B0
  W8(c->r[6]+0x0000000Cu,c->r[0]); // 800DE1B4
  c->r[0]=R8(c->r[4]+0x00000006u); // 800DE1B8
  W8(c->r[6]+0x0000000Du,c->r[0]); // 800DE1BC
  c->r[0]=R8(c->r[4]+0x00000007u); // 800DE1C0
  W8(c->r[6]+0x0000000Eu,c->r[0]); // 800DE1C4
  c->r[0]=R8(c->r[4]+0x00000008u); // 800DE1C8
  W8(c->r[6]+0x0000000Fu,c->r[0]); // 800DE1CC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800DE184; } // 800DE1D0
L_800DE1D4:;
  c->r[0]=c->r[5]-c->r[8]; // 800DE1D4
  c->ctr=c->r[0]; // 800DE1D8
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[5]); // 800DE1DC
  if (!crb(c,0)) { goto L_800DE360; } // 800DE1E0
L_800DE1E4:;
  c->r[5]=c->r[3]+c->r[8]; // 800DE1E4
  c->r[4]=c->r[31]+c->r[8]; // 800DE1E8
  c->r[0]=R8(c->r[5]+0x00000001u); // 800DE1EC
  c->r[8]=c->r[8]+0x00000001u; // 800DE1F0
  W8(c->r[4]+0x00000008u,c->r[0]); // 800DE1F4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800DE1E4; } // 800DE1F8
  goto L_800DE360; // 800DE1FC
L_800DE200:;
  c->r[28]=rotl(c->r[27],3)&0xFFFFFFF8u; // 800DE200
  c->r[4]=R32(c->r[26]+0x00000004u); // 800DE204
  c->r[3]=c->r[3]+c->r[28]; // 800DE208
  c->r[0]=R8(c->r[3]+0x00000005u); // 800DE20C
  c->r[29]=c->r[4]+0x00000008u; // 800DE210
  cmpu(c,0,c->r[0],0x00000001u); // 800DE214
  if (crb(c,2)) { goto L_800DE234; } // 800DE218
  c->r[5]=0u+0x80260000u; // 800DE21C
  c->r[3]=c->r[13]+0xFFFF9F80u; // 800DE220
  c->r[5]=c->r[5]+0xFFFF99D8u; // 800DE224
  c->r[4]=0u+0x0000008Eu; // 800DE228
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DE22C
  c->lr=0x800DE234u; f_800F1300(c); // 800DE230
L_800DE234:;
  c->r[4]=c->r[30]+c->r[28]; // 800DE234
  c->r[5]=c->r[29]|c->r[29]; // 800DE238
  c->r[3]=R8(c->r[4]+0x00000004u); // 800DE23C
  c->r[4]=R32(c->r[4]+0x00000008u); // 800DE240
  c->lr=0x800DE248u; f_800E7190(c); // 800DE244
  cmps(c,0,(int32_t)c->r[3],0); // 800DE248
  if (!crb(c,2)) { goto L_800DE258; } // 800DE24C
  c->r[3]=0u+0x00000000u; // 800DE250
  goto L_800DE364; // 800DE254
L_800DE258:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 800DE258
  c->r[5]=0u+0x00000020u; // 800DE25C
  W8(c->r[31]+0x00000000u,c->r[0]); // 800DE260
  c->r[0]=R8(c->r[3]+0x00000001u); // 800DE264
  W8(c->r[31]+0x00000001u,c->r[0]); // 800DE268
  c->r[0]=R8(c->r[3]+0x00000008u); // 800DE26C
  W32(c->r[31]+0x00000004u,c->r[0]); // 800DE270
  cmps(c,0,(int32_t)c->r[0],32); // 800DE274
  if (crb(c,1)) { goto L_800DE280; } // 800DE278
  c->r[5]=c->r[0]|c->r[0]; // 800DE27C
L_800DE280:;
  cmps(c,1,(int32_t)c->r[5],0); // 800DE280
  c->r[8]=0u+0x00000000u; // 800DE284
  if (!crb(c,5)) { goto L_800DE360; } // 800DE288
  cmps(c,0,(int32_t)c->r[5],8); // 800DE28C
  c->r[6]=c->r[5]+0xFFFFFFF8u; // 800DE290
  if (!crb(c,1)) { goto L_800DE320; } // 800DE294
  c->r[7]=0u+0x00000000u; // 800DE298
  if (crb(c,4)) { goto L_800DE2B4; } // 800DE29C
  c->r[4]=0u+0x80000000u; // 800DE2A0
  c->r[0]=c->r[4]+0xFFFFFFFEu; // 800DE2A4
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 800DE2A8
  if (crb(c,1)) { goto L_800DE2B4; } // 800DE2AC
  c->r[7]=0u+0x00000001u; // 800DE2B0
L_800DE2B4:;
  cmps(c,0,(int32_t)c->r[7],0); // 800DE2B4
  if (crb(c,2)) { goto L_800DE320; } // 800DE2B8
  c->r[0]=c->r[6]+0x00000007u; // 800DE2BC
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 800DE2C0
  c->ctr=c->r[0]; // 800DE2C4
  cmps(c,0,(int32_t)c->r[6],0); // 800DE2C8
  if (!crb(c,1)) { goto L_800DE320; } // 800DE2CC
L_800DE2D0:;
  c->r[4]=c->r[3]+c->r[8]; // 800DE2D0
  c->r[6]=c->r[31]+c->r[8]; // 800DE2D4
  c->r[0]=R8(c->r[4]+0x00000009u); // 800DE2D8
  c->r[8]=c->r[8]+0x00000008u; // 800DE2DC
  W8(c->r[6]+0x00000008u,c->r[0]); // 800DE2E0
  c->r[0]=R8(c->r[4]+0x0000000Au); // 800DE2E4
  W8(c->r[6]+0x00000009u,c->r[0]); // 800DE2E8
  c->r[0]=R8(c->r[4]+0x0000000Bu); // 800DE2EC
  W8(c->r[6]+0x0000000Au,c->r[0]); // 800DE2F0
  c->r[0]=R8(c->r[4]+0x0000000Cu); // 800DE2F4
  W8(c->r[6]+0x0000000Bu,c->r[0]); // 800DE2F8
  c->r[0]=R8(c->r[4]+0x0000000Du); // 800DE2FC
  W8(c->r[6]+0x0000000Cu,c->r[0]); // 800DE300
  c->r[0]=R8(c->r[4]+0x0000000Eu); // 800DE304
  W8(c->r[6]+0x0000000Du,c->r[0]); // 800DE308
  c->r[0]=R8(c->r[4]+0x0000000Fu); // 800DE30C
  W8(c->r[6]+0x0000000Eu,c->r[0]); // 800DE310
  c->r[0]=R8(c->r[4]+0x00000010u); // 800DE314
  W8(c->r[6]+0x0000000Fu,c->r[0]); // 800DE318
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800DE2D0; } // 800DE31C
L_800DE320:;
  c->r[0]=c->r[5]-c->r[8]; // 800DE320
  c->ctr=c->r[0]; // 800DE324
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[5]); // 800DE328
  if (!crb(c,0)) { goto L_800DE360; } // 800DE32C
L_800DE330:;
  c->r[5]=c->r[3]+c->r[8]; // 800DE330
  c->r[4]=c->r[31]+c->r[8]; // 800DE334
  c->r[0]=R8(c->r[5]+0x00000009u); // 800DE338
  c->r[8]=c->r[8]+0x00000001u; // 800DE33C
  W8(c->r[4]+0x00000008u,c->r[0]); // 800DE340
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800DE330; } // 800DE344
  goto L_800DE360; // 800DE348
L_800DE34C:;
  c->r[3]=c->r[29]+0x00000000u; // 800DE34C
  c->r[5]=c->r[29]+0x000002A8u; // 800DE350
  c->r[4]=0u+0x0000010Cu; // 800DE354
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DE358
  c->lr=0x800DE360u; f_800F1300(c); // 800DE35C
L_800DE360:;
  c->r[3]=0u+0x00000001u; // 800DE360
L_800DE364:;
  c->r[11]=c->r[1]+0x00000020u; // 800DE364
  c->lr=0x800DE36Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800DE368
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DE36C
  c->lr=c->r[0]; // 800DE370
  c->r[1]=c->r[1]+0x00000020u; // 800DE374
  return; // 800DE378
}

// fn_800DE380
void f_800DE380(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DE380
  c->r[0]=c->lr; // 800DE384
  W32(c->r[1]+0x00000084u,c->r[0]); // 800DE388
  c->r[11]=c->r[1]+0x00000080u; // 800DE38C
  c->lr=0x800DE394u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800DE390
  c->r[27]=c->r[3]|c->r[3]; // 800DE394
  c->r[3]=R32(c->r[3]+0x00000000u); // 800DE398
  c->r[31]=0u+0x80260000u; // 800DE39C
  c->r[28]=c->r[4]|c->r[4]; // 800DE3A0
  c->r[12]=R32(c->r[3]+0x00000000u); // 800DE3A4
  c->r[29]=c->r[5]|c->r[5]; // 800DE3A8
  c->r[31]=c->r[31]+0xFFFF9610u; // 800DE3AC
  c->r[4]=0u+0x00000000u; // 800DE3B0
  c->r[12]=R32(c->r[12]+0x00000044u); // 800DE3B4
  c->r[5]=0u+0x00000000u; // 800DE3B8
  c->ctr=c->r[12]; // 800DE3BC
  if (true) { c->lr=0x800DE3C4u; dispatch(c,c->ctr); } // 800DE3C0
  c->r[3]=R32(c->r[27]+0x00000000u); // 800DE3C4
  c->r[0]=c->r[1]+0x00000027u; // 800DE3C8
  c->r[30]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800DE3CC
  c->r[5]=0u+0x00000040u; // 800DE3D0
  c->r[12]=R32(c->r[3]+0x00000000u); // 800DE3D4
  c->r[4]=c->r[30]|c->r[30]; // 800DE3D8
  c->r[12]=R32(c->r[12]+0x00000014u); // 800DE3DC
  c->ctr=c->r[12]; // 800DE3E0
  if (true) { c->lr=0x800DE3E8u; dispatch(c,c->ctr); } // 800DE3E4
  cmpu(c,0,c->r[3],0x00000040u); // 800DE3E8
  if (crb(c,2)) { goto L_800DE3F8; } // 800DE3EC
  c->r[3]=0u+0x00000000u; // 800DE3F0
  goto L_800DE6A8; // 800DE3F4
L_800DE3F8:;
  cmps(c,0,(int32_t)c->r[30],0); // 800DE3F8
  if (!crb(c,2)) { goto L_800DE414; } // 800DE3FC
  c->r[3]=c->r[31]+0x00000000u; // 800DE400
  c->r[5]=c->r[31]+0x00000014u; // 800DE404
  c->r[4]=0u+0x0000002Au; // 800DE408
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DE40C
  c->lr=0x800DE414u; f_800F1300(c); // 800DE410
L_800DE414:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 800DE414
  c->r[0]=c->r[3]+0xADAD0000u; // 800DE418
  cmpu(c,0,c->r[0],0x0000544Du); // 800DE41C
  if (crb(c,2)) { goto L_800DE438; } // 800DE420
  c->r[3]=c->r[31]+0x00000000u; // 800DE424
  c->r[5]=c->r[31]+0x00000040u; // 800DE428
  c->r[4]=0u+0x00000033u; // 800DE42C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DE430
  c->lr=0x800DE438u; f_800F1300(c); // 800DE434
L_800DE438:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 800DE438
  c->r[0]=c->r[3]+0xADAD0000u; // 800DE43C
  cmpu(c,0,c->r[0],0x0000544Du); // 800DE440
  if (crb(c,2)) { goto L_800DE450; } // 800DE444
  c->r[0]=0u+0x00000000u; // 800DE448
  goto L_800DE4B8; // 800DE44C
L_800DE450:;
  c->r[0]=R16(c->r[30]+0x00000006u); // 800DE450
  cmpu(c,0,c->r[0],0x00000100u); // 800DE454
  if (!crb(c,0)) { goto L_800DE470; } // 800DE458
  c->r[3]=c->r[31]+0x00000000u; // 800DE45C
  c->r[5]=c->r[31]+0x00000074u; // 800DE460
  c->r[4]=0u+0x0000003Bu; // 800DE464
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DE468
  c->lr=0x800DE470u; f_800F1300(c); // 800DE46C
L_800DE470:;
  c->r[0]=R16(c->r[30]+0x00000006u); // 800DE470
  cmpu(c,0,c->r[0],0x00000100u); // 800DE474
  if (!crb(c,0)) { goto L_800DE484; } // 800DE478
  c->r[0]=0u+0x00000000u; // 800DE47C
  goto L_800DE4B8; // 800DE480
L_800DE484:;
  if (!crb(c,1)) { goto L_800DE49C; } // 800DE484
  c->r[3]=c->r[31]+0x00000000u; // 800DE488
  c->r[5]=c->r[31]+0x00000074u; // 800DE48C
  c->r[4]=0u+0x00000041u; // 800DE490
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DE494
  c->lr=0x800DE49Cu; f_800F1300(c); // 800DE498
L_800DE49C:;
  c->r[4]=R16(c->r[30]+0x00000006u); // 800DE49C
  c->r[3]=0u+0x00000100u; // 800DE4A0
  c->r[0]=addc(c,~c->r[4],0x00000100u,1); // 800DE4A4
  c->r[3]=c->r[3]|~c->r[4]; // 800DE4A8
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800DE4AC
  c->r[0]=c->r[3]-c->r[0]; // 800DE4B0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800DE4B4
L_800DE4B8:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DE4B8
  if (!crb(c,2)) { goto L_800DE4C8; } // 800DE4BC
  c->r[3]=0u+0x00000000u; // 800DE4C0
  goto L_800DE6A8; // 800DE4C4
L_800DE4C8:;
  c->r[0]=R32(c->r[30]+0x00000018u); // 800DE4C8
  cmpu(c,0,c->r[0],c->r[29]); // 800DE4CC
  if (!crb(c,1)) { goto L_800DE4DC; } // 800DE4D0
  c->r[3]=0u+0x00000000u; // 800DE4D4
  goto L_800DE6A8; // 800DE4D8
L_800DE4DC:;
  c->r[3]=R32(c->r[27]+0x00000000u); // 800DE4DC
  c->r[4]=0u+0x00000000u; // 800DE4E0
  c->r[6]=R32(c->r[30]+0x00000010u); // 800DE4E4
  c->r[5]=0u+0x00000000u; // 800DE4E8
  c->r[12]=R32(c->r[3]+0x00000000u); // 800DE4EC
  c->r[0]=R32(c->r[30]+0x00000014u); // 800DE4F0
  c->r[12]=R32(c->r[12]+0x00000044u); // 800DE4F4
  c->r[29]=c->r[6]+c->r[0]; // 800DE4F8
  c->ctr=c->r[12]; // 800DE4FC
  if (true) { c->lr=0x800DE504u; dispatch(c,c->ctr); } // 800DE500
  c->r[3]=R32(c->r[27]+0x00000000u); // 800DE504
  c->r[4]=c->r[28]|c->r[28]; // 800DE508
  c->r[5]=c->r[29]|c->r[29]; // 800DE50C
  c->r[12]=R32(c->r[3]+0x00000000u); // 800DE510
  c->r[12]=R32(c->r[12]+0x00000014u); // 800DE514
  c->ctr=c->r[12]; // 800DE518
  if (true) { c->lr=0x800DE520u; dispatch(c,c->ctr); } // 800DE51C
  cmpu(c,0,c->r[3],c->r[29]); // 800DE520
  if (crb(c,2)) { goto L_800DE530; } // 800DE524
  c->r[3]=0u+0x00000000u; // 800DE528
  goto L_800DE6A8; // 800DE52C
L_800DE530:;
  cmps(c,0,(int32_t)c->r[28],0); // 800DE530
  if (!crb(c,2)) { goto L_800DE54C; } // 800DE534
  c->r[3]=c->r[31]+0x00000000u; // 800DE538
  c->r[5]=c->r[31]+0x00000014u; // 800DE53C
  c->r[4]=0u+0x00000061u; // 800DE540
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DE544
  c->lr=0x800DE54Cu; f_800F1300(c); // 800DE548
L_800DE54C:;
  cmps(c,0,(int32_t)c->r[28],0); // 800DE54C
  if (!crb(c,2)) { goto L_800DE568; } // 800DE550
  c->r[3]=c->r[31]+0x00000000u; // 800DE554
  c->r[5]=c->r[31]+0x00000014u; // 800DE558
  c->r[4]=0u+0x0000002Au; // 800DE55C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DE560
  c->lr=0x800DE568u; f_800F1300(c); // 800DE564
L_800DE568:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 800DE568
  c->r[0]=c->r[3]+0xADAD0000u; // 800DE56C
  cmpu(c,0,c->r[0],0x0000544Du); // 800DE570
  if (crb(c,2)) { goto L_800DE58C; } // 800DE574
  c->r[3]=c->r[31]+0x00000000u; // 800DE578
  c->r[5]=c->r[31]+0x00000040u; // 800DE57C
  c->r[4]=0u+0x00000033u; // 800DE580
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DE584
  c->lr=0x800DE58Cu; f_800F1300(c); // 800DE588
L_800DE58C:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 800DE58C
  c->r[0]=c->r[3]+0xADAD0000u; // 800DE590
  cmpu(c,0,c->r[0],0x0000544Du); // 800DE594
  if (crb(c,2)) { goto L_800DE5A4; } // 800DE598
  c->r[0]=0u+0x00000000u; // 800DE59C
  goto L_800DE60C; // 800DE5A0
L_800DE5A4:;
  c->r[0]=R16(c->r[28]+0x00000006u); // 800DE5A4
  cmpu(c,0,c->r[0],0x00000100u); // 800DE5A8
  if (!crb(c,0)) { goto L_800DE5C4; } // 800DE5AC
  c->r[3]=c->r[31]+0x00000000u; // 800DE5B0
  c->r[5]=c->r[31]+0x00000074u; // 800DE5B4
  c->r[4]=0u+0x0000003Bu; // 800DE5B8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DE5BC
  c->lr=0x800DE5C4u; f_800F1300(c); // 800DE5C0
L_800DE5C4:;
  c->r[0]=R16(c->r[28]+0x00000006u); // 800DE5C4
  cmpu(c,0,c->r[0],0x00000100u); // 800DE5C8
  if (!crb(c,0)) { goto L_800DE5D8; } // 800DE5CC
  c->r[0]=0u+0x00000000u; // 800DE5D0
  goto L_800DE60C; // 800DE5D4
L_800DE5D8:;
  if (!crb(c,1)) { goto L_800DE5F0; } // 800DE5D8
  c->r[3]=c->r[31]+0x00000000u; // 800DE5DC
  c->r[5]=c->r[31]+0x00000074u; // 800DE5E0
  c->r[4]=0u+0x00000041u; // 800DE5E4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DE5E8
  c->lr=0x800DE5F0u; f_800F1300(c); // 800DE5EC
L_800DE5F0:;
  c->r[4]=R16(c->r[28]+0x00000006u); // 800DE5F0
  c->r[3]=0u+0x00000100u; // 800DE5F4
  c->r[0]=addc(c,~c->r[4],0x00000100u,1); // 800DE5F8
  c->r[3]=c->r[3]|~c->r[4]; // 800DE5FC
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800DE600
  c->r[0]=c->r[3]-c->r[0]; // 800DE604
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800DE608
L_800DE60C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DE60C
  if (crb(c,2)) { goto L_800DE6A4; } // 800DE610
  W32(c->r[27]+0x00000004u,c->r[28]); // 800DE614
  c->r[0]=R32(c->r[28]+0x00000010u); // 800DE618
  c->r[3]=c->r[0]+c->r[28]; // 800DE61C
  W32(c->r[27]+0x00000008u,c->r[3]); // 800DE620
  c->r[3]=R32(c->r[3]+0x00000000u); // 800DE624
  c->r[0]=c->r[3]+0xB7BB0000u; // 800DE628
  cmpu(c,0,c->r[0],0x00004144u); // 800DE62C
  if (crb(c,2)) { goto L_800DE648; } // 800DE630
  c->r[3]=c->r[31]+0x00000000u; // 800DE634
  c->r[5]=c->r[31]+0x000000CCu; // 800DE638
  c->r[4]=0u+0x0000006Au; // 800DE63C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DE640
  c->lr=0x800DE648u; f_800F1300(c); // 800DE644
L_800DE648:;
  c->r[3]=R32(c->r[27]+0x00000008u); // 800DE648
  c->r[0]=R8(c->r[3]+0x00000009u); // 800DE64C
  c->r[27]=c->r[3]+0x00000008u; // 800DE650
  cmps(c,0,(int32_t)c->r[0],0); // 800DE654
  if (crb(c,2)) { goto L_800DE674; } // 800DE658
  c->r[5]=0u+0x80260000u; // 800DE65C
  c->r[3]=c->r[13]+0xFFFF9F98u; // 800DE660
  c->r[5]=c->r[5]+0xFFFF9A50u; // 800DE664
  c->r[4]=0u+0x0000008Du; // 800DE668
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DE66C
  c->lr=0x800DE674u; f_800F1300(c); // 800DE670
L_800DE674:;
  c->r[3]=R8(c->r[27]+0x00000000u); // 800DE674
  c->r[5]=c->r[27]|c->r[27]; // 800DE678
  c->r[4]=R32(c->r[27]+0x00000004u); // 800DE67C
  c->lr=0x800DE684u; f_800E7190(c); // 800DE680
  c->r[0]=R32(c->r[3]+0x00000018u); // 800DE684
  c->r[0]=rotl(c->r[0],0)&0x0000001Fu; cr0(c,c->r[0]); // 800DE688
  if (crb(c,2)) { goto L_800DE6A4; } // 800DE68C
  c->r[3]=c->r[31]+0x00000000u; // 800DE690
  c->r[5]=c->r[31]+0x00000128u; // 800DE694
  c->r[4]=0u+0x00000071u; // 800DE698
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DE69C
  c->lr=0x800DE6A4u; f_800F1300(c); // 800DE6A0
L_800DE6A4:;
  c->r[3]=0u+0x00000001u; // 800DE6A4
L_800DE6A8:;
  c->r[11]=c->r[1]+0x00000080u; // 800DE6A8
  c->lr=0x800DE6B0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800DE6AC
  c->r[0]=R32(c->r[1]+0x00000084u); // 800DE6B0
  c->lr=c->r[0]; // 800DE6B4
  c->r[1]=c->r[1]+0x00000080u; // 800DE6B8
  return; // 800DE6BC
}

// fn_800DE6C0
void f_800DE6C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DE6C0
  c->r[0]=c->lr; // 800DE6C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DE6C8
  c->r[0]=R32(c->r[3]+0x00000004u); // 800DE6CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DE6D0
  cmps(c,0,(int32_t)c->r[0],0); // 800DE6D4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DE6D8
  c->r[30]=c->r[3]|c->r[3]; // 800DE6DC
  if (!crb(c,2)) { goto L_800DE6EC; } // 800DE6E0
  c->r[3]=0u+0x00000000u; // 800DE6E4
  goto L_800DE74C; // 800DE6E8
L_800DE6EC:;
  if (!crb(c,2)) { goto L_800DE70C; } // 800DE6EC
  c->r[3]=0u+0x80260000u; // 800DE6F0
  c->r[5]=0u+0x80260000u; // 800DE6F4
  c->r[3]=c->r[3]+0xFFFF9610u; // 800DE6F8
  c->r[4]=0u+0x0000008Eu; // 800DE6FC
  c->r[5]=c->r[5]+0xFFFF9768u; // 800DE700
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DE704
  c->lr=0x800DE70Cu; f_800F1300(c); // 800DE708
L_800DE70C:;
  c->r[30]=R32(c->r[30]+0x00000008u); // 800DE70C
  c->r[0]=R8(c->r[30]+0x00000011u); // 800DE710
  c->r[31]=c->r[30]+0x00000008u; // 800DE714
  cmps(c,0,(int32_t)c->r[0],0); // 800DE718
  if (crb(c,2)) { goto L_800DE738; } // 800DE71C
  c->r[5]=0u+0x80260000u; // 800DE720
  c->r[3]=c->r[13]+0xFFFF9F90u; // 800DE724
  c->r[5]=c->r[5]+0xFFFF9A28u; // 800DE728
  c->r[4]=0u+0x0000008Du; // 800DE72C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DE730
  c->lr=0x800DE738u; f_800F1300(c); // 800DE734
L_800DE738:;
  c->r[3]=R8(c->r[30]+0x00000010u); // 800DE738
  c->r[5]=c->r[31]|c->r[31]; // 800DE73C
  c->r[4]=R32(c->r[30]+0x00000014u); // 800DE740
  c->lr=0x800DE748u; f_800E7190(c); // 800DE744
  c->r[3]=R8(c->r[3]+0x00000000u); // 800DE748
L_800DE74C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DE74C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DE750
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DE754
  c->lr=c->r[0]; // 800DE758
  c->r[1]=c->r[1]+0x00000010u; // 800DE75C
  return; // 800DE760
}

// fn_800DE770
void f_800DE770(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DE770
  c->r[0]=c->lr; // 800DE774
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DE778
  c->r[0]=R32(c->r[3]+0x00000004u); // 800DE77C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DE780
  cmps(c,0,(int32_t)c->r[0],0); // 800DE784
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DE788
  c->r[30]=c->r[3]|c->r[3]; // 800DE78C
  if (!crb(c,2)) { goto L_800DE79C; } // 800DE790
  c->r[3]=0u+0x00000000u; // 800DE794
  goto L_800DE7FC; // 800DE798
L_800DE79C:;
  if (!crb(c,2)) { goto L_800DE7BC; } // 800DE79C
  c->r[3]=0u+0x80260000u; // 800DE7A0
  c->r[5]=0u+0x80260000u; // 800DE7A4
  c->r[3]=c->r[3]+0xFFFF9610u; // 800DE7A8
  c->r[4]=0u+0x000000A3u; // 800DE7AC
  c->r[5]=c->r[5]+0xFFFF9768u; // 800DE7B0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DE7B4
  c->lr=0x800DE7BCu; f_800F1300(c); // 800DE7B8
L_800DE7BC:;
  c->r[30]=R32(c->r[30]+0x00000008u); // 800DE7BC
  c->r[0]=R8(c->r[30]+0x00000019u); // 800DE7C0
  c->r[31]=c->r[30]+0x00000008u; // 800DE7C4
  cmps(c,0,(int32_t)c->r[0],0); // 800DE7C8
  if (crb(c,2)) { goto L_800DE7E8; } // 800DE7CC
  c->r[5]=0u+0x80260000u; // 800DE7D0
  c->r[3]=c->r[13]+0xFFFF9F88u; // 800DE7D4
  c->r[5]=c->r[5]+0xFFFF9A00u; // 800DE7D8
  c->r[4]=0u+0x0000008Du; // 800DE7DC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DE7E0
  c->lr=0x800DE7E8u; f_800F1300(c); // 800DE7E4
L_800DE7E8:;
  c->r[3]=R8(c->r[30]+0x00000018u); // 800DE7E8
  c->r[5]=c->r[31]|c->r[31]; // 800DE7EC
  c->r[4]=R32(c->r[30]+0x0000001Cu); // 800DE7F0
  c->lr=0x800DE7F8u; f_800E7190(c); // 800DE7F4
  c->r[3]=R8(c->r[3]+0x00000000u); // 800DE7F8
L_800DE7FC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DE7FC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DE800
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DE804
  c->lr=c->r[0]; // 800DE808
  c->r[1]=c->r[1]+0x00000010u; // 800DE80C
  return; // 800DE810
}

// fn_800DE820
void f_800DE820(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DE820
  c->r[0]=c->lr; // 800DE824
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DE828
  c->r[0]=R32(c->r[3]+0x00000004u); // 800DE82C
  cmps(c,0,(int32_t)c->r[0],0); // 800DE830
  if (!crb(c,2)) { goto L_800DE840; } // 800DE834
  c->r[3]=0u+0x00000000u; // 800DE838
  goto L_800DE84C; // 800DE83C
L_800DE840:;
  c->r[3]=c->r[3]+0x00000004u; // 800DE840
  c->lr=0x800DE848u; f_800DDE10(c); // 800DE844
  c->r[3]=0u+0x00000001u; // 800DE848
L_800DE84C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DE84C
  c->lr=c->r[0]; // 800DE850
  c->r[1]=c->r[1]+0x00000010u; // 800DE854
  return; // 800DE858
}

// fn_800DE860
void f_800DE860(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DE860
  c->r[0]=c->lr; // 800DE864
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DE868
  c->r[0]=R32(c->r[3]+0x00000004u); // 800DE86C
  cmps(c,0,(int32_t)c->r[0],0); // 800DE870
  if (!crb(c,2)) { goto L_800DE880; } // 800DE874
  c->r[3]=0u+0x00000000u; // 800DE878
  goto L_800DE88C; // 800DE87C
L_800DE880:;
  c->r[3]=c->r[3]+0x00000004u; // 800DE880
  c->lr=0x800DE888u; f_800DE000(c); // 800DE884
  c->r[3]=0u+0x00000001u; // 800DE888
L_800DE88C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DE88C
  c->lr=c->r[0]; // 800DE890
  c->r[1]=c->r[1]+0x00000010u; // 800DE894
  return; // 800DE898
}

// fn_800DE8A0
void f_800DE8A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DE8A0
  c->r[0]=c->lr; // 800DE8A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DE8A8
  c->r[11]=c->r[1]+0x00000020u; // 800DE8AC
  c->lr=0x800DE8B4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800DE8B0
  c->r[0]=R32(c->r[3]+0x00000004u); // 800DE8B4
  c->r[28]=0u+0x80260000u; // 800DE8B8
  c->r[29]=c->r[3]|c->r[3]; // 800DE8BC
  c->r[30]=c->r[4]|c->r[4]; // 800DE8C0
  cmps(c,0,(int32_t)c->r[0],0); // 800DE8C4
  c->r[31]=c->r[5]|c->r[5]; // 800DE8C8
  c->r[26]=c->r[6]|c->r[6]; // 800DE8CC
  c->r[28]=c->r[28]+0xFFFF9610u; // 800DE8D0
  if (!crb(c,2)) { goto L_800DE8E0; } // 800DE8D4
  c->r[3]=0u+0x00000000u; // 800DE8D8
  goto L_800DEAC8; // 800DE8DC
L_800DE8E0:;
  if (!crb(c,2)) { goto L_800DE8F8; } // 800DE8E0
  c->r[3]=c->r[28]+0x00000000u; // 800DE8E4
  c->r[5]=c->r[28]+0x00000158u; // 800DE8E8
  c->r[4]=0u+0x00000121u; // 800DE8EC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DE8F0
  c->lr=0x800DE8F8u; f_800F1300(c); // 800DE8F4
L_800DE8F8:;
  cmps(c,0,(int32_t)c->r[30],0); // 800DE8F8
  if (!crb(c,2)) { goto L_800DE914; } // 800DE8FC
  c->r[3]=c->r[28]+0x00000000u; // 800DE900
  c->r[5]=c->r[28]+0x000002C4u; // 800DE904
  c->r[4]=0u+0x00000122u; // 800DE908
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DE90C
  c->lr=0x800DE914u; f_800F1300(c); // 800DE910
L_800DE914:;
  cmps(c,0,(int32_t)c->r[31],0); // 800DE914
  if (!crb(c,2)) { goto L_800DE930; } // 800DE918
  c->r[3]=c->r[28]+0x00000000u; // 800DE91C
  c->r[5]=c->r[28]+0x000002F0u; // 800DE920
  c->r[4]=0u+0x00000123u; // 800DE924
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DE928
  c->lr=0x800DE930u; f_800F1300(c); // 800DE92C
L_800DE930:;
  c->r[3]=R32(c->r[29]+0x00000008u); // 800DE930
  c->r[0]=R8(c->r[3]+0x00000009u); // 800DE934
  c->r[27]=c->r[3]+0x00000008u; // 800DE938
  cmps(c,0,(int32_t)c->r[0],0); // 800DE93C
  if (crb(c,2)) { goto L_800DE95C; } // 800DE940
  c->r[5]=0u+0x80260000u; // 800DE944
  c->r[3]=c->r[13]+0xFFFF9F98u; // 800DE948
  c->r[5]=c->r[5]+0xFFFF9A50u; // 800DE94C
  c->r[4]=0u+0x0000008Du; // 800DE950
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DE954
  c->lr=0x800DE95Cu; f_800F1300(c); // 800DE958
L_800DE95C:;
  c->r[3]=R8(c->r[27]+0x00000000u); // 800DE95C
  c->r[5]=c->r[27]|c->r[27]; // 800DE960
  c->r[4]=R32(c->r[27]+0x00000004u); // 800DE964
  c->lr=0x800DE96Cu; f_800E7190(c); // 800DE968
  c->r[0]=R8(c->r[3]+0x00000000u); // 800DE96C
  cmpu(c,0,c->r[0],0x00000002u); // 800DE970
  if (!crb(c,2)) { goto L_800DEAC4; } // 800DE974
  c->r[28]=R32(c->r[29]+0x00000008u); // 800DE978
  c->r[0]=R8(c->r[28]+0x00000019u); // 800DE97C
  c->r[27]=c->r[28]+0x00000008u; // 800DE980
  cmps(c,0,(int32_t)c->r[0],0); // 800DE984
  if (crb(c,2)) { goto L_800DE9A4; } // 800DE988
  c->r[5]=0u+0x80260000u; // 800DE98C
  c->r[3]=c->r[13]+0xFFFF9F88u; // 800DE990
  c->r[5]=c->r[5]+0xFFFF9A00u; // 800DE994
  c->r[4]=0u+0x0000008Du; // 800DE998
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DE99C
  c->lr=0x800DE9A4u; f_800F1300(c); // 800DE9A0
L_800DE9A4:;
  c->r[3]=R8(c->r[28]+0x00000018u); // 800DE9A4
  c->r[5]=c->r[27]|c->r[27]; // 800DE9A8
  c->r[4]=R32(c->r[28]+0x0000001Cu); // 800DE9AC
  c->lr=0x800DE9B4u; f_800E7190(c); // 800DE9B0
  c->r[0]=R8(c->r[3]+0x00000000u); // 800DE9B4
  c->r[28]=c->r[3]|c->r[3]; // 800DE9B8
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 800DE9BC
  if (!crb(c,0)) { goto L_800DEAC4; } // 800DE9C0
  c->r[26]=rotl(c->r[26],3)&0xFFFFFFF8u; // 800DE9C4
  c->r[4]=R32(c->r[29]+0x00000008u); // 800DE9C8
  c->r[3]=c->r[3]+c->r[26]; // 800DE9CC
  c->r[0]=R8(c->r[3]+0x00000005u); // 800DE9D0
  c->r[27]=c->r[4]+0x00000008u; // 800DE9D4
  cmps(c,0,(int32_t)c->r[0],0); // 800DE9D8
  if (crb(c,2)) { goto L_800DE9F8; } // 800DE9DC
  c->r[5]=0u+0x80260000u; // 800DE9E0
  c->r[3]=c->r[13]+0xFFFF9F68u; // 800DE9E4
  c->r[5]=c->r[5]+0xFFFF9960u; // 800DE9E8
  c->r[4]=0u+0x0000008Du; // 800DE9EC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DE9F0
  c->lr=0x800DE9F8u; f_800F1300(c); // 800DE9F4
L_800DE9F8:;
  c->r[4]=c->r[28]+c->r[26]; // 800DE9F8
  c->r[5]=c->r[27]|c->r[27]; // 800DE9FC
  c->r[3]=R8(c->r[4]+0x00000004u); // 800DEA00
  c->r[4]=R32(c->r[4]+0x00000008u); // 800DEA04
  c->lr=0x800DEA0Cu; f_800E7190(c); // 800DEA08
  c->r[0]=R8(c->r[3]+0x00000001u); // 800DEA0C
  c->r[28]=c->r[3]|c->r[3]; // 800DEA10
  c->r[3]=R32(c->r[29]+0x00000008u); // 800DEA14
  cmps(c,0,(int32_t)c->r[0],0); // 800DEA18
  c->r[29]=c->r[3]+0x00000008u; // 800DEA1C
  if (crb(c,2)) { goto L_800DEA3C; } // 800DEA20
  c->r[5]=0u+0x80260000u; // 800DEA24
  c->r[3]=c->r[13]+0xFFFF9F70u; // 800DEA28
  c->r[5]=c->r[5]+0xFFFF9988u; // 800DEA2C
  c->r[4]=0u+0x0000008Du; // 800DEA30
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DEA34
  c->lr=0x800DEA3Cu; f_800F1300(c); // 800DEA38
L_800DEA3C:;
  c->r[3]=R8(c->r[28]+0x00000000u); // 800DEA3C
  c->r[5]=c->r[29]|c->r[29]; // 800DEA40
  c->r[4]=R32(c->r[28]+0x00000004u); // 800DEA44
  c->lr=0x800DEA4Cu; f_800E7190(c); // 800DEA48
  c->r[4]=R32(c->r[3]+0x00000000u); // 800DEA4C
  c->r[0]=R32(c->r[3]+0x00000004u); // 800DEA50
  W32(c->r[30]+0x00000004u,c->r[0]); // 800DEA54
  W32(c->r[30]+0x00000000u,c->r[4]); // 800DEA58
  c->r[4]=R32(c->r[3]+0x00000008u); // 800DEA5C
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800DEA60
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 800DEA64
  W32(c->r[30]+0x00000008u,c->r[4]); // 800DEA68
  c->r[4]=R32(c->r[3]+0x00000010u); // 800DEA6C
  c->r[0]=R32(c->r[3]+0x00000014u); // 800DEA70
  W32(c->r[30]+0x00000014u,c->r[0]); // 800DEA74
  W32(c->r[30]+0x00000010u,c->r[4]); // 800DEA78
  c->r[4]=R32(c->r[3]+0x00000018u); // 800DEA7C
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 800DEA80
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 800DEA84
  W32(c->r[30]+0x00000018u,c->r[4]); // 800DEA88
  c->r[0]=R16(c->r[3]+0x00000020u); // 800DEA8C
  W16(c->r[30]+0x00000020u,c->r[0]); // 800DEA90
  c->r[0]=R16(c->r[3]+0x00000022u); // 800DEA94
  W16(c->r[30]+0x00000022u,c->r[0]); // 800DEA98
  c->r[0]=R16(c->r[3]+0x00000024u); // 800DEA9C
  W16(c->r[30]+0x00000024u,c->r[0]); // 800DEAA0
  c->r[0]=R16(c->r[3]+0x00000026u); // 800DEAA4
  W16(c->r[30]+0x00000026u,c->r[0]); // 800DEAA8
  c->r[0]=R16(c->r[3]+0x00000028u); // 800DEAAC
  W16(c->r[31]+0x00000000u,c->r[0]); // 800DEAB0
  c->r[0]=R16(c->r[3]+0x0000002Au); // 800DEAB4
  W16(c->r[31]+0x00000002u,c->r[0]); // 800DEAB8
  c->r[0]=R16(c->r[3]+0x0000002Cu); // 800DEABC
  W16(c->r[31]+0x00000004u,c->r[0]); // 800DEAC0
L_800DEAC4:;
  c->r[3]=0u+0x00000001u; // 800DEAC4
L_800DEAC8:;
  c->r[11]=c->r[1]+0x00000020u; // 800DEAC8
  c->lr=0x800DEAD0u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800DEACC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DEAD0
  c->lr=c->r[0]; // 800DEAD4
  c->r[1]=c->r[1]+0x00000020u; // 800DEAD8
  return; // 800DEADC
}

// fn_800DEAE0
void f_800DEAE0(Ctx* __restrict c) {
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 800DEAE0
  c->r[12]=c->r[1]|c->r[1]; // 800DEAE4
  c->r[11]=addc(c,~c->r[11],0xFFFFFFA0u,1); // 800DEAE8
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 800DEAEC
  c->r[0]=c->lr; // 800DEAF0
  W32(c->r[12]+0x00000004u,c->r[0]); // 800DEAF4
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 800DEAF8
  c->r[31]=c->r[7]|c->r[7]; // 800DEAFC
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 800DEB00
  c->r[30]=c->r[5]|c->r[5]; // 800DEB04
  W32(c->r[12]+0xFFFFFFF4u,c->r[29]); // 800DEB08
  c->r[29]=c->r[4]|c->r[4]; // 800DEB0C
  W32(c->r[12]+0xFFFFFFF0u,c->r[28]); // 800DEB10
  c->r[28]=c->r[3]|c->r[3]; // 800DEB14
  c->r[8]=R32(c->r[3]+0x00000004u); // 800DEB18
  c->r[0]=0u-c->r[8]; // 800DEB1C
  c->r[0]=c->r[0]|c->r[8]; // 800DEB20
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800DEB24
  if (!crb(c,2)) { goto L_800DEB34; } // 800DEB28
  c->r[3]=0u+0x00000000u; // 800DEB2C
  goto L_800DEC98; // 800DEB30
L_800DEB34:;
  if (crb(c,2)) { goto L_800DEB40; } // 800DEB34
  c->r[4]=R32(c->r[8]+0x00000018u); // 800DEB38
  goto L_800DEB44; // 800DEB3C
L_800DEB40:;
  c->r[4]=0u+0x00000000u; // 800DEB40
L_800DEB44:;
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[7]); // 800DEB44
  c->r[3]=R32(c->r[3]+0x00000000u); // 800DEB48
  c->r[5]=0u+0x00000000u; // 800DEB4C
  c->r[12]=R32(c->r[3]+0x00000000u); // 800DEB50
  c->r[12]=R32(c->r[12]+0x00000044u); // 800DEB54
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800DEB58
  c->r[4]=c->r[4]+c->r[0]; // 800DEB5C
  c->r[4]=c->r[4]+0x00000008u; // 800DEB60
  c->ctr=c->r[12]; // 800DEB64
  if (true) { c->lr=0x800DEB6Cu; dispatch(c,c->ctr); } // 800DEB68
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800DEB6C
  cmpu(c,0,c->r[0],0x00000020u); // 800DEB70
  if (!crb(c,1)) { goto L_800DEB94; } // 800DEB74
  c->r[3]=0u+0x80260000u; // 800DEB78
  c->r[5]=0u+0x80260000u; // 800DEB7C
  c->r[3]=c->r[3]+0xFFFF9610u; // 800DEB80
  c->r[4]=0u+0x000001F3u; // 800DEB84
  c->r[5]=c->r[5]+0xFFFF9930u; // 800DEB88
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DEB8C
  c->lr=0x800DEB94u; f_800F1300(c); // 800DEB90
L_800DEB94:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 800DEB94
  c->r[4]=c->r[1]+0x00000020u; // 800DEB98
  c->r[5]=0u+0x00000020u; // 800DEB9C
  c->r[12]=R32(c->r[3]+0x00000000u); // 800DEBA0
  c->r[12]=R32(c->r[12]+0x00000014u); // 800DEBA4
  c->ctr=c->r[12]; // 800DEBA8
  if (true) { c->lr=0x800DEBB0u; dispatch(c,c->ctr); } // 800DEBAC
  cmpu(c,0,c->r[3],0x00000020u); // 800DEBB0
  if (crb(c,2)) { goto L_800DEBC0; } // 800DEBB4
  c->r[3]=0u+0x00000000u; // 800DEBB8
  goto L_800DEC98; // 800DEBBC
L_800DEBC0:;
  cmps(c,0,(int32_t)c->r[31],0); // 800DEBC0
  c->r[6]=c->r[1]+0x00000020u; // 800DEBC4
  c->r[3]=0u+0x00000000u; // 800DEBC8
  c->r[4]=0u+0x00000000u; // 800DEBCC
  if (!crb(c,1)) { goto L_800DEC94; } // 800DEBD0
  c->r[0]=rotl(c->r[31],30)&0x3FFFFFFFu; cr0(c,c->r[0]); // 800DEBD4
  c->ctr=c->r[0]; // 800DEBD8
  if (crb(c,2)) { goto L_800DEC6C; } // 800DEBDC
L_800DEBE0:;
  c->r[5]=R16(c->r[6]+c->r[3]); // 800DEBE0
  c->r[0]=c->r[4]+0x00000001u; // 800DEBE4
  W16(c->r[29]+c->r[4],c->r[5]); // 800DEBE8
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800DEBEC
  c->r[3]=c->r[3]+0x00000004u; // 800DEBF0
  c->r[0]=R16(c->r[6]+c->r[0]); // 800DEBF4
  W16(c->r[30]+c->r[4],c->r[0]); // 800DEBF8
  c->r[0]=c->r[4]+0x00000003u; // 800DEBFC
  c->r[4]=c->r[4]+0x00000002u; // 800DEC00
  c->r[5]=R16(c->r[6]+c->r[3]); // 800DEC04
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800DEC08
  W16(c->r[29]+c->r[4],c->r[5]); // 800DEC0C
  c->r[3]=c->r[3]+0x00000004u; // 800DEC10
  c->r[0]=R16(c->r[6]+c->r[0]); // 800DEC14
  W16(c->r[30]+c->r[4],c->r[0]); // 800DEC18
  c->r[0]=c->r[4]+0x00000003u; // 800DEC1C
  c->r[4]=c->r[4]+0x00000002u; // 800DEC20
  c->r[5]=R16(c->r[6]+c->r[3]); // 800DEC24
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800DEC28
  W16(c->r[29]+c->r[4],c->r[5]); // 800DEC2C
  c->r[3]=c->r[3]+0x00000004u; // 800DEC30
  c->r[0]=R16(c->r[6]+c->r[0]); // 800DEC34
  W16(c->r[30]+c->r[4],c->r[0]); // 800DEC38
  c->r[0]=c->r[4]+0x00000003u; // 800DEC3C
  c->r[4]=c->r[4]+0x00000002u; // 800DEC40
  c->r[5]=R16(c->r[6]+c->r[3]); // 800DEC44
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800DEC48
  W16(c->r[29]+c->r[4],c->r[5]); // 800DEC4C
  c->r[3]=c->r[3]+0x00000004u; // 800DEC50
  c->r[0]=R16(c->r[6]+c->r[0]); // 800DEC54
  W16(c->r[30]+c->r[4],c->r[0]); // 800DEC58
  c->r[4]=c->r[4]+0x00000002u; // 800DEC5C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800DEBE0; } // 800DEC60
  c->r[31]=c->r[31]&0x00000003u; cr0(c,c->r[31]); // 800DEC64
  if (crb(c,2)) { goto L_800DEC94; } // 800DEC68
L_800DEC6C:;
  c->ctr=c->r[31]; // 800DEC6C
L_800DEC70:;
  c->r[5]=R16(c->r[6]+c->r[3]); // 800DEC70
  c->r[0]=c->r[4]+0x00000001u; // 800DEC74
  W16(c->r[29]+c->r[4],c->r[5]); // 800DEC78
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800DEC7C
  c->r[3]=c->r[3]+0x00000004u; // 800DEC80
  c->r[0]=R16(c->r[6]+c->r[0]); // 800DEC84
  W16(c->r[30]+c->r[4],c->r[0]); // 800DEC88
  c->r[4]=c->r[4]+0x00000002u; // 800DEC8C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800DEC70; } // 800DEC90
L_800DEC94:;
  c->r[3]=0u+0x00000001u; // 800DEC94
L_800DEC98:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 800DEC98
  c->r[0]=R32(c->r[10]+0x00000004u); // 800DEC9C
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 800DECA0
  c->r[30]=R32(c->r[10]+0xFFFFFFF8u); // 800DECA4
  c->r[29]=R32(c->r[10]+0xFFFFFFF4u); // 800DECA8
  c->r[28]=R32(c->r[10]+0xFFFFFFF0u); // 800DECAC
  c->lr=c->r[0]; // 800DECB0
  c->r[1]=c->r[10]|c->r[10]; // 800DECB4
  return; // 800DECB8
}

// fn_800DECC0
void f_800DECC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DECC0
  c->r[0]=c->lr; // 800DECC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DECC8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DECCC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DECD0
  c->r[30]=c->r[3]|c->r[3]; // 800DECD4
  c->lr=0x800DECDCu; f_800CA2E0(c); // 800DECD8
  c->r[6]=0u+0x80260000u; // 800DECDC
  c->r[31]=0u+0x00000000u; // 800DECE0
  c->r[6]=c->r[6]+0xFFFFA000u; // 800DECE4
  c->r[8]=0u+0x80260000u; // 800DECE8
  c->r[9]=c->r[30]+0x00000178u; // 800DECEC
  c->r[4]=0u+0x800E0000u; // 800DECF0
  c->r[0]=c->r[6]+0x00000024u; // 800DECF4
  c->r[8]=c->r[8]+0xFFFFA060u; // 800DECF8
  c->r[5]=0u+0x800E0000u; // 800DECFC
  W32(c->r[30]+0x00000000u,c->r[6]); // 800DED00
  c->r[3]=c->r[30]+0x00000184u; // 800DED04
  c->r[4]=c->r[4]+0x00001A80u; // 800DED08
  W32(c->r[30]+0x000000B4u,c->r[31]); // 800DED0C
  c->r[5]=c->r[5]+0xFFFFEE40u; // 800DED10
  c->r[6]=0u+0x00000034u; // 800DED14
  c->r[7]=0u+0x00000020u; // 800DED18
  W32(c->r[30]+0x000000B8u,c->r[31]); // 800DED1C
  W32(c->r[30]+0x000000BCu,c->r[0]); // 800DED20
  W8(c->r[30]+0x00000100u,c->r[31]); // 800DED24
  W8(c->r[30]+0x00000101u,c->r[31]); // 800DED28
  W32(c->r[30]+0x00000158u,c->r[31]); // 800DED2C
  W32(c->r[30]+0x0000015Cu,c->r[31]); // 800DED30
  W8(c->r[30]+0x00000160u,c->r[31]); // 800DED34
  W32(c->r[30]+0x00000154u,c->r[8]); // 800DED38
  W32(c->r[30]+0x00000164u,c->r[31]); // 800DED3C
  W32(c->r[30]+0x00000168u,c->r[31]); // 800DED40
  W32(c->r[30]+0x00000170u,c->r[31]); // 800DED44
  W32(c->r[30]+0x00000174u,c->r[31]); // 800DED48
  W32(c->r[30]+0x00000178u,c->r[9]); // 800DED4C
  W32(c->r[30]+0x0000017Cu,c->r[9]); // 800DED50
  W32(c->r[30]+0x00000180u,c->r[31]); // 800DED54
  c->lr=0x800DED5Cu; f_802073CC(c); // 800DED58
  W32(c->r[30]+0x00000808u,c->r[31]); // 800DED5C
  c->r[0]=R8(c->r[13]+0xFFFFAE18u); // 800DED60
  cmps(c,0,(int32_t)c->r[0],0); // 800DED64
  if (!crb(c,2)) { goto L_800DED80; } // 800DED68
  c->r[3]=0u+0x802B0000u; // 800DED6C
  c->r[3]=c->r[3]+0xFFFFE4C0u; // 800DED70
  c->lr=0x800DED78u; f_8018E910(c); // 800DED74
  c->r[0]=0u+0x00000001u; // 800DED78
  W8(c->r[13]+0xFFFFAE18u,c->r[0]); // 800DED7C
L_800DED80:;
  c->r[3]=c->r[30]+0x00000180u; // 800DED80
  c->r[4]=c->r[30]+0x00000184u; // 800DED84
  c->r[5]=0u+0x00000680u; // 800DED88
  c->r[6]=0u+0x00000034u; // 800DED8C
  c->lr=0x800DED94u; f_800CF1F0(c); // 800DED90
  cmpu(c,0,c->r[3],0x00000020u); // 800DED94
  if (crb(c,2)) { goto L_800DEDB8; } // 800DED98
  c->r[3]=0u+0x80260000u; // 800DED9C
  c->r[5]=0u+0x80260000u; // 800DEDA0
  c->r[3]=c->r[3]+0xFFFF9A78u; // 800DEDA4
  c->r[4]=0u+0x00000046u; // 800DEDA8
  c->r[5]=c->r[5]+0xFFFF9A8Cu; // 800DEDAC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DEDB0
  c->lr=0x800DEDB8u; f_800F1300(c); // 800DEDB4
L_800DEDB8:;
  c->r[3]=c->r[30]|c->r[30]; // 800DEDB8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DEDBC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DEDC0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DEDC4
  c->lr=c->r[0]; // 800DEDC8
  c->r[1]=c->r[1]+0x00000010u; // 800DEDCC
  return; // 800DEDD0
}

// fn_800DEDE0
void f_800DEDE0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DEDE0
  c->r[0]=c->lr; // 800DEDE4
  cmps(c,0,(int32_t)c->r[3],0); // 800DEDE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DEDEC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DEDF0
  c->r[31]=c->r[4]|c->r[4]; // 800DEDF4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DEDF8
  c->r[30]=c->r[3]|c->r[3]; // 800DEDFC
  if (crb(c,2)) { goto L_800DEE1C; } // 800DEE00
  c->r[4]=0u+0x00000000u; // 800DEE04
  c->lr=0x800DEE0Cu; f_800E25A0(c); // 800DEE08
  cmps(c,0,(int32_t)c->r[31],0); // 800DEE0C
  if (!crb(c,1)) { goto L_800DEE1C; } // 800DEE10
  c->r[3]=c->r[30]|c->r[30]; // 800DEE14
  c->lr=0x800DEE1Cu; f_8015D040(c); // 800DEE18
L_800DEE1C:;
  c->r[3]=c->r[30]|c->r[30]; // 800DEE1C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DEE20
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DEE24
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DEE28
  c->lr=c->r[0]; // 800DEE2C
  c->r[1]=c->r[1]+0x00000010u; // 800DEE30
  return; // 800DEE34
}

// fn_800DEE40
void f_800DEE40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DEE40
  c->r[0]=c->lr; // 800DEE44
  cmps(c,0,(int32_t)c->r[3],0); // 800DEE48
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DEE4C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DEE50
  c->r[31]=c->r[4]|c->r[4]; // 800DEE54
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DEE58
  c->r[30]=c->r[3]|c->r[3]; // 800DEE5C
  if (crb(c,2)) { goto L_800DEE7C; } // 800DEE60
  c->r[4]=0u+0x00000000u; // 800DEE64
  c->lr=0x800DEE6Cu; f_800E25A0(c); // 800DEE68
  cmps(c,0,(int32_t)c->r[31],0); // 800DEE6C
  if (!crb(c,1)) { goto L_800DEE7C; } // 800DEE70
  c->r[3]=c->r[30]|c->r[30]; // 800DEE74
  c->lr=0x800DEE7Cu; f_8015D040(c); // 800DEE78
L_800DEE7C:;
  c->r[3]=c->r[30]|c->r[30]; // 800DEE7C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DEE80
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DEE84
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DEE88
  c->lr=c->r[0]; // 800DEE8C
  c->r[1]=c->r[1]+0x00000010u; // 800DEE90
  return; // 800DEE94
}

// fn_800DEEA0
void f_800DEEA0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DEEA0
  c->r[0]=c->lr; // 800DEEA4
  cmps(c,0,(int32_t)c->r[3],0); // 800DEEA8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DEEAC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DEEB0
  c->r[31]=c->r[4]|c->r[4]; // 800DEEB4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DEEB8
  c->r[30]=c->r[3]|c->r[3]; // 800DEEBC
  if (crb(c,2)) { goto L_800DEFAC; } // 800DEEC0
  c->r[12]=0u+0x80260000u; // 800DEEC4
  c->r[12]=c->r[12]+0xFFFFA000u; // 800DEEC8
  W32(c->r[3]+0x00000000u,c->r[12]); // 800DEECC
  c->r[0]=c->r[12]+0x00000024u; // 800DEED0
  W32(c->r[3]+0x000000BCu,c->r[0]); // 800DEED4
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DEED8
  c->ctr=c->r[12]; // 800DEEDC
  if (true) { c->lr=0x800DEEE4u; dispatch(c,c->ctr); } // 800DEEE0
  c->lr=0x800DEEE8u; f_800DD3D0(c); // 800DEEE4
  c->r[3]=c->r[3]+0x00000354u; // 800DEEE8
  c->lr=0x800DEEF0u; f_8018E950(c); // 800DEEEC
  c->r[0]=R8(c->r[30]+0x00000100u); // 800DEEF0
  cmps(c,0,(int32_t)c->r[0],0); // 800DEEF4
  if (!crb(c,2)) { goto L_800DEF0C; } // 800DEEF8
  c->lr=0x800DEF00u; f_800DD3D0(c); // 800DEEFC
  c->r[3]=c->r[3]+0x00000354u; // 800DEF00
  c->lr=0x800DEF08u; f_8018EA30(c); // 800DEF04
  goto L_800DEF64; // 800DEF08
L_800DEF0C:;
  c->r[0]=0u+0x00000000u; // 800DEF0C
  W32(c->r[30]+0x00000804u,c->r[0]); // 800DEF10
  c->r[3]=c->r[30]+0x00000180u; // 800DEF14
  c->lr=0x800DEF1Cu; f_800CF410(c); // 800DEF18
  cmps(c,0,(int32_t)c->r[3],32); // 800DEF1C
  if (crb(c,2)) { goto L_800DEF40; } // 800DEF20
  c->r[3]=0u+0x80260000u; // 800DEF24
  c->r[5]=0u+0x80260000u; // 800DEF28
  c->r[3]=c->r[3]+0xFFFF9A78u; // 800DEF2C
  c->r[4]=0u+0x000000BFu; // 800DEF30
  c->r[5]=c->r[5]+0xFFFF9AC8u; // 800DEF34
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DEF38
  c->lr=0x800DEF40u; f_800F1300(c); // 800DEF3C
L_800DEF40:;
  c->r[3]=c->r[30]+0x00000180u; // 800DEF40
  c->r[4]=c->r[30]+0x00000184u; // 800DEF44
  c->r[5]=0u+0x00000680u; // 800DEF48
  c->lr=0x800DEF50u; f_800CF360(c); // 800DEF4C
  c->r[0]=0u+0x00000000u; // 800DEF50
  W8(c->r[30]+0x00000100u,c->r[0]); // 800DEF54
  c->lr=0x800DEF5Cu; f_800DD3D0(c); // 800DEF58
  c->r[3]=c->r[3]+0x00000354u; // 800DEF5C
  c->lr=0x800DEF64u; f_8018EA30(c); // 800DEF60
L_800DEF64:;
  c->r[4]=0u+0x800E0000u; // 800DEF64
  c->r[3]=c->r[30]+0x00000184u; // 800DEF68
  c->r[4]=c->r[4]+0xFFFFEE40u; // 800DEF6C
  c->r[5]=0u+0x00000034u; // 800DEF70
  c->r[6]=0u+0x00000020u; // 800DEF74
  c->lr=0x800DEF7Cu; f_802074C4(c); // 800DEF78
  c->r[3]=addc(c,c->r[30],0x00000174u,0); cr0(c,c->r[3]); // 800DEF7C
  if (crb(c,2)) { goto L_800DEF8C; } // 800DEF80
  c->r[4]=0u+0x00000000u; // 800DEF84
  c->lr=0x800DEF8Cu; f_800F1940(c); // 800DEF88
L_800DEF8C:;
  c->r[3]=addc(c,c->r[30],0x00000154u,0); cr0(c,c->r[3]); // 800DEF8C
  if (crb(c,2)) { goto L_800DEF9C; } // 800DEF90
  c->r[4]=0u+0x00000000u; // 800DEF94
  c->lr=0x800DEF9Cu; f_800E25A0(c); // 800DEF98
L_800DEF9C:;
  cmps(c,0,(int32_t)c->r[31],0); // 800DEF9C
  if (!crb(c,1)) { goto L_800DEFAC; } // 800DEFA0
  c->r[3]=c->r[30]|c->r[30]; // 800DEFA4
  c->lr=0x800DEFACu; f_8015D040(c); // 800DEFA8
L_800DEFAC:;
  c->r[3]=c->r[30]|c->r[30]; // 800DEFAC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DEFB0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DEFB4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DEFB8
  c->lr=c->r[0]; // 800DEFBC
  c->r[1]=c->r[1]+0x00000010u; // 800DEFC0
  return; // 800DEFC4
}

// fn_800DEFD0
void f_800DEFD0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DEFD0
  c->r[0]=c->lr; // 800DEFD4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DEFD8
  c->r[11]=c->r[1]+0x00000020u; // 800DEFDC
  c->lr=0x800DEFE4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800DEFE0
  c->r[29]=0u+0x80260000u; // 800DEFE4
  c->r[31]=c->r[3]|c->r[3]; // 800DEFE8
  c->r[30]=c->r[4]|c->r[4]; // 800DEFEC
  c->r[26]=c->r[5]|c->r[5]; // 800DEFF0
  c->r[28]=c->r[6]|c->r[6]; // 800DEFF4
  c->r[27]=c->r[7]|c->r[7]; // 800DEFF8
  c->r[29]=c->r[29]+0xFFFF9A78u; // 800DEFFC
  c->lr=0x800DF004u; f_800DD3D0(c); // 800DF000
  c->r[3]=c->r[3]+0x00000354u; // 800DF004
  c->lr=0x800DF00Cu; f_8018E950(c); // 800DF008
  cmps(c,0,(int32_t)c->r[30],0); // 800DF00C
  if (!crb(c,2)) { goto L_800DF028; } // 800DF010
  c->r[3]=c->r[29]+0x00000000u; // 800DF014
  c->r[5]=c->r[29]+0x000000A0u; // 800DF018
  c->r[4]=0u+0x00000069u; // 800DF01C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DF020
  c->lr=0x800DF028u; f_800F1300(c); // 800DF024
L_800DF028:;
  c->r[0]=R8(c->r[31]+0x00000100u); // 800DF028
  cmps(c,0,(int32_t)c->r[0],0); // 800DF02C
  if (crb(c,2)) { goto L_800DF0C0; } // 800DF030
  c->r[12]=R32(c->r[31]+0x00000000u); // 800DF034
  c->r[3]=c->r[31]|c->r[31]; // 800DF038
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DF03C
  c->ctr=c->r[12]; // 800DF040
  if (true) { c->lr=0x800DF048u; dispatch(c,c->ctr); } // 800DF044
  c->lr=0x800DF04Cu; f_800DD3D0(c); // 800DF048
  c->r[3]=c->r[3]+0x00000354u; // 800DF04C
  c->lr=0x800DF054u; f_8018E950(c); // 800DF050
  c->r[0]=R8(c->r[31]+0x00000100u); // 800DF054
  cmps(c,0,(int32_t)c->r[0],0); // 800DF058
  if (!crb(c,2)) { goto L_800DF070; } // 800DF05C
  c->lr=0x800DF064u; f_800DD3D0(c); // 800DF060
  c->r[3]=c->r[3]+0x00000354u; // 800DF064
  c->lr=0x800DF06Cu; f_8018EA30(c); // 800DF068
  goto L_800DF0C0; // 800DF06C
L_800DF070:;
  c->r[0]=0u+0x00000000u; // 800DF070
  W32(c->r[31]+0x00000804u,c->r[0]); // 800DF074
  c->r[3]=c->r[31]+0x00000180u; // 800DF078
  c->lr=0x800DF080u; f_800CF410(c); // 800DF07C
  cmps(c,0,(int32_t)c->r[3],32); // 800DF080
  if (crb(c,2)) { goto L_800DF09C; } // 800DF084
  c->r[3]=c->r[29]+0x00000000u; // 800DF088
  c->r[5]=c->r[29]+0x00000050u; // 800DF08C
  c->r[4]=0u+0x000000BFu; // 800DF090
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DF094
  c->lr=0x800DF09Cu; f_800F1300(c); // 800DF098
L_800DF09C:;
  c->r[3]=c->r[31]+0x00000180u; // 800DF09C
  c->r[4]=c->r[31]+0x00000184u; // 800DF0A0
  c->r[5]=0u+0x00000680u; // 800DF0A4
  c->lr=0x800DF0ACu; f_800CF360(c); // 800DF0A8
  c->r[0]=0u+0x00000000u; // 800DF0AC
  W8(c->r[31]+0x00000100u,c->r[0]); // 800DF0B0
  c->lr=0x800DF0B8u; f_800DD3D0(c); // 800DF0B4
  c->r[3]=c->r[3]+0x00000354u; // 800DF0B8
  c->lr=0x800DF0C0u; f_8018EA30(c); // 800DF0BC
L_800DF0C0:;
  c->r[3]=c->r[31]|c->r[31]; // 800DF0C0
  c->lr=0x800DF0C8u; f_800DFAF0(c); // 800DF0C4
  cmps(c,0,(int32_t)c->r[26],16); // 800DF0C8
  c->r[0]=0u+0x00000010u; // 800DF0CC
  if (crb(c,1)) { goto L_800DF0D8; } // 800DF0D0
  c->r[0]=c->r[26]|c->r[26]; // 800DF0D4
L_800DF0D8:;
  W32(c->r[31]+0x00000810u,c->r[0]); // 800DF0D8
  c->r[4]=c->r[31]|c->r[31]; // 800DF0DC
  c->r[26]=0u+0x00000000u; // 800DF0E0
  c->r[0]=0u+0x00000001u; // 800DF0E4
  goto L_800DF130; // 800DF0E8
  c->r[0]=c->r[0]|0x00000000u; // 800DF0EC
L_800DF0F0:;
  c->r[3]=rotl(c->r[28],0)&0x00000001u; cr0(c,c->r[3]); // 800DF0F0
  if (crb(c,2)) { goto L_800DF124; } // 800DF0F4
  cmps(c,0,(int32_t)c->r[26],8); // 800DF0F8
  if (crb(c,0)) { goto L_800DF120; } // 800DF0FC
  c->r[6]=c->r[26]|c->r[26]; // 800DF100
  c->r[3]=c->r[29]+0x00000000u; // 800DF104
  c->r[5]=c->r[29]+0x000000CCu; // 800DF108
  c->r[4]=0u+0x00000085u; // 800DF10C
  c->r[7]=0u+0x00000007u; // 800DF110
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DF114
  c->lr=0x800DF11Cu; f_800F13A0(c); // 800DF118
  goto L_800DF138; // 800DF11C
L_800DF120:;
  W8(c->r[4]+0x00000B58u,c->r[0]); // 800DF120
L_800DF124:;
  c->r[28]=rotl(c->r[28],31)&0x7FFFFFFFu; // 800DF124
  c->r[4]=c->r[4]+0x00000038u; // 800DF128
  c->r[26]=c->r[26]+0x00000001u; // 800DF12C
L_800DF130:;
  cmps(c,0,(int32_t)c->r[28],0); // 800DF130
  if (!crb(c,2)) { IRQCHK(c); goto L_800DF0F0; } // 800DF134
L_800DF138:;
  cmps(c,0,(int32_t)c->r[26],8); // 800DF138
  c->r[0]=0u+0x00000008u; // 800DF13C
  if (crb(c,1)) { goto L_800DF148; } // 800DF140
  c->r[0]=c->r[26]|c->r[26]; // 800DF144
L_800DF148:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DF148
  W32(c->r[31]+0x0000080Cu,c->r[0]); // 800DF14C
  if (!crb(c,2)) { goto L_800DF168; } // 800DF150
  c->lr=0x800DF158u; f_800DD3D0(c); // 800DF154
  c->r[3]=c->r[3]+0x00000354u; // 800DF158
  c->lr=0x800DF160u; f_8018EA30(c); // 800DF15C
  c->r[3]=0u+0x00000002u; // 800DF160
  goto L_800DF240; // 800DF164
L_800DF168:;
  W32(c->r[31]+0x00000814u,c->r[27]); // 800DF168
  W32(c->r[31]+0x00000804u,c->r[30]); // 800DF16C
  c->lr=0x800DF174u; f_8018D6A0(c); // 800DF170
  c->r[0]=R32(c->r[31]+0x00000810u); // 800DF174
  c->r[30]=c->r[3]|c->r[3]; // 800DF178
  cmps(c,0,(int32_t)c->r[0],0); // 800DF17C
  if (!crb(c,1)) { goto L_800DF220; } // 800DF180
  c->r[28]=c->r[31]|c->r[31]; // 800DF184
  c->r[27]=0u+0x00000000u; // 800DF188
  goto L_800DF1E4; // 800DF18C
L_800DF190:;
  c->r[3]=R32(c->r[31]+0x00000804u); // 800DF190
  c->lr=0x800DF198u; f_800DDC30(c); // 800DF194
  cmps(c,0,(int32_t)c->r[3],0); // 800DF198
  if (!crb(c,2)) { goto L_800DF1D8; } // 800DF19C
  c->r[26]=c->r[31]|c->r[31]; // 800DF1A0
  c->r[28]=0u+0x00000000u; // 800DF1A4
  c->r[29]=0u+0x00000000u; // 800DF1A8
  goto L_800DF1C8; // 800DF1AC
L_800DF1B0:;
  c->r[3]=R32(c->r[31]+0x00000804u); // 800DF1B0
  c->r[4]=R32(c->r[26]+0x00000818u); // 800DF1B4
  c->lr=0x800DF1BCu; f_800DDD20(c); // 800DF1B8
  W32(c->r[26]+0x00000818u,c->r[29]); // 800DF1BC
  c->r[26]=c->r[26]+0x00000034u; // 800DF1C0
  c->r[28]=c->r[28]+0x00000001u; // 800DF1C4
L_800DF1C8:;
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[27]); // 800DF1C8
  if (crb(c,0)) { IRQCHK(c); goto L_800DF1B0; } // 800DF1CC
  c->r[0]=0u+0x00000000u; // 800DF1D0
  goto L_800DF1F4; // 800DF1D4
L_800DF1D8:;
  W32(c->r[28]+0x00000818u,c->r[3]); // 800DF1D8
  c->r[28]=c->r[28]+0x00000034u; // 800DF1DC
  c->r[27]=c->r[27]+0x00000001u; // 800DF1E0
L_800DF1E4:;
  c->r[0]=R32(c->r[31]+0x00000810u); // 800DF1E4
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 800DF1E8
  if (crb(c,0)) { IRQCHK(c); goto L_800DF190; } // 800DF1EC
  c->r[0]=0u+0x00000001u; // 800DF1F0
L_800DF1F4:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DF1F4
  if (!crb(c,2)) { goto L_800DF218; } // 800DF1F8
  c->r[3]=c->r[30]|c->r[30]; // 800DF1FC
  c->lr=0x800DF204u; f_8018D6E0(c); // 800DF200
  c->lr=0x800DF208u; f_800DD3D0(c); // 800DF204
  c->r[3]=c->r[3]+0x00000354u; // 800DF208
  c->lr=0x800DF210u; f_8018EA30(c); // 800DF20C
  c->r[3]=0u+0x00000001u; // 800DF210
  goto L_800DF240; // 800DF214
L_800DF218:;
  c->r[0]=0u+0x00000001u; // 800DF218
  W8(c->r[31]+0x0000010Fu,c->r[0]); // 800DF21C
L_800DF220:;
  c->r[3]=c->r[30]|c->r[30]; // 800DF220
  c->lr=0x800DF228u; f_8018D6E0(c); // 800DF224
  c->r[0]=0u+0x00000001u; // 800DF228
  W8(c->r[31]+0x00000100u,c->r[0]); // 800DF22C
  c->lr=0x800DF234u; f_800DD3D0(c); // 800DF230
  c->r[3]=c->r[3]+0x00000354u; // 800DF234
  c->lr=0x800DF23Cu; f_8018EA30(c); // 800DF238
  c->r[3]=0u+0x00000000u; // 800DF23C
L_800DF240:;
  c->r[11]=c->r[1]+0x00000020u; // 800DF240
  c->lr=0x800DF248u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800DF244
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DF248
  c->lr=c->r[0]; // 800DF24C
  c->r[1]=c->r[1]+0x00000020u; // 800DF250
  return; // 800DF254
}

// fn_800DF260
void f_800DF260(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DF260
  c->r[0]=c->lr; // 800DF264
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DF268
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DF26C
  c->r[31]=c->r[3]|c->r[3]; // 800DF270
  c->r[12]=R32(c->r[3]+0x00000000u); // 800DF274
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DF278
  c->ctr=c->r[12]; // 800DF27C
  if (true) { c->lr=0x800DF284u; dispatch(c,c->ctr); } // 800DF280
  c->lr=0x800DF288u; f_800DD3D0(c); // 800DF284
  c->r[3]=c->r[3]+0x00000354u; // 800DF288
  c->lr=0x800DF290u; f_8018E950(c); // 800DF28C
  c->r[0]=R8(c->r[31]+0x00000100u); // 800DF290
  cmps(c,0,(int32_t)c->r[0],0); // 800DF294
  if (!crb(c,2)) { goto L_800DF2AC; } // 800DF298
  c->lr=0x800DF2A0u; f_800DD3D0(c); // 800DF29C
  c->r[3]=c->r[3]+0x00000354u; // 800DF2A0
  c->lr=0x800DF2A8u; f_8018EA30(c); // 800DF2A4
  goto L_800DF304; // 800DF2A8
L_800DF2AC:;
  c->r[0]=0u+0x00000000u; // 800DF2AC
  W32(c->r[31]+0x00000804u,c->r[0]); // 800DF2B0
  c->r[3]=c->r[31]+0x00000180u; // 800DF2B4
  c->lr=0x800DF2BCu; f_800CF410(c); // 800DF2B8
  cmps(c,0,(int32_t)c->r[3],32); // 800DF2BC
  if (crb(c,2)) { goto L_800DF2E0; } // 800DF2C0
  c->r[3]=0u+0x80260000u; // 800DF2C4
  c->r[5]=0u+0x80260000u; // 800DF2C8
  c->r[3]=c->r[3]+0xFFFF9A78u; // 800DF2CC
  c->r[4]=0u+0x000000BFu; // 800DF2D0
  c->r[5]=c->r[5]+0xFFFF9AC8u; // 800DF2D4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DF2D8
  c->lr=0x800DF2E0u; f_800F1300(c); // 800DF2DC
L_800DF2E0:;
  c->r[3]=c->r[31]+0x00000180u; // 800DF2E0
  c->r[4]=c->r[31]+0x00000184u; // 800DF2E4
  c->r[5]=0u+0x00000680u; // 800DF2E8
  c->lr=0x800DF2F0u; f_800CF360(c); // 800DF2EC
  c->r[0]=0u+0x00000000u; // 800DF2F0
  W8(c->r[31]+0x00000100u,c->r[0]); // 800DF2F4
  c->lr=0x800DF2FCu; f_800DD3D0(c); // 800DF2F8
  c->r[3]=c->r[3]+0x00000354u; // 800DF2FC
  c->lr=0x800DF304u; f_8018EA30(c); // 800DF300
L_800DF304:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DF304
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DF308
  c->lr=c->r[0]; // 800DF30C
  c->r[1]=c->r[1]+0x00000010u; // 800DF310
  return; // 800DF314
}

// fn_800DF320
void f_800DF320(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DF320
  c->r[0]=c->lr; // 800DF324
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DF328
  c->r[11]=c->r[1]+0x00000020u; // 800DF32C
  c->lr=0x800DF334u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800DF330
  c->r[31]=0u+0x80260000u; // 800DF334
  c->r[27]=c->r[3]|c->r[3]; // 800DF338
  c->r[28]=c->r[4]|c->r[4]; // 800DF33C
  c->r[29]=c->r[5]|c->r[5]; // 800DF340
  c->r[30]=c->r[6]|c->r[6]; // 800DF344
  c->r[31]=c->r[31]+0xFFFF9A78u; // 800DF348
  c->lr=0x800DF350u; f_800DD3D0(c); // 800DF34C
  c->r[3]=c->r[3]+0x00000354u; // 800DF350
  c->lr=0x800DF358u; f_8018E950(c); // 800DF354
  c->r[0]=R8(c->r[27]+0x00000100u); // 800DF358
  cmps(c,0,(int32_t)c->r[0],0); // 800DF35C
  if (!crb(c,2)) { goto L_800DF378; } // 800DF360
  c->r[3]=c->r[31]+0x00000000u; // 800DF364
  c->r[5]=c->r[31]+0x00000100u; // 800DF368
  c->r[4]=0u+0x000000DAu; // 800DF36C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DF370
  c->lr=0x800DF378u; f_800F1300(c); // 800DF374
L_800DF378:;
  cmps(c,0,(int32_t)c->r[28],0); // 800DF378
  if (!crb(c,2)) { goto L_800DF394; } // 800DF37C
  c->r[3]=c->r[31]+0x00000000u; // 800DF380
  c->r[5]=c->r[31]+0x00000124u; // 800DF384
  c->r[4]=0u+0x000000DBu; // 800DF388
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DF38C
  c->lr=0x800DF394u; f_800F1300(c); // 800DF390
L_800DF394:;
  c->r[12]=R32(c->r[28]+0x00000000u); // 800DF394
  c->r[3]=c->r[28]|c->r[28]; // 800DF398
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800DF39C
  c->ctr=c->r[12]; // 800DF3A0
  if (true) { c->lr=0x800DF3A8u; dispatch(c,c->ctr); } // 800DF3A4
  cmps(c,0,(int32_t)c->r[3],0); // 800DF3A8
  if (!crb(c,2)) { goto L_800DF3C4; } // 800DF3AC
  c->r[3]=c->r[31]+0x00000000u; // 800DF3B0
  c->r[5]=c->r[31]+0x00000150u; // 800DF3B4
  c->r[4]=0u+0x000000DCu; // 800DF3B8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DF3BC
  c->lr=0x800DF3C4u; f_800F1300(c); // 800DF3C0
L_800DF3C4:;
  c->r[12]=R32(c->r[28]+0x00000000u); // 800DF3C4
  c->r[3]=c->r[28]|c->r[28]; // 800DF3C8
  c->r[12]=R32(c->r[12]+0x00000050u); // 800DF3CC
  c->ctr=c->r[12]; // 800DF3D0
  if (true) { c->lr=0x800DF3D8u; dispatch(c,c->ctr); } // 800DF3D4
  cmps(c,0,(int32_t)c->r[3],0); // 800DF3D8
  if (!crb(c,2)) { goto L_800DF3F4; } // 800DF3DC
  c->r[3]=c->r[31]+0x00000000u; // 800DF3E0
  c->r[5]=c->r[31]+0x0000017Cu; // 800DF3E4
  c->r[4]=0u+0x000000DDu; // 800DF3E8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DF3EC
  c->lr=0x800DF3F4u; f_800F1300(c); // 800DF3F0
L_800DF3F4:;
  cmps(c,0,(int32_t)c->r[27],0); // 800DF3F4
  c->r[3]=0u+0x00000000u; // 800DF3F8
  c->r[0]=0u+0x00000001u; // 800DF3FC
  W32(c->r[27]+0x00000808u,c->r[28]); // 800DF400
  c->r[31]=c->r[27]|c->r[27]; // 800DF404
  W32(c->r[27]+0x0000014Cu,c->r[29]); // 800DF408
  W32(c->r[27]+0x00000150u,c->r[30]); // 800DF40C
  W8(c->r[27]+0x00000104u,c->r[3]); // 800DF410
  W8(c->r[27]+0x00000105u,c->r[3]); // 800DF414
  W8(c->r[27]+0x00000106u,c->r[3]); // 800DF418
  W8(c->r[27]+0x00000101u,c->r[0]); // 800DF41C
  if (crb(c,2)) { goto L_800DF428; } // 800DF420
  c->r[31]=c->r[27]+0x000000B4u; // 800DF424
L_800DF428:;
  c->lr=0x800DF42Cu; f_800DD3D0(c); // 800DF428
  c->r[4]=c->r[31]|c->r[31]; // 800DF42C
  c->lr=0x800DF434u; f_800DD8F0(c); // 800DF430
  c->r[4]=R32(c->r[27]+0x00000808u); // 800DF434
  c->r[31]=c->r[27]+0x00000154u; // 800DF438
  c->r[3]=R32(c->r[27]+0x0000014Cu); // 800DF43C
  c->r[0]=R32(c->r[27]+0x00000150u); // 800DF440
  W32(c->r[27]+0x00000164u,c->r[27]); // 800DF444
  W32(c->r[27]+0x00000168u,c->r[4]); // 800DF448
  W32(c->r[27]+0x0000016Cu,c->r[3]); // 800DF44C
  W32(c->r[27]+0x00000170u,c->r[0]); // 800DF450
  c->lr=0x800DF458u; f_800E2630(c); // 800DF454
  c->r[4]=c->r[31]|c->r[31]; // 800DF458
  c->r[5]=0u+0x00000001u; // 800DF45C
  c->lr=0x800DF464u; f_800E27C0(c); // 800DF460
  c->lr=0x800DF468u; f_800DD3D0(c); // 800DF464
  c->r[3]=c->r[3]+0x00000354u; // 800DF468
  c->lr=0x800DF470u; f_8018EA30(c); // 800DF46C
  c->r[11]=c->r[1]+0x00000020u; // 800DF470
  c->r[3]=0u+0x00000001u; // 800DF474
  c->lr=0x800DF47Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800DF478
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DF47C
  c->lr=c->r[0]; // 800DF480
  c->r[1]=c->r[1]+0x00000020u; // 800DF484
  return; // 800DF488
}

// fn_800DF490
void f_800DF490(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DF490
  c->r[0]=c->lr; // 800DF494
  W32(c->r[1]+0x000000C4u,c->r[0]); // 800DF498
  c->r[11]=c->r[1]+0x000000C0u; // 800DF49C
  c->lr=0x800DF4A4u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800DF4A0
  c->r[25]=0u+0x80260000u; // 800DF4A4
  c->r[26]=c->r[3]|c->r[3]; // 800DF4A8
  c->r[25]=c->r[25]+0xFFFF9A78u; // 800DF4AC
  c->lr=0x800DF4B4u; f_800DD3D0(c); // 800DF4B0
  c->r[3]=c->r[3]+0x00000354u; // 800DF4B4
  c->lr=0x800DF4BCu; f_8018E950(c); // 800DF4B8
  c->r[0]=R8(c->r[26]+0x00000103u); // 800DF4BC
  cmps(c,0,(int32_t)c->r[0],0); // 800DF4C0
  if (!crb(c,2)) { goto L_800DF4DC; } // 800DF4C4
  c->lr=0x800DF4CCu; f_800DD3D0(c); // 800DF4C8
  c->r[3]=c->r[3]+0x00000354u; // 800DF4CC
  c->lr=0x800DF4D4u; f_8018EA30(c); // 800DF4D0
  c->r[3]=0u+0x00000000u; // 800DF4D4
  goto L_800DF804; // 800DF4D8
L_800DF4DC:;
  c->r[0]=R8(c->r[26]+0x00000102u); // 800DF4DC
  cmps(c,0,(int32_t)c->r[0],0); // 800DF4E0
  if (!crb(c,2)) { goto L_800DF7F4; } // 800DF4E4
  c->r[4]=R32(c->r[26]+0x00000814u); // 800DF4E8
  c->r[3]=c->r[26]|c->r[26]; // 800DF4EC
  c->lr=0x800DF4F4u; f_800E0530(c); // 800DF4F0
  cmps(c,0,(int32_t)c->r[3],0); // 800DF4F4
  if (!crb(c,2)) { goto L_800DF54C; } // 800DF4F8
  c->r[28]=c->r[26]|c->r[26]; // 800DF4FC
  c->r[27]=0u+0x00000000u; // 800DF500
  c->r[25]=0u+0x00000000u; // 800DF504
  goto L_800DF52C; // 800DF508
L_800DF50C:;
  c->r[4]=R32(c->r[28]+0x00000818u); // 800DF50C
  cmps(c,0,(int32_t)c->r[4],0); // 800DF510
  if (crb(c,2)) { goto L_800DF524; } // 800DF514
  c->r[3]=R32(c->r[26]+0x00000804u); // 800DF518
  c->lr=0x800DF520u; f_800DDD20(c); // 800DF51C
  W32(c->r[28]+0x00000818u,c->r[25]); // 800DF520
L_800DF524:;
  c->r[28]=c->r[28]+0x00000034u; // 800DF524
  c->r[27]=c->r[27]+0x00000001u; // 800DF528
L_800DF52C:;
  c->r[0]=R32(c->r[26]+0x00000810u); // 800DF52C
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 800DF530
  if (crb(c,0)) { IRQCHK(c); goto L_800DF50C; } // 800DF534
  c->lr=0x800DF53Cu; f_800DD3D0(c); // 800DF538
  c->r[3]=c->r[3]+0x00000354u; // 800DF53C
  c->lr=0x800DF544u; f_8018EA30(c); // 800DF540
  c->r[3]=0u+0x00000000u; // 800DF544
  goto L_800DF804; // 800DF548
L_800DF54C:;
  c->r[0]=0u+0x00000000u; // 800DF54C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800DF550
  c->r[3]=c->r[26]|c->r[26]; // 800DF554
  c->r[4]=c->r[1]+0x00000010u; // 800DF558
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800DF55C
  c->r[5]=c->r[1]+0x0000000Cu; // 800DF560
  c->r[6]=c->r[1]+0x00000008u; // 800DF564
  W32(c->r[1]+0x00000008u,c->r[0]); // 800DF568
  c->lr=0x800DF570u; f_800E1690(c); // 800DF56C
  cmps(c,0,(int32_t)c->r[3],0); // 800DF570
  if (!crb(c,2)) { goto L_800DF5A0; } // 800DF574
  c->r[3]=c->r[25]+0x00000000u; // 800DF578
  c->r[5]=c->r[25]+0x000001A8u; // 800DF57C
  c->r[4]=0u+0x00000114u; // 800DF580
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DF584
  c->lr=0x800DF58Cu; f_800F1300(c); // 800DF588
  c->lr=0x800DF590u; f_800DD3D0(c); // 800DF58C
  c->r[3]=c->r[3]+0x00000354u; // 800DF590
  c->lr=0x800DF598u; f_8018EA30(c); // 800DF594
  c->r[3]=0u+0x00000000u; // 800DF598
  goto L_800DF804; // 800DF59C
L_800DF5A0:;
  c->r[3]=R32(c->r[26]+0x0000011Cu); // 800DF5A0
  c->r[29]=0u+0x00000000u; // 800DF5A4
  c->r[0]=R32(c->r[26]+0x00000134u); // 800DF5A8
  c->r[4]=R32(c->r[26]+0x000000C0u); // 800DF5AC
  c->r[5]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 800DF5B0
  c->r[3]=R32(c->r[26]+0x00000110u); // 800DF5B4
  c->r[0]=R32(c->r[1]+0x00000008u); // 800DF5B8
  cmps(c,0,(int32_t)c->r[4],3); // 800DF5BC
  c->r[0]=c->r[3]+c->r[0]; // 800DF5C0
  W32(c->r[26]+0x00000110u,c->r[0]); // 800DF5C4
  if (crb(c,2)) { goto L_800DF5E0; } // 800DF5C8
  cmps(c,0,(int32_t)c->r[4],2); // 800DF5CC
  if (crb(c,2)) { goto L_800DF600; } // 800DF5D0
  cmps(c,0,(int32_t)c->r[4],1); // 800DF5D4
  if (crb(c,2)) { goto L_800DF608; } // 800DF5D8
  goto L_800DF610; // 800DF5DC
L_800DF5E0:;
  c->r[0]=rotl(c->r[5],29)&0x1FFFFFFFu; // 800DF5E0
  c->r[3]=rotl(c->r[5],0)&0x00000007u; cr0(c,c->r[3]); // 800DF5E4
  c->r[29]=(uint32_t)((int32_t)c->r[0]*(int32_t)14); // 800DF5E8
  if (crb(c,2)) { goto L_800DF624; } // 800DF5EC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800DF5F0
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800DF5F4
  c->r[29]=c->r[29]+c->r[0]; // 800DF5F8
  goto L_800DF624; // 800DF5FC
L_800DF600:;
  c->r[29]=c->r[5]|c->r[5]; // 800DF600
  goto L_800DF624; // 800DF604
L_800DF608:;
  c->r[29]=rotl(c->r[5],31)&0x7FFFFFFFu; // 800DF608
  goto L_800DF624; // 800DF60C
L_800DF610:;
  c->r[3]=c->r[25]+0x00000000u; // 800DF610
  c->r[5]=c->r[25]+0x000001C8u; // 800DF614
  c->r[4]=0u+0x00000170u; // 800DF618
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DF61C
  c->lr=0x800DF624u; f_800F1300(c); // 800DF620
L_800DF624:;
  c->r[28]=c->r[26]+0x00000B58u; // 800DF624
  c->r[27]=0u+0x00000000u; // 800DF628
  c->r[30]=0u+0x00000001u; // 800DF62C
  c->r[31]=0u+0x00000000u; // 800DF630
  goto L_800DF79C; // 800DF634
L_800DF638:;
  c->r[0]=R8(c->r[28]+0x00000000u); // 800DF638
  cmps(c,0,(int32_t)c->r[0],0); // 800DF63C
  if (crb(c,2)) { goto L_800DF794; } // 800DF640
  c->r[0]=R32(c->r[26]+0x000000C0u); // 800DF644
  c->r[3]=c->r[1]+0x00000030u; // 800DF648
  W32(c->r[1]+0x00000018u,c->r[0]); // 800DF64C
  c->r[4]=0u+0x00000000u; // 800DF650
  W8(c->r[1]+0x0000001Cu,c->r[30]); // 800DF654
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 800DF658
  W32(c->r[1]+0x00000020u,c->r[0]); // 800DF65C
  c->r[0]=R32(c->r[26]+0x000000CCu); // 800DF660
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DF664
  W32(c->r[1]+0x00000028u,c->r[31]); // 800DF668
  W32(c->r[1]+0x0000002Cu,c->r[29]); // 800DF66C
  goto L_800DF748; // 800DF670
  c->r[0]=c->r[0]|0x00000000u; // 800DF674
L_800DF678:;
  cmps(c,0,(int32_t)c->r[4],2); // 800DF678
  if (crb(c,0)) { goto L_800DF688; } // 800DF67C
  c->r[6]=0u+0x00000000u; // 800DF680
  goto L_800DF6AC; // 800DF684
L_800DF688:;
  c->r[5]=c->r[28]+c->r[4]; // 800DF688
  c->r[0]=R8(c->r[5]+0x00000010u); // 800DF68C
  cmps(c,0,(int32_t)c->r[0],16); // 800DF690
  if (crb(c,0)) { goto L_800DF6A0; } // 800DF694
  c->r[6]=0u+0x00000000u; // 800DF698
  goto L_800DF6AC; // 800DF69C
L_800DF6A0:;
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 800DF6A0
  c->r[5]=c->r[26]+c->r[0]; // 800DF6A4
  c->r[6]=c->r[5]+0x00000818u; // 800DF6A8
L_800DF6AC:;
  cmps(c,0,(int32_t)c->r[6],0); // 800DF6AC
  if (crb(c,2)) { goto L_800DF740; } // 800DF6B0
  c->r[0]=R32(c->r[6]+0x00000000u); // 800DF6B4
  W32(c->r[3]+0x00000000u,c->r[0]); // 800DF6B8
  c->r[0]=R32(c->r[6]+0x00000008u); // 800DF6BC
  c->r[5]=R32(c->r[6]+0x00000004u); // 800DF6C0
  W32(c->r[3]+0x00000004u,c->r[5]); // 800DF6C4
  W32(c->r[3]+0x00000008u,c->r[0]); // 800DF6C8
  c->r[0]=R32(c->r[6]+0x00000010u); // 800DF6CC
  c->r[5]=R32(c->r[6]+0x0000000Cu); // 800DF6D0
  W32(c->r[3]+0x0000000Cu,c->r[5]); // 800DF6D4
  W32(c->r[3]+0x00000010u,c->r[0]); // 800DF6D8
  c->r[0]=R32(c->r[6]+0x00000018u); // 800DF6DC
  c->r[5]=R32(c->r[6]+0x00000014u); // 800DF6E0
  W32(c->r[3]+0x00000014u,c->r[5]); // 800DF6E4
  W32(c->r[3]+0x00000018u,c->r[0]); // 800DF6E8
  c->r[0]=R32(c->r[6]+0x00000020u); // 800DF6EC
  c->r[5]=R32(c->r[6]+0x0000001Cu); // 800DF6F0
  W32(c->r[3]+0x0000001Cu,c->r[5]); // 800DF6F4
  W32(c->r[3]+0x00000020u,c->r[0]); // 800DF6F8
  c->r[0]=R16(c->r[6]+0x00000024u); // 800DF6FC
  W16(c->r[3]+0x00000024u,c->r[0]); // 800DF700
  c->r[0]=R16(c->r[6]+0x00000026u); // 800DF704
  W16(c->r[3]+0x00000026u,c->r[0]); // 800DF708
  c->r[0]=R16(c->r[6]+0x00000028u); // 800DF70C
  W16(c->r[3]+0x00000028u,c->r[0]); // 800DF710
  c->r[0]=R16(c->r[6]+0x0000002Au); // 800DF714
  W16(c->r[3]+0x0000002Au,c->r[0]); // 800DF718
  c->r[0]=R16(c->r[6]+0x0000002Cu); // 800DF71C
  W16(c->r[3]+0x0000002Cu,c->r[0]); // 800DF720
  c->r[0]=R16(c->r[6]+0x0000002Eu); // 800DF724
  W16(c->r[3]+0x0000002Eu,c->r[0]); // 800DF728
  c->r[0]=R16(c->r[6]+0x00000030u); // 800DF72C
  W16(c->r[3]+0x00000030u,c->r[0]); // 800DF730
  c->r[5]=R32(c->r[6]+0x00000000u); // 800DF734
  c->r[0]=R8(c->r[5]+0x00000000u); // 800DF738
  W16(c->r[3]+0x00000026u,c->r[0]); // 800DF73C
L_800DF740:;
  c->r[3]=c->r[3]+0x00000034u; // 800DF740
  c->r[4]=c->r[4]+0x00000001u; // 800DF744
L_800DF748:;
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 800DF748
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800DF74C
  if (crb(c,0)) { IRQCHK(c); goto L_800DF678; } // 800DF750
  c->lr=0x800DF758u; f_8018D6A0(c); // 800DF754
  c->r[0]=R32(c->r[28]+0x00000004u); // 800DF758
  c->r[25]=c->r[3]|c->r[3]; // 800DF75C
  cmps(c,0,(int32_t)c->r[0],0); // 800DF760
  if (crb(c,2)) { goto L_800DF78C; } // 800DF764
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 800DF768
  c->r[3]=c->r[0]|c->r[0]; // 800DF76C
  c->r[4]=c->r[1]+0x00000018u; // 800DF770
  c->lr=0x800DF778u; f_800E3FC0(c); // 800DF774
  c->r[3]=R32(c->r[28]+0x00000004u); // 800DF778
  c->r[4]=0u+0x00000001u; // 800DF77C
  c->lr=0x800DF784u; f_800E4D20(c); // 800DF780
  c->r[3]=R32(c->r[28]+0x00000004u); // 800DF784
  c->lr=0x800DF78Cu; f_800E41F0(c); // 800DF788
L_800DF78C:;
  c->r[3]=c->r[25]|c->r[25]; // 800DF78C
  c->lr=0x800DF794u; f_8018D6E0(c); // 800DF790
L_800DF794:;
  c->r[28]=c->r[28]+0x00000038u; // 800DF794
  c->r[27]=c->r[27]+0x00000001u; // 800DF798
L_800DF79C:;
  c->r[0]=R32(c->r[26]+0x0000080Cu); // 800DF79C
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 800DF7A0
  if (crb(c,0)) { IRQCHK(c); goto L_800DF638; } // 800DF7A4
  c->r[3]=R32(c->r[26]+0x000000E0u); // 800DF7A8
  c->r[4]=R32(c->r[1]+0x00000010u); // 800DF7AC
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 800DF7B0
  cmpu(c,0,c->r[4],c->r[0]); // 800DF7B4
  if (!crb(c,2)) { goto L_800DF7CC; } // 800DF7B8
  c->r[3]=c->r[26]|c->r[26]; // 800DF7BC
  c->r[4]=0u+0x00000001u; // 800DF7C0
  c->lr=0x800DF7C8u; f_800E10A0(c); // 800DF7C4
  goto L_800DF7E4; // 800DF7C8
L_800DF7CC:;
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800DF7CC
  cmpu(c,0,c->r[4],c->r[0]); // 800DF7D0
  if (!crb(c,2)) { goto L_800DF7E4; } // 800DF7D4
  c->r[3]=c->r[26]|c->r[26]; // 800DF7D8
  c->r[4]=0u+0x00000000u; // 800DF7DC
  c->lr=0x800DF7E4u; f_800E10A0(c); // 800DF7E0
L_800DF7E4:;
  c->r[3]=c->r[26]|c->r[26]; // 800DF7E4
  c->lr=0x800DF7ECu; f_800E15D0(c); // 800DF7E8
  c->r[0]=0u+0x00000001u; // 800DF7EC
  W8(c->r[26]+0x00000102u,c->r[0]); // 800DF7F0
L_800DF7F4:;
  c->lr=0x800DF7F8u; f_800DD3D0(c); // 800DF7F4
  c->r[3]=c->r[3]+0x00000354u; // 800DF7F8
  c->lr=0x800DF800u; f_8018EA30(c); // 800DF7FC
  c->r[3]=0u+0x00000001u; // 800DF800
L_800DF804:;
  c->r[11]=c->r[1]+0x000000C0u; // 800DF804
  c->lr=0x800DF80Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800DF808
  c->r[0]=R32(c->r[1]+0x000000C4u); // 800DF80C
  c->lr=c->r[0]; // 800DF810
  c->r[1]=c->r[1]+0x000000C0u; // 800DF814
  return; // 800DF818
}

// fn_800DF820
void f_800DF820(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DF820
  c->r[0]=c->lr; // 800DF824
  W32(c->r[1]+0x00000034u,c->r[0]); // 800DF828
  c->r[11]=c->r[1]+0x00000030u; // 800DF82C
  c->lr=0x800DF834u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800DF830
  c->r[31]=c->r[3]|c->r[3]; // 800DF834
  c->lr=0x800DF83Cu; f_800DD3D0(c); // 800DF838
  c->r[3]=c->r[3]+0x00000354u; // 800DF83C
  c->lr=0x800DF844u; f_8018E950(c); // 800DF840
  c->r[23]=c->r[31]|c->r[31]; // 800DF844
  c->r[24]=0u+0x00000000u; // 800DF848
L_800DF84C:;
  c->r[0]=R8(c->r[23]+0x00000B58u); // 800DF84C
  cmps(c,0,(int32_t)c->r[0],0); // 800DF850
  if (crb(c,2)) { goto L_800DF868; } // 800DF854
  c->r[3]=R32(c->r[23]+0x00000B5Cu); // 800DF858
  cmps(c,0,(int32_t)c->r[3],0); // 800DF85C
  if (crb(c,2)) { goto L_800DF868; } // 800DF860
  c->lr=0x800DF868u; f_800E4210(c); // 800DF864
L_800DF868:;
  c->r[24]=c->r[24]+0x00000001u; // 800DF868
  c->r[23]=c->r[23]+0x00000038u; // 800DF86C
  cmps(c,0,(int32_t)c->r[24],8); // 800DF870
  if (crb(c,0)) { IRQCHK(c); goto L_800DF84C; } // 800DF874
  c->r[0]=R8(c->r[31]+0x00000101u); // 800DF878
  cmps(c,0,(int32_t)c->r[0],0); // 800DF87C
  if (crb(c,2)) { goto L_800DF8A0; } // 800DF880
  cmps(c,0,(int32_t)c->r[31],0); // 800DF884
  c->r[23]=c->r[31]|c->r[31]; // 800DF888
  if (crb(c,2)) { goto L_800DF894; } // 800DF88C
  c->r[23]=c->r[31]+0x000000B4u; // 800DF890
L_800DF894:;
  c->lr=0x800DF898u; f_800DD3D0(c); // 800DF894
  c->r[4]=c->r[23]|c->r[23]; // 800DF898
  c->lr=0x800DF8A0u; f_800DD990(c); // 800DF89C
L_800DF8A0:;
  c->lr=0x800DF8A4u; f_800DD3D0(c); // 800DF8A0
  c->r[3]=c->r[3]+0x00000354u; // 800DF8A4
  c->lr=0x800DF8ACu; f_8018EA30(c); // 800DF8A8
  c->lr=0x800DF8B0u; f_800E2630(c); // 800DF8AC
  c->r[4]=c->r[31]+0x00000154u; // 800DF8B0
  c->lr=0x800DF8B8u; f_800E2E20(c); // 800DF8B4
  c->lr=0x800DF8BCu; f_8018D6A0(c); // 800DF8B8
  c->r[0]=R32(c->r[31]+0x00000174u); // 800DF8BC
  c->r[30]=c->r[3]|c->r[3]; // 800DF8C0
  cmps(c,0,(int32_t)c->r[0],0); // 800DF8C4
  if (crb(c,2)) { goto L_800DF958; } // 800DF8C8
  c->r[23]=0u+0x80260000u; // 800DF8CC
  c->r[24]=0u+0x80260000u; // 800DF8D0
  c->r[26]=0u+0x80260000u; // 800DF8D4
  c->r[27]=0u+0x80260000u; // 800DF8D8
  c->r[28]=0u+0x80260000u; // 800DF8DC
  c->r[29]=0u+0x80260000u; // 800DF8E0
  goto L_800DF94C; // 800DF8E4
L_800DF8E8:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DF8E8
  if (!crb(c,2)) { goto L_800DF904; } // 800DF8EC
  c->r[3]=c->r[23]+0xFFFFA144u; // 800DF8F0
  c->r[5]=c->r[24]+0xFFFFA120u; // 800DF8F4
  c->r[4]=0u+0x000001FBu; // 800DF8F8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DF8FC
  c->lr=0x800DF904u; f_800F1300(c); // 800DF900
L_800DF904:;
  c->r[25]=R32(c->r[31]+0x0000017Cu); // 800DF904
  cmps(c,0,(int32_t)c->r[25],0); // 800DF908
  if (!crb(c,2)) { goto L_800DF924; } // 800DF90C
  c->r[3]=c->r[26]+0xFFFFA0E4u; // 800DF910
  c->r[5]=c->r[27]+0xFFFFA0C0u; // 800DF914
  c->r[4]=0u+0x0000023Du; // 800DF918
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DF91C
  c->lr=0x800DF924u; f_800F1300(c); // 800DF920
L_800DF924:;
  c->r[25]=addc(c,c->r[25],0xFFFFFFD4u,0); cr0(c,c->r[25]); // 800DF924
  if (!crb(c,2)) { goto L_800DF940; } // 800DF928
  c->r[3]=c->r[28]+0xFFFFA114u; // 800DF92C
  c->r[5]=c->r[29]+0xFFFFA0F0u; // 800DF930
  c->r[4]=0u+0x00000193u; // 800DF934
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DF938
  c->lr=0x800DF940u; f_800F1300(c); // 800DF93C
L_800DF940:;
  c->lr=0x800DF944u; f_800E2630(c); // 800DF940
  c->r[4]=c->r[25]|c->r[25]; // 800DF944
  c->lr=0x800DF94Cu; f_800E2E20(c); // 800DF948
L_800DF94C:;
  c->r[0]=R32(c->r[31]+0x00000174u); // 800DF94C
  cmps(c,0,(int32_t)c->r[0],0); // 800DF950
  if (!crb(c,2)) { IRQCHK(c); goto L_800DF8E8; } // 800DF954
L_800DF958:;
  c->r[3]=c->r[30]|c->r[30]; // 800DF958
  c->lr=0x800DF960u; f_8018D6E0(c); // 800DF95C
  c->r[24]=c->r[31]|c->r[31]; // 800DF960
  c->r[23]=0u+0x00000000u; // 800DF964
  c->r[29]=0u+0x00000000u; // 800DF968
  goto L_800DF990; // 800DF96C
L_800DF970:;
  c->r[4]=R32(c->r[24]+0x00000818u); // 800DF970
  cmps(c,0,(int32_t)c->r[4],0); // 800DF974
  if (crb(c,2)) { goto L_800DF988; } // 800DF978
  c->r[3]=R32(c->r[31]+0x00000804u); // 800DF97C
  c->lr=0x800DF984u; f_800DDD20(c); // 800DF980
  W32(c->r[24]+0x00000818u,c->r[29]); // 800DF984
L_800DF988:;
  c->r[24]=c->r[24]+0x00000034u; // 800DF988
  c->r[23]=c->r[23]+0x00000001u; // 800DF98C
L_800DF990:;
  c->r[0]=R32(c->r[31]+0x00000810u); // 800DF990
  cmps(c,0,(int32_t)c->r[23],(int32_t)c->r[0]); // 800DF994
  if (crb(c,0)) { IRQCHK(c); goto L_800DF970; } // 800DF998
  c->lr=0x800DF9A0u; f_8018D6A0(c); // 800DF99C
  c->r[30]=c->r[3]|c->r[3]; // 800DF9A0
  c->r[24]=c->r[31]+0x00000B58u; // 800DF9A4
  c->r[23]=0u+0x00000000u; // 800DF9A8
  c->r[29]=0u+0x00000000u; // 800DF9AC
  goto L_800DF9DC; // 800DF9B0
L_800DF9B4:;
  c->r[0]=R8(c->r[24]+0x00000000u); // 800DF9B4
  cmps(c,0,(int32_t)c->r[0],0); // 800DF9B8
  if (crb(c,2)) { goto L_800DF9D4; } // 800DF9BC
  c->r[3]=R32(c->r[24]+0x00000004u); // 800DF9C0
  cmps(c,0,(int32_t)c->r[3],0); // 800DF9C4
  if (crb(c,2)) { goto L_800DF9D4; } // 800DF9C8
  c->lr=0x800DF9D0u; f_800E3EF0(c); // 800DF9CC
  W32(c->r[24]+0x00000004u,c->r[29]); // 800DF9D0
L_800DF9D4:;
  c->r[24]=c->r[24]+0x00000038u; // 800DF9D4
  c->r[23]=c->r[23]+0x00000001u; // 800DF9D8
L_800DF9DC:;
  c->r[0]=R32(c->r[31]+0x0000080Cu); // 800DF9DC
  cmps(c,0,(int32_t)c->r[23],(int32_t)c->r[0]); // 800DF9E0
  if (crb(c,0)) { IRQCHK(c); goto L_800DF9B4; } // 800DF9E4
  c->r[3]=c->r[30]|c->r[30]; // 800DF9E8
  c->lr=0x800DF9F0u; f_8018D6E0(c); // 800DF9EC
  c->lr=0x800DF9F4u; f_800DD3D0(c); // 800DF9F0
  c->r[3]=c->r[3]+0x00000354u; // 800DF9F4
  c->lr=0x800DF9FCu; f_8018E950(c); // 800DF9F8
  c->r[3]=R32(c->r[31]+0x00000808u); // 800DF9FC
  cmps(c,0,(int32_t)c->r[3],0); // 800DFA00
  if (crb(c,2)) { goto L_800DFA20; } // 800DFA04
  c->r[12]=R32(c->r[3]+0x00000000u); // 800DFA08
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DFA0C
  c->ctr=c->r[12]; // 800DFA10
  if (true) { c->lr=0x800DFA18u; dispatch(c,c->ctr); } // 800DFA14
  c->r[0]=0u+0x00000000u; // 800DFA18
  W32(c->r[31]+0x00000808u,c->r[0]); // 800DFA1C
L_800DFA20:;
  c->lr=0x800DFA24u; f_800DD3D0(c); // 800DFA20
  c->r[3]=c->r[3]+0x00000354u; // 800DFA24
  c->lr=0x800DFA2Cu; f_8018EA30(c); // 800DFA28
  c->r[0]=0u+0x00000000u; // 800DFA2C
  W8(c->r[31]+0x00000102u,c->r[0]); // 800DFA30
  c->r[3]=c->r[31]+0x00000180u; // 800DFA34
  W8(c->r[31]+0x00000103u,c->r[0]); // 800DFA38
  W8(c->r[31]+0x00000101u,c->r[0]); // 800DFA3C
  c->lr=0x800DFA44u; f_800CF410(c); // 800DFA40
  cmps(c,0,(int32_t)c->r[3],32); // 800DFA44
  if (crb(c,2)) { goto L_800DFA68; } // 800DFA48
  c->r[3]=0u+0x80260000u; // 800DFA4C
  c->r[5]=0u+0x80260000u; // 800DFA50
  c->r[3]=c->r[3]+0xFFFF9A78u; // 800DFA54
  c->r[4]=0u+0x000001B3u; // 800DFA58
  c->r[5]=c->r[5]+0xFFFF9AC8u; // 800DFA5C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DFA60
  c->lr=0x800DFA68u; f_800F1300(c); // 800DFA64
L_800DFA68:;
  c->r[11]=c->r[1]+0x00000030u; // 800DFA68
  c->lr=0x800DFA70u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800DFA6C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800DFA70
  c->lr=c->r[0]; // 800DFA74
  c->r[1]=c->r[1]+0x00000030u; // 800DFA78
  return; // 800DFA7C
}

