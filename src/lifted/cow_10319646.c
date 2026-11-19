/* f_0x10319646 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10319646(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_4;
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
    uint32_t t3;
    uint32_t t4;
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
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 52u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10319662u: eax = g->eax; ecx = g->ecx; esi = g->esi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10319662;
    case 0x1031968fu: eax = g->eax; ecx = g->ecx; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1031968f;
    case 0x10319694u: eax = g->eax; ecx = g->ecx; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10319694;
    case 0x1031969bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1031969b;
    case 0x103196b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_103196b1;
    case 0x103196cau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_103196ca;
    case 0x103196d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_103196d7;
    case 0x103196ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_103196eb;
    case 0x103196f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_103196f4;
    case 0x103196fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_103196fb;
    case 0x10319703u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10319703;
    case 0x1031971bu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_c = rd32(sp0 - 0xcu); goto E_1031971b;
    case 0x1031971fu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_c = rd32(sp0 - 0xcu); goto E_1031971f;
    case 0x10319724u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_c = rd32(sp0 - 0xcu); goto E_10319724;
    case 0x10319728u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_c = rd32(sp0 - 0xcu); goto E_10319728;
    case 0x1031972au: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_c = rd32(sp0 - 0xcu); goto E_1031972a;
    case 0x10319742u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; loc_c = rd32(sp0 - 0xcu); goto E_10319742;
    case 0x1031974fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; loc_c = rd32(sp0 - 0xcu); goto E_1031974f;
    case 0x10319753u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; loc_c = rd32(sp0 - 0xcu); goto E_10319753;
    case 0x1031975eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; loc_c = rd32(sp0 - 0xcu); goto E_1031975e;
    case 0x10319764u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; loc_c = rd32(sp0 - 0xcu); goto E_10319764;
    case 0x1031976du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; loc_c = rd32(sp0 - 0xcu); goto E_1031976d;
    case 0x10319773u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; loc_c = rd32(sp0 - 0xcu); goto E_10319773;
    case 0x1031977cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; loc_c = rd32(sp0 - 0xcu); goto E_1031977c;
    case 0x1031979au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_1031979a;
    case 0x103197a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_103197a4;
    case 0x103197aau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_103197aa;
    case 0x103197b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_103197b3;
    case 0x103197bau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_103197ba;
    case 0x103197c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_103197c6;
    case 0x103197cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_103197cb;
    case 0x103197d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; loc_c = rd32(sp0 - 0xcu); goto E_103197d1;
    case 0x103197d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_103197d6;
    case 0x103197ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_103197eb;
    case 0x103197eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; loc_c = rd32(sp0 - 0xcu); goto E_103197ee;
    case 0x103197efu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; loc_c = rd32(sp0 - 0xcu); goto E_103197ef;
    case 0x103197fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_c = rd32(sp0 - 0xcu); goto E_103197fb;
    case 0x103197fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; loc_c = rd32(sp0 - 0xcu); goto E_103197fd;
    case 0x10319809u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_c = rd32(sp0 - 0xcu); goto E_10319809;
    case 0x1031980du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_c = rd32(sp0 - 0xcu); goto E_1031980d;
    case 0x10319813u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_c = rd32(sp0 - 0xcu); goto E_10319813;
    case 0x10319818u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_4 = rd32(sp0 - 4u); goto E_10319818;
    case 0x1031981au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_4 = rd32(sp0 - 4u); goto E_1031981a;
    default: break;
    }
#endif

    COW_AT(10319646)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    if (rd32(sp0 + 0xcu) == 0u)
    {
        edx = arg2;
        loc_4 = in_ebp;
        loc_14 = in_ebx;
        loc_18 = in_esi;
        loc_1c = in_edi;
        goto L_10319818;
    }
    COW_AT(10319662)
    if ((rd8((arg1 & 0x1fu) * 0x24u + rd32(COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u) + 4u) & 2u) != 0u)
    {
        edx = arg2;
        loc_4 = in_ebp;
        loc_14 = in_ebx;
        loc_18 = in_esi;
        loc_1c = in_edi;
        goto L_10319818;
    }
    eax = (arg1 & 0x1fu) * 0x24u + rd32(COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u);
    ecx = ((uint32_t)((int32_t)arg1 >> 5u) & 0xffffff00u) | rd8((arg1 & 0x1fu) * 0x24u + rd32(COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u) + 4u);
    COW_AT(1031968f)
    if ((ecx & 0x48u) == 0u)
    {
        edx = arg2;
        loc_c = 0u;
    }
    else
    {
    COW_AT(10319694)
        if (rd8(eax + 5u) == 0xau)
        {
            edx = arg2;
            loc_c = 0u;
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(eax + 5u);
    COW_AT(1031969b)
            wr32(sp0 + 0xcu, rd32(sp0 + 0xcu) - 1u);
            wr8(arg2, (uint8_t)eax);
            wr32(sp0 - 0xcu, 1u);
            wr8((arg1 & 0x1fu) * 0x24u + rd32(COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u) + 5u, 0xau);
            edx = arg2 + 1u;
            loc_c = 1u;
        }
    }
    COW_AT(103196b1)
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, sp0 - 0x10u);
    t1 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x28u, t1);
    wr32(sp0 - 0x2cu, edx);
    t2 = rd32((arg1 & 0x1fu) * 0x24u + rd32(COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u));
    wr32(sp0 - 0x30u, t2);
    g->eax = rd32(COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u);
    g->ecx = ecx;
    g->edx = edx;
    t3 = rd32(COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u);
    g->esp = sp0 - 0x1cu;
    t4 = cow_stdcall(g, rd32(COW_IMG(0x10329214u)), 5, t2, edx, t1, sp0 - 0x10u, 0u);   /* kernel32.dll!ReadFile */
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 != 0u) goto L_10319703;
    eax = t4;
    ecx = t5;
    edx = t6;
    COW_AT(103196ca)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t7 = cow_stdcall(g, rd32(COW_IMG(0x10329168u)), 0);   /* kernel32.dll!GetLastError */
    t8 = g->ecx;
    t9 = g->edx;
    wr32(sp0 - 0x20u, 5u);
    if (t7 != 5u)
    {
        eax = t7;
        ecx = t8;
        edx = t9;
        goto L_103196eb;
    }
    eax = t7;
    ecx = t8;
    edx = t9;
    COW_AT(103196d7)
    g->eax = eax;
    g->esp = sp0 - 0x1cu;
    t10 = cow_fastcall(g, COW_IMG(0x10319c89u), ecx, edx, 0);
    t11 = g->ecx;
    t12 = g->edx;
    wr32(t10, 9u);
    t13 = cow_fastcall(g, COW_IMG(0x10319c92u), t11, t12, 0);
    t14 = g->edx;
    wr32(t13, 5u);
    eax = t13;
    edx = t14;
