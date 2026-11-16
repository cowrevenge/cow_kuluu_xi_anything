/* f_0x103044f6 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=2 */
uint32_t cow_fn_103044f6(Guest* g)
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
    uint32_t loc_54;
    uint32_t loc_58;
    uint32_t loc_5c;
    uint32_t loc_60;
    uint32_t loc_64;
    uint32_t loc_68;
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
    cow_frame(g, sp0, 128u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x60u, in_ebx);
    wr32(sp0 - 0x64u, in_edi);
    t1 = rd32(rd32(sp0 + 4u) + 0x194u);
    wr32(sp0 - 0xcu, t1);
    t2 = rd32(rd32(sp0 + 4u) + 0x174u);
    wr32(sp0 - 0x1cu, t2);
    if (rd32(rd32(sp0 + 4u) + 0xfcu) == 0u)
    {
        eax = t1;
        ebx = rd32(sp0 + 4u);
        loc_c = t1;
        loc_1c = t2;
        goto L_10304534;
    }
    eax = t1;
    ecx = t2;
    ebx = rd32(sp0 + 4u);
    loc_c = t1;
    loc_1c = t2;
    if (rd32(eax + 0x34u) != 0u) goto L_10304534;
    g->edi = ebx;
    g->edx = in_edx;
    g->esp = sp0 - 0x64u;
    t3 = cow_stdcall(g, COW_IMG(0x1030449bu), 0);
    t4 = g->edx;
    if ((uint8_t)t3 == 0u)
    {
        eax = t3;
        edx = t4;
        esi = in_esi;
        loc_4 = in_ebp;
        loc_60 = in_ebx;
        loc_64 = in_edi;
        goto L_103046eb;
    }
    eax = rd32(sp0 - 0xcu);
L_10304534: ;
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x40u, ebx);
    t5 = rd32(rd32(ebx + 0x14u));
    wr32(sp0 - 0x5cu, t5);
    t6 = rd32(rd32(ebx + 0x14u) + 4u);
    wr32(sp0 - 0x58u, t6);
    t7 = rd32(ebx + 0x178u);
    wr32(sp0 - 0x54u, t7);
    wr32(sp0 - 0x68u, in_esi);
    t8 = rd32(eax + 0x10u);
    t9 = rd32(eax + 0x14u);
    t10 = rd32(ebx + 0x13cu);
    wr32(sp0 + 4u, t8);
    wr32(sp0 - 0x3cu, eax + 0x18u);
    wr32(sp0 - 0x6cu, 5u);
    esi = eax + 0x20u;
    edi = sp0 - 0x34u;
    ecx = 5u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    if ((int32_t)t10 <= 0)
    {
        edx = t9;
        loc_5c = t5;
        loc_58 = t6;
        loc_54 = t7;
        goto L_103046b7;
    }
    edx = t9;
    loc_5c = t5;
    loc_58 = t6;
    loc_54 = t7;
    wr32(sp0 - 0x14u, ebx + 0x140u);
    loc_10 = 0u;
    loc_14 = ebx + 0x140u;
