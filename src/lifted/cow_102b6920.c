/* f_0x102b6920 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
void cow_fn_102b6920(Guest* g)
{
    double d15;
    double d18;
    double d20;
    double d21;
    double d22;
    double d23;
    double d27;
    double d28;
    double d29;
    double d30;
    double d31;
    double d32;
    double d33;
    double d34;
    double d35;
    double d36;
    double d37;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_64;
    uint32_t loc_84;
    uint32_t loc_88;
    uint32_t loc_8c;
    uint32_t loc_90;
    uint32_t loc_94;
    uint32_t loc_98;
    uint32_t loc_9c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t16;
    uint32_t t17;
    uint32_t t19;
    uint32_t t2;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t3;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 212u);

    wr32(sp0 - 0x90u, in_ebx);
    wr32(sp0 - 0x94u, in_ebp);
    wr32(sp0 - 0x98u, in_esi);
    wr32(sp0 - 0x9cu, in_edi);
    if (arg3 != 0u)
    {
        ecx = rd32(arg3 + 0x54u);
    }
    else
    {
        ecx = 0u;
    }
    t1 = ecx + rd32(arg4) * 0xcu;
    wr32(sp0 - 0x54u, t1);
    if (arg3 != 0u)
    {
        edx = rd32(arg4) * 0xcu;
        esi = rd32(arg3 + 0x54u);
    }
    else
    {
        edx = rd32(arg4) * 0xcu;
        esi = 0u;
    }
    t2 = esi + rd32(arg4 + 4u) * 0xcu;
    wr32(sp0 - 0x50u, t2);
    if (arg3 != 0u)
    {
        ecx = rd32(arg4 + 4u) * 0xcu;
        esi = rd32(arg3 + 0x54u);
    }
    else
    {
        ecx = rd32(arg4 + 4u) * 0xcu;
        esi = 0u;
    }
    t3 = esi + rd32(arg4 + 8u) * 0xcu;
    wr32(sp0 - 0x4cu, t3);
    if (arg3 != 0u)
    {
        eax = rd32(arg4 + 8u) * 0xcu;
        esi = rd32(arg3 + 0x58u);
    }
    else
    {
        eax = rd32(arg4 + 8u) * 0xcu;
        esi = 0u;
    }
    wr32(sp0 - 0x60u, edx + esi);
    if (arg3 != 0u)
    {
        edx = rd32(arg3 + 0x58u);
    }
    else
    {
        edx = 0u;
    }
    wr32(sp0 - 0x5cu, ecx + edx);
    if (arg3 != 0u)
    {
        ecx = rd32(arg3 + 0x58u);
    }
    else
    {
        ecx = 0u;
    }
    wr32(sp0 - 0x58u, eax + ecx);
    wr32(sp0 - 0x88u, arg1);
    t4 = arg5 * 2u - arg1 + 1u;
    wr32(sp0 - 0x64u, t4);
    if ((int32_t)arg1 >= (int32_t)(arg5 * 2u - arg1 + 1u))
    {
        loc_90 = in_ebx;
        loc_94 = in_ebp;
        loc_98 = in_esi;
        loc_9c = in_edi;
    }
    else
    {
        loc_64 = t4;
        wr32(sp0 - 0x84u, arg1 * 0xcu);
        ebx = arg1;
        esi = arg1 * 0xcu;
        loc_90 = in_ebx;
        loc_94 = in_ebp;
        loc_98 = in_esi;
        loc_9c = in_edi;
        loc_88 = arg1;
        loc_84 = arg1 * 0xcu;
L_102b6a0c: ;
        wr32(sp0 - 0xa0u, arg5);
        wr32(sp0 - 0xa4u, ebx);
        wr32(sp0 - 0xa8u, arg1);
        wr32(sp0 - 0xacu, sp0 - 0x80u);
        g->ecx = arg5;
        g->edx = sp0 - 0x80u;
        g->esp = sp0 - 0x9cu;
        cow_cdecl(g, COW_IMG(0x102b6bb0u), 4, sp0 - 0x80u, arg1, ebx, arg5);
        t5 = g->ecx;
        t6 = g->edx;
        wr32(sp0 - 0xb0u, arg4);
        wr32(sp0 - 0xb4u, arg3);
        wr32(sp0 - 0xb8u, arg2);
        wr32(sp0 - 0xbcu, sp0 - 0x80u);
        wr32(sp0 - 0xc0u, ebx);
        g->esp = sp0 - 0x74u;
        cow_bridge_indirect(g, COW_IMG(0x102b6c00u), 0u, 19u, (const uint32_t[]){ebx, sp0 - 0x80u, arg2, arg3, arg4, sp0 - 0x80u, arg1, rd32(sp0 - 0xa4u), arg5, rd32(sp0 - 0x9cu), rd32(sp0 - 0x98u), rd32(sp0 - 0x94u), rd32(sp0 - 0x90u), rd32(sp0 - 0x8cu), rd32(sp0 - 0x88u), rd32(sp0 - 0x84u), rd32(sp0 - 0x80u), rd32(sp0 - 0x7cu), rd32(sp0 - 0x78u)}, g->ecx, g->edx, g->eax, 76u);
        if (arg2 != 0u)
        {
            eax = rd32(arg2 + 0x54u);
        }
        else
        {
            eax = 0u;
        }
        if (arg2 == 0u)
        {
            ebx = eax + esi;
            edi = arg2;
        }
        else
        {
            ebx = eax + esi;
            edi = rd32(arg2 + 0x58u);
        }
        wr32(sp0 - 0x8cu, sp0 - 0x24u);
        ecx = sp0 - 0x24u;
        esi = edi + esi;
        edi = 0u;
        loc_8c = sp0 - 0x24u;
L_102b6a59: ;
        wr32(sp0 - 0xa0u, ebx);
        t7 = rd32(edi + sp0 - 0x54u);
        wr32(sp0 - 0xa4u, t7);
        wr32(sp0 - 0xa8u, sp0 - 0x30u);
        g->eax = sp0 - 0x30u;
        g->edx = t7;
        g->esp = sp0 - 0x9cu;
        t8 = cow_cdecl(g, COW_IMG(0x102749e0u), 3, sp0 - 0x30u, t7, ebx);
        t9 = g->edx;
        wr32(sp0 - 0xacu, esi);
        t10 = rd32(edi + sp0 - 0x60u);
        wr32(sp0 - 0xb0u, t10);
        wr32(sp0 - 0xb4u, sp0 - 0x3cu);
        g->ecx = sp0 - 0x3cu;
        g->esp = sp0 - 0xa8u;
        cow_cdecl(g, COW_IMG(0x10274980u), 3, sp0 - 0x3cu, t10, esi);
        t11 = g->ecx;
        wr32(sp0 - 0xb8u, sp0 - 0x3cu);
        wr32(sp0 - 0xbcu, sp0 - 0x30u);
        g->eax = sp0 - 0x30u;
        g->ecx = t11;
        g->edx = sp0 - 0x3cu;
        g->esp = sp0 - 0xb4u;
        t12 = cow_cdecl(g, COW_IMG(0x10274890u), 2, sp0 - 0x30u, sp0 - 0x3cu);
        t13 = g->ecx;
        t14 = g->edx;
        d15 = cow_take_float(g);
        wrf32(sp0 - 0x68u, (float)(double)(float)d15);
        wr32(sp0 - 0xc0u, esi);
        wr32(sp0 - 0xc4u, t10);
        g->edx = t14;
        g->esp = sp0 - 0xbcu;
        t16 = cow_cdecl(g, COW_IMG(0x10274890u), 2, t10, esi);
        t17 = g->edx;
        d18 = cow_take_float(g);
        wr32(sp0 - 0xc8u, sp0 - 0x48u);
        wr32(sp0 - 0xccu, ebx);
        t19 = rd32(sp0 - 0x8cu);
        wr32(sp0 - 0xd0u, t19);
        d20 = fr(g, (double)rdf32(sp0 - 0x68u) / fr(g, d18 + (double)rdf32(COW_IMG(0x1032961cu))));
        d21 = (double)(float)fr(g, d20 * (double)rdf32(esi));
        wrf32(sp0 - 0x48u, (float)d21);
        d22 = (double)(float)fr(g, d20 * (double)rdf32(esi + 4u));
        wrf32(sp0 - 0x44u, (float)d22);
        d23 = (double)(float)fr(g, d20 * (double)rdf32(esi + 8u));
        wrf32(sp0 - 0x40u, (float)d23);
        g->ecx = sp0 - 0x48u;
        g->edx = t17;
        g->esp = sp0 - 0xc4u;
        t24 = cow_cdecl(g, COW_IMG(0x10274980u), 3, t19, ebx, sp0 - 0x48u);
        t25 = g->ecx;
        t26 = g->edx;
        wr32(sp0 - 0x8cu, t19 + 0xcu);
        if ((int32_t)(edi + 4u) < 12)
        {
            ecx = t25;
            edi = edi + 4u;
            loc_8c = t19 + 0xcu;
            goto L_102b6a59;
        }
        eax = t24;
        ecx = t25;
        edx = t26;
        d27 = (double)rdf32(sp0 - 0x78u);
        d28 = (double)rdf32(sp0 - 0x7cu);
        d29 = (double)rdf32(sp0 - 0x80u);
        wr32(sp0 - 0xa0u, ebx);
        d30 = fr(g, d29 * d29);
        d31 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, fr(g, d30 + fr(g, d28 * d28)) + fr(g, d27 * d27)));
        wrf32(sp0 - 0x8cu, (float)d31);
        d32 = (double)(float)fr(g, d31 * d30);
        wrf32(sp0 - 0x74u, (float)d32);
        d33 = (double)(float)fr(g, d31 * fr(g, d28 * d28));
        wrf32(sp0 - 0x70u, (float)d33);
        d34 = (double)(float)fr(g, d31 * fr(g, d27 * d27));
        wrf32(sp0 - 0x6cu, (float)d34);
        g->esp = sp0 - 0x9cu;
        cow_cdecl(g, COW_IMG(0x10274660u), 1, ebx);
        eax = ebx;
        ecx = sp0 - 0xcu - ebx;
        edx = 3u;
L_102b6b50: ;
        d35 = fr(g, fr(g, (double)rdf32(sp0 - 0x74u) * (double)rdf32(eax + ecx - 0x18u)) + (double)rdf32(eax));
        wrf32(eax, (float)d35);
        d36 = fr(g, d35 + fr(g, (double)rdf32(sp0 - 0x70u) * (double)rdf32(eax + ecx - 0xcu)));
        wrf32(eax, (float)d36);
        d37 = fr(g, fr(g, (double)rdf32(sp0 - 0x6cu) * (double)rdf32(eax + ecx)) + d36);
        wrf32(eax, (float)d37);
        if (edx != 1u)
        {
            eax = eax + 4u;
            edx = edx - 1u;
            goto L_102b6b50;
        }
        t38 = rd32(sp0 - 0x88u) + 2u;
        wr32(sp0 - 0x88u, t38);
        t39 = rd32(sp0 - 0x84u) + 0x18u;
        wr32(sp0 - 0x84u, t39);
        if ((int32_t)(rd32(sp0 - 0x88u) + 2u) < (int32_t)rd32(sp0 - 0x64u))
        {
            loc_88 = t38;
            loc_84 = t39;
            goto L_102b69ef;
        }
        loc_90 = rd32(sp0 - 0x90u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_98 = rd32(sp0 - 0x98u);
        loc_9c = rd32(sp0 - 0x9cu);
    }
    g->ebx = loc_90;
    g->esi = loc_98;
    g->edi = loc_9c;
    g->ebp = loc_94;
    return;
L_102b69ef: ;
    ebx = loc_88;
    esi = loc_84;
    loc_90 = rd32(sp0 - 0x90u);
    loc_94 = rd32(sp0 - 0x94u);
    loc_98 = rd32(sp0 - 0x98u);
    loc_9c = rd32(sp0 - 0x9cu);
    loc_64 = rd32(sp0 - 0x64u);
    goto L_102b6a0c;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102b6920(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102b6920(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
