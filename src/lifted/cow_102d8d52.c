/* f_0x102d8d52 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   Calls FUN_102e7670(1), then tail-jumps through the import at 0x103cc45c, forwarding the stack arguments and returning with the tail target's stack cleanup.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_102d8d52(Guest* g, uint32_t sp0)
{
    cow_stdcall(g, COW_IMG(0x102e7670u), 1u, 1u);

    const uint32_t target = rd32(COW_IMG(0x103cc45cu));

    /*
     * At the original:
     *   jmp dword ptr [0x103cc45c]
     * the stack is back to sp0, with the caller's return address at [sp0]
     * and the tail target's arguments above it.  The observed original esp
     * is sp0 + 16, so the tail target pops 12 argument bytes and returns.
     */
    const uint32_t a0 = rd32(sp0 + 4u);
    const uint32_t a1 = rd32(sp0 + 8u);
    const uint32_t a2 = rd32(sp0 + 12u);

    cow_stdcall(g, target, 3u, a0, a1, a2);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102d8d52(Guest* g)
{
    const uint32_t sp0 = g->esp;

    cow_fn_102d8d52(g, sp0);

    g->esp = sp0;

    /* The tail target pops 12 argument bytes. */
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
