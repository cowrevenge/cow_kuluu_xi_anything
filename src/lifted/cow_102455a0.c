/* f_0x102455a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102455a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 16u);

    wr8(sp0 - 0xau, 2u);
    wr8(sp0 - 9u, 2u);
    wr8(sp0 - 0xcu, 0u);
    wr8(sp0 - 8u, 3u);
    wr8(sp0 - 7u, 3u);
    wr8(sp0 - 0xbu, 1u);
    wr8(sp0 - 6u, 4u);
    wr8(sp0 - 5u, 4u);
    wr8(sp0 - 4u, 0xbu);
    wr8(sp0 - 3u, 5u);
    wr8(sp0 - 2u, 0u);
    wr8(sp0 - 1u, 6u);
    if ((rd32(rd32(COW_IMG(0x10456a28u)) + 0x10u) & 1u << (rd8(arg1 * 2u + sp0 - 0xcu) & 0x1fu)) == 0u) goto L_10245602;
    return (uint32_t)(int8_t)rd8(arg1 * 2u + sp0 - 0xbu);
L_10245602: ;
    return 0xffffffffu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102455a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102455a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
