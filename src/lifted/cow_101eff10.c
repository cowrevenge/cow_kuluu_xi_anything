/* f_0x101eff10 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Clears any of six 12-byte-strided bytes starting at self+4 that equal the supplied byte argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101eff10(Guest* g, uint32_t self, uint32_t ch)
{
    (void)g;

    uint32_t addr = self + 4u;
    for (uint32_t i = 0u; i < 6u; ++i)
    {
        if ((uint8_t)rd8(addr) == (uint8_t)ch)
        {
            wr8(addr, 0u);
        }
        addr += 0xcu;
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101eff10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t ch = rd8(sp0 + 4u);

    cow_fn_101eff10(g, self, ch);

    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
