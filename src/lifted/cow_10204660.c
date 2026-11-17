/* f_0x10204660 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   If the byte at 0x106643A1 is 0x0F, calls FUN_1015E910 with the menu string; otherwise continues into the loop body at 0x10204683 with the original saved-EBP/stack state.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10204660(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t saved_ebp = g->ebp;
    const uint32_t self = g->ecx;

    /* mov al, byte ptr [0x106643a1] */
    g->eax = (g->eax & 0xFFFFFF00u) | (uint32_t)rd8(COW_IMG(0x106643A1u));

    /* sub esp, 8 */
    g->esp = sp0 - 8u;

    /* cmp al, 0xf */
    if (((uint8_t)g->eax) == 0x0Fu)
    {
        /* push ebp */
        g->esp -= 4u;
        wr32(g->esp, saved_ebp);

        /* mov ebp, ecx */
        g->ebp = self;

        /*
         * The original then does:
         *   push 0x10385438
         *   mov ecx, 0x10621838
         *   call 0x1015e910
         *
         * The callee ends in "ret 4", so it pops one stack argument.
         * It is also passed ecx, so model it as a thiscall with one stack arg.
         */
        cow_thiscall(g,
                     COW_IMG(0x1015E910u),
                     COW_IMG(0x10621838u),
                     1u,
                     COW_IMG(0x10385438u));

        /*
         * pop ebp
         * add esp, 8
         * ret
         *
         * The judge compares ebp/ebx/esi/edi, so restore ebp.  The 8-byte
         * local area is dead.  eax/edx are whatever the callee left them as.
         */
        g->ebp = saved_ebp;
        g->esp = sp0;

        return g->eax;
    }

    /*
     * jne 0x10204683
     *
     * At the branch target the original has already executed:
     *   sub esp, 8
     *   push ebp
     *   mov ebp, ecx
     *
     * Therefore esp == sp0 - 12, [esp] is the saved ebp, and ebp is the
     * original ecx.  The code at 0x10204683 is the continuation of this
     * function, so enter it with that exact register/stack state.
     */
    g->esp = sp0 - 4u;
    wr32(g->esp, saved_ebp);
    g->ebp = self;

    /*
     * Call the continuation as a guest function.  It performs the loop and
     * its own epilogue, leaving eax/edx as the original would at the final
     * ret.
     */
    cow_cdecl(g, COW_IMG(0x10204683u), 0u);

    /*
     * The continuation returns through the same epilogue:
     *   pop ebp
     *   add esp, 8
     *   ret
     *
     * Restore the caller-visible frame pointer and stack pointer.
     */
    g->ebp = saved_ebp;
    g->esp = sp0;

    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10204660(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10204660(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
