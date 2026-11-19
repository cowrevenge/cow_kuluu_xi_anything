/* f_0x102d9ad8 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=6 */
uint32_t cow_fn_102d9ad8(Guest* g)
{
    uint32_t al_m54;
    uint32_t al_m58;
    double d8;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
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
    case 0x102d9b17u: in_edi = rd32(sp1 - 0x50u); in_esi = rd32(sp1 - 0x4cu); in_ebx = rd32(sp1 - 0x48u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp1 - 0x48u); g->edi = rd32(sp1 - 0x50u); g->esi = rd32(sp1 - 0x4cu); goto E_102d9b17;
    case 0x102d9b1eu: in_edi = rd32(sp1 - 0x50u); in_esi = rd32(sp1 - 0x4cu); in_ebx = rd32(sp1 - 0x48u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp1 - 0x48u); g->edi = rd32(sp1 - 0x50u); g->esi = rd32(sp1 - 0x4cu); goto E_102d9b1e;
    case 0x102d9b80u: in_edi = rd32(sp1 - 0x50u); in_esi = rd32(sp1 - 0x4cu); in_ebx = rd32(sp1 - 0x48u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp1 - 0x48u); g->edi = rd32(sp1 - 0x50u); g->esi = rd32(sp1 - 0x4cu); goto E_102d9b80;
    case 0x102d9b84u: in_edi = rd32(sp1 - 0x50u); in_esi = rd32(sp1 - 0x4cu); in_ebx = rd32(sp1 - 0x48u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp1 - 0x48u); g->edi = rd32(sp1 - 0x50u); g->esi = rd32(sp1 - 0x4cu); goto E_102d9b84;
    case 0x102d9b88u: eax = g->eax; in_edi = rd32(sp1 - 0x50u); in_esi = rd32(sp1 - 0x4cu); in_ebx = rd32(sp1 - 0x48u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp1 - 0x48u); g->edi = rd32(sp1 - 0x50u); g->esi = rd32(sp1 - 0x4cu); goto E_102d9b88;
    case 0x102d9b8cu: in_edi = rd32(sp1 - 0x50u); in_esi = rd32(sp1 - 0x4cu); in_ebx = rd32(sp1 - 0x48u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp1 - 0x48u); g->edi = rd32(sp1 - 0x50u); g->esi = rd32(sp1 - 0x4cu); goto E_102d9b8c;
    case 0x102d9b90u: eax = g->eax; in_edi = rd32(sp1 - 0x50u); in_esi = rd32(sp1 - 0x4cu); in_ebx = rd32(sp1 - 0x48u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp1 - 0x48u); g->edi = rd32(sp1 - 0x50u); g->esi = rd32(sp1 - 0x4cu); goto E_102d9b90;
    case 0x102d9b93u: eax = g->eax; in_edi = rd32(sp1 - 0x50u); in_esi = rd32(sp1 - 0x4cu); in_ebx = rd32(sp1 - 0x48u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp1 - 0x48u); g->edi = rd32(sp1 - 0x50u); g->esi = rd32(sp1 - 0x4cu); goto E_102d9b93;
    case 0x102d9b94u: eax = g->eax; al_m54 = rd32(sp1 - 0x54u); in_edi = rd32(sp1 - 0x50u); in_esi = rd32(sp1 - 0x4cu); in_ebx = rd32(sp1 - 0x48u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp1 - 0x48u); g->edi = rd32(sp1 - 0x50u); g->esi = rd32(sp1 - 0x4cu); goto E_102d9b94;
    case 0x102d9b97u: eax = g->eax; in_edi = rd32(sp1 - 0x50u); in_esi = rd32(sp1 - 0x4cu); in_ebx = rd32(sp1 - 0x48u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp1 - 0x48u); g->edi = rd32(sp1 - 0x50u); g->esi = rd32(sp1 - 0x4cu); goto E_102d9b97;
    case 0x102d9ba9u: eax = g->eax; ecx = g->ecx; edx = g->edx; al_m58 = rd32(sp1 - 0x58u); al_m54 = rd32(sp1 - 0x54u); in_edi = rd32(sp1 - 0x50u); in_esi = rd32(sp1 - 0x4cu); in_ebx = rd32(sp1 - 0x48u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp1 - 0x48u); g->edi = rd32(sp1 - 0x50u); g->esi = rd32(sp1 - 0x4cu); goto E_102d9ba9;
    case 0x102d9bb3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp1 - 0x50u); in_esi = rd32(sp1 - 0x4cu); in_ebx = rd32(sp1 - 0x48u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp1 - 0x48u); g->edi = rd32(sp1 - 0x50u); g->esi = rd32(sp1 - 0x4cu); goto E_102d9bb3;
    case 0x102d9bc7u: ecx = g->ecx; edx = g->edx; al_m58 = rd32(sp1 - 0x58u); goto E_102d9bc7;
    case 0x102d9bd9u: ecx = g->ecx; edx = g->edx; al_m58 = rd32(sp1 - 0x58u); x1 = ST(0); x0 = ST(1); goto E_102d9bd9;
    case 0x102d9bdfu: ecx = g->ecx; edx = g->edx; al_m58 = rd32(sp1 - 0x58u); x1 = ST(0); x0 = ST(1); goto E_102d9bdf;
    case 0x102d9befu: ecx = g->ecx; edx = g->edx; al_m58 = rd32(sp1 - 0x58u); x1 = ST(0); x0 = ST(1); goto E_102d9bef;
    case 0x102d9bf5u: ecx = g->ecx; edx = g->edx; al_m58 = rd32(sp1 - 0x58u); x1 = ST(0); x0 = ST(1); goto E_102d9bf5;
    case 0x102d9c08u: ecx = g->ecx; edx = g->edx; al_m58 = rd32(sp1 - 0x58u); x1 = ST(0); x0 = ST(1); goto E_102d9c08;
    case 0x102d9c0eu: ecx = g->ecx; edx = g->edx; al_m58 = rd32(sp1 - 0x58u); x1 = ST(0); x0 = ST(1); goto E_102d9c0e;
    case 0x102d9c20u: ecx = g->ecx; edx = g->edx; al_m58 = rd32(sp1 - 0x58u); x1 = ST(0); x0 = ST(1); goto E_102d9c20;
    case 0x102d9c26u: ecx = g->ecx; edx = g->edx; al_m58 = rd32(sp1 - 0x58u); x1 = ST(0); x0 = ST(1); goto E_102d9c26;
    case 0x102d9c3au: eax = g->eax; ecx = g->ecx; edx = g->edx; al_m58 = rd32(sp1 - 0x58u); goto E_102d9c3a;
    default: break;
    }
