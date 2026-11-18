/* f_0x1013cc50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1013cc50(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_4;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 52u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1013cc66u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1013cc66;
    case 0x1013cc70u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1013cc70;
    case 0x1013cc78u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); loc_8 = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1013cc78;
    case 0x1013ccb9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1013ccb9;
    case 0x1013ccc2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1013ccc2;
    case 0x1013ccc9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1013ccc9;
    case 0x1013ccfdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1013ccfd;
    case 0x1013cd02u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1013cd02;
    case 0x1013cd0cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_1013cd0c;
    case 0x1013cd11u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_1013cd11;
    case 0x1013cd1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_1013cd1c;
    case 0x1013cd2bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_1013cd2b;
    case 0x1013cd30u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_1013cd30;
    case 0x1013cd35u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_1013cd35;
    case 0x1013cd3au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_1013cd3a;
    case 0x1013cd4cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_1013cd4c;
    case 0x1013cd51u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_1013cd51;
    case 0x1013cd59u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_1013cd59;
    case 0x1013cd5au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_1013cd5a;
    case 0x1013cd63u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_1013cd63;
    case 0x1013cd6bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_1013cd6b;
    case 0x1013cd70u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_1013cd70;
    case 0x1013cd71u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_1013cd71;
    case 0x1013cd7au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_1013cd7a;
    case 0x1013cd7bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_1013cd7b;
    case 0x1013cd91u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_1013cd91;
    case 0x1013cd99u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_1013cd99;
    case 0x1013ceb1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_1013ceb1;
    default: break;
    }
#endif

    COW_AT(1013cc50)
    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    if (rd32(rd32(self + 0x1cu) + 0x14bcu) == 0u)
    {
        ecx = rd32(self + 0x1cu);
    COW_AT(1013cc70)
        wr32(sp0 - 8u, 0u);
        loc_8 = 0u;
    }
    else
    {
        eax = rd32(rd32(self + 0x1cu) + 0x14bcu);
        ecx = rd32(self + 0x1cu);
    COW_AT(1013cc66)
        wr16(sp0 - 8u, rd16(eax));
        loc_8 = rd32(sp0 - 8u);
    }
    COW_AT(1013cc78)
    wr32(sp0 - 0x20u, sp0 - 9u);
    t1 = rd32(self + 0x348u);
    wr32(sp0 - 0x24u, t1);
    t2 = rd16(rd32(ecx + 0x14b4u));
    wr32(sp0 - 0x28u, t2);
    t3 = (t1 & 0xffff0000u) | rd16(self + 0x24u);
    wr32(sp0 - 0x2cu, t3);
    g->eax = t3;
    g->edx = t2;
    t4 = rd32(sp0 + 4u);
    t5 = rd16(rd32(self + 0x368u) + 0x20u);
    t6 = rd16(rd32(self + 0x368u) + 0x22u);
    g->esp = sp0 - 0x1cu;
    t7 = cow_cdecl(g, COW_IMG(0x101cb8a0u), 4, t3, t2, t1, sp0 - 9u);
    t8 = g->edx;
    wr8(sp0 + 4u, (uint8_t)t7);
    if ((uint8_t)t7 == 0u)
    {
        ebx = t4 + ((in_ebx & 0xffff0000u) | (uint16_t)(t5 - t6));
        edi = t4;
        goto L_1013ccc9;
    }
    edx = t8;
    ebx = t4 + ((in_ebx & 0xffff0000u) | (uint16_t)(t5 - t6));
    edi = t4;
    COW_AT(1013ccb9)
    if ((rd8(sp0 - 9u) & 0x10u) == 0u)
    {
        edx = (edx & 0xffffff00u) | rd8(sp0 - 9u);
        goto L_1013ccfd;
    }
    edx = (edx & 0xffffff00u) | rd8(sp0 - 9u);
    COW_AT(1013ccc2)
    wr8(sp0 + 4u, 0u);
    loc_8 = rd32(sp0 - 8u);
L_1013cd1c: ;
    COW_AT(1013cd1c)
    if ((rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) & 0x80u) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        ecx = rd32(COW_IMG(0x10456a28u));
        goto L_1013cd35;
    }
    eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
    ecx = rd32(COW_IMG(0x10456a28u));
    COW_AT(1013cd2b)
    if (eax == 2u) goto L_1013cd91;
    COW_AT(1013cd30)
    if (eax == 3u) goto L_1013cd91;
L_1013cd35: ;
    COW_AT(1013cd35)
    if ((int32_t)eax < 2) goto L_1013cd91;
    COW_AT(1013cd3a)
    wr32(sp0 - 4u, 0xfffffffeu);
    if (rd8(sp0 + 4u) == 0u)
    {
        ecx = 0u;
    }
    else
    {
    COW_AT(1013cd4c)
        ecx = 1u;
    }
    COW_AT(1013cd51)
    if ((int8_t)(loc_8 >> 8u) < 0)
    {
    COW_AT(1013cd59)
        ecx = ecx + 1u;
    }
    COW_AT(1013cd5a)
    if ((loc_8 >> 8u & 0x40u) != 0u) goto L_1013cd70;
    eax = loc_8;
    COW_AT(1013cd63)
    if (rd8(sp0 + 4u) == 0u) goto L_1013cd71;
    COW_AT(1013cd6b)
    if ((edx & 3u) == 0u) goto L_1013cd71;
L_1013cd70: ;
    COW_AT(1013cd70)
    ecx = ecx + 1u;
L_1013cd71: ;
    COW_AT(1013cd71)
    if (rd32(self + 0x340u) == 3u)
    {
    COW_AT(1013cd7a)
        ecx = ecx + 1u;
    }
    COW_AT(1013cd7b)
    eax = (uint32_t)((int32_t)(-(ecx * 8u - ecx) - (ecx * 8u - ecx) - (uint32_t)((int32_t)(-(ecx * 8u - ecx) - (ecx * 8u - ecx)) >> 0x1fu)) >> 1u);
    edi = edi + (uint32_t)((int32_t)(-(ecx * 8u - ecx) - (ecx * 8u - ecx) - (uint32_t)((int32_t)(-(ecx * 8u - ecx) - (ecx * 8u - ecx)) >> 0x1fu)) >> 1u);
    loc_4 = 0xfffffffeu;
L_1013cd99: ;
    COW_AT(1013cd99)
    if (rd8(sp0 + 4u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 + 4u);
    COW_AT(1013cda6)
        wr32(sp0 - 0x20u, 0u);
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x28u, 0x80808080u);
        wr32(sp0 - 0x2cu, (uint32_t)(int16_t)arg2);
        wr32(sp0 - 0x30u, (uint32_t)(int16_t)edi);
        t17 = rd32(self + 0x364u);
        g->esp = sp0 - 0x1cu;
        cow_thiscall(g, COW_IMG(0x1011fb60u), t17, 5, (uint32_t)(int16_t)edi, (uint32_t)(int16_t)arg2, 0x80808080u, 0u, 0u);
        t18 = g->ecx;
        ecx = rd32(sp0 - 4u) + ((t18 & 0xffff0000u) | (uint16_t)(rd16(rd32(self + 0x364u) + 0x22u) - rd16(rd32(self + 0x364u) + 0x20u)));
        edi = edi + rd32(sp0 - 4u) + ((t18 & 0xffff0000u) | (uint16_t)(rd16(rd32(self + 0x364u) + 0x22u) - rd16(rd32(self + 0x364u) + 0x20u)));
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
    }
    COW_AT(1013cdd8)
    if ((int8_t)(loc_8 >> 8u) >= 0)
    {
        eax = loc_8;
    }
    else
    {
    COW_AT(1013cde0)
        wr32(sp0 - 0x20u, 0u);
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x28u, 0x80808080u);
        wr32(sp0 - 0x2cu, (uint32_t)(int16_t)arg2);
        wr32(sp0 - 0x30u, (uint32_t)(int16_t)edi);
        t19 = rd32(self + 0x358u);
        g->esp = sp0 - 0x1cu;
        cow_thiscall(g, COW_IMG(0x1011fb60u), t19, 5, (uint32_t)(int16_t)edi, (uint32_t)(int16_t)arg2, 0x80808080u, 0u, 0u);
        t20 = g->ecx;
        eax = rd32(sp0 - 8u);
        ecx = rd32(sp0 - 4u) + ((t20 & 0xffff0000u) | (uint16_t)(rd16(rd32(self + 0x358u) + 0x22u) - rd16(rd32(self + 0x358u) + 0x20u)));
        edi = edi + rd32(sp0 - 4u) + ((t20 & 0xffff0000u) | (uint16_t)(rd16(rd32(self + 0x358u) + 0x22u) - rd16(rd32(self + 0x358u) + 0x20u)));
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
    }
    COW_AT(1013ce16)
    if ((eax >> 8u & 0x40u) != 0u)
    {
    COW_AT(1013ce1b)
        wr32(sp0 - 0x20u, 0u);
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x28u, 0x80808080u);
        wr32(sp0 - 0x2cu, (uint32_t)(int16_t)arg2);
        wr32(sp0 - 0x30u, (uint32_t)(int16_t)edi);
        t21 = rd32(self + 0x35cu);
        g->esp = sp0 - 0x1cu;
        cow_thiscall(g, COW_IMG(0x1011fb60u), t21, 5, (uint32_t)(int16_t)edi, (uint32_t)(int16_t)arg2, 0x80808080u, 0u, 0u);
        t22 = g->ecx;
        eax = rd32(sp0 - 8u);
        ecx = rd32(sp0 - 4u) + ((t22 & 0xffff0000u) | (uint16_t)(rd16(rd32(self + 0x35cu) + 0x22u) - rd16(rd32(self + 0x35cu) + 0x20u)));
        edi = edi + rd32(sp0 - 4u) + ((t22 & 0xffff0000u) | (uint16_t)(rd16(rd32(self + 0x35cu) + 0x22u) - rd16(rd32(self + 0x35cu) + 0x20u)));
    }
    COW_AT(1013ce51)
    if (rd32(self + 0x340u) != 3u) goto L_1013ce80;
    COW_AT(1013ce5a)
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, 0x80808080u);
    wr32(sp0 - 0x2cu, (uint32_t)(int16_t)arg2);
    wr32(sp0 - 0x30u, (uint32_t)(int16_t)edi);
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(self + 0x360u), 5, (uint32_t)(int16_t)edi, (uint32_t)(int16_t)arg2, 0x80808080u, 0u, 0u);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    g->ebp = rd32(sp0 - 0x14u);
    return;
L_1013ccc9: ;
    COW_AT(1013ccc9)
    wr32(sp0 - 0x20u, sp0 - 9u);
    t9 = rd32(self + 0x348u);
    wr32(sp0 - 0x24u, t9);
    t10 = rd16(rd32(rd32(self + 0x1cu) + 0x14b4u));
    wr32(sp0 - 0x28u, t10);
    t11 = (rd32(self + 0x1cu) & 0xffff0000u) | rd16(self + 0x24u);
    wr32(sp0 - 0x2cu, t11);
    g->eax = t11;
    g->edx = t10;
    g->esp = sp0 - 0x1cu;
    t12 = cow_cdecl(g, COW_IMG(0x101cb990u), 4, t11, t10, t9, sp0 - 9u);
    t13 = g->edx;
    t14 = rd8(sp0 - 9u);
    wr8(sp0 + 4u, (uint8_t)t12);
    if ((uint8_t)t12 == 0u)
    {
        edx = (t13 & 0xffffff00u) | t14;
        loc_8 = rd32(sp0 - 8u);
        goto L_1013cd1c;
    }
    edx = (t13 & 0xffffff00u) | t14;
L_1013ccfd: ;
    COW_AT(1013ccfd)
    if (!(edx & 1u))
    {
        loc_8 = rd32(sp0 - 8u);
    }
    else
    {
    COW_AT(1013cd02)
        t15 = (rd32(sp0 - 8u) & 0xffffff00u) | (uint8_t)(rd32(sp0 - 8u) | 0x40u);
        wr32(sp0 - 8u, t15);
        loc_8 = t15;
    }
    COW_AT(1013cd0c)
    if ((edx & 2u) != 0u)
    {
    COW_AT(1013cd11)
        t16 = (loc_8 & 0xffff00ffu) | (uint32_t)(uint8_t)(loc_8 >> 8u | 0x40u) << 8u;
        wr32(sp0 - 8u, t16);
        loc_8 = t16;
    }
    goto L_1013cd1c;
L_1013cd91: ;
    COW_AT(1013cd91)
    wr32(sp0 - 4u, 0u);
    loc_4 = 0u;
    goto L_1013cd99;
L_1013ce80: ;
    COW_AT(1013ce80)
    if ((eax & 0x10u) != 0u)
    {
    COW_AT(1013ce84)
        if ((eax >> 8u & 8u) == 0u) goto L_1013ce95;
    COW_AT(1013ce89)
        if (rd8(sp0 + 4u) == 0u) goto L_1013ce95;
    COW_AT(1013ce91)
        if (!(eax & 1u)) goto L_1013ceb1;
L_1013ce95: ;
    COW_AT(1013ce95)
        wr32(sp0 - 0x20u, 0u);
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x28u, 0x80808080u);
        wr32(sp0 - 0x2cu, (uint32_t)(int16_t)arg2);
        wr32(sp0 - 0x30u, (uint32_t)(int16_t)ebx);
        g->esp = sp0 - 0x1cu;
        cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(self + 0x368u), 5, (uint32_t)(int16_t)ebx, (uint32_t)(int16_t)arg2, 0x80808080u, 0u, 0u);
    }
L_1013ceb1: ;
    COW_AT(1013ceb1)
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    g->ebp = rd32(sp0 - 0x14u);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1013cc50(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1013cc66u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x14u, in_ebp);
        wr32(sp0 - 0x10u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1013cc70u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x14u, in_ebp);
        wr32(sp0 - 0x10u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1013cc78u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x14u, in_ebp);
        wr32(sp0 - 0x10u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1013ccb9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x20u, sp0 - 9u);
        (void)sp0;
        return 1;
    }
    case 0x1013ccc2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x20u, sp0 - 9u);
        (void)sp0;
        return 1;
    }
    case 0x1013ccc9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x20u, sp0 - 9u);
        (void)sp0;
        return 1;
    }
    case 0x1013ccfdu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x20u, sp0 - 9u);
        (void)sp0;
        return 1;
    }
    case 0x1013cd02u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x20u, sp0 - 9u);
        (void)sp0;
        return 1;
    }
    case 0x1013cd0cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x20u, sp0 - 9u);
        (void)sp0;
        return 1;
    }
    case 0x1013cd11u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x20u, sp0 - 9u);
        (void)sp0;
        return 1;
    }
    case 0x1013cd1cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x20u, sp0 - 9u);
        (void)sp0;
        return 1;
    }
    case 0x1013cd2bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x20u, sp0 - 9u);
        (void)sp0;
        return 1;
    }
    case 0x1013cd30u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x20u, sp0 - 9u);
        (void)sp0;
        return 1;
    }
    case 0x1013cd35u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x20u, sp0 - 9u);
        (void)sp0;
        return 1;
    }
    case 0x1013cd3au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x20u, sp0 - 9u);
        (void)sp0;
        return 1;
    }
    case 0x1013cd4cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x20u, sp0 - 9u);
        wr32(sp0 - 4u, 0xfffffffeu);
        (void)sp0;
        return 1;
    }
    case 0x1013cd51u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x20u, sp0 - 9u);
        wr32(sp0 - 4u, 0xfffffffeu);
        (void)sp0;
        return 1;
    }
    case 0x1013cd59u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x20u, sp0 - 9u);
        wr32(sp0 - 4u, 0xfffffffeu);
        (void)sp0;
        return 1;
    }
    case 0x1013cd5au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x20u, sp0 - 9u);
        wr32(sp0 - 4u, 0xfffffffeu);
        (void)sp0;
        return 1;
    }
    case 0x1013cd63u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x20u, sp0 - 9u);
        wr32(sp0 - 4u, 0xfffffffeu);
        (void)sp0;
        return 1;
    }
    case 0x1013cd6bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x20u, sp0 - 9u);
        wr32(sp0 - 4u, 0xfffffffeu);
        (void)sp0;
        return 1;
    }
    case 0x1013cd70u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x20u, sp0 - 9u);
        wr32(sp0 - 4u, 0xfffffffeu);
        (void)sp0;
        return 1;
    }
    case 0x1013cd71u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x20u, sp0 - 9u);
        wr32(sp0 - 4u, 0xfffffffeu);
        (void)sp0;
        return 1;
    }
    case 0x1013cd7au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x20u, sp0 - 9u);
        wr32(sp0 - 4u, 0xfffffffeu);
        (void)sp0;
        return 1;
    }
    case 0x1013cd7bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x20u, sp0 - 9u);
        wr32(sp0 - 4u, 0xfffffffeu);
        (void)sp0;
        return 1;
    }
    case 0x1013cd91u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x20u, sp0 - 9u);
        (void)sp0;
        return 1;
    }
    case 0x1013cd99u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x20u, sp0 - 9u);
        (void)sp0;
        return 1;
    }
    case 0x1013ceb1u:
    {
        uint32_t eax;
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
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
/* blocks no state can start at, and why (the gittable lists their sites):
     1013cda6: holds in_ebp, which no location here says
     1013cdd8: holds in_ebp, which no location here says
     1013cde0: holds in_ebp, which no location here says
     1013ce16: holds in_ebp, which no location here says
     1013ce1b: holds in_ebp, which no location here says
     1013ce51: holds in_ebp, which no location here says
     1013ce5a: holds in_ebp, which no location here says
     1013ce80: holds in_ebp, which no location here says
     1013ce84: holds in_ebp, which no location here says
     1013ce89: holds in_ebp, which no location here says
     1013ce91: holds in_ebp, which no location here says
     1013ce95: holds in_ebp, which no location here says
*/
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1013cc50(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1013cc50(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
