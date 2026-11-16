/* f_0x101125b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101125b0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
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
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 448u);

    wr32(sp0 - 0x1a0u, in_ebx);
    wr32(sp0 - 0x1a4u, in_ebp);
    wr32(sp0 - 0x1a8u, in_esi);
    wr32(sp0 - 0x1acu, in_edi);
    wr32(sp0 - 0x18cu, self);
    g->edx = in_edx;
    g->esp = sp0 - 0x1acu;
    cow_thiscall(g, COW_IMG(0x10109110u), sp0 - 0x19cu, 0);
    t1 = g->edx;
    edx = t1;
    ebx = 0x20u;
    esi = sp0 - 0x100u;
L_101125d5: ;
    g->edx = edx;
    g->esp = sp0 - 0x1acu;
    t2 = cow_thiscall(g, COW_IMG(0x10109110u), esi, 0);
    t3 = g->edx;
    if (ebx != 1u)
    {
        edx = t3;
        ebx = ebx - 1u;
        esi = esi + 8u;
        goto L_101125d5;
    }
    eax = t2;
    edx = t3;
    ebx = ebx - 1u;
    g->edx = edx;
    g->esp = sp0 - 0x1acu;
    t4 = cow_call_regs(g, COW_IMG(0x1010c590u), eax, arg2, g->edx, 1, 0);
    t5 = g->edx;
    if (t4 == 0u)
    {
        eax = t4;
        edx = t5;
        goto L_101126f9;
    }
    eax = t4;
    edi = self;
L_101125f6: ;
    wr32(sp0 - 0x1b0u, 0x23u);
    wr32(sp0 - 0x1b4u, sp0 - 0x19cu);
    wr32(sp0 - 0x1b8u, 0x20u);
    wr32(sp0 - 0x1bcu, sp0 - 0x180u);
    g->ebx = ebx;
    g->eax = eax;
    g->edx = sp0 - 0x180u;
    g->esp = sp0 - 0x1acu;
    t6 = cow_thiscall(g, COW_IMG(0x10109c60u), eax, 4, sp0 - 0x180u, 0x20u, sp0 - 0x19cu, 0x23u);
    t7 = g->edx;
    if ((uint16_t)t6 == 0u)
    {
        eax = t6;
        edx = t7;
        goto L_101126e5;
    }
    eax = t6;
    edx = t7;
    ebp = t6;
    if ((uint16_t)ebp < 2u) goto L_10112661;
    t8 = rd32(sp0 - 0x180u);
    wr32(sp0 - 0x1b0u, t8);
    g->edx = edx;
    g->esp = sp0 - 0x1acu;
    t9 = cow_thiscall(g, COW_IMG(0x10109120u), sp0 - 0x188u, 1, t8);
    t10 = g->edx;
    wr32(sp0 - 0x1b0u, COW_IMG(0x1036bf28u));
    g->ebx = ebx;
    g->edx = t10;
    t11 = cow_thiscall(g, COW_IMG(0x10109570u), t9, 1, COW_IMG(0x1036bf28u));
    t12 = g->edx;
    g->edx = t12;
    t13 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x188u, 0);
    t14 = g->edx;
    if (t11 != 0u)
    {
        eax = t13;
        edx = t14;
        ebx = (ebx & 0xffffff00u) | t11 == 0u;
        goto L_10112661;
    }
    edx = t14;
    ebx = (ebx & 0xffffff00u) | t11 == 0u;
    t15 = rd32(sp0 - 0x17cu);
    wr32(sp0 - 0x1b0u, t15);
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0x1acu;
    t16 = cow_thiscall(g, COW_IMG(0x10109570u), arg3, 1, t15);
    t17 = g->edx;
    if (t16 == 0u)
    {
        eax = t16;
        edx = t17;
        goto L_1011272a;
    }
    eax = t16;
    edx = t17;
L_10112661: ;
    if ((uint16_t)ebp != 0u)
    {
        ebx = (uint16_t)ebp;
        esi = sp0 - 0x100u;
        edi = sp0 - 0x180u;
L_10112679: ;
        wr32(sp0 - 0x1b0u, rd32(edi));
        g->edx = rd32(edi);
        t21 = rd32(edi);
        g->esp = sp0 - 0x1acu;
        cow_call_regs(g, COW_IMG(0x101092c0u), eax, esi, g->edx, 0, 1, t21);
        t22 = g->edx;
        wr32(sp0 - 0x1b0u, 0u);
        t23 = cow_fastcall(g, COW_IMG(0x10109e50u), esi, t22, 1, 0u);
        t24 = g->edx;
        if (ebx != 1u)
        {
            eax = t23;
            ebx = ebx - 1u;
            esi = esi + 8u;
            edi = edi + 4u;
            goto L_10112679;
        }
        edx = t24;
        ebx = ebx - 1u;
        edi = rd32(sp0 - 0x18cu);
    }
    g->esp = sp0 - 0x1acu;
    cow_thiscall(g, COW_IMG(0x10109110u), sp0 - 0x194u, 0);
    wr32(sp0 - 0x1b0u, sp0 - 0x194u);
    wr32(sp0 - 0x1b4u, ebp);
    wr32(sp0 - 0x1b8u, sp0 - 0x100u);
    wr32(sp0 - 0x1bcu, arg1);
    g->eax = rd32(edi);
    g->edx = sp0 - 0x100u;
    t25 = rd32(edi);
    t26 = cow_thiscall(g, rd32(t25 + 4u), edi, 4, arg1, sp0 - 0x100u, ebp, sp0 - 0x194u);
    t27 = g->edx;
    if (t26 == 0u)
    {
        eax = t26;
        edx = t27;
        goto L_101126dc;
    }
    eax = t26;
    wr32(sp0 - 0x1b0u, sp0 - 0x194u);
    wr32(sp0 - 0x1b4u, arg2);
    wr32(sp0 - 0x1b8u, arg1);
    g->edx = arg2;
    g->esp = sp0 - 0x1acu;
    t28 = cow_thiscall(g, COW_IMG(0x101125b0u), eax, 3, arg1, arg2, sp0 - 0x194u);
    t29 = g->edx;
    if ((uint8_t)t28 == 0u)
    {
        eax = t28;
        edx = t29;
        goto L_1011275b;
    }
    eax = t28;
    edx = t29;
L_101126dc: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1acu;
    t34 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x194u, 0);
    t35 = g->edx;
    eax = t34;
    edx = t35;
L_101126e5: ;
    g->edx = edx;
    g->esp = sp0 - 0x1acu;
    t36 = cow_call_regs(g, COW_IMG(0x1010c590u), eax, arg2, g->edx, 1, 0);
    t37 = g->edx;
    if (t36 != 0u)
    {
        eax = t36;
        goto L_101125f6;
    }
    eax = t36;
    edx = t37;
L_101126f9: ;
    esi = sp0;
    edi = 0x20u;
L_10112705: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1acu;
    t38 = cow_thiscall(g, COW_IMG(0x101090a0u), esi - 8u, 0);
    t39 = g->edx;
    if (edi != 1u)
    {
        eax = t38;
        edx = t39;
        esi = esi - 8u;
        edi = edi - 1u;
        goto L_10112705;
    }
    eax = t38;
    edx = t39;
L_10112712: ;
    g->eax = eax;
    g->esp = sp0 - 0x1acu;
    t40 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x19cu, 0);
    g->ebx = rd32(sp0 - 0x1a0u);
    g->esi = rd32(sp0 - 0x1a8u);
    g->edi = rd32(sp0 - 0x1acu);
    g->ebp = rd32(sp0 - 0x1a4u);
    return t40 & 0xffffff00u;
L_1011272a: ;
    esi = sp0;
    edi = 0x20u;
L_10112736: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1acu;
    t18 = cow_thiscall(g, COW_IMG(0x101090a0u), esi - 8u, 0);
    t19 = g->edx;
    if (edi != 1u)
    {
        eax = t18;
        edx = t19;
        esi = esi - 8u;
        edi = edi - 1u;
        goto L_10112736;
    }
    eax = t18;
    edx = t19;
    g->eax = eax;
    g->esp = sp0 - 0x1acu;
    t20 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x19cu, 0);
    g->ebx = rd32(sp0 - 0x1a0u);
    g->esi = rd32(sp0 - 0x1a8u);
    g->edi = rd32(sp0 - 0x1acu);
    g->ebp = rd32(sp0 - 0x1a4u);
    return (t20 & 0xffffff00u) | 1u;
L_1011275b: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1acu;
    t30 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x194u, 0);
    t31 = g->edx;
    eax = t30;
    edx = t31;
    esi = sp0;
    edi = 0x20u;
L_10112770: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1acu;
    t32 = cow_thiscall(g, COW_IMG(0x101090a0u), esi - 8u, 0);
    t33 = g->edx;
    if (edi != 1u)
    {
        eax = t32;
        edx = t33;
        esi = esi - 8u;
        edi = edi - 1u;
        goto L_10112770;
    }
    eax = t32;
    edx = t33;
    goto L_10112712;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101125b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101125b0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
