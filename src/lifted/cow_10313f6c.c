/* f_0x10313f6c - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10313f6c(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x103171adu), g->eax, g->ecx, in_edx, 1, 1, arg1);
    t1 = g->edx;
    wr32(arg1 + 4u, rd32(arg1 + 4u) - 1u);
    if ((int32_t)(rd32(arg1 + 4u) - 1u) < 0)
    {
        edx = t1;
        g->esp = sp0;
        t4 = cow_call_regs(g, COW_IMG(0x10319505u), g->eax, g->ecx, edx, 1, 3, arg1, in_edi, in_esi);
        t5 = g->edx;
        eax = t4;
        edx = t5;
        edi = t4;
    }
    else
    {
        edx = t1;
        t2 = rd32(arg1) + 1u;
        t3 = rd8(rd32(arg1));
        wr32(arg1, t2);
        eax = t2;
        edi = t3;
    }
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x103171ffu), g->eax, g->ecx, edx, 1, 1, arg1);
    return edi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10313f6c(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10313f6c(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
