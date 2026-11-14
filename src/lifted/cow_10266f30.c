/* f_0x10266f30 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Tail-calls FUN_10266cd0 with the first argument advanced by 0x10 and the second replaced by &UNK_1033eed8.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=6 */
uint32_t cow_fn_10266f30(Guest* g,
                         uint32_t a1,
                         uint32_t a2,
                         uint32_t a3,
                         uint32_t a4,
                         uint32_t a5,
                         uint32_t a6)
{
    (void)a2;

    /* The original leaves ecx = a1 + 0x10 at the tail jump. */
    g->ecx = a1 + 0x10u;

    /*
     * The original tail jump calls 0x10266cd0 with:
     *   [esp+4]  = a1 + 0x10
     *   [esp+8]  = 0x1033eed8
     *   [esp+12] = a3
     *   [esp+16] = a4
     *   [esp+20] = a5
     *   [esp+24] = a6
     *
     * The target ends in ret 24, so it is a stdcall with six stack arguments.
     */
    return cow_stdcall(g,
                       COW_IMG(0x10266CD0u),
                       6u,
                       a1 + 0x10u,
                       COW_IMG(0x1033EED8u),
                       a3,
                       a4,
                       a5,
                       a6);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10266f30(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t a1 = rd32(sp0 + 4u);
    const uint32_t a2 = rd32(sp0 + 8u);
    const uint32_t a3 = rd32(sp0 + 12u);
    const uint32_t a4 = rd32(sp0 + 16u);
    const uint32_t a5 = rd32(sp0 + 20u);
    const uint32_t a6 = rd32(sp0 + 24u);

    const uint32_t result = cow_fn_10266f30(g, a1, a2, a3, a4, a5, a6);

    g->esp = sp0;
    rt_return(g, result, 24u);   /* target ret 24 */
}
/* COW_ADAPTER END */
