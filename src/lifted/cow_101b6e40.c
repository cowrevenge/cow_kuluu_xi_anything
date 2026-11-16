/* f_0x101b6e40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_101b6e40(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(self + 0xf108u) != 4u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        g->eax = in_eax;
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t1 = cow_thiscall(g, COW_IMG(0x101ac580u), self + 0x7e30u, 0);
        t2 = g->edx;
        eax = t1;
        edx = t2;
    }
    if ((int32_t)arg2 <= 450)
    {
        if ((uint8_t)arg3 == 0u)
        {
            eax = (eax & 0xffffff00u) | (uint8_t)arg3;
        }
        else
        {
            t3 = rd32(self + 0x8c7cu);
            g->eax = t3;
            g->esp = sp0 - 4u;
            t4 = cow_thiscall_cdecl(g, rd32(self + 0x8c78u), arg1, 3, 0u, arg1, t3);
            eax = t4;
        }
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(rd32(self) + 0x54u), self, 0);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101b6e40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101b6e40(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
