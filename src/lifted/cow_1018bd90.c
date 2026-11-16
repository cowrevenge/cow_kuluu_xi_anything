/* f_0x1018bd90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1018bd90(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    cow_frame(g, sp0, 12u);

    wr32(sp0 - 4u, self);
    if (rd8(rd32(COW_IMG(0x104568fcu)) + 9u) == 0u)
    {
        eax = rd32(COW_IMG(0x104568fcu));
        goto L_1018bdb6;
    }
    eax = rd32(COW_IMG(0x104568fcu));
    ecx = (self & 0xffffff00u) | rd8(rd32(COW_IMG(0x104568fcu)) + 9u);
    if (rd8(COW_IMG(0x1065cb20u)) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1065cb20u));
        goto L_1018bdb6;
    }
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_stdcall(g, COW_IMG(0x101039e0u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 8u, t1);
    t4 = cow_cdecl(g, COW_IMG(0x10103ae0u), 1, t1);
    return t4;
L_1018bdb6: ;
    wr32(sp0 - 8u, sp0 - 4u);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t5 = cow_thiscall_cdecl(g, COW_IMG(0x1018c180u), sp0 - 4u, 1, sp0 - 4u);
    t6 = g->edx;
    t7 = cow_thiscall(g, COW_IMG(0x1018bd30u), t5, 0);
    if ((int32_t)(t7 & 0x80000007u) >= 0)
    {
        eax = t7 & 0x80000007u;
    }
    else
    {
        eax = t7 & 0x80000007u;
        eax = (eax - 1u | 0xfffffff8u) + 1u;
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018bd90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1018bd90(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
