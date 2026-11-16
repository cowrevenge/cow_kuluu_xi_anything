/* f_0x10230e90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10230e90(Guest* g)
{
    uint32_t eax;
    const uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 != 0u) goto L_10230e9b;
    return in_eax & 0xffffff00u;
L_10230e9b: ;
    if ((int8_t)(rd16(COW_IMG(0x104856a4u) + rd8(arg1 + 2u) * 2u) >> 8u) >= 0)
    {
        eax = (rd8(arg1 + 2u) & 0xffff0000u) | rd16(COW_IMG(0x104856a4u) + rd8(arg1 + 2u) * 2u);
        goto L_10230eb9;
    }
    eax = (rd8(arg1 + 2u) & 0xffff0000u) | rd16(COW_IMG(0x104856a4u) + rd8(arg1 + 2u) * 2u);
    if ((eax & 0x7fffu) != 0u) goto L_10230eb9;
    return eax & 0xffffff00u;
L_10230eb9: ;
    return (eax & 0x7f00u) | (eax & 0x7fffu) >= (uint16_t)rd32(arg1);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10230e90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10230e90(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
