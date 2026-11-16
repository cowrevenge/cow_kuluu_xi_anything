/* f_0x10110000 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10110000(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self) == 0u)
    {
        eax = rd32(self);
        edx = in_edx;
    }
    else
    {
        eax = rd32(self);
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t1 = cow_cdecl(g, COW_IMG(0x10311bf0u), 1, eax);
        t2 = g->edx;
        eax = t1;
        edx = t2;
    }
    wr32(self, 0xefefefefu);
    if (rd32(self + 8u) != 0u)
    {
        esi = rd32(self + 8u);
        g->eax = eax;
        g->esp = sp0 - 4u;
        t3 = cow_fastcall(g, COW_IMG(0x10110000u), esi, edx, 0);
        t4 = g->ecx;
        t5 = g->edx;
        cow_cdecl(g, COW_IMG(0x101086b0u), 1, esi);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10110000(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10110000(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
