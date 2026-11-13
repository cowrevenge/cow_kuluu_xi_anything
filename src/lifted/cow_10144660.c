/* f_0x10144660 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   returns the byte at offset 0x10370280 from the pointer passed as the first stack argument, zero-extended in eax (upper bits cleared).

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_10144660(Guest* g, uint32_t param)
{
    (void)g;
    /* xor eax, eax clears all of eax; then mov al loads the byte, leaving upper bits zero. */
    return (uint32_t)rd8(param + 0x10370280u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10144660(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd32(sp0 + 4u);
    const uint32_t result = cow_fn_10144660(g, param);
    g->esp = sp0;
    rt_return(g, result, 0u);   /* bare ret */
}
/* COW_ADAPTER END */
