/* f_0x10182490 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=6 */
void cow_fn_10182490(Guest* g)
{
    double d1;
    double d16;
    double d2;
    double d3;
    double d4;
    double d5;
    double d6;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_c4;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 216u);

    d1 = (double)rdf32(sp0 + 0x10u);
    wr32(sp0 - 0xc8u, in_ebx);
    wr32(sp0 - 0xccu, in_ebp);
    wr32(sp0 - 0xd0u, in_esi);
    wr32(sp0 - 0xd4u, in_edi);
    wr32(sp0 - 0x7cu, 0u);
    wr32(sp0 - 0x78u, 0u);
    wr32(sp0 - 0x74u, 0u);
    wr32(sp0 - 0x70u, 0u);
    wr32(sp0 - 0x68u, 0u);
    wr32(sp0 - 0x64u, 0u);
    wr32(sp0 - 0x60u, 0u);
    wr32(sp0 - 0x5cu, 0u);
    wr32(sp0 - 0x50u, 0u);
    wr32(sp0 - 0x4cu, 0u);
    wr32(sp0 - 0x54u, 0x3f800000u);
    wr32(sp0 - 0x44u, 0u);
    wr32(sp0 - 0xc0u, 0x3f800000u);
    wr32(sp0 - 0xbcu, 0u);
    wr32(sp0 - 0xb8u, 0u);
    wr32(sp0 - 0xb4u, 0u);
    wr32(sp0 - 0xb0u, 0u);
    wr32(sp0 - 0xacu, 0x3f800000u);
    wr32(sp0 - 0xa8u, 0u);
    wr32(sp0 - 0xa4u, 0u);
    wr32(sp0 - 0xa0u, 0u);
    wr32(sp0 - 0x9cu, 0u);
    wr32(sp0 - 0x94u, 0u);
    wr32(sp0 - 0x90u, 0u);
    wr32(sp0 - 0x8cu, 0u);
    wr32(sp0 - 0x88u, 0u);
    wr32(sp0 - 0x84u, 0x3f800000u);
    wr32(sp0 - 0x98u, 0xbf800000u);
    d2 = (double)(float)fr(g, fr(g, d1 + d1) / (double)rdf32(sp0 + 8u));
    wrf32(sp0 - 0x80u, (float)d2);
    d3 = (double)(float)fr(g, fr(g, d1 + d1) / (double)rdf32(sp0 + 0xcu));
    wrf32(sp0 - 0x6cu, (float)d3);
    d4 = (double)(float)fr(g, fr(g, (double)rdf32(sp0 + 0x14u) + (double)rdf32(sp0 + 0x18u)) / fr(g, (double)rdf32(sp0 + 0x18u) - (double)rdf32(sp0 + 0x14u)));
    wrf32(sp0 - 0x58u, (float)d4);
    d5 = (double)(float)fr(g, fr(g, fr(g, (double)rdf32(sp0 + 0x14u) * (double)rdf32(sp0 + 0x18u)) * (double)rdf32(COW_IMG(0x1032c084u))) / fr(g, (double)rdf32(sp0 + 0x18u) - (double)rdf32(sp0 + 0x14u)));
    wrf32(sp0 - 0x48u, (float)d5);
    ebp = 0u;
L_101825ea: ;
    wr32(sp0 - 0xc4u, 4u);
    ebx = ebp + sp0 - 0xc0u;
    esi = ebp + sp0 - 0x40u;
    edi = sp0 - 0x80u;
    loc_c4 = 4u;
L_10182601: ;
    d6 = (double)rdf32(COW_IMG(0x103295d8u));
    wr32(esi, 0u);
    eax = edi;
    ecx = ebx;
    edx = 4u;
    x0 = d6;
L_10182616: ;
    if (edx != 1u)
    {
        edx = edx - 1u;
        x0 = fr(g, x0 + fr(g, (double)rdf32(ecx) * (double)rdf32(eax)));
        eax = eax + 0x10u;
        ecx = ecx + 4u;
        goto L_10182616;
    }
    x0 = fr(g, x0 + fr(g, (double)rdf32(ecx) * (double)rdf32(eax)));
    wrf32(esi, (float)x0);
    wr32(sp0 - 0xc4u, loc_c4 - 1u);
    if (loc_c4 != 1u)
    {
        esi = esi + 4u;
        edi = edi + 4u;
        loc_c4 = loc_c4 - 1u;
        goto L_10182601;
    }
    if ((int32_t)(ebp + 0x10u) < 64)
    {
        ebp = ebp + 0x10u;
        goto L_101825ea;
    }
    t7 = rd32(sp0 - 0x3cu);
    t8 = rd32(sp0 - 0x38u);
    wr32(arg1 + 4u, t7);
    t9 = rd32(sp0 - 0x34u);
    wr32(arg1 + 8u, t8);
    t10 = rd32(sp0 - 0x30u);
    wr32(arg1 + 0xcu, t9);
    t11 = rd32(sp0 - 0x2cu);
    wr32(arg1 + 0x10u, t10);
    t12 = rd32(sp0 - 0x28u);
    wr32(arg1 + 0x14u, t11);
    t13 = rd32(sp0 - 0x24u);
    wr32(arg1 + 0x18u, t12);
    t14 = rd32(sp0 - 0x20u);
    wr32(arg1 + 0x1cu, t13);
    t15 = rd32(sp0 - 0x1cu);
    d16 = (double)rdf32(sp0 - 0x40u);
    wr32(arg1 + 0x20u, t14);
    t17 = rd32(sp0 - 0x18u);
    wr32(arg1 + 0x24u, t15);
    t18 = rd32(sp0 - 0x14u);
    wrf32(arg1, (float)d16);
    wr32(arg1 + 0x28u, t17);
    t19 = rd32(sp0 - 0x10u);
    wr32(arg1 + 0x2cu, t18);
    t20 = rd32(sp0 - 0xcu);
    wr32(arg1 + 0x30u, t19);
    t21 = rd32(sp0 - 8u);
    wr32(arg1 + 0x34u, t20);
    t22 = rd32(sp0 - 4u);
    wr32(arg1 + 0x38u, t21);
    wr32(arg1 + 0x3cu, t22);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10182490(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10182490(g);
    g->esp = sp0;
    rt_return(g, g->eax, 24u);
}
/* COW_ADAPTER END */
