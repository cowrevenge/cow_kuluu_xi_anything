/* f_0x1015af60 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Releases the object stored at this+0x14cc via its first vtable slot, then tail-calls FUN_10126330 with this.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_1015af60(Guest* g, uint32_t self)
{
    const uint32_t sp0 = g->esp;

    /* push esi; mov esi, ecx */
    g->esp = sp0 - 4u;
    wr32(g->esp, self);

    /* mov ecx, dword ptr [esi + 0x14cc] */
    uint32_t inner = rd32(self + 0x14ccu);

    if (inner != 0u)
    {
        /* mov eax, dword ptr [ecx] */
        const uint32_t vtable = rd32(inner);

        /* call dword ptr [eax] with ecx = inner and one stack argument 1 */
        cow_thiscall(g, rd32(vtable), inner, 1u, 1u);
    }

    /* mov ecx, esi; pop esi */
    g->ecx = self;
    g->esp = sp0;

    /* jmp 0x10126330: tail call with this = self, no stack arguments */
    cow_thiscall_cdecl(g, COW_IMG(0x10126330u), self, 0u);

    g->edx = g->edx;
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1015af60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_1015af60(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
