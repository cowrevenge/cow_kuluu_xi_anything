/* f_0x100a60e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_100a60e0(Guest* g)
{
    double d1;
    double d3;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t edx;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t2;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd8(COW_IMG(0x10487f81u)) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x10487f81u));
        edx = in_edx;
    }
    else
    {
        eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x10487f81u));
        d1 = (double)rdf32(arg1 + 8u);
        if (d1 != (double)rdf32(COW_IMG(0x103295d8u))) goto L_100a6118;
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        if ((double)rdf32(arg1) == (double)rdf32(COW_IMG(0x103295d8u))) goto L_100a6216;
L_100a6118: ;
        g->esp = sp0 - 8u;
        t2 = cow_cdecl(g, COW_IMG(0x10027530u), 2, arg1, COW_IMG(0x10487f64u));
        d3 = cow_take_float(g);
        if ((double)rdf32(COW_IMG(0x10487f64u)) != (double)rdf32(COW_IMG(0x103295d8u)))
        {
            eax = (t2 & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x10487f64u)), (double)rdf32(COW_IMG(0x103295d8u)), 1u);
            x0 = d3;
            goto L_100a614c;
        }
        eax = (t2 & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x10487f64u)), (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = d3;
        if ((double)rdf32(COW_IMG(0x10487f6cu)) == (double)rdf32(COW_IMG(0x103295d8u)))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x10487f6cu)), (double)rdf32(COW_IMG(0x103295d8u)), 1u);
            goto L_100a6193;
        }
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x10487f6cu)), (double)rdf32(COW_IMG(0x103295d8u)), 1u);
L_100a614c: ;
        if (!(x0 < (double)rdf32(COW_IMG(0x103295d8u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
            goto L_100a6195;
        }
        t4 = rd32(COW_IMG(0x1035bbbcu));
        t5 = rd32(COW_IMG(0x1035bbc0u));
        wr32(COW_IMG(0x10487f64u), rd32(COW_IMG(0x1035bbb8u)));
        t6 = rd32(COW_IMG(0x1035bbc4u));
        wr32(COW_IMG(0x10487f68u), t4);
        wr32(COW_IMG(0x10487f6cu), t5);
        wr32(COW_IMG(0x10487f70u), t6);
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x100a6070u), t6, g->ecx, g->edx, 0, 1, 0u);
L_100a6216: ;
        wr32(arg1, rd32(COW_IMG(0x10487f64u)));
        t13 = rd32(COW_IMG(0x10487f68u));
        wr32(arg1 + 4u, t13);
        wr32(arg1 + 8u, rd32(COW_IMG(0x10487f6cu)));
        t14 = rd32(COW_IMG(0x10487f70u));
        wr32(arg1 + 0xcu, t14);
        eax = t13;
        edx = t14;
    }
    g->edx = edx;
    return eax;
L_100a6193: ;
L_100a6195: ;
    d7 = (double)rdf32(arg1 + 4u);
    d8 = (double)rdf32(arg1 + 8u);
    d9 = fr(g, fr(g, sqrt(fr(g, fr(g, fr(g, d7 * d7) + fr(g, (double)rdf32(arg1) * (double)rdf32(arg1))) + fr(g, d8 * d8)))) - fr(g, sqrt(fr(g, fr(g, fr(g, (double)rdf32(COW_IMG(0x10487f68u)) * (double)rdf32(COW_IMG(0x10487f68u))) + fr(g, (double)rdf32(COW_IMG(0x10487f6cu)) * (double)rdf32(COW_IMG(0x10487f6cu)))) + fr(g, (double)rdf32(COW_IMG(0x10487f64u)) * (double)rdf32(COW_IMG(0x10487f64u)))))));
    if ((cow_fsw(g, d9, (double)rdf32(COW_IMG(0x1032df8cu)), 0u) & 0x4100u) == 0u)
    {
        wr32(COW_IMG(0x10487f64u), rd32(arg1));
        t10 = rd32(arg1 + 4u);
        wr32(COW_IMG(0x10487f68u), t10);
        t11 = rd32(arg1 + 8u);
        wr32(COW_IMG(0x10487f6cu), t11);
        t12 = rd32(arg1 + 0xcu);
        wr32(COW_IMG(0x10487f70u), t12);
    }
    goto L_100a6216;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a60e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100a60e0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
