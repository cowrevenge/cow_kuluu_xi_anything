/* f_0x100731b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_100731b0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
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
    uint32_t t27;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 44u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100731cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebp = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_100731cf;
    case 0x100731d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_100731d8;
    case 0x100731e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100731e5;
    case 0x100731eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100731ee;
    case 0x100731f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_100731f5;
    case 0x1007320bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1007320b;
    case 0x1007321eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1007321e;
    case 0x10073232u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10073232;
    case 0x1007325fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1007325f;
    case 0x10073287u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10073287;
    case 0x100732a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100732a0;
    case 0x100732a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100732a9;
    default: break;
    }
#endif

    COW_AT(100731b0)
    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_ebp);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    wr32(sp0 - 0x1cu, arg2);
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x10074280u), 1, arg2);
    t1 = g->edx;
    if (rd32(COW_IMG(0x1047cf84u)) == 0u)
    {
        eax = rd32(COW_IMG(0x1047cf84u));
        edx = t1;
        loc_c = in_ebx;
        loc_10 = in_ebp;
        loc_14 = in_esi;
        loc_18 = in_edi;
        goto L_100731f5;
    }
    eax = rd32(COW_IMG(0x1047cf84u));
    COW_AT(100731cf)
    if (rd32(rd32(eax) + 0x14u) == 0u)
    {
        edx = rd32(rd32(eax) + 0x14u);
        eax = rd32(eax);
        loc_c = in_ebx;
        loc_10 = in_ebp;
        loc_14 = in_esi;
        loc_18 = in_edi;
        goto L_100731f5;
    }
    edx = rd32(rd32(eax) + 0x14u);
    eax = rd32(eax);
    loc_c = in_ebx;
    loc_10 = in_ebp;
    loc_14 = in_esi;
    loc_18 = in_edi;
L_100731d8: ;
    COW_AT(100731d8)
    g->eax = eax;
    g->edx = edx;
    t2 = rd32(edx);
    g->esp = sp0 - 0x18u;
    t3 = cow_thiscall(g, COW_IMG(0x10072270u), t2, 0);
    t4 = g->edx;
    if (t3 != t2)
    {
        eax = t3;
        esi = t2;
        goto L_100731ee;
    }
    eax = t3;
    edx = t4;
    esi = t2;
    COW_AT(100731e5)
    if (rd32(esi + 0x34u) == arg2) goto L_10073287;
L_100731ee: ;
    COW_AT(100731ee)
    if (rd32(esi + 0x10u) != 0u)
    {
        edx = rd32(esi + 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        goto L_100731d8;
    }
    edx = rd32(esi + 0x10u);
    loc_c = rd32(sp0 - 0xcu);
    loc_10 = rd32(sp0 - 0x10u);
    loc_14 = rd32(sp0 - 0x14u);
    loc_18 = rd32(sp0 - 0x18u);
L_100731f5: ;
    COW_AT(100731f5)
    wr32(sp0 - 0x1cu, arg2);
    g->ebx = arg2;
    g->eax = eax;
    g->edx = edx;
    t5 = rd32(COW_IMG(0x10662dccu));
    g->esp = sp0 - 0x18u;
    t6 = cow_thiscall(g, COW_IMG(0x101c4af0u), t5, 1, arg2);
    t7 = g->ecx;
    t8 = g->edx;
    if ((int32_t)t6 <= 0) goto L_100732a9;
    eax = t6;
    ecx = t7;
    edx = t8;
    edi = t6;
    COW_AT(1007320b)
    wr32(sp0 - 0x1cu, edi);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t9 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, edi, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    t10 = g->edx;
    if (t9 == 0u) goto L_100732a9;
    eax = t9;
    edx = t10;
    esi = t9;
    COW_AT(1007321e)
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, edi);
    wr32(sp0 - 0x24u, esi);
    wr32(sp0 - 0x28u, arg2);
    g->ebx = arg2;
    g->eax = eax;
    g->edx = edx;
    t11 = rd32(COW_IMG(0x10662dccu));
    g->esp = sp0 - 0x18u;
    t12 = cow_thiscall(g, COW_IMG(0x101c4740u), t11, 4, arg2, esi, edi, 0u);
    t13 = g->ecx;
    t14 = g->edx;
    if (t12 == 0u)
    {
        eax = t12;
        ecx = t13;
        edx = t14;
        goto L_100732a0;
    }
    eax = t12;
    ecx = t13;
    edx = t14;
    COW_AT(10073232)
    wr32(sp0 - 0x1cu, ecx);
    wr32(sp0 - 0x20u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t15 = cow_thiscall(g, COW_IMG(0x1005e110u), sp0 - 0x1cu, 1, 0u);
    t16 = g->edx;
    wr32(sp0 - 0x20u, esi);
    wr32(sp0 - 0x24u, sp0 - 8u);
    g->esp = sp0 - 0x18u;
    t17 = cow_thiscall(g, COW_IMG(0x10073430u), self, 3, sp0 - 8u, esi, rd32(sp0 - 0x1cu));
    wr32(sp0 - 0x1cu, rd32(t17));
    wr32(sp0 - 0x20u, sp0 - 4u);
    g->eax = sp0 - 4u;
    g->edx = rd32(t17);
    t18 = rd32(t17);
    t19 = cow_thiscall(g, COW_IMG(0x10052870u), sp0 + 8u, 2, sp0 - 4u, t18);
    t20 = g->ecx;
    t21 = g->edx;
    if (rd32(t19) == 0u)
    {
        eax = t19;
        ecx = t20;
        edx = t21;
        goto L_100732a0;
    }
    eax = t19;
    edx = t21;
    COW_AT(1007325f)
    wr32(sp0 - 0x1cu, arg2);
    g->eax = eax;
    g->ecx = self;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t22 = cow_stdcall(g, COW_IMG(0x10072fb0u), 1, arg2);
    t23 = g->ecx;
    t24 = g->edx;
    wr32(sp0 - 0x1cu, esi);
    wr32(t22 + 0x34u, arg2);
    cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t23, t24, 1, 1, esi);
    wr32(arg1, arg2);
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    g->ebp = rd32(sp0 - 0x10u);
    return arg1;
L_10073287: ;
    COW_AT(10073287)
    wr8(rd32(edx) + 0x19u, rd8(rd32(edx) + 0x19u) | 0x80u);
    wr32(arg1, edx);
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    g->ebp = rd32(sp0 - 0x10u);
    return arg1;
L_100732a0: ;
    COW_AT(100732a0)
    wr32(sp0 - 0x1cu, esi);
    g->esp = sp0 - 0x18u;
    cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, esi);
L_100732a9: ;
    COW_AT(100732a9)
    t25 = rd32(sp0 - 0x10u);
    t26 = rd32(sp0 - 0x14u);
    t27 = rd32(sp0 - 0x18u);
    wr32(arg1, 0u);
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = t26;
    g->edi = t27;
    g->ebp = t25;
    return arg1;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100731b0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100731cfu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebp = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x18u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100731d8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x18u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100731e5u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100731eeu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100731f5u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x18u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1007320bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1007321eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10073232u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1007325fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebx = arg2;
        wr32(sp0 - 0x24u, sp0 - 8u);
        wr32(sp0 - 0x20u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x10073287u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x100732a0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x100732a9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100731b0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100731b0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
