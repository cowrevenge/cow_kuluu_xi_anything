/* f_0x101aa650 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101aa650(Guest* g)
{
    double d1;
    double d11;
    double d2;
    double d32;
    double d37;
    double d42;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    double loc_4_f;
    double loc_8_f;
    uint32_t t10;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
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
    uint32_t t31;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101aa678u: ecx = g->ecx; in_edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_101aa678;
    case 0x101aa687u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_101aa687;
    case 0x101aa68fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_101aa68f;
    case 0x101aa696u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_101aa696;
    case 0x101aa698u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_10 = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_101aa698;
    case 0x101aa69du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_10 = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_101aa69d;
    case 0x101aa6aau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_10 = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_101aa6aa;
    case 0x101aa6b7u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_101aa6b7;
    case 0x101aa6bfu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_101aa6bf;
    case 0x101aa6c6u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_101aa6c6;
    case 0x101aa6c8u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; esi = g->esi; loc_10 = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_101aa6c8;
    case 0x101aa6cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_10 = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_101aa6cd;
    case 0x101aa6dau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_10 = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_101aa6da;
    case 0x101aa6e7u: ecx = g->ecx; in_edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_101aa6e7;
    case 0x101aa6f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_10 = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_101aa6f1;
    case 0x101aa6feu: ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_101aa6fe;
    case 0x101aa708u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_10 = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_101aa708;
    case 0x101aa715u: ecx = g->ecx; in_edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_101aa715;
    case 0x101aa71au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_101aa71a;
    case 0x101aa722u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_101aa722;
    case 0x101aa73bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_101aa73b;
    case 0x101aa748u: ecx = g->ecx; in_edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_101aa748;
    case 0x101aa74du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_101aa74d;
    case 0x101aa755u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_101aa755;
    case 0x101aa76eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_101aa76e;
    case 0x101aa77bu: ecx = g->ecx; in_edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_101aa77b;
    case 0x101aa780u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_101aa780;
    case 0x101aa788u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_101aa788;
    case 0x101aa7a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_101aa7a1;
    case 0x101aa7aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_101aa7ae;
    case 0x101aa7bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_10 = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_101aa7bf;
    case 0x101aa7ccu: ecx = g->ecx; in_edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_101aa7cc;
    case 0x101aa7efu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_101aa7ef;
    case 0x101aa7f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_10 = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_101aa7f9;
    case 0x101aa800u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_101aa800;
    case 0x101aa80au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_10 = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_101aa80a;
    case 0x101aa80fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_101aa80f;
    case 0x101aa814u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_101aa814;
    case 0x101aa821u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_101aa821;
    case 0x101aa827u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_101aa827;
    case 0x101aa834u: ecx = g->ecx; in_edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_101aa834;
    case 0x101aa845u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_10 = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_101aa845;
    case 0x101aa852u: ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_101aa852;
    case 0x101aa85cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_10 = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_101aa85c;
    case 0x101aa869u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_101aa869;
    case 0x101aa88bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_101aa88b;
    case 0x101aa8a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_101aa8a3;
    default: break;
    }
#endif

    COW_AT(101aa650)
    d1 = (double)(float)(double)(int32_t)rd32(sp0 + 8u);
    d2 = (double)(float)fr(g, (double)(int32_t)rd32(sp0 + 8u) * (double)rdf32(COW_IMG(0x10329a18u)));
    if (arg1 - 9u > 0x8du)
    {
        edx = in_edx;
        goto L_101aa8a3;
    }
    loc_4_f = d1;
    loc_8_f = d2;
    COW_AT(101aa678)
    t3 = rd32(COW_IMG(0x101aa8b0u) + rd8(COW_IMG(0x101aa8e8u) + arg1 - 9u) * 4u);
    switch (t3 - RD)
    {
    case 0x101aa687u: ecx = rd8(COW_IMG(0x101aa8e8u) + arg1 - 9u); goto L_101aa687;
    case 0x101aa6b7u: ecx = rd8(COW_IMG(0x101aa8e8u) + arg1 - 9u); goto L_101aa6b7;
    case 0x101aa6e7u: goto L_101aa6e7;
    case 0x101aa6feu: ecx = rd8(COW_IMG(0x101aa8e8u) + arg1 - 9u); goto L_101aa6fe;
    case 0x101aa715u: ecx = rd8(COW_IMG(0x101aa8e8u) + arg1 - 9u); goto L_101aa715;
    case 0x101aa748u: ecx = rd8(COW_IMG(0x101aa8e8u) + arg1 - 9u); goto L_101aa748;
    case 0x101aa77bu: ecx = rd8(COW_IMG(0x101aa8e8u) + arg1 - 9u); goto L_101aa77b;
    case 0x101aa7aeu: ecx = rd8(COW_IMG(0x101aa8e8u) + arg1 - 9u); goto L_101aa7ae;
    case 0x101aa7ccu: ecx = rd8(COW_IMG(0x101aa8e8u) + arg1 - 9u); goto L_101aa7cc;
    case 0x101aa834u: goto L_101aa834;
    case 0x101aa852u: ecx = rd8(COW_IMG(0x101aa8e8u) + arg1 - 9u); goto L_101aa852;
    case 0x101aa869u: goto L_101aa869;
    case 0x101aa88bu: goto L_101aa88b;
    case 0x101aa8a3u: edx = in_edx; goto L_101aa8a3;
    default: rt_fatal(g, COW_IMG(0x101aa680u), "switch");
    }
    return 0;
L_101aa687: ;
    COW_AT(101aa687)
    if ((int32_t)rd32(sp0 + 8u) <= 0)
    {
        eax = rd32(sp0 + 8u);
    COW_AT(101aa696)
        edx = in_edx;
        loc_10 = 0u;
    }
    else
    {
        eax = rd32(sp0 + 8u);
    COW_AT(101aa68f)
        edx = cow_f2bits(loc_8_f);
        loc_10 = cow_f2bits(loc_8_f);
    }
    COW_AT(101aa698)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t51 = cow_cdecl(g, COW_IMG(0x10035e80u), 1, loc_10);
    t52 = g->ecx;
    t53 = g->edx;
    eax = t51;
    ecx = t52;
    edx = t53;
    COW_AT(101aa69d)
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x10035ec0u), 1, 0x3f800000u);
    t54 = g->edx;
    edx = t54;
    COW_AT(101aa6aa)
    g->esi = in_esi;
    g->edx = edx;
    return 1u;
L_101aa6b7: ;
    COW_AT(101aa6b7)
    if ((int32_t)rd32(sp0 + 8u) <= 0)
    {
        eax = rd32(sp0 + 8u);
    COW_AT(101aa6c6)
        loc_10 = 0u;
    }
    else
    {
    COW_AT(101aa6bf)
        eax = cow_f2bits(loc_8_f);
        loc_10 = cow_f2bits(loc_8_f);
    }
    COW_AT(101aa6c8)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t47 = cow_cdecl(g, COW_IMG(0x100372a0u), 1, loc_10);
    t48 = g->ecx;
    t49 = g->edx;
    eax = t47;
    ecx = t48;
    edx = t49;
    COW_AT(101aa6cd)
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x100372e0u), 1, 0x3f800000u);
    t50 = g->edx;
    edx = t50;
    COW_AT(101aa6da)
    g->esi = in_esi;
    g->edx = edx;
    return 1u;
L_101aa6e7: ;
    COW_AT(101aa6e7)
    t45 = rd32(sp0 + 8u);
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x10002d50u), 1, t45);
    t46 = g->edx;
    edx = t46;
    COW_AT(101aa6f1)
    g->esi = in_esi;
    g->edx = edx;
    return 1u;
L_101aa6fe: ;
    COW_AT(101aa6fe)
    g->edx = cow_f2bits(loc_4_f);
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x10002d70u), 1, cow_f2bits(loc_4_f));
    t44 = g->edx;
    edx = t44;
    COW_AT(101aa708)
    g->esi = in_esi;
    g->edx = edx;
    return 1u;
L_101aa715: ;
    COW_AT(101aa715)
    g->eax = arg1 - 9u;
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t39 = cow_stdcall(g, COW_IMG(0x10002be0u), 0);
    t40 = g->ecx;
    t41 = g->edx;
    eax = t39;
    ecx = t40;
    edx = t41;
    COW_AT(101aa71a)
    if ((uint8_t)eax != 1u) goto L_101aa8a3;
    COW_AT(101aa722)
    d42 = (double)(float)fr(g, fr(g, loc_8_f - (double)rdf32(COW_IMG(0x10329a08u))) + (double)rdf32(COW_IMG(0x1032a3acu)));
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x10002c30u), 1, cow_f2bits(d42));
    t43 = g->edx;
    edx = t43;
    COW_AT(101aa73b)
    g->esi = in_esi;
    g->edx = edx;
    return 1u;
L_101aa748: ;
    COW_AT(101aa748)
    g->eax = arg1 - 9u;
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t34 = cow_stdcall(g, COW_IMG(0x10002be0u), 0);
    t35 = g->ecx;
    t36 = g->edx;
    eax = t34;
    ecx = t35;
    edx = t36;
    COW_AT(101aa74d)
    if ((uint8_t)eax != 1u) goto L_101aa8a3;
    COW_AT(101aa755)
    d37 = (double)(float)fr(g, fr(g, loc_8_f - (double)rdf32(COW_IMG(0x10329a08u))) + (double)rdf32(COW_IMG(0x1032a3acu)));
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x10002c80u), 1, cow_f2bits(d37));
    t38 = g->edx;
    edx = t38;
    COW_AT(101aa76e)
    g->esi = in_esi;
    g->edx = edx;
    return 1u;
L_101aa77b: ;
    COW_AT(101aa77b)
    g->eax = arg1 - 9u;
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t29 = cow_stdcall(g, COW_IMG(0x10002be0u), 0);
    t30 = g->ecx;
    t31 = g->edx;
    eax = t29;
    ecx = t30;
    edx = t31;
    COW_AT(101aa780)
    if ((uint8_t)eax != 1u) goto L_101aa8a3;
    COW_AT(101aa788)
    d32 = (double)(float)fr(g, fr(g, loc_8_f - (double)rdf32(COW_IMG(0x10329a08u))) + (double)rdf32(COW_IMG(0x1032a3acu)));
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x10002cd0u), 1, cow_f2bits(d32));
    t33 = g->edx;
    edx = t33;
    COW_AT(101aa7a1)
    g->esi = in_esi;
    g->edx = edx;
    return 1u;
L_101aa7ae: ;
    COW_AT(101aa7ae)
    t26 = 1u - rd32(sp0 + 8u);
    g->edx = rd32(sp0 + 8u);
    t27 = rd32(sp0 + 8u);
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x10002e20u), 1, t26);
    t28 = g->edx;
    edx = t28;
    COW_AT(101aa7bf)
    g->esi = in_esi;
    g->edx = edx;
    return 1u;
L_101aa7cc: ;
    COW_AT(101aa7cc)
    d11 = fr(g, fr(g, loc_4_f + (double)rdf32(COW_IMG(0x1032cf58u))) * (double)rdf32(COW_IMG(0x1032b7b4u)));
    wrf32(sp0 + 8u, (float)d11);
    if ((cow_fsw(g, d11, (double)rdf32(COW_IMG(0x1032a3ccu)), 0u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, d11, (double)rdf32(COW_IMG(0x1032a3ccu)), 0u) & 0x100u;
    COW_AT(101aa800)
        g->eax = eax;
        g->ecx = ecx;
        g->edx = in_edx;
        g->esp = sp0 - 0xcu;
        t15 = cow_cdecl(g, COW_IMG(0x10002da0u), 1, 0x3f000000u);
        t16 = g->ecx;
        t17 = g->edx;
        eax = t15;
        ecx = t16;
        edx = t17;
    COW_AT(101aa80a)
        loc_14 = 0x3f000000u;
    }
    else
    {
        eax = cow_fsw(g, d11, (double)rdf32(COW_IMG(0x1032a3ccu)), 0u) & 0x100u;
    COW_AT(101aa7ef)
        g->eax = eax;
        g->ecx = ecx;
        g->edx = in_edx;
        g->esp = sp0 - 0xcu;
        t12 = cow_cdecl(g, COW_IMG(0x10002da0u), 1, 0x3f800000u);
        t13 = g->ecx;
        t14 = g->edx;
        eax = t12;
        ecx = t13;
        edx = t14;
    COW_AT(101aa7f9)
        loc_14 = 0x3f800000u;
    }
    COW_AT(101aa80f)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t18 = cow_cdecl(g, COW_IMG(0x10002dc0u), 1, loc_14);
    t19 = g->ecx;
    t20 = g->edx;
    eax = t18;
    ecx = t19;
    edx = t20;
    COW_AT(101aa814)
    t21 = rd32(sp0 + 8u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t22 = cow_cdecl(g, COW_IMG(0x10002de0u), 1, t21);
    t23 = g->ecx;
    t24 = g->edx;
    eax = t22;
    ecx = t23;
    edx = t24;
    esi = t21;
    COW_AT(101aa821)
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x10002e00u), 1, esi);
    t25 = g->edx;
    edx = t25;
    COW_AT(101aa827)
    g->esi = in_esi;
    g->edx = edx;
    return 1u;
L_101aa834: ;
    COW_AT(101aa834)
    t9 = 3u - rd32(sp0 + 8u);
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x10002e40u), 1, t9);
    t10 = g->edx;
    edx = t10;
    COW_AT(101aa845)
    g->esi = in_esi;
    g->edx = edx;
    return 1u;
L_101aa852: ;
    COW_AT(101aa852)
    t7 = rd32(sp0 + 8u);
    g->edx = t7;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x10002e60u), 1, t7);
    t8 = g->edx;
    edx = t8;
    COW_AT(101aa85c)
    g->esi = in_esi;
    g->edx = edx;
    return 1u;
L_101aa869: ;
    COW_AT(101aa869)
    t6 = ((rd32(sp0 + 8u) * 2u ^ rd32(rd32(COW_IMG(0x10456a28u)) + 0x18u)) & 6u) ^ rd32(rd32(COW_IMG(0x10456a28u)) + 0x18u);
    wr32(rd32(COW_IMG(0x10456a28u)) + 0x18u, t6);
    g->esi = in_esi;
    g->edx = t6;
    return 1u;
L_101aa88b: ;
    COW_AT(101aa88b)
    t4 = rd32(rd32(COW_IMG(0x10456a28u)) + 0x18u);
    t5 = ((t4 ^ rd32(sp0 + 8u)) & 1u) ^ t4;
    wr32(rd32(COW_IMG(0x10456a28u)) + 0x18u, t5);
    edx = t5;
L_101aa8a3: ;
    COW_AT(101aa8a3)
    g->esi = in_esi;
    g->edx = edx;
    return 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101aa650(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101aa678u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edx;
        uint32_t in_esi;
        double loc_4_f;
        double loc_8_f;
        ecx = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->eax = arg1 - 9u;
        (void)sp0;
        return 1;
    }
    case 0x101aa687u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edx;
        uint32_t in_esi;
        double loc_4_f;
        double loc_8_f;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101aa68fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        double loc_4_f;
        double loc_8_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101aa696u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edx;
        uint32_t in_esi;
        double loc_4_f;
        double loc_8_f;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101aa698u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        uint32_t loc_10;
        double loc_4_f;
        double loc_8_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101aa69du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        uint32_t loc_10;
        double loc_4_f;
        double loc_8_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101aa6aau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        uint32_t loc_10;
        double loc_4_f;
        double loc_8_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101aa6b7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edx;
        uint32_t in_esi;
        double loc_4_f;
        double loc_8_f;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101aa6bfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edx;
        uint32_t in_esi;
        double loc_4_f;
        double loc_8_f;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101aa6c6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edx;
        uint32_t in_esi;
        double loc_4_f;
        double loc_8_f;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101aa6c8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        double loc_4_f;
        double loc_8_f;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101aa6cdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        uint32_t loc_10;
        double loc_4_f;
        double loc_8_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101aa6dau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        uint32_t loc_10;
        double loc_4_f;
        double loc_8_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101aa6e7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edx;
        uint32_t in_esi;
        double loc_4_f;
        double loc_8_f;
        ecx = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->eax = arg1 - 9u;
        (void)sp0;
        return 1;
    }
    case 0x101aa6f1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        uint32_t loc_10;
        double loc_4_f;
        double loc_8_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101aa6feu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        double loc_4_f;
        double loc_8_f;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->eax = arg1 - 9u;
        (void)sp0;
        return 1;
    }
    case 0x101aa708u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        uint32_t loc_10;
        double loc_4_f;
        double loc_8_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101aa715u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edx;
        uint32_t in_esi;
        double loc_4_f;
        double loc_8_f;
        ecx = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->eax = arg1 - 9u;
        (void)sp0;
        return 1;
    }
    case 0x101aa71au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        double loc_4_f;
        double loc_8_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101aa722u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        double loc_4_f;
        double loc_8_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101aa73bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        double loc_4_f;
        double loc_8_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101aa748u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edx;
        uint32_t in_esi;
        double loc_4_f;
        double loc_8_f;
        ecx = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->eax = arg1 - 9u;
        (void)sp0;
        return 1;
    }
    case 0x101aa74du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        double loc_4_f;
        double loc_8_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101aa755u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        double loc_4_f;
        double loc_8_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101aa76eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        double loc_4_f;
        double loc_8_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101aa77bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edx;
        uint32_t in_esi;
        double loc_4_f;
        double loc_8_f;
        ecx = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->eax = arg1 - 9u;
        (void)sp0;
        return 1;
    }
    case 0x101aa780u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        double loc_4_f;
        double loc_8_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101aa788u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        double loc_4_f;
        double loc_8_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101aa7a1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        double loc_4_f;
        double loc_8_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101aa7aeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        double loc_4_f;
        double loc_8_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101aa7bfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        uint32_t loc_10;
        double loc_4_f;
        double loc_8_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101aa7ccu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edx;
        uint32_t in_esi;
        double loc_4_f;
        double loc_8_f;
        ecx = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->eax = arg1 - 9u;
        (void)sp0;
        return 1;
    }
    case 0x101aa7efu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edx;
        uint32_t in_esi;
        double loc_4_f;
        double loc_8_f;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101aa7f9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        uint32_t loc_10;
        double loc_4_f;
        double loc_8_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101aa800u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edx;
        uint32_t in_esi;
        double loc_4_f;
        double loc_8_f;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101aa80au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        uint32_t loc_10;
        double loc_4_f;
        double loc_8_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101aa80fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        double loc_4_f;
        double loc_8_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101aa814u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        double loc_4_f;
        double loc_8_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101aa821u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        double loc_4_f;
        double loc_8_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101aa827u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        double loc_4_f;
        double loc_8_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101aa834u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edx;
        uint32_t in_esi;
        double loc_4_f;
        double loc_8_f;
        ecx = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->eax = arg1 - 9u;
        (void)sp0;
        return 1;
    }
    case 0x101aa845u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        uint32_t loc_10;
        double loc_4_f;
        double loc_8_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101aa852u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        double loc_4_f;
        double loc_8_f;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->eax = arg1 - 9u;
        (void)sp0;
        return 1;
    }
    case 0x101aa85cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        uint32_t loc_10;
        double loc_4_f;
        double loc_8_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101aa869u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        double loc_4_f;
        double loc_8_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101aa88bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        double loc_4_f;
        double loc_8_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101aa8a3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        double loc_4_f;
        double loc_8_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101aa650(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101aa650(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
