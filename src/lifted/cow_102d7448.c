/* f_0x102d7448 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   calls FUN_102e7670(1), then tail-jumps to the function pointer stored at 0x103cc458.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_102d7448(Guest* g, uint32_t sp0)
{
    cow_stdcall(g, COW_IMG(0x102e7670u), 1u, 1u);

    const uint32_t target = rd32(COW_IMG(0x103cc458u));

    /*
     * The original ends with a tail jmp to an import slot.  The observed
     * caller-visible stack pointer is sp0 + 0x10, i.e. the tail callee's
     * ret popped 12 argument bytes in addition to its return address.
     *
     * Call the target as a stdcall function with the three stack words that
     * are already present for the tail callee.
     */
    cow_stdcall(g, target, 3u,
                rd32(sp0 + 4u),
                rd32(sp0 + 8u),
                rd32(sp0 + 12u));
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102d7448(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102d7448(g, sp0);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);   /* tail callee pops 12 argument bytes */
}
/* COW_ADAPTER END */
