/* f_0x10021500 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls two thiscall member functions on `this`, passing the first and second stack arguments respectively, and returns the final eax/edx.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_10021500(Guest* g, uint32_t self, uint32_t arg0, uint32_t arg1)
{
    const uint32_t entry_esi = g->esi;
    const uint32_t sp0 = g->esp;

    /* First call: thiscall FUN_1001e780(self, arg0)
       Original stack before call:
         esp = sp0 - 8
         [esp]     = arg0
         [esp + 4] = saved esi
       The callee pops its one stack argument, leaving esp = sp0 - 4. */
    g->esp = sp0 - 4u;
    g->esi = self;
    g->eax = arg0;
    cow_thiscall(g, COW_IMG(0x1001e780u), self, 1u, arg0);

    /* Second call: thiscall FUN_1001ecb0(self, arg1)
       Original stack before call:
         esp = sp0 - 8
         [esp]     = arg1
         [esp + 4] = saved esi
       The callee pops its one stack argument, leaving esp = sp0 - 4. */
    g->esp = sp0 - 4u;
    g->esi = self;
    cow_thiscall(g, COW_IMG(0x1001ecb0u), self, 1u, arg1);

    /* pop esi */
    g->esi = entry_esi;

    /* ret 8 */
    g->esp = sp0 + 12u;

    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10021500(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg0 = rd32(sp0 + 4u);
    const uint32_t arg1 = rd32(sp0 + 8u);

    const uint32_t result = cow_fn_10021500(g, self, arg0, arg1);

    g->esp = sp0;
    rt_return(g, result, 8u);
}
/* COW_ADAPTER END */
