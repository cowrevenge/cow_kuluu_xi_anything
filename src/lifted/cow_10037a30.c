/* f_0x10037a30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10037a30(Guest* g)
{
    double d1;
    uint32_t esi;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd8(COW_IMG(0x104638f5u)) != 0u)
    {
        if (rd32(COW_IMG(0x1046393cu)) != 0u)
        {
            esi = rd32(COW_IMG(0x1046393cu));
            g->edx = in_edx;
            d1 = fr(g, fr(g, (double)(int32_t)arg1 * (double)rdf32(COW_IMG(0x103517f8u))) * (double)rdf32(COW_IMG(0x103517f4u)));
            fpush(g, d1);
            g->esp = sp0 - 8u;
            t2 = cow_call_regs(g, COW_IMG(0x10311c6cu), arg2, g->ecx, g->edx, 1, 0);
            t3 = g->edx;
            g->esp = sp0 - 4u;
            cow_stdcall(g, COW_IMG(0x10246790u), 3, 0xffffffffu, t2, arg2);
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10037a30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10037a30(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
