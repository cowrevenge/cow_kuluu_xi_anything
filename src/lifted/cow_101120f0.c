/* f_0x101120f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101120f0(Guest* g)
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

    if (rd32(self) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        ecx = rd32(self);
        g->eax = rd32(ecx);
        g->edx = in_edx;
        t1 = rd32(ecx);
        g->esp = sp0 - 4u;
        t2 = cow_thiscall(g, rd32(t1), ecx, 1, 1u);
        t3 = g->edx;
        eax = t2;
        edx = t3;
    }
    wr32(self, 0xefefefefu);
    if (rd32(self + 8u) != 0u)
    {
        esi = rd32(self + 8u);
        g->esp = sp0 - 4u;
        t4 = cow_call_regs(g, COW_IMG(0x101120f0u), eax, esi, edx, 1, 0);
        t5 = g->ecx;
        t6 = g->edx;
        cow_cdecl(g, COW_IMG(0x101086b0u), 1, esi);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101120f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101120f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
