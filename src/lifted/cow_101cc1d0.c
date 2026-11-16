/* f_0x101cc1d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101cc1d0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x101cc220u), in_eax, g->ecx, g->edx, 1, 1, arg1);
    t2 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        eax = t1;
        goto L_101cc219;
    }
    edx = t2;
    g->esp = sp0 - 4u;
    t3 = cow_thiscall(g, COW_IMG(0x1008e150u), arg1, 0);
    if ((uint8_t)t3 != 0u) goto L_101cc1f8;
    if (!(rd32(arg1 + 0x1d0u) >> 8u & 1u))
    {
        eax = rd32(arg1 + 0x1d0u);
        goto L_101cc219;
    }
L_101cc1f8: ;
    if ((rd32(arg1 + 0x128u) >> 3u & 1u) == 1u)
    {
        eax = (rd32(arg1 + 0x128u) >> 3u & 0xffffff00u) | (rd32(arg1 + 0x128u) >> 3u & 1u);
        goto L_101cc219;
    }
    eax = (rd32(arg1 + 0x128u) >> 3u & 0xffffff00u) | (rd32(arg1 + 0x128u) >> 3u & 1u);
    if (rd32(arg1 + 0x130u) >> 0x14u & 1u) goto L_101cc219;
    return (eax & 0xffffff00u) | 1u;
L_101cc219: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101cc1d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101cc1d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
