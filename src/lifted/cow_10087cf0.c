/* f_0x10087cf0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_10087cb0 with the second argument; if it returns zero, returns zero, otherwise stores that result as the second argument and tail-calls FUN_10087d10 with the first argument and the stored re

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_10087cf0(Guest* g, uint32_t sp0, uint32_t param1, uint32_t param2)
{
    uint32_t eax = cow_cdecl(g, COW_IMG(0x10087cb0u), 1u, param2);

    /* Original: add esp, 4 after the cdecl call. */
    g->esp = sp0;

    if (eax == 0u)
    {
        /* Original: xor al, al; ret.
           eax is already zero here, so this leaves eax == 0 and preserves
           the high bits (which are also zero). edx is whatever FUN_10087cb0
           left in it. */
        eax = 0u;
        return eax;
    }

    /* Original: mov dword ptr [esp + 8], eax; jmp 0x10087d10.
       Reproduce the stack write, then tail-call with the updated second
       argument. */
    wr32(sp0 + 8u, eax);

    eax = cow_cdecl(g, COW_IMG(0x10087d10u), 2u, param1, eax);

    /* FUN_10087d10 ends in a bare ret, so this function returns with 0 bytes
       popped by itself. */
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10087cf0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param1 = rd32(sp0 + 4u);
    const uint32_t param2 = rd32(sp0 + 8u);

    const uint32_t result = cow_fn_10087cf0(g, sp0, param1, param2);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
