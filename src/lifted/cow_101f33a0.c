/* f_0x101f33a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101f33a0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if ((uint32_t)(int16_t)rd16(sp0 + 4u) == 5u) goto L_101f33e6;
    eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 5u;
    if (eax != 1u)
    {
        eax = eax - 1u;
        edx = in_edx;
        goto L_101f353f;
    }
    t1 = rd32(self + 8u);
    g->esp = sp0 - 8u;
    t2 = cow_call_regs(g, COW_IMG(0x1015e790u), t1, COW_IMG(0x10621838u), g->edx, 0, 2, t1, 1u);
    t3 = rd32(COW_IMG(0x10663740u));
    wr32(sp0 + 8u, 0u);
    t4 = rd32(t3 + 8u);
    wr32(sp0 + 4u, t4);
    g->esp = sp0;
    g->edx = t4;
    return cow_tailcall(g, COW_IMG(0x1015db80u), t2, COW_IMG(0x10621838u), t4);
L_101f33e6: ;
    if ((uint32_t)(int16_t)rd16(sp0 + 8u) == 1u) goto L_101f3436;
    eax = (uint32_t)(int16_t)rd16(sp0 + 8u) - 1u;
    if (eax != 1u)
    {
        eax = eax - 1u;
        edx = in_edx;
        goto L_101f353f;
    }
    eax = eax - 1u;
    g->eax = eax;
    g->ecx = self;
    g->edx = in_edx;
    t5 = rd32(COW_IMG(0x10666ea4u));
    g->esp = sp0 - 0x10u;
    t6 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xdu, 2u);
    t7 = g->ecx;
    t8 = g->edx;
    g->edx = t8;
    g->esp = sp0 - 0x14u;
    t9 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x3eu);
    t10 = g->edx;
    g->edx = t10;
    g->esp = sp0 - 0x18u;
    t11 = cow_thiscall(g, COW_IMG(0x101f1120u), rd32(COW_IMG(0x10663740u)), 0);
    t12 = g->edx;
    g->edx = t12;
    g->esp = sp0 - 8u;
    t13 = cow_thiscall(g, COW_IMG(0x10222770u), t5, 6, COW_IMG(0x101f30c0u), t11, t9, t6, 0u, 0u);
    t14 = g->edx;
    g->edx = t14;
    return t13;
L_101f3436: ;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t15 = cow_thiscall(g, COW_IMG(0x101f1120u), rd32(COW_IMG(0x10663740u)), 0);
    t16 = g->edx;
    if (t15 == 0u)
    {
        eax = t15;
        edx = t16;
        goto L_101f353f;
    }
    edx = t16;
    esi = t15;
    g->edx = edx;
    t17 = rd16(esi);
    g->esp = sp0 - 8u;
    t18 = cow_thiscall(g, COW_IMG(0x1015b9e0u), rd32(COW_IMG(0x10621808u)), 1, t17);
    t19 = g->edx;
    if (t18 == 0u)
    {
        eax = t18;
        edx = t19;
        goto L_101f353f;
    }
    eax = t18;
    edx = t19;
    if (rd16(rd32(eax + 0x14b4u)) != 0x16u)
    {
        ecx = (rd32(eax + 0x14b4u) & 0xffff0000u) | rd16(rd32(eax + 0x14b4u));
        goto L_101f348b;
    }
    t20 = rd8(esi + 2u);
    g->eax = eax;
    g->edx = t20;
    g->esp = sp0 - 8u;
    t21 = cow_thiscall(g, COW_IMG(0x101fcf60u), rd32(COW_IMG(0x10663aacu)), 2, 0u, t20);
    t22 = g->edx;
    eax = t21;
    edx = t22;
L_101f352f: ;
    t50 = rd32(self + 8u);
    g->edx = edx;
    g->esp = sp0 - 8u;
    t51 = cow_call_regs(g, COW_IMG(0x1015e790u), eax, COW_IMG(0x10621838u), g->edx, 0, 2, t50, 1u);
    t52 = g->edx;
    eax = t51;
    edx = t52;
L_101f353f: ;
    g->edx = edx;
    return eax;
L_101f348b: ;
    if ((uint16_t)ecx != 0x17u) goto L_101f34a9;
    t23 = rd8(esi + 2u);
    g->eax = t23;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t24 = cow_thiscall(g, COW_IMG(0x101fcf60u), rd32(COW_IMG(0x10663aacu)), 2, 1u, t23);
    t25 = g->edx;
    eax = t24;
    edx = t25;
    goto L_101f352f;
L_101f34a9: ;
    if ((uint16_t)ecx != 8u) goto L_101f34ec;
    g->ecx = ecx;
    g->esp = sp0 - 8u;
    t26 = cow_call_regs(g, COW_IMG(0x101cc0d0u), eax, g->ecx, edx, 1, 2, 0x77u, 0u);
    t27 = g->ecx;
    t28 = g->edx;
    if ((uint8_t)t26 != 0u)
    {
        ecx = t27;
        edx = t28;
        goto L_101f34c9;
    }
    eax = t26;
    ecx = t27;
    edx = t28;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t29 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    t30 = g->edx;
    g->edx = t30;
    return t29;
L_101f34c9: ;
    t31 = (ecx & 0xffff0000u) | rd16(esi);
    t32 = (edx & 0xffffff00u) | rd8(esi + 2u);
    g->edx = t32;
    t33 = rd32(COW_IMG(0x106634acu));
    g->esp = sp0 - 8u;
    t34 = cow_thiscall(g, COW_IMG(0x101e0e30u), t33, 3, t32, t31, 0u);
    t35 = g->ecx;
    t36 = g->edx;
    if ((uint8_t)t34 != 0u)
    {
        eax = t34;
        edx = t36;
        goto L_101f352f;
    }
    eax = t34;
    ecx = t35;
    edx = t36;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t37 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    t38 = g->edx;
    g->edx = t38;
    return t37;
L_101f34ec: ;
    if ((rd8(rd32(eax + 0x14bcu)) & 8u) == 0u)
    {
        eax = rd32(eax + 0x14bcu);
        goto L_101f351a;
    }
    eax = rd32(eax + 0x14bcu);
    g->ecx = ecx;
    g->esp = sp0 - 8u;
    t39 = cow_call_regs(g, COW_IMG(0x101cc0d0u), eax, g->ecx, edx, 1, 2, 0x80u, 1u);
    t40 = g->ecx;
    t41 = g->edx;
    if ((uint8_t)t39 != 0u)
    {
        eax = t39;
        ecx = t40;
        edx = t41;
        goto L_101f351a;
    }
    eax = t39;
    ecx = t40;
    edx = t41;
    g->ecx = ecx;
    g->esp = sp0 - 8u;
    t42 = cow_call_regs(g, COW_IMG(0x101cc0d0u), eax, g->ecx, edx, 1, 2, 0x77u, 1u);
    t43 = g->ecx;
    t44 = g->edx;
    if ((uint8_t)t42 != 0u)
    {
        eax = t42;
        ecx = t43;
        edx = t44;
        goto L_101f352a;
    }
    eax = t42;
    ecx = t43;
    edx = t44;
L_101f351a: ;
    g->ecx = ecx;
    g->esp = sp0 - 8u;
    t45 = cow_call_regs(g, COW_IMG(0x101cc0d0u), eax, g->ecx, edx, 1, 2, 0x7fu, 0u);
    t46 = g->ecx;
    t47 = g->edx;
    if ((uint8_t)t45 == 0u)
    {
        eax = t45;
        edx = t47;
        goto L_101f352f;
    }
    eax = t45;
    ecx = t46;
    edx = t47;
L_101f352a: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t48 = cow_stdcall(g, COW_IMG(0x101f32a0u), 0);
    t49 = g->edx;
    eax = t48;
    edx = t49;
    goto L_101f352f;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f33a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101f33a0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
