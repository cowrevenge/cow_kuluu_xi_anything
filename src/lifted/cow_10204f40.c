/* f_0x10204f40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10204f40(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    t1 = rd32(sp0 + 4u);
    wr8(sp0 + 4u, t1 != 0u);
    if ((uint8_t)arg2 == 0u)
    {
        eax = (in_eax & 0xffffff00u) | (uint8_t)arg2;
        edx = in_edx;
    }
    else
    {
        if (rd32(COW_IMG(0x10664494u)) == 0u)
        {
            eax = (in_eax & 0xffffff00u) | (uint8_t)arg2;
            edx = in_edx;
        }
        else
        {
            ecx = rd32(COW_IMG(0x10664494u));
            g->eax = (in_eax & 0xffffff00u) | (uint8_t)arg2;
            g->edx = in_edx;
            g->esp = sp0;
            t2 = cow_stdcall(g, COW_IMG(0x1020c3e0u), 0);
            t3 = g->edx;
            eax = t2;
            edx = t3;
        }
    }
    t4 = rd32(sp0 + 4u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t5 = cow_cdecl(g, COW_IMG(0x10204c50u), 1, t4);
    t6 = g->edx;
    g->edx = t6;
    return t5;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10204f40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10204f40(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