#endif

    COW_AT(102d9ad8)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp1 - 0x48u, in_ebx);
    wr32(sp1 - 0x4cu, in_esi);
    wr32(sp1 - 0x50u, in_edi);
    if ((((arg6 != 0u) << 1u | arg5 != 0u) << 1u | arg4 != 0u) > 7u)
    {
        eax = ((arg6 != 0u) << 1u | arg5 != 0u) << 1u | arg4 != 0u;
        ecx = arg6;
        edx = arg4 != 0u;
        esi = sp1 - 0x40u;
        goto L_102d9bb3;
    }
    COW_AT(102d9b17)
    t1 = rd32(COW_IMG(0x102d9c45u) + (((arg6 != 0u) << 1u | arg5 != 0u) << 1u | arg4 != 0u) * 4u);
    switch (t1 - RD)
    {
    case 0x102d9b1eu: goto L_102d9b1e;
    case 0x102d9b80u: goto L_102d9b80;
    case 0x102d9b84u: goto L_102d9b84;
    case 0x102d9b88u: goto L_102d9b88;
    case 0x102d9b8cu: goto L_102d9b8c;
    case 0x102d9b90u: goto L_102d9b90;
    case 0x102d9b93u: goto L_102d9b93;
    case 0x102d9b97u: goto L_102d9b97;
    default: rt_fatal(g, COW_IMG(0x102d9b17u), "switch");
    }
    return 0;
L_102d9b1e: ;
    COW_AT(102d9b1e)
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
    eax = ((arg6 != 0u) << 1u | arg5 != 0u) << 1u | arg4 != 0u;
    ecx = arg6;
    edx = arg4 != 0u;
    esi = sp1 - 0x40u;
