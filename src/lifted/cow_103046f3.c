/* f_0x103046f3 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=2 */
uint32_t cow_fn_103046f3(Guest* g)
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
    uint32_t loc_24;
    uint32_t loc_4;
    uint32_t loc_44;
    uint32_t loc_48;
    uint32_t loc_4c;
    uint32_t loc_50;
    uint32_t loc_54;
    uint32_t loc_58;
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
    uint32_t t3;
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
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 112u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x50u, in_esi);
    wr32(sp0 - 0x54u, in_edi);
    t1 = rd32(rd32(sp0 + 4u) + 0x16cu);
    wr32(sp0 - 0x1cu, t1);
    t2 = rd32(rd32(sp0 + 4u) + 0x174u);
    wr32(sp0 - 0x20u, t2);
    if (rd32(rd32(sp0 + 4u) + 0xfcu) == 0u)
    {
        edx = in_edx;
        esi = rd32(rd32(sp0 + 4u) + 0x194u);
        edi = rd32(sp0 + 4u);
        loc_1c = t1;
        loc_20 = t2;
        goto L_10304732;
    }
    eax = t2;
    esi = rd32(rd32(sp0 + 4u) + 0x194u);
    edi = rd32(sp0 + 4u);
    loc_1c = t1;
    loc_20 = t2;
    if (rd32(esi + 0x34u) != 0u)
    {
        edx = in_edx;
        goto L_10304732;
    }
    g->edi = edi;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x54u;
    t3 = cow_stdcall(g, COW_IMG(0x1030449bu), 0);
    t4 = g->edx;
    if ((uint8_t)t3 == 0u)
    {
        eax = t3;
        edx = t4;
        goto L_10304918;
    }
    edx = t4;
L_10304732: ;
    wr32(sp0 - 0x58u, in_ebx);
    t5 = rd32(esi + 0x20u);
    wr32(sp0 - 0xcu, t5);
    if (rd32(esi + 0x20u) == 0u)
    {
        loc_c = t5;
        goto L_10304743;
    }
    eax = t5;
    eax = eax - 1u;
L_1030490f: ;
    wr32(esi + 0x34u, rd32(esi + 0x34u) - 1u);
    wr32(esi + 0x20u, eax);
    eax = (eax & 0xffffff00u) | 1u;
L_10304917: ;
L_10304918: ;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
L_10304743: ;
    wr32(sp0 - 0x30u, edi);
    t6 = rd32(rd32(edi + 0x14u));
    wr32(sp0 - 0x4cu, t6);
    t7 = rd32(rd32(edi + 0x14u) + 4u);
    wr32(sp0 - 0x48u, t7);
    t8 = rd32(edi + 0x178u);
    wr32(sp0 - 0x44u, t8);
    wr32(sp0 - 0x2cu, esi + 0x18u);
    wr32(sp0 - 0x24u, rd32(arg2));
    t9 = rd32(esi + 0x48u);
    wr32(sp0 - 0x18u, t9);
    t10 = rd32(esi + 0x10u);
    wr32(sp0 - 0x10u, t10);
    t11 = rd32(edi + 0x168u);
    wr32(sp0 - 8u, t11);
    eax = rd32(esi + 0x14u);
    ecx = t11;
    ebx = t10;
    loc_4c = t6;
    loc_48 = t7;
    loc_44 = t8;
    loc_24 = rd32(arg2);
    loc_18 = t9;
    loc_10 = t10;
    loc_8 = t11;
L_10304897: ;
    if ((int32_t)ecx <= (int32_t)loc_1c) goto L_10304788;
L_103048ec: ;
    wr32(rd32(edi + 0x14u), loc_4c);
    wr32(rd32(edi + 0x14u) + 4u, loc_48);
    wr32(edi + 0x178u, loc_44);
    wr32(esi + 0x14u, eax);
    wr32(esi + 0x10u, ebx);
    eax = loc_c;
    edx = loc_48;
    goto L_1030490f;
