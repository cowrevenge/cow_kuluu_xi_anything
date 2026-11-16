/* f_0x10225c10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10225c10(Guest* g)
{
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;

    if (rd32(COW_IMG(0x1057876cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1057876cu));
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t1 = cow_call_regs(g, COW_IMG(0x101598a0u), in_eax, ecx, g->edx, 1, 0);
        t2 = g->edx;
        ecx = rd32(COW_IMG(0x1057876cu));
        edx = t2;
        esi = t1;
    }
    else
    {
        ecx = rd32(COW_IMG(0x1057876cu));
        edx = in_edx;
        esi = 0u;
    }
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10159440u), ecx, 2, COW_IMG(0x10225c50u), 0x7fu);
    t3 = g->edx;
    if (esi != 0u)
    {
        edx = t3;
        g->esp = sp0 - 4u;
        cow_fastcall(g, COW_IMG(0x10157b40u), rd32(COW_IMG(0x1057876cu)), edx, 3, esi, 0u, 0u);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10225c10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10225c10(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
