/* f_0x1000d660 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   returns 1 if the dword at [self+0x18] is non-zero, else 0 (in al, upper bits of eax preserved from the load).

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_1000d660(Guest* g, uint32_t self)
{
    (void)g;
    uint32_t eax = rd32(self + 0x18u);
    /* test eax, eax sets ZF based on eax == 0 */
    uint32_t zf = (eax == 0u) ? 1u : 0u;
    /* setne al: al = !zf ? 1 : 0, upper bits of eax unchanged */
    eax = (eax & 0xFFFFFF00u) | (uint8_t)((!zf) ? 1u : 0u);
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1000d660(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_1000d660(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);   /* bare ret */
}
/* COW_ADAPTER END */
