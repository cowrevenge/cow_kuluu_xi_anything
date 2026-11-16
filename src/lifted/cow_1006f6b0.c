/* f_0x1006f6b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1006f6b0(Guest* g)
{
    double d1;
    double d2;
    uint32_t eax;
    const uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((double)rdf32(arg1) != (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(arg1), (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_1006f6e3;
    }
    eax = (in_eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(arg1), (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    d1 = (double)rdf32(arg1 + 4u);
    if (d1 != (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_1006f6e3;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    d2 = (double)rdf32(arg1 + 8u);
    if (d2 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_1006f725;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
L_1006f6e3: ;
    { /* movups xmm0, xmmword ptr [esi] */ uint32_t A = arg1; g->xmm[0] = rd128(A); }
    { /* movaps xmm7, xmm0 */ g->xmm[7] = g->xmm[0]; }
    { /* mulps xmm0, xmm0 */ g->xmm[0] = sse_mulps(g->xmm[0], g->xmm[0]); }
    { /* movaps xmm1, xmm0 */ g->xmm[1] = g->xmm[0]; }
    { /* shufps xmm1, xmm1, 0x55 */ g->xmm[1] = sse_shufps(g->xmm[1], g->xmm[1], 85); }
    { /* addss xmm0, xmm1 */ g->xmm[0] = sse_addss(g->xmm[0], g->xmm[1]); }
    { /* movhlps xmm2, xmm0 */ g->xmm[2] = sse_movhlps(g->xmm[2], g->xmm[0]); }
    { /* addss xmm0, xmm2 */ g->xmm[0] = sse_addss(g->xmm[0], g->xmm[2]); }
    { /* sqrtss xmm0, xmm0 */ g->xmm[0] = sse_sqrtss(g->xmm[0], g->xmm[0]); }
    { /* shufps xmm0, xmm0, 0 */ g->xmm[0] = sse_shufps(g->xmm[0], g->xmm[0], 0); }
    { /* divps xmm7, xmm0 */ g->xmm[7] = sse_divps(g->xmm[7], g->xmm[0]); }
    { /* movss dword ptr [esi], xmm7 */ uint32_t A = arg1; wr32(A, g->xmm[7].d[0]); }
    { /* shufps xmm7, xmm7, 9 */ g->xmm[7] = sse_shufps(g->xmm[7], g->xmm[7], 9); }
    { /* movss dword ptr [esi + 4], xmm7 */ uint32_t A = arg1 + 4u; wr32(A, g->xmm[7].d[0]); }
    { /* shufps xmm7, xmm7, 1 */ g->xmm[7] = sse_shufps(g->xmm[7], g->xmm[7], 1); }
    { /* movss dword ptr [esi + 8], xmm7 */ uint32_t A = arg1 + 8u; wr32(A, g->xmm[7].d[0]); }
L_1006f725: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1006f6b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1006f6b0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
