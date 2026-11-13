/* f_0x101a7650 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_101a74a0 with the first stack argument when both stack arguments are non-zero, preserving the original eax/edx results.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_101a7650(Guest* g, uint32_t param1, uint32_t param2)
{
    uint32_t eax = g->eax;
    uint32_t edx = g->edx;

    /* mov al, byte ptr [esp + 8]; test al, al; je ret */
    if ((uint8_t)param2 == 0u)
    {
        eax = (eax & 0xFFFFFF00u) | (uint8_t)param2;
        g->edx = edx;
        return eax;
    }

    /* mov eax, dword ptr [esp + 4]; test eax, eax; je ret */
    if (param1 == 0u)
    {
        eax = param1;
        g->edx = edx;
        return eax;
    }

    /* At the call site the original has eax == param1 and edx unchanged. */
    g->eax = param1;
    g->edx = edx;

    /* push eax; call 0x101a74a0; pop ecx */
    cow_cdecl(g, COW_IMG(0x101a74a0u), 1u, param1);

    /* pop ecx is not compared here, but the original leaves ecx as the return address. */
    g->ecx = COW_IMG(0x101a7666u);

    eax = g->eax;
    edx = g->edx;

    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a7650(Guest* g)
{
    const uint32_t sp0 = g->esp;

    /* Read in the original's order: byte [esp+8] first, dword [esp+4] only if needed. */
    const uint32_t param2 = rd8(sp0 + 8u);
    uint32_t param1 = 0u;

    if ((uint8_t)param2 != 0u)
    {
        param1 = rd32(sp0 + 4u);
    }

    const uint32_t result = cow_fn_101a7650(g, param1, param2);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
