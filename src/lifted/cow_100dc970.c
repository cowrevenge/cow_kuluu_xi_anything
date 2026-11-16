/* f_0x100dc970 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_100dc970(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    eax = rd32(arg2);
    edx = 0x11u;
    esi = rd32(arg3);
L_100dc989: ;
    t1 = eax ^ rd32(arg1 + edx * 4u);
    t2 = rd32(arg1 + (uint8_t)t1 * 4u + 0x48u) + rd32(arg1 + (uint8_t)(t1 >> 0x10u) * 4u + 0x848u) + ((rd32(arg1 + (t1 >> 0x18u) * 4u + 0xc48u) & 1u) ^ 0x20u) + ((rd32(arg1 + (uint8_t)(t1 >> 8u) * 4u + 0x448u) & 1u) ^ 0x20u);
    if ((int32_t)(edx - 1u) > 1)
    {
        eax = t2 ^ esi;
        edx = edx - 1u;
        esi = t1;
        goto L_100dc989;
    }
    eax = t2 ^ esi;
    esi = t1;
    t3 = rd32(arg1) ^ esi;
    t4 = rd32(arg1 + 4u);
    wr32(arg2, t3);
    wr32(arg3, t4 ^ eax);
    g->edx = t4 ^ eax;
    return arg3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100dc970(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100dc970(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
