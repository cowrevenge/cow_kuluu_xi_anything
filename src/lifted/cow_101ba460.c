/* f_0x101ba460 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the first stack argument is 0x18, tail-calls FUN_101ba390 as a thiscall with this from the third stack word and the second stack word as its sole argument; otherwise returns 0xFFFFFFFF.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_101ba460(Guest* g, uint32_t sp0, uint32_t arg0, uint32_t arg1)
{
    if (arg0 != 0x18u)
    {
        /* or eax, 0xffffffff */
        return 0xFFFFFFFFu;
    }

    /* mov eax, dword ptr [esp + 8] */
    const uint32_t eax = arg1;

    /* mov ecx, dword ptr [esp + 0xc] */
    const uint32_t self = rd32(sp0 + 0xCu);

    /* Preserve the register state the original has at the call site. */
    g->eax = eax;

    /* push eax; call 0x101ba390 */
    cow_thiscall(g, COW_IMG(0x101ba390u), self, 1u, eax);

    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ba460(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg0 = rd32(sp0 + 4u);
    const uint32_t arg1 = rd32(sp0 + 8u);

    const uint32_t result = cow_fn_101ba460(g, sp0, arg0, arg1);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
