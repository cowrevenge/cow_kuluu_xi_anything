/* f_0x1027d9a0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_10315ddf with the first dword of the object, marks the object as freed, and clears the global owner pointer if it still points to this object.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1027d9a0(Guest* g, uint32_t param)
{
    const uint32_t entry_esi = g->esi;

    /* 1027d9a5: mov eax, dword ptr [esi] */
    const uint32_t val = rd32(param);

    /* 1027d9a7: push eax; 1027d9a8: call 0x10315ddf */
    g->eax = val;
    g->esi = param;
    cow_cdecl(g, COW_IMG(0x10315ddfu), 1u, val);

    /* 1027d9ad: mov dword ptr [esi], 0xffffffff */
    /* Use the current esi after the call, matching the original register state. */
    const uint32_t esi_after_call = g->esi;
    wr32(esi_after_call, 0xFFFFFFFFu);

    /* 1027d9b3: mov ecx, dword ptr [0x1099d210] */
    const uint32_t ecx = rd32(COW_IMG(0x1099d210u));

    /* 1027d9bc: cmp ecx, esi; 1027d9bf: jne ... */
    if (ecx == esi_after_call)
    {
        /* 1027d9c1: mov dword ptr [0x1099d210], 0 */
        wr32(COW_IMG(0x1099d210u), 0u);
    }

    /* 1027d9be: pop esi */
    g->esi = entry_esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1027d9a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd32(sp0 + 4u);

    cow_fn_1027d9a0(g, param);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
