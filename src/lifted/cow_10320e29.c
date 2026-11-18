/* f_0x10320e29 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10320e29(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_100c;
    uint32_t loc_1010;
    uint32_t loc_1014;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t sf;
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
    cow_frame(g, sp0, 4140u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10320e56u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; sf = g->sf; loc_1014 = rd32(sp0 - 0x1014u); in_esi = rd32(sp0 - 0x1010u); in_ebx = rd32(sp0 - 0x100cu); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x100cu); g->esi = rd32(sp0 - 0x1010u); goto E_10320e56;
    case 0x10320e6cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; sf = g->sf; loc_1014 = rd32(sp0 - 0x1014u); goto E_10320e6c;
    case 0x10320e76u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; sf = g->sf; in_edi = rd32(sp0 - 0x1014u); g->edi = rd32(sp0 - 0x1014u); goto E_10320e76;
    case 0x10320e9cu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; sf = g->sf; goto E_10320e9c;
    case 0x10320ea2u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; sf = g->sf; goto E_10320ea2;
    case 0x10320ea4u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; sf = g->sf; goto E_10320ea4;
    case 0x10320ebcu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; sf = g->sf; goto E_10320ebc;
    case 0x10320ec2u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; sf = g->sf; goto E_10320ec2;
    case 0x10320ec4u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; sf = g->sf; goto E_10320ec4;
    case 0x10320eceu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; sf = g->sf; goto E_10320ece;
    case 0x10320ed9u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; sf = g->sf; goto E_10320ed9;
    case 0x10320edcu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; sf = g->sf; goto E_10320edc;
    case 0x10320eebu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; sf = g->sf; in_edi = rd32(sp0 - 0x1014u); g->edi = rd32(sp0 - 0x1014u); goto E_10320eeb;
    case 0x10320eedu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; sf = g->sf; in_edi = rd32(sp0 - 0x1014u); g->edi = rd32(sp0 - 0x1014u); goto E_10320eed;
    case 0x10320f19u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; sf = g->sf; goto E_10320f19;
    case 0x10320f33u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; sf = g->sf; loc_1014 = rd32(sp0 - 0x1014u); goto E_10320f33;
    case 0x10320f48u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; sf = g->sf; loc_1014 = rd32(sp0 - 0x1014u); in_esi = rd32(sp0 - 0x1010u); in_ebx = rd32(sp0 - 0x100cu); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x100cu); g->esi = rd32(sp0 - 0x1010u); goto E_10320f48;
    case 0x10320f4au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; sf = g->sf; loc_1014 = rd32(sp0 - 0x1014u); loc_1010 = rd32(sp0 - 0x1010u); loc_100c = rd32(sp0 - 0x100cu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_10320f4a;
    default: break;
    }
#endif

    COW_AT(10320e29)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x100cu, in_ebx);
    wr32(sp0 - 0x1010u, in_esi);
    wr32(sp0 - 0x1014u, 1u);
    wr32(sp0 - 0x1018u, 0u);
    wr32(sp0 - 0x101cu, arg1);
    g->eax = 0x1004u;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x1010u;
    t1 = cow_cdecl(g, COW_IMG(0x1031f155u), 3, arg1, 0u, 1u);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 8u, t1);
    if (t1 == 0xffffffffu)
    {
        edx = t3;
        goto L_10320f48;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    loc_8 = t1;
    COW_AT(10320e56)
    wr32(sp0 - 0x1014u, 2u);
    wr32(sp0 - 0x1018u, 0u);
    wr32(sp0 - 0x101cu, arg1);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1010u;
    t4 = cow_cdecl(g, COW_IMG(0x1031f155u), 3, arg1, 0u, 2u);
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 == 0xffffffffu)
    {
        edx = t6;
        goto L_10320f48;
    }
    eax = t4;
    ecx = t5;
    edx = t6;
    COW_AT(10320e6c)
    wr32(sp0 - 0x1014u, in_edi);
    if ((int32_t)(rd32(sp0 + 8u) - eax) <= 0)
    {
        sf = (int32_t)(rd32(sp0 + 8u) - eax) < 0;
    COW_AT(10320eeb)
        if (!sf)
        {
            esi = 0u;
            loc_1014 = in_edi;
        }
        else
        {
    COW_AT(10320eed)
            wr32(sp0 - 0x1018u, 0u);
            t25 = rd32(sp0 + 8u);
            wr32(sp0 - 0x101cu, t25);
            wr32(sp0 - 0x1020u, arg1);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x1014u;
            t26 = cow_cdecl(g, COW_IMG(0x1031f155u), 3, arg1, t25, 0u);
            t27 = g->ecx;
            t28 = g->edx;
            wr32(sp0 - 0x1024u, arg1);
            g->esp = sp0 - 0x1020u;
            t29 = cow_call_regs(g, COW_IMG(0x10320c66u), g->eax, t27, t28, 1, 1, arg1);
            t30 = g->ecx;
            t31 = g->edx;
            wr32(sp0 - 0x1018u, t29);
            g->ecx = t30;
            g->edx = t31;
            g->esp = sp0 - 0x1014u;
            t32 = cow_stdcall(g, rd32(COW_IMG(0x103292d4u)), 1, t29);   /* kernel32.dll!SetEndOfFile */
            t33 = g->ecx;
            t34 = g->edx;
            if ((t32 != 0u) - 1u != 0xffffffffu)
            {
                eax = t32;
                ecx = t33;
                edx = t34;
                esi = (t32 != 0u) - 1u;
                loc_1014 = in_edi;
            }
            else
            {
                eax = t32;
                ecx = t33;
                edx = t34;
                esi = (t32 != 0u) - 1u;
    COW_AT(10320f19)
                g->eax = eax;
                g->esp = sp0 - 0x1014u;
                t35 = cow_fastcall(g, COW_IMG(0x10319c89u), ecx, edx, 0);
                t36 = g->ecx;
                t37 = g->edx;
                wr32(t35, 0xdu);
                g->ecx = t36;
                g->edx = t37;
                t38 = cow_stdcall(g, rd32(COW_IMG(0x10329168u)), 0);   /* kernel32.dll!GetLastError */
                t39 = g->ecx;
                t40 = g->edx;
                t41 = cow_fastcall(g, COW_IMG(0x10319c92u), t39, t40, 0);
                t42 = g->ecx;
                t43 = g->edx;
                wr32(t41, t38);
                eax = t41;
                ecx = t42;
                edx = t43;
                loc_1014 = rd32(sp0 - 0x1014u);
            }
        }
    }
    else
    {
        edi = rd32(sp0 + 8u) - eax;
    COW_AT(10320e76)
        wr32(sp0 - 0x1018u, 0x1000u);
        wr32(sp0 - 0x101cu, 0u);
        wr32(sp0 - 0x1020u, sp0 - 0x1008u);
        g->eax = sp0 - 0x1008u;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x1014u;
        t7 = cow_cdecl(g, COW_IMG(0x10316dd0u), 3, sp0 - 0x1008u, 0u, 0x1000u);
        t8 = g->ecx;
        t9 = g->edx;
        wr32(sp0 - 0x1024u, 0x8000u);
        wr32(sp0 - 0x1028u, arg1);
        g->ecx = t8;
        g->edx = t9;
        g->esp = sp0 - 0x1018u;
        t10 = cow_cdecl(g, COW_IMG(0x10324d2fu), 4, arg1, 0x8000u, sp0 - 0x1008u, 0u);
        t11 = g->ecx;
        t12 = g->edx;
        wr32(sp0 + 8u, t10);
        ecx = t11;
        edx = t12;
L_10320e9c: ;
    COW_AT(10320e9c)
        if ((int32_t)edi >= 4096)
        {
            eax = 0x1000u;
        }
        else
        {
    COW_AT(10320ea2)
            eax = edi;
        }
    COW_AT(10320ea4)
        wr32(sp0 - 0x1018u, eax);
        wr32(sp0 - 0x101cu, sp0 - 0x1008u);
        wr32(sp0 - 0x1020u, arg1);
        g->eax = sp0 - 0x1008u;
        g->esp = sp0 - 0x100cu;
        t13 = cow_call_regs(g, COW_IMG(0x10319884u), g->eax, ecx, edx, 1, 5, arg1, sp0 - 0x1008u, eax, rd32(sp0 - 0x1014u), rd32(sp0 - 0x1010u));
        t14 = g->ecx;
        t15 = g->edx;
        if (t13 == 0xffffffffu)
        {
            eax = t13;
            ecx = t14;
            edx = t15;
            goto L_10320ec4;
        }
        eax = t13;
        ecx = t14;
        edx = t15;
    COW_AT(10320ebc)
        if ((int32_t)(edi - eax) <= 0)
        {
            esi = 0u;
            goto L_10320edc;
        }
        edi = edi - eax;
    COW_AT(10320ec2)
        goto L_10320e9c;
    }
