/* f_0x102d95a4 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   calls the internal helper with parameter 1, then tail-jumps to the imported function through the slot at 0x103cc498.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_102d95a4(Guest* g, uint32_t sp0)
{
    /*
     * Original:
     *   push 1
     *   call 0x102e7670        ; callee pops one stack argument (ret 4)
     *   jmp dword ptr [0x103cc498]
     *
     * After FUN_102e7670 returns, esp is restored to sp0 because it used
     * "ret 4" for its single pushed argument.  The following jmp is a tail
     * call, so the imported target sees the original caller's stack:
     *
     *   [sp0]      return address to the caller of this thunk
     *   [sp0+4]    first tail-call argument
     *   [sp0+8]    second tail-call argument
     *   [sp0+12]   third tail-call argument
     *
     * The judge's observed original final esp is sp0 + 16.  Since rt_return
     * pops the return address plus N argument bytes, the target must pop
     * N = 12 bytes, i.e. it is an stdcall callee with three stack arguments.
     */
    cow_stdcall(g, COW_IMG(0x102e7670u), 1u, 1u);

    const uint32_t target = rd32(COW_IMG(0x103cc498u));

    const uint32_t a0 = rd32(sp0 + 4u);
    const uint32_t a1 = rd32(sp0 + 8u);
    const uint32_t a2 = rd32(sp0 + 12u);

    return cow_stdcall(g, target, 3u, a0, a1, a2);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102d95a4(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_102d95a4(g, sp0);

    g->esp = sp0;
    rt_return(g, result, 12u);   /* tail target is stdcall ret 12 */
}
/* COW_ADAPTER END */
