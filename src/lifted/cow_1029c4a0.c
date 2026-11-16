/* f_0x1029c4a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=7 */
void cow_fn_1029c4a0(Guest* g)
{
    double d10;
    double d11;
    double d12;
    double d14;
    double d15;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t t1;
    uint32_t t13;
    uint32_t t16;
    uint32_t t17;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x34cu);
    t2 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x350u);
    t3 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x354u);
    if (rd32(sp0 + 4u) != 0u)
    {
        eax = rd32(COW_IMG(0x1099d200u));
        ecx = rd32(rd32(COW_IMG(0x1099d200u)) + 0xe24u);
        edx = rd32(sp0 + 4u);
        loc_18 = t1;
        loc_14 = t2;
        loc_10 = t3;
        t4 = rd32(sp0 + 0x14u);
        wr32(sp0 + 0x14u, edx);
        edx = arg7;
        ebx = arg4;
        ebp = t4 - (ecx << 2u) + 4u;
        ecx = arg3;
        esi = arg2;
        edi = arg6;
L_1029c507: ;
        d5 = (double)(float)fr(g, (double)rdf32(esi + 8u) - (double)rdf32(eax + 0x290u));
        d6 = fr(g, (double)rdf32(esi + 4u) - (double)rdf32(eax + 0x28cu));
        d7 = fr(g, (double)rdf32(esi) - (double)rdf32(eax + 0x288u));
        d8 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, sqrt(fr(g, fr(g, fr(g, fr(g, (double)rdf32(esi + 8u) - (double)rdf32(eax + 0x290u)) * d5) + fr(g, d6 * d6)) + fr(g, d7 * d7)))));
        wrf32(sp0 + 4u, (float)d8);
        d9 = (double)(float)fr(g, d7 * (double)rdf32(sp0 + 4u));
        d10 = fr(g, fr(g, fr(g, fr(g, d9 * (double)rdf32(ecx)) + fr(g, fr(g, d5 * (double)rdf32(sp0 + 4u)) * (double)rdf32(ecx + 8u))) + fr(g, fr(g, d6 * (double)rdf32(sp0 + 4u)) * (double)rdf32(ecx + 4u))) - fr(g, fr(g, fr(g, cow_bits2f(loc_18) * (double)rdf32(ecx)) + fr(g, cow_bits2f(loc_10) * (double)rdf32(ecx + 8u))) + fr(g, cow_bits2f(loc_14) * (double)rdf32(ecx + 4u))));
        wrf32(ebx + 4u, (float)d10);
        wr32(ebx, rd32(ebp));
        d11 = fr(g, (double)rdf32(rd32(COW_IMG(0x1099d200u)) + 0x76cu) * (double)rdf32(rd32(COW_IMG(0x1099d200u)) + 0x758u));
        wrf32(edx, (float)d11);
        d12 = fr(g, (double)rdf32(rd32(COW_IMG(0x1099d200u)) + 0x76cu) * (double)rdf32(rd32(COW_IMG(0x1099d200u)) + 0x75cu));
        wrf32(edx + 4u, (float)d12);
        t13 = rd32(COW_IMG(0x1099d200u));
        d14 = fr(g, (double)rdf32(rd32(COW_IMG(0x1099d200u)) + 0x76cu) * (double)rdf32(rd32(COW_IMG(0x1099d200u)) + 0x760u));
        wrf32(edx + 8u, (float)d14);
        d15 = fr(g, fr(g, fr(g, cow_bits2f(loc_10) * (double)rdf32(edi + 8u)) + fr(g, cow_bits2f(loc_14) * (double)rdf32(edi + 4u))) + fr(g, cow_bits2f(loc_18) * (double)rdf32(edi)));
        if (!(d15 < (double)rdf32(COW_IMG(0x103295d8u))))
        {
            x0 = d15;
        }
        else
        {
            x0 = d15;
            x0 = (double)rdf32(COW_IMG(0x103295d8u));
        }
        wrf32(edx + 0xcu, (float)x0);
        t16 = rd32(sp0 + 0x14u) - 1u;
        t17 = rd32(sp0 + 0x14u);
        wr32(sp0 + 0x14u, t16);
        if (t17 != 1u)
        {
            ecx = ecx + 0xcu;
            edx = edx + 0x10u;
            ebx = ebx + 8u;
            ebp = ebp + 8u;
            esi = esi + 0xcu;
            edi = edi + 0xcu;
            goto L_1029c502;
        }
    }
    return;
L_1029c502: ;
    eax = rd32(COW_IMG(0x1099d200u));
    goto L_1029c507;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1029c4a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1029c4a0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
