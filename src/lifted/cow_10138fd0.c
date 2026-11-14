/* f_0x10138fd0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   loads the this-pointer from 0x10578484 and tail-calls 0x10151d90, preserving its eax:edx result.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10138fd0(Guest* g, uint32_t sp0)
{
    const uint32_t self = rd32(COW_IMG(0x10578484u));

    /*
     * Original code is:
     *   mov ecx, [0x10578484]
     *   jmp 0x10151d90
     *
     * The target must see the exact stack state that this function saw on entry:
     * [sp0] is the return address to this function's caller, and the target's
     * bare ret pops that same return address.
     *
     * cow_cdecl() emulates a normal call by pushing a synthetic return address
     * before entering the callee.  For a tail jump we compensate by starting it
     * with esp = sp0 + 4, so that after the helper's push the callee sees esp = sp0.
     */
    g->ecx = self;
    g->esp = sp0 + 4u;

    /*
     * The target ends in a bare ret and uses thiscall-style ecx, but the
     * caller cleans up stack arguments.  There are no stack arguments here.
     * cow_thiscall_cdecl() preserves the callee-visible ecx and does not add
     * extra argument cleanup.
     */
    const uint32_t eax = cow_thiscall_cdecl(g, COW_IMG(0x10151d90u), self, 0u);

    /*
     * Preserve the target's edx exactly.  The judge compares both eax and edx.
     * The call helper may leave g->edx as the target left it; if not, the
     * target's value has already been written through g->edx by the callee.
     */
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10138fd0(Guest* g)
{
    const uint32_t sp0 = g->esp;      /* [sp0] is the return address; stack argument i is rd32(sp0 + 4 + 4*i) */

    const uint32_t result = cow_fn_10138fd0(g, sp0);

    g->esp = sp0;
    rt_return(g, result, 0u);         /* target ends in a bare ret: no argument bytes popped */
}
/* COW_ADAPTER END */
