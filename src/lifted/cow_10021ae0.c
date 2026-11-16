/* f_0x10021ae0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u16 stack_args=0 */
uint32_t cow_fn_10021ae0(Guest* g)
{
    double d1;
    double d10;
    double d11;
    double d12;
    double d13;
    double d14;
    double d15;
    double d2;
    double d3;
    double d4;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;

    d1 = (double)rdf32(self + 0x7cu);
    if (d1 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_10021af3;
    }
    eax = (in_eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    return (eax & 0xffffff00u) | 1u;
L_10021af3: ;
    d2 = (double)rdf32(self + 0x60u);
    d3 = (double)rdf32(self + 0x44u);
    if (d2 == d3)
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, d3, 0u);
        goto L_10021b03;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, d3, 0u);
    return (eax & 0xffffff00u) | 1u;
L_10021b03: ;
    d4 = (double)rdf32(self + 0x64u);
    d5 = (double)rdf32(self + 0x48u);
    if (d4 == d5)
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d4, d5, 0u);
        goto L_10021b13;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d4, d5, 0u);
    return (eax & 0xffffff00u) | 1u;
L_10021b13: ;
    d6 = (double)rdf32(self + 0x68u);
    d7 = (double)rdf32(self + 0x4cu);
    if (d6 == d7)
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d6, d7, 0u);
        goto L_10021b23;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d6, d7, 0u);
    return (eax & 0xffffff00u) | 1u;
L_10021b23: ;
    d8 = (double)rdf32(self + 0x6cu);
    d9 = (double)rdf32(self + 0x50u);
    if (d8 == d9)
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d8, d9, 0u);
        goto L_10021b33;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d8, d9, 0u);
    return (eax & 0xffffff00u) | 1u;
L_10021b33: ;
    d10 = (double)rdf32(self + 0x70u);
    d11 = (double)rdf32(self + 0x54u);
    if (d10 == d11)
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d10, d11, 0u);
        goto L_10021b43;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d10, d11, 0u);
    return (eax & 0xffffff00u) | 1u;
L_10021b43: ;
    d12 = (double)rdf32(self + 0x74u);
    d13 = (double)rdf32(self + 0x58u);
    if (d12 == d13)
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d12, d13, 0u);
        goto L_10021b53;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d12, d13, 0u);
    return (eax & 0xffffff00u) | 1u;
L_10021b53: ;
    d14 = (double)rdf32(self + 0x78u);
    d15 = (double)rdf32(self + 0x5cu);
    if (d14 == d15)
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d14, d15, 0u);
        goto L_10021b63;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d14, d15, 0u);
    return (eax & 0xffffff00u) | 1u;
L_10021b63: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10021ae0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10021ae0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
