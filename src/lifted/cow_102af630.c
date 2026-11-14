/* f_0x102af630 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   If the argument is non-null, replaces it with argument+0x1c and tail-calls FUN_102af1e0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102af630(Guest* g, uint32_t sp0, uint32_t param)
{
    if (param == 0u)
    {
        return;
    }

    const uint32_t adjusted = param + 0x1cu;

    /* Original: mov dword ptr [esp + 4], eax */
    wr32(sp0 + 4u, adjusted);

    /*
     * Original tail call:
     *   jmp 0x102af1e0
     *
     * The target must see the same stack pointer as this function did:
     *   [esp]     = return address to our caller
     *   [esp + 4] = adjusted
     *   [esp + 8] = original second stack argument, etc.
     *
     * cow_cdecl emulates a call by pushing a return address and the arguments.
     * With one argument, it consumes 8 bytes, so place the guest stack pointer
     * 8 bytes higher before invoking it.
     */
    g->esp = sp0 + 8u;
    cow_cdecl(g, COW_IMG(0x102af1e0u), 1u, adjusted);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102af630(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd32(sp0 + 4u);

    cow_fn_102af630(g, sp0, param);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
