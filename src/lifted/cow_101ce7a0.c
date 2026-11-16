/* f_0x101ce7a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101ce7a0(Guest* g)
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x101cda60u), self, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (rd8(self + 0x2cu) == 0u)
    {
        eax = (t1 & 0xffffff00u) | rd8(self + 0x2cu);
        ecx = t2;
        edx = t3;
    }
    else
    {
        eax = (t1 & 0xffffff00u) | rd8(self + 0x2cu);
        ecx = t2;
        edx = t3;
        t4 = (eax & 0xffffff00u) | rd8(self + 0x20u);
        t5 = (ecx & 0xffffff00u) | rd8(self + 0x1cu);
        t6 = (edx & 0xffffff00u) | rd8(self + 0x18u);
        t7 = (t4 & 0xffffff00u) | rd8(self + 0x14u);
        t8 = (t5 & 0xffffff00u) | rd8(self + 6u);
        t9 = (t6 & 0xffff0000u) | rd16(self + 8u);
        t10 = (t7 & 0xffffff00u) | rd8(self + 5u);
        t11 = (t8 & 0xffffff00u) | rd8(self + 0x10u);
        g->eax = t10;
        g->ecx = t11;
        g->edx = t9;
        g->esp = sp0 - 8u;
        t12 = cow_cdecl(g, COW_IMG(0x100f0cc0u), 8, t11, t10, t9, t8, t7, t6, t5, t4);
        t13 = g->ecx;
        t14 = g->edx;
        if ((uint8_t)t12 == 0u)
        {
            eax = t12;
            ecx = t13;
            edx = t14;
        }
        else
        {
            eax = t12;
            ecx = t13;
            edx = t14;
            wr8(self + 0x2cu, 0u);
        }
    }
    if (rd8(self + 0x2du) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x2du);
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x2du);
        t15 = (edx & 0xffff0000u) | rd16(self + 8u);
        t16 = (eax & 0xffffff00u) | rd8(self + 5u);
        t17 = (ecx & 0xffffff00u) | rd8(self + 0x10u);
        g->eax = t16;
        g->edx = t15;
        g->esp = sp0 - 8u;
        t18 = cow_cdecl(g, COW_IMG(0x100f0d40u), 3, t17, t16, t15);
        t19 = g->edx;
        if ((uint8_t)t18 == 0u)
        {
            eax = t18;
            edx = t19;
        }
        else
        {
            eax = t18;
            edx = t19;
            wr8(self + 0x2du, 0u);
        }
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t20 = cow_stdcall(g, COW_IMG(0x101d5fe0u), 0);
    t21 = g->edx;
    if ((uint8_t)t20 == 0u)
    {
        eax = t20;
        edx = t21;
        goto L_101ce844;
    }
    eax = t20;
    edx = t21;
    if (rd8(self + 0x30u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x30u);
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x30u);
        g->esp = sp0 - 8u;
        t22 = cow_call_regs(g, COW_IMG(0x101cd9a0u), eax, self, g->edx, 1, 0);
        g->edx = rd32(t22);
        t23 = rd32(t22);
        t24 = cow_thiscall(g, rd32(t23 + 0x1e4u), t22, 0);
        t25 = g->edx;
        if ((uint8_t)t24 == 0u)
        {
            eax = t24;
        }
        else
        {
            eax = t24;
            edx = t25;
            edi = t22;
            g->esp = sp0 - 8u;
            t26 = cow_call_regs(g, COW_IMG(0x100859d0u), eax, edi, edx, 0, 1, 1u);
            wr8(self + 0x30u, 0u);
            eax = t26;
        }
    }
L_101ce83f: ;
    return (eax & 0xffffff00u) | 1u;
L_101ce844: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t27 = cow_call_regs(g, COW_IMG(0x101d30f0u), eax, rd32(COW_IMG(0x106631d4u)), g->edx, 1, 0);
    t28 = g->edx;
    if (t27 == 0u)
    {
        edx = t28;
        goto L_101ce893;
    }
    eax = t27;
    edx = t28;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t29 = cow_call_regs(g, COW_IMG(0x101cd9a0u), eax, self, g->edx, 1, 0);
    t30 = g->edx;
    g->edx = t30;
    t31 = cow_call_regs(g, COW_IMG(0x101d30f0u), t29, rd32(COW_IMG(0x106631d4u)), g->edx, 1, 0);
    t32 = g->edx;
    if (t31 != t29)
    {
        edx = t32;
        goto L_101ce893;
    }
    edx = t32;
    if ((uint32_t)(int8_t)rd8(self + 4u) - 1u > 3u) goto L_101ce893;
    eax = (uint32_t)(int8_t)rd8(self + 4u) - 1u;
    t33 = rd32(COW_IMG(0x101ce8ecu) + eax * 4u);
    switch (t33 - RD)
    {
    case 0x101ce87cu: goto L_101ce87c;
    case 0x101ce883u: goto L_101ce883;
    default: rt_fatal(g, COW_IMG(0x101ce875u), "switch");
    }
    return 0;
L_101ce87c: ;
    if (rd16(self + 0xau) != 0xeu) goto L_101ce88a;
L_101ce883: ;
    loc_c = 0x80u;
L_101ce88c: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x101ce900u), eax, self, g->edx, 0, 1, loc_c);
    t34 = g->edx;
    edx = t34;
L_101ce893: ;
    if ((uint32_t)(int8_t)rd8(self + 4u) == 2u)
    {
        eax = (uint32_t)(int8_t)rd8(self + 4u) - 2u;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t37 = cow_thiscall(g, COW_IMG(0x101ce360u), self, 0);
        t38 = g->edx;
        eax = t37;
        edx = t38;
    }
    else
    {
        eax = (uint32_t)(int8_t)rd8(self + 4u) - 2u;
        if (eax != 2u)
        {
            eax = eax - 2u;
        }
        else
        {
            eax = eax - 2u;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t35 = cow_call_regs(g, COW_IMG(0x101ce6a0u), eax, self, g->edx, 1, 0);
            t36 = g->edx;
            eax = t35;
            edx = t36;
        }
    }
    t39 = (eax & 0xffffff00u) | rd8(self + 5u);
    t40 = rd32(self + 0x10u);
    g->eax = t39;
    g->esp = sp0 - 8u;
    t41 = cow_cdecl(g, COW_IMG(0x100eb490u), 2, t40, t39);
    if (t41 != 0u)
    {
        eax = t41;
        goto L_101ce8ca;
    }
    eax = t41;
    return eax & 0xffffff00u;
L_101ce88a: ;
    loc_c = 0x40u;
    goto L_101ce88c;
L_101ce8ca: ;
    if ((rd8(eax + 0x11u) & 0x40u) == 0u) goto L_101ce8d9;
    wr8(self + 0x2eu, 1u);
    return (eax & 0xffffff00u) | 1u;
L_101ce8d9: ;
    if (rd8(self + 0x2eu) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x2eu);
        goto L_101ce83f;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x2eu);
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ce7a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101ce7a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
