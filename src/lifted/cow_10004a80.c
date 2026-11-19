/* f_0x10004a80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10004a80(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_20c;
    uint32_t loc_210;
    int64_t q14;
    int64_t q23;
    int64_t q5;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
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
    uint32_t t4;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 572u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10004a96u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_edi = g->edi; in_esi = rd32(sp0 - 0x20cu); g->esi = rd32(sp0 - 0x20cu); goto E_10004a96;
    case 0x10004a99u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x210u); in_esi = rd32(sp0 - 0x20cu); g->edi = rd32(sp0 - 0x210u); g->esi = rd32(sp0 - 0x20cu); goto E_10004a99;
    case 0x10004aa4u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_edi = g->edi; in_esi = rd32(sp0 - 0x20cu); g->esi = rd32(sp0 - 0x20cu); goto E_10004aa4;
    case 0x10004ac1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_10004ac1;
    case 0x10004aceu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_10004ace;
    case 0x10004af3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_10004af3;
    case 0x10004b02u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_10004b02;
    case 0x10004b0du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_10004b0d;
    case 0x10004b32u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_10004b32;
    case 0x10004b41u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_10004b41;
    case 0x10004b48u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10004b48;
    case 0x10004b4du: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10004b4d;
    case 0x10004b73u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10004b73;
    case 0x10004b82u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10004b82;
    case 0x10004b89u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10004b89;
    case 0x10004b8fu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10004b8f;
    case 0x10004b9au: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10004b9a;
    case 0x10004ba0u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10004ba0;
    case 0x10004bb8u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_210 = rd32(sp0 - 0x210u); loc_20c = rd32(sp0 - 0x20cu); goto E_10004bb8;
    default: break;
    }
#endif

    COW_AT(10004a80)
    wr32(sp0 - 0x20cu, in_esi);
    wr32(sp0 - 0x210u, in_edi);
    if (rd32(COW_IMG(0x10455afcu)) == 0u)
    {
        eax = rd32(COW_IMG(0x10455afcu));
        edx = in_edx;
        loc_20c = in_esi;
        loc_210 = in_edi;
        goto L_10004bb8;
    }
    eax = rd32(COW_IMG(0x10455afcu));
    COW_AT(10004a96)
    if (eax == 1u) goto L_10004aa4;
    eax = eax - 1u;
    COW_AT(10004a99)
    g->esi = in_esi;
    g->edi = in_edi;
    return eax & 0xffffff00u;
L_10004aa4: ;
    COW_AT(10004aa4)
    t1 = rd32(arg1 + 8u);
    wr32(sp0 - 0x214u, t1);
    wr32(sp0 - 0x218u, COW_IMG(0x1034f8c8u));
    wr32(sp0 - 0x21cu, sp0 - 0x104u);
    g->eax = t1;
    g->ecx = sp0 - 0x104u;
    g->esp = sp0 - 0x208u;
    t2 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x104u, COW_IMG(0x1034f8c8u), t1, in_edi, in_esi);
    t3 = g->ecx;
    eax = t2;
    ecx = t3;
    COW_AT(10004ac1)
    wr32(sp0 - 0x220u, sp0 - 0x104u);
    g->esp = sp0 - 0x21cu;
    cow_call_regs(g, COW_IMG(0x10004dd0u), g->eax, ecx, sp0 - 0x104u, 1, 1, sp0 - 0x104u);
    t4 = g->edx;
    edx = t4;
    COW_AT(10004ace)
    q5 = (int64_t)cow_muls(0x10624dd3u, rd32(arg1 + 8u));
    t6 = (uint32_t)((int32_t)cow_qhi(q5) >> 6u);
    t7 = rd32(arg1 + 8u);
    wr32(sp0 - 0x224u, t7);
    t8 = t6 + (t6 >> 0x1fu);
    wr32(sp0 - 0x228u, t8);
    wr32(sp0 - 0x22cu, COW_IMG(0x1034f898u));
    wr32(sp0 - 0x230u, sp0 - 0x208u);
    g->eax = t6 >> 0x1fu;
    g->ecx = sp0 - 0x208u;
    g->esp = sp0 - 0x21cu;
    t9 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x208u, COW_IMG(0x1034f898u), t8, t7, sp0 - 0x104u);
    t10 = g->ecx;
    eax = t9;
    ecx = t10;
    COW_AT(10004af3)
    wr32(sp0 - 0x234u, COW_IMG(0x1034f2d0u));
    wr32(sp0 - 0x238u, sp0 - 0x208u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = sp0 - 0x208u;
    g->esp = sp0 - 0x224u;
    t11 = cow_cdecl(g, COW_IMG(0x1031201eu), 5, sp0 - 0x208u, COW_IMG(0x1034f2d0u), sp0 - 0x208u, COW_IMG(0x1034f898u), rd32(sp0 - 0x228u));
    t12 = g->ecx;
    t13 = g->edx;
    eax = t11;
    ecx = t12;
    edx = t13;
    COW_AT(10004b02)
    if (eax != 0u)
    {
        edi = in_edi;
        goto L_10004b9a;
    }
    COW_AT(10004b0d)
    q14 = (int64_t)cow_muls(0x10624dd3u, rd32(arg1 + 8u));
    t15 = (uint32_t)((int32_t)cow_qhi(q14) >> 6u);
    t16 = rd32(arg1 + 8u);
    wr32(sp0 - 0x214u, t16);
    t17 = t15 + (t15 >> 0x1fu);
    wr32(sp0 - 0x218u, t17);
    wr32(sp0 - 0x21cu, COW_IMG(0x1034f864u));
    wr32(sp0 - 0x220u, sp0 - 0x208u);
    g->eax = t15 >> 0x1fu;
    g->ecx = sp0 - 0x208u;
    g->esp = sp0 - 0x20cu;
    t18 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x208u, COW_IMG(0x1034f864u), t17, t16, rd32(sp0 - 0x210u));
    t19 = g->ecx;
    eax = t18;
    ecx = t19;
    COW_AT(10004b32)
    wr32(sp0 - 0x224u, COW_IMG(0x1034f2d0u));
    wr32(sp0 - 0x228u, sp0 - 0x208u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = sp0 - 0x208u;
    g->esp = sp0 - 0x214u;
    t20 = cow_cdecl(g, COW_IMG(0x1031201eu), 5, sp0 - 0x208u, COW_IMG(0x1034f2d0u), sp0 - 0x208u, COW_IMG(0x1034f864u), rd32(sp0 - 0x218u));
    t21 = g->ecx;
    t22 = g->edx;
    eax = t20;
    ecx = t21;
    edx = t22;
    COW_AT(10004b41)
    if (eax != 0u)
    {
        edi = in_edi;
        goto L_10004b9a;
    }
    COW_AT(10004b48)
    edi = 2u;
L_10004b4d: ;
    COW_AT(10004b4d)
    q23 = (int64_t)cow_muls(0x10624dd3u, rd32(arg1 + 8u));
    t24 = (uint32_t)((int32_t)cow_qhi(q23) >> 6u);
    t25 = rd32(arg1 + 8u);
    wr32(sp0 - 0x214u, t25);
    t26 = t24 + (t24 >> 0x1fu);
    wr32(sp0 - 0x218u, t26);
    wr32(sp0 - 0x21cu, edi);
    wr32(sp0 - 0x220u, COW_IMG(0x1034f830u));
    wr32(sp0 - 0x224u, sp0 - 0x208u);
    g->eax = t24 >> 0x1fu;
    g->ecx = sp0 - 0x208u;
    g->esp = sp0 - 0x210u;
    t27 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x208u, COW_IMG(0x1034f830u), edi, t26, t25);
    t28 = g->ecx;
    eax = t27;
    ecx = t28;
    COW_AT(10004b73)
    wr32(sp0 - 0x228u, COW_IMG(0x1034f2d0u));
    wr32(sp0 - 0x22cu, sp0 - 0x208u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = sp0 - 0x208u;
    g->esp = sp0 - 0x218u;
    t29 = cow_cdecl(g, COW_IMG(0x1031201eu), 5, sp0 - 0x208u, COW_IMG(0x1034f2d0u), sp0 - 0x208u, COW_IMG(0x1034f830u), rd32(sp0 - 0x21cu));
    t30 = g->ecx;
    t31 = g->edx;
    eax = t29;
    ecx = t30;
    edx = t31;
    COW_AT(10004b82)
    if (eax != 0u) goto L_10004b9a;
    COW_AT(10004b89)
    if ((int32_t)(edi + 1u) < 16)
    {
        edi = edi + 1u;
        goto L_10004b4d;
    }
    COW_AT(10004b8f)
    g->esi = rd32(sp0 - 0x20cu);
    g->edi = rd32(sp0 - 0x210u);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_10004b9a: ;
    COW_AT(10004b9a)
    wr32(sp0 - 0x214u, eax);
    g->edi = edi;
    g->esp = sp0 - 0x208u;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, edx, 1, 3, eax, rd32(sp0 - 0x210u), rd32(sp0 - 0x20cu));
    t32 = g->edx;
    edx = t32;
    COW_AT(10004ba0)
    wr32(sp0 - 0x214u, 0u);
    wr32(sp0 - 0x218u, sp0 - 0x104u);
    wr32(sp0 - 0x21cu, sp0 - 0x208u);
    g->eax = sp0 - 0x104u;
    g->edx = edx;
    g->esp = sp0 - 0x210u;
    t33 = cow_stdcall(g, rd32(COW_IMG(0x1032912cu)), 3, sp0 - 0x208u, sp0 - 0x104u, 0u);   /* kernel32.dll!CopyFileA */
    t34 = g->edx;
    eax = t33;
    edx = t34;
    loc_20c = rd32(sp0 - 0x20cu);
    loc_210 = rd32(sp0 - 0x210u);
