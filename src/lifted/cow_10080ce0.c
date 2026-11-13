/* f_0x10080ce0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   Calls 0x10080d00, masks its eax result with 0xffbf, passes that value as the argument to 0x10080d10, then returns.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10080ce0(Guest* g)
{
    /* 10080ce0: call 0x10080d00 */
    cow_cdecl(g, COW_IMG(0x10080d00u), 0u);

    /* 10080ce5: and eax, 0xffbf
       The original is a full 32-bit AND.  Apply it directly to the eax
       left behind by the first callee. */
    g->eax &= 0xFFBFu;

    /* 10080cea: push eax
       10080ceb: call 0x10080d10
       The pushed value is the single stack argument. */
    cow_cdecl(g, COW_IMG(0x10080d10u), 1u, g->eax);

    /* 10080cf0: pop ecx
       ecx is not required by the comparison, but the pop restores esp.
       The caller's esp is restored by the adapter. */

    /* 10080cf1: ret
       Return the final eax left by the second callee. */
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10080ce0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10080ce0(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
