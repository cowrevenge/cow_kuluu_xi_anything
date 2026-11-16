/* f_0x10205660 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10205660(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(COW_IMG(0x10664494u)) == 0u)
    {
        eax = in_eax;
        ecx = rd32(COW_IMG(0x10664494u));
        edx = in_edx;
    }
    else
    {
        ecx = rd32(COW_IMG(0x10664494u));
        g->eax = rd32(ecx);
        g->edx = in_edx;
        t1 = rd32(ecx);
        g->esp = sp0 - 4u;
        t2 = cow_thiscall(g, rd32(t1 + 0x74u), ecx, 0);
        t3 = g->ecx;
        t4 = g->edx;
        eax = t2;
        ecx = t3;
        edx = t4;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t5 = cow_stdcall(g, COW_IMG(0x10202d10u), 0);
    t6 = g->edx;
    if (rd8(self + 0x29u) == 0u)
    {
        eax = (t5 & 0xffffff00u) | rd8(self + 0x29u);
        edx = t6;
    }
    else
    {
        eax = (t5 & 0xffffff00u) | rd8(self + 0x29u);
        edx = t6;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t7 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10371b4cu), 1u, 0u);
        t8 = g->edx;
        eax = t7;
        edx = t8;
    }
    if (rd8(self + 0x2au) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x2au);
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x2au);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0;
        t9 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x103854acu), 1u, 0u);
        t10 = g->edx;
        eax = t9;
        edx = t10;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t11 = cow_thiscall(g, COW_IMG(0x10150cc0u), rd32(COW_IMG(0x1057847cu)), 2, 0u, 2u);
    t12 = g->edx;
    g->edx = t12;
    return t11;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10205660(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10205660(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
