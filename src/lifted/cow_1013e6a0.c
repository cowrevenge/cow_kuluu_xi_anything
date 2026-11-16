/* f_0x1013e6a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1013e6a0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd8(arg1 + 2u) == 0u)
    {
        ecx = (self & 0xffffff00u) | rd8(arg1 + 2u);
        edx = 0u;
    }
    else
    {
        ecx = (self & 0xffffff00u) | rd8(arg1 + 2u);
        edx = arg1 + 4u;
    }
    if (rd32(COW_IMG(0x10578204u)) == 0u)
    {
        eax = arg1;
    }
    else
    {
        esi = rd32(COW_IMG(0x10578204u));
        t1 = (ecx & 0xffffff00u) | rd8(arg1 + 3u);
        t2 = (edx & 0xffff0000u) | rd16(arg1);
        g->eax = arg1;
        g->esp = sp0 - 4u;
        t3 = cow_fastcall(g, COW_IMG(0x1013e6d0u), esi, t2, 3, t2, edx, t1);
        t4 = g->edx;
        eax = t3;
        edx = t4;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1013e6a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1013e6a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
