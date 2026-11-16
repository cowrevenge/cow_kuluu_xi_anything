/* f_0x100b1e80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b1e80(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_5c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
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
    cow_frame(g, sp0, 124u);

    wr32(sp0 - 0x50u, in_esi);
    wr32(sp0 - 0x54u, sp0 - 0x48u);
    wr32(sp0 - 0x58u, sp0 - 0x44u);
    wr32(sp0 - 0x5cu, 1u);
    wr16(rd32(self + 0x260u) + 0x164u, 0u);
    g->edx = sp0 - 0x44u;
    t1 = rd32(self + 0x260u);
    g->esp = sp0 - 0x58u;
    t2 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 1u);
    t3 = g->edx;
    wr32(sp0 - 0x5cu, t2);
    g->esp = sp0 - 0x50u;
    t4 = cow_fastcall(g, COW_IMG(0x100afb00u), self, t3, 3, t2, sp0 - 0x44u, sp0 - 0x48u);
    t5 = g->ecx;
    t6 = g->edx;
    if ((uint8_t)t4 != 1u)
    {
        ebp = in_ebp;
        edi = in_edi;
    }
    else
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        wr32(sp0 - 0x54u, in_ebp);
        wr32(sp0 - 0x58u, in_edi);
        t7 = rd32(sp0 - 0x48u);
        wr8(COW_IMG(0x10488208u), (uint8_t)eax);
        if (rd32(COW_IMG(0x10480af0u) + (uint16_t)t7 * 4u) != 0u)
        {
            eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)t7 * 4u);
            ebp = COW_IMG(0x10480af0u) + (uint16_t)t7 * 4u;
            edi = t7;
            if (rd16(eax + 0x210u) == 0u)
            {
                eax = eax + 0x7cu;
            }
            else
            {
                eax = eax + 0x214u;
            }
            wr32(sp0 - 0x5cu, eax);
            wr32(sp0 - 0x60u, COW_IMG(0x1035bb48u));
            wr32(sp0 - 0x64u, sp0 - 0x40u);
            edx = sp0 - 0x40u;
            loc_5c = eax;
        }
        else
        {
            ebp = COW_IMG(0x10480af0u) + (uint16_t)t7 * 4u;
            edi = t7;
            wr32(sp0 - 0x5cu, COW_IMG(0x1035d2bcu));
            wr32(sp0 - 0x60u, COW_IMG(0x1035bb48u));
            wr32(sp0 - 0x64u, sp0 - 0x40u);
            ecx = sp0 - 0x40u;
            loc_5c = COW_IMG(0x1035d2bcu);
        }
        g->edx = edx;
        g->esp = sp0 - 0x50u;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x40u, COW_IMG(0x1035bb48u), loc_5c, in_edi, in_ebp);
        t8 = g->edx;
        t9 = rd32(ebp);
        wr16(COW_IMG(0x10482f40u), (uint16_t)edi);
        wr16(COW_IMG(0x104855aau), (uint16_t)edi);
        if (t9 == 0u)
        {
            edx = t8;
            eax = 0u;
        }
        else
        {
            eax = t9;
            edx = t8;
            if (rd16(eax + 0x210u) == 0u)
            {
                eax = eax + 0x7cu;
            }
            else
            {
                eax = eax + 0x214u;
            }
        }
        wr32(sp0 - 0x5cu, eax);
        wr32(sp0 - 0x60u, edi);
        wr32(sp0 - 0x64u, 1u);
        wr32(sp0 - 0x68u, 0u);
        wr32(sp0 - 0x6cu, sp0 - 0x4cu);
        wr32(sp0 - 0x70u, 0u);
        wr32(sp0 - 0x74u, 5u);
        g->eax = sp0 - 0x4cu;
        g->edx = edx;
        g->esp = sp0 - 0x70u;
        t10 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 5u);
        t11 = g->ecx;
        t12 = g->edx;
        wr32(sp0 - 0x74u, t10);
        wr32(sp0 - 0x78u, 1u);
        t13 = cow_call_regs(g, COW_IMG(0x100964a0u), g->eax, g->ecx, t12, 1, 2, 1u, t10);
        t14 = g->edx;
        wr32(sp0 - 0x74u, t13);
        wr32(sp0 - 0x78u, sp0 - 0x40u);
        g->esp = sp0 - 0x58u;
        cow_call_regs(g, COW_IMG(0x100ad5e0u), t13, sp0 - 0x40u, t14, 1, 8, sp0 - 0x40u, t13, 0u, sp0 - 0x4cu, 0u, 1u, rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu));
        wr16(rd32(self + 0x260u) + 0x164u, (uint16_t)edi);
        ebp = rd32(sp0 - 0x54u);
        edi = rd32(sp0 - 0x58u);
    }
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 7u));
    g->edi = edi;
    g->ebp = ebp;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b1e80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100b1e80(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
