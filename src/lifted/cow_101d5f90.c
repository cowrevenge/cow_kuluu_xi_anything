/* f_0x101d5f90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101d5f90(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint8_t)arg2 == 0u)
    {
        eax = (in_eax & 0xffffff00u) | (uint8_t)arg2;
        edx = in_edx;
    }
    else
    {
        g->esp = sp0;
        t1 = cow_call_regs(g, COW_IMG(0x101cc0d0u), (in_eax & 0xffffff00u) | (uint8_t)arg2, g->ecx, in_edx, 1, 2, 4u, 0u);
        t2 = g->edx;
        if ((uint8_t)t1 == 0u)
        {
            eax = t1;
            edx = t2;
        }
        else
        {
            edx = t2;
            if (rd32(rd32(COW_IMG(0x106631d4u)) + 0x38u) == 0u)
            {
                eax = rd32(rd32(COW_IMG(0x106631d4u)) + 0x38u);
            }
            else
            {
                eax = rd32(rd32(COW_IMG(0x106631d4u)) + 0x38u);
                wr32(eax + 0x880u, COW_IMG(0x101d5f70u));
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0;
                t3 = cow_thiscall(g, COW_IMG(0x100ad1e0u), rd32(rd32(COW_IMG(0x106631d4u)) + 0x38u), 1, 0u);
                t4 = g->edx;
                eax = t3;
                edx = t4;
            }
            wr8(COW_IMG(0x106631d0u), 1u);
            wr8(COW_IMG(0x106218e6u), 1u);
            wr8(COW_IMG(0x10482f18u), 1u);
            eax = (eax & 0xffffff00u) | 1u;
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d5f90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101d5f90(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
