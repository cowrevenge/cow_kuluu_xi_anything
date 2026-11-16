/* f_0x102e55b1 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102e55b1(Guest* g)
{
    uint32_t cf;
    double d3;
    double d4;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_c;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t2;
    uint32_t zf;
    const uint32_t self = g->ecx;

    if (rd32(self + 0x108cu) != 0u)
    {
        if (rd32(self + 0x1090u) != 0u)
        {
            t1 = rd32(self + 0x18u) + rd32(self + 0x1070u) * 2u + rd32(self + 0x1074u) * rd32(self + 0x1050u) + rd32(self + 0x1080u) * rd32(self + 0x1054u);
            t2 = rd32(self + 0x1070u);
            if (rd32(self + 0x1070u) < rd32(self + 0x1078u))
            {
                eax = rd32(self + 0x106cu);
                loc_10 = t1;
                loc_c = t2;
L_102e5617: ;
                d3 = (double)(float)fr(g, fr(g, fr(g, (double)rdf32(eax + 0x10u) * (double)rdf32(COW_IMG(0x103461f8u))) + fr(g, (double)rdf32(eax + 0x18u) * (double)rdf32(COW_IMG(0x103461f4u)))) + fr(g, (double)rdf32(eax + 0x14u) * (double)rdf32(COW_IMG(0x103461f0u))));
                d4 = (double)(float)fr(g, fr(g, fr(g, (double)rdf32(eax + 8u) * (double)rdf32(COW_IMG(0x103461ecu))) - fr(g, (double)rdf32(eax + 4u) * (double)rdf32(COW_IMG(0x103461e8u)))) - fr(g, (double)rdf32(eax) * (double)rdf32(COW_IMG(0x103461e4u))));
                d5 = (double)(float)fr(g, fr(g, (double)rdf32(eax) * (double)rdf32(COW_IMG(0x103461ecu))) - fr(g, fr(g, (double)rdf32(eax + 4u) * (double)rdf32(COW_IMG(0x103461e0u))) + fr(g, (double)rdf32(eax + 8u) * (double)rdf32(COW_IMG(0x103461dcu)))));
                d6 = (double)(float)fr(g, fr(g, fr(g, fr(g, (double)rdf32(eax) * (double)rdf32(COW_IMG(0x103461f8u))) + fr(g, (double)rdf32(eax + 4u) * (double)rdf32(COW_IMG(0x103461f0u)))) + fr(g, (double)rdf32(eax + 8u) * (double)rdf32(COW_IMG(0x103461f4u)))) + (double)rdf32(COW_IMG(0x10329a08u)));
                d7 = (double)(float)fr(g, d3 + (double)rdf32(COW_IMG(0x10329a08u)));
                d8 = (double)(float)fr(g, d4 + (double)rdf32(COW_IMG(0x10329a08u)));
                d9 = (double)(float)fr(g, d5 + (double)rdf32(COW_IMG(0x10329a08u)));
                if ((int32_t)((uint32_t)fist32(g, d6) + 0x10u) >= 0)
                {
                    edx = (uint32_t)fist32(g, d6) + 0x10u;
                    ebx = (uint32_t)fist32(g, d8) + 0x80u;
                    esi = (uint32_t)fist32(g, d7) + 0x10u;
                    edi = (uint32_t)fist32(g, d9) + 0x80u;
                    if ((int32_t)edx > 255)
                    {
                        edx = 0xffu;
                    }
                }
                else
                {
                    ebx = (uint32_t)fist32(g, d8) + 0x80u;
                    esi = (uint32_t)fist32(g, d7) + 0x10u;
                    edi = (uint32_t)fist32(g, d9) + 0x80u;
                    edx = 0u;
                }
                if ((int32_t)esi >= 0)
                {
                    if ((int32_t)esi > 255)
                    {
                        esi = 0xffu;
                    }
                }
                else
                {
                    esi = 0u;
                }
                if ((int32_t)ebx >= 0)
                {
                    if ((int32_t)ebx > 255)
                    {
                        ebx = 0xffu;
                    }
                }
                else
                {
                    ebx = 0u;
                }
                if ((int32_t)edi >= 0)
                {
                    if ((int32_t)edi <= 255)
                    {
                        cf = edi < 0xffu;
                        pf = PARITY((uint8_t)(edi - 0xffu));
                        zf = edi == 0xffu;
                        sf = (int32_t)(edi - 0xffu) < 0;
                        of = ((edi ^ 0xffu) & (edi ^ edi - 0xffu)) >> 0x1fu;
                    }
                    else
                    {
                        cf = edi < 0xffu;
                        pf = PARITY((uint8_t)(edi - 0xffu));
                        zf = edi == 0xffu;
                        sf = (int32_t)(edi - 0xffu) < 0;
                        of = ((edi ^ 0xffu) & (edi ^ edi - 0xffu)) >> 0x1fu;
                        edi = 0xffu;
                    }
                }
                else
                {
                    edi = 0u;
                    cf = 0u;
                    pf = PARITY(0u);
                    zf = 1u;
                    sf = 0u;
                    of = 0u;
                }
                t10 = rd32(self + 0x1094u);
                t11 = rd32(self + 0x1098u);
                wr16(loc_10, (uint16_t)(edx << (t10 & 0x1fu) | ebx << (t11 & 0x1fu)));
                wr16(loc_10 + 2u, (uint16_t)(esi << (rd32(self + 0x1094u) & 0x1fu) | edi << (rd32(self + 0x1098u) & 0x1fu)));
                if (loc_c + 2u < rd32(self + 0x1078u))
                {
                    eax = eax + 0x20u;
                    loc_10 = loc_10 + 4u;
                    loc_c = loc_c + 2u;
                    goto L_102e5617;
                }
            }
            wr32(self + 0x108cu, 0u);
        }
    }
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e55b1(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102e55b1(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
