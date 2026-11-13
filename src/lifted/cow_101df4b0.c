/* f_0x101df4b0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   rounds the signed stack argument up to the next 16-byte boundary, then multiplies by 96.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_101df4b0(Guest* g, uint32_t param)
{
    /* cdq: edx = all 1s if eax < 0, else 0 */
    uint32_t edx = (uint32_t)((int32_t)param >> 31);

    /* and edx, 0xf */
    edx &= 0xFu;

    /* add eax, edx */
    uint32_t eax = (uint32_t)(param + edx);

    /* sar eax, 4 */
    eax = (uint32_t)((int32_t)eax >> 4);

    /* lea eax, [eax + eax*2] */
    eax = (uint32_t)(eax + eax * 2u);

    /* shl eax, 5 */
    eax = (uint32_t)(eax << 5);

    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101df4b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_101df4b0(g, rd32(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
