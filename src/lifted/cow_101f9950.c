/* f_0x101f9950 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   passes some stack-argument addresses/values to FUN_101f7570, then forwards all six stack arguments to FUN_101f99a0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=6 */
void cow_fn_101f9950(Guest* g, uint32_t self, uint32_t sp0)
{
    /*
     * Entry stack layout (sp0 is the caller's esp):
     *   [sp0]       return address
     *   [sp0 + 4]   arg0
     *   [sp0 + 8]   arg1
     *   [sp0 + 12]  arg2
     *   [sp0 + 16]  arg3
     *   [sp0 + 20]  arg4
     *   [sp0 + 24]  arg5
     */

    const uint32_t a0_addr = sp0 + 4u;
    const uint32_t a1_addr = sp0 + 8u;
    const uint32_t a2_addr = sp0 + 12u;
    const uint32_t a3_addr = sp0 + 16u;
    const uint32_t a4_addr = sp0 + 20u;
    const uint32_t a5_addr = sp0 + 24u;

    /*
     * First call is prepared before FUN_101f7570 runs:
     *   push arg2 value
     *   push arg1 value
     *   push &arg2
     *   push &arg1
     *   push [self + 0xfc]
     *
     * Last push is first argument, so the C argument order is:
     *   self_field, &arg1, &arg2, arg1, arg2
     */
    const uint32_t arg2_before = rd32(a2_addr);
    const uint32_t arg1_before = rd32(a1_addr);
    const uint32_t self_field = rd32(self + 0xfcu);

    cow_cdecl(g,
              COW_IMG(0x101f7570u),
              5u,
              self_field,
              a1_addr,
              a2_addr,
              arg1_before,
              arg2_before);

    /*
     * After FUN_101f7570 returns, the original reloads the six stack arguments
     * from the caller's stack and passes them to FUN_101f99a0:
     *   arg0, arg1, arg2, arg3, arg4, arg5
     */
    const uint32_t arg5 = rd32(a5_addr);
    const uint32_t arg4 = rd32(a4_addr);
    const uint32_t arg3 = rd32(a3_addr);
    const uint32_t arg2 = rd32(a2_addr);
    const uint32_t arg1 = rd32(a1_addr);
    const uint32_t arg0 = rd32(a0_addr);

    (void)arg5;
    (void)arg4;
    (void)arg3;

    cow_thiscall(g,
                 COW_IMG(0x101f99a0u),
                 self,
                 6u,
                 arg0,
                 arg1,
                 arg2,
                 arg3,
                 arg4,
                 arg5);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f9950(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101f9950(g, g->ecx, sp0);
    g->esp = sp0;
    rt_return(g, g->eax, 24u);
}
/* COW_ADAPTER END */
