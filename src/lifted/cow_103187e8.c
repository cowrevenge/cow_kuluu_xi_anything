/* f_0x103187e8 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_103187e8(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 != 0u) goto L_103187fa;
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x103188aau), g->eax, self, in_edx, 1, 1, arg1);
    t2 = g->edx;
    g->edx = t2;
    return t1;
L_103187fa: ;
    g->ecx = self;
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x103171adu), g->eax, g->ecx, in_edx, 1, 1, arg1);
    t3 = g->ecx;
    t4 = g->edx;
    g->ecx = t3;
    g->edx = t4;
    g->esp = sp0 - 4u;
    t5 = cow_cdecl(g, COW_IMG(0x10318817u), 3, arg1, arg1, in_edi);
    t6 = g->ecx;
    t7 = g->edx;
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x103171ffu), g->eax, g->ecx, t7, 1, 1, arg1);
    t8 = g->edx;
    g->edx = t8;
    return t5;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_103187e8(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_103187e8(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
