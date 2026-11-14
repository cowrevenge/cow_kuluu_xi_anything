/* f_0x100155d0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns the dword stored at 0x104568FC with its low byte replaced by the byte at [dword + 0xB].

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_100155d0(Guest* g)
{
    (void)g;

    uint32_t eax = rd32(COW_IMG(0x104568FCu));
    eax = (eax & 0xFFFFFF00u) | (uint32_t)(uint8_t)rd8((uint32_t)(eax + 0xBu));

    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100155d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_100155d0(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
