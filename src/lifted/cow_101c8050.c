/* f_0x101c8050 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls two member functions on the object and its subobject at +0x5c, then tail-calls the object's finalizer/destructor.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101c8050(Guest* g, uint32_t self)
{
    const uint32_t saved_esi = g->esi;
    const uint32_t sp0 = g->esp;

    /* push esi / mov esi, ecx */
    g->esi = self;

    /* Emulate the caller-saved stack slot so callees that inspect [esp+4] see the same value. */
    wr32(sp0 - 4u, saved_esi);

    /* call 0x101c80a0: ecx = self, no stack arguments, caller pops zero bytes */
    g->esp = sp0 - 4u;
    cow_thiscall_cdecl(g, COW_IMG(0x101c80a0u), self, 0u);

    /* lea ecx, [esi + 0x5c] / call 0x101c5910 */
    g->esp = sp0 - 4u;
    cow_thiscall_cdecl(g, COW_IMG(0x101c5910u), self + 0x5cu, 0u);

    /* mov ecx, esi / pop esi */
    g->esi = saved_esi;
    g->esp = sp0;

    /* jmp 0x10257b40: tail call with ecx = self, no stack arguments, target pops zero bytes */
    cow_thiscall_cdecl(g, COW_IMG(0x10257b40u), self, 0u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c8050(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    cow_fn_101c8050(g, self);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
