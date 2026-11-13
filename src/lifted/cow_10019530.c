/* f_0x10019530 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Adds the elapsed time since a stored timestamp to a counter field, using timeGetTime().

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10019530(Guest* g, uint32_t self)
{
    const uint32_t esp0 = g->esp;
    const uint32_t saved_esi = g->esi;

    /* push esi */
    g->esp = esp0 - 4u;
    wr32(g->esp, saved_esi);

    /* mov esi, ecx */
    g->esi = self;

    /* call dword ptr [0x10329400] */
    {
        const uint32_t target = rd32(COW_IMG(0x10329400u));
        (void)cow_stdcall(g, target, 0u);
    }

    /* pop esi */
    g->esi = saved_esi;
    g->esp = esp0;

    /* mov edx, dword ptr [esi + 0x18] */
    const uint32_t edx = rd32(self + 0x18u);

    /* mov ecx, dword ptr [esi + 0x1c] */
    const uint32_t ecx = rd32(self + 0x1cu);

    /* sub eax, edx */
    const uint32_t eax = g->eax - edx;

    /* add ecx, eax */
    const uint32_t new_ecx = ecx + eax;

    /* mov dword ptr [esi + 0x1c], ecx */
    wr32(self + 0x1cu, new_ecx);

    /* Leave edx exactly as the original does at ret. */
    g->edx = edx;

    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10019530(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    const uint32_t result = cow_fn_10019530(g, self);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
