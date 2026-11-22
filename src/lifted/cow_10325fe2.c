/* f_0x10325fe2 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=6 */
uint32_t cow_fn_10325fe2(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_30;
    uint32_t loc_8;
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
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 68u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1032603eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1032603e;
    case 0x10326044u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10326044;
    case 0x10326048u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_10326048;
    case 0x10326050u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_10326050;
    case 0x10326054u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_10326054;
    case 0x10326059u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10326059;
    case 0x1032606eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_1032606e;
    case 0x10326073u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10326073;
    case 0x10326081u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10326081;
    case 0x10326087u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10326087;
    case 0x1032608fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1032608f;
    case 0x10326096u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10326096;
    case 0x1032609bu: ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1032609b;
    case 0x103260a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_103260a3;
    case 0x103260a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_103260a9;
    case 0x103260b0u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_103260b0;
    case 0x103260b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_103260b4;
    case 0x103260bau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_103260ba;
    case 0x103260bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); goto E_103260bf;
    case 0x103260c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_103260c8;
    case 0x103260ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_103260ce;
    case 0x103260d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_103260d7;
    case 0x103260dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); goto E_103260dc;
    case 0x103260e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_103260e5;
    case 0x103260edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_103260ed;
    case 0x10326133u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); goto E_10326133;
    case 0x1032613eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); goto E_1032613e;
    case 0x1032614cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1032614c;
    case 0x1032614eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); goto E_1032614e;
    case 0x10326157u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10326157;
    case 0x10326163u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10326163;
    case 0x10326168u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10326168;
    case 0x1032616bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1032616b;
    case 0x10326170u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10326170;
    case 0x10326173u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); goto E_10326173;
    case 0x10326189u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); goto E_10326189;
    case 0x10326192u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10326192;
    case 0x10326198u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10326198;
    case 0x1032619cu: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1032619c;
    case 0x103261a6u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_103261a6;
    case 0x103261afu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_103261af;
    case 0x103261b3u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_103261b3;
    case 0x103261c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_103261c0;
    case 0x103261c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); goto E_103261c3;
    case 0x103261d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_103261d5;
    case 0x103261deu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_103261de;
    case 0x103261ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_103261eb;
    case 0x103261f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_103261f4;
    case 0x1032620du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1032620d;
    case 0x10326210u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); goto E_10326210;
    case 0x1032621du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); goto E_1032621d;
    case 0x10326221u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); goto E_10326221;
    case 0x10326226u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); goto E_10326226;
    case 0x1032622cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); goto E_1032622c;
    case 0x10326230u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); goto E_10326230;
    case 0x10326234u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); goto E_10326234;
    case 0x10326236u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); goto E_10326236;
    case 0x10326245u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_10326245;
    case 0x10326248u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_8 = rd32(sp0 - 8u); goto E_10326248;
    case 0x1032624du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); goto E_1032624d;
    case 0x10326251u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); goto E_10326251;
    case 0x10326256u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); goto E_10326256;
    case 0x10326259u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); goto E_10326259;
    case 0x1032625du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); goto E_1032625d;
    case 0x1032626cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1032626c;
    default: break;
    }
#endif

    COW_AT(10325fe2)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x24u, in_ebx);
    wr32(sp0 - 0x28u, in_esi);
    t1 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x2cu, in_edi);
    t2 = rd32(sp0 + 0x18u);
    wr8(sp0 - 0x20u, 0xccu);
    wr8(sp0 - 0x1fu, 0xccu);
    wr8(sp0 - 0x1eu, 0xccu);
    wr8(sp0 - 0x1du, 0xccu);
    wr8(sp0 - 0x1cu, 0xccu);
    wr8(sp0 - 0x1bu, 0xccu);
    wr8(sp0 - 0x1au, 0xccu);
    wr8(sp0 - 0x19u, 0xccu);
    wr8(sp0 - 0x18u, 0xccu);
    wr8(sp0 - 0x17u, 0xccu);
    wr8(sp0 - 0x16u, 0xfbu);
    wr8(sp0 - 0x15u, 0x3fu);
    wr32(sp0 - 8u, 1u);
    if ((t1 & 0x8000u) == 0u)
    {
        ecx = t1 & 0x8000u;
        edx = t1 & 0x7fffu;
        ebx = t2;
    COW_AT(10326044)
        wr8(ebx + 2u, 0x20u);
    }
    else
    {
        ecx = t1 & 0x8000u;
        edx = t1 & 0x7fffu;
        ebx = t2;
    COW_AT(1032603e)
        wr8(ebx + 2u, 0x2du);
    }
    COW_AT(10326048)
    if ((uint16_t)edx != 0u)
    {
        edi = rd32(sp0 + 8u);
        goto L_1032606e;
    }
    edi = rd32(sp0 + 8u);
    COW_AT(10326050)
    if (edi != 0u) goto L_1032606e;
    COW_AT(10326054)
    t3 = rd32(sp0 + 4u);
    if (t3 != edi) goto L_1032606e;
