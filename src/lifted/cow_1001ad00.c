/* f_0x1001ad00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=8 */
void cow_fn_1001ad00(Guest* g)
{
    double d12;
    double d21;
    double d27;
    double d31;
    double d32;
    double d34;
    double d37;
    double d38;
    double d39;
    double d40;
    double d41;
    double d42;
    double d43;
    double d44;
    double d9;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t33;
    uint32_t t35;
    uint32_t t36;
    uint32_t t4;
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
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 24u);

    wr32(sp0 - 4u, in_ebx);
    wr32(sp0 - 8u, in_ebp);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_thiscall(g, COW_IMG(0x1001b1a0u), self, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (rd32(sp0 + 4u) != 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        ebx = rd32(sp0 + 4u);
        edi = t1;
        goto L_1001ad29;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    wr32(sp0 - 0x14u, COW_IMG(0x10351108u));
    g->esp = sp0 - 0x14u;
    cow_stdcall(g, COW_IMG(0x10017d30u), 0);
    return;
L_1001ad29: ;
    wr32(sp0 - 0x14u, 0x40u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t4 = cow_cdecl(g, COW_IMG(0x1002c890u), 1, 0x40u);
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 == 0u)
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        goto L_1001ad46;
    }
    eax = t4;
    edx = t6;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t7 = cow_thiscall(g, COW_IMG(0x1001a800u), eax, 0);
    t8 = g->edx;
    if (t7 != 0u)
    {
        eax = t7;
        esi = t7;
        goto L_1001ad5a;
    }
    eax = t7;
    ecx = 0u;
    edx = t8;
L_1001ad46: ;
    wr32(sp0 - 0x14u, COW_IMG(0x103510d4u));
    g->esp = sp0 - 0x14u;
    cow_stdcall(g, COW_IMG(0x10017d30u), 0);
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->ebp = rd32(sp0 - 8u);
    return;
L_1001ad5a: ;
    if (edi != 0u)
    {
        wr32(edi + 4u, esi);
    }
    else
    {
        wr32(self + 4u, esi);
    }
    d9 = (double)rdf32(sp0 + 0x14u);
    if (d9 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
        wr32(sp0 + 0x14u, 0x3f800000u);
    }
    t10 = rd32(sp0 + 0x14u);
    t11 = rd32(sp0 + 0x1cu);
    d12 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(sp0 + 0x14u));
    wr32(esi + 0x14u, t10);
    t13 = rd32(sp0 + 0x20u);
    wr32(esi + 0xcu, 0u);
    wr32(esi + 0x10u, 0u);
    wr32(esi + 0x38u, t13);
    wr32(esi + 0x24u, t11);
    t14 = rd32(esi);
    wr32(esi + 0x1cu, arg2);
    wr32(sp0 - 0x14u, arg3);
    wr8(esi + 8u, 1u);
    wrf32(esi + 0x18u, (float)d12);
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, rd32(t14 + 0x2cu), esi, 1, arg3);
    wr32(esi + 0x2cu, (uint32_t)(int8_t)arg4);
    wr32(sp0 - 0x14u, ebx);
    t15 = rd32(rd32(ebx) + 0x20u);
    t16 = rd32(esi);
    wr32(esi + 0x30u, t15);
    g->eax = t16;
    g->edx = t15;
    t17 = cow_thiscall(g, rd32(t16 + 0x28u), esi, 1, ebx);
    t18 = g->edx;
    g->edx = t18;
    t19 = cow_call_regs(g, COW_IMG(0x10071e90u), t17, rd32(ebx), g->edx, 1, 0);
    t20 = g->edx;
    d21 = (double)rdf32(sp0 + 0x18u);
    if (!(d21 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        edx = t20;
        x0 = d21;
    }
    else
    {
        edx = t20;
        x0 = d21;
        x0 = (double)rdf32(COW_IMG(0x1032961cu));
    }
    wrf32(esi + 0x20u, (float)x0);
    if (edi != 0u)
    {
        wr32(sp0 - 0x14u, sp0 + 0x10u);
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, rd32(rd32(edi) + 0x24u), edi, 1, sp0 + 0x10u);
        wr32(sp0 - 0x14u, sp0 + 8u);
        g->edx = rd32(esi);
        t22 = rd32(esi);
        cow_thiscall(g, rd32(t22 + 0x24u), esi, 1, sp0 + 8u);
        t23 = g->edx;
        if (arg4 == 0u)
        {
            edx = t23;
        }
        else
        {
            edx = t23;
            if (arg2 != 0u)
            {
                wr32(sp0 - 0x14u, arg4);
                g->esp = sp0 - 0x10u;
                t24 = cow_stdcall(g, COW_IMG(0x10072fb0u), 1, arg4);
                t25 = (uint32_t)(int16_t)rd16(t24 + 0x34u);
                wr32(sp0 + 4u, t25);
                wr32(sp0 - 0x14u, arg2);
                t26 = rd32(COW_IMG(0x1047d128u));
                d27 = fr(g, (double)(int32_t)rd32(sp0 + 4u) / (double)rdf32(t24 + 0x36u));
                wrf32(sp0 + 0x1cu, (float)d27);
                g->edx = arg2;
                t28 = cow_stdcall(g, COW_IMG(0x10072fb0u), 1, arg2);
                t29 = g->edx;
                wr32(sp0 + 0x20u, 0u);
                t30 = (uint32_t)(int16_t)rd16(t28 + 0x34u);
                wr32(sp0 + 4u, t30);
                d31 = fr(g, (double)(int32_t)rd32(sp0 + 4u) / (double)rdf32(t28 + 0x36u));
                wrf32(sp0 + 4u, (float)d31);
                d32 = (double)rdf32(sp0 + 0x1cu);
                if ((cow_fsw(g, d32, (double)rdf32(COW_IMG(0x1032a22cu)), 1u) & 0x4100u) != 0u)
                {
                    eax = cow_fsw(g, d32, (double)rdf32(COW_IMG(0x1032a22cu)), 1u) & 0x4100u;
                    edx = t29;
                    ebx = t28;
                    x0 = (double)rdf32(COW_IMG(0x103295d8u));
                }
                else
                {
                    eax = cow_fsw(g, d32, (double)rdf32(COW_IMG(0x1032a22cu)), 1u) & 0x4100u;
                    ebx = t28;
                    x0 = (double)rdf32(COW_IMG(0x103295d8u));
                    t33 = rd32(edi);
                    d34 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(sp0 + 0x1cu));
                    wrf32(sp0 + 0x1cu, (float)d34);
                    g->eax = eax;
                    g->edx = t33;
                    g->esp = sp0 - 0x10u;
                    t35 = cow_thiscall(g, rd32(t33 + 0x30u), edi, 0);
                    t36 = g->edx;
                    d37 = cow_take_float(g);
                    d38 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp0 + 0x1cu) * (double)rdf32(sp0 + 4u)) * fr(g, (double)rdf32(ebx + 0x36u) * (double)rdf32(COW_IMG(0x10329a08u)))) * (double)rdf32(sp0 + 0xcu)) * (double)rdf32(sp0 + 0x14u));
                    d39 = fr(g, d37 * (double)rdf32(sp0 + 0x1cu));
                    wrf32(sp0 + 0x20u, (float)d38);
                    eax = t35;
                    edx = t36;
                    x0 = d39;
                }
                d40 = (double)rdf32(sp0 + 4u);
                if ((cow_fsw(g, d40, (double)rdf32(COW_IMG(0x103295d8u)), 1u) & 0x4100u) != 0u)
                {
                    x0 = fr(g, fr(g, x0 * (double)rdf32(sp0 + 4u)) + (double)rdf32(sp0 + 0x20u));
                    x0 = (double)rdf32(COW_IMG(0x103295d8u));
                }
                else
                {
                    eax = cow_fsw(g, d40, (double)rdf32(COW_IMG(0x103295d8u)), 1u) & 0x4100u;
                    x0 = fr(g, fr(g, x0 * (double)rdf32(sp0 + 4u)) + (double)rdf32(sp0 + 0x20u));
                    d41 = (double)rdf32(sp0 + 4u);
                    if ((cow_fsw(g, x0, d41, 1u) & 0x100u) != 0u) goto L_1001af13;
                    eax = cow_fsw(g, x0, d41, 1u) & 0x100u;
L_1001aef8: ;
                    d42 = fr(g, x0 - (double)rdf32(sp0 + 4u));
                    d43 = (double)rdf32(sp0 + 4u);
                    if ((cow_fsw(g, d42, d43, 1u) & 0x100u) == 0u)
                    {
                        eax = cow_fsw(g, d42, d43, 1u) & 0x100u;
                        x0 = d42;
                        goto L_1001aef8;
                    }
                    x0 = d42;
                }