L_10304788: ;
    if ((int32_t)eax >= 8)
    {
        cf = eax < 8u;
        pf = PARITY((uint8_t)(eax - 8u));
        zf = eax == 8u;
        sf = (int32_t)(eax - 8u) < 0;
        of = ((eax ^ 8u) & (eax ^ eax - 8u)) >> 0x1fu;
        goto L_103047b8;
    }
    wr32(sp0 - 0x5cu, 0u);
    wr32(sp0 - 0x60u, eax);
    wr32(sp0 - 0x64u, ebx);
    wr32(sp0 - 0x68u, sp0 - 0x4cu);
    g->eax = sp0 - 0x4cu;
    g->esp = sp0 - 0x58u;
    t12 = cow_call_regs(g, COW_IMG(0x10303d33u), g->eax, g->ecx, edx, 1, 4, sp0 - 0x4cu, ebx, eax, 0u);
    t13 = g->edx;
    if ((uint8_t)t12 == 0u)
    {
        eax = t12;
        edx = t13;
        goto L_103048a2;
    }
    edx = t13;
    t14 = rd32(sp0 - 0x40u);
    wr32(sp0 - 0x10u, t14);
    if ((int32_t)rd32(sp0 - 0x34u) >= 8)
    {
        eax = rd32(sp0 - 0x34u);
        ebx = t14;
        cf = rd32(sp0 - 0x34u) < 8u;
        pf = PARITY((uint8_t)(rd32(sp0 - 0x34u) - 8u));
        zf = rd32(sp0 - 0x34u) == 8u;
        sf = (int32_t)(rd32(sp0 - 0x34u) - 8u) < 0;
        of = ((rd32(sp0 - 0x34u) ^ 8u) & (rd32(sp0 - 0x34u) ^ rd32(sp0 - 0x34u) - 8u)) >> 0x1fu;
        loc_10 = t14;
        goto L_103047b8;
    }
    eax = rd32(sp0 - 0x34u);
    ebx = t14;
    ecx = 1u;
L_103047e8: ;
    wr32(sp0 - 0x5cu, ecx);
    wr32(sp0 - 0x60u, loc_18);
    wr32(sp0 - 0x64u, eax);
    wr32(sp0 - 0x68u, ebx);
    wr32(sp0 - 0x6cu, sp0 - 0x4cu);
    g->eax = sp0 - 0x4cu;
    g->esp = sp0 - 0x50u;
    t16 = cow_call_regs(g, COW_IMG(0x10303e1du), g->eax, ecx, edx, 1, 7, sp0 - 0x4cu, ebx, eax, loc_18, ecx, loc_58, loc_54);
    t17 = g->edx;
    wr32(sp0 + 4u, t16);
    if ((int32_t)t16 < 0)
    {
        eax = t16;
        edx = t17;
        goto L_103048a2;
    }
    edx = t17;
    t18 = rd32(sp0 - 0x40u);
    wr32(sp0 - 0x10u, t18);
    eax = rd32(sp0 - 0x34u);
    ebx = t18;
    loc_10 = t18;
L_1030480e: ;
    t19 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t19 & 0xfu);
    wr32(sp0 - 0x14u, (uint32_t)((int32_t)t19 >> 4u));
    if ((rd32(sp0 + 4u) & 0xfu) == 0u)
    {
        ecx = (uint32_t)((int32_t)t19 >> 4u);
        loc_14 = (uint32_t)((int32_t)t19 >> 4u);
        goto L_10304889;
    }
    ecx = (uint32_t)((int32_t)t19 >> 4u);
    wr32(sp0 - 8u, ecx + loc_8);
    if ((int32_t)eax >= (int32_t)rd32(sp0 + 4u))
    {
        loc_8 = ecx + loc_8;
        goto L_10304843;
    }
    loc_8 = ecx + loc_8;
    t20 = rd32(sp0 + 4u);
    wr32(sp0 - 0x5cu, t20);
    wr32(sp0 - 0x60u, eax);
    wr32(sp0 - 0x64u, ebx);
    wr32(sp0 - 0x68u, sp0 - 0x4cu);
    g->eax = sp0 - 0x4cu;
    g->esp = sp0 - 0x58u;
    t21 = cow_call_regs(g, COW_IMG(0x10303d33u), g->eax, g->ecx, edx, 1, 4, sp0 - 0x4cu, ebx, eax, t20);
    t22 = g->edx;
    if ((uint8_t)t21 == 0u)
    {
        eax = t21;
        edx = t22;
        goto L_103048a2;
    }
    t23 = rd32(sp0 - 0x40u);
    wr32(sp0 - 0x10u, t23);
    eax = rd32(sp0 - 0x34u);
    ebx = t23;
    loc_10 = t23;
