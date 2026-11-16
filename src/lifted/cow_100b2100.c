/* f_0x100b2100 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b2100(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_44;
    uint32_t loc_4c;
    uint32_t t1;
    uint32_t t10;
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
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 108u);

    wr32(sp0 - 0x48u, in_esi);
    wr8(COW_IMG(0x10488208u), 1u);
    if (rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) != 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
        loc_44 = ((((rd32(sp0 - 0x44u) & 0xffffff00u) | 0x96u) & 0xffff00ffu) | 0x200u) & 0xff00ffffu;
        if (rd16(eax + 0x210u) == 0u)
        {
            eax = eax + 0x7cu;
        }
        else
        {
            eax = eax + 0x214u;
        }
        wr32(sp0 - 0x4cu, eax);
        wr32(sp0 - 0x50u, COW_IMG(0x1035bb48u));
        wr32(sp0 - 0x54u, sp0 - 0x40u);
        ecx = self;
        edx = sp0 - 0x40u;
        loc_4c = eax;
    }
    else
    {
        loc_44 = ((((rd32(sp0 - 0x44u) & 0xffffff00u) | 0x96u) & 0xffff00ffu) | 0x200u) & 0xff00ffffu;
        wr32(sp0 - 0x4cu, COW_IMG(0x1035d2bcu));
        wr32(sp0 - 0x50u, COW_IMG(0x1035bb48u));
        wr32(sp0 - 0x54u, sp0 - 0x40u);
        ecx = sp0 - 0x40u;
        edx = in_edx;
        loc_4c = COW_IMG(0x1035d2bcu);
    }
    g->ecx = ecx;
    g->esp = sp0 - 0x40u;
    t1 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x40u, COW_IMG(0x1035bb48u), loc_4c, in_esi, loc_44);
    t2 = g->ecx;
    wr16(COW_IMG(0x10482f40u), rd16(self + 2u));
    t3 = rd16(self + 2u);
    wr16(COW_IMG(0x104855aau), (uint16_t)t3);
    t4 = ((t2 | t3) & 0xffff0000u) | rd16(self + 2u);
    if (rd32(COW_IMG(0x10480af0u) + (uint16_t)t4 * 4u) == 0u)
    {
        ecx = t4;
        edx = (uint16_t)t4;
        eax = 0u;
    }
    else
    {
        eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)t4 * 4u);
        ecx = t4;
        edx = (uint16_t)t4;
        if (rd16(eax + 0x210u) == 0u)
        {
            eax = eax + 0x7cu;
        }
        else
        {
            eax = eax + 0x214u;
        }
    }
    wr32(sp0 - 0x4cu, eax);
    wr32(sp0 - 0x50u, ecx);
    wr32(sp0 - 0x54u, 1u);
    wr32(sp0 - 0x58u, 0u);
    wr32(sp0 - 0x5cu, sp0 - 0x44u);
    wr32(sp0 - 0x60u, 0u);
    wr32(sp0 - 0x64u, 1u);
    g->eax = sp0 - 0x44u;
    g->edx = edx;
    g->esp = sp0 - 0x60u;
    t5 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 1u);
    t6 = g->ecx;
    t7 = g->edx;
    wr32(sp0 - 0x64u, t5);
    wr32(sp0 - 0x68u, 1u);
    t8 = cow_call_regs(g, COW_IMG(0x100964a0u), g->eax, g->ecx, t7, 1, 2, 1u, t5);
    t9 = g->edx;
    wr32(sp0 - 0x64u, t8);
    wr32(sp0 - 0x68u, sp0 - 0x40u);
    g->esp = sp0 - 0x48u;
    t10 = cow_call_regs(g, COW_IMG(0x100ad5e0u), t8, sp0 - 0x40u, t9, 1, 8, sp0 - 0x40u, t8, 0u, sp0 - 0x44u, 0u, 1u, rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu));
    wr16(rd32(self + 0x260u) + 0x164u, rd16(self + 2u));
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 3u));
    g->esi = rd32(sp0 - 0x48u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b2100(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100b2100(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
