/* f_0x100a35a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100a35a0(Guest* g)
{
    uint32_t eax;
    const uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg2 != 0u) goto L_100a35ab;
    return in_eax & 0xffffff00u;
L_100a35ab: ;
    if (rd8(COW_IMG(0x10485824u)) & 1u) goto L_100a35b7;
    return in_eax & 0xffffff00u;
L_100a35b7: ;
    if ((int8_t)(rd16(COW_IMG(0x104856a4u) + arg1 * 2u) >> 8u) >= 0)
    {
        eax = (arg1 & 0xffff0000u) | rd16(COW_IMG(0x104856a4u) + arg1 * 2u);
        goto L_100a35d1;
    }
    eax = (arg1 & 0xffff0000u) | rd16(COW_IMG(0x104856a4u) + arg1 * 2u);
    if ((eax & 0x7fffu) != 0u) goto L_100a35d1;
    return eax & 0xffffff00u;
L_100a35d1: ;
    wr32(arg2, eax & 0x7fffu);
    return (eax & 0x7f00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a35a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100a35a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
