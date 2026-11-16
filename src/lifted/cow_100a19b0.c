/* f_0x100a19b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100a19b0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 12u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, sp0 - 4u);
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x100e47a0u), 1, sp0 - 4u);
    t2 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        edx = t2;
        goto L_100a19c6;
    }
    eax = t1;
    edx = t2;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_100a19c6: ;
    if ((uint16_t)arg1 >= 0x146u)
    {
        eax = arg1;
        goto L_100a19f0;
    }
    if ((int8_t)(rd8(self + 1u) >> 3u & 3u) <= (int8_t)rd8(COW_IMG(0x1035b950u) + (uint16_t)arg1))
    {
        eax = (uint16_t)arg1;
        edx = rd8(self + 1u) >> 3u & 3u;
        goto L_100a19f0;
    }
    edx = rd8(self + 1u) >> 3u & 3u;
    g->edx = edx;
    return (arg1 & 0xff00u) | 1u;
L_100a19f0: ;
    g->edx = edx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a19b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100a19b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
