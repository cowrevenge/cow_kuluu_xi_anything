/* f_0x102b7c10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102b7c10(Guest* g)
{
    double d2;
    double d23;
    double d4;
    double d8;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_630;
    uint32_t loc_63c;
    uint32_t loc_640;
    uint32_t loc_644;
    double loc_648_f;
    uint32_t loc_64c;
    uint32_t loc_654;
    uint32_t loc_658;
    uint32_t loc_65c;
    uint32_t loc_660;
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
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 1716u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102b7c53u: ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_edi = g->edi; in_esi = rd32(sp0 - 0x658u); in_ebp = rd32(sp0 - 0x654u); loc_648_f = rdf32(sp0 - 0x648u); loc_644 = rd32(sp0 - 0x644u); g->ebp = rd32(sp0 - 0x654u); g->esi = rd32(sp0 - 0x658u); goto E_102b7c53;
    case 0x102b7c59u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_660 = rd32(sp0 - 0x660u); loc_65c = rd32(sp0 - 0x65cu); loc_658 = rd32(sp0 - 0x658u); loc_654 = rd32(sp0 - 0x654u); loc_64c = rd32(sp0 - 0x64cu); loc_648_f = rdf32(sp0 - 0x648u); loc_644 = rd32(sp0 - 0x644u); loc_63c = rd32(sp0 - 0x63cu); loc_630 = rd32(sp0 - 0x630u); goto E_102b7c59;
    case 0x102b7c8au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_64c = rd32(sp0 - 0x64cu); goto E_102b7c8a;
    case 0x102b7db1u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; edi = g->edi; loc_640 = rd32(sp0 - 0x640u); goto E_102b7db1;
    case 0x102b7e7au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_640 = rd32(sp0 - 0x640u); goto E_102b7e7a;
    case 0x102b7ea2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_64c = rd32(sp0 - 0x64cu); goto E_102b7ea2;
    case 0x102b7ec1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_64c = rd32(sp0 - 0x64cu); loc_63c = rd32(sp0 - 0x63cu); loc_630 = rd32(sp0 - 0x630u); goto E_102b7ec1;
    case 0x102b7ec3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_658 = rd32(sp0 - 0x658u); loc_654 = rd32(sp0 - 0x654u); loc_64c = rd32(sp0 - 0x64cu); loc_648_f = rdf32(sp0 - 0x648u); loc_644 = rd32(sp0 - 0x644u); loc_63c = rd32(sp0 - 0x63cu); loc_630 = rd32(sp0 - 0x630u); goto E_102b7ec3;
    default: break;
    }
#endif

    COW_AT(102b7c10)
    wr32(sp0 - 0x654u, in_ebp);
    wr32(sp0 - 0x658u, in_esi);
    wr32(sp0 - 0x624u, 5u);
    t1 = rd32(arg1 + 0x130u);
    wr32(sp0 - 0x644u, t1);
    wr32(sp0 - 0x630u, 0u);
    d2 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)(int32_t)t1);
    wrf32(sp0 - 0x648u, (float)(double)(float)d2);
    if ((int32_t)rd32(arg1 + 0x48u) <= 0)
    {
        ebx = in_ebx;
        edi = in_edi;
        loc_654 = in_ebp;
        loc_658 = in_esi;
    }
    else
    {
        ecx = rd32(arg1 + 0x48u);
        loc_644 = t1;
        loc_648_f = (double)(float)d2;
    COW_AT(102b7c53)
        wr32(sp0 - 0x65cu, in_ebx);
        wr32(sp0 - 0x660u, in_edi);
        wr32(sp0 - 0x63cu, 0u);
        edx = in_edx;
        loc_654 = in_ebp;
        loc_658 = in_esi;
        loc_630 = 0u;
        loc_65c = in_ebx;
        loc_660 = in_edi;
        loc_63c = 0u;
L_102b7c59: ;
    COW_AT(102b7c59)
        t3 = loc_63c + rd32(arg1 + 0x4cu);
        wr32(sp0 - 0x664u, t3);
        wr32(sp0 - 0x668u, arg1);
        g->esp = sp0 - 0x65cu;
        cow_cdecl(g, COW_IMG(0x102b7ed0u), 3, arg1, t3, loc_660);
        wr32(sp0 - 0x64cu, 0u);
        if ((int32_t)rd32(sp0 - 0x644u) <= 0) goto L_102b7ea2;
        ecx = rd32(t3 + 0x24u);
        ebx = rd32(COW_IMG(0x103c214cu) + rd32(t3 + 0x24u) * 4u);
        edi = t3;
        loc_64c = 0u;
L_102b7c8a: ;
    COW_AT(102b7c8a)
        wr32(sp0 - 0x628u, 0u);
        wr32(sp0 - 0x664u, sp0 - 0x620u);
        wr32(sp0 - 0x668u, arg1 + 0x54u);
        d4 = fr(g, (double)(int32_t)loc_64c * (double)rdf32(sp0 - 0x648u));
        wr32(sp0 - 0x66cu, 0u);
        wrf32(sp0 - 0x638u, (float)(double)(float)d4);
        wrf32(sp0 - 0x650u, (float)(double)(float)d4);
        wr32(sp0 - 0x670u, cow_f2bits((double)(float)d4));
        wr32(sp0 - 0x674u, arg1);
        g->eax = cow_f2bits((double)(float)d4);
        g->esp = sp0 - 0x674u;
        t5 = cow_thiscall(g, ebx, ecx, 0);
        wr32(sp0 - 0x678u, sp0 - 0x628u);
        wr32(sp0 - 0x67cu, 0u);
        t6 = rd32(sp0 - 0x650u);
        wr32(sp0 - 0x680u, t6);
        wr32(sp0 - 0x684u, edi);
        wr32(sp0 - 0x688u, arg1);
        cow_cdecl(g, COW_IMG(0x102b93e0u), 5, arg1, edi, t6, 0u, sp0 - 0x628u);
        t7 = rd32(sp0 - 0x64cu) + 1u;
        wr32(sp0 - 0x634u, t7);
        wr32(sp0 - 0x628u, 1u);
        d8 = fr(g, (double)(int32_t)t7 * (double)rdf32(sp0 - 0x648u));
        wr32(sp0 - 0x68cu, sp0 - 0x614u);
        wr32(sp0 - 0x690u, arg1 + 0x54u);
        wr32(sp0 - 0x694u, 0u);
        wrf32(sp0 - 0x62cu, (float)(double)(float)d8);
        wrf32(sp0 - 0x650u, (float)(double)(float)d8);
        wr32(sp0 - 0x698u, cow_f2bits((double)(float)d8));
        wr32(sp0 - 0x69cu, arg1);
        g->esp = sp0 - 0x69cu;
        cow_thiscall(g, ebx, cow_f2bits((double)(float)d8), 0);
        t9 = g->ecx;
        wr32(sp0 - 0x6a0u, sp0 - 0x628u);
        wr32(sp0 - 0x6a4u, 0u);
        t10 = rd32(sp0 - 0x650u);
        wr32(sp0 - 0x6a8u, t10);
        wr32(sp0 - 0x6acu, edi);
        wr32(sp0 - 0x6b0u, arg1);
        cow_cdecl(g, COW_IMG(0x102b93e0u), 5, arg1, edi, t10, 0u, sp0 - 0x628u);
        wr32(sp0 - 0x628u, 2u);
        t11 = rd32(sp0 - 0x638u);
        wr32(sp0 - 0x650u, t11);
        wr32(sp0 - 0x664u, sp0 - 0x608u);
        wr32(sp0 - 0x668u, arg1 + 0x54u);
        t12 = rd32(sp0 - 0x648u);
        wr32(sp0 - 0x66cu, t12);
        wr32(sp0 - 0x670u, t11);
        wr32(sp0 - 0x674u, arg1);
        g->esp = sp0 - 0x674u;
        cow_thiscall(g, ebx, t12, 0);
        wr32(sp0 - 0x678u, sp0 - 0x628u);
        t13 = rd32(sp0 - 0x648u);
        wr32(sp0 - 0x67cu, t13);
        t14 = rd32(sp0 - 0x650u);
        wr32(sp0 - 0x680u, t14);
        wr32(sp0 - 0x684u, edi);
        wr32(sp0 - 0x688u, arg1);
        cow_cdecl(g, COW_IMG(0x102b93e0u), 5, arg1, edi, t14, t13, sp0 - 0x628u);
        t15 = rd32(sp0 - 0x62cu);
        wr32(sp0 - 0x650u, t15);
        wr32(sp0 - 0x628u, 3u);
        wr32(sp0 - 0x68cu, sp0 - 0x5fcu);
        wr32(sp0 - 0x690u, arg1 + 0x54u);
        t16 = rd32(sp0 - 0x648u);
        wr32(sp0 - 0x694u, t16);
        wr32(sp0 - 0x698u, t15);
        wr32(sp0 - 0x69cu, arg1);
        g->esp = sp0 - 0x69cu;
        cow_thiscall(g, ebx, t16, 0);
        wr32(sp0 - 0x6a0u, sp0 - 0x628u);
        t17 = rd32(sp0 - 0x648u);
        wr32(sp0 - 0x6a4u, t17);
        t18 = rd32(sp0 - 0x650u);
        wr32(sp0 - 0x6a8u, t18);
        wr32(sp0 - 0x6acu, edi);
        wr32(sp0 - 0x6b0u, arg1);
        cow_cdecl(g, COW_IMG(0x102b93e0u), 5, arg1, edi, t18, t17, sp0 - 0x628u);
        wr32(sp0 - 0x628u, 4u);
        wr32(sp0 - 0x640u, 1u);
        if ((int32_t)rd32(sp0 - 0x644u) <= 1)
        {
            eax = 1u;
            goto L_102b7e7a;
        }
        loc_640 = 1u;
L_102b7db1: ;
    COW_AT(102b7db1)
        wr32(sp0 - 0x664u, arg2);
        wr32(sp0 - 0x668u, sp0 - 0x628u);
        wr32(sp0 - 0x66cu, arg1);
        g->eax = arg2;
        g->esp = sp0 - 0x66cu;
        t19 = cow_thiscall(g, rd32(arg1 + 0x50u), sp0 - 0x628u, 0);
        t20 = g->ecx;
        wr32(sp0 - 0x670u, sp0 - 0x628u);
        g->esp = sp0 - 0x664u;
        cow_cdecl(g, COW_IMG(0x102b9310u), 3, sp0 - 0x628u, arg1, sp0 - 0x628u);
        t21 = rd32(sp0 - 0x640u) + 1u;
        wr32(sp0 - 0x640u, t21);
        t22 = rd32(sp0 - 0x638u);
        wr32(sp0 - 0x650u, t22);
        wr32(sp0 - 0x674u, sp0 - 0x608u);
        wr32(sp0 - 0x678u, arg1 + 0x54u);
        wr32(sp0 - 0x628u, 2u);
        d23 = fr(g, (double)(int32_t)t21 * (double)rdf32(sp0 - 0x648u));
        wrf32(sp0 - 0x64cu, (float)(double)(float)d23);
        wr32(sp0 - 0x67cu, cow_f2bits((double)(float)d23));
        wr32(sp0 - 0x680u, t22);
        wr32(sp0 - 0x684u, arg1);
        g->esp = sp0 - 0x684u;
        cow_thiscall(g, ebx, t22, 0);
        wr32(sp0 - 0x688u, sp0 - 0x628u);
        t24 = rd32(sp0 - 0x64cu);
        wr32(sp0 - 0x68cu, t24);
        t25 = rd32(sp0 - 0x650u);
        wr32(sp0 - 0x690u, t25);
        wr32(sp0 - 0x694u, edi);
        wr32(sp0 - 0x698u, arg1);
        cow_cdecl(g, COW_IMG(0x102b93e0u), 5, arg1, edi, t25, t24, sp0 - 0x628u);
        t26 = rd32(sp0 - 0x62cu);
        wr32(sp0 - 0x650u, t26);
        wr32(sp0 - 0x628u, 3u);
        wr32(sp0 - 0x69cu, sp0 - 0x5fcu);
        wr32(sp0 - 0x6a0u, arg1 + 0x54u);
        t27 = rd32(sp0 - 0x64cu);
        wr32(sp0 - 0x6a4u, t27);
        wr32(sp0 - 0x6a8u, t26);
        wr32(sp0 - 0x6acu, arg1);
        g->esp = sp0 - 0x6acu;
        cow_thiscall(g, ebx, sp0 - 0x5fcu, 0);
        wr32(sp0 - 0x664u, sp0 - 0x628u);
        t28 = rd32(sp0 - 0x64cu);
        wr32(sp0 - 0x668u, t28);
        t29 = rd32(sp0 - 0x650u);
        wr32(sp0 - 0x66cu, t29);
        wr32(sp0 - 0x670u, edi);
        wr32(sp0 - 0x674u, arg1);
        g->esp = sp0 - 0x660u;
        cow_cdecl(g, COW_IMG(0x102b93e0u), 5, arg1, edi, t29, t28, sp0 - 0x628u);
        wr32(sp0 - 0x628u, 4u);
        t30 = rd32(sp0 - 0x640u);
        t31 = rd32(sp0 - 0x640u);
        wr32(sp0 - 0x640u, t30);
        if ((int32_t)t31 < (int32_t)rd32(sp0 - 0x644u))
        {
            loc_640 = t30;
            goto L_102b7db1;
        }
        eax = t30;
L_102b7e7a: ;
    COW_AT(102b7e7a)
        wr32(sp0 - 0x664u, arg2);
        wr32(sp0 - 0x668u, sp0 - 0x628u);
        wr32(sp0 - 0x66cu, arg1);
        g->esp = sp0 - 0x66cu;
        cow_thiscall(g, rd32(arg1 + 0x50u), arg2, 0);
        t32 = rd32(sp0 - 0x634u);
        wr32(sp0 - 0x64cu, t32);
        if ((int32_t)rd32(sp0 - 0x634u) < (int32_t)rd32(sp0 - 0x644u))
        {
            ecx = rd32(sp0 - 0x644u);
            loc_64c = t32;
            goto L_102b7c8a;
        }
L_102b7ea2: ;
    COW_AT(102b7ea2)
        t33 = rd32(sp0 - 0x630u) + 1u;
        t34 = rd32(sp0 - 0x630u);
        wr32(sp0 - 0x630u, t33);
        t35 = rd32(sp0 - 0x63cu) + 0x28u;
        wr32(sp0 - 0x63cu, t35);
        if ((int32_t)(t34 + 1u) < (int32_t)rd32(arg1 + 0x48u))
        {
            ecx = rd32(arg1 + 0x48u);
            edx = t35;
            loc_654 = rd32(sp0 - 0x654u);
            loc_658 = rd32(sp0 - 0x658u);
            loc_644 = rd32(sp0 - 0x644u);
            loc_630 = t33;
            loc_648_f = (double)rdf32(sp0 - 0x648u);
            loc_65c = rd32(sp0 - 0x65cu);
            loc_660 = rd32(sp0 - 0x660u);
            loc_63c = t35;
            goto L_102b7c59;
        }
    COW_AT(102b7ec1)
        ebx = rd32(sp0 - 0x65cu);
        edi = rd32(sp0 - 0x660u);
        loc_654 = rd32(sp0 - 0x654u);
        loc_658 = rd32(sp0 - 0x658u);
    }
    COW_AT(102b7ec3)
    g->ebx = ebx;
    g->esi = loc_658;
    g->edi = edi;
    g->ebp = loc_654;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102b7c10(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102b7c53u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_644;
        double loc_648_f;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x658u);
        in_ebp = rd32(sp0 - 0x654u);
        loc_648_f = rdf32(sp0 - 0x648u);
        loc_644 = rd32(sp0 - 0x644u);
        g->esp = sp0 - 0x658u;
        g->eax = 0u;
        g->ebp = arg1 + 0x54u;
        g->esi = arg1;
        wr32(sp0 - 0x630u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102b7c59u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_630;
        uint32_t loc_63c;
        uint32_t loc_644;
        double loc_648_f;
        uint32_t loc_64c;
        uint32_t loc_654;
        uint32_t loc_658;
        uint32_t loc_65c;
        uint32_t loc_660;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_660 = rd32(sp0 - 0x660u);
        loc_65c = rd32(sp0 - 0x65cu);
        loc_658 = rd32(sp0 - 0x658u);
        loc_654 = rd32(sp0 - 0x654u);
        loc_64c = rd32(sp0 - 0x64cu);
        loc_648_f = rdf32(sp0 - 0x648u);
        loc_644 = rd32(sp0 - 0x644u);
        loc_63c = rd32(sp0 - 0x63cu);
        loc_630 = rd32(sp0 - 0x630u);
        g->esp = sp0 - 0x660u;
        g->ebp = arg1 + 0x54u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102b7c8au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_64c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_64c = rd32(sp0 - 0x64cu);
        g->esp = sp0 - 0x660u;
        g->ebp = arg1 + 0x54u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102b7db1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t loc_640;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        edi = g->edi;
        loc_640 = rd32(sp0 - 0x640u);
        g->esp = sp0 - 0x660u;
        g->edx = 4u;
        g->ebp = arg1 + 0x54u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102b7e7au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_640;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_640 = rd32(sp0 - 0x640u);
        g->esp = sp0 - 0x660u;
        g->ebp = arg1 + 0x54u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102b7ea2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_64c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_64c = rd32(sp0 - 0x64cu);
        g->esp = sp0 - 0x660u;
        g->ebp = arg1 + 0x54u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102b7ec1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_630;
        uint32_t loc_63c;
        uint32_t loc_64c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_64c = rd32(sp0 - 0x64cu);
        loc_63c = rd32(sp0 - 0x63cu);
        loc_630 = rd32(sp0 - 0x630u);
        g->esp = sp0 - 0x660u;
        (void)sp0;
        return 1;
    }
    case 0x102b7ec3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_630;
        uint32_t loc_63c;
        uint32_t loc_644;
        double loc_648_f;
        uint32_t loc_64c;
        uint32_t loc_654;
        uint32_t loc_658;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_658 = rd32(sp0 - 0x658u);
        loc_654 = rd32(sp0 - 0x654u);
        loc_64c = rd32(sp0 - 0x64cu);
        loc_648_f = rdf32(sp0 - 0x648u);
        loc_644 = rd32(sp0 - 0x644u);
        loc_63c = rd32(sp0 - 0x63cu);
        loc_630 = rd32(sp0 - 0x630u);
        g->esp = sp0 - 0x658u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102b7c10(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102b7c10(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
