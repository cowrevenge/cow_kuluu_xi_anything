/* f_0x101d29a0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Copies up to 0x40 bytes from the caller-supplied string into the global buffer at 0x10663190 using _strncpy, then clears the byte at 0x106631cf.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_101d29a0(Guest* g, uint32_t param_1)
{
    cow_cdecl(g, COW_IMG(0x10312090u), 3u, COW_IMG(0x10663190u), param_1, 0x40u);
    wr8(COW_IMG(0x106631CFu), 0u);
    g->edx = g->edx;
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d29a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param_1 = rd32(sp0 + 4u);
    const uint32_t result = cow_fn_101d29a0(g, param_1);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
