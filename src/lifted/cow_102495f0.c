/* f_0x102495f0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   calls FUN_1031201e with the second stack argument and a fixed global, then continues in the original tail if it returns non-zero.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102495f0(Guest* g, uint32_t sp0, uint32_t param_1, uint32_t param_2)
{
    (void)param_1;

    /* Reproduce the original stack frame exactly. */
    g->esp = sp0 - 0x18u;

    /* mov eax, dword ptr [esp + 0x20] */
    const uint32_t eax = rd32(g->esp + 0x20u);

    /* push ebp */
    g->esp -= 4u;
    wr32(g->esp, g->ebp);

    /* push 0x1034f2d0 */
    g->esp -= 4u;
    wr32(g->esp, COW_IMG(0x1034f2d0u));

    /* push eax */
    g->esp -= 4u;
    wr32(g->esp, eax);

    /* call 0x1031201e */
    const uint32_t result = cow_cdecl(g, COW_IMG(0x1031201eu), 0u);

    /* mov ebp, eax */
    g->ebp = result;

    /* add esp, 8 */
    g->esp += 8u;

    /* mov dword ptr [esp + 0x18], ebp */
    wr32(g->esp + 0x18u, g->ebp);

    /* jne 0x10249615 */
    if (result != 0u)
    {
        /*
         * The original jumps to 0x10249615 with esp already positioned.
         * cow_cdecl will push a return address, so raise esp by 4 before
         * calling it to keep the callee's stack references identical.
         */
        const uint32_t esp_at_tail = g->esp;
        g->esp = esp_at_tail + 4u;
        cow_cdecl(g, COW_IMG(0x10249615u), 0u);
        g->esp = esp_at_tail + 4u;
        return g->eax;
    }

    /* pop ebp */
    g->ebp = rd32(g->esp);
    g->esp += 4u;

    /* add esp, 0x18 */
    g->esp += 0x18u;

    /* ret */
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102495f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param_1 = rd32(sp0 + 4u);
    const uint32_t param_2 = rd32(sp0 + 8u);

    const uint32_t result = cow_fn_102495f0(g, sp0, param_1, param_2);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
