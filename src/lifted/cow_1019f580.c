/* f_0x1019f580 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Loads a subobject pointer from [this+8], calls FUN_10118db0 on it with arguments (4,0), then tail-calls FUN_101186a0 with that subobject pointer in ecx.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_1019f580(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t entry_esi = g->esi;
    const uint32_t self = rd32(g->ecx + 8u);

    /* Emulate: push esi */
    g->esp = sp0 - 4u;
    wr32(g->esp, entry_esi);

    /* Emulate: mov esi, [ecx+8]; mov ecx, esi; call 0x10118db0 */
    /* The callee is __thiscall/stdcall and pops its two stack arguments. */
    cow_thiscall(g, COW_IMG(0x10118db0u), self, 2u, 4u, 0u);

    /* Emulate: mov ecx, esi; pop esi */
    g->ecx = self;
    g->esi = rd32(g->esp);
    g->esp += 4u;

    /* Emulate: jmp 0x101186a0 */
    /* The target is called with ecx = self and no stack arguments; it uses a bare ret. */
    g->esp = sp0;
    g->ecx = self;
    const uint32_t result = cow_cdecl(g, COW_IMG(0x101186a0u), 0u);

    g->esp = sp0;
    g->esi = entry_esi;
    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1019f580(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_1019f580(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
