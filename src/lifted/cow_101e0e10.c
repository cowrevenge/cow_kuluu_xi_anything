/* f_0x101e0e10 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Searches the 10 bytes at self+0x40 for the low byte of the stack argument, returning 1 if found and 0 otherwise, while updating edx's low byte with that argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_101e0e10(Guest* g, uint32_t self, uint32_t ch)
{
    const uint8_t target = (uint8_t)ch;

    /* mov dl, byte ptr [esp + 4]: only the low byte of edx is written. */
    g->edx = (g->edx & 0xFFFFFF00u) | (uint32_t)target;

    for (uint32_t eax = 0u; (int32_t)eax < 10; ++eax)
    {
        if (rd8((uint32_t)(self + eax + 0x40u)) == target)
        {
            /* mov al, 1: high bytes of eax are preserved, but eax is 0..9 here. */
            return (eax & 0xFFFFFF00u) | 1u;
        }
    }

    /* xor al, al after eax has become 10: high bytes are preserved, but they are zero. */
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e0e10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t ch = rd8(sp0 + 4u);

    const uint32_t result = cow_fn_101e0e10(g, self, ch);

    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
