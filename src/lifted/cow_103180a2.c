/* f_0x103180a2 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Assigns a parsed numeric value to a destination, using a two-dword parse when the flag is nonzero and a one-dword parse when it is zero.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_103180a2(Guest* g, uint32_t sp0, uint32_t flag, uint32_t argument, uint32_t number)
{
    const uint32_t number_addr = sp0 + 12u;

    if (flag != 0u)
    {
        const uint32_t local = cow_frame(g, sp0, 24u);

        cow_cdecl(g, COW_IMG(0x103238ddu), 2u, local, number);

        wr32(argument, rd32(local));
        wr32(argument + 4u, rd32(local + 4u));
    }
    else
    {
        const uint32_t local = cow_frame(g, sp0, 24u);
        (void)local;

        cow_cdecl(g, COW_IMG(0x10323938u), 2u, number_addr, number);

        wr32(argument, rd32(number_addr));
    }

    g->edx = g->edx;
    return argument;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_103180a2(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t flag = rd32(sp0 + 4u);
    const uint32_t argument = rd32(sp0 + 8u);
    const uint32_t number = rd32(sp0 + 12u);

    const uint32_t result = cow_fn_103180a2(g, sp0, flag, argument, number);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
