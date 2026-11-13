/* f_0x10100670 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Tail-calls FUN_101003e0 after forcing its second stack argument to 0x28 and masking its third stack argument to 16 bits.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10100670(Guest* g, uint32_t sp0)
{
    /* 10100670: mov eax, dword ptr [esp + 0xc] */
    uint32_t eax = rd32(sp0 + 0xCu);

    /* 10100674: mov dword ptr [esp + 8], 0x28 */
    wr32(sp0 + 8u, 0x28u);

    /* 1010067c: and eax, 0xffff */
    eax &= 0xFFFFu;

    /* 10100681: mov dword ptr [esp + 0xc], eax */
    wr32(sp0 + 0xCu, eax);

    /*
     * 10100685: jmp 0x101003e0
     *
     * The target is cdecl and ends in a bare ret, so the caller pops its
     * three stack arguments.  Pass the values that are now in the stack
     * slots at entry to this thunk.
     */
    uint32_t a0 = rd32(sp0 + 4u);
    uint32_t a1 = rd32(sp0 + 8u);
    uint32_t a2 = rd32(sp0 + 0xCu);

    uint32_t result = cow_cdecl(g, COW_IMG(0x101003e0u), 3u, a0, a1, a2);

    /*
     * The original tail jump lets the target's bare ret return directly to
     * this function's caller.  Therefore this thunk itself pops no argument
     * bytes; rt_return will use 0.
     */
    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10100670(Guest* g)
{
    const uint32_t sp0 = g->esp;

    uint32_t result = cow_fn_10100670(g, sp0);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
