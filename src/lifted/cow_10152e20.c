/* f_0x10152e20 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   Tail-calls 0x10257860 as a fastcall callee with ecx forced to the image global 0x105785d8 and edx preserved from the incoming state.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10152e20(Guest* g)
{
    const uint32_t target = COW_IMG(0x10257860u);
    const uint32_t self   = COW_IMG(0x105785d8u);
    const uint32_t edx_in = g->edx;

    const uint32_t result = cow_fastcall(g, target, self, edx_in, 0u);

    /* The observed tail callee does not modify edx, so preserve the incoming value.
       If cow_fastcall leaves the callee's final edx in g->edx, this keeps that value. */
    g->edx = edx_in;

    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10152e20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10152e20(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
