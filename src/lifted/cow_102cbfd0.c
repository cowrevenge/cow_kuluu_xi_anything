/* f_0x102cbfd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_102cbfd0(Guest* g)
{
    uint32_t al_m135c;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    const uint32_t sp0 = g->esp;
    const uint32_t sp1 = (sp0 - 0x4u) & 0xfffffff0u;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 5000u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp1 - 0x136cu, in_esi);
    wr32(sp1 - 0x1370u, in_edi);
    wr32(sp1 - 0x1354u, arg2 + 0x2800u);
    esi = arg2 + 0x2800u;
    edi = sp1 - 0x1230u;
    ecx = 0x8au;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp1 - 0x135cu, 0x100u);
    wr32(sp1 - 0x1358u, arg1 - arg2);
    eax = sp1 - 0x1020u;
    edi = arg2;
    al_m135c = 0x100u;
L_102cc01d: ;
    { /* movups xmm0, xmmword ptr [ecx + edi] */ uint32_t A = arg1 + edi - arg2; g->xmm[0] = rd128(A); }
    { /* movaps xmmword ptr [esp + 0x120], xmm0 */ uint32_t A = sp1 - 0x1250u; wr128(A, g->xmm[0]); }
    { /* movups xmmword ptr [ecx], xmm0 */ uint32_t A = eax + 0x18u; wr128(A, g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [edx] */ uint32_t A = COW_IMG(0x10343b70u); g->xmm[0] = rd128(A); }
    { /* movaps xmmword ptr [esp + 0x40], xmm0 */ uint32_t A = sp1 - 0x1330u; wr128(A, g->xmm[0]); }
    { /* movaps xmm1, xmmword ptr [ecx] */ uint32_t A = COW_IMG(0x10343b60u); g->xmm[1] = rd128(A); }
    { /* movaps xmm2, xmmword ptr [edx] */ uint32_t A = COW_IMG(0x10343b50u); g->xmm[2] = rd128(A); }
    { /* movaps xmmword ptr [esp + 0x50], xmm1 */ uint32_t A = sp1 - 0x1320u; wr128(A, g->xmm[1]); }
    { /* movaps xmmword ptr [esp + 0x70], xmm2 */ uint32_t A = sp1 - 0x1300u; wr128(A, g->xmm[2]); }
    { /* movaps xmm3, xmmword ptr [ecx] */ uint32_t A = COW_IMG(0x10343b40u); g->xmm[3] = rd128(A); }
    { /* movaps xmm4, xmmword ptr [edx] */ uint32_t A = COW_IMG(0x10343b30u); g->xmm[4] = rd128(A); }
    { /* movaps xmmword ptr [esp + 0x60], xmm3 */ uint32_t A = sp1 - 0x1310u; wr128(A, g->xmm[3]); }
    { /* movaps xmmword ptr [esp + 0x30], xmm4 */ uint32_t A = sp1 - 0x1340u; wr128(A, g->xmm[4]); }
    { /* movaps xmm5, xmmword ptr [ecx] */ uint32_t A = COW_IMG(0x10343b20u); g->xmm[5] = rd128(A); }
    { /* movaps xmm6, xmmword ptr [edx] */ uint32_t A = COW_IMG(0x10343b10u); g->xmm[6] = rd128(A); }
    { /* movaps xmmword ptr [esp + 0xe0], xmm5 */ uint32_t A = sp1 - 0x1290u; wr128(A, g->xmm[5]); }
    { /* movaps xmmword ptr [esp + 0x100], xmm6 */ uint32_t A = sp1 - 0x1270u; wr128(A, g->xmm[6]); }
    { /* movaps xmm7, xmmword ptr [ecx] */ uint32_t A = COW_IMG(0x10343b00u); g->xmm[7] = rd128(A); }
    { /* movaps xmmword ptr [esp + 0xb0], xmm7 */ uint32_t A = sp1 - 0x12c0u; wr128(A, g->xmm[7]); }
    { /* movaps xmm7, xmmword ptr [edx] */ uint32_t A = COW_IMG(0x10343af0u); g->xmm[7] = rd128(A); }
    { /* movaps xmmword ptr [esp + 0xc0], xmm7 */ uint32_t A = sp1 - 0x12b0u; wr128(A, g->xmm[7]); }
    { /* movaps xmm7, xmmword ptr [ecx] */ uint32_t A = COW_IMG(0x10343ae0u); g->xmm[7] = rd128(A); }
    { /* movaps xmmword ptr [esp + 0x80], xmm7 */ uint32_t A = sp1 - 0x12f0u; wr128(A, g->xmm[7]); }
    { /* movaps xmm7, xmmword ptr [edx] */ uint32_t A = COW_IMG(0x10343ad0u); g->xmm[7] = rd128(A); }
    { /* movaps xmmword ptr [esp + 0x90], xmm7 */ uint32_t A = sp1 - 0x12e0u; wr128(A, g->xmm[7]); }
    { /* movaps xmm7, xmmword ptr [edx] */ uint32_t A = COW_IMG(0x10343b80u); g->xmm[7] = rd128(A); }
    { /* movaps xmmword ptr [esp + 0xa0], xmm7 */ uint32_t A = sp1 - 0x12d0u; wr128(A, g->xmm[7]); }
    { /* movaps xmm7, xmmword ptr [eax] */ uint32_t A = eax; g->xmm[7] = rd128(A); }
    { /* mulps xmm0, xmm7 */ g->xmm[0] = sse_mulps(g->xmm[0], g->xmm[7]); }
    { /* movaps xmmword ptr [esp + 0xf0], xmm0 */ uint32_t A = sp1 - 0x1280u; wr128(A, g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [edx] */ uint32_t A = eax - 0x10u; g->xmm[0] = rd128(A); }
    { /* mulps xmm1, xmm0 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[0]); }
    { /* movaps xmmword ptr [esp + 0x110], xmm1 */ uint32_t A = sp1 - 0x1260u; wr128(A, g->xmm[1]); }
    { /* movaps xmm0, xmmword ptr [edx] */ uint32_t A = eax - 0x20u; g->xmm[0] = rd128(A); }
    { /* mulps xmm2, xmm0 */ g->xmm[2] = sse_mulps(g->xmm[2], g->xmm[0]); }
    { /* movaps xmm1, xmmword ptr [esp + 0xb0] */ uint32_t A = sp1 - 0x12c0u; g->xmm[1] = rd128(A); }
    { /* movaps xmm0, xmmword ptr [edx] */ uint32_t A = eax - 0x30u; g->xmm[0] = rd128(A); }
    { /* mulps xmm3, xmm0 */ g->xmm[3] = sse_mulps(g->xmm[3], g->xmm[0]); }
    { /* movaps xmmword ptr [esp + 0xd0], xmm2 */ uint32_t A = sp1 - 0x12a0u; wr128(A, g->xmm[2]); }
    { /* movaps xmm0, xmmword ptr [edx] */ uint32_t A = eax - 0x40u; g->xmm[0] = rd128(A); }
    { /* mulps xmm4, xmm0 */ g->xmm[4] = sse_mulps(g->xmm[4], g->xmm[0]); }
    { /* movaps xmm2, xmmword ptr [esp + 0xc0] */ uint32_t A = sp1 - 0x12b0u; g->xmm[2] = rd128(A); }
    { /* movaps xmm0, xmmword ptr [edx] */ uint32_t A = eax - 0x50u; g->xmm[0] = rd128(A); }
    { /* mulps xmm5, xmm0 */ g->xmm[5] = sse_mulps(g->xmm[5], g->xmm[0]); }
    { /* movaps xmmword ptr [esp + 0x130], xmm3 */ uint32_t A = sp1 - 0x1240u; wr128(A, g->xmm[3]); }
    { /* movaps xmm0, xmmword ptr [edx] */ uint32_t A = eax - 0x60u; g->xmm[0] = rd128(A); }
    { /* mulps xmm6, xmm0 */ g->xmm[6] = sse_mulps(g->xmm[6], g->xmm[0]); }
    { /* movaps xmm3, xmmword ptr [esp + 0x80] */ uint32_t A = sp1 - 0x12f0u; g->xmm[3] = rd128(A); }
    { /* movaps xmm0, xmmword ptr [edx] */ uint32_t A = eax - 0x70u; g->xmm[0] = rd128(A); }
    { /* mulps xmm1, xmm0 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[0]); }
    { /* movaps xmmword ptr [esp + 0x20], xmm4 */ uint32_t A = sp1 - 0x1350u; wr128(A, g->xmm[4]); }
    { /* movaps xmm0, xmmword ptr [edx] */ uint32_t A = eax - 0x80u; g->xmm[0] = rd128(A); }
    { /* mulps xmm2, xmm0 */ g->xmm[2] = sse_mulps(g->xmm[2], g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [edx] */ uint32_t A = eax - 0x90u; g->xmm[0] = rd128(A); }
    { /* mulps xmm3, xmm0 */ g->xmm[3] = sse_mulps(g->xmm[3], g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [ecx] */ uint32_t A = eax - 0xa0u; g->xmm[0] = rd128(A); }
    { /* movaps xmm4, xmmword ptr [esp + 0x90] */ uint32_t A = sp1 - 0x12e0u; g->xmm[4] = rd128(A); }
    { /* movaps xmm7, xmmword ptr [esp + 0xa0] */ uint32_t A = sp1 - 0x12d0u; g->xmm[7] = rd128(A); }
    { /* mulps xmm4, xmm0 */ g->xmm[4] = sse_mulps(g->xmm[4], g->xmm[0]); }
    { /* movups xmm0, xmmword ptr [esi] */ uint32_t A = eax + 0x10u; g->xmm[0] = rd128(A); }
    { /* mulps xmm7, xmm0 */ g->xmm[7] = sse_mulps(g->xmm[7], g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [esp + 0x20] */ uint32_t A = sp1 - 0x1350u; g->xmm[0] = rd128(A); }
    { /* addps xmm7, xmm4 */ g->xmm[7] = sse_addps(g->xmm[7], g->xmm[4]); }
    { /* addps xmm7, xmm3 */ g->xmm[7] = sse_addps(g->xmm[7], g->xmm[3]); }
    { /* addps xmm7, xmm2 */ g->xmm[7] = sse_addps(g->xmm[7], g->xmm[2]); }
    { /* addps xmm7, xmm1 */ g->xmm[7] = sse_addps(g->xmm[7], g->xmm[1]); }
    { /* movaps xmm1, xmmword ptr [esp + 0x110] */ uint32_t A = sp1 - 0x1260u; g->xmm[1] = rd128(A); }
    { /* addps xmm7, xmm6 */ g->xmm[7] = sse_addps(g->xmm[7], g->xmm[6]); }
    { /* addps xmm7, xmm5 */ g->xmm[7] = sse_addps(g->xmm[7], g->xmm[5]); }
    { /* addps xmm7, xmm0 */ g->xmm[7] = sse_addps(g->xmm[7], g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [esp + 0x130] */ uint32_t A = sp1 - 0x1240u; g->xmm[0] = rd128(A); }
    { /* addps xmm7, xmm0 */ g->xmm[7] = sse_addps(g->xmm[7], g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [esp + 0xd0] */ uint32_t A = sp1 - 0x12a0u; g->xmm[0] = rd128(A); }
    { /* addps xmm7, xmm0 */ g->xmm[7] = sse_addps(g->xmm[7], g->xmm[0]); }
    { /* movaps xmm0, xmm7 */ g->xmm[0] = g->xmm[7]; }
    { /* addps xmm0, xmm1 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[1]); }
    { /* movaps xmm1, xmmword ptr [esp + 0xf0] */ uint32_t A = sp1 - 0x1280u; g->xmm[1] = rd128(A); }
    { /* addps xmm0, xmm1 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[1]); }
    { /* movaps xmmword ptr [esp + 0x20], xmm0 */ uint32_t A = sp1 - 0x1350u; wr128(A, g->xmm[0]); }
    { /* movups xmm0, xmmword ptr [edx] */ uint32_t A = eax + 8u; g->xmm[0] = rd128(A); }
    { /* movaps xmm1, xmm0 */ g->xmm[1] = g->xmm[0]; }
    { /* movaps xmm0, xmmword ptr [esp + 0x40] */ uint32_t A = sp1 - 0x1330u; g->xmm[0] = rd128(A); }
    { /* mulps xmm0, xmm1 */ g->xmm[0] = sse_mulps(g->xmm[0], g->xmm[1]); }
    { /* movaps xmmword ptr [esp + 0x40], xmm0 */ uint32_t A = sp1 - 0x1330u; wr128(A, g->xmm[0]); }
    { /* movups xmm0, xmmword ptr [edx] */ uint32_t A = eax - 8u; g->xmm[0] = rd128(A); }
    { /* movaps xmm1, xmm0 */ g->xmm[1] = g->xmm[0]; }
    { /* movaps xmm0, xmmword ptr [esp + 0x50] */ uint32_t A = sp1 - 0x1320u; g->xmm[0] = rd128(A); }
    { /* mulps xmm0, xmm1 */ g->xmm[0] = sse_mulps(g->xmm[0], g->xmm[1]); }
    { /* movaps xmmword ptr [esp + 0x50], xmm0 */ uint32_t A = sp1 - 0x1320u; wr128(A, g->xmm[0]); }
    { /* movups xmm0, xmmword ptr [edx] */ uint32_t A = eax - 0x18u; g->xmm[0] = rd128(A); }
    { /* movaps xmm1, xmm0 */ g->xmm[1] = g->xmm[0]; }
    { /* movaps xmm0, xmmword ptr [esp + 0x70] */ uint32_t A = sp1 - 0x1300u; g->xmm[0] = rd128(A); }
    { /* mulps xmm0, xmm1 */ g->xmm[0] = sse_mulps(g->xmm[0], g->xmm[1]); }
    { /* movaps xmmword ptr [esp + 0x70], xmm0 */ uint32_t A = sp1 - 0x1300u; wr128(A, g->xmm[0]); }
    { /* movups xmm0, xmmword ptr [edx] */ uint32_t A = eax - 0x28u; g->xmm[0] = rd128(A); }
    { /* movaps xmm1, xmm0 */ g->xmm[1] = g->xmm[0]; }
    { /* movaps xmm0, xmmword ptr [esp + 0x60] */ uint32_t A = sp1 - 0x1310u; g->xmm[0] = rd128(A); }
    { /* mulps xmm0, xmm1 */ g->xmm[0] = sse_mulps(g->xmm[0], g->xmm[1]); }
    { /* movaps xmmword ptr [esp + 0x60], xmm0 */ uint32_t A = sp1 - 0x1310u; wr128(A, g->xmm[0]); }
    { /* movups xmm0, xmmword ptr [edx] */ uint32_t A = eax - 0x38u; g->xmm[0] = rd128(A); }
    { /* movaps xmm1, xmm0 */ g->xmm[1] = g->xmm[0]; }
    { /* movaps xmm0, xmmword ptr [esp + 0x30] */ uint32_t A = sp1 - 0x1340u; g->xmm[0] = rd128(A); }
    { /* mulps xmm0, xmm1 */ g->xmm[0] = sse_mulps(g->xmm[0], g->xmm[1]); }
    { /* movaps xmmword ptr [esp + 0x30], xmm0 */ uint32_t A = sp1 - 0x1340u; wr128(A, g->xmm[0]); }
    { /* movups xmm0, xmmword ptr [edx] */ uint32_t A = eax - 0x48u; g->xmm[0] = rd128(A); }
    { /* movaps xmm1, xmm0 */ g->xmm[1] = g->xmm[0]; }
    { /* movaps xmm0, xmmword ptr [esp + 0xe0] */ uint32_t A = sp1 - 0x1290u; g->xmm[0] = rd128(A); }
    { /* mulps xmm0, xmm1 */ g->xmm[0] = sse_mulps(g->xmm[0], g->xmm[1]); }
    { /* movaps xmm1, xmm0 */ g->xmm[1] = g->xmm[0]; }
    { /* movups xmm0, xmmword ptr [edx] */ uint32_t A = eax - 0x58u; g->xmm[0] = rd128(A); }
    { /* movaps xmm2, xmm0 */ g->xmm[2] = g->xmm[0]; }
    { /* movaps xmm0, xmmword ptr [esp + 0x100] */ uint32_t A = sp1 - 0x1270u; g->xmm[0] = rd128(A); }
    { /* mulps xmm0, xmm2 */ g->xmm[0] = sse_mulps(g->xmm[0], g->xmm[2]); }
    { /* movaps xmm2, xmm0 */ g->xmm[2] = g->xmm[0]; }
    { /* movups xmm0, xmmword ptr [edx] */ uint32_t A = eax - 0x68u; g->xmm[0] = rd128(A); }
    { /* movaps xmm3, xmm0 */ g->xmm[3] = g->xmm[0]; }
    { /* movaps xmm0, xmmword ptr [esp + 0xb0] */ uint32_t A = sp1 - 0x12c0u; g->xmm[0] = rd128(A); }
    { /* mulps xmm0, xmm3 */ g->xmm[0] = sse_mulps(g->xmm[0], g->xmm[3]); }
    { /* movaps xmm3, xmm0 */ g->xmm[3] = g->xmm[0]; }
    { /* movups xmm0, xmmword ptr [edx] */ uint32_t A = eax - 0x78u; g->xmm[0] = rd128(A); }
    { /* movaps xmm4, xmm0 */ g->xmm[4] = g->xmm[0]; }
    { /* movaps xmm0, xmmword ptr [esp + 0xc0] */ uint32_t A = sp1 - 0x12b0u; g->xmm[0] = rd128(A); }
    { /* mulps xmm0, xmm4 */ g->xmm[0] = sse_mulps(g->xmm[0], g->xmm[4]); }
    { /* movaps xmm4, xmm0 */ g->xmm[4] = g->xmm[0]; }
    { /* movups xmm0, xmmword ptr [edx] */ uint32_t A = eax - 0x88u; g->xmm[0] = rd128(A); }
    { /* movaps xmm5, xmm0 */ g->xmm[5] = g->xmm[0]; }
    { /* movaps xmm0, xmmword ptr [esp + 0x80] */ uint32_t A = sp1 - 0x12f0u; g->xmm[0] = rd128(A); }
    { /* mulps xmm0, xmm5 */ g->xmm[0] = sse_mulps(g->xmm[0], g->xmm[5]); }
    { /* movaps xmm5, xmm0 */ g->xmm[5] = g->xmm[0]; }
    { /* movups xmm0, xmmword ptr [edx] */ uint32_t A = eax - 0x98u; g->xmm[0] = rd128(A); }
    { /* movaps xmm6, xmm0 */ g->xmm[6] = g->xmm[0]; }
    { /* movaps xmm0, xmmword ptr [esp + 0x90] */ uint32_t A = sp1 - 0x12e0u; g->xmm[0] = rd128(A); }
    { /* mulps xmm0, xmm6 */ g->xmm[0] = sse_mulps(g->xmm[0], g->xmm[6]); }
    { /* movaps xmm6, xmm0 */ g->xmm[6] = g->xmm[0]; }
    { /* movaps xmm0, xmmword ptr [esp + 0xa0] */ uint32_t A = sp1 - 0x12d0u; g->xmm[0] = rd128(A); }
    { /* mulps xmm0, xmmword ptr [esp + 0x120] */ uint32_t A = sp1 - 0x1250u; g->xmm[0] = sse_mulps(g->xmm[0], rd128(A)); }
    { /* addps xmm0, xmm6 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[6]); }
    { /* addps xmm0, xmm5 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[5]); }
    { /* addps xmm0, xmm4 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[4]); }
    { /* addps xmm0, xmm3 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[3]); }
    { /* addps xmm0, xmm2 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[2]); }
    { /* addps xmm0, xmm1 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[1]); }
    { /* movaps xmm1, xmmword ptr [esp + 0x30] */ uint32_t A = sp1 - 0x1340u; g->xmm[1] = rd128(A); }
    { /* addps xmm0, xmm1 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[1]); }
    { /* movaps xmm1, xmmword ptr [esp + 0x60] */ uint32_t A = sp1 - 0x1310u; g->xmm[1] = rd128(A); }
    { /* addps xmm0, xmm1 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[1]); }
    { /* movaps xmm1, xmmword ptr [esp + 0x70] */ uint32_t A = sp1 - 0x1300u; g->xmm[1] = rd128(A); }
    { /* addps xmm0, xmm1 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[1]); }
    { /* movaps xmm1, xmm0 */ g->xmm[1] = g->xmm[0]; }
    { /* movaps xmm0, xmmword ptr [esp + 0x50] */ uint32_t A = sp1 - 0x1320u; g->xmm[0] = rd128(A); }
    { /* addps xmm1, xmm0 */ g->xmm[1] = sse_addps(g->xmm[1], g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [esp + 0x40] */ uint32_t A = sp1 - 0x1330u; g->xmm[0] = rd128(A); }
    { /* addps xmm1, xmm0 */ g->xmm[1] = sse_addps(g->xmm[1], g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [esp + 0x20] */ uint32_t A = sp1 - 0x1350u; g->xmm[0] = rd128(A); }
    { /* movaps xmm2, xmm0 */ g->xmm[2] = g->xmm[0]; }
    { /* unpckhps xmm0, xmm1 */ g->xmm[0] = sse_unpckhps(g->xmm[0], g->xmm[1]); }
    { /* unpcklps xmm2, xmm1 */ g->xmm[2] = sse_unpcklps(g->xmm[2], g->xmm[1]); }
    { /* movaps xmm1, xmmword ptr [0x10343ac0] */ uint32_t A = COW_IMG(0x10343ac0u); g->xmm[1] = rd128(A); }
    { /* addps xmm0, xmm2 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[2]); }
    { /* movaps xmm2, xmm0 */ g->xmm[2] = g->xmm[0]; }
    { /* shufps xmm2, xmm0, 0x4e */ g->xmm[2] = sse_shufps(g->xmm[2], g->xmm[0], 78); }
    { /* xorps xmm2, xmm1 */ g->xmm[2] = sse_xorps(g->xmm[2], g->xmm[1]); }
    { /* movaps xmm1, xmm2 */ g->xmm[1] = g->xmm[2]; }
    { /* addps xmm1, xmm0 */ g->xmm[1] = sse_addps(g->xmm[1], g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [edx] */ uint32_t A = eax - 0xb0u; g->xmm[0] = rd128(A); }
    { /* movaps xmmword ptr [esp + 0x20], xmm1 */ uint32_t A = sp1 - 0x1350u; wr128(A, g->xmm[1]); }
    { /* movaps xmm1, xmmword ptr [edx] */ uint32_t A = COW_IMG(0x10343cf0u); g->xmm[1] = rd128(A); }
    { /* mulps xmm1, xmm0 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[0]); }
    { /* movaps xmmword ptr [esp + 0xb0], xmm1 */ uint32_t A = sp1 - 0x12c0u; wr128(A, g->xmm[1]); }
    { /* movaps xmm0, xmmword ptr [edx] */ uint32_t A = eax - 0xc0u; g->xmm[0] = rd128(A); }
    { /* movaps xmm1, xmmword ptr [edx] */ uint32_t A = COW_IMG(0x10343ce0u); g->xmm[1] = rd128(A); }
    { /* mulps xmm1, xmm0 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[0]); }
    { /* movaps xmmword ptr [esp + 0xc0], xmm1 */ uint32_t A = sp1 - 0x12b0u; wr128(A, g->xmm[1]); }
    { /* movaps xmm0, xmmword ptr [edx] */ uint32_t A = eax - 0xd0u; g->xmm[0] = rd128(A); }
    { /* movaps xmm1, xmmword ptr [edx] */ uint32_t A = COW_IMG(0x10343cd0u); g->xmm[1] = rd128(A); }
    { /* mulps xmm1, xmm0 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[0]); }
    { /* movaps xmmword ptr [esp + 0x80], xmm1 */ uint32_t A = sp1 - 0x12f0u; wr128(A, g->xmm[1]); }
    { /* movaps xmm0, xmmword ptr [edx] */ uint32_t A = eax - 0xe0u; g->xmm[0] = rd128(A); }
    { /* movaps xmm1, xmmword ptr [edx] */ uint32_t A = COW_IMG(0x10343cc0u); g->xmm[1] = rd128(A); }
    { /* mulps xmm1, xmm0 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[0]); }
    { /* movaps xmmword ptr [esp + 0x90], xmm1 */ uint32_t A = sp1 - 0x12e0u; wr128(A, g->xmm[1]); }
    { /* movaps xmm0, xmmword ptr [edx] */ uint32_t A = eax - 0xf0u; g->xmm[0] = rd128(A); }
    { /* movaps xmm1, xmmword ptr [edx] */ uint32_t A = COW_IMG(0x10343cb0u); g->xmm[1] = rd128(A); }
    { /* mulps xmm1, xmm0 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[0]); }
    { /* movaps xmmword ptr [esp + 0xa0], xmm1 */ uint32_t A = sp1 - 0x12d0u; wr128(A, g->xmm[1]); }
    { /* movaps xmm0, xmmword ptr [edx] */ uint32_t A = eax - 0x100u; g->xmm[0] = rd128(A); }
    { /* movaps xmm1, xmmword ptr [edx] */ uint32_t A = COW_IMG(0x10343ca0u); g->xmm[1] = rd128(A); }
    { /* mulps xmm1, xmm0 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[0]); }
    { /* movaps xmmword ptr [esp + 0x130], xmm1 */ uint32_t A = sp1 - 0x1240u; wr128(A, g->xmm[1]); }
    { /* movaps xmm0, xmmword ptr [edx] */ uint32_t A = eax - 0x110u; g->xmm[0] = rd128(A); }
    { /* movaps xmm1, xmmword ptr [edx] */ uint32_t A = COW_IMG(0x10343c90u); g->xmm[1] = rd128(A); }
    { /* mulps xmm1, xmm0 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[0]); }
    { /* movaps xmmword ptr [esp + 0xd0], xmm1 */ uint32_t A = sp1 - 0x12a0u; wr128(A, g->xmm[1]); }
    { /* movaps xmm0, xmmword ptr [eax - 0x120] */ uint32_t A = eax - 0x120u; g->xmm[0] = rd128(A); }
    { /* movaps xmm1, xmmword ptr [edx] */ uint32_t A = COW_IMG(0x10343c80u); g->xmm[1] = rd128(A); }
    { /* mulps xmm1, xmm0 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[0]); }
    { /* movaps xmmword ptr [esp + 0x110], xmm1 */ uint32_t A = sp1 - 0x1260u; wr128(A, g->xmm[1]); }
    { /* movaps xmm0, xmmword ptr [edx] */ uint32_t A = eax - 0x130u; g->xmm[0] = rd128(A); }
    { /* movaps xmm1, xmmword ptr [edx] */ uint32_t A = COW_IMG(0x10343c70u); g->xmm[1] = rd128(A); }
    { /* mulps xmm1, xmm0 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[0]); }
    { /* movaps xmmword ptr [esp + 0xf0], xmm1 */ uint32_t A = sp1 - 0x1280u; wr128(A, g->xmm[1]); }
    { /* movaps xmm0, xmmword ptr [edx] */ uint32_t A = eax - 0x140u; g->xmm[0] = rd128(A); }
    { /* movaps xmm1, xmmword ptr [edx] */ uint32_t A = COW_IMG(0x10343c60u); g->xmm[1] = rd128(A); }
    { /* mulps xmm1, xmm0 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[0]); }
    { /* movaps xmmword ptr [esp + 0x40], xmm1 */ uint32_t A = sp1 - 0x1330u; wr128(A, g->xmm[1]); }
    { /* movaps xmm0, xmmword ptr [edx] */ uint32_t A = eax - 0x150u; g->xmm[0] = rd128(A); }
    { /* movaps xmm1, xmmword ptr [edx] */ uint32_t A = COW_IMG(0x10343c50u); g->xmm[1] = rd128(A); }
    { /* mulps xmm1, xmm0 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[0]); }
    { /* movaps xmmword ptr [esp + 0x50], xmm1 */ uint32_t A = sp1 - 0x1320u; wr128(A, g->xmm[1]); }
    { /* movaps xmm0, xmmword ptr [edx] */ uint32_t A = eax - 0x160u; g->xmm[0] = rd128(A); }
    { /* movaps xmm1, xmmword ptr [edx] */ uint32_t A = COW_IMG(0x10343c40u); g->xmm[1] = rd128(A); }
    { /* mulps xmm1, xmm0 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[0]); }
    { /* movaps xmmword ptr [esp + 0x70], xmm1 */ uint32_t A = sp1 - 0x1300u; wr128(A, g->xmm[1]); }
    { /* movaps xmm0, xmmword ptr [edx] */ uint32_t A = eax - 0x170u; g->xmm[0] = rd128(A); }
    { /* movaps xmm1, xmmword ptr [edx] */ uint32_t A = COW_IMG(0x10343c30u); g->xmm[1] = rd128(A); }
    { /* mulps xmm1, xmm0 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[0]); }
    { /* movaps xmmword ptr [esp + 0x60], xmm1 */ uint32_t A = sp1 - 0x1310u; wr128(A, g->xmm[1]); }
    { /* movaps xmm0, xmmword ptr [edx] */ uint32_t A = eax - 0x180u; g->xmm[0] = rd128(A); }
    { /* movaps xmm1, xmmword ptr [edx] */ uint32_t A = COW_IMG(0x10343c20u); g->xmm[1] = rd128(A); }
    { /* mulps xmm1, xmm0 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[0]); }
    { /* movaps xmmword ptr [esp + 0x30], xmm1 */ uint32_t A = sp1 - 0x1340u; wr128(A, g->xmm[1]); }
    { /* movaps xmm0, xmmword ptr [edx] */ uint32_t A = eax - 0x190u; g->xmm[0] = rd128(A); }
    { /* movaps xmm1, xmmword ptr [edx] */ uint32_t A = COW_IMG(0x10343c10u); g->xmm[1] = rd128(A); }
    { /* mulps xmm1, xmm0 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[0]); }
    { /* movaps xmmword ptr [esp + 0xe0], xmm1 */ uint32_t A = sp1 - 0x1290u; wr128(A, g->xmm[1]); }
    { /* movaps xmm0, xmmword ptr [edx] */ uint32_t A = eax - 0x1a0u; g->xmm[0] = rd128(A); }
    { /* movaps xmm1, xmmword ptr [edx] */ uint32_t A = COW_IMG(0x10343c00u); g->xmm[1] = rd128(A); }
    { /* mulps xmm1, xmm0 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[0]); }
    { /* movaps xmmword ptr [esp + 0x100], xmm1 */ uint32_t A = sp1 - 0x1270u; wr128(A, g->xmm[1]); }
    { /* movaps xmm0, xmmword ptr [edx] */ uint32_t A = eax - 0x1b0u; g->xmm[0] = rd128(A); }
    { /* movaps xmm1, xmmword ptr [edx] */ uint32_t A = COW_IMG(0x10343bf0u); g->xmm[1] = rd128(A); }
    { /* mulps xmm1, xmm0 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[0]); }
    { /* movaps xmmword ptr [esp + 0x120], xmm1 */ uint32_t A = sp1 - 0x1250u; wr128(A, g->xmm[1]); }
    { /* movaps xmm0, xmmword ptr [edx] */ uint32_t A = eax - 0x1c0u; g->xmm[0] = rd128(A); }
    { /* movaps xmm1, xmmword ptr [edx] */ uint32_t A = COW_IMG(0x10343be0u); g->xmm[1] = rd128(A); }
    { /* mulps xmm1, xmm0 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [edx] */ uint32_t A = eax - 0x1d0u; g->xmm[0] = rd128(A); }
    { /* movaps xmm2, xmmword ptr [edx] */ uint32_t A = COW_IMG(0x10343bd0u); g->xmm[2] = rd128(A); }
    { /* mulps xmm2, xmm0 */ g->xmm[2] = sse_mulps(g->xmm[2], g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [edx] */ uint32_t A = eax - 0x1e0u; g->xmm[0] = rd128(A); }
    { /* movaps xmm3, xmmword ptr [edx] */ uint32_t A = COW_IMG(0x10343bc0u); g->xmm[3] = rd128(A); }
    { /* mulps xmm3, xmm0 */ g->xmm[3] = sse_mulps(g->xmm[3], g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [edx] */ uint32_t A = eax - 0x1f0u; g->xmm[0] = rd128(A); }
    { /* movaps xmm4, xmmword ptr [edx] */ uint32_t A = COW_IMG(0x10343bb0u); g->xmm[4] = rd128(A); }
    { /* mulps xmm4, xmm0 */ g->xmm[4] = sse_mulps(g->xmm[4], g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [edx] */ uint32_t A = eax - 0x200u; g->xmm[0] = rd128(A); }
    { /* movaps xmm5, xmmword ptr [edx] */ uint32_t A = COW_IMG(0x10343ba0u); g->xmm[5] = rd128(A); }
    { /* mulps xmm5, xmm0 */ g->xmm[5] = sse_mulps(g->xmm[5], g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [eax] */ uint32_t A = eax - 0x210u; g->xmm[0] = rd128(A); }
    { /* movaps xmm6, xmmword ptr [eax] */ uint32_t A = COW_IMG(0x10343b90u); g->xmm[6] = rd128(A); }
    { /* mulps xmm6, xmm0 */ g->xmm[6] = sse_mulps(g->xmm[6], g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [edx] */ uint32_t A = COW_IMG(0x10343d00u); g->xmm[0] = rd128(A); }
    { /* mulps xmm0, xmmword ptr [esp + 0x20] */ uint32_t A = sp1 - 0x1350u; g->xmm[0] = sse_mulps(g->xmm[0], rd128(A)); }
    { /* addps xmm0, xmm6 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[6]); }
    { /* addps xmm0, xmm5 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[5]); }
    { /* addps xmm0, xmm4 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[4]); }
    { /* addps xmm0, xmm3 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[3]); }
    { /* addps xmm0, xmm2 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[2]); }
    { /* addps xmm0, xmm1 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[1]); }
    { /* movaps xmm1, xmmword ptr [esp + 0x120] */ uint32_t A = sp1 - 0x1250u; g->xmm[1] = rd128(A); }
    { /* addps xmm0, xmm1 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[1]); }
    { /* movaps xmm1, xmmword ptr [esp + 0x100] */ uint32_t A = sp1 - 0x1270u; g->xmm[1] = rd128(A); }
    { /* addps xmm0, xmm1 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[1]); }
    { /* movaps xmm1, xmmword ptr [esp + 0xe0] */ uint32_t A = sp1 - 0x1290u; g->xmm[1] = rd128(A); }
    { /* addps xmm0, xmm1 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[1]); }
    { /* movaps xmm1, xmmword ptr [esp + 0x30] */ uint32_t A = sp1 - 0x1340u; g->xmm[1] = rd128(A); }
    { /* addps xmm0, xmm1 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[1]); }
    { /* movaps xmm1, xmmword ptr [esp + 0x60] */ uint32_t A = sp1 - 0x1310u; g->xmm[1] = rd128(A); }
    { /* addps xmm0, xmm1 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[1]); }
    { /* movaps xmm1, xmmword ptr [esp + 0x70] */ uint32_t A = sp1 - 0x1300u; g->xmm[1] = rd128(A); }
    { /* addps xmm0, xmm1 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[1]); }
    { /* movaps xmm1, xmmword ptr [esp + 0x50] */ uint32_t A = sp1 - 0x1320u; g->xmm[1] = rd128(A); }
    { /* addps xmm0, xmm1 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[1]); }
    { /* movaps xmm1, xmmword ptr [esp + 0x40] */ uint32_t A = sp1 - 0x1330u; g->xmm[1] = rd128(A); }
    { /* addps xmm0, xmm1 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[1]); }
    { /* movaps xmm1, xmmword ptr [esp + 0xf0] */ uint32_t A = sp1 - 0x1280u; g->xmm[1] = rd128(A); }
    { /* addps xmm0, xmm1 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[1]); }
    { /* movaps xmm1, xmmword ptr [esp + 0x110] */ uint32_t A = sp1 - 0x1260u; g->xmm[1] = rd128(A); }
    { /* addps xmm0, xmm1 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[1]); }
    { /* movaps xmm1, xmmword ptr [esp + 0xd0] */ uint32_t A = sp1 - 0x12a0u; g->xmm[1] = rd128(A); }
    { /* addps xmm0, xmm1 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[1]); }
    { /* movaps xmm1, xmmword ptr [esp + 0x130] */ uint32_t A = sp1 - 0x1240u; g->xmm[1] = rd128(A); }
    { /* addps xmm0, xmm1 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[1]); }
    { /* movaps xmm1, xmmword ptr [esp + 0xa0] */ uint32_t A = sp1 - 0x12d0u; g->xmm[1] = rd128(A); }
    { /* addps xmm0, xmm1 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[1]); }
    { /* movaps xmm1, xmmword ptr [esp + 0x90] */ uint32_t A = sp1 - 0x12e0u; g->xmm[1] = rd128(A); }
    { /* addps xmm0, xmm1 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[1]); }
    { /* movaps xmm1, xmmword ptr [esp + 0x80] */ uint32_t A = sp1 - 0x12f0u; g->xmm[1] = rd128(A); }
    { /* addps xmm0, xmm1 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[1]); }
    { /* movaps xmm1, xmmword ptr [esp + 0xc0] */ uint32_t A = sp1 - 0x12b0u; g->xmm[1] = rd128(A); }
    { /* addps xmm0, xmm1 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[1]); }
    { /* movaps xmm1, xmmword ptr [esp + 0xb0] */ uint32_t A = sp1 - 0x12c0u; g->xmm[1] = rd128(A); }
    { /* addps xmm0, xmm1 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[1]); }
    { /* movaps xmm1, xmmword ptr [0x10343d10] */ uint32_t A = COW_IMG(0x10343d10u); g->xmm[1] = rd128(A); }
    { /* movaps xmm2, xmm0 */ g->xmm[2] = g->xmm[0]; }
    { /* xorps xmm2, xmm1 */ g->xmm[2] = sse_xorps(g->xmm[2], g->xmm[1]); }
    { /* movaps xmm1, xmm0 */ g->xmm[1] = g->xmm[0]; }
    { /* shufps xmm1, xmm0, 0xb1 */ g->xmm[1] = sse_shufps(g->xmm[1], g->xmm[0], 177); }
    { /* movaps xmm0, xmm1 */ g->xmm[0] = g->xmm[1]; }
    { /* addps xmm0, xmm2 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[2]); }
    { /* movaps xmm1, xmm0 */ g->xmm[1] = g->xmm[0]; }
    { /* shufps xmm1, xmm0, 0xe1 */ g->xmm[1] = sse_shufps(g->xmm[1], g->xmm[0], 225); }
    { /* movaps xmm0, xmmword ptr [esp + 0x20] */ uint32_t A = sp1 - 0x1350u; g->xmm[0] = rd128(A); }
    { /* movaps xmmword ptr [ecx], xmm0 */ uint32_t A = eax - 0xa0u; wr128(A, g->xmm[0]); }
    { /* movaps xmmword ptr [edi - 0x10], xmm1 */ uint32_t A = edi; wr128(A, g->xmm[1]); }
    wr32(sp1 - 0x135cu, al_m135c - 1u);
    if (al_m135c != 1u)
    {
        eax = eax + 0x10u;
        edi = edi + 0x10u;
        al_m135c = al_m135c - 1u;
        goto L_102cc019;
    }
    eax = eax + 0x10u;
    esi = sp1 - 0x230u;
    edi = arg2 + 0x2800u;
    ecx = 0x8au;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->edx = COW_IMG(0x10343d00u);
    return eax;
L_102cc019: ;
    goto L_102cc01d;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102cbfd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102cbfd0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
