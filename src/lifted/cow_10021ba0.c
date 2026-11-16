/* f_0x10021ba0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10021ba0(Guest* g)
{
    double d1;
    double d2;
    double d3;
    double d4;
    double d5;
    uint32_t eax;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    d1 = (double)rdf32(self + 0x80u);
    if (d1 != (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    }
    else
    {
        wr32(self + 0x84u, 0x3f800000u);
        wr32(self + 0x7cu, arg1);
        eax = arg1;
    }
    d2 = (double)rdf32(self + 0x80u);
    if (!(d2 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = (double)rdf32(self + 0x80u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = (double)rdf32(self + 0x80u);
        x0 = -x0;
    }
    d3 = (double)rdf32(sp0 + 4u);
    d4 = fr(g, x0 + x0);
    if ((cow_fsw(g, d3, d4, 1u) & 0x4100u) == 0u)
    {
        d5 = fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(COW_IMG(0x1032a3bcu)));
        wrf32(self + 0x80u, (float)d5);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10021ba0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10021ba0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
