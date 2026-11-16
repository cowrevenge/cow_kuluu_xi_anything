/* f_0x1031fffd - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1031fffd(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_c;
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
    cow_frame(g, sp0, 60u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, self);
    wr32(sp0 - 0xcu, self);
    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    wr32(sp0 - 0x1cu, 0xcu);
    wr32(sp0 - 0x1cu, 0xcu);
    wr32(sp0 - 0xcu, 0u);
    g->esp = sp0 - 0x10u;
    t1 = cow_call_regs(g, COW_IMG(0x1031d016u), g->eax, self, in_edx, 1, 3, 0xcu, in_edi, in_esi);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(COW_IMG(0x103d2df8u), 0xffffffffu);
    wr32(COW_IMG(0x103d2de8u), 0xffffffffu);
    wr32(COW_IMG(0x109b27e0u), 0u);
    wr32(sp0 - 0x1cu, COW_IMG(0x1034a560u));
    g->esp = sp0 - 0x18u;
    t4 = cow_call_regs(g, COW_IMG(0x10324c09u), t1, t2, t3, 1, 1, COW_IMG(0x1034a560u));
    t5 = g->edx;
    if (t4 != 0u)
    {
        eax = t4;
        edx = t5;
        esi = t4;
        goto L_1032013b;
    }
    eax = t4;
    edx = t5;
    wr32(sp0 - 0x1cu, 0xcu);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t6 = cow_call_regs(g, COW_IMG(0x1031d077u), g->eax, COW_IMG(0x1034a560u), edx, 1, 3, 0xcu, in_edi, in_esi);
    t7 = g->ecx;
    t8 = g->edx;
    wr32(sp0 - 0x1cu, COW_IMG(0x109b27e8u));
    g->edx = t8;
    g->esp = sp0 - 0x18u;
    t9 = cow_thiscall(g, rd32(COW_IMG(0x10329284u)), t7, 1, COW_IMG(0x109b27e8u));
    t10 = g->edx;
    if (t9 == 0xffffffffu)
    {
        edx = t10;
        goto L_1032027f;
    }
    wr32(sp0 - 0x1cu, 1u);
    t11 = rd32(COW_IMG(0x109b27e8u)) * 0x3cu;
    t12 = rd32(COW_IMG(0x109b283cu));
    t13 = rd16(COW_IMG(0x109b282eu));
    wr32(COW_IMG(0x103d2d50u), t11);
    wr32(COW_IMG(0x109b27e0u), 1u);
    if ((uint16_t)t13 == 0u)
    {
        ecx = t12;
    }
    else
    {
        eax = t11;
        ecx = t12;
        t14 = eax + ecx * 0x3cu;
        wr32(COW_IMG(0x103d2d50u), t14);
    }
    if (rd16(COW_IMG(0x109b2882u)) == 0u) goto L_103200af;
    if (rd32(COW_IMG(0x109b2890u)) == 0u) goto L_103200af;
    eax = rd32(COW_IMG(0x109b2890u));
    wr32(COW_IMG(0x103d2d54u), 1u);
    t15 = eax * 0x3cu - ecx * 0x3cu;
    wr32(COW_IMG(0x103d2d58u), t15);
L_103200bb: ;
    wr32(sp0 - 0x1cu, sp0 - 8u);
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, 0x3fu);
    wr32(sp0 - 0x28u, rd32(COW_IMG(0x103d2ddcu)));
    wr32(sp0 - 0x2cu, 0xffffffffu);
    wr32(sp0 - 0x30u, COW_IMG(0x109b27ecu));
    wr32(sp0 - 0x34u, 0x220u);
    wr32(sp0 - 0x38u, rd32(COW_IMG(0x109b27c8u)));
    g->eax = sp0 - 8u;
    g->edx = 1u;
    t16 = rd32(COW_IMG(0x10329154u));
    g->esp = sp0 - 0x18u;
    t17 = cow_thiscall(g, t16, ecx, 8, rd32(COW_IMG(0x109b27c8u)), 0x220u, COW_IMG(0x109b27ecu), 0xffffffffu, rd32(COW_IMG(0x103d2ddcu)), 0x3fu, 0u, sp0 - 8u);
    t18 = g->ecx;
    t19 = g->edx;
    if (t17 == 0u)
    {
        ecx = t18;
        edx = t19;
        esi = t16;
        goto L_103200f7;
    }
    ecx = t18;
    edx = t19;
    esi = t16;
    if (rd32(sp0 - 8u) != 0u) goto L_103200f7;
    wr8(rd32(COW_IMG(0x103d2ddcu)) + 0x3fu, 0u);
L_103200ff: ;
    wr32(sp0 - 0x1cu, sp0 - 8u);
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, 0x3fu);
    wr32(sp0 - 0x28u, rd32(COW_IMG(0x103d2de0u)));
    wr32(sp0 - 0x2cu, 0xffffffffu);
    wr32(sp0 - 0x30u, COW_IMG(0x109b2840u));
    wr32(sp0 - 0x34u, 0x220u);
    wr32(sp0 - 0x38u, rd32(COW_IMG(0x109b27c8u)));
    g->eax = sp0 - 8u;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t20 = cow_thiscall(g, esi, ecx, 8, rd32(COW_IMG(0x109b27c8u)), 0x220u, COW_IMG(0x109b2840u), 0xffffffffu, rd32(COW_IMG(0x103d2de0u)), 0x3fu, 0u, sp0 - 8u);
    t21 = g->edx;
    if (t20 == 0u)
    {
        edx = t21;
        goto L_1032026e;
    }
    edx = t21;
    if (rd32(sp0 - 8u) != 0u) goto L_1032026e;
    wr8(rd32(COW_IMG(0x103d2de0u)) + 0x3fu, 0u);
L_1032027f: ;
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    g->ebp = rd32(sp0 - 4u);
    g->edx = edx;
    return;
L_103200af: ;
    wr32(COW_IMG(0x103d2d54u), 0u);
    wr32(COW_IMG(0x103d2d58u), 0u);
    goto L_103200bb;
L_103200f7: ;
    wr8(rd32(COW_IMG(0x103d2ddcu)), 0u);
    goto L_103200ff;
L_1032013b: ;
    if (rd8(esi) == 0u)
    {
        ecx = COW_IMG(0x1034a560u);
        goto L_10320278;
    }
    if (rd32(COW_IMG(0x109b2894u)) == 0u)
    {
        eax = rd32(COW_IMG(0x109b2894u));
        ecx = COW_IMG(0x1034a560u);
        goto L_1032015e;
    }
    eax = rd32(COW_IMG(0x109b2894u));
    wr32(sp0 - 0x1cu, eax);
    wr32(sp0 - 0x20u, esi);
    g->edi = 0xcu;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t22 = cow_call_regs(g, COW_IMG(0x10320960u), eax, g->ecx, g->edx, 1, 2, esi, eax);
    t23 = g->edx;
    if (t22 == 0u)
    {
        eax = t22;
        ecx = rd32(sp0 - 0x1cu);
        edx = t23;
        goto L_10320278;
    }
    eax = t22;
    ecx = rd32(sp0 - 0x1cu);
    edx = t23;
L_1032015e: ;
    wr32(sp0 - 0x1cu, rd32(COW_IMG(0x109b2894u)));
    g->eax = eax;
    t24 = rd32(COW_IMG(0x109b2894u));
    g->esp = sp0 - 0x10u;
    t25 = cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, ecx, edx, 1, 3, t24, in_edi, in_esi);
    t26 = g->ecx;
    t27 = g->edx;
    wr32(sp0 - 0x20u, esi);
    g->ecx = t26;
    g->edx = t27;
    g->esp = sp0 - 0x1cu;
    t28 = cow_call_regs(g, COW_IMG(0x10317480u), t25, g->ecx, g->edx, 1, 1, esi);
    t29 = g->ecx;
    t30 = g->edx;
    wr32(sp0 - 0x24u, t28 + 1u);
    g->ecx = t29;
    g->edx = t30;
    g->esp = sp0 - 0x18u;
    t31 = cow_cdecl(g, COW_IMG(0x10312fd6u), 3, t28 + 1u, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
    t32 = g->ecx;
    t33 = g->edx;
    wr32(COW_IMG(0x109b2894u), t31);
    if (t31 == 0u)
    {
        eax = t31;
        ecx = t32;
        edx = t33;
        goto L_10320278;
    }
    eax = t31;
    ecx = t32;
    edx = t33;
    wr32(sp0 - 0x1cu, esi);
    wr32(sp0 - 0x20u, eax);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t34 = cow_cdecl(g, COW_IMG(0x10317500u), 3, eax, esi, rd32(sp0 - 0x18u));
    t35 = g->ecx;
    t36 = g->edx;
    wr32(sp0 - 0x24u, 0xcu);
    g->esp = sp0 - 0x18u;
    t37 = cow_call_regs(g, COW_IMG(0x1031d077u), g->eax, t35, t36, 1, 3, 0xcu, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
    t38 = g->ecx;
    t39 = g->edx;
    wr32(sp0 - 0x28u, 3u);
    wr32(sp0 - 0x2cu, esi);
    wr32(sp0 - 0x30u, rd32(COW_IMG(0x103d2ddcu)));
    g->ecx = t38;
    g->edx = t39;
    g->esp = sp0 - 0x24u;
    cow_call_regs(g, COW_IMG(0x10312090u), t37, g->ecx, g->edx, 1, 3, rd32(COW_IMG(0x103d2ddcu)), esi, 3u);
    t40 = g->ecx;
    t41 = g->edx;
    wr8(rd32(COW_IMG(0x103d2ddcu)) + 3u, 0u);
    if (rd8(esi + 3u) != 0x2du)
    {
        ecx = t40;
        edx = t41;
        esi = esi + 3u;
    }
    else
    {
        ecx = t40;
        edx = t41;
        esi = esi + 3u;
        wr32(sp0 - 0xcu, 1u);
        esi = esi + 1u;
        loc_c = 1u;
    }
    wr32(sp0 - 0x1cu, esi);
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t42 = cow_thiscall_cdecl(g, COW_IMG(0x10312827u), ecx, 1, esi);
    t43 = g->edx;
    wr32(COW_IMG(0x103d2d50u), t42 * 0xe10u);
    eax = t42;
    ecx = t42 * 0xe10u;
    edx = t43;
L_103201d4: ;
    if (rd8(esi) == 0x2bu)
    {
        eax = (eax & 0xffffff00u) | rd8(esi);
        goto L_103201e2;
    }
    eax = (eax & 0xffffff00u) | rd8(esi);
    if ((int8_t)eax < 48) goto L_103201e5;
    if ((int8_t)eax > 57) goto L_103201e5;
L_103201e2: ;
    esi = esi + 1u;
    goto L_103201d4;
L_103201e5: ;
    if (rd8(esi) == 0x3au)
    {
        wr32(sp0 - 0x1cu, esi + 1u);
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t44 = cow_thiscall_cdecl(g, COW_IMG(0x10312827u), ecx, 1, esi + 1u);
        t45 = g->edx;
        t46 = t44 * 0x3cu + rd32(COW_IMG(0x103d2d50u));
        wr32(COW_IMG(0x103d2d50u), t46);
        eax = t44 * 0x3cu;
        ecx = t46;
        edx = t45;
        esi = esi + 1u;
L_10320203: ;
        if ((int8_t)rd8(esi) < 48) goto L_10320210;
        eax = (eax & 0xffffff00u) | rd8(esi);
        if ((int8_t)eax > 57) goto L_10320210;
        esi = esi + 1u;
        goto L_10320203;
    }
L_10320238: ;
    if (rd32(sp0 - 0xcu) != 0u)
    {
        wr32(COW_IMG(0x103d2d50u), -ecx);
        ecx = -ecx;
    }
    t50 = rd8(esi);
    wr32(COW_IMG(0x103d2d54u), (uint32_t)(int8_t)t50);
    if ((uint32_t)(int8_t)t50 == 0u) goto L_1032026e;
    eax = (uint32_t)(int8_t)t50;
    wr32(sp0 - 0x1cu, 3u);
    wr32(sp0 - 0x20u, esi);
    wr32(sp0 - 0x24u, rd32(COW_IMG(0x103d2de0u)));
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    cow_call_regs(g, COW_IMG(0x10312090u), eax, g->ecx, g->edx, 1, 3, rd32(COW_IMG(0x103d2de0u)), esi, 3u);
    t51 = g->edx;
    wr8(rd32(COW_IMG(0x103d2de0u)) + 3u, 0u);
    edx = t51;
    goto L_1032027f;
L_10320210: ;
    if (rd8(esi) == 0x3au)
    {
        wr32(sp0 - 0x1cu, esi + 1u);
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t47 = cow_thiscall_cdecl(g, COW_IMG(0x10312827u), ecx, 1, esi + 1u);
        t48 = g->edx;
        t49 = t47 + rd32(COW_IMG(0x103d2d50u));
        wr32(COW_IMG(0x103d2d50u), t49);
        eax = t47;
        ecx = t49;
        edx = t48;
        esi = esi + 1u;
L_1032022b: ;
        if ((int8_t)rd8(esi) < 48) goto L_10320238;
        eax = (eax & 0xffffff00u) | rd8(esi);
        if ((int8_t)eax > 57) goto L_10320238;
        esi = esi + 1u;
        goto L_1032022b;
    }
    goto L_10320238;
L_1032026e: ;
    wr8(rd32(COW_IMG(0x103d2de0u)), 0u);
    goto L_1032027f;
L_10320278: ;
    wr32(sp0 - 0x1cu, 0xcu);
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x1031d077u), g->eax, ecx, edx, 1, 3, 0xcu, in_edi, in_esi);
    t52 = g->edx;
    edx = t52;
    goto L_1032027f;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031fffd(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1031fffd(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
