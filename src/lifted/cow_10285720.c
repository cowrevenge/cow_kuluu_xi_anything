/* f_0x10285720 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   Calls the function pointer at [param+8] when present; otherwise reports a NULL virtual function and returns zero-extended high bytes of the second report call.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_10285720(Guest* g, uint32_t sp0, uint32_t param)
{
    const uint32_t saved_esi = g->esi;
    uint32_t esi = param;
    uint32_t eax = rd32(esi + 8u);

    if (eax != 0u)
    {
        /*
         * Original:
         *   push esi                 ; save, esp = sp0 - 4
         *   push esi                 ; argument, esp = sp0 - 8
         *   call eax                 ; return address, esp = sp0 - 12
         *   add esp, 4               ; caller pops argument, esp = sp0 - 4
         *   pop esi                  ; esp = sp0
         *   ret
         *
         * cow_cdecl pushes its own argument and return address from g->esp.
         * Therefore start it at the post-save-push stack pointer.
         */
        g->esp = sp0 - 4u;
        cow_cdecl(g, eax, 1u, esi);

        g->esp = sp0;
        g->esi = saved_esi;
        return g->eax;
    }

    /*
     * Original error path:
     *   push esi                     ; save, esp = sp0 - 4
     *   push 0x25
     *   push 0x103b7c6c
     *   push 0x103b379c
     *   call 0x102858b0
     *   mov eax, [esi]
     *   push eax
     *   push esi
     *   push 0x103b7c34
     *   call 0x102858b0
     *   add esp, 0x18
     *   xor al, al
     *   pop esi
     *   ret
     *
     * The first call's arguments remain on the stack until after the second
     * call, so the second callee sees a stack pointer 16 bytes lower than if
     * both calls were issued independently from sp0.
     */

    /* Before first call: esp = sp0 - 4 (saved esi). cow_cdecl adds 3 args + ret. */
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 3u,
              COW_IMG(0x103b379cu),
              COW_IMG(0x103b7c6cu),
              0x25u);

    /*
     * After the original first call, esp is sp0 - 16 because the three pushed
     * arguments are still live. cow_cdecl has already popped them, so restore
     * that stack depth before issuing the second call.
     */
    g->esp = sp0 - 16u;

    eax = rd32(esi);

    /* Before second call: cow_cdecl adds 3 args + ret from sp0 - 16. */
    cow_cdecl(g, COW_IMG(0x102858b0u), 3u,
              COW_IMG(0x103b7c34u),
              esi,
              eax);

    /*
     * Original add esp, 0x18 after the second call:
     *   after call: esp = sp0 - 28
     *   add esp, 24: esp = sp0 - 4
     *
     * cow_cdecl has already popped its own 12 bytes, so set the stack pointer
     * to the value just before the final pop esi.
     */
    g->esp = sp0 - 4u;

    /* xor al, al: clear only the low byte of the second call's return value. */
    eax = g->eax & 0xFFFFFF00u;

    g->esp = sp0;
    g->esi = saved_esi;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10285720(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd32(sp0 + 4u);

    const uint32_t result = cow_fn_10285720(g, sp0, param);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
