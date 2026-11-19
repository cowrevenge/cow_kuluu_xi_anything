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
    double d10;
    double d2;
    double d30;
    double d4;
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
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
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
    case 0x102b7c69u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102b7c69;
    case 0x102b7c8au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_64c = rd32(sp0 - 0x64cu); goto E_102b7c8a;
    case 0x102b7cb2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102b7cb2;
    case 0x102b7cc5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102b7cc5;
    case 0x102b7cfau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102b7cfa;
    case 0x102b7d0du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102b7d0d;
    case 0x102b7d3au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102b7d3a;
    case 0x102b7d50u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102b7d50;
    case 0x102b7d77u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102b7d77;
    case 0x102b7d8du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102b7d8d;
    case 0x102b7db1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_640 = rd32(sp0 - 0x640u); goto E_102b7db1;
    case 0x102b7dc2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102b7dc2;
    case 0x102b7dccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102b7dcc;
    case 0x102b7e04u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102b7e04;
    case 0x102b7e1au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102b7e1a;
    case 0x102b7e41u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102b7e41;
    case 0x102b7e5au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102b7e5a;
    case 0x102b7e7au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_640 = rd32(sp0 - 0x640u); goto E_102b7e7a;
    case 0x102b7e8bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102b7e8b;
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
        edi = t3;
    COW_AT(102b7c69)
        wr32(sp0 - 0x64cu, 0u);
        if ((int32_t)rd32(sp0 - 0x644u) <= 0) goto L_102b7ea2;
        ecx = rd32(edi + 0x24u);
        ebx = rd32(COW_IMG(0x103c214cu) + rd32(edi + 0x24u) * 4u);
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
        eax = t5;
    COW_AT(102b7cb2)
        wr32(sp0 - 0x678u, sp0 - 0x628u);
        wr32(sp0 - 0x67cu, 0u);
        t6 = rd32(sp0 - 0x650u);
        wr32(sp0 - 0x680u, t6);
        wr32(sp0 - 0x684u, edi);
        wr32(sp0 - 0x688u, arg1);
        g->esp = sp0 - 0x674u;
        cow_cdecl(g, COW_IMG(0x102b93e0u), 5, arg1, edi, t6, 0u, sp0 - 0x628u);
    COW_AT(102b7cc5)
        t7 = rd32(sp0 - 0x64cu) + 1u;
        wr32(sp0 - 0x634u, t7);
        t8 = rd32(sp0 - 0x628u) + 1u;
        wr32(sp0 - 0x628u, t8);
        t9 = sp0 + t8 * 0xcu - 0x620u;
        d10 = fr(g, (double)(int32_t)t7 * (double)rdf32(sp0 - 0x648u));
        wr32(sp0 - 0x68cu, t9);
        wr32(sp0 - 0x690u, arg1 + 0x54u);
        wr32(sp0 - 0x694u, 0u);
        wrf32(sp0 - 0x62cu, (float)(double)(float)d10);
        wrf32(sp0 - 0x650u, (float)(double)(float)d10);
        wr32(sp0 - 0x698u, cow_f2bits((double)(float)d10));
        wr32(sp0 - 0x69cu, arg1);
        g->esp = sp0 - 0x69cu;
        cow_thiscall(g, ebx, cow_f2bits((double)(float)d10), 0);
        t11 = g->ecx;
        ecx = t11;
    COW_AT(102b7cfa)
        wr32(sp0 - 0x6a0u, sp0 - 0x628u);
        wr32(sp0 - 0x6a4u, 0u);
        t12 = rd32(sp0 - 0x650u);
        wr32(sp0 - 0x6a8u, t12);
        wr32(sp0 - 0x6acu, edi);
        wr32(sp0 - 0x6b0u, arg1);
        g->esp = sp0 - 0x69cu;
        cow_cdecl(g, COW_IMG(0x102b93e0u), 5, arg1, edi, t12, 0u, sp0 - 0x628u);
    COW_AT(102b7d0d)
        t13 = rd32(sp0 - 0x628u) + 1u;
        wr32(sp0 - 0x628u, t13);
        t14 = rd32(sp0 - 0x638u);
        wr32(sp0 - 0x650u, t14);
        t15 = sp0 + t13 * 0xcu - 0x620u;
        wr32(sp0 - 0x664u, t15);
        wr32(sp0 - 0x668u, arg1 + 0x54u);
        t16 = rd32(sp0 - 0x648u);
        wr32(sp0 - 0x66cu, t16);
        wr32(sp0 - 0x670u, t14);
        wr32(sp0 - 0x674u, arg1);
        g->esp = sp0 - 0x674u;
        cow_thiscall(g, ebx, t16, 0);
    COW_AT(102b7d3a)
        wr32(sp0 - 0x678u, sp0 - 0x628u);
        t17 = rd32(sp0 - 0x648u);
        wr32(sp0 - 0x67cu, t17);
        t18 = rd32(sp0 - 0x650u);
        wr32(sp0 - 0x680u, t18);
        wr32(sp0 - 0x684u, edi);
        wr32(sp0 - 0x688u, arg1);
        g->esp = sp0 - 0x674u;
        cow_cdecl(g, COW_IMG(0x102b93e0u), 5, arg1, edi, t18, t17, sp0 - 0x628u);
    COW_AT(102b7d50)
        t19 = rd32(sp0 - 0x62cu);
        wr32(sp0 - 0x650u, t19);
        t20 = rd32(sp0 - 0x628u) + 1u;
        wr32(sp0 - 0x628u, t20);
        t21 = sp0 + t20 * 0xcu - 0x620u;
        wr32(sp0 - 0x68cu, t21);
        wr32(sp0 - 0x690u, arg1 + 0x54u);
        t22 = rd32(sp0 - 0x648u);
        wr32(sp0 - 0x694u, t22);
        wr32(sp0 - 0x698u, t19);
        wr32(sp0 - 0x69cu, arg1);
        g->esp = sp0 - 0x69cu;
        cow_thiscall(g, ebx, t22, 0);
    COW_AT(102b7d77)
        wr32(sp0 - 0x6a0u, sp0 - 0x628u);
        t23 = rd32(sp0 - 0x648u);
        wr32(sp0 - 0x6a4u, t23);
        t24 = rd32(sp0 - 0x650u);
        wr32(sp0 - 0x6a8u, t24);
        wr32(sp0 - 0x6acu, edi);
        wr32(sp0 - 0x6b0u, arg1);
        g->esp = sp0 - 0x69cu;
        cow_cdecl(g, COW_IMG(0x102b93e0u), 5, arg1, edi, t24, t23, sp0 - 0x628u);
    COW_AT(102b7d8d)
        t25 = rd32(sp0 - 0x628u) + 1u;
        wr32(sp0 - 0x628u, t25);
        wr32(sp0 - 0x640u, 1u);
        if ((int32_t)rd32(sp0 - 0x644u) <= 1)
        {
            eax = 1u;
            goto L_102b7e7a;
        }
        edx = t25;
        loc_640 = 1u;
