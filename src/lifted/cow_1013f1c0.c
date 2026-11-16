/* f_0x1013f1c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1013f1c0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 76u);

    wr32(sp0 - 0x20u, in_ebx);
    wr32(sp0 - 0x24u, in_ebp);
    wr32(sp0 - 0x28u, in_esi);
    wr32(sp0 - 0x2cu, in_edi);
    wr16(sp0 - 0xcu, 0u);
    t1 = rd32(self + 8u);
    wr16(sp0 - 0xau, 0u);
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    wr16(sp0 - 0x14u, 0u);
    wr16(sp0 - 0x12u, 0u);
    wr16(sp0 - 0x10u, 0u);
    wr16(sp0 - 0xeu, 0u);
    wr32(sp0 - 0x1cu, 0u);
    if (t1 == 0u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        ecx = t1;
        wr32(sp0 - 0x30u, sp0 - 0xcu);
        g->esp = sp0 - 0x2cu;
        cow_thiscall(g, COW_IMG(0x1011a710u), ecx, 1, sp0 - 0xcu);
        t2 = rd32(sp0 - 6u) - rd32(sp0 - 0xau);
        wr32(sp0 - 0x18u, t2);
        if (rd32(COW_IMG(0x106643acu)) == 0u)
        {
            eax = rd32(COW_IMG(0x106643acu));
            edx = rd32(sp0 - 0xau);
            ebx = 0u;
            ebp = rd32(sp0 - 8u) - rd32(sp0 - 0xcu);
            loc_18 = t2;
            loc_1c = 0u;
        }
        else
        {
            eax = rd32(COW_IMG(0x106643acu));
            edx = rd32(sp0 - 0xau);
            ebp = rd32(sp0 - 8u) - rd32(sp0 - 0xcu);
            loc_18 = t2;
            if (rd32(eax + 8u) == 0u)
            {
                eax = rd32(eax + 8u);
                ebx = 0u;
            }
            else
            {
                eax = rd32(eax + 8u);
                wr32(sp0 - 0x30u, sp0 - 0x14u);
                g->edx = edx;
                g->esp = sp0 - 0x2cu;
                t3 = cow_call_regs(g, COW_IMG(0x10118f70u), eax, eax, g->edx, 0, 1, sp0 - 0x14u);
                t4 = g->edx;
                t5 = rd16(sp0 - 0x12u);
                wr16(sp0 - 0x14u, (uint16_t)(rd16(sp0 - 0x14u) + 0xffe0u));
                if ((int16_t)t5 > (int16_t)rd16(sp0 - 6u))
                {
                    eax = t3;
                    edx = (t4 & 0xffff0000u) | t5;
                    ebx = 0u;
                }
                else
                {
                    eax = t3;
                    edx = (t4 & 0xffff0000u) | t5;
                    if ((int16_t)rd16(sp0 - 0x14u) > (int16_t)rd16(sp0 - 8u))
                    {
                        eax = (eax & 0xffff0000u) | rd16(sp0 - 0x14u);
                        ebx = 0u;
                    }
                    else
                    {
                        eax = (eax & 0xffff0000u) | rd16(sp0 - 0x14u);
                        wr32(sp0 - 0x1cu, 1u);
                        ebx = 1u;
                        loc_1c = 1u;
                    }
                }
            }
        }
        if (rd32(self + 0x14u) != ebx)
        {
            if (ebx == 0u)
            {
                eax = ebx;
                wr32(sp0 - 0x30u, sp0 - 0xcu);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x2cu;
                t8 = cow_thiscall(g, COW_IMG(0x1011a710u), rd32(self + 8u), 1, sp0 - 0xcu);
                t9 = g->edx;
                eax = t8;
                edx = t9;
                ebx = (uint32_t)(int16_t)rd16(sp0 - 0xau);
                esi = (uint32_t)(int16_t)rd16(sp0 - 0xcu);
            }
            else
            {
                eax = ebx;
                if (eax != 1u)
                {
                    eax = eax - 1u;
                    ebx = rd32(sp0 - 0x10u);
                    esi = rd32(sp0 - 0x14u);
                }
                else
                {
                    t6 = rd32(sp0 - 0x14u);
                    t7 = rd16(sp0 - 0xau);
                    wr16(sp0 - 0xcu, (uint16_t)(t6 - ebp));
                    eax = t6 - ebp;
                    ebx = (uint32_t)(int16_t)t7;
                    esi = (uint32_t)(int16_t)(t6 - ebp) - 1u;
                }
            }
            wr32(sp0 - 0x30u, ebx);
            wr32(sp0 - 0x34u, esi);
            g->esp = sp0 - 0x2cu;
            t10 = cow_call_regs(g, COW_IMG(0x10119110u), eax, rd32(self + 8u), g->edx, 0, 2, esi, ebx);
            wr32(sp0 - 0x30u, 0u);
            wr32(sp0 - 0x34u, 1u);
            wr32(sp0 - 0x38u, 1u);
            t11 = rd32(sp0 - 0x18u);
            wr32(sp0 - 0x3cu, t11);
            wr32(sp0 - 0x40u, ebp);
            wr32(sp0 - 0x44u, ebx);
            wr32(sp0 - 0x48u, esi);
            g->edx = t11;
            cow_thiscall(g, COW_IMG(0x1011a5a0u), rd32(self + 8u), 7, esi, ebx, ebp, t11, 1u, 1u, 0u);
            t12 = g->edx;
            t13 = rd32(sp0 - 0x1cu);
            wr32(self + 0x14u, t13);
            eax = t13;
            edx = t12;
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1013f1c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1013f1c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
