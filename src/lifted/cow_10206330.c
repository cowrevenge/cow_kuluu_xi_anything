/* f_0x10206330 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Dispatches on a signed 16-bit argument: 1 calls FUN_10205310, 2 optionally calls FUN_10202d30 when the global at 0x106643a8 is nonzero, otherwise returns.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_10206330(Guest* g, uint32_t self, uint32_t arg, uint32_t sp0)
{
    int32_t eax = (int32_t)(int16_t)arg;

    /* 10206335: dec eax */
    eax = (int32_t)(uint32_t)(eax - 1);

    /* 10206336: je 0x10206344 */
    if (eax == 0)
    {
        /* 10206344: call 0x10205310 */
        g->eax = (uint32_t)(eax + 1); /* original eax is 0 before the call */
        g->ecx = self;
        g->esp = sp0;
        cow_cdecl(g, COW_IMG(0x10205310u), 0);
        return g->eax;
    }

    /* 10206338: dec eax */
    eax = (int32_t)(uint32_t)(eax - 1);

    /* 10206339: jne 0x10206349 */
    if (eax != 0)
    {
        return (uint32_t)eax;
    }

    /* 1020633b: mov dword ptr [esp + 4], ecx */
    wr32(sp0 + 4u, self);

    /* 10205370: mov eax, dword ptr [0x106643a8] */
    eax = (int32_t)rd32(COW_IMG(0x106643a8u));

    /* 10205375: test eax, eax / 10205377: je 0x10205393 */
    if (eax == 0)
    {
        return (uint32_t)eax;
    }

    /* 10205379: mov eax, dword ptr [esp + 4] */
    eax = (int32_t)rd32(sp0 + 4u);

    /* 10205386..1020538b: call 0x10202d30 */
    g->eax = (uint32_t)eax;
    g->ecx = self;
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x10202d30u), 6u,
              COW_IMG(0x10205350u),
              (uint32_t)eax,
              0u,
              0u,
              0u,
              0u);

    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10206330(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg = rd16(sp0 + 4u);

    const uint32_t result = cow_fn_10206330(g, self, arg, sp0);

    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
