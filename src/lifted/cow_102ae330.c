/* f_0x102ae330 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
void cow_fn_102ae330(Guest* g)
{
    double d10;
    double d21;
    double d22;
    double d23;
    double d24;
    double d25;
    double d26;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_24;
    double loc_28_f;
    uint32_t loc_2c;
    uint32_t loc_34;
    uint32_t loc_38;
    uint32_t loc_3c;
    uint32_t loc_40;
    uint32_t loc_44;
    uint32_t loc_48;
    uint32_t loc_4c;
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
    uint32_t t2;
    uint32_t t20;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 112u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102ae397u: eax = g->eax; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x4cu); in_esi = rd32(sp0 - 0x48u); in_ebp = rd32(sp0 - 0x44u); in_ebx = rd32(sp0 - 0x40u); loc_28_f = rdf32(sp0 - 0x28u); g->ebp = rd32(sp0 - 0x44u); g->ebx = rd32(sp0 - 0x40u); g->edi = rd32(sp0 - 0x4cu); g->esi = rd32(sp0 - 0x48u); goto E_102ae397;
    case 0x102ae3afu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_102ae3af;
    case 0x102ae407u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102ae407;
    case 0x102ae45cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102ae45c;
    case 0x102ae482u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_102ae482;
    case 0x102ae492u: ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); goto E_102ae492;
    default: break;
    }
#endif

    COW_AT(102ae330)
    wr32(sp0 - 0x40u, in_ebx);
    wr32(sp0 - 0x44u, in_ebp);
    wr32(sp0 - 0x48u, in_esi);
    wr32(sp0 - 0x4cu, in_edi);
    t1 = rd32(sp0 + 4u);
    wr32(sp0 - 0x50u, t1);
    wr32(sp0 - 0x54u, arg4);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x4cu;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, arg4, t1);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x58u, t1);
    wr32(sp0 - 0x5cu, t1 + 0xcu);
    wr32(sp0 - 0x60u, arg5);
    g->eax = t1 + 0xcu;
    g->ecx = t2;
    g->edx = t3;
    g->esp = sp0 - 0x54u;
    t4 = cow_cdecl(g, COW_IMG(0x102749e0u), 3, arg5, t1 + 0xcu, t1);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0x64u, 0x40400000u);
    wr32(sp0 - 0x68u, arg5);
    wr32(sp0 - 0x6cu, arg5);
    g->edx = t6;
    g->esp = sp0 - 0x60u;
    cow_cdecl(g, COW_IMG(0x10274950u), 3, arg5, arg5, 0x40400000u);
    t7 = g->edx;
    wr32(sp0 - 0x38u, 1u);
    wr32(sp0 - 0x34u, arg2 - 3u);
    wr32(sp0 - 0x2cu, arg3 - 1u);
    d8 = (double)(float)fr(g, (double)(int32_t)(arg2 - 3u) / (double)(int32_t)(arg3 - 1u));
    wrf32(sp0 - 0x28u, (float)d8);
    if ((int32_t)(arg3 - 1u) <= 1)
    {
        edi = t1;
        loc_40 = in_ebx;
        loc_44 = in_ebp;
        loc_48 = in_esi;
        loc_4c = in_edi;
    }
    else
    {
        edx = t7;
        loc_28_f = d8;
    COW_AT(102ae397)
        wr32(sp0 - 0x3cu, arg5 + 0xcu);
        wr32(sp0 - 0x24u, arg4 - arg5);
        eax = arg4 - arg5;
        ecx = arg3 - 1u;
        esi = arg4 + 0x14u;
        edi = arg5 + 0xcu;
        loc_40 = in_ebx;
        loc_44 = in_ebp;
        loc_48 = in_esi;
        loc_4c = in_edi;
        loc_38 = 1u;
        loc_34 = arg2 - 3u;
        loc_2c = arg3 - 1u;
        loc_3c = arg5 + 0xcu;
        loc_24 = arg4 - arg5;
L_102ae3af: ;
    COW_AT(102ae3af)
        d9 = (double)(float)fr(g, (double)(int32_t)loc_38 * loc_28_f);
        wrf32(sp0 - 0x30u, (float)d9);
        d10 = fr(g, (double)(int32_t)loc_38 * loc_28_f);
        fpush(g, d10);
        g->esp = sp0 - 0x4cu;
        t11 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        t12 = rd32(sp0 - 0x34u);
        wr32(sp0 - 0x50u, t12);
        wr32(sp0 - 0x54u, t11);
        t13 = rd32(sp0 - 0x30u);
        wr32(sp0 - 0x58u, t13);
        wr32(sp0 - 0x5cu, sp0 - 0x20u);
        wr32(sp0 - 0x60u, sp0 - 0x10u);
        g->edx = sp0 - 0x10u;
        cow_cdecl(g, COW_IMG(0x102ae4e0u), 5, sp0 - 0x10u, sp0 - 0x20u, t13, t11, t12);
        t14 = g->edx;
        t15 = rd32(sp0 - 0x24u) + rd32(sp0 - 0x3cu);
        wr32(sp0 - 0x64u, t15);
        g->eax = t15;
        g->ecx = rd32(sp0 - 0x3cu);
        t16 = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x60u;
        t17 = cow_cdecl(g, COW_IMG(0x10274660u), 1, t15);
        t18 = g->ecx;
        t19 = rd32(sp0 - 0x3cu);
        wr32(sp0 - 0x68u, t19);
        g->edx = t19;
        g->esp = sp0 - 0x64u;
        cow_cdecl(g, COW_IMG(0x10274660u), 1, t19);
        t20 = g->edx;
        eax = t11 * 0xcu + rd32(sp0 + 4u) + 8u;
        ecx = 0u;
        edx = t20;
L_102ae407: ;
    COW_AT(102ae407)
        d21 = fr(g, fr(g, (double)rdf32(ecx + sp0 - 0x20u) * (double)rdf32(eax - 8u)) + (double)rdf32(esi - 8u));
        wrf32(esi - 8u, (float)d21);
        d22 = fr(g, fr(g, (double)rdf32(ecx + sp0 - 0x20u) * (double)rdf32(eax - 4u)) + (double)rdf32(esi - 4u));
        wrf32(esi - 4u, (float)d22);
        d23 = fr(g, fr(g, (double)rdf32(eax) * (double)rdf32(ecx + sp0 - 0x20u)) + (double)rdf32(esi));
        wrf32(esi, (float)d23);
        d24 = fr(g, fr(g, (double)rdf32(ecx + sp0 - 0x10u) * (double)rdf32(eax - 8u)) + (double)rdf32(edi));
        wrf32(edi, (float)d24);
        d25 = fr(g, fr(g, (double)rdf32(ecx + sp0 - 0x10u) * (double)rdf32(eax - 4u)) + (double)rdf32(edi + 4u));
        wrf32(edi + 4u, (float)d25);
        d26 = fr(g, fr(g, (double)rdf32(eax) * (double)rdf32(ecx + sp0 - 0x10u)) + (double)rdf32(arg5 + esi - arg4));
        wrf32(arg5 + esi - arg4, (float)d26);
        if ((int32_t)(ecx + 4u) <= 12)
        {
            eax = eax + 0xcu;
            ecx = ecx + 4u;
            goto L_102ae407;
        }
    COW_AT(102ae45c)
        t27 = rd32(sp0 - 0x3cu) + 0xcu;
        wr32(sp0 - 0x3cu, t27);
        t28 = rd32(sp0 - 0x38u) + 1u;
        t29 = rd32(sp0 - 0x38u);
        wr32(sp0 - 0x38u, t28);
        if ((int32_t)(t29 + 1u) < (int32_t)rd32(sp0 - 0x2cu))
        {
            eax = t28;
            ecx = rd32(sp0 - 0x2cu);
            esi = esi + 0xcu;
            edi = edi + 0xcu;
            loc_40 = rd32(sp0 - 0x40u);
            loc_44 = rd32(sp0 - 0x44u);
            loc_48 = rd32(sp0 - 0x48u);
            loc_4c = rd32(sp0 - 0x4cu);
            loc_38 = t28;
            loc_34 = rd32(sp0 - 0x34u);
            loc_2c = rd32(sp0 - 0x2cu);
            loc_28_f = (double)rdf32(sp0 - 0x28u);
            loc_3c = t27;
            loc_24 = rd32(sp0 - 0x24u);
            goto L_102ae3af;
        }
    COW_AT(102ae482)
        edi = rd32(sp0 + 4u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_4c = rd32(sp0 - 0x4cu);
    }
    COW_AT(102ae492)
    t30 = arg2 * 0xcu + edi - 0xcu;
    wr32(sp0 + 4u, t30);
    wr32(sp0 - 0x50u, t30);
    t31 = arg4 + arg3 * 0xcu - 0xcu;
    wr32(sp0 - 0x54u, t31);
    g->esp = sp0 - 0x4cu;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, t31, t30);
    t32 = arg2 * 0xcu + edi - 0x18u;
    wr32(sp0 - 0x58u, t32);
    t33 = rd32(sp0 + 4u);
    wr32(sp0 - 0x5cu, t33);
    t34 = arg5 + arg3 * 0xcu - 0xcu;
    wr32(sp0 - 0x60u, t34);
    g->eax = t32;
    g->ecx = t33;
    g->edx = arg2 * 3u - 6u;
    g->esp = sp0 - 0x54u;
    t35 = cow_cdecl(g, COW_IMG(0x102749e0u), 3, t34, t33, t32);
    t36 = g->ecx;
    t37 = g->edx;
    wr32(sp0 - 0x64u, 0x40400000u);
    wr32(sp0 - 0x68u, t34);
    wr32(sp0 - 0x6cu, t34);
    g->esp = sp0 - 0x60u;
    cow_cdecl(g, COW_IMG(0x10274950u), 3, t34, t34, 0x40400000u);
    g->ebx = rd32(sp0 - 0x40u);
    g->esi = rd32(sp0 - 0x48u);
    g->edi = rd32(sp0 - 0x4cu);
    g->ebp = rd32(sp0 - 0x44u);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102ae330(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102ae397u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_28_f;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x4cu);
        in_esi = rd32(sp0 - 0x48u);
        in_ebp = rd32(sp0 - 0x44u);
        in_ebx = rd32(sp0 - 0x40u);
        loc_28_f = rdf32(sp0 - 0x28u);
        g->esp = sp0 - 0x4cu;
        g->ecx = arg3 - 1u;
        g->ebp = arg5;
        g->esi = arg4;
        wr32(sp0 - 0x38u, 1u);
        wr32(sp0 - 0x34u, arg2 - 3u);
        wr32(sp0 - 0x2cu, arg3 - 1u);
        (void)sp0;
        return 1;
    }
    case 0x102ae3afu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        double loc_28_f;
        uint32_t loc_2c;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x4cu;
        g->ebx = arg5 - arg4;
        (void)sp0;
        return 1;
    }
    case 0x102ae407u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        g->ebx = arg5 - arg4;
        wr32(sp0 - 0x60u, sp0 - 0x10u);
        wr32(sp0 - 0x5cu, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x102ae45cu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        g->ebx = arg5 - arg4;
        wr32(sp0 - 0x60u, sp0 - 0x10u);
        wr32(sp0 - 0x5cu, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x102ae482u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x60u, sp0 - 0x10u);
        wr32(sp0 - 0x5cu, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x102ae492u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_28_f;
        uint32_t loc_2c;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        g->esp = sp0 - 0x4cu;
        g->eax = arg3;
        g->ebx = arg2;
        g->ebp = arg5;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102ae330(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102ae330(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
