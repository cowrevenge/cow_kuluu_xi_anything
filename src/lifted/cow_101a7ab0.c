/* f_0x101a7ab0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_100dc120, subtracts a global from its EAX result, and returns that value with AL set to 1 iff the difference is unsigned greater than 900.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_101a7ab0(Guest* g)
{
    cow_cdecl(g, COW_IMG(0x100dc120u), 0);

    uint32_t eax = g->eax;
    uint32_t edx = g->edx;

    eax -= rd32(COW_IMG(0x106627E0u));

    /* seta al: unsigned above (CF=0 and ZF=0), preserving the upper 31 bits of EAX */
    eax = (eax & 0xFFFFFF00u) | ((eax > 0x384u) ? 1u : 0u);

    g->eax = eax;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a7ab0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_101a7ab0(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
