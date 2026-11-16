/* f_0x10181aa0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10181aa0(Guest* g)
{
    uint32_t ecx;
    uint32_t t1;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = rd8(arg1 + 0x20u);
    wr32(arg1 + 0x30u, 0u);
    wr32(arg1 + 0x2cu, 0u);
    wr32(arg1 + 0x28u, 0u);
    wr32(arg1 + 0x24u, 0u);
    if ((uint8_t)t1 == 0u)
    {
        ecx = (self & 0xffffff00u) | t1;
    }
    else
    {
        ecx = (self & 0xffffff00u) | t1;
        if ((rd32(COW_IMG(0x10631fd0u) + (uint8_t)ecx * 0x70u) & 0xffffff00u) == 0x62676c00u)
        {
            ecx = COW_IMG(0x10631fd0u) + (uint8_t)ecx * 0x70u;
        }
        else
        {
            ecx = COW_IMG(0x10631fd0u) + (uint8_t)ecx * 0x70u;
            wr32(arg1 + 0x24u, ecx + 8u);
            ecx = ecx + 8u;
        }
    }
    if (rd8(arg1 + 0x21u) == 0u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(arg1 + 0x21u);
    }
    else
    {
        ecx = (ecx & 0xffffff00u) | rd8(arg1 + 0x21u);
        if ((rd32(COW_IMG(0x10631fd0u) + (uint8_t)ecx * 0x70u) & 0xffffff00u) == 0x62676c00u)
        {
            ecx = COW_IMG(0x10631fd0u) + (uint8_t)ecx * 0x70u;
        }
        else
        {
            ecx = COW_IMG(0x10631fd0u) + (uint8_t)ecx * 0x70u;
            wr32(arg1 + 0x28u, ecx + 8u);
            ecx = ecx + 8u;
        }
    }
    if (rd8(arg1 + 0x22u) == 0u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(arg1 + 0x22u);
    }
    else
    {
        ecx = (ecx & 0xffffff00u) | rd8(arg1 + 0x22u);
        if ((rd32(COW_IMG(0x10631fd0u) + (uint8_t)ecx * 0x70u) & 0xffffff00u) == 0x62676c00u)
        {
            ecx = COW_IMG(0x10631fd0u) + (uint8_t)ecx * 0x70u;
        }
        else
        {
            ecx = COW_IMG(0x10631fd0u) + (uint8_t)ecx * 0x70u;
            wr32(arg1 + 0x2cu, ecx + 8u);
            ecx = ecx + 8u;
        }
    }
    if (rd8(arg1 + 0x23u) != 0u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(arg1 + 0x23u);
        if ((rd32(COW_IMG(0x10631fd0u) + (uint8_t)ecx * 0x70u) & 0xffffff00u) != 0x62676c00u)
        {
            ecx = COW_IMG(0x10631fd0u) + (uint8_t)ecx * 0x70u;
            wr32(arg1 + 0x30u, ecx + 8u);
        }
    }
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10181aa0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10181aa0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
