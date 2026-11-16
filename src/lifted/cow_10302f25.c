/* f_0x10302f25 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10302f25(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    const uint32_t self = g->ecx;

    if ((int32_t)rd32(self + 0x120u) <= 1)
    {
        eax = rd32(self + 0x184u);
        if (rd32(self + 0x80u) >= rd32(self + 0x118u) - 1u)
        {
            ecx = rd32(self + 0x124u);
            ecx = rd32(ecx + 0x48u);
        }
        else
        {
            ecx = rd32(self + 0x124u);
            ecx = rd32(ecx + 0xcu);
        }
        wr32(eax + 0x1cu, ecx);
    }
    else
    {
        eax = rd32(self + 0x184u);
        wr32(eax + 0x1cu, 1u);
    }
    wr32(eax + 0x14u, 0u);
    wr32(eax + 0x18u, 0u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10302f25(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10302f25(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
