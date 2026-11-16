/* f_0x10263aa0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10263aa0(Guest* g)
{
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(arg1 + 0x44u) != 1u)
    {
        ecx = rd32(arg1 + 0x44u);
        goto L_10263ab7;
    }
    ecx = rd32(arg1 + 0x44u);
    wr32(arg1 + 0x44u, 0u);
    edx = in_edx;
    edi = 0u;
L_10263ac4: ;
    if ((rd8(arg1 + 4u) & 8u) != 0u)
    {
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(rd32(arg1) + 0x38u), ecx, 2, arg1, 0u);
        t4 = g->edx;
        edx = t4;
    }
    t5 = rd32(arg1 + 0x18u);
    wr32(arg1 + 4u, 0u);
    wr32(arg1 + 8u, 0u);
    wr32(arg1 + 0x40u, 0u);
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, rd32(rd32(t5 + 0xcu) + 0x20u), rd32(t5 + 0xcu), 2, t5 + 0xcu, arg1);
    t6 = g->edx;
    edx = t6;
L_10263af4: ;
    g->edx = edx;
    return edi;
L_10263ab7: ;
    g->eax = arg1 + 0x44u;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, rd32(COW_IMG(0x10329194u)), ecx, 1, arg1 + 0x44u);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        edx = t3;
        edi = t1;
        goto L_10263af4;
    }
    ecx = t2;
    edx = t3;
    edi = t1;
    goto L_10263ac4;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10263aa0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10263aa0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
