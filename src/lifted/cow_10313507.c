/* f_0x10313507 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls a helper with a local buffer and the fourth argument, then either clears the first byte of the buffer or calls a second helper, returning the first helper's result.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_10313507(Guest* g, uint32_t sp0, uint32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3)
{
    (void)arg3;

    const uint32_t frame = cow_frame(g, sp0, 0x100u);
    (void)frame;

    const uint32_t local_20 = sp0 - 0x24u; /* [ebp - 0x20] */
    const uint32_t local_1c = sp0 - 0x20u; /* [ebp - 0x1c] */
    const uint32_t local_18 = sp0 - 0x1cu; /* [ebp - 0x18] */
    const uint32_t local_14 = sp0 - 0x18u; /* [ebp - 0x14] */
    const uint32_t arg3_addr = sp0 + 16u;  /* [ebp + 0x14] */

    wr32(local_18, arg0);
    wr32(local_20, arg0);
    wr32(local_14, 0x42u);
    wr32(local_1c, arg1);

    const uint32_t result = cow_cdecl(g, COW_IMG(0x10318c9eu), 3u,
                                      local_20,
                                      arg2,
                                      arg3_addr);

    const uint32_t dec_val = rd32(local_1c) - 1u;
    wr32(local_1c, dec_val);

    if ((int32_t)dec_val < 0)
    {
        cow_cdecl(g, COW_IMG(0x10318b86u), 2u, 0u, local_20);
    }
    else
    {
        const uint32_t ptr = rd32(local_20);
        wr8(ptr, 0u);
    }

    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10313507(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg0 = rd32(sp0 + 4u);
    const uint32_t arg1 = rd32(sp0 + 8u);
    const uint32_t arg2 = rd32(sp0 + 12u);
    const uint32_t arg3 = rd32(sp0 + 16u);

    const uint32_t result = cow_fn_10313507(g, sp0, arg0, arg1, arg2, arg3);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
