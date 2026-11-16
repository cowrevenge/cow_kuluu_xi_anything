/* f_0x1031981f - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1031981f(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg1 >= rd32(COW_IMG(0x109f83e0u)))
    {
        eax = in_eax;
        ecx = self;
        goto L_1031986c;
    }
    if (!(rd8((arg1 & 0x1fu) * 0x24u + rd32(COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u) + 4u) & 1u))
    {
        eax = (arg1 & 0x1fu) * 9u;
        ecx = rd32(COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u);
        goto L_1031986c;
    }
    ecx = rd32(COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u);
    g->eax = (arg1 & 0x1fu) * 9u;
    g->ecx = ecx;
    g->esp = sp0 - 8u;
    t1 = cow_call_regs(g, COW_IMG(0x10320d4fu), g->eax, g->ecx, in_edx, 1, 1, arg1);
    t2 = g->ecx;
    t3 = g->edx;
    g->ecx = t2;
    g->esp = sp0 - 4u;
    t4 = cow_call_regs(g, COW_IMG(0x10319884u), g->eax, g->ecx, t3, 1, 5, arg1, arg2, arg3, arg1, in_edi);
    t5 = g->ecx;
    t6 = g->edx;
    g->esp = sp0 - 0x18u;
    cow_call_regs(g, COW_IMG(0x10320daeu), g->eax, g->ecx, t6, 1, 1, arg1);
    t7 = g->edx;
    g->edx = t7;
    return t4;
L_1031986c: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t8 = cow_stdcall(g, COW_IMG(0x10319c89u), 0);
    t9 = g->ecx;
    t10 = g->edx;
    wr32(t8, 9u);
    g->edx = t10;
    t11 = cow_stdcall(g, COW_IMG(0x10319c92u), 0);
    t12 = g->edx;
    wr32(t11, 0u);
    g->edx = t12;
    return 0xffffffffu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031981f(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1031981f(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
