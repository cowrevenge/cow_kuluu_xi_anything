/* f_0x102c7aeb - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   tail-thunk that calls FUN_103175f0 with the second and third stack arguments and returns its eax/edx.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=3 */
uint32_t cow_fn_102c7aeb(Guest* g, uint32_t param1, uint32_t param2, uint32_t param3)
{
    (void)param1;

    /* Original:
       push [esp+0xc]   ; param3
       push [esp+0xc]   ; param2
       call 0x103175f0
       pop ecx
       pop ecx
       ret
       The call therefore passes (param2, param3) in cdecl order.
    */
    cow_cdecl(g, COW_IMG(0x103175f0u), 2u, param2, param3);

    /* The two pops restore esp and leave ecx equal to the last popped value, param3.
       eax and edx are whatever the callee left behind. */
    g->ecx = param3;
    g->edx = g->edx;

    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102c7aeb(Guest* g)
{
    const uint32_t sp0 = g->esp;

    /* The original only reads [esp+0xc] and then [esp+0xc] after one push,
       i.e. param3 and param2.  Do not read param1 unless needed. */
    const uint32_t param2 = rd32(sp0 + 8u);
    const uint32_t param3 = rd32(sp0 + 12u);

    const uint32_t result = cow_fn_102c7aeb(g, 0u, param2, param3);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
