/* f_0x10283410 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10283410(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    eax = 0u;
    ecx = arg1 * 0x20u + rd32(COW_IMG(0x1099d200u)) + 0x854u;
    edx = 4u;
L_1028342b: ;
    if (rd32(ecx) != 0u)
    {
        eax = eax + 1u;
    }
    if (edx != 1u)
    {
        ecx = ecx + 4u;
        edx = edx - 1u;
        goto L_1028342b;
    }
    edx = edx - 1u;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10283410(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10283410(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
