/* f_0x100b0870 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b0870(Guest* g)
{
    double d1;
    double d5;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ecx;
    uint32_t loc_4;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    d1 = (double)rdf32(self + rd16(self + 0x258u) * 0x20u + 0x3cu);
    if (!(d1 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (rd16(self + 0x258u) << 5u & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        ecx = self;
        loc_4 = self;
    }
    else
    {
        eax = (rd16(self + 0x258u) << 5u & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        g->eax = eax;
        g->esp = sp0 - 8u;
        t2 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 1u);
        t3 = rd16(self + 0x258u);
        wrf32(self + t3 * 0x20u + 0x3cu, (float)(double)(int32_t)t2);
        eax = t2;
        ecx = t3 << 5u;
        loc_4 = t2;
    }
    t4 = rd16(self + 0x258u);
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    d5 = cow_take_float(g);
    t6 = rd16(self + 0x258u);
    d7 = fr(g, (double)rdf32(self + t4 * 0x20u + 0x3cu) - d5);
    wrf32(self + t6 * 0x20u + 0x3cu, (float)d7);
    d8 = (double)rdf32(self + rd16(self + 0x258u) * 0x20u + 0x3cu);
    d9 = (double)rdf32(COW_IMG(0x103295d8u));
    wr8(self + 0x25au, 1u);
    if (d8 < d9)
    {
        wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 3u));
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b0870(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100b0870(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
