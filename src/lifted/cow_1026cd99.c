/* f_0x1026cd99 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls a getter into a local slot, then on success copies that slot, calls a 16-byte handler, marks a local, and calls a setter; finally calls the stack-check helper and returns with eax set to 0 on su

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_1026cd99(Guest* g, uint32_t sp0, uint32_t param_1)
{
    const uint32_t local_14 = sp0 - 0x18u; /* [ebp - 0x14] */
    const uint32_t local_10 = sp0 - 0x14u; /* [ebp - 0x10] */
    const uint32_t local_c  = sp0 - 0x10u; /* [ebp - 0xc]  */
    const uint32_t local_8  = sp0 - 0xcu;  /* [ebp - 8]    */
    const uint32_t local_4  = sp0 - 8u;    /* [ebp - 4]    */

    (void)local_c;
    (void)local_4;

    cow_frame(g, sp0, 0x18u);

    wr32(local_14, 0xccccccccu);
    wr32(local_10, 0xccccccccu);
    wr32(local_c,  0xccccccccu);
    wr32(local_8,  0xccccccccu);
    wr32(local_4,  0xccccccccu);

    uint32_t r = cow_cdecl(g, COW_IMG(0x1026d0eau), 2u,
                           param_1 + 0x4034u,
                           local_10);

    if ((int32_t)r < 0)
    {
        g->eax = 0xffffffffu;
    }
    else
    {
        uint32_t edx = rd32(local_10);
        wr32(local_14, edx);

        cow_cdecl(g, COW_IMG(0x103169e0u), 3u,
                  rd32(local_14),
                  param_1,
                  0x10u);

        wr32(local_8, 1u);

        cow_cdecl(g, COW_IMG(0x1026d1d4u), 2u,
                  param_1 + 0x2cu,
                  local_10);

        g->eax = 0u;
    }

    cow_cdecl(g, COW_IMG(0x10316dabu), 0u);

    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1026cd99(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param_1 = rd32(sp0 + 4u);

    const uint32_t result = cow_fn_1026cd99(g, sp0, param_1);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
