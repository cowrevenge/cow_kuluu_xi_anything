/* f_0x100b1de0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b1de0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 48u);

    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, sp0 - 0xau);
    wr32(sp0 - 0x18u, sp0 - 4u);
    wr32(sp0 - 0x1cu, 1u);
    wr16(rd32(self + 0x260u) + 0x164u, 0u);
    g->edx = sp0 - 4u;
    t1 = rd32(self + 0x260u);
    g->esp = sp0 - 0x18u;
    t2 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 1u);
    t3 = g->edx;
    wr32(sp0 - 0x1cu, t2);
    g->esp = sp0 - 0x10u;
    t4 = cow_fastcall(g, COW_IMG(0x100afb00u), self, t3, 3, t2, sp0 - 4u, sp0 - 0xau);
    t5 = g->edx;
    if ((uint8_t)t4 == 1u)
    {
        eax = t4;
        edx = t5;
        wr8(COW_IMG(0x10488208u), (uint8_t)eax);
        t6 = rd16(sp0 - 0xau);
        wr16(COW_IMG(0x10482f40u), (uint16_t)t6);
        wr16(COW_IMG(0x104855aau), (uint16_t)t6);
        wr32(sp0 - 0x14u, 0u);
        wr32(sp0 - 0x18u, 0u);
        wr32(sp0 - 0x1cu, 0u);
        wr32(sp0 - 0x20u, sp0 - 8u);
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x28u, 5u);
        g->eax = sp0 - 8u;
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        t7 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 5u);
        t8 = g->ecx;
        t9 = g->edx;
        wr32(sp0 - 0x28u, t7);
        wr32(sp0 - 0x2cu, 1u);
        g->ecx = t8;
        t10 = cow_call_regs(g, COW_IMG(0x100964a0u), g->eax, g->ecx, t9, 1, 2, 1u, t7);
        t11 = g->ecx;
        t12 = g->edx;
        wr32(sp0 - 0x28u, t10);
        wr32(sp0 - 0x2cu, COW_IMG(0x103d3c84u));
        g->esp = sp0 - 0x10u;
        cow_call_regs(g, COW_IMG(0x100ad660u), t10, t11, t12, 1, 7, COW_IMG(0x103d3c84u), t10, 0u, sp0 - 8u, 0u, 0u, 0u);
    }
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 7u));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b1de0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100b1de0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
