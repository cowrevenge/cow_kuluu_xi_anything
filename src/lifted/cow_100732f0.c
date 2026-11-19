/* f_0x100732f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_100732f0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
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
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
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
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 60u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1007330fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebp = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_1007330f;
    case 0x10073318u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_10073318;
    case 0x10073325u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; goto E_10073325;
    case 0x1007332au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; goto E_1007332a;
    case 0x10073331u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_10073331;
    case 0x1007334du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_1007334d;
    case 0x10073379u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_10073379;
    case 0x10073383u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10073383;
    case 0x1007339cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_1007339c;
    case 0x100733dau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100733da;
    case 0x10073406u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10073406;
    case 0x1007340cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1007340c;
    case 0x1007340fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_1007340f;
    default: break;
    }
#endif

    COW_AT(100732f0)
    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_ebp);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    wr32(sp0 - 0x1cu, arg3);
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x10074280u), 1, arg3);
    t1 = g->edx;
    if (rd32(COW_IMG(0x1047cf84u)) == 0u)
    {
        eax = rd32(COW_IMG(0x1047cf84u));
        edx = t1;
        loc_c = in_ebx;
        loc_10 = in_ebp;
        loc_14 = in_esi;
        loc_18 = in_edi;
        goto L_10073331;
    }
    eax = rd32(COW_IMG(0x1047cf84u));
    COW_AT(1007330f)
    if (rd32(rd32(eax) + 0x14u) == 0u)
    {
        edx = rd32(rd32(eax) + 0x14u);
        eax = rd32(eax);
        loc_c = in_ebx;
        loc_10 = in_ebp;
        loc_14 = in_esi;
        loc_18 = in_edi;
        goto L_10073331;
    }
    edx = rd32(rd32(eax) + 0x14u);
    eax = rd32(eax);
    loc_c = in_ebx;
    loc_10 = in_ebp;
    loc_14 = in_esi;
    loc_18 = in_edi;
L_10073318: ;
    COW_AT(10073318)
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
        goto L_1007332a;
    }
    eax = t3;
    edx = t4;
    esi = t2;
    COW_AT(10073325)
    if (rd32(esi + 0x34u) == arg3) goto L_10073383;
L_1007332a: ;
    COW_AT(1007332a)
    if (rd32(esi + 0x10u) != 0u)
    {
        edx = rd32(esi + 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        goto L_10073318;
    }
    edx = rd32(esi + 0x10u);
    loc_c = rd32(sp0 - 0xcu);
    loc_10 = rd32(sp0 - 0x10u);
    loc_14 = rd32(sp0 - 0x14u);
    loc_18 = rd32(sp0 - 0x18u);
L_10073331: ;
    COW_AT(10073331)
    wr32(sp0 - 0x1cu, COW_IMG(0x1034f2d0u));
    wr32(sp0 - 0x20u, arg2);
    g->eax = eax;
    g->ecx = arg2;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t5 = cow_cdecl(g, COW_IMG(0x1031201eu), 5, arg2, COW_IMG(0x1034f2d0u), loc_18, loc_14, loc_10);
    t6 = g->ecx;
    t7 = g->edx;
    if (t5 == 0u) goto L_1007340f;
    eax = t5;
    ecx = t6;
    edx = t7;
    esi = t5;
    COW_AT(1007334d)
    wr32(sp0 - 0x1cu, 2u);
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, esi);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x18u;
    t8 = cow_call_regs(g, COW_IMG(0x10313d30u), g->eax, g->ecx, edx, 1, 3, esi, 0u, 2u);
    t9 = g->ecx;
    t10 = g->edx;
    wr32(sp0 - 0x28u, esi);
    g->ecx = t9;
    g->esp = sp0 - 0x1cu;
    t11 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, t10, 1, 3, esi, rd32(sp0 - 0x24u), 0u);
    t12 = g->ecx;
    t13 = g->edx;
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, 0u);
    wr32(sp0 - 0x34u, esi);
    g->ecx = t12;
    g->esp = sp0 - 0x28u;
    t14 = cow_call_regs(g, COW_IMG(0x10313d30u), g->eax, g->ecx, t13, 1, 3, esi, 0u, 0u);
    t15 = g->ecx;
    t16 = g->edx;
    wr32(sp0 - 0x38u, t11);
    g->esp = sp0 - 0x2cu;
    t17 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, t15, t16, 1, 3, t11, rd32(sp0 - 0x34u), 0u);
    t18 = g->ecx;
    t19 = g->edx;
    wr32(sp0 - 0x1cu, esi);
    if (t17 != 0u)
    {
        eax = t17;
        ecx = t18;
        edx = t19;
        ebx = t11;
        edi = t17;
        loc_1c = esi;
        goto L_1007339c;
    }
    eax = t17;
    ecx = t18;
    edx = t19;
    edi = t17;
    loc_1c = esi;
    COW_AT(10073379)
    g->edi = edi;
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, edx, 1, 3, loc_1c, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
L_1007340c: ;
    COW_AT(1007340c)
L_1007340f: ;
    COW_AT(1007340f)
    t34 = rd32(sp0 - 0x10u);
    t35 = rd32(sp0 - 0x14u);
    t36 = rd32(sp0 - 0x18u);
    wr32(arg1, 0u);
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = t35;
    g->edi = t36;
    g->ebp = t34;
    return;
L_10073383: ;
    COW_AT(10073383)
    wr8(rd32(edx) + 0x19u, rd8(rd32(edx) + 0x19u) | 0x80u);
    wr32(arg1, edx);
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    g->ebp = rd32(sp0 - 0x10u);
    return;
L_1007339c: ;
    COW_AT(1007339c)
    wr32(sp0 - 0x20u, 1u);
    wr32(sp0 - 0x24u, ebx);
    wr32(sp0 - 0x28u, edi);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x10u;
    t20 = cow_call_regs(g, COW_IMG(0x103121bfu), g->eax, g->ecx, edx, 1, 6, edi, ebx, 1u, loc_1c, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    t21 = g->ecx;
    t22 = g->edx;
    wr32(sp0 - 0x2cu, esi);
    g->edi = edi;
    g->esp = sp0 - 0x20u;
    t23 = cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t22, 1, 3, esi, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u));
    t24 = g->edx;
    wr32(sp0 - 0x20u, 0u);
    g->esp = sp0 - 0x1cu;
    t25 = cow_thiscall(g, COW_IMG(0x1005e110u), sp0 - 0x1cu, 1, 0u);
    wr32(sp0 - 0x20u, edi);
    wr32(sp0 - 0x24u, sp0 - 8u);
    g->edx = sp0 - 8u;
    g->esp = sp0 - 0x18u;
    t26 = cow_thiscall(g, COW_IMG(0x10073430u), self, 3, sp0 - 8u, edi, rd32(sp0 - 0x1cu));
    t27 = g->edx;
    wr32(sp0 - 0x1cu, rd32(t26));
    wr32(sp0 - 0x20u, sp0 - 4u);
    g->eax = rd32(t26);
    g->edx = t27;
    t28 = rd32(t26);
    t29 = cow_thiscall(g, COW_IMG(0x10052870u), sp0 + 8u, 2, sp0 - 4u, t28);
    t30 = g->ecx;
    t31 = g->edx;
    if (rd32(t29) == 0u)
    {
        eax = t29;
        ecx = t30;
        edx = t31;
        goto L_10073406;
    }
    eax = t29;
    edx = t31;
    COW_AT(100733da)
    wr32(sp0 - 0x1cu, arg2);
    g->eax = eax;
    g->ecx = self;
    g->esp = sp0 - 0x18u;
    t32 = cow_stdcall(g, COW_IMG(0x10072fb0u), 1, arg2);
    t33 = g->ecx;
    wr32(sp0 - 0x1cu, edi);
    wr32(t32 + 0x34u, arg3);
    cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t33, arg3, 1, 1, edi);
    wr32(arg1, arg2);
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    g->ebp = rd32(sp0 - 0x10u);
    return;
L_10073406: ;
    COW_AT(10073406)
    wr32(sp0 - 0x1cu, edi);
    g->esp = sp0 - 0x18u;
    cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, edi);
    goto L_1007340c;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100732f0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1007330fu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebp = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x18u;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10073318u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x18u;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10073325u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x18u;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1007332au:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x18u;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10073331u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1007334du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10073379u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x10073383u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1007339cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100733dau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x24u, sp0 - 8u);
        wr32(sp0 - 0x20u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x10073406u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x24u, sp0 - 8u);
        wr32(sp0 - 0x20u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1007340cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1007340fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100732f0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_100732f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