L_102d9bb3: ;
    COW_AT(102d9bb3)
    wr32(sp1 - 0x54u, esi);
    wr32(sp1 - 0x58u, arg2);
    wr32(sp1 - 0x5cu, arg1);
    g->edx = edx;
    g->esp = sp1 - 0x50u;
    cow_stdcall(g, COW_IMG(0x102d67f1u), 3, arg1, arg2, esi);
    t7 = g->edx;
    if (arg3 == 0u)
    {
        edx = t7;
    }
    else
    {
        edx = t7;
    COW_AT(102d9bc7)
        if ((int32_t)rd32(arg3 + 8u) >= 0)
        {
            x1 = (double)(int32_t)rd32(arg3 + 8u);
            x0 = fr(g, (double)rdf32(arg1) + (double)rdf32(COW_IMG(0x1032961cu)));
        }
        else
        {
            x1 = (double)(int32_t)rd32(arg3 + 8u);
            x0 = fr(g, (double)rdf32(arg1) + (double)rdf32(COW_IMG(0x1032961cu)));
    COW_AT(102d9bd9)
            x1 = fr(g, x1 + (double)rdf32(COW_IMG(0x10345da4u)));
        }
    COW_AT(102d9bdf)
        if ((int32_t)rd32(arg3) >= 0)
        {
            x0 = fr(g, fr(g, x0 * x1) * (double)rdf32(COW_IMG(0x10329a08u)));
            x1 = (double)(int32_t)rd32(arg3);
        }
        else
        {
            x0 = fr(g, fr(g, x0 * x1) * (double)rdf32(COW_IMG(0x10329a08u)));
            x1 = (double)(int32_t)rd32(arg3);
    COW_AT(102d9bef)
            x1 = fr(g, x1 + (double)rdf32(COW_IMG(0x10345da4u)));
        }
    COW_AT(102d9bf5)
        wrf32(arg1, (float)fr(g, x0 + x1));
        if ((int32_t)rd32(arg3 + 0xcu) >= 0)
        {
            x1 = (double)(int32_t)rd32(arg3 + 0xcu);
            x0 = fr(g, 1.0 - (double)rdf32(arg1 + 4u));
        }
        else
        {
            x1 = (double)(int32_t)rd32(arg3 + 0xcu);
            x0 = fr(g, 1.0 - (double)rdf32(arg1 + 4u));
    COW_AT(102d9c08)
            x1 = fr(g, x1 + (double)rdf32(COW_IMG(0x10345da4u)));
        }
    COW_AT(102d9c0e)
        if ((int32_t)rd32(arg3 + 4u) >= 0)
        {
            x0 = fr(g, fr(g, x0 * x1) * (double)rdf32(COW_IMG(0x10329a08u)));
            x1 = (double)(int32_t)rd32(arg3 + 4u);
        }
        else
        {
            x0 = fr(g, fr(g, x0 * x1) * (double)rdf32(COW_IMG(0x10329a08u)));
            x1 = (double)(int32_t)rd32(arg3 + 4u);
    COW_AT(102d9c20)
            x1 = fr(g, x1 + (double)rdf32(COW_IMG(0x10345da4u)));
        }
    COW_AT(102d9c26)
        wrf32(arg1 + 4u, (float)fr(g, x0 + x1));
        d8 = fr(g, fr(g, fr(g, (double)rdf32(arg3 + 0x14u) - (double)rdf32(arg3 + 0x10u)) * (double)rdf32(arg1 + 8u)) + (double)rdf32(arg3 + 0x10u));
        wrf32(arg1 + 8u, (float)d8);
    }
    COW_AT(102d9c3a)
    g->ebx = rd32(sp1 - 0x48u);
    g->esi = rd32(sp1 - 0x4cu);
    g->edi = rd32(sp1 - 0x50u);
    g->ebp = rd32(sp0 - 4u);
    g->edx = edx;
    return arg1;
L_102d9b80: ;
    COW_AT(102d9b80)
    eax = ((arg6 != 0u) << 1u | arg5 != 0u) << 1u | arg4 != 0u;
    ecx = arg6;
    edx = arg4 != 0u;
    esi = arg4;
    goto L_102d9bb3;
L_102d9b84: ;
    COW_AT(102d9b84)
    eax = ((arg6 != 0u) << 1u | arg5 != 0u) << 1u | arg4 != 0u;
    ecx = arg6;
    edx = arg4 != 0u;
    esi = arg5;
    goto L_102d9bb3;
