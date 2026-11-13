/* f_0x102912d0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Tail-calls the function pointer stored at self+0x38, passing self as the sole stack argument; if the pointer is null it returns immediately.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_102912d0(Guest* g, uint32_t self)
{
    const uint32_t fn = rd32(self + 0x38u);

    if (fn == 0u)
    {
        /* Original: test eax,eax / je ret leaves eax = 0 and does not modify edx. */
        return 0u;
    }

    /* Original: mov dword ptr [esp + 4], ecx */
    wr32(g->esp + 4u, self);

    /* Original: jmp eax
       This is a tail call with one stack argument already in place.
       The callee's return value is observed in eax, and edx is also compared. */
    cow_cdecl(g, fn, 1u, self);

    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102912d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = rd32(sp0 + 4u);

    const uint32_t result = cow_fn_102912d0(g, self);

    g->esp = sp0;
    rt_return(g, result, 0u);   /* bare ret */
}
/* COW_ADAPTER END */
