/* f_0x102bc740 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_102bc450 with the two stack arguments, then calls FUN_102bc720 with the current esi after the first call, restoring esi on return.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_102bc740(Guest* g, uint32_t sp0, uint32_t arg1, uint32_t arg2)
{
    const uint32_t entry_esi = g->esi;
    uint32_t esp = sp0;

    /* 102bc740: mov eax, dword ptr [esp + 4] */
    g->eax = arg1;

    /* 102bc744: push esi */
    esp -= 4u;
    wr32(esp, entry_esi);

    /* 102bc745: mov esi, dword ptr [esp + 0xc] */
    g->esi = arg2;

    /* 102bc749: push esi */
    esp -= 4u;
    wr32(esp, g->esi);

    /* 102bc74a: push eax */
    esp -= 4u;
    wr32(esp, g->eax);

    /* 102bc74b: call 0x102bc450
     *
     * The original leaves both arguments on the stack until after the second
     * call, so push them manually and invoke the callee with zero arguments.
     */
    g->esp = esp;
    cow_cdecl(g, COW_IMG(0x102bc450u), 0u);
    esp = g->esp;

    /* 102bc750: push esi
     *
     * This is esi as left by FUN_102bc450, not necessarily arg2.
     */
    esp -= 4u;
    wr32(esp, g->esi);

    /* 102bc751: call 0x102bc720
     *
     * Again preserve the original stack layout: the first call's two arguments
     * are still below this argument when the second call is made.
     */
    g->esp = esp;
    cow_cdecl(g, COW_IMG(0x102bc720u), 0u);
    esp = g->esp;

    /* 102bc756: add esp, 0xc */
    esp += 0xCu;

    /* 102bc759: pop esi */
    g->esi = rd32(esp);
    esp += 4u;

    /* The adapter resets esp and rt_return handles the bare ret. */
    g->esp = esp;

    /* eax and edx are compared; leave them exactly as the callees left them. */
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102bc740(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(sp0 + 4u);
    const uint32_t arg2 = rd32(sp0 + 8u);

    const uint32_t result = cow_fn_102bc740(g, sp0, arg1, arg2);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
