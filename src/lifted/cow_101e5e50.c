/* f_0x101e5e50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101e5e50(Guest* g)
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
    uint32_t t8;
    uint32_t t9;
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
        g->edx = in_edx;
        t1 = rd32(COW_IMG(0x10663520u));
        g->esp = sp0 - 4u;
        t2 = cow_thiscall(g, COW_IMG(0x101e34d0u), t1, 0);
        t3 = g->ecx;
        t4 = g->edx;
        if (t2 == 0u)
        {
            eax = t2;
            edx = t4;
        }
        else
        {
            eax = t2;
            ecx = t3;
            edx = t4;
            esi = t2;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t5 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x158u);
            t6 = g->edx;
            g->edx = t6;
            t7 = rd8(esi);
            g->esp = sp0 - 4u;
            t8 = cow_thiscall(g, COW_IMG(0x10210f10u), rd32(COW_IMG(0x10664520u)), 7, COW_IMG(0x101e5ea0u), t7, t5, 0u, 0u, 1u, 0u);
            t9 = g->edx;
            eax = t8;
            edx = t9;
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e5e50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e5e50(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
