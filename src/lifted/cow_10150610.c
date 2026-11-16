/* f_0x10150610 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=7 */
uint32_t cow_fn_10150610(Guest* g)
{
    double d3;
    double d31;
    double d34;
    double d35;
    double d4;
    double d42;
    double d43;
    double d44;
    double d45;
    double d46;
    double d5;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_34;
    uint32_t loc_38;
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
    uint32_t t30;
    uint32_t t32;
    uint32_t t33;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t40;
    uint32_t t41;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 88u);

    wr32(sp0 - 0x3cu, in_ebp);
    wr32(sp0 - 0x40u, in_esi);
    wr32(sp0 - 0x44u, in_edi);
    t1 = rd32(sp0 + 0x14u);
    wr32(sp0 - 0x34u, t1);
    wr32(sp0 - 0x38u, 0u);
    edx = in_edx;
    ebp = rd32(sp0 + 0x10u) + 1u;
    esi = rd32(sp0 + 4u);
    edi = rd32(sp0 + 8u);
    loc_34 = t1;
    loc_38 = 0u;
L_10150639: ;
    t2 = rd8(ebp);
    wr8(sp0 + 0x14u, rd8(ebp + 1u));
    wr32(sp0 + 4u, t2);
    d3 = (double)(int32_t)rd32(sp0 + 4u);
    if ((cow_fsw(g, d3, (double)rdf32(COW_IMG(0x10329a08u)), 1u) & 0x4100u) != 0u)
    {
        edx = rd8(ebp - 1u);
        x0 = d3;
        wr32(sp0 + 8u, 0u);
    }
    else
    {
        edx = rd8(ebp - 1u);
        x0 = d3;
        d4 = fr(g, x0 - (double)rdf32(COW_IMG(0x10329a08u)));
        wrf32(sp0 + 8u, (float)d4);
    }
    d5 = fr(g, x0 + (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 + 4u, (float)d5);
    if (edx == 0u) goto L_1015083e;
    eax = edx;
    if (eax == 1u) goto L_1015070a;
    eax = eax - 1u;
    if (eax != 1u)
    {
        eax = eax - 1u;
        goto L_10150752;
    }
    if (arg3 != 0u)
    {
        t10 = rd32(arg3 + 4u);
        wr32(sp0 - 0x30u, t10);
        t11 = rd32(arg3 + 8u);
        wr32(sp0 - 0x2cu, t11);
        t12 = rd32(arg3 + 0xcu);
        wr32(sp0 - 0x28u, t12);
        t13 = rd32(arg3 + 0x10u);
        wr32(sp0 - 0x24u, t13);
        x0 = fr(g, (double)rdf32(edi + 0x208u) + (double)rdf32(arg3 + 0x208u));
    }
    else
    {
        t6 = rd32(esi + 4u);
        wr32(sp0 - 0x30u, t6);
        t7 = rd32(esi + 8u);
        wr32(sp0 - 0x2cu, t7);
        t8 = rd32(esi + 0xcu);
        wr32(sp0 - 0x28u, t8);
        t9 = rd32(esi + 0x10u);
        wr32(sp0 - 0x24u, t9);
        x0 = fr(g, (double)rdf32(esi + 0x208u) + (double)rdf32(edi + 0x208u));
    }
    t14 = rd32(edi + 4u);
    wr32(sp0 - 0x20u, t14);
    t15 = rd32(edi + 8u);
    wr32(sp0 - 0x1cu, t15);
    t16 = rd32(edi + 0xcu);
    wr32(sp0 - 0x18u, t16);
    t17 = rd32(edi + 0x10u);
    wr32(sp0 - 0x14u, t17);
    eax = t16;
L_1015074e: ;
    wrf32(sp0 + 0x10u, (float)x0);
L_10150752: ;
    if (rd8(ebp + 2u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(ebp + 2u);
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(ebp + 2u);
        wr32(sp0 + 0x10u, 0u);
    }
    wr32(sp0 - 0x48u, sp0 - 0x10u);
    g->edx = sp0 - 0x10u;
    t26 = rd32(COW_IMG(0x1057876cu));
    g->esp = sp0 - 0x44u;
    t27 = cow_call_regs(g, COW_IMG(0x10159c80u), eax, t26, g->edx, 0, 1, sp0 - 0x10u);
    t28 = g->ecx;
    t29 = g->edx;
    if ((uint8_t)t27 == 0u)
    {
        eax = t27;
        ecx = t28;
        if (rd8(sp0 + 0x14u) == 0u)
        {
            wr32(sp0 - 0x2cu, 0u);
            wr32(sp0 - 0x1cu, 0u);
        }
    }
    else
    {
        edx = t29;
        wr32(sp0 - 0x48u, sp0 - 0x30u);
        wr32(sp0 - 0x4cu, sp0 - 0x20u);
        g->ecx = sp0 - 0x20u;
        g->esp = sp0 - 0x44u;
        cow_cdecl(g, COW_IMG(0x10027620u), 2, sp0 - 0x20u, sp0 - 0x30u);
        t30 = g->ecx;
        d31 = cow_take_float(g);
        wrf32(sp0 + 0x14u, (float)d31);
        wr32(sp0 - 0x50u, sp0 - 0x30u);
        wr32(sp0 - 0x54u, sp0 - 0x10u);
        g->eax = sp0 - 0x10u;
        g->ecx = t30;
        g->esp = sp0 - 0x4cu;
        t32 = cow_cdecl(g, COW_IMG(0x10027620u), 2, sp0 - 0x10u, sp0 - 0x30u);
        t33 = g->ecx;
        d34 = cow_take_float(g);
        d35 = (double)rdf32(sp0 + 0x14u);
        if ((cow_fsw(g, d34, d35, 0u) & 0x4100u) != 0u)
        {
            ecx = t33;
        }
        else
        {
            t36 = rd32(sp0 - 0x10u);
            wr32(sp0 - 0x20u, t36);
            t37 = rd32(sp0 - 0xcu);
            wr32(sp0 - 0x1cu, t37);
            t38 = rd32(sp0 - 8u);
            wr32(sp0 - 0x18u, t38);
            t39 = rd32(sp0 - 4u);
            wr32(sp0 - 0x14u, t39);
            ecx = t39;
        }
        wr32(sp0 + 0x10u, 0u);
    }
    wr32(sp0 - 0x48u, sp0 - 0x30u);
    wr32(sp0 - 0x4cu, sp0 - 0x20u);
    g->eax = sp0 - 0x20u;
    g->edx = sp0 - 0x30u;
    g->esp = sp0 - 0x44u;
    t40 = cow_cdecl(g, COW_IMG(0x10027620u), 2, sp0 - 0x20u, sp0 - 0x30u);
    t41 = g->edx;
    d42 = cow_take_float(g);
    d43 = fr(g, d42 - (double)rdf32(sp0 + 0x10u));
    wrf32(sp0 + 0x14u, (float)d43);
    d44 = (double)rdf32(sp0 + 4u);
    if ((cow_fsw(g, d43, d44, 1u) & 0x4100u) == 0u)
    {
        x0 = d42;
        goto L_10150860;
    }
    eax = cow_fsw(g, d43, d44, 1u) & 0x4100u;
    edx = t41;
    x0 = d42;
    if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032cf58u)), 0u) & 0x100u) == 0u) goto L_10150862;
    eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032cf58u)), 0u) & 0x100u;
    d45 = (double)rdf32(sp0 + 0x14u);
    d46 = (double)rdf32(sp0 + 8u);
    if ((cow_fsw(g, d45, d46, 0u) & 0x4100u) == 0u)
    {
        wr32(sp0 - 0x34u, arg7);
        loc_34 = arg7;
    }
