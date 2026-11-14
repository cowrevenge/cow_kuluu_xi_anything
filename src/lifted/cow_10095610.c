/* f_0x10095610 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_10193850 with (0xb2, ecx), patches the low byte of the saved ecx stack slot with the result's low byte, then calls FUN_100fd680 with that patched dword.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10095610(Guest* g, uint32_t self, uint32_t sp0)
{
    /* Original stack after the two pushes:
       [esp]     = 0xb2
       [esp + 4] = ecx
       esp = sp0 - 8
    */
    const uint32_t ecx_slot = sp0 - 4u;

    /* Preserve the original stack layout for the first call. */
    g->esp = sp0 - 8u;
    wr32(g->esp, 0xB2u);
    wr32(ecx_slot, self);

    /* call 0x10193850
       Last pushed is 0xb2, so source-order arguments are (0xb2, ecx).
       The callee ends in a bare ret, so the caller pops the arguments.
    */
    const uint32_t r1 = cow_cdecl(g, COW_IMG(0x10193850u), 2u, 0xB2u, self);

    /* After the bare ret, esp is again sp0 - 8.
       mov byte ptr [esp + 4], al
       mov eax, dword ptr [esp + 4]
    */
    wr8(ecx_slot, (uint8_t)(r1 & 0xFFu));
    const uint32_t eax = rd32(ecx_slot);

    /* push eax
       call 0x100fd680
       add esp, 0xc
       ret
    */
    g->esp = sp0 - 12u;
    wr32(g->esp, eax);

    cow_cdecl(g, COW_IMG(0x100fd680u), 1u, eax);

    /* The original then adds esp, 0xc and returns.  The adapter restores esp. */
    g->esp = sp0;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10095610(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    cow_fn_10095610(g, self, sp0);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
