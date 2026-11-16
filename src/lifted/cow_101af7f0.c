/* f_0x101af7f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_101af7f0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    t1 = rd32(self + 8u);
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    wr16(sp0 - 4u, 0u);
    wr16(sp0 - 2u, 0u);
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, 1u);
    wr32(sp0 - 0x20u, arg1);
    wr32(sp0 - 0x24u, sp0 - 8u);
    g->ebx = arg1;
    g->edi = (in_edi & 0xffff0000u) | rd16(t1 + 0x4cu);
    g->edx = in_edx;
    t2 = rd16(t1 + 0x4cu);
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x10118900u), t1, 4, sp0 - 8u, arg1, 1u, 1u);
    t3 = g->edx;
    wr32(sp0 - 0x18u, 0x80808080u);
    t4 = (t3 & 0xffffff00u) | (uint32_t)(int16_t)t2 == arg1;
    wr32(sp0 - 0x1cu, t4);
    t5 = rd32(arg2 * 4u + rd32(rd32(self + 0x18u)));
    wr32(sp0 - 0x20u, t5);
    t6 = rd32(sp0 - 6u) + 1u;
    wr32(sp0 - 0x24u, t6);
    t7 = rd32(sp0 - 8u) + 1u;
    wr32(sp0 - 0x28u, t7);
    cow_call_regs(g, COW_IMG(0x101af6f0u), t5, g->ecx, g->edx, 0, 5, t7, t6, t5, t4, 0x80808080u);
    g->ebx = in_ebx;
    g->edi = in_edi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101af7f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101af7f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