L_103196fb: ;
    COW_AT(103196fb)
    eax = 0xffffffffu;
    loc_4 = rd32(sp0 - 4u);
    loc_14 = rd32(sp0 - 0x14u);
    loc_18 = rd32(sp0 - 0x18u);
    loc_1c = rd32(sp0 - 0x1cu);
L_1031981a: ;
    COW_AT(1031981a)
    g->ebx = loc_14;
    g->esi = loc_18;
    g->edi = loc_1c;
    g->ebp = loc_4;
    g->edx = edx;
    return eax;
L_103196eb: ;
    COW_AT(103196eb)
    if (eax == 0x6du)
    {
        loc_4 = rd32(sp0 - 4u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
        goto L_10319818;
    }
    COW_AT(103196f4)
    wr32(sp0 - 0x20u, eax);
    g->eax = eax;
    g->esp = sp0 - 0x1cu;
    t15 = cow_call_regs(g, COW_IMG(0x10319c16u), g->eax, ecx, edx, 1, 1, eax);
    t16 = g->edx;
    eax = t15;
    edx = t16;
    goto L_103196fb;
L_10319703: ;
    COW_AT(10319703)
    t17 = rd32(sp0 - 0xcu) + rd32(sp0 - 0x10u);
    wr32(sp0 - 0xcu, t17);
    if ((rd8((arg1 & 0x1fu) * 0x24u + rd32(COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u) + 4u) & 0x80u) == 0u)
    {
        edx = rd32(sp0 - 0x10u);
        loc_c = t17;
    }
    else
    {
        eax = (rd32(COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u) & 0xffffff00u) | rd8((arg1 & 0x1fu) * 0x24u + rd32(COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u) + 4u);
        ecx = (arg1 & 0x1fu) * 0x24u + rd32(COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u) + 4u;
        edx = rd32(sp0 - 0x10u);
        loc_c = t17;
    COW_AT(1031971b)
        if (edx == 0u) goto L_10319728;
    COW_AT(1031971f)
        if (rd8(arg2) != 0xau) goto L_10319728;
    COW_AT(10319724)
        eax = (eax & 0xffffff00u) | (uint8_t)(eax | 4u);
L_1031972a: ;
    COW_AT(1031972a)
        wr8(ecx, (uint8_t)eax);
        wr32(sp0 + 0xcu, arg2);
        wr32(sp0 - 0xcu, arg2 + loc_c);
        if (arg2 >= arg2 + loc_c)
        {
            ebx = arg2;
            goto L_1031980d;
        }
        ecx = arg2 + loc_c;
        ebx = arg2;
        loc_c = arg2 + loc_c;
L_10319742: ;
    COW_AT(10319742)
        if (rd8(rd32(sp0 + 0xcu)) == 0x1au) goto L_103197fd;
        eax = (rd32(sp0 + 0xcu) & 0xffffff00u) | rd8(rd32(sp0 + 0xcu));
    COW_AT(1031974f)
        if ((uint8_t)eax == 0xdu)
        {
    COW_AT(1031975e)
            if (rd32(sp0 + 0xcu) >= ecx - 1u)
            {
                ecx = ecx - 1u;
                goto L_1031977c;
            }
    COW_AT(10319764)
            if (rd8(rd32(sp0 + 0xcu) + 1u) != 0xau)
            {
                eax = rd32(sp0 + 0xcu) + 1u;
                goto L_10319773;
            }
    COW_AT(1031976d)
            wr32(sp0 + 0xcu, rd32(sp0 + 0xcu) + 2u);
L_103197d1: ;
    COW_AT(103197d1)
            wr8(ebx, 0xau);
L_103197ee: ;
    COW_AT(103197ee)
            ebx = ebx + 1u;
        }
        else
        {
    COW_AT(10319753)
            wr8(ebx, (uint8_t)eax);
            wr32(sp0 + 0xcu, rd32(sp0 + 0xcu) + 1u);
            ebx = ebx + 1u;
        }
L_103197ef: ;
    COW_AT(103197ef)
        if (rd32(sp0 + 0xcu) < loc_c)
        {
            ecx = loc_c;
            goto L_10319742;
        }
    COW_AT(103197fb)
L_1031980d: ;
    COW_AT(1031980d)
        wr32(sp0 - 0xcu, ebx - arg2);
        loc_c = ebx - arg2;
    }
    COW_AT(10319813)
    eax = loc_c;
    loc_4 = rd32(sp0 - 4u);
    loc_14 = rd32(sp0 - 0x14u);
    loc_18 = rd32(sp0 - 0x18u);
    loc_1c = rd32(sp0 - 0x1cu);
    goto L_1031981a;
L_10319728: ;
    COW_AT(10319728)
    eax = (eax & 0xffffff00u) | (eax & 0xfbu);
    goto L_1031972a;
L_10319773: ;
    COW_AT(10319773)
    wr8(ebx, 0xdu);
    wr32(sp0 + 0xcu, eax);
    ebx = ebx + 1u;
    goto L_103197ef;
L_1031977c: ;
    COW_AT(1031977c)
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, sp0 - 0x10u);
    wr32(sp0 + 0xcu, rd32(sp0 + 0xcu) + 1u);
    wr32(sp0 - 0x28u, 1u);
    wr32(sp0 - 0x2cu, sp0 - 5u);
    t18 = rd32((arg1 & 0x1fu) * 0x24u + rd32(COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u));
    wr32(sp0 - 0x30u, t18);
    g->eax = rd32(COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u);
    g->ecx = ecx;
    g->edx = edx;
    t19 = rd32(COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u);
    g->esp = sp0 - 0x1cu;
    t20 = cow_stdcall(g, rd32(COW_IMG(0x10329214u)), 5, t18, sp0 - 5u, 1u, sp0 - 0x10u, 0u);   /* kernel32.dll!ReadFile */
    t21 = g->ecx;
    t22 = g->edx;
    if (t20 != 0u)
    {
        ecx = t21;
        edx = t22;
        goto L_103197a4;
    }
    eax = t20;
    ecx = t21;
    edx = t22;
    COW_AT(1031979a)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t23 = cow_stdcall(g, rd32(COW_IMG(0x10329168u)), 0);   /* kernel32.dll!GetLastError */
    t24 = g->ecx;
    t25 = g->edx;
    if (t23 != 0u)
    {
        edx = t25;
        goto L_103197eb;
    }
    ecx = t24;
    edx = t25;
