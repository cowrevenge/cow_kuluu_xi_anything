/* f_0x100e6350 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Sets bit 0 of the 32-bit word at (sign-extended short argument << 8) + global base + 0xb8c and returns that address.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100e6350(Guest* g, uint32_t param)
{
    (void)g;

    /* movsx eax, word ptr [esp + 4] */
    uint32_t low = param & 0xFFFFu;
    uint32_t eax = (low & 0x8000u) ? (low | 0xFFFF0000u) : low;

    /* shl eax, 8 */
    eax <<= 8;

    /* mov ecx, dword ptr [0x104df770] */
    uint32_t ecx = rd32(COW_IMG(0x104df770u));

    /* lea eax, [eax + ecx + 0xb8c] */
    eax = (uint32_t)(eax + ecx + 0xB8Cu);

    /* or dword ptr [eax], 1 */
    wr32(eax, rd32(eax) | 1u);

    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e6350(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_100e6350(g, rd32(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
