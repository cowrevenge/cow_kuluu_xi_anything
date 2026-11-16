/* f_0x1003e8e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1003e8e0(Guest* g)
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
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self + 0x3cu) == 0u)
    {
        eax = in_eax;
        ecx = rd32(self + 0x3cu);
        edx = in_edx;
    }
    else
    {
        ecx = rd32(self + 0x3cu);
        g->eax = rd32(ecx);
        g->edx = in_edx;
        t1 = rd32(ecx);
        g->esp = sp0 - 4u;
        t2 = cow_thiscall(g, rd32(t1), ecx, 1, 1u);
        t3 = g->ecx;
        t4 = g->edx;
        eax = t2;
        ecx = t3;
        edx = t4;
    }
    if (rd32(self + 0x44u) != 0u)
    {
        esi = rd32(self + 0x44u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t5 = cow_cdecl(g, COW_IMG(0x10028700u), 1, esi);
        t6 = g->edx;
        eax = t5;
        edx = t6;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1003e8e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1003e8e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
