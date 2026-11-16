/* f_0x100b98e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b98e0(Guest* g)
{
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
    uint32_t t31;
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
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;

    t1 = (in_eax & 0xffff0000u) | rd16(self + 0x256u);
    t2 = rd8((uint16_t)t1 + rd32(self + 0x20u) + 1u);
    if (t2 > 5u) goto L_100b9b42;
    eax = t1;
    ecx = t2;
    edx = rd32(self + 0x20u);
    t3 = rd32(COW_IMG(0x100b9b4cu) + ecx * 4u);
    switch (t3 - RD)
    {
    case 0x100b9914u: goto L_100b9914;
    case 0x100b997cu: goto L_100b997c;
    case 0x100b999eu: goto L_100b999e;
    case 0x100b9a28u: goto L_100b9a28;
    case 0x100b9aa5u: goto L_100b9aa5;
    case 0x100b9ac5u: goto L_100b9ac5;
    default: rt_fatal(g, COW_IMG(0x100b990du), "switch");
    }
    return;
L_100b9914: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t45 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0x58u, 0u, 0u);
    t46 = g->edx;
    if (t45 == 0u) goto L_100b9b42;
    eax = t45;
    edx = t46;
    edi = t45;
    wr16(edi + 0xau, 1u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t47 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
    t48 = g->edx;
    wr16(edi + 4u, (uint16_t)t47);
    g->edx = t48;
    t49 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 4u);
    t50 = g->edx;
    wr16(edi + 6u, (uint16_t)t49);
    g->edx = t50;
    t51 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 6u);
    t52 = g->ecx;
    t53 = g->edx;
    wr16(edi + 8u, (uint16_t)t51);
    cow_cdecl(g, COW_IMG(0x100fc4d0u), 3, edi, 0x14u, 0u);
    wr8(COW_IMG(0x10480a90u), 1u);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 8u));
    wr8(self + 0x25au, 1u);
    return;
L_100b997c: ;
    if (rd8(COW_IMG(0x10480a90u)) != 0u) goto L_100b9b42;
    wr8(self + 0x25au, 1u);
    wr16(self + 0x256u, (uint16_t)(eax + 2u));
    return;
L_100b999e: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t32 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0x58u, 0u, 0u);
    t33 = g->edx;
    if (t32 == 0u) goto L_100b9b42;
    eax = t32;
    edx = t33;
    edi = t32;
    wr16(edi + 0xau, 2u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t34 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
    t35 = g->edx;
    wr16(edi + 4u, (uint16_t)t34);
    g->edx = t35;
    t36 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 4u);
    t37 = g->edx;
    wr16(edi + 6u, (uint16_t)t36);
    wr16(edi + 8u, 0u);
    g->edx = t37;
    t38 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 6u);
    t39 = g->edx;
    wr16(edi + 0x12u, (uint16_t)t38);
    g->edx = t39;
    t40 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 8u);
    t41 = g->edx;
    wr16(edi + 0xcu, (uint16_t)t40);
    g->edx = t41;
    t42 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 0xau);
    t43 = g->ecx;
    t44 = g->edx;
    wr16(edi + 0xeu, (uint16_t)t42);
    cow_cdecl(g, COW_IMG(0x100fc4d0u), 3, edi, 0x14u, 0u);
    wr8(COW_IMG(0x10480a90u), 1u);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 0xcu));
    wr8(self + 0x25au, 1u);
    return;
L_100b9a28: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t21 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0x58u, 0u, 0u);
    t22 = g->edx;
    if (t21 == 0u) goto L_100b9b42;
    eax = t21;
    edx = t22;
    edi = t21;
    wr16(edi + 0xau, 3u);
L_100b9a46: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t23 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
    t24 = g->edx;
    wr16(edi + 4u, (uint16_t)t23);
    g->edx = t24;
    t25 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 4u);
    t26 = g->edx;
    wr16(edi + 6u, (uint16_t)t25);
    wr16(edi + 8u, 0u);
    g->edx = t26;
    t27 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 6u);
    t28 = g->edx;
    wr16(edi + 0x12u, (uint16_t)t27);
    g->edx = t28;
    t29 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 8u);
    t30 = g->ecx;
    t31 = g->edx;
    wr16(edi + 0x10u, (uint16_t)t29);
    cow_cdecl(g, COW_IMG(0x100fc4d0u), 3, edi, 0x14u, 0u);
    wr8(COW_IMG(0x10480a90u), 1u);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 0xau));
    wr8(self + 0x25au, 1u);
    return;
L_100b9aa5: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t19 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0x58u, 0u, 0u);
    t20 = g->edx;
    if (t19 == 0u) goto L_100b9b42;
    eax = t19;
    edx = t20;
    edi = t19;
    wr16(edi + 0xau, 4u);
    goto L_100b9a46;
L_100b9ac5: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t4 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0x58u, 0u, 0u);
    t5 = g->edx;
    if (t4 != 0u)
    {
        eax = t4;
        edx = t5;
        edi = t4;
        wr16(edi + 0xau, 5u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t6 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
        t7 = g->edx;
        wr16(edi + 0xcu, (uint16_t)t6);
        g->edx = t7;
        t8 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 4u);
        t9 = g->edx;
        wr16(edi + 4u, (uint16_t)t8);
        g->edx = t9;
        t10 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 6u);
        t11 = g->edx;
        wr16(edi + 6u, (uint16_t)t10);
        g->edx = t11;
        t12 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 8u);
        t13 = g->edx;
        wr16(edi + 0x12u, (uint16_t)t12);
        g->edx = t13;
        t14 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 0xau);
        t15 = g->edx;
        wr16(edi + 0x10u, (uint16_t)t14);
        g->edx = t15;
        t16 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 0xcu);
        t17 = g->ecx;
        t18 = g->edx;
        wr16(edi + 8u, (uint16_t)t16);
        cow_cdecl(g, COW_IMG(0x100fc4d0u), 3, edi, 0x14u, 0u);
        wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 0xeu));
    }
L_100b9b42: ;
    wr8(self + 0x25au, 1u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b98e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100b98e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
