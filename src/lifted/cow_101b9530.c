/* f_0x101b9530 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Releases the semaphore at self+4 and returns 1 on success, -1 on failure.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_101b9530(Guest* g, uint32_t self)
{
    const uint32_t hSemaphore = rd32(self + 4u);
    const uint32_t target = rd32(COW_IMG(0x103291d8u));

    const uint32_t ret = cow_stdcall(g, target, 3u, hSemaphore, 1u, 0u);

    /*
       neg eax
       sbb eax, eax
       and eax, 2
       dec eax

       If eax after the call is zero:
         neg -> 0, CF=0; sbb -> 0; and -> 0; dec -> -1
       If eax after the call is nonzero:
         neg -> nonzero, CF=1; sbb -> -1; and -> 2; dec -> 1
    */
    return (ret != 0u) ? 1u : 0xFFFFFFFFu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101b9530(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_101b9530(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
