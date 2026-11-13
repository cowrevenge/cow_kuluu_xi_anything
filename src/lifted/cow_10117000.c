/* f_0x10117000 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   Calls FUN_1015e020 with a pointer to a stack slot initialized to ecx+0x30, then restores ecx from that slot.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10117000(Guest* g, uint32_t self, uint32_t sp0)
{
    /* push ecx creates a local slot at [sp0 - 4].
       mov dword ptr [esp], ecx stores self + 0x30 there.
       lea eax, [esp] makes eax point to that slot.
       push eax passes that pointer as the one stack argument. */
    const uint32_t slot = cow_frame(g, sp0, 4u);

    wr32(slot, self + 0x30u);

    /* The call instruction leaves eax pointing at the local slot.
       Preserve that value before invoking the callee so that, if the callee
       does not modify eax, the caller returns the original lea result. */
    g->eax = slot;

    /* Before the call, esp points at the pushed argument (slot).
       The callee is thiscall/stdcall-like: ecx is the global object and it
       pops one stack argument with ret 4. */
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x1015e020u), COW_IMG(0x10621838u), 1u, slot);

    /* pop ecx reloads the local slot, which the callee may have modified. */
    g->ecx = rd32(slot);

    /* ret uses eax and edx as left by the callee / original instructions. */
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10117000(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t eax = cow_fn_10117000(g, g->ecx, sp0);
    g->esp = sp0;
    rt_return(g, eax, 0u);
}
/* COW_ADAPTER END */
