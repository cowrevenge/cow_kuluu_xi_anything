/* f_0x102502f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102502f0(Guest* g)
{
    double d10;
    double d11;
    double d12;
    double d15;
    double d16;
    double d17;
    double d31;
    double d32;
    double d35;
    double d40;
    double d9;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_28;
    uint32_t t1;
    uint32_t t13;
    uint32_t t14;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t33;
    uint32_t t34;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 80u);

    wr32(sp0 - 0x2cu, in_esi);
    wr32(sp0 - 0x30u, in_edi);
    if ((rd8(rd32(sp0 + 4u)) & 0x20u) == 0u)
    {
        esi = 0u;
        goto L_102503f5;
    }
    esi = 0u;
    edi = rd32(sp0 + 4u);
L_10250304: ;
    t1 = rd32(rd32(COW_IMG(0x1038930cu) + esi * 4u) + 0x14u);
    wr32(sp0 - 0x20u, t1);
    t2 = rd32(rd32(COW_IMG(0x1038930cu) + esi * 4u) + 0x18u);
    wr32(sp0 - 0x1cu, t2);
    t3 = rd32(rd32(COW_IMG(0x1038930cu) + esi * 4u) + 0x1cu);
    wr32(sp0 - 0x18u, t3);
    t4 = rd32(rd32(COW_IMG(0x1038930cu) + esi * 4u) + 0x20u);
    wr32(sp0 - 0x14u, t4);
    wr32(sp0 - 0x34u, sp0 - 0x20u);
    wr32(sp0 - 0x38u, esi);
    g->edx = t4;
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x10272810u), 4, esi, sp0 - 0x20u, in_edi, in_esi);
    t5 = g->edx;
    if ((int32_t)(esi + 1u) < 5)
    {
        esi = esi + 1u;
        goto L_10250304;
    }
    edx = t5;
    wr32(sp0 - 0x34u, sp0 - 0x24u);
    wr32(sp0 - 0x38u, edi);
    g->edx = edx;
    t6 = rd32(COW_IMG(0x10389314u));
    g->esp = sp0 - 0x30u;
    t7 = cow_cdecl(g, COW_IMG(0x10250c20u), 2, edi, sp0 - 0x24u);
    t8 = g->edx;
    if ((int32_t)rd32(sp0 - 0x24u) < 0)
    {
        edx = t8;
    }
    else
    {
        eax = t7;
        ecx = rd32(sp0 - 0x24u);
        esi = t6;
        d9 = (double)rdf32(COW_IMG(0x103890f0u) + ecx * 0x24u);
        if ((cow_fsw(g, d9, (double)rdf32(COW_IMG(0x10329fd8u)), 0u) & 0x4100u) != 0u)
        {
            edx = ecx * 9u;
            x0 = fr(g, fr(g, rdf64(COW_IMG(0x1033cd98u)) - (double)rdf32(COW_IMG(0x103890f0u) + edx * 4u)) * rdf64(COW_IMG(0x1033cd90u)));
        }
        else
        {
            x0 = (double)rdf32(COW_IMG(0x103295d8u));
        }
        d10 = (double)(float)fr(g, fr(g, (double)rdf32(COW_IMG(0x103895e8u) + ecx * 0xcu) * x0) * rdf64(COW_IMG(0x1033cd88u)));
        wrf32(sp0 - 0x20u, (float)d10);
        d11 = (double)(float)fr(g, fr(g, (double)rdf32(COW_IMG(0x103895ecu) + ecx * 0xcu) * x0) * rdf64(COW_IMG(0x1033cd88u)));
        wrf32(sp0 - 0x1cu, (float)d11);
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        wr32(sp0 - 0x38u, 2u);
        d12 = (double)(float)fr(g, fr(g, x0 * (double)rdf32(COW_IMG(0x103895f0u) + ecx * 0xcu)) * rdf64(COW_IMG(0x1033cd88u)));
        wrf32(sp0 - 0x18u, (float)d12);
        t13 = rd32(esi + 0x20u);
        wr32(sp0 - 0x14u, t13);
        g->edx = t13;
        g->esp = sp0 - 0x28u;
        cow_cdecl(g, COW_IMG(0x10272810u), 4, 2u, sp0 - 0x20u, rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu));
        t14 = g->edx;
        edx = t14;
    }
    wr32(sp0 - 0x28u, 0x40200000u);
    wr32(sp0 + 4u, 0x3fc90fdbu);
    loc_28 = 0x40200000u;
L_1025044e: ;
    t20 = rd32(sp0 + 4u);
    wr32(sp0 - 0x34u, t20);
    wr32(sp0 - 0x38u, 0x3fc90fdbu);
    wr32(sp0 - 0x3cu, 0u);
    wr32(sp0 - 0x40u, sp0 - 0x10u);
    g->ecx = sp0 - 0x10u;
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x1027ab00u), 8, sp0 - 0x10u, 0u, 0x3fc90fdbu, t20, rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), loc_28, rd32(sp0 - 0x24u));
    t21 = g->ecx;
    wr32(sp0 - 0x44u, sp0 - 0x10u);
    t22 = rd32(COW_IMG(0x10389330u)) + 0x68u;
    wr32(sp0 - 0x48u, t22);
    g->eax = t22;
    g->ecx = t21;
    g->edx = sp0 - 0x10u;
    t23 = rd32(COW_IMG(0x1038931cu));
    t24 = rd32(COW_IMG(0x10389330u));
    g->esp = sp0 - 0x40u;
    t25 = cow_cdecl(g, COW_IMG(0x1027a720u), 2, t22, sp0 - 0x10u);
    t26 = g->ecx;
    t27 = g->edx;
    wr32(sp0 - 0x4cu, t24);
    g->edx = t27;
    g->esp = sp0 - 0x48u;
    cow_cdecl(g, COW_IMG(0x1026e210u), 1, t24);
    t28 = g->edx;
    g->edx = t28;
    g->esp = sp0 - 0x30u;
    t29 = cow_thiscall(g, COW_IMG(0x10186f70u), rd32(COW_IMG(0x1065cb04u)), 0);
    t30 = g->edx;
    d31 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(sp0 - 0x28u));
    wrf32(sp0 + 4u, (float)d31);
    d32 = fr(g, d31 * (double)rdf32(t29));
    wrf32(t23 + 0x14u, (float)d32);
    g->edx = t30;
    t33 = cow_thiscall(g, COW_IMG(0x10186f70u), rd32(COW_IMG(0x1065cb04u)), 0);
    t34 = g->edx;
    d35 = fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(t33 + 4u));
    wrf32(t23 + 0x18u, (float)d35);
    g->edx = t34;
    t36 = rd32(COW_IMG(0x1065cb04u));
    t37 = cow_thiscall(g, COW_IMG(0x10186f70u), t36, 0);
    t38 = g->ecx;
    t39 = g->edx;
    wr32(sp0 - 0x34u, t24);
    wr32(sp0 - 0x38u, t23);
    wr32(sp0 - 0x3cu, 4u);
    d40 = fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(t37 + 8u));
    wrf32(t23 + 0x1cu, (float)d40);
    cow_cdecl(g, COW_IMG(0x102728a0u), 3, 4u, t23, t24);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    return;
L_102503f5: ;
    wr32(sp0 - 0x34u, sp0 - 0x20u);
    wr32(sp0 - 0x38u, esi);
    d15 = (double)(float)fr(g, (double)rdf32(rd32(COW_IMG(0x1038930cu) + esi * 4u) + 0x14u) * (double)rdf32(COW_IMG(0x1032a3acu)));
    wrf32(sp0 - 0x20u, (float)d15);
    d16 = (double)(float)fr(g, (double)rdf32(rd32(COW_IMG(0x1038930cu) + esi * 4u) + 0x18u) * (double)rdf32(COW_IMG(0x1032a3acu)));
    wrf32(sp0 - 0x1cu, (float)d16);
    d17 = (double)(float)fr(g, (double)rdf32(rd32(COW_IMG(0x1038930cu) + esi * 4u) + 0x1cu) * (double)rdf32(COW_IMG(0x1032a3acu)));
    wrf32(sp0 - 0x18u, (float)d17);
    t18 = rd32(rd32(COW_IMG(0x1038930cu) + esi * 4u) + 0x20u);
    wr32(sp0 - 0x14u, t18);
    g->edx = sp0 - 0x20u;
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x10272810u), 4, esi, sp0 - 0x20u, in_edi, in_esi);
    t19 = g->edx;
    if ((int32_t)(esi + 1u) < 5)
    {
        esi = esi + 1u;
        goto L_102503f5;
    }
    edx = t19;
    wr32(sp0 - 0x28u, 0x40800000u);
    wr32(sp0 + 4u, 0x3fa0d97cu);
    loc_28 = 0x40800000u;
    goto L_1025044e;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102502f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102502f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
