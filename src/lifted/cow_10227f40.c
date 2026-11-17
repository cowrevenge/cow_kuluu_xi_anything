/* f_0x10227f40 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   Calls a helper with the object pointer, then, if the object byte at +0x65 is less than 2, calls another helper with a table-selected argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10227f40(Guest* g, uint32_t self)
{
    /*
     * The original does:
     *   push esi
     *   mov  esi, ecx
     *   call 0x10227f10
     *   mov  al, byte ptr [esi + 0x65]
     *   pop  esi
     *
     * esi is only scratch here and is restored by the pop before any externally
     * observable state is used.  The first call is made with ecx still equal to
     * the incoming self pointer.
     */
    cow_thiscall_cdecl(g, COW_IMG(0x10227f10u), self, 0u);

    const uint32_t b = rd8(self + 0x65u);

    /*
     * cmp al, 2 / jae: unsigned compare of the low byte only.
     * The original then does and eax, 0xff, so the table index is the zero-extended
     * byte value.
     */
    if (b < 2u)
    {
        /*
         * mov ecx, dword ptr [0x106671b4]
         *
         * This changes ecx before the second call.  The second call is a stdcall
         * taking one stack argument, so ecx is not an argument to it, but the
         * original leaves that value in ecx across the call boundary.  Preserve it
         * in the guest register file.
         */
        g->ecx = rd32(COW_IMG(0x106671b4u));

        const uint32_t arg = rd32(COW_IMG(0x1033c204u) + b * 4u);

        /*
         * push eax
         * call 0x10227280
         *
         * The callee ends in ret 4, so it pops its own one stack argument.
         */
        cow_stdcall(g, COW_IMG(0x10227280u), 1u, arg);
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10227f40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    cow_fn_10227f40(g, self);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