L_10304583: ;
    t11 = rd32(arg2 + loc_10 * 4u);
    wr32(sp0 - 0x20u, t11);
    wr32(sp0 - 0x18u, rd32(loc_14));
    if ((int32_t)edx >= 8)
    {
        edi = rd32(eax + rd32(rd32(ebx + rd32(loc_14) * 4u + 0x124u) + 0x14u) * 4u + 0x38u);
        cf = edx < 8u;
        pf = PARITY((uint8_t)(edx - 8u));
        zf = edx == 8u;
        sf = (int32_t)(edx - 8u) < 0;
        of = ((edx ^ 8u) & (edx ^ edx - 8u)) >> 0x1fu;
        loc_20 = t11;
        loc_18 = rd32(loc_14);
        goto L_103045da;
    }
    ecx = rd32(rd32(ebx + rd32(loc_14) * 4u + 0x124u) + 0x14u);
    edi = rd32(eax + rd32(rd32(ebx + rd32(loc_14) * 4u + 0x124u) + 0x14u) * 4u + 0x38u);
    loc_20 = t11;
    loc_18 = rd32(loc_14);
    wr32(sp0 - 0x6cu, 0u);
    wr32(sp0 - 0x70u, edx);
    t12 = rd32(sp0 + 4u);
    wr32(sp0 - 0x74u, t12);
    wr32(sp0 - 0x78u, sp0 - 0x5cu);
    g->ecx = ecx;
    g->esp = sp0 - 0x68u;
    t13 = cow_call_regs(g, COW_IMG(0x10303d33u), g->eax, g->ecx, edx, 1, 4, sp0 - 0x5cu, t12, edx, 0u);
    t14 = g->ecx;
    t15 = g->edx;
    if ((uint8_t)t13 == 0u)
    {
        eax = t13;
        edx = t15;
        goto L_103046ef;
    }
    ecx = t14;
    t16 = rd32(sp0 - 0x50u);
    t17 = rd32(sp0 - 0x44u);
    wr32(sp0 + 4u, t16);
    if ((int32_t)t17 >= 8)
    {
        edx = t17;
        cf = t17 < 8u;
        pf = PARITY((uint8_t)(t17 - 8u));
        zf = t17 == 8u;
        sf = (int32_t)(t17 - 8u) < 0;
        of = ((t17 ^ 8u) & (t17 ^ t17 - 8u)) >> 0x1fu;
        goto L_103045d7;
    }
    edx = t17;
    eax = 1u;
L_10304602: ;
    wr32(sp0 - 0x6cu, eax);
    wr32(sp0 - 0x70u, edi);
    wr32(sp0 - 0x74u, edx);
    t18 = rd32(sp0 + 4u);
    wr32(sp0 - 0x78u, t18);
    wr32(sp0 - 0x7cu, sp0 - 0x5cu);
    g->esp = sp0 - 0x60u;
    t19 = cow_call_regs(g, COW_IMG(0x10303e1du), g->eax, ecx, edx, 1, 7, sp0 - 0x5cu, t18, edx, edi, eax, loc_68, loc_64);
    t20 = g->ecx;
    t21 = g->edx;
    if ((int32_t)t19 < 0)
    {
        eax = t19;
        edx = t21;
        goto L_103046ef;
    }
    ecx = t20;
    esi = t19;
    t22 = rd32(sp0 - 0x50u);
    t23 = rd32(sp0 - 0x44u);
    wr32(sp0 + 4u, t22);
    eax = rd32(sp0 - 0xcu);
    edx = t23;
L_1030462a: ;
    if (esi == 0u) goto L_1030468b;
    if ((int32_t)edx >= (int32_t)esi) goto L_10304657;
    wr32(sp0 - 0x6cu, esi);
    wr32(sp0 - 0x70u, edx);
    t24 = rd32(sp0 + 4u);
    wr32(sp0 - 0x74u, t24);
    wr32(sp0 - 0x78u, sp0 - 0x5cu);
    g->esp = sp0 - 0x68u;
    t25 = cow_call_regs(g, COW_IMG(0x10303d33u), g->eax, g->ecx, edx, 1, 4, sp0 - 0x5cu, t24, edx, esi);
    t26 = g->edx;
    if ((uint8_t)t25 == 0u)
    {
        eax = t25;
        edx = t26;
        goto L_103046ef;
    }
    t27 = rd32(sp0 - 0x50u);
    t28 = rd32(sp0 - 0x44u);
    wr32(sp0 + 4u, t27);
    eax = rd32(sp0 - 0xcu);
    edx = t28;
