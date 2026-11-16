/* f_0x1007a150 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1007a150(Guest* g)
{
    uint32_t eax;
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
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_call_regs(g, COW_IMG(0x101cbdf0u), in_eax, g->ecx, g->edx, 1, 1, 1u);
    t2 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        edx = t2;
        goto L_1007a1b1;
    }
    edx = t2;
    t3 = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    t4 = rd32(COW_IMG(0x103551e0u));
    g->esp = sp0 - 8u;
    t5 = cow_call_regs(g, COW_IMG(0x1007a1c0u), t4, t3, edx, 1, 4, t3, 1u, 0u, 0u);
    t6 = g->edx;
    if (t5 != 0u)
    {
        eax = t5;
        goto L_1007a18f;
    }
    eax = t5;
    edx = t6;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x101590a0u), rd32(COW_IMG(0x1057876cu)), 0);
    t7 = g->edx;
    g->edx = t7;
    return arg3;
L_1007a18f: ;
    t8 = rd32(eax + 4u);
    if (rd32(eax) == 0u)
    {
        edx = t8;
    }
    else
    {
        edx = t8;
        g->edx = rd32(eax);
        t9 = rd32(eax);
        g->esp = sp0 - 8u;
        cow_thiscall(g, COW_IMG(0x10157c60u), rd32(COW_IMG(0x1057876cu)), 4, t9, edx, 1u, 0u);
        t10 = g->edx;
        edx = t10;
    }
L_1007a1b1: ;
    g->edx = edx;
    return arg3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1007a150(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1007a150(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
