/* f_0x102effbb - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102effbb(Guest* g)
{
    uint32_t ecx;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    wr8(arg1 + 0x61u, rd8(arg1 + 0x61u) | 0x80u);
    wr16(arg1 + 0x11eu, (uint8_t)arg2);
    if (arg3 != 1u)
    {
        wr8(arg1 + 0x5cu, rd8(arg1 + 0x5cu) & 0x7fu);
    }
    else
    {
        wr8(arg1 + 0x5cu, rd8(arg1 + 0x5cu) | 0x80u);
    }
    if (rd8(arg1 + 0x116u) != 2u)
    {
        ecx = (self & 0xffff0000u) | rd8(arg1 + 0x116u);
    }
    else
    {
        ecx = (self & 0xffff0000u) | rd8(arg1 + 0x116u);
        wr8(arg1 + 0x11bu, 4u);
    }
    if ((uint8_t)ecx == 0u)
    {
        if (rd8(arg1 + 0x117u) >= 8u)
        {
            wr8(arg1 + 0x11bu, 2u);
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102effbb(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102effbb(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
