/* f_0x103032f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_103032f0(Guest* g)
{
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
    uint32_t loc_28;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1030330eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; zf = g->zf; in_esi = rd32(sp0 - 0x30u); in_ebx = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x30u); goto E_1030330e;
    case 0x1030331bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; zf = g->zf; in_esi = rd32(sp0 - 0x30u); in_ebx = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x30u); goto E_1030331b;
    case 0x1030331du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; zf = g->zf; in_esi = rd32(sp0 - 0x30u); in_ebx = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x30u); goto E_1030331d;
    case 0x1030332bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; zf = g->zf; in_esi = rd32(sp0 - 0x30u); in_ebx = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x30u); goto E_1030332b;
    case 0x10303339u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; zf = g->zf; in_esi = rd32(sp0 - 0x30u); in_ebx = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x30u); goto E_10303339;
    case 0x1030333du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; zf = g->zf; in_esi = rd32(sp0 - 0x30u); in_ebx = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x30u); goto E_1030333d;
    case 0x10303352u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); in_ebx = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x2cu); g->edi = rd32(sp0 - 0x34u); g->esi = rd32(sp0 - 0x30u); goto E_10303352;
    case 0x1030335bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); in_ebx = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x2cu); g->edi = rd32(sp0 - 0x34u); g->esi = rd32(sp0 - 0x30u); goto E_1030335b;
    case 0x10303365u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); in_ebx = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x2cu); g->edi = rd32(sp0 - 0x34u); g->esi = rd32(sp0 - 0x30u); goto E_10303365;
    case 0x1030338fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); in_ebx = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x2cu); g->edi = rd32(sp0 - 0x34u); g->esi = rd32(sp0 - 0x30u); goto E_1030338f;
    case 0x10303397u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); in_ebx = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x2cu); g->edi = rd32(sp0 - 0x34u); g->esi = rd32(sp0 - 0x30u); goto E_10303397;
    case 0x103033a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); in_ebx = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x2cu); g->edi = rd32(sp0 - 0x34u); g->esi = rd32(sp0 - 0x30u); goto E_103033a8;
    case 0x103033abu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); in_ebx = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x2cu); g->edi = rd32(sp0 - 0x34u); g->esi = rd32(sp0 - 0x30u); goto E_103033ab;
    case 0x103033d1u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); in_ebx = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x2cu); g->edi = rd32(sp0 - 0x34u); g->esi = rd32(sp0 - 0x30u); goto E_103033d1;
    case 0x103033d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); in_ebx = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x2cu); g->edi = rd32(sp0 - 0x34u); g->esi = rd32(sp0 - 0x30u); goto E_103033d4;
    case 0x103033e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); in_ebx = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x2cu); g->edi = rd32(sp0 - 0x34u); g->esi = rd32(sp0 - 0x30u); goto E_103033e6;
    case 0x1030340au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); in_ebx = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x2cu); g->edi = rd32(sp0 - 0x34u); g->esi = rd32(sp0 - 0x30u); goto E_1030340a;
    case 0x10303422u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); in_ebx = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x2cu); g->edi = rd32(sp0 - 0x34u); g->esi = rd32(sp0 - 0x30u); goto E_10303422;
    case 0x10303425u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); in_ebx = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x2cu); g->edi = rd32(sp0 - 0x34u); g->esi = rd32(sp0 - 0x30u); goto E_10303425;
    case 0x1030343bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); in_ebx = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x2cu); g->edi = rd32(sp0 - 0x34u); g->esi = rd32(sp0 - 0x30u); goto E_1030343b;
    default: break;
    }
#endif

    COW_AT(103032f0)
    t1 = rd32(rd32(sp0 + 4u) + 0x184u);
    t2 = rd32(rd32(sp0 + 4u) + 0x118u);
    t3 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t1);
    edx = in_edx;
    ebx = t2 - 1u;
    esi = t3;
    loc_28 = t2 - 1u;
L_1030330e: ;
    COW_AT(1030330e)
    if ((int32_t)rd32(esi + 0x7cu) < (int32_t)rd32(esi + 0x84u))
    {
        ecx = rd32(esi + 0x84u);
        goto L_1030332b;
    }
    ecx = rd32(esi + 0x84u);
    zf = rd32(esi + 0x7cu) == rd32(esi + 0x84u);
    COW_AT(1030331b)
    if (!zf) goto L_1030333d;
    COW_AT(1030331d)
    if (rd32(esi + 0x80u) > rd32(esi + 0x88u)) goto L_1030333d;
L_1030332b: ;
    COW_AT(1030332b)
    g->eax = rd32(esi + 0x18cu);
    g->edx = edx;
    t19 = rd32(esi + 0x18cu);
    g->esp = sp0 - 0x30u;
    t20 = cow_thiscall_cdecl(g, rd32(t19), ecx, 1, esi);
    t21 = g->edx;
    if (t20 != 0u)
    {
        edx = t21;
        goto L_1030330e;
    }
    eax = t20;
    edx = t21;
L_10303339: ;
    COW_AT(10303339)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
L_1030333d: ;
    COW_AT(1030333d)
    if ((int32_t)rd32(esi + 0x20u) > 0)
    {
        edi = rd32(esi + 0xc4u);
    COW_AT(10303352)
        t4 = rd32(sp0 + 4u) + 0x48u;
        loc_8 = 0u;
        loc_18 = t4;
        loc_10 = rd32(sp0 - 0x10u);
L_1030335b: ;
    COW_AT(1030335b)
        if (rd8(edi + 0x30u) != 0u)
        {
    COW_AT(10303365)
            t5 = rd32(edi + 0xcu);
            t6 = rd32(esi + 0x88u) * rd32(edi + 0xcu);
            g->eax = loc_18;
            g->edx = t6;
            g->esp = sp0 - 0x34u;
            t7 = cow_thiscall_cdecl(g, rd32(rd32(esi + 4u) + 0x20u), rd32(esi + 4u), 5, esi, rd32(loc_18), t6, t5, 0u);
            t8 = g->edx;
            if (rd32(esi + 0x88u) >= ebx)
            {
                loc_20 = t7;
    COW_AT(10303397)
                t10 = cow_divu(g, rd32(edi + 0x20u), rd32(edi + 0xcu));
                t11 = cow_modu(g, rd32(edi + 0x20u), rd32(edi + 0xcu));
                t12 = rd32(edi + 0xcu);
                wr32(sp0 + 4u, t11);
                if (t11 != 0u)
                {
                    edx = t11;
                }
                else
                {
                    ecx = t12;
                    edx = t11;
    COW_AT(103033a8)
                    wr32(sp0 + 4u, ecx);
                }
            }
            else
            {
                edx = t8;
                loc_20 = t7;
    COW_AT(1030338f)
                t9 = rd32(edi + 0xcu);
                wr32(sp0 + 4u, t9);
            }
    COW_AT(103033ab)
            t13 = rd32(loc_8 * 4u + rd32(esi + 0x198u) + 4u);
            t14 = rd32(arg2 + loc_8 * 4u);
            if ((int32_t)rd32(sp0 + 4u) > 0)
            {
                loc_24 = t13;
                loc_14 = t14;
    COW_AT(103033d1)
                eax = rd32(edi + 0x1cu);
                ecx = 0u;
                loc_1c = 0u;
L_103033d4: ;
    COW_AT(103033d4)
                t15 = rd32(ecx * 4u + loc_20);
                if (eax == 0u)
                {
                    loc_10 = 0u;
                    goto L_1030340a;
                }
                ecx = t15;
                edx = loc_20;
                ebx = 0u;
                loc_10 = 0u;
                loc_c = t15;
L_103033e6: ;
    COW_AT(103033e6)
                g->edx = edx;
                g->esp = sp0 - 0x34u;
                cow_thiscall_cdecl(g, loc_24, ecx, 5, esi, edi, loc_c, loc_14, ebx);
                t16 = g->ecx;
                t17 = g->edx;
                if (loc_10 + 1u < rd32(edi + 0x1cu))
                {
                    eax = rd32(edi + 0x1cu);
                    ecx = t16;
                    edx = t17;
                    ebx = ebx + rd32(edi + 0x24u);
                    loc_10 = loc_10 + 1u;
                    loc_c = loc_c + 0x80u;
                    goto L_103033e6;
                }
                eax = rd32(edi + 0x1cu);
                loc_10 = loc_10 + 1u;
L_1030340a: ;
    COW_AT(1030340a)
                t18 = loc_14 + rd32(edi + 0x24u) * 4u;
                if ((int32_t)(loc_1c + 1u) < (int32_t)rd32(sp0 + 4u))
                {
                    ecx = loc_1c + 1u;
                    loc_14 = t18;
                    loc_1c = loc_1c + 1u;
                    goto L_103033d4;
                }
                edx = loc_14;
    COW_AT(10303422)
                ebx = loc_28;
            }
        }
    COW_AT(10303425)
        if ((int32_t)(loc_8 + 1u) < (int32_t)rd32(esi + 0x20u))
        {
            edi = edi + 0x54u;
            loc_8 = loc_8 + 1u;
            loc_18 = loc_18 + 4u;
            goto L_1030335b;
        }
    }
    COW_AT(1030343b)
    wr32(esi + 0x88u, rd32(esi + 0x88u) + 1u);
    eax = -(rd32(esi + 0x88u) < rd32(esi + 0x118u)) + 4u;
    goto L_10303339;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_103032f0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1030330eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        in_esi = rd32(sp0 - 0x30u);
        in_ebx = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x30u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1030331bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        in_esi = rd32(sp0 - 0x30u);
        in_ebx = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x30u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1030331du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        in_esi = rd32(sp0 - 0x30u);
        in_ebx = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x30u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1030332bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        in_esi = rd32(sp0 - 0x30u);
        in_ebx = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x30u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10303339u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        in_esi = rd32(sp0 - 0x30u);
        in_ebx = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x30u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1030333du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        in_esi = rd32(sp0 - 0x30u);
        in_ebx = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x30u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10303352u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        in_ebx = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x34u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1030335bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        in_ebx = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x34u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10303365u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        in_ebx = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x34u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1030338fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        in_ebx = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x34u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10303397u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        in_ebx = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x34u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103033a8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        in_ebx = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x34u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103033abu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        in_ebx = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x34u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103033d1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        in_ebx = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x34u;
        g->ecx = 0u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x1cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x103033d4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        in_ebx = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x34u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103033e6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        in_ebx = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x34u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1030340au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        in_ebx = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x34u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10303422u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        in_ebx = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x34u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10303425u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        in_ebx = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x34u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1030343bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        in_ebx = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x34u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_103032f0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_103032f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