L_10326059: ;
    COW_AT(10326059)
    t16 = rd16(ebx);
    wr16(ebx, 0u);
    wr8(ebx + 2u, 0x20u);
    wr8(ebx + 3u, 1u);
    wr8(ebx + 4u, 0x30u);
L_1032626c: ;
    COW_AT(1032626c)
    t41 = rd8(ebx + 5u);
    wr8(ebx + 5u, 0u);
    wr32(sp0 - 0x30u, 1u);
    eax = 1u;
L_10326248: ;
    COW_AT(10326248)
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    g->ebp = rd32(sp0 - 4u);
    return eax;
L_1032606e: ;
    COW_AT(1032606e)
    if ((uint16_t)edx != 0x7fffu) goto L_103260ed;
    COW_AT(10326073)
    wr16(ebx, 1u);
    if (edi != 0x80000000u) goto L_10326087;
    COW_AT(10326081)
    t4 = rd32(sp0 + 4u);
    if (t4 == 0u) goto L_10326096;
L_10326087: ;
    COW_AT(10326087)
    if ((edi & 0x40000000u) != 0u) goto L_10326096;
    COW_AT(1032608f)
    wr32(sp0 - 0x30u, COW_IMG(0x1034b424u));
    loc_30 = COW_IMG(0x1034b424u);
L_103260dc: ;
    COW_AT(103260dc)
    wr32(sp0 - 0x34u, ebx + 4u);
    g->edi = edi;
    g->esp = sp0 - 0x28u;
    cow_call_regs(g, COW_IMG(0x10317500u), g->eax, g->ecx, edx, 1, 3, ebx + 4u, loc_30, rd32(sp0 - 0x2cu));
    COW_AT(103260e5)
    wr8(ebx + 3u, 6u);
L_103260ce: ;
    COW_AT(103260ce)
    t7 = rd32(sp0 - 8u);
    wr32(sp0 - 8u, 0u);
    loc_8 = 0u;
L_10326245: ;
    COW_AT(10326245)
    eax = loc_8;
    goto L_10326248;
L_10326096: ;
    COW_AT(10326096)
    if ((uint16_t)ecx == 0u) goto L_103260b0;
    COW_AT(1032609b)
    if (edi != 0xc0000000u) goto L_103260b0;
    COW_AT(103260a3)
    t5 = rd32(sp0 + 4u);
    if (t5 != 0u) goto L_103260d7;
    COW_AT(103260a9)
    wr32(sp0 - 0x30u, COW_IMG(0x1034b41cu));
    loc_30 = COW_IMG(0x1034b41cu);
L_103260bf: ;
    COW_AT(103260bf)
    wr32(sp0 - 0x34u, ebx + 4u);
    g->edi = edi;
    g->esp = sp0 - 0x28u;
    cow_call_regs(g, COW_IMG(0x10317500u), g->eax, g->ecx, edx, 1, 3, ebx + 4u, loc_30, rd32(sp0 - 0x2cu));
    COW_AT(103260c8)
    wr8(ebx + 3u, 5u);
    goto L_103260ce;
L_103260b0: ;
    COW_AT(103260b0)
    if (edi != 0x80000000u) goto L_103260d7;
    COW_AT(103260b4)
    t6 = rd32(sp0 + 4u);
    if (t6 != 0u) goto L_103260d7;
    COW_AT(103260ba)
    wr32(sp0 - 0x30u, COW_IMG(0x1034b414u));
    loc_30 = COW_IMG(0x1034b414u);
    goto L_103260bf;
