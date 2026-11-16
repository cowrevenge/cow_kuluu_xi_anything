/* f_0x101af500 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101af500(Guest* g)
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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 > 0x400u) goto L_101af565;
    if (arg1 == 0x400u) goto L_101af56c;
    if (arg1 == 4u) goto L_101af54d;
    if (arg1 != 8u)
    {
        eax = arg1;
        edx = in_edx;
        goto L_101af570;
    }
    g->eax = arg1;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_stdcall(g, COW_IMG(0x101aebb0u), 0);
    t2 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        edx = t2;
        goto L_101af570;
    }
    edx = t2;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t3 = cow_thiscall(g, COW_IMG(0x101b5c70u), rd32(self + 0x1cu), 0);
    t4 = g->edx;
    if ((uint8_t)t3 != 0u)
    {
        eax = t3;
        edx = t4;
        goto L_101af53e;
    }
    eax = t3;
    edx = t4;
    wr8(self + 0x28u, 1u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t5 = cow_stdcall(g, COW_IMG(0x101aeb80u), 0);
    t6 = g->edx;
    g->edx = t6;
    return t5;
L_101af53e: ;
    wr8(self + 0x28u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t7 = cow_stdcall(g, COW_IMG(0x101aeb80u), 0);
    t8 = g->edx;
    g->edx = t8;
    return t7;
L_101af54d: ;
    if (rd8(self + 0x28u) == 0u)
    {
        eax = (arg1 & 0xffffff00u) | rd8(self + 0x28u);
        edx = in_edx;
        goto L_101af570;
    }
    eax = (arg1 & 0xffffff00u) | rd8(self + 0x28u);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t9 = cow_thiscall(g, COW_IMG(0x101aeb30u), self, 1, 0u);
    t10 = g->edx;
    wr8(self + 0x28u, 0u);
    g->edx = t10;
    return t9;
L_101af565: ;
    if (arg1 != 0x2000u)
    {
        eax = arg1;
        edx = in_edx;
        goto L_101af570;
    }
L_101af56c: ;
    wr8(self + 0x28u, 0u);
    eax = arg1;
    edx = in_edx;
L_101af570: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101af500(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101af500(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
