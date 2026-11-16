/* f_0x10212aa0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10212aa0(Guest* g)
{
    double d19;
    double d34;
    double d38;
    double d46;
    double d48;
    double d56;
    double d6;
    uint32_t eax;
    uint32_t ecx;
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
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t47;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t60;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(self + 0x110u) - 3u > 0xbu) goto L_10213155;
    eax = rd32(self + 0x110u) - 3u;
    t1 = rd32(COW_IMG(0x1021315cu) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x10212abdu: goto L_10212abd;
    case 0x10212cf5u: goto L_10212cf5;
    case 0x10212d12u: goto L_10212d12;
    case 0x10212eb7u: goto L_10212eb7;
    case 0x10212fdcu: goto L_10212fdc;
    case 0x10213155u: goto L_10213155;
    default: rt_fatal(g, COW_IMG(0x10212ab6u), "switch");
    }
    return;
L_10212abd: ;
    if (rd32(self + 0x10cu) == 0u) goto L_10212b45;
    if ((uint32_t)(int16_t)arg1 - 3u > 0xfu) goto L_10213155;
    t20 = rd32(COW_IMG(0x1021318cu) + rd8(COW_IMG(0x102131a4u) + (uint32_t)(int16_t)arg1 - 3u) * 4u);
    switch (t20 - RD)
    {
    case 0x10212ae9u: goto L_10212ae9;
    case 0x10212afbu: goto L_10212afb;
    case 0x10212b0du: goto L_10212b0d;
    case 0x10212b1fu: goto L_10212b1f;
    case 0x10212b31u: goto L_10212b31;
    case 0x10213155u: goto L_10213155;
    default: rt_fatal(g, COW_IMG(0x10212ae2u), "switch");
    }
    return;
L_10212ae9: ;
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x101c6920u), (uint32_t)(int16_t)arg1 - 3u, rd32(COW_IMG(0x10662da0u)), g->edx, 0, 1, 1u);
    return;
L_10212afb: ;
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x101c6920u), (uint32_t)(int16_t)arg1 - 3u, rd32(COW_IMG(0x10662da0u)), g->edx, 0, 1, 7u);
    return;
L_10212b0d: ;
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x101c6920u), (uint32_t)(int16_t)arg1 - 3u, rd32(COW_IMG(0x10662da0u)), g->edx, 0, 1, 6u);
    return;
L_10212b1f: ;
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x101c6920u), (uint32_t)(int16_t)arg1 - 3u, rd32(COW_IMG(0x10662da0u)), g->edx, 0, 1, 8u);
    return;
L_10212b31: ;
    g->esp = sp0 - 8u;
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x10662d40u))) + 8u), rd32(COW_IMG(0x10662d40u)), 3, 2u, 0u, 0u);
    return;
L_10212b45: ;
    if ((uint32_t)(int16_t)arg1 - 1u > 8u) goto L_10213155;
    t21 = rd32(COW_IMG(0x102131b4u) + (uint32_t)(int16_t)arg1 * 4u - 4u);
    switch (t21 - RD)
    {
    case 0x10212b56u: goto L_10212b56;
    case 0x10212b73u: goto L_10212b73;
    case 0x10212c96u: goto L_10212c96;
    case 0x10212cc2u: goto L_10212cc2;
    case 0x10212e01u: goto L_10212e01;
    case 0x10213155u: goto L_10213155;
    default: rt_fatal(g, COW_IMG(0x10212b4fu), "switch");
    }
    return;
L_10212b56: ;
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t59 = cow_thiscall(g, COW_IMG(0x10037bf0u), self, 0);
    t60 = g->edx;
    if ((uint16_t)arg2 == 0u) goto L_10213155;
    eax = t59;
    edx = t60;
    g->esp = sp0 - 8u;
    cow_stdcall(g, COW_IMG(0x10216620u), 0);
    return;
L_10212b73: ;
    t27 = rd32(self + 0x128u);
    t28 = rd32(self + 0x124u);
    wr8(self + 0x13cu, 1u);
    if (t27 != t28 - 1u)
    {
        eax = t27;
        ecx = t28 - 1u;
        goto L_10212b9d;
    }
    eax = t27;
    ecx = t28 - 1u;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t29 = cow_thiscall(g, COW_IMG(0x10037bf0u), ecx, 0);
    t30 = g->edx;
    cow_stdcall(g, COW_IMG(0x10216620u), 0);
    return;
L_10212b9d: ;
    if (eax > 4u) goto L_10213155;
    t31 = rd32(COW_IMG(0x102131d8u) + eax * 4u);
    switch (t31 - RD)
    {
    case 0x10212badu: goto L_10212bad;
    case 0x10212beau: goto L_10212bea;
    case 0x10212c12u: goto L_10212c12;
    case 0x10212c23u: goto L_10212c23;
    case 0x10212c54u: goto L_10212c54;
    default: rt_fatal(g, COW_IMG(0x10212ba6u), "switch");
    }
    return;
L_10212bad: ;
    if (rd8(self + 0x1c2u) != 1u)
    {
        edx = in_edx;
        goto L_10213057;
    }
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t54 = cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
    t55 = g->edx;
    d56 = cow_take_float(g);
    cow_call_regs(g, COW_IMG(0x101c68a0u), t54, rd32(COW_IMG(0x10662da0u)), t55, 1, 0);
    t57 = rd32(self + 0x108u);
    wr32(self + 0x10cu, t57);
    t58 = rd32(t57 + 0x24u);
    cow_thiscall(g, COW_IMG(0x101c6870u), rd32(COW_IMG(0x10662da0u)), 1, t58);
    fpush(g, d56);
    return;
L_10212bea: ;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
    t47 = g->edx;
    d48 = cow_take_float(g);
    t49 = rd32(rd32(COW_IMG(0x10578468u)) + 8u);
    g->eax = rd32(COW_IMG(0x10578468u));
    g->edx = t47;
    t50 = rd32(COW_IMG(0x10578468u));
    t51 = cow_thiscall(g, COW_IMG(0x1015e6e0u), COW_IMG(0x10621838u), 5, t49, 1u, 1u, 0u, 0u);
    t52 = g->ecx;
    t53 = g->edx;
    cow_stdcall(g, COW_IMG(0x10233b80u), 0);
    fpush(g, d48);
    return;
L_10212c12: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t44 = cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
    t45 = g->edx;
    d46 = cow_take_float(g);
    cow_stdcall(g, COW_IMG(0x10216500u), 0);
    fpush(g, d46);
    return;
L_10212c23: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t36 = cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
    t37 = g->edx;
    d38 = cow_take_float(g);
    if (rd32(COW_IMG(0x10664530u)) == 0u)
    {
        ecx = rd32(COW_IMG(0x10664530u));
        edx = t37;
        x0 = d38;
    }
    else
    {
        eax = t36;
        ecx = rd32(COW_IMG(0x10664530u));
        edx = t37;
        x0 = d38;
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_thiscall(g, COW_IMG(0x102169c0u), ecx, 0);
        t39 = g->ecx;
        t40 = g->edx;
        ecx = t39;
        edx = t40;
    }
    if (rd32(COW_IMG(0x105781f8u)) == 0u)
    {
        eax = rd32(COW_IMG(0x105781f8u));
    }
    else
    {
        eax = rd32(COW_IMG(0x105781f8u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t41 = cow_thiscall(g, COW_IMG(0x10221300u), eax + 0x20u, 1, 8u);
        t42 = g->ecx;
        t43 = g->edx;
        eax = t41;
        ecx = t42;
        edx = t43;
    }
    g->esp = sp0 - 8u;
    cow_stdcall(g, COW_IMG(0x1021bb60u), 0);
    fpush(g, x0);
    return;
L_10212c54: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t32 = cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
    t33 = g->edx;
    d34 = cow_take_float(g);
    if (rd32(COW_IMG(0x10664530u)) == 0u)
    {
        edx = t33;
        x0 = d34;
    }
    else
    {
        eax = t32;
        ecx = rd32(COW_IMG(0x10664530u));
        edx = t33;
        x0 = d34;
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_thiscall(g, COW_IMG(0x102169c0u), ecx, 0);
        t35 = g->edx;
        edx = t35;
    }
    if (rd32(COW_IMG(0x105781f8u)) != 0u)
    {
        eax = rd32(COW_IMG(0x105781f8u));
        g->esp = sp0 - 8u;
        cow_thiscall(g, COW_IMG(0x10221300u), eax + 0x20u, 1, 8u);
    }
    wr32(self + 0x110u, 0xdu);
    wr8(self + 0x114u, 0u);
    wr8(self + 0x120u, 0u);
    fpush(g, x0);
    return;
L_10212c96: ;
    t25 = rd32(self + 0x128u);
    wr8(self + 0x12cu, 1u);
    if ((int32_t)t25 <= 0) goto L_10213155;
    eax = t25;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10037b30u), self, 0);
    t26 = rd32(self + 0x128u) - 1u;
    wr32(self + 0x128u, t26);
    return;
L_10212cc2: ;
    t22 = rd32(self + 0x128u);
    t23 = rd32(self + 0x124u);
    wr8(self + 0x12cu, 1u);
    if ((int32_t)t22 >= (int32_t)(t23 - 1u)) goto L_10213155;
    eax = t22;
    edx = t23 - 1u;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10037b30u), self, 0);
    t24 = rd32(self + 0x128u) + 1u;
    wr32(self + 0x128u, t24);
    return;
L_10212cf5: ;
    if ((uint16_t)arg1 != 6u) goto L_10213155;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10037bf0u), self, 0);
    wr8(self + 0x120u, 1u);
    return;
L_10212d12: ;
    if ((uint32_t)(int16_t)arg1 - 1u > 0x1au) goto L_10213155;
    t10 = rd32(COW_IMG(0x102131ecu) + rd8(COW_IMG(0x1021321cu) + (uint32_t)(int16_t)arg1 - 1u) * 4u);
    switch (t10 - RD)
    {
    case 0x10212d30u: ecx = rd8(COW_IMG(0x1021321cu) + (uint32_t)(int16_t)arg1 - 1u); goto L_10212d30;
    case 0x10212d52u: ecx = rd8(COW_IMG(0x1021321cu) + (uint32_t)(int16_t)arg1 - 1u); goto L_10212d52;
    case 0x10212da2u: ecx = rd8(COW_IMG(0x1021321cu) + (uint32_t)(int16_t)arg1 - 1u); goto L_10212da2;
    case 0x10212dceu: ecx = rd8(COW_IMG(0x1021321cu) + (uint32_t)(int16_t)arg1 - 1u); goto L_10212dce;
    case 0x10212e01u: goto L_10212e01;
    case 0x10212e1bu: goto L_10212e1b;
    case 0x10212e30u: goto L_10212e30;
    case 0x10212e45u: goto L_10212e45;
    case 0x10212e5du: goto L_10212e5d;
    case 0x10212e75u: goto L_10212e75;
    case 0x10212e8du: goto L_10212e8d;
    case 0x10213155u: goto L_10213155;
    default: rt_fatal(g, COW_IMG(0x10212d29u), "switch");
    }
    return;
L_10212d30: ;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10037bf0u), ecx, 0);
L_10212d35: ;
    wr32(self + 0x110u, 2u);
    wr8(self + 0x114u, 0u);
    wr8(self + 0x120u, 0u);
    return;
L_10212d52: ;
    t17 = rd32(self + 0x138u);
    t18 = rd32(self + 0x130u);
    wr8(self + 0x13cu, 1u);
    if (t17 == t18 - 1u)
    {
        eax = t17;
        edx = t18 - 1u;
        goto L_10212d9b;
    }
    eax = t17;
    edx = t18 - 1u;
    if ((rd8(rd32(eax * 4u + self + 0x10u) + 0x29u) & 1u) == 1u)
    {
        ecx = (ecx & 0xffffff00u) | (rd8(rd32(eax * 4u + self + 0x10u) + 0x29u) & 1u);
        eax = rd32(eax * 4u + self + 0x10u);
        goto L_10212d9b;
    }
    ecx = (ecx & 0xffffff00u) | (rd8(rd32(eax * 4u + self + 0x10u) + 0x29u) & 1u);
    eax = rd32(eax * 4u + self + 0x10u);
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
    d19 = cow_take_float(g);
    wr32(self + 0x110u, 9u);
    wr8(self + 0x114u, 0u);
    wr8(self + 0x120u, 0u);
    fpush(g, d19);
    return;
L_10212d9b: ;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10037b30u), ecx, 0);
    goto L_10212d35;
L_10212da2: ;
    t15 = rd32(self + 0x138u);
    wr8(self + 0x13cu, 1u);
    if ((int32_t)t15 <= 0) goto L_10213155;
    eax = t15;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10037b30u), ecx, 0);
    t16 = rd32(self + 0x138u) - 1u;
    wr32(self + 0x138u, t16);
    return;
L_10212dce: ;
    t12 = rd32(self + 0x138u);
    t13 = rd32(self + 0x130u);
    wr8(self + 0x13cu, 1u);
    if ((int32_t)t12 >= (int32_t)(t13 - 1u)) goto L_10213155;
    eax = t12;
    edx = t13 - 1u;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10037b30u), ecx, 0);
    t14 = rd32(self + 0x138u) + 1u;
    wr32(self + 0x138u, t14);
    return;
L_10212e01: ;
    wr16(self + 0x178u, (rd16(self + 0x178u) & 0xff00u) | (rd16(self + 0x178u) & 0xf1u) | 1u);
    return;
L_10212e1b: ;
    wr8(self + 0x13cu, 0u);
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10214530u), self, 1, 0xfu);
    return;
L_10212e30: ;
    wr8(self + 0x13cu, 0u);
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10214530u), self, 1, 0xfffffff1u);
    return;
L_10212e45: ;
    wr8(self + 0x13cu, 0u);
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10214530u), self, 1, 0x96u);
    return;
L_10212e5d: ;
    wr8(self + 0x13cu, 0u);
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10214530u), self, 1, 0xffffff6au);
    return;
L_10212e75: ;
    wr8(self + 0x13cu, 0u);
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10214530u), self, 1, 0xffffff6au);
    return;
L_10212e8d: ;
    if (rd32(rd32(self + 8u) + 0x88u) == 0u) goto L_10213155;
    eax = rd32(rd32(self + 8u) + 0x88u);
    wr8(self + 0x13cu, 0u);
    t11 = rd32(eax + 0x14u);
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10214570u), self, 2, t11, 0u);
    return;
L_10212eb7: ;
    if ((uint32_t)(int16_t)arg1 - 1u > 0x1au) goto L_10213155;
    t8 = rd32(COW_IMG(0x10213238u) + rd8(COW_IMG(0x10213260u) + (uint32_t)(int16_t)arg1 - 1u) * 4u);
    switch (t8 - RD)
    {
    case 0x10212ed5u: ecx = rd8(COW_IMG(0x10213260u) + (uint32_t)(int16_t)arg1 - 1u); goto L_10212ed5;
    case 0x10212ef7u: ecx = rd8(COW_IMG(0x10213260u) + (uint32_t)(int16_t)arg1 - 1u); goto L_10212ef7;
    case 0x10212f27u: goto L_10212f27;
    case 0x10212f3cu: goto L_10212f3c;
    case 0x10212f51u: goto L_10212f51;
    case 0x10212f6du: goto L_10212f6d;
    case 0x10212f82u: goto L_10212f82;
    case 0x10212facu: goto L_10212fac;
    case 0x10212fc4u: goto L_10212fc4;
    case 0x10213155u: goto L_10213155;
    default: rt_fatal(g, COW_IMG(0x10212eceu), "switch");
    }
    return;
L_10212ed5: ;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10037bf0u), ecx, 0);
    wr32(self + 0x110u, 7u);
    wr8(self + 0x114u, 0u);
    wr8(self + 0x120u, 0u);
    return;
L_10212ef7: ;
    if (rd32(self + 0x148u) != 0u) goto L_10213155;
    eax = rd32(self + 0x148u);
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10037bf0u), ecx, 0);
    wr32(self + 0x110u, 7u);
    wr8(self + 0x114u, 0u);
    wr8(self + 0x120u, 0u);
    return;
L_10212f27: ;
    wr8(self + 0x14cu, 0u);
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x102145c0u), self, 1, 0xfu);
    return;
L_10212f3c: ;
    wr8(self + 0x14cu, 0u);
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x102145c0u), self, 1, 0xfffffff1u);
    return;
L_10212f51: ;
    wr16(self + 0x178u, (rd16(self + 0x178u) & 0xfff1u) | 1u);
    return;
L_10212f6d: ;
    wr8(self + 0x14cu, 0u);
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x102145c0u), self, 1, 0xfffffff1u);
    return;
L_10212f82: ;
    if (rd32(rd32(self + 8u) + 0x88u) == 0u) goto L_10213155;
    eax = rd32(rd32(self + 8u) + 0x88u);
    wr8(self + 0x14cu, 0u);
    t9 = rd32(eax + 0x14u);
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10214610u), self, 2, t9, 0u);
    return;
L_10212fac: ;
    wr8(self + 0x14cu, 0u);
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x102145c0u), self, 1, 0xffffff6au);
    return;
L_10212fc4: ;
    wr8(self + 0x14cu, 0u);
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x102145c0u), self, 1, 0x96u);
    return;
L_10212fdc: ;
    if ((uint32_t)(int16_t)arg1 - 1u > 0x1au) goto L_10213155;
    t2 = rd32(COW_IMG(0x1021327cu) + rd8(COW_IMG(0x102132a8u) + (uint32_t)(int16_t)arg1 - 1u) * 4u);
    switch (t2 - RD)
    {
    case 0x10212e01u: goto L_10212e01;
    case 0x10212ffau: edx = rd8(COW_IMG(0x102132a8u) + (uint32_t)(int16_t)arg1 - 1u); goto L_10212ffa;
    case 0x1021300bu: eax = (uint32_t)(int16_t)arg1 - 1u; ecx = self; edx = rd8(COW_IMG(0x102132a8u) + (uint32_t)(int16_t)arg1 - 1u); goto L_1021300b;
    case 0x10213089u: edx = rd8(COW_IMG(0x102132a8u) + (uint32_t)(int16_t)arg1 - 1u); goto L_10213089;
    case 0x102130aeu: goto L_102130ae;
    case 0x102130dau: edx = rd8(COW_IMG(0x102132a8u) + (uint32_t)(int16_t)arg1 - 1u); goto L_102130da;
    case 0x102130efu: edx = rd8(COW_IMG(0x102132a8u) + (uint32_t)(int16_t)arg1 - 1u); goto L_102130ef;
    case 0x10213104u: goto L_10213104;
    case 0x1021312au: edx = rd8(COW_IMG(0x102132a8u) + (uint32_t)(int16_t)arg1 - 1u); goto L_1021312a;
    case 0x10213142u: edx = rd8(COW_IMG(0x102132a8u) + (uint32_t)(int16_t)arg1 - 1u); goto L_10213142;
    case 0x10213155u: goto L_10213155;
    default: rt_fatal(g, COW_IMG(0x10212ff3u), "switch");
    }
    return;
L_10212ffa: ;
    if (rd32(self + 0x154u) != rd32(self + 0x150u) - 1u)
    {
        eax = rd32(self + 0x154u);
        ecx = rd32(self + 0x150u) - 1u;
        goto L_1021302d;
    }
    eax = rd32(self + 0x154u);
    ecx = rd32(self + 0x150u) - 1u;
L_1021300b: ;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10037bf0u), ecx, 0);
    wr32(self + 0x110u, 1u);
    wr8(self + 0x114u, 0u);
    wr8(self + 0x120u, 0u);
    return;
L_1021302d: ;
    if (eax == 0u) goto L_10213061;
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_10213047;
    }
    eax = eax - 1u;
    if (eax != 1u) goto L_10213155;
    eax = eax - 1u;
    if (rd8(self + 0x1c5u) == 0u) goto L_10213057;
L_10213071: ;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
    d6 = cow_take_float(g);
    t7 = (rd32(self + 0x11cu) & 0xffffff00u) | (uint8_t)(rd32(self + 0x11cu) | 1u);
    wr32(self + 0x11cu, t7);
    fpush(g, d6);
    return;
L_10213047: ;
    if (rd8(self + 0x1c3u) == 0u) goto L_10213057;
    if (rd8(self + 0x1c4u) != 0u) goto L_10213071;
L_10213057: ;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    return;
L_10213061: ;
    if (rd8(self + 0x1c3u) == 0u) goto L_10213057;
    if (rd8(self + 0x1c4u) != 0u) goto L_10213057;
    goto L_10213071;
L_10213089: ;
    if ((int32_t)rd32(self + 0x154u) <= 0) goto L_10213155;
    eax = rd32(self + 0x154u);
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10037b30u), self, 0);
    t5 = rd32(self + 0x154u) - 1u;
    wr32(self + 0x154u, t5);
    return;
L_102130ae: ;
    if ((int32_t)rd32(self + 0x154u) >= (int32_t)(rd32(self + 0x150u) - 1u)) goto L_10213155;
    eax = rd32(self + 0x154u);
    edx = rd32(self + 0x150u) - 1u;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10037b30u), self, 0);
    t4 = rd32(self + 0x154u) + 1u;
    wr32(self + 0x154u, t4);
    return;
L_102130da: ;
    wr8(self + 0x158u, 0u);
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10214660u), self, 1, 0xfu);
    return;
L_102130ef: ;
    wr8(self + 0x158u, 0u);
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10214660u), self, 1, 0xfffffff1u);
    return;
L_10213104: ;
    if (rd32(rd32(self + 8u) + 0x88u) == 0u) goto L_10213155;
    eax = rd32(rd32(self + 8u) + 0x88u);
    wr8(self + 0x158u, 0u);
    t3 = rd32(eax + 0x14u);
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x102146a0u), self, 2, t3, 0u);
    return;
L_1021312a: ;
    wr8(self + 0x158u, 0u);
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10214660u), self, 1, 0xffffff6au);
    return;
L_10213142: ;
    wr8(self + 0x158u, 0u);
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10214660u), self, 1, 0x96u);
L_10213155: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10212aa0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10212aa0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
