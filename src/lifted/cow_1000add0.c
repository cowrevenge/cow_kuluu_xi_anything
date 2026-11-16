/* f_0x1000add0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1000add0(Guest* g)
{
    double d1;
    double d2;
    uint32_t eax;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg3 == 0u) goto L_1000ae26;
    if (arg3 != 1u)
    {
        eax = arg3 - 1u;
        goto L_1000ae2c;
    }
    d1 = fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(sp0 + 8u));
    if (!(d1 <= (double)rdf32(COW_IMG(0x10329a18u))))
    {
        eax = (arg3 - 1u & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, (double)rdf32(COW_IMG(0x10329a18u)), 1u);
        x0 = d1;
    }
    else
    {
        eax = (arg3 - 1u & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, (double)rdf32(COW_IMG(0x10329a18u)), 1u);
        x0 = d1;
        x0 = (double)rdf32(COW_IMG(0x10329a18u));
    }
    d2 = fr(g, x0 + (double)rdf32(self + 0x174u));
    wrf32(self + 0x174u, (float)d2);
    if ((cow_fsw(g, d2, rdf64(COW_IMG(0x10329a10u)), 0u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, d2, rdf64(COW_IMG(0x10329a10u)), 0u) & 0x100u;
        goto L_1000ae2c;
    }
    eax = cow_fsw(g, d2, rdf64(COW_IMG(0x10329a10u)), 0u) & 0x100u;
    wr32(self + 0x174u, 0x43000000u);
    g->edx = 0u;
    return (eax & 0xffffff00u) | 1u;
L_1000ae26: ;
    wr32(self + 0x174u, 0u);
    eax = arg3;
L_1000ae2c: ;
    g->edx = 0u;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1000add0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1000add0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
