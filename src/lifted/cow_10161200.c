/* f_0x10161200 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Releases the object's 0x1c and 0x18 resources, clearing the pointers after freeing them.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10161200(Guest* g, uint32_t self)
{
    const uint32_t entry_esi = g->esi;
    const uint32_t entry_edi = g->edi;

    g->esi = self;

    g->eax = rd32(g->esi + 0x1cu);
    if (g->eax != 0u)
    {
        cow_cdecl(g, COW_IMG(0x10311bf0u), 1u, g->eax);
        wr32(g->esi + 0x1cu, 0u);
    }

    cow_thiscall_cdecl(g, COW_IMG(0x101c7fe0u), g->esi, 0u);

    g->edi = rd32(g->esi + 0x18u);
    if (g->edi != 0u)
    {
        cow_thiscall_cdecl(g, COW_IMG(0x101c8230u), g->edi, 0u);
        cow_cdecl(g, COW_IMG(0x10311bf0u), 1u, g->edi);
        wr32(g->esi + 0x18u, 0u);
    }

    g->esi = entry_esi;
    g->edi = entry_edi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10161200(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10161200(g, g->ecx);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
