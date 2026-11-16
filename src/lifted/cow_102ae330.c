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
    double d20;
    double d21;
    double d22;
    double d23;
    double d24;
    double d25;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    double loc_28_f;
    uint32_t loc_38;
    uint32_t loc_3c;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 112u);

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
    }
    else
    {
        edx = t7;
        loc_28_f = d8;
        wr32(sp0 - 0x3cu, arg5 + 0xcu);
        wr32(sp0 - 0x24u, arg4 - arg5);
        eax = arg4 - arg5;
        ecx = arg3 - 1u;
        esi = arg4 + 0x14u;
        edi = arg5 + 0xcu;
        loc_38 = 1u;
        loc_3c = arg5 + 0xcu;
L_102ae3af: ;
        d9 = (double)(float)fr(g, (double)(int32_t)loc_38 * loc_28_f);
        wrf32(sp0 - 0x30u, (float)d9);
        d10 = fr(g, (double)(int32_t)loc_38 * loc_28_f);
        fpush(g, d10);
        g->esp = sp0 - 0x4cu;
        t11 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        wr32(sp0 - 0x50u, arg2 - 3u);
        wr32(sp0 - 0x54u, t11);
        t12 = rd32(sp0 - 0x30u);
        wr32(sp0 - 0x58u, t12);
        wr32(sp0 - 0x5cu, sp0 - 0x20u);
        wr32(sp0 - 0x60u, sp0 - 0x10u);
        g->edx = sp0 - 0x10u;
        cow_cdecl(g, COW_IMG(0x102ae4e0u), 5, sp0 - 0x10u, sp0 - 0x20u, t12, t11, arg2 - 3u);
        t13 = g->edx;
        t14 = arg4 + rd32(sp0 - 0x3cu) - arg5;
        wr32(sp0 - 0x64u, t14);
        g->eax = t14;
        g->ecx = rd32(sp0 - 0x3cu);
        t15 = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x60u;
        t16 = cow_cdecl(g, COW_IMG(0x10274660u), 1, t14);
        t17 = g->ecx;
        t18 = rd32(sp0 - 0x3cu);
        wr32(sp0 - 0x68u, t18);
        g->edx = t18;
        g->esp = sp0 - 0x64u;
        cow_cdecl(g, COW_IMG(0x10274660u), 1, t18);
        t19 = g->edx;
        eax = t11 * 0xcu + rd32(sp0 + 4u) + 8u;
        ecx = 0u;
        edx = t19;
L_102ae407: ;
        d20 = fr(g, fr(g, (double)rdf32(ecx + sp0 - 0x20u) * (double)rdf32(eax - 8u)) + (double)rdf32(esi - 8u));
        wrf32(esi - 8u, (float)d20);
        d21 = fr(g, fr(g, (double)rdf32(ecx + sp0 - 0x20u) * (double)rdf32(eax - 4u)) + (double)rdf32(esi - 4u));
        wrf32(esi - 4u, (float)d21);
        d22 = fr(g, fr(g, (double)rdf32(eax) * (double)rdf32(ecx + sp0 - 0x20u)) + (double)rdf32(esi));
        wrf32(esi, (float)d22);
        d23 = fr(g, fr(g, (double)rdf32(ecx + sp0 - 0x10u) * (double)rdf32(eax - 8u)) + (double)rdf32(edi));
        wrf32(edi, (float)d23);
        d24 = fr(g, fr(g, (double)rdf32(ecx + sp0 - 0x10u) * (double)rdf32(eax - 4u)) + (double)rdf32(edi + 4u));
        wrf32(edi + 4u, (float)d24);
        d25 = fr(g, fr(g, (double)rdf32(eax) * (double)rdf32(ecx + sp0 - 0x10u)) + (double)rdf32(arg5 + esi - arg4));
        wrf32(arg5 + esi - arg4, (float)d25);
        if ((int32_t)(ecx + 4u) <= 12)
        {
            eax = eax + 0xcu;
            ecx = ecx + 4u;
            goto L_102ae407;
        }
        t26 = rd32(sp0 - 0x3cu) + 0xcu;
        wr32(sp0 - 0x3cu, t26);
        t27 = rd32(sp0 - 0x38u) + 1u;
        wr32(sp0 - 0x38u, t27);
        if ((int32_t)(rd32(sp0 - 0x38u) + 1u) < (int32_t)rd32(sp0 - 0x2cu))
        {
            eax = t27;
            ecx = rd32(sp0 - 0x2cu);
            esi = esi + 0xcu;
            edi = edi + 0xcu;
            loc_38 = t27;
            loc_3c = t26;
            goto L_102ae3af;
        }
        edi = rd32(sp0 + 4u);
    }
    t28 = arg2 * 0xcu + edi - 0xcu;
    wr32(sp0 + 4u, t28);
    wr32(sp0 - 0x50u, t28);
    t29 = arg4 + arg3 * 0xcu - 0xcu;
    wr32(sp0 - 0x54u, t29);
    g->esp = sp0 - 0x4cu;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, t29, t28);
    t30 = arg2 * 0xcu + edi - 0x18u;
    wr32(sp0 - 0x58u, t30);
    t31 = rd32(sp0 + 4u);
    wr32(sp0 - 0x5cu, t31);
    t32 = arg5 + arg3 * 0xcu - 0xcu;
    wr32(sp0 - 0x60u, t32);
    g->eax = t30;
    g->ecx = t31;
    g->edx = arg2 * 3u - 6u;
    g->esp = sp0 - 0x54u;
    t33 = cow_cdecl(g, COW_IMG(0x102749e0u), 3, t32, t31, t30);
    t34 = g->ecx;
    t35 = g->edx;
    wr32(sp0 - 0x64u, 0x40400000u);
    wr32(sp0 - 0x68u, t32);
    wr32(sp0 - 0x6cu, t32);
    g->esp = sp0 - 0x60u;
    cow_cdecl(g, COW_IMG(0x10274950u), 3, t32, t32, 0x40400000u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102ae330(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102ae330(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
