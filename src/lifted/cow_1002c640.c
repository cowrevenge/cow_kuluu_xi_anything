/* f_0x1002c640 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls 0x1002b5a0, and if the dword it points to is nonzero, tail-calls 0x1002a9f0 with the three original stack arguments; otherwise returns after popping them.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=3 */
uint32_t cow_fn_1002c640(Guest* g, uint32_t arg0, uint32_t arg1, uint32_t arg2)
{
    /* 1002c640: call 0x1002b5a0
     *
     * The original call instruction has no stack arguments.  Use a caller-pops
     * call so the bare ret in the callee is matched.  Preserve ecx as the
     * incoming ecx in case the callee uses it as its first fastcall/this
     * argument.
     */
    cow_thiscall_cdecl(g, COW_IMG(0x1002b5a0u), g->ecx, 0u);

    /* 1002c645: mov ecx, dword ptr [eax] */
    const uint32_t ecx = rd32(g->eax);

    /* 1002c647: test ecx, ecx
     * 1002c649: je 0x1002c658
     */
    if (ecx == 0u)
    {
        /* 1002c658: ret 0xc
         *
         * eax and edx are whatever the call to 0x1002b5a0 left in them.
         */
        return g->eax;
    }

    /* 1002c64b: mov eax, dword ptr [esp + 0xc]
     * 1002c64f: mov dword ptr [esp + 0xc], eax
     *
     * At this point esp is the original entry esp, so [esp + 0xc] is arg2.
     * The store writes the same value back; emulate the touch for fidelity.
     */
    const uint32_t eax = arg2;
    wr32(g->esp + 0xcu, eax);
    g->eax = eax;

    /* 1002c653: jmp 0x1002a9f0
     *
     * Tail call.  The target is stdcall and pops 12 bytes.  It receives the
     * three original stack arguments.  Its final eax/edx become this
     * function's final eax/edx.
     */
    const uint32_t result = cow_stdcall(g, COW_IMG(0x1002a9f0u), 3u, arg0, arg1, arg2);
    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1002c640(Guest* g)
{
    const uint32_t sp0 = g->esp;      /* [sp0] is the return address; stack argument i is rd32(sp0 + 4 + 4*i) */
    const uint32_t arg0 = rd32(sp0 + 4u);
    const uint32_t arg1 = rd32(sp0 + 8u);
    const uint32_t arg2 = rd32(sp0 + 12u);

    const uint32_t result = cow_fn_1002c640(g, arg0, arg1, arg2);

    g->esp = sp0;
    rt_return(g, result, 12u);        /* ret 0xc / tail target ret 12 */
}
/* COW_ADAPTER END */