L_102b7db1: ;
    COW_AT(102b7db1)
        wr32(sp0 - 0x664u, arg2);
        wr32(sp0 - 0x668u, sp0 - 0x628u);
        wr32(sp0 - 0x66cu, arg1);
        g->eax = arg2;
        g->esp = sp0 - 0x66cu;
        t26 = cow_thiscall(g, rd32(arg1 + 0x50u), sp0 - 0x628u, 0);
        t27 = g->ecx;
        eax = t26;
        ecx = t27;
    COW_AT(102b7dc2)
        wr32(sp0 - 0x670u, sp0 - 0x628u);
        g->esp = sp0 - 0x664u;
        cow_cdecl(g, COW_IMG(0x102b9310u), 3, sp0 - 0x628u, rd32(sp0 - 0x66cu), sp0 - 0x628u);
    COW_AT(102b7dcc)
        t28 = rd32(sp0 - 0x640u) + 1u;
        wr32(sp0 - 0x640u, t28);
        t29 = rd32(sp0 - 0x638u);
        wr32(sp0 - 0x650u, t29);
        wr32(sp0 - 0x674u, sp0 - 0x608u);
        wr32(sp0 - 0x678u, arg1 + 0x54u);
        wr32(sp0 - 0x628u, 2u);
        d30 = fr(g, (double)(int32_t)t28 * (double)rdf32(sp0 - 0x648u));
        wrf32(sp0 - 0x64cu, (float)(double)(float)d30);
        wr32(sp0 - 0x67cu, cow_f2bits((double)(float)d30));
        wr32(sp0 - 0x680u, t29);
        wr32(sp0 - 0x684u, arg1);
        g->esp = sp0 - 0x684u;
        cow_thiscall(g, ebx, t29, 0);
    COW_AT(102b7e04)
        wr32(sp0 - 0x688u, sp0 - 0x628u);
        t31 = rd32(sp0 - 0x64cu);
        wr32(sp0 - 0x68cu, t31);
        t32 = rd32(sp0 - 0x650u);
        wr32(sp0 - 0x690u, t32);
        wr32(sp0 - 0x694u, edi);
        wr32(sp0 - 0x698u, arg1);
        g->esp = sp0 - 0x684u;
        cow_cdecl(g, COW_IMG(0x102b93e0u), 5, arg1, edi, t32, t31, sp0 - 0x628u);
    COW_AT(102b7e1a)
        t33 = rd32(sp0 - 0x62cu);
        wr32(sp0 - 0x650u, t33);
        t34 = rd32(sp0 - 0x628u) + 1u;
        wr32(sp0 - 0x628u, t34);
        t35 = sp0 + t34 * 0xcu - 0x620u;
        wr32(sp0 - 0x69cu, t35);
        wr32(sp0 - 0x6a0u, arg1 + 0x54u);
        t36 = rd32(sp0 - 0x64cu);
        wr32(sp0 - 0x6a4u, t36);
        wr32(sp0 - 0x6a8u, t33);
        wr32(sp0 - 0x6acu, arg1);
        g->esp = sp0 - 0x6acu;
        cow_thiscall(g, ebx, t35, 0);
    COW_AT(102b7e41)
        wr32(sp0 - 0x664u, sp0 - 0x628u);
        t37 = rd32(sp0 - 0x64cu);
        wr32(sp0 - 0x668u, t37);
        t38 = rd32(sp0 - 0x650u);
        wr32(sp0 - 0x66cu, t38);
        wr32(sp0 - 0x670u, edi);
        wr32(sp0 - 0x674u, arg1);
        g->esp = sp0 - 0x660u;
        cow_cdecl(g, COW_IMG(0x102b93e0u), 5, arg1, edi, t38, t37, sp0 - 0x628u);
    COW_AT(102b7e5a)
        t39 = rd32(sp0 - 0x628u) + 1u;
        wr32(sp0 - 0x628u, t39);
        t40 = rd32(sp0 - 0x640u);
        t41 = rd32(sp0 - 0x640u);
        wr32(sp0 - 0x640u, t40);
        if ((int32_t)t41 < (int32_t)rd32(sp0 - 0x644u))
        {
            edx = t39;
            loc_640 = t40;
            goto L_102b7db1;
        }
        eax = t40;
