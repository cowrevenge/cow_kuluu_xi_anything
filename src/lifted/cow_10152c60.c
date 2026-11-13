/* f_0x10152c60 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   sets ECX to a fixed global and tail-jumps to 0x10257860, preserving the incoming EDX.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10152c60(Guest* g, uint32_t self)
{
    (void)self;

    const uint32_t target = COW_IMG(0x10257860u);
    const uint32_t arg_ecx = COW_IMG(0x105786A8u);
    const uint32_t entry_edx = g->edx;

    /*
     * Original:
     *   mov ecx, 0x105786a8
     *   jmp 0x10257860
     *
     * This is a tail call to a __fastcall target with one register argument (ECX).
     * EDX is not modified by this function itself, so pass the incoming EDX through
     * unchanged.  The target's behavior determines the final EAX/EDX.
     */
    cow_fastcall(g, target, arg_ecx, entry_edx, 0);

    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10152c60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10152c60(g, g->ecx);

    g->esp = sp0;
    rt_return(g, result, 0);
}
/* COW_ADAPTER END */
