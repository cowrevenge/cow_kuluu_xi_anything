/* f_0x101dcb40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101dcb40(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((uint8_t)arg1 == 0u)
    {
        eax = (in_eax & 0xffffff00u) | (uint8_t)arg1;
        edx = in_edx;
    }
    else
    {
        t1 = rd8(rd32(self + 0x5cu) + rd32(rd32(self + 0x5cu) + 0xcu) + 0x18u);
        if ((int32_t)(t1 - 1u) >= 0)
        {
            eax = rd32(self + 0x5cu);
            ecx = rd32(rd32(self + 0x5cu) + 0xcu);
            edx = t1;
            esi = t1 - 1u;
        }
        else
        {
            eax = rd32(self + 0x5cu);
            ecx = rd32(rd32(self + 0x5cu) + 0xcu);
            edx = t1;
            esi = 0u;
        }
        g->eax = rd32(eax);
        g->ecx = ecx;
        g->edx = edx;
        t2 = rd32(eax);
        g->esp = sp0 - 4u;
        t3 = cow_cdecl(g, COW_IMG(0x100eb940u), 1, t2);
        t4 = g->ecx;
        t5 = g->edx;
        if ((int32_t)((uint8_t)t3 - 1u) >= 0)
        {
            eax = (uint8_t)t3 - 1u;
            ecx = t4;
            edx = t5;
        }
        else
        {
            ecx = t4;
            edx = t5;
            eax = 0u;
        }
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t6 = cow_cdecl(g, COW_IMG(0x101cb590u), 2, esi, eax);
        t7 = g->edx;
        eax = t6;
        edx = t7;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101dcb40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101dcb40(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
