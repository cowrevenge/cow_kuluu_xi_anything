/* f_0x101fa6f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101fa6f0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    wr8(COW_IMG(0x106637a8u), 0u);
    eax = COW_IMG(0x106637b0u);
L_101fa6fd: ;
    wr32(eax - 4u, 0u);
    wr32(eax, 0u);
    wr32(eax + 4u, 0u);
    wr32(eax + 8u, 0u);
    if ((int32_t)(eax + 0x10u) < (int32_t)COW_IMG(0x106637e0u))
    {
        eax = eax + 0x10u;
        goto L_101fa6fd;
    }
    wr32(COW_IMG(0x106637dcu), 0u);
    wr32(COW_IMG(0x106637e0u), 0u);
    if (arg1 == 0u)
    {
        edx = in_edx;
    }
    else
    {
        wr8(COW_IMG(0x106637a8u), 1u);
        t1 = rd32(arg1 + 4u) & 0x7fu;
        wr32(COW_IMG(0x106637bcu), t1);
        t2 = rd32(arg1 + 4u) >> 7u & 0x3ffu;
        wr32(COW_IMG(0x106637c0u), t2);
        t3 = rd32(arg1 + 4u) >> 0x11u & 0x3fffu;
        wr32(COW_IMG(0x106637c4u), t3);
        t4 = rd32(arg1 + 4u) >> 0x1fu;
        wr32(COW_IMG(0x106637c8u), t4);
        t5 = rd32(arg1) & 0x7fu;
        wr32(COW_IMG(0x106637ccu), t5);
        t6 = rd32(arg1) >> 7u & 0x3ffu;
        wr32(COW_IMG(0x106637d0u), t6);
        t7 = rd32(arg1) >> 0x11u & 0x3fffu;
        wr32(COW_IMG(0x106637d4u), t7);
        t8 = rd32(arg1) >> 0x1fu;
        wr32(COW_IMG(0x106637d8u), t8);
        t9 = rd32(arg1 + 8u) & 1u;
        wr32(COW_IMG(0x106637dcu), t9);
        t10 = rd32(arg1 + 8u) >> 1u & 7u;
        wr32(COW_IMG(0x106637e0u), t10);
        edx = t10;
    }
    g->edx = edx;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101fa6f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101fa6f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
