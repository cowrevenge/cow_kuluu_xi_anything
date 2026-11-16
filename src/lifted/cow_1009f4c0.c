/* f_0x1009f4c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1009f4c0(Guest* g)
{
    double d30;
    double d34;
    double d35;
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
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
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
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, in_edi);
    if ((rd32(self + 0x120u) & 0x200u) == 0u) goto L_1009f787;
    if (rd8(self + 0x1bcu) != 0u) goto L_1009f787;
    eax = (in_eax & 0xffffff00u) | rd8(self + 0x1bcu);
    wr32(sp0 - 0x10u, COW_IMG(0x10330ebcu));
    g->eax = eax;
    t1 = rd32(self + 0xa0u);
    g->esp = sp0 - 0xcu;
    t2 = cow_fastcall(g, COW_IMG(0x1002c8f0u), t1, in_edx, 1, COW_IMG(0x10330ebcu));
    t3 = g->ecx;
    t4 = g->edx;
    if ((uint8_t)t2 == 0u)
    {
        ecx = t3;
        goto L_1009f50b;
    }
    eax = t2;
    edx = t4;
    t5 = rd32(self + 0xa0u);
    g->esp = sp0 - 0xcu;
    t6 = cow_call_regs(g, COW_IMG(0x100d12d0u), eax, t5, g->edx, 1, 0);
    t7 = g->ecx;
    if ((uint8_t)t6 == 0u) goto L_1009f787;
    ecx = t7;
L_1009f50b: ;
    if ((rd32(self + 0x128u) & 0x10000000u) == 0u) goto L_1009f787;
    eax = rd32(self + 0x128u);
    if ((int16_t)rd16(self + 0x158u) >= 100)
    {
        ecx = (ecx & 0xffff0000u) | rd16(self + 0x158u);
        ecx = ecx - 0x235bu;
    }
    else
    {
        ecx = (ecx & 0xffff0000u) | rd16(self + 0x158u);
        ecx = ecx + 0x1330u;
    }
    if ((uint32_t)(int8_t)rd8(self + 0x15au) > 0xbu) goto L_1009f787;
    edx = (uint32_t)(int8_t)rd8(self + 0x15au);
    t8 = rd32(COW_IMG(0x1009f78cu) + edx * 4u);
    switch (t8 - RD)
    {
    case 0x1009f54eu: goto L_1009f54e;
    case 0x1009f56fu: goto L_1009f56f;
    case 0x1009f596u: goto L_1009f596;
    case 0x1009f5bcu: goto L_1009f5bc;
    case 0x1009f6d2u: goto L_1009f6d2;
    case 0x1009f725u: goto L_1009f725;
    case 0x1009f748u: goto L_1009f748;
    case 0x1009f787u: goto L_1009f787;
    default: rt_fatal(g, COW_IMG(0x1009f547u), "switch");
    }
    return;
L_1009f54e: ;
    wr32(sp0 - 0x10u, 0u);
    t49 = rd32(self + 0xa0u);
    wr32(sp0 - 0x14u, t49);
    wr32(sp0 - 0x18u, 0x30736572u);
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, rd32(rd32(t49) + 0x298u), t49, 3, 0x30736572u, t49, 0u);
    wr8(self + 0x15au, 0xau);
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    return;
L_1009f56f: ;
    t47 = rd32(self + 0xa0u);
    wr32(sp0 - 0x10u, t47);
    wr32(sp0 - 0x14u, 0x30736572u);
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t48 = cow_thiscall(g, rd32(rd32(t47) + 0x2a0u), t47, 2, 0x30736572u, t47);
    if ((uint8_t)t48 == 1u) goto L_1009f787;
    wr8(self + 0x15au, 0xbu);
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    return;
L_1009f596: ;
    wr32(sp0 - 0x10u, 0u);
    t46 = rd32(self + 0xa0u);
    wr32(sp0 - 0x14u, t46);
    wr32(sp0 - 0x18u, t46);
    wr32(sp0 - 0x1cu, 0x74737266u);
    wr32(sp0 - 0x20u, (uint32_t)(int16_t)ecx);
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x10062e20u), 5, (uint32_t)(int16_t)ecx, 0x74737266u, t46, t46, 0u);
    wr8(self + 0x15au, 1u);
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    return;
L_1009f5bc: ;
    t21 = rd32(self + 0xa0u);
    wr32(sp0 - 0x10u, t21);
    wr32(sp0 - 0x14u, t21);
    wr32(sp0 - 0x18u, 0x74737266u);
    wr32(sp0 - 0x1cu, (uint32_t)(int16_t)ecx);
    g->eax = t21;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t22 = cow_thiscall_cdecl(g, COW_IMG(0x10062ed0u), ecx, 4, (uint32_t)(int16_t)ecx, 0x74737266u, t21, t21);
    t23 = g->edx;
    if ((uint8_t)t22 == 0u)
    {
        edx = t23;
        edi = (uint32_t)(int16_t)ecx;
        goto L_1009f695;
    }
    edx = t23;
    edi = (uint32_t)(int16_t)ecx;
    if (rd32(self + 0x170u) == 0x2cu)
    {
        ecx = rd32(self + 0x170u);
        goto L_1009f640;
    }
    ecx = rd32(self + 0x170u);
    if (rd32(self + 0x16cu) == 0x2cu) goto L_1009f640;
    t24 = rd32(self + 0xa0u);
    wr32(sp0 - 0x10u, t24);
    wr32(sp0 - 0x14u, t24);
    wr32(sp0 - 0x18u, 0x74737266u);
    wr32(sp0 - 0x1cu, edi);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x10062e80u), 4, edi, 0x74737266u, t24, t24);
    t25 = g->ecx;
    t26 = g->edx;
    wr32(sp0 - 0x20u, 0u);
    t27 = rd32(self + 0xa0u);
    wr32(sp0 - 0x24u, t27);
    wr32(sp0 - 0x28u, t27);
    wr32(sp0 - 0x2cu, 0x72637473u);
    wr32(sp0 - 0x30u, edi);
    g->eax = t27;
    g->esp = sp0 - 0x1cu;
    t28 = cow_cdecl(g, COW_IMG(0x10062e20u), 5, edi, 0x72637473u, t27, t27, 0u);
    wr32(sp0 - 0x10u, 0u);
    t29 = rd32(self + 0xa0u);
    wr32(sp0 - 0x14u, t29);
    wr32(sp0 - 0x18u, 0x32736572u);
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, rd32(rd32(rd32(self + 0xa0u)) + 0x298u), t29, 3, 0x32736572u, t29, 0u);
    wr8(self + 0x15au, 4u);
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    return;
L_1009f640: ;
    if (rd16(self + 0x152u) == 0u) goto L_1009f787;
    eax = rd16(self + 0x152u);
    wr32(sp0 - 4u, (uint16_t)eax);
    d30 = (double)(float)(double)(int32_t)(uint16_t)eax;
    wrf32(sp0 - 4u, (float)d30);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t31 = cow_call_regs(g, COW_IMG(0x10014cf0u), (uint16_t)eax, g->ecx, g->edx, 1, 0);
    t32 = g->ecx;
    t33 = g->edx;
    d34 = cow_take_float(g);
    g->ecx = t32;
    g->edx = t33;
    d35 = fr(g, (double)rdf32(sp0 - 4u) - d34);
    fpush(g, d35);
    t36 = cow_call_regs(g, COW_IMG(0x10311c6cu), t31, g->ecx, g->edx, 1, 0);
    t37 = g->ecx;
    t38 = g->edx;
    wr16(self + 0x152u, (uint16_t)t36);
    if ((uint16_t)t36 != 0u) goto L_1009f787;
    ecx = t37;
    edx = t38;
    t39 = rd32(self + 0xa0u);
    wr32(sp0 - 0x10u, t39);
    wr32(sp0 - 0x14u, t39);
    wr32(sp0 - 0x18u, 0x74737266u);
    wr32(sp0 - 0x1cu, edi);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x10062e80u), 4, edi, 0x74737266u, t39, t39);
    t40 = g->edx;
    edx = t40;
L_1009f695: ;
    wr32(sp0 - 0x10u, 0u);
    t41 = rd32(self + 0xa0u);
    wr32(sp0 - 0x14u, t41);
    wr32(sp0 - 0x18u, t41);
    t42 = rd32(COW_IMG(0x1035b6e0u) + (uint32_t)(int8_t)rd8(self + 0x15bu) * 4u);
    wr32(sp0 - 0x1cu, t42);
    wr32(sp0 - 0x20u, edi);
    g->eax = (uint32_t)(int8_t)rd8(self + 0x15bu);
    t43 = rd8(self + 0x15bu);
    g->esp = sp0 - 0xcu;
    t44 = cow_cdecl(g, COW_IMG(0x10062e20u), 5, edi, t42, t41, t41, 0u);
    t45 = rd8(self + 0x15au);
    wr16(self + 0x152u, 0u);
    wr8(self + 0x15au, (uint8_t)(t45 + 1u));
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    return;
L_1009f6d2: ;
    t15 = rd32(self + 0xa0u);
    wr32(sp0 - 0x10u, t15);
    wr32(sp0 - 0x14u, t15);
    t16 = rd32(COW_IMG(0x1035b6e0u) + (uint32_t)(int8_t)rd8(self + 0x15bu) * 4u);
    wr32(sp0 - 0x18u, t16);
    wr32(sp0 - 0x1cu, (uint32_t)(int16_t)ecx);
    g->eax = t16;
    g->esp = sp0 - 0xcu;
    t17 = cow_thiscall_cdecl(g, COW_IMG(0x10062ed0u), (uint32_t)(int16_t)ecx, 4, (uint32_t)(int16_t)ecx, t16, t15, t15);
    if ((uint8_t)t17 != 0u) goto L_1009f787;
    eax = t17;
    wr32(sp0 - 0x10u, 0u);
    t18 = rd32(self + 0xa0u);
    wr32(sp0 - 0x14u, t18);
    wr32(sp0 - 0x18u, 0x32736572u);
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t19 = cow_thiscall(g, rd32(rd32(t18) + 0x298u), t18, 3, 0x32736572u, t18, 0u);
    t20 = rd32(sp0 - 0xcu);
    wr8(self + 0x15au, (uint8_t)(rd8(self + 0x15au) + 1u));
    g->esi = rd32(sp0 - 8u);
    g->edi = t20;
    return;
L_1009f725: ;
    if ((rd32(self + 0x1d0u) & 0x200u) == 0u) goto L_1009f77c;
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 0x59u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t12 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0x59u, 0u, 0u);
    t13 = g->ecx;
    t14 = g->edx;
    if (t12 == 0u) goto L_1009f787;
    eax = t12;
    ecx = t13;
    edx = t14;
    wr32(eax + 4u, 0u);
L_1009f769: ;
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, 0x10u);
    wr32(sp0 - 0x18u, eax);
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x100fc4d0u), 3, eax, 0x10u, 0u);
    eax = rd32(self + 0x128u);
L_1009f77c: ;
    wr32(self + 0x128u, eax & 0xefffffffu);
L_1009f787: ;
    return;
L_1009f748: ;
    if ((rd32(self + 0x1d0u) & 0x200u) == 0u) goto L_1009f77c;
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 0x59u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t9 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0x59u, 0u, 0u);
    t10 = g->ecx;
    t11 = g->edx;
    if (t9 == 0u) goto L_1009f787;
    eax = t9;
    ecx = t10;
    edx = t11;
    wr32(eax + 4u, 1u);
    goto L_1009f769;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1009f4c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1009f4c0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
