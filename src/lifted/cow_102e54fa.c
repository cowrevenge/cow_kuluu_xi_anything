/* f_0x102e54fa - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls a thunk on the object, then conditionally calls a cleanup function when the low bit of the byte argument is set, returning the object pointer.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_102e54fa(Guest* g, uint32_t sp0, uint32_t self)
{
    const uint32_t saved_esi = g->esi;

    /* 102e54fb: mov esi, ecx; 102e54fd: call 0x102e5516
       The original has esi = self during the call. */
    g->esi = self;
    cow_fastcall(g, COW_IMG(0x102e5516u), self, g->edx, 0);

    /* 102e5502: test byte ptr [esp + 8], 1
       After the first call, esp is sp0 - 4, so [esp + 8] is sp0 + 4. */
    if (((uint8_t)rd8(sp0 + 4u)) & 1u)
    {
        /* 102e5509: push esi; 102e550a: call 0x10311bf0; 102e550f: pop ecx */
        g->esi = self;
        cow_cdecl(g, COW_IMG(0x10311bf0u), 1, self);
        g->ecx = self;
    }

    /* 102e5510: mov eax, esi; 102e5512: pop esi */
    g->esi = saved_esi;

    /* edx is whatever the last executed call left there. */
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e54fa(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    const uint32_t result = cow_fn_102e54fa(g, sp0, self);

    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
