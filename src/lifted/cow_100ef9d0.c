/* f_0x100ef9d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100ef9d0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    eax = rd32(COW_IMG(0x104df770u));
    ecx = arg2;
    edx = rd32(COW_IMG(0x104df770u)) + 0x140e4u;
L_100ef9df: ;
    t1 = rd8(ecx);
    wr8(edx, (uint8_t)t1);
    if ((uint8_t)t1 != 0u)
    {
        eax = (eax & 0xffffff00u) | t1;
        ecx = ecx + 1u;
        edx = edx + 1u;
        goto L_100ef9df;
    }
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ef9d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100ef9d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
