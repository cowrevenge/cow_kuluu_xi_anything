/* f_0x1022d9f0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Releases two optional global objects by calling their first vtable slot with argument 1, clears the globals, then calls FUN_1022ee90 for each 0x94-byte object in a fixed global array.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1022d9f0(Guest* g)
{
    const uint32_t saved_esi = g->esi;

    uint32_t self = rd32(COW_IMG(0x10668378u));
    if (self != 0u)
    {
        const uint32_t vtable = rd32(self);
        const uint32_t target = rd32(vtable);

        g->esi = 0u;
        g->eax = vtable;
        cow_thiscall(g, target, self, 1u, 1u);

        wr32(COW_IMG(0x10668378u), 0u);
    }

    self = rd32(COW_IMG(0x1066837cu));
    if (self != 0u)
    {
        const uint32_t vtable = rd32(self);
        const uint32_t target = rd32(vtable);

        g->esi = 0u;
        g->edx = vtable;
        cow_thiscall(g, target, self, 1u, 1u);

        wr32(COW_IMG(0x1066837cu), 0u);
    }

    uint32_t esi = COW_IMG(0x10667a90u);
    const uint32_t end = COW_IMG(0x1066833cu);

    do
    {
        g->esi = esi;
        cow_thiscall_cdecl(g, COW_IMG(0x1022ee90u), esi, 0u);

        esi += 0x94u;
    } while ((int32_t)esi < (int32_t)end);

    g->esi = saved_esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1022d9f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1022d9f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
