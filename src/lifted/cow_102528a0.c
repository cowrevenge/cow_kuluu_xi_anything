/* f_0x102528a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_102528a0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((int32_t)arg2 <= 0) goto L_102528c3;
    if ((rd32(arg3) & 0x10u) != 0u) goto L_102528c3;
    eax = rd32(arg3);
    wr32(arg3 + 0x10u, arg2);
    wr32(arg3 + 0x1cu, arg1);
    t1 = (eax & 0xffffff00u) | (uint8_t)(eax | 2u);
    wr32(arg3, t1);
    return t1;
L_102528c3: ;
    if (arg1 == 0u)
    {
        edx = in_edx;
    }
    else
    {
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x10276110u), 3, arg1, COW_IMG(0x10389a74u), 0x78u);
        t2 = g->edx;
        edx = t2;
    }
    t3 = (rd32(arg3) & 0xffffff00u) | (rd32(arg3) & 0xefu);
    wr32(arg3, t3);
    g->edx = edx;
    return t3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102528a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102528a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
