/* f_0x10043a70 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   Adjusts ecx by -0x34; if non-null, loads a vtable pointer from it and calls slot 6 with argument 1, then returns eax=1.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10043a70(Guest* g, uint32_t self)
{
    uint32_t ecx = self - 0x34u;
    g->ecx = ecx;

    if (ecx != 0u)
    {
        uint32_t eax = rd32(ecx);
        g->eax = eax;

        uint32_t target = rd32(eax + 0x18u);

        /*
         * The original pushes 1 and then calls [eax+0x18] with no following
         * add esp,4.  On the observed path the callee leaves the pushed
         * argument on the stack, so the function's bare ret consumes it and
         * the final esp is sp0+8.  Emulate that by treating the call as
         * caller-cleanup but without the helper popping the argument.
         */
        const uint32_t saved_esp = g->esp;
        g->esp -= 4u;
        wr32(g->esp, 1u);
        g->esp -= 4u;
        wr32(g->esp, 0x10043A7Eu + RD);
        rt_call_indirect(g, target);

        /*
         * Restore only the call's return-address slot; leave the pushed
         * argument in place, matching the original's unbalanced stack at ret.
         */
        g->esp = saved_esp + 4u;
    }

    g->eax = (g->eax & 0xFFFFFF00u) | 1u;
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10043a70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10043a70(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
