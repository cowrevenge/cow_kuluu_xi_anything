/* f_0x10258820 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   adjusts this, calls FUN_1018d470, then calls FUN_1018d430 with the first stack word and FUN_1018d470's return value.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10258820(Guest* g, uint32_t self, uint32_t sp0)
{
    uint32_t ecx;

    /* 10258820: add ecx, 4 */
    ecx = self + 4u;
    g->ecx = ecx;

    /* 10258823: call 0x1018d470
       callee ends with bare ret: caller pops arguments.
       It is called with ecx = self + 4. */
    cow_thiscall_cdecl(g, COW_IMG(0x1018d470u), ecx, 0u);

    /* 10258828: mov ecx, dword ptr [esp + 4] */
    ecx = rd32(sp0 + 4u);
    g->ecx = ecx;

    /* 1025882c: push eax
       1025882d: call 0x1018d430
       callee ends with ret 4: callee pops one stack argument.
       It is called with ecx = [esp + 4] and stack argument eax. */
    cow_thiscall(g, COW_IMG(0x1018d430u), ecx, 1u, g->eax);

    /* 10258832: ret 0x14
       eax and edx are whatever the two callees left in them. */
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10258820(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10258820(g, g->ecx, sp0);
    g->esp = sp0;
    rt_return(g, result, 20u);   /* ret 0x14 */
}
/* COW_ADAPTER END */
