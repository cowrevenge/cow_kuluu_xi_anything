/* f_0x102fb310 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_102fb310(Guest* g)
{
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t sp1 = (sp0 - 0xcu) & 0xfffffff0u;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 96u);

    wr32(sp0 - 4u, in_ebx);
    wr32(sp1 + 4u, in_ebp);
    wr32(sp1, in_ebp);
    wr32(sp1 + 4u, rd32(sp0));
    { /* movss xmm0, dword ptr [ebx + 0xc] */ uint32_t A = sp0 + 8u; g->xmm[0] = xmm_q((uint64_t)rd32(A), 0); }
    { /* shufps xmm0, xmm0, 0 */ g->xmm[0] = sse_shufps(g->xmm[0], g->xmm[0], 0); }
    g->edx = in_edx;
    g->esp = sp1 - 0x30u;
    cow_stdcall(g, COW_IMG(0x10309be0u), 4, rd32(sp1 - 0x40u), rd32(sp1 - 0x3cu), rd32(sp1 - 0x38u), rd32(sp1 - 0x34u));
    t1 = g->edx;
    { /* movaps xmm1, xmmword ptr [0x109fa1d0] */ uint32_t A = COW_IMG(0x109fa1d0u); g->xmm[1] = rd128(A); }
    { /* movaps xmm2, xmmword ptr [0x109fa1b0] */ uint32_t A = COW_IMG(0x109fa1b0u); g->xmm[2] = rd128(A); }
    { /* movaps xmm3, xmm0 */ g->xmm[3] = g->xmm[0]; }
    { /* movaps xmm0, xmmword ptr [0x109fa1c0] */ uint32_t A = COW_IMG(0x109fa1c0u); g->xmm[0] = rd128(A); }
    { /* movups xmmword ptr [eax], xmm1 */ uint32_t A = arg1; wr128(A, g->xmm[1]); }
    { /* movss dword ptr [eax + 0x10], xmm0 */ uint32_t A = arg1 + 0x10u; wr32(A, g->xmm[0].d[0]); }
    { /* movaps xmm1, xmm3 */ g->xmm[1] = g->xmm[3]; }
    { /* movlps qword ptr [eax + 0x14], xmm1 */ uint32_t A = arg1 + 0x14u; wr64(A, g->xmm[1].q[0]); }
    { /* shufps xmm1, xmm1, 0x11 */ g->xmm[1] = sse_shufps(g->xmm[1], g->xmm[1], 17); }
    { /* movlps qword ptr [eax + 0x1c], xmm0 */ uint32_t A = arg1 + 0x1cu; wr64(A, g->xmm[0].q[0]); }
    { /* xorps xmm1, xmm2 */ g->xmm[1] = sse_xorps(g->xmm[1], g->xmm[2]); }
    { /* movss dword ptr [eax + 0x2c], xmm0 */ uint32_t A = arg1 + 0x2cu; wr32(A, g->xmm[0].d[0]); }
    { /* movlps qword ptr [eax + 0x24], xmm1 */ uint32_t A = arg1 + 0x24u; wr64(A, g->xmm[1].q[0]); }
    { /* movups xmmword ptr [eax + 0x30], xmm0 */ uint32_t A = arg1 + 0x30u; wr128(A, g->xmm[0]); }
    g->edx = t1;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102fb310(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102fb310(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
