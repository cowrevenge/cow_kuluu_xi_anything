/* f_0x1027ed90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u16 stack_args=1 */
uint32_t cow_fn_1027ed90(Guest* g)
{
    double d1;
    double d2;
    double d3;
    uint32_t eax;
    const uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    d1 = (double)rdf32(arg1 + 0xcu);
    if (d1 != (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_1027edc7;
    }
    eax = (in_eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    d2 = (double)rdf32(arg1 + 0x1cu);
    if (d2 != (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_1027edc7;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    d3 = (double)rdf32(arg1 + 0x2cu);
    if (d3 != (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d3, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_1027edc7;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d3, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    return (eax & 0xffffff00u) | (uint8_t)(eax | 0xffu);
L_1027edc7: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1027ed90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1027ed90(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
