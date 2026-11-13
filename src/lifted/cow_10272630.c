/* f_0x10272630 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   Calls FUN_102725c0 in a do/while loop, passing the current counter and the caller's stack argument, then restores esi/edi.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_10272630(Guest* g, uint32_t sp0, uint32_t param)
{
    const uint32_t saved_esi = g->esi;
    const uint32_t saved_edi = g->edi;

    /* Original prologue:
         push esi
         push edi
     These saved values are below the returned esp and are not observable after return,
     but write them because the original touches this stack space. */
    wr32(sp0 - 4u, saved_esi);
    wr32(sp0 - 8u, saved_edi);

    /* mov edi, dword ptr [esp + 0xc]  -> edi = stack argument
       xor esi, esi                    -> esi = 0 */
    g->edi = param;
    g->esi = 0u;

    do
    {
        /* At each loop iteration the original has esp = sp0 - 8 before pushing
           the two call arguments. cow_cdecl will push the arguments and return
           address itself, then pop the two argument bytes after the call. */
        g->esp = sp0 - 8u;

        /* Original stack before the call:
             push edi   ; second argument
             push esi   ; first argument
             call 0x102725c0
           Therefore the call is FUN_102725c0(esi, edi). */
        cow_cdecl(g, COW_IMG(0x102725c0u), 2u, g->esi, g->edi);

        /* inc esi */
        g->esi = g->esi + 1u;
    } while ((int32_t)g->esi < (int32_t)5); /* cmp esi, 5 / jl */

    /* Original epilogue:
         pop edi
         pop esi
       Restore the caller-saved registers exactly as the pops would. */
    g->edi = saved_edi;
    g->esi = saved_esi;

    /* eax and edx are whatever the last callee call left in them. */
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10272630(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd32(sp0 + 4u);

    const uint32_t result = cow_fn_10272630(g, sp0, param);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
