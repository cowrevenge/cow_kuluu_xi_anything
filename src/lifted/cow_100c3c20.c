/* f_0x100c3c20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_100c3c20(Guest* g)
{
    uint32_t t1;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 84u);

    wr32(sp0 - 0x44u, in_esi);
    wr32(sp0 - 0x48u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x48u;
    cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
    t1 = g->edx;
    wr32(sp0 - 0x4cu, arg2);
    g->edx = t1;
    cow_thiscall(g, COW_IMG(0x100279f0u), sp0 - 0x40u, 1, arg2);
    t2 = g->edx;
    t3 = arg1 * 0x40u + rd32(self + 0x5c8u);
    wr32(sp0 - 0x4cu, t3);
    g->eax = rd32(self + 0x5c8u);
    t4 = rd32(self + 0x5c8u);
    t5 = cow_thiscall(g, COW_IMG(0x10027d10u), sp0 - 0x40u, 1, t3);
    wr32(sp0 - 0x4cu, sp0 - 0x40u);
    wr32(sp0 - 0x50u, arg1);
    g->edx = sp0 - 0x40u;
    t6 = cow_thiscall(g, COW_IMG(0x100c3c80u), self, 2, arg1, sp0 - 0x40u);
    t7 = g->edx;
    g->edx = t7;
    t8 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t9 = g->edx;
    g->edx = t9;
    return t8;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100c3c20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100c3c20(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
