/* f_0x102cbe30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_102cbe30(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t sp1 = (sp0 - 0x4u) & 0xfffffff0u;
    const uint32_t in_esi = g->esi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 56u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp1 - 0x20u, in_esi);
    { /* movaps xmm0, xmmword ptr [eax] */ uint32_t A = COW_IMG(0x10343ab0u); g->xmm[0] = rd128(A); }
    eax = arg1 + 0x20u;
    ecx = arg2;
    edx = 0x20u;
L_102cbe50: ;
    { /* movaps xmm1, xmmword ptr [eax + 0x10] */ uint32_t A = eax + 0x10u; g->xmm[1] = rd128(A); }
    { /* andps xmm1, xmm0 */ g->xmm[1] = sse_andps(g->xmm[1], g->xmm[0]); }
    { /* movaps xmm2, xmm1 */ g->xmm[2] = g->xmm[1]; }
    { /* movaps xmm1, xmmword ptr [eax] */ uint32_t A = eax; g->xmm[1] = rd128(A); }
    { /* andps xmm1, xmm0 */ g->xmm[1] = sse_andps(g->xmm[1], g->xmm[0]); }
    { /* movaps xmm4, xmmword ptr [eax - 0x20] */ uint32_t A = eax - 0x20u; g->xmm[4] = rd128(A); }
    { /* maxps xmm1, xmm2 */ g->xmm[1] = sse_maxps(g->xmm[1], g->xmm[2]); }
    { /* movaps xmm2, xmmword ptr [esi] */ uint32_t A = eax + 0x30u; g->xmm[2] = rd128(A); }
    { /* andps xmm2, xmm0 */ g->xmm[2] = sse_andps(g->xmm[2], g->xmm[0]); }
    { /* movaps xmm3, xmm2 */ g->xmm[3] = g->xmm[2]; }
    { /* andps xmm4, xmm0 */ g->xmm[4] = sse_andps(g->xmm[4], g->xmm[0]); }
    { /* movaps xmm2, xmmword ptr [esi] */ uint32_t A = eax + 0x20u; g->xmm[2] = rd128(A); }
    { /* andps xmm2, xmm0 */ g->xmm[2] = sse_andps(g->xmm[2], g->xmm[0]); }
    { /* maxps xmm2, xmm3 */ g->xmm[2] = sse_maxps(g->xmm[2], g->xmm[3]); }
    { /* movaps xmm3, xmmword ptr [esi] */ uint32_t A = eax - 0x10u; g->xmm[3] = rd128(A); }
    { /* andps xmm3, xmm0 */ g->xmm[3] = sse_andps(g->xmm[3], g->xmm[0]); }
    { /* maxps xmm4, xmm3 */ g->xmm[4] = sse_maxps(g->xmm[4], g->xmm[3]); }
    { /* movaps xmm3, xmm4 */ g->xmm[3] = g->xmm[4]; }
    { /* maxps xmm3, xmm1 */ g->xmm[3] = sse_maxps(g->xmm[3], g->xmm[1]); }
    { /* movaps xmm1, xmm3 */ g->xmm[1] = g->xmm[3]; }
    { /* maxps xmm1, xmm2 */ g->xmm[1] = sse_maxps(g->xmm[1], g->xmm[2]); }
    { /* movaps xmm2, xmmword ptr [esi] */ uint32_t A = eax + 0x50u; g->xmm[2] = rd128(A); }
    { /* andps xmm2, xmm0 */ g->xmm[2] = sse_andps(g->xmm[2], g->xmm[0]); }
    { /* movaps xmm3, xmm2 */ g->xmm[3] = g->xmm[2]; }
    { /* movaps xmm2, xmmword ptr [esi] */ uint32_t A = eax + 0x40u; g->xmm[2] = rd128(A); }
    { /* andps xmm2, xmm0 */ g->xmm[2] = sse_andps(g->xmm[2], g->xmm[0]); }
    { /* maxps xmm2, xmm3 */ g->xmm[2] = sse_maxps(g->xmm[2], g->xmm[3]); }
    { /* maxps xmm1, xmm2 */ g->xmm[1] = sse_maxps(g->xmm[1], g->xmm[2]); }
    { /* movaps xmmword ptr [esi], xmm1 */ uint32_t A = sp1 - 0x10u; wr128(A, g->xmm[1]); }
    t1 = rd32(sp1 - 0x10u);
    wr32(ecx, t1);
    t2 = rd32(sp1 - 0xcu);
    wr32(ecx + 0x80u, t2);
    t3 = rd32(sp1 - 8u);
    wr32(ecx + 0x100u, t3);
    t4 = rd32(sp1 - 4u);
    wr32(ecx + 0x180u, t4);
    if (edx != 1u)
    {
        eax = eax + 0x80u;
        ecx = ecx + 4u;
        edx = edx - 1u;
        goto L_102cbe50;
    }
    eax = eax + 0x80u;
    edx = edx - 1u;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102cbe30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102cbe30(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
