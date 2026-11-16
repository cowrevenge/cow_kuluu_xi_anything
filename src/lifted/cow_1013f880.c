/* f_0x1013f880 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1013f880(Guest* g)
{
    uint32_t eax;
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
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    t1 = cow_thiscall(g, COW_IMG(0x10159440u), rd32(COW_IMG(0x1057876cu)), 2, COW_IMG(0x1013f9e0u), 0x20u);
    t2 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        eax = t1;
        edx = t2;
        goto L_1013f8a4;
    }
    edx = t2;
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x10129d90u), rd32(COW_IMG(0x10578158u)), 1, 4u);
    return;
L_1013f8a4: ;
    g->eax = eax;
    g->edx = edx;
    t3 = rd32(COW_IMG(0x1057876cu));
    g->esp = sp0;
    t4 = cow_thiscall(g, COW_IMG(0x101594e0u), t3, 1, COW_IMG(0x1013f970u));
    t5 = g->ecx;
    t6 = g->edx;
    g->ecx = t5;
    g->edx = t6;
    t7 = cow_call_regs(g, COW_IMG(0x1013f630u), t4, g->ecx, g->edx, 1, 1, 1u);
    t8 = g->ecx;
    t9 = g->edx;
    g->edx = t9;
    g->esp = sp0 - 4u;
    t10 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xdu, 0xbu);
    t11 = g->edx;
    g->edx = t11;
    t12 = rd32(COW_IMG(0x1057847cu));
    g->esp = sp0;
    t13 = cow_thiscall(g, COW_IMG(0x10150cc0u), t12, 2, t10, 2u);
    t14 = g->ecx;
    t15 = g->edx;
    g->edx = t15;
    g->esp = sp0 - 4u;
    t16 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x2eu);
    t17 = g->edx;
    g->edx = t17;
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x1013a320u), rd32(COW_IMG(0x105781f8u)), 2, t16, 2u);
    t18 = g->edx;
    t19 = rd32(rd32(COW_IMG(0x1057822cu)) + 8u);
    cow_thiscall(g, COW_IMG(0x1015e6e0u), COW_IMG(0x10621838u), 5, t19, 1u, 1u, 0u, 0u);
    t20 = rd32(rd32(COW_IMG(0x10578230u)) + 8u);
    g->eax = t20;
    t21 = cow_thiscall(g, COW_IMG(0x1015e6e0u), COW_IMG(0x10621838u), 5, t20, 1u, 1u, 0u, 0u);
    t22 = rd32(rd32(COW_IMG(0x1057823cu)) + 8u);
    g->edx = t22;
    cow_thiscall(g, COW_IMG(0x1015e6e0u), COW_IMG(0x10621838u), 5, t22, 1u, 1u, 0u, 0u);
    t23 = g->edx;
    t24 = rd32(rd32(COW_IMG(0x10578170u)) + 8u);
    cow_thiscall(g, COW_IMG(0x1015e6e0u), COW_IMG(0x10621838u), 5, t24, 1u, 1u, 0u, 0u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1013f880(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1013f880(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
