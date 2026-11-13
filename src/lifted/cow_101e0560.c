/* f_0x101e0560 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the second stack argument's low byte is zero, return immediately; otherwise replace that stack slot with 0x1000 and tail-call FUN_100fd100 with the first stack argument and 0x1000.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_101e0560(Guest* g, uint32_t sp0, uint32_t arg1, uint32_t arg2)
{
    (void)arg2;

    const uint32_t b = (uint32_t)rd8(sp0 + 8u);

    /* mov al, byte ptr [esp + 8] */
    g->eax = (g->eax & 0xFFFFFF00u) | (b & 0xFFu);

    /* test al, al / je */
    if ((b & 0xFFu) == 0u)
    {
        /* ret: eax has its low byte cleared by the mov above; edx is unchanged. */
        return g->eax;
    }

    /* mov dword ptr [esp + 8], 0x1000 */
    wr32(sp0 + 8u, 0x1000u);

    /*
     * jmp 0x100fd100 (tail call).
     * The target sees the first stack argument and the modified second slot (0x1000).
     * It is cdecl and ends in a bare ret, so the caller pops the arguments.
     */
    return cow_cdecl(g, COW_IMG(0x100fd100u), 2u, arg1, 0x1000u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e0560(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(sp0 + 4u);
    const uint32_t arg2 = rd32(sp0 + 8u);

    const uint32_t result = cow_fn_101e0560(g, sp0, arg1, arg2);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
