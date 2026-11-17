/* f_0x10231f50 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   returns whether table[arg1] has any bit set that is also set in the stack address of arg1, after side-effecting calls to FUN_1022f0f0 and FUN_102333f0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_10231f50(Guest* g, uint32_t self, uint32_t arg1)
{
    const uint32_t sp0 = g->esp;

    /*
     * Stack layout at entry:
     *   [sp0]     return address
     *   [sp0+4]   arg1
     *
     * push ecx:
     *   esp = sp0-4
     *   [sp0-4] = self
     *
     * eax = [ecx + 0x6c]
     * ecx = &self = sp0-4
     * edx = &arg1 = sp0+4
     *
     * push ecx:
     *   esp = sp0-8
     *   [sp0-8] = &self
     *
     * mov ecx, [esp+0xc]
     *   ecx = [sp0+4] = arg1
     *
     * push edx:
     *   esp = sp0-12
     *   [sp0-12] = &arg1
     *
     * push 0x100:
     *   esp = sp0-16
     *   [sp0-16] = 0x100
     *
     * push eax:
     *   esp = sp0-20
     *   [sp0-20] = v6c
     *
     * push ecx:
     *   esp = sp0-24
     *   [sp0-24] = arg1
     */

    const uint32_t v6c = rd32(self + 0x6cu);

    /*
     * First callee:
     *   ecx = ((v6c + (v6c*9)*4) * 4) + 0x10668380
     *       = v6c*148 + 0x10668380
     *
     * It is a thiscall/stdcall-like function ending in ret 4.
     * It receives one stack argument: arg1.
     */
    const uint32_t mul9 = v6c + v6c * 8u;
    const uint32_t mul37 = v6c + mul9 * 4u;
    const uint32_t this1 = mul37 * 4u + COW_IMG(0x10668380u);

    const uint32_t r1 = cow_thiscall(g, COW_IMG(0x1022f0f0u), this1, 1u, arg1);

    /*
     * After the first callee returns with ret 4, esp = sp0-20.
     *
     * push eax:
     *   esp = sp0-24
     *   [sp0-24] = r1
     *
     * Remaining stack before the second call:
     *   [sp0-24] = r1
     *   [sp0-20] = v6c
     *   [sp0-16] = 0x100
     *   [sp0-12] = &arg1
     *   [sp0-8]  = &self
     *   [sp0-4]  = self
     *
     * The second callee is cdecl and ends in a bare ret.
     * Its five arguments, from lowest to highest stack address, are:
     *   r1, v6c, 0x100, &arg1, &self.
     *
     * The self word at [sp0-4] is leftover from the initial push ecx and is
     * popped by the final add esp, 0x18.
     */
    cow_cdecl(g, COW_IMG(0x102333f0u), 5u,
              r1,
              v6c,
              0x100u,
              sp0 + 4u,
              sp0 - 4u);

    /*
     * After the second callee returns, esp = sp0-24.
     *
     * mov ecx, [esp+0x1c]
     *   ecx = [sp0+4] = arg1
     *
     * mov eax, [ecx*4 + 0x1047fca8]
     *   eax = table[arg1]
     *
     * mov ecx, [esp+0x14]
     *   ecx = [sp0-12] = &arg1
     */
    const uint32_t table_val = rd32(COW_IMG(0x1047fca8u) + arg1 * 4u);
    const uint32_t mask = rd32(sp0 - 12u);

    const uint32_t and_val = table_val & mask;

    /*
     * neg eax / sbb eax, eax / neg eax
     *
     * This normalizes and_val to 0 if zero, or 1 if non-zero.
     */
    return (and_val != 0u) ? 1u : 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10231f50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10231f50(g, g->ecx, rd32(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result & 0xFFu, 4u);
}
/* COW_ADAPTER END */
