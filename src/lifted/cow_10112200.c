/* f_0x10112200 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10112200(Guest* g)
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
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        ecx = rd32(self);
        g->eax = rd32(ecx);
        g->edx = in_edx;
        t1 = rd32(ecx);
        g->esp = sp0 - 4u;
        t2 = cow_thiscall(g, rd32(t1), ecx, 1, 1u);
        t3 = g->edx;
        eax = t2;
        edx = t3;
    }
    t4 = rd32(self + 8u);
    wr32(self, 0xefefefefu);
    if (t4 == 0u)
    {
        ecx = t4;
    }
    else
    {
        ecx = t4;
        g->esp = sp0 - 4u;
        t5 = cow_call_regs(g, COW_IMG(0x10112200u), eax, ecx, edx, 0, 1, 1u);
        t6 = g->ecx;
        t7 = g->edx;
        eax = t5;
        ecx = t6;
        edx = t7;
    }
    if (arg1 & 1u)
    {
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x101086b0u), 1, self);
    }
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10112200(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10112200(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
