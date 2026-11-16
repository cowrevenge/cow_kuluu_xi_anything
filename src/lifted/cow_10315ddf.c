/* f_0x10315ddf - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10315ddf(Guest* g)
{
    uint32_t ecx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
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

    if (arg1 >= rd32(COW_IMG(0x109f83e0u)))
    {
        ecx = self;
        goto L_10315e24;
    }
    if (!(rd8((arg1 & 0x1fu) * 0x24u + rd32(COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u) + 4u) & 1u))
    {
        ecx = rd32(COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u);
        goto L_10315e24;
    }
    ecx = rd32(COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u);
    g->ecx = ecx;
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x10320d4fu), g->eax, g->ecx, in_edx, 1, 1, arg1);
    t1 = g->ecx;
    t2 = g->edx;
    g->ecx = t1;
    g->edx = t2;
    g->esp = sp0 - 4u;
    t3 = cow_cdecl(g, COW_IMG(0x10315e3cu), 3, arg1, arg1, in_edi);
    t4 = g->ecx;
    t5 = g->edx;
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x10320daeu), g->eax, g->ecx, t5, 1, 1, arg1);
    t6 = g->edx;
    g->edx = t6;
    return t3;
L_10315e24: ;
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t7 = cow_stdcall(g, COW_IMG(0x10319c89u), 0);
    t8 = g->ecx;
    t9 = g->edx;
    wr32(t7, 9u);
    g->edx = t9;
    t10 = cow_stdcall(g, COW_IMG(0x10319c92u), 0);
    t11 = g->edx;
    wr32(t10, 0u);
    g->edx = t11;
    return 0xffffffffu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10315ddf(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10315ddf(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