L_1001af13: ;
                d44 = fr(g, (double)rdf32(ebx + 0x36u) * x0);
                wrf32(esi + 0x24u, (float)d44);
            }
        }
        t45 = rd32(sp0 + 0x14u);
        wr32(sp0 - 0x14u, t45);
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, COW_IMG(0x1001b520u), edi, 1, t45);
        t46 = g->edx;
        edx = t46;
    }
    g->edx = edx;
    t47 = rd32(self + 4u);
    g->esp = sp0 - 0x10u;
    t48 = cow_thiscall(g, COW_IMG(0x1001b340u), self, 0);
    t49 = g->edx;
    if ((int32_t)t48 <= 3)
    {
        esi = t47;
    }
    else
    {
        eax = t48;
        edx = t49;
        esi = t47;
        edi = eax - 3u;
L_1001af3b: ;
        wr32(sp0 - 0x14u, 0x3f800000u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t50 = cow_thiscall(g, COW_IMG(0x1001b520u), esi, 1, 0x3f800000u);
        t51 = g->edx;
        if (edi != 1u)
        {
            eax = t50;
            edx = t51;
            esi = rd32(esi + 4u);
            edi = edi - 1u;
            goto L_1001af3b;
        }
        esi = rd32(esi + 4u);
    }
    if (esi != 0u)
    {
        wr32(esi + 0x10u, 0x3f800000u);
    }
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->ebp = rd32(sp0 - 8u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1001ad00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1001ad00(g);
    g->esp = sp0;
    rt_return(g, g->eax, 32u);
}
/* COW_ADAPTER END */
