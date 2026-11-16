/* f_0x100b1fa0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b1fa0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_60;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 128u);

    wr32(sp0 - 0x54u, in_esi);
    t1 = rd32(self + 0x260u);
    wr16(t1 + 0x164u, 0u);
    if (rd8(rd16(self + 0x256u) + rd32(self + 0x20u) + 1u) != 0u)
    {
        ebp = in_ebp;
        edi = in_edi;
    }
    else
    {
        edx = rd32(self + 0x20u);
        wr32(sp0 - 0x58u, sp0 - 0x4cu);
        wr32(sp0 - 0x5cu, sp0 - 0x48u);
        wr32(sp0 - 0x60u, 2u);
        g->edx = edx;
        g->esp = sp0 - 0x5cu;
        t2 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 2u);
        t3 = g->edx;
        wr32(sp0 - 0x60u, t2);
        g->esp = sp0 - 0x54u;
        t4 = cow_fastcall(g, COW_IMG(0x100afb00u), self, t3, 3, t2, sp0 - 0x48u, sp0 - 0x4cu);
        if ((uint8_t)t4 != 1u)
        {
            ebp = in_ebp;
            edi = in_edi;
        }
        else
        {
            wr32(sp0 - 0x58u, sp0 - 0x48u);
            wr32(sp0 - 0x5cu, sp0 - 0x44u);
            wr32(sp0 - 0x60u, 6u);
            g->edx = sp0 - 0x48u;
            g->esp = sp0 - 0x5cu;
            t5 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 6u);
            t6 = g->edx;
            wr32(sp0 - 0x60u, t5);
            g->esp = sp0 - 0x54u;
            t7 = cow_fastcall(g, COW_IMG(0x100afb00u), self, t6, 3, t5, sp0 - 0x44u, sp0 - 0x48u);
            t8 = g->edx;
            if ((uint8_t)t7 != 1u)
            {
                ebp = in_ebp;
                edi = in_edi;
            }
            else
            {
                eax = t7;
                edx = t8;
                wr32(sp0 - 0x58u, in_ebp);
                t9 = rd32(sp0 - 0x4cu);
                wr32(sp0 - 0x5cu, in_edi);
                wr8(COW_IMG(0x10488208u), (uint8_t)eax);
                if (rd32(COW_IMG(0x10480af0u) + (uint16_t)t9 * 4u) != 0u)
                {
                    eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)t9 * 4u);
                    ecx = (uint16_t)t9;
                    ebp = t9;
                    edi = COW_IMG(0x10480af0u) + (uint16_t)t9 * 4u;
                    if (rd16(eax + 0x210u) == 0u)
                    {
                        eax = eax + 0x7cu;
                    }
                    else
                    {
                        eax = eax + 0x214u;
                    }
                    wr32(sp0 - 0x60u, eax);
                    wr32(sp0 - 0x64u, COW_IMG(0x1035bb48u));
                    wr32(sp0 - 0x68u, sp0 - 0x40u);
                    loc_60 = eax;
                }
                else
                {
                    ecx = (uint16_t)t9;
                    ebp = t9;
                    edi = COW_IMG(0x10480af0u) + (uint16_t)t9 * 4u;
                    wr32(sp0 - 0x60u, COW_IMG(0x1035d2bcu));
                    wr32(sp0 - 0x64u, COW_IMG(0x1035bb48u));
                    wr32(sp0 - 0x68u, sp0 - 0x40u);
                    edx = sp0 - 0x40u;
                    loc_60 = COW_IMG(0x1035d2bcu);
                }
                g->edx = edx;
                g->esp = sp0 - 0x54u;
                cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x40u, COW_IMG(0x1035bb48u), loc_60, in_edi, in_ebp);
                t10 = g->edx;
                t11 = rd32(edi);
                wr16(COW_IMG(0x10482f40u), (uint16_t)ebp);
                wr16(COW_IMG(0x104855aau), (uint16_t)ebp);
                if (t11 == 0u)
                {
                    edx = t10;
                    eax = 0u;
                }
                else
                {
                    eax = t11;
                    edx = t10;
                    if (rd16(eax + 0x210u) == 0u)
                    {
                        eax = eax + 0x7cu;
                    }
                    else
                    {
                        eax = eax + 0x214u;
                    }
                }
                wr32(sp0 - 0x60u, eax);
                t12 = rd32(sp0 - 0x48u);
                wr32(sp0 - 0x64u, t12);
                wr32(sp0 - 0x68u, 1u);
                wr32(sp0 - 0x6cu, 0u);
                wr32(sp0 - 0x70u, sp0 - 0x50u);
                wr32(sp0 - 0x74u, 0u);
                wr32(sp0 - 0x78u, 0xau);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x74u;
                t13 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 0xau);
                t14 = g->ecx;
                t15 = g->edx;
                wr32(sp0 - 0x78u, t13);
                wr32(sp0 - 0x7cu, 1u);
                g->ecx = t14;
                t16 = cow_call_regs(g, COW_IMG(0x100964a0u), g->eax, g->ecx, t15, 1, 2, 1u, t13);
                t17 = g->ecx;
                wr32(sp0 - 0x78u, t16);
                wr32(sp0 - 0x7cu, sp0 - 0x40u);
                g->esp = sp0 - 0x5cu;
                cow_call_regs(g, COW_IMG(0x100ad5e0u), t16, t17, sp0 - 0x40u, 1, 8, sp0 - 0x40u, t16, 0u, sp0 - 0x50u, 0u, 1u, rd32(sp0 - 0x64u), rd32(sp0 - 0x60u));
                wr16(rd32(self + 0x260u) + 0x164u, (uint16_t)t12);
                ebp = rd32(sp0 - 0x58u);
                edi = rd32(sp0 - 0x5cu);
            }
        }
        wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 0xcu));
    }
    g->edi = edi;
    g->ebp = ebp;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b1fa0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100b1fa0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
