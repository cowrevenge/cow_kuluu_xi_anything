/* f_0x1006b520 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Copies the NUL-terminated string from the stack argument into the object at `this`, including the terminating NUL, then calls FUN_1006b630.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1006b520(Guest* g, uint32_t self, uint32_t src, uint32_t sp0)
{
    const uint32_t entry_esi = g->esi;
    const uint32_t entry_edx = g->edx;

    uint32_t eax = src;
    uint32_t esi = self - eax;
    uint32_t edx = entry_edx;

    for (;;)
    {
        uint8_t dl = rd8(eax);
        edx = (edx & 0xFFFFFF00u) | (uint32_t)dl;

        wr8(esi + eax, dl);

        eax = eax + 1u;

        if (dl == 0u)
        {
            break;
        }
    }

    g->eax = eax;
    g->ecx = self;
    g->edx = edx & 0xFFFFFF00u;
    g->esi = esi;
    g->esp = sp0 - 4u;

    cow_thiscall_cdecl(g, COW_IMG(0x1006b630u), self, 0u);

    g->esi = entry_esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1006b520(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t src = rd32(sp0 + 4u);

    cow_fn_1006b520(g, g->ecx, src, sp0);

    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
