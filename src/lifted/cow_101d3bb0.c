/* f_0x101d3bb0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the second stack argument's low byte is nonzero, calls FUN_101d3cc0 with this=global 0x106631d4 and args (1,0,0); otherwise does nothing.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_101d3bb0(Guest* g, uint32_t arg1, uint32_t arg2)
{
    (void)arg1;

    /* mov al, byte ptr [esp + 8] : preserve upper 24 bits of eax */
    uint32_t eax = (g->eax & 0xFFFFFF00u) | (uint32_t)(uint8_t)arg2;

    /* test al, al / je */
    if ((uint8_t)arg2 == 0)
    {
        g->eax = eax;
        g->edx = g->edx;   /* unchanged on this path */
        return eax;
    }

    /* mov ecx, dword ptr [0x106631d4] */
    const uint32_t self = rd32(COW_IMG(0x106631d4u));

    /* Preserve the modified eax for the callee */
    g->eax = eax;

    /* push 0; push 0; push 1; call 0x101d3cc0
       Source-order arguments are (1, 0, 0), with ecx = self. */
    cow_thiscall(g, COW_IMG(0x101d3cc0u), self, 3u, 1u, 0u, 0u);

    /* The callee may have updated eax/edx; leave exactly what it left. */
    g->edx = g->edx;
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d3bb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(sp0 + 4u);
    const uint32_t arg2 = rd32(sp0 + 8u);

    const uint32_t result = cow_fn_101d3bb0(g, arg1, arg2);

    g->esp = sp0;
    rt_return(g, result, 0u);   /* bare ret */
}
/* COW_ADAPTER END */
