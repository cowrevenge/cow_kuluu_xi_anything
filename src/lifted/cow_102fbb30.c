/* f_0x102fbb30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_102fbb30(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t sp1 = (sp0 - 0xcu) & 0xfffffff0u;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 112u);

    wr32(sp0 - 4u, in_ebx);
    { /* movss xmm0, dword ptr [ebx + 0x10] */ uint32_t A = sp0 + 0xcu; g->xmm[0] = xmm_q((uint64_t)rd32(A), 0); }
    { /* movss xmm1, dword ptr [ebx + 0x14] */ uint32_t A = sp0 + 0x10u; g->xmm[1] = xmm_q((uint64_t)rd32(A), 0); }
    { /* movss xmm2, dword ptr [0x109fa2c0] */ uint32_t A = COW_IMG(0x109fa2c0u); g->xmm[2] = xmm_q((uint64_t)rd32(A), 0); }
    { /* unpcklps xmm0, xmm1 */ g->xmm[0] = sse_unpcklps(g->xmm[0], g->xmm[1]); }
    { /* movss xmm1, dword ptr [ebx + 0xc] */ uint32_t A = sp0 + 8u; g->xmm[1] = xmm_q((uint64_t)rd32(A), 0); }
    { /* unpcklps xmm2, xmm1 */ g->xmm[2] = sse_unpcklps(g->xmm[2], g->xmm[1]); }
    { /* shufps xmm0, xmm2, 0x11 */ g->xmm[0] = sse_shufps(g->xmm[0], g->xmm[2], 17); }
    { /* movaps xmmword ptr [esp + 0x10], xmm0 */ uint32_t A = sp1 - 0x40u; wr128(A, g->xmm[0]); }
    { /* mulps xmm0, xmmword ptr [0x109fa2b0] */ uint32_t A = COW_IMG(0x109fa2b0u); g->xmm[0] = sse_mulps(g->xmm[0], rd128(A)); }
    wr32(sp1 - 0x50u, sp1 - 0x40u);
    wr32(sp1 - 0x4cu, sp1 - 0x40u);
    { /* movaps xmmword ptr [esp + 0x10], xmm0 */ uint32_t A = sp1 - 0x40u; wr128(A, g->xmm[0]); }
    wr32(sp1 - 0x48u, sp1 - 0x30u);
    g->edx = sp1 - 0x40u;
    g->esp = sp1 - 0x44u;
    cow_cdecl(g, COW_IMG(0x10309cd0u), 3, sp1 - 0x40u, sp1 - 0x40u, sp1 - 0x30u);
    t1 = g->edx;
    t2 = g->esi;
    { /* movaps xmm0, xmmword ptr [esp + 0x10] */ uint32_t A = sp1 - 0x40u; g->xmm[0] = rd128(A); }
    { /* movaps xmm1, xmmword ptr [esp + 0x20] */ uint32_t A = sp1 - 0x30u; g->xmm[1] = rd128(A); }
    { /* movaps xmm2, xmm0 */ g->xmm[2] = g->xmm[0]; }
    { /* shufps xmm0, xmm1, 0 */ g->xmm[0] = sse_shufps(g->xmm[0], g->xmm[1], 0); }
    { /* shufps xmm0, xmm0, 0x8a */ g->xmm[0] = sse_shufps(g->xmm[0], g->xmm[0], 138); }
    { /* shufps xmm2, xmm1, 0x99 */ g->xmm[2] = sse_shufps(g->xmm[2], g->xmm[1], 153); }
    { /* movaps xmm1, xmm0 */ g->xmm[1] = g->xmm[0]; }
    { /* shufps xmm0, xmm0, 0x8a */ g->xmm[0] = sse_shufps(g->xmm[0], g->xmm[0], 138); }
    { /* movaps xmm3, xmm2 */ g->xmm[3] = g->xmm[2]; }
    { /* shufps xmm2, xmm2, 0xf7 */ g->xmm[2] = sse_shufps(g->xmm[2], g->xmm[2], 247); }
    { /* shufps xmm3, xmm3, 0xa8 */ g->xmm[3] = sse_shufps(g->xmm[3], g->xmm[3], 168); }
    { /* mulps xmm1, xmm2 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[2]); }
    { /* shufps xmm2, xmm2, 0x51 */ g->xmm[2] = sse_shufps(g->xmm[2], g->xmm[2], 81); }
    { /* mulps xmm0, xmm2 */ g->xmm[0] = sse_mulps(g->xmm[0], g->xmm[2]); }
    { /* mulps xmm1, xmm3 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[3]); }
    { /* shufps xmm3, xmm3, 1 */ g->xmm[3] = sse_shufps(g->xmm[3], g->xmm[3], 1); }
    { /* mulps xmm0, xmm3 */ g->xmm[0] = sse_mulps(g->xmm[0], g->xmm[3]); }
    { /* movaps xmmword ptr [esp + 0x10], xmm1 */ uint32_t A = sp1 - 0x40u; wr128(A, g->xmm[1]); }
    { /* xorps xmm0, xmmword ptr [0x109fa2a0] */ uint32_t A = COW_IMG(0x109fa2a0u); g->xmm[0] = sse_xorps(g->xmm[0], rd128(A)); }
    { /* addps xmm1, xmm0 */ g->xmm[1] = sse_addps(g->xmm[1], g->xmm[0]); }
    { /* movaps xmmword ptr [esp + 0x10], xmm1 */ uint32_t A = sp1 - 0x40u; wr128(A, g->xmm[1]); }
    { /* movups xmmword ptr [eax], xmm1 */ uint32_t A = arg1; wr128(A, g->xmm[1]); }
    g->esi = t2;
    g->edx = t1;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102fbb30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102fbb30(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
