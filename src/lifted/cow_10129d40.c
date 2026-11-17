/* f_0x10129d40 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_10313683 with the stack argument, its address, and a fixed table pointer, then scans a stride-8 byte table for 0x8f and stores the stack argument into the corresponding dword slot.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_10129d40(Guest* g, uint32_t sp0)
{
    const uint32_t param_addr = sp0 + 4u;
    const uint32_t param_val = rd32(param_addr);

    cow_cdecl(g, COW_IMG(0x10313683u), 3u,
              param_val,
              COW_IMG(0x1036f1a0u),
              param_addr);

    g->esp = sp0;

    uint32_t eax = 0u;
    uint8_t dl = rd8(COW_IMG(0x1036e6e8u));
    const uint8_t cl = 0x8fu;

    if (dl != cl)
    {
        for (;;)
        {
            dl = rd8(COW_IMG(0x1036e6f0u) + eax * 8u);
            ++eax;
            if (dl == cl)
                break;
        }
    }

    const uint32_t edx = rd32(param_addr);

    wr8(COW_IMG(0x1036e88au), cl);
    wr32(COW_IMG(0x1036e6ecu) + eax * 8u, edx);

    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10129d40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10129d40(g, sp0);
    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
