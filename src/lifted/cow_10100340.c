/* f_0x10100340 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Subtracts the 16-bit third stack argument from the 16-bit field at offset 0x2e of the first stack argument, leaving eax as that first argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=3 */
uint32_t cow_fn_10100340(Guest* g, uint32_t arg0, uint32_t arg2)
{
    const uint32_t target = arg0 + 0x2Eu;
    const uint16_t old = rd16(target);
    const uint16_t sub = (uint16_t)arg2;
    const uint16_t res = (uint16_t)(old - sub);

    wr16(target, res);

    /* Original: eax = [esp+4]; edx is never written. */
    g->eax = arg0;

    return arg0;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10100340(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg0 = rd32(sp0 + 4u);
    const uint32_t arg2 = (uint32_t)rd16(sp0 + 0xCu);

    const uint32_t result = cow_fn_10100340(g, arg0, arg2);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
