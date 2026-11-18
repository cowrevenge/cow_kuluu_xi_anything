/* f_0x102e8031 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_102e8031(Guest* g)
{
    double d22;
    double d23;
    double d24;
    double d25;
    double d33;
    double d34;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    double loc_18_f;
    uint32_t loc_1c;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_b0;
    uint32_t loc_b8;
    uint32_t loc_c;
    uint32_t t1;
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
    uint32_t t20;
    uint32_t t21;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    double x1;
    double x2;
    double x3;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    cow_frame(g, sp0, 204u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102e8046u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; in_ebx = rd32(sp0 - 0xb0u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xb0u); goto E_102e8046;
    case 0x102e8050u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; in_ebx = rd32(sp0 - 0xb0u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xb0u); goto E_102e8050;
    case 0x102e8064u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102e8064;
    case 0x102e8072u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102e8072;
    case 0x102e8079u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102e8079;
    case 0x102e807eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102e807e;
    case 0x102e8085u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102e8085;
    case 0x102e808cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102e808c;
    case 0x102e8091u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102e8091;
    case 0x102e809bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102e809b;
    case 0x102e80adu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e80ad;
    case 0x102e80c5u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e80c5;
    case 0x102e80cdu: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e80cd;
    case 0x102e80d2u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e80d2;
    case 0x102e80d7u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e80d7;
    case 0x102e80dcu: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e80dc;
    case 0x102e80e1u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e80e1;
    case 0x102e80e6u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e80e6;
    case 0x102e80ebu: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e80eb;
    case 0x102e80f0u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e80f0;
    case 0x102e80f5u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e80f5;
    case 0x102e80f7u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e80f7;
    case 0x102e80feu: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e80fe;
    case 0x102e8105u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e8105;
    case 0x102e810cu: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e810c;
    case 0x102e8113u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e8113;
    case 0x102e811au: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e811a;
    case 0x102e8127u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e8127;
    case 0x102e8135u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e8135;
    case 0x102e8188u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b8 = rd32(sp0 - 0xb8u); x3 = ST(0); x2 = ST(1); x1 = ST(2); x0 = ST(3); goto E_102e8188;
    case 0x102e818eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b8 = rd32(sp0 - 0xb8u); x3 = ST(0); x2 = ST(1); x1 = ST(2); x0 = ST(3); goto E_102e818e;
    case 0x102e819du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b8 = rd32(sp0 - 0xb8u); x3 = ST(0); x2 = ST(1); x1 = ST(2); x0 = ST(3); goto E_102e819d;
    case 0x102e81a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b8 = rd32(sp0 - 0xb8u); x3 = ST(0); x2 = ST(1); x1 = ST(2); x0 = ST(3); goto E_102e81a3;
    case 0x102e81dau: ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b8 = rd32(sp0 - 0xb8u); loc_18_f = rdf32(sp0 - 0x18u); x3 = ST(1); x2 = ST(2); x1 = ST(3); x0 = ST(4); goto E_102e81da;
    case 0x102e82b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b8 = rd32(sp0 - 0xb8u); loc_18_f = rdf32(sp0 - 0x18u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e82b7;
    case 0x102e82bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b8 = rd32(sp0 - 0xb8u); loc_18_f = rdf32(sp0 - 0x18u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e82bd;
    case 0x102e82c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b8 = rd32(sp0 - 0xb8u); loc_18_f = rdf32(sp0 - 0x18u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e82c7;
    case 0x102e82edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b8 = rd32(sp0 - 0xb8u); loc_18_f = rdf32(sp0 - 0x18u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e82ed;
    case 0x102e82f7u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b8 = rd32(sp0 - 0xb8u); loc_18_f = rdf32(sp0 - 0x18u); x3 = ST(1); x2 = ST(2); x1 = ST(3); x0 = ST(4); goto E_102e82f7;
    case 0x102e83bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b8 = rd32(sp0 - 0xb8u); loc_18_f = rdf32(sp0 - 0x18u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e83bc;
    case 0x102e83c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b8 = rd32(sp0 - 0xb8u); loc_18_f = rdf32(sp0 - 0x18u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e83c2;
    case 0x102e83d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b8 = rd32(sp0 - 0xb8u); loc_18_f = rdf32(sp0 - 0x18u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e83d2;
    case 0x102e83d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b8 = rd32(sp0 - 0xb8u); loc_18_f = rdf32(sp0 - 0x18u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e83d7;
    case 0x102e83eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102e83ee;
    case 0x102e83f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102e83f8;
    case 0x102e83fau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102e83fa;
    case 0x102e83fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_b0 = rd32(sp0 - 0xb0u); loc_4 = rd32(sp0 - 4u); goto E_102e83fc;
    default: break;
    }
#endif

    COW_AT(102e8031)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0xb0u, in_ebx);
    if (rd32(sp0 + 8u) != 0u)
    {
        eax = rd32(sp0 + 8u);
    COW_AT(102e8050)
        wr32(sp0 - 0xb4u, in_esi);
        wr32(sp0 - 0xb8u, in_edi);
        wr32(sp0 - 0xbcu, sp0 - 0xacu);
        wr32(sp0 - 0xc0u, 0u);
        wr32(sp0 - 0xc4u, eax);
        g->edx = sp0 - 0xacu;
        g->esp = sp0 - 0xb8u;
        cow_thiscall(g, rd32(rd32(eax) + 0x38u), rd32(eax), 3, eax, 0u, sp0 - 0xacu);
        t1 = g->edx;
        if (rd32(sp0 + 0xcu) == 0u) goto L_102e809b;
        edx = t1;
        esi = rd32(sp0 + 0xcu);
    COW_AT(102e8064)
        edi = sp0 - 0x14u;
        wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
        wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
        wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
        wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
        if ((int32_t)rd32(sp0 - 0x14u) < 0) goto L_102e8091;
        eax = rd32(sp0 - 0x14u);
    COW_AT(102e8072)
        if ((int32_t)eax > (int32_t)rd32(sp0 - 0xcu)) goto L_102e8091;
        edi = rd32(sp0 - 0xcu);
    COW_AT(102e8079)
        if ((int32_t)eax > (int32_t)rd32(sp0 - 0x94u)) goto L_102e8091;
    COW_AT(102e807e)
        if ((int32_t)rd32(sp0 - 0x10u) < 0) goto L_102e8091;
        eax = rd32(sp0 - 0x10u);
    COW_AT(102e8085)
        if ((int32_t)eax > (int32_t)rd32(sp0 - 8u)) goto L_102e8091;
        esi = rd32(sp0 - 8u);
    COW_AT(102e808c)
        if ((int32_t)eax <= (int32_t)rd32(sp0 - 0x90u))
        {
            loc_14 = rd32(sp0 - 0x14u);
            loc_10 = rd32(sp0 - 0x10u);
            loc_c = rd32(sp0 - 0xcu);
            loc_8 = rd32(sp0 - 8u);
            goto L_102e80ad;
        }
L_102e8091: ;
    COW_AT(102e8091)
        eax = 0x8876086cu;
L_102e83fa: ;
    COW_AT(102e83fa)
        esi = rd32(sp0 - 0xb4u);
        edi = rd32(sp0 - 0xb8u);
        loc_4 = rd32(sp0 - 4u);
        loc_b0 = rd32(sp0 - 0xb0u);
    }
    else
    {
    COW_AT(102e8046)
        eax = 0x8876086cu;
        edx = in_edx;
        esi = in_esi;
        edi = in_edi;
        loc_4 = in_ebp;
        loc_b0 = in_ebx;
    }
    COW_AT(102e83fc)
    g->ebx = loc_b0;
    g->esi = esi;
    g->edi = edi;
    g->ebp = loc_4;
    g->edx = edx;
    return eax;
L_102e809b: ;
    COW_AT(102e809b)
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x10u, 0u);
    t2 = rd32(sp0 - 0x94u);
    wr32(sp0 - 0xcu, t2);
    t3 = rd32(sp0 - 0x90u);
    wr32(sp0 - 8u, t3);
    esi = t3;
    edi = t2;
    loc_14 = 0u;
    loc_10 = 0u;
    loc_c = t2;
    loc_8 = t3;
L_102e80ad: ;
    COW_AT(102e80ad)
    t4 = (arg5 & 0xff000000u) != 0xff000000u;
    wr32(sp0 + 0xcu, t4);
    if ((arg5 & 0xff000000u) != 0xff000000u)
    {
        edx = t4;
    }
    else
    {
        edx = t4;
    COW_AT(102e80c5)
        if ((int32_t)rd32(sp0 - 0xacu) > 52)
        {
            eax = rd32(sp0 - 0xacu);
            goto L_102e80f7;
        }
        eax = rd32(sp0 - 0xacu);
    COW_AT(102e80cd)
        if ((int32_t)eax >= 51) goto L_102e8113;
    COW_AT(102e80d2)
        if (eax == 0x15u) goto L_102e8113;
    COW_AT(102e80d7)
        if ((int32_t)eax <= 24) goto L_102e811a;
    COW_AT(102e80dc)
        if ((int32_t)eax <= 26) goto L_102e8113;
    COW_AT(102e80e1)
        if ((int32_t)eax <= 27) goto L_102e811a;
    COW_AT(102e80e6)
        if ((int32_t)eax <= 29) goto L_102e8113;
    COW_AT(102e80eb)
        if ((int32_t)eax <= 39) goto L_102e811a;
    COW_AT(102e80f0)
        if ((int32_t)eax <= 41) goto L_102e8113;
    COW_AT(102e80f5)
    }
L_102e811a: ;
    COW_AT(102e811a)
    t5 = rd32(rd32(sp0 + 4u) + 0xcu);
    wr32(sp0 - 0x1cu, t5);
    if (rd32(rd32(sp0 + 4u) + 0xcu) != 0u)
    {
        ebx = rd32(sp0 + 4u);
        loc_1c = t5;
        goto L_102e8135;
    }
    ebx = rd32(sp0 + 4u);
    loc_1c = t5;
    COW_AT(102e8127)
    wr32(sp0 - 0xbcu, ebx);
    g->eax = rd32(ebx);
    g->edx = edx;
    t6 = rd32(ebx);
    g->esp = sp0 - 0xb8u;
    t7 = cow_thiscall(g, rd32(t6 + 0x10u), arg5 & 0xff000000u, 1, ebx);
    t8 = g->edx;
    if ((int32_t)t7 < 0)
    {
        eax = t7;
        edx = t8;
        goto L_102e83fa;
    }
    edx = t8;
    loc_14 = rd32(sp0 - 0x14u);
    loc_10 = rd32(sp0 - 0x10u);
    loc_c = rd32(sp0 - 0xcu);
    loc_8 = rd32(sp0 - 8u);
    loc_1c = rd32(sp0 - 0x1cu);
L_102e8135: ;
    COW_AT(102e8135)
    t9 = rd32(sp0 + 8u);
    wr32(sp0 - 0xbcu, t9);
    wr32(sp0 - 0xc0u, 0u);
    t10 = rd32(ebx + 8u);
    wr32(sp0 - 0xc4u, t10);
    g->esp = sp0 - 0xb4u;
    cow_thiscall(g, rd32(rd32(rd32(ebx + 8u)) + 0xf4u), rd32(rd32(ebx + 8u)), 4, t10, 0u, t9, rd32(sp0 - 0xb8u));
    t11 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0xb8u, t11);
    t12 = (-(rd32(ebx + 0x18u) != 0u) & 0xcu) + 0xfu;
    wr32(sp0 - 0xbcu, t12);
    t13 = rd32(ebx + 8u);
    wr32(sp0 - 0xc0u, t13);
    g->edx = t12;
    cow_thiscall(g, rd32(rd32(rd32(ebx + 8u)) + 0xc8u), rd32(rd32(ebx + 8u)), 3, t13, t12, t11);
    t14 = g->edx;
    t15 = edi - rd32(sp0 - 0x14u);
    t16 = rd32(sp0 - 0x94u);
    t17 = rd32(sp0 - 0x10u);
    wr32(sp0 + 8u, t15);
    t18 = rd32(sp0 + 8u);
    wr32(sp0 + 8u, esi - t17);
    t19 = rd32(sp0 + 8u);
    wr32(sp0 + 8u, t16);
    if ((int32_t)t16 >= 0)
    {
        edx = t14;
        x3 = (double)(int32_t)rd32(sp0 + 8u);
        x2 = (double)rdf32(COW_IMG(0x1032961cu));
        x1 = (double)(int32_t)t19;
        x0 = (double)(int32_t)t18;
    }
    else
    {
        edx = t14;
        x3 = (double)(int32_t)rd32(sp0 + 8u);
        x2 = (double)rdf32(COW_IMG(0x1032961cu));
        x1 = (double)(int32_t)t19;
        x0 = (double)(int32_t)t18;
    COW_AT(102e8188)
        x3 = fr(g, x3 + (double)rdf32(COW_IMG(0x10345da4u)));
    }
    COW_AT(102e818e)
    t20 = rd32(sp0 - 0x90u);
    wrf32(sp0 + 8u, (float)fr(g, x2 / x3));
    if ((int32_t)t20 >= 0)
    {
        x3 = (double)(int32_t)rd32(sp0 - 0x90u);
    }
    else
    {
        x3 = (double)(int32_t)rd32(sp0 - 0x90u);
    COW_AT(102e819d)
        x3 = fr(g, x3 + (double)rdf32(COW_IMG(0x10345da4u)));
    }
    COW_AT(102e81a3)
    t21 = rd32(ebx + 0x1cu);
    wrf32(sp0 + 4u, (float)fr(g, x2 / x3));
    d22 = fr(g, (double)(int32_t)rd32(sp0 - 0xcu) * (double)rdf32(sp0 + 8u));
    d23 = fr(g, (double)(int32_t)rd32(sp0 - 0x14u) * (double)rdf32(sp0 + 8u));
    wrf32(sp0 + 0xcu, (float)d22);
    d24 = fr(g, (double)(int32_t)rd32(sp0 - 0x10u) * (double)rdf32(sp0 + 4u));
    wrf32(sp0 - 0x18u, (float)(double)(float)d24);
    d25 = fr(g, (double)(int32_t)rd32(sp0 - 8u) * (double)rdf32(sp0 + 4u));
    wrf32(sp0 + 8u, (float)d25);
    if (t21 == 0u)
    {
        loc_18_f = (double)(float)d24;
        x3 = d24;
        x2 = d23;
    COW_AT(102e82f7)
        wrf32(sp0 - 0x10u, (float)(double)(float)0.0);
        wrf32(sp0 - 0xcu, (float)(double)(float)0.0);
        wrf32(sp0 - 8u, (float)(double)(float)0.0);
        esi = sp0 - 0x10u;
        edi = sp0 - 0x7cu;
        wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
        wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
        wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
        wrf32(sp0 - 0xcu, (float)(double)(float)x2);
        wrf32(sp0 - 8u, (float)(double)(float)x3);
        wr32(sp0 - 0x6cu, cow_f2bits((double)(float)x2));
        wrf32(sp0 - 0x10u, (float)(double)(float)0.0);
        wr32(sp0 - 0x68u, cow_f2bits((double)(float)x3));
        wrf32(sp0 - 0xcu, (float)(double)(float)x1);
        wr32(sp0 - 0x70u, arg5);
        wrf32(sp0 - 8u, (float)(double)(float)0.0);
        t35 = rd32(sp0 + 8u);
        esi = sp0 - 0x10u;
        edi = sp0 - 0x64u;
        wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
        wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
        wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
        wrf32(sp0 - 0xcu, (float)(double)(float)x2);
        wrf32(sp0 - 0x10u, (float)(double)(float)x0);
        wr32(sp0 - 8u, t35);
        wr32(sp0 - 0x54u, cow_f2bits((double)(float)x2));
        wrf32(sp0 - 0xcu, (float)(double)(float)x1);
        wr32(sp0 - 0x58u, arg5);
        wrf32(sp0 - 8u, (float)(double)(float)0.0);
        wr32(sp0 - 0x50u, t35);
        t36 = rd32(sp0 + 0xcu);
        esi = sp0 - 0x10u;
        edi = sp0 - 0x4cu;
        wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
        wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
        wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
        wrf32(sp0 - 0x10u, (float)(double)(float)x0);
        wr32(sp0 - 0xcu, t36);
        t37 = rd32(sp0 + 8u);
        wr32(sp0 - 8u, t37);
        wr32(sp0 - 0x40u, arg5);
        wrf32(sp0 - 0xcu, (float)(double)(float)0.0);
        wr32(sp0 - 0x3cu, t36);
        wrf32(sp0 - 8u, (float)(double)(float)0.0);
        wr32(sp0 - 0x38u, t37);
        esi = sp0 - 0x10u;
        edi = sp0 - 0x34u;
        wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
        wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
        wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
        wr32(sp0 - 0x28u, arg5);
        t38 = rd32(sp0 + 0xcu);
        wr32(sp0 - 0xcu, t38);
        wr32(sp0 - 8u, cow_f2bits(loc_18_f));
        wr32(sp0 - 0x24u, t38);
        wr32(sp0 - 0x20u, cow_f2bits(loc_18_f));
        if (arg4 != 0u)
        {
            eax = cow_f2bits(loc_18_f);
            ecx = t37;
    COW_AT(102e83bc)
            wr32(sp0 - 0xb8u, 4u);
            esi = sp0 - 0x7cu;
            edi = 4u;
L_102e83c2: ;
    COW_AT(102e83c2)
            wr32(sp0 - 0xb8u, arg4);
            wr32(sp0 - 0xbcu, esi);
            wr32(sp0 - 0xc0u, esi);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0xb4u;
            t39 = cow_stdcall(g, COW_IMG(0x102d67f1u), 3, esi, esi, arg4);
            t40 = g->ecx;
            t41 = g->edx;
            if (edi != 1u)
            {
                eax = t39;
                ecx = t40;
                edx = t41;
                esi = esi + 0x18u;
                edi = edi - 1u;
                goto L_102e83c2;
            }
        }
    COW_AT(102e83d2)
        wr32(sp0 - 0xb8u, 0x18u);
        edx = sp0 - 0x7cu;
        loc_b8 = 0x18u;
    }
    else
    {
        loc_18_f = (double)(float)d24;
        x3 = d24;
        x2 = d23;
    COW_AT(102e81da)
        wrf32(sp0 - 0x14u, (float)(double)(float)0.0);
        wrf32(sp0 - 0x10u, (float)(double)(float)0.0);
        wrf32(sp0 - 0xcu, (float)(double)(float)0.0);
        wrf32(sp0 - 8u, (float)(double)(float)1.0);
        esi = sp0 - 0x14u;
        edi = sp0 - 0x8cu;
        wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
        wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
        wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
        wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
        wrf32(sp0 - 0xcu, (float)(double)(float)x2);
        wrf32(sp0 - 8u, (float)(double)(float)x3);
        wr32(sp0 - 0x78u, cow_f2bits((double)(float)x2));
        wrf32(sp0 - 0x14u, (float)(double)(float)0.0);
        wr32(sp0 - 0x74u, cow_f2bits((double)(float)x3));
        wrf32(sp0 - 0x10u, (float)(double)(float)x1);
        wr32(sp0 - 0x7cu, arg5);
        wrf32(sp0 - 0xcu, (float)(double)(float)0.0);
        wrf32(sp0 - 8u, (float)(double)(float)1.0);
        t26 = rd32(sp0 + 8u);
        esi = sp0 - 0x14u;
        edi = sp0 - 0x70u;
        wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
        wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
        wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
        wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
        wrf32(sp0 - 0xcu, (float)(double)(float)x2);
        wrf32(sp0 - 0x14u, (float)(double)(float)x0);
        wr32(sp0 - 8u, t26);
        wrf32(sp0 - 0x10u, (float)(double)(float)x1);
        wr32(sp0 - 0x5cu, cow_f2bits((double)(float)x2));
        wrf32(sp0 - 0xcu, (float)(double)(float)0.0);
        wr32(sp0 - 0x58u, t26);
        wrf32(sp0 - 8u, (float)(double)(float)1.0);
        wr32(sp0 - 0x60u, arg5);
        t27 = rd32(sp0 + 0xcu);
        esi = sp0 - 0x14u;
        edi = sp0 - 0x54u;
        wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
        wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
        wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
        wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
        wrf32(sp0 - 0x14u, (float)(double)(float)x0);
        wr32(sp0 - 0xcu, t27);
        wrf32(sp0 - 0x10u, (float)(double)(float)0.0);
        t28 = rd32(sp0 + 8u);
        wr32(sp0 - 8u, t28);
        wr32(sp0 - 0x40u, t27);
        wrf32(sp0 - 0xcu, (float)(double)(float)0.0);
        wr32(sp0 - 0x44u, arg5);
        wrf32(sp0 - 8u, (float)(double)(float)1.0);
        wr32(sp0 - 0x3cu, t28);
        esi = sp0 - 0x14u;
        edi = sp0 - 0x38u;
        wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
        wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
        wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
        wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
        wr32(sp0 - 0x28u, arg5);
        t29 = rd32(sp0 + 0xcu);
        wr32(sp0 - 0xcu, t29);
        wr32(sp0 - 8u, cow_f2bits(loc_18_f));
        wr32(sp0 - 0x24u, t29);
        wr32(sp0 - 0xb8u, 4u);
        wr32(sp0 - 0x20u, cow_f2bits(loc_18_f));
        eax = cow_f2bits(loc_18_f);
        ecx = t28;
        esi = sp0 - 0x8cu;
        edi = 4u;
L_102e82b7: ;
    COW_AT(102e82b7)
        if (arg4 != 0u)
        {
    COW_AT(102e82bd)
            wr32(sp0 - 0xb8u, arg4);
            wr32(sp0 - 0xbcu, esi);
            wr32(sp0 - 0xc0u, esi);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0xb4u;
            t30 = cow_stdcall(g, COW_IMG(0x102d67f1u), 3, esi, esi, arg4);
            t31 = g->ecx;
            t32 = g->edx;
            eax = t30;
            ecx = t31;
            edx = t32;
        }
    COW_AT(102e82c7)
        d33 = fr(g, (double)rdf32(esi) - (double)rdf32(COW_IMG(0x10329a08u)));
        wrf32(esi, (float)d33);
        d34 = fr(g, (double)rdf32(esi + 4u) - (double)rdf32(COW_IMG(0x10329a08u)));
        wrf32(esi + 4u, (float)d34);
        wrf32(esi + 8u, (float)0.0);
        wrf32(esi + 0xcu, (float)1.0);
        if (edi != 1u)
        {
            esi = esi + 0x1cu;
            edi = edi - 1u;
            goto L_102e82b7;
        }
    COW_AT(102e82ed)
        wr32(sp0 - 0xb8u, 0x1cu);
        edx = sp0 - 0x8cu;
        loc_b8 = 0x1cu;
    }
    COW_AT(102e83d7)
    wr32(sp0 - 0xbcu, edx);
    wr32(sp0 - 0xc0u, 2u);
    wr32(sp0 - 0xc4u, 6u);
    t42 = rd32(ebx + 8u);
    wr32(sp0 - 0xc8u, t42);
    g->edx = edx;
    t43 = rd32(rd32(ebx + 8u));
    g->esp = sp0 - 0xb8u;
    cow_thiscall(g, rd32(t43 + 0x120u), t43, 4, t42, 6u, 2u, edx);
    t44 = g->ecx;
    t45 = g->edx;
    if (rd32(sp0 - 0x1cu) != 0u)
    {
        edx = t45;
        goto L_102e83f8;
    }
    ecx = t44;
    edx = t45;
    COW_AT(102e83ee)
    wr32(sp0 - 0xbcu, ebx);
    g->eax = rd32(ebx);
    g->edx = edx;
    t46 = rd32(ebx);
    g->esp = sp0 - 0xb8u;
    t47 = cow_thiscall(g, rd32(t46 + 0x1cu), ecx, 1, ebx);
    t48 = g->edx;
    if ((int32_t)t47 < 0)
    {
        eax = t47;
        edx = t48;
        goto L_102e83fa;
    }
    edx = t48;
L_102e83f8: ;
    COW_AT(102e83f8)
    eax = 0u;
    goto L_102e83fa;
L_102e80f7: ;
    COW_AT(102e80f7)
    if (eax == 0x32545844u) goto L_102e8113;
    COW_AT(102e80fe)
    if (eax == 0x33545844u) goto L_102e8113;
    COW_AT(102e8105)
    if (eax == 0x34545844u) goto L_102e8113;
    COW_AT(102e810c)
    if (eax != 0x35545844u) goto L_102e811a;
L_102e8113: ;
    COW_AT(102e8113)
    wr32(sp0 + 0xcu, 1u);
    goto L_102e811a;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102e8031(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102e8046u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebx = rd32(sp0 - 0xb0u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xb0u;
        g->ebp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x102e8050u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebx = rd32(sp0 - 0xb0u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xb0u;
        g->ebx = 0u;
        g->ebp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x102e8064u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb8u;
        g->ebx = 0u;
        g->ebp = sp0 - 0x68u;
        wr32(sp0 - 0xbcu, sp0 - 0xacu);
        (void)sp0;
        return 1;
    }
    case 0x102e8072u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb8u;
        g->ebx = 0u;
        g->ebp = sp0 - 0x68u;
        wr32(sp0 - 0xbcu, sp0 - 0xacu);
        (void)sp0;
        return 1;
    }
    case 0x102e8079u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb8u;
        g->ebx = 0u;
        g->ebp = sp0 - 0x68u;
        wr32(sp0 - 0xbcu, sp0 - 0xacu);
        (void)sp0;
        return 1;
    }
    case 0x102e807eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb8u;
        g->ebx = 0u;
        g->ebp = sp0 - 0x68u;
        wr32(sp0 - 0xbcu, sp0 - 0xacu);
        (void)sp0;
        return 1;
    }
    case 0x102e8085u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb8u;
        g->ebx = 0u;
        g->ebp = sp0 - 0x68u;
        wr32(sp0 - 0xbcu, sp0 - 0xacu);
        (void)sp0;
        return 1;
    }
    case 0x102e808cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb8u;
        g->ebx = 0u;
        g->ebp = sp0 - 0x68u;
        wr32(sp0 - 0xbcu, sp0 - 0xacu);
        (void)sp0;
        return 1;
    }
    case 0x102e8091u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb8u;
        g->ebp = sp0 - 0x68u;
        wr32(sp0 - 0xbcu, sp0 - 0xacu);
        (void)sp0;
        return 1;
    }
    case 0x102e809bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb8u;
        g->ebx = 0u;
        g->ebp = sp0 - 0x68u;
        wr32(sp0 - 0xbcu, sp0 - 0xacu);
        (void)sp0;
        return 1;
    }
    case 0x102e80adu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xb8u;
        g->ebx = 0u;
        g->ebp = sp0 - 0x68u;
        wr32(sp0 - 0xbcu, sp0 - 0xacu);
        (void)sp0;
        return 1;
    }
    case 0x102e80c5u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xb8u;
        g->ecx = arg5 & 0xff000000u;
        g->ebp = sp0 - 0x68u;
        wr32(sp0 - 0xbcu, sp0 - 0xacu);
        (void)sp0;
        return 1;
    }
    case 0x102e80cdu:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xb8u;
        g->ecx = arg5 & 0xff000000u;
        g->ebp = sp0 - 0x68u;
        wr32(sp0 - 0xbcu, sp0 - 0xacu);
        (void)sp0;
        return 1;
    }
    case 0x102e80d2u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xb8u;
        g->ecx = arg5 & 0xff000000u;
        g->ebp = sp0 - 0x68u;
        wr32(sp0 - 0xbcu, sp0 - 0xacu);
        (void)sp0;
        return 1;
    }
    case 0x102e80d7u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xb8u;
        g->ecx = arg5 & 0xff000000u;
        g->ebp = sp0 - 0x68u;
        wr32(sp0 - 0xbcu, sp0 - 0xacu);
        (void)sp0;
        return 1;
    }
    case 0x102e80dcu:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xb8u;
        g->ecx = arg5 & 0xff000000u;
        g->ebp = sp0 - 0x68u;
        wr32(sp0 - 0xbcu, sp0 - 0xacu);
        (void)sp0;
        return 1;
    }
    case 0x102e80e1u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xb8u;
        g->ecx = arg5 & 0xff000000u;
        g->ebp = sp0 - 0x68u;
        wr32(sp0 - 0xbcu, sp0 - 0xacu);
        (void)sp0;
        return 1;
    }
    case 0x102e80e6u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xb8u;
        g->ecx = arg5 & 0xff000000u;
        g->ebp = sp0 - 0x68u;
        wr32(sp0 - 0xbcu, sp0 - 0xacu);
        (void)sp0;
        return 1;
    }
    case 0x102e80ebu:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xb8u;
        g->ecx = arg5 & 0xff000000u;
        g->ebp = sp0 - 0x68u;
        wr32(sp0 - 0xbcu, sp0 - 0xacu);
        (void)sp0;
        return 1;
    }
    case 0x102e80f0u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xb8u;
        g->ecx = arg5 & 0xff000000u;
        g->ebp = sp0 - 0x68u;
        wr32(sp0 - 0xbcu, sp0 - 0xacu);
        (void)sp0;
        return 1;
    }
    case 0x102e80f5u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xb8u;
        g->ecx = arg5 & 0xff000000u;
        g->ebp = sp0 - 0x68u;
        wr32(sp0 - 0xbcu, sp0 - 0xacu);
        (void)sp0;
        return 1;
    }
    case 0x102e80f7u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xb8u;
        g->ecx = arg5 & 0xff000000u;
        g->ebp = sp0 - 0x68u;
        wr32(sp0 - 0xbcu, sp0 - 0xacu);
        (void)sp0;
        return 1;
    }
    case 0x102e80feu:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xb8u;
        g->ecx = arg5 & 0xff000000u;
        g->ebp = sp0 - 0x68u;
        wr32(sp0 - 0xbcu, sp0 - 0xacu);
        (void)sp0;
        return 1;
    }
    case 0x102e8105u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xb8u;
        g->ecx = arg5 & 0xff000000u;
        g->ebp = sp0 - 0x68u;
        wr32(sp0 - 0xbcu, sp0 - 0xacu);
        (void)sp0;
        return 1;
    }
    case 0x102e810cu:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xb8u;
        g->ecx = arg5 & 0xff000000u;
        g->ebp = sp0 - 0x68u;
        wr32(sp0 - 0xbcu, sp0 - 0xacu);
        (void)sp0;
        return 1;
    }
    case 0x102e8113u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xb8u;
        g->ecx = arg5 & 0xff000000u;
        g->ebp = sp0 - 0x68u;
        wr32(sp0 - 0xbcu, sp0 - 0xacu);
        (void)sp0;
        return 1;
    }
    case 0x102e811au:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xb8u;
        g->ecx = arg5 & 0xff000000u;
        g->ebp = sp0 - 0x68u;
        wr32(sp0 - 0xbcu, sp0 - 0xacu);
        (void)sp0;
        return 1;
    }
    case 0x102e8127u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xb8u;
        g->ecx = arg5 & 0xff000000u;
        g->ebp = sp0 - 0x68u;
        wr32(sp0 - 0xbcu, sp0 - 0xacu);
        (void)sp0;
        return 1;
    }
    case 0x102e8135u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xb8u;
        g->ebp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x102e8188u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b8;
        double x0;
        double x1;
        double x2;
        double x3;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        x3 = ST(0);
        x2 = ST(1);
        x1 = ST(2);
        x0 = ST(3);
        g->esp = sp0 - 0xb4u;
        g->ebp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x102e818eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b8;
        double x0;
        double x1;
        double x2;
        double x3;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        x3 = ST(0);
        x2 = ST(1);
        x1 = ST(2);
        x0 = ST(3);
        g->esp = sp0 - 0xb4u;
        g->ebp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x102e819du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b8;
        double x0;
        double x1;
        double x2;
        double x3;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        x3 = ST(0);
        x2 = ST(1);
        x1 = ST(2);
        x0 = ST(3);
        g->esp = sp0 - 0xb4u;
        g->ebp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x102e81a3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b8;
        double x0;
        double x1;
        double x2;
        double x3;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        x3 = ST(0);
        x2 = ST(1);
        x1 = ST(2);
        x0 = ST(3);
        g->esp = sp0 - 0xb4u;
        g->ebp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x102e81dau:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_18_f;
        uint32_t loc_b8;
        double x0;
        double x1;
        double x2;
        double x3;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_18_f = rdf32(sp0 - 0x18u);
        x3 = ST(1);
        x2 = ST(2);
        x1 = ST(3);
        x0 = ST(4);
        g->esp = sp0 - 0xb4u;
        g->eax = arg5;
        g->ebp = sp0 - 0x68u;
        ST(0) = 0.0;
        (void)sp0;
        return 1;
    }
    case 0x102e82b7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_18_f;
        uint32_t loc_8;
        uint32_t loc_b8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xb4u;
        g->ebp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x102e82bdu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_18_f;
        uint32_t loc_8;
        uint32_t loc_b8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xb4u;
        g->ebp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x102e82c7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_18_f;
        uint32_t loc_8;
        uint32_t loc_b8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xb4u;
        g->ebp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x102e82edu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_18_f;
        uint32_t loc_8;
        uint32_t loc_b8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xb4u;
        g->ebp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x102e82f7u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_18_f;
        uint32_t loc_b8;
        double x0;
        double x1;
        double x2;
        double x3;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_18_f = rdf32(sp0 - 0x18u);
        x3 = ST(1);
        x2 = ST(2);
        x1 = ST(3);
        x0 = ST(4);
        g->esp = sp0 - 0xb4u;
        g->eax = arg5;
        g->ebp = sp0 - 0x68u;
        ST(0) = 0.0;
        (void)sp0;
        return 1;
    }
    case 0x102e83bcu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_18_f;
        uint32_t loc_8;
        uint32_t loc_b8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xb4u;
        g->ebp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x102e83c2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_18_f;
        uint32_t loc_8;
        uint32_t loc_b8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xb4u;
        g->ebp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x102e83d2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_18_f;
        uint32_t loc_8;
        uint32_t loc_b8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xb4u;
        g->ebp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x102e83d7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_18_f;
        uint32_t loc_8;
        uint32_t loc_b8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xb8u;
        g->ebp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x102e83eeu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb8u;
        g->ebp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x102e83f8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb8u;
        g->ebp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x102e83fau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb8u;
        g->ebp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x102e83fcu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_b0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xb0u;
        g->ebp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102e8031(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102e8031(g);
    g->esp = sp0;
    rt_return(g, r, 20u);
}
/* COW_ADAPTER END */
