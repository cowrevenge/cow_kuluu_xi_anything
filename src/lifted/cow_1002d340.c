/* f_0x1002d340 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1002d340(Guest* g)
{
    double d10;
    double d11;
    double d13;
    double d14;
    double d15;
    double d16;
    double d17;
    double d18;
    double d20;
    double d21;
    double d22;
    double d29;
    double d30;
    double d31;
    double d32;
    double d33;
    double d34;
    double d9;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t loc_4;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t12;
    uint32_t t19;
    uint32_t t2;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t3;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1002d352u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1002d352;
    case 0x1002d356u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1002d356;
    case 0x1002d358u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1002d358;
    case 0x1002d367u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1002d367;
    case 0x1002d36eu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1002d36e;
    case 0x1002d375u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1002d375;
    case 0x1002d3dbu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1002d3db;
    case 0x1002d3ddu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1002d3dd;
    case 0x1002d3e7u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1002d3e7;
    case 0x1002d4d0u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1002d4d0;
    case 0x1002d4f4u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1002d4f4;
    case 0x1002d500u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1002d500;
    case 0x1002d534u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1002d534;
    case 0x1002d5b7u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1002d5b7;
    case 0x1002d5d6u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1002d5d6;
    case 0x1002d5dau: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1002d5da;
    case 0x1002d60eu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1002d60e;
    case 0x1002d616u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1002d616;
    case 0x1002d629u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1002d629;
    default: break;
    }
#endif

    COW_AT(1002d340)
    if (rd32(self + 0x34u) == 0u)
    {
    COW_AT(1002d356)
        ebp = 0u;
    }
    else
    {
        eax = rd32(self + 0x34u);
    COW_AT(1002d352)
        ebp = rd32(eax);
    }
    COW_AT(1002d358)
    if (rd32(self + 0x3cu) == 0u) goto L_1002d5da;
    eax = rd32(self + 0x3cu);
    loc_c = ebp;
    COW_AT(1002d367)
    if (eax == 1u) goto L_1002d500;
    eax = eax - 1u;
    COW_AT(1002d36e)
    if (eax != 1u)
    {
        eax = eax - 1u;
        goto L_1002d4f4;
    }
    COW_AT(1002d375)
    wr32(self + 0x8au, 0u);
    t1 = rd32(ebp + 0x48u);
    wr32(COW_IMG(0x1045b620u), t1);
    t2 = t1 + rd16(rd32(ebp + 0x42u)) * 4u;
    wr32(COW_IMG(0x1045b61cu), t2);
    t3 = rd32(ebp + 0x42u);
    t4 = rd32(self + 0x6eu) + rd16(rd32(ebp + 0x42u)) * 0x18u;
    if ((int32_t)rd32(self + 0x86u) >= (int32_t)rd16(t3 + 2u))
    {
        eax = rd32(self + 0x76u) + rd32(self + 0x86u) * 0x38u + rd16(rd32(ebp + 0x42u)) * 0x18u;
        goto L_1002d4f4;
    }
    eax = rd32(self + 0x76u) + rd32(self + 0x86u) * 0x38u + rd16(rd32(ebp + 0x42u)) * 0x18u;
    ecx = t4;
    ebx = t2;
    loc_4 = t4;
    COW_AT(1002d3db)
L_1002d3e7: ;
    COW_AT(1002d3e7)
    t5 = COW_IMG(0x103515f0u) + (rd16(ebx + rd32(self + 0x86u) * 4u) >> 0xcu & 0xcu) * 4u;
    t6 = rd32(self + 0x86u);
    t7 = rd16(ebx + rd32(self + 0x86u) * 4u);
    t8 = rd16(ebx + rd32(self + 0x86u) * 4u + 2u);
    d9 = fr(g, (double)rdf32(ecx + rd32(self + 0x86u) * 0x38u) * (double)rdf32(COW_IMG(0x103515e8u) + (rd16(ebx + rd32(self + 0x86u) * 4u) >> 0xcu & 0xcu) * 4u));
    wrf32(eax, (float)d9);
    d10 = fr(g, (double)rdf32(ecx + t6 * 0x38u + 8u) * (double)rdf32(COW_IMG(0x103515ecu) + (t7 >> 0xcu & 0xcu) * 4u));
    wrf32(eax + 8u, (float)d10);
    d11 = fr(g, (double)rdf32(ecx + t6 * 0x38u + 0x10u) * (double)rdf32(t5));
    wrf32(eax + 0x10u, (float)d11);
    t12 = rd32(ecx + t6 * 0x38u + 0x18u);
    wr32(eax + 0x18u, t12);
    d13 = fr(g, (double)rdf32(ecx + t6 * 0x38u + 0x20u) * (double)rdf32(COW_IMG(0x103515e8u) + (t7 >> 0xcu & 0xcu) * 4u));
    wrf32(eax + 0x20u, (float)d13);
    d14 = fr(g, (double)rdf32(ecx + t6 * 0x38u + 0x28u) * (double)rdf32(COW_IMG(0x103515ecu) + (t7 >> 0xcu & 0xcu) * 4u));
    wrf32(eax + 0x28u, (float)d14);
    d15 = fr(g, (double)rdf32(ecx + t6 * 0x38u + 0x30u) * (double)rdf32(t5));
    wrf32(eax + 0x30u, (float)d15);
    d16 = fr(g, (double)rdf32(ecx + t6 * 0x38u + 4u) * (double)rdf32(COW_IMG(0x103515e8u) + (t8 >> 0xcu & 0xcu) * 4u));
    wrf32(eax + 4u, (float)d16);
    d17 = fr(g, (double)rdf32(ecx + t6 * 0x38u + 0xcu) * (double)rdf32(COW_IMG(0x103515ecu) + (t8 >> 0xcu & 0xcu) * 4u));
    wrf32(eax + 0xcu, (float)d17);
    d18 = fr(g, (double)rdf32(ecx + t6 * 0x38u + 0x14u) * (double)rdf32(COW_IMG(0x103515f0u) + (t8 >> 0xcu & 0xcu) * 4u));
    wrf32(eax + 0x14u, (float)d18);
    t19 = rd32(ecx + t6 * 0x38u + 0x1cu);
    wr32(eax + 0x1cu, t19);
    d20 = fr(g, (double)rdf32(ecx + t6 * 0x38u + 0x24u) * (double)rdf32(COW_IMG(0x103515e8u) + (t8 >> 0xcu & 0xcu) * 4u));
    wrf32(eax + 0x24u, (float)d20);
    d21 = fr(g, (double)rdf32(ecx + t6 * 0x38u + 0x2cu) * (double)rdf32(COW_IMG(0x103515ecu) + (t8 >> 0xcu & 0xcu) * 4u));
    wrf32(eax + 0x2cu, (float)d21);
    d22 = fr(g, (double)rdf32(ecx + t6 * 0x38u + 0x34u) * (double)rdf32(COW_IMG(0x103515f0u) + (t8 >> 0xcu & 0xcu) * 4u));
    wrf32(eax + 0x34u, (float)d22);
    t23 = rd32(self + 0x8au) + 1u;
    wr32(self + 0x8au, t23);
    if ((int32_t)t23 > 1000)
    {
        eax = eax + 0x38u;
        goto L_1002d629;
    }
    eax = eax + 0x38u;
    COW_AT(1002d4d0)
    t24 = rd32(self + 0x86u) + 1u;
    wr32(self + 0x86u, t24);
    if ((int32_t)t24 < (int32_t)rd16(rd32(loc_c + 0x42u) + 2u)) goto L_1002d3dd;
L_1002d4f4: ;
    COW_AT(1002d4f4)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return (eax & 0xffffff00u) | 1u;
L_1002d3dd: ;
    COW_AT(1002d3dd)
    ecx = loc_4;
    ebx = rd32(COW_IMG(0x1045b61cu));
    goto L_1002d3e7;
L_1002d500: ;
    COW_AT(1002d500)
    wr32(self + 0x8au, 0u);
    t25 = rd32(ebp + 0x48u);
    wr32(COW_IMG(0x1045b620u), t25);
    t26 = rd32(self + 0x6eu);
    if ((int32_t)rd32(self + 0x86u) >= (int32_t)rd16(rd32(ebp + 0x42u))) goto L_1002d616;
    eax = rd32(self + 0x76u) + rd32(self + 0x86u) * 0x18u;
    loc_4 = t26;
L_1002d534: ;
    COW_AT(1002d534)
    t27 = rd32(self + 0x86u);
    t28 = rd16(rd32(COW_IMG(0x1045b620u)) + rd32(self + 0x86u) * 4u);
    d29 = fr(g, (double)rdf32(COW_IMG(0x103515e8u) + (rd16(rd32(COW_IMG(0x1045b620u)) + rd32(self + 0x86u) * 4u) >> 0xcu & 0xcu) * 4u) * (double)rdf32(loc_4 + rd32(self + 0x86u) * 0x18u));
    wrf32(eax, (float)d29);
    d30 = fr(g, (double)rdf32(loc_4 + t27 * 0x18u + 4u) * (double)rdf32(COW_IMG(0x103515ecu) + (t28 >> 0xcu & 0xcu) * 4u));
    wrf32(eax + 4u, (float)d30);
    d31 = fr(g, (double)rdf32(loc_4 + t27 * 0x18u + 8u) * (double)rdf32(COW_IMG(0x103515f0u) + (t28 >> 0xcu & 0xcu) * 4u));
    wrf32(eax + 8u, (float)d31);
    d32 = fr(g, (double)rdf32(loc_4 + t27 * 0x18u + 0xcu) * (double)rdf32(COW_IMG(0x103515e8u) + (t28 >> 0xcu & 0xcu) * 4u));
    wrf32(eax + 0xcu, (float)d32);
    d33 = fr(g, (double)rdf32(loc_4 + t27 * 0x18u + 0x10u) * (double)rdf32(COW_IMG(0x103515ecu) + (t28 >> 0xcu & 0xcu) * 4u));
    wrf32(eax + 0x10u, (float)d33);
    d34 = fr(g, (double)rdf32(loc_4 + t27 * 0x18u + 0x14u) * (double)rdf32(COW_IMG(0x103515f0u) + (t28 >> 0xcu & 0xcu) * 4u));
    wrf32(eax + 0x14u, (float)d34);
    t35 = rd32(self + 0x8au) + 1u;
    wr32(self + 0x8au, t35);
    if ((int32_t)t35 > 1000)
    {
        eax = eax + 0x18u;
        goto L_1002d629;
    }
    eax = eax + 0x18u;
    COW_AT(1002d5b7)
    t36 = rd32(self + 0x86u) + 1u;
    wr32(self + 0x86u, t36);
    if ((int32_t)t36 < (int32_t)rd16(rd32(ebp + 0x42u))) goto L_1002d534;
    COW_AT(1002d5d6)
L_1002d616: ;
    COW_AT(1002d616)
    t40 = rd32(self + 0x3cu);
    wr32(self + 0x86u, 0u);
    wr32(self + 0x8au, 0u);
    wr32(self + 0x3cu, t40 + 1u);
    eax = t40 + 1u;
L_1002d629: ;
    COW_AT(1002d629)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return eax & 0xffffff00u;
L_1002d5da: ;
    COW_AT(1002d5da)
    t37 = rd16(rd32(ebp + 0x42u)) * 0x18u + rd16(rd32(ebp + 0x42u) + 2u) * 0x38u + 0x40u;
    g->esp = sp0 - 0x1cu;
    t38 = cow_call_regs(g, COW_IMG(0x10028640u), t37, rd16(rd32(ebp + 0x42u) + 2u) * 8u - rd16(rd32(ebp + 0x42u) + 2u), rd16(rd32(ebp + 0x42u)) * 0x18u, 1, 2, t37, 4u);
    wr32(self + 0x72u, t38);
    if (t38 == 0u)
    {
        eax = t38;
        goto L_1002d629;
    }
    eax = t38;
    COW_AT(1002d60e)
    t39 = (eax + 0x3fu & 0xffffff00u) | (eax + 0x3fu & 0xc0u);
    wr32(self + 0x76u, t39);
    goto L_1002d616;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1002d340(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1002d352u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002d356u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002d358u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002d367u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002d36eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002d375u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002d3dbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1002d3ddu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1002d3e7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1002d4d0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1002d4f4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1002d500u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002d534u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1002d5b7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1002d5d6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1002d5dau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002d60eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002d616u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002d629u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1002d340(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1002d340(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