L_10304843: ;
    t24 = eax - rd32(sp0 + 4u);
    if ((int32_t)((1u << (rd32(sp0 + 4u) & 0x1fu)) - 1u & (uint32_t)((int32_t)ebx >> ((t24 & 0x1fu) < 0x20u ? t24 & 0x1fu : 0x1fu))) >= (int32_t)rd32(COW_IMG(0x10349310u) + rd32(sp0 + 4u) * 4u))
    {
        eax = t24;
        edx = (1u << (rd32(sp0 + 4u) & 0x1fu)) - 1u & (uint32_t)((int32_t)ebx >> ((t24 & 0x1fu) < 0x20u ? t24 & 0x1fu : 0x1fu));
        cf = ((1u << (rd32(sp0 + 4u) & 0x1fu)) - 1u & (uint32_t)((int32_t)ebx >> ((t24 & 0x1fu) < 0x20u ? t24 & 0x1fu : 0x1fu))) < rd32(COW_IMG(0x10349310u) + rd32(sp0 + 4u) * 4u);
        pf = PARITY((uint8_t)(((1u << (rd32(sp0 + 4u) & 0x1fu)) - 1u & (uint32_t)((int32_t)ebx >> ((t24 & 0x1fu) < 0x20u ? t24 & 0x1fu : 0x1fu))) - rd32(COW_IMG(0x10349310u) + rd32(sp0 + 4u) * 4u)));
        zf = ((1u << (rd32(sp0 + 4u) & 0x1fu)) - 1u & (uint32_t)((int32_t)ebx >> ((t24 & 0x1fu) < 0x20u ? t24 & 0x1fu : 0x1fu))) == rd32(COW_IMG(0x10349310u) + rd32(sp0 + 4u) * 4u);
        sf = (int32_t)(((1u << (rd32(sp0 + 4u) & 0x1fu)) - 1u & (uint32_t)((int32_t)ebx >> ((t24 & 0x1fu) < 0x20u ? t24 & 0x1fu : 0x1fu))) - rd32(COW_IMG(0x10349310u) + rd32(sp0 + 4u) * 4u)) < 0;
        of = ((((1u << (rd32(sp0 + 4u) & 0x1fu)) - 1u & (uint32_t)((int32_t)ebx >> ((t24 & 0x1fu) < 0x20u ? t24 & 0x1fu : 0x1fu))) ^ rd32(COW_IMG(0x10349310u) + rd32(sp0 + 4u) * 4u)) & (((1u << (rd32(sp0 + 4u) & 0x1fu)) - 1u & (uint32_t)((int32_t)ebx >> ((t24 & 0x1fu) < 0x20u ? t24 & 0x1fu : 0x1fu))) ^ ((1u << (rd32(sp0 + 4u) & 0x1fu)) - 1u & (uint32_t)((int32_t)ebx >> ((t24 & 0x1fu) < 0x20u ? t24 & 0x1fu : 0x1fu))) - rd32(COW_IMG(0x10349310u) + rd32(sp0 + 4u) * 4u))) >> 0x1fu;
        ebx = edx;
    }
    else
    {
        eax = t24;
        ecx = rd32(sp0 + 4u) << 2u;
        edx = (1u << (rd32(sp0 + 4u) & 0x1fu)) - 1u & (uint32_t)((int32_t)ebx >> ((t24 & 0x1fu) < 0x20u ? t24 & 0x1fu : 0x1fu));
        ebx = edx + rd32(COW_IMG(0x10349350u) + ecx);
        cf = edx + rd32(COW_IMG(0x10349350u) + ecx) < rd32(COW_IMG(0x10349350u) + ecx);
        pf = PARITY((uint8_t)(edx + rd32(COW_IMG(0x10349350u) + ecx)));
        zf = edx + rd32(COW_IMG(0x10349350u) + ecx) == 0u;
        sf = (int32_t)(edx + rd32(COW_IMG(0x10349350u) + ecx)) < 0;
        of = ((rd32(COW_IMG(0x10349350u) + ecx) ^ edx + rd32(COW_IMG(0x10349350u) + ecx)) & (edx ^ edx + rd32(COW_IMG(0x10349350u) + ecx))) >> 0x1fu;
    }
    wr16(loc_24 + rd32(COW_IMG(0x10348738u) + loc_8 * 4u) * 2u, (uint16_t)(ebx << (loc_20 & 0x1fu)));
    edx = loc_24;
    ebx = loc_10;