L_10320f33: ;
    COW_AT(10320f33)
    wr32(sp0 - 0x1018u, 0u);
    t44 = rd32(sp0 - 8u);
    wr32(sp0 - 0x101cu, t44);
    wr32(sp0 - 0x1020u, arg1);
    g->edx = edx;
    g->esp = sp0 - 0x1014u;
    cow_cdecl(g, COW_IMG(0x1031f155u), 3, arg1, t44, 0u);
    t45 = g->edx;
    eax = esi;
    edx = t45;
    edi = rd32(sp0 - 0x1014u);
    loc_4 = rd32(sp0 - 4u);
    loc_100c = rd32(sp0 - 0x100cu);
    loc_1010 = rd32(sp0 - 0x1010u);
L_10320f4a: ;
    COW_AT(10320f4a)
    g->ebx = loc_100c;
    g->esi = loc_1010;
    g->edi = edi;
    g->ebp = loc_4;
    g->edx = edx;
    return eax;
L_10320ec4: ;
    COW_AT(10320ec4)
    g->eax = eax;
    g->esp = sp0 - 0x1014u;
    t16 = cow_fastcall(g, COW_IMG(0x10319c92u), ecx, edx, 0);
    t17 = g->ecx;
    t18 = g->edx;
    if (rd32(t16) != 5u)
    {
        eax = t16;
        ecx = t17;
        edx = t18;
    }
    else
    {
        eax = t16;
        ecx = t17;
        edx = t18;
    COW_AT(10320ece)
        g->eax = eax;
        g->esp = sp0 - 0x1014u;
        t19 = cow_fastcall(g, COW_IMG(0x10319c89u), ecx, edx, 0);
        t20 = g->ecx;
        t21 = g->edx;
        wr32(t19, 0xdu);
        eax = t19;
        ecx = t20;
        edx = t21;
    }
    COW_AT(10320ed9)
    esi = 0xffffffffu;
