/* f_0x101be670 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls the imported function with the string argument and returns 1 if it returned nonzero, otherwise 0xFFFFFFFF.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_101be670(Guest* g, uint32_t param)
{
    const uint32_t target = rd32(COW_IMG(0x10329124u));

    /* Original sets eax to the argument before pushing it and calling. */
    g->eax = param;

    /* DeleteFileA is a Windows API function: stdcall, callee pops its argument. */
    cow_stdcall(g, target, 1u, param);

    /*
       After the call, eax contains the imported function's return value.
       The following sequence:
           neg eax
           sbb eax, eax
           and eax, 2
           dec eax
       maps:
           eax == 0      -> 0xFFFFFFFF
           eax != 0      -> 0x00000001
    */
    const uint32_t r = g->eax;
    const uint32_t result = (r != 0u) ? 1u : 0xFFFFFFFFu;

    /* edx is not modified by the post-call instructions; preserve whatever the call left. */
    g->edx = g->edx;

    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101be670(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd32(sp0 + 4u);

    const uint32_t result = cow_fn_101be670(g, param);

    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
