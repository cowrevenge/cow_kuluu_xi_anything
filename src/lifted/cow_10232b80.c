/* f_0x10232b80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10232b80(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_10;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((uint32_t)(int16_t)arg1 - 3u > 0x1bu)
    {
        eax = (uint32_t)(int16_t)arg1 - 3u;
        edx = in_edx;
        ebx = rd32(sp0 + 8u);
        goto L_10232df7;
    }
    ebx = rd32(sp0 + 8u);
    t1 = rd32(COW_IMG(0x10232e08u) + rd8(COW_IMG(0x10232e24u) + (uint32_t)(int16_t)arg1 - 3u) * 4u);
    switch (t1 - RD)
    {
    case 0x10232babu: goto L_10232bab;
    case 0x10232c7fu: goto L_10232c7f;
    case 0x10232d17u: ecx = rd8(COW_IMG(0x10232e24u) + (uint32_t)(int16_t)arg1 - 3u); goto L_10232d17;
    case 0x10232d79u: ecx = rd8(COW_IMG(0x10232e24u) + (uint32_t)(int16_t)arg1 - 3u); goto L_10232d79;
    case 0x10232dcfu: goto L_10232dcf;
    case 0x10232df7u: eax = (uint32_t)(int16_t)arg1 - 3u; edx = in_edx; goto L_10232df7;
    case 0x10232e00u: goto L_10232e00;
    default: rt_fatal(g, COW_IMG(0x10232ba4u), "switch");
    }
    return;
L_10232bab: ;
    if ((uint32_t)(int16_t)rd16(sp0 + 8u) == 9u)
    {
        edx = in_edx;
        goto L_10232da4;
    }
    eax = (uint32_t)(int16_t)rd16(sp0 + 8u) - 9u;
    if (eax == 1u)
    {
        eax = rd32(self + 0x64u);
        edx = in_edx;
        goto L_10232d45;
    }
    eax = rd32(self + 0x64u);
    if (eax != 0u) goto L_10232c52;
    if ((int32_t)rd32(self + 0x40u) <= 0) goto L_10232e00;
    t24 = rd32(self + 0x30u);
    if (rd32(self + 0x68u) != 2u)
    {
        eax = rd32(self + 0x68u);
        edx = t24;
        loc_10 = t24;
        goto L_10232c0a;
    }
    eax = rd32(self + 0x68u);
    edx = t24;
    loc_10 = t24;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t25 = cow_thiscall(g, COW_IMG(0x10231e90u), self, 1, loc_10);
    t26 = g->edx;
    if ((int32_t)t25 <= 0) goto L_10232e00;
    eax = t25;
    edx = t26;
    if (eax >= 0xf200u) goto L_10232e00;
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x10232b40u), eax, self, g->edx, 0, 1, eax);
    g->ebx = in_ebx;
    return;
L_10232c0a: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t27 = cow_thiscall(g, COW_IMG(0x10231e90u), self, 1, loc_10);
    t28 = g->edx;
    if ((uint16_t)t27 < 0xf200u)
    {
        eax = t27;
        edx = t28;
        goto L_10232c2b;
    }
    eax = t27;
    edx = t28;
    if ((uint16_t)eax >= 0xffffu) goto L_10232c2b;
    g->esp = sp0 - 0xcu;
    cow_fastcall(g, COW_IMG(0x10230450u), self + 0x70u, edx, 2, eax, edx);
    g->ebx = in_ebx;
    return;
L_10232c2b: ;
    if ((uint16_t)eax < 0xe000u) goto L_10232e00;
    if ((uint16_t)eax >= 0xf000u) goto L_10232e00;
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x10232b40u), (uint16_t)eax, self, g->edx, 0, 1, (uint16_t)eax);
    g->ebx = in_ebx;
    return;
L_10232c52: ;
    if (eax != 1u) goto L_10232e00;
    if (rd16(self + 0x8cu) >= 0xf200u) goto L_10232e00;
    eax = (eax & 0xffff0000u) | rd16(self + 0x8cu);
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x10232770u), (uint16_t)eax, self, g->edx, 0, 1, (uint16_t)eax);
    g->ebx = in_ebx;
    return;
L_10232c7f: ;
    if (rd32(self + 0x64u) != 0u)
    {
        eax = rd32(self + 0x64u);
        goto L_10232cf7;
    }
    eax = rd32(self + 0x64u);
    t10 = rd8(self + rd8(self + 0x8bu) + 0x86u);
    t11 = rd8(self + 0x8bu);
    wr8(sp0 + 8u, (uint8_t)t10);
    g->edx = t11;
    g->esp = sp0 - 0xcu;
    t12 = cow_call_regs(g, COW_IMG(0x10230490u), (eax & 0xffffff00u) | t10, self + 0x70u, g->edx, 1, 0);
    t13 = g->edx;
    if ((uint8_t)t12 == 0u)
    {
        eax = t12;
        goto L_10232cc0;
    }
    eax = t12;
    edx = t13;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t14 = cow_call_regs(g, COW_IMG(0x10231080u), eax, self, g->edx, 1, 0);
    t15 = g->edx;
    t16 = (uint8_t)rd32(sp0 + 8u);
    cow_thiscall(g, COW_IMG(0x10221b90u), self, 1, t16);
    g->ebx = in_ebx;
    return;
L_10232cc0: ;
    t17 = rd32(self + 8u);
    g->edx = t17;
    g->esp = sp0 - 0xcu;
    t18 = cow_call_regs(g, COW_IMG(0x1015e790u), eax, COW_IMG(0x10621838u), g->edx, 0, 2, t17, 0u);
    t19 = g->edx;
    t20 = cow_fastcall(g, COW_IMG(0x10221c70u), rd32(COW_IMG(0x10668eccu)), t19, 0);
    t21 = g->edx;
    cow_thiscall(g, COW_IMG(0x10221c60u), rd32(COW_IMG(0x10668eccu)), 0);
    wr8(self + 0x8fu, 0u);
    wr8(self + 0x8eu, 0u);
    g->ebx = in_ebx;
    return;
L_10232cf7: ;
    if (eax != 1u) goto L_10232e00;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t22 = cow_thiscall(g, COW_IMG(0x10221c60u), self, 0);
    t23 = g->edx;
    cow_fastcall(g, COW_IMG(0x10221cb0u), self, t23, 0);
    wr32(self + 0x64u, 0u);
    g->ebx = in_ebx;
    return;
L_10232d17: ;
    g->ebx = ebx;
    g->edx = in_edx;
    g->esp = sp0;
    t7 = cow_call_regs(g, COW_IMG(0x10123a70u), (uint32_t)(int16_t)arg1 - 3u, ecx, g->edx, 1, 7, 0x3eu, 0xa8u, 4u, 0xffffffffu, in_edi, in_esi, in_ebx);
    t8 = g->edx;
    if ((uint8_t)t7 == 0u)
    {
        edx = t8;
        goto L_10232d42;
    }
    edx = t8;
    t9 = rd32(sp0 + 8u);
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x10222150u), self, 2, 0x19u, t9);
    g->ebx = in_ebx;
    return;
L_10232d42: ;
    eax = rd32(self + 0x64u);
L_10232d45: ;
    if (eax != 0u) goto L_10232e00;
    if (rd32(self + 0x68u) != 3u) goto L_10232e00;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t29 = cow_call_regs(g, COW_IMG(0x102304b0u), eax, self + 0x70u, g->edx, 1, 0);
    t30 = g->edx;
    if ((uint8_t)t29 == 0u) goto L_10232e00;
    eax = t29;
    edx = t30;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t31 = cow_call_regs(g, COW_IMG(0x10231080u), eax, self, g->edx, 1, 0);
    t32 = g->ecx;
    t33 = g->edx;
    cow_thiscall(g, COW_IMG(0x10037b30u), t32, 0);
    g->ebx = in_ebx;
    return;
L_10232d79: ;
    g->ebx = ebx;
    g->edx = in_edx;
    g->esp = sp0;
    t4 = cow_call_regs(g, COW_IMG(0x10123a70u), (uint32_t)(int16_t)arg1 - 3u, ecx, g->edx, 1, 7, 0x3eu, 0xa8u, 4u, 0xffffffffu, in_edi, in_esi, in_ebx);
    t5 = g->edx;
    if ((uint8_t)t4 == 0u)
    {
        edx = t5;
        goto L_10232da4;
    }
    eax = t4;
    edx = t5;
    t6 = rd32(sp0 + 8u);
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x10222150u), self, 2, 0x18u, t6);
    g->ebx = in_ebx;
    return;
L_10232da4: ;
    if (rd32(self + 0x64u) != 0u) goto L_10232e00;
    eax = rd32(self + 0x64u);
    if (rd32(self + 0x68u) != 3u) goto L_10232e00;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t34 = cow_call_regs(g, COW_IMG(0x102304e0u), eax, self + 0x70u, g->edx, 1, 0);
    t35 = g->edx;
    if ((uint8_t)t34 == 0u) goto L_10232e00;
    eax = t34;
    edx = t35;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t36 = cow_call_regs(g, COW_IMG(0x10231080u), eax, self, g->edx, 1, 0);
    t37 = g->ecx;
    t38 = g->edx;
    cow_thiscall(g, COW_IMG(0x10037b30u), t37, 0);
    g->ebx = in_ebx;
    return;
L_10232dcf: ;
    if (rd32(self + 0x64u) != 0u)
    {
        eax = rd32(self + 0x64u);
        edx = in_edx;
        goto L_10232df7;
    }
    if ((int16_t)ebx < 9)
    {
        eax = (uint32_t)(int16_t)ebx;
        goto L_10232df0;
    }
    eax = (uint32_t)(int16_t)ebx;
    if ((int32_t)eax > 10) goto L_10232df0;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x10221cd0u), self, 0);
    return;
L_10232df0: ;
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t2 = cow_fastcall(g, COW_IMG(0x10221ce0u), self, in_edx, 0);
    t3 = g->edx;
    eax = t2;
    edx = t3;
L_10232df7: ;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x10222150u), self, 2, arg1, ebx);
L_10232e00: ;
    g->ebx = in_ebx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10232b80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10232b80(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
