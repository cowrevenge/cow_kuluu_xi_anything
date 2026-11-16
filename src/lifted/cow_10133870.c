/* f_0x10133870 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10133870(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->edx = in_edx;
    t1 = cow_stdcall(g, COW_IMG(0x100e5700u), 0);
    t2 = g->edx;
    if (rd32(COW_IMG(0x10480af0u) + t1 * 4u) == 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + t1 * 4u);
        edx = t2;
        goto L_10133894;
    }
    eax = rd32(COW_IMG(0x10480af0u) + t1 * 4u);
    edx = t2;
    t3 = rd32(eax + 0x128u);
    wr8(COW_IMG(0x105781c0u), 1u);
    if (t3 >> 9u & 1u)
    {
        eax = t3 >> 9u;
        goto L_1013389b;
    }
    eax = t3 >> 9u;
L_10133894: ;
    wr8(COW_IMG(0x105781c0u), 0u);
L_1013389b: ;
    wr8(COW_IMG(0x105781c1u), 1u);
    if ((rd8(arg3 + 0x7fu) & 2u) != 0u)
    {
        g->edx = edx;
        g->esp = sp0 - 4u;
        t4 = cow_call_regs(g, COW_IMG(0x101ddae0u), eax, rd32(COW_IMG(0x10663484u)), g->edx, 0, 2, arg3 + 4u, 1u);
        t5 = g->edx;
        eax = t4;
        edx = t5;
    }
    g->edx = edx;
    g->esp = sp0 - 4u;
    t6 = cow_call_regs(g, COW_IMG(0x101ddae0u), eax, rd32(COW_IMG(0x10663484u)), g->edx, 0, 2, arg3 + 4u, 0u);
    t7 = g->edx;
    g->edx = t7;
    return (t6 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10133870(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10133870(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
