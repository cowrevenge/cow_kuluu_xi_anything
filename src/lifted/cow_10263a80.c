/* f_0x10263a80 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Tail-calls the imported function at 0x10329198 with the sole stack argument advanced by 0x44.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_10263a80(Guest* g, uint32_t param)
{
    const uint32_t target = rd32(COW_IMG(0x10329198u));
    const uint32_t arg = param + 0x44u;

    /*
     * Original:
     *   eax = [esp + 4]
     *   eax += 0x44
     *   [esp + 4] = eax
     *   jmp [0x10329198]
     *
     * The target is an imported Windows API function (InterlockedIncrement),
     * therefore stdcall: callee pops one 4-byte argument.
     */
    const uint32_t result = cow_stdcall(g, target, 1u, arg);

    /*
     * eax is returned from cow_fn.
     * edx is whatever the tail-called target leaves behind; cow_stdcall updates
     * g->edx as part of simulating the call.
     */
    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10263a80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd32(sp0 + 4u);

    const uint32_t result = cow_fn_10263a80(g, param);

    g->esp = sp0;
    rt_return(g, result, 4u);   /* target is stdcall and pops one argument */
}
/* COW_ADAPTER END */
