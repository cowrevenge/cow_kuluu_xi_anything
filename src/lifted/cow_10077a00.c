/* f_0x10077a00 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If a global byte is nonzero, tail-calls FUN_101a1cb0 with ecx set from another global; otherwise returns.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10077a00(Guest* g)
{
    const uint8_t flag = rd8(COW_IMG(0x1047d496u));

    /* mov al, byte ptr [0x1047d496] */
    g->eax = (g->eax & 0xFFFFFF00u) | (uint32_t)flag;

    /* test al, al / je */
    if (flag == 0)
    {
        return;
    }

    /* mov ecx, dword ptr [0x10662794] */
    const uint32_t self = rd32(COW_IMG(0x10662794u));

    /* jmp 0x101a1cb0 : tail call */
    cow_thiscall_cdecl(g, COW_IMG(0x101a1cb0u), self, 0);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10077a00(Guest* g)
{
    const uint32_t sp0 = g->esp;

    cow_fn_10077a00(g);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
