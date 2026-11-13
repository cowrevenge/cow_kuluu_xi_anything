/* f_0x10320a2a - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   installs the unhandled exception filter at 0x103209e4 and stores the previous filter.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10320a2a(Guest* g)
{
    const uint32_t target = rd32(COW_IMG(0x103292ccu));
    cow_stdcall(g, target, 1u, COW_IMG(0x103209e4u));

    const uint32_t eax = g->eax;
    wr32(COW_IMG(0x109b28c8u), eax);

    /* g->edx is whatever the imported call left; cow_stdcall updates it as the original call does. */
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10320a2a(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10320a2a(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
