/* f_0x101a6140 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   If the second stack argument's low byte is zero, return with eax's low byte cleared; otherwise load ecx from a global and tail-call FUN_101a2b60.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_101a6140(Guest* g, uint32_t arg0, uint32_t arg1)
{
    const uint32_t low = (uint8_t)arg1;

    /* 101a6140: mov al, byte ptr [esp + 8]
       101a6144: test al, al
       101a6146: je 0x101a6153 */
    if (low == 0u)
    {
        /* 101a6153: ret
           eax has only its low byte replaced by the loaded byte; upper bytes are unchanged.
           edx is unchanged. */
        return (g->eax & 0xFFFFFF00u) | low;
    }

    /* 101a6148: mov ecx, dword ptr [0x10662794] */
    const uint32_t ecx = rd32(COW_IMG(0x10662794u));

    /* Preserve the effect of the preceding mov al, byte ptr [esp + 8] before the tail call. */
    g->eax = (g->eax & 0xFFFFFF00u) | low;

    /* 101a614e: jmp 0x101a2b60
       Tail call with ecx set to the global object pointer.  The target ends in a bare ret,
       so the caller pops its stack arguments.  Pass this function's stack arguments through. */
    cow_thiscall_cdecl(g, COW_IMG(0x101a2b60u), ecx, 2u, arg0, arg1);

    /* eax and edx are whatever the tail-called target left in them. */
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a6140(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg0 = rd32(sp0 + 4u);
    const uint32_t arg1 = rd32(sp0 + 8u);

    const uint32_t result = cow_fn_101a6140(g, arg0, arg1);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
