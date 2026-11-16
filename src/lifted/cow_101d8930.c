/* f_0x101d8930 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101d8930(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + 0x89cu) == 2u) goto L_101d8942;
    return in_eax & 0xffffff00u;
L_101d8942: ;
    if (rd32(COW_IMG(0x106633fcu)) != 0u)
    {
        eax = rd32(COW_IMG(0x106633fcu));
        goto L_101d8951;
    }
    eax = rd32(COW_IMG(0x106633fcu));
    return eax & 0xffffff00u;
L_101d8951: ;
    g->esp = sp0 - 8u;
    cow_fastcall(g, COW_IMG(0x101f4b20u), arg1, in_edx, 4, 0u, 0x3cu, COW_IMG(0x106633f0u), 0x80808080u);
    t1 = g->edx;
    t2 = rd16(self + 0x898u);
    g->eax = t2;
    t3 = cow_fastcall(g, COW_IMG(0x101f4b20u), arg1, t1, 4, 1u, 0x3du, t2, 0x80808080u);
    t4 = g->edx;
    t5 = cow_fastcall(g, COW_IMG(0x101f4b20u), arg1, t4, 4, 2u, 0x3eu, COW_IMG(0x106633f0u), 0x80808080u);
    t6 = g->edx;
    t7 = cow_fastcall(g, COW_IMG(0x101f4b20u), arg1, t6, 4, 3u, 0x3fu, COW_IMG(0x106633f0u), 0x80808080u);
    t8 = g->edx;
    g->edx = t8;
    return (t7 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d8930(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101d8930(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
