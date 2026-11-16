/* f_0x10238000 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10238000(Guest* g)
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
    uint32_t t2;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_esi);
    t1 = rd32(self + 8u);
    wr8(t1 + 0x5du, 0u);
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x101c68a0u), t1, rd32(COW_IMG(0x10662da0u)), in_edx, 1, 0);
    t2 = g->edx;
    t3 = rd32(self + 0x30u);
    wr32(sp0 - 0x14u, t3);
    cow_thiscall(g, COW_IMG(0x101c6870u), rd32(COW_IMG(0x10662da0u)), 1, t3);
    t4 = rd32(self + 8u);
    wr8(t4 + 0x85u, 0u);
    t5 = rd32(self + 8u);
    wr8(t5 + 0x86u, 0u);
    wr8(rd32(self + 8u) + 0x84u, 0u);
    g->eax = t5;
    g->edx = t4;
    t6 = cow_thiscall(g, COW_IMG(0x1011a400u), rd32(self + 8u), 0);
    t7 = g->edx;
    wr32(sp0 - 0x14u, 2u);
    wr32(sp0 - 0x18u, 0x10u);
    g->edx = t7;
    t8 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 0x10u, 2u);
    t9 = g->edx;
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 2u);
    cow_thiscall(g, COW_IMG(0x101192b0u), rd32(self + 8u), 2, 2u, 0u);
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, sp0 - 8u);
    wr32(sp0 - 8u, rd32(COW_IMG(0x103879d8u)));
    wr32(sp0 - 4u, rd32(COW_IMG(0x103879dcu)));
    t10 = rd32(COW_IMG(0x103879d8u));
    t11 = rd32(COW_IMG(0x103879dcu));
    cow_thiscall(g, COW_IMG(0x101602f0u), COW_IMG(0x10621838u), 3, sp0 - 8u, 0u, 1u);
    t12 = rd32(sp0 - 4u);
    wr32(sp0 - 0x14u, t12);
    t13 = rd32(sp0 - 8u);
    wr32(sp0 - 0x18u, t13);
    g->edx = t12;
    t14 = rd32(self + 8u);
    t15 = cow_call_regs(g, COW_IMG(0x10119110u), t13, t14, g->edx, 0, 2, t13, t12);
    t16 = g->ecx;
    t17 = g->edx;
    g->esp = sp0;
    g->edx = t17;
    return cow_tailcall(g, COW_IMG(0x101ba220u), t15, t16, t17);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10238000(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10238000(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
