/* f_0x1027d500 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1027d500(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    t1 = rd32(arg1 + 0x2cu);
    t2 = rd32(arg1 + 0x20u);
    t3 = rd32(arg1 + 0x1cu);
    t4 = rd32(arg1 + 0x24u);
    g->ecx = t2;
    g->esp = sp0 - 8u;
    t5 = cow_cdecl(g, COW_IMG(0x10292ba0u), 4, t4, t3, t2, t1);
    t6 = g->ecx;
    if (rd32(arg1 + 0x34u) == 0u)
    {
        eax = rd32(arg1 + 0x34u);
        ecx = t6;
        edi = t5;
    }
    else
    {
        edi = t5;
        if ((int32_t)rd32(arg1 + 0x1cu) <= 0)
        {
            eax = 0u;
            ecx = rd32(arg1 + 0x1cu);
            goto L_1027d544;
        }
        eax = 0u;
L_1027d530: ;
        t7 = rd32(eax * 4u + rd32(arg1 + 0x34u));
        wr32(eax * 4u + rd32(edi + 0x4cu), t7);
        if ((int32_t)(eax + 1u) < (int32_t)rd32(arg1 + 0x1cu))
        {
            eax = eax + 1u;
            goto L_1027d530;
        }
        eax = eax + 1u;
        ecx = rd32(arg1 + 0x1cu);
    }
L_1027d544: ;
    g->edx = arg2;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x102930c0u), 2, edi, arg2);
    t8 = g->edx;
    g->edx = t8;
    return edi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1027d500(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1027d500(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
