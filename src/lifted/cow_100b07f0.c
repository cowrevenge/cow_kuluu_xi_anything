/* f_0x100b07f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b07f0(Guest* g)
{
    double d1;
    double d3;
    double d4;
    double d5;
    double d7;
    uint32_t eax;
    uint32_t ecx;
    uint32_t t2;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    d1 = (double)rdf32(self + rd16(self + 0x258u) * 0x20u + 0x3cu);
    if (!(d1 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (rd16(self + 0x258u) << 5u & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    }
    else
    {
        eax = (rd16(self + 0x258u) << 5u & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        ecx = self + rd16(self + 0x258u) * 0x20u + 0x3cu;
        wr32(ecx, 0x41800000u);
    }
    t2 = rd16(self + 0x258u);
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    d3 = cow_take_float(g);
    d4 = fr(g, (double)rdf32(self + t2 * 0x20u + 0x3cu) - d3);
    wrf32(self + rd16(self + 0x258u) * 0x20u + 0x3cu, (float)d4);
    d5 = (double)rdf32(self + rd16(self + 0x258u) * 0x20u + 0x3cu);
    t6 = rd16(self + 0x258u);
    d7 = (double)rdf32(COW_IMG(0x103295d8u));
    wr8(self + 0x25au, 1u);
    if (d5 < d7)
    {
        wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 1u));
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b07f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100b07f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
