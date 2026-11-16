/* f_0x101a74f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_101a74f0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t edx;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 != 0u)
    {
        eax = 0u;
        edx = (in_edx & 0xffffff00u) | rd8(sp0 + 8u);
        ebx = in_ebx;
L_101a74ff: ;
        t1 = rd8(arg1 + eax * 4u);
        wr8(sp0 + 8u, (uint8_t)t1);
        wr8(arg1 + eax * 4u, edx & 3u);
        wr8(arg1 + eax * 4u + 1u, 0u);
        wr16(arg1 + eax * 4u + 2u, 0u);
        if ((int32_t)(eax + 1u) < 16)
        {
            eax = eax + 1u;
            ebx = 0u;
            goto L_101a74ff;
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a74f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101a74f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
