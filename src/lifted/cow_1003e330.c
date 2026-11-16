/* f_0x1003e330 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1003e330(Guest* g)
{
    double d1;
    double d3;
    uint32_t eax;
    uint32_t loc_4;
    uint32_t t2;
    uint32_t t4;
    uint32_t t5;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    d1 = (double)rdf32(sp0 + 8u);
    if (!(d1 < (double)rdf32(COW_IMG(0x1032961cu)))) goto L_1003e392;
    t2 = rd8(self + 3u);
    d3 = fr(g, (double)(int32_t)t2 * (double)rdf32(sp0 + 8u));
    if (!(d3 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (t2 & 0xffff0000u) | (uint16_t)cow_fsw(g, d3, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        loc_4 = t2;
        x0 = d3;
        fpush(g, x0);
        g->esp = sp0 - 8u;
        t4 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        eax = (uint8_t)t4;
    }
    else
    {
        loc_4 = t2;
        x0 = d3;
        eax = 0u;
    }
    t5 = (uint8_t)eax << 0x18u | (rd32(self) & 0xffffffu);
    wr32(arg1, t5);
    return arg1;
L_1003e392: ;
    wr32(arg1, rd32(self));
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1003e330(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1003e330(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
