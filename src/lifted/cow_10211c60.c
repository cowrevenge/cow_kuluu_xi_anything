/* f_0x10211c60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_10211c60(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
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
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 228u);

    wr32(sp0 - 0xa8u, in_ebx);
    wr32(sp0 - 0xacu, in_ebp);
    wr32(sp0 - 0xb0u, in_esi);
    wr32(sp0 - 0xb4u, in_edi);
    if ((int32_t)rd32(self + 0x10u) <= 0) goto L_10211d93;
    edx = in_edx;
    ebp = 0u;
    esi = 0u;
L_10211c7b: ;
    wr32(sp0 - 0xb8u, 0xeu);
    wr32(sp0 - 0xbcu, esi);
    wr32(sp0 - 0xc0u, sp0 - 0xa4u);
    g->eax = sp0 - 0xa4u;
    g->edx = edx;
    g->esp = sp0 - 0xb4u;
    t1 = cow_thiscall(g, COW_IMG(0x10211490u), self, 3, sp0 - 0xa4u, esi, 0xeu);
    t2 = g->edx;
    wr32(sp0 - 0xb8u, 0x10u);
    wr32(sp0 - 0xbcu, esi + t1);
    wr32(sp0 - 0xc0u, sp0 - 0x94u);
    t3 = cow_thiscall(g, COW_IMG(0x10211490u), self, 3, sp0 - 0x94u, esi + t1, 0x10u);
    t4 = g->ecx;
    if (rd8(self + 0x15u) == 0u)
    {
        esi = esi + t1 + t3;
        ebx = rd32(sp0 - 0x8cu);
    }
    else
    {
        eax = (t3 & 0xffffff00u) | rd8(self + 0x15u);
        ecx = t4;
        esi = esi + t1 + t3;
        t5 = rd32(sp0 - 0xa4u);
        wr32(sp0 - 0xb8u, t5);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = t5;
        g->esp = sp0 - 0xb4u;
        t6 = cow_cdecl(g, COW_IMG(0x1000d150u), 1, t5);
        t7 = g->ecx;
        t8 = g->edx;
        wr32(sp0 - 0xa4u, t6);
        t9 = rd32(sp0 - 0xa0u);
        wr32(sp0 - 0xbcu, t9);
        g->eax = t9;
        g->edx = t8;
        g->esp = sp0 - 0xb8u;
        t10 = cow_cdecl(g, COW_IMG(0x1000d0f0u), 1, t9);
        t11 = g->edx;
        t12 = rd32(sp0 - 0x9eu);
        wr16(sp0 - 0xa0u, (uint16_t)t10);
        wr32(sp0 - 0xc0u, t12);
        g->ecx = t12;
        g->esp = sp0 - 0xbcu;
        t13 = cow_cdecl(g, COW_IMG(0x1000d0f0u), 1, t12);
        t14 = g->ecx;
        t15 = rd32(sp0 - 0x9cu);
        wr16(sp0 - 0x9eu, (uint16_t)t13);
        wr32(sp0 - 0xc4u, t15);
        g->ecx = t14;
        g->edx = t15;
        g->esp = sp0 - 0xc0u;
        t16 = cow_cdecl(g, COW_IMG(0x1000d0f0u), 1, t15);
        t17 = g->ecx;
        t18 = g->edx;
        wr16(sp0 - 0x9cu, (uint16_t)t16);
        t19 = rd32(sp0 - 0x9au);
        wr32(sp0 - 0xc8u, t19);
        g->eax = t19;
        g->edx = t18;
        g->esp = sp0 - 0xc4u;
        t20 = cow_cdecl(g, COW_IMG(0x1000d0f0u), 1, t19);
        t21 = g->edx;
        t22 = rd32(sp0 - 0x98u);
        wr16(sp0 - 0x9au, (uint16_t)t20);
        wr32(sp0 - 0xccu, t22);
        g->ecx = t22;
        g->esp = sp0 - 0xc8u;
        t23 = cow_cdecl(g, COW_IMG(0x1000d0f0u), 1, t22);
        t24 = g->ecx;
        t25 = rd32(sp0 - 0x94u);
        wr16(sp0 - 0x98u, (uint16_t)t23);
        wr32(sp0 - 0xd0u, t25);
        g->ecx = t24;
        g->edx = t25;
        g->esp = sp0 - 0xccu;
        t26 = cow_cdecl(g, COW_IMG(0x1000d150u), 1, t25);
        t27 = g->ecx;
        t28 = g->edx;
        wr32(sp0 - 0x94u, t26);
        t29 = rd32(sp0 - 0x90u);
        wr32(sp0 - 0xd4u, t29);
        g->eax = t29;
        g->edx = t28;
        g->esp = sp0 - 0xd0u;
        t30 = cow_cdecl(g, COW_IMG(0x1000d150u), 1, t29);
        t31 = g->edx;
        wr32(sp0 - 0x90u, t30);
        t32 = rd32(sp0 - 0x8cu);
        wr32(sp0 - 0xd8u, t32);
        g->ecx = t32;
        g->esp = sp0 - 0xd4u;
        t33 = cow_cdecl(g, COW_IMG(0x1000d150u), 1, t32);
        t34 = g->ecx;
        t35 = rd32(sp0 - 0x88u);
        wr32(sp0 - 0xdcu, t35);
        wr32(sp0 - 0x8cu, t33);
        g->ecx = t34;
        g->edx = t35;
        g->esp = sp0 - 0xd8u;
        t36 = cow_cdecl(g, COW_IMG(0x1000d0f0u), 1, t35);
        t37 = g->ecx;
        t38 = g->edx;
        wr16(sp0 - 0x88u, (uint16_t)t36);
        t39 = rd32(sp0 - 0x86u);
        wr32(sp0 - 0xe0u, t39);
        g->eax = t39;
        g->esp = sp0 - 0xdcu;
        t40 = cow_cdecl(g, COW_IMG(0x1000d0f0u), 1, t39);
        wr16(sp0 - 0x86u, (uint16_t)t40);
        ebx = t33;
    }
    if (rd32(sp0 - 0xa4u) != rd32(COW_IMG(0x10385be4u))) goto L_10211d93;
    t41 = (uint32_t)(int16_t)rd16(sp0 - 0x88u);
    wr32(sp0 - 0xb8u, t41);
    wr32(sp0 - 0xbcu, esi);
    wr32(sp0 - 0xc0u, sp0 - 0x80u);
    g->eax = sp0 - 0x80u;
    g->esp = sp0 - 0xb4u;
    t42 = cow_thiscall(g, COW_IMG(0x10211490u), self, 3, sp0 - 0x80u, esi, t41);
    if (ebp == arg3)
    {
        esi = esi + t42;
        goto L_10211da2;
    }
    esi = esi + t42;
    if ((int32_t)(ebp + 1u) < (int32_t)rd32(self + 0x10u))
    {
        edx = rd32(sp0 - 0x90u);
        ebp = ebp + 1u;
        esi = esi + rd32(sp0 - 0x90u);
        goto L_10211c7b;
    }
L_10211d93: ;
    return 0u;
L_10211da2: ;
    wr32(sp0 - 0xb8u, arg5);
    wr32(sp0 - 0xbcu, sp0 - 0x80u);
    wr32(sp0 - 0xc0u, arg4);
    g->edx = arg4;
    g->esp = sp0 - 0xb4u;
    cow_call_regs(g, COW_IMG(0x10312090u), arg3, g->ecx, g->edx, 1, 3, arg4, sp0 - 0x80u, arg5);
    t43 = g->edx;
    wr8(arg4 + arg5 - 1u, 0u);
    if (arg1 == 0u) goto L_10211e1d;
    edx = t43;
    if (ebx <= arg2) goto L_10211df0;
    g->ebx = rd32(sp0 - 0xa8u);
    g->esi = rd32(sp0 - 0xb0u);
    g->edi = rd32(sp0 - 0xb4u);
    g->ebp = rd32(sp0 - 0xacu);
    return arg2 - ebx;
L_10211df0: ;
    wr32(sp0 - 0xb8u, ebx);
    wr32(sp0 - 0xbcu, esi);
    wr32(sp0 - 0xc0u, arg1);
    g->eax = arg2;
    g->edx = edx;
    g->esp = sp0 - 0xb4u;
    t44 = cow_thiscall(g, COW_IMG(0x10211630u), self, 3, arg1, esi, ebx);
    t45 = g->ecx;
    t46 = g->edx;
    wr32(sp0 - 0xb8u, ebx);
    wr32(sp0 - 0xbcu, arg1);
    g->esp = sp0 - 0xacu;
    t47 = cow_call_regs(g, COW_IMG(0x101c8c50u), t44, g->ecx, g->edx, 1, 4, arg1, ebx, rd32(sp0 - 0xb4u), rd32(sp0 - 0xb0u));
    if (rd32(sp0 - 0x94u) == t47)
    {
        esi = t44;
        goto L_10211e1f;
    }
    g->ebx = rd32(sp0 - 0xa8u);
    g->esi = rd32(sp0 - 0xb0u);
    g->edi = rd32(sp0 - 0xb4u);
    g->ebp = rd32(sp0 - 0xacu);
    return 0u;
L_10211e1d: ;
    esi = ebx;
L_10211e1f: ;
    g->ebx = rd32(sp0 - 0xa8u);
    g->esi = rd32(sp0 - 0xb0u);
    g->edi = rd32(sp0 - 0xb4u);
    g->ebp = rd32(sp0 - 0xacu);
    return esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10211c60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10211c60(g);
    g->esp = sp0;
    rt_return(g, r, 20u);
}
/* COW_ADAPTER END */
