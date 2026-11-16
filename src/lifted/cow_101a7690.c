/* f_0x101a7690 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101a7690(Guest* g)
{
    unsigned cf;
    uint32_t eax;
    uint32_t edx;
    unsigned of;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint8_t)arg2 == 0u)
    {
        eax = (in_eax & 0xffffff00u) | (uint8_t)arg2;
        edx = in_edx;
    }
    else
    {
        if (arg1 == 0u)
        {
            eax = (in_eax & 0xffffff00u) | (uint8_t)arg2;
            edx = in_edx;
        }
        else
        {
            t1 = rd8(rd32(COW_IMG(0x106627ccu)) + 0x24u);
            t2 = rd32(COW_IMG(0x106627ccu));
            eax = (in_eax & 0xffffff00u) | t1;
            edx = (in_edx & 0xffffff00u) | 0x14u;
            cf = 0u;
            of = 0u;
            { /* imul dl */ { int32_t p = (int32_t)(int8_t)eax * (int32_t)(int8_t)(uint8_t)edx; eax = (eax & 0xFFFF0000u) | ((uint32_t)p & 0xFFFFu); cf = of = p != (int32_t)(int8_t)p; } }
            t3 = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax + rd8(t2 + 0x20u));
            g->eax = t3;
            g->edx = edx;
            g->esp = sp0 - 4u;
            t4 = cow_cdecl(g, COW_IMG(0x101a75a0u), 2, arg1, t3);
            t5 = g->edx;
            eax = t4;
            edx = t5;
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a7690(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a7690(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