L_103197a4: ;
    COW_AT(103197a4)
    if (rd32(sp0 - 0x10u) == 0u) goto L_103197eb;
    COW_AT(103197aa)
    if ((rd8((arg1 & 0x1fu) * 0x24u + rd32(COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u) + 4u) & 0x48u) == 0u)
    {
        eax = rd32(COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u);
        goto L_103197c6;
    }
    eax = rd32(COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u);
    COW_AT(103197b3)
    if (rd8(sp0 - 5u) == 0xau)
    {
        loc_c = rd32(sp0 - 0xcu);
        goto L_103197d1;
    }
    eax = (eax & 0xffffff00u) | rd8(sp0 - 5u);
    COW_AT(103197ba)
    wr8(ebx, 0xdu);
    wr8((arg1 & 0x1fu) * 0x24u + rd32(COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u) + 5u, (uint8_t)eax);
    ebx = ebx + 1u;
    loc_c = rd32(sp0 - 0xcu);
    goto L_103197ef;
L_103197c6: ;
    COW_AT(103197c6)
    if (ebx != arg2) goto L_103197d6;
    COW_AT(103197cb)
    if (rd8(sp0 - 5u) != 0xau) goto L_103197d6;
    loc_c = rd32(sp0 - 0xcu);
    goto L_103197d1;
