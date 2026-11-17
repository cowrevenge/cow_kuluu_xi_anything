/* f_0x1014fc90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1014fc90(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;

    g->esp = sp0 - 0xcu;
    t1 = cow_call_regs(g, COW_IMG(0x101cc510u), in_eax, g->ecx, g->edx, 1, 0);
    if (t1 == 0u)
    {
        loc_4 = self;
    }
    else
    {
        esi = t1;
        if (rd32(esi + 0xa0u) == 0u)
        {
            eax = rd32(esi + 0xa0u);
            loc_4 = self;
        }
        else
        {
            eax = rd32(esi + 0xa0u);
            if (rd32(self + 0x34u) == rd32(esi + 0x78u))
            {
                edx = rd32(esi + 0x78u);
                loc_4 = (self & 0xffffff00u) | rd8(esi + 0xecu);
            }
            else
            {
                eax = (eax & 0xffffff00u) | rd8(esi + 0xecu);
                loc_4 = (self & 0xffffff00u) | rd8(esi + 0xecu);
                wr8(self + 0x30u, (uint8_t)eax);
                t2 = rd32(esi + 0x78u);
                wr32(self + 0x34u, t2);
                edx = t2;
            }
            t3 = (edx & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 0x11u);
            t4 = (self + 0x30u & 0xffff0000u) | (uint16_t)(rd16(self + 0x14u) + 0x1cu);
            g->eax = t4;
            g->esp = sp0 - 0xcu;
            t5 = cow_cdecl(g, COW_IMG(0x101cb090u), 4, t4, t3, loc_4, self + 0x30u);
            eax = t5;
        }
        if (rd16(esi + 0x210u) != 0u)
        {
            ecx = esi + 0x214u;
            edx = rd32(COW_IMG(0x104e1b9cu));
        }
        else
        {
            edx = rd32(COW_IMG(0x104e1b9cu));
            ecx = esi + 0x7cu;
        }
        t6 = (ecx & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 3u);
        t7 = ((eax & 0xffff0000u) | rd16(self + 0x14u)) + 5u;
        t8 = ((t6 & 0xffff0000u) | (uint16_t)(rd16(self + 0x18u) - rd16(self + 0x14u))) - 0xdu;
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x101c9d50u), 5, t8, t7, t6, ecx, edx);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1014fc90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1014fc90(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
