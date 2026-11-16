/* f_0x10017230 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10017230(Guest* g)
{
    double d1;
    double d2;
    double d4;
    double d5;
    double d7;
    double d8;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t10;
    uint32_t t11;
    uint32_t t3;
    uint32_t t6;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    d1 = (double)rdf32(self + 0x610u);
    d2 = (double)rdf32(self + 0x604u);
    if (d1 == d2)
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, d2, 0u);
        ecx = self & 0xffffff00u;
    }
    else
    {
        t3 = rd32(self + 0x604u);
        wr32(self + 0x610u, t3);
        eax = t3;
        ecx = (self & 0xffffff00u) | 1u;
    }
    d4 = (double)rdf32(self + 0x614u);
    d5 = (double)rdf32(self + 0x608u);
    if (d4 == d5)
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d4, d5, 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d4, d5, 0u);
        t6 = rd32(self + 0x608u);
        wr32(self + 0x614u, t6);
        ecx = (t6 & 0xffffff00u) | 1u;
    }
    d7 = (double)rdf32(self + 0x618u);
    d8 = (double)rdf32(self + 0x60cu);
    if (d7 == d8)
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d7, d8, 0u);
        goto L_10017298;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d7, d8, 0u);
    t9 = rd32(self + 0x60cu);
    wr32(self + 0x618u, t9);
    edx = t9;
L_1001729d: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10017160u), self, 0);
    t10 = g->edx;
    if (rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    }
    else
    {
        eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        edx = t10;
        if (rd32(COW_IMG(0x10456a7cu)) == 0u)
        {
            g->eax = eax;
            g->esp = sp0 - 4u;
            t11 = cow_thiscall(g, rd32(rd32(eax) + 0x48u), rd32(eax), 3, eax, 0u, self + 4u);
            eax = t11;
        }
    }
L_100172c6: ;
    return eax;
L_10017298: ;
    if ((uint8_t)ecx != 1u) goto L_100172c6;
    edx = in_edx;
    goto L_1001729d;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10017230(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10017230(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
