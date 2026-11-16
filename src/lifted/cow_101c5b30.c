/* f_0x101c5b30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101c5b30(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int32_t)arg1 < 0) goto L_101c5b4a;
    if (rd32(arg1 * 0x10u + rd32(self)) != 0u)
    {
        eax = arg1 * 0x10u + rd32(self);
        goto L_101c5b51;
    }
L_101c5b4a: ;
    return 0u;
L_101c5b51: ;
    t1 = rd32(eax + 8u);
    t2 = rd32(eax + 4u);
    t3 = rd32(self + 4u);
    g->eax = t3;
    g->edx = t2;
    g->esp = sp0 - 8u;
    t4 = cow_thiscall(g, COW_IMG(0x101c4a10u), rd32(COW_IMG(0x10662dccu)), 3, t3, t2, t1);
    t5 = g->edx;
    if ((uint8_t)t4 == 0u)
    {
        edx = t5;
        goto L_101c5b73;
    }
    edx = t5;
    g->edx = edx;
    return 0u;
L_101c5b73: ;
    wr32(arg1 * 0x10u + rd32(self), 0u);
    g->edx = edx;
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c5b30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101c5b30(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
