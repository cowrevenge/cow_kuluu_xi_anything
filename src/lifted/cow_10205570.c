/* f_0x10205570 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10205570(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_8;
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
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_esi = g->esi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102055a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102055a2;
    case 0x102055b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102055b4;
    case 0x102055c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102055c8;
    case 0x102055dau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102055da;
    case 0x102055e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102055e2;
    case 0x102055f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102055f9;
    case 0x10205612u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10205612;
    case 0x10205621u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10205621;
    case 0x1020563bu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1020563b;
    default: break;
    }
#endif

    COW_AT(10205570)
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 1u);
    t2 = rd32(rd32(t1) + 0x148u);
    wr32(self + 0x20u, t2);
    t3 = rd32(rd32(t1) + 0x13cu);
    t4 = rd32(t1);
    t5 = rd32(self);
    wr32(self + 0x24u, t3);
    g->edx = t5;
    cow_thiscall(g, rd32(t5 + 0x48u), self, 0);
    t6 = g->edx;
    if (rd32(self + 0x14u) == 0xffffffffu)
    {
        eax = rd32(self + 0x14u);
        edx = t6;
    }
    else
    {
        eax = rd32(self + 0x14u);
        edx = t6;
    COW_AT(102055a2)
        g->edx = edx;
        t7 = rd32(self + 8u);
        g->esp = sp0 - 4u;
        cow_thiscall(g, COW_IMG(0x101192b0u), t7, 2, eax, 1u);
        t8 = g->ecx;
        t9 = g->edx;
        if (rd32(self + 0x18u) != 0u)
        {
            eax = rd32(self + 0x18u);
            ecx = t8;
            edx = t9;
    COW_AT(102055c8)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 4u;
            t14 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0xfu);
            t15 = g->edx;
            t16 = (t15 & 0xffff0000u) | rd16(self + 0x14u);
            eax = t14;
            edx = t16;
            loc_8 = t14;
            loc_c = t16;
        }
        else
        {
            eax = rd32(self + 0x18u);
            ecx = t8;
            edx = t9;
    COW_AT(102055b4)
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 4u;
            t10 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x10u);
            t11 = g->ecx;
            t12 = g->edx;
            t13 = (t11 & 0xffff0000u) | rd16(self + 0x14u);
            eax = t10;
            edx = t12;
            loc_8 = t10;
            loc_c = t13;
        }
    COW_AT(102055da)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t17 = cow_thiscall(g, COW_IMG(0x1011adb0u), rd32(self + 8u), 2, loc_c, loc_8);
        t18 = g->edx;
        eax = t17;
        edx = t18;
    }
    COW_AT(102055e2)
    wr8(self + 0x29u, 0u);
    wr8(self + 0x2au, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t19 = cow_thiscall(g, COW_IMG(0x1011ba40u), rd32(COW_IMG(0x1057823cu)), 0);
    t20 = g->edx;
    if ((uint8_t)t19 == 0u)
    {
        eax = t19;
        edx = t20;
    }
    else
    {
        edx = t20;
    COW_AT(102055f9)
        wr8(self + 0x29u, 1u);
        t21 = rd32(rd32(COW_IMG(0x1057823cu)) + 8u);
        g->edx = edx;
        t22 = rd32(COW_IMG(0x1057823cu));
        g->esp = sp0 - 4u;
        t23 = cow_call_regs(g, COW_IMG(0x1015e790u), t22, COW_IMG(0x10621838u), g->edx, 0, 2, t21, 1u);
        t24 = g->edx;
        eax = t23;
        edx = t24;
    }
    COW_AT(10205612)
    g->eax = eax;
    g->esp = sp0 - 4u;
    t25 = cow_thiscall(g, COW_IMG(0x1011ba40u), rd32(COW_IMG(0x10578468u)), 0);
    if ((uint8_t)t25 != 0u)
    {
    COW_AT(10205621)
        wr8(self + 0x2au, 1u);
        t26 = rd32(rd32(COW_IMG(0x10578468u)) + 8u);
        g->esp = sp0 - 4u;
        cow_call_regs(g, COW_IMG(0x1015e790u), t26, COW_IMG(0x10621838u), g->edx, 0, 2, t26, 1u);
    }
    COW_AT(1020563b)
    g->esi = in_esi;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10205570(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102055a2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102055b4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102055c8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102055dau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x102055e2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102055f9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10205612u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10205621u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020563bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10205570(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10205570(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
