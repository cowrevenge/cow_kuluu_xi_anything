/* f_0x102e5574 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls a thunk on the object, then conditionally calls a cleanup function when the low bit of the stack argument is set, returning the object pointer in eax.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_102e5574(Guest* g, uint32_t sp0, uint32_t self)
{
    const uint32_t saved_esi = g->esi;

    g->esi = self;

    /* 102e5577: call 0x102e5590
     * Original has ecx = self and no stack arguments at this call.
     * The callee is a thunk; use thiscall with zero stack arguments.
     */
    cow_thiscall(g, COW_IMG(0x102e5590u), self, 0u);

    /* 102e557c: test byte ptr [esp + 8], 1
     * After the first call, esp is still sp0 - 4 because of the initial push esi.
     * [esp + 8] is therefore the caller's single stack argument at sp0 + 4.
     */
    if ((rd8(sp0 + 4u) & 1u) != 0u)
    {
        /* 102e5583: push esi
         * 102e5584: call 0x10311bf0
         * 102e5589: pop ecx
         *
         * The callee is cdecl and receives one stack argument, the current esi.
         * The caller pops it, which cow_cdecl models.  The pop ecx is not
         * observable after this point, but set ecx to match the original.
         */
        cow_cdecl(g, COW_IMG(0x10311bf0u), 1u, g->esi);
        g->ecx = g->esi;
    }

    /* 102e558a: mov eax, esi */
    const uint32_t result = g->esi;

    /* 102e558c: pop esi */
    g->esi = saved_esi;

    /* edx is compared by the judge.  It is whatever the last executed call
     * left there; the helpers have already updated g->edx.
     */
    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e5574(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    const uint32_t result = cow_fn_102e5574(g, sp0, self);

    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
