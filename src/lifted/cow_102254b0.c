/* f_0x102254b0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Copies a dword and a word from the structure pointed to by the stack argument into two globals, leaving eax as that pointer and edx's low word as the copied word.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_102254b0(Guest* g, uint32_t param)
{
    wr32(COW_IMG(0x10667168u), rd32(param + 4u));

    const uint16_t w = (uint16_t)rd16(param + 8u);
    g->edx = (g->edx & 0xFFFF0000u) | (uint32_t)w;
    wr16(COW_IMG(0x1066716cu), w);

    return param;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102254b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd32(sp0 + 4u);
    const uint32_t result = cow_fn_102254b0(g, param);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
