/* f_0x1014c180 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the second stack argument's low byte is nonzero, calls FUN_100e50d0 with the first stack argument; otherwise returns after only updating al.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_1014c180(Guest* g, uint32_t param1, uint32_t param2)
{
    const uint32_t entry_eax = g->eax;

    if ((param2 & 0xFFu) == 0u)
    {
        /* mov al, byte ptr [esp + 8]; test al, al; je ret */
        return (entry_eax & 0xFFFFFF00u) | (param2 & 0xFFu);
    }

    /* mov eax, dword ptr [esp + 4] */
    g->eax = param1;

    /* push eax; call 0x100e50d0; pop ecx */
    cow_cdecl(g, COW_IMG(0x100e50d0u), 1u, param1);
    g->ecx = param1;

    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1014c180(Guest* g)
{
    const uint32_t sp0 = g->esp;

    /* Original reads only the byte at [esp + 8] before deciding whether to read [esp + 4]. */
    const uint32_t param2 = rd8(sp0 + 8u);
    uint32_t param1 = 0u;

    if ((param2 & 0xFFu) != 0u)
    {
        param1 = rd32(sp0 + 4u);
    }

    const uint32_t result = cow_fn_1014c180(g, param1, param2);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
