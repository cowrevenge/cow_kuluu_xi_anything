/* f_0x10099250 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   returns 0x104859c4 when bit 0x20 of the byte at 0x10485824 is set, otherwise 0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10099250(Guest* g)
{
    (void)g;

    /* mov al, byte ptr [0x10485824]; and al, 0x20 */
    const uint32_t al = (uint32_t)rd8(COW_IMG(0x10485824u)) & 0x20u;

    /* neg al sets CF iff al != 0; sbb eax, eax then yields 0xFFFFFFFF if CF=1, else 0 */
    const uint32_t cf = (al != 0u) ? 1u : 0u;
    const uint32_t eax = (uint32_t)(0u - cf);

    /* and eax, 0x104859c4 */
    return eax & COW_IMG(0x104859c4u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10099250(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10099250(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
