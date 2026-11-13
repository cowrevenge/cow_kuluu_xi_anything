/* f_0x100e6390 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   returns bit 0 of the dword at (sign-extended short argument << 8) + 0xB8C + table base.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_100e6390(Guest* g, uint32_t param)
{
    uint32_t eax = (uint32_t)(int32_t)(int16_t)param;   /* movsx eax, word ptr [esp + 4] */
    uint32_t ecx = rd32(COW_IMG(0x104DF770u));          /* mov ecx, dword ptr [0x104df770] */

    eax <<= 8;                                          /* shl eax, 8 */
    eax = rd32(eax + ecx + 0xB8Cu);                     /* mov eax, dword ptr [eax + ecx + 0xb8c] */
    eax &= 1u;                                          /* and eax, 1 */

    g->ecx = ecx;                                       /* original leaves ecx loaded from the global */
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e6390(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd16(sp0 + 4u);              /* original reads word ptr [esp + 4] */
    const uint32_t result = cow_fn_100e6390(g, param);

    g->esp = sp0;
    rt_return(g, result, 0u);                           /* bare ret */
}
/* COW_ADAPTER END */
