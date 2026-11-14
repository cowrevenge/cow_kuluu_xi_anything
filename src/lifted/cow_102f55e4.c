/* f_0x102f55e4 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls a helper on the object, optionally calls a cleanup/free helper when the low bit of the stack argument is set, and returns the object pointer.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_102f55e4(Guest* g, uint32_t sp0, uint32_t self, uint32_t flag)
{
    const uint32_t entry_esi = g->esi;

    /* push esi / mov esi, ecx */
    g->esi = self;
    g->esp = sp0 - 4u;
    wr32(sp0 - 4u, entry_esi);

    /* call 0x102f55c9
     *
     * The call site passes no stack arguments.  ecx is the object pointer at
     * the call site, so use a thiscall-style helper.  The callee has no stack
     * arguments, so the pop convention is immaterial here.
     */
    cow_thiscall(g, COW_IMG(0x102f55c9u), self, 0u);

    /* test byte ptr [esp + 8], 1 / je
     *
     * At this point esp == sp0 - 4, so [esp + 8] is the first stack argument.
     * The original only reads its low byte.
     */
    if ((flag & 1u) != 0u)
    {
        /* push esi / call 0x10311bf0 / pop ecx
         *
         * The callee is cdecl and takes one 4-byte stack argument: esi, which
         * is the object pointer.  cow_cdecl emulates the push/call/pop-args.
         * The original then pops the argument into ecx.
         */
        cow_cdecl(g, COW_IMG(0x10311bf0u), 1u, self);
        g->ecx = self;
    }

    /* mov eax, esi */
    const uint32_t result = self;

    /* pop esi */
    g->esi = entry_esi;

    /* ret 4: esp += 8 from the post-push-esi state, i.e. sp0 + 8.
     * The adapter restores esp and rt_return pops the argument.
     */
    g->esp = sp0;

    /* edx is compared.  Leave whatever the last executed call left in it.
     * If no second call was taken, this is the value left by FUN_102f55c9.
     */
    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f55e4(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t flag = rd8(sp0 + 4u);

    const uint32_t result = cow_fn_102f55e4(g, sp0, self, flag);

    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
