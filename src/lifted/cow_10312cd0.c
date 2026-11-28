/* f_0x10312cd0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   Moves the two top x87 double-precision values into the current stack frame as four 32-bit arguments and calls 0x10312cf2.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10312cd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t esp1 = sp0 - 0x10u;

    double s0 = fpop(g);
    double s1 = fpop(g);
    fpush(g, s0);

    wrf64(esp1, s1);
    wrf64(esp1 + 8u, s0);

    g->esp = esp1;
    g->eax = rd32(esp1 + 0xCu);

    cow_cdecl(g, COW_IMG(0x10312cf2u), 0u);

    g->esp = sp0;

    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10312cd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10312cd0(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
