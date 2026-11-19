/* f_0x100b2aa0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b2aa0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
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
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
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
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100b2ab1u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100b2ab1;
    case 0x100b2ac0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100b2ac0;
    case 0x100b2ad0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100b2ad0;
    case 0x100b2ad6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100b2ad6;
    case 0x100b2aeau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100b2aea;
    case 0x100b2af7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100b2af7;
    case 0x100b2b19u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100b2b19;
    case 0x100b2b38u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_10 = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100b2b38;
    case 0x100b2b53u: eax = g->eax; self = g->ecx; in_edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100b2b53;
    case 0x100b2b7cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_10 = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100b2b7c;
    default: break;
    }
#endif

    COW_AT(100b2aa0)
    if (rd8(COW_IMG(0x1047d3ecu)) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x1047d3ecu));
        goto L_100b2b53;
    }
    eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x1047d3ecu));
    COW_AT(100b2ab1)
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x1014e0a0u), rd32(COW_IMG(0x1047d3e8u)), 0);
    t2 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t2;
    }
    else
    {
        eax = t1;
        edx = t2;
    COW_AT(100b2ac0)
        if (rd32(rd32(COW_IMG(0x1047d3e8u)) + 0x53cu) != 0u)
        {
            ecx = rd32(rd32(COW_IMG(0x1047d3e8u)) + 0x53cu);
    COW_AT(100b2ad0)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t3 = cow_thiscall_cdecl(g, ecx, ecx, 1, eax);
            t4 = g->edx;
            eax = t3;
            edx = t4;
        }
    }
    COW_AT(100b2ad6)
    g->edx = edx;
    t5 = rd32(COW_IMG(0x1047d3e8u));
    g->esp = sp0 - 8u;
    t6 = cow_call_regs(g, COW_IMG(0x1014e1c0u), eax, t5, g->edx, 1, 0);
    t7 = g->ecx;
    t8 = g->edx;
    if ((uint16_t)t6 == 0u) goto L_100b2b7c;
    eax = t6;
    ecx = t7;
    edx = t8;
    COW_AT(100b2aea)
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 1u));
    if ((uint16_t)eax != 0xffu)
    {
    COW_AT(100b2b19)
        t14 = (uint32_t)(int16_t)eax - 1u;
        wr32(COW_IMG(0x104887f8u), t14);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t15 = cow_call_regs(g, COW_IMG(0x100ae3a0u), t14, g->ecx, g->edx, 1, 0);
        t16 = g->ecx;
        t17 = g->edx;
        g->edx = t17;
        t18 = cow_call_regs(g, COW_IMG(0x100b2a60u), t15, g->ecx, g->edx, 1, 0);
        t19 = g->edx;
        t20 = rd32(rd32(COW_IMG(0x10578204u)) + 8u);
        eax = t18;
        edx = t19;
        edi = rd32(COW_IMG(0x10578204u));
        loc_10 = t20;
    }
    else
    {
    COW_AT(100b2af7)
        wr32(COW_IMG(0x104887f8u), 0xffu);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t9 = cow_call_regs(g, COW_IMG(0x100ae3a0u), eax, g->ecx, g->edx, 1, 0);
        t10 = g->ecx;
        t11 = g->edx;
        t12 = cow_call_regs(g, COW_IMG(0x100b2a60u), t9, g->ecx, g->edx, 1, 0);
        t13 = rd32(rd32(COW_IMG(0x10578204u)) + 8u);
        eax = t12;
        edx = t13;
        edi = rd32(COW_IMG(0x10578204u));
        loc_10 = t13;
    }
    COW_AT(100b2b38)
    g->edx = edx;
    g->esp = sp0 - 8u;
    t21 = cow_call_regs(g, COW_IMG(0x1015e790u), eax, COW_IMG(0x10621838u), g->edx, 0, 2, loc_10, 1u);
    t22 = g->edx;
    cow_thiscall(g, COW_IMG(0x1013bf40u), edi, 0);
    wr8(self + 0x25au, 1u);
    g->esi = in_esi;
    g->edi = in_edi;
    return;
L_100b2b53: ;
    COW_AT(100b2b53)
    g->esp = sp0 - 8u;
    t23 = cow_call_regs(g, COW_IMG(0x100b2a60u), eax, g->ecx, g->edx, 1, 0);
    t24 = rd32(rd32(COW_IMG(0x10578204u)) + 8u);
    g->edx = t24;
    t25 = rd32(COW_IMG(0x10578204u));
    t26 = cow_call_regs(g, COW_IMG(0x1015e790u), t23, COW_IMG(0x10621838u), g->edx, 0, 2, t24, 1u);
    t27 = g->edx;
    cow_thiscall(g, COW_IMG(0x1013bf40u), t25, 0);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 1u));
L_100b2b7c: ;
    COW_AT(100b2b7c)
    wr8(self + 0x25au, 1u);
    g->esi = in_esi;
    g->edi = in_edi;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100b2aa0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100b2ab1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100b2ac0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100b2ad0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100b2ad6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100b2aeau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100b2af7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100b2b19u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100b2b38u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_10 = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0xcu, 1u);
        (void)sp0;
        return 1;
    }
    case 0x100b2b53u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x100b2b7cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_10 = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100b2aa0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_100b2aa0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
