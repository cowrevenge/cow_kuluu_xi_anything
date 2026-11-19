/* f_0x100ac4e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=0 */
uint32_t cow_fn_100ac4e0(Guest* g)
{
    double d13;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100ac55du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100ac55d;
    case 0x100ac57bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100ac57b;
    case 0x100ac585u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100ac585;
    case 0x100ac587u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100ac587;
    case 0x100ac591u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100ac591;
    default: break;
    }
#endif

    COW_AT(100ac4e0)
    g->esp = sp0 - 8u;
    t1 = cow_call_regs(g, COW_IMG(0x100a57f0u), in_eax, self, g->edx, 1, 0);
    t2 = rd32(self + 0xd4u);
    wr32(self + 0x5c4u, t2);
    t3 = rd32(self + 0xd8u);
    wr32(self + 0x5c8u, t3);
    t4 = rd32(self + 0xdcu);
    wr32(self + 0x5ccu, t4);
    wr32(self + 0x5d0u, 0x3f800000u);
    t5 = rd32(self + 0xe4u);
    wr32(self + 0x5d4u, t5);
    t6 = rd32(self + 0xe8u);
    wr32(self + 0x5d8u, t6);
    t7 = rd32(self + 0xecu);
    wr32(self + 0x5dcu, t7);
    t8 = rd8(self + 0xb2u);
    wr32(self + 0x5e0u, 0x3f800000u);
    t9 = rd32(self + 0x87cu);
    wr8(self + 0xb2u, t8 & 0xfeu);
    if ((int32_t)t9 <= 0)
    {
        eax = t9;
        edx = t6;
        ebx = (in_ebx & 0xffffff00u) | (uint8_t)t1;
    }
    else
    {
        eax = t9;
        ecx = ((t7 | t8) & 0xffffff00u) | (t8 & 0xfeu);
        edx = t6;
        ebx = (in_ebx & 0xffffff00u) | (uint8_t)t1;
    COW_AT(100ac55d)
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t10 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
        t11 = g->ecx;
        t12 = g->edx;
        d13 = cow_take_float(g);
        g->edx = t12;
        fpush(g, d13);
        t14 = cow_call_regs(g, COW_IMG(0x10311c6cu), t10, g->ecx, g->edx, 1, 0);
        t15 = g->edx;
        t16 = rd32(self + 0x87cu) - t14;
        wr32(self + 0x87cu, t16);
        if ((int32_t)t16 > 0)
        {
            eax = t16;
            edx = t15;
        }
        else
        {
            ecx = t16;
            edx = t15;
    COW_AT(100ac57b)
            if (rd32(self + 0x880u) == 0u)
            {
                eax = rd32(self + 0x880u);
            }
            else
            {
                eax = rd32(self + 0x880u);
    COW_AT(100ac585)
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 8u;
                t17 = cow_thiscall(g, eax, ecx, 0);
                t18 = g->edx;
                eax = t17;
                edx = t18;
            }
    COW_AT(100ac587)
            wr32(self + 0x880u, 0u);
        }
    }
    COW_AT(100ac591)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edx = edx;
    return (eax & 0xffffff00u) | (uint8_t)ebx;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100ac4e0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100ac55du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100ac57bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100ac585u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100ac587u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100ac591u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100ac4e0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100ac4e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
