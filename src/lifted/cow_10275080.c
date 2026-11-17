/* f_0x10275080 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   forwards param_3 to FUN_1028a0d0, then calls FUN_102858b0 with a format string and the three dwords pointed to by param_1.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=3 */
uint32_t cow_fn_10275080(Guest* g, uint32_t sp0, uint32_t param_1, uint32_t param_2, uint32_t param_3)
{
    (void)param_2;

    /* 10275080: mov eax, dword ptr [esp + 0xc] */
    /* 10275084: push eax */
    /* 10275085: call 0x1028a0d0 */
    g->esp = sp0;
    g->eax = param_3;
    cow_cdecl(g, COW_IMG(0x1028a0d0u), 1u, param_3);

    /* The first call has returned, but the pushed param_3 is still live for the
       second call's stack layout.  Model that explicitly so callees see the
       same absolute esp/stack addresses as in the original. */
    g->esp = sp0 - 4u;
    wr32(sp0 - 4u, param_3);

    /* 1027508a: mov eax, dword ptr [esp + 8] */
    /* With [param_3] still pushed, esp == sp0 - 4, so [esp + 8] == [sp0 + 4]. */
    const uint32_t p1 = rd32(sp0 + 4u);

    /* 1027508e: mov ecx, dword ptr [eax + 8] */
    /* 10275091: mov edx, dword ptr [eax + 4] */
    /* 10275094: mov eax, dword ptr [eax] */
    g->ecx = rd32(p1 + 8u);
    g->edx = rd32(p1 + 4u);
    g->eax = rd32(p1);

    /* 10275096: push ecx */
    /* 10275097: push edx */
    /* 10275098: push eax */
    /* 10275099: push 0x103b27d8 */
    /* 1027509e: call 0x102858b0 */
    /* 102750a3: add esp, 0x14 */
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 4u,
              COW_IMG(0x103b27d8u),
              g->eax,
              g->edx,
              g->ecx);

    /* 102750a6: ret */
    /* eax and edx are whatever FUN_102858b0 left in them. */
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10275080(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param_1 = rd32(sp0 + 4u);
    const uint32_t param_2 = rd32(sp0 + 8u);
    const uint32_t param_3 = rd32(sp0 + 0xcu);

    const uint32_t result = cow_fn_10275080(g, sp0, param_1, param_2, param_3);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
