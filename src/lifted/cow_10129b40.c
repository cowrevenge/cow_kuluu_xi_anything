/* f_0x10129b40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_10129b40(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd8(rd32(COW_IMG(0x10621940u)) + 0x4du) != 0u)
    {
        edx = (in_edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10621940u)) + 0x4du);
        goto L_10129b51;
    }
    eax = rd32(COW_IMG(0x10621940u));
    edx = (in_edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10621940u)) + 0x4du);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_10129b51: ;
    if ((int8_t)(arg1 >> 8u) >= 0) goto L_10129b5e;
    g->edx = edx;
    return (arg1 & 0xffffff00u) | 1u;
L_10129b5e: ;
    g->esp = sp0;
    t1 = cow_call_regs(g, COW_IMG(0x10129bb0u), g->eax, g->ecx, edx, 0, 4, (uint8_t)arg1, 1u, 0xb9u, 0xbau);
    t2 = g->edx;
    g->edx = t2;
    return (t1 & 0xffffff00u) | (uint8_t)t1 != 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10129b40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10129b40(g);
    g->esp = sp0;
    rt_return(g, r, 64u);
}
/* COW_ADAPTER END */
