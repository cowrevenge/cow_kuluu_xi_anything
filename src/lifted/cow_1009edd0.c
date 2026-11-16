/* f_0x1009edd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1009edd0(Guest* g)
{
    double d6;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = rd16(arg1 + 0x14u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t2 = cow_call_regs(g, COW_IMG(0x10086fc0u), t1, g->ecx, g->edx, 1, 1, t1);
    t3 = g->ecx;
    t4 = g->edx;
    if ((uint8_t)t2 != 0u)
    {
        ecx = t3;
        edx = t4;
        if (rd32(arg1 + 0x10u) != 0u)
        {
            t5 = (ecx & 0xffffff00u) | rd8(arg1 + 0x17u);
            g->esp = sp0 - 4u;
            cow_cdecl(g, COW_IMG(0x100dd990u), 1, t5);
            d6 = cow_take_float(g);
            t7 = rd32(COW_IMG(0x10480af0u) + rd16(arg1 + 0x14u) * 4u);
            wr32(t7 + 0x14u, 0u);
            wrf32(t7 + 0x18u, (float)d6);
            wr32(t7 + 0x1cu, 0u);
            t8 = rd32(COW_IMG(0x10480af0u) + rd16(arg1 + 0x14u) * 4u);
            wr32(t8 + 0x34u, 0u);
            wrf32(t8 + 0x38u, (float)d6);
            wr32(t8 + 0x3cu, 0u);
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1009edd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1009edd0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
