/* f_0x100e6370 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Clears the low bit of the 32-bit word at (sign-extended short argument << 8) + global base + 0xb8c, returning that address.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_100e6370(Guest* g, uint32_t param)
{
    uint32_t eax = (uint32_t)(int32_t)(int16_t)param;
    uint32_t ecx = rd32(COW_IMG(0x104df770u));

    eax = (uint32_t)(eax << 8);
    eax = (uint32_t)(eax + ecx + 0xb8cu);

    uint32_t value = rd32(eax);
    wr32(eax, (uint32_t)(value & 0xfffffffeu));

    (void)g;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e6370(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd16(sp0 + 4u);
    const uint32_t result = cow_fn_100e6370(g, param);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
