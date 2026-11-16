/* f_0x1025be40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1025be40(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 24u);

    wr32(sp0 - 0x14u, 7u);
    wr32(sp0 - 0xcu, 0xau);
    wr32(sp0 - 8u, 0xau);
    wr32(sp0 - 0x10u, 0xdu);
    wr32(sp0 - 4u, 0u);
    eax = 7u;
    ecx = sp0 - 0x14u;
    edx = (uint32_t)(int8_t)rd8(arg1);
L_1025be78: ;
    if (edx == eax) goto L_1025be8a;
    if (rd32(ecx + 4u) != 0u)
    {
        eax = rd32(ecx + 4u);
        ecx = ecx + 4u;
        goto L_1025be78;
    }
    eax = rd32(ecx + 4u);
    g->edx = edx;
    return eax;
L_1025be8a: ;
    g->edx = edx;
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025be40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1025be40(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
