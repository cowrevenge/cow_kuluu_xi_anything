/* f_0x10150090 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10150090(Guest* g)
{
    double d12;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
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

    if (rd8(self + 0x65u) != 0u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_1015019a;
    }
    if (rd32(COW_IMG(0x1057876cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1057876cu));
        g->edx = in_edx;
        g->esp = sp0 - 0xcu;
        t1 = cow_call_regs(g, COW_IMG(0x101598a0u), in_eax, ecx, g->edx, 1, 0);
        t2 = g->edx;
        eax = t1;
        ecx = rd32(COW_IMG(0x1057876cu));
        edx = t2;
        edi = t1;
    }
    else
    {
        ecx = rd32(COW_IMG(0x1057876cu));
        eax = in_eax;
        edx = in_edx;
        edi = 0u;
    }
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t3 = cow_call_regs(g, COW_IMG(0x101598a0u), eax, ecx + 0x28u, g->edx, 1, 0);
    t4 = g->ecx;
    t5 = g->edx;
    if (edi != 0u)
    {
        eax = t3;
        ecx = t4;
        edx = t5;
        goto L_101500eb;
    }
    edx = t5;
    t6 = rd32(self + 8u);
    wr16(self + 0xbeu, 0u);
    wr16(self + 0xbcu, 0u);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t7 = cow_call_regs(g, COW_IMG(0x1015e790u), t6, COW_IMG(0x10621838u), g->edx, 0, 2, t6, 1u);
    t8 = g->edx;
    g->edx = t8;
    return t7;
L_101500eb: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t9 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t10 = g->ecx;
    t11 = g->edx;
    d12 = cow_take_float(g);
    g->ecx = t10;
    g->edx = t11;
    fpush(g, d12);
    t13 = cow_call_regs(g, COW_IMG(0x10311c6cu), t9, g->ecx, g->edx, 1, 0);
    t14 = g->ecx;
    t15 = g->edx;
    t16 = rd8(self + 0xbbu);
    wr8(self + 0xbbu, (uint8_t)(t16 - (uint8_t)t13));
    if ((int8_t)(t16 - (uint8_t)t13) >= 0)
    {
        eax = t13;
    }
    else
    {
        eax = t13;
        ecx = (t14 & 0xffffff00u) | (uint8_t)(t16 - (uint8_t)t13);
        edx = t15;
        t17 = rd8(self + 0xb9u);
        t18 = rd8(self + 0xbau);
        wr8(self + 0xbbu, 3u);
        wr8(self + 0xbau, (uint8_t)(t18 + 1u));
        if ((uint8_t)(t18 + 1u) < (uint8_t)t17)
        {
            eax = (eax & 0xffffff00u) | (uint8_t)(t18 + 1u);
        }
        else
        {
            eax = (eax & 0xffffff00u) | (uint8_t)(t18 + 1u);
            wr8(self + 0xbau, 0u);
        }
    }
    if (rd32(rd32(COW_IMG(0x1057876cu)) + 0xc4u) == 0u)
    {
        ecx = rd32(COW_IMG(0x1057876cu));
        goto L_10150181;
    }
    ecx = rd32(COW_IMG(0x1057876cu));
    g->ebx = 0u;
    g->edx = self + 0xc0u;
    g->esp = sp0 - 0xcu;
    t19 = cow_call_regs(g, COW_IMG(0x10159880u), eax, ecx, g->edx, 0, 3, self + 0xc0u, self + 0xc2u, 0u);
    t20 = g->edx;
    wr16(self + 0xc2u, (uint16_t)(rd16(self + 0xc2u) + 0xfff6u));
    wr8(self + 0xb8u, 1u);
    g->ebx = 0u;
    g->edx = t20;
    t21 = cow_call_regs(g, COW_IMG(0x10159880u), t19, rd32(COW_IMG(0x1057876cu)), g->edx, 0, 3, self + 0xbcu, self + 0xbeu, 1u);
    t22 = g->edx;
    if ((uint8_t)t21 != 0u)
    {
        eax = t21;
        edx = t22;
        goto L_1015019a;
    }
    eax = t21;
    edx = t22;
    wr16(self + 0xbcu, 0u);
    g->ebx = in_ebx;
    g->edx = edx;
    return eax;
L_10150181: ;
    g->ebx = 0u;
    g->edx = self + 0xbcu;
    g->esp = sp0 - 0xcu;
    t23 = cow_call_regs(g, COW_IMG(0x10159880u), self + 0xbeu, ecx, g->edx, 0, 3, self + 0xbcu, self + 0xbeu, 0u);
    t24 = g->edx;
    wr8(self + 0xb8u, 0u);
    eax = t23;
    edx = t24;
L_1015019a: ;
    g->ebx = in_ebx;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10150090(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10150090(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
