/* f_0x102d9c65 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=6 */
uint32_t cow_fn_102d9c65(Guest* g)
{
    uint32_t al_m48;
    uint32_t al_m4c;
    uint32_t al_m50;
    uint32_t al_m54;
    uint32_t al_m58;
    double d10;
    double d11;
    double d12;
    double d13;
    double d8;
    double d9;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t14;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    double x0;
    double x1;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t sp1 = (sp0 - 0x4u) & 0xfffffff0u;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg6 = rd32(sp0 + 0x18u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 116u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102d9ca2u: in_edi = rd32(sp1 - 0x50u); in_esi = rd32(sp1 - 0x4cu); in_ebx = rd32(sp1 - 0x48u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp1 - 0x48u); g->edi = rd32(sp1 - 0x50u); g->esi = rd32(sp1 - 0x4cu); goto E_102d9ca2;
    case 0x102d9ca9u: in_edi = rd32(sp1 - 0x50u); in_esi = rd32(sp1 - 0x4cu); in_ebx = rd32(sp1 - 0x48u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp1 - 0x48u); g->edi = rd32(sp1 - 0x50u); g->esi = rd32(sp1 - 0x4cu); goto E_102d9ca9;
    case 0x102d9d0bu: in_edi = rd32(sp1 - 0x50u); in_esi = rd32(sp1 - 0x4cu); in_ebx = rd32(sp1 - 0x48u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp1 - 0x48u); g->edi = rd32(sp1 - 0x50u); g->esi = rd32(sp1 - 0x4cu); goto E_102d9d0b;
    case 0x102d9d0eu: in_edi = rd32(sp1 - 0x50u); in_esi = rd32(sp1 - 0x4cu); in_ebx = rd32(sp1 - 0x48u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp1 - 0x48u); g->edi = rd32(sp1 - 0x50u); g->esi = rd32(sp1 - 0x4cu); goto E_102d9d0e;
    case 0x102d9d11u: in_edi = rd32(sp1 - 0x50u); in_esi = rd32(sp1 - 0x4cu); in_ebx = rd32(sp1 - 0x48u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp1 - 0x48u); g->edi = rd32(sp1 - 0x50u); g->esi = rd32(sp1 - 0x4cu); goto E_102d9d11;
    case 0x102d9d15u: in_edi = rd32(sp1 - 0x50u); in_esi = rd32(sp1 - 0x4cu); in_ebx = rd32(sp1 - 0x48u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp1 - 0x48u); g->edi = rd32(sp1 - 0x50u); g->esi = rd32(sp1 - 0x4cu); goto E_102d9d15;
    case 0x102d9d18u: in_edi = rd32(sp1 - 0x50u); in_esi = rd32(sp1 - 0x4cu); in_ebx = rd32(sp1 - 0x48u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp1 - 0x48u); g->edi = rd32(sp1 - 0x50u); g->esi = rd32(sp1 - 0x4cu); goto E_102d9d18;
    case 0x102d9d1bu: in_edi = rd32(sp1 - 0x50u); in_esi = rd32(sp1 - 0x4cu); in_ebx = rd32(sp1 - 0x48u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp1 - 0x48u); g->edi = rd32(sp1 - 0x50u); g->esi = rd32(sp1 - 0x4cu); goto E_102d9d1b;
    case 0x102d9d1cu: al_m54 = rd32(sp1 - 0x54u); in_edi = rd32(sp1 - 0x50u); in_esi = rd32(sp1 - 0x4cu); in_ebx = rd32(sp1 - 0x48u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp1 - 0x48u); g->edi = rd32(sp1 - 0x50u); g->esi = rd32(sp1 - 0x4cu); goto E_102d9d1c;
    case 0x102d9d1fu: in_edi = rd32(sp1 - 0x50u); in_esi = rd32(sp1 - 0x4cu); in_ebx = rd32(sp1 - 0x48u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp1 - 0x48u); g->edi = rd32(sp1 - 0x50u); g->esi = rd32(sp1 - 0x4cu); goto E_102d9d1f;
    case 0x102d9d2bu: ecx = g->ecx; edx = g->edx; goto E_102d9d2b;
    case 0x102d9d31u: ecx = g->ecx; edx = g->edx; al_m58 = rd32(sp1 - 0x58u); al_m54 = rd32(sp1 - 0x54u); al_m50 = rd32(sp1 - 0x50u); al_m4c = rd32(sp1 - 0x4cu); al_m48 = rd32(sp1 - 0x48u); loc_4 = rd32(sp0 - 4u); goto E_102d9d31;
    case 0x102d9d3bu: ecx = g->ecx; edx = g->edx; goto E_102d9d3b;
    case 0x102d9d40u: ecx = g->ecx; edx = g->edx; al_m54 = rd32(sp1 - 0x54u); al_m50 = rd32(sp1 - 0x50u); al_m4c = rd32(sp1 - 0x4cu); al_m48 = rd32(sp1 - 0x48u); loc_4 = rd32(sp0 - 4u); goto E_102d9d40;
    case 0x102d9d4bu: ecx = g->ecx; edx = g->edx; al_m50 = rd32(sp1 - 0x50u); al_m4c = rd32(sp1 - 0x4cu); al_m48 = rd32(sp1 - 0x48u); loc_4 = rd32(sp0 - 4u); goto E_102d9d4b;
    case 0x102d9d52u: ecx = g->ecx; edx = g->edx; al_m50 = rd32(sp1 - 0x50u); al_m4c = rd32(sp1 - 0x4cu); al_m48 = rd32(sp1 - 0x48u); loc_4 = rd32(sp0 - 4u); goto E_102d9d52;
    case 0x102d9d5au: ecx = g->ecx; edx = g->edx; al_m50 = rd32(sp1 - 0x50u); al_m4c = rd32(sp1 - 0x4cu); al_m48 = rd32(sp1 - 0x48u); loc_4 = rd32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102d9d5a;
    case 0x102d9d60u: ecx = g->ecx; edx = g->edx; al_m50 = rd32(sp1 - 0x50u); al_m4c = rd32(sp1 - 0x4cu); al_m48 = rd32(sp1 - 0x48u); loc_4 = rd32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102d9d60;
    case 0x102d9d6fu: edx = g->edx; al_m50 = rd32(sp1 - 0x50u); al_m4c = rd32(sp1 - 0x4cu); al_m48 = rd32(sp1 - 0x48u); loc_4 = rd32(sp0 - 4u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_102d9d6f;
    case 0x102d9d75u: edx = g->edx; al_m50 = rd32(sp1 - 0x50u); al_m4c = rd32(sp1 - 0x4cu); al_m48 = rd32(sp1 - 0x48u); loc_4 = rd32(sp0 - 4u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_102d9d75;
    case 0x102d9d8eu: edx = g->edx; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102d9d8e;
    case 0x102d9d94u: edx = g->edx; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102d9d94;
    case 0x102d9da1u: edx = g->edx; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_102d9da1;
    case 0x102d9da7u: edx = g->edx; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_102d9da7;
    case 0x102d9dcfu: ecx = g->ecx; edx = g->edx; al_m50 = rd32(sp1 - 0x50u); al_m4c = rd32(sp1 - 0x4cu); al_m48 = rd32(sp1 - 0x48u); loc_4 = rd32(sp0 - 4u); goto E_102d9dcf;
    case 0x102d9ddau: ecx = g->ecx; edx = g->edx; al_m58 = rd32(sp1 - 0x58u); al_m54 = rd32(sp1 - 0x54u); al_m50 = rd32(sp1 - 0x50u); al_m4c = rd32(sp1 - 0x4cu); al_m48 = rd32(sp1 - 0x48u); loc_4 = rd32(sp0 - 4u); goto E_102d9dda;
    case 0x102d9de0u: ecx = g->ecx; edx = g->edx; goto E_102d9de0;
    default: break;
    }
#endif

    COW_AT(102d9c65)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp1 - 0x48u, in_ebx);
    wr32(sp1 - 0x4cu, in_esi);
    wr32(sp1 - 0x50u, in_edi);
    if ((((arg6 != 0u) << 1u | arg5 != 0u) << 1u | arg4 != 0u) > 7u)
    {
        ecx = arg6;
        edx = arg4 != 0u;
        loc_4 = in_ebp;
        al_m48 = in_ebx;
        al_m4c = in_esi;
        al_m50 = in_edi;
        goto L_102d9d4b;
    }
    COW_AT(102d9ca2)
    t1 = rd32(COW_IMG(0x102d9debu) + (((arg6 != 0u) << 1u | arg5 != 0u) << 1u | arg4 != 0u) * 4u);
    switch (t1 - RD)
    {
    case 0x102d9ca9u: goto L_102d9ca9;
    case 0x102d9d0bu: goto L_102d9d0b;
    case 0x102d9d0eu: goto L_102d9d0e;
    case 0x102d9d11u: goto L_102d9d11;
    case 0x102d9d15u: goto L_102d9d15;
    case 0x102d9d18u: goto L_102d9d18;
    case 0x102d9d1bu: goto L_102d9d1b;
    case 0x102d9d1fu: goto L_102d9d1f;
    default: rt_fatal(g, COW_IMG(0x102d9ca2u), "switch");
    }
    return 0;
L_102d9ca9: ;
    COW_AT(102d9ca9)
    wrf32(sp1 - 8u, (float)(double)(float)0.0);
    wrf32(sp1 - 0xcu, (float)(double)(float)0.0);
    wrf32(sp1 - 0x10u, (float)(double)(float)0.0);
    wrf32(sp1 - 0x14u, (float)(double)(float)0.0);
    wrf32(sp1 - 0x1cu, (float)(double)(float)0.0);
    wrf32(sp1 - 0x20u, (float)(double)(float)0.0);
    wrf32(sp1 - 0x24u, (float)(double)(float)0.0);
    wrf32(sp1 - 0x28u, (float)(double)(float)0.0);
    wrf32(sp1 - 0x30u, (float)(double)(float)0.0);
    wrf32(sp1 - 0x34u, (float)(double)(float)0.0);
    wrf32(sp1 - 0x38u, (float)(double)(float)0.0);
    wrf32(sp1 - 0x3cu, (float)(double)(float)0.0);
    wrf32(sp1 - 4u, (float)(double)(float)1.0);
    wrf32(sp1 - 0x18u, (float)(double)(float)1.0);
    wrf32(sp1 - 0x2cu, (float)(double)(float)1.0);
    wrf32(sp1 - 0x40u, (float)(double)(float)1.0);
    ecx = arg6;
    edx = arg4 != 0u;
    loc_4 = in_ebp;
    al_m48 = in_ebx;
    al_m4c = in_esi;
    al_m50 = in_edi;
L_102d9d4b: ;
    COW_AT(102d9d4b)
    if (arg3 == 0u)
    {
    COW_AT(102d9dcf)
        wr32(sp1 - 0x54u, sp1 - 0x40u);
        wr32(sp1 - 0x58u, arg2);
        al_m54 = sp1 - 0x40u;
        al_m58 = arg2;
    }
    else
    {
    COW_AT(102d9d52)
        if ((int32_t)rd32(arg3) >= 0)
        {
            x0 = (double)(int32_t)rd32(arg3);
        }
        else
        {
            x0 = (double)(int32_t)rd32(arg3);
    COW_AT(102d9d5a)
            x0 = fr(g, x0 + (double)rdf32(COW_IMG(0x10345da4u)));
        }
    COW_AT(102d9d60)
        if ((int32_t)rd32(arg3 + 8u) >= 0)
        {
            x1 = (double)(int32_t)rd32(arg3 + 8u);
            x0 = fr(g, (double)rdf32(arg2) - x0);
        }
        else
        {
            x1 = (double)(int32_t)rd32(arg3 + 8u);
            x0 = fr(g, (double)rdf32(arg2) - x0);
    COW_AT(102d9d6f)
            x1 = fr(g, x1 + (double)rdf32(COW_IMG(0x10345da4u)));
        }
    COW_AT(102d9d75)
        d8 = fr(g, x0 / x1);
        d9 = fr(g, fr(g, d8 + d8) - (double)rdf32(COW_IMG(0x1032961cu)));
        wrf32(arg1, (float)d9);
        if ((int32_t)rd32(arg3 + 4u) >= 0)
        {
            x0 = (double)(int32_t)rd32(arg3 + 4u);
        }
        else
        {
            x0 = (double)(int32_t)rd32(arg3 + 4u);
    COW_AT(102d9d8e)
            x0 = fr(g, x0 + (double)rdf32(COW_IMG(0x10345da4u)));
        }
    COW_AT(102d9d94)
        if ((int32_t)rd32(arg3 + 0xcu) >= 0)
        {
            edx = rd32(arg3 + 0xcu);
            x1 = (double)(int32_t)rd32(arg3 + 0xcu);
            x0 = fr(g, (double)rdf32(arg2 + 4u) - x0);
        }
        else
        {
            edx = rd32(arg3 + 0xcu);
            x1 = (double)(int32_t)rd32(arg3 + 0xcu);
            x0 = fr(g, (double)rdf32(arg2 + 4u) - x0);
    COW_AT(102d9da1)
            x1 = fr(g, x1 + (double)rdf32(COW_IMG(0x10345da4u)));
        }
    COW_AT(102d9da7)
        d10 = fr(g, x0 / x1);
        d11 = fr(g, fr(g, d10 + d10) - (double)rdf32(COW_IMG(0x1032961cu)));
        wrf32(arg1 + 4u, (float)-d11);
        d12 = fr(g, (double)rdf32(arg3 + 0x14u) - (double)rdf32(arg3 + 0x10u));
        d13 = fr(g, (double)rdf32(arg2 + 8u) - (double)rdf32(arg3 + 0x10u));
        wr32(sp1 - 0x54u, sp1 - 0x40u);
        wr32(sp1 - 0x58u, arg1);
        wrf32(arg1 + 8u, (float)fr(g, d13 / d12));
        ecx = arg2;
        loc_4 = rd32(sp0 - 4u);
        al_m48 = rd32(sp1 - 0x48u);
        al_m4c = rd32(sp1 - 0x4cu);
        al_m50 = rd32(sp1 - 0x50u);
        al_m54 = rd32(sp1 - 0x54u);
        al_m58 = rd32(sp1 - 0x58u);
    }
    COW_AT(102d9dda)
    wr32(sp1 - 0x5cu, arg1);
    g->edx = edx;
    g->esp = sp1 - 0x50u;
    cow_thiscall(g, COW_IMG(0x102d67f1u), ecx, 3, arg1, al_m58, al_m54);
    t14 = g->edx;
    edx = t14;
    COW_AT(102d9de0)
    g->ebx = rd32(sp1 - 0x48u);
    g->esi = rd32(sp1 - 0x4cu);
    g->edi = rd32(sp1 - 0x50u);
    g->ebp = rd32(sp0 - 4u);
    g->edx = edx;
    return arg1;
L_102d9d0b: ;
    COW_AT(102d9d0b)
    wr32(sp1 - 0x54u, arg4);
    ecx = arg6;
    edx = arg4 != 0u;
    loc_4 = in_ebp;
    al_m48 = in_ebx;
    al_m4c = in_esi;
    al_m50 = in_edi;
    al_m54 = arg4;
L_102d9d40: ;
    COW_AT(102d9d40)
    wr32(sp1 - 0x58u, 0u);
    wr32(sp1 - 0x5cu, sp1 - 0x40u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x50u;
    cow_stdcall(g, COW_IMG(0x102d7455u), 3, sp1 - 0x40u, 0u, al_m54);
    t6 = g->ecx;
    t7 = g->edx;
    ecx = t6;
    edx = t7;
    loc_4 = rd32(sp0 - 4u);
    al_m48 = rd32(sp1 - 0x48u);
    al_m4c = rd32(sp1 - 0x4cu);
    al_m50 = rd32(sp1 - 0x50u);
    goto L_102d9d4b;
L_102d9d0e: ;
    COW_AT(102d9d0e)
    wr32(sp1 - 0x54u, arg5);
    ecx = arg6;
    edx = arg4 != 0u;
    loc_4 = in_ebp;
    al_m48 = in_ebx;
    al_m4c = in_esi;
    al_m50 = in_edi;
    al_m54 = arg5;
    goto L_102d9d40;
L_102d9d11: ;
    COW_AT(102d9d11)
    wr32(sp1 - 0x54u, arg4);
    wr32(sp1 - 0x58u, arg5);
    ecx = arg6;
    edx = arg4 != 0u;
    al_m54 = arg4;
    al_m58 = arg5;
    loc_4 = in_ebp;
    al_m48 = in_ebx;
    al_m4c = in_esi;
    al_m50 = in_edi;
L_102d9d31: ;
    COW_AT(102d9d31)
    wr32(sp1 - 0x5cu, sp1 - 0x40u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x50u;
    cow_stdcall(g, COW_IMG(0x102d6f23u), 3, sp1 - 0x40u, al_m58, al_m54);
    t4 = g->ecx;
    t5 = g->edx;
    ecx = t4;
    edx = t5;
    COW_AT(102d9d3b)
    wr32(sp1 - 0x54u, sp1 - 0x40u);
    loc_4 = rd32(sp0 - 4u);
    al_m48 = rd32(sp1 - 0x48u);
    al_m4c = rd32(sp1 - 0x4cu);
    al_m50 = rd32(sp1 - 0x50u);
    al_m54 = sp1 - 0x40u;
    goto L_102d9d40;
L_102d9d15: ;
    COW_AT(102d9d15)
    wr32(sp1 - 0x54u, arg6);
    ecx = arg6;
    edx = arg4 != 0u;
    loc_4 = in_ebp;
    al_m48 = in_ebx;
    al_m4c = in_esi;
    al_m50 = in_edi;
    al_m54 = arg6;
    goto L_102d9d40;
L_102d9d18: ;
    COW_AT(102d9d18)
    wr32(sp1 - 0x54u, arg4);
    al_m54 = arg4;
L_102d9d1c: ;
    COW_AT(102d9d1c)
    wr32(sp1 - 0x58u, arg6);
    ecx = arg6;
    edx = arg4 != 0u;
    al_m58 = arg6;
    loc_4 = in_ebp;
    al_m48 = in_ebx;
    al_m4c = in_esi;
    al_m50 = in_edi;
    goto L_102d9d31;
L_102d9d1b: ;
    COW_AT(102d9d1b)
    wr32(sp1 - 0x54u, arg5);
    al_m54 = arg5;
    goto L_102d9d1c;
L_102d9d1f: ;
    COW_AT(102d9d1f)
    wr32(sp1 - 0x54u, arg5);
    wr32(sp1 - 0x58u, arg6);
    wr32(sp1 - 0x5cu, sp1 - 0x40u);
    g->ecx = arg6;
    g->edx = arg4 != 0u;
    g->esp = sp1 - 0x50u;
    cow_stdcall(g, COW_IMG(0x102d6f23u), 3, sp1 - 0x40u, arg6, arg5);
    t2 = g->ecx;
    t3 = g->edx;
    ecx = t2;
    edx = t3;
    COW_AT(102d9d2b)
    wr32(sp1 - 0x54u, arg4);
    wr32(sp1 - 0x58u, sp1 - 0x40u);
    al_m54 = arg4;
    al_m58 = sp1 - 0x40u;
    loc_4 = rd32(sp0 - 4u);
    al_m48 = rd32(sp1 - 0x48u);
    al_m4c = rd32(sp1 - 0x4cu);
    al_m50 = rd32(sp1 - 0x50u);
    goto L_102d9d31;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102d9c65(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    const uint32_t sp1 = (sp0 - 0x4u) & 0xfffffff0u;
    switch (at)
    {
    case 0x102d9ca2u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        in_edi = rd32(sp1 - 0x50u);
        in_esi = rd32(sp1 - 0x4cu);
        in_ebx = rd32(sp1 - 0x48u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x50u;
        g->eax = ((arg6 != 0u) << 1u | arg5 != 0u) << 1u | arg4 != 0u;
        g->ecx = arg6;
        g->edx = arg4 != 0u;
        g->ebx = arg4;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x102d9ca9u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        in_edi = rd32(sp1 - 0x50u);
        in_esi = rd32(sp1 - 0x4cu);
        in_ebx = rd32(sp1 - 0x48u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x50u;
        g->ecx = arg6;
        g->edx = arg4 != 0u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102d9d0bu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        in_edi = rd32(sp1 - 0x50u);
        in_esi = rd32(sp1 - 0x4cu);
        in_ebx = rd32(sp1 - 0x48u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x50u;
        g->ecx = arg6;
        g->edx = arg4 != 0u;
        g->ebx = arg4;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102d9d0eu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        in_edi = rd32(sp1 - 0x50u);
        in_esi = rd32(sp1 - 0x4cu);
        in_ebx = rd32(sp1 - 0x48u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x50u;
        g->ecx = arg6;
        g->edx = arg4 != 0u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x102d9d11u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        in_edi = rd32(sp1 - 0x50u);
        in_esi = rd32(sp1 - 0x4cu);
        in_ebx = rd32(sp1 - 0x48u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x50u;
        g->ecx = arg6;
        g->edx = arg4 != 0u;
        g->ebx = arg4;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x102d9d15u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        in_edi = rd32(sp1 - 0x50u);
        in_esi = rd32(sp1 - 0x4cu);
        in_ebx = rd32(sp1 - 0x48u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x50u;
        g->ecx = arg6;
        g->edx = arg4 != 0u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102d9d18u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        in_edi = rd32(sp1 - 0x50u);
        in_esi = rd32(sp1 - 0x4cu);
        in_ebx = rd32(sp1 - 0x48u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x50u;
        g->ecx = arg6;
        g->edx = arg4 != 0u;
        g->ebx = arg4;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102d9d1bu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        in_edi = rd32(sp1 - 0x50u);
        in_esi = rd32(sp1 - 0x4cu);
        in_ebx = rd32(sp1 - 0x48u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x50u;
        g->ecx = arg6;
        g->edx = arg4 != 0u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x102d9d1cu:
    {
        uint32_t al_m54;
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        al_m54 = rd32(sp1 - 0x54u);
        in_edi = rd32(sp1 - 0x50u);
        in_esi = rd32(sp1 - 0x4cu);
        in_ebx = rd32(sp1 - 0x48u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x54u;
        g->ecx = arg6;
        g->edx = arg4 != 0u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102d9d1fu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        in_edi = rd32(sp1 - 0x50u);
        in_esi = rd32(sp1 - 0x4cu);
        in_ebx = rd32(sp1 - 0x48u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x50u;
        g->ecx = arg6;
        g->edx = arg4 != 0u;
        g->ebx = arg4;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x102d9d2bu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t ecx;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x50u;
        g->ebx = arg4;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102d9d31u:
    {
        uint32_t al_m48;
        uint32_t al_m4c;
        uint32_t al_m50;
        uint32_t al_m54;
        uint32_t al_m58;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        ecx = g->ecx;
        edx = g->edx;
        al_m58 = rd32(sp1 - 0x58u);
        al_m54 = rd32(sp1 - 0x54u);
        al_m50 = rd32(sp1 - 0x50u);
        al_m4c = rd32(sp1 - 0x4cu);
        al_m48 = rd32(sp1 - 0x48u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp1 - 0x58u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102d9d3bu:
    {
        uint32_t ecx;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x50u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102d9d40u:
    {
        uint32_t al_m48;
        uint32_t al_m4c;
        uint32_t al_m50;
        uint32_t al_m54;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        ecx = g->ecx;
        edx = g->edx;
        al_m54 = rd32(sp1 - 0x54u);
        al_m50 = rd32(sp1 - 0x50u);
        al_m4c = rd32(sp1 - 0x4cu);
        al_m48 = rd32(sp1 - 0x48u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp1 - 0x54u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102d9d4bu:
    {
        uint32_t al_m48;
        uint32_t al_m4c;
        uint32_t al_m50;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        ecx = g->ecx;
        edx = g->edx;
        al_m50 = rd32(sp1 - 0x50u);
        al_m4c = rd32(sp1 - 0x4cu);
        al_m48 = rd32(sp1 - 0x48u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp1 - 0x50u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102d9d52u:
    {
        uint32_t al_m48;
        uint32_t al_m4c;
        uint32_t al_m50;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        ecx = g->ecx;
        edx = g->edx;
        al_m50 = rd32(sp1 - 0x50u);
        al_m4c = rd32(sp1 - 0x4cu);
        al_m48 = rd32(sp1 - 0x48u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp1 - 0x50u;
        g->eax = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d9d5au:
    {
        uint32_t al_m48;
        uint32_t al_m4c;
        uint32_t al_m50;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        double x0;
        ecx = g->ecx;
        edx = g->edx;
        al_m50 = rd32(sp1 - 0x50u);
        al_m4c = rd32(sp1 - 0x4cu);
        al_m48 = rd32(sp1 - 0x48u);
        loc_4 = rd32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp1 - 0x50u;
        g->eax = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d9d60u:
    {
        uint32_t al_m48;
        uint32_t al_m4c;
        uint32_t al_m50;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        double x0;
        ecx = g->ecx;
        edx = g->edx;
        al_m50 = rd32(sp1 - 0x50u);
        al_m4c = rd32(sp1 - 0x4cu);
        al_m48 = rd32(sp1 - 0x48u);
        loc_4 = rd32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp1 - 0x50u;
        g->eax = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d9d6fu:
    {
        uint32_t al_m48;
        uint32_t al_m4c;
        uint32_t al_m50;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t edx;
        uint32_t loc_4;
        double x0;
        double x1;
        edx = g->edx;
        al_m50 = rd32(sp1 - 0x50u);
        al_m4c = rd32(sp1 - 0x4cu);
        al_m48 = rd32(sp1 - 0x48u);
        loc_4 = rd32(sp0 - 4u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x50u;
        g->eax = arg3;
        g->ecx = arg2;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d9d75u:
    {
        uint32_t al_m48;
        uint32_t al_m4c;
        uint32_t al_m50;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t edx;
        uint32_t loc_4;
        double x0;
        double x1;
        edx = g->edx;
        al_m50 = rd32(sp1 - 0x50u);
        al_m4c = rd32(sp1 - 0x4cu);
        al_m48 = rd32(sp1 - 0x48u);
        loc_4 = rd32(sp0 - 4u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x50u;
        g->eax = arg3;
        g->ecx = arg2;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d9d8eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t edx;
        double x0;
        edx = g->edx;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp1 - 0x50u;
        g->eax = arg3;
        g->ecx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102d9d94u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t edx;
        double x0;
        edx = g->edx;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp1 - 0x50u;
        g->eax = arg3;
        g->ecx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102d9da1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t edx;
        double x0;
        double x1;
        edx = g->edx;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x50u;
        g->eax = arg3;
        g->ecx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102d9da7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t edx;
        double x0;
        double x1;
        edx = g->edx;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp1 - 0x50u;
        g->eax = arg3;
        g->ecx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102d9dcfu:
    {
        uint32_t al_m48;
        uint32_t al_m4c;
        uint32_t al_m50;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        ecx = g->ecx;
        edx = g->edx;
        al_m50 = rd32(sp1 - 0x50u);
        al_m4c = rd32(sp1 - 0x4cu);
        al_m48 = rd32(sp1 - 0x48u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp1 - 0x50u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d9ddau:
    {
        uint32_t al_m48;
        uint32_t al_m4c;
        uint32_t al_m50;
        uint32_t al_m54;
        uint32_t al_m58;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        ecx = g->ecx;
        edx = g->edx;
        al_m58 = rd32(sp1 - 0x58u);
        al_m54 = rd32(sp1 - 0x54u);
        al_m50 = rd32(sp1 - 0x50u);
        al_m4c = rd32(sp1 - 0x4cu);
        al_m48 = rd32(sp1 - 0x48u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp1 - 0x58u;
        g->eax = sp1 - 0x40u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102d9de0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0x50u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102d9c65(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102d9c65(g);
    g->esp = sp0;
    rt_return(g, r, 24u);
}
/* COW_ADAPTER END */
