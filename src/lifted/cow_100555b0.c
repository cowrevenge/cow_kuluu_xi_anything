/* f_0x100555b0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   stores the argument at this+0x34, then tail-calls FUN_100553c0 with the global object as this and the stored address as its argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_100555b0(Guest* g, uint32_t self, uint32_t arg, uint32_t sp0)
{
    const uint32_t addr = self + 0x34u;
    const uint32_t global_self = rd32(COW_IMG(0x1047bc94u));

    /* Reproduce the original stack write and object write, including aliasing. */
    wr32(sp0 + 4u, addr);
    wr32(addr, arg);

    /* The tail-called function sees [esp+4] after the above writes. */
    const uint32_t tail_arg = (addr == (sp0 + 4u)) ? arg : addr;

    /* Preserve the register state the original had at the jmp. */
    g->eax = addr;
    g->esp = sp0;

    cow_thiscall(g, COW_IMG(0x100553c0u), global_self, 1u, tail_arg);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100555b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg = rd32(sp0 + 4u);

    cow_fn_100555b0(g, self, arg, sp0);

    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
