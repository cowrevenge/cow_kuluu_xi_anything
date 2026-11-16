/* f_0x10255380 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10255380(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((uint8_t)arg1 != 0u)
    {
        if (rd32(self + 4u) != 0u)
        {
            eax = rd32(self + 4u);
            if (rd8(eax - 1u) == 0u)
            {
                ecx = (self & 0xffffff00u) | rd8(eax - 1u);
                eax = eax - 1u;
                goto L_102553a5;
            }
            ecx = (self & 0xffffff00u) | rd8(eax - 1u);
            eax = eax - 1u;
            if ((uint8_t)ecx == 0xffu) goto L_102553a5;
            wr8(eax, (uint8_t)((uint8_t)ecx - 1u));
        }
    }
L_102553ae: ;
    wr32(self + 4u, 0u);
    wr32(self + 8u, 0u);
    wr32(self + 0xcu, 0u);
    return;
L_102553a5: ;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, in_edx, 1, 1, eax);
    goto L_102553ae;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10255380(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10255380(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
