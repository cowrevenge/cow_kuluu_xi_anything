/* f_0x10097730 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10097730(Guest* g)
{
    uint32_t eax;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 != 0u)
    {
        eax = arg1;
        goto L_10097795;
    }
    if (rd8(self + 0x1ffu) < 2u)
    {
        eax = (arg1 & 0xffffff00u) | rd8(self + 0x1ffu);
        goto L_1009774e;
    }
    eax = (arg1 & 0xffffff00u) | rd8(self + 0x1ffu);
    if ((uint8_t)eax > 0x63u) goto L_1009774e;
    if ((uint8_t)eax < 0x28u) goto L_10097758;
    if ((uint8_t)eax > 0x2bu) goto L_10097758;
L_1009774e: ;
    if (rd8(self + 0x1dau) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x1dau);
        goto L_10097795;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x1dau);
L_10097758: ;
    if ((rd8(self + 0x140u) & 8u) == 0u) goto L_10097766;
    return (eax & 0xffffff00u) | 0xacu;
L_10097766: ;
    if ((rd32(self + 0x124u) & 0x200000u) == 0u)
    {
        eax = rd32(self + 0x124u);
        goto L_10097778;
    }
    eax = rd32(self + 0x124u);
    return (eax & 0xffffff00u) | 0x9du;
L_10097778: ;
    if ((eax & 0x100000u) == 0u) goto L_10097784;
    return (eax & 0xffffff00u) | 0x91u;
L_10097784: ;
    if ((rd32(self + 0x130u) & 0x800000u) == 0u) goto L_10097795;
    return (eax & 0xffffff00u) | 0xa8u;
L_10097795: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10097730(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10097730(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
