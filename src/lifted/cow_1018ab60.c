/* f_0x1018ab60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1018ab60(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 == 0u)
    {
        esi = 0u;
    }
    else
    {
        esi = rd32(arg1);
    }
    if ((rd32(esi + 0xd8u) >> 8u & 8u) == 0u)
    {
        eax = rd32(esi + 0xd8u);
        edx = in_edx;
    }
    else
    {
        eax = rd32(esi + 0xd8u);
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t1 = cow_thiscall(g, COW_IMG(0x100539e0u), esi, 0);
        t2 = g->edx;
        if ((uint8_t)t1 != 0u)
        {
            eax = t1;
            edx = t2;
        }
        else
        {
            eax = t1;
            edx = t2;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 4u;
            t3 = cow_thiscall(g, COW_IMG(0x100493c0u), esi, 0);
            t4 = g->ecx;
            t5 = g->edx;
            if ((rd8(t3) & 4u) != 0u)
            {
                eax = t3;
                ecx = t4;
                edx = t5;
                goto L_1018aba0;
            }
            eax = t3;
            edx = t5;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 4u;
            t6 = cow_thiscall(g, COW_IMG(0x100493c0u), esi, 0);
            t7 = g->ecx;
            t8 = g->edx;
            if ((rd32(t6) & 0x4000000u) == 0u)
            {
                eax = t6;
                edx = t8;
                goto L_1018aba9;
            }
            eax = t6;
            ecx = t7;
            edx = t8;
L_1018aba0: ;
            g->edx = edx;
            g->esp = sp0 - 4u;
            t9 = cow_call_regs(g, COW_IMG(0x1018abb0u), eax, g->ecx, g->edx, 1, 1, esi);
            t10 = g->edx;
            eax = t9;
            edx = t10;
        }
    }
L_1018aba9: ;
    g->edx = edx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018ab60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1018ab60(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
