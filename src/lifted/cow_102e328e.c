/* f_0x102e328e - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_102e328e(Guest* g)
{
    double d10;
    double d11;
    double d12;
    double d13;
    double d14;
    double d15;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t16;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    if (rd32(self + 0x1048u) == 0u)
    {
        eax = rd32(sp0 + 0xcu);
        ecx = self;
    }
    else
    {
        t1 = rd32(sp0 + 0xcu);
        g->esp = sp0 - 0xcu;
        t2 = cow_thiscall(g, COW_IMG(0x102e17b2u), self, 1, t1);
        t3 = g->ecx;
        eax = t2;
        ecx = t3;
    }
    t4 = rd32(ecx + 0x18u);
    t5 = rd32(ecx + 0x1050u);
    t6 = rd32(sp0 + 4u);
    t7 = rd32(ecx + 0x1054u);
    t8 = rd32(sp0 + 8u);
    t9 = rd32(ecx + 0x1058u);
    wr32(sp0 + 4u, 0u);
    if (t9 == 0u)
    {
        edx = t4 + t5 * t6 + t7 * t8;
    }
    else
    {
        edx = t4 + t5 * t6 + t7 * t8;
        esi = eax + 8u;
L_102e32d2: ;
        wr32(sp0 + 8u, 0x7f7fffffu);
        wr32(sp0 + 0xcu, 0u);
        ebx = 0u;
        edi = ecx + 0x38u;
L_102e32e1: ;
        d10 = fr(g, (double)rdf32(esi + 4u) - (double)rdf32(edi + 4u));
        d11 = fr(g, (double)rdf32(esi) - (double)rdf32(edi));
        d12 = fr(g, (double)rdf32(esi - 4u) - (double)rdf32(edi - 4u));
        d13 = fr(g, (double)rdf32(esi - 8u) - (double)rdf32(edi - 8u));
        d14 = fr(g, fr(g, fr(g, fr(g, d10 * d10) + fr(g, d11 * d11)) + fr(g, d12 * d12)) + fr(g, d13 * d13));
        d15 = (double)rdf32(sp0 + 8u);
        if (!(d14 < d15))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d14, d15, 1u);
            x0 = d14;
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d14, d15, 1u);
            x0 = d14;
            t16 = rd32(sp0 + 0xcu);
            wrf32(sp0 + 8u, (float)x0);
            ebx = t16;
        }
        wr32(sp0 + 0xcu, rd32(sp0 + 0xcu) + 1u);
        if (rd32(sp0 + 0xcu) < 0x100u)
        {
            edi = edi + 0x10u;
            goto L_102e32e1;
        }
        wr8(edx, (uint8_t)ebx);
        wr32(sp0 + 4u, rd32(sp0 + 4u) + 1u);
        if (rd32(sp0 + 4u) < rd32(ecx + 0x1058u))
        {
            eax = rd32(sp0 + 4u);
            edx = edx + 1u;
            esi = esi + 0x10u;
            goto L_102e32d2;
        }
        eax = rd32(sp0 + 4u);
        edx = edx + 1u;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e328e(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102e328e(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
