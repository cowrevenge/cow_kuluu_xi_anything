/* f_0x1025a400 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   allocates a 0x14-byte object, initializes it, attaches it to the this object, marks the object active, and notifies it.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1025a400(Guest* g, uint32_t self, uint32_t arg)
{
    const uint32_t entry_esi = g->esi;
    const uint32_t entry_edx = g->edx;

    g->esi = self;
    g->ecx = self;

    uint32_t p = cow_cdecl(g, COW_IMG(0x10311bfbu), 1u, 0x14u);

    g->ecx = 0u;

    if (p != 0u)
    {
        g->edx = arg;

        wr32(p + 0x4u,  0u);
        wr32(p + 0x8u,  2u);
        wr32(p + 0xcu,  arg);
        wr32(p + 0x10u, 0u);
        wr32(p,         COW_IMG(0x1033ced4u));
    }
    else
    {
        g->edx = entry_edx;
    }

    g->eax = p;
    g->ecx = self;
    g->esi = self;

    cow_thiscall(g, COW_IMG(0x10259ee0u), self, 1u, p);

    wr32(g->esi, 1u);

    cow_cdecl(g, COW_IMG(0x10259f40u), 0u);

    g->esi = entry_esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025a400(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg = rd32(sp0 + 4u);

    cow_fn_1025a400(g, self, arg);

    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
