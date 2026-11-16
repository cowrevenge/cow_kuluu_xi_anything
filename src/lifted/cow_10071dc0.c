/* f_0x10071dc0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_10071de0 with the object pointer, then conditionally calls thunk_FUN_10028aa0 with the same pointer when the low bit of the stack argument is set, returning the object pointer in eax.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_10071dc0(Guest* g, uint32_t self, uint32_t arg)
{
    const uint32_t sp0 = g->esp;

    /* push esi; mov esi, ecx */
    g->esp = sp0 - 4u;
    wr32(g->esp, g->esi);
    const uint32_t esi = self;

    /* call 0x10071de0 */
    cow_thiscall_cdecl(g, COW_IMG(0x10071de0u), esi, 0u);

    /* test byte ptr [esp + 8], 1 ; je */
    if ((rd8(sp0 + 4u) & 1u) != 0u)
    {
        /* push esi; call 0x10028710; add esp, 4 */
        cow_cdecl(g, COW_IMG(0x10028710u), 1u, esi);
    }

    /* mov eax, esi; pop esi */
    g->esp = sp0 - 4u;
    g->esi = rd32(g->esp);

    /* edx is whatever the last executed call left there; helpers update g->edx. */
    return esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10071dc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10071dc0(g, g->ecx, rd32(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
