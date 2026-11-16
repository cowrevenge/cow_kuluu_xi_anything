/* f_0x10266090 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10266090(Guest* g)
{
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    ecx = self;
    edx = arg1;
    esi = arg2;
L_1026609b: ;
    t1 = rd16(esi);
    wr16(edx, (uint16_t)t1);
    if ((uint16_t)t1 != 0u)
    {
        ecx = (ecx & 0xffff0000u) | t1;
        edx = edx + 2u;
        esi = esi + 2u;
        goto L_1026609b;
    }
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10266090(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10266090(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
