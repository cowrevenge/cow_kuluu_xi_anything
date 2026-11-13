/* f_0x102db065 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_102db00c on the object, optionally calls FUN_10311bf0 with the object when the low bit of the byte stack argument is set, and returns the object pointer.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_102db065(Guest* g, uint32_t sp0, uint32_t self)
{
    uint32_t esi = self;

    /* 102db068: call 0x102db00c
       The original leaves ecx = self at this point.  The callee has no stack
       arguments and ends with a bare ret, so the caller pops nothing. */
    cow_thiscall_cdecl(g, COW_IMG(0x102db00cu), self, 0u);

    /* 102db06d: test byte ptr [esp + 8], 1
       After the first call, esp is sp0 - 4 because of the initial push esi.
       Therefore [esp + 8] is the caller's stack argument at sp0 + 4. */
    if ((rd8(sp0 + 4u) & 1u) != 0u)
    {
        /* 102db074: push esi
           102db075: call 0x10311bf0
           102db07a: pop ecx

           The callee has one stack argument and ends with a bare ret, so the
           caller pops the argument.  The pop ecx restores ecx to esi. */
        cow_cdecl(g, COW_IMG(0x10311bf0u), 1u, esi);
        g->ecx = esi;
    }

    /* 102db07b: mov eax, esi
       edx is whatever the last executed call left in it. */
    g->edx = g->edx;
    return esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102db065(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    const uint32_t result = cow_fn_102db065(g, sp0, self);

    g->esp = sp0;
    rt_return(g, result, 4u);   /* ret 4 */
}
/* COW_ADAPTER END */
