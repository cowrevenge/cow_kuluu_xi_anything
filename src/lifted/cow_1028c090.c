/* f_0x1028c090 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1028c090(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 16u);

    wr32(sp0 - 4u, self);
    g->edx = in_edx;
    g->esp = sp0;
    t1 = cow_cdecl(g, COW_IMG(0x10277980u), 1, self);
    t2 = g->edx;
    wr32(sp0 - 4u, t1);
    wr32(sp0 - 8u, arg1);
    wr32(sp0 - 0xcu, t1);
    g->ecx = arg1;
    g->esp = sp0 - 4u;
    t3 = cow_cdecl(g, COW_IMG(0x102a1d80u), 2, t1, arg1);
    t4 = g->ecx;
    if ((uint8_t)t3 != 0u) goto L_1028c0bd;
    eax = t3;
    ecx = t4;
    wr32(sp0 - 8u, sp0 - 4u);
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x10285760u), 1, sp0 - 4u);
    return 0u;
L_1028c0bd: ;
    t5 = rd32(rd32(sp0 - 4u) + 0xa8u) | 1u;
    wr32(rd32(sp0 - 4u) + 0xa8u, t5);
    return rd32(sp0 - 4u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1028c090(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1028c090(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
