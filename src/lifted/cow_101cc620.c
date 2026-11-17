/* f_0x101cc620 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101cc620(Guest* g)
{
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, in_edi);
    wr32(sp0 - 0x10u, arg1);
    wr32(sp0 - 0x14u, sp0 - 4u);
    g->eax = arg1;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, COW_IMG(0x100731b0u), rd32(COW_IMG(0x1047d128u)), 2, sp0 - 4u, arg1);
    t2 = g->edx;
    t3 = rd32(t1);
    wr32(arg2, t3);
    cow_call_regs(g, COW_IMG(0x10071e90u), t3, rd32(t3), g->edx, 1, 0);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, 0x31u);
    wr32(sp0 - 0x18u, sp0 + 4u);
    g->edx = sp0 + 4u;
    cow_thiscall(g, COW_IMG(0x10072290u), rd32(rd32(arg2)), 3, sp0 + 4u, 0x31u, 0u);
    t4 = g->edx;
    if (arg1 == 0u) goto L_101cc676;
    edx = t4;
    t5 = rd32(arg1) + 0x30u;
    wr32(sp0 - 0x10u, t5);
    g->eax = t5;
    g->esp = sp0 - 0xcu;
    t6 = cow_thiscall(g, COW_IMG(0x10120450u), COW_IMG(0x104e1bf8u), 1, t5);
    return t6;
L_101cc676: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101cc620(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101cc620(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
