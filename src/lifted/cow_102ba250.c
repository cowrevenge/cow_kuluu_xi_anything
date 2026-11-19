/* f_0x102ba250 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102ba250(Guest* g)
{
    double d1;
    double d20;
    double d21;
    double d23;
    double d24;
    double d25;
    double d27;
    double d3;
    double d30;
    double d32;
    double d39;
    double d40;
    double d44;
    double d48;
    double d51;
    double d52;
    double d53;
    double d54;
    double d55;
    double d56;
    double d57;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_78;
    uint32_t loc_7c;
    double loc_80_f;
    uint32_t loc_84;
    double loc_84_f;
    uint32_t loc_88;
    uint32_t loc_8c;
    uint32_t loc_90;
    uint32_t loc_94;
    uint32_t loc_98;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t22;
    uint32_t t26;
    uint32_t t28;
    uint32_t t29;
    uint32_t t31;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t4;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 200u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102ba29au: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x98u); in_esi = rd32(sp0 - 0x94u); in_ebp = rd32(sp0 - 0x90u); in_ebx = rd32(sp0 - 0x8cu); loc_84 = rd32(sp0 - 0x84u); loc_80_f = rdf32(sp0 - 0x80u); g->ebp = rd32(sp0 - 0x90u); g->ebx = rd32(sp0 - 0x8cu); g->edi = rd32(sp0 - 0x98u); g->esi = rd32(sp0 - 0x94u); goto E_102ba29a;
    case 0x102ba2a0u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x98u); in_esi = rd32(sp0 - 0x94u); in_ebp = rd32(sp0 - 0x90u); in_ebx = rd32(sp0 - 0x8cu); loc_84 = rd32(sp0 - 0x84u); loc_80_f = rdf32(sp0 - 0x80u); g->ebp = rd32(sp0 - 0x90u); g->ebx = rd32(sp0 - 0x8cu); g->edi = rd32(sp0 - 0x98u); g->esi = rd32(sp0 - 0x94u); goto E_102ba2a0;
    case 0x102ba2a7u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x98u); in_esi = rd32(sp0 - 0x94u); in_ebp = rd32(sp0 - 0x90u); in_ebx = rd32(sp0 - 0x8cu); loc_84 = rd32(sp0 - 0x84u); loc_80_f = rdf32(sp0 - 0x80u); loc_78 = rd32(sp0 - 0x78u); g->ebp = rd32(sp0 - 0x90u); g->ebx = rd32(sp0 - 0x8cu); g->edi = rd32(sp0 - 0x98u); g->esi = rd32(sp0 - 0x94u); goto E_102ba2a7;
    case 0x102ba2abu: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x98u); in_esi = rd32(sp0 - 0x94u); in_ebp = rd32(sp0 - 0x90u); in_ebx = rd32(sp0 - 0x8cu); loc_84 = rd32(sp0 - 0x84u); loc_80_f = rdf32(sp0 - 0x80u); loc_78 = rd32(sp0 - 0x78u); g->ebp = rd32(sp0 - 0x90u); g->ebx = rd32(sp0 - 0x8cu); g->edi = rd32(sp0 - 0x98u); g->esi = rd32(sp0 - 0x94u); goto E_102ba2ab;
    case 0x102ba2afu: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x98u); in_esi = rd32(sp0 - 0x94u); in_ebp = rd32(sp0 - 0x90u); in_ebx = rd32(sp0 - 0x8cu); loc_84 = rd32(sp0 - 0x84u); loc_80_f = rdf32(sp0 - 0x80u); loc_78 = rd32(sp0 - 0x78u); g->ebp = rd32(sp0 - 0x90u); g->ebx = rd32(sp0 - 0x8cu); g->edi = rd32(sp0 - 0x98u); g->esi = rd32(sp0 - 0x94u); goto E_102ba2af;
    case 0x102ba2b2u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x98u); in_esi = rd32(sp0 - 0x94u); in_ebp = rd32(sp0 - 0x90u); in_ebx = rd32(sp0 - 0x8cu); loc_84 = rd32(sp0 - 0x84u); loc_80_f = rdf32(sp0 - 0x80u); loc_78 = rd32(sp0 - 0x78u); g->ebp = rd32(sp0 - 0x90u); g->ebx = rd32(sp0 - 0x8cu); g->edi = rd32(sp0 - 0x98u); g->esi = rd32(sp0 - 0x94u); goto E_102ba2b2;
    case 0x102ba337u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_98 = rd32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); loc_90 = rd32(sp0 - 0x90u); loc_8c = rd32(sp0 - 0x8cu); loc_84 = rd32(sp0 - 0x84u); loc_80_f = rdf32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_78 = rd32(sp0 - 0x78u); goto E_102ba337;
    case 0x102ba353u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102ba353;
    case 0x102ba362u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102ba362;
    case 0x102ba381u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102ba381;
    case 0x102ba39bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102ba39b;
    case 0x102ba3bau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102ba3ba;
    case 0x102ba3cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102ba3cd;
    case 0x102ba3f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_88 = rd32(sp0 - 0x88u); loc_84_f = rdf32(sp0 - 0x84u); goto E_102ba3f0;
    case 0x102ba3fau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_88 = rd32(sp0 - 0x88u); loc_84_f = rdf32(sp0 - 0x84u); goto E_102ba3fa;
    case 0x102ba3ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_88 = rd32(sp0 - 0x88u); loc_84_f = rdf32(sp0 - 0x84u); goto E_102ba3ff;
    case 0x102ba40fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102ba40f;
    case 0x102ba419u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102ba419;
    case 0x102ba428u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102ba428;
    case 0x102ba43eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102ba43e;
    case 0x102ba44du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102ba44d;
    case 0x102ba455u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102ba455;
    case 0x102ba45au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102ba45a;
    case 0x102ba474u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102ba474;
    case 0x102ba48bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102ba48b;
    case 0x102ba49du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102ba49d;
    case 0x102ba4a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102ba4a9;
    case 0x102ba4aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102ba4ae;
    case 0x102ba4b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102ba4b0;
    case 0x102ba4c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102ba4c3;
    case 0x102ba4d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102ba4d8;
    case 0x102ba4e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102ba4e9;
    case 0x102ba4fau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102ba4fa;
    case 0x102ba50bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102ba50b;
    case 0x102ba515u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102ba515;
    default: break;
    }
#endif

    COW_AT(102ba250)
    wr32(sp0 - 0x8cu, in_ebx);
    wr32(sp0 - 0x90u, in_ebp);
    wr32(sp0 - 0x94u, in_esi);
    d1 = fr(g, (double)rdf32(arg1 + 0x188u) * rdf64(COW_IMG(0x10340b08u)));
    wr32(sp0 - 0x7cu, arg1 + 0x134u);
    wr32(sp0 - 0x98u, in_edi);
    t2 = rd32(arg1 + 0x144u);
    wr32(sp0 - 0x84u, t2);
    d3 = (double)(float)fr(g, fr(g, tan(d1)) - -fr(g, tan(d1)));
    wrf32(sp0 - 0x80u, (float)d3);
    if (rd32(arg1 + 0x34u) != 0u)
    {
        ecx = rd32(arg1 + 0x34u);
        loc_84 = t2;
        loc_80_f = d3;
    COW_AT(102ba2a0)
        t4 = rd32(ecx + 0x54u);
        wr32(sp0 - 0x78u, t4);
        loc_78 = t4;
    }
    else
    {
        ecx = rd32(arg1 + 0x34u);
        loc_84 = t2;
        loc_80_f = d3;
    COW_AT(102ba29a)
        wr32(sp0 - 0x78u, 0u);
        loc_78 = 0u;
    }
    COW_AT(102ba2a7)
    if (ecx != 0u)
    {
    COW_AT(102ba2af)
        ebp = rd32(ecx + 0x58u);
    }
    else
    {
    COW_AT(102ba2ab)
        ebp = 0u;
    }
    COW_AT(102ba2b2)
    t5 = rd32(arg1 + 0x148u);
    wr32(sp0 - 0x40u, t5);
    t6 = rd32(arg1 + 0x158u);
    wr32(sp0 - 0x3cu, t6);
    t7 = rd32(arg1 + 0x168u);
    wr32(sp0 - 0x38u, t7);
    t8 = rd32(arg1 + 0x14cu);
    wr32(sp0 - 0x4cu, t8);
    t9 = rd32(arg1 + 0x15cu);
    wr32(sp0 - 0x48u, t9);
    t10 = rd32(arg1 + 0x16cu);
    wr32(sp0 - 0x44u, t10);
    t11 = rd32(arg1 + 0x150u);
    wr32(sp0 - 0x64u, t11);
    t12 = rd32(arg1 + 0x160u);
    wr32(sp0 - 0x60u, t12);
    t13 = rd32(arg1 + 0x170u);
    wr32(sp0 - 0x5cu, t13);
    t14 = rd32(arg1 + 0x154u);
    wr32(sp0 - 0x34u, t14);
    t15 = rd32(arg1 + 0x164u);
    wr32(sp0 - 0x30u, t15);
    t16 = rd32(arg1 + 0x174u);
    wr32(sp0 - 0x2cu, t16);
    esi = 0u;
    edi = arg2;
    loc_8c = in_ebx;
    loc_90 = in_ebp;
    loc_94 = in_esi;
    loc_7c = arg1 + 0x134u;
    loc_98 = in_edi;
L_102ba337: ;
    COW_AT(102ba337)
    wr32(sp0 - 0x9cu, sp0 - 0x34u);
    t17 = loc_78 + rd32(edi) * 0xcu;
    wr32(sp0 - 0xa0u, t17);
    wr32(sp0 - 0xa4u, sp0 - 0x58u);
    g->ecx = sp0 - 0x58u;
    g->esp = sp0 - 0x98u;
    cow_cdecl(g, COW_IMG(0x102749e0u), 3, sp0 - 0x58u, t17, sp0 - 0x34u);
    t18 = g->ecx;
    ecx = t18;
    COW_AT(102ba353)
    wr32(sp0 - 0xa8u, sp0 - 0x58u);
    wr32(sp0 - 0xacu, sp0 - 0x64u);
    g->eax = sp0 - 0x64u;
    g->esp = sp0 - 0xa4u;
    t19 = cow_cdecl(g, COW_IMG(0x10274890u), 2, sp0 - 0x64u, sp0 - 0x58u);
    d20 = cow_take_float(g);
    eax = t19;
    x0 = d20;
    COW_AT(102ba362)
    d21 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / -x0);
    wr32(sp0 - 0xb0u, sp0 - 0x58u);
    wr32(sp0 - 0xb4u, sp0 - 0x40u);
    wrf32(sp0 - 0x88u, (float)(double)(float)d21);
    g->edx = sp0 - 0x40u;
    g->esp = sp0 - 0xacu;
    cow_cdecl(g, COW_IMG(0x10274890u), 2, sp0 - 0x40u, sp0 - 0x58u);
    t22 = g->edx;
    d23 = cow_take_float(g);
    edx = t22;
    x0 = d23;
    COW_AT(102ba381)
    d24 = fr(g, x0 * (double)rdf32(sp0 - 0x88u));
    wr32(sp0 - 0xb8u, sp0 - 0x58u);
    wr32(sp0 - 0xbcu, sp0 - 0x4cu);
    wrf32(esi * 8u + sp0 - 0x20u, (float)d24);
    g->esp = sp0 - 0xb4u;
    cow_cdecl(g, COW_IMG(0x10274890u), 2, sp0 - 0x4cu, sp0 - 0x58u);
    d25 = cow_take_float(g);
    x0 = d25;
    COW_AT(102ba39b)
    t26 = rd32(edi);
    d27 = fr(g, x0 * (double)rdf32(sp0 - 0x88u));
    wrf32(esi * 8u + sp0 - 0x1cu, (float)d27);
    t28 = ebp + t26 * 0xcu;
    wr32(sp0 - 0xc0u, t28);
    wr32(sp0 - 0xc4u, sp0 - 0x64u);
    g->ecx = sp0 - 0x64u;
    g->esp = sp0 - 0xbcu;
    cow_cdecl(g, COW_IMG(0x10274890u), 2, sp0 - 0x64u, t28);
    t29 = g->ecx;
    d30 = cow_take_float(g);
    ecx = t29;
    x0 = d30;
    COW_AT(102ba3ba)
    wrf32(edi + sp0 - arg2 - 0x74u, (float)x0);
    if ((int32_t)(esi + 1u) < 4)
    {
        esi = esi + 1u;
        edi = edi + 4u;
        loc_8c = rd32(sp0 - 0x8cu);
        loc_90 = rd32(sp0 - 0x90u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80_f = (double)rdf32(sp0 - 0x80u);
        loc_78 = rd32(sp0 - 0x78u);
        goto L_102ba337;
    }
    COW_AT(102ba3cd)
    t31 = sp0 - 0x74u - rd32(sp0 - 0x7cu);
    d32 = fr(g, (double)rdf32(sp0 - 0x80u) * (double)rdf32(sp0 - 0x84u));
    wr32(sp0 - 0x88u, t31);
    wrf32(sp0 - 0x84u, (float)(double)(float)d32);
    ebx = 1u;
    ebp = sp0 - 0x20u;
    edi = rd32(sp0 - 0x7cu);
    loc_88 = t31;
    loc_84_f = (double)(float)d32;
L_102ba3f0: ;
    COW_AT(102ba3f0)
    if ((int32_t)(ebx & 0x80000003u) >= 0)
    {
        esi = ebx & 0x80000003u;
    }
    else
    {
        esi = ebx & 0x80000003u;
    COW_AT(102ba3fa)
        esi = (esi - 1u | 0xfffffffcu) + 1u;
    }
    COW_AT(102ba3ff)
    t33 = esi * 8u + sp0 - 0x20u;
    wr32(sp0 - 0x9cu, t33);
    wr32(sp0 - 0xa0u, ebp);
    wr32(sp0 - 0xa4u, sp0 - 0x28u);
    g->eax = sp0 - 0x28u;
    g->edx = t33;
    g->esp = sp0 - 0x98u;
    t34 = cow_cdecl(g, COW_IMG(0x10274590u), 3, sp0 - 0x28u, ebp, t33);
    t35 = g->edx;
    eax = t34;
    edx = t35;
    COW_AT(102ba40f)
    wr32(sp0 - 0xa8u, sp0 - 0x28u);
    g->eax = eax;
    g->ecx = sp0 - 0x28u;
    g->edx = edx;
    g->esp = sp0 - 0xa4u;
    t36 = cow_cdecl(g, COW_IMG(0x10274480u), 1, sp0 - 0x28u);
    t37 = g->ecx;
    t38 = g->edx;
    d39 = cow_take_float(g);
    eax = t36;
    ecx = t37;
    edx = t38;
    x0 = d39;
    COW_AT(102ba419)
    d40 = fr(g, x0 / (double)rdf32(sp0 - 0x84u));
    wrf32(sp0 - 0x9cu, (float)(double)(float)d40);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    t41 = cow_call_regs(g, COW_IMG(0x102b44a0u), eax, g->ecx, g->edx, 1, 1, cow_f2bits((double)(float)d40));
    t42 = g->ecx;
    t43 = g->edx;
    eax = t41;
    ecx = t42;
    edx = t43;
    COW_AT(102ba428)
    wr32(sp0 - 0x80u, eax);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    d44 = rdf64(COW_IMG(0x1032abc8u));
    fpush(g, d44);
    fpush(g, (double)(int32_t)eax);
    g->esp = sp0 - 0x7cu;
    t45 = cow_cdecl(g, COW_IMG(0x10312cd0u), 7, rd32(sp0 - 0x98u), rd32(sp0 - 0x94u), rd32(sp0 - 0x90u), rd32(sp0 - 0x8cu), rd32(sp0 - 0x88u), rd32(sp0 - 0x84u), eax);
    t46 = g->ecx;
    t47 = g->edx;
    d48 = cow_take_float(g);
    eax = t45;
    ecx = t46;
    edx = t47;
    x0 = d48;
    COW_AT(102ba43e)
    if (!((double)rdf32(COW_IMG(0x1032a1acu)) < x0))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x1032a1acu)), x0, 1u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x1032a1acu)), x0, 1u);
    COW_AT(102ba44d)
        x0 = (double)rdf32(COW_IMG(0x1032a1acu));
    }
    COW_AT(102ba455)
    fpush(g, x0);
    g->esp = sp0 - 0x98u;
    t49 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    eax = t49;
    COW_AT(102ba45a)
    t50 = rd32(sp0 - 0x88u);
    wr32(edi, eax);
    d51 = fabs((double)rdf32(edi + t50));
    if (d51 < rdf64(COW_IMG(0x1032ab90u)))
    {
        ecx = eax;
        goto L_102ba49d;
    }
    ecx = eax;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d51, rdf64(COW_IMG(0x1032ab90u)), 0u);
    edx = t50;
    COW_AT(102ba474)
    d52 = fabs((double)rdf32(esi * 4u + sp0 - 0x74u));
    if (d52 < rdf64(COW_IMG(0x1032ab90u))) goto L_102ba49d;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d52, rdf64(COW_IMG(0x1032ab90u)), 0u);
    esi = esi * 4u + sp0 - 0x74u;
    COW_AT(102ba48b)
    d53 = fr(g, (double)rdf32(esi) * (double)rdf32(edi + edx));
    if (!(d53 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d53, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_102ba4b0;
    }
L_102ba49d: ;
    COW_AT(102ba49d)
    if ((int32_t)(ecx * 8u) <= 16)
    {
        eax = ecx * 8u;
    }
    else
    {
    COW_AT(102ba4a9)
        eax = 0x10u;
    }
    COW_AT(102ba4ae)
    wr32(edi, eax);
L_102ba4b0: ;
    COW_AT(102ba4b0)
    if ((int32_t)ebx < 4)
    {
        ebx = ebx + 1u;
        ebp = ebp + 8u;
        edi = edi + 4u;
        loc_88 = rd32(sp0 - 0x88u);
        loc_84_f = (double)rdf32(sp0 - 0x84u);
        goto L_102ba3f0;
    }
    COW_AT(102ba4c3)
    d54 = (double)rdf32(sp0 - 0x74u);
    if (!(d54 < (double)rdf32(COW_IMG(0x1032dfa4u))))
    {
        ebx = rd32(sp0 - 0x8cu);
        ebp = rd32(sp0 - 0x90u);
        esi = rd32(sp0 - 0x94u);
        edi = rd32(sp0 - 0x98u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d54, (double)rdf32(COW_IMG(0x1032dfa4u)), 0u);
        ebx = rd32(sp0 - 0x8cu);
        ebp = rd32(sp0 - 0x90u);
        esi = rd32(sp0 - 0x94u);
        edi = rd32(sp0 - 0x98u);
    COW_AT(102ba4d8)
        d55 = (double)rdf32(sp0 - 0x70u);
        if (d55 < (double)rdf32(COW_IMG(0x1032dfa4u)))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d55, (double)rdf32(COW_IMG(0x1032dfa4u)), 0u);
    COW_AT(102ba4e9)
            d56 = (double)rdf32(sp0 - 0x6cu);
            if (d56 < (double)rdf32(COW_IMG(0x1032dfa4u)))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d56, (double)rdf32(COW_IMG(0x1032dfa4u)), 0u);
    COW_AT(102ba4fa)
                d57 = (double)rdf32(sp0 - 0x68u);
                if (d57 < (double)rdf32(COW_IMG(0x1032dfa4u)))
                {
    COW_AT(102ba50b)
                    wr32(rd32(sp0 - 0x7cu), 0u);
                }
            }
        }
    }
    COW_AT(102ba515)
    g->ebx = ebx;
    g->esi = esi;
    g->edi = edi;
    g->ebp = ebp;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102ba250(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102ba29au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_80_f;
        uint32_t loc_84;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x98u);
        in_esi = rd32(sp0 - 0x94u);
        in_ebp = rd32(sp0 - 0x90u);
        in_ebx = rd32(sp0 - 0x8cu);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80_f = rdf32(sp0 - 0x80u);
        g->esp = sp0 - 0x98u;
        g->eax = arg1;
        g->esi = 0u;
        wr32(sp0 - 0x7cu, arg1 + 0x134u);
        (void)sp0;
        return 1;
    }
    case 0x102ba2a0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_80_f;
        uint32_t loc_84;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x98u);
        in_esi = rd32(sp0 - 0x94u);
        in_ebp = rd32(sp0 - 0x90u);
        in_ebx = rd32(sp0 - 0x8cu);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80_f = rdf32(sp0 - 0x80u);
        g->esp = sp0 - 0x98u;
        g->eax = arg1;
        g->esi = 0u;
        wr32(sp0 - 0x7cu, arg1 + 0x134u);
        (void)sp0;
        return 1;
    }
    case 0x102ba2a7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_78;
        double loc_80_f;
        uint32_t loc_84;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x98u);
        in_esi = rd32(sp0 - 0x94u);
        in_ebp = rd32(sp0 - 0x90u);
        in_ebx = rd32(sp0 - 0x8cu);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80_f = rdf32(sp0 - 0x80u);
        loc_78 = rd32(sp0 - 0x78u);
        g->esp = sp0 - 0x98u;
        g->eax = arg1;
        g->esi = 0u;
        wr32(sp0 - 0x7cu, arg1 + 0x134u);
        (void)sp0;
        return 1;
    }
    case 0x102ba2abu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_78;
        double loc_80_f;
        uint32_t loc_84;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x98u);
        in_esi = rd32(sp0 - 0x94u);
        in_ebp = rd32(sp0 - 0x90u);
        in_ebx = rd32(sp0 - 0x8cu);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80_f = rdf32(sp0 - 0x80u);
        loc_78 = rd32(sp0 - 0x78u);
        g->esp = sp0 - 0x98u;
        g->eax = arg1;
        g->esi = 0u;
        wr32(sp0 - 0x7cu, arg1 + 0x134u);
        (void)sp0;
        return 1;
    }
    case 0x102ba2afu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_78;
        double loc_80_f;
        uint32_t loc_84;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x98u);
        in_esi = rd32(sp0 - 0x94u);
        in_ebp = rd32(sp0 - 0x90u);
        in_ebx = rd32(sp0 - 0x8cu);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80_f = rdf32(sp0 - 0x80u);
        loc_78 = rd32(sp0 - 0x78u);
        g->esp = sp0 - 0x98u;
        g->eax = arg1;
        g->esi = 0u;
        wr32(sp0 - 0x7cu, arg1 + 0x134u);
        (void)sp0;
        return 1;
    }
    case 0x102ba2b2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_78;
        double loc_80_f;
        uint32_t loc_84;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x98u);
        in_esi = rd32(sp0 - 0x94u);
        in_ebp = rd32(sp0 - 0x90u);
        in_ebx = rd32(sp0 - 0x8cu);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80_f = rdf32(sp0 - 0x80u);
        loc_78 = rd32(sp0 - 0x78u);
        g->esp = sp0 - 0x98u;
        g->eax = arg1;
        g->esi = 0u;
        wr32(sp0 - 0x7cu, arg1 + 0x134u);
        (void)sp0;
        return 1;
    }
    case 0x102ba337u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_78;
        uint32_t loc_7c;
        double loc_80_f;
        uint32_t loc_84;
        uint32_t loc_8c;
        uint32_t loc_90;
        uint32_t loc_94;
        uint32_t loc_98;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_98 = rd32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_90 = rd32(sp0 - 0x90u);
        loc_8c = rd32(sp0 - 0x8cu);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80_f = rdf32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_78 = rd32(sp0 - 0x78u);
        g->esp = sp0 - 0x98u;
        g->ebx = sp0 - 0x74u - arg2;
        (void)sp0;
        return 1;
    }
    case 0x102ba353u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xa4u;
        g->ebx = sp0 - 0x74u - arg2;
        wr32(sp0 - 0xa4u, sp0 - 0x58u);
        wr32(sp0 - 0x9cu, sp0 - 0x34u);
        (void)sp0;
        return 1;
    }
    case 0x102ba362u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xacu;
        g->ebx = sp0 - 0x74u - arg2;
        wr32(sp0 - 0xacu, sp0 - 0x64u);
        wr32(sp0 - 0xa8u, sp0 - 0x58u);
        wr32(sp0 - 0xa4u, sp0 - 0x58u);
        wr32(sp0 - 0x9cu, sp0 - 0x34u);
        (void)sp0;
        return 1;
    }
    case 0x102ba381u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xb4u;
        g->ebx = sp0 - 0x74u - arg2;
        wr32(sp0 - 0xb4u, sp0 - 0x40u);
        wr32(sp0 - 0xb0u, sp0 - 0x58u);
        wr32(sp0 - 0xacu, sp0 - 0x64u);
        wr32(sp0 - 0xa8u, sp0 - 0x58u);
        wr32(sp0 - 0xa4u, sp0 - 0x58u);
        wr32(sp0 - 0x9cu, sp0 - 0x34u);
        (void)sp0;
        return 1;
    }
    case 0x102ba39bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xbcu;
        g->ebx = sp0 - 0x74u - arg2;
        wr32(sp0 - 0xbcu, sp0 - 0x4cu);
        wr32(sp0 - 0xb8u, sp0 - 0x58u);
        wr32(sp0 - 0xb4u, sp0 - 0x40u);
        wr32(sp0 - 0xb0u, sp0 - 0x58u);
        wr32(sp0 - 0xacu, sp0 - 0x64u);
        wr32(sp0 - 0xa8u, sp0 - 0x58u);
        wr32(sp0 - 0xa4u, sp0 - 0x58u);
        wr32(sp0 - 0x9cu, sp0 - 0x34u);
        (void)sp0;
        return 1;
    }
    case 0x102ba3bau:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xc4u;
        g->ebx = sp0 - 0x74u - arg2;
        wr32(sp0 - 0xc4u, sp0 - 0x64u);
        wr32(sp0 - 0xbcu, sp0 - 0x4cu);
        wr32(sp0 - 0xb8u, sp0 - 0x58u);
        wr32(sp0 - 0xb4u, sp0 - 0x40u);
        wr32(sp0 - 0xb0u, sp0 - 0x58u);
        wr32(sp0 - 0xacu, sp0 - 0x64u);
        wr32(sp0 - 0xa8u, sp0 - 0x58u);
        wr32(sp0 - 0xa4u, sp0 - 0x58u);
        wr32(sp0 - 0x9cu, sp0 - 0x34u);
        (void)sp0;
        return 1;
    }
    case 0x102ba3cdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        wr32(sp0 - 0xc4u, sp0 - 0x64u);
        wr32(sp0 - 0xbcu, sp0 - 0x4cu);
        wr32(sp0 - 0xb8u, sp0 - 0x58u);
        wr32(sp0 - 0xb4u, sp0 - 0x40u);
        wr32(sp0 - 0xb0u, sp0 - 0x58u);
        wr32(sp0 - 0xacu, sp0 - 0x64u);
        wr32(sp0 - 0xa8u, sp0 - 0x58u);
        wr32(sp0 - 0xa4u, sp0 - 0x58u);
        wr32(sp0 - 0x9cu, sp0 - 0x34u);
        (void)sp0;
        return 1;
    }
    case 0x102ba3f0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_84_f;
        uint32_t loc_88;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_88 = rd32(sp0 - 0x88u);
        loc_84_f = rdf32(sp0 - 0x84u);
        g->esp = sp0 - 0x98u;
        wr32(sp0 - 0xc4u, sp0 - 0x64u);
        wr32(sp0 - 0xbcu, sp0 - 0x4cu);
        wr32(sp0 - 0xb8u, sp0 - 0x58u);
        wr32(sp0 - 0xb4u, sp0 - 0x40u);
        wr32(sp0 - 0xb0u, sp0 - 0x58u);
        wr32(sp0 - 0xacu, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x102ba3fau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_84_f;
        uint32_t loc_88;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_88 = rd32(sp0 - 0x88u);
        loc_84_f = rdf32(sp0 - 0x84u);
        g->esp = sp0 - 0x98u;
        wr32(sp0 - 0xc4u, sp0 - 0x64u);
        wr32(sp0 - 0xbcu, sp0 - 0x4cu);
        wr32(sp0 - 0xb8u, sp0 - 0x58u);
        wr32(sp0 - 0xb4u, sp0 - 0x40u);
        wr32(sp0 - 0xb0u, sp0 - 0x58u);
        wr32(sp0 - 0xacu, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x102ba3ffu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_84_f;
        uint32_t loc_88;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_88 = rd32(sp0 - 0x88u);
        loc_84_f = rdf32(sp0 - 0x84u);
        g->esp = sp0 - 0x98u;
        wr32(sp0 - 0xc4u, sp0 - 0x64u);
        wr32(sp0 - 0xbcu, sp0 - 0x4cu);
        wr32(sp0 - 0xb8u, sp0 - 0x58u);
        wr32(sp0 - 0xb4u, sp0 - 0x40u);
        wr32(sp0 - 0xb0u, sp0 - 0x58u);
        wr32(sp0 - 0xacu, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x102ba40fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xa4u;
        wr32(sp0 - 0xc4u, sp0 - 0x64u);
        wr32(sp0 - 0xbcu, sp0 - 0x4cu);
        wr32(sp0 - 0xb8u, sp0 - 0x58u);
        wr32(sp0 - 0xb4u, sp0 - 0x40u);
        wr32(sp0 - 0xb0u, sp0 - 0x58u);
        wr32(sp0 - 0xacu, sp0 - 0x64u);
        wr32(sp0 - 0xa4u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x102ba419u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xa8u;
        wr32(sp0 - 0xc4u, sp0 - 0x64u);
        wr32(sp0 - 0xbcu, sp0 - 0x4cu);
        wr32(sp0 - 0xb8u, sp0 - 0x58u);
        wr32(sp0 - 0xb4u, sp0 - 0x40u);
        wr32(sp0 - 0xb0u, sp0 - 0x58u);
        wr32(sp0 - 0xacu, sp0 - 0x64u);
        wr32(sp0 - 0xa8u, sp0 - 0x28u);
        wr32(sp0 - 0xa4u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x102ba428u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x9cu;
        wr32(sp0 - 0xc4u, sp0 - 0x64u);
        wr32(sp0 - 0xbcu, sp0 - 0x4cu);
        wr32(sp0 - 0xb8u, sp0 - 0x58u);
        wr32(sp0 - 0xb4u, sp0 - 0x40u);
        wr32(sp0 - 0xb0u, sp0 - 0x58u);
        wr32(sp0 - 0xacu, sp0 - 0x64u);
        wr32(sp0 - 0xa8u, sp0 - 0x28u);
        wr32(sp0 - 0xa4u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x102ba43eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x98u;
        wr32(sp0 - 0xc4u, sp0 - 0x64u);
        wr32(sp0 - 0xbcu, sp0 - 0x4cu);
        wr32(sp0 - 0xb8u, sp0 - 0x58u);
        wr32(sp0 - 0xb4u, sp0 - 0x40u);
        wr32(sp0 - 0xb0u, sp0 - 0x58u);
        wr32(sp0 - 0xacu, sp0 - 0x64u);
        wr32(sp0 - 0xa8u, sp0 - 0x28u);
        wr32(sp0 - 0xa4u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x102ba44du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x98u;
        wr32(sp0 - 0xc4u, sp0 - 0x64u);
        wr32(sp0 - 0xbcu, sp0 - 0x4cu);
        wr32(sp0 - 0xb8u, sp0 - 0x58u);
        wr32(sp0 - 0xb4u, sp0 - 0x40u);
        wr32(sp0 - 0xb0u, sp0 - 0x58u);
        wr32(sp0 - 0xacu, sp0 - 0x64u);
        wr32(sp0 - 0xa8u, sp0 - 0x28u);
        wr32(sp0 - 0xa4u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x102ba455u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x98u;
        wr32(sp0 - 0xc4u, sp0 - 0x64u);
        wr32(sp0 - 0xbcu, sp0 - 0x4cu);
        wr32(sp0 - 0xb8u, sp0 - 0x58u);
        wr32(sp0 - 0xb4u, sp0 - 0x40u);
        wr32(sp0 - 0xb0u, sp0 - 0x58u);
        wr32(sp0 - 0xacu, sp0 - 0x64u);
        wr32(sp0 - 0xa8u, sp0 - 0x28u);
        wr32(sp0 - 0xa4u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x102ba45au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        wr32(sp0 - 0xc4u, sp0 - 0x64u);
        wr32(sp0 - 0xbcu, sp0 - 0x4cu);
        wr32(sp0 - 0xb8u, sp0 - 0x58u);
        wr32(sp0 - 0xb4u, sp0 - 0x40u);
        wr32(sp0 - 0xb0u, sp0 - 0x58u);
        wr32(sp0 - 0xacu, sp0 - 0x64u);
        wr32(sp0 - 0xa8u, sp0 - 0x28u);
        wr32(sp0 - 0xa4u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x102ba474u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        wr32(sp0 - 0xc4u, sp0 - 0x64u);
        wr32(sp0 - 0xbcu, sp0 - 0x4cu);
        wr32(sp0 - 0xb8u, sp0 - 0x58u);
        wr32(sp0 - 0xb4u, sp0 - 0x40u);
        wr32(sp0 - 0xb0u, sp0 - 0x58u);
        wr32(sp0 - 0xacu, sp0 - 0x64u);
        wr32(sp0 - 0xa8u, sp0 - 0x28u);
        wr32(sp0 - 0xa4u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x102ba48bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        wr32(sp0 - 0xc4u, sp0 - 0x64u);
        wr32(sp0 - 0xbcu, sp0 - 0x4cu);
        wr32(sp0 - 0xb8u, sp0 - 0x58u);
        wr32(sp0 - 0xb4u, sp0 - 0x40u);
        wr32(sp0 - 0xb0u, sp0 - 0x58u);
        wr32(sp0 - 0xacu, sp0 - 0x64u);
        wr32(sp0 - 0xa8u, sp0 - 0x28u);
        wr32(sp0 - 0xa4u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x102ba49du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        wr32(sp0 - 0xc4u, sp0 - 0x64u);
        wr32(sp0 - 0xbcu, sp0 - 0x4cu);
        wr32(sp0 - 0xb8u, sp0 - 0x58u);
        wr32(sp0 - 0xb4u, sp0 - 0x40u);
        wr32(sp0 - 0xb0u, sp0 - 0x58u);
        wr32(sp0 - 0xacu, sp0 - 0x64u);
        wr32(sp0 - 0xa8u, sp0 - 0x28u);
        wr32(sp0 - 0xa4u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x102ba4a9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        wr32(sp0 - 0xc4u, sp0 - 0x64u);
        wr32(sp0 - 0xbcu, sp0 - 0x4cu);
        wr32(sp0 - 0xb8u, sp0 - 0x58u);
        wr32(sp0 - 0xb4u, sp0 - 0x40u);
        wr32(sp0 - 0xb0u, sp0 - 0x58u);
        wr32(sp0 - 0xacu, sp0 - 0x64u);
        wr32(sp0 - 0xa8u, sp0 - 0x28u);
        wr32(sp0 - 0xa4u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x102ba4aeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        wr32(sp0 - 0xc4u, sp0 - 0x64u);
        wr32(sp0 - 0xbcu, sp0 - 0x4cu);
        wr32(sp0 - 0xb8u, sp0 - 0x58u);
        wr32(sp0 - 0xb4u, sp0 - 0x40u);
        wr32(sp0 - 0xb0u, sp0 - 0x58u);
        wr32(sp0 - 0xacu, sp0 - 0x64u);
        wr32(sp0 - 0xa8u, sp0 - 0x28u);
        wr32(sp0 - 0xa4u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x102ba4b0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        wr32(sp0 - 0xc4u, sp0 - 0x64u);
        wr32(sp0 - 0xbcu, sp0 - 0x4cu);
        wr32(sp0 - 0xb8u, sp0 - 0x58u);
        wr32(sp0 - 0xb4u, sp0 - 0x40u);
        wr32(sp0 - 0xb0u, sp0 - 0x58u);
        wr32(sp0 - 0xacu, sp0 - 0x64u);
        wr32(sp0 - 0xa8u, sp0 - 0x28u);
        wr32(sp0 - 0xa4u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x102ba4c3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        wr32(sp0 - 0xc4u, sp0 - 0x64u);
        wr32(sp0 - 0xbcu, sp0 - 0x4cu);
        wr32(sp0 - 0xb8u, sp0 - 0x58u);
        wr32(sp0 - 0xb4u, sp0 - 0x40u);
        wr32(sp0 - 0xb0u, sp0 - 0x58u);
        wr32(sp0 - 0xacu, sp0 - 0x64u);
        wr32(sp0 - 0xa8u, sp0 - 0x28u);
        wr32(sp0 - 0xa4u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x102ba4d8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x88u;
        wr32(sp0 - 0xc4u, sp0 - 0x64u);
        wr32(sp0 - 0xbcu, sp0 - 0x4cu);
        wr32(sp0 - 0xb8u, sp0 - 0x58u);
        wr32(sp0 - 0xb4u, sp0 - 0x40u);
        wr32(sp0 - 0xb0u, sp0 - 0x58u);
        wr32(sp0 - 0xacu, sp0 - 0x64u);
        wr32(sp0 - 0xa8u, sp0 - 0x28u);
        wr32(sp0 - 0xa4u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x102ba4e9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x88u;
        wr32(sp0 - 0xc4u, sp0 - 0x64u);
        wr32(sp0 - 0xbcu, sp0 - 0x4cu);
        wr32(sp0 - 0xb8u, sp0 - 0x58u);
        wr32(sp0 - 0xb4u, sp0 - 0x40u);
        wr32(sp0 - 0xb0u, sp0 - 0x58u);
        wr32(sp0 - 0xacu, sp0 - 0x64u);
        wr32(sp0 - 0xa8u, sp0 - 0x28u);
        wr32(sp0 - 0xa4u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x102ba4fau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x88u;
        wr32(sp0 - 0xc4u, sp0 - 0x64u);
        wr32(sp0 - 0xbcu, sp0 - 0x4cu);
        wr32(sp0 - 0xb8u, sp0 - 0x58u);
        wr32(sp0 - 0xb4u, sp0 - 0x40u);
        wr32(sp0 - 0xb0u, sp0 - 0x58u);
        wr32(sp0 - 0xacu, sp0 - 0x64u);
        wr32(sp0 - 0xa8u, sp0 - 0x28u);
        wr32(sp0 - 0xa4u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x102ba50bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x88u;
        wr32(sp0 - 0xc4u, sp0 - 0x64u);
        wr32(sp0 - 0xbcu, sp0 - 0x4cu);
        wr32(sp0 - 0xb8u, sp0 - 0x58u);
        wr32(sp0 - 0xb4u, sp0 - 0x40u);
        wr32(sp0 - 0xb0u, sp0 - 0x58u);
        wr32(sp0 - 0xacu, sp0 - 0x64u);
        wr32(sp0 - 0xa8u, sp0 - 0x28u);
        wr32(sp0 - 0xa4u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x102ba515u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x88u;
        wr32(sp0 - 0xc4u, sp0 - 0x64u);
        wr32(sp0 - 0xbcu, sp0 - 0x4cu);
        wr32(sp0 - 0xb8u, sp0 - 0x58u);
        wr32(sp0 - 0xb4u, sp0 - 0x40u);
        wr32(sp0 - 0xb0u, sp0 - 0x58u);
        wr32(sp0 - 0xacu, sp0 - 0x64u);
        wr32(sp0 - 0xa8u, sp0 - 0x28u);
        wr32(sp0 - 0xa4u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102ba250(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102ba250(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
