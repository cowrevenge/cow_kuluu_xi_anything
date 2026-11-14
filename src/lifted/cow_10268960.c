/* f_0x10268960 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Rewrites the first two stack arguments and tail-calls 0x10266cd0 with the modified arguments.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=6 */
uint32_t cow_fn_10268960(Guest* g, uint32_t sp0,
                         uint32_t a0, uint32_t a1, uint32_t a2,
                         uint32_t a3, uint32_t a4, uint32_t a5)
{
    (void)a1;

    const uint32_t new_a0 = a0 + 0x10u;
    const uint32_t new_a1 = COW_IMG(0x1033EE88u);

    /*
     * The original tail-jumps to 0x10266cd0 after setting:
     *   ecx = [esp+4] + 0x10
     *   [esp+4] = ecx
     *   [esp+8] = 0x1033ee88
     *
     * The callee is a 6-stack-argument function ending in ret 24.
     * The caller also leaves ecx set to the modified first argument, so use
     * thiscall to preserve that observable register state at the tail call.
     */
    const uint32_t result = cow_thiscall(g,
                                         COW_IMG(0x10266CD0u),
                                         new_a0,
                                         6u,
                                         new_a0,
                                         new_a1,
                                         a2,
                                         a3,
                                         a4,
                                         a5);

    /*
     * eax and edx are compared.  The tail callee writes them; cow_thiscall
     * leaves g->eax/g->edx as the callee did.  Return eax and keep edx.
     */
    g->edx = g->edx;
    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10268960(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t a0 = rd32(sp0 + 4u);
    const uint32_t a1 = rd32(sp0 + 8u);
    const uint32_t a2 = rd32(sp0 + 12u);
    const uint32_t a3 = rd32(sp0 + 16u);
    const uint32_t a4 = rd32(sp0 + 20u);
    const uint32_t a5 = rd32(sp0 + 24u);

    const uint32_t result = cow_fn_10268960(g, sp0, a0, a1, a2, a3, a4, a5);

    g->esp = sp0;
    rt_return(g, result, 24u);   /* tail callee ret 24 */
}
/* COW_ADAPTER END */
