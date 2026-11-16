/* f_0x101fba50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101fba50(Guest* g)
{
    double d7;
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd16(sp0 + 4u) != 5u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        g->edx = in_edx;
        g->esp = sp0;
        t1 = cow_thiscall(g, COW_IMG(0x101fb400u), self, 0);
        t2 = g->edx;
        if (t1 == 0u)
        {
            eax = t1;
            edx = t2;
        }
        else
        {
            eax = t1;
            edx = t2;
            if (rd32(eax) == 0u)
            {
                eax = rd32(eax);
            }
            else
            {
                eax = rd32(eax);
                t3 = (uint32_t)(int16_t)rd16(eax + 8u);
                t4 = rd16(eax + 6u);
                wr32(sp0 + 4u, t3);
                t5 = rd32(COW_IMG(0x10663888u));
                t6 = rd32(sp0 + 4u);
                wr32(sp0 + 4u, (uint32_t)(int16_t)t4);
                d7 = (double)(float)(double)(int32_t)rd32(sp0 + 4u);
                g->edx = (uint32_t)(int16_t)t4;
                g->esp = sp0;
                cow_thiscall(g, COW_IMG(0x101ef990u), t5, 2, cow_f2bits(d7), cow_f2bits((double)(float)(double)(int32_t)t6));
                t8 = g->edx;
                g->edx = t8;
                t9 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10385040u), 1u, 0u);
                t10 = g->ecx;
                t11 = g->edx;
                g->edx = t11;
                t12 = cow_thiscall(g, COW_IMG(0x10037b90u), t10, 0);
                t13 = g->edx;
                eax = t12;
                edx = t13;
            }
        }
    }
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101fba50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101fba50(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
