/* f_0x10133130 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10133130(Guest* g)
{
    uint32_t eax;
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

    g->ecx = self;
    g->edx = in_edx;
    t1 = cow_call_regs(g, COW_IMG(0x101cbe80u), in_eax, g->ecx, g->edx, 1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        goto L_10133147;
    }
    edx = t3;
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0x4eu);
    return;
L_10133147: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t4 = cow_call_regs(g, COW_IMG(0x101cbe70u), eax, g->ecx, g->edx, 1, 0);
    t5 = g->ecx;
    t6 = g->edx;
    if ((uint8_t)t4 == 0u)
    {
        ecx = t5;
        edx = t6;
        goto L_1013315e;
    }
    edx = t6;
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0x4du);
    return;
L_1013315e: ;
    g->edx = edx;
    g->esp = sp0;
    t7 = cow_cdecl(g, COW_IMG(0x100fd6e0u), 1, 0u);
    t8 = g->edx;
    if ((uint8_t)t7 != 0u)
    {
        edx = t8;
        goto L_1013317d;
    }
    edx = t8;
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0xa8u);
    return;
L_1013317d: ;
    if (rd32(COW_IMG(0x105781a8u)) != 0u)
    {
        eax = rd32(COW_IMG(0x105781a8u));
        if (rd16(eax + 0x1au) == 0u)
        {
            g->edx = edx;
            g->esp = sp0;
            cow_thiscall(g, COW_IMG(0x1021c7e0u), rd32(COW_IMG(0x10666e2cu)), 4, 0xffffu, 2u, 0x12u, 0u);
            t9 = g->edx;
            g->edx = t9;
            cow_thiscall(g, COW_IMG(0x1021c7e0u), rd32(COW_IMG(0x10666e4cu)), 4, 0xffffu, 2u, 0x12u, 0u);
            t10 = g->edx;
            g->edx = t10;
            cow_thiscall(g, COW_IMG(0x1021c7e0u), rd32(COW_IMG(0x10666e50u)), 4, 0xffffu, 2u, 0x12u, 0u);
            t11 = g->edx;
            g->edx = t11;
            cow_thiscall(g, COW_IMG(0x1021c7e0u), rd32(COW_IMG(0x10666e54u)), 4, 0xffffu, 2u, 0x12u, 0u);
            t12 = g->edx;
            g->edx = t12;
            cow_thiscall(g, COW_IMG(0x1021c7e0u), rd32(COW_IMG(0x10666e58u)), 4, 0xffffu, 2u, 0x12u, 0u);
            t13 = g->edx;
            g->edx = t13;
            cow_thiscall(g, COW_IMG(0x1021c7e0u), rd32(COW_IMG(0x10666e5cu)), 4, 0xffffu, 2u, 0x12u, 0u);
            t14 = g->edx;
            g->edx = t14;
            cow_thiscall(g, COW_IMG(0x1021c7e0u), rd32(COW_IMG(0x10666e60u)), 4, 0xffffu, 2u, 0x12u, 0u);
            t15 = g->edx;
            g->edx = t15;
            cow_thiscall(g, COW_IMG(0x1021c7e0u), rd32(COW_IMG(0x10666e64u)), 4, 0xffffu, 2u, 0x12u, 0u);
            t16 = g->edx;
            g->edx = t16;
            cow_thiscall(g, COW_IMG(0x1021c7e0u), rd32(COW_IMG(0x10666e68u)), 4, 0xffffu, 2u, 0x12u, 0u);
            t17 = g->edx;
            wr8(rd32(COW_IMG(0x105783e4u)) + 0x1cu, 2u);
            g->edx = t17;
            cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1036f818u), 1u, 0u);
            t18 = g->edx;
            t19 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1036f718u), 1u, 0u);
            g->edx = rd32(rd32(COW_IMG(0x105781b0u)));
            t20 = rd32(rd32(COW_IMG(0x105781b0u)));
            cow_thiscall(g, rd32(t20 + 0x58u), rd32(COW_IMG(0x105781b0u)), 1, 0u);
            t21 = g->edx;
            g->edx = t21;
            cow_thiscall(g, COW_IMG(0x101f23a0u), rd32(COW_IMG(0x10663740u)), 1, rd32(COW_IMG(0x105781b0u)));
            t22 = g->edx;
            g->edx = t22;
            cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1036f82cu), 1u, 0u);
            t23 = g->ecx;
            t24 = g->edx;
            cow_cdecl(g, COW_IMG(0x10097fd0u), 2, 0u, 1u);
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10133130(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10133130(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
