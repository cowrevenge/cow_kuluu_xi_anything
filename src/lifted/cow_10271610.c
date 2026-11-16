/* f_0x10271610 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10271610(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((rd8(COW_IMG(0x1099b0d8u)) & 0x10u) == 0u)
    {
        eax = 0u;
        ecx = (self & 0xffffff00u) | rd8(COW_IMG(0x1099b0d8u));
    }
    else
    {
        ecx = (self & 0xffffff00u) | rd8(COW_IMG(0x1099b0d8u));
        eax = 1u;
    }
    if ((ecx & 0x20u) != 0u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)(eax | 2u);
    }
    if (eax != 0u)
    {
        g->esp = sp0;
        cow_cdecl(g, COW_IMG(0x10271650u), 4, rd32(COW_IMG(0x1099b0e4u)), rd32(COW_IMG(0x1099b0ecu)), eax, arg1);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10271610(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10271610(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
