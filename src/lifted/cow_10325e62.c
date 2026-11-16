/* f_0x10325e62 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10325e62(Guest* g)
{
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
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
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x10325e41u), 4, rd32(arg1), rd32(arg2), arg1, in_edi);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        ecx = t2;
        edx = t3;
    }
    else
    {
        ecx = t2;
        edx = t3;
        t4 = rd32(arg1 + 4u);
        g->eax = arg1 + 4u;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t5 = cow_cdecl(g, COW_IMG(0x10325e41u), 4, t4, 1u, arg1 + 4u, in_edi);
        t6 = g->ecx;
        t7 = g->edx;
        if (t5 == 0u)
        {
            ecx = t6;
            edx = t7;
        }
        else
        {
            ecx = t6;
            edx = t7;
            wr32(arg1 + 8u, rd32(arg1 + 8u) + 1u);
        }
    }
    t8 = rd32(arg2 + 4u);
    t9 = rd32(arg1 + 4u);
    g->eax = arg1 + 4u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t10 = cow_cdecl(g, COW_IMG(0x10325e41u), 4, t9, t8, arg1 + 4u, in_edi);
    t11 = g->ecx;
    t12 = g->edx;
    if (t10 == 0u)
    {
        ecx = t11;
        edx = t12;
    }
    else
    {
        ecx = t11;
        edx = t12;
        wr32(arg1 + 8u, rd32(arg1 + 8u) + 1u);
    }
    t13 = rd32(arg2 + 8u);
    t14 = rd32(arg1 + 8u);
    g->eax = arg1 + 8u;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t15 = cow_cdecl(g, COW_IMG(0x10325e41u), 4, t14, t13, arg1 + 8u, in_edi);
    t16 = g->edx;
    g->edx = t16;
    return t15;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10325e62(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10325e62(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
