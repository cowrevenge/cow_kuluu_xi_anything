/* f_0x10225410 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns a modified eax based on the first 16-bit word at the pointer argument, setting the low byte to 1 only when that word is between 0x63 and 0x6e inclusive.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10225410(Guest* g, uint32_t param)
{
    (void)g;

    uint32_t eax = param;

    if (eax == 0u)
    {
        /* xor al, al on eax == 0 leaves eax == 0 */
        return 0u;
    }

    uint16_t v = rd16(eax);

    /* mov ax, word ptr [eax] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)v;

    /* cmp ax, 0x63 / jb and cmp ax, 0x6e / ja are unsigned */
    if (v < 0x63u || v > 0x6eu)
    {
        /* xor al, al */
        return eax & 0xFFFFFF00u;
    }

    /* mov al, 1 */
    return (eax & 0xFFFFFF00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10225410(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10225410(g, rd32(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
