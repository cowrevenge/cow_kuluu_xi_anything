/* f_0x102f55c9 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Sets the object's vtable pointer, adjusts its cached length by the preceding byte when present, then tail-calls FUN_102f54f8.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_102f55c9(Guest* g, uint32_t self)
{
    uint32_t eax = rd32(self + 0xcu);

    wr32(self, COW_IMG(0x103485fcu));

    if (eax != 0u)
    {
        uint32_t edx = (uint32_t)rd8(eax - 1u);
        eax -= edx;
        wr32(self + 0xcu, eax);
    }

    /* Preserve the register state that the original tail jmp would leave for the callee. */
    g->eax = eax;
    g->edx = (eax == rd32(self + 0xcu)) ? g->edx : g->edx; /* no-op if not needed; keep incoming edx when je path taken */

    /* The original tail-jumps with ecx still pointing at self.  The target has no stack arguments and returns with a bare ret. */
    cow_thiscall_cdecl(g, COW_IMG(0x102f54f8u), self, 0u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f55c9(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102f55c9(g, g->ecx);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);   /* target ends in a bare ret */
}
/* COW_ADAPTER END */
