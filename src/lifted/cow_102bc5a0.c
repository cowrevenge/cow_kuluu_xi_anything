/* f_0x102bc5a0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_102bc450 with the two stack arguments, then calls FUN_102bc500 with the second stack argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102bc5a0(Guest* g, uint32_t sp0, uint32_t param1, uint32_t param2)
{
    const uint32_t saved_esi = g->esi;

    /*
       Original stack effect:
         push esi
         push param2
         push param1
         call 0x102bc450
         push param2
         call 0x102bc500
         add esp, 0xc
         pop esi
         ret

       The helper performs the call itself.  Keep the saved esi slot in guest
       stack memory so callees see the same relative stack depth as the
       original code.
    */
    g->esp = sp0 - 4u;
    wr32(sp0 - 4u, saved_esi);

    cow_cdecl(g, COW_IMG(0x102bc450u), 2u, param1, param2);

    /*
       After the first call the original still has the first call's two
       arguments on the stack.  The second call then pushes one more argument.
       The following add esp, 0xc removes the second call's argument and the
       first call's two arguments.
    */
    g->esp = sp0 - 12u;
    wr32(sp0 - 12u, param1);
    wr32(sp0 - 8u, param2);

    g->esp = sp0 - 16u;
    wr32(sp0 - 16u, param2);

    cow_cdecl(g, COW_IMG(0x102bc500u), 1u, param2);

    g->esp = sp0 - 4u;
    g->esi = saved_esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102bc5a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param1 = rd32(sp0 + 4u);
    const uint32_t param2 = rd32(sp0 + 8u);

    cow_fn_102bc5a0(g, sp0, param1, param2);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
