/* f_0x10246600 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10246600(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_44;
    uint32_t loc_48;
    uint32_t loc_4c;
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
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 112u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10246617u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x4cu); in_ebp = rd32(sp0 - 0x48u); in_ebx = rd32(sp0 - 0x44u); g->ebp = rd32(sp0 - 0x48u); g->ebx = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x4cu); goto E_10246617;
    case 0x1024663cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; loc_50 = rd32(sp0 - 0x50u); goto E_1024663c;
    case 0x10246649u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; loc_50 = rd32(sp0 - 0x50u); goto E_10246649;
    case 0x10246660u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; loc_50 = rd32(sp0 - 0x50u); goto E_10246660;
    case 0x10246663u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_50 = rd32(sp0 - 0x50u); goto E_10246663;
    case 0x1024666bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_50 = rd32(sp0 - 0x50u); goto E_1024666b;
    case 0x1024667fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_50 = rd32(sp0 - 0x50u); goto E_1024667f;
    case 0x10246691u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10246691;
    case 0x1024669du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1024669d;
    case 0x1024669fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1024669f;
    case 0x102466a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102466a7;
    case 0x102466b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102466b1;
    case 0x102466b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102466b6;
    case 0x102466dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_50 = rd32(sp0 - 0x50u); goto E_102466df;
    case 0x102466eau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102466ea;
    case 0x102466f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102466f2;
    case 0x102466fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102466fb;
    case 0x10246701u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); goto E_10246701;
    default: break;
    }
#endif

    COW_AT(10246600)
    wr32(sp0 - 0x44u, in_ebx);
    wr32(sp0 - 0x48u, in_ebp);
    wr32(sp0 - 0x4cu, in_esi);
    if (rd8(rd32(COW_IMG(0x10669108u)) + 4u) == 0u)
    {
        edi = in_edi;
        loc_44 = in_ebx;
        loc_48 = in_ebp;
        loc_4c = in_esi;
    }
    else
    {
        eax = rd32(COW_IMG(0x10669108u));
        ebx = rd32(COW_IMG(0x10669108u)) + 4u;
    COW_AT(10246617)
        wr32(sp0 - 0x50u, 0x104u);
        t1 = rd32(sp0 + 4u) & 0x3ffu;
        wr32(sp0 + 4u, t1);
        g->eax = eax;
        g->esp = sp0 - 0x44u;
        t2 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 3, 0x104u, in_esi, in_ebp);
        t3 = g->ecx;
        t4 = g->edx;
        if (t2 == 0u)
        {
            edi = in_edi;
            loc_44 = in_ebx;
            loc_48 = in_ebp;
            loc_4c = in_esi;
        }
        else
        {
            ecx = t3;
            edx = t4;
            ebp = t2;
    COW_AT(1024663c)
            t5 = rd32(sp0 + 8u) & 0x7fu;
            wr32(sp0 + 8u, t5);
            eax = t5;
            esi = 0u;
L_10246649: ;
    COW_AT(10246649)
            wr32(sp0 - 0x50u, 0x104u);
            g->eax = eax;
            g->esp = sp0 - 0x44u;
            t6 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x104u, rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u));
            t7 = g->ecx;
            t8 = g->edx;
            wr32(esi * 4u + sp0 - 0x40u, t6);
            if ((int32_t)(esi + 1u) < 16)
            {
                eax = t6;
                ecx = t7;
                edx = t8;
                esi = esi + 1u;
                goto L_10246649;
            }
            eax = t6;
            ecx = t7;
            edx = t8;
    COW_AT(10246660)
            wr32(sp0 - 0x50u, in_edi);
            edi = 0u;
            loc_50 = in_edi;
L_10246663: ;
    COW_AT(10246663)
            if (rd32(edi * 4u + sp0 - 0x40u) == 0u)
            {
                esi = rd32(edi * 4u + sp0 - 0x40u);
            }
            else
            {
                esi = rd32(edi * 4u + sp0 - 0x40u);
    COW_AT(1024666b)
                t9 = rd32(sp0 + 4u);
                wr32(sp0 - 0x54u, t9);
                wr32(sp0 - 0x58u, ebx);
                wr32(sp0 - 0x5cu, COW_IMG(0x103888dcu));
                wr32(sp0 - 0x60u, esi);
                g->ebx = ebx;
                g->eax = eax;
                g->ecx = t9;
                g->edx = edx;
                g->esp = sp0 - 0x4cu;
                t10 = cow_cdecl(g, COW_IMG(0x10312031u), 5, esi, COW_IMG(0x103888dcu), ebx, t9, loc_50);
                t11 = g->ecx;
                t12 = g->edx;
                eax = t10;
                ecx = t11;
                edx = t12;
                loc_50 = rd32(sp0 - 0x50u);
            }
    COW_AT(1024667f)
            wr32(sp0 - 0x54u, COW_IMG(0x1034f2d0u));
            wr32(sp0 - 0x58u, esi);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x44u;
            t13 = cow_cdecl(g, COW_IMG(0x1031201eu), 5, esi, COW_IMG(0x1034f2d0u), loc_50, rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u));
            t14 = g->ecx;
            t15 = g->edx;
            if (t13 != 0u)
            {
                eax = t13;
                edx = t15;
                goto L_1024669f;
            }
            eax = t13;
            ecx = t14;
            edx = t15;
    COW_AT(10246691)
            if ((int32_t)(edi + 1u) < 16)
            {
                ebx = ebx + 0x108u;
                edi = edi + 1u;
                loc_50 = rd32(sp0 - 0x50u);
                goto L_10246663;
            }
    COW_AT(1024669d)
L_102466b1: ;
    COW_AT(102466b1)
            if (eax == 0u)
            {
                edi = rd32(sp0 - 0x50u);
            }
            else
            {
                edi = rd32(sp0 - 0x50u);
    COW_AT(102466b6)
                wr32(sp0 - 0x50u, eax);
                g->edi = edi;
                g->esp = sp0 - 0x44u;
                cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, edx, 1, 3, eax, rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u));
                wr32(sp0 - 0x50u, 0u);
                wr32(sp0 - 0x54u, 0u);
                wr32(sp0 - 0x58u, 0u);
                wr32(sp0 - 0x5cu, 0u);
                wr32(sp0 - 0x60u, arg3);
                t17 = rd32(sp0 + 8u);
                wr32(sp0 - 0x64u, t17);
                wr32(sp0 - 0x68u, ebp);
                wr32(sp0 - 0x6cu, 7u);
                g->eax = t17;
                g->ecx = rd32(COW_IMG(0x106690b0u));
                g->edx = arg3;
                t18 = rd32(COW_IMG(0x106690b0u));
                g->esp = sp0 - 0x4cu;
                t19 = cow_stdcall(g, COW_IMG(0x1024c080u), 8, 7u, ebp, t17, arg3, 0u, 0u, 0u, 0u);
                t20 = g->ecx;
                t21 = g->edx;
                eax = t19;
                ecx = t20;
                edx = t21;
            }
    COW_AT(102466df)
            wr32(sp0 - 0x50u, ebp);
            g->esp = sp0 - 0x4cu;
            cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, ebp);
            t22 = g->ecx;
            t23 = g->edx;
            ecx = t22;
            edx = t23;
            esi = 0u;
L_102466ea: ;
    COW_AT(102466ea)
            if (rd32(esi * 4u + sp0 - 0x40u) != 0u)
            {
                eax = rd32(esi * 4u + sp0 - 0x40u);
    COW_AT(102466f2)
                wr32(sp0 - 0x50u, eax);
                g->esp = sp0 - 0x4cu;
                cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
                t24 = g->ecx;
                t25 = g->edx;
                ecx = t24;
                edx = t25;
            }
    COW_AT(102466fb)
            if ((int32_t)(esi + 1u) < 16)
            {
                esi = esi + 1u;
                goto L_102466ea;
            }
            loc_44 = rd32(sp0 - 0x44u);
            loc_48 = rd32(sp0 - 0x48u);
            loc_4c = rd32(sp0 - 0x4cu);
        }
    }
    COW_AT(10246701)
    g->ebx = loc_44;
    g->esi = loc_4c;
    g->edi = edi;
    g->ebp = loc_48;
    return rd32(sp0 + 4u);
L_1024669f: ;
    COW_AT(1024669f)
    ecx = rd32(edi * 4u + sp0 - 0x40u);
    esi = ebp - rd32(edi * 4u + sp0 - 0x40u);
L_102466a7: ;
    COW_AT(102466a7)
    t16 = rd8(ecx);
    wr8(ecx + esi, (uint8_t)t16);
    if ((uint8_t)t16 != 0u)
    {
        ecx = ecx + 1u;
        edx = (edx & 0xffffff00u) | t16;
        goto L_102466a7;
    }
    ecx = ecx + 1u;
    edx = (edx & 0xffffff00u) | t16;
    goto L_102466b1;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10246600(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10246617u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x4cu);
        in_ebp = rd32(sp0 - 0x48u);
        in_ebx = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x1024663cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t loc_50;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        loc_50 = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x10246649u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t loc_50;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        loc_50 = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x10246660u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t loc_50;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        loc_50 = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x10246663u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_50;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_50 = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1024666bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_50;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_50 = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1024667fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_50;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_50 = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x10246691u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1024669du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1024669fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102466a7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102466b1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102466b6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x102466dfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_50;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_50 = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x102466eau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x102466f2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x102466fbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x10246701u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10246600(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10246600(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
