/* f_0x1015e830 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_1015e7e0(0) with this in ecx, then calls FUN_1015db80 with this in ecx and the previous result plus 0 as stack arguments, returning eax from the second call.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1015e830(Guest* g, uint32_t self)
{
    uint32_t r;

    /* 1015e835: call 0x1015e7e0
       ecx is still self from entry; one stack argument 0; callee returns bare ret. */
    r = cow_thiscall_cdecl(g, COW_IMG(0x1015e7e0u), self, 1u, 0u);

    /* 1015e83d: call 0x1015db80
       ecx = self; stack arguments are eax from the first call and 0.
       Callee pops 8 bytes (two stack words). */
    cow_thiscall(g, COW_IMG(0x1015db80u), self, 2u, r, 0u);

    /* Original returns whatever eax is after FUN_1015db80. */
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1015e830(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t result = cow_fn_1015e830(g, self);

    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
