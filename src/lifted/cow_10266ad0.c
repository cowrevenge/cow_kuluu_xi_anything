/* f_0x10266ad0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Converts the last Win32 error code into an HRESULT, returning E_FAIL if the error code is zero.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10266ad0(Guest* g)
{
    const uint32_t target = rd32(COW_IMG(0x10329168u));
    const uint32_t err = cow_stdcall(g, target, 0u);

    if (err == 0u)
    {
        return 0x80004005u;
    }

    return (err & 0xFFFFu) | 0x80070000u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10266ad0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10266ad0(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
