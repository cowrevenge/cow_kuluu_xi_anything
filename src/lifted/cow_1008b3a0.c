/* f_0x1008b3a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1008b3a0(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;

    if ((rd32(self + 0x78u) & 0xff000000u) != 0u)
    {
        eax = in_eax;
        goto L_1008b3da;
    }
    if (rd8(self + 0xeeu) == 3u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 0xeeu);
        goto L_1008b3da;
    }
    eax = (in_eax & 0xffffff00u) | rd8(self + 0xeeu);
    if ((uint8_t)eax == 4u) goto L_1008b3da;
    if ((uint8_t)eax == 5u) goto L_1008b3da;
    if ((uint32_t)(int8_t)rd8(self + 0x1bcu) - 1u > 0x19u)
    {
        eax = (uint32_t)(int8_t)rd8(self + 0x1bcu) - 1u;
        goto L_1008b3da;
    }
    eax = (uint32_t)(int8_t)rd8(self + 0x1bcu) - 1u;
    t1 = rd32(COW_IMG(0x1008b3e0u) + rd8(COW_IMG(0x1008b3e8u) + eax) * 4u);
    switch (t1 - RD)
    {
    case 0x1008b3d7u: goto L_1008b3d7;
    case 0x1008b3dau: goto L_1008b3da;
    default: rt_fatal(g, COW_IMG(0x1008b3d0u), "switch");
    }
    return 0;
L_1008b3d7: ;
    return eax & 0xffffff00u;
L_1008b3da: ;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1008b3a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1008b3a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