L_103197d6: ;
    COW_AT(103197d6)
    wr32(sp0 - 0x20u, 1u);
    wr32(sp0 - 0x24u, 0xffffffffu);
    wr32(sp0 - 0x28u, arg1);
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    cow_cdecl(g, COW_IMG(0x1031f155u), 3, arg1, 0xffffffffu, 1u);
    t26 = g->edx;
    if (rd8(sp0 - 5u) == 0xau)
    {
        edx = t26;
        loc_c = rd32(sp0 - 0xcu);
        goto L_103197ef;
    }
    edx = t26;
L_103197eb: ;
    COW_AT(103197eb)
    wr8(ebx, 0xdu);
    loc_c = rd32(sp0 - 0xcu);
    goto L_103197ee;
L_103197fd: ;
    COW_AT(103197fd)
    if ((rd8((arg1 & 0x1fu) * 0x24u + rd32(COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u) + 4u) & 0x40u) == 0u)
    {
        eax = (rd32(COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u) & 0xffffff00u) | rd8((arg1 & 0x1fu) * 0x24u + rd32(COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u) + 4u);
        esi = (arg1 & 0x1fu) * 0x24u + rd32(COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u) + 4u;
    COW_AT(10319809)
        wr8(esi, (uint8_t)(eax | 2u));
    }
    goto L_1031980d;