L_10004bb8: ;
    COW_AT(10004bb8)
    g->esi = loc_20c;
    g->edi = loc_210;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10004a80(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10004a96u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x20cu);
        g->esp = sp0 - 0x210u;
        wr32(sp0 - 0x210u, in_edi);
        (void)sp0;
        return 1;
    }
    case 0x10004a99u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x210u);
        in_esi = rd32(sp0 - 0x20cu);
        g->esp = sp0 - 0x210u;
        (void)sp0;
        return 1;
    }
    case 0x10004aa4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x20cu);
        g->esp = sp0 - 0x210u;
        wr32(sp0 - 0x210u, in_edi);
        (void)sp0;
        return 1;
    }
    case 0x10004ac1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0 - 0x21cu;
        g->esi = arg1;
        wr32(sp0 - 0x21cu, sp0 - 0x104u);
        (void)sp0;
        return 1;
    }
    case 0x10004aceu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0 - 0x220u;
        g->esi = arg1;
        wr32(sp0 - 0x220u, sp0 - 0x104u);
        wr32(sp0 - 0x21cu, sp0 - 0x104u);
        (void)sp0;
        return 1;
    }
    case 0x10004af3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0 - 0x230u;
        g->esi = arg1;
        wr32(sp0 - 0x230u, sp0 - 0x208u);
        wr32(sp0 - 0x22cu, COW_IMG(0x1034f898u));
        wr32(sp0 - 0x220u, sp0 - 0x104u);
        wr32(sp0 - 0x21cu, sp0 - 0x104u);
        (void)sp0;
        return 1;
    }
    case 0x10004b02u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0 - 0x238u;
        g->esi = arg1;
        wr32(sp0 - 0x238u, sp0 - 0x208u);
        wr32(sp0 - 0x230u, sp0 - 0x208u);
        wr32(sp0 - 0x220u, sp0 - 0x104u);
        wr32(sp0 - 0x21cu, sp0 - 0x104u);
        (void)sp0;
        return 1;
    }
    case 0x10004b0du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0 - 0x210u;
        g->esi = arg1;
        wr32(sp0 - 0x238u, sp0 - 0x208u);
        wr32(sp0 - 0x230u, sp0 - 0x208u);
        wr32(sp0 - 0x220u, sp0 - 0x104u);
        wr32(sp0 - 0x21cu, sp0 - 0x104u);
        (void)sp0;
        return 1;
    }
    case 0x10004b32u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0 - 0x220u;
        g->esi = arg1;
        wr32(sp0 - 0x238u, sp0 - 0x208u);
        wr32(sp0 - 0x230u, sp0 - 0x208u);
        wr32(sp0 - 0x220u, sp0 - 0x208u);
        wr32(sp0 - 0x21cu, COW_IMG(0x1034f864u));
        (void)sp0;
        return 1;
    }
    case 0x10004b41u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0 - 0x228u;
        g->esi = arg1;
        wr32(sp0 - 0x238u, sp0 - 0x208u);
        wr32(sp0 - 0x230u, sp0 - 0x208u);
        wr32(sp0 - 0x228u, sp0 - 0x208u);
        wr32(sp0 - 0x220u, sp0 - 0x208u);
        (void)sp0;
        return 1;
    }
    case 0x10004b48u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x210u;
        g->esi = arg1;
        wr32(sp0 - 0x238u, sp0 - 0x208u);
        wr32(sp0 - 0x230u, sp0 - 0x208u);
        wr32(sp0 - 0x228u, sp0 - 0x208u);
        wr32(sp0 - 0x220u, sp0 - 0x208u);
        (void)sp0;
        return 1;
    }
    case 0x10004b4du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x210u;
        g->esi = arg1;
        wr32(sp0 - 0x238u, sp0 - 0x208u);
        wr32(sp0 - 0x230u, sp0 - 0x208u);
        (void)sp0;
        return 1;
    }
    case 0x10004b73u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x224u;
        g->esi = arg1;
        wr32(sp0 - 0x238u, sp0 - 0x208u);
        wr32(sp0 - 0x230u, sp0 - 0x208u);
        wr32(sp0 - 0x224u, sp0 - 0x208u);
        wr32(sp0 - 0x220u, COW_IMG(0x1034f830u));
        (void)sp0;
        return 1;
    }
    case 0x10004b82u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x22cu;
        g->esi = arg1;
        wr32(sp0 - 0x238u, sp0 - 0x208u);
        wr32(sp0 - 0x230u, sp0 - 0x208u);
        wr32(sp0 - 0x22cu, sp0 - 0x208u);
        wr32(sp0 - 0x224u, sp0 - 0x208u);
        (void)sp0;
        return 1;
    }
    case 0x10004b89u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x210u;
        g->esi = arg1;
        wr32(sp0 - 0x238u, sp0 - 0x208u);
        wr32(sp0 - 0x230u, sp0 - 0x208u);
        wr32(sp0 - 0x22cu, sp0 - 0x208u);
        wr32(sp0 - 0x224u, sp0 - 0x208u);
        (void)sp0;
        return 1;
    }
    case 0x10004b8fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x210u;
        wr32(sp0 - 0x238u, sp0 - 0x208u);
        wr32(sp0 - 0x230u, sp0 - 0x208u);
        wr32(sp0 - 0x22cu, sp0 - 0x208u);
        wr32(sp0 - 0x224u, sp0 - 0x208u);
        (void)sp0;
        return 1;
    }
    case 0x10004b9au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x210u;
        wr32(sp0 - 0x238u, sp0 - 0x208u);
        wr32(sp0 - 0x230u, sp0 - 0x208u);
        (void)sp0;
        return 1;
    }
    case 0x10004ba0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x214u;
        wr32(sp0 - 0x238u, sp0 - 0x208u);
        wr32(sp0 - 0x230u, sp0 - 0x208u);
        (void)sp0;
        return 1;
    }
    case 0x10004bb8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_20c;
        uint32_t loc_210;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_210 = rd32(sp0 - 0x210u);
        loc_20c = rd32(sp0 - 0x20cu);
        g->esp = sp0 - 0x210u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10004a80(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10004a80(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
