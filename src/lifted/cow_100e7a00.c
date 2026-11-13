/* f_0x100e7a00 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   returns the zero-extended byte at offset 0xD2 of the structure pointed to by the stack argument, preserving the upper 16 bits of eax.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_100e7a00(Guest* g, uint32_t param)
{
    (void)g;
    /* mov eax, [esp+4] -> eax = param */
    /* movzx ax, byte ptr [eax + 0xd2] -> low 16 bits of eax become zero-extended byte, upper 16 bits preserved from previous eax (= param) */
    uint32_t val = rd8(param + 0xD2u);
    return (param & 0xFFFF0000u) | (uint16_t)val;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e7a00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_100e7a00(g, rd32(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 0u);   /* bare ret */
}
/* COW_ADAPTER END */
