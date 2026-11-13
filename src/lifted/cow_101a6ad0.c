/* f_0x101a6ad0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   If the second stack argument's low byte is nonzero, calls the thiscall helper at 0x101a2c80 with the first stack argument; otherwise returns after only updating eax's low byte.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_101a6ad0(Guest* g, uint32_t arg1, uint32_t arg2)
{
    /* mov al, byte ptr [esp + 8] */
    const uint32_t old_eax = g->eax;
    g->eax = (old_eax & 0xFFFFFF00u) | (arg2 & 0xFFu);

    /* test al, al; je ret */
    if ((g->eax & 0xFFu) == 0u)
    {
        return g->eax;
    }

    /* mov eax, dword ptr [esp + 4] */
    g->eax = arg1;

    /* mov ecx, dword ptr [0x10662794] */
    const uint32_t self = rd32(COW_IMG(0x10662794u));

    /* push eax; call 0x101a2c80 */
    return cow_thiscall(g, COW_IMG(0x101a2c80u), self, 1u, arg1);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a6ad0(Guest* g)
{
    const uint32_t sp0 = g->esp;

    /* The original reads [esp + 8] first. */
    const uint32_t arg2 = rd8(sp0 + 8u);

    /* It reads [esp + 4] only on the non-zero path, but reading it here is harmless
       for this function's observable behavior as long as the guest memory exists.
       To stay closest to the original's order, read it only when needed. */
    const uint32_t arg1 = ((arg2 & 0xFFu) != 0u) ? rd32(sp0 + 4u) : 0u;

    const uint32_t result = cow_fn_101a6ad0(g, arg1, arg2);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
