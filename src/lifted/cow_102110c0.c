/* f_0x102110c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_102110c0(Guest* g)
{
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(self + 0x14u) != 0u)
    {
        eax = rd32(self + 0x14u);
        goto L_102110de;
    }
    t1 = rd32(self + 8u);
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t2 = cow_call_regs(g, COW_IMG(0x1015e790u), t1, COW_IMG(0x10621838u), g->edx, 0, 2, t1, 1u);
    t3 = g->edx;
    g->edx = t3;
    return t2;
L_102110de: ;
    if ((uint32_t)(int16_t)arg1 - 5u > 0x1bu)
    {
        edx = in_edx;
        goto L_1021123c;
    }
    t4 = rd32(COW_IMG(0x10211250u) + rd8(COW_IMG(0x10211264u) + (uint32_t)(int16_t)arg1 - 5u) * 4u);
    edx = rd8(COW_IMG(0x10211264u) + (uint32_t)(int16_t)arg1 - 5u);
    switch (t4 - RD)
    {
    case 0x102110feu: goto L_102110fe;
    case 0x10211130u: goto L_10211130;
    case 0x10211187u: goto L_10211187;
    case 0x1021121fu: goto L_1021121f;
    case 0x1021123cu: goto L_1021123c;
    default: rt_fatal(g, COW_IMG(0x102110f7u), "switch");
    }
    return 0;
L_102110fe: ;
    if (rd32(self + 0x40u) == 0u)
    {
        eax = rd32(self + 0x40u);
        goto L_1021117c;
    }
    eax = rd32(self + 0x40u);
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_1021114b;
    }
    eax = eax - 1u;
    if (eax != 1u)
    {
        eax = eax - 1u;
        goto L_1021124b;
    }
    eax = eax - 1u;
    if ((uint16_t)arg2 != 1u)
    {
        eax = (eax & 0xffff0000u) | (uint16_t)arg2;
        goto L_10211126;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)arg2;
    g->eax = eax;
    g->esp = sp0 - 4u;
    t26 = cow_fastcall(g, COW_IMG(0x10211370u), self, edx, 0);
    t27 = g->edx;
    g->edx = t27;
    return t26;
L_10211126: ;
    if ((uint16_t)eax != 2u) goto L_1021124b;
L_10211130: ;
    if (rd8(rd32(COW_IMG(0x10578188u)) + 0x24u) == 0u)
    {
        eax = rd32(COW_IMG(0x10578188u));
        goto L_1021124b;
    }
    eax = rd32(COW_IMG(0x10578188u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t28 = cow_stdcall(g, COW_IMG(0x10211340u), 0);
    t29 = g->edx;
    g->edx = t29;
    return t28;
L_1021114b: ;
    if ((uint16_t)arg2 != 1u)
    {
        eax = (eax & 0xffff0000u) | (uint16_t)arg2;
        goto L_10211172;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)arg2;
    if (rd8(rd32(COW_IMG(0x10578188u)) + 0x24u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(rd32(COW_IMG(0x10578188u)) + 0x24u);
        goto L_1021124b;
    }
    eax = (eax & 0xffffff00u) | rd8(rd32(COW_IMG(0x10578188u)) + 0x24u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t30 = cow_stdcall(g, COW_IMG(0x10211340u), 0);
    t31 = g->edx;
    g->edx = t31;
    return t30;
L_10211172: ;
    if ((uint16_t)eax != 2u) goto L_1021124b;
L_1021117c: ;
    g->eax = eax;
    g->esp = sp0 - 4u;
    t32 = cow_fastcall(g, COW_IMG(0x10211370u), self, edx, 0);
    t33 = g->edx;
    g->edx = t33;
    return t32;
L_10211187: ;
    if (rd8(self + 0x39u) == 0u)
    {
        ecx = ((uint32_t)(int16_t)arg1 - 5u & 0xffffff00u) | rd8(self + 0x39u);
        goto L_10211216;
    }
    ecx = ((uint32_t)(int16_t)arg1 - 5u & 0xffffff00u) | rd8(self + 0x39u);
    t7 = rd32(self + 0x18u);
    g->eax = eax;
    g->edx = t7;
    g->esp = sp0 - 4u;
    t8 = cow_thiscall_cdecl(g, eax, ecx, 2, t7, 0u);
    t9 = g->edx;
    if (rd8(self + 0x3au) != 0u)
    {
        eax = (t8 & 0xffffff00u) | rd8(self + 0x3au);
        edx = t9;
        goto L_102111ce;
    }
    edx = t9;
    t10 = rd32(self + 8u);
    wr32(self + 0x14u, 0u);
    g->edx = edx;
    g->esp = sp0 - 4u;
    t11 = cow_call_regs(g, COW_IMG(0x1015e790u), t10, COW_IMG(0x10621838u), g->edx, 0, 2, t10, 1u);
    t12 = g->edx;
    g->edx = t12;
    t13 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1036f618u));
    t14 = g->edx;
    g->edx = t14;
    return t13;
L_102111ce: ;
    t15 = rd32(self + 8u);
    g->esp = sp0 - 4u;
    t16 = cow_call_regs(g, COW_IMG(0x1015e790u), eax, COW_IMG(0x10621838u), g->edx, 0, 2, t15, 1u);
    g->edx = self + 0x20u;
    t17 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, self + 0x20u, 1u, 0u);
    t18 = g->edx;
    t19 = rd8(self + 0x3bu);
    wr8(self + 0x3au, 0u);
    if ((uint8_t)t19 != 0u)
    {
        eax = (t17 & 0xffffff00u) | t19;
        edx = t18;
    }
    else
    {
        eax = (t17 & 0xffffff00u) | t19;
        edx = t18;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t20 = cow_call_regs(g, COW_IMG(0x10118e90u), eax, rd32(self + 8u), g->edx, 0, 1, 2u);
        t21 = g->edx;
        eax = t20;
        edx = t21;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t22 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1036f618u));
    t23 = g->edx;
    g->edx = t23;
    return t22;
L_10211216: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t24 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    t25 = g->edx;
    g->edx = t25;
    return t24;
L_1021121f: ;
    if (rd32(self + 0x40u) == 0u)
    {
        eax = rd32(self + 0x40u);
        goto L_1021124b;
    }
    eax = rd32(self + 0x40u);
    if (rd8(rd32(COW_IMG(0x10578188u)) + 0x24u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(rd32(COW_IMG(0x10578188u)) + 0x24u);
        goto L_1021124b;
    }
    eax = (eax & 0xffffff00u) | rd8(rd32(COW_IMG(0x10578188u)) + 0x24u);
    ecx = rd32(COW_IMG(0x10578188u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t5 = cow_thiscall(g, COW_IMG(0x1012cac0u), ecx, 0);
    t6 = g->edx;
    g->edx = t6;
    return t5;
L_1021123c: ;
    t34 = (edx & 0xffff0000u) | rd16(rd32(self + 8u) + 0x4cu);
    g->eax = eax;
    g->edx = t34;
    g->esp = sp0 - 4u;
    t35 = cow_thiscall(g, COW_IMG(0x102112b0u), self, 1, t34);
    t36 = g->edx;
    eax = t35;
    edx = t36;
L_1021124b: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102110c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102110c0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
