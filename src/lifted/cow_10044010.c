/* f_0x10044010 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10044010(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->ecx = self;
    g->esp = sp0 - 4u;
    t1 = cow_stdcall(g, COW_IMG(0x10043de0u), 0);
    t2 = g->ecx;
    if (rd32(t1 * 0x20u + t2 + 4u) != 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t1 * 0x20u + t2;
        t3 = rd32(eax * 0x20u + ecx + 0x20u) * arg1;
        wr32(edx + 0x10u, t3);
        t4 = rd32(edx + 8u);
        wr32(edx + 0xcu, t4);
        wr32(edx + 0x14u, 0u);
        if ((int32_t)(arg1 + rd32(edx + 8u)) > (int32_t)rd32(edx + 0x1cu))
        {
            wr32(edx + 0xcu, 0u);
            wr32(edx + 0x14u, 0x2000u);
        }
        t5 = arg1 + rd32(edx + 0xcu);
        wr32(edx + 8u, t5);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10044010(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10044010(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
