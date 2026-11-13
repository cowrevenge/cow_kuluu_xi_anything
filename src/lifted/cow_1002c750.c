/* f_0x1002c750 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   obtains a pointer from FUN_1002b5a0; if its first dword is zero returns that pointer with al cleared, otherwise tail-calls FUN_1002b470 with ecx set to that first dword.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_1002c750(Guest* g, uint32_t sp0)
{
    uint32_t eax;
    uint32_t ecx;

    /* 1002c750: call 0x1002b5a0
     * The original call leaves ecx unchanged, so pass the incoming ecx as self.
     * The callee ends in a bare ret, so the caller pops (thiscall_cdecl).
     */
    eax = cow_thiscall_cdecl(g, COW_IMG(0x1002b5a0u), g->ecx, 0u);

    /* 1002c755: mov ecx, dword ptr [eax] */
    ecx = rd32(eax);

    /* 1002c757: test ecx, ecx
     * 1002c759: jne 0x1002c760
     */
    if (ecx != 0u)
    {
        /* 1002c760: jmp 0x1002b470
         * Tail call.  The target ends in ret 4, so it pops the one argument word
         * that this function's caller placed on the stack.  It also sees ecx
         * set to [eax], as the original does before the jmp.
         */
        g->ecx = ecx;
        return cow_stdcall(g, COW_IMG(0x1002b470u), 1u, rd32(sp0 + 4u));
    }

    /* 1002c75b: xor al, al */
    eax = eax & 0xFFFFFF00u;

    /* 1002c75d: ret 4 */
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1002c750(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_1002c750(g, sp0);
    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
