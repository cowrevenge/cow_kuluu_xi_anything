/* f_0x1001b820 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Sets the object's vtable pointer, conditionally releases/destroys a member at offset 0x14c0, then calls cleanup routines for members at 0x1530 and 0x34, and tail-calls the final destructor/cleanup rou

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1001b820(Guest* g, uint32_t self, uint32_t sp0)
{
    const uint32_t edi = self + 0x14C0u;

    wr32(self, COW_IMG(0x1032A308u));

    const uint32_t eax = rd32(edi);
    if (eax != 0u)
    {
        const uint32_t p = rd32(eax);
        if (p != 0u)
        {
            cow_thiscall_cdecl(g, COW_IMG(0x10071EC0u), p, 0u);
            cow_thiscall_cdecl(g, COW_IMG(0x10071050u), edi, 0u);
        }
    }

    cow_thiscall_cdecl(g, COW_IMG(0x10055250u), self + 0x1530u, 0u);
    cow_thiscall_cdecl(g, COW_IMG(0x100814E0u), self + 0x34u, 0u);

    g->esp = sp0;
    cow_thiscall_cdecl(g, COW_IMG(0x100747C0u), self, 0u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1001b820(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1001b820(g, g->ecx, sp0);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
