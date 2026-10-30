#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// GXSetViewport
void f_801A3AA0(Ctx* __restrict c) {
  trace_call(0x801A3AA0u);
  c->r[3]=R32(c->r[2]+0xFFFFA038u); // 801A3AA0
  {uint32_t ea=c->r[3]+0x00000544u; WF32(ea,c->f[1]);} // 801A3AA4
  {uint32_t ea=c->r[3]+0x00000548u; WF32(ea,c->f[2]);} // 801A3AA8
  {uint32_t ea=c->r[3]+0x0000054Cu; WF32(ea,c->f[3]);} // 801A3AAC
  {uint32_t ea=c->r[3]+0x00000550u; WF32(ea,c->f[4]);} // 801A3AB0
  {uint32_t ea=c->r[3]+0x00000554u; WF32(ea,c->f[5]);} // 801A3AB4
  {uint32_t ea=c->r[3]+0x00000558u; WF32(ea,c->f[6]);} // 801A3AB8
  c->r[0]=R32(c->r[3]+0x000005FCu); // 801A3ABC
  c->r[0]=c->r[0]|0x10000000u; // 801A3AC0
  W32(c->r[3]+0x000005FCu,c->r[0]); // 801A3AC4
  return; // 801A3AC8
}

// fn_801A3AD0
void f_801A3AD0(Ctx* __restrict c) {
  c->r[4]=R32(c->r[2]+0xFFFFA038u); // 801A3AD0
  {uint32_t ea=c->r[4]+0x00000544u; psq_load(c,2,ea,0,0);} // 801A3AD4
  {uint32_t ea=c->r[4]+0x0000054Cu; psq_load(c,1,ea,0,0);} // 801A3AD8
  {uint32_t ea=c->r[4]+0x00000554u; psq_load(c,0,ea,0,0);} // 801A3ADC
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,2,ea,0,0);} // 801A3AE0
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,1,ea,0,0);} // 801A3AE4
  {uint32_t ea=c->r[3]+0x00000010u; psq_store(c,0,ea,0,0);} // 801A3AE8
  return; // 801A3AEC
}

// GXSetScissor
void f_801A3AF0(Ctx* __restrict c) {
  trace_call(0x801A3AF0u);
  c->r[8]=R32(c->r[2]+0xFFFFA038u); // 801A3AF0
  c->r[4]=c->r[4]+0x00000156u; // 801A3AF4
  c->r[9]=c->r[3]+0x00000156u; // 801A3AF8
  c->r[7]=0u+0xCC010000u; // 801A3AFC
  c->r[0]=R32(c->r[8]+0x00000148u); // 801A3B00
  c->r[0]=(rotl(c->r[4],0)&0x000007FFu)|(c->r[0]&~0x000007FFu); // 801A3B04
  c->r[0]=(rotl(c->r[9],12)&0x007FF000u)|(c->r[0]&~0x007FF000u); // 801A3B08
  W32(c->r[8]+0x00000148u,c->r[0]); // 801A3B0C
  c->r[6]=c->r[4]+c->r[6]; // 801A3B10
  c->r[3]=c->r[9]+c->r[5]; // 801A3B14
  c->r[0]=c->r[6]+0xFFFFFFFFu; // 801A3B18
  c->r[5]=R32(c->r[8]+0x0000014Cu); // 801A3B1C
  c->r[5]=(rotl(c->r[0],0)&0x000007FFu)|(c->r[5]&~0x000007FFu); // 801A3B20
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801A3B24
  c->r[5]=(rotl(c->r[3],12)&0x007FF000u)|(c->r[5]&~0x007FF000u); // 801A3B28
  W32(c->r[8]+0x0000014Cu,c->r[5]); // 801A3B2C
  c->r[4]=0u+0x00000061u; // 801A3B30
  c->r[0]=0u+0x00000000u; // 801A3B34
  W8(c->r[7]+0xFFFF8000u,c->r[4]); // 801A3B38
  c->r[3]=R32(c->r[8]+0x00000148u); // 801A3B3C
  W32(c->r[7]+0xFFFF8000u,c->r[3]); // 801A3B40
  W8(c->r[7]+0xFFFF8000u,c->r[4]); // 801A3B44
  c->r[3]=R32(c->r[8]+0x0000014Cu); // 801A3B48
  W32(c->r[7]+0xFFFF8000u,c->r[3]); // 801A3B4C
  W16(c->r[8]+0x00000002u,c->r[0]); // 801A3B50
  return; // 801A3B54
}

// GXSetScissorBoxOffset
void f_801A3B60(Ctx* __restrict c) {
  trace_call(0x801A3B60u);
  c->r[5]=0u+0xCC010000u; // 801A3B60
  c->r[0]=0u+0x00000061u; // 801A3B64
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 801A3B68
  c->r[0]=c->r[4]+0x00000156u; // 801A3B6C
  c->r[3]=c->r[3]+0x00000156u; // 801A3B70
  c->r[4]=0u+0x00000059u; // 801A3B74
  c->r[6]=0u+0x00000000u; // 801A3B78
  c->r[6]=(rotl(c->r[3],31)&0x000003FFu)|(c->r[6]&~0x000003FFu); // 801A3B7C
  c->r[3]=R32(c->r[2]+0xFFFFA038u); // 801A3B80
  c->r[6]=(rotl(c->r[0],9)&0x000FFC00u)|(c->r[6]&~0x000FFC00u); // 801A3B84
  c->r[0]=0u+0x00000000u; // 801A3B88
  c->r[6]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 801A3B8C
  W32(c->r[5]+0xFFFF8000u,c->r[6]); // 801A3B90
  W16(c->r[3]+0x00000002u,c->r[0]); // 801A3B94
  return; // 801A3B98
}

// GXSetClipMode
void f_801A3BA0(Ctx* __restrict c) {
  trace_call(0x801A3BA0u);
  c->r[6]=0u+0xCC010000u; // 801A3BA0
  c->r[0]=0u+0x00000010u; // 801A3BA4
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801A3BA8
  c->r[5]=0u+0x00001005u; // 801A3BAC
  c->r[4]=R32(c->r[2]+0xFFFFA038u); // 801A3BB0
  c->r[0]=0u+0x00000001u; // 801A3BB4
  W32(c->r[6]+0xFFFF8000u,c->r[5]); // 801A3BB8
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 801A3BBC
  W16(c->r[4]+0x00000002u,c->r[0]); // 801A3BC0
  return; // 801A3BC4
}

// __GXSetMatrixIndex
void f_801A3BD0(Ctx* __restrict c) {
  trace_call(0x801A3BD0u);
  cmps(c,0,(int32_t)c->r[3],5); // 801A3BD0
  if (!crb(c,0)) { goto L_801A3C14; } // 801A3BD4
  c->r[5]=0u+0xCC010000u; // 801A3BD8
  c->r[0]=0u+0x00000008u; // 801A3BDC
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 801A3BE0
  c->r[0]=0u+0x00000030u; // 801A3BE4
  c->r[6]=R32(c->r[2]+0xFFFFA038u); // 801A3BE8
  c->r[3]=0u+0x00000010u; // 801A3BEC
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 801A3BF0
  c->r[0]=0u+0x00001018u; // 801A3BF4
  c->r[4]=R32(c->r[6]+0x00000080u); // 801A3BF8
  W32(c->r[5]+0xFFFF8000u,c->r[4]); // 801A3BFC
  W8(c->r[5]+0xFFFF8000u,c->r[3]); // 801A3C00
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 801A3C04
  c->r[0]=R32(c->r[6]+0x00000080u); // 801A3C08
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 801A3C0C
  goto L_801A3C4C; // 801A3C10
L_801A3C14:;
  c->r[5]=0u+0xCC010000u; // 801A3C14
  c->r[0]=0u+0x00000008u; // 801A3C18
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 801A3C1C
  c->r[0]=0u+0x00000040u; // 801A3C20
  c->r[6]=R32(c->r[2]+0xFFFFA038u); // 801A3C24
  c->r[3]=0u+0x00000010u; // 801A3C28
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 801A3C2C
  c->r[0]=0u+0x00001019u; // 801A3C30
  c->r[4]=R32(c->r[6]+0x00000084u); // 801A3C34
  W32(c->r[5]+0xFFFF8000u,c->r[4]); // 801A3C38
  W8(c->r[5]+0xFFFF8000u,c->r[3]); // 801A3C3C
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 801A3C40
  c->r[0]=R32(c->r[6]+0x00000084u); // 801A3C44
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 801A3C48
L_801A3C4C:;
  c->r[0]=0u+0x00000001u; // 801A3C4C
  W16(c->r[6]+0x00000002u,c->r[0]); // 801A3C50
  return; // 801A3C54
}

// GXSetGPMetric
void f_801A3C60(Ctx* __restrict c) {
  trace_call(0x801A3C60u);
  c->r[5]=R32(c->r[2]+0xFFFFA038u); // 801A3C60
  c->r[6]=R32(c->r[5]+0x000005ECu); // 801A3C64
  c->r[0]=c->r[6]+0xFFFFFFF5u; // 801A3C68
  cmpu(c,0,c->r[0],0x0000000Fu); // 801A3C6C
  if (!crb(c,1)) { goto L_801A3CB0; } // 801A3C70
  cmpu(c,0,c->r[6],0x0000000Au); // 801A3C74
  if (!crb(c,1)) { goto L_801A3C90; } // 801A3C78
  c->r[0]=c->r[6]+0xFFFFFFE5u; // 801A3C7C
  cmpu(c,0,c->r[0],0x00000006u); // 801A3C80
  if (!crb(c,1)) { goto L_801A3CC8; } // 801A3C84
  cmps(c,0,(int32_t)c->r[6],34); // 801A3C88
  if (!crb(c,2)) { goto L_801A3CDC; } // 801A3C8C
L_801A3C90:;
  c->r[7]=0u+0xCC010000u; // 801A3C90
  c->r[0]=0u+0x00000010u; // 801A3C94
  W8(c->r[7]+0xFFFF8000u,c->r[0]); // 801A3C98
  c->r[6]=0u+0x00001006u; // 801A3C9C
  c->r[0]=0u+0x00000000u; // 801A3CA0
  W32(c->r[7]+0xFFFF8000u,c->r[6]); // 801A3CA4
  W32(c->r[7]+0xFFFF8000u,c->r[0]); // 801A3CA8
  goto L_801A3CDC; // 801A3CAC
L_801A3CB0:;
  c->r[6]=0u+0xCC010000u; // 801A3CB0
  c->r[0]=0u+0x00000061u; // 801A3CB4
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801A3CB8
  c->r[0]=0u+0x23000000u; // 801A3CBC
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801A3CC0
  goto L_801A3CDC; // 801A3CC4
L_801A3CC8:;
  c->r[6]=0u+0xCC010000u; // 801A3CC8
  c->r[0]=0u+0x00000061u; // 801A3CCC
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801A3CD0
  c->r[0]=0u+0x24000000u; // 801A3CD4
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801A3CD8
L_801A3CDC:;
  c->r[6]=R32(c->r[5]+0x000005F0u); // 801A3CDC
  cmpu(c,0,c->r[6],0x00000008u); // 801A3CE0
  if (!crb(c,1)) { goto L_801A3D08; } // 801A3CE4
  c->r[0]=c->r[6]+0xFFFFFFF7u; // 801A3CE8
  cmpu(c,0,c->r[0],0x00000007u); // 801A3CEC
  if (!crb(c,1)) { goto L_801A3D20; } // 801A3CF0
  c->r[0]=c->r[6]+0xFFFFFFEFu; // 801A3CF4
  cmpu(c,0,c->r[0],0x00000003u); // 801A3CF8
  if (!crb(c,1)) { goto L_801A3D4C; } // 801A3CFC
  cmps(c,0,(int32_t)c->r[6],21); // 801A3D00
  if (!crb(c,2)) { goto L_801A3D58; } // 801A3D04
L_801A3D08:;
  c->r[6]=0u+0xCC010000u; // 801A3D08
  c->r[0]=0u+0x00000061u; // 801A3D0C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801A3D10
  c->r[0]=0u+0x67000000u; // 801A3D14
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801A3D18
  goto L_801A3D58; // 801A3D1C
L_801A3D20:;
  c->r[8]=R32(c->r[5]+0x000005F4u); // 801A3D20
  c->r[6]=0u+0xCC010000u; // 801A3D24
  c->r[7]=0u+0x00000008u; // 801A3D28
  c->r[0]=0u+0x00000020u; // 801A3D2C
  c->r[8]=rotl(c->r[8],0)&0xFFFFFF0Fu; // 801A3D30
  W32(c->r[5]+0x000005F4u,c->r[8]); // 801A3D34
  W8(c->r[6]+0xFFFF8000u,c->r[7]); // 801A3D38
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801A3D3C
  c->r[0]=R32(c->r[5]+0x000005F4u); // 801A3D40
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801A3D44
  goto L_801A3D58; // 801A3D48
L_801A3D4C:;
  c->r[6]=R32(c->r[13]+0xFFFFB1ECu); // 801A3D4C
  c->r[0]=0u+0x00000000u; // 801A3D50
  W16(c->r[6]+0x00000006u,c->r[0]); // 801A3D54
L_801A3D58:;
  cmpu(c,0,c->r[3],0x00000022u); // 801A3D58
  W32(c->r[5]+0x000005ECu,c->r[3]); // 801A3D5C
  if (crb(c,1)) { goto L_801A417C; } // 801A3D60
  c->r[6]=0u+0x80270000u; // 801A3D64
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801A3D68
  c->r[6]=c->r[6]+0x00004DE0u; // 801A3D6C
  c->r[6]=R32(c->r[6]+c->r[0]); // 801A3D70
  c->ctr=c->r[6]; // 801A3D74
  if (true) { switch (c->ctr) { case 0x801A3D7Cu: goto L_801A3D7C; case 0x801A3D9Cu: goto L_801A3D9C; case 0x801A3DBCu: goto L_801A3DBC; case 0x801A3DDCu: goto L_801A3DDC; case 0x801A3DFCu: goto L_801A3DFC; case 0x801A3E1Cu: goto L_801A3E1C; case 0x801A3E3Cu: goto L_801A3E3C; case 0x801A3E5Cu: goto L_801A3E5C; case 0x801A3E7Cu: goto L_801A3E7C; case 0x801A3E9Cu: goto L_801A3E9C; case 0x801A3EBCu: goto L_801A3EBC; case 0x801A3EDCu: goto L_801A3EDC; case 0x801A3EFCu: goto L_801A3EFC; case 0x801A3F18u: goto L_801A3F18; case 0x801A3F34u: goto L_801A3F34; case 0x801A3F50u: goto L_801A3F50; case 0x801A3F6Cu: goto L_801A3F6C; case 0x801A3F88u: goto L_801A3F88; case 0x801A3FA4u: goto L_801A3FA4; case 0x801A3FC0u: goto L_801A3FC0; case 0x801A3FDCu: goto L_801A3FDC; case 0x801A3FF8u: goto L_801A3FF8; case 0x801A4014u: goto L_801A4014; case 0x801A4030u: goto L_801A4030; case 0x801A404Cu: goto L_801A404C; case 0x801A4068u: goto L_801A4068; case 0x801A4084u: goto L_801A4084; case 0x801A40A0u: goto L_801A40A0; case 0x801A40BCu: goto L_801A40BC; case 0x801A40D8u: goto L_801A40D8; case 0x801A40F4u: goto L_801A40F4; case 0x801A4110u: goto L_801A4110; case 0x801A412Cu: goto L_801A412C; case 0x801A4148u: goto L_801A4148; case 0x801A4164u: goto L_801A4164; case 0x801A41A0u: goto L_801A41A0; case 0x801A41BCu: goto L_801A41BC; case 0x801A41D8u: goto L_801A41D8; case 0x801A41F4u: goto L_801A41F4; case 0x801A4210u: goto L_801A4210; case 0x801A422Cu: goto L_801A422C; case 0x801A4248u: goto L_801A4248; case 0x801A4264u: goto L_801A4264; case 0x801A4280u: goto L_801A4280; case 0x801A429Cu: goto L_801A429C; case 0x801A42B8u: goto L_801A42B8; case 0x801A42E8u: goto L_801A42E8; case 0x801A4318u: goto L_801A4318; case 0x801A4348u: goto L_801A4348; case 0x801A4378u: goto L_801A4378; case 0x801A43A8u: goto L_801A43A8; case 0x801A43D8u: goto L_801A43D8; case 0x801A4408u: goto L_801A4408; case 0x801A4434u: goto L_801A4434; case 0x801A4444u: goto L_801A4444; case 0x801A4454u: goto L_801A4454; case 0x801A4464u: goto L_801A4464; default: break; } dispatch(c,c->ctr); return; } // 801A3D78
L_801A3D7C:;
  c->r[6]=0u+0xCC010000u; // 801A3D7C
  c->r[0]=0u+0x00000010u; // 801A3D80
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801A3D84
  c->r[3]=0u+0x00001006u; // 801A3D88
  c->r[0]=0u+0x00000273u; // 801A3D8C
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 801A3D90
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801A3D94
  goto L_801A417C; // 801A3D98
L_801A3D9C:;
  c->r[6]=0u+0xCC010000u; // 801A3D9C
  c->r[0]=0u+0x00000010u; // 801A3DA0
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801A3DA4
  c->r[3]=0u+0x00001006u; // 801A3DA8
  c->r[0]=0u+0x0000014Au; // 801A3DAC
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 801A3DB0
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801A3DB4
  goto L_801A417C; // 801A3DB8
L_801A3DBC:;
  c->r[6]=0u+0xCC010000u; // 801A3DBC
  c->r[0]=0u+0x00000010u; // 801A3DC0
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801A3DC4
  c->r[3]=0u+0x00001006u; // 801A3DC8
  c->r[0]=0u+0x0000016Bu; // 801A3DCC
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 801A3DD0
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801A3DD4
  goto L_801A417C; // 801A3DD8
L_801A3DDC:;
  c->r[6]=0u+0xCC010000u; // 801A3DDC
  c->r[0]=0u+0x00000010u; // 801A3DE0
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801A3DE4
  c->r[3]=0u+0x00001006u; // 801A3DE8
  c->r[0]=0u+0x00000084u; // 801A3DEC
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 801A3DF0
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801A3DF4
  goto L_801A417C; // 801A3DF8
L_801A3DFC:;
  c->r[6]=0u+0xCC010000u; // 801A3DFC
  c->r[0]=0u+0x00000010u; // 801A3E00
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801A3E04
  c->r[3]=0u+0x00001006u; // 801A3E08
  c->r[0]=0u+0x000000C6u; // 801A3E0C
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 801A3E10
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801A3E14
  goto L_801A417C; // 801A3E18
L_801A3E1C:;
  c->r[6]=0u+0xCC010000u; // 801A3E1C
  c->r[0]=0u+0x00000010u; // 801A3E20
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801A3E24
  c->r[3]=0u+0x00001006u; // 801A3E28
  c->r[0]=0u+0x00000210u; // 801A3E2C
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 801A3E30
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801A3E34
  goto L_801A417C; // 801A3E38
L_801A3E3C:;
  c->r[6]=0u+0xCC010000u; // 801A3E3C
  c->r[0]=0u+0x00000010u; // 801A3E40
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801A3E44
  c->r[3]=0u+0x00001006u; // 801A3E48
  c->r[0]=0u+0x00000252u; // 801A3E4C
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 801A3E50
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801A3E54
  goto L_801A417C; // 801A3E58
L_801A3E5C:;
  c->r[6]=0u+0xCC010000u; // 801A3E5C
  c->r[0]=0u+0x00000010u; // 801A3E60
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801A3E64
  c->r[3]=0u+0x00001006u; // 801A3E68
  c->r[0]=0u+0x00000231u; // 801A3E6C
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 801A3E70
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801A3E74
  goto L_801A417C; // 801A3E78
L_801A3E7C:;
  c->r[6]=0u+0xCC010000u; // 801A3E7C
  c->r[0]=0u+0x00000010u; // 801A3E80
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801A3E84
  c->r[3]=0u+0x00001006u; // 801A3E88
  c->r[0]=0u+0x000001ADu; // 801A3E8C
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 801A3E90
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801A3E94
  goto L_801A417C; // 801A3E98
L_801A3E9C:;
  c->r[6]=0u+0xCC010000u; // 801A3E9C
  c->r[0]=0u+0x00000010u; // 801A3EA0
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801A3EA4
  c->r[3]=0u+0x00001006u; // 801A3EA8
  c->r[0]=0u+0x000001CEu; // 801A3EAC
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 801A3EB0
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801A3EB4
  goto L_801A417C; // 801A3EB8
L_801A3EBC:;
  c->r[6]=0u+0xCC010000u; // 801A3EBC
  c->r[0]=0u+0x00000010u; // 801A3EC0
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801A3EC4
  c->r[3]=0u+0x00001006u; // 801A3EC8
  c->r[0]=0u+0x00000021u; // 801A3ECC
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 801A3ED0
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801A3ED4
  goto L_801A417C; // 801A3ED8
L_801A3EDC:;
  c->r[6]=0u+0xCC010000u; // 801A3EDC
  c->r[0]=0u+0x00000010u; // 801A3EE0
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801A3EE4
  c->r[3]=0u+0x00001006u; // 801A3EE8
  c->r[0]=0u+0x00000153u; // 801A3EEC
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 801A3EF0
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801A3EF4
  goto L_801A417C; // 801A3EF8
L_801A3EFC:;
  c->r[6]=0u+0xCC010000u; // 801A3EFC
  c->r[0]=0u+0x00000061u; // 801A3F00
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801A3F04
  c->r[3]=0u+0x23010000u; // 801A3F08
  c->r[0]=c->r[3]+0xFFFFAE7Fu; // 801A3F0C
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801A3F10
  goto L_801A417C; // 801A3F14
L_801A3F18:;
  c->r[6]=0u+0xCC010000u; // 801A3F18
  c->r[0]=0u+0x00000061u; // 801A3F1C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801A3F20
  c->r[3]=0u+0x23010000u; // 801A3F24
  c->r[0]=c->r[3]+0xFFFF8E7Fu; // 801A3F28
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801A3F2C
  goto L_801A417C; // 801A3F30
L_801A3F34:;
  c->r[6]=0u+0xCC010000u; // 801A3F34
  c->r[0]=0u+0x00000061u; // 801A3F38
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801A3F3C
  c->r[3]=0u+0x23010000u; // 801A3F40
  c->r[0]=c->r[3]+0xFFFF9E7Fu; // 801A3F44
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801A3F48
  goto L_801A417C; // 801A3F4C
L_801A3F50:;
  c->r[6]=0u+0xCC010000u; // 801A3F50
  c->r[0]=0u+0x00000061u; // 801A3F54
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801A3F58
  c->r[3]=0u+0x23000000u; // 801A3F5C
  c->r[0]=c->r[3]+0x00001E7Fu; // 801A3F60
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801A3F64
  goto L_801A417C; // 801A3F68
L_801A3F6C:;
  c->r[6]=0u+0xCC010000u; // 801A3F6C
  c->r[0]=0u+0x00000061u; // 801A3F70
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801A3F74
  c->r[3]=0u+0x23010000u; // 801A3F78
  c->r[0]=c->r[3]+0xFFFFAC3Fu; // 801A3F7C
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801A3F80
  goto L_801A417C; // 801A3F84
L_801A3F88:;
  c->r[6]=0u+0xCC010000u; // 801A3F88
  c->r[0]=0u+0x00000061u; // 801A3F8C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801A3F90
  c->r[3]=0u+0x23010000u; // 801A3F94
  c->r[0]=c->r[3]+0xFFFFAC7Fu; // 801A3F98
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801A3F9C
  goto L_801A417C; // 801A3FA0
L_801A3FA4:;
  c->r[6]=0u+0xCC010000u; // 801A3FA4
  c->r[0]=0u+0x00000061u; // 801A3FA8
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801A3FAC
  c->r[3]=0u+0x23010000u; // 801A3FB0
  c->r[0]=c->r[3]+0xFFFFACBFu; // 801A3FB4
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801A3FB8
  goto L_801A417C; // 801A3FBC
L_801A3FC0:;
  c->r[6]=0u+0xCC010000u; // 801A3FC0
  c->r[0]=0u+0x00000061u; // 801A3FC4
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801A3FC8
  c->r[3]=0u+0x23010000u; // 801A3FCC
  c->r[0]=c->r[3]+0xFFFFACFFu; // 801A3FD0
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801A3FD4
  goto L_801A417C; // 801A3FD8
L_801A3FDC:;
  c->r[6]=0u+0xCC010000u; // 801A3FDC
  c->r[0]=0u+0x00000061u; // 801A3FE0
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801A3FE4
  c->r[3]=0u+0x23010000u; // 801A3FE8
  c->r[0]=c->r[3]+0xFFFFAD3Fu; // 801A3FEC
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801A3FF0
  goto L_801A417C; // 801A3FF4
L_801A3FF8:;
  c->r[6]=0u+0xCC010000u; // 801A3FF8
  c->r[0]=0u+0x00000061u; // 801A3FFC
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801A4000
  c->r[3]=0u+0x23010000u; // 801A4004
  c->r[0]=c->r[3]+0xFFFFAD7Fu; // 801A4008
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801A400C
  goto L_801A417C; // 801A4010
L_801A4014:;
  c->r[6]=0u+0xCC010000u; // 801A4014
  c->r[0]=0u+0x00000061u; // 801A4018
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801A401C
  c->r[3]=0u+0x23010000u; // 801A4020
  c->r[0]=c->r[3]+0xFFFFADBFu; // 801A4024
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801A4028
  goto L_801A417C; // 801A402C
L_801A4030:;
  c->r[6]=0u+0xCC010000u; // 801A4030
  c->r[0]=0u+0x00000061u; // 801A4034
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801A4038
  c->r[3]=0u+0x23010000u; // 801A403C
  c->r[0]=c->r[3]+0xFFFFADFFu; // 801A4040
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801A4044
  goto L_801A417C; // 801A4048
L_801A404C:;
  c->r[6]=0u+0xCC010000u; // 801A404C
  c->r[0]=0u+0x00000061u; // 801A4050
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801A4054
  c->r[3]=0u+0x23010000u; // 801A4058
  c->r[0]=c->r[3]+0xFFFFAE3Fu; // 801A405C
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801A4060
  goto L_801A417C; // 801A4064
L_801A4068:;
  c->r[6]=0u+0xCC010000u; // 801A4068
  c->r[0]=0u+0x00000061u; // 801A406C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801A4070
  c->r[3]=0u+0x23010000u; // 801A4074
  c->r[0]=c->r[3]+0xFFFFA27Fu; // 801A4078
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801A407C
  goto L_801A417C; // 801A4080
L_801A4084:;
  c->r[6]=0u+0xCC010000u; // 801A4084
  c->r[0]=0u+0x00000061u; // 801A4088
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801A408C
  c->r[3]=0u+0x23010000u; // 801A4090
  c->r[0]=c->r[3]+0xFFFFA67Fu; // 801A4094
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801A4098
  goto L_801A417C; // 801A409C
L_801A40A0:;
  c->r[6]=0u+0xCC010000u; // 801A40A0
  c->r[0]=0u+0x00000061u; // 801A40A4
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801A40A8
  c->r[3]=0u+0x23010000u; // 801A40AC
  c->r[0]=c->r[3]+0xFFFFAA7Fu; // 801A40B0
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801A40B4
  goto L_801A417C; // 801A40B8
L_801A40BC:;
  c->r[6]=0u+0xCC010000u; // 801A40BC
  c->r[0]=0u+0x00000061u; // 801A40C0
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801A40C4
  c->r[3]=0u+0x24030000u; // 801A40C8
  c->r[0]=c->r[3]+0xFFFFC0C6u; // 801A40CC
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801A40D0
  goto L_801A417C; // 801A40D4
L_801A40D8:;
  c->r[6]=0u+0xCC010000u; // 801A40D8
  c->r[0]=0u+0x00000061u; // 801A40DC
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801A40E0
  c->r[3]=0u+0x24030000u; // 801A40E4
  c->r[0]=c->r[3]+0xFFFFC16Bu; // 801A40E8
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801A40EC
  goto L_801A417C; // 801A40F0
L_801A40F4:;
  c->r[6]=0u+0xCC010000u; // 801A40F4
  c->r[0]=0u+0x00000061u; // 801A40F8
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801A40FC
  c->r[3]=0u+0x24030000u; // 801A4100
  c->r[0]=c->r[3]+0xFFFFC0E7u; // 801A4104
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801A4108
  goto L_801A417C; // 801A410C
L_801A4110:;
  c->r[6]=0u+0xCC010000u; // 801A4110
  c->r[0]=0u+0x00000061u; // 801A4114
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801A4118
  c->r[3]=0u+0x24030000u; // 801A411C
  c->r[0]=c->r[3]+0xFFFFC108u; // 801A4120
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801A4124
  goto L_801A417C; // 801A4128
L_801A412C:;
  c->r[6]=0u+0xCC010000u; // 801A412C
  c->r[0]=0u+0x00000061u; // 801A4130
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801A4134
  c->r[3]=0u+0x24030000u; // 801A4138
  c->r[0]=c->r[3]+0xFFFFC129u; // 801A413C
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801A4140
  goto L_801A417C; // 801A4144
L_801A4148:;
  c->r[6]=0u+0xCC010000u; // 801A4148
  c->r[0]=0u+0x00000061u; // 801A414C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801A4150
  c->r[3]=0u+0x24030000u; // 801A4154
  c->r[0]=c->r[3]+0xFFFFC14Au; // 801A4158
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801A415C
  goto L_801A417C; // 801A4160
L_801A4164:;
  c->r[6]=0u+0xCC010000u; // 801A4164
  c->r[0]=0u+0x00000061u; // 801A4168
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801A416C
  c->r[3]=0u+0x24030000u; // 801A4170
  c->r[0]=c->r[3]+0xFFFFC1ADu; // 801A4174
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801A4178
L_801A417C:;
  cmpu(c,0,c->r[4],0x00000015u); // 801A417C
  W32(c->r[5]+0x000005F0u,c->r[4]); // 801A4180
  if (crb(c,1)) { goto L_801A4470; } // 801A4184
  c->r[3]=0u+0x80270000u; // 801A4188
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801A418C
  c->r[3]=c->r[3]+0x00004D88u; // 801A4190
  c->r[3]=R32(c->r[3]+c->r[0]); // 801A4194
  c->ctr=c->r[3]; // 801A4198
  if (true) { switch (c->ctr) { case 0x801A3D7Cu: goto L_801A3D7C; case 0x801A3D9Cu: goto L_801A3D9C; case 0x801A3DBCu: goto L_801A3DBC; case 0x801A3DDCu: goto L_801A3DDC; case 0x801A3DFCu: goto L_801A3DFC; case 0x801A3E1Cu: goto L_801A3E1C; case 0x801A3E3Cu: goto L_801A3E3C; case 0x801A3E5Cu: goto L_801A3E5C; case 0x801A3E7Cu: goto L_801A3E7C; case 0x801A3E9Cu: goto L_801A3E9C; case 0x801A3EBCu: goto L_801A3EBC; case 0x801A3EDCu: goto L_801A3EDC; case 0x801A3EFCu: goto L_801A3EFC; case 0x801A3F18u: goto L_801A3F18; case 0x801A3F34u: goto L_801A3F34; case 0x801A3F50u: goto L_801A3F50; case 0x801A3F6Cu: goto L_801A3F6C; case 0x801A3F88u: goto L_801A3F88; case 0x801A3FA4u: goto L_801A3FA4; case 0x801A3FC0u: goto L_801A3FC0; case 0x801A3FDCu: goto L_801A3FDC; case 0x801A3FF8u: goto L_801A3FF8; case 0x801A4014u: goto L_801A4014; case 0x801A4030u: goto L_801A4030; case 0x801A404Cu: goto L_801A404C; case 0x801A4068u: goto L_801A4068; case 0x801A4084u: goto L_801A4084; case 0x801A40A0u: goto L_801A40A0; case 0x801A40BCu: goto L_801A40BC; case 0x801A40D8u: goto L_801A40D8; case 0x801A40F4u: goto L_801A40F4; case 0x801A4110u: goto L_801A4110; case 0x801A412Cu: goto L_801A412C; case 0x801A4148u: goto L_801A4148; case 0x801A4164u: goto L_801A4164; case 0x801A41A0u: goto L_801A41A0; case 0x801A41BCu: goto L_801A41BC; case 0x801A41D8u: goto L_801A41D8; case 0x801A41F4u: goto L_801A41F4; case 0x801A4210u: goto L_801A4210; case 0x801A422Cu: goto L_801A422C; case 0x801A4248u: goto L_801A4248; case 0x801A4264u: goto L_801A4264; case 0x801A4280u: goto L_801A4280; case 0x801A429Cu: goto L_801A429C; case 0x801A42B8u: goto L_801A42B8; case 0x801A42E8u: goto L_801A42E8; case 0x801A4318u: goto L_801A4318; case 0x801A4348u: goto L_801A4348; case 0x801A4378u: goto L_801A4378; case 0x801A43A8u: goto L_801A43A8; case 0x801A43D8u: goto L_801A43D8; case 0x801A4408u: goto L_801A4408; case 0x801A4434u: goto L_801A4434; case 0x801A4444u: goto L_801A4444; case 0x801A4454u: goto L_801A4454; case 0x801A4464u: goto L_801A4464; default: break; } dispatch(c,c->ctr); return; } // 801A419C
L_801A41A0:;
  c->r[4]=0u+0xCC010000u; // 801A41A0
  c->r[0]=0u+0x00000061u; // 801A41A4
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 801A41A8
  c->r[3]=0u+0x67000000u; // 801A41AC
  c->r[0]=c->r[3]+0x00000042u; // 801A41B0
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 801A41B4
  goto L_801A4470; // 801A41B8
L_801A41BC:;
  c->r[4]=0u+0xCC010000u; // 801A41BC
  c->r[0]=0u+0x00000061u; // 801A41C0
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 801A41C4
  c->r[3]=0u+0x67000000u; // 801A41C8
  c->r[0]=c->r[3]+0x00000084u; // 801A41CC
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 801A41D0
  goto L_801A4470; // 801A41D4
L_801A41D8:;
  c->r[4]=0u+0xCC010000u; // 801A41D8
  c->r[0]=0u+0x00000061u; // 801A41DC
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 801A41E0
  c->r[3]=0u+0x67000000u; // 801A41E4
  c->r[0]=c->r[3]+0x00000063u; // 801A41E8
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 801A41EC
  goto L_801A4470; // 801A41F0
L_801A41F4:;
  c->r[4]=0u+0xCC010000u; // 801A41F4
  c->r[0]=0u+0x00000061u; // 801A41F8
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 801A41FC
  c->r[3]=0u+0x67000000u; // 801A4200
  c->r[0]=c->r[3]+0x00000129u; // 801A4204
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 801A4208
  goto L_801A4470; // 801A420C
L_801A4210:;
  c->r[4]=0u+0xCC010000u; // 801A4210
  c->r[0]=0u+0x00000061u; // 801A4214
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 801A4218
  c->r[3]=0u+0x67000000u; // 801A421C
  c->r[0]=c->r[3]+0x00000252u; // 801A4220
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 801A4224
  goto L_801A4470; // 801A4228
L_801A422C:;
  c->r[4]=0u+0xCC010000u; // 801A422C
  c->r[0]=0u+0x00000061u; // 801A4230
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 801A4234
  c->r[3]=0u+0x67000000u; // 801A4238
  c->r[0]=c->r[3]+0x00000021u; // 801A423C
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 801A4240
  goto L_801A4470; // 801A4244
L_801A4248:;
  c->r[4]=0u+0xCC010000u; // 801A4248
  c->r[0]=0u+0x00000061u; // 801A424C
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 801A4250
  c->r[3]=0u+0x67000000u; // 801A4254
  c->r[0]=c->r[3]+0x0000014Bu; // 801A4258
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 801A425C
  goto L_801A4470; // 801A4260
L_801A4264:;
  c->r[4]=0u+0xCC010000u; // 801A4264
  c->r[0]=0u+0x00000061u; // 801A4268
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 801A426C
  c->r[3]=0u+0x67000000u; // 801A4270
  c->r[0]=c->r[3]+0x0000018Du; // 801A4274
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 801A4278
  goto L_801A4470; // 801A427C
L_801A4280:;
  c->r[4]=0u+0xCC010000u; // 801A4280
  c->r[0]=0u+0x00000061u; // 801A4284
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 801A4288
  c->r[3]=0u+0x67000000u; // 801A428C
  c->r[0]=c->r[3]+0x000001CFu; // 801A4290
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 801A4294
  goto L_801A4470; // 801A4298
L_801A429C:;
  c->r[4]=0u+0xCC010000u; // 801A429C
  c->r[0]=0u+0x00000061u; // 801A42A0
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 801A42A4
  c->r[3]=0u+0x67000000u; // 801A42A8
  c->r[0]=c->r[3]+0x00000211u; // 801A42AC
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 801A42B0
  goto L_801A4470; // 801A42B4
L_801A42B8:;
  c->r[3]=R32(c->r[5]+0x000005F4u); // 801A42B8
  c->r[0]=0u+0x00000002u; // 801A42BC
  c->r[3]=(rotl(c->r[0],4)&0x000000F0u)|(c->r[3]&~0x000000F0u); // 801A42C0
  W32(c->r[5]+0x000005F4u,c->r[3]); // 801A42C4
  c->r[3]=0u+0xCC010000u; // 801A42C8
  c->r[0]=0u+0x00000008u; // 801A42CC
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801A42D0
  c->r[0]=0u+0x00000020u; // 801A42D4
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801A42D8
  c->r[0]=R32(c->r[5]+0x000005F4u); // 801A42DC
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801A42E0
  goto L_801A4470; // 801A42E4
L_801A42E8:;
  c->r[3]=R32(c->r[5]+0x000005F4u); // 801A42E8
  c->r[0]=0u+0x00000003u; // 801A42EC
  c->r[3]=(rotl(c->r[0],4)&0x000000F0u)|(c->r[3]&~0x000000F0u); // 801A42F0
  W32(c->r[5]+0x000005F4u,c->r[3]); // 801A42F4
  c->r[3]=0u+0xCC010000u; // 801A42F8
  c->r[0]=0u+0x00000008u; // 801A42FC
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801A4300
  c->r[0]=0u+0x00000020u; // 801A4304
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801A4308
  c->r[0]=R32(c->r[5]+0x000005F4u); // 801A430C
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801A4310
  goto L_801A4470; // 801A4314
L_801A4318:;
  c->r[3]=R32(c->r[5]+0x000005F4u); // 801A4318
  c->r[0]=0u+0x00000004u; // 801A431C
  c->r[3]=(rotl(c->r[0],4)&0x000000F0u)|(c->r[3]&~0x000000F0u); // 801A4320
  W32(c->r[5]+0x000005F4u,c->r[3]); // 801A4324
  c->r[3]=0u+0xCC010000u; // 801A4328
  c->r[0]=0u+0x00000008u; // 801A432C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801A4330
  c->r[0]=0u+0x00000020u; // 801A4334
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801A4338
  c->r[0]=R32(c->r[5]+0x000005F4u); // 801A433C
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801A4340
  goto L_801A4470; // 801A4344
L_801A4348:;
  c->r[3]=R32(c->r[5]+0x000005F4u); // 801A4348
  c->r[0]=0u+0x00000005u; // 801A434C
  c->r[3]=(rotl(c->r[0],4)&0x000000F0u)|(c->r[3]&~0x000000F0u); // 801A4350
  W32(c->r[5]+0x000005F4u,c->r[3]); // 801A4354
  c->r[3]=0u+0xCC010000u; // 801A4358
  c->r[0]=0u+0x00000008u; // 801A435C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801A4360
  c->r[0]=0u+0x00000020u; // 801A4364
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801A4368
  c->r[0]=R32(c->r[5]+0x000005F4u); // 801A436C
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801A4370
  goto L_801A4470; // 801A4374
L_801A4378:;
  c->r[3]=R32(c->r[5]+0x000005F4u); // 801A4378
  c->r[0]=0u+0x00000006u; // 801A437C
  c->r[3]=(rotl(c->r[0],4)&0x000000F0u)|(c->r[3]&~0x000000F0u); // 801A4380
  W32(c->r[5]+0x000005F4u,c->r[3]); // 801A4384
  c->r[3]=0u+0xCC010000u; // 801A4388
  c->r[0]=0u+0x00000008u; // 801A438C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801A4390
  c->r[0]=0u+0x00000020u; // 801A4394
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801A4398
  c->r[0]=R32(c->r[5]+0x000005F4u); // 801A439C
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801A43A0
  goto L_801A4470; // 801A43A4
L_801A43A8:;
  c->r[3]=R32(c->r[5]+0x000005F4u); // 801A43A8
  c->r[0]=0u+0x00000007u; // 801A43AC
  c->r[3]=(rotl(c->r[0],4)&0x000000F0u)|(c->r[3]&~0x000000F0u); // 801A43B0
  W32(c->r[5]+0x000005F4u,c->r[3]); // 801A43B4
  c->r[3]=0u+0xCC010000u; // 801A43B8
  c->r[0]=0u+0x00000008u; // 801A43BC
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801A43C0
  c->r[0]=0u+0x00000020u; // 801A43C4
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801A43C8
  c->r[0]=R32(c->r[5]+0x000005F4u); // 801A43CC
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801A43D0
  goto L_801A4470; // 801A43D4
L_801A43D8:;
  c->r[3]=R32(c->r[5]+0x000005F4u); // 801A43D8
  c->r[0]=0u+0x00000009u; // 801A43DC
  c->r[3]=(rotl(c->r[0],4)&0x000000F0u)|(c->r[3]&~0x000000F0u); // 801A43E0
  W32(c->r[5]+0x000005F4u,c->r[3]); // 801A43E4
  c->r[3]=0u+0xCC010000u; // 801A43E8
  c->r[0]=0u+0x00000008u; // 801A43EC
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801A43F0
  c->r[0]=0u+0x00000020u; // 801A43F4
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801A43F8
  c->r[0]=R32(c->r[5]+0x000005F4u); // 801A43FC
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801A4400
  goto L_801A4470; // 801A4404
L_801A4408:;
  c->r[4]=0u+0x00000008u; // 801A4408
  c->r[0]=R32(c->r[5]+0x000005F4u); // 801A440C
  c->r[0]=(rotl(c->r[4],4)&0x000000F0u)|(c->r[0]&~0x000000F0u); // 801A4410
  W32(c->r[5]+0x000005F4u,c->r[0]); // 801A4414
  c->r[3]=0u+0xCC010000u; // 801A4418
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 801A441C
  c->r[0]=0u+0x00000020u; // 801A4420
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801A4424
  c->r[0]=R32(c->r[5]+0x000005F4u); // 801A4428
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801A442C
  goto L_801A4470; // 801A4430
L_801A4434:;
  c->r[3]=R32(c->r[13]+0xFFFFB1ECu); // 801A4434
  c->r[0]=0u+0x00000002u; // 801A4438
  W16(c->r[3]+0x00000006u,c->r[0]); // 801A443C
  goto L_801A4470; // 801A4440
L_801A4444:;
  c->r[3]=R32(c->r[13]+0xFFFFB1ECu); // 801A4444
  c->r[0]=0u+0x00000003u; // 801A4448
  W16(c->r[3]+0x00000006u,c->r[0]); // 801A444C
  goto L_801A4470; // 801A4450
L_801A4454:;
  c->r[3]=R32(c->r[13]+0xFFFFB1ECu); // 801A4454
  c->r[0]=0u+0x00000004u; // 801A4458
  W16(c->r[3]+0x00000006u,c->r[0]); // 801A445C
  goto L_801A4470; // 801A4460
L_801A4464:;
  c->r[3]=R32(c->r[13]+0xFFFFB1ECu); // 801A4464
  c->r[0]=0u+0x00000005u; // 801A4468
  W16(c->r[3]+0x00000006u,c->r[0]); // 801A446C
L_801A4470:;
  c->r[0]=0u+0x00000000u; // 801A4470
  W16(c->r[5]+0x00000002u,c->r[0]); // 801A4474
  return; // 801A4478
}

// GXClearGPMetric
void f_801A4480(Ctx* __restrict c) {
  trace_call(0x801A4480u);
  c->r[3]=R32(c->r[13]+0xFFFFB1ECu); // 801A4480
  c->r[0]=0u+0x00000004u; // 801A4484
  W16(c->r[3]+0x00000004u,c->r[0]); // 801A4488
  return; // 801A448C
}

// __DVDFSInit
void f_801A4490(Ctx* __restrict c) {
  trace_call(0x801A4490u);
  c->r[3]=0u+0x80000000u; // 801A4490
  W32(c->r[13]+0xFFFFB25Cu,c->r[3]); // 801A4494
  c->r[3]=R32(c->r[3]+0x00000038u); // 801A4498
  W32(c->r[13]+0xFFFFB258u,c->r[3]); // 801A449C
  cmps(c,0,(int32_t)c->r[3],0); // 801A44A0
  if (crb(c,2)) return; // 801A44A4
  c->r[0]=R32(c->r[3]+0x00000008u); // 801A44A8
  W32(c->r[13]+0xFFFFB250u,c->r[0]); // 801A44AC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 801A44B0
  c->r[0]=c->r[3]+c->r[0]; // 801A44B4
  W32(c->r[13]+0xFFFFB254u,c->r[0]); // 801A44B8
  return; // 801A44BC
}

// DVDFastOpen
void f_801A44C0(Ctx* __restrict c) {
  trace_call(0x801A44C0u);
  cmps(c,0,(int32_t)c->r[3],0); // 801A44C0
  if (crb(c,0)) { goto L_801A44E8; } // 801A44C4
  c->r[0]=R32(c->r[13]+0xFFFFB250u); // 801A44C8
  cmpu(c,0,c->r[3],c->r[0]); // 801A44CC
  if (!crb(c,0)) { goto L_801A44E8; } // 801A44D0
  c->r[7]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 801A44D4
  c->r[3]=R32(c->r[13]+0xFFFFB258u); // 801A44D8
  c->r[0]=R32(c->r[3]+c->r[7]); // 801A44DC
  c->r[0]=rotl(c->r[0],0)&0xFF000000u; cr0(c,c->r[0]); // 801A44E0
  if (crb(c,2)) { goto L_801A44F0; } // 801A44E4
L_801A44E8:;
  c->r[3]=0u+0x00000000u; // 801A44E8
  return; // 801A44EC
L_801A44F0:;
  c->r[3]=c->r[3]+c->r[7]; // 801A44F0
  c->r[5]=R32(c->r[13]+0xFFFFB298u); // 801A44F4
  c->r[6]=R32(c->r[3]+0x00000004u); // 801A44F8
  c->r[0]=0u+0x00000000u; // 801A44FC
  c->r[3]=0u+0x00000001u; // 801A4500
  c->r[5]=((c->r[5])&0x20)?0u:(c->r[6]>>((c->r[5])&31)); // 801A4504
  W32(c->r[4]+0x00000030u,c->r[5]); // 801A4508
  c->r[5]=R32(c->r[13]+0xFFFFB258u); // 801A450C
  c->r[5]=c->r[5]+c->r[7]; // 801A4510
  c->r[5]=R32(c->r[5]+0x00000008u); // 801A4514
  W32(c->r[4]+0x00000034u,c->r[5]); // 801A4518
  W32(c->r[4]+0x00000038u,c->r[0]); // 801A451C
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 801A4520
  return; // 801A4524
}

// fn_801A4530
void f_801A4530(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A4530
  c->r[0]=c->lr; // 801A4534
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A4538
  c->lr=0x801A4540u; f_801A8F10(c); // 801A453C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A4540
  c->r[3]=0u+0x00000001u; // 801A4544
  c->lr=c->r[0]; // 801A4548
  c->r[1]=c->r[1]+0x00000010u; // 801A454C
  return; // 801A4550
}

// DVDReadAsyncPrio
void f_801A4560(Ctx* __restrict c) {
  trace_call(0x801A4560u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A4560
  c->r[0]=c->lr; // 801A4564
  W32(c->r[1]+0x00000024u,c->r[0]); // 801A4568
  c->r[11]=c->r[1]+0x00000020u; // 801A456C
  c->lr=0x801A4574u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801A4570
  cmps(c,0,(int32_t)c->r[6],0); // 801A4574
  c->r[26]=c->r[3]|c->r[3]; // 801A4578
  c->r[27]=c->r[4]|c->r[4]; // 801A457C
  c->r[28]=c->r[5]|c->r[5]; // 801A4580
  c->r[29]=c->r[6]|c->r[6]; // 801A4584
  c->r[30]=c->r[7]|c->r[7]; // 801A4588
  c->r[31]=c->r[8]|c->r[8]; // 801A458C
  if (crb(c,0)) { goto L_801A45A0; } // 801A4590
  c->r[0]=R32(c->r[3]+0x00000034u); // 801A4594
  cmpu(c,0,c->r[6],c->r[0]); // 801A4598
  if (!crb(c,1)) { goto L_801A45B8; } // 801A459C
L_801A45A0:;
  c->r[5]=0u+0x80270000u; // 801A45A0
  c->r[3]=c->r[13]+0xFFFFA858u; // 801A45A4
  c->r[5]=c->r[5]+0x00004E70u; // 801A45A8
  c->r[4]=0u+0x00000337u; // 801A45AC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801A45B0
  c->lr=0x801A45B8u; f_80189A40(c); // 801A45B4
L_801A45B8:;
  c->r[4]=c->r[29]+c->r[28]; cr0(c,c->r[4]); // 801A45B8
  if (crb(c,0)) { goto L_801A45D0; } // 801A45BC
  c->r[3]=R32(c->r[26]+0x00000034u); // 801A45C0
  c->r[0]=c->r[3]+0x00000020u; // 801A45C4
  cmpu(c,0,c->r[4],c->r[0]); // 801A45C8
  if (crb(c,0)) { goto L_801A45E8; } // 801A45CC
L_801A45D0:;
  c->r[5]=0u+0x80270000u; // 801A45D0
  c->r[3]=c->r[13]+0xFFFFA858u; // 801A45D4
  c->r[5]=c->r[5]+0x00004E70u; // 801A45D8
  c->r[4]=0u+0x0000033Du; // 801A45DC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801A45E0
  c->lr=0x801A45E8u; f_80189A40(c); // 801A45E4
L_801A45E8:;
  c->r[6]=R32(c->r[26]+0x00000030u); // 801A45E8
  c->r[0]=sraw(c,c->r[29],2); // 801A45EC
  c->r[7]=0u+0x801A0000u; // 801A45F0
  W32(c->r[26]+0x00000038u,c->r[30]); // 801A45F4
  c->r[3]=c->r[26]|c->r[26]; // 801A45F8
  c->r[4]=c->r[27]|c->r[27]; // 801A45FC
  c->r[5]=c->r[28]|c->r[28]; // 801A4600
  c->r[8]=c->r[31]|c->r[31]; // 801A4604
  c->r[6]=c->r[6]+c->r[0]; // 801A4608
  c->r[7]=c->r[7]+0x00004630u; // 801A460C
  c->lr=0x801A4614u; f_801A8800(c); // 801A4610
  c->r[11]=c->r[1]+0x00000020u; // 801A4614
  c->r[3]=0u+0x00000001u; // 801A4618
  c->lr=0x801A4620u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801A461C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801A4620
  c->lr=c->r[0]; // 801A4624
  c->r[1]=c->r[1]+0x00000020u; // 801A4628
  return; // 801A462C
}

// cbForReadAsync
void f_801A4630(Ctx* __restrict c) {
  trace_call(0x801A4630u);
  c->r[12]=R32(c->r[4]+0x00000038u); // 801A4630
  cmps(c,0,(int32_t)c->r[12],0); // 801A4634
  if (crb(c,2)) return; // 801A4638
  c->ctr=c->r[12]; // 801A463C
  if (true) { dispatch(c,c->ctr); return; } // 801A4640
  return; // 801A4644
}

// DVDReadPrio
void f_801A4650(Ctx* __restrict c) {
  trace_call(0x801A4650u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A4650
  c->r[0]=c->lr; // 801A4654
  W32(c->r[1]+0x00000024u,c->r[0]); // 801A4658
  c->r[11]=c->r[1]+0x00000020u; // 801A465C
  c->lr=0x801A4664u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801A4660
  cmps(c,0,(int32_t)c->r[6],0); // 801A4664
  c->r[27]=c->r[3]|c->r[3]; // 801A4668
  c->r[28]=c->r[4]|c->r[4]; // 801A466C
  c->r[29]=c->r[5]|c->r[5]; // 801A4670
  c->r[31]=c->r[6]|c->r[6]; // 801A4674
  c->r[30]=c->r[7]|c->r[7]; // 801A4678
  if (crb(c,0)) { goto L_801A468C; } // 801A467C
  c->r[0]=R32(c->r[3]+0x00000034u); // 801A4680
  cmpu(c,0,c->r[6],c->r[0]); // 801A4684
  if (!crb(c,1)) { goto L_801A46A4; } // 801A4688
L_801A468C:;
  c->r[5]=0u+0x80270000u; // 801A468C
  c->r[3]=c->r[13]+0xFFFFA858u; // 801A4690
  c->r[5]=c->r[5]+0x00004EA4u; // 801A4694
  c->r[4]=0u+0x0000037Du; // 801A4698
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801A469C
  c->lr=0x801A46A4u; f_80189A40(c); // 801A46A0
L_801A46A4:;
  c->r[4]=c->r[31]+c->r[29]; cr0(c,c->r[4]); // 801A46A4
  if (crb(c,0)) { goto L_801A46BC; } // 801A46A8
  c->r[3]=R32(c->r[27]+0x00000034u); // 801A46AC
  c->r[0]=c->r[3]+0x00000020u; // 801A46B0
  cmpu(c,0,c->r[4],c->r[0]); // 801A46B4
  if (crb(c,0)) { goto L_801A46D4; } // 801A46B8
L_801A46BC:;
  c->r[5]=0u+0x80270000u; // 801A46BC
  c->r[3]=c->r[13]+0xFFFFA858u; // 801A46C0
  c->r[5]=c->r[5]+0x00004EA4u; // 801A46C4
  c->r[4]=0u+0x00000383u; // 801A46C8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801A46CC
  c->lr=0x801A46D4u; f_80189A40(c); // 801A46D0
L_801A46D4:;
  c->r[6]=R32(c->r[27]+0x00000030u); // 801A46D4
  c->r[0]=sraw(c,c->r[31],2); // 801A46D8
  c->r[7]=0u+0x801A0000u; // 801A46DC
  c->r[3]=c->r[27]|c->r[27]; // 801A46E0
  c->r[4]=c->r[28]|c->r[28]; // 801A46E4
  c->r[5]=c->r[29]|c->r[29]; // 801A46E8
  c->r[8]=c->r[30]|c->r[30]; // 801A46EC
  c->r[6]=c->r[6]+c->r[0]; // 801A46F0
  c->r[7]=c->r[7]+0x00004780u; // 801A46F4
  c->lr=0x801A46FCu; f_801A8800(c); // 801A46F8
  cmps(c,0,(int32_t)c->r[3],0); // 801A46FC
  if (!crb(c,2)) { goto L_801A470C; } // 801A4700
  c->r[3]=0u+0xFFFFFFFFu; // 801A4704
  goto L_801A4760; // 801A4708
L_801A470C:;
  c->lr=0x801A4710u; f_8018D6A0(c); // 801A470C
  c->r[31]=c->r[3]|c->r[3]; // 801A4710
L_801A4714:;
  c->r[0]=R32(c->r[27]+0x0000000Cu); // 801A4714
  cmps(c,0,(int32_t)c->r[0],0); // 801A4718
  if (!crb(c,2)) { goto L_801A4728; } // 801A471C
  c->r[30]=R32(c->r[27]+0x00000020u); // 801A4720
  goto L_801A4754; // 801A4724
L_801A4728:;
  cmps(c,0,(int32_t)c->r[0],-1); // 801A4728
  if (!crb(c,2)) { goto L_801A4738; } // 801A472C
  c->r[30]=0u+0xFFFFFFFFu; // 801A4730
  goto L_801A4754; // 801A4734
L_801A4738:;
  cmps(c,0,(int32_t)c->r[0],10); // 801A4738
  if (!crb(c,2)) { goto L_801A4748; } // 801A473C
  c->r[30]=0u+0xFFFFFFFDu; // 801A4740
  goto L_801A4754; // 801A4744
L_801A4748:;
  c->r[3]=c->r[13]+0xFFFFB248u; // 801A4748
  c->lr=0x801A4750u; f_801913D0(c); // 801A474C
  IRQCHK(c); goto L_801A4714; // 801A4750
L_801A4754:;
  c->r[3]=c->r[31]|c->r[31]; // 801A4754
  c->lr=0x801A475Cu; f_8018D6E0(c); // 801A4758
  c->r[3]=c->r[30]|c->r[30]; // 801A475C
L_801A4760:;
  c->r[11]=c->r[1]+0x00000020u; // 801A4760
  c->lr=0x801A4768u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801A4764
  c->r[0]=R32(c->r[1]+0x00000024u); // 801A4768
  c->lr=c->r[0]; // 801A476C
  c->r[1]=c->r[1]+0x00000020u; // 801A4770
  return; // 801A4774
}

// fn_801A4780
void f_801A4780(Ctx* __restrict c) {
  c->r[3]=c->r[13]+0xFFFFB248u; // 801A4780
  f_801914C0(c); return; // 801A4784
}

// fn_801A4790
void f_801A4790(Ctx* __restrict c) {
  c->r[3]=R32(c->r[13]+0xFFFFB25Cu); // 801A4790
  c->r[3]=R32(c->r[3]+0x00000038u); // 801A4794
  return; // 801A4798
}

// StampCommand
void f_801A47A0(Ctx* __restrict c) {
  trace_call(0x801A47A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A47A0
  c->r[0]=c->lr; // 801A47A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801A47A8
  c->r[11]=c->r[1]+0x00000020u; // 801A47AC
  c->lr=0x801A47B4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801A47B0
  c->r[27]=c->r[3]|c->r[3]; // 801A47B4
  c->r[28]=c->r[4]|c->r[4]; // 801A47B8
  c->r[29]=c->r[5]|c->r[5]; // 801A47BC
  c->lr=0x801A47C4u; f_8018D6A0(c); // 801A47C0
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A47C4
  c->r[31]=c->r[3]|c->r[3]; // 801A47C8
  cmpu(c,0,c->r[0],0x00000005u); // 801A47CC
  if (crb(c,0)) { goto L_801A47DC; } // 801A47D0
  c->r[0]=0u+0x00000000u; // 801A47D4
  W32(c->r[13]+0xFFFFB260u,c->r[0]); // 801A47D8
L_801A47DC:;
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A47DC
  c->r[30]=0u+0x802B0000u; // 801A47E0
  c->r[3]=R32(c->r[13]+0xFFFFB260u); // 801A47E4
  c->r[30]=c->r[30]+0x00006B80u; // 801A47E8
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A47EC
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A47F0
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801A47F4
  c->r[4]=c->r[30]+c->r[4]; // 801A47F8
  W32(c->r[4]+0x0000001Cu,c->r[27]); // 801A47FC
  c->r[3]=c->r[30]+c->r[3]; // 801A4800
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A4804
  W32(c->r[3]+0x00000020u,c->r[28]); // 801A4808
  c->r[3]=c->r[30]+c->r[0]; // 801A480C
  W32(c->r[3]+0x00000024u,c->r[29]); // 801A4810
  c->lr=0x801A4818u; f_801915E0(c); // 801A4814
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A4818
  c->r[4]=R32(c->r[13]+0xFFFFB260u); // 801A481C
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A4820
  c->r[0]=c->r[4]+0x00000001u; // 801A4824
  W32(c->r[13]+0xFFFFB260u,c->r[0]); // 801A4828
  c->r[4]=c->r[30]+c->r[5]; // 801A482C
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 801A4830
  c->r[3]=c->r[31]|c->r[31]; // 801A4834
  c->lr=0x801A483Cu; f_8018D6E0(c); // 801A4838
  c->r[11]=c->r[1]+0x00000020u; // 801A483C
  c->lr=0x801A4844u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801A4840
  c->r[0]=R32(c->r[1]+0x00000024u); // 801A4844
  c->lr=c->r[0]; // 801A4848
  c->r[1]=c->r[1]+0x00000020u; // 801A484C
  return; // 801A4850
}

// defaultOptionalCommandChecker
void f_801A4860(Ctx* __restrict c) {
  trace_call(0x801A4860u);
  return; // 801A4860
}

// DVDInit
void f_801A4870(Ctx* __restrict c) {
  trace_call(0x801A4870u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A4870
  c->r[0]=c->lr; // 801A4874
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A4878
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A487C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801A4880
  c->r[0]=R32(c->r[13]+0xFFFFB29Cu); // 801A4884
  cmps(c,0,(int32_t)c->r[0],0); // 801A4888
  if (!crb(c,2)) { goto L_801A49AC; } // 801A488C
  c->r[3]=R32(c->r[13]+0xFFFFA860u); // 801A4890
  c->lr=0x801A4898u; f_80187B20(c); // 801A4894
  c->r[0]=0u+0x00000001u; // 801A4898
  W32(c->r[13]+0xFFFFB29Cu,c->r[0]); // 801A489C
  c->lr=0x801A48A4u; f_801AA730(c); // 801A48A0
  c->r[0]=R32(c->r[13]+0xFFFFAF90u); // 801A48A4
  cmps(c,0,(int32_t)c->r[0],0); // 801A48A8
  if (!crb(c,2)) { goto L_801A490C; } // 801A48AC
  c->r[3]=0u+0x80000000u; // 801A48B0
  c->r[0]=R8(c->r[3]+0x00003187u); // 801A48B4
  cmpu(c,0,c->r[0],0x00000080u); // 801A48B8
  if (!crb(c,2)) { goto L_801A490C; } // 801A48BC
  c->lr=0x801A48C4u; f_801BA820(c); // 801A48C0
  cmps(c,0,(int32_t)c->r[3],0); // 801A48C4
  if (!crb(c,2)) { goto L_801A48DC; } // 801A48C8
  c->r[4]=0u+0x802B0000u; // 801A48CC
  c->r[3]=0u+0x00000000u; // 801A48D0
  c->r[4]=c->r[4]+0x00001D40u; // 801A48D4
  c->lr=0x801A48DCu; f_801BACB0(c); // 801A48D8
L_801A48DC:;
  cmps(c,0,(int32_t)c->r[3],0); // 801A48DC
  if (!crb(c,2)) { goto L_801A48F0; } // 801A48E0
  c->r[3]=0u+0x00000000u; // 801A48E4
  c->r[4]=c->r[13]+0xFFFFB2C0u; // 801A48E8
  c->lr=0x801A48F0u; f_801BAD60(c); // 801A48EC
L_801A48F0:;
  cmps(c,0,(int32_t)c->r[3],0); // 801A48F0
  if (!crb(c,2)) { goto L_801A4908; } // 801A48F4
  c->r[3]=0u+0x802B0000u; // 801A48F8
  c->r[4]=c->r[13]+0xFFFFB2C0u; // 801A48FC
  c->r[3]=c->r[3]+0x00001E40u; // 801A4900
  c->lr=0x801A4908u; f_801BAD60(c); // 801A4904
L_801A4908:;
  c->lr=0x801A490Cu; f_801BA880(c); // 801A4908
L_801A490C:;
  c->lr=0x801A4910u; f_801A4490(c); // 801A490C
  c->lr=0x801A4914u; f_801A93D0(c); // 801A4910
  c->r[0]=0u+0x80000000u; // 801A4914
  c->r[3]=0u+0x00000000u; // 801A4918
  W32(c->r[13]+0xFFFFB2D0u,c->r[3]); // 801A491C
  c->r[3]=c->r[13]+0xFFFFB248u; // 801A4920
  W32(c->r[13]+0xFFFFB2E8u,c->r[0]); // 801A4924
  W32(c->r[13]+0xFFFFB2ECu,c->r[0]); // 801A4928
  c->lr=0x801A4930u; f_80190370(c); // 801A492C
  c->lr=0x801A4934u; f_801ACA70(c); // 801A4930
  c->lr=0x801A4938u; f_801ACA80(c); // 801A4934
  c->r[3]=R32(c->r[13]+0xFFFFB2E8u); // 801A4938
  c->r[3]=R32(c->r[3]+0x00000020u); // 801A493C
  c->r[0]=c->r[3]+0x1AE00000u; // 801A4940
  cmpu(c,0,c->r[0],0x00007C22u); // 801A4944
  if (crb(c,2)) { goto L_801A4960; } // 801A4948
  c->r[0]=c->r[3]+0xF2EB0000u; // 801A494C
  cmpu(c,0,c->r[0],0x0000EA5Eu); // 801A4950
  if (crb(c,2)) { goto L_801A4960; } // 801A4954
  c->r[0]=0u+0x00000001u; // 801A4958
  W32(c->r[13]+0xFFFFB27Cu,c->r[0]); // 801A495C
L_801A4960:;
  c->r[31]=0u+0x802B0000u; // 801A4960
  c->r[4]=0u+0x00000000u; // 801A4964
  c->r[3]=c->r[31]+0x00006B80u; // 801A4968
  c->r[5]=0u+0x00000080u; // 801A496C
  c->lr=0x801A4974u; f_800046B4(c); // 801A4970
  c->r[30]=0u+0x80000000u; // 801A4974
  c->r[3]=c->r[31]+0x00006B80u; // 801A4978
  c->r[4]=c->r[30]|c->r[30]; // 801A497C
  c->r[5]=0u+0x00000004u; // 801A4980
  c->lr=0x801A4988u; f_80004364(c); // 801A4984
  c->r[5]=c->r[31]+0x00006B80u; // 801A4988
  c->r[0]=R8(c->r[30]+0x00000006u); // 801A498C
  W8(c->r[5]+0x00000004u,c->r[0]); // 801A4990
  c->r[0]=0u+0x00000000u; // 801A4994
  c->r[3]=0u+0x00000001u; // 801A4998
  c->r[4]=R8(c->r[30]+0x00000007u); // 801A499C
  W8(c->r[5]+0x00000005u,c->r[4]); // 801A49A0
  W32(c->r[13]+0xFFFFB298u,c->r[0]); // 801A49A4
  c->lr=0x801A49ACu; f_801AA230(c); // 801A49A8
L_801A49AC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A49AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A49B0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801A49B4
  c->lr=c->r[0]; // 801A49B8
  c->r[1]=c->r[1]+0x00000010u; // 801A49BC
  return; // 801A49C0
}

// stateReadingFST
void f_801A49D0(Ctx* __restrict c) {
  trace_call(0x801A49D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A49D0
  c->r[0]=c->lr; // 801A49D4
  c->r[4]=0u+0x801A0000u; // 801A49D8
  c->r[3]=0u+0x802B0000u; // 801A49DC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801A49E0
  c->r[4]=c->r[4]+0x000049D0u; // 801A49E4
  c->r[3]=c->r[3]+0x00006840u; // 801A49E8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801A49EC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801A49F0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801A49F4
  W32(c->r[1]+0x00000010u,c->r[28]); // 801A49F8
  W32(c->r[13]+0xFFFFB2F4u,c->r[4]); // 801A49FC
  c->r[4]=R32(c->r[13]+0xFFFFB2E8u); // 801A4A00
  c->r[0]=R32(c->r[3]+0x00000008u); // 801A4A04
  c->r[3]=R32(c->r[4]+0x0000003Cu); // 801A4A08
  cmpu(c,0,c->r[3],c->r[0]); // 801A4A0C
  if (!crb(c,0)) { goto L_801A4A2C; } // 801A4A10
  c->r[5]=0u+0x80270000u; // 801A4A14
  c->r[3]=c->r[13]+0xFFFFA86Cu; // 801A4A18
  c->r[5]=c->r[5]+0x00004F20u; // 801A4A1C
  c->r[4]=0u+0x00000442u; // 801A4A20
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801A4A24
  c->lr=0x801A4A2Cu; f_80189A40(c); // 801A4A28
L_801A4A2C:;
  c->r[3]=0u+0x00000000u; // 801A4A2C
  c->lr=0x801A4A34u; f_801ACA90(c); // 801A4A30
  c->r[3]=R32(c->r[13]+0xFFFFB298u); // 801A4A34
  c->r[6]=0u+0x802B0000u; // 801A4A38
  c->r[6]=c->r[6]+0x00006840u; // 801A4A3C
  c->r[0]=R32(c->r[13]+0xFFFFB298u); // 801A4A40
  c->r[3]=~(c->r[3]|c->r[3]); // 801A4A44
  c->r[5]=R32(c->r[6]+0x00000008u); // 801A4A48
  c->r[4]=rotl(c->r[3],0)&0x00000002u; // 801A4A4C
  c->r[3]=R32(c->r[6]+0x00000004u); // 801A4A50
  c->r[4]=((c->r[4])&0x20)?0u:(c->r[5]<<((c->r[4])&31)); // 801A4A54
  c->r[4]=c->r[4]+0x0000001Fu; // 801A4A58
  c->r[29]=((c->r[0])&0x20)?0u:(c->r[3]>>((c->r[0])&31)); // 801A4A5C
  c->r[28]=rotl(c->r[4],0)&0xFFFFFFE0u; // 801A4A60
  c->lr=0x801A4A68u; f_8018D6A0(c); // 801A4A64
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A4A68
  c->r[31]=c->r[3]|c->r[3]; // 801A4A6C
  cmpu(c,0,c->r[0],0x00000005u); // 801A4A70
  if (crb(c,0)) { goto L_801A4A80; } // 801A4A74
  c->r[0]=0u+0x00000000u; // 801A4A78
  W32(c->r[13]+0xFFFFB260u,c->r[0]); // 801A4A7C
L_801A4A80:;
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A4A80
  c->r[30]=0u+0x802B0000u; // 801A4A84
  c->r[3]=R32(c->r[13]+0xFFFFB260u); // 801A4A88
  c->r[30]=c->r[30]+0x00006B80u; // 801A4A8C
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A4A90
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A4A94
  c->r[5]=0u+0x00000001u; // 801A4A98
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801A4A9C
  c->r[4]=c->r[30]+c->r[4]; // 801A4AA0
  W32(c->r[4]+0x0000001Cu,c->r[5]); // 801A4AA4
  c->r[3]=c->r[30]+c->r[3]; // 801A4AA8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A4AAC
  W32(c->r[3]+0x00000020u,c->r[29]); // 801A4AB0
  c->r[3]=c->r[30]+c->r[0]; // 801A4AB4
  W32(c->r[3]+0x00000024u,c->r[28]); // 801A4AB8
  c->lr=0x801A4AC0u; f_801915E0(c); // 801A4ABC
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A4AC0
  c->r[4]=R32(c->r[13]+0xFFFFB260u); // 801A4AC4
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A4AC8
  c->r[0]=c->r[4]+0x00000001u; // 801A4ACC
  W32(c->r[13]+0xFFFFB260u,c->r[0]); // 801A4AD0
  c->r[4]=c->r[30]+c->r[5]; // 801A4AD4
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 801A4AD8
  c->r[3]=c->r[31]|c->r[31]; // 801A4ADC
  c->lr=0x801A4AE4u; f_8018D6E0(c); // 801A4AE0
  c->r[0]=R32(c->r[13]+0xFFFFB298u); // 801A4AE4
  c->r[4]=0u+0x802B0000u; // 801A4AE8
  c->r[4]=c->r[4]+0x00006840u; // 801A4AEC
  c->r[6]=0u+0x801A0000u; // 801A4AF0
  c->r[0]=~(c->r[0]|c->r[0]); // 801A4AF4
  c->r[3]=R32(c->r[4]+0x00000008u); // 801A4AF8
  c->r[0]=rotl(c->r[0],0)&0x00000002u; // 801A4AFC
  c->r[7]=R32(c->r[13]+0xFFFFB2E8u); // 801A4B00
  c->r[3]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 801A4B04
  c->r[5]=R32(c->r[4]+0x00000004u); // 801A4B08
  c->r[4]=c->r[3]+0x0000001Fu; // 801A4B0C
  c->r[0]=R32(c->r[13]+0xFFFFB298u); // 801A4B10
  c->r[3]=R32(c->r[7]+0x00000038u); // 801A4B14
  c->r[4]=rotl(c->r[4],0)&0xFFFFFFE0u; // 801A4B18
  c->r[5]=((c->r[0])&0x20)?0u:(c->r[5]>>((c->r[0])&31)); // 801A4B1C
  c->r[6]=c->r[6]+0x00004B50u; // 801A4B20
  c->lr=0x801A4B28u; f_801AC2B0(c); // 801A4B24
  c->r[0]=R32(c->r[1]+0x00000024u); // 801A4B28
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801A4B2C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801A4B30
  c->r[29]=R32(c->r[1]+0x00000014u); // 801A4B34
  c->r[28]=R32(c->r[1]+0x00000010u); // 801A4B38
  c->lr=c->r[0]; // 801A4B3C
  c->r[1]=c->r[1]+0x00000020u; // 801A4B40
  return; // 801A4B44
}

// cbForStateReadingFST
void f_801A4B50(Ctx* __restrict c) {
  trace_call(0x801A4B50u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A4B50
  c->r[0]=c->lr; // 801A4B54
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A4B58
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A4B5C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801A4B60
  c->r[30]=c->r[3]|c->r[3]; // 801A4B64
  c->lr=0x801A4B6Cu; f_8018D6A0(c); // 801A4B68
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A4B6C
  cmps(c,0,(int32_t)c->r[0],0); // 801A4B70
  if (!crb(c,2)) { goto L_801A4B88; } // 801A4B74
  c->r[4]=0u+0x802B0000u; // 801A4B78
  c->r[4]=c->r[4]+0x00006B80u; // 801A4B7C
  W32(c->r[4]+0x00000078u,c->r[30]); // 801A4B80
  goto L_801A4BA0; // 801A4B84
L_801A4B88:;
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A4B88
  c->r[4]=0u+0x802B0000u; // 801A4B8C
  c->r[4]=c->r[4]+0x00006B80u; // 801A4B90
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A4B94
  c->r[4]=c->r[4]+c->r[0]; // 801A4B98
  W32(c->r[4]+0x00000014u,c->r[30]); // 801A4B9C
L_801A4BA0:;
  c->lr=0x801A4BA4u; f_8018D6E0(c); // 801A4BA0
  cmpu(c,0,c->r[30],0x00000010u); // 801A4BA4
  if (!crb(c,2)) { goto L_801A4BC4; } // 801A4BA8
  c->r[3]=0u+0x01230000u; // 801A4BAC
  c->r[4]=0u+0x801A0000u; // 801A4BB0
  c->r[3]=c->r[3]+0x00004568u; // 801A4BB4
  c->r[4]=c->r[4]+0x00004E20u; // 801A4BB8
  c->lr=0x801A4BC0u; f_801AA000(c); // 801A4BBC
  goto L_801A4CBC; // 801A4BC0
L_801A4BC4:;
  cmpu(c,0,c->r[30],0x00000020u); // 801A4BC4
  if (!crb(c,2)) { goto L_801A4BE4; } // 801A4BC8
  c->r[3]=0u+0x01230000u; // 801A4BCC
  c->r[4]=0u+0x801A0000u; // 801A4BD0
  c->r[3]=c->r[3]+0x00004569u; // 801A4BD4
  c->r[4]=c->r[4]+0x00004E20u; // 801A4BD8
  c->lr=0x801A4BE0u; f_801AA000(c); // 801A4BDC
  goto L_801A4CBC; // 801A4BE0
L_801A4BE4:;
  c->r[0]=rotl(c->r[30],0)&0x00000001u; cr0(c,c->r[0]); // 801A4BE4
  if (crb(c,2)) { goto L_801A4C2C; } // 801A4BE8
  c->r[30]=0u+0x00000000u; // 801A4BEC
  W32(c->r[13]+0xFFFFB278u,c->r[30]); // 801A4BF0
  c->lr=0x801A4BF8u; f_801A4490(c); // 801A4BF4
  c->r[4]=R32(c->r[13]+0xFFFFB2F0u); // 801A4BF8
  c->r[3]=0u+0x802B0000u; // 801A4BFC
  c->r[3]=c->r[3]+0x00006860u; // 801A4C00
  W32(c->r[13]+0xFFFFB2F0u,c->r[3]); // 801A4C04
  W32(c->r[4]+0x0000000Cu,c->r[30]); // 801A4C08
  c->r[12]=R32(c->r[4]+0x00000028u); // 801A4C0C
  cmps(c,0,(int32_t)c->r[12],0); // 801A4C10
  if (crb(c,2)) { goto L_801A4C24; } // 801A4C14
  c->r[3]=0u+0x00000000u; // 801A4C18
  c->ctr=c->r[12]; // 801A4C1C
  if (true) { c->lr=0x801A4C24u; dispatch(c,c->ctr); } // 801A4C20
L_801A4C24:;
  c->lr=0x801A4C28u; f_801A7550(c); // 801A4C24
  goto L_801A4CBC; // 801A4C28
L_801A4C2C:;
  c->lr=0x801A4C30u; f_8018D6A0(c); // 801A4C2C
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A4C30
  c->r[31]=c->r[3]|c->r[3]; // 801A4C34
  cmpu(c,0,c->r[0],0x00000005u); // 801A4C38
  if (crb(c,0)) { goto L_801A4C48; } // 801A4C3C
  c->r[0]=0u+0x00000000u; // 801A4C40
  W32(c->r[13]+0xFFFFB260u,c->r[0]); // 801A4C44
L_801A4C48:;
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A4C48
  c->r[30]=0u+0x802B0000u; // 801A4C4C
  c->r[3]=R32(c->r[13]+0xFFFFB260u); // 801A4C50
  c->r[30]=c->r[30]+0x00006B80u; // 801A4C54
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A4C58
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A4C5C
  c->r[6]=0u+0x00000027u; // 801A4C60
  c->r[4]=0u+0x00000000u; // 801A4C64
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801A4C68
  c->r[5]=c->r[30]+c->r[5]; // 801A4C6C
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 801A4C70
  c->r[3]=c->r[30]+c->r[3]; // 801A4C74
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A4C78
  W32(c->r[3]+0x00000020u,c->r[4]); // 801A4C7C
  c->r[3]=c->r[30]+c->r[0]; // 801A4C80
  W32(c->r[3]+0x00000024u,c->r[4]); // 801A4C84
  c->lr=0x801A4C8Cu; f_801915E0(c); // 801A4C88
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A4C8C
  c->r[4]=R32(c->r[13]+0xFFFFB260u); // 801A4C90
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A4C94
  c->r[0]=c->r[4]+0x00000001u; // 801A4C98
  W32(c->r[13]+0xFFFFB260u,c->r[0]); // 801A4C9C
  c->r[4]=c->r[30]+c->r[5]; // 801A4CA0
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 801A4CA4
  c->r[3]=c->r[31]|c->r[31]; // 801A4CA8
  c->lr=0x801A4CB0u; f_8018D6E0(c); // 801A4CAC
  c->r[3]=0u+0x801A0000u; // 801A4CB0
  c->r[3]=c->r[3]+0x00005030u; // 801A4CB4
  c->lr=0x801A4CBCu; f_801ABAE0(c); // 801A4CB8
L_801A4CBC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A4CBC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A4CC0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801A4CC4
  c->lr=c->r[0]; // 801A4CC8
  c->r[1]=c->r[1]+0x00000010u; // 801A4CCC
  return; // 801A4CD0
}

// FatalAlarmHandler
void f_801A4CE0(Ctx* __restrict c) {
  trace_call(0x801A4CE0u);
  f_801AA2B0(c); return; // 801A4CE0
}

// cbForStateError
void f_801A4CF0(Ctx* __restrict c) {
  trace_call(0x801A4CF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A4CF0
  c->r[0]=c->lr; // 801A4CF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A4CF8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A4CFC
  c->r[31]=c->r[3]|c->r[3]; // 801A4D00
  c->lr=0x801A4D08u; f_801AA290(c); // 801A4D04
  cmps(c,0,(int32_t)c->r[3],0); // 801A4D08
  if (crb(c,2)) { goto L_801A4D38; } // 801A4D0C
  c->r[31]=0u+0x802B0000u; // 801A4D10
  c->r[3]=c->r[31]+0x00006890u; // 801A4D14
  c->lr=0x801A4D1Cu; f_80187C40(c); // 801A4D18
  c->r[7]=0u+0x801A0000u; // 801A4D1C
  c->r[3]=c->r[31]+0x00006890u; // 801A4D20
  c->r[7]=c->r[7]+0x00004CE0u; // 801A4D24
  c->r[6]=0u+0x00000001u; // 801A4D28
  c->r[5]=0u+0x00000000u; // 801A4D2C
  c->lr=0x801A4D34u; f_80187EA0(c); // 801A4D30
  goto L_801A4DEC; // 801A4D34
L_801A4D38:;
  c->r[3]=R32(c->r[13]+0xFFFFB2F0u); // 801A4D38
  c->r[0]=0u+0xFFFFFFFFu; // 801A4D3C
  cmpu(c,0,c->r[31],0x00000010u); // 801A4D40
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801A4D44
  if (!crb(c,2)) { goto L_801A4D64; } // 801A4D48
  c->r[3]=0u+0x01230000u; // 801A4D4C
  c->r[4]=0u+0x801A0000u; // 801A4D50
  c->r[3]=c->r[3]+0x00004568u; // 801A4D54
  c->r[4]=c->r[4]+0x00004E20u; // 801A4D58
  c->lr=0x801A4D60u; f_801AA000(c); // 801A4D5C
  goto L_801A4DEC; // 801A4D60
L_801A4D64:;
  cmpu(c,0,c->r[31],0x00000020u); // 801A4D64
  if (!crb(c,2)) { goto L_801A4D84; } // 801A4D68
  c->r[3]=0u+0x01230000u; // 801A4D6C
  c->r[4]=0u+0x801A0000u; // 801A4D70
  c->r[3]=c->r[3]+0x00004569u; // 801A4D74
  c->r[4]=c->r[4]+0x00004E20u; // 801A4D78
  c->lr=0x801A4D80u; f_801AA000(c); // 801A4D7C
  goto L_801A4DEC; // 801A4D80
L_801A4D84:;
  c->r[31]=R32(c->r[13]+0xFFFFB2F0u); // 801A4D84
  c->r[3]=0u+0x802B0000u; // 801A4D88
  c->r[3]=c->r[3]+0x00006860u; // 801A4D8C
  c->r[0]=0u+0x00000001u; // 801A4D90
  W32(c->r[13]+0xFFFFB26Cu,c->r[0]); // 801A4D94
  W32(c->r[13]+0xFFFFB2F0u,c->r[3]); // 801A4D98
  c->r[12]=R32(c->r[31]+0x00000028u); // 801A4D9C
  cmps(c,0,(int32_t)c->r[12],0); // 801A4DA0
  if (crb(c,2)) { goto L_801A4DB8; } // 801A4DA4
  c->r[4]=c->r[31]|c->r[31]; // 801A4DA8
  c->r[3]=0u+0xFFFFFFFFu; // 801A4DAC
  c->ctr=c->r[12]; // 801A4DB0
  if (true) { c->lr=0x801A4DB8u; dispatch(c,c->ctr); } // 801A4DB4
L_801A4DB8:;
  c->r[0]=R32(c->r[13]+0xFFFFB270u); // 801A4DB8
  cmps(c,0,(int32_t)c->r[0],0); // 801A4DBC
  if (crb(c,2)) { goto L_801A4DE8; } // 801A4DC0
  c->r[12]=R32(c->r[13]+0xFFFFB2E0u); // 801A4DC4
  c->r[0]=0u+0x00000000u; // 801A4DC8
  W32(c->r[13]+0xFFFFB270u,c->r[0]); // 801A4DCC
  cmps(c,0,(int32_t)c->r[12],0); // 801A4DD0
  if (crb(c,2)) { goto L_801A4DE8; } // 801A4DD4
  c->r[4]=c->r[31]|c->r[31]; // 801A4DD8
  c->r[3]=0u+0x00000000u; // 801A4DDC
  c->ctr=c->r[12]; // 801A4DE0
  if (true) { c->lr=0x801A4DE8u; dispatch(c,c->ctr); } // 801A4DE4
L_801A4DE8:;
  c->lr=0x801A4DECu; f_801A7550(c); // 801A4DE8
L_801A4DEC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A4DEC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A4DF0
  c->lr=c->r[0]; // 801A4DF4
  c->r[1]=c->r[1]+0x00000010u; // 801A4DF8
  return; // 801A4DFC
}

// cbForStoreErrorCode1
void f_801A4E00(Ctx* __restrict c) {
  trace_call(0x801A4E00u);
  c->r[5]=0u+0x801A0000u; // 801A4E00
  c->r[3]=0u+0x00000000u; // 801A4E04
  c->r[5]=c->r[5]+0x00004CF0u; // 801A4E08
  c->r[4]=0u+0x00000000u; // 801A4E0C
  f_801AB7D0(c); return; // 801A4E10
}

// cbForStoreErrorCode2
void f_801A4E20(Ctx* __restrict c) {
  trace_call(0x801A4E20u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A4E20
  c->r[0]=c->lr; // 801A4E24
  c->r[3]=0u+0x00000000u; // 801A4E28
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A4E2C
  c->lr=0x801A4E34u; f_801ABC50(c); // 801A4E30
  c->r[3]=0u+0x801A0000u; // 801A4E34
  c->r[3]=c->r[3]+0x00004CF0u; // 801A4E38
  c->lr=0x801A4E40u; f_801ABC60(c); // 801A4E3C
  c->r[0]=0u+0x00000000u; // 801A4E40
  W32(c->r[13]+0xFFFFB2D4u,c->r[0]); // 801A4E44
  W32(c->r[13]+0xFFFFB274u,c->r[0]); // 801A4E48
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A4E4C
  c->lr=c->r[0]; // 801A4E50
  c->r[1]=c->r[1]+0x00000010u; // 801A4E54
  return; // 801A4E58
}

// CategorizeError
void f_801A4E60(Ctx* __restrict c) {
  trace_call(0x801A4E60u);
  c->r[0]=c->r[3]+0xFFFE0000u; // 801A4E60
  cmpu(c,0,c->r[0],0x00000400u); // 801A4E64
  if (!crb(c,2)) { goto L_801A4E78; } // 801A4E68
  W32(c->r[13]+0xFFFFB2D8u,c->r[3]); // 801A4E6C
  c->r[3]=0u+0x00000001u; // 801A4E70
  return; // 801A4E74
L_801A4E78:;
  c->r[4]=rotl(c->r[3],0)&0x00FFFFFFu; // 801A4E78
  c->r[0]=c->r[4]+0xFFFA0000u; // 801A4E7C
  cmpu(c,0,c->r[0],0x00002800u); // 801A4E80
  if (crb(c,2)) { goto L_801A4EAC; } // 801A4E84
  c->r[0]=c->r[4]+0xFFFE0000u; // 801A4E88
  cmpu(c,0,c->r[0],0x00003A00u); // 801A4E8C
  if (crb(c,2)) { goto L_801A4EAC; } // 801A4E90
  c->r[3]=c->r[4]+0xFFFB0000u; // 801A4E94
  cmpu(c,0,c->r[3],0x00003000u); // 801A4E98
  if (crb(c,2)) { goto L_801A4EAC; } // 801A4E9C
  c->r[0]=c->r[4]+0xFFF50000u; // 801A4EA0
  cmpu(c,0,c->r[0],0x00005A01u); // 801A4EA4
  if (!crb(c,2)) { goto L_801A4EB4; } // 801A4EA8
L_801A4EAC:;
  c->r[3]=0u+0x00000000u; // 801A4EAC
  return; // 801A4EB0
L_801A4EB4:;
  cmpu(c,0,c->r[3],0x00002000u); // 801A4EB4
  if (!crb(c,2)) { goto L_801A4EE8; } // 801A4EB8
  c->r[3]=R32(c->r[13]+0xFFFFB2F0u); // 801A4EBC
  c->r[0]=R32(c->r[3]+0x00000008u); // 801A4EC0
  cmpu(c,0,c->r[0],0x00000025u); // 801A4EC4
  if (crb(c,2)) { goto L_801A4EE0; } // 801A4EC8
  c->r[3]=0u+0x801A0000u; // 801A4ECC
  c->r[0]=R32(c->r[13]+0xFFFFB2F4u); // 801A4ED0
  c->r[3]=c->r[3]+0x00006E20u; // 801A4ED4
  cmpu(c,0,c->r[0],c->r[3]); // 801A4ED8
  if (!crb(c,2)) { goto L_801A4EE8; } // 801A4EDC
L_801A4EE0:;
  c->r[3]=0u+0x00000000u; // 801A4EE0
  return; // 801A4EE4
L_801A4EE8:;
  c->r[3]=R32(c->r[13]+0xFFFFB278u); // 801A4EE8
  c->r[0]=c->r[3]+0x00000001u; // 801A4EEC
  W32(c->r[13]+0xFFFFB278u,c->r[0]); // 801A4EF0
  c->r[0]=R32(c->r[13]+0xFFFFB278u); // 801A4EF4
  cmps(c,0,(int32_t)c->r[0],2); // 801A4EF8
  if (!crb(c,2)) { goto L_801A4F24; } // 801A4EFC
  c->r[0]=R32(c->r[13]+0xFFFFB2D8u); // 801A4F00
  cmpu(c,0,c->r[4],c->r[0]); // 801A4F04
  if (!crb(c,2)) { goto L_801A4F18; } // 801A4F08
  W32(c->r[13]+0xFFFFB2D8u,c->r[4]); // 801A4F0C
  c->r[3]=0u+0x00000001u; // 801A4F10
  return; // 801A4F14
L_801A4F18:;
  W32(c->r[13]+0xFFFFB2D8u,c->r[4]); // 801A4F18
  c->r[3]=0u+0x00000002u; // 801A4F1C
  return; // 801A4F20
L_801A4F24:;
  c->r[0]=c->r[4]+0xFFFD0000u; // 801A4F24
  W32(c->r[13]+0xFFFFB2D8u,c->r[4]); // 801A4F28
  cmpu(c,0,c->r[0],0x00001100u); // 801A4F2C
  if (crb(c,2)) { goto L_801A4F44; } // 801A4F30
  c->r[3]=R32(c->r[13]+0xFFFFB2F0u); // 801A4F34
  c->r[0]=R32(c->r[3]+0x00000008u); // 801A4F38
  cmpu(c,0,c->r[0],0x00000005u); // 801A4F3C
  if (!crb(c,2)) { goto L_801A4F4C; } // 801A4F40
L_801A4F44:;
  c->r[3]=0u+0x00000002u; // 801A4F44
  return; // 801A4F48
L_801A4F4C:;
  c->r[3]=0u+0x00000003u; // 801A4F4C
  return; // 801A4F50
}

// cbForStoreErrorCode3
void f_801A4F60(Ctx* __restrict c) {
  trace_call(0x801A4F60u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A4F60
  c->r[0]=c->lr; // 801A4F64
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A4F68
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A4F6C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801A4F70
  c->lr=0x801A4F78u; f_8018D6A0(c); // 801A4F74
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A4F78
  c->r[31]=c->r[3]|c->r[3]; // 801A4F7C
  cmpu(c,0,c->r[0],0x00000005u); // 801A4F80
  if (crb(c,0)) { goto L_801A4F90; } // 801A4F84
  c->r[0]=0u+0x00000000u; // 801A4F88
  W32(c->r[13]+0xFFFFB260u,c->r[0]); // 801A4F8C
L_801A4F90:;
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A4F90
  c->r[30]=0u+0x802B0000u; // 801A4F94
  c->r[3]=R32(c->r[13]+0xFFFFB260u); // 801A4F98
  c->r[30]=c->r[30]+0x00006B80u; // 801A4F9C
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A4FA0
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A4FA4
  c->r[6]=0u+0x00000010u; // 801A4FA8
  c->r[4]=0u+0x00000000u; // 801A4FAC
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801A4FB0
  c->r[5]=c->r[30]+c->r[5]; // 801A4FB4
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 801A4FB8
  c->r[3]=c->r[30]+c->r[3]; // 801A4FBC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A4FC0
  W32(c->r[3]+0x00000020u,c->r[4]); // 801A4FC4
  c->r[3]=c->r[30]+c->r[0]; // 801A4FC8
  W32(c->r[3]+0x00000024u,c->r[4]); // 801A4FCC
  c->lr=0x801A4FD4u; f_801915E0(c); // 801A4FD0
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A4FD4
  c->r[4]=R32(c->r[13]+0xFFFFB260u); // 801A4FD8
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A4FDC
  c->r[0]=c->r[4]+0x00000001u; // 801A4FE0
  W32(c->r[13]+0xFFFFB260u,c->r[0]); // 801A4FE4
  c->r[4]=c->r[30]+c->r[5]; // 801A4FE8
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 801A4FEC
  c->r[3]=c->r[31]|c->r[31]; // 801A4FF0
  c->lr=0x801A4FF8u; f_8018D6E0(c); // 801A4FF4
  c->r[5]=0u+0x801A0000u; // 801A4FF8
  c->r[3]=0u+0x00000000u; // 801A4FFC
  c->r[5]=c->r[5]+0x00005800u; // 801A5000
  c->r[4]=0u+0x00000000u; // 801A5004
  c->lr=0x801A500Cu; f_801AB7D0(c); // 801A5008
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A500C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A5010
  c->r[30]=R32(c->r[1]+0x00000008u); // 801A5014
  c->lr=c->r[0]; // 801A5018
  c->r[1]=c->r[1]+0x00000010u; // 801A501C
  return; // 801A5020
}

// cbForStateGettingError
void f_801A5030(Ctx* __restrict c) {
  trace_call(0x801A5030u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A5030
  c->r[0]=c->lr; // 801A5034
  W32(c->r[1]+0x00000024u,c->r[0]); // 801A5038
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801A503C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801A5040
  W32(c->r[1]+0x00000014u,c->r[29]); // 801A5044
  W32(c->r[1]+0x00000010u,c->r[28]); // 801A5048
  c->r[28]=c->r[3]|c->r[3]; // 801A504C
  c->lr=0x801A5054u; f_8018D6A0(c); // 801A5050
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A5054
  cmps(c,0,(int32_t)c->r[0],0); // 801A5058
  if (!crb(c,2)) { goto L_801A5070; } // 801A505C
  c->r[4]=0u+0x802B0000u; // 801A5060
  c->r[4]=c->r[4]+0x00006B80u; // 801A5064
  W32(c->r[4]+0x00000078u,c->r[28]); // 801A5068
  goto L_801A5088; // 801A506C
L_801A5070:;
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A5070
  c->r[4]=0u+0x802B0000u; // 801A5074
  c->r[4]=c->r[4]+0x00006B80u; // 801A5078
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A507C
  c->r[4]=c->r[4]+c->r[0]; // 801A5080
  W32(c->r[4]+0x00000014u,c->r[28]); // 801A5084
L_801A5088:;
  c->lr=0x801A508Cu; f_8018D6E0(c); // 801A5088
  cmpu(c,0,c->r[28],0x00000010u); // 801A508C
  if (!crb(c,2)) { goto L_801A50AC; } // 801A5090
  c->r[3]=0u+0x01230000u; // 801A5094
  c->r[4]=0u+0x801A0000u; // 801A5098
  c->r[3]=c->r[3]+0x00004568u; // 801A509C
  c->r[4]=c->r[4]+0x00004E20u; // 801A50A0
  c->lr=0x801A50A8u; f_801AA000(c); // 801A50A4
  goto L_801A5514; // 801A50A8
L_801A50AC:;
  cmpu(c,0,c->r[28],0x00000020u); // 801A50AC
  if (!crb(c,2)) { goto L_801A50CC; } // 801A50B0
  c->r[3]=0u+0x01230000u; // 801A50B4
  c->r[4]=0u+0x801A0000u; // 801A50B8
  c->r[3]=c->r[3]+0x00004569u; // 801A50BC
  c->r[4]=c->r[4]+0x00004E20u; // 801A50C0
  c->lr=0x801A50C8u; f_801AA000(c); // 801A50C4
  goto L_801A5514; // 801A50C8
L_801A50CC:;
  c->r[0]=rotl(c->r[28],0)&0x00000002u; cr0(c,c->r[0]); // 801A50CC
  if (crb(c,2)) { goto L_801A50EC; } // 801A50D0
  c->r[3]=0u+0x01230000u; // 801A50D4
  c->r[4]=0u+0x801A0000u; // 801A50D8
  c->r[3]=c->r[3]+0x00004567u; // 801A50DC
  c->r[4]=c->r[4]+0x00004E00u; // 801A50E0
  c->lr=0x801A50E8u; f_801AA000(c); // 801A50E4
  goto L_801A5514; // 801A50E8
L_801A50EC:;
  c->lr=0x801A50F0u; f_801ACA60(c); // 801A50EC
  c->r[29]=c->r[3]|c->r[3]; // 801A50F0
  c->r[28]=rotl(c->r[3],0)&0xFF000000u; // 801A50F4
  c->lr=0x801A50FCu; f_801A4E60(c); // 801A50F8
  cmpu(c,0,c->r[3],0x00000001u); // 801A50FC
  c->r[30]=c->r[3]|c->r[3]; // 801A5100
  if (!crb(c,2)) { goto L_801A511C; } // 801A5104
  c->r[4]=0u+0x801A0000u; // 801A5108
  c->r[3]=c->r[29]|c->r[29]; // 801A510C
  c->r[4]=c->r[4]+0x00004E00u; // 801A5110
  c->lr=0x801A5118u; f_801AA000(c); // 801A5114
  goto L_801A5514; // 801A5118
L_801A511C:;
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 801A511C
  cmpu(c,0,c->r[0],0x00000001u); // 801A5120
  if (crb(c,1)) { goto L_801A5130; } // 801A5124
  c->r[4]=0u+0x00000000u; // 801A5128
  goto L_801A5194; // 801A512C
L_801A5130:;
  c->r[0]=c->r[28]+0xFF000000u; // 801A5130
  cmpu(c,0,c->r[0],0x00000000u); // 801A5134
  if (!crb(c,2)) { goto L_801A5144; } // 801A5138
  c->r[4]=0u+0x00000004u; // 801A513C
  goto L_801A5194; // 801A5140
L_801A5144:;
  c->r[0]=c->r[28]+0xFE000000u; // 801A5144
  cmpu(c,0,c->r[0],0x00000000u); // 801A5148
  if (!crb(c,2)) { goto L_801A5158; } // 801A514C
  c->r[4]=0u+0x00000006u; // 801A5150
  goto L_801A5194; // 801A5154
L_801A5158:;
  c->r[0]=c->r[28]+0xFD000000u; // 801A5158
  cmpu(c,0,c->r[0],0x00000000u); // 801A515C
  if (!crb(c,2)) { goto L_801A516C; } // 801A5160
  c->r[4]=0u+0x00000003u; // 801A5164
  goto L_801A5194; // 801A5168
L_801A516C:;
  cmps(c,0,(int32_t)c->r[28],0); // 801A516C
  if (!crb(c,2)) { goto L_801A5190; } // 801A5170
  c->r[0]=c->r[29]+0xFFFB0000u; // 801A5174
  cmpu(c,0,c->r[0],0x00003000u); // 801A5178
  if (!crb(c,2)) { goto L_801A5188; } // 801A517C
  c->r[4]=0u+0x00000001u; // 801A5180
  goto L_801A5194; // 801A5184
L_801A5188:;
  c->r[4]=0u+0x00000005u; // 801A5188
  goto L_801A5194; // 801A518C
L_801A5190:;
  c->r[4]=0u+0x00000005u; // 801A5190
L_801A5194:;
  c->r[0]=R32(c->r[13]+0xFFFFB270u); // 801A5194
  cmps(c,0,(int32_t)c->r[0],0); // 801A5198
  if (crb(c,2)) { goto L_801A5208; } // 801A519C
  c->r[31]=R32(c->r[13]+0xFFFFB2F0u); // 801A51A0
  c->r[3]=0u+0x802B0000u; // 801A51A4
  c->r[3]=c->r[3]+0x00006860u; // 801A51A8
  W32(c->r[13]+0xFFFFB274u,c->r[4]); // 801A51AC
  c->r[4]=0u+0x00000000u; // 801A51B0
  c->r[0]=0u+0x0000000Au; // 801A51B4
  W32(c->r[13]+0xFFFFB270u,c->r[4]); // 801A51B8
  W32(c->r[13]+0xFFFFB2F0u,c->r[3]); // 801A51BC
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801A51C0
  c->r[12]=R32(c->r[31]+0x00000028u); // 801A51C4
  cmps(c,0,(int32_t)c->r[12],0); // 801A51C8
  if (crb(c,2)) { goto L_801A51E0; } // 801A51CC
  c->r[4]=c->r[31]|c->r[31]; // 801A51D0
  c->r[3]=0u+0xFFFFFFFDu; // 801A51D4
  c->ctr=c->r[12]; // 801A51D8
  if (true) { c->lr=0x801A51E0u; dispatch(c,c->ctr); } // 801A51DC
L_801A51E0:;
  c->r[12]=R32(c->r[13]+0xFFFFB2E0u); // 801A51E0
  cmps(c,0,(int32_t)c->r[12],0); // 801A51E4
  if (crb(c,2)) { goto L_801A51FC; } // 801A51E8
  c->r[4]=c->r[31]|c->r[31]; // 801A51EC
  c->r[3]=0u+0x00000000u; // 801A51F0
  c->ctr=c->r[12]; // 801A51F4
  if (true) { c->lr=0x801A51FCu; dispatch(c,c->ctr); } // 801A51F8
L_801A51FC:;
  c->lr=0x801A5200u; f_801A7550(c); // 801A51FC
  c->r[0]=0u+0x00000001u; // 801A5200
  goto L_801A520C; // 801A5204
L_801A5208:;
  c->r[0]=0u+0x00000000u; // 801A5208
L_801A520C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801A520C
  if (!crb(c,2)) { goto L_801A5514; } // 801A5210
  cmpu(c,0,c->r[30],0x00000002u); // 801A5214
  if (!crb(c,2)) { goto L_801A5230; } // 801A5218
  c->r[4]=0u+0x801A0000u; // 801A521C
  c->r[3]=c->r[29]|c->r[29]; // 801A5220
  c->r[4]=c->r[4]+0x00004F60u; // 801A5224
  c->lr=0x801A522Cu; f_801AA000(c); // 801A5228
  goto L_801A5514; // 801A522C
L_801A5230:;
  cmpu(c,0,c->r[30],0x00000003u); // 801A5230
  if (!crb(c,2)) { goto L_801A5300; } // 801A5234
  c->r[3]=rotl(c->r[29],0)&0x00FFFFFFu; // 801A5238
  c->r[0]=c->r[3]+0xFFFD0000u; // 801A523C
  cmpu(c,0,c->r[0],0x00001100u); // 801A5240
  if (!crb(c,2)) { goto L_801A52EC; } // 801A5244
  c->r[3]=R32(c->r[13]+0xFFFFB2F0u); // 801A5248
  c->r[29]=R32(c->r[3]+0x00000010u); // 801A524C
  c->lr=0x801A5254u; f_8018D6A0(c); // 801A5250
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A5254
  c->r[31]=c->r[3]|c->r[3]; // 801A5258
  cmpu(c,0,c->r[0],0x00000005u); // 801A525C
  if (crb(c,0)) { goto L_801A526C; } // 801A5260
  c->r[0]=0u+0x00000000u; // 801A5264
  W32(c->r[13]+0xFFFFB260u,c->r[0]); // 801A5268
L_801A526C:;
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A526C
  c->r[30]=0u+0x802B0000u; // 801A5270
  c->r[3]=R32(c->r[13]+0xFFFFB260u); // 801A5274
  c->r[30]=c->r[30]+0x00006B80u; // 801A5278
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A527C
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A5280
  c->r[6]=0u+0x00000002u; // 801A5284
  c->r[4]=0u+0x00000000u; // 801A5288
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801A528C
  c->r[5]=c->r[30]+c->r[5]; // 801A5290
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 801A5294
  c->r[3]=c->r[30]+c->r[3]; // 801A5298
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A529C
  W32(c->r[3]+0x00000020u,c->r[29]); // 801A52A0
  c->r[3]=c->r[30]+c->r[0]; // 801A52A4
  W32(c->r[3]+0x00000024u,c->r[4]); // 801A52A8
  c->lr=0x801A52B0u; f_801915E0(c); // 801A52AC
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A52B0
  c->r[4]=R32(c->r[13]+0xFFFFB260u); // 801A52B4
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A52B8
  c->r[0]=c->r[4]+0x00000001u; // 801A52BC
  W32(c->r[13]+0xFFFFB260u,c->r[0]); // 801A52C0
  c->r[4]=c->r[30]+c->r[5]; // 801A52C4
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 801A52C8
  c->r[3]=c->r[31]|c->r[31]; // 801A52CC
  c->lr=0x801A52D4u; f_8018D6E0(c); // 801A52D0
  c->r[3]=R32(c->r[13]+0xFFFFB2F0u); // 801A52D4
  c->r[4]=0u+0x801A0000u; // 801A52D8
  c->r[4]=c->r[4]+0x00005540u; // 801A52DC
  c->r[3]=R32(c->r[3]+0x00000010u); // 801A52E0
  c->lr=0x801A52E8u; f_801AC460(c); // 801A52E4
  goto L_801A5514; // 801A52E8
L_801A52EC:;
  c->r[12]=R32(c->r[13]+0xFFFFB2F4u); // 801A52EC
  c->r[3]=R32(c->r[13]+0xFFFFB2F0u); // 801A52F0
  c->ctr=c->r[12]; // 801A52F4
  if (true) { c->lr=0x801A52FCu; dispatch(c,c->ctr); } // 801A52F8
  goto L_801A5514; // 801A52FC
L_801A5300:;
  c->r[0]=c->r[28]+0xFF000000u; // 801A5300
  cmpu(c,0,c->r[0],0x00000000u); // 801A5304
  if (!crb(c,2)) { goto L_801A538C; } // 801A5308
  c->r[4]=R32(c->r[13]+0xFFFFB2F0u); // 801A530C
  c->r[0]=0u+0x00000005u; // 801A5310
  c->r[3]=0u+0x00000001u; // 801A5314
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 801A5318
  c->r[0]=R32(c->r[13]+0xFFFFB284u); // 801A531C
  W32(c->r[13]+0xFFFFB2D0u,c->r[3]); // 801A5320
  cmps(c,0,(int32_t)c->r[0],0); // 801A5324
  if (!crb(c,2)) { goto L_801A5514; } // 801A5328
  c->r[0]=R32(c->r[13]+0xFFFFB288u); // 801A532C
  cmps(c,0,(int32_t)c->r[0],0); // 801A5330
  if (!crb(c,2)) { goto L_801A5514; } // 801A5334
  c->r[30]=0u+0x802B0000u; // 801A5338
  W32(c->r[13]+0xFFFFB284u,c->r[3]); // 801A533C
  c->r[3]=c->r[30]+0x000068C0u; // 801A5340
  c->lr=0x801A5348u; f_80187C40(c); // 801A5344
  c->lr=0x801A534Cu; f_801915E0(c); // 801A5348
  c->r[5]=0u+0x80000000u; // 801A534C
  c->r[4]=0u+0x10620000u; // 801A5350
  c->r[0]=R32(c->r[5]+0x000000F8u); // 801A5354
  c->r[9]=0u+0x801A0000u; // 801A5358
  c->r[6]=c->r[3]|c->r[3]; // 801A535C
  c->r[4]=c->r[4]+0x00004DD3u; // 801A5360
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801A5364
  c->r[3]=c->r[30]+0x000068C0u; // 801A5368
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 801A536C
  c->r[9]=c->r[9]+0x00007520u; // 801A5370
  c->r[5]=0u+0x00000000u; // 801A5374
  c->r[7]=0u+0x00000000u; // 801A5378
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 801A537C
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 801A5380
  c->lr=0x801A5388u; f_80187F10(c); // 801A5384
  goto L_801A5514; // 801A5388
L_801A538C:;
  c->r[0]=c->r[28]+0xFE000000u; // 801A538C
  cmpu(c,0,c->r[0],0x00000000u); // 801A5390
  if (!crb(c,2)) { goto L_801A53AC; } // 801A5394
  c->r[3]=R32(c->r[13]+0xFFFFB2F0u); // 801A5398
  c->r[0]=0u+0x00000003u; // 801A539C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801A53A0
  c->lr=0x801A53A8u; f_801A6A10(c); // 801A53A4
  goto L_801A5514; // 801A53A8
L_801A53AC:;
  c->r[0]=c->r[28]+0xFD000000u; // 801A53AC
  cmpu(c,0,c->r[0],0x00000000u); // 801A53B0
  if (!crb(c,2)) { goto L_801A5438; } // 801A53B4
  c->r[4]=R32(c->r[13]+0xFFFFB2F0u); // 801A53B8
  c->r[0]=0u+0x00000004u; // 801A53BC
  c->r[3]=0u+0x00000001u; // 801A53C0
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 801A53C4
  c->r[0]=R32(c->r[13]+0xFFFFB284u); // 801A53C8
  W32(c->r[13]+0xFFFFB2D0u,c->r[3]); // 801A53CC
  cmps(c,0,(int32_t)c->r[0],0); // 801A53D0
  if (!crb(c,2)) { goto L_801A5514; } // 801A53D4
  c->r[0]=R32(c->r[13]+0xFFFFB288u); // 801A53D8
  cmps(c,0,(int32_t)c->r[0],0); // 801A53DC
  if (!crb(c,2)) { goto L_801A5514; } // 801A53E0
  c->r[30]=0u+0x802B0000u; // 801A53E4
  W32(c->r[13]+0xFFFFB284u,c->r[3]); // 801A53E8
  c->r[3]=c->r[30]+0x000068C0u; // 801A53EC
  c->lr=0x801A53F4u; f_80187C40(c); // 801A53F0
  c->lr=0x801A53F8u; f_801915E0(c); // 801A53F4
  c->r[5]=0u+0x80000000u; // 801A53F8
  c->r[4]=0u+0x10620000u; // 801A53FC
  c->r[0]=R32(c->r[5]+0x000000F8u); // 801A5400
  c->r[9]=0u+0x801A0000u; // 801A5404
  c->r[6]=c->r[3]|c->r[3]; // 801A5408
  c->r[4]=c->r[4]+0x00004DD3u; // 801A540C
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801A5410
  c->r[3]=c->r[30]+0x000068C0u; // 801A5414
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 801A5418
  c->r[9]=c->r[9]+0x00007520u; // 801A541C
  c->r[5]=0u+0x00000000u; // 801A5420
  c->r[7]=0u+0x00000000u; // 801A5424
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 801A5428
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 801A542C
  c->lr=0x801A5434u; f_80187F10(c); // 801A5430
  goto L_801A5514; // 801A5434
L_801A5438:;
  cmps(c,0,(int32_t)c->r[28],0); // 801A5438
  if (!crb(c,2)) { goto L_801A5500; } // 801A543C
  c->r[0]=c->r[29]+0xFFFB0000u; // 801A5440
  cmpu(c,0,c->r[0],0x00003000u); // 801A5444
  if (!crb(c,2)) { goto L_801A54E8; } // 801A5448
  c->lr=0x801A5450u; f_8018D6A0(c); // 801A544C
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A5450
  c->r[31]=c->r[3]|c->r[3]; // 801A5454
  cmpu(c,0,c->r[0],0x00000005u); // 801A5458
  if (crb(c,0)) { goto L_801A5468; } // 801A545C
  c->r[0]=0u+0x00000000u; // 801A5460
  W32(c->r[13]+0xFFFFB260u,c->r[0]); // 801A5464
L_801A5468:;
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A5468
  c->r[30]=0u+0x802B0000u; // 801A546C
  c->r[3]=R32(c->r[13]+0xFFFFB260u); // 801A5470
  c->r[30]=c->r[30]+0x00006B80u; // 801A5474
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A5478
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A547C
  c->r[6]=0u+0x00000010u; // 801A5480
  c->r[4]=0u+0x00000000u; // 801A5484
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801A5488
  c->r[5]=c->r[30]+c->r[5]; // 801A548C
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 801A5490
  c->r[3]=c->r[30]+c->r[3]; // 801A5494
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A5498
  W32(c->r[3]+0x00000020u,c->r[4]); // 801A549C
  c->r[3]=c->r[30]+c->r[0]; // 801A54A0
  W32(c->r[3]+0x00000024u,c->r[4]); // 801A54A4
  c->lr=0x801A54ACu; f_801915E0(c); // 801A54A8
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A54AC
  c->r[4]=R32(c->r[13]+0xFFFFB260u); // 801A54B0
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A54B4
  c->r[0]=c->r[4]+0x00000001u; // 801A54B8
  W32(c->r[13]+0xFFFFB260u,c->r[0]); // 801A54BC
  c->r[4]=c->r[30]+c->r[5]; // 801A54C0
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 801A54C4
  c->r[3]=c->r[31]|c->r[31]; // 801A54C8
  c->lr=0x801A54D0u; f_8018D6E0(c); // 801A54CC
  c->r[5]=0u+0x801A0000u; // 801A54D0
  c->r[3]=0u+0x00000000u; // 801A54D4
  c->r[5]=c->r[5]+0x000066A0u; // 801A54D8
  c->r[4]=0u+0x00000000u; // 801A54DC
  c->lr=0x801A54E4u; f_801AB7D0(c); // 801A54E0
  goto L_801A5514; // 801A54E4
L_801A54E8:;
  c->r[3]=0u+0x01230000u; // 801A54E8
  c->r[4]=0u+0x801A0000u; // 801A54EC
  c->r[3]=c->r[3]+0x00004567u; // 801A54F0
  c->r[4]=c->r[4]+0x00004E00u; // 801A54F4
  c->lr=0x801A54FCu; f_801AA000(c); // 801A54F8
  goto L_801A5514; // 801A54FC
L_801A5500:;
  c->r[3]=0u+0x01230000u; // 801A5500
  c->r[4]=0u+0x801A0000u; // 801A5504
  c->r[3]=c->r[3]+0x00004567u; // 801A5508
  c->r[4]=c->r[4]+0x00004E00u; // 801A550C
  c->lr=0x801A5514u; f_801AA000(c); // 801A5510
L_801A5514:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801A5514
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801A5518
  c->r[30]=R32(c->r[1]+0x00000018u); // 801A551C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801A5520
  c->r[28]=R32(c->r[1]+0x00000010u); // 801A5524
  c->lr=c->r[0]; // 801A5528
  c->r[1]=c->r[1]+0x00000020u; // 801A552C
  return; // 801A5530
}

// cbForUnrecoveredError
void f_801A5540(Ctx* __restrict c) {
  trace_call(0x801A5540u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A5540
  c->r[0]=c->lr; // 801A5544
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A5548
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A554C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801A5550
  c->r[30]=c->r[3]|c->r[3]; // 801A5554
  c->lr=0x801A555Cu; f_8018D6A0(c); // 801A5558
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A555C
  cmps(c,0,(int32_t)c->r[0],0); // 801A5560
  if (!crb(c,2)) { goto L_801A5578; } // 801A5564
  c->r[4]=0u+0x802B0000u; // 801A5568
  c->r[4]=c->r[4]+0x00006B80u; // 801A556C
  W32(c->r[4]+0x00000078u,c->r[30]); // 801A5570
  goto L_801A5590; // 801A5574
L_801A5578:;
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A5578
  c->r[4]=0u+0x802B0000u; // 801A557C
  c->r[4]=c->r[4]+0x00006B80u; // 801A5580
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A5584
  c->r[4]=c->r[4]+c->r[0]; // 801A5588
  W32(c->r[4]+0x00000014u,c->r[30]); // 801A558C
L_801A5590:;
  c->lr=0x801A5594u; f_8018D6E0(c); // 801A5590
  cmpu(c,0,c->r[30],0x00000010u); // 801A5594
  if (!crb(c,2)) { goto L_801A55B4; } // 801A5598
  c->r[3]=0u+0x01230000u; // 801A559C
  c->r[4]=0u+0x801A0000u; // 801A55A0
  c->r[3]=c->r[3]+0x00004568u; // 801A55A4
  c->r[4]=c->r[4]+0x00004E20u; // 801A55A8
  c->lr=0x801A55B0u; f_801AA000(c); // 801A55AC
  goto L_801A5708; // 801A55B0
L_801A55B4:;
  cmpu(c,0,c->r[30],0x00000020u); // 801A55B4
  if (!crb(c,2)) { goto L_801A55D4; } // 801A55B8
  c->r[3]=0u+0x01230000u; // 801A55BC
  c->r[4]=0u+0x801A0000u; // 801A55C0
  c->r[3]=c->r[3]+0x00004569u; // 801A55C4
  c->r[4]=c->r[4]+0x00004E20u; // 801A55C8
  c->lr=0x801A55D0u; f_801AA000(c); // 801A55CC
  goto L_801A5708; // 801A55D0
L_801A55D4:;
  c->r[0]=rotl(c->r[30],0)&0x00000001u; cr0(c,c->r[0]); // 801A55D4
  if (crb(c,2)) { goto L_801A5678; } // 801A55D8
  c->lr=0x801A55E0u; f_8018D6A0(c); // 801A55DC
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A55E0
  c->r[31]=c->r[3]|c->r[3]; // 801A55E4
  cmpu(c,0,c->r[0],0x00000005u); // 801A55E8
  if (crb(c,0)) { goto L_801A55F8; } // 801A55EC
  c->r[0]=0u+0x00000000u; // 801A55F0
  W32(c->r[13]+0xFFFFB260u,c->r[0]); // 801A55F4
L_801A55F8:;
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A55F8
  c->r[30]=0u+0x802B0000u; // 801A55FC
  c->r[3]=R32(c->r[13]+0xFFFFB260u); // 801A5600
  c->r[30]=c->r[30]+0x00006B80u; // 801A5604
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A5608
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A560C
  c->r[6]=0u+0x00000010u; // 801A5610
  c->r[4]=0u+0x00000000u; // 801A5614
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801A5618
  c->r[5]=c->r[30]+c->r[5]; // 801A561C
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 801A5620
  c->r[3]=c->r[30]+c->r[3]; // 801A5624
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A5628
  W32(c->r[3]+0x00000020u,c->r[4]); // 801A562C
  c->r[3]=c->r[30]+c->r[0]; // 801A5630
  W32(c->r[3]+0x00000024u,c->r[4]); // 801A5634
  c->lr=0x801A563Cu; f_801915E0(c); // 801A5638
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A563C
  c->r[4]=R32(c->r[13]+0xFFFFB260u); // 801A5640
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A5644
  c->r[0]=c->r[4]+0x00000001u; // 801A5648
  W32(c->r[13]+0xFFFFB260u,c->r[0]); // 801A564C
  c->r[4]=c->r[30]+c->r[5]; // 801A5650
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 801A5654
  c->r[3]=c->r[31]|c->r[31]; // 801A5658
  c->lr=0x801A5660u; f_8018D6E0(c); // 801A565C
  c->r[5]=0u+0x801A0000u; // 801A5660
  c->r[3]=0u+0x00000000u; // 801A5664
  c->r[5]=c->r[5]+0x00005800u; // 801A5668
  c->r[4]=0u+0x00000000u; // 801A566C
  c->lr=0x801A5674u; f_801AB7D0(c); // 801A5670
  goto L_801A5708; // 801A5674
L_801A5678:;
  c->lr=0x801A567Cu; f_8018D6A0(c); // 801A5678
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A567C
  c->r[31]=c->r[3]|c->r[3]; // 801A5680
  cmpu(c,0,c->r[0],0x00000005u); // 801A5684
  if (crb(c,0)) { goto L_801A5694; } // 801A5688
  c->r[0]=0u+0x00000000u; // 801A568C
  W32(c->r[13]+0xFFFFB260u,c->r[0]); // 801A5690
L_801A5694:;
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A5694
  c->r[30]=0u+0x802B0000u; // 801A5698
  c->r[3]=R32(c->r[13]+0xFFFFB260u); // 801A569C
  c->r[30]=c->r[30]+0x00006B80u; // 801A56A0
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A56A4
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A56A8
  c->r[6]=0u+0x00000027u; // 801A56AC
  c->r[4]=0u+0x00000000u; // 801A56B0
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801A56B4
  c->r[5]=c->r[30]+c->r[5]; // 801A56B8
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 801A56BC
  c->r[3]=c->r[30]+c->r[3]; // 801A56C0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A56C4
  W32(c->r[3]+0x00000020u,c->r[4]); // 801A56C8
  c->r[3]=c->r[30]+c->r[0]; // 801A56CC
  W32(c->r[3]+0x00000024u,c->r[4]); // 801A56D0
  c->lr=0x801A56D8u; f_801915E0(c); // 801A56D4
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A56D8
  c->r[4]=R32(c->r[13]+0xFFFFB260u); // 801A56DC
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A56E0
  c->r[0]=c->r[4]+0x00000001u; // 801A56E4
  W32(c->r[13]+0xFFFFB260u,c->r[0]); // 801A56E8
  c->r[4]=c->r[30]+c->r[5]; // 801A56EC
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 801A56F0
  c->r[3]=c->r[31]|c->r[31]; // 801A56F4
  c->lr=0x801A56FCu; f_8018D6E0(c); // 801A56F8
  c->r[3]=0u+0x801A0000u; // 801A56FC
  c->r[3]=c->r[3]+0x00005720u; // 801A5700
  c->lr=0x801A5708u; f_801ABAE0(c); // 801A5704
L_801A5708:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A5708
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A570C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801A5710
  c->lr=c->r[0]; // 801A5714
  c->r[1]=c->r[1]+0x00000010u; // 801A5718
  return; // 801A571C
}

// cbForUnrecoveredErrorRetry
void f_801A5720(Ctx* __restrict c) {
  trace_call(0x801A5720u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A5720
  c->r[0]=c->lr; // 801A5724
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A5728
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A572C
  c->r[31]=c->r[3]|c->r[3]; // 801A5730
  c->lr=0x801A5738u; f_8018D6A0(c); // 801A5734
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A5738
  cmps(c,0,(int32_t)c->r[0],0); // 801A573C
  if (!crb(c,2)) { goto L_801A5754; } // 801A5740
  c->r[4]=0u+0x802B0000u; // 801A5744
  c->r[4]=c->r[4]+0x00006B80u; // 801A5748
  W32(c->r[4]+0x00000078u,c->r[31]); // 801A574C
  goto L_801A576C; // 801A5750
L_801A5754:;
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A5754
  c->r[4]=0u+0x802B0000u; // 801A5758
  c->r[4]=c->r[4]+0x00006B80u; // 801A575C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A5760
  c->r[4]=c->r[4]+c->r[0]; // 801A5764
  W32(c->r[4]+0x00000014u,c->r[31]); // 801A5768
L_801A576C:;
  c->lr=0x801A5770u; f_8018D6E0(c); // 801A576C
  cmpu(c,0,c->r[31],0x00000010u); // 801A5770
  if (!crb(c,2)) { goto L_801A5790; } // 801A5774
  c->r[3]=0u+0x01230000u; // 801A5778
  c->r[4]=0u+0x801A0000u; // 801A577C
  c->r[3]=c->r[3]+0x00004568u; // 801A5780
  c->r[4]=c->r[4]+0x00004E20u; // 801A5784
  c->lr=0x801A578Cu; f_801AA000(c); // 801A5788
  goto L_801A57E0; // 801A578C
L_801A5790:;
  cmpu(c,0,c->r[31],0x00000020u); // 801A5790
  if (!crb(c,2)) { goto L_801A57B0; } // 801A5794
  c->r[3]=0u+0x01230000u; // 801A5798
  c->r[4]=0u+0x801A0000u; // 801A579C
  c->r[3]=c->r[3]+0x00004569u; // 801A57A0
  c->r[4]=c->r[4]+0x00004E20u; // 801A57A4
  c->lr=0x801A57ACu; f_801AA000(c); // 801A57A8
  goto L_801A57E0; // 801A57AC
L_801A57B0:;
  c->r[0]=rotl(c->r[31],0)&0x00000002u; cr0(c,c->r[0]); // 801A57B0
  if (crb(c,2)) { goto L_801A57D0; } // 801A57B4
  c->r[3]=0u+0x01230000u; // 801A57B8
  c->r[4]=0u+0x801A0000u; // 801A57BC
  c->r[3]=c->r[3]+0x00004567u; // 801A57C0
  c->r[4]=c->r[4]+0x00004E00u; // 801A57C4
  c->lr=0x801A57CCu; f_801AA000(c); // 801A57C8
  goto L_801A57E0; // 801A57CC
L_801A57D0:;
  c->lr=0x801A57D4u; f_801ACA60(c); // 801A57D0
  c->r[4]=0u+0x801A0000u; // 801A57D4
  c->r[4]=c->r[4]+0x00004E00u; // 801A57D8
  c->lr=0x801A57E0u; f_801AA000(c); // 801A57DC
L_801A57E0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A57E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A57E4
  c->lr=c->r[0]; // 801A57E8
  c->r[1]=c->r[1]+0x00000010u; // 801A57EC
  return; // 801A57F0
}

// cbForStateGoToRetry
void f_801A5800(Ctx* __restrict c) {
  trace_call(0x801A5800u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A5800
  c->r[0]=c->lr; // 801A5804
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A5808
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A580C
  c->r[31]=c->r[3]|c->r[3]; // 801A5810
  c->lr=0x801A5818u; f_8018D6A0(c); // 801A5814
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A5818
  cmps(c,0,(int32_t)c->r[0],0); // 801A581C
  if (!crb(c,2)) { goto L_801A5834; } // 801A5820
  c->r[4]=0u+0x802B0000u; // 801A5824
  c->r[4]=c->r[4]+0x00006B80u; // 801A5828
  W32(c->r[4]+0x00000078u,c->r[31]); // 801A582C
  goto L_801A584C; // 801A5830
L_801A5834:;
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A5834
  c->r[4]=0u+0x802B0000u; // 801A5838
  c->r[4]=c->r[4]+0x00006B80u; // 801A583C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A5840
  c->r[4]=c->r[4]+c->r[0]; // 801A5844
  W32(c->r[4]+0x00000014u,c->r[31]); // 801A5848
L_801A584C:;
  c->lr=0x801A5850u; f_8018D6E0(c); // 801A584C
  cmpu(c,0,c->r[31],0x00000010u); // 801A5850
  if (!crb(c,2)) { goto L_801A5870; } // 801A5854
  c->r[3]=0u+0x01230000u; // 801A5858
  c->r[4]=0u+0x801A0000u; // 801A585C
  c->r[3]=c->r[3]+0x00004568u; // 801A5860
  c->r[4]=c->r[4]+0x00004E20u; // 801A5864
  c->lr=0x801A586Cu; f_801AA000(c); // 801A5868
  goto L_801A5A2C; // 801A586C
L_801A5870:;
  cmpu(c,0,c->r[31],0x00000020u); // 801A5870
  if (!crb(c,2)) { goto L_801A5890; } // 801A5874
  c->r[3]=0u+0x01230000u; // 801A5878
  c->r[4]=0u+0x801A0000u; // 801A587C
  c->r[3]=c->r[3]+0x00004569u; // 801A5880
  c->r[4]=c->r[4]+0x00004E20u; // 801A5884
  c->lr=0x801A588Cu; f_801AA000(c); // 801A5888
  goto L_801A5A2C; // 801A588C
L_801A5890:;
  c->r[0]=rotl(c->r[31],0)&0x00000002u; cr0(c,c->r[0]); // 801A5890
  if (crb(c,2)) { goto L_801A58B0; } // 801A5894
  c->r[3]=0u+0x01230000u; // 801A5898
  c->r[4]=0u+0x801A0000u; // 801A589C
  c->r[3]=c->r[3]+0x00004567u; // 801A58A0
  c->r[4]=c->r[4]+0x00004E00u; // 801A58A4
  c->lr=0x801A58ACu; f_801AA000(c); // 801A58A8
  goto L_801A5A2C; // 801A58AC
L_801A58B0:;
  c->r[0]=0u+0x00000000u; // 801A58B0
  W32(c->r[13]+0xFFFFB278u,c->r[0]); // 801A58B4
  c->r[0]=R32(c->r[13]+0xFFFFB2E4u); // 801A58B8
  cmpu(c,0,c->r[0],0x00000004u); // 801A58BC
  if (crb(c,2)) { goto L_801A5924; } // 801A58C0
  c->r[0]=R32(c->r[13]+0xFFFFB2E4u); // 801A58C4
  cmpu(c,0,c->r[0],0x00000005u); // 801A58C8
  if (crb(c,2)) { goto L_801A5924; } // 801A58CC
  c->r[0]=R32(c->r[13]+0xFFFFB2E4u); // 801A58D0
  cmpu(c,0,c->r[0],0x0000000Du); // 801A58D4
  if (crb(c,2)) { goto L_801A5924; } // 801A58D8
  c->r[0]=R32(c->r[13]+0xFFFFB2E4u); // 801A58DC
  cmpu(c,0,c->r[0],0x00000021u); // 801A58E0
  if (crb(c,2)) { goto L_801A5924; } // 801A58E4
  c->r[0]=R32(c->r[13]+0xFFFFB2E4u); // 801A58E8
  cmpu(c,0,c->r[0],0x00000022u); // 801A58EC
  if (crb(c,2)) { goto L_801A5924; } // 801A58F0
  c->r[0]=R32(c->r[13]+0xFFFFB2E4u); // 801A58F4
  cmpu(c,0,c->r[0],0x00000029u); // 801A58F8
  if (crb(c,2)) { goto L_801A5924; } // 801A58FC
  c->r[0]=R32(c->r[13]+0xFFFFB2E4u); // 801A5900
  cmpu(c,0,c->r[0],0x0000002Au); // 801A5904
  if (crb(c,2)) { goto L_801A5924; } // 801A5908
  c->r[0]=R32(c->r[13]+0xFFFFB2E4u); // 801A590C
  cmpu(c,0,c->r[0],0x0000000Fu); // 801A5910
  if (crb(c,2)) { goto L_801A5924; } // 801A5914
  c->r[0]=R32(c->r[13]+0xFFFFB2E4u); // 801A5918
  cmpu(c,0,c->r[0],0x00000025u); // 801A591C
  if (!crb(c,2)) { goto L_801A592C; } // 801A5920
L_801A5924:;
  c->r[0]=0u+0x00000001u; // 801A5924
  W32(c->r[13]+0xFFFFB2D4u,c->r[0]); // 801A5928
L_801A592C:;
  c->r[0]=R32(c->r[13]+0xFFFFB270u); // 801A592C
  cmps(c,0,(int32_t)c->r[0],0); // 801A5930
  if (crb(c,2)) { goto L_801A59A4; } // 801A5934
  c->r[31]=R32(c->r[13]+0xFFFFB2F0u); // 801A5938
  c->r[3]=0u+0x802B0000u; // 801A593C
  c->r[3]=c->r[3]+0x00006860u; // 801A5940
  c->r[0]=0u+0x00000002u; // 801A5944
  W32(c->r[13]+0xFFFFB274u,c->r[0]); // 801A5948
  c->r[4]=0u+0x00000000u; // 801A594C
  c->r[0]=0u+0x0000000Au; // 801A5950
  W32(c->r[13]+0xFFFFB270u,c->r[4]); // 801A5954
  W32(c->r[13]+0xFFFFB2F0u,c->r[3]); // 801A5958
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801A595C
  c->r[12]=R32(c->r[31]+0x00000028u); // 801A5960
  cmps(c,0,(int32_t)c->r[12],0); // 801A5964
  if (crb(c,2)) { goto L_801A597C; } // 801A5968
  c->r[4]=c->r[31]|c->r[31]; // 801A596C
  c->r[3]=0u+0xFFFFFFFDu; // 801A5970
  c->ctr=c->r[12]; // 801A5974
  if (true) { c->lr=0x801A597Cu; dispatch(c,c->ctr); } // 801A5978
L_801A597C:;
  c->r[12]=R32(c->r[13]+0xFFFFB2E0u); // 801A597C
  cmps(c,0,(int32_t)c->r[12],0); // 801A5980
  if (crb(c,2)) { goto L_801A5998; } // 801A5984
  c->r[4]=c->r[31]|c->r[31]; // 801A5988
  c->r[3]=0u+0x00000000u; // 801A598C
  c->ctr=c->r[12]; // 801A5990
  if (true) { c->lr=0x801A5998u; dispatch(c,c->ctr); } // 801A5994
L_801A5998:;
  c->lr=0x801A599Cu; f_801A7550(c); // 801A5998
  c->r[0]=0u+0x00000001u; // 801A599C
  goto L_801A59A8; // 801A59A0
L_801A59A4:;
  c->r[0]=0u+0x00000000u; // 801A59A4
L_801A59A8:;
  cmps(c,0,(int32_t)c->r[0],0); // 801A59A8
  if (!crb(c,2)) { goto L_801A5A2C; } // 801A59AC
  c->r[4]=R32(c->r[13]+0xFFFFB2F0u); // 801A59B0
  c->r[0]=0u+0x0000000Bu; // 801A59B4
  c->r[3]=0u+0x00000001u; // 801A59B8
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 801A59BC
  c->r[0]=R32(c->r[13]+0xFFFFB284u); // 801A59C0
  W32(c->r[13]+0xFFFFB2D0u,c->r[3]); // 801A59C4
  cmps(c,0,(int32_t)c->r[0],0); // 801A59C8
  if (!crb(c,2)) { goto L_801A5A2C; } // 801A59CC
  c->r[0]=R32(c->r[13]+0xFFFFB288u); // 801A59D0
  cmps(c,0,(int32_t)c->r[0],0); // 801A59D4
  if (!crb(c,2)) { goto L_801A5A2C; } // 801A59D8
  c->r[31]=0u+0x802B0000u; // 801A59DC
  W32(c->r[13]+0xFFFFB284u,c->r[3]); // 801A59E0
  c->r[3]=c->r[31]+0x000068C0u; // 801A59E4
  c->lr=0x801A59ECu; f_80187C40(c); // 801A59E8
  c->lr=0x801A59F0u; f_801915E0(c); // 801A59EC
  c->r[5]=0u+0x80000000u; // 801A59F0
  c->r[4]=0u+0x10620000u; // 801A59F4
  c->r[0]=R32(c->r[5]+0x000000F8u); // 801A59F8
  c->r[9]=0u+0x801A0000u; // 801A59FC
  c->r[6]=c->r[3]|c->r[3]; // 801A5A00
  c->r[4]=c->r[4]+0x00004DD3u; // 801A5A04
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801A5A08
  c->r[3]=c->r[31]+0x000068C0u; // 801A5A0C
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 801A5A10
  c->r[9]=c->r[9]+0x00007520u; // 801A5A14
  c->r[5]=0u+0x00000000u; // 801A5A18
  c->r[7]=0u+0x00000000u; // 801A5A1C
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 801A5A20
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 801A5A24
  c->lr=0x801A5A2Cu; f_80187F10(c); // 801A5A28
L_801A5A2C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A5A2C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A5A30
  c->lr=c->r[0]; // 801A5A34
  c->r[1]=c->r[1]+0x00000010u; // 801A5A38
  return; // 801A5A3C
}

// stateCheckID
void f_801A5A40(Ctx* __restrict c) {
  trace_call(0x801A5A40u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A5A40
  c->r[0]=c->lr; // 801A5A44
  W32(c->r[1]+0x00000024u,c->r[0]); // 801A5A48
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801A5A4C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801A5A50
  c->r[30]=0u+0x802B0000u; // 801A5A54
  c->r[30]=c->r[30]+0x00001D40u; // 801A5A58
  W32(c->r[1]+0x00000014u,c->r[29]); // 801A5A5C
  c->r[0]=R32(c->r[13]+0xFFFFB2E4u); // 801A5A60
  cmps(c,0,(int32_t)c->r[0],3); // 801A5A64
  if (crb(c,2)) { goto L_801A5A70; } // 801A5A68
  goto L_801A5BFC; // 801A5A6C
L_801A5A70:;
  c->r[31]=0u+0x00000000u; // 801A5A70
  W32(c->r[13]+0xFFFFB290u,c->r[31]); // 801A5A74
  c->r[4]=R32(c->r[13]+0xFFFFB2F0u); // 801A5A78
  c->r[3]=c->r[30]+0x00004BC0u; // 801A5A7C
  c->r[4]=R32(c->r[4]+0x00000024u); // 801A5A80
  c->lr=0x801A5A88u; f_801AA070(c); // 801A5A84
  cmps(c,0,(int32_t)c->r[3],0); // 801A5A88
  if (crb(c,2)) { goto L_801A5B64; } // 801A5A8C
  c->r[3]=R32(c->r[13]+0xFFFFB2ECu); // 801A5A90
  c->r[4]=c->r[30]+0x00004BC0u; // 801A5A94
  c->r[5]=0u+0x00000020u; // 801A5A98
  c->lr=0x801A5AA0u; f_80004364(c); // 801A5A9C
  c->r[5]=R32(c->r[13]+0xFFFFB2F0u); // 801A5AA0
  c->r[0]=0u+0x00000001u; // 801A5AA4
  c->r[3]=c->r[30]+0x00004B00u; // 801A5AA8
  c->r[4]=0u+0x00000020u; // 801A5AAC
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 801A5AB0
  c->lr=0x801A5AB8u; f_80188CB0(c); // 801A5AB4
  W32(c->r[13]+0xFFFFB278u,c->r[31]); // 801A5AB8
  c->r[3]=0u+0x00000000u; // 801A5ABC
  c->lr=0x801A5AC4u; f_801ACA90(c); // 801A5AC0
  c->lr=0x801A5AC8u; f_8018D6A0(c); // 801A5AC4
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A5AC8
  c->r[29]=c->r[3]|c->r[3]; // 801A5ACC
  cmpu(c,0,c->r[0],0x00000005u); // 801A5AD0
  if (crb(c,0)) { goto L_801A5ADC; } // 801A5AD4
  W32(c->r[13]+0xFFFFB260u,c->r[31]); // 801A5AD8
L_801A5ADC:;
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A5ADC
  c->r[31]=0u+0x802B0000u; // 801A5AE0
  c->r[3]=R32(c->r[13]+0xFFFFB260u); // 801A5AE4
  c->r[31]=c->r[31]+0x00006B80u; // 801A5AE8
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A5AEC
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A5AF0
  c->r[7]=0u+0x00000021u; // 801A5AF4
  c->r[5]=0u+0x00010000u; // 801A5AF8
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801A5AFC
  c->r[4]=0u+0x00000020u; // 801A5B00
  c->r[6]=c->r[31]+c->r[6]; // 801A5B04
  W32(c->r[6]+0x0000001Cu,c->r[7]); // 801A5B08
  c->r[3]=c->r[31]+c->r[3]; // 801A5B0C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A5B10
  W32(c->r[3]+0x00000020u,c->r[5]); // 801A5B14
  c->r[3]=c->r[31]+c->r[0]; // 801A5B18
  W32(c->r[3]+0x00000024u,c->r[4]); // 801A5B1C
  c->lr=0x801A5B24u; f_801915E0(c); // 801A5B20
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A5B24
  c->r[4]=R32(c->r[13]+0xFFFFB260u); // 801A5B28
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A5B2C
  c->r[0]=c->r[4]+0x00000001u; // 801A5B30
  W32(c->r[13]+0xFFFFB260u,c->r[0]); // 801A5B34
  c->r[4]=c->r[31]+c->r[5]; // 801A5B38
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 801A5B3C
  c->r[3]=c->r[29]|c->r[29]; // 801A5B40
  c->lr=0x801A5B48u; f_8018D6E0(c); // 801A5B44
  c->r[6]=0u+0x801A0000u; // 801A5B48
  c->r[3]=c->r[30]+0x00004BE0u; // 801A5B4C
  c->r[6]=c->r[6]+0x00005D80u; // 801A5B50
  c->r[4]=0u+0x00000020u; // 801A5B54
  c->r[5]=0u+0x00010000u; // 801A5B58
  c->lr=0x801A5B60u; f_801AB630(c); // 801A5B5C
  goto L_801A5D5C; // 801A5B60
L_801A5B64:;
  c->lr=0x801A5B68u; f_8018D6A0(c); // 801A5B64
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A5B68
  c->r[29]=c->r[3]|c->r[3]; // 801A5B6C
  cmpu(c,0,c->r[0],0x00000005u); // 801A5B70
  if (crb(c,0)) { goto L_801A5B7C; } // 801A5B74
  W32(c->r[13]+0xFFFFB260u,c->r[31]); // 801A5B78
L_801A5B7C:;
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A5B7C
  c->r[30]=0u+0x802B0000u; // 801A5B80
  c->r[3]=R32(c->r[13]+0xFFFFB260u); // 801A5B84
  c->r[30]=c->r[30]+0x00006B80u; // 801A5B88
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A5B8C
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A5B90
  c->r[6]=0u+0x00000010u; // 801A5B94
  c->r[4]=0u+0x00000000u; // 801A5B98
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801A5B9C
  c->r[5]=c->r[30]+c->r[5]; // 801A5BA0
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 801A5BA4
  c->r[3]=c->r[30]+c->r[3]; // 801A5BA8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A5BAC
  W32(c->r[3]+0x00000020u,c->r[4]); // 801A5BB0
  c->r[3]=c->r[30]+c->r[0]; // 801A5BB4
  W32(c->r[3]+0x00000024u,c->r[4]); // 801A5BB8
  c->lr=0x801A5BC0u; f_801915E0(c); // 801A5BBC
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A5BC0
  c->r[4]=R32(c->r[13]+0xFFFFB260u); // 801A5BC4
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A5BC8
  c->r[0]=c->r[4]+0x00000001u; // 801A5BCC
  W32(c->r[13]+0xFFFFB260u,c->r[0]); // 801A5BD0
  c->r[4]=c->r[30]+c->r[5]; // 801A5BD4
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 801A5BD8
  c->r[3]=c->r[29]|c->r[29]; // 801A5BDC
  c->lr=0x801A5BE4u; f_8018D6E0(c); // 801A5BE0
  c->r[5]=0u+0x801A0000u; // 801A5BE4
  c->r[3]=0u+0x00000000u; // 801A5BE8
  c->r[5]=c->r[5]+0x000066A0u; // 801A5BEC
  c->r[4]=0u+0x00000000u; // 801A5BF0
  c->lr=0x801A5BF8u; f_801AB7D0(c); // 801A5BF4
  goto L_801A5D5C; // 801A5BF8
L_801A5BFC:;
  c->r[4]=R32(c->r[13]+0xFFFFB2ECu); // 801A5BFC
  c->r[3]=c->r[30]+0x00004BC0u; // 801A5C00
  c->r[5]=0u+0x00000020u; // 801A5C04
  c->lr=0x801A5C0Cu; f_8020BD24(c); // 801A5C08
  cmps(c,0,(int32_t)c->r[3],0); // 801A5C0C
  if (crb(c,2)) { goto L_801A5CB0; } // 801A5C10
  c->lr=0x801A5C18u; f_8018D6A0(c); // 801A5C14
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A5C18
  c->r[29]=c->r[3]|c->r[3]; // 801A5C1C
  cmpu(c,0,c->r[0],0x00000005u); // 801A5C20
  if (crb(c,0)) { goto L_801A5C30; } // 801A5C24
  c->r[0]=0u+0x00000000u; // 801A5C28
  W32(c->r[13]+0xFFFFB260u,c->r[0]); // 801A5C2C
L_801A5C30:;
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A5C30
  c->r[30]=0u+0x802B0000u; // 801A5C34
  c->r[3]=R32(c->r[13]+0xFFFFB260u); // 801A5C38
  c->r[30]=c->r[30]+0x00006B80u; // 801A5C3C
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A5C40
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A5C44
  c->r[6]=0u+0x00000010u; // 801A5C48
  c->r[4]=0u+0x00000000u; // 801A5C4C
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801A5C50
  c->r[5]=c->r[30]+c->r[5]; // 801A5C54
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 801A5C58
  c->r[3]=c->r[30]+c->r[3]; // 801A5C5C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A5C60
  W32(c->r[3]+0x00000020u,c->r[4]); // 801A5C64
  c->r[3]=c->r[30]+c->r[0]; // 801A5C68
  W32(c->r[3]+0x00000024u,c->r[4]); // 801A5C6C
  c->lr=0x801A5C74u; f_801915E0(c); // 801A5C70
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A5C74
  c->r[4]=R32(c->r[13]+0xFFFFB260u); // 801A5C78
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A5C7C
  c->r[0]=c->r[4]+0x00000001u; // 801A5C80
  W32(c->r[13]+0xFFFFB260u,c->r[0]); // 801A5C84
  c->r[4]=c->r[30]+c->r[5]; // 801A5C88
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 801A5C8C
  c->r[3]=c->r[29]|c->r[29]; // 801A5C90
  c->lr=0x801A5C98u; f_8018D6E0(c); // 801A5C94
  c->r[5]=0u+0x801A0000u; // 801A5C98
  c->r[3]=0u+0x00000000u; // 801A5C9C
  c->r[5]=c->r[5]+0x000066A0u; // 801A5CA0
  c->r[4]=0u+0x00000000u; // 801A5CA4
  c->lr=0x801A5CACu; f_801AB7D0(c); // 801A5CA8
  goto L_801A5D5C; // 801A5CAC
L_801A5CB0:;
  c->r[31]=0u+0x00000000u; // 801A5CB0
  W32(c->r[13]+0xFFFFB278u,c->r[31]); // 801A5CB4
  c->r[3]=0u+0x00000000u; // 801A5CB8
  c->lr=0x801A5CC0u; f_801ACA90(c); // 801A5CBC
  c->lr=0x801A5CC4u; f_8018D6A0(c); // 801A5CC0
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A5CC4
  c->r[29]=c->r[3]|c->r[3]; // 801A5CC8
  cmpu(c,0,c->r[0],0x00000005u); // 801A5CCC
  if (crb(c,0)) { goto L_801A5CD8; } // 801A5CD0
  W32(c->r[13]+0xFFFFB260u,c->r[31]); // 801A5CD4
L_801A5CD8:;
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A5CD8
  c->r[31]=0u+0x802B0000u; // 801A5CDC
  c->r[3]=R32(c->r[13]+0xFFFFB260u); // 801A5CE0
  c->r[31]=c->r[31]+0x00006B80u; // 801A5CE4
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A5CE8
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A5CEC
  c->r[7]=0u+0x00000021u; // 801A5CF0
  c->r[5]=0u+0x00010000u; // 801A5CF4
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801A5CF8
  c->r[4]=0u+0x00000020u; // 801A5CFC
  c->r[6]=c->r[31]+c->r[6]; // 801A5D00
  W32(c->r[6]+0x0000001Cu,c->r[7]); // 801A5D04
  c->r[3]=c->r[31]+c->r[3]; // 801A5D08
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A5D0C
  W32(c->r[3]+0x00000020u,c->r[5]); // 801A5D10
  c->r[3]=c->r[31]+c->r[0]; // 801A5D14
  W32(c->r[3]+0x00000024u,c->r[4]); // 801A5D18
  c->lr=0x801A5D20u; f_801915E0(c); // 801A5D1C
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A5D20
  c->r[4]=R32(c->r[13]+0xFFFFB260u); // 801A5D24
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A5D28
  c->r[0]=c->r[4]+0x00000001u; // 801A5D2C
  W32(c->r[13]+0xFFFFB260u,c->r[0]); // 801A5D30
  c->r[4]=c->r[31]+c->r[5]; // 801A5D34
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 801A5D38
  c->r[3]=c->r[29]|c->r[29]; // 801A5D3C
  c->lr=0x801A5D44u; f_8018D6E0(c); // 801A5D40
  c->r[6]=0u+0x801A0000u; // 801A5D44
  c->r[3]=c->r[30]+0x00004BE0u; // 801A5D48
  c->r[6]=c->r[6]+0x00005D80u; // 801A5D4C
  c->r[4]=0u+0x00000020u; // 801A5D50
  c->r[5]=0u+0x00010000u; // 801A5D54
  c->lr=0x801A5D5Cu; f_801AB630(c); // 801A5D58
L_801A5D5C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801A5D5C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801A5D60
  c->r[30]=R32(c->r[1]+0x00000018u); // 801A5D64
  c->r[29]=R32(c->r[1]+0x00000014u); // 801A5D68
  c->lr=c->r[0]; // 801A5D6C
  c->r[1]=c->r[1]+0x00000020u; // 801A5D70
  return; // 801A5D74
}

// cbForStateReadingTOC
void f_801A5D80(Ctx* __restrict c) {
  trace_call(0x801A5D80u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A5D80
  c->r[0]=c->lr; // 801A5D84
  W32(c->r[1]+0x00000024u,c->r[0]); // 801A5D88
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801A5D8C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801A5D90
  W32(c->r[1]+0x00000014u,c->r[29]); // 801A5D94
  c->r[29]=c->r[3]|c->r[3]; // 801A5D98
  c->lr=0x801A5DA0u; f_8018D6A0(c); // 801A5D9C
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A5DA0
  cmps(c,0,(int32_t)c->r[0],0); // 801A5DA4
  if (!crb(c,2)) { goto L_801A5DBC; } // 801A5DA8
  c->r[4]=0u+0x802B0000u; // 801A5DAC
  c->r[4]=c->r[4]+0x00006B80u; // 801A5DB0
  W32(c->r[4]+0x00000078u,c->r[29]); // 801A5DB4
  goto L_801A5DD8; // 801A5DB8
L_801A5DBC:;
  c->r[4]=R32(c->r[13]+0xFFFFB260u); // 801A5DBC
  c->r[5]=0u+0x802B0000u; // 801A5DC0
  c->r[5]=c->r[5]+0x00006B80u; // 801A5DC4
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801A5DC8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A5DCC
  c->r[4]=c->r[5]+c->r[0]; // 801A5DD0
  W32(c->r[4]+0x00000028u,c->r[29]); // 801A5DD4
L_801A5DD8:;
  c->lr=0x801A5DDCu; f_8018D6E0(c); // 801A5DD8
  cmpu(c,0,c->r[29],0x00000010u); // 801A5DDC
  if (!crb(c,2)) { goto L_801A5DFC; } // 801A5DE0
  c->r[3]=0u+0x01230000u; // 801A5DE4
  c->r[4]=0u+0x801A0000u; // 801A5DE8
  c->r[3]=c->r[3]+0x00004568u; // 801A5DEC
  c->r[4]=c->r[4]+0x00004E20u; // 801A5DF0
  c->lr=0x801A5DF8u; f_801AA000(c); // 801A5DF4
  goto L_801A5F04; // 801A5DF8
L_801A5DFC:;
  cmpu(c,0,c->r[29],0x00000020u); // 801A5DFC
  if (!crb(c,2)) { goto L_801A5E1C; } // 801A5E00
  c->r[3]=0u+0x01230000u; // 801A5E04
  c->r[4]=0u+0x801A0000u; // 801A5E08
  c->r[3]=c->r[3]+0x00004569u; // 801A5E0C
  c->r[4]=c->r[4]+0x00004E20u; // 801A5E10
  c->lr=0x801A5E18u; f_801AA000(c); // 801A5E14
  goto L_801A5F04; // 801A5E18
L_801A5E1C:;
  c->r[0]=rotl(c->r[29],0)&0x00000001u; cr0(c,c->r[0]); // 801A5E1C
  if (crb(c,2)) { goto L_801A5EE8; } // 801A5E20
  c->r[4]=0u+0x802B0000u; // 801A5E24
  c->r[29]=0u+0x00000000u; // 801A5E28
  c->r[4]=c->r[4]+0x00006920u; // 801A5E2C
  W32(c->r[13]+0xFFFFB278u,c->r[29]); // 801A5E30
  c->r[3]=0u+0x00000000u; // 801A5E34
  W32(c->r[13]+0xFFFFB2B0u,c->r[4]); // 801A5E38
  c->lr=0x801A5E40u; f_801ACA90(c); // 801A5E3C
  c->lr=0x801A5E44u; f_8018D6A0(c); // 801A5E40
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A5E44
  c->r[30]=c->r[3]|c->r[3]; // 801A5E48
  cmpu(c,0,c->r[0],0x00000005u); // 801A5E4C
  if (crb(c,0)) { goto L_801A5E58; } // 801A5E50
  W32(c->r[13]+0xFFFFB260u,c->r[29]); // 801A5E54
L_801A5E58:;
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A5E58
  c->r[31]=0u+0x802B0000u; // 801A5E5C
  c->r[3]=R32(c->r[13]+0xFFFFB260u); // 801A5E60
  c->r[29]=0u+0x00010000u; // 801A5E64
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A5E68
  c->r[31]=c->r[31]+0x00006B80u; // 801A5E6C
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A5E70
  c->r[6]=0u+0x00000021u; // 801A5E74
  c->r[5]=c->r[29]+0x00000008u; // 801A5E78
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801A5E7C
  c->r[4]=c->r[31]+c->r[4]; // 801A5E80
  W32(c->r[4]+0x0000001Cu,c->r[6]); // 801A5E84
  c->r[3]=c->r[31]+c->r[3]; // 801A5E88
  c->r[4]=0u+0x00000020u; // 801A5E8C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A5E90
  W32(c->r[3]+0x00000020u,c->r[5]); // 801A5E94
  c->r[3]=c->r[31]+c->r[0]; // 801A5E98
  W32(c->r[3]+0x00000024u,c->r[4]); // 801A5E9C
  c->lr=0x801A5EA4u; f_801915E0(c); // 801A5EA0
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A5EA4
  c->r[4]=R32(c->r[13]+0xFFFFB260u); // 801A5EA8
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A5EAC
  c->r[0]=c->r[4]+0x00000001u; // 801A5EB0
  W32(c->r[13]+0xFFFFB260u,c->r[0]); // 801A5EB4
  c->r[4]=c->r[31]+c->r[5]; // 801A5EB8
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 801A5EBC
  c->r[3]=c->r[30]|c->r[30]; // 801A5EC0
  c->lr=0x801A5EC8u; f_8018D6E0(c); // 801A5EC4
  c->r[3]=0u+0x802B0000u; // 801A5EC8
  c->r[6]=0u+0x801A0000u; // 801A5ECC
  c->r[5]=c->r[29]+0x00000008u; // 801A5ED0
  c->r[4]=0u+0x00000020u; // 801A5ED4
  c->r[3]=c->r[3]+0x00006940u; // 801A5ED8
  c->r[6]=c->r[6]+0x00005F20u; // 801A5EDC
  c->lr=0x801A5EE4u; f_801AB630(c); // 801A5EE0
  goto L_801A5F04; // 801A5EE4
L_801A5EE8:;
  c->r[3]=0u+0x00000027u; // 801A5EE8
  c->r[4]=0u+0x00000000u; // 801A5EEC
  c->r[5]=0u+0x00000000u; // 801A5EF0
  c->lr=0x801A5EF8u; f_801A47A0(c); // 801A5EF4
  c->r[3]=0u+0x801A0000u; // 801A5EF8
  c->r[3]=c->r[3]+0x00005030u; // 801A5EFC
  c->lr=0x801A5F04u; f_801ABAE0(c); // 801A5F00
L_801A5F04:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801A5F04
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801A5F08
  c->r[30]=R32(c->r[1]+0x00000018u); // 801A5F0C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801A5F10
  c->lr=c->r[0]; // 801A5F14
  c->r[1]=c->r[1]+0x00000020u; // 801A5F18
  return; // 801A5F1C
}

// cbForStateReadingPartitionInfo
void f_801A5F20(Ctx* __restrict c) {
  trace_call(0x801A5F20u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A5F20
  c->r[0]=c->lr; // 801A5F24
  W32(c->r[1]+0x00000024u,c->r[0]); // 801A5F28
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801A5F2C
  c->r[31]=0u+0x802B0000u; // 801A5F30
  c->r[31]=c->r[31]+0x00001D40u; // 801A5F34
  W32(c->r[1]+0x00000018u,c->r[30]); // 801A5F38
  W32(c->r[1]+0x00000014u,c->r[29]); // 801A5F3C
  W32(c->r[1]+0x00000010u,c->r[28]); // 801A5F40
  c->r[28]=c->r[3]|c->r[3]; // 801A5F44
  c->lr=0x801A5F4Cu; f_8018D6A0(c); // 801A5F48
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A5F4C
  cmps(c,0,(int32_t)c->r[0],0); // 801A5F50
  if (!crb(c,2)) { goto L_801A5F68; } // 801A5F54
  c->r[4]=0u+0x802B0000u; // 801A5F58
  c->r[4]=c->r[4]+0x00006B80u; // 801A5F5C
  W32(c->r[4]+0x00000078u,c->r[28]); // 801A5F60
  goto L_801A5F84; // 801A5F64
L_801A5F68:;
  c->r[4]=R32(c->r[13]+0xFFFFB260u); // 801A5F68
  c->r[5]=0u+0x802B0000u; // 801A5F6C
  c->r[5]=c->r[5]+0x00006B80u; // 801A5F70
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801A5F74
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A5F78
  c->r[4]=c->r[5]+c->r[0]; // 801A5F7C
  W32(c->r[4]+0x00000028u,c->r[28]); // 801A5F80
L_801A5F84:;
  c->lr=0x801A5F88u; f_8018D6E0(c); // 801A5F84
  cmpu(c,0,c->r[28],0x00000010u); // 801A5F88
  if (!crb(c,2)) { goto L_801A5FA8; } // 801A5F8C
  c->r[3]=0u+0x01230000u; // 801A5F90
  c->r[4]=0u+0x801A0000u; // 801A5F94
  c->r[3]=c->r[3]+0x00004568u; // 801A5F98
  c->r[4]=c->r[4]+0x00004E20u; // 801A5F9C
  c->lr=0x801A5FA4u; f_801AA000(c); // 801A5FA0
  goto L_801A637C; // 801A5FA4
L_801A5FA8:;
  cmpu(c,0,c->r[28],0x00000020u); // 801A5FA8
  if (!crb(c,2)) { goto L_801A5FC8; } // 801A5FAC
  c->r[3]=0u+0x01230000u; // 801A5FB0
  c->r[4]=0u+0x801A0000u; // 801A5FB4
  c->r[3]=c->r[3]+0x00004569u; // 801A5FB8
  c->r[4]=c->r[4]+0x00004E20u; // 801A5FBC
  c->lr=0x801A5FC4u; f_801AA000(c); // 801A5FC0
  goto L_801A637C; // 801A5FC4
L_801A5FC8:;
  c->r[0]=rotl(c->r[28],0)&0x00000001u; cr0(c,c->r[0]); // 801A5FC8
  if (crb(c,2)) { goto L_801A6360; } // 801A5FCC
  c->r[0]=0u+0x00000000u; // 801A5FD0
  c->r[6]=c->r[31]+0x00004C00u; // 801A5FD4
  W32(c->r[13]+0xFFFFB278u,c->r[0]); // 801A5FD8
  c->r[5]=0u+0x80000000u; // 801A5FDC
  W32(c->r[13]+0xFFFFB2ACu,c->r[6]); // 801A5FE0
  W32(c->r[13]+0xFFFFB2A8u,c->r[0]); // 801A5FE4
  c->r[0]=R32(c->r[5]+0x00003198u); // 801A5FE8
  cmps(c,0,(int32_t)c->r[0],0); // 801A5FEC
  if (crb(c,2)) { goto L_801A6010; } // 801A5FF0
  W32(c->r[13]+0xFFFFB2A8u,c->r[6]); // 801A5FF4
  c->r[0]=R32(c->r[5]+0x00003194u); // 801A5FF8
  W32(c->r[6]+0x00000004u,c->r[0]); // 801A5FFC
  c->r[3]=R32(c->r[13]+0xFFFFB2A8u); // 801A6000
  c->r[0]=R32(c->r[5]+0x00003198u); // 801A6004
  W32(c->r[3]+0x00000000u,c->r[0]); // 801A6008
  goto L_801A6050; // 801A600C
L_801A6010:;
  c->r[3]=R32(c->r[13]+0xFFFFB2B0u); // 801A6010
  c->r[7]=0u+0x00000000u; // 801A6014
  goto L_801A6040; // 801A6018
  c->r[0]=c->r[0]|0x00000000u; // 801A601C
L_801A6020:;
  c->r[4]=R32(c->r[6]+0x00000004u); // 801A6020
  c->r[0]=R32(c->r[5]+0x00003194u); // 801A6024
  cmpu(c,0,c->r[4],c->r[0]); // 801A6028
  if (!crb(c,2)) { goto L_801A6034; } // 801A602C
  W32(c->r[13]+0xFFFFB2A8u,c->r[6]); // 801A6030
L_801A6034:;
  c->r[6]=c->r[6]+0x00000008u; // 801A6034
  W32(c->r[13]+0xFFFFB2ACu,c->r[6]); // 801A6038
  c->r[7]=c->r[7]+0x00000001u; // 801A603C
L_801A6040:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801A6040
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[7]; // 801A6044
  cmpu(c,0,c->r[4],c->r[0]); // 801A6048
  if (crb(c,0)) { IRQCHK(c); goto L_801A6020; } // 801A604C
L_801A6050:;
  c->r[0]=R32(c->r[13]+0xFFFFB2A8u); // 801A6050
  cmps(c,0,(int32_t)c->r[0],0); // 801A6054
  if (crb(c,2)) { goto L_801A6264; } // 801A6058
  c->r[0]=R32(c->r[13]+0xFFFFB2E4u); // 801A605C
  cmps(c,0,(int32_t)c->r[0],3); // 801A6060
  if (crb(c,2)) { goto L_801A606C; } // 801A6064
  goto L_801A6168; // 801A6068
L_801A606C:;
  c->r[29]=0u+0x00000000u; // 801A606C
  W32(c->r[13]+0xFFFFB278u,c->r[29]); // 801A6070
  c->r[3]=0u+0x00000000u; // 801A6074
  c->lr=0x801A607Cu; f_801ACA90(c); // 801A6078
  c->r[3]=R32(c->r[13]+0xFFFFB2A8u); // 801A607C
  c->r[28]=R32(c->r[3]+0x00000000u); // 801A6080
  c->lr=0x801A6088u; f_8018D6A0(c); // 801A6084
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A6088
  c->r[30]=c->r[3]|c->r[3]; // 801A608C
  cmpu(c,0,c->r[0],0x00000005u); // 801A6090
  if (crb(c,0)) { goto L_801A609C; } // 801A6094
  W32(c->r[13]+0xFFFFB260u,c->r[29]); // 801A6098
L_801A609C:;
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A609C
  c->r[29]=0u+0x802B0000u; // 801A60A0
  c->r[3]=R32(c->r[13]+0xFFFFB260u); // 801A60A4
  c->r[29]=c->r[29]+0x00006B80u; // 801A60A8
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A60AC
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A60B0
  c->r[6]=0u+0x00000022u; // 801A60B4
  c->r[4]=0u+0x00000000u; // 801A60B8
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801A60BC
  c->r[5]=c->r[29]+c->r[5]; // 801A60C0
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 801A60C4
  c->r[3]=c->r[29]+c->r[3]; // 801A60C8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A60CC
  W32(c->r[3]+0x00000020u,c->r[28]); // 801A60D0
  c->r[3]=c->r[29]+c->r[0]; // 801A60D4
  W32(c->r[3]+0x00000024u,c->r[4]); // 801A60D8
  c->lr=0x801A60E0u; f_801915E0(c); // 801A60DC
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A60E0
  c->r[4]=R32(c->r[13]+0xFFFFB260u); // 801A60E4
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A60E8
  c->r[0]=c->r[4]+0x00000001u; // 801A60EC
  W32(c->r[13]+0xFFFFB260u,c->r[0]); // 801A60F0
  c->r[4]=c->r[29]+c->r[5]; // 801A60F4
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 801A60F8
  c->r[3]=c->r[30]|c->r[30]; // 801A60FC
  c->lr=0x801A6104u; f_8018D6E0(c); // 801A6100
  c->r[3]=0u+0x80000000u; // 801A6104
  c->r[0]=R8(c->r[3]+0x00003187u); // 801A6108
  cmpu(c,0,c->r[0],0x00000080u); // 801A610C
  if (!crb(c,2)) { goto L_801A6140; } // 801A6110
  c->r[3]=R32(c->r[13]+0xFFFFB2A8u); // 801A6114
  c->r[9]=0u+0x801A0000u; // 801A6118
  c->r[5]=R32(c->r[13]+0xFFFFB2C0u); // 801A611C
  c->r[4]=c->r[31]+0x00000000u; // 801A6120
  c->r[3]=R32(c->r[3]+0x00000000u); // 801A6124
  c->r[6]=c->r[31]+0x00000100u; // 801A6128
  c->r[9]=c->r[9]+0x000063A0u; // 801A612C
  c->r[7]=0u+0x00000000u; // 801A6130
  c->r[8]=0u+0x00000000u; // 801A6134
  c->lr=0x801A613Cu; f_801AADA0(c); // 801A6138
  goto L_801A637C; // 801A613C
L_801A6140:;
  c->r[3]=R32(c->r[13]+0xFFFFB2A8u); // 801A6140
  c->r[8]=0u+0x801A0000u; // 801A6144
  c->r[7]=c->r[31]+0x00000100u; // 801A6148
  c->r[4]=0u+0x00000000u; // 801A614C
  c->r[3]=R32(c->r[3]+0x00000000u); // 801A6150
  c->r[8]=c->r[8]+0x000063A0u; // 801A6154
  c->r[5]=0u+0x00000000u; // 801A6158
  c->r[6]=0u+0x00000000u; // 801A615C
  c->lr=0x801A6164u; f_801AAB30(c); // 801A6160
  goto L_801A637C; // 801A6164
L_801A6168:;
  c->r[29]=0u+0x00000000u; // 801A6168
  W32(c->r[13]+0xFFFFB278u,c->r[29]); // 801A616C
  c->r[3]=0u+0x00000000u; // 801A6170
  c->lr=0x801A6178u; f_801ACA90(c); // 801A6174
  c->r[3]=R32(c->r[13]+0xFFFFB2A8u); // 801A6178
  c->r[28]=R32(c->r[3]+0x00000000u); // 801A617C
  c->lr=0x801A6184u; f_8018D6A0(c); // 801A6180
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A6184
  c->r[30]=c->r[3]|c->r[3]; // 801A6188
  cmpu(c,0,c->r[0],0x00000005u); // 801A618C
  if (crb(c,0)) { goto L_801A6198; } // 801A6190
  W32(c->r[13]+0xFFFFB260u,c->r[29]); // 801A6194
L_801A6198:;
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A6198
  c->r[29]=0u+0x802B0000u; // 801A619C
  c->r[3]=R32(c->r[13]+0xFFFFB260u); // 801A61A0
  c->r[29]=c->r[29]+0x00006B80u; // 801A61A4
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A61A8
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A61AC
  c->r[6]=0u+0x00000022u; // 801A61B0
  c->r[4]=0u+0x00000000u; // 801A61B4
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801A61B8
  c->r[5]=c->r[29]+c->r[5]; // 801A61BC
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 801A61C0
  c->r[3]=c->r[29]+c->r[3]; // 801A61C4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A61C8
  W32(c->r[3]+0x00000020u,c->r[28]); // 801A61CC
  c->r[3]=c->r[29]+c->r[0]; // 801A61D0
  W32(c->r[3]+0x00000024u,c->r[4]); // 801A61D4
  c->lr=0x801A61DCu; f_801915E0(c); // 801A61D8
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A61DC
  c->r[4]=R32(c->r[13]+0xFFFFB260u); // 801A61E0
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A61E4
  c->r[0]=c->r[4]+0x00000001u; // 801A61E8
  W32(c->r[13]+0xFFFFB260u,c->r[0]); // 801A61EC
  c->r[4]=c->r[29]+c->r[5]; // 801A61F0
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 801A61F4
  c->r[3]=c->r[30]|c->r[30]; // 801A61F8
  c->lr=0x801A6200u; f_8018D6E0(c); // 801A61FC
  c->r[3]=0u+0x80000000u; // 801A6200
  c->r[0]=R8(c->r[3]+0x00003187u); // 801A6204
  cmpu(c,0,c->r[0],0x00000080u); // 801A6208
  if (!crb(c,2)) { goto L_801A623C; } // 801A620C
  c->r[3]=R32(c->r[13]+0xFFFFB2A8u); // 801A6210
  c->r[9]=0u+0x801A0000u; // 801A6214
  c->r[5]=R32(c->r[13]+0xFFFFB2C0u); // 801A6218
  c->r[4]=c->r[31]+0x00000000u; // 801A621C
  c->r[3]=R32(c->r[3]+0x00000000u); // 801A6220
  c->r[6]=c->r[31]+0x00000100u; // 801A6224
  c->r[9]=c->r[9]+0x00006530u; // 801A6228
  c->r[7]=0u+0x00000000u; // 801A622C
  c->r[8]=0u+0x00000000u; // 801A6230
  c->lr=0x801A6238u; f_801AADA0(c); // 801A6234
  goto L_801A637C; // 801A6238
L_801A623C:;
  c->r[3]=R32(c->r[13]+0xFFFFB2A8u); // 801A623C
  c->r[8]=0u+0x801A0000u; // 801A6240
  c->r[7]=c->r[31]+0x00000100u; // 801A6244
  c->r[4]=0u+0x00000000u; // 801A6248
  c->r[3]=R32(c->r[3]+0x00000000u); // 801A624C
  c->r[8]=c->r[8]+0x00006530u; // 801A6250
  c->r[5]=0u+0x00000000u; // 801A6254
  c->r[6]=0u+0x00000000u; // 801A6258
  c->lr=0x801A6260u; f_801AAB30(c); // 801A625C
  goto L_801A637C; // 801A6260
L_801A6264:;
  c->r[0]=R32(c->r[13]+0xFFFFB270u); // 801A6264
  cmps(c,0,(int32_t)c->r[0],0); // 801A6268
  if (crb(c,2)) { goto L_801A62D8; } // 801A626C
  c->r[28]=R32(c->r[13]+0xFFFFB2F0u); // 801A6270
  c->r[3]=c->r[31]+0x00004B20u; // 801A6274
  c->r[0]=0u+0x00000001u; // 801A6278
  W32(c->r[13]+0xFFFFB274u,c->r[0]); // 801A627C
  c->r[4]=0u+0x00000000u; // 801A6280
  W32(c->r[13]+0xFFFFB270u,c->r[4]); // 801A6284
  c->r[0]=0u+0x0000000Au; // 801A6288
  W32(c->r[13]+0xFFFFB2F0u,c->r[3]); // 801A628C
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 801A6290
  c->r[12]=R32(c->r[28]+0x00000028u); // 801A6294
  cmps(c,0,(int32_t)c->r[12],0); // 801A6298
  if (crb(c,2)) { goto L_801A62B0; } // 801A629C
  c->r[4]=c->r[28]|c->r[28]; // 801A62A0
  c->r[3]=0u+0xFFFFFFFDu; // 801A62A4
  c->ctr=c->r[12]; // 801A62A8
  if (true) { c->lr=0x801A62B0u; dispatch(c,c->ctr); } // 801A62AC
L_801A62B0:;
  c->r[12]=R32(c->r[13]+0xFFFFB2E0u); // 801A62B0
  cmps(c,0,(int32_t)c->r[12],0); // 801A62B4
  if (crb(c,2)) { goto L_801A62CC; } // 801A62B8
  c->r[4]=c->r[28]|c->r[28]; // 801A62BC
  c->r[3]=0u+0x00000000u; // 801A62C0
  c->ctr=c->r[12]; // 801A62C4
  if (true) { c->lr=0x801A62CCu; dispatch(c,c->ctr); } // 801A62C8
L_801A62CC:;
  c->lr=0x801A62D0u; f_801A7550(c); // 801A62CC
  c->r[0]=0u+0x00000001u; // 801A62D0
  goto L_801A62DC; // 801A62D4
L_801A62D8:;
  c->r[0]=0u+0x00000000u; // 801A62D8
L_801A62DC:;
  cmps(c,0,(int32_t)c->r[0],0); // 801A62DC
  if (!crb(c,2)) { goto L_801A637C; } // 801A62E0
  c->r[4]=R32(c->r[13]+0xFFFFB2F0u); // 801A62E4
  c->r[0]=0u+0x00000006u; // 801A62E8
  c->r[3]=0u+0x00000001u; // 801A62EC
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 801A62F0
  c->r[0]=R32(c->r[13]+0xFFFFB284u); // 801A62F4
  W32(c->r[13]+0xFFFFB2D0u,c->r[3]); // 801A62F8
  cmps(c,0,(int32_t)c->r[0],0); // 801A62FC
  if (!crb(c,2)) { goto L_801A637C; } // 801A6300
  c->r[0]=R32(c->r[13]+0xFFFFB288u); // 801A6304
  cmps(c,0,(int32_t)c->r[0],0); // 801A6308
  if (!crb(c,2)) { goto L_801A637C; } // 801A630C
  W32(c->r[13]+0xFFFFB284u,c->r[3]); // 801A6310
  c->r[3]=c->r[31]+0x00004B80u; // 801A6314
  c->lr=0x801A631Cu; f_80187C40(c); // 801A6318
  c->lr=0x801A6320u; f_801915E0(c); // 801A631C
  c->r[5]=0u+0x80000000u; // 801A6320
  c->r[4]=0u+0x10620000u; // 801A6324
  c->r[0]=R32(c->r[5]+0x000000F8u); // 801A6328
  c->r[9]=0u+0x801A0000u; // 801A632C
  c->r[6]=c->r[3]|c->r[3]; // 801A6330
  c->r[4]=c->r[4]+0x00004DD3u; // 801A6334
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801A6338
  c->r[3]=c->r[31]+0x00004B80u; // 801A633C
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 801A6340
  c->r[9]=c->r[9]+0x00007520u; // 801A6344
  c->r[5]=0u+0x00000000u; // 801A6348
  c->r[7]=0u+0x00000000u; // 801A634C
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 801A6350
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 801A6354
  c->lr=0x801A635Cu; f_80187F10(c); // 801A6358
  goto L_801A637C; // 801A635C
L_801A6360:;
  c->r[3]=0u+0x00000027u; // 801A6360
  c->r[4]=0u+0x00000000u; // 801A6364
  c->r[5]=0u+0x00000000u; // 801A6368
  c->lr=0x801A6370u; f_801A47A0(c); // 801A636C
  c->r[3]=0u+0x801A0000u; // 801A6370
  c->r[3]=c->r[3]+0x00005030u; // 801A6374
  c->lr=0x801A637Cu; f_801ABAE0(c); // 801A6378
L_801A637C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801A637C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801A6380
  c->r[30]=R32(c->r[1]+0x00000018u); // 801A6384
  c->r[29]=R32(c->r[1]+0x00000014u); // 801A6388
  c->r[28]=R32(c->r[1]+0x00000010u); // 801A638C
  c->lr=c->r[0]; // 801A6390
  c->r[1]=c->r[1]+0x00000020u; // 801A6394
  return; // 801A6398
}

// cbForStateOpenPartition
void f_801A63A0(Ctx* __restrict c) {
  trace_call(0x801A63A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A63A0
  c->r[0]=c->lr; // 801A63A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A63A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A63AC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801A63B0
  c->r[30]=c->r[3]|c->r[3]; // 801A63B4
  c->lr=0x801A63BCu; f_8018D6A0(c); // 801A63B8
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A63BC
  cmps(c,0,(int32_t)c->r[0],0); // 801A63C0
  if (!crb(c,2)) { goto L_801A63D8; } // 801A63C4
  c->r[4]=0u+0x802B0000u; // 801A63C8
  c->r[4]=c->r[4]+0x00006B80u; // 801A63CC
  W32(c->r[4]+0x00000078u,c->r[30]); // 801A63D0
  goto L_801A63F4; // 801A63D4
L_801A63D8:;
  c->r[4]=R32(c->r[13]+0xFFFFB260u); // 801A63D8
  c->r[5]=0u+0x802B0000u; // 801A63DC
  c->r[5]=c->r[5]+0x00006B80u; // 801A63E0
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801A63E4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A63E8
  c->r[4]=c->r[5]+c->r[0]; // 801A63EC
  W32(c->r[4]+0x00000028u,c->r[30]); // 801A63F0
L_801A63F4:;
  c->lr=0x801A63F8u; f_8018D6E0(c); // 801A63F4
  cmpu(c,0,c->r[30],0x00000010u); // 801A63F8
  if (!crb(c,2)) { goto L_801A6418; } // 801A63FC
  c->r[3]=0u+0x01230000u; // 801A6400
  c->r[4]=0u+0x801A0000u; // 801A6404
  c->r[3]=c->r[3]+0x00004568u; // 801A6408
  c->r[4]=c->r[4]+0x00004E20u; // 801A640C
  c->lr=0x801A6414u; f_801AA000(c); // 801A6410
  goto L_801A6510; // 801A6414
L_801A6418:;
  cmpu(c,0,c->r[30],0x00000020u); // 801A6418
  if (!crb(c,2)) { goto L_801A6438; } // 801A641C
  c->r[3]=0u+0x01230000u; // 801A6420
  c->r[4]=0u+0x801A0000u; // 801A6424
  c->r[3]=c->r[3]+0x00004569u; // 801A6428
  c->r[4]=c->r[4]+0x00004E20u; // 801A642C
  c->lr=0x801A6434u; f_801AA000(c); // 801A6430
  goto L_801A6510; // 801A6434
L_801A6438:;
  c->r[0]=rotl(c->r[30],0)&0x00000001u; cr0(c,c->r[0]); // 801A6438
  if (crb(c,2)) { goto L_801A64F4; } // 801A643C
  c->r[30]=0u+0x00000000u; // 801A6440
  W32(c->r[13]+0xFFFFB278u,c->r[30]); // 801A6444
  c->r[3]=0u+0x00000000u; // 801A6448
  c->lr=0x801A6450u; f_801ACA90(c); // 801A644C
  c->lr=0x801A6454u; f_8018D6A0(c); // 801A6450
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A6454
  c->r[31]=c->r[3]|c->r[3]; // 801A6458
  cmpu(c,0,c->r[0],0x00000005u); // 801A645C
  if (crb(c,0)) { goto L_801A6468; } // 801A6460
  W32(c->r[13]+0xFFFFB260u,c->r[30]); // 801A6464
L_801A6468:;
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A6468
  c->r[30]=0u+0x802B0000u; // 801A646C
  c->r[3]=R32(c->r[13]+0xFFFFB260u); // 801A6470
  c->r[30]=c->r[30]+0x00006B80u; // 801A6474
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A6478
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A647C
  c->r[7]=0u+0x00000001u; // 801A6480
  c->r[5]=0u+0x00000108u; // 801A6484
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801A6488
  c->r[4]=0u+0x00000020u; // 801A648C
  c->r[6]=c->r[30]+c->r[6]; // 801A6490
  W32(c->r[6]+0x0000001Cu,c->r[7]); // 801A6494
  c->r[3]=c->r[30]+c->r[3]; // 801A6498
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A649C
  W32(c->r[3]+0x00000020u,c->r[5]); // 801A64A0
  c->r[3]=c->r[30]+c->r[0]; // 801A64A4
  W32(c->r[3]+0x00000024u,c->r[4]); // 801A64A8
  c->lr=0x801A64B0u; f_801915E0(c); // 801A64AC
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A64B0
  c->r[4]=R32(c->r[13]+0xFFFFB260u); // 801A64B4
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A64B8
  c->r[0]=c->r[4]+0x00000001u; // 801A64BC
  W32(c->r[13]+0xFFFFB260u,c->r[0]); // 801A64C0
  c->r[4]=c->r[30]+c->r[5]; // 801A64C4
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 801A64C8
  c->r[3]=c->r[31]|c->r[31]; // 801A64CC
  c->lr=0x801A64D4u; f_8018D6E0(c); // 801A64D0
  c->r[3]=0u+0x802B0000u; // 801A64D4
  c->r[6]=0u+0x801A0000u; // 801A64D8
  c->r[3]=c->r[3]+0x00006840u; // 801A64DC
  c->r[4]=0u+0x00000020u; // 801A64E0
  c->r[6]=c->r[6]+0x00006870u; // 801A64E4
  c->r[5]=0u+0x00000108u; // 801A64E8
  c->lr=0x801A64F0u; f_801AC2B0(c); // 801A64EC
  goto L_801A6510; // 801A64F0
L_801A64F4:;
  c->r[3]=0u+0x00000027u; // 801A64F4
  c->r[4]=0u+0x00000000u; // 801A64F8
  c->r[5]=0u+0x00000000u; // 801A64FC
  c->lr=0x801A6504u; f_801A47A0(c); // 801A6500
  c->r[3]=0u+0x801A0000u; // 801A6504
  c->r[3]=c->r[3]+0x00005030u; // 801A6508
  c->lr=0x801A6510u; f_801ABAE0(c); // 801A650C
L_801A6510:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A6510
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A6514
  c->r[30]=R32(c->r[1]+0x00000008u); // 801A6518
  c->lr=c->r[0]; // 801A651C
  c->r[1]=c->r[1]+0x00000010u; // 801A6520
  return; // 801A6524
}

// cbForStateOpenPartition2
void f_801A6530(Ctx* __restrict c) {
  trace_call(0x801A6530u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A6530
  c->r[0]=c->lr; // 801A6534
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A6538
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A653C
  c->r[31]=c->r[3]|c->r[3]; // 801A6540
  c->lr=0x801A6548u; f_8018D6A0(c); // 801A6544
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A6548
  cmps(c,0,(int32_t)c->r[0],0); // 801A654C
  if (!crb(c,2)) { goto L_801A6564; } // 801A6550
  c->r[4]=0u+0x802B0000u; // 801A6554
  c->r[4]=c->r[4]+0x00006B80u; // 801A6558
  W32(c->r[4]+0x00000078u,c->r[31]); // 801A655C
  goto L_801A657C; // 801A6560
L_801A6564:;
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A6564
  c->r[4]=0u+0x802B0000u; // 801A6568
  c->r[4]=c->r[4]+0x00006B80u; // 801A656C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A6570
  c->r[4]=c->r[4]+c->r[0]; // 801A6574
  W32(c->r[4]+0x00000014u,c->r[31]); // 801A6578
L_801A657C:;
  c->lr=0x801A6580u; f_8018D6E0(c); // 801A657C
  cmpu(c,0,c->r[31],0x00000010u); // 801A6580
  if (!crb(c,2)) { goto L_801A65A0; } // 801A6584
  c->r[3]=0u+0x01230000u; // 801A6588
  c->r[4]=0u+0x801A0000u; // 801A658C
  c->r[3]=c->r[3]+0x00004568u; // 801A6590
  c->r[4]=c->r[4]+0x00004E20u; // 801A6594
  c->lr=0x801A659Cu; f_801AA000(c); // 801A6598
  goto L_801A6680; // 801A659C
L_801A65A0:;
  cmpu(c,0,c->r[31],0x00000020u); // 801A65A0
  if (!crb(c,2)) { goto L_801A65C0; } // 801A65A4
  c->r[3]=0u+0x01230000u; // 801A65A8
  c->r[4]=0u+0x801A0000u; // 801A65AC
  c->r[3]=c->r[3]+0x00004569u; // 801A65B0
  c->r[4]=c->r[4]+0x00004E20u; // 801A65B4
  c->lr=0x801A65BCu; f_801AA000(c); // 801A65B8
  goto L_801A6680; // 801A65BC
L_801A65C0:;
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 801A65C0
  if (crb(c,2)) { goto L_801A6664; } // 801A65C4
  c->r[4]=0u+0x00000000u; // 801A65C8
  W32(c->r[13]+0xFFFFB278u,c->r[4]); // 801A65CC
  c->r[0]=R32(c->r[13]+0xFFFFB270u); // 801A65D0
  cmps(c,0,(int32_t)c->r[0],0); // 801A65D4
  if (crb(c,2)) { goto L_801A6640; } // 801A65D8
  c->r[31]=R32(c->r[13]+0xFFFFB2F0u); // 801A65DC
  c->r[3]=0u+0x802B0000u; // 801A65E0
  W32(c->r[13]+0xFFFFB274u,c->r[4]); // 801A65E4
  c->r[3]=c->r[3]+0x00006860u; // 801A65E8
  c->r[0]=0u+0x0000000Au; // 801A65EC
  W32(c->r[13]+0xFFFFB270u,c->r[4]); // 801A65F0
  W32(c->r[13]+0xFFFFB2F0u,c->r[3]); // 801A65F4
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801A65F8
  c->r[12]=R32(c->r[31]+0x00000028u); // 801A65FC
  cmps(c,0,(int32_t)c->r[12],0); // 801A6600
  if (crb(c,2)) { goto L_801A6618; } // 801A6604
  c->r[4]=c->r[31]|c->r[31]; // 801A6608
  c->r[3]=0u+0xFFFFFFFDu; // 801A660C
  c->ctr=c->r[12]; // 801A6610
  if (true) { c->lr=0x801A6618u; dispatch(c,c->ctr); } // 801A6614
L_801A6618:;
  c->r[12]=R32(c->r[13]+0xFFFFB2E0u); // 801A6618
  cmps(c,0,(int32_t)c->r[12],0); // 801A661C
  if (crb(c,2)) { goto L_801A6634; } // 801A6620
  c->r[4]=c->r[31]|c->r[31]; // 801A6624
  c->r[3]=0u+0x00000000u; // 801A6628
  c->ctr=c->r[12]; // 801A662C
  if (true) { c->lr=0x801A6634u; dispatch(c,c->ctr); } // 801A6630
L_801A6634:;
  c->lr=0x801A6638u; f_801A7550(c); // 801A6634
  c->r[0]=0u+0x00000001u; // 801A6638
  goto L_801A6644; // 801A663C
L_801A6640:;
  c->r[0]=0u+0x00000000u; // 801A6640
L_801A6644:;
  cmps(c,0,(int32_t)c->r[0],0); // 801A6644
  if (!crb(c,2)) { goto L_801A6680; } // 801A6648
  c->r[3]=R32(c->r[13]+0xFFFFB2F0u); // 801A664C
  c->r[0]=0u+0x00000001u; // 801A6650
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801A6654
  c->r[3]=R32(c->r[13]+0xFFFFB2F0u); // 801A6658
  c->lr=0x801A6660u; f_801A7870(c); // 801A665C
  goto L_801A6680; // 801A6660
L_801A6664:;
  c->r[3]=0u+0x00000027u; // 801A6664
  c->r[4]=0u+0x00000000u; // 801A6668
  c->r[5]=0u+0x00000000u; // 801A666C
  c->lr=0x801A6674u; f_801A47A0(c); // 801A6670
  c->r[3]=0u+0x801A0000u; // 801A6674
  c->r[3]=c->r[3]+0x00005030u; // 801A6678
  c->lr=0x801A6680u; f_801ABAE0(c); // 801A667C
L_801A6680:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A6680
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A6684
  c->lr=c->r[0]; // 801A6688
  c->r[1]=c->r[1]+0x00000010u; // 801A668C
  return; // 801A6690
}

// cbForStateCheckID1
void f_801A66A0(Ctx* __restrict c) {
  trace_call(0x801A66A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A66A0
  c->r[0]=c->lr; // 801A66A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A66A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A66AC
  c->r[31]=c->r[3]|c->r[3]; // 801A66B0
  c->lr=0x801A66B8u; f_8018D6A0(c); // 801A66B4
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A66B8
  cmps(c,0,(int32_t)c->r[0],0); // 801A66BC
  if (!crb(c,2)) { goto L_801A66D4; } // 801A66C0
  c->r[4]=0u+0x802B0000u; // 801A66C4
  c->r[4]=c->r[4]+0x00006B80u; // 801A66C8
  W32(c->r[4]+0x00000078u,c->r[31]); // 801A66CC
  goto L_801A66EC; // 801A66D0
L_801A66D4:;
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A66D4
  c->r[4]=0u+0x802B0000u; // 801A66D8
  c->r[4]=c->r[4]+0x00006B80u; // 801A66DC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A66E0
  c->r[4]=c->r[4]+c->r[0]; // 801A66E4
  W32(c->r[4]+0x00000014u,c->r[31]); // 801A66E8
L_801A66EC:;
  c->lr=0x801A66F0u; f_8018D6E0(c); // 801A66EC
  cmpu(c,0,c->r[31],0x00000010u); // 801A66F0
  if (!crb(c,2)) { goto L_801A6710; } // 801A66F4
  c->r[3]=0u+0x01230000u; // 801A66F8
  c->r[4]=0u+0x801A0000u; // 801A66FC
  c->r[3]=c->r[3]+0x00004568u; // 801A6700
  c->r[4]=c->r[4]+0x00004E20u; // 801A6704
  c->lr=0x801A670Cu; f_801AA000(c); // 801A6708
  goto L_801A6854; // 801A670C
L_801A6710:;
  cmpu(c,0,c->r[31],0x00000020u); // 801A6710
  if (!crb(c,2)) { goto L_801A6730; } // 801A6714
  c->r[3]=0u+0x01230000u; // 801A6718
  c->r[4]=0u+0x801A0000u; // 801A671C
  c->r[3]=c->r[3]+0x00004569u; // 801A6720
  c->r[4]=c->r[4]+0x00004E20u; // 801A6724
  c->lr=0x801A672Cu; f_801AA000(c); // 801A6728
  goto L_801A6854; // 801A672C
L_801A6730:;
  c->r[0]=rotl(c->r[31],0)&0x00000002u; cr0(c,c->r[0]); // 801A6730
  if (crb(c,2)) { goto L_801A6750; } // 801A6734
  c->r[3]=0u+0x01230000u; // 801A6738
  c->r[4]=0u+0x801A0000u; // 801A673C
  c->r[3]=c->r[3]+0x00004567u; // 801A6740
  c->r[4]=c->r[4]+0x00004E00u; // 801A6744
  c->lr=0x801A674Cu; f_801AA000(c); // 801A6748
  goto L_801A6854; // 801A674C
L_801A6750:;
  c->r[4]=0u+0x00000000u; // 801A6750
  W32(c->r[13]+0xFFFFB278u,c->r[4]); // 801A6754
  c->r[0]=R32(c->r[13]+0xFFFFB270u); // 801A6758
  cmps(c,0,(int32_t)c->r[0],0); // 801A675C
  if (crb(c,2)) { goto L_801A67CC; } // 801A6760
  c->r[31]=R32(c->r[13]+0xFFFFB2F0u); // 801A6764
  c->r[3]=0u+0x802B0000u; // 801A6768
  c->r[3]=c->r[3]+0x00006860u; // 801A676C
  c->r[0]=0u+0x00000001u; // 801A6770
  W32(c->r[13]+0xFFFFB274u,c->r[0]); // 801A6774
  c->r[0]=0u+0x0000000Au; // 801A6778
  W32(c->r[13]+0xFFFFB270u,c->r[4]); // 801A677C
  W32(c->r[13]+0xFFFFB2F0u,c->r[3]); // 801A6780
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801A6784
  c->r[12]=R32(c->r[31]+0x00000028u); // 801A6788
  cmps(c,0,(int32_t)c->r[12],0); // 801A678C
  if (crb(c,2)) { goto L_801A67A4; } // 801A6790
  c->r[4]=c->r[31]|c->r[31]; // 801A6794
  c->r[3]=0u+0xFFFFFFFDu; // 801A6798
  c->ctr=c->r[12]; // 801A679C
  if (true) { c->lr=0x801A67A4u; dispatch(c,c->ctr); } // 801A67A0
L_801A67A4:;
  c->r[12]=R32(c->r[13]+0xFFFFB2E0u); // 801A67A4
  cmps(c,0,(int32_t)c->r[12],0); // 801A67A8
  if (crb(c,2)) { goto L_801A67C0; } // 801A67AC
  c->r[4]=c->r[31]|c->r[31]; // 801A67B0
  c->r[3]=0u+0x00000000u; // 801A67B4
  c->ctr=c->r[12]; // 801A67B8
  if (true) { c->lr=0x801A67C0u; dispatch(c,c->ctr); } // 801A67BC
L_801A67C0:;
  c->lr=0x801A67C4u; f_801A7550(c); // 801A67C0
  c->r[0]=0u+0x00000001u; // 801A67C4
  goto L_801A67D0; // 801A67C8
L_801A67CC:;
  c->r[0]=0u+0x00000000u; // 801A67CC
L_801A67D0:;
  cmps(c,0,(int32_t)c->r[0],0); // 801A67D0
  if (!crb(c,2)) { goto L_801A6854; } // 801A67D4
  c->r[4]=R32(c->r[13]+0xFFFFB2F0u); // 801A67D8
  c->r[0]=0u+0x00000006u; // 801A67DC
  c->r[3]=0u+0x00000001u; // 801A67E0
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 801A67E4
  c->r[0]=R32(c->r[13]+0xFFFFB284u); // 801A67E8
  W32(c->r[13]+0xFFFFB2D0u,c->r[3]); // 801A67EC
  cmps(c,0,(int32_t)c->r[0],0); // 801A67F0
  if (!crb(c,2)) { goto L_801A6854; } // 801A67F4
  c->r[0]=R32(c->r[13]+0xFFFFB288u); // 801A67F8
  cmps(c,0,(int32_t)c->r[0],0); // 801A67FC
  if (!crb(c,2)) { goto L_801A6854; } // 801A6800
  c->r[31]=0u+0x802B0000u; // 801A6804
  W32(c->r[13]+0xFFFFB284u,c->r[3]); // 801A6808
  c->r[3]=c->r[31]+0x000068C0u; // 801A680C
  c->lr=0x801A6814u; f_80187C40(c); // 801A6810
  c->lr=0x801A6818u; f_801915E0(c); // 801A6814
  c->r[5]=0u+0x80000000u; // 801A6818
  c->r[4]=0u+0x10620000u; // 801A681C
  c->r[0]=R32(c->r[5]+0x000000F8u); // 801A6820
  c->r[9]=0u+0x801A0000u; // 801A6824
  c->r[6]=c->r[3]|c->r[3]; // 801A6828
  c->r[4]=c->r[4]+0x00004DD3u; // 801A682C
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801A6830
  c->r[3]=c->r[31]+0x000068C0u; // 801A6834
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 801A6838
  c->r[9]=c->r[9]+0x00007520u; // 801A683C
  c->r[5]=0u+0x00000000u; // 801A6840
  c->r[7]=0u+0x00000000u; // 801A6844
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 801A6848
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 801A684C
  c->lr=0x801A6854u; f_80187F10(c); // 801A6850
L_801A6854:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A6854
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A6858
  c->lr=c->r[0]; // 801A685C
  c->r[1]=c->r[1]+0x00000010u; // 801A6860
  return; // 801A6864
}

// cbForStateCheckID2
void f_801A6870(Ctx* __restrict c) {
  trace_call(0x801A6870u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A6870
  c->r[0]=c->lr; // 801A6874
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A6878
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A687C
  c->r[31]=c->r[3]|c->r[3]; // 801A6880
  c->lr=0x801A6888u; f_8018D6A0(c); // 801A6884
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A6888
  cmps(c,0,(int32_t)c->r[0],0); // 801A688C
  if (!crb(c,2)) { goto L_801A68A4; } // 801A6890
  c->r[4]=0u+0x802B0000u; // 801A6894
  c->r[4]=c->r[4]+0x00006B80u; // 801A6898
  W32(c->r[4]+0x00000078u,c->r[31]); // 801A689C
  goto L_801A68C0; // 801A68A0
L_801A68A4:;
  c->r[4]=R32(c->r[13]+0xFFFFB260u); // 801A68A4
  c->r[5]=0u+0x802B0000u; // 801A68A8
  c->r[5]=c->r[5]+0x00006B80u; // 801A68AC
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801A68B0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A68B4
  c->r[4]=c->r[5]+c->r[0]; // 801A68B8
  W32(c->r[4]+0x00000028u,c->r[31]); // 801A68BC
L_801A68C0:;
  c->lr=0x801A68C4u; f_8018D6E0(c); // 801A68C0
  cmpu(c,0,c->r[31],0x00000010u); // 801A68C4
  if (!crb(c,2)) { goto L_801A68E4; } // 801A68C8
  c->r[3]=0u+0x01230000u; // 801A68CC
  c->r[4]=0u+0x801A0000u; // 801A68D0
  c->r[3]=c->r[3]+0x00004568u; // 801A68D4
  c->r[4]=c->r[4]+0x00004E20u; // 801A68D8
  c->lr=0x801A68E0u; f_801AA000(c); // 801A68DC
  goto L_801A69F0; // 801A68E0
L_801A68E4:;
  cmpu(c,0,c->r[31],0x00000020u); // 801A68E4
  if (!crb(c,2)) { goto L_801A6904; } // 801A68E8
  c->r[3]=0u+0x01230000u; // 801A68EC
  c->r[4]=0u+0x801A0000u; // 801A68F0
  c->r[3]=c->r[3]+0x00004569u; // 801A68F4
  c->r[4]=c->r[4]+0x00004E20u; // 801A68F8
  c->lr=0x801A6900u; f_801AA000(c); // 801A68FC
  goto L_801A69F0; // 801A6900
L_801A6904:;
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 801A6904
  if (crb(c,2)) { goto L_801A69D4; } // 801A6908
  c->r[5]=0u+0x801A0000u; // 801A690C
  c->r[0]=0u+0x00000000u; // 801A6910
  c->r[5]=c->r[5]+0x000049D0u; // 801A6914
  c->r[3]=0u+0x802B0000u; // 801A6918
  W32(c->r[13]+0xFFFFB278u,c->r[0]); // 801A691C
  c->r[3]=c->r[3]+0x00006840u; // 801A6920
  c->r[4]=R32(c->r[13]+0xFFFFB2E8u); // 801A6924
  W32(c->r[13]+0xFFFFB2F4u,c->r[5]); // 801A6928
  c->r[0]=R32(c->r[3]+0x00000008u); // 801A692C
  c->r[3]=R32(c->r[4]+0x0000003Cu); // 801A6930
  cmpu(c,0,c->r[3],c->r[0]); // 801A6934
  if (!crb(c,0)) { goto L_801A6954; } // 801A6938
  c->r[5]=0u+0x80270000u; // 801A693C
  c->r[3]=c->r[13]+0xFFFFA86Cu; // 801A6940
  c->r[5]=c->r[5]+0x00004F20u; // 801A6944
  c->r[4]=0u+0x00000442u; // 801A6948
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801A694C
  c->lr=0x801A6954u; f_80189A40(c); // 801A6950
L_801A6954:;
  c->r[3]=0u+0x00000000u; // 801A6954
  c->lr=0x801A695Cu; f_801ACA90(c); // 801A6958
  c->r[6]=R32(c->r[13]+0xFFFFB298u); // 801A695C
  c->r[31]=0u+0x802B0000u; // 801A6960
  c->r[31]=c->r[31]+0x00006840u; // 801A6964
  c->r[0]=R32(c->r[13]+0xFFFFB298u); // 801A6968
  c->r[4]=R32(c->r[31]+0x00000008u); // 801A696C
  c->r[3]=0u+0x00000001u; // 801A6970
  c->r[0]=~(c->r[0]|c->r[0]); // 801A6974
  c->r[7]=R32(c->r[31]+0x00000004u); // 801A6978
  c->r[0]=rotl(c->r[0],0)&0x00000002u; // 801A697C
  c->r[5]=((c->r[0])&0x20)?0u:(c->r[4]<<((c->r[0])&31)); // 801A6980
  c->r[4]=((c->r[6])&0x20)?0u:(c->r[7]>>((c->r[6])&31)); // 801A6984
  c->r[0]=c->r[5]+0x0000001Fu; // 801A6988
  c->r[5]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801A698C
  c->lr=0x801A6994u; f_801A47A0(c); // 801A6990
  c->r[0]=R32(c->r[13]+0xFFFFB298u); // 801A6994
  c->r[6]=0u+0x801A0000u; // 801A6998
  c->r[3]=R32(c->r[31]+0x00000008u); // 801A699C
  c->r[6]=c->r[6]+0x00004B50u; // 801A69A0
  c->r[0]=~(c->r[0]|c->r[0]); // 801A69A4
  c->r[7]=R32(c->r[13]+0xFFFFB2E8u); // 801A69A8
  c->r[0]=rotl(c->r[0],0)&0x00000002u; // 801A69AC
  c->r[5]=R32(c->r[31]+0x00000004u); // 801A69B0
  c->r[3]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 801A69B4
  c->r[0]=R32(c->r[13]+0xFFFFB298u); // 801A69B8
  c->r[4]=c->r[3]+0x0000001Fu; // 801A69BC
  c->r[3]=R32(c->r[7]+0x00000038u); // 801A69C0
  c->r[4]=rotl(c->r[4],0)&0xFFFFFFE0u; // 801A69C4
  c->r[5]=((c->r[0])&0x20)?0u:(c->r[5]>>((c->r[0])&31)); // 801A69C8
  c->lr=0x801A69D0u; f_801AC2B0(c); // 801A69CC
  goto L_801A69F0; // 801A69D0
L_801A69D4:;
  c->r[3]=0u+0x00000027u; // 801A69D4
  c->r[4]=0u+0x00000000u; // 801A69D8
  c->r[5]=0u+0x00000000u; // 801A69DC
  c->lr=0x801A69E4u; f_801A47A0(c); // 801A69E0
  c->r[3]=0u+0x801A0000u; // 801A69E4
  c->r[3]=c->r[3]+0x00005030u; // 801A69E8
  c->lr=0x801A69F0u; f_801ABAE0(c); // 801A69EC
L_801A69F0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A69F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A69F4
  c->lr=c->r[0]; // 801A69F8
  c->r[1]=c->r[1]+0x00000010u; // 801A69FC
  return; // 801A6A00
}

// stateCoverClosed
void f_801A6A10(Ctx* __restrict c) {
  trace_call(0x801A6A10u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A6A10
  c->r[0]=c->lr; // 801A6A14
  c->r[3]=0u+0x00000001u; // 801A6A18
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A6A1C
  c->r[0]=R32(c->r[13]+0xFFFFB2E4u); // 801A6A20
  W32(c->r[13]+0xFFFFB2D0u,c->r[3]); // 801A6A24
  cmpu(c,0,c->r[0],0x0000002Au); // 801A6A28
  if (crb(c,1)) { goto L_801A6AA8; } // 801A6A2C
  c->r[3]=0u+0x80270000u; // 801A6A30
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801A6A34
  c->r[3]=c->r[3]+0x00004F54u; // 801A6A38
  c->r[3]=R32(c->r[3]+c->r[0]); // 801A6A3C
  c->ctr=c->r[3]; // 801A6A40
  if (true) { switch (c->ctr) { case 0x801A6A48u: goto L_801A6A48; case 0x801A6A7Cu: goto L_801A6A7C; case 0x801A6A84u: goto L_801A6A84; case 0x801A6A9Cu: goto L_801A6A9C; case 0x801A6AA8u: goto L_801A6AA8; default: break; } dispatch(c,c->ctr); return; } // 801A6A44
L_801A6A48:;
  c->lr=0x801A6A4Cu; f_801A93D0(c); // 801A6A48
  c->r[4]=R32(c->r[13]+0xFFFFB2F0u); // 801A6A4C
  c->r[3]=0u+0x802B0000u; // 801A6A50
  c->r[3]=c->r[3]+0x00006860u; // 801A6A54
  W32(c->r[13]+0xFFFFB2F0u,c->r[3]); // 801A6A58
  c->r[12]=R32(c->r[4]+0x00000028u); // 801A6A5C
  cmps(c,0,(int32_t)c->r[12],0); // 801A6A60
  if (crb(c,2)) { goto L_801A6A74; } // 801A6A64
  c->r[3]=0u+0xFFFFFFFCu; // 801A6A68
  c->ctr=c->r[12]; // 801A6A6C
  if (true) { c->lr=0x801A6A74u; dispatch(c,c->ctr); } // 801A6A70
L_801A6A74:;
  c->lr=0x801A6A78u; f_801A7550(c); // 801A6A74
  goto L_801A6AC4; // 801A6A78
L_801A6A7C:;
  c->r[0]=0u+0x00000000u; // 801A6A7C
  W32(c->r[13]+0xFFFFB2D0u,c->r[0]); // 801A6A80
L_801A6A84:;
  c->r[3]=R32(c->r[13]+0xFFFFB2F0u); // 801A6A84
  c->r[0]=0u+0x00000001u; // 801A6A88
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801A6A8C
  c->r[3]=R32(c->r[13]+0xFFFFB2F0u); // 801A6A90
  c->lr=0x801A6A98u; f_801A7870(c); // 801A6A94
  goto L_801A6AC4; // 801A6A98
L_801A6A9C:;
  c->r[0]=R32(c->r[13]+0xFFFFAF90u); // 801A6A9C
  cmps(c,0,(int32_t)c->r[0],0); // 801A6AA0
  if (!crb(c,2)) { goto L_801A6AC4; } // 801A6AA4
L_801A6AA8:;
  c->r[0]=0u+0x00000000u; // 801A6AA8
  W32(c->r[13]+0xFFFFB2D0u,c->r[0]); // 801A6AAC
  c->r[3]=0u+0x00000001u; // 801A6AB0
  c->lr=0x801A6AB8u; f_801ABC50(c); // 801A6AB4
  c->r[3]=0u+0x801A0000u; // 801A6AB8
  c->r[3]=c->r[3]+0x00006D30u; // 801A6ABC
  c->lr=0x801A6AC4u; f_801ABC60(c); // 801A6AC0
L_801A6AC4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A6AC4
  c->lr=c->r[0]; // 801A6AC8
  c->r[1]=c->r[1]+0x00000010u; // 801A6ACC
  return; // 801A6AD0
}

// ResetAlarmHandler
void f_801A6AE0(Ctx* __restrict c) {
  trace_call(0x801A6AE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A6AE0
  c->r[0]=c->lr; // 801A6AE4
  c->r[3]=0u+0x80000000u; // 801A6AE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A6AEC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A6AF0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801A6AF4
  c->r[0]=R16(c->r[3]+0x000030E6u); // 801A6AF8
  cmpu(c,0,c->r[0],0x00008003u); // 801A6AFC
  if (!crb(c,2)) { goto L_801A6BB0; } // 801A6B00
  c->r[4]=0u+0x801A0000u; // 801A6B04
  c->r[3]=0u+0x00000000u; // 801A6B08
  c->r[4]=c->r[4]+0x00006E20u; // 801A6B0C
  W32(c->r[13]+0xFFFFB2F4u,c->r[4]); // 801A6B10
  c->lr=0x801A6B18u; f_801ACA90(c); // 801A6B14
  c->lr=0x801A6B1Cu; f_8018D6A0(c); // 801A6B18
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A6B1C
  c->r[31]=c->r[3]|c->r[3]; // 801A6B20
  cmpu(c,0,c->r[0],0x00000005u); // 801A6B24
  if (crb(c,0)) { goto L_801A6B34; } // 801A6B28
  c->r[0]=0u+0x00000000u; // 801A6B2C
  W32(c->r[13]+0xFFFFB260u,c->r[0]); // 801A6B30
L_801A6B34:;
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A6B34
  c->r[30]=0u+0x802B0000u; // 801A6B38
  c->r[3]=R32(c->r[13]+0xFFFFB260u); // 801A6B3C
  c->r[30]=c->r[30]+0x00006B80u; // 801A6B40
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A6B44
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A6B48
  c->r[6]=0u+0x00000025u; // 801A6B4C
  c->r[4]=0u+0x00000000u; // 801A6B50
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801A6B54
  c->r[5]=c->r[30]+c->r[5]; // 801A6B58
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 801A6B5C
  c->r[3]=c->r[30]+c->r[3]; // 801A6B60
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A6B64
  W32(c->r[3]+0x00000020u,c->r[4]); // 801A6B68
  c->r[3]=c->r[30]+c->r[0]; // 801A6B6C
  W32(c->r[3]+0x00000024u,c->r[4]); // 801A6B70
  c->lr=0x801A6B78u; f_801915E0(c); // 801A6B74
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A6B78
  c->r[4]=R32(c->r[13]+0xFFFFB260u); // 801A6B7C
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A6B80
  c->r[0]=c->r[4]+0x00000001u; // 801A6B84
  W32(c->r[13]+0xFFFFB260u,c->r[0]); // 801A6B88
  c->r[4]=c->r[30]+c->r[5]; // 801A6B8C
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 801A6B90
  c->r[3]=c->r[31]|c->r[31]; // 801A6B94
  c->lr=0x801A6B9Cu; f_8018D6E0(c); // 801A6B98
  c->r[4]=0u+0x801A0000u; // 801A6B9C
  c->r[3]=0u+0x00020000u; // 801A6BA0
  c->r[4]=c->r[4]+0x00006EF0u; // 801A6BA4
  c->lr=0x801A6BACu; f_801AC120(c); // 801A6BA8
  goto L_801A6D18; // 801A6BAC
L_801A6BB0:;
  c->r[3]=0u+0x802B0000u; // 801A6BB0
  c->r[4]=0u+0x00000020u; // 801A6BB4
  c->r[3]=c->r[3]+0x00006900u; // 801A6BB8
  c->lr=0x801A6BC0u; f_80188CB0(c); // 801A6BBC
  c->r[0]=R32(c->r[13]+0xFFFFB2E4u); // 801A6BC0
  c->r[3]=0u+0x801A0000u; // 801A6BC4
  c->r[3]=c->r[3]+0x00007130u; // 801A6BC8
  W32(c->r[13]+0xFFFFB2F4u,c->r[3]); // 801A6BCC
  cmpu(c,0,c->r[0],0x00000028u); // 801A6BD0
  if (!crb(c,2)) { goto L_801A6C74; } // 801A6BD4
  c->r[4]=0u+0x00000000u; // 801A6BD8
  W32(c->r[13]+0xFFFFB278u,c->r[4]); // 801A6BDC
  c->r[0]=R32(c->r[13]+0xFFFFB270u); // 801A6BE0
  cmps(c,0,(int32_t)c->r[0],0); // 801A6BE4
  if (crb(c,2)) { goto L_801A6C50; } // 801A6BE8
  c->r[30]=R32(c->r[13]+0xFFFFB2F0u); // 801A6BEC
  c->r[3]=0u+0x802B0000u; // 801A6BF0
  W32(c->r[13]+0xFFFFB274u,c->r[4]); // 801A6BF4
  c->r[3]=c->r[3]+0x00006860u; // 801A6BF8
  c->r[0]=0u+0x0000000Au; // 801A6BFC
  W32(c->r[13]+0xFFFFB270u,c->r[4]); // 801A6C00
  W32(c->r[13]+0xFFFFB2F0u,c->r[3]); // 801A6C04
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 801A6C08
  c->r[12]=R32(c->r[30]+0x00000028u); // 801A6C0C
  cmps(c,0,(int32_t)c->r[12],0); // 801A6C10
  if (crb(c,2)) { goto L_801A6C28; } // 801A6C14
  c->r[4]=c->r[30]|c->r[30]; // 801A6C18
  c->r[3]=0u+0xFFFFFFFDu; // 801A6C1C
  c->ctr=c->r[12]; // 801A6C20
  if (true) { c->lr=0x801A6C28u; dispatch(c,c->ctr); } // 801A6C24
L_801A6C28:;
  c->r[12]=R32(c->r[13]+0xFFFFB2E0u); // 801A6C28
  cmps(c,0,(int32_t)c->r[12],0); // 801A6C2C
  if (crb(c,2)) { goto L_801A6C44; } // 801A6C30
  c->r[4]=c->r[30]|c->r[30]; // 801A6C34
  c->r[3]=0u+0x00000000u; // 801A6C38
  c->ctr=c->r[12]; // 801A6C3C
  if (true) { c->lr=0x801A6C44u; dispatch(c,c->ctr); } // 801A6C40
L_801A6C44:;
  c->lr=0x801A6C48u; f_801A7550(c); // 801A6C44
  c->r[0]=0u+0x00000001u; // 801A6C48
  goto L_801A6C54; // 801A6C4C
L_801A6C50:;
  c->r[0]=0u+0x00000000u; // 801A6C50
L_801A6C54:;
  cmps(c,0,(int32_t)c->r[0],0); // 801A6C54
  if (!crb(c,2)) { goto L_801A6D18; } // 801A6C58
  c->r[3]=R32(c->r[13]+0xFFFFB2F0u); // 801A6C5C
  c->r[0]=0u+0x00000001u; // 801A6C60
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801A6C64
  c->r[3]=R32(c->r[13]+0xFFFFB2F0u); // 801A6C68
  c->lr=0x801A6C70u; f_801A7870(c); // 801A6C6C
  goto L_801A6D18; // 801A6C70
L_801A6C74:;
  c->r[3]=0u+0x00000000u; // 801A6C74
  c->lr=0x801A6C7Cu; f_801ACA90(c); // 801A6C78
  c->lr=0x801A6C80u; f_8018D6A0(c); // 801A6C7C
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A6C80
  c->r[31]=c->r[3]|c->r[3]; // 801A6C84
  cmpu(c,0,c->r[0],0x00000005u); // 801A6C88
  if (crb(c,0)) { goto L_801A6C98; } // 801A6C8C
  c->r[0]=0u+0x00000000u; // 801A6C90
  W32(c->r[13]+0xFFFFB260u,c->r[0]); // 801A6C94
L_801A6C98:;
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A6C98
  c->r[30]=0u+0x802B0000u; // 801A6C9C
  c->r[3]=R32(c->r[13]+0xFFFFB260u); // 801A6CA0
  c->r[30]=c->r[30]+0x00006B80u; // 801A6CA4
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A6CA8
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A6CAC
  c->r[7]=0u+0x00000005u; // 801A6CB0
  c->r[5]=0u+0x00000000u; // 801A6CB4
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801A6CB8
  c->r[4]=0u+0x00000020u; // 801A6CBC
  c->r[6]=c->r[30]+c->r[6]; // 801A6CC0
  W32(c->r[6]+0x0000001Cu,c->r[7]); // 801A6CC4
  c->r[3]=c->r[30]+c->r[3]; // 801A6CC8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A6CCC
  W32(c->r[3]+0x00000020u,c->r[5]); // 801A6CD0
  c->r[3]=c->r[30]+c->r[0]; // 801A6CD4
  W32(c->r[3]+0x00000024u,c->r[4]); // 801A6CD8
  c->lr=0x801A6CE0u; f_801915E0(c); // 801A6CDC
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A6CE0
  c->r[4]=R32(c->r[13]+0xFFFFB260u); // 801A6CE4
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A6CE8
  c->r[0]=c->r[4]+0x00000001u; // 801A6CEC
  W32(c->r[13]+0xFFFFB260u,c->r[0]); // 801A6CF0
  c->r[4]=c->r[30]+c->r[5]; // 801A6CF4
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 801A6CF8
  c->r[3]=c->r[31]|c->r[31]; // 801A6CFC
  c->lr=0x801A6D04u; f_8018D6E0(c); // 801A6D00
  c->r[3]=0u+0x802B0000u; // 801A6D04
  c->r[4]=0u+0x801A0000u; // 801A6D08
  c->r[3]=c->r[3]+0x00006900u; // 801A6D0C
  c->r[4]=c->r[4]+0x000072B0u; // 801A6D10
  c->lr=0x801A6D18u; f_801AA9A0(c); // 801A6D14
L_801A6D18:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A6D18
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A6D1C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801A6D20
  c->lr=c->r[0]; // 801A6D24
  c->r[1]=c->r[1]+0x00000010u; // 801A6D28
  return; // 801A6D2C
}

// cbForStateReset
void f_801A6D30(Ctx* __restrict c) {
  trace_call(0x801A6D30u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A6D30
  c->r[0]=c->lr; // 801A6D34
  cmpu(c,0,c->r[3],0x00000010u); // 801A6D38
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A6D3C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A6D40
  if (!crb(c,2)) { goto L_801A6D60; } // 801A6D44
  c->r[3]=0u+0x01230000u; // 801A6D48
  c->r[4]=0u+0x801A0000u; // 801A6D4C
  c->r[3]=c->r[3]+0x00004568u; // 801A6D50
  c->r[4]=c->r[4]+0x00004E20u; // 801A6D54
  c->lr=0x801A6D5Cu; f_801AA000(c); // 801A6D58
  goto L_801A6E00; // 801A6D5C
L_801A6D60:;
  cmpu(c,0,c->r[3],0x00000020u); // 801A6D60
  if (!crb(c,2)) { goto L_801A6D80; } // 801A6D64
  c->r[3]=0u+0x01230000u; // 801A6D68
  c->r[4]=0u+0x801A0000u; // 801A6D6C
  c->r[3]=c->r[3]+0x00004569u; // 801A6D70
  c->r[4]=c->r[4]+0x00004E20u; // 801A6D74
  c->lr=0x801A6D7Cu; f_801AA000(c); // 801A6D78
  goto L_801A6E00; // 801A6D7C
L_801A6D80:;
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 801A6D80
  if (crb(c,2)) { goto L_801A6DE4; } // 801A6D84
  c->lr=0x801A6D8Cu; f_801915F0(c); // 801A6D88
  W32(c->r[13]+0xFFFFB2CCu,c->r[4]); // 801A6D8C
  c->r[0]=0u+0x00000000u; // 801A6D90
  c->r[31]=0u+0x802B0000u; // 801A6D94
  W32(c->r[13]+0xFFFFB2C8u,c->r[3]); // 801A6D98
  c->r[3]=c->r[31]+0x00006960u; // 801A6D9C
  W32(c->r[13]+0xFFFFB2D4u,c->r[0]); // 801A6DA0
  W32(c->r[13]+0xFFFFB274u,c->r[0]); // 801A6DA4
  c->lr=0x801A6DACu; f_80187C40(c); // 801A6DA8
  c->r[4]=0u+0x80000000u; // 801A6DAC
  c->r[7]=0u+0x801A0000u; // 801A6DB0
  c->r[0]=R32(c->r[4]+0x000000F8u); // 801A6DB4
  c->r[3]=0u+0x10620000u; // 801A6DB8
  c->r[4]=c->r[3]+0x00004DD3u; // 801A6DBC
  c->r[7]=c->r[7]+0x00006AE0u; // 801A6DC0
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801A6DC4
  c->r[3]=c->r[31]+0x00006960u; // 801A6DC8
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 801A6DCC
  c->r[5]=0u+0x00000000u; // 801A6DD0
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 801A6DD4
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 801A6DD8
  c->lr=0x801A6DE0u; f_80187EA0(c); // 801A6DDC
  goto L_801A6E00; // 801A6DE0
L_801A6DE4:;
  c->r[3]=0u+0x00000027u; // 801A6DE4
  c->r[4]=0u+0x00000000u; // 801A6DE8
  c->r[5]=0u+0x00000000u; // 801A6DEC
  c->lr=0x801A6DF4u; f_801A47A0(c); // 801A6DF0
  c->r[3]=0u+0x801A0000u; // 801A6DF4
  c->r[3]=c->r[3]+0x00005030u; // 801A6DF8
  c->lr=0x801A6E00u; f_801ABAE0(c); // 801A6DFC
L_801A6E00:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A6E00
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A6E04
  c->lr=c->r[0]; // 801A6E08
  c->r[1]=c->r[1]+0x00000010u; // 801A6E0C
  return; // 801A6E10
}

// stateDownRotation
void f_801A6E20(Ctx* __restrict c) {
  trace_call(0x801A6E20u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A6E20
  c->r[0]=c->lr; // 801A6E24
  c->r[3]=0u+0x00000000u; // 801A6E28
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A6E2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A6E30
  W32(c->r[1]+0x00000008u,c->r[30]); // 801A6E34
  c->lr=0x801A6E3Cu; f_801ACA90(c); // 801A6E38
  c->lr=0x801A6E40u; f_8018D6A0(c); // 801A6E3C
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A6E40
  c->r[31]=c->r[3]|c->r[3]; // 801A6E44
  cmpu(c,0,c->r[0],0x00000005u); // 801A6E48
  if (crb(c,0)) { goto L_801A6E58; } // 801A6E4C
  c->r[0]=0u+0x00000000u; // 801A6E50
  W32(c->r[13]+0xFFFFB260u,c->r[0]); // 801A6E54
L_801A6E58:;
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A6E58
  c->r[30]=0u+0x802B0000u; // 801A6E5C
  c->r[3]=R32(c->r[13]+0xFFFFB260u); // 801A6E60
  c->r[30]=c->r[30]+0x00006B80u; // 801A6E64
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A6E68
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A6E6C
  c->r[6]=0u+0x00000025u; // 801A6E70
  c->r[4]=0u+0x00000000u; // 801A6E74
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801A6E78
  c->r[5]=c->r[30]+c->r[5]; // 801A6E7C
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 801A6E80
  c->r[3]=c->r[30]+c->r[3]; // 801A6E84
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A6E88
  W32(c->r[3]+0x00000020u,c->r[4]); // 801A6E8C
  c->r[3]=c->r[30]+c->r[0]; // 801A6E90
  W32(c->r[3]+0x00000024u,c->r[4]); // 801A6E94
  c->lr=0x801A6E9Cu; f_801915E0(c); // 801A6E98
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A6E9C
  c->r[4]=R32(c->r[13]+0xFFFFB260u); // 801A6EA0
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A6EA4
  c->r[0]=c->r[4]+0x00000001u; // 801A6EA8
  W32(c->r[13]+0xFFFFB260u,c->r[0]); // 801A6EAC
  c->r[4]=c->r[30]+c->r[5]; // 801A6EB0
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 801A6EB4
  c->r[3]=c->r[31]|c->r[31]; // 801A6EB8
  c->lr=0x801A6EC0u; f_8018D6E0(c); // 801A6EBC
  c->r[4]=0u+0x801A0000u; // 801A6EC0
  c->r[3]=0u+0x00020000u; // 801A6EC4
  c->r[4]=c->r[4]+0x00006EF0u; // 801A6EC8
  c->lr=0x801A6ED0u; f_801AC120(c); // 801A6ECC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A6ED0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A6ED4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801A6ED8
  c->lr=c->r[0]; // 801A6EDC
  c->r[1]=c->r[1]+0x00000010u; // 801A6EE0
  return; // 801A6EE4
}

// cbForStateDownRotation
void f_801A6EF0(Ctx* __restrict c) {
  trace_call(0x801A6EF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A6EF0
  c->r[0]=c->lr; // 801A6EF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A6EF8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A6EFC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801A6F00
  c->r[30]=c->r[3]|c->r[3]; // 801A6F04
  c->lr=0x801A6F0Cu; f_8018D6A0(c); // 801A6F08
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A6F0C
  cmps(c,0,(int32_t)c->r[0],0); // 801A6F10
  if (!crb(c,2)) { goto L_801A6F28; } // 801A6F14
  c->r[4]=0u+0x802B0000u; // 801A6F18
  c->r[4]=c->r[4]+0x00006B80u; // 801A6F1C
  W32(c->r[4]+0x00000078u,c->r[30]); // 801A6F20
  goto L_801A6F44; // 801A6F24
L_801A6F28:;
  c->r[4]=R32(c->r[13]+0xFFFFB260u); // 801A6F28
  c->r[5]=0u+0x802B0000u; // 801A6F2C
  c->r[5]=c->r[5]+0x00006B80u; // 801A6F30
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801A6F34
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A6F38
  c->r[4]=c->r[5]+c->r[0]; // 801A6F3C
  W32(c->r[4]+0x00000028u,c->r[30]); // 801A6F40
L_801A6F44:;
  c->lr=0x801A6F48u; f_8018D6E0(c); // 801A6F44
  cmpu(c,0,c->r[30],0x00000010u); // 801A6F48
  if (!crb(c,2)) { goto L_801A6F68; } // 801A6F4C
  c->r[3]=0u+0x01230000u; // 801A6F50
  c->r[4]=0u+0x801A0000u; // 801A6F54
  c->r[3]=c->r[3]+0x00004568u; // 801A6F58
  c->r[4]=c->r[4]+0x00004E20u; // 801A6F5C
  c->lr=0x801A6F64u; f_801AA000(c); // 801A6F60
  goto L_801A7118; // 801A6F64
L_801A6F68:;
  cmpu(c,0,c->r[30],0x00000020u); // 801A6F68
  if (!crb(c,2)) { goto L_801A6F88; } // 801A6F6C
  c->r[3]=0u+0x01230000u; // 801A6F70
  c->r[4]=0u+0x801A0000u; // 801A6F74
  c->r[3]=c->r[3]+0x00004569u; // 801A6F78
  c->r[4]=c->r[4]+0x00004E20u; // 801A6F7C
  c->lr=0x801A6F84u; f_801AA000(c); // 801A6F80
  goto L_801A7118; // 801A6F84
L_801A6F88:;
  c->r[0]=rotl(c->r[30],0)&0x00000001u; cr0(c,c->r[0]); // 801A6F88
  if (crb(c,2)) { goto L_801A70FC; } // 801A6F8C
  c->r[3]=0u+0x802B0000u; // 801A6F90
  c->r[4]=0u+0x00000020u; // 801A6F94
  c->r[3]=c->r[3]+0x00006900u; // 801A6F98
  c->lr=0x801A6FA0u; f_80188CB0(c); // 801A6F9C
  c->r[0]=R32(c->r[13]+0xFFFFB2E4u); // 801A6FA0
  c->r[3]=0u+0x801A0000u; // 801A6FA4
  c->r[3]=c->r[3]+0x00007130u; // 801A6FA8
  W32(c->r[13]+0xFFFFB2F4u,c->r[3]); // 801A6FAC
  cmpu(c,0,c->r[0],0x00000028u); // 801A6FB0
  if (!crb(c,2)) { goto L_801A7054; } // 801A6FB4
  c->r[4]=0u+0x00000000u; // 801A6FB8
  W32(c->r[13]+0xFFFFB278u,c->r[4]); // 801A6FBC
  c->r[0]=R32(c->r[13]+0xFFFFB270u); // 801A6FC0
  cmps(c,0,(int32_t)c->r[0],0); // 801A6FC4
  if (crb(c,2)) { goto L_801A7030; } // 801A6FC8
  c->r[30]=R32(c->r[13]+0xFFFFB2F0u); // 801A6FCC
  c->r[3]=0u+0x802B0000u; // 801A6FD0
  W32(c->r[13]+0xFFFFB274u,c->r[4]); // 801A6FD4
  c->r[3]=c->r[3]+0x00006860u; // 801A6FD8
  c->r[0]=0u+0x0000000Au; // 801A6FDC
  W32(c->r[13]+0xFFFFB270u,c->r[4]); // 801A6FE0
  W32(c->r[13]+0xFFFFB2F0u,c->r[3]); // 801A6FE4
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 801A6FE8
  c->r[12]=R32(c->r[30]+0x00000028u); // 801A6FEC
  cmps(c,0,(int32_t)c->r[12],0); // 801A6FF0
  if (crb(c,2)) { goto L_801A7008; } // 801A6FF4
  c->r[4]=c->r[30]|c->r[30]; // 801A6FF8
  c->r[3]=0u+0xFFFFFFFDu; // 801A6FFC
  c->ctr=c->r[12]; // 801A7000
  if (true) { c->lr=0x801A7008u; dispatch(c,c->ctr); } // 801A7004
L_801A7008:;
  c->r[12]=R32(c->r[13]+0xFFFFB2E0u); // 801A7008
  cmps(c,0,(int32_t)c->r[12],0); // 801A700C
  if (crb(c,2)) { goto L_801A7024; } // 801A7010
  c->r[4]=c->r[30]|c->r[30]; // 801A7014
  c->r[3]=0u+0x00000000u; // 801A7018
  c->ctr=c->r[12]; // 801A701C
  if (true) { c->lr=0x801A7024u; dispatch(c,c->ctr); } // 801A7020
L_801A7024:;
  c->lr=0x801A7028u; f_801A7550(c); // 801A7024
  c->r[0]=0u+0x00000001u; // 801A7028
  goto L_801A7034; // 801A702C
L_801A7030:;
  c->r[0]=0u+0x00000000u; // 801A7030
L_801A7034:;
  cmps(c,0,(int32_t)c->r[0],0); // 801A7034
  if (!crb(c,2)) { goto L_801A7118; } // 801A7038
  c->r[3]=R32(c->r[13]+0xFFFFB2F0u); // 801A703C
  c->r[0]=0u+0x00000001u; // 801A7040
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801A7044
  c->r[3]=R32(c->r[13]+0xFFFFB2F0u); // 801A7048
  c->lr=0x801A7050u; f_801A7870(c); // 801A704C
  goto L_801A7118; // 801A7050
L_801A7054:;
  c->r[3]=0u+0x00000000u; // 801A7054
  c->lr=0x801A705Cu; f_801ACA90(c); // 801A7058
  c->lr=0x801A7060u; f_8018D6A0(c); // 801A705C
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A7060
  c->r[31]=c->r[3]|c->r[3]; // 801A7064
  cmpu(c,0,c->r[0],0x00000005u); // 801A7068
  if (crb(c,0)) { goto L_801A7078; } // 801A706C
  c->r[0]=0u+0x00000000u; // 801A7070
  W32(c->r[13]+0xFFFFB260u,c->r[0]); // 801A7074
L_801A7078:;
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A7078
  c->r[30]=0u+0x802B0000u; // 801A707C
  c->r[3]=R32(c->r[13]+0xFFFFB260u); // 801A7080
  c->r[30]=c->r[30]+0x00006B80u; // 801A7084
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A7088
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A708C
  c->r[7]=0u+0x00000005u; // 801A7090
  c->r[5]=0u+0x00000000u; // 801A7094
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801A7098
  c->r[4]=0u+0x00000020u; // 801A709C
  c->r[6]=c->r[30]+c->r[6]; // 801A70A0
  W32(c->r[6]+0x0000001Cu,c->r[7]); // 801A70A4
  c->r[3]=c->r[30]+c->r[3]; // 801A70A8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A70AC
  W32(c->r[3]+0x00000020u,c->r[5]); // 801A70B0
  c->r[3]=c->r[30]+c->r[0]; // 801A70B4
  W32(c->r[3]+0x00000024u,c->r[4]); // 801A70B8
  c->lr=0x801A70C0u; f_801915E0(c); // 801A70BC
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A70C0
  c->r[4]=R32(c->r[13]+0xFFFFB260u); // 801A70C4
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A70C8
  c->r[0]=c->r[4]+0x00000001u; // 801A70CC
  W32(c->r[13]+0xFFFFB260u,c->r[0]); // 801A70D0
  c->r[4]=c->r[30]+c->r[5]; // 801A70D4
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 801A70D8
  c->r[3]=c->r[31]|c->r[31]; // 801A70DC
  c->lr=0x801A70E4u; f_8018D6E0(c); // 801A70E0
  c->r[3]=0u+0x802B0000u; // 801A70E4
  c->r[4]=0u+0x801A0000u; // 801A70E8
  c->r[3]=c->r[3]+0x00006900u; // 801A70EC
  c->r[4]=c->r[4]+0x000072B0u; // 801A70F0
  c->lr=0x801A70F8u; f_801AA9A0(c); // 801A70F4
  goto L_801A7118; // 801A70F8
L_801A70FC:;
  c->r[3]=0u+0x00000027u; // 801A70FC
  c->r[4]=0u+0x00000000u; // 801A7100
  c->r[5]=0u+0x00000000u; // 801A7104
  c->lr=0x801A710Cu; f_801A47A0(c); // 801A7108
  c->r[3]=0u+0x801A0000u; // 801A710C
  c->r[3]=c->r[3]+0x00005030u; // 801A7110
  c->lr=0x801A7118u; f_801ABAE0(c); // 801A7114
L_801A7118:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A7118
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A711C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801A7120
  c->lr=c->r[0]; // 801A7124
  c->r[1]=c->r[1]+0x00000010u; // 801A7128
  return; // 801A712C
}

// stateCoverClosed_CMD
void f_801A7130(Ctx* __restrict c) {
  trace_call(0x801A7130u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A7130
  c->r[0]=c->lr; // 801A7134
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A7138
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A713C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801A7140
  c->r[0]=R32(c->r[13]+0xFFFFB2E4u); // 801A7144
  cmpu(c,0,c->r[0],0x00000028u); // 801A7148
  if (!crb(c,2)) { goto L_801A71EC; } // 801A714C
  c->r[4]=0u+0x00000000u; // 801A7150
  W32(c->r[13]+0xFFFFB278u,c->r[4]); // 801A7154
  c->r[0]=R32(c->r[13]+0xFFFFB270u); // 801A7158
  cmps(c,0,(int32_t)c->r[0],0); // 801A715C
  if (crb(c,2)) { goto L_801A71C8; } // 801A7160
  c->r[30]=R32(c->r[13]+0xFFFFB2F0u); // 801A7164
  c->r[3]=0u+0x802B0000u; // 801A7168
  W32(c->r[13]+0xFFFFB274u,c->r[4]); // 801A716C
  c->r[3]=c->r[3]+0x00006860u; // 801A7170
  c->r[0]=0u+0x0000000Au; // 801A7174
  W32(c->r[13]+0xFFFFB270u,c->r[4]); // 801A7178
  W32(c->r[13]+0xFFFFB2F0u,c->r[3]); // 801A717C
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 801A7180
  c->r[12]=R32(c->r[30]+0x00000028u); // 801A7184
  cmps(c,0,(int32_t)c->r[12],0); // 801A7188
  if (crb(c,2)) { goto L_801A71A0; } // 801A718C
  c->r[4]=c->r[30]|c->r[30]; // 801A7190
  c->r[3]=0u+0xFFFFFFFDu; // 801A7194
  c->ctr=c->r[12]; // 801A7198
  if (true) { c->lr=0x801A71A0u; dispatch(c,c->ctr); } // 801A719C
L_801A71A0:;
  c->r[12]=R32(c->r[13]+0xFFFFB2E0u); // 801A71A0
  cmps(c,0,(int32_t)c->r[12],0); // 801A71A4
  if (crb(c,2)) { goto L_801A71BC; } // 801A71A8
  c->r[4]=c->r[30]|c->r[30]; // 801A71AC
  c->r[3]=0u+0x00000000u; // 801A71B0
  c->ctr=c->r[12]; // 801A71B4
  if (true) { c->lr=0x801A71BCu; dispatch(c,c->ctr); } // 801A71B8
L_801A71BC:;
  c->lr=0x801A71C0u; f_801A7550(c); // 801A71BC
  c->r[0]=0u+0x00000001u; // 801A71C0
  goto L_801A71CC; // 801A71C4
L_801A71C8:;
  c->r[0]=0u+0x00000000u; // 801A71C8
L_801A71CC:;
  cmps(c,0,(int32_t)c->r[0],0); // 801A71CC
  if (!crb(c,2)) { goto L_801A7290; } // 801A71D0
  c->r[3]=R32(c->r[13]+0xFFFFB2F0u); // 801A71D4
  c->r[0]=0u+0x00000001u; // 801A71D8
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801A71DC
  c->r[3]=R32(c->r[13]+0xFFFFB2F0u); // 801A71E0
  c->lr=0x801A71E8u; f_801A7870(c); // 801A71E4
  goto L_801A7290; // 801A71E8
L_801A71EC:;
  c->r[3]=0u+0x00000000u; // 801A71EC
  c->lr=0x801A71F4u; f_801ACA90(c); // 801A71F0
  c->lr=0x801A71F8u; f_8018D6A0(c); // 801A71F4
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A71F8
  c->r[31]=c->r[3]|c->r[3]; // 801A71FC
  cmpu(c,0,c->r[0],0x00000005u); // 801A7200
  if (crb(c,0)) { goto L_801A7210; } // 801A7204
  c->r[0]=0u+0x00000000u; // 801A7208
  W32(c->r[13]+0xFFFFB260u,c->r[0]); // 801A720C
L_801A7210:;
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A7210
  c->r[30]=0u+0x802B0000u; // 801A7214
  c->r[3]=R32(c->r[13]+0xFFFFB260u); // 801A7218
  c->r[30]=c->r[30]+0x00006B80u; // 801A721C
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A7220
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A7224
  c->r[7]=0u+0x00000005u; // 801A7228
  c->r[5]=0u+0x00000000u; // 801A722C
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801A7230
  c->r[4]=0u+0x00000020u; // 801A7234
  c->r[6]=c->r[30]+c->r[6]; // 801A7238
  W32(c->r[6]+0x0000001Cu,c->r[7]); // 801A723C
  c->r[3]=c->r[30]+c->r[3]; // 801A7240
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A7244
  W32(c->r[3]+0x00000020u,c->r[5]); // 801A7248
  c->r[3]=c->r[30]+c->r[0]; // 801A724C
  W32(c->r[3]+0x00000024u,c->r[4]); // 801A7250
  c->lr=0x801A7258u; f_801915E0(c); // 801A7254
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A7258
  c->r[4]=R32(c->r[13]+0xFFFFB260u); // 801A725C
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A7260
  c->r[0]=c->r[4]+0x00000001u; // 801A7264
  W32(c->r[13]+0xFFFFB260u,c->r[0]); // 801A7268
  c->r[4]=c->r[30]+c->r[5]; // 801A726C
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 801A7270
  c->r[3]=c->r[31]|c->r[31]; // 801A7274
  c->lr=0x801A727Cu; f_8018D6E0(c); // 801A7278
  c->r[3]=0u+0x802B0000u; // 801A727C
  c->r[4]=0u+0x801A0000u; // 801A7280
  c->r[3]=c->r[3]+0x00006900u; // 801A7284
  c->r[4]=c->r[4]+0x000072B0u; // 801A7288
  c->lr=0x801A7290u; f_801AA9A0(c); // 801A728C
L_801A7290:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A7290
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A7294
  c->r[30]=R32(c->r[1]+0x00000008u); // 801A7298
  c->lr=c->r[0]; // 801A729C
  c->r[1]=c->r[1]+0x00000010u; // 801A72A0
  return; // 801A72A4
}

// cbForStateCoverClosed
void f_801A72B0(Ctx* __restrict c) {
  trace_call(0x801A72B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A72B0
  c->r[0]=c->lr; // 801A72B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A72B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A72BC
  c->r[31]=c->r[3]|c->r[3]; // 801A72C0
  c->lr=0x801A72C8u; f_8018D6A0(c); // 801A72C4
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A72C8
  cmps(c,0,(int32_t)c->r[0],0); // 801A72CC
  if (!crb(c,2)) { goto L_801A72E4; } // 801A72D0
  c->r[4]=0u+0x802B0000u; // 801A72D4
  c->r[4]=c->r[4]+0x00006B80u; // 801A72D8
  W32(c->r[4]+0x00000078u,c->r[31]); // 801A72DC
  goto L_801A72FC; // 801A72E0
L_801A72E4:;
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A72E4
  c->r[4]=0u+0x802B0000u; // 801A72E8
  c->r[4]=c->r[4]+0x00006B80u; // 801A72EC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A72F0
  c->r[4]=c->r[4]+c->r[0]; // 801A72F4
  W32(c->r[4]+0x00000014u,c->r[31]); // 801A72F8
L_801A72FC:;
  c->lr=0x801A7300u; f_8018D6E0(c); // 801A72FC
  cmpu(c,0,c->r[31],0x00000010u); // 801A7300
  if (!crb(c,2)) { goto L_801A7320; } // 801A7304
  c->r[3]=0u+0x01230000u; // 801A7308
  c->r[4]=0u+0x801A0000u; // 801A730C
  c->r[3]=c->r[3]+0x00004568u; // 801A7310
  c->r[4]=c->r[4]+0x00004E20u; // 801A7314
  c->lr=0x801A731Cu; f_801AA000(c); // 801A7318
  goto L_801A7374; // 801A731C
L_801A7320:;
  cmpu(c,0,c->r[31],0x00000020u); // 801A7320
  if (!crb(c,2)) { goto L_801A7340; } // 801A7324
  c->r[3]=0u+0x01230000u; // 801A7328
  c->r[4]=0u+0x801A0000u; // 801A732C
  c->r[3]=c->r[3]+0x00004569u; // 801A7330
  c->r[4]=c->r[4]+0x00004E20u; // 801A7334
  c->lr=0x801A733Cu; f_801AA000(c); // 801A7338
  goto L_801A7374; // 801A733C
L_801A7340:;
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 801A7340
  if (crb(c,2)) { goto L_801A7358; } // 801A7344
  c->r[0]=0u+0x00000000u; // 801A7348
  W32(c->r[13]+0xFFFFB278u,c->r[0]); // 801A734C
  c->lr=0x801A7354u; f_801A5A40(c); // 801A7350
  goto L_801A7374; // 801A7354
L_801A7358:;
  c->r[3]=0u+0x00000027u; // 801A7358
  c->r[4]=0u+0x00000000u; // 801A735C
  c->r[5]=0u+0x00000000u; // 801A7360
  c->lr=0x801A7368u; f_801A47A0(c); // 801A7364
  c->r[3]=0u+0x801A0000u; // 801A7368
  c->r[3]=c->r[3]+0x00005030u; // 801A736C
  c->lr=0x801A7374u; f_801ABAE0(c); // 801A7370
L_801A7374:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A7374
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A7378
  c->lr=c->r[0]; // 801A737C
  c->r[1]=c->r[1]+0x00000010u; // 801A7380
  return; // 801A7384
}

// cbForPrepareCoverRegister
void f_801A7390(Ctx* __restrict c) {
  trace_call(0x801A7390u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A7390
  c->r[0]=c->lr; // 801A7394
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A7398
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A739C
  c->r[31]=0u+0x00000000u; // 801A73A0
  W32(c->r[13]+0xFFFFB294u,c->r[31]); // 801A73A4
  c->r[0]=R32(c->r[13]+0xFFFFB288u); // 801A73A8
  cmps(c,0,(int32_t)c->r[0],0); // 801A73AC
  if (crb(c,2)) { goto L_801A7438; } // 801A73B0
  c->lr=0x801A73B8u; f_801AC5E0(c); // 801A73B4
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 801A73B8
  if (!crb(c,2)) { goto L_801A7504; } // 801A73BC
  c->r[3]=0u+0x802B0000u; // 801A73C0
  c->r[3]=c->r[3]+0x000068C0u; // 801A73C4
  c->lr=0x801A73CCu; f_80187FA0(c); // 801A73C8
  W32(c->r[13]+0xFFFFB288u,c->r[31]); // 801A73CC
  W32(c->r[13]+0xFFFFB288u,c->r[31]); // 801A73D0
  c->r[0]=R32(c->r[13]+0xFFFFB2E4u); // 801A73D4
  cmpu(c,0,c->r[0],0x00000003u); // 801A73D8
  if (!crb(c,2)) { goto L_801A73E8; } // 801A73DC
  c->r[0]=0u+0x00000001u; // 801A73E0
  W32(c->r[13]+0xFFFFB290u,c->r[0]); // 801A73E4
L_801A73E8:;
  c->r[0]=R32(c->r[13]+0xFFFFB2D0u); // 801A73E8
  cmpu(c,0,c->r[0],0x00000002u); // 801A73EC
  if (!crb(c,2)) { goto L_801A740C; } // 801A73F0
  c->r[3]=R32(c->r[13]+0xFFFFB2F0u); // 801A73F4
  cmps(c,0,(int32_t)c->r[3],0); // 801A73F8
  if (crb(c,2)) { goto L_801A7504; } // 801A73FC
  c->r[0]=0u+0x0000000Cu; // 801A7400
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801A7404
  goto L_801A7504; // 801A7408
L_801A740C:;
  c->lr=0x801A7410u; f_801ACA80(c); // 801A740C
  c->r[3]=R32(c->r[13]+0xFFFFB2F0u); // 801A7410
  cmps(c,0,(int32_t)c->r[3],0); // 801A7414
  if (crb(c,2)) { goto L_801A742C; } // 801A7418
  c->r[0]=0u+0x00000003u; // 801A741C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801A7420
  c->lr=0x801A7428u; f_801A6A10(c); // 801A7424
  goto L_801A7504; // 801A7428
L_801A742C:;
  c->r[0]=0u+0x00000007u; // 801A742C
  W32(c->r[13]+0xFFFFB274u,c->r[0]); // 801A7430
  goto L_801A7504; // 801A7434
L_801A7438:;
  c->lr=0x801A743Cu; f_801AC5E0(c); // 801A7438
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 801A743C
  if (crb(c,2)) { goto L_801A747C; } // 801A7440
  c->r[0]=R32(c->r[13]+0xFFFFB2D0u); // 801A7444
  c->r[3]=0u+0x00000001u; // 801A7448
  W32(c->r[13]+0xFFFFB284u,c->r[31]); // 801A744C
  cmpu(c,0,c->r[0],0x00000002u); // 801A7450
  W32(c->r[13]+0xFFFFB288u,c->r[3]); // 801A7454
  if (!crb(c,2)) { goto L_801A746C; } // 801A7458
  c->r[3]=R32(c->r[13]+0xFFFFB2F0u); // 801A745C
  c->r[0]=0u+0x0000000Cu; // 801A7460
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801A7464
  goto L_801A7504; // 801A7468
L_801A746C:;
  c->r[3]=R32(c->r[13]+0xFFFFB2F0u); // 801A746C
  c->r[0]=0u+0x00000005u; // 801A7470
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801A7474
  goto L_801A7504; // 801A7478
L_801A747C:;
  c->lr=0x801A7480u; f_801AC5E0(c); // 801A747C
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 801A7480
  if (crb(c,2)) { goto L_801A7504; } // 801A7484
  c->r[3]=0u+0x802B0000u; // 801A7488
  c->r[3]=c->r[3]+0x000068C0u; // 801A748C
  c->lr=0x801A7494u; f_80187FA0(c); // 801A7490
  W32(c->r[13]+0xFFFFB284u,c->r[31]); // 801A7494
  c->r[3]=0u+0x00000000u; // 801A7498
  c->lr=0x801A74A0u; f_801ACA90(c); // 801A749C
  W32(c->r[13]+0xFFFFB288u,c->r[31]); // 801A74A0
  c->r[0]=R32(c->r[13]+0xFFFFB2E4u); // 801A74A4
  cmpu(c,0,c->r[0],0x00000003u); // 801A74A8
  if (!crb(c,2)) { goto L_801A74B8; } // 801A74AC
  c->r[0]=0u+0x00000001u; // 801A74B0
  W32(c->r[13]+0xFFFFB290u,c->r[0]); // 801A74B4
L_801A74B8:;
  c->r[0]=R32(c->r[13]+0xFFFFB2D0u); // 801A74B8
  cmpu(c,0,c->r[0],0x00000002u); // 801A74BC
  if (!crb(c,2)) { goto L_801A74DC; } // 801A74C0
  c->r[3]=R32(c->r[13]+0xFFFFB2F0u); // 801A74C4
  cmps(c,0,(int32_t)c->r[3],0); // 801A74C8
  if (crb(c,2)) { goto L_801A7504; } // 801A74CC
  c->r[0]=0u+0x0000000Cu; // 801A74D0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801A74D4
  goto L_801A7504; // 801A74D8
L_801A74DC:;
  c->lr=0x801A74E0u; f_801ACA80(c); // 801A74DC
  c->r[3]=R32(c->r[13]+0xFFFFB2F0u); // 801A74E0
  cmps(c,0,(int32_t)c->r[3],0); // 801A74E4
  if (crb(c,2)) { goto L_801A74FC; } // 801A74E8
  c->r[0]=0u+0x00000003u; // 801A74EC
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801A74F0
  c->lr=0x801A74F8u; f_801A6A10(c); // 801A74F4
  goto L_801A7504; // 801A74F8
L_801A74FC:;
  c->r[0]=0u+0x00000007u; // 801A74FC
  W32(c->r[13]+0xFFFFB274u,c->r[0]); // 801A7500
L_801A7504:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A7504
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A7508
  c->lr=c->r[0]; // 801A750C
  c->r[1]=c->r[1]+0x00000010u; // 801A7510
  return; // 801A7514
}

// CoverAlarmHandler
void f_801A7520(Ctx* __restrict c) {
  trace_call(0x801A7520u);
  c->r[0]=R32(c->r[13]+0xFFFFB294u); // 801A7520
  cmps(c,0,(int32_t)c->r[0],0); // 801A7524
  if (!crb(c,2)) return; // 801A7528
  c->r[0]=0u+0x00000001u; // 801A752C
  c->r[3]=0u+0x801A0000u; // 801A7530
  W32(c->r[13]+0xFFFFB294u,c->r[0]); // 801A7534
  c->r[3]=c->r[3]+0x00007390u; // 801A7538
  f_801AC610(c); return; // 801A753C
  return; // 801A7540
}

// stateReady
void f_801A7550(Ctx* __restrict c) {
  trace_call(0x801A7550u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A7550
  c->r[0]=c->lr; // 801A7554
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A7558
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A755C
  c->r[0]=R32(c->r[13]+0xFFFFB264u); // 801A7560
  cmps(c,0,(int32_t)c->r[0],0); // 801A7564
  if (crb(c,2)) { goto L_801A7580; } // 801A7568
  c->r[3]=0u+0x00000001u; // 801A756C
  c->r[0]=0u+0x00000000u; // 801A7570
  W32(c->r[13]+0xFFFFB268u,c->r[3]); // 801A7574
  W32(c->r[13]+0xFFFFB2F0u,c->r[0]); // 801A7578
  goto L_801A7858; // 801A757C
L_801A7580:;
  c->lr=0x801A7584u; f_801A9520(c); // 801A7580
  cmps(c,0,(int32_t)c->r[3],0); // 801A7584
  if (!crb(c,2)) { goto L_801A7598; } // 801A7588
  c->r[0]=0u+0x00000000u; // 801A758C
  W32(c->r[13]+0xFFFFB2F0u,c->r[0]); // 801A7590
  goto L_801A7858; // 801A7594
L_801A7598:;
  c->lr=0x801A759Cu; f_801A9480(c); // 801A7598
  c->r[0]=R32(c->r[13]+0xFFFFB26Cu); // 801A759C
  W32(c->r[13]+0xFFFFB2F0u,c->r[3]); // 801A75A0
  cmps(c,0,(int32_t)c->r[0],0); // 801A75A4
  if (crb(c,2)) { goto L_801A75E4; } // 801A75A8
  c->r[0]=0u+0xFFFFFFFFu; // 801A75AC
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801A75B0
  c->r[3]=0u+0x802B0000u; // 801A75B4
  c->r[4]=R32(c->r[13]+0xFFFFB2F0u); // 801A75B8
  c->r[3]=c->r[3]+0x00006860u; // 801A75BC
  W32(c->r[13]+0xFFFFB2F0u,c->r[3]); // 801A75C0
  c->r[12]=R32(c->r[4]+0x00000028u); // 801A75C4
  cmps(c,0,(int32_t)c->r[12],0); // 801A75C8
  if (crb(c,2)) { goto L_801A75DC; } // 801A75CC
  c->r[3]=0u+0xFFFFFFFFu; // 801A75D0
  c->ctr=c->r[12]; // 801A75D4
  if (true) { c->lr=0x801A75DCu; dispatch(c,c->ctr); } // 801A75D8
L_801A75DC:;
  c->lr=0x801A75E0u; f_801A7550(c); // 801A75DC
  goto L_801A7858; // 801A75E0
L_801A75E4:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 801A75E4
  W32(c->r[13]+0xFFFFB2E4u,c->r[0]); // 801A75E8
  c->r[0]=R32(c->r[13]+0xFFFFB2E4u); // 801A75EC
  cmpu(c,0,c->r[0],0x00000020u); // 801A75F0
  if (crb(c,2)) { goto L_801A7610; } // 801A75F4
  c->r[0]=R32(c->r[13]+0xFFFFB2E4u); // 801A75F8
  cmpu(c,0,c->r[0],0x0000000Eu); // 801A75FC
  if (crb(c,2)) { goto L_801A7610; } // 801A7600
  c->r[0]=R32(c->r[13]+0xFFFFB2E4u); // 801A7604
  cmpu(c,0,c->r[0],0x00000023u); // 801A7608
  if (!crb(c,2)) { goto L_801A7618; } // 801A760C
L_801A7610:;
  c->r[0]=0u+0x00000000u; // 801A7610
  W32(c->r[13]+0xFFFFB274u,c->r[0]); // 801A7614
L_801A7618:;
  c->r[0]=R32(c->r[13]+0xFFFFB274u); // 801A7618
  cmps(c,0,(int32_t)c->r[0],0); // 801A761C
  if (crb(c,2)) { goto L_801A7800; } // 801A7620
  c->r[4]=R32(c->r[13]+0xFFFFB274u); // 801A7624
  c->r[0]=c->r[4]+0xFFFFFFFAu; // 801A7628
  cmpu(c,0,c->r[0],0x00000001u); // 801A762C
  if (!crb(c,1)) { goto L_801A77D4; } // 801A7630
  cmpu(c,0,c->r[4],0x00000002u); // 801A7634
  if (crb(c,2)) { goto L_801A7660; } // 801A7638
  cmpu(c,0,c->r[4],0x00000003u); // 801A763C
  if (crb(c,2)) { goto L_801A76DC; } // 801A7640
  cmpu(c,0,c->r[4],0x00000004u); // 801A7644
  if (crb(c,2)) { goto L_801A7758; } // 801A7648
  cmpu(c,0,c->r[4],0x00000001u); // 801A764C
  if (crb(c,2)) { goto L_801A77D4; } // 801A7650
  cmpu(c,0,c->r[4],0x00000005u); // 801A7654
  if (crb(c,2)) { goto L_801A77E4; } // 801A7658
  goto L_801A77F4; // 801A765C
L_801A7660:;
  c->r[0]=0u+0x0000000Bu; // 801A7660
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801A7664
  c->r[3]=0u+0x00000001u; // 801A7668
  c->r[0]=R32(c->r[13]+0xFFFFB284u); // 801A766C
  W32(c->r[13]+0xFFFFB2D0u,c->r[3]); // 801A7670
  cmps(c,0,(int32_t)c->r[0],0); // 801A7674
  if (!crb(c,2)) { goto L_801A77F4; } // 801A7678
  c->r[0]=R32(c->r[13]+0xFFFFB288u); // 801A767C
  cmps(c,0,(int32_t)c->r[0],0); // 801A7680
  if (!crb(c,2)) { goto L_801A77F4; } // 801A7684
  c->r[31]=0u+0x802B0000u; // 801A7688
  W32(c->r[13]+0xFFFFB284u,c->r[3]); // 801A768C
  c->r[3]=c->r[31]+0x000068C0u; // 801A7690
  c->lr=0x801A7698u; f_80187C40(c); // 801A7694
  c->lr=0x801A769Cu; f_801915E0(c); // 801A7698
  c->r[5]=0u+0x80000000u; // 801A769C
  c->r[4]=0u+0x10620000u; // 801A76A0
  c->r[0]=R32(c->r[5]+0x000000F8u); // 801A76A4
  c->r[9]=0u+0x801A0000u; // 801A76A8
  c->r[6]=c->r[3]|c->r[3]; // 801A76AC
  c->r[4]=c->r[4]+0x00004DD3u; // 801A76B0
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801A76B4
  c->r[3]=c->r[31]+0x000068C0u; // 801A76B8
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 801A76BC
  c->r[9]=c->r[9]+0x00007520u; // 801A76C0
  c->r[5]=0u+0x00000000u; // 801A76C4
  c->r[7]=0u+0x00000000u; // 801A76C8
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 801A76CC
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 801A76D0
  c->lr=0x801A76D8u; f_80187F10(c); // 801A76D4
  goto L_801A77F4; // 801A76D8
L_801A76DC:;
  c->r[0]=0u+0x00000004u; // 801A76DC
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801A76E0
  c->r[3]=0u+0x00000001u; // 801A76E4
  c->r[0]=R32(c->r[13]+0xFFFFB284u); // 801A76E8
  W32(c->r[13]+0xFFFFB2D0u,c->r[3]); // 801A76EC
  cmps(c,0,(int32_t)c->r[0],0); // 801A76F0
  if (!crb(c,2)) { goto L_801A77F4; } // 801A76F4
  c->r[0]=R32(c->r[13]+0xFFFFB288u); // 801A76F8
  cmps(c,0,(int32_t)c->r[0],0); // 801A76FC
  if (!crb(c,2)) { goto L_801A77F4; } // 801A7700
  c->r[31]=0u+0x802B0000u; // 801A7704
  W32(c->r[13]+0xFFFFB284u,c->r[3]); // 801A7708
  c->r[3]=c->r[31]+0x000068C0u; // 801A770C
  c->lr=0x801A7714u; f_80187C40(c); // 801A7710
  c->lr=0x801A7718u; f_801915E0(c); // 801A7714
  c->r[5]=0u+0x80000000u; // 801A7718
  c->r[4]=0u+0x10620000u; // 801A771C
  c->r[0]=R32(c->r[5]+0x000000F8u); // 801A7720
  c->r[9]=0u+0x801A0000u; // 801A7724
  c->r[6]=c->r[3]|c->r[3]; // 801A7728
  c->r[4]=c->r[4]+0x00004DD3u; // 801A772C
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801A7730
  c->r[3]=c->r[31]+0x000068C0u; // 801A7734
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 801A7738
  c->r[9]=c->r[9]+0x00007520u; // 801A773C
  c->r[5]=0u+0x00000000u; // 801A7740
  c->r[7]=0u+0x00000000u; // 801A7744
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 801A7748
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 801A774C
  c->lr=0x801A7754u; f_80187F10(c); // 801A7750
  goto L_801A77F4; // 801A7754
L_801A7758:;
  c->r[0]=0u+0x00000005u; // 801A7758
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801A775C
  c->r[3]=0u+0x00000001u; // 801A7760
  c->r[0]=R32(c->r[13]+0xFFFFB284u); // 801A7764
  W32(c->r[13]+0xFFFFB2D0u,c->r[3]); // 801A7768
  cmps(c,0,(int32_t)c->r[0],0); // 801A776C
  if (!crb(c,2)) { goto L_801A77F4; } // 801A7770
  c->r[0]=R32(c->r[13]+0xFFFFB288u); // 801A7774
  cmps(c,0,(int32_t)c->r[0],0); // 801A7778
  if (!crb(c,2)) { goto L_801A77F4; } // 801A777C
  c->r[31]=0u+0x802B0000u; // 801A7780
  W32(c->r[13]+0xFFFFB284u,c->r[3]); // 801A7784
  c->r[3]=c->r[31]+0x000068C0u; // 801A7788
  c->lr=0x801A7790u; f_80187C40(c); // 801A778C
  c->lr=0x801A7794u; f_801915E0(c); // 801A7790
  c->r[5]=0u+0x80000000u; // 801A7794
  c->r[4]=0u+0x10620000u; // 801A7798
  c->r[0]=R32(c->r[5]+0x000000F8u); // 801A779C
  c->r[9]=0u+0x801A0000u; // 801A77A0
  c->r[6]=c->r[3]|c->r[3]; // 801A77A4
  c->r[4]=c->r[4]+0x00004DD3u; // 801A77A8
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801A77AC
  c->r[3]=c->r[31]+0x000068C0u; // 801A77B0
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 801A77B4
  c->r[9]=c->r[9]+0x00007520u; // 801A77B8
  c->r[5]=0u+0x00000000u; // 801A77BC
  c->r[7]=0u+0x00000000u; // 801A77C0
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 801A77C4
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 801A77C8
  c->lr=0x801A77D0u; f_80187F10(c); // 801A77CC
  goto L_801A77F4; // 801A77D0
L_801A77D4:;
  c->r[0]=0u+0x00000003u; // 801A77D4
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801A77D8
  c->lr=0x801A77E0u; f_801A6A10(c); // 801A77DC
  goto L_801A77F4; // 801A77E0
L_801A77E4:;
  c->r[4]=0u+0x801A0000u; // 801A77E4
  c->r[3]=R32(c->r[13]+0xFFFFB2DCu); // 801A77E8
  c->r[4]=c->r[4]+0x00004E00u; // 801A77EC
  c->lr=0x801A77F4u; f_801AA000(c); // 801A77F0
L_801A77F4:;
  c->r[0]=0u+0x00000000u; // 801A77F4
  W32(c->r[13]+0xFFFFB274u,c->r[0]); // 801A77F8
  goto L_801A7858; // 801A77FC
L_801A7800:;
  c->r[0]=R32(c->r[13]+0xFFFFB2D0u); // 801A7800
  cmpu(c,0,c->r[0],0x00000002u); // 801A7804
  if (crb(c,2)) { goto L_801A7818; } // 801A7808
  cmps(c,0,(int32_t)c->r[0],0); // 801A780C
  if (crb(c,2)) { goto L_801A7840; } // 801A7810
  goto L_801A7854; // 801A7814
L_801A7818:;
  c->r[0]=R32(c->r[13]+0xFFFFB28Cu); // 801A7818
  cmps(c,0,(int32_t)c->r[0],0); // 801A781C
  if (crb(c,2)) { goto L_801A7830; } // 801A7820
  c->r[0]=0u+0x0000000Cu; // 801A7824
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801A7828
  goto L_801A7858; // 801A782C
L_801A7830:;
  c->r[0]=0u+0x00000003u; // 801A7830
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801A7834
  c->lr=0x801A783Cu; f_801A6A10(c); // 801A7838
  goto L_801A7858; // 801A783C
L_801A7840:;
  c->r[0]=0u+0x00000001u; // 801A7840
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801A7844
  c->r[3]=R32(c->r[13]+0xFFFFB2F0u); // 801A7848
  c->lr=0x801A7850u; f_801A7870(c); // 801A784C
  goto L_801A7858; // 801A7850
L_801A7854:;
  c->lr=0x801A7858u; f_801A6A10(c); // 801A7854
L_801A7858:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A7858
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A785C
  c->lr=c->r[0]; // 801A7860
  c->r[1]=c->r[1]+0x00000010u; // 801A7864
  return; // 801A7868
}

// stateBusy
void f_801A7870(Ctx* __restrict c) {
  trace_call(0x801A7870u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A7870
  c->r[0]=c->lr; // 801A7874
  W32(c->r[1]+0x00000034u,c->r[0]); // 801A7878
  c->r[11]=c->r[1]+0x00000030u; // 801A787C
  c->lr=0x801A7884u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801A7880
  c->r[4]=0u+0x801A0000u; // 801A7884
  c->r[29]=c->r[3]|c->r[3]; // 801A7888
  c->r[4]=c->r[4]+0x00007870u; // 801A788C
  W32(c->r[13]+0xFFFFB2F4u,c->r[4]); // 801A7890
  c->r[30]=R32(c->r[3]+0x00000008u); // 801A7894
  cmpu(c,0,c->r[30],0x0000002Au); // 801A7898
  if (crb(c,1)) { goto L_801A793C; } // 801A789C
  c->r[4]=0u+0x80270000u; // 801A78A0
  c->r[0]=rotl(c->r[30],2)&0xFFFFFFFCu; // 801A78A4
  c->r[4]=c->r[4]+0x000050ACu; // 801A78A8
  c->r[4]=R32(c->r[4]+c->r[0]); // 801A78AC
  c->ctr=c->r[4]; // 801A78B0
  if (true) { switch (c->ctr) { case 0x801A78B8u: goto L_801A78B8; case 0x801A793Cu: goto L_801A793C; case 0x801A7960u: goto L_801A7960; case 0x801A7984u: goto L_801A7984; case 0x801A7AACu: goto L_801A7AAC; case 0x801A7AC8u: goto L_801A7AC8; case 0x801A7AE0u: goto L_801A7AE0; case 0x801A7AF8u: goto L_801A7AF8; case 0x801A7B18u: goto L_801A7B18; case 0x801A7B3Cu: goto L_801A7B3C; case 0x801A7B5Cu: goto L_801A7B5C; case 0x801A7B74u: goto L_801A7B74; case 0x801A7C9Cu: goto L_801A7C9C; case 0x801A7CC8u: goto L_801A7CC8; case 0x801A7CE0u: goto L_801A7CE0; case 0x801A7CF0u: goto L_801A7CF0; case 0x801A7D00u: goto L_801A7D00; case 0x801A7D1Cu: goto L_801A7D1C; case 0x801A7D48u: goto L_801A7D48; case 0x801A7DBCu: goto L_801A7DBC; case 0x801A7DF0u: goto L_801A7DF0; default: break; } dispatch(c,c->ctr); return; } // 801A78B4
L_801A78B8:;
  c->r[26]=R32(c->r[3]+0x00000014u); // 801A78B8
  c->r[27]=R32(c->r[3]+0x00000010u); // 801A78BC
  c->lr=0x801A78C4u; f_8018D6A0(c); // 801A78C0
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A78C4
  c->r[31]=c->r[3]|c->r[3]; // 801A78C8
  cmpu(c,0,c->r[0],0x00000005u); // 801A78CC
  if (crb(c,0)) { goto L_801A78DC; } // 801A78D0
  c->r[0]=0u+0x00000000u; // 801A78D4
  W32(c->r[13]+0xFFFFB260u,c->r[0]); // 801A78D8
L_801A78DC:;
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A78DC
  c->r[28]=0u+0x802B0000u; // 801A78E0
  c->r[3]=R32(c->r[13]+0xFFFFB260u); // 801A78E4
  c->r[28]=c->r[28]+0x00006B80u; // 801A78E8
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A78EC
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A78F0
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801A78F4
  c->r[4]=c->r[28]+c->r[4]; // 801A78F8
  W32(c->r[4]+0x0000001Cu,c->r[30]); // 801A78FC
  c->r[3]=c->r[28]+c->r[3]; // 801A7900
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A7904
  W32(c->r[3]+0x00000020u,c->r[27]); // 801A7908
  c->r[3]=c->r[28]+c->r[0]; // 801A790C
  W32(c->r[3]+0x00000024u,c->r[26]); // 801A7910
  c->lr=0x801A7918u; f_801915E0(c); // 801A7914
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A7918
  c->r[4]=R32(c->r[13]+0xFFFFB260u); // 801A791C
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A7920
  c->r[0]=c->r[4]+0x00000001u; // 801A7924
  W32(c->r[13]+0xFFFFB260u,c->r[0]); // 801A7928
  c->r[4]=c->r[28]+c->r[5]; // 801A792C
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 801A7930
  c->r[3]=c->r[31]|c->r[31]; // 801A7934
  c->lr=0x801A793Cu; f_8018D6E0(c); // 801A7938
L_801A793C:;
  c->r[0]=R32(c->r[29]+0x00000008u); // 801A793C
  cmpu(c,0,c->r[0],0x0000002Au); // 801A7940
  if (crb(c,1)) { goto L_801A7DF0; } // 801A7944
  c->r[3]=0u+0x80270000u; // 801A7948
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801A794C
  c->r[3]=c->r[3]+0x00005000u; // 801A7950
  c->r[3]=R32(c->r[3]+c->r[0]); // 801A7954
  c->ctr=c->r[3]; // 801A7958
  if (true) { switch (c->ctr) { case 0x801A78B8u: goto L_801A78B8; case 0x801A793Cu: goto L_801A793C; case 0x801A7960u: goto L_801A7960; case 0x801A7984u: goto L_801A7984; case 0x801A7AACu: goto L_801A7AAC; case 0x801A7AC8u: goto L_801A7AC8; case 0x801A7AE0u: goto L_801A7AE0; case 0x801A7AF8u: goto L_801A7AF8; case 0x801A7B18u: goto L_801A7B18; case 0x801A7B3Cu: goto L_801A7B3C; case 0x801A7B5Cu: goto L_801A7B5C; case 0x801A7B74u: goto L_801A7B74; case 0x801A7C9Cu: goto L_801A7C9C; case 0x801A7CC8u: goto L_801A7CC8; case 0x801A7CE0u: goto L_801A7CE0; case 0x801A7CF0u: goto L_801A7CF0; case 0x801A7D00u: goto L_801A7D00; case 0x801A7D1Cu: goto L_801A7D1C; case 0x801A7D48u: goto L_801A7D48; case 0x801A7DBCu: goto L_801A7DBC; case 0x801A7DF0u: goto L_801A7DF0; default: break; } dispatch(c,c->ctr); return; } // 801A795C
L_801A7960:;
  c->r[3]=0u+0x00000000u; // 801A7960
  c->lr=0x801A7968u; f_801ACA90(c); // 801A7964
  c->r[0]=0u+0x00000020u; // 801A7968
  c->r[4]=0u+0x801A0000u; // 801A796C
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 801A7970
  c->r[4]=c->r[4]+0x00007E20u; // 801A7974
  c->r[3]=R32(c->r[29]+0x00000018u); // 801A7978
  c->lr=0x801A7980u; f_801AA9A0(c); // 801A797C
  goto L_801A7E08; // 801A7980
L_801A7984:;
  c->r[0]=R32(c->r[29]+0x00000014u); // 801A7984
  cmps(c,0,(int32_t)c->r[0],0); // 801A7988
  if (!crb(c,2)) { goto L_801A79C8; } // 801A798C
  c->r[4]=R32(c->r[13]+0xFFFFB2F0u); // 801A7990
  c->r[3]=0u+0x802B0000u; // 801A7994
  c->r[3]=c->r[3]+0x00006860u; // 801A7998
  c->r[0]=0u+0x00000000u; // 801A799C
  W32(c->r[13]+0xFFFFB2F0u,c->r[3]); // 801A79A0
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 801A79A4
  c->r[12]=R32(c->r[4]+0x00000028u); // 801A79A8
  cmps(c,0,(int32_t)c->r[12],0); // 801A79AC
  if (crb(c,2)) { goto L_801A79C0; } // 801A79B0
  c->r[3]=0u+0x00000000u; // 801A79B4
  c->ctr=c->r[12]; // 801A79B8
  if (true) { c->lr=0x801A79C0u; dispatch(c,c->ctr); } // 801A79BC
L_801A79C0:;
  c->lr=0x801A79C4u; f_801A7550(c); // 801A79C0
  goto L_801A7E08; // 801A79C4
L_801A79C8:;
  c->r[3]=0u+0x00000000u; // 801A79C8
  c->lr=0x801A79D0u; f_801ACA90(c); // 801A79CC
  c->r[4]=R32(c->r[29]+0x00000020u); // 801A79D0
  c->r[0]=0u+0x00080000u; // 801A79D4
  c->r[3]=R32(c->r[29]+0x00000014u); // 801A79D8
  c->r[30]=c->r[3]-c->r[4]; // 801A79DC
  cmpu(c,0,c->r[30],c->r[0]); // 801A79E0
  if (!crb(c,1)) { goto L_801A79EC; } // 801A79E4
  c->r[30]=0u+0x00080000u; // 801A79E8
L_801A79EC:;
  c->r[0]=R32(c->r[29]+0x00000020u); // 801A79EC
  c->r[3]=R32(c->r[29]+0x00000010u); // 801A79F0
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801A79F4
  W32(c->r[29]+0x0000001Cu,c->r[30]); // 801A79F8
  c->r[26]=R32(c->r[29]+0x00000008u); // 801A79FC
  c->r[27]=c->r[3]+c->r[0]; // 801A7A00
  c->lr=0x801A7A08u; f_8018D6A0(c); // 801A7A04
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A7A08
  c->r[31]=c->r[3]|c->r[3]; // 801A7A0C
  cmpu(c,0,c->r[0],0x00000005u); // 801A7A10
  if (crb(c,0)) { goto L_801A7A20; } // 801A7A14
  c->r[0]=0u+0x00000000u; // 801A7A18
  W32(c->r[13]+0xFFFFB260u,c->r[0]); // 801A7A1C
L_801A7A20:;
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A7A20
  c->r[28]=0u+0x802B0000u; // 801A7A24
  c->r[3]=R32(c->r[13]+0xFFFFB260u); // 801A7A28
  c->r[28]=c->r[28]+0x00006B80u; // 801A7A2C
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A7A30
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A7A34
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801A7A38
  c->r[4]=c->r[28]+c->r[4]; // 801A7A3C
  W32(c->r[4]+0x0000001Cu,c->r[26]); // 801A7A40
  c->r[3]=c->r[28]+c->r[3]; // 801A7A44
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A7A48
  W32(c->r[3]+0x00000020u,c->r[27]); // 801A7A4C
  c->r[3]=c->r[28]+c->r[0]; // 801A7A50
  W32(c->r[3]+0x00000024u,c->r[30]); // 801A7A54
  c->lr=0x801A7A5Cu; f_801915E0(c); // 801A7A58
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A7A5C
  c->r[4]=R32(c->r[13]+0xFFFFB260u); // 801A7A60
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A7A64
  c->r[0]=c->r[4]+0x00000001u; // 801A7A68
  W32(c->r[13]+0xFFFFB260u,c->r[0]); // 801A7A6C
  c->r[4]=c->r[28]+c->r[5]; // 801A7A70
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 801A7A74
  c->r[3]=c->r[31]|c->r[31]; // 801A7A78
  c->lr=0x801A7A80u; f_8018D6E0(c); // 801A7A7C
  c->r[3]=R32(c->r[29]+0x00000020u); // 801A7A80
  c->r[6]=0u+0x801A0000u; // 801A7A84
  c->r[7]=R32(c->r[29]+0x00000018u); // 801A7A88
  c->r[6]=c->r[6]+0x00007E20u; // 801A7A8C
  c->r[0]=rotl(c->r[3],30)&0x3FFFFFFFu; // 801A7A90
  c->r[5]=R32(c->r[29]+0x00000010u); // 801A7A94
  c->r[4]=R32(c->r[29]+0x0000001Cu); // 801A7A98
  c->r[3]=c->r[7]+c->r[3]; // 801A7A9C
  c->r[5]=c->r[5]+c->r[0]; // 801A7AA0
  c->lr=0x801A7AA8u; f_801AC2B0(c); // 801A7AA4
  goto L_801A7E08; // 801A7AA8
L_801A7AAC:;
  c->r[3]=0u+0x00000000u; // 801A7AAC
  c->lr=0x801A7AB4u; f_801ACA90(c); // 801A7AB0
  c->r[4]=0u+0x801A0000u; // 801A7AB4
  c->r[3]=R32(c->r[29]+0x00000010u); // 801A7AB8
  c->r[4]=c->r[4]+0x00007E20u; // 801A7ABC
  c->lr=0x801A7AC4u; f_801AC460(c); // 801A7AC0
  goto L_801A7E08; // 801A7AC4
L_801A7AC8:;
  c->r[5]=0u+0x801A0000u; // 801A7AC8
  c->r[3]=0u+0x00000000u; // 801A7ACC
  c->r[5]=c->r[5]+0x00007E20u; // 801A7AD0
  c->r[4]=0u+0x00000000u; // 801A7AD4
  c->lr=0x801A7ADCu; f_801AB7D0(c); // 801A7AD8
  goto L_801A7E08; // 801A7ADC
L_801A7AE0:;
  c->r[5]=0u+0x801A0000u; // 801A7AE0
  c->r[3]=0u+0x00000000u; // 801A7AE4
  c->r[5]=c->r[5]+0x00007E20u; // 801A7AE8
  c->r[4]=0u+0x00000000u; // 801A7AEC
  c->lr=0x801A7AF4u; f_801AB7D0(c); // 801A7AF0
  goto L_801A7E08; // 801A7AF4
L_801A7AF8:;
  c->r[3]=0u+0x00000000u; // 801A7AF8
  c->lr=0x801A7B00u; f_801ACA90(c); // 801A7AFC
  c->r[5]=0u+0x801A0000u; // 801A7B00
  c->r[3]=R32(c->r[29]+0x00000010u); // 801A7B04
  c->r[4]=R32(c->r[29]+0x00000014u); // 801A7B08
  c->r[5]=c->r[5]+0x00007E20u; // 801A7B0C
  c->lr=0x801A7B14u; f_801ABDE0(c); // 801A7B10
  goto L_801A7E08; // 801A7B14
L_801A7B18:;
  c->r[3]=0u+0x00000000u; // 801A7B18
  c->lr=0x801A7B20u; f_801ACA90(c); // 801A7B1C
  c->r[0]=0u+0x00000020u; // 801A7B20
  c->r[4]=0u+0x801A0000u; // 801A7B24
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 801A7B28
  c->r[4]=c->r[4]+0x00007E20u; // 801A7B2C
  c->r[3]=R32(c->r[29]+0x00000018u); // 801A7B30
  c->lr=0x801A7B38u; f_801AB970(c); // 801A7B34
  goto L_801A7E08; // 801A7B38
L_801A7B3C:;
  c->r[3]=0u+0x00000000u; // 801A7B3C
  c->lr=0x801A7B44u; f_801ACA90(c); // 801A7B40
  c->r[5]=0u+0x801A0000u; // 801A7B44
  c->r[3]=0u+0x00000000u; // 801A7B48
  c->r[5]=c->r[5]+0x00007E20u; // 801A7B4C
  c->r[4]=0u+0x00000000u; // 801A7B50
  c->lr=0x801A7B58u; f_801AB7D0(c); // 801A7B54
  goto L_801A7E08; // 801A7B58
L_801A7B5C:;
  c->r[3]=0u+0x00000001u; // 801A7B5C
  c->lr=0x801A7B64u; f_801ABC50(c); // 801A7B60
  c->r[3]=0u+0x801A0000u; // 801A7B64
  c->r[3]=c->r[3]+0x00007E20u; // 801A7B68
  c->lr=0x801A7B70u; f_801ABC60(c); // 801A7B6C
  goto L_801A7E08; // 801A7B70
L_801A7B74:;
  c->r[0]=R32(c->r[29]+0x00000014u); // 801A7B74
  cmps(c,0,(int32_t)c->r[0],0); // 801A7B78
  if (!crb(c,2)) { goto L_801A7BB8; } // 801A7B7C
  c->r[4]=R32(c->r[13]+0xFFFFB2F0u); // 801A7B80
  c->r[3]=0u+0x802B0000u; // 801A7B84
  c->r[3]=c->r[3]+0x00006860u; // 801A7B88
  c->r[0]=0u+0x00000000u; // 801A7B8C
  W32(c->r[13]+0xFFFFB2F0u,c->r[3]); // 801A7B90
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 801A7B94
  c->r[12]=R32(c->r[4]+0x00000028u); // 801A7B98
  cmps(c,0,(int32_t)c->r[12],0); // 801A7B9C
  if (crb(c,2)) { goto L_801A7BB0; } // 801A7BA0
  c->r[3]=0u+0x00000000u; // 801A7BA4
  c->ctr=c->r[12]; // 801A7BA8
  if (true) { c->lr=0x801A7BB0u; dispatch(c,c->ctr); } // 801A7BAC
L_801A7BB0:;
  c->lr=0x801A7BB4u; f_801A7550(c); // 801A7BB0
  goto L_801A7E08; // 801A7BB4
L_801A7BB8:;
  c->r[3]=0u+0x00000000u; // 801A7BB8
  c->lr=0x801A7BC0u; f_801ACA90(c); // 801A7BBC
  c->r[4]=R32(c->r[29]+0x00000020u); // 801A7BC0
  c->r[0]=0u+0x00080000u; // 801A7BC4
  c->r[3]=R32(c->r[29]+0x00000014u); // 801A7BC8
  c->r[30]=c->r[3]-c->r[4]; // 801A7BCC
  cmpu(c,0,c->r[30],c->r[0]); // 801A7BD0
  if (!crb(c,1)) { goto L_801A7BDC; } // 801A7BD4
  c->r[30]=0u+0x00080000u; // 801A7BD8
L_801A7BDC:;
  c->r[0]=R32(c->r[29]+0x00000020u); // 801A7BDC
  c->r[3]=R32(c->r[29]+0x00000010u); // 801A7BE0
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801A7BE4
  W32(c->r[29]+0x0000001Cu,c->r[30]); // 801A7BE8
  c->r[26]=R32(c->r[29]+0x00000008u); // 801A7BEC
  c->r[27]=c->r[3]+c->r[0]; // 801A7BF0
  c->lr=0x801A7BF8u; f_8018D6A0(c); // 801A7BF4
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A7BF8
  c->r[31]=c->r[3]|c->r[3]; // 801A7BFC
  cmpu(c,0,c->r[0],0x00000005u); // 801A7C00
  if (crb(c,0)) { goto L_801A7C10; } // 801A7C04
  c->r[0]=0u+0x00000000u; // 801A7C08
  W32(c->r[13]+0xFFFFB260u,c->r[0]); // 801A7C0C
L_801A7C10:;
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A7C10
  c->r[28]=0u+0x802B0000u; // 801A7C14
  c->r[3]=R32(c->r[13]+0xFFFFB260u); // 801A7C18
  c->r[28]=c->r[28]+0x00006B80u; // 801A7C1C
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A7C20
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A7C24
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801A7C28
  c->r[4]=c->r[28]+c->r[4]; // 801A7C2C
  W32(c->r[4]+0x0000001Cu,c->r[26]); // 801A7C30
  c->r[3]=c->r[28]+c->r[3]; // 801A7C34
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A7C38
  W32(c->r[3]+0x00000020u,c->r[27]); // 801A7C3C
  c->r[3]=c->r[28]+c->r[0]; // 801A7C40
  W32(c->r[3]+0x00000024u,c->r[30]); // 801A7C44
  c->lr=0x801A7C4Cu; f_801915E0(c); // 801A7C48
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A7C4C
  c->r[4]=R32(c->r[13]+0xFFFFB260u); // 801A7C50
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A7C54
  c->r[0]=c->r[4]+0x00000001u; // 801A7C58
  W32(c->r[13]+0xFFFFB260u,c->r[0]); // 801A7C5C
  c->r[4]=c->r[28]+c->r[5]; // 801A7C60
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 801A7C64
  c->r[3]=c->r[31]|c->r[31]; // 801A7C68
  c->lr=0x801A7C70u; f_8018D6E0(c); // 801A7C6C
  c->r[3]=R32(c->r[29]+0x00000020u); // 801A7C70
  c->r[6]=0u+0x801A0000u; // 801A7C74
  c->r[7]=R32(c->r[29]+0x00000018u); // 801A7C78
  c->r[6]=c->r[6]+0x00007E20u; // 801A7C7C
  c->r[0]=rotl(c->r[3],30)&0x3FFFFFFFu; // 801A7C80
  c->r[5]=R32(c->r[29]+0x00000010u); // 801A7C84
  c->r[4]=R32(c->r[29]+0x0000001Cu); // 801A7C88
  c->r[3]=c->r[7]+c->r[3]; // 801A7C8C
  c->r[5]=c->r[5]+c->r[0]; // 801A7C90
  c->lr=0x801A7C98u; f_801AB630(c); // 801A7C94
  goto L_801A7E08; // 801A7C98
L_801A7C9C:;
  c->r[3]=0u+0x00000000u; // 801A7C9C
  c->lr=0x801A7CA4u; f_801ACA90(c); // 801A7CA0
  c->r[8]=0u+0x801A0000u; // 801A7CA4
  c->r[3]=R32(c->r[29]+0x00000010u); // 801A7CA8
  c->r[7]=R32(c->r[29]+0x00000018u); // 801A7CAC
  c->r[8]=c->r[8]+0x00007E20u; // 801A7CB0
  c->r[4]=0u+0x00000000u; // 801A7CB4
  c->r[5]=0u+0x00000000u; // 801A7CB8
  c->r[6]=0u+0x00000000u; // 801A7CBC
  c->lr=0x801A7CC4u; f_801AAB30(c); // 801A7CC0
  goto L_801A7E08; // 801A7CC4
L_801A7CC8:;
  c->r[3]=0u+0x00000000u; // 801A7CC8
  c->lr=0x801A7CD0u; f_801ACA90(c); // 801A7CCC
  c->r[3]=0u+0x801A0000u; // 801A7CD0
  c->r[3]=c->r[3]+0x00007E20u; // 801A7CD4
  c->lr=0x801A7CDCu; f_801AB4C0(c); // 801A7CD8
  goto L_801A7E08; // 801A7CDC
L_801A7CE0:;
  c->r[3]=0u+0x801A0000u; // 801A7CE0
  c->r[3]=c->r[3]+0x00007E20u; // 801A7CE4
  c->lr=0x801A7CECu; f_801AC610(c); // 801A7CE8
  goto L_801A7E08; // 801A7CEC
L_801A7CF0:;
  c->r[3]=0u+0x801A0000u; // 801A7CF0
  c->r[3]=c->r[3]+0x00007E20u; // 801A7CF4
  c->lr=0x801A7CFCu; f_801AC610(c); // 801A7CF8
  goto L_801A7E08; // 801A7CFC
L_801A7D00:;
  c->r[3]=0u+0x00000000u; // 801A7D00
  c->lr=0x801A7D08u; f_801ACA90(c); // 801A7D04
  c->r[4]=0u+0x801A0000u; // 801A7D08
  c->r[3]=0u+0x00020000u; // 801A7D0C
  c->r[4]=c->r[4]+0x00007E20u; // 801A7D10
  c->lr=0x801A7D18u; f_801AC120(c); // 801A7D14
  goto L_801A7E08; // 801A7D18
L_801A7D1C:;
  c->r[3]=0u+0x00000000u; // 801A7D1C
  c->lr=0x801A7D24u; f_801ACA90(c); // 801A7D20
  c->r[3]=0u+0x802B0000u; // 801A7D24
  c->r[0]=0u+0x00000020u; // 801A7D28
  c->r[3]=c->r[3]+0x00006900u; // 801A7D2C
  c->r[4]=0u+0x801A0000u; // 801A7D30
  W32(c->r[29]+0x00000018u,c->r[3]); // 801A7D34
  c->r[4]=c->r[4]+0x00007E20u; // 801A7D38
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 801A7D3C
  c->lr=0x801A7D44u; f_801AA9A0(c); // 801A7D40
  goto L_801A7E08; // 801A7D44
L_801A7D48:;
  c->r[3]=0u+0x00000000u; // 801A7D48
  c->lr=0x801A7D50u; f_801ACA90(c); // 801A7D4C
  c->r[10]=R32(c->r[29]+0x00000018u); // 801A7D50
  c->r[0]=R32(c->r[10]+0x000003A0u); // 801A7D54
  cmps(c,0,(int32_t)c->r[0],0); // 801A7D58
  if (!crb(c,2)) { goto L_801A7D88; } // 801A7D5C
  c->r[0]=R32(c->r[10]+0x00004DC0u); // 801A7D60
  cmps(c,0,(int32_t)c->r[0],0); // 801A7D64
  if (!crb(c,2)) { goto L_801A7D88; } // 801A7D68
  c->r[6]=0u+0x801A0000u; // 801A7D6C
  c->r[3]=R32(c->r[29]+0x00000010u); // 801A7D70
  c->r[4]=c->r[10]+0x000003A0u; // 801A7D74
  c->r[5]=c->r[10]+0x00004DC0u; // 801A7D78
  c->r[6]=c->r[6]+0x00007E20u; // 801A7D7C
  c->lr=0x801A7D84u; f_801AB010(c); // 801A7D80
  goto L_801A7E08; // 801A7D84
L_801A7D88:;
  c->r[3]=0u+0x801A0000u; // 801A7D88
  c->r[4]=c->r[10]|c->r[10]; // 801A7D8C
  c->r[3]=c->r[3]+0x00007E20u; // 801A7D90
  W32(c->r[1]+0x00000008u,c->r[3]); // 801A7D94
  c->r[5]=c->r[10]+0x000003A0u; // 801A7D98
  c->r[6]=c->r[10]+0x000003C0u; // 801A7D9C
  c->r[3]=R32(c->r[29]+0x00000010u); // 801A7DA0
  c->r[7]=c->r[10]+0x00004DC0u; // 801A7DA4
  c->r[8]=c->r[10]+0x00004DE0u; // 801A7DA8
  c->r[9]=c->r[10]+0x00005DE0u; // 801A7DAC
  c->r[10]=c->r[10]+0x00005E00u; // 801A7DB0
  c->lr=0x801A7DB8u; f_801AB220(c); // 801A7DB4
  goto L_801A7E08; // 801A7DB8
L_801A7DBC:;
  c->r[3]=0u+0x00000000u; // 801A7DBC
  c->lr=0x801A7DC4u; f_801ACA90(c); // 801A7DC0
  c->r[8]=R32(c->r[29]+0x00000018u); // 801A7DC4
  c->r[9]=0u+0x801A0000u; // 801A7DC8
  c->r[3]=R32(c->r[29]+0x00000010u); // 801A7DCC
  c->r[9]=c->r[9]+0x00007E20u; // 801A7DD0
  c->r[5]=R32(c->r[8]+0x000003A0u); // 801A7DD4
  c->r[4]=c->r[8]+0x000002C0u; // 801A7DD8
  c->r[7]=R32(c->r[8]+0x00004DC0u); // 801A7DDC
  c->r[6]=c->r[8]+0x000003C0u; // 801A7DE0
  c->r[8]=c->r[8]+0x00004DE0u; // 801A7DE4
  c->lr=0x801A7DECu; f_801AADA0(c); // 801A7DE8
  goto L_801A7E08; // 801A7DEC
L_801A7DF0:;
  c->r[12]=R32(c->r[13]+0xFFFFA868u); // 801A7DF0
  c->r[4]=0u+0x801A0000u; // 801A7DF4
  c->r[3]=c->r[29]|c->r[29]; // 801A7DF8
  c->r[4]=c->r[4]+0x00007E20u; // 801A7DFC
  c->ctr=c->r[12]; // 801A7E00
  if (true) { c->lr=0x801A7E08u; dispatch(c,c->ctr); } // 801A7E04
L_801A7E08:;
  c->r[11]=c->r[1]+0x00000030u; // 801A7E08
  c->lr=0x801A7E10u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801A7E0C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801A7E10
  c->lr=c->r[0]; // 801A7E14
  c->r[1]=c->r[1]+0x00000030u; // 801A7E18
  return; // 801A7E1C
}

// cbForStateBusy
void f_801A7E20(Ctx* __restrict c) {
  trace_call(0x801A7E20u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A7E20
  c->r[0]=c->lr; // 801A7E24
  W32(c->r[1]+0x00000024u,c->r[0]); // 801A7E28
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801A7E2C
  c->r[31]=c->r[3]|c->r[3]; // 801A7E30
  W32(c->r[1]+0x00000018u,c->r[30]); // 801A7E34
  c->r[30]=0u+0x802B0000u; // 801A7E38
  c->r[30]=c->r[30]+0x00001D40u; // 801A7E3C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801A7E40
  c->lr=0x801A7E48u; f_8018D6A0(c); // 801A7E44
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A7E48
  cmps(c,0,(int32_t)c->r[0],0); // 801A7E4C
  if (!crb(c,2)) { goto L_801A7E64; } // 801A7E50
  c->r[4]=0u+0x802B0000u; // 801A7E54
  c->r[4]=c->r[4]+0x00006B80u; // 801A7E58
  W32(c->r[4]+0x00000078u,c->r[31]); // 801A7E5C
  goto L_801A7E80; // 801A7E60
L_801A7E64:;
  c->r[4]=R32(c->r[13]+0xFFFFB260u); // 801A7E64
  c->r[5]=0u+0x802B0000u; // 801A7E68
  c->r[5]=c->r[5]+0x00006B80u; // 801A7E6C
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801A7E70
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A7E74
  c->r[4]=c->r[5]+c->r[0]; // 801A7E78
  W32(c->r[4]+0x00000028u,c->r[31]); // 801A7E7C
L_801A7E80:;
  c->lr=0x801A7E84u; f_8018D6E0(c); // 801A7E80
  cmpu(c,0,c->r[31],0x00000010u); // 801A7E84
  if (!crb(c,2)) { goto L_801A7EA4; } // 801A7E88
  c->r[3]=0u+0x01230000u; // 801A7E8C
  c->r[4]=0u+0x801A0000u; // 801A7E90
  c->r[3]=c->r[3]+0x00004568u; // 801A7E94
  c->r[4]=c->r[4]+0x00004E20u; // 801A7E98
  c->lr=0x801A7EA0u; f_801AA000(c); // 801A7E9C
  goto L_801A87E4; // 801A7EA0
L_801A7EA4:;
  cmpu(c,0,c->r[31],0x00000020u); // 801A7EA4
  if (!crb(c,2)) { goto L_801A7EC4; } // 801A7EA8
  c->r[3]=0u+0x01230000u; // 801A7EAC
  c->r[4]=0u+0x801A0000u; // 801A7EB0
  c->r[3]=c->r[3]+0x00004569u; // 801A7EB4
  c->r[4]=c->r[4]+0x00004E20u; // 801A7EB8
  c->lr=0x801A7EC0u; f_801AA000(c); // 801A7EBC
  goto L_801A87E4; // 801A7EC0
L_801A7EC4:;
  c->r[0]=R32(c->r[13]+0xFFFFB2E4u); // 801A7EC4
  cmpu(c,0,c->r[0],0x00000003u); // 801A7EC8
  if (crb(c,2)) { goto L_801A7EDC; } // 801A7ECC
  c->r[0]=R32(c->r[13]+0xFFFFB2E4u); // 801A7ED0
  cmpu(c,0,c->r[0],0x0000000Fu); // 801A7ED4
  if (!crb(c,2)) { goto L_801A8020; } // 801A7ED8
L_801A7EDC:;
  c->r[0]=rotl(c->r[31],0)&0x00000002u; cr0(c,c->r[0]); // 801A7EDC
  if (crb(c,2)) { goto L_801A7EFC; } // 801A7EE0
  c->r[3]=0u+0x01230000u; // 801A7EE4
  c->r[4]=0u+0x801A0000u; // 801A7EE8
  c->r[3]=c->r[3]+0x00004567u; // 801A7EEC
  c->r[4]=c->r[4]+0x00004E00u; // 801A7EF0
  c->lr=0x801A7EF8u; f_801AA000(c); // 801A7EF4
  goto L_801A87E4; // 801A7EF8
L_801A7EFC:;
  c->r[0]=0u+0x00000000u; // 801A7EFC
  W32(c->r[13]+0xFFFFB278u,c->r[0]); // 801A7F00
  c->r[0]=R32(c->r[13]+0xFFFFB2E4u); // 801A7F04
  cmpu(c,0,c->r[0],0x0000000Fu); // 801A7F08
  if (!crb(c,2)) { goto L_801A7F18; } // 801A7F0C
  c->r[0]=0u+0x00000001u; // 801A7F10
  W32(c->r[13]+0xFFFFB2D4u,c->r[0]); // 801A7F14
L_801A7F18:;
  c->r[0]=R32(c->r[13]+0xFFFFB270u); // 801A7F18
  cmps(c,0,(int32_t)c->r[0],0); // 801A7F1C
  if (crb(c,2)) { goto L_801A7F8C; } // 801A7F20
  c->r[29]=R32(c->r[13]+0xFFFFB2F0u); // 801A7F24
  c->r[3]=c->r[30]+0x00004B20u; // 801A7F28
  c->r[0]=0u+0x00000007u; // 801A7F2C
  W32(c->r[13]+0xFFFFB274u,c->r[0]); // 801A7F30
  c->r[4]=0u+0x00000000u; // 801A7F34
  W32(c->r[13]+0xFFFFB270u,c->r[4]); // 801A7F38
  c->r[0]=0u+0x0000000Au; // 801A7F3C
  W32(c->r[13]+0xFFFFB2F0u,c->r[3]); // 801A7F40
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 801A7F44
  c->r[12]=R32(c->r[29]+0x00000028u); // 801A7F48
  cmps(c,0,(int32_t)c->r[12],0); // 801A7F4C
  if (crb(c,2)) { goto L_801A7F64; } // 801A7F50
  c->r[4]=c->r[29]|c->r[29]; // 801A7F54
  c->r[3]=0u+0xFFFFFFFDu; // 801A7F58
  c->ctr=c->r[12]; // 801A7F5C
  if (true) { c->lr=0x801A7F64u; dispatch(c,c->ctr); } // 801A7F60
L_801A7F64:;
  c->r[12]=R32(c->r[13]+0xFFFFB2E0u); // 801A7F64
  cmps(c,0,(int32_t)c->r[12],0); // 801A7F68
  if (crb(c,2)) { goto L_801A7F80; } // 801A7F6C
  c->r[4]=c->r[29]|c->r[29]; // 801A7F70
  c->r[3]=0u+0x00000000u; // 801A7F74
  c->ctr=c->r[12]; // 801A7F78
  if (true) { c->lr=0x801A7F80u; dispatch(c,c->ctr); } // 801A7F7C
L_801A7F80:;
  c->lr=0x801A7F84u; f_801A7550(c); // 801A7F80
  c->r[0]=0u+0x00000001u; // 801A7F84
  goto L_801A7F90; // 801A7F88
L_801A7F8C:;
  c->r[0]=0u+0x00000000u; // 801A7F8C
L_801A7F90:;
  cmps(c,0,(int32_t)c->r[0],0); // 801A7F90
  if (!crb(c,2)) { goto L_801A87E4; } // 801A7F94
  c->r[0]=R32(c->r[13]+0xFFFFB2D0u); // 801A7F98
  cmpu(c,0,c->r[0],0x00000002u); // 801A7F9C
  if (crb(c,2)) { goto L_801A87E4; } // 801A7FA0
  c->r[4]=R32(c->r[13]+0xFFFFB2F0u); // 801A7FA4
  c->r[0]=0u+0x00000007u; // 801A7FA8
  c->r[3]=0u+0x00000001u; // 801A7FAC
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 801A7FB0
  c->r[0]=R32(c->r[13]+0xFFFFB284u); // 801A7FB4
  W32(c->r[13]+0xFFFFB2D0u,c->r[3]); // 801A7FB8
  cmps(c,0,(int32_t)c->r[0],0); // 801A7FBC
  if (!crb(c,2)) { goto L_801A87E4; } // 801A7FC0
  c->r[0]=R32(c->r[13]+0xFFFFB288u); // 801A7FC4
  cmps(c,0,(int32_t)c->r[0],0); // 801A7FC8
  if (!crb(c,2)) { goto L_801A87E4; } // 801A7FCC
  W32(c->r[13]+0xFFFFB284u,c->r[3]); // 801A7FD0
  c->r[3]=c->r[30]+0x00004B80u; // 801A7FD4
  c->lr=0x801A7FDCu; f_80187C40(c); // 801A7FD8
  c->lr=0x801A7FE0u; f_801915E0(c); // 801A7FDC
  c->r[5]=0u+0x80000000u; // 801A7FE0
  c->r[4]=0u+0x10620000u; // 801A7FE4
  c->r[0]=R32(c->r[5]+0x000000F8u); // 801A7FE8
  c->r[9]=0u+0x801A0000u; // 801A7FEC
  c->r[6]=c->r[3]|c->r[3]; // 801A7FF0
  c->r[4]=c->r[4]+0x00004DD3u; // 801A7FF4
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801A7FF8
  c->r[3]=c->r[30]+0x00004B80u; // 801A7FFC
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 801A8000
  c->r[9]=c->r[9]+0x00007520u; // 801A8004
  c->r[5]=0u+0x00000000u; // 801A8008
  c->r[7]=0u+0x00000000u; // 801A800C
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 801A8010
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 801A8014
  c->lr=0x801A801Cu; f_80187F10(c); // 801A8018
  goto L_801A87E4; // 801A801C
L_801A8020:;
  c->r[4]=R32(c->r[13]+0xFFFFB2E4u); // 801A8020
  cmpu(c,0,c->r[4],0x00000001u); // 801A8024
  if (crb(c,2)) { goto L_801A804C; } // 801A8028
  cmpu(c,0,c->r[4],0x00000004u); // 801A802C
  if (crb(c,2)) { goto L_801A804C; } // 801A8030
  cmpu(c,0,c->r[4],0x00000005u); // 801A8034
  if (crb(c,2)) { goto L_801A804C; } // 801A8038
  cmpu(c,0,c->r[4],0x00000021u); // 801A803C
  if (crb(c,2)) { goto L_801A804C; } // 801A8040
  cmpu(c,0,c->r[4],0x0000000Eu); // 801A8044
  if (!crb(c,2)) { goto L_801A8054; } // 801A8048
L_801A804C:;
  c->r[0]=0u+0x00000001u; // 801A804C
  goto L_801A806C; // 801A8050
L_801A8054:;
  c->r[0]=R32(c->r[13]+0xFFFFA874u); // 801A8054
  cmpu(c,0,c->r[4],c->r[0]); // 801A8058
  if (!crb(c,2)) { goto L_801A8068; } // 801A805C
  c->r[0]=0u+0x00000001u; // 801A8060
  goto L_801A806C; // 801A8064
L_801A8068:;
  c->r[0]=0u+0x00000000u; // 801A8068
L_801A806C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801A806C
  if (crb(c,2)) { goto L_801A809C; } // 801A8070
  c->r[0]=c->r[31]&0x00000009u; cr0(c,c->r[0]); // 801A8074
  if (crb(c,2)) { goto L_801A8088; } // 801A8078
  c->r[3]=R32(c->r[13]+0xFFFFB2F0u); // 801A807C
  c->r[4]=R32(c->r[3]+0x0000001Cu); // 801A8080
  goto L_801A808C; // 801A8084
L_801A8088:;
  c->r[4]=0u+0x00000000u; // 801A8088
L_801A808C:;
  c->r[3]=R32(c->r[13]+0xFFFFB2F0u); // 801A808C
  c->r[0]=R32(c->r[3]+0x00000020u); // 801A8090
  c->r[0]=c->r[0]+c->r[4]; // 801A8094
  W32(c->r[3]+0x00000020u,c->r[0]); // 801A8098
L_801A809C:;
  c->r[0]=R32(c->r[13]+0xFFFFB280u); // 801A809C
  cmps(c,0,(int32_t)c->r[0],0); // 801A80A0
  if (crb(c,2)) { goto L_801A8108; } // 801A80A4
  c->r[31]=R32(c->r[13]+0xFFFFB2F0u); // 801A80A8
  c->r[4]=0u+0x00000000u; // 801A80AC
  W32(c->r[13]+0xFFFFB280u,c->r[4]); // 801A80B0
  c->r[3]=c->r[30]+0x00004B20u; // 801A80B4
  c->r[0]=0u+0x0000000Au; // 801A80B8
  W32(c->r[13]+0xFFFFB270u,c->r[4]); // 801A80BC
  W32(c->r[13]+0xFFFFB2F0u,c->r[3]); // 801A80C0
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801A80C4
  c->r[12]=R32(c->r[31]+0x00000028u); // 801A80C8
  cmps(c,0,(int32_t)c->r[12],0); // 801A80CC
  if (crb(c,2)) { goto L_801A80E4; } // 801A80D0
  c->r[4]=c->r[31]|c->r[31]; // 801A80D4
  c->r[3]=0u+0xFFFFFFFDu; // 801A80D8
  c->ctr=c->r[12]; // 801A80DC
  if (true) { c->lr=0x801A80E4u; dispatch(c,c->ctr); } // 801A80E0
L_801A80E4:;
  c->r[12]=R32(c->r[13]+0xFFFFB2E0u); // 801A80E4
  cmps(c,0,(int32_t)c->r[12],0); // 801A80E8
  if (crb(c,2)) { goto L_801A8100; } // 801A80EC
  c->r[4]=c->r[31]|c->r[31]; // 801A80F0
  c->r[3]=0u+0x00000000u; // 801A80F4
  c->ctr=c->r[12]; // 801A80F8
  if (true) { c->lr=0x801A8100u; dispatch(c,c->ctr); } // 801A80FC
L_801A8100:;
  c->lr=0x801A8104u; f_801A7550(c); // 801A8100
  goto L_801A87E4; // 801A8104
L_801A8108:;
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 801A8108
  if (crb(c,2)) { goto L_801A86A4; } // 801A810C
  c->r[29]=0u+0x00000000u; // 801A8110
  W32(c->r[13]+0xFFFFB278u,c->r[29]); // 801A8114
  c->r[0]=R32(c->r[13]+0xFFFFB2E4u); // 801A8118
  cmpu(c,0,c->r[0],0x00000010u); // 801A811C
  if (!crb(c,2)) { goto L_801A8180; } // 801A8120
  c->r[3]=R32(c->r[13]+0xFFFFB2F0u); // 801A8124
  c->r[0]=R32(c->r[3]+0x00000010u); // 801A8128
  cmps(c,0,(int32_t)c->r[0],0); // 801A812C
  if (crb(c,2)) { goto L_801A8140; } // 801A8130
  c->r[0]=0u+0x00000002u; // 801A8134
  W32(c->r[13]+0xFFFFB2D0u,c->r[0]); // 801A8138
  goto L_801A8148; // 801A813C
L_801A8140:;
  c->r[0]=0u+0x00000001u; // 801A8140
  W32(c->r[13]+0xFFFFB2D0u,c->r[0]); // 801A8144
L_801A8148:;
  c->r[31]=R32(c->r[13]+0xFFFFB2F0u); // 801A8148
  c->r[3]=c->r[30]+0x00004B20u; // 801A814C
  c->r[0]=0u+0x00000000u; // 801A8150
  W32(c->r[13]+0xFFFFB2F0u,c->r[3]); // 801A8154
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801A8158
  c->r[12]=R32(c->r[31]+0x00000028u); // 801A815C
  cmps(c,0,(int32_t)c->r[12],0); // 801A8160
  if (crb(c,2)) { goto L_801A8178; } // 801A8164
  c->r[4]=c->r[31]|c->r[31]; // 801A8168
  c->r[3]=0u+0x00000000u; // 801A816C
  c->ctr=c->r[12]; // 801A8170
  if (true) { c->lr=0x801A8178u; dispatch(c,c->ctr); } // 801A8174
L_801A8178:;
  c->lr=0x801A817Cu; f_801A7550(c); // 801A8178
  goto L_801A87E4; // 801A817C
L_801A8180:;
  c->r[0]=R32(c->r[13]+0xFFFFB2E4u); // 801A8180
  cmpu(c,0,c->r[0],0x00000020u); // 801A8184
  if (!crb(c,2)) { goto L_801A81D4; } // 801A8188
  c->lr=0x801A8190u; f_801915F0(c); // 801A818C
  c->r[31]=R32(c->r[13]+0xFFFFB2F0u); // 801A8190
  c->r[0]=c->r[30]+0x00004B20u; // 801A8194
  W32(c->r[13]+0xFFFFB2CCu,c->r[4]); // 801A8198
  W32(c->r[13]+0xFFFFB2C8u,c->r[3]); // 801A819C
  W32(c->r[13]+0xFFFFB2D4u,c->r[29]); // 801A81A0
  W32(c->r[13]+0xFFFFB2F0u,c->r[0]); // 801A81A4
  W32(c->r[13]+0xFFFFB274u,c->r[29]); // 801A81A8
  W32(c->r[31]+0x0000000Cu,c->r[29]); // 801A81AC
  c->r[12]=R32(c->r[31]+0x00000028u); // 801A81B0
  cmps(c,0,(int32_t)c->r[12],0); // 801A81B4
  if (crb(c,2)) { goto L_801A81CC; } // 801A81B8
  c->r[4]=c->r[31]|c->r[31]; // 801A81BC
  c->r[3]=0u+0x00000000u; // 801A81C0
  c->ctr=c->r[12]; // 801A81C4
  if (true) { c->lr=0x801A81CCu; dispatch(c,c->ctr); } // 801A81C8
L_801A81CC:;
  c->lr=0x801A81D0u; f_801A7550(c); // 801A81CC
  goto L_801A87E4; // 801A81D0
L_801A81D4:;
  c->r[0]=R32(c->r[13]+0xFFFFB270u); // 801A81D4
  cmps(c,0,(int32_t)c->r[0],0); // 801A81D8
  if (crb(c,2)) { goto L_801A8240; } // 801A81DC
  c->r[31]=R32(c->r[13]+0xFFFFB2F0u); // 801A81E0
  c->r[3]=c->r[30]+0x00004B20u; // 801A81E4
  W32(c->r[13]+0xFFFFB274u,c->r[29]); // 801A81E8
  c->r[0]=0u+0x0000000Au; // 801A81EC
  W32(c->r[13]+0xFFFFB270u,c->r[29]); // 801A81F0
  W32(c->r[13]+0xFFFFB2F0u,c->r[3]); // 801A81F4
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801A81F8
  c->r[12]=R32(c->r[31]+0x00000028u); // 801A81FC
  cmps(c,0,(int32_t)c->r[12],0); // 801A8200
  if (crb(c,2)) { goto L_801A8218; } // 801A8204
  c->r[4]=c->r[31]|c->r[31]; // 801A8208
  c->r[3]=0u+0xFFFFFFFDu; // 801A820C
  c->ctr=c->r[12]; // 801A8210
  if (true) { c->lr=0x801A8218u; dispatch(c,c->ctr); } // 801A8214
L_801A8218:;
  c->r[12]=R32(c->r[13]+0xFFFFB2E0u); // 801A8218
  cmps(c,0,(int32_t)c->r[12],0); // 801A821C
  if (crb(c,2)) { goto L_801A8234; } // 801A8220
  c->r[4]=c->r[31]|c->r[31]; // 801A8224
  c->r[3]=0u+0x00000000u; // 801A8228
  c->ctr=c->r[12]; // 801A822C
  if (true) { c->lr=0x801A8234u; dispatch(c,c->ctr); } // 801A8230
L_801A8234:;
  c->lr=0x801A8238u; f_801A7550(c); // 801A8234
  c->r[0]=0u+0x00000001u; // 801A8238
  goto L_801A8244; // 801A823C
L_801A8240:;
  c->r[0]=0u+0x00000000u; // 801A8240
L_801A8244:;
  cmps(c,0,(int32_t)c->r[0],0); // 801A8244
  if (!crb(c,2)) { goto L_801A87E4; } // 801A8248
  c->r[0]=R32(c->r[13]+0xFFFFB2E4u); // 801A824C
  cmpu(c,0,c->r[0],0x00000026u); // 801A8250
  if (!crb(c,2)) { goto L_801A8308; } // 801A8254
  c->lr=0x801A825Cu; f_801AC5E0(c); // 801A8258
  c->r[31]=c->r[3]|c->r[3]; // 801A825C
  c->lr=0x801A8264u; f_801915F0(c); // 801A8260
  c->r[6]=0u+0x80000000u; // 801A8264
  c->r[5]=0u+0x10620000u; // 801A8268
  c->r[6]=R32(c->r[6]+0x000000F8u); // 801A826C
  c->r[7]=c->r[5]+0x00004DD3u; // 801A8270
  c->r[8]=R32(c->r[13]+0xFFFFB2C8u); // 801A8274
  c->r[0]=0u+0x00000000u; // 801A8278
  c->r[5]=rotl(c->r[6],30)&0x3FFFFFFFu; // 801A827C
  c->r[9]=R32(c->r[13]+0xFFFFB2CCu); // 801A8280
  c->r[6]=(uint32_t)(((uint64_t)c->r[7]*(uint64_t)c->r[5])>>32); // 801A8284
  c->r[4]=addc(c,~c->r[9],c->r[4],1); // 801A8288
  c->r[5]=c->r[0]^0x80000000u; // 801A828C
  c->r[0]=addc(c,~c->r[8],c->r[3],c->xer_ca); // 801A8290
  c->r[0]=c->r[0]^0x80000000u; // 801A8294
  c->r[3]=rotl(c->r[6],26)&0x03FFFFFFu; // 801A8298
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)100); // 801A829C
  c->r[3]=addc(c,~c->r[3],c->r[4],1); // 801A82A0
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 801A82A4
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 801A82A8
  c->r[5]=0u-c->r[5]; cr0(c,c->r[5]); // 801A82AC
  if (crb(c,2)) { goto L_801A82BC; } // 801A82B0
  c->r[3]=0u+0x00000000u; // 801A82B4
  goto L_801A82D0; // 801A82B8
L_801A82BC:;
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 801A82BC
  if (crb(c,2)) { goto L_801A82CC; } // 801A82C0
  c->r[3]=0u+0x00000001u; // 801A82C4
  goto L_801A82D0; // 801A82C8
L_801A82CC:;
  c->r[3]=0u+0x00000002u; // 801A82CC
L_801A82D0:;
  c->r[31]=R32(c->r[13]+0xFFFFB2F0u); // 801A82D0
  c->r[4]=c->r[30]+0x00004B20u; // 801A82D4
  c->r[0]=0u+0x00000000u; // 801A82D8
  W32(c->r[13]+0xFFFFB2F0u,c->r[4]); // 801A82DC
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801A82E0
  W32(c->r[31]+0x00000010u,c->r[3]); // 801A82E4
  c->r[12]=R32(c->r[31]+0x00000028u); // 801A82E8
  cmps(c,0,(int32_t)c->r[12],0); // 801A82EC
  if (crb(c,2)) { goto L_801A8300; } // 801A82F0
  c->r[4]=c->r[31]|c->r[31]; // 801A82F4
  c->ctr=c->r[12]; // 801A82F8
  if (true) { c->lr=0x801A8300u; dispatch(c,c->ctr); } // 801A82FC
L_801A8300:;
  c->lr=0x801A8304u; f_801A7550(c); // 801A8300
  goto L_801A87E4; // 801A8304
L_801A8308:;
  c->r[0]=R32(c->r[13]+0xFFFFB2E4u); // 801A8308
  cmpu(c,0,c->r[0],0x00000024u); // 801A830C
  if (!crb(c,2)) { goto L_801A8380; } // 801A8310
  c->lr=0x801A8318u; f_801AC5E0(c); // 801A8314
  c->r[0]=rotl(c->r[3],30)&0x00000001u; cr0(c,c->r[0]); // 801A8318
  if (!crb(c,2)) { goto L_801A8328; } // 801A831C
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 801A8320
  if (crb(c,2)) { goto L_801A8330; } // 801A8324
L_801A8328:;
  c->r[3]=0u+0x00000000u; // 801A8328
  goto L_801A8348; // 801A832C
L_801A8330:;
  c->r[0]=R32(c->r[13]+0xFFFFB274u); // 801A8330
  cmps(c,0,(int32_t)c->r[0],0); // 801A8334
  if (crb(c,2)) { goto L_801A8344; } // 801A8338
  c->r[3]=0u+0x00000000u; // 801A833C
  goto L_801A8348; // 801A8340
L_801A8344:;
  c->r[3]=0u+0x00000001u; // 801A8344
L_801A8348:;
  c->r[31]=R32(c->r[13]+0xFFFFB2F0u); // 801A8348
  c->r[4]=c->r[30]+0x00004B20u; // 801A834C
  c->r[0]=0u+0x00000000u; // 801A8350
  W32(c->r[13]+0xFFFFB2F0u,c->r[4]); // 801A8354
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801A8358
  W32(c->r[31]+0x00000010u,c->r[3]); // 801A835C
  c->r[12]=R32(c->r[31]+0x00000028u); // 801A8360
  cmps(c,0,(int32_t)c->r[12],0); // 801A8364
  if (crb(c,2)) { goto L_801A8378; } // 801A8368
  c->r[4]=c->r[31]|c->r[31]; // 801A836C
  c->ctr=c->r[12]; // 801A8370
  if (true) { c->lr=0x801A8378u; dispatch(c,c->ctr); } // 801A8374
L_801A8378:;
  c->lr=0x801A837Cu; f_801A7550(c); // 801A8378
  goto L_801A87E4; // 801A837C
L_801A8380:;
  c->r[0]=R32(c->r[13]+0xFFFFB2E4u); // 801A8380
  cmpu(c,0,c->r[0],0x00000028u); // 801A8384
  if (!crb(c,2)) { goto L_801A8498; } // 801A8388
  c->r[4]=R32(c->r[13]+0xFFFFB2F0u); // 801A838C
  c->r[3]=c->r[30]+0x00004BC0u; // 801A8390
  c->r[4]=R32(c->r[4]+0x00000024u); // 801A8394
  c->lr=0x801A839Cu; f_801AA070(c); // 801A8398
  cmps(c,0,(int32_t)c->r[3],0); // 801A839C
  if (crb(c,2)) { goto L_801A83FC; } // 801A83A0
  c->r[3]=R32(c->r[13]+0xFFFFB2ECu); // 801A83A4
  c->r[4]=c->r[30]+0x00004BC0u; // 801A83A8
  c->r[5]=0u+0x00000020u; // 801A83AC
  c->lr=0x801A83B4u; f_80004364(c); // 801A83B0
  c->r[31]=R32(c->r[13]+0xFFFFB2F0u); // 801A83B4
  c->r[4]=c->r[30]+0x00004B20u; // 801A83B8
  c->r[3]=0u+0x00000000u; // 801A83BC
  c->r[0]=0u+0x00000001u; // 801A83C0
  W32(c->r[13]+0xFFFFB2F0u,c->r[4]); // 801A83C4
  W32(c->r[31]+0x0000000Cu,c->r[3]); // 801A83C8
  W32(c->r[31]+0x00000010u,c->r[0]); // 801A83CC
  c->r[12]=R32(c->r[31]+0x00000028u); // 801A83D0
  cmps(c,0,(int32_t)c->r[12],0); // 801A83D4
  if (crb(c,2)) { goto L_801A83EC; } // 801A83D8
  c->r[4]=c->r[31]|c->r[31]; // 801A83DC
  c->r[3]=0u+0x00000001u; // 801A83E0
  c->ctr=c->r[12]; // 801A83E4
  if (true) { c->lr=0x801A83ECu; dispatch(c,c->ctr); } // 801A83E8
L_801A83EC:;
  c->r[0]=0u+0x00000000u; // 801A83EC
  W32(c->r[13]+0xFFFFB278u,c->r[0]); // 801A83F0
  c->lr=0x801A83F8u; f_801A7550(c); // 801A83F4
  goto L_801A87E4; // 801A83F8
L_801A83FC:;
  c->lr=0x801A8400u; f_8018D6A0(c); // 801A83FC
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A8400
  c->r[30]=c->r[3]|c->r[3]; // 801A8404
  cmpu(c,0,c->r[0],0x00000005u); // 801A8408
  if (crb(c,0)) { goto L_801A8418; } // 801A840C
  c->r[0]=0u+0x00000000u; // 801A8410
  W32(c->r[13]+0xFFFFB260u,c->r[0]); // 801A8414
L_801A8418:;
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A8418
  c->r[31]=0u+0x802B0000u; // 801A841C
  c->r[3]=R32(c->r[13]+0xFFFFB260u); // 801A8420
  c->r[31]=c->r[31]+0x00006B80u; // 801A8424
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A8428
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A842C
  c->r[6]=0u+0x00000010u; // 801A8430
  c->r[4]=0u+0x00000000u; // 801A8434
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801A8438
  c->r[5]=c->r[31]+c->r[5]; // 801A843C
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 801A8440
  c->r[3]=c->r[31]+c->r[3]; // 801A8444
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A8448
  W32(c->r[3]+0x00000020u,c->r[4]); // 801A844C
  c->r[3]=c->r[31]+c->r[0]; // 801A8450
  W32(c->r[3]+0x00000024u,c->r[4]); // 801A8454
  c->lr=0x801A845Cu; f_801915E0(c); // 801A8458
  c->r[0]=R32(c->r[13]+0xFFFFB260u); // 801A845C
  c->r[4]=R32(c->r[13]+0xFFFFB260u); // 801A8460
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A8464
  c->r[0]=c->r[4]+0x00000001u; // 801A8468
  W32(c->r[13]+0xFFFFB260u,c->r[0]); // 801A846C
  c->r[4]=c->r[31]+c->r[5]; // 801A8470
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 801A8474
  c->r[3]=c->r[30]|c->r[30]; // 801A8478
  c->lr=0x801A8480u; f_8018D6E0(c); // 801A847C
  c->r[5]=0u+0x801A0000u; // 801A8480
  c->r[3]=0u+0x00000000u; // 801A8484
  c->r[5]=c->r[5]+0x000066A0u; // 801A8488
  c->r[4]=0u+0x00000000u; // 801A848C
  c->lr=0x801A8494u; f_801AB7D0(c); // 801A8490
  goto L_801A87E4; // 801A8494
L_801A8498:;
  c->r[0]=R32(c->r[13]+0xFFFFB2E4u); // 801A8498
  cmpu(c,0,c->r[0],0x00000029u); // 801A849C
  if (!crb(c,2)) { goto L_801A84F4; } // 801A84A0
  c->r[3]=R32(c->r[13]+0xFFFFB2F0u); // 801A84A4
  c->r[4]=R32(c->r[3]+0x00000018u); // 801A84A8
  c->r[0]=R32(c->r[4]+0x00005DE0u); // 801A84AC
  cmps(c,0,(int32_t)c->r[0],0); // 801A84B0
  if (!crb(c,2)) { goto L_801A84C0; } // 801A84B4
  c->lr=0x801A84BCu; f_801A7870(c); // 801A84B8
  goto L_801A87E4; // 801A84BC
L_801A84C0:;
  c->r[0]=c->r[30]+0x00004B20u; // 801A84C0
  W32(c->r[13]+0xFFFFB2F0u,c->r[0]); // 801A84C4
  c->r[0]=0u+0x00000000u; // 801A84C8
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801A84CC
  c->r[12]=R32(c->r[3]+0x00000028u); // 801A84D0
  cmps(c,0,(int32_t)c->r[12],0); // 801A84D4
  if (crb(c,2)) { goto L_801A84EC; } // 801A84D8
  c->r[4]=c->r[3]|c->r[3]; // 801A84DC
  c->r[3]=0u+0x00000000u; // 801A84E0
  c->ctr=c->r[12]; // 801A84E4
  if (true) { c->lr=0x801A84ECu; dispatch(c,c->ctr); } // 801A84E8
L_801A84EC:;
  c->lr=0x801A84F0u; f_801A7550(c); // 801A84EC
  goto L_801A87E4; // 801A84F0
L_801A84F4:;
  c->r[4]=R32(c->r[13]+0xFFFFB2E4u); // 801A84F4
  cmpu(c,0,c->r[4],0x00000001u); // 801A84F8
  if (crb(c,2)) { goto L_801A8520; } // 801A84FC
  cmpu(c,0,c->r[4],0x00000004u); // 801A8500
  if (crb(c,2)) { goto L_801A8520; } // 801A8504
  cmpu(c,0,c->r[4],0x00000005u); // 801A8508
  if (crb(c,2)) { goto L_801A8520; } // 801A850C
  cmpu(c,0,c->r[4],0x00000021u); // 801A8510
  if (crb(c,2)) { goto L_801A8520; } // 801A8514
  cmpu(c,0,c->r[4],0x0000000Eu); // 801A8518
  if (!crb(c,2)) { goto L_801A8528; } // 801A851C
L_801A8520:;
  c->r[0]=0u+0x00000001u; // 801A8520
  goto L_801A8540; // 801A8524
L_801A8528:;
  c->r[0]=R32(c->r[13]+0xFFFFA874u); // 801A8528
  cmpu(c,0,c->r[4],c->r[0]); // 801A852C
  if (!crb(c,2)) { goto L_801A853C; } // 801A8530
  c->r[0]=0u+0x00000001u; // 801A8534
  goto L_801A8540; // 801A8538
L_801A853C:;
  c->r[0]=0u+0x00000000u; // 801A853C
L_801A8540:;
  cmps(c,0,(int32_t)c->r[0],0); // 801A8540
  if (crb(c,2)) { goto L_801A8598; } // 801A8544
  c->r[3]=R32(c->r[13]+0xFFFFB2F0u); // 801A8548
  c->r[4]=R32(c->r[3]+0x00000020u); // 801A854C
  c->r[0]=R32(c->r[3]+0x00000014u); // 801A8550
  cmpu(c,0,c->r[4],c->r[0]); // 801A8554
  if (crb(c,2)) { goto L_801A8564; } // 801A8558
  c->lr=0x801A8560u; f_801A7870(c); // 801A855C
  goto L_801A87E4; // 801A8560
L_801A8564:;
  c->r[0]=c->r[30]+0x00004B20u; // 801A8564
  W32(c->r[13]+0xFFFFB2F0u,c->r[0]); // 801A8568
  c->r[0]=0u+0x00000000u; // 801A856C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801A8570
  c->r[12]=R32(c->r[3]+0x00000028u); // 801A8574
  cmps(c,0,(int32_t)c->r[12],0); // 801A8578
  if (crb(c,2)) { goto L_801A8590; } // 801A857C
  c->r[4]=c->r[3]|c->r[3]; // 801A8580
  c->r[3]=R32(c->r[3]+0x00000020u); // 801A8584
  c->ctr=c->r[12]; // 801A8588
  if (true) { c->lr=0x801A8590u; dispatch(c,c->ctr); } // 801A858C
L_801A8590:;
  c->lr=0x801A8594u; f_801A7550(c); // 801A8590
  goto L_801A87E4; // 801A8594
L_801A8598:;
  c->r[4]=R32(c->r[13]+0xFFFFB2E4u); // 801A8598
  cmpu(c,0,c->r[4],0x00000009u); // 801A859C
  if (crb(c,2)) { goto L_801A85BC; } // 801A85A0
  cmpu(c,0,c->r[4],0x0000000Au); // 801A85A4
  if (crb(c,2)) { goto L_801A85BC; } // 801A85A8
  cmpu(c,0,c->r[4],0x0000000Bu); // 801A85AC
  if (crb(c,2)) { goto L_801A85BC; } // 801A85B0
  cmpu(c,0,c->r[4],0x0000000Cu); // 801A85B4
  if (!crb(c,2)) { goto L_801A85C4; } // 801A85B8
L_801A85BC:;
  c->r[0]=0u+0x00000001u; // 801A85BC
  goto L_801A8608; // 801A85C0
L_801A85C4:;
  c->r[3]=0u+0x80270000u; // 801A85C4
  {uint32_t ea=c->r[3]+0x00005158u; c->r[0]=R32(ea); c->r[3]=ea;} // 801A85C8
  cmpu(c,0,c->r[4],c->r[0]); // 801A85CC
  if (!crb(c,2)) { goto L_801A85DC; } // 801A85D0
  c->r[0]=0u+0x00000001u; // 801A85D4
  goto L_801A8608; // 801A85D8
L_801A85DC:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 801A85DC
  cmpu(c,0,c->r[4],c->r[0]); // 801A85E0
  if (!crb(c,2)) { goto L_801A85F0; } // 801A85E4
  c->r[0]=0u+0x00000001u; // 801A85E8
  goto L_801A8608; // 801A85EC
L_801A85F0:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 801A85F0
  cmpu(c,0,c->r[4],c->r[0]); // 801A85F4
  if (!crb(c,2)) { goto L_801A8604; } // 801A85F8
  c->r[0]=0u+0x00000001u; // 801A85FC
  goto L_801A8608; // 801A8600
L_801A8604:;
  c->r[0]=0u+0x00000000u; // 801A8604
L_801A8608:;
  cmps(c,0,(int32_t)c->r[0],0); // 801A8608
  if (crb(c,2)) { goto L_801A866C; } // 801A860C
  c->r[0]=R32(c->r[13]+0xFFFFB2E4u); // 801A8610
  cmpu(c,0,c->r[0],0x0000000Bu); // 801A8614
  if (crb(c,2)) { goto L_801A8628; } // 801A8618
  c->r[0]=R32(c->r[13]+0xFFFFB2E4u); // 801A861C
  cmpu(c,0,c->r[0],0x0000000Au); // 801A8620
  if (!crb(c,2)) { goto L_801A8634; } // 801A8624
L_801A8628:;
  c->lr=0x801A862Cu; f_801ACA60(c); // 801A8628
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801A862C
  goto L_801A8638; // 801A8630
L_801A8634:;
  c->lr=0x801A8638u; f_801ACA60(c); // 801A8634
L_801A8638:;
  c->r[31]=R32(c->r[13]+0xFFFFB2F0u); // 801A8638
  c->r[4]=c->r[30]+0x00004B20u; // 801A863C
  c->r[0]=0u+0x00000000u; // 801A8640
  W32(c->r[13]+0xFFFFB2F0u,c->r[4]); // 801A8644
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801A8648
  c->r[12]=R32(c->r[31]+0x00000028u); // 801A864C
  cmps(c,0,(int32_t)c->r[12],0); // 801A8650
  if (crb(c,2)) { goto L_801A8664; } // 801A8654
  c->r[4]=c->r[31]|c->r[31]; // 801A8658
  c->ctr=c->r[12]; // 801A865C
  if (true) { c->lr=0x801A8664u; dispatch(c,c->ctr); } // 801A8660
L_801A8664:;
  c->lr=0x801A8668u; f_801A7550(c); // 801A8664
  goto L_801A87E4; // 801A8668
L_801A866C:;
  c->r[31]=R32(c->r[13]+0xFFFFB2F0u); // 801A866C
  c->r[3]=c->r[30]+0x00004B20u; // 801A8670
  c->r[0]=0u+0x00000000u; // 801A8674
  W32(c->r[13]+0xFFFFB2F0u,c->r[3]); // 801A8678
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801A867C
  c->r[12]=R32(c->r[31]+0x00000028u); // 801A8680
  cmps(c,0,(int32_t)c->r[12],0); // 801A8684
  if (crb(c,2)) { goto L_801A869C; } // 801A8688
  c->r[4]=c->r[31]|c->r[31]; // 801A868C
  c->r[3]=0u+0x00000000u; // 801A8690
  c->ctr=c->r[12]; // 801A8694
  if (true) { c->lr=0x801A869Cu; dispatch(c,c->ctr); } // 801A8698
L_801A869C:;
  c->lr=0x801A86A0u; f_801A7550(c); // 801A869C
  goto L_801A87E4; // 801A86A0
L_801A86A4:;
  c->r[0]=R32(c->r[13]+0xFFFFB2E4u); // 801A86A4
  cmpu(c,0,c->r[0],0x0000000Eu); // 801A86A8
  if (!crb(c,2)) { goto L_801A86C8; } // 801A86AC
  c->r[3]=0u+0x01230000u; // 801A86B0
  c->r[4]=0u+0x801A0000u; // 801A86B4
  c->r[3]=c->r[3]+0x00004567u; // 801A86B8
  c->r[4]=c->r[4]+0x00004E00u; // 801A86BC
  c->lr=0x801A86C4u; f_801AA000(c); // 801A86C0
  goto L_801A87E4; // 801A86C4
L_801A86C8:;
  c->r[0]=R32(c->r[13]+0xFFFFB2E4u); // 801A86C8
  cmpu(c,0,c->r[0],0x00000001u); // 801A86CC
  if (crb(c,2)) { goto L_801A8704; } // 801A86D0
  c->r[0]=R32(c->r[13]+0xFFFFB2E4u); // 801A86D4
  cmpu(c,0,c->r[0],0x00000004u); // 801A86D8
  if (crb(c,2)) { goto L_801A8704; } // 801A86DC
  c->r[0]=R32(c->r[13]+0xFFFFB2E4u); // 801A86E0
  cmpu(c,0,c->r[0],0x00000005u); // 801A86E4
  if (crb(c,2)) { goto L_801A8704; } // 801A86E8
  c->r[0]=R32(c->r[13]+0xFFFFB2E4u); // 801A86EC
  cmpu(c,0,c->r[0],0x00000021u); // 801A86F0
  if (crb(c,2)) { goto L_801A8704; } // 801A86F4
  c->r[0]=R32(c->r[13]+0xFFFFB2E4u); // 801A86F8
  cmpu(c,0,c->r[0],0x0000000Eu); // 801A86FC
  if (!crb(c,2)) { goto L_801A87C8; } // 801A8700
L_801A8704:;
  c->r[29]=R32(c->r[13]+0xFFFFB2F0u); // 801A8704
  c->r[3]=R32(c->r[29]+0x00000020u); // 801A8708
  c->r[0]=R32(c->r[29]+0x00000014u); // 801A870C
  cmpu(c,0,c->r[3],c->r[0]); // 801A8710
  if (!crb(c,2)) { goto L_801A87C8; } // 801A8714
  c->r[0]=R32(c->r[13]+0xFFFFB270u); // 801A8718
  cmps(c,0,(int32_t)c->r[0],0); // 801A871C
  if (crb(c,2)) { goto L_801A8784; } // 801A8720
  c->r[4]=0u+0x00000000u; // 801A8724
  W32(c->r[13]+0xFFFFB274u,c->r[4]); // 801A8728
  c->r[3]=c->r[30]+0x00004B20u; // 801A872C
  c->r[0]=0u+0x0000000Au; // 801A8730
  W32(c->r[13]+0xFFFFB270u,c->r[4]); // 801A8734
  W32(c->r[13]+0xFFFFB2F0u,c->r[3]); // 801A8738
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 801A873C
  c->r[12]=R32(c->r[29]+0x00000028u); // 801A8740
  cmps(c,0,(int32_t)c->r[12],0); // 801A8744
  if (crb(c,2)) { goto L_801A875C; } // 801A8748
  c->r[4]=c->r[29]|c->r[29]; // 801A874C
  c->r[3]=0u+0xFFFFFFFDu; // 801A8750
  c->ctr=c->r[12]; // 801A8754
  if (true) { c->lr=0x801A875Cu; dispatch(c,c->ctr); } // 801A8758
L_801A875C:;
  c->r[12]=R32(c->r[13]+0xFFFFB2E0u); // 801A875C
  cmps(c,0,(int32_t)c->r[12],0); // 801A8760
  if (crb(c,2)) { goto L_801A8778; } // 801A8764
  c->r[4]=c->r[29]|c->r[29]; // 801A8768
  c->r[3]=0u+0x00000000u; // 801A876C
  c->ctr=c->r[12]; // 801A8770
  if (true) { c->lr=0x801A8778u; dispatch(c,c->ctr); } // 801A8774
L_801A8778:;
  c->lr=0x801A877Cu; f_801A7550(c); // 801A8778
  c->r[0]=0u+0x00000001u; // 801A877C
  goto L_801A8788; // 801A8780
L_801A8784:;
  c->r[0]=0u+0x00000000u; // 801A8784
L_801A8788:;
  cmps(c,0,(int32_t)c->r[0],0); // 801A8788
  if (!crb(c,2)) { goto L_801A87E4; } // 801A878C
  c->r[31]=R32(c->r[13]+0xFFFFB2F0u); // 801A8790
  c->r[3]=c->r[30]+0x00004B20u; // 801A8794
  c->r[0]=0u+0x00000000u; // 801A8798
  W32(c->r[13]+0xFFFFB2F0u,c->r[3]); // 801A879C
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801A87A0
  c->r[12]=R32(c->r[31]+0x00000028u); // 801A87A4
  cmps(c,0,(int32_t)c->r[12],0); // 801A87A8
  if (crb(c,2)) { goto L_801A87C0; } // 801A87AC
  c->r[4]=c->r[31]|c->r[31]; // 801A87B0
  c->r[3]=R32(c->r[31]+0x00000020u); // 801A87B4
  c->ctr=c->r[12]; // 801A87B8
  if (true) { c->lr=0x801A87C0u; dispatch(c,c->ctr); } // 801A87BC
L_801A87C0:;
  c->lr=0x801A87C4u; f_801A7550(c); // 801A87C0
  goto L_801A87E4; // 801A87C4
L_801A87C8:;
  c->r[3]=0u+0x00000027u; // 801A87C8
  c->r[4]=0u+0x00000000u; // 801A87CC
  c->r[5]=0u+0x00000000u; // 801A87D0
  c->lr=0x801A87D8u; f_801A47A0(c); // 801A87D4
  c->r[3]=0u+0x801A0000u; // 801A87D8
  c->r[3]=c->r[3]+0x00005030u; // 801A87DC
  c->lr=0x801A87E4u; f_801ABAE0(c); // 801A87E0
L_801A87E4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801A87E4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801A87E8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801A87EC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801A87F0
  c->lr=c->r[0]; // 801A87F4
  c->r[1]=c->r[1]+0x00000020u; // 801A87F8
  return; // 801A87FC
}

// DVDReadAbsAsyncPrio
void f_801A8800(Ctx* __restrict c) {
  trace_call(0x801A8800u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A8800
  c->r[0]=c->lr; // 801A8804
  c->r[9]=0u+0x00000001u; // 801A8808
  W32(c->r[1]+0x00000024u,c->r[0]); // 801A880C
  c->r[0]=0u+0x00000000u; // 801A8810
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801A8814
  c->r[31]=c->r[8]|c->r[8]; // 801A8818
  W32(c->r[1]+0x00000018u,c->r[30]); // 801A881C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801A8820
  c->r[29]=c->r[3]|c->r[3]; // 801A8824
  W32(c->r[3]+0x00000008u,c->r[9]); // 801A8828
  W32(c->r[3]+0x00000018u,c->r[4]); // 801A882C
  W32(c->r[3]+0x00000014u,c->r[5]); // 801A8830
  W32(c->r[3]+0x00000010u,c->r[6]); // 801A8834
  W32(c->r[3]+0x00000020u,c->r[0]); // 801A8838
  W32(c->r[3]+0x00000028u,c->r[7]); // 801A883C
  c->r[0]=R32(c->r[13]+0xFFFFA864u); // 801A8840
  cmps(c,0,(int32_t)c->r[0],0); // 801A8844
  if (crb(c,2)) { goto L_801A8880; } // 801A8848
  cmpu(c,0,c->r[9],0x00000001u); // 801A884C
  if (crb(c,2)) { goto L_801A8874; } // 801A8850
  cmpu(c,0,c->r[9],0x00000004u); // 801A8854
  if (crb(c,2)) { goto L_801A8874; } // 801A8858
  cmpu(c,0,c->r[9],0x00000005u); // 801A885C
  if (crb(c,2)) { goto L_801A8874; } // 801A8860
  cmpu(c,0,c->r[9],0x00000021u); // 801A8864
  if (crb(c,2)) { goto L_801A8874; } // 801A8868
  cmpu(c,0,c->r[9],0x0000000Eu); // 801A886C
  if (!crb(c,2)) { goto L_801A8880; } // 801A8870
L_801A8874:;
  c->r[3]=R32(c->r[3]+0x00000018u); // 801A8874
  c->r[4]=R32(c->r[29]+0x00000014u); // 801A8878
  c->lr=0x801A8880u; f_80188CB0(c); // 801A887C
L_801A8880:;
  c->lr=0x801A8884u; f_8018D6A0(c); // 801A8880
  c->r[0]=0u+0x00000002u; // 801A8884
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 801A8888
  c->r[30]=c->r[3]|c->r[3]; // 801A888C
  c->r[3]=c->r[31]|c->r[31]; // 801A8890
  c->r[4]=c->r[29]|c->r[29]; // 801A8894
  c->lr=0x801A889Cu; f_801A9410(c); // 801A8898
  c->r[0]=R32(c->r[13]+0xFFFFB2F0u); // 801A889C
  c->r[31]=c->r[3]|c->r[3]; // 801A88A0
  cmps(c,0,(int32_t)c->r[0],0); // 801A88A4
  if (!crb(c,2)) { goto L_801A88BC; } // 801A88A8
  c->r[0]=R32(c->r[13]+0xFFFFB264u); // 801A88AC
  cmps(c,0,(int32_t)c->r[0],0); // 801A88B0
  if (!crb(c,2)) { goto L_801A88BC; } // 801A88B4
  c->lr=0x801A88BCu; f_801A7550(c); // 801A88B8
L_801A88BC:;
  c->r[3]=c->r[30]|c->r[30]; // 801A88BC
  c->lr=0x801A88C4u; f_8018D6E0(c); // 801A88C0
  c->r[3]=c->r[31]|c->r[31]; // 801A88C4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801A88C8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801A88CC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801A88D0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801A88D4
  c->lr=c->r[0]; // 801A88D8
  c->r[1]=c->r[1]+0x00000020u; // 801A88DC
  return; // 801A88E0
}

// DVDInquiryAsync
void f_801A88F0(Ctx* __restrict c) {
  trace_call(0x801A88F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A88F0
  c->r[0]=c->lr; // 801A88F4
  c->r[7]=0u+0x0000000Eu; // 801A88F8
  c->r[6]=0u+0x00000020u; // 801A88FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A8900
  c->r[0]=0u+0x00000000u; // 801A8904
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A8908
  c->r[31]=c->r[3]|c->r[3]; // 801A890C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801A8910
  W32(c->r[3]+0x00000008u,c->r[7]); // 801A8914
  W32(c->r[3]+0x00000018u,c->r[4]); // 801A8918
  W32(c->r[3]+0x00000014u,c->r[6]); // 801A891C
  W32(c->r[3]+0x00000020u,c->r[0]); // 801A8920
  W32(c->r[3]+0x00000028u,c->r[5]); // 801A8924
  c->r[0]=R32(c->r[13]+0xFFFFA864u); // 801A8928
  cmps(c,0,(int32_t)c->r[0],0); // 801A892C
  if (crb(c,2)) { goto L_801A8968; } // 801A8930
  cmpu(c,0,c->r[7],0x00000001u); // 801A8934
  if (crb(c,2)) { goto L_801A895C; } // 801A8938
  cmpu(c,0,c->r[7],0x00000004u); // 801A893C
  if (crb(c,2)) { goto L_801A895C; } // 801A8940
  cmpu(c,0,c->r[7],0x00000005u); // 801A8944
  if (crb(c,2)) { goto L_801A895C; } // 801A8948
  cmpu(c,0,c->r[7],0x00000021u); // 801A894C
  if (crb(c,2)) { goto L_801A895C; } // 801A8950
  cmpu(c,0,c->r[7],0x0000000Eu); // 801A8954
  if (!crb(c,2)) { goto L_801A8968; } // 801A8958
L_801A895C:;
  c->r[3]=R32(c->r[3]+0x00000018u); // 801A895C
  c->r[4]=R32(c->r[31]+0x00000014u); // 801A8960
  c->lr=0x801A8968u; f_80188CB0(c); // 801A8964
L_801A8968:;
  c->lr=0x801A896Cu; f_8018D6A0(c); // 801A8968
  c->r[0]=0u+0x00000002u; // 801A896C
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801A8970
  c->r[30]=c->r[3]|c->r[3]; // 801A8974
  c->r[4]=c->r[31]|c->r[31]; // 801A8978
  c->r[3]=0u+0x00000002u; // 801A897C
  c->lr=0x801A8984u; f_801A9410(c); // 801A8980
  c->r[0]=R32(c->r[13]+0xFFFFB2F0u); // 801A8984
  c->r[31]=c->r[3]|c->r[3]; // 801A8988
  cmps(c,0,(int32_t)c->r[0],0); // 801A898C
  if (!crb(c,2)) { goto L_801A89A4; } // 801A8990
  c->r[0]=R32(c->r[13]+0xFFFFB264u); // 801A8994
  cmps(c,0,(int32_t)c->r[0],0); // 801A8998
  if (!crb(c,2)) { goto L_801A89A4; } // 801A899C
  c->lr=0x801A89A4u; f_801A7550(c); // 801A89A0
L_801A89A4:;
  c->r[3]=c->r[30]|c->r[30]; // 801A89A4
  c->lr=0x801A89ACu; f_8018D6E0(c); // 801A89A8
  c->r[3]=c->r[31]|c->r[31]; // 801A89AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A89B0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801A89B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A89B8
  c->lr=c->r[0]; // 801A89BC
  c->r[1]=c->r[1]+0x00000010u; // 801A89C0
  return; // 801A89C4
}

// DVDGetCommandBlockStatus
void f_801A89D0(Ctx* __restrict c) {
  trace_call(0x801A89D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A89D0
  c->r[0]=c->lr; // 801A89D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801A89D8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801A89DC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801A89E0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801A89E4
  c->r[29]=c->r[3]|c->r[3]; // 801A89E8
  c->lr=0x801A89F0u; f_8018D6A0(c); // 801A89EC
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 801A89F0
  c->r[30]=c->r[3]|c->r[3]; // 801A89F4
  cmps(c,0,(int32_t)c->r[0],3); // 801A89F8
  if (!crb(c,2)) { goto L_801A8A08; } // 801A89FC
  c->r[31]=0u+0x00000001u; // 801A8A00
  goto L_801A8A70; // 801A8A04
L_801A8A08:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 801A8A08
  cmps(c,0,(int32_t)c->r[0],5); // 801A8A0C
  if (!crb(c,2)) { goto L_801A8A1C; } // 801A8A10
  c->r[31]=0u+0x00000004u; // 801A8A14
  goto L_801A8A70; // 801A8A18
L_801A8A1C:;
  c->r[31]=0u+0x802B0000u; // 801A8A1C
  c->r[0]=R32(c->r[13]+0xFFFFB2F0u); // 801A8A20
  c->r[31]=c->r[31]+0x00006990u; // 801A8A24
  cmpu(c,0,c->r[0],c->r[31]); // 801A8A28
  if (!crb(c,2)) { goto L_801A8A6C; } // 801A8A2C
  c->lr=0x801A8A34u; f_801A9580(c); // 801A8A30
  cmps(c,0,(int32_t)c->r[3],0); // 801A8A34
  if (crb(c,2)) { goto L_801A8A54; } // 801A8A38
  cmpu(c,0,c->r[29],c->r[3]); // 801A8A3C
  if (!crb(c,2)) { goto L_801A8A4C; } // 801A8A40
  c->r[31]=0u+0x00000001u; // 801A8A44
  goto L_801A8A70; // 801A8A48
L_801A8A4C:;
  c->r[31]=R32(c->r[29]+0x0000000Cu); // 801A8A4C
  goto L_801A8A70; // 801A8A50
L_801A8A54:;
  cmpu(c,0,c->r[29],c->r[31]); // 801A8A54
  if (!crb(c,2)) { goto L_801A8A64; } // 801A8A58
  c->r[31]=0u+0x00000000u; // 801A8A5C
  goto L_801A8A70; // 801A8A60
L_801A8A64:;
  c->r[31]=R32(c->r[29]+0x0000000Cu); // 801A8A64
  goto L_801A8A70; // 801A8A68
L_801A8A6C:;
  c->r[31]=R32(c->r[29]+0x0000000Cu); // 801A8A6C
L_801A8A70:;
  c->r[3]=c->r[30]|c->r[30]; // 801A8A70
  c->lr=0x801A8A78u; f_8018D6E0(c); // 801A8A74
  c->r[3]=c->r[31]|c->r[31]; // 801A8A78
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801A8A7C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801A8A80
  c->r[29]=R32(c->r[1]+0x00000014u); // 801A8A84
  c->r[0]=R32(c->r[1]+0x00000024u); // 801A8A88
  c->lr=c->r[0]; // 801A8A8C
  c->r[1]=c->r[1]+0x00000020u; // 801A8A90
  return; // 801A8A94
}

// DVDGetDriveStatus
void f_801A8AA0(Ctx* __restrict c) {
  trace_call(0x801A8AA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A8AA0
  c->r[0]=c->lr; // 801A8AA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A8AA8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A8AAC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801A8AB0
  c->lr=0x801A8AB8u; f_8018D6A0(c); // 801A8AB4
  c->r[0]=R32(c->r[13]+0xFFFFB26Cu); // 801A8AB8
  c->r[31]=c->r[3]|c->r[3]; // 801A8ABC
  cmps(c,0,(int32_t)c->r[0],0); // 801A8AC0
  if (crb(c,2)) { goto L_801A8AD0; } // 801A8AC4
  c->r[30]=0u+0xFFFFFFFFu; // 801A8AC8
  goto L_801A8B18; // 801A8ACC
L_801A8AD0:;
  c->r[0]=R32(c->r[13]+0xFFFFB268u); // 801A8AD0
  cmps(c,0,(int32_t)c->r[0],0); // 801A8AD4
  if (crb(c,2)) { goto L_801A8AE4; } // 801A8AD8
  c->r[30]=0u+0x00000008u; // 801A8ADC
  goto L_801A8B18; // 801A8AE0
L_801A8AE4:;
  c->r[3]=R32(c->r[13]+0xFFFFB2F0u); // 801A8AE4
  cmps(c,0,(int32_t)c->r[3],0); // 801A8AE8
  if (!crb(c,2)) { goto L_801A8AF8; } // 801A8AEC
  c->r[30]=0u+0x00000000u; // 801A8AF0
  goto L_801A8B18; // 801A8AF4
L_801A8AF8:;
  c->r[4]=0u+0x802B0000u; // 801A8AF8
  c->r[4]=c->r[4]+0x00006860u; // 801A8AFC
  cmpu(c,0,c->r[3],c->r[4]); // 801A8B00
  if (!crb(c,2)) { goto L_801A8B10; } // 801A8B04
  c->r[3]=0u+0x00000000u; // 801A8B08
  goto L_801A8B14; // 801A8B0C
L_801A8B10:;
  c->lr=0x801A8B14u; f_801A89D0(c); // 801A8B10
L_801A8B14:;
  c->r[30]=c->r[3]|c->r[3]; // 801A8B14
L_801A8B18:;
  c->r[3]=c->r[31]|c->r[31]; // 801A8B18
  c->lr=0x801A8B20u; f_8018D6E0(c); // 801A8B1C
  c->r[3]=c->r[30]|c->r[30]; // 801A8B20
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A8B24
  c->r[30]=R32(c->r[1]+0x00000008u); // 801A8B28
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A8B2C
  c->lr=c->r[0]; // 801A8B30
  c->r[1]=c->r[1]+0x00000010u; // 801A8B34
  return; // 801A8B38
}

// DVDSetAutoInvalidation
void f_801A8B40(Ctx* __restrict c) {
  trace_call(0x801A8B40u);
  c->r[0]=c->r[3]|c->r[3]; // 801A8B40
  c->r[3]=R32(c->r[13]+0xFFFFA864u); // 801A8B44
  W32(c->r[13]+0xFFFFA864u,c->r[0]); // 801A8B48
  return; // 801A8B4C
}

// DVDResume
void f_801A8B50(Ctx* __restrict c) {
  trace_call(0x801A8B50u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A8B50
  c->r[0]=c->lr; // 801A8B54
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A8B58
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A8B5C
  c->lr=0x801A8B64u; f_8018D6A0(c); // 801A8B60
  c->r[4]=0u+0x00000000u; // 801A8B64
  W32(c->r[13]+0xFFFFB264u,c->r[4]); // 801A8B68
  c->r[0]=R32(c->r[13]+0xFFFFB268u); // 801A8B6C
  c->r[31]=c->r[3]|c->r[3]; // 801A8B70
  cmps(c,0,(int32_t)c->r[0],0); // 801A8B74
  if (crb(c,2)) { goto L_801A8B84; } // 801A8B78
  W32(c->r[13]+0xFFFFB268u,c->r[4]); // 801A8B7C
  c->lr=0x801A8B84u; f_801A7550(c); // 801A8B80
L_801A8B84:;
  c->r[3]=c->r[31]|c->r[31]; // 801A8B84
  c->lr=0x801A8B8Cu; f_8018D6E0(c); // 801A8B88
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A8B8C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A8B90
  c->lr=c->r[0]; // 801A8B94
  c->r[1]=c->r[1]+0x00000010u; // 801A8B98
  return; // 801A8B9C
}

// DVDCancelAsync
void f_801A8BA0(Ctx* __restrict c) {
  trace_call(0x801A8BA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A8BA0
  c->r[0]=c->lr; // 801A8BA4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801A8BA8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801A8BAC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801A8BB0
  c->r[30]=c->r[4]|c->r[4]; // 801A8BB4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801A8BB8
  c->r[29]=c->r[3]|c->r[3]; // 801A8BBC
  c->lr=0x801A8BC4u; f_8018D6A0(c); // 801A8BC0
  c->r[4]=R32(c->r[29]+0x0000000Cu); // 801A8BC4
  c->r[31]=c->r[3]|c->r[3]; // 801A8BC8
  c->r[0]=c->r[4]+0x00000001u; // 801A8BCC
  cmpu(c,0,c->r[0],0x0000000Du); // 801A8BD0
  if (crb(c,1)) { goto L_801A8EDC; } // 801A8BD4
  c->r[4]=0u+0x80270000u; // 801A8BD8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801A8BDC
  c->r[4]=c->r[4]+0x00005210u; // 801A8BE0
  c->r[4]=R32(c->r[4]+c->r[0]); // 801A8BE4
  c->ctr=c->r[4]; // 801A8BE8
  if (true) { switch (c->ctr) { case 0x801A8BF0u: goto L_801A8BF0; case 0x801A8C10u: goto L_801A8C10; case 0x801A8C74u: goto L_801A8C74; case 0x801A8CC0u: goto L_801A8CC0; case 0x801A8CE4u: goto L_801A8CE4; case 0x801A8D04u: goto L_801A8D04; case 0x801A8D64u: goto L_801A8D64; case 0x801A8D90u: goto L_801A8D90; case 0x801A8E8Cu: goto L_801A8E8C; case 0x801A8EDCu: goto L_801A8EDC; default: break; } dispatch(c,c->ctr); return; } // 801A8BEC
L_801A8BF0:;
  cmps(c,0,(int32_t)c->r[30],0); // 801A8BF0
  if (crb(c,2)) { goto L_801A8EDC; } // 801A8BF4
  c->r[12]=c->r[30]|c->r[30]; // 801A8BF8
  c->r[4]=c->r[29]|c->r[29]; // 801A8BFC
  c->r[3]=0u+0x00000000u; // 801A8C00
  c->ctr=c->r[12]; // 801A8C04
  if (true) { c->lr=0x801A8C0Cu; dispatch(c,c->ctr); } // 801A8C08
  goto L_801A8EDC; // 801A8C0C
L_801A8C10:;
  c->r[0]=R32(c->r[13]+0xFFFFB270u); // 801A8C10
  cmps(c,0,(int32_t)c->r[0],0); // 801A8C14
  if (crb(c,2)) { goto L_801A8C28; } // 801A8C18
  c->lr=0x801A8C20u; f_8018D6E0(c); // 801A8C1C
  c->r[3]=0u+0x00000000u; // 801A8C20
  goto L_801A8EE8; // 801A8C24
L_801A8C28:;
  c->r[0]=0u+0x00000001u; // 801A8C28
  W32(c->r[13]+0xFFFFB270u,c->r[0]); // 801A8C2C
  W32(c->r[13]+0xFFFFB2E0u,c->r[30]); // 801A8C30
  c->r[0]=R32(c->r[29]+0x00000008u); // 801A8C34
  cmpu(c,0,c->r[0],0x00000004u); // 801A8C38
  if (crb(c,2)) { goto L_801A8C68; } // 801A8C3C
  cmpu(c,0,c->r[0],0x00000021u); // 801A8C40
  if (crb(c,2)) { goto L_801A8C68; } // 801A8C44
  cmpu(c,0,c->r[0],0x00000022u); // 801A8C48
  if (crb(c,2)) { goto L_801A8C68; } // 801A8C4C
  cmpu(c,0,c->r[0],0x00000029u); // 801A8C50
  if (crb(c,2)) { goto L_801A8C68; } // 801A8C54
  cmpu(c,0,c->r[0],0x0000002Au); // 801A8C58
  if (crb(c,2)) { goto L_801A8C68; } // 801A8C5C
  cmpu(c,0,c->r[0],0x00000001u); // 801A8C60
  if (!crb(c,2)) { goto L_801A8EDC; } // 801A8C64
L_801A8C68:;
  c->r[0]=0u+0x00000001u; // 801A8C68
  W32(c->r[13]+0xFFFFB280u,c->r[0]); // 801A8C6C
  goto L_801A8EDC; // 801A8C70
L_801A8C74:;
  c->r[3]=c->r[29]|c->r[29]; // 801A8C74
  c->lr=0x801A8C7Cu; f_801A95F0(c); // 801A8C78
  c->r[12]=R32(c->r[29]+0x00000028u); // 801A8C7C
  c->r[0]=0u+0x0000000Au; // 801A8C80
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 801A8C84
  cmps(c,0,(int32_t)c->r[12],0); // 801A8C88
  if (crb(c,2)) { goto L_801A8CA0; } // 801A8C8C
  c->r[4]=c->r[29]|c->r[29]; // 801A8C90
  c->r[3]=0u+0xFFFFFFFDu; // 801A8C94
  c->ctr=c->r[12]; // 801A8C98
  if (true) { c->lr=0x801A8CA0u; dispatch(c,c->ctr); } // 801A8C9C
L_801A8CA0:;
  cmps(c,0,(int32_t)c->r[30],0); // 801A8CA0
  if (crb(c,2)) { goto L_801A8EDC; } // 801A8CA4
  c->r[12]=c->r[30]|c->r[30]; // 801A8CA8
  c->r[4]=c->r[29]|c->r[29]; // 801A8CAC
  c->r[3]=0u+0x00000000u; // 801A8CB0
  c->ctr=c->r[12]; // 801A8CB4
  if (true) { c->lr=0x801A8CBCu; dispatch(c,c->ctr); } // 801A8CB8
  goto L_801A8EDC; // 801A8CBC
L_801A8CC0:;
  c->r[0]=R32(c->r[29]+0x00000008u); // 801A8CC0
  cmpu(c,0,c->r[0],0x0000002Au); // 801A8CC4
  if (crb(c,1)) { goto L_801A8D64; } // 801A8CC8
  c->r[3]=0u+0x80270000u; // 801A8CCC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801A8CD0
  c->r[3]=c->r[3]+0x00005164u; // 801A8CD4
  c->r[3]=R32(c->r[3]+c->r[0]); // 801A8CD8
  c->ctr=c->r[3]; // 801A8CDC
  if (true) { switch (c->ctr) { case 0x801A8BF0u: goto L_801A8BF0; case 0x801A8C10u: goto L_801A8C10; case 0x801A8C74u: goto L_801A8C74; case 0x801A8CC0u: goto L_801A8CC0; case 0x801A8CE4u: goto L_801A8CE4; case 0x801A8D04u: goto L_801A8D04; case 0x801A8D64u: goto L_801A8D64; case 0x801A8D90u: goto L_801A8D90; case 0x801A8E8Cu: goto L_801A8E8C; case 0x801A8EDCu: goto L_801A8EDC; default: break; } dispatch(c,c->ctr); return; } // 801A8CE0
L_801A8CE4:;
  cmps(c,0,(int32_t)c->r[30],0); // 801A8CE4
  if (crb(c,2)) { goto L_801A8EDC; } // 801A8CE8
  c->r[12]=c->r[30]|c->r[30]; // 801A8CEC
  c->r[4]=c->r[29]|c->r[29]; // 801A8CF0
  c->r[3]=0u+0x00000000u; // 801A8CF4
  c->ctr=c->r[12]; // 801A8CF8
  if (true) { c->lr=0x801A8D00u; dispatch(c,c->ctr); } // 801A8CFC
  goto L_801A8EDC; // 801A8D00
L_801A8D04:;
  c->r[0]=R32(c->r[13]+0xFFFFAF90u); // 801A8D04
  cmps(c,0,(int32_t)c->r[0],0); // 801A8D08
  if (crb(c,2)) { goto L_801A8D64; } // 801A8D0C
  c->r[3]=0u+0x802B0000u; // 801A8D10
  c->r[0]=0u+0x0000000Au; // 801A8D14
  c->r[3]=c->r[3]+0x00006860u; // 801A8D18
  W32(c->r[13]+0xFFFFB2F0u,c->r[3]); // 801A8D1C
  c->r[12]=R32(c->r[29]+0x00000028u); // 801A8D20
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 801A8D24
  cmps(c,0,(int32_t)c->r[12],0); // 801A8D28
  if (crb(c,2)) { goto L_801A8D40; } // 801A8D2C
  c->r[4]=c->r[29]|c->r[29]; // 801A8D30
  c->r[3]=0u+0xFFFFFFFDu; // 801A8D34
  c->ctr=c->r[12]; // 801A8D38
  if (true) { c->lr=0x801A8D40u; dispatch(c,c->ctr); } // 801A8D3C
L_801A8D40:;
  cmps(c,0,(int32_t)c->r[30],0); // 801A8D40
  if (crb(c,2)) { goto L_801A8D5C; } // 801A8D44
  c->r[12]=c->r[30]|c->r[30]; // 801A8D48
  c->r[4]=c->r[29]|c->r[29]; // 801A8D4C
  c->r[3]=0u+0x00000000u; // 801A8D50
  c->ctr=c->r[12]; // 801A8D54
  if (true) { c->lr=0x801A8D5Cu; dispatch(c,c->ctr); } // 801A8D58
L_801A8D5C:;
  c->lr=0x801A8D60u; f_801A7550(c); // 801A8D5C
  goto L_801A8EDC; // 801A8D60
L_801A8D64:;
  c->r[0]=R32(c->r[13]+0xFFFFB270u); // 801A8D64
  cmps(c,0,(int32_t)c->r[0],0); // 801A8D68
  if (crb(c,2)) { goto L_801A8D80; } // 801A8D6C
  c->r[3]=c->r[31]|c->r[31]; // 801A8D70
  c->lr=0x801A8D78u; f_8018D6E0(c); // 801A8D74
  c->r[3]=0u+0x00000000u; // 801A8D78
  goto L_801A8EE8; // 801A8D7C
L_801A8D80:;
  c->r[0]=0u+0x00000001u; // 801A8D80
  W32(c->r[13]+0xFFFFB270u,c->r[0]); // 801A8D84
  W32(c->r[13]+0xFFFFB2E0u,c->r[30]); // 801A8D88
  goto L_801A8EDC; // 801A8D8C
L_801A8D90:;
  c->r[0]=R32(c->r[13]+0xFFFFB288u); // 801A8D90
  cmps(c,0,(int32_t)c->r[0],0); // 801A8D94
  if (!crb(c,2)) { goto L_801A8DB4; } // 801A8D98
  c->r[0]=R32(c->r[13]+0xFFFFB284u); // 801A8D9C
  cmps(c,0,(int32_t)c->r[0],0); // 801A8DA0
  if (!crb(c,2)) { goto L_801A8DB4; } // 801A8DA4
  c->lr=0x801A8DACu; f_8018D6E0(c); // 801A8DA8
  c->r[3]=0u+0x00000000u; // 801A8DAC
  goto L_801A8EE8; // 801A8DB0
L_801A8DB4:;
  c->r[0]=R32(c->r[13]+0xFFFFB284u); // 801A8DB4
  cmps(c,0,(int32_t)c->r[0],0); // 801A8DB8
  if (crb(c,2)) { goto L_801A8DD4; } // 801A8DBC
  c->r[3]=0u+0x802B0000u; // 801A8DC0
  c->r[3]=c->r[3]+0x000068C0u; // 801A8DC4
  c->lr=0x801A8DCCu; f_80187FA0(c); // 801A8DC8
  c->r[0]=0u+0x00000000u; // 801A8DCC
  W32(c->r[13]+0xFFFFB284u,c->r[0]); // 801A8DD0
L_801A8DD4:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 801A8DD4
  cmps(c,0,(int32_t)c->r[0],4); // 801A8DD8
  if (!crb(c,2)) { goto L_801A8DE8; } // 801A8DDC
  c->r[0]=0u+0x00000003u; // 801A8DE0
  W32(c->r[13]+0xFFFFB274u,c->r[0]); // 801A8DE4
L_801A8DE8:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 801A8DE8
  cmps(c,0,(int32_t)c->r[0],5); // 801A8DEC
  if (!crb(c,2)) { goto L_801A8DFC; } // 801A8DF0
  c->r[0]=0u+0x00000004u; // 801A8DF4
  W32(c->r[13]+0xFFFFB274u,c->r[0]); // 801A8DF8
L_801A8DFC:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 801A8DFC
  cmps(c,0,(int32_t)c->r[0],6); // 801A8E00
  if (!crb(c,2)) { goto L_801A8E10; } // 801A8E04
  c->r[0]=0u+0x00000001u; // 801A8E08
  W32(c->r[13]+0xFFFFB274u,c->r[0]); // 801A8E0C
L_801A8E10:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 801A8E10
  cmps(c,0,(int32_t)c->r[0],11); // 801A8E14
  if (!crb(c,2)) { goto L_801A8E24; } // 801A8E18
  c->r[0]=0u+0x00000002u; // 801A8E1C
  W32(c->r[13]+0xFFFFB274u,c->r[0]); // 801A8E20
L_801A8E24:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 801A8E24
  cmps(c,0,(int32_t)c->r[0],7); // 801A8E28
  if (!crb(c,2)) { goto L_801A8E38; } // 801A8E2C
  c->r[0]=0u+0x00000007u; // 801A8E30
  W32(c->r[13]+0xFFFFB274u,c->r[0]); // 801A8E34
L_801A8E38:;
  c->r[3]=0u+0x802B0000u; // 801A8E38
  c->r[0]=0u+0x0000000Au; // 801A8E3C
  c->r[3]=c->r[3]+0x00006860u; // 801A8E40
  W32(c->r[13]+0xFFFFB2F0u,c->r[3]); // 801A8E44
  c->r[12]=R32(c->r[29]+0x00000028u); // 801A8E48
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 801A8E4C
  cmps(c,0,(int32_t)c->r[12],0); // 801A8E50
  if (crb(c,2)) { goto L_801A8E68; } // 801A8E54
  c->r[4]=c->r[29]|c->r[29]; // 801A8E58
  c->r[3]=0u+0xFFFFFFFDu; // 801A8E5C
  c->ctr=c->r[12]; // 801A8E60
  if (true) { c->lr=0x801A8E68u; dispatch(c,c->ctr); } // 801A8E64
L_801A8E68:;
  cmps(c,0,(int32_t)c->r[30],0); // 801A8E68
  if (crb(c,2)) { goto L_801A8E84; } // 801A8E6C
  c->r[12]=c->r[30]|c->r[30]; // 801A8E70
  c->r[4]=c->r[29]|c->r[29]; // 801A8E74
  c->r[3]=0u+0x00000000u; // 801A8E78
  c->ctr=c->r[12]; // 801A8E7C
  if (true) { c->lr=0x801A8E84u; dispatch(c,c->ctr); } // 801A8E80
L_801A8E84:;
  c->lr=0x801A8E88u; f_801A7550(c); // 801A8E84
  goto L_801A8EDC; // 801A8E88
L_801A8E8C:;
  c->r[3]=0u+0x802B0000u; // 801A8E8C
  c->r[0]=0u+0x0000000Au; // 801A8E90
  c->r[3]=c->r[3]+0x00006860u; // 801A8E94
  W32(c->r[13]+0xFFFFB2F0u,c->r[3]); // 801A8E98
  c->r[12]=R32(c->r[29]+0x00000028u); // 801A8E9C
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 801A8EA0
  cmps(c,0,(int32_t)c->r[12],0); // 801A8EA4
  if (crb(c,2)) { goto L_801A8EBC; } // 801A8EA8
  c->r[4]=c->r[29]|c->r[29]; // 801A8EAC
  c->r[3]=0u+0xFFFFFFFDu; // 801A8EB0
  c->ctr=c->r[12]; // 801A8EB4
  if (true) { c->lr=0x801A8EBCu; dispatch(c,c->ctr); } // 801A8EB8
L_801A8EBC:;
  cmps(c,0,(int32_t)c->r[30],0); // 801A8EBC
  if (crb(c,2)) { goto L_801A8ED8; } // 801A8EC0
  c->r[12]=c->r[30]|c->r[30]; // 801A8EC4
  c->r[4]=c->r[29]|c->r[29]; // 801A8EC8
  c->r[3]=0u+0x00000000u; // 801A8ECC
  c->ctr=c->r[12]; // 801A8ED0
  if (true) { c->lr=0x801A8ED8u; dispatch(c,c->ctr); } // 801A8ED4
L_801A8ED8:;
  c->lr=0x801A8EDCu; f_801A7550(c); // 801A8ED8
L_801A8EDC:;
  c->r[3]=c->r[31]|c->r[31]; // 801A8EDC
  c->lr=0x801A8EE4u; f_8018D6E0(c); // 801A8EE0
  c->r[3]=0u+0x00000001u; // 801A8EE4
L_801A8EE8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801A8EE8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801A8EEC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801A8EF0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801A8EF4
  c->lr=c->r[0]; // 801A8EF8
  c->r[1]=c->r[1]+0x00000020u; // 801A8EFC
  return; // 801A8F00
}

// DVDCancel
void f_801A8F10(Ctx* __restrict c) {
  trace_call(0x801A8F10u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A8F10
  c->r[0]=c->lr; // 801A8F14
  c->r[4]=0u+0x801B0000u; // 801A8F18
  W32(c->r[1]+0x00000024u,c->r[0]); // 801A8F1C
  c->r[4]=c->r[4]+0xFFFF8FD0u; // 801A8F20
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801A8F24
  W32(c->r[1]+0x00000018u,c->r[30]); // 801A8F28
  W32(c->r[1]+0x00000014u,c->r[29]); // 801A8F2C
  c->r[29]=c->r[3]|c->r[3]; // 801A8F30
  c->lr=0x801A8F38u; f_801A8BA0(c); // 801A8F34
  cmps(c,0,(int32_t)c->r[3],0); // 801A8F38
  if (!crb(c,2)) { goto L_801A8F48; } // 801A8F3C
  c->r[3]=0u+0xFFFFFFFFu; // 801A8F40
  goto L_801A8FB4; // 801A8F44
L_801A8F48:;
  c->lr=0x801A8F4Cu; f_8018D6A0(c); // 801A8F48
  c->r[30]=c->r[3]|c->r[3]; // 801A8F4C
  c->r[31]=0u+0x80270000u; // 801A8F50
L_801A8F54:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 801A8F54
  cmps(c,0,(int32_t)c->r[0],0); // 801A8F58
  if (crb(c,2)) { goto L_801A8FA8; } // 801A8F5C
  cmps(c,0,(int32_t)c->r[0],-1); // 801A8F60
  if (crb(c,2)) { goto L_801A8FA8; } // 801A8F64
  cmps(c,0,(int32_t)c->r[0],10); // 801A8F68
  if (crb(c,2)) { goto L_801A8FA8; } // 801A8F6C
  cmps(c,0,(int32_t)c->r[0],3); // 801A8F70
  if (!crb(c,2)) { goto L_801A8F9C; } // 801A8F74
  c->r[3]=R32(c->r[29]+0x00000008u); // 801A8F78
  c->r[0]=c->r[3]+0xFFFFFFFCu; // 801A8F7C
  cmpu(c,0,c->r[0],0x00000026u); // 801A8F80
  if (crb(c,1)) { goto L_801A8F9C; } // 801A8F84
  c->r[3]=c->r[31]+0x00005248u; // 801A8F88
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801A8F8C
  c->r[3]=R32(c->r[3]+c->r[0]); // 801A8F90
  c->ctr=c->r[3]; // 801A8F94
  if (true) { switch (c->ctr) { case 0x801A8F9Cu: goto L_801A8F9C; case 0x801A8FA8u: goto L_801A8FA8; default: break; } dispatch(c,c->ctr); return; } // 801A8F98
L_801A8F9C:;
  c->r[3]=c->r[13]+0xFFFFB248u; // 801A8F9C
  c->lr=0x801A8FA4u; f_801913D0(c); // 801A8FA0
  IRQCHK(c); goto L_801A8F54; // 801A8FA4
L_801A8FA8:;
  c->r[3]=c->r[30]|c->r[30]; // 801A8FA8
  c->lr=0x801A8FB0u; f_8018D6E0(c); // 801A8FAC
  c->r[3]=0u+0x00000000u; // 801A8FB0
L_801A8FB4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801A8FB4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801A8FB8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801A8FBC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801A8FC0
  c->lr=c->r[0]; // 801A8FC4
  c->r[1]=c->r[1]+0x00000020u; // 801A8FC8
  return; // 801A8FCC
}

// cbForCancelSync
void f_801A8FD0(Ctx* __restrict c) {
  trace_call(0x801A8FD0u);
  c->r[3]=c->r[13]+0xFFFFB248u; // 801A8FD0
  f_801914C0(c); return; // 801A8FD4
}

// __BS2DVDLowCallback
void f_801A8FE0(Ctx* __restrict c) {
  trace_call(0x801A8FE0u);
  c->r[3]=0u+0x80000000u; // 801A8FE0
  return; // 801A8FE4
}

// fn_801A8FF0
void f_801A8FF0(Ctx* __restrict c) {
  W32(c->r[13]+0xFFFFB2A0u,c->r[3]); // 801A8FF0
  return; // 801A8FF4
}

// __DVDGetCoverStatus
void f_801A9000(Ctx* __restrict c) {
  trace_call(0x801A9000u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A9000
  c->r[0]=c->lr; // 801A9004
  c->r[3]=0u+0x801B0000u; // 801A9008
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A900C
  c->r[0]=0u+0x00000000u; // 801A9010
  c->r[3]=c->r[3]+0xFFFF8FF0u; // 801A9014
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A9018
  W32(c->r[13]+0xFFFFB2A0u,c->r[0]); // 801A901C
  c->lr=0x801A9024u; f_801AC610(c); // 801A9020
  c->r[0]=c->r[0]|0x00000000u; // 801A9024
L_801A9028:;
  c->r[0]=R32(c->r[13]+0xFFFFB2A0u); // 801A9028
  cmps(c,0,(int32_t)c->r[0],0); // 801A902C
  if (crb(c,2)) { IRQCHK(c); goto L_801A9028; } // 801A9030
  c->r[0]=R32(c->r[13]+0xFFFFB2A0u); // 801A9034
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801A9038
  if (!crb(c,2)) { goto L_801A9048; } // 801A903C
  c->r[3]=0u+0x00000000u; // 801A9040
  goto L_801A90B8; // 801A9044
L_801A9048:;
  c->lr=0x801A904Cu; f_801AC5E0(c); // 801A9048
  c->r[31]=c->r[3]|c->r[3]; // 801A904C
  c->lr=0x801A9054u; f_801915F0(c); // 801A9050
  c->r[6]=0u+0x80000000u; // 801A9054
  c->r[5]=0u+0x10620000u; // 801A9058
  c->r[6]=R32(c->r[6]+0x000000F8u); // 801A905C
  c->r[7]=c->r[5]+0x00004DD3u; // 801A9060
  c->r[8]=R32(c->r[13]+0xFFFFB2C8u); // 801A9064
  c->r[0]=0u+0x00000000u; // 801A9068
  c->r[5]=rotl(c->r[6],30)&0x3FFFFFFFu; // 801A906C
  c->r[9]=R32(c->r[13]+0xFFFFB2CCu); // 801A9070
  c->r[6]=(uint32_t)(((uint64_t)c->r[7]*(uint64_t)c->r[5])>>32); // 801A9074
  c->r[4]=addc(c,~c->r[9],c->r[4],1); // 801A9078
  c->r[5]=c->r[0]^0x80000000u; // 801A907C
  c->r[0]=addc(c,~c->r[8],c->r[3],c->xer_ca); // 801A9080
  c->r[0]=c->r[0]^0x80000000u; // 801A9084
  c->r[3]=rotl(c->r[6],26)&0x03FFFFFFu; // 801A9088
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)100); // 801A908C
  c->r[3]=addc(c,~c->r[3],c->r[4],1); // 801A9090
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 801A9094
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 801A9098
  c->r[5]=0u-c->r[5]; cr0(c,c->r[5]); // 801A909C
  if (crb(c,2)) { goto L_801A90AC; } // 801A90A0
  c->r[3]=0u+0x00000000u; // 801A90A4
  goto L_801A90B8; // 801A90A8
L_801A90AC:;
  c->r[0]=rotl(c->r[31],0)&0x00000001u; // 801A90AC
  c->r[3]=0u-c->r[0]; // 801A90B0
  c->r[3]=c->r[3]+0x00000002u; // 801A90B4
L_801A90B8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A90B8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A90BC
  c->lr=c->r[0]; // 801A90C0
  c->r[1]=c->r[1]+0x00000010u; // 801A90C4
  return; // 801A90C8
}

// fn_801A90D0
void f_801A90D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A90D0
  c->r[0]=c->lr; // 801A90D4
  c->r[3]=0u+0x00000000u; // 801A90D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A90DC
  c->r[0]=0u+0x00000000u; // 801A90E0
  W32(c->r[13]+0xFFFFB2A0u,c->r[0]); // 801A90E4
  c->lr=0x801A90ECu; f_801ABC50(c); // 801A90E8
  c->r[3]=0u+0x801B0000u; // 801A90EC
  c->r[3]=c->r[3]+0xFFFF8FF0u; // 801A90F0
  c->lr=0x801A90F8u; f_801ABC60(c); // 801A90F4
L_801A90F8:;
  c->r[0]=R32(c->r[13]+0xFFFFB2A0u); // 801A90F8
  cmps(c,0,(int32_t)c->r[0],0); // 801A90FC
  if (crb(c,2)) { IRQCHK(c); goto L_801A90F8; } // 801A9100
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A9104
  c->lr=c->r[0]; // 801A9108
  c->r[1]=c->r[1]+0x00000010u; // 801A910C
  return; // 801A9110
}

// __DVDPrepareResetAsync
void f_801A9120(Ctx* __restrict c) {
  trace_call(0x801A9120u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A9120
  c->r[0]=c->lr; // 801A9124
  W32(c->r[1]+0x00000024u,c->r[0]); // 801A9128
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801A912C
  c->r[31]=c->r[3]|c->r[3]; // 801A9130
  W32(c->r[1]+0x00000018u,c->r[30]); // 801A9134
  W32(c->r[1]+0x00000014u,c->r[29]); // 801A9138
  c->lr=0x801A9140u; f_8018D6A0(c); // 801A913C
  c->r[29]=c->r[3]|c->r[3]; // 801A9140
  c->lr=0x801A9148u; f_801A93D0(c); // 801A9144
  c->r[0]=R32(c->r[13]+0xFFFFB270u); // 801A9148
  cmps(c,0,(int32_t)c->r[0],0); // 801A914C
  if (crb(c,2)) { goto L_801A915C; } // 801A9150
  W32(c->r[13]+0xFFFFB2E0u,c->r[31]); // 801A9154
  goto L_801A9218; // 801A9158
L_801A915C:;
  c->r[3]=R32(c->r[13]+0xFFFFB2F0u); // 801A915C
  cmps(c,0,(int32_t)c->r[3],0); // 801A9160
  if (crb(c,2)) { goto L_801A9170; } // 801A9164
  c->r[0]=0u+0x00000000u; // 801A9168
  W32(c->r[3]+0x00000028u,c->r[0]); // 801A916C
L_801A9170:;
  c->lr=0x801A9174u; f_8018D6A0(c); // 801A9170
  c->r[30]=c->r[3]|c->r[3]; // 801A9174
  c->lr=0x801A917Cu; f_8018D6A0(c); // 801A9178
  c->r[0]=R32(c->r[13]+0xFFFFB2F0u); // 801A917C
  c->r[4]=0u+0x00000001u; // 801A9180
  W32(c->r[13]+0xFFFFB264u,c->r[4]); // 801A9184
  cmps(c,0,(int32_t)c->r[0],0); // 801A9188
  if (!crb(c,2)) { goto L_801A9194; } // 801A918C
  W32(c->r[13]+0xFFFFB268u,c->r[4]); // 801A9190
L_801A9194:;
  c->lr=0x801A9198u; f_8018D6E0(c); // 801A9194
  goto L_801A91A4; // 801A9198
L_801A919C:;
  c->r[4]=0u+0x00000000u; // 801A919C
  c->lr=0x801A91A4u; f_801A8BA0(c); // 801A91A0
L_801A91A4:;
  c->lr=0x801A91A8u; f_801A9480(c); // 801A91A4
  cmps(c,0,(int32_t)c->r[3],0); // 801A91A8
  if (!crb(c,2)) { IRQCHK(c); goto L_801A919C; } // 801A91AC
  c->r[3]=R32(c->r[13]+0xFFFFB2F0u); // 801A91B0
  cmps(c,0,(int32_t)c->r[3],0); // 801A91B4
  if (crb(c,2)) { goto L_801A91C8; } // 801A91B8
  c->r[4]=c->r[31]|c->r[31]; // 801A91BC
  c->lr=0x801A91C4u; f_801A8BA0(c); // 801A91C0
  goto L_801A91E4; // 801A91C4
L_801A91C8:;
  cmps(c,0,(int32_t)c->r[31],0); // 801A91C8
  if (crb(c,2)) { goto L_801A91E4; } // 801A91CC
  c->r[12]=c->r[31]|c->r[31]; // 801A91D0
  c->r[3]=0u+0x00000000u; // 801A91D4
  c->r[4]=0u+0x00000000u; // 801A91D8
  c->ctr=c->r[12]; // 801A91DC
  if (true) { c->lr=0x801A91E4u; dispatch(c,c->ctr); } // 801A91E0
L_801A91E4:;
  c->lr=0x801A91E8u; f_8018D6A0(c); // 801A91E4
  c->r[4]=0u+0x00000000u; // 801A91E8
  W32(c->r[13]+0xFFFFB264u,c->r[4]); // 801A91EC
  c->r[0]=R32(c->r[13]+0xFFFFB268u); // 801A91F0
  c->r[31]=c->r[3]|c->r[3]; // 801A91F4
  cmps(c,0,(int32_t)c->r[0],0); // 801A91F8
  if (crb(c,2)) { goto L_801A9208; } // 801A91FC
  W32(c->r[13]+0xFFFFB268u,c->r[4]); // 801A9200
  c->lr=0x801A9208u; f_801A7550(c); // 801A9204
L_801A9208:;
  c->r[3]=c->r[31]|c->r[31]; // 801A9208
  c->lr=0x801A9210u; f_8018D6E0(c); // 801A920C
  c->r[3]=c->r[30]|c->r[30]; // 801A9210
  c->lr=0x801A9218u; f_8018D6E0(c); // 801A9214
L_801A9218:;
  c->r[3]=c->r[29]|c->r[29]; // 801A9218
  c->lr=0x801A9220u; f_8018D6E0(c); // 801A921C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801A9220
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801A9224
  c->r[30]=R32(c->r[1]+0x00000018u); // 801A9228
  c->r[29]=R32(c->r[1]+0x00000014u); // 801A922C
  c->lr=c->r[0]; // 801A9230
  c->r[1]=c->r[1]+0x00000020u; // 801A9234
  return; // 801A9238
}

// Callback_801A9240
void f_801A9240(Ctx* __restrict c) {
  trace_call(0x801A9240u);
  c->r[0]=0u+0x00000001u; // 801A9240
  W32(c->r[13]+0xFFFFB2A4u,c->r[0]); // 801A9244
  return; // 801A9248
}

// __DVDPrepareReset
void f_801A9250(Ctx* __restrict c) {
  trace_call(0x801A9250u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A9250
  c->r[0]=c->lr; // 801A9254
  W32(c->r[1]+0x00000024u,c->r[0]); // 801A9258
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801A925C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801A9260
  W32(c->r[1]+0x00000014u,c->r[29]); // 801A9264
  c->lr=0x801A926Cu; f_8018D6A0(c); // 801A9268
  c->r[31]=0u+0x00000000u; // 801A926C
  W32(c->r[13]+0xFFFFB2A4u,c->r[31]); // 801A9270
  c->lr=0x801A9278u; f_8018D6A0(c); // 801A9274
  c->r[29]=c->r[3]|c->r[3]; // 801A9278
  c->lr=0x801A9280u; f_801A93D0(c); // 801A927C
  c->r[0]=R32(c->r[13]+0xFFFFB270u); // 801A9280
  cmps(c,0,(int32_t)c->r[0],0); // 801A9284
  if (crb(c,2)) { goto L_801A929C; } // 801A9288
  c->r[3]=0u+0x801B0000u; // 801A928C
  c->r[3]=c->r[3]+0xFFFF9240u; // 801A9290
  W32(c->r[13]+0xFFFFB2E0u,c->r[3]); // 801A9294
  goto L_801A9350; // 801A9298
L_801A929C:;
  c->r[3]=R32(c->r[13]+0xFFFFB2F0u); // 801A929C
  cmps(c,0,(int32_t)c->r[3],0); // 801A92A0
  if (crb(c,2)) { goto L_801A92AC; } // 801A92A4
  W32(c->r[3]+0x00000028u,c->r[31]); // 801A92A8
L_801A92AC:;
  c->lr=0x801A92B0u; f_8018D6A0(c); // 801A92AC
  c->r[31]=c->r[3]|c->r[3]; // 801A92B0
  c->lr=0x801A92B8u; f_8018D6A0(c); // 801A92B4
  c->r[0]=R32(c->r[13]+0xFFFFB2F0u); // 801A92B8
  c->r[4]=0u+0x00000001u; // 801A92BC
  W32(c->r[13]+0xFFFFB264u,c->r[4]); // 801A92C0
  cmps(c,0,(int32_t)c->r[0],0); // 801A92C4
  if (!crb(c,2)) { goto L_801A92D0; } // 801A92C8
  W32(c->r[13]+0xFFFFB268u,c->r[4]); // 801A92CC
L_801A92D0:;
  c->lr=0x801A92D4u; f_8018D6E0(c); // 801A92D0
  goto L_801A92E0; // 801A92D4
L_801A92D8:;
  c->r[4]=0u+0x00000000u; // 801A92D8
  c->lr=0x801A92E0u; f_801A8BA0(c); // 801A92DC
L_801A92E0:;
  c->lr=0x801A92E4u; f_801A9480(c); // 801A92E0
  cmps(c,0,(int32_t)c->r[3],0); // 801A92E4
  if (!crb(c,2)) { IRQCHK(c); goto L_801A92D8; } // 801A92E8
  c->r[3]=R32(c->r[13]+0xFFFFB2F0u); // 801A92EC
  cmps(c,0,(int32_t)c->r[3],0); // 801A92F0
  if (crb(c,2)) { goto L_801A9308; } // 801A92F4
  c->r[4]=0u+0x801B0000u; // 801A92F8
  c->r[4]=c->r[4]+0xFFFF9240u; // 801A92FC
  c->lr=0x801A9304u; f_801A8BA0(c); // 801A9300
  goto L_801A931C; // 801A9304
L_801A9308:;
  c->r[0]=0u+0x801B0000u; // 801A9308
  c->r[0]=addc(c,c->r[0],0xFFFF9240u,0); cr0(c,c->r[0]); // 801A930C
  if (crb(c,2)) { goto L_801A931C; } // 801A9310
  c->r[0]=0u+0x00000001u; // 801A9314
  W32(c->r[13]+0xFFFFB2A4u,c->r[0]); // 801A9318
L_801A931C:;
  c->lr=0x801A9320u; f_8018D6A0(c); // 801A931C
  c->r[4]=0u+0x00000000u; // 801A9320
  W32(c->r[13]+0xFFFFB264u,c->r[4]); // 801A9324
  c->r[0]=R32(c->r[13]+0xFFFFB268u); // 801A9328
  c->r[30]=c->r[3]|c->r[3]; // 801A932C
  cmps(c,0,(int32_t)c->r[0],0); // 801A9330
  if (crb(c,2)) { goto L_801A9340; } // 801A9334
  W32(c->r[13]+0xFFFFB268u,c->r[4]); // 801A9338
  c->lr=0x801A9340u; f_801A7550(c); // 801A933C
L_801A9340:;
  c->r[3]=c->r[30]|c->r[30]; // 801A9340
  c->lr=0x801A9348u; f_8018D6E0(c); // 801A9344
  c->r[3]=c->r[31]|c->r[31]; // 801A9348
  c->lr=0x801A9350u; f_8018D6E0(c); // 801A934C
L_801A9350:;
  c->r[3]=c->r[29]|c->r[29]; // 801A9350
  c->lr=0x801A9358u; f_8018D6E0(c); // 801A9354
  c->lr=0x801A935Cu; f_8018D6C0(c); // 801A9358
  c->r[0]=c->r[0]|0x00000000u; // 801A935C
L_801A9360:;
  c->r[0]=R32(c->r[13]+0xFFFFB2A4u); // 801A9360
  cmps(c,0,(int32_t)c->r[0],1); // 801A9364
  if (!crb(c,2)) { IRQCHK(c); goto L_801A9360; } // 801A9368
  c->r[0]=R32(c->r[1]+0x00000024u); // 801A936C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801A9370
  c->r[30]=R32(c->r[1]+0x00000018u); // 801A9374
  c->r[29]=R32(c->r[1]+0x00000014u); // 801A9378
  c->lr=c->r[0]; // 801A937C
  c->r[1]=c->r[1]+0x00000020u; // 801A9380
  return; // 801A9384
}

// __DVDTestAlarm
void f_801A9390(Ctx* __restrict c) {
  trace_call(0x801A9390u);
  c->r[4]=0u+0x802B0000u; // 801A9390
  c->r[4]=c->r[4]+0x00006960u; // 801A9394
  cmpu(c,0,c->r[3],c->r[4]); // 801A9398
  if (!crb(c,2)) { goto L_801A93A8; } // 801A939C
  c->r[3]=0u+0x00000001u; // 801A93A0
  return; // 801A93A4
L_801A93A8:;
  f_801ACC00(c); return; // 801A93A8
  return; // 801A93AC
}

// __DVDStopMotorAsync
void f_801A93B0(Ctx* __restrict c) {
  trace_call(0x801A93B0u);
  c->r[3]=0u+0x00000001u; // 801A93B0
  return; // 801A93B4
}

// __DVDRestartMotor
void f_801A93C0(Ctx* __restrict c) {
  trace_call(0x801A93C0u);
  return; // 801A93C0
}

// __DVDClearWaitingQueue
void f_801A93D0(Ctx* __restrict c) {
  trace_call(0x801A93D0u);
  c->r[6]=0u+0x802B0000u; // 801A93D0
  c->r[6]=c->r[6]+0x000069F0u; // 801A93D4
  W32(c->r[6]+0x00000000u,c->r[6]); // 801A93D8
  c->r[5]=c->r[6]+0x00000008u; // 801A93DC
  c->r[4]=c->r[6]+0x00000010u; // 801A93E0
  c->r[3]=c->r[6]+0x00000018u; // 801A93E4
  W32(c->r[6]+0x00000004u,c->r[6]); // 801A93E8
  W32(c->r[5]+0x00000000u,c->r[5]); // 801A93EC
  W32(c->r[5]+0x00000004u,c->r[5]); // 801A93F0
  W32(c->r[4]+0x00000000u,c->r[4]); // 801A93F4
  W32(c->r[4]+0x00000004u,c->r[4]); // 801A93F8
  W32(c->r[3]+0x00000000u,c->r[3]); // 801A93FC
  W32(c->r[3]+0x00000004u,c->r[3]); // 801A9400
  return; // 801A9404
}

// __DVDPushWaitingQueue
void f_801A9410(Ctx* __restrict c) {
  trace_call(0x801A9410u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A9410
  c->r[0]=c->lr; // 801A9414
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A9418
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A941C
  c->r[31]=c->r[4]|c->r[4]; // 801A9420
  W32(c->r[1]+0x00000008u,c->r[30]); // 801A9424
  c->r[30]=c->r[3]|c->r[3]; // 801A9428
  c->lr=0x801A9430u; f_8018D6A0(c); // 801A942C
  c->r[4]=0u+0x802B0000u; // 801A9430
  c->r[0]=rotl(c->r[30],3)&0xFFFFFFF8u; // 801A9434
  c->r[4]=c->r[4]+0x000069F0u; // 801A9438
  c->r[5]=c->r[4]+c->r[0]; // 801A943C
  c->r[4]=R32(c->r[5]+0x00000004u); // 801A9440
  W32(c->r[4]+0x00000000u,c->r[31]); // 801A9444
  c->r[0]=R32(c->r[5]+0x00000004u); // 801A9448
  W32(c->r[31]+0x00000004u,c->r[0]); // 801A944C
  W32(c->r[31]+0x00000000u,c->r[5]); // 801A9450
  W32(c->r[5]+0x00000004u,c->r[31]); // 801A9454
  c->lr=0x801A945Cu; f_8018D6E0(c); // 801A9458
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A945C
  c->r[3]=0u+0x00000001u; // 801A9460
  c->r[30]=R32(c->r[1]+0x00000008u); // 801A9464
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A9468
  c->lr=c->r[0]; // 801A946C
  c->r[1]=c->r[1]+0x00000010u; // 801A9470
  return; // 801A9474
}

// __DVDPopWaitingQueue
void f_801A9480(Ctx* __restrict c) {
  trace_call(0x801A9480u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A9480
  c->r[0]=c->lr; // 801A9484
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A9488
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A948C
  c->lr=0x801A9494u; f_8018D6A0(c); // 801A9490
  c->r[4]=0u+0x802B0000u; // 801A9494
  c->r[0]=0u+0x00000004u; // 801A9498
  c->r[31]=0u+0x00000000u; // 801A949C
  c->r[4]=c->r[4]+0x000069F0u; // 801A94A0
  c->ctr=c->r[0]; // 801A94A4
L_801A94A8:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 801A94A8
  cmpu(c,0,c->r[0],c->r[4]); // 801A94AC
  if (crb(c,2)) { goto L_801A94F8; } // 801A94B0
  c->lr=0x801A94B8u; f_8018D6E0(c); // 801A94B4
  c->lr=0x801A94BCu; f_8018D6A0(c); // 801A94B8
  c->r[4]=0u+0x802B0000u; // 801A94BC
  c->r[0]=rotl(c->r[31],3)&0xFFFFFFF8u; // 801A94C0
  c->r[4]=c->r[4]+0x000069F0u; // 801A94C4
  c->r[31]=R32(c->r[4]+c->r[0]); // 801A94C8
  c->r[5]=c->r[4]+c->r[0]; // 801A94CC
  c->r[0]=R32(c->r[31]+0x00000000u); // 801A94D0
  W32(c->r[5]+0x00000000u,c->r[0]); // 801A94D4
  c->r[4]=R32(c->r[31]+0x00000000u); // 801A94D8
  W32(c->r[4]+0x00000004u,c->r[5]); // 801A94DC
  c->lr=0x801A94E4u; f_8018D6E0(c); // 801A94E0
  c->r[0]=0u+0x00000000u; // 801A94E4
  W32(c->r[31]+0x00000000u,c->r[0]); // 801A94E8
  c->r[3]=c->r[31]|c->r[31]; // 801A94EC
  W32(c->r[31]+0x00000004u,c->r[0]); // 801A94F0
  goto L_801A950C; // 801A94F4
L_801A94F8:;
  c->r[4]=c->r[4]+0x00000008u; // 801A94F8
  c->r[31]=c->r[31]+0x00000001u; // 801A94FC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801A94A8; } // 801A9500
  c->lr=0x801A9508u; f_8018D6E0(c); // 801A9504
  c->r[3]=0u+0x00000000u; // 801A9508
L_801A950C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A950C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A9510
  c->lr=c->r[0]; // 801A9514
  c->r[1]=c->r[1]+0x00000010u; // 801A9518
  return; // 801A951C
}

// __DVDCheckWaitingQueue
void f_801A9520(Ctx* __restrict c) {
  trace_call(0x801A9520u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A9520
  c->r[0]=c->lr; // 801A9524
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A9528
  c->lr=0x801A9530u; f_8018D6A0(c); // 801A952C
  c->r[4]=0u+0x802B0000u; // 801A9530
  c->r[0]=0u+0x00000004u; // 801A9534
  c->r[4]=c->r[4]+0x000069F0u; // 801A9538
  c->ctr=c->r[0]; // 801A953C
L_801A9540:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 801A9540
  cmpu(c,0,c->r[0],c->r[4]); // 801A9544
  if (crb(c,2)) { goto L_801A9558; } // 801A9548
  c->lr=0x801A9550u; f_8018D6E0(c); // 801A954C
  c->r[3]=0u+0x00000001u; // 801A9550
  goto L_801A9568; // 801A9554
L_801A9558:;
  c->r[4]=c->r[4]+0x00000008u; // 801A9558
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801A9540; } // 801A955C
  c->lr=0x801A9564u; f_8018D6E0(c); // 801A9560
  c->r[3]=0u+0x00000000u; // 801A9564
L_801A9568:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A9568
  c->lr=c->r[0]; // 801A956C
  c->r[1]=c->r[1]+0x00000010u; // 801A9570
  return; // 801A9574
}

// __DVDGetNextWaitingQueue
void f_801A9580(Ctx* __restrict c) {
  trace_call(0x801A9580u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A9580
  c->r[0]=c->lr; // 801A9584
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A9588
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A958C
  c->lr=0x801A9594u; f_8018D6A0(c); // 801A9590
  c->r[4]=0u+0x802B0000u; // 801A9594
  c->r[0]=0u+0x00000004u; // 801A9598
  c->r[4]=c->r[4]+0x000069F0u; // 801A959C
  c->ctr=c->r[0]; // 801A95A0
  c->r[0]=c->r[0]|0x00000000u; // 801A95A4
L_801A95A8:;
  c->r[31]=R32(c->r[4]+0x00000000u); // 801A95A8
  cmpu(c,0,c->r[31],c->r[4]); // 801A95AC
  if (crb(c,2)) { goto L_801A95C0; } // 801A95B0
  c->lr=0x801A95B8u; f_8018D6E0(c); // 801A95B4
  c->r[3]=c->r[31]|c->r[31]; // 801A95B8
  goto L_801A95D0; // 801A95BC
L_801A95C0:;
  c->r[4]=c->r[4]+0x00000008u; // 801A95C0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801A95A8; } // 801A95C4
  c->lr=0x801A95CCu; f_8018D6E0(c); // 801A95C8
  c->r[3]=0u+0x00000000u; // 801A95CC
L_801A95D0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A95D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A95D4
  c->lr=c->r[0]; // 801A95D8
  c->r[1]=c->r[1]+0x00000010u; // 801A95DC
  return; // 801A95E0
}

// __DVDDequeueWaitingQueue
void f_801A95F0(Ctx* __restrict c) {
  trace_call(0x801A95F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A95F0
  c->r[0]=c->lr; // 801A95F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A95F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A95FC
  c->r[31]=c->r[3]|c->r[3]; // 801A9600
  c->lr=0x801A9608u; f_8018D6A0(c); // 801A9604
  c->r[4]=R32(c->r[31]+0x00000004u); // 801A9608
  c->r[5]=R32(c->r[31]+0x00000000u); // 801A960C
  cmps(c,0,(int32_t)c->r[4],0); // 801A9610
  if (crb(c,2)) { goto L_801A9620; } // 801A9614
  cmps(c,0,(int32_t)c->r[5],0); // 801A9618
  if (!crb(c,2)) { goto L_801A962C; } // 801A961C
L_801A9620:;
  c->lr=0x801A9624u; f_8018D6E0(c); // 801A9620
  c->r[3]=0u+0x00000000u; // 801A9624
  goto L_801A963C; // 801A9628
L_801A962C:;
  W32(c->r[4]+0x00000000u,c->r[5]); // 801A962C
  W32(c->r[5]+0x00000004u,c->r[4]); // 801A9630
  c->lr=0x801A9638u; f_8018D6E0(c); // 801A9634
  c->r[3]=0u+0x00000001u; // 801A9638
L_801A963C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A963C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A9640
  c->lr=c->r[0]; // 801A9644
  c->r[1]=c->r[1]+0x00000010u; // 801A9648
  return; // 801A964C
}

// cbForNandClose
void f_801A9650(Ctx* __restrict c) {
  trace_call(0x801A9650u);
  c->r[12]=R32(c->r[13]+0xFFFFB300u); // 801A9650
  cmps(c,0,(int32_t)c->r[12],0); // 801A9654
  if (crb(c,2)) return; // 801A9658
  c->r[0]=cntlz(c->r[3]); // 801A965C
  c->r[4]=0u+0x00000000u; // 801A9660
  c->r[0]=rotl(c->r[0],27)&0x00000001u; // 801A9664
  c->r[3]=0u-c->r[0]; // 801A9668
  c->r[3]=c->r[3]+0x00000002u; // 801A966C
  c->ctr=c->r[12]; // 801A9670
  if (true) { dispatch(c,c->ctr); return; } // 801A9674
  return; // 801A9678
}

// cbForNandWrite
void f_801A9680(Ctx* __restrict c) {
  trace_call(0x801A9680u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A9680
  c->r[0]=c->lr; // 801A9684
  c->r[3]=0u+0x802B0000u; // 801A9688
  c->r[4]=0u+0x801B0000u; // 801A968C
  c->r[5]=0u+0x802B0000u; // 801A9690
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A9694
  c->r[3]=c->r[3]+0x00006A20u; // 801A9698
  c->r[4]=c->r[4]+0xFFFF9650u; // 801A969C
  c->r[5]=c->r[5]+0x00006AACu; // 801A96A0
  c->lr=0x801A96A8u; f_801B4620(c); // 801A96A4
  cmps(c,0,(int32_t)c->r[3],0); // 801A96A8
  if (crb(c,2)) { goto L_801A96CC; } // 801A96AC
  c->r[12]=R32(c->r[13]+0xFFFFB300u); // 801A96B0
  cmps(c,0,(int32_t)c->r[12],0); // 801A96B4
  if (crb(c,2)) { goto L_801A96CC; } // 801A96B8
  c->r[3]=0u+0x00000002u; // 801A96BC
  c->r[4]=0u+0x00000000u; // 801A96C0
  c->ctr=c->r[12]; // 801A96C4
  if (true) { c->lr=0x801A96CCu; dispatch(c,c->ctr); } // 801A96C8
L_801A96CC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A96CC
  c->lr=c->r[0]; // 801A96D0
  c->r[1]=c->r[1]+0x00000010u; // 801A96D4
  return; // 801A96D8
}

// cbForNandSeek
void f_801A96E0(Ctx* __restrict c) {
  trace_call(0x801A96E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A96E0
  c->r[0]=c->lr; // 801A96E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A96E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A96EC
  c->r[31]=0u+0x802B0000u; // 801A96F0
  c->r[31]=c->r[31]+0x00006A20u; // 801A96F4
  c->r[4]=R32(c->r[13]+0xFFFFB2FCu); // 801A96F8
  c->r[5]=c->r[4]+0x00000001u; // 801A96FC
  c->r[0]=rotl(c->r[5],7)&0xFFFFFF80u; // 801A9700
  cmpu(c,0,c->r[3],c->r[0]); // 801A9704
  if (!crb(c,2)) { goto L_801A97AC; } // 801A9708
  cmps(c,0,(int32_t)c->r[4],0); // 801A970C
  if (!crb(c,2)) { goto L_801A9740; } // 801A9710
  c->r[4]=0u+0x24920000u; // 801A9714
  c->r[3]=c->r[31]+0x00000160u; // 801A9718
  c->r[0]=c->r[4]+0x00004925u; // 801A971C
  c->r[4]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[5])>>32); // 801A9720
  c->r[0]=c->r[5]-c->r[4]; // 801A9724
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 801A9728
  c->r[0]=c->r[0]+c->r[4]; // 801A972C
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801A9730
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)7); // 801A9734
  c->r[0]=c->r[5]-c->r[0]; // 801A9738
  W32(c->r[3]+0x00000018u,c->r[0]); // 801A973C
L_801A9740:;
  c->r[3]=c->r[31]+0x00000160u; // 801A9740
  c->r[4]=0u+0x00000080u; // 801A9744
  c->lr=0x801A974Cu; f_80188CE0(c); // 801A9748
  c->r[6]=0u+0x801B0000u; // 801A974C
  c->r[3]=c->r[31]+0x00000000u; // 801A9750
  c->r[4]=c->r[31]+0x00000160u; // 801A9754
  c->r[7]=c->r[31]+0x0000008Cu; // 801A9758
  c->r[6]=c->r[6]+0xFFFF9680u; // 801A975C
  c->r[5]=0u+0x00000080u; // 801A9760
  c->lr=0x801A9768u; f_801B3B00(c); // 801A9764
  cmps(c,0,(int32_t)c->r[3],0); // 801A9768
  if (crb(c,2)) { goto L_801A97C8; } // 801A976C
  c->r[4]=0u+0x801B0000u; // 801A9770
  c->r[3]=c->r[31]+0x00000000u; // 801A9774
  c->r[4]=c->r[4]+0xFFFF9650u; // 801A9778
  c->r[5]=c->r[31]+0x0000008Cu; // 801A977C
  c->lr=0x801A9784u; f_801B4620(c); // 801A9780
  cmps(c,0,(int32_t)c->r[3],0); // 801A9784
  if (crb(c,2)) { goto L_801A97C8; } // 801A9788
  c->r[12]=R32(c->r[13]+0xFFFFB300u); // 801A978C
  cmps(c,0,(int32_t)c->r[12],0); // 801A9790
  if (crb(c,2)) { goto L_801A97C8; } // 801A9794
  c->r[3]=0u+0x00000002u; // 801A9798
  c->r[4]=0u+0x00000000u; // 801A979C
  c->ctr=c->r[12]; // 801A97A0
  if (true) { c->lr=0x801A97A8u; dispatch(c,c->ctr); } // 801A97A4
  goto L_801A97C8; // 801A97A8
L_801A97AC:;
  c->r[12]=R32(c->r[13]+0xFFFFB300u); // 801A97AC
  cmps(c,0,(int32_t)c->r[12],0); // 801A97B0
  if (crb(c,2)) { goto L_801A97C8; } // 801A97B4
  c->r[3]=0u+0x00000002u; // 801A97B8
  c->r[4]=0u+0x00000000u; // 801A97BC
  c->ctr=c->r[12]; // 801A97C0
  if (true) { c->lr=0x801A97C8u; dispatch(c,c->ctr); } // 801A97C4
L_801A97C8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A97C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A97CC
  c->lr=c->r[0]; // 801A97D0
  c->r[1]=c->r[1]+0x00000010u; // 801A97D4
  return; // 801A97D8
}

// cbForNandWrite0
void f_801A97E0(Ctx* __restrict c) {
  trace_call(0x801A97E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A97E0
  c->r[0]=c->lr; // 801A97E4
  cmpu(c,0,c->r[3],0x00000080u); // 801A97E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A97EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A97F0
  c->r[31]=0u+0x802B0000u; // 801A97F4
  c->r[31]=c->r[31]+0x00006A20u; // 801A97F8
  if (!crb(c,2)) { goto L_801A9904; } // 801A97FC
  c->r[4]=R32(c->r[13]+0xFFFFB2FCu); // 801A9800
  c->r[6]=0u+0x801B0000u; // 801A9804
  c->r[3]=c->r[31]+0x00000000u; // 801A9808
  c->r[7]=c->r[31]+0x0000008Cu; // 801A980C
  c->r[0]=c->r[4]+0x00000001u; // 801A9810
  c->r[6]=c->r[6]+0xFFFF96E0u; // 801A9814
  c->r[4]=rotl(c->r[0],7)&0xFFFFFF80u; // 801A9818
  c->r[5]=0u+0x00000000u; // 801A981C
  c->lr=0x801A9824u; f_801B3B80(c); // 801A9820
  cmps(c,0,(int32_t)c->r[3],0); // 801A9824
  if (crb(c,2)) { goto L_801A9920; } // 801A9828
  c->r[4]=R32(c->r[13]+0xFFFFB2FCu); // 801A982C
  c->r[5]=c->r[4]+0x00000001u; // 801A9830
  c->r[3]=rotl(c->r[5],7)&0xFFFFFF80u; // 801A9834
  c->r[0]=c->r[3]+0x00010000u; // 801A9838
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801A983C
  if (!crb(c,2)) { goto L_801A98E4; } // 801A9840
  cmps(c,0,(int32_t)c->r[4],0); // 801A9844
  if (!crb(c,2)) { goto L_801A9878; } // 801A9848
  c->r[4]=0u+0x24920000u; // 801A984C
  c->r[3]=c->r[31]+0x00000160u; // 801A9850
  c->r[0]=c->r[4]+0x00004925u; // 801A9854
  c->r[4]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[5])>>32); // 801A9858
  c->r[0]=c->r[5]-c->r[4]; // 801A985C
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 801A9860
  c->r[0]=c->r[0]+c->r[4]; // 801A9864
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801A9868
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)7); // 801A986C
  c->r[0]=c->r[5]-c->r[0]; // 801A9870
  W32(c->r[3]+0x00000018u,c->r[0]); // 801A9874
L_801A9878:;
  c->r[3]=c->r[31]+0x00000160u; // 801A9878
  c->r[4]=0u+0x00000080u; // 801A987C
  c->lr=0x801A9884u; f_80188CE0(c); // 801A9880
  c->r[6]=0u+0x801B0000u; // 801A9884
  c->r[3]=c->r[31]+0x00000000u; // 801A9888
  c->r[4]=c->r[31]+0x00000160u; // 801A988C
  c->r[7]=c->r[31]+0x0000008Cu; // 801A9890
  c->r[6]=c->r[6]+0xFFFF9680u; // 801A9894
  c->r[5]=0u+0x00000080u; // 801A9898
  c->lr=0x801A98A0u; f_801B3B00(c); // 801A989C
  cmps(c,0,(int32_t)c->r[3],0); // 801A98A0
  if (crb(c,2)) { goto L_801A9920; } // 801A98A4
  c->r[4]=0u+0x801B0000u; // 801A98A8
  c->r[3]=c->r[31]+0x00000000u; // 801A98AC
  c->r[4]=c->r[4]+0xFFFF9650u; // 801A98B0
  c->r[5]=c->r[31]+0x0000008Cu; // 801A98B4
  c->lr=0x801A98BCu; f_801B4620(c); // 801A98B8
  cmps(c,0,(int32_t)c->r[3],0); // 801A98BC
  if (crb(c,2)) { goto L_801A9920; } // 801A98C0
  c->r[12]=R32(c->r[13]+0xFFFFB300u); // 801A98C4
  cmps(c,0,(int32_t)c->r[12],0); // 801A98C8
  if (crb(c,2)) { goto L_801A9920; } // 801A98CC
  c->r[3]=0u+0x00000002u; // 801A98D0
  c->r[4]=0u+0x00000000u; // 801A98D4
  c->ctr=c->r[12]; // 801A98D8
  if (true) { c->lr=0x801A98E0u; dispatch(c,c->ctr); } // 801A98DC
  goto L_801A9920; // 801A98E0
L_801A98E4:;
  c->r[12]=R32(c->r[13]+0xFFFFB300u); // 801A98E4
  cmps(c,0,(int32_t)c->r[12],0); // 801A98E8
  if (crb(c,2)) { goto L_801A9920; } // 801A98EC
  c->r[3]=0u+0x00000002u; // 801A98F0
  c->r[4]=0u+0x00000000u; // 801A98F4
  c->ctr=c->r[12]; // 801A98F8
  if (true) { c->lr=0x801A9900u; dispatch(c,c->ctr); } // 801A98FC
  goto L_801A9920; // 801A9900
L_801A9904:;
  c->r[12]=R32(c->r[13]+0xFFFFB300u); // 801A9904
  cmps(c,0,(int32_t)c->r[12],0); // 801A9908
  if (crb(c,2)) { goto L_801A9920; } // 801A990C
  c->r[3]=0u+0x00000002u; // 801A9910
  c->r[4]=0u+0x00000000u; // 801A9914
  c->ctr=c->r[12]; // 801A9918
  if (true) { c->lr=0x801A9920u; dispatch(c,c->ctr); } // 801A991C
L_801A9920:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A9920
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A9924
  c->lr=c->r[0]; // 801A9928
  c->r[1]=c->r[1]+0x00000010u; // 801A992C
  return; // 801A9930
}

// cbForNandSeek2
void f_801A9940(Ctx* __restrict c) {
  trace_call(0x801A9940u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A9940
  c->r[0]=c->lr; // 801A9944
  cmpu(c,0,c->r[3],0x00000080u); // 801A9948
  c->r[7]=0u+0x802B0000u; // 801A994C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A9950
  c->r[7]=c->r[7]+0x00006A20u; // 801A9954
  if (!crb(c,2)) { goto L_801A99D0; } // 801A9958
  c->r[4]=c->r[7]+0x000001E0u; // 801A995C
  c->r[3]=0u+0x24920000u; // 801A9960
  c->r[5]=R32(c->r[4]+0x00000018u); // 801A9964
  c->r[0]=c->r[3]+0x00004925u; // 801A9968
  c->r[6]=0u+0x801B0000u; // 801A996C
  c->r[3]=c->r[7]+0x00000000u; // 801A9970
  c->r[9]=c->r[5]+0x00000001u; // 801A9974
  c->r[7]=c->r[7]+0x0000008Cu; // 801A9978
  c->r[8]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[9])>>32); // 801A997C
  c->r[6]=c->r[6]+0xFFFF97E0u; // 801A9980
  c->r[5]=0u+0x00000080u; // 801A9984
  c->r[0]=c->r[9]-c->r[8]; // 801A9988
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 801A998C
  c->r[0]=c->r[0]+c->r[8]; // 801A9990
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801A9994
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)7); // 801A9998
  c->r[0]=c->r[9]-c->r[0]; // 801A999C
  W32(c->r[4]+0x00000018u,c->r[0]); // 801A99A0
  c->lr=0x801A99A8u; f_801B3B00(c); // 801A99A4
  cmps(c,0,(int32_t)c->r[3],0); // 801A99A8
  if (crb(c,2)) { goto L_801A99EC; } // 801A99AC
  c->r[12]=R32(c->r[13]+0xFFFFB300u); // 801A99B0
  cmps(c,0,(int32_t)c->r[12],0); // 801A99B4
  if (crb(c,2)) { goto L_801A99EC; } // 801A99B8
  c->r[3]=0u+0x00000002u; // 801A99BC
  c->r[4]=0u+0x00000000u; // 801A99C0
  c->ctr=c->r[12]; // 801A99C4
  if (true) { c->lr=0x801A99CCu; dispatch(c,c->ctr); } // 801A99C8
  goto L_801A99EC; // 801A99CC
L_801A99D0:;
  c->r[12]=R32(c->r[13]+0xFFFFB300u); // 801A99D0
  cmps(c,0,(int32_t)c->r[12],0); // 801A99D4
  if (crb(c,2)) { goto L_801A99EC; } // 801A99D8
  c->r[3]=0u+0x00000002u; // 801A99DC
  c->r[4]=0u+0x00000000u; // 801A99E0
  c->ctr=c->r[12]; // 801A99E4
  if (true) { c->lr=0x801A99ECu; dispatch(c,c->ctr); } // 801A99E8
L_801A99EC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A99EC
  c->lr=c->r[0]; // 801A99F0
  c->r[1]=c->r[1]+0x00000010u; // 801A99F4
  return; // 801A99F8
}

// cbForNandRead
void f_801A9A00(Ctx* __restrict c) {
  trace_call(0x801A9A00u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A9A00
  c->r[0]=c->lr; // 801A9A04
  cmpu(c,0,c->r[3],0x00000080u); // 801A9A08
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A9A0C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A9A10
  c->r[31]=0u+0x802B0000u; // 801A9A14
  c->r[31]=c->r[31]+0x00006A20u; // 801A9A18
  if (!crb(c,2)) { goto L_801A9A70; } // 801A9A1C
  c->r[3]=c->r[31]+0x000001E0u; // 801A9A20
  c->r[6]=0u+0x801B0000u; // 801A9A24
  c->r[0]=R32(c->r[3]+0x00000018u); // 801A9A28
  c->r[3]=c->r[31]+0x00000000u; // 801A9A2C
  W32(c->r[13]+0xFFFFB2FCu,c->r[0]); // 801A9A30
  c->r[6]=c->r[6]+0xFFFF9940u; // 801A9A34
  c->r[7]=c->r[31]+0x0000008Cu; // 801A9A38
  c->r[4]=0u+0x00000080u; // 801A9A3C
  c->r[5]=0u+0x00000000u; // 801A9A40
  c->lr=0x801A9A48u; f_801B3B80(c); // 801A9A44
  cmps(c,0,(int32_t)c->r[3],0); // 801A9A48
  if (crb(c,2)) { goto L_801A9AD4; } // 801A9A4C
  c->r[12]=R32(c->r[13]+0xFFFFB300u); // 801A9A50
  cmps(c,0,(int32_t)c->r[12],0); // 801A9A54
  if (crb(c,2)) { goto L_801A9AD4; } // 801A9A58
  c->r[3]=0u+0x00000002u; // 801A9A5C
  c->r[4]=0u+0x00000000u; // 801A9A60
  c->ctr=c->r[12]; // 801A9A64
  if (true) { c->lr=0x801A9A6Cu; dispatch(c,c->ctr); } // 801A9A68
  goto L_801A9AD4; // 801A9A6C
L_801A9A70:;
  c->r[4]=c->r[31]+0x00000160u; // 801A9A70
  c->r[0]=0u+0x00000001u; // 801A9A74
  c->r[6]=0u+0x801B0000u; // 801A9A78
  W32(c->r[4]+0x00000018u,c->r[0]); // 801A9A7C
  c->r[3]=c->r[31]+0x00000000u; // 801A9A80
  c->r[7]=c->r[31]+0x0000008Cu; // 801A9A84
  c->r[6]=c->r[6]+0xFFFF9680u; // 801A9A88
  c->r[5]=0u+0x00000080u; // 801A9A8C
  c->lr=0x801A9A94u; f_801B3B00(c); // 801A9A90
  cmps(c,0,(int32_t)c->r[3],0); // 801A9A94
  if (crb(c,2)) { goto L_801A9AD4; } // 801A9A98
  c->r[4]=0u+0x801B0000u; // 801A9A9C
  c->r[3]=c->r[31]+0x00000000u; // 801A9AA0
  c->r[4]=c->r[4]+0xFFFF9650u; // 801A9AA4
  c->r[5]=c->r[31]+0x0000008Cu; // 801A9AA8
  c->lr=0x801A9AB0u; f_801B4620(c); // 801A9AAC
  cmps(c,0,(int32_t)c->r[3],0); // 801A9AB0
  if (crb(c,2)) { goto L_801A9AD4; } // 801A9AB4
  c->r[12]=R32(c->r[13]+0xFFFFB300u); // 801A9AB8
  cmps(c,0,(int32_t)c->r[12],0); // 801A9ABC
  if (crb(c,2)) { goto L_801A9AD4; } // 801A9AC0
  c->r[3]=0u+0x00000002u; // 801A9AC4
  c->r[4]=0u+0x00000000u; // 801A9AC8
  c->ctr=c->r[12]; // 801A9ACC
  if (true) { c->lr=0x801A9AD4u; dispatch(c,c->ctr); } // 801A9AD0
L_801A9AD4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A9AD4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A9AD8
  c->lr=c->r[0]; // 801A9ADC
  c->r[1]=c->r[1]+0x00000010u; // 801A9AE0
  return; // 801A9AE4
}

// cbForNandSeek0
void f_801A9AF0(Ctx* __restrict c) {
  trace_call(0x801A9AF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A9AF0
  c->r[0]=c->lr; // 801A9AF4
  cmps(c,0,(int32_t)c->r[3],0); // 801A9AF8
  c->r[7]=0u+0x802B0000u; // 801A9AFC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A9B00
  c->r[7]=c->r[7]+0x00006A20u; // 801A9B04
  if (!crb(c,2)) { goto L_801A9B64; } // 801A9B08
  c->r[5]=c->r[7]+0x00000160u; // 801A9B0C
  c->r[3]=0u+0x00000000u; // 801A9B10
  c->r[0]=0u+0x00000001u; // 801A9B14
  c->r[6]=0u+0x801B0000u; // 801A9B18
  W32(c->r[13]+0xFFFFB2FCu,c->r[3]); // 801A9B1C
  c->r[3]=c->r[7]+0x00000000u; // 801A9B20
  c->r[4]=c->r[7]+0x000001E0u; // 801A9B24
  c->r[6]=c->r[6]+0xFFFF97E0u; // 801A9B28
  W32(c->r[5]+0x00000018u,c->r[0]); // 801A9B2C
  c->r[7]=c->r[7]+0x0000008Cu; // 801A9B30
  c->r[5]=0u+0x00000080u; // 801A9B34
  c->lr=0x801A9B3Cu; f_801B3B00(c); // 801A9B38
  cmps(c,0,(int32_t)c->r[3],0); // 801A9B3C
  if (crb(c,2)) { goto L_801A9B80; } // 801A9B40
  c->r[12]=R32(c->r[13]+0xFFFFB300u); // 801A9B44
  cmps(c,0,(int32_t)c->r[12],0); // 801A9B48
  if (crb(c,2)) { goto L_801A9B80; } // 801A9B4C
  c->r[3]=0u+0x00000002u; // 801A9B50
  c->r[4]=0u+0x00000000u; // 801A9B54
  c->ctr=c->r[12]; // 801A9B58
  if (true) { c->lr=0x801A9B60u; dispatch(c,c->ctr); } // 801A9B5C
  goto L_801A9B80; // 801A9B60
L_801A9B64:;
  c->r[12]=R32(c->r[13]+0xFFFFB300u); // 801A9B64
  cmps(c,0,(int32_t)c->r[12],0); // 801A9B68
  if (crb(c,2)) { goto L_801A9B80; } // 801A9B6C
  c->r[3]=0u+0x00000002u; // 801A9B70
  c->r[4]=0u+0x00000000u; // 801A9B74
  c->ctr=c->r[12]; // 801A9B78
  if (true) { c->lr=0x801A9B80u; dispatch(c,c->ctr); } // 801A9B7C
L_801A9B80:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A9B80
  c->lr=c->r[0]; // 801A9B84
  c->r[1]=c->r[1]+0x00000010u; // 801A9B88
  return; // 801A9B8C
}

// cbForNandSeek1
void f_801A9B90(Ctx* __restrict c) {
  trace_call(0x801A9B90u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A9B90
  c->r[0]=c->lr; // 801A9B94
  cmpu(c,0,c->r[3],0x00000080u); // 801A9B98
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A9B9C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A9BA0
  c->r[31]=0u+0x802B0000u; // 801A9BA4
  c->r[31]=c->r[31]+0x00006A20u; // 801A9BA8
  if (!crb(c,2)) { goto L_801A9C3C; } // 801A9BAC
  c->r[6]=0u+0x801B0000u; // 801A9BB0
  c->r[3]=c->r[31]+0x00000000u; // 801A9BB4
  c->r[4]=c->r[31]+0x000001E0u; // 801A9BB8
  c->r[7]=c->r[31]+0x0000008Cu; // 801A9BBC
  c->r[6]=c->r[6]+0xFFFF9A00u; // 801A9BC0
  c->r[5]=0u+0x00000080u; // 801A9BC4
  c->lr=0x801A9BCCu; f_801B3A10(c); // 801A9BC8
  cmps(c,0,(int32_t)c->r[3],0); // 801A9BCC
  if (crb(c,2)) { goto L_801A9C7C; } // 801A9BD0
  c->r[4]=c->r[31]+0x00000160u; // 801A9BD4
  c->r[0]=0u+0x00000001u; // 801A9BD8
  c->r[6]=0u+0x801B0000u; // 801A9BDC
  W32(c->r[4]+0x00000018u,c->r[0]); // 801A9BE0
  c->r[3]=c->r[31]+0x00000000u; // 801A9BE4
  c->r[7]=c->r[31]+0x0000008Cu; // 801A9BE8
  c->r[6]=c->r[6]+0xFFFF9680u; // 801A9BEC
  c->r[5]=0u+0x00000080u; // 801A9BF0
  c->lr=0x801A9BF8u; f_801B3B00(c); // 801A9BF4
  cmps(c,0,(int32_t)c->r[3],0); // 801A9BF8
  if (crb(c,2)) { goto L_801A9C7C; } // 801A9BFC
  c->r[4]=0u+0x801B0000u; // 801A9C00
  c->r[3]=c->r[31]+0x00000000u; // 801A9C04
  c->r[4]=c->r[4]+0xFFFF9650u; // 801A9C08
  c->r[5]=c->r[31]+0x0000008Cu; // 801A9C0C
  c->lr=0x801A9C14u; f_801B4620(c); // 801A9C10
  cmps(c,0,(int32_t)c->r[3],0); // 801A9C14
  if (crb(c,2)) { goto L_801A9C7C; } // 801A9C18
  c->r[12]=R32(c->r[13]+0xFFFFB300u); // 801A9C1C
  cmps(c,0,(int32_t)c->r[12],0); // 801A9C20
  if (crb(c,2)) { goto L_801A9C7C; } // 801A9C24
  c->r[3]=0u+0x00000002u; // 801A9C28
  c->r[4]=0u+0x00000000u; // 801A9C2C
  c->ctr=c->r[12]; // 801A9C30
  if (true) { c->lr=0x801A9C38u; dispatch(c,c->ctr); } // 801A9C34
  goto L_801A9C7C; // 801A9C38
L_801A9C3C:;
  c->r[6]=0u+0x801B0000u; // 801A9C3C
  c->r[3]=c->r[31]+0x00000000u; // 801A9C40
  c->r[6]=c->r[6]+0xFFFF9AF0u; // 801A9C44
  c->r[7]=c->r[31]+0x0000008Cu; // 801A9C48
  c->r[4]=0u+0x00000000u; // 801A9C4C
  c->r[5]=0u+0x00000000u; // 801A9C50
  c->lr=0x801A9C58u; f_801B3B80(c); // 801A9C54
  cmps(c,0,(int32_t)c->r[3],0); // 801A9C58
  if (crb(c,2)) { goto L_801A9C7C; } // 801A9C5C
  c->r[12]=R32(c->r[13]+0xFFFFB300u); // 801A9C60
  cmps(c,0,(int32_t)c->r[12],0); // 801A9C64
  if (crb(c,2)) { goto L_801A9C7C; } // 801A9C68
  c->r[3]=0u+0x00000002u; // 801A9C6C
  c->r[4]=0u+0x00000000u; // 801A9C70
  c->ctr=c->r[12]; // 801A9C74
  if (true) { c->lr=0x801A9C7Cu; dispatch(c,c->ctr); } // 801A9C78
L_801A9C7C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A9C7C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A9C80
  c->lr=c->r[0]; // 801A9C84
  c->r[1]=c->r[1]+0x00000010u; // 801A9C88
  return; // 801A9C8C
}

// cbForNandOpen
void f_801A9C90(Ctx* __restrict c) {
  trace_call(0x801A9C90u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A9C90
  c->r[0]=c->lr; // 801A9C94
  cmps(c,0,(int32_t)c->r[3],0); // 801A9C98
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A9C9C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A9CA0
  c->r[31]=0u+0x802B0000u; // 801A9CA4
  c->r[31]=c->r[31]+0x00006A20u; // 801A9CA8
  if (!crb(c,2)) { goto L_801A9D7C; } // 801A9CAC
  c->r[0]=R32(c->r[13]+0xFFFFB2F8u); // 801A9CB0
  cmps(c,0,(int32_t)c->r[0],0); // 801A9CB4
  if (crb(c,2)) { goto L_801A9D24; } // 801A9CB8
  c->r[6]=0u+0x801B0000u; // 801A9CBC
  c->r[3]=c->r[31]+0x00000000u; // 801A9CC0
  c->r[6]=c->r[6]+0xFFFF9B90u; // 801A9CC4
  c->r[7]=c->r[31]+0x0000008Cu; // 801A9CC8
  c->r[4]=0u+0x00000080u; // 801A9CCC
  c->r[5]=0u+0x00000000u; // 801A9CD0
  c->lr=0x801A9CD8u; f_801B3B80(c); // 801A9CD4
  cmps(c,0,(int32_t)c->r[3],0); // 801A9CD8
  if (crb(c,2)) { goto L_801A9D98; } // 801A9CDC
  c->r[6]=0u+0x801B0000u; // 801A9CE0
  c->r[3]=c->r[31]+0x00000000u; // 801A9CE4
  c->r[6]=c->r[6]+0xFFFF9AF0u; // 801A9CE8
  c->r[7]=c->r[31]+0x0000008Cu; // 801A9CEC
  c->r[4]=0u+0x00000000u; // 801A9CF0
  c->r[5]=0u+0x00000000u; // 801A9CF4
  c->lr=0x801A9CFCu; f_801B3B80(c); // 801A9CF8
  cmps(c,0,(int32_t)c->r[3],0); // 801A9CFC
  if (crb(c,2)) { goto L_801A9D98; } // 801A9D00
  c->r[12]=R32(c->r[13]+0xFFFFB300u); // 801A9D04
  cmps(c,0,(int32_t)c->r[12],0); // 801A9D08
  if (crb(c,2)) { goto L_801A9D98; } // 801A9D0C
  c->r[3]=0u+0x00000002u; // 801A9D10
  c->r[4]=0u+0x00000000u; // 801A9D14
  c->ctr=c->r[12]; // 801A9D18
  if (true) { c->lr=0x801A9D20u; dispatch(c,c->ctr); } // 801A9D1C
  goto L_801A9D98; // 801A9D20
L_801A9D24:;
  c->r[5]=c->r[31]+0x00000160u; // 801A9D24
  c->r[3]=0u+0x00000000u; // 801A9D28
  c->r[0]=0u+0x00000001u; // 801A9D2C
  c->r[6]=0u+0x801B0000u; // 801A9D30
  W32(c->r[13]+0xFFFFB2FCu,c->r[3]); // 801A9D34
  c->r[3]=c->r[31]+0x00000000u; // 801A9D38
  c->r[4]=c->r[31]+0x000001E0u; // 801A9D3C
  c->r[6]=c->r[6]+0xFFFF97E0u; // 801A9D40
  W32(c->r[5]+0x00000018u,c->r[0]); // 801A9D44
  c->r[7]=c->r[31]+0x0000008Cu; // 801A9D48
  c->r[5]=0u+0x00000080u; // 801A9D4C
  c->lr=0x801A9D54u; f_801B3B00(c); // 801A9D50
  cmps(c,0,(int32_t)c->r[3],0); // 801A9D54
  if (crb(c,2)) { goto L_801A9D98; } // 801A9D58
  c->r[12]=R32(c->r[13]+0xFFFFB300u); // 801A9D5C
  cmps(c,0,(int32_t)c->r[12],0); // 801A9D60
  if (crb(c,2)) { goto L_801A9D98; } // 801A9D64
  c->r[3]=0u+0x00000002u; // 801A9D68
  c->r[4]=0u+0x00000000u; // 801A9D6C
  c->ctr=c->r[12]; // 801A9D70
  if (true) { c->lr=0x801A9D78u; dispatch(c,c->ctr); } // 801A9D74
  goto L_801A9D98; // 801A9D78
L_801A9D7C:;
  c->r[12]=R32(c->r[13]+0xFFFFB300u); // 801A9D7C
  cmps(c,0,(int32_t)c->r[12],0); // 801A9D80
  if (crb(c,2)) { goto L_801A9D98; } // 801A9D84
  c->r[3]=0u+0x00000002u; // 801A9D88
  c->r[4]=0u+0x00000000u; // 801A9D8C
  c->ctr=c->r[12]; // 801A9D90
  if (true) { c->lr=0x801A9D98u; dispatch(c,c->ctr); } // 801A9D94
L_801A9D98:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A9D98
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A9D9C
  c->lr=c->r[0]; // 801A9DA0
  c->r[1]=c->r[1]+0x00000010u; // 801A9DA4
  return; // 801A9DA8
}

// cbForNandCreate
void f_801A9DB0(Ctx* __restrict c) {
  trace_call(0x801A9DB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A9DB0
  c->r[0]=c->lr; // 801A9DB4
  cmps(c,0,(int32_t)c->r[3],0); // 801A9DB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A9DBC
  if (crb(c,2)) { goto L_801A9DD4; } // 801A9DC0
  cmps(c,0,(int32_t)c->r[3],-6); // 801A9DC4
  if (!crb(c,2)) { goto L_801A9E24; } // 801A9DC8
  c->r[0]=0u+0x00000001u; // 801A9DCC
  W32(c->r[13]+0xFFFFB2F8u,c->r[0]); // 801A9DD0
L_801A9DD4:;
  c->r[3]=0u+0x80270000u; // 801A9DD4
  c->r[4]=0u+0x802B0000u; // 801A9DD8
  c->r[6]=0u+0x801B0000u; // 801A9DDC
  c->r[7]=0u+0x802B0000u; // 801A9DE0
  c->r[3]=c->r[3]+0x000052E8u; // 801A9DE4
  c->r[4]=c->r[4]+0x00006A20u; // 801A9DE8
  c->r[6]=c->r[6]+0xFFFF9C90u; // 801A9DEC
  c->r[7]=c->r[7]+0x00006AACu; // 801A9DF0
  c->r[5]=0u+0x00000003u; // 801A9DF4
  c->lr=0x801A9DFCu; f_801B44B0(c); // 801A9DF8
  cmps(c,0,(int32_t)c->r[3],0); // 801A9DFC
  if (crb(c,2)) { goto L_801A9E40; } // 801A9E00
  c->r[12]=R32(c->r[13]+0xFFFFB300u); // 801A9E04
  cmps(c,0,(int32_t)c->r[12],0); // 801A9E08
  if (crb(c,2)) { goto L_801A9E40; } // 801A9E0C
  c->r[3]=0u+0x00000002u; // 801A9E10
  c->r[4]=0u+0x00000000u; // 801A9E14
  c->ctr=c->r[12]; // 801A9E18
  if (true) { c->lr=0x801A9E20u; dispatch(c,c->ctr); } // 801A9E1C
  goto L_801A9E40; // 801A9E20
L_801A9E24:;
  c->r[12]=R32(c->r[13]+0xFFFFB300u); // 801A9E24
  cmps(c,0,(int32_t)c->r[12],0); // 801A9E28
  if (crb(c,2)) { goto L_801A9E40; } // 801A9E2C
  c->r[3]=0u+0x00000002u; // 801A9E30
  c->r[4]=0u+0x00000000u; // 801A9E34
  c->ctr=c->r[12]; // 801A9E38
  if (true) { c->lr=0x801A9E40u; dispatch(c,c->ctr); } // 801A9E3C
L_801A9E40:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A9E40
  c->lr=c->r[0]; // 801A9E44
  c->r[1]=c->r[1]+0x00000010u; // 801A9E48
  return; // 801A9E4C
}

// cbForNandCreateDir
void f_801A9E50(Ctx* __restrict c) {
  trace_call(0x801A9E50u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A9E50
  c->r[0]=c->lr; // 801A9E54
  cmps(c,0,(int32_t)c->r[3],0); // 801A9E58
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A9E5C
  if (crb(c,2)) { goto L_801A9E6C; } // 801A9E60
  cmps(c,0,(int32_t)c->r[3],-6); // 801A9E64
  if (!crb(c,2)) { goto L_801A9EB8; } // 801A9E68
L_801A9E6C:;
  c->r[3]=0u+0x80270000u; // 801A9E6C
  c->r[6]=0u+0x801B0000u; // 801A9E70
  c->r[7]=0u+0x802B0000u; // 801A9E74
  c->r[4]=0u+0x0000003Fu; // 801A9E78
  c->r[3]=c->r[3]+0x000052E8u; // 801A9E7C
  c->r[6]=c->r[6]+0xFFFF9DB0u; // 801A9E80
  c->r[7]=c->r[7]+0x00006AACu; // 801A9E84
  c->r[5]=0u+0x00000000u; // 801A9E88
  c->lr=0x801A9E90u; f_801B3690(c); // 801A9E8C
  cmps(c,0,(int32_t)c->r[3],0); // 801A9E90
  if (crb(c,2)) { goto L_801A9ED4; } // 801A9E94
  c->r[12]=R32(c->r[13]+0xFFFFB300u); // 801A9E98
  cmps(c,0,(int32_t)c->r[12],0); // 801A9E9C
  if (crb(c,2)) { goto L_801A9ED4; } // 801A9EA0
  c->r[3]=0u+0x00000002u; // 801A9EA4
  c->r[4]=0u+0x00000000u; // 801A9EA8
  c->ctr=c->r[12]; // 801A9EAC
  if (true) { c->lr=0x801A9EB4u; dispatch(c,c->ctr); } // 801A9EB0
  goto L_801A9ED4; // 801A9EB4
L_801A9EB8:;
  c->r[12]=R32(c->r[13]+0xFFFFB300u); // 801A9EB8
  cmps(c,0,(int32_t)c->r[12],0); // 801A9EBC
  if (crb(c,2)) { goto L_801A9ED4; } // 801A9EC0
  c->r[3]=0u+0x00000002u; // 801A9EC4
  c->r[4]=0u+0x00000000u; // 801A9EC8
  c->ctr=c->r[12]; // 801A9ECC
  if (true) { c->lr=0x801A9ED4u; dispatch(c,c->ctr); } // 801A9ED0
L_801A9ED4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A9ED4
  c->lr=c->r[0]; // 801A9ED8
  c->r[1]=c->r[1]+0x00000010u; // 801A9EDC
  return; // 801A9EE0
}

// cbForPrepareControlRegister
void f_801A9EF0(Ctx* __restrict c) {
  trace_call(0x801A9EF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A9EF0
  c->r[0]=c->lr; // 801A9EF4
  cmpu(c,0,c->r[3],0x00000001u); // 801A9EF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A9EFC
  if (!crb(c,2)) { goto L_801A9F18; } // 801A9F00
  c->lr=0x801A9F08u; f_801AC600(c); // 801A9F04
  c->r[4]=0u+0x802B0000u; // 801A9F08
  c->r[4]=c->r[4]+0x00006B80u; // 801A9F0C
  W32(c->r[4]+0x00000014u,c->r[3]); // 801A9F10
  goto L_801A9F28; // 801A9F14
L_801A9F18:;
  c->r[3]=0u+0x802B0000u; // 801A9F18
  c->r[0]=0u+0xFFFFFFFFu; // 801A9F1C
  c->r[3]=c->r[3]+0x00006B80u; // 801A9F20
  W32(c->r[3]+0x00000014u,c->r[0]); // 801A9F24
L_801A9F28:;
  c->r[3]=0u+0x80270000u; // 801A9F28
  c->r[6]=0u+0x801B0000u; // 801A9F2C
  c->r[7]=0u+0x802B0000u; // 801A9F30
  c->r[4]=0u+0x0000003Fu; // 801A9F34
  c->r[3]=c->r[3]+0x00005304u; // 801A9F38
  c->r[6]=c->r[6]+0xFFFF9E50u; // 801A9F3C
  c->r[7]=c->r[7]+0x00006AACu; // 801A9F40
  c->r[5]=0u+0x00000000u; // 801A9F44
  c->lr=0x801A9F4Cu; f_801B3C30(c); // 801A9F48
  cmps(c,0,(int32_t)c->r[3],0); // 801A9F4C
  if (crb(c,2)) { goto L_801A9F70; } // 801A9F50
  c->r[12]=R32(c->r[13]+0xFFFFB300u); // 801A9F54
  cmps(c,0,(int32_t)c->r[12],0); // 801A9F58
  if (crb(c,2)) { goto L_801A9F70; } // 801A9F5C
  c->r[3]=0u+0x00000002u; // 801A9F60
  c->r[4]=0u+0x00000000u; // 801A9F64
  c->ctr=c->r[12]; // 801A9F68
  if (true) { c->lr=0x801A9F70u; dispatch(c,c->ctr); } // 801A9F6C
L_801A9F70:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A9F70
  c->lr=c->r[0]; // 801A9F74
  c->r[1]=c->r[1]+0x00000010u; // 801A9F78
  return; // 801A9F7C
}

// cbForPrepareStatusRegister
void f_801A9F80(Ctx* __restrict c) {
  trace_call(0x801A9F80u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A9F80
  c->r[0]=c->lr; // 801A9F84
  cmpu(c,0,c->r[3],0x00000001u); // 801A9F88
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A9F8C
  if (!crb(c,2)) { goto L_801A9FA8; } // 801A9F90
  c->lr=0x801A9F98u; f_801AC5F0(c); // 801A9F94
  c->r[4]=0u+0x802B0000u; // 801A9F98
  c->r[4]=c->r[4]+0x00006B80u; // 801A9F9C
  W32(c->r[4]+0x00000010u,c->r[3]); // 801A9FA0
  goto L_801A9FB8; // 801A9FA4
L_801A9FA8:;
  c->r[3]=0u+0x802B0000u; // 801A9FA8
  c->r[0]=0u+0xFFFFFFFFu; // 801A9FAC
  c->r[3]=c->r[3]+0x00006B80u; // 801A9FB0
  W32(c->r[3]+0x00000010u,c->r[0]); // 801A9FB4
L_801A9FB8:;
  c->r[3]=0u+0x801B0000u; // 801A9FB8
  c->r[3]=c->r[3]+0xFFFF9EF0u; // 801A9FBC
  c->lr=0x801A9FC4u; f_801AC8F0(c); // 801A9FC0
  cmps(c,0,(int32_t)c->r[3],0); // 801A9FC4
  if (!crb(c,2)) { goto L_801A9FE8; } // 801A9FC8
  c->r[12]=R32(c->r[13]+0xFFFFB300u); // 801A9FCC
  cmps(c,0,(int32_t)c->r[12],0); // 801A9FD0
  if (crb(c,2)) { goto L_801A9FE8; } // 801A9FD4
  c->r[3]=0u+0x00000002u; // 801A9FD8
  c->r[4]=0u+0x00000000u; // 801A9FDC
  c->ctr=c->r[12]; // 801A9FE0
  if (true) { c->lr=0x801A9FE8u; dispatch(c,c->ctr); } // 801A9FE4
L_801A9FE8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A9FE8
  c->lr=c->r[0]; // 801A9FEC
  c->r[1]=c->r[1]+0x00000010u; // 801A9FF0
  return; // 801A9FF4
}

// __DVDStoreErrorCode
void f_801AA000(Ctx* __restrict c) {
  trace_call(0x801AA000u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AA000
  c->r[0]=c->lr; // 801AA004
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AA008
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AA00C
  c->r[31]=0u+0x802B0000u; // 801AA010
  c->r[31]=c->r[31]+0x00006B80u; // 801AA014
  W32(c->r[1]+0x00000008u,c->r[30]); // 801AA018
  c->r[30]=c->r[4]|c->r[4]; // 801AA01C
  W32(c->r[31]+0x00000008u,c->r[3]); // 801AA020
  c->lr=0x801AA028u; f_801915C0(c); // 801AA024
  c->r[6]=0u+0x80000000u; // 801AA028
  c->r[5]=0u+0x00000000u; // 801AA02C
  c->r[0]=R32(c->r[6]+0x000000F8u); // 801AA030
  c->r[6]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801AA034
  c->lr=0x801AA03Cu; f_80207B70(c); // 801AA038
  c->r[3]=0u+0x801B0000u; // 801AA03C
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 801AA040
  c->r[3]=c->r[3]+0xFFFF9F80u; // 801AA044
  W32(c->r[13]+0xFFFFB300u,c->r[30]); // 801AA048
  c->lr=0x801AA050u; f_801AC780(c); // 801AA04C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AA050
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AA054
  c->r[30]=R32(c->r[1]+0x00000008u); // 801AA058
  c->lr=c->r[0]; // 801AA05C
  c->r[1]=c->r[1]+0x00000010u; // 801AA060
  return; // 801AA064
}

// DVDCompareDiskID
void f_801AA070(Ctx* __restrict c) {
  trace_call(0x801AA070u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AA070
  c->r[0]=c->lr; // 801AA074
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AA078
  c->r[0]=R8(c->r[3]+0x00000000u); // 801AA07C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AA080
  c->r[31]=c->r[4]|c->r[4]; // 801AA084
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801AA088
  W32(c->r[1]+0x00000008u,c->r[30]); // 801AA08C
  c->r[30]=c->r[3]|c->r[3]; // 801AA090
  if (crb(c,2)) { goto L_801AA0BC; } // 801AA094
  c->r[0]=R8(c->r[4]+0x00000000u); // 801AA098
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801AA09C
  if (crb(c,2)) { goto L_801AA0BC; } // 801AA0A0
  c->r[5]=0u+0x00000004u; // 801AA0A4
  c->lr=0x801AA0ACu; f_8020E9CC(c); // 801AA0A8
  cmps(c,0,(int32_t)c->r[3],0); // 801AA0AC
  if (crb(c,2)) { goto L_801AA0BC; } // 801AA0B0
  c->r[3]=0u+0x00000000u; // 801AA0B4
  goto L_801AA148; // 801AA0B8
L_801AA0BC:;
  c->r[0]=R8(c->r[30]+0x00000004u); // 801AA0BC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801AA0C0
  if (crb(c,2)) { goto L_801AA0EC; } // 801AA0C4
  c->r[0]=R8(c->r[31]+0x00000004u); // 801AA0C8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801AA0CC
  if (crb(c,2)) { goto L_801AA0EC; } // 801AA0D0
  c->r[3]=c->r[30]+0x00000004u; // 801AA0D4
  c->r[4]=c->r[31]+0x00000004u; // 801AA0D8
  c->r[5]=0u+0x00000002u; // 801AA0DC
  c->lr=0x801AA0E4u; f_8020E9CC(c); // 801AA0E0
  cmps(c,0,(int32_t)c->r[3],0); // 801AA0E4
  if (crb(c,2)) { goto L_801AA0F4; } // 801AA0E8
L_801AA0EC:;
  c->r[3]=0u+0x00000000u; // 801AA0EC
  goto L_801AA148; // 801AA0F0
L_801AA0F4:;
  c->r[3]=R8(c->r[30]+0x00000006u); // 801AA0F4
  cmpu(c,0,c->r[3],0x000000FFu); // 801AA0F8
  if (crb(c,2)) { goto L_801AA11C; } // 801AA0FC
  c->r[0]=R8(c->r[31]+0x00000006u); // 801AA100
  cmpu(c,0,c->r[0],0x000000FFu); // 801AA104
  if (crb(c,2)) { goto L_801AA11C; } // 801AA108
  cmpu(c,0,c->r[3],c->r[0]); // 801AA10C
  if (crb(c,2)) { goto L_801AA11C; } // 801AA110
  c->r[3]=0u+0x00000000u; // 801AA114
  goto L_801AA148; // 801AA118
L_801AA11C:;
  c->r[3]=R8(c->r[30]+0x00000007u); // 801AA11C
  cmpu(c,0,c->r[3],0x000000FFu); // 801AA120
  if (crb(c,2)) { goto L_801AA144; } // 801AA124
  c->r[0]=R8(c->r[31]+0x00000007u); // 801AA128
  cmpu(c,0,c->r[0],0x000000FFu); // 801AA12C
  if (crb(c,2)) { goto L_801AA144; } // 801AA130
  cmpu(c,0,c->r[3],c->r[0]); // 801AA134
  if (crb(c,2)) { goto L_801AA144; } // 801AA138
  c->r[3]=0u+0x00000000u; // 801AA13C
  goto L_801AA148; // 801AA140
L_801AA144:;
  c->r[3]=0u+0x00000001u; // 801AA144
L_801AA148:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AA148
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AA14C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801AA150
  c->lr=c->r[0]; // 801AA154
  c->r[1]=c->r[1]+0x00000010u; // 801AA158
  return; // 801AA15C
}

// __DVDShowFatalMessage
void f_801AA160(Ctx* __restrict c) {
  trace_call(0x801AA160u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AA160
  c->r[0]=c->lr; // 801AA164
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AA168
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801AA16C
  c->r[31]=0u+0x00000000u; // 801AA170
  W32(c->r[1]+0x00000018u,c->r[30]); // 801AA174
  c->r[30]=R32(c->r[2]+0xFFFFA0E8u); // 801AA178
  W32(c->r[1]+0x00000014u,c->r[29]); // 801AA17C
  c->lr=0x801AA184u; f_801B8020(c); // 801AA180
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801AA184
  if (!crb(c,2)) { goto L_801AA198; } // 801AA188
  c->r[3]=0u+0x00000001u; // 801AA18C
  c->lr=0x801AA194u; f_8018C650(c); // 801AA190
  goto L_801AA1A0; // 801AA194
L_801AA198:;
  c->r[3]=0u+0x00000000u; // 801AA198
  c->lr=0x801AA1A0u; f_8018C650(c); // 801AA19C
L_801AA1A0:;
  c->lr=0x801AA1A4u; f_801B85E0(c); // 801AA1A0
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 801AA1A4
  c->r[0]=c->r[3]+0xFFFFFFFCu; // 801AA1A8
  cmpu(c,0,c->r[0],0x00000001u); // 801AA1AC
  if (!crb(c,1)) { goto L_801AA1D4; } // 801AA1B0
  cmps(c,0,(int32_t)c->r[3],2); // 801AA1B4
  if (crb(c,2)) { goto L_801AA1C8; } // 801AA1B8
  c->r[29]=0u+0x80220000u; // 801AA1BC
  c->r[29]=c->r[29]+0x00006748u; // 801AA1C0
  goto L_801AA1D8; // 801AA1C4
L_801AA1C8:;
  c->r[29]=0u+0x80220000u; // 801AA1C8
  c->r[29]=c->r[29]+0x00006764u; // 801AA1CC
  goto L_801AA1D8; // 801AA1D0
L_801AA1D4:;
  c->r[29]=c->r[13]+0xFFFFA878u; // 801AA1D4
L_801AA1D8:;
  c->lr=0x801AA1DCu; f_801B8020(c); // 801AA1D8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801AA1DC
  cmpu(c,0,c->r[0],0x00000006u); // 801AA1E0
  if (!crb(c,1)) { goto L_801AA1F0; } // 801AA1E4
  c->r[5]=R32(c->r[29]+0x00000004u); // 801AA1E8
  goto L_801AA1FC; // 801AA1EC
L_801AA1F0:;
  c->lr=0x801AA1F4u; f_801B8020(c); // 801AA1F0
  c->r[0]=rotl(c->r[3],2)&0x000003FCu; // 801AA1F4
  c->r[5]=R32(c->r[29]+c->r[0]); // 801AA1F8
L_801AA1FC:;
  W32(c->r[1]+0x00000008u,c->r[31]); // 801AA1FC
  c->r[3]=c->r[1]+0x0000000Cu; // 801AA200
  c->r[4]=c->r[1]+0x00000008u; // 801AA204
  W32(c->r[1]+0x0000000Cu,c->r[30]); // 801AA208
  c->lr=0x801AA210u; f_8018BB30(c); // 801AA20C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AA210
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801AA214
  c->r[30]=R32(c->r[1]+0x00000018u); // 801AA218
  c->r[29]=R32(c->r[1]+0x00000014u); // 801AA21C
  c->lr=c->r[0]; // 801AA220
  c->r[1]=c->r[1]+0x00000020u; // 801AA224
  return; // 801AA228
}

// DVDSetAutoFatalMessaging
void f_801AA230(Ctx* __restrict c) {
  trace_call(0x801AA230u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AA230
  c->r[0]=c->lr; // 801AA234
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AA238
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AA23C
  c->r[31]=c->r[3]|c->r[3]; // 801AA240
  c->lr=0x801AA248u; f_8018D6A0(c); // 801AA244
  c->r[5]=R32(c->r[13]+0xFFFFB308u); // 801AA248
  cmps(c,0,(int32_t)c->r[31],0); // 801AA24C
  c->r[4]=0u+0x00000000u; // 801AA250
  c->r[0]=0u-c->r[5]; // 801AA254
  c->r[0]=c->r[0]|c->r[5]; // 801AA258
  c->r[31]=rotl(c->r[0],1)&0x00000001u; // 801AA25C
  if (crb(c,2)) { goto L_801AA26C; } // 801AA260
  c->r[4]=0u+0x801B0000u; // 801AA264
  c->r[4]=c->r[4]+0xFFFFA160u; // 801AA268
L_801AA26C:;
  W32(c->r[13]+0xFFFFB308u,c->r[4]); // 801AA26C
  c->lr=0x801AA274u; f_8018D6E0(c); // 801AA270
  c->r[3]=c->r[31]|c->r[31]; // 801AA274
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AA278
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AA27C
  c->lr=c->r[0]; // 801AA280
  c->r[1]=c->r[1]+0x00000010u; // 801AA284
  return; // 801AA288
}

// __DVDGetAutoFatalMessaging
void f_801AA290(Ctx* __restrict c) {
  trace_call(0x801AA290u);
  c->r[3]=R32(c->r[13]+0xFFFFB308u); // 801AA290
  c->r[0]=0u-c->r[3]; // 801AA294
  c->r[0]=c->r[0]|c->r[3]; // 801AA298
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801AA29C
  return; // 801AA2A0
}

// __DVDPrintFatalMessage
void f_801AA2B0(Ctx* __restrict c) {
  trace_call(0x801AA2B0u);
  c->r[12]=R32(c->r[13]+0xFFFFB308u); // 801AA2B0
  cmps(c,0,(int32_t)c->r[12],0); // 801AA2B4
  if (crb(c,2)) return; // 801AA2B8
  c->ctr=c->r[12]; // 801AA2BC
  if (true) { dispatch(c,c->ctr); return; } // 801AA2C0
  return; // 801AA2C4
}

// lowCallback
void f_801AA2D0(Ctx* __restrict c) {
  trace_call(0x801AA2D0u);
  W32(c->r[13]+0xFFFFB310u,c->r[3]); // 801AA2D0
  c->r[0]=0u+0x00000001u; // 801AA2D4
  W32(c->r[13]+0xFFFFA880u,c->r[0]); // 801AA2D8
  return; // 801AA2DC
}

// __DVDCheckDevice
void f_801AA2E0(Ctx* __restrict c) {
  trace_call(0x801AA2E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AA2E0
  c->r[0]=c->lr; // 801AA2E4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801AA2E8
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801AA2EC
  W32(c->r[1]+0x00000028u,c->r[30]); // 801AA2F0
  W32(c->r[1]+0x00000024u,c->r[29]); // 801AA2F4
  c->r[29]=0u+0x460A0000u; // 801AA2F8
  c->lr=0x801AA300u; f_8018E170(c); // 801AA2FC
  c->r[0]=c->r[3]+0xF8000000u; // 801AA300
  cmpu(c,0,c->r[0],0x00000000u); // 801AA304
  if (!crb(c,2)) { goto L_801AA314; } // 801AA308
  c->r[3]=0u+0x00000001u; // 801AA30C
  goto L_801AA540; // 801AA310
L_801AA314:;
  c->r[3]=c->r[1]+0x00000010u; // 801AA314
  c->lr=0x801AA31Cu; f_801867D0(c); // 801AA318
  c->r[0]=R8(c->r[1]+0x00000011u); // 801AA31C
  cmpu(c,0,c->r[0],0x0000001Eu); // 801AA320
  if (crb(c,0)) { goto L_801AA330; } // 801AA324
  cmpu(c,0,c->r[0],0x000000FEu); // 801AA328
  if (crb(c,0)) { goto L_801AA338; } // 801AA32C
L_801AA330:;
  c->r[3]=0u+0x00000001u; // 801AA330
  goto L_801AA540; // 801AA334
L_801AA338:;
  c->r[3]=0u+0x80000000u; // 801AA338
  c->r[0]=R8(c->r[3]+0x0000319Cu); // 801AA33C
  cmpu(c,0,c->r[0],0x00000081u); // 801AA340
  if (!crb(c,2)) { goto L_801AA34C; } // 801AA344
  c->r[29]=0u+0x7ED40000u; // 801AA348
L_801AA34C:;
  c->r[0]=0u+0x00000000u; // 801AA34C
  c->r[3]=0u+0x802B0000u; // 801AA350
  c->r[6]=0u+0x801B0000u; // 801AA354
  W32(c->r[13]+0xFFFFA880u,c->r[0]); // 801AA358
  c->r[5]=c->r[29]|c->r[29]; // 801AA35C
  c->r[3]=c->r[3]+0x00006C80u; // 801AA360
  c->r[6]=c->r[6]+0xFFFFA2D0u; // 801AA364
  c->r[4]=0u+0x00000020u; // 801AA368
  c->lr=0x801AA370u; f_801AB630(c); // 801AA36C
L_801AA370:;
  c->r[0]=R32(c->r[13]+0xFFFFA880u); // 801AA370
  cmps(c,0,(int32_t)c->r[0],0); // 801AA374
  if (crb(c,2)) { IRQCHK(c); goto L_801AA370; } // 801AA378
  c->r[0]=R32(c->r[13]+0xFFFFB310u); // 801AA37C
  cmps(c,0,(int32_t)c->r[0],2); // 801AA380
  if (crb(c,2)) { goto L_801AA398; } // 801AA384
  if (!crb(c,0)) { goto L_801AA538; } // 801AA388
  cmps(c,0,(int32_t)c->r[0],1); // 801AA38C
  if (!crb(c,0)) { goto L_801AA4C0; } // 801AA390
  goto L_801AA538; // 801AA394
L_801AA398:;
  c->r[0]=0u+0x00000000u; // 801AA398
  c->r[3]=0u+0x801B0000u; // 801AA39C
  W32(c->r[13]+0xFFFFA880u,c->r[0]); // 801AA3A0
  c->r[3]=c->r[3]+0xFFFFA2D0u; // 801AA3A4
  c->lr=0x801AA3ACu; f_801ABAE0(c); // 801AA3A8
  c->r[0]=c->r[0]|0x00000000u; // 801AA3AC
L_801AA3B0:;
  c->r[0]=R32(c->r[13]+0xFFFFA880u); // 801AA3B0
  cmps(c,0,(int32_t)c->r[0],0); // 801AA3B4
  if (crb(c,2)) { IRQCHK(c); goto L_801AA3B0; } // 801AA3B8
  c->lr=0x801AA3C0u; f_801ACA60(c); // 801AA3BC
  c->r[0]=R32(c->r[13]+0xFFFFB310u); // 801AA3C0
  cmps(c,0,(int32_t)c->r[0],1); // 801AA3C4
  if (crb(c,2)) { goto L_801AA3D0; } // 801AA3C8
  goto L_801AA538; // 801AA3CC
L_801AA3D0:;
  c->lr=0x801AA3D4u; f_801ACA60(c); // 801AA3D0
  c->r[0]=rotl(c->r[3],0)&0xFF000000u; cr0(c,c->r[0]); // 801AA3D4
  if (!crb(c,2)) { goto L_801AA530; } // 801AA3D8
  c->lr=0x801AA3E0u; f_801ACA60(c); // 801AA3DC
  c->r[4]=0u+0x00050000u; // 801AA3E0
  c->r[3]=rotl(c->r[3],0)&0x00FFFFFFu; // 801AA3E4
  c->r[0]=c->r[4]+0x00002100u; // 801AA3E8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801AA3EC
  if (crb(c,2)) { goto L_801AA3F8; } // 801AA3F0
  goto L_801AA4C0; // 801AA3F4
L_801AA3F8:;
  c->r[0]=0u+0x00000000u; // 801AA3F8
  c->r[3]=0u+0x802B0000u; // 801AA3FC
  c->r[6]=0u+0x801B0000u; // 801AA400
  W32(c->r[13]+0xFFFFA880u,c->r[0]); // 801AA404
  c->r[3]=c->r[3]+0x00006C80u; // 801AA408
  c->r[4]=0u+0x00040000u; // 801AA40C
  c->r[6]=c->r[6]+0xFFFFA2D0u; // 801AA410
  c->r[5]=0u+0x00000000u; // 801AA414
  c->lr=0x801AA41Cu; f_801ABF80(c); // 801AA418
  c->r[0]=c->r[0]|0x00000000u; // 801AA41C
L_801AA420:;
  c->r[0]=R32(c->r[13]+0xFFFFA880u); // 801AA420
  cmps(c,0,(int32_t)c->r[0],0); // 801AA424
  if (crb(c,2)) { IRQCHK(c); goto L_801AA420; } // 801AA428
  c->r[0]=R32(c->r[13]+0xFFFFB310u); // 801AA42C
  cmps(c,0,(int32_t)c->r[0],2); // 801AA430
  if (crb(c,2)) { goto L_801AA448; } // 801AA434
  if (!crb(c,0)) { goto L_801AA538; } // 801AA438
  cmps(c,0,(int32_t)c->r[0],1); // 801AA43C
  if (!crb(c,0)) { goto L_801AA4C0; } // 801AA440
  goto L_801AA538; // 801AA444
L_801AA448:;
  c->r[0]=0u+0x00000000u; // 801AA448
  c->r[3]=0u+0x801B0000u; // 801AA44C
  W32(c->r[13]+0xFFFFA880u,c->r[0]); // 801AA450
  c->r[3]=c->r[3]+0xFFFFA2D0u; // 801AA454
  c->lr=0x801AA45Cu; f_801ABAE0(c); // 801AA458
  c->r[0]=c->r[0]|0x00000000u; // 801AA45C
L_801AA460:;
  c->r[0]=R32(c->r[13]+0xFFFFA880u); // 801AA460
  cmps(c,0,(int32_t)c->r[0],0); // 801AA464
  if (crb(c,2)) { IRQCHK(c); goto L_801AA460; } // 801AA468
  c->lr=0x801AA470u; f_801ACA60(c); // 801AA46C
  c->r[0]=R32(c->r[13]+0xFFFFB310u); // 801AA470
  cmps(c,0,(int32_t)c->r[0],1); // 801AA474
  if (crb(c,2)) { goto L_801AA480; } // 801AA478
  goto L_801AA538; // 801AA47C
L_801AA480:;
  c->lr=0x801AA484u; f_801ACA60(c); // 801AA480
  c->r[0]=rotl(c->r[3],0)&0xFF000000u; cr0(c,c->r[0]); // 801AA484
  if (!crb(c,2)) { goto L_801AA530; } // 801AA488
  c->lr=0x801AA490u; f_801ACA60(c); // 801AA48C
  c->r[4]=0u+0x00050000u; // 801AA490
  c->r[3]=rotl(c->r[3],0)&0x00FFFFFFu; // 801AA494
  c->r[0]=c->r[4]+0x00003100u; // 801AA498
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801AA49C
  if (crb(c,2)) { goto L_801AA4B8; } // 801AA4A0
  if (!crb(c,0)) { goto L_801AA4C0; } // 801AA4A4
  c->r[0]=c->r[4]+0x00002000u; // 801AA4A8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801AA4AC
  if (crb(c,2)) { goto L_801AA4B8; } // 801AA4B0
  goto L_801AA4C0; // 801AA4B4
L_801AA4B8:;
  c->r[3]=0u+0x00000001u; // 801AA4B8
  goto L_801AA540; // 801AA4BC
L_801AA4C0:;
  c->r[30]=R32(c->r[2]+0xFFFFA0F0u); // 801AA4C0
  c->r[31]=0u+0x00000000u; // 801AA4C4
  c->lr=0x801AA4CCu; f_801B8020(c); // 801AA4C8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801AA4CC
  if (!crb(c,2)) { goto L_801AA4E0; } // 801AA4D0
  c->r[3]=0u+0x00000001u; // 801AA4D4
  c->lr=0x801AA4DCu; f_8018C650(c); // 801AA4D8
  goto L_801AA4E8; // 801AA4DC
L_801AA4E0:;
  c->r[3]=0u+0x00000000u; // 801AA4E0
  c->lr=0x801AA4E8u; f_8018C650(c); // 801AA4E4
L_801AA4E8:;
  c->r[29]=0u+0x80220000u; // 801AA4E8
  c->r[29]=c->r[29]+0x00006780u; // 801AA4EC
  c->lr=0x801AA4F4u; f_801B8020(c); // 801AA4F0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801AA4F4
  cmpu(c,0,c->r[0],0x00000006u); // 801AA4F8
  if (!crb(c,1)) { goto L_801AA508; } // 801AA4FC
  c->r[5]=R32(c->r[29]+0x00000004u); // 801AA500
  goto L_801AA514; // 801AA504
L_801AA508:;
  c->lr=0x801AA50Cu; f_801B8020(c); // 801AA508
  c->r[0]=rotl(c->r[3],2)&0x000003FCu; // 801AA50C
  c->r[5]=R32(c->r[29]+c->r[0]); // 801AA510
L_801AA514:;
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AA514
  c->r[4]=c->r[1]+0x0000000Cu; // 801AA518
  c->r[3]=c->r[1]+0x00000008u; // 801AA51C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801AA520
  c->lr=0x801AA528u; f_8018BB30(c); // 801AA524
  c->r[3]=0u+0x00000000u; // 801AA528
  goto L_801AA540; // 801AA52C
L_801AA530:;
  c->r[3]=0u+0x00000000u; // 801AA530
  goto L_801AA540; // 801AA534
L_801AA538:;
  c->lr=0x801AA53Cu; f_801AA160(c); // 801AA538
  c->r[3]=0u+0x00000000u; // 801AA53C
L_801AA540:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801AA540
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801AA544
  c->r[30]=R32(c->r[1]+0x00000028u); // 801AA548
  c->r[29]=R32(c->r[1]+0x00000024u); // 801AA54C
  c->lr=c->r[0]; // 801AA550
  c->r[1]=c->r[1]+0x00000030u; // 801AA554
  return; // 801AA558
}

// doTransactionCallback
void f_801AA560(Ctx* __restrict c) {
  trace_call(0x801AA560u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AA560
  c->r[0]=c->lr; // 801AA564
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AA568
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AA56C
  c->r[31]=c->r[4]|c->r[4]; // 801AA570
  c->r[5]=R32(c->r[4]+0x0000000Cu); // 801AA574
  c->r[0]=c->r[5]+0x01150000u; // 801AA578
  cmpu(c,0,c->r[0],0x0000DAEDu); // 801AA57C
  if (crb(c,2)) { goto L_801AA5A4; } // 801AA580
  c->r[3]=0u+0x80270000u; // 801AA584
  c->r[3]=c->r[3]+0x00005C78u; // 801AA588
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AA58C
  c->lr=0x801AA594u; f_801899B0(c); // 801AA590
  c->r[3]=0u+0xFEEC0000u; // 801AA594
  c->r[0]=c->r[3]+0xFFFFDAEDu; // 801AA598
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801AA59C
  goto L_801AA5F8; // 801AA5A0
L_801AA5A4:;
  c->r[6]=0u+0x00000000u; // 801AA5A4
  W8(c->r[13]+0xFFFFB318u,c->r[6]); // 801AA5A8
  c->r[0]=R32(c->r[4]+0x00000000u); // 801AA5AC
  cmps(c,0,(int32_t)c->r[0],0); // 801AA5B0
  if (crb(c,2)) { goto L_801AA5F8; } // 801AA5B4
  c->r[0]=R8(c->r[13]+0xFFFFB338u); // 801AA5B8
  c->r[5]=0u+0x00000001u; // 801AA5BC
  W8(c->r[13]+0xFFFFB319u,c->r[5]); // 801AA5C0
  cmpu(c,0,c->r[0],0x00000001u); // 801AA5C4
  if (!crb(c,2)) { goto L_801AA5D4; } // 801AA5C8
  W8(c->r[13]+0xFFFFB338u,c->r[6]); // 801AA5CC
  c->r[3]=c->r[3]|0x00000008u; // 801AA5D0
L_801AA5D4:;
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 801AA5D4
  if (crb(c,2)) { goto L_801AA5E4; } // 801AA5D8
  c->r[0]=0u+0x00000000u; // 801AA5DC
  W32(c->r[13]+0xFFFFB32Cu,c->r[0]); // 801AA5E0
L_801AA5E4:;
  c->r[12]=R32(c->r[4]+0x00000000u); // 801AA5E4
  c->ctr=c->r[12]; // 801AA5E8
  if (true) { c->lr=0x801AA5F0u; dispatch(c,c->ctr); } // 801AA5EC
  c->r[0]=0u+0x00000000u; // 801AA5F0
  W8(c->r[13]+0xFFFFB319u,c->r[0]); // 801AA5F4
L_801AA5F8:;
  c->r[0]=0u+0x00000000u; // 801AA5F8
  W8(c->r[31]+0x00000008u,c->r[0]); // 801AA5FC
  c->r[3]=0u+0x00000000u; // 801AA600
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AA604
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AA608
  c->lr=c->r[0]; // 801AA60C
  c->r[1]=c->r[1]+0x00000010u; // 801AA610
  return; // 801AA614
}

// doPrepareCoverRegisterCallback
void f_801AA620(Ctx* __restrict c) {
  trace_call(0x801AA620u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AA620
  c->r[0]=c->lr; // 801AA624
  c->r[5]=0u+0x802B0000u; // 801AA628
  c->r[6]=0u+0x802B0000u; // 801AA62C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AA630
  c->r[5]=c->r[5]+0x00006D20u; // 801AA634
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AA638
  c->r[31]=c->r[4]|c->r[4]; // 801AA63C
  c->r[0]=R32(c->r[6]+0x00006D40u); // 801AA640
  c->r[6]=0u+0x00000000u; // 801AA644
  W8(c->r[13]+0xFFFFB318u,c->r[6]); // 801AA648
  W32(c->r[5]+0x00000004u,c->r[0]); // 801AA64C
  c->r[5]=R32(c->r[4]+0x0000000Cu); // 801AA650
  c->r[0]=c->r[5]+0x01150000u; // 801AA654
  cmpu(c,0,c->r[0],0x0000DAEDu); // 801AA658
  if (crb(c,2)) { goto L_801AA680; } // 801AA65C
  c->r[3]=0u+0x80270000u; // 801AA660
  c->r[3]=c->r[3]+0x00005C78u; // 801AA664
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AA668
  c->lr=0x801AA670u; f_801899B0(c); // 801AA66C
  c->r[3]=0u+0xFEEC0000u; // 801AA670
  c->r[0]=c->r[3]+0xFFFFDAEDu; // 801AA674
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801AA678
  goto L_801AA6BC; // 801AA67C
L_801AA680:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 801AA680
  cmps(c,0,(int32_t)c->r[0],0); // 801AA684
  if (crb(c,2)) { goto L_801AA6BC; } // 801AA688
  c->r[0]=R8(c->r[13]+0xFFFFB338u); // 801AA68C
  c->r[5]=0u+0x00000001u; // 801AA690
  W8(c->r[13]+0xFFFFB319u,c->r[5]); // 801AA694
  cmpu(c,0,c->r[0],0x00000001u); // 801AA698
  if (!crb(c,2)) { goto L_801AA6A8; } // 801AA69C
  W8(c->r[13]+0xFFFFB338u,c->r[6]); // 801AA6A0
  c->r[3]=c->r[3]|0x00000008u; // 801AA6A4
L_801AA6A8:;
  c->r[12]=R32(c->r[4]+0x00000000u); // 801AA6A8
  c->ctr=c->r[12]; // 801AA6AC
  if (true) { c->lr=0x801AA6B4u; dispatch(c,c->ctr); } // 801AA6B0
  c->r[0]=0u+0x00000000u; // 801AA6B4
  W8(c->r[13]+0xFFFFB319u,c->r[0]); // 801AA6B8
L_801AA6BC:;
  c->r[0]=0u+0x00000000u; // 801AA6BC
  W8(c->r[31]+0x00000008u,c->r[0]); // 801AA6C0
  c->r[3]=0u+0x00000000u; // 801AA6C4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AA6C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AA6CC
  c->lr=c->r[0]; // 801AA6D0
  c->r[1]=c->r[1]+0x00000010u; // 801AA6D4
  return; // 801AA6D8
}

// DVDLowFinalize
void f_801AA6E0(Ctx* __restrict c) {
  trace_call(0x801AA6E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AA6E0
  c->r[0]=c->lr; // 801AA6E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AA6E8
  c->r[3]=R32(c->r[13]+0xFFFFA888u); // 801AA6EC
  c->lr=0x801AA6F4u; f_801BBD30(c); // 801AA6F0
  cmps(c,0,(int32_t)c->r[3],0); // 801AA6F4
  if (crb(c,2)) { goto L_801AA714; } // 801AA6F8
  c->r[3]=0u+0x80270000u; // 801AA6FC
  c->r[3]=c->r[3]+0x00005CD8u; // 801AA700
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AA704
  c->lr=0x801AA70Cu; f_801899B0(c); // 801AA708
  c->r[3]=0u+0x00000000u; // 801AA70C
  goto L_801AA720; // 801AA710
L_801AA714:;
  c->r[0]=0u+0x00000000u; // 801AA714
  W8(c->r[13]+0xFFFFB325u,c->r[0]); // 801AA718
  c->r[3]=0u+0x00000001u; // 801AA71C
L_801AA720:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AA720
  c->lr=c->r[0]; // 801AA724
  c->r[1]=c->r[1]+0x00000010u; // 801AA728
  return; // 801AA72C
}

// DVDLowInit
void f_801AA730(Ctx* __restrict c) {
  trace_call(0x801AA730u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AA730
  c->r[0]=c->lr; // 801AA734
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AA738
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AA73C
  c->r[31]=0u+0x80270000u; // 801AA740
  c->r[31]=c->r[31]+0x00005C78u; // 801AA744
  W32(c->r[1]+0x00000008u,c->r[30]); // 801AA748
  c->r[0]=R8(c->r[13]+0xFFFFB325u); // 801AA74C
  cmps(c,0,(int32_t)c->r[0],0); // 801AA750
  if (!crb(c,2)) { goto L_801AA8D8; } // 801AA754
  c->r[0]=0u+0x00000001u; // 801AA758
  W8(c->r[13]+0xFFFFB325u,c->r[0]); // 801AA75C
  c->lr=0x801AA764u; f_801BB6A0(c); // 801AA760
  cmps(c,0,(int32_t)c->r[3],0); // 801AA764
  if (crb(c,2)) { goto L_801AA784; } // 801AA768
  c->r[4]=c->r[3]|c->r[3]; // 801AA76C
  c->r[3]=c->r[31]+0x00000088u; // 801AA770
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AA774
  c->lr=0x801AA77Cu; f_801899B0(c); // 801AA778
  c->r[3]=0u+0x00000000u; // 801AA77C
  goto L_801AA97C; // 801AA780
L_801AA784:;
  c->lr=0x801AA788u; f_801BB240(c); // 801AA784
  c->r[30]=c->r[3]|c->r[3]; // 801AA788
  c->lr=0x801AA790u; f_801BB230(c); // 801AA78C
  c->r[0]=rotl(c->r[30],0)&0x0000001Fu; cr0(c,c->r[0]); // 801AA790
  if (crb(c,2)) { goto L_801AA7A0; } // 801AA794
  c->r[0]=c->r[30]+0x0000001Fu; // 801AA798
  c->r[30]=rotl(c->r[0],0)&0x0000001Fu; // 801AA79C
L_801AA7A0:;
  c->r[0]=c->r[30]+0x00000080u; // 801AA7A0
  cmpu(c,0,c->r[0],c->r[3]); // 801AA7A4
  if (!crb(c,1)) { goto L_801AA7BC; } // 801AA7A8
  c->r[3]=c->r[31]+0x000000A8u; // 801AA7AC
  c->r[4]=0u+0x00000080u; // 801AA7B0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AA7B4
  c->lr=0x801AA7BCu; f_801899B0(c); // 801AA7B8
L_801AA7BC:;
  c->r[3]=c->r[30]+0x00000080u; // 801AA7BC
  c->lr=0x801AA7C4u; f_801BB250(c); // 801AA7C0
  cmps(c,0,(int32_t)c->r[30],0); // 801AA7C4
  W32(c->r[13]+0xFFFFB334u,c->r[30]); // 801AA7C8
  if (!crb(c,2)) { goto L_801AA7E4; } // 801AA7CC
  c->r[3]=c->r[31]+0x000000E4u; // 801AA7D0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AA7D4
  c->lr=0x801AA7DCu; f_801899B0(c); // 801AA7D8
  c->r[0]=0u+0x00000000u; // 801AA7DC
  goto L_801AA848; // 801AA7E0
L_801AA7E4:;
  c->lr=0x801AA7E8u; f_801BB240(c); // 801AA7E4
  c->r[30]=c->r[3]|c->r[3]; // 801AA7E8
  c->lr=0x801AA7F0u; f_801BB230(c); // 801AA7EC
  c->r[0]=rotl(c->r[30],0)&0x0000001Fu; cr0(c,c->r[0]); // 801AA7F0
  if (crb(c,2)) { goto L_801AA800; } // 801AA7F4
  c->r[0]=c->r[30]+0x0000001Fu; // 801AA7F8
  c->r[30]=rotl(c->r[0],0)&0x0000001Fu; // 801AA7FC
L_801AA800:;
  c->r[0]=c->r[30]+0x00000020u; // 801AA800
  cmpu(c,0,c->r[0],c->r[3]); // 801AA804
  if (!crb(c,1)) { goto L_801AA81C; } // 801AA808
  c->r[3]=c->r[31]+0x000000A8u; // 801AA80C
  c->r[4]=0u+0x00000020u; // 801AA810
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AA814
  c->lr=0x801AA81Cu; f_801899B0(c); // 801AA818
L_801AA81C:;
  c->r[3]=c->r[30]+0x00000020u; // 801AA81C
  c->lr=0x801AA824u; f_801BB250(c); // 801AA820
  cmps(c,0,(int32_t)c->r[30],0); // 801AA824
  W32(c->r[13]+0xFFFFB330u,c->r[30]); // 801AA828
  if (!crb(c,2)) { goto L_801AA844; } // 801AA82C
  c->r[3]=c->r[31]+0x0000010Cu; // 801AA830
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AA834
  c->lr=0x801AA83Cu; f_801899B0(c); // 801AA838
  c->r[0]=0u+0x00000000u; // 801AA83C
  goto L_801AA848; // 801AA840
L_801AA844:;
  c->r[0]=0u+0x00000001u; // 801AA844
L_801AA848:;
  cmps(c,0,(int32_t)c->r[0],0); // 801AA848
  if (!crb(c,2)) { goto L_801AA858; } // 801AA84C
  c->r[3]=0u+0x00000000u; // 801AA850
  goto L_801AA97C; // 801AA854
L_801AA858:;
  c->r[0]=R8(c->r[13]+0xFFFFB324u); // 801AA858
  cmps(c,0,(int32_t)c->r[0],0); // 801AA85C
  if (!crb(c,2)) { goto L_801AA8D8; } // 801AA860
  c->r[5]=0u+0x00000000u; // 801AA864
  c->r[4]=0u+0x802B0000u; // 801AA868
  {uint32_t ea=c->r[4]+0x00006CA0u; W32(ea,c->r[5]); c->r[4]=ea;} // 801AA86C
  c->r[3]=0u+0xFEEC0000u; // 801AA870
  c->r[0]=0u+0x00000001u; // 801AA874
  c->r[6]=0u+0x00000002u; // 801AA878
  W32(c->r[4]+0x00000004u,c->r[5]); // 801AA87C
  c->r[3]=c->r[3]+0xFFFFDAEDu; // 801AA880
  W8(c->r[4]+0x00000008u,c->r[5]); // 801AA884
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 801AA888
  W32(c->r[4]+0x00000010u,c->r[5]); // 801AA88C
  W32(c->r[4]+0x00000020u,c->r[5]); // 801AA890
  W32(c->r[4]+0x00000024u,c->r[5]); // 801AA894
  W8(c->r[4]+0x00000028u,c->r[5]); // 801AA898
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 801AA89C
  W32(c->r[4]+0x00000030u,c->r[0]); // 801AA8A0
  W32(c->r[4]+0x00000040u,c->r[5]); // 801AA8A4
  W32(c->r[4]+0x00000044u,c->r[5]); // 801AA8A8
  W8(c->r[4]+0x00000048u,c->r[5]); // 801AA8AC
  W32(c->r[4]+0x0000004Cu,c->r[3]); // 801AA8B0
  W32(c->r[4]+0x00000050u,c->r[6]); // 801AA8B4
  c->r[6]=0u+0x00000003u; // 801AA8B8
  W32(c->r[4]+0x00000060u,c->r[5]); // 801AA8BC
  W32(c->r[4]+0x00000064u,c->r[5]); // 801AA8C0
  W8(c->r[4]+0x00000068u,c->r[5]); // 801AA8C4
  W32(c->r[4]+0x0000006Cu,c->r[3]); // 801AA8C8
  W32(c->r[4]+0x00000070u,c->r[6]); // 801AA8CC
  W32(c->r[13]+0xFFFFB320u,c->r[5]); // 801AA8D0
  W8(c->r[13]+0xFFFFB324u,c->r[0]); // 801AA8D4
L_801AA8D8:;
  c->r[3]=R32(c->r[13]+0xFFFFB330u); // 801AA8D8
  c->r[4]=c->r[13]+0xFFFFA890u; // 801AA8DC
  c->r[5]=0u+0x00000020u; // 801AA8E0
  c->lr=0x801AA8E8u; f_8020E7F4(c); // 801AA8E4
  c->r[3]=R32(c->r[13]+0xFFFFB330u); // 801AA8E8
  c->r[4]=0u+0x00000000u; // 801AA8EC
  c->lr=0x801AA8F4u; f_801BBB40(c); // 801AA8F0
  cmps(c,0,(int32_t)c->r[3],0); // 801AA8F4
  W32(c->r[13]+0xFFFFA888u,c->r[3]); // 801AA8F8
  if (crb(c,0)) { goto L_801AA908; } // 801AA8FC
  c->r[3]=0u+0x00000001u; // 801AA900
  goto L_801AA97C; // 801AA904
L_801AA908:;
  cmps(c,0,(int32_t)c->r[3],-5); // 801AA908
  if (crb(c,2)) { goto L_801AA954; } // 801AA90C
  if (!crb(c,0)) { goto L_801AA920; } // 801AA910
  cmps(c,0,(int32_t)c->r[3],-6); // 801AA914
  if (!crb(c,0)) { goto L_801AA92C; } // 801AA918
  goto L_801AA968; // 801AA91C
L_801AA920:;
  cmps(c,0,(int32_t)c->r[3],-1); // 801AA920
  if (crb(c,2)) { goto L_801AA940; } // 801AA924
  goto L_801AA968; // 801AA928
L_801AA92C:;
  c->r[3]=c->r[31]+0x0000012Cu; // 801AA92C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AA930
  c->lr=0x801AA938u; f_801899B0(c); // 801AA934
  c->r[3]=0u+0x00000000u; // 801AA938
  goto L_801AA97C; // 801AA93C
L_801AA940:;
  c->r[3]=c->r[31]+0x00000178u; // 801AA940
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AA944
  c->lr=0x801AA94Cu; f_801899B0(c); // 801AA948
  c->r[3]=0u+0x00000000u; // 801AA94C
  goto L_801AA97C; // 801AA950
L_801AA954:;
  c->r[3]=c->r[31]+0x000001C0u; // 801AA954
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AA958
  c->lr=0x801AA960u; f_801899B0(c); // 801AA95C
  c->r[3]=0u+0x00000000u; // 801AA960
  goto L_801AA97C; // 801AA964
L_801AA968:;
  c->r[4]=c->r[3]|c->r[3]; // 801AA968
  c->r[3]=c->r[31]+0x0000020Cu; // 801AA96C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AA970
  c->lr=0x801AA978u; f_801899B0(c); // 801AA974
  c->r[3]=0u+0x00000000u; // 801AA978
L_801AA97C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AA97C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AA980
  c->r[30]=R32(c->r[1]+0x00000008u); // 801AA984
  c->lr=c->r[0]; // 801AA988
  c->r[1]=c->r[1]+0x00000010u; // 801AA98C
  return; // 801AA990
}

// DVDLowReadDiskID
void f_801AA9A0(Ctx* __restrict c) {
  trace_call(0x801AA9A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AA9A0
  c->r[0]=c->lr; // 801AA9A4
  c->r[7]=0u+0x802B0000u; // 801AA9A8
  c->r[10]=0u+0x00000001u; // 801AA9AC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AA9B0
  c->r[7]=c->r[7]+0x00006CA0u; // 801AA9B4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801AA9B8
  c->r[31]=0u+0x80270000u; // 801AA9BC
  c->r[31]=c->r[31]+0x00005C78u; // 801AA9C0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801AA9C4
  c->r[30]=c->r[3]|c->r[3]; // 801AA9C8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801AA9CC
  c->r[9]=R32(c->r[13]+0xFFFFB320u); // 801AA9D0
  W8(c->r[13]+0xFFFFB318u,c->r[10]); // 801AA9D4
  c->r[8]=rotl(c->r[9],5)&0xFFFFFFE0u; // 801AA9D8
  c->r[6]=c->r[7]+c->r[8]; // 801AA9DC
  c->r[5]=R8(c->r[6]+0x00000008u); // 801AA9E0
  c->r[0]=0u-c->r[5]; // 801AA9E4
  c->r[0]=c->r[0]|c->r[5]; // 801AA9E8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801AA9EC
  cmpu(c,0,c->r[0],0x00000001u); // 801AA9F0
  if (!crb(c,2)) { goto L_801AAA1C; } // 801AA9F4
  c->r[4]=c->r[9]|c->r[9]; // 801AA9F8
  c->r[3]=c->r[31]+0x00000240u; // 801AA9FC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AAA00
  c->lr=0x801AAA08u; f_801899B0(c); // 801AAA04
  c->r[3]=c->r[31]+0x00000278u; // 801AAA08
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AAA0C
  c->lr=0x801AAA14u; f_801899B0(c); // 801AAA10
  c->r[0]=c->r[0]|0x00000000u; // 801AAA14
L_801AAA18:;
  IRQCHK(c); goto L_801AAA18; // 801AAA18
L_801AAA1C:;
  c->r[5]=R32(c->r[6]+0x0000000Cu); // 801AAA1C
  c->r[0]=c->r[5]+0x01150000u; // 801AAA20
  cmpu(c,0,c->r[0],0x0000DAEDu); // 801AAA24
  if (crb(c,2)) { goto L_801AAA3C; } // 801AAA28
  c->r[3]=c->r[31]+0x000002A8u; // 801AAA2C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AAA30
  c->lr=0x801AAA38u; f_801899B0(c); // 801AAA34
L_801AAA38:;
  IRQCHK(c); goto L_801AAA38; // 801AAA38
L_801AAA3C:;
  W32(c->r[7]+c->r[8],c->r[4]); // 801AAA3C
  c->r[0]=c->r[9]+0x00000001u; // 801AAA40
  cmps(c,0,(int32_t)c->r[0],4); // 801AAA44
  W32(c->r[6]+0x00000004u,c->r[10]); // 801AAA48
  W8(c->r[6]+0x00000008u,c->r[10]); // 801AAA4C
  W32(c->r[13]+0xFFFFB320u,c->r[0]); // 801AAA50
  if (crb(c,0)) { goto L_801AAA60; } // 801AAA54
  c->r[0]=0u+0x00000000u; // 801AAA58
  W32(c->r[13]+0xFFFFB320u,c->r[0]); // 801AAA5C
L_801AAA60:;
  c->r[4]=0u+0x802B0000u; // 801AAA60
  cmps(c,0,(int32_t)c->r[3],0); // 801AAA64
  c->r[0]=rotl(c->r[9],5)&0xFFFFFFE0u; // 801AAA68
  c->r[4]=c->r[4]+0x00006CA0u; // 801AAA6C
  c->r[29]=c->r[4]+c->r[0]; // 801AAA70
  if (!crb(c,2)) { goto L_801AAA84; } // 801AAA74
  c->r[3]=c->r[31]+0x000002E8u; // 801AAA78
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AAA7C
  c->lr=0x801AAA84u; f_801899B0(c); // 801AAA80
L_801AAA84:;
  c->r[3]=R32(c->r[13]+0xFFFFB31Cu); // 801AAA84
  c->r[0]=c->r[3]+0x00000001u; // 801AAA88
  W32(c->r[13]+0xFFFFB31Cu,c->r[0]); // 801AAA8C
  cmps(c,0,(int32_t)c->r[0],4); // 801AAA90
  if (crb(c,0)) { goto L_801AAAA0; } // 801AAA94
  c->r[0]=0u+0x00000000u; // 801AAA98
  W32(c->r[13]+0xFFFFB31Cu,c->r[0]); // 801AAA9C
L_801AAAA0:;
  c->r[3]=R32(c->r[13]+0xFFFFB334u); // 801AAAA0
  c->r[9]=0u+0x801B0000u; // 801AAAA4
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801AAAA8
  c->r[4]=0u+0x00000070u; // 801AAAAC
  W8(c->r[3]+c->r[0],c->r[4]); // 801AAAB0
  c->r[7]=c->r[30]|c->r[30]; // 801AAAB4
  c->r[10]=c->r[29]|c->r[29]; // 801AAAB8
  c->r[9]=c->r[9]+0xFFFFA560u; // 801AAABC
  c->r[0]=R32(c->r[13]+0xFFFFB31Cu); // 801AAAC0
  c->r[4]=0u+0x00000070u; // 801AAAC4
  c->r[5]=R32(c->r[13]+0xFFFFB334u); // 801AAAC8
  c->r[6]=0u+0x00000020u; // 801AAACC
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801AAAD0
  c->r[3]=R32(c->r[13]+0xFFFFA888u); // 801AAAD4
  c->r[5]=c->r[5]+c->r[0]; // 801AAAD8
  c->r[8]=0u+0x00000020u; // 801AAADC
  c->lr=0x801AAAE4u; f_801BC3D0(c); // 801AAAE0
  cmps(c,0,(int32_t)c->r[3],0); // 801AAAE4
  if (crb(c,2)) { goto L_801AAB0C; } // 801AAAE8
  c->r[4]=c->r[3]|c->r[3]; // 801AAAEC
  c->r[3]=c->r[31]+0x00000324u; // 801AAAF0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AAAF4
  c->lr=0x801AAAFCu; f_801899B0(c); // 801AAAF8
  c->r[0]=0u+0x00000000u; // 801AAAFC
  W8(c->r[29]+0x00000008u,c->r[0]); // 801AAB00
  c->r[3]=0u+0x00000000u; // 801AAB04
  goto L_801AAB10; // 801AAB08
L_801AAB0C:;
  c->r[3]=0u+0x00000001u; // 801AAB0C
L_801AAB10:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AAB10
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801AAB14
  c->r[30]=R32(c->r[1]+0x00000018u); // 801AAB18
  c->r[29]=R32(c->r[1]+0x00000014u); // 801AAB1C
  c->lr=c->r[0]; // 801AAB20
  c->r[1]=c->r[1]+0x00000020u; // 801AAB24
  return; // 801AAB28
}

// DVDLowOpenPartition
void f_801AAB30(Ctx* __restrict c) {
  trace_call(0x801AAB30u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AAB30
  c->r[0]=c->lr; // 801AAB34
  c->r[9]=0u+0x802B0000u; // 801AAB38
  cmps(c,0,(int32_t)c->r[4],0); // 801AAB3C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AAB40
  c->r[9]=c->r[9]+0x00006CA0u; // 801AAB44
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801AAB48
  c->r[31]=0u+0x80270000u; // 801AAB4C
  c->r[31]=c->r[31]+0x00005C78u; // 801AAB50
  W32(c->r[1]+0x00000018u,c->r[30]); // 801AAB54
  W32(c->r[1]+0x00000014u,c->r[29]); // 801AAB58
  W32(c->r[1]+0x00000010u,c->r[28]); // 801AAB5C
  if (crb(c,2)) { goto L_801AAB80; } // 801AAB60
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; cr0(c,c->r[0]); // 801AAB64
  if (crb(c,2)) { goto L_801AAB80; } // 801AAB68
  c->r[3]=c->r[31]+0x00000360u; // 801AAB6C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AAB70
  c->lr=0x801AAB78u; f_801899B0(c); // 801AAB74
  c->r[3]=0u+0x00000000u; // 801AAB78
  goto L_801AAD7C; // 801AAB7C
L_801AAB80:;
  cmps(c,0,(int32_t)c->r[6],0); // 801AAB80
  if (crb(c,2)) { goto L_801AABA4; } // 801AAB84
  c->r[0]=rotl(c->r[6],0)&0x0000001Fu; cr0(c,c->r[0]); // 801AAB88
  if (crb(c,2)) { goto L_801AABA4; } // 801AAB8C
  c->r[3]=c->r[31]+0x00000398u; // 801AAB90
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AAB94
  c->lr=0x801AAB9Cu; f_801899B0(c); // 801AAB98
  c->r[3]=0u+0x00000000u; // 801AAB9C
  goto L_801AAD7C; // 801AABA0
L_801AABA4:;
  cmps(c,0,(int32_t)c->r[7],0); // 801AABA4
  if (crb(c,2)) { goto L_801AABC8; } // 801AABA8
  c->r[0]=rotl(c->r[7],0)&0x0000001Fu; cr0(c,c->r[0]); // 801AABAC
  if (crb(c,2)) { goto L_801AABC8; } // 801AABB0
  c->r[3]=c->r[31]+0x00000398u; // 801AABB4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AABB8
  c->lr=0x801AABC0u; f_801899B0(c); // 801AABBC
  c->r[3]=0u+0x00000000u; // 801AABC0
  goto L_801AAD7C; // 801AABC4
L_801AABC8:;
  c->r[29]=R32(c->r[13]+0xFFFFB320u); // 801AABC8
  c->r[28]=0u+0x00000001u; // 801AABCC
  c->r[12]=c->r[9]+0x00000000u; // 801AABD0
  W8(c->r[13]+0xFFFFB318u,c->r[28]); // 801AABD4
  c->r[30]=rotl(c->r[29],5)&0xFFFFFFE0u; // 801AABD8
  c->r[11]=c->r[12]+c->r[30]; // 801AABDC
  c->r[10]=R8(c->r[11]+0x00000008u); // 801AABE0
  c->r[0]=0u-c->r[10]; // 801AABE4
  c->r[0]=c->r[0]|c->r[10]; // 801AABE8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801AABEC
  cmpu(c,0,c->r[0],0x00000001u); // 801AABF0
  if (!crb(c,2)) { goto L_801AAC1C; } // 801AABF4
  c->r[4]=c->r[29]|c->r[29]; // 801AABF8
  c->r[3]=c->r[31]+0x00000240u; // 801AABFC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AAC00
  c->lr=0x801AAC08u; f_801899B0(c); // 801AAC04
  c->r[3]=c->r[31]+0x00000278u; // 801AAC08
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AAC0C
  c->lr=0x801AAC14u; f_801899B0(c); // 801AAC10
  c->r[0]=c->r[0]|0x00000000u; // 801AAC14
L_801AAC18:;
  IRQCHK(c); goto L_801AAC18; // 801AAC18
L_801AAC1C:;
  c->r[10]=R32(c->r[11]+0x0000000Cu); // 801AAC1C
  c->r[0]=c->r[10]+0x01150000u; // 801AAC20
  cmpu(c,0,c->r[0],0x0000DAEDu); // 801AAC24
  if (crb(c,2)) { goto L_801AAC3C; } // 801AAC28
  c->r[3]=c->r[31]+0x000002A8u; // 801AAC2C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AAC30
  c->lr=0x801AAC38u; f_801899B0(c); // 801AAC34
L_801AAC38:;
  IRQCHK(c); goto L_801AAC38; // 801AAC38
L_801AAC3C:;
  W32(c->r[12]+c->r[30],c->r[8]); // 801AAC3C
  c->r[0]=c->r[29]+0x00000001u; // 801AAC40
  cmps(c,0,(int32_t)c->r[0],4); // 801AAC44
  W32(c->r[11]+0x00000004u,c->r[28]); // 801AAC48
  W8(c->r[11]+0x00000008u,c->r[28]); // 801AAC4C
  W32(c->r[13]+0xFFFFB320u,c->r[0]); // 801AAC50
  if (crb(c,0)) { goto L_801AAC60; } // 801AAC54
  c->r[0]=0u+0x00000000u; // 801AAC58
  W32(c->r[13]+0xFFFFB320u,c->r[0]); // 801AAC5C
L_801AAC60:;
  c->r[8]=R32(c->r[13]+0xFFFFB31Cu); // 801AAC60
  c->r[11]=rotl(c->r[29],5)&0xFFFFFFE0u; // 801AAC64
  c->r[10]=c->r[9]+0x00000000u; // 801AAC68
  c->r[0]=c->r[8]+0x00000001u; // 801AAC6C
  W32(c->r[13]+0xFFFFB31Cu,c->r[0]); // 801AAC70
  cmps(c,0,(int32_t)c->r[0],4); // 801AAC74
  c->r[30]=c->r[10]+c->r[11]; // 801AAC78
  if (crb(c,0)) { goto L_801AAC88; } // 801AAC7C
  c->r[0]=0u+0x00000000u; // 801AAC80
  W32(c->r[13]+0xFFFFB31Cu,c->r[0]); // 801AAC84
L_801AAC88:;
  c->r[8]=R32(c->r[13]+0xFFFFB334u); // 801AAC88
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801AAC8C
  c->r[10]=0u+0x0000008Bu; // 801AAC90
  cmps(c,0,(int32_t)c->r[4],0); // 801AAC94
  W8(c->r[8]+c->r[0],c->r[10]); // 801AAC98
  c->r[8]=c->r[9]+0x000000C0u; // 801AAC9C
  c->r[0]=0u+0x00000020u; // 801AACA0
  c->r[10]=R32(c->r[13]+0xFFFFB31Cu); // 801AACA4
  c->r[11]=R32(c->r[13]+0xFFFFB334u); // 801AACA8
  c->r[10]=rotl(c->r[10],5)&0xFFFFFFE0u; // 801AACAC
  c->r[10]=c->r[11]+c->r[10]; // 801AACB0
  W32(c->r[10]+0x00000004u,c->r[3]); // 801AACB4
  c->r[3]=R32(c->r[13]+0xFFFFB31Cu); // 801AACB8
  c->r[10]=R32(c->r[13]+0xFFFFB334u); // 801AACBC
  c->r[3]=rotl(c->r[3],5)&0xFFFFFFE0u; // 801AACC0
  W32(c->r[8]+0x00000004u,c->r[0]); // 801AACC4
  c->r[0]=c->r[10]+c->r[3]; // 801AACC8
  W32(c->r[9]+0x000000C0u,c->r[0]); // 801AACCC
  W32(c->r[8]+0x00000008u,c->r[4]); // 801AACD0
  if (!crb(c,2)) { goto L_801AACE4; } // 801AACD4
  c->r[0]=0u+0x00000000u; // 801AACD8
  W32(c->r[8]+0x0000000Cu,c->r[0]); // 801AACDC
  goto L_801AACEC; // 801AACE0
L_801AACE4:;
  c->r[0]=0u+0x000002A4u; // 801AACE4
  W32(c->r[8]+0x0000000Cu,c->r[0]); // 801AACE8
L_801AACEC:;
  c->r[3]=c->r[9]+0x000000C0u; // 801AACEC
  cmps(c,0,(int32_t)c->r[6],0); // 801AACF0
  W32(c->r[3]+0x00000010u,c->r[6]); // 801AACF4
  if (!crb(c,2)) { goto L_801AAD08; } // 801AACF8
  c->r[0]=0u+0x00000000u; // 801AACFC
  W32(c->r[3]+0x00000014u,c->r[0]); // 801AAD00
  goto L_801AAD0C; // 801AAD04
L_801AAD08:;
  W32(c->r[3]+0x00000014u,c->r[5]); // 801AAD08
L_801AAD0C:;
  c->r[6]=c->r[9]+0x000000C0u; // 801AAD0C
  c->r[4]=c->r[9]+0x00000120u; // 801AAD10
  W32(c->r[6]+0x00000018u,c->r[7]); // 801AAD14
  c->r[3]=0u+0x000049E4u; // 801AAD18
  c->r[0]=0u+0x00000020u; // 801AAD1C
  c->r[8]=0u+0x801B0000u; // 801AAD20
  W32(c->r[6]+0x0000001Cu,c->r[3]); // 801AAD24
  c->r[7]=c->r[6]|c->r[6]; // 801AAD28
  c->r[3]=R32(c->r[13]+0xFFFFA888u); // 801AAD2C
  c->r[9]=c->r[30]|c->r[30]; // 801AAD30
  W32(c->r[6]+0x00000020u,c->r[4]); // 801AAD34
  c->r[8]=c->r[8]+0xFFFFA560u; // 801AAD38
  c->r[4]=0u+0x0000008Bu; // 801AAD3C
  c->r[5]=0u+0x00000003u; // 801AAD40
  W32(c->r[6]+0x00000024u,c->r[0]); // 801AAD44
  c->r[6]=0u+0x00000002u; // 801AAD48
  c->lr=0x801AAD50u; f_801BC780(c); // 801AAD4C
  cmps(c,0,(int32_t)c->r[3],0); // 801AAD50
  if (crb(c,2)) { goto L_801AAD78; } // 801AAD54
  c->r[4]=c->r[3]|c->r[3]; // 801AAD58
  c->r[3]=c->r[31]+0x000003D0u; // 801AAD5C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AAD60
  c->lr=0x801AAD68u; f_801899B0(c); // 801AAD64
  c->r[0]=0u+0x00000000u; // 801AAD68
  W8(c->r[30]+0x00000008u,c->r[0]); // 801AAD6C
  c->r[3]=0u+0x00000000u; // 801AAD70
  goto L_801AAD7C; // 801AAD74
L_801AAD78:;
  c->r[3]=0u+0x00000001u; // 801AAD78
L_801AAD7C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AAD7C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801AAD80
  c->r[30]=R32(c->r[1]+0x00000018u); // 801AAD84
  c->r[29]=R32(c->r[1]+0x00000014u); // 801AAD88
  c->r[28]=R32(c->r[1]+0x00000010u); // 801AAD8C
  c->lr=c->r[0]; // 801AAD90
  c->r[1]=c->r[1]+0x00000020u; // 801AAD94
  return; // 801AAD98
}

// DVDLowOpenPartitionWithTmdAndTicketView
void f_801AADA0(Ctx* __restrict c) {
  trace_call(0x801AADA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AADA0
  c->r[0]=c->lr; // 801AADA4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AADA8
  c->r[11]=c->r[1]+0x00000020u; // 801AADAC
  c->lr=0x801AADB4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801AADB0
  cmps(c,0,(int32_t)c->r[8],0); // 801AADB4
  c->r[10]=0u+0x802B0000u; // 801AADB8
  c->r[31]=0u+0x80270000u; // 801AADBC
  c->r[10]=c->r[10]+0x00006CA0u; // 801AADC0
  c->r[31]=c->r[31]+0x00005C78u; // 801AADC4
  if (crb(c,2)) { goto L_801AADDC; } // 801AADC8
  c->r[0]=rotl(c->r[8],0)&0x0000001Fu; cr0(c,c->r[0]); // 801AADCC
  if (crb(c,2)) { goto L_801AADDC; } // 801AADD0
  c->r[3]=0u+0x00000000u; // 801AADD4
  goto L_801AAFEC; // 801AADD8
L_801AADDC:;
  cmps(c,0,(int32_t)c->r[6],0); // 801AADDC
  if (!crb(c,2)) { goto L_801AADFC; } // 801AADE0
  c->r[3]=c->r[31]+0x00000458u; // 801AADE4
  c->r[4]=c->r[31]+0x000004C8u; // 801AADE8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AADEC
  c->lr=0x801AADF4u; f_801899B0(c); // 801AADF0
  c->r[3]=0u+0x00000000u; // 801AADF4
  goto L_801AAFEC; // 801AADF8
L_801AADFC:;
  c->r[0]=rotl(c->r[6],0)&0x0000001Fu; cr0(c,c->r[0]); // 801AADFC
  if (crb(c,2)) { goto L_801AAE1C; } // 801AAE00
  c->r[3]=c->r[31]+0x0000047Cu; // 801AAE04
  c->r[4]=c->r[31]+0x000004C8u; // 801AAE08
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AAE0C
  c->lr=0x801AAE14u; f_801899B0(c); // 801AAE10
  c->r[3]=0u+0x00000000u; // 801AAE14
  goto L_801AAFEC; // 801AAE18
L_801AAE1C:;
  cmps(c,0,(int32_t)c->r[4],0); // 801AAE1C
  if (!crb(c,2)) { goto L_801AAE3C; } // 801AAE20
  c->r[3]=c->r[31]+0x000004F0u; // 801AAE24
  c->r[4]=c->r[31]+0x000004C8u; // 801AAE28
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AAE2C
  c->lr=0x801AAE34u; f_801899B0(c); // 801AAE30
  c->r[3]=0u+0x00000000u; // 801AAE34
  goto L_801AAFEC; // 801AAE38
L_801AAE3C:;
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; cr0(c,c->r[0]); // 801AAE3C
  if (crb(c,2)) { goto L_801AAE5C; } // 801AAE40
  c->r[3]=c->r[31]+0x0000051Cu; // 801AAE44
  c->r[4]=c->r[31]+0x000004C8u; // 801AAE48
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AAE4C
  c->lr=0x801AAE54u; f_801899B0(c); // 801AAE50
  c->r[3]=0u+0x00000000u; // 801AAE54
  goto L_801AAFEC; // 801AAE58
L_801AAE5C:;
  c->r[28]=R32(c->r[13]+0xFFFFB320u); // 801AAE5C
  c->r[27]=0u+0x00000001u; // 801AAE60
  c->r[29]=c->r[10]+0x00000000u; // 801AAE64
  W8(c->r[13]+0xFFFFB318u,c->r[27]); // 801AAE68
  c->r[30]=rotl(c->r[28],5)&0xFFFFFFE0u; // 801AAE6C
  c->r[12]=c->r[29]+c->r[30]; // 801AAE70
  c->r[11]=R8(c->r[12]+0x00000008u); // 801AAE74
  c->r[0]=0u-c->r[11]; // 801AAE78
  c->r[0]=c->r[0]|c->r[11]; // 801AAE7C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801AAE80
  cmpu(c,0,c->r[0],0x00000001u); // 801AAE84
  if (!crb(c,2)) { goto L_801AAEAC; } // 801AAE88
  c->r[4]=c->r[28]|c->r[28]; // 801AAE8C
  c->r[3]=c->r[31]+0x00000240u; // 801AAE90
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AAE94
  c->lr=0x801AAE9Cu; f_801899B0(c); // 801AAE98
  c->r[3]=c->r[31]+0x00000278u; // 801AAE9C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AAEA0
  c->lr=0x801AAEA8u; f_801899B0(c); // 801AAEA4
L_801AAEA8:;
  IRQCHK(c); goto L_801AAEA8; // 801AAEA8
L_801AAEAC:;
  c->r[11]=R32(c->r[12]+0x0000000Cu); // 801AAEAC
  c->r[0]=c->r[11]+0x01150000u; // 801AAEB0
  cmpu(c,0,c->r[0],0x0000DAEDu); // 801AAEB4
  if (crb(c,2)) { goto L_801AAECC; } // 801AAEB8
  c->r[3]=c->r[31]+0x000002A8u; // 801AAEBC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AAEC0
  c->lr=0x801AAEC8u; f_801899B0(c); // 801AAEC4
L_801AAEC8:;
  IRQCHK(c); goto L_801AAEC8; // 801AAEC8
L_801AAECC:;
  W32(c->r[29]+c->r[30],c->r[9]); // 801AAECC
  c->r[0]=c->r[28]+0x00000001u; // 801AAED0
  cmps(c,0,(int32_t)c->r[0],4); // 801AAED4
  W32(c->r[12]+0x00000004u,c->r[27]); // 801AAED8
  W8(c->r[12]+0x00000008u,c->r[27]); // 801AAEDC
  W32(c->r[13]+0xFFFFB320u,c->r[0]); // 801AAEE0
  if (crb(c,0)) { goto L_801AAEF0; } // 801AAEE4
  c->r[0]=0u+0x00000000u; // 801AAEE8
  W32(c->r[13]+0xFFFFB320u,c->r[0]); // 801AAEEC
L_801AAEF0:;
  c->r[9]=R32(c->r[13]+0xFFFFB31Cu); // 801AAEF0
  c->r[12]=rotl(c->r[28],5)&0xFFFFFFE0u; // 801AAEF4
  c->r[11]=c->r[10]+0x00000000u; // 801AAEF8
  c->r[0]=c->r[9]+0x00000001u; // 801AAEFC
  W32(c->r[13]+0xFFFFB31Cu,c->r[0]); // 801AAF00
  cmps(c,0,(int32_t)c->r[0],4); // 801AAF04
  c->r[30]=c->r[11]+c->r[12]; // 801AAF08
  if (crb(c,0)) { goto L_801AAF18; } // 801AAF0C
  c->r[0]=0u+0x00000000u; // 801AAF10
  W32(c->r[13]+0xFFFFB31Cu,c->r[0]); // 801AAF14
L_801AAF18:;
  c->r[9]=R32(c->r[13]+0xFFFFB334u); // 801AAF18
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801AAF1C
  c->r[11]=0u+0x00000094u; // 801AAF20
  cmps(c,0,(int32_t)c->r[8],0); // 801AAF24
  W8(c->r[9]+c->r[0],c->r[11]); // 801AAF28
  c->r[9]=c->r[10]+0x000000C0u; // 801AAF2C
  c->r[11]=0u+0x00000020u; // 801AAF30
  c->r[0]=0u+0x000000D8u; // 801AAF34
  c->r[12]=R32(c->r[13]+0xFFFFB31Cu); // 801AAF38
  c->r[29]=R32(c->r[13]+0xFFFFB334u); // 801AAF3C
  c->r[12]=rotl(c->r[12],5)&0xFFFFFFE0u; // 801AAF40
  c->r[12]=c->r[29]+c->r[12]; // 801AAF44
  W32(c->r[12]+0x00000004u,c->r[3]); // 801AAF48
  c->r[3]=R32(c->r[13]+0xFFFFB31Cu); // 801AAF4C
  c->r[12]=R32(c->r[13]+0xFFFFB334u); // 801AAF50
  c->r[3]=rotl(c->r[3],5)&0xFFFFFFE0u; // 801AAF54
  W32(c->r[9]+0x00000004u,c->r[11]); // 801AAF58
  c->r[3]=c->r[12]+c->r[3]; // 801AAF5C
  W32(c->r[10]+0x000000C0u,c->r[3]); // 801AAF60
  W32(c->r[9]+0x00000008u,c->r[4]); // 801AAF64
  W32(c->r[9]+0x0000000Cu,c->r[0]); // 801AAF68
  W32(c->r[9]+0x00000010u,c->r[6]); // 801AAF6C
  W32(c->r[9]+0x00000014u,c->r[5]); // 801AAF70
  W32(c->r[9]+0x00000018u,c->r[8]); // 801AAF74
  if (!crb(c,2)) { goto L_801AAF88; } // 801AAF78
  c->r[0]=0u+0x00000000u; // 801AAF7C
  W32(c->r[9]+0x0000001Cu,c->r[0]); // 801AAF80
  goto L_801AAF8C; // 801AAF84
L_801AAF88:;
  W32(c->r[9]+0x0000001Cu,c->r[7]); // 801AAF88
L_801AAF8C:;
  c->r[7]=c->r[10]+0x000000C0u; // 801AAF8C
  c->r[3]=c->r[10]+0x00000120u; // 801AAF90
  c->r[0]=0u+0x00000020u; // 801AAF94
  c->r[8]=0u+0x801B0000u; // 801AAF98
  W32(c->r[7]+0x00000020u,c->r[3]); // 801AAF9C
  c->r[9]=c->r[30]|c->r[30]; // 801AAFA0
  c->r[3]=R32(c->r[13]+0xFFFFA888u); // 801AAFA4
  c->r[8]=c->r[8]+0xFFFFA560u; // 801AAFA8
  W32(c->r[7]+0x00000024u,c->r[0]); // 801AAFAC
  c->r[4]=0u+0x00000094u; // 801AAFB0
  c->r[5]=0u+0x00000004u; // 801AAFB4
  c->r[6]=0u+0x00000001u; // 801AAFB8
  c->lr=0x801AAFC0u; f_801BC780(c); // 801AAFBC
  cmps(c,0,(int32_t)c->r[3],0); // 801AAFC0
  if (crb(c,2)) { goto L_801AAFE8; } // 801AAFC4
  c->r[4]=c->r[3]|c->r[3]; // 801AAFC8
  c->r[3]=c->r[31]+0x000003D0u; // 801AAFCC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AAFD0
  c->lr=0x801AAFD8u; f_801899B0(c); // 801AAFD4
  c->r[0]=0u+0x00000000u; // 801AAFD8
  W8(c->r[30]+0x00000008u,c->r[0]); // 801AAFDC
  c->r[3]=0u+0x00000000u; // 801AAFE0
  goto L_801AAFEC; // 801AAFE4
L_801AAFE8:;
  c->r[3]=0u+0x00000001u; // 801AAFE8
L_801AAFEC:;
  c->r[11]=c->r[1]+0x00000020u; // 801AAFEC
  c->lr=0x801AAFF4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801AAFF0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AAFF4
  c->lr=c->r[0]; // 801AAFF8
  c->r[1]=c->r[1]+0x00000020u; // 801AAFFC
  return; // 801AB000
}

// DVDLowGetNoDiscBufferSizes
void f_801AB010(Ctx* __restrict c) {
  trace_call(0x801AB010u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AB010
  c->r[0]=c->lr; // 801AB014
  cmps(c,0,(int32_t)c->r[4],0); // 801AB018
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AB01C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AB020
  c->r[31]=0u+0x80270000u; // 801AB024
  c->r[31]=c->r[31]+0x00005C78u; // 801AB028
  W32(c->r[1]+0x00000008u,c->r[30]); // 801AB02C
  if (crb(c,2)) { goto L_801AB03C; } // 801AB030
  cmps(c,0,(int32_t)c->r[5],0); // 801AB034
  if (!crb(c,2)) { goto L_801AB054; } // 801AB038
L_801AB03C:;
  c->r[3]=c->r[31]+0x00000560u; // 801AB03C
  c->r[4]=c->r[31]+0x00000544u; // 801AB040
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AB044
  c->lr=0x801AB04Cu; f_801899B0(c); // 801AB048
  c->r[3]=0u+0x00000000u; // 801AB04C
  goto L_801AB208; // 801AB050
L_801AB054:;
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; cr0(c,c->r[0]); // 801AB054
  if (crb(c,2)) { goto L_801AB074; } // 801AB058
  c->r[3]=c->r[31]+0x00000584u; // 801AB05C
  c->r[4]=c->r[31]+0x00000544u; // 801AB060
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AB064
  c->lr=0x801AB06Cu; f_801899B0(c); // 801AB068
  c->r[3]=0u+0x00000000u; // 801AB06C
  goto L_801AB208; // 801AB070
L_801AB074:;
  c->r[0]=rotl(c->r[5],0)&0x0000001Fu; cr0(c,c->r[0]); // 801AB074
  if (crb(c,2)) { goto L_801AB094; } // 801AB078
  c->r[3]=c->r[31]+0x000005ACu; // 801AB07C
  c->r[4]=c->r[31]+0x00000544u; // 801AB080
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AB084
  c->lr=0x801AB08Cu; f_801899B0(c); // 801AB088
  c->r[3]=0u+0x00000000u; // 801AB08C
  goto L_801AB208; // 801AB090
L_801AB094:;
  c->r[11]=R32(c->r[13]+0xFFFFB320u); // 801AB094
  c->r[9]=0u+0x802B0000u; // 801AB098
  c->r[12]=0u+0x00000001u; // 801AB09C
  W8(c->r[13]+0xFFFFB318u,c->r[12]); // 801AB0A0
  c->r[10]=rotl(c->r[11],5)&0xFFFFFFE0u; // 801AB0A4
  c->r[9]=c->r[9]+0x00006CA0u; // 801AB0A8
  c->r[8]=c->r[9]+c->r[10]; // 801AB0AC
  c->r[7]=R8(c->r[8]+0x00000008u); // 801AB0B0
  c->r[0]=0u-c->r[7]; // 801AB0B4
  c->r[0]=c->r[0]|c->r[7]; // 801AB0B8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801AB0BC
  cmpu(c,0,c->r[0],0x00000001u); // 801AB0C0
  if (!crb(c,2)) { goto L_801AB0EC; } // 801AB0C4
  c->r[4]=c->r[11]|c->r[11]; // 801AB0C8
  c->r[3]=c->r[31]+0x00000240u; // 801AB0CC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AB0D0
  c->lr=0x801AB0D8u; f_801899B0(c); // 801AB0D4
  c->r[3]=c->r[31]+0x00000278u; // 801AB0D8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AB0DC
  c->lr=0x801AB0E4u; f_801899B0(c); // 801AB0E0
  c->r[0]=c->r[0]|0x00000000u; // 801AB0E4
L_801AB0E8:;
  IRQCHK(c); goto L_801AB0E8; // 801AB0E8
L_801AB0EC:;
  c->r[7]=R32(c->r[8]+0x0000000Cu); // 801AB0EC
  c->r[0]=c->r[7]+0x01150000u; // 801AB0F0
  cmpu(c,0,c->r[0],0x0000DAEDu); // 801AB0F4
  if (crb(c,2)) { goto L_801AB10C; } // 801AB0F8
  c->r[3]=c->r[31]+0x000002A8u; // 801AB0FC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AB100
  c->lr=0x801AB108u; f_801899B0(c); // 801AB104
L_801AB108:;
  IRQCHK(c); goto L_801AB108; // 801AB108
L_801AB10C:;
  W32(c->r[9]+c->r[10],c->r[6]); // 801AB10C
  c->r[0]=c->r[11]+0x00000001u; // 801AB110
  cmps(c,0,(int32_t)c->r[0],4); // 801AB114
  W32(c->r[8]+0x00000004u,c->r[12]); // 801AB118
  W8(c->r[8]+0x00000008u,c->r[12]); // 801AB11C
  W32(c->r[13]+0xFFFFB320u,c->r[0]); // 801AB120
  if (crb(c,0)) { goto L_801AB130; } // 801AB124
  c->r[0]=0u+0x00000000u; // 801AB128
  W32(c->r[13]+0xFFFFB320u,c->r[0]); // 801AB12C
L_801AB130:;
  c->r[6]=R32(c->r[13]+0xFFFFB31Cu); // 801AB130
  c->r[7]=0u+0x802B0000u; // 801AB134
  c->r[8]=rotl(c->r[11],5)&0xFFFFFFE0u; // 801AB138
  c->r[0]=c->r[6]+0x00000001u; // 801AB13C
  c->r[7]=c->r[7]+0x00006CA0u; // 801AB140
  cmps(c,0,(int32_t)c->r[0],4); // 801AB144
  W32(c->r[13]+0xFFFFB31Cu,c->r[0]); // 801AB148
  c->r[30]=c->r[7]+c->r[8]; // 801AB14C
  if (crb(c,0)) { goto L_801AB15C; } // 801AB150
  c->r[0]=0u+0x00000000u; // 801AB154
  W32(c->r[13]+0xFFFFB31Cu,c->r[0]); // 801AB158
L_801AB15C:;
  c->r[6]=R32(c->r[13]+0xFFFFB334u); // 801AB15C
  c->r[8]=0u+0x801B0000u; // 801AB160
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801AB164
  c->r[7]=0u+0x00000092u; // 801AB168
  W8(c->r[6]+c->r[0],c->r[7]); // 801AB16C
  c->r[11]=0u+0x802B0000u; // 801AB170
  c->r[7]=c->r[11]+0x00006D60u; // 801AB174
  c->r[10]=0u+0x00000020u; // 801AB178
  c->r[6]=R32(c->r[13]+0xFFFFB31Cu); // 801AB17C
  c->r[0]=0u+0x00000004u; // 801AB180
  c->r[12]=R32(c->r[13]+0xFFFFB334u); // 801AB184
  c->r[9]=c->r[30]|c->r[30]; // 801AB188
  c->r[6]=rotl(c->r[6],5)&0xFFFFFFE0u; // 801AB18C
  c->r[8]=c->r[8]+0xFFFFA560u; // 801AB190
  c->r[6]=c->r[12]+c->r[6]; // 801AB194
  W32(c->r[6]+0x00000004u,c->r[3]); // 801AB198
  c->r[6]=0u+0x00000002u; // 801AB19C
  c->r[3]=R32(c->r[13]+0xFFFFB31Cu); // 801AB1A0
  c->r[12]=R32(c->r[13]+0xFFFFB334u); // 801AB1A4
  c->r[3]=rotl(c->r[3],5)&0xFFFFFFE0u; // 801AB1A8
  W32(c->r[7]+0x00000008u,c->r[4]); // 801AB1AC
  c->r[12]=c->r[12]+c->r[3]; // 801AB1B0
  c->r[3]=R32(c->r[13]+0xFFFFA888u); // 801AB1B4
  W32(c->r[7]+0x00000010u,c->r[5]); // 801AB1B8
  c->r[4]=0u+0x00000092u; // 801AB1BC
  c->r[5]=0u+0x00000001u; // 801AB1C0
  W32(c->r[11]+0x00006D60u,c->r[12]); // 801AB1C4
  W32(c->r[7]+0x00000004u,c->r[10]); // 801AB1C8
  W32(c->r[7]+0x0000000Cu,c->r[0]); // 801AB1CC
  W32(c->r[7]+0x00000014u,c->r[0]); // 801AB1D0
  c->lr=0x801AB1D8u; f_801BC780(c); // 801AB1D4
  cmps(c,0,(int32_t)c->r[3],0); // 801AB1D8
  if (crb(c,2)) { goto L_801AB204; } // 801AB1DC
  c->r[5]=c->r[3]|c->r[3]; // 801AB1E0
  c->r[3]=c->r[31]+0x000005D4u; // 801AB1E4
  c->r[4]=c->r[31]+0x00000544u; // 801AB1E8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AB1EC
  c->lr=0x801AB1F4u; f_801899B0(c); // 801AB1F0
  c->r[0]=0u+0x00000000u; // 801AB1F4
  W8(c->r[30]+0x00000008u,c->r[0]); // 801AB1F8
  c->r[3]=0u+0x00000000u; // 801AB1FC
  goto L_801AB208; // 801AB200
L_801AB204:;
  c->r[3]=0u+0x00000001u; // 801AB204
L_801AB208:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AB208
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AB20C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801AB210
  c->lr=c->r[0]; // 801AB214
  c->r[1]=c->r[1]+0x00000010u; // 801AB218
  return; // 801AB21C
}

// DVDLowGetNoDiscOpenPartitionParams
void f_801AB220(Ctx* __restrict c) {
  trace_call(0x801AB220u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AB220
  c->r[0]=c->lr; // 801AB224
  W32(c->r[1]+0x00000034u,c->r[0]); // 801AB228
  c->r[11]=c->r[1]+0x00000030u; // 801AB22C
  c->lr=0x801AB234u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801AB230
  cmps(c,0,(int32_t)c->r[4],0); // 801AB234
  c->r[31]=0u+0x80270000u; // 801AB238
  c->r[28]=R32(c->r[1]+0x00000038u); // 801AB23C
  c->r[31]=c->r[31]+0x00005C78u; // 801AB240
  if (crb(c,2)) { goto L_801AB278; } // 801AB244
  cmps(c,0,(int32_t)c->r[5],0); // 801AB248
  if (crb(c,2)) { goto L_801AB278; } // 801AB24C
  cmps(c,0,(int32_t)c->r[6],0); // 801AB250
  if (crb(c,2)) { goto L_801AB278; } // 801AB254
  cmps(c,0,(int32_t)c->r[7],0); // 801AB258
  if (crb(c,2)) { goto L_801AB278; } // 801AB25C
  cmps(c,0,(int32_t)c->r[8],0); // 801AB260
  if (crb(c,2)) { goto L_801AB278; } // 801AB264
  cmps(c,0,(int32_t)c->r[9],0); // 801AB268
  if (crb(c,2)) { goto L_801AB278; } // 801AB26C
  cmps(c,0,(int32_t)c->r[10],0); // 801AB270
  if (!crb(c,2)) { goto L_801AB290; } // 801AB274
L_801AB278:;
  c->r[3]=c->r[31]+0x00000560u; // 801AB278
  c->r[4]=c->r[31]+0x00000604u; // 801AB27C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AB280
  c->lr=0x801AB288u; f_801899B0(c); // 801AB284
  c->r[3]=0u+0x00000000u; // 801AB288
  goto L_801AB4A0; // 801AB28C
L_801AB290:;
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; cr0(c,c->r[0]); // 801AB290
  if (!crb(c,2)) { goto L_801AB2C8; } // 801AB294
  c->r[0]=rotl(c->r[5],0)&0x0000001Fu; cr0(c,c->r[0]); // 801AB298
  if (!crb(c,2)) { goto L_801AB2C8; } // 801AB29C
  c->r[0]=rotl(c->r[6],0)&0x0000001Fu; cr0(c,c->r[0]); // 801AB2A0
  if (!crb(c,2)) { goto L_801AB2C8; } // 801AB2A4
  c->r[0]=rotl(c->r[7],0)&0x0000001Fu; cr0(c,c->r[0]); // 801AB2A8
  if (!crb(c,2)) { goto L_801AB2C8; } // 801AB2AC
  c->r[0]=rotl(c->r[8],0)&0x0000001Fu; cr0(c,c->r[0]); // 801AB2B0
  if (!crb(c,2)) { goto L_801AB2C8; } // 801AB2B4
  c->r[0]=rotl(c->r[9],0)&0x0000001Fu; cr0(c,c->r[0]); // 801AB2B8
  if (!crb(c,2)) { goto L_801AB2C8; } // 801AB2BC
  c->r[0]=rotl(c->r[10],0)&0x0000001Fu; cr0(c,c->r[0]); // 801AB2C0
  if (crb(c,2)) { goto L_801AB2E0; } // 801AB2C4
L_801AB2C8:;
  c->r[3]=c->r[31]+0x00000628u; // 801AB2C8
  c->r[4]=c->r[31]+0x00000604u; // 801AB2CC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AB2D0
  c->lr=0x801AB2D8u; f_801899B0(c); // 801AB2D4
  c->r[3]=0u+0x00000000u; // 801AB2D8
  goto L_801AB4A0; // 801AB2DC
L_801AB2E0:;
  c->r[26]=R32(c->r[13]+0xFFFFB320u); // 801AB2E0
  c->r[24]=0u+0x802B0000u; // 801AB2E4
  c->r[27]=0u+0x00000001u; // 801AB2E8
  W8(c->r[13]+0xFFFFB318u,c->r[27]); // 801AB2EC
  c->r[25]=rotl(c->r[26],5)&0xFFFFFFE0u; // 801AB2F0
  c->r[24]=c->r[24]+0x00006CA0u; // 801AB2F4
  c->r[12]=c->r[24]+c->r[25]; // 801AB2F8
  c->r[11]=R8(c->r[12]+0x00000008u); // 801AB2FC
  c->r[0]=0u-c->r[11]; // 801AB300
  c->r[0]=c->r[0]|c->r[11]; // 801AB304
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801AB308
  cmpu(c,0,c->r[0],0x00000001u); // 801AB30C
  if (!crb(c,2)) { goto L_801AB334; } // 801AB310
  c->r[4]=c->r[26]|c->r[26]; // 801AB314
  c->r[3]=c->r[31]+0x00000240u; // 801AB318
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AB31C
  c->lr=0x801AB324u; f_801899B0(c); // 801AB320
  c->r[3]=c->r[31]+0x00000278u; // 801AB324
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AB328
  c->lr=0x801AB330u; f_801899B0(c); // 801AB32C
L_801AB330:;
  IRQCHK(c); goto L_801AB330; // 801AB330
L_801AB334:;
  c->r[11]=R32(c->r[12]+0x0000000Cu); // 801AB334
  c->r[0]=c->r[11]+0x01150000u; // 801AB338
  cmpu(c,0,c->r[0],0x0000DAEDu); // 801AB33C
  if (crb(c,2)) { goto L_801AB354; } // 801AB340
  c->r[3]=c->r[31]+0x000002A8u; // 801AB344
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AB348
  c->lr=0x801AB350u; f_801899B0(c); // 801AB34C
L_801AB350:;
  IRQCHK(c); goto L_801AB350; // 801AB350
L_801AB354:;
  W32(c->r[24]+c->r[25],c->r[28]); // 801AB354
  c->r[0]=c->r[26]+0x00000001u; // 801AB358
  cmps(c,0,(int32_t)c->r[0],4); // 801AB35C
  W32(c->r[12]+0x00000004u,c->r[27]); // 801AB360
  W8(c->r[12]+0x00000008u,c->r[27]); // 801AB364
  W32(c->r[13]+0xFFFFB320u,c->r[0]); // 801AB368
  if (crb(c,0)) { goto L_801AB378; } // 801AB36C
  c->r[0]=0u+0x00000000u; // 801AB370
  W32(c->r[13]+0xFFFFB320u,c->r[0]); // 801AB374
L_801AB378:;
  c->r[11]=R32(c->r[13]+0xFFFFB31Cu); // 801AB378
  c->r[12]=0u+0x802B0000u; // 801AB37C
  c->r[24]=rotl(c->r[26],5)&0xFFFFFFE0u; // 801AB380
  c->r[0]=c->r[11]+0x00000001u; // 801AB384
  c->r[12]=c->r[12]+0x00006CA0u; // 801AB388
  cmps(c,0,(int32_t)c->r[0],4); // 801AB38C
  W32(c->r[13]+0xFFFFB31Cu,c->r[0]); // 801AB390
  c->r[30]=c->r[12]+c->r[24]; // 801AB394
  if (crb(c,0)) { goto L_801AB3A4; } // 801AB398
  c->r[0]=0u+0x00000000u; // 801AB39C
  W32(c->r[13]+0xFFFFB31Cu,c->r[0]); // 801AB3A0
L_801AB3A4:;
  c->r[11]=R32(c->r[13]+0xFFFFB334u); // 801AB3A4
  c->r[26]=0u+0x802B0000u; // 801AB3A8
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801AB3AC
  c->r[12]=0u+0x00000090u; // 801AB3B0
  W8(c->r[11]+c->r[0],c->r[12]); // 801AB3B4
  c->r[28]=c->r[26]+0x00006D60u; // 801AB3B8
  c->r[27]=0u+0x00000020u; // 801AB3BC
  c->r[29]=0u+0x00000004u; // 801AB3C0
  c->r[0]=R32(c->r[13]+0xFFFFB31Cu); // 801AB3C4
  c->r[12]=0u+0x000002A4u; // 801AB3C8
  c->r[24]=R32(c->r[13]+0xFFFFB334u); // 801AB3CC
  c->r[11]=0u+0x00020000u; // 801AB3D0
  c->r[25]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801AB3D4
  c->r[25]=c->r[24]+c->r[25]; // 801AB3D8
  c->r[0]=c->r[11]+0xFFFF8000u; // 801AB3DC
  W32(c->r[25]+0x00000004u,c->r[3]); // 801AB3E0
  c->r[11]=0u+0x801B0000u; // 801AB3E4
  c->r[3]=R32(c->r[13]+0xFFFFB31Cu); // 801AB3E8
  c->r[25]=R32(c->r[13]+0xFFFFB334u); // 801AB3EC
  c->r[3]=rotl(c->r[3],5)&0xFFFFFFE0u; // 801AB3F0
  W32(c->r[28]+0x00000018u,c->r[4]); // 801AB3F4
  c->r[25]=c->r[25]+c->r[3]; // 801AB3F8
  c->r[3]=R32(c->r[13]+0xFFFFA888u); // 801AB3FC
  W32(c->r[28]+0x00000028u,c->r[6]); // 801AB400
  c->r[4]=0u+0x00000090u; // 801AB404
  c->r[6]=0u+0x00000007u; // 801AB408
  W32(c->r[26]+0x00006D60u,c->r[25]); // 801AB40C
  W32(c->r[28]+0x00000004u,c->r[27]); // 801AB410
  W32(c->r[28]+0x00000008u,c->r[5]); // 801AB414
  W32(c->r[28]+0x0000000Cu,c->r[29]); // 801AB418
  W32(c->r[28]+0x00000010u,c->r[7]); // 801AB41C
  W32(c->r[28]+0x00000014u,c->r[29]); // 801AB420
  W32(c->r[28]+0x0000001Cu,c->r[12]); // 801AB424
  W32(c->r[28]+0x00000020u,c->r[5]); // 801AB428
  W32(c->r[28]+0x00000024u,c->r[29]); // 801AB42C
  c->r[12]=R32(c->r[5]+0x00000000u); // 801AB430
  c->r[5]=0u+0x00000003u; // 801AB434
  W32(c->r[28]+0x0000002Cu,c->r[12]); // 801AB438
  W32(c->r[28]+0x00000038u,c->r[8]); // 801AB43C
  c->r[8]=c->r[11]+0xFFFFA560u; // 801AB440
  W32(c->r[28]+0x00000030u,c->r[7]); // 801AB444
  W32(c->r[28]+0x00000034u,c->r[29]); // 801AB448
  c->r[11]=R32(c->r[7]+0x00000000u); // 801AB44C
  c->r[7]=c->r[28]|c->r[28]; // 801AB450
  W32(c->r[28]+0x0000003Cu,c->r[11]); // 801AB454
  W32(c->r[28]+0x00000040u,c->r[9]); // 801AB458
  c->r[9]=c->r[30]|c->r[30]; // 801AB45C
  W32(c->r[28]+0x00000044u,c->r[29]); // 801AB460
  W32(c->r[28]+0x00000048u,c->r[10]); // 801AB464
  W32(c->r[28]+0x0000004Cu,c->r[0]); // 801AB468
  c->lr=0x801AB470u; f_801BC780(c); // 801AB46C
  cmps(c,0,(int32_t)c->r[3],0); // 801AB470
  if (crb(c,2)) { goto L_801AB49C; } // 801AB474
  c->r[5]=c->r[3]|c->r[3]; // 801AB478
  c->r[3]=c->r[31]+0x000005D4u; // 801AB47C
  c->r[4]=c->r[31]+0x00000604u; // 801AB480
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AB484
  c->lr=0x801AB48Cu; f_801899B0(c); // 801AB488
  c->r[0]=0u+0x00000000u; // 801AB48C
  W8(c->r[30]+0x00000008u,c->r[0]); // 801AB490
  c->r[3]=0u+0x00000000u; // 801AB494
  goto L_801AB4A0; // 801AB498
L_801AB49C:;
  c->r[3]=0u+0x00000001u; // 801AB49C
L_801AB4A0:;
  c->r[11]=c->r[1]+0x00000030u; // 801AB4A0
  c->lr=0x801AB4A8u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801AB4A4
  c->r[0]=R32(c->r[1]+0x00000034u); // 801AB4A8
  c->lr=c->r[0]; // 801AB4AC
  c->r[1]=c->r[1]+0x00000030u; // 801AB4B0
  return; // 801AB4B4
}

// DVDLowClosePartition
void f_801AB4C0(Ctx* __restrict c) {
  trace_call(0x801AB4C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AB4C0
  c->r[0]=c->lr; // 801AB4C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AB4C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AB4CC
  c->r[31]=0u+0x80270000u; // 801AB4D0
  c->r[31]=c->r[31]+0x00005C78u; // 801AB4D4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801AB4D8
  c->r[4]=R32(c->r[13]+0xFFFFB31Cu); // 801AB4DC
  c->r[0]=c->r[4]+0x00000001u; // 801AB4E0
  W32(c->r[13]+0xFFFFB31Cu,c->r[0]); // 801AB4E4
  cmps(c,0,(int32_t)c->r[0],4); // 801AB4E8
  if (crb(c,0)) { goto L_801AB4F8; } // 801AB4EC
  c->r[0]=0u+0x00000000u; // 801AB4F0
  W32(c->r[13]+0xFFFFB31Cu,c->r[0]); // 801AB4F4
L_801AB4F8:;
  c->r[4]=R32(c->r[13]+0xFFFFB334u); // 801AB4F8
  c->r[7]=0u+0x802B0000u; // 801AB4FC
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801AB500
  c->r[5]=0u+0x0000008Cu; // 801AB504
  W8(c->r[4]+c->r[0],c->r[5]); // 801AB508
  c->r[9]=0u+0x00000001u; // 801AB50C
  c->r[7]=c->r[7]+0x00006CA0u; // 801AB510
  c->r[4]=R32(c->r[13]+0xFFFFB320u); // 801AB514
  W8(c->r[13]+0xFFFFB318u,c->r[9]); // 801AB518
  c->r[8]=rotl(c->r[4],5)&0xFFFFFFE0u; // 801AB51C
  c->r[6]=c->r[7]+c->r[8]; // 801AB520
  c->r[5]=R8(c->r[6]+0x00000008u); // 801AB524
  c->r[0]=0u-c->r[5]; // 801AB528
  c->r[0]=c->r[0]|c->r[5]; // 801AB52C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801AB530
  cmpu(c,0,c->r[0],0x00000001u); // 801AB534
  if (!crb(c,2)) { goto L_801AB55C; } // 801AB538
  c->r[3]=c->r[31]+0x00000240u; // 801AB53C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AB540
  c->lr=0x801AB548u; f_801899B0(c); // 801AB544
  c->r[3]=c->r[31]+0x00000278u; // 801AB548
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AB54C
  c->lr=0x801AB554u; f_801899B0(c); // 801AB550
  c->r[0]=c->r[0]|0x00000000u; // 801AB554
L_801AB558:;
  IRQCHK(c); goto L_801AB558; // 801AB558
L_801AB55C:;
  c->r[5]=R32(c->r[6]+0x0000000Cu); // 801AB55C
  c->r[0]=c->r[5]+0x01150000u; // 801AB560
  cmpu(c,0,c->r[0],0x0000DAEDu); // 801AB564
  if (crb(c,2)) { goto L_801AB57C; } // 801AB568
  c->r[3]=c->r[31]+0x000002A8u; // 801AB56C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AB570
  c->lr=0x801AB578u; f_801899B0(c); // 801AB574
L_801AB578:;
  IRQCHK(c); goto L_801AB578; // 801AB578
L_801AB57C:;
  W32(c->r[7]+c->r[8],c->r[3]); // 801AB57C
  c->r[0]=c->r[4]+0x00000001u; // 801AB580
  cmps(c,0,(int32_t)c->r[0],4); // 801AB584
  W32(c->r[6]+0x00000004u,c->r[9]); // 801AB588
  W8(c->r[6]+0x00000008u,c->r[9]); // 801AB58C
  W32(c->r[13]+0xFFFFB320u,c->r[0]); // 801AB590
  if (crb(c,0)) { goto L_801AB5A0; } // 801AB594
  c->r[0]=0u+0x00000000u; // 801AB598
  W32(c->r[13]+0xFFFFB320u,c->r[0]); // 801AB59C
L_801AB5A0:;
  c->r[0]=R32(c->r[13]+0xFFFFB31Cu); // 801AB5A0
  c->r[3]=0u+0x802B0000u; // 801AB5A4
  c->r[5]=rotl(c->r[4],5)&0xFFFFFFE0u; // 801AB5A8
  c->r[4]=R32(c->r[13]+0xFFFFB334u); // 801AB5AC
  c->r[3]=c->r[3]+0x00006CA0u; // 801AB5B0
  c->r[9]=0u+0x801B0000u; // 801AB5B4
  c->r[30]=c->r[3]+c->r[5]; // 801AB5B8
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801AB5BC
  c->r[5]=c->r[4]+c->r[0]; // 801AB5C0
  c->r[3]=R32(c->r[13]+0xFFFFA888u); // 801AB5C4
  c->r[10]=c->r[30]|c->r[30]; // 801AB5C8
  c->r[9]=c->r[9]+0xFFFFA560u; // 801AB5CC
  c->r[4]=0u+0x0000008Cu; // 801AB5D0
  c->r[6]=0u+0x00000020u; // 801AB5D4
  c->r[7]=0u+0x00000000u; // 801AB5D8
  c->r[8]=0u+0x00000000u; // 801AB5DC
  c->lr=0x801AB5E4u; f_801BC3D0(c); // 801AB5E0
  cmps(c,0,(int32_t)c->r[3],0); // 801AB5E4
  if (crb(c,2)) { goto L_801AB60C; } // 801AB5E8
  c->r[4]=c->r[3]|c->r[3]; // 801AB5EC
  c->r[3]=c->r[31]+0x00000668u; // 801AB5F0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AB5F4
  c->lr=0x801AB5FCu; f_801899B0(c); // 801AB5F8
  c->r[0]=0u+0x00000000u; // 801AB5FC
  W8(c->r[30]+0x00000008u,c->r[0]); // 801AB600
  c->r[3]=0u+0x00000000u; // 801AB604
  goto L_801AB610; // 801AB608
L_801AB60C:;
  c->r[3]=0u+0x00000001u; // 801AB60C
L_801AB610:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AB610
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AB614
  c->r[30]=R32(c->r[1]+0x00000008u); // 801AB618
  c->lr=c->r[0]; // 801AB61C
  c->r[1]=c->r[1]+0x00000010u; // 801AB620
  return; // 801AB624
}

// DVDLowUnencryptedRead
void f_801AB630(Ctx* __restrict c) {
  trace_call(0x801AB630u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AB630
  c->r[0]=c->lr; // 801AB634
  c->r[9]=0u+0x802B0000u; // 801AB638
  c->r[12]=0u+0x00000001u; // 801AB63C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AB640
  c->r[9]=c->r[9]+0x00006CA0u; // 801AB644
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AB648
  c->r[31]=0u+0x80270000u; // 801AB64C
  c->r[31]=c->r[31]+0x00005C78u; // 801AB650
  W32(c->r[1]+0x00000008u,c->r[30]); // 801AB654
  c->r[11]=R32(c->r[13]+0xFFFFB320u); // 801AB658
  W8(c->r[13]+0xFFFFB318u,c->r[12]); // 801AB65C
  c->r[10]=rotl(c->r[11],5)&0xFFFFFFE0u; // 801AB660
  c->r[8]=c->r[9]+c->r[10]; // 801AB664
  c->r[7]=R8(c->r[8]+0x00000008u); // 801AB668
  c->r[0]=0u-c->r[7]; // 801AB66C
  c->r[0]=c->r[0]|c->r[7]; // 801AB670
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801AB674
  cmpu(c,0,c->r[0],0x00000001u); // 801AB678
  if (!crb(c,2)) { goto L_801AB6A4; } // 801AB67C
  c->r[4]=c->r[11]|c->r[11]; // 801AB680
  c->r[3]=c->r[31]+0x00000240u; // 801AB684
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AB688
  c->lr=0x801AB690u; f_801899B0(c); // 801AB68C
  c->r[3]=c->r[31]+0x00000278u; // 801AB690
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AB694
  c->lr=0x801AB69Cu; f_801899B0(c); // 801AB698
  c->r[0]=c->r[0]|0x00000000u; // 801AB69C
L_801AB6A0:;
  IRQCHK(c); goto L_801AB6A0; // 801AB6A0
L_801AB6A4:;
  c->r[7]=R32(c->r[8]+0x0000000Cu); // 801AB6A4
  c->r[0]=c->r[7]+0x01150000u; // 801AB6A8
  cmpu(c,0,c->r[0],0x0000DAEDu); // 801AB6AC
  if (crb(c,2)) { goto L_801AB6C4; } // 801AB6B0
  c->r[3]=c->r[31]+0x000002A8u; // 801AB6B4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AB6B8
  c->lr=0x801AB6C0u; f_801899B0(c); // 801AB6BC
L_801AB6C0:;
  IRQCHK(c); goto L_801AB6C0; // 801AB6C0
L_801AB6C4:;
  W32(c->r[9]+c->r[10],c->r[6]); // 801AB6C4
  c->r[0]=c->r[11]+0x00000001u; // 801AB6C8
  cmps(c,0,(int32_t)c->r[0],4); // 801AB6CC
  W32(c->r[8]+0x00000004u,c->r[12]); // 801AB6D0
  W8(c->r[8]+0x00000008u,c->r[12]); // 801AB6D4
  W32(c->r[13]+0xFFFFB320u,c->r[0]); // 801AB6D8
  if (crb(c,0)) { goto L_801AB6E8; } // 801AB6DC
  c->r[0]=0u+0x00000000u; // 801AB6E0
  W32(c->r[13]+0xFFFFB320u,c->r[0]); // 801AB6E4
L_801AB6E8:;
  c->r[6]=R32(c->r[13]+0xFFFFB31Cu); // 801AB6E8
  c->r[7]=0u+0x802B0000u; // 801AB6EC
  W32(c->r[13]+0xFFFFB32Cu,c->r[4]); // 801AB6F0
  c->r[8]=rotl(c->r[11],5)&0xFFFFFFE0u; // 801AB6F4
  c->r[0]=c->r[6]+0x00000001u; // 801AB6F8
  c->r[7]=c->r[7]+0x00006CA0u; // 801AB6FC
  cmps(c,0,(int32_t)c->r[0],4); // 801AB700
  W32(c->r[13]+0xFFFFB31Cu,c->r[0]); // 801AB704
  c->r[30]=c->r[7]+c->r[8]; // 801AB708
  if (crb(c,0)) { goto L_801AB718; } // 801AB70C
  c->r[0]=0u+0x00000000u; // 801AB710
  W32(c->r[13]+0xFFFFB31Cu,c->r[0]); // 801AB714
L_801AB718:;
  c->r[6]=R32(c->r[13]+0xFFFFB334u); // 801AB718
  c->r[9]=0u+0x801B0000u; // 801AB71C
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801AB720
  c->r[7]=0u+0x0000008Du; // 801AB724
  W8(c->r[6]+c->r[0],c->r[7]); // 801AB728
  c->r[7]=c->r[3]|c->r[3]; // 801AB72C
  c->r[8]=c->r[4]|c->r[4]; // 801AB730
  c->r[10]=c->r[30]|c->r[30]; // 801AB734
  c->r[0]=R32(c->r[13]+0xFFFFB31Cu); // 801AB738
  c->r[9]=c->r[9]+0xFFFFA560u; // 801AB73C
  c->r[3]=R32(c->r[13]+0xFFFFB334u); // 801AB740
  c->r[6]=0u+0x00000020u; // 801AB744
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801AB748
  c->r[3]=c->r[3]+c->r[0]; // 801AB74C
  W32(c->r[3]+0x00000004u,c->r[4]); // 801AB750
  c->r[4]=0u+0x0000008Du; // 801AB754
  c->r[0]=R32(c->r[13]+0xFFFFB31Cu); // 801AB758
  c->r[3]=R32(c->r[13]+0xFFFFB334u); // 801AB75C
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801AB760
  c->r[3]=c->r[3]+c->r[0]; // 801AB764
  W32(c->r[3]+0x00000008u,c->r[5]); // 801AB768
  c->r[0]=R32(c->r[13]+0xFFFFB31Cu); // 801AB76C
  c->r[5]=R32(c->r[13]+0xFFFFB334u); // 801AB770
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801AB774
  c->r[3]=R32(c->r[13]+0xFFFFA888u); // 801AB778
  c->r[5]=c->r[5]+c->r[0]; // 801AB77C
  c->lr=0x801AB784u; f_801BC3D0(c); // 801AB780
  cmps(c,0,(int32_t)c->r[3],0); // 801AB784
  if (crb(c,2)) { goto L_801AB7AC; } // 801AB788
  c->r[4]=c->r[3]|c->r[3]; // 801AB78C
  c->r[3]=c->r[31]+0x000006A8u; // 801AB790
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AB794
  c->lr=0x801AB79Cu; f_801899B0(c); // 801AB798
  c->r[0]=0u+0x00000000u; // 801AB79C
  W8(c->r[30]+0x00000008u,c->r[0]); // 801AB7A0
  c->r[3]=0u+0x00000000u; // 801AB7A4
  goto L_801AB7B0; // 801AB7A8
L_801AB7AC:;
  c->r[3]=0u+0x00000001u; // 801AB7AC
L_801AB7B0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AB7B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AB7B4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801AB7B8
  c->lr=c->r[0]; // 801AB7BC
  c->r[1]=c->r[1]+0x00000010u; // 801AB7C0
  return; // 801AB7C4
}

// DVDLowStopMotor
void f_801AB7D0(Ctx* __restrict c) {
  trace_call(0x801AB7D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AB7D0
  c->r[0]=c->lr; // 801AB7D4
  c->r[8]=0u+0x802B0000u; // 801AB7D8
  c->r[11]=0u+0x00000001u; // 801AB7DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AB7E0
  c->r[8]=c->r[8]+0x00006CA0u; // 801AB7E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AB7E8
  c->r[31]=0u+0x80270000u; // 801AB7EC
  c->r[31]=c->r[31]+0x00005C78u; // 801AB7F0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801AB7F4
  c->r[10]=R32(c->r[13]+0xFFFFB320u); // 801AB7F8
  W8(c->r[13]+0xFFFFB318u,c->r[11]); // 801AB7FC
  c->r[9]=rotl(c->r[10],5)&0xFFFFFFE0u; // 801AB800
  c->r[7]=c->r[8]+c->r[9]; // 801AB804
  c->r[6]=R8(c->r[7]+0x00000008u); // 801AB808
  c->r[0]=0u-c->r[6]; // 801AB80C
  c->r[0]=c->r[0]|c->r[6]; // 801AB810
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801AB814
  cmpu(c,0,c->r[0],0x00000001u); // 801AB818
  if (!crb(c,2)) { goto L_801AB844; } // 801AB81C
  c->r[4]=c->r[10]|c->r[10]; // 801AB820
  c->r[3]=c->r[31]+0x00000240u; // 801AB824
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AB828
  c->lr=0x801AB830u; f_801899B0(c); // 801AB82C
  c->r[3]=c->r[31]+0x00000278u; // 801AB830
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AB834
  c->lr=0x801AB83Cu; f_801899B0(c); // 801AB838
  c->r[0]=c->r[0]|0x00000000u; // 801AB83C
L_801AB840:;
  IRQCHK(c); goto L_801AB840; // 801AB840
L_801AB844:;
  c->r[6]=R32(c->r[7]+0x0000000Cu); // 801AB844
  c->r[0]=c->r[6]+0x01150000u; // 801AB848
  cmpu(c,0,c->r[0],0x0000DAEDu); // 801AB84C
  if (crb(c,2)) { goto L_801AB864; } // 801AB850
  c->r[3]=c->r[31]+0x000002A8u; // 801AB854
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AB858
  c->lr=0x801AB860u; f_801899B0(c); // 801AB85C
L_801AB860:;
  IRQCHK(c); goto L_801AB860; // 801AB860
L_801AB864:;
  W32(c->r[8]+c->r[9],c->r[5]); // 801AB864
  c->r[0]=c->r[10]+0x00000001u; // 801AB868
  cmps(c,0,(int32_t)c->r[0],4); // 801AB86C
  W32(c->r[7]+0x00000004u,c->r[11]); // 801AB870
  W8(c->r[7]+0x00000008u,c->r[11]); // 801AB874
  W32(c->r[13]+0xFFFFB320u,c->r[0]); // 801AB878
  if (crb(c,0)) { goto L_801AB888; } // 801AB87C
  c->r[0]=0u+0x00000000u; // 801AB880
  W32(c->r[13]+0xFFFFB320u,c->r[0]); // 801AB884
L_801AB888:;
  c->r[5]=R32(c->r[13]+0xFFFFB31Cu); // 801AB888
  c->r[6]=0u+0x802B0000u; // 801AB88C
  c->r[7]=rotl(c->r[10],5)&0xFFFFFFE0u; // 801AB890
  c->r[0]=c->r[5]+0x00000001u; // 801AB894
  c->r[6]=c->r[6]+0x00006CA0u; // 801AB898
  cmps(c,0,(int32_t)c->r[0],4); // 801AB89C
  W32(c->r[13]+0xFFFFB31Cu,c->r[0]); // 801AB8A0
  c->r[30]=c->r[6]+c->r[7]; // 801AB8A4
  if (crb(c,0)) { goto L_801AB8B4; } // 801AB8A8
  c->r[0]=0u+0x00000000u; // 801AB8AC
  W32(c->r[13]+0xFFFFB31Cu,c->r[0]); // 801AB8B0
L_801AB8B4:;
  c->r[5]=R32(c->r[13]+0xFFFFB334u); // 801AB8B4
  c->r[7]=0u+0x802B0000u; // 801AB8B8
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801AB8BC
  c->r[6]=0u+0x000000E3u; // 801AB8C0
  W8(c->r[5]+c->r[0],c->r[6]); // 801AB8C4
  c->r[9]=0u+0x801B0000u; // 801AB8C8
  c->r[10]=c->r[30]|c->r[30]; // 801AB8CC
  c->r[7]=c->r[7]+0x00006D20u; // 801AB8D0
  c->r[0]=R32(c->r[13]+0xFFFFB31Cu); // 801AB8D4
  c->r[9]=c->r[9]+0xFFFFA560u; // 801AB8D8
  c->r[5]=R32(c->r[13]+0xFFFFB334u); // 801AB8DC
  c->r[6]=0u+0x00000020u; // 801AB8E0
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801AB8E4
  c->r[8]=0u+0x00000020u; // 801AB8E8
  c->r[5]=c->r[5]+c->r[0]; // 801AB8EC
  W32(c->r[5]+0x00000004u,c->r[3]); // 801AB8F0
  c->r[0]=R32(c->r[13]+0xFFFFB31Cu); // 801AB8F4
  c->r[3]=R32(c->r[13]+0xFFFFB334u); // 801AB8F8
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801AB8FC
  c->r[3]=c->r[3]+c->r[0]; // 801AB900
  W32(c->r[3]+0x00000008u,c->r[4]); // 801AB904
  c->r[4]=0u+0x000000E3u; // 801AB908
  c->r[0]=R32(c->r[13]+0xFFFFB31Cu); // 801AB90C
  c->r[5]=R32(c->r[13]+0xFFFFB334u); // 801AB910
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801AB914
  c->r[3]=R32(c->r[13]+0xFFFFA888u); // 801AB918
  c->r[5]=c->r[5]+c->r[0]; // 801AB91C
  c->lr=0x801AB924u; f_801BC3D0(c); // 801AB920
  cmps(c,0,(int32_t)c->r[3],0); // 801AB924
  if (crb(c,2)) { goto L_801AB94C; } // 801AB928
  c->r[4]=c->r[3]|c->r[3]; // 801AB92C
  c->r[3]=c->r[31]+0x000006E8u; // 801AB930
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AB934
  c->lr=0x801AB93Cu; f_801899B0(c); // 801AB938
  c->r[0]=0u+0x00000000u; // 801AB93C
  W8(c->r[30]+0x00000008u,c->r[0]); // 801AB940
  c->r[3]=0u+0x00000000u; // 801AB944
  goto L_801AB950; // 801AB948
L_801AB94C:;
  c->r[3]=0u+0x00000001u; // 801AB94C
L_801AB950:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AB950
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AB954
  c->r[30]=R32(c->r[1]+0x00000008u); // 801AB958
  c->lr=c->r[0]; // 801AB95C
  c->r[1]=c->r[1]+0x00000010u; // 801AB960
  return; // 801AB964
}

// DVDLowInquiry
void f_801AB970(Ctx* __restrict c) {
  trace_call(0x801AB970u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AB970
  c->r[0]=c->lr; // 801AB974
  c->r[7]=0u+0x802B0000u; // 801AB978
  c->r[10]=0u+0x00000001u; // 801AB97C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AB980
  c->r[7]=c->r[7]+0x00006CA0u; // 801AB984
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AB988
  c->r[31]=0u+0x80270000u; // 801AB98C
  c->r[31]=c->r[31]+0x00005C78u; // 801AB990
  W32(c->r[1]+0x00000008u,c->r[30]); // 801AB994
  c->r[9]=R32(c->r[13]+0xFFFFB320u); // 801AB998
  W8(c->r[13]+0xFFFFB318u,c->r[10]); // 801AB99C
  c->r[8]=rotl(c->r[9],5)&0xFFFFFFE0u; // 801AB9A0
  c->r[6]=c->r[7]+c->r[8]; // 801AB9A4
  c->r[5]=R8(c->r[6]+0x00000008u); // 801AB9A8
  c->r[0]=0u-c->r[5]; // 801AB9AC
  c->r[0]=c->r[0]|c->r[5]; // 801AB9B0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801AB9B4
  cmpu(c,0,c->r[0],0x00000001u); // 801AB9B8
  if (!crb(c,2)) { goto L_801AB9E4; } // 801AB9BC
  c->r[4]=c->r[9]|c->r[9]; // 801AB9C0
  c->r[3]=c->r[31]+0x00000240u; // 801AB9C4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AB9C8
  c->lr=0x801AB9D0u; f_801899B0(c); // 801AB9CC
  c->r[3]=c->r[31]+0x00000278u; // 801AB9D0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AB9D4
  c->lr=0x801AB9DCu; f_801899B0(c); // 801AB9D8
  c->r[0]=c->r[0]|0x00000000u; // 801AB9DC
L_801AB9E0:;
  IRQCHK(c); goto L_801AB9E0; // 801AB9E0
L_801AB9E4:;
  c->r[5]=R32(c->r[6]+0x0000000Cu); // 801AB9E4
  c->r[0]=c->r[5]+0x01150000u; // 801AB9E8
  cmpu(c,0,c->r[0],0x0000DAEDu); // 801AB9EC
  if (crb(c,2)) { goto L_801ABA04; } // 801AB9F0
  c->r[3]=c->r[31]+0x000002A8u; // 801AB9F4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AB9F8
  c->lr=0x801ABA00u; f_801899B0(c); // 801AB9FC
L_801ABA00:;
  IRQCHK(c); goto L_801ABA00; // 801ABA00
L_801ABA04:;
  W32(c->r[7]+c->r[8],c->r[4]); // 801ABA04
  c->r[0]=c->r[9]+0x00000001u; // 801ABA08
  cmps(c,0,(int32_t)c->r[0],4); // 801ABA0C
  W32(c->r[6]+0x00000004u,c->r[10]); // 801ABA10
  W8(c->r[6]+0x00000008u,c->r[10]); // 801ABA14
  W32(c->r[13]+0xFFFFB320u,c->r[0]); // 801ABA18
  if (crb(c,0)) { goto L_801ABA28; } // 801ABA1C
  c->r[0]=0u+0x00000000u; // 801ABA20
  W32(c->r[13]+0xFFFFB320u,c->r[0]); // 801ABA24
L_801ABA28:;
  c->r[4]=R32(c->r[13]+0xFFFFB31Cu); // 801ABA28
  c->r[5]=0u+0x802B0000u; // 801ABA2C
  c->r[6]=rotl(c->r[9],5)&0xFFFFFFE0u; // 801ABA30
  c->r[0]=c->r[4]+0x00000001u; // 801ABA34
  c->r[5]=c->r[5]+0x00006CA0u; // 801ABA38
  cmps(c,0,(int32_t)c->r[0],4); // 801ABA3C
  W32(c->r[13]+0xFFFFB31Cu,c->r[0]); // 801ABA40
  c->r[30]=c->r[5]+c->r[6]; // 801ABA44
  if (crb(c,0)) { goto L_801ABA54; } // 801ABA48
  c->r[0]=0u+0x00000000u; // 801ABA4C
  W32(c->r[13]+0xFFFFB31Cu,c->r[0]); // 801ABA50
L_801ABA54:;
  c->r[4]=R32(c->r[13]+0xFFFFB334u); // 801ABA54
  c->r[9]=0u+0x801B0000u; // 801ABA58
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801ABA5C
  c->r[5]=0u+0x00000012u; // 801ABA60
  W8(c->r[4]+c->r[0],c->r[5]); // 801ABA64
  c->r[7]=c->r[3]|c->r[3]; // 801ABA68
  c->r[10]=c->r[30]|c->r[30]; // 801ABA6C
  c->r[9]=c->r[9]+0xFFFFA560u; // 801ABA70
  c->r[0]=R32(c->r[13]+0xFFFFB31Cu); // 801ABA74
  c->r[4]=0u+0x00000012u; // 801ABA78
  c->r[5]=R32(c->r[13]+0xFFFFB334u); // 801ABA7C
  c->r[6]=0u+0x00000020u; // 801ABA80
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801ABA84
  c->r[3]=R32(c->r[13]+0xFFFFA888u); // 801ABA88
  c->r[5]=c->r[5]+c->r[0]; // 801ABA8C
  c->r[8]=0u+0x00000020u; // 801ABA90
  c->lr=0x801ABA98u; f_801BC3D0(c); // 801ABA94
  cmps(c,0,(int32_t)c->r[3],0); // 801ABA98
  if (crb(c,2)) { goto L_801ABAC0; } // 801ABA9C
  c->r[4]=c->r[3]|c->r[3]; // 801ABAA0
  c->r[3]=c->r[31]+0x00000768u; // 801ABAA4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801ABAA8
  c->lr=0x801ABAB0u; f_801899B0(c); // 801ABAAC
  c->r[0]=0u+0x00000000u; // 801ABAB0
  W8(c->r[30]+0x00000008u,c->r[0]); // 801ABAB4
  c->r[3]=0u+0x00000000u; // 801ABAB8
  goto L_801ABAC4; // 801ABABC
L_801ABAC0:;
  c->r[3]=0u+0x00000001u; // 801ABAC0
L_801ABAC4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801ABAC4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801ABAC8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801ABACC
  c->lr=c->r[0]; // 801ABAD0
  c->r[1]=c->r[1]+0x00000010u; // 801ABAD4
  return; // 801ABAD8
}

// DVDLowRequestError
void f_801ABAE0(Ctx* __restrict c) {
  trace_call(0x801ABAE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ABAE0
  c->r[0]=c->lr; // 801ABAE4
  c->r[7]=0u+0x802B0000u; // 801ABAE8
  c->r[9]=0u+0x00000001u; // 801ABAEC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801ABAF0
  c->r[7]=c->r[7]+0x00006CA0u; // 801ABAF4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801ABAF8
  c->r[31]=0u+0x80270000u; // 801ABAFC
  c->r[31]=c->r[31]+0x00005C78u; // 801ABB00
  W32(c->r[1]+0x00000008u,c->r[30]); // 801ABB04
  c->r[4]=R32(c->r[13]+0xFFFFB320u); // 801ABB08
  W8(c->r[13]+0xFFFFB318u,c->r[9]); // 801ABB0C
  c->r[8]=rotl(c->r[4],5)&0xFFFFFFE0u; // 801ABB10
  c->r[6]=c->r[7]+c->r[8]; // 801ABB14
  c->r[5]=R8(c->r[6]+0x00000008u); // 801ABB18
  c->r[0]=0u-c->r[5]; // 801ABB1C
  c->r[0]=c->r[0]|c->r[5]; // 801ABB20
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801ABB24
  cmpu(c,0,c->r[0],0x00000001u); // 801ABB28
  if (!crb(c,2)) { goto L_801ABB4C; } // 801ABB2C
  c->r[3]=c->r[31]+0x00000240u; // 801ABB30
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801ABB34
  c->lr=0x801ABB3Cu; f_801899B0(c); // 801ABB38
  c->r[3]=c->r[31]+0x00000278u; // 801ABB3C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801ABB40
  c->lr=0x801ABB48u; f_801899B0(c); // 801ABB44
L_801ABB48:;
  IRQCHK(c); goto L_801ABB48; // 801ABB48
L_801ABB4C:;
  c->r[5]=R32(c->r[6]+0x0000000Cu); // 801ABB4C
  c->r[0]=c->r[5]+0x01150000u; // 801ABB50
  cmpu(c,0,c->r[0],0x0000DAEDu); // 801ABB54
  if (crb(c,2)) { goto L_801ABB6C; } // 801ABB58
  c->r[3]=c->r[31]+0x000002A8u; // 801ABB5C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801ABB60
  c->lr=0x801ABB68u; f_801899B0(c); // 801ABB64
L_801ABB68:;
  IRQCHK(c); goto L_801ABB68; // 801ABB68
L_801ABB6C:;
  W32(c->r[7]+c->r[8],c->r[3]); // 801ABB6C
  c->r[0]=c->r[4]+0x00000001u; // 801ABB70
  cmps(c,0,(int32_t)c->r[0],4); // 801ABB74
  W32(c->r[6]+0x00000004u,c->r[9]); // 801ABB78
  W8(c->r[6]+0x00000008u,c->r[9]); // 801ABB7C
  W32(c->r[13]+0xFFFFB320u,c->r[0]); // 801ABB80
  if (crb(c,0)) { goto L_801ABB90; } // 801ABB84
  c->r[0]=0u+0x00000000u; // 801ABB88
  W32(c->r[13]+0xFFFFB320u,c->r[0]); // 801ABB8C
L_801ABB90:;
  c->r[3]=R32(c->r[13]+0xFFFFB31Cu); // 801ABB90
  c->r[5]=0u+0x802B0000u; // 801ABB94
  c->r[4]=rotl(c->r[4],5)&0xFFFFFFE0u; // 801ABB98
  c->r[0]=c->r[3]+0x00000001u; // 801ABB9C
  c->r[5]=c->r[5]+0x00006CA0u; // 801ABBA0
  cmps(c,0,(int32_t)c->r[0],4); // 801ABBA4
  W32(c->r[13]+0xFFFFB31Cu,c->r[0]); // 801ABBA8
  c->r[30]=c->r[5]+c->r[4]; // 801ABBAC
  if (crb(c,0)) { goto L_801ABBBC; } // 801ABBB0
  c->r[0]=0u+0x00000000u; // 801ABBB4
  W32(c->r[13]+0xFFFFB31Cu,c->r[0]); // 801ABBB8
L_801ABBBC:;
  c->r[3]=R32(c->r[13]+0xFFFFB334u); // 801ABBBC
  c->r[7]=0u+0x802B0000u; // 801ABBC0
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801ABBC4
  c->r[4]=0u+0x000000E0u; // 801ABBC8
  W8(c->r[3]+c->r[0],c->r[4]); // 801ABBCC
  c->r[9]=0u+0x801B0000u; // 801ABBD0
  c->r[10]=c->r[30]|c->r[30]; // 801ABBD4
  c->r[7]=c->r[7]+0x00006D20u; // 801ABBD8
  c->r[0]=R32(c->r[13]+0xFFFFB31Cu); // 801ABBDC
  c->r[9]=c->r[9]+0xFFFFA560u; // 801ABBE0
  c->r[5]=R32(c->r[13]+0xFFFFB334u); // 801ABBE4
  c->r[4]=0u+0x000000E0u; // 801ABBE8
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801ABBEC
  c->r[3]=R32(c->r[13]+0xFFFFA888u); // 801ABBF0
  c->r[5]=c->r[5]+c->r[0]; // 801ABBF4
  c->r[6]=0u+0x00000020u; // 801ABBF8
  c->r[8]=0u+0x00000020u; // 801ABBFC
  c->lr=0x801ABC04u; f_801BC3D0(c); // 801ABC00
  cmps(c,0,(int32_t)c->r[3],0); // 801ABC04
  if (crb(c,2)) { goto L_801ABC2C; } // 801ABC08
  c->r[4]=c->r[3]|c->r[3]; // 801ABC0C
  c->r[3]=c->r[31]+0x000007A0u; // 801ABC10
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801ABC14
  c->lr=0x801ABC1Cu; f_801899B0(c); // 801ABC18
  c->r[0]=0u+0x00000000u; // 801ABC1C
  W8(c->r[30]+0x00000008u,c->r[0]); // 801ABC20
  c->r[3]=0u+0x00000000u; // 801ABC24
  goto L_801ABC30; // 801ABC28
L_801ABC2C:;
  c->r[3]=0u+0x00000001u; // 801ABC2C
L_801ABC30:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801ABC30
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801ABC34
  c->r[30]=R32(c->r[1]+0x00000008u); // 801ABC38
  c->lr=c->r[0]; // 801ABC3C
  c->r[1]=c->r[1]+0x00000010u; // 801ABC40
  return; // 801ABC44
}

// DVDLowSetSpinupFlag
void f_801ABC50(Ctx* __restrict c) {
  trace_call(0x801ABC50u);
  W32(c->r[13]+0xFFFFB328u,c->r[3]); // 801ABC50
  c->r[3]=0u+0x00000001u; // 801ABC54
  return; // 801ABC58
}

// DVDLowReset
void f_801ABC60(Ctx* __restrict c) {
  trace_call(0x801ABC60u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ABC60
  c->r[0]=c->lr; // 801ABC64
  c->r[7]=0u+0x802B0000u; // 801ABC68
  c->r[9]=0u+0x00000001u; // 801ABC6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801ABC70
  c->r[7]=c->r[7]+0x00006CA0u; // 801ABC74
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801ABC78
  c->r[31]=0u+0x80270000u; // 801ABC7C
  c->r[31]=c->r[31]+0x00005C78u; // 801ABC80
  W32(c->r[1]+0x00000008u,c->r[30]); // 801ABC84
  c->r[4]=R32(c->r[13]+0xFFFFB320u); // 801ABC88
  W8(c->r[13]+0xFFFFB318u,c->r[9]); // 801ABC8C
  c->r[8]=rotl(c->r[4],5)&0xFFFFFFE0u; // 801ABC90
  c->r[6]=c->r[7]+c->r[8]; // 801ABC94
  c->r[5]=R8(c->r[6]+0x00000008u); // 801ABC98
  c->r[0]=0u-c->r[5]; // 801ABC9C
  c->r[0]=c->r[0]|c->r[5]; // 801ABCA0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801ABCA4
  cmpu(c,0,c->r[0],0x00000001u); // 801ABCA8
  if (!crb(c,2)) { goto L_801ABCCC; } // 801ABCAC
  c->r[3]=c->r[31]+0x00000240u; // 801ABCB0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801ABCB4
  c->lr=0x801ABCBCu; f_801899B0(c); // 801ABCB8
  c->r[3]=c->r[31]+0x00000278u; // 801ABCBC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801ABCC0
  c->lr=0x801ABCC8u; f_801899B0(c); // 801ABCC4
L_801ABCC8:;
  IRQCHK(c); goto L_801ABCC8; // 801ABCC8
L_801ABCCC:;
  c->r[5]=R32(c->r[6]+0x0000000Cu); // 801ABCCC
  c->r[0]=c->r[5]+0x01150000u; // 801ABCD0
  cmpu(c,0,c->r[0],0x0000DAEDu); // 801ABCD4
  if (crb(c,2)) { goto L_801ABCEC; } // 801ABCD8
  c->r[3]=c->r[31]+0x000002A8u; // 801ABCDC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801ABCE0
  c->lr=0x801ABCE8u; f_801899B0(c); // 801ABCE4
L_801ABCE8:;
  IRQCHK(c); goto L_801ABCE8; // 801ABCE8
L_801ABCEC:;
  W32(c->r[7]+c->r[8],c->r[3]); // 801ABCEC
  c->r[0]=c->r[4]+0x00000001u; // 801ABCF0
  cmps(c,0,(int32_t)c->r[0],4); // 801ABCF4
  W32(c->r[6]+0x00000004u,c->r[9]); // 801ABCF8
  W8(c->r[6]+0x00000008u,c->r[9]); // 801ABCFC
  W32(c->r[13]+0xFFFFB320u,c->r[0]); // 801ABD00
  if (crb(c,0)) { goto L_801ABD10; } // 801ABD04
  c->r[0]=0u+0x00000000u; // 801ABD08
  W32(c->r[13]+0xFFFFB320u,c->r[0]); // 801ABD0C
L_801ABD10:;
  c->r[3]=R32(c->r[13]+0xFFFFB31Cu); // 801ABD10
  c->r[5]=0u+0x802B0000u; // 801ABD14
  c->r[4]=rotl(c->r[4],5)&0xFFFFFFE0u; // 801ABD18
  c->r[0]=c->r[3]+0x00000001u; // 801ABD1C
  c->r[5]=c->r[5]+0x00006CA0u; // 801ABD20
  cmps(c,0,(int32_t)c->r[0],4); // 801ABD24
  W32(c->r[13]+0xFFFFB31Cu,c->r[0]); // 801ABD28
  c->r[30]=c->r[5]+c->r[4]; // 801ABD2C
  if (crb(c,0)) { goto L_801ABD3C; } // 801ABD30
  c->r[0]=0u+0x00000000u; // 801ABD34
  W32(c->r[13]+0xFFFFB31Cu,c->r[0]); // 801ABD38
L_801ABD3C:;
  c->r[3]=R32(c->r[13]+0xFFFFB334u); // 801ABD3C
  c->r[9]=0u+0x801B0000u; // 801ABD40
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801ABD44
  c->r[4]=0u+0x0000008Au; // 801ABD48
  W8(c->r[3]+c->r[0],c->r[4]); // 801ABD4C
  c->r[10]=c->r[30]|c->r[30]; // 801ABD50
  c->r[9]=c->r[9]+0xFFFFA560u; // 801ABD54
  c->r[4]=0u+0x0000008Au; // 801ABD58
  c->r[0]=R32(c->r[13]+0xFFFFB31Cu); // 801ABD5C
  c->r[6]=0u+0x00000020u; // 801ABD60
  c->r[3]=R32(c->r[13]+0xFFFFB334u); // 801ABD64
  c->r[7]=0u+0x00000000u; // 801ABD68
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801ABD6C
  c->r[5]=R32(c->r[13]+0xFFFFB328u); // 801ABD70
  c->r[3]=c->r[3]+c->r[0]; // 801ABD74
  c->r[8]=0u+0x00000000u; // 801ABD78
  W32(c->r[3]+0x00000004u,c->r[5]); // 801ABD7C
  c->r[0]=R32(c->r[13]+0xFFFFB31Cu); // 801ABD80
  c->r[5]=R32(c->r[13]+0xFFFFB334u); // 801ABD84
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801ABD88
  c->r[3]=R32(c->r[13]+0xFFFFA888u); // 801ABD8C
  c->r[5]=c->r[5]+c->r[0]; // 801ABD90
  c->lr=0x801ABD98u; f_801BC3D0(c); // 801ABD94
  cmps(c,0,(int32_t)c->r[3],0); // 801ABD98
  if (crb(c,2)) { goto L_801ABDC0; } // 801ABD9C
  c->r[4]=c->r[3]|c->r[3]; // 801ABDA0
  c->r[3]=c->r[31]+0x00000860u; // 801ABDA4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801ABDA8
  c->lr=0x801ABDB0u; f_801899B0(c); // 801ABDAC
  c->r[0]=0u+0x00000000u; // 801ABDB0
  W8(c->r[30]+0x00000008u,c->r[0]); // 801ABDB4
  c->r[3]=0u+0x00000000u; // 801ABDB8
  goto L_801ABDC4; // 801ABDBC
L_801ABDC0:;
  c->r[3]=0u+0x00000001u; // 801ABDC0
L_801ABDC4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801ABDC4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801ABDC8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801ABDCC
  c->lr=c->r[0]; // 801ABDD0
  c->r[1]=c->r[1]+0x00000010u; // 801ABDD4
  return; // 801ABDD8
}

// DVDLowAudioBufferConfig
void f_801ABDE0(Ctx* __restrict c) {
  trace_call(0x801ABDE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ABDE0
  c->r[0]=c->lr; // 801ABDE4
  c->r[8]=0u+0x802B0000u; // 801ABDE8
  c->r[11]=0u+0x00000001u; // 801ABDEC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801ABDF0
  c->r[8]=c->r[8]+0x00006CA0u; // 801ABDF4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801ABDF8
  c->r[31]=0u+0x80270000u; // 801ABDFC
  c->r[31]=c->r[31]+0x00005C78u; // 801ABE00
  W32(c->r[1]+0x00000008u,c->r[30]); // 801ABE04
  c->r[10]=R32(c->r[13]+0xFFFFB320u); // 801ABE08
  W8(c->r[13]+0xFFFFB318u,c->r[11]); // 801ABE0C
  c->r[9]=rotl(c->r[10],5)&0xFFFFFFE0u; // 801ABE10
  c->r[7]=c->r[8]+c->r[9]; // 801ABE14
  c->r[6]=R8(c->r[7]+0x00000008u); // 801ABE18
  c->r[0]=0u-c->r[6]; // 801ABE1C
  c->r[0]=c->r[0]|c->r[6]; // 801ABE20
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801ABE24
  cmpu(c,0,c->r[0],0x00000001u); // 801ABE28
  if (!crb(c,2)) { goto L_801ABE54; } // 801ABE2C
  c->r[4]=c->r[10]|c->r[10]; // 801ABE30
  c->r[3]=c->r[31]+0x00000240u; // 801ABE34
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801ABE38
  c->lr=0x801ABE40u; f_801899B0(c); // 801ABE3C
  c->r[3]=c->r[31]+0x00000278u; // 801ABE40
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801ABE44
  c->lr=0x801ABE4Cu; f_801899B0(c); // 801ABE48
  c->r[0]=c->r[0]|0x00000000u; // 801ABE4C
L_801ABE50:;
  IRQCHK(c); goto L_801ABE50; // 801ABE50
L_801ABE54:;
  c->r[6]=R32(c->r[7]+0x0000000Cu); // 801ABE54
  c->r[0]=c->r[6]+0x01150000u; // 801ABE58
  cmpu(c,0,c->r[0],0x0000DAEDu); // 801ABE5C
  if (crb(c,2)) { goto L_801ABE74; } // 801ABE60
  c->r[3]=c->r[31]+0x000002A8u; // 801ABE64
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801ABE68
  c->lr=0x801ABE70u; f_801899B0(c); // 801ABE6C
L_801ABE70:;
  IRQCHK(c); goto L_801ABE70; // 801ABE70
L_801ABE74:;
  W32(c->r[8]+c->r[9],c->r[5]); // 801ABE74
  c->r[0]=c->r[10]+0x00000001u; // 801ABE78
  cmps(c,0,(int32_t)c->r[0],4); // 801ABE7C
  W32(c->r[7]+0x00000004u,c->r[11]); // 801ABE80
  W8(c->r[7]+0x00000008u,c->r[11]); // 801ABE84
  W32(c->r[13]+0xFFFFB320u,c->r[0]); // 801ABE88
  if (crb(c,0)) { goto L_801ABE98; } // 801ABE8C
  c->r[0]=0u+0x00000000u; // 801ABE90
  W32(c->r[13]+0xFFFFB320u,c->r[0]); // 801ABE94
L_801ABE98:;
  c->r[5]=R32(c->r[13]+0xFFFFB31Cu); // 801ABE98
  c->r[6]=0u+0x802B0000u; // 801ABE9C
  c->r[7]=rotl(c->r[10],5)&0xFFFFFFE0u; // 801ABEA0
  c->r[0]=c->r[5]+0x00000001u; // 801ABEA4
  c->r[6]=c->r[6]+0x00006CA0u; // 801ABEA8
  cmps(c,0,(int32_t)c->r[0],4); // 801ABEAC
  W32(c->r[13]+0xFFFFB31Cu,c->r[0]); // 801ABEB0
  c->r[30]=c->r[6]+c->r[7]; // 801ABEB4
  if (crb(c,0)) { goto L_801ABEC4; } // 801ABEB8
  c->r[0]=0u+0x00000000u; // 801ABEBC
  W32(c->r[13]+0xFFFFB31Cu,c->r[0]); // 801ABEC0
L_801ABEC4:;
  c->r[5]=R32(c->r[13]+0xFFFFB334u); // 801ABEC4
  c->r[7]=0u+0x802B0000u; // 801ABEC8
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801ABECC
  c->r[6]=0u+0x000000E4u; // 801ABED0
  W8(c->r[5]+c->r[0],c->r[6]); // 801ABED4
  c->r[9]=0u+0x801B0000u; // 801ABED8
  c->r[10]=c->r[30]|c->r[30]; // 801ABEDC
  c->r[7]=c->r[7]+0x00006D20u; // 801ABEE0
  c->r[0]=R32(c->r[13]+0xFFFFB31Cu); // 801ABEE4
  c->r[9]=c->r[9]+0xFFFFA560u; // 801ABEE8
  c->r[5]=R32(c->r[13]+0xFFFFB334u); // 801ABEEC
  c->r[6]=0u+0x00000020u; // 801ABEF0
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801ABEF4
  c->r[8]=0u+0x00000020u; // 801ABEF8
  c->r[5]=c->r[5]+c->r[0]; // 801ABEFC
  W32(c->r[5]+0x00000004u,c->r[3]); // 801ABF00
  c->r[0]=R32(c->r[13]+0xFFFFB31Cu); // 801ABF04
  c->r[3]=R32(c->r[13]+0xFFFFB334u); // 801ABF08
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801ABF0C
  c->r[3]=c->r[3]+c->r[0]; // 801ABF10
  W32(c->r[3]+0x00000008u,c->r[4]); // 801ABF14
  c->r[4]=0u+0x000000E4u; // 801ABF18
  c->r[0]=R32(c->r[13]+0xFFFFB31Cu); // 801ABF1C
  c->r[5]=R32(c->r[13]+0xFFFFB334u); // 801ABF20
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801ABF24
  c->r[3]=R32(c->r[13]+0xFFFFA888u); // 801ABF28
  c->r[5]=c->r[5]+c->r[0]; // 801ABF2C
  c->lr=0x801ABF34u; f_801BC3D0(c); // 801ABF30
  cmps(c,0,(int32_t)c->r[3],0); // 801ABF34
  if (crb(c,2)) { goto L_801ABF5C; } // 801ABF38
  c->r[4]=c->r[3]|c->r[3]; // 801ABF3C
  c->r[3]=c->r[31]+0x00000898u; // 801ABF40
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801ABF44
  c->lr=0x801ABF4Cu; f_801899B0(c); // 801ABF48
  c->r[0]=0u+0x00000000u; // 801ABF4C
  W8(c->r[30]+0x00000008u,c->r[0]); // 801ABF50
  c->r[3]=0u+0x00000000u; // 801ABF54
  goto L_801ABF60; // 801ABF58
L_801ABF5C:;
  c->r[3]=0u+0x00000001u; // 801ABF5C
L_801ABF60:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801ABF60
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801ABF64
  c->r[30]=R32(c->r[1]+0x00000008u); // 801ABF68
  c->lr=c->r[0]; // 801ABF6C
  c->r[1]=c->r[1]+0x00000010u; // 801ABF70
  return; // 801ABF74
}

// DVDLowReportKey
void f_801ABF80(Ctx* __restrict c) {
  trace_call(0x801ABF80u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ABF80
  c->r[0]=c->lr; // 801ABF84
  c->r[9]=0u+0x802B0000u; // 801ABF88
  c->r[12]=0u+0x00000001u; // 801ABF8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801ABF90
  c->r[9]=c->r[9]+0x00006CA0u; // 801ABF94
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801ABF98
  c->r[31]=0u+0x80270000u; // 801ABF9C
  c->r[31]=c->r[31]+0x00005C78u; // 801ABFA0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801ABFA4
  c->r[11]=R32(c->r[13]+0xFFFFB320u); // 801ABFA8
  W8(c->r[13]+0xFFFFB318u,c->r[12]); // 801ABFAC
  c->r[10]=rotl(c->r[11],5)&0xFFFFFFE0u; // 801ABFB0
  c->r[8]=c->r[9]+c->r[10]; // 801ABFB4
  c->r[7]=R8(c->r[8]+0x00000008u); // 801ABFB8
  c->r[0]=0u-c->r[7]; // 801ABFBC
  c->r[0]=c->r[0]|c->r[7]; // 801ABFC0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801ABFC4
  cmpu(c,0,c->r[0],0x00000001u); // 801ABFC8
  if (!crb(c,2)) { goto L_801ABFF4; } // 801ABFCC
  c->r[4]=c->r[11]|c->r[11]; // 801ABFD0
  c->r[3]=c->r[31]+0x00000240u; // 801ABFD4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801ABFD8
  c->lr=0x801ABFE0u; f_801899B0(c); // 801ABFDC
  c->r[3]=c->r[31]+0x00000278u; // 801ABFE0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801ABFE4
  c->lr=0x801ABFECu; f_801899B0(c); // 801ABFE8
  c->r[0]=c->r[0]|0x00000000u; // 801ABFEC
L_801ABFF0:;
  IRQCHK(c); goto L_801ABFF0; // 801ABFF0
L_801ABFF4:;
  c->r[7]=R32(c->r[8]+0x0000000Cu); // 801ABFF4
  c->r[0]=c->r[7]+0x01150000u; // 801ABFF8
  cmpu(c,0,c->r[0],0x0000DAEDu); // 801ABFFC
  if (crb(c,2)) { goto L_801AC014; } // 801AC000
  c->r[3]=c->r[31]+0x000002A8u; // 801AC004
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AC008
  c->lr=0x801AC010u; f_801899B0(c); // 801AC00C
L_801AC010:;
  IRQCHK(c); goto L_801AC010; // 801AC010
L_801AC014:;
  W32(c->r[9]+c->r[10],c->r[6]); // 801AC014
  c->r[0]=c->r[11]+0x00000001u; // 801AC018
  cmps(c,0,(int32_t)c->r[0],4); // 801AC01C
  W32(c->r[8]+0x00000004u,c->r[12]); // 801AC020
  W8(c->r[8]+0x00000008u,c->r[12]); // 801AC024
  W32(c->r[13]+0xFFFFB320u,c->r[0]); // 801AC028
  if (crb(c,0)) { goto L_801AC038; } // 801AC02C
  c->r[0]=0u+0x00000000u; // 801AC030
  W32(c->r[13]+0xFFFFB320u,c->r[0]); // 801AC034
L_801AC038:;
  c->r[6]=R32(c->r[13]+0xFFFFB31Cu); // 801AC038
  c->r[7]=0u+0x802B0000u; // 801AC03C
  c->r[8]=rotl(c->r[11],5)&0xFFFFFFE0u; // 801AC040
  c->r[0]=c->r[6]+0x00000001u; // 801AC044
  c->r[7]=c->r[7]+0x00006CA0u; // 801AC048
  cmps(c,0,(int32_t)c->r[0],4); // 801AC04C
  W32(c->r[13]+0xFFFFB31Cu,c->r[0]); // 801AC050
  c->r[30]=c->r[7]+c->r[8]; // 801AC054
  if (crb(c,0)) { goto L_801AC064; } // 801AC058
  c->r[0]=0u+0x00000000u; // 801AC05C
  W32(c->r[13]+0xFFFFB31Cu,c->r[0]); // 801AC060
L_801AC064:;
  c->r[6]=R32(c->r[13]+0xFFFFB334u); // 801AC064
  c->r[11]=rotl(c->r[4],16)&0x0000FFFFu; // 801AC068
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801AC06C
  c->r[4]=0u+0x000000A4u; // 801AC070
  W8(c->r[6]+c->r[0],c->r[4]); // 801AC074
  c->r[7]=c->r[3]|c->r[3]; // 801AC078
  c->r[9]=0u+0x801B0000u; // 801AC07C
  c->r[10]=c->r[30]|c->r[30]; // 801AC080
  c->r[0]=R32(c->r[13]+0xFFFFB31Cu); // 801AC084
  c->r[9]=c->r[9]+0xFFFFA560u; // 801AC088
  c->r[3]=R32(c->r[13]+0xFFFFB334u); // 801AC08C
  c->r[4]=0u+0x000000A4u; // 801AC090
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801AC094
  c->r[6]=0u+0x00000020u; // 801AC098
  c->r[3]=c->r[3]+c->r[0]; // 801AC09C
  c->r[8]=0u+0x00000020u; // 801AC0A0
  W32(c->r[3]+0x00000004u,c->r[11]); // 801AC0A4
  c->r[0]=R32(c->r[13]+0xFFFFB31Cu); // 801AC0A8
  c->r[3]=R32(c->r[13]+0xFFFFB334u); // 801AC0AC
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801AC0B0
  c->r[3]=c->r[3]+c->r[0]; // 801AC0B4
  W32(c->r[3]+0x00000008u,c->r[5]); // 801AC0B8
  c->r[0]=R32(c->r[13]+0xFFFFB31Cu); // 801AC0BC
  c->r[5]=R32(c->r[13]+0xFFFFB334u); // 801AC0C0
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801AC0C4
  c->r[3]=R32(c->r[13]+0xFFFFA888u); // 801AC0C8
  c->r[5]=c->r[5]+c->r[0]; // 801AC0CC
  c->lr=0x801AC0D4u; f_801BC3D0(c); // 801AC0D0
  cmps(c,0,(int32_t)c->r[3],0); // 801AC0D4
  if (crb(c,2)) { goto L_801AC0FC; } // 801AC0D8
  c->r[4]=c->r[3]|c->r[3]; // 801AC0DC
  c->r[3]=c->r[31]+0x00000A98u; // 801AC0E0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AC0E4
  c->lr=0x801AC0ECu; f_801899B0(c); // 801AC0E8
  c->r[0]=0u+0x00000000u; // 801AC0EC
  W8(c->r[30]+0x00000008u,c->r[0]); // 801AC0F0
  c->r[3]=0u+0x00000000u; // 801AC0F4
  goto L_801AC100; // 801AC0F8
L_801AC0FC:;
  c->r[3]=0u+0x00000001u; // 801AC0FC
L_801AC100:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AC100
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AC104
  c->r[30]=R32(c->r[1]+0x00000008u); // 801AC108
  c->lr=c->r[0]; // 801AC10C
  c->r[1]=c->r[1]+0x00000010u; // 801AC110
  return; // 801AC114
}

// DVDLowSetMaximumRotation
void f_801AC120(Ctx* __restrict c) {
  trace_call(0x801AC120u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AC120
  c->r[0]=c->lr; // 801AC124
  c->r[7]=0u+0x802B0000u; // 801AC128
  c->r[10]=0u+0x00000001u; // 801AC12C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AC130
  c->r[7]=c->r[7]+0x00006CA0u; // 801AC134
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AC138
  c->r[31]=0u+0x80270000u; // 801AC13C
  c->r[31]=c->r[31]+0x00005C78u; // 801AC140
  W32(c->r[1]+0x00000008u,c->r[30]); // 801AC144
  c->r[9]=R32(c->r[13]+0xFFFFB320u); // 801AC148
  W8(c->r[13]+0xFFFFB318u,c->r[10]); // 801AC14C
  c->r[8]=rotl(c->r[9],5)&0xFFFFFFE0u; // 801AC150
  c->r[6]=c->r[7]+c->r[8]; // 801AC154
  c->r[5]=R8(c->r[6]+0x00000008u); // 801AC158
  c->r[0]=0u-c->r[5]; // 801AC15C
  c->r[0]=c->r[0]|c->r[5]; // 801AC160
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801AC164
  cmpu(c,0,c->r[0],0x00000001u); // 801AC168
  if (!crb(c,2)) { goto L_801AC194; } // 801AC16C
  c->r[4]=c->r[9]|c->r[9]; // 801AC170
  c->r[3]=c->r[31]+0x00000240u; // 801AC174
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AC178
  c->lr=0x801AC180u; f_801899B0(c); // 801AC17C
  c->r[3]=c->r[31]+0x00000278u; // 801AC180
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AC184
  c->lr=0x801AC18Cu; f_801899B0(c); // 801AC188
  c->r[0]=c->r[0]|0x00000000u; // 801AC18C
L_801AC190:;
  IRQCHK(c); goto L_801AC190; // 801AC190
L_801AC194:;
  c->r[5]=R32(c->r[6]+0x0000000Cu); // 801AC194
  c->r[0]=c->r[5]+0x01150000u; // 801AC198
  cmpu(c,0,c->r[0],0x0000DAEDu); // 801AC19C
  if (crb(c,2)) { goto L_801AC1B4; } // 801AC1A0
  c->r[3]=c->r[31]+0x000002A8u; // 801AC1A4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AC1A8
  c->lr=0x801AC1B0u; f_801899B0(c); // 801AC1AC
L_801AC1B0:;
  IRQCHK(c); goto L_801AC1B0; // 801AC1B0
L_801AC1B4:;
  W32(c->r[7]+c->r[8],c->r[4]); // 801AC1B4
  c->r[0]=c->r[9]+0x00000001u; // 801AC1B8
  cmps(c,0,(int32_t)c->r[0],4); // 801AC1BC
  W32(c->r[6]+0x00000004u,c->r[10]); // 801AC1C0
  W8(c->r[6]+0x00000008u,c->r[10]); // 801AC1C4
  W32(c->r[13]+0xFFFFB320u,c->r[0]); // 801AC1C8
  if (crb(c,0)) { goto L_801AC1D8; } // 801AC1CC
  c->r[0]=0u+0x00000000u; // 801AC1D0
  W32(c->r[13]+0xFFFFB320u,c->r[0]); // 801AC1D4
L_801AC1D8:;
  c->r[4]=R32(c->r[13]+0xFFFFB31Cu); // 801AC1D8
  c->r[5]=0u+0x802B0000u; // 801AC1DC
  c->r[6]=rotl(c->r[9],5)&0xFFFFFFE0u; // 801AC1E0
  c->r[0]=c->r[4]+0x00000001u; // 801AC1E4
  c->r[5]=c->r[5]+0x00006CA0u; // 801AC1E8
  cmps(c,0,(int32_t)c->r[0],4); // 801AC1EC
  W32(c->r[13]+0xFFFFB31Cu,c->r[0]); // 801AC1F0
  c->r[30]=c->r[5]+c->r[6]; // 801AC1F4
  if (crb(c,0)) { goto L_801AC204; } // 801AC1F8
  c->r[0]=0u+0x00000000u; // 801AC1FC
  W32(c->r[13]+0xFFFFB31Cu,c->r[0]); // 801AC200
L_801AC204:;
  c->r[4]=R32(c->r[13]+0xFFFFB334u); // 801AC204
  c->r[9]=0u+0x801B0000u; // 801AC208
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801AC20C
  c->r[5]=0u+0x000000DDu; // 801AC210
  W8(c->r[4]+c->r[0],c->r[5]); // 801AC214
  c->r[5]=rotl(c->r[3],16)&0x00000003u; // 801AC218
  c->r[10]=c->r[30]|c->r[30]; // 801AC21C
  c->r[9]=c->r[9]+0xFFFFA560u; // 801AC220
  c->r[0]=R32(c->r[13]+0xFFFFB31Cu); // 801AC224
  c->r[4]=0u+0x000000DDu; // 801AC228
  c->r[3]=R32(c->r[13]+0xFFFFB334u); // 801AC22C
  c->r[6]=0u+0x00000020u; // 801AC230
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801AC234
  c->r[7]=0u+0x00000000u; // 801AC238
  c->r[3]=c->r[3]+c->r[0]; // 801AC23C
  c->r[8]=0u+0x00000000u; // 801AC240
  W32(c->r[3]+0x00000004u,c->r[5]); // 801AC244
  c->r[0]=R32(c->r[13]+0xFFFFB31Cu); // 801AC248
  c->r[5]=R32(c->r[13]+0xFFFFB334u); // 801AC24C
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801AC250
  c->r[3]=R32(c->r[13]+0xFFFFA888u); // 801AC254
  c->r[5]=c->r[5]+c->r[0]; // 801AC258
  c->lr=0x801AC260u; f_801BC3D0(c); // 801AC25C
  cmps(c,0,(int32_t)c->r[3],0); // 801AC260
  if (crb(c,2)) { goto L_801AC288; } // 801AC264
  c->r[4]=c->r[3]|c->r[3]; // 801AC268
  c->r[3]=c->r[31]+0x00000C4Cu; // 801AC26C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AC270
  c->lr=0x801AC278u; f_801899B0(c); // 801AC274
  c->r[0]=0u+0x00000000u; // 801AC278
  W8(c->r[30]+0x00000008u,c->r[0]); // 801AC27C
  c->r[3]=0u+0x00000000u; // 801AC280
  goto L_801AC28C; // 801AC284
L_801AC288:;
  c->r[3]=0u+0x00000001u; // 801AC288
L_801AC28C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AC28C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AC290
  c->r[30]=R32(c->r[1]+0x00000008u); // 801AC294
  c->lr=c->r[0]; // 801AC298
  c->r[1]=c->r[1]+0x00000010u; // 801AC29C
  return; // 801AC2A0
}

// DVDLowRead
void f_801AC2B0(Ctx* __restrict c) {
  trace_call(0x801AC2B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AC2B0
  c->r[0]=c->lr; // 801AC2B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AC2B8
  c->r[0]=rotl(c->r[3],0)&0x0000001Fu; cr0(c,c->r[0]); // 801AC2BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AC2C0
  c->r[31]=0u+0x80270000u; // 801AC2C4
  c->r[31]=c->r[31]+0x00005C78u; // 801AC2C8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801AC2CC
  if (crb(c,2)) { goto L_801AC2E8; } // 801AC2D0
  c->r[3]=c->r[31]+0x00000C8Cu; // 801AC2D4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AC2D8
  c->lr=0x801AC2E0u; f_801899B0(c); // 801AC2DC
  c->r[3]=0u+0x00000000u; // 801AC2E0
  goto L_801AC448; // 801AC2E4
L_801AC2E8:;
  c->r[11]=R32(c->r[13]+0xFFFFB320u); // 801AC2E8
  c->r[9]=0u+0x802B0000u; // 801AC2EC
  c->r[12]=0u+0x00000001u; // 801AC2F0
  W8(c->r[13]+0xFFFFB318u,c->r[12]); // 801AC2F4
  c->r[10]=rotl(c->r[11],5)&0xFFFFFFE0u; // 801AC2F8
  c->r[9]=c->r[9]+0x00006CA0u; // 801AC2FC
  c->r[8]=c->r[9]+c->r[10]; // 801AC300
  c->r[7]=R8(c->r[8]+0x00000008u); // 801AC304
  c->r[0]=0u-c->r[7]; // 801AC308
  c->r[0]=c->r[0]|c->r[7]; // 801AC30C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801AC310
  cmpu(c,0,c->r[0],0x00000001u); // 801AC314
  if (!crb(c,2)) { goto L_801AC33C; } // 801AC318
  c->r[4]=c->r[11]|c->r[11]; // 801AC31C
  c->r[3]=c->r[31]+0x00000240u; // 801AC320
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AC324
  c->lr=0x801AC32Cu; f_801899B0(c); // 801AC328
  c->r[3]=c->r[31]+0x00000278u; // 801AC32C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AC330
  c->lr=0x801AC338u; f_801899B0(c); // 801AC334
L_801AC338:;
  IRQCHK(c); goto L_801AC338; // 801AC338
L_801AC33C:;
  c->r[7]=R32(c->r[8]+0x0000000Cu); // 801AC33C
  c->r[0]=c->r[7]+0x01150000u; // 801AC340
  cmpu(c,0,c->r[0],0x0000DAEDu); // 801AC344
  if (crb(c,2)) { goto L_801AC35C; } // 801AC348
  c->r[3]=c->r[31]+0x000002A8u; // 801AC34C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AC350
  c->lr=0x801AC358u; f_801899B0(c); // 801AC354
L_801AC358:;
  IRQCHK(c); goto L_801AC358; // 801AC358
L_801AC35C:;
  W32(c->r[9]+c->r[10],c->r[6]); // 801AC35C
  c->r[0]=c->r[11]+0x00000001u; // 801AC360
  cmps(c,0,(int32_t)c->r[0],4); // 801AC364
  W32(c->r[8]+0x00000004u,c->r[12]); // 801AC368
  W8(c->r[8]+0x00000008u,c->r[12]); // 801AC36C
  W32(c->r[13]+0xFFFFB320u,c->r[0]); // 801AC370
  if (crb(c,0)) { goto L_801AC380; } // 801AC374
  c->r[0]=0u+0x00000000u; // 801AC378
  W32(c->r[13]+0xFFFFB320u,c->r[0]); // 801AC37C
L_801AC380:;
  c->r[6]=R32(c->r[13]+0xFFFFB31Cu); // 801AC380
  c->r[7]=0u+0x802B0000u; // 801AC384
  W32(c->r[13]+0xFFFFB32Cu,c->r[4]); // 801AC388
  c->r[8]=rotl(c->r[11],5)&0xFFFFFFE0u; // 801AC38C
  c->r[0]=c->r[6]+0x00000001u; // 801AC390
  c->r[7]=c->r[7]+0x00006CA0u; // 801AC394
  cmps(c,0,(int32_t)c->r[0],4); // 801AC398
  W32(c->r[13]+0xFFFFB31Cu,c->r[0]); // 801AC39C
  c->r[30]=c->r[7]+c->r[8]; // 801AC3A0
  if (crb(c,0)) { goto L_801AC3B0; } // 801AC3A4
  c->r[0]=0u+0x00000000u; // 801AC3A8
  W32(c->r[13]+0xFFFFB31Cu,c->r[0]); // 801AC3AC
L_801AC3B0:;
  c->r[6]=R32(c->r[13]+0xFFFFB334u); // 801AC3B0
  c->r[9]=0u+0x801B0000u; // 801AC3B4
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801AC3B8
  c->r[7]=0u+0x00000071u; // 801AC3BC
  W8(c->r[6]+c->r[0],c->r[7]); // 801AC3C0
  c->r[7]=c->r[3]|c->r[3]; // 801AC3C4
  c->r[8]=c->r[4]|c->r[4]; // 801AC3C8
  c->r[10]=c->r[30]|c->r[30]; // 801AC3CC
  c->r[0]=R32(c->r[13]+0xFFFFB31Cu); // 801AC3D0
  c->r[9]=c->r[9]+0xFFFFA560u; // 801AC3D4
  c->r[3]=R32(c->r[13]+0xFFFFB334u); // 801AC3D8
  c->r[6]=0u+0x00000020u; // 801AC3DC
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801AC3E0
  c->r[3]=c->r[3]+c->r[0]; // 801AC3E4
  W32(c->r[3]+0x00000004u,c->r[4]); // 801AC3E8
  c->r[4]=0u+0x00000071u; // 801AC3EC
  c->r[0]=R32(c->r[13]+0xFFFFB31Cu); // 801AC3F0
  c->r[3]=R32(c->r[13]+0xFFFFB334u); // 801AC3F4
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801AC3F8
  c->r[3]=c->r[3]+c->r[0]; // 801AC3FC
  W32(c->r[3]+0x00000008u,c->r[5]); // 801AC400
  c->r[0]=R32(c->r[13]+0xFFFFB31Cu); // 801AC404
  c->r[5]=R32(c->r[13]+0xFFFFB334u); // 801AC408
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801AC40C
  c->r[3]=R32(c->r[13]+0xFFFFA888u); // 801AC410
  c->r[5]=c->r[5]+c->r[0]; // 801AC414
  c->lr=0x801AC41Cu; f_801BC3D0(c); // 801AC418
  cmps(c,0,(int32_t)c->r[3],0); // 801AC41C
  if (crb(c,2)) { goto L_801AC444; } // 801AC420
  c->r[4]=c->r[3]|c->r[3]; // 801AC424
  c->r[3]=c->r[31]+0x00000CCCu; // 801AC428
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AC42C
  c->lr=0x801AC434u; f_801899B0(c); // 801AC430
  c->r[0]=0u+0x00000000u; // 801AC434
  W8(c->r[30]+0x00000008u,c->r[0]); // 801AC438
  c->r[3]=0u+0x00000000u; // 801AC43C
  goto L_801AC448; // 801AC440
L_801AC444:;
  c->r[3]=0u+0x00000001u; // 801AC444
L_801AC448:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AC448
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AC44C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801AC450
  c->lr=c->r[0]; // 801AC454
  c->r[1]=c->r[1]+0x00000010u; // 801AC458
  return; // 801AC45C
}

// DVDLowSeek
void f_801AC460(Ctx* __restrict c) {
  trace_call(0x801AC460u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AC460
  c->r[0]=c->lr; // 801AC464
  c->r[7]=0u+0x802B0000u; // 801AC468
  c->r[10]=0u+0x00000001u; // 801AC46C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AC470
  c->r[7]=c->r[7]+0x00006CA0u; // 801AC474
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AC478
  c->r[31]=0u+0x80270000u; // 801AC47C
  c->r[31]=c->r[31]+0x00005C78u; // 801AC480
  W32(c->r[1]+0x00000008u,c->r[30]); // 801AC484
  c->r[9]=R32(c->r[13]+0xFFFFB320u); // 801AC488
  W8(c->r[13]+0xFFFFB318u,c->r[10]); // 801AC48C
  c->r[8]=rotl(c->r[9],5)&0xFFFFFFE0u; // 801AC490
  c->r[6]=c->r[7]+c->r[8]; // 801AC494
  c->r[5]=R8(c->r[6]+0x00000008u); // 801AC498
  c->r[0]=0u-c->r[5]; // 801AC49C
  c->r[0]=c->r[0]|c->r[5]; // 801AC4A0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801AC4A4
  cmpu(c,0,c->r[0],0x00000001u); // 801AC4A8
  if (!crb(c,2)) { goto L_801AC4D4; } // 801AC4AC
  c->r[4]=c->r[9]|c->r[9]; // 801AC4B0
  c->r[3]=c->r[31]+0x00000240u; // 801AC4B4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AC4B8
  c->lr=0x801AC4C0u; f_801899B0(c); // 801AC4BC
  c->r[3]=c->r[31]+0x00000278u; // 801AC4C0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AC4C4
  c->lr=0x801AC4CCu; f_801899B0(c); // 801AC4C8
  c->r[0]=c->r[0]|0x00000000u; // 801AC4CC
L_801AC4D0:;
  IRQCHK(c); goto L_801AC4D0; // 801AC4D0
L_801AC4D4:;
  c->r[5]=R32(c->r[6]+0x0000000Cu); // 801AC4D4
  c->r[0]=c->r[5]+0x01150000u; // 801AC4D8
  cmpu(c,0,c->r[0],0x0000DAEDu); // 801AC4DC
  if (crb(c,2)) { goto L_801AC4F4; } // 801AC4E0
  c->r[3]=c->r[31]+0x000002A8u; // 801AC4E4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AC4E8
  c->lr=0x801AC4F0u; f_801899B0(c); // 801AC4EC
L_801AC4F0:;
  IRQCHK(c); goto L_801AC4F0; // 801AC4F0
L_801AC4F4:;
  W32(c->r[7]+c->r[8],c->r[4]); // 801AC4F4
  c->r[0]=c->r[9]+0x00000001u; // 801AC4F8
  cmps(c,0,(int32_t)c->r[0],4); // 801AC4FC
  W32(c->r[6]+0x00000004u,c->r[10]); // 801AC500
  W8(c->r[6]+0x00000008u,c->r[10]); // 801AC504
  W32(c->r[13]+0xFFFFB320u,c->r[0]); // 801AC508
  if (crb(c,0)) { goto L_801AC518; } // 801AC50C
  c->r[0]=0u+0x00000000u; // 801AC510
  W32(c->r[13]+0xFFFFB320u,c->r[0]); // 801AC514
L_801AC518:;
  c->r[4]=R32(c->r[13]+0xFFFFB31Cu); // 801AC518
  c->r[5]=0u+0x802B0000u; // 801AC51C
  c->r[6]=rotl(c->r[9],5)&0xFFFFFFE0u; // 801AC520
  c->r[0]=c->r[4]+0x00000001u; // 801AC524
  c->r[5]=c->r[5]+0x00006CA0u; // 801AC528
  cmps(c,0,(int32_t)c->r[0],4); // 801AC52C
  W32(c->r[13]+0xFFFFB31Cu,c->r[0]); // 801AC530
  c->r[30]=c->r[5]+c->r[6]; // 801AC534
  if (crb(c,0)) { goto L_801AC544; } // 801AC538
  c->r[0]=0u+0x00000000u; // 801AC53C
  W32(c->r[13]+0xFFFFB31Cu,c->r[0]); // 801AC540
L_801AC544:;
  c->r[4]=R32(c->r[13]+0xFFFFB334u); // 801AC544
  c->r[9]=0u+0x801B0000u; // 801AC548
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801AC54C
  c->r[5]=0u+0x000000ABu; // 801AC550
  W8(c->r[4]+c->r[0],c->r[5]); // 801AC554
  c->r[10]=c->r[30]|c->r[30]; // 801AC558
  c->r[9]=c->r[9]+0xFFFFA560u; // 801AC55C
  c->r[4]=0u+0x000000ABu; // 801AC560
  c->r[0]=R32(c->r[13]+0xFFFFB31Cu); // 801AC564
  c->r[6]=0u+0x00000020u; // 801AC568
  c->r[5]=R32(c->r[13]+0xFFFFB334u); // 801AC56C
  c->r[7]=0u+0x00000000u; // 801AC570
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801AC574
  c->r[8]=0u+0x00000000u; // 801AC578
  c->r[5]=c->r[5]+c->r[0]; // 801AC57C
  W32(c->r[5]+0x00000004u,c->r[3]); // 801AC580
  c->r[0]=R32(c->r[13]+0xFFFFB31Cu); // 801AC584
  c->r[5]=R32(c->r[13]+0xFFFFB334u); // 801AC588
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801AC58C
  c->r[3]=R32(c->r[13]+0xFFFFA888u); // 801AC590
  c->r[5]=c->r[5]+c->r[0]; // 801AC594
  c->lr=0x801AC59Cu; f_801BC3D0(c); // 801AC598
  cmps(c,0,(int32_t)c->r[3],0); // 801AC59C
  if (crb(c,2)) { goto L_801AC5C4; } // 801AC5A0
  c->r[4]=c->r[3]|c->r[3]; // 801AC5A4
  c->r[3]=c->r[31]+0x00000D00u; // 801AC5A8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AC5AC
  c->lr=0x801AC5B4u; f_801899B0(c); // 801AC5B0
  c->r[0]=0u+0x00000000u; // 801AC5B4
  W8(c->r[30]+0x00000008u,c->r[0]); // 801AC5B8
  c->r[3]=0u+0x00000000u; // 801AC5BC
  goto L_801AC5C8; // 801AC5C0
L_801AC5C4:;
  c->r[3]=0u+0x00000001u; // 801AC5C4
L_801AC5C8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AC5C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AC5CC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801AC5D0
  c->lr=c->r[0]; // 801AC5D4
  c->r[1]=c->r[1]+0x00000010u; // 801AC5D8
  return; // 801AC5DC
}

// DVDLowGetCoverRegister
void f_801AC5E0(Ctx* __restrict c) {
  trace_call(0x801AC5E0u);
  c->r[3]=0u+0x802B0000u; // 801AC5E0
  c->r[3]=c->r[3]+0x00006D20u; // 801AC5E4
  c->r[3]=R32(c->r[3]+0x00000004u); // 801AC5E8
  return; // 801AC5EC
}

// DVDLowGetStatusRegister
void f_801AC5F0(Ctx* __restrict c) {
  trace_call(0x801AC5F0u);
  c->r[3]=0u+0x802B0000u; // 801AC5F0
  c->r[3]=R32(c->r[3]+0x00006E20u); // 801AC5F4
  return; // 801AC5F8
}

// DVDLowGetControlRegister
void f_801AC600(Ctx* __restrict c) {
  trace_call(0x801AC600u);
  c->r[3]=0u+0x802B0000u; // 801AC600
  c->r[3]=R32(c->r[3]+0x00006E40u); // 801AC604
  return; // 801AC608
}

// DVDLowPrepareCoverRegister
void f_801AC610(Ctx* __restrict c) {
  trace_call(0x801AC610u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AC610
  c->r[0]=c->lr; // 801AC614
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AC618
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AC61C
  c->r[31]=0u+0x80270000u; // 801AC620
  c->r[31]=c->r[31]+0x00005C78u; // 801AC624
  W32(c->r[1]+0x00000008u,c->r[30]); // 801AC628
  c->r[4]=R32(c->r[13]+0xFFFFB31Cu); // 801AC62C
  c->r[0]=c->r[4]+0x00000001u; // 801AC630
  W32(c->r[13]+0xFFFFB31Cu,c->r[0]); // 801AC634
  cmps(c,0,(int32_t)c->r[0],4); // 801AC638
  if (crb(c,0)) { goto L_801AC648; } // 801AC63C
  c->r[0]=0u+0x00000000u; // 801AC640
  W32(c->r[13]+0xFFFFB31Cu,c->r[0]); // 801AC644
L_801AC648:;
  c->r[4]=R32(c->r[13]+0xFFFFB334u); // 801AC648
  c->r[7]=0u+0x802B0000u; // 801AC64C
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801AC650
  c->r[5]=0u+0x0000007Au; // 801AC654
  W8(c->r[4]+c->r[0],c->r[5]); // 801AC658
  c->r[9]=0u+0x00000001u; // 801AC65C
  c->r[7]=c->r[7]+0x00006CA0u; // 801AC660
  c->r[4]=R32(c->r[13]+0xFFFFB320u); // 801AC664
  W8(c->r[13]+0xFFFFB318u,c->r[9]); // 801AC668
  c->r[8]=rotl(c->r[4],5)&0xFFFFFFE0u; // 801AC66C
  c->r[6]=c->r[7]+c->r[8]; // 801AC670
  c->r[5]=R8(c->r[6]+0x00000008u); // 801AC674
  c->r[0]=0u-c->r[5]; // 801AC678
  c->r[0]=c->r[0]|c->r[5]; // 801AC67C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801AC680
  cmpu(c,0,c->r[0],0x00000001u); // 801AC684
  if (!crb(c,2)) { goto L_801AC6AC; } // 801AC688
  c->r[3]=c->r[31]+0x00000240u; // 801AC68C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AC690
  c->lr=0x801AC698u; f_801899B0(c); // 801AC694
  c->r[3]=c->r[31]+0x00000278u; // 801AC698
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AC69C
  c->lr=0x801AC6A4u; f_801899B0(c); // 801AC6A0
  c->r[0]=c->r[0]|0x00000000u; // 801AC6A4
L_801AC6A8:;
  IRQCHK(c); goto L_801AC6A8; // 801AC6A8
L_801AC6AC:;
  c->r[5]=R32(c->r[6]+0x0000000Cu); // 801AC6AC
  c->r[0]=c->r[5]+0x01150000u; // 801AC6B0
  cmpu(c,0,c->r[0],0x0000DAEDu); // 801AC6B4
  if (crb(c,2)) { goto L_801AC6CC; } // 801AC6B8
  c->r[3]=c->r[31]+0x000002A8u; // 801AC6BC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AC6C0
  c->lr=0x801AC6C8u; f_801899B0(c); // 801AC6C4
L_801AC6C8:;
  IRQCHK(c); goto L_801AC6C8; // 801AC6C8
L_801AC6CC:;
  W32(c->r[7]+c->r[8],c->r[3]); // 801AC6CC
  c->r[0]=c->r[4]+0x00000001u; // 801AC6D0
  cmps(c,0,(int32_t)c->r[0],4); // 801AC6D4
  W32(c->r[6]+0x00000004u,c->r[9]); // 801AC6D8
  W8(c->r[6]+0x00000008u,c->r[9]); // 801AC6DC
  W32(c->r[13]+0xFFFFB320u,c->r[0]); // 801AC6E0
  if (crb(c,0)) { goto L_801AC6F0; } // 801AC6E4
  c->r[0]=0u+0x00000000u; // 801AC6E8
  W32(c->r[13]+0xFFFFB320u,c->r[0]); // 801AC6EC
L_801AC6F0:;
  c->r[0]=R32(c->r[13]+0xFFFFB31Cu); // 801AC6F0
  c->r[3]=0u+0x802B0000u; // 801AC6F4
  c->r[5]=rotl(c->r[4],5)&0xFFFFFFE0u; // 801AC6F8
  c->r[4]=R32(c->r[13]+0xFFFFB334u); // 801AC6FC
  c->r[3]=c->r[3]+0x00006CA0u; // 801AC700
  c->r[7]=0u+0x802B0000u; // 801AC704
  c->r[30]=c->r[3]+c->r[5]; // 801AC708
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801AC70C
  c->r[9]=0u+0x801B0000u; // 801AC710
  c->r[3]=R32(c->r[13]+0xFFFFA888u); // 801AC714
  c->r[5]=c->r[4]+c->r[0]; // 801AC718
  c->r[10]=c->r[30]|c->r[30]; // 801AC71C
  c->r[7]=c->r[7]+0x00006D40u; // 801AC720
  c->r[9]=c->r[9]+0xFFFFA620u; // 801AC724
  c->r[4]=0u+0x0000007Au; // 801AC728
  c->r[6]=0u+0x00000020u; // 801AC72C
  c->r[8]=0u+0x00000020u; // 801AC730
  c->lr=0x801AC738u; f_801BC3D0(c); // 801AC734
  cmps(c,0,(int32_t)c->r[3],0); // 801AC738
  if (crb(c,2)) { goto L_801AC760; } // 801AC73C
  c->r[4]=c->r[3]|c->r[3]; // 801AC740
  c->r[3]=c->r[31]+0x00000DB0u; // 801AC744
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AC748
  c->lr=0x801AC750u; f_801899B0(c); // 801AC74C
  c->r[0]=0u+0x00000000u; // 801AC750
  W8(c->r[30]+0x00000008u,c->r[0]); // 801AC754
  c->r[3]=0u+0x00000000u; // 801AC758
  goto L_801AC764; // 801AC75C
L_801AC760:;
  c->r[3]=0u+0x00000001u; // 801AC760
L_801AC764:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AC764
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AC768
  c->r[30]=R32(c->r[1]+0x00000008u); // 801AC76C
  c->lr=c->r[0]; // 801AC770
  c->r[1]=c->r[1]+0x00000010u; // 801AC774
  return; // 801AC778
}

// DVDLowPrepareStatusRegister
void f_801AC780(Ctx* __restrict c) {
  trace_call(0x801AC780u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AC780
  c->r[0]=c->lr; // 801AC784
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AC788
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AC78C
  c->r[31]=0u+0x80270000u; // 801AC790
  c->r[31]=c->r[31]+0x00005C78u; // 801AC794
  W32(c->r[1]+0x00000008u,c->r[30]); // 801AC798
  c->r[4]=R32(c->r[13]+0xFFFFB31Cu); // 801AC79C
  c->r[0]=c->r[4]+0x00000001u; // 801AC7A0
  W32(c->r[13]+0xFFFFB31Cu,c->r[0]); // 801AC7A4
  cmps(c,0,(int32_t)c->r[0],4); // 801AC7A8
  if (crb(c,0)) { goto L_801AC7B8; } // 801AC7AC
  c->r[0]=0u+0x00000000u; // 801AC7B0
  W32(c->r[13]+0xFFFFB31Cu,c->r[0]); // 801AC7B4
L_801AC7B8:;
  c->r[4]=R32(c->r[13]+0xFFFFB334u); // 801AC7B8
  c->r[7]=0u+0x802B0000u; // 801AC7BC
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801AC7C0
  c->r[5]=0u+0x00000095u; // 801AC7C4
  W8(c->r[4]+c->r[0],c->r[5]); // 801AC7C8
  c->r[9]=0u+0x00000001u; // 801AC7CC
  c->r[7]=c->r[7]+0x00006CA0u; // 801AC7D0
  c->r[4]=R32(c->r[13]+0xFFFFB320u); // 801AC7D4
  W8(c->r[13]+0xFFFFB318u,c->r[9]); // 801AC7D8
  c->r[8]=rotl(c->r[4],5)&0xFFFFFFE0u; // 801AC7DC
  c->r[6]=c->r[7]+c->r[8]; // 801AC7E0
  c->r[5]=R8(c->r[6]+0x00000008u); // 801AC7E4
  c->r[0]=0u-c->r[5]; // 801AC7E8
  c->r[0]=c->r[0]|c->r[5]; // 801AC7EC
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801AC7F0
  cmpu(c,0,c->r[0],0x00000001u); // 801AC7F4
  if (!crb(c,2)) { goto L_801AC81C; } // 801AC7F8
  c->r[3]=c->r[31]+0x00000240u; // 801AC7FC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AC800
  c->lr=0x801AC808u; f_801899B0(c); // 801AC804
  c->r[3]=c->r[31]+0x00000278u; // 801AC808
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AC80C
  c->lr=0x801AC814u; f_801899B0(c); // 801AC810
  c->r[0]=c->r[0]|0x00000000u; // 801AC814
L_801AC818:;
  IRQCHK(c); goto L_801AC818; // 801AC818
L_801AC81C:;
  c->r[5]=R32(c->r[6]+0x0000000Cu); // 801AC81C
  c->r[0]=c->r[5]+0x01150000u; // 801AC820
  cmpu(c,0,c->r[0],0x0000DAEDu); // 801AC824
  if (crb(c,2)) { goto L_801AC83C; } // 801AC828
  c->r[3]=c->r[31]+0x000002A8u; // 801AC82C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AC830
  c->lr=0x801AC838u; f_801899B0(c); // 801AC834
L_801AC838:;
  IRQCHK(c); goto L_801AC838; // 801AC838
L_801AC83C:;
  W32(c->r[7]+c->r[8],c->r[3]); // 801AC83C
  c->r[0]=c->r[4]+0x00000001u; // 801AC840
  cmps(c,0,(int32_t)c->r[0],4); // 801AC844
  W32(c->r[6]+0x00000004u,c->r[9]); // 801AC848
  W8(c->r[6]+0x00000008u,c->r[9]); // 801AC84C
  W32(c->r[13]+0xFFFFB320u,c->r[0]); // 801AC850
  if (crb(c,0)) { goto L_801AC860; } // 801AC854
  c->r[0]=0u+0x00000000u; // 801AC858
  W32(c->r[13]+0xFFFFB320u,c->r[0]); // 801AC85C
L_801AC860:;
  c->r[0]=R32(c->r[13]+0xFFFFB31Cu); // 801AC860
  c->r[3]=0u+0x802B0000u; // 801AC864
  c->r[5]=rotl(c->r[4],5)&0xFFFFFFE0u; // 801AC868
  c->r[4]=R32(c->r[13]+0xFFFFB334u); // 801AC86C
  c->r[3]=c->r[3]+0x00006CA0u; // 801AC870
  c->r[7]=0u+0x802B0000u; // 801AC874
  c->r[30]=c->r[3]+c->r[5]; // 801AC878
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801AC87C
  c->r[9]=0u+0x801B0000u; // 801AC880
  c->r[3]=R32(c->r[13]+0xFFFFA888u); // 801AC884
  c->r[5]=c->r[4]+c->r[0]; // 801AC888
  c->r[10]=c->r[30]|c->r[30]; // 801AC88C
  c->r[7]=c->r[7]+0x00006E20u; // 801AC890
  c->r[9]=c->r[9]+0xFFFFA560u; // 801AC894
  c->r[4]=0u+0x00000095u; // 801AC898
  c->r[6]=0u+0x00000020u; // 801AC89C
  c->r[8]=0u+0x00000020u; // 801AC8A0
  c->lr=0x801AC8A8u; f_801BC3D0(c); // 801AC8A4
  cmps(c,0,(int32_t)c->r[3],0); // 801AC8A8
  if (crb(c,2)) { goto L_801AC8D0; } // 801AC8AC
  c->r[4]=c->r[3]|c->r[3]; // 801AC8B0
  c->r[3]=c->r[31]+0x00000DF4u; // 801AC8B4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AC8B8
  c->lr=0x801AC8C0u; f_801899B0(c); // 801AC8BC
  c->r[0]=0u+0x00000000u; // 801AC8C0
  W8(c->r[30]+0x00000008u,c->r[0]); // 801AC8C4
  c->r[3]=0u+0x00000000u; // 801AC8C8
  goto L_801AC8D4; // 801AC8CC
L_801AC8D0:;
  c->r[3]=0u+0x00000001u; // 801AC8D0
L_801AC8D4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AC8D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AC8D8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801AC8DC
  c->lr=c->r[0]; // 801AC8E0
  c->r[1]=c->r[1]+0x00000010u; // 801AC8E4
  return; // 801AC8E8
}

// DVDLowPrepareControlRegister
void f_801AC8F0(Ctx* __restrict c) {
  trace_call(0x801AC8F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AC8F0
  c->r[0]=c->lr; // 801AC8F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AC8F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AC8FC
  c->r[31]=0u+0x80270000u; // 801AC900
  c->r[31]=c->r[31]+0x00005C78u; // 801AC904
  W32(c->r[1]+0x00000008u,c->r[30]); // 801AC908
  c->r[4]=R32(c->r[13]+0xFFFFB31Cu); // 801AC90C
  c->r[0]=c->r[4]+0x00000001u; // 801AC910
  W32(c->r[13]+0xFFFFB31Cu,c->r[0]); // 801AC914
  cmps(c,0,(int32_t)c->r[0],4); // 801AC918
  if (crb(c,0)) { goto L_801AC928; } // 801AC91C
  c->r[0]=0u+0x00000000u; // 801AC920
  W32(c->r[13]+0xFFFFB31Cu,c->r[0]); // 801AC924
L_801AC928:;
  c->r[4]=R32(c->r[13]+0xFFFFB334u); // 801AC928
  c->r[7]=0u+0x802B0000u; // 801AC92C
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801AC930
  c->r[5]=0u+0x00000096u; // 801AC934
  W8(c->r[4]+c->r[0],c->r[5]); // 801AC938
  c->r[9]=0u+0x00000001u; // 801AC93C
  c->r[7]=c->r[7]+0x00006CA0u; // 801AC940
  c->r[4]=R32(c->r[13]+0xFFFFB320u); // 801AC944
  W8(c->r[13]+0xFFFFB318u,c->r[9]); // 801AC948
  c->r[8]=rotl(c->r[4],5)&0xFFFFFFE0u; // 801AC94C
  c->r[6]=c->r[7]+c->r[8]; // 801AC950
  c->r[5]=R8(c->r[6]+0x00000008u); // 801AC954
  c->r[0]=0u-c->r[5]; // 801AC958
  c->r[0]=c->r[0]|c->r[5]; // 801AC95C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801AC960
  cmpu(c,0,c->r[0],0x00000001u); // 801AC964
  if (!crb(c,2)) { goto L_801AC98C; } // 801AC968
  c->r[3]=c->r[31]+0x00000240u; // 801AC96C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AC970
  c->lr=0x801AC978u; f_801899B0(c); // 801AC974
  c->r[3]=c->r[31]+0x00000278u; // 801AC978
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AC97C
  c->lr=0x801AC984u; f_801899B0(c); // 801AC980
  c->r[0]=c->r[0]|0x00000000u; // 801AC984
L_801AC988:;
  IRQCHK(c); goto L_801AC988; // 801AC988
L_801AC98C:;
  c->r[5]=R32(c->r[6]+0x0000000Cu); // 801AC98C
  c->r[0]=c->r[5]+0x01150000u; // 801AC990
  cmpu(c,0,c->r[0],0x0000DAEDu); // 801AC994
  if (crb(c,2)) { goto L_801AC9AC; } // 801AC998
  c->r[3]=c->r[31]+0x000002A8u; // 801AC99C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AC9A0
  c->lr=0x801AC9A8u; f_801899B0(c); // 801AC9A4
L_801AC9A8:;
  IRQCHK(c); goto L_801AC9A8; // 801AC9A8
L_801AC9AC:;
  W32(c->r[7]+c->r[8],c->r[3]); // 801AC9AC
  c->r[0]=c->r[4]+0x00000001u; // 801AC9B0
  cmps(c,0,(int32_t)c->r[0],4); // 801AC9B4
  W32(c->r[6]+0x00000004u,c->r[9]); // 801AC9B8
  W8(c->r[6]+0x00000008u,c->r[9]); // 801AC9BC
  W32(c->r[13]+0xFFFFB320u,c->r[0]); // 801AC9C0
  if (crb(c,0)) { goto L_801AC9D0; } // 801AC9C4
  c->r[0]=0u+0x00000000u; // 801AC9C8
  W32(c->r[13]+0xFFFFB320u,c->r[0]); // 801AC9CC
L_801AC9D0:;
  c->r[0]=R32(c->r[13]+0xFFFFB31Cu); // 801AC9D0
  c->r[3]=0u+0x802B0000u; // 801AC9D4
  c->r[5]=rotl(c->r[4],5)&0xFFFFFFE0u; // 801AC9D8
  c->r[4]=R32(c->r[13]+0xFFFFB334u); // 801AC9DC
  c->r[3]=c->r[3]+0x00006CA0u; // 801AC9E0
  c->r[7]=0u+0x802B0000u; // 801AC9E4
  c->r[30]=c->r[3]+c->r[5]; // 801AC9E8
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801AC9EC
  c->r[9]=0u+0x801B0000u; // 801AC9F0
  c->r[3]=R32(c->r[13]+0xFFFFA888u); // 801AC9F4
  c->r[5]=c->r[4]+c->r[0]; // 801AC9F8
  c->r[10]=c->r[30]|c->r[30]; // 801AC9FC
  c->r[7]=c->r[7]+0x00006E40u; // 801ACA00
  c->r[9]=c->r[9]+0xFFFFA560u; // 801ACA04
  c->r[4]=0u+0x00000096u; // 801ACA08
  c->r[6]=0u+0x00000020u; // 801ACA0C
  c->r[8]=0u+0x00000020u; // 801ACA10
  c->lr=0x801ACA18u; f_801BC3D0(c); // 801ACA14
  cmps(c,0,(int32_t)c->r[3],0); // 801ACA18
  if (crb(c,2)) { goto L_801ACA40; } // 801ACA1C
  c->r[4]=c->r[3]|c->r[3]; // 801ACA20
  c->r[3]=c->r[31]+0x00000E3Cu; // 801ACA24
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801ACA28
  c->lr=0x801ACA30u; f_801899B0(c); // 801ACA2C
  c->r[0]=0u+0x00000000u; // 801ACA30
  W8(c->r[30]+0x00000008u,c->r[0]); // 801ACA34
  c->r[3]=0u+0x00000000u; // 801ACA38
  goto L_801ACA44; // 801ACA3C
L_801ACA40:;
  c->r[3]=0u+0x00000001u; // 801ACA40
L_801ACA44:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801ACA44
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801ACA48
  c->r[30]=R32(c->r[1]+0x00000008u); // 801ACA4C
  c->lr=c->r[0]; // 801ACA50
  c->r[1]=c->r[1]+0x00000010u; // 801ACA54
  return; // 801ACA58
}

// DVDLowGetImmBufferReg
void f_801ACA60(Ctx* __restrict c) {
  trace_call(0x801ACA60u);
  c->r[3]=0u+0x802B0000u; // 801ACA60
  c->r[3]=R32(c->r[3]+0x00006D20u); // 801ACA64
  return; // 801ACA68
}

// DVDLowUnmaskStatusInterrupts
void f_801ACA70(Ctx* __restrict c) {
  trace_call(0x801ACA70u);
  c->r[3]=0u+0x00000001u; // 801ACA70
  return; // 801ACA74
}

// DVDLowMaskCoverInterrupt
void f_801ACA80(Ctx* __restrict c) {
  trace_call(0x801ACA80u);
  c->r[3]=0u+0x00000001u; // 801ACA80
  return; // 801ACA84
}

// DVDLowClearCoverInterrupt
void f_801ACA90(Ctx* __restrict c) {
  trace_call(0x801ACA90u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ACA90
  c->r[0]=c->lr; // 801ACA94
  W32(c->r[1]+0x00000014u,c->r[0]); // 801ACA98
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801ACA9C
  c->r[31]=0u+0x80270000u; // 801ACAA0
  c->r[31]=c->r[31]+0x00005C78u; // 801ACAA4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801ACAA8
  c->r[4]=R32(c->r[13]+0xFFFFB31Cu); // 801ACAAC
  c->r[0]=c->r[4]+0x00000001u; // 801ACAB0
  W32(c->r[13]+0xFFFFB31Cu,c->r[0]); // 801ACAB4
  cmps(c,0,(int32_t)c->r[0],4); // 801ACAB8
  if (crb(c,0)) { goto L_801ACAC8; } // 801ACABC
  c->r[0]=0u+0x00000000u; // 801ACAC0
  W32(c->r[13]+0xFFFFB31Cu,c->r[0]); // 801ACAC4
L_801ACAC8:;
  c->r[4]=R32(c->r[13]+0xFFFFB334u); // 801ACAC8
  c->r[7]=0u+0x802B0000u; // 801ACACC
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801ACAD0
  c->r[5]=0u+0x00000086u; // 801ACAD4
  W8(c->r[4]+c->r[0],c->r[5]); // 801ACAD8
  c->r[9]=0u+0x00000001u; // 801ACADC
  c->r[7]=c->r[7]+0x00006CA0u; // 801ACAE0
  c->r[4]=R32(c->r[13]+0xFFFFB320u); // 801ACAE4
  W8(c->r[13]+0xFFFFB318u,c->r[9]); // 801ACAE8
  c->r[8]=rotl(c->r[4],5)&0xFFFFFFE0u; // 801ACAEC
  c->r[6]=c->r[7]+c->r[8]; // 801ACAF0
  c->r[5]=R8(c->r[6]+0x00000008u); // 801ACAF4
  c->r[0]=0u-c->r[5]; // 801ACAF8
  c->r[0]=c->r[0]|c->r[5]; // 801ACAFC
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801ACB00
  cmpu(c,0,c->r[0],0x00000001u); // 801ACB04
  if (!crb(c,2)) { goto L_801ACB2C; } // 801ACB08
  c->r[3]=c->r[31]+0x00000240u; // 801ACB0C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801ACB10
  c->lr=0x801ACB18u; f_801899B0(c); // 801ACB14
  c->r[3]=c->r[31]+0x00000278u; // 801ACB18
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801ACB1C
  c->lr=0x801ACB24u; f_801899B0(c); // 801ACB20
  c->r[0]=c->r[0]|0x00000000u; // 801ACB24
L_801ACB28:;
  IRQCHK(c); goto L_801ACB28; // 801ACB28
L_801ACB2C:;
  c->r[5]=R32(c->r[6]+0x0000000Cu); // 801ACB2C
  c->r[0]=c->r[5]+0x01150000u; // 801ACB30
  cmpu(c,0,c->r[0],0x0000DAEDu); // 801ACB34
  if (crb(c,2)) { goto L_801ACB4C; } // 801ACB38
  c->r[3]=c->r[31]+0x000002A8u; // 801ACB3C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801ACB40
  c->lr=0x801ACB48u; f_801899B0(c); // 801ACB44
L_801ACB48:;
  IRQCHK(c); goto L_801ACB48; // 801ACB48
L_801ACB4C:;
  W32(c->r[7]+c->r[8],c->r[3]); // 801ACB4C
  c->r[0]=c->r[4]+0x00000001u; // 801ACB50
  cmps(c,0,(int32_t)c->r[0],4); // 801ACB54
  W32(c->r[6]+0x00000004u,c->r[9]); // 801ACB58
  W8(c->r[6]+0x00000008u,c->r[9]); // 801ACB5C
  W32(c->r[13]+0xFFFFB320u,c->r[0]); // 801ACB60
  if (crb(c,0)) { goto L_801ACB70; } // 801ACB64
  c->r[0]=0u+0x00000000u; // 801ACB68
  W32(c->r[13]+0xFFFFB320u,c->r[0]); // 801ACB6C
L_801ACB70:;
  c->r[0]=R32(c->r[13]+0xFFFFB31Cu); // 801ACB70
  c->r[3]=0u+0x802B0000u; // 801ACB74
  c->r[5]=rotl(c->r[4],5)&0xFFFFFFE0u; // 801ACB78
  c->r[4]=R32(c->r[13]+0xFFFFB334u); // 801ACB7C
  c->r[3]=c->r[3]+0x00006CA0u; // 801ACB80
  c->r[9]=0u+0x801B0000u; // 801ACB84
  c->r[30]=c->r[3]+c->r[5]; // 801ACB88
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801ACB8C
  c->r[5]=c->r[4]+c->r[0]; // 801ACB90
  c->r[3]=R32(c->r[13]+0xFFFFA888u); // 801ACB94
  c->r[10]=c->r[30]|c->r[30]; // 801ACB98
  c->r[9]=c->r[9]+0xFFFFA560u; // 801ACB9C
  c->r[4]=0u+0x00000086u; // 801ACBA0
  c->r[6]=0u+0x00000020u; // 801ACBA4
  c->r[7]=0u+0x00000000u; // 801ACBA8
  c->r[8]=0u+0x00000000u; // 801ACBAC
  c->lr=0x801ACBB4u; f_801BC3D0(c); // 801ACBB0
  cmps(c,0,(int32_t)c->r[3],0); // 801ACBB4
  if (crb(c,2)) { goto L_801ACBDC; } // 801ACBB8
  c->r[4]=c->r[3]|c->r[3]; // 801ACBBC
  c->r[3]=c->r[31]+0x00000E84u; // 801ACBC0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801ACBC4
  c->lr=0x801ACBCCu; f_801899B0(c); // 801ACBC8
  c->r[0]=0u+0x00000000u; // 801ACBCC
  W8(c->r[30]+0x00000008u,c->r[0]); // 801ACBD0
  c->r[3]=0u+0x00000000u; // 801ACBD4
  goto L_801ACBE0; // 801ACBD8
L_801ACBDC:;
  c->r[3]=0u+0x00000001u; // 801ACBDC
L_801ACBE0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801ACBE0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801ACBE4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801ACBE8
  c->lr=c->r[0]; // 801ACBEC
  c->r[1]=c->r[1]+0x00000010u; // 801ACBF0
  return; // 801ACBF4
}

// __DVDLowTestAlarm
void f_801ACC00(Ctx* __restrict c) {
  trace_call(0x801ACC00u);
  c->r[3]=0u+0x00000000u; // 801ACC00
  return; // 801ACC04
}

void hle_AIRegisterDMACallback(Ctx*);
// AIRegisterDMACallback
void f_801ACC10(Ctx* __restrict c) {
  hle_AIRegisterDMACallback(c);
}

void hle_AIInitDMA(Ctx*);
// AIInitDMA
void f_801ACC60(Ctx* __restrict c) {
  hle_AIInitDMA(c);
}

void hle_AIStartDMA(Ctx*);
// AIStartDMA
void f_801ACCE0(Ctx* __restrict c) {
  hle_AIStartDMA(c);
}

// AIGetDMABytesLeft
void f_801ACD00(Ctx* __restrict c) {
  stub_log(0x801ACD00u); c->r[3]=0; return;
}

// AIGetDMAStartAddr
void f_801ACD10(Ctx* __restrict c) {
  trace_call(0x801ACD10u);
  c->r[3]=0u+0xCC000000u; // 801ACD10
  c->r[4]=R16(c->r[3]+0x00005030u); // 801ACD14
  c->r[0]=R16(c->r[3]+0x00005032u); // 801ACD18
  c->r[3]=rotl(c->r[0],0)&0x0000FFE0u; // 801ACD1C
  c->r[3]=(rotl(c->r[4],16)&0x1FFF0000u)|(c->r[3]&~0x1FFF0000u); // 801ACD20
  return; // 801ACD24
}

// AIGetDMALength
void f_801ACD30(Ctx* __restrict c) {
  trace_call(0x801ACD30u);
  c->r[3]=0u+0xCC000000u; // 801ACD30
  c->r[0]=R16(c->r[3]+0x00005036u); // 801ACD34
  c->r[3]=rotl(c->r[0],5)&0x000FFFE0u; // 801ACD38
  return; // 801ACD3C
}

// AICheckInit
void f_801ACD40(Ctx* __restrict c) {
  trace_call(0x801ACD40u);
  c->r[3]=R32(c->r[13]+0xFFFFB340u); // 801ACD40
  return; // 801ACD44
}

// AIInit
void f_801ACD50(Ctx* __restrict c) {
  trace_call(0x801ACD50u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ACD50
  c->r[0]=c->lr; // 801ACD54
  W32(c->r[1]+0x00000024u,c->r[0]); // 801ACD58
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801ACD5C
  c->r[31]=c->r[3]|c->r[3]; // 801ACD60
  W32(c->r[1]+0x00000018u,c->r[30]); // 801ACD64
  W32(c->r[1]+0x00000014u,c->r[29]); // 801ACD68
  c->r[0]=R32(c->r[13]+0xFFFFB340u); // 801ACD6C
  cmps(c,0,(int32_t)c->r[0],1); // 801ACD70
  if (crb(c,2)) { goto L_801ACEB4; } // 801ACD74
  c->r[3]=R32(c->r[13]+0xFFFFA898u); // 801ACD78
  c->lr=0x801ACD80u; f_80187B20(c); // 801ACD7C
  c->r[3]=0u+0x80000000u; // 801ACD80
  c->r[4]=0u+0x431C0000u; // 801ACD84
  c->r[0]=R32(c->r[3]+0x000000F8u); // 801ACD88
  c->r[7]=0u+0x00000000u; // 801ACD8C
  c->r[5]=0u+0x10620000u; // 801ACD90
  c->r[4]=c->r[4]+0xFFFFDE83u; // 801ACD94
  c->r[6]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801ACD98
  c->r[3]=0u+0x00010000u; // 801ACD9C
  c->r[6]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[6])>>32); // 801ACDA0
  c->r[9]=c->r[5]+0x00004DD3u; // 801ACDA4
  c->r[0]=c->r[3]+0xFFFFA428u; // 801ACDA8
  W32(c->r[13]+0xFFFFB368u,c->r[7]); // 801ACDAC
  c->r[4]=c->r[3]+0xFFFFA410u; // 801ACDB0
  c->r[3]=c->r[3]+0xFFFFF618u; // 801ACDB4
  c->r[10]=rotl(c->r[6],17)&0x0001FFFFu; // 801ACDB8
  W32(c->r[13]+0xFFFFB360u,c->r[7]); // 801ACDBC
  c->r[6]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[0]); // 801ACDC0
  c->r[30]=0u+0xCD000000u; // 801ACDC4
  W32(c->r[13]+0xFFFFB358u,c->r[7]); // 801ACDC8
  c->r[0]=0u+0xFFFFFFEAu; // 801ACDCC
  W32(c->r[13]+0xFFFFB350u,c->r[7]); // 801ACDD0
  c->r[5]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[4]); // 801ACDD4
  W32(c->r[13]+0xFFFFB348u,c->r[7]); // 801ACDD8
  c->r[4]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[3]); // 801ACDDC
  c->r[8]=(uint32_t)((int32_t)c->r[10]*(int32_t)31524); // 801ACDE0
  c->r[3]=(uint32_t)((int32_t)c->r[10]*(int32_t)3000); // 801ACDE4
  c->r[8]=(uint32_t)(((uint64_t)c->r[9]*(uint64_t)c->r[8])>>32); // 801ACDE8
  c->r[6]=(uint32_t)(((uint64_t)c->r[9]*(uint64_t)c->r[6])>>32); // 801ACDEC
  c->r[8]=rotl(c->r[8],23)&0x007FFFFFu; // 801ACDF0
  W32(c->r[13]+0xFFFFB36Cu,c->r[8]); // 801ACDF4
  c->r[5]=(uint32_t)(((uint64_t)c->r[9]*(uint64_t)c->r[5])>>32); // 801ACDF8
  c->r[6]=rotl(c->r[6],23)&0x007FFFFFu; // 801ACDFC
  W32(c->r[13]+0xFFFFB364u,c->r[6]); // 801ACE00
  c->r[4]=(uint32_t)(((uint64_t)c->r[9]*(uint64_t)c->r[4])>>32); // 801ACE04
  c->r[5]=rotl(c->r[5],23)&0x007FFFFFu; // 801ACE08
  W32(c->r[13]+0xFFFFB35Cu,c->r[5]); // 801ACE0C
  c->r[3]=(uint32_t)(((uint64_t)c->r[9]*(uint64_t)c->r[3])>>32); // 801ACE10
  c->r[4]=rotl(c->r[4],23)&0x007FFFFFu; // 801ACE14
  W32(c->r[13]+0xFFFFB354u,c->r[4]); // 801ACE18
  c->r[3]=rotl(c->r[3],23)&0x007FFFFFu; // 801ACE1C
  W32(c->r[13]+0xFFFFB34Cu,c->r[3]); // 801ACE20
  c->r[3]=R32(c->r[30]+0x00006C00u); // 801ACE24
  c->r[0]=c->r[3]&c->r[0]; // 801ACE28
  W32(c->r[30]+0x00006C00u,c->r[0]); // 801ACE2C
  W32(c->r[30]+0x00006C04u,c->r[7]); // 801ACE30
  W32(c->r[30]+0x00006C0Cu,c->r[7]); // 801ACE34
  c->r[0]=R32(c->r[30]+0x00006C00u); // 801ACE38
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFDFu; // 801ACE3C
  c->r[0]=c->r[0]|0x00000020u; // 801ACE40
  W32(c->r[30]+0x00006C00u,c->r[0]); // 801ACE44
  c->r[0]=R32(c->r[30]+0x00006C00u); // 801ACE48
  c->r[0]=rotl(c->r[0],26)&0x00000001u; // 801ACE4C
  c->r[0]=c->r[0]^0x00000001u; // 801ACE50
  cmps(c,0,(int32_t)c->r[0],0); // 801ACE54
  if (crb(c,2)) { goto L_801ACE88; } // 801ACE58
  c->r[0]=R32(c->r[30]+0x00006C00u); // 801ACE5C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFBFu; // 801ACE60
  W32(c->r[30]+0x00006C00u,c->r[0]); // 801ACE64
  c->lr=0x801ACE6Cu; f_8018D6A0(c); // 801ACE68
  c->r[29]=c->r[3]|c->r[3]; // 801ACE6C
  c->lr=0x801ACE74u; f_801ACFF0(c); // 801ACE70
  c->r[0]=R32(c->r[30]+0x00006C00u); // 801ACE74
  c->r[3]=c->r[29]|c->r[29]; // 801ACE78
  c->r[0]=c->r[0]|0x00000040u; // 801ACE7C
  W32(c->r[30]+0x00006C00u,c->r[0]); // 801ACE80
  c->lr=0x801ACE88u; f_8018D6E0(c); // 801ACE84
L_801ACE88:;
  c->r[0]=0u+0x00000000u; // 801ACE88
  c->r[4]=0u+0x801B0000u; // 801ACE8C
  W32(c->r[13]+0xFFFFB378u,c->r[0]); // 801ACE90
  c->r[4]=c->r[4]+0xFFFFCED0u; // 801ACE94
  c->r[3]=0u+0x00000005u; // 801ACE98
  W32(c->r[13]+0xFFFFB374u,c->r[31]); // 801ACE9C
  c->lr=0x801ACEA4u; f_8018D710(c); // 801ACEA0
  c->r[3]=0u+0x04000000u; // 801ACEA4
  c->lr=0x801ACEACu; f_8018DAF0(c); // 801ACEA8
  c->r[0]=0u+0x00000001u; // 801ACEAC
  W32(c->r[13]+0xFFFFB340u,c->r[0]); // 801ACEB0
L_801ACEB4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801ACEB4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801ACEB8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801ACEBC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801ACEC0
  c->lr=c->r[0]; // 801ACEC4
  c->r[1]=c->r[1]+0x00000020u; // 801ACEC8
  return; // 801ACECC
}

// __AIDHandler
void f_801ACED0(Ctx* __restrict c) {
  trace_call(0x801ACED0u);
  {uint32_t ea=c->r[1]+0xFFFFFD20u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ACED0
  c->r[0]=c->lr; // 801ACED4
  c->r[6]=0u+0xCC000000u; // 801ACED8
  W32(c->r[1]+0x000002E4u,c->r[0]); // 801ACEDC
  c->r[0]=0u+0xFFFFFF5Fu; // 801ACEE0
  c->r[3]=c->r[1]+0x00000008u; // 801ACEE4
  W32(c->r[1]+0x000002DCu,c->r[31]); // 801ACEE8
  c->r[31]=c->r[4]|c->r[4]; // 801ACEEC
  c->r[5]=R16(c->r[6]+0x0000500Au); // 801ACEF0
  c->r[0]=c->r[5]&c->r[0]; // 801ACEF4
  c->r[0]=c->r[0]|0x00000008u; // 801ACEF8
  W16(c->r[6]+0x0000500Au,c->r[0]); // 801ACEFC
  c->lr=0x801ACF04u; f_80189580(c); // 801ACF00
  c->r[3]=c->r[1]+0x00000008u; // 801ACF04
  c->lr=0x801ACF0Cu; f_80189340(c); // 801ACF08
  c->r[3]=R32(c->r[13]+0xFFFFB378u); // 801ACF0C
  cmps(c,0,(int32_t)c->r[3],0); // 801ACF10
  if (crb(c,2)) { goto L_801ACF54; } // 801ACF14
  c->r[0]=R32(c->r[13]+0xFFFFB344u); // 801ACF18
  cmps(c,0,(int32_t)c->r[0],0); // 801ACF1C
  if (!crb(c,2)) { goto L_801ACF54; } // 801ACF20
  c->r[0]=R32(c->r[13]+0xFFFFB374u); // 801ACF24
  c->r[4]=0u+0x00000001u; // 801ACF28
  W32(c->r[13]+0xFFFFB344u,c->r[4]); // 801ACF2C
  cmps(c,0,(int32_t)c->r[0],0); // 801ACF30
  if (crb(c,2)) { goto L_801ACF40; } // 801ACF34
  c->lr=0x801ACF3Cu; f_801ACF80(c); // 801ACF38
  goto L_801ACF4C; // 801ACF3C
L_801ACF40:;
  c->r[12]=c->r[3]|c->r[3]; // 801ACF40
  c->ctr=c->r[12]; // 801ACF44
  if (true) { c->lr=0x801ACF4Cu; dispatch(c,c->ctr); } // 801ACF48
L_801ACF4C:;
  c->r[0]=0u+0x00000000u; // 801ACF4C
  W32(c->r[13]+0xFFFFB344u,c->r[0]); // 801ACF50
L_801ACF54:;
  c->r[3]=c->r[1]+0x00000008u; // 801ACF54
  c->lr=0x801ACF5Cu; f_80189580(c); // 801ACF58
  c->r[3]=c->r[31]|c->r[31]; // 801ACF5C
  c->lr=0x801ACF64u; f_80189340(c); // 801ACF60
  c->r[0]=R32(c->r[1]+0x000002E4u); // 801ACF64
  c->r[31]=R32(c->r[1]+0x000002DCu); // 801ACF68
  c->lr=c->r[0]; // 801ACF6C
  c->r[1]=c->r[1]+0x000002E0u; // 801ACF70
  return; // 801ACF74
}

// __AICallbackStackSwitch
void f_801ACF80(Ctx* __restrict c) {
  trace_call(0x801ACF80u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ACF80
  c->r[0]=c->lr; // 801ACF84
  W32(c->r[1]+0x00000014u,c->r[0]); // 801ACF88
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801ACF8C
  c->r[31]=c->r[1]|c->r[1]; // 801ACF90
  c->r[31]=c->r[3]|c->r[3]; // 801ACF94
  c->r[5]=0u+0x80310000u; // 801ACF98
  c->r[5]=c->r[5]+0x00006B10u; // 801ACF9C
  W32(c->r[5]+0x00000000u,c->r[1]); // 801ACFA0
  c->r[5]=0u+0x80310000u; // 801ACFA4
  c->r[5]=c->r[5]+0x00006B14u; // 801ACFA8
  c->r[1]=R32(c->r[5]+0x00000000u); // 801ACFAC
  c->r[1]=c->r[1]+0xFFFFFFF8u; // 801ACFB0
  c->lr=c->r[31]; // 801ACFB4
  if (true) { uint32_t t=c->lr; c->lr=0x801ACFBCu; dispatch(c,t); } // 801ACFB8
  c->r[5]=0u+0x80310000u; // 801ACFBC
  c->r[5]=c->r[5]+0x00006B10u; // 801ACFC0
  c->r[1]=R32(c->r[5]+0x00000000u); // 801ACFC4
  c->r[10]=c->r[1]|c->r[1]; // 801ACFC8
  c->r[31]=R32(c->r[10]+0x0000000Cu); // 801ACFCC
  c->r[10]=R32(c->r[1]+0x00000000u); // 801ACFD0
  c->r[0]=R32(c->r[10]+0x00000004u); // 801ACFD4
  c->r[1]=c->r[10]|c->r[10]; // 801ACFD8
  c->lr=c->r[0]; // 801ACFDC
  return; // 801ACFE0
}

// __AI_SRC_INIT
void f_801ACFF0(Ctx* __restrict c) {
  stub_log(0x801ACFF0u);  return;
}

// AXInit
void f_801AD1C0(Ctx* __restrict c) {
  trace_call(0x801AD1C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AD1C0
  c->r[0]=c->lr; // 801AD1C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AD1C8
  c->r[0]=R32(c->r[13]+0xFFFFB380u); // 801AD1CC
  cmps(c,0,(int32_t)c->r[0],0); // 801AD1D0
  if (!crb(c,2)) { goto L_801AD204; } // 801AD1D4
  c->r[3]=R32(c->r[13]+0xFFFFA8A0u); // 801AD1D8
  c->lr=0x801AD1E0u; f_80187B20(c); // 801AD1DC
  c->lr=0x801AD1E4u; f_801AD300(c); // 801AD1E0
  c->lr=0x801AD1E8u; f_801AFFD0(c); // 801AD1E4
  c->lr=0x801AD1ECu; f_801AF550(c); // 801AD1E8
  c->lr=0x801AD1F0u; f_801AD720(c); // 801AD1EC
  c->lr=0x801AD1F4u; f_801AE9C0(c); // 801AD1F0
  c->r[3]=0u+0x00000000u; // 801AD1F4
  c->lr=0x801AD1FCu; f_801AEF30(c); // 801AD1F8
  c->r[0]=0u+0x00000001u; // 801AD1FC
  W32(c->r[13]+0xFFFFB380u,c->r[0]); // 801AD200
L_801AD204:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AD204
  c->lr=c->r[0]; // 801AD208
  c->r[1]=c->r[1]+0x00000010u; // 801AD20C
  return; // 801AD210
}

// AXIsInit
void f_801AD220(Ctx* __restrict c) {
  trace_call(0x801AD220u);
  c->r[3]=R32(c->r[13]+0xFFFFB380u); // 801AD220
  return; // 801AD224
}

// __AXGetStackHead
void f_801AD230(Ctx* __restrict c) {
  trace_call(0x801AD230u);
  c->r[4]=0u+0x802B0000u; // 801AD230
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801AD234
  c->r[4]=c->r[4]+0x00006E60u; // 801AD238
  c->r[3]=R32(c->r[4]+c->r[0]); // 801AD23C
  return; // 801AD240
}

// __AXServiceCallbackStack
void f_801AD250(Ctx* __restrict c) {
  trace_call(0x801AD250u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AD250
  c->r[0]=c->lr; // 801AD254
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AD258
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801AD25C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801AD260
  W32(c->r[1]+0x00000014u,c->r[29]); // 801AD264
  c->r[29]=R32(c->r[13]+0xFFFFB388u); // 801AD268
  cmps(c,0,(int32_t)c->r[29],0); // 801AD26C
  if (crb(c,2)) { goto L_801AD27C; } // 801AD270
  c->r[0]=R32(c->r[29]+0x00000008u); // 801AD274
  W32(c->r[13]+0xFFFFB388u,c->r[0]); // 801AD278
L_801AD27C:;
  c->r[30]=0u+0x802B0000u; // 801AD27C
  c->r[31]=0u+0x00000000u; // 801AD280
  goto L_801AD2D8; // 801AD284
L_801AD288:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 801AD288
  cmps(c,0,(int32_t)c->r[0],0); // 801AD28C
  if (crb(c,2)) { goto L_801AD2C4; } // 801AD290
  c->r[12]=R32(c->r[29]+0x00000010u); // 801AD294
  cmps(c,0,(int32_t)c->r[12],0); // 801AD298
  if (crb(c,2)) { goto L_801AD2AC; } // 801AD29C
  c->r[3]=c->r[29]|c->r[29]; // 801AD2A0
  c->ctr=c->r[12]; // 801AD2A4
  if (true) { c->lr=0x801AD2ACu; dispatch(c,c->ctr); } // 801AD2A8
L_801AD2AC:;
  c->r[3]=c->r[29]|c->r[29]; // 801AD2AC
  c->lr=0x801AD2B4u; f_801AD3E0(c); // 801AD2B0
  c->r[0]=R32(c->r[30]+0x00006E60u); // 801AD2B4
  W32(c->r[29]+0x00000000u,c->r[0]); // 801AD2B8
  W32(c->r[30]+0x00006E60u,c->r[29]); // 801AD2BC
  W32(c->r[29]+0x0000000Cu,c->r[31]); // 801AD2C0
L_801AD2C4:;
  c->r[29]=R32(c->r[13]+0xFFFFB388u); // 801AD2C4
  cmps(c,0,(int32_t)c->r[29],0); // 801AD2C8
  if (crb(c,2)) { goto L_801AD2D8; } // 801AD2CC
  c->r[0]=R32(c->r[29]+0x00000008u); // 801AD2D0
  W32(c->r[13]+0xFFFFB388u,c->r[0]); // 801AD2D4
L_801AD2D8:;
  cmps(c,0,(int32_t)c->r[29],0); // 801AD2D8
  if (!crb(c,2)) { IRQCHK(c); goto L_801AD288; } // 801AD2DC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AD2E0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801AD2E4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801AD2E8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801AD2EC
  c->lr=c->r[0]; // 801AD2F0
  c->r[1]=c->r[1]+0x00000020u; // 801AD2F4
  return; // 801AD2F8
}

// __AXAllocInit
void f_801AD300(Ctx* __restrict c) {
  trace_call(0x801AD300u);
  c->r[4]=0u+0x802B0000u; // 801AD300
  c->r[5]=0u+0x802B0000u; // 801AD304
  c->r[3]=0u+0x00000000u; // 801AD308
  c->r[0]=0u+0x00000002u; // 801AD30C
  W32(c->r[13]+0xFFFFB388u,c->r[3]); // 801AD310
  c->r[4]=c->r[4]+0x00006EE0u; // 801AD314
  c->r[5]=c->r[5]+0x00006E60u; // 801AD318
  c->ctr=c->r[0]; // 801AD31C
L_801AD320:;
  W32(c->r[4]+0x00000000u,c->r[3]); // 801AD320
  W32(c->r[5]+0x00000000u,c->r[3]); // 801AD324
  W32(c->r[4]+0x00000004u,c->r[3]); // 801AD328
  W32(c->r[5]+0x00000004u,c->r[3]); // 801AD32C
  W32(c->r[4]+0x00000008u,c->r[3]); // 801AD330
  W32(c->r[5]+0x00000008u,c->r[3]); // 801AD334
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 801AD338
  W32(c->r[5]+0x0000000Cu,c->r[3]); // 801AD33C
  W32(c->r[4]+0x00000010u,c->r[3]); // 801AD340
  W32(c->r[5]+0x00000010u,c->r[3]); // 801AD344
  W32(c->r[4]+0x00000014u,c->r[3]); // 801AD348
  W32(c->r[5]+0x00000014u,c->r[3]); // 801AD34C
  W32(c->r[4]+0x00000018u,c->r[3]); // 801AD350
  W32(c->r[5]+0x00000018u,c->r[3]); // 801AD354
  W32(c->r[4]+0x0000001Cu,c->r[3]); // 801AD358
  W32(c->r[5]+0x0000001Cu,c->r[3]); // 801AD35C
  W32(c->r[4]+0x00000020u,c->r[3]); // 801AD360
  W32(c->r[5]+0x00000020u,c->r[3]); // 801AD364
  W32(c->r[4]+0x00000024u,c->r[3]); // 801AD368
  W32(c->r[5]+0x00000024u,c->r[3]); // 801AD36C
  W32(c->r[4]+0x00000028u,c->r[3]); // 801AD370
  W32(c->r[5]+0x00000028u,c->r[3]); // 801AD374
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 801AD378
  W32(c->r[5]+0x0000002Cu,c->r[3]); // 801AD37C
  W32(c->r[4]+0x00000030u,c->r[3]); // 801AD380
  W32(c->r[5]+0x00000030u,c->r[3]); // 801AD384
  W32(c->r[4]+0x00000034u,c->r[3]); // 801AD388
  W32(c->r[5]+0x00000034u,c->r[3]); // 801AD38C
  W32(c->r[4]+0x00000038u,c->r[3]); // 801AD390
  W32(c->r[5]+0x00000038u,c->r[3]); // 801AD394
  W32(c->r[4]+0x0000003Cu,c->r[3]); // 801AD398
  c->r[4]=c->r[4]+0x00000040u; // 801AD39C
  W32(c->r[5]+0x0000003Cu,c->r[3]); // 801AD3A0
  c->r[5]=c->r[5]+0x00000040u; // 801AD3A4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801AD320; } // 801AD3A8
  return; // 801AD3AC
}

// __AXPushFreeStack
void f_801AD3B0(Ctx* __restrict c) {
  trace_call(0x801AD3B0u);
  c->r[5]=0u+0x802B0000u; // 801AD3B0
  c->r[0]=0u+0x00000000u; // 801AD3B4
  c->r[4]=R32(c->r[5]+0x00006E60u); // 801AD3B8
  W32(c->r[3]+0x00000000u,c->r[4]); // 801AD3BC
  W32(c->r[5]+0x00006E60u,c->r[3]); // 801AD3C0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801AD3C4
  return; // 801AD3C8
}

// __AXPushCallbackStack
void f_801AD3D0(Ctx* __restrict c) {
  trace_call(0x801AD3D0u);
  c->r[0]=R32(c->r[13]+0xFFFFB388u); // 801AD3D0
  W32(c->r[3]+0x00000008u,c->r[0]); // 801AD3D4
  W32(c->r[13]+0xFFFFB388u,c->r[3]); // 801AD3D8
  return; // 801AD3DC
}

// __AXRemoveFromStack
void f_801AD3E0(Ctx* __restrict c) {
  trace_call(0x801AD3E0u);
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 801AD3E0
  c->r[5]=0u+0x802B0000u; // 801AD3E4
  c->r[4]=0u+0x802B0000u; // 801AD3E8
  c->r[6]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801AD3EC
  c->r[5]=c->r[5]+0x00006E60u; // 801AD3F0
  c->r[4]=c->r[4]+0x00006EE0u; // 801AD3F4
  c->r[0]=R32(c->r[5]+c->r[6]); // 801AD3F8
  c->r[7]=R32(c->r[4]+c->r[6]); // 801AD3FC
  cmpu(c,0,c->r[0],c->r[7]); // 801AD400
  if (!crb(c,2)) { goto L_801AD418; } // 801AD404
  c->r[0]=0u+0x00000000u; // 801AD408
  W32(c->r[4]+c->r[6],c->r[0]); // 801AD40C
  W32(c->r[5]+c->r[6],c->r[0]); // 801AD410
  return; // 801AD414
L_801AD418:;
  cmpu(c,0,c->r[3],c->r[0]); // 801AD418
  if (!crb(c,2)) { goto L_801AD434; } // 801AD41C
  c->r[3]=R32(c->r[3]+0x00000000u); // 801AD420
  c->r[0]=0u+0x00000000u; // 801AD424
  W32(c->r[5]+c->r[6],c->r[3]); // 801AD428
  W32(c->r[3]+0x00000004u,c->r[0]); // 801AD42C
  return; // 801AD430
L_801AD434:;
  cmpu(c,0,c->r[3],c->r[7]); // 801AD434
  if (!crb(c,2)) { goto L_801AD450; } // 801AD438
  c->r[3]=R32(c->r[3]+0x00000004u); // 801AD43C
  c->r[0]=0u+0x00000000u; // 801AD440
  W32(c->r[4]+c->r[6],c->r[3]); // 801AD444
  W32(c->r[3]+0x00000000u,c->r[0]); // 801AD448
  return; // 801AD44C
L_801AD450:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 801AD450
  c->r[3]=R32(c->r[3]+0x00000000u); // 801AD454
  W32(c->r[4]+0x00000000u,c->r[3]); // 801AD458
  W32(c->r[3]+0x00000004u,c->r[4]); // 801AD45C
  return; // 801AD460
}

// AXFreeVoice
void f_801AD470(Ctx* __restrict c) {
  trace_call(0x801AD470u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AD470
  c->r[0]=c->lr; // 801AD474
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AD478
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AD47C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801AD480
  c->r[30]=c->r[3]|c->r[3]; // 801AD484
  c->lr=0x801AD48Cu; f_8018D6A0(c); // 801AD488
  c->r[31]=c->r[3]|c->r[3]; // 801AD48C
  c->r[3]=c->r[30]|c->r[30]; // 801AD490
  c->lr=0x801AD498u; f_801AD3E0(c); // 801AD494
  c->r[0]=R16(c->r[30]+0x00000038u); // 801AD498
  cmpu(c,0,c->r[0],0x00000001u); // 801AD49C
  if (!crb(c,2)) { goto L_801AD4AC; } // 801AD4A0
  c->r[0]=0u+0x00000001u; // 801AD4A4
  W32(c->r[30]+0x00000020u,c->r[0]); // 801AD4A8
L_801AD4AC:;
  c->r[3]=c->r[30]|c->r[30]; // 801AD4AC
  c->lr=0x801AD4B4u; f_801AFF90(c); // 801AD4B0
  c->r[5]=0u+0x802B0000u; // 801AD4B4
  c->r[0]=0u+0x00000000u; // 801AD4B8
  c->r[4]=R32(c->r[5]+0x00006E60u); // 801AD4BC
  c->r[3]=c->r[31]|c->r[31]; // 801AD4C0
  W32(c->r[30]+0x00000000u,c->r[4]); // 801AD4C4
  W32(c->r[5]+0x00006E60u,c->r[30]); // 801AD4C8
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 801AD4CC
  c->lr=0x801AD4D4u; f_8018D6E0(c); // 801AD4D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AD4D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AD4D8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801AD4DC
  c->lr=c->r[0]; // 801AD4E0
  c->r[1]=c->r[1]+0x00000010u; // 801AD4E4
  return; // 801AD4E8
}

// AXAcquireVoice
void f_801AD4F0(Ctx* __restrict c) {
  trace_call(0x801AD4F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AD4F0
  c->r[0]=c->lr; // 801AD4F4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AD4F8
  c->r[11]=c->r[1]+0x00000020u; // 801AD4FC
  c->lr=0x801AD504u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801AD500
  c->r[27]=c->r[3]|c->r[3]; // 801AD504
  c->r[28]=c->r[4]|c->r[4]; // 801AD508
  c->r[29]=c->r[5]|c->r[5]; // 801AD50C
  c->lr=0x801AD514u; f_8018D6A0(c); // 801AD510
  c->r[4]=0u+0x802B0000u; // 801AD514
  c->r[31]=c->r[3]|c->r[3]; // 801AD518
  c->r[30]=R32(c->r[4]+0x00006E60u); // 801AD51C
  cmps(c,0,(int32_t)c->r[30],0); // 801AD520
  if (crb(c,2)) { goto L_801AD530; } // 801AD524
  c->r[0]=R32(c->r[30]+0x00000000u); // 801AD528
  W32(c->r[4]+0x00006E60u,c->r[0]); // 801AD52C
L_801AD530:;
  cmps(c,0,(int32_t)c->r[30],0); // 801AD530
  if (!crb(c,2)) { goto L_801AD5F0; } // 801AD534
  c->r[3]=0u+0x802B0000u; // 801AD538
  c->r[4]=0u+0x802B0000u; // 801AD53C
  c->r[3]=c->r[3]+0x00006E60u; // 801AD540
  c->r[0]=c->r[27]+0xFFFFFFFFu; // 801AD544
  c->r[4]=c->r[4]+0x00006EE0u; // 801AD548
  c->r[5]=c->r[3]+0x00000004u; // 801AD54C
  c->r[3]=0u+0x00000000u; // 801AD550
  c->r[6]=c->r[4]+0x00000004u; // 801AD554
  c->ctr=c->r[0]; // 801AD558
  cmpu(c,0,c->r[27],0x00000001u); // 801AD55C
  if (!crb(c,1)) { goto L_801AD5F0; } // 801AD560
  c->r[0]=c->r[0]|0x00000000u; // 801AD564
L_801AD568:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 801AD568
  c->r[30]=0u+0x00000000u; // 801AD56C
  cmps(c,0,(int32_t)c->r[0],0); // 801AD570
  if (crb(c,2)) { goto L_801AD5AC; } // 801AD574
  c->r[7]=R32(c->r[6]+0x00000000u); // 801AD578
  cmpu(c,0,c->r[0],c->r[7]); // 801AD57C
  if (!crb(c,2)) { goto L_801AD594; } // 801AD580
  W32(c->r[6]+0x00000000u,c->r[3]); // 801AD584
  c->r[30]=c->r[0]|c->r[0]; // 801AD588
  W32(c->r[5]+0x00000000u,c->r[3]); // 801AD58C
  goto L_801AD5AC; // 801AD590
L_801AD594:;
  cmps(c,0,(int32_t)c->r[7],0); // 801AD594
  if (crb(c,2)) { goto L_801AD5AC; } // 801AD598
  c->r[4]=R32(c->r[7]+0x00000004u); // 801AD59C
  c->r[30]=c->r[7]|c->r[7]; // 801AD5A0
  W32(c->r[6]+0x00000000u,c->r[4]); // 801AD5A4
  W32(c->r[4]+0x00000000u,c->r[3]); // 801AD5A8
L_801AD5AC:;
  cmps(c,0,(int32_t)c->r[30],0); // 801AD5AC
  if (crb(c,2)) { goto L_801AD5E4; } // 801AD5B0
  c->r[0]=R16(c->r[30]+0x00000038u); // 801AD5B4
  cmpu(c,0,c->r[0],0x00000001u); // 801AD5B8
  if (!crb(c,2)) { goto L_801AD5C8; } // 801AD5BC
  c->r[0]=0u+0x00000001u; // 801AD5C0
  W32(c->r[30]+0x00000020u,c->r[0]); // 801AD5C4
L_801AD5C8:;
  c->r[12]=R32(c->r[30]+0x00000010u); // 801AD5C8
  cmps(c,0,(int32_t)c->r[12],0); // 801AD5CC
  if (crb(c,2)) { goto L_801AD5F0; } // 801AD5D0
  c->r[3]=c->r[30]|c->r[30]; // 801AD5D4
  c->ctr=c->r[12]; // 801AD5D8
  if (true) { c->lr=0x801AD5E0u; dispatch(c,c->ctr); } // 801AD5DC
  goto L_801AD5F0; // 801AD5E0
L_801AD5E4:;
  c->r[5]=c->r[5]+0x00000004u; // 801AD5E4
  c->r[6]=c->r[6]+0x00000004u; // 801AD5E8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801AD568; } // 801AD5EC
L_801AD5F0:;
  cmps(c,0,(int32_t)c->r[30],0); // 801AD5F0
  if (crb(c,2)) { goto L_801AD650; } // 801AD5F4
  c->r[4]=0u+0x802B0000u; // 801AD5F8
  c->r[5]=rotl(c->r[27],2)&0xFFFFFFFCu; // 801AD5FC
  c->r[4]=c->r[4]+0x00006E60u; // 801AD600
  c->r[0]=0u+0x00000000u; // 801AD604
  c->r[3]=R32(c->r[4]+c->r[5]); // 801AD608
  W32(c->r[30]+0x00000000u,c->r[3]); // 801AD60C
  cmps(c,0,(int32_t)c->r[3],0); // 801AD610
  W32(c->r[30]+0x00000004u,c->r[0]); // 801AD614
  if (crb(c,2)) { goto L_801AD62C; } // 801AD618
  c->r[3]=R32(c->r[4]+c->r[5]); // 801AD61C
  W32(c->r[3]+0x00000004u,c->r[30]); // 801AD620
  W32(c->r[4]+c->r[5],c->r[30]); // 801AD624
  goto L_801AD63C; // 801AD628
L_801AD62C:;
  c->r[3]=0u+0x802B0000u; // 801AD62C
  W32(c->r[4]+c->r[5],c->r[30]); // 801AD630
  c->r[3]=c->r[3]+0x00006EE0u; // 801AD634
  W32(c->r[3]+c->r[5],c->r[30]); // 801AD638
L_801AD63C:;
  W32(c->r[30]+0x0000000Cu,c->r[27]); // 801AD63C
  c->r[3]=c->r[30]|c->r[30]; // 801AD640
  W32(c->r[30]+0x00000010u,c->r[28]); // 801AD644
  W32(c->r[30]+0x00000014u,c->r[29]); // 801AD648
  c->lr=0x801AD650u; f_801AFF90(c); // 801AD64C
L_801AD650:;
  c->r[3]=c->r[31]|c->r[31]; // 801AD650
  c->lr=0x801AD658u; f_8018D6E0(c); // 801AD654
  c->r[11]=c->r[1]+0x00000020u; // 801AD658
  c->r[3]=c->r[30]|c->r[30]; // 801AD65C
  c->lr=0x801AD664u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801AD660
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AD664
  c->lr=c->r[0]; // 801AD668
  c->r[1]=c->r[1]+0x00000020u; // 801AD66C
  return; // 801AD670
}

// AXSetVoicePriority
void f_801AD680(Ctx* __restrict c) {
  trace_call(0x801AD680u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AD680
  c->r[0]=c->lr; // 801AD684
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AD688
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801AD68C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801AD690
  c->r[30]=c->r[4]|c->r[4]; // 801AD694
  W32(c->r[1]+0x00000014u,c->r[29]); // 801AD698
  c->r[29]=c->r[3]|c->r[3]; // 801AD69C
  c->lr=0x801AD6A4u; f_8018D6A0(c); // 801AD6A0
  c->r[31]=c->r[3]|c->r[3]; // 801AD6A4
  c->r[3]=c->r[29]|c->r[29]; // 801AD6A8
  c->lr=0x801AD6B0u; f_801AD3E0(c); // 801AD6AC
  c->r[4]=0u+0x802B0000u; // 801AD6B0
  c->r[5]=rotl(c->r[30],2)&0xFFFFFFFCu; // 801AD6B4
  c->r[4]=c->r[4]+0x00006E60u; // 801AD6B8
  c->r[0]=0u+0x00000000u; // 801AD6BC
  c->r[3]=R32(c->r[4]+c->r[5]); // 801AD6C0
  W32(c->r[29]+0x00000000u,c->r[3]); // 801AD6C4
  cmps(c,0,(int32_t)c->r[3],0); // 801AD6C8
  W32(c->r[29]+0x00000004u,c->r[0]); // 801AD6CC
  if (crb(c,2)) { goto L_801AD6E4; } // 801AD6D0
  c->r[3]=R32(c->r[4]+c->r[5]); // 801AD6D4
  W32(c->r[3]+0x00000004u,c->r[29]); // 801AD6D8
  W32(c->r[4]+c->r[5],c->r[29]); // 801AD6DC
  goto L_801AD6F4; // 801AD6E0
L_801AD6E4:;
  c->r[3]=0u+0x802B0000u; // 801AD6E4
  W32(c->r[4]+c->r[5],c->r[29]); // 801AD6E8
  c->r[3]=c->r[3]+0x00006EE0u; // 801AD6EC
  W32(c->r[3]+c->r[5],c->r[29]); // 801AD6F0
L_801AD6F4:;
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 801AD6F4
  c->r[3]=c->r[31]|c->r[31]; // 801AD6F8
  c->lr=0x801AD700u; f_8018D6E0(c); // 801AD6FC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AD700
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801AD704
  c->r[30]=R32(c->r[1]+0x00000018u); // 801AD708
  c->r[29]=R32(c->r[1]+0x00000014u); // 801AD70C
  c->lr=c->r[0]; // 801AD710
  c->r[1]=c->r[1]+0x00000020u; // 801AD714
  return; // 801AD718
}

// __AXAuxInit
void f_801AD720(Ctx* __restrict c) {
  trace_call(0x801AD720u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AD720
  c->r[0]=c->lr; // 801AD724
  c->r[6]=0u+0x802B0000u; // 801AD728
  c->r[5]=0u+0x00000000u; // 801AD72C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AD730
  c->r[6]=c->r[6]+0x00006F60u; // 801AD734
  c->r[0]=0u+0x00000020u; // 801AD738
  c->r[4]=0u+0x00000001u; // 801AD73C
  c->r[3]=0u+0x00000002u; // 801AD740
  W32(c->r[13]+0xFFFFB3C8u,c->r[5]); // 801AD744
  c->r[7]=c->r[6]+0x00000000u; // 801AD748
  c->r[8]=c->r[6]+0x00001200u; // 801AD74C
  W32(c->r[13]+0xFFFFB3C4u,c->r[5]); // 801AD750
  c->r[6]=c->r[6]+0x00002400u; // 801AD754
  W32(c->r[13]+0xFFFFB3C0u,c->r[5]); // 801AD758
  W32(c->r[13]+0xFFFFB3BCu,c->r[5]); // 801AD75C
  W32(c->r[13]+0xFFFFB3B8u,c->r[5]); // 801AD760
  W32(c->r[13]+0xFFFFB3B4u,c->r[5]); // 801AD764
  W32(c->r[13]+0xFFFFB398u,c->r[5]); // 801AD768
  W32(c->r[13]+0xFFFFB394u,c->r[4]); // 801AD76C
  W32(c->r[13]+0xFFFFB390u,c->r[3]); // 801AD770
  c->ctr=c->r[0]; // 801AD774
L_801AD778:;
  W32(c->r[7]+0x00000000u,c->r[5]); // 801AD778
  W32(c->r[8]+0x00000000u,c->r[5]); // 801AD77C
  W32(c->r[6]+0x00000000u,c->r[5]); // 801AD780
  W32(c->r[7]+0x00000004u,c->r[5]); // 801AD784
  W32(c->r[8]+0x00000004u,c->r[5]); // 801AD788
  W32(c->r[6]+0x00000004u,c->r[5]); // 801AD78C
  W32(c->r[7]+0x00000008u,c->r[5]); // 801AD790
  W32(c->r[8]+0x00000008u,c->r[5]); // 801AD794
  W32(c->r[6]+0x00000008u,c->r[5]); // 801AD798
  W32(c->r[7]+0x0000000Cu,c->r[5]); // 801AD79C
  W32(c->r[8]+0x0000000Cu,c->r[5]); // 801AD7A0
  W32(c->r[6]+0x0000000Cu,c->r[5]); // 801AD7A4
  W32(c->r[7]+0x00000010u,c->r[5]); // 801AD7A8
  W32(c->r[8]+0x00000010u,c->r[5]); // 801AD7AC
  W32(c->r[6]+0x00000010u,c->r[5]); // 801AD7B0
  W32(c->r[7]+0x00000014u,c->r[5]); // 801AD7B4
  W32(c->r[8]+0x00000014u,c->r[5]); // 801AD7B8
  W32(c->r[6]+0x00000014u,c->r[5]); // 801AD7BC
  W32(c->r[7]+0x00000018u,c->r[5]); // 801AD7C0
  W32(c->r[8]+0x00000018u,c->r[5]); // 801AD7C4
  W32(c->r[6]+0x00000018u,c->r[5]); // 801AD7C8
  W32(c->r[7]+0x0000001Cu,c->r[5]); // 801AD7CC
  W32(c->r[8]+0x0000001Cu,c->r[5]); // 801AD7D0
  W32(c->r[6]+0x0000001Cu,c->r[5]); // 801AD7D4
  W32(c->r[7]+0x00000020u,c->r[5]); // 801AD7D8
  c->r[7]=c->r[7]+0x00000024u; // 801AD7DC
  W32(c->r[8]+0x00000020u,c->r[5]); // 801AD7E0
  c->r[8]=c->r[8]+0x00000024u; // 801AD7E4
  W32(c->r[6]+0x00000020u,c->r[5]); // 801AD7E8
  c->r[6]=c->r[6]+0x00000024u; // 801AD7EC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801AD778; } // 801AD7F0
  c->r[3]=c->r[13]+0xFFFFB3D4u; // 801AD7F4
  c->r[4]=0u+0x00000000u; // 801AD7F8
  c->r[5]=0u+0x00000003u; // 801AD7FC
  c->lr=0x801AD804u; f_800046B4(c); // 801AD800
  c->r[3]=c->r[13]+0xFFFFB3D0u; // 801AD804
  c->r[4]=0u+0x00000000u; // 801AD808
  c->r[5]=0u+0x00000003u; // 801AD80C
  c->lr=0x801AD814u; f_800046B4(c); // 801AD810
  c->r[3]=c->r[13]+0xFFFFB3CCu; // 801AD814
  c->r[4]=0u+0x00000000u; // 801AD818
  c->r[5]=0u+0x00000003u; // 801AD81C
  c->lr=0x801AD824u; f_800046B4(c); // 801AD820
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AD824
  c->lr=c->r[0]; // 801AD828
  c->r[1]=c->r[1]+0x00000010u; // 801AD82C
  return; // 801AD830
}

// __AXGetAuxAInput
void f_801AD840(Ctx* __restrict c) {
  trace_call(0x801AD840u);
  c->r[0]=R32(c->r[13]+0xFFFFB3C8u); // 801AD840
  cmps(c,0,(int32_t)c->r[0],0); // 801AD844
  if (crb(c,2)) { goto L_801AD868; } // 801AD848
  c->r[0]=R32(c->r[13]+0xFFFFB398u); // 801AD84C
  c->r[4]=0u+0x802B0000u; // 801AD850
  c->r[4]=c->r[4]+0x00006F60u; // 801AD854
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1536); // 801AD858
  c->r[0]=c->r[4]+c->r[0]; // 801AD85C
  W32(c->r[3]+0x00000000u,c->r[0]); // 801AD860
  return; // 801AD864
L_801AD868:;
  c->r[0]=0u+0x00000000u; // 801AD868
  W32(c->r[3]+0x00000000u,c->r[0]); // 801AD86C
  return; // 801AD870
}

// __AXGetAuxAOutput
void f_801AD880(Ctx* __restrict c) {
  trace_call(0x801AD880u);
  c->r[0]=R32(c->r[13]+0xFFFFB394u); // 801AD880
  c->r[4]=0u+0x802B0000u; // 801AD884
  c->r[4]=c->r[4]+0x00006F60u; // 801AD888
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1536); // 801AD88C
  c->r[0]=c->r[4]+c->r[0]; // 801AD890
  W32(c->r[3]+0x00000000u,c->r[0]); // 801AD894
  return; // 801AD898
}

// __AXGetAuxAInputDpl2
void f_801AD8A0(Ctx* __restrict c) {
  trace_call(0x801AD8A0u);
  c->r[0]=R32(c->r[13]+0xFFFFB398u); // 801AD8A0
  c->r[4]=0u+0x802B0000u; // 801AD8A4
  c->r[4]=c->r[4]+0x00006F60u; // 801AD8A8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1536); // 801AD8AC
  c->r[4]=c->r[4]+c->r[0]; // 801AD8B0
  c->r[0]=c->r[4]+0x00000480u; // 801AD8B4
  W32(c->r[3]+0x00000000u,c->r[0]); // 801AD8B8
  return; // 801AD8BC
}

// __AXGetAuxAOutputDpl2R
void f_801AD8C0(Ctx* __restrict c) {
  trace_call(0x801AD8C0u);
  c->r[0]=R32(c->r[13]+0xFFFFB394u); // 801AD8C0
  c->r[4]=0u+0x802B0000u; // 801AD8C4
  c->r[4]=c->r[4]+0x00006F60u; // 801AD8C8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1536); // 801AD8CC
  c->r[4]=c->r[4]+c->r[0]; // 801AD8D0
  c->r[0]=c->r[4]+0x00000180u; // 801AD8D4
  W32(c->r[3]+0x00000000u,c->r[0]); // 801AD8D8
  return; // 801AD8DC
}

// __AXGetAuxAOutputDpl2Ls
void f_801AD8E0(Ctx* __restrict c) {
  trace_call(0x801AD8E0u);
  c->r[0]=R32(c->r[13]+0xFFFFB394u); // 801AD8E0
  c->r[4]=0u+0x802B0000u; // 801AD8E4
  c->r[4]=c->r[4]+0x00006F60u; // 801AD8E8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1536); // 801AD8EC
  c->r[4]=c->r[4]+c->r[0]; // 801AD8F0
  c->r[0]=c->r[4]+0x00000300u; // 801AD8F4
  W32(c->r[3]+0x00000000u,c->r[0]); // 801AD8F8
  return; // 801AD8FC
}

// __AXGetAuxAOutputDpl2Rs
void f_801AD900(Ctx* __restrict c) {
  trace_call(0x801AD900u);
  c->r[0]=R32(c->r[13]+0xFFFFB394u); // 801AD900
  c->r[4]=0u+0x802B0000u; // 801AD904
  c->r[4]=c->r[4]+0x00006F60u; // 801AD908
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1536); // 801AD90C
  c->r[4]=c->r[4]+c->r[0]; // 801AD910
  c->r[0]=c->r[4]+0x00000480u; // 801AD914
  W32(c->r[3]+0x00000000u,c->r[0]); // 801AD918
  return; // 801AD91C
}

// __AXGetAuxBInput
void f_801AD920(Ctx* __restrict c) {
  trace_call(0x801AD920u);
  c->r[0]=R32(c->r[13]+0xFFFFB3C4u); // 801AD920
  cmps(c,0,(int32_t)c->r[0],0); // 801AD924
  if (crb(c,2)) { goto L_801AD948; } // 801AD928
  c->r[0]=R32(c->r[13]+0xFFFFB398u); // 801AD92C
  c->r[4]=0u+0x802C0000u; // 801AD930
  c->r[4]=c->r[4]+0xFFFF8160u; // 801AD934
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1536); // 801AD938
  c->r[0]=c->r[4]+c->r[0]; // 801AD93C
  W32(c->r[3]+0x00000000u,c->r[0]); // 801AD940
  return; // 801AD944
L_801AD948:;
  c->r[0]=0u+0x00000000u; // 801AD948
  W32(c->r[3]+0x00000000u,c->r[0]); // 801AD94C
  return; // 801AD950
}

// __AXGetAuxBOutput
void f_801AD960(Ctx* __restrict c) {
  trace_call(0x801AD960u);
  c->r[0]=R32(c->r[13]+0xFFFFB394u); // 801AD960
  c->r[4]=0u+0x802C0000u; // 801AD964
  c->r[4]=c->r[4]+0xFFFF8160u; // 801AD968
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1536); // 801AD96C
  c->r[0]=c->r[4]+c->r[0]; // 801AD970
  W32(c->r[3]+0x00000000u,c->r[0]); // 801AD974
  return; // 801AD978
}

// __AXGetAuxBInputDpl2
void f_801AD980(Ctx* __restrict c) {
  trace_call(0x801AD980u);
  c->r[0]=R32(c->r[13]+0xFFFFB398u); // 801AD980
  c->r[4]=0u+0x802C0000u; // 801AD984
  c->r[4]=c->r[4]+0xFFFF8160u; // 801AD988
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1536); // 801AD98C
  c->r[4]=c->r[4]+c->r[0]; // 801AD990
  c->r[0]=c->r[4]+0x00000480u; // 801AD994
  W32(c->r[3]+0x00000000u,c->r[0]); // 801AD998
  return; // 801AD99C
}

// __AXGetAuxBOutputDpl2R
void f_801AD9A0(Ctx* __restrict c) {
  trace_call(0x801AD9A0u);
  c->r[0]=R32(c->r[13]+0xFFFFB394u); // 801AD9A0
  c->r[4]=0u+0x802C0000u; // 801AD9A4
  c->r[4]=c->r[4]+0xFFFF8160u; // 801AD9A8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1536); // 801AD9AC
  c->r[4]=c->r[4]+c->r[0]; // 801AD9B0
  c->r[0]=c->r[4]+0x00000180u; // 801AD9B4
  W32(c->r[3]+0x00000000u,c->r[0]); // 801AD9B8
  return; // 801AD9BC
}

// __AXGetAuxBOutputDpl2Ls
void f_801AD9C0(Ctx* __restrict c) {
  trace_call(0x801AD9C0u);
  c->r[0]=R32(c->r[13]+0xFFFFB394u); // 801AD9C0
  c->r[4]=0u+0x802C0000u; // 801AD9C4
  c->r[4]=c->r[4]+0xFFFF8160u; // 801AD9C8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1536); // 801AD9CC
  c->r[4]=c->r[4]+c->r[0]; // 801AD9D0
  c->r[0]=c->r[4]+0x00000300u; // 801AD9D4
  W32(c->r[3]+0x00000000u,c->r[0]); // 801AD9D8
  return; // 801AD9DC
}

// __AXGetAuxBOutputDpl2Rs
void f_801AD9E0(Ctx* __restrict c) {
  trace_call(0x801AD9E0u);
  c->r[0]=R32(c->r[13]+0xFFFFB394u); // 801AD9E0
  c->r[4]=0u+0x802C0000u; // 801AD9E4
  c->r[4]=c->r[4]+0xFFFF8160u; // 801AD9E8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1536); // 801AD9EC
  c->r[4]=c->r[4]+c->r[0]; // 801AD9F0
  c->r[0]=c->r[4]+0x00000480u; // 801AD9F4
  W32(c->r[3]+0x00000000u,c->r[0]); // 801AD9F8
  return; // 801AD9FC
}

// __AXGetAuxCInput
void f_801ADA00(Ctx* __restrict c) {
  trace_call(0x801ADA00u);
  c->r[0]=R32(c->r[13]+0xFFFFB3C0u); // 801ADA00
  cmps(c,0,(int32_t)c->r[0],0); // 801ADA04
  if (crb(c,2)) { goto L_801ADA28; } // 801ADA08
  c->r[0]=R32(c->r[13]+0xFFFFB398u); // 801ADA0C
  c->r[4]=0u+0x802C0000u; // 801ADA10
  c->r[4]=c->r[4]+0xFFFF9360u; // 801ADA14
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1152); // 801ADA18
  c->r[0]=c->r[4]+c->r[0]; // 801ADA1C
  W32(c->r[3]+0x00000000u,c->r[0]); // 801ADA20
  return; // 801ADA24
L_801ADA28:;
  c->r[0]=0u+0x00000000u; // 801ADA28
  W32(c->r[3]+0x00000000u,c->r[0]); // 801ADA2C
  return; // 801ADA30
}

// __AXGetAuxCOutput
void f_801ADA40(Ctx* __restrict c) {
  trace_call(0x801ADA40u);
  c->r[0]=R32(c->r[13]+0xFFFFB394u); // 801ADA40
  c->r[4]=0u+0x802C0000u; // 801ADA44
  c->r[4]=c->r[4]+0xFFFF9360u; // 801ADA48
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1152); // 801ADA4C
  c->r[0]=c->r[4]+c->r[0]; // 801ADA50
  W32(c->r[3]+0x00000000u,c->r[0]); // 801ADA54
  return; // 801ADA58
}

// __AXProcessAux
void f_801ADA60(Ctx* __restrict c) {
  trace_call(0x801ADA60u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ADA60
  c->r[0]=c->lr; // 801ADA64
  W32(c->r[1]+0x00000064u,c->r[0]); // 801ADA68
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 801ADA6C
  c->r[31]=0u+0x802B0000u; // 801ADA70
  c->r[31]=c->r[31]+0x00006F60u; // 801ADA74
  W32(c->r[1]+0x00000058u,c->r[30]); // 801ADA78
  c->r[8]=c->r[31]+0x00000000u; // 801ADA7C
  c->r[3]=c->r[31]+0x00001200u; // 801ADA80
  W32(c->r[1]+0x00000054u,c->r[29]); // 801ADA84
  c->r[9]=R32(c->r[13]+0xFFFFB398u); // 801ADA88
  c->r[7]=R32(c->r[13]+0xFFFFB394u); // 801ADA8C
  c->r[5]=(uint32_t)((int32_t)c->r[9]*(int32_t)1536); // 801ADA90
  c->r[0]=R32(c->r[13]+0xFFFFB3C8u); // 801ADA94
  cmps(c,0,(int32_t)c->r[0],0); // 801ADA98
  c->r[4]=(uint32_t)((int32_t)c->r[7]*(int32_t)1536); // 801ADA9C
  c->r[0]=c->r[8]+c->r[5]; // 801ADAA0
  W32(c->r[13]+0xFFFFB3B0u,c->r[0]); // 801ADAA4
  c->r[0]=c->r[3]+c->r[5]; // 801ADAA8
  W32(c->r[13]+0xFFFFB3A8u,c->r[0]); // 801ADAAC
  c->r[5]=c->r[3]+c->r[4]; // 801ADAB0
  c->r[6]=c->r[8]+c->r[4]; // 801ADAB4
  c->r[3]=(uint32_t)((int32_t)c->r[9]*(int32_t)1152); // 801ADAB8
  c->r[4]=c->r[31]+0x00002400u; // 801ADABC
  W32(c->r[13]+0xFFFFB3ACu,c->r[6]); // 801ADAC0
  c->r[0]=(uint32_t)((int32_t)c->r[7]*(int32_t)1152); // 801ADAC4
  W32(c->r[13]+0xFFFFB3A4u,c->r[5]); // 801ADAC8
  c->r[3]=c->r[4]+c->r[3]; // 801ADACC
  W32(c->r[13]+0xFFFFB3A0u,c->r[3]); // 801ADAD0
  c->r[0]=c->r[4]+c->r[0]; // 801ADAD4
  W32(c->r[13]+0xFFFFB39Cu,c->r[0]); // 801ADAD8
  if (crb(c,2)) { goto L_801ADB8C; } // 801ADADC
  c->r[0]=R32(c->r[13]+0xFFFFB3F0u); // 801ADAE0
  cmpu(c,0,c->r[0],0x00000002u); // 801ADAE4
  if (!crb(c,2)) { goto L_801ADB40; } // 801ADAE8
  c->r[0]=R32(c->r[13]+0xFFFFB390u); // 801ADAEC
  c->r[4]=0u+0x00000600u; // 801ADAF0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1536); // 801ADAF4
  c->r[3]=c->r[8]+c->r[0]; // 801ADAF8
  W32(c->r[1]+0x00000040u,c->r[3]); // 801ADAFC
  c->r[6]=c->r[3]+0x00000180u; // 801ADB00
  c->r[5]=c->r[3]+0x00000300u; // 801ADB04
  c->r[0]=c->r[3]+0x00000480u; // 801ADB08
  W32(c->r[1]+0x00000044u,c->r[6]); // 801ADB0C
  W32(c->r[1]+0x00000048u,c->r[5]); // 801ADB10
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 801ADB14
  c->lr=0x801ADB1Cu; f_80188CB0(c); // 801ADB18
  c->r[12]=R32(c->r[13]+0xFFFFB3C8u); // 801ADB1C
  c->r[3]=c->r[1]+0x00000040u; // 801ADB20
  c->r[4]=R32(c->r[13]+0xFFFFB3BCu); // 801ADB24
  c->ctr=c->r[12]; // 801ADB28
  if (true) { c->lr=0x801ADB30u; dispatch(c,c->ctr); } // 801ADB2C
  c->r[3]=R32(c->r[1]+0x00000040u); // 801ADB30
  c->r[4]=0u+0x00000600u; // 801ADB34
  c->lr=0x801ADB3Cu; f_80188D40(c); // 801ADB38
  goto L_801ADBD0; // 801ADB3C
L_801ADB40:;
  c->r[0]=R32(c->r[13]+0xFFFFB390u); // 801ADB40
  c->r[4]=0u+0x00000480u; // 801ADB44
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1536); // 801ADB48
  c->r[3]=c->r[8]+c->r[0]; // 801ADB4C
  W32(c->r[1]+0x00000030u,c->r[3]); // 801ADB50
  c->r[5]=c->r[3]+0x00000180u; // 801ADB54
  c->r[0]=c->r[3]+0x00000300u; // 801ADB58
  W32(c->r[1]+0x00000034u,c->r[5]); // 801ADB5C
  W32(c->r[1]+0x00000038u,c->r[0]); // 801ADB60
  c->lr=0x801ADB68u; f_80188CB0(c); // 801ADB64
  c->r[12]=R32(c->r[13]+0xFFFFB3C8u); // 801ADB68
  c->r[3]=c->r[1]+0x00000030u; // 801ADB6C
  c->r[4]=R32(c->r[13]+0xFFFFB3BCu); // 801ADB70
  c->ctr=c->r[12]; // 801ADB74
  if (true) { c->lr=0x801ADB7Cu; dispatch(c,c->ctr); } // 801ADB78
  c->r[3]=R32(c->r[1]+0x00000030u); // 801ADB7C
  c->r[4]=0u+0x00000480u; // 801ADB80
  c->lr=0x801ADB88u; f_80188D40(c); // 801ADB84
  goto L_801ADBD0; // 801ADB88
L_801ADB8C:;
  c->r[3]=R32(c->r[13]+0xFFFFB390u); // 801ADB8C
  c->r[30]=c->r[13]+0xFFFFB3D4u; // 801ADB90
  c->r[0]=R8(c->r[30]+c->r[3]); // 801ADB94
  cmps(c,0,(int32_t)c->r[0],0); // 801ADB98
  if (crb(c,2)) { goto L_801ADBD0; } // 801ADB9C
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)1536); // 801ADBA0
  c->r[4]=0u+0x00000000u; // 801ADBA4
  c->r[5]=0u+0x00000600u; // 801ADBA8
  c->r[29]=c->r[8]+c->r[0]; // 801ADBAC
  c->r[3]=c->r[29]|c->r[29]; // 801ADBB0
  c->lr=0x801ADBB8u; f_800046B4(c); // 801ADBB4
  c->r[3]=c->r[29]|c->r[29]; // 801ADBB8
  c->r[4]=0u+0x00000600u; // 801ADBBC
  c->lr=0x801ADBC4u; f_80188CE0(c); // 801ADBC0
  c->r[0]=R32(c->r[13]+0xFFFFB390u); // 801ADBC4
  c->r[3]=0u+0x00000000u; // 801ADBC8
  W8(c->r[30]+c->r[0],c->r[3]); // 801ADBCC
L_801ADBD0:;
  c->r[0]=R32(c->r[13]+0xFFFFB3C4u); // 801ADBD0
  cmps(c,0,(int32_t)c->r[0],0); // 801ADBD4
  if (crb(c,2)) { goto L_801ADC90; } // 801ADBD8
  c->r[0]=R32(c->r[13]+0xFFFFB3F0u); // 801ADBDC
  cmpu(c,0,c->r[0],0x00000002u); // 801ADBE0
  if (!crb(c,2)) { goto L_801ADC40; } // 801ADBE4
  c->r[3]=R32(c->r[13]+0xFFFFB390u); // 801ADBE8
  c->r[0]=c->r[31]+0x00001200u; // 801ADBEC
  c->r[4]=0u+0x00000600u; // 801ADBF0
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)1536); // 801ADBF4
  c->r[3]=c->r[0]+c->r[3]; // 801ADBF8
  W32(c->r[1]+0x00000020u,c->r[3]); // 801ADBFC
  c->r[6]=c->r[3]+0x00000180u; // 801ADC00
  c->r[5]=c->r[3]+0x00000300u; // 801ADC04
  c->r[0]=c->r[3]+0x00000480u; // 801ADC08
  W32(c->r[1]+0x00000024u,c->r[6]); // 801ADC0C
  W32(c->r[1]+0x00000028u,c->r[5]); // 801ADC10
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801ADC14
  c->lr=0x801ADC1Cu; f_80188CB0(c); // 801ADC18
  c->r[12]=R32(c->r[13]+0xFFFFB3C4u); // 801ADC1C
  c->r[3]=c->r[1]+0x00000020u; // 801ADC20
  c->r[4]=R32(c->r[13]+0xFFFFB3B8u); // 801ADC24
  c->ctr=c->r[12]; // 801ADC28
  if (true) { c->lr=0x801ADC30u; dispatch(c,c->ctr); } // 801ADC2C
  c->r[3]=R32(c->r[1]+0x00000020u); // 801ADC30
  c->r[4]=0u+0x00000600u; // 801ADC34
  c->lr=0x801ADC3Cu; f_80188D40(c); // 801ADC38
  goto L_801ADCD8; // 801ADC3C
L_801ADC40:;
  c->r[3]=R32(c->r[13]+0xFFFFB390u); // 801ADC40
  c->r[0]=c->r[31]+0x00001200u; // 801ADC44
  c->r[4]=0u+0x00000480u; // 801ADC48
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)1536); // 801ADC4C
  c->r[3]=c->r[0]+c->r[3]; // 801ADC50
  W32(c->r[1]+0x00000014u,c->r[3]); // 801ADC54
  c->r[5]=c->r[3]+0x00000180u; // 801ADC58
  c->r[0]=c->r[3]+0x00000300u; // 801ADC5C
  W32(c->r[1]+0x00000018u,c->r[5]); // 801ADC60
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801ADC64
  c->lr=0x801ADC6Cu; f_80188CB0(c); // 801ADC68
  c->r[12]=R32(c->r[13]+0xFFFFB3C4u); // 801ADC6C
  c->r[3]=c->r[1]+0x00000014u; // 801ADC70
  c->r[4]=R32(c->r[13]+0xFFFFB3B8u); // 801ADC74
  c->ctr=c->r[12]; // 801ADC78
  if (true) { c->lr=0x801ADC80u; dispatch(c,c->ctr); } // 801ADC7C
  c->r[3]=R32(c->r[1]+0x00000014u); // 801ADC80
  c->r[4]=0u+0x00000480u; // 801ADC84
  c->lr=0x801ADC8Cu; f_80188D40(c); // 801ADC88
  goto L_801ADCD8; // 801ADC8C
L_801ADC90:;
  c->r[3]=R32(c->r[13]+0xFFFFB390u); // 801ADC90
  c->r[30]=c->r[13]+0xFFFFB3D0u; // 801ADC94
  c->r[0]=R8(c->r[30]+c->r[3]); // 801ADC98
  cmps(c,0,(int32_t)c->r[0],0); // 801ADC9C
  if (crb(c,2)) { goto L_801ADCD8; } // 801ADCA0
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)1536); // 801ADCA4
  c->r[0]=c->r[31]+0x00001200u; // 801ADCA8
  c->r[4]=0u+0x00000000u; // 801ADCAC
  c->r[5]=0u+0x00000600u; // 801ADCB0
  c->r[29]=c->r[0]+c->r[3]; // 801ADCB4
  c->r[3]=c->r[29]|c->r[29]; // 801ADCB8
  c->lr=0x801ADCC0u; f_800046B4(c); // 801ADCBC
  c->r[3]=c->r[29]|c->r[29]; // 801ADCC0
  c->r[4]=0u+0x00000600u; // 801ADCC4
  c->lr=0x801ADCCCu; f_80188CE0(c); // 801ADCC8
  c->r[0]=R32(c->r[13]+0xFFFFB390u); // 801ADCCC
  c->r[3]=0u+0x00000000u; // 801ADCD0
  W8(c->r[30]+c->r[0],c->r[3]); // 801ADCD4
L_801ADCD8:;
  c->r[0]=R32(c->r[13]+0xFFFFB3C0u); // 801ADCD8
  cmps(c,0,(int32_t)c->r[0],0); // 801ADCDC
  if (crb(c,2)) { goto L_801ADD40; } // 801ADCE0
  c->r[0]=R32(c->r[13]+0xFFFFB3F0u); // 801ADCE4
  cmpu(c,0,c->r[0],0x00000002u); // 801ADCE8
  if (crb(c,2)) { goto L_801ADD40; } // 801ADCEC
  c->r[3]=R32(c->r[13]+0xFFFFB390u); // 801ADCF0
  c->r[0]=c->r[31]+0x00002400u; // 801ADCF4
  c->r[4]=0u+0x00000480u; // 801ADCF8
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)1152); // 801ADCFC
  c->r[3]=c->r[0]+c->r[3]; // 801ADD00
  W32(c->r[1]+0x00000008u,c->r[3]); // 801ADD04
  c->r[5]=c->r[3]+0x00000180u; // 801ADD08
  c->r[0]=c->r[3]+0x00000300u; // 801ADD0C
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 801ADD10
  W32(c->r[1]+0x00000010u,c->r[0]); // 801ADD14
  c->lr=0x801ADD1Cu; f_80188CB0(c); // 801ADD18
  c->r[12]=R32(c->r[13]+0xFFFFB3C0u); // 801ADD1C
  c->r[3]=c->r[1]+0x00000008u; // 801ADD20
  c->r[4]=R32(c->r[13]+0xFFFFB3B4u); // 801ADD24
  c->ctr=c->r[12]; // 801ADD28
  if (true) { c->lr=0x801ADD30u; dispatch(c,c->ctr); } // 801ADD2C
  c->r[3]=R32(c->r[1]+0x00000008u); // 801ADD30
  c->r[4]=0u+0x00000480u; // 801ADD34
  c->lr=0x801ADD3Cu; f_80188D40(c); // 801ADD38
  goto L_801ADD94; // 801ADD3C
L_801ADD40:;
  c->r[0]=R32(c->r[13]+0xFFFFB3C0u); // 801ADD40
  cmps(c,0,(int32_t)c->r[0],0); // 801ADD44
  if (!crb(c,2)) { goto L_801ADD94; } // 801ADD48
  c->r[3]=R32(c->r[13]+0xFFFFB390u); // 801ADD4C
  c->r[30]=c->r[13]+0xFFFFB3CCu; // 801ADD50
  c->r[0]=R8(c->r[30]+c->r[3]); // 801ADD54
  cmps(c,0,(int32_t)c->r[0],0); // 801ADD58
  if (crb(c,2)) { goto L_801ADD94; } // 801ADD5C
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)1152); // 801ADD60
  c->r[0]=c->r[31]+0x00002400u; // 801ADD64
  c->r[4]=0u+0x00000000u; // 801ADD68
  c->r[5]=0u+0x00000480u; // 801ADD6C
  c->r[29]=c->r[0]+c->r[3]; // 801ADD70
  c->r[3]=c->r[29]|c->r[29]; // 801ADD74
  c->lr=0x801ADD7Cu; f_800046B4(c); // 801ADD78
  c->r[3]=c->r[29]|c->r[29]; // 801ADD7C
  c->r[4]=0u+0x00000480u; // 801ADD80
  c->lr=0x801ADD88u; f_80188CE0(c); // 801ADD84
  c->r[0]=R32(c->r[13]+0xFFFFB390u); // 801ADD88
  c->r[3]=0u+0x00000000u; // 801ADD8C
  W8(c->r[30]+c->r[0],c->r[3]); // 801ADD90
L_801ADD94:;
  c->r[3]=0u+0xAAAB0000u; // 801ADD94
  c->r[5]=R32(c->r[13]+0xFFFFB398u); // 801ADD98
  c->r[0]=c->r[3]+0xFFFFAAABu; // 801ADD9C
  c->r[3]=R32(c->r[13]+0xFFFFB390u); // 801ADDA0
  c->r[4]=R32(c->r[13]+0xFFFFB394u); // 801ADDA4
  c->r[7]=c->r[5]+0x00000001u; // 801ADDA8
  c->r[3]=c->r[3]+0x00000001u; // 801ADDAC
  c->r[5]=c->r[4]+0x00000001u; // 801ADDB0
  c->r[6]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[7])>>32); // 801ADDB4
  c->r[4]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[5])>>32); // 801ADDB8
  c->r[6]=rotl(c->r[6],31)&0x7FFFFFFFu; // 801ADDBC
  c->r[0]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[3])>>32); // 801ADDC0
  c->r[4]=rotl(c->r[4],31)&0x7FFFFFFFu; // 801ADDC4
  c->r[6]=(uint32_t)((int32_t)c->r[6]*(int32_t)3); // 801ADDC8
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 801ADDCC
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)3); // 801ADDD0
  c->r[6]=c->r[7]-c->r[6]; // 801ADDD4
  W32(c->r[13]+0xFFFFB398u,c->r[6]); // 801ADDD8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3); // 801ADDDC
  c->r[4]=c->r[5]-c->r[4]; // 801ADDE0
  W32(c->r[13]+0xFFFFB394u,c->r[4]); // 801ADDE4
  c->r[0]=c->r[3]-c->r[0]; // 801ADDE8
  W32(c->r[13]+0xFFFFB390u,c->r[0]); // 801ADDEC
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 801ADDF0
  c->r[30]=R32(c->r[1]+0x00000058u); // 801ADDF4
  c->r[29]=R32(c->r[1]+0x00000054u); // 801ADDF8
  c->r[0]=R32(c->r[1]+0x00000064u); // 801ADDFC
  c->lr=c->r[0]; // 801ADE00
  c->r[1]=c->r[1]+0x00000060u; // 801ADE04
  return; // 801ADE08
}

// AXRegisterAuxACallback
void f_801ADE10(Ctx* __restrict c) {
  trace_call(0x801ADE10u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ADE10
  c->r[0]=c->lr; // 801ADE14
  W32(c->r[1]+0x00000014u,c->r[0]); // 801ADE18
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801ADE1C
  c->r[31]=c->r[3]|c->r[3]; // 801ADE20
  W32(c->r[1]+0x00000008u,c->r[30]); // 801ADE24
  c->r[30]=c->r[4]|c->r[4]; // 801ADE28
  c->lr=0x801ADE30u; f_8018D6A0(c); // 801ADE2C
  cmps(c,0,(int32_t)c->r[31],0); // 801ADE30
  W32(c->r[13]+0xFFFFB3C8u,c->r[31]); // 801ADE34
  c->r[31]=c->r[3]|c->r[3]; // 801ADE38
  W32(c->r[13]+0xFFFFB3BCu,c->r[30]); // 801ADE3C
  if (!crb(c,2)) { goto L_801ADE54; } // 801ADE40
  c->r[3]=c->r[13]+0xFFFFB3D4u; // 801ADE44
  c->r[4]=0u+0x00000001u; // 801ADE48
  c->r[5]=0u+0x00000003u; // 801ADE4C
  c->lr=0x801ADE54u; f_800046B4(c); // 801ADE50
L_801ADE54:;
  c->r[3]=c->r[31]|c->r[31]; // 801ADE54
  c->lr=0x801ADE5Cu; f_8018D6E0(c); // 801ADE58
  c->r[0]=R32(c->r[1]+0x00000014u); // 801ADE5C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801ADE60
  c->r[30]=R32(c->r[1]+0x00000008u); // 801ADE64
  c->lr=c->r[0]; // 801ADE68
  c->r[1]=c->r[1]+0x00000010u; // 801ADE6C
  return; // 801ADE70
}

// AXRegisterAuxBCallback
void f_801ADE80(Ctx* __restrict c) {
  trace_call(0x801ADE80u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ADE80
  c->r[0]=c->lr; // 801ADE84
  W32(c->r[1]+0x00000014u,c->r[0]); // 801ADE88
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801ADE8C
  c->r[31]=c->r[3]|c->r[3]; // 801ADE90
  W32(c->r[1]+0x00000008u,c->r[30]); // 801ADE94
  c->r[30]=c->r[4]|c->r[4]; // 801ADE98
  c->lr=0x801ADEA0u; f_8018D6A0(c); // 801ADE9C
  cmps(c,0,(int32_t)c->r[31],0); // 801ADEA0
  W32(c->r[13]+0xFFFFB3C4u,c->r[31]); // 801ADEA4
  c->r[31]=c->r[3]|c->r[3]; // 801ADEA8
  W32(c->r[13]+0xFFFFB3B8u,c->r[30]); // 801ADEAC
  if (!crb(c,2)) { goto L_801ADEC4; } // 801ADEB0
  c->r[3]=c->r[13]+0xFFFFB3D0u; // 801ADEB4
  c->r[4]=0u+0x00000001u; // 801ADEB8
  c->r[5]=0u+0x00000003u; // 801ADEBC
  c->lr=0x801ADEC4u; f_800046B4(c); // 801ADEC0
L_801ADEC4:;
  c->r[3]=c->r[31]|c->r[31]; // 801ADEC4
  c->lr=0x801ADECCu; f_8018D6E0(c); // 801ADEC8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801ADECC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801ADED0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801ADED4
  c->lr=c->r[0]; // 801ADED8
  c->r[1]=c->r[1]+0x00000010u; // 801ADEDC
  return; // 801ADEE0
}

// AXRegisterAuxCCallback
void f_801ADEF0(Ctx* __restrict c) {
  trace_call(0x801ADEF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ADEF0
  c->r[0]=c->lr; // 801ADEF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801ADEF8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801ADEFC
  c->r[31]=c->r[3]|c->r[3]; // 801ADF00
  W32(c->r[1]+0x00000008u,c->r[30]); // 801ADF04
  c->r[30]=c->r[4]|c->r[4]; // 801ADF08
  c->lr=0x801ADF10u; f_8018D6A0(c); // 801ADF0C
  cmps(c,0,(int32_t)c->r[31],0); // 801ADF10
  W32(c->r[13]+0xFFFFB3C0u,c->r[31]); // 801ADF14
  c->r[31]=c->r[3]|c->r[3]; // 801ADF18
  W32(c->r[13]+0xFFFFB3B4u,c->r[30]); // 801ADF1C
  if (!crb(c,2)) { goto L_801ADF34; } // 801ADF20
  c->r[3]=c->r[13]+0xFFFFB3CCu; // 801ADF24
  c->r[4]=0u+0x00000001u; // 801ADF28
  c->r[5]=0u+0x00000003u; // 801ADF2C
  c->lr=0x801ADF34u; f_800046B4(c); // 801ADF30
L_801ADF34:;
  c->r[3]=c->r[31]|c->r[31]; // 801ADF34
  c->lr=0x801ADF3Cu; f_8018D6E0(c); // 801ADF38
  c->r[0]=R32(c->r[1]+0x00000014u); // 801ADF3C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801ADF40
  c->r[30]=R32(c->r[1]+0x00000008u); // 801ADF44
  c->lr=c->r[0]; // 801ADF48
  c->r[1]=c->r[1]+0x00000010u; // 801ADF4C
  return; // 801ADF50
}

// AXGetAuxACallback
void f_801ADF60(Ctx* __restrict c) {
  trace_call(0x801ADF60u);
  c->r[0]=R32(c->r[13]+0xFFFFB3C8u); // 801ADF60
  W32(c->r[3]+0x00000000u,c->r[0]); // 801ADF64
  c->r[0]=R32(c->r[13]+0xFFFFB3BCu); // 801ADF68
  W32(c->r[4]+0x00000000u,c->r[0]); // 801ADF6C
  return; // 801ADF70
}

// AXGetAuxBCallback
void f_801ADF80(Ctx* __restrict c) {
  trace_call(0x801ADF80u);
  c->r[0]=R32(c->r[13]+0xFFFFB3C4u); // 801ADF80
  W32(c->r[3]+0x00000000u,c->r[0]); // 801ADF84
  c->r[0]=R32(c->r[13]+0xFFFFB3B8u); // 801ADF88
  W32(c->r[4]+0x00000000u,c->r[0]); // 801ADF8C
  return; // 801ADF90
}

// AXGetAuxCCallback
void f_801ADFA0(Ctx* __restrict c) {
  trace_call(0x801ADFA0u);
  c->r[0]=R32(c->r[13]+0xFFFFB3C0u); // 801ADFA0
  W32(c->r[3]+0x00000000u,c->r[0]); // 801ADFA4
  c->r[0]=R32(c->r[13]+0xFFFFB3B4u); // 801ADFA8
  W32(c->r[4]+0x00000000u,c->r[0]); // 801ADFAC
  return; // 801ADFB0
}

// __AXGetCommandListCycles
void f_801ADFC0(Ctx* __restrict c) {
  trace_call(0x801ADFC0u);
  c->r[3]=R32(c->r[13]+0xFFFFB3ECu); // 801ADFC0
  return; // 801ADFC4
}

// __AXGetCommandListAddress
void f_801ADFD0(Ctx* __restrict c) {
  trace_call(0x801ADFD0u);
  c->r[5]=R32(c->r[13]+0xFFFFB3F8u); // 801ADFD0
  c->r[4]=0u+0x802C0000u; // 801ADFD4
  c->r[4]=c->r[4]+0xFFFFA0E0u; // 801ADFD8
  c->r[3]=c->r[5]+0x00000001u; // 801ADFDC
  c->r[5]=rotl(c->r[5],7)&0xFFFFFF80u; // 801ADFE0
  c->r[0]=rotl(c->r[3],7)&0x00000080u; // 801ADFE4
  c->r[3]=rotl(c->r[3],0)&0x00000001u; // 801ADFE8
  W32(c->r[13]+0xFFFFB3F8u,c->r[3]); // 801ADFEC
  c->r[0]=c->r[4]+c->r[0]; // 801ADFF0
  W32(c->r[13]+0xFFFFB3F4u,c->r[0]); // 801ADFF4
  c->r[3]=c->r[4]+c->r[5]; // 801ADFF8
  return; // 801ADFFC
}

// __AXNextFrame
void f_801AE000(Ctx* __restrict c) {
  trace_call(0x801AE000u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AE000
  c->r[0]=c->lr; // 801AE004
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AE008
  c->r[0]=0u+0x00001E83u; // 801AE00C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801AE010
  W32(c->r[1]+0x00000018u,c->r[30]); // 801AE014
  c->r[30]=c->r[5]|c->r[5]; // 801AE018
  W32(c->r[1]+0x00000014u,c->r[29]); // 801AE01C
  c->r[29]=c->r[4]|c->r[4]; // 801AE020
  W32(c->r[1]+0x00000010u,c->r[28]); // 801AE024
  c->r[28]=c->r[3]|c->r[3]; // 801AE028
  W32(c->r[13]+0xFFFFB3ECu,c->r[0]); // 801AE02C
  c->r[31]=R32(c->r[13]+0xFFFFB3F4u); // 801AE030
  c->lr=0x801AE038u; f_801AF2E0(c); // 801AE034
  W32(c->r[1]+0x00000008u,c->r[3]); // 801AE038
  c->r[0]=0u+0x00000000u; // 801AE03C
  c->r[3]=R32(c->r[13]+0xFFFFB3F4u); // 801AE040
  W16(c->r[3]+0x00000000u,c->r[0]); // 801AE044
  c->r[3]=R32(c->r[13]+0xFFFFB3F4u); // 801AE048
  c->r[0]=R32(c->r[1]+0x00000008u); // 801AE04C
  c->r[3]=c->r[3]+0x00000002u; // 801AE050
  W32(c->r[13]+0xFFFFB3F4u,c->r[3]); // 801AE054
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801AE058
  W16(c->r[3]+0x00000000u,c->r[0]); // 801AE05C
  c->r[3]=R32(c->r[13]+0xFFFFB3F4u); // 801AE060
  c->r[0]=R32(c->r[1]+0x00000008u); // 801AE064
  c->r[3]=c->r[3]+0x00000002u; // 801AE068
  W32(c->r[13]+0xFFFFB3F4u,c->r[3]); // 801AE06C
  W16(c->r[3]+0x00000000u,c->r[0]); // 801AE070
  c->r[5]=R32(c->r[13]+0xFFFFB3F0u); // 801AE074
  c->r[4]=R32(c->r[13]+0xFFFFB3F4u); // 801AE078
  c->r[3]=R32(c->r[13]+0xFFFFB3ECu); // 801AE07C
  cmps(c,0,(int32_t)c->r[5],0); // 801AE080
  c->r[4]=c->r[4]+0x00000002u; // 801AE084
  W32(c->r[13]+0xFFFFB3F4u,c->r[4]); // 801AE088
  c->r[0]=c->r[3]+0x0000101Eu; // 801AE08C
  W32(c->r[13]+0xFFFFB3ECu,c->r[0]); // 801AE090
  if (crb(c,2)) { goto L_801AE0AC; } // 801AE094
  cmpu(c,0,c->r[5],0x00000001u); // 801AE098
  if (crb(c,2)) { goto L_801AE0F4; } // 801AE09C
  cmpu(c,0,c->r[5],0x00000002u); // 801AE0A0
  if (crb(c,2)) { goto L_801AE13C; } // 801AE0A4
  goto L_801AE180; // 801AE0A8
L_801AE0AC:;
  c->r[0]=0u+0x00000001u; // 801AE0AC
  W16(c->r[4]+0x00000000u,c->r[0]); // 801AE0B0
  c->r[0]=rotl(c->r[28],16)&0x0000FFFFu; // 801AE0B4
  c->r[3]=R32(c->r[13]+0xFFFFB3F4u); // 801AE0B8
  c->r[3]=c->r[3]+0x00000002u; // 801AE0BC
  W32(c->r[13]+0xFFFFB3F4u,c->r[3]); // 801AE0C0
  W16(c->r[3]+0x00000000u,c->r[0]); // 801AE0C4
  c->r[3]=R32(c->r[13]+0xFFFFB3F4u); // 801AE0C8
  c->r[3]=c->r[3]+0x00000002u; // 801AE0CC
  W32(c->r[13]+0xFFFFB3F4u,c->r[3]); // 801AE0D0
  W16(c->r[3]+0x00000000u,c->r[28]); // 801AE0D4
  c->r[4]=R32(c->r[13]+0xFFFFB3F4u); // 801AE0D8
  c->r[3]=R32(c->r[13]+0xFFFFB3ECu); // 801AE0DC
  c->r[5]=c->r[4]+0x00000002u; // 801AE0E0
  W32(c->r[13]+0xFFFFB3F4u,c->r[5]); // 801AE0E4
  c->r[0]=c->r[3]+0x000002DDu; // 801AE0E8
  W32(c->r[13]+0xFFFFB3ECu,c->r[0]); // 801AE0EC
  goto L_801AE180; // 801AE0F0
L_801AE0F4:;
  c->r[0]=0u+0x00000002u; // 801AE0F4
  W16(c->r[4]+0x00000000u,c->r[0]); // 801AE0F8
  c->r[0]=rotl(c->r[28],16)&0x0000FFFFu; // 801AE0FC
  c->r[3]=R32(c->r[13]+0xFFFFB3F4u); // 801AE100
  c->r[3]=c->r[3]+0x00000002u; // 801AE104
  W32(c->r[13]+0xFFFFB3F4u,c->r[3]); // 801AE108
  W16(c->r[3]+0x00000000u,c->r[0]); // 801AE10C
  c->r[3]=R32(c->r[13]+0xFFFFB3F4u); // 801AE110
  c->r[3]=c->r[3]+0x00000002u; // 801AE114
  W32(c->r[13]+0xFFFFB3F4u,c->r[3]); // 801AE118
  W16(c->r[3]+0x00000000u,c->r[28]); // 801AE11C
  c->r[4]=R32(c->r[13]+0xFFFFB3F4u); // 801AE120
  c->r[3]=R32(c->r[13]+0xFFFFB3ECu); // 801AE124
  c->r[5]=c->r[4]+0x00000002u; // 801AE128
  W32(c->r[13]+0xFFFFB3F4u,c->r[5]); // 801AE12C
  c->r[0]=c->r[3]+0x0000033Du; // 801AE130
  W32(c->r[13]+0xFFFFB3ECu,c->r[0]); // 801AE134
  goto L_801AE180; // 801AE138
L_801AE13C:;
  c->r[0]=0u+0x00000003u; // 801AE13C
  W16(c->r[4]+0x00000000u,c->r[0]); // 801AE140
  c->r[0]=rotl(c->r[28],16)&0x0000FFFFu; // 801AE144
  c->r[3]=R32(c->r[13]+0xFFFFB3F4u); // 801AE148
  c->r[3]=c->r[3]+0x00000002u; // 801AE14C
  W32(c->r[13]+0xFFFFB3F4u,c->r[3]); // 801AE150
  W16(c->r[3]+0x00000000u,c->r[0]); // 801AE154
  c->r[3]=R32(c->r[13]+0xFFFFB3F4u); // 801AE158
  c->r[3]=c->r[3]+0x00000002u; // 801AE15C
  W32(c->r[13]+0xFFFFB3F4u,c->r[3]); // 801AE160
  W16(c->r[3]+0x00000000u,c->r[28]); // 801AE164
  c->r[4]=R32(c->r[13]+0xFFFFB3F4u); // 801AE168
  c->r[3]=R32(c->r[13]+0xFFFFB3ECu); // 801AE16C
  c->r[5]=c->r[4]+0x00000002u; // 801AE170
  W32(c->r[13]+0xFFFFB3F4u,c->r[5]); // 801AE174
  c->r[0]=c->r[3]+0x0000039Du; // 801AE178
  W32(c->r[13]+0xFFFFB3ECu,c->r[0]); // 801AE17C
L_801AE180:;
  c->lr=0x801AE184u; f_801AFF80(c); // 801AE180
  W32(c->r[1]+0x00000008u,c->r[3]); // 801AE184
  c->r[0]=0u+0x00000004u; // 801AE188
  c->r[3]=R32(c->r[13]+0xFFFFB3F4u); // 801AE18C
  W16(c->r[3]+0x00000000u,c->r[0]); // 801AE190
  c->r[3]=R32(c->r[13]+0xFFFFB3F4u); // 801AE194
  c->r[0]=R32(c->r[1]+0x00000008u); // 801AE198
  c->r[3]=c->r[3]+0x00000002u; // 801AE19C
  W32(c->r[13]+0xFFFFB3F4u,c->r[3]); // 801AE1A0
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801AE1A4
  W16(c->r[3]+0x00000000u,c->r[0]); // 801AE1A8
  c->r[3]=R32(c->r[13]+0xFFFFB3F4u); // 801AE1AC
  c->r[0]=R32(c->r[1]+0x00000008u); // 801AE1B0
  c->r[3]=c->r[3]+0x00000002u; // 801AE1B4
  W32(c->r[13]+0xFFFFB3F4u,c->r[3]); // 801AE1B8
  W16(c->r[3]+0x00000000u,c->r[0]); // 801AE1BC
  c->r[0]=R32(c->r[13]+0xFFFFB3F0u); // 801AE1C0
  c->r[3]=R32(c->r[13]+0xFFFFB3F4u); // 801AE1C4
  cmpu(c,0,c->r[0],0x00000002u); // 801AE1C8
  c->r[5]=c->r[3]+0x00000002u; // 801AE1CC
  W32(c->r[13]+0xFFFFB3F4u,c->r[5]); // 801AE1D0
  if (!crb(c,2)) { goto L_801AE4FC; } // 801AE1D4
  c->r[3]=c->r[1]+0x00000008u; // 801AE1D8
  c->lr=0x801AE1E0u; f_801AD840(c); // 801AE1DC
  c->r[0]=R32(c->r[1]+0x00000008u); // 801AE1E0
  cmps(c,0,(int32_t)c->r[0],0); // 801AE1E4
  if (crb(c,2)) { goto L_801AE368; } // 801AE1E8
  c->r[4]=R32(c->r[13]+0xFFFFB3F4u); // 801AE1EC
  c->r[0]=0u+0x00000008u; // 801AE1F0
  c->r[3]=c->r[1]+0x00000008u; // 801AE1F4
  W16(c->r[4]+0x00000000u,c->r[0]); // 801AE1F8
  c->r[4]=R32(c->r[13]+0xFFFFB3F4u); // 801AE1FC
  c->r[0]=R16(c->r[13]+0xFFFFB3DCu); // 801AE200
  c->r[4]=c->r[4]+0x00000002u; // 801AE204
  W32(c->r[13]+0xFFFFB3F4u,c->r[4]); // 801AE208
  W16(c->r[4]+0x00000000u,c->r[0]); // 801AE20C
  c->r[4]=R32(c->r[13]+0xFFFFB3F4u); // 801AE210
  c->r[0]=R32(c->r[1]+0x00000008u); // 801AE214
  c->r[4]=c->r[4]+0x00000002u; // 801AE218
  W32(c->r[13]+0xFFFFB3F4u,c->r[4]); // 801AE21C
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801AE220
  W16(c->r[4]+0x00000000u,c->r[0]); // 801AE224
  c->r[4]=R32(c->r[13]+0xFFFFB3F4u); // 801AE228
  c->r[0]=R32(c->r[1]+0x00000008u); // 801AE22C
  c->r[4]=c->r[4]+0x00000002u; // 801AE230
  W32(c->r[13]+0xFFFFB3F4u,c->r[4]); // 801AE234
  W16(c->r[4]+0x00000000u,c->r[0]); // 801AE238
  c->r[4]=R32(c->r[13]+0xFFFFB3F4u); // 801AE23C
  c->r[5]=c->r[4]+0x00000002u; // 801AE240
  W32(c->r[13]+0xFFFFB3F4u,c->r[5]); // 801AE244
  c->lr=0x801AE24Cu; f_801AD8A0(c); // 801AE248
  c->r[0]=R32(c->r[1]+0x00000008u); // 801AE24C
  c->r[3]=c->r[1]+0x00000008u; // 801AE250
  c->r[4]=R32(c->r[13]+0xFFFFB3F4u); // 801AE254
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801AE258
  W16(c->r[4]+0x00000000u,c->r[0]); // 801AE25C
  c->r[4]=R32(c->r[13]+0xFFFFB3F4u); // 801AE260
  c->r[0]=R32(c->r[1]+0x00000008u); // 801AE264
  c->r[4]=c->r[4]+0x00000002u; // 801AE268
  W32(c->r[13]+0xFFFFB3F4u,c->r[4]); // 801AE26C
  W16(c->r[4]+0x00000000u,c->r[0]); // 801AE270
  c->r[4]=R32(c->r[13]+0xFFFFB3F4u); // 801AE274
  c->r[5]=c->r[4]+0x00000002u; // 801AE278
  W32(c->r[13]+0xFFFFB3F4u,c->r[5]); // 801AE27C
  c->lr=0x801AE284u; f_801AD880(c); // 801AE280
  c->r[0]=R32(c->r[1]+0x00000008u); // 801AE284
  c->r[3]=c->r[1]+0x00000008u; // 801AE288
  c->r[4]=R32(c->r[13]+0xFFFFB3F4u); // 801AE28C
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801AE290
  W16(c->r[4]+0x00000000u,c->r[0]); // 801AE294
  c->r[4]=R32(c->r[13]+0xFFFFB3F4u); // 801AE298
  c->r[0]=R32(c->r[1]+0x00000008u); // 801AE29C
  c->r[4]=c->r[4]+0x00000002u; // 801AE2A0
  W32(c->r[13]+0xFFFFB3F4u,c->r[4]); // 801AE2A4
  W16(c->r[4]+0x00000000u,c->r[0]); // 801AE2A8
  c->r[4]=R32(c->r[13]+0xFFFFB3F4u); // 801AE2AC
  c->r[5]=c->r[4]+0x00000002u; // 801AE2B0
  W32(c->r[13]+0xFFFFB3F4u,c->r[5]); // 801AE2B4
  c->lr=0x801AE2BCu; f_801AD8C0(c); // 801AE2B8
  c->r[0]=R32(c->r[1]+0x00000008u); // 801AE2BC
  c->r[3]=c->r[1]+0x00000008u; // 801AE2C0
  c->r[4]=R32(c->r[13]+0xFFFFB3F4u); // 801AE2C4
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801AE2C8
  W16(c->r[4]+0x00000000u,c->r[0]); // 801AE2CC
  c->r[4]=R32(c->r[13]+0xFFFFB3F4u); // 801AE2D0
  c->r[0]=R32(c->r[1]+0x00000008u); // 801AE2D4
  c->r[4]=c->r[4]+0x00000002u; // 801AE2D8
  W32(c->r[13]+0xFFFFB3F4u,c->r[4]); // 801AE2DC
  W16(c->r[4]+0x00000000u,c->r[0]); // 801AE2E0
  c->r[4]=R32(c->r[13]+0xFFFFB3F4u); // 801AE2E4
  c->r[5]=c->r[4]+0x00000002u; // 801AE2E8
  W32(c->r[13]+0xFFFFB3F4u,c->r[5]); // 801AE2EC
  c->lr=0x801AE2F4u; f_801AD8E0(c); // 801AE2F0
  c->r[0]=R32(c->r[1]+0x00000008u); // 801AE2F4
  c->r[3]=c->r[1]+0x00000008u; // 801AE2F8
  c->r[4]=R32(c->r[13]+0xFFFFB3F4u); // 801AE2FC
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801AE300
  W16(c->r[4]+0x00000000u,c->r[0]); // 801AE304
  c->r[4]=R32(c->r[13]+0xFFFFB3F4u); // 801AE308
  c->r[0]=R32(c->r[1]+0x00000008u); // 801AE30C
  c->r[4]=c->r[4]+0x00000002u; // 801AE310
  W32(c->r[13]+0xFFFFB3F4u,c->r[4]); // 801AE314
  W16(c->r[4]+0x00000000u,c->r[0]); // 801AE318
  c->r[4]=R32(c->r[13]+0xFFFFB3F4u); // 801AE31C
  c->r[5]=c->r[4]+0x00000002u; // 801AE320
  W32(c->r[13]+0xFFFFB3F4u,c->r[5]); // 801AE324
  c->lr=0x801AE32Cu; f_801AD900(c); // 801AE328
  c->r[0]=R32(c->r[1]+0x00000008u); // 801AE32C
  c->r[3]=R32(c->r[13]+0xFFFFB3F4u); // 801AE330
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801AE334
  W16(c->r[3]+0x00000000u,c->r[0]); // 801AE338
  c->r[3]=R32(c->r[13]+0xFFFFB3F4u); // 801AE33C
  c->r[0]=R32(c->r[1]+0x00000008u); // 801AE340
  c->r[3]=c->r[3]+0x00000002u; // 801AE344
  W32(c->r[13]+0xFFFFB3F4u,c->r[3]); // 801AE348
  W16(c->r[3]+0x00000000u,c->r[0]); // 801AE34C
  c->r[4]=R32(c->r[13]+0xFFFFB3F4u); // 801AE350
  c->r[3]=R32(c->r[13]+0xFFFFB3ECu); // 801AE354
  c->r[5]=c->r[4]+0x00000002u; // 801AE358
  W32(c->r[13]+0xFFFFB3F4u,c->r[5]); // 801AE35C
  c->r[0]=c->r[3]+0x00000BDCu; // 801AE360
  W32(c->r[13]+0xFFFFB3ECu,c->r[0]); // 801AE364
L_801AE368:;
  c->r[3]=c->r[1]+0x00000008u; // 801AE368
  c->lr=0x801AE370u; f_801AD920(c); // 801AE36C
  c->r[0]=R32(c->r[1]+0x00000008u); // 801AE370
  cmps(c,0,(int32_t)c->r[0],0); // 801AE374
  if (crb(c,2)) { goto L_801AE70C; } // 801AE378
  c->r[4]=R32(c->r[13]+0xFFFFB3F4u); // 801AE37C
  c->r[0]=0u+0x00000009u; // 801AE380
  c->r[3]=c->r[1]+0x00000008u; // 801AE384
  W16(c->r[4]+0x00000000u,c->r[0]); // 801AE388
  c->r[4]=R32(c->r[13]+0xFFFFB3F4u); // 801AE38C
  c->r[0]=R16(c->r[13]+0xFFFFB3DAu); // 801AE390
  c->r[4]=c->r[4]+0x00000002u; // 801AE394
  W32(c->r[13]+0xFFFFB3F4u,c->r[4]); // 801AE398
  W16(c->r[4]+0x00000000u,c->r[0]); // 801AE39C
  c->r[4]=R32(c->r[13]+0xFFFFB3F4u); // 801AE3A0
  c->r[0]=R32(c->r[1]+0x00000008u); // 801AE3A4
  c->r[4]=c->r[4]+0x00000002u; // 801AE3A8
  W32(c->r[13]+0xFFFFB3F4u,c->r[4]); // 801AE3AC
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801AE3B0
  W16(c->r[4]+0x00000000u,c->r[0]); // 801AE3B4
  c->r[4]=R32(c->r[13]+0xFFFFB3F4u); // 801AE3B8
  c->r[0]=R32(c->r[1]+0x00000008u); // 801AE3BC
  c->r[4]=c->r[4]+0x00000002u; // 801AE3C0
  W32(c->r[13]+0xFFFFB3F4u,c->r[4]); // 801AE3C4
  W16(c->r[4]+0x00000000u,c->r[0]); // 801AE3C8
  c->r[4]=R32(c->r[13]+0xFFFFB3F4u); // 801AE3CC
  c->r[5]=c->r[4]+0x00000002u; // 801AE3D0
  W32(c->r[13]+0xFFFFB3F4u,c->r[5]); // 801AE3D4
  c->lr=0x801AE3DCu; f_801AD980(c); // 801AE3D8
  c->r[0]=R32(c->r[1]+0x00000008u); // 801AE3DC
  c->r[3]=c->r[1]+0x00000008u; // 801AE3E0
  c->r[4]=R32(c->r[13]+0xFFFFB3F4u); // 801AE3E4
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801AE3E8
  W16(c->r[4]+0x00000000u,c->r[0]); // 801AE3EC
  c->r[4]=R32(c->r[13]+0xFFFFB3F4u); // 801AE3F0
  c->r[0]=R32(c->r[1]+0x00000008u); // 801AE3F4
  c->r[4]=c->r[4]+0x00000002u; // 801AE3F8
  W32(c->r[13]+0xFFFFB3F4u,c->r[4]); // 801AE3FC
  W16(c->r[4]+0x00000000u,c->r[0]); // 801AE400
  c->r[4]=R32(c->r[13]+0xFFFFB3F4u); // 801AE404
  c->r[5]=c->r[4]+0x00000002u; // 801AE408
  W32(c->r[13]+0xFFFFB3F4u,c->r[5]); // 801AE40C
  c->lr=0x801AE414u; f_801AD960(c); // 801AE410
  c->r[0]=R32(c->r[1]+0x00000008u); // 801AE414
  c->r[3]=c->r[1]+0x00000008u; // 801AE418
  c->r[4]=R32(c->r[13]+0xFFFFB3F4u); // 801AE41C
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801AE420
  W16(c->r[4]+0x00000000u,c->r[0]); // 801AE424
  c->r[4]=R32(c->r[13]+0xFFFFB3F4u); // 801AE428
  c->r[0]=R32(c->r[1]+0x00000008u); // 801AE42C
  c->r[4]=c->r[4]+0x00000002u; // 801AE430
  W32(c->r[13]+0xFFFFB3F4u,c->r[4]); // 801AE434
  W16(c->r[4]+0x00000000u,c->r[0]); // 801AE438
  c->r[4]=R32(c->r[13]+0xFFFFB3F4u); // 801AE43C
  c->r[5]=c->r[4]+0x00000002u; // 801AE440
  W32(c->r[13]+0xFFFFB3F4u,c->r[5]); // 801AE444
  c->lr=0x801AE44Cu; f_801AD9A0(c); // 801AE448
  c->r[0]=R32(c->r[1]+0x00000008u); // 801AE44C
  c->r[3]=c->r[1]+0x00000008u; // 801AE450
  c->r[4]=R32(c->r[13]+0xFFFFB3F4u); // 801AE454
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801AE458
  W16(c->r[4]+0x00000000u,c->r[0]); // 801AE45C
  c->r[4]=R32(c->r[13]+0xFFFFB3F4u); // 801AE460
  c->r[0]=R32(c->r[1]+0x00000008u); // 801AE464
  c->r[4]=c->r[4]+0x00000002u; // 801AE468
  W32(c->r[13]+0xFFFFB3F4u,c->r[4]); // 801AE46C
  W16(c->r[4]+0x00000000u,c->r[0]); // 801AE470
  c->r[4]=R32(c->r[13]+0xFFFFB3F4u); // 801AE474
  c->r[5]=c->r[4]+0x00000002u; // 801AE478
  W32(c->r[13]+0xFFFFB3F4u,c->r[5]); // 801AE47C
  c->lr=0x801AE484u; f_801AD9C0(c); // 801AE480
  c->r[0]=R32(c->r[1]+0x00000008u); // 801AE484
  c->r[3]=c->r[1]+0x00000008u; // 801AE488
  c->r[4]=R32(c->r[13]+0xFFFFB3F4u); // 801AE48C
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801AE490
  W16(c->r[4]+0x00000000u,c->r[0]); // 801AE494
  c->r[4]=R32(c->r[13]+0xFFFFB3F4u); // 801AE498
  c->r[0]=R32(c->r[1]+0x00000008u); // 801AE49C
  c->r[4]=c->r[4]+0x00000002u; // 801AE4A0
  W32(c->r[13]+0xFFFFB3F4u,c->r[4]); // 801AE4A4
  W16(c->r[4]+0x00000000u,c->r[0]); // 801AE4A8
  c->r[4]=R32(c->r[13]+0xFFFFB3F4u); // 801AE4AC
  c->r[5]=c->r[4]+0x00000002u; // 801AE4B0
  W32(c->r[13]+0xFFFFB3F4u,c->r[5]); // 801AE4B4
  c->lr=0x801AE4BCu; f_801AD9E0(c); // 801AE4B8
  c->r[0]=R32(c->r[1]+0x00000008u); // 801AE4BC
  c->r[3]=R32(c->r[13]+0xFFFFB3F4u); // 801AE4C0
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801AE4C4
  W16(c->r[3]+0x00000000u,c->r[0]); // 801AE4C8
  c->r[3]=R32(c->r[13]+0xFFFFB3F4u); // 801AE4CC
  c->r[0]=R32(c->r[1]+0x00000008u); // 801AE4D0
  c->r[3]=c->r[3]+0x00000002u; // 801AE4D4
  W32(c->r[13]+0xFFFFB3F4u,c->r[3]); // 801AE4D8
  W16(c->r[3]+0x00000000u,c->r[0]); // 801AE4DC
  c->r[4]=R32(c->r[13]+0xFFFFB3F4u); // 801AE4E0
  c->r[3]=R32(c->r[13]+0xFFFFB3ECu); // 801AE4E4
  c->r[5]=c->r[4]+0x00000002u; // 801AE4E8
  W32(c->r[13]+0xFFFFB3F4u,c->r[5]); // 801AE4EC
  c->r[0]=c->r[3]+0x00000BDCu; // 801AE4F0
  W32(c->r[13]+0xFFFFB3ECu,c->r[0]); // 801AE4F4
  goto L_801AE70C; // 801AE4F8
L_801AE4FC:;
  c->r[3]=c->r[1]+0x00000008u; // 801AE4FC
  c->lr=0x801AE504u; f_801AD840(c); // 801AE500
  c->r[0]=R32(c->r[1]+0x00000008u); // 801AE504
  cmps(c,0,(int32_t)c->r[0],0); // 801AE508
  if (crb(c,2)) { goto L_801AE5AC; } // 801AE50C
  c->r[4]=R32(c->r[13]+0xFFFFB3F4u); // 801AE510
  c->r[0]=0u+0x00000005u; // 801AE514
  c->r[3]=c->r[1]+0x00000008u; // 801AE518
  W16(c->r[4]+0x00000000u,c->r[0]); // 801AE51C
  c->r[4]=R32(c->r[13]+0xFFFFB3F4u); // 801AE520
  c->r[0]=R16(c->r[13]+0xFFFFB3DCu); // 801AE524
  c->r[4]=c->r[4]+0x00000002u; // 801AE528
  W32(c->r[13]+0xFFFFB3F4u,c->r[4]); // 801AE52C
  W16(c->r[4]+0x00000000u,c->r[0]); // 801AE530
  c->r[4]=R32(c->r[13]+0xFFFFB3F4u); // 801AE534
  c->r[0]=R32(c->r[1]+0x00000008u); // 801AE538
  c->r[4]=c->r[4]+0x00000002u; // 801AE53C
  W32(c->r[13]+0xFFFFB3F4u,c->r[4]); // 801AE540
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801AE544
  W16(c->r[4]+0x00000000u,c->r[0]); // 801AE548
  c->r[4]=R32(c->r[13]+0xFFFFB3F4u); // 801AE54C
  c->r[0]=R32(c->r[1]+0x00000008u); // 801AE550
  c->r[4]=c->r[4]+0x00000002u; // 801AE554
  W32(c->r[13]+0xFFFFB3F4u,c->r[4]); // 801AE558
  W16(c->r[4]+0x00000000u,c->r[0]); // 801AE55C
  c->r[4]=R32(c->r[13]+0xFFFFB3F4u); // 801AE560
  c->r[5]=c->r[4]+0x00000002u; // 801AE564
  W32(c->r[13]+0xFFFFB3F4u,c->r[5]); // 801AE568
  c->lr=0x801AE570u; f_801AD880(c); // 801AE56C
  c->r[0]=R32(c->r[1]+0x00000008u); // 801AE570
  c->r[3]=R32(c->r[13]+0xFFFFB3F4u); // 801AE574
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801AE578
  W16(c->r[3]+0x00000000u,c->r[0]); // 801AE57C
  c->r[3]=R32(c->r[13]+0xFFFFB3F4u); // 801AE580
  c->r[0]=R32(c->r[1]+0x00000008u); // 801AE584
  c->r[3]=c->r[3]+0x00000002u; // 801AE588
  W32(c->r[13]+0xFFFFB3F4u,c->r[3]); // 801AE58C
  W16(c->r[3]+0x00000000u,c->r[0]); // 801AE590
  c->r[4]=R32(c->r[13]+0xFFFFB3F4u); // 801AE594
  c->r[3]=R32(c->r[13]+0xFFFFB3ECu); // 801AE598
  c->r[5]=c->r[4]+0x00000002u; // 801AE59C
  W32(c->r[13]+0xFFFFB3F4u,c->r[5]); // 801AE5A0
  c->r[0]=c->r[3]+0x000008BBu; // 801AE5A4
  W32(c->r[13]+0xFFFFB3ECu,c->r[0]); // 801AE5A8
L_801AE5AC:;
  c->r[3]=c->r[1]+0x00000008u; // 801AE5AC
  c->lr=0x801AE5B4u; f_801AD920(c); // 801AE5B0
  c->r[0]=R32(c->r[1]+0x00000008u); // 801AE5B4
  cmps(c,0,(int32_t)c->r[0],0); // 801AE5B8
  if (crb(c,2)) { goto L_801AE65C; } // 801AE5BC
  c->r[4]=R32(c->r[13]+0xFFFFB3F4u); // 801AE5C0
  c->r[0]=0u+0x00000006u; // 801AE5C4
  c->r[3]=c->r[1]+0x00000008u; // 801AE5C8
  W16(c->r[4]+0x00000000u,c->r[0]); // 801AE5CC
  c->r[4]=R32(c->r[13]+0xFFFFB3F4u); // 801AE5D0
  c->r[0]=R16(c->r[13]+0xFFFFB3DAu); // 801AE5D4
  c->r[4]=c->r[4]+0x00000002u; // 801AE5D8
  W32(c->r[13]+0xFFFFB3F4u,c->r[4]); // 801AE5DC
  W16(c->r[4]+0x00000000u,c->r[0]); // 801AE5E0
  c->r[4]=R32(c->r[13]+0xFFFFB3F4u); // 801AE5E4
  c->r[0]=R32(c->r[1]+0x00000008u); // 801AE5E8
  c->r[4]=c->r[4]+0x00000002u; // 801AE5EC
  W32(c->r[13]+0xFFFFB3F4u,c->r[4]); // 801AE5F0
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801AE5F4
  W16(c->r[4]+0x00000000u,c->r[0]); // 801AE5F8
  c->r[4]=R32(c->r[13]+0xFFFFB3F4u); // 801AE5FC
  c->r[0]=R32(c->r[1]+0x00000008u); // 801AE600
  c->r[4]=c->r[4]+0x00000002u; // 801AE604
  W32(c->r[13]+0xFFFFB3F4u,c->r[4]); // 801AE608
  W16(c->r[4]+0x00000000u,c->r[0]); // 801AE60C
  c->r[4]=R32(c->r[13]+0xFFFFB3F4u); // 801AE610
  c->r[5]=c->r[4]+0x00000002u; // 801AE614
  W32(c->r[13]+0xFFFFB3F4u,c->r[5]); // 801AE618
  c->lr=0x801AE620u; f_801AD960(c); // 801AE61C
  c->r[0]=R32(c->r[1]+0x00000008u); // 801AE620
  c->r[3]=R32(c->r[13]+0xFFFFB3F4u); // 801AE624
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801AE628
  W16(c->r[3]+0x00000000u,c->r[0]); // 801AE62C
  c->r[3]=R32(c->r[13]+0xFFFFB3F4u); // 801AE630
  c->r[0]=R32(c->r[1]+0x00000008u); // 801AE634
  c->r[3]=c->r[3]+0x00000002u; // 801AE638
  W32(c->r[13]+0xFFFFB3F4u,c->r[3]); // 801AE63C
  W16(c->r[3]+0x00000000u,c->r[0]); // 801AE640
  c->r[4]=R32(c->r[13]+0xFFFFB3F4u); // 801AE644
  c->r[3]=R32(c->r[13]+0xFFFFB3ECu); // 801AE648
  c->r[5]=c->r[4]+0x00000002u; // 801AE64C
  W32(c->r[13]+0xFFFFB3F4u,c->r[5]); // 801AE650
  c->r[0]=c->r[3]+0x000008BBu; // 801AE654
  W32(c->r[13]+0xFFFFB3ECu,c->r[0]); // 801AE658
L_801AE65C:;
  c->r[3]=c->r[1]+0x00000008u; // 801AE65C
  c->lr=0x801AE664u; f_801ADA00(c); // 801AE660
  c->r[0]=R32(c->r[1]+0x00000008u); // 801AE664
  cmps(c,0,(int32_t)c->r[0],0); // 801AE668
  if (crb(c,2)) { goto L_801AE70C; } // 801AE66C
  c->r[4]=R32(c->r[13]+0xFFFFB3F4u); // 801AE670
  c->r[0]=0u+0x00000007u; // 801AE674
  c->r[3]=c->r[1]+0x00000008u; // 801AE678
  W16(c->r[4]+0x00000000u,c->r[0]); // 801AE67C
  c->r[4]=R32(c->r[13]+0xFFFFB3F4u); // 801AE680
  c->r[0]=R16(c->r[13]+0xFFFFB3D8u); // 801AE684
  c->r[4]=c->r[4]+0x00000002u; // 801AE688
  W32(c->r[13]+0xFFFFB3F4u,c->r[4]); // 801AE68C
  W16(c->r[4]+0x00000000u,c->r[0]); // 801AE690
  c->r[4]=R32(c->r[13]+0xFFFFB3F4u); // 801AE694
  c->r[0]=R32(c->r[1]+0x00000008u); // 801AE698
  c->r[4]=c->r[4]+0x00000002u; // 801AE69C
  W32(c->r[13]+0xFFFFB3F4u,c->r[4]); // 801AE6A0
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801AE6A4
  W16(c->r[4]+0x00000000u,c->r[0]); // 801AE6A8
  c->r[4]=R32(c->r[13]+0xFFFFB3F4u); // 801AE6AC
  c->r[0]=R32(c->r[1]+0x00000008u); // 801AE6B0
  c->r[4]=c->r[4]+0x00000002u; // 801AE6B4
  W32(c->r[13]+0xFFFFB3F4u,c->r[4]); // 801AE6B8
  W16(c->r[4]+0x00000000u,c->r[0]); // 801AE6BC
  c->r[4]=R32(c->r[13]+0xFFFFB3F4u); // 801AE6C0
  c->r[5]=c->r[4]+0x00000002u; // 801AE6C4
  W32(c->r[13]+0xFFFFB3F4u,c->r[5]); // 801AE6C8
  c->lr=0x801AE6D0u; f_801ADA40(c); // 801AE6CC
  c->r[0]=R32(c->r[1]+0x00000008u); // 801AE6D0
  c->r[3]=R32(c->r[13]+0xFFFFB3F4u); // 801AE6D4
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801AE6D8
  W16(c->r[3]+0x00000000u,c->r[0]); // 801AE6DC
  c->r[3]=R32(c->r[13]+0xFFFFB3F4u); // 801AE6E0
  c->r[0]=R32(c->r[1]+0x00000008u); // 801AE6E4
  c->r[3]=c->r[3]+0x00000002u; // 801AE6E8
  W32(c->r[13]+0xFFFFB3F4u,c->r[3]); // 801AE6EC
  W16(c->r[3]+0x00000000u,c->r[0]); // 801AE6F0
  c->r[4]=R32(c->r[13]+0xFFFFB3F4u); // 801AE6F4
  c->r[3]=R32(c->r[13]+0xFFFFB3ECu); // 801AE6F8
  c->r[5]=c->r[4]+0x00000002u; // 801AE6FC
  W32(c->r[13]+0xFFFFB3F4u,c->r[5]); // 801AE700
  c->r[0]=c->r[3]+0x000008BBu; // 801AE704
  W32(c->r[13]+0xFFFFB3ECu,c->r[0]); // 801AE708
L_801AE70C:;
  c->r[0]=R32(c->r[13]+0xFFFFB3E8u); // 801AE70C
  cmps(c,0,(int32_t)c->r[0],0); // 801AE710
  if (crb(c,2)) { goto L_801AE794; } // 801AE714
  c->r[4]=R32(c->r[13]+0xFFFFB3F4u); // 801AE718
  c->r[0]=0u+0x0000000Au; // 801AE71C
  c->r[3]=0u+0x00010000u; // 801AE720
  W16(c->r[4]+0x00000000u,c->r[0]); // 801AE724
  c->r[0]=c->r[3]+0xFFFF8000u; // 801AE728
  c->r[3]=R32(c->r[13]+0xFFFFB3F4u); // 801AE72C
  c->r[3]=c->r[3]+0x00000002u; // 801AE730
  W32(c->r[13]+0xFFFFB3F4u,c->r[3]); // 801AE734
  W16(c->r[3]+0x00000000u,c->r[0]); // 801AE738
  c->r[3]=R32(c->r[13]+0xFFFFB3F4u); // 801AE73C
  c->r[0]=R16(c->r[13]+0xFFFFB3E0u); // 801AE740
  c->r[3]=c->r[3]+0x00000002u; // 801AE744
  W32(c->r[13]+0xFFFFB3F4u,c->r[3]); // 801AE748
  W16(c->r[3]+0x00000000u,c->r[0]); // 801AE74C
  c->r[3]=R32(c->r[13]+0xFFFFB3F4u); // 801AE750
  c->r[0]=R32(c->r[13]+0xFFFFB3E4u); // 801AE754
  c->r[3]=c->r[3]+0x00000002u; // 801AE758
  W32(c->r[13]+0xFFFFB3F4u,c->r[3]); // 801AE75C
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801AE760
  W16(c->r[3]+0x00000000u,c->r[0]); // 801AE764
  c->r[3]=R32(c->r[13]+0xFFFFB3F4u); // 801AE768
  c->r[0]=R32(c->r[13]+0xFFFFB3E4u); // 801AE76C
  c->r[3]=c->r[3]+0x00000002u; // 801AE770
  W32(c->r[13]+0xFFFFB3F4u,c->r[3]); // 801AE774
  W16(c->r[3]+0x00000000u,c->r[0]); // 801AE778
  c->r[4]=R32(c->r[13]+0xFFFFB3F4u); // 801AE77C
  c->r[3]=R32(c->r[13]+0xFFFFB3ECu); // 801AE780
  c->r[5]=c->r[4]+0x00000002u; // 801AE784
  W32(c->r[13]+0xFFFFB3F4u,c->r[5]); // 801AE788
  c->r[0]=c->r[3]+0x0000073Au; // 801AE78C
  W32(c->r[13]+0xFFFFB3ECu,c->r[0]); // 801AE790
L_801AE794:;
  c->r[3]=R32(c->r[13]+0xFFFFB3F4u); // 801AE794
  c->r[0]=0u+0x0000000Du; // 801AE798
  W16(c->r[3]+0x00000000u,c->r[0]); // 801AE79C
  c->r[3]=R32(c->r[13]+0xFFFFB3F4u); // 801AE7A0
  c->r[3]=c->r[3]+0x00000002u; // 801AE7A4
  W32(c->r[13]+0xFFFFB3F4u,c->r[3]); // 801AE7A8
  c->r[0]=R32(c->r[30]+0x00000000u); // 801AE7AC
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801AE7B0
  W16(c->r[3]+0x00000000u,c->r[0]); // 801AE7B4
  c->r[3]=R32(c->r[13]+0xFFFFB3F4u); // 801AE7B8
  c->r[3]=c->r[3]+0x00000002u; // 801AE7BC
  W32(c->r[13]+0xFFFFB3F4u,c->r[3]); // 801AE7C0
  c->r[0]=R32(c->r[30]+0x00000000u); // 801AE7C4
  W16(c->r[3]+0x00000000u,c->r[0]); // 801AE7C8
  c->r[3]=R32(c->r[13]+0xFFFFB3F4u); // 801AE7CC
  c->r[3]=c->r[3]+0x00000002u; // 801AE7D0
  W32(c->r[13]+0xFFFFB3F4u,c->r[3]); // 801AE7D4
  c->r[0]=R32(c->r[30]+0x00000004u); // 801AE7D8
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801AE7DC
  W16(c->r[3]+0x00000000u,c->r[0]); // 801AE7E0
  c->r[3]=R32(c->r[13]+0xFFFFB3F4u); // 801AE7E4
  c->r[3]=c->r[3]+0x00000002u; // 801AE7E8
  W32(c->r[13]+0xFFFFB3F4u,c->r[3]); // 801AE7EC
  c->r[0]=R32(c->r[30]+0x00000004u); // 801AE7F0
  W16(c->r[3]+0x00000000u,c->r[0]); // 801AE7F4
  c->r[3]=R32(c->r[13]+0xFFFFB3F4u); // 801AE7F8
  c->r[3]=c->r[3]+0x00000002u; // 801AE7FC
  W32(c->r[13]+0xFFFFB3F4u,c->r[3]); // 801AE800
  c->r[0]=R32(c->r[30]+0x00000008u); // 801AE804
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801AE808
  W16(c->r[3]+0x00000000u,c->r[0]); // 801AE80C
  c->r[3]=R32(c->r[13]+0xFFFFB3F4u); // 801AE810
  c->r[3]=c->r[3]+0x00000002u; // 801AE814
  W32(c->r[13]+0xFFFFB3F4u,c->r[3]); // 801AE818
  c->r[0]=R32(c->r[30]+0x00000008u); // 801AE81C
  W16(c->r[3]+0x00000000u,c->r[0]); // 801AE820
  c->r[3]=R32(c->r[13]+0xFFFFB3F4u); // 801AE824
  c->r[3]=c->r[3]+0x00000002u; // 801AE828
  W32(c->r[13]+0xFFFFB3F4u,c->r[3]); // 801AE82C
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 801AE830
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801AE834
  W16(c->r[3]+0x00000000u,c->r[0]); // 801AE838
  c->r[3]=R32(c->r[13]+0xFFFFB3F4u); // 801AE83C
  c->r[3]=c->r[3]+0x00000002u; // 801AE840
  W32(c->r[13]+0xFFFFB3F4u,c->r[3]); // 801AE844
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 801AE848
  W16(c->r[3]+0x00000000u,c->r[0]); // 801AE84C
  c->r[0]=R32(c->r[13]+0xFFFFB3F0u); // 801AE850
  c->r[4]=R32(c->r[13]+0xFFFFB3F4u); // 801AE854
  c->r[3]=R32(c->r[13]+0xFFFFB3ECu); // 801AE858
  cmpu(c,0,c->r[0],0x00000002u); // 801AE85C
  c->r[4]=c->r[4]+0x00000002u; // 801AE860
  W32(c->r[13]+0xFFFFB3F4u,c->r[4]); // 801AE864
  c->r[0]=c->r[3]+0x00000199u; // 801AE868
  W32(c->r[13]+0xFFFFB3ECu,c->r[0]); // 801AE86C
  if (!crb(c,2)) { goto L_801AE8F4; } // 801AE870
  c->r[0]=0u+0x0000000Cu; // 801AE874
  W16(c->r[4]+0x00000000u,c->r[0]); // 801AE878
  c->r[3]=rotl(c->r[28],16)&0x0000FFFFu; // 801AE87C
  c->r[5]=R32(c->r[13]+0xFFFFB3F4u); // 801AE880
  c->r[0]=rotl(c->r[29],16)&0x0000FFFFu; // 801AE884
  c->r[4]=R16(c->r[13]+0xFFFFB3DEu); // 801AE888
  c->r[5]=c->r[5]+0x00000002u; // 801AE88C
  W32(c->r[13]+0xFFFFB3F4u,c->r[5]); // 801AE890
  W16(c->r[5]+0x00000000u,c->r[4]); // 801AE894
  c->r[4]=R32(c->r[13]+0xFFFFB3F4u); // 801AE898
  c->r[4]=c->r[4]+0x00000002u; // 801AE89C
  W32(c->r[13]+0xFFFFB3F4u,c->r[4]); // 801AE8A0
  W16(c->r[4]+0x00000000u,c->r[3]); // 801AE8A4
  c->r[3]=R32(c->r[13]+0xFFFFB3F4u); // 801AE8A8
  c->r[3]=c->r[3]+0x00000002u; // 801AE8AC
  W32(c->r[13]+0xFFFFB3F4u,c->r[3]); // 801AE8B0
  W16(c->r[3]+0x00000000u,c->r[28]); // 801AE8B4
  c->r[3]=R32(c->r[13]+0xFFFFB3F4u); // 801AE8B8
  c->r[3]=c->r[3]+0x00000002u; // 801AE8BC
  W32(c->r[13]+0xFFFFB3F4u,c->r[3]); // 801AE8C0
  W16(c->r[3]+0x00000000u,c->r[0]); // 801AE8C4
  c->r[3]=R32(c->r[13]+0xFFFFB3F4u); // 801AE8C8
  c->r[3]=c->r[3]+0x00000002u; // 801AE8CC
  W32(c->r[13]+0xFFFFB3F4u,c->r[3]); // 801AE8D0
  W16(c->r[3]+0x00000000u,c->r[29]); // 801AE8D4
  c->r[4]=R32(c->r[13]+0xFFFFB3F4u); // 801AE8D8
  c->r[3]=R32(c->r[13]+0xFFFFB3ECu); // 801AE8DC
  c->r[5]=c->r[4]+0x00000002u; // 801AE8E0
  W32(c->r[13]+0xFFFFB3F4u,c->r[5]); // 801AE8E4
  c->r[0]=c->r[3]+0x000004ABu; // 801AE8E8
  W32(c->r[13]+0xFFFFB3ECu,c->r[0]); // 801AE8EC
  goto L_801AE970; // 801AE8F0
L_801AE8F4:;
  c->r[0]=0u+0x0000000Bu; // 801AE8F4
  W16(c->r[4]+0x00000000u,c->r[0]); // 801AE8F8
  c->r[3]=rotl(c->r[28],16)&0x0000FFFFu; // 801AE8FC
  c->r[5]=R32(c->r[13]+0xFFFFB3F4u); // 801AE900
  c->r[0]=rotl(c->r[29],16)&0x0000FFFFu; // 801AE904
  c->r[4]=R16(c->r[13]+0xFFFFB3DEu); // 801AE908
  c->r[5]=c->r[5]+0x00000002u; // 801AE90C
  W32(c->r[13]+0xFFFFB3F4u,c->r[5]); // 801AE910
  W16(c->r[5]+0x00000000u,c->r[4]); // 801AE914
  c->r[4]=R32(c->r[13]+0xFFFFB3F4u); // 801AE918
  c->r[4]=c->r[4]+0x00000002u; // 801AE91C
  W32(c->r[13]+0xFFFFB3F4u,c->r[4]); // 801AE920
  W16(c->r[4]+0x00000000u,c->r[3]); // 801AE924
  c->r[3]=R32(c->r[13]+0xFFFFB3F4u); // 801AE928
  c->r[3]=c->r[3]+0x00000002u; // 801AE92C
  W32(c->r[13]+0xFFFFB3F4u,c->r[3]); // 801AE930
  W16(c->r[3]+0x00000000u,c->r[28]); // 801AE934
  c->r[3]=R32(c->r[13]+0xFFFFB3F4u); // 801AE938
  c->r[3]=c->r[3]+0x00000002u; // 801AE93C
  W32(c->r[13]+0xFFFFB3F4u,c->r[3]); // 801AE940
  W16(c->r[3]+0x00000000u,c->r[0]); // 801AE944
  c->r[3]=R32(c->r[13]+0xFFFFB3F4u); // 801AE948
  c->r[3]=c->r[3]+0x00000002u; // 801AE94C
  W32(c->r[13]+0xFFFFB3F4u,c->r[3]); // 801AE950
  W16(c->r[3]+0x00000000u,c->r[29]); // 801AE954
  c->r[4]=R32(c->r[13]+0xFFFFB3F4u); // 801AE958
  c->r[3]=R32(c->r[13]+0xFFFFB3ECu); // 801AE95C
  c->r[5]=c->r[4]+0x00000002u; // 801AE960
  W32(c->r[13]+0xFFFFB3F4u,c->r[5]); // 801AE964
  c->r[0]=c->r[3]+0x00000494u; // 801AE968
  W32(c->r[13]+0xFFFFB3ECu,c->r[0]); // 801AE96C
L_801AE970:;
  c->r[0]=0u+0x0000000Eu; // 801AE970
  W16(c->r[5]+0x00000000u,c->r[0]); // 801AE974
  c->r[3]=c->r[31]|c->r[31]; // 801AE978
  c->r[4]=0u+0x00000080u; // 801AE97C
  c->r[5]=R32(c->r[13]+0xFFFFB3F4u); // 801AE980
  c->r[6]=R32(c->r[13]+0xFFFFB3ECu); // 801AE984
  c->r[5]=c->r[5]+0x00000002u; // 801AE988
  W32(c->r[13]+0xFFFFB3F4u,c->r[5]); // 801AE98C
  c->r[0]=c->r[6]+0x0000001Eu; // 801AE990
  W32(c->r[13]+0xFFFFB3ECu,c->r[0]); // 801AE994
  c->lr=0x801AE99Cu; f_80188CE0(c); // 801AE998
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AE99C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801AE9A0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801AE9A4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801AE9A8
  c->r[28]=R32(c->r[1]+0x00000010u); // 801AE9AC
  c->lr=c->r[0]; // 801AE9B0
  c->r[1]=c->r[1]+0x00000020u; // 801AE9B4
  return; // 801AE9B8
}

// __AXClInit
void f_801AE9C0(Ctx* __restrict c) {
  trace_call(0x801AE9C0u);
  c->r[6]=0u+0x802C0000u; // 801AE9C0
  c->r[4]=0u+0x80270000u; // 801AE9C4
  c->r[7]=0u+0x00000000u; // 801AE9C8
  c->r[3]=0u+0x00010000u; // 801AE9CC
  c->r[0]=c->r[3]+0xFFFF8000u; // 801AE9D0
  c->r[6]=c->r[6]+0xFFFFA0E0u; // 801AE9D4
  c->r[4]=c->r[4]+0x00006CA0u; // 801AE9D8
  c->r[5]=0u+0x00000001u; // 801AE9DC
  c->r[3]=0u+0x0000000Au; // 801AE9E0
  W32(c->r[13]+0xFFFFB3F0u,c->r[7]); // 801AE9E4
  W32(c->r[13]+0xFFFFB3F8u,c->r[7]); // 801AE9E8
  W32(c->r[13]+0xFFFFB3F4u,c->r[6]); // 801AE9EC
  W32(c->r[13]+0xFFFFB3E8u,c->r[5]); // 801AE9F0
  W32(c->r[13]+0xFFFFB3E4u,c->r[4]); // 801AE9F4
  W16(c->r[13]+0xFFFFB3E0u,c->r[3]); // 801AE9F8
  W16(c->r[13]+0xFFFFB3DEu,c->r[0]); // 801AE9FC
  W16(c->r[13]+0xFFFFB3DCu,c->r[0]); // 801AEA00
  W16(c->r[13]+0xFFFFB3DAu,c->r[0]); // 801AEA04
  W16(c->r[13]+0xFFFFB3D8u,c->r[0]); // 801AEA08
  return; // 801AEA0C
}

// AXSetMode
void f_801AEA10(Ctx* __restrict c) {
  trace_call(0x801AEA10u);
  W32(c->r[13]+0xFFFFB3F0u,c->r[3]); // 801AEA10
  return; // 801AEA14
}

// AXGetMode
void f_801AEA20(Ctx* __restrict c) {
  trace_call(0x801AEA20u);
  c->r[3]=R16(c->r[13]+0xFFFFB3DCu); // 801AEA20
  return; // 801AEA24
}

// AXSetCompressor
void f_801AEA30(Ctx* __restrict c) {
  trace_call(0x801AEA30u);
  c->r[3]=R16(c->r[13]+0xFFFFB3DAu); // 801AEA30
  return; // 801AEA34
}

// AXGetAuxAReturnVolume
void f_801AEA40(Ctx* __restrict c) {
  trace_call(0x801AEA40u);
  c->r[3]=R16(c->r[13]+0xFFFFB3D8u); // 801AEA40
  return; // 801AEA44
}

// AXSetMasterVolume
void f_801AEA50(Ctx* __restrict c) {
  trace_call(0x801AEA50u);
  cmpu(c,0,c->r[3],0x00008000u); // 801AEA50
  if (!crb(c,1)) { goto L_801AEA60; } // 801AEA54
  c->r[3]=0u+0x00010000u; // 801AEA58
  c->r[3]=c->r[3]+0xFFFF8000u; // 801AEA5C
L_801AEA60:;
  W16(c->r[13]+0xFFFFB3DEu,c->r[3]); // 801AEA60
  return; // 801AEA64
}

// AXSetAuxAReturnVolume
void f_801AEA70(Ctx* __restrict c) {
  trace_call(0x801AEA70u);
  W16(c->r[13]+0xFFFFB3DCu,c->r[3]); // 801AEA70
  return; // 801AEA74
}

// AXSetAuxBReturnVolume
void f_801AEA80(Ctx* __restrict c) {
  trace_call(0x801AEA80u);
  W16(c->r[13]+0xFFFFB3DAu,c->r[3]); // 801AEA80
  return; // 801AEA84
}

// AXSetAuxCReturnVolume
void f_801AEA90(Ctx* __restrict c) {
  trace_call(0x801AEA90u);
  W16(c->r[13]+0xFFFFB3D8u,c->r[3]); // 801AEA90
  return; // 801AEA94
}

// __AXOutNewFrame
void f_801AEAA0(Ctx* __restrict c) {
  trace_call(0x801AEAA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AEAA0
  c->r[0]=c->lr; // 801AEAA4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801AEAA8
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801AEAAC
  c->r[31]=0u+0x802C0000u; // 801AEAB0
  c->r[31]=c->r[31]+0xFFFFA1E0u; // 801AEAB4
  W32(c->r[1]+0x00000028u,c->r[30]); // 801AEAB8
  W32(c->r[1]+0x00000024u,c->r[29]); // 801AEABC
  c->lr=0x801AEAC4u; f_801915C0(c); // 801AEAC0
  c->r[5]=c->r[31]+0x00000000u; // 801AEAC4
  W32(c->r[31]+0x00000000u,c->r[3]); // 801AEAC8
  W32(c->r[5]+0x00000004u,c->r[4]); // 801AEACC
  c->lr=0x801AEAD4u; f_801ACD00(c); // 801AEAD0
  c->r[3]=rotl(c->r[3],30)&0x3FFFFFFFu; // 801AEAD4
  c->r[0]=R32(c->r[13]+0xFFFFB410u); // 801AEAD8
  c->r[3]=addc(c,~c->r[3],0x00000060u,1); // 801AEADC
  cmpu(c,0,c->r[0],0x00000001u); // 801AEAE0
  c->r[30]=(uint32_t)((int32_t)c->r[3]*(int32_t)3797); // 801AEAE4
  if (!crb(c,2)) { goto L_801AEAF8; } // 801AEAE8
  c->r[3]=0u+0x00000000u; // 801AEAEC
  c->lr=0x801AEAF4u; f_801AFC70(c); // 801AEAF0
  goto L_801AEB00; // 801AEAF4
L_801AEAF8:;
  c->r[3]=0u+0x00005F50u; // 801AEAF8
  c->lr=0x801AEB00u; f_801AFC70(c); // 801AEAFC
L_801AEB00:;
  c->lr=0x801AEB04u; f_801AF3D0(c); // 801AEB00
  c->lr=0x801AEB08u; f_801ADFD0(c); // 801AEB04
  c->r[4]=0u+0xBABE0000u; // 801AEB08
  c->r[29]=c->r[3]|c->r[3]; // 801AEB0C
  c->r[3]=c->r[4]+0x00000080u; // 801AEB10
  c->lr=0x801AEB18u; f_801B2980(c); // 801AEB14
L_801AEB18:;
  c->lr=0x801AEB1Cu; f_801B2940(c); // 801AEB18
  cmps(c,0,(int32_t)c->r[3],0); // 801AEB1C
  if (!crb(c,2)) { IRQCHK(c); goto L_801AEB18; } // 801AEB20
  c->r[3]=c->r[29]|c->r[29]; // 801AEB24
  c->lr=0x801AEB2Cu; f_801B2980(c); // 801AEB28
L_801AEB2C:;
  c->lr=0x801AEB30u; f_801B2940(c); // 801AEB2C
  cmps(c,0,(int32_t)c->r[3],0); // 801AEB30
  if (!crb(c,2)) { IRQCHK(c); goto L_801AEB2C; } // 801AEB34
  c->lr=0x801AEB3Cu; f_801AD250(c); // 801AEB38
  c->lr=0x801AEB40u; f_801915C0(c); // 801AEB3C
  c->r[29]=c->r[31]+0x00000000u; // 801AEB40
  W32(c->r[29]+0x0000000Cu,c->r[4]); // 801AEB44
  W32(c->r[29]+0x00000008u,c->r[3]); // 801AEB48
  c->lr=0x801AEB50u; f_801ADA60(c); // 801AEB4C
  c->lr=0x801AEB54u; f_801915C0(c); // 801AEB50
  W32(c->r[29]+0x00000014u,c->r[4]); // 801AEB54
  W32(c->r[29]+0x00000010u,c->r[3]); // 801AEB58
  c->lr=0x801AEB60u; f_801915C0(c); // 801AEB5C
  c->r[12]=R32(c->r[13]+0xFFFFB42Cu); // 801AEB60
  W32(c->r[29]+0x0000001Cu,c->r[4]); // 801AEB64
  cmps(c,0,(int32_t)c->r[12],0); // 801AEB68
  W32(c->r[29]+0x00000018u,c->r[3]); // 801AEB6C
  if (crb(c,2)) { goto L_801AEB7C; } // 801AEB70
  c->ctr=c->r[12]; // 801AEB74
  if (true) { c->lr=0x801AEB7Cu; dispatch(c,c->ctr); } // 801AEB78
L_801AEB7C:;
  c->lr=0x801AEB80u; f_801915C0(c); // 801AEB7C
  c->r[7]=R32(c->r[13]+0xFFFFB408u); // 801AEB80
  c->r[8]=c->r[31]+0x00000000u; // 801AEB84
  c->r[0]=R32(c->r[13]+0xFFFFB40Cu); // 801AEB88
  c->r[5]=c->r[31]+0x00000040u; // 801AEB8C
  c->r[6]=rotl(c->r[7],1)&0xFFFFFFFEu; // 801AEB90
  c->r[7]=c->r[7]+0x00000012u; // 801AEB94
  c->r[6]=c->r[5]+c->r[6]; // 801AEB98
  W32(c->r[8]+0x00000024u,c->r[4]); // 801AEB9C
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 801AEBA0
  c->r[5]=c->r[6]+0x00000168u; // 801AEBA4
  c->r[4]=c->r[6]+0x000002D0u; // 801AEBA8
  c->r[0]=c->r[6]+0x00000438u; // 801AEBAC
  W32(c->r[8]+0x00000020u,c->r[3]); // 801AEBB0
  W32(c->r[1]+0x00000008u,c->r[6]); // 801AEBB4
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 801AEBB8
  W32(c->r[1]+0x00000010u,c->r[4]); // 801AEBBC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AEBC0
  if (crb(c,0)) { goto L_801AEBCC; } // 801AEBC4
  c->r[7]=0u+0x00000000u; // 801AEBC8
L_801AEBCC:;
  c->r[4]=R32(c->r[13]+0xFFFFB404u); // 801AEBCC
  c->r[3]=R32(c->r[13]+0xFFFFB408u); // 801AEBD0
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[3]); // 801AEBD4
  if (crb(c,0)) { goto L_801AEBEC; } // 801AEBD8
  c->r[0]=c->r[3]+0x00000012u; // 801AEBDC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801AEBE0
  if (!crb(c,0)) { goto L_801AEBEC; } // 801AEBE4
  W32(c->r[13]+0xFFFFB404u,c->r[7]); // 801AEBE8
L_801AEBEC:;
  c->r[0]=R32(c->r[13]+0xFFFFB438u); // 801AEBEC
  c->r[29]=c->r[31]+0x000008E0u; // 801AEBF0
  W32(c->r[13]+0xFFFFB408u,c->r[7]); // 801AEBF4
  c->r[3]=c->r[31]+0x000005E0u; // 801AEBF8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)384); // 801AEBFC
  c->r[5]=c->r[1]+0x00000008u; // 801AEC00
  c->r[4]=c->r[29]+c->r[0]; // 801AEC04
  c->lr=0x801AEC0Cu; f_801AE000(c); // 801AEC08
  c->r[0]=R32(c->r[13]+0xFFFFB410u); // 801AEC0C
  c->r[3]=R32(c->r[13]+0xFFFFB438u); // 801AEC10
  cmpu(c,0,c->r[0],0x00000001u); // 801AEC14
  c->r[0]=c->r[3]+0x00000001u; // 801AEC18
  W32(c->r[13]+0xFFFFB438u,c->r[0]); // 801AEC1C
  if (!crb(c,2)) { goto L_801AEC48; } // 801AEC20
  c->r[3]=0u+0xAAAB0000u; // 801AEC24
  c->r[4]=R32(c->r[13]+0xFFFFB438u); // 801AEC28
  c->r[0]=c->r[3]+0xFFFFAAABu; // 801AEC2C
  c->r[0]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[4])>>32); // 801AEC30
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 801AEC34
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3); // 801AEC38
  c->r[0]=c->r[4]-c->r[0]; // 801AEC3C
  W32(c->r[13]+0xFFFFB438u,c->r[0]); // 801AEC40
  goto L_801AEC68; // 801AEC44
L_801AEC48:;
  c->r[0]=R32(c->r[13]+0xFFFFB438u); // 801AEC48
  c->r[4]=0u+0x00000180u; // 801AEC4C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 801AEC50
  W32(c->r[13]+0xFFFFB438u,c->r[0]); // 801AEC54
  c->r[0]=R32(c->r[13]+0xFFFFB438u); // 801AEC58
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)384); // 801AEC5C
  c->r[3]=c->r[29]+c->r[0]; // 801AEC60
  c->lr=0x801AEC68u; f_801ACC60(c); // 801AEC64
L_801AEC68:;
  c->lr=0x801AEC6Cu; f_801915C0(c); // 801AEC68
  c->r[29]=c->r[31]+0x00000000u; // 801AEC6C
  W32(c->r[29]+0x0000002Cu,c->r[4]); // 801AEC70
  W32(c->r[29]+0x00000028u,c->r[3]); // 801AEC74
  c->lr=0x801AEC7Cu; f_801AF710(c); // 801AEC78
  W32(c->r[29]+0x00000030u,c->r[3]); // 801AEC7C
  c->lr=0x801AEC84u; f_801B04C0(c); // 801AEC80
  cmps(c,0,(int32_t)c->r[3],0); // 801AEC84
  if (crb(c,2)) { goto L_801AECE0; } // 801AEC88
  c->r[0]=0u+0x00000007u; // 801AEC8C
  c->ctr=c->r[0]; // 801AEC90
L_801AEC94:;
  c->r[0]=R8(c->r[29]+0x00000000u); // 801AEC94
  W8(c->r[3]+0x00000000u,c->r[0]); // 801AEC98
  c->r[0]=R8(c->r[29]+0x00000001u); // 801AEC9C
  W8(c->r[3]+0x00000001u,c->r[0]); // 801AECA0
  c->r[0]=R8(c->r[29]+0x00000002u); // 801AECA4
  W8(c->r[3]+0x00000002u,c->r[0]); // 801AECA8
  c->r[0]=R8(c->r[29]+0x00000003u); // 801AECAC
  W8(c->r[3]+0x00000003u,c->r[0]); // 801AECB0
  c->r[0]=R8(c->r[29]+0x00000004u); // 801AECB4
  W8(c->r[3]+0x00000004u,c->r[0]); // 801AECB8
  c->r[0]=R8(c->r[29]+0x00000005u); // 801AECBC
  W8(c->r[3]+0x00000005u,c->r[0]); // 801AECC0
  c->r[0]=R8(c->r[29]+0x00000006u); // 801AECC4
  W8(c->r[3]+0x00000006u,c->r[0]); // 801AECC8
  c->r[0]=R8(c->r[29]+0x00000007u); // 801AECCC
  c->r[29]=c->r[29]+0x00000008u; // 801AECD0
  W8(c->r[3]+0x00000007u,c->r[0]); // 801AECD4
  c->r[3]=c->r[3]+0x00000008u; // 801AECD8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801AEC94; } // 801AECDC
L_801AECE0:;
  c->r[3]=c->r[30]|c->r[30]; // 801AECE0
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801AECE4
  c->r[30]=R32(c->r[1]+0x00000028u); // 801AECE8
  c->r[29]=R32(c->r[1]+0x00000024u); // 801AECEC
  c->r[0]=R32(c->r[1]+0x00000034u); // 801AECF0
  c->lr=c->r[0]; // 801AECF4
  c->r[1]=c->r[1]+0x00000030u; // 801AECF8
  return; // 801AECFC
}

// __AXOutAiCallback
void f_801AED00(Ctx* __restrict c) {
  trace_call(0x801AED00u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AED00
  c->r[0]=c->lr; // 801AED04
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AED08
  c->r[0]=R32(c->r[13]+0xFFFFB424u); // 801AED0C
  cmps(c,0,(int32_t)c->r[0],1); // 801AED10
  if (crb(c,2)) { goto L_801AEDA0; } // 801AED14
  c->r[0]=R32(c->r[13]+0xFFFFB430u); // 801AED18
  cmpu(c,0,c->r[0],0x00000001u); // 801AED1C
  if (!crb(c,2)) { goto L_801AED34; } // 801AED20
  c->r[0]=0u+0x00000000u; // 801AED24
  W32(c->r[13]+0xFFFFB430u,c->r[0]); // 801AED28
  c->lr=0x801AED30u; f_801AEAA0(c); // 801AED2C
  goto L_801AED48; // 801AED30
L_801AED34:;
  c->r[0]=0u+0x00000002u; // 801AED34
  c->r[3]=0u+0x802C0000u; // 801AED38
  W32(c->r[13]+0xFFFFB430u,c->r[0]); // 801AED3C
  c->r[3]=c->r[3]+0xFFFFAF40u; // 801AED40
  c->lr=0x801AED48u; f_801B2AE0(c); // 801AED44
L_801AED48:;
  c->r[0]=R32(c->r[13]+0xFFFFB410u); // 801AED48
  cmpu(c,0,c->r[0],0x00000001u); // 801AED4C
  if (!crb(c,2)) { goto L_801AEDA0; } // 801AED50
  c->r[0]=R32(c->r[13]+0xFFFFB434u); // 801AED54
  c->r[3]=0u+0x802C0000u; // 801AED58
  c->r[3]=c->r[3]+0xFFFFAAC0u; // 801AED5C
  c->r[4]=0u+0x00000180u; // 801AED60
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)384); // 801AED64
  c->r[3]=c->r[3]+c->r[0]; // 801AED68
  c->lr=0x801AED70u; f_801ACC60(c); // 801AED6C
  c->r[4]=R32(c->r[13]+0xFFFFB434u); // 801AED70
  c->r[3]=0u+0xAAAB0000u; // 801AED74
  c->r[3]=c->r[3]+0xFFFFAAABu; // 801AED78
  c->r[0]=R32(c->r[13]+0xFFFFB438u); // 801AED7C
  c->r[4]=c->r[4]+0x00000001u; // 801AED80
  c->r[3]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[4])>>32); // 801AED84
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 801AED88
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)3); // 801AED8C
  c->r[4]=c->r[4]-c->r[3]; // 801AED90
  cmpu(c,0,c->r[4],c->r[0]); // 801AED94
  if (crb(c,2)) { goto L_801AEDA0; } // 801AED98
  W32(c->r[13]+0xFFFFB434u,c->r[4]); // 801AED9C
L_801AEDA0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AEDA0
  c->lr=c->r[0]; // 801AEDA4
  c->r[1]=c->r[1]+0x00000010u; // 801AEDA8
  return; // 801AEDAC
}

// __AXDSPInitCallback
void f_801AEDB0(Ctx* __restrict c) {
  trace_call(0x801AEDB0u);
  c->r[0]=0u+0x00000001u; // 801AEDB0
  W32(c->r[13]+0xFFFFB428u,c->r[0]); // 801AEDB4
  return; // 801AEDB8
}

// __AXDSPResumeCallback
void f_801AEDC0(Ctx* __restrict c) {
  trace_call(0x801AEDC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AEDC0
  c->r[0]=c->lr; // 801AEDC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AEDC8
  c->r[0]=R32(c->r[13]+0xFFFFB430u); // 801AEDCC
  cmpu(c,0,c->r[0],0x00000002u); // 801AEDD0
  if (!crb(c,2)) { goto L_801AEDFC; } // 801AEDD4
  c->r[0]=0u+0x00000000u; // 801AEDD8
  W32(c->r[13]+0xFFFFB430u,c->r[0]); // 801AEDDC
  c->lr=0x801AEDE4u; f_801AEAA0(c); // 801AEDE0
  c->r[12]=R32(c->r[13]+0xFFFFB400u); // 801AEDE4
  cmps(c,0,(int32_t)c->r[12],0); // 801AEDE8
  if (crb(c,2)) { goto L_801AEE04; } // 801AEDEC
  c->ctr=c->r[12]; // 801AEDF0
  if (true) { c->lr=0x801AEDF8u; dispatch(c,c->ctr); } // 801AEDF4
  goto L_801AEE04; // 801AEDF8
L_801AEDFC:;
  c->r[0]=0u+0x00000001u; // 801AEDFC
  W32(c->r[13]+0xFFFFB430u,c->r[0]); // 801AEE00
L_801AEE04:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AEE04
  c->lr=c->r[0]; // 801AEE08
  c->r[1]=c->r[1]+0x00000010u; // 801AEE0C
  return; // 801AEE10
}

// __AXDSPDoneCallback
void f_801AEE20(Ctx* __restrict c) {
  trace_call(0x801AEE20u);
  c->r[0]=0u+0x00000001u; // 801AEE20
  W32(c->r[13]+0xFFFFB424u,c->r[0]); // 801AEE24
  c->r[3]=c->r[13]+0xFFFFB418u; // 801AEE28
  f_801914C0(c); return; // 801AEE2C
}

// __AXDSPRequestCallback
void f_801AEE30(Ctx* __restrict c) {
  trace_call(0x801AEE30u);
  return; // 801AEE30
}

// __AXOutInitDSP
void f_801AEE40(Ctx* __restrict c) {
  stub_log(0x801AEE40u);  return;
}

// __AXOutInit
void f_801AEF30(Ctx* __restrict c) {
  trace_call(0x801AEF30u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AEF30
  c->r[0]=c->lr; // 801AEF34
  c->r[4]=0u+0x00000000u; // 801AEF38
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AEF3C
  c->r[0]=0u+0x00000020u; // 801AEF40
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801AEF44
  c->r[31]=0u+0x802C0000u; // 801AEF48
  c->r[31]=c->r[31]+0xFFFFA1E0u; // 801AEF4C
  W32(c->r[13]+0xFFFFB438u,c->r[4]); // 801AEF50
  c->r[5]=c->r[31]+0x000008E0u; // 801AEF54
  W32(c->r[13]+0xFFFFB434u,c->r[4]); // 801AEF58
  W32(c->r[13]+0xFFFFB410u,c->r[3]); // 801AEF5C
  W32(c->r[13]+0xFFFFB420u,c->r[4]); // 801AEF60
  c->ctr=c->r[0]; // 801AEF64
L_801AEF68:;
  W32(c->r[5]+0x00000000u,c->r[4]); // 801AEF68
  W32(c->r[5]+0x00000004u,c->r[4]); // 801AEF6C
  W32(c->r[5]+0x00000008u,c->r[4]); // 801AEF70
  W32(c->r[5]+0x0000000Cu,c->r[4]); // 801AEF74
  W32(c->r[5]+0x00000010u,c->r[4]); // 801AEF78
  W32(c->r[5]+0x00000014u,c->r[4]); // 801AEF7C
  W32(c->r[5]+0x00000018u,c->r[4]); // 801AEF80
  W32(c->r[5]+0x0000001Cu,c->r[4]); // 801AEF84
  W32(c->r[5]+0x00000020u,c->r[4]); // 801AEF88
  c->r[5]=c->r[5]+0x00000024u; // 801AEF8C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801AEF68; } // 801AEF90
  c->r[3]=c->r[31]+0x000008E0u; // 801AEF94
  c->r[4]=0u+0x00000480u; // 801AEF98
  c->lr=0x801AEFA0u; f_80188CE0(c); // 801AEF9C
  c->r[0]=0u+0x00000018u; // 801AEFA0
  c->r[4]=c->r[31]+0x000005E0u; // 801AEFA4
  c->r[3]=0u+0x00000000u; // 801AEFA8
  c->ctr=c->r[0]; // 801AEFAC
L_801AEFB0:;
  W32(c->r[4]+0x00000000u,c->r[3]); // 801AEFB0
  W32(c->r[4]+0x00000004u,c->r[3]); // 801AEFB4
  W32(c->r[4]+0x00000008u,c->r[3]); // 801AEFB8
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 801AEFBC
  W32(c->r[4]+0x00000010u,c->r[3]); // 801AEFC0
  W32(c->r[4]+0x00000014u,c->r[3]); // 801AEFC4
  W32(c->r[4]+0x00000018u,c->r[3]); // 801AEFC8
  W32(c->r[4]+0x0000001Cu,c->r[3]); // 801AEFCC
  c->r[4]=c->r[4]+0x00000020u; // 801AEFD0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801AEFB0; } // 801AEFD4
  c->r[3]=c->r[31]+0x000005E0u; // 801AEFD8
  c->r[4]=0u+0x00000300u; // 801AEFDC
  c->lr=0x801AEFE4u; f_80188CE0(c); // 801AEFE0
  c->r[0]=0u+0x00000024u; // 801AEFE4
  c->r[4]=c->r[31]+0x00000040u; // 801AEFE8
  c->r[3]=0u+0x00000000u; // 801AEFEC
  c->ctr=c->r[0]; // 801AEFF0
L_801AEFF4:;
  W32(c->r[4]+0x00000000u,c->r[3]); // 801AEFF4
  W32(c->r[4]+0x00000004u,c->r[3]); // 801AEFF8
  W32(c->r[4]+0x00000008u,c->r[3]); // 801AEFFC
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 801AF000
  W32(c->r[4]+0x00000010u,c->r[3]); // 801AF004
  W32(c->r[4]+0x00000014u,c->r[3]); // 801AF008
  W32(c->r[4]+0x00000018u,c->r[3]); // 801AF00C
  W32(c->r[4]+0x0000001Cu,c->r[3]); // 801AF010
  W32(c->r[4]+0x00000020u,c->r[3]); // 801AF014
  W32(c->r[4]+0x00000024u,c->r[3]); // 801AF018
  c->r[4]=c->r[4]+0x00000028u; // 801AF01C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801AEFF4; } // 801AF020
  c->r[3]=c->r[31]+0x00000040u; // 801AF024
  c->r[4]=0u+0x000005A0u; // 801AF028
  c->lr=0x801AF030u; f_80188CE0(c); // 801AF02C
  c->lr=0x801AF034u; f_801AEE40(c); // 801AF030
  c->r[3]=0u+0x801B0000u; // 801AF034
  c->r[3]=c->r[3]+0xFFFFED00u; // 801AF038
  c->lr=0x801AF040u; f_801ACC10(c); // 801AF03C
  c->r[0]=R32(c->r[13]+0xFFFFB410u); // 801AF040
  c->r[7]=c->r[31]+0x00000040u; // 801AF044
  c->r[4]=0u+0x00000012u; // 801AF048
  c->r[3]=0u+0x000000B4u; // 801AF04C
  cmpu(c,0,c->r[0],0x00000001u); // 801AF050
  c->r[6]=c->r[7]+0x00000168u; // 801AF054
  c->r[5]=c->r[7]+0x000002D0u; // 801AF058
  c->r[0]=c->r[7]+0x00000438u; // 801AF05C
  W32(c->r[1]+0x00000008u,c->r[7]); // 801AF060
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 801AF064
  W32(c->r[1]+0x00000010u,c->r[5]); // 801AF068
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AF06C
  W32(c->r[13]+0xFFFFB404u,c->r[4]); // 801AF070
  W32(c->r[13]+0xFFFFB408u,c->r[4]); // 801AF074
  W32(c->r[13]+0xFFFFB40Cu,c->r[3]); // 801AF078
  if (!crb(c,2)) { goto L_801AF098; } // 801AF07C
  c->r[4]=c->r[31]+0x000008E0u; // 801AF080
  c->r[3]=c->r[31]+0x000005E0u; // 801AF084
  c->r[4]=c->r[4]+0x00000300u; // 801AF088
  c->r[5]=c->r[1]+0x00000008u; // 801AF08C
  c->lr=0x801AF094u; f_801AE000(c); // 801AF090
  goto L_801AF0AC; // 801AF094
L_801AF098:;
  c->r[4]=c->r[31]+0x000008E0u; // 801AF098
  c->r[3]=c->r[31]+0x000005E0u; // 801AF09C
  c->r[4]=c->r[4]+0x00000180u; // 801AF0A0
  c->r[5]=c->r[1]+0x00000008u; // 801AF0A4
  c->lr=0x801AF0ACu; f_801AE000(c); // 801AF0A8
L_801AF0AC:;
  c->r[0]=R32(c->r[13]+0xFFFFB410u); // 801AF0AC
  c->r[4]=0u+0x00000001u; // 801AF0B0
  c->r[3]=0u+0x00000000u; // 801AF0B4
  W32(c->r[13]+0xFFFFB430u,c->r[4]); // 801AF0B8
  cmpu(c,0,c->r[0],0x00000001u); // 801AF0BC
  W32(c->r[13]+0xFFFFB42Cu,c->r[3]); // 801AF0C0
  if (!crb(c,2)) { goto L_801AF0F0; } // 801AF0C4
  c->r[3]=R32(c->r[13]+0xFFFFB434u); // 801AF0C8
  c->r[0]=c->r[31]+0x000008E0u; // 801AF0CC
  c->r[4]=0u+0x00000180u; // 801AF0D0
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)384); // 801AF0D4
  c->r[3]=c->r[0]+c->r[3]; // 801AF0D8
  c->lr=0x801AF0E0u; f_801ACC60(c); // 801AF0DC
  c->r[3]=R32(c->r[13]+0xFFFFB434u); // 801AF0E0
  c->r[0]=c->r[3]+0x00000001u; // 801AF0E4
  W32(c->r[13]+0xFFFFB434u,c->r[0]); // 801AF0E8
  goto L_801AF108; // 801AF0EC
L_801AF0F0:;
  c->r[3]=R32(c->r[13]+0xFFFFB438u); // 801AF0F0
  c->r[0]=c->r[31]+0x000008E0u; // 801AF0F4
  c->r[4]=0u+0x00000180u; // 801AF0F8
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)384); // 801AF0FC
  c->r[3]=c->r[0]+c->r[3]; // 801AF100
  c->lr=0x801AF108u; f_801ACC60(c); // 801AF104
L_801AF108:;
  c->lr=0x801AF10Cu; f_801ACCE0(c); // 801AF108
  c->r[0]=0u+0x00000000u; // 801AF10C
  W32(c->r[13]+0xFFFFB400u,c->r[0]); // 801AF110
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801AF114
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AF118
  c->lr=c->r[0]; // 801AF11C
  c->r[1]=c->r[1]+0x00000020u; // 801AF120
  return; // 801AF124
}

// AXRegisterCallback
void f_801AF130(Ctx* __restrict c) {
  trace_call(0x801AF130u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AF130
  c->r[0]=c->lr; // 801AF134
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AF138
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AF13C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801AF140
  c->r[30]=c->r[3]|c->r[3]; // 801AF144
  c->r[31]=R32(c->r[13]+0xFFFFB42Cu); // 801AF148
  c->lr=0x801AF150u; f_8018D6A0(c); // 801AF14C
  W32(c->r[13]+0xFFFFB42Cu,c->r[30]); // 801AF150
  c->lr=0x801AF158u; f_8018D6E0(c); // 801AF154
  c->r[3]=c->r[31]|c->r[31]; // 801AF158
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AF15C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801AF160
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AF164
  c->lr=c->r[0]; // 801AF168
  c->r[1]=c->r[1]+0x00000010u; // 801AF16C
  return; // 801AF170
}

// AXRmtGetSamplesLeft
void f_801AF180(Ctx* __restrict c) {
  trace_call(0x801AF180u);
  c->r[3]=R32(c->r[13]+0xFFFFB408u); // 801AF180
  c->r[3]=addc(c,c->r[3],0xFFFFFFDCu,0); cr0(c,c->r[3]); // 801AF184
  if (!crb(c,0)) { goto L_801AF194; } // 801AF188
  c->r[0]=R32(c->r[13]+0xFFFFB40Cu); // 801AF18C
  c->r[3]=c->r[3]+c->r[0]; // 801AF190
L_801AF194:;
  c->r[0]=R32(c->r[13]+0xFFFFB404u); // 801AF194
  c->r[3]=c->r[3]-c->r[0]; cr0(c,c->r[3]); // 801AF198
  if (!crb(c,0)) return; // 801AF19C
  c->r[0]=R32(c->r[13]+0xFFFFB40Cu); // 801AF1A0
  c->r[3]=c->r[3]+c->r[0]; // 801AF1A4
  return; // 801AF1A8
}

// AXRmtGetSamples
void f_801AF1B0(Ctx* __restrict c) {
  trace_call(0x801AF1B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AF1B0
  c->r[0]=c->lr; // 801AF1B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AF1B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AF1BC
  c->r[6]=R32(c->r[13]+0xFFFFB408u); // 801AF1C0
  c->r[31]=addc(c,c->r[6],0xFFFFFFDCu,0); cr0(c,c->r[31]); // 801AF1C4
  if (!crb(c,0)) { goto L_801AF1D4; } // 801AF1C8
  c->r[0]=R32(c->r[13]+0xFFFFB40Cu); // 801AF1CC
  c->r[31]=c->r[31]+c->r[0]; // 801AF1D0
L_801AF1D4:;
  c->r[0]=R32(c->r[13]+0xFFFFB404u); // 801AF1D4
  c->r[31]=c->r[31]-c->r[0]; cr0(c,c->r[31]); // 801AF1D8
  if (!crb(c,0)) { goto L_801AF1E8; } // 801AF1DC
  c->r[0]=R32(c->r[13]+0xFFFFB40Cu); // 801AF1E0
  c->r[31]=c->r[31]+c->r[0]; // 801AF1E4
L_801AF1E8:;
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[31]); // 801AF1E8
  if (!crb(c,1)) { goto L_801AF1F4; } // 801AF1EC
  goto L_801AF1F8; // 801AF1F0
L_801AF1F4:;
  c->r[31]=c->r[5]|c->r[5]; // 801AF1F4
L_801AF1F8:;
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)360); // 801AF1F8
  c->r[5]=0u+0x802C0000u; // 801AF1FC
  c->r[7]=R32(c->r[13]+0xFFFFB404u); // 801AF200
  c->r[5]=c->r[5]+0xFFFFA220u; // 801AF204
  c->r[5]=c->r[5]+c->r[0]; // 801AF208
  c->ctr=c->r[31]; // 801AF20C
  cmps(c,0,(int32_t)c->r[31],0); // 801AF210
  if (!crb(c,1)) { goto L_801AF240; } // 801AF214
L_801AF218:;
  c->r[6]=rotl(c->r[7],1)&0xFFFFFFFEu; // 801AF218
  c->r[7]=c->r[7]+0x00000001u; // 801AF21C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[6]+c->r[5]); // 801AF220
  W16(c->r[4]+0x00000000u,c->r[0]); // 801AF224
  c->r[4]=c->r[4]+0x00000002u; // 801AF228
  c->r[0]=R32(c->r[13]+0xFFFFB40Cu); // 801AF22C
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 801AF230
  if (crb(c,0)) { goto L_801AF23C; } // 801AF234
  c->r[7]=0u+0x00000000u; // 801AF238
L_801AF23C:;
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801AF218; } // 801AF23C
L_801AF240:;
  c->r[5]=(uint32_t)((int32_t)c->r[3]*(int32_t)360); // 801AF240
  c->r[0]=R32(c->r[13]+0xFFFFB40Cu); // 801AF244
  c->r[3]=0u+0x802C0000u; // 801AF248
  c->r[4]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801AF24C
  c->r[3]=c->r[3]+0xFFFFA220u; // 801AF250
  c->r[3]=c->r[3]+c->r[5]; // 801AF254
  c->lr=0x801AF25Cu; f_80188CB0(c); // 801AF258
  c->r[3]=c->r[31]|c->r[31]; // 801AF25C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AF260
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AF264
  c->lr=c->r[0]; // 801AF268
  c->r[1]=c->r[1]+0x00000010u; // 801AF26C
  return; // 801AF270
}

// AXRmtAdvancePtr
void f_801AF280(Ctx* __restrict c) {
  trace_call(0x801AF280u);
  c->r[4]=R32(c->r[13]+0xFFFFB408u); // 801AF280
  c->r[4]=addc(c,c->r[4],0xFFFFFFDCu,0); cr0(c,c->r[4]); // 801AF284
  if (!crb(c,0)) { goto L_801AF294; } // 801AF288
  c->r[0]=R32(c->r[13]+0xFFFFB40Cu); // 801AF28C
  c->r[4]=c->r[4]+c->r[0]; // 801AF290
L_801AF294:;
  c->r[0]=R32(c->r[13]+0xFFFFB404u); // 801AF294
  c->r[4]=c->r[4]-c->r[0]; cr0(c,c->r[4]); // 801AF298
  if (!crb(c,0)) { goto L_801AF2A8; } // 801AF29C
  c->r[0]=R32(c->r[13]+0xFFFFB40Cu); // 801AF2A0
  c->r[4]=c->r[4]+c->r[0]; // 801AF2A4
L_801AF2A8:;
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[4]); // 801AF2A8
  if (!crb(c,1)) { goto L_801AF2B4; } // 801AF2AC
  c->r[3]=c->r[4]|c->r[4]; // 801AF2B0
L_801AF2B4:;
  c->r[0]=R32(c->r[13]+0xFFFFB404u); // 801AF2B4
  c->r[4]=R32(c->r[13]+0xFFFFB40Cu); // 801AF2B8
  c->r[0]=c->r[0]+c->r[3]; // 801AF2BC
  W32(c->r[13]+0xFFFFB404u,c->r[0]); // 801AF2C0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 801AF2C4
  if (crb(c,0)) return; // 801AF2C8
  c->r[0]=c->r[0]-c->r[4]; // 801AF2CC
  W32(c->r[13]+0xFFFFB404u,c->r[0]); // 801AF2D0
  return; // 801AF2D4
}

// __AXGetStudio
void f_801AF2E0(Ctx* __restrict c) {
  trace_call(0x801AF2E0u);
  c->r[3]=0u+0x802C0000u; // 801AF2E0
  c->r[3]=c->r[3]+0xFFFFAFE0u; // 801AF2E4
  return; // 801AF2E8
}

// __AXDepopFadeMain
void f_801AF2F0(Ctx* __restrict c) {
  trace_call(0x801AF2F0u);
  c->r[6]=0u+0x2AAB0000u; // 801AF2F0
  c->r[7]=R32(c->r[3]+0x00000000u); // 801AF2F4
  c->r[0]=c->r[6]+0xFFFFAAABu; // 801AF2F8
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[7])>>32); // 801AF2FC
  c->r[0]=sraw(c,c->r[0],4); // 801AF300
  c->r[6]=rotl(c->r[0],1)&0x00000001u; // 801AF304
  c->r[0]=c->r[0]+c->r[6]; cr0(c,c->r[0]); // 801AF308
  if (crb(c,2)) { goto L_801AF348; } // 801AF30C
  cmps(c,0,(int32_t)c->r[0],20); // 801AF310
  if (!crb(c,1)) { goto L_801AF31C; } // 801AF314
  c->r[0]=0u+0x00000014u; // 801AF318
L_801AF31C:;
  cmps(c,0,(int32_t)c->r[0],-20); // 801AF31C
  if (!crb(c,0)) { goto L_801AF328; } // 801AF320
  c->r[0]=0u+0xFFFFFFECu; // 801AF324
L_801AF328:;
  W32(c->r[4]+0x00000000u,c->r[7]); // 801AF328
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)96); // 801AF32C
  c->r[0]=0u-c->r[0]; // 801AF330
  c->r[4]=R32(c->r[3]+0x00000000u); // 801AF334
  c->r[4]=c->r[4]-c->r[6]; // 801AF338
  W32(c->r[3]+0x00000000u,c->r[4]); // 801AF33C
  W16(c->r[5]+0x00000000u,c->r[0]); // 801AF340
  return; // 801AF344
L_801AF348:;
  c->r[0]=0u+0x00000000u; // 801AF348
  W32(c->r[3]+0x00000000u,c->r[0]); // 801AF34C
  W32(c->r[4]+0x00000000u,c->r[0]); // 801AF350
  W16(c->r[5]+0x00000000u,c->r[0]); // 801AF354
  return; // 801AF358
}

// __AXDepopFadeRmt
void f_801AF360(Ctx* __restrict c) {
  trace_call(0x801AF360u);
  c->r[6]=0u+0x38E40000u; // 801AF360
  c->r[7]=R32(c->r[3]+0x00000000u); // 801AF364
  c->r[0]=c->r[6]+0xFFFF8E39u; // 801AF368
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[7])>>32); // 801AF36C
  c->r[0]=sraw(c,c->r[0],2); // 801AF370
  c->r[6]=rotl(c->r[0],1)&0x00000001u; // 801AF374
  c->r[0]=c->r[0]+c->r[6]; cr0(c,c->r[0]); // 801AF378
  if (crb(c,2)) { goto L_801AF3B8; } // 801AF37C
  cmps(c,0,(int32_t)c->r[0],20); // 801AF380
  if (!crb(c,1)) { goto L_801AF38C; } // 801AF384
  c->r[0]=0u+0x00000014u; // 801AF388
L_801AF38C:;
  cmps(c,0,(int32_t)c->r[0],-20); // 801AF38C
  if (!crb(c,0)) { goto L_801AF398; } // 801AF390
  c->r[0]=0u+0xFFFFFFECu; // 801AF394
L_801AF398:;
  W32(c->r[4]+0x00000000u,c->r[7]); // 801AF398
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)18); // 801AF39C
  c->r[0]=0u-c->r[0]; // 801AF3A0
  c->r[4]=R32(c->r[3]+0x00000000u); // 801AF3A4
  c->r[4]=c->r[4]-c->r[6]; // 801AF3A8
  W32(c->r[3]+0x00000000u,c->r[4]); // 801AF3AC
  W16(c->r[5]+0x00000000u,c->r[0]); // 801AF3B0
  return; // 801AF3B4
L_801AF3B8:;
  c->r[0]=0u+0x00000000u; // 801AF3B8
  W32(c->r[3]+0x00000000u,c->r[0]); // 801AF3BC
  W32(c->r[4]+0x00000000u,c->r[0]); // 801AF3C0
  W16(c->r[5]+0x00000000u,c->r[0]); // 801AF3C4
  return; // 801AF3C8
}

// __AXPrintStudio
void f_801AF3D0(Ctx* __restrict c) {
  trace_call(0x801AF3D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AF3D0
  c->r[0]=c->lr; // 801AF3D4
  c->r[3]=c->r[13]+0xFFFFB48Cu; // 801AF3D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AF3DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AF3E0
  c->r[31]=0u+0x802C0000u; // 801AF3E4
  c->r[4]=c->r[31]+0xFFFFAFE0u; // 801AF3E8
  c->r[5]=c->r[4]+0x00000004u; // 801AF3EC
  c->lr=0x801AF3F4u; f_801AF2F0(c); // 801AF3F0
  c->r[31]=c->r[31]+0xFFFFAFE0u; // 801AF3F4
  c->r[3]=c->r[13]+0xFFFFB488u; // 801AF3F8
  c->r[4]=c->r[31]+0x00000006u; // 801AF3FC
  c->r[5]=c->r[31]+0x0000000Au; // 801AF400
  c->lr=0x801AF408u; f_801AF2F0(c); // 801AF404
  c->r[4]=c->r[31]+0x0000000Cu; // 801AF408
  c->r[5]=c->r[31]+0x00000010u; // 801AF40C
  c->r[3]=c->r[13]+0xFFFFB484u; // 801AF410
  c->lr=0x801AF418u; f_801AF2F0(c); // 801AF414
  c->r[4]=c->r[31]+0x00000012u; // 801AF418
  c->r[5]=c->r[31]+0x00000016u; // 801AF41C
  c->r[3]=c->r[13]+0xFFFFB480u; // 801AF420
  c->lr=0x801AF428u; f_801AF2F0(c); // 801AF424
  c->r[4]=c->r[31]+0x00000018u; // 801AF428
  c->r[5]=c->r[31]+0x0000001Cu; // 801AF42C
  c->r[3]=c->r[13]+0xFFFFB47Cu; // 801AF430
  c->lr=0x801AF438u; f_801AF2F0(c); // 801AF434
  c->r[4]=c->r[31]+0x0000001Eu; // 801AF438
  c->r[5]=c->r[31]+0x00000022u; // 801AF43C
  c->r[3]=c->r[13]+0xFFFFB478u; // 801AF440
  c->lr=0x801AF448u; f_801AF2F0(c); // 801AF444
  c->r[4]=c->r[31]+0x00000024u; // 801AF448
  c->r[5]=c->r[31]+0x00000028u; // 801AF44C
  c->r[3]=c->r[13]+0xFFFFB474u; // 801AF450
  c->lr=0x801AF458u; f_801AF2F0(c); // 801AF454
  c->r[4]=c->r[31]+0x0000002Au; // 801AF458
  c->r[5]=c->r[31]+0x0000002Eu; // 801AF45C
  c->r[3]=c->r[13]+0xFFFFB470u; // 801AF460
  c->lr=0x801AF468u; f_801AF2F0(c); // 801AF464
  c->r[4]=c->r[31]+0x00000030u; // 801AF468
  c->r[5]=c->r[31]+0x00000034u; // 801AF46C
  c->r[3]=c->r[13]+0xFFFFB46Cu; // 801AF470
  c->lr=0x801AF478u; f_801AF2F0(c); // 801AF474
  c->r[4]=c->r[31]+0x00000036u; // 801AF478
  c->r[5]=c->r[31]+0x0000003Au; // 801AF47C
  c->r[3]=c->r[13]+0xFFFFB468u; // 801AF480
  c->lr=0x801AF488u; f_801AF2F0(c); // 801AF484
  c->r[4]=c->r[31]+0x0000003Cu; // 801AF488
  c->r[5]=c->r[31]+0x00000040u; // 801AF48C
  c->r[3]=c->r[13]+0xFFFFB464u; // 801AF490
  c->lr=0x801AF498u; f_801AF2F0(c); // 801AF494
  c->r[4]=c->r[31]+0x00000042u; // 801AF498
  c->r[5]=c->r[31]+0x00000046u; // 801AF49C
  c->r[3]=c->r[13]+0xFFFFB460u; // 801AF4A0
  c->lr=0x801AF4A8u; f_801AF2F0(c); // 801AF4A4
  c->r[4]=c->r[31]+0x00000048u; // 801AF4A8
  c->r[5]=c->r[31]+0x0000004Cu; // 801AF4AC
  c->r[3]=c->r[13]+0xFFFFB45Cu; // 801AF4B0
  c->lr=0x801AF4B8u; f_801AF360(c); // 801AF4B4
  c->r[4]=c->r[31]+0x00000054u; // 801AF4B8
  c->r[5]=c->r[31]+0x00000058u; // 801AF4BC
  c->r[3]=c->r[13]+0xFFFFB458u; // 801AF4C0
  c->lr=0x801AF4C8u; f_801AF360(c); // 801AF4C4
  c->r[4]=c->r[31]+0x00000060u; // 801AF4C8
  c->r[5]=c->r[31]+0x00000064u; // 801AF4CC
  c->r[3]=c->r[13]+0xFFFFB454u; // 801AF4D0
  c->lr=0x801AF4D8u; f_801AF360(c); // 801AF4D4
  c->r[4]=c->r[31]+0x0000006Cu; // 801AF4D8
  c->r[5]=c->r[31]+0x00000070u; // 801AF4DC
  c->r[3]=c->r[13]+0xFFFFB450u; // 801AF4E0
  c->lr=0x801AF4E8u; f_801AF360(c); // 801AF4E4
  c->r[4]=c->r[31]+0x0000004Eu; // 801AF4E8
  c->r[5]=c->r[31]+0x00000052u; // 801AF4EC
  c->r[3]=c->r[13]+0xFFFFB44Cu; // 801AF4F0
  c->lr=0x801AF4F8u; f_801AF360(c); // 801AF4F4
  c->r[4]=c->r[31]+0x0000005Au; // 801AF4F8
  c->r[5]=c->r[31]+0x0000005Eu; // 801AF4FC
  c->r[3]=c->r[13]+0xFFFFB448u; // 801AF500
  c->lr=0x801AF508u; f_801AF360(c); // 801AF504
  c->r[4]=c->r[31]+0x00000066u; // 801AF508
  c->r[5]=c->r[31]+0x0000006Au; // 801AF50C
  c->r[3]=c->r[13]+0xFFFFB444u; // 801AF510
  c->lr=0x801AF518u; f_801AF360(c); // 801AF514
  c->r[4]=c->r[31]+0x00000072u; // 801AF518
  c->r[5]=c->r[31]+0x00000076u; // 801AF51C
  c->r[3]=c->r[13]+0xFFFFB440u; // 801AF520
  c->lr=0x801AF528u; f_801AF360(c); // 801AF524
  c->r[3]=c->r[31]|c->r[31]; // 801AF528
  c->r[4]=0u+0x00000078u; // 801AF52C
  c->lr=0x801AF534u; f_80188CE0(c); // 801AF530
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AF534
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AF538
  c->lr=c->r[0]; // 801AF53C
  c->r[1]=c->r[1]+0x00000010u; // 801AF540
  return; // 801AF544
}

// __AXSPBInit
void f_801AF550(Ctx* __restrict c) {
  trace_call(0x801AF550u);
  c->r[0]=0u+0x00000000u; // 801AF550
  W32(c->r[13]+0xFFFFB440u,c->r[0]); // 801AF554
  W32(c->r[13]+0xFFFFB444u,c->r[0]); // 801AF558
  W32(c->r[13]+0xFFFFB448u,c->r[0]); // 801AF55C
  W32(c->r[13]+0xFFFFB44Cu,c->r[0]); // 801AF560
  W32(c->r[13]+0xFFFFB450u,c->r[0]); // 801AF564
  W32(c->r[13]+0xFFFFB454u,c->r[0]); // 801AF568
  W32(c->r[13]+0xFFFFB458u,c->r[0]); // 801AF56C
  W32(c->r[13]+0xFFFFB45Cu,c->r[0]); // 801AF570
  W32(c->r[13]+0xFFFFB460u,c->r[0]); // 801AF574
  W32(c->r[13]+0xFFFFB464u,c->r[0]); // 801AF578
  W32(c->r[13]+0xFFFFB468u,c->r[0]); // 801AF57C
  W32(c->r[13]+0xFFFFB46Cu,c->r[0]); // 801AF580
  W32(c->r[13]+0xFFFFB470u,c->r[0]); // 801AF584
  W32(c->r[13]+0xFFFFB474u,c->r[0]); // 801AF588
  W32(c->r[13]+0xFFFFB478u,c->r[0]); // 801AF58C
  W32(c->r[13]+0xFFFFB47Cu,c->r[0]); // 801AF590
  W32(c->r[13]+0xFFFFB480u,c->r[0]); // 801AF594
  W32(c->r[13]+0xFFFFB484u,c->r[0]); // 801AF598
  W32(c->r[13]+0xFFFFB488u,c->r[0]); // 801AF59C
  W32(c->r[13]+0xFFFFB48Cu,c->r[0]); // 801AF5A0
  return; // 801AF5A4
}

// __AXDepopVoice
void f_801AF5B0(Ctx* __restrict c) {
  trace_call(0x801AF5B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AF5B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AF5B4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801AF5B8
  c->r[4]=R32(c->r[13]+0xFFFFB48Cu); // 801AF5BC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000052u); // 801AF5C0
  c->r[6]=R32(c->r[13]+0xFFFFB480u); // 801AF5C4
  c->r[0]=c->r[4]+c->r[0]; // 801AF5C8
  W32(c->r[13]+0xFFFFB48Cu,c->r[0]); // 801AF5CC
  c->r[5]=R32(c->r[13]+0xFFFFB474u); // 801AF5D0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000054u); // 801AF5D4
  c->r[4]=R32(c->r[13]+0xFFFFB468u); // 801AF5D8
  c->r[0]=c->r[6]+c->r[0]; // 801AF5DC
  W32(c->r[13]+0xFFFFB480u,c->r[0]); // 801AF5E0
  c->r[8]=R32(c->r[13]+0xFFFFB488u); // 801AF5E4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000056u); // 801AF5E8
  c->r[7]=R32(c->r[13]+0xFFFFB47Cu); // 801AF5EC
  c->r[0]=c->r[5]+c->r[0]; // 801AF5F0
  W32(c->r[13]+0xFFFFB474u,c->r[0]); // 801AF5F4
  c->r[6]=R32(c->r[13]+0xFFFFB470u); // 801AF5F8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000058u); // 801AF5FC
  c->r[5]=R32(c->r[13]+0xFFFFB464u); // 801AF600
  c->r[0]=c->r[4]+c->r[0]; // 801AF604
  W32(c->r[13]+0xFFFFB468u,c->r[0]); // 801AF608
  c->r[4]=R32(c->r[13]+0xFFFFB484u); // 801AF60C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000005Au); // 801AF610
  c->r[30]=R32(c->r[13]+0xFFFFB478u); // 801AF614
  c->r[0]=c->r[8]+c->r[0]; // 801AF618
  W32(c->r[13]+0xFFFFB488u,c->r[0]); // 801AF61C
  c->r[31]=R32(c->r[13]+0xFFFFB46Cu); // 801AF620
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000005Cu); // 801AF624
  c->r[12]=R32(c->r[13]+0xFFFFB460u); // 801AF628
  c->r[0]=c->r[7]+c->r[0]; // 801AF62C
  W32(c->r[13]+0xFFFFB47Cu,c->r[0]); // 801AF630
  c->r[11]=R32(c->r[13]+0xFFFFB45Cu); // 801AF634
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000005Eu); // 801AF638
  c->r[10]=R32(c->r[13]+0xFFFFB458u); // 801AF63C
  c->r[0]=c->r[6]+c->r[0]; // 801AF640
  W32(c->r[13]+0xFFFFB470u,c->r[0]); // 801AF644
  c->r[9]=R32(c->r[13]+0xFFFFB454u); // 801AF648
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000060u); // 801AF64C
  c->r[8]=R32(c->r[13]+0xFFFFB450u); // 801AF650
  c->r[0]=c->r[5]+c->r[0]; // 801AF654
  W32(c->r[13]+0xFFFFB464u,c->r[0]); // 801AF658
  c->r[7]=R32(c->r[13]+0xFFFFB44Cu); // 801AF65C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000062u); // 801AF660
  c->r[6]=R32(c->r[13]+0xFFFFB448u); // 801AF664
  c->r[0]=c->r[4]+c->r[0]; // 801AF668
  W32(c->r[13]+0xFFFFB484u,c->r[0]); // 801AF66C
  c->r[5]=R32(c->r[13]+0xFFFFB444u); // 801AF670
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000064u); // 801AF674
  c->r[4]=R32(c->r[13]+0xFFFFB440u); // 801AF678
  c->r[0]=c->r[30]+c->r[0]; // 801AF67C
  W32(c->r[13]+0xFFFFB478u,c->r[0]); // 801AF680
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000066u); // 801AF684
  c->r[0]=c->r[31]+c->r[0]; // 801AF688
  W32(c->r[13]+0xFFFFB46Cu,c->r[0]); // 801AF68C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000068u); // 801AF690
  c->r[0]=c->r[12]+c->r[0]; // 801AF694
  W32(c->r[13]+0xFFFFB460u,c->r[0]); // 801AF698
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x000000FAu); // 801AF69C
  c->r[0]=c->r[11]+c->r[0]; // 801AF6A0
  W32(c->r[13]+0xFFFFB45Cu,c->r[0]); // 801AF6A4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x000000FCu); // 801AF6A8
  c->r[0]=c->r[10]+c->r[0]; // 801AF6AC
  W32(c->r[13]+0xFFFFB458u,c->r[0]); // 801AF6B0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x000000FEu); // 801AF6B4
  c->r[0]=c->r[9]+c->r[0]; // 801AF6B8
  W32(c->r[13]+0xFFFFB454u,c->r[0]); // 801AF6BC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000100u); // 801AF6C0
  c->r[0]=c->r[8]+c->r[0]; // 801AF6C4
  W32(c->r[13]+0xFFFFB450u,c->r[0]); // 801AF6C8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000102u); // 801AF6CC
  c->r[0]=c->r[7]+c->r[0]; // 801AF6D0
  W32(c->r[13]+0xFFFFB44Cu,c->r[0]); // 801AF6D4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000104u); // 801AF6D8
  c->r[0]=c->r[6]+c->r[0]; // 801AF6DC
  W32(c->r[13]+0xFFFFB448u,c->r[0]); // 801AF6E0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000106u); // 801AF6E4
  c->r[0]=c->r[5]+c->r[0]; // 801AF6E8
  W32(c->r[13]+0xFFFFB444u,c->r[0]); // 801AF6EC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000108u); // 801AF6F0
  c->r[0]=c->r[4]+c->r[0]; // 801AF6F4
  W32(c->r[13]+0xFFFFB440u,c->r[0]); // 801AF6F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AF6FC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801AF700
  c->r[1]=c->r[1]+0x00000010u; // 801AF704
  return; // 801AF708
}

// __AXGetNumVoices
void f_801AF710(Ctx* __restrict c) {
  trace_call(0x801AF710u);
  c->r[3]=R32(c->r[13]+0xFFFFB4A0u); // 801AF710
  return; // 801AF714
}

// __AXServiceVPB
void f_801AF720(Ctx* __restrict c) {
  trace_call(0x801AF720u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AF720
  c->r[0]=c->lr; // 801AF724
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AF728
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801AF72C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801AF730
  c->r[30]=c->r[3]+0x00000028u; // 801AF734
  W32(c->r[1]+0x00000014u,c->r[29]); // 801AF738
  W32(c->r[1]+0x00000010u,c->r[28]); // 801AF73C
  c->r[28]=c->r[3]|c->r[3]; // 801AF740
  c->r[5]=R32(c->r[13]+0xFFFFB4A0u); // 801AF744
  c->r[4]=R32(c->r[13]+0xFFFFB490u); // 801AF748
  c->r[0]=c->r[5]+0x00000001u; // 801AF74C
  W32(c->r[13]+0xFFFFB4A0u,c->r[0]); // 801AF750
  c->r[0]=R32(c->r[3]+0x00000018u); // 801AF754
  c->r[29]=R32(c->r[3]+0x0000001Cu); // 801AF758
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)320); // 801AF75C
  cmps(c,0,(int32_t)c->r[29],0); // 801AF760
  c->r[31]=c->r[4]+c->r[0]; // 801AF764
  if (!crb(c,2)) { goto L_801AF790; } // 801AF768
  c->r[0]=R16(c->r[31]+0x00000010u); // 801AF76C
  W16(c->r[30]+0x00000010u,c->r[0]); // 801AF770
  c->r[0]=R16(c->r[31]+0x0000006Au); // 801AF774
  W16(c->r[30]+0x0000006Au,c->r[0]); // 801AF778
  c->r[0]=R16(c->r[31]+0x0000007Au); // 801AF77C
  W16(c->r[30]+0x0000007Au,c->r[0]); // 801AF780
  c->r[0]=R16(c->r[31]+0x0000007Cu); // 801AF784
  W16(c->r[30]+0x0000007Cu,c->r[0]); // 801AF788
  goto L_801AFC50; // 801AF78C
L_801AF790:;
  c->r[0]=rotl(c->r[29],0)&0x80000000u; cr0(c,c->r[0]); // 801AF790
  if (crb(c,2)) { goto L_801AF7AC; } // 801AF794
  c->r[3]=c->r[31]|c->r[31]; // 801AF798
  c->r[4]=c->r[30]|c->r[30]; // 801AF79C
  c->r[5]=0u+0x00000140u; // 801AF7A0
  c->lr=0x801AF7A8u; f_80004364(c); // 801AF7A4
  goto L_801AFC50; // 801AF7A8
L_801AF7AC:;
  c->r[0]=rotl(c->r[29],0)&0x00000001u; cr0(c,c->r[0]); // 801AF7AC
  if (crb(c,2)) { goto L_801AF7C4; } // 801AF7B0
  c->r[0]=R16(c->r[30]+0x00000008u); // 801AF7B4
  W16(c->r[31]+0x00000008u,c->r[0]); // 801AF7B8
  c->r[0]=R16(c->r[30]+0x0000000Au); // 801AF7BC
  W16(c->r[31]+0x0000000Au,c->r[0]); // 801AF7C0
L_801AF7C4:;
  c->r[0]=rotl(c->r[29],0)&0x00000002u; cr0(c,c->r[0]); // 801AF7C4
  if (crb(c,2)) { goto L_801AF7D4; } // 801AF7C8
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 801AF7CC
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801AF7D0
L_801AF7D4:;
  c->r[0]=rotl(c->r[29],0)&0x00000004u; cr0(c,c->r[0]); // 801AF7D4
  if (crb(c,2)) { goto L_801AF7E8; } // 801AF7D8
  c->r[0]=R16(c->r[30]+0x00000010u); // 801AF7DC
  W16(c->r[31]+0x00000010u,c->r[0]); // 801AF7E0
  goto L_801AF7F0; // 801AF7E4
L_801AF7E8:;
  c->r[0]=R16(c->r[31]+0x00000010u); // 801AF7E8
  W16(c->r[30]+0x00000010u,c->r[0]); // 801AF7EC
L_801AF7F0:;
  c->r[0]=rotl(c->r[29],0)&0x00000008u; cr0(c,c->r[0]); // 801AF7F0
  if (crb(c,2)) { goto L_801AF800; } // 801AF7F4
  c->r[0]=R16(c->r[30]+0x00000012u); // 801AF7F8
  W16(c->r[31]+0x00000012u,c->r[0]); // 801AF7FC
L_801AF800:;
  c->r[0]=rotl(c->r[29],0)&0x00000010u; cr0(c,c->r[0]); // 801AF800
  if (crb(c,2)) { goto L_801AF818; } // 801AF804
  c->r[3]=c->r[31]+0x00000014u; // 801AF808
  c->r[4]=c->r[30]+0x00000014u; // 801AF80C
  c->r[5]=0u+0x00000030u; // 801AF810
  c->lr=0x801AF818u; f_80004364(c); // 801AF814
L_801AF818:;
  c->r[0]=rotl(c->r[29],0)&0x00000040u; cr0(c,c->r[0]); // 801AF818
  if (crb(c,2)) { goto L_801AF834; } // 801AF81C
  c->r[0]=R16(c->r[30]+0x0000004Eu); // 801AF820
  W16(c->r[31]+0x0000004Eu,c->r[0]); // 801AF824
  c->r[0]=R16(c->r[30]+0x00000050u); // 801AF828
  W16(c->r[31]+0x00000050u,c->r[0]); // 801AF82C
  goto L_801AF8BC; // 801AF830
L_801AF834:;
  c->r[0]=rotl(c->r[29],0)&0x00000020u; cr0(c,c->r[0]); // 801AF834
  if (crb(c,2)) { goto L_801AF8BC; } // 801AF838
  c->r[3]=R16(c->r[30]+0x00000044u); // 801AF83C
  c->r[0]=0u+0x00000000u; // 801AF840
  W16(c->r[31]+0x00000044u,c->r[3]); // 801AF844
  c->r[3]=R16(c->r[30]+0x00000046u); // 801AF848
  W16(c->r[31]+0x00000046u,c->r[3]); // 801AF84C
  c->r[3]=R16(c->r[30]+0x00000048u); // 801AF850
  W16(c->r[31]+0x00000048u,c->r[3]); // 801AF854
  c->r[3]=R16(c->r[30]+0x0000004Au); // 801AF858
  W16(c->r[31]+0x0000004Au,c->r[3]); // 801AF85C
  c->r[3]=R16(c->r[30]+0x0000004Cu); // 801AF860
  W16(c->r[31]+0x0000004Cu,c->r[3]); // 801AF864
  c->r[3]=R16(c->r[30]+0x0000004Eu); // 801AF868
  W16(c->r[31]+0x0000004Eu,c->r[3]); // 801AF86C
  c->r[3]=R16(c->r[30]+0x00000050u); // 801AF870
  W16(c->r[31]+0x00000050u,c->r[3]); // 801AF874
  c->r[3]=R32(c->r[28]+0x00000024u); // 801AF878
  W32(c->r[3]+0x00000000u,c->r[0]); // 801AF87C
  W32(c->r[3]+0x00000004u,c->r[0]); // 801AF880
  W32(c->r[3]+0x00000008u,c->r[0]); // 801AF884
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801AF888
  W32(c->r[3]+0x00000010u,c->r[0]); // 801AF88C
  W32(c->r[3]+0x00000014u,c->r[0]); // 801AF890
  W32(c->r[3]+0x00000018u,c->r[0]); // 801AF894
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 801AF898
  W32(c->r[3]+0x00000020u,c->r[0]); // 801AF89C
  W32(c->r[3]+0x00000024u,c->r[0]); // 801AF8A0
  W32(c->r[3]+0x00000028u,c->r[0]); // 801AF8A4
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 801AF8A8
  W32(c->r[3]+0x00000030u,c->r[0]); // 801AF8AC
  W32(c->r[3]+0x00000034u,c->r[0]); // 801AF8B0
  W32(c->r[3]+0x00000038u,c->r[0]); // 801AF8B4
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 801AF8B8
L_801AF8BC:;
  c->r[0]=rotl(c->r[29],0)&0x00000080u; cr0(c,c->r[0]); // 801AF8BC
  if (crb(c,2)) { goto L_801AF8D4; } // 801AF8C0
  c->r[3]=c->r[31]+0x00000052u; // 801AF8C4
  c->r[4]=c->r[30]+0x00000052u; // 801AF8C8
  c->r[5]=0u+0x00000018u; // 801AF8CC
  c->lr=0x801AF8D4u; f_80004364(c); // 801AF8D0
L_801AF8D4:;
  c->r[0]=rotl(c->r[29],0)&0x00000200u; cr0(c,c->r[0]); // 801AF8D4
  if (crb(c,2)) { goto L_801AF8F0; } // 801AF8D8
  c->r[0]=R16(c->r[31]+0x0000006Au); // 801AF8DC
  W16(c->r[30]+0x0000006Au,c->r[0]); // 801AF8E0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x0000006Cu); // 801AF8E4
  W16(c->r[31]+0x0000006Cu,c->r[0]); // 801AF8E8
  goto L_801AF908; // 801AF8EC
L_801AF8F0:;
  c->r[0]=rotl(c->r[29],0)&0x00000100u; cr0(c,c->r[0]); // 801AF8F0
  if (crb(c,2)) { goto L_801AF908; } // 801AF8F4
  c->r[0]=R16(c->r[30]+0x0000006Au); // 801AF8F8
  W16(c->r[31]+0x0000006Au,c->r[0]); // 801AF8FC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x0000006Cu); // 801AF900
  W16(c->r[31]+0x0000006Cu,c->r[0]); // 801AF904
L_801AF908:;
  c->r[0]=rotl(c->r[29],0)&0x00007800u; cr0(c,c->r[0]); // 801AF908
  if (crb(c,2)) { goto L_801AF960; } // 801AF90C
  c->r[0]=rotl(c->r[29],0)&0x00000800u; cr0(c,c->r[0]); // 801AF910
  if (crb(c,2)) { goto L_801AF920; } // 801AF914
  c->r[0]=R16(c->r[30]+0x0000006Eu); // 801AF918
  W16(c->r[31]+0x0000006Eu,c->r[0]); // 801AF91C
L_801AF920:;
  c->r[0]=rotl(c->r[29],0)&0x00001000u; cr0(c,c->r[0]); // 801AF920
  if (crb(c,2)) { goto L_801AF930; } // 801AF924
  c->r[0]=R32(c->r[30]+0x00000072u); // 801AF928
  W32(c->r[31]+0x00000072u,c->r[0]); // 801AF92C
L_801AF930:;
  c->r[0]=rotl(c->r[29],0)&0x00002000u; cr0(c,c->r[0]); // 801AF930
  if (crb(c,2)) { goto L_801AF940; } // 801AF934
  c->r[0]=R32(c->r[30]+0x00000076u); // 801AF938
  W32(c->r[31]+0x00000076u,c->r[0]); // 801AF93C
L_801AF940:;
  c->r[0]=rotl(c->r[29],0)&0x00004000u; cr0(c,c->r[0]); // 801AF940
  if (crb(c,2)) { goto L_801AF954; } // 801AF944
  c->r[0]=R32(c->r[30]+0x0000007Au); // 801AF948
  W32(c->r[31]+0x0000007Au,c->r[0]); // 801AF94C
  goto L_801AF99C; // 801AF950
L_801AF954:;
  c->r[0]=R32(c->r[31]+0x0000007Au); // 801AF954
  W32(c->r[30]+0x0000007Au,c->r[0]); // 801AF958
  goto L_801AF99C; // 801AF95C
L_801AF960:;
  c->r[0]=rotl(c->r[29],0)&0x00000400u; cr0(c,c->r[0]); // 801AF960
  if (crb(c,2)) { goto L_801AF98C; } // 801AF964
  c->r[0]=R32(c->r[30]+0x0000006Eu); // 801AF968
  W32(c->r[31]+0x0000006Eu,c->r[0]); // 801AF96C
  c->r[0]=R32(c->r[30]+0x00000072u); // 801AF970
  W32(c->r[31]+0x00000072u,c->r[0]); // 801AF974
  c->r[0]=R32(c->r[30]+0x00000076u); // 801AF978
  W32(c->r[31]+0x00000076u,c->r[0]); // 801AF97C
  c->r[0]=R32(c->r[30]+0x0000007Au); // 801AF980
  W32(c->r[31]+0x0000007Au,c->r[0]); // 801AF984
  goto L_801AF99C; // 801AF988
L_801AF98C:;
  c->r[0]=R16(c->r[31]+0x0000007Au); // 801AF98C
  W16(c->r[30]+0x0000007Au,c->r[0]); // 801AF990
  c->r[0]=R16(c->r[31]+0x0000007Cu); // 801AF994
  W16(c->r[30]+0x0000007Cu,c->r[0]); // 801AF998
L_801AF99C:;
  c->r[0]=rotl(c->r[29],0)&0x00008000u; cr0(c,c->r[0]); // 801AF99C
  if (crb(c,2)) { goto L_801AF9F4; } // 801AF9A0
  c->r[0]=R32(c->r[30]+0x0000007Eu); // 801AF9A4
  W32(c->r[31]+0x0000007Eu,c->r[0]); // 801AF9A8
  c->r[0]=R32(c->r[30]+0x00000082u); // 801AF9AC
  W32(c->r[31]+0x00000082u,c->r[0]); // 801AF9B0
  c->r[0]=R32(c->r[30]+0x00000086u); // 801AF9B4
  W32(c->r[31]+0x00000086u,c->r[0]); // 801AF9B8
  c->r[0]=R32(c->r[30]+0x0000008Au); // 801AF9BC
  W32(c->r[31]+0x0000008Au,c->r[0]); // 801AF9C0
  c->r[0]=R32(c->r[30]+0x0000008Eu); // 801AF9C4
  W32(c->r[31]+0x0000008Eu,c->r[0]); // 801AF9C8
  c->r[0]=R32(c->r[30]+0x00000092u); // 801AF9CC
  W32(c->r[31]+0x00000092u,c->r[0]); // 801AF9D0
  c->r[0]=R32(c->r[30]+0x00000096u); // 801AF9D4
  W32(c->r[31]+0x00000096u,c->r[0]); // 801AF9D8
  c->r[0]=R32(c->r[30]+0x0000009Au); // 801AF9DC
  W32(c->r[31]+0x0000009Au,c->r[0]); // 801AF9E0
  c->r[0]=R32(c->r[30]+0x0000009Eu); // 801AF9E4
  W32(c->r[31]+0x0000009Eu,c->r[0]); // 801AF9E8
  c->r[0]=R32(c->r[30]+0x000000A2u); // 801AF9EC
  W32(c->r[31]+0x000000A2u,c->r[0]); // 801AF9F0
L_801AF9F4:;
  c->r[0]=rotl(c->r[29],0)&0x00020000u; cr0(c,c->r[0]); // 801AF9F4
  if (crb(c,2)) { goto L_801AFA10; } // 801AF9F8
  c->r[0]=R16(c->r[30]+0x000000A6u); // 801AF9FC
  W16(c->r[31]+0x000000A6u,c->r[0]); // 801AFA00
  c->r[0]=R16(c->r[30]+0x000000A8u); // 801AFA04
  W16(c->r[31]+0x000000A8u,c->r[0]); // 801AFA08
  goto L_801AFA50; // 801AFA0C
L_801AFA10:;
  c->r[0]=rotl(c->r[29],0)&0x00010000u; cr0(c,c->r[0]); // 801AFA10
  if (crb(c,2)) { goto L_801AFA50; } // 801AFA14
  c->r[0]=R16(c->r[30]+0x000000A6u); // 801AFA18
  W16(c->r[31]+0x000000A6u,c->r[0]); // 801AFA1C
  c->r[0]=R16(c->r[30]+0x000000A8u); // 801AFA20
  W16(c->r[31]+0x000000A8u,c->r[0]); // 801AFA24
  c->r[0]=R16(c->r[30]+0x000000AAu); // 801AFA28
  W16(c->r[31]+0x000000AAu,c->r[0]); // 801AFA2C
  c->r[0]=R16(c->r[30]+0x000000ACu); // 801AFA30
  W16(c->r[31]+0x000000ACu,c->r[0]); // 801AFA34
  c->r[0]=R16(c->r[30]+0x000000AEu); // 801AFA38
  W16(c->r[31]+0x000000AEu,c->r[0]); // 801AFA3C
  c->r[0]=R16(c->r[30]+0x000000B0u); // 801AFA40
  W16(c->r[31]+0x000000B0u,c->r[0]); // 801AFA44
  c->r[0]=R16(c->r[30]+0x000000B2u); // 801AFA48
  W16(c->r[31]+0x000000B2u,c->r[0]); // 801AFA4C
L_801AFA50:;
  c->r[0]=rotl(c->r[29],0)&0x00040000u; cr0(c,c->r[0]); // 801AFA50
  if (crb(c,2)) { goto L_801AFA70; } // 801AFA54
  c->r[0]=R16(c->r[30]+0x000000B4u); // 801AFA58
  W16(c->r[31]+0x000000B4u,c->r[0]); // 801AFA5C
  c->r[0]=R16(c->r[30]+0x000000B6u); // 801AFA60
  W16(c->r[31]+0x000000B6u,c->r[0]); // 801AFA64
  c->r[0]=R16(c->r[30]+0x000000B8u); // 801AFA68
  W16(c->r[31]+0x000000B8u,c->r[0]); // 801AFA6C
L_801AFA70:;
  c->r[0]=rotl(c->r[29],0)&0x00100000u; cr0(c,c->r[0]); // 801AFA70
  if (crb(c,2)) { goto L_801AFA8C; } // 801AFA74
  c->r[0]=R16(c->r[30]+0x000000BEu); // 801AFA78
  W16(c->r[31]+0x000000BEu,c->r[0]); // 801AFA7C
  c->r[0]=R16(c->r[30]+0x000000C0u); // 801AFA80
  W16(c->r[31]+0x000000C0u,c->r[0]); // 801AFA84
  goto L_801AFAB4; // 801AFA88
L_801AFA8C:;
  c->r[0]=rotl(c->r[29],0)&0x00080000u; cr0(c,c->r[0]); // 801AFA8C
  if (crb(c,2)) { goto L_801AFAB4; } // 801AFA90
  c->r[0]=R16(c->r[30]+0x000000BAu); // 801AFA94
  W16(c->r[31]+0x000000BAu,c->r[0]); // 801AFA98
  c->r[0]=R16(c->r[30]+0x000000BCu); // 801AFA9C
  W16(c->r[31]+0x000000BCu,c->r[0]); // 801AFAA0
  c->r[0]=R16(c->r[30]+0x000000BEu); // 801AFAA4
  W16(c->r[31]+0x000000BEu,c->r[0]); // 801AFAA8
  c->r[0]=R16(c->r[30]+0x000000C0u); // 801AFAAC
  W16(c->r[31]+0x000000C0u,c->r[0]); // 801AFAB0
L_801AFAB4:;
  c->r[0]=rotl(c->r[29],0)&0x00400000u; cr0(c,c->r[0]); // 801AFAB4
  if (crb(c,2)) { goto L_801AFAE8; } // 801AFAB8
  c->r[0]=R16(c->r[30]+0x000000CCu); // 801AFABC
  W16(c->r[31]+0x000000CCu,c->r[0]); // 801AFAC0
  c->r[0]=R16(c->r[30]+0x000000CEu); // 801AFAC4
  W16(c->r[31]+0x000000CEu,c->r[0]); // 801AFAC8
  c->r[0]=R16(c->r[30]+0x000000D0u); // 801AFACC
  W16(c->r[31]+0x000000D0u,c->r[0]); // 801AFAD0
  c->r[0]=R16(c->r[30]+0x000000D2u); // 801AFAD4
  W16(c->r[31]+0x000000D2u,c->r[0]); // 801AFAD8
  c->r[0]=R16(c->r[30]+0x000000D4u); // 801AFADC
  W16(c->r[31]+0x000000D4u,c->r[0]); // 801AFAE0
  goto L_801AFB40; // 801AFAE4
L_801AFAE8:;
  c->r[0]=rotl(c->r[29],0)&0x00200000u; cr0(c,c->r[0]); // 801AFAE8
  if (crb(c,2)) { goto L_801AFB40; } // 801AFAEC
  c->r[0]=R16(c->r[30]+0x000000C2u); // 801AFAF0
  W16(c->r[31]+0x000000C2u,c->r[0]); // 801AFAF4
  c->r[0]=R16(c->r[30]+0x000000C4u); // 801AFAF8
  W16(c->r[31]+0x000000C4u,c->r[0]); // 801AFAFC
  c->r[0]=R16(c->r[30]+0x000000C6u); // 801AFB00
  W16(c->r[31]+0x000000C6u,c->r[0]); // 801AFB04
  c->r[0]=R16(c->r[30]+0x000000C8u); // 801AFB08
  W16(c->r[31]+0x000000C8u,c->r[0]); // 801AFB0C
  c->r[0]=R16(c->r[30]+0x000000CAu); // 801AFB10
  W16(c->r[31]+0x000000CAu,c->r[0]); // 801AFB14
  c->r[0]=R16(c->r[30]+0x000000CCu); // 801AFB18
  W16(c->r[31]+0x000000CCu,c->r[0]); // 801AFB1C
  c->r[0]=R16(c->r[30]+0x000000CEu); // 801AFB20
  W16(c->r[31]+0x000000CEu,c->r[0]); // 801AFB24
  c->r[0]=R16(c->r[30]+0x000000D0u); // 801AFB28
  W16(c->r[31]+0x000000D0u,c->r[0]); // 801AFB2C
  c->r[0]=R16(c->r[30]+0x000000D2u); // 801AFB30
  W16(c->r[31]+0x000000D2u,c->r[0]); // 801AFB34
  c->r[0]=R16(c->r[30]+0x000000D4u); // 801AFB38
  W16(c->r[31]+0x000000D4u,c->r[0]); // 801AFB3C
L_801AFB40:;
  c->r[0]=rotl(c->r[29],0)&0x00800000u; cr0(c,c->r[0]); // 801AFB40
  if (crb(c,2)) { goto L_801AFB50; } // 801AFB44
  c->r[0]=R16(c->r[30]+0x000000D6u); // 801AFB48
  W16(c->r[31]+0x000000D6u,c->r[0]); // 801AFB4C
L_801AFB50:;
  c->r[0]=rotl(c->r[29],0)&0x01000000u; cr0(c,c->r[0]); // 801AFB50
  if (crb(c,2)) { goto L_801AFB60; } // 801AFB54
  c->r[0]=R16(c->r[30]+0x000000D8u); // 801AFB58
  W16(c->r[31]+0x000000D8u,c->r[0]); // 801AFB5C
L_801AFB60:;
  c->r[0]=rotl(c->r[29],0)&0x02000000u; cr0(c,c->r[0]); // 801AFB60
  if (crb(c,2)) { goto L_801AFB78; } // 801AFB64
  c->r[3]=c->r[31]+0x000000DAu; // 801AFB68
  c->r[4]=c->r[30]+0x000000DAu; // 801AFB6C
  c->r[5]=0u+0x00000020u; // 801AFB70
  c->lr=0x801AFB78u; f_80004364(c); // 801AFB74
L_801AFB78:;
  c->r[0]=rotl(c->r[29],0)&0x04000000u; cr0(c,c->r[0]); // 801AFB78
  if (crb(c,2)) { goto L_801AFB90; } // 801AFB7C
  c->r[3]=c->r[31]+0x000000FAu; // 801AFB80
  c->r[4]=c->r[30]+0x000000FAu; // 801AFB84
  c->r[5]=0u+0x00000010u; // 801AFB88
  c->lr=0x801AFB90u; f_80004364(c); // 801AFB8C
L_801AFB90:;
  c->r[0]=rotl(c->r[29],0)&0x08000000u; cr0(c,c->r[0]); // 801AFB90
  if (crb(c,2)) { goto L_801AFBA8; } // 801AFB94
  c->r[3]=c->r[31]+0x0000010Au; // 801AFB98
  c->r[4]=c->r[30]+0x0000010Au; // 801AFB9C
  c->r[5]=0u+0x0000000Au; // 801AFBA0
  c->lr=0x801AFBA8u; f_80004364(c); // 801AFBA4
L_801AFBA8:;
  c->r[0]=rotl(c->r[29],0)&0x20000000u; cr0(c,c->r[0]); // 801AFBA8
  if (crb(c,2)) { goto L_801AFBC4; } // 801AFBAC
  c->r[0]=R16(c->r[30]+0x00000118u); // 801AFBB0
  W16(c->r[31]+0x00000118u,c->r[0]); // 801AFBB4
  c->r[0]=R16(c->r[30]+0x0000011Au); // 801AFBB8
  W16(c->r[31]+0x0000011Au,c->r[0]); // 801AFBBC
  goto L_801AFC50; // 801AFBC0
L_801AFBC4:;
  c->r[0]=rotl(c->r[29],0)&0x40000000u; cr0(c,c->r[0]); // 801AFBC4
  if (crb(c,2)) { goto L_801AFBF8; } // 801AFBC8
  c->r[0]=R16(c->r[30]+0x0000011Eu); // 801AFBCC
  W16(c->r[31]+0x0000011Eu,c->r[0]); // 801AFBD0
  c->r[0]=R16(c->r[30]+0x00000120u); // 801AFBD4
  W16(c->r[31]+0x00000120u,c->r[0]); // 801AFBD8
  c->r[0]=R16(c->r[30]+0x00000122u); // 801AFBDC
  W16(c->r[31]+0x00000122u,c->r[0]); // 801AFBE0
  c->r[0]=R16(c->r[30]+0x00000124u); // 801AFBE4
  W16(c->r[31]+0x00000124u,c->r[0]); // 801AFBE8
  c->r[0]=R16(c->r[30]+0x00000126u); // 801AFBEC
  W16(c->r[31]+0x00000126u,c->r[0]); // 801AFBF0
  goto L_801AFC50; // 801AFBF4
L_801AFBF8:;
  c->r[0]=rotl(c->r[29],0)&0x10000000u; cr0(c,c->r[0]); // 801AFBF8
  if (crb(c,2)) { goto L_801AFC50; } // 801AFBFC
  c->r[0]=R16(c->r[30]+0x00000114u); // 801AFC00
  W16(c->r[31]+0x00000114u,c->r[0]); // 801AFC04
  c->r[0]=R16(c->r[30]+0x00000116u); // 801AFC08
  W16(c->r[31]+0x00000116u,c->r[0]); // 801AFC0C
  c->r[0]=R16(c->r[30]+0x00000118u); // 801AFC10
  W16(c->r[31]+0x00000118u,c->r[0]); // 801AFC14
  c->r[0]=R16(c->r[30]+0x0000011Au); // 801AFC18
  W16(c->r[31]+0x0000011Au,c->r[0]); // 801AFC1C
  c->r[0]=R16(c->r[30]+0x0000011Cu); // 801AFC20
  W16(c->r[31]+0x0000011Cu,c->r[0]); // 801AFC24
  c->r[0]=R16(c->r[30]+0x0000011Eu); // 801AFC28
  W16(c->r[31]+0x0000011Eu,c->r[0]); // 801AFC2C
  c->r[0]=R16(c->r[30]+0x00000120u); // 801AFC30
  W16(c->r[31]+0x00000120u,c->r[0]); // 801AFC34
  c->r[0]=R16(c->r[30]+0x00000122u); // 801AFC38
  W16(c->r[31]+0x00000122u,c->r[0]); // 801AFC3C
  c->r[0]=R16(c->r[30]+0x00000124u); // 801AFC40
  W16(c->r[31]+0x00000124u,c->r[0]); // 801AFC44
  c->r[0]=R16(c->r[30]+0x00000126u); // 801AFC48
  W16(c->r[31]+0x00000126u,c->r[0]); // 801AFC4C
L_801AFC50:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AFC50
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801AFC54
  c->r[30]=R32(c->r[1]+0x00000018u); // 801AFC58
  c->r[29]=R32(c->r[1]+0x00000014u); // 801AFC5C
  c->r[28]=R32(c->r[1]+0x00000010u); // 801AFC60
  c->lr=c->r[0]; // 801AFC64
  c->r[1]=c->r[1]+0x00000020u; // 801AFC68
  return; // 801AFC6C
}

// __AXSyncPBs
void f_801AFC70(Ctx* __restrict c) {
  trace_call(0x801AFC70u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AFC70
  c->r[0]=c->lr; // 801AFC74
  W32(c->r[1]+0x00000034u,c->r[0]); // 801AFC78
  c->r[11]=c->r[1]+0x00000030u; // 801AFC7C
  c->lr=0x801AFC84u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801AFC80
  c->r[0]=R32(c->r[13]+0xFFFFB49Cu); // 801AFC84
  c->r[25]=c->r[3]|c->r[3]; // 801AFC88
  c->r[29]=0u+0x00000000u; // 801AFC8C
  W32(c->r[13]+0xFFFFB4A0u,c->r[29]); // 801AFC90
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)320); // 801AFC94
  c->r[3]=R32(c->r[13]+0xFFFFB490u); // 801AFC98
  c->lr=0x801AFCA0u; f_80188CB0(c); // 801AFC9C
  c->r[0]=R32(c->r[13]+0xFFFFB49Cu); // 801AFCA0
  c->r[3]=R32(c->r[13]+0xFFFFB494u); // 801AFCA4
  c->r[4]=rotl(c->r[0],6)&0xFFFFFFC0u; // 801AFCA8
  c->lr=0x801AFCB0u; f_80188CB0(c); // 801AFCAC
  c->lr=0x801AFCB4u; f_801ADFC0(c); // 801AFCB0
  c->r[0]=R32(c->r[13]+0xFFFFB49Cu); // 801AFCB4
  c->r[31]=0u+0x80270000u; // 801AFCB8
  c->r[30]=0u+0x80270000u; // 801AFCBC
  c->r[27]=0u+0x0000001Fu; // 801AFCC0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)600); // 801AFCC4
  c->r[31]=c->r[31]+0x00006C90u; // 801AFCC8
  c->r[30]=c->r[30]+0x00006C10u; // 801AFCCC
  c->r[0]=c->r[3]+c->r[0]; // 801AFCD0
  c->r[3]=c->r[0]+c->r[25]; // 801AFCD4
  c->r[28]=c->r[3]+0x00000020u; // 801AFCD8
L_801AFCDC:;
  c->r[3]=c->r[27]|c->r[27]; // 801AFCDC
  c->lr=0x801AFCE4u; f_801AD230(c); // 801AFCE0
  c->r[26]=c->r[3]|c->r[3]; // 801AFCE4
  goto L_801AFEDC; // 801AFCE8
L_801AFCEC:;
  c->r[0]=R16(c->r[26]+0x0000006Cu); // 801AFCEC
  cmpu(c,0,c->r[0],0x00000001u); // 801AFCF0
  if (!crb(c,2)) { goto L_801AFCFC; } // 801AFCF4
  c->r[28]=c->r[28]+0x00000081u; // 801AFCF8
L_801AFCFC:;
  c->r[0]=R32(c->r[26]+0x00000020u); // 801AFCFC
  cmps(c,0,(int32_t)c->r[0],0); // 801AFD00
  if (crb(c,2)) { goto L_801AFD1C; } // 801AFD04
  c->r[0]=R32(c->r[26]+0x00000018u); // 801AFD08
  c->r[3]=R32(c->r[13]+0xFFFFB490u); // 801AFD0C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)320); // 801AFD10
  c->r[3]=c->r[3]+c->r[0]; // 801AFD14
  c->lr=0x801AFD1Cu; f_801AF5B0(c); // 801AFD18
L_801AFD1C:;
  c->r[0]=R16(c->r[26]+0x00000038u); // 801AFD1C
  cmpu(c,0,c->r[0],0x00000001u); // 801AFD20
  if (!crb(c,2)) { goto L_801AFEC8; } // 801AFD24
  c->r[0]=R16(c->r[26]+0x000000E2u); // 801AFD28
  c->r[28]=c->r[28]+0x00000183u; // 801AFD2C
  cmps(c,0,(int32_t)c->r[0],0); // 801AFD30
  if (crb(c,2)) { goto L_801AFD3C; } // 801AFD34
  c->r[28]=c->r[28]+0x00000135u; // 801AFD38
L_801AFD3C:;
  c->r[0]=R16(c->r[26]+0x000000EAu); // 801AFD3C
  cmps(c,0,(int32_t)c->r[0],0); // 801AFD40
  if (crb(c,2)) { goto L_801AFD4C; } // 801AFD44
  c->r[28]=c->r[28]+0x00000400u; // 801AFD48
L_801AFD4C:;
  c->r[0]=R16(c->r[26]+0x0000006Cu); // 801AFD4C
  cmpu(c,0,c->r[0],0x00000001u); // 801AFD50
  if (!crb(c,2)) { goto L_801AFD5C; } // 801AFD54
  c->r[28]=c->r[28]+0x0000001Bu; // 801AFD58
L_801AFD5C:;
  c->r[3]=R16(c->r[26]+0x00000030u); // 801AFD5C
  c->r[0]=R16(c->r[26]+0x000000CEu); // 801AFD60
  cmps(c,0,(int32_t)c->r[3],0); // 801AFD64
  c->r[4]=R16(c->r[26]+0x000000D0u); // 801AFD68
  c->r[4]=(rotl(c->r[0],16)&0xFFFF0000u)|(c->r[4]&~0xFFFF0000u); // 801AFD6C
  if (!crb(c,2)) { goto L_801AFD8C; } // 801AFD70
  c->r[3]=rotl(c->r[4],9)&0xFFFFFE00u; // 801AFD74
  c->r[3]=c->r[3]+0x00010000u; // 801AFD78
  c->r[0]=c->r[3]+0xFFFF8000u; // 801AFD7C
  c->r[3]=rotl(c->r[0],16)&0x0000FFFFu; // 801AFD80
  c->r[0]=c->r[3]+0x00000619u; // 801AFD84
  goto L_801AFDAC; // 801AFD88
L_801AFD8C:;
  cmpu(c,0,c->r[3],0x00000001u); // 801AFD8C
  c->r[0]=0u+0x0000025Du; // 801AFD90
  if (!crb(c,2)) { goto L_801AFDAC; } // 801AFD94
  c->r[3]=rotl(c->r[4],9)&0xFFFFFE00u; // 801AFD98
  c->r[3]=c->r[3]+0x00010000u; // 801AFD9C
  c->r[0]=c->r[3]+0xFFFF8000u; // 801AFDA0
  c->r[3]=rotl(c->r[0],16)&0x0000FFFFu; // 801AFDA4
  c->r[0]=c->r[3]+0x000005BAu; // 801AFDA8
L_801AFDAC:;
  c->r[4]=R32(c->r[26]+0x00000034u); // 801AFDAC
  c->r[28]=c->r[28]+c->r[0]; // 801AFDB0
  c->r[0]=R16(c->r[26]+0x000000FEu); // 801AFDB4
  c->r[5]=rotl(c->r[4],13)&0x0000007Cu; // 801AFDB8
  c->r[3]=rotl(c->r[4],2)&0x0000007Cu; // 801AFDBC
  c->r[6]=rotl(c->r[4],8)&0x0000007Cu; // 801AFDC0
  c->r[4]=rotl(c->r[4],18)&0x0000007Cu; // 801AFDC4
  cmpu(c,0,c->r[0],0x00000001u); // 801AFDC8
  c->r[5]=R32(c->r[30]+c->r[5]); // 801AFDCC
  c->r[0]=R32(c->r[30]+c->r[3]); // 801AFDD0
  c->r[6]=R32(c->r[30]+c->r[6]); // 801AFDD4
  c->r[4]=R32(c->r[30]+c->r[4]); // 801AFDD8
  c->r[0]=c->r[5]+c->r[0]; // 801AFDDC
  c->r[3]=c->r[28]+c->r[6]; // 801AFDE0
  c->r[0]=c->r[4]+c->r[0]; // 801AFDE4
  c->r[28]=c->r[3]+c->r[0]; // 801AFDE8
  if (!crb(c,2)) { goto L_801AFE78; } // 801AFDEC
  c->r[0]=R16(c->r[26]+0x0000013Cu); // 801AFDF0
  c->r[28]=c->r[28]+0x00000265u; // 801AFDF4
  cmpu(c,0,c->r[0],0x00000001u); // 801AFDF8
  if (!crb(c,2)) { goto L_801AFE08; } // 801AFDFC
  c->r[28]=c->r[28]+0x00000076u; // 801AFE00
  goto L_801AFE14; // 801AFE04
L_801AFE08:;
  cmpu(c,0,c->r[0],0x00000002u); // 801AFE08
  if (!crb(c,2)) { goto L_801AFE14; } // 801AFE0C
  c->r[28]=c->r[28]+0x00000342u; // 801AFE10
L_801AFE14:;
  c->r[3]=R16(c->r[26]+0x00000100u); // 801AFE14
  c->r[4]=rotl(c->r[3],30)&0x0000000Cu; // 801AFE18
  c->r[0]=rotl(c->r[3],2)&0x0000000Cu; // 801AFE1C
  c->r[4]=R32(c->r[31]+c->r[4]); // 801AFE20
  c->r[9]=rotl(c->r[3],20)&0x0000000Cu; // 801AFE24
  c->r[0]=R32(c->r[31]+c->r[0]); // 801AFE28
  c->r[8]=rotl(c->r[3],22)&0x0000000Cu; // 801AFE2C
  c->r[7]=rotl(c->r[3],24)&0x0000000Cu; // 801AFE30
  c->r[6]=rotl(c->r[3],26)&0x0000000Cu; // 801AFE34
  c->r[5]=rotl(c->r[3],28)&0x0000000Cu; // 801AFE38
  c->r[3]=rotl(c->r[3],0)&0x0000000Cu; // 801AFE3C
  c->r[7]=R32(c->r[31]+c->r[7]); // 801AFE40
  c->r[0]=c->r[4]+c->r[0]; // 801AFE44
  c->r[3]=R32(c->r[31]+c->r[3]); // 801AFE48
  c->r[9]=R32(c->r[31]+c->r[9]); // 801AFE4C
  c->r[7]=c->r[28]+c->r[7]; // 801AFE50
  c->r[8]=R32(c->r[31]+c->r[8]); // 801AFE54
  c->r[0]=c->r[3]+c->r[0]; // 801AFE58
  c->r[6]=R32(c->r[31]+c->r[6]); // 801AFE5C
  c->r[4]=R32(c->r[31]+c->r[5]); // 801AFE60
  c->r[8]=c->r[9]+c->r[8]; // 801AFE64
  c->r[3]=c->r[8]+c->r[7]; // 801AFE68
  c->r[4]=c->r[6]+c->r[4]; // 801AFE6C
  c->r[0]=c->r[4]+c->r[0]; // 801AFE70
  c->r[28]=c->r[3]+c->r[0]; // 801AFE74
L_801AFE78:;
  c->r[0]=R32(c->r[13]+0xFFFFB4A8u); // 801AFE78
  cmpu(c,0,c->r[0],c->r[28]); // 801AFE7C
  if (!crb(c,1)) { goto L_801AFE90; } // 801AFE80
  c->r[3]=c->r[26]|c->r[26]; // 801AFE84
  c->lr=0x801AFE8Cu; f_801AF720(c); // 801AFE88
  goto L_801AFED0; // 801AFE8C
L_801AFE90:;
  c->r[0]=R32(c->r[26]+0x00000018u); // 801AFE90
  c->r[3]=R32(c->r[13]+0xFFFFB490u); // 801AFE94
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)320); // 801AFE98
  c->r[25]=c->r[3]+c->r[0]; // 801AFE9C
  c->r[0]=R16(c->r[25]+0x00000010u); // 801AFEA0
  cmpu(c,0,c->r[0],0x00000001u); // 801AFEA4
  if (!crb(c,2)) { goto L_801AFEB4; } // 801AFEA8
  c->r[3]=c->r[25]|c->r[25]; // 801AFEAC
  c->lr=0x801AFEB4u; f_801AF5B0(c); // 801AFEB0
L_801AFEB4:;
  W16(c->r[26]+0x00000038u,c->r[29]); // 801AFEB4
  c->r[3]=c->r[26]|c->r[26]; // 801AFEB8
  W16(c->r[25]+0x00000010u,c->r[29]); // 801AFEBC
  c->lr=0x801AFEC4u; f_801AD3D0(c); // 801AFEC0
  goto L_801AFED0; // 801AFEC4
L_801AFEC8:;
  c->r[3]=c->r[26]|c->r[26]; // 801AFEC8
  c->lr=0x801AFED0u; f_801AF720(c); // 801AFECC
L_801AFED0:;
  W32(c->r[26]+0x0000001Cu,c->r[29]); // 801AFED0
  W32(c->r[26]+0x00000020u,c->r[29]); // 801AFED4
  c->r[26]=R32(c->r[26]+0x00000000u); // 801AFED8
L_801AFEDC:;
  cmps(c,0,(int32_t)c->r[26],0); // 801AFEDC
  if (!crb(c,2)) { IRQCHK(c); goto L_801AFCEC; } // 801AFEE0
  c->r[27]=addc(c,c->r[27],0xFFFFFFFFu,0); cr0(c,c->r[27]); // 801AFEE4
  if (!crb(c,2)) { IRQCHK(c); goto L_801AFCDC; } // 801AFEE8
  W32(c->r[13]+0xFFFFB4A4u,c->r[28]); // 801AFEEC
  c->r[3]=0u+0x00000000u; // 801AFEF0
  c->lr=0x801AFEF8u; f_801AD230(c); // 801AFEF4
  c->r[25]=c->r[3]|c->r[3]; // 801AFEF8
  c->r[26]=0u+0x00000000u; // 801AFEFC
  goto L_801AFF40; // 801AFF00
L_801AFF04:;
  c->r[0]=R32(c->r[25]+0x00000020u); // 801AFF04
  cmps(c,0,(int32_t)c->r[0],0); // 801AFF08
  if (crb(c,2)) { goto L_801AFF24; } // 801AFF0C
  c->r[0]=R32(c->r[25]+0x00000018u); // 801AFF10
  c->r[3]=R32(c->r[13]+0xFFFFB490u); // 801AFF14
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)320); // 801AFF18
  c->r[3]=c->r[3]+c->r[0]; // 801AFF1C
  c->lr=0x801AFF24u; f_801AF5B0(c); // 801AFF20
L_801AFF24:;
  W32(c->r[25]+0x00000020u,c->r[26]); // 801AFF24
  c->r[0]=R32(c->r[25]+0x00000018u); // 801AFF28
  c->r[3]=R32(c->r[13]+0xFFFFB490u); // 801AFF2C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)320); // 801AFF30
  c->r[3]=c->r[3]+c->r[0]; // 801AFF34
  W16(c->r[3]+0x00000010u,c->r[26]); // 801AFF38
  c->r[25]=R32(c->r[25]+0x00000000u); // 801AFF3C
L_801AFF40:;
  cmps(c,0,(int32_t)c->r[25],0); // 801AFF40
  if (!crb(c,2)) { IRQCHK(c); goto L_801AFF04; } // 801AFF44
  c->r[0]=R32(c->r[13]+0xFFFFB49Cu); // 801AFF48
  c->r[3]=R32(c->r[13]+0xFFFFB490u); // 801AFF4C
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)320); // 801AFF50
  c->lr=0x801AFF58u; f_80188CE0(c); // 801AFF54
  c->r[0]=R32(c->r[13]+0xFFFFB49Cu); // 801AFF58
  c->r[3]=R32(c->r[13]+0xFFFFB494u); // 801AFF5C
  c->r[4]=rotl(c->r[0],6)&0xFFFFFFC0u; // 801AFF60
  c->lr=0x801AFF68u; f_80188CE0(c); // 801AFF64
  c->r[11]=c->r[1]+0x00000030u; // 801AFF68
  c->lr=0x801AFF70u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801AFF6C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801AFF70
  c->lr=c->r[0]; // 801AFF74
  c->r[1]=c->r[1]+0x00000030u; // 801AFF78
  return; // 801AFF7C
}

// __AXGetPBs
void f_801AFF80(Ctx* __restrict c) {
  trace_call(0x801AFF80u);
  c->r[3]=R32(c->r[13]+0xFFFFB490u); // 801AFF80
  return; // 801AFF84
}

// __AXSetPBDefault
void f_801AFF90(Ctx* __restrict c) {
  trace_call(0x801AFF90u);
  c->r[4]=0u+0x18A80000u; // 801AFF90
  c->r[5]=0u+0x00000000u; // 801AFF94
  c->r[0]=c->r[4]+0x00000024u; // 801AFF98
  W16(c->r[3]+0x00000038u,c->r[5]); // 801AFF9C
  W16(c->r[3]+0x0000006Cu,c->r[5]); // 801AFFA0
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 801AFFA4
  W16(c->r[3]+0x000000E2u,c->r[5]); // 801AFFA8
  W16(c->r[3]+0x000000EAu,c->r[5]); // 801AFFAC
  W16(c->r[3]+0x000000FEu,c->r[5]); // 801AFFB0
  W16(c->r[3]+0x0000013Cu,c->r[5]); // 801AFFB4
  W16(c->r[3]+0x00000132u,c->r[5]); // 801AFFB8
  W16(c->r[3]+0x00000134u,c->r[5]); // 801AFFBC
  W16(c->r[3]+0x00000136u,c->r[5]); // 801AFFC0
  W16(c->r[3]+0x00000138u,c->r[5]); // 801AFFC4
  W16(c->r[3]+0x0000013Au,c->r[5]); // 801AFFC8
  return; // 801AFFCC
}

// __AXVPBInit
void f_801AFFD0(Ctx* __restrict c) {
  trace_call(0x801AFFD0u);
  c->r[5]=0u+0x802C0000u; // 801AFFD0
  c->r[4]=0u+0x802C0000u; // 801AFFD4
  c->r[3]=0u+0x802C0000u; // 801AFFD8
  c->r[0]=0u+0x00000060u; // 801AFFDC
  c->r[5]=c->r[5]+0xFFFFB060u; // 801AFFE0
  c->r[4]=c->r[4]+0x00002860u; // 801AFFE4
  c->r[3]=c->r[3]+0x00004060u; // 801AFFE8
  W32(c->r[13]+0xFFFFB49Cu,c->r[0]); // 801AFFEC
  W32(c->r[13]+0xFFFFB490u,c->r[5]); // 801AFFF0
  W32(c->r[13]+0xFFFFB494u,c->r[4]); // 801AFFF4
  W32(c->r[13]+0xFFFFB498u,c->r[3]); // 801AFFF8
  f_801B0000(c); return; // 801AFFFC
}

// __AXVPBInitCommon
void f_801B0000(Ctx* __restrict c) {
  trace_call(0x801B0000u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0000
  c->r[0]=c->lr; // 801B0004
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B0008
  c->r[11]=c->r[1]+0x00000030u; // 801B000C
  c->lr=0x801B0014u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B0010
  c->r[4]=0u+0x80000000u; // 801B0014
  c->r[3]=0u+0x89050000u; // 801B0018
  c->r[4]=R32(c->r[4]+0x000000F8u); // 801B001C
  c->r[5]=c->r[3]+0xFFFFFD51u; // 801B0020
  c->r[0]=R32(c->r[13]+0xFFFFB49Cu); // 801B0024
  c->r[3]=0u+0x00000000u; // 801B0028
  c->r[5]=(uint32_t)(((uint64_t)c->r[5]*(uint64_t)c->r[4])>>32); // 801B002C
  W32(c->r[13]+0xFFFFB4A4u,c->r[3]); // 801B0030
  c->r[7]=R32(c->r[13]+0xFFFFB490u); // 801B0034
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)80); // 801B0038
  c->r[0]=c->r[4]-c->r[5]; // 801B003C
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 801B0040
  c->r[0]=c->r[0]+c->r[5]; // 801B0044
  cmps(c,0,(int32_t)c->r[6],0); // 801B0048
  c->r[0]=rotl(c->r[0],23)&0x007FFFFFu; // 801B004C
  W32(c->r[13]+0xFFFFB4A8u,c->r[0]); // 801B0050
  if (crb(c,2)) { goto L_801B00A4; } // 801B0054
  c->r[0]=rotl(c->r[6],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 801B0058
  c->ctr=c->r[0]; // 801B005C
  if (crb(c,2)) { goto L_801B0094; } // 801B0060
L_801B0064:;
  W32(c->r[7]+0x00000000u,c->r[3]); // 801B0064
  W32(c->r[7]+0x00000004u,c->r[3]); // 801B0068
  W32(c->r[7]+0x00000008u,c->r[3]); // 801B006C
  W32(c->r[7]+0x0000000Cu,c->r[3]); // 801B0070
  W32(c->r[7]+0x00000010u,c->r[3]); // 801B0074
  W32(c->r[7]+0x00000014u,c->r[3]); // 801B0078
  W32(c->r[7]+0x00000018u,c->r[3]); // 801B007C
  W32(c->r[7]+0x0000001Cu,c->r[3]); // 801B0080
  c->r[7]=c->r[7]+0x00000020u; // 801B0084
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B0064; } // 801B0088
  c->r[6]=c->r[6]&0x00000007u; cr0(c,c->r[6]); // 801B008C
  if (crb(c,2)) { goto L_801B00A4; } // 801B0090
L_801B0094:;
  c->ctr=c->r[6]; // 801B0094
L_801B0098:;
  W32(c->r[7]+0x00000000u,c->r[3]); // 801B0098
  c->r[7]=c->r[7]+0x00000004u; // 801B009C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B0098; } // 801B00A0
L_801B00A4:;
  c->r[0]=R32(c->r[13]+0xFFFFB49Cu); // 801B00A4
  c->r[3]=0u+0x00000000u; // 801B00A8
  c->r[4]=R32(c->r[13]+0xFFFFB494u); // 801B00AC
  c->r[5]=rotl(c->r[0],4)&0xFFFFFFF0u; cr0(c,c->r[5]); // 801B00B0
  if (crb(c,2)) { goto L_801B0104; } // 801B00B4
  c->r[0]=rotl(c->r[5],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 801B00B8
  c->ctr=c->r[0]; // 801B00BC
  if (crb(c,2)) { goto L_801B00F4; } // 801B00C0
L_801B00C4:;
  W32(c->r[4]+0x00000000u,c->r[3]); // 801B00C4
  W32(c->r[4]+0x00000004u,c->r[3]); // 801B00C8
  W32(c->r[4]+0x00000008u,c->r[3]); // 801B00CC
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 801B00D0
  W32(c->r[4]+0x00000010u,c->r[3]); // 801B00D4
  W32(c->r[4]+0x00000014u,c->r[3]); // 801B00D8
  W32(c->r[4]+0x00000018u,c->r[3]); // 801B00DC
  W32(c->r[4]+0x0000001Cu,c->r[3]); // 801B00E0
  c->r[4]=c->r[4]+0x00000020u; // 801B00E4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B00C4; } // 801B00E8
  c->r[5]=c->r[5]&0x00000007u; cr0(c,c->r[5]); // 801B00EC
  if (crb(c,2)) { goto L_801B0104; } // 801B00F0
L_801B00F4:;
  c->ctr=c->r[5]; // 801B00F4
L_801B00F8:;
  W32(c->r[4]+0x00000000u,c->r[3]); // 801B00F8
  c->r[4]=c->r[4]+0x00000004u; // 801B00FC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B00F8; } // 801B0100
L_801B0104:;
  c->r[0]=R32(c->r[13]+0xFFFFB49Cu); // 801B0104
  c->r[3]=0u+0x00000000u; // 801B0108
  c->r[4]=R32(c->r[13]+0xFFFFB498u); // 801B010C
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)90); // 801B0110
  cmps(c,0,(int32_t)c->r[5],0); // 801B0114
  if (crb(c,2)) { goto L_801B016C; } // 801B0118
  c->r[0]=rotl(c->r[5],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 801B011C
  c->ctr=c->r[0]; // 801B0120
  if (crb(c,2)) { goto L_801B0158; } // 801B0124
L_801B0128:;
  W32(c->r[4]+0x00000000u,c->r[3]); // 801B0128
  W32(c->r[4]+0x00000004u,c->r[3]); // 801B012C
  W32(c->r[4]+0x00000008u,c->r[3]); // 801B0130
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 801B0134
  W32(c->r[4]+0x00000010u,c->r[3]); // 801B0138
  W32(c->r[4]+0x00000014u,c->r[3]); // 801B013C
  W32(c->r[4]+0x00000018u,c->r[3]); // 801B0140
  W32(c->r[4]+0x0000001Cu,c->r[3]); // 801B0144
  c->r[4]=c->r[4]+0x00000020u; // 801B0148
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B0128; } // 801B014C
  c->r[5]=c->r[5]&0x00000007u; cr0(c,c->r[5]); // 801B0150
  if (crb(c,2)) { goto L_801B016C; } // 801B0154
L_801B0158:;
  c->ctr=c->r[5]; // 801B0158
  c->r[0]=c->r[0]|0x00000000u; // 801B015C
L_801B0160:;
  W32(c->r[4]+0x00000000u,c->r[3]); // 801B0160
  c->r[4]=c->r[4]+0x00000004u; // 801B0164
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B0160; } // 801B0168
L_801B016C:;
  c->r[3]=0u+0x18A80000u; // 801B016C
  c->r[31]=0u+0x00000000u; // 801B0170
  c->r[29]=c->r[3]+0x00000024u; // 801B0174
  c->r[27]=0u+0x00000000u; // 801B0178
  c->r[26]=0u+0x00000000u; // 801B017C
  c->r[25]=0u+0x00000000u; // 801B0180
  c->r[28]=0u+0x00000000u; // 801B0184
  c->r[30]=0u+0x00000001u; // 801B0188
  goto L_801B025C; // 801B018C
L_801B0190:;
  c->r[0]=R32(c->r[13]+0xFFFFB498u); // 801B0190
  c->r[5]=R32(c->r[13]+0xFFFFB490u); // 801B0194
  c->r[4]=R32(c->r[13]+0xFFFFB494u); // 801B0198
  c->r[3]=c->r[0]+c->r[25]; // 801B019C
  c->r[5]=c->r[5]+c->r[27]; // 801B01A0
  W32(c->r[3]+0x00000018u,c->r[31]); // 801B01A4
  c->r[6]=c->r[4]+c->r[26]; // 801B01A8
  W32(c->r[3]+0x00000024u,c->r[6]); // 801B01AC
  W16(c->r[3]+0x00000038u,c->r[28]); // 801B01B0
  W16(c->r[3]+0x0000006Cu,c->r[28]); // 801B01B4
  W32(c->r[3]+0x0000001Cu,c->r[29]); // 801B01B8
  W16(c->r[3]+0x000000E2u,c->r[28]); // 801B01BC
  W16(c->r[3]+0x000000EAu,c->r[28]); // 801B01C0
  W16(c->r[3]+0x000000FEu,c->r[28]); // 801B01C4
  W16(c->r[3]+0x0000013Cu,c->r[28]); // 801B01C8
  W16(c->r[3]+0x00000132u,c->r[28]); // 801B01CC
  W16(c->r[3]+0x00000134u,c->r[28]); // 801B01D0
  W16(c->r[3]+0x00000136u,c->r[28]); // 801B01D4
  W16(c->r[3]+0x00000138u,c->r[28]); // 801B01D8
  W16(c->r[3]+0x0000013Au,c->r[28]); // 801B01DC
  c->r[4]=R32(c->r[13]+0xFFFFB49Cu); // 801B01E0
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801B01E4
  cmpu(c,0,c->r[31],c->r[0]); // 801B01E8
  if (!crb(c,2)) { goto L_801B0204; } // 801B01EC
  W16(c->r[5]+0x00000002u,c->r[28]); // 801B01F0
  W16(c->r[5]+0x00000000u,c->r[28]); // 801B01F4
  W16(c->r[3]+0x0000002Au,c->r[28]); // 801B01F8
  W16(c->r[3]+0x00000028u,c->r[28]); // 801B01FC
  goto L_801B021C; // 801B0200
L_801B0204:;
  c->r[0]=c->r[5]+0x00000140u; // 801B0204
  c->r[4]=rotl(c->r[0],16)&0x0000FFFFu; // 801B0208
  W16(c->r[3]+0x00000028u,c->r[4]); // 801B020C
  W16(c->r[3]+0x0000002Au,c->r[0]); // 801B0210
  W16(c->r[5]+0x00000000u,c->r[4]); // 801B0214
  W16(c->r[5]+0x00000002u,c->r[0]); // 801B0218
L_801B021C:;
  c->r[0]=rotl(c->r[5],16)&0x0000FFFFu; // 801B021C
  W16(c->r[3]+0x0000002Cu,c->r[0]); // 801B0220
  c->r[4]=rotl(c->r[6],16)&0x0000FFFFu; // 801B0224
  W16(c->r[3]+0x0000002Eu,c->r[5]); // 801B0228
  W16(c->r[5]+0x00000004u,c->r[0]); // 801B022C
  W16(c->r[5]+0x00000006u,c->r[5]); // 801B0230
  W16(c->r[3]+0x0000006Eu,c->r[4]); // 801B0234
  W16(c->r[3]+0x00000070u,c->r[6]); // 801B0238
  W16(c->r[5]+0x00000046u,c->r[4]); // 801B023C
  W16(c->r[5]+0x00000048u,c->r[6]); // 801B0240
  W32(c->r[3]+0x0000000Cu,c->r[30]); // 801B0244
  c->lr=0x801B024Cu; f_801AD3B0(c); // 801B0248
  c->r[27]=c->r[27]+0x00000140u; // 801B024C
  c->r[26]=c->r[26]+0x00000040u; // 801B0250
  c->r[25]=c->r[25]+0x00000168u; // 801B0254
  c->r[31]=c->r[31]+0x00000001u; // 801B0258
L_801B025C:;
  c->r[0]=R32(c->r[13]+0xFFFFB49Cu); // 801B025C
  cmpu(c,0,c->r[31],c->r[0]); // 801B0260
  if (crb(c,0)) { IRQCHK(c); goto L_801B0190; } // 801B0264
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)320); // 801B0268
  c->r[3]=R32(c->r[13]+0xFFFFB490u); // 801B026C
  c->lr=0x801B0274u; f_80188CE0(c); // 801B0270
  c->r[11]=c->r[1]+0x00000030u; // 801B0274
  c->lr=0x801B027Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B0278
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B027C
  c->lr=c->r[0]; // 801B0280
  c->r[1]=c->r[1]+0x00000030u; // 801B0284
  return; // 801B0288
}

// AXSetVoiceState
void f_801B0290(Ctx* __restrict c) {
  trace_call(0x801B0290u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0290
  c->r[0]=c->lr; // 801B0294
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B0298
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B029C
  c->r[31]=c->r[4]|c->r[4]; // 801B02A0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B02A4
  c->r[30]=c->r[3]|c->r[3]; // 801B02A8
  c->lr=0x801B02B0u; f_8018D6A0(c); // 801B02AC
  c->r[0]=R16(c->r[30]+0x00000038u); // 801B02B0
  cmpu(c,0,c->r[0],c->r[31]); // 801B02B4
  if (!crb(c,2)) { goto L_801B02C4; } // 801B02B8
  c->lr=0x801B02C0u; f_8018D6E0(c); // 801B02BC
  goto L_801B02E8; // 801B02C0
L_801B02C4:;
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 801B02C4
  cmps(c,0,(int32_t)c->r[31],0); // 801B02C8
  W16(c->r[30]+0x00000038u,c->r[31]); // 801B02CC
  c->r[0]=c->r[0]|0x00000004u; // 801B02D0
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 801B02D4
  if (!crb(c,2)) { goto L_801B02E4; } // 801B02D8
  c->r[0]=0u+0x00000001u; // 801B02DC
  W32(c->r[30]+0x00000020u,c->r[0]); // 801B02E0
L_801B02E4:;
  c->lr=0x801B02E8u; f_8018D6E0(c); // 801B02E4
L_801B02E8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B02E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B02EC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B02F0
  c->lr=c->r[0]; // 801B02F4
  c->r[1]=c->r[1]+0x00000010u; // 801B02F8
  return; // 801B02FC
}

// AXSetVoiceAddr
void f_801B0300(Ctx* __restrict c) {
  trace_call(0x801B0300u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0300
  c->r[0]=c->lr; // 801B0304
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B0308
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B030C
  c->r[31]=c->r[4]|c->r[4]; // 801B0310
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B0314
  c->r[30]=c->r[3]|c->r[3]; // 801B0318
  c->lr=0x801B0320u; f_8018D6A0(c); // 801B031C
  c->r[0]=R32(c->r[31]+0x00000000u); // 801B0320
  W32(c->r[30]+0x00000096u,c->r[0]); // 801B0324
  c->r[0]=R32(c->r[31]+0x00000004u); // 801B0328
  W32(c->r[30]+0x0000009Au,c->r[0]); // 801B032C
  c->r[0]=R32(c->r[31]+0x00000008u); // 801B0330
  W32(c->r[30]+0x0000009Eu,c->r[0]); // 801B0334
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 801B0338
  W32(c->r[30]+0x000000A2u,c->r[0]); // 801B033C
  c->r[0]=R16(c->r[31]+0x00000002u); // 801B0340
  cmps(c,0,(int32_t)c->r[0],10); // 801B0344
  if (crb(c,2)) { goto L_801B0358; } // 801B0348
  cmps(c,0,(int32_t)c->r[0],25); // 801B034C
  if (crb(c,2)) { goto L_801B038C; } // 801B0350
  goto L_801B03BC; // 801B0354
L_801B0358:;
  c->r[4]=0u+0x00000000u; // 801B0358
  c->r[0]=0u+0x08000000u; // 801B035C
  W32(c->r[30]+0x000000A6u,c->r[4]); // 801B0360
  W32(c->r[30]+0x000000AAu,c->r[4]); // 801B0364
  W32(c->r[30]+0x000000AEu,c->r[4]); // 801B0368
  W32(c->r[30]+0x000000B2u,c->r[4]); // 801B036C
  W32(c->r[30]+0x000000B6u,c->r[4]); // 801B0370
  W32(c->r[30]+0x000000BAu,c->r[4]); // 801B0374
  W32(c->r[30]+0x000000BEu,c->r[4]); // 801B0378
  W32(c->r[30]+0x000000C2u,c->r[4]); // 801B037C
  W32(c->r[30]+0x000000C6u,c->r[0]); // 801B0380
  W32(c->r[30]+0x000000CAu,c->r[4]); // 801B0384
  goto L_801B03BC; // 801B0388
L_801B038C:;
  c->r[4]=0u+0x00000000u; // 801B038C
  c->r[0]=0u+0x01000000u; // 801B0390
  W32(c->r[30]+0x000000A6u,c->r[4]); // 801B0394
  W32(c->r[30]+0x000000AAu,c->r[4]); // 801B0398
  W32(c->r[30]+0x000000AEu,c->r[4]); // 801B039C
  W32(c->r[30]+0x000000B2u,c->r[4]); // 801B03A0
  W32(c->r[30]+0x000000B6u,c->r[4]); // 801B03A4
  W32(c->r[30]+0x000000BAu,c->r[4]); // 801B03A8
  W32(c->r[30]+0x000000BEu,c->r[4]); // 801B03AC
  W32(c->r[30]+0x000000C2u,c->r[4]); // 801B03B0
  W32(c->r[30]+0x000000C6u,c->r[0]); // 801B03B4
  W32(c->r[30]+0x000000CAu,c->r[4]); // 801B03B8
L_801B03BC:;
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 801B03BC
  c->r[0]=rotl(c->r[0],0)&0xFFFF87FFu; // 801B03C0
  c->r[0]=c->r[0]|0x00008400u; // 801B03C4
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 801B03C8
  c->lr=0x801B03D0u; f_8018D6E0(c); // 801B03CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B03D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B03D4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B03D8
  c->lr=c->r[0]; // 801B03DC
  c->r[1]=c->r[1]+0x00000010u; // 801B03E0
  return; // 801B03E4
}

// AXGetLpfCoefs
void f_801B03F0(Ctx* __restrict c) {
  trace_call(0x801B03F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B03F0
  c->r[0]=c->lr; // 801B03F4
  {uint32_t ea=c->r[2]+0xFFFFA110u; c->f[3]=RF64(ea);} // 801B03F8
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B03FC
  c->r[0]=0u+0x43300000u; // 801B0400
  {uint32_t ea=c->r[2]+0xFFFFA0FCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801B0404
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801B0408
  {uint32_t ea=c->r[2]+0xFFFFA100u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B040C
  W32(c->r[1]+0x00000008u,c->r[0]); // 801B0410
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 801B0414
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 801B0418
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 801B041C
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 801B0420
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 801B0424
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B0428
  c->r[31]=c->r[5]|c->r[5]; // 801B042C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B0430
  c->r[30]=c->r[4]|c->r[4]; // 801B0434
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 801B0438
  c->lr=0x801B0440u; f_80215EE8(c); // 801B043C
  c->f[2]=c->ps1[2]=S(c->f[1]); // 801B0440
  {uint32_t ea=c->r[2]+0xFFFFA0F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B0444
  {uint32_t ea=c->r[2]+0xFFFFA104u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B0448
  c->f[31]=c->ps1[31]=S(c->f[1]-c->f[2]); // 801B044C
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[31]); // 801B0450
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 801B0454
  c->lr=0x801B045Cu; f_80216698(c); // 801B0458
  c->f[1]=c->ps1[1]=S(c->f[1]); // 801B045C
  {uint32_t ea=c->r[2]+0xFFFFA108u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B0460
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[31]); // 801B0464
  c->f[1]=-c->f[1]; // 801B0468
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801B046C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801B0470
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 801B0474
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B0478
  W16(c->r[31]+0x00000000u,c->r[0]); // 801B047C
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801B0480
  c->r[0]=addc(c,~c->r[0],0x00007FFFu,1); // 801B0484
  W16(c->r[30]+0x00000000u,c->r[0]); // 801B0488
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 801B048C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 801B0490
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B0494
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B0498
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B049C
  c->lr=c->r[0]; // 801B04A0
  c->r[1]=c->r[1]+0x00000030u; // 801B04A4
  return; // 801B04A8
}

// AXSetMaxDspCycles
void f_801B04B0(Ctx* __restrict c) {
  trace_call(0x801B04B0u);
  c->r[3]=R32(c->r[13]+0xFFFFB49Cu); // 801B04B0
  return; // 801B04B4
}

// __AXGetCurrentProfile
void f_801B04C0(Ctx* __restrict c) {
  trace_call(0x801B04C0u);
  c->r[0]=R32(c->r[13]+0xFFFFB4B0u); // 801B04C0
  cmps(c,0,(int32_t)c->r[0],0); // 801B04C4
  if (crb(c,2)) { goto L_801B04F8; } // 801B04C8
  c->r[5]=R32(c->r[13]+0xFFFFB4B4u); // 801B04CC
  c->r[3]=R32(c->r[13]+0xFFFFB4B8u); // 801B04D0
  c->r[4]=c->r[5]+0x00000001u; // 801B04D4
  c->r[6]=R32(c->r[13]+0xFFFFB4BCu); // 801B04D8
  c->r[0]=divwu(c->r[4],c->r[3]); // 801B04DC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[3]); // 801B04E0
  c->r[3]=(uint32_t)((int32_t)c->r[5]*(int32_t)56); // 801B04E4
  c->r[0]=c->r[4]-c->r[0]; // 801B04E8
  W32(c->r[13]+0xFFFFB4B4u,c->r[0]); // 801B04EC
  c->r[3]=c->r[6]+c->r[3]; // 801B04F0
  return; // 801B04F4
L_801B04F8:;
  c->r[3]=0u+0x00000000u; // 801B04F8
  return; // 801B04FC
}

// AXFXReverbHiInit
void f_801B0500(Ctx* __restrict c) {
  trace_call(0x801B0500u);
  {uint32_t ea=c->r[3]+0x00000158u; c->f[7]=c->ps1[7]=RF32(ea);} // 801B0500
  c->r[0]=0u+0x00000000u; // 801B0504
  {uint32_t ea=c->r[2]+0xFFFFA118u; c->f[2]=c->ps1[2]=RF32(ea);} // 801B0508
  c->r[4]=0u+0x00000005u; // 801B050C
  {uint32_t ea=c->r[3]+0x00000150u; c->f[6]=c->ps1[6]=RF32(ea);} // 801B0510
  {uint32_t ea=c->r[3]+0x00000148u; c->f[5]=c->ps1[5]=RF32(ea);} // 801B0514
  {uint32_t ea=c->r[3]+0x00000154u; c->f[4]=c->ps1[4]=RF32(ea);} // 801B0518
  {uint32_t ea=c->r[3]+0x0000015Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801B051C
  {uint32_t ea=c->r[2]+0xFFFFA11Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801B0520
  {uint32_t ea=c->r[3]+0x0000014Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801B0524
  W32(c->r[3]+0x00000110u,c->r[4]); // 801B0528
  {uint32_t ea=c->r[3]+0x00000114u; WF32(ea,c->f[7]);} // 801B052C
  {uint32_t ea=c->r[3]+0x00000118u; WF32(ea,c->f[7]);} // 801B0530
  W32(c->r[3]+0x0000011Cu,c->r[0]); // 801B0534
  {uint32_t ea=c->r[3]+0x00000120u; WF32(ea,c->f[6]);} // 801B0538
  {uint32_t ea=c->r[3]+0x00000124u; WF32(ea,c->f[5]);} // 801B053C
  {uint32_t ea=c->r[3]+0x00000128u; WF32(ea,c->f[4]);} // 801B0540
  {uint32_t ea=c->r[3]+0x0000012Cu; WF32(ea,c->f[3]);} // 801B0544
  {uint32_t ea=c->r[3]+0x00000130u; WF32(ea,c->f[2]);} // 801B0548
  {uint32_t ea=c->r[3]+0x00000134u; WF32(ea,c->f[1]);} // 801B054C
  W32(c->r[3]+0x00000138u,c->r[0]); // 801B0550
  W32(c->r[3]+0x0000013Cu,c->r[0]); // 801B0554
  {uint32_t ea=c->r[3]+0x00000140u; WF32(ea,c->f[0]);} // 801B0558
  {uint32_t ea=c->r[3]+0x00000144u; WF32(ea,c->f[2]);} // 801B055C
  f_801B05B0(c); return; // 801B0560
}

// AXFXReverbHiShutdown
void f_801B0570(Ctx* __restrict c) {
  trace_call(0x801B0570u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0570
  c->r[0]=c->lr; // 801B0574
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B0578
  c->lr=0x801B0580u; f_801B0750(c); // 801B057C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B0580
  c->r[3]=0u+0x00000001u; // 801B0584
  c->lr=c->r[0]; // 801B0588
  c->r[1]=c->r[1]+0x00000010u; // 801B058C
  return; // 801B0590
}

// AXFXReverbHiCallback
void f_801B05A0(Ctx* __restrict c) {
  trace_call(0x801B05A0u);
  f_801B07B0(c); return; // 801B05A0
}

// AXFXReverbHiExpInit
void f_801B05B0(Ctx* __restrict c) {
  trace_call(0x801B05B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B05B0
  c->r[0]=c->lr; // 801B05B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B05B8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B05BC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B05C0
  c->r[30]=c->r[3]|c->r[3]; // 801B05C4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B05C8
  c->lr=0x801B05D0u; f_8018D6A0(c); // 801B05CC
  {uint32_t ea=c->r[30]+0x00000114u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B05D0
  c->r[0]=0u+0x00000001u; // 801B05D4
  {uint32_t ea=c->r[2]+0xFFFFA124u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B05D8
  c->r[31]=c->r[3]|c->r[3]; // 801B05DC
  W32(c->r[30]+0x0000010Cu,c->r[0]); // 801B05E0
  fcmp(c,0,c->f[1],c->f[0]); // 801B05E4
  if (!crb(c,0)) { goto L_801B0620; } // 801B05E8
  c->lr=0x801B05F0u; f_8018D6A0(c); // 801B05EC
  c->r[0]=R32(c->r[30]+0x0000010Cu); // 801B05F0
  c->r[29]=c->r[3]|c->r[3]; // 801B05F4
  c->r[3]=c->r[30]|c->r[30]; // 801B05F8
  c->r[0]=c->r[0]|0x00000001u; // 801B05FC
  W32(c->r[30]+0x0000010Cu,c->r[0]); // 801B0600
  c->lr=0x801B0608u; f_801B0F90(c); // 801B0604
  c->r[3]=c->r[29]|c->r[29]; // 801B0608
  c->lr=0x801B0610u; f_8018D6E0(c); // 801B060C
  c->r[3]=c->r[31]|c->r[31]; // 801B0610
  c->lr=0x801B0618u; f_8018D6E0(c); // 801B0614
  c->r[3]=0u+0x00000000u; // 801B0618
  goto L_801B0730; // 801B061C
L_801B0620:;
  {uint32_t ea=c->r[2]+0xFFFFA120u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B0620
  c->r[3]=0u+0x80280000u; // 801B0624
  c->r[3]=c->r[3]+0xFFFF9C60u; // 801B0628
  c->r[0]=R32(c->r[3]+0x0000005Cu); // 801B062C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801B0630
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 801B0634
  c->lr=0x801B063Cu; f_802078F8(c); // 801B0638
  W32(c->r[30]+0x00000040u,c->r[3]); // 801B063C
  c->r[4]=0u+0x80280000u; // 801B0640
  c->r[4]=c->r[4]+0xFFFF9D20u; // 801B0644
  c->r[3]=c->r[30]|c->r[30]; // 801B0648
  c->r[0]=R32(c->r[4]+0x000000C0u); // 801B064C
  W32(c->r[30]+0x00000080u,c->r[0]); // 801B0650
  c->r[0]=R32(c->r[4]+0x000000C4u); // 801B0654
  W32(c->r[30]+0x00000084u,c->r[0]); // 801B0658
  c->r[0]=R32(c->r[4]+0x000000C8u); // 801B065C
  W32(c->r[30]+0x00000088u,c->r[0]); // 801B0660
  c->r[0]=R32(c->r[4]+0x000000CCu); // 801B0664
  W32(c->r[30]+0x000000C0u,c->r[0]); // 801B0668
  c->r[0]=R32(c->r[4]+0x000000D0u); // 801B066C
  W32(c->r[30]+0x000000C4u,c->r[0]); // 801B0670
  c->r[0]=R32(c->r[4]+0x000000D4u); // 801B0674
  W32(c->r[30]+0x000000ECu,c->r[0]); // 801B0678
  c->r[0]=R32(c->r[4]+0x000000D8u); // 801B067C
  W32(c->r[30]+0x000000F0u,c->r[0]); // 801B0680
  c->r[0]=R32(c->r[4]+0x000000DCu); // 801B0684
  W32(c->r[30]+0x000000F4u,c->r[0]); // 801B0688
  c->lr=0x801B0690u; f_801B0CE0(c); // 801B068C
  cmps(c,0,(int32_t)c->r[3],0); // 801B0690
  if (!crb(c,2)) { goto L_801B06CC; } // 801B0694
  c->lr=0x801B069Cu; f_8018D6A0(c); // 801B0698
  c->r[0]=R32(c->r[30]+0x0000010Cu); // 801B069C
  c->r[29]=c->r[3]|c->r[3]; // 801B06A0
  c->r[3]=c->r[30]|c->r[30]; // 801B06A4
  c->r[0]=c->r[0]|0x00000001u; // 801B06A8
  W32(c->r[30]+0x0000010Cu,c->r[0]); // 801B06AC
  c->lr=0x801B06B4u; f_801B0F90(c); // 801B06B0
  c->r[3]=c->r[29]|c->r[29]; // 801B06B4
  c->lr=0x801B06BCu; f_8018D6E0(c); // 801B06B8
  c->r[3]=c->r[31]|c->r[31]; // 801B06BC
  c->lr=0x801B06C4u; f_8018D6E0(c); // 801B06C0
  c->r[3]=0u+0x00000000u; // 801B06C4
  goto L_801B0730; // 801B06C8
L_801B06CC:;
  c->r[3]=c->r[30]|c->r[30]; // 801B06CC
  c->lr=0x801B06D4u; f_801B0E60(c); // 801B06D0
  c->r[3]=c->r[30]|c->r[30]; // 801B06D4
  c->lr=0x801B06DCu; f_801B10B0(c); // 801B06D8
  cmps(c,0,(int32_t)c->r[3],0); // 801B06DC
  if (!crb(c,2)) { goto L_801B0718; } // 801B06E0
  c->lr=0x801B06E8u; f_8018D6A0(c); // 801B06E4
  c->r[0]=R32(c->r[30]+0x0000010Cu); // 801B06E8
  c->r[29]=c->r[3]|c->r[3]; // 801B06EC
  c->r[3]=c->r[30]|c->r[30]; // 801B06F0
  c->r[0]=c->r[0]|0x00000001u; // 801B06F4
  W32(c->r[30]+0x0000010Cu,c->r[0]); // 801B06F8
  c->lr=0x801B0700u; f_801B0F90(c); // 801B06FC
  c->r[3]=c->r[29]|c->r[29]; // 801B0700
  c->lr=0x801B0708u; f_8018D6E0(c); // 801B0704
  c->r[3]=c->r[31]|c->r[31]; // 801B0708
  c->lr=0x801B0710u; f_8018D6E0(c); // 801B070C
  c->r[3]=0u+0x00000000u; // 801B0710
  goto L_801B0730; // 801B0714
L_801B0718:;
  c->r[0]=R32(c->r[30]+0x0000010Cu); // 801B0718
  c->r[3]=c->r[31]|c->r[31]; // 801B071C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 801B0720
  W32(c->r[30]+0x0000010Cu,c->r[0]); // 801B0724
  c->lr=0x801B072Cu; f_8018D6E0(c); // 801B0728
  c->r[3]=0u+0x00000001u; // 801B072C
L_801B0730:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B0730
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B0734
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B0738
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B073C
  c->lr=c->r[0]; // 801B0740
  c->r[1]=c->r[1]+0x00000020u; // 801B0744
  return; // 801B0748
}

// AXFXReverbHiExpShutdown
void f_801B0750(Ctx* __restrict c) {
  trace_call(0x801B0750u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0750
  c->r[0]=c->lr; // 801B0754
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B0758
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B075C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B0760
  c->r[30]=c->r[3]|c->r[3]; // 801B0764
  c->lr=0x801B076Cu; f_8018D6A0(c); // 801B0768
  c->r[0]=R32(c->r[30]+0x0000010Cu); // 801B076C
  c->r[31]=c->r[3]|c->r[3]; // 801B0770
  c->r[3]=c->r[30]|c->r[30]; // 801B0774
  c->r[0]=c->r[0]|0x00000001u; // 801B0778
  W32(c->r[30]+0x0000010Cu,c->r[0]); // 801B077C
  c->lr=0x801B0784u; f_801B0F90(c); // 801B0780
  c->r[3]=c->r[31]|c->r[31]; // 801B0784
  c->lr=0x801B078Cu; f_8018D6E0(c); // 801B0788
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B078C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B0790
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B0794
  c->lr=c->r[0]; // 801B0798
  c->r[1]=c->r[1]+0x00000010u; // 801B079C
  return; // 801B07A0
}

// AXFXReverbHiExpCallback
void f_801B07B0(Ctx* __restrict c) {
  trace_call(0x801B07B0u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B07B0
  c->r[0]=c->lr; // 801B07B4
  W32(c->r[1]+0x00000074u,c->r[0]); // 801B07B8
  c->r[11]=c->r[1]+0x00000070u; // 801B07BC
  c->lr=0x801B07C4u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B07C0
  c->r[0]=R32(c->r[4]+0x0000010Cu); // 801B07C4
  cmps(c,0,(int32_t)c->r[0],0); // 801B07C8
  if (crb(c,2)) { goto L_801B07DC; } // 801B07CC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 801B07D0
  W32(c->r[4]+0x0000010Cu,c->r[0]); // 801B07D4
  goto L_801B0CBC; // 801B07D8
L_801B07DC:;
  c->r[7]=R32(c->r[4]+0x00000138u); // 801B07DC
  c->r[6]=R32(c->r[3]+0x00000000u); // 801B07E0
  c->r[5]=R32(c->r[3]+0x00000004u); // 801B07E4
  cmps(c,0,(int32_t)c->r[7],0); // 801B07E8
  c->r[0]=R32(c->r[3]+0x00000008u); // 801B07EC
  W32(c->r[1]+0x0000002Cu,c->r[6]); // 801B07F0
  W32(c->r[1]+0x00000030u,c->r[5]); // 801B07F4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B07F8
  if (crb(c,2)) { goto L_801B0818; } // 801B07FC
  c->r[5]=R32(c->r[7]+0x00000000u); // 801B0800
  c->r[3]=R32(c->r[7]+0x00000004u); // 801B0804
  c->r[0]=R32(c->r[7]+0x00000008u); // 801B0808
  W32(c->r[1]+0x00000008u,c->r[5]); // 801B080C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801B0810
  W32(c->r[1]+0x00000010u,c->r[0]); // 801B0814
L_801B0818:;
  c->r[7]=R32(c->r[4]+0x0000013Cu); // 801B0818
  cmps(c,0,(int32_t)c->r[7],0); // 801B081C
  if (crb(c,2)) { goto L_801B0830; } // 801B0820
  c->r[3]=R32(c->r[7]+0x00000000u); // 801B0824
  c->r[5]=R32(c->r[7]+0x00000004u); // 801B0828
  c->r[6]=R32(c->r[7]+0x00000008u); // 801B082C
L_801B0830:;
  {uint32_t ea=c->r[2]+0xFFFFA128u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B0830
  c->r[31]=0u+0x00000000u; // 801B0834
  {uint32_t ea=c->r[4]+0x00000108u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B0838
  c->r[29]=0u+0x00000000u; // 801B083C
  {uint32_t ea=c->r[2]+0xFFFFA12Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 801B0840
  c->r[0]=0u+0x43300000u; // 801B0844
  {uint32_t ea=c->r[4]+0x00000134u; c->f[3]=c->ps1[3]=RF32(ea);} // 801B0848
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[1]); // 801B084C
  {uint32_t ea=c->r[2]+0xFFFFA130u; c->f[2]=c->ps1[2]=RF32(ea);} // 801B0850
  c->r[30]=0u+0x00000003u; // 801B0854
  {uint32_t ea=c->r[4]+0x0000012Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801B0858
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[3]); // 801B085C
  {uint32_t ea=c->r[4]+0x000000F8u; c->f[3]=c->ps1[3]=RF32(ea);} // 801B0860
  c->f[6]=c->ps1[6]=S(c->f[2]*c->f[0]); // 801B0864
  {uint32_t ea=c->r[2]+0xFFFFA138u; c->f[0]=RF64(ea);} // 801B0868
  c->r[0]=c->r[0]|0x00000000u; // 801B086C
L_801B0870:;
  c->r[9]=c->r[4]|c->r[4]; // 801B0870
  c->r[10]=c->r[4]|c->r[4]; // 801B0874
  c->r[11]=c->r[4]|c->r[4]; // 801B0878
  c->r[7]=c->r[1]+0x00000008u; // 801B087C
  c->r[8]=c->r[1]+0x0000002Cu; // 801B0880
  c->r[12]=c->r[1]+0x00000014u; // 801B0884
  c->ctr=c->r[30]; // 801B0888
  c->r[0]=c->r[0]|0x00000000u; // 801B088C
L_801B0890:;
  c->r[26]=R32(c->r[4]+0x00000138u); // 801B0890
  cmps(c,0,(int32_t)c->r[26],0); // 801B0894
  if (crb(c,2)) { goto L_801B08D0; } // 801B0898
  c->r[27]=R32(c->r[7]+0x00000000u); // 801B089C
  c->r[28]=R32(c->r[8]+0x00000000u); // 801B08A0
  c->r[26]=R32(c->r[27]+0x00000000u); // 801B08A4
  c->r[27]=c->r[27]+0x00000004u; // 801B08A8
  c->r[28]=R32(c->r[28]+0x00000000u); // 801B08AC
  W32(c->r[1]+0x00000038u,c->r[0]); // 801B08B0
  c->r[26]=c->r[28]+c->r[26]; // 801B08B4
  c->r[26]=c->r[26]^0x80000000u; // 801B08B8
  W32(c->r[1]+0x0000003Cu,c->r[26]); // 801B08BC
  {uint32_t ea=c->r[1]+0x00000038u; c->f[2]=RF64(ea);} // 801B08C0
  W32(c->r[7]+0x00000000u,c->r[27]); // 801B08C4
  c->f[11]=c->ps1[11]=S(c->f[2]-c->f[0]); // 801B08C8
  goto L_801B08EC; // 801B08CC
L_801B08D0:;
  c->r[26]=R32(c->r[8]+0x00000000u); // 801B08D0
  W32(c->r[1]+0x00000040u,c->r[0]); // 801B08D4
  c->r[26]=R32(c->r[26]+0x00000000u); // 801B08D8
  c->r[26]=c->r[26]^0x80000000u; // 801B08DC
  W32(c->r[1]+0x00000044u,c->r[26]); // 801B08E0
  {uint32_t ea=c->r[1]+0x00000040u; c->f[2]=RF64(ea);} // 801B08E4
  c->f[11]=c->ps1[11]=S(c->f[2]-c->f[0]); // 801B08E8
L_801B08EC:;
  c->r[28]=R32(c->r[4]+0x0000000Cu); // 801B08EC
  c->r[27]=R32(c->r[4]+0x00000010u); // 801B08F0
  c->r[26]=R32(c->r[4]+0x00000014u); // 801B08F4
  c->r[28]=rotl(c->r[28],2)&0xFFFFFFFCu; // 801B08F8
  c->r[25]=R32(c->r[9]+0x00000000u); // 801B08FC
  c->r[27]=rotl(c->r[27],2)&0xFFFFFFFCu; // 801B0900
  {uint32_t ea=c->r[4]+0x00000020u; c->f[9]=c->ps1[9]=RF32(ea);} // 801B0904
  c->r[26]=rotl(c->r[26],2)&0xFFFFFFFCu; // 801B0908
  {uint32_t ea=c->r[25]+c->r[28]; c->f[8]=c->ps1[8]=RF32(ea);} // 801B090C
  {uint32_t ea=c->r[4]+0x00000024u; c->f[7]=c->ps1[7]=RF32(ea);} // 801B0910
  {uint32_t ea=c->r[25]+c->r[27]; c->f[2]=c->ps1[2]=RF32(ea);} // 801B0914
  c->f[8]=c->ps1[8]=S(c->f[9]*c->f[8]); // 801B0918
  {uint32_t ea=c->r[4]+0x00000028u; c->f[10]=c->ps1[10]=RF32(ea);} // 801B091C
  {uint32_t ea=c->r[25]+c->r[26]; c->f[9]=c->ps1[9]=RF32(ea);} // 801B0920
  c->f[2]=c->ps1[2]=S(c->f[7]*c->f[2]); // 801B0924
  {uint32_t ea=c->r[25]+c->r[26]; WF32(ea,c->f[11]);} // 801B0928
  c->f[7]=c->ps1[7]=S(c->f[10]*c->f[9]); // 801B092C
  c->f[2]=c->ps1[2]=S(c->f[8]+c->f[2]); // 801B0930
  c->r[27]=R32(c->r[4]+0x0000003Cu); // 801B0934
  cmps(c,0,(int32_t)c->r[27],0); // 801B0938
  c->f[2]=c->ps1[2]=S(c->f[7]+c->f[2]); // 801B093C
  if (crb(c,2)) { goto L_801B095C; } // 801B0940
  c->r[27]=R32(c->r[4]+0x00000038u); // 801B0944
  c->r[28]=R32(c->r[9]+0x0000002Cu); // 801B0948
  c->r[27]=rotl(c->r[27],2)&0xFFFFFFFCu; // 801B094C
  {uint32_t ea=c->r[28]+c->r[27]; c->f[9]=c->ps1[9]=RF32(ea);} // 801B0950
  {uint32_t ea=c->r[28]+c->r[27]; WF32(ea,c->f[11]);} // 801B0954
  goto L_801B0960; // 801B0958
L_801B095C:;
  c->f[9]=c->f[11]; // 801B095C
L_801B0960:;
  c->r[27]=R32(c->r[4]+0x00000068u); // 801B0960
  c->r[25]=R32(c->r[10]+0x00000044u); // 801B0964
  c->r[27]=rotl(c->r[27],2)&0xFFFFFFFCu; // 801B0968
  {uint32_t ea=c->r[4]+0x0000008Cu; c->f[7]=c->ps1[7]=RF32(ea);} // 801B096C
  {uint32_t ea=c->r[25]+c->r[27]; c->f[8]=c->ps1[8]=RF32(ea);} // 801B0970
  {uint32_t ea=c->r[2]+0xFFFFA124u; c->f[10]=c->ps1[10]=RF32(ea);} // 801B0974
  c->f[7]=c->ps1[7]=S(c->f[8]*c->f[7]); // 801B0978
  c->f[10]=c->ps1[10]=S(c->f[10]+c->f[8]); // 801B097C
  c->f[7]=c->ps1[7]=S(c->f[9]+c->f[7]); // 801B0980
  {uint32_t ea=c->r[25]+c->r[27]; WF32(ea,c->f[7]);} // 801B0984
  c->r[27]=R32(c->r[4]+0x0000006Cu); // 801B0988
  c->r[26]=R32(c->r[10]+0x00000048u); // 801B098C
  c->r[27]=rotl(c->r[27],2)&0xFFFFFFFCu; // 801B0990
  {uint32_t ea=c->r[4]+0x00000090u; c->f[7]=c->ps1[7]=RF32(ea);} // 801B0994
  {uint32_t ea=c->r[26]+c->r[27]; c->f[8]=c->ps1[8]=RF32(ea);} // 801B0998
  c->f[7]=c->ps1[7]=S(c->f[8]*c->f[7]); // 801B099C
  c->f[10]=c->ps1[10]=S(c->f[10]+c->f[8]); // 801B09A0
  c->f[7]=c->ps1[7]=S(c->f[9]+c->f[7]); // 801B09A4
  {uint32_t ea=c->r[26]+c->r[27]; WF32(ea,c->f[7]);} // 801B09A8
  c->r[27]=R32(c->r[4]+0x00000070u); // 801B09AC
  c->r[28]=R32(c->r[10]+0x0000004Cu); // 801B09B0
  c->r[27]=rotl(c->r[27],2)&0xFFFFFFFCu; // 801B09B4
  {uint32_t ea=c->r[4]+0x00000094u; c->f[7]=c->ps1[7]=RF32(ea);} // 801B09B8
  {uint32_t ea=c->r[28]+c->r[27]; c->f[8]=c->ps1[8]=RF32(ea);} // 801B09BC
  c->f[7]=c->ps1[7]=S(c->f[8]*c->f[7]); // 801B09C0
  c->f[10]=c->ps1[10]=S(c->f[10]+c->f[8]); // 801B09C4
  c->f[7]=c->ps1[7]=S(c->f[9]+c->f[7]); // 801B09C8
  {uint32_t ea=c->r[28]+c->r[27]; WF32(ea,c->f[7]);} // 801B09CC
  c->r[27]=R32(c->r[4]+0x000000B0u); // 801B09D0
  c->r[25]=R32(c->r[11]+0x00000098u); // 801B09D4
  c->r[27]=rotl(c->r[27],2)&0xFFFFFFFCu; // 801B09D8
  {uint32_t ea=c->r[25]+c->r[27]; c->f[8]=c->ps1[8]=RF32(ea);} // 801B09DC
  c->f[7]=c->ps1[7]=S(c->f[8]*c->f[3]); // 801B09E0
  c->f[7]=c->ps1[7]=S(c->f[10]+c->f[7]); // 801B09E4
  {uint32_t ea=c->r[25]+c->r[27]; WF32(ea,c->f[7]);} // 801B09E8
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[3]); // 801B09EC
  c->r[27]=R32(c->r[4]+0x000000B4u); // 801B09F0
  c->r[26]=R32(c->r[11]+0x0000009Cu); // 801B09F4
  c->r[27]=rotl(c->r[27],2)&0xFFFFFFFCu; // 801B09F8
  c->f[8]=c->ps1[8]=S(c->f[8]-c->f[7]); // 801B09FC
  {uint32_t ea=c->r[26]+c->r[27]; c->f[9]=c->ps1[9]=RF32(ea);} // 801B0A00
  c->f[7]=c->ps1[7]=S(c->f[9]*c->f[3]); // 801B0A04
  c->f[7]=c->ps1[7]=S(c->f[8]+c->f[7]); // 801B0A08
  {uint32_t ea=c->r[26]+c->r[27]; WF32(ea,c->f[7]);} // 801B0A0C
  c->f[8]=c->ps1[8]=S(c->f[7]*c->f[3]); // 801B0A10
  {uint32_t ea=c->r[9]+0x000000FCu; c->f[7]=c->ps1[7]=RF32(ea);} // 801B0A14
  c->f[8]=c->ps1[8]=S(c->f[9]-c->f[8]); // 801B0A18
  c->f[7]=c->ps1[7]=S(c->f[1]*c->f[7]); // 801B0A1C
  c->f[8]=c->ps1[8]=S(c->f[4]*c->f[8]); // 801B0A20
  c->f[9]=c->ps1[9]=S(c->f[8]+c->f[7]); // 801B0A24
  {uint32_t ea=c->r[9]+0x000000FCu; WF32(ea,c->f[9]);} // 801B0A28
  c->r[27]=R32(c->r[9]+0x000000D4u); // 801B0A2C
  c->r[28]=R32(c->r[9]+0x000000C8u); // 801B0A30
  c->r[27]=rotl(c->r[27],2)&0xFFFFFFFCu; // 801B0A34
  {uint32_t ea=c->r[28]+c->r[27]; c->f[8]=c->ps1[8]=RF32(ea);} // 801B0A38
  c->f[7]=c->ps1[7]=S(c->f[8]*c->f[3]); // 801B0A3C
  c->f[7]=c->ps1[7]=S(c->f[9]+c->f[7]); // 801B0A40
  {uint32_t ea=c->r[28]+c->r[27]; WF32(ea,c->f[7]);} // 801B0A44
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[3]); // 801B0A48
  c->r[27]=R32(c->r[9]+0x000000D4u); // 801B0A4C
  c->r[27]=c->r[27]+0x00000001u; // 801B0A50
  W32(c->r[9]+0x000000D4u,c->r[27]); // 801B0A54
  c->f[7]=c->ps1[7]=S(c->f[8]-c->f[7]); // 801B0A58
  c->r[28]=R32(c->r[9]+0x000000E0u); // 801B0A5C
  {uint32_t ea=c->r[12]+0x00000000u; WF32(ea,c->f[7]);} // 801B0A60
  cmpu(c,0,c->r[27],c->r[28]); // 801B0A64
  if (crb(c,0)) { goto L_801B0A70; } // 801B0A68
  W32(c->r[9]+0x000000D4u,c->r[29]); // 801B0A6C
L_801B0A70:;
  {uint32_t ea=c->r[12]+0x00000000u; c->f[7]=c->ps1[7]=RF32(ea);} // 801B0A70
  c->r[7]=c->r[7]+0x00000004u; // 801B0A74
  c->r[8]=c->r[8]+0x00000004u; // 801B0A78
  c->r[9]=c->r[9]+0x00000004u; // 801B0A7C
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[5]); // 801B0A80
  c->r[10]=c->r[10]+0x0000000Cu; // 801B0A84
  c->r[11]=c->r[11]+0x00000008u; // 801B0A88
  c->f[2]=c->ps1[2]=S(c->f[7]+c->f[2]); // 801B0A8C
  {uint32_t ea=c->r[12]+0x00000000u; WF32(ea,c->f[2]);} // 801B0A90
  c->r[12]=c->r[12]+0x00000004u; // 801B0A94
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B0890; } // 801B0A98
  {uint32_t ea=c->r[1]+0x00000018u; c->f[12]=c->ps1[12]=RF32(ea);} // 801B0A9C
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[11]=c->ps1[11]=RF32(ea);} // 801B0AA0
  {uint32_t ea=c->r[1]+0x00000014u; c->f[10]=c->ps1[10]=RF32(ea);} // 801B0AA4
  c->f[2]=c->ps1[2]=S(c->f[12]+c->f[11]); // 801B0AA8
  c->r[12]=R32(c->r[1]+0x0000002Cu); // 801B0AAC
  c->f[7]=c->ps1[7]=S(c->f[10]+c->f[11]); // 801B0AB0
  c->r[8]=R32(c->r[1]+0x00000034u); // 801B0AB4
  c->r[11]=c->r[12]+0x00000004u; // 801B0AB8
  c->r[10]=R32(c->r[1]+0x00000030u); // 801B0ABC
  c->f[9]=c->ps1[9]=S(c->f[2]*c->f[6]); // 801B0AC0
  c->r[7]=c->r[8]+0x00000004u; // 801B0AC4
  c->f[8]=c->ps1[8]=S(c->f[7]*c->f[6]); // 801B0AC8
  c->r[9]=c->r[10]+0x00000004u; // 801B0ACC
  {uint32_t ea=c->r[4]+0x00000140u; c->f[2]=c->ps1[2]=RF32(ea);} // 801B0AD0
  c->f[13]=c->ps1[13]=S(c->f[10]+c->f[12]); // 801B0AD4
  c->f[9]=c->ps1[9]=S(c->f[10]+c->f[9]); // 801B0AD8
  W32(c->r[1]+0x0000002Cu,c->r[11]); // 801B0ADC
  c->f[8]=c->ps1[8]=S(c->f[12]+c->f[8]); // 801B0AE0
  c->f[7]=c->ps1[7]=S(c->f[13]*c->f[6]); // 801B0AE4
  W32(c->r[1]+0x00000034u,c->r[7]); // 801B0AE8
  c->f[2]=c->ps1[2]=S(c->f[9]*c->f[2]); // 801B0AEC
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[9]);} // 801B0AF0
  c->f[7]=c->ps1[7]=S(c->f[11]+c->f[7]); // 801B0AF4
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 801B0AF8
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[8]);} // 801B0AFC
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[2]);} // 801B0B00
  c->r[11]=R32(c->r[1]+0x00000044u); // 801B0B04
  W32(c->r[12]+0x00000000u,c->r[11]); // 801B0B08
  {uint32_t ea=c->r[4]+0x00000140u; c->f[2]=c->ps1[2]=RF32(ea);} // 801B0B0C
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[7]);} // 801B0B10
  c->f[2]=c->ps1[2]=S(c->f[8]*c->f[2]); // 801B0B14
  W32(c->r[1]+0x00000030u,c->r[9]); // 801B0B18
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 801B0B1C
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[2]);} // 801B0B20
  c->r[7]=R32(c->r[1]+0x0000003Cu); // 801B0B24
  W32(c->r[10]+0x00000000u,c->r[7]); // 801B0B28
  {uint32_t ea=c->r[4]+0x00000140u; c->f[2]=c->ps1[2]=RF32(ea);} // 801B0B2C
  c->f[2]=c->ps1[2]=S(c->f[7]*c->f[2]); // 801B0B30
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 801B0B34
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[2]);} // 801B0B38
  c->r[7]=R32(c->r[1]+0x0000004Cu); // 801B0B3C
  W32(c->r[8]+0x00000000u,c->r[7]); // 801B0B40
  c->r[7]=R32(c->r[4]+0x0000013Cu); // 801B0B44
  cmps(c,0,(int32_t)c->r[7],0); // 801B0B48
  if (crb(c,2)) { goto L_801B0BA4; } // 801B0B4C
  {uint32_t ea=c->r[4]+0x00000144u; c->f[2]=c->ps1[2]=RF32(ea);} // 801B0B50
  c->f[2]=c->ps1[2]=S(c->f[9]*c->f[2]); // 801B0B54
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 801B0B58
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[2]);} // 801B0B5C
  c->r[7]=R32(c->r[1]+0x0000004Cu); // 801B0B60
  W32(c->r[3]+0x00000000u,c->r[7]); // 801B0B64
  c->r[3]=c->r[3]+0x00000004u; // 801B0B68
  {uint32_t ea=c->r[4]+0x00000144u; c->f[2]=c->ps1[2]=RF32(ea);} // 801B0B6C
  c->f[2]=c->ps1[2]=S(c->f[8]*c->f[2]); // 801B0B70
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 801B0B74
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[2]);} // 801B0B78
  c->r[7]=R32(c->r[1]+0x00000044u); // 801B0B7C
  W32(c->r[5]+0x00000000u,c->r[7]); // 801B0B80
  c->r[5]=c->r[5]+0x00000004u; // 801B0B84
  {uint32_t ea=c->r[4]+0x00000144u; c->f[2]=c->ps1[2]=RF32(ea);} // 801B0B88
  c->f[2]=c->ps1[2]=S(c->f[7]*c->f[2]); // 801B0B8C
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 801B0B90
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[2]);} // 801B0B94
  c->r[7]=R32(c->r[1]+0x0000003Cu); // 801B0B98
  W32(c->r[6]+0x00000000u,c->r[7]); // 801B0B9C
  c->r[6]=c->r[6]+0x00000004u; // 801B0BA0
L_801B0BA4:;
  c->r[7]=R32(c->r[4]+0x0000000Cu); // 801B0BA4
  c->r[8]=c->r[7]+0x00000001u; // 801B0BA8
  W32(c->r[4]+0x0000000Cu,c->r[8]); // 801B0BAC
  c->r[7]=R32(c->r[4]+0x00000018u); // 801B0BB0
  cmpu(c,0,c->r[8],c->r[7]); // 801B0BB4
  if (crb(c,0)) { goto L_801B0BC0; } // 801B0BB8
  W32(c->r[4]+0x0000000Cu,c->r[29]); // 801B0BBC
L_801B0BC0:;
  c->r[7]=R32(c->r[4]+0x00000010u); // 801B0BC0
  c->r[8]=c->r[7]+0x00000001u; // 801B0BC4
  W32(c->r[4]+0x00000010u,c->r[8]); // 801B0BC8
  c->r[7]=R32(c->r[4]+0x00000018u); // 801B0BCC
  cmpu(c,0,c->r[8],c->r[7]); // 801B0BD0
  if (crb(c,0)) { goto L_801B0BDC; } // 801B0BD4
  W32(c->r[4]+0x00000010u,c->r[29]); // 801B0BD8
L_801B0BDC:;
  c->r[7]=R32(c->r[4]+0x00000014u); // 801B0BDC
  c->r[9]=c->r[4]+0x00000008u; // 801B0BE0
  c->r[8]=c->r[7]+0x00000001u; // 801B0BE4
  W32(c->r[4]+0x00000014u,c->r[8]); // 801B0BE8
  c->r[7]=R32(c->r[4]+0x00000018u); // 801B0BEC
  cmpu(c,0,c->r[8],c->r[7]); // 801B0BF0
  if (crb(c,0)) { goto L_801B0BFC; } // 801B0BF4
  W32(c->r[9]+0x0000000Cu,c->r[29]); // 801B0BF8
L_801B0BFC:;
  c->r[8]=R32(c->r[4]+0x0000003Cu); // 801B0BFC
  cmps(c,0,(int32_t)c->r[8],0); // 801B0C00
  if (crb(c,2)) { goto L_801B0C20; } // 801B0C04
  c->r[7]=R32(c->r[4]+0x00000038u); // 801B0C08
  c->r[7]=c->r[7]+0x00000001u; // 801B0C0C
  W32(c->r[4]+0x00000038u,c->r[7]); // 801B0C10
  cmpu(c,0,c->r[7],c->r[8]); // 801B0C14
  if (crb(c,0)) { goto L_801B0C20; } // 801B0C18
  W32(c->r[4]+0x00000038u,c->r[29]); // 801B0C1C
L_801B0C20:;
  c->r[7]=R32(c->r[4]+0x00000068u); // 801B0C20
  c->r[8]=c->r[7]+0x00000001u; // 801B0C24
  W32(c->r[4]+0x00000068u,c->r[8]); // 801B0C28
  c->r[7]=R32(c->r[4]+0x00000074u); // 801B0C2C
  cmpu(c,0,c->r[8],c->r[7]); // 801B0C30
  if (crb(c,0)) { goto L_801B0C3C; } // 801B0C34
  W32(c->r[4]+0x00000068u,c->r[29]); // 801B0C38
L_801B0C3C:;
  c->r[7]=R32(c->r[4]+0x0000006Cu); // 801B0C3C
  c->r[8]=c->r[7]+0x00000001u; // 801B0C40
  W32(c->r[4]+0x0000006Cu,c->r[8]); // 801B0C44
  c->r[7]=R32(c->r[4]+0x00000078u); // 801B0C48
  cmpu(c,0,c->r[8],c->r[7]); // 801B0C4C
  if (crb(c,0)) { goto L_801B0C58; } // 801B0C50
  W32(c->r[4]+0x0000006Cu,c->r[29]); // 801B0C54
L_801B0C58:;
  c->r[7]=R32(c->r[4]+0x00000070u); // 801B0C58
  c->r[9]=c->r[4]+0x00000008u; // 801B0C5C
  c->r[8]=c->r[7]+0x00000001u; // 801B0C60
  W32(c->r[4]+0x00000070u,c->r[8]); // 801B0C64
  c->r[7]=R32(c->r[4]+0x0000007Cu); // 801B0C68
  cmpu(c,0,c->r[8],c->r[7]); // 801B0C6C
  if (crb(c,0)) { goto L_801B0C78; } // 801B0C70
  W32(c->r[9]+0x00000068u,c->r[29]); // 801B0C74
L_801B0C78:;
  c->r[7]=R32(c->r[4]+0x000000B0u); // 801B0C78
  c->r[8]=c->r[7]+0x00000001u; // 801B0C7C
  W32(c->r[4]+0x000000B0u,c->r[8]); // 801B0C80
  c->r[7]=R32(c->r[4]+0x000000B8u); // 801B0C84
  cmpu(c,0,c->r[8],c->r[7]); // 801B0C88
  if (crb(c,0)) { goto L_801B0C94; } // 801B0C8C
  W32(c->r[4]+0x000000B0u,c->r[29]); // 801B0C90
L_801B0C94:;
  c->r[7]=R32(c->r[4]+0x000000B4u); // 801B0C94
  c->r[8]=c->r[7]+0x00000001u; // 801B0C98
  W32(c->r[4]+0x000000B4u,c->r[8]); // 801B0C9C
  c->r[7]=R32(c->r[4]+0x000000BCu); // 801B0CA0
  cmpu(c,0,c->r[8],c->r[7]); // 801B0CA4
  if (crb(c,0)) { goto L_801B0CB0; } // 801B0CA8
  W32(c->r[4]+0x000000B4u,c->r[29]); // 801B0CAC
L_801B0CB0:;
  c->r[31]=c->r[31]+0x00000001u; // 801B0CB0
  cmpu(c,0,c->r[31],0x00000060u); // 801B0CB4
  if (crb(c,0)) { IRQCHK(c); goto L_801B0870; } // 801B0CB8
L_801B0CBC:;
  c->r[11]=c->r[1]+0x00000070u; // 801B0CBC
  c->lr=0x801B0CC4u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B0CC0
  c->r[0]=R32(c->r[1]+0x00000074u); // 801B0CC4
  c->lr=c->r[0]; // 801B0CC8
  c->r[1]=c->r[1]+0x00000070u; // 801B0CCC
  return; // 801B0CD0
}

// __AllocDelayLine
void f_801B0CE0(Ctx* __restrict c) {
  trace_call(0x801B0CE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0CE0
  c->r[0]=c->lr; // 801B0CE4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B0CE8
  c->r[11]=c->r[1]+0x00000030u; // 801B0CEC
  c->lr=0x801B0CF4u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B0CF0
  c->r[23]=c->r[3]|c->r[3]; // 801B0CF4
  c->r[24]=0u+0x00000000u; // 801B0CF8
  c->r[30]=c->r[23]|c->r[23]; // 801B0CFC
  c->r[31]=0u+0x00000000u; // 801B0D00
  c->r[29]=c->r[23]|c->r[23]; // 801B0D04
  c->r[28]=c->r[23]|c->r[23]; // 801B0D08
L_801B0D0C:;
  c->r[0]=R32(c->r[23]+0x0000001Cu); // 801B0D0C
  c->r[12]=R32(c->r[13]+0xFFFFA8B0u); // 801B0D10
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801B0D14
  c->ctr=c->r[12]; // 801B0D18
  if (true) { c->lr=0x801B0D20u; dispatch(c,c->ctr); } // 801B0D1C
  cmps(c,0,(int32_t)c->r[3],0); // 801B0D20
  W32(c->r[30]+0x00000000u,c->r[3]); // 801B0D24
  if (!crb(c,2)) { goto L_801B0D34; } // 801B0D28
  c->r[3]=0u+0x00000000u; // 801B0D2C
  goto L_801B0E3C; // 801B0D30
L_801B0D34:;
  c->r[0]=R32(c->r[23]+0x00000040u); // 801B0D34
  cmps(c,0,(int32_t)c->r[0],0); // 801B0D38
  if (crb(c,2)) { goto L_801B0D64; } // 801B0D3C
  c->r[12]=R32(c->r[13]+0xFFFFA8B0u); // 801B0D40
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801B0D44
  c->ctr=c->r[12]; // 801B0D48
  if (true) { c->lr=0x801B0D50u; dispatch(c,c->ctr); } // 801B0D4C
  cmps(c,0,(int32_t)c->r[3],0); // 801B0D50
  W32(c->r[30]+0x0000002Cu,c->r[3]); // 801B0D54
  if (!crb(c,2)) { goto L_801B0D68; } // 801B0D58
  c->r[3]=0u+0x00000000u; // 801B0D5C
  goto L_801B0E3C; // 801B0D60
L_801B0D64:;
  W32(c->r[30]+0x0000002Cu,c->r[31]); // 801B0D64
L_801B0D68:;
  c->r[26]=c->r[23]|c->r[23]; // 801B0D68
  c->r[27]=c->r[29]|c->r[29]; // 801B0D6C
  c->r[25]=0u+0x00000000u; // 801B0D70
L_801B0D74:;
  c->r[0]=R32(c->r[26]+0x00000080u); // 801B0D74
  c->r[12]=R32(c->r[13]+0xFFFFA8B0u); // 801B0D78
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801B0D7C
  c->ctr=c->r[12]; // 801B0D80
  if (true) { c->lr=0x801B0D88u; dispatch(c,c->ctr); } // 801B0D84
  cmps(c,0,(int32_t)c->r[3],0); // 801B0D88
  W32(c->r[27]+0x00000044u,c->r[3]); // 801B0D8C
  if (!crb(c,2)) { goto L_801B0D9C; } // 801B0D90
  c->r[3]=0u+0x00000000u; // 801B0D94
  goto L_801B0E3C; // 801B0D98
L_801B0D9C:;
  c->r[25]=c->r[25]+0x00000001u; // 801B0D9C
  c->r[27]=c->r[27]+0x00000004u; // 801B0DA0
  cmpu(c,0,c->r[25],0x00000003u); // 801B0DA4
  c->r[26]=c->r[26]+0x00000004u; // 801B0DA8
  if (crb(c,0)) { IRQCHK(c); goto L_801B0D74; } // 801B0DAC
  c->r[27]=c->r[23]|c->r[23]; // 801B0DB0
  c->r[26]=c->r[28]|c->r[28]; // 801B0DB4
  c->r[25]=0u+0x00000000u; // 801B0DB8
L_801B0DBC:;
  c->r[0]=R32(c->r[27]+0x000000C0u); // 801B0DBC
  c->r[12]=R32(c->r[13]+0xFFFFA8B0u); // 801B0DC0
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801B0DC4
  c->ctr=c->r[12]; // 801B0DC8
  if (true) { c->lr=0x801B0DD0u; dispatch(c,c->ctr); } // 801B0DCC
  cmps(c,0,(int32_t)c->r[3],0); // 801B0DD0
  W32(c->r[26]+0x00000098u,c->r[3]); // 801B0DD4
  if (!crb(c,2)) { goto L_801B0DE4; } // 801B0DD8
  c->r[3]=0u+0x00000000u; // 801B0DDC
  goto L_801B0E3C; // 801B0DE0
L_801B0DE4:;
  c->r[25]=c->r[25]+0x00000001u; // 801B0DE4
  c->r[26]=c->r[26]+0x00000004u; // 801B0DE8
  cmpu(c,0,c->r[25],0x00000002u); // 801B0DEC
  c->r[27]=c->r[27]+0x00000004u; // 801B0DF0
  if (crb(c,0)) { IRQCHK(c); goto L_801B0DBC; } // 801B0DF4
  c->r[0]=R32(c->r[30]+0x000000ECu); // 801B0DF8
  c->r[12]=R32(c->r[13]+0xFFFFA8B0u); // 801B0DFC
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801B0E00
  c->ctr=c->r[12]; // 801B0E04
  if (true) { c->lr=0x801B0E0Cu; dispatch(c,c->ctr); } // 801B0E08
  cmps(c,0,(int32_t)c->r[3],0); // 801B0E0C
  W32(c->r[30]+0x000000C8u,c->r[3]); // 801B0E10
  if (!crb(c,2)) { goto L_801B0E20; } // 801B0E14
  c->r[3]=0u+0x00000000u; // 801B0E18
  goto L_801B0E3C; // 801B0E1C
L_801B0E20:;
  c->r[24]=c->r[24]+0x00000001u; // 801B0E20
  c->r[29]=c->r[29]+0x0000000Cu; // 801B0E24
  cmpu(c,0,c->r[24],0x00000003u); // 801B0E28
  c->r[28]=c->r[28]+0x00000008u; // 801B0E2C
  c->r[30]=c->r[30]+0x00000004u; // 801B0E30
  if (crb(c,0)) { IRQCHK(c); goto L_801B0D0C; } // 801B0E34
  c->r[3]=0u+0x00000001u; // 801B0E38
L_801B0E3C:;
  c->r[11]=c->r[1]+0x00000030u; // 801B0E3C
  c->lr=0x801B0E44u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B0E40
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B0E44
  c->lr=c->r[0]; // 801B0E48
  c->r[1]=c->r[1]+0x00000030u; // 801B0E4C
  return; // 801B0E50
}

// __BzeroDelayLines
void f_801B0E60(Ctx* __restrict c) {
  trace_call(0x801B0E60u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0E60
  c->r[0]=c->lr; // 801B0E64
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B0E68
  c->r[11]=c->r[1]+0x00000030u; // 801B0E6C
  c->lr=0x801B0E74u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B0E70
  c->r[24]=c->r[3]|c->r[3]; // 801B0E74
  c->r[25]=0u+0x00000000u; // 801B0E78
  c->r[31]=c->r[24]|c->r[24]; // 801B0E7C
  c->r[30]=c->r[24]|c->r[24]; // 801B0E80
  c->r[29]=c->r[24]|c->r[24]; // 801B0E84
L_801B0E88:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 801B0E88
  cmps(c,0,(int32_t)c->r[3],0); // 801B0E8C
  if (crb(c,2)) { goto L_801B0EA4; } // 801B0E90
  c->r[0]=R32(c->r[24]+0x0000001Cu); // 801B0E94
  c->r[4]=0u+0x00000000u; // 801B0E98
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801B0E9C
  c->lr=0x801B0EA4u; f_800046B4(c); // 801B0EA0
L_801B0EA4:;
  c->r[3]=R32(c->r[31]+0x0000002Cu); // 801B0EA4
  cmps(c,0,(int32_t)c->r[3],0); // 801B0EA8
  if (crb(c,2)) { goto L_801B0EC0; } // 801B0EAC
  c->r[0]=R32(c->r[24]+0x00000040u); // 801B0EB0
  c->r[4]=0u+0x00000000u; // 801B0EB4
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801B0EB8
  c->lr=0x801B0EC0u; f_800046B4(c); // 801B0EBC
L_801B0EC0:;
  c->r[27]=c->r[30]|c->r[30]; // 801B0EC0
  c->r[28]=c->r[24]|c->r[24]; // 801B0EC4
  c->r[26]=0u+0x00000000u; // 801B0EC8
L_801B0ECC:;
  c->r[3]=R32(c->r[27]+0x00000044u); // 801B0ECC
  cmps(c,0,(int32_t)c->r[3],0); // 801B0ED0
  if (crb(c,2)) { goto L_801B0EE8; } // 801B0ED4
  c->r[0]=R32(c->r[28]+0x00000080u); // 801B0ED8
  c->r[4]=0u+0x00000000u; // 801B0EDC
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801B0EE0
  c->lr=0x801B0EE8u; f_800046B4(c); // 801B0EE4
L_801B0EE8:;
  c->r[26]=c->r[26]+0x00000001u; // 801B0EE8
  c->r[28]=c->r[28]+0x00000004u; // 801B0EEC
  cmpu(c,0,c->r[26],0x00000003u); // 801B0EF0
  c->r[27]=c->r[27]+0x00000004u; // 801B0EF4
  if (crb(c,0)) { IRQCHK(c); goto L_801B0ECC; } // 801B0EF8
  c->r[28]=c->r[29]|c->r[29]; // 801B0EFC
  c->r[27]=c->r[24]|c->r[24]; // 801B0F00
  c->r[26]=0u+0x00000000u; // 801B0F04
L_801B0F08:;
  c->r[3]=R32(c->r[28]+0x00000098u); // 801B0F08
  cmps(c,0,(int32_t)c->r[3],0); // 801B0F0C
  if (crb(c,2)) { goto L_801B0F24; } // 801B0F10
  c->r[0]=R32(c->r[27]+0x000000C0u); // 801B0F14
  c->r[4]=0u+0x00000000u; // 801B0F18
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801B0F1C
  c->lr=0x801B0F24u; f_800046B4(c); // 801B0F20
L_801B0F24:;
  c->r[26]=c->r[26]+0x00000001u; // 801B0F24
  c->r[27]=c->r[27]+0x00000004u; // 801B0F28
  cmpu(c,0,c->r[26],0x00000002u); // 801B0F2C
  c->r[28]=c->r[28]+0x00000004u; // 801B0F30
  if (crb(c,0)) { IRQCHK(c); goto L_801B0F08; } // 801B0F34
  c->r[3]=R32(c->r[31]+0x000000C8u); // 801B0F38
  cmps(c,0,(int32_t)c->r[3],0); // 801B0F3C
  if (crb(c,2)) { goto L_801B0F54; } // 801B0F40
  c->r[0]=R32(c->r[31]+0x000000ECu); // 801B0F44
  c->r[4]=0u+0x00000000u; // 801B0F48
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801B0F4C
  c->lr=0x801B0F54u; f_800046B4(c); // 801B0F50
L_801B0F54:;
  c->r[25]=c->r[25]+0x00000001u; // 801B0F54
  c->r[30]=c->r[30]+0x0000000Cu; // 801B0F58
  cmpu(c,0,c->r[25],0x00000003u); // 801B0F5C
  c->r[29]=c->r[29]+0x00000008u; // 801B0F60
  c->r[31]=c->r[31]+0x00000004u; // 801B0F64
  if (crb(c,0)) { IRQCHK(c); goto L_801B0E88; } // 801B0F68
  c->r[11]=c->r[1]+0x00000030u; // 801B0F6C
  c->lr=0x801B0F74u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B0F70
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B0F74
  c->lr=c->r[0]; // 801B0F78
  c->r[1]=c->r[1]+0x00000030u; // 801B0F7C
  return; // 801B0F80
}

// __FreeDelayLine
void f_801B0F90(Ctx* __restrict c) {
  trace_call(0x801B0F90u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0F90
  c->r[0]=c->lr; // 801B0F94
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B0F98
  c->r[11]=c->r[1]+0x00000030u; // 801B0F9C
  c->lr=0x801B0FA4u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B0FA0
  c->r[25]=0u+0x00000000u; // 801B0FA4
  c->r[30]=c->r[3]|c->r[3]; // 801B0FA8
  c->r[31]=0u+0x00000000u; // 801B0FAC
  c->r[29]=c->r[3]|c->r[3]; // 801B0FB0
  c->r[28]=c->r[3]|c->r[3]; // 801B0FB4
L_801B0FB8:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 801B0FB8
  cmps(c,0,(int32_t)c->r[3],0); // 801B0FBC
  if (crb(c,2)) { goto L_801B0FD4; } // 801B0FC0
  c->r[12]=R32(c->r[13]+0xFFFFA8B4u); // 801B0FC4
  c->ctr=c->r[12]; // 801B0FC8
  if (true) { c->lr=0x801B0FD0u; dispatch(c,c->ctr); } // 801B0FCC
  W32(c->r[30]+0x00000000u,c->r[31]); // 801B0FD0
L_801B0FD4:;
  c->r[3]=R32(c->r[30]+0x0000002Cu); // 801B0FD4
  cmps(c,0,(int32_t)c->r[3],0); // 801B0FD8
  if (crb(c,2)) { goto L_801B0FF0; } // 801B0FDC
  c->r[12]=R32(c->r[13]+0xFFFFA8B4u); // 801B0FE0
  c->ctr=c->r[12]; // 801B0FE4
  if (true) { c->lr=0x801B0FECu; dispatch(c,c->ctr); } // 801B0FE8
  W32(c->r[30]+0x0000002Cu,c->r[31]); // 801B0FEC
L_801B0FF0:;
  c->r[27]=c->r[29]|c->r[29]; // 801B0FF0
  c->r[26]=0u+0x00000000u; // 801B0FF4
L_801B0FF8:;
  c->r[3]=R32(c->r[27]+0x00000044u); // 801B0FF8
  cmps(c,0,(int32_t)c->r[3],0); // 801B0FFC
  if (crb(c,2)) { goto L_801B1014; } // 801B1000
  c->r[12]=R32(c->r[13]+0xFFFFA8B4u); // 801B1004
  c->ctr=c->r[12]; // 801B1008
  if (true) { c->lr=0x801B1010u; dispatch(c,c->ctr); } // 801B100C
  W32(c->r[27]+0x00000044u,c->r[31]); // 801B1010
L_801B1014:;
  c->r[26]=c->r[26]+0x00000001u; // 801B1014
  c->r[27]=c->r[27]+0x00000004u; // 801B1018
  cmpu(c,0,c->r[26],0x00000003u); // 801B101C
  if (crb(c,0)) { IRQCHK(c); goto L_801B0FF8; } // 801B1020
  c->r[27]=c->r[28]|c->r[28]; // 801B1024
  c->r[26]=0u+0x00000000u; // 801B1028
L_801B102C:;
  c->r[3]=R32(c->r[27]+0x00000098u); // 801B102C
  cmps(c,0,(int32_t)c->r[3],0); // 801B1030
  if (crb(c,2)) { goto L_801B1048; } // 801B1034
  c->r[12]=R32(c->r[13]+0xFFFFA8B4u); // 801B1038
  c->ctr=c->r[12]; // 801B103C
  if (true) { c->lr=0x801B1044u; dispatch(c,c->ctr); } // 801B1040
  W32(c->r[27]+0x00000098u,c->r[31]); // 801B1044
L_801B1048:;
  c->r[26]=c->r[26]+0x00000001u; // 801B1048
  c->r[27]=c->r[27]+0x00000004u; // 801B104C
  cmpu(c,0,c->r[26],0x00000002u); // 801B1050
  if (crb(c,0)) { IRQCHK(c); goto L_801B102C; } // 801B1054
  c->r[3]=R32(c->r[30]+0x000000C8u); // 801B1058
  cmps(c,0,(int32_t)c->r[3],0); // 801B105C
  if (crb(c,2)) { goto L_801B1074; } // 801B1060
  c->r[12]=R32(c->r[13]+0xFFFFA8B4u); // 801B1064
  c->ctr=c->r[12]; // 801B1068
  if (true) { c->lr=0x801B1070u; dispatch(c,c->ctr); } // 801B106C
  W32(c->r[30]+0x000000C8u,c->r[31]); // 801B1070
L_801B1074:;
  c->r[25]=c->r[25]+0x00000001u; // 801B1074
  c->r[29]=c->r[29]+0x0000000Cu; // 801B1078
  cmpu(c,0,c->r[25],0x00000003u); // 801B107C
  c->r[28]=c->r[28]+0x00000008u; // 801B1080
  c->r[30]=c->r[30]+0x00000004u; // 801B1084
  if (crb(c,0)) { IRQCHK(c); goto L_801B0FB8; } // 801B1088
  c->r[11]=c->r[1]+0x00000030u; // 801B108C
  c->lr=0x801B1094u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B1090
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B1094
  c->lr=c->r[0]; // 801B1098
  c->r[1]=c->r[1]+0x00000030u; // 801B109C
  return; // 801B10A0
}

// __InitParams
void f_801B10B0(Ctx* __restrict c) {
  trace_call(0x801B10B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B10B0
  c->r[0]=c->lr; // 801B10B4
  W32(c->r[1]+0x00000064u,c->r[0]); // 801B10B8
  c->r[11]=c->r[1]+0x00000030u; // 801B10BC
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 801B10C0
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 801B10C4
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 801B10C8
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 801B10CC
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[29]);} // 801B10D0
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,29,ea,0,0);} // 801B10D4
  c->lr=0x801B10DCu; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B10D8
  c->r[4]=R32(c->r[3]+0x00000110u); // 801B10DC
  c->r[31]=0u+0x80280000u; // 801B10E0
  c->r[30]=c->r[3]|c->r[3]; // 801B10E4
  cmpu(c,0,c->r[4],0x00000008u); // 801B10E8
  c->r[31]=c->r[31]+0xFFFF9C60u; // 801B10EC
  if (crb(c,0)) { goto L_801B10FC; } // 801B10F0
  c->r[3]=0u+0x00000000u; // 801B10F4
  goto L_801B13A4; // 801B10F8
L_801B10FC:;
  {uint32_t ea=c->r[3]+0x00000118u; c->f[4]=c->ps1[4]=RF32(ea);} // 801B10FC
  {uint32_t ea=c->r[2]+0xFFFFA124u; c->f[2]=c->ps1[2]=RF32(ea);} // 801B1100
  fcmp(c,0,c->f[4],c->f[2]); // 801B1104
  if (crb(c,0)) { goto L_801B1118; } // 801B1108
  {uint32_t ea=c->r[3]+0x00000114u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B110C
  fcmp(c,0,c->f[4],c->f[0]); // 801B1110
  if (!crb(c,1)) { goto L_801B1120; } // 801B1114
L_801B1118:;
  c->r[3]=0u+0x00000000u; // 801B1118
  goto L_801B13A4; // 801B111C
L_801B1120:;
  c->r[0]=R32(c->r[3]+0x0000011Cu); // 801B1120
  cmpu(c,0,c->r[0],0x00000006u); // 801B1124
  if (crb(c,0)) { goto L_801B1134; } // 801B1128
  c->r[3]=0u+0x00000000u; // 801B112C
  goto L_801B13A4; // 801B1130
L_801B1134:;
  {uint32_t ea=c->r[3]+0x00000120u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B1134
  fcmp(c,0,c->f[0],c->f[2]); // 801B1138
  if (!crb(c,0)) { goto L_801B1148; } // 801B113C
  c->r[3]=0u+0x00000000u; // 801B1140
  goto L_801B13A4; // 801B1144
L_801B1148:;
  {uint32_t ea=c->r[3]+0x00000124u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B1148
  fcmp(c,0,c->f[0],c->f[2]); // 801B114C
  if (crb(c,0)) { goto L_801B1160; } // 801B1150
  {uint32_t ea=c->r[2]+0xFFFFA128u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B1154
  fcmp(c,0,c->f[0],c->f[1]); // 801B1158
  if (!crb(c,1)) { goto L_801B1168; } // 801B115C
L_801B1160:;
  c->r[3]=0u+0x00000000u; // 801B1160
  goto L_801B13A4; // 801B1164
L_801B1168:;
  {uint32_t ea=c->r[3]+0x00000128u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B1168
  fcmp(c,0,c->f[0],c->f[2]); // 801B116C
  if (crb(c,0)) { goto L_801B117C; } // 801B1170
  fcmp(c,0,c->f[0],c->f[1]); // 801B1174
  if (!crb(c,1)) { goto L_801B1184; } // 801B1178
L_801B117C:;
  c->r[3]=0u+0x00000000u; // 801B117C
  goto L_801B13A4; // 801B1180
L_801B1184:;
  {uint32_t ea=c->r[3]+0x0000012Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801B1184
  fcmp(c,0,c->f[0],c->f[2]); // 801B1188
  if (crb(c,0)) { goto L_801B1198; } // 801B118C
  fcmp(c,0,c->f[0],c->f[1]); // 801B1190
  if (!crb(c,1)) { goto L_801B11A0; } // 801B1194
L_801B1198:;
  c->r[3]=0u+0x00000000u; // 801B1198
  goto L_801B13A4; // 801B119C
L_801B11A0:;
  {uint32_t ea=c->r[3]+0x00000130u; c->f[3]=c->ps1[3]=RF32(ea);} // 801B11A0
  fcmp(c,0,c->f[3],c->f[2]); // 801B11A4
  if (crb(c,0)) { goto L_801B11B4; } // 801B11A8
  fcmp(c,0,c->f[3],c->f[1]); // 801B11AC
  if (!crb(c,1)) { goto L_801B11BC; } // 801B11B0
L_801B11B4:;
  c->r[3]=0u+0x00000000u; // 801B11B4
  goto L_801B13A4; // 801B11B8
L_801B11BC:;
  {uint32_t ea=c->r[3]+0x00000134u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B11BC
  fcmp(c,0,c->f[0],c->f[2]); // 801B11C0
  if (crb(c,0)) { goto L_801B11D0; } // 801B11C4
  fcmp(c,0,c->f[0],c->f[1]); // 801B11C8
  if (!crb(c,1)) { goto L_801B11D8; } // 801B11CC
L_801B11D0:;
  c->r[3]=0u+0x00000000u; // 801B11D0
  goto L_801B13A4; // 801B11D4
L_801B11D8:;
  {uint32_t ea=c->r[3]+0x00000140u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B11D8
  fcmp(c,0,c->f[0],c->f[2]); // 801B11DC
  if (crb(c,0)) { goto L_801B11EC; } // 801B11E0
  fcmp(c,0,c->f[0],c->f[1]); // 801B11E4
  if (!crb(c,1)) { goto L_801B11F4; } // 801B11E8
L_801B11EC:;
  c->r[3]=0u+0x00000000u; // 801B11EC
  goto L_801B13A4; // 801B11F0
L_801B11F4:;
  {uint32_t ea=c->r[3]+0x00000144u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B11F4
  fcmp(c,0,c->f[0],c->f[2]); // 801B11F8
  if (crb(c,0)) { goto L_801B1208; } // 801B11FC
  fcmp(c,0,c->f[0],c->f[1]); // 801B1200
  if (!crb(c,1)) { goto L_801B1210; } // 801B1204
L_801B1208:;
  c->r[3]=0u+0x00000000u; // 801B1208
  goto L_801B13A4; // 801B120C
L_801B1210:;
  c->r[8]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 801B1210
  c->r[9]=c->r[31]+0x00000000u; // 801B1214
  {uint32_t ea=c->r[2]+0xFFFFA120u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B1218
  c->r[5]=c->r[31]+0x00000060u; // 801B121C
  {uint32_t ea=c->r[2]+0xFFFFA12Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801B1220
  c->r[27]=0u+0x00000000u; // 801B1224
  c->r[7]=c->r[9]+c->r[8]; // 801B1228
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[4]); // 801B122C
  c->r[6]=R32(c->r[7]+0x00000008u); // 801B1230
  c->r[4]=c->r[5]+c->r[8]; // 801B1234
  W32(c->r[3]+0x00000018u,c->r[6]); // 801B1238
  c->r[0]=R32(c->r[9]+c->r[8]); // 801B123C
  c->r[0]=c->r[6]-c->r[0]; // 801B1240
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801B1244
  {uint32_t ea=c->r[5]+c->r[8]; c->f[0]=c->ps1[0]=RF32(ea);} // 801B1248
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 801B124C
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 801B1250
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[0]);} // 801B1254
  c->r[0]=R32(c->r[7]+0x00000004u); // 801B1258
  c->r[0]=c->r[6]-c->r[0]; // 801B125C
  W32(c->r[3]+0x00000010u,c->r[0]); // 801B1260
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B1264
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 801B1268
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 801B126C
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[0]);} // 801B1270
  c->r[0]=R32(c->r[7]+0x00000008u); // 801B1274
  c->r[0]=c->r[6]-c->r[0]; // 801B1278
  W32(c->r[3]+0x00000014u,c->r[0]); // 801B127C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B1280
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 801B1284
  W32(c->r[3]+0x00000038u,c->r[27]); // 801B1288
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 801B128C
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[0]);} // 801B1290
  c->lr=0x801B1298u; f_802078F8(c); // 801B1294
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 801B1298
  c->r[26]=c->r[30]|c->r[30]; // 801B129C
  {uint32_t ea=c->r[2]+0xFFFFA158u; c->f[29]=RF64(ea);} // 801B12A0
  c->r[28]=c->r[31]+0x000000C0u; // 801B12A4
  {uint32_t ea=c->r[2]+0xFFFFA140u; c->f[30]=c->ps1[30]=RF32(ea);} // 801B12A8
  c->r[24]=0u+0x00000000u; // 801B12AC
  {uint32_t ea=c->r[2]+0xFFFFA120u; c->f[31]=c->ps1[31]=RF32(ea);} // 801B12B0
  c->r[25]=0u+0x00000000u; // 801B12B4
  c->r[29]=0u+0x43300000u; // 801B12B8
L_801B12BC:;
  W32(c->r[26]+0x00000068u,c->r[27]); // 801B12BC
  {uint32_t ea=c->r[2]+0xFFFFA148u; c->f[1]=RF64(ea);} // 801B12C0
  c->r[0]=R32(c->r[30]+0x0000011Cu); // 801B12C4
  W32(c->r[1]+0x00000008u,c->r[29]); // 801B12C8
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801B12CC
  c->r[0]=c->r[25]+c->r[0]; // 801B12D0
  c->r[0]=R32(c->r[28]+c->r[0]); // 801B12D4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801B12D8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801B12DC
  W32(c->r[26]+0x00000074u,c->r[0]); // 801B12E0
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[29]); // 801B12E4
  {uint32_t ea=c->r[30]+0x00000120u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B12E8
  c->f[2]=c->ps1[2]=S(c->f[30]*c->f[2]); // 801B12EC
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 801B12F0
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[0]); // 801B12F4
  c->lr=0x801B12FCu; f_80216448(c); // 801B12F8
  c->f[0]=c->ps1[0]=S(c->f[1]); // 801B12FC
  c->r[24]=c->r[24]+0x00000001u; // 801B1300
  cmpu(c,0,c->r[24],0x00000003u); // 801B1304
  c->r[25]=c->r[25]+0x00000004u; // 801B1308
  {uint32_t ea=c->r[26]+0x0000008Cu; WF32(ea,c->f[0]);} // 801B130C
  c->r[26]=c->r[26]+0x00000004u; // 801B1310
  if (crb(c,0)) { IRQCHK(c); goto L_801B12BC; } // 801B1314
  c->r[0]=R32(c->r[30]+0x0000011Cu); // 801B1318
  c->r[4]=0u+0x00000000u; // 801B131C
  W32(c->r[30]+0x000000B0u,c->r[4]); // 801B1320
  c->r[3]=c->r[31]+0x000000C0u; // 801B1324
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801B1328
  {uint32_t ea=c->r[2]+0xFFFFA128u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B132C
  c->r[3]=c->r[3]+c->r[0]; // 801B1330
  {uint32_t ea=c->r[30]+0x00000128u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B1334
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 801B1338
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 801B133C
  {uint32_t ea=c->r[2]+0xFFFFA150u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B1340
  W32(c->r[30]+0x000000B8u,c->r[0]); // 801B1344
  {uint32_t ea=c->r[30]+0x00000124u; c->f[2]=c->ps1[2]=RF32(ea);} // 801B1348
  W32(c->r[30]+0x000000B4u,c->r[4]); // 801B134C
  fcmp(c,0,c->f[1],c->f[0]); // 801B1350
  c->r[0]=R32(c->r[3]+0x00000010u); // 801B1354
  W32(c->r[30]+0x000000BCu,c->r[0]); // 801B1358
  W32(c->r[30]+0x000000D4u,c->r[4]); // 801B135C
  c->r[0]=R32(c->r[3]+0x00000014u); // 801B1360
  W32(c->r[30]+0x000000E0u,c->r[0]); // 801B1364
  W32(c->r[30]+0x000000D8u,c->r[4]); // 801B1368
  c->r[0]=R32(c->r[3]+0x00000018u); // 801B136C
  W32(c->r[30]+0x000000E4u,c->r[0]); // 801B1370
  W32(c->r[30]+0x000000DCu,c->r[4]); // 801B1374
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 801B1378
  W32(c->r[30]+0x000000E8u,c->r[0]); // 801B137C
  {uint32_t ea=c->r[30]+0x000000F8u; WF32(ea,c->f[2]);} // 801B1380
  {uint32_t ea=c->r[30]+0x00000108u; WF32(ea,c->f[1]);} // 801B1384
  if (!crb(c,1)) { goto L_801B1390; } // 801B1388
  {uint32_t ea=c->r[30]+0x00000108u; WF32(ea,c->f[0]);} // 801B138C
L_801B1390:;
  {uint32_t ea=c->r[2]+0xFFFFA124u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B1390
  c->r[3]=0u+0x00000001u; // 801B1394
  {uint32_t ea=c->r[30]+0x000000FCu; WF32(ea,c->f[0]);} // 801B1398
  {uint32_t ea=c->r[30]+0x00000100u; WF32(ea,c->f[0]);} // 801B139C
  {uint32_t ea=c->r[30]+0x00000104u; WF32(ea,c->f[0]);} // 801B13A0
L_801B13A4:;
  c->r[11]=c->r[1]+0x00000030u; // 801B13A4
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 801B13A8
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 801B13AC
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 801B13B0
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 801B13B4
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,29,ea,0,0);} // 801B13B8
  {uint32_t ea=c->r[1]+0x00000030u; c->f[29]=RF64(ea);} // 801B13BC
  c->lr=0x801B13C4u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B13C0
  c->r[0]=R32(c->r[1]+0x00000064u); // 801B13C4
  c->lr=c->r[0]; // 801B13C8
  c->r[1]=c->r[1]+0x00000060u; // 801B13CC
  return; // 801B13D0
}

// fn_801B13E0
void f_801B13E0(Ctx* __restrict c) {
  c->r[4]=c->r[3]|c->r[3]; // 801B13E0
  c->r[3]=R32(c->r[13]+0xFFFFA738u); // 801B13E4
  f_80188550(c); return; // 801B13E8
}

// fn_801B13F0
void f_801B13F0(Ctx* __restrict c) {
  c->r[4]=c->r[3]|c->r[3]; // 801B13F0
  c->r[3]=R32(c->r[13]+0xFFFFA738u); // 801B13F4
  f_80188650(c); return; // 801B13F8
}

// fn_801B1400
void f_801B1400(Ctx* __restrict c) {
  W32(c->r[13]+0xFFFFA8B0u,c->r[3]); // 801B1400
  W32(c->r[13]+0xFFFFA8B4u,c->r[4]); // 801B1404
  return; // 801B1408
}

// fn_801B1410
void f_801B1410(Ctx* __restrict c) {
  c->r[0]=R32(c->r[13]+0xFFFFA8B0u); // 801B1410
  W32(c->r[3]+0x00000000u,c->r[0]); // 801B1414
  c->r[0]=R32(c->r[13]+0xFFFFA8B4u); // 801B1418
  W32(c->r[4]+0x00000000u,c->r[0]); // 801B141C
  return; // 801B1420
}

// FindContainHeap_
void f_801B1430(Ctx* __restrict c) {
  trace_call(0x801B1430u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1430
  c->r[0]=c->lr; // 801B1434
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B1438
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B143C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B1440
  c->r[30]=c->r[3]|c->r[3]; // 801B1444
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B1448
  c->r[29]=0u+0x00000000u; // 801B144C
  W32(c->r[1]+0x00000010u,c->r[28]); // 801B1450
  c->r[28]=c->r[4]|c->r[4]; // 801B1454
  goto L_801B1534; // 801B1458
L_801B145C:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 801B145C
  cmpu(c,0,c->r[0],c->r[28]); // 801B1460
  if (crb(c,1)) { goto L_801B1534; } // 801B1464
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 801B1468
  cmpu(c,0,c->r[28],c->r[0]); // 801B146C
  if (!crb(c,0)) { goto L_801B1534; } // 801B1470
  c->r[31]=0u+0x00000000u; // 801B1474
  goto L_801B1504; // 801B1478
L_801B147C:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 801B147C
  cmpu(c,0,c->r[0],c->r[28]); // 801B1480
  if (crb(c,1)) { goto L_801B1504; } // 801B1484
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 801B1488
  cmpu(c,0,c->r[28],c->r[0]); // 801B148C
  if (!crb(c,0)) { goto L_801B1504; } // 801B1490
  c->r[30]=0u+0x00000000u; // 801B1494
  goto L_801B14D4; // 801B1498
L_801B149C:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 801B149C
  cmpu(c,0,c->r[0],c->r[28]); // 801B14A0
  if (crb(c,1)) { goto L_801B14D4; } // 801B14A4
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 801B14A8
  cmpu(c,0,c->r[28],c->r[0]); // 801B14AC
  if (!crb(c,0)) { goto L_801B14D4; } // 801B14B0
  c->r[4]=c->r[28]|c->r[28]; // 801B14B4
  c->r[3]=c->r[3]+0x0000000Cu; // 801B14B8
  c->lr=0x801B14C0u; f_801B1430(c); // 801B14BC
  cmps(c,0,(int32_t)c->r[3],0); // 801B14C0
  if (crb(c,2)) { goto L_801B14CC; } // 801B14C4
  goto L_801B14F0; // 801B14C8
L_801B14CC:;
  c->r[3]=c->r[30]|c->r[30]; // 801B14CC
  goto L_801B14F0; // 801B14D0
L_801B14D4:;
  c->r[4]=c->r[30]|c->r[30]; // 801B14D4
  c->r[3]=c->r[31]+0x0000000Cu; // 801B14D8
  c->lr=0x801B14E0u; f_801B2560(c); // 801B14DC
  cmps(c,0,(int32_t)c->r[3],0); // 801B14E0
  c->r[30]=c->r[3]|c->r[3]; // 801B14E4
  if (!crb(c,2)) { IRQCHK(c); goto L_801B149C; } // 801B14E8
  c->r[3]=0u+0x00000000u; // 801B14EC
L_801B14F0:;
  cmps(c,0,(int32_t)c->r[3],0); // 801B14F0
  if (crb(c,2)) { goto L_801B14FC; } // 801B14F4
  goto L_801B1520; // 801B14F8
L_801B14FC:;
  c->r[3]=c->r[31]|c->r[31]; // 801B14FC
  goto L_801B1520; // 801B1500
L_801B1504:;
  c->r[4]=c->r[31]|c->r[31]; // 801B1504
  c->r[3]=c->r[29]+0x0000000Cu; // 801B1508
  c->lr=0x801B1510u; f_801B2560(c); // 801B150C
  cmps(c,0,(int32_t)c->r[3],0); // 801B1510
  c->r[31]=c->r[3]|c->r[3]; // 801B1514
  if (!crb(c,2)) { IRQCHK(c); goto L_801B147C; } // 801B1518
  c->r[3]=0u+0x00000000u; // 801B151C
L_801B1520:;
  cmps(c,0,(int32_t)c->r[3],0); // 801B1520
  if (crb(c,2)) { goto L_801B152C; } // 801B1524
  goto L_801B1550; // 801B1528
L_801B152C:;
  c->r[3]=c->r[29]|c->r[29]; // 801B152C
  goto L_801B1550; // 801B1530
L_801B1534:;
  c->r[3]=c->r[30]|c->r[30]; // 801B1534
  c->r[4]=c->r[29]|c->r[29]; // 801B1538
  c->lr=0x801B1540u; f_801B2560(c); // 801B153C
  cmps(c,0,(int32_t)c->r[3],0); // 801B1540
  c->r[29]=c->r[3]|c->r[3]; // 801B1544
  if (!crb(c,2)) { IRQCHK(c); goto L_801B145C; } // 801B1548
  c->r[3]=0u+0x00000000u; // 801B154C
L_801B1550:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B1550
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B1554
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B1558
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B155C
  c->r[28]=R32(c->r[1]+0x00000010u); // 801B1560
  c->lr=c->r[0]; // 801B1564
  c->r[1]=c->r[1]+0x00000020u; // 801B1568
  return; // 801B156C
}

// MEMiInitHeapHead
void f_801B1570(Ctx* __restrict c) {
  trace_call(0x801B1570u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1570
  c->r[0]=c->lr; // 801B1574
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B1578
  c->r[11]=c->r[1]+0x00000020u; // 801B157C
  c->lr=0x801B1584u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B1580
  W32(c->r[3]+0x00000000u,c->r[4]); // 801B1584
  c->r[0]=0u+0x00000000u; // 801B1588
  c->r[0]=(rotl(c->r[7],0)&0x000000FFu)|(c->r[0]&~0x000000FFu); // 801B158C
  c->r[27]=c->r[3]|c->r[3]; // 801B1590
  W32(c->r[3]+0x00000018u,c->r[5]); // 801B1594
  c->r[4]=0u+0x00000004u; // 801B1598
  W32(c->r[3]+0x0000001Cu,c->r[6]); // 801B159C
  W32(c->r[3]+0x00000038u,c->r[0]); // 801B15A0
  c->r[3]=c->r[3]+0x0000000Cu; // 801B15A4
  c->lr=0x801B15ACu; f_801B2460(c); // 801B15A8
  c->r[0]=R32(c->r[13]+0xFFFFB4C0u); // 801B15AC
  cmps(c,0,(int32_t)c->r[0],0); // 801B15B0
  if (!crb(c,2)) { goto L_801B15DC; } // 801B15B4
  c->r[3]=0u+0x802D0000u; // 801B15B8
  c->r[4]=0u+0x00000004u; // 801B15BC
  c->r[3]=c->r[3]+0xFFFFC760u; // 801B15C0
  c->lr=0x801B15C8u; f_801B2460(c); // 801B15C4
  c->r[3]=0u+0x802D0000u; // 801B15C8
  c->r[3]=c->r[3]+0xFFFFC770u; // 801B15CC
  c->lr=0x801B15D4u; f_8018E910(c); // 801B15D0
  c->r[0]=0u+0x00000001u; // 801B15D4
  W32(c->r[13]+0xFFFFB4C0u,c->r[0]); // 801B15D8
L_801B15DC:;
  c->r[3]=c->r[27]+0x00000020u; // 801B15DC
  c->lr=0x801B15E4u; f_8018E910(c); // 801B15E0
  c->r[3]=0u+0x802D0000u; // 801B15E4
  c->r[3]=c->r[3]+0xFFFFC770u; // 801B15E8
  c->lr=0x801B15F0u; f_8018E950(c); // 801B15EC
  c->r[31]=0u+0x802D0000u; // 801B15F0
  c->r[30]=0u+0x00000000u; // 801B15F4
  c->r[28]=c->r[31]+0xFFFFC760u; // 801B15F8
  goto L_801B16D8; // 801B15FC
L_801B1600:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 801B1600
  cmpu(c,0,c->r[0],c->r[27]); // 801B1604
  if (crb(c,1)) { goto L_801B16D8; } // 801B1608
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 801B160C
  cmpu(c,0,c->r[27],c->r[0]); // 801B1610
  if (!crb(c,0)) { goto L_801B16D8; } // 801B1614
  c->r[31]=0u+0x00000000u; // 801B1618
  goto L_801B16A8; // 801B161C
L_801B1620:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 801B1620
  cmpu(c,0,c->r[0],c->r[27]); // 801B1624
  if (crb(c,1)) { goto L_801B16A8; } // 801B1628
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 801B162C
  cmpu(c,0,c->r[27],c->r[0]); // 801B1630
  if (!crb(c,0)) { goto L_801B16A8; } // 801B1634
  c->r[29]=0u+0x00000000u; // 801B1638
  goto L_801B1678; // 801B163C
L_801B1640:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 801B1640
  cmpu(c,0,c->r[0],c->r[27]); // 801B1644
  if (crb(c,1)) { goto L_801B1678; } // 801B1648
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 801B164C
  cmpu(c,0,c->r[27],c->r[0]); // 801B1650
  if (!crb(c,0)) { goto L_801B1678; } // 801B1654
  c->r[4]=c->r[27]|c->r[27]; // 801B1658
  c->r[3]=c->r[3]+0x0000000Cu; // 801B165C
  c->lr=0x801B1664u; f_801B1430(c); // 801B1660
  cmps(c,0,(int32_t)c->r[3],0); // 801B1664
  if (crb(c,2)) { goto L_801B1670; } // 801B1668
  goto L_801B1694; // 801B166C
L_801B1670:;
  c->r[3]=c->r[29]|c->r[29]; // 801B1670
  goto L_801B1694; // 801B1674
L_801B1678:;
  c->r[4]=c->r[29]|c->r[29]; // 801B1678
  c->r[3]=c->r[31]+0x0000000Cu; // 801B167C
  c->lr=0x801B1684u; f_801B2560(c); // 801B1680
  cmps(c,0,(int32_t)c->r[3],0); // 801B1684
  c->r[29]=c->r[3]|c->r[3]; // 801B1688
  if (!crb(c,2)) { IRQCHK(c); goto L_801B1640; } // 801B168C
  c->r[3]=0u+0x00000000u; // 801B1690
L_801B1694:;
  cmps(c,0,(int32_t)c->r[3],0); // 801B1694
  if (crb(c,2)) { goto L_801B16A0; } // 801B1698
  goto L_801B16C4; // 801B169C
L_801B16A0:;
  c->r[3]=c->r[31]|c->r[31]; // 801B16A0
  goto L_801B16C4; // 801B16A4
L_801B16A8:;
  c->r[4]=c->r[31]|c->r[31]; // 801B16A8
  c->r[3]=c->r[30]+0x0000000Cu; // 801B16AC
  c->lr=0x801B16B4u; f_801B2560(c); // 801B16B0
  cmps(c,0,(int32_t)c->r[3],0); // 801B16B4
  c->r[31]=c->r[3]|c->r[3]; // 801B16B8
  if (!crb(c,2)) { IRQCHK(c); goto L_801B1620; } // 801B16BC
  c->r[3]=0u+0x00000000u; // 801B16C0
L_801B16C4:;
  cmps(c,0,(int32_t)c->r[3],0); // 801B16C4
  if (crb(c,2)) { goto L_801B16D0; } // 801B16C8
  goto L_801B16F4; // 801B16CC
L_801B16D0:;
  c->r[3]=c->r[30]|c->r[30]; // 801B16D0
  goto L_801B16F4; // 801B16D4
L_801B16D8:;
  c->r[4]=c->r[30]|c->r[30]; // 801B16D8
  c->r[3]=c->r[31]+0xFFFFC760u; // 801B16DC
  c->lr=0x801B16E4u; f_801B2560(c); // 801B16E0
  cmps(c,0,(int32_t)c->r[3],0); // 801B16E4
  c->r[30]=c->r[3]|c->r[3]; // 801B16E8
  if (!crb(c,2)) { IRQCHK(c); goto L_801B1600; } // 801B16EC
  c->r[3]=0u+0x00000000u; // 801B16F0
L_801B16F4:;
  cmps(c,0,(int32_t)c->r[3],0); // 801B16F4
  if (crb(c,2)) { goto L_801B1700; } // 801B16F8
  c->r[28]=c->r[3]+0x0000000Cu; // 801B16FC
L_801B1700:;
  c->r[3]=c->r[28]|c->r[28]; // 801B1700
  c->r[4]=c->r[27]|c->r[27]; // 801B1704
  c->lr=0x801B170Cu; f_801B2480(c); // 801B1708
  c->r[3]=0u+0x802D0000u; // 801B170C
  c->r[3]=c->r[3]+0xFFFFC770u; // 801B1710
  c->lr=0x801B1718u; f_8018EA30(c); // 801B1714
  c->r[11]=c->r[1]+0x00000020u; // 801B1718
  c->lr=0x801B1720u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B171C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B1720
  c->lr=c->r[0]; // 801B1724
  c->r[1]=c->r[1]+0x00000020u; // 801B1728
  return; // 801B172C
}

// MEMiFinalizeHeap
void f_801B1730(Ctx* __restrict c) {
  trace_call(0x801B1730u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1730
  c->r[0]=c->lr; // 801B1734
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B1738
  c->r[11]=c->r[1]+0x00000020u; // 801B173C
  c->lr=0x801B1744u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B1740
  c->r[4]=0u+0x802D0000u; // 801B1744
  c->r[27]=c->r[3]|c->r[3]; // 801B1748
  c->r[3]=c->r[4]+0xFFFFC770u; // 801B174C
  c->lr=0x801B1754u; f_8018E950(c); // 801B1750
  c->r[31]=0u+0x802D0000u; // 801B1754
  c->r[30]=0u+0x00000000u; // 801B1758
  c->r[28]=c->r[31]+0xFFFFC760u; // 801B175C
  goto L_801B183C; // 801B1760
L_801B1764:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 801B1764
  cmpu(c,0,c->r[0],c->r[27]); // 801B1768
  if (crb(c,1)) { goto L_801B183C; } // 801B176C
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 801B1770
  cmpu(c,0,c->r[27],c->r[0]); // 801B1774
  if (!crb(c,0)) { goto L_801B183C; } // 801B1778
  c->r[31]=0u+0x00000000u; // 801B177C
  goto L_801B180C; // 801B1780
L_801B1784:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 801B1784
  cmpu(c,0,c->r[0],c->r[27]); // 801B1788
  if (crb(c,1)) { goto L_801B180C; } // 801B178C
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 801B1790
  cmpu(c,0,c->r[27],c->r[0]); // 801B1794
  if (!crb(c,0)) { goto L_801B180C; } // 801B1798
  c->r[29]=0u+0x00000000u; // 801B179C
  goto L_801B17DC; // 801B17A0
L_801B17A4:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 801B17A4
  cmpu(c,0,c->r[0],c->r[27]); // 801B17A8
  if (crb(c,1)) { goto L_801B17DC; } // 801B17AC
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 801B17B0
  cmpu(c,0,c->r[27],c->r[0]); // 801B17B4
  if (!crb(c,0)) { goto L_801B17DC; } // 801B17B8
  c->r[4]=c->r[27]|c->r[27]; // 801B17BC
  c->r[3]=c->r[3]+0x0000000Cu; // 801B17C0
  c->lr=0x801B17C8u; f_801B1430(c); // 801B17C4
  cmps(c,0,(int32_t)c->r[3],0); // 801B17C8
  if (crb(c,2)) { goto L_801B17D4; } // 801B17CC
  goto L_801B17F8; // 801B17D0
L_801B17D4:;
  c->r[3]=c->r[29]|c->r[29]; // 801B17D4
  goto L_801B17F8; // 801B17D8
L_801B17DC:;
  c->r[4]=c->r[29]|c->r[29]; // 801B17DC
  c->r[3]=c->r[31]+0x0000000Cu; // 801B17E0
  c->lr=0x801B17E8u; f_801B2560(c); // 801B17E4
  cmps(c,0,(int32_t)c->r[3],0); // 801B17E8
  c->r[29]=c->r[3]|c->r[3]; // 801B17EC
  if (!crb(c,2)) { IRQCHK(c); goto L_801B17A4; } // 801B17F0
  c->r[3]=0u+0x00000000u; // 801B17F4
L_801B17F8:;
  cmps(c,0,(int32_t)c->r[3],0); // 801B17F8
  if (crb(c,2)) { goto L_801B1804; } // 801B17FC
  goto L_801B1828; // 801B1800
L_801B1804:;
  c->r[3]=c->r[31]|c->r[31]; // 801B1804
  goto L_801B1828; // 801B1808
L_801B180C:;
  c->r[4]=c->r[31]|c->r[31]; // 801B180C
  c->r[3]=c->r[30]+0x0000000Cu; // 801B1810
  c->lr=0x801B1818u; f_801B2560(c); // 801B1814
  cmps(c,0,(int32_t)c->r[3],0); // 801B1818
  c->r[31]=c->r[3]|c->r[3]; // 801B181C
  if (!crb(c,2)) { IRQCHK(c); goto L_801B1784; } // 801B1820
  c->r[3]=0u+0x00000000u; // 801B1824
L_801B1828:;
  cmps(c,0,(int32_t)c->r[3],0); // 801B1828
  if (crb(c,2)) { goto L_801B1834; } // 801B182C
  goto L_801B1858; // 801B1830
L_801B1834:;
  c->r[3]=c->r[30]|c->r[30]; // 801B1834
  goto L_801B1858; // 801B1838
L_801B183C:;
  c->r[4]=c->r[30]|c->r[30]; // 801B183C
  c->r[3]=c->r[31]+0xFFFFC760u; // 801B1840
  c->lr=0x801B1848u; f_801B2560(c); // 801B1844
  cmps(c,0,(int32_t)c->r[3],0); // 801B1848
  c->r[30]=c->r[3]|c->r[3]; // 801B184C
  if (!crb(c,2)) { IRQCHK(c); goto L_801B1764; } // 801B1850
  c->r[3]=0u+0x00000000u; // 801B1854
L_801B1858:;
  cmps(c,0,(int32_t)c->r[3],0); // 801B1858
  if (crb(c,2)) { goto L_801B1864; } // 801B185C
  c->r[28]=c->r[3]+0x0000000Cu; // 801B1860
L_801B1864:;
  c->r[3]=c->r[28]|c->r[28]; // 801B1864
  c->r[4]=c->r[27]|c->r[27]; // 801B1868
  c->lr=0x801B1870u; f_801B24F0(c); // 801B186C
  c->r[3]=0u+0x802D0000u; // 801B1870
  c->r[3]=c->r[3]+0xFFFFC770u; // 801B1874
  c->lr=0x801B187Cu; f_8018EA30(c); // 801B1878
  c->r[0]=0u+0x00000000u; // 801B187C
  W32(c->r[27]+0x00000000u,c->r[0]); // 801B1880
  c->r[11]=c->r[1]+0x00000020u; // 801B1884
  c->lr=0x801B188Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B1888
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B188C
  c->lr=c->r[0]; // 801B1890
  c->r[1]=c->r[1]+0x00000020u; // 801B1894
  return; // 801B1898
}

// AllocUsedBlockFromFreeBlock_
void f_801B18A0(Ctx* __restrict c) {
  trace_call(0x801B18A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B18A0
  c->r[0]=c->lr; // 801B18A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B18A8
  c->r[11]=c->r[1]+0x00000020u; // 801B18AC
  c->lr=0x801B18B4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B18B0
  c->r[8]=R32(c->r[4]+0x00000008u); // 801B18B4
  c->r[30]=c->r[6]+c->r[5]; // 801B18B8
  c->r[6]=R16(c->r[4]+0x00000002u); // 801B18BC
  c->r[29]=c->r[5]+0xFFFFFFF0u; // 801B18C0
  c->r[0]=R32(c->r[4]+0x00000004u); // 801B18C4
  cmps(c,0,(int32_t)c->r[8],0); // 801B18C8
  c->r[9]=rotl(c->r[6],24)&0x0000007Fu; // 801B18CC
  c->r[10]=R32(c->r[4]+0x0000000Cu); // 801B18D0
  c->r[6]=c->r[4]+c->r[0]; // 801B18D4
  c->r[27]=c->r[5]|c->r[5]; // 801B18D8
  c->r[26]=c->r[3]|c->r[3]; // 801B18DC
  c->r[28]=c->r[7]|c->r[7]; // 801B18E0
  c->r[31]=c->r[29]|c->r[29]; // 801B18E4
  c->r[5]=c->r[4]-c->r[9]; // 801B18E8
  c->r[6]=c->r[6]+0x00000010u; // 801B18EC
  if (crb(c,2)) { goto L_801B18FC; } // 801B18F0
  W32(c->r[8]+0x0000000Cu,c->r[10]); // 801B18F4
  goto L_801B1900; // 801B18F8
L_801B18FC:;
  W32(c->r[3]+0x00000000u,c->r[10]); // 801B18FC
L_801B1900:;
  cmps(c,0,(int32_t)c->r[10],0); // 801B1900
  if (crb(c,2)) { goto L_801B1910; } // 801B1904
  W32(c->r[10]+0x00000008u,c->r[8]); // 801B1908
  goto L_801B1914; // 801B190C
L_801B1910:;
  W32(c->r[3]+0x00000004u,c->r[8]); // 801B1910
L_801B1914:;
  c->r[0]=c->r[29]-c->r[5]; // 801B1914
  cmpu(c,0,c->r[0],0x00000014u); // 801B1918
  if (crb(c,0)) { goto L_801B1934; } // 801B191C
  cmps(c,0,(int32_t)c->r[7],0); // 801B1920
  if (!crb(c,2)) { goto L_801B193C; } // 801B1924
  c->r[0]=R16(c->r[3]+0x00000012u); // 801B1928
  c->r[0]=rotl(c->r[0],31)&0x00000001u; cr0(c,c->r[0]); // 801B192C
  if (!crb(c,2)) { goto L_801B193C; } // 801B1930
L_801B1934:;
  c->r[31]=c->r[5]|c->r[5]; // 801B1934
  goto L_801B1998; // 801B1938
L_801B193C:;
  c->r[0]=0u+0x00004652u; // 801B193C
  W16(c->r[5]+0x00000000u,c->r[0]); // 801B1940
  c->r[4]=0u+0x00000000u; // 801B1944
  cmps(c,0,(int32_t)c->r[8],0); // 801B1948
  W16(c->r[5]+0x00000002u,c->r[4]); // 801B194C
  c->r[0]=c->r[5]+0x00000010u; // 801B1950
  c->r[0]=c->r[29]-c->r[0]; // 801B1954
  W32(c->r[5]+0x00000004u,c->r[0]); // 801B1958
  W32(c->r[5]+0x0000000Cu,c->r[4]); // 801B195C
  W32(c->r[5]+0x00000008u,c->r[8]); // 801B1960
  if (crb(c,2)) { goto L_801B1974; } // 801B1964
  c->r[4]=R32(c->r[8]+0x0000000Cu); // 801B1968
  W32(c->r[8]+0x0000000Cu,c->r[5]); // 801B196C
  goto L_801B197C; // 801B1970
L_801B1974:;
  c->r[4]=R32(c->r[3]+0x00000000u); // 801B1974
  W32(c->r[3]+0x00000000u,c->r[5]); // 801B1978
L_801B197C:;
  cmps(c,0,(int32_t)c->r[4],0); // 801B197C
  W32(c->r[5]+0x0000000Cu,c->r[4]); // 801B1980
  if (crb(c,2)) { goto L_801B1990; } // 801B1984
  W32(c->r[4]+0x00000008u,c->r[5]); // 801B1988
  goto L_801B1994; // 801B198C
L_801B1990:;
  W32(c->r[3]+0x00000004u,c->r[5]); // 801B1990
L_801B1994:;
  c->r[8]=c->r[5]|c->r[5]; // 801B1994
L_801B1998:;
  c->r[0]=c->r[6]-c->r[30]; // 801B1998
  cmpu(c,0,c->r[0],0x00000014u); // 801B199C
  if (crb(c,0)) { goto L_801B19B8; } // 801B19A0
  cmpu(c,0,c->r[7],0x00000001u); // 801B19A4
  if (!crb(c,2)) { goto L_801B19C0; } // 801B19A8
  c->r[0]=R16(c->r[3]+0x00000012u); // 801B19AC
  c->r[0]=rotl(c->r[0],31)&0x00000001u; cr0(c,c->r[0]); // 801B19B0
  if (!crb(c,2)) { goto L_801B19C0; } // 801B19B4
L_801B19B8:;
  c->r[30]=c->r[6]|c->r[6]; // 801B19B8
  goto L_801B1A18; // 801B19BC
L_801B19C0:;
  c->r[0]=0u+0x00004652u; // 801B19C0
  W16(c->r[30]+0x00000000u,c->r[0]); // 801B19C4
  c->r[4]=0u+0x00000000u; // 801B19C8
  cmps(c,0,(int32_t)c->r[8],0); // 801B19CC
  W16(c->r[30]+0x00000002u,c->r[4]); // 801B19D0
  c->r[0]=c->r[30]+0x00000010u; // 801B19D4
  c->r[0]=c->r[6]-c->r[0]; // 801B19D8
  W32(c->r[30]+0x00000004u,c->r[0]); // 801B19DC
  W32(c->r[30]+0x0000000Cu,c->r[4]); // 801B19E0
  W32(c->r[30]+0x00000008u,c->r[8]); // 801B19E4
  if (crb(c,2)) { goto L_801B19F8; } // 801B19E8
  c->r[4]=R32(c->r[8]+0x0000000Cu); // 801B19EC
  W32(c->r[8]+0x0000000Cu,c->r[30]); // 801B19F0
  goto L_801B1A00; // 801B19F4
L_801B19F8:;
  c->r[4]=R32(c->r[3]+0x00000000u); // 801B19F8
  W32(c->r[3]+0x00000000u,c->r[30]); // 801B19FC
L_801B1A00:;
  cmps(c,0,(int32_t)c->r[4],0); // 801B1A00
  W32(c->r[30]+0x0000000Cu,c->r[4]); // 801B1A04
  if (crb(c,2)) { goto L_801B1A14; } // 801B1A08
  W32(c->r[4]+0x00000008u,c->r[30]); // 801B1A0C
  goto L_801B1A18; // 801B1A10
L_801B1A14:;
  W32(c->r[3]+0x00000004u,c->r[30]); // 801B1A14
L_801B1A18:;
  c->r[0]=R32(c->r[3]+0xFFFFFFFCu); // 801B1A18
  c->r[5]=c->r[30]-c->r[31]; // 801B1A1C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801B1A20
  if (crb(c,2)) { goto L_801B1A34; } // 801B1A24
  c->r[3]=c->r[31]|c->r[31]; // 801B1A28
  c->r[4]=0u+0x00000000u; // 801B1A2C
  c->lr=0x801B1A34u; f_800046B4(c); // 801B1A30
L_801B1A34:;
  c->r[5]=0u+0x00000000u; // 801B1A34
  c->r[4]=c->r[29]+0x00000010u; // 801B1A38
  c->r[3]=c->r[5]|c->r[5]; // 801B1A3C
  c->r[6]=0u+0x00005544u; // 801B1A40
  c->r[4]=c->r[30]-c->r[4]; // 801B1A44
  c->r[0]=c->r[29]-c->r[31]; // 801B1A48
  c->r[3]=(rotl(c->r[28],15)&0x00008000u)|(c->r[3]&~0x00008000u); // 801B1A4C
  W16(c->r[29]+0x00000000u,c->r[6]); // 801B1A50
  c->r[3]=(rotl(c->r[0],8)&0x00007F00u)|(c->r[3]&~0x00007F00u); // 801B1A54
  W32(c->r[29]+0x00000004u,c->r[4]); // 801B1A58
  W32(c->r[29]+0x00000008u,c->r[5]); // 801B1A5C
  W32(c->r[29]+0x0000000Cu,c->r[5]); // 801B1A60
  W16(c->r[29]+0x00000002u,c->r[3]); // 801B1A64
  c->r[0]=R16(c->r[26]+0x00000010u); // 801B1A68
  c->r[3]=(rotl(c->r[0],0)&0x000000FFu)|(c->r[3]&~0x000000FFu); // 801B1A6C
  W16(c->r[29]+0x00000002u,c->r[3]); // 801B1A70
  c->r[4]=R32(c->r[26]+0x0000000Cu); // 801B1A74
  W32(c->r[29]+0x00000008u,c->r[4]); // 801B1A78
  cmps(c,0,(int32_t)c->r[4],0); // 801B1A7C
  if (crb(c,2)) { goto L_801B1A90; } // 801B1A80
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 801B1A84
  W32(c->r[4]+0x0000000Cu,c->r[29]); // 801B1A88
  goto L_801B1A98; // 801B1A8C
L_801B1A90:;
  c->r[3]=R32(c->r[26]+0x00000008u); // 801B1A90
  W32(c->r[26]+0x00000008u,c->r[29]); // 801B1A94
L_801B1A98:;
  cmps(c,0,(int32_t)c->r[3],0); // 801B1A98
  W32(c->r[29]+0x0000000Cu,c->r[3]); // 801B1A9C
  if (crb(c,2)) { goto L_801B1AAC; } // 801B1AA0
  W32(c->r[3]+0x00000008u,c->r[29]); // 801B1AA4
  goto L_801B1AB0; // 801B1AA8
L_801B1AAC:;
  W32(c->r[26]+0x0000000Cu,c->r[29]); // 801B1AAC
L_801B1AB0:;
  c->r[11]=c->r[1]+0x00000020u; // 801B1AB0
  c->r[3]=c->r[27]|c->r[27]; // 801B1AB4
  c->lr=0x801B1ABCu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B1AB8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B1ABC
  c->lr=c->r[0]; // 801B1AC0
  c->r[1]=c->r[1]+0x00000020u; // 801B1AC4
  return; // 801B1AC8
}

// AllocFromHead_
void f_801B1AD0(Ctx* __restrict c) {
  trace_call(0x801B1AD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1AD0
  c->r[0]=c->lr; // 801B1AD4
  c->r[3]=c->r[3]+0x0000003Cu; // 801B1AD8
  c->r[6]=c->r[4]|c->r[4]; // 801B1ADC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B1AE0
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 801B1AE4
  c->r[9]=~(c->r[0]|c->r[0]); // 801B1AE8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B1AEC
  c->r[31]=0u+0x00000000u; // 801B1AF0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B1AF4
  c->r[30]=0u+0xFFFFFFFFu; // 801B1AF8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B1AFC
  c->r[29]=0u+0x00000000u; // 801B1B00
  c->r[7]=R16(c->r[3]+0x00000012u); // 801B1B04
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B1B08
  c->r[0]=rotl(c->r[7],0)&0x00000001u; // 801B1B0C
  c->r[0]=cntlz(c->r[0]); // 801B1B10
  c->r[11]=rotl(c->r[0],27)&0x07FFFFFFu; // 801B1B14
  goto L_801B1B68; // 801B1B18
L_801B1B1C:;
  c->r[8]=c->r[12]+0x00000010u; // 801B1B1C
  c->r[10]=R32(c->r[12]+0x00000004u); // 801B1B20
  c->r[7]=c->r[5]+c->r[8]; // 801B1B24
  c->r[0]=c->r[7]+0xFFFFFFFFu; // 801B1B28
  c->r[7]=c->r[9]&c->r[0]; // 801B1B2C
  c->r[0]=c->r[7]-c->r[8]; // 801B1B30
  c->r[0]=c->r[4]+c->r[0]; // 801B1B34
  cmpu(c,0,c->r[10],c->r[0]); // 801B1B38
  if (crb(c,0)) { goto L_801B1B64; } // 801B1B3C
  cmpu(c,0,c->r[30],c->r[10]); // 801B1B40
  if (!crb(c,1)) { goto L_801B1B64; } // 801B1B44
  cmps(c,0,(int32_t)c->r[11],0); // 801B1B48
  c->r[31]=c->r[12]|c->r[12]; // 801B1B4C
  c->r[30]=c->r[10]|c->r[10]; // 801B1B50
  c->r[29]=c->r[7]|c->r[7]; // 801B1B54
  if (!crb(c,2)) { goto L_801B1B70; } // 801B1B58
  cmpu(c,0,c->r[10],c->r[4]); // 801B1B5C
  if (crb(c,2)) { goto L_801B1B70; } // 801B1B60
L_801B1B64:;
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801B1B64
L_801B1B68:;
  cmps(c,0,(int32_t)c->r[12],0); // 801B1B68
  if (!crb(c,2)) { IRQCHK(c); goto L_801B1B1C; } // 801B1B6C
L_801B1B70:;
  cmps(c,0,(int32_t)c->r[31],0); // 801B1B70
  if (crb(c,2)) { goto L_801B1B8C; } // 801B1B74
  c->r[4]=c->r[31]|c->r[31]; // 801B1B78
  c->r[5]=c->r[29]|c->r[29]; // 801B1B7C
  c->r[7]=0u+0x00000000u; // 801B1B80
  c->lr=0x801B1B88u; f_801B18A0(c); // 801B1B84
  goto L_801B1B90; // 801B1B88
L_801B1B8C:;
  c->r[3]=0u+0x00000000u; // 801B1B8C
L_801B1B90:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B1B90
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B1B94
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B1B98
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B1B9C
  c->lr=c->r[0]; // 801B1BA0
  c->r[1]=c->r[1]+0x00000020u; // 801B1BA4
  return; // 801B1BA8
}

// AllocFromTail_
void f_801B1BB0(Ctx* __restrict c) {
  trace_call(0x801B1BB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1BB0
  c->r[0]=c->lr; // 801B1BB4
  c->r[3]=c->r[3]+0x0000003Cu; // 801B1BB8
  c->r[6]=c->r[4]|c->r[4]; // 801B1BBC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B1BC0
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 801B1BC4
  c->r[8]=~(c->r[0]|c->r[0]); // 801B1BC8
  c->r[12]=0u+0x00000000u; // 801B1BCC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B1BD0
  c->r[31]=0u+0xFFFFFFFFu; // 801B1BD4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B1BD8
  c->r[5]=R16(c->r[3]+0x00000012u); // 801B1BDC
  c->r[11]=R32(c->r[3]+0x00000004u); // 801B1BE0
  c->r[0]=rotl(c->r[5],0)&0x00000001u; // 801B1BE4
  c->r[5]=0u+0x00000000u; // 801B1BE8
  c->r[0]=cntlz(c->r[0]); // 801B1BEC
  c->r[10]=rotl(c->r[0],27)&0x07FFFFFFu; // 801B1BF0
  goto L_801B1C3C; // 801B1BF4
L_801B1BF8:;
  c->r[9]=R32(c->r[11]+0x00000004u); // 801B1BF8
  c->r[7]=c->r[11]+0x00000010u; // 801B1BFC
  c->r[0]=c->r[9]+c->r[7]; // 801B1C00
  c->r[0]=c->r[0]-c->r[4]; // 801B1C04
  c->r[30]=c->r[8]&c->r[0]; // 801B1C08
  c->r[0]=c->r[30]-c->r[7]; cr0(c,c->r[0]); // 801B1C0C
  if (crb(c,0)) { goto L_801B1C38; } // 801B1C10
  cmpu(c,0,c->r[31],c->r[9]); // 801B1C14
  if (!crb(c,1)) { goto L_801B1C38; } // 801B1C18
  cmps(c,0,(int32_t)c->r[10],0); // 801B1C1C
  c->r[12]=c->r[11]|c->r[11]; // 801B1C20
  c->r[31]=c->r[9]|c->r[9]; // 801B1C24
  c->r[5]=c->r[30]|c->r[30]; // 801B1C28
  if (!crb(c,2)) { goto L_801B1C44; } // 801B1C2C
  cmpu(c,0,c->r[9],c->r[4]); // 801B1C30
  if (crb(c,2)) { goto L_801B1C44; } // 801B1C34
L_801B1C38:;
  c->r[11]=R32(c->r[11]+0x00000008u); // 801B1C38
L_801B1C3C:;
  cmps(c,0,(int32_t)c->r[11],0); // 801B1C3C
  if (!crb(c,2)) { IRQCHK(c); goto L_801B1BF8; } // 801B1C40
L_801B1C44:;
  cmps(c,0,(int32_t)c->r[12],0); // 801B1C44
  if (crb(c,2)) { goto L_801B1C5C; } // 801B1C48
  c->r[4]=c->r[12]|c->r[12]; // 801B1C4C
  c->r[7]=0u+0x00000001u; // 801B1C50
  c->lr=0x801B1C58u; f_801B18A0(c); // 801B1C54
  goto L_801B1C60; // 801B1C58
L_801B1C5C:;
  c->r[3]=0u+0x00000000u; // 801B1C5C
L_801B1C60:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B1C60
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B1C64
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B1C68
  c->lr=c->r[0]; // 801B1C6C
  c->r[1]=c->r[1]+0x00000010u; // 801B1C70
  return; // 801B1C74
}

// RecycleRegion_
void f_801B1C80(Ctx* __restrict c) {
  trace_call(0x801B1C80u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1C80
  c->r[8]=0u+0x00000000u; // 801B1C84
  c->r[5]=R32(c->r[4]+0x00000000u); // 801B1C88
  c->r[0]=R32(c->r[4]+0x00000004u); // 801B1C8C
  W32(c->r[1]+0x00000008u,c->r[5]); // 801B1C90
  c->r[6]=R32(c->r[3]+0x00000000u); // 801B1C94
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801B1C98
  goto L_801B1D08; // 801B1C9C
L_801B1CA0:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 801B1CA0
  cmpu(c,0,c->r[6],c->r[0]); // 801B1CA4
  if (!crb(c,0)) { goto L_801B1CB4; } // 801B1CA8
  c->r[8]=c->r[6]|c->r[6]; // 801B1CAC
  goto L_801B1D04; // 801B1CB0
L_801B1CB4:;
  c->r[0]=R32(c->r[4]+0x00000004u); // 801B1CB4
  cmpu(c,0,c->r[6],c->r[0]); // 801B1CB8
  if (!crb(c,2)) { goto L_801B1D10; } // 801B1CBC
  c->r[0]=R32(c->r[6]+0x00000004u); // 801B1CC0
  c->r[7]=R32(c->r[6]+0x00000008u); // 801B1CC4
  c->r[5]=c->r[6]+c->r[0]; // 801B1CC8
  c->r[6]=R32(c->r[6]+0x0000000Cu); // 801B1CCC
  c->r[0]=c->r[5]+0x00000010u; // 801B1CD0
  cmps(c,0,(int32_t)c->r[7],0); // 801B1CD4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801B1CD8
  if (crb(c,2)) { goto L_801B1CE8; } // 801B1CDC
  W32(c->r[7]+0x0000000Cu,c->r[6]); // 801B1CE0
  goto L_801B1CEC; // 801B1CE4
L_801B1CE8:;
  W32(c->r[3]+0x00000000u,c->r[6]); // 801B1CE8
L_801B1CEC:;
  cmps(c,0,(int32_t)c->r[6],0); // 801B1CEC
  if (crb(c,2)) { goto L_801B1CFC; } // 801B1CF0
  W32(c->r[6]+0x00000008u,c->r[7]); // 801B1CF4
  goto L_801B1D10; // 801B1CF8
L_801B1CFC:;
  W32(c->r[3]+0x00000004u,c->r[7]); // 801B1CFC
  goto L_801B1D10; // 801B1D00
L_801B1D04:;
  c->r[6]=R32(c->r[6]+0x0000000Cu); // 801B1D04
L_801B1D08:;
  cmps(c,0,(int32_t)c->r[6],0); // 801B1D08
  if (!crb(c,2)) { IRQCHK(c); goto L_801B1CA0; } // 801B1D0C
L_801B1D10:;
  cmps(c,0,(int32_t)c->r[8],0); // 801B1D10
  if (crb(c,2)) { goto L_801B1D68; } // 801B1D14
  c->r[5]=R32(c->r[8]+0x00000004u); // 801B1D18
  c->r[0]=R32(c->r[4]+0x00000000u); // 801B1D1C
  c->r[4]=c->r[8]+c->r[5]; // 801B1D20
  c->r[4]=c->r[4]+0x00000010u; // 801B1D24
  cmpu(c,0,c->r[4],c->r[0]); // 801B1D28
  if (!crb(c,2)) { goto L_801B1D68; } // 801B1D2C
  c->r[5]=R32(c->r[8]+0x00000008u); // 801B1D30
  W32(c->r[1]+0x00000008u,c->r[8]); // 801B1D34
  cmps(c,0,(int32_t)c->r[5],0); // 801B1D38
  c->r[4]=R32(c->r[8]+0x0000000Cu); // 801B1D3C
  if (crb(c,2)) { goto L_801B1D4C; } // 801B1D40
  W32(c->r[5]+0x0000000Cu,c->r[4]); // 801B1D44
  goto L_801B1D50; // 801B1D48
L_801B1D4C:;
  W32(c->r[3]+0x00000000u,c->r[4]); // 801B1D4C
L_801B1D50:;
  cmps(c,0,(int32_t)c->r[4],0); // 801B1D50
  if (crb(c,2)) { goto L_801B1D60; } // 801B1D54
  W32(c->r[4]+0x00000008u,c->r[5]); // 801B1D58
  goto L_801B1D64; // 801B1D5C
L_801B1D60:;
  W32(c->r[3]+0x00000004u,c->r[5]); // 801B1D60
L_801B1D64:;
  c->r[8]=c->r[5]|c->r[5]; // 801B1D64
L_801B1D68:;
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 801B1D68
  c->r[5]=R32(c->r[1]+0x00000008u); // 801B1D6C
  c->r[0]=c->r[6]-c->r[5]; // 801B1D70
  cmpu(c,0,c->r[0],0x00000010u); // 801B1D74
  if (!crb(c,0)) { goto L_801B1D84; } // 801B1D78
  c->r[3]=0u+0x00000000u; // 801B1D7C
  goto L_801B1DE0; // 801B1D80
L_801B1D84:;
  c->r[0]=0u+0x00004652u; // 801B1D84
  W16(c->r[5]+0x00000000u,c->r[0]); // 801B1D88
  c->r[4]=0u+0x00000000u; // 801B1D8C
  cmps(c,0,(int32_t)c->r[8],0); // 801B1D90
  W16(c->r[5]+0x00000002u,c->r[4]); // 801B1D94
  c->r[0]=c->r[5]+0x00000010u; // 801B1D98
  c->r[0]=c->r[6]-c->r[0]; // 801B1D9C
  W32(c->r[5]+0x00000004u,c->r[0]); // 801B1DA0
  W32(c->r[5]+0x0000000Cu,c->r[4]); // 801B1DA4
  W32(c->r[5]+0x00000008u,c->r[8]); // 801B1DA8
  if (crb(c,2)) { goto L_801B1DBC; } // 801B1DAC
  c->r[4]=R32(c->r[8]+0x0000000Cu); // 801B1DB0
  W32(c->r[8]+0x0000000Cu,c->r[5]); // 801B1DB4
  goto L_801B1DC4; // 801B1DB8
L_801B1DBC:;
  c->r[4]=R32(c->r[3]+0x00000000u); // 801B1DBC
  W32(c->r[3]+0x00000000u,c->r[5]); // 801B1DC0
L_801B1DC4:;
  cmps(c,0,(int32_t)c->r[4],0); // 801B1DC4
  W32(c->r[5]+0x0000000Cu,c->r[4]); // 801B1DC8
  if (crb(c,2)) { goto L_801B1DD8; } // 801B1DCC
  W32(c->r[4]+0x00000008u,c->r[5]); // 801B1DD0
  goto L_801B1DDC; // 801B1DD4
L_801B1DD8:;
  W32(c->r[3]+0x00000004u,c->r[5]); // 801B1DD8
L_801B1DDC:;
  c->r[3]=0u+0x00000001u; // 801B1DDC
L_801B1DE0:;
  c->r[1]=c->r[1]+0x00000010u; // 801B1DE0
  return; // 801B1DE4
}

// MEMCreateExpHeapEx
void f_801B1DF0(Ctx* __restrict c) {
  trace_call(0x801B1DF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1DF0
  c->r[0]=c->lr; // 801B1DF4
  c->r[4]=c->r[4]+c->r[3]; // 801B1DF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B1DFC
  c->r[0]=c->r[3]+0x00000003u; // 801B1E00
  c->r[6]=rotl(c->r[4],0)&0xFFFFFFFCu; // 801B1E04
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B1E08
  c->r[31]=rotl(c->r[0],0)&0xFFFFFFFCu; // 801B1E0C
  cmpu(c,0,c->r[31],c->r[6]); // 801B1E10
  if (crb(c,1)) { goto L_801B1E24; } // 801B1E14
  c->r[0]=c->r[6]-c->r[31]; // 801B1E18
  cmpu(c,0,c->r[0],0x00000064u); // 801B1E1C
  if (!crb(c,0)) { goto L_801B1E2C; } // 801B1E20
L_801B1E24:;
  c->r[3]=0u+0x00000000u; // 801B1E24
  goto L_801B1E8C; // 801B1E28
L_801B1E2C:;
  c->r[4]=0u+0x45580000u; // 801B1E2C
  c->r[7]=c->r[5]|c->r[5]; // 801B1E30
  c->r[3]=c->r[31]|c->r[31]; // 801B1E34
  c->r[5]=c->r[31]+0x00000050u; // 801B1E38
  c->r[4]=c->r[4]+0x00005048u; // 801B1E3C
  c->lr=0x801B1E44u; f_801B1570(c); // 801B1E40
  c->r[5]=0u+0x00000000u; // 801B1E44
  W16(c->r[31]+0x0000004Cu,c->r[5]); // 801B1E48
  c->r[4]=0u+0x00004652u; // 801B1E4C
  c->r[3]=c->r[31]|c->r[31]; // 801B1E50
  W16(c->r[31]+0x0000004Eu,c->r[5]); // 801B1E54
  c->r[6]=R32(c->r[31]+0x00000018u); // 801B1E58
  c->r[7]=R32(c->r[31]+0x0000001Cu); // 801B1E5C
  c->r[0]=c->r[6]+0x00000010u; // 801B1E60
  W16(c->r[6]+0x00000000u,c->r[4]); // 801B1E64
  c->r[0]=c->r[7]-c->r[0]; // 801B1E68
  W16(c->r[6]+0x00000002u,c->r[5]); // 801B1E6C
  W32(c->r[6]+0x00000004u,c->r[0]); // 801B1E70
  W32(c->r[6]+0x00000008u,c->r[5]); // 801B1E74
  W32(c->r[6]+0x0000000Cu,c->r[5]); // 801B1E78
  W32(c->r[31]+0x0000003Cu,c->r[6]); // 801B1E7C
  W32(c->r[31]+0x00000040u,c->r[6]); // 801B1E80
  W32(c->r[31]+0x00000044u,c->r[5]); // 801B1E84
  W32(c->r[31]+0x00000048u,c->r[5]); // 801B1E88
L_801B1E8C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B1E8C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B1E90
  c->lr=c->r[0]; // 801B1E94
  c->r[1]=c->r[1]+0x00000010u; // 801B1E98
  return; // 801B1E9C
}

// MEMDestroyExpHeap
void f_801B1EA0(Ctx* __restrict c) {
  trace_call(0x801B1EA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1EA0
  c->r[0]=c->lr; // 801B1EA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B1EA8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B1EAC
  c->r[31]=c->r[3]|c->r[3]; // 801B1EB0
  c->lr=0x801B1EB8u; f_801B1730(c); // 801B1EB4
  c->r[3]=c->r[31]|c->r[31]; // 801B1EB8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B1EBC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B1EC0
  c->lr=c->r[0]; // 801B1EC4
  c->r[1]=c->r[1]+0x00000010u; // 801B1EC8
  return; // 801B1ECC
}

// MEMAllocFromExpHeapEx
void f_801B1ED0(Ctx* __restrict c) {
  trace_call(0x801B1ED0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1ED0
  c->r[0]=c->lr; // 801B1ED4
  cmps(c,0,(int32_t)c->r[4],0); // 801B1ED8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B1EDC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B1EE0
  c->r[31]=c->r[5]|c->r[5]; // 801B1EE4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B1EE8
  c->r[30]=c->r[4]|c->r[4]; // 801B1EEC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B1EF0
  c->r[29]=c->r[3]|c->r[3]; // 801B1EF4
  if (!crb(c,2)) { goto L_801B1F00; } // 801B1EF8
  c->r[30]=0u+0x00000001u; // 801B1EFC
L_801B1F00:;
  c->r[0]=R32(c->r[3]+0x00000038u); // 801B1F00
  c->r[4]=c->r[30]+0x00000003u; // 801B1F04
  c->r[30]=rotl(c->r[4],0)&0xFFFFFFFCu; // 801B1F08
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801B1F0C
  if (crb(c,2)) { goto L_801B1F1C; } // 801B1F10
  c->r[3]=c->r[3]+0x00000020u; // 801B1F14
  c->lr=0x801B1F1Cu; f_8018E950(c); // 801B1F18
L_801B1F1C:;
  cmps(c,0,(int32_t)c->r[31],0); // 801B1F1C
  if (crb(c,0)) { goto L_801B1F38; } // 801B1F20
  c->r[3]=c->r[29]|c->r[29]; // 801B1F24
  c->r[4]=c->r[30]|c->r[30]; // 801B1F28
  c->r[5]=c->r[31]|c->r[31]; // 801B1F2C
  c->lr=0x801B1F34u; f_801B1AD0(c); // 801B1F30
  goto L_801B1F48; // 801B1F34
L_801B1F38:;
  c->r[3]=c->r[29]|c->r[29]; // 801B1F38
  c->r[4]=c->r[30]|c->r[30]; // 801B1F3C
  c->r[5]=0u-c->r[31]; // 801B1F40
  c->lr=0x801B1F48u; f_801B1BB0(c); // 801B1F44
L_801B1F48:;
  c->r[0]=R32(c->r[29]+0x00000038u); // 801B1F48
  c->r[31]=c->r[3]|c->r[3]; // 801B1F4C
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801B1F50
  if (crb(c,2)) { goto L_801B1F60; } // 801B1F54
  c->r[3]=c->r[29]+0x00000020u; // 801B1F58
  c->lr=0x801B1F60u; f_8018EA30(c); // 801B1F5C
L_801B1F60:;
  c->r[3]=c->r[31]|c->r[31]; // 801B1F60
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B1F64
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B1F68
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B1F6C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B1F70
  c->lr=c->r[0]; // 801B1F74
  c->r[1]=c->r[1]+0x00000020u; // 801B1F78
  return; // 801B1F7C
}

// MEMFreeToExpHeap
void f_801B1F80(Ctx* __restrict c) {
  trace_call(0x801B1F80u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1F80
  c->r[0]=c->lr; // 801B1F84
  cmps(c,0,(int32_t)c->r[4],0); // 801B1F88
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B1F8C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B1F90
  c->r[31]=c->r[4]|c->r[4]; // 801B1F94
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B1F98
  c->r[30]=c->r[3]|c->r[3]; // 801B1F9C
  if (crb(c,2)) { goto L_801B202C; } // 801B1FA0
  c->r[0]=R32(c->r[3]+0x00000038u); // 801B1FA4
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801B1FA8
  if (crb(c,2)) { goto L_801B1FB8; } // 801B1FAC
  c->r[3]=c->r[3]+0x00000020u; // 801B1FB0
  c->lr=0x801B1FB8u; f_8018E950(c); // 801B1FB4
L_801B1FB8:;
  c->r[0]=R16(c->r[31]+0xFFFFFFF2u); // 801B1FB8
  c->r[6]=c->r[31]+0xFFFFFFF0u; // 801B1FBC
  c->r[3]=c->r[30]+0x0000003Cu; // 801B1FC0
  c->r[0]=rotl(c->r[0],24)&0x0000007Fu; // 801B1FC4
  c->r[0]=c->r[6]-c->r[0]; // 801B1FC8
  W32(c->r[1]+0x00000008u,c->r[0]); // 801B1FCC
  c->r[0]=R32(c->r[31]+0xFFFFFFF4u); // 801B1FD0
  c->r[4]=c->r[6]+c->r[0]; // 801B1FD4
  c->r[0]=c->r[4]+0x00000010u; // 801B1FD8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801B1FDC
  c->r[5]=R32(c->r[31]+0xFFFFFFF8u); // 801B1FE0
  c->r[4]=R32(c->r[31]+0xFFFFFFFCu); // 801B1FE4
  cmps(c,0,(int32_t)c->r[5],0); // 801B1FE8
  if (crb(c,2)) { goto L_801B1FF8; } // 801B1FEC
  W32(c->r[5]+0x0000000Cu,c->r[4]); // 801B1FF0
  goto L_801B1FFC; // 801B1FF4
L_801B1FF8:;
  W32(c->r[3]+0x00000008u,c->r[4]); // 801B1FF8
L_801B1FFC:;
  cmps(c,0,(int32_t)c->r[4],0); // 801B1FFC
  if (crb(c,2)) { goto L_801B200C; } // 801B2000
  W32(c->r[4]+0x00000008u,c->r[5]); // 801B2004
  goto L_801B2010; // 801B2008
L_801B200C:;
  W32(c->r[3]+0x0000000Cu,c->r[5]); // 801B200C
L_801B2010:;
  c->r[4]=c->r[1]+0x00000008u; // 801B2010
  c->lr=0x801B2018u; f_801B1C80(c); // 801B2014
  c->r[0]=R32(c->r[30]+0x00000038u); // 801B2018
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801B201C
  if (crb(c,2)) { goto L_801B202C; } // 801B2020
  c->r[3]=c->r[30]+0x00000020u; // 801B2024
  c->lr=0x801B202Cu; f_8018EA30(c); // 801B2028
L_801B202C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B202C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B2030
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B2034
  c->lr=c->r[0]; // 801B2038
  c->r[1]=c->r[1]+0x00000020u; // 801B203C
  return; // 801B2040
}

// MEMAdjustExpHeap
void f_801B2050(Ctx* __restrict c) {
  trace_call(0x801B2050u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2050
  c->r[0]=c->lr; // 801B2054
  c->r[5]=sraw(c,c->r[4],31); // 801B2058
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B205C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B2060
  c->r[31]=c->r[5]^c->r[4]; // 801B2064
  c->r[31]=c->r[31]-c->r[5]; // 801B2068
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B206C
  c->r[30]=c->r[3]|c->r[3]; // 801B2070
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B2074
  c->r[0]=R32(c->r[3]+0x00000038u); // 801B2078
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801B207C
  if (crb(c,2)) { goto L_801B208C; } // 801B2080
  c->r[3]=c->r[3]+0x00000020u; // 801B2084
  c->lr=0x801B208Cu; f_8018E950(c); // 801B2088
L_801B208C:;
  c->r[0]=c->r[31]+0xFFFFFFFFu; // 801B208C
  c->r[6]=R32(c->r[30]+0x0000003Cu); // 801B2090
  c->r[4]=~(c->r[0]|c->r[0]); // 801B2094
  c->r[29]=0u+0x00000000u; // 801B2098
  c->r[7]=0u+0xFFFFFFFFu; // 801B209C
  goto L_801B20EC; // 801B20A0
L_801B20A4:;
  c->r[5]=c->r[6]+0x00000010u; // 801B20A4
  c->r[0]=R32(c->r[6]+0x00000004u); // 801B20A8
  c->r[3]=c->r[31]+c->r[5]; // 801B20AC
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801B20B0
  c->r[0]=c->r[0]+c->r[5]; // 801B20B4
  c->r[3]=c->r[4]&c->r[3]; // 801B20B8
  cmpu(c,0,c->r[3],c->r[0]); // 801B20BC
  if (!crb(c,0)) { goto L_801B20E8; } // 801B20C0
  c->r[0]=c->r[0]-c->r[3]; // 801B20C4
  c->r[3]=c->r[3]-c->r[5]; // 801B20C8
  cmpu(c,0,c->r[29],c->r[0]); // 801B20CC
  if (crb(c,0)) { goto L_801B20E0; } // 801B20D0
  if (!crb(c,2)) { goto L_801B20E8; } // 801B20D4
  cmpu(c,0,c->r[7],c->r[3]); // 801B20D8
  if (!crb(c,1)) { goto L_801B20E8; } // 801B20DC
L_801B20E0:;
  c->r[29]=c->r[0]|c->r[0]; // 801B20E0
  c->r[7]=c->r[3]|c->r[3]; // 801B20E4
L_801B20E8:;
  c->r[6]=R32(c->r[6]+0x0000000Cu); // 801B20E8
L_801B20EC:;
  cmps(c,0,(int32_t)c->r[6],0); // 801B20EC
  if (!crb(c,2)) { IRQCHK(c); goto L_801B20A4; } // 801B20F0
  c->r[0]=R32(c->r[30]+0x00000038u); // 801B20F4
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801B20F8
  if (crb(c,2)) { goto L_801B2108; } // 801B20FC
  c->r[3]=c->r[30]+0x00000020u; // 801B2100
  c->lr=0x801B2108u; f_8018EA30(c); // 801B2104
L_801B2108:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B2108
  c->r[3]=c->r[29]|c->r[29]; // 801B210C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B2110
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B2114
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B2118
  c->lr=c->r[0]; // 801B211C
  c->r[1]=c->r[1]+0x00000020u; // 801B2120
  return; // 801B2124
}

// fn_801B2130
void f_801B2130(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2130
  c->r[0]=c->lr; // 801B2134
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B2138
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B213C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B2140
  c->r[30]=c->r[4]|c->r[4]; // 801B2144
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B2148
  c->r[29]=c->r[3]|c->r[3]; // 801B214C
  c->lr=0x801B2154u; f_8018D6A0(c); // 801B2150
  c->r[31]=R16(c->r[29]+0x0000004Cu); // 801B2154
  W16(c->r[29]+0x0000004Cu,c->r[30]); // 801B2158
  c->lr=0x801B2160u; f_8018D6E0(c); // 801B215C
  c->r[3]=c->r[31]|c->r[31]; // 801B2160
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B2164
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B2168
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B216C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B2170
  c->lr=c->r[0]; // 801B2174
  c->r[1]=c->r[1]+0x00000020u; // 801B2178
  return; // 801B217C
}

// MEMCreateFrmHeapEx
void f_801B2180(Ctx* __restrict c) {
  trace_call(0x801B2180u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2180
  c->r[0]=c->lr; // 801B2184
  c->r[4]=c->r[4]+c->r[3]; // 801B2188
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B218C
  c->r[0]=c->r[3]+0x00000003u; // 801B2190
  c->r[6]=rotl(c->r[4],0)&0xFFFFFFFCu; // 801B2194
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B2198
  c->r[31]=rotl(c->r[0],0)&0xFFFFFFFCu; // 801B219C
  cmpu(c,0,c->r[31],c->r[6]); // 801B21A0
  if (crb(c,1)) { goto L_801B21B4; } // 801B21A4
  c->r[0]=c->r[6]-c->r[31]; // 801B21A8
  cmpu(c,0,c->r[0],0x00000048u); // 801B21AC
  if (!crb(c,0)) { goto L_801B21BC; } // 801B21B0
L_801B21B4:;
  c->r[3]=0u+0x00000000u; // 801B21B4
  goto L_801B21F0; // 801B21B8
L_801B21BC:;
  c->r[4]=0u+0x46520000u; // 801B21BC
  c->r[7]=c->r[5]|c->r[5]; // 801B21C0
  c->r[3]=c->r[31]|c->r[31]; // 801B21C4
  c->r[5]=c->r[31]+0x00000048u; // 801B21C8
  c->r[4]=c->r[4]+0x00004D48u; // 801B21CC
  c->lr=0x801B21D4u; f_801B1570(c); // 801B21D0
  c->r[3]=R32(c->r[31]+0x00000018u); // 801B21D4
  c->r[0]=0u+0x00000000u; // 801B21D8
  W32(c->r[31]+0x0000003Cu,c->r[3]); // 801B21DC
  c->r[3]=c->r[31]|c->r[31]; // 801B21E0
  c->r[4]=R32(c->r[31]+0x0000001Cu); // 801B21E4
  W32(c->r[31]+0x00000040u,c->r[4]); // 801B21E8
  W32(c->r[31]+0x00000044u,c->r[0]); // 801B21EC
L_801B21F0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B21F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B21F4
  c->lr=c->r[0]; // 801B21F8
  c->r[1]=c->r[1]+0x00000010u; // 801B21FC
  return; // 801B2200
}

// MEMDestroyFrmHeap
void f_801B2210(Ctx* __restrict c) {
  trace_call(0x801B2210u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2210
  c->r[0]=c->lr; // 801B2214
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B2218
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B221C
  c->r[31]=c->r[3]|c->r[3]; // 801B2220
  c->lr=0x801B2228u; f_801B1730(c); // 801B2224
  c->r[3]=c->r[31]|c->r[31]; // 801B2228
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B222C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B2230
  c->lr=c->r[0]; // 801B2234
  c->r[1]=c->r[1]+0x00000010u; // 801B2238
  return; // 801B223C
}

// MEMAllocFromFrmHeapEx
void f_801B2240(Ctx* __restrict c) {
  trace_call(0x801B2240u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2240
  c->r[0]=c->lr; // 801B2244
  cmps(c,0,(int32_t)c->r[4],0); // 801B2248
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B224C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B2250
  c->r[31]=c->r[3]|c->r[3]; // 801B2254
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B2258
  c->r[30]=c->r[4]|c->r[4]; // 801B225C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B2260
  c->r[29]=c->r[5]|c->r[5]; // 801B2264
  if (!crb(c,2)) { goto L_801B2270; } // 801B2268
  c->r[30]=0u+0x00000001u; // 801B226C
L_801B2270:;
  c->r[0]=R32(c->r[3]+0x00000038u); // 801B2270
  c->r[4]=c->r[30]+0x00000003u; // 801B2274
  c->r[30]=rotl(c->r[4],0)&0xFFFFFFFCu; // 801B2278
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801B227C
  if (crb(c,2)) { goto L_801B228C; } // 801B2280
  c->r[3]=c->r[3]+0x00000020u; // 801B2284
  c->lr=0x801B228Cu; f_8018E950(c); // 801B2288
L_801B228C:;
  cmps(c,0,(int32_t)c->r[29],0); // 801B228C
  if (crb(c,0)) { goto L_801B22E4; } // 801B2290
  c->r[3]=R32(c->r[31]+0x0000003Cu); // 801B2294
  c->r[0]=c->r[29]+0xFFFFFFFFu; // 801B2298
  c->r[5]=~(c->r[0]|c->r[0]); // 801B229C
  c->r[0]=R32(c->r[31]+0x00000040u); // 801B22A0
  c->r[4]=c->r[29]+c->r[3]; // 801B22A4
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 801B22A8
  c->r[29]=c->r[5]&c->r[4]; // 801B22AC
  c->r[30]=c->r[30]+c->r[29]; // 801B22B0
  cmpu(c,0,c->r[30],c->r[0]); // 801B22B4
  if (!crb(c,1)) { goto L_801B22C4; } // 801B22B8
  c->r[29]=0u+0x00000000u; // 801B22BC
  goto L_801B232C; // 801B22C0
L_801B22C4:;
  c->r[0]=R32(c->r[31]+0x00000038u); // 801B22C4
  c->r[5]=c->r[30]-c->r[3]; // 801B22C8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801B22CC
  if (crb(c,2)) { goto L_801B22DC; } // 801B22D0
  c->r[4]=0u+0x00000000u; // 801B22D4
  c->lr=0x801B22DCu; f_800046B4(c); // 801B22D8
L_801B22DC:;
  W32(c->r[31]+0x0000003Cu,c->r[30]); // 801B22DC
  goto L_801B232C; // 801B22E0
L_801B22E4:;
  c->r[5]=R32(c->r[31]+0x00000040u); // 801B22E4
  c->r[0]=addc(c,~c->r[29],0xFFFFFFFFu,1); // 801B22E8
  c->r[4]=~(c->r[0]|c->r[0]); // 801B22EC
  c->r[0]=R32(c->r[31]+0x0000003Cu); // 801B22F0
  c->r[3]=c->r[5]-c->r[30]; // 801B22F4
  c->r[29]=c->r[4]&c->r[3]; // 801B22F8
  cmpu(c,0,c->r[29],c->r[0]); // 801B22FC
  if (!crb(c,0)) { goto L_801B230C; } // 801B2300
  c->r[29]=0u+0x00000000u; // 801B2304
  goto L_801B232C; // 801B2308
L_801B230C:;
  c->r[0]=R32(c->r[31]+0x00000038u); // 801B230C
  c->r[5]=c->r[5]-c->r[29]; // 801B2310
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801B2314
  if (crb(c,2)) { goto L_801B2328; } // 801B2318
  c->r[3]=c->r[29]|c->r[29]; // 801B231C
  c->r[4]=0u+0x00000000u; // 801B2320
  c->lr=0x801B2328u; f_800046B4(c); // 801B2324
L_801B2328:;
  W32(c->r[31]+0x00000040u,c->r[29]); // 801B2328
L_801B232C:;
  c->r[0]=R32(c->r[31]+0x00000038u); // 801B232C
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801B2330
  if (crb(c,2)) { goto L_801B2340; } // 801B2334
  c->r[3]=c->r[31]+0x00000020u; // 801B2338
  c->lr=0x801B2340u; f_8018EA30(c); // 801B233C
L_801B2340:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B2340
  c->r[3]=c->r[29]|c->r[29]; // 801B2344
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B2348
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B234C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B2350
  c->lr=c->r[0]; // 801B2354
  c->r[1]=c->r[1]+0x00000020u; // 801B2358
  return; // 801B235C
}

// MEMFreeToFrmHeap
void f_801B2360(Ctx* __restrict c) {
  trace_call(0x801B2360u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2360
  c->r[0]=c->lr; // 801B2364
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B2368
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B236C
  c->r[31]=c->r[4]|c->r[4]; // 801B2370
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B2374
  c->r[30]=c->r[3]|c->r[3]; // 801B2378
  c->r[0]=R32(c->r[3]+0x00000038u); // 801B237C
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801B2380
  if (crb(c,2)) { goto L_801B2390; } // 801B2384
  c->r[3]=c->r[3]+0x00000020u; // 801B2388
  c->lr=0x801B2390u; f_8018E950(c); // 801B238C
L_801B2390:;
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 801B2390
  if (crb(c,2)) { goto L_801B23A8; } // 801B2394
  c->r[3]=R32(c->r[30]+0x00000018u); // 801B2398
  c->r[0]=0u+0x00000000u; // 801B239C
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 801B23A0
  W32(c->r[30]+0x00000044u,c->r[0]); // 801B23A4
L_801B23A8:;
  c->r[0]=rotl(c->r[31],0)&0x00000002u; cr0(c,c->r[0]); // 801B23A8
  if (crb(c,2)) { goto L_801B23D4; } // 801B23AC
  c->r[3]=R32(c->r[30]+0x00000044u); // 801B23B0
  goto L_801B23C4; // 801B23B4
L_801B23B8:;
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 801B23B8
  W32(c->r[3]+0x00000008u,c->r[0]); // 801B23BC
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 801B23C0
L_801B23C4:;
  cmps(c,0,(int32_t)c->r[3],0); // 801B23C4
  if (!crb(c,2)) { IRQCHK(c); goto L_801B23B8; } // 801B23C8
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 801B23CC
  W32(c->r[30]+0x00000040u,c->r[0]); // 801B23D0
L_801B23D4:;
  c->r[0]=R32(c->r[30]+0x00000038u); // 801B23D4
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801B23D8
  if (crb(c,2)) { goto L_801B23E8; } // 801B23DC
  c->r[3]=c->r[30]+0x00000020u; // 801B23E0
  c->lr=0x801B23E8u; f_8018EA30(c); // 801B23E4
L_801B23E8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B23E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B23EC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B23F0
  c->lr=c->r[0]; // 801B23F4
  c->r[1]=c->r[1]+0x00000010u; // 801B23F8
  return; // 801B23FC
}

// fn_801B2400
void f_801B2400(Ctx* __restrict c) {
  c->r[5]=c->r[3]|c->r[3]; // 801B2400
  c->r[3]=R32(c->r[3]+0x00000004u); // 801B2404
  c->r[5]=R32(c->r[5]+0x00000008u); // 801B2408
  f_801B1ED0(c); return; // 801B240C
}

// fn_801B2410
void f_801B2410(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000004u); // 801B2410
  f_801B1F80(c); return; // 801B2414
}

// fn_801B2420
void f_801B2420(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000000u); // 801B2420
  c->r[12]=R32(c->r[5]+0x00000000u); // 801B2424
  c->ctr=c->r[12]; // 801B2428
  if (true) { dispatch(c,c->ctr); return; } // 801B242C
}

// fn_801B2430
void f_801B2430(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000000u); // 801B2430
  c->r[12]=R32(c->r[5]+0x00000004u); // 801B2434
  c->ctr=c->r[12]; // 801B2438
  if (true) { dispatch(c,c->ctr); return; } // 801B243C
}

// fn_801B2440
void f_801B2440(Ctx* __restrict c) {
  c->r[6]=c->r[2]+0xFFFFA160u; // 801B2440
  c->r[0]=0u+0x00000000u; // 801B2444
  W32(c->r[3]+0x00000000u,c->r[6]); // 801B2448
  W32(c->r[3]+0x00000004u,c->r[4]); // 801B244C
  W32(c->r[3]+0x00000008u,c->r[5]); // 801B2450
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801B2454
  return; // 801B2458
}

// fn_801B2460
void f_801B2460(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 801B2460
  W32(c->r[3]+0x00000000u,c->r[0]); // 801B2464
  W32(c->r[3]+0x00000004u,c->r[0]); // 801B2468
  W16(c->r[3]+0x00000008u,c->r[0]); // 801B246C
  W16(c->r[3]+0x0000000Au,c->r[4]); // 801B2470
  return; // 801B2474
}

// fn_801B2480
void f_801B2480(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000000u); // 801B2480
  cmps(c,0,(int32_t)c->r[0],0); // 801B2484
  if (!crb(c,2)) { goto L_801B24B8; } // 801B2488
  c->r[5]=R16(c->r[3]+0x0000000Au); // 801B248C
  c->r[0]=0u+0x00000000u; // 801B2490
  c->r[5]=c->r[4]+c->r[5]; // 801B2494
  W32(c->r[5]+0x00000004u,c->r[0]); // 801B2498
  W32(c->r[5]+0x00000000u,c->r[0]); // 801B249C
  c->r[5]=R16(c->r[3]+0x00000008u); // 801B24A0
  W32(c->r[3]+0x00000000u,c->r[4]); // 801B24A4
  c->r[0]=c->r[5]+0x00000001u; // 801B24A8
  W32(c->r[3]+0x00000004u,c->r[4]); // 801B24AC
  W16(c->r[3]+0x00000008u,c->r[0]); // 801B24B0
  return; // 801B24B4
L_801B24B8:;
  c->r[6]=R16(c->r[3]+0x0000000Au); // 801B24B8
  c->r[0]=0u+0x00000000u; // 801B24BC
  c->r[5]=R32(c->r[3]+0x00000004u); // 801B24C0
  {uint32_t ea=c->r[6]+c->r[4]; W32(ea,c->r[5]); c->r[6]=ea;} // 801B24C4
  W32(c->r[6]+0x00000004u,c->r[0]); // 801B24C8
  c->r[5]=R32(c->r[3]+0x00000004u); // 801B24CC
  c->r[0]=R16(c->r[3]+0x0000000Au); // 801B24D0
  c->r[5]=c->r[5]+c->r[0]; // 801B24D4
  W32(c->r[5]+0x00000004u,c->r[4]); // 801B24D8
  c->r[5]=R16(c->r[3]+0x00000008u); // 801B24DC
  W32(c->r[3]+0x00000004u,c->r[4]); // 801B24E0
  c->r[0]=c->r[5]+0x00000001u; // 801B24E4
  W16(c->r[3]+0x00000008u,c->r[0]); // 801B24E8
  return; // 801B24EC
}

// fn_801B24F0
void f_801B24F0(Ctx* __restrict c) {
  c->r[0]=R16(c->r[3]+0x0000000Au); // 801B24F0
  c->r[6]=c->r[4]+c->r[0]; // 801B24F4
  c->r[4]=R32(c->r[4]+c->r[0]); // 801B24F8
  cmps(c,0,(int32_t)c->r[4],0); // 801B24FC
  if (!crb(c,2)) { goto L_801B2510; } // 801B2500
  c->r[0]=R32(c->r[6]+0x00000004u); // 801B2504
  W32(c->r[3]+0x00000000u,c->r[0]); // 801B2508
  goto L_801B251C; // 801B250C
L_801B2510:;
  c->r[4]=c->r[4]+c->r[0]; // 801B2510
  c->r[0]=R32(c->r[6]+0x00000004u); // 801B2514
  W32(c->r[4]+0x00000004u,c->r[0]); // 801B2518
L_801B251C:;
  c->r[5]=R32(c->r[6]+0x00000004u); // 801B251C
  cmps(c,0,(int32_t)c->r[5],0); // 801B2520
  if (!crb(c,2)) { goto L_801B2534; } // 801B2524
  c->r[0]=R32(c->r[6]+0x00000000u); // 801B2528
  W32(c->r[3]+0x00000004u,c->r[0]); // 801B252C
  goto L_801B2540; // 801B2530
L_801B2534:;
  c->r[0]=R16(c->r[3]+0x0000000Au); // 801B2534
  c->r[4]=R32(c->r[6]+0x00000000u); // 801B2538
  W32(c->r[5]+c->r[0],c->r[4]); // 801B253C
L_801B2540:;
  c->r[0]=0u+0x00000000u; // 801B2540
  W32(c->r[6]+0x00000000u,c->r[0]); // 801B2544
  W32(c->r[6]+0x00000004u,c->r[0]); // 801B2548
  c->r[4]=R16(c->r[3]+0x00000008u); // 801B254C
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801B2550
  W16(c->r[3]+0x00000008u,c->r[0]); // 801B2554
  return; // 801B2558
}

// fn_801B2560
void f_801B2560(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 801B2560
  if (!crb(c,2)) { goto L_801B2570; } // 801B2564
  c->r[3]=R32(c->r[3]+0x00000000u); // 801B2568
  return; // 801B256C
L_801B2570:;
  c->r[0]=R16(c->r[3]+0x0000000Au); // 801B2570
  c->r[3]=c->r[4]+c->r[0]; // 801B2574
  c->r[3]=R32(c->r[3]+0x00000004u); // 801B2578
  return; // 801B257C
}

// fn_801B2580
void f_801B2580(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000000u); // 801B2580
  c->r[4]=rotl(c->r[5],8)&0x00FF0000u; // 801B2584
  c->r[0]=rotl(c->r[5],24)&0x0000FF00u; // 801B2588
  c->r[4]=(rotl(c->r[5],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 801B258C
  c->r[0]=(rotl(c->r[5],8)&0x000000FFu)|(c->r[0]&~0x000000FFu); // 801B2590
  c->r[0]=c->r[4]|c->r[0]; // 801B2594
  c->r[0]=rotl(c->r[0],24)&0x00FFFFFFu; cr0(c,c->r[0]); // 801B2598
  if (!crb(c,2)) { goto L_801B25B8; } // 801B259C
  c->r[4]=R32(c->r[3]+0x00000004u); // 801B25A0
  c->r[3]=rotl(c->r[4],8)&0x00FF0000u; // 801B25A4
  c->r[0]=rotl(c->r[4],24)&0x0000FF00u; // 801B25A8
  c->r[3]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[3]&~0xFF000000u); // 801B25AC
  c->r[0]=(rotl(c->r[4],8)&0x000000FFu)|(c->r[0]&~0x000000FFu); // 801B25B0
  c->r[0]=c->r[3]|c->r[0]; // 801B25B4
L_801B25B8:;
  c->r[3]=c->r[0]|c->r[0]; // 801B25B8
  return; // 801B25BC
}

// fn_801B25C0
void f_801B25C0(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000000u); // 801B25C0
  c->r[6]=c->r[3]+0x00000004u; // 801B25C4
  c->r[3]=rotl(c->r[5],8)&0x00FF0000u; // 801B25C8
  c->r[0]=rotl(c->r[5],24)&0x0000FF00u; // 801B25CC
  c->r[3]=(rotl(c->r[5],24)&0xFF000000u)|(c->r[3]&~0xFF000000u); // 801B25D0
  c->r[0]=(rotl(c->r[5],8)&0x000000FFu)|(c->r[0]&~0x000000FFu); // 801B25D4
  c->r[0]=c->r[3]|c->r[0]; // 801B25D8
  c->r[5]=rotl(c->r[0],24)&0x00FFFFFFu; cr0(c,c->r[5]); // 801B25DC
  if (!crb(c,2)) { goto L_801B2678; } // 801B25E0
  c->r[5]=R32(c->r[6]+0x00000000u); // 801B25E4
  c->r[6]=c->r[6]+0x00000004u; // 801B25E8
  c->r[3]=rotl(c->r[5],8)&0x00FF0000u; // 801B25EC
  c->r[0]=rotl(c->r[5],24)&0x0000FF00u; // 801B25F0
  c->r[3]=(rotl(c->r[5],24)&0xFF000000u)|(c->r[3]&~0xFF000000u); // 801B25F4
  c->r[0]=(rotl(c->r[5],8)&0x000000FFu)|(c->r[0]&~0x000000FFu); // 801B25F8
  c->r[5]=c->r[3]|c->r[0]; // 801B25FC
  goto L_801B2678; // 801B2600
  c->r[0]=c->r[0]|0x00000000u; // 801B2604
L_801B2608:;
  c->r[3]=R8(c->r[6]+0x00000000u); // 801B2608
  c->r[6]=c->r[6]+0x00000001u; // 801B260C
  c->r[0]=rotl(c->r[3],0)&0x00000080u; cr0(c,c->r[0]); // 801B2610
  c->r[3]=rotl(c->r[3],0)&0x0000007Fu; // 801B2614
  if (!crb(c,2)) { goto L_801B264C; } // 801B2618
  c->r[3]=c->r[3]+0x00000001u; // 801B261C
  cmpu(c,0,c->r[3],c->r[5]); // 801B2620
  if (!crb(c,1)) { goto L_801B262C; } // 801B2624
  c->r[3]=c->r[5]|c->r[5]; // 801B2628
L_801B262C:;
  c->r[5]=c->r[5]-c->r[3]; // 801B262C
L_801B2630:;
  c->r[0]=R8(c->r[6]+0x00000000u); // 801B2630
  c->r[3]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[3]); // 801B2634
  W8(c->r[4]+0x00000000u,c->r[0]); // 801B2638
  c->r[6]=c->r[6]+0x00000001u; // 801B263C
  c->r[4]=c->r[4]+0x00000001u; // 801B2640
  if (!crb(c,2)) { IRQCHK(c); goto L_801B2630; } // 801B2644
  goto L_801B2678; // 801B2648
L_801B264C:;
  c->r[3]=c->r[3]+0x00000003u; // 801B264C
  cmpu(c,0,c->r[3],c->r[5]); // 801B2650
  if (!crb(c,1)) { goto L_801B265C; } // 801B2654
  c->r[3]=c->r[5]|c->r[5]; // 801B2658
L_801B265C:;
  c->r[0]=R8(c->r[6]+0x00000000u); // 801B265C
  c->r[5]=c->r[5]-c->r[3]; // 801B2660
  c->r[6]=c->r[6]+0x00000001u; // 801B2664
L_801B2668:;
  c->r[3]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[3]); // 801B2668
  W8(c->r[4]+0x00000000u,c->r[0]); // 801B266C
  c->r[4]=c->r[4]+0x00000001u; // 801B2670
  if (!crb(c,2)) { IRQCHK(c); goto L_801B2668; } // 801B2674
L_801B2678:;
  cmps(c,0,(int32_t)c->r[5],0); // 801B2678
  if (!crb(c,2)) { IRQCHK(c); goto L_801B2608; } // 801B267C
  return; // 801B2680
}

// fn_801B2690
void f_801B2690(Ctx* __restrict c) {
  c->r[7]=R32(c->r[3]+0x00000000u); // 801B2690
  c->r[8]=c->r[3]+0x00000004u; // 801B2694
  c->r[0]=R8(c->r[3]+0x00000000u); // 801B2698
  c->r[6]=rotl(c->r[7],8)&0x00FF0000u; // 801B269C
  c->r[5]=rotl(c->r[7],24)&0x0000FF00u; // 801B26A0
  c->r[3]=rotl(c->r[0],0)&0x0000000Fu; // 801B26A4
  c->r[0]=0u-c->r[3]; // 801B26A8
  c->r[6]=(rotl(c->r[7],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 801B26AC
  c->r[5]=(rotl(c->r[7],8)&0x000000FFu)|(c->r[5]&~0x000000FFu); // 801B26B0
  c->r[5]=c->r[6]|c->r[5]; // 801B26B4
  c->r[0]=c->r[0]|c->r[3]; // 801B26B8
  c->r[9]=rotl(c->r[5],24)&0x00FFFFFFu; cr0(c,c->r[9]); // 801B26BC
  c->r[7]=rotl(c->r[0],1)&0x00000001u; // 801B26C0
  if (!crb(c,2)) { goto L_801B26E4; } // 801B26C4
  c->r[5]=R32(c->r[8]+0x00000000u); // 801B26C8
  c->r[8]=c->r[8]+0x00000004u; // 801B26CC
  c->r[3]=rotl(c->r[5],8)&0x00FF0000u; // 801B26D0
  c->r[0]=rotl(c->r[5],24)&0x0000FF00u; // 801B26D4
  c->r[3]=(rotl(c->r[5],24)&0xFF000000u)|(c->r[3]&~0xFF000000u); // 801B26D8
  c->r[0]=(rotl(c->r[5],8)&0x000000FFu)|(c->r[0]&~0x000000FFu); // 801B26DC
  c->r[9]=c->r[3]|c->r[0]; // 801B26E0
L_801B26E4:;
  c->r[0]=0u+0x00000008u; // 801B26E4
  goto L_801B27D0; // 801B26E8
  c->r[0]=c->r[0]|0x00000000u; // 801B26EC
L_801B26F0:;
  c->r[10]=R8(c->r[8]+0x00000000u); // 801B26F0
  c->ctr=c->r[0]; // 801B26F4
  c->r[8]=c->r[8]+0x00000001u; // 801B26F8
  c->r[0]=c->r[0]|0x00000000u; // 801B26FC
L_801B2700:;
  c->r[3]=rotl(c->r[10],0)&0x00000080u; cr0(c,c->r[3]); // 801B2700
  if (!crb(c,2)) { goto L_801B2720; } // 801B2704
  c->r[3]=R8(c->r[8]+0x00000000u); // 801B2708
  c->r[8]=c->r[8]+0x00000001u; // 801B270C
  W8(c->r[4]+0x00000000u,c->r[3]); // 801B2710
  c->r[4]=c->r[4]+0x00000001u; // 801B2714
  c->r[9]=c->r[9]+0xFFFFFFFFu; // 801B2718
  goto L_801B27C0; // 801B271C
L_801B2720:;
  c->r[6]=R8(c->r[8]+0x00000000u); // 801B2720
  cmps(c,0,(int32_t)c->r[7],0); // 801B2724
  c->r[11]=sraw(c,c->r[6],4); // 801B2728
  if (!crb(c,2)) { goto L_801B2738; } // 801B272C
  c->r[11]=c->r[11]+0x00000003u; // 801B2730
  goto L_801B2780; // 801B2734
L_801B2738:;
  cmps(c,0,(int32_t)c->r[11],1); // 801B2738
  if (!crb(c,2)) { goto L_801B2760; } // 801B273C
  c->r[5]=R8(c->r[8]+0x00000001u); // 801B2740
  {uint32_t ea=c->r[8]+0x00000002u; c->r[3]=R8(ea); c->r[8]=ea;} // 801B2744
  c->r[11]=rotl(c->r[5],4)&0xFFFFFFF0u; // 801B2748
  c->r[11]=(rotl(c->r[6],12)&0x0000F000u)|(c->r[11]&~0x0000F000u); // 801B274C
  c->r[3]=sraw(c,c->r[3],4); // 801B2750
  c->r[11]=c->r[11]|c->r[3]; // 801B2754
  c->r[11]=c->r[11]+0x00000111u; // 801B2758
  goto L_801B2780; // 801B275C
L_801B2760:;
  cmps(c,0,(int32_t)c->r[11],0); // 801B2760
  if (!crb(c,2)) { goto L_801B277C; } // 801B2764
  {uint32_t ea=c->r[8]+0x00000001u; c->r[3]=R8(ea); c->r[8]=ea;} // 801B2768
  c->r[11]=sraw(c,c->r[3],4); // 801B276C
  c->r[11]=(rotl(c->r[6],4)&0x000000F0u)|(c->r[11]&~0x000000F0u); // 801B2770
  c->r[11]=c->r[11]+0x00000011u; // 801B2774
  goto L_801B2780; // 801B2778
L_801B277C:;
  c->r[11]=c->r[11]+0x00000001u; // 801B277C
L_801B2780:;
  c->r[5]=R8(c->r[8]+0x00000000u); // 801B2780
  cmpu(c,0,c->r[11],c->r[9]); // 801B2784
  c->r[3]=R8(c->r[8]+0x00000001u); // 801B2788
  c->r[8]=c->r[8]+0x00000002u; // 801B278C
  c->r[3]=(rotl(c->r[5],8)&0x00000F00u)|(c->r[3]&~0x00000F00u); // 801B2790
  c->r[5]=c->r[3]+0x00000001u; // 801B2794
  if (!crb(c,1)) { goto L_801B27A0; } // 801B2798
  c->r[11]=c->r[9]|c->r[9]; // 801B279C
L_801B27A0:;
  c->r[9]=c->r[9]-c->r[11]; // 801B27A0
  c->r[0]=c->r[0]|0x00000000u; // 801B27A4
L_801B27A8:;
  c->r[3]=c->r[4]-c->r[5]; // 801B27A8
  c->r[11]=addc(c,c->r[11],0xFFFFFFFFu,0); cr0(c,c->r[11]); // 801B27AC
  c->r[3]=R8(c->r[3]+0x00000000u); // 801B27B0
  W8(c->r[4]+0x00000000u,c->r[3]); // 801B27B4
  c->r[4]=c->r[4]+0x00000001u; // 801B27B8
  if (crb(c,1)) { IRQCHK(c); goto L_801B27A8; } // 801B27BC
L_801B27C0:;
  cmps(c,0,(int32_t)c->r[9],0); // 801B27C0
  if (crb(c,2)) { goto L_801B27D0; } // 801B27C4
  c->r[10]=rotl(c->r[10],1)&0xFFFFFFFEu; // 801B27C8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B2700; } // 801B27CC
L_801B27D0:;
  cmps(c,0,(int32_t)c->r[9],0); // 801B27D0
  if (!crb(c,2)) { IRQCHK(c); goto L_801B26F0; } // 801B27D4
  return; // 801B27D8
}

// fn_801B27E0
void f_801B27E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B27E0
  c->r[0]=c->lr; // 801B27E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B27E8
  c->r[11]=c->r[1]+0x00000020u; // 801B27EC
  c->lr=0x801B27F4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B27F0
  c->r[6]=R32(c->r[3]+0x00000000u); // 801B27F4
  c->r[5]=rotl(c->r[6],8)&0x00FF0000u; // 801B27F8
  c->r[0]=rotl(c->r[6],24)&0x0000FF00u; // 801B27FC
  c->r[5]=(rotl(c->r[6],24)&0xFF000000u)|(c->r[5]&~0xFF000000u); // 801B2800
  c->r[0]=(rotl(c->r[6],8)&0x000000FFu)|(c->r[0]&~0x000000FFu); // 801B2804
  c->r[0]=c->r[5]|c->r[0]; // 801B2808
  c->r[5]=rotl(c->r[0],24)&0x00FFFFFFu; cr0(c,c->r[5]); // 801B280C
  if (crb(c,2)) { goto L_801B281C; } // 801B2810
  c->r[11]=c->r[3]+0x00000004u; // 801B2814
  goto L_801B2820; // 801B2818
L_801B281C:;
  c->r[11]=c->r[3]+0x00000008u; // 801B281C
L_801B2820:;
  c->r[6]=R8(c->r[3]+0x00000000u); // 801B2820
  cmps(c,0,(int32_t)c->r[5],0); // 801B2824
  c->r[0]=c->r[11]+0x00000001u; // 801B2828
  c->r[7]=0u+0x00000000u; // 801B282C
  c->r[8]=rotl(c->r[6],0)&0x00000007u; // 801B2830
  c->r[6]=rotl(c->r[6],0)&0x0000000Fu; // 801B2834
  c->r[9]=c->r[8]+0x00000004u; // 801B2838
  c->r[8]=0u+0x00000000u; // 801B283C
  if (!crb(c,2)) { goto L_801B285C; } // 801B2840
  c->r[10]=R32(c->r[3]+0x00000004u); // 801B2844
  c->r[5]=rotl(c->r[10],8)&0x00FF0000u; // 801B2848
  c->r[3]=rotl(c->r[10],24)&0x0000FF00u; // 801B284C
  c->r[5]=(rotl(c->r[10],24)&0xFF000000u)|(c->r[5]&~0xFF000000u); // 801B2850
  c->r[3]=(rotl(c->r[10],8)&0x000000FFu)|(c->r[3]&~0x000000FFu); // 801B2854
  c->r[5]=c->r[5]|c->r[3]; // 801B2858
L_801B285C:;
  c->r[3]=R8(c->r[11]+0x00000000u); // 801B285C
  c->r[30]=c->r[0]|c->r[0]; // 801B2860
  c->r[12]=addc(c,~c->r[6],0x00000020u,1); // 801B2864
  c->r[3]=c->r[3]+0x00000001u; // 801B2868
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 801B286C
  c->r[31]=c->r[11]+c->r[3]; // 801B2870
  goto L_801B2920; // 801B2874
L_801B2878:;
  c->r[11]=R32(c->r[31]+0x00000000u); // 801B2878
  c->r[29]=0u+0x00000020u; // 801B287C
  c->r[31]=c->r[31]+0x00000004u; // 801B2880
  c->r[10]=rotl(c->r[11],8)&0x00FF0000u; // 801B2884
  c->r[3]=rotl(c->r[11],24)&0x0000FF00u; // 801B2888
  c->r[10]=(rotl(c->r[11],24)&0xFF000000u)|(c->r[10]&~0xFF000000u); // 801B288C
  c->r[3]=(rotl(c->r[11],8)&0x000000FFu)|(c->r[3]&~0x000000FFu); // 801B2890
  c->r[28]=c->r[10]|c->r[3]; // 801B2894
  goto L_801B2918; // 801B2898
L_801B289C:;
  c->r[3]=R8(c->r[30]+0x00000000u); // 801B289C
  c->r[27]=rotl(c->r[28],1)&0x00000001u; // 801B28A0
  c->r[11]=rotl(c->r[30],0)&0xFFFFFFFEu; // 801B28A4
  c->r[30]=((c->r[27])&0x20)?0u:(c->r[3]<<((c->r[27])&31)); // 801B28A8
  c->r[10]=rotl(c->r[3],0)&0x0000003Fu; // 801B28AC
  c->r[3]=rotl(c->r[30],0)&0x00000080u; cr0(c,c->r[3]); // 801B28B0
  c->r[10]=c->r[10]+0x00000001u; // 801B28B4
  c->r[3]=c->r[27]+c->r[11]; // 801B28B8
  c->r[10]=rotl(c->r[10],1)&0xFFFFFFFEu; // 801B28BC
  c->r[30]=c->r[10]+c->r[3]; // 801B28C0
  if (crb(c,2)) { goto L_801B290C; } // 801B28C4
  c->r[3]=R8(c->r[30]+0x00000000u); // 801B28C8
  c->r[8]=c->r[8]+0x00000001u; // 801B28CC
  cmpu(c,0,c->r[8],c->r[9]); // 801B28D0
  c->r[7]=((c->r[6])&0x20)?0u:(c->r[7]>>((c->r[6])&31)); // 801B28D4
  c->r[3]=((c->r[12])&0x20)?0u:(c->r[3]<<((c->r[12])&31)); // 801B28D8
  c->r[30]=c->r[0]|c->r[0]; // 801B28DC
  c->r[7]=c->r[7]|c->r[3]; // 801B28E0
  if (!crb(c,2)) { goto L_801B290C; } // 801B28E4
  c->r[10]=rotl(c->r[7],8)&0x00FF0000u; // 801B28E8
  c->r[3]=rotl(c->r[7],24)&0x0000FF00u; // 801B28EC
  c->r[10]=(rotl(c->r[7],24)&0xFF000000u)|(c->r[10]&~0xFF000000u); // 801B28F0
  c->r[8]=0u+0x00000000u; // 801B28F4
  c->r[3]=(rotl(c->r[7],8)&0x000000FFu)|(c->r[3]&~0x000000FFu); // 801B28F8
  c->r[5]=c->r[5]+0xFFFFFFFCu; // 801B28FC
  c->r[3]=c->r[10]|c->r[3]; // 801B2900
  W32(c->r[4]+0x00000000u,c->r[3]); // 801B2904
  c->r[4]=c->r[4]+0x00000004u; // 801B2908
L_801B290C:;
  cmps(c,0,(int32_t)c->r[5],0); // 801B290C
  if (!crb(c,1)) { goto L_801B2920; } // 801B2910
  c->r[28]=rotl(c->r[28],1)&0xFFFFFFFEu; // 801B2914
L_801B2918:;
  c->r[29]=addc(c,c->r[29],0xFFFFFFFFu,0); cr0(c,c->r[29]); // 801B2918
  if (!crb(c,0)) { IRQCHK(c); goto L_801B289C; } // 801B291C
L_801B2920:;
  cmps(c,0,(int32_t)c->r[5],0); // 801B2920
  if (crb(c,1)) { IRQCHK(c); goto L_801B2878; } // 801B2924
  c->r[11]=c->r[1]+0x00000020u; // 801B2928
  c->lr=0x801B2930u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B292C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B2930
  c->lr=c->r[0]; // 801B2934
  c->r[1]=c->r[1]+0x00000020u; // 801B2938
  return; // 801B293C
}

void hle_DSPCheckMailToDSP(Ctx*);
// DSPCheckMailToDSP
void f_801B2940(Ctx* __restrict c) {
  hle_DSPCheckMailToDSP(c);
}

void hle_DSPCheckMailFromDSP(Ctx*);
// DSPCheckMailFromDSP
void f_801B2950(Ctx* __restrict c) {
  hle_DSPCheckMailFromDSP(c);
}

// DSPReadMailFromDSP
void f_801B2960(Ctx* __restrict c) {
  trace_call(0x801B2960u);
  c->r[3]=0u+0xCC000000u; // 801B2960
  c->r[0]=R16(c->r[3]+0x00005004u); // 801B2964
  c->r[3]=R16(c->r[3]+0x00005006u); // 801B2968
  c->r[3]=(rotl(c->r[0],16)&0xFFFF0000u)|(c->r[3]&~0xFFFF0000u); // 801B296C
  return; // 801B2970
}

void hle_DSPSendMailToDSP(Ctx*);
// DSPSendMailToDSP
void f_801B2980(Ctx* __restrict c) {
  hle_DSPSendMailToDSP(c);
}

// DSPInit
void f_801B29A0(Ctx* __restrict c) {
  trace_call(0x801B29A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B29A0
  c->r[0]=c->lr; // 801B29A4
  c->r[5]=0u+0x80280000u; // 801B29A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B29AC
  c->r[5]=c->r[5]+0xFFFF9E00u; // 801B29B0
  c->r[3]=c->r[5]+0x00000048u; // 801B29B4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B29B8
  c->r[4]=c->r[5]+0x00000068u; // 801B29BC
  c->r[5]=c->r[5]+0x00000074u; // 801B29C0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B29C4
  c->lr=0x801B29CCu; f_801B2BA0(c); // 801B29C8
  c->r[0]=R32(c->r[13]+0xFFFFB4C8u); // 801B29CC
  cmps(c,0,(int32_t)c->r[0],1); // 801B29D0
  if (crb(c,2)) { goto L_801B2A4C; } // 801B29D4
  c->r[3]=R32(c->r[13]+0xFFFFA8B8u); // 801B29D8
  c->lr=0x801B29E0u; f_80187B20(c); // 801B29DC
  c->lr=0x801B29E4u; f_8018D6A0(c); // 801B29E0
  c->r[4]=0u+0x801B0000u; // 801B29E4
  c->r[31]=c->r[3]|c->r[3]; // 801B29E8
  c->r[4]=c->r[4]+0x00002BF0u; // 801B29EC
  c->r[3]=0u+0x00000007u; // 801B29F0
  c->lr=0x801B29F8u; f_8018D710(c); // 801B29F4
  c->r[3]=0u+0x01000000u; // 801B29F8
  c->lr=0x801B2A00u; f_8018DAF0(c); // 801B29FC
  c->r[7]=0u+0xCC000000u; // 801B2A00
  c->r[3]=0u+0xFFFFFF57u; // 801B2A04
  c->r[6]=R16(c->r[7]+0x0000500Au); // 801B2A08
  c->r[5]=0u+0xFFFFFF53u; // 801B2A0C
  c->r[4]=0u+0x00000000u; // 801B2A10
  c->r[0]=0u+0x00000001u; // 801B2A14
  c->r[3]=c->r[6]&c->r[3]; // 801B2A18
  c->r[3]=c->r[3]|0x00000800u; // 801B2A1C
  W16(c->r[7]+0x0000500Au,c->r[3]); // 801B2A20
  c->r[3]=c->r[31]|c->r[31]; // 801B2A24
  c->r[6]=R16(c->r[7]+0x0000500Au); // 801B2A28
  c->r[5]=c->r[6]&c->r[5]; // 801B2A2C
  W16(c->r[7]+0x0000500Au,c->r[5]); // 801B2A30
  W32(c->r[13]+0xFFFFB4D8u,c->r[4]); // 801B2A34
  W32(c->r[13]+0xFFFFB4E4u,c->r[4]); // 801B2A38
  W32(c->r[13]+0xFFFFB4DCu,c->r[4]); // 801B2A3C
  W32(c->r[13]+0xFFFFB4E0u,c->r[4]); // 801B2A40
  W32(c->r[13]+0xFFFFB4C8u,c->r[0]); // 801B2A44
  c->lr=0x801B2A4Cu; f_8018D6E0(c); // 801B2A48
L_801B2A4C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B2A4C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B2A50
  c->lr=c->r[0]; // 801B2A54
  c->r[1]=c->r[1]+0x00000010u; // 801B2A58
  return; // 801B2A5C
}

// DSPCheckInit
void f_801B2A60(Ctx* __restrict c) {
  trace_call(0x801B2A60u);
  c->r[3]=R32(c->r[13]+0xFFFFB4C8u); // 801B2A60
  return; // 801B2A64
}

// DSPAddTask
void f_801B2A70(Ctx* __restrict c) {
  trace_call(0x801B2A70u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2A70
  c->r[0]=c->lr; // 801B2A74
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B2A78
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B2A7C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B2A80
  c->r[30]=c->r[3]|c->r[3]; // 801B2A84
  c->lr=0x801B2A8Cu; f_8018D6A0(c); // 801B2A88
  c->r[31]=c->r[3]|c->r[3]; // 801B2A8C
  c->r[3]=c->r[30]|c->r[30]; // 801B2A90
  c->lr=0x801B2A98u; f_801B3360(c); // 801B2A94
  c->r[0]=0u+0x00000000u; // 801B2A98
  W32(c->r[30]+0x00000000u,c->r[0]); // 801B2A9C
  c->r[0]=0u+0x00000001u; // 801B2AA0
  c->r[3]=c->r[31]|c->r[31]; // 801B2AA4
  W32(c->r[30]+0x00000008u,c->r[0]); // 801B2AA8
  c->lr=0x801B2AB0u; f_8018D6E0(c); // 801B2AAC
  c->r[0]=R32(c->r[13]+0xFFFFB4E0u); // 801B2AB0
  cmpu(c,0,c->r[30],c->r[0]); // 801B2AB4
  if (!crb(c,2)) { goto L_801B2AC4; } // 801B2AB8
  c->r[3]=c->r[30]|c->r[30]; // 801B2ABC
  c->lr=0x801B2AC4u; f_801B31D0(c); // 801B2AC0
L_801B2AC4:;
  c->r[3]=c->r[30]|c->r[30]; // 801B2AC4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B2AC8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B2ACC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B2AD0
  c->lr=c->r[0]; // 801B2AD4
  c->r[1]=c->r[1]+0x00000010u; // 801B2AD8
  return; // 801B2ADC
}

void hle_DSPAssertTask(Ctx*);
// DSPAssertTask
void f_801B2AE0(Ctx* __restrict c) {
  hle_DSPAssertTask(c);
}

// __DSP_debug_printf
void f_801B2BA0(Ctx* __restrict c) {
  trace_call(0x801B2BA0u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2BA0
  if (!crb(c,6)) { goto L_801B2BC8; } // 801B2BA4
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 801B2BA8
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 801B2BAC
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[3]);} // 801B2BB0
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[4]);} // 801B2BB4
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[5]);} // 801B2BB8
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[6]);} // 801B2BBC
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[7]);} // 801B2BC0
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[8]);} // 801B2BC4
L_801B2BC8:;
  W32(c->r[1]+0x00000008u,c->r[3]); // 801B2BC8
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801B2BCC
  W32(c->r[1]+0x00000010u,c->r[5]); // 801B2BD0
  W32(c->r[1]+0x00000014u,c->r[6]); // 801B2BD4
  W32(c->r[1]+0x00000018u,c->r[7]); // 801B2BD8
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 801B2BDC
  W32(c->r[1]+0x00000020u,c->r[9]); // 801B2BE0
  W32(c->r[1]+0x00000024u,c->r[10]); // 801B2BE4
  c->r[1]=c->r[1]+0x00000070u; // 801B2BE8
  return; // 801B2BEC
}

// __DSPHandler
void f_801B2BF0(Ctx* __restrict c) {
  trace_call(0x801B2BF0u);
  {uint32_t ea=c->r[1]+0xFFFFFD20u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2BF0
  c->r[0]=c->lr; // 801B2BF4
  c->r[6]=0u+0xCC000000u; // 801B2BF8
  W32(c->r[1]+0x000002E4u,c->r[0]); // 801B2BFC
  c->r[0]=0u+0xFFFFFFD7u; // 801B2C00
  c->r[3]=c->r[1]+0x00000008u; // 801B2C04
  W32(c->r[1]+0x000002DCu,c->r[31]); // 801B2C08
  c->r[31]=c->r[4]|c->r[4]; // 801B2C0C
  c->r[5]=R16(c->r[6]+0x0000500Au); // 801B2C10
  c->r[0]=c->r[5]&c->r[0]; // 801B2C14
  c->r[0]=c->r[0]|0x00000080u; // 801B2C18
  W16(c->r[6]+0x0000500Au,c->r[0]); // 801B2C1C
  c->lr=0x801B2C24u; f_80189580(c); // 801B2C20
  c->r[3]=c->r[1]+0x00000008u; // 801B2C24
  c->lr=0x801B2C2Cu; f_80189340(c); // 801B2C28
L_801B2C2C:;
  c->lr=0x801B2C30u; f_801B2950(c); // 801B2C2C
  cmps(c,0,(int32_t)c->r[3],0); // 801B2C30
  if (crb(c,2)) { IRQCHK(c); goto L_801B2C2C; } // 801B2C34
  c->lr=0x801B2C3Cu; f_801B2960(c); // 801B2C38
  c->r[4]=R32(c->r[13]+0xFFFFB4E4u); // 801B2C3C
  c->r[0]=R32(c->r[4]+0x00000008u); // 801B2C40
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801B2C44
  if (crb(c,2)) { goto L_801B2C60; } // 801B2C48
  c->r[0]=c->r[3]+0x232F0000u; // 801B2C4C
  cmpu(c,0,c->r[0],0x00000002u); // 801B2C50
  if (!crb(c,2)) { goto L_801B2C60; } // 801B2C54
  c->r[3]=0u+0xDCD10000u; // 801B2C58
  c->r[3]=c->r[3]+0x00000003u; // 801B2C5C
L_801B2C60:;
  c->r[0]=c->r[3]+0x232F0000u; // 801B2C60
  cmpu(c,0,c->r[0],0x00000000u); // 801B2C64
  if (crb(c,2)) { goto L_801B2C90; } // 801B2C68
  cmpu(c,0,c->r[0],0x00000001u); // 801B2C6C
  if (crb(c,2)) { goto L_801B2CB4; } // 801B2C70
  cmpu(c,0,c->r[0],0x00000002u); // 801B2C74
  if (crb(c,2)) { goto L_801B2CD8; } // 801B2C78
  cmpu(c,0,c->r[0],0x00000003u); // 801B2C7C
  if (crb(c,2)) { goto L_801B2E40; } // 801B2C80
  cmpu(c,0,c->r[0],0x00000004u); // 801B2C84
  if (crb(c,2)) { goto L_801B2FE0; } // 801B2C88
  goto L_801B2FF8; // 801B2C8C
L_801B2C90:;
  c->r[0]=0u+0x00000001u; // 801B2C90
  W32(c->r[4]+0x00000000u,c->r[0]); // 801B2C94
  c->r[3]=R32(c->r[13]+0xFFFFB4E4u); // 801B2C98
  c->r[12]=R32(c->r[3]+0x00000028u); // 801B2C9C
  cmps(c,0,(int32_t)c->r[12],0); // 801B2CA0
  if (crb(c,2)) { goto L_801B2FF8; } // 801B2CA4
  c->ctr=c->r[12]; // 801B2CA8
  if (true) { c->lr=0x801B2CB0u; dispatch(c,c->ctr); } // 801B2CAC
  goto L_801B2FF8; // 801B2CB0
L_801B2CB4:;
  c->r[0]=0u+0x00000001u; // 801B2CB4
  W32(c->r[4]+0x00000000u,c->r[0]); // 801B2CB8
  c->r[3]=R32(c->r[13]+0xFFFFB4E4u); // 801B2CBC
  c->r[12]=R32(c->r[3]+0x0000002Cu); // 801B2CC0
  cmps(c,0,(int32_t)c->r[12],0); // 801B2CC4
  if (crb(c,2)) { goto L_801B2FF8; } // 801B2CC8
  c->ctr=c->r[12]; // 801B2CCC
  if (true) { c->lr=0x801B2CD4u; dispatch(c,c->ctr); } // 801B2CD0
  goto L_801B2FF8; // 801B2CD4
L_801B2CD8:;
  c->r[0]=R32(c->r[13]+0xFFFFB4D0u); // 801B2CD8
  cmps(c,0,(int32_t)c->r[0],0); // 801B2CDC
  if (crb(c,2)) { goto L_801B2D78; } // 801B2CE0
  c->r[0]=R32(c->r[13]+0xFFFFB4D4u); // 801B2CE4
  cmpu(c,0,c->r[4],c->r[0]); // 801B2CE8
  if (!crb(c,2)) { goto L_801B2D30; } // 801B2CEC
  c->r[3]=0u+0xCDD10000u; // 801B2CF0
  c->r[3]=c->r[3]+0x00000003u; // 801B2CF4
  c->lr=0x801B2CFCu; f_801B2980(c); // 801B2CF8
L_801B2CFC:;
  c->lr=0x801B2D00u; f_801B2940(c); // 801B2CFC
  cmps(c,0,(int32_t)c->r[3],0); // 801B2D00
  if (!crb(c,2)) { IRQCHK(c); goto L_801B2CFC; } // 801B2D04
  c->r[0]=0u+0x00000000u; // 801B2D08
  W32(c->r[13]+0xFFFFB4D4u,c->r[0]); // 801B2D0C
  c->r[3]=R32(c->r[13]+0xFFFFB4E4u); // 801B2D10
  W32(c->r[13]+0xFFFFB4D0u,c->r[0]); // 801B2D14
  c->r[12]=R32(c->r[3]+0x0000002Cu); // 801B2D18
  cmps(c,0,(int32_t)c->r[12],0); // 801B2D1C
  if (crb(c,2)) { goto L_801B2FF8; } // 801B2D20
  c->ctr=c->r[12]; // 801B2D24
  if (true) { c->lr=0x801B2D2Cu; dispatch(c,c->ctr); } // 801B2D28
  goto L_801B2FF8; // 801B2D2C
L_801B2D30:;
  c->r[3]=0u+0xCDD10000u; // 801B2D30
  c->r[3]=c->r[3]+0x00000001u; // 801B2D34
  c->lr=0x801B2D3Cu; f_801B2980(c); // 801B2D38
L_801B2D3C:;
  c->lr=0x801B2D40u; f_801B2940(c); // 801B2D3C
  cmps(c,0,(int32_t)c->r[3],0); // 801B2D40
  if (!crb(c,2)) { IRQCHK(c); goto L_801B2D3C; } // 801B2D44
  c->r[3]=R32(c->r[13]+0xFFFFB4E4u); // 801B2D48
  c->r[4]=R32(c->r[13]+0xFFFFB4D4u); // 801B2D4C
  c->lr=0x801B2D54u; f_801B3020(c); // 801B2D50
  c->r[3]=R32(c->r[13]+0xFFFFB4E4u); // 801B2D54
  c->r[4]=0u+0x00000002u; // 801B2D58
  c->r[0]=0u+0x00000000u; // 801B2D5C
  W32(c->r[3]+0x00000000u,c->r[4]); // 801B2D60
  c->r[3]=R32(c->r[13]+0xFFFFB4D4u); // 801B2D64
  W32(c->r[13]+0xFFFFB4E4u,c->r[3]); // 801B2D68
  W32(c->r[13]+0xFFFFB4D4u,c->r[0]); // 801B2D6C
  W32(c->r[13]+0xFFFFB4D0u,c->r[0]); // 801B2D70
  goto L_801B2FF8; // 801B2D74
L_801B2D78:;
  c->r[0]=R32(c->r[4]+0x00000038u); // 801B2D78
  cmps(c,0,(int32_t)c->r[0],0); // 801B2D7C
  if (!crb(c,2)) { goto L_801B2E00; } // 801B2D80
  c->r[0]=R32(c->r[13]+0xFFFFB4E0u); // 801B2D84
  cmpu(c,0,c->r[4],c->r[0]); // 801B2D88
  if (!crb(c,2)) { goto L_801B2DC4; } // 801B2D8C
  c->r[3]=0u+0xCDD10000u; // 801B2D90
  c->r[3]=c->r[3]+0x00000003u; // 801B2D94
  c->lr=0x801B2D9Cu; f_801B2980(c); // 801B2D98
L_801B2D9C:;
  c->lr=0x801B2DA0u; f_801B2940(c); // 801B2D9C
  cmps(c,0,(int32_t)c->r[3],0); // 801B2DA0
  if (!crb(c,2)) { IRQCHK(c); goto L_801B2D9C; } // 801B2DA4
  c->r[3]=R32(c->r[13]+0xFFFFB4E4u); // 801B2DA8
  c->r[12]=R32(c->r[3]+0x0000002Cu); // 801B2DAC
  cmps(c,0,(int32_t)c->r[12],0); // 801B2DB0
  if (crb(c,2)) { goto L_801B2FF8; } // 801B2DB4
  c->ctr=c->r[12]; // 801B2DB8
  if (true) { c->lr=0x801B2DC0u; dispatch(c,c->ctr); } // 801B2DBC
  goto L_801B2FF8; // 801B2DC0
L_801B2DC4:;
  c->r[3]=0u+0xCDD10000u; // 801B2DC4
  c->r[3]=c->r[3]+0x00000001u; // 801B2DC8
  c->lr=0x801B2DD0u; f_801B2980(c); // 801B2DCC
L_801B2DD0:;
  c->lr=0x801B2DD4u; f_801B2940(c); // 801B2DD0
  cmps(c,0,(int32_t)c->r[3],0); // 801B2DD4
  if (!crb(c,2)) { IRQCHK(c); goto L_801B2DD0; } // 801B2DD8
  c->r[3]=R32(c->r[13]+0xFFFFB4E4u); // 801B2DDC
  c->r[4]=R32(c->r[13]+0xFFFFB4E0u); // 801B2DE0
  c->lr=0x801B2DE8u; f_801B3020(c); // 801B2DE4
  c->r[3]=R32(c->r[13]+0xFFFFB4E4u); // 801B2DE8
  c->r[0]=0u+0x00000002u; // 801B2DEC
  W32(c->r[3]+0x00000000u,c->r[0]); // 801B2DF0
  c->r[0]=R32(c->r[13]+0xFFFFB4E0u); // 801B2DF4
  W32(c->r[13]+0xFFFFB4E4u,c->r[0]); // 801B2DF8
  goto L_801B2FF8; // 801B2DFC
L_801B2E00:;
  c->r[3]=0u+0xCDD10000u; // 801B2E00
  c->r[3]=c->r[3]+0x00000001u; // 801B2E04
  c->lr=0x801B2E0Cu; f_801B2980(c); // 801B2E08
L_801B2E0C:;
  c->lr=0x801B2E10u; f_801B2940(c); // 801B2E0C
  cmps(c,0,(int32_t)c->r[3],0); // 801B2E10
  if (!crb(c,2)) { IRQCHK(c); goto L_801B2E0C; } // 801B2E14
  c->r[3]=R32(c->r[13]+0xFFFFB4E4u); // 801B2E18
  c->r[4]=R32(c->r[3]+0x00000038u); // 801B2E1C
  c->lr=0x801B2E24u; f_801B3020(c); // 801B2E20
  c->r[3]=R32(c->r[13]+0xFFFFB4E4u); // 801B2E24
  c->r[0]=0u+0x00000002u; // 801B2E28
  W32(c->r[3]+0x00000000u,c->r[0]); // 801B2E2C
  c->r[3]=R32(c->r[13]+0xFFFFB4E4u); // 801B2E30
  c->r[0]=R32(c->r[3]+0x00000038u); // 801B2E34
  W32(c->r[13]+0xFFFFB4E4u,c->r[0]); // 801B2E38
  goto L_801B2FF8; // 801B2E3C
L_801B2E40:;
  c->r[0]=R32(c->r[13]+0xFFFFB4D0u); // 801B2E40
  cmps(c,0,(int32_t)c->r[0],0); // 801B2E44
  if (crb(c,2)) { goto L_801B2EC0; } // 801B2E48
  c->r[0]=R32(c->r[13]+0xFFFFB4D4u); // 801B2E4C
  cmpu(c,0,c->r[4],c->r[0]); // 801B2E50
  if (crb(c,2)) { goto L_801B2EB4; } // 801B2E54
  c->r[12]=R32(c->r[4]+0x00000030u); // 801B2E58
  cmps(c,0,(int32_t)c->r[12],0); // 801B2E5C
  if (crb(c,2)) { goto L_801B2E70; } // 801B2E60
  c->r[3]=c->r[4]|c->r[4]; // 801B2E64
  c->ctr=c->r[12]; // 801B2E68
  if (true) { c->lr=0x801B2E70u; dispatch(c,c->ctr); } // 801B2E6C
L_801B2E70:;
  c->r[3]=0u+0xCDD10000u; // 801B2E70
  c->r[3]=c->r[3]+0x00000001u; // 801B2E74
  c->lr=0x801B2E7Cu; f_801B2980(c); // 801B2E78
L_801B2E7C:;
  c->lr=0x801B2E80u; f_801B2940(c); // 801B2E7C
  cmps(c,0,(int32_t)c->r[3],0); // 801B2E80
  if (!crb(c,2)) { IRQCHK(c); goto L_801B2E7C; } // 801B2E84
  c->r[4]=R32(c->r[13]+0xFFFFB4D4u); // 801B2E88
  c->r[3]=0u+0x00000000u; // 801B2E8C
  c->lr=0x801B2E94u; f_801B3020(c); // 801B2E90
  c->r[3]=R32(c->r[13]+0xFFFFB4E4u); // 801B2E94
  c->lr=0x801B2E9Cu; f_801B3400(c); // 801B2E98
  c->r[3]=R32(c->r[13]+0xFFFFB4D4u); // 801B2E9C
  c->r[0]=0u+0x00000000u; // 801B2EA0
  W32(c->r[13]+0xFFFFB4E4u,c->r[3]); // 801B2EA4
  W32(c->r[13]+0xFFFFB4D4u,c->r[0]); // 801B2EA8
  W32(c->r[13]+0xFFFFB4D0u,c->r[0]); // 801B2EAC
  goto L_801B2FF8; // 801B2EB0
L_801B2EB4:;
  c->r[0]=0u+0x00000000u; // 801B2EB4
  W32(c->r[13]+0xFFFFB4D4u,c->r[0]); // 801B2EB8
  W32(c->r[13]+0xFFFFB4D0u,c->r[0]); // 801B2EBC
L_801B2EC0:;
  c->r[0]=R32(c->r[4]+0x00000038u); // 801B2EC0
  cmps(c,0,(int32_t)c->r[0],0); // 801B2EC4
  if (!crb(c,2)) { goto L_801B2F7C; } // 801B2EC8
  c->r[0]=R32(c->r[13]+0xFFFFB4E0u); // 801B2ECC
  cmpu(c,0,c->r[4],c->r[0]); // 801B2ED0
  if (!crb(c,2)) { goto L_801B2F20; } // 801B2ED4
  c->r[12]=R32(c->r[4]+0x00000030u); // 801B2ED8
  cmps(c,0,(int32_t)c->r[12],0); // 801B2EDC
  if (crb(c,2)) { goto L_801B2EF0; } // 801B2EE0
  c->r[3]=c->r[4]|c->r[4]; // 801B2EE4
  c->ctr=c->r[12]; // 801B2EE8
  if (true) { c->lr=0x801B2EF0u; dispatch(c,c->ctr); } // 801B2EEC
L_801B2EF0:;
  c->r[3]=0u+0xCDD10000u; // 801B2EF0
  c->r[3]=c->r[3]+0x00000002u; // 801B2EF4
  c->lr=0x801B2EFCu; f_801B2980(c); // 801B2EF8
L_801B2EFC:;
  c->lr=0x801B2F00u; f_801B2940(c); // 801B2EFC
  cmps(c,0,(int32_t)c->r[3],0); // 801B2F00
  if (!crb(c,2)) { IRQCHK(c); goto L_801B2EFC; } // 801B2F04
  c->r[3]=R32(c->r[13]+0xFFFFB4E4u); // 801B2F08
  c->r[0]=0u+0x00000003u; // 801B2F0C
  W32(c->r[3]+0x00000000u,c->r[0]); // 801B2F10
  c->r[3]=R32(c->r[13]+0xFFFFB4E4u); // 801B2F14
  c->lr=0x801B2F1Cu; f_801B3400(c); // 801B2F18
  goto L_801B2FF8; // 801B2F1C
L_801B2F20:;
  c->r[12]=R32(c->r[4]+0x00000030u); // 801B2F20
  cmps(c,0,(int32_t)c->r[12],0); // 801B2F24
  if (crb(c,2)) { goto L_801B2F38; } // 801B2F28
  c->r[3]=c->r[4]|c->r[4]; // 801B2F2C
  c->ctr=c->r[12]; // 801B2F30
  if (true) { c->lr=0x801B2F38u; dispatch(c,c->ctr); } // 801B2F34
L_801B2F38:;
  c->r[3]=0u+0xCDD10000u; // 801B2F38
  c->r[3]=c->r[3]+0x00000001u; // 801B2F3C
  c->lr=0x801B2F44u; f_801B2980(c); // 801B2F40
L_801B2F44:;
  c->lr=0x801B2F48u; f_801B2940(c); // 801B2F44
  cmps(c,0,(int32_t)c->r[3],0); // 801B2F48
  if (!crb(c,2)) { IRQCHK(c); goto L_801B2F44; } // 801B2F4C
  c->r[4]=R32(c->r[13]+0xFFFFB4E4u); // 801B2F50
  c->r[0]=0u+0x00000003u; // 801B2F54
  c->r[3]=0u+0x00000000u; // 801B2F58
  W32(c->r[4]+0x00000000u,c->r[0]); // 801B2F5C
  c->r[4]=R32(c->r[13]+0xFFFFB4E0u); // 801B2F60
  c->lr=0x801B2F68u; f_801B3020(c); // 801B2F64
  c->r[0]=R32(c->r[13]+0xFFFFB4E0u); // 801B2F68
  W32(c->r[13]+0xFFFFB4E4u,c->r[0]); // 801B2F6C
  c->r[3]=R32(c->r[13]+0xFFFFB4DCu); // 801B2F70
  c->lr=0x801B2F78u; f_801B3400(c); // 801B2F74
  goto L_801B2FF8; // 801B2F78
L_801B2F7C:;
  c->r[12]=R32(c->r[4]+0x00000030u); // 801B2F7C
  cmps(c,0,(int32_t)c->r[12],0); // 801B2F80
  if (crb(c,2)) { goto L_801B2F94; } // 801B2F84
  c->r[3]=c->r[4]|c->r[4]; // 801B2F88
  c->ctr=c->r[12]; // 801B2F8C
  if (true) { c->lr=0x801B2F94u; dispatch(c,c->ctr); } // 801B2F90
L_801B2F94:;
  c->r[3]=0u+0xCDD10000u; // 801B2F94
  c->r[3]=c->r[3]+0x00000001u; // 801B2F98
  c->lr=0x801B2FA0u; f_801B2980(c); // 801B2F9C
L_801B2FA0:;
  c->lr=0x801B2FA4u; f_801B2940(c); // 801B2FA0
  cmps(c,0,(int32_t)c->r[3],0); // 801B2FA4
  if (!crb(c,2)) { IRQCHK(c); goto L_801B2FA0; } // 801B2FA8
  c->r[4]=R32(c->r[13]+0xFFFFB4E4u); // 801B2FAC
  c->r[0]=0u+0x00000003u; // 801B2FB0
  c->r[3]=0u+0x00000000u; // 801B2FB4
  W32(c->r[4]+0x00000000u,c->r[0]); // 801B2FB8
  c->r[4]=R32(c->r[13]+0xFFFFB4E4u); // 801B2FBC
  c->r[4]=R32(c->r[4]+0x00000038u); // 801B2FC0
  c->lr=0x801B2FC8u; f_801B3020(c); // 801B2FC4
  c->r[3]=R32(c->r[13]+0xFFFFB4E4u); // 801B2FC8
  c->r[3]=R32(c->r[3]+0x00000038u); // 801B2FCC
  W32(c->r[13]+0xFFFFB4E4u,c->r[3]); // 801B2FD0
  c->r[3]=R32(c->r[3]+0x0000003Cu); // 801B2FD4
  c->lr=0x801B2FDCu; f_801B3400(c); // 801B2FD8
  goto L_801B2FF8; // 801B2FDC
L_801B2FE0:;
  c->r[12]=R32(c->r[4]+0x00000034u); // 801B2FE0
  cmps(c,0,(int32_t)c->r[12],0); // 801B2FE4
  if (crb(c,2)) { goto L_801B2FF8; } // 801B2FE8
  c->r[3]=c->r[4]|c->r[4]; // 801B2FEC
  c->ctr=c->r[12]; // 801B2FF0
  if (true) { c->lr=0x801B2FF8u; dispatch(c,c->ctr); } // 801B2FF4
L_801B2FF8:;
  c->r[3]=c->r[1]+0x00000008u; // 801B2FF8
  c->lr=0x801B3000u; f_80189580(c); // 801B2FFC
  c->r[3]=c->r[31]|c->r[31]; // 801B3000
  c->lr=0x801B3008u; f_80189340(c); // 801B3004
  c->r[0]=R32(c->r[1]+0x000002E4u); // 801B3008
  c->r[31]=R32(c->r[1]+0x000002DCu); // 801B300C
  c->lr=c->r[0]; // 801B3010
  c->r[1]=c->r[1]+0x000002E0u; // 801B3014
  return; // 801B3018
}

// __DSP_exec_task
void f_801B3020(Ctx* __restrict c) {
  trace_call(0x801B3020u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B3020
  c->r[0]=c->lr; // 801B3024
  cmps(c,0,(int32_t)c->r[3],0); // 801B3028
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B302C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B3030
  c->r[31]=c->r[4]|c->r[4]; // 801B3034
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B3038
  c->r[30]=c->r[3]|c->r[3]; // 801B303C
  if (crb(c,2)) { goto L_801B3084; } // 801B3040
  c->r[3]=R32(c->r[3]+0x00000018u); // 801B3044
  c->lr=0x801B304Cu; f_801B2980(c); // 801B3048
L_801B304C:;
  c->lr=0x801B3050u; f_801B2940(c); // 801B304C
  cmps(c,0,(int32_t)c->r[3],0); // 801B3050
  if (!crb(c,2)) { IRQCHK(c); goto L_801B304C; } // 801B3054
  c->r[3]=R32(c->r[30]+0x0000001Cu); // 801B3058
  c->lr=0x801B3060u; f_801B2980(c); // 801B305C
L_801B3060:;
  c->lr=0x801B3064u; f_801B2940(c); // 801B3060
  cmps(c,0,(int32_t)c->r[3],0); // 801B3064
  if (!crb(c,2)) { IRQCHK(c); goto L_801B3060; } // 801B3068
  c->r[3]=R32(c->r[30]+0x00000020u); // 801B306C
  c->lr=0x801B3074u; f_801B2980(c); // 801B3070
L_801B3074:;
  c->lr=0x801B3078u; f_801B2940(c); // 801B3074
  cmps(c,0,(int32_t)c->r[3],0); // 801B3078
  if (!crb(c,2)) { IRQCHK(c); goto L_801B3074; } // 801B307C
  goto L_801B30C0; // 801B3080
L_801B3084:;
  c->r[3]=0u+0x00000000u; // 801B3084
  c->lr=0x801B308Cu; f_801B2980(c); // 801B3088
L_801B308C:;
  c->lr=0x801B3090u; f_801B2940(c); // 801B308C
  cmps(c,0,(int32_t)c->r[3],0); // 801B3090
  if (!crb(c,2)) { IRQCHK(c); goto L_801B308C; } // 801B3094
  c->r[3]=0u+0x00000000u; // 801B3098
  c->lr=0x801B30A0u; f_801B2980(c); // 801B309C
L_801B30A0:;
  c->lr=0x801B30A4u; f_801B2940(c); // 801B30A0
  cmps(c,0,(int32_t)c->r[3],0); // 801B30A4
  if (!crb(c,2)) { IRQCHK(c); goto L_801B30A0; } // 801B30A8
  c->r[3]=0u+0x00000000u; // 801B30AC
  c->lr=0x801B30B4u; f_801B2980(c); // 801B30B0
L_801B30B4:;
  c->lr=0x801B30B8u; f_801B2940(c); // 801B30B4
  cmps(c,0,(int32_t)c->r[3],0); // 801B30B8
  if (!crb(c,2)) { IRQCHK(c); goto L_801B30B4; } // 801B30BC
L_801B30C0:;
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 801B30C0
  c->lr=0x801B30C8u; f_801B2980(c); // 801B30C4
L_801B30C8:;
  c->lr=0x801B30CCu; f_801B2940(c); // 801B30C8
  cmps(c,0,(int32_t)c->r[3],0); // 801B30CC
  if (!crb(c,2)) { IRQCHK(c); goto L_801B30C8; } // 801B30D0
  c->r[3]=R32(c->r[31]+0x00000010u); // 801B30D4
  c->lr=0x801B30DCu; f_801B2980(c); // 801B30D8
L_801B30DC:;
  c->lr=0x801B30E0u; f_801B2940(c); // 801B30DC
  cmps(c,0,(int32_t)c->r[3],0); // 801B30E0
  if (!crb(c,2)) { IRQCHK(c); goto L_801B30DC; } // 801B30E4
  c->r[3]=R32(c->r[31]+0x00000014u); // 801B30E8
  c->lr=0x801B30F0u; f_801B2980(c); // 801B30EC
L_801B30F0:;
  c->lr=0x801B30F4u; f_801B2940(c); // 801B30F0
  cmps(c,0,(int32_t)c->r[3],0); // 801B30F4
  if (!crb(c,2)) { IRQCHK(c); goto L_801B30F0; } // 801B30F8
  c->r[0]=R32(c->r[31]+0x00000000u); // 801B30FC
  cmps(c,0,(int32_t)c->r[0],0); // 801B3100
  if (!crb(c,2)) { goto L_801B315C; } // 801B3104
  c->r[3]=R16(c->r[31]+0x00000024u); // 801B3108
  c->lr=0x801B3110u; f_801B2980(c); // 801B310C
L_801B3110:;
  c->lr=0x801B3114u; f_801B2940(c); // 801B3110
  cmps(c,0,(int32_t)c->r[3],0); // 801B3114
  if (!crb(c,2)) { IRQCHK(c); goto L_801B3110; } // 801B3118
  c->r[3]=0u+0x00000000u; // 801B311C
  c->lr=0x801B3124u; f_801B2980(c); // 801B3120
L_801B3124:;
  c->lr=0x801B3128u; f_801B2940(c); // 801B3124
  cmps(c,0,(int32_t)c->r[3],0); // 801B3128
  if (!crb(c,2)) { IRQCHK(c); goto L_801B3124; } // 801B312C
  c->r[3]=0u+0x00000000u; // 801B3130
  c->lr=0x801B3138u; f_801B2980(c); // 801B3134
L_801B3138:;
  c->lr=0x801B313Cu; f_801B2940(c); // 801B3138
  cmps(c,0,(int32_t)c->r[3],0); // 801B313C
  if (!crb(c,2)) { IRQCHK(c); goto L_801B3138; } // 801B3140
  c->r[3]=0u+0x00000000u; // 801B3144
  c->lr=0x801B314Cu; f_801B2980(c); // 801B3148
L_801B314C:;
  c->lr=0x801B3150u; f_801B2940(c); // 801B314C
  cmps(c,0,(int32_t)c->r[3],0); // 801B3150
  if (!crb(c,2)) { IRQCHK(c); goto L_801B314C; } // 801B3154
  goto L_801B31AC; // 801B3158
L_801B315C:;
  c->r[3]=R16(c->r[31]+0x00000026u); // 801B315C
  c->lr=0x801B3164u; f_801B2980(c); // 801B3160
L_801B3164:;
  c->lr=0x801B3168u; f_801B2940(c); // 801B3164
  cmps(c,0,(int32_t)c->r[3],0); // 801B3168
  if (!crb(c,2)) { IRQCHK(c); goto L_801B3164; } // 801B316C
  c->r[3]=R32(c->r[31]+0x00000018u); // 801B3170
  c->lr=0x801B3178u; f_801B2980(c); // 801B3174
L_801B3178:;
  c->lr=0x801B317Cu; f_801B2940(c); // 801B3178
  cmps(c,0,(int32_t)c->r[3],0); // 801B317C
  if (!crb(c,2)) { IRQCHK(c); goto L_801B3178; } // 801B3180
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 801B3184
  c->lr=0x801B318Cu; f_801B2980(c); // 801B3188
L_801B318C:;
  c->lr=0x801B3190u; f_801B2940(c); // 801B318C
  cmps(c,0,(int32_t)c->r[3],0); // 801B3190
  if (!crb(c,2)) { IRQCHK(c); goto L_801B318C; } // 801B3194
  c->r[3]=R32(c->r[31]+0x00000020u); // 801B3198
  c->lr=0x801B31A0u; f_801B2980(c); // 801B319C
L_801B31A0:;
  c->lr=0x801B31A4u; f_801B2940(c); // 801B31A0
  cmps(c,0,(int32_t)c->r[3],0); // 801B31A4
  if (!crb(c,2)) { IRQCHK(c); goto L_801B31A0; } // 801B31A8
L_801B31AC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B31AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B31B0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B31B4
  c->lr=c->r[0]; // 801B31B8
  c->r[1]=c->r[1]+0x00000010u; // 801B31BC
  return; // 801B31C0
}

// __DSP_boot_task
void f_801B31D0(Ctx* __restrict c) {
  trace_call(0x801B31D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B31D0
  c->r[0]=c->lr; // 801B31D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B31D8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B31DC
  c->r[31]=0u+0x80280000u; // 801B31E0
  c->r[31]=c->r[31]+0xFFFF9E80u; // 801B31E4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B31E8
  c->r[30]=c->r[3]|c->r[3]; // 801B31EC
L_801B31F0:;
  c->lr=0x801B31F4u; f_801B2950(c); // 801B31F0
  cmps(c,0,(int32_t)c->r[3],0); // 801B31F4
  if (crb(c,2)) { IRQCHK(c); goto L_801B31F0; } // 801B31F8
  c->lr=0x801B3200u; f_801B2960(c); // 801B31FC
  W32(c->r[1]+0x00000008u,c->r[3]); // 801B3200
  c->r[3]=0u+0x80F40000u; // 801B3204
  c->r[3]=c->r[3]+0xFFFFA001u; // 801B3208
  c->lr=0x801B3210u; f_801B2980(c); // 801B320C
L_801B3210:;
  c->lr=0x801B3214u; f_801B2940(c); // 801B3210
  cmps(c,0,(int32_t)c->r[3],0); // 801B3214
  if (!crb(c,2)) { IRQCHK(c); goto L_801B3210; } // 801B3218
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 801B321C
  c->lr=0x801B3224u; f_801B2980(c); // 801B3220
L_801B3224:;
  c->lr=0x801B3228u; f_801B2940(c); // 801B3224
  cmps(c,0,(int32_t)c->r[3],0); // 801B3228
  if (!crb(c,2)) { IRQCHK(c); goto L_801B3224; } // 801B322C
  c->r[3]=0u+0x80F40000u; // 801B3230
  c->r[3]=c->r[3]+0xFFFFC002u; // 801B3234
  c->lr=0x801B323Cu; f_801B2980(c); // 801B3238
L_801B323C:;
  c->lr=0x801B3240u; f_801B2940(c); // 801B323C
  cmps(c,0,(int32_t)c->r[3],0); // 801B3240
  if (!crb(c,2)) { IRQCHK(c); goto L_801B323C; } // 801B3244
  c->r[0]=R32(c->r[30]+0x00000014u); // 801B3248
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801B324C
  c->lr=0x801B3254u; f_801B2980(c); // 801B3250
L_801B3254:;
  c->lr=0x801B3258u; f_801B2940(c); // 801B3254
  cmps(c,0,(int32_t)c->r[3],0); // 801B3258
  if (!crb(c,2)) { IRQCHK(c); goto L_801B3254; } // 801B325C
  c->r[3]=0u+0x80F40000u; // 801B3260
  c->r[3]=c->r[3]+0xFFFFA002u; // 801B3264
  c->lr=0x801B326Cu; f_801B2980(c); // 801B3268
L_801B326C:;
  c->lr=0x801B3270u; f_801B2940(c); // 801B326C
  cmps(c,0,(int32_t)c->r[3],0); // 801B3270
  if (!crb(c,2)) { IRQCHK(c); goto L_801B326C; } // 801B3274
  c->r[3]=R32(c->r[30]+0x00000010u); // 801B3278
  c->lr=0x801B3280u; f_801B2980(c); // 801B327C
L_801B3280:;
  c->lr=0x801B3284u; f_801B2940(c); // 801B3280
  cmps(c,0,(int32_t)c->r[3],0); // 801B3284
  if (!crb(c,2)) { IRQCHK(c); goto L_801B3280; } // 801B3288
  c->r[3]=0u+0x80F40000u; // 801B328C
  c->r[3]=c->r[3]+0xFFFFB002u; // 801B3290
  c->lr=0x801B3298u; f_801B2980(c); // 801B3294
L_801B3298:;
  c->lr=0x801B329Cu; f_801B2940(c); // 801B3298
  cmps(c,0,(int32_t)c->r[3],0); // 801B329C
  if (!crb(c,2)) { IRQCHK(c); goto L_801B3298; } // 801B32A0
  c->r[3]=0u+0x00000000u; // 801B32A4
  c->lr=0x801B32ACu; f_801B2980(c); // 801B32A8
L_801B32AC:;
  c->lr=0x801B32B0u; f_801B2940(c); // 801B32AC
  cmps(c,0,(int32_t)c->r[3],0); // 801B32B0
  if (!crb(c,2)) { IRQCHK(c); goto L_801B32AC; } // 801B32B4
  c->r[3]=0u+0x80F40000u; // 801B32B8
  c->r[3]=c->r[3]+0xFFFFD001u; // 801B32BC
  c->lr=0x801B32C4u; f_801B2980(c); // 801B32C0
L_801B32C4:;
  c->lr=0x801B32C8u; f_801B2940(c); // 801B32C4
  cmps(c,0,(int32_t)c->r[3],0); // 801B32C8
  if (!crb(c,2)) { IRQCHK(c); goto L_801B32C4; } // 801B32CC
  c->r[3]=R16(c->r[30]+0x00000024u); // 801B32D0
  c->lr=0x801B32D8u; f_801B2980(c); // 801B32D4
L_801B32D8:;
  c->lr=0x801B32DCu; f_801B2940(c); // 801B32D8
  cmps(c,0,(int32_t)c->r[3],0); // 801B32DC
  if (!crb(c,2)) { IRQCHK(c); goto L_801B32D8; } // 801B32E0
  c->r[4]=c->r[30]|c->r[30]; // 801B32E4
  c->r[3]=c->r[31]+0x00000000u; // 801B32E8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B32EC
  c->lr=0x801B32F4u; f_801B2BA0(c); // 801B32F0
  c->r[4]=R32(c->r[30]+0x0000000Cu); // 801B32F4
  c->r[3]=c->r[31]+0x00000020u; // 801B32F8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B32FC
  c->lr=0x801B3304u; f_801B2BA0(c); // 801B3300
  c->r[4]=R32(c->r[30]+0x00000014u); // 801B3304
  c->r[3]=c->r[31]+0x00000050u; // 801B3308
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B330C
  c->lr=0x801B3314u; f_801B2BA0(c); // 801B3310
  c->r[4]=R32(c->r[30]+0x00000010u); // 801B3314
  c->r[3]=c->r[31]+0x00000080u; // 801B3318
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B331C
  c->lr=0x801B3324u; f_801B2BA0(c); // 801B3320
  c->r[4]=R32(c->r[30]+0x0000001Cu); // 801B3324
  c->r[3]=c->r[31]+0x000000B0u; // 801B3328
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B332C
  c->lr=0x801B3334u; f_801B2BA0(c); // 801B3330
  c->r[4]=R16(c->r[30]+0x00000024u); // 801B3334
  c->r[3]=c->r[31]+0x000000E0u; // 801B3338
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B333C
  c->lr=0x801B3344u; f_801B2BA0(c); // 801B3340
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B3344
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B3348
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B334C
  c->lr=c->r[0]; // 801B3350
  c->r[1]=c->r[1]+0x00000020u; // 801B3354
  return; // 801B3358
}

// __DSP_insert_task
void f_801B3360(Ctx* __restrict c) {
  trace_call(0x801B3360u);
  c->r[5]=R32(c->r[13]+0xFFFFB4E0u); // 801B3360
  cmps(c,0,(int32_t)c->r[5],0); // 801B3364
  if (!crb(c,2)) { goto L_801B33D0; } // 801B3368
  W32(c->r[13]+0xFFFFB4E4u,c->r[3]); // 801B336C
  c->r[0]=0u+0x00000000u; // 801B3370
  W32(c->r[13]+0xFFFFB4DCu,c->r[3]); // 801B3374
  W32(c->r[13]+0xFFFFB4E0u,c->r[3]); // 801B3378
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 801B337C
  W32(c->r[3]+0x00000038u,c->r[0]); // 801B3380
  return; // 801B3384
  goto L_801B33D0; // 801B3388
  c->r[0]=c->r[0]|0x00000000u; // 801B338C
L_801B3390:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 801B3390
  c->r[0]=R32(c->r[5]+0x00000004u); // 801B3394
  cmpu(c,0,c->r[4],c->r[0]); // 801B3398
  if (!crb(c,0)) { goto L_801B33CC; } // 801B339C
  c->r[0]=R32(c->r[5]+0x0000003Cu); // 801B33A0
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 801B33A4
  W32(c->r[5]+0x0000003Cu,c->r[3]); // 801B33A8
  c->r[4]=R32(c->r[3]+0x0000003Cu); // 801B33AC
  W32(c->r[3]+0x00000038u,c->r[5]); // 801B33B0
  cmps(c,0,(int32_t)c->r[4],0); // 801B33B4
  if (!crb(c,2)) { goto L_801B33C4; } // 801B33B8
  W32(c->r[13]+0xFFFFB4E0u,c->r[3]); // 801B33BC
  goto L_801B33D8; // 801B33C0
L_801B33C4:;
  W32(c->r[4]+0x00000038u,c->r[3]); // 801B33C4
  goto L_801B33D8; // 801B33C8
L_801B33CC:;
  c->r[5]=R32(c->r[5]+0x00000038u); // 801B33CC
L_801B33D0:;
  cmps(c,0,(int32_t)c->r[5],0); // 801B33D0
  if (!crb(c,2)) { IRQCHK(c); goto L_801B3390; } // 801B33D4
L_801B33D8:;
  cmps(c,0,(int32_t)c->r[5],0); // 801B33D8
  if (!crb(c,2)) return; // 801B33DC
  c->r[4]=R32(c->r[13]+0xFFFFB4DCu); // 801B33E0
  c->r[0]=0u+0x00000000u; // 801B33E4
  W32(c->r[4]+0x00000038u,c->r[3]); // 801B33E8
  W32(c->r[3]+0x00000038u,c->r[0]); // 801B33EC
  c->r[0]=R32(c->r[13]+0xFFFFB4DCu); // 801B33F0
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 801B33F4
  W32(c->r[13]+0xFFFFB4DCu,c->r[3]); // 801B33F8
  return; // 801B33FC
}

// __DSP_remove_task
void f_801B3400(Ctx* __restrict c) {
  trace_call(0x801B3400u);
  c->r[4]=0u+0x00000000u; // 801B3400
  W32(c->r[3]+0x00000008u,c->r[4]); // 801B3404
  c->r[0]=0u+0x00000003u; // 801B3408
  W32(c->r[3]+0x00000000u,c->r[0]); // 801B340C
  c->r[0]=R32(c->r[13]+0xFFFFB4E0u); // 801B3410
  cmpu(c,0,c->r[0],c->r[3]); // 801B3414
  if (!crb(c,2)) { goto L_801B3444; } // 801B3418
  c->r[3]=R32(c->r[3]+0x00000038u); // 801B341C
  cmps(c,0,(int32_t)c->r[3],0); // 801B3420
  if (crb(c,2)) { goto L_801B3434; } // 801B3424
  W32(c->r[13]+0xFFFFB4E0u,c->r[3]); // 801B3428
  W32(c->r[3]+0x0000003Cu,c->r[4]); // 801B342C
  return; // 801B3430
L_801B3434:;
  W32(c->r[13]+0xFFFFB4E4u,c->r[4]); // 801B3434
  W32(c->r[13]+0xFFFFB4DCu,c->r[4]); // 801B3438
  W32(c->r[13]+0xFFFFB4E0u,c->r[4]); // 801B343C
  return; // 801B3440
L_801B3444:;
  c->r[0]=R32(c->r[13]+0xFFFFB4DCu); // 801B3444
  cmpu(c,0,c->r[0],c->r[3]); // 801B3448
  if (!crb(c,2)) { goto L_801B3468; } // 801B344C
  c->r[3]=R32(c->r[3]+0x0000003Cu); // 801B3450
  W32(c->r[13]+0xFFFFB4DCu,c->r[3]); // 801B3454
  W32(c->r[3]+0x00000038u,c->r[4]); // 801B3458
  c->r[0]=R32(c->r[13]+0xFFFFB4E0u); // 801B345C
  W32(c->r[13]+0xFFFFB4E4u,c->r[0]); // 801B3460
  return; // 801B3464
L_801B3468:;
  c->r[0]=R32(c->r[3]+0x00000038u); // 801B3468
  W32(c->r[13]+0xFFFFB4E4u,c->r[0]); // 801B346C
  c->r[4]=R32(c->r[3]+0x0000003Cu); // 801B3470
  W32(c->r[4]+0x00000038u,c->r[0]); // 801B3474
  c->r[4]=R32(c->r[3]+0x00000038u); // 801B3478
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 801B347C
  W32(c->r[4]+0x0000003Cu,c->r[0]); // 801B3480
  return; // 801B3484
}

// fn_801B3490
void f_801B3490(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B3490
  c->r[0]=c->lr; // 801B3494
  W32(c->r[1]+0x00000074u,c->r[0]); // 801B3498
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 801B349C
  c->r[31]=c->r[5]|c->r[5]; // 801B34A0
  W32(c->r[1]+0x00000068u,c->r[30]); // 801B34A4
  c->r[30]=c->r[4]|c->r[4]; // 801B34A8
  W32(c->r[1]+0x00000064u,c->r[29]); // 801B34AC
  c->r[29]=c->r[3]|c->r[3]; // 801B34B0
  c->lr=0x801B34B8u; f_801B52B0(c); // 801B34B4
  cmps(c,0,(int32_t)c->r[3],0); // 801B34B8
  if (!crb(c,2)) { goto L_801B34C8; } // 801B34BC
  c->r[3]=0u+0xFFFFFF80u; // 801B34C0
  goto L_801B357C; // 801B34C4
L_801B34C8:;
  c->r[0]=0u+0x00000000u; // 801B34C8
  W32(c->r[1]+0x00000018u,c->r[0]); // 801B34CC
  c->r[4]=c->r[29]|c->r[29]; // 801B34D0
  c->r[3]=c->r[1]+0x00000018u; // 801B34D4
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801B34D8
  W32(c->r[1]+0x00000020u,c->r[0]); // 801B34DC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B34E0
  W32(c->r[1]+0x00000028u,c->r[0]); // 801B34E4
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801B34E8
  W32(c->r[1]+0x00000030u,c->r[0]); // 801B34EC
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B34F0
  W32(c->r[1]+0x00000038u,c->r[0]); // 801B34F4
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 801B34F8
  W32(c->r[1]+0x00000040u,c->r[0]); // 801B34FC
  W32(c->r[1]+0x00000044u,c->r[0]); // 801B3500
  W32(c->r[1]+0x00000048u,c->r[0]); // 801B3504
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 801B3508
  W32(c->r[1]+0x00000050u,c->r[0]); // 801B350C
  W32(c->r[1]+0x00000054u,c->r[0]); // 801B3510
  W32(c->r[1]+0x00000008u,c->r[0]); // 801B3514
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801B3518
  W32(c->r[1]+0x00000010u,c->r[0]); // 801B351C
  c->lr=0x801B3524u; f_801B5440(c); // 801B3520
  c->r[3]=c->r[1]+0x00000018u; // 801B3524
  c->lr=0x801B352Cu; f_801B5210(c); // 801B3528
  cmps(c,0,(int32_t)c->r[3],0); // 801B352C
  if (crb(c,2)) { goto L_801B353C; } // 801B3530
  c->r[3]=0u+0xFFFFFF9Au; // 801B3534
  goto L_801B3578; // 801B3538
L_801B353C:;
  c->r[0]=rotl(c->r[30],0)&0x00000010u; cr0(c,c->r[0]); // 801B353C
  if (!crb(c,2)) { goto L_801B354C; } // 801B3540
  c->r[3]=0u+0xFFFFFF9Bu; // 801B3544
  goto L_801B3578; // 801B3548
L_801B354C:;
  c->r[3]=c->r[30]|c->r[30]; // 801B354C
  c->r[4]=c->r[1]+0x00000008u; // 801B3550
  c->r[5]=c->r[1]+0x0000000Cu; // 801B3554
  c->r[6]=c->r[1]+0x00000010u; // 801B3558
  c->lr=0x801B3560u; f_801B3E20(c); // 801B355C
  c->r[5]=R32(c->r[1]+0x00000008u); // 801B3560
  c->r[4]=c->r[31]|c->r[31]; // 801B3564
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 801B3568
  c->r[3]=c->r[1]+0x00000018u; // 801B356C
  c->r[7]=R32(c->r[1]+0x00000010u); // 801B3570
  c->lr=0x801B3578u; f_801BE160(c); // 801B3574
L_801B3578:;
  c->lr=0x801B357Cu; f_801B52D0(c); // 801B3578
L_801B357C:;
  c->r[0]=R32(c->r[1]+0x00000074u); // 801B357C
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 801B3580
  c->r[30]=R32(c->r[1]+0x00000068u); // 801B3584
  c->r[29]=R32(c->r[1]+0x00000064u); // 801B3588
  c->lr=c->r[0]; // 801B358C
  c->r[1]=c->r[1]+0x00000070u; // 801B3590
  return; // 801B3594
}

// fn_801B35A0
void f_801B35A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B35A0
  c->r[0]=c->lr; // 801B35A4
  W32(c->r[1]+0x00000074u,c->r[0]); // 801B35A8
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 801B35AC
  c->r[31]=c->r[5]|c->r[5]; // 801B35B0
  W32(c->r[1]+0x00000068u,c->r[30]); // 801B35B4
  c->r[30]=c->r[4]|c->r[4]; // 801B35B8
  W32(c->r[1]+0x00000064u,c->r[29]); // 801B35BC
  c->r[29]=c->r[3]|c->r[3]; // 801B35C0
  c->lr=0x801B35C8u; f_801B52B0(c); // 801B35C4
  cmps(c,0,(int32_t)c->r[3],0); // 801B35C8
  if (!crb(c,2)) { goto L_801B35D8; } // 801B35CC
  c->r[3]=0u+0xFFFFFF80u; // 801B35D0
  goto L_801B3674; // 801B35D4
L_801B35D8:;
  c->r[0]=0u+0x00000000u; // 801B35D8
  W32(c->r[1]+0x00000018u,c->r[0]); // 801B35DC
  c->r[4]=c->r[29]|c->r[29]; // 801B35E0
  c->r[3]=c->r[1]+0x00000018u; // 801B35E4
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801B35E8
  W32(c->r[1]+0x00000020u,c->r[0]); // 801B35EC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B35F0
  W32(c->r[1]+0x00000028u,c->r[0]); // 801B35F4
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801B35F8
  W32(c->r[1]+0x00000030u,c->r[0]); // 801B35FC
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B3600
  W32(c->r[1]+0x00000038u,c->r[0]); // 801B3604
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 801B3608
  W32(c->r[1]+0x00000040u,c->r[0]); // 801B360C
  W32(c->r[1]+0x00000044u,c->r[0]); // 801B3610
  W32(c->r[1]+0x00000048u,c->r[0]); // 801B3614
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 801B3618
  W32(c->r[1]+0x00000050u,c->r[0]); // 801B361C
  W32(c->r[1]+0x00000054u,c->r[0]); // 801B3620
  W32(c->r[1]+0x00000008u,c->r[0]); // 801B3624
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801B3628
  W32(c->r[1]+0x00000010u,c->r[0]); // 801B362C
  c->lr=0x801B3634u; f_801B5440(c); // 801B3630
  c->r[0]=rotl(c->r[30],0)&0x00000010u; cr0(c,c->r[0]); // 801B3634
  if (!crb(c,2)) { goto L_801B3644; } // 801B3638
  c->r[3]=0u+0xFFFFFF9Bu; // 801B363C
  goto L_801B3670; // 801B3640
L_801B3644:;
  c->r[3]=c->r[30]|c->r[30]; // 801B3644
  c->r[4]=c->r[1]+0x00000008u; // 801B3648
  c->r[5]=c->r[1]+0x0000000Cu; // 801B364C
  c->r[6]=c->r[1]+0x00000010u; // 801B3650
  c->lr=0x801B3658u; f_801B3E20(c); // 801B3654
  c->r[5]=R32(c->r[1]+0x00000008u); // 801B3658
  c->r[4]=c->r[31]|c->r[31]; // 801B365C
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 801B3660
  c->r[3]=c->r[1]+0x00000018u; // 801B3664
  c->r[7]=R32(c->r[1]+0x00000010u); // 801B3668
  c->lr=0x801B3670u; f_801BE160(c); // 801B366C
L_801B3670:;
  c->lr=0x801B3674u; f_801B52D0(c); // 801B3670
L_801B3674:;
  c->r[0]=R32(c->r[1]+0x00000074u); // 801B3674
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 801B3678
  c->r[30]=R32(c->r[1]+0x00000068u); // 801B367C
  c->r[29]=R32(c->r[1]+0x00000064u); // 801B3680
  c->lr=c->r[0]; // 801B3684
  c->r[1]=c->r[1]+0x00000070u; // 801B3688
  return; // 801B368C
}

// fn_801B3690
void f_801B3690(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B3690
  c->r[0]=c->lr; // 801B3694
  W32(c->r[1]+0x00000074u,c->r[0]); // 801B3698
  c->r[11]=c->r[1]+0x00000070u; // 801B369C
  c->lr=0x801B36A4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B36A0
  c->r[27]=c->r[3]|c->r[3]; // 801B36A4
  c->r[28]=c->r[4]|c->r[4]; // 801B36A8
  c->r[29]=c->r[5]|c->r[5]; // 801B36AC
  c->r[30]=c->r[6]|c->r[6]; // 801B36B0
  c->r[31]=c->r[7]|c->r[7]; // 801B36B4
  c->lr=0x801B36BCu; f_801B52B0(c); // 801B36B8
  cmps(c,0,(int32_t)c->r[3],0); // 801B36BC
  if (!crb(c,2)) { goto L_801B36CC; } // 801B36C0
  c->r[3]=0u+0xFFFFFF80u; // 801B36C4
  goto L_801B3778; // 801B36C8
L_801B36CC:;
  W32(c->r[31]+0x00000004u,c->r[30]); // 801B36CC
  c->r[0]=0u+0x00000000u; // 801B36D0
  c->r[4]=c->r[27]|c->r[27]; // 801B36D4
  c->r[3]=c->r[1]+0x00000018u; // 801B36D8
  W32(c->r[1]+0x00000018u,c->r[0]); // 801B36DC
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801B36E0
  W32(c->r[1]+0x00000020u,c->r[0]); // 801B36E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B36E8
  W32(c->r[1]+0x00000028u,c->r[0]); // 801B36EC
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801B36F0
  W32(c->r[1]+0x00000030u,c->r[0]); // 801B36F4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B36F8
  W32(c->r[1]+0x00000038u,c->r[0]); // 801B36FC
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 801B3700
  W32(c->r[1]+0x00000040u,c->r[0]); // 801B3704
  W32(c->r[1]+0x00000044u,c->r[0]); // 801B3708
  W32(c->r[1]+0x00000048u,c->r[0]); // 801B370C
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 801B3710
  W32(c->r[1]+0x00000050u,c->r[0]); // 801B3714
  W32(c->r[1]+0x00000054u,c->r[0]); // 801B3718
  W32(c->r[1]+0x00000008u,c->r[0]); // 801B371C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801B3720
  W32(c->r[1]+0x00000010u,c->r[0]); // 801B3724
  c->lr=0x801B372Cu; f_801B5440(c); // 801B3728
  c->r[0]=rotl(c->r[28],0)&0x00000010u; cr0(c,c->r[0]); // 801B372C
  if (!crb(c,2)) { goto L_801B373C; } // 801B3730
  c->r[3]=0u+0xFFFFFF9Bu; // 801B3734
  goto L_801B3774; // 801B3738
L_801B373C:;
  c->r[3]=c->r[28]|c->r[28]; // 801B373C
  c->r[4]=c->r[1]+0x00000008u; // 801B3740
  c->r[5]=c->r[1]+0x0000000Cu; // 801B3744
  c->r[6]=c->r[1]+0x00000010u; // 801B3748
  c->lr=0x801B3750u; f_801B3E20(c); // 801B374C
  c->r[8]=0u+0x801B0000u; // 801B3750
  c->r[5]=R32(c->r[1]+0x00000008u); // 801B3754
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 801B3758
  c->r[4]=c->r[29]|c->r[29]; // 801B375C
  c->r[7]=R32(c->r[1]+0x00000010u); // 801B3760
  c->r[9]=c->r[31]|c->r[31]; // 801B3764
  c->r[3]=c->r[1]+0x00000018u; // 801B3768
  c->r[8]=c->r[8]+0x00005830u; // 801B376C
  c->lr=0x801B3774u; f_801BE260(c); // 801B3770
L_801B3774:;
  c->lr=0x801B3778u; f_801B52D0(c); // 801B3774
L_801B3778:;
  c->r[11]=c->r[1]+0x00000070u; // 801B3778
  c->lr=0x801B3780u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B377C
  c->r[0]=R32(c->r[1]+0x00000074u); // 801B3780
  c->lr=c->r[0]; // 801B3784
  c->r[1]=c->r[1]+0x00000070u; // 801B3788
  return; // 801B378C
}

// fn_801B3790
void f_801B3790(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B3790
  c->r[0]=c->lr; // 801B3794
  W32(c->r[1]+0x00000054u,c->r[0]); // 801B3798
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 801B379C
  c->r[31]=c->r[3]|c->r[3]; // 801B37A0
  c->lr=0x801B37A8u; f_801B52B0(c); // 801B37A4
  cmps(c,0,(int32_t)c->r[3],0); // 801B37A8
  if (!crb(c,2)) { goto L_801B37B8; } // 801B37AC
  c->r[3]=0u+0xFFFFFF80u; // 801B37B0
  goto L_801B382C; // 801B37B4
L_801B37B8:;
  c->r[0]=0u+0x00000000u; // 801B37B8
  W32(c->r[1]+0x00000008u,c->r[0]); // 801B37BC
  c->r[4]=c->r[31]|c->r[31]; // 801B37C0
  c->r[3]=c->r[1]+0x00000008u; // 801B37C4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801B37C8
  W32(c->r[1]+0x00000010u,c->r[0]); // 801B37CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B37D0
  W32(c->r[1]+0x00000018u,c->r[0]); // 801B37D4
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801B37D8
  W32(c->r[1]+0x00000020u,c->r[0]); // 801B37DC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B37E0
  W32(c->r[1]+0x00000028u,c->r[0]); // 801B37E4
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801B37E8
  W32(c->r[1]+0x00000030u,c->r[0]); // 801B37EC
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B37F0
  W32(c->r[1]+0x00000038u,c->r[0]); // 801B37F4
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 801B37F8
  W32(c->r[1]+0x00000040u,c->r[0]); // 801B37FC
  W32(c->r[1]+0x00000044u,c->r[0]); // 801B3800
  c->lr=0x801B3808u; f_801B5440(c); // 801B3804
  c->r[3]=c->r[1]+0x00000008u; // 801B3808
  c->lr=0x801B3810u; f_801B5210(c); // 801B380C
  cmps(c,0,(int32_t)c->r[3],0); // 801B3810
  if (crb(c,2)) { goto L_801B3820; } // 801B3814
  c->r[3]=0u+0xFFFFFF9Au; // 801B3818
  goto L_801B3828; // 801B381C
L_801B3820:;
  c->r[3]=c->r[1]+0x00000008u; // 801B3820
  c->lr=0x801B3828u; f_801BDD60(c); // 801B3824
L_801B3828:;
  c->lr=0x801B382Cu; f_801B52D0(c); // 801B3828
L_801B382C:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 801B382C
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 801B3830
  c->lr=c->r[0]; // 801B3834
  c->r[1]=c->r[1]+0x00000050u; // 801B3838
  return; // 801B383C
}

// fn_801B3840
void f_801B3840(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B3840
  c->r[0]=c->lr; // 801B3844
  W32(c->r[1]+0x00000054u,c->r[0]); // 801B3848
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 801B384C
  c->r[31]=c->r[3]|c->r[3]; // 801B3850
  c->lr=0x801B3858u; f_801B52B0(c); // 801B3854
  cmps(c,0,(int32_t)c->r[3],0); // 801B3858
  if (!crb(c,2)) { goto L_801B3868; } // 801B385C
  c->r[3]=0u+0xFFFFFF80u; // 801B3860
  goto L_801B38C4; // 801B3864
L_801B3868:;
  c->r[0]=0u+0x00000000u; // 801B3868
  W32(c->r[1]+0x00000008u,c->r[0]); // 801B386C
  c->r[4]=c->r[31]|c->r[31]; // 801B3870
  c->r[3]=c->r[1]+0x00000008u; // 801B3874
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801B3878
  W32(c->r[1]+0x00000010u,c->r[0]); // 801B387C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B3880
  W32(c->r[1]+0x00000018u,c->r[0]); // 801B3884
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801B3888
  W32(c->r[1]+0x00000020u,c->r[0]); // 801B388C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B3890
  W32(c->r[1]+0x00000028u,c->r[0]); // 801B3894
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801B3898
  W32(c->r[1]+0x00000030u,c->r[0]); // 801B389C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B38A0
  W32(c->r[1]+0x00000038u,c->r[0]); // 801B38A4
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 801B38A8
  W32(c->r[1]+0x00000040u,c->r[0]); // 801B38AC
  W32(c->r[1]+0x00000044u,c->r[0]); // 801B38B0
  c->lr=0x801B38B8u; f_801B5440(c); // 801B38B4
  c->r[3]=c->r[1]+0x00000008u; // 801B38B8
  c->lr=0x801B38C0u; f_801BDD60(c); // 801B38BC
  c->lr=0x801B38C4u; f_801B52D0(c); // 801B38C0
L_801B38C4:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 801B38C4
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 801B38C8
  c->lr=c->r[0]; // 801B38CC
  c->r[1]=c->r[1]+0x00000050u; // 801B38D0
  return; // 801B38D4
}

// fn_801B38E0
void f_801B38E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B38E0
  c->r[0]=c->lr; // 801B38E4
  W32(c->r[1]+0x00000064u,c->r[0]); // 801B38E8
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 801B38EC
  c->r[31]=c->r[5]|c->r[5]; // 801B38F0
  W32(c->r[1]+0x00000058u,c->r[30]); // 801B38F4
  c->r[30]=c->r[4]|c->r[4]; // 801B38F8
  W32(c->r[1]+0x00000054u,c->r[29]); // 801B38FC
  c->r[29]=c->r[3]|c->r[3]; // 801B3900
  c->lr=0x801B3908u; f_801B52B0(c); // 801B3904
  cmps(c,0,(int32_t)c->r[3],0); // 801B3908
  if (!crb(c,2)) { goto L_801B3918; } // 801B390C
  c->r[3]=0u+0xFFFFFF80u; // 801B3910
  goto L_801B3984; // 801B3914
L_801B3918:;
  W32(c->r[31]+0x00000004u,c->r[30]); // 801B3918
  c->r[0]=0u+0x00000000u; // 801B391C
  c->r[4]=c->r[29]|c->r[29]; // 801B3920
  c->r[3]=c->r[1]+0x00000008u; // 801B3924
  W32(c->r[1]+0x00000008u,c->r[0]); // 801B3928
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801B392C
  W32(c->r[1]+0x00000010u,c->r[0]); // 801B3930
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B3934
  W32(c->r[1]+0x00000018u,c->r[0]); // 801B3938
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801B393C
  W32(c->r[1]+0x00000020u,c->r[0]); // 801B3940
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B3944
  W32(c->r[1]+0x00000028u,c->r[0]); // 801B3948
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801B394C
  W32(c->r[1]+0x00000030u,c->r[0]); // 801B3950
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B3954
  W32(c->r[1]+0x00000038u,c->r[0]); // 801B3958
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 801B395C
  W32(c->r[1]+0x00000040u,c->r[0]); // 801B3960
  W32(c->r[1]+0x00000044u,c->r[0]); // 801B3964
  c->lr=0x801B396Cu; f_801B5440(c); // 801B3968
  c->r[4]=0u+0x801B0000u; // 801B396C
  c->r[5]=c->r[31]|c->r[31]; // 801B3970
  c->r[3]=c->r[1]+0x00000008u; // 801B3974
  c->r[4]=c->r[4]+0x00005830u; // 801B3978
  c->lr=0x801B3980u; f_801BDE40(c); // 801B397C
  c->lr=0x801B3984u; f_801B52D0(c); // 801B3980
L_801B3984:;
  c->r[0]=R32(c->r[1]+0x00000064u); // 801B3984
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 801B3988
  c->r[30]=R32(c->r[1]+0x00000058u); // 801B398C
  c->r[29]=R32(c->r[1]+0x00000054u); // 801B3990
  c->lr=c->r[0]; // 801B3994
  c->r[1]=c->r[1]+0x00000060u; // 801B3998
  return; // 801B399C
}

// fn_801B39A0
void f_801B39A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B39A0
  c->r[0]=c->lr; // 801B39A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B39A8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B39AC
  c->r[31]=c->r[5]|c->r[5]; // 801B39B0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B39B4
  c->r[30]=c->r[4]|c->r[4]; // 801B39B8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B39BC
  c->r[29]=c->r[3]|c->r[3]; // 801B39C0
  c->lr=0x801B39C8u; f_801B52B0(c); // 801B39C4
  cmps(c,0,(int32_t)c->r[3],0); // 801B39C8
  if (crb(c,2)) { goto L_801B39E8; } // 801B39CC
  c->r[3]=R32(c->r[29]+0x00000000u); // 801B39D0
  c->r[4]=c->r[30]|c->r[30]; // 801B39D4
  c->r[5]=c->r[31]|c->r[31]; // 801B39D8
  c->lr=0x801B39E0u; f_801BE660(c); // 801B39DC
  c->lr=0x801B39E4u; f_801B52D0(c); // 801B39E0
  goto L_801B39EC; // 801B39E4
L_801B39E8:;
  c->r[3]=0u+0xFFFFFF80u; // 801B39E8
L_801B39EC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B39EC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B39F0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B39F4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B39F8
  c->lr=c->r[0]; // 801B39FC
  c->r[1]=c->r[1]+0x00000020u; // 801B3A00
  return; // 801B3A04
}

// fn_801B3A10
void f_801B3A10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B3A10
  c->r[0]=c->lr; // 801B3A14
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B3A18
  c->r[11]=c->r[1]+0x00000020u; // 801B3A1C
  c->lr=0x801B3A24u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B3A20
  c->r[27]=c->r[3]|c->r[3]; // 801B3A24
  c->r[28]=c->r[4]|c->r[4]; // 801B3A28
  c->r[29]=c->r[5]|c->r[5]; // 801B3A2C
  c->r[30]=c->r[6]|c->r[6]; // 801B3A30
  c->r[31]=c->r[7]|c->r[7]; // 801B3A34
  c->lr=0x801B3A3Cu; f_801B52B0(c); // 801B3A38
  cmps(c,0,(int32_t)c->r[3],0); // 801B3A3C
  if (!crb(c,2)) { goto L_801B3A4C; } // 801B3A40
  c->r[3]=0u+0xFFFFFF80u; // 801B3A44
  goto L_801B3A70; // 801B3A48
L_801B3A4C:;
  W32(c->r[31]+0x00000004u,c->r[30]); // 801B3A4C
  c->r[6]=0u+0x801B0000u; // 801B3A50
  c->r[4]=c->r[28]|c->r[28]; // 801B3A54
  c->r[5]=c->r[29]|c->r[29]; // 801B3A58
  c->r[3]=R32(c->r[27]+0x00000000u); // 801B3A5C
  c->r[7]=c->r[31]|c->r[31]; // 801B3A60
  c->r[6]=c->r[6]+0x00005830u; // 801B3A64
  c->lr=0x801B3A6Cu; f_801BE680(c); // 801B3A68
  c->lr=0x801B3A70u; f_801B52D0(c); // 801B3A6C
L_801B3A70:;
  c->r[11]=c->r[1]+0x00000020u; // 801B3A70
  c->lr=0x801B3A78u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B3A74
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B3A78
  c->lr=c->r[0]; // 801B3A7C
  c->r[1]=c->r[1]+0x00000020u; // 801B3A80
  return; // 801B3A84
}

// fn_801B3A90
void f_801B3A90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B3A90
  c->r[0]=c->lr; // 801B3A94
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B3A98
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B3A9C
  c->r[31]=c->r[5]|c->r[5]; // 801B3AA0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B3AA4
  c->r[30]=c->r[4]|c->r[4]; // 801B3AA8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B3AAC
  c->r[29]=c->r[3]|c->r[3]; // 801B3AB0
  c->lr=0x801B3AB8u; f_801B52B0(c); // 801B3AB4
  cmps(c,0,(int32_t)c->r[3],0); // 801B3AB8
  if (crb(c,2)) { goto L_801B3AD8; } // 801B3ABC
  c->r[3]=R32(c->r[29]+0x00000000u); // 801B3AC0
  c->r[4]=c->r[30]|c->r[30]; // 801B3AC4
  c->r[5]=c->r[31]|c->r[31]; // 801B3AC8
  c->lr=0x801B3AD0u; f_801BE730(c); // 801B3ACC
  c->lr=0x801B3AD4u; f_801B52D0(c); // 801B3AD0
  goto L_801B3ADC; // 801B3AD4
L_801B3AD8:;
  c->r[3]=0u+0xFFFFFF80u; // 801B3AD8
L_801B3ADC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B3ADC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B3AE0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B3AE4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B3AE8
  c->lr=c->r[0]; // 801B3AEC
  c->r[1]=c->r[1]+0x00000020u; // 801B3AF0
  return; // 801B3AF4
}

// fn_801B3B00
void f_801B3B00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B3B00
  c->r[0]=c->lr; // 801B3B04
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B3B08
  c->r[11]=c->r[1]+0x00000020u; // 801B3B0C
  c->lr=0x801B3B14u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B3B10
  c->r[27]=c->r[3]|c->r[3]; // 801B3B14
  c->r[28]=c->r[4]|c->r[4]; // 801B3B18
  c->r[29]=c->r[5]|c->r[5]; // 801B3B1C
  c->r[30]=c->r[6]|c->r[6]; // 801B3B20
  c->r[31]=c->r[7]|c->r[7]; // 801B3B24
  c->lr=0x801B3B2Cu; f_801B52B0(c); // 801B3B28
  cmps(c,0,(int32_t)c->r[3],0); // 801B3B2C
  if (!crb(c,2)) { goto L_801B3B3C; } // 801B3B30
  c->r[3]=0u+0xFFFFFF80u; // 801B3B34
  goto L_801B3B60; // 801B3B38
L_801B3B3C:;
  W32(c->r[31]+0x00000004u,c->r[30]); // 801B3B3C
  c->r[6]=0u+0x801B0000u; // 801B3B40
  c->r[4]=c->r[28]|c->r[28]; // 801B3B44
  c->r[5]=c->r[29]|c->r[29]; // 801B3B48
  c->r[3]=R32(c->r[27]+0x00000000u); // 801B3B4C
  c->r[7]=c->r[31]|c->r[31]; // 801B3B50
  c->r[6]=c->r[6]+0x00005830u; // 801B3B54
  c->lr=0x801B3B5Cu; f_801BE750(c); // 801B3B58
  c->lr=0x801B3B60u; f_801B52D0(c); // 801B3B5C
L_801B3B60:;
  c->r[11]=c->r[1]+0x00000020u; // 801B3B60
  c->lr=0x801B3B68u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B3B64
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B3B68
  c->lr=c->r[0]; // 801B3B6C
  c->r[1]=c->r[1]+0x00000020u; // 801B3B70
  return; // 801B3B74
}

// fn_801B3B80
void f_801B3B80(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B3B80
  c->r[0]=c->lr; // 801B3B84
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B3B88
  c->r[11]=c->r[1]+0x00000020u; // 801B3B8C
  c->lr=0x801B3B94u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B3B90
  c->r[27]=c->r[3]|c->r[3]; // 801B3B94
  c->r[28]=c->r[4]|c->r[4]; // 801B3B98
  c->r[29]=c->r[5]|c->r[5]; // 801B3B9C
  c->r[30]=c->r[6]|c->r[6]; // 801B3BA0
  c->r[31]=c->r[7]|c->r[7]; // 801B3BA4
  c->lr=0x801B3BACu; f_801B52B0(c); // 801B3BA8
  cmps(c,0,(int32_t)c->r[3],0); // 801B3BAC
  if (!crb(c,2)) { goto L_801B3BBC; } // 801B3BB0
  c->r[3]=0u+0xFFFFFF80u; // 801B3BB4
  goto L_801B3C10; // 801B3BB8
L_801B3BBC:;
  W32(c->r[31]+0x00000004u,c->r[30]); // 801B3BBC
  cmps(c,0,(int32_t)c->r[29],0); // 801B3BC0
  c->r[5]=0u+0xFFFFFFFFu; // 801B3BC4
  c->r[3]=R32(c->r[27]+0x00000000u); // 801B3BC8
  if (crb(c,2)) { goto L_801B3BE4; } // 801B3BCC
  cmps(c,0,(int32_t)c->r[29],1); // 801B3BD0
  if (crb(c,2)) { goto L_801B3BEC; } // 801B3BD4
  cmps(c,0,(int32_t)c->r[29],2); // 801B3BD8
  if (crb(c,2)) { goto L_801B3BF4; } // 801B3BDC
  goto L_801B3BF8; // 801B3BE0
L_801B3BE4:;
  c->r[5]=0u+0x00000000u; // 801B3BE4
  goto L_801B3BF8; // 801B3BE8
L_801B3BEC:;
  c->r[5]=0u+0x00000001u; // 801B3BEC
  goto L_801B3BF8; // 801B3BF0
L_801B3BF4:;
  c->r[5]=0u+0x00000002u; // 801B3BF4
L_801B3BF8:;
  c->r[6]=0u+0x801B0000u; // 801B3BF8
  c->r[4]=c->r[28]|c->r[28]; // 801B3BFC
  c->r[7]=c->r[31]|c->r[31]; // 801B3C00
  c->r[6]=c->r[6]+0x00005830u; // 801B3C04
  c->lr=0x801B3C0Cu; f_801BE5D0(c); // 801B3C08
  c->lr=0x801B3C10u; f_801B52D0(c); // 801B3C0C
L_801B3C10:;
  c->r[11]=c->r[1]+0x00000020u; // 801B3C10
  c->lr=0x801B3C18u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B3C14
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B3C18
  c->lr=c->r[0]; // 801B3C1C
  c->r[1]=c->r[1]+0x00000020u; // 801B3C20
  return; // 801B3C24
}

// fn_801B3C30
void f_801B3C30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B3C30
  c->r[0]=c->lr; // 801B3C34
  W32(c->r[1]+0x00000074u,c->r[0]); // 801B3C38
  c->r[11]=c->r[1]+0x00000070u; // 801B3C3C
  c->lr=0x801B3C44u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B3C40
  c->r[27]=c->r[3]|c->r[3]; // 801B3C44
  c->r[28]=c->r[4]|c->r[4]; // 801B3C48
  c->r[29]=c->r[5]|c->r[5]; // 801B3C4C
  c->r[31]=c->r[6]|c->r[6]; // 801B3C50
  c->r[30]=c->r[7]|c->r[7]; // 801B3C54
  c->lr=0x801B3C5Cu; f_801B52B0(c); // 801B3C58
  cmps(c,0,(int32_t)c->r[3],0); // 801B3C5C
  if (!crb(c,2)) { goto L_801B3C6C; } // 801B3C60
  c->r[3]=0u+0xFFFFFF80u; // 801B3C64
  goto L_801B3D18; // 801B3C68
L_801B3C6C:;
  W32(c->r[30]+0x00000004u,c->r[31]); // 801B3C6C
  c->r[31]=0u+0x00000000u; // 801B3C70
  c->r[4]=c->r[27]|c->r[27]; // 801B3C74
  c->r[3]=c->r[1]+0x00000018u; // 801B3C78
  W32(c->r[1]+0x00000018u,c->r[31]); // 801B3C7C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B3C80
  W32(c->r[1]+0x00000020u,c->r[31]); // 801B3C84
  W32(c->r[1]+0x00000024u,c->r[31]); // 801B3C88
  W32(c->r[1]+0x00000028u,c->r[31]); // 801B3C8C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801B3C90
  W32(c->r[1]+0x00000030u,c->r[31]); // 801B3C94
  W32(c->r[1]+0x00000034u,c->r[31]); // 801B3C98
  W32(c->r[1]+0x00000038u,c->r[31]); // 801B3C9C
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801B3CA0
  W32(c->r[1]+0x00000040u,c->r[31]); // 801B3CA4
  W32(c->r[1]+0x00000044u,c->r[31]); // 801B3CA8
  W32(c->r[1]+0x00000048u,c->r[31]); // 801B3CAC
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 801B3CB0
  W32(c->r[1]+0x00000050u,c->r[31]); // 801B3CB4
  W32(c->r[1]+0x00000054u,c->r[31]); // 801B3CB8
  c->lr=0x801B3CC0u; f_801B5440(c); // 801B3CBC
  c->r[0]=rotl(c->r[28],0)&0x00000010u; cr0(c,c->r[0]); // 801B3CC0
  if (!crb(c,2)) { goto L_801B3CD0; } // 801B3CC4
  c->r[3]=0u+0xFFFFFF9Bu; // 801B3CC8
  goto L_801B3D14; // 801B3CCC
L_801B3CD0:;
  W32(c->r[1]+0x00000008u,c->r[31]); // 801B3CD0
  c->r[3]=c->r[28]|c->r[28]; // 801B3CD4
  c->r[4]=c->r[1]+0x00000008u; // 801B3CD8
  c->r[5]=c->r[1]+0x0000000Cu; // 801B3CDC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B3CE0
  c->r[6]=c->r[1]+0x00000010u; // 801B3CE4
  W32(c->r[1]+0x00000010u,c->r[31]); // 801B3CE8
  c->lr=0x801B3CF0u; f_801B3E20(c); // 801B3CEC
  c->r[8]=0u+0x801B0000u; // 801B3CF0
  c->r[5]=R32(c->r[1]+0x00000008u); // 801B3CF4
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 801B3CF8
  c->r[4]=c->r[29]|c->r[29]; // 801B3CFC
  c->r[7]=R32(c->r[1]+0x00000010u); // 801B3D00
  c->r[9]=c->r[30]|c->r[30]; // 801B3D04
  c->r[3]=c->r[1]+0x00000018u; // 801B3D08
  c->r[8]=c->r[8]+0x00005830u; // 801B3D0C
  c->lr=0x801B3D14u; f_801BD710(c); // 801B3D10
L_801B3D14:;
  c->lr=0x801B3D18u; f_801B52D0(c); // 801B3D14
L_801B3D18:;
  c->r[11]=c->r[1]+0x00000070u; // 801B3D18
  c->lr=0x801B3D20u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B3D1C
  c->r[0]=R32(c->r[1]+0x00000074u); // 801B3D20
  c->lr=c->r[0]; // 801B3D24
  c->r[1]=c->r[1]+0x00000070u; // 801B3D28
  return; // 801B3D2C
}

// fn_801B3D30
void f_801B3D30(Ctx* __restrict c) {
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 801B3D30
  c->r[12]=c->r[1]|c->r[1]; // 801B3D34
  c->r[11]=addc(c,~c->r[11],0xFFFFFFA0u,1); // 801B3D38
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 801B3D3C
  c->r[0]=c->lr; // 801B3D40
  W32(c->r[12]+0x00000004u,c->r[0]); // 801B3D44
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 801B3D48
  c->r[31]=c->r[4]|c->r[4]; // 801B3D4C
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 801B3D50
  c->r[30]=c->r[3]|c->r[3]; // 801B3D54
  c->lr=0x801B3D5Cu; f_801B52B0(c); // 801B3D58
  cmps(c,0,(int32_t)c->r[3],0); // 801B3D5C
  if (!crb(c,2)) { goto L_801B3D6C; } // 801B3D60
  c->r[3]=0u+0xFFFFFF80u; // 801B3D64
  goto L_801B3D9C; // 801B3D68
L_801B3D6C:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 801B3D6C
  c->r[4]=c->r[1]+0x00000020u; // 801B3D70
  c->lr=0x801B3D78u; f_801BE4F0(c); // 801B3D74
  cmps(c,0,(int32_t)c->r[3],0); // 801B3D78
  if (!crb(c,2)) { goto L_801B3D98; } // 801B3D7C
  cmps(c,0,(int32_t)c->r[31],0); // 801B3D80
  if (crb(c,2)) { goto L_801B3D98; } // 801B3D84
  c->r[0]=R32(c->r[1]+0x00000020u); // 801B3D88
  W32(c->r[31]+0x00000000u,c->r[0]); // 801B3D8C
  goto L_801B3D98; // 801B3D90
  W32(0u+0x00000000u,c->r[0]); // 801B3D94
L_801B3D98:;
  c->lr=0x801B3D9Cu; f_801B52D0(c); // 801B3D98
L_801B3D9C:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 801B3D9C
  c->r[0]=R32(c->r[10]+0x00000004u); // 801B3DA0
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 801B3DA4
  c->r[30]=R32(c->r[10]+0xFFFFFFF8u); // 801B3DA8
  c->lr=c->r[0]; // 801B3DAC
  c->r[1]=c->r[10]|c->r[10]; // 801B3DB0
  return; // 801B3DB4
}

// nandComposePerm
void f_801B3DC0(Ctx* __restrict c) {
  trace_call(0x801B3DC0u);
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 801B3DC0
  c->r[7]=0u+0x00000000u; // 801B3DC4
  if (crb(c,2)) { goto L_801B3DD0; } // 801B3DC8
  c->r[7]=c->r[7]|0x00000010u; // 801B3DCC
L_801B3DD0:;
  c->r[0]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[0]); // 801B3DD0
  if (crb(c,2)) { goto L_801B3DDC; } // 801B3DD4
  c->r[7]=c->r[7]|0x00000020u; // 801B3DD8
L_801B3DDC:;
  c->r[0]=rotl(c->r[5],0)&0x00000001u; cr0(c,c->r[0]); // 801B3DDC
  if (crb(c,2)) { goto L_801B3DE8; } // 801B3DE0
  c->r[7]=c->r[7]|0x00000004u; // 801B3DE4
L_801B3DE8:;
  c->r[0]=rotl(c->r[5],0)&0x00000002u; cr0(c,c->r[0]); // 801B3DE8
  if (crb(c,2)) { goto L_801B3DF4; } // 801B3DEC
  c->r[7]=c->r[7]|0x00000008u; // 801B3DF0
L_801B3DF4:;
  c->r[0]=rotl(c->r[6],0)&0x00000001u; cr0(c,c->r[0]); // 801B3DF4
  if (crb(c,2)) { goto L_801B3E00; } // 801B3DF8
  c->r[7]=c->r[7]|0x00000001u; // 801B3DFC
L_801B3E00:;
  c->r[0]=rotl(c->r[6],0)&0x00000002u; cr0(c,c->r[0]); // 801B3E00
  if (crb(c,2)) { goto L_801B3E0C; } // 801B3E04
  c->r[7]=c->r[7]|0x00000002u; // 801B3E08
L_801B3E0C:;
  W8(c->r[3]+0x00000000u,c->r[7]); // 801B3E0C
  return; // 801B3E10
}

// fn_801B3E20
void f_801B3E20(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 801B3E20
  c->r[0]=0u+0x00000000u; // 801B3E24
  W32(c->r[4]+0x00000000u,c->r[0]); // 801B3E28
  W32(c->r[5]+0x00000000u,c->r[0]); // 801B3E2C
  W32(c->r[6]+0x00000000u,c->r[0]); // 801B3E30
  if (crb(c,2)) { goto L_801B3E44; } // 801B3E34
  c->r[0]=R32(c->r[4]+0x00000000u); // 801B3E38
  c->r[0]=c->r[0]|0x00000001u; // 801B3E3C
  W32(c->r[4]+0x00000000u,c->r[0]); // 801B3E40
L_801B3E44:;
  c->r[0]=rotl(c->r[3],0)&0x00000020u; cr0(c,c->r[0]); // 801B3E44
  if (crb(c,2)) { goto L_801B3E58; } // 801B3E48
  c->r[0]=R32(c->r[4]+0x00000000u); // 801B3E4C
  c->r[0]=c->r[0]|0x00000002u; // 801B3E50
  W32(c->r[4]+0x00000000u,c->r[0]); // 801B3E54
L_801B3E58:;
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 801B3E58
  if (crb(c,2)) { goto L_801B3E6C; } // 801B3E5C
  c->r[0]=R32(c->r[5]+0x00000000u); // 801B3E60
  c->r[0]=c->r[0]|0x00000001u; // 801B3E64
  W32(c->r[5]+0x00000000u,c->r[0]); // 801B3E68
L_801B3E6C:;
  c->r[0]=rotl(c->r[3],0)&0x00000008u; cr0(c,c->r[0]); // 801B3E6C
  if (crb(c,2)) { goto L_801B3E80; } // 801B3E70
  c->r[0]=R32(c->r[5]+0x00000000u); // 801B3E74
  c->r[0]=c->r[0]|0x00000002u; // 801B3E78
  W32(c->r[5]+0x00000000u,c->r[0]); // 801B3E7C
L_801B3E80:;
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 801B3E80
  if (crb(c,2)) { goto L_801B3E94; } // 801B3E84
  c->r[0]=R32(c->r[6]+0x00000000u); // 801B3E88
  c->r[0]=c->r[0]|0x00000001u; // 801B3E8C
  W32(c->r[6]+0x00000000u,c->r[0]); // 801B3E90
L_801B3E94:;
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 801B3E94
  if (crb(c,2)) return; // 801B3E98
  c->r[0]=R32(c->r[6]+0x00000000u); // 801B3E9C
  c->r[0]=c->r[0]|0x00000002u; // 801B3EA0
  W32(c->r[6]+0x00000000u,c->r[0]); // 801B3EA4
  return; // 801B3EA8
}

// fn_801B3EB0
void f_801B3EB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B3EB0
  c->r[0]=c->lr; // 801B3EB4
  W32(c->r[1]+0x00000074u,c->r[0]); // 801B3EB8
  c->r[0]=0u+0x00000000u; // 801B3EBC
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 801B3EC0
  c->r[31]=c->r[7]|c->r[7]; // 801B3EC4
  W32(c->r[1]+0x00000068u,c->r[30]); // 801B3EC8
  c->r[30]=c->r[6]|c->r[6]; // 801B3ECC
  W32(c->r[1]+0x00000064u,c->r[29]); // 801B3ED0
  c->r[29]=c->r[5]|c->r[5]; // 801B3ED4
  W32(c->r[1]+0x00000060u,c->r[28]); // 801B3ED8
  c->r[28]=c->r[4]|c->r[4]; // 801B3EDC
  c->r[4]=c->r[3]|c->r[3]; // 801B3EE0
  c->r[3]=c->r[1]+0x00000020u; // 801B3EE4
  W32(c->r[1]+0x00000020u,c->r[0]); // 801B3EE8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B3EEC
  W32(c->r[1]+0x00000028u,c->r[0]); // 801B3EF0
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801B3EF4
  W32(c->r[1]+0x00000030u,c->r[0]); // 801B3EF8
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B3EFC
  W32(c->r[1]+0x00000038u,c->r[0]); // 801B3F00
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 801B3F04
  W32(c->r[1]+0x00000040u,c->r[0]); // 801B3F08
  W32(c->r[1]+0x00000044u,c->r[0]); // 801B3F0C
  W32(c->r[1]+0x00000048u,c->r[0]); // 801B3F10
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 801B3F14
  W32(c->r[1]+0x00000050u,c->r[0]); // 801B3F18
  W32(c->r[1]+0x00000054u,c->r[0]); // 801B3F1C
  W32(c->r[1]+0x00000058u,c->r[0]); // 801B3F20
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 801B3F24
  c->lr=0x801B3F2Cu; f_801B5440(c); // 801B3F28
  cmps(c,0,(int32_t)c->r[31],0); // 801B3F2C
  if (!crb(c,2)) { goto L_801B3F4C; } // 801B3F30
  c->r[3]=c->r[1]+0x00000020u; // 801B3F34
  c->lr=0x801B3F3Cu; f_801B5250(c); // 801B3F38
  cmps(c,0,(int32_t)c->r[3],0); // 801B3F3C
  if (crb(c,2)) { goto L_801B3F4C; } // 801B3F40
  c->r[3]=0u+0xFFFFFF9Au; // 801B3F44
  goto L_801B3FE4; // 801B3F48
L_801B3F4C:;
  cmps(c,0,(int32_t)c->r[30],0); // 801B3F4C
  if (crb(c,2)) { goto L_801B3F84; } // 801B3F50
  c->r[10]=0u+0x801B0000u; // 801B3F54
  W32(c->r[1]+0x00000008u,c->r[29]); // 801B3F58
  c->r[4]=c->r[28]|c->r[28]; // 801B3F5C
  c->r[3]=c->r[1]+0x00000020u; // 801B3F60
  c->r[5]=c->r[28]+0x00000004u; // 801B3F64
  c->r[6]=c->r[29]+0x00000020u; // 801B3F68
  c->r[7]=c->r[29]+0x00000024u; // 801B3F6C
  c->r[8]=c->r[29]+0x00000028u; // 801B3F70
  c->r[9]=c->r[29]+0x0000002Cu; // 801B3F74
  c->r[10]=c->r[10]+0x00004010u; // 801B3F78
  c->lr=0x801B3F80u; f_801BDC20(c); // 801B3F7C
  goto L_801B3FE4; // 801B3F80
L_801B3F84:;
  c->r[0]=0u+0x00000000u; // 801B3F84
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801B3F88
  c->r[4]=c->r[28]|c->r[28]; // 801B3F8C
  c->r[3]=c->r[1]+0x00000020u; // 801B3F90
  W32(c->r[1]+0x00000018u,c->r[0]); // 801B3F94
  c->r[5]=c->r[28]+0x00000004u; // 801B3F98
  c->r[6]=c->r[1]+0x0000001Cu; // 801B3F9C
  c->r[7]=c->r[1]+0x00000018u; // 801B3FA0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B3FA4
  c->r[8]=c->r[1]+0x00000014u; // 801B3FA8
  c->r[9]=c->r[1]+0x00000010u; // 801B3FAC
  W32(c->r[1]+0x00000010u,c->r[0]); // 801B3FB0
  c->lr=0x801B3FB8u; f_801BDAC0(c); // 801B3FB4
  cmps(c,0,(int32_t)c->r[3],0); // 801B3FB8
  c->r[31]=c->r[3]|c->r[3]; // 801B3FBC
  if (!crb(c,2)) { goto L_801B3FE0; } // 801B3FC0
  c->r[4]=R32(c->r[1]+0x00000018u); // 801B3FC4
  c->r[3]=c->r[28]+0x00000007u; // 801B3FC8
  c->r[5]=R32(c->r[1]+0x00000014u); // 801B3FCC
  c->r[6]=R32(c->r[1]+0x00000010u); // 801B3FD0
  c->lr=0x801B3FD8u; f_801B3DC0(c); // 801B3FD4
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 801B3FD8
  W8(c->r[28]+0x00000006u,c->r[0]); // 801B3FDC
L_801B3FE0:;
  c->r[3]=c->r[31]|c->r[31]; // 801B3FE0
L_801B3FE4:;
  c->r[0]=R32(c->r[1]+0x00000074u); // 801B3FE4
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 801B3FE8
  c->r[30]=R32(c->r[1]+0x00000068u); // 801B3FEC
  c->r[29]=R32(c->r[1]+0x00000064u); // 801B3FF0
  c->r[28]=R32(c->r[1]+0x00000060u); // 801B3FF4
  c->lr=c->r[0]; // 801B3FF8
  c->r[1]=c->r[1]+0x00000070u; // 801B3FFC
  return; // 801B4000
}

// fn_801B4010
void f_801B4010(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B4010
  c->r[0]=c->lr; // 801B4014
  cmps(c,0,(int32_t)c->r[3],0); // 801B4018
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B401C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B4020
  c->r[31]=c->r[4]|c->r[4]; // 801B4024
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B4028
  c->r[30]=c->r[3]|c->r[3]; // 801B402C
  if (!crb(c,2)) { goto L_801B4054; } // 801B4030
  c->r[3]=R32(c->r[4]+0x00000014u); // 801B4034
  c->r[0]=R32(c->r[4]+0x00000020u); // 801B4038
  W8(c->r[3]+0x00000006u,c->r[0]); // 801B403C
  c->r[3]=c->r[3]+0x00000007u; // 801B4040
  c->r[4]=R32(c->r[4]+0x00000024u); // 801B4044
  c->r[5]=R32(c->r[31]+0x00000028u); // 801B4048
  c->r[6]=R32(c->r[31]+0x0000002Cu); // 801B404C
  c->lr=0x801B4054u; f_801B3DC0(c); // 801B4050
L_801B4054:;
  c->r[3]=c->r[30]|c->r[30]; // 801B4054
  c->lr=0x801B405Cu; f_801B52D0(c); // 801B4058
  c->r[12]=R32(c->r[31]+0x00000004u); // 801B405C
  c->r[4]=c->r[31]|c->r[31]; // 801B4060
  c->ctr=c->r[12]; // 801B4064
  if (true) { c->lr=0x801B406Cu; dispatch(c,c->ctr); } // 801B4068
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B406C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B4070
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B4074
  c->lr=c->r[0]; // 801B4078
  c->r[1]=c->r[1]+0x00000010u; // 801B407C
  return; // 801B4080
}

// fn_801B4090
void f_801B4090(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B4090
  c->r[0]=c->lr; // 801B4094
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B4098
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B409C
  c->r[31]=c->r[4]|c->r[4]; // 801B40A0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B40A4
  c->r[30]=c->r[3]|c->r[3]; // 801B40A8
  c->lr=0x801B40B0u; f_801B52B0(c); // 801B40AC
  cmps(c,0,(int32_t)c->r[3],0); // 801B40B0
  if (crb(c,2)) { goto L_801B40D8; } // 801B40B4
  c->r[3]=c->r[30]|c->r[30]; // 801B40B8
  c->r[4]=c->r[31]|c->r[31]; // 801B40BC
  c->r[5]=0u+0x00000000u; // 801B40C0
  c->r[6]=0u+0x00000000u; // 801B40C4
  c->r[7]=0u+0x00000000u; // 801B40C8
  c->lr=0x801B40D0u; f_801B3EB0(c); // 801B40CC
  c->lr=0x801B40D4u; f_801B52D0(c); // 801B40D0
  goto L_801B40DC; // 801B40D4
L_801B40D8:;
  c->r[3]=0u+0xFFFFFF80u; // 801B40D8
L_801B40DC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B40DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B40E0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B40E4
  c->lr=c->r[0]; // 801B40E8
  c->r[1]=c->r[1]+0x00000010u; // 801B40EC
  return; // 801B40F0
}

// NANDPrivateGetStatus
void f_801B4100(Ctx* __restrict c) {
  trace_call(0x801B4100u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B4100
  c->r[0]=c->lr; // 801B4104
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B4108
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B410C
  c->r[31]=c->r[4]|c->r[4]; // 801B4110
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B4114
  c->r[30]=c->r[3]|c->r[3]; // 801B4118
  c->lr=0x801B4120u; f_801B52B0(c); // 801B411C
  cmps(c,0,(int32_t)c->r[3],0); // 801B4120
  if (crb(c,2)) { goto L_801B4148; } // 801B4124
  c->r[3]=c->r[30]|c->r[30]; // 801B4128
  c->r[4]=c->r[31]|c->r[31]; // 801B412C
  c->r[5]=0u+0x00000000u; // 801B4130
  c->r[6]=0u+0x00000000u; // 801B4134
  c->r[7]=0u+0x00000001u; // 801B4138
  c->lr=0x801B4140u; f_801B3EB0(c); // 801B413C
  c->lr=0x801B4144u; f_801B52D0(c); // 801B4140
  goto L_801B414C; // 801B4144
L_801B4148:;
  c->r[3]=0u+0xFFFFFF80u; // 801B4148
L_801B414C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B414C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B4150
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B4154
  c->lr=c->r[0]; // 801B4158
  c->r[1]=c->r[1]+0x00000010u; // 801B415C
  return; // 801B4160
}

// NANDPrivateGetStatusAsync
void f_801B4170(Ctx* __restrict c) {
  trace_call(0x801B4170u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B4170
  c->r[0]=c->lr; // 801B4174
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B4178
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B417C
  c->r[31]=c->r[6]|c->r[6]; // 801B4180
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B4184
  c->r[30]=c->r[5]|c->r[5]; // 801B4188
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B418C
  c->r[29]=c->r[4]|c->r[4]; // 801B4190
  W32(c->r[1]+0x00000010u,c->r[28]); // 801B4194
  c->r[28]=c->r[3]|c->r[3]; // 801B4198
  c->lr=0x801B41A0u; f_801B52B0(c); // 801B419C
  cmps(c,0,(int32_t)c->r[3],0); // 801B41A0
  if (!crb(c,2)) { goto L_801B41B0; } // 801B41A4
  c->r[3]=0u+0xFFFFFF80u; // 801B41A8
  goto L_801B41D4; // 801B41AC
L_801B41B0:;
  W32(c->r[31]+0x00000004u,c->r[30]); // 801B41B0
  c->r[3]=c->r[28]|c->r[28]; // 801B41B4
  c->r[4]=c->r[29]|c->r[29]; // 801B41B8
  c->r[5]=c->r[31]|c->r[31]; // 801B41BC
  W32(c->r[31]+0x00000014u,c->r[29]); // 801B41C0
  c->r[6]=0u+0x00000001u; // 801B41C4
  c->r[7]=0u+0x00000001u; // 801B41C8
  c->lr=0x801B41D0u; f_801B3EB0(c); // 801B41CC
  c->lr=0x801B41D4u; f_801B52D0(c); // 801B41D0
L_801B41D4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B41D4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B41D8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B41DC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B41E0
  c->r[28]=R32(c->r[1]+0x00000010u); // 801B41E4
  c->lr=c->r[0]; // 801B41E8
  c->r[1]=c->r[1]+0x00000020u; // 801B41EC
  return; // 801B41F0
}

// nandOpen
void f_801B4200(Ctx* __restrict c) {
  trace_call(0x801B4200u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B4200
  c->r[0]=c->lr; // 801B4204
  W32(c->r[1]+0x00000064u,c->r[0]); // 801B4208
  c->r[11]=c->r[1]+0x00000060u; // 801B420C
  c->lr=0x801B4214u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B4210
  c->r[0]=0u+0x00000000u; // 801B4214
  W32(c->r[1]+0x00000008u,c->r[0]); // 801B4218
  c->r[27]=c->r[4]|c->r[4]; // 801B421C
  c->r[4]=c->r[3]|c->r[3]; // 801B4220
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801B4224
  c->r[28]=c->r[5]|c->r[5]; // 801B4228
  c->r[29]=c->r[6]|c->r[6]; // 801B422C
  c->r[30]=c->r[7]|c->r[7]; // 801B4230
  W32(c->r[1]+0x00000010u,c->r[0]); // 801B4234
  c->r[3]=c->r[1]+0x00000008u; // 801B4238
  c->r[31]=0u+0x00000000u; // 801B423C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B4240
  W32(c->r[1]+0x00000018u,c->r[0]); // 801B4244
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801B4248
  W32(c->r[1]+0x00000020u,c->r[0]); // 801B424C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B4250
  W32(c->r[1]+0x00000028u,c->r[0]); // 801B4254
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801B4258
  W32(c->r[1]+0x00000030u,c->r[0]); // 801B425C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B4260
  W32(c->r[1]+0x00000038u,c->r[0]); // 801B4264
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 801B4268
  W32(c->r[1]+0x00000040u,c->r[0]); // 801B426C
  W32(c->r[1]+0x00000044u,c->r[0]); // 801B4270
  c->lr=0x801B4278u; f_801B5440(c); // 801B4274
  cmps(c,0,(int32_t)c->r[30],0); // 801B4278
  if (!crb(c,2)) { goto L_801B4298; } // 801B427C
  c->r[3]=c->r[1]+0x00000008u; // 801B4280
  c->lr=0x801B4288u; f_801B5210(c); // 801B4284
  cmps(c,0,(int32_t)c->r[3],0); // 801B4288
  if (crb(c,2)) { goto L_801B4298; } // 801B428C
  c->r[3]=0u+0xFFFFFF9Au; // 801B4290
  goto L_801B42F8; // 801B4294
L_801B4298:;
  cmps(c,0,(int32_t)c->r[27],3); // 801B4298
  if (crb(c,2)) { goto L_801B42B4; } // 801B429C
  cmps(c,0,(int32_t)c->r[27],1); // 801B42A0
  if (crb(c,2)) { goto L_801B42BC; } // 801B42A4
  cmps(c,0,(int32_t)c->r[27],2); // 801B42A8
  if (crb(c,2)) { goto L_801B42C4; } // 801B42AC
  goto L_801B42C8; // 801B42B0
L_801B42B4:;
  c->r[31]=0u+0x00000003u; // 801B42B4
  goto L_801B42C8; // 801B42B8
L_801B42BC:;
  c->r[31]=0u+0x00000001u; // 801B42BC
  goto L_801B42C8; // 801B42C0
L_801B42C4:;
  c->r[31]=0u+0x00000002u; // 801B42C4
L_801B42C8:;
  cmps(c,0,(int32_t)c->r[29],0); // 801B42C8
  if (crb(c,2)) { goto L_801B42EC; } // 801B42CC
  c->r[5]=0u+0x801B0000u; // 801B42D0
  c->r[4]=c->r[31]|c->r[31]; // 801B42D4
  c->r[6]=c->r[28]|c->r[28]; // 801B42D8
  c->r[3]=c->r[1]+0x00000008u; // 801B42DC
  c->r[5]=c->r[5]+0x00004530u; // 801B42E0
  c->lr=0x801B42E8u; f_801BE430(c); // 801B42E4
  goto L_801B42F8; // 801B42E8
L_801B42EC:;
  c->r[4]=c->r[31]|c->r[31]; // 801B42EC
  c->r[3]=c->r[1]+0x00000008u; // 801B42F0
  c->lr=0x801B42F8u; f_801BE360(c); // 801B42F4
L_801B42F8:;
  c->r[11]=c->r[1]+0x00000060u; // 801B42F8
  c->lr=0x801B4300u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B42FC
  c->r[0]=R32(c->r[1]+0x00000064u); // 801B4300
  c->lr=c->r[0]; // 801B4304
  c->r[1]=c->r[1]+0x00000060u; // 801B4308
  return; // 801B430C
}

// NANDOpen
void f_801B4310(Ctx* __restrict c) {
  trace_call(0x801B4310u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B4310
  c->r[0]=c->lr; // 801B4314
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B4318
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B431C
  c->r[31]=c->r[5]|c->r[5]; // 801B4320
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B4324
  c->r[30]=c->r[4]|c->r[4]; // 801B4328
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B432C
  c->r[29]=c->r[3]|c->r[3]; // 801B4330
  c->lr=0x801B4338u; f_801B52B0(c); // 801B4334
  cmps(c,0,(int32_t)c->r[3],0); // 801B4338
  if (!crb(c,2)) { goto L_801B4348; } // 801B433C
  c->r[3]=0u+0xFFFFFF80u; // 801B4340
  goto L_801B4380; // 801B4344
L_801B4348:;
  c->r[3]=c->r[29]|c->r[29]; // 801B4348
  c->r[4]=c->r[31]|c->r[31]; // 801B434C
  c->r[5]=0u+0x00000000u; // 801B4350
  c->r[6]=0u+0x00000000u; // 801B4354
  c->r[7]=0u+0x00000000u; // 801B4358
  c->lr=0x801B4360u; f_801B4200(c); // 801B435C
  cmps(c,0,(int32_t)c->r[3],0); // 801B4360
  if (crb(c,0)) { goto L_801B437C; } // 801B4364
  W32(c->r[30]+0x00000000u,c->r[3]); // 801B4368
  c->r[0]=0u+0x00000001u; // 801B436C
  c->r[3]=0u+0x00000000u; // 801B4370
  W8(c->r[30]+0x0000008Au,c->r[0]); // 801B4374
  goto L_801B4380; // 801B4378
L_801B437C:;
  c->lr=0x801B4380u; f_801B52D0(c); // 801B437C
L_801B4380:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B4380
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B4384
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B4388
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B438C
  c->lr=c->r[0]; // 801B4390
  c->r[1]=c->r[1]+0x00000020u; // 801B4394
  return; // 801B4398
}

// NANDPrivateOpen
void f_801B43A0(Ctx* __restrict c) {
  trace_call(0x801B43A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B43A0
  c->r[0]=c->lr; // 801B43A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B43A8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B43AC
  c->r[31]=c->r[5]|c->r[5]; // 801B43B0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B43B4
  c->r[30]=c->r[4]|c->r[4]; // 801B43B8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B43BC
  c->r[29]=c->r[3]|c->r[3]; // 801B43C0
  c->lr=0x801B43C8u; f_801B52B0(c); // 801B43C4
  cmps(c,0,(int32_t)c->r[3],0); // 801B43C8
  if (!crb(c,2)) { goto L_801B43D8; } // 801B43CC
  c->r[3]=0u+0xFFFFFF80u; // 801B43D0
  goto L_801B4410; // 801B43D4
L_801B43D8:;
  c->r[3]=c->r[29]|c->r[29]; // 801B43D8
  c->r[4]=c->r[31]|c->r[31]; // 801B43DC
  c->r[5]=0u+0x00000000u; // 801B43E0
  c->r[6]=0u+0x00000000u; // 801B43E4
  c->r[7]=0u+0x00000001u; // 801B43E8
  c->lr=0x801B43F0u; f_801B4200(c); // 801B43EC
  cmps(c,0,(int32_t)c->r[3],0); // 801B43F0
  if (crb(c,0)) { goto L_801B440C; } // 801B43F4
  W32(c->r[30]+0x00000000u,c->r[3]); // 801B43F8
  c->r[0]=0u+0x00000001u; // 801B43FC
  c->r[3]=0u+0x00000000u; // 801B4400
  W8(c->r[30]+0x0000008Au,c->r[0]); // 801B4404
  goto L_801B4410; // 801B4408
L_801B440C:;
  c->lr=0x801B4410u; f_801B52D0(c); // 801B440C
L_801B4410:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B4410
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B4414
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B4418
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B441C
  c->lr=c->r[0]; // 801B4420
  c->r[1]=c->r[1]+0x00000020u; // 801B4424
  return; // 801B4428
}

// NANDOpenAsync
void f_801B4430(Ctx* __restrict c) {
  trace_call(0x801B4430u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B4430
  c->r[0]=c->lr; // 801B4434
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B4438
  c->r[11]=c->r[1]+0x00000020u; // 801B443C
  c->lr=0x801B4444u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B4440
  c->r[27]=c->r[3]|c->r[3]; // 801B4444
  c->r[28]=c->r[4]|c->r[4]; // 801B4448
  c->r[29]=c->r[5]|c->r[5]; // 801B444C
  c->r[30]=c->r[6]|c->r[6]; // 801B4450
  c->r[31]=c->r[7]|c->r[7]; // 801B4454
  c->lr=0x801B445Cu; f_801B52B0(c); // 801B4458
  cmps(c,0,(int32_t)c->r[3],0); // 801B445C
  if (!crb(c,2)) { goto L_801B446C; } // 801B4460
  c->r[3]=0u+0xFFFFFF80u; // 801B4464
  goto L_801B4490; // 801B4468
L_801B446C:;
  W32(c->r[31]+0x00000004u,c->r[30]); // 801B446C
  c->r[3]=c->r[27]|c->r[27]; // 801B4470
  c->r[4]=c->r[29]|c->r[29]; // 801B4474
  c->r[5]=c->r[31]|c->r[31]; // 801B4478
  W32(c->r[31]+0x00000008u,c->r[28]); // 801B447C
  c->r[6]=0u+0x00000001u; // 801B4480
  c->r[7]=0u+0x00000000u; // 801B4484
  c->lr=0x801B448Cu; f_801B4200(c); // 801B4488
  c->lr=0x801B4490u; f_801B52D0(c); // 801B448C
L_801B4490:;
  c->r[11]=c->r[1]+0x00000020u; // 801B4490
  c->lr=0x801B4498u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B4494
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B4498
  c->lr=c->r[0]; // 801B449C
  c->r[1]=c->r[1]+0x00000020u; // 801B44A0
  return; // 801B44A4
}

// NANDPrivateOpenAsync
void f_801B44B0(Ctx* __restrict c) {
  trace_call(0x801B44B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B44B0
  c->r[0]=c->lr; // 801B44B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B44B8
  c->r[11]=c->r[1]+0x00000020u; // 801B44BC
  c->lr=0x801B44C4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B44C0
  c->r[27]=c->r[3]|c->r[3]; // 801B44C4
  c->r[28]=c->r[4]|c->r[4]; // 801B44C8
  c->r[29]=c->r[5]|c->r[5]; // 801B44CC
  c->r[30]=c->r[6]|c->r[6]; // 801B44D0
  c->r[31]=c->r[7]|c->r[7]; // 801B44D4
  c->lr=0x801B44DCu; f_801B52B0(c); // 801B44D8
  cmps(c,0,(int32_t)c->r[3],0); // 801B44DC
  if (!crb(c,2)) { goto L_801B44EC; } // 801B44E0
  c->r[3]=0u+0xFFFFFF80u; // 801B44E4
  goto L_801B4510; // 801B44E8
L_801B44EC:;
  W32(c->r[31]+0x00000004u,c->r[30]); // 801B44EC
  c->r[3]=c->r[27]|c->r[27]; // 801B44F0
  c->r[4]=c->r[29]|c->r[29]; // 801B44F4
  c->r[5]=c->r[31]|c->r[31]; // 801B44F8
  W32(c->r[31]+0x00000008u,c->r[28]); // 801B44FC
  c->r[6]=0u+0x00000001u; // 801B4500
  c->r[7]=0u+0x00000001u; // 801B4504
  c->lr=0x801B450Cu; f_801B4200(c); // 801B4508
  c->lr=0x801B4510u; f_801B52D0(c); // 801B450C
L_801B4510:;
  c->r[11]=c->r[1]+0x00000020u; // 801B4510
  c->lr=0x801B4518u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B4514
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B4518
  c->lr=c->r[0]; // 801B451C
  c->r[1]=c->r[1]+0x00000020u; // 801B4520
  return; // 801B4524
}

// nandOpenCallback
void f_801B4530(Ctx* __restrict c) {
  trace_call(0x801B4530u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B4530
  c->r[0]=c->lr; // 801B4534
  cmps(c,0,(int32_t)c->r[3],0); // 801B4538
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B453C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B4540
  c->r[31]=c->r[4]|c->r[4]; // 801B4544
  if (crb(c,0)) { goto L_801B4580; } // 801B4548
  c->r[5]=R32(c->r[4]+0x00000008u); // 801B454C
  c->r[6]=0u+0x00000002u; // 801B4550
  c->r[0]=0u+0x00000001u; // 801B4554
  W32(c->r[5]+0x00000000u,c->r[3]); // 801B4558
  c->r[3]=0u+0x00000000u; // 801B455C
  c->r[5]=R32(c->r[4]+0x00000008u); // 801B4560
  W8(c->r[5]+0x00000089u,c->r[6]); // 801B4564
  c->r[5]=R32(c->r[4]+0x00000008u); // 801B4568
  W8(c->r[5]+0x0000008Au,c->r[0]); // 801B456C
  c->r[12]=R32(c->r[4]+0x00000004u); // 801B4570
  c->ctr=c->r[12]; // 801B4574
  if (true) { c->lr=0x801B457Cu; dispatch(c,c->ctr); } // 801B4578
  goto L_801B4594; // 801B457C
L_801B4580:;
  c->lr=0x801B4584u; f_801B52D0(c); // 801B4580
  c->r[12]=R32(c->r[31]+0x00000004u); // 801B4584
  c->r[4]=c->r[31]|c->r[31]; // 801B4588
  c->ctr=c->r[12]; // 801B458C
  if (true) { c->lr=0x801B4594u; dispatch(c,c->ctr); } // 801B4590
L_801B4594:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B4594
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B4598
  c->lr=c->r[0]; // 801B459C
  c->r[1]=c->r[1]+0x00000010u; // 801B45A0
  return; // 801B45A4
}

// NANDClose
void f_801B45B0(Ctx* __restrict c) {
  trace_call(0x801B45B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B45B0
  c->r[0]=c->lr; // 801B45B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B45B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B45BC
  c->r[31]=c->r[3]|c->r[3]; // 801B45C0
  c->lr=0x801B45C8u; f_801B52B0(c); // 801B45C4
  cmps(c,0,(int32_t)c->r[3],0); // 801B45C8
  if (!crb(c,2)) { goto L_801B45D8; } // 801B45CC
  c->r[3]=0u+0xFFFFFF80u; // 801B45D0
  goto L_801B4608; // 801B45D4
L_801B45D8:;
  c->r[0]=R8(c->r[31]+0x0000008Au); // 801B45D8
  cmpu(c,0,c->r[0],0x00000001u); // 801B45DC
  if (crb(c,2)) { goto L_801B45EC; } // 801B45E0
  c->r[3]=0u+0xFFFFFFF8u; // 801B45E4
  goto L_801B4608; // 801B45E8
L_801B45EC:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 801B45EC
  c->lr=0x801B45F4u; f_801BE800(c); // 801B45F0
  cmps(c,0,(int32_t)c->r[3],0); // 801B45F4
  if (!crb(c,2)) { goto L_801B4604; } // 801B45F8
  c->r[0]=0u+0x00000002u; // 801B45FC
  W8(c->r[31]+0x0000008Au,c->r[0]); // 801B4600
L_801B4604:;
  c->lr=0x801B4608u; f_801B52D0(c); // 801B4604
L_801B4608:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B4608
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B460C
  c->lr=c->r[0]; // 801B4610
  c->r[1]=c->r[1]+0x00000010u; // 801B4614
  return; // 801B4618
}

// NANDCloseAsync
void f_801B4620(Ctx* __restrict c) {
  trace_call(0x801B4620u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B4620
  c->r[0]=c->lr; // 801B4624
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B4628
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B462C
  c->r[31]=c->r[5]|c->r[5]; // 801B4630
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B4634
  c->r[30]=c->r[4]|c->r[4]; // 801B4638
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B463C
  c->r[29]=c->r[3]|c->r[3]; // 801B4640
  c->lr=0x801B4648u; f_801B52B0(c); // 801B4644
  cmps(c,0,(int32_t)c->r[3],0); // 801B4648
  if (!crb(c,2)) { goto L_801B4658; } // 801B464C
  c->r[3]=0u+0xFFFFFF80u; // 801B4650
  goto L_801B468C; // 801B4654
L_801B4658:;
  c->r[0]=R8(c->r[29]+0x0000008Au); // 801B4658
  cmpu(c,0,c->r[0],0x00000001u); // 801B465C
  if (crb(c,2)) { goto L_801B466C; } // 801B4660
  c->r[3]=0u+0xFFFFFFF8u; // 801B4664
  goto L_801B468C; // 801B4668
L_801B466C:;
  W32(c->r[31]+0x00000004u,c->r[30]); // 801B466C
  c->r[4]=0u+0x801B0000u; // 801B4670
  c->r[5]=c->r[31]|c->r[31]; // 801B4674
  W32(c->r[31]+0x00000008u,c->r[29]); // 801B4678
  c->r[4]=c->r[4]+0x00004C60u; // 801B467C
  c->r[3]=R32(c->r[29]+0x00000000u); // 801B4680
  c->lr=0x801B4688u; f_801BE810(c); // 801B4684
  c->lr=0x801B468Cu; f_801B52D0(c); // 801B4688
L_801B468C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B468C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B4690
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B4694
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B4698
  c->lr=c->r[0]; // 801B469C
  c->r[1]=c->r[1]+0x00000020u; // 801B46A0
  return; // 801B46A4
}

