/* f_0x100a3780 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_100a3610, then calls FUN_100a36f0 with its result and the two stack arguments, leaving eax/edx as FUN_100a36f0 left them.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_100a3780(Guest* g, uint32_t param1, uint32_t param2)
{
    uint32_t eax;

    /* 100a3780: call 0x100a3610 */
    eax = cow_cdecl(g, COW_IMG(0x100a3610u), 0);
    g->eax = eax;

    /* 100a3785: mov ecx, dword ptr [esp + 8] */
    /* 100a3789: mov edx, dword ptr [esp + 4] */
    g->ecx = param2;
    g->edx = param1;

    /* 100a378d: push ecx */
    /* 100a378e: push edx */
    /* 100a378f: push eax */
    /* 100a3790: call 0x100a36f0 */
    /* 100a3795: add esp, 0xc */
    eax = cow_cdecl(g, COW_IMG(0x100a36f0u), 3, eax, param1, param2);
    g->eax = eax;

    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a3780(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param1 = rd32(sp0 + 4u);
    const uint32_t param2 = rd32(sp0 + 8u);

    g->esp = sp0;
    const uint32_t result = cow_fn_100a3780(g, param1, param2);
    g->esp = sp0;

    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
