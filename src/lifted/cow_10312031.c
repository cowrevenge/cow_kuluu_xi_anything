/* f_0x10312031 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_10318c9e with a local buffer initialized from the first argument, then either clears the buffer's first byte or calls FUN_10318b86 depending on the decremented counter, returning the first c

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=3 */
uint32_t cow_fn_10312031(Guest* g, uint32_t sp0, uint32_t arg0, uint32_t arg1, uint32_t arg2)
{
    (void)arg2;

    /*
     * Original frame:
     *   ebp = sp0 - 4
     *   [ebp - 0x20] = sp0 - 0x24  (passed to callees)
     *   [ebp - 0x1c] = sp0 - 0x20  (counter)
     *   [ebp - 0x18] = sp0 - 0x1c
     *   [ebp - 0x14] = sp0 - 0x18
     *   [ebp + 0x10] = sp0 + 0x0c  (address of third stack argument)
     */
    const uint32_t local_20 = cow_frame(g, sp0, 0x24u); /* points at ebp - 0x20 */

    /* mov eax, [ebp + 8]; mov [ebp - 0x18], eax; mov [ebp - 0x20], eax */
    wr32(local_20 + 0x08u, arg0);
    wr32(local_20 + 0x00u, arg0);

    /* mov dword ptr [ebp - 0x14], 0x42 */
    wr32(local_20 + 0x0cu, 0x42u);

    /* mov dword ptr [ebp - 0x1c], 0x7fffffff */
    wr32(local_20 + 0x04u, 0x7FFFFFFFu);

    /*
     * call 0x10318c9e
     * Pushed order:
     *   push ebp + 0x10
     *   push [ebp + 0xc]
     *   push ebp - 0x20
     * Cdecl source order is last pushed first:
     *   FUN_10318c9e(ebp - 0x20, [ebp + 0xc], ebp + 0x10)
     */
    uint32_t first_result = cow_cdecl(
        g,
        COW_IMG(0x10318c9eu),
        3u,
        local_20,
        arg1,
        sp0 + 0x0cu
    );

    /* dec dword ptr [ebp - 0x1c] */
    uint32_t counter = rd32(local_20 + 0x04u);
    counter = (uint32_t)(counter - 1u);
    wr32(local_20 + 0x04u, counter);

    /* mov esi, eax */
    const uint32_t saved_eax = first_result;

    /* js 0x10312071: signed test of the result of dec */
    if ((int32_t)counter < 0)
    {
        /*
         * call 0x10318b86
         * Pushed order:
         *   push ebp - 0x20
         *   push 0
         * Cdecl source order:
         *   FUN_10318b86(0, ebp - 0x20)
         */
        cow_cdecl(
            g,
            COW_IMG(0x10318b86u),
            2u,
            0u,
            local_20
        );
    }
    else
    {
        /* mov eax, [ebp - 0x20]; and byte ptr [eax], 0 */
        const uint32_t p = rd32(local_20 + 0x00u);
        wr8(p, (uint8_t)(rd8(p) & 0x00u));
    }

    /* mov eax, esi */
    g->edx = g->edx; /* preserve edx exactly as left by the last executed call */
    return saved_eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10312031(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg0 = rd32(sp0 + 4u);
    const uint32_t arg1 = rd32(sp0 + 8u);
    const uint32_t arg2 = rd32(sp0 + 12u);

    const uint32_t result = cow_fn_10312031(g, sp0, arg0, arg1, arg2);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
