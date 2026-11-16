/* f_0x1027d300 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_1027d300(Guest* g)
{
    double d13;
    double d15;
    double d18;
    double d19;
    double d20;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_30;
    uint32_t loc_34;
    uint32_t loc_38;
    uint32_t loc_3c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t14;
    uint32_t t16;
    uint32_t t17;
    uint32_t t2;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 112u);

    wr32(sp0 - 0x30u, in_ebx);
    wr32(sp0 - 0x34u, in_esi);
    wr32(sp0 - 0x38u, in_edi);
    if (rd32(sp0 + 4u) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_1027d469;
    }
    edi = rd32(sp0 + 4u);
    if ((int32_t)rd32(sp0 + 8u) < 1)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_1027d469;
    }
    esi = rd32(sp0 + 8u);
    if (arg3 == 0u)
    {
        eax = arg3;
        edx = in_edx;
        goto L_1027d469;
    }
    if (arg4 == 0u)
    {
        eax = arg3;
        edx = arg4;
        goto L_1027d469;
    }
    if ((int32_t)arg3 <= 0)
    {
        ecx = 0u;
        goto L_1027d348;
    }
    ecx = 0u;
L_1027d33d: ;
    if (rd32(arg4 + ecx * 4u) == 1u) goto L_1027d348;
    if ((int32_t)(ecx + 1u) < (int32_t)arg3)
    {
        ecx = ecx + 1u;
        goto L_1027d33d;
    }
    ecx = ecx + 1u;
L_1027d348: ;
    if (ecx == arg3) goto L_1027d48a;
    if ((int32_t)(esi - 1u) <= 0) goto L_1027d48a;
    ecx = esi - 1u;
    wr32(sp0 - 0x3cu, in_ebp);
    wr32(sp0 + 8u, ecx);
    ebx = 3u;
    loc_30 = in_ebx;
    loc_34 = in_esi;
    loc_38 = in_edi;
    loc_3c = in_ebp;
L_1027d365: ;
    if ((int32_t)arg3 <= 0) goto L_1027d450;
    ebp = arg3 + ebx - 3u;
    esi = 0u;
L_1027d373: ;
    if (rd32(arg4 + esi * 4u) != 1u)
    {
        esi = esi + 1u;
    }
    else
    {
        t1 = rd32(ebx * 4u + edi + esi * 4u);
        wr32(sp0 - 0x40u, t1);
        t2 = rd32(ebx * 4u + edi + esi * 4u - 4u);
        wr32(sp0 - 0x44u, t2);
        t3 = rd32(ebx * 4u + edi + esi * 4u - 8u);
        wr32(sp0 - 0x48u, t3);
        t4 = rd32(ebx * 4u + edi + esi * 4u - 0xcu);
        wr32(sp0 - 0x4cu, t4);
        wr32(sp0 - 0x50u, sp0 - 0x10u);
        g->esp = sp0 - 0x3cu;
        cow_cdecl(g, COW_IMG(0x1027a740u), 5, sp0 - 0x10u, t4, t3, t2, t1);
        t5 = ebp * 4u + edi + esi * 4u + 0xcu;
        wr32(sp0 - 0x24u, t5);
        t6 = ebp * 4u + edi + esi * 4u + 4u;
        t7 = rd32(t5);
        wr32(sp0 + 4u, t6);
        t8 = ebp * 4u + edi + esi * 4u + 8u;
        wr32(sp0 - 0x28u, t8);
        wr32(sp0 - 0x54u, t7);
        wr32(sp0 - 0x58u, rd32(t8));
        t9 = ebp * 4u + edi + esi * 4u;
        wr32(sp0 - 0x2cu, t9);
        t10 = rd32(rd32(sp0 + 4u));
        wr32(sp0 - 0x5cu, t10);
        wr32(sp0 - 0x60u, rd32(t9));
        wr32(sp0 - 0x64u, sp0 - 0x20u);
        g->eax = sp0 - 0x20u;
        g->esp = sp0 - 0x50u;
        t11 = cow_cdecl(g, COW_IMG(0x1027a740u), 5, sp0 - 0x20u, rd32(t9), t10, rd32(t8), t7);
        wr32(sp0 - 0x68u, sp0 - 0x20u);
        wr32(sp0 - 0x6cu, sp0 - 0x10u);
        g->esp = sp0 - 0x64u;
        t12 = cow_cdecl(g, COW_IMG(0x1027aee0u), 2, sp0 - 0x10u, sp0 - 0x20u);
        d13 = cow_take_float(g);
        if (d13 < (double)rdf32(COW_IMG(0x103295d8u)))
        {
            t14 = rd32(sp0 + 4u);
            d15 = (double)rdf32(sp0 - 0x20u);
            wrf32(rd32(sp0 - 0x2cu), (float)-d15);
            t16 = rd32(sp0 - 0x24u);
            t17 = rd32(sp0 - 0x28u);
            d18 = (double)rdf32(sp0 - 0x1cu);
            wrf32(t14, (float)-d18);
            d19 = (double)rdf32(sp0 - 0x18u);
            wrf32(t17, (float)-d19);
            d20 = (double)rdf32(sp0 - 0x14u);
            wrf32(t16, (float)-d20);
        }
        esi = esi + 4u;
    }
    if ((int32_t)esi < (int32_t)arg3) goto L_1027d373;
L_1027d450: ;
    t21 = rd32(sp0 + 8u) - 1u;
    t22 = rd32(sp0 + 8u);
    wr32(sp0 + 8u, t21);
    if (t22 != 1u)
    {
        ebx = arg3 + ebx;
        goto L_1027d365;
    }
    g->ebx = loc_30;
    g->esi = loc_34;
    g->edi = loc_38;
    g->ebp = loc_3c;
    return;
L_1027d469: ;
    wr32(sp0 - 0x3cu, 0x138u);
    wr32(sp0 - 0x40u, COW_IMG(0x103b4584u));
    wr32(sp0 - 0x44u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = self;
    g->edx = edx;
    g->esp = sp0 - 0x3cu;
    t23 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103b4584u));
    t24 = g->ecx;
    t25 = g->edx;
    wr32(sp0 - 0x48u, COW_IMG(0x103b4568u));
    g->esp = sp0 - 0x40u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b4568u), COW_IMG(0x103b379cu));
L_1027d48a: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1027d300(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1027d300(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
