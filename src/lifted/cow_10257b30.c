/* f_0x10257b30 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns 1 if the dword at [self+4] is non-zero, else 0 (zero-extended in eax).

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10257b30(Guest* g, uint32_t self)
{
    (void)g;
    uint32_t val = rd32(self + 4u);
    /* mov eax, [ecx+4] -> eax = val */
    /* test eax, eax -> sets ZF based on val == 0 */
    /* setne al -> al = (val != 0) ? 1 : 0, upper bits of eax preserved from 'mov' */
    uint32_t result = (val & 0xFFFFFF00u) | ((val != 0) ? 1u : 0u);
    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10257b30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10257b30(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);   /* ret */
}
/* COW_ADAPTER END */
