/* f_0x1018c180 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   stores the incoming ecx value into the caller-supplied pointer after two helper calls may modify it.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1018c180(Guest* g, uint32_t self, uint32_t sp0)
{
    const uint32_t buf = cow_frame(g, sp0, 4u);

    wr32(buf, self);

    cow_thiscall_cdecl(g, COW_IMG(0x1018bbb0u), buf, 0u);

    const uint32_t eax = rd32(COW_IMG(0x1065cb1cu));
    cow_thiscall(g, COW_IMG(0x1018bc40u), buf, 1u, eax);

    const uint32_t dst = rd32(sp0 + 4u);
    const uint32_t val = rd32(buf);
    wr32(dst, val);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018c180(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    cow_fn_1018c180(g, self, sp0);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
