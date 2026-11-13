/* f_0x1013f600 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the byte at self+0x10 is nonzero, calls FUN_10118f70 with this=[self+8] and argument self+0x1a.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_1013f600(Guest* g, uint32_t self)
{
    uint32_t eax = g->eax;
    uint32_t edx = g->edx;

    /* mov al, byte ptr [ecx + 0x10] */
    const uint8_t b = rd8(self + 0x10u);
    eax = (eax & 0xFFFFFF00u) | (uint32_t)b;

    /* test al, al / je */
    if (b == 0u)
    {
        g->edx = edx;
        return eax;
    }

    /* lea eax, [ecx + 0x1a] */
    const uint32_t arg = self + 0x1au;

    /* mov ecx, dword ptr [ecx + 8] */
    const uint32_t callee_self = rd32(self + 8u);

    /* Set the registers exactly as the original has them before the call. */
    g->eax = arg;
    g->ecx = callee_self;
    g->edx = edx;

    /* call 0x10118f70: thiscall, callee pops one stack argument. */
    cow_thiscall(g, COW_IMG(0x10118f70u), callee_self, 1u, arg);

    /* Preserve whatever eax/edx the callee left behind. */
    edx = g->edx;
    g->edx = edx;
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1013f600(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_1013f600(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
