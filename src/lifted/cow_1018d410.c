/* f_0x1018d410 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_1018d470 with the incoming stack argument in ecx and -1 on the stack, then calls FUN_1018d4a0 on the original this pointer with the first call's result and -1 as stack arguments.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_1018d410(Guest* g, uint32_t self, uint32_t stack_arg)
{
    uint32_t r1;

    /* 1018d411: mov esi, ecx */
    /* esi is the original this pointer. */

    /* 1018d413: mov ecx, dword ptr [esp + 8] */
    /* ecx becomes the incoming stack argument for the first call. */

    /* 1018d417: push -1 */
    /* 1018d419: call 0x1018d470 */
    /*
     * The callee ends in a bare ret, so the caller pops its stack arguments.
     * It is called with ecx = stack_arg and one stack argument, -1.
     */
    g->ecx = stack_arg;
    r1 = cow_thiscall_cdecl(g, COW_IMG(0x1018d470u), stack_arg, 1u, 0xFFFFFFFFu);

    /* Preserve the first call's eax for the push below and for the second call. */
    g->eax = r1;

    /* 1018d41e: push eax */
    /* 1018d41f: mov ecx, esi */
    /* 1018d421: call 0x1018d4a0 */
    /*
     * The callee ends in ret 8, so it pops two stack arguments.
     * Those two stack arguments are eax from the first call and the -1
     * left on the stack by the first call.
     */
    cow_thiscall(g, COW_IMG(0x1018d4a0u), self, 2u, r1, 0xFFFFFFFFu);

    /*
     * 1018d426: pop esi
     * 1018d427: ret 4
     *
     * eax and edx are whatever the second call left in them.
     */
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018d410(Guest* g)
{
    const uint32_t sp0 = g->esp;

    /*
     * Although the contract line says stack_args=0, the original reads
     * [esp + 8] after pushing esi, i.e. the first stack argument at [sp0 + 4].
     */
    const uint32_t stack_arg = rd32(sp0 + 4u);

    const uint32_t result = cow_fn_1018d410(g, g->ecx, stack_arg);

    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
