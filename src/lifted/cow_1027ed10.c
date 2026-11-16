/* f_0x1027ed10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u16 stack_args=1 */
uint32_t cow_fn_1027ed10(Guest* g)
{
    double d1;
    double d2;
    double d3;
    double d4;
    double d5;
    double d6;
    uint32_t eax;
    const uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(arg1) != 0x3f800000u)
    {
        eax = in_eax;
        goto L_1027ed8a;
    }
    d1 = (double)rdf32(arg1 + 4u);
    if (d1 != (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_1027ed8a;
    }
    eax = (in_eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    d2 = (double)rdf32(arg1 + 8u);
    if (d2 != (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_1027ed8a;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    d3 = (double)rdf32(arg1 + 0x10u);
    if (d3 != (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d3, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_1027ed8a;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d3, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    if (rd32(arg1 + 0x14u) != 0x3f800000u) goto L_1027ed8a;
    d4 = (double)rdf32(arg1 + 0x18u);
    if (d4 != (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d4, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_1027ed8a;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d4, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    d5 = (double)rdf32(arg1 + 0x20u);
    if (d5 != (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d5, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_1027ed8a;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d5, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    d6 = (double)rdf32(arg1 + 0x24u);
    if (d6 != (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d6, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_1027ed8a;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d6, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    if (rd32(arg1 + 0x28u) != 0x3f800000u) goto L_1027ed8a;
    g->edx = 0x3f800000u;
    return (eax & 0xffffff00u) | (uint8_t)(eax | 0xffu);
L_1027ed8a: ;
    g->edx = 0x3f800000u;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1027ed10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1027ed10(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
