/* f_0x100ab810 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Sets the object's vtable pointer, calls a subobject cleanup routine, then tail-calls the object's final cleanup routine.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100ab810(Guest* g, uint32_t self)
{
    const uint32_t sp0 = g->esp;

    /* push esi / mov esi, ecx */
    (void)sp0;

    /* mov dword ptr [esi], 0x1032f4f0 */
    wr32(self, COW_IMG(0x1032F4F0u));

    /* lea ecx, [esi + 0xa0c] ; call 0x1008a7b0 */
    cow_thiscall(g, COW_IMG(0x1008A7B0u), self + 0xA0Cu, 0u);

    /* mov ecx, esi ; pop esi ; jmp 0x100c5c00 */
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x100C5C00u), self, 0u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ab810(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    cow_fn_100ab810(g, self);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
