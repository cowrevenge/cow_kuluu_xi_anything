/* f_0x102295a0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Sets the signed 32-bit field at offset 4 of the object to the sign-extended 16-bit argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102295a0(Guest* g, uint32_t self, uint32_t arg)
{
    (void)g;
    int32_t val = (int32_t)(int16_t)arg;
    wr32(self + 4u, (uint32_t)val);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102295a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg = rd32(sp0 + 4u);
    cow_fn_102295a0(g, g->ecx, arg);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
