/* f_0x10049520 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_100492f0 three times on the object and copies the fields at offsets 0x14, 0x18, and 0x1c from the returned pointers into the caller-supplied output buffer.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_10049520(Guest* g, uint32_t self, uint32_t sp0)
{
    uint32_t esi = self;

    /* First call: this = original ecx, one stack argument = 1. */
    g->esp = sp0 - 8u;
    uint32_t eax = cow_thiscall(g, COW_IMG(0x100492f0u), self, 1u, 1u);

    /* Original reads the stack argument after the first call. */
    uint32_t edi = rd32(sp0 + 4u);

    eax = rd32(eax + 0x14u);

    /* Second call: this = esi, one stack argument = 1. */
    g->esp = sp0 - 8u;
    uint32_t eax2 = cow_thiscall(g, COW_IMG(0x100492f0u), esi, 1u, 1u);

    uint32_t ecx = rd32(eax2 + 0x18u);

    /* Original writes [edi] after the second call has produced ecx. */
    wr32(edi, eax);

    /* Third call: this = esi, one stack argument = 1. */
    g->esp = sp0 - 8u;
    uint32_t eax3 = cow_thiscall(g, COW_IMG(0x100492f0u), esi, 1u, 1u);

    uint32_t edx = rd32(eax3 + 0x1cu);

    wr32(edi + 4u, ecx);
    wr32(edi + 8u, edx);

    g->edx = edx;
    return eax3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10049520(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    const uint32_t result = cow_fn_10049520(g, self, sp0);

    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
