/* f_0x10103ba0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u64 stack_args=1 */
uint32_t cow_fn_10103ba0(Guest* g)
{
    double d5;
    uint32_t eax;
    uint32_t edx;
    int64_t q1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t6;
    uint32_t t7;
    double x0;
    const uint32_t sp0 = g->esp;

    q1 = (uint64_t)cow_mulu(0x2f684bdbu, rd32(sp0 + 4u));
    t2 = rd32(sp0 + 4u);
    t3 = cow_divu(g, (cow_qhi(q1) + ((t2 - cow_qhi(q1)) >> 1u)) >> 0xbu, 0x54u);
    t4 = cow_modu(g, (cow_qhi(q1) + ((t2 - cow_qhi(q1)) >> 1u)) >> 0xbu, 0x54u);
    wr32(sp0 + 4u, t4 - 4u);
    d5 = fr(g, (double)(int32_t)rd32(sp0 + 4u) * (double)rdf32(COW_IMG(0x10331ce8u)));
    if (!(d5 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (t4 - 4u & 0xffff0000u) | (uint16_t)cow_fsw(g, d5, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        edx = t4;
        x0 = d5;
        x0 = fr(g, x0 + (double)rdf32(COW_IMG(0x10329a08u)));
    }
    else
    {
        eax = (t4 - 4u & 0xffff0000u) | (uint16_t)cow_fsw(g, d5, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        edx = t4;
        x0 = d5;
        x0 = fr(g, x0 - (double)rdf32(COW_IMG(0x10329a08u)));
    }
    if ((int32_t)edx >= 4) goto L_10103bf7;
    g->esp = sp0;
    g->edx = edx;
    fpush(g, -x0);
    return cow_tailcall(g, COW_IMG(0x10311c6cu), eax, 0x54u, edx);
L_10103bf7: ;
    if ((int32_t)edx > 46) goto L_10103c01;
    g->esp = sp0;
    g->edx = edx;
    fpush(g, x0);
    return cow_tailcall(g, COW_IMG(0x10311c6cu), eax, 0x54u, edx);
L_10103c01: ;
    g->edx = edx;
    fpush(g, x0);
    g->esp = sp0;
    t6 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t7 = g->edx;
    g->edx = t7;
    return 0xc8u - t6;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10103ba0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10103ba0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
