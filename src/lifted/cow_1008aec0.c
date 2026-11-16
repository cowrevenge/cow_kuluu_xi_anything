/* f_0x1008aec0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1008aec0(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((rd32(self + 0x120u) >> 8u & 2u) != 0u)
    {
        eax = rd32(self + 0x120u);
        goto L_1008aed0;
    }
    eax = rd32(self + 0x120u);
    return eax & 0xffffff00u;
L_1008aed0: ;
    if (rd8(COW_IMG(0x10487e48u)) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10487e48u));
        goto L_1008aede;
    }
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10487e48u));
    return eax & 0xffffff00u;
L_1008aede: ;
    if (rd8(COW_IMG(0x1048098eu)) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1048098eu));
        goto L_1008aeec;
    }
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1048098eu));
    return eax & 0xffffff00u;
L_1008aeec: ;
    t1 = rd32(COW_IMG(0x10456a28u));
    wr8(COW_IMG(0x104807f2u), (uint8_t)arg1);
    wr8(COW_IMG(0x10482f1eu), 1u);
    wr8(COW_IMG(0x10482f18u), 1u);
    wr8(COW_IMG(0x1048098eu), 1u);
    wr32(COW_IMG(0x10485f98u), 0x71726d7au);
    wr32(t1, 0x70u);
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1008aec0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1008aec0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
