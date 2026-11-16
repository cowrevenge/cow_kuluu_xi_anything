/* f_0x1018aae0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1018aae0(Guest* g)
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
    t1 = rd32(esi + 0xd8u);
    if (!(t1 >> 0xcu & 1u))
    {
        eax = t1;
        edx = in_edx;
    }
    else
    {
        eax = t1;
        if ((eax >> 8u & 8u) != 0u)
        {
            edx = in_edx;
        }
        else
        {
            g->eax = eax;
            g->edx = in_edx;
            g->esp = sp0 - 4u;
            t2 = cow_thiscall(g, COW_IMG(0x100539e0u), esi, 0);
            t3 = g->edx;
            if ((uint8_t)t2 != 0u)
            {
                eax = t2;
                edx = t3;
            }
            else
            {
                eax = t2;
                edx = t3;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 4u;
                t4 = cow_thiscall(g, COW_IMG(0x100493c0u), esi, 0);
                t5 = g->edx;
                if ((rd8(t4) & 4u) != 0u)
                {
                    eax = t4;
                    edx = t5;
                    goto L_1018ab2a;
                }
                eax = t4;
                edx = t5;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 4u;
                t6 = cow_thiscall(g, COW_IMG(0x100493c0u), esi, 0);
                t7 = g->edx;
                if ((rd32(t6) & 0x4000000u) == 0u)
                {
                    eax = t6;
                    edx = t7;
                    goto L_1018ab31;
                }
                eax = t6;
                edx = t7;
L_1018ab2a: ;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 4u;
                t8 = cow_thiscall(g, COW_IMG(0x100531d0u), esi, 0);
                t9 = g->edx;
                eax = t8;
                edx = t9;
            }
        }
    }
L_1018ab31: ;
    g->edx = edx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018aae0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1018aae0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
