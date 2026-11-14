/* f_0x100e61d0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns a pointer derived from a global object if a byte at offset 0x2cf53 is nonzero, otherwise zero.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100e61d0(Guest* g)
{
    (void)g;

    uint32_t eax = rd32(COW_IMG(0x104DFD98u));
    if (eax == 0u)
    {
        return 0u;
    }

    uint8_t cl = rd8(eax + 0x2CF53u);
    if (cl == 0u)
    {
        return 0u;
    }

    return eax + 0x2CF4Bu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e61d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_100e61d0(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
