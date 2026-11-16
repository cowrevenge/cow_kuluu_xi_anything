/* f_0x10015f50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10015f50(Guest* g)
{
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;

    if (rd32(COW_IMG(0x10662dccu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10662dccu));
        g->esp = sp0;
        cow_fastcall(g, COW_IMG(0x101c4680u), ecx, in_edx, 0);
        t1 = g->edx;
        if (rd32(COW_IMG(0x10662dccu)) != 0u)
        {
            ecx = rd32(COW_IMG(0x10662dccu));
            edx = t1;
            g->esp = sp0;
            cow_thiscall(g, rd32(rd32(ecx)), ecx, 1, 1u);
            wr32(COW_IMG(0x10662dccu), 0u);
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10015f50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10015f50(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
