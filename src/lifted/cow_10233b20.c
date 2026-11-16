/* f_0x10233b20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10233b20(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 48u);

    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    wr32(sp0 - 0x20u, arg2);
    g->eax = arg2;
    g->esp = sp0 - 0x1cu;
    t1 = cow_thiscall(g, COW_IMG(0x10231e90u), self, 1, arg2);
    if ((int32_t)t1 >= 0)
    {
        eax = t1;
        edi = t1;
        wr32(sp0 - 0x20u, arg3);
        wr32(sp0 - 0x24u, arg1);
        g->edx = arg1;
        g->esp = sp0 - 0x1cu;
        cow_thiscall(g, COW_IMG(0x10233250u), sp0 - 0x14u, 2, arg1, arg3);
        t2 = g->ecx;
        t3 = g->edx;
        wr32(sp0 - 0x20u, edi);
        t4 = rd32(self + 0x6cu);
        wr32(sp0 - 0x24u, t4);
        g->eax = t4;
        g->edx = t3;
        g->esp = sp0 - 0x18u;
        t5 = cow_cdecl(g, COW_IMG(0x1022f330u), 3, t4, edi, in_edi);
        t6 = g->edx;
        wr32(sp0 - 0x20u, t5);
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x28u, 0u);
        wr32(sp0 - 0x2cu, 0u);
        g->edx = t6;
        g->esp = sp0 - 0x1cu;
        t7 = cow_thiscall(g, COW_IMG(0x10233280u), sp0 - 0x14u, 4, 0u, 0u, 0u, t5);
        t8 = g->edx;
        cow_thiscall(g, COW_IMG(0x10233240u), sp0 - 0x14u, 0);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10233b20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10233b20(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
