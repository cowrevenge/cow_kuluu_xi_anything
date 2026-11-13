/* f_0x100e79f0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns the zero-extended byte at offset 0xD1 from the pointer passed as the first stack argument, preserving the upper 16 bits of EAX.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_100e79f0(Guest* g, uint32_t param_1)
{
    (void)g;
    /* mov eax, [esp+4] -> eax = param_1 */
    /* movzx ax, byte ptr [eax + 0xd1] -> lower 16 bits of eax become zero-extended byte at param_1+0xD1, upper 16 bits preserved from previous eax (which was param_1) */
    uint32_t val = rd8(param_1 + 0xD1u);
    return (param_1 & 0xFFFF0000u) | (uint16_t)val;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e79f0(Guest* g)
{
    const uint32_t sp0 = g->esp;      /* [sp0] is the return address; stack argument i is rd32(sp0 + 4 + 4*i) */
    const uint32_t param_1 = rd32(sp0 + 4u);
    const uint32_t result = cow_fn_100e79f0(g, param_1);
    g->esp = sp0;
    rt_return(g, result, 0u);   /* ret */
}
/* COW_ADAPTER END */
