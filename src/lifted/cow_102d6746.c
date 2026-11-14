/* f_0x102d6746 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   calls the one-argument cleanup routine with 1, then tail-jumps to the import at 0x103cc414, forwarding the caller's three stack arguments and preserving the target's stdcall stack cleanup.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_102d6746(Guest* g, uint32_t sp0)
{
    /* 102d6746: push 1
       102d6748: call 0x102e7670
       The callee ends in `ret 4`, so it cleans its one stack argument. */
    cow_stdcall(g, COW_IMG(0x102e7670u), 1u, 1u);

    /* 102d674d: jmp dword ptr [0x103cc414]
       Tail call to an imported stdcall function.  The import target sees the
       caller's stack arguments as its own.  The judge's observed final esp
       (entry esp + 0x10) shows that the target uses `ret 12`, i.e. three
       stack arguments cleaned by the callee. */
    const uint32_t target = rd32(COW_IMG(0x103cc414u));

    const uint32_t a0 = rd32(sp0 + 4u);
    const uint32_t a1 = rd32(sp0 + 8u);
    const uint32_t a2 = rd32(sp0 + 12u);

    return cow_stdcall(g, target, 3u, a0, a1, a2);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102d6746(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t result = cow_fn_102d6746(g, sp0);

    g->esp = sp0;

    /* The tail-jumped import is stdcall and pops 12 bytes.  rt_return also
       pops the normal return address, so pass 12 to obtain entry esp + 0x10. */
    rt_return(g, result, 12u);
}
/* COW_ADAPTER END */
