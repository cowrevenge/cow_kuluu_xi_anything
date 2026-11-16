/* f_0x10036c70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=8 */
uint32_t cow_fn_10036c70(Guest* g)
{
    double d10;
    double d14;
    double d19;
    double d22;
    double d23;
    double d27;
    double d28;
    double d29;
    double d32;
    double d33;
    double d34;
    double d4;
    double d43;
    double d44;
    double d48;
    double d49;
    double d51;
    double d52;
    double d53;
    double d54;
    double d6;
    double d8;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    double loc_8_f;
    uint32_t t1;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t5;
    uint32_t t50;
    uint32_t t7;
    uint32_t t9;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg8 = rd32(g->esp + 0x20u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x1cu;
    t1 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        goto L_10036c9c;
    }
    wr32(arg1, 0u);
    wr32(arg2, 0u);
    return 0u;
L_10036c9c: ;
    d4 = (double)rdf32(sp0 + 0x14u);
    if (d4 != (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d4, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d4, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        t5 = rd32(COW_IMG(0x103516e8u));
        wr32(sp0 + 0x14u, t5);
        edx = t5;
    }
    d6 = (double)rdf32(sp0 + 0x10u);
    if (d6 != (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d6, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    }
    else
    {
        t7 = rd32(COW_IMG(0x103516ecu));
        wr32(sp0 + 0x10u, t7);
        eax = t7;
    }
    d8 = (double)rdf32(sp0 + 0x18u);
    if (d8 != (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d8, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        d10 = fr(g, (double)rdf32(sp0 + 0x18u) * (double)rdf32(COW_IMG(0x1032a698u)));
        wrf32(sp0 + 0x18u, (float)d10);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d8, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        t9 = rd32(COW_IMG(0x103516f0u));
        wr32(sp0 + 0x18u, t9);
        ecx = t9;
    }
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t11 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t12 = g->ecx;
    t13 = g->edx;
    d14 = (double)(float)fr(g, (double)rdf32(t11 + 0x60u) - (double)rdf32(rd32(sp0 + 0xcu)));
    wrf32(sp0 - 0x10u, (float)d14);
    g->ecx = t12;
    g->edx = t13;
    t15 = rd32(sp0 + 0xcu);
    t16 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t17 = g->ecx;
    t18 = g->edx;
    d19 = (double)(float)fr(g, (double)rdf32(t16 + 0x64u) - (double)rdf32(t15 + 4u));
    wrf32(sp0 - 0xcu, (float)d19);
    g->ecx = t17;
    t20 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t21 = g->ecx;
    d22 = (double)(float)fr(g, (double)rdf32(t20 + 0x68u) - (double)rdf32(t15 + 8u));
    wrf32(sp0 - 8u, (float)d22);
    if (arg8 == 1u)
    {
        ecx = t21;
        esi = t15;
        loc_8_f = d22;
    }
    else
    {
        ecx = t21;
        esi = t15;
        loc_8_f = d22;
        if (arg8 == 2u)
        {
            wr32(sp0 - 0xcu, 0u);
        }
        else
        {
            d23 = (double)(float)fr(g, (double)rdf32(sp0 - 0xcu) * (double)rdf32(COW_IMG(0x10329d38u)));
            wrf32(sp0 - 0xcu, (float)d23);
        }
    }
    wr32(sp0 - 0x20u, sp0 - 0x10u);
    wr32(sp0 - 0x24u, sp0 - 0x10u);
    g->eax = sp0 - 0x10u;
    g->ecx = ecx;
    g->edx = sp0 - 0x10u;
    g->esp = sp0 - 0x1cu;
    t24 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x10u, sp0 - 0x10u);
    t25 = g->ecx;
    t26 = g->edx;
    d27 = cow_take_float(g);
    wrf32(sp0 + 0xcu, (float)fr(g, sqrt(d27)));
    if (!(fr(g, sqrt(d27)) < (double)rdf32(COW_IMG(0x1032a378u))))
    {
        eax = (t24 & 0xffff0000u) | (uint16_t)cow_fsw(g, fr(g, sqrt(d27)), (double)rdf32(COW_IMG(0x1032a378u)), 0u);
        ecx = t25;
        edx = t26;
        goto L_10036d80;
    }
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    return rd32(arg2);
L_10036d80: ;
    d28 = (double)rdf32(sp0 + 0xcu);
    d29 = (double)rdf32(sp0 + 0x14u);
    if ((cow_fsw(g, d28, d29, 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d28, d29, 0u) & 0x4100u;
        goto L_10036db8;
    }
    if ((uint8_t)arg7 == 0u) goto L_10036da5;
    wr32(arg2, 1u);
L_10036dea: ;
    wr32(sp0 - 0x20u, esi);
    wr32(sp0 - 0x24u, sp0 - 0x10u);
    g->eax = sp0 - 0x10u;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t38 = cow_stdcall(g, COW_IMG(0x10015220u), 0);
    t39 = g->edx;
    g->edx = t39;
    g->esp = sp0 - 0x1cu;
    t40 = cow_thiscall(g, COW_IMG(0x10028230u), t38, 2, sp0 - 0x10u, rd32(sp0 - 0x20u));
    t41 = g->ecx;
    t42 = g->edx;
    d43 = (double)rdf32(sp0 - 8u);
    if (!(d43 <= (double)rdf32(COW_IMG(0x1032a378u))))
    {
        eax = (t40 & 0xffff0000u) | (uint16_t)cow_fsw(g, d43, (double)rdf32(COW_IMG(0x1032a378u)), 1u);
        ecx = t41;
        edx = t42;
        x0 = d43;
        wrf32(sp0 + 0x10u, (float)x0);
        g->ecx = ecx;
        g->edx = edx;
        d44 = fr(g, (double)(int32_t)rd32(arg2) * (double)rdf32(COW_IMG(0x103516e4u)));
        fpush(g, d44);
        g->esp = sp0 - 0x1cu;
        t45 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        t46 = g->ecx;
        t47 = g->edx;
        wr32(arg2, t45);
        eax = t45;
        ecx = t46;
        edx = t47;
    }
    else
    {
        eax = (t40 & 0xffff0000u) | (uint16_t)cow_fsw(g, d43, (double)rdf32(COW_IMG(0x1032a378u)), 1u);
        ecx = t41;
        edx = t42;
        x0 = d43;
        if (!(x0 < (double)rdf32(COW_IMG(0x103295d8u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
            x0 = -x0;
        }
        wrf32(sp0 + 0x10u, (float)x0);
    }
    d48 = (double)rdf32(sp0 + 0x10u);
    if (!(d48 < (double)rdf32(COW_IMG(0x1032961cu))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d48, (double)rdf32(COW_IMG(0x1032961cu)), 0u);
        d49 = (double)rdf32(sp0 + 0x10u);
        if (d49 != (double)rdf32(COW_IMG(0x103295d8u)))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d49, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d49, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
            wr32(sp0 + 0x10u, 0x3a83126fu);
        }
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d48, (double)rdf32(COW_IMG(0x1032961cu)), 0u);
        wr32(sp0 + 0x10u, 0x3f800000u);
    }
    g->eax = eax;
    g->esp = sp0 - 0x1cu;
    t50 = cow_stdcall(g, COW_IMG(0x100152c0u), 0);
    d51 = cow_take_float(g);
    d52 = fr(g, fr(g, fr(g, d51 / (double)rdf32(sp0 + 0x10u)) * (double)rdf32(sp0 - 0x10u)) / (double)rdf32(sp0 + 0x18u));
    if ((cow_fsw(g, d52, (double)rdf32(COW_IMG(0x1032961cu)), 1u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d52, (double)rdf32(COW_IMG(0x1032961cu)), 1u) & 0x4100u;
        x0 = d52;
        if (!(x0 < (double)rdf32(COW_IMG(0x1032a3f0u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032a3f0u)), 1u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032a3f0u)), 1u);
            x0 = (double)rdf32(COW_IMG(0x1032a3f0u));
        }
    }
    else
    {
        eax = cow_fsw(g, d52, (double)rdf32(COW_IMG(0x1032961cu)), 1u) & 0x4100u;
        x0 = d52;
        x0 = (double)rdf32(COW_IMG(0x1032961cu));
    }
    d53 = fr(g, fr(g, x0 * (double)rdf32(arg1)) + (double)rdf32(COW_IMG(0x1032a98cu)));
    d54 = (double)rdf32(COW_IMG(0x1032a34cu));
    wrf32(arg1, (float)d53);
    if ((cow_fsw(g, d53, d54, 1u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d53, d54, 1u) & 0x4100u;
        x0 = d53;
        if (x0 < (double)rdf32(COW_IMG(0x103295d8u)))
        {
            wr32(arg1, 0u);
        }
    }
    else
    {
        x0 = d53;
        wr32(arg1, 0x42fe0000u);
    }
    if (rd32(arg2) != 0u)
    {
        eax = rd32(arg2);
    }
    else
    {
        eax = (uint8_t)arg7;
    }
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    return eax;
L_10036da5: ;
    t30 = rd32(sp0 - 0x18u);
    t31 = rd32(sp0 - 0x1cu);
    wr32(arg2, 0u);
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = t30;
    g->edi = t31;
    return 0u;
L_10036db8: ;
    d32 = (double)rdf32(sp0 + 0xcu);
    d33 = (double)rdf32(sp0 + 0x10u);
    if ((cow_fsw(g, d32, d33, 0u) & 0x4100u) == 0u)
    {
        eax = cow_fsw(g, d32, d33, 0u) & 0x4100u;
        g->ecx = ecx;
        g->edx = edx;
        d34 = fr(g, fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - fr(g, fr(g, (double)rdf32(sp0 + 0xcu) - (double)rdf32(sp0 + 0x10u)) / fr(g, (double)rdf32(sp0 + 0x14u) - (double)rdf32(sp0 + 0x10u)))) * (double)(int32_t)rd32(arg2));
        fpush(g, d34);
        g->esp = sp0 - 0x1cu;
        t35 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        t36 = g->ecx;
        t37 = g->edx;
        wr32(arg2, t35);
        ecx = t36;
        edx = t37;
    }
    goto L_10036dea;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10036c70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10036c70(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
