/* f_0x100ca8c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100ca8c0(Guest* g)
{
    double d4;
    double d5;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t2 = g->edx;
    if (t1 > 0x53u) goto L_100ca943;
    eax = t1;
    edx = t2;
    t3 = rd32(COW_IMG(0x100ca948u) + rd8(COW_IMG(0x100ca950u) + eax) * 4u);
    switch (t3 - RD)
    {
    case 0x100ca8dcu: ecx = rd8(COW_IMG(0x100ca950u) + eax); goto L_100ca8dc;
    case 0x100ca943u: goto L_100ca943;
    default: rt_fatal(g, COW_IMG(0x100ca8d5u), "switch");
    }
    return;
L_100ca8dc: ;
    d4 = (double)rdf32(self + 0x144u);
    if (d4 <= (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d4, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        d5 = (double)rdf32(self + 0x148u);
        if ((cow_fsw(g, d5, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) == 0u)
        {
            t6 = (rd32(self + 0x114u) & 0xff31ffffu) | 0x310000u;
            g->esp = sp0 - 4u;
            cow_thiscall(g, COW_IMG(0x100cd920u), self, 11, t6, 0x3f800000u, 0x3f800000u, 1u, 0x41400000u, 0x41c00000u, 0u, 0u, 0u, 0u, 0u);
        }
    }
L_100ca943: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ca8c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100ca8c0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
