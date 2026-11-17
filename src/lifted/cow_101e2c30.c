/* f_0x101e2c30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101e2c30(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_c;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, arg1);
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_thiscall(g, COW_IMG(0x101ec070u), self, 1, arg1);
    t2 = g->edx;
    if ((uint8_t)arg1 == 0u)
    {
        eax = t1;
        edx = t2;
        loc_c = in_ebx;
        loc_10 = in_esi;
    }
    else
    {
        eax = t1;
        edx = t2;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t3 = cow_call_regs(g, COW_IMG(0x101262e0u), eax, rd32(COW_IMG(0x104e1d4cu)), g->edx, 1, 0);
        t4 = g->edx;
        if ((uint8_t)t3 == 0u)
        {
            eax = t3;
            edx = t4;
            loc_c = in_ebx;
            loc_10 = in_esi;
        }
        else
        {
            edx = t4;
            wr32(sp0 - 8u, 0u);
            wr32(sp0 - 4u, 0u);
            if (rd32(COW_IMG(0x104e1d4cu)) != 0u)
            {
                eax = rd32(COW_IMG(0x104e1d4cu));
                t5 = rd32(eax + 4u);
                wr32(sp0 - 8u, t5);
                t6 = rd32(eax + 8u);
                wr32(sp0 - 4u, t6);
                edx = t6;
            }
            if (rd32(rd32(COW_IMG(0x106634ccu)) + 8u) == 0u)
            {
                eax = rd32(COW_IMG(0x106634ccu));
                loc_c = rd32(sp0 - 0xcu);
                loc_10 = rd32(sp0 - 0x10u);
            }
            else
            {
                eax = rd32(COW_IMG(0x106634ccu));
                ecx = rd32(rd32(COW_IMG(0x106634ccu)) + 8u);
                wr32(sp0 - 0x14u, sp0 - 8u);
                g->eax = eax;
                g->edx = sp0 - 8u;
                g->esp = sp0 - 0x10u;
                t7 = cow_thiscall(g, COW_IMG(0x10118c10u), ecx, 1, sp0 - 8u);
                t8 = g->edx;
                if ((uint8_t)t7 == 0u)
                {
                    eax = t7;
                    edx = t8;
                    loc_c = rd32(sp0 - 0xcu);
                    loc_10 = rd32(sp0 - 0x10u);
                }
                else
                {
                    edx = t8;
                    wr32(sp0 - 0x14u, 0u);
                    wr32(sp0 - 0x18u, 8u);
                    g->eax = rd32(self);
                    g->edx = edx;
                    t9 = rd32(self);
                    g->esp = sp0 - 0x10u;
                    t10 = cow_thiscall(g, rd32(t9 + 0x18u), self, 2, 8u, 0u);
                    t11 = g->edx;
                    eax = t10;
                    edx = t11;
                    loc_c = rd32(sp0 - 0xcu);
                    loc_10 = rd32(sp0 - 0x10u);
                }
            }
        }
    }
    g->ebx = loc_c;
    g->esi = loc_10;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e2c30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e2c30(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
