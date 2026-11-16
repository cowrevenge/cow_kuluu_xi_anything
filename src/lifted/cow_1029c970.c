/* f_0x1029c970 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=6 */
void cow_fn_1029c970(Guest* g)
{
    double d10;
    double d11;
    double d12;
    double d13;
    double d15;
    double d16;
    double d17;
    double d2;
    double d3;
    double d4;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t edi;
    uint32_t esi;
    uint32_t t1;
    uint32_t t14;
    uint32_t t18;
    uint32_t t19;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 124u);

    t1 = rd32(COW_IMG(0x1099d200u)) + 0x248u;
    wr32(sp0 - 0x60u, t1);
    wr32(sp0 - 0x64u, sp0 - 0x40u);
    d2 = (double)(float)fr(g, (double)rdf32(rd32(COW_IMG(0x1099d200u)) + 0x14u) + (double)rdf32(COW_IMG(0x1032b15cu)));
    wrf32(sp0 - 0x5cu, (float)d2);
    g->esp = sp0 - 0x5cu;
    cow_cdecl(g, COW_IMG(0x1027f090u), 2, sp0 - 0x40u, t1);
    if (rd32(sp0 + 4u) == 0u)
    {
        ebx = in_ebx;
        ebp = in_ebp;
        esi = in_esi;
        edi = in_edi;
    }
    else
    {
        eax = rd32(sp0 + 4u);
        wr32(sp0 - 0x60u, in_ebx);
        wr32(sp0 - 0x64u, in_ebp);
        wr32(sp0 - 0x68u, in_esi);
        wr32(sp0 - 0x6cu, in_edi);
        wr32(sp0 + 4u, eax);
        ebx = arg6;
        ebp = arg5;
        esi = arg4;
        edi = arg3;
L_1029c9bc: ;
        wr32(sp0 - 0x70u, sp0 - 0x58u);
        wr32(sp0 - 0x74u, sp0 - 0x40u);
        d3 = (double)(float)fr(g, (double)rdf32(edi) - (double)rdf32(rd32(COW_IMG(0x1099d200u)) + 0x288u));
        wrf32(sp0 - 0x58u, (float)d3);
        d4 = (double)(float)fr(g, (double)rdf32(edi + 4u) - (double)rdf32(rd32(COW_IMG(0x1099d200u)) + 0x28cu));
        wrf32(sp0 - 0x54u, (float)d4);
        wr32(sp0 - 0x78u, sp0 - 0x4cu);
        d5 = fr(g, (double)rdf32(edi + 8u) - (double)rdf32(rd32(COW_IMG(0x1099d200u)) + 0x290u));
        d6 = (double)(float)fr(g, d3 * fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, sqrt(fr(g, fr(g, fr(g, d5 * d5) + fr(g, d4 * d4)) + fr(g, d3 * d3))))));
        wrf32(sp0 - 0x58u, (float)d6);
        d7 = (double)(float)fr(g, d4 * fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, sqrt(fr(g, fr(g, fr(g, d5 * d5) + fr(g, d4 * d4)) + fr(g, d3 * d3))))));
        wrf32(sp0 - 0x54u, (float)d7);
        d8 = (double)(float)fr(g, d5 * fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, sqrt(fr(g, fr(g, fr(g, d5 * d5) + fr(g, d4 * d4)) + fr(g, d3 * d3))))));
        wrf32(sp0 - 0x50u, (float)d8);
        d9 = fr(g, fr(g, fr(g, d8 * (double)rdf32(esi + 8u)) + fr(g, d7 * (double)rdf32(esi + 4u))) + fr(g, d6 * (double)rdf32(esi)));
        d10 = fr(g, d9 + d9);
        d11 = (double)(float)fr(g, d6 - fr(g, d10 * (double)rdf32(esi)));
        wrf32(sp0 - 0x58u, (float)d11);
        d12 = (double)(float)fr(g, d7 - fr(g, d10 * (double)rdf32(esi + 4u)));
        wrf32(sp0 - 0x54u, (float)d12);
        d13 = (double)(float)fr(g, d8 - fr(g, d10 * (double)rdf32(esi + 8u)));
        wrf32(sp0 - 0x50u, (float)d13);
        g->eax = sp0 - 0x4cu;
        g->esp = sp0 - 0x6cu;
        t14 = cow_cdecl(g, COW_IMG(0x1027efa0u), 3, sp0 - 0x4cu, sp0 - 0x40u, sp0 - 0x58u);
        d15 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x4cu) * (double)rdf32(sp0 - 0x5cu)) + (double)rdf32(COW_IMG(0x1032961cu))) * (double)rdf32(COW_IMG(0x10329a08u)));
        wrf32(ebp, (float)d15);
        d16 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x48u) * (double)rdf32(sp0 - 0x5cu)) + (double)rdf32(COW_IMG(0x1032961cu))) * (double)rdf32(COW_IMG(0x10329a08u)));
        wrf32(ebp + 4u, (float)d16);
        d17 = (double)rdf32(sp0 - 0x44u);
        if (!(d17 < (double)rdf32(COW_IMG(0x103295d8u))))
        {
            x0 = (double)rdf32(COW_IMG(0x1032961cu));
        }
        else
        {
            x0 = (double)rdf32(COW_IMG(0x103295d8u));
        }
        if (arg2 != 0u)
        {
            wrf32(ebx, (float)x0);
            wrf32(ebx + 4u, (float)x0);
            wrf32(ebx + 8u, (float)x0);
        }
        wrf32(ebx + 0xcu, (float)x0);
        t18 = rd32(sp0 + 4u) - 1u;
        t19 = rd32(sp0 + 4u);
        wr32(sp0 + 4u, t18);
        if (t19 != 1u)
        {
            ebx = ebx + 0x10u;
            ebp = ebp + 8u;
            esi = esi + 0xcu;
            edi = edi + 0xcu;
            goto L_1029c9bc;
        }
        ebx = rd32(sp0 - 0x60u);
        ebp = rd32(sp0 - 0x64u);
        esi = rd32(sp0 - 0x68u);
        edi = rd32(sp0 - 0x6cu);
    }
    g->ebx = ebx;
    g->esi = esi;
    g->edi = edi;
    g->ebp = ebp;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1029c970(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1029c970(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
