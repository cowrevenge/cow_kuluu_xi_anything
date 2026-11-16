/* f_0x102d8a8f - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_102d8a8f(Guest* g)
{
    double d1;
    double d10;
    double d11;
    double d12;
    double d14;
    double d19;
    double d2;
    double d20;
    double d23;
    double d24;
    double d4;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    double loc_c_f;
    uint32_t t13;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t21;
    uint32_t t22;
    uint32_t t3;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 4u, in_ebp);
    d1 = fr(g, fr(g, (double)rdf32(rd32(sp0 + 8u) + 0x14u) + (double)rdf32(rd32(sp0 + 8u))) + (double)rdf32(rd32(sp0 + 8u) + 0x28u));
    if ((cow_fsw(g, d1, (double)rdf32(COW_IMG(0x103295d8u)), 1u) >> 8u & 0x41u) != 0u)
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = rd32(sp0 + 8u);
        x0 = d1;
        wr32(sp0 - 0x18u, 0u);
        wr32(sp0 - 0x24u, in_ebx);
        wr32(sp0 - 0x28u, in_esi);
        wr32(sp0 - 0x2cu, in_edi);
        wr32(sp0 - 0x30u, 2u);
        d8 = (double)(float)fr(g, fr(g, (double)rdf32(ecx) - (double)rdf32(ecx + 0x14u)) - (double)rdf32(ecx + 0x28u));
        wrf32(sp0 - 0x14u, (float)d8);
        wr32(sp0 - 0x20u, 1u);
        wr32(sp0 - 0x1cu, 2u);
        d9 = (double)(float)fr(g, fr(g, (double)rdf32(ecx + 0x14u) - (double)rdf32(ecx)) - (double)rdf32(ecx + 0x28u));
        wrf32(sp0 - 0x10u, (float)d9);
        d10 = (double)(float)fr(g, (double)rdf32(ecx + 0x28u) - fr(g, (double)rdf32(ecx + 0x14u) + (double)rdf32(ecx)));
        wrf32(sp0 - 0xcu, (float)d10);
        d11 = fr(g, fr(g, (double)rdf32(ecx) - (double)rdf32(ecx + 0x14u)) - (double)rdf32(ecx + 0x28u));
        if (cow_fsw(g, d11, d9, 0u) >> 8u & 1u)
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d11, d9, 0u);
            ebx = 1u;
            loc_c_f = d10;
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d11, d9, 0u);
            loc_c_f = d10;
            ebx = 0u;
        }
        d12 = (double)rdf32(ebx * 4u + sp0 - 0x14u);
        wr32(sp0 + 8u, ebx);
        if (cow_fsw(g, d12, loc_c_f, 0u) >> 8u & 1u)
        {
            wr32(sp0 + 8u, 2u);
            ebx = 2u;
        }
        t13 = rd32(ebx * 4u + sp0 - 0x20u);
        wr32(sp0 - 8u, t13);
        d14 = fr(g, fr(g, sqrt(fr(g, (double)rdf32(ebx * 4u + sp0 - 0x14u) + (double)rdf32(COW_IMG(0x1032961cu))))) * (double)rdf32(COW_IMG(0x10329a08u)));
        t15 = rd32(sp0 + 4u);
        wrf32(ebx * 4u + t15, (float)d14);
        t16 = rd32(sp0 + t13 * 4u - 0x20u) << 2u;
        t17 = rd32(sp0 + 8u);
        t18 = rd32(sp0 + t13 * 4u - 0x20u);
        d19 = fr(g, fr(g, (double)rdf32(ebx * 4u + ecx + t13 * 0x10u) + (double)rdf32(ebx * 0x10u + ecx + t13 * 4u)) * fr(g, (double)rdf32(COW_IMG(0x10329ce4u)) / d14));
        d20 = fr(g, (double)rdf32(COW_IMG(0x10329ce4u)) / d14);
        wr32(sp0 + 4u, t16);
        t21 = rd32(sp0 + t13 * 4u - 0x20u);
        wrf32(t13 * 4u + t15, (float)d19);
        t22 = rd32(sp0 + 4u);
        d23 = fr(g, fr(g, (double)rdf32(ecx + t17 * 4u + t18 * 0x10u) + (double)rdf32(ebx * 0x10u + ecx + t21 * 4u)) * d20);
        wrf32(t15 + t22, (float)d23);
        d24 = fr(g, fr(g, (double)rdf32(ecx + t13 * 0x10u + t21 * 4u) - (double)rdf32(ecx + t13 * 4u + t22 * 4u)) * d20);
        wrf32(t15 + 0xcu, (float)d24);
        eax = t15;
        edx = t13 + t22;
        x0 = d20;
    }
    else
    {
        ecx = rd32(sp0 + 8u);
        x0 = d1;
        d2 = fr(g, fr(g, sqrt(fr(g, x0 + (double)rdf32(COW_IMG(0x1032961cu))))) * (double)rdf32(COW_IMG(0x10329a08u)));
        t3 = rd32(sp0 + 4u);
        wrf32(t3 + 0xcu, (float)d2);
        d4 = fr(g, fr(g, (double)rdf32(ecx + 0x18u) - (double)rdf32(ecx + 0x24u)) * fr(g, (double)rdf32(COW_IMG(0x10329ce4u)) / d2));
        d5 = fr(g, (double)rdf32(COW_IMG(0x10329ce4u)) / d2);
        wrf32(t3, (float)d4);
        d6 = fr(g, fr(g, (double)rdf32(ecx + 0x20u) - (double)rdf32(ecx + 8u)) * d5);
        wrf32(t3 + 4u, (float)d6);
        d7 = fr(g, fr(g, (double)rdf32(ecx + 4u) - (double)rdf32(ecx + 0x10u)) * d5);
        wrf32(t3 + 8u, (float)d7);
        eax = t3;
        edx = in_edx;
        x0 = d5;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102d8a8f(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102d8a8f(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
