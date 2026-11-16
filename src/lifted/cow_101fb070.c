/* f_0x101fb070 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
void cow_fn_101fb070(Guest* g)
{
    double d1;
    double d2;
    double d3;
    double d4;
    uint32_t eax;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    d1 = (double)rdf32(sp0 + 0x10u);
    d2 = (double)rdf32(COW_IMG(0x103295d8u));
    wr32(self + 0xc8u, arg1);
    wr32(self + 0xd0u, arg3);
    wr32(self + 0xccu, arg2);
    wr16(self + 0x14u, 0x400u);
    wr32(self + 0xd4u, arg4);
    if (!(d1 < d2))
    {
        eax = (arg3 & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, d2, 0u);
    }
    else
    {
        eax = (arg3 & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, d2, 0u);
        wr32(self + 0xd4u, 0u);
    }
    wr32(self + 0xe8u, 0u);
    d3 = (double)rdf32(self + 0xd4u);
    d4 = (double)rdf32(COW_IMG(0x103295d8u));
    wr8(self + 0xd8u, arg5 & 0x7fu);
    t5 = rd32(self + 0xbcu);
    wr32(self + 0xdcu, t5);
    t6 = rd32(self + 0xc0u);
    wr32(self + 0xe0u, t6);
    t7 = rd32(self + 0xc4u);
    wr32(self + 0xe4u, t7);
    if (!(d3 <= d4))
    {
        eax = (t7 & 0xffff0000u) | (uint16_t)cow_fsw(g, d3, d4, 0u);
    }
    else
    {
        wr32(self + 0xe8u, 0x3f800000u);
        wr32(self + 0xbcu, arg1);
        wr32(self + 0xc0u, arg2);
        wr32(self + 0xc4u, arg3);
        eax = arg3;
    }
    if ((int8_t)arg5 < 0)
    {
        g->esp = sp0;
        cow_call_regs(g, COW_IMG(0x101efb00u), eax, self, g->edx, 1, 0);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101fb070(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101fb070(g);
    g->esp = sp0;
    rt_return(g, g->eax, 20u);
}
/* COW_ADAPTER END */
