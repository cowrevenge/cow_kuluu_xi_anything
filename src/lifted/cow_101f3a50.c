/* f_0x101f3a50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101f3a50(Guest* g)
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
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 0xcu, in_esi);
    if ((uint32_t)(int16_t)arg1 == 5u) goto L_101f3a7f;
    if ((uint32_t)(int16_t)arg1 == 6u)
    {
        eax = (uint32_t)(int16_t)arg1 - 6u;
        goto L_101f3a6c;
    }
    if ((uint32_t)(int16_t)arg1 - 6u != 2u)
    {
        eax = (uint32_t)(int16_t)arg1 - 8u;
        edx = in_edx;
        goto L_101f3c30;
    }
    eax = (uint32_t)(int16_t)arg1 - 8u;
L_101f3a6c: ;
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t1 = cow_fastcall(g, COW_IMG(0x101f3740u), self, in_edx, 0);
    t2 = g->ecx;
    t3 = g->edx;
    g->edx = t3;
    t4 = cow_thiscall(g, COW_IMG(0x10037e90u), t2, 0);
    t5 = g->edx;
    g->edx = t5;
    return t4;
L_101f3a7f: ;
    if ((uint32_t)(int16_t)arg2 == 1u) goto L_101f3bf4;
    if ((uint32_t)(int16_t)arg2 == 2u) goto L_101f3b72;
    if ((uint32_t)(int16_t)arg2 != 3u)
    {
        eax = (uint32_t)(int16_t)arg2 - 3u;
        edx = in_edx;
        goto L_101f3c30;
    }
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, 0u);
    if (rd8(rd32(COW_IMG(0x10663740u)) + 0x90u) == 0u)
    {
        eax = rd32(COW_IMG(0x10663740u));
        goto L_101f3b1c;
    }
    eax = rd32(COW_IMG(0x10663740u));
    ecx = (self & 0xffffff00u) | rd8(rd32(COW_IMG(0x10663740u)) + 0x90u);
    wr32(sp0 - 0x18u, 0x11u);
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t6 = cow_call_regs(g, COW_IMG(0x101daf70u), eax, g->ecx, g->edx, 1, 2, 0x11u, 0u);
    t7 = g->edx;
    if ((uint8_t)t6 == 0u)
    {
        eax = t6;
        edx = t7;
        goto L_101f3c30;
    }
    eax = t6;
    edx = t7;
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, sp0 - 8u);
    wr32(sp0 - 8u, 0xc8u);
    wr32(sp0 - 4u, 0x30u);
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x101602f0u), COW_IMG(0x10621838u), 3, sp0 - 8u, 0u, 0u);
    wr32(sp0 - 0x10u, 0x30u);
    wr32(sp0 - 0x14u, 0xc8u);
    cow_call_regs(g, COW_IMG(0x10119110u), 0xc8u, rd32(rd32(COW_IMG(0x10663740u)) + 8u), g->edx, 0, 2, 0xc8u, 0x30u);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, 1u);
    t8 = rd32(rd32(COW_IMG(0x1066374cu)) + 8u);
    wr32(sp0 - 0x20u, t8);
    g->eax = t8;
    g->edx = rd32(COW_IMG(0x1066374cu));
    t9 = rd32(COW_IMG(0x1066374cu));
    t10 = cow_thiscall(g, COW_IMG(0x1015e6e0u), COW_IMG(0x10621838u), 5, t8, 1u, 1u, 0u, 0u);
    t11 = g->edx;
    g->esi = rd32(sp0 - 0xcu);
    g->edx = t11;
    return t10;
L_101f3b1c: ;
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, 1u);
    t12 = rd32(rd32(COW_IMG(0x10663748u)) + 8u);
    wr32(sp0 - 0x20u, t12);
    g->edx = t12;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x1015e6e0u), COW_IMG(0x10621838u), 5, t12, 1u, 1u, 0u, 0u);
    t13 = g->edx;
    if (rd32(self + 0x14u) != rd32(rd32(COW_IMG(0x10663740u)) + 0x60u))
    {
        edx = t13;
        goto L_101f3b57;
    }
    eax = rd32(COW_IMG(0x10663740u));
    t14 = rd32(eax + 0x5cu);
    wr32(sp0 - 0x10u, t14);
    g->eax = eax;
    g->edx = t14;
    g->esp = sp0 - 0xcu;
    t15 = cow_thiscall(g, COW_IMG(0x101f3c40u), rd32(COW_IMG(0x10663750u)), 1, t14);
    t16 = g->edx;
    g->esi = rd32(sp0 - 0xcu);
    g->edx = t16;
    return t15;
L_101f3b57: ;
    t17 = rd32(rd32(COW_IMG(0x10663468u)) + 0x58u);
    wr32(sp0 - 0x10u, t17);
    g->eax = rd32(COW_IMG(0x10663468u));
    g->edx = edx;
    t18 = rd32(COW_IMG(0x10663468u));
    g->esp = sp0 - 0xcu;
    t19 = cow_thiscall(g, COW_IMG(0x101f3c40u), rd32(COW_IMG(0x10663750u)), 1, t17);
    t20 = g->edx;
    g->esi = rd32(sp0 - 0xcu);
    g->edx = t20;
    return t19;
L_101f3b72: ;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x10118830u), rd32(self + 8u), 0);
    if (rd32(self + 0x14u) != rd32(rd32(COW_IMG(0x10663740u)) + 0x60u)) goto L_101f3bba;
    eax = rd32(COW_IMG(0x10663740u));
    edx = rd32(self + 0x14u);
    wr8(eax + 0x91u, 1u);
    t21 = rd32(self + 0x18u);
    wr32(sp0 - 0x10u, t21);
    g->eax = t21;
    g->esp = sp0 - 0xcu;
    t22 = cow_thiscall(g, COW_IMG(0x101f23a0u), rd32(COW_IMG(0x10663740u)), 1, t21);
    wr32(sp0 - 0x10u, 0u);
    t23 = rd32(rd32(COW_IMG(0x10663740u)) + 8u);
    wr32(sp0 - 0x14u, t23);
    t24 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t23, 2, t23, 0u);
    t25 = g->edx;
    g->esi = rd32(sp0 - 0xcu);
    g->edx = t25;
    return t24;
L_101f3bba: ;
    t26 = rd32(self + 0x18u);
    wr32(sp0 - 0x10u, t26);
    g->eax = rd32(rd32(rd32(COW_IMG(0x10663468u)) + 0x58u));
    g->edx = t26;
    t27 = rd32(rd32(rd32(COW_IMG(0x10663468u)) + 0x58u));
    g->esp = sp0 - 0xcu;
    t28 = cow_thiscall_cdecl(g, rd32(t27 + 0x54u), rd32(rd32(COW_IMG(0x10663468u)) + 0x58u), 1, t26);
    t29 = g->edx;
    wr32(sp0 - 0x14u, t28);
    t30 = cow_fastcall(g, COW_IMG(0x101dc880u), rd32(COW_IMG(0x10663468u)), t29, 2, t28, rd32(sp0 - 0x10u));
    wr32(sp0 - 0x10u, 0u);
    t31 = rd32(rd32(COW_IMG(0x10663468u)) + 8u);
    wr32(sp0 - 0x14u, t31);
    t32 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t31, 2, t31, 0u);
    t33 = g->edx;
    g->esi = rd32(sp0 - 0xcu);
    g->edx = t33;
    return t32;
L_101f3bf4: ;
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 2u);
    wr32(sp0 - 0x1cu, 0xdu);
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->ecx = self;
    g->edx = in_edx;
    t34 = rd32(COW_IMG(0x10666ea4u));
    g->esp = sp0 - 0x14u;
    t35 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xdu, 2u);
    t36 = g->ecx;
    t37 = g->edx;
    wr32(sp0 - 0x18u, t35);
    wr32(sp0 - 0x1cu, 0x3du);
    wr32(sp0 - 0x20u, 0xcu);
    g->edx = t37;
    g->esp = sp0 - 0x18u;
    t38 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x3du);
    t39 = g->edx;
    wr32(sp0 - 0x1cu, t38);
    g->edx = t39;
    g->esp = sp0 - 0x1cu;
    t40 = cow_thiscall(g, COW_IMG(0x101f1120u), rd32(COW_IMG(0x10663740u)), 0);
    t41 = g->edx;
    wr32(sp0 - 0x20u, t40);
    wr32(sp0 - 0x24u, COW_IMG(0x101f3780u));
    g->edx = t41;
    g->esp = sp0 - 0xcu;
    t42 = cow_thiscall(g, COW_IMG(0x10222770u), t34, 6, COW_IMG(0x101f3780u), t40, rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), 0u, 0u);
    t43 = g->edx;
    eax = t42;
    edx = t43;
L_101f3c30: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f3a50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101f3a50(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
