/* f_0x10027870 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10027870(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 80u);

    wr32(sp0 - 0x44u, in_esi);
    g->edx = in_edx;
    g->esp = sp0 - 0x44u;
    cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
    t1 = g->edx;
    wr32(sp0 - 0x48u, sp0 - 0x40u);
    wr32(sp0 - 0x4cu, 3u);
    g->eax = sp0 - 0x40u;
    g->edx = t1;
    t2 = cow_thiscall(g, COW_IMG(0x1000bdb0u), rd32(COW_IMG(0x1045666cu)), 2, 3u, sp0 - 0x40u);
    t3 = g->edx;
    wr32(sp0 - 0x48u, arg2);
    wr32(sp0 - 0x4cu, arg1);
    g->edx = t3;
    t4 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, arg1, arg2);
    t5 = g->edx;
    wr32(sp0 - 0x48u, arg1);
    g->edx = t5;
    t6 = cow_thiscall(g, COW_IMG(0x10028320u), sp0 - 0x40u, 1, arg1);
    t7 = g->edx;
    cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10027870(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10027870(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
