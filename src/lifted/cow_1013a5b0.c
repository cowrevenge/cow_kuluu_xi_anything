/* f_0x1013a5b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1013a5b0(Guest* g)
{
    double d14;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;

    g->ebx = 1u;
    g->edx = in_edx;
    t1 = cow_call_regs(g, COW_IMG(0x10123a70u), in_eax, self, g->edx, 1, 7, 0x3eu, 1u, 4u, 0xffffffffu, in_edi, in_esi, in_ebx);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        g->ebx = 1u;
        g->edx = edx;
        g->esp = sp0;
        t4 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3eu, 0u, 4u, 0xffffffffu, in_edi, in_esi, in_ebx);
        t5 = g->ecx;
        t6 = g->edx;
        if ((uint8_t)t4 == 0u)
        {
            eax = t4;
            ecx = t5;
            edx = t6;
            g->ebx = 1u;
            g->edx = edx;
            g->esp = sp0;
            t7 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3eu, 0x8bu, 4u, 0xffffffffu, in_edi, in_esi, in_ebx);
            t8 = g->ecx;
            t9 = g->edx;
            t10 = (-((uint8_t)t7 != 0u) & 0xfu) - 1u;
            eax = t10;
            ecx = t8;
            edx = t9;
            edi = t10;
        }
        else
        {
            eax = t4;
            ecx = t5;
            edx = t6;
            edi = 0u;
        }
    }
    else
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        edi = 1u;
    }
    if ((uint16_t)edi != rd16(self + 0x1cu)) goto L_1013a692;
    if ((uint16_t)edi == 0xffffu) goto L_1013a692;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t11 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t12 = g->ecx;
    t13 = g->edx;
    d14 = cow_take_float(g);
    g->edx = t13;
    fpush(g, d14);
    t15 = cow_call_regs(g, COW_IMG(0x10311c6cu), t11, g->ecx, g->edx, 1, 0);
    t16 = g->edx;
    wr16(self + 0x1eu, (uint16_t)(rd16(self + 0x1eu) - (uint16_t)t15));
    if ((int16_t)rd16(self + 0x1eu) >= 0)
    {
        eax = t15;
        edx = t16;
        goto L_1013a6b1;
    }
    eax = t15;
    edx = t16;
    t17 = rd16(self + 0x20u);
    wr16(self + 0x1eu, 0x3cu);
    if ((int16_t)t17 >= 10)
    {
        eax = (eax & 0xffff0000u) | t17;
        goto L_1013a6b1;
    }
    eax = (eax & 0xffff0000u) | t17;
    t18 = rd8(self + 0x23u);
    wr16(self + 0x20u, (uint16_t)(eax * 0xau));
    t19 = cow_divs(g, (uint32_t)(int8_t)t18, (uint32_t)(int16_t)(eax * 0xau));
    t20 = cow_mods(g, (uint32_t)(int8_t)t18, (uint32_t)(int16_t)(eax * 0xau));
    wr8(self + 0x23u, (uint8_t)((uint8_t)t18 - (uint8_t)t20));
    if ((uint16_t)edi != 0u)
    {
        ecx = (uint32_t)(int16_t)(eax * 0xau);
        eax = (t19 & 0xffffff00u) | (uint8_t)((uint8_t)t18 - (uint8_t)t20);
        edx = t20;
    }
    else
    {
        ecx = (uint32_t)(int16_t)(eax * 0xau);
        eax = (t19 & 0xffffff00u) | (uint8_t)((uint8_t)t18 - (uint8_t)t20);
        edx = t20;
        t21 = rd8(self + 0x20u);
        wr8(self + 0x23u, (uint8_t)((uint8_t)eax + t21));
        edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)eax + t21);
    }
    if ((int8_t)rd8(self + 0x23u) < (int8_t)rd8(self + 0x22u))
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x22u);
        ecx = (ecx & 0xffffff00u) | rd8(self + 0x23u);
        goto L_1013a67f;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x22u);
    wr16(self + 0x1cu, (uint16_t)edi);
    wr8(self + 0x23u, (uint8_t)eax);
    g->ebx = in_ebx;
    g->edx = edx;
    return eax;
L_1013a67f: ;
    if ((int8_t)ecx >= 1) goto L_1013a6b1;
    wr16(self + 0x1cu, (uint16_t)edi);
    wr8(self + 0x23u, 1u);
    g->ebx = in_ebx;
    g->edx = edx;
    return eax;
L_1013a692: ;
    t22 = rd32(self + 8u);
    wr16(self + 0x20u, 1u);
    wr16(self + 0x1eu, 0x3cu);
    if (t22 != 0u)
    {
        ecx = t22;
        if (rd16(ecx + 0x4cu) != 1u)
        {
            g->ebx = 1u;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t23 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, ecx, g->edx, 0, 2, 1u, 0u);
            t24 = g->edx;
            eax = t23;
            edx = t24;
        }
    }
L_1013a6b1: ;
    wr16(self + 0x1cu, (uint16_t)edi);
    g->ebx = in_ebx;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1013a5b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1013a5b0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
