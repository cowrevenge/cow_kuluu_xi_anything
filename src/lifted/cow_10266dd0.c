/* f_0x10266dd0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   rewrites the first two stack arguments and tail-jumps to 0x10266cd0, returning its result.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=6 */
uint32_t cow_fn_10266dd0(Guest* g, uint32_t sp0)
{
    const uint32_t a1 = rd32(sp0 + 4u);
    const uint32_t a2 = 0; /* overwritten below */
    const uint32_t a3 = rd32(sp0 + 12u);
    const uint32_t a4 = rd32(sp0 + 16u);
    const uint32_t a5 = rd32(sp0 + 20u);
    const uint32_t a6 = rd32(sp0 + 24u);

    /*
     * Original:
     *   mov ecx, dword ptr [esp + 4]
     *   mov dword ptr [esp + 8], 0x1033eee8
     *   add ecx, 0x10
     *   mov dword ptr [esp + 4], ecx
     *   jmp 0x10266cd0
     *
     * Keep the exact guest stack writes first.
     */
    wr32(sp0 + 8u, COW_IMG(0x1033EEE8u));
    wr32(sp0 + 4u, a1 + 0x10u);

    /*
     * Tail call: invoke the target with the six stack arguments as they are now
     * in the original stack slots.  The target performs `ret 24`, so the adapter
     * will pop 24 bytes after returning.
     */
    g->ecx = a1 + 0x10u;
    g->esp = sp0;

    uint32_t eax = cow_stdcall(
        g,
        COW_IMG(0x10266CD0u),
        6u,
        a1 + 0x10u,
        COW_IMG(0x1033EEE8u),
        a3,
        a4,
        a5,
        a6
    );

    /*
     * Preserve edx exactly as the tail-called function leaves it.
     * The helper updates g->edx when the guest callee writes edx.
     */
    g->eax = eax;

    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10266dd0(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t result = cow_fn_10266dd0(g, sp0);

    g->esp = sp0;
    rt_return(g, result, 24u);   /* target ends in ret 24 */
}
/* COW_ADAPTER END */
