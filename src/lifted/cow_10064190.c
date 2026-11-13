/* f_0x10064190 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls the base initializer on the object in ecx, clears its vtable/pointer fields, and returns the object pointer.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10064190(Guest* g, uint32_t self)
{
    const uint32_t saved_esi = g->esi;

    /* Original: push esi; mov esi, ecx; call 0x1006ba20 */
    /* The callee receives this in ecx and has no stack arguments. */
    cow_thiscall_cdecl(g, COW_IMG(0x1006ba20u), self, 0u);

    /* Original: pop esi restores the caller's esi. */
    g->esi = saved_esi;

    /* Original: xor eax, eax; then stores zero to +0x18 and +0x10. */
    wr32(self + 0xcu, COW_IMG(0x10353994u));
    wr32(self + 0x18u, 0u);
    wr32(self + 0x10u, 0u);

    /* Original: mov eax, esi */
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10064190(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    const uint32_t result = cow_fn_10064190(g, self);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