L_10320edc: ;
    COW_AT(10320edc)
    t22 = rd32(sp0 + 8u);
    wr32(sp0 - 0x1018u, t22);
    wr32(sp0 - 0x101cu, arg1);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x100cu;
    t23 = cow_cdecl(g, COW_IMG(0x10324d2fu), 4, arg1, t22, rd32(sp0 - 0x1014u), rd32(sp0 - 0x1010u));
    t24 = g->edx;
    eax = t23;
    ecx = rd32(sp0 - 0x1018u);
    edx = t24;
    loc_1014 = rd32(sp0 - 0x1014u);
    goto L_10320f33;
L_10320f48: ;
    COW_AT(10320f48)
    eax = 0xffffffffu;
    edi = in_edi;
    loc_4 = in_ebp;
    loc_100c = in_ebx;
    loc_1010 = in_esi;
    goto L_10320f4a;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10320e29(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10320e56u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1014;
        uint32_t loc_8;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        sf = g->sf;
        loc_1014 = rd32(sp0 - 0x1014u);
        in_esi = rd32(sp0 - 0x1010u);
        in_ebx = rd32(sp0 - 0x100cu);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1010u;
        g->ebx = 0xffffffffu;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10320e6cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t loc_1014;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        sf = g->sf;
        loc_1014 = rd32(sp0 - 0x1014u);
        g->esp = sp0 - 0x1010u;
        g->ebx = 0xffffffffu;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10320e76u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x1014u);
        g->esp = sp0 - 0x1014u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10320e9cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x1014u;
        g->ebx = 0x1000u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10320ea2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x1014u;
        g->ebx = 0x1000u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10320ea4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x1014u;
        g->ebx = 0x1000u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10320ebcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x1014u;
        g->ebx = 0x1000u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        wr32(sp0 - 0x101cu, sp0 - 0x1008u);
        (void)sp0;
        return 1;
    }
    case 0x10320ec2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x1014u;
        g->ebx = 0x1000u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        wr32(sp0 - 0x101cu, sp0 - 0x1008u);
        (void)sp0;
        return 1;
    }
    case 0x10320ec4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x1014u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        wr32(sp0 - 0x101cu, sp0 - 0x1008u);
        (void)sp0;
        return 1;
    }
    case 0x10320eceu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x1014u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        wr32(sp0 - 0x101cu, sp0 - 0x1008u);
        (void)sp0;
        return 1;
    }
    case 0x10320ed9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x1014u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        wr32(sp0 - 0x101cu, sp0 - 0x1008u);
        (void)sp0;
        return 1;
    }
    case 0x10320edcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x1014u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x101cu, sp0 - 0x1008u);
        (void)sp0;
        return 1;
    }
    case 0x10320eebu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x1014u);
        g->esp = sp0 - 0x1014u;
        g->ebx = 0xffffffffu;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        g->of = (uint8_t)(0u);
        (void)sp0;
        return 1;
    }
    case 0x10320eedu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x1014u);
        g->esp = sp0 - 0x1014u;
        g->ebx = 0xffffffffu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10320f19u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x1014u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10320f33u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1014;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        loc_1014 = rd32(sp0 - 0x1014u);
        g->esp = sp0 - 0x1014u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10320f48u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1014;
        uint32_t loc_8;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        sf = g->sf;
        loc_1014 = rd32(sp0 - 0x1014u);
        in_esi = rd32(sp0 - 0x1010u);
        in_ebx = rd32(sp0 - 0x100cu);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1010u;
        g->ebx = 0xffffffffu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10320f4au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_100c;
        uint32_t loc_1010;
        uint32_t loc_1014;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        loc_1014 = rd32(sp0 - 0x1014u);
        loc_1010 = rd32(sp0 - 0x1010u);
        loc_100c = rd32(sp0 - 0x100cu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1010u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10320e29(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10320e29(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
