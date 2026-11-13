/* f_0x1013c110 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Allocates an 8-byte stack buffer and passes its address to FUN_1013e560, preserving the callee's eax/edx.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_1013c110(Guest* g, uint32_t sp0)
{
    const uint32_t buf = cow_frame(g, sp0, 8u);

    /* Original:
       sub esp, 8
       lea eax, [esp]
       push eax
       call 0x1013e560
       add esp, 8
       ret

       At the call instruction the guest esp is sp0 - 12.  The callee is
       declared as thiscall/stdcall with one stack argument and ends in ret 4,
       so it pops the argument itself.  Set esp to the post-sub value so the
       helper can push the argument and return address exactly as the original
       does.
    */
    g->esp = sp0 - 8u;

    cow_thiscall(g, COW_IMG(0x1013e560u), g->ecx, 1u, buf);

    /* The original's add esp, 8 and ret are handled by the adapter.  The
       callee's final eax and edx are the values this function returns/leaves.
    */
    g->edx = g->edx;
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1013c110(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_1013c110(g, sp0);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
