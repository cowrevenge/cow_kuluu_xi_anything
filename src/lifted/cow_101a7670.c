/* f_0x101a7670 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_101a75c0 with the first stack argument when both the second stack argument's low byte and the first stack argument are nonzero.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_101a7670(Guest* g, uint32_t param1, uint32_t param2)
{
    const uint32_t eax_entry = g->eax;

    if ((uint8_t)param2 == 0u)
    {
        /* mov al, byte ptr [esp + 8] with al == 0, then ret. */
        g->edx = g->edx;
        return (eax_entry & 0xFFFFFF00u);
    }

    if (param1 == 0u)
    {
        /* mov eax, dword ptr [esp + 4] loaded zero, then ret. */
        g->edx = g->edx;
        return 0u;
    }

    /* push eax; call 0x101a75c0; pop ecx */
    cow_cdecl(g, COW_IMG(0x101a75c0u), 1u, param1);

    /* The pop ecx after the callee's ret pops the value pushed by "push eax". */
    g->ecx = param1;

    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a7670(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t param2 = rd8(sp0 + 8u);
    uint32_t param1 = 0u;

    if (param2 != 0u)
    {
        param1 = rd32(sp0 + 4u);
    }

    const uint32_t result = cow_fn_101a7670(g, param1, param2);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
