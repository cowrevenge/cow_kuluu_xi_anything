/* f_0x1027ae90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1027ae90(Guest* g)
{
    double d1;
    double d2;
    double d3;
    uint32_t eax;
    const uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((double)rdf32(arg1) != rdf64(COW_IMG(0x1032a108u))) goto L_1027aed9;
    eax = (in_eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(arg1), rdf64(COW_IMG(0x1032a108u)), 0u);
    d1 = (double)rdf32(arg1 + 4u);
    if (d1 != rdf64(COW_IMG(0x1032a108u))) goto L_1027aed9;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, rdf64(COW_IMG(0x1032a108u)), 0u);
    d2 = (double)rdf32(arg1 + 8u);
    if (d2 != rdf64(COW_IMG(0x1032a108u))) goto L_1027aed9;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, rdf64(COW_IMG(0x1032a108u)), 0u);
    d3 = (double)rdf32(arg1 + 0xcu);
    if (d3 != rdf64(COW_IMG(0x1032a100u))) goto L_1027aed9;
    return 0xffu;
L_1027aed9: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1027ae90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1027ae90(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
