/* f_0x1025f1b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1025f1b0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
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
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
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
    cow_frame(g, sp0, 44u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1025f1ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_28 = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); in_ebp = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 0x1cu); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_1025f1dd;
    case 0x1025f1e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; loc_28 = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); in_ebp = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 0x1cu); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_1025f1e5;
    case 0x1025f1f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_28 = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); in_ebp = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 0x1cu); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_1025f1f5;
    case 0x1025f209u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_28 = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); in_ebp = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 0x1cu); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_1025f209;
    case 0x1025f210u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_1025f210;
    case 0x1025f220u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_1025f220;
    case 0x1025f22fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi - 0x7cu; goto E_1025f22f;
    case 0x1025f232u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; goto E_1025f232;
    case 0x1025f237u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_1025f237;
    case 0x1025f24eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_1025f24e;
    case 0x1025f25fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_28 = rd32(sp0 - 0x28u); goto E_1025f25f;
    case 0x1025f262u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_1025f262;
    case 0x1025f271u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_1025f271;
    case 0x1025f27bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_1025f27b;
    case 0x1025f27du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_1025f27d;
    case 0x1025f284u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_1025f284;
    case 0x1025f288u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_1025f288;
    case 0x1025f290u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_1025f290;
    case 0x1025f297u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_1025f297;
    case 0x1025f2a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_1025f2a7;
    case 0x1025f2b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi - 0x7cu; goto E_1025f2b6;
    case 0x1025f2b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_1025f2b9;
    case 0x1025f2c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_1025f2c6;
    case 0x1025f2d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_1025f2d9;
    case 0x1025f2e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_1025f2e0;
    case 0x1025f2e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_1025f2e7;
    case 0x1025f2eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi - 0x94u; goto E_1025f2ee;
    case 0x1025f2f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; goto E_1025f2f1;
    case 0x1025f2f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; loc_28 = rd32(sp0 - 0x28u); goto E_1025f2f6;
    case 0x1025f2f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; goto E_1025f2f8;
    case 0x1025f2fau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_1025f2fa;
    default: break;
    }
#endif

    COW_AT(1025f1b0)
    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x103276e0u));
    wr32(sp0 - 0xcu, rd32(g->fs_base));
    wr32(g->fs_base, sp0 - 0xcu);
    wr32(sp0 - 0x18u, in_ebx);
    wr32(sp0 - 0x1cu, in_ebp);
    wr32(sp0 - 0x20u, in_esi);
    wr32(sp0 - 0x24u, in_edi);
    t1 = rd32(sp0 + 4u);
    wr32(sp0 - 0x28u, t1);
    g->eax = rd32(self);
    g->edx = in_edx;
    t2 = rd32(self);
    g->esp = sp0 - 0x24u;
    t3 = cow_thiscall(g, rd32(t2 + 0x98u), self, 1, t1);
    t4 = g->edx;
    eax = t3;
    edx = t4;
    COW_AT(1025f1dd)
    if ((int32_t)eax >= 0)
    {
    COW_AT(1025f1f5)
        if (rd32(self + 0x14u) != 1u)
        {
            eax = rd32(self + 0x14u);
            ebx = rd32(COW_IMG(0x1032918cu));
            ebp = rd32(COW_IMG(0x10329188u));
            loc_18 = in_ebx;
            loc_1c = in_ebp;
            loc_20 = in_esi;
            loc_24 = in_edi;
            goto L_1025f27d;
        }
        eax = rd32(self + 0x14u);
        ebx = rd32(COW_IMG(0x1032918cu));
        ebp = rd32(COW_IMG(0x10329188u));
    COW_AT(1025f209)
        g->eax = eax;
        g->edx = rd32(self);
        t5 = rd32(self);
        g->esp = sp0 - 0x24u;
        t6 = cow_thiscall(g, rd32(t5 + 0x50u), self, 0);
        t7 = g->ecx;
        t8 = g->edx;
        eax = t6;
        ecx = t7;
        edx = t8;
    COW_AT(1025f210)
        wr32(self + 0xb4u, 0u);
        wr32(sp0 - 0x28u, self + 0x7cu);
        wr32(sp0 - 0x14u, self + 0x7cu);
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        cow_thiscall(g, ebx, ecx, 1, self + 0x7cu);
        t9 = g->ecx;
        t10 = g->edx;
        ecx = t9;
        edx = t10;
    COW_AT(1025f220)
        wr32(sp0 - 4u, 0u);
        if (rd32(self + 0x14u) != 0u)
        {
            eax = rd32(self + 0x14u);
            goto L_1025f237;
        }
        eax = rd32(self + 0x14u);
    COW_AT(1025f22f)
        wr32(sp0 - 0x28u, self + 0x7cu);
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        cow_thiscall(g, ebp, ecx, 1, self + 0x7cu);
        t11 = g->edx;
        edx = t11;
    COW_AT(1025f232)
L_1025f2f8: ;
    COW_AT(1025f2f8)
        eax = 0u;
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_24 = rd32(sp0 - 0x24u);
    }
    else
    {
        ecx = eax;
    COW_AT(1025f1e5)
        eax = -(eax + 0x7ffbfdd5u != 0u) & ecx;
        loc_18 = in_ebx;
        loc_1c = in_ebp;
        loc_20 = in_esi;
        loc_24 = in_edi;
    }
    COW_AT(1025f2fa)
    t49 = rd32(sp0 - 0xcu);
    wr32(g->fs_base, t49);
    g->ebx = loc_18;
    g->esi = loc_20;
    g->edi = loc_24;
    g->ebp = loc_1c;
    g->edx = edx;
    return eax;
L_1025f237: ;
    COW_AT(1025f237)
    wr32(self + 0xb4u, 1u);
    wr32(sp0 - 0x28u, self + 0x94u);
    wr32(sp0 - 0x10u, self + 0x94u);
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    cow_thiscall(g, ebx, ecx, 1, self + 0x94u);
    t12 = g->edx;
    edx = t12;
    COW_AT(1025f24e)
    t13 = rd32(sp0 + 4u);
    wr32(sp0 - 0x28u, t13);
    t14 = rd32(self);
    wr8(sp0 - 4u, 1u);
    g->eax = t14;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t15 = cow_thiscall(g, rd32(t14 + 0x34u), self, 1, t13);
    t16 = g->ecx;
    t17 = g->edx;
    eax = t15;
    ecx = t16;
    edx = t17;
    COW_AT(1025f25f)
    wr32(sp0 - 0x28u, self + 0x94u);
    g->eax = eax;
    g->esp = sp0 - 0x24u;
    t18 = cow_thiscall(g, ebp, ecx, 1, self + 0x94u);
    t19 = g->ecx;
    eax = t18;
    ecx = t19;
    COW_AT(1025f262)
    wr32(sp0 - 4u, 0xffffffffu);
    t20 = rd32(sp0 - 0x14u);
    wr32(sp0 - 0x28u, t20);
    g->edx = t20;
    g->esp = sp0 - 0x24u;
    cow_thiscall(g, ebp, ecx, 1, t20);
    t21 = g->ecx;
    t22 = g->edx;
    ecx = t21;
    edx = t22;
    COW_AT(1025f271)
    t23 = rd32(self + 0x5cu);
    wr32(sp0 - 0x28u, t23);
    g->eax = t23;
    g->esp = sp0 - 0x24u;
    t24 = cow_stdcall(g, rd32(COW_IMG(0x103291c4u)), 1, t23);   /* kernel32.dll!SetEvent */
    eax = t24;
    COW_AT(1025f27b)
    loc_18 = rd32(sp0 - 0x18u);
    loc_1c = rd32(sp0 - 0x1cu);
    loc_20 = rd32(sp0 - 0x20u);
    loc_24 = rd32(sp0 - 0x24u);
