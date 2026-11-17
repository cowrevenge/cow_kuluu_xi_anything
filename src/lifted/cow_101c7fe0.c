/* f_0x101c7fe0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Releases the two owned buffers at offsets 0xc and 0x10, then clears the object's pointer/count fields.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101c7fe0(Guest* g, uint32_t self)
{
    const uint32_t entry_esi = g->esi;
    const uint32_t entry_edi = g->edi;

    g->esi = self;
    g->edi = 0u;

    uint32_t v = rd32(g->esi + 0xcu);
    if (v != g->edi)
    {
        g->eax = v;
        cow_cdecl(g, COW_IMG(0x10311bf0u), 1u, v);
        wr32(g->esi + 0xcu, g->edi);
    }

    v = rd32(g->esi + 0x10u);
    if (v != g->edi)
    {
        g->eax = v;
        cow_cdecl(g, COW_IMG(0x10311bf0u), 1u, v);
        wr32(g->esi + 0x10u, g->edi);
    }

    wr32(g->esi + 8u, g->edi);
    wr32(g->esi + 4u, g->edi);

    g->esi = entry_esi;
    g->edi = entry_edi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c7fe0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101c7fe0(g, g->ecx);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
