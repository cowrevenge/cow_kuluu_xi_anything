/* f_0x10284810 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10284810(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;

    t1 = rd32(COW_IMG(0x1099d200u)) + 0x188u;
    g->eax = t1;
    g->edx = in_edx;
    t2 = cow_cdecl(g, COW_IMG(0x1027eb10u), 1, t1);
    t3 = g->edx;
    t4 = rd32(COW_IMG(0x1099d200u)) + 0x1c8u;
    g->ecx = t4;
    g->esp = sp0 - 4u;
    t5 = cow_cdecl(g, COW_IMG(0x1027eb10u), 1, t4);
    t6 = g->ecx;
    t7 = rd32(COW_IMG(0x1099d200u)) + 0x2ecu;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x1027eb10u), 1, t7);
    wr32(rd32(COW_IMG(0x1099d200u)) + 0x328u, 0u);
    wr32(rd32(COW_IMG(0x1099d200u)) + 0x318u, 0xbf800000u);
    wr32(rd32(COW_IMG(0x1099d200u)) + 0x74cu, 0x3f800000u);
    wr32(rd32(COW_IMG(0x1099d200u)) + 0x750u, 0x3f800000u);
    wr32(rd32(COW_IMG(0x1099d200u)) + 0x2b0u, 0x44200000u);
    wr32(rd32(COW_IMG(0x1099d200u)) + 0x2b4u, 0x43f00000u);
    t8 = rd32(COW_IMG(0x1099d200u));
    wr32(t8 + 0x2dcu, 0x3f800000u);
    g->edx = t8;
    return 0x3f800000u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10284810(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10284810(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
