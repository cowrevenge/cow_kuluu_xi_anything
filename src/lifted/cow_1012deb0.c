/* f_0x1012deb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1012deb0(Guest* g)
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
    const uint32_t in_edx = g->edx;

    if (rd32(rd32(COW_IMG(0x10664520u)) + 8u) == 0u)
    {
        eax = rd32(COW_IMG(0x10664520u));
        ecx = 0u;
        edx = in_edx;
    }
    else
    {
        eax = rd32(COW_IMG(0x10664520u));
        wr8(eax + 0x3au, 0u);
        wr32(eax + 0x14u, 0u);
        t1 = rd32(eax + 8u);
        g->edx = in_edx;
        g->esp = sp0;
        t2 = cow_call_regs(g, COW_IMG(0x1015e790u), t1, COW_IMG(0x10621838u), g->edx, 0, 2, t1, 1u);
        t3 = g->ecx;
        t4 = g->edx;
        eax = t2;
        ecx = t3;
        edx = t4;
    }
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t5 = cow_call_regs(g, COW_IMG(0x10080d00u), eax, g->ecx, g->edx, 1, 0);
    t6 = g->ecx;
    t7 = g->edx;
    g->edx = t7;
    t8 = cow_call_regs(g, COW_IMG(0x10080d10u), t5 & 0xffdfu, g->ecx, g->edx, 1, 1, t5 & 0xffdfu);
    t9 = g->edx;
    g->edx = t9;
    return t8;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1012deb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1012deb0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
