/* f_0x101e3b10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101e3b10(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    const uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg1 == 0u)
    {
        eax = in_eax;
        goto L_101e3b33;
    }
    if (arg2 == 0u)
    {
        eax = arg2;
        goto L_101e3b33;
    }
    t1 = rd8(arg2 + 2u);
    g->edx = t1;
    return (t1 * 3u & 0xffffff00u) | rd32(arg1 + t1 * 0x18u + 0x70u) == 6u;
L_101e3b33: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e3b10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e3b10(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
