/* f_0x101f7100 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns the sign-extended word at *(this+8)+0x4c plus the sign-extended word at this+0x1e minus 1, or -1 if *(this+8) is null.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_101f7100(Guest* g, uint32_t self)
{
    const uint32_t p = rd32(self + 8u);

    if (p == 0u)
    {
        /* Original leaves edx unchanged and does not modify ecx on this path. */
        return 0xFFFFFFFFu;
    }

    const uint32_t a = (uint32_t)(int32_t)(int16_t)rd16(p + 0x4Cu);
    const uint32_t c = (uint32_t)(int32_t)(int16_t)rd16(self + 0x1Eu);

    /* Original: movsx ecx, word ptr [ecx + 0x1e] */
    g->ecx = c;

    /* Original: lea eax, [eax + ecx - 1] */
    return (uint32_t)(a + c - 1u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f7100(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_101f7100(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
