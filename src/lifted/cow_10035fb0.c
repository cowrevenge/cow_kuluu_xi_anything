/* f_0x10035fb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10035fb0(Guest* g)
{
    double d2;
    double d3;
    double d4;
    uint32_t eax;
    uint32_t t1;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    t1 = rd32(COW_IMG(0x10463914u));
    d2 = fr(g, fr(g, (double)rdf32(COW_IMG(0x103516fcu)) * (double)rdf32(COW_IMG(0x103516f8u))) * (double)rdf32(sp0 + 4u));
    d3 = (double)rdf32(COW_IMG(0x10351708u));
    wrf32(COW_IMG(0x10351708u), (float)d2);
    if (t1 == 0u)
    {
        eax = t1;
        x0 = d3;
        goto L_1003600e;
    }
    eax = t1;
    x0 = d3;
    if (rd8(COW_IMG(0x104638f5u)) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x104638f5u));
        goto L_1003600e;
    }
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x104638f5u));
    if (x0 == (double)rdf32(COW_IMG(0x10351708u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10351708u)), 0u);
        goto L_10036010;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10351708u)), 0u);
    g->ecx = self;
    g->edx = in_edx;
    d4 = fr(g, (double)rdf32(COW_IMG(0x10351708u)) * (double)rdf32(COW_IMG(0x1032a34cu)));
    fpush(g, d4);
    g->esp = sp0 - 4u;
    t5 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t6 = g->ecx;
    t7 = g->edx;
    g->eax = rd32(COW_IMG(0x10463910u));
    t8 = rd32(COW_IMG(0x10463910u));
    g->esp = sp0;
    t9 = cow_cdecl(g, COW_IMG(0x10038470u), 3, t8, t5, 0u);
    return t9;
L_1003600e: ;
L_10036010: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10035fb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10035fb0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
