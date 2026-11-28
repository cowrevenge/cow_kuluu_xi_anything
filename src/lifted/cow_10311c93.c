/* f_0x10311c93 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Stores the x87 status word to a local buffer, passes it (as a dword with upper bits from saved ecx) to FUN_10311e4b via cdecl, then restores ecx from that same value.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10311c93(Guest* g, uint32_t sp0)
{
    const uint32_t buf = cow_frame(g, sp0, 4u);
    uint16_t sw = cow_fsw(g, 0.0, 0.0, 0u);
    wr16(buf, sw);
    uint32_t arg = rd32(buf);
    cow_cdecl(g, COW_IMG(0x10311e4bu), 1u, arg);
    g->ecx = arg;
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10311c93(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10311c93(g, sp0);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
