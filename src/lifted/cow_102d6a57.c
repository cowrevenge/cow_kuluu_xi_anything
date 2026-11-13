/* f_0x102d6a57 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   Calls the program helper with the value 1, then tail-calls the imported function stored at [0x103cc430].

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_102d6a57(Guest* g, uint32_t sp0)
{
    /*
       102d6a57: push 1
       102d6a59: call 0x102e7670

       The callee is stdcall and ends in ret 4, so it pops its one argument
       word.  This leaves esp equal to sp0 again before the tail jump.
    */
    cow_stdcall(g, COW_IMG(0x102e7670u), 1, 1u);

    /*
       102d6a5e: jmp dword ptr [0x103cc430]

       Tail-call through the import slot.  The original leaves esp such that
       the target's ret pops 12 bytes total: 4 for the return address and 8
       for the target's argument words.  Therefore pass the two stack words
       that are present at [esp+4] and [esp+8] as its stdcall arguments.
    */
    const uint32_t target = rd32(COW_IMG(0x103cc430u));

    cow_stdcall(g, target, 2, rd32(sp0 + 4u), rd32(sp0 + 8u));

    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102d6a57(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_102d6a57(g, sp0);

    g->esp = sp0;
    rt_return(g, result, 8u);
}
/* COW_ADAPTER END */
