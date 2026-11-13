/* f_0x10258d10 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   tail-calls 0x10257860 with ecx set to the global object at 0x10669444, preserving the incoming edx value into the callee.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10258d10(Guest* g)
{
    const uint32_t self = COW_IMG(0x10669444u);
    const uint32_t edx_entry = g->edx;

    /*
       The original is:
         mov ecx, 0x10669444
         jmp 0x10257860

       This is a tail call.  ecx is forced to the global object, while edx is whatever
       the caller had on entry.  The callee at 0x10257860 may read edx if it is a
       fastcall/thiscall-style routine, and may clobber it; we must pass the original
       edx through unchanged before the jump so that, if the callee preserves edx,
       the caller observes the same edx value as the original guest code.
    */
    return cow_fastcall(g, COW_IMG(0x10257860u), self, edx_entry, 0u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10258d10(Guest* g)
{
    const uint32_t sp0 = g->esp;

    uint32_t result = cow_fn_10258d10(g);

    g->esp = sp0;
    rt_return(g, result, 0u);   /* the target thunk returns without popping stack args */
}
/* COW_ADAPTER END */
