/* f_0x10087f00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10087f00(Guest* g)
{
    double d27;
    double d31;
    double d47;
    double d51;
    double d52;
    double d53;
    double d6;
    double d7;
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    double loc_5c_f;
    uint32_t loc_68;
    uint32_t loc_6c;
    uint32_t loc_70;
    double loc_74_f;
    double loc_78_f;
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
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t60;
    uint32_t t61;
    uint32_t t8;
    uint32_t t9;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 140u);

    wr32(sp0 - 0x7cu, in_esi);
    wr32(sp0 - 0x80u, in_edi);
    if ((rd32(self + 0x120u) >> 8u & 2u) == 0u) goto L_10088235;
    wr32(sp0 - 0x84u, COW_IMG(0x10330ebcu));
    g->esp = sp0 - 0x80u;
    t1 = cow_fastcall(g, COW_IMG(0x1002c8f0u), rd32(self + 0xa0u), in_edx, 1, COW_IMG(0x10330ebcu));
    t2 = g->edx;
    if ((uint8_t)t1 == 0u) goto L_10088235;
    edx = t2;
    if ((rd32(self + 0x12cu) >> 8u & 3u) == 1u) goto L_10088109;
    eax = (rd32(self + 0x12cu) >> 8u & 3u) - 1u;
    if (eax == 1u) goto L_10087f6b;
    if (rd16(self + 0x148u) != 0xffffu) goto L_10088235;
    t3 = (rd32(rd32(self + 0xa0u) + 0x840u) & 0xffffff00u) | (rd32(rd32(self + 0xa0u) + 0x840u) & 0xfeu);
    wr32(rd32(self + 0xa0u) + 0x840u, t3);
L_10088145: ;
    t59 = rd32(self + 0x12cu);
    wr16(self + 0x148u, 0u);
    t60 = (t59 & 0xffff00ffu) | (t59 >> 8u & 0xfcu) << 8u;
    t61 = rd32(sp0 - 0x80u);
    wr32(self + 0x12cu, t60);
    g->esi = rd32(sp0 - 0x7cu);
    g->edi = t61;
    return;
L_10087f6b: ;
    t4 = (uint32_t)(int16_t)rd16(self + 0x14cu);
    wr32(sp0 - 0x78u, t4);
    t5 = (uint32_t)(int16_t)rd16(self + 0x14au);
    wr32(sp0 - 0x78u, t5);
    d6 = (double)(float)fr(g, (double)(int32_t)t4 * (double)rdf32(COW_IMG(0x1032d694u)));
    wrf32(sp0 - 0x74u, (float)d6);
    d7 = (double)(float)fr(g, (double)(int32_t)t5 * (double)rdf32(COW_IMG(0x1032d690u)));
    wrf32(sp0 - 0x78u, (float)d7);
    if ((int8_t)rd8(self + 0x120u) >= 0)
    {
        loc_78_f = d7;
        loc_74_f = d6;
        goto L_1008801c;
    }
    eax = (t4 & 0xffffff00u) | rd8(self + 0x120u);
    loc_78_f = d7;
    loc_74_f = d6;
    if (rd8(COW_IMG(0x104807f5u)) == 0u) goto L_1008801c;
    t8 = rd32(rd32(rd32(self + 0xd4u) + 0x260u) + 0x140u);
    wr32(sp0 - 0x60u, t8);
    t9 = rd32(rd32(rd32(self + 0xd4u) + 0x260u) + 0x144u);
    wr32(sp0 - 0x5cu, t9);
    t10 = rd32(rd32(rd32(self + 0xd4u) + 0x260u) + 0x148u);
    wr32(sp0 - 0x58u, t10);
    t11 = rd32(rd32(rd32(self + 0xd4u) + 0x260u) + 0x14cu);
    wr32(sp0 - 0x54u, t11);
    t12 = rd32(rd32(rd32(self + 0xd4u) + 0x260u) + 0x150u);
    wr32(sp0 - 0x70u, t12);
    t13 = rd32(rd32(rd32(self + 0xd4u) + 0x260u) + 0x154u);
    wr32(sp0 - 0x6cu, t13);
    t14 = rd32(rd32(rd32(self + 0xd4u) + 0x260u) + 0x158u);
    wr32(sp0 - 0x68u, t14);
    edx = t14;
    loc_70 = t12;
    loc_6c = t13;
    loc_68 = t14;
L_1008804d: ;
    g->edx = edx;
    g->esp = sp0 - 0x80u;
    t22 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
    t23 = g->edx;
    g->edx = t23;
    t24 = cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0x40u, 0);
    t25 = g->ecx;
    t26 = g->edx;
    wr32(sp0 - 0x84u, t25);
    d27 = (double)(float)fr(g, (double)rdf32(sp0 - 0x68u) + (double)rdf32(sp0 - 0x78u));
    wrf32(sp0 - 0x84u, (float)d27);
    g->edx = t26;
    t28 = cow_thiscall(g, COW_IMG(0x10027c20u), sp0 - 0x40u, 1, cow_f2bits(d27));
    t29 = g->ecx;
    t30 = g->edx;
    wr32(sp0 - 0x84u, t29);
    d31 = (double)(float)fr(g, (double)rdf32(sp0 - 0x6cu) + (double)rdf32(sp0 - 0x74u));
    wrf32(sp0 - 0x84u, (float)d31);
    g->edx = t30;
    t32 = cow_thiscall(g, COW_IMG(0x10027bd0u), sp0 - 0x40u, 1, cow_f2bits(d31));
    t33 = g->edx;
    t34 = rd32(sp0 - 0x70u);
    wr32(sp0 - 0x84u, t34);
    t35 = cow_thiscall(g, COW_IMG(0x10027b80u), sp0 - 0x40u, 1, t34);
    wr32(sp0 - 0x84u, sp0 - 0x60u);
    g->edx = sp0 - 0x60u;
    cow_thiscall(g, COW_IMG(0x10027cf0u), sp0 - 0x40u, 1, sp0 - 0x60u);
    t36 = g->edx;
    wr32(sp0 - 0x84u, COW_IMG(0x1035b54cu));
    wr32(sp0 - 0x88u, sp0 - 0x50u);
    cow_thiscall(g, COW_IMG(0x10028230u), sp0 - 0x40u, 2, sp0 - 0x50u, COW_IMG(0x1035b54cu));
    t37 = rd32(sp0 - 0x50u);
    t38 = rd32(self + 0xa0u);
    wr32(t38 + 0x848u, t37);
    t39 = rd32(sp0 - 0x4cu);
    wr32(t38 + 0x84cu, t39);
    t40 = rd32(sp0 - 0x48u);
    wr32(t38 + 0x850u, t40);
    t41 = rd32(sp0 - 0x44u);
    wr32(t38 + 0x854u, t41);
    t42 = (rd32(rd32(self + 0xa0u) + 0x840u) & 0xffffff00u) | (uint8_t)(rd32(rd32(self + 0xa0u) + 0x840u) | 1u);
    wr32(rd32(self + 0xa0u) + 0x840u, t42);
    cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    g->esi = rd32(sp0 - 0x7cu);
    g->edi = rd32(sp0 - 0x80u);
    return;
L_1008801c: ;
    t15 = rd32(self + 4u);
    wr32(sp0 - 0x60u, t15);
    t16 = rd32(self + 8u);
    wr32(sp0 - 0x5cu, t16);
    t17 = rd32(self + 0xcu);
    wr32(sp0 - 0x58u, t17);
    t18 = rd32(self + 0x10u);
    wr32(sp0 - 0x54u, t18);
    t19 = rd32(self + 0x14u);
    wr32(sp0 - 0x70u, t19);
    t20 = rd32(self + 0x18u);
    wr32(sp0 - 0x6cu, t20);
    t21 = rd32(self + 0x1cu);
    wr32(sp0 - 0x68u, t21);
    edx = t20;
    loc_70 = t19;
    loc_6c = t20;
    loc_68 = t21;
    goto L_1008804d;
L_10088109: ;
    if (rd32(COW_IMG(0x10480af0u) + rd16(self + 0x146u) * 4u) == 0u) goto L_10088145;
    eax = rd32(COW_IMG(0x10480af0u) + rd16(self + 0x146u) * 4u);
    if (!(rd32(eax + 0x120u) >> 9u & 1u)) goto L_10088145;
    if (rd32(eax + 0xa0u) == 0u) goto L_10088145;
    edi = rd32(eax + 0xa0u);
    wr32(sp0 - 0x84u, COW_IMG(0x10330ebcu));
    g->esp = sp0 - 0x80u;
    t43 = cow_fastcall(g, COW_IMG(0x1002c8f0u), edi, edx, 1, COW_IMG(0x10330ebcu));
    if ((uint8_t)t43 != 0u) goto L_10088163;
    goto L_10088145;
L_10088163: ;
    wr32(sp0 - 0x84u, sp0 - 0x60u);
    t44 = (uint32_t)(int16_t)rd16(self + 0x148u);
    wr32(sp0 - 0x88u, t44);
    g->eax = sp0 - 0x60u;
    g->esp = sp0 - 0x80u;
    t45 = cow_thiscall(g, rd32(rd32(edi) + 0x1c4u), edi, 2, t44, sp0 - 0x60u);
    if ((uint8_t)t45 == 0u)
    {
        wr32(sp0 - 0x84u, in_ebp);
        t46 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(self + 0x146u) * 4u) + 0x120u);
        if (!((t46 >> 0xfu | t46 >> 0xeu | t46 >> 0x11u) & 1u))
        {
            eax = t46 >> 0x11u;
        }
        else
        {
            eax = t46 >> 0x11u;
            d47 = (double)(float)fr(g, (double)rdf32(sp0 - 0x5cu) - (double)rdf32(COW_IMG(0x1032a404u)));
            wrf32(sp0 - 0x5cu, (float)d47);
            loc_5c_f = d47;
        }
        g->eax = eax;
        g->edx = rd32(edi);
        t48 = rd32(edi);
        g->esp = sp0 - 0x80u;
        t49 = cow_thiscall(g, rd32(t48 + 0x110u), edi, 0);
        t50 = g->edx;
        d51 = cow_take_float(g);
        if (!(d51 < (double)rdf32(COW_IMG(0x103295d8u))))
        {
            edx = t50;
            g->esp = sp0 - 0x80u;
            cow_thiscall(g, rd32(rd32(edi) + 0x110u), edi, 0);
            d52 = cow_take_float(g);
            x0 = d52;
        }
        else
        {
            x0 = (double)rdf32(edi + 0x754u);
        }
        d53 = (double)(float)fr(g, (double)rdf32(sp0 - 0x5cu) - fr(g, x0 * (double)rdf32(COW_IMG(0x1032a404u))));
        wrf32(sp0 - 0x5cu, (float)d53);
        loc_5c_f = d53;
    }
    t54 = rd32(sp0 - 0x60u);
    t55 = rd32(self + 0xa0u);
    wr32(t55 + 0x848u, t54);
    wr32(t55 + 0x84cu, cow_f2bits(loc_5c_f));
    t56 = rd32(sp0 - 0x58u);
    wr32(t55 + 0x850u, t56);
    t57 = rd32(sp0 - 0x54u);
    wr32(t55 + 0x854u, t57);
    t58 = (rd32(rd32(self + 0xa0u) + 0x840u) & 0xffffff00u) | (uint8_t)(rd32(rd32(self + 0xa0u) + 0x840u) | 1u);
    wr32(rd32(self + 0xa0u) + 0x840u, t58);
L_10088235: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10087f00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10087f00(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
