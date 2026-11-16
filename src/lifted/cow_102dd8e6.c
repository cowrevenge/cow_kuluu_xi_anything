/* f_0x102dd8e6 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102dd8e6(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((arg1 & 2u) == 0u)
    {
        g->eax = in_eax;
        t6 = rd32(self);
        g->esp = sp0 - 8u;
        t7 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, self, in_edx, 1, 1, t6);
        t8 = g->edx;
        if (!(arg1 & 1u))
        {
            edx = t8;
        }
        else
        {
            eax = t7;
            ecx = t6;
            edx = t8;
            g->esp = sp0 - 8u;
            cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, self);
            t9 = g->edx;
            edx = t9;
        }
        eax = self;
    }
    else
    {
        t1 = rd32(self - 4u);
        g->eax = in_eax;
        g->esp = sp0 - 0xcu;
        t2 = cow_fastcall(g, COW_IMG(0x1031774fu), self, in_edx, 4, self, 0xcu, t1, COW_IMG(0x102dd620u));
        t3 = g->ecx;
        t4 = g->edx;
        if (!(arg1 & 1u))
        {
            edx = t4;
        }
        else
        {
            eax = t2;
            ecx = t3;
            edx = t4;
            g->esp = sp0 - 0xcu;
            cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, self - 4u);
            t5 = g->edx;
            edx = t5;
        }
        eax = self - 4u;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102dd8e6(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102dd8e6(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
