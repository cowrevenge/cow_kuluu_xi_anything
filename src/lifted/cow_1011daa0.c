/* f_0x1011daa0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1011daa0(Guest* g)
{
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    t1 = (self & 0xffffff00u) | rd8(arg1);
    g->ecx = t1;
    g->edx = arg1;
    t2 = cow_cdecl(g, COW_IMG(0x1011da30u), 1, (uint8_t)t1);
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 != 0u)
    {
        ecx = t3;
        edx = t4;
        goto L_1011dacb;
    }
    ecx = t3;
    wr16(arg2, (uint16_t)(uint32_t)(int8_t)ecx);
    g->edx = arg2;
    return 1u;
L_1011dacb: ;
    wr16(arg2, (uint16_t)(ecx << 8u | rd8(edx + 1u)));
    g->edx = edx;
    return 2u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1011daa0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1011daa0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
