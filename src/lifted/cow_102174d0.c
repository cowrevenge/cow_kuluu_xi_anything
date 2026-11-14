/* f_0x102174d0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   If the global object pointer is non-null, tail-call the handler at 0x10216620 with that pointer in ecx; otherwise return unchanged.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_102174d0(Guest* g, uint32_t sp0)
{
    const uint32_t ecx = rd32(COW_IMG(0x10664530u));

    if (ecx == 0u)
    {
        /* Original path: test ecx, ecx; je ret; ret.
           eax and edx are left exactly as they were on entry. */
        return g->eax;
    }

    /* Original path: mov ecx, [global]; test; jmp target.
       This is a tail call: the target sees the same guest stack pointer as
       this function had on entry.  cow_thiscall_cdecl emulates the guest
       call by pushing a return address, so compensate for that one push. */
    g->esp = sp0 + 4u;
    cow_thiscall_cdecl(g, COW_IMG(0x10216620u), ecx, 0u);

    /* The target's own ret returns to the caller of 0x102174d0.
       Preserve both eax and edx for the judge. */
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102174d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_102174d0(g, sp0);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
