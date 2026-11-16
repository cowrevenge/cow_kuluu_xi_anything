/* f_0x10174830 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10174830(Guest* g)
{
    double d1;
    double d10;
    double d11;
    double d12;
    double d13;
    double d2;
    double d3;
    double d4;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t esi;
    double loc_1c_f;
    double loc_20_f;
    double loc_24_f;
    double loc_28_f;
    double loc_2c_f;
    double loc_30_f;
    uint32_t t14;
    const uint32_t sp0 = g->esp;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 84u);

    wr32(sp0 - 0x40u, in_esi);
    wr32(sp0 - 0x44u, in_edi);
    d1 = (double)(float)(double)rdf32(arg2 + 4u);
    wrf32(sp0 - 0x38u, (float)d1);
    wr32(sp0 - 0x3cu, rd32(arg2));
    d2 = (double)(float)(double)rdf32(arg2 + 8u);
    wrf32(sp0 - 0x34u, (float)d2);
    d3 = (double)(float)(double)rdf32(arg3 + 8u);
    wrf32(sp0 - 0x10u, (float)d3);
    d4 = (double)(float)fr(g, fr(g, fr(g, fr(g, cow_bits2f(rd32(arg2)) * (double)rdf32(arg1)) + fr(g, d2 * (double)rdf32(arg1 + 0x20u))) + fr(g, d1 * (double)rdf32(arg1 + 0x10u))) + (double)rdf32(arg1 + 0x30u));
    wrf32(sp0 - 0x24u, (float)d4);
    d5 = (double)(float)fr(g, fr(g, fr(g, fr(g, cow_bits2f(rd32(arg2)) * (double)rdf32(arg1 + 4u)) + fr(g, d2 * (double)rdf32(arg1 + 0x24u))) + fr(g, d1 * (double)rdf32(arg1 + 0x14u))) + (double)rdf32(arg1 + 0x34u));
    wrf32(sp0 - 0x20u, (float)d5);
    d6 = (double)(float)fr(g, fr(g, fr(g, fr(g, d2 * (double)rdf32(arg1 + 0x28u)) + fr(g, d1 * (double)rdf32(arg1 + 0x18u))) + fr(g, cow_bits2f(rd32(arg2)) * (double)rdf32(arg1 + 8u))) + (double)rdf32(arg1 + 0x38u));
    wrf32(sp0 - 0x1cu, (float)d6);
    d7 = (double)rdf32(arg3 + 4u);
    d8 = (double)(float)fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg3) * (double)rdf32(arg1)) + fr(g, d3 * (double)rdf32(arg1 + 0x20u))) + fr(g, d7 * (double)rdf32(arg1 + 0x10u))) + (double)rdf32(arg1 + 0x30u));
    wrf32(sp0 - 0x30u, (float)d8);
    d9 = (double)(float)fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg3) * (double)rdf32(arg1 + 4u)) + fr(g, d3 * (double)rdf32(arg1 + 0x24u))) + fr(g, d7 * (double)rdf32(arg1 + 0x14u))) + (double)rdf32(arg1 + 0x34u));
    wrf32(sp0 - 0x2cu, (float)d9);
    d10 = (double)(float)fr(g, fr(g, fr(g, fr(g, d3 * (double)rdf32(arg1 + 0x28u)) + fr(g, d7 * (double)rdf32(arg1 + 0x18u))) + fr(g, (double)rdf32(arg3) * (double)rdf32(arg1 + 8u))) + (double)rdf32(arg1 + 0x38u));
    wrf32(sp0 - 0x28u, (float)d10);
    d11 = (double)(float)fr(g, (double)rdf32(arg3) - cow_bits2f(rd32(arg2)));
    wrf32(sp0 - 0xcu, (float)d11);
    d12 = (double)(float)fr(g, d7 - d1);
    wrf32(sp0 - 8u, (float)d12);
    d13 = (double)(float)fr(g, d3 - d2);
    wrf32(sp0 - 4u, (float)d13);
    if ((cow_fsw(g, d8, (double)rdf32(COW_IMG(0x1032a3d0u)), 0u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, d8, (double)rdf32(COW_IMG(0x1032a3d0u)), 0u) & 0x100u;
        loc_24_f = d4;
        loc_20_f = d5;
        loc_1c_f = d6;
        goto L_101749ac;
    }
    eax = cow_fsw(g, d8, (double)rdf32(COW_IMG(0x1032a3d0u)), 0u) & 0x100u;
    loc_24_f = d4;
    loc_20_f = d5;
    loc_1c_f = d6;
    loc_30_f = d8;
    loc_2c_f = d9;
    loc_28_f = d10;
    if (!(loc_30_f <= (double)rdf32(COW_IMG(0x10329a08u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_30_f, (double)rdf32(COW_IMG(0x10329a08u)), 0u);
        goto L_101749ac;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_30_f, (double)rdf32(COW_IMG(0x10329a08u)), 0u);
    if ((cow_fsw(g, loc_2c_f, (double)rdf32(COW_IMG(0x1032a3d0u)), 0u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, loc_2c_f, (double)rdf32(COW_IMG(0x1032a3d0u)), 0u) & 0x100u;
        goto L_101749ac;
    }
    eax = cow_fsw(g, loc_2c_f, (double)rdf32(COW_IMG(0x1032a3d0u)), 0u) & 0x100u;
    if (!(loc_2c_f <= (double)rdf32(COW_IMG(0x10329a08u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_2c_f, (double)rdf32(COW_IMG(0x10329a08u)), 0u);
        goto L_101749ac;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_2c_f, (double)rdf32(COW_IMG(0x10329a08u)), 0u);
    if ((cow_fsw(g, loc_28_f, (double)rdf32(COW_IMG(0x1032a3d0u)), 0u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, loc_28_f, (double)rdf32(COW_IMG(0x1032a3d0u)), 0u) & 0x100u;
        goto L_101749ac;
    }
    eax = cow_fsw(g, loc_28_f, (double)rdf32(COW_IMG(0x1032a3d0u)), 0u) & 0x100u;
    if (!(loc_28_f <= (double)rdf32(COW_IMG(0x10329a08u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_28_f, (double)rdf32(COW_IMG(0x10329a08u)), 0u);
        goto L_101749ac;
    }
    return 1u;
L_101749ac: ;
    if ((cow_fsw(g, loc_24_f, (double)rdf32(COW_IMG(0x1032a3d0u)), 0u) & 0x100u) != 0u) goto L_10174a25;
    eax = cow_fsw(g, loc_24_f, (double)rdf32(COW_IMG(0x1032a3d0u)), 0u) & 0x100u;
    if (!(loc_24_f <= (double)rdf32(COW_IMG(0x10329a08u)))) goto L_10174a25;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_24_f, (double)rdf32(COW_IMG(0x10329a08u)), 0u);
    if ((cow_fsw(g, loc_20_f, (double)rdf32(COW_IMG(0x1032a3d0u)), 0u) & 0x100u) != 0u) goto L_10174a25;
    eax = cow_fsw(g, loc_20_f, (double)rdf32(COW_IMG(0x1032a3d0u)), 0u) & 0x100u;
    if (!(loc_20_f <= (double)rdf32(COW_IMG(0x10329a08u)))) goto L_10174a25;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_20_f, (double)rdf32(COW_IMG(0x10329a08u)), 0u);
    if ((cow_fsw(g, loc_1c_f, (double)rdf32(COW_IMG(0x1032a3d0u)), 0u) & 0x100u) != 0u) goto L_10174a25;
    eax = cow_fsw(g, loc_1c_f, (double)rdf32(COW_IMG(0x1032a3d0u)), 0u) & 0x100u;
    if (!(loc_1c_f <= (double)rdf32(COW_IMG(0x10329a08u)))) goto L_10174a25;
L_10174a18: ;
    return 1u;
L_10174a25: ;
    esi = COW_IMG(0x10376bc0u);
L_10174a2a: ;
    wr32(sp0 - 0x48u, esi);
    wr32(sp0 - 0x4cu, sp0 - 0xcu);
    wr32(sp0 - 0x50u, sp0 - 0x3cu);
    g->esp = sp0 - 0x44u;
    t14 = cow_stdcall(g, COW_IMG(0x101768a0u), 3, sp0 - 0x3cu, sp0 - 0xcu, esi);
    if (t14 != 0u) goto L_10174a18;
    eax = t14;
    if ((int32_t)(esi + 0x1cu) < (int32_t)COW_IMG(0x10376c68u))
    {
        esi = esi + 0x1cu;
        goto L_10174a2a;
    }
    g->esi = rd32(sp0 - 0x40u);
    g->edi = rd32(sp0 - 0x44u);
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10174830(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10174830(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
