/* f_0x100bda90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100bda90(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 16u);

    wr8(COW_IMG(0x1048a2e4u), 0u);
    wr32(sp0 - 4u, arg1);
    g->edx = in_edx;
    g->esp = sp0;
    t1 = cow_cdecl(g, COW_IMG(0x10087cb0u), 1, arg1);
    t2 = g->edx;
    if (t1 == 0u) goto L_100bdaca;
    eax = t1;
    edx = t2;
    wr32(sp0 - 4u, sp0 + 4u);
    wr32(sp0 - 8u, COW_IMG(0x1048a2e4u));
    wr32(sp0 - 0xcu, eax + 4u);
    g->esp = sp0;
    t3 = cow_call_regs(g, COW_IMG(0x101cbac0u), eax + 4u, sp0 + 4u, g->edx, 1, 3, eax + 4u, COW_IMG(0x1048a2e4u), sp0 + 4u);
    if ((uint8_t)t3 == 0u) goto L_100bdaca;
    return COW_IMG(0x1048a2e4u);
L_100bdaca: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100bda90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100bda90(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
