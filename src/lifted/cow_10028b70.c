/* f_0x10028b70 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_10028730 with the sole stack argument, then tail-calls FUN_10028b90 with that result in ecx.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_10028b70(Guest* g, uint32_t param_1)
{
    uint32_t eax;

    /* 10028b75: call 0x10028730 (cdecl, caller pops 4 bytes) */
    eax = cow_cdecl(g, COW_IMG(0x10028730u), 1u, param_1);

    /* 10028b7d: mov ecx, eax */
    /* 10028b7f: jmp 0x10028b90 (tail call) */
    /* FUN_10028b90 is __fastcall with its first argument in ecx.
       edx is whatever FUN_10028730 left there. */
    eax = cow_fastcall(g, COW_IMG(0x10028b90u), eax, g->edx, 0u);

    /* The judge compares edx as well; cow_fastcall leaves g->edx as FUN_10028b90 did. */
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10028b70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param_1 = rd32(sp0 + 4u);

    const uint32_t result = cow_fn_10028b70(g, param_1);

    g->esp = sp0;
    rt_return(g, result, 0u);   /* tail-called target ends in a bare ret */
}
/* COW_ADAPTER END */
