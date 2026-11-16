/* f_0x10211a80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10211a80(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_84;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 232u);

    wr32(sp0 - 0xacu, in_ebx);
    wr32(sp0 - 0xb0u, in_ebp);
    wr32(sp0 - 0xb4u, in_esi);
    wr32(sp0 - 0xb8u, in_edi);
    wr32(sp0 - 0x84u, 0u);
    if ((int32_t)rd32(self + 0x10u) <= 0)
    {
        edx = in_edx;
        goto L_10211bea;
    }
    edx = in_edx;
    edi = 0u;
    loc_84 = 0u;
L_10211a9d: ;
    wr32(sp0 - 0xbcu, 0xeu);
    wr32(sp0 - 0xc0u, edi);
    wr32(sp0 - 0xc4u, sp0 - 0xa8u);
    g->eax = sp0 - 0xa8u;
    g->edx = edx;
    g->esp = sp0 - 0xb8u;
    t1 = cow_thiscall(g, COW_IMG(0x10211490u), self, 3, sp0 - 0xa8u, edi, 0xeu);
    t2 = g->edx;
    wr32(sp0 - 0xbcu, 0x10u);
    wr32(sp0 - 0xc0u, edi + t1);
    wr32(sp0 - 0xc4u, sp0 - 0x98u);
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x10211490u), self, 3, sp0 - 0x98u, edi + t1, 0x10u);
    t4 = g->ecx;
    t5 = g->edx;
    if (rd8(self + 0x15u) == 0u)
    {
        edx = t5;
        edi = edi + t1 + t3;
        ebx = rd32(sp0 - 0x90u);
    }
    else
    {
        eax = (t3 & 0xffffff00u) | rd8(self + 0x15u);
        ecx = t4;
        edi = edi + t1 + t3;
        t6 = rd32(sp0 - 0xa8u);
        wr32(sp0 - 0xbcu, t6);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = t6;
        g->esp = sp0 - 0xb8u;
        t7 = cow_cdecl(g, COW_IMG(0x1000d150u), 1, t6);
        t8 = g->ecx;
        t9 = g->edx;
        wr32(sp0 - 0xa8u, t7);
        t10 = rd32(sp0 - 0xa4u);
        wr32(sp0 - 0xc0u, t10);
        g->eax = t10;
        g->edx = t9;
        g->esp = sp0 - 0xbcu;
        t11 = cow_cdecl(g, COW_IMG(0x1000d0f0u), 1, t10);
        t12 = g->edx;
        t13 = rd32(sp0 - 0xa2u);
        wr16(sp0 - 0xa4u, (uint16_t)t11);
        wr32(sp0 - 0xc4u, t13);
        g->ecx = t13;
        g->esp = sp0 - 0xc0u;
        t14 = cow_cdecl(g, COW_IMG(0x1000d0f0u), 1, t13);
        t15 = g->ecx;
        t16 = rd32(sp0 - 0xa0u);
        wr16(sp0 - 0xa2u, (uint16_t)t14);
        wr32(sp0 - 0xc8u, t16);
        g->ecx = t15;
        g->edx = t16;
        g->esp = sp0 - 0xc4u;
        t17 = cow_cdecl(g, COW_IMG(0x1000d0f0u), 1, t16);
        t18 = g->ecx;
        t19 = g->edx;
        wr16(sp0 - 0xa0u, (uint16_t)t17);
        t20 = rd32(sp0 - 0x9eu);
        wr32(sp0 - 0xccu, t20);
        g->eax = t20;
        g->edx = t19;
        g->esp = sp0 - 0xc8u;
        t21 = cow_cdecl(g, COW_IMG(0x1000d0f0u), 1, t20);
        t22 = g->edx;
        t23 = rd32(sp0 - 0x9cu);
        wr16(sp0 - 0x9eu, (uint16_t)t21);
        wr32(sp0 - 0xd0u, t23);
        g->ecx = t23;
        g->esp = sp0 - 0xccu;
        t24 = cow_cdecl(g, COW_IMG(0x1000d0f0u), 1, t23);
        t25 = g->ecx;
        t26 = rd32(sp0 - 0x98u);
        wr16(sp0 - 0x9cu, (uint16_t)t24);
        wr32(sp0 - 0xd4u, t26);
        g->ecx = t25;
        g->edx = t26;
        g->esp = sp0 - 0xd0u;
        t27 = cow_cdecl(g, COW_IMG(0x1000d150u), 1, t26);
        t28 = g->ecx;
        t29 = g->edx;
        wr32(sp0 - 0x98u, t27);
        t30 = rd32(sp0 - 0x94u);
        wr32(sp0 - 0xd8u, t30);
        g->eax = t30;
        g->edx = t29;
        g->esp = sp0 - 0xd4u;
        t31 = cow_cdecl(g, COW_IMG(0x1000d150u), 1, t30);
        t32 = g->edx;
        wr32(sp0 - 0x94u, t31);
        t33 = rd32(sp0 - 0x90u);
        wr32(sp0 - 0xdcu, t33);
        g->ecx = t33;
        g->esp = sp0 - 0xd8u;
        t34 = cow_cdecl(g, COW_IMG(0x1000d150u), 1, t33);
        t35 = g->ecx;
        t36 = rd32(sp0 - 0x8cu);
        wr32(sp0 - 0xe0u, t36);
        wr32(sp0 - 0x90u, t34);
        g->ecx = t35;
        g->edx = t36;
        g->esp = sp0 - 0xdcu;
        t37 = cow_cdecl(g, COW_IMG(0x1000d0f0u), 1, t36);
        t38 = g->ecx;
        t39 = g->edx;
        wr16(sp0 - 0x8cu, (uint16_t)t37);
        t40 = rd32(sp0 - 0x8au);
        wr32(sp0 - 0xe4u, t40);
        g->eax = t40;
        g->edx = t39;
        g->esp = sp0 - 0xe0u;
        t41 = cow_cdecl(g, COW_IMG(0x1000d0f0u), 1, t40);
        t42 = g->edx;
        wr16(sp0 - 0x8au, (uint16_t)t41);
        edx = t42;
        ebx = t34;
    }
    if (rd32(sp0 - 0xa8u) != rd32(COW_IMG(0x10385be4u))) goto L_10211bea;
    t43 = (uint32_t)(int16_t)rd16(sp0 - 0x8cu);
    wr32(sp0 - 0xbcu, t43);
    wr32(sp0 - 0xc0u, edi);
    wr32(sp0 - 0xc4u, sp0 - 0x80u);
    g->eax = sp0 - 0x80u;
    g->edx = t43;
    g->esp = sp0 - 0xb8u;
    t44 = cow_thiscall(g, COW_IMG(0x10211490u), self, 3, sp0 - 0x80u, edi, t43);
    t45 = g->ecx;
    t46 = g->edx;
    eax = sp0 - 0x80u;
    ecx = t45;
    edx = t46;
    esi = arg3;
    edi = edi + t44;
L_10211ba3: ;
    if (rd8(eax) != rd8(esi))
    {
        edx = (edx & 0xffffff00u) | rd8(eax);
        cf = rd8(eax) < rd8(esi);
        goto L_10211bc7;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax);
    edx = (edx & 0xffffff00u) | rd8(eax);
    if ((uint8_t)ecx == 0u) goto L_10211bc3;
    if (rd8(eax + 1u) != rd8(esi + 1u))
    {
        edx = (edx & 0xffffff00u) | rd8(eax + 1u);
        cf = rd8(eax + 1u) < rd8(esi + 1u);
        goto L_10211bc7;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
    edx = (edx & 0xffffff00u) | rd8(eax + 1u);
    if ((uint8_t)ecx != 0u)
    {
        eax = eax + 2u;
        esi = esi + 2u;
        goto L_10211ba3;
    }
L_10211bc3: ;
    eax = 0u;
L_10211bcc: ;
    if (eax == 0u) goto L_10211bf9;
    t47 = rd32(sp0 - 0x84u) + 1u;
    wr32(sp0 - 0x84u, t47);
    if ((int32_t)(rd32(sp0 - 0x84u) + 1u) < (int32_t)rd32(self + 0x10u))
    {
        edi = edi + rd32(sp0 - 0x94u);
        loc_84 = t47;
        goto L_10211a9d;
    }
L_10211bea: ;
    g->edx = edx;
    return 0u;
L_10211bc7: ;
    eax = -cf + 1u - cf;
    goto L_10211bcc;
L_10211bf9: ;
    if (arg1 == 0u) goto L_10211c4b;
    if (ebx <= arg2) goto L_10211c1e;
    g->ebx = rd32(sp0 - 0xacu);
    g->esi = rd32(sp0 - 0xb4u);
    g->edi = rd32(sp0 - 0xb8u);
    g->ebp = rd32(sp0 - 0xb0u);
    g->edx = edx;
    return arg2 - ebx;
L_10211c1e: ;
    wr32(sp0 - 0xbcu, ebx);
    wr32(sp0 - 0xc0u, edi);
    wr32(sp0 - 0xc4u, arg1);
    g->eax = arg2;
    g->edx = edx;
    g->esp = sp0 - 0xb8u;
    t48 = cow_thiscall(g, COW_IMG(0x10211630u), self, 3, arg1, edi, ebx);
    t49 = g->ecx;
    t50 = g->edx;
    wr32(sp0 - 0xbcu, ebx);
    wr32(sp0 - 0xc0u, arg1);
    g->edx = t50;
    g->esp = sp0 - 0xb0u;
    t51 = cow_call_regs(g, COW_IMG(0x101c8c50u), t48, g->ecx, g->edx, 1, 4, arg1, ebx, rd32(sp0 - 0xb8u), rd32(sp0 - 0xb4u));
    t52 = g->edx;
    if (rd32(sp0 - 0x98u) == t51)
    {
        edx = t52;
        edi = t48;
        goto L_10211c4d;
    }
    edx = t52;
    g->ebx = rd32(sp0 - 0xacu);
    g->esi = rd32(sp0 - 0xb4u);
    g->edi = rd32(sp0 - 0xb8u);
    g->ebp = rd32(sp0 - 0xb0u);
    g->edx = edx;
    return 0u;
L_10211c4b: ;
    edi = ebx;
L_10211c4d: ;
    g->ebx = rd32(sp0 - 0xacu);
    g->esi = rd32(sp0 - 0xb4u);
    g->edi = rd32(sp0 - 0xb8u);
    g->ebp = rd32(sp0 - 0xb0u);
    g->edx = edx;
    return edi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10211a80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10211a80(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
