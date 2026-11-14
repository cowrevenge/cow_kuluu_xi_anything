/* f_0x102a2a50 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Looks up the 32-bit value at offset 0xc in the 0x30-byte table entry selected by param_2 from the table at param_1+0x40, then passes it to FUN_10281c40.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102a2a50(Guest* g, uint32_t param1, uint32_t param2)
{
    uint32_t edx = rd32(param1 + 0x40u);

    uint32_t eax = param2;
    eax = (uint32_t)(eax + eax * 2u);   /* lea eax, [eax + eax*2] */
    eax = (uint32_t)(eax << 4u);        /* shl eax, 4             */

    uint32_t arg = rd32(edx + eax + 0xCu);

    /* Match the register state at the original call site. */
    g->eax = arg;
    g->ecx = param1;
    g->edx = edx;

    cow_cdecl(g, COW_IMG(0x10281c40u), 1u, arg);

    /* Original: pop ecx after the call. */
    g->ecx = arg;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102a2a50(Guest* g)
{
    const uint32_t sp0 = g->esp;

    /* Original reads esp+8 first, then esp+4. */
    const uint32_t param2 = rd32(sp0 + 8u);
    const uint32_t param1 = rd32(sp0 + 4u);

    cow_fn_102a2a50(g, param1, param2);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);   /* bare ret */
}
/* COW_ADAPTER END */
