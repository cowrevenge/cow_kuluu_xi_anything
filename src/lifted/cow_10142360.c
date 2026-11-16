/* f_0x10142360 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10142360(Guest* g)
{
    uint32_t ecx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + 8u) != 0u)
    {
        ecx = rd32(self + 8u);
        if ((uint8_t)arg1 != 0u)
        {
            esi = 0xbu;
        }
        else
        {
            esi = 5u;
        }
        g->eax = (in_eax & 0xffffff00u) | (uint8_t)arg1;
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        t1 = cow_thiscall(g, COW_IMG(0x10118b60u), ecx, 2, esi, 1u);
        t2 = g->edx;
        g->edx = t2;
        t3 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, esi, 2u);
        t4 = g->edx;
        cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, esi, 3u);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10142360(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10142360(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
