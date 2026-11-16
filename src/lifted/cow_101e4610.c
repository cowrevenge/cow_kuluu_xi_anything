/* f_0x101e4610 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101e4610(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
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
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_call_regs(g, COW_IMG(0x101e3370u), in_eax, COW_IMG(0x10663510u), g->edx, 1, 0);
    t2 = g->edx;
    g->esi = self;
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x101e35f0u), self, 0);
    t4 = g->edx;
    if ((uint8_t)arg1 == 0u)
    {
        eax = (t3 & 0xffffff00u) | (uint8_t)arg1;
        edx = t4;
    }
    else
    {
        edx = t4;
        if (rd8(rd32(COW_IMG(0x104e1d4cu)) + 0x4du) != 2u)
        {
            eax = rd32(COW_IMG(0x104e1d4cu));
        }
        else
        {
            eax = rd32(COW_IMG(0x104e1d4cu));
            wr32(sp0 - 8u, 0u);
            wr32(sp0 - 4u, 0u);
            t5 = rd32(eax + 4u);
            wr32(sp0 - 8u, t5);
            t6 = rd32(eax + 8u);
            wr32(sp0 - 4u, t6);
            if (rd32(rd32(COW_IMG(0x10663554u)) + 8u) == 0u)
            {
                eax = rd32(COW_IMG(0x10663554u));
                edx = t6;
            }
            else
            {
                ecx = rd32(rd32(COW_IMG(0x10663554u)) + 8u);
                wr32(sp0 - 0x10u, sp0 - 8u);
                g->edx = sp0 - 8u;
                g->esp = sp0 - 0xcu;
                t7 = cow_thiscall(g, COW_IMG(0x10118c10u), ecx, 1, sp0 - 8u);
                t8 = g->edx;
                if ((uint8_t)t7 == 0u)
                {
                    eax = t7;
                    edx = t8;
                }
                else
                {
                    edx = t8;
                    wr32(sp0 - 0x10u, 0u);
                    wr32(sp0 - 0x14u, 8u);
                    g->eax = rd32(self);
                    g->edx = edx;
                    t9 = rd32(self);
                    g->esp = sp0 - 0xcu;
                    t10 = cow_thiscall(g, rd32(t9 + 0x18u), self, 2, 8u, 0u);
                    t11 = g->edx;
                    eax = t10;
                    edx = t11;
                }
            }
        }
    }
    g->esi = in_esi;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e4610(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e4610(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