L_1015083e: ;
    wr32(sp0 - 0x38u, loc_38 + 1u);
    if ((int32_t)(loc_38 + 1u) < 2)
    {
        ebp = ebp + 4u;
        loc_38 = loc_38 + 1u;
        goto L_10150639;
    }
    return loc_34;
L_1015070a: ;
    t18 = rd32(esi + 4u);
    wr32(sp0 - 0x30u, t18);
    t19 = rd32(esi + 8u);
    wr32(sp0 - 0x2cu, t19);
    t20 = rd32(esi + 0xcu);
    wr32(sp0 - 0x28u, t20);
    t21 = rd32(esi + 0x10u);
    wr32(sp0 - 0x24u, t21);
    t22 = rd32(edi + 4u);
    wr32(sp0 - 0x20u, t22);
    t23 = rd32(edi + 8u);
    wr32(sp0 - 0x1cu, t23);
    t24 = rd32(edi + 0xcu);
    wr32(sp0 - 0x18u, t24);
    t25 = rd32(edi + 0x10u);
    wr32(sp0 - 0x14u, t25);
    eax = t25;
    x0 = fr(g, (double)rdf32(esi + 0x208u) + (double)rdf32(edi + 0x208u));
    goto L_1015074e;
L_10150860: ;
L_10150862: ;
    g->esi = rd32(sp0 - 0x40u);
    g->edi = rd32(sp0 - 0x44u);
    g->ebp = rd32(sp0 - 0x3cu);
    return arg6;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10150610(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10150610(g);
    g->esp = sp0;
    rt_return(g, r, 28u);
}
/* COW_ADAPTER END */
