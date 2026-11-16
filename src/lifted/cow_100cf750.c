/* f_0x100cf750 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100cf750(Guest* g)
{
    double d37;
    double d48;
    double d52;
    double d57;
    double d58;
    double d60;
    double d69;
    double d72;
    double d75;
    double d77;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
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
    uint32_t t47;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t59;
    uint32_t t6;
    uint32_t t61;
    uint32_t t62;
    uint32_t t63;
    uint32_t t64;
    uint32_t t65;
    uint32_t t66;
    uint32_t t67;
    uint32_t t68;
    uint32_t t7;
    uint32_t t70;
    uint32_t t71;
    uint32_t t73;
    uint32_t t74;
    uint32_t t76;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_ebp);
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    t1 = rd32(sp0 + 4u);
    wr32(sp0 - 0x18u, t1);
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t2 = cow_stdcall(g, COW_IMG(0x10072fb0u), 1, t1);
    t3 = g->edx;
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 0x29u);
    wr32(sp0 - 0x20u, t2);
    wr32(sp0 - 0x24u, sp0 + 4u);
    g->edx = t3;
    cow_call_regs(g, COW_IMG(0x10072430u), t2, g->ecx, g->edx, 0, 4, sp0 + 4u, t2, 0x29u, 0u);
    t4 = g->edx;
    if (rd32(sp0 + 4u) == 0u)
    {
        ebp = 0u;
        goto L_100cfa40;
    }
    edx = t4;
    ebx = t1;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t5 = cow_thiscall(g, COW_IMG(0x1002b5a0u), self + 0x674u, 0);
    t6 = g->edx;
    if (rd32(t5) != 0u)
    {
        eax = t5;
        ebp = rd32(t5);
        goto L_100cf7a9;
    }
    edx = t6;
    g->esp = sp0 - 0x14u;
    t7 = cow_thiscall(g, COW_IMG(0x1002b6a0u), self + 0x674u, 0);
    if (t7 == 0u)
    {
        ebp = t7;
        goto L_100cfa40;
    }
    eax = t7;
    ebp = t7;
L_100cf7a9: ;
    t8 = rd32(sp0 + 4u);
    wr32(sp0 - 0x18u, t8);
    g->edx = t8;
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x10029e50u), ebp, 1, t8);
    t9 = g->edx;
    g->edx = t9;
    cow_call_regs(g, COW_IMG(0x10071e90u), rd32(sp0 + 4u), rd32(rd32(sp0 + 4u)), g->edx, 1, 0);
    t10 = g->edx;
    wr32(sp0 - 0x18u, ebx);
    g->edx = t10;
    t11 = cow_stdcall(g, COW_IMG(0x10072fb0u), 1, ebx);
    t12 = g->edx;
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 0x45u);
    wr32(sp0 - 0x20u, t11);
    wr32(sp0 - 0x24u, sp0 - 4u);
    g->ecx = t11;
    g->edx = t12;
    t13 = cow_call_regs(g, COW_IMG(0x10072430u), t11, g->ecx, g->edx, 0, 4, sp0 - 4u, t11, 0x45u, 0u);
    t14 = g->ecx;
    t15 = g->edx;
    t16 = rd32(t13);
    wr32(sp0 + 4u, t16);
    if (t16 == 0u)
    {
        eax = t16;
    }
    else
    {
        eax = t16;
        ecx = t14;
        edx = t15;
        t17 = rd32(eax);
        t18 = rd8(rd32(eax) + 0x3au);
        wr8(self + 0x882u, (uint8_t)t18);
        wr8(self + 0x883u, rd8(t17 + 0x3bu));
        wr8(self + 0x884u, rd8(t17 + 0x3cu));
        t19 = rd8(t17 + 0x3du);
        wr8(self + 0x885u, (uint8_t)t19);
        eax = (t17 & 0xffffff00u) | t19;
    }
    g->eax = eax;
    g->edx = rd32(self);
    t20 = rd32(self);
    g->esp = sp0 - 0x14u;
    t21 = cow_thiscall(g, rd32(t20 + 0x34cu), self, 0);
    t22 = g->ecx;
    t23 = g->edx;
    if (t21 != 0u)
    {
        eax = t21;
        ecx = t22;
        edx = t23;
        goto L_100cf9de;
    }
    edx = t23;
    g->eax = rd32(self);
    g->edx = edx;
    t24 = rd32(self);
    g->esp = sp0 - 0x14u;
    t25 = cow_thiscall(g, rd32(t24 + 0x358u), self, 0);
    t26 = g->ecx;
    t27 = g->edx;
    if (t25 != 0u)
    {
        eax = t25;
        ecx = t26;
        edx = t27;
        goto L_100cf9de;
    }
    eax = t25;
    g->eax = eax;
    g->edx = rd32(self);
    t28 = rd32(self);
    g->esp = sp0 - 0x14u;
    t29 = cow_thiscall(g, rd32(t28 + 0x360u), self, 0);
    t30 = g->ecx;
    t31 = g->edx;
    if (t29 == 0u)
    {
        edx = t31;
        goto L_100cf86c;
    }
    eax = t29;
    ecx = t30;
    edx = t31;
    if (rd32(self + 0x768u) == 0u) goto L_100cf855;
    edi = rd32(self + 0x768u);
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t32 = cow_thiscall(g, COW_IMG(0x10084500u), edi, 0);
    t33 = g->edx;
    eax = t32;
    edx = t33;
L_100cf99c: ;
    ecx = edi + 0x878u;
L_100cf9a2: ;
    wr32(sp0 - 0x18u, eax);
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x10022120u), ecx, 1, eax);
    d69 = cow_take_float(g);
    wrf32(self + 0x754u, (float)d69);
    g->ebx = rd32(sp0 - 8u);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->ebp = rd32(sp0 - 0xcu);
    return ebp;
L_100cf855: ;
    wr32(sp0 - 0x18u, COW_IMG(0x1035f964u));
    g->esp = sp0 - 0x18u;
    cow_stdcall(g, COW_IMG(0x10017d30u), 0);
    g->ebx = rd32(sp0 - 8u);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->ebp = rd32(sp0 - 0xcu);
    return ebp;
L_100cf86c: ;
    g->eax = rd32(self);
    g->edx = edx;
    t34 = rd32(self);
    g->esp = sp0 - 0x14u;
    t35 = cow_thiscall(g, rd32(t34 + 0x394u), self, 0);
    t36 = g->edx;
    if (t35 == 0u)
    {
        eax = t35;
        goto L_100cf8ba;
    }
    eax = t35;
    edx = t36;
    if (rd32(self + 0x790u) == 0u)
    {
        ecx = rd32(self + 0x790u);
        goto L_100cf8a3;
    }
    ecx = rd32(self + 0x790u);
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x10084540u), ecx, 0);
    d37 = cow_take_float(g);
    wrf32(self + 0x754u, (float)d37);
    wr32(self + 0x75cu, 0x3f800000u);
    g->ebx = rd32(sp0 - 8u);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->ebp = rd32(sp0 - 0xcu);
    return ebp;
L_100cf8a3: ;
    wr32(sp0 - 0x18u, COW_IMG(0x1035f928u));
    g->esp = sp0 - 0x18u;
    cow_stdcall(g, COW_IMG(0x10017d30u), 0);
    g->ebx = rd32(sp0 - 8u);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->ebp = rd32(sp0 - 0xcu);
    return ebp;
L_100cf8ba: ;
    g->eax = eax;
    g->edx = rd32(self);
    t38 = rd32(self);
    g->esp = sp0 - 0x14u;
    t39 = cow_thiscall(g, rd32(t38 + 0x3a4u), self, 0);
    t40 = g->edx;
    if (t39 == 0u)
    {
        edx = t40;
        goto L_100cf8dc;
    }
    wr32(self + 0x754u, 0u);
    g->ebx = rd32(sp0 - 8u);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->ebp = rd32(sp0 - 0xcu);
    return ebp;
L_100cf8dc: ;
    g->eax = rd32(self);
    g->edx = edx;
    t41 = rd32(self);
    g->esp = sp0 - 0x14u;
    t42 = cow_thiscall(g, rd32(t41 + 0x36cu), self, 0);
    t43 = g->ecx;
    t44 = g->edx;
    if (t42 == 0u)
    {
        eax = t42;
        goto L_100cf97d;
    }
    eax = t42;
    ecx = t43;
    edx = t44;
    if (rd32(self + 0x768u) == 0u) goto L_100cf966;
    edi = rd32(self + 0x768u);
    g->esp = sp0 - 0x14u;
    t45 = cow_fastcall(g, COW_IMG(0x10084420u), edi, edx, 0);
    t46 = g->edx;
    wr32(sp0 - 0x18u, t45);
    g->edx = t46;
    cow_thiscall(g, COW_IMG(0x10022190u), self + 0x878u, 1, t45);
    t47 = g->edx;
    d48 = cow_take_float(g);
    wrf32(sp0 - 4u, (float)(double)(float)d48);
    t49 = cow_fastcall(g, COW_IMG(0x10084420u), edi, t47, 0);
    t50 = g->edx;
    wr32(sp0 - 0x18u, t49);
    g->edx = t50;
    cow_thiscall(g, COW_IMG(0x100221e0u), self + 0x878u, 1, t49);
    t51 = g->edx;
    d52 = cow_take_float(g);
    t53 = rd32(sp0 - 4u);
    wr32(self + 0x760u, t53);
    wrf32(self + 0x758u, (float)d52);
    g->edx = t51;
    t54 = cow_thiscall(g, COW_IMG(0x10084500u), edi, 0);
    t55 = g->edx;
    wr32(sp0 - 0x18u, t54);
    g->edx = t55;
    cow_thiscall(g, COW_IMG(0x10022120u), edi + 0x878u, 1, t54);
    t56 = g->edx;
    d57 = cow_take_float(g);
    wrf32(sp0 - 4u, (float)(double)(float)d57);
    wr32(sp0 - 0x18u, 1u);
    cow_thiscall(g, COW_IMG(0x10022120u), edi + 0x878u, 1, 1u);
    d58 = cow_take_float(g);
    t59 = rd32(sp0 - 0x14u);
    d60 = fr(g, (double)rdf32(sp0 - 4u) / d58);
    wrf32(self + 0x754u, (float)d60);
    g->ebx = rd32(sp0 - 8u);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = t59;
    g->ebp = rd32(sp0 - 0xcu);
    return ebp;
L_100cf966: ;
    wr32(sp0 - 0x18u, COW_IMG(0x1035f8ecu));
    g->esp = sp0 - 0x18u;
    cow_stdcall(g, COW_IMG(0x10017d30u), 0);
    g->ebx = rd32(sp0 - 8u);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->ebp = rd32(sp0 - 0xcu);
    return ebp;
L_100cf97d: ;
    g->eax = eax;
    g->edx = rd32(self);
    t61 = rd32(self);
    g->esp = sp0 - 0x14u;
    t62 = cow_thiscall(g, rd32(t61 + 0x378u), self, 0);
    t63 = g->ecx;
    t64 = g->edx;
    if (t62 == 0u)
    {
        edx = t64;
        goto L_100cf9cf;
    }
    eax = t62;
    ecx = t63;
    edx = t64;
    if (rd32(self + 0x76cu) == 0u) goto L_100cf9b8;
    edi = rd32(self + 0x76cu);
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t65 = cow_thiscall(g, COW_IMG(0x10084520u), edi, 0);
    t66 = g->edx;
    eax = t65;
    edx = t66;
    goto L_100cf99c;
L_100cf9b8: ;
    wr32(sp0 - 0x18u, COW_IMG(0x1035f8b0u));
    g->esp = sp0 - 0x18u;
    cow_stdcall(g, COW_IMG(0x10017d30u), 0);
    g->ebx = rd32(sp0 - 8u);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->ebp = rd32(sp0 - 0xcu);
    return ebp;
L_100cf9cf: ;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t67 = cow_thiscall(g, COW_IMG(0x10084500u), self, 0);
    t68 = g->edx;
    eax = t67;
    ecx = self + 0x878u;
    edx = t68;
    goto L_100cf9a2;
L_100cf9de: ;
    if (rd32(self + 0x768u) == 0u) goto L_100cfa33;
    edi = rd32(self + 0x768u);
    t70 = rd8(edi + 0x885u);
    wr32(sp0 - 0x18u, t70);
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x10022120u), self + 0x878u, 1, t70);
    t71 = g->edx;
    d72 = cow_take_float(g);
    wrf32(sp0 - 4u, (float)(double)(float)d72);
    g->edx = t71;
    t73 = cow_thiscall(g, COW_IMG(0x10084500u), edi, 0);
    t74 = g->edx;
    wr32(sp0 - 0x18u, t73);
    cow_thiscall(g, COW_IMG(0x10022120u), edi + 0x878u, 1, t73);
    d75 = cow_take_float(g);
    t76 = rd32(sp0 - 0x14u);
    d77 = fr(g, d75 * (double)rdf32(sp0 - 4u));
    wrf32(self + 0x754u, (float)d77);
    g->ebx = rd32(sp0 - 8u);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = t76;
    g->ebp = rd32(sp0 - 0xcu);
    return ebp;
L_100cfa33: ;
    wr32(sp0 - 0x18u, COW_IMG(0x1035f870u));
    g->esp = sp0 - 0x18u;
    cow_stdcall(g, COW_IMG(0x10017d30u), 0);
L_100cfa40: ;
    return ebp;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100cf750(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100cf750(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
