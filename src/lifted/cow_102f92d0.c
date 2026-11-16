/* f_0x102f92d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_102f92d0(Guest* g)
{
    unsigned af;
    unsigned cf;
    unsigned of;
    unsigned pf;
    unsigned sf;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t sp1 = (sp0 - 0xcu) & 0xfffffff0u;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 304u);

    wr32(sp0 - 4u, in_ebx);
    { /* movlps xmm0, qword ptr [eax + 8] */ uint32_t A = arg3 + 8u; g->xmm[0].q[0] = rd64(A); }
    { /* movlps xmm4, qword ptr [eax + 0x28] */ uint32_t A = arg3 + 0x28u; g->xmm[4].q[0] = rd64(A); }
    { /* movhps xmm0, qword ptr [eax + 0x18] */ uint32_t A = arg3 + 0x18u; g->xmm[0].q[1] = rd64(A); }
    { /* movhps xmm4, qword ptr [eax + 0x38] */ uint32_t A = arg3 + 0x38u; g->xmm[4].q[1] = rd64(A); }
    { /* movlps xmm3, qword ptr [eax + 0x20] */ uint32_t A = arg3 + 0x20u; g->xmm[3].q[0] = rd64(A); }
    { /* movlps xmm1, qword ptr [eax] */ uint32_t A = arg3; g->xmm[1].q[0] = rd64(A); }
    { /* movhps xmm3, qword ptr [eax + 0x30] */ uint32_t A = arg3 + 0x30u; g->xmm[3].q[1] = rd64(A); }
    { /* movhps xmm1, qword ptr [eax + 0x10] */ uint32_t A = arg3 + 0x10u; g->xmm[1].q[1] = rd64(A); }
    { /* movaps xmm5, xmm0 */ g->xmm[5] = g->xmm[0]; }
    { /* shufps xmm0, xmm4, 0x88 */ g->xmm[0] = sse_shufps(g->xmm[0], g->xmm[4], 136); }
    { /* shufps xmm4, xmm5, 0xdd */ g->xmm[4] = sse_shufps(g->xmm[4], g->xmm[5], 221); }
    { /* movaps xmm5, xmm4 */ g->xmm[5] = g->xmm[4]; }
    { /* mulps xmm5, xmm0 */ g->xmm[5] = sse_mulps(g->xmm[5], g->xmm[0]); }
    { /* shufps xmm5, xmm5, 0xb1 */ g->xmm[5] = sse_shufps(g->xmm[5], g->xmm[5], 177); }
    { /* movaps xmm6, xmm5 */ g->xmm[6] = g->xmm[5]; }
    { /* shufps xmm5, xmm5, 0x4e */ g->xmm[5] = sse_shufps(g->xmm[5], g->xmm[5], 78); }
    { /* movaps xmm7, xmm3 */ g->xmm[7] = g->xmm[3]; }
    { /* shufps xmm3, xmm1, 0xdd */ g->xmm[3] = sse_shufps(g->xmm[3], g->xmm[1], 221); }
    { /* shufps xmm1, xmm7, 0x88 */ g->xmm[1] = sse_shufps(g->xmm[1], g->xmm[7], 136); }
    { /* movaps xmm7, xmm3 */ g->xmm[7] = g->xmm[3]; }
    { /* mulps xmm3, xmm5 */ g->xmm[3] = sse_mulps(g->xmm[3], g->xmm[5]); }
    { /* xorps xmm2, xmm2 */ g->xmm[2] = sse_xorps(g->xmm[2], g->xmm[2]); }
    { /* mulps xmm5, xmm1 */ g->xmm[5] = sse_mulps(g->xmm[5], g->xmm[1]); }
    { /* movaps xmmword ptr [esp + 0x30], xmm5 */ uint32_t A = sp1 - 0xe0u; wr128(A, g->xmm[5]); }
    { /* movaps xmm5, xmm7 */ g->xmm[5] = g->xmm[7]; }
    { /* mulps xmm7, xmm6 */ g->xmm[7] = sse_mulps(g->xmm[7], g->xmm[6]); }
    { /* mulps xmm6, xmm1 */ g->xmm[6] = sse_mulps(g->xmm[6], g->xmm[1]); }
    { /* subps xmm3, xmm7 */ g->xmm[3] = sse_subps(g->xmm[3], g->xmm[7]); }
    { /* movaps xmm7, xmm5 */ g->xmm[7] = g->xmm[5]; }
    { /* mulps xmm5, xmm0 */ g->xmm[5] = sse_mulps(g->xmm[5], g->xmm[0]); }
    { /* shufps xmm0, xmm0, 0x4e */ g->xmm[0] = sse_shufps(g->xmm[0], g->xmm[0], 78); }
    { /* shufps xmm5, xmm5, 0xb1 */ g->xmm[5] = sse_shufps(g->xmm[5], g->xmm[5], 177); }
    { /* movaps xmmword ptr [esp + 0x40], xmm6 */ uint32_t A = sp1 - 0xd0u; wr128(A, g->xmm[6]); }
    { /* movaps xmm6, xmm4 */ g->xmm[6] = g->xmm[4]; }
    { /* mulps xmm6, xmm5 */ g->xmm[6] = sse_mulps(g->xmm[6], g->xmm[5]); }
    { /* addps xmm6, xmm3 */ g->xmm[6] = sse_addps(g->xmm[6], g->xmm[3]); }
    { /* movaps xmm3, xmm5 */ g->xmm[3] = g->xmm[5]; }
    { /* shufps xmm5, xmm5, 0x4e */ g->xmm[5] = sse_shufps(g->xmm[5], g->xmm[5], 78); }
    { /* mulps xmm3, xmm1 */ g->xmm[3] = sse_mulps(g->xmm[3], g->xmm[1]); }
    { /* movaps xmmword ptr [esp + 0x50], xmm3 */ uint32_t A = sp1 - 0xc0u; wr128(A, g->xmm[3]); }
    { /* movaps xmm3, xmm4 */ g->xmm[3] = g->xmm[4]; }
    { /* mulps xmm3, xmm5 */ g->xmm[3] = sse_mulps(g->xmm[3], g->xmm[5]); }
    { /* mulps xmm5, xmm1 */ g->xmm[5] = sse_mulps(g->xmm[5], g->xmm[1]); }
    { /* subps xmm6, xmm3 */ g->xmm[6] = sse_subps(g->xmm[6], g->xmm[3]); }
    { /* movaps xmm3, xmm7 */ g->xmm[3] = g->xmm[7]; }
    { /* shufps xmm7, xmm7, 0x4e */ g->xmm[7] = sse_shufps(g->xmm[7], g->xmm[7], 78); }
    { /* mulps xmm7, xmm4 */ g->xmm[7] = sse_mulps(g->xmm[7], g->xmm[4]); }
    { /* shufps xmm7, xmm7, 0xb1 */ g->xmm[7] = sse_shufps(g->xmm[7], g->xmm[7], 177); }
    { /* movaps xmmword ptr [esp + 0x60], xmm5 */ uint32_t A = sp1 - 0xb0u; wr128(A, g->xmm[5]); }
    { /* movaps xmm5, xmm0 */ g->xmm[5] = g->xmm[0]; }
    { /* mulps xmm0, xmm7 */ g->xmm[0] = sse_mulps(g->xmm[0], g->xmm[7]); }
    { /* addps xmm0, xmm6 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[6]); }
    { /* movaps xmm6, xmm7 */ g->xmm[6] = g->xmm[7]; }
    { /* shufps xmm7, xmm7, 0x4e */ g->xmm[7] = sse_shufps(g->xmm[7], g->xmm[7], 78); }
    { /* mulps xmm6, xmm1 */ g->xmm[6] = sse_mulps(g->xmm[6], g->xmm[1]); }
    { /* movaps xmmword ptr [esp + 0x70], xmm4 */ uint32_t A = sp1 - 0xa0u; wr128(A, g->xmm[4]); }
    { /* movaps xmm4, xmm5 */ g->xmm[4] = g->xmm[5]; }
    { /* mulps xmm5, xmm7 */ g->xmm[5] = sse_mulps(g->xmm[5], g->xmm[7]); }
    { /* mulps xmm7, xmm1 */ g->xmm[7] = sse_mulps(g->xmm[7], g->xmm[1]); }
    { /* subps xmm0, xmm5 */ g->xmm[0] = sse_subps(g->xmm[0], g->xmm[5]); }
    { /* subps xmm7, xmm6 */ g->xmm[7] = sse_subps(g->xmm[7], g->xmm[6]); }
    { /* movaps xmm5, xmm1 */ g->xmm[5] = g->xmm[1]; }
    { /* mulps xmm1, xmm0 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[0]); }
    { /* shufps xmm7, xmm7, 0x4e */ g->xmm[7] = sse_shufps(g->xmm[7], g->xmm[7], 78); }
    { /* movaps xmm6, xmm1 */ g->xmm[6] = g->xmm[1]; }
    { /* shufps xmm1, xmm1, 0x4e */ g->xmm[1] = sse_shufps(g->xmm[1], g->xmm[1], 78); }
    { /* movaps xmmword ptr [esp + 0x20], xmm0 */ uint32_t A = sp1 - 0xf0u; wr128(A, g->xmm[0]); }
    { /* addps xmm1, xmm6 */ g->xmm[1] = sse_addps(g->xmm[1], g->xmm[6]); }
    { /* movaps xmm0, xmm1 */ g->xmm[0] = g->xmm[1]; }
    { /* shufps xmm1, xmm1, 0xb1 */ g->xmm[1] = sse_shufps(g->xmm[1], g->xmm[1], 177); }
    { /* addss xmm1, xmm0 */ g->xmm[1] = sse_addss(g->xmm[1], g->xmm[0]); }
    { /* movaps xmmword ptr [esp + 0x10], xmm1 */ uint32_t A = sp1 - 0x100u; wr128(A, g->xmm[1]); }
    { /* movaps xmm0, xmm5 */ g->xmm[0] = g->xmm[5]; }
    { /* mulps xmm5, xmm3 */ g->xmm[5] = sse_mulps(g->xmm[5], g->xmm[3]); }
    { /* shufps xmm5, xmm5, 0xb1 */ g->xmm[5] = sse_shufps(g->xmm[5], g->xmm[5], 177); }
    { /* movaps xmm6, xmm5 */ g->xmm[6] = g->xmm[5]; }
    { /* shufps xmm5, xmm5, 0x4e */ g->xmm[5] = sse_shufps(g->xmm[5], g->xmm[5], 78); }
    { /* movaps xmmword ptr [esp + 0x80], xmm4 */ uint32_t A = sp1 - 0x90u; wr128(A, g->xmm[4]); }
    { /* movaps xmm4, xmmword ptr [esp + 0x70] */ uint32_t A = sp1 - 0xa0u; g->xmm[4] = rd128(A); }
    { /* movaps xmmword ptr [esp + 0x90], xmm3 */ uint32_t A = sp1 - 0x80u; wr128(A, g->xmm[3]); }
    { /* movaps xmm3, xmm4 */ g->xmm[3] = g->xmm[4]; }
    { /* mulps xmm3, xmm6 */ g->xmm[3] = sse_mulps(g->xmm[3], g->xmm[6]); }
    { /* addps xmm3, xmm7 */ g->xmm[3] = sse_addps(g->xmm[3], g->xmm[7]); }
    { /* movaps xmm7, xmm4 */ g->xmm[7] = g->xmm[4]; }
    { /* mulps xmm7, xmm5 */ g->xmm[7] = sse_mulps(g->xmm[7], g->xmm[5]); }
    { /* subps xmm7, xmm3 */ g->xmm[7] = sse_subps(g->xmm[7], g->xmm[3]); }
    { /* movaps xmm3, xmm4 */ g->xmm[3] = g->xmm[4]; }
    { /* mulps xmm3, xmm0 */ g->xmm[3] = sse_mulps(g->xmm[3], g->xmm[0]); }
    { /* shufps xmm3, xmm3, 0xb1 */ g->xmm[3] = sse_shufps(g->xmm[3], g->xmm[3], 177); }
    { /* movaps xmmword ptr [esp + 0xa0], xmm5 */ uint32_t A = sp1 - 0x70u; wr128(A, g->xmm[5]); }
    { /* movaps xmm5, xmmword ptr [esp + 0x90] */ uint32_t A = sp1 - 0x80u; g->xmm[5] = rd128(A); }
    { /* movaps xmmword ptr [esp + 0xb0], xmm6 */ uint32_t A = sp1 - 0x60u; wr128(A, g->xmm[6]); }
    { /* movaps xmm6, xmm5 */ g->xmm[6] = g->xmm[5]; }
    { /* mulps xmm5, xmm3 */ g->xmm[5] = sse_mulps(g->xmm[5], g->xmm[3]); }
    { /* addps xmm5, xmm7 */ g->xmm[5] = sse_addps(g->xmm[5], g->xmm[7]); }
    { /* movaps xmm7, xmm3 */ g->xmm[7] = g->xmm[3]; }
    { /* shufps xmm3, xmm3, 0x4e */ g->xmm[3] = sse_shufps(g->xmm[3], g->xmm[3], 78); }
    { /* movaps xmmword ptr [esp + 0xc0], xmm4 */ uint32_t A = sp1 - 0x50u; wr128(A, g->xmm[4]); }
    { /* movaps xmm4, xmm6 */ g->xmm[4] = g->xmm[6]; }
    { /* mulps xmm4, xmm3 */ g->xmm[4] = sse_mulps(g->xmm[4], g->xmm[3]); }
    { /* movaps xmmword ptr [esp + 0xd0], xmm6 */ uint32_t A = sp1 - 0x40u; wr128(A, g->xmm[6]); }
    { /* movaps xmm6, xmm5 */ g->xmm[6] = g->xmm[5]; }
    { /* subps xmm6, xmm4 */ g->xmm[6] = sse_subps(g->xmm[6], g->xmm[4]); }
    { /* movaps xmm4, xmmword ptr [esp + 0x30] */ uint32_t A = sp1 - 0xe0u; g->xmm[4] = rd128(A); }
    { /* movaps xmm5, xmmword ptr [esp + 0x40] */ uint32_t A = sp1 - 0xd0u; g->xmm[5] = rd128(A); }
    { /* subps xmm4, xmm5 */ g->xmm[4] = sse_subps(g->xmm[4], g->xmm[5]); }
    { /* shufps xmm4, xmm4, 0x4e */ g->xmm[4] = sse_shufps(g->xmm[4], g->xmm[4], 78); }
    { /* movaps xmm5, xmmword ptr [esp + 0x80] */ uint32_t A = sp1 - 0x90u; g->xmm[5] = rd128(A); }
    { /* mulps xmm7, xmm5 */ g->xmm[7] = sse_mulps(g->xmm[7], g->xmm[5]); }
    { /* mulps xmm3, xmm5 */ g->xmm[3] = sse_mulps(g->xmm[3], g->xmm[5]); }
    { /* subps xmm4, xmm7 */ g->xmm[4] = sse_subps(g->xmm[4], g->xmm[7]); }
    { /* mulps xmm0, xmm5 */ g->xmm[0] = sse_mulps(g->xmm[0], g->xmm[5]); }
    { /* addps xmm4, xmm3 */ g->xmm[4] = sse_addps(g->xmm[4], g->xmm[3]); }
    { /* shufps xmm0, xmm0, 0xb1 */ g->xmm[0] = sse_shufps(g->xmm[0], g->xmm[0], 177); }
    { /* movaps xmm3, xmm0 */ g->xmm[3] = g->xmm[0]; }
    { /* shufps xmm0, xmm0, 0x4e */ g->xmm[0] = sse_shufps(g->xmm[0], g->xmm[0], 78); }
    { /* movaps xmm7, xmmword ptr [esp + 0xc0] */ uint32_t A = sp1 - 0x50u; g->xmm[7] = rd128(A); }
    { /* movaps xmmword ptr [esp + 0xe0], xmm6 */ uint32_t A = sp1 - 0x30u; wr128(A, g->xmm[6]); }
    { /* movaps xmm6, xmm7 */ g->xmm[6] = g->xmm[7]; }
    { /* mulps xmm7, xmm3 */ g->xmm[7] = sse_mulps(g->xmm[7], g->xmm[3]); }
    { /* mulps xmm6, xmm0 */ g->xmm[6] = sse_mulps(g->xmm[6], g->xmm[0]); }
    { /* addps xmm4, xmm7 */ g->xmm[4] = sse_addps(g->xmm[4], g->xmm[7]); }
    { /* subps xmm4, xmm6 */ g->xmm[4] = sse_subps(g->xmm[4], g->xmm[6]); }
    { /* movaps xmm6, xmmword ptr [esp + 0x60] */ uint32_t A = sp1 - 0xb0u; g->xmm[6] = rd128(A); }
    { /* movaps xmm7, xmmword ptr [esp + 0x50] */ uint32_t A = sp1 - 0xc0u; g->xmm[7] = rd128(A); }
    { /* subps xmm6, xmm7 */ g->xmm[6] = sse_subps(g->xmm[6], g->xmm[7]); }
    { /* shufps xmm6, xmm6, 0x4e */ g->xmm[6] = sse_shufps(g->xmm[6], g->xmm[6], 78); }
    { /* movaps xmm7, xmmword ptr [esp + 0xb0] */ uint32_t A = sp1 - 0x60u; g->xmm[7] = rd128(A); }
    { /* mulps xmm7, xmm5 */ g->xmm[7] = sse_mulps(g->xmm[7], g->xmm[5]); }
    { /* subps xmm7, xmm6 */ g->xmm[7] = sse_subps(g->xmm[7], g->xmm[6]); }
    { /* movaps xmm6, xmmword ptr [esp + 0xa0] */ uint32_t A = sp1 - 0x70u; g->xmm[6] = rd128(A); }
    { /* mulps xmm5, xmm6 */ g->xmm[5] = sse_mulps(g->xmm[5], g->xmm[6]); }
    { /* subps xmm7, xmm5 */ g->xmm[7] = sse_subps(g->xmm[7], g->xmm[5]); }
    { /* movaps xmm5, xmmword ptr [esp + 0xd0] */ uint32_t A = sp1 - 0x40u; g->xmm[5] = rd128(A); }
    { /* mulps xmm3, xmm5 */ g->xmm[3] = sse_mulps(g->xmm[3], g->xmm[5]); }
    { /* mulps xmm5, xmm0 */ g->xmm[5] = sse_mulps(g->xmm[5], g->xmm[0]); }
    { /* subps xmm7, xmm3 */ g->xmm[7] = sse_subps(g->xmm[7], g->xmm[3]); }
    { /* movaps xmm0, xmm2 */ g->xmm[0] = g->xmm[2]; }
    { /* movaps xmm2, xmm5 */ g->xmm[2] = g->xmm[5]; }
    { /* addps xmm2, xmm7 */ g->xmm[2] = sse_addps(g->xmm[2], g->xmm[7]); }
    cf = sp1 + 8u < 0x118u;
    pf = PARITY((uint8_t)(sp1 - 0x110u));
    af = (sp1 + 8u ^ 0x118u ^ sp1 - 0x110u) >> 4u & 1u;
    zf = sp1 == 0x110u;
    sf = (int32_t)(sp1 - 0x110u) < 0;
    of = ((sp1 + 8u ^ 0x118u) & (sp1 + 8u ^ sp1 - 0x110u)) >> 0x1fu;
    { /* comiss xmm1, xmm0 */ { const float x = g->xmm[1].f[0], y = g->xmm[0].f[0]; if (x != x || y != y) { zf = pf = cf = 1; } else { zf = x == y; pf = 0; cf = x < y; } of = sf = af = 0; } }
    { /* movaps xmm6, xmmword ptr [esp + 0xe0] */ uint32_t A = sp1 - 0x30u; g->xmm[6] = rd128(A); }
    if (zf) goto L_102f957b;
    if (arg2 != 0u)
    {
        { /* movaps xmm0, xmm1 */ g->xmm[0] = g->xmm[1]; }
        { /* movss dword ptr [eax], xmm0 */ uint32_t A = arg2; wr32(A, g->xmm[0].d[0]); }
    }
    { /* movaps xmm0, xmm1 */ g->xmm[0] = g->xmm[1]; }
    { /* movaps xmm1, xmmword ptr [esp + 0x20] */ uint32_t A = sp1 - 0xf0u; g->xmm[1] = rd128(A); }
    { /* movaps xmm3, xmm0 */ g->xmm[3] = g->xmm[0]; }
    { /* rcpss xmm0, xmm0 */ g->xmm[0] = sse_rcpss(g->xmm[0], g->xmm[0]); }
    { /* movaps xmm5, xmm0 */ g->xmm[5] = g->xmm[0]; }
    { /* mulss xmm0, xmm0 */ g->xmm[0] = sse_mulss(g->xmm[0], g->xmm[0]); }
    { /* mulss xmm3, xmm0 */ g->xmm[3] = sse_mulss(g->xmm[3], g->xmm[0]); }
    { /* addss xmm5, xmm5 */ g->xmm[5] = sse_addss(g->xmm[5], g->xmm[5]); }
    { /* subss xmm5, xmm3 */ g->xmm[5] = sse_subss(g->xmm[5], g->xmm[3]); }
    { /* shufps xmm5, xmm5, 0 */ g->xmm[5] = sse_shufps(g->xmm[5], g->xmm[5], 0); }
    { /* mulps xmm1, xmm5 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[5]); }
    { /* movlps qword ptr [eax], xmm1 */ uint32_t A = arg1; wr64(A, g->xmm[1].q[0]); }
    { /* movhps qword ptr [eax + 8], xmm1 */ uint32_t A = arg1 + 8u; wr64(A, g->xmm[1].q[1]); }
    { /* mulps xmm4, xmm5 */ g->xmm[4] = sse_mulps(g->xmm[4], g->xmm[5]); }
    { /* movlps qword ptr [eax + 0x10], xmm4 */ uint32_t A = arg1 + 0x10u; wr64(A, g->xmm[4].q[0]); }
    { /* movhps qword ptr [eax + 0x18], xmm4 */ uint32_t A = arg1 + 0x18u; wr64(A, g->xmm[4].q[1]); }
    { /* mulps xmm6, xmm5 */ g->xmm[6] = sse_mulps(g->xmm[6], g->xmm[5]); }
    { /* movlps qword ptr [eax + 0x20], xmm6 */ uint32_t A = arg1 + 0x20u; wr64(A, g->xmm[6].q[0]); }
    { /* movhps qword ptr [eax + 0x28], xmm6 */ uint32_t A = arg1 + 0x28u; wr64(A, g->xmm[6].q[1]); }
    { /* mulps xmm5, xmm2 */ g->xmm[5] = sse_mulps(g->xmm[5], g->xmm[2]); }
    { /* movlps qword ptr [eax + 0x30], xmm5 */ uint32_t A = arg1 + 0x30u; wr64(A, g->xmm[5].q[0]); }
    { /* movhps qword ptr [eax + 0x38], xmm5 */ uint32_t A = arg1 + 0x38u; wr64(A, g->xmm[5].q[1]); }
    return arg1;
L_102f957b: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f92d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102f92d0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