L_103260d7: ;
    COW_AT(103260d7)
    wr32(sp0 - 0x30u, COW_IMG(0x1034b40cu));
    loc_30 = COW_IMG(0x1034b40cu);
    goto L_103260dc;
L_103260ed: ;
    COW_AT(103260ed)
    t8 = rd16(sp0 - 0x14u);
    wr16(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x30u, 1u);
    wr16(sp0 - 0xau, (uint16_t)edx);
    wr32(sp0 - 0xeu, edi);
    t9 = rd32(sp0 + 4u);
    wr32(sp0 - 0x12u, t9);
    t10 = -(uint32_t)(int16_t)(uint32_t)((int32_t)((uint16_t)edx * 0x4d10u + (edi >> 0x18u) * 0x9au + ((uint16_t)edx >> 8u) * 0x4du - 0x134312f4u) >> 0x10u);
    wr32(sp0 - 0x34u, t10);
    wr32(sp0 - 0x38u, sp0 - 0x14u);
    g->ecx = (edi >> 0x18u) * 0x9au + ((uint16_t)edx >> 8u) * 0x4du;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x1032657cu), 4, sp0 - 0x14u, t10, 1u, rd32(sp0 - 0x2cu));
    t11 = g->ecx;
    t12 = g->edx;
    ecx = t11;
    esi = (uint32_t)((int32_t)((uint16_t)edx * 0x4d10u + (edi >> 0x18u) * 0x9au + ((uint16_t)edx >> 8u) * 0x4du - 0x134312f4u) >> 0x10u);
    edx = t12;
    COW_AT(10326133)
    t13 = rd16(sp0 - 0xau);
    if ((uint16_t)t13 >= 0x3fffu)
    {
    COW_AT(1032613e)
        wr32(sp0 - 0x30u, sp0 - 0x20u);
        wr32(sp0 - 0x34u, sp0 - 0x14u);
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        cow_thiscall_cdecl(g, COW_IMG(0x1032635cu), ecx, 4, sp0 - 0x14u, sp0 - 0x20u, rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u));
        t14 = g->edx;
        edx = t14;
        esi = esi + 1u;
    COW_AT(1032614c)
        ecx = sp0 - 0x20u;
    }
    COW_AT(1032614e)
    t15 = rd8(sp0 + 0x14u);
    wr16(ebx, (uint16_t)esi);
    if (!(t15 & 1u)) goto L_10326168;
    COW_AT(10326157)
    if ((int32_t)((uint32_t)(int16_t)esi + rd32(sp0 + 0x10u)) > 0)
    {
        edi = (uint32_t)(int16_t)esi + rd32(sp0 + 0x10u);
        goto L_1032616b;
    }
    COW_AT(10326163)
    goto L_10326059;
L_10326168: ;
    COW_AT(10326168)
    edi = rd32(sp0 + 0x10u);
L_1032616b: ;
    COW_AT(1032616b)
    if ((int32_t)edi > 21)
    {
    COW_AT(10326170)
        wr32(sp0 - 0x30u, 0x15u);
        edi = 0x15u;
    }
    COW_AT(10326173)
    t17 = rd16(sp0 - 0xau);
    t18 = rd16(sp0 - 0xau);
    wr16(sp0 - 0xau, 0u);
    wr32(sp0 + 0x18u, 8u);
    esi = t18 - 0x3ffeu;
L_10326189: ;
    COW_AT(10326189)
    wr32(sp0 - 0x30u, sp0 - 0x14u);
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    cow_cdecl(g, COW_IMG(0x10325ec0u), 1, sp0 - 0x14u);
    t19 = g->edx;
    edx = t19;
    COW_AT(10326192)
    t20 = rd32(sp0 + 0x18u);
    wr32(sp0 + 0x18u, t20 - 1u);
    if (t20 != 1u)
    {
        ecx = sp0 - 0x14u;
        goto L_10326189;
    }
    COW_AT(10326198)
    if ((int32_t)esi < 0)
    {
    COW_AT(1032619c)
        if ((int32_t)(uint8_t)-esi <= 0) goto L_103261b3;
        esi = (uint8_t)-esi;
L_103261a6: ;
    COW_AT(103261a6)
        wr32(sp0 - 0x30u, sp0 - 0x14u);
        g->edx = edx;
        g->esp = sp0 - 0x2cu;
        cow_cdecl(g, COW_IMG(0x10325eeeu), 1, sp0 - 0x14u);
        t21 = g->edx;
        edx = t21;
    COW_AT(103261af)
        if (esi != 1u)
        {
            esi = esi - 1u;
            goto L_103261a6;
        }
    }
