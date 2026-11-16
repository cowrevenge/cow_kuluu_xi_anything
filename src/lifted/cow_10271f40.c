/* f_0x10271f40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10271f40(Guest* g)
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 68u);

    wr32(sp0 - 0x1cu, in_ebx);
    wr32(sp0 - 0x20u, in_ebp);
    wr32(sp0 - 0x24u, in_esi);
    wr32(sp0 - 0x28u, in_edi);
    if ((int32_t)rd32(COW_IMG(0x1099bb70u)) <= 0)
    {
        t20 = COW_IMG(0x103b1b70u) + arg1 * 0x10u;
        wr32(sp0 - 0x2cu, t20);
        wr32(sp0 - 0x30u, arg1);
        g->eax = t20;
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0 - 0x20u;
        t21 = cow_cdecl(g, COW_IMG(0x10272810u), 4, arg1, t20, in_edi, in_esi);
        t22 = g->ecx;
        t23 = g->edx;
        t24 = COW_IMG(0x1099bcb4u) + arg1 * 0x7cu;
        wr32(sp0 - 0x34u, t24);
        g->esp = sp0 - 0x28u;
        cow_cdecl(g, COW_IMG(0x1026df20u), 3, t24, arg1, rd32(sp0 - 0x2cu));
        t25 = rd32(COW_IMG(0x103b1bc0u) + arg1 * 0x10u);
        t26 = rd32(COW_IMG(0x103b1bc8u) + arg1 * 0x10u);
        t27 = rd32(COW_IMG(0x103b1bc4u) + arg1 * 0x10u);
        wr32(t24 + 0x68u, t25);
        wr32(sp0 - 0x38u, t24);
        t28 = rd32(COW_IMG(0x103b1bccu) + arg1 * 0x10u);
        wr32(t24 + 0x6cu, t27);
        wr32(t24 + 0x70u, t26);
        wr32(t24 + 0x74u, t28);
        wr32(t24 + 0x78u, 0x41a00000u);
        g->eax = t26;
        g->ecx = t28;
        g->edx = t27;
        g->esp = sp0 - 0x34u;
        t29 = cow_cdecl(g, COW_IMG(0x1026e210u), 1, t24);
        t30 = g->ecx;
        t31 = g->edx;
        t32 = COW_IMG(0x1099bf20u) + arg1 * 0x7cu;
        wr32(sp0 - 0x3cu, t32);
        g->esp = sp0 - 0x30u;
        cow_cdecl(g, COW_IMG(0x1026df20u), 3, t32, rd32(sp0 - 0x38u), rd32(sp0 - 0x34u));
        t33 = rd32(COW_IMG(0x103b1bc0u) + arg1 * 0x10u);
        t34 = rd32(COW_IMG(0x103b1bc4u) + arg1 * 0x10u);
        t35 = rd32(COW_IMG(0x103b1bc8u) + arg1 * 0x10u);
        wr32(t32 + 0x68u, t33);
        t36 = rd32(COW_IMG(0x103b1bccu) + arg1 * 0x10u);
        wr32(t32 + 0x6cu, t34);
        wr32(t32 + 0x70u, t35);
        wr32(t32 + 0x74u, t36);
        t37 = rd32(COW_IMG(0x1099c510u));
        wr32(t32 + 0x78u, t37);
        eax = t37;
        ecx = t35;
        edx = t36;
        edi = t32;
    }
    else
    {
        t1 = COW_IMG(0x1099c1a0u) + arg1 * 0x38u;
        wr32(sp0 - 0x2cu, t1);
        wr32(sp0 - 0x30u, arg1);
        g->eax = arg1 * 8u - arg1;
        g->ecx = t1;
        g->edx = in_edx;
        g->esp = sp0 - 0x20u;
        t2 = cow_cdecl(g, COW_IMG(0x10272810u), 4, arg1, t1, in_edi, in_esi);
        t3 = g->ecx;
        t4 = g->edx;
        t5 = COW_IMG(0x1099bcb4u) + arg1 * 0x7cu;
        wr32(sp0 - 0x34u, t5);
        g->esp = sp0 - 0x28u;
        cow_cdecl(g, COW_IMG(0x1026df20u), 3, t5, arg1, rd32(sp0 - 0x2cu));
        wr32(sp0 - 0x38u, t5);
        t6 = rd32(COW_IMG(0x1099c30cu) + arg1 * 0x7cu);
        wr32(t5 + 0x68u, t6);
        t7 = rd32(COW_IMG(0x1099c310u) + arg1 * 0x7cu);
        wr32(t5 + 0x6cu, t7);
        t8 = rd32(COW_IMG(0x1099c314u) + arg1 * 0x7cu);
        wr32(t5 + 0x70u, t8);
        t9 = rd32(COW_IMG(0x1099c318u) + arg1 * 0x7cu);
        wr32(t5 + 0x74u, t9);
        t10 = rd32(COW_IMG(0x1099c31cu) + arg1 * 0x7cu);
        wr32(t5 + 0x78u, t10);
        g->eax = t10;
        g->ecx = t8;
        g->edx = t9;
        g->esp = sp0 - 0x34u;
        t11 = cow_cdecl(g, COW_IMG(0x1026e210u), 1, t5);
        t12 = g->ecx;
        t13 = g->edx;
        t14 = COW_IMG(0x1099bf20u) + arg1 * 0x7cu;
        wr32(sp0 - 0x3cu, t14);
        g->esp = sp0 - 0x30u;
        cow_cdecl(g, COW_IMG(0x1026df20u), 3, t14, rd32(sp0 - 0x38u), rd32(sp0 - 0x34u));
        t15 = rd32(COW_IMG(0x1099c30cu) + arg1 * 0x7cu);
        wr32(t14 + 0x68u, t15);
        t16 = rd32(COW_IMG(0x1099c310u) + arg1 * 0x7cu);
        wr32(t14 + 0x6cu, t16);
        t17 = rd32(COW_IMG(0x1099c314u) + arg1 * 0x7cu);
        wr32(t14 + 0x70u, t17);
        t18 = rd32(COW_IMG(0x1099c318u) + arg1 * 0x7cu);
        wr32(t14 + 0x74u, t18);
        t19 = rd32(COW_IMG(0x1099c510u));
        wr32(t14 + 0x78u, t19);
        eax = t17;
        ecx = t18;
        edx = t19;
        edi = t14;
    }
    wr32(sp0 - 0x40u, edi);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x3cu;
    t38 = cow_cdecl(g, COW_IMG(0x1026e210u), 1, edi);
    t39 = g->ecx;
    t40 = g->edx;
    wr32(sp0 - 0x2cu, 0x3e800000u);
    wr32(sp0 - 0x30u, 0x3e800000u);
    wr32(sp0 - 0x34u, 0x3e800000u);
    wr32(sp0 - 0x38u, edi + 0x1cu);
    g->edx = t40;
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x102806d0u), 4, edi + 0x1cu, 0x3e800000u, 0x3e800000u, 0x3e800000u);
    t41 = g->edx;
    wr32(sp0 - 0x3cu, sp0 - 0x18u);
    g->ecx = sp0 - 0x18u;
    g->esp = sp0 - 0x38u;
    t42 = cow_cdecl(g, COW_IMG(0x1026fbd0u), 1, sp0 - 0x18u);
    t43 = g->ecx;
    if (t42 == 0u)
    {
        eax = t42;
        ecx = t43;
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        wr32(sp0 - 0x30u, arg1);
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x102725c0u), 9, arg1, sp0 - 0x18u, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u), rd32(sp0 - 0x10u));
    }
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10271f40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10271f40(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
