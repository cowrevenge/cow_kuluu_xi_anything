/* f_0x10113250 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   increments a 16-bit global counter (wrapping 0 to 1), allocates a 0xd4-byte block, and initializes its header before passing it to a thunk.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10113250(Guest* g)
{
    const uint32_t counter_addr = COW_IMG(0x104E1B5Cu);

    uint16_t v = (uint16_t)(rd16(counter_addr) + 1u);
    wr16(counter_addr, v);
    if (v == 0u)
    {
        wr16(counter_addr, (uint16_t)1u);
    }

    uint32_t p = cow_cdecl(g, COW_IMG(0x100FC3C0u), 3u, 0xD4u, 0u, 0u);

    if (p != 0u)
    {
        uint16_t cx = rd16(counter_addr);

        g->ecx = (g->ecx & 0xFFFF0000u) | (uint32_t)cx;
        g->eax = p;

        wr16(p + 4u, cx);
        wr16(p + 6u, (uint16_t)0u);

        cow_cdecl(g, COW_IMG(0x100FC4D0u), 3u, p, 8u, 0u);
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10113250(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10113250(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
