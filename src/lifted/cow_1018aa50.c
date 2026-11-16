/* f_0x1018aa50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1018aa50(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg1 == 0u)
    {
        esi = 0u;
    }
    else
    {
        esi = rd32(arg1);
    }
    if (!(rd32(esi + 0xd8u) >> 0xcu & 1u))
    {
        eax = rd32(esi + 0xd8u) >> 0xcu;
        edx = in_edx;
    }
    else
    {
        if (rd32(rd32(COW_IMG(0x1065cb04u)) + 0x1bcu) == 0u)
        {
            eax = rd32(rd32(COW_IMG(0x1065cb04u)) + 0x1bcu);
            edx = in_edx;
            goto L_1018aaa2;
        }
        eax = rd32(rd32(COW_IMG(0x1065cb04u)) + 0x1bcu);
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t1 = cow_thiscall(g, COW_IMG(0x100539e0u), esi, 0);
        t2 = g->edx;
        if ((uint8_t)t1 != 0u)
        {
            eax = t1;
            edx = t2;
            goto L_1018aa93;
        }
        eax = t1;
        edx = t2;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t3 = cow_thiscall(g, COW_IMG(0x100493c0u), esi, 0);
        t4 = g->edx;
        if ((rd8(t3) & 4u) != 0u)
        {
            eax = t3;
            edx = t4;
            goto L_1018aab0;
        }
        eax = t3;
        edx = t4;
L_1018aa93: ;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t5 = cow_thiscall(g, COW_IMG(0x100493c0u), esi, 0);
        t6 = g->edx;
        if ((rd32(t5) & 0x4000000u) != 0u)
        {
            eax = t5;
            edx = t6;
            goto L_1018aab0;
        }
        eax = t5;
        edx = t6;
L_1018aaa2: ;
        g->eax = eax;
        g->esp = sp0 - 4u;
        t7 = cow_thiscall(g, COW_IMG(0x100531d0u), esi, 0);
        wr32(esi + 0x64u, arg2);
        eax = t7;
        edx = arg2;
    }
L_1018aab0: ;
    g->edx = edx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018aa50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1018aa50(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