L_10319818: ;
    COW_AT(10319818)
    eax = 0u;
    goto L_1031981a;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10319646(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10319662u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->edx = arg2;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0xcu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1031968fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->edx = arg2;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = (arg1 & 0x1fu) * 0x24u;
        g->edi = COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u;
        wr32(sp0 - 0xcu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10319694u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->edx = arg2;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = (arg1 & 0x1fu) * 0x24u;
        g->edi = COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u;
        wr32(sp0 - 0xcu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1031969bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = (arg1 & 0x1fu) * 0x24u;
        g->edi = COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u;
        (void)sp0;
        return 1;
    }
    case 0x103196b1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = (arg1 & 0x1fu) * 0x24u;
        g->edi = COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u;
        (void)sp0;
        return 1;
    }
    case 0x103196cau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x103196d7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->esi = 5u;
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x103196ebu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x103196f4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x103196fbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10319703u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x1cu;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = (arg1 & 0x1fu) * 0x24u;
        g->edi = COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u;
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1031971bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = (arg1 & 0x1fu) * 0x24u;
        g->edi = COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u;
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1031971fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = (arg1 & 0x1fu) * 0x24u;
        g->edi = COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u;
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10319724u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = (arg1 & 0x1fu) * 0x24u;
        g->edi = COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u;
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10319728u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = (arg1 & 0x1fu) * 0x24u;
        g->edi = COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u;
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1031972au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = (arg1 & 0x1fu) * 0x24u;
        g->edi = COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u;
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10319742u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->esi = (arg1 & 0x1fu) * 0x24u;
        g->edi = COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031974fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->esi = (arg1 & 0x1fu) * 0x24u;
        g->edi = COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u;
        (void)sp0;
        return 1;
    }
    case 0x10319753u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->esi = (arg1 & 0x1fu) * 0x24u;
        g->edi = COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031975eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->esi = (arg1 & 0x1fu) * 0x24u;
        g->edi = COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u;
        (void)sp0;
        return 1;
    }
    case 0x10319764u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->esi = (arg1 & 0x1fu) * 0x24u;
        g->edi = COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031976du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->esi = (arg1 & 0x1fu) * 0x24u;
        g->edi = COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u;
        (void)sp0;
        return 1;
    }
    case 0x10319773u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->esi = (arg1 & 0x1fu) * 0x24u;
        g->edi = COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031977cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->esi = (arg1 & 0x1fu) * 0x24u;
        g->edi = COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031979au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->esi = (arg1 & 0x1fu) * 0x24u;
        g->edi = COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u;
        wr32(sp0 - 0x2cu, sp0 - 5u);
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x103197a4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->esi = (arg1 & 0x1fu) * 0x24u;
        g->edi = COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u;
        wr32(sp0 - 0x2cu, sp0 - 5u);
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x103197aau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->esi = (arg1 & 0x1fu) * 0x24u;
        g->edi = COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u;
        wr32(sp0 - 0x2cu, sp0 - 5u);
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x103197b3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->esi = (arg1 & 0x1fu) * 0x24u;
        g->edi = COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u;
        wr32(sp0 - 0x2cu, sp0 - 5u);
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x103197bau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->esi = (arg1 & 0x1fu) * 0x24u;
        g->edi = COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u;
        wr32(sp0 - 0x2cu, sp0 - 5u);
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x103197c6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->esi = (arg1 & 0x1fu) * 0x24u;
        g->edi = COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u;
        wr32(sp0 - 0x2cu, sp0 - 5u);
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x103197cbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->esi = (arg1 & 0x1fu) * 0x24u;
        g->edi = COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u;
        wr32(sp0 - 0x2cu, sp0 - 5u);
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x103197d1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->esi = (arg1 & 0x1fu) * 0x24u;
        g->edi = COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u;
        (void)sp0;
        return 1;
    }
    case 0x103197d6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->esi = (arg1 & 0x1fu) * 0x24u;
        g->edi = COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u;
        wr32(sp0 - 0x2cu, sp0 - 5u);
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x103197ebu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->esi = (arg1 & 0x1fu) * 0x24u;
        g->edi = COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u;
        wr32(sp0 - 0x2cu, sp0 - 5u);
        (void)sp0;
        return 1;
    }
    case 0x103197eeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->esi = (arg1 & 0x1fu) * 0x24u;
        g->edi = COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u;
        (void)sp0;
        return 1;
    }
    case 0x103197efu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->esi = (arg1 & 0x1fu) * 0x24u;
        g->edi = COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u;
        (void)sp0;
        return 1;
    }
    case 0x103197fbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103197fdu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->esi = (arg1 & 0x1fu) * 0x24u;
        g->edi = COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u;
        (void)sp0;
        return 1;
    }
    case 0x10319809u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031980du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10319813u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10319818u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_4;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031981au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_4;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10319646(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10319646(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
