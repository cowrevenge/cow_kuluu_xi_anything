/* f_0x1002c730 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls a helper to obtain a pointer, and if the pointed-to dword is nonzero, tail-calls a stdcall routine with this function's three stack arguments.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_1002c730(Guest* g, uint32_t sp0)
{
    /* 1002c730: call 0x1002b5a0 */
    const uint32_t eax = cow_cdecl(g, COW_IMG(0x1002b5a0u), 0);

    /* 1002c735: mov ecx, dword ptr [eax] */
    const uint32_t ecx = rd32(eax);

    /* 1002c737: test ecx, ecx / 1002c739: je 0x1002c748 */
    if (ecx == 0u)
    {
        /* 1002c748: ret 0xc */
        g->edx = g->edx; /* leave edx exactly as left by FUN_1002b5a0 */
        return eax;
    }

    /* 1002c73b: mov edx, dword ptr [esp + 8] */
    const uint32_t arg0 = rd32(sp0 + 4u);
    const uint32_t arg1 = rd32(sp0 + 8u);
    const uint32_t arg2 = rd32(sp0 + 12u);

    /* 1002c73f: mov dword ptr [esp + 8], edx */
    wr32(sp0 + 8u, arg1);

    /* Preserve the register state that the original tail jump would have had. */
    g->eax = eax;
    g->ecx = ecx;
    g->edx = arg1;

    /* 1002c743: jmp 0x1002b430  (tail call, stdcall ret 12) */
    const uint32_t result = cow_stdcall(g, COW_IMG(0x1002b430u), 3, arg0, arg1, arg2);

    /* The target's ret 12 returns to our caller; expose its final edx. */
    g->edx = g->edx;
    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1002c730(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_1002c730(g, sp0);
    g->esp = sp0;
    rt_return(g, result, 12u);
}
/* COW_ADAPTER END */
