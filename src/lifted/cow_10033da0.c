/* f_0x10033da0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10033da0(Guest* g)
{
    double d1;
    double d3;
    uint32_t eax;
    uint32_t t2;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd16(COW_IMG(0x1045b77au)) >= 3u)
    {
        eax = (in_eax & 0xffff0000u) | rd16(COW_IMG(0x1045b77au));
        goto L_10033e99;
    }
    eax = (in_eax & 0xffff0000u) | rd16(COW_IMG(0x1045b77au));
    if ((uint16_t)eax != 2u) goto L_10033df1;
    if (rd16(COW_IMG(0x1045b814u)) == 1u) goto L_10033e99;
    d1 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x1045b810u)) * (double)rdf32(COW_IMG(0x1032a84cu)));
    g->eax = arg1;
    g->esp = sp0 - 4u;
    t2 = cow_thiscall(g, COW_IMG(0x10184c90u), rd32(COW_IMG(0x10631f24u)), 3, arg1, cow_f2bits(d1), self + 0x14u);
    return (t2 & 0xffffff00u) | 1u;
L_10033df1: ;
    if ((uint16_t)eax != 1u) goto L_10033e3e;
    if (rd8(self + 4u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 4u);
        goto L_10033e99;
    }
    if (rd32(self + 8u) != 0u)
    {
        eax = rd32(self + 8u);
        goto L_10033e0f;
    }
    eax = rd32(self + 8u);
    return eax & 0xffffff00u;
L_10033e0f: ;
    d3 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x1045b810u)) * (double)rdf32(COW_IMG(0x1032a848u)));
    g->esp = sp0 - 4u;
    t4 = cow_call_regs(g, COW_IMG(0x10185ca0u), eax, rd32(COW_IMG(0x10631f24u)), arg1, 0, 4, arg1, self + 0x14u, eax, cow_f2bits(d3));
    wr8(self + 4u, 0u);
    return (t4 & 0xffffff00u) | 1u;
L_10033e3e: ;
    if (rd16(COW_IMG(0x1045b814u)) == 1u) goto L_10033e99;
    if (!((double)rdf32(COW_IMG(0x1045b80cu)) < (double)rdf32(COW_IMG(0x10329ce0u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x1045b80cu)), (double)rdf32(COW_IMG(0x10329ce0u)), 1u);
        x0 = fr(g, (double)rdf32(COW_IMG(0x1045b810u)) * (double)rdf32(COW_IMG(0x1032a84cu)));
        goto L_10033e81;
    }
    x0 = fr(g, (double)rdf32(COW_IMG(0x1045b810u)) * (double)rdf32(COW_IMG(0x1032a84cu)));
    g->esp = sp0 - 4u;
    t5 = cow_call_regs(g, COW_IMG(0x10184fe0u), arg1, rd32(COW_IMG(0x10631f24u)), g->edx, 0, 2, arg1, cow_f2bits((double)(float)x0));
    return (t5 & 0xffffff00u) | 1u;
L_10033e81: ;
    g->eax = eax;
    g->esp = sp0 - 4u;
    t6 = cow_thiscall(g, COW_IMG(0x10184c90u), rd32(COW_IMG(0x10631f24u)), 3, arg1, cow_f2bits((double)(float)x0), self + 0x14u);
    eax = t6;
L_10033e99: ;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10033da0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10033da0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
