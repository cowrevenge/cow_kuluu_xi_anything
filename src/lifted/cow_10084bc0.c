/* f_0x10084bc0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns the pointer stored at self+0x70 with its low byte replaced by 1 if the 16-bit field at pointer+0x210 is nonzero, or 0 if the pointer is null.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10084bc0(Guest* g, uint32_t self)
{
    uint32_t eax = rd32((uint32_t)(self + 0x70u));

    if (eax == 0u)
    {
        /* xor al, al with eax already zero */
        return 0u;
    }

    /* xor ecx, ecx */
    g->ecx = 0u;

    uint16_t w = rd16((uint32_t)(eax + 0x210u));

    /* setne cl: cx was zero, so cl is 1 iff the word is nonzero */
    uint32_t cl = (w != 0u) ? 1u : 0u;

    /* Preserve the exact final ecx state as well, in case it is observed. */
    g->ecx = cl;

    /* mov al, cl: preserve the high bytes of eax */
    eax = (eax & 0xFFFFFF00u) | cl;

    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10084bc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10084bc0(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
