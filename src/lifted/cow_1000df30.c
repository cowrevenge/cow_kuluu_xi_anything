/* f_0x1000df30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1000df30(Guest* g)
{
    uint32_t ebp;
    uint32_t edi;
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
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int32_t)rd32(arg1 + 4u) <= 0) goto L_1000df76;
    edx = in_edx;
    ebp = rd32(COW_IMG(0x103294a8u));
    edi = 0u;
L_1000df45: ;
    t1 = rd32(rd32(edi * 4u + rd32(arg1)) + 4u);
    g->eax = rd32(arg1);
    t2 = rd32(arg1);
    t3 = rd32(edi * 4u + rd32(arg1));
    g->esp = sp0 - 0x10u;
    t4 = cow_thiscall(g, ebp, t1, 1, t1);
    t5 = g->ecx;
    g->edx = rd32(t3);
    t6 = rd32(t3);
    t7 = cow_thiscall(g, ebp, t5, 1, t6);
    t8 = g->ecx;
    t9 = g->edx;
    cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t8, t9, 1, 1, t3);
    t10 = g->edx;
    if ((int32_t)(edi + 1u) < (int32_t)rd32(arg1 + 4u))
    {
        edx = t10;
        edi = edi + 1u;
        goto L_1000df45;
    }
    wr32(arg1 + 4u, 0u);
    return 0u;
L_1000df76: ;
    wr32(arg1 + 4u, 0u);
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1000df30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1000df30(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
