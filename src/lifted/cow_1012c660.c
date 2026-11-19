/* f_0x1012c660 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1012c660(Guest* g)
{
    double d28;
    double d31;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_44;
    uint32_t loc_50;
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
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
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
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 124u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1012c673u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x50u); g->esi = rd32(sp0 - 0x50u); goto E_1012c673;
    case 0x1012c6c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_44 = rd32(sp0 - 0x44u); goto E_1012c6c6;
    case 0x1012c6cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_44 = rd32(sp0 - 0x44u); goto E_1012c6cb;
    case 0x1012c6d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_44 = rd32(sp0 - 0x44u); goto E_1012c6d9;
    case 0x1012c6e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_44 = rd32(sp0 - 0x44u); goto E_1012c6e0;
    case 0x1012c6f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_44 = rd32(sp0 - 0x44u); goto E_1012c6f8;
    case 0x1012c6fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_44 = rd32(sp0 - 0x44u); goto E_1012c6fc;
    case 0x1012c700u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_44 = rd32(sp0 - 0x44u); goto E_1012c700;
    case 0x1012c706u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_44 = rd32(sp0 - 0x44u); goto E_1012c706;
    case 0x1012c71bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_44 = rd32(sp0 - 0x44u); goto E_1012c71b;
    case 0x1012c721u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_44 = rd32(sp0 - 0x44u); goto E_1012c721;
    case 0x1012c726u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_44 = rd32(sp0 - 0x44u); goto E_1012c726;
    case 0x1012c734u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_44 = rd32(sp0 - 0x44u); goto E_1012c734;
    case 0x1012c778u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1012c778;
    case 0x1012c780u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_44 = rd32(sp0 - 0x44u); goto E_1012c780;
    case 0x1012c7bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1012c7bb;
    case 0x1012c7dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1012c7db;
    case 0x1012c7e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_50 = rd32(sp0 - 0x50u); goto E_1012c7e1;
    default: break;
    }
#endif

    COW_AT(1012c660)
    wr32(sp0 - 0x50u, in_esi);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x50u;
    t1 = cow_call_regs(g, COW_IMG(0x10087690u), in_eax, g->ecx, g->edx, 1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        ebx = in_ebx;
        ebp = in_ebp;
        edi = in_edi;
        loc_50 = in_esi;
    }
    else
    {
        ecx = t2;
        edx = t3;
    COW_AT(1012c673)
        wr32(sp0 - 0x54u, in_ebx);
        wr32(sp0 - 0x58u, in_ebp);
        wr32(sp0 - 0x5cu, in_edi);
        t4 = (uint32_t)(int16_t)(arg1 >> 0x10u) + 6u;
        wr32(sp0 - 0x44u, t4);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x5cu;
        t5 = cow_call_regs(g, COW_IMG(0x10087700u), t4, g->ecx, g->edx, 1, 0);
        t6 = g->ecx;
        t7 = g->edx;
        g->ecx = t6;
        g->edx = t7;
        t8 = cow_call_regs(g, COW_IMG(0x10087720u), t5, g->ecx, g->edx, 1, 0);
        t9 = g->ecx;
        t10 = g->edx;
        wr32(sp0 - 0x60u, t5 + t8);
        g->ecx = t9;
        g->edx = t10;
        t11 = cow_cdecl(g, COW_IMG(0x10103a50u), 1, t5 + t8);
        t12 = g->ecx;
        t13 = g->edx;
        wr32(sp0 - 0x64u, t11);
        wr32(sp0 - 0x4cu, t11);
        g->ebx = (uint32_t)(int16_t)arg2 - 0x10u;
        g->ecx = t12;
        g->edx = t13;
        g->esp = sp0 - 0x58u;
        t14 = cow_cdecl(g, COW_IMG(0x101c93c0u), 3, t11, rd32(sp0 - 0x60u), in_edi);
        t15 = g->ecx;
        t16 = g->edx;
        wr32(sp0 - 0x68u, t14);
        wr32(sp0 - 0x6cu, COW_IMG(0x1036c010u));
        wr32(sp0 - 0x70u, sp0 - 0x40u);
        g->ebx = (uint32_t)(int16_t)arg2 - 0x10u;
        g->eax = sp0 - 0x40u;
        g->ecx = t15;
        g->edx = t16;
        g->esp = sp0 - 0x5cu;
        t17 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x40u, COW_IMG(0x1036c010u), t14, rd32(sp0 - 0x64u), rd32(sp0 - 0x60u));
        t18 = g->ecx;
        t19 = g->edx;
        g->ecx = t18;
        g->edx = t19;
        t20 = cow_call_regs(g, COW_IMG(0x10087740u), t17, g->ecx, g->edx, 1, 0);
        t21 = g->ecx;
        t22 = g->edx;
        if (t20 != 0u)
        {
            eax = t20;
            ecx = t21;
            edx = t22;
            ebp = t11;
            loc_44 = rd32(sp0 - 0x44u);
        }
        else
        {
            ecx = t21;
            edx = t22;
            ebp = t11;
            loc_44 = rd32(sp0 - 0x44u);
    COW_AT(1012c6c6)
            eax = 0x3cu;
        }
    COW_AT(1012c6cb)
        if (ebp != 0u)
        {
            eax = (eax & 0xffffff00u) | ebp < eax;
            ecx = (ecx & 0xffffff00u) | ebp == 0u;
    COW_AT(1012c6e0)
            t23 = (-((uint8_t)eax != 0u) & 0xffffbfc0u) - 0x7f7f7f80u;
            edx = t23;
            ebp = rd32(sp0 - 0x4cu);
            edi = t23;
        }
        else
        {
            eax = (eax & 0xffffff00u) | ebp < eax;
            ecx = (ecx & 0xffffff00u) | ebp == 0u;
    COW_AT(1012c6d9)
            edi = 0x80606060u;
        }
    COW_AT(1012c6f8)
        if ((uint8_t)eax == 0u) goto L_1012c706;
    COW_AT(1012c6fc)
        if ((uint8_t)ecx != 0u) goto L_1012c706;
    COW_AT(1012c700)
        wr8(self + 0x1cu, rd8(self + 0x1cu) | 1u);
L_1012c71b: ;
    COW_AT(1012c71b)
        if (rd8(self + 0x1cu) & 1u)
        {
    COW_AT(1012c721)
            if (rd32(self + 0x18u) == ebp)
            {
    COW_AT(1012c734)
                g->ecx = ecx;
                g->esp = sp0 - 0x5cu;
                t26 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
                t27 = g->ecx;
                d28 = cow_take_float(g);
                t29 = rd32(self + 0x20u);
                t30 = (uint32_t)((int32_t)(t29 << 0x17u) >> 0x17u);
                wr32(sp0 - 0x48u, t30);
                d31 = fr(g, (double)(int32_t)t30 - fr(g, d28 * (double)rdf32(COW_IMG(0x1032a3e8u))));
                fpush(g, d31);
                t32 = cow_call_regs(g, COW_IMG(0x10311c6cu), t26, g->ecx, g->edx, 1, 0);
                t33 = ((t32 ^ t29) & 0x1ffu) ^ t29;
                t34 = rd32(sp0 - 0x4cu);
                wr32(self + 0x20u, t33);
                if ((int32_t)(t33 << 0x17u) >= 268435456)
                {
                    ebp = t34;
                    loc_44 = rd32(sp0 - 0x44u);
                }
                else
                {
                    eax = t33;
                    ebp = t34;
    COW_AT(1012c778)
                    t35 = (((eax & 0xffff00ffu) | (eax >> 8u & 0xfeu) << 8u) & 0xffffff00u) | (uint8_t)(eax | 0xffu);
                    wr32(self + 0x20u, t35);
                    loc_44 = rd32(sp0 - 0x44u);
                }
            }
            else
            {
    COW_AT(1012c726)
                t25 = (((rd32(self + 0x20u) & 0xffff00ffu) | (rd32(self + 0x20u) >> 8u & 0xfeu) << 8u) & 0xffffff00u) | (uint8_t)(rd32(self + 0x20u) | 0xffu);
                wr32(self + 0x20u, t25);
            }
        }
    COW_AT(1012c780)
        wr32(sp0 - 0x60u, 0x3f800000u);
        wr32(sp0 - 0x64u, 0x3f800000u);
        wr32(sp0 - 0x68u, 1u);
        t36 = (uint32_t)((int32_t)(rd32(self + 0x20u) << 0x17u) >> 0x17u) << 0x18u ^ (edi & 0xffffffu);
        wr32(sp0 - 0x6cu, t36);
        wr32(sp0 - 0x70u, sp0 - 0x40u);
        wr32(sp0 - 0x74u, loc_44);
        t37 = (uint32_t)(int16_t)arg2 - 0x10u;
        wr32(sp0 - 0x78u, t37);
        g->esp = sp0 - 0x5cu;
        cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), loc_44, 7, t37, loc_44, sp0 - 0x40u, t36, 1u, 0x3f800000u, 0x3f800000u);
        if (rd32(self + 0x28u) != 0u)
        {
            ecx = rd32(self + 0x28u);
    COW_AT(1012c7bb)
            wr32(sp0 - 0x60u, 0u);
            wr32(sp0 - 0x64u, 0u);
            wr32(sp0 - 0x68u, 0x80808080u);
            t38 = (uint32_t)(int16_t)(arg1 >> 0x10u) + 4u;
            wr32(sp0 - 0x6cu, t38);
            t39 = (uint32_t)(int16_t)arg1 + 4u;
            wr32(sp0 - 0x70u, t39);
            g->esp = sp0 - 0x5cu;
            cow_thiscall(g, COW_IMG(0x1011fb60u), ecx, 5, t39, t38, 0x80808080u, 0u, 0u);
        }
    COW_AT(1012c7db)
        wr32(self + 0x18u, ebp);
        ebx = rd32(sp0 - 0x54u);
        ebp = rd32(sp0 - 0x58u);
        edi = rd32(sp0 - 0x5cu);
        loc_50 = rd32(sp0 - 0x50u);
    }
    COW_AT(1012c7e1)
    g->ebx = ebx;
    g->esi = loc_50;
    g->edi = edi;
    g->ebp = ebp;
    return;
L_1012c706: ;
    COW_AT(1012c706)
    wr8(self + 0x1cu, rd8(self + 0x1cu) & 0xfeu);
    t24 = (rd32(self + 0x20u) & 0xfffffe00u) | (rd32(self + 0x20u) & 0x80u) | 0x80u;
    wr32(self + 0x20u, t24);
    eax = t24;
    goto L_1012c71b;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1012c660(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1012c673u:
    {
        uint32_t eax;
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
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1012c6c6u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x5cu;
        g->ebx = (uint32_t)(int16_t)arg2 - 0x10u;
        wr32(sp0 - 0x70u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x1012c6cbu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x5cu;
        g->ebx = (uint32_t)(int16_t)arg2 - 0x10u;
        wr32(sp0 - 0x70u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x1012c6d9u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x5cu;
        g->ebx = (uint32_t)(int16_t)arg2 - 0x10u;
        wr32(sp0 - 0x70u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x1012c6e0u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x5cu;
        g->ebx = (uint32_t)(int16_t)arg2 - 0x10u;
        wr32(sp0 - 0x70u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x1012c6f8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x5cu;
        g->ebx = (uint32_t)(int16_t)arg2 - 0x10u;
        wr32(sp0 - 0x70u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x1012c6fcu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x5cu;
        g->ebx = (uint32_t)(int16_t)arg2 - 0x10u;
        wr32(sp0 - 0x70u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x1012c700u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x5cu;
        g->ebx = (uint32_t)(int16_t)arg2 - 0x10u;
        wr32(sp0 - 0x70u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x1012c706u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x5cu;
        g->ebx = (uint32_t)(int16_t)arg2 - 0x10u;
        wr32(sp0 - 0x70u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x1012c71bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x5cu;
        g->ebx = (uint32_t)(int16_t)arg2 - 0x10u;
        wr32(sp0 - 0x70u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x1012c721u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x5cu;
        g->ebx = (uint32_t)(int16_t)arg2 - 0x10u;
        wr32(sp0 - 0x70u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x1012c726u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x5cu;
        g->ebx = (uint32_t)(int16_t)arg2 - 0x10u;
        wr32(sp0 - 0x70u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x1012c734u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x5cu;
        g->ebx = (uint32_t)(int16_t)arg2 - 0x10u;
        wr32(sp0 - 0x70u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x1012c778u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        g->ebx = (uint32_t)(int16_t)arg2 - 0x10u;
        wr32(sp0 - 0x70u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x1012c780u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x5cu;
        g->ebx = (uint32_t)(int16_t)arg2 - 0x10u;
        wr32(sp0 - 0x70u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x1012c7bbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x70u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x1012c7dbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1012c7e1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_50;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_50 = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1012c660(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1012c660(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