L_103261b3: ;
    COW_AT(103261b3)
    wr32(sp0 + 0x18u, ebx + 4u);
    if ((int32_t)(edi + 1u) <= 0)
    {
        eax = ebx + 4u;
        ecx = edi + 1u;
    }
    else
    {
        ecx = edi + 1u;
    COW_AT(103261c0)
        wr32(sp0 + 0x10u, ecx);
L_103261c3: ;
    COW_AT(103261c3)
        esi = sp0 - 0x14u;
        edi = sp0 + 4u;
        wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
        wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
        wr32(sp0 - 0x30u, sp0 - 0x14u);
        wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x2cu;
        cow_cdecl(g, COW_IMG(0x10325ec0u), 1, rd32(sp0 - 0x30u));
        t22 = g->ecx;
        t23 = g->edx;
        ecx = t22;
        edx = t23;
    COW_AT(103261d5)
        wr32(sp0 - 0x34u, sp0 - 0x14u);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x30u;
        cow_cdecl(g, COW_IMG(0x10325ec0u), 1, sp0 - 0x14u);
        t24 = g->ecx;
        t25 = g->edx;
        ecx = t24;
        edx = t25;
    COW_AT(103261de)
        wr32(sp0 - 0x38u, sp0 + 4u);
        wr32(sp0 - 0x3cu, sp0 - 0x14u);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        cow_cdecl(g, COW_IMG(0x10325e62u), 6, sp0 - 0x14u, sp0 + 4u, sp0 - 0x14u, rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u));
        t26 = g->ecx;
        t27 = g->edx;
        ecx = t26;
        edx = t27;
    COW_AT(103261eb)
        wr32(sp0 - 0x40u, sp0 - 0x14u);
        g->eax = sp0 - 0x14u;
        g->edx = edx;
        g->esp = sp0 - 0x3cu;
        t28 = cow_cdecl(g, COW_IMG(0x10325ec0u), 1, sp0 - 0x14u);
        t29 = g->edx;
        eax = t28;
        edx = t29;
    COW_AT(103261f4)
        t30 = rd8(sp0 - 9u);
        t31 = rd8(sp0 - 9u);
        t32 = rd32(sp0 + 0x18u);
        wr8(sp0 - 9u, 0u);
        t33 = rd32(sp0 + 0x18u);
        wr32(sp0 + 0x18u, t33 + 1u);
        t34 = rd32(sp0 + 0x10u);
        wr32(sp0 + 0x10u, t34 - 1u);
        wr8(t32, (uint8_t)((uint8_t)t31 + 0x30u));
        if (t34 != 1u)
        {
            ecx = t32;
            goto L_103261c3;
        }
        ecx = t32;
    COW_AT(1032620d)
        eax = rd32(sp0 + 0x18u);
    }
    COW_AT(10326210)
    if ((int8_t)rd8(eax - 1u) < 53)
    {
        eax = eax - 2u;
        ecx = ebx + 4u;
        goto L_1032624d;
    }
    eax = eax - 2u;
    ecx = ebx + 4u;
L_1032621d: ;
    COW_AT(1032621d)
    if (eax < ecx) goto L_10326230;
    COW_AT(10326221)
    t35 = rd8(eax);
    if ((uint8_t)t35 != 0x39u) goto L_1032622c;
    COW_AT(10326226)
    wr8(eax, 0x30u);
    eax = eax - 1u;
    goto L_1032621d;
L_1032622c: ;
    COW_AT(1032622c)
    if (eax >= ecx) goto L_10326234;
L_10326230: ;
    COW_AT(10326230)
    t36 = rd16(ebx);
    wr16(ebx, (uint16_t)(t36 + 1u));
    eax = eax + 1u;
L_10326234: ;
    COW_AT(10326234)
    t37 = rd8(eax);
    wr8(eax, (uint8_t)(t37 + 1u));
