/* f_0x100843b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100843b0(Guest* g)
{
    double d1;
    double d2;
    uint32_t eax;
    uint32_t ecx;
    const uint32_t self = g->ecx;

    if (rd32(self + 0x70u) == 0u)
    {
        eax = rd32(self + 0x70u);
        goto L_100843f3;
    }
    eax = rd32(self + 0x70u);
    if (rd32(eax + 0xd4u) == 0u)
    {
        eax = rd32(eax + 0xd4u);
        goto L_100843f3;
    }
    eax = rd32(eax + 0xd4u);
    d1 = (double)rdf32(rd32(eax + 0x260u) + 0x150u);
    if (d1 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
        ecx = rd32(eax + 0x260u);
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_100843dd;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    return (eax & 0xffffff00u) | 1u;
L_100843dd: ;
    d2 = (double)rdf32(ecx + 0x158u);
    if (d2 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_100843f3;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    return (eax & 0xffffff00u) | 1u;
L_100843f3: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100843b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100843b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
