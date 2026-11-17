/* f_0x10023290 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
void cow_fn_10023290(Guest* g)
{
    double d10;
    double d4;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_34;
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
    uint32_t t30;
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
    uint32_t t46;
    uint32_t t47;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 84u);

    wr32(sp0 - 0x30u, in_ebx);
    wr32(sp0 - 0x34u, in_ebp);
    wr32(sp0 - 0x38u, in_esi);
    wr32(sp0 - 0x3cu, in_edi);
    t1 = rd32(self + 0x4eu) + rd16(rd32(self + 0x42u)) * 0xcu;
    wr32(sp0 - 0x1cu, t1);
    t2 = rd32(self + 0x48u);
    wr32(sp0 - 0x20u, t2);
    t3 = t2 + rd16(rd32(self + 0x42u)) * 4u;
    wr32(sp0 - 0x2cu, t3);
    if (rd8(rd32(sp0 + 0x14u) + 0x3cu) != 0u)
    {
        eax = rd16(rd32(self + 0x42u));
        ecx = t3;
        edx = t2;
        ebx = rd32(COW_IMG(0x1045ec20u));
        ebp = arg4 + rd16(rd32(self + 0x42u)) * 0x3cu;
        loc_1c = t1;
        loc_20 = t2;
        loc_2c = t3;
        wr32(sp0 + 0x14u, 0u);
        if ((int32_t)eax <= 0)
        {
            loc_30 = in_ebx;
            loc_34 = in_ebp;
            loc_38 = in_esi;
            loc_3c = in_edi;
        }
        else
        {
            t29 = rd32(self + 0x4eu);
            wr32(sp0 + 8u, t29);
            ecx = t29;
            edi = arg4 + 0x18u;
            loc_30 = in_ebx;
            loc_34 = in_ebp;
            loc_38 = in_esi;
            loc_3c = in_edi;
L_100234d5: ;
            t30 = ebx + (rd8(edx + rd32(sp0 + 0x14u) * 4u) & 0x7fu) * 0x40u;
            wr32(sp0 - 0x40u, t30);
            t31 = rd32(sp0 + 8u);
            wr32(sp0 - 0x44u, t31);
            wr32(sp0 - 0x48u, edi - 0x18u);
            g->eax = edi - 0x18u;
            g->edx = t31;
            g->esp = sp0 - 0x3cu;
            t32 = cow_stdcall(g, COW_IMG(0x100235c0u), 3, edi - 0x18u, t31, t30);
            t33 = g->edx;
            wr32(sp0 - 0x40u, edi - 0xcu);
            wr32(sp0 - 0x44u, edi);
            g->ecx = edi - 0xcu;
            t34 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, edi, edi - 0xcu);
            t35 = g->ecx;
            wr32(sp0 - 0x48u, edi + 0xcu);
            g->esp = sp0 - 0x44u;
            cow_cdecl(g, COW_IMG(0x10026e00u), 1, edi + 0xcu);
            t36 = rd32(sp0 + 8u) + 0xcu;
            t37 = rd32(sp0 + 0x14u);
            t38 = rd32(self + 0x42u);
            wr32(sp0 + 8u, t36);
            t39 = rd16(t38);
            wr32(sp0 + 0x14u, t37 + 1u);
            if ((int32_t)(t37 + 1u) < (int32_t)t39)
            {
                ecx = t38;
                edi = edi + 0x3cu;
                goto L_100234d1;
            }
            ecx = rd32(sp0 - 0x2cu);
            loc_30 = rd32(sp0 - 0x30u);
            loc_34 = rd32(sp0 - 0x34u);
            loc_38 = rd32(sp0 - 0x38u);
            loc_3c = rd32(sp0 - 0x3cu);
            loc_1c = rd32(sp0 - 0x1cu);
            loc_2c = rd32(sp0 - 0x2cu);
        }
        if (rd16(rd32(self + 0x42u) + 2u) == 0u)
        {
            eax = rd32(self + 0x42u);
        }
        else
        {
            eax = rd32(self + 0x42u);
            wr32(sp0 + 0x14u, loc_1c);
            edi = 0u;
L_1002354b: ;
            t40 = ebx + (rd8(ecx + edi * 4u + 2u) & 0x7fu) * 0x40u;
            wr32(sp0 - 0x40u, t40);
            t41 = ebx + (rd8(ecx + edi * 4u) & 0x7fu) * 0x40u;
            wr32(sp0 - 0x44u, t41);
            t42 = rd32(sp0 + 0x14u);
            wr32(sp0 - 0x48u, t42);
            wr32(sp0 - 0x4cu, ebp);
            g->edx = t42;
            g->esp = sp0 - 0x3cu;
            cow_stdcall(g, COW_IMG(0x10023620u), 4, ebp, t42, t41, t40);
            t43 = g->edx;
            wr32(sp0 - 0x40u, ebp + 0xcu);
            wr32(sp0 - 0x44u, ebp + 0x18u);
            g->eax = ebp + 0xcu;
            g->ecx = ebp + 0x18u;
            t44 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, ebp + 0x18u, ebp + 0xcu);
            t45 = g->ecx;
            wr32(sp0 - 0x48u, ebp + 0x24u);
            g->esp = sp0 - 0x44u;
            cow_cdecl(g, COW_IMG(0x10026e00u), 1, ebp + 0x24u);
            t46 = rd32(sp0 + 0x14u) + 0x20u;
            t47 = rd32(self + 0x42u);
            wr32(sp0 + 0x14u, t46);
            if ((int32_t)(edi + 1u) < (int32_t)rd16(t47 + 2u))
            {
                eax = t47;
                ebp = ebp + 0x3cu;
                edi = edi + 1u;
                goto L_10023547;
            }
            eax = t47;
            loc_30 = rd32(sp0 - 0x30u);
            loc_34 = rd32(sp0 - 0x34u);
            loc_38 = rd32(sp0 - 0x38u);
            loc_3c = rd32(sp0 - 0x3cu);
        }
    }
    else
    {
        ecx = t3;
        edx = t2;
        ebx = rd32(COW_IMG(0x1045ec20u));
        ebp = arg4 + rd16(rd32(self + 0x42u)) * 0x3cu;
        loc_1c = t1;
        loc_20 = t2;
        loc_2c = t3;
        d4 = fr(g, (double)rdf32(COW_IMG(0x10329d34u)) - (double)rdf32(self + 0x78u));
        d5 = (double)(float)fr(g, d4 * (double)rdf32(rd32(sp0 + 8u) + 0x34u));
        wrf32(sp0 - 0x18u, (float)d5);
        d6 = (double)(float)fr(g, d4 * (double)rdf32(rd32(sp0 + 8u) + 0x38u));
        wrf32(sp0 - 0x14u, (float)d6);
        d7 = (double)(float)fr(g, d4 * (double)rdf32(rd32(sp0 + 8u) + 0x3cu));
        wrf32(sp0 - 0x10u, (float)d7);
        d8 = (double)(float)fr(g, (double)rdf32(rd32(sp0 + 8u) + 0x34u) * (double)rdf32(COW_IMG(0x10329d34u)));
        wrf32(sp0 - 0xcu, (float)d8);
        d9 = (double)(float)fr(g, (double)rdf32(rd32(sp0 + 8u) + 0x38u) * (double)rdf32(COW_IMG(0x10329d34u)));
        wrf32(sp0 - 8u, (float)d9);
        d10 = (double)(float)fr(g, (double)rdf32(rd32(sp0 + 8u) + 0x3cu) * (double)rdf32(COW_IMG(0x10329d34u)));
        wrf32(sp0 - 4u, (float)d10);
        if (rd16(self + 0x5au) == 0u)
        {
            edi = 0u;
            loc_30 = in_ebx;
            loc_34 = in_ebp;
            loc_38 = in_esi;
            loc_3c = in_edi;
        }
        else
        {
            wr32(sp0 - 0x24u, arg4);
            t11 = rd32(self + 0x4eu);
            wr32(sp0 - 0x28u, t11);
            edi = 0u;
            loc_30 = in_ebx;
            loc_34 = in_ebp;
            loc_38 = in_esi;
            loc_3c = in_edi;
            loc_24 = arg4;
            loc_28 = t11;
L_10023347: ;
            t12 = ebx + (rd8(edi * 4u + edx) & 0x7fu) * 0x40u;
            wr32(sp0 - 0x40u, t12);
            wr32(sp0 - 0x44u, loc_28);
            wr32(sp0 - 0x48u, loc_24);
            g->esp = sp0 - 0x3cu;
            cow_stdcall(g, COW_IMG(0x100235c0u), 3, loc_24, loc_28, t12);
            t13 = rd32(sp0 - 0x28u) + 0xcu;
            wr32(sp0 - 0x28u, t13);
            t14 = rd32(sp0 - 0x24u) + 0x3cu;
            wr32(sp0 - 0x24u, t14);
            if ((int32_t)(edi + 1u) < (int32_t)rd16(self + 0x5au))
            {
                edi = edi + 1u;
                loc_28 = t13;
                loc_24 = t14;
                goto L_10023343;
            }
            edi = edi + 1u;
            ecx = rd32(sp0 - 0x2cu);
            loc_30 = rd32(sp0 - 0x30u);
            loc_34 = rd32(sp0 - 0x34u);
            loc_38 = rd32(sp0 - 0x38u);
            loc_3c = rd32(sp0 - 0x3cu);
            loc_1c = rd32(sp0 - 0x1cu);
            loc_2c = rd32(sp0 - 0x2cu);
        }
        if ((int32_t)edi >= (int32_t)rd16(rd32(self + 0x42u)))
        {
            edx = rd16(rd32(self + 0x42u));
        }
        else
        {
            t15 = arg4 + edi * 0x3cu + 0x18u;
            wr32(sp0 - 0x28u, t15);
            edx = t15;
            loc_28 = t15;
L_100233a7: ;
            wr32(sp0 - 0x40u, sp0 - 0x18u);
            wr32(sp0 - 0x44u, loc_28 - 0xcu);
            g->ecx = loc_28 - 0xcu;
            g->esp = sp0 - 0x3cu;
            cow_cdecl(g, COW_IMG(0x10026f20u), 2, loc_28 - 0xcu, sp0 - 0x18u);
            t16 = g->ecx;
            wr32(sp0 - 0x48u, sp0 - 0xcu);
            t17 = rd32(sp0 - 0x28u);
            wr32(sp0 - 0x4cu, t17);
            g->esp = sp0 - 0x44u;
            cow_cdecl(g, COW_IMG(0x10026f20u), 2, t17, sp0 - 0xcu);
            t18 = rd32(sp0 - 0x28u) + 0x3cu;
            wr32(sp0 - 0x28u, t18);
            if ((int32_t)(edi + 1u) < (int32_t)rd16(rd32(self + 0x42u)))
            {
                edx = rd16(rd32(self + 0x42u));
                edi = edi + 1u;
                loc_30 = rd32(sp0 - 0x30u);
                loc_34 = rd32(sp0 - 0x34u);
                loc_38 = rd32(sp0 - 0x38u);
                loc_3c = rd32(sp0 - 0x3cu);
                loc_1c = rd32(sp0 - 0x1cu);
                loc_2c = rd32(sp0 - 0x2cu);
                loc_28 = t18;
                goto L_100233a7;
            }
            edx = rd16(rd32(self + 0x42u));
            ecx = rd32(sp0 - 0x2cu);
            loc_30 = rd32(sp0 - 0x30u);
            loc_34 = rd32(sp0 - 0x34u);
            loc_38 = rd32(sp0 - 0x38u);
            loc_3c = rd32(sp0 - 0x3cu);
            loc_1c = rd32(sp0 - 0x1cu);
            loc_2c = rd32(sp0 - 0x2cu);
        }
        if (rd16(self + 0x5cu) == 0u)
        {
            edi = 0u;
        }
        else
        {
            wr32(sp0 - 0x28u, ebp);
            wr32(sp0 - 0x24u, loc_1c);
            eax = loc_1c;
            edi = 0u;
            loc_28 = ebp;
            loc_24 = loc_1c;
L_10023401: ;
            t19 = ebx + (rd8(ecx + edi * 4u + 2u) & 0x7fu) * 0x40u;
            wr32(sp0 - 0x40u, t19);
            t20 = ebx + (rd8(ecx + edi * 4u) & 0x7fu) * 0x40u;
            wr32(sp0 - 0x44u, t20);
            wr32(sp0 - 0x48u, loc_24);
            wr32(sp0 - 0x4cu, loc_28);
            g->esp = sp0 - 0x3cu;
            cow_stdcall(g, COW_IMG(0x10023620u), 4, loc_28, loc_24, t20, t19);
            t21 = rd32(sp0 - 0x24u) + 0x20u;
            wr32(sp0 - 0x24u, t21);
            t22 = rd32(sp0 - 0x28u) + 0x3cu;
            wr32(sp0 - 0x28u, t22);
            if ((int32_t)(edi + 1u) < (int32_t)rd16(self + 0x5cu))
            {
                eax = rd16(self + 0x5cu);
                edx = t22;
                edi = edi + 1u;
                loc_24 = t21;
                loc_28 = t22;
                goto L_100233fd;
            }
            edi = edi + 1u;
            loc_30 = rd32(sp0 - 0x30u);
            loc_34 = rd32(sp0 - 0x34u);
            loc_38 = rd32(sp0 - 0x38u);
            loc_3c = rd32(sp0 - 0x3cu);
        }
        if ((int32_t)edi < (int32_t)rd16(rd32(self + 0x42u) + 2u))
        {
            eax = edi * 0xfu;
            ebx = ebp + edi * 0x3cu + 0x18u;
L_10023463: ;
            wr32(sp0 - 0x40u, sp0 - 0x18u);
            wr32(sp0 - 0x44u, ebx - 0xcu);
            g->ecx = sp0 - 0x18u;
            g->edx = ebx - 0xcu;
            g->esp = sp0 - 0x3cu;
            cow_cdecl(g, COW_IMG(0x10026f20u), 2, ebx - 0xcu, sp0 - 0x18u);
            t23 = g->ecx;
            t24 = g->edx;
            wr32(sp0 - 0x48u, sp0 - 0xcu);
            wr32(sp0 - 0x4cu, ebx);
            g->eax = sp0 - 0xcu;
            g->esp = sp0 - 0x44u;
            t25 = cow_cdecl(g, COW_IMG(0x10026f20u), 2, ebx, sp0 - 0xcu);
            if ((int32_t)(edi + 1u) < (int32_t)rd16(rd32(self + 0x42u) + 2u))
            {
                eax = t25;
                ebx = ebx + 0x3cu;
                edi = edi + 1u;
                loc_30 = rd32(sp0 - 0x30u);
                loc_34 = rd32(sp0 - 0x34u);
                loc_38 = rd32(sp0 - 0x38u);
                loc_3c = rd32(sp0 - 0x3cu);
                goto L_10023463;
            }
            loc_30 = rd32(sp0 - 0x30u);
            loc_34 = rd32(sp0 - 0x34u);
            loc_38 = rd32(sp0 - 0x38u);
            loc_3c = rd32(sp0 - 0x3cu);
        }
        t26 = rd32(sp0 + 0x14u);
        wr32(sp0 - 0x40u, t26);
        wr32(sp0 - 0x44u, arg4);
        wr32(sp0 - 0x48u, arg3);
        t27 = rd32(sp0 + 8u);
        wr32(sp0 - 0x4cu, t27);
        wr32(sp0 - 0x50u, arg1);
        g->eax = t27;
        g->esp = sp0 - 0x3cu;
        t28 = cow_thiscall(g, COW_IMG(0x10023700u), self, 5, arg1, t27, arg3, arg4, t26);
        eax = t28;
        loc_30 = rd32(sp0 - 0x30u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_3c = rd32(sp0 - 0x3cu);
    }
    wr32(sp0 - 0x40u, arg4);
    g->esp = sp0 - 0x3cu;
    cow_thiscall(g, COW_IMG(0x10024900u), self, 1, arg4);
    g->ebx = rd32(sp0 - 0x30u);
    g->esi = rd32(sp0 - 0x38u);
    g->edi = rd32(sp0 - 0x3cu);
    g->ebp = rd32(sp0 - 0x34u);
    return;
L_10023343: ;
    edx = rd32(sp0 - 0x20u);
    loc_30 = rd32(sp0 - 0x30u);
    loc_34 = rd32(sp0 - 0x34u);
    loc_38 = rd32(sp0 - 0x38u);
    loc_3c = rd32(sp0 - 0x3cu);
    loc_1c = rd32(sp0 - 0x1cu);
    loc_20 = rd32(sp0 - 0x20u);
    loc_2c = rd32(sp0 - 0x2cu);
    goto L_10023347;
L_100233fd: ;
    ecx = rd32(sp0 - 0x2cu);
    loc_30 = rd32(sp0 - 0x30u);
    loc_34 = rd32(sp0 - 0x34u);
    loc_38 = rd32(sp0 - 0x38u);
    loc_3c = rd32(sp0 - 0x3cu);
    loc_2c = rd32(sp0 - 0x2cu);
    goto L_10023401;
L_100234d1: ;
    edx = rd32(sp0 - 0x20u);
    loc_30 = rd32(sp0 - 0x30u);
    loc_34 = rd32(sp0 - 0x34u);
    loc_38 = rd32(sp0 - 0x38u);
    loc_3c = rd32(sp0 - 0x3cu);
    loc_1c = rd32(sp0 - 0x1cu);
    loc_20 = rd32(sp0 - 0x20u);
    loc_2c = rd32(sp0 - 0x2cu);
    goto L_100234d5;
L_10023547: ;
    ecx = rd32(sp0 - 0x2cu);
    loc_30 = rd32(sp0 - 0x30u);
    loc_34 = rd32(sp0 - 0x34u);
    loc_38 = rd32(sp0 - 0x38u);
    loc_3c = rd32(sp0 - 0x3cu);
    loc_2c = rd32(sp0 - 0x2cu);
    goto L_1002354b;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10023290(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10023290(g);
    g->esp = sp0;
    rt_return(g, g->eax, 20u);
}
/* COW_ADAPTER END */
