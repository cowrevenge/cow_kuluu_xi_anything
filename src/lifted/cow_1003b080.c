/* f_0x1003b080 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1003b080(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_4;
    uint32_t loc_8;
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
    cow_frame(g, sp0, 60u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1003b0a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_1003b0a0;
    case 0x1003b0aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_1003b0ae;
    case 0x1003b0b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_1003b0b4;
    case 0x1003b0c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_1003b0c6;
    case 0x1003b0d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_1003b0d5;
    case 0x1003b0d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_1003b0d9;
    case 0x1003b0f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1003b0f9;
    case 0x1003b111u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1003b111;
    case 0x1003b12cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1003b12c;
    case 0x1003b134u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1003b134;
    case 0x1003b143u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1003b143;
    case 0x1003b151u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1003b151;
    case 0x1003b162u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1003b162;
    case 0x1003b180u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_1003b180;
    case 0x1003b193u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_1003b193;
    default: break;
    }
#endif

    COW_AT(1003b080)
    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_ebp);
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, in_edi);
    wr32(sp0 - 0x24u, 0x20u);
    wr32(self, COW_IMG(0x1032aac4u));
    g->edx = in_edx;
    g->esp = sp0 - 0x20u;
    t1 = cow_cdecl(g, COW_IMG(0x1002c890u), 1, 0x20u);
    t2 = g->edx;
    if (t1 == 0u)
    {
        edx = t2;
    COW_AT(1003b0ae)
        wr32(COW_IMG(0x1047b978u), 0u);
    }
    else
    {
        eax = t1;
        edx = t2;
    COW_AT(1003b0a0)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        t3 = cow_thiscall(g, COW_IMG(0x1003b420u), eax, 0);
        t4 = g->edx;
        wr32(COW_IMG(0x1047b978u), t3);
        edx = t4;
    }
    COW_AT(1003b0b4)
    wr32(self + 4u, 0u);
    wr32(self + 8u, 0u);
    if (rd32(COW_IMG(0x10351cd4u)) == 0u)
    {
        loc_14 = in_ebx;
        loc_18 = in_ebp;
        loc_1c = in_esi;
        loc_20 = in_edi;
    }
    else
    {
    COW_AT(1003b0c6)
        wr32(sp0 - 4u, COW_IMG(0x10351cd4u));
        esi = COW_IMG(0x10351cd4u);
        edi = rd32(COW_IMG(0x103290f8u));
        loc_14 = in_ebx;
        loc_18 = in_ebp;
        loc_1c = in_esi;
        loc_20 = in_edi;
        loc_4 = COW_IMG(0x10351cd4u);
L_1003b0d5: ;
    COW_AT(1003b0d5)
        wr32(sp0 - 8u, 0u);
        loc_8 = 0u;
L_1003b0d9: ;
    COW_AT(1003b0d9)
        wr32(sp0 - 0x24u, 1u);
        wr32(sp0 - 0x28u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, 0u);
        wr32(sp0 - 0x30u, 0u);
        wr32(sp0 - 0x34u, 0x208u);
        wr32(sp0 - 0x38u, rd32(esi));
        g->eax = sp0 - 0x10u;
        g->esp = sp0 - 0x20u;
        t5 = cow_thiscall(g, COW_IMG(0x1003b210u), self, 6, rd32(esi), 0x208u, 0u, 0u, sp0 - 0x10u, 1u);
        if ((int32_t)t5 < 0)
        {
            loc_14 = rd32(sp0 - 0x14u);
            loc_18 = rd32(sp0 - 0x18u);
            loc_1c = rd32(sp0 - 0x1cu);
            loc_20 = rd32(sp0 - 0x20u);
            goto L_1003b193;
        }
    COW_AT(1003b0f9)
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x28u, sp0 - 0xcu);
        wr32(sp0 - 0x2cu, rd32(esi));
        wr32(sp0 - 0x30u, 0u);
        t6 = rd32(sp0 - 0x10u);
        wr32(sp0 - 0x34u, t6);
        g->eax = t6;
        g->edx = rd32(rd32(sp0 - 0x10u));
        t7 = rd32(esi);
        t8 = rd32(rd32(sp0 - 0x10u));
        g->esp = sp0 - 0x20u;
        t9 = cow_thiscall(g, rd32(t8 + 0x2cu), t7, 5, t6, 0u, t7, sp0 - 0xcu, 0u);
        t10 = g->ecx;
        t11 = g->edx;
        if (t9 == 0u)
        {
            edx = t11;
            goto L_1003b12c;
        }
        eax = t9;
        ecx = t10;
        edx = t11;
L_1003b111: ;
    COW_AT(1003b111)
        wr32(sp0 - 0x24u, 0u);
        g->esp = sp0 - 0x20u;
        cow_thiscall(g, edi, ecx, 1, 0u);
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x28u, sp0 - 0xcu);
        wr32(sp0 - 0x2cu, rd32(esi));
        wr32(sp0 - 0x30u, 0u);
        t12 = rd32(sp0 - 0x10u);
        wr32(sp0 - 0x34u, t12);
        g->eax = t12;
        g->edx = rd32(rd32(sp0 - 0x10u));
        t13 = rd32(esi);
        t14 = rd32(rd32(sp0 - 0x10u));
        t15 = cow_thiscall(g, rd32(t14 + 0x2cu), t13, 5, t12, 0u, t13, sp0 - 0xcu, 0u);
        t16 = g->ecx;
        t17 = g->edx;
        if (t15 != 0u)
        {
            eax = t15;
            ecx = t16;
            edx = t17;
            goto L_1003b111;
        }
        edx = t17;
L_1003b12c: ;
    COW_AT(1003b12c)
        if ((int32_t)rd32(esi) <= 0) goto L_1003b143;
        eax = 0u;
L_1003b134: ;
    COW_AT(1003b134)
        t18 = rd32(sp0 - 0xcu);
        wr8(eax + t18, 0u);
        if ((int32_t)(eax + 1u) < (int32_t)rd32(esi))
        {
            eax = eax + 1u;
            goto L_1003b134;
        }
        edx = t18;
L_1003b143: ;
    COW_AT(1003b143)
        t19 = rd32(sp0 - 0x10u);
        wr32(sp0 - 0x24u, t19);
        g->eax = t19;
        g->edx = edx;
        t20 = rd32(t19);
        g->esp = sp0 - 0x20u;
        t21 = cow_thiscall(g, rd32(t20 + 0x30u), t20, 1, t19);
        t22 = g->ecx;
        t23 = g->edx;
        if (t21 == 0u)
        {
            edx = t23;
            goto L_1003b162;
        }
        eax = t21;
        ecx = t22;
        edx = t23;
L_1003b151: ;
    COW_AT(1003b151)
        wr32(sp0 - 0x24u, 0u);
        g->esp = sp0 - 0x20u;
        cow_thiscall(g, edi, ecx, 1, 0u);
        t24 = g->ecx;
        t25 = rd32(sp0 - 0x10u);
        wr32(sp0 - 0x24u, t25);
        g->eax = t25;
        g->edx = rd32(t25);
        t26 = rd32(t25);
        t27 = cow_thiscall(g, rd32(t26 + 0x30u), t24, 1, t25);
        t28 = g->ecx;
        t29 = g->edx;
        if (t27 != 0u)
        {
            eax = t27;
            ecx = t28;
            edx = t29;
            goto L_1003b151;
        }
        edx = t29;
L_1003b162: ;
    COW_AT(1003b162)
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        cow_stdcall(g, COW_IMG(0x1003b3c0u), 1, sp0 - 0x10u);
        t30 = g->edx;
        t31 = rd32(sp0 - 8u) + 1u;
        t32 = rd32(sp0 - 8u);
        wr32(sp0 - 8u, t31);
        if ((int32_t)(t32 + 1u) < 50)
        {
            edx = t30;
            loc_14 = rd32(sp0 - 0x14u);
            loc_18 = rd32(sp0 - 0x18u);
            loc_1c = rd32(sp0 - 0x1cu);
            loc_20 = rd32(sp0 - 0x20u);
            loc_4 = rd32(sp0 - 4u);
            loc_8 = t31;
            goto L_1003b0d9;
        }
        edx = t30;
    COW_AT(1003b180)
        t33 = rd32(sp0 - 4u) + 4u;
        wr32(sp0 - 4u, t33);
        if (rd32(t33) != 0u)
        {
            esi = t33;
            loc_14 = rd32(sp0 - 0x14u);
            loc_18 = rd32(sp0 - 0x18u);
            loc_1c = rd32(sp0 - 0x1cu);
            loc_20 = rd32(sp0 - 0x20u);
            loc_4 = t33;
            goto L_1003b0d5;
        }
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_20 = rd32(sp0 - 0x20u);
    }
L_1003b193: ;
    COW_AT(1003b193)
    g->ebx = loc_14;
    g->esi = loc_1c;
    g->edi = loc_20;
    g->ebp = loc_18;
    return self;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1003b080(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1003b0a0u:
    {
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
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003b0aeu:
    {
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
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003b0b4u:
    {
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
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003b0c6u:
    {
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
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003b0d5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003b0d9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003b0f9u:
    {
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
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        wr32(sp0 - 0x28u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1003b111u:
    {
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
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        wr32(sp0 - 0x28u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1003b12cu:
    {
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
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        wr32(sp0 - 0x28u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1003b134u:
    {
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
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        wr32(sp0 - 0x28u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1003b143u:
    {
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
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        wr32(sp0 - 0x28u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1003b151u:
    {
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
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        wr32(sp0 - 0x28u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1003b162u:
    {
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
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        wr32(sp0 - 0x28u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1003b180u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        wr32(sp0 - 0x28u, sp0 - 0xcu);
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1003b193u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1003b080(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1003b080(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
