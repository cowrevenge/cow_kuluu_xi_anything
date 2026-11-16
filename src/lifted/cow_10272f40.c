/* f_0x10272f40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10272f40(Guest* g)
{
    uint32_t al_m8c;
    double d10;
    double d11;
    double d12;
    double d13;
    double d14;
    double d15;
    double d16;
    double d17;
    double d18;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
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
    const uint32_t sp1 = (sp0 - 0x4u) & 0xfffffff8u;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 232u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp1 - 0x84u, in_esi);
    wr32(sp1 - 0x88u, in_edi);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp1 - 0x88u;
    cow_stdcall(g, COW_IMG(0x10271d20u), 0);
    t1 = g->ecx;
    t2 = g->edx;
    wr32(sp1 - 0x8cu, COW_IMG(0x103b24d8u));
    wr32(sp1 - 0x90u, sp1 - 0x80u);
    g->edx = t2;
    g->esp = sp1 - 0x7cu;
    t3 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp1 - 0x80u, COW_IMG(0x103b24d8u), in_edi, in_esi, rd32(sp1 - 0x80u));
    t4 = g->edx;
    wr32(sp1 - 0x94u, COW_IMG(0x10361d24u));
    wr32(sp1 - 0x98u, sp1 - 0x80u);
    g->edx = t4;
    g->esp = sp1 - 0x90u;
    t5 = cow_thiscall_cdecl(g, COW_IMG(0x10291220u), sp1 - 0x80u, 2, sp1 - 0x80u, COW_IMG(0x10361d24u));
    t6 = g->ecx;
    t7 = g->edx;
    if (t5 != 0u)
    {
        ecx = t6;
        edx = t7;
        esi = t5;
        goto L_10272f92;
    }
    eax = t5;
    ecx = t6;
    wr32(sp1 - 0x8cu, sp1 - 0x80u);
    wr32(sp1 - 0x90u, COW_IMG(0x103b21d8u));
    g->eax = eax;
    g->edx = sp1 - 0x80u;
    g->esp = sp1 - 0x88u;
    t8 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b21d8u), sp1 - 0x80u);
    t9 = g->edx;
    g->edx = t9;
    return t8;
L_10272f92: ;
    edi = 0u;
L_10272f94: ;
    d10 = (double)rdf32(COW_IMG(0x103b1c30u) + edi * 0x24u);
    wrf64(sp1 - 0x90u, d10);
    d11 = (double)rdf32(COW_IMG(0x103b1c2cu) + edi * 0x24u);
    wrf64(sp1 - 0x98u, d11);
    d12 = (double)rdf32(COW_IMG(0x103b1c28u) + edi * 0x24u);
    wrf64(sp1 - 0xa0u, d12);
    d13 = (double)rdf32(COW_IMG(0x103b1c24u) + edi * 0x24u);
    wrf64(sp1 - 0xa8u, d13);
    d14 = (double)rdf32(COW_IMG(0x103b1c20u) + edi * 0x24u);
    wrf64(sp1 - 0xb0u, d14);
    d15 = (double)rdf32(COW_IMG(0x103b1c1cu) + edi * 0x24u);
    wrf64(sp1 - 0xb8u, d15);
    d16 = (double)rdf32(COW_IMG(0x103b1c18u) + edi * 0x24u);
    wrf64(sp1 - 0xc0u, d16);
    d17 = (double)rdf32(COW_IMG(0x103b1c14u) + edi * 0x24u);
    wrf64(sp1 - 0xc8u, d17);
    d18 = (double)rdf32(COW_IMG(0x103b1c10u) + edi * 0x24u);
    wrf64(sp1 - 0xd0u, d18);
    wr32(sp1 - 0xd4u, COW_IMG(0x103b2490u));
    wr32(sp1 - 0xd8u, esi);
    g->ecx = ecx;
    g->esp = sp1 - 0xc4u;
    cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, esi, COW_IMG(0x103b2490u), cow_dlo(d18), cow_dhi(d18), cow_dlo(d17));
    t19 = g->ecx;
    t20 = g->edx;
    if (edi > 0xcu)
    {
        ecx = t19;
        edx = t20;
        goto L_10273072;
    }
    ecx = t19;
    edx = t20;
    t21 = rd32(COW_IMG(0x1027308cu) + edi * 4u);
    switch (t21 - RD)
    {
    case 0x10273010u: goto L_10273010;
    case 0x10273017u: goto L_10273017;
    case 0x1027301eu: goto L_1027301e;
    case 0x10273025u: goto L_10273025;
    case 0x1027302cu: goto L_1027302c;
    case 0x10273033u: goto L_10273033;
    case 0x1027303au: goto L_1027303a;
    case 0x10273041u: goto L_10273041;
    case 0x10273048u: goto L_10273048;
    case 0x1027304fu: goto L_1027304f;
    case 0x10273056u: goto L_10273056;
    case 0x1027305du: goto L_1027305d;
    case 0x10273064u: goto L_10273064;
    default: rt_fatal(g, COW_IMG(0x10273009u), "switch");
    }
    return 0;
L_10273010: ;
    wr32(sp1 - 0x8cu, COW_IMG(0x103b2480u));
    al_m8c = COW_IMG(0x103b2480u);
L_10273069: ;
    wr32(sp1 - 0x90u, esi);
    g->ecx = ecx;
    g->esp = sp1 - 0x7cu;
    cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, esi, al_m8c, rd32(sp1 - 0x88u), rd32(sp1 - 0x84u), rd32(sp1 - 0x80u));
    t22 = g->ecx;
    t23 = g->edx;
    ecx = t22;
    edx = t23;
L_10273072: ;
    if ((int32_t)(edi + 1u) < 13)
    {
        edi = edi + 1u;
        goto L_10272f94;
    }
    edi = edi + 1u;
    wr32(sp1 - 0x8cu, esi);
    g->edi = edi;
    g->edx = edx;
    g->esp = sp1 - 0x80u;
    t24 = cow_cdecl(g, COW_IMG(0x10311f70u), 3, esi, rd32(sp1 - 0x88u), rd32(sp1 - 0x84u));
    t25 = g->edx;
    g->esi = rd32(sp1 - 0x84u);
    g->edi = rd32(sp1 - 0x88u);
    g->ebp = rd32(sp0 - 4u);
    g->edx = t25;
    return t24;
L_10273017: ;
    wr32(sp1 - 0x8cu, COW_IMG(0x103b2470u));
    al_m8c = COW_IMG(0x103b2470u);
    goto L_10273069;
L_1027301e: ;
    wr32(sp1 - 0x8cu, COW_IMG(0x103b2460u));
    al_m8c = COW_IMG(0x103b2460u);
    goto L_10273069;
L_10273025: ;
    wr32(sp1 - 0x8cu, COW_IMG(0x103b2450u));
    al_m8c = COW_IMG(0x103b2450u);
    goto L_10273069;
L_1027302c: ;
    wr32(sp1 - 0x8cu, COW_IMG(0x103b2440u));
    al_m8c = COW_IMG(0x103b2440u);
    goto L_10273069;
L_10273033: ;
    wr32(sp1 - 0x8cu, COW_IMG(0x103b2430u));
    al_m8c = COW_IMG(0x103b2430u);
    goto L_10273069;
L_1027303a: ;
    wr32(sp1 - 0x8cu, COW_IMG(0x103b2420u));
    al_m8c = COW_IMG(0x103b2420u);
    goto L_10273069;
L_10273041: ;
    wr32(sp1 - 0x8cu, COW_IMG(0x103b2410u));
    al_m8c = COW_IMG(0x103b2410u);
    goto L_10273069;
L_10273048: ;
    wr32(sp1 - 0x8cu, COW_IMG(0x103b2400u));
    al_m8c = COW_IMG(0x103b2400u);
    goto L_10273069;
L_1027304f: ;
    wr32(sp1 - 0x8cu, COW_IMG(0x103b23f0u));
    al_m8c = COW_IMG(0x103b23f0u);
    goto L_10273069;
L_10273056: ;
    wr32(sp1 - 0x8cu, COW_IMG(0x103b23e0u));
    al_m8c = COW_IMG(0x103b23e0u);
    goto L_10273069;
L_1027305d: ;
    wr32(sp1 - 0x8cu, COW_IMG(0x103b23d0u));
    al_m8c = COW_IMG(0x103b23d0u);
    goto L_10273069;
L_10273064: ;
    wr32(sp1 - 0x8cu, COW_IMG(0x103b23c0u));
    al_m8c = COW_IMG(0x103b23c0u);
    goto L_10273069;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10272f40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10272f40(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
