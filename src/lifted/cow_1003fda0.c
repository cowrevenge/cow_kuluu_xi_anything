/* f_0x1003fda0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=0 */
void cow_fn_1003fda0(Guest* g)
{
    double d1;
    double d10;
    double d11;
    double d12;
    double d13;
    double d3;
    double d5;
    double d7;
    double d9;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t2;
    uint32_t t4;
    uint32_t t6;
    uint32_t t8;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;

    d1 = (double)rdf32(COW_IMG(0x103295d8u));
    g->esp = sp0 - 0x18u;
    t2 = cow_call_regs(g, COW_IMG(0x1003fd70u), in_eax, self, g->edx, 1, 0);
    if (rd16(self + 0x36u) == 0u)
    {
        x0 = d1;
        goto L_1003fed8;
    }
    eax = (t2 & 0xffff0000u) | rd16(self + 0x36u);
    ecx = t2;
    x0 = d1;
    if ((int32_t)((uint16_t)eax * 3u) <= 0)
    {
        eax = (uint16_t)eax * 3u;
        loc_4 = 0x49742400u;
        loc_8 = 0x49742400u;
        loc_10 = 0x49742400u;
        loc_c = 0xc9742400u;
        loc_14 = 0xc9742400u;
        x0 = (double)rdf32(COW_IMG(0x1032ad14u));
    }
    else
    {
        eax = (uint16_t)eax * 3u;
        x0 = (double)rdf32(COW_IMG(0x1032ad14u));
        edx = eax;
        loc_4 = 0x49742400u;
        loc_8 = 0x49742400u;
        loc_10 = 0x49742400u;
        loc_c = 0xc9742400u;
        loc_14 = 0xc9742400u;
L_1003fe03: ;
        if ((cow_fsw(g, cow_bits2f(loc_10), (double)rdf32(ecx), 1u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, cow_bits2f(loc_10), (double)rdf32(ecx), 1u) & 0x4100u;
        }
        else
        {
            eax = rd32(ecx);
            loc_10 = rd32(ecx);
        }
        d3 = (double)rdf32(ecx + 4u);
        if ((cow_fsw(g, cow_bits2f(loc_8), d3, 1u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, cow_bits2f(loc_8), d3, 1u) & 0x4100u;
        }
        else
        {
            t4 = rd32(ecx + 4u);
            eax = t4;
            loc_8 = t4;
        }
        d5 = (double)rdf32(ecx + 8u);
        if ((cow_fsw(g, cow_bits2f(loc_4), d5, 1u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, cow_bits2f(loc_4), d5, 1u) & 0x4100u;
        }
        else
        {
            t6 = rd32(ecx + 8u);
            eax = t6;
            loc_4 = t6;
        }
        if (!(cow_bits2f(loc_14) < (double)rdf32(ecx)))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, cow_bits2f(loc_14), (double)rdf32(ecx), 1u);
        }
        else
        {
            eax = rd32(ecx);
            loc_14 = rd32(ecx);
        }
        d7 = (double)rdf32(ecx + 4u);
        if (!(cow_bits2f(loc_c) < d7))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, cow_bits2f(loc_c), d7, 1u);
        }
        else
        {
            t8 = rd32(ecx + 4u);
            eax = t8;
            loc_c = t8;
        }
        d9 = (double)rdf32(ecx + 8u);
        if (!(x0 < d9))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, d9, 1u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, d9, 1u);
            x0 = (double)rdf32(ecx + 8u);
        }
        if (edx != 1u)
        {
            ecx = ecx + 0x24u;
            edx = edx - 1u;
            goto L_1003fe03;
        }
    }
    d10 = (double)(float)fr(g, cow_bits2f(loc_14) - cow_bits2f(loc_10));
    d11 = (double)(float)fr(g, cow_bits2f(loc_c) - cow_bits2f(loc_8));
    d12 = fr(g, x0 - cow_bits2f(loc_4));
    d13 = fr(g, fr(g, fr(g, d12 * d12) + fr(g, d11 * d11)) + fr(g, d10 * d10));
    if (d13 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
        x0 = d13;
        goto L_1003fed0;
    }
    x0 = d13;
    fpush(g, fr(g, fr(g, sqrt(x0)) * (double)rdf32(COW_IMG(0x10329a08u))));
    return;
L_1003fed0: ;
    x0 = (double)rdf32(COW_IMG(0x103295d8u));
L_1003fed8: ;
    fpush(g, x0);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1003fda0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1003fda0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
