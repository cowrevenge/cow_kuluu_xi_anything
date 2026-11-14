/* f_0x100e7360 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Stores the low byte of the stack argument into global+0x295 and sets bit 0x20 in the byte at global+0x1c4, returning the global pointer.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_100e7360(Guest* g, uint32_t param_1)
{
    uint32_t eax = rd32(COW_IMG(0x104DF770u));

    /* mov cl, byte ptr [esp + 4] */
    g->ecx = (g->ecx & 0xFFFFFF00u) | (uint8_t)param_1;

    /* mov byte ptr [eax + 0x295], cl */
    wr8(eax + 0x295u, (uint8_t)param_1);

    /* mov eax, dword ptr [0x104df770] */
    eax = rd32(COW_IMG(0x104DF770u));

    /* or byte ptr [eax + 0x1c4], 0x20 */
    {
        const uint32_t addr = eax + 0x1C4u;
        wr8(addr, (uint8_t)(rd8(addr) | 0x20u));
    }

    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e7360(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param_1 = rd8(sp0 + 4u);
    const uint32_t result = cow_fn_100e7360(g, param_1);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
