/* f_0x102912f0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Tail-calls the function pointer stored at offset 0x3c of the argument, passing that argument as the sole stack parameter.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102912f0(Guest* g, uint32_t self, uint32_t sp0)
{
    const uint32_t fn = rd32(self + 0x3cu);
    if (fn == 0u)
        return;

    /* Original: mov dword ptr [esp + 4], ecx */
    wr32(sp0 + 4u, self);

    /* Original leaves ecx = self before the indirect jump. */
    g->ecx = self;

    /* Original: jmp eax (treated as an indirect call by the recompiler). */
    cow_cdecl(g, fn, 1u, self);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102912f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg = rd32(sp0 + 4u);

    cow_fn_102912f0(g, arg, sp0);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
