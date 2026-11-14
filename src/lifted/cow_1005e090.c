/* f_0x1005e090 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls two thiscall helpers on the object, passing the two stack arguments in order.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1005e090(Guest* g, uint32_t self, uint32_t arg1, uint32_t arg2, uint32_t sp0)
{
    const uint32_t saved_esi = g->esi;

    /* Original: mov eax, [esp+4]; push esi; push eax; mov esi, ecx; call ... */
    g->eax = arg1;
    g->esi = self;
    cow_thiscall(g, COW_IMG(0x1003b7b0u), self, 1u, arg1);

    /* Original: mov ecx, [esp+0xc]; push ecx; mov ecx, esi; call ... */
    /* After the first call, esp is sp0-4, so [esp+0xc] is the original second stack argument. */
    arg2 = rd32(sp0 + 8u);
    cow_thiscall(g, COW_IMG(0x1003b830u), g->esi, 1u, arg2);

    /* Original: pop esi */
    g->esi = saved_esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1005e090(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(sp0 + 4u);
    const uint32_t arg2 = rd32(sp0 + 8u);

    cow_fn_1005e090(g, self, arg1, arg2, sp0);

    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
