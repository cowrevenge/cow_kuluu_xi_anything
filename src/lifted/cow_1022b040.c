/* f_0x1022b040 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls a helper with the stack argument and a local copy of ecx, then calls another helper with the possibly modified local and stack argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1022b040(Guest* g, uint32_t self, uint32_t arg0, uint32_t sp0)
{
    const uint32_t local = cow_frame(g, sp0, 4u);
    const uint32_t arg_addr = sp0 + 4u;

    wr32(local, self);

    g->esp = local - 4u;
    cow_cdecl(g, COW_IMG(0x1022afb0u), 3u, arg0, local, arg_addr);

    const uint32_t local_val = rd32(local);
    const uint32_t arg_val = rd32(arg_addr);

    g->esp = local - 4u;
    cow_cdecl(g, COW_IMG(0x10097f10u), 2u, local_val, arg_val);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1022b040(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg0 = rd32(sp0 + 4u);

    cow_fn_1022b040(g, self, arg0, sp0);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
