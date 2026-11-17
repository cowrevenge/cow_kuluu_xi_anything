/* f_0x1027c8d0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   sums the stack argument after calling FUN_10291760 once per signed count at [self+0x28], using [self+0x24] plus a 0x9c stride as the first argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1027c8d0(Guest* g, uint32_t self, uint32_t stack_arg_addr)
{
    uint32_t sum = 0u;
    int32_t count = (int32_t)rd32(self + 0x28u);

    if (count <= 0)
    {
        return 0u;
    }

    uint32_t i = 0u;
    uint32_t offset = 0u;
    const uint32_t saved_esp = g->esp;

    do
    {
        const uint32_t ecx = rd32(self + 0x24u) + offset;

        /*
         * Original stack pointer at the call site, after:
         *   push ebx, push esi, push edi, push ebp
         * is sp0 - 16.  Since stack_arg_addr == sp0 + 4, this is
         * stack_arg_addr - 20.
         */
        g->esp = stack_arg_addr - 20u;

        /*
         * Original pushes:
         *   push eax  ; eax = &stack_arg
         *   push ecx  ; ecx = [self+0x24] + offset
         * call FUN_10291760
         *
         * cdecl: last pushed is first argument, so call(ecx, &stack_arg).
         */
        cow_cdecl(g, COW_IMG(0x10291760u), 2u, ecx, stack_arg_addr);

        sum += rd32(stack_arg_addr);

        ++i;
        offset += 0x9cu;

        count = (int32_t)rd32(self + 0x28u);
    } while ((int32_t)i < count);

    g->esp = saved_esp;
    return sum;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1027c8d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = rd32(sp0 + 4u);
    const uint32_t result = cow_fn_1027c8d0(g, self, sp0 + 4u);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
