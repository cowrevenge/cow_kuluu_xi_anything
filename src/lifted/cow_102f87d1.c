/* f_0x102f87d1 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102f87d1(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_4;
    uint32_t loc_8;
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
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 64u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102f87edu: ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_edi = g->edi; in_esi = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_102f87ed;
    case 0x102f87ffu: ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_ebp = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 8u); goto E_102f87ff;
    case 0x102f8819u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102f8819;
    case 0x102f882au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102f882a;
    case 0x102f886du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102f886d;
    case 0x102f8895u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102f8895;
    case 0x102f889eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102f889e;
    case 0x102f88a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102f88a8;
    case 0x102f88b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102f88b9;
    case 0x102f88c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102f88c2;
    case 0x102f88cau: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102f88ca;
    case 0x102f88d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102f88d0;
    case 0x102f8911u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102f8911;
    case 0x102f891eu: ecx = g->ecx; edx = g->edx; goto E_102f891e;
    case 0x102f8926u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102f8926;
    case 0x102f8941u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102f8941;
    case 0x102f8944u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102f8944;
    case 0x102f895au: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102f895a;
    case 0x102f8969u: eax = g->eax; edx = g->edx; edi = g->edi; goto E_102f8969;
    case 0x102f896du: eax = g->eax; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102f896d;
    case 0x102f8974u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102f8974;
    case 0x102f8979u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102f8979;
    case 0x102f8982u: eax = g->eax; edx = g->edx; edi = g->edi; goto E_102f8982;
    case 0x102f898bu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102f898b;
    case 0x102f899du: eax = g->eax; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102f899d;
    case 0x102f89a2u: eax = g->eax; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102f89a2;
    case 0x102f89a7u: eax = g->eax; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102f89a7;
    case 0x102f89afu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102f89af;
    case 0x102f89bcu: eax = g->eax; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102f89bc;
    case 0x102f89c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102f89c7;
    case 0x102f89cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102f89cf;
    case 0x102f89d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102f89d4;
    case 0x102f89e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102f89e1;
    case 0x102f89efu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102f89ef;
    case 0x102f89f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102f89f2;
    default: break;
    }
#endif

    COW_AT(102f87d1)
    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    wr32(arg1 + 0xd4u, rd32(arg1 + 0xd4u) + 1u);
    if (rd32(arg1 + 0xd4u) < rd32(arg1 + 0xc0u))
    {
        edx = in_edx;
        ebx = in_ebx;
        ebp = in_ebp;
        edi = in_edi;
        loc_4 = self;
        loc_8 = in_esi;
        goto L_102f89f2;
    }
    ecx = rd32(arg1 + 0xd4u);
    COW_AT(102f87ed)
    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_ebp);
    wr32(sp0 - 0x14u, in_edi);
    if (rd8(arg1 + 0x113u) == 0u)
    {
        eax = arg1 + 0xd4u;
        edx = in_edx;
        loc_4 = self;
        loc_8 = in_esi;
        loc_c = in_ebx;
        loc_10 = in_ebp;
        loc_14 = in_edi;
        goto L_102f889e;
    }
    COW_AT(102f87ff)
    wr32(arg1 + 0xd4u, 0u);
    t1 = rd32(arg1 + 0xc8u) + 1u;
    wr32(sp0 - 0x18u, t1);
    wr32(sp0 - 0x1cu, 0u);
    t2 = rd32(arg1 + 0xd8u);
    wr32(sp0 - 0x20u, t2);
    wr32(sp0 - 0x24u, arg1);
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t3 = cow_call_regs(g, COW_IMG(0x102f76a9u), t1, g->ecx, g->edx, 1, 8, arg1, t2, 0u, t1, in_edi, in_ebp, in_ebx, in_esi);
    t4 = g->ecx;
    t5 = g->edx;
    eax = t3;
    ecx = t4;
    edx = t5;
    ebx = in_ebx;
L_102f8819: ;
    COW_AT(102f8819)
    wr8(arg1 + 0x114u, (uint8_t)(rd8(arg1 + 0x114u) + 1u));
    if (rd8(arg1 + 0x114u) >= 7u)
    {
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        goto L_102f889e;
    }
    ebx = (ebx & 0xffffff00u) | rd8(arg1 + 0x114u);
    COW_AT(102f882a)
    t6 = cow_divu(g, rd32(arg1 + 0xb8u) + rd32(COW_IMG(0x10348928u) + (uint8_t)ebx * 4u) - rd32(COW_IMG(0x1034890cu) + (uint8_t)ebx * 4u) - 1u, rd32(COW_IMG(0x10348928u) + (uint8_t)ebx * 4u));
    t7 = cow_modu(g, rd32(arg1 + 0xb8u) + rd32(COW_IMG(0x10348928u) + (uint8_t)ebx * 4u) - rd32(COW_IMG(0x1034890cu) + (uint8_t)ebx * 4u) - 1u, rd32(COW_IMG(0x10348928u) + (uint8_t)ebx * 4u));
    t8 = rd8(arg1 + 0x119u);
    t9 = rd8(arg1 + 0x60u);
    wr32(arg1 + 0xd0u, t6);
    t10 = ((t8 * t6 + 7u) >> 3u) + 1u;
    wr32(arg1 + 0xccu, t10);
    if ((t9 & 2u) != 0u)
    {
        eax = t6;
        ecx = (uint32_t)(uint8_t)ebx << 2u;
        edx = t10;
        goto L_102f8895;
    }
    ecx = (uint32_t)(uint8_t)ebx << 2u;
    COW_AT(102f886d)
    t11 = cow_divu(g, rd32(arg1 + 0xbcu) + rd32(COW_IMG(0x10348960u) + ecx) - rd32(COW_IMG(0x10348944u) + ecx) - 1u, rd32(COW_IMG(0x10348960u) + ecx));
    t12 = cow_modu(g, rd32(arg1 + 0xbcu) + rd32(COW_IMG(0x10348960u) + ecx) - rd32(COW_IMG(0x10348944u) + ecx) - 1u, rd32(COW_IMG(0x10348960u) + ecx));
    t13 = rd32(arg1 + 0xd0u);
    wr32(arg1 + 0xc0u, t11);
    if (t13 == 0u)
    {
        eax = t11;
        edx = t12;
        goto L_102f8819;
    }
    eax = t11;
    edx = t12;
L_102f8895: ;
    COW_AT(102f8895)
    if ((uint8_t)ebx < 7u) goto L_102f89ef;
    loc_4 = rd32(sp0 - 4u);
    loc_8 = rd32(sp0 - 8u);
    loc_c = rd32(sp0 - 0xcu);
    loc_10 = rd32(sp0 - 0x10u);
    loc_14 = rd32(sp0 - 0x14u);
L_102f889e: ;
    COW_AT(102f889e)
    if ((rd8(arg1 + 0x5cu) & 0x20u) != 0u) goto L_102f89c7;
    COW_AT(102f88a8)
    wr32(arg1 + 0x70u, sp0 + 4u);
    wr32(arg1 + 0x74u, 1u);
    eax = sp0 + 4u;
L_102f88b9: ;
    COW_AT(102f88b9)
    if (rd32(arg1 + 0x68u) != 0u) goto L_102f895a;
    COW_AT(102f88c2)
    if (rd32(arg1 + 0xfcu) != 0u) goto L_102f8926;
    COW_AT(102f88ca)
L_102f88d0: ;
    COW_AT(102f88d0)
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, arg1);
    g->ecx = ecx;
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x102f7fe0u), g->eax, g->ecx, edx, 1, 5, arg1, 0u, loc_14, loc_10, loc_c);
    t14 = g->ecx;
    t15 = g->edx;
    wr32(sp0 - 0x20u, 4u);
    wr32(sp0 - 0x24u, sp0 - 4u);
    wr32(sp0 - 0x28u, arg1);
    g->ecx = t14;
    g->esp = sp0 - 0x1cu;
    cow_call_regs(g, COW_IMG(0x102f1f8fu), g->eax, g->ecx, t15, 1, 3, arg1, sp0 - 4u, 4u);
    t16 = g->ecx;
    t17 = g->edx;
    wr32(sp0 - 0x2cu, sp0 - 4u);
    g->eax = sp0 - 4u;
    g->ecx = t16;
    g->edx = t17;
    g->esp = sp0 - 0x28u;
    t18 = cow_cdecl(g, COW_IMG(0x102f76dau), 1, sp0 - 4u);
    t19 = g->ecx;
    t20 = g->edx;
    wr32(sp0 - 0x30u, arg1);
    wr32(arg1 + 0xfcu, t18);
    g->ecx = t19;
    g->edx = t20;
    g->esp = sp0 - 0x2cu;
    t21 = cow_cdecl(g, COW_IMG(0x102f20e1u), 1, arg1);
    t22 = g->ecx;
    t23 = g->edx;
    wr32(sp0 - 0x34u, 4u);
    wr32(sp0 - 0x38u, arg1 + 0x10cu);
    wr32(sp0 - 0x3cu, arg1);
    g->esp = sp0 - 0x28u;
    cow_call_regs(g, COW_IMG(0x102f7710u), g->eax, g->ecx, t23, 1, 5, arg1, arg1 + 0x10cu, 4u, arg1, sp0 - 4u);
    t24 = g->edx;
    if (rd32(arg1 + 0x10cu) == rd32(COW_IMG(0x1034897cu)))
    {
        ecx = rd32(arg1 + 0x10cu);
        edx = t24;
        goto L_102f891e;
    }
    ecx = rd32(arg1 + 0x10cu);
    edx = t24;
    COW_AT(102f8911)
    wr32(sp0 - 0x18u, COW_IMG(0x10348040u));
    wr32(sp0 - 0x1cu, arg1);
    g->esi = arg1;
    g->esp = sp0 - 0x14u;
    cow_fastcall(g, COW_IMG(0x102ef234u), ecx, edx, 2, arg1, COW_IMG(0x10348040u));
    rt_fatal(g, COW_IMG(0x102f8917u), "no way on");
L_102f891e: ;
    COW_AT(102f891e)
    if (rd32(arg1 + 0xfcu) == 0u)
    {
        eax = COW_IMG(0x1034897cu);
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        goto L_102f88d0;
    }
    loc_4 = rd32(sp0 - 4u);
    loc_8 = rd32(sp0 - 8u);
    loc_c = rd32(sp0 - 0xcu);
    loc_10 = rd32(sp0 - 0x10u);
    loc_14 = rd32(sp0 - 0x14u);
L_102f8926: ;
    COW_AT(102f8926)
    t25 = rd32(arg1 + 0xa0u);
    t26 = rd32(arg1 + 0x9cu);
    t27 = rd32(arg1 + 0xfcu);
    t28 = rd32(arg1 + 0xa0u);
    wr32(arg1 + 0x68u, t25);
    wr32(arg1 + 0x64u, t26);
    if (t28 <= t27)
    {
        eax = t25;
        ecx = t26;
        edx = t27;
    }
    else
    {
        eax = t25;
        ecx = t26;
        edx = t27;
    COW_AT(102f8941)
        wr32(arg1 + 0x68u, edx);
    }
    COW_AT(102f8944)
    t29 = rd32(arg1 + 0x68u);
    wr32(sp0 - 0x18u, t29);
    wr32(sp0 - 0x1cu, ecx);
    wr32(sp0 - 0x20u, arg1);
    g->ecx = ecx;
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x102f7710u), g->eax, g->ecx, edx, 1, 5, arg1, ecx, t29, loc_14, loc_10);
    t30 = g->ecx;
    t31 = g->edx;
    t32 = rd32(arg1 + 0x68u);
    wr32(arg1 + 0xfcu, rd32(arg1 + 0xfcu) - t32);
    eax = t32;
    ecx = t30;
    edx = t31;
    loc_4 = rd32(sp0 - 4u);
    loc_8 = rd32(sp0 - 8u);
    loc_c = rd32(sp0 - 0xcu);
    loc_10 = rd32(sp0 - 0x10u);
    loc_14 = rd32(sp0 - 0x14u);
L_102f895a: ;
    COW_AT(102f895a)
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, arg1 + 0x64u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t33 = cow_cdecl(g, COW_IMG(0x102f7138u), 7, arg1 + 0x64u, 1u, loc_14, loc_10, loc_c, loc_8, loc_4);
    t34 = g->edx;
    if (t33 == 1u)
    {
        eax = t33;
        edx = t34;
        goto L_102f899d;
    }
    eax = t33;
    edx = t34;
    COW_AT(102f8969)
    if (eax == 0u) goto L_102f8982;
    COW_AT(102f896d)
    if (rd32(arg1 + 0x7cu) != 0u)
    {
        eax = rd32(arg1 + 0x7cu);
    }
    else
    {
    COW_AT(102f8974)
        eax = COW_IMG(0x10348df8u);
    }
    COW_AT(102f8979)
    wr32(sp0 - 0x18u, eax);
    wr32(sp0 - 0x1cu, arg1);
    g->esi = arg1;
    g->esp = sp0 - 0x14u;
    cow_fastcall(g, COW_IMG(0x102ef234u), 1u, edx, 2, arg1, eax);
    rt_fatal(g, COW_IMG(0x102f897bu), "no way on");
L_102f8982: ;
    COW_AT(102f8982)
    if (rd32(arg1 + 0x74u) != 0u)
    {
        ecx = 1u;
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        goto L_102f88b9;
    }
    COW_AT(102f898b)
    wr32(sp0 - 0x18u, COW_IMG(0x10348014u));
    wr32(sp0 - 0x1cu, arg1);
    g->esi = arg1;
    g->esp = sp0 - 0x14u;
    cow_fastcall(g, COW_IMG(0x102ef234u), 1u, edx, 2, arg1, COW_IMG(0x10348014u));
    rt_fatal(g, COW_IMG(0x102f8991u), "no way on");
L_102f899d: ;
    COW_AT(102f899d)
    if (rd32(arg1 + 0x74u) == 0u) goto L_102f89af;
    COW_AT(102f89a2)
    if (rd32(arg1 + 0x68u) != 0u) goto L_102f89af;
    COW_AT(102f89a7)
    if (rd32(arg1 + 0xfcu) == 0u) goto L_102f89bc;
L_102f89af: ;
    COW_AT(102f89af)
    wr32(sp0 - 0x18u, COW_IMG(0x10348014u));
    wr32(sp0 - 0x1cu, arg1);
    g->esi = arg1;
    g->esp = sp0 - 0x14u;
    cow_fastcall(g, COW_IMG(0x102ef234u), 1u, edx, 2, arg1, COW_IMG(0x10348014u));
    rt_fatal(g, COW_IMG(0x102f89b5u), "no way on");
L_102f89bc: ;
    COW_AT(102f89bc)
    wr32(arg1 + 0x58u, rd32(arg1 + 0x58u) | 8u);
    wr32(arg1 + 0x5cu, rd32(arg1 + 0x5cu) | 0x20u);
    wr32(arg1 + 0x74u, 0u);
    ecx = 1u;
    loc_4 = rd32(sp0 - 4u);
    loc_8 = rd32(sp0 - 8u);
    loc_c = rd32(sp0 - 0xcu);
    loc_10 = rd32(sp0 - 0x10u);
    loc_14 = rd32(sp0 - 0x14u);
L_102f89c7: ;
    COW_AT(102f89c7)
    if (rd32(arg1 + 0xfcu) != 0u) goto L_102f89d4;
    COW_AT(102f89cf)
    if (rd32(arg1 + 0x68u) == 0u) goto L_102f89e1;
L_102f89d4: ;
    COW_AT(102f89d4)
    wr32(sp0 - 0x18u, COW_IMG(0x10348de0u));
    wr32(sp0 - 0x1cu, arg1);
    g->esi = arg1;
    g->esp = sp0 - 0x14u;
    cow_fastcall(g, COW_IMG(0x102ef234u), ecx, edx, 2, arg1, COW_IMG(0x10348de0u));
    rt_fatal(g, COW_IMG(0x102f89dau), "no way on");
L_102f89e1: ;
    COW_AT(102f89e1)
    wr32(sp0 - 0x18u, arg1 + 0x64u);
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x102f6fbfu), 1, arg1 + 0x64u);
    t35 = g->edx;
    wr32(arg1 + 0x58u, rd32(arg1 + 0x58u) | 8u);
    edx = t35;
L_102f89ef: ;
    COW_AT(102f89ef)
    ebx = rd32(sp0 - 0xcu);
    ebp = rd32(sp0 - 0x10u);
    edi = rd32(sp0 - 0x14u);
    loc_4 = rd32(sp0 - 4u);
    loc_8 = rd32(sp0 - 8u);
L_102f89f2: ;
    COW_AT(102f89f2)
    g->ebx = ebx;
    g->esi = loc_8;
    g->edi = edi;
    g->ebp = ebp;
    g->edx = edx;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102f87d1(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102f87edu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = arg1 + 0xd4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102f87ffu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_ebp = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->eax = arg1 + 0xd4u;
        g->ebp = 0u;
        g->esi = arg1;
        wr32(sp0 - 0xcu, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x102f8819u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        g->ebp = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102f882au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        g->ebp = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102f886du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        g->ebp = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102f8895u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        g->ebp = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102f889eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102f88a8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102f88b9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg1 + 0x64u;
        g->ebp = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102f88c2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg1 + 0x64u;
        g->ebp = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102f88cau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg1 + 0x64u;
        g->ebp = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102f88d0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg1 + 0x64u;
        g->ebp = 0u;
        g->esi = arg1;
        g->edi = arg1 + 0x10cu;
        (void)sp0;
        return 1;
    }
    case 0x102f8911u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        g->eax = COW_IMG(0x1034897cu);
        g->esi = arg1;
        wr32(sp0 - 0x2cu, sp0 - 4u);
        wr32(sp0 - 0x24u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x102f891eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x14u;
        g->eax = COW_IMG(0x1034897cu);
        g->ebx = arg1 + 0x64u;
        g->ebp = 0u;
        g->esi = arg1;
        g->edi = arg1 + 0x10cu;
        wr32(sp0 - 0x2cu, sp0 - 4u);
        wr32(sp0 - 0x24u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x102f8926u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg1 + 0x64u;
        g->ebp = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102f8941u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg1 + 0x64u;
        g->ebp = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102f8944u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg1 + 0x64u;
        g->ebp = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102f895au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg1 + 0x64u;
        g->ebp = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102f8969u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        g->ecx = 1u;
        g->ebx = arg1 + 0x64u;
        g->ebp = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102f896du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        g->ecx = 1u;
        g->ebp = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102f8974u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        g->ecx = 1u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102f8979u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        g->ecx = 1u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102f8982u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        g->ecx = 1u;
        g->ebx = arg1 + 0x64u;
        g->ebp = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102f898bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        g->ecx = 1u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102f899du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        g->ecx = 1u;
        g->ebp = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102f89a2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        g->ecx = 1u;
        g->ebp = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102f89a7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        g->ecx = 1u;
        g->ebp = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102f89afu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        g->ecx = 1u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102f89bcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        g->ecx = 1u;
        g->ebp = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102f89c7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102f89cfu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102f89d4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102f89e1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102f89efu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x102f89f2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102f87d1(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102f87d1(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
