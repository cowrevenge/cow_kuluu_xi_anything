/* f_0x10161bc0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   returns the low byte of the global pointer at 0x10621940 set to 1 if the dword at that pointer + 8 is nonzero, otherwise 0, preserving the upper 24 bits of eax.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10161bc0(Guest* g)
{
    (void)g;

    uint32_t eax = rd32(COW_IMG(0x10621940u));

    if (eax == 0u)
    {
        /* xor al, al: eax = (eax & 0xFFFFFF00) | 0; here eax is already 0 */
        return eax & 0xFFFFFF00u;
    }

    uint32_t ecx = rd32(eax + 8u);

    /* setne al: al = (ecx != 0) ? 1 : 0, upper 24 bits of eax preserved */
    eax = (eax & 0xFFFFFF00u) | (ecx != 0u ? 1u : 0u);

    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10161bc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10161bc0(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
