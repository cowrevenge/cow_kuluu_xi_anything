/* f_0x1022f280 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   returns the 32-bit table entry at index 5 * (signed byte argument), using 32-bit address wrap.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_1022f280(Guest* g, uint32_t param)
{
    (void)g;

    /* movsx eax, byte ptr [esp + 4] */
    const uint32_t b = param & 0xFFu;
    const uint32_t s = (b & 0x80u) ? (b | 0xFFFFFF00u) : b;

    /* lea eax, [eax + eax*4] */
    const uint32_t idx = (uint32_t)(s + s * 4u);

    /* mov eax, dword ptr [eax*4 + 0x10668a58] */
    const uint32_t table = COW_IMG(0x10668a58u);
    const uint32_t addr = (uint32_t)((uint64_t)idx * 4u + table);

    return rd32(addr);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1022f280(Guest* g)
{
    const uint32_t sp0 = g->esp;

    /* Original reads only the low byte of the stack argument. */
    const uint32_t arg0 = rd8(sp0 + 4u);

    const uint32_t result = cow_fn_1022f280(g, arg0);

    g->esp = sp0;
    rt_return(g, result, 0u);   /* bare ret */
}
/* COW_ADAPTER END */
