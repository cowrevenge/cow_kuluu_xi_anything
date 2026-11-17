/* f_0x10228c10 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   initializes an object by calling two setup helpers, then copies dword [self+4] into self+0x64 and self+0x68.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10228c10(Guest* g, uint32_t self, uint32_t sp0)
{
    const uint32_t local = cow_frame(g, sp0, 4u);

    wr32(local, self);

    cow_thiscall(g, COW_IMG(0x10221900u), self, 4u,
                 COW_IMG(0x10229180u), 0u, 0u, 0xEu);

    cow_thiscall(g, COW_IMG(0x10221a80u), self, 2u,
                 0xEu, 0u);

    cow_cdecl(g, COW_IMG(0x100e47a0u), 1u, local);

    const uint32_t eax = rd32(local);
    const uint32_t v = rd32(eax + 4u);

    wr32(self + 0x64u, v);
    wr32(self + 0x68u, v);

    g->edx = v;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10228c10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t result = cow_fn_10228c10(g, self, sp0);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
