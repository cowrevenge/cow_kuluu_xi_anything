/* f_0x10175780 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10175780(Guest* g)
{
    double d14;
    double d4;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_84;
    uint32_t loc_88;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t3;
    uint32_t t5;
    uint32_t t6;
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
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 156u);

    wr32(sp0 - 0x8cu, in_ebx);
    wr32(sp0 - 0x90u, in_ebp);
    wr32(sp0 - 0x10u, rd32(arg3));
    wr32(sp0 - 0x94u, in_esi);
    wr32(sp0 - 0x98u, in_edi);
    wr32(sp0 - 0x40u, 0x3f800000u);
    wr32(sp0 - 0x3cu, 0u);
    wr32(sp0 - 0x38u, 0u);
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x30u, 0u);
    wr32(sp0 - 0x2cu, 0x3f800000u);
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x18u, 0x3f800000u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 4u, 0x3f800000u);
    t1 = rd32(arg3 + 4u);
    wr32(sp0 - 0xcu, t1);
    t2 = rd32(arg3 + 8u);
    wr32(sp0 - 8u, t2);
    t3 = arg2 - (sp0 - 0x80u);
    wr32(sp0 - 0x84u, t3);
    wr32(sp0 - 0x88u, 4u);
    ebx = t3;
    esi = sp0 - 0x80u;
    loc_84 = t3;
    loc_88 = 4u;
L_10175842: ;
    ebx = ebx + esi;
    ebp = 4u;
    edi = sp0 - 0x40u;
L_1017584d: ;
    d4 = (double)rdf32(COW_IMG(0x103295d8u));
    wr32(esi, 0u);
    eax = edi;
    ecx = ebx;
    edx = 4u;
    x0 = d4;
L_10175862: ;
    if (edx != 1u)
    {
        edx = edx - 1u;
        x0 = fr(g, x0 + fr(g, (double)rdf32(ecx) * (double)rdf32(eax)));
        eax = eax + 0x10u;
        ecx = ecx + 4u;
        goto L_10175862;
    }
    x0 = fr(g, x0 + fr(g, (double)rdf32(ecx) * (double)rdf32(eax)));
    wrf32(esi, (float)x0);
    if (ebp != 1u)
    {
        ebp = ebp - 1u;
        esi = esi + 4u;
        edi = edi + 4u;
        goto L_1017584d;
    }
    esi = esi + 4u;
    wr32(sp0 - 0x88u, loc_88 - 1u);
    if (loc_88 != 1u)
    {
        loc_88 = loc_88 - 1u;
        goto L_1017583e;
    }
    t5 = rd32(sp0 - 0x7cu);
    t6 = rd32(sp0 - 0x78u);
    wr32(arg1 + 4u, t5);
    t7 = rd32(sp0 - 0x74u);
    wr32(arg1 + 8u, t6);
    t8 = rd32(sp0 - 0x70u);
    wr32(arg1 + 0xcu, t7);
    t9 = rd32(sp0 - 0x6cu);
    wr32(arg1 + 0x10u, t8);
    t10 = rd32(sp0 - 0x68u);
    wr32(arg1 + 0x14u, t9);
    t11 = rd32(sp0 - 0x64u);
    wr32(arg1 + 0x18u, t10);
    t12 = rd32(sp0 - 0x60u);
    wr32(arg1 + 0x1cu, t11);
    t13 = rd32(sp0 - 0x5cu);
    d14 = (double)rdf32(sp0 - 0x80u);
    wr32(arg1 + 0x20u, t12);
    t15 = rd32(sp0 - 0x58u);
    wr32(arg1 + 0x24u, t13);
    t16 = rd32(sp0 - 0x54u);
    wrf32(arg1, (float)d14);
    wr32(arg1 + 0x28u, t15);
    t17 = rd32(sp0 - 0x50u);
    wr32(arg1 + 0x2cu, t16);
    t18 = rd32(sp0 - 0x4cu);
    wr32(arg1 + 0x30u, t17);
    t19 = rd32(sp0 - 0x48u);
    wr32(arg1 + 0x34u, t18);
    t20 = rd32(sp0 - 0x44u);
    wr32(arg1 + 0x38u, t19);
    wr32(arg1 + 0x3cu, t20);
    return;
L_1017583e: ;
    ebx = loc_84;
    goto L_10175842;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10175780(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10175780(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