L_1025f27d: ;
    COW_AT(1025f27d)
    g->eax = eax;
    g->edx = rd32(self);
    t25 = rd32(self);
    g->esp = sp0 - 0x24u;
    t26 = cow_thiscall(g, rd32(t25 + 0x2cu), self, 0);
    t27 = g->edx;
    eax = t26;
    edx = t27;
    COW_AT(1025f284)
    if ((int32_t)eax >= 0)
    {
    COW_AT(1025f290)
        g->eax = rd32(self);
        g->edx = edx;
        t28 = rd32(self);
        g->esp = sp0 - 0x24u;
        t29 = cow_thiscall(g, rd32(t28 + 0x50u), self, 0);
        t30 = g->ecx;
        t31 = g->edx;
        eax = t29;
        ecx = t30;
        edx = t31;
    COW_AT(1025f297)
        wr32(self + 0xb4u, 0u);
        wr32(sp0 - 0x28u, self + 0x7cu);
        wr32(sp0 + 4u, self + 0x7cu);
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        cow_thiscall(g, ebx, ecx, 1, self + 0x7cu);
        t32 = g->ecx;
        t33 = g->edx;
        ecx = t32;
        edx = t33;
    COW_AT(1025f2a7)
        wr32(sp0 - 4u, 2u);
        if (rd32(self + 0x14u) != 0u)
        {
            eax = rd32(self + 0x14u);
    COW_AT(1025f2b9)
            wr32(sp0 - 0x28u, self + 0x94u);
            wr32(sp0 - 0x10u, self + 0x94u);
            g->esp = sp0 - 0x24u;
            cow_thiscall(g, ebx, ecx, 1, self + 0x94u);
    COW_AT(1025f2c6)
            t34 = rd32(self + 0x6cu);
            wr32(sp0 - 0x28u, t34);
            t35 = rd32(self);
            wr8(sp0 - 4u, 3u);
            g->eax = t34;
            g->esp = sp0 - 0x24u;
            t36 = cow_thiscall(g, rd32(t35 + 0xa8u), self, 1, t34);
            eax = t36;
    COW_AT(1025f2d9)
            g->edx = rd32(self);
            t37 = rd32(self);
            g->esp = sp0 - 0x24u;
            cow_thiscall(g, rd32(t37 + 0x70u), self, 0);
            t38 = g->edx;
            edx = t38;
    COW_AT(1025f2e0)
            g->eax = rd32(self);
            t39 = rd32(self);
            g->esp = sp0 - 0x24u;
            t40 = cow_thiscall(g, rd32(t39 + 0x60u), self, 0);
            eax = t40;
    COW_AT(1025f2e7)
            g->eax = eax;
            g->edx = rd32(self);
            t41 = rd32(self);
            g->esp = sp0 - 0x24u;
            t42 = cow_thiscall(g, rd32(t41 + 0x6cu), self, 0);
            t43 = g->ecx;
            t44 = g->edx;
            eax = t42;
            ecx = t43;
            edx = t44;
    COW_AT(1025f2ee)
            wr32(sp0 - 0x28u, self + 0x94u);
            g->edx = edx;
            g->esp = sp0 - 0x24u;
            cow_thiscall(g, ebp, ecx, 1, self + 0x94u);
            t45 = g->ecx;
            t46 = g->edx;
            ecx = t45;
            edx = t46;
    COW_AT(1025f2f1)
            t47 = rd32(sp0 + 4u);
            wr32(sp0 - 0x28u, t47);
            eax = t47;
            loc_28 = t47;
        }
        else
        {
            eax = rd32(self + 0x14u);
    COW_AT(1025f2b6)
            wr32(sp0 - 0x28u, self + 0x7cu);
            loc_28 = self + 0x7cu;
        }
    COW_AT(1025f2f6)
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        cow_thiscall(g, ebp, ecx, 1, loc_28);
        t48 = g->edx;
        edx = t48;
    }
    else
    {
    COW_AT(1025f288)
        wr32(self + 0xb4u, 0u);
    }
    goto L_1025f2f8;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1025f1b0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1025f1ddu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_28 = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        in_ebp = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1025f1e5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        loc_28 = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        in_ebp = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1025f1f5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_28 = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        in_ebp = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1025f209u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_28 = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        in_ebp = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1025f210u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x24u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1025f220u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x24u;
        g->edi = self + 0x7cu;
        (void)sp0;
        return 1;
    }
    case 0x1025f22fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi - 0x7cu;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1025f232u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1025f237u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1025f24eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x24u;
        g->edi = self + 0x94u;
        (void)sp0;
        return 1;
    }
    case 0x1025f25fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x24u;
        g->edi = self + 0x94u;
        (void)sp0;
        return 1;
    }
    case 0x1025f262u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1025f271u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1025f27bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1025f27du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1025f284u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x24u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1025f288u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x24u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1025f290u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x24u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1025f297u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x24u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1025f2a7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x24u;
        g->edi = self + 0x7cu;
        (void)sp0;
        return 1;
    }
    case 0x1025f2b6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi - 0x7cu;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1025f2b9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 4u, 2u);
        (void)sp0;
        return 1;
    }
    case 0x1025f2c6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x24u;
        g->edi = self + 0x94u;
        (void)sp0;
        return 1;
    }
    case 0x1025f2d9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x24u;
        g->edi = self + 0x94u;
        (void)sp0;
        return 1;
    }
    case 0x1025f2e0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x24u;
        g->edi = self + 0x94u;
        (void)sp0;
        return 1;
    }
    case 0x1025f2e7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x24u;
        g->edi = self + 0x94u;
        (void)sp0;
        return 1;
    }
    case 0x1025f2eeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi - 0x94u;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1025f2f1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1025f2f6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1025f2f8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1025f2fau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1025f1b0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1025f1b0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