L_102b7e7a: ;
    COW_AT(102b7e7a)
        wr32(sp0 - 0x664u, arg2);
        wr32(sp0 - 0x668u, sp0 - 0x628u);
        wr32(sp0 - 0x66cu, arg1);
        g->esp = sp0 - 0x66cu;
        cow_thiscall(g, rd32(arg1 + 0x50u), arg2, 0);
    COW_AT(102b7e8b)
        t42 = rd32(sp0 - 0x634u);
        wr32(sp0 - 0x64cu, t42);
        if ((int32_t)rd32(sp0 - 0x634u) < (int32_t)rd32(sp0 - 0x644u))
        {
            ecx = rd32(sp0 - 0x644u);
            loc_64c = t42;
            goto L_102b7c8a;
        }
L_102b7ea2: ;
    COW_AT(102b7ea2)
        t43 = rd32(sp0 - 0x630u) + 1u;
        t44 = rd32(sp0 - 0x630u);
        wr32(sp0 - 0x630u, t43);
        t45 = rd32(sp0 - 0x63cu) + 0x28u;
        wr32(sp0 - 0x63cu, t45);
        if ((int32_t)(t44 + 1u) < (int32_t)rd32(arg1 + 0x48u))
        {
            ecx = rd32(arg1 + 0x48u);
            edx = t45;
            loc_654 = rd32(sp0 - 0x654u);
            loc_658 = rd32(sp0 - 0x658u);
            loc_644 = rd32(sp0 - 0x644u);
            loc_630 = t43;
            loc_648_f = (double)rdf32(sp0 - 0x648u);
            loc_65c = rd32(sp0 - 0x65cu);
            loc_660 = rd32(sp0 - 0x660u);
            loc_63c = t45;
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
    case 0x102b7c69u:
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
        g->esp = sp0 - 0x668u;
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
    case 0x102b7cb2u:
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
        g->esp = sp0 - 0x674u;
        g->ebp = arg1 + 0x54u;
        g->esi = arg1;
        wr32(sp0 - 0x664u, sp0 - 0x620u);
        wr32(sp0 - 0x628u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102b7cc5u:
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
        g->esp = sp0 - 0x688u;
        g->ebp = arg1 + 0x54u;
        g->esi = arg1;
        wr32(sp0 - 0x678u, sp0 - 0x628u);
        wr32(sp0 - 0x664u, sp0 - 0x620u);
        (void)sp0;
        return 1;
    }
    case 0x102b7cfau:
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
        g->esp = sp0 - 0x69cu;
        g->ebp = arg1 + 0x54u;
        g->esi = arg1;
        wr32(sp0 - 0x678u, sp0 - 0x628u);
        wr32(sp0 - 0x664u, sp0 - 0x620u);
        (void)sp0;
        return 1;
    }
    case 0x102b7d0du:
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
        g->esp = sp0 - 0x6b0u;
        g->ebp = arg1 + 0x54u;
        g->esi = arg1;
        wr32(sp0 - 0x6a0u, sp0 - 0x628u);
        wr32(sp0 - 0x678u, sp0 - 0x628u);
        wr32(sp0 - 0x664u, sp0 - 0x620u);
        (void)sp0;
        return 1;
    }
    case 0x102b7d3au:
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
        g->esp = sp0 - 0x674u;
        g->ebp = arg1 + 0x54u;
        g->esi = arg1;
        wr32(sp0 - 0x6a0u, sp0 - 0x628u);
        wr32(sp0 - 0x678u, sp0 - 0x628u);
        (void)sp0;
        return 1;
    }
    case 0x102b7d50u:
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
        g->esp = sp0 - 0x688u;
        g->ebp = arg1 + 0x54u;
        g->esi = arg1;
        wr32(sp0 - 0x6a0u, sp0 - 0x628u);
        wr32(sp0 - 0x678u, sp0 - 0x628u);
        (void)sp0;
        return 1;
    }
    case 0x102b7d77u:
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
        g->esp = sp0 - 0x69cu;
        g->ebp = arg1 + 0x54u;
        g->esi = arg1;
        wr32(sp0 - 0x6a0u, sp0 - 0x628u);
        wr32(sp0 - 0x678u, sp0 - 0x628u);
        (void)sp0;
        return 1;
    }
    case 0x102b7d8du:
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
        g->esp = sp0 - 0x6b0u;
        g->ebp = arg1 + 0x54u;
        g->esi = arg1;
        wr32(sp0 - 0x6a0u, sp0 - 0x628u);
        wr32(sp0 - 0x678u, sp0 - 0x628u);
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
    case 0x102b7dc2u:
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
        g->esp = sp0 - 0x66cu;
        g->ebp = arg1 + 0x54u;
        g->esi = arg1;
        wr32(sp0 - 0x668u, sp0 - 0x628u);
        (void)sp0;
        return 1;
    }
    case 0x102b7dccu:
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
        g->esp = sp0 - 0x670u;
        g->ebp = arg1 + 0x54u;
        g->esi = arg1;
        wr32(sp0 - 0x670u, sp0 - 0x628u);
        wr32(sp0 - 0x668u, sp0 - 0x628u);
        (void)sp0;
        return 1;
    }
    case 0x102b7e04u:
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
        g->esp = sp0 - 0x684u;
        g->ebp = arg1 + 0x54u;
        g->esi = arg1;
        wr32(sp0 - 0x674u, sp0 - 0x608u);
        wr32(sp0 - 0x670u, sp0 - 0x628u);
        wr32(sp0 - 0x668u, sp0 - 0x628u);
        wr32(sp0 - 0x628u, 2u);
        (void)sp0;
        return 1;
    }
    case 0x102b7e1au:
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
        g->esp = sp0 - 0x698u;
        g->ebp = arg1 + 0x54u;
        g->esi = arg1;
        wr32(sp0 - 0x688u, sp0 - 0x628u);
        wr32(sp0 - 0x674u, sp0 - 0x608u);
        wr32(sp0 - 0x670u, sp0 - 0x628u);
        wr32(sp0 - 0x668u, sp0 - 0x628u);
        (void)sp0;
        return 1;
    }
    case 0x102b7e41u:
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
        g->esp = sp0 - 0x6acu;
        g->ebp = arg1 + 0x54u;
        g->esi = arg1;
        wr32(sp0 - 0x688u, sp0 - 0x628u);
        wr32(sp0 - 0x674u, sp0 - 0x608u);
        wr32(sp0 - 0x670u, sp0 - 0x628u);
        wr32(sp0 - 0x668u, sp0 - 0x628u);
        (void)sp0;
        return 1;
    }
    case 0x102b7e5au:
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
        g->esp = sp0 - 0x674u;
        g->ebp = arg1 + 0x54u;
        g->esi = arg1;
        wr32(sp0 - 0x688u, sp0 - 0x628u);
        wr32(sp0 - 0x664u, sp0 - 0x628u);
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
    case 0x102b7e8bu:
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
        g->esp = sp0 - 0x66cu;
        g->ebp = arg1 + 0x54u;
        g->esi = arg1;
        wr32(sp0 - 0x668u, sp0 - 0x628u);
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
