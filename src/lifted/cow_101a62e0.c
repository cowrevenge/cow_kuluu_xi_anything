/* f_0x101a62e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101a62e0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 24u);

    wr32(sp0 - 0xcu, in_esi);
    if ((uint8_t)arg1 == 0u)
    {
        eax = (in_eax & 0xffffff00u) | (uint8_t)arg1;
        edx = in_edx;
    }
    else
    {
        g->edx = in_edx;
        g->esp = sp0 - 0xcu;
        t1 = cow_call_regs(g, COW_IMG(0x101262e0u), (in_eax & 0xffffff00u) | (uint8_t)arg1, rd32(COW_IMG(0x104e1d4cu)), g->edx, 1, 0);
        t2 = g->edx;
        if ((uint8_t)t1 == 0u)
        {
            eax = t1;
            edx = t2;
        }
        else
        {
            edx = t2;
            wr32(sp0 - 8u, 0u);
            wr32(sp0 - 4u, 0u);
            if (rd32(COW_IMG(0x104e1d4cu)) != 0u)
            {
                eax = rd32(COW_IMG(0x104e1d4cu));
                t3 = rd32(eax + 4u);
                wr32(sp0 - 8u, t3);
                t4 = rd32(eax + 8u);
                wr32(sp0 - 4u, t4);
                edx = t4;
            }
            if (rd32(rd32(COW_IMG(0x106627b4u)) + 8u) == 0u)
            {
                eax = rd32(COW_IMG(0x106627b4u));
            }
            else
            {
                ecx = rd32(rd32(COW_IMG(0x106627b4u)) + 8u);
                wr32(sp0 - 0x10u, sp0 - 8u);
                g->edx = sp0 - 8u;
                g->esp = sp0 - 0xcu;
                t5 = cow_thiscall(g, COW_IMG(0x10118c10u), ecx, 1, sp0 - 8u);
                t6 = g->edx;
                if ((uint8_t)t5 == 0u)
                {
                    eax = t5;
                    edx = t6;
                }
                else
                {
                    edx = t6;
                    wr32(sp0 - 0x10u, 0u);
                    wr32(sp0 - 0x14u, 8u);
                    g->eax = rd32(self);
                    g->edx = edx;
                    t7 = rd32(self);
                    g->esp = sp0 - 0xcu;
                    t8 = cow_thiscall(g, rd32(t7 + 0x18u), self, 2, 8u, 0u);
                    t9 = g->edx;
                    eax = t8;
                    edx = t9;
                }
            }
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a62e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a62e0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
