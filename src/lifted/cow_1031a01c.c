/* f_0x1031a01c - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1031a01c(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    cow_fastcall(g, COW_IMG(0x1031cfaau), self, in_edx, 0);
    t1 = g->ecx;
    t2 = g->edx;
    if (rd32(COW_IMG(0x103d0900u)) != 0xffffffffu)
    {
        eax = rd32(COW_IMG(0x103d0900u));
        ecx = t1;
        edx = t2;
        g->esp = sp0;
        cow_thiscall(g, rd32(COW_IMG(0x103290c8u)), ecx, 1, eax);
        wr32(COW_IMG(0x103d0900u), 0xffffffffu);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031a01c(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1031a01c(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
