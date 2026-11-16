/* f_0x101aeb80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101aeb80(Guest* g)
{
    uint32_t eax;
    const uint32_t sp0 = g->esp;

    if (rd32(rd32(COW_IMG(0x10456a28u)) + 8u) != 0u)
    {
        eax = rd32(COW_IMG(0x10456a28u));
        goto L_101aeb9c;
    }
    eax = rd32(COW_IMG(0x10456a28u));
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037a898u));
    return;
L_101aeb9c: ;
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037c3c4u));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101aeb80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101aeb80(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
