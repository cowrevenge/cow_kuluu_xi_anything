/* f_0x10030b70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u16 stack_args=1 */
uint32_t cow_fn_10030b70(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + 8u) == 0u)
    {
        edx = in_edx;
        goto L_10030bc0;
    }
    eax = rd32(self + 8u);
    g->edx = in_edx;
    g->esp = sp0;
    t1 = cow_stdcall(g, COW_IMG(0x10072fb0u), 1, eax);
    t2 = g->edx;
    if (t1 == 0u)
    {
        edx = t2;
        goto L_10030bc0;
    }
    eax = t1;
    edx = t2;
    if (rd16(eax + 0x40u) != 0u)
    {
        ecx = 0u;
L_10030b96: ;
        wr8(arg1 + rd16((uint16_t)ecx * 2u + rd32(eax + 0x3cu)), 0x80u);
        if ((uint16_t)(ecx + 1u) < rd16(eax + 0x40u))
        {
            ecx = ecx + 1u;
            goto L_10030b96;
        }
        edx = arg1;
    }
    t3 = rd16(eax + 0x40u);
    g->edx = edx;
    return t3;
L_10030bc0: ;
    g->edx = edx;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10030b70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10030b70(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
