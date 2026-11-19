/* f_0x10285f20 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   normalises the result of FUN_10313de9(param) and returns 0 if it is masked to zero, otherwise transfers to the continuation at 0x10285f40 with the original stack/register state.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
static uint32_t cow_fn_10285f20_norm(Guest* g, uint32_t param_1)
{
    uint32_t eax = cow_cdecl(g, COW_IMG(0x10313de9u), 1u, param_1);

    /* and eax, 0x8000000f */
    eax &= 0x8000000Fu;

    /* jns 0x10285f3a : if sign bit clear, skip the adjustment */
    if ((int32_t)eax < 0)
    {
        /* dec eax / or eax, 0xfffffff0 / inc eax */
        eax = eax - 1u;
        eax = eax | 0xFFFFFFF0u;
        eax = eax + 1u;
    }

    return eax;
}

uint32_t cow_fn_10285f20(Guest* g, uint32_t self, uint32_t param_1, uint32_t sp0)
{
    uint32_t saved_edi;

    (void)self;

    /*
     * Original prologue:
     *   push edi                         ; save caller's edi at [sp0-4]
     *   mov  edi, [esp+8]                ; edi = param_1
     *   push edi                         ; argument at [sp0-8]
     *   call FUN_10313de9
     *   add  esp, 4
     *
     * At the point of the conditional jump to 0x10285f40, esp is sp0-8,
     * edi is param_1, and eax is the normalised result.
     */

    /* and eax, 0x8000000f / jns / dec / or / inc */
    const uint32_t eax = cow_fn_10285f20_norm(g, param_1);

    /* jne 0x10285f40 / xor eax,eax / pop edi / ret */
    if (eax == 0u)
    {
        return 0u;
    }

    /*
     * The original jumps to 0x10285f40 without changing esp.
     * Re-create that exact guest state before invoking the continuation.
     *
     * Stack layout expected by 0x10285f40:
     *   [esp+0] = param_1
     *   [esp+4] = saved_edi
     */
    saved_edi = g->edi;

    g->esp = sp0 - 8u;
    wr32(g->esp + 0u, param_1);
    wr32(g->esp + 4u, saved_edi);

    g->edi = param_1;
    g->eax = eax;

    /*
     * Continue in the original code.  It ends with the common epilogue:
     *   pop edi
     *   ret
     * so it restores edi and returns to us.
     */
    cow_cdecl(g, COW_IMG(0x10285f40u), 0u);

    /* Restore the caller-visible state that the original epilogue would leave. */
    g->edi = saved_edi;

    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10285f20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param_1 = rd32(sp0 + 4u);

    const uint32_t result = cow_fn_10285f20(g, g->ecx, param_1, sp0);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
