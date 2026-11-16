/* f_0x10294a60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10294a60(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(arg1 + 0x2cu) == 0u)
    {
        ecx = rd32(arg1 + 0x2cu);
        edx = in_edx;
    }
    else
    {
        ecx = rd32(arg1 + 0x2cu);
        g->ecx = ecx;
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x102a3830u), 1, arg1 + 0x2cu);
        t1 = g->ecx;
        t2 = g->edx;
        ecx = t1;
        edx = t2;
    }
    if (rd32(arg1 + 0x30u) != 0u)
    {
        eax = rd32(arg1 + 0x30u);
        g->esp = sp0;
        cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103bb674u), 0x6fu);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10294a60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10294a60(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
