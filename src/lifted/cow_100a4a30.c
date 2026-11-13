/* f_0x100a4a30 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Stores (first stack byte == 1) at [second stack dword + ecx + 0x83c], preserving eax's upper bits and setting edx to the second stack dword.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_100a4a30(Guest* g, uint32_t self, uint32_t arg0, uint32_t arg1)
{
    uint32_t eax = g->eax;
    uint8_t al = (uint8_t)arg0;
    uint8_t stored = (al == 1u) ? 1u : 0u;

    eax = (eax & 0xFFFFFF00u) | (uint32_t)stored;
    g->edx = arg1;
    wr8((uint32_t)(arg1 + self + 0x83Cu), stored);
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a4a30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_100a4a30(g, g->ecx, rd8(sp0 + 4u), rd32(sp0 + 8u));
    g->esp = sp0;
    rt_return(g, result, 8u);
}
/* COW_ADAPTER END */
