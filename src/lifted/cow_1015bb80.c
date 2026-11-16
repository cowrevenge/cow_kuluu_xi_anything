/* f_0x1015bb80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_1015bb80(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg2 != 0x1400u) goto L_1015bbab;
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x1015b3c0u), arg2, arg3, in_edx, 1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    g->edx = t3;
    t4 = cow_call_regs(g, COW_IMG(0x10159ff0u), t1, t2, g->edx, 1, 2, arg3, 1u);
    t5 = g->edx;
    wr8(arg3 + 0x15a9u, 1u);
    g->edx = t5;
    return t4;
L_1015bbab: ;
    if (rd32(arg3 + 0x150cu) == 0u)
    {
        eax = arg2;
        edx = in_edx;
    }
    else
    {
        ecx = rd32(arg3 + 0x150cu);
        g->eax = rd32(ecx);
        g->edx = in_edx;
        t6 = rd32(ecx);
        g->esp = sp0 - 4u;
        t7 = cow_thiscall(g, rd32(t6 + 0x18u), ecx, 1, 1u);
        t8 = g->edx;
        eax = t7;
        edx = t8;
    }
    g->eax = eax;
    g->esp = sp0 - 4u;
    t9 = cow_fastcall(g, COW_IMG(0x1015afa0u), arg3, edx, 0);
    t10 = g->edx;
    wr8(arg3 + 0x15a9u, 1u);
    g->edx = t10;
    return t9;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1015bb80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1015bb80(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
