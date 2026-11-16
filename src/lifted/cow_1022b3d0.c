/* f_0x1022b3d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1022b3d0(Guest* g)
{
    uint32_t eax;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(COW_IMG(0x10667a74u)) == 0u)
    {
        eax = in_eax;
    }
    else
    {
        esi = rd32(COW_IMG(0x10667a74u));
        if (rd32(COW_IMG(0x1057817cu)) == 0u)
        {
            eax = rd32(COW_IMG(0x1057817cu));
        }
        else
        {
            g->esp = sp0 - 4u;
            t1 = cow_thiscall_cdecl(g, COW_IMG(0x1021e670u), self, 1, 0x30u);
            if ((uint8_t)t1 != 0u)
            {
                eax = t1;
            }
            else
            {
                t2 = rd8(esi + (uint16_t)arg1 * 0x64u + 0xcu);
                g->eax = t2;
                g->esp = sp0 - 4u;
                t3 = cow_thiscall(g, COW_IMG(0x1012c1d0u), rd32(COW_IMG(0x1057817cu)), 2, 0u, t2 * 0x14u);
                eax = t3;
            }
        }
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1022b3d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1022b3d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
