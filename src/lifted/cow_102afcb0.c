/* f_0x102afcb0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_102afce0 to parse a float into a local, and on success converts it with __ftol, stores the result through param_1, and returns 0xff; otherwise returns 0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102afcb0(Guest* g, uint32_t sp0, uint32_t param_1)
{
    const uint32_t local_addr = cow_frame(g, sp0, 4u); /* [ebp-4] equivalent: the local float buffer */

    /* push ecx; lea eax,[esp]; push eax; call FUN_102afce0; add esp,4 */
    uint32_t result = cow_cdecl(g, COW_IMG(0x102afce0u), 1u, local_addr);

    /* test al,al ; je fail */
    if ((result & 0xFFu) == 0u)
    {
        return 0u;
    }

    /* fld dword ptr [esp] ? esp points to the local float buffer (after add esp,4 it's back at local_addr) */
    double val = rdf32(local_addr);
    fpush(g, val);

    /* call __ftol */
    uint32_t ftol_result = cow_cdecl(g, COW_IMG(0x10311c6cu), 0u);

    /* mov ecx,[esp+8] ? this is param_1 (the original stack arg) */
    wr32(param_1, ftol_result);

    /* or al,0xff ? set low byte to 0xff, keep upper bytes of eax from __ftol */
    uint32_t ret_val = (ftol_result & 0xFFFFFF00u) | 0xFFu;

    return ret_val;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102afcb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param_1 = rd32(sp0 + 4u);
    const uint32_t result = cow_fn_102afcb0(g, sp0, param_1);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
