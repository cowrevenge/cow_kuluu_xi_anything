/* f_0x102fb390 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_102fb390(Guest* g)
{
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t sp1 = (sp0 - 0xcu) & 0xfffffff0u;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 128u);

    wr32(sp0 - 4u, in_ebx);
    wr32(sp1 + 4u, in_ebp);
    wr32(sp1, in_ebp);
    wr32(sp1 + 4u, rd32(sp0));
    { /* movss xmm0, dword ptr [ebx + 0xc] */ uint32_t A = sp0 + 8u; g->xmm[0] = xmm_q((uint64_t)rd32(A), 0); }
    { /* movaps xmm1, xmmword ptr [0x109fa210] */ uint32_t A = COW_IMG(0x109fa210u); g->xmm[1] = rd128(A); }
    { /* shufps xmm0, xmm0, 0 */ g->xmm[0] = sse_shufps(g->xmm[0], g->xmm[0], 0); }
    { /* movaps xmmword ptr [ebp - 0x20], xmm1 */ uint32_t A = sp1 - 0x20u; wr128(A, g->xmm[1]); }
    { /* movaps xmm1, xmmword ptr [0x109fa200] */ uint32_t A = COW_IMG(0x109fa200u); g->xmm[1] = rd128(A); }
    { /* movaps xmmword ptr [ebp - 0x30], xmm1 */ uint32_t A = sp1 - 0x30u; wr128(A, g->xmm[1]); }
    g->edx = in_edx;
    g->esp = sp1 - 0x50u;
    cow_stdcall(g, COW_IMG(0x10309be0u), 4, rd32(sp1 - 0x60u), rd32(sp1 - 0x5cu), rd32(sp1 - 0x58u), rd32(sp1 - 0x54u));
    t1 = g->edx;
    { /* shufps xmm0, xmm0, 0x50 */ g->xmm[0] = sse_shufps(g->xmm[0], g->xmm[0], 80); }
    { /* movaps xmm1, xmmword ptr [ebp - 0x30] */ uint32_t A = sp1 - 0x30u; g->xmm[1] = rd128(A); }
    { /* andps xmm0, xmmword ptr [ebp - 0x20] */ uint32_t A = sp1 - 0x20u; g->xmm[0] = sse_andps(g->xmm[0], rd128(A)); }
    { /* xorps xmm1, xmm0 */ g->xmm[1] = sse_xorps(g->xmm[1], g->xmm[0]); }
    { /* movups xmmword ptr [eax], xmm1 */ uint32_t A = arg1; wr128(A, g->xmm[1]); }
    { /* movaps xmm1, xmmword ptr [0x109fa1f0] */ uint32_t A = COW_IMG(0x109fa1f0u); g->xmm[1] = rd128(A); }
    { /* movups xmmword ptr [eax + 0x10], xmm1 */ uint32_t A = arg1 + 0x10u; wr128(A, g->xmm[1]); }
    { /* movaps xmm1, xmmword ptr [0x109fa1e0] */ uint32_t A = COW_IMG(0x109fa1e0u); g->xmm[1] = rd128(A); }
    { /* shufps xmm0, xmm0, 0x46 */ g->xmm[0] = sse_shufps(g->xmm[0], g->xmm[0], 70); }
    { /* movups xmmword ptr [eax + 0x20], xmm0 */ uint32_t A = arg1 + 0x20u; wr128(A, g->xmm[0]); }
    { /* movups xmmword ptr [eax + 0x30], xmm1 */ uint32_t A = arg1 + 0x30u; wr128(A, g->xmm[1]); }
    g->edx = t1;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102fb390(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102fb390(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
