/* f_0x1023c1a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1023c1a0(Guest* g)
{
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 64u);

    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, 0x8fu);
    wr32(sp0 - 0x14u, 8u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 0x8fu);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x18u, 0x90u);
    wr32(sp0 - 0x1cu, 8u);
    g->ecx = t2;
    g->edx = t3;
    g->esp = sp0 - 0x14u;
    t4 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 0x90u);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0x20u, 0x93u);
    wr32(sp0 - 0x24u, 8u);
    g->ecx = t5;
    g->edx = t6;
    g->esp = sp0 - 0x1cu;
    t7 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 0x93u);
    t8 = g->ecx;
    t9 = g->edx;
    wr32(sp0 - 0x28u, 0x94u);
    wr32(sp0 - 0x2cu, 8u);
    g->ecx = t8;
    g->edx = t9;
    g->esp = sp0 - 0x24u;
    t10 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 0x94u);
    t11 = g->ecx;
    t12 = g->edx;
    wr32(sp0 - 0x30u, 0x95u);
    wr32(sp0 - 0x34u, 8u);
    g->ecx = t11;
    g->edx = t12;
    g->esp = sp0 - 0x2cu;
    t13 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 0x95u);
    t14 = g->ecx;
    t15 = g->edx;
    wr32(sp0 - 0x38u, 5u);
    wr32(sp0 - 0x3cu, 0x1bu);
    g->edx = t15;
    g->esp = sp0 - 0x34u;
    cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0x1bu, 5u);
    t16 = g->edx;
    wr32(sp0 - 0x10u, sp0 - 8u);
    g->edx = t16;
    g->esp = sp0 - 0xcu;
    t17 = cow_call_regs(g, COW_IMG(0x1011a730u), sp0 - 8u, rd32(self + 8u), g->edx, 0, 1, sp0 - 8u);
    t18 = g->edx;
    wr32(sp0 - 0x10u, sp0 - 8u);
    cow_cdecl(g, COW_IMG(0x1023bf50u), 1, sp0 - 8u);
    wr32(sp0 - 0x10u, sp0 - 8u);
    g->edx = sp0 - 8u;
    g->esp = sp0 - 0x10u;
    t19 = cow_thiscall(g, COW_IMG(0x1018d470u), self + 0x24cu, 0);
    t20 = g->ecx;
    t21 = g->edx;
    wr32(sp0 - 0x14u, t19);
    g->edx = t21;
    g->esp = sp0 - 0xcu;
    t22 = cow_cdecl(g, COW_IMG(0x1023c000u), 2, t19, sp0 - 8u);
    t23 = g->edx;
    g->edx = t23;
    return t22;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1023c1a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1023c1a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
