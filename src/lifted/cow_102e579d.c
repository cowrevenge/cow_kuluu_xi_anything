/* f_0x102e579d - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls a thunk, then conditionally calls a cleanup/free routine when the low bit of the first stack argument is set, returning the object pointer in eax.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_102e579d(Guest* g, uint32_t sp0, uint32_t self)
{
    /* Emulate the prologue push of esi so callees see the same stack layout. */
    g->esp = sp0 - 4u;
    wr32(g->esp, self);

    /* 102e57a0: call 0x102e57b9
     * No stack arguments are pushed at the call site. ecx already holds self.
     */
    cow_cdecl(g, COW_IMG(0x102e57b9u), 0);

    /* Restore esp to the state immediately after the prologue push esi. */
    g->esp = sp0 - 4u;

    /* 102e57a5: test byte ptr [esp + 8], 1
     * With esp == sp0 - 4, this reads the first stack argument at sp0 + 4.
     */
    if ((rd8(sp0 + 4u) & 1u) != 0u)
    {
        /* 102e57ac: push esi
         * 102e57ad: call 0x10311bf0
         * 102e57b2: pop ecx
         *
         * The callee is cdecl with one stack argument (self). cow_cdecl pushes
         * the argument and pops it after the call, matching the original.
         */
        cow_cdecl(g, COW_IMG(0x10311bf0u), 1u, self);

        /* pop ecx after the call sets ecx to the popped argument value. */
        g->ecx = self;
    }

    /* 102e57b3: mov eax, esi */
    /* 102e57b5: pop esi */
    /* 102e57b6: ret 4 */
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e579d(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t result = cow_fn_102e579d(g, sp0, self);

    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
