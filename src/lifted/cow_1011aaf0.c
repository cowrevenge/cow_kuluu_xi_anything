/* f_0x1011aaf0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_1011aaf0(Guest* g)
{
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_4;
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
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 24u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x10126510u), self + 0x14u, 0);
    t2 = g->edx;
    wr32(sp0 - 4u, t1);
    if (t1 == 0u)
    {
        loc_4 = t1;
        goto L_1011ab40;
    }
    edx = t2;
    loc_4 = t1;
L_1011ab04: ;
    wr32(sp0 - 0xcu, sp0 - 4u);
    g->esp = sp0 - 8u;
    t3 = cow_call_regs(g, COW_IMG(0x10126550u), g->eax, g->ecx, edx, 0, 1, sp0 - 4u);
    t4 = g->edx;
    if ((uint32_t)(int16_t)rd16(t3) == 2u)
    {
        ecx = t3;
        goto L_1011ab27;
    }
    edx = t4;
    if (rd32(sp0 - 4u) != 0u) goto L_1011ab04;
    g->esi = rd32(sp0 - 8u);
    return;
L_1011ab27: ;
    wr32(sp0 - 0xcu, arg3);
    wr32(sp0 - 0x10u, arg2);
    wr32(sp0 - 0x14u, arg1);
    g->edx = arg1;
    g->esp = sp0 - 8u;
    t5 = cow_call_regs(g, COW_IMG(0x10119f00u), arg2, ecx, g->edx, 0, 3, arg1, arg2, arg3);
    t6 = g->ecx;
    t7 = g->edx;
    cow_call_regs(g, COW_IMG(0x10119f20u), t5, t6, g->edx, 1, 0);
L_1011ab40: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1011aaf0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1011aaf0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
