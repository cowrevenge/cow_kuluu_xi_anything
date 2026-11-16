/* f_0x100977a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100977a0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;

    if (rd8(self + 0x1ffu) < 8u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 0x1ffu);
        goto L_100977e4;
    }
    eax = (in_eax & 0xffffff00u) | rd8(self + 0x1ffu);
    if ((uint8_t)eax > 9u) goto L_100977e4;
    if (rd16(self + 0x210u) == 0u)
    {
        eax = rd32(self + 0x13cu);
        edx = rd16(self + 0x210u) != 0u;
        eax = eax >> 2u;
    }
    else
    {
        eax = rd32(self + 0x13cu);
        edx = rd16(self + 0x210u) != 0u;
        eax = eax >> 4u;
    }
    return rd8((eax & 3u) + rd32(COW_IMG(0x1035b624u) + (edx != 0u) * 4u));
L_100977e4: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100977a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100977a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
