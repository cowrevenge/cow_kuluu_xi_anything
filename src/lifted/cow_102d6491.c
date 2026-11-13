/* f_0x102d6491 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   forwards a call with a constant 1 to 0x102e7670, then tail-calls the imported function at 0x103cc424 with this function's three stack arguments.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_102d6491(Guest* g, uint32_t sp0)
{
    /* 102d6491: push 1
       102d6493: call 0x102e7670

       The callee is stdcall and pops its single argument (ret 4). */
    cow_stdcall(g, COW_IMG(0x102e7670u), 1u, 1u);

    /* 102d6498: jmp dword ptr [0x103cc424]

       This is a tail call.  The target is reached through an import slot and
       is a stdcall Windows API function taking three stack arguments
       (ret 12). */
    const uint32_t target = rd32(COW_IMG(0x103cc424u));

    const uint32_t a0 = rd32(sp0 + 4u);
    const uint32_t a1 = rd32(sp0 + 8u);
    const uint32_t a2 = rd32(sp0 + 12u);

    return cow_stdcall(g, target, 3u, a0, a1, a2);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102d6491(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_102d6491(g, sp0);
    g->esp = sp0;
    rt_return(g, result, 12u);   /* the tail callee pops 12 argument bytes */
}
/* COW_ADAPTER END */
