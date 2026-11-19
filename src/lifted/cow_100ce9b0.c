/* f_0x100ce9b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100ce9b0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_34;
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
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 72u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100ce9dau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); in_ebp = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); g->ebp = rd32(sp0 - 0x2cu); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x34u); g->esi = rd32(sp0 - 0x30u); goto E_100ce9da;
    case 0x100ce9e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); goto E_100ce9e5;
    case 0x100ce9f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; goto E_100ce9f4;
    case 0x100ce9fau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_24 = rd32(sp0 - 0x24u); goto E_100ce9fa;
    case 0x100cea05u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_24 = rd32(sp0 - 0x24u); goto E_100cea05;
    case 0x100cea0bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_24 = rd32(sp0 - 0x24u); goto E_100cea0b;
    case 0x100cea0eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_24 = rd32(sp0 - 0x24u); goto E_100cea0e;
    case 0x100cea16u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_24 = rd32(sp0 - 0x24u); goto E_100cea16;
    case 0x100cea1au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_24 = rd32(sp0 - 0x24u); goto E_100cea1a;
    case 0x100cea1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_24 = rd32(sp0 - 0x24u); goto E_100cea1c;
    case 0x100cea36u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; goto E_100cea36;
    case 0x100cea45u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; goto E_100cea45;
    case 0x100cea4du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; goto E_100cea4d;
    case 0x100cea51u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; goto E_100cea51;
    case 0x100cea53u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; goto E_100cea53;
    case 0x100cea57u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; goto E_100cea57;
    case 0x100cea69u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_24 = rd32(sp0 - 0x24u); goto E_100cea69;
    case 0x100cea74u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_24 = rd32(sp0 - 0x24u); goto E_100cea74;
    case 0x100cea85u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_24 = rd32(sp0 - 0x24u); goto E_100cea85;
    case 0x100cea89u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); goto E_100cea89;
    case 0x100ceaa2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_24 = rd32(sp0 - 0x24u); goto E_100ceaa2;
    case 0x100ceaafu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; goto E_100ceaaf;
    case 0x100ceacdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; goto E_100ceacd;
    case 0x100ceae0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_24 = rd32(sp0 - 0x24u); goto E_100ceae0;
    default: break;
    }
#endif

    COW_AT(100ce9b0)
    wr32(sp0 - 0x28u, in_ebx);
    wr32(sp0 - 0x2cu, in_ebp);
    wr32(sp0 - 0x30u, in_esi);
    wr32(sp0 - 0x34u, in_edi);
    wr32(sp0 - 0x20u, self);
    g->edx = in_edx;
    g->esp = sp0 - 0x34u;
    t1 = cow_thiscall(g, COW_IMG(0x1002b5a0u), self + 0x674u, 0);
    t2 = g->edx;
    if (t1 == 0u)
    {
        esi = self;
        loc_28 = in_ebx;
        loc_2c = in_ebp;
        loc_30 = in_esi;
        loc_34 = in_edi;
        goto L_100cea89;
    }
    eax = t1;
    edx = t2;
    ebp = t1;
    COW_AT(100ce9da)
    if (rd32(ebp) == 0u)
    {
        esi = self;
        loc_28 = in_ebx;
        loc_2c = in_ebp;
        loc_30 = in_esi;
        loc_34 = in_edi;
        goto L_100cea89;
    }
    ecx = rd32(ebp);
    loc_28 = in_ebx;
    loc_2c = in_ebp;
    loc_30 = in_esi;
    loc_34 = in_edi;
    loc_20 = self;
L_100ce9e5: ;
    COW_AT(100ce9e5)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t3 = cow_thiscall(g, COW_IMG(0x10029e70u), ecx, 0);
    t4 = g->edx;
    if (t3 == 0u)
    {
        eax = t3;
        edx = t4;
        goto L_100cea74;
    }
    edx = t4;
    esi = t3;
    COW_AT(100ce9f4)
    if (rd32(esi) == 0u)
    {
        eax = rd32(esi);
        goto L_100cea74;
    }
    eax = rd32(esi);
L_100ce9fa: ;
    COW_AT(100ce9fa)
    t5 = rd32(eax + 8u);
    wr32(sp0 - 0x24u, t5);
    if (rd32(eax + 8u) == 0u) goto L_100cea69;
    eax = t5;
    COW_AT(100cea05)
    if (rd32(eax) == 0u) goto L_100cea69;
    eax = rd32(eax);
    COW_AT(100cea0b)
    eax = rd32(eax + 0x28u);
L_100cea0e: ;
    COW_AT(100cea0e)
    wr32(sp0 - 0x24u, eax);
    if (eax == 0u)
    {
        loc_24 = eax;
    COW_AT(100cea1a)
        eax = 0u;
    }
    else
    {
        loc_24 = eax;
    COW_AT(100cea16)
        eax = rd32(eax);
    }
    COW_AT(100cea1c)
    wr32(sp0 - 0x38u, 0xffffffffu);
    wr32(sp0 - 0x3cu, arg3);
    wr32(sp0 - 0x40u, arg2);
    wr32(sp0 - 0x44u, eax);
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    cow_thiscall(g, COW_IMG(0x100742b0u), sp0 - 0x1cu, 4, eax, arg2, arg3, 0xffffffffu);
    t6 = g->edx;
    if (rd32(sp0 - 8u) != 0u)
    {
        eax = rd32(sp0 - 8u);
        edx = t6;
        goto L_100ceacd;
    }
    edx = t6;
    COW_AT(100cea36)
    g->eax = rd32(sp0 - 0x24u);
    g->edx = edx;
    t7 = rd32(sp0 - 0x24u);
    g->esp = sp0 - 0x34u;
    t8 = cow_thiscall(g, COW_IMG(0x10072270u), rd32(t7), 0);
    t9 = g->edx;
    if (t8 == 0u)
    {
        edx = t9;
        goto L_100cea69;
    }
    eax = t8;
    edx = t9;
    COW_AT(100cea45)
    if (rd32(sp0 - 0x24u) == 0u)
    {
    COW_AT(100cea51)
        ecx = 0u;
    }
    else
    {
        ecx = rd32(sp0 - 0x24u);
    COW_AT(100cea4d)
        ecx = rd32(ecx);
    }
    COW_AT(100cea53)
    if (eax == ecx) goto L_100cea69;
    COW_AT(100cea57)
    t10 = rd32(COW_IMG(0x1047d130u)) - 1u;
    t11 = rd32(eax + 0x14u);
    wr32(COW_IMG(0x1047d130u), t10);
    eax = t11;
    goto L_100cea0e;
L_100cea69: ;
    COW_AT(100cea69)
    if (rd32(rd32(esi) + 4u) != 0u)
    {
        eax = rd32(rd32(esi) + 4u);
        esi = rd32(esi) + 4u;
        goto L_100ce9fa;
    }
    eax = rd32(rd32(esi) + 4u);
L_100cea74: ;
    COW_AT(100cea74)
    if (rd32(rd32(ebp) + 4u) != 0u)
    {
        ecx = rd32(rd32(ebp) + 4u);
        ebp = rd32(ebp) + 4u;
        loc_28 = rd32(sp0 - 0x28u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_20 = rd32(sp0 - 0x20u);
        goto L_100ce9e5;
    }
    COW_AT(100cea85)
    esi = rd32(sp0 - 0x20u);
    loc_28 = rd32(sp0 - 0x28u);
    loc_2c = rd32(sp0 - 0x2cu);
    loc_30 = rd32(sp0 - 0x30u);
    loc_34 = rd32(sp0 - 0x34u);
L_100cea89: ;
    COW_AT(100cea89)
    wr32(sp0 - 0x38u, sp0 + 0xcu);
    g->eax = sp0 + 0xcu;
    g->edx = rd32(esi);
    t16 = rd32(esi);
    g->esp = sp0 - 0x34u;
    t17 = cow_thiscall(g, rd32(t16 + 0x1e0u), esi, 1, sp0 + 0xcu);
    t18 = g->edx;
    wr32(sp0 - 0x24u, rd32(t17));
    if (rd32(t17) == 0u)
    {
        edx = t18;
        goto L_100ceae0;
    }
    eax = rd32(t17);
    edx = t18;
    loc_24 = rd32(t17);
    COW_AT(100ceaa2)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t19 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 - 0x24u, 0);
    t20 = g->edx;
    if ((uint8_t)t19 == 0u)
    {
        edx = t20;
        goto L_100ceae0;
    }
    eax = t19;
    edx = t20;
    COW_AT(100ceaaf)
    wr32(sp0 - 0x38u, arg3);
    wr32(sp0 - 0x3cu, arg2);
    wr32(sp0 - 0x40u, arg1);
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    cow_call_regs(g, COW_IMG(0x100724c0u), eax, rd32(rd32(sp0 - 0x24u)), g->edx, 0, 3, arg1, arg2, arg3);
    t21 = g->edx;
    g->ebx = rd32(sp0 - 0x28u);
    g->esi = rd32(sp0 - 0x30u);
    g->edi = rd32(sp0 - 0x34u);
    g->ebp = rd32(sp0 - 0x2cu);
    g->edx = t21;
    return arg1;
L_100ceacd: ;
    COW_AT(100ceacd)
    t12 = rd32(eax + 0x14u);
    t13 = rd32(sp0 - 0x2cu);
    t14 = rd32(sp0 - 0x30u);
    t15 = rd32(sp0 - 0x34u);
    wr32(arg1, t12);
    g->ebx = rd32(sp0 - 0x28u);
    g->esi = t14;
    g->edi = t15;
    g->ebp = t13;
    g->edx = edx;
    return arg1;
L_100ceae0: ;
    COW_AT(100ceae0)
    t22 = rd32(sp0 - 0x2cu);
    t23 = rd32(sp0 - 0x30u);
    t24 = rd32(sp0 - 0x34u);
    wr32(arg1, 0u);
    g->ebx = rd32(sp0 - 0x28u);
    g->esi = t23;
    g->edi = t24;
    g->ebp = t22;
    g->edx = edx;
    return arg1;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100ce9b0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100ce9dau:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        in_ebp = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x34u;
        g->ebx = arg2;
        g->edi = arg3;
        wr32(sp0 - 0x20u, self);
        (void)sp0;
        return 1;
    }
    case 0x100ce9e5u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x34u;
        g->ebx = arg2;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100ce9f4u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x34u;
        g->ebx = arg2;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100ce9fau:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x34u;
        g->ebx = arg2;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100cea05u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x34u;
        g->ebx = arg2;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100cea0bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x34u;
        g->ebx = arg2;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100cea0eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x34u;
        g->ebx = arg2;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100cea16u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x34u;
        g->ebx = arg2;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100cea1au:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x34u;
        g->ebx = arg2;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100cea1cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x34u;
        g->ebx = arg2;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100cea36u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x34u;
        g->ebx = arg2;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100cea45u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x34u;
        g->ebx = arg2;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100cea4du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x34u;
        g->ebx = arg2;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100cea51u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x34u;
        g->ebx = arg2;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100cea53u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x34u;
        g->ebx = arg2;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100cea57u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x34u;
        g->ebx = arg2;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100cea69u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x34u;
        g->ebx = arg2;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100cea74u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x34u;
        g->ebx = arg2;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100cea85u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x34u;
        g->ebx = arg2;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100cea89u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x34u;
        g->ebx = arg2;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100ceaa2u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x34u;
        g->ebx = arg2;
        g->edi = arg3;
        wr32(sp0 - 0x38u, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x100ceaafu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x34u;
        g->ebx = arg2;
        g->edi = arg3;
        wr32(sp0 - 0x38u, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x100ceacdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x100ceae0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x38u, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100ce9b0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100ce9b0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
