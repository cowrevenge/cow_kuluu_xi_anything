/* f_0x102958d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_102958d0(Guest* g)
{
    uint32_t al_m10;
    uint32_t al_mc;
    double d22;
    double d39;
    double d43;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t sp1 = (sp0 - 0x4u) & 0xfffffff8u;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 76u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102958e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_edi = rd32(sp1 - 0x20u); in_esi = rd32(sp1 - 0x1cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp1 - 0x20u); g->esi = rd32(sp1 - 0x1cu); goto E_102958e5;
    case 0x102958f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102958f3;
    case 0x10295902u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10295902;
    case 0x10295909u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10295909;
    case 0x10295916u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10295916;
    case 0x1029591cu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1029591c;
    case 0x1029592au: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1029592a;
    case 0x10295930u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10295930;
    case 0x10295943u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10295943;
    case 0x10295949u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10295949;
    case 0x10295957u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10295957;
    case 0x1029595du: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1029595d;
    case 0x10295968u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10295968;
    case 0x1029596fu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1029596f;
    case 0x10295979u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10295979;
    case 0x1029597eu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1029597e;
    case 0x10295989u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10295989;
    case 0x10295995u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_10295995;
    case 0x102959a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_102959a2;
    case 0x102959acu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; al_m10 = rd32(sp1 - 0x10u); al_mc = rd32(sp1 - 0xcu); goto E_102959ac;
    case 0x102959b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102959b6;
    case 0x102959cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102959cb;
    case 0x102959d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102959d7;
    case 0x102959feu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102959fe;
    case 0x10295a09u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_10295a09;
    case 0x10295a13u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_10295a13;
    case 0x10295a1eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; al_m10 = rd32(sp1 - 0x10u); goto E_10295a1e;
    case 0x10295a28u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_10295a28;
    case 0x10295a2bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_10295a2b;
    default: break;
    }
#endif

    COW_AT(102958d0)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp1 - 0x18u, in_ebx);
    wr32(sp1 - 0x1cu, in_esi);
    wr32(sp1 - 0x20u, in_edi);
    wr32(sp1 - 0x24u, arg3);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp1 - 0x18u;
    t1 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3, in_edi, in_esi);
    t2 = g->ecx;
    t3 = g->edx;
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(102958e5)
    wr32(sp1 - 0x28u, arg1);
    wr32(sp1 - 0x2cu, COW_IMG(0x103bb9e8u));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x24u;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb9e8u), arg1);
    t5 = g->ecx;
    t6 = g->edx;
    eax = t4;
    ecx = t5;
    edx = t6;
    COW_AT(102958f3)
    if ((int32_t)arg2 >= 1)
    {
    COW_AT(10295902)
        wr32(sp1 - 0x24u, arg3 + 1u);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp1 - 0x18u;
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, rd32(sp1 - 0x20u), rd32(sp1 - 0x1cu));
        t7 = g->ecx;
        t8 = g->edx;
        ecx = t7;
        edx = t8;
    COW_AT(10295909)
        wr32(sp1 - 0x28u, rd32(arg1));
        wr32(sp1 - 0x2cu, COW_IMG(0x103b41dcu));
        g->ebx = arg2;
        g->eax = rd32(arg1);
        g->ecx = ecx;
        g->edx = edx;
        t9 = rd32(arg1);
        g->esp = sp1 - 0x24u;
        t10 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b41dcu), t9);
        t11 = g->ecx;
        t12 = g->edx;
        eax = t10;
        ecx = t11;
        edx = t12;
    COW_AT(10295916)
        wr32(sp1 - 0x30u, arg3 + 1u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp1 - 0x24u;
        t13 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103b41dcu), rd32(sp1 - 0x28u));
        t14 = g->edx;
        eax = t13;
        edx = t14;
    COW_AT(1029591c)
        t15 = rd32(arg1 + 0x1cu);
        wr32(sp1 - 0x34u, t15);
        wr32(sp1 - 0x38u, COW_IMG(0x103bb3d8u));
        g->ebx = arg2;
        g->eax = eax;
        g->ecx = t15;
        g->edx = edx;
        g->esp = sp1 - 0x30u;
        t16 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb3d8u), t15);
        t17 = g->ecx;
        t18 = g->edx;
        eax = t16;
        ecx = t17;
        edx = t18;
    COW_AT(1029592a)
        wr32(sp1 - 0x3cu, arg3 + 1u);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp1 - 0x30u;
        t19 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bb3d8u), rd32(sp1 - 0x34u));
        t20 = g->ecx;
        t21 = g->edx;
        eax = t19;
        ecx = t20;
        edx = t21;
    COW_AT(10295930)
        d22 = (double)rdf32(arg1 + 0x20u);
        wrf64(sp1 - 0x28u, d22);
        wr32(sp1 - 0x2cu, COW_IMG(0x103bb3c8u));
        g->ebx = arg2;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp1 - 0x24u;
        t23 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb3c8u), cow_dlo(d22));
        t24 = g->ecx;
        t25 = g->edx;
        eax = t23;
        ecx = t24;
        edx = t25;
    COW_AT(10295943)
        wr32(sp1 - 0x30u, arg3 + 1u);
        g->eax = eax;
        g->ecx = ecx;
        g->esp = sp1 - 0x24u;
        t26 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bb3c8u), rd32(sp1 - 0x28u));
        t27 = g->ecx;
        eax = t26;
        ecx = t27;
    COW_AT(10295949)
        t28 = rd32(arg1 + 0x28u);
        wr32(sp1 - 0x34u, t28);
        wr32(sp1 - 0x38u, COW_IMG(0x103bb9dcu));
        g->ebx = arg2;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = t28;
        g->esp = sp1 - 0x30u;
        t29 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb9dcu), t28);
        t30 = g->ecx;
        t31 = g->edx;
        eax = t29;
        ecx = t30;
        edx = t31;
    COW_AT(10295957)
        wr32(sp1 - 0x3cu, arg3 + 1u);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp1 - 0x30u;
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bb9dcu), rd32(sp1 - 0x34u));
        t32 = g->ecx;
        t33 = g->edx;
        ecx = t32;
        edx = t33;
    COW_AT(1029595d)
        if (rd32(arg1 + 0x24u) != 1u)
        {
            eax = rd32(arg1 + 0x24u);
    COW_AT(1029596f)
            if (eax == 2u)
            {
                eax = COW_IMG(0x103bb398u);
            }
            else
            {
    COW_AT(10295979)
                eax = COW_IMG(0x103bb390u);
            }
        }
        else
        {
    COW_AT(10295968)
            eax = COW_IMG(0x103bb3a0u);
        }
    COW_AT(1029597e)
        wr32(sp1 - 0x24u, eax);
        wr32(sp1 - 0x28u, COW_IMG(0x103bb37cu));
        g->ebx = arg2;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp1 - 0x20u;
        t34 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb37cu), eax);
        t35 = g->ecx;
        t36 = g->edx;
        eax = t34;
        ecx = t35;
        edx = t36;
    COW_AT(10295989)
        if ((int32_t)arg2 >= 2)
        {
    COW_AT(10295995)
            wr32(sp1 - 0x10u, 0u);
            if ((int32_t)rd32(arg1 + 0x28u) <= 0)
            {
                eax = rd32(arg1 + 0x28u);
                ebx = 0u;
            }
            else
            {
    COW_AT(102959a2)
                wr32(sp1 - 0xcu, arg3 + 2u);
                eax = arg3 + 2u;
                ebx = 0u;
                al_m10 = 0u;
                al_mc = arg3 + 2u;
L_102959ac: ;
    COW_AT(102959ac)
                wr32(sp1 - 0x24u, al_mc);
                g->eax = eax;
                g->ecx = al_mc;
                g->esp = sp1 - 0x18u;
                t37 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, al_mc, rd32(sp1 - 0x20u), rd32(sp1 - 0x1cu));
                t38 = g->ecx;
                eax = t37;
                ecx = t38;
    COW_AT(102959b6)
                wr32(sp1 - 0x28u, ecx);
                d39 = (double)rdf32(ebx * 4u + rd32(arg1 + 0x2cu));
                wrf64(sp1 - 0x28u, d39);
                wr32(sp1 - 0x2cu, ebx);
                wr32(sp1 - 0x30u, COW_IMG(0x103bb9ccu));
                g->ebx = ebx;
                g->ecx = ecx;
                g->edx = rd32(arg1 + 0x2cu);
                t40 = rd32(arg1 + 0x2cu);
                g->esp = sp1 - 0x28u;
                cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb9ccu), ebx);
                t41 = g->ecx;
                t42 = g->edx;
                ecx = t41;
                edx = t42;
    COW_AT(102959cb)
                if ((int32_t)rd32(arg1 + 0x1cu) <= 0)
                {
                    eax = rd32(arg1 + 0x1cu);
                    goto L_10295a09;
                }
                edi = 0u;
L_102959d7: ;
    COW_AT(102959d7)
                d43 = (double)rdf32(rd32(arg1 + 0x30u) + rd32(sp1 - 0x10u) * 4u);
                wrf64(sp1 - 8u, d43);
                t44 = rd32(sp1 - 0x10u) + 1u;
                wr32(sp1 - 0x10u, t44);
                wr32(sp1 - 0x24u, cow_dhi(d43));
                wr32(sp1 - 0x28u, cow_dlo(d43));
                wr32(sp1 - 0x2cu, COW_IMG(0x103bb5c8u));
                g->ebx = ebx;
                g->ecx = rd32(arg1 + 0x30u);
                g->edx = cow_dhi(d43);
                t45 = rd32(arg1 + 0x30u);
                g->esp = sp1 - 0x24u;
                cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb5c8u), cow_dlo(d43));
                t46 = g->ecx;
                t47 = g->edx;
                ecx = t46;
                edx = t47;
    COW_AT(102959fe)
                if ((int32_t)(edi + 1u) < (int32_t)rd32(arg1 + 0x1cu))
                {
                    edi = edi + 1u;
                    goto L_102959d7;
                }
                eax = rd32(arg1 + 0x1cu);
L_10295a09: ;
    COW_AT(10295a09)
                wr32(sp1 - 0x24u, COW_IMG(0x103bb5c4u));
                g->ebx = ebx;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp1 - 0x1cu;
                cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb5c4u), rd32(sp1 - 0x20u));
                t48 = g->ecx;
                t49 = g->edx;
                ecx = t48;
                edx = t49;
    COW_AT(10295a13)
                if ((int32_t)(ebx + 1u) < (int32_t)rd32(arg1 + 0x28u))
                {
                    eax = rd32(arg1 + 0x28u);
                    ebx = ebx + 1u;
                    al_m10 = rd32(sp1 - 0x10u);
                    al_mc = rd32(sp1 - 0xcu);
                    goto L_102959ac;
                }
                eax = rd32(arg1 + 0x28u);
                ebx = ebx + 1u;
            }
    COW_AT(10295a1e)
            wr32(sp1 - 0x24u, COW_IMG(0x10350e4cu));
            g->ebx = ebx;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp1 - 0x1cu;
            t50 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x10350e4cu), rd32(sp1 - 0x20u));
            t51 = g->edx;
            eax = t50;
            edx = t51;
    COW_AT(10295a28)
        }
    }
    COW_AT(10295a2b)
    g->ebx = rd32(sp1 - 0x18u);
    g->esi = rd32(sp1 - 0x1cu);
    g->edi = rd32(sp1 - 0x20u);
    g->ebp = rd32(sp0 - 4u);
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102958d0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    const uint32_t sp1 = (sp0 - 0x4u) & 0xfffffff8u;
    switch (at)
    {
    case 0x102958e5u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_edi = rd32(sp1 - 0x20u);
        in_esi = rd32(sp1 - 0x1cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x24u;
        g->ebp = sp0 - 4u;
        g->edi = arg3;
        wr32(sp1 - 0x18u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x102958f3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp1 - 0x2cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10295902u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x20u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10295909u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x24u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x10295916u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x2cu;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        wr32(sp1 - 0x2cu, COW_IMG(0x103b41dcu));
        (void)sp0;
        return 1;
    }
    case 0x1029591cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x30u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029592au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x38u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        wr32(sp1 - 0x38u, COW_IMG(0x103bb3d8u));
        (void)sp0;
        return 1;
    }
    case 0x10295930u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x3cu;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x10295943u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x2cu;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        wr32(sp1 - 0x2cu, COW_IMG(0x103bb3c8u));
        (void)sp0;
        return 1;
    }
    case 0x10295949u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x30u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x10295957u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x38u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        wr32(sp1 - 0x38u, COW_IMG(0x103bb9dcu));
        (void)sp0;
        return 1;
    }
    case 0x1029595du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp1 - 0x3cu;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10295968u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp1 - 0x20u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1029596fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp1 - 0x20u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10295979u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp1 - 0x20u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1029597eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp1 - 0x20u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10295989u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp1 - 0x28u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10295995u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp1 - 0x20u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102959a2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp1 - 0x20u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp1 - 0x10u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102959acu:
    {
        uint32_t al_m10;
        uint32_t al_mc;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        al_m10 = rd32(sp1 - 0x10u);
        al_mc = rd32(sp1 - 0xcu);
        g->esp = sp1 - 0x20u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102959b6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp1 - 0x24u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102959cbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp1 - 0x30u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102959d7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp1 - 0x20u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102959feu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp1 - 0x2cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10295a09u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp1 - 0x20u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10295a13u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp1 - 0x24u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10295a1eu:
    {
        uint32_t al_m10;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        al_m10 = rd32(sp1 - 0x10u);
        g->esp = sp1 - 0x20u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10295a28u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp1 - 0x24u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10295a2bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp1 - 0x20u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102958d0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102958d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
