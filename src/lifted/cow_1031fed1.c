/* f_0x1031fed1 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1031fed1(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    eax = COW_IMG(0x103d2c60u);
    ecx = 0u;
L_1031fed8: ;
    if (rd32(eax) == arg1)
    {
        edx = rd32(eax);
        goto L_1031feee;
    }
    edx = rd32(eax);
    if ((int32_t)(eax + 8u) < (int32_t)COW_IMG(0x103d2d38u))
    {
        eax = eax + 8u;
        ecx = ecx + 1u;
        goto L_1031fed8;
    }
    g->edx = edx;
    return 0u;
L_1031feee: ;
    g->edx = edx;
    return rd32(COW_IMG(0x103d2c64u) + ecx * 8u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031fed1(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1031fed1(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
