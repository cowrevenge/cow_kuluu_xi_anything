/* f_0x101dca80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101dca80(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_esi);
    g->esi = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x101dc270u), in_eax, self, g->edx, 1, 0);
    t1 = g->edx;
    wr32(sp0 - 0x14u, arg1);
    g->eax = rd32(rd32(self + 0x58u));
    g->edx = t1;
    t2 = rd32(rd32(self + 0x58u));
    t3 = cow_thiscall(g, rd32(t2 + 0x2cu), rd32(self + 0x58u), 1, arg1);
    t4 = g->edx;
    if ((uint8_t)arg1 == 0u)
    {
        eax = t3;
        edx = t4;
        loc_c = in_ebx;
        loc_10 = in_esi;
    }
    else
    {
        eax = t3;
        edx = t4;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t5 = cow_thiscall(g, COW_IMG(0x101dc1f0u), self, 0);
        t6 = g->edx;
        wr32(sp0 - 0x14u, 1u);
        wr32(sp0 - 0x18u, t5);
        g->edx = t6;
        t7 = cow_call_regs(g, COW_IMG(0x1013e2f0u), t5, rd32(COW_IMG(0x10578204u)), g->edx, 0, 2, t5, 1u);
        t8 = g->edx;
        g->edx = t8;
        t9 = cow_call_regs(g, COW_IMG(0x101262e0u), t7, rd32(COW_IMG(0x104e1d4cu)), g->edx, 1, 0);
        t10 = g->edx;
        if ((uint8_t)t9 == 0u)
        {
            eax = t9;
            edx = t10;
            loc_c = in_ebx;
            loc_10 = in_esi;
        }
        else
        {
            edx = t10;
            wr32(sp0 - 8u, 0u);
            wr32(sp0 - 4u, 0u);
            if (rd32(COW_IMG(0x104e1d4cu)) != 0u)
            {
                eax = rd32(COW_IMG(0x104e1d4cu));
                t11 = rd32(eax + 4u);
                wr32(sp0 - 8u, t11);
                t12 = rd32(eax + 8u);
                wr32(sp0 - 4u, t12);
                edx = t12;
            }
            if (rd32(rd32(COW_IMG(0x10663748u)) + 8u) == 0u)
            {
                eax = rd32(COW_IMG(0x10663748u));
            }
            else
            {
                eax = rd32(COW_IMG(0x10663748u));
                ecx = rd32(rd32(COW_IMG(0x10663748u)) + 8u);
                wr32(sp0 - 0x14u, sp0 - 8u);
                g->eax = eax;
                g->edx = sp0 - 8u;
                g->esp = sp0 - 0x10u;
                t13 = cow_thiscall(g, COW_IMG(0x10118c10u), ecx, 1, sp0 - 8u);
                t14 = g->edx;
                if ((uint8_t)t13 == 0u)
                {
                    eax = t13;
                    edx = t14;
                }
                else
                {
                    edx = t14;
                    wr32(sp0 - 0x14u, 0u);
                    wr32(sp0 - 0x18u, 8u);
                    g->eax = rd32(self);
                    g->edx = edx;
                    t15 = rd32(self);
                    g->esp = sp0 - 0x10u;
                    t16 = cow_thiscall(g, rd32(t15 + 0x18u), self, 2, 8u, 0u);
                    t17 = g->edx;
                    eax = t16;
                    edx = t17;
                }
            }
            if (rd32(rd32(COW_IMG(0x10663740u)) + 8u) == 0u)
            {
                loc_c = rd32(sp0 - 0xcu);
                loc_10 = rd32(sp0 - 0x10u);
            }
            else
            {
                ecx = rd32(rd32(COW_IMG(0x10663740u)) + 8u);
                wr32(sp0 - 0x14u, sp0 - 8u);
                g->eax = eax;
                g->edx = sp0 - 8u;
                g->esp = sp0 - 0x10u;
                t18 = cow_thiscall(g, COW_IMG(0x10118c10u), ecx, 1, sp0 - 8u);
                t19 = g->edx;
                if ((uint8_t)t18 == 0u)
                {
                    eax = t18;
                    edx = t19;
                    loc_c = rd32(sp0 - 0xcu);
                    loc_10 = rd32(sp0 - 0x10u);
                }
                else
                {
                    edx = t19;
                    wr32(sp0 - 0x14u, 0u);
                    wr32(sp0 - 0x18u, 3u);
                    g->eax = rd32(self);
                    g->edx = edx;
                    t20 = rd32(self);
                    g->esp = sp0 - 0x10u;
                    t21 = cow_thiscall(g, rd32(t20 + 0x18u), self, 2, 3u, 0u);
                    t22 = g->edx;
                    eax = t21;
                    edx = t22;
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
void cow_adapter_101dca80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101dca80(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
