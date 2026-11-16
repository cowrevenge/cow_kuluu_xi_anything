/* f_0x101a7da0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101a7da0(Guest* g)
{
    uint32_t eax;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 16u);

    wr8(sp0 - 0xcu, 0u);
    wr8(sp0 - 0xbu, 1u);
    wr8(sp0 - 0xau, 4u);
    wr8(sp0 - 9u, 5u);
    wr8(sp0 - 8u, 6u);
    wr8(sp0 - 7u, 7u);
    wr8(sp0 - 6u, 8u);
    wr8(sp0 - 5u, 2u);
    wr8(sp0 - 4u, 3u);
    eax = 0u;
L_101a7dd5: ;
    if ((uint8_t)arg1 == rd8(eax + sp0 - 0xcu)) goto L_101a7de7;
    if (eax + 1u < 9u)
    {
        eax = eax + 1u;
        goto L_101a7dd5;
    }
    eax = eax + 1u;
    return eax & 0xffffff00u;
L_101a7de7: ;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a7da0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a7da0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
