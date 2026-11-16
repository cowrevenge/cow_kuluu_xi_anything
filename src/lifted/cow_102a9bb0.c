/* f_0x102a9bb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102a9bb0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
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
    uint32_t t53;
    uint32_t t54;
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
    cow_frame(g, sp0, 60u);

    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    if (rd32(sp0 + 4u) != 0u)
    {
        esi = rd32(sp0 + 4u);
        goto L_102a9bc7;
    }
    return 0u;
L_102a9bc7: ;
    wr32(sp0 - 0x20u, esi);
    wr32(sp0 - 0x24u, 1u);
    wr32(sp0 - 0x28u, 4u);
    wr32(sp0 - 0x2cu, sp0 - 0x10u);
    g->ecx = self;
    g->esp = sp0;
    t1 = cow_call_regs(g, COW_IMG(0x10292420u), g->eax, g->ecx, in_edx, 1, 11, sp0 - 0x10u, 4u, 1u, esi, in_edi, in_esi, in_ebx, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u), rd32(sp0 - 4u));
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 1u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        goto L_102a9c12;
    }
    eax = t1;
    edx = t3;
    wr32(sp0 - 0x20u, sp0 + 4u);
    g->eax = eax;
    g->ecx = sp0 + 4u;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t4 = cow_cdecl(g, COW_IMG(0x102a95c0u), 5, sp0 + 4u, rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u), rd32(sp0 - 0x10u));
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0x24u, 0x1f1u);
    wr32(sp0 - 0x28u, COW_IMG(0x103be750u));
    wr32(sp0 - 0x2cu, COW_IMG(0x103b379cu));
    g->ecx = t5;
    g->edx = t6;
    g->esp = sp0 - 0x24u;
    t7 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103be750u));
    t8 = g->ecx;
    t9 = g->edx;
    wr32(sp0 - 0x30u, COW_IMG(0x103be948u));
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103be948u), COW_IMG(0x103b379cu));
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    return 0u;
L_102a9c12: ;
    if ((int32_t)rd32(sp0 - 0x10u) >= 1) goto L_102a9c43;
    wr32(sp0 - 0x20u, 0x1f3u);
    wr32(sp0 - 0x24u, COW_IMG(0x103be750u));
    wr32(sp0 - 0x28u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t10 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103be750u));
    t11 = g->ecx;
    t12 = g->edx;
    wr32(sp0 - 0x2cu, COW_IMG(0x103be918u));
    g->esp = sp0 - 0x24u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103be918u), COW_IMG(0x103b379cu));
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    return 0u;
L_102a9c43: ;
    g->ecx = ecx;
    g->esp = sp0 - 0x1cu;
    t13 = cow_stdcall(g, COW_IMG(0x102a9540u), 0);
    t14 = g->ecx;
    wr32(sp0 - 0x20u, esi);
    wr32(sp0 - 0x24u, 1u);
    wr32(sp0 - 0x28u, 4u);
    wr32(sp0 - 0x2cu, sp0 - 4u);
    t15 = rd32(sp0 - 0x10u);
    wr32(sp0 + 4u, t13);
    wr32(t13 + 0x14u, t15);
    g->ecx = t14;
    g->esp = sp0;
    t16 = cow_call_regs(g, COW_IMG(0x10292420u), g->eax, g->ecx, t15, 1, 11, sp0 - 4u, 4u, 1u, esi, rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u), rd32(sp0 - 4u));
    t17 = g->ecx;
    t18 = g->edx;
    if (t16 == 1u)
    {
        ecx = t17;
        edi = t13;
        goto L_102a9ca0;
    }
    eax = t16;
    edx = t18;
    wr32(sp0 - 0x20u, sp0 + 4u);
    g->eax = eax;
    g->ecx = sp0 + 4u;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t19 = cow_cdecl(g, COW_IMG(0x102a95c0u), 5, sp0 + 4u, rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u), rd32(sp0 - 0x10u));
    t20 = g->ecx;
    t21 = g->edx;
    wr32(sp0 - 0x24u, 0x1fau);
    wr32(sp0 - 0x28u, COW_IMG(0x103be750u));
    wr32(sp0 - 0x2cu, COW_IMG(0x103b379cu));
    g->ecx = t20;
    g->edx = t21;
    g->esp = sp0 - 0x24u;
    t22 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103be750u));
    t23 = g->ecx;
    t24 = g->edx;
    wr32(sp0 - 0x30u, COW_IMG(0x103be948u));
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103be948u), COW_IMG(0x103b379cu));
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    return 0u;
L_102a9ca0: ;
    if ((int32_t)rd32(sp0 - 4u) <= 0) goto L_102a9d1f;
    ebx = 0u;
L_102a9caa: ;
    wr32(sp0 - 0x20u, esi);
    wr32(sp0 - 0x24u, 1u);
    wr32(sp0 - 0x28u, 4u);
    wr32(sp0 - 0x2cu, sp0 - 8u);
    g->ecx = ecx;
    g->esp = sp0;
    t25 = cow_call_regs(g, COW_IMG(0x10292420u), g->eax, g->ecx, sp0 - 8u, 1, 11, sp0 - 8u, 4u, 1u, esi, rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u), rd32(sp0 - 4u));
    t26 = g->ecx;
    t27 = g->edx;
    if (t25 != 1u)
    {
        ecx = t26;
        edx = t27;
        goto L_102a9d28;
    }
    eax = t25;
    ecx = t26;
    edx = t27;
    wr32(sp0 - 0x20u, esi);
    wr32(sp0 - 0x24u, eax);
    wr32(sp0 - 0x28u, 4u);
    wr32(sp0 - 0x2cu, sp0 - 0xcu);
    g->esp = sp0;
    t28 = cow_call_regs(g, COW_IMG(0x10292420u), g->eax, g->ecx, edx, 1, 11, sp0 - 0xcu, 4u, eax, esi, rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u), rd32(sp0 - 4u));
    t29 = g->edx;
    if (t28 != 1u)
    {
        eax = t28;
        edx = t29;
        goto L_102a9d5c;
    }
    eax = t28;
    t30 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x20u, t30);
    t31 = rd32(sp0 - 8u);
    wr32(sp0 - 0x24u, t31);
    wr32(sp0 - 0x28u, edi);
    g->edx = t31;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x102a99a0u), 6, edi, t31, t30, rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    t32 = g->edx;
    wr32(sp0 - 0x2cu, esi);
    t33 = rd32(sp0 - 0xcu) * rd32(sp0 - 0x10u);
    wr32(sp0 - 0x30u, t33);
    wr32(sp0 - 0x34u, 4u);
    t34 = rd32(edi + rd32(sp0 - 8u) * 4u + 0x54u);
    wr32(sp0 - 0x38u, t34);
    g->ecx = t33;
    g->esp = sp0 - 0xcu;
    t35 = cow_call_regs(g, COW_IMG(0x10292420u), g->eax, g->ecx, t32, 1, 11, t34, 4u, t33, esi, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u), rd32(sp0 - 0x10u));
    t36 = g->ecx;
    if (t35 != rd32(sp0 - 0xcu) * rd32(sp0 - 0x10u))
    {
        eax = t35;
        ecx = t36;
        goto L_102a9d90;
    }
    ecx = t36;
    if ((int32_t)(ebx + 1u) < (int32_t)rd32(sp0 - 4u))
    {
        ebx = ebx + 1u;
        goto L_102a9caa;
    }
L_102a9d1f: ;
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    return edi;
L_102a9d28: ;
    wr32(sp0 - 0x20u, sp0 + 4u);
    g->eax = sp0 + 4u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t49 = cow_cdecl(g, COW_IMG(0x102a95c0u), 5, sp0 + 4u, rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u), rd32(sp0 - 0x10u));
    t50 = g->ecx;
    t51 = g->edx;
    wr32(sp0 - 0x24u, 0x1fdu);
    wr32(sp0 - 0x28u, COW_IMG(0x103be750u));
    wr32(sp0 - 0x2cu, COW_IMG(0x103b379cu));
    g->ecx = t50;
    g->edx = t51;
    g->esp = sp0 - 0x24u;
    t52 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103be750u));
    t53 = g->ecx;
    t54 = g->edx;
    wr32(sp0 - 0x30u, COW_IMG(0x103be948u));
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103be948u), COW_IMG(0x103b379cu));
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    return 0u;
L_102a9d5c: ;
    wr32(sp0 - 0x20u, sp0 + 4u);
    g->eax = eax;
    g->ecx = sp0 + 4u;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t43 = cow_cdecl(g, COW_IMG(0x102a95c0u), 5, sp0 + 4u, rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u), rd32(sp0 - 0x10u));
    t44 = g->ecx;
    t45 = g->edx;
    wr32(sp0 - 0x24u, 0x1feu);
    wr32(sp0 - 0x28u, COW_IMG(0x103be750u));
    wr32(sp0 - 0x2cu, COW_IMG(0x103b379cu));
    g->ecx = t44;
    g->edx = t45;
    g->esp = sp0 - 0x24u;
    t46 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103be750u));
    t47 = g->ecx;
    t48 = g->edx;
    wr32(sp0 - 0x30u, COW_IMG(0x103be948u));
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103be948u), COW_IMG(0x103b379cu));
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    return 0u;
L_102a9d90: ;
    wr32(sp0 - 0x20u, sp0 + 4u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = sp0 + 4u;
    g->esp = sp0 - 0xcu;
    t37 = cow_cdecl(g, COW_IMG(0x102a95c0u), 5, sp0 + 4u, rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u), rd32(sp0 - 0x10u));
    t38 = g->ecx;
    t39 = g->edx;
    wr32(sp0 - 0x24u, 0x209u);
    wr32(sp0 - 0x28u, COW_IMG(0x103be750u));
    wr32(sp0 - 0x2cu, COW_IMG(0x103b379cu));
    g->ecx = t38;
    g->edx = t39;
    g->esp = sp0 - 0x24u;
    t40 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103be750u));
    t41 = g->ecx;
    t42 = g->edx;
    wr32(sp0 - 0x30u, COW_IMG(0x103be948u));
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103be948u), COW_IMG(0x103b379cu));
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102a9bb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102a9bb0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
