/* f_0x10274040 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   clears the pointer stored at *param, calling two helpers before and after reading it.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_10274040(Guest* g, uint32_t sp0, uint32_t param_1)
{
    const uint32_t saved_esi = g->esi;
    const uint32_t saved_edi = g->edi;

    const uint32_t edi = param_1;
    const uint32_t esi = rd32(edi);

    /*
       Original stack layout:
         sp0          : return address
         sp0+4        : param_1
         sp0-4        : saved esi
         sp0-8        : saved edi
         sp0-12       : first argument for FUN_10274020

       After FUN_10274020 returns, the original does NOT pop that first
       argument.  The next call pushes its own three arguments directly below
       it, and a later "add esp, 0x10" pops all four dwords at once.
    */

    /* Save the two callee-saved registers exactly where the original leaves them. */
    wr32(sp0 - 4u, saved_esi);
    wr32(sp0 - 8u, saved_edi);

    /*
       10274048: push esi
       10274049: call 0x10274020

       At the call site, esp is sp0 - 12.  cow_cdecl expects esp to be the
       stack pointer before the call's own argument pushes, so use sp0 - 8 and
       let it push the single argument and return address.
    */
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x10274020u), 1u, esi);

    /*
       The original leaves the first argument on the stack:
         esp = sp0 - 12
       after FUN_10274020 returns.
    */
    g->esp = sp0 - 12u;

    /*
       1027404e: push 0x1ed
       10274053: push 0x103b24f4
       10274058: push esi
       10274059: call 0x10276110

       Again, cow_cdecl takes the arguments in source order:
         last pushed = first argument = esi
         then string
         then 0x1ed
    */
    cow_cdecl(g, COW_IMG(0x10276110u), 3u,
              esi,
              COW_IMG(0x103b24f4u),
              0x1EDu);

    /*
       1027405e: add esp, 0x10

       After the second bare-ret callee returns, the original esp is sp0 - 24.
       add esp, 0x10 makes it sp0 - 8.
    */
    g->esp = sp0 - 8u;

    /* 10274061: mov dword ptr [edi], 0 */
    wr32(edi, 0u);

    /* Restore the saved callee-saved registers. */
    g->edi = saved_edi;
    g->esi = saved_esi;

    /*
       eax and edx are compared.  They are left exactly as the callees last
       left them in g->eax and g->edx.
    */
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10274040(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param_1 = rd32(sp0 + 4u);

    const uint32_t result = cow_fn_10274040(g, sp0, param_1);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
