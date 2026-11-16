/* f_0x100d4a20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=2 */
uint32_t cow_fn_100d4a20(Guest* g)
{
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
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 88u);

    wr32(sp0 - 0x44u, in_ebx);
    wr32(sp0 - 0x48u, in_esi);
    wr32(sp0 - 0x4cu, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x4cu;
    cow_thiscall(g, COW_IMG(0x100279b0u), arg2, 0);
    t1 = g->edx;
    wr32(sp0 - 0x50u, arg2);
    wr32(sp0 - 0x54u, arg1);
    g->eax = arg1;
    g->edx = t1;
    t2 = cow_thiscall(g, COW_IMG(0x100d4a90u), self, 2, arg1, arg2);
    t3 = g->edx;
    g->edx = t3;
    t4 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
    t5 = g->edx;
    g->edx = t5;
    t6 = cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0x40u, 0);
    t7 = g->edx;
    wr32(sp0 - 0x50u, 0x3fc90fdbu);
    g->edx = t7;
    t8 = cow_thiscall(g, COW_IMG(0x10027bd0u), sp0 - 0x40u, 1, 0x3fc90fdbu);
    t9 = g->edx;
    wr32(sp0 - 0x50u, sp0 - 0x40u);
    g->edx = t9;
    t10 = cow_thiscall(g, COW_IMG(0x10027e90u), arg2, 1, sp0 - 0x40u);
    t11 = g->edx;
    t12 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    return (t12 & 0xffffff00u) | (uint8_t)t2;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100d4a20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100d4a20(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
