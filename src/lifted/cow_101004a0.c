/* f_0x101004a0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Rewrites the second and third stack arguments, then tail-calls FUN_101003e0 with the updated stack arguments.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_101004a0(Guest* g, uint32_t sp0)
{
    uint32_t arg1;
    uint32_t arg2;
    uint32_t arg3;
    uint32_t eax;

    /* 101004a0: mov eax, dword ptr [esp + 0xc] */
    eax = rd32(sp0 + 0xCu);

    /* 101004a4: mov dword ptr [esp + 8], 0x1b */
    wr32(sp0 + 8u, 0x1Bu);

    /* 101004ac: and eax, 0xffff */
    eax &= 0xFFFFu;

    /* 101004b1: neg eax */
    eax = (uint32_t)(0u - eax);

    /* 101004b3: mov dword ptr [esp + 0xc], eax */
    wr32(sp0 + 0xCu, eax);

    /*
     * 101004b7: jmp 0x101003e0
     *
     * Tail call.  The target sees the same stack layout as this function did:
     *   [esp + 0x04] = first argument
     *   [esp + 0x08] = second argument, now 0x1b
     *   [esp + 0x0c] = third argument, now neg(old_third & 0xffff)
     *
     * FUN_101003e0 is cdecl and ends with a bare ret, so the caller pops its
     * arguments.  For the tail call, rt_return is given 0 because the target
     * itself pops no argument bytes.
     */
    arg1 = rd32(sp0 + 4u);
    arg2 = rd32(sp0 + 8u);
    arg3 = rd32(sp0 + 0xCu);

    return cow_cdecl(g, COW_IMG(0x101003e0u), 3u, arg1, arg2, arg3);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101004a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_101004a0(g, sp0);
    g->esp = sp0;
    rt_return(g, result, 0u);   /* tail-called target ends in bare ret */
}
/* COW_ADAPTER END */
