/* f_0x1032744f - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls the exception destructor on `this`, optionally calls FUN_10311bf0 when the low bit of the byte argument is set, and returns `this`.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_1032744f(Guest* g, uint32_t self, uint32_t flags, uint32_t sp0)
{
    const uint32_t entry_esi = g->esi;
    const uint32_t saved_esp = sp0 - 4u;

    /* push esi */
    g->esp = saved_esp;
    wr32(saved_esp, entry_esi);

    /* mov esi, ecx */
    g->esi = self;

    /* call 0x10327511 : exception::~exception(this) */
    cow_thiscall_cdecl(g, COW_IMG(0x10327511u), self, 0);
    g->esp = saved_esp;

    /* test byte ptr [esp + 8], 1 */
    if ((rd8(sp0 + 4u) & 1u) != 0u)
    {
        /* push esi; call 0x10311bf0; pop ecx */
        cow_cdecl(g, COW_IMG(0x10311bf0u), 1, self);
        g->esp = saved_esp;
    }

    /* mov eax, esi */
    /* pop esi */
    g->esi = entry_esi;

    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1032744f(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t flags = rd32(sp0 + 4u);

    const uint32_t result = cow_fn_1032744f(g, self, flags, sp0);

    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
