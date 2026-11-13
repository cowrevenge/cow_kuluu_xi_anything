/* f_0x1013ebc0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the byte at self+0x10 is nonzero, calls FUN_10118f70 with this=[self+8] and the address self+0x14; otherwise returns after updating al.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_1013ebc0(Guest* g, uint32_t self)
{
    uint32_t eax = g->eax;
    uint8_t b = rd8(self + 0x10u);

    /* mov al, byte ptr [ecx + 0x10] */
    eax = (eax & 0xFFFFFF00u) | (uint32_t)b;

    /* test al, al / je */
    if (b == 0)
    {
        g->edx = g->edx;   /* original leaves edx unchanged on this path */
        return eax;
    }

    /* lea eax, [ecx + 0x14] */
    eax = self + 0x14u;

    /* mov ecx, dword ptr [ecx + 8] */
    uint32_t new_ecx = rd32(self + 8u);

    /* Set registers exactly as the original does before the call. */
    g->eax = eax;
    g->ecx = new_ecx;

    /* push eax / call 0x10118f70 (thiscall, callee pops 1 stack argument) */
    cow_thiscall(g, COW_IMG(0x10118f70u), new_ecx, 1u, eax);

    /* edx is whatever the callee leaves; on the no-call path it was unchanged. */
    g->edx = g->edx;

    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1013ebc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_1013ebc0(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