L_102d9b88: ;
    COW_AT(102d9b88)
    wr32(sp1 - 0x54u, arg4);
    wr32(sp1 - 0x58u, arg5);
    ecx = arg6;
    edx = arg4 != 0u;
    al_m54 = arg4;
    al_m58 = arg5;
L_102d9ba9: ;
    COW_AT(102d9ba9)
    wr32(sp1 - 0x5cu, sp1 - 0x40u);
    g->eax = sp1 - 0x40u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x50u;
    t4 = cow_stdcall(g, COW_IMG(0x102d6f23u), 3, sp1 - 0x40u, al_m58, al_m54);
    t5 = g->ecx;
    t6 = g->edx;
    eax = t4;
    ecx = t5;
    edx = t6;
    esi = sp1 - 0x40u;
    goto L_102d9bb3;
L_102d9b8c: ;
    COW_AT(102d9b8c)
    eax = ((arg6 != 0u) << 1u | arg5 != 0u) << 1u | arg4 != 0u;
    ecx = arg6;
    edx = arg4 != 0u;
    esi = arg6;
    goto L_102d9bb3;
L_102d9b90: ;
    COW_AT(102d9b90)
    wr32(sp1 - 0x54u, arg4);
    al_m54 = arg4;
L_102d9b94: ;
    COW_AT(102d9b94)
    wr32(sp1 - 0x58u, arg6);
    ecx = arg6;
    edx = arg4 != 0u;
    al_m58 = arg6;
    goto L_102d9ba9;
L_102d9b93: ;
    COW_AT(102d9b93)
    wr32(sp1 - 0x54u, arg5);
    al_m54 = arg5;
    goto L_102d9b94;
