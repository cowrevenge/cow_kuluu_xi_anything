/* f_0x102da767 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls a helper with this/self, conditionally calls a second helper with self as a stack argument, and returns self.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102da767(Guest* g, uint32_t self, uint32_t stack_arg, uint32_t sp0)
{
    const uint32_t saved_esi = g->esi;

    /* push esi; mov esi, ecx */
    g->esi = self;
    wr32(sp0 - 4u, saved_esi);

    /* call 0x102e7958
     * Original stack at the call:
     *   esp = sp0 - 4 after push esi
     *   call pushes return address, so callee sees esp = sp0 - 8
     * The callee has no stack arguments and ends with a bare ret, so the caller pops.
     * It is called with ecx = self (thiscall-style, caller pops).
     */
    g->esp = sp0 - 4u;
    cow_thiscall_cdecl(g, COW_IMG(0x102e7958u), self, 0);

    /* test byte ptr [esp + 8], 1
     * After the first call, esp is sp0 - 4, so [esp + 8] is the original stack argument.
     */
    if ((stack_arg & 1u) != 0u)
    {
        /* push esi; call 0x10311bf0; pop ecx
         * Original stack at the call:
         *   esp = sp0 - 4 before push esi
         *   push esi writes self at sp0 - 8
         *   call pushes return address at sp0 - 12
         * The callee has one stack argument and ends with a bare ret, so the caller pops 4 bytes.
         */
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x10311bf0u), 1u, self);

        /* pop ecx: ecx becomes self, but ecx is scratch and not compared. */
        g->ecx = self;
    }

    /* mov eax, esi; pop esi */
    g->esi = saved_esi;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102da767(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t stack_arg = rd32(sp0 + 4u);

    const uint32_t result = cow_fn_102da767(g, self, stack_arg, sp0);

    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
