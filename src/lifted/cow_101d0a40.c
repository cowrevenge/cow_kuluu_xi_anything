/* f_0x101d0a40 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_101d09c0 with 0xff, masks the dword at [esp+4] to its low byte, then tail-calls FUN_101d09c0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101d0a40(Guest* g, uint32_t sp0)
{
    /* 101d0a40: push 0xff */
    /* 101d0a45: call 0x101d09c0
     *
     * The callee is __thiscall and ends in ret 4, so it consumes the pushed 0xff
     * and leaves esp equal to the entry esp (sp0).
     */
    cow_thiscall(g, COW_IMG(0x101d09c0u), g->ecx, 1u, 0xFFu);

    /* 101d0a4a: mov eax, dword ptr [esp + 4] */
    /* 101d0a4e: and eax, 0xff */
    /* 101d0a53: mov dword ptr [esp + 4], eax */
    {
        const uint32_t addr = sp0 + 4u;
        const uint32_t v = rd32(addr) & 0xFFu;
        wr32(addr, v);
    }

    /* 101d0a57: jmp 0x101d09c0
     *
     * Tail call: the target sees the current stack and its own ret 4 returns to
     * this function's caller.  The adapter will account for the target's ret 4.
     */
    cow_thiscall(g, COW_IMG(0x101d09c0u), g->ecx, 1u, rd32(sp0 + 4u));
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d0a40(Guest* g)
{
    const uint32_t sp0 = g->esp;

    cow_fn_101d0a40(g, sp0);

    g->esp = sp0;
    rt_return(g, g->eax, 4u);   /* tail callee ends in ret 4 */
}
/* COW_ADAPTER END */