L_102d9b97: ;
    COW_AT(102d9b97)
    wr32(sp1 - 0x54u, arg5);
    wr32(sp1 - 0x58u, arg6);
    wr32(sp1 - 0x5cu, sp1 - 0x40u);
    g->ecx = arg6;
    g->edx = arg4 != 0u;
    g->esp = sp1 - 0x50u;
    cow_stdcall(g, COW_IMG(0x102d6f23u), 3, sp1 - 0x40u, arg6, arg5);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp1 - 0x54u, arg4);
    wr32(sp1 - 0x58u, sp1 - 0x40u);
    ecx = t2;
    edx = t3;
    al_m54 = arg4;
    al_m58 = sp1 - 0x40u;
    goto L_102d9ba9;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102d9ad8(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    const uint32_t sp1 = (sp0 - 0x4u) & 0xfffffff0u;
    switch (at)
    {
    case 0x102d9b17u:
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
        g->esi = sp1 - 0x40u;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x102d9b1eu:
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
        g->ebp = sp0 - 4u;
        g->esi = sp1 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x102d9b80u:
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
        g->esi = sp1 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x102d9b84u:
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
        g->ebp = sp0 - 4u;
        g->esi = sp1 - 0x40u;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x102d9b88u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        in_edi = rd32(sp1 - 0x50u);
        in_esi = rd32(sp1 - 0x4cu);
        in_ebx = rd32(sp1 - 0x48u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x50u;
        g->ecx = arg6;
        g->edx = arg4 != 0u;
        g->ebx = arg4;
        g->ebp = sp0 - 4u;
        g->esi = sp1 - 0x40u;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x102d9b8cu:
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
        g->ebp = sp0 - 4u;
        g->esi = sp1 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x102d9b90u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        in_edi = rd32(sp1 - 0x50u);
        in_esi = rd32(sp1 - 0x4cu);
        in_ebx = rd32(sp1 - 0x48u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x50u;
        g->ecx = arg6;
        g->edx = arg4 != 0u;
        g->ebx = arg4;
        g->ebp = sp0 - 4u;
        g->esi = sp1 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x102d9b93u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        in_edi = rd32(sp1 - 0x50u);
        in_esi = rd32(sp1 - 0x4cu);
        in_ebx = rd32(sp1 - 0x48u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x50u;
        g->ecx = arg6;
        g->edx = arg4 != 0u;
        g->ebp = sp0 - 4u;
        g->esi = sp1 - 0x40u;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x102d9b94u:
    {
        uint32_t al_m54;
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        al_m54 = rd32(sp1 - 0x54u);
        in_edi = rd32(sp1 - 0x50u);
        in_esi = rd32(sp1 - 0x4cu);
        in_ebx = rd32(sp1 - 0x48u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x54u;
        g->ecx = arg6;
        g->edx = arg4 != 0u;
        g->ebp = sp0 - 4u;
        g->esi = sp1 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x102d9b97u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        in_edi = rd32(sp1 - 0x50u);
        in_esi = rd32(sp1 - 0x4cu);
        in_ebx = rd32(sp1 - 0x48u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x50u;
        g->ecx = arg6;
        g->edx = arg4 != 0u;
        g->ebx = arg4;
        g->ebp = sp0 - 4u;
        g->esi = sp1 - 0x40u;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x102d9ba9u:
    {
        uint32_t al_m54;
        uint32_t al_m58;
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
        al_m58 = rd32(sp1 - 0x58u);
        al_m54 = rd32(sp1 - 0x54u);
        in_edi = rd32(sp1 - 0x50u);
        in_esi = rd32(sp1 - 0x4cu);
        in_ebx = rd32(sp1 - 0x48u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x58u;
        g->ebp = sp0 - 4u;
        g->esi = sp1 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x102d9bb3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp1 - 0x50u);
        in_esi = rd32(sp1 - 0x4cu);
        in_ebx = rd32(sp1 - 0x48u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x50u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d9bc7u:
    {
        uint32_t al_m58;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ecx;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        al_m58 = rd32(sp1 - 0x58u);
        g->esp = sp1 - 0x50u;
        g->eax = arg3;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102d9bd9u:
    {
        uint32_t al_m58;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ecx;
        uint32_t edx;
        double x0;
        double x1;
        ecx = g->ecx;
        edx = g->edx;
        al_m58 = rd32(sp1 - 0x58u);
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp1 - 0x50u;
        g->eax = arg3;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102d9bdfu:
    {
        uint32_t al_m58;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ecx;
        uint32_t edx;
        double x0;
        double x1;
        ecx = g->ecx;
        edx = g->edx;
        al_m58 = rd32(sp1 - 0x58u);
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp1 - 0x50u;
        g->eax = arg3;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102d9befu:
    {
        uint32_t al_m58;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ecx;
        uint32_t edx;
        double x0;
        double x1;
        ecx = g->ecx;
        edx = g->edx;
        al_m58 = rd32(sp1 - 0x58u);
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp1 - 0x50u;
        g->eax = arg3;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102d9bf5u:
    {
        uint32_t al_m58;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ecx;
        uint32_t edx;
        double x0;
        double x1;
        ecx = g->ecx;
        edx = g->edx;
        al_m58 = rd32(sp1 - 0x58u);
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp1 - 0x50u;
        g->eax = arg3;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102d9c08u:
    {
        uint32_t al_m58;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ecx;
        uint32_t edx;
        double x0;
        double x1;
        ecx = g->ecx;
        edx = g->edx;
        al_m58 = rd32(sp1 - 0x58u);
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp1 - 0x50u;
        g->eax = arg3;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102d9c0eu:
    {
        uint32_t al_m58;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ecx;
        uint32_t edx;
        double x0;
        double x1;
        ecx = g->ecx;
        edx = g->edx;
        al_m58 = rd32(sp1 - 0x58u);
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp1 - 0x50u;
        g->eax = arg3;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102d9c20u:
    {
        uint32_t al_m58;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ecx;
        uint32_t edx;
        double x0;
        double x1;
        ecx = g->ecx;
        edx = g->edx;
        al_m58 = rd32(sp1 - 0x58u);
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp1 - 0x50u;
        g->eax = arg3;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102d9c26u:
    {
        uint32_t al_m58;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ecx;
        uint32_t edx;
        double x0;
        double x1;
        ecx = g->ecx;
        edx = g->edx;
        al_m58 = rd32(sp1 - 0x58u);
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp1 - 0x50u;
        g->eax = arg3;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102d9c3au:
    {
        uint32_t al_m58;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        al_m58 = rd32(sp1 - 0x58u);
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
void cow_adapter_102d9ad8(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102d9ad8(g);
    g->esp = sp0;
    rt_return(g, r, 24u);
}
/* COW_ADAPTER END */
