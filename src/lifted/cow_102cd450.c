/* f_0x102cd450 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the pointer argument is non-null, tail-jumps through the function pointer at 0x1034b4e8; otherwise returns immediately.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_102cd450(Guest* g, uint32_t param)
{
    if (param == 0u)
    {
        /* Original: eax = 0, edx untouched, bare ret. */
        return 0u;
    }

    /* Original:
       eax = param
       [esp + 4] = eax (same value)
       jmp dword ptr [0x1034b4e8]
    */
    const uint32_t target = rd32(COW_IMG(0x1034b4e8u));

    /* Preserve the original tail-jump semantics: the callee sees the current
       guest stack and registers, with eax set to the argument. */
    g->eax = param;
    rt_call_indirect(g, target);

    /* The tail-jumped callee's final eax/edx are what the caller observes. */
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102cd450(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd32(sp0 + 4u);

    const uint32_t result = cow_fn_102cd450(g, param);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
