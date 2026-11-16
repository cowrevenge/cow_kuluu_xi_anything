/* f_0x10114dc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10114dc0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);

    g->edx = in_edx;
    t1 = cow_stdcall(g, COW_IMG(0x100fc160u), 0);
    t2 = g->edx;
    if (!(t1 >> 8u & 1u))
    {
        eax = t1;
        edx = t2;
        goto L_10114dd9;
    }
    eax = t1;
    edx = t2;
    g->edx = edx;
    g->esp = sp0;
    t3 = cow_call_regs(g, COW_IMG(0x101092c0u), eax, arg4, g->edx, 0, 1, COW_IMG(0x1034f488u));
    t4 = g->edx;
    g->edx = t4;
    return t3;
L_10114dd9: ;
    g->edx = edx;
    g->esp = sp0;
    t5 = cow_call_regs(g, COW_IMG(0x101092c0u), eax, arg4, g->edx, 0, 1, COW_IMG(0x10357d7cu));
    t6 = g->edx;
    g->edx = t6;
    return t5;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10114dc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10114dc0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
