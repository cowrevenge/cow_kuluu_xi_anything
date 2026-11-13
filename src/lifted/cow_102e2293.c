/* f_0x102e2293 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls a cleanup/helper on the object, optionally calls a delete/free helper when the low bit of the byte argument is set, and returns the object pointer.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_102e2293(Guest* g, uint32_t self, uint32_t flag_byte)
{
    const uint32_t sp0 = g->esp;

    /* push esi; mov esi, ecx */
    const uint32_t esi = self;

    /* At the first call the original has already pushed esi, so esp == sp0 - 4. */
    g->esp = sp0 - 4u;
    wr32(g->esp, esi);

    /* call 0x102e1799 */
    cow_thiscall_cdecl(g, COW_IMG(0x102e1799u), esi, 0u);

    /* test byte ptr [esp + 8], 1  (esp is sp0 - 4 here, so this is [sp0 + 4]) */
    if ((flag_byte & 1u) != 0u)
    {
        /* push esi; call 0x10311bf0; pop ecx */
        cow_cdecl(g, COW_IMG(0x10311bf0u), 1u, esi);
    }

    /* mov eax, esi; pop esi; ret 4 */
    g->esp = sp0;
    return esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e2293(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t flag_byte = rd32(sp0 + 4u);

    const uint32_t result = cow_fn_102e2293(g, self, flag_byte);

    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
