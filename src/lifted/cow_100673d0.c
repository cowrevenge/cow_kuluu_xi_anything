/* f_0x100673d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_100673d0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
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
    uint32_t t4;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    ecx = self;
    edx = in_edx;
    ebx = in_ebx;
L_100673d6: ;
    g->ecx = ecx;
    g->esp = sp0;
    t1 = cow_call_regs(g, COW_IMG(0x10313f6cu), g->eax, g->ecx, edx, 1, 3, arg1, in_esi, in_ebx);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 != 0x28u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        ebx = (ebx & 0xffffff00u) | (uint8_t)t1;
        if ((uint8_t)ebx != 0x2fu) goto L_10067443;
        g->ecx = ecx;
        g->esp = sp0;
        t4 = cow_call_regs(g, COW_IMG(0x10313f6cu), g->eax, g->ecx, edx, 1, 3, arg1, in_esi, in_ebx);
        t5 = g->ecx;
        t6 = g->edx;
        if ((uint8_t)t4 != (uint8_t)ebx)
        {
            eax = t4;
            ecx = t5;
            edx = t6;
            goto L_1006747c;
        }
        ecx = t5;
        edx = t6;
        g->ecx = ecx;
        g->esp = sp0;
        t7 = cow_call_regs(g, COW_IMG(0x10313f6cu), g->eax, g->ecx, edx, 1, 3, arg1, in_esi, in_ebx);
        t8 = g->ecx;
        t9 = g->edx;
        if ((uint8_t)t7 != 0x23u)
        {
            ecx = t8;
            edx = t9;
            goto L_1006742e;
        }
        ecx = t8;
        edx = t9;
        g->ecx = ecx;
        g->esp = sp0;
        t10 = cow_call_regs(g, COW_IMG(0x10313f6cu), g->eax, g->ecx, edx, 1, 3, arg1, in_esi, in_ebx);
        t11 = g->ecx;
        t12 = g->edx;
        if ((uint8_t)t10 == 0x23u)
        {
            ecx = t11;
            edx = t12;
            ebx = (ebx & 0xffffff00u) | (uint8_t)t10;
        }
        else
        {
            ecx = t11;
            edx = t12;
            ebx = (ebx & 0xffffff00u) | (uint8_t)t10;
            g->ecx = ecx;
            g->esp = sp0 - 8u;
            cow_call_regs(g, COW_IMG(0x10313d30u), g->eax, g->ecx, edx, 1, 3, arg1, 0xffffffffu, 1u);
            t13 = g->ecx;
            t14 = g->edx;
            ecx = t13;
            edx = t14;
            ebx = (ebx & 0xffffff00u) | 0x23u;
        }
    }
    else
    {
        ecx = t2;
        edx = t3;
        ebx = (ebx & 0xffffff00u) | (uint8_t)t1;
        wr32(COW_IMG(0x1047bf5cu), rd32(COW_IMG(0x1047bf5cu)) + 1u);
    }
L_10067456: ;
    if (rd32(COW_IMG(0x1047bf5cu)) == 0u)
    {
        eax = rd32(COW_IMG(0x1047bf5cu));
        goto L_100674cb;
    }
    eax = rd32(COW_IMG(0x1047bf5cu));
    if ((uint8_t)ebx != 0x20u) goto L_10067519;
    if (rd8(COW_IMG(0x1047bf60u)) == 0u) goto L_100673d6;
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047bf60u));
    return (eax & 0xffffff00u) | (uint8_t)ebx;
L_1006742e: ;
    g->ecx = ecx;
    g->esp = sp0;
    t15 = cow_call_regs(g, COW_IMG(0x10313f6cu), g->eax, g->ecx, edx, 1, 3, arg1, in_esi, in_ebx);
    t16 = g->ecx;
    t17 = g->edx;
    if ((uint8_t)t15 == 0xau)
    {
        eax = t15;
        ecx = t16;
        edx = t17;
        ebx = (ebx & 0xffffff00u) | (uint8_t)t15;
        goto L_10067443;
    }
    eax = t15;
    ecx = t16;
    edx = t17;
    ebx = (ebx & 0xffffff00u) | (uint8_t)t15;
    if ((uint8_t)ebx != 0xffu) goto L_1006742e;
L_10067443: ;
    if ((uint8_t)ebx == 0x22u)
    {
        wr8(COW_IMG(0x1047bf60u), rd8(COW_IMG(0x1047bf60u)) == 0u);
    }
    goto L_10067456;
L_1006747c: ;
    if ((uint8_t)eax != 0x2au) goto L_100674ba;
L_10067480: ;
    g->ecx = ecx;
    g->esp = sp0;
    t18 = cow_call_regs(g, COW_IMG(0x10313f6cu), g->eax, g->ecx, edx, 1, 3, arg1, in_esi, in_ebx);
    t19 = g->ecx;
    t20 = g->edx;
    if ((uint8_t)t18 == 0x2au)
    {
        ecx = t19;
        edx = t20;
        goto L_10067491;
    }
    eax = t18;
    ecx = t19;
    edx = t20;
    if ((uint8_t)eax != 0xffu) goto L_10067480;
L_10067491: ;
    g->ecx = ecx;
    g->esp = sp0;
    t21 = cow_call_regs(g, COW_IMG(0x10313f6cu), g->eax, g->ecx, edx, 1, 3, arg1, in_esi, in_ebx);
    t22 = g->ecx;
    t23 = g->edx;
    if ((uint8_t)t21 == 0x2fu)
    {
        ecx = t22;
        edx = t23;
        goto L_100674ad;
    }
    ecx = t22;
    edx = t23;
    g->ecx = ecx;
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x10313d30u), g->eax, g->ecx, edx, 1, 3, arg1, 0xffffffffu, 1u);
    t24 = g->ecx;
    t25 = g->edx;
    ecx = t24;
    edx = t25;
    goto L_10067480;
L_100674ad: ;
    g->ecx = ecx;
    g->esp = sp0;
    t26 = cow_call_regs(g, COW_IMG(0x10313f6cu), g->eax, g->ecx, edx, 1, 3, arg1, in_esi, in_ebx);
    t27 = g->ecx;
    t28 = g->edx;
    eax = t26;
    ecx = t27;
    edx = t28;
    ebx = (ebx & 0xffffff00u) | (uint8_t)t26;
    goto L_10067443;
L_100674ba: ;
    g->ecx = ecx;
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x10313d30u), g->eax, g->ecx, edx, 1, 3, arg1, 0xffffffffu, 1u);
    t29 = g->ecx;
    t30 = g->edx;
    ecx = t29;
    edx = t30;
    ebx = (ebx & 0xffffff00u) | 0x2fu;
    goto L_10067456;
L_100674cb: ;
    if ((uint8_t)ebx == 0x20u) goto L_100674d5;
    if ((uint8_t)ebx != 9u) goto L_10067519;
L_100674d5: ;
    if (rd8(COW_IMG(0x1047bf60u)) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047bf60u));
        goto L_10067519;
    }
L_100674de: ;
    g->ecx = ecx;
    g->esp = sp0;
    t31 = cow_call_regs(g, COW_IMG(0x10313f6cu), g->eax, g->ecx, edx, 1, 3, arg1, in_esi, in_ebx);
    t32 = g->ecx;
    t33 = g->edx;
    if ((uint8_t)t31 == 0x20u)
    {
        ecx = t32;
        edx = t33;
        goto L_100674de;
    }
    eax = t31;
    ecx = t32;
    edx = t33;
    if ((uint8_t)eax == 9u) goto L_100674de;
    if ((uint8_t)eax != 0x28u) goto L_10067505;
    t34 = rd32(COW_IMG(0x1047bf5cu)) + 1u;
    wr32(COW_IMG(0x1047bf5cu), t34);
    return (t34 & 0xffffff00u) | 0x28u;
L_10067505: ;
    g->esp = sp0 - 8u;
    t35 = cow_call_regs(g, COW_IMG(0x10313d30u), g->eax, g->ecx, edx, 1, 3, arg1, 0xffffffffu, 1u);
    return (t35 & 0xffffff00u) | 0x20u;
L_10067519: ;
    if ((uint8_t)ebx == 0x29u)
    {
        wr32(COW_IMG(0x1047bf5cu), rd32(COW_IMG(0x1047bf5cu)) - 1u);
    }
    return (eax & 0xffffff00u) | (uint8_t)ebx;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100673d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100673d0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