L_10326236: ;
    COW_AT(10326236)
    wr8(ebx + 3u, (uint8_t)((uint8_t)((uint8_t)eax - (uint8_t)ebx) - 3u));
    t39 = rd8(ebx + (uint32_t)(int8_t)((uint8_t)((uint8_t)eax - (uint8_t)ebx) - 3u) + 4u);
    wr8(ebx + (uint32_t)(int8_t)((uint8_t)((uint8_t)eax - (uint8_t)ebx) - 3u) + 4u, 0u);
    loc_8 = rd32(sp0 - 8u);
    goto L_10326245;
L_1032624d: ;
    COW_AT(1032624d)
    if (eax < ecx) goto L_1032625d;
    COW_AT(10326251)
    t38 = rd8(eax);
    if ((uint8_t)t38 != 0x30u) goto L_10326259;
    COW_AT(10326256)
    eax = eax - 1u;
    goto L_1032624d;
L_10326259: ;
    COW_AT(10326259)
    if (eax >= ecx) goto L_10326236;
L_1032625d: ;
    COW_AT(1032625d)
    t40 = rd16(ebx);
    wr16(ebx, 0u);
    wr8(ebx + 2u, 0x20u);
    wr8(ebx + 3u, 1u);
    wr8(ecx, 0x30u);
    goto L_1032626c;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10325fe2(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1032603eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        g->esi = 0x7fffu;
        wr32(sp0 - 8u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x10326044u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        g->esi = 0x7fffu;
        wr32(sp0 - 8u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x10326048u:
    {
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
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        g->esi = 0x7fffu;
        (void)sp0;
        return 1;
    }
    case 0x10326050u:
    {
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
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        g->esi = 0x7fffu;
        (void)sp0;
        return 1;
    }
    case 0x10326054u:
    {
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
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        g->esi = 0x7fffu;
        (void)sp0;
        return 1;
    }
    case 0x10326059u:
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
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1032606eu:
    {
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
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        g->esi = 0x7fffu;
        (void)sp0;
        return 1;
    }
    case 0x10326073u:
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
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10326081u:
    {
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        g->eax = 0x80000000u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10326087u:
    {
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        g->eax = 0x80000000u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1032608fu:
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
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10326096u:
    {
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        g->eax = 0x80000000u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1032609bu:
    {
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        g->eax = 0x80000000u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103260a3u:
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
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103260a9u:
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
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103260b0u:
    {
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        g->eax = 0x80000000u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103260b4u:
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
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103260bau:
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
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103260bfu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x30u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103260c8u:
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
        g->esp = sp0 - 0x34u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103260ceu:
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
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103260d7u:
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
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103260dcu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x30u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103260e5u:
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
        g->esp = sp0 - 0x34u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103260edu:
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
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10326133u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1032613eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1032614cu:
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
        g->esp = sp0 - 0x34u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, sp0 - 0x14u);
        wr32(sp0 - 0x34u, sp0 - 0x14u);
        wr32(sp0 - 0x30u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1032614eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x10326157u:
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
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10326163u:
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
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10326168u:
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
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1032616bu:
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
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10326170u:
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
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10326173u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10326189u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10326192u:
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
        g->esp = sp0 - 0x30u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x30u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x10326198u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        g->ecx = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x30u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1032619cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        g->ecx = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x30u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x103261a6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        g->ecx = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x30u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x103261afu:
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
        g->esp = sp0 - 0x30u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x30u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x103261b3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        g->ecx = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x30u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x103261c0u:
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
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x30u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x103261c3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103261d5u:
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
        g->esp = sp0 - 0x30u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103261deu:
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
        g->esp = sp0 - 0x34u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x34u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x103261ebu:
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
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x3cu, sp0 - 0x14u);
        wr32(sp0 - 0x38u, sp0 + 4u);
        wr32(sp0 - 0x34u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x103261f4u:
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
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x40u, sp0 - 0x14u);
        wr32(sp0 - 0x3cu, sp0 - 0x14u);
        wr32(sp0 - 0x38u, sp0 + 4u);
        wr32(sp0 - 0x34u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1032620du:
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
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10326210u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1032621du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10326221u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10326226u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1032622cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10326230u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10326234u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10326236u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10326245u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10326248u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_30;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1032624du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10326251u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10326256u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10326259u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1032625du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1032626cu:
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
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10325fe2(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10325fe2(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
