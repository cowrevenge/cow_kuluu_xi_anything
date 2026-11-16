/* f_0x100aa820 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_100aa820(Guest* g)
{
    double d1;
    double d2;
    uint32_t eax;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    d1 = (double)rdf32(arg1 + 4u);
    if ((cow_fsw(g, d1, (double)rdf32(COW_IMG(0x1032d698u)), 0u) & 0x4100u) == 0u) goto L_100aa846;
    eax = cow_fsw(g, d1, (double)rdf32(COW_IMG(0x1032d698u)), 0u) & 0x4100u;
    d2 = (double)rdf32(arg1 + 4u);
    if (!(d2 < (double)rdf32(COW_IMG(0x1032e838u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, (double)rdf32(COW_IMG(0x1032e838u)), 0u);
        goto L_100aa869;
    }
L_100aa846: ;
    wr32(self + 0x160u, rd32(arg1));
    t3 = rd32(arg1 + 4u);
    wr32(self + 0x164u, t3);
    t4 = rd32(arg1 + 8u);
    wr32(self + 0x168u, t4);
    t5 = rd32(arg1 + 0xcu);
    wr32(self + 0x16cu, t5);
    eax = t4;
L_100aa869: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100aa820(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100aa820(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
