/* f_0x102f1f35 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
void cow_fn_102f1f35(Guest* g)
{
    uint32_t edi;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg1 != 0u)
    {
        if (arg2 != 0u)
        {
            if (arg3 != 0u)
            {
                wr32(arg2 + 0x30u, arg3);
            }
            if (arg5 != 0u)
            {
                t1 = rd32(sp0 + 0x10u);
                esi = arg5;
                edi = arg2 + 0x34u;
                wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
                wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
                wr16(edi, rd16(esi)); esi += (g->df ? (uint32_t)-2 : 2u); edi += (g->df ? (uint32_t)-2 : 2u);
                if (t1 == 0u)
                {
                    wr32(sp0 + 0x10u, 1u);
                }
            }
            t2 = rd16(sp0 + 0x10u);
            wr32(arg2 + 8u, rd32(arg2 + 8u) | 0x10u);
            wr16(arg2 + 0x16u, (uint16_t)t2);
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f1f35(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102f1f35(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
