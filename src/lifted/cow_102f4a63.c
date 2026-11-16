/* f_0x102f4a63 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102f4a63(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
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

    if (rd32(self + 0x10u) == 0u)
    {
        if (rd32(self + 0x50u) == 0u)
        {
            loc_10 = 0u;
            loc_c = 1u;
            loc_18 = 8u;
        }
        else
        {
            loc_10 = 0x200u;
            loc_c = 0u;
            loc_18 = 1u;
        }
        t1 = rd32(self + 4u);
        g->eax = self + 0x58u;
        g->ecx = 0u;
        g->edx = in_edx;
        g->esp = sp0 - 0x24u;
        t2 = cow_stdcall(g, COW_IMG(0x102d2f60u), 7, t1, self + 0x58u, self + 0x5cu, 0u, loc_10, self + 0x54u, loc_c);
        t3 = g->ecx;
        t4 = g->edx;
        if ((int32_t)t2 < 0)
        {
            eax = t2;
        }
        else
        {
            ecx = t3;
            edx = t4;
            if (loc_18 == 0u) goto L_102f4b16;
            loc_14 = 0u;
            loc_8 = self + 0x10u;
L_102f4ad4: ;
            t5 = rd32(self + 0x54u);
            t6 = rd32(self + 0x5cu);
            t7 = rd32(self + 0x58u);
            t8 = rd32(self + 4u);
            g->esp = sp0 - 0x24u;
            t9 = cow_stdcall(g, COW_IMG(0x102d2fd9u), 8, t8, t7, t6, 1u, loc_10, t5, loc_c, loc_8);
            if ((int32_t)t9 < 0)
            {
                eax = t9;
                goto L_102f4b18;
            }
            g->eax = rd32(loc_8);
            g->edx = rd32(rd32(loc_8));
            t10 = rd32(loc_8);
            t11 = rd32(rd32(loc_8));
            g->esp = sp0 - 0x24u;
            t12 = cow_thiscall(g, rd32(t11 + 0x3cu), loc_8 + 0x20u, 3, t10, 0u, loc_8 + 0x20u);
            t13 = g->ecx;
            t14 = g->edx;
            if ((int32_t)t12 < 0)
            {
                eax = t12;
                goto L_102f4b18;
            }
            ecx = t13;
            edx = t14;
            if (loc_14 + 1u < loc_18)
            {
                loc_14 = loc_14 + 1u;
                loc_8 = loc_8 + 4u;
                goto L_102f4ad4;
            }
L_102f4b16: ;
            eax = 0u;
        }
L_102f4b18: ;
    }
    else
    {
        eax = 0u;
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f4a63(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102f4a63(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
