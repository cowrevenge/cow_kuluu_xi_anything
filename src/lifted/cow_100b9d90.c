/* f_0x100b9d90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b9d90(Guest* g)
{
    double d31;
    double d32;
    double d33;
    double d34;
    double d35;
    double d36;
    double d37;
    double d38;
    double d48;
    double d49;
    double d50;
    double d51;
    double d52;
    double d53;
    double d54;
    double d55;
    uint32_t eax;
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
    uint32_t t5;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edi = g->edi;

    t1 = rd8(rd16(self + 0x256u) + rd32(self + 0x20u) + 1u);
    if (t1 > 0x20u)
    {
        eax = 0u;
        goto L_100b9fec;
    }
    ecx = t1;
    t2 = rd32(COW_IMG(0x100b9ff8u) + rd8(COW_IMG(0x100ba010u) + ecx) * 4u);
    switch (t2 - RD)
    {
    case 0x100b9dc3u: edx = rd8(COW_IMG(0x100ba010u) + ecx); goto L_100b9dc3;
    case 0x100b9e66u: edx = rd8(COW_IMG(0x100ba010u) + ecx); goto L_100b9e66;
    case 0x100b9f47u: edx = rd8(COW_IMG(0x100ba010u) + ecx); goto L_100b9f47;
    case 0x100b9f81u: edx = rd8(COW_IMG(0x100ba010u) + ecx); goto L_100b9f81;
    case 0x100b9fb6u: edx = rd8(COW_IMG(0x100ba010u) + ecx); goto L_100b9fb6;
    case 0x100b9fecu: eax = 0u; goto L_100b9fec;
    default: rt_fatal(g, COW_IMG(0x100b9dbcu), "switch");
    }
    return;
L_100b9dc3: ;
    g->eax = 0u;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t39 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
    t40 = g->edx;
    if (t39 == 0u)
    {
        edx = t40;
        goto L_100b9e39;
    }
    eax = t39;
    edx = t40;
    edi = t39;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t41 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 4u);
    t42 = g->edx;
    wr32(COW_IMG(0x104886bcu), t41);
    g->edx = t42;
    t43 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 6u);
    t44 = g->edx;
    wr32(COW_IMG(0x104886c0u), t43);
    g->edx = t44;
    t45 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 8u);
    t46 = g->edx;
    wr32(COW_IMG(0x104886c4u), t45);
    t47 = (rd8(rd16(self + 0x256u) + rd32(self + 0x20u) + 1u) != 3u) - 1u & 2u;
    g->edi = edi;
    cow_call_regs(g, COW_IMG(0x1013e520u), rd16(self + 0x256u), rd32(COW_IMG(0x10578204u)), t47, 0, 3, edi, COW_IMG(0x104886bcu), t47);
    d48 = cow_take_float(g);
    d49 = cow_take_float(g);
    d50 = cow_take_float(g);
    d51 = cow_take_float(g);
    d52 = cow_take_float(g);
    d53 = cow_take_float(g);
    d54 = cow_take_float(g);
    d55 = cow_take_float(g);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 0xau));
    g->edi = in_edi;
    fpush(g, d48);
    fpush(g, d49);
    fpush(g, d50);
    fpush(g, d51);
    fpush(g, d52);
    fpush(g, d53);
    fpush(g, d54);
    fpush(g, d55);
    return;
L_100b9e39: ;
    t56 = rd32(rd32(COW_IMG(0x10578204u)) + 8u);
    g->edx = edx;
    t57 = rd32(COW_IMG(0x10578204u));
    g->esp = sp0 - 0xcu;
    t58 = cow_call_regs(g, COW_IMG(0x1015e790u), t56, COW_IMG(0x10621838u), g->edx, 0, 2, t56, 1u);
    t59 = g->edx;
    cow_thiscall(g, COW_IMG(0x1013bf40u), t57, 0);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 0xau));
    g->edi = in_edi;
    return;
L_100b9e66: ;
    g->eax = 0u;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t11 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
    t12 = g->edx;
    edi = COW_IMG(0x104886bcu);
    eax = 0u;
    ecx = 6u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->eax = eax;
    g->edx = t12;
    t13 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 4u);
    t14 = g->ecx;
    t15 = g->edx;
    t16 = rd8(COW_IMG(0x104886c2u));
    wr16(COW_IMG(0x104886c2u), rd16(COW_IMG(0x104886c2u)) ^ ((t13 ^ t16) & 0xfu));
    g->eax = (t13 ^ t16) & 0xfu;
    g->edx = t15;
    t17 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 6u);
    t18 = g->ecx;
    t19 = g->edx;
    t20 = rd8(COW_IMG(0x104886c2u));
    wr16(COW_IMG(0x104886c2u), rd16(COW_IMG(0x104886c2u)) ^ ((t17 << 4u ^ t20) & 0xf0u));
    g->eax = (t17 << 4u ^ t20) & 0xf0u;
    g->edx = t19;
    t21 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 8u);
    t22 = g->edx;
    t23 = rd16(COW_IMG(0x104886c2u));
    wr16(COW_IMG(0x104886c2u), (uint16_t)(t23 ^ ((t21 << 8u ^ t23) & 0xf00u)));
    g->eax = (t21 & 0xffff0000u) | (t23 ^ ((t21 << 8u ^ t23) & 0xf00u));
    g->edx = t22;
    t24 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 0xau);
    t25 = g->edx;
    wr8(COW_IMG(0x104886c4u), (uint8_t)t24);
    t26 = cow_thiscall(g, COW_IMG(0x100af960u), self, 1, 0xcu);
    wr32(COW_IMG(0x104886c5u), rd32(t26));
    t27 = rd32(t26 + 4u);
    wr32(COW_IMG(0x104886c9u), t27);
    t28 = rd32(t26 + 8u);
    wr32(COW_IMG(0x104886cdu), t28);
    wr16(COW_IMG(0x104886d1u), rd16(t26 + 0xcu));
    t29 = rd32(COW_IMG(0x10578204u));
    t30 = rd8(t26 + 0xeu);
    wr8(COW_IMG(0x104886d3u), (uint8_t)t30);
    g->edi = edi;
    cow_call_regs(g, COW_IMG(0x1013e520u), t26, t29, (t28 & 0xffffff00u) | t30, 0, 3, t11, COW_IMG(0x104886bcu), 0u);
    d31 = cow_take_float(g);
    d32 = cow_take_float(g);
    d33 = cow_take_float(g);
    d34 = cow_take_float(g);
    d35 = cow_take_float(g);
    d36 = cow_take_float(g);
    d37 = cow_take_float(g);
    d38 = cow_take_float(g);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 0xeu));
    g->edi = in_edi;
    fpush(g, d31);
    fpush(g, d32);
    fpush(g, d33);
    fpush(g, d34);
    fpush(g, d35);
    fpush(g, d36);
    fpush(g, d37);
    fpush(g, d38);
    return;
L_100b9f47: ;
    g->eax = 0u;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t6 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
    t7 = g->edx;
    g->edx = t7;
    t8 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 4u);
    t9 = g->edx;
    if (rd32(COW_IMG(0x106644c0u)) != 0u)
    {
        eax = t8;
        ecx = rd32(COW_IMG(0x106644c0u));
        edx = t9;
        edi = t6;
        t10 = (eax & 0xffffff00u) | eax != 0u;
        g->esp = sp0 - 0xcu;
        cow_call_regs(g, COW_IMG(0x1020f1d0u), t10, ecx, edx, 0, 2, edi, t10);
    }
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 6u));
    return;
L_100b9f81: ;
    if (rd8(rd32(COW_IMG(0x106644c0u)) + 0x6du) == 0u)
    {
        eax = rd32(COW_IMG(0x106644c0u));
        goto L_100b9f98;
    }
    wr8(self + 0x25au, 1u);
    return;
L_100b9f98: ;
    t5 = (uint32_t)(int16_t)rd16(eax + 0x6eu);
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x100af310u), self, 2, 2u, t5);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 4u));
    return;
L_100b9fb6: ;
    g->eax = 0u;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t3 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
    t4 = g->edx;
    if ((uint16_t)t3 != 0u)
    {
        eax = t3;
        ecx = rd32(COW_IMG(0x106671d4u));
        edx = t4;
        goto L_100b9fdf;
    }
    eax = t3;
    ecx = rd32(COW_IMG(0x106671d4u));
    edx = t4;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x1022a6d0u), ecx, 0);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 4u));
    return;
L_100b9fdf: ;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x1022a640u), ecx, 2, 0u, eax);
    eax = 4u;
L_100b9fec: ;
    wr16(self + 0x256u, (uint16_t)((uint16_t)eax + rd16(self + 0x256u)));
    g->edi = in_edi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b9d90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100b9d90(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