L_10304891: ;
    wr32(sp0 - 8u, loc_8 + 1u);
    ecx = loc_8 + 1u;
    loc_8 = loc_8 + 1u;
    goto L_10304897;
L_103047b8: ;
    if (rd32(loc_18 + (uint8_t)(uint32_t)((int32_t)ebx >> ((eax - 8u & 0x1fu) < 0x20u ? eax - 8u & 0x1fu : 0x1fu)) * 4u + 0xd4u) == 0u)
    {
        edx = (uint8_t)(uint32_t)((int32_t)ebx >> ((eax - 8u & 0x1fu) < 0x20u ? eax - 8u & 0x1fu : 0x1fu));
        goto L_103047e5;
    }
    ecx = rd32(loc_18 + (uint8_t)(uint32_t)((int32_t)ebx >> ((eax - 8u & 0x1fu) < 0x20u ? eax - 8u & 0x1fu : 0x1fu)) * 4u + 0xd4u);
    edx = (uint8_t)(uint32_t)((int32_t)ebx >> ((eax - 8u & 0x1fu) < 0x20u ? eax - 8u & 0x1fu : 0x1fu));
    t15 = rd8(edx + loc_18 + 0x4d4u);
    wr32(sp0 + 4u, t15);
    eax = eax - ecx;
    goto L_1030480e;
L_103047e5: ;
    wr32(sp0 - 0x5cu, 9u);
    ecx = 9u;
    loc_4 = in_ebp;
    loc_50 = in_esi;
    loc_54 = in_edi;
    loc_58 = in_ebx;
    goto L_103047e8;
L_10304889: ;
    if (ecx != 0xfu) goto L_103048a6;
    wr32(sp0 - 8u, ecx + loc_8);
    loc_8 = ecx + loc_8;
    goto L_10304891;
L_103048a2: ;
    eax = eax & 0xffffff00u;
    goto L_10304917;
L_103048a6: ;
    t25 = 1u << (ecx & 0x1fu);
    wr32(sp0 + 4u, t25);
    wr32(sp0 - 0xcu, t25);
    if (loc_14 == 0u)
    {
        loc_c = t25;
        goto L_103048e9;
    }
    edx = t25;
    loc_c = t25;
    if ((int32_t)eax >= (int32_t)loc_14) goto L_103048d7;
    wr32(sp0 - 0x5cu, loc_14);
    wr32(sp0 - 0x60u, eax);
    wr32(sp0 - 0x64u, ebx);
    wr32(sp0 - 0x68u, sp0 - 0x4cu);
    g->eax = sp0 - 0x4cu;
    g->esp = sp0 - 0x58u;
    t26 = cow_call_regs(g, COW_IMG(0x10303d33u), g->eax, g->ecx, edx, 1, 4, sp0 - 0x4cu, ebx, eax, loc_14);
    t27 = g->edx;
    if ((uint8_t)t26 == 0u)
    {
        eax = t26;
        edx = t27;
        goto L_103048a2;
    }
    eax = rd32(sp0 - 0x34u);
    ebx = rd32(sp0 - 0x40u);
L_103048d7: ;
    t28 = loc_c + ((uint32_t)((int32_t)ebx >> ((eax - loc_14 & 0x1fu) < 0x20u ? eax - loc_14 & 0x1fu : 0x1fu)) & rd32(sp0 + 4u) - 1u);
    wr32(sp0 - 0xcu, t28);
    eax = eax - loc_14;
    loc_c = t28;
L_103048e9: ;
    wr32(sp0 - 0xcu, loc_c - 1u);
    loc_c = loc_c - 1u;
    goto L_103048ec;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_103046f3(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_103046f3(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
