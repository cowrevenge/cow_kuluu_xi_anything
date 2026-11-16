/* f_0x10303f65 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=2 */
uint32_t cow_fn_10303f65(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_4;
    uint32_t loc_50;
    uint32_t loc_54;
    uint32_t loc_58;
    uint32_t loc_5c;
    uint32_t loc_60;
    uint32_t loc_64;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 124u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x5cu, in_ebx);
    if (rd32(arg1 + 0xfcu) == 0u)
    {
        ebx = rd32(arg1 + 0x194u);
        goto L_10303f96;
    }
    ebx = rd32(arg1 + 0x194u);
    if (rd32(ebx + 0x30u) != 0u) goto L_10303f96;
    wr32(sp0 - 0x60u, arg1);
    g->edx = in_edx;
    g->esp = sp0 - 0x3cu;
    t1 = cow_cdecl(g, COW_IMG(0x10303f07u), 9, arg1, in_ebx, rd32(sp0 - 0x58u), rd32(sp0 - 0x54u), rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u), rd32(sp0 - 0x40u));
    t2 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        edx = t2;
        esi = in_esi;
        edi = in_edi;
        loc_4 = in_ebp;
        loc_5c = in_ebx;
        goto L_1030432b;
    }
L_10303f96: ;
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x60u, in_esi);
    wr32(sp0 - 0x64u, in_edi);
    wr32(sp0 - 0x38u, ebx + 0x18u);
    t3 = rd32(rd32(arg1 + 0x14u) + 4u);
    t4 = rd32(rd32(arg1 + 0x14u));
    t5 = rd32(arg1 + 0x13cu);
    esi = ebx + 0x20u;
    edi = sp0 - 0x30u;
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(sp0 - 0x54u, t3);
    t6 = rd32(arg1 + 0x178u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(sp0 - 0x58u, t4);
    wr32(sp0 - 0x50u, t6);
    wr32(sp0 - 0x3cu, arg1);
    t7 = rd32(ebx + 0x14u);
    t8 = rd32(ebx + 0x10u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    if ((int32_t)t5 <= 0)
    {
        eax = t7;
        edx = t8;
        loc_54 = t3;
        loc_58 = t4;
        loc_50 = t6;
        goto L_103042fa;
    }
    eax = t7;
    edx = t8;
    loc_54 = t3;
    loc_58 = t4;
    loc_50 = t6;
    wr32(sp0 - 0x14u, arg1 + 0x140u);
    loc_10 = 0u;
    loc_14 = arg1 + 0x140u;
L_10303fe2: ;
    t9 = rd32(arg2 + loc_10 * 4u);
    wr32(sp0 - 0x1cu, t9);
    t10 = rd32(ebx + rd32(rd32(arg1 + rd32(loc_14) * 4u + 0x124u) + 0x14u) * 4u + 0x34u);
    wr32(sp0 - 8u, t10);
    wr32(sp0 - 0x20u, rd32(loc_14));
    t11 = rd32(arg1 + rd32(loc_14) * 4u + 0x124u);
    wr32(sp0 - 0x18u, t11);
    t12 = rd32(ebx + rd32(rd32(arg1 + rd32(loc_14) * 4u + 0x124u) + 0x18u) * 4u + 0x44u);
    wr32(sp0 - 0xcu, t12);
    if ((int32_t)eax >= 8)
    {
        edi = t11;
        cf = eax < 8u;
        pf = PARITY((uint8_t)(eax - 8u));
        zf = eax == 8u;
        sf = (int32_t)(eax - 8u) < 0;
        of = ((eax ^ 8u) & (eax ^ eax - 8u)) >> 0x1fu;
        loc_1c = t9;
        loc_8 = t10;
        loc_20 = rd32(loc_14);
        loc_18 = t11;
        loc_c = t12;
        goto L_10304041;
    }
    ecx = t12;
    edi = t11;
    loc_1c = t9;
    loc_8 = t10;
    loc_20 = rd32(loc_14);
    loc_18 = t11;
    loc_c = t12;
    wr32(sp0 - 0x68u, 0u);
    wr32(sp0 - 0x6cu, eax);
    wr32(sp0 - 0x70u, edx);
    wr32(sp0 - 0x74u, sp0 - 0x58u);
    g->esp = sp0 - 0x64u;
    t13 = cow_call_regs(g, COW_IMG(0x10303d33u), g->eax, g->ecx, edx, 1, 4, sp0 - 0x58u, edx, eax, 0u);
    t14 = g->edx;
    if ((uint8_t)t13 == 0u)
    {
        eax = t13;
        edx = t14;
        goto L_1030432e;
    }
    if ((int32_t)rd32(sp0 - 0x40u) >= 8)
    {
        eax = rd32(sp0 - 0x40u);
        edx = rd32(sp0 - 0x4cu);
        cf = rd32(sp0 - 0x40u) < 8u;
        pf = PARITY((uint8_t)(rd32(sp0 - 0x40u) - 8u));
        zf = rd32(sp0 - 0x40u) == 8u;
        sf = (int32_t)(rd32(sp0 - 0x40u) - 8u) < 0;
        of = ((rd32(sp0 - 0x40u) ^ 8u) & (rd32(sp0 - 0x40u) ^ rd32(sp0 - 0x40u) - 8u)) >> 0x1fu;
        goto L_10304041;
    }
    eax = rd32(sp0 - 0x40u);
    edx = rd32(sp0 - 0x4cu);
    ecx = 1u;
L_1030406e: ;
    wr32(sp0 - 0x68u, ecx);
    wr32(sp0 - 0x6cu, loc_8);
    wr32(sp0 - 0x70u, eax);
    wr32(sp0 - 0x74u, edx);
    wr32(sp0 - 0x78u, sp0 - 0x58u);
    g->esp = sp0 - 0x5cu;
    t15 = cow_call_regs(g, COW_IMG(0x10303e1du), g->eax, ecx, edx, 1, 7, sp0 - 0x58u, edx, eax, loc_8, ecx, loc_64, loc_60);
    t16 = g->ecx;
    t17 = g->edx;
    if ((int32_t)t15 < 0)
    {
        eax = t15;
        edx = t17;
        goto L_1030432e;
    }
    ecx = t16;
    esi = t15;
    eax = rd32(sp0 - 0x40u);
    edx = rd32(sp0 - 0x4cu);
L_10304090: ;
    if (esi == 0u) goto L_103040eb;
    if ((int32_t)eax >= (int32_t)esi) goto L_103040b5;
    wr32(sp0 - 0x68u, esi);
    wr32(sp0 - 0x6cu, eax);
    wr32(sp0 - 0x70u, edx);
    wr32(sp0 - 0x74u, sp0 - 0x58u);
    g->esp = sp0 - 0x64u;
    t18 = cow_call_regs(g, COW_IMG(0x10303d33u), g->eax, g->ecx, edx, 1, 4, sp0 - 0x58u, edx, eax, esi);
    t19 = g->edx;
    if ((uint8_t)t18 == 0u)
    {
        eax = t18;
        edx = t19;
        goto L_1030432e;
    }
    eax = rd32(sp0 - 0x40u);
    edx = rd32(sp0 - 0x4cu);
L_103040b5: ;
    wr32(sp0 - 8u, 1u);
    t20 = 1u << (esi & 0x1fu);
    wr32(sp0 - 8u, t20);
    wr32(sp0 - 8u, t20 - 1u);
    if ((int32_t)(t20 - 1u & (uint32_t)((int32_t)edx >> ((eax - esi & 0x1fu) < 0x20u ? eax - esi & 0x1fu : 0x1fu))) >= (int32_t)rd32(COW_IMG(0x10349228u) + esi * 4u))
    {
        ecx = t20 - 1u & (uint32_t)((int32_t)edx >> ((eax - esi & 0x1fu) < 0x20u ? eax - esi & 0x1fu : 0x1fu));
        eax = eax - esi;
        edi = loc_18;
        esi = ecx;
    }
    else
    {
        ecx = t20 - 1u & (uint32_t)((int32_t)edx >> ((eax - esi & 0x1fu) < 0x20u ? eax - esi & 0x1fu : 0x1fu));
        eax = eax - esi;
        esi = esi << 2u;
        edi = loc_18;
        esi = ecx + rd32(COW_IMG(0x10349268u) + esi);
    }
L_103040eb: ;
    if (rd8(edi + 0x30u) == 0u) goto L_1030421d;
    wr32(loc_20 * 4u + sp0 - 0x30u, esi + rd32(loc_20 * 4u + sp0 - 0x30u));
    wr16(loc_1c, (uint16_t)rd32(loc_20 * 4u + sp0 - 0x30u));
    if ((int32_t)rd32(edi + 0x24u) <= 1)
    {
        ecx = 1u;
        goto L_1030421d;
    }
    wr32(sp0 - 8u, 1u);
    ecx = 1u;
    loc_8 = 1u;
L_10304115: ;
    if ((int32_t)eax >= 8)
    {
        cf = eax < 8u;
        pf = PARITY((uint8_t)(eax - 8u));
        zf = eax == 8u;
        sf = (int32_t)(eax - 8u) < 0;
        of = ((eax ^ 8u) & (eax ^ eax - 8u)) >> 0x1fu;
        goto L_10304145;
    }
    wr32(sp0 - 0x68u, 0u);
    wr32(sp0 - 0x6cu, eax);
    wr32(sp0 - 0x70u, edx);
    wr32(sp0 - 0x74u, sp0 - 0x58u);
    g->esp = sp0 - 0x64u;
    t21 = cow_call_regs(g, COW_IMG(0x10303d33u), g->eax, g->ecx, edx, 1, 4, sp0 - 0x58u, edx, eax, 0u);
    t22 = g->edx;
    if ((uint8_t)t21 == 0u)
    {
        eax = t21;
        edx = t22;
        goto L_1030432e;
    }
    if ((int32_t)rd32(sp0 - 0x40u) >= 8)
    {
        eax = rd32(sp0 - 0x40u);
        edx = rd32(sp0 - 0x4cu);
        cf = rd32(sp0 - 0x40u) < 8u;
        pf = PARITY((uint8_t)(rd32(sp0 - 0x40u) - 8u));
        zf = rd32(sp0 - 0x40u) == 8u;
        sf = (int32_t)(rd32(sp0 - 0x40u) - 8u) < 0;
        of = ((rd32(sp0 - 0x40u) ^ 8u) & (rd32(sp0 - 0x40u) ^ rd32(sp0 - 0x40u) - 8u)) >> 0x1fu;
        goto L_10304145;
    }
    eax = rd32(sp0 - 0x40u);
    edx = rd32(sp0 - 0x4cu);
    ecx = rd32(sp0 - 0xcu);
    esi = 1u;
L_1030416f: ;
    wr32(sp0 - 0x68u, esi);
    wr32(sp0 - 0x6cu, ecx);
    wr32(sp0 - 0x70u, eax);
    wr32(sp0 - 0x74u, edx);
    wr32(sp0 - 0x78u, sp0 - 0x58u);
    g->esp = sp0 - 0x5cu;
    t23 = cow_call_regs(g, COW_IMG(0x10303e1du), g->eax, ecx, edx, 1, 7, sp0 - 0x58u, edx, eax, ecx, esi, loc_64, loc_60);
    t24 = g->edx;
    if ((int32_t)t23 < 0)
    {
        eax = t23;
        edx = t24;
        goto L_1030432e;
    }
    edi = t23;
    eax = rd32(sp0 - 0x40u);
    edx = rd32(sp0 - 0x4cu);
L_1030418f: ;
    wr32(sp0 - 0x20u, edi & 0xfu);
    if ((edi & 0xfu) == 0u)
    {
        ecx = (uint32_t)((int32_t)edi >> 4u);
        goto L_103041ff;
    }
    ecx = (uint32_t)((int32_t)edi >> 4u);
    loc_20 = edi & 0xfu;
    edi = edi & 0xfu;
    wr32(sp0 - 8u, ecx + loc_8);
    if ((int32_t)eax >= (int32_t)edi)
    {
        loc_8 = ecx + loc_8;
        goto L_103041c0;
    }
    loc_8 = ecx + loc_8;
    wr32(sp0 - 0x68u, edi);
    wr32(sp0 - 0x6cu, eax);
    wr32(sp0 - 0x70u, edx);
    wr32(sp0 - 0x74u, sp0 - 0x58u);
    g->esp = sp0 - 0x64u;
    t25 = cow_call_regs(g, COW_IMG(0x10303d33u), g->eax, g->ecx, edx, 1, 4, sp0 - 0x58u, edx, eax, edi);
    t26 = g->edx;
    if ((uint8_t)t25 == 0u)
    {
        eax = t25;
        edx = t26;
        goto L_1030432e;
    }
    eax = rd32(sp0 - 0x40u);
    edx = rd32(sp0 - 0x4cu);
L_103041c0: ;
    if ((int32_t)((1u << (edi & 0x1fu)) - 1u & (uint32_t)((int32_t)edx >> ((eax - edi & 0x1fu) < 0x20u ? eax - edi & 0x1fu : 0x1fu))) >= (int32_t)rd32(COW_IMG(0x10349228u) + loc_20 * 4u))
    {
        esi = (1u << (edi & 0x1fu)) - 1u & (uint32_t)((int32_t)edx >> ((eax - edi & 0x1fu) < 0x20u ? eax - edi & 0x1fu : 0x1fu));
        eax = eax - edi;
        ecx = esi;
    }
    else
    {
        ecx = loc_20 << 2u;
        esi = (1u << (edi & 0x1fu)) - 1u & (uint32_t)((int32_t)edx >> ((eax - edi & 0x1fu) < 0x20u ? eax - edi & 0x1fu : 0x1fu));
        eax = eax - edi;
        ecx = esi + rd32(COW_IMG(0x10349268u) + ecx);
    }
    wr16(loc_1c + rd32(COW_IMG(0x10348738u) + loc_8 * 4u) * 2u, (uint16_t)ecx);
L_1030420b: ;
    wr32(sp0 - 8u, loc_8 + 1u);
    if ((int32_t)(loc_8 + 1u) < 64)
    {
        loc_8 = loc_8 + 1u;
        goto L_10304115;
    }
L_103042e1: ;
    wr32(sp0 - 0x10u, loc_10 + 1u);
    wr32(sp0 - 0x14u, loc_14 + 4u);
    if ((int32_t)(loc_10 + 1u) < (int32_t)rd32(arg1 + 0x13cu))
    {
        loc_10 = loc_10 + 1u;
        loc_14 = loc_14 + 4u;
        goto L_10303fe2;
    }
L_103042fa: ;
    wr32(rd32(arg1 + 0x14u), loc_58);
    wr32(rd32(arg1 + 0x14u) + 4u, loc_54);
    wr32(arg1 + 0x178u, loc_50);
    wr32(ebx + 0x30u, rd32(ebx + 0x30u) - 1u);
    esi = sp0 - 0x30u;
    edi = ebx + 0x20u;
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(ebx + 0x14u, eax);
    wr32(ebx + 0x10u, edx);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    eax = (eax & 0xffffff00u) | 1u;
    loc_4 = in_ebp;
    loc_5c = in_ebx;
    loc_60 = in_esi;
    loc_64 = in_edi;
L_10304329: ;
    esi = loc_60;
    edi = loc_64;
L_1030432b: ;
    g->ebx = loc_5c;
    g->esi = esi;
    g->edi = edi;
    g->ebp = loc_4;
    g->edx = edx;
    return eax;
L_10304041: ;
    if (rd32(loc_8 + (uint8_t)(uint32_t)((int32_t)edx >> ((eax - 8u & 0x1fu) < 0x20u ? eax - 8u & 0x1fu : 0x1fu)) * 4u + 0xd4u) == 0u) goto L_1030406b;
    ecx = rd32(loc_8 + (uint8_t)(uint32_t)((int32_t)edx >> ((eax - 8u & 0x1fu) < 0x20u ? eax - 8u & 0x1fu : 0x1fu)) * 4u + 0xd4u);
    esi = (uint8_t)(uint32_t)((int32_t)edx >> ((eax - 8u & 0x1fu) < 0x20u ? eax - 8u & 0x1fu : 0x1fu));
    eax = eax - ecx;
    ecx = loc_8;
    esi = rd8(esi + loc_8 + 0x4d4u);
    goto L_10304090;
L_1030406b: ;
    wr32(sp0 - 0x68u, 9u);
    ecx = 9u;
    loc_4 = in_ebp;
    loc_5c = in_ebx;
    loc_60 = in_esi;
    loc_64 = in_edi;
    goto L_1030406e;
L_10304145: ;
    if (rd32(loc_c + (uint8_t)(uint32_t)((int32_t)edx >> ((eax - 8u & 0x1fu) < 0x20u ? eax - 8u & 0x1fu : 0x1fu)) * 4u + 0xd4u) == 0u)
    {
        ecx = loc_c;
        goto L_1030416c;
    }
    ecx = loc_c;
    esi = (uint8_t)(uint32_t)((int32_t)edx >> ((eax - 8u & 0x1fu) < 0x20u ? eax - 8u & 0x1fu : 0x1fu));
    edi = rd32(loc_c + (uint8_t)(uint32_t)((int32_t)edx >> ((eax - 8u & 0x1fu) < 0x20u ? eax - 8u & 0x1fu : 0x1fu)) * 4u + 0xd4u);
    eax = eax - edi;
    edi = rd8(ecx + esi + 0x4d4u);
    goto L_1030418f;
L_1030416c: ;
    wr32(sp0 - 0x68u, 9u);
    esi = 9u;
    loc_4 = in_ebp;
    loc_5c = in_ebx;
    loc_60 = in_esi;
    loc_64 = in_edi;
    goto L_1030416f;
L_103041ff: ;
    if (ecx != 0xfu) goto L_103042e1;
    wr32(sp0 - 8u, ecx + loc_8);
    loc_8 = ecx + loc_8;
    goto L_1030420b;
L_1030421d: ;
    wr32(sp0 - 8u, 1u);
    loc_8 = 1u;
L_10304224: ;
    if ((int32_t)eax >= 8)
    {
        cf = eax < 8u;
        pf = PARITY((uint8_t)(eax - 8u));
        zf = eax == 8u;
        sf = (int32_t)(eax - 8u) < 0;
        of = ((eax ^ 8u) & (eax ^ eax - 8u)) >> 0x1fu;
        goto L_10304254;
    }
    wr32(sp0 - 0x68u, 0u);
    wr32(sp0 - 0x6cu, eax);
    wr32(sp0 - 0x70u, edx);
    wr32(sp0 - 0x74u, sp0 - 0x58u);
    g->esp = sp0 - 0x64u;
    t27 = cow_call_regs(g, COW_IMG(0x10303d33u), g->eax, g->ecx, edx, 1, 4, sp0 - 0x58u, edx, eax, 0u);
    t28 = g->edx;
    if ((uint8_t)t27 == 0u)
    {
        eax = t27;
        edx = t28;
        goto L_1030432e;
    }
    if ((int32_t)rd32(sp0 - 0x40u) >= 8)
    {
        eax = rd32(sp0 - 0x40u);
        edx = rd32(sp0 - 0x4cu);
        cf = rd32(sp0 - 0x40u) < 8u;
        pf = PARITY((uint8_t)(rd32(sp0 - 0x40u) - 8u));
        zf = rd32(sp0 - 0x40u) == 8u;
        sf = (int32_t)(rd32(sp0 - 0x40u) - 8u) < 0;
        of = ((rd32(sp0 - 0x40u) ^ 8u) & (rd32(sp0 - 0x40u) ^ rd32(sp0 - 0x40u) - 8u)) >> 0x1fu;
        goto L_10304254;
    }
    eax = rd32(sp0 - 0x40u);
    edx = rd32(sp0 - 0x4cu);
    ecx = rd32(sp0 - 0xcu);
    esi = 1u;
L_1030427e: ;
    wr32(sp0 - 0x68u, esi);
    wr32(sp0 - 0x6cu, ecx);
    wr32(sp0 - 0x70u, eax);
    wr32(sp0 - 0x74u, edx);
    wr32(sp0 - 0x78u, sp0 - 0x58u);
    g->esp = sp0 - 0x5cu;
    t29 = cow_call_regs(g, COW_IMG(0x10303e1du), g->eax, ecx, edx, 1, 7, sp0 - 0x58u, edx, eax, ecx, esi, loc_64, loc_60);
    t30 = g->edx;
    if ((int32_t)t29 < 0)
    {
        eax = t29;
        edx = t30;
        goto L_1030432e;
    }
    esi = t29;
    eax = rd32(sp0 - 0x40u);
    edx = rd32(sp0 - 0x4cu);
L_1030429e: ;
    if ((esi & 0xfu) == 0u)
    {
        ecx = (uint32_t)((int32_t)esi >> 4u);
        goto L_103042cc;
    }
    ecx = (uint32_t)((int32_t)esi >> 4u);
    esi = esi & 0xfu;
    wr32(sp0 - 8u, ecx + loc_8);
    if ((int32_t)eax >= (int32_t)esi)
    {
        loc_8 = ecx + loc_8;
        goto L_103042c8;
    }
    loc_8 = ecx + loc_8;
    wr32(sp0 - 0x68u, esi);
    wr32(sp0 - 0x6cu, eax);
    wr32(sp0 - 0x70u, edx);
    wr32(sp0 - 0x74u, sp0 - 0x58u);
    g->ecx = ecx;
    g->esp = sp0 - 0x64u;
    t31 = cow_call_regs(g, COW_IMG(0x10303d33u), g->eax, g->ecx, edx, 1, 4, sp0 - 0x58u, edx, eax, esi);
    t32 = g->ecx;
    t33 = g->edx;
    if ((uint8_t)t31 == 0u)
    {
        eax = t31;
        edx = t33;
        goto L_1030432e;
    }
    ecx = t32;
    eax = rd32(sp0 - 0x40u);
    edx = rd32(sp0 - 0x4cu);
L_103042c8: ;
    eax = eax - esi;
L_103042d4: ;
    wr32(sp0 - 8u, loc_8 + 1u);
    if ((int32_t)(loc_8 + 1u) < 64)
    {
        loc_8 = loc_8 + 1u;
        goto L_10304224;
    }
    goto L_103042e1;
L_10304254: ;
    if (rd32(loc_c + (uint8_t)(uint32_t)((int32_t)edx >> ((eax - 8u & 0x1fu) < 0x20u ? eax - 8u & 0x1fu : 0x1fu)) * 4u + 0xd4u) == 0u)
    {
        ecx = loc_c;
        goto L_1030427b;
    }
    ecx = loc_c;
    esi = (uint8_t)(uint32_t)((int32_t)edx >> ((eax - 8u & 0x1fu) < 0x20u ? eax - 8u & 0x1fu : 0x1fu));
    edi = rd32(loc_c + (uint8_t)(uint32_t)((int32_t)edx >> ((eax - 8u & 0x1fu) < 0x20u ? eax - 8u & 0x1fu : 0x1fu)) * 4u + 0xd4u);
    eax = eax - edi;
    esi = rd8(ecx + esi + 0x4d4u);
    goto L_1030429e;
L_1030427b: ;
    wr32(sp0 - 0x68u, 9u);
    esi = 9u;
    loc_4 = in_ebp;
    loc_5c = in_ebx;
    loc_60 = in_esi;
    loc_64 = in_edi;
    goto L_1030427e;
L_103042cc: ;
    if (ecx != 0xfu) goto L_103042e1;
    wr32(sp0 - 8u, ecx + loc_8);
    loc_8 = ecx + loc_8;
    goto L_103042d4;
L_1030432e: ;
    eax = eax & 0xffffff00u;
    goto L_10304329;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10303f65(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10303f65(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
