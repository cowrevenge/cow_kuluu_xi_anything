/* f_0x10081fb0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Sets bit 0 of the dword at self+0x88 if it is clear, and returns 1 in al; otherwise returns 0 in al.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10081fb0(Guest* g, uint32_t self)
{
    (void)g;

    const uint32_t v = rd32(self + 0x88u);

    if ((v & 1u) == 0u)
    {
        /* or al, 1; mov dword ptr [ecx + 0x88], eax */
        wr32(self + 0x88u, (v & 0xFFFFFF00u) | ((v & 0xFFu) | 1u));

        /* mov al, 1 */
        return (v & 0xFFFFFF00u) | 1u;
    }

    /* xor al, al */
    return v & 0xFFFFFF00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10081fb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10081fb0(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