L_10304657: ;
    wr32(sp0 - 8u, 1u);
    t29 = 1u << (esi & 0x1fu);
    wr32(sp0 - 8u, t29);
    wr32(sp0 - 8u, t29 - 1u);
    if ((int32_t)(t29 - 1u & (uint32_t)((int32_t)rd32(sp0 + 4u) >> ((edx - esi & 0x1fu) < 0x20u ? edx - esi & 0x1fu : 0x1fu))) >= (int32_t)rd32(COW_IMG(0x10349310u) + esi * 4u))
    {
        ecx = t29 - 1u & (uint32_t)((int32_t)rd32(sp0 + 4u) >> ((edx - esi & 0x1fu) < 0x20u ? edx - esi & 0x1fu : 0x1fu));
        edx = edx - esi;
        esi = ecx;
    }
    else
    {
        ecx = t29 - 1u & (uint32_t)((int32_t)rd32(sp0 + 4u) >> ((edx - esi & 0x1fu) < 0x20u ? edx - esi & 0x1fu : 0x1fu));
        edx = edx - esi;
        esi = esi << 2u;
        esi = ecx + rd32(COW_IMG(0x10349350u) + esi);
    }
L_1030468b: ;
    wr32(sp0 - 0x14u, loc_14 + 4u);
    wr32(loc_18 * 4u + sp0 - 0x30u, esi + rd32(loc_18 * 4u + sp0 - 0x30u));
    wr32(sp0 - 0x10u, loc_10 + 1u);
    wr16(loc_20, (uint16_t)(rd32(loc_18 * 4u + sp0 - 0x30u) << (loc_1c & 0x1fu)));
    if ((int32_t)(loc_10 + 1u) < (int32_t)rd32(ebx + 0x13cu))
    {
        loc_10 = loc_10 + 1u;
        loc_14 = loc_14 + 4u;
        goto L_10304583;
    }
L_103046b7: ;
    wr32(rd32(ebx + 0x14u), loc_5c);
    wr32(rd32(ebx + 0x14u) + 4u, loc_58);
    wr32(ebx + 0x178u, loc_54);
    t30 = rd32(sp0 + 4u);
    wr32(eax + 0x34u, rd32(eax + 0x34u) - 1u);
    wr32(eax + 0x10u, t30);
    wr32(sp0 - 0x6cu, 5u);
    wr32(eax + 0x14u, edx);
    esi = sp0 - 0x34u;
    edi = eax + 0x20u;
    ecx = 5u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    eax = (eax & 0xffffff00u) | 1u;
    loc_4 = in_ebp;
    loc_60 = in_ebx;
    loc_64 = in_edi;
    loc_68 = in_esi;
L_103046ea: ;
    esi = loc_68;
L_103046eb: ;
    g->ebx = loc_60;
    g->esi = esi;
    g->edi = loc_64;
    g->ebp = loc_4;
    g->edx = edx;
    return eax;
L_103045d7: ;
    eax = rd32(sp0 - 0xcu);
L_103045da: ;
    if (rd32(edi + (uint8_t)(uint32_t)((int32_t)rd32(sp0 + 4u) >> ((edx - 8u & 0x1fu) < 0x20u ? edx - 8u & 0x1fu : 0x1fu)) * 4u + 0xd4u) == 0u)
    {
        ecx = rd32(edi + (uint8_t)(uint32_t)((int32_t)rd32(sp0 + 4u) >> ((edx - 8u & 0x1fu) < 0x20u ? edx - 8u & 0x1fu : 0x1fu)) * 4u + 0xd4u);
        goto L_103045ff;
    }
    ecx = rd32(edi + (uint8_t)(uint32_t)((int32_t)rd32(sp0 + 4u) >> ((edx - 8u & 0x1fu) < 0x20u ? edx - 8u & 0x1fu : 0x1fu)) * 4u + 0xd4u);
    esi = (uint8_t)(uint32_t)((int32_t)rd32(sp0 + 4u) >> ((edx - 8u & 0x1fu) < 0x20u ? edx - 8u & 0x1fu : 0x1fu));
    edx = edx - ecx;
    esi = rd8(edi + esi + 0x4d4u);
    goto L_1030462a;
L_103045ff: ;
    wr32(sp0 - 0x6cu, 9u);
    eax = 9u;
    loc_4 = in_ebp;
    loc_60 = in_ebx;
    loc_64 = in_edi;
    loc_68 = in_esi;
    goto L_10304602;
L_103046ef: ;
    eax = eax & 0xffffff00u;
    goto L_103046ea;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_103044f6(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_103044f6(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
