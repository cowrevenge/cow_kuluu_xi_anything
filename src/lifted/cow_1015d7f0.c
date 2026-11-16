/* f_0x1015d7f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1015d7f0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    eax = in_eax;
    ecx = 0u;
    edx = in_edx;
L_1015d7f7: ;
    t1 = rd8(arg1 + ecx);
    wr8(arg1 + ecx, (uint8_t)(t1 >> 5u | t1 << 3u));
    if ((int32_t)(ecx + 1u) < 5120)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)(t1 << 3u);
        ecx = ecx + 1u;
        edx = (edx & 0xffffff00u) | (uint8_t)(t1 >> 5u | t1 << 3u);
        goto L_1015d7f7;
    }
    edx = (edx & 0xffffff00u) | (uint8_t)(t1 >> 5u | t1 << 3u);
    g->edx = edx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1015d7f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1015d7f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
