/* f_0x101389c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101389c0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;

    if (rd8(self + 0x54u) == 0u) goto L_101389ef;
    eax = (in_eax & 0xffffff00u) | rd8(self + 0x54u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_call_regs(g, COW_IMG(0x101cc4f0u), eax, g->ecx, g->edx, 1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t3;
        goto L_101389e6;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    loc_c = eax + 0x7cu;
L_101389ff: ;
    g->edx = edx;
    g->esp = sp0;
    t4 = cow_cdecl(g, COW_IMG(0x10312031u), 5, self + 0x458u, COW_IMG(0x1034f7e0u), loc_c, in_edi, in_esi);
    t5 = g->edx;
    eax = t4;
    edx = t5;
L_10138a07: ;
    if (rd8(self + 0x54u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x54u);
        edi = 1u;
        goto L_10138a33;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x54u);
    edi = 1u;
L_10138a13: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t6 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, edi);
    t7 = g->edx;
    if ((int32_t)(edi + 1u) < 10)
    {
        eax = t6;
        edx = t7;
        edi = edi + 1u;
        goto L_10138a13;
    }
    eax = t6;
    edx = t7;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t8 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 0xbu, 9u);
    t9 = g->edx;
    g->edx = t9;
    return t8;
L_101389e6: ;
    wr8(self + 0x458u, 0u);
    goto L_10138a07;
L_101389ef: ;
    ecx = self + 0x2cu;
    edx = self + 0x458u;
    loc_c = self + 0x2cu;
    goto L_101389ff;
L_10138a33: ;
    g->eax = eax;
    g->edx = edx;
    t10 = rd32(self + 8u);
    g->esp = sp0 - 8u;
    t11 = cow_thiscall(g, COW_IMG(0x10118b60u), t10, 2, 0xbu, edi);
    t12 = g->ecx;
    t13 = g->edx;
    if ((int32_t)(edi + 1u) < 10)
    {
        eax = t11;
        edx = t13;
        edi = edi + 1u;
        goto L_10138a33;
    }
    eax = t11;
    ecx = t12;
    edx = t13;
    if (rd8(self + 0x55u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x55u);
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x55u);
        g->eax = eax;
        g->edx = edx;
        t14 = rd32(self + 8u);
        g->esp = sp0 - 8u;
        t15 = cow_thiscall(g, COW_IMG(0x10118b60u), t14, 2, 5u, 9u);
        t16 = g->ecx;
        t17 = g->edx;
        eax = t15;
        ecx = t16;
        edx = t17;
    }
    if (rd8(self + 0x2cu) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x2cu);
        goto L_10138b0b;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x2cu);
    if (rd8(self + 0x14u) == 0xdcu) goto L_10138a71;
    eax = (eax & 0xffffff00u) | rd8(self + 0x14u);
    if ((uint8_t)eax != 0xdeu) goto L_10138b0b;
L_10138a71: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t18 = cow_cdecl(g, COW_IMG(0x100e47c0u), 1, 8u);
    t19 = g->ecx;
    t20 = g->edx;
    if ((uint8_t)t18 != 0u)
    {
        eax = t18;
        ecx = t19;
        edx = t20;
    }
    else
    {
        eax = t18;
        edx = t20;
        g->eax = eax;
        g->edx = edx;
        t21 = rd32(self + 8u);
        g->esp = sp0 - 8u;
        t22 = cow_thiscall(g, COW_IMG(0x10118b60u), t21, 2, 5u, 6u);
        t23 = g->ecx;
        t24 = g->edx;
        g->ecx = t23;
        g->edx = t24;
        t25 = cow_call_regs(g, COW_IMG(0x101cc4f0u), t22, g->ecx, g->edx, 1, 0);
        t26 = g->ecx;
        t27 = g->edx;
        if (t25 == 0u)
        {
            ecx = t26;
            edx = t27;
            goto L_10138aa3;
        }
        eax = t25;
        ecx = t26;
        edx = t27;
        if ((rd32(eax + 0x128u) >> 0xbu & 7u) >= 3u)
        {
            eax = (rd32(eax + 0x128u) >> 0xbu & 0xffffff00u) | (rd32(eax + 0x128u) >> 0xbu & 7u);
            goto L_10138ac1;
        }
L_10138aa3: ;
        if (rd32(COW_IMG(0x104dfd98u)) == 0u)
        {
            eax = rd32(COW_IMG(0x104dfd98u));
            goto L_10138ab5;
        }
        eax = rd32(COW_IMG(0x104dfd98u));
        if (rd8(eax + 0x40decu) >= 6u) goto L_10138ac1;
L_10138ab5: ;
        g->eax = eax;
        g->edx = edx;
        t28 = rd32(self + 8u);
        g->esp = sp0 - 8u;
        t29 = cow_thiscall(g, COW_IMG(0x10118b60u), t28, 2, 5u, 7u);
        t30 = g->ecx;
        t31 = g->edx;
        eax = t29;
        ecx = t30;
        edx = t31;
    }
L_10138ac1: ;
    if ((rd8(self + 0x15u) & 0x20u) == 0u) goto L_10138af0;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t32 = cow_cdecl(g, COW_IMG(0x100e47c0u), 1, 8u);
    t33 = g->edx;
    if ((uint8_t)t32 != 0u)
    {
        eax = t32;
        edx = t33;
        goto L_10138b2f;
    }
    edx = t33;
    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        goto L_10138af0;
    }
    eax = rd32(COW_IMG(0x104dfd98u));
    if (rd8(eax + 0x40deau) == 1u)
    {
        eax = (eax & 0xffffff00u) | rd8(eax + 0x40deau);
        goto L_10138b2f;
    }
    eax = (eax & 0xffffff00u) | rd8(eax + 0x40deau);
    if ((uint8_t)eax == 2u) goto L_10138b2f;
    if ((uint8_t)eax == 3u) goto L_10138b2f;
L_10138af0: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t34 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 8u);
    t35 = g->edx;
    g->edx = t35;
    t36 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 6u);
    t37 = g->edx;
    g->edx = t37;
    return t36;
L_10138b0b: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t38 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 6u);
    t39 = g->edx;
    g->edx = t39;
    t40 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 8u);
    t41 = g->edx;
    g->edx = t41;
    t42 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 7u);
    t43 = g->edx;
    eax = t42;
    edx = t43;
L_10138b2f: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101389c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101389c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
