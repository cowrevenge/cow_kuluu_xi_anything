/* f_0x1031ad0f - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1031ad0f(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    eax = in_eax;
    ecx = self;
    edx = in_edx;
L_1031ad15: ;
    wr32(arg1, rd32(arg1) + 1u);
    g->esp = sp0 - 8u;
    t1 = cow_call_regs(g, COW_IMG(0x1031acebu), eax, ecx, edx, 1, 1, arg2);
    t2 = g->ecx;
    t3 = g->edx;
    g->esp = sp0 - 4u;
    t4 = cow_call_regs(g, COW_IMG(0x10312beeu), g->eax, t2, t3, 1, 3, t1, arg2, in_edi);
    t5 = g->edx;
    if (t4 != 0u)
    {
        eax = t4;
        ecx = arg2;
        edx = t5;
        goto L_1031ad15;
    }
    eax = t4;
    edi = t1;
    return (eax & 0xffff0000u) | (uint16_t)edi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031ad0f(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1031ad0f(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
