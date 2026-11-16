/* f_0x10297340 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10297340(Guest* g)
{
    double d4;
    double d5;
    double d6;
    double d7;
    uint32_t ebx;
    uint32_t edi;
    uint32_t esi;
    double loc_54_f;
    double loc_58_f;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 120u);

    wr32(sp0 - 0x5cu, in_ebp);
    wr32(sp0 - 0x60u, in_esi);
    t1 = rd32(COW_IMG(0x1099d200u)) + 0x248u;
    wr32(sp0 - 0x64u, t1);
    wr32(sp0 - 0x68u, sp0 - 0x40u);
    g->esp = sp0 - 0x60u;
    cow_cdecl(g, COW_IMG(0x1027f090u), 2, sp0 - 0x40u, t1);
    if ((int32_t)arg1 <= 0)
    {
        ebx = in_ebx;
        edi = in_edi;
    }
    else
    {
        wr32(sp0 - 0x64u, in_ebx);
        wr32(sp0 - 0x68u, in_edi);
        esi = 0u;
        edi = arg2 + 8u;
L_10297378: ;
        t2 = rd32(edi - 8u);
        wr32(sp0 - 0x4cu, t2);
        t3 = rd32(edi - 4u);
        wr32(sp0 - 0x48u, t3);
        wr32(sp0 - 0x44u, rd32(edi));
        wr32(sp0 - 0x6cu, sp0 - 0x4cu);
        wr32(sp0 - 0x70u, sp0 - 0x40u);
        wr32(sp0 - 0x74u, sp0 - 0x58u);
        g->esp = sp0 - 0x68u;
        cow_cdecl(g, COW_IMG(0x1027ef40u), 3, sp0 - 0x58u, sp0 - 0x40u, sp0 - 0x4cu);
        d4 = (double)(float)fr(g, (double)rdf32(sp0 - 0x58u) * fr(g, (double)rdf32(rd32(COW_IMG(0x1099d200u)) + 0x128u) / (double)rdf32(sp0 - 0x50u)));
        wrf32(sp0 - 0x58u, (float)d4);
        d5 = (double)(float)fr(g, (double)rdf32(sp0 - 0x54u) * fr(g, (double)rdf32(rd32(COW_IMG(0x1099d200u)) + 0x128u) / (double)rdf32(sp0 - 0x50u)));
        wrf32(sp0 - 0x54u, (float)d5);
        d6 = fr(g, fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - d4) * (double)rdf32(COW_IMG(0x10329a08u)));
        wrf32(arg3 + esi * 8u, (float)d6);
        d7 = fr(g, fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - d5) * (double)rdf32(COW_IMG(0x10329a08u)));
        wrf32(arg3 + esi * 8u + 4u, (float)d7);
        if ((int32_t)(esi + 1u) < (int32_t)arg1)
        {
            esi = esi + 1u;
            edi = edi + 0xcu;
            loc_58_f = d4;
            loc_54_f = d5;
            goto L_10297378;
        }
        ebx = rd32(sp0 - 0x64u);
        edi = rd32(sp0 - 0x68u);
    }
    g->ebx = ebx;
    g->edi = edi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10297340(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10297340(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
