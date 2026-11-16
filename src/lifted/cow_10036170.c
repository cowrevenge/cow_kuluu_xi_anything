/* f_0x10036170 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10036170(Guest* g)
{
    double d2;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 != 0u) goto L_10036196;
    if (rd32(COW_IMG(0x10463914u)) == 0u) goto L_100361cd;
    ecx = rd32(COW_IMG(0x10463914u));
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x10036b90u), rd32(COW_IMG(0x10463910u)), ecx, g->edx, 0, 1, rd32(COW_IMG(0x10463910u)));
    wr32(COW_IMG(0x10463914u), arg1);
    return;
L_10036196: ;
    if (rd32(COW_IMG(0x10463914u)) != arg1)
    {
        t1 = rd32(arg1 + 0x38u);
        d2 = fr(g, (double)rdf32(COW_IMG(0x10351708u)) * (double)rdf32(COW_IMG(0x1032a34cu)));
        wr32(COW_IMG(0x10463918u), t1);
        g->edx = in_edx;
        fpush(g, d2);
        g->esp = sp0 - 4u;
        t3 = cow_call_regs(g, COW_IMG(0x10311c6cu), in_eax, g->ecx, g->edx, 1, 0);
        t4 = g->edx;
        t5 = cow_thiscall(g, COW_IMG(0x10036f00u), arg1, 2, 0x40u, t3);
        wr32(COW_IMG(0x10463910u), t5);
        wr32(COW_IMG(0x10463914u), arg1);
    }
L_100361cd: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10036170(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10036170(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
