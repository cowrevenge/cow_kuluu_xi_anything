/* f_0x10311f70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10311f70(Guest* g)
{
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((rd8(arg1 + 0xcu) & 0x40u) == 0u)
    {
        g->ecx = self;
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x103171adu), g->eax, g->ecx, in_edx, 1, 1, arg1);
        t1 = g->ecx;
        t2 = g->edx;
        g->edi = 0xffffffffu;
        g->ecx = t1;
        g->edx = t2;
        g->esp = sp0 - 4u;
        t3 = cow_cdecl(g, COW_IMG(0x10311fa1u), 3, arg1, arg1, in_edi);
        t4 = g->ecx;
        t5 = g->edx;
        g->esp = sp0 - 0x10u;
        cow_call_regs(g, COW_IMG(0x103171ffu), g->eax, g->ecx, t5, 1, 1, arg1);
        t6 = g->edx;
        edx = t6;
        edi = t3;
    }
    else
    {
        wr32(arg1 + 0xcu, 0u);
        edx = in_edx;
        edi = 0xffffffffu;
    }
    g->edi = in_edi;
    g->edx = edx;
    return edi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10311f70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10311f70(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
