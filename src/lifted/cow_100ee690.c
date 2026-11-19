/* f_0x100ee690 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100ee690(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100ee69cu: in_eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100ee69c;
    case 0x100ee6a2u: in_eax = g->eax; self = g->ecx; edx = g->edx; in_edi = g->edi; zf = g->zf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100ee6a2;
    case 0x100ee6aeu: in_eax = g->eax; self = g->ecx; edx = g->edx; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100ee6ae;
    case 0x100ee6b5u: in_eax = g->eax; self = g->ecx; edx = g->edx; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100ee6b5;
    case 0x100ee6c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100ee6c2;
    case 0x100ee6cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100ee6cd;
    case 0x100ee6d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100ee6d4;
    case 0x100ee717u: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100ee717;
    case 0x100ee73du: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100ee73d;
    case 0x100ee73fu: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100ee73f;
    case 0x100ee74fu: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100ee74f;
    case 0x100ee768u: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100ee768;
    case 0x100ee76du: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100ee76d;
    case 0x100ee793u: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100ee793;
    case 0x100ee795u: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100ee795;
    case 0x100ee7a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100ee7a3;
    case 0x100ee7afu: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100ee7af;
    case 0x100ee7c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100ee7c7;
    case 0x100ee7edu: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100ee7ed;
    case 0x100ee7f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100ee7f3;
    case 0x100ee804u: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100ee804;
    case 0x100ee809u: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100ee809;
    case 0x100ee839u: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100ee839;
    case 0x100ee84cu: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100ee84c;
    case 0x100ee85eu: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100ee85e;
    case 0x100ee860u: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100ee860;
    case 0x100ee86cu: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100ee86c;
    case 0x100ee86eu: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100ee86e;
    case 0x100ee873u: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100ee873;
    case 0x100ee893u: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100ee893;
    case 0x100ee8b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100ee8b9;
    case 0x100ee8c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100ee8c1;
    case 0x100ee8c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100ee8c6;
    default: break;
    }
#endif

    COW_AT(100ee690)
    if (rd32(COW_IMG(0x104df770u)) != 0u)
    {
        edx = rd32(COW_IMG(0x104df770u));
        goto L_100ee6a2;
    }
    COW_AT(100ee69c)
    g->esi = in_esi;
    g->edi = in_edi;
    return 0xffffffffu;
L_100ee6a2: ;
    COW_AT(100ee6a2)
    if (rd32(arg1) != 0u) goto L_100ee6b5;
    COW_AT(100ee6ae)
    g->ecx = self;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_stdcall(g, COW_IMG(0x100edea0u), 0);
    t1 = g->ecx;
    t2 = g->edx;
    ecx = t1;
    edx = t2;
L_100ee6c2: ;
    COW_AT(100ee6c2)
    if (rd32(arg1) > 0xau) goto L_100ee768;
    eax = rd32(arg1);
    COW_AT(100ee6cd)
    t6 = rd32(COW_IMG(0x100ee8d0u) + eax * 4u);
    switch (t6 - RD)
    {
    case 0x100ee6d4u: goto L_100ee6d4;
    case 0x100ee717u: goto L_100ee717;
    case 0x100ee74fu: goto L_100ee74f;
    case 0x100ee76du: goto L_100ee76d;
    case 0x100ee7afu: goto L_100ee7af;
    case 0x100ee7c7u: goto L_100ee7c7;
    case 0x100ee809u: goto L_100ee809;
    case 0x100ee839u: goto L_100ee839;
    case 0x100ee873u: goto L_100ee873;
    case 0x100ee893u: goto L_100ee893;
    case 0x100ee8c6u: goto L_100ee8c6;
    default: rt_fatal(g, COW_IMG(0x100ee6cdu), "switch");
    }
    return 0;
L_100ee6b5: ;
    COW_AT(100ee6b5)
    g->eax = in_eax;
    g->ecx = self;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t3 = cow_stdcall(g, COW_IMG(0x100edeb0u), 0);
    t4 = g->ecx;
    t5 = g->edx;
    if (t3 != 0u) goto L_100ee8c1;
    ecx = t4;
    edx = t5;
    goto L_100ee6c2;
L_100ee6d4: ;
    COW_AT(100ee6d4)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t22 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 0x16u);
    t23 = g->ecx;
    t24 = g->edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall_cdecl(g, COW_IMG(0x100f0000u), t23, 1, t22);
    wr32(rd32(COW_IMG(0x104df770u)) + 0x136acu, 0u);
    t25 = rd32(COW_IMG(0x104df770u)) + 0x136dcu;
    t26 = rd32(rd32(COW_IMG(0x104df770u)) + 0x13690u);
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x10115930u), 2, t26, t25);
    t27 = rd32(arg1) + 1u;
    wr32(arg1, t27);
    g->esi = in_esi;
    g->edi = in_edi;
    return 0u;
L_100ee717: ;
    COW_AT(100ee717)
    t21 = rd32(edx + 0x13690u);
    g->esp = sp0 - 8u;
    cow_thiscall_cdecl(g, COW_IMG(0x10115d50u), t21, 2, t21, edx + 0x13698u);
    if (rd32(rd32(COW_IMG(0x104df770u)) + 0x13698u) == 0u)
    {
    COW_AT(100ee73d)
        wr32(arg1, rd32(arg1) + 1u);
    }
    COW_AT(100ee73f)
    zf = rd32(rd32(COW_IMG(0x104df770u)) + 0x13698u) + 1u == 0u;
L_100ee86c: ;
    COW_AT(100ee86c)
    if (zf) goto L_100ee8c1;
    COW_AT(100ee86e)
    g->esi = in_esi;
    g->edi = in_edi;
    return 0u;
L_100ee74f: ;
    COW_AT(100ee74f)
    t19 = rd32(edx + 0x13690u);
    g->esp = sp0 - 8u;
    cow_thiscall_cdecl(g, COW_IMG(0x10115a00u), arg2, 2, t19, arg2);
    t20 = rd32(arg1) + 1u;
    wr32(arg1, t20);
L_100ee768: ;
    COW_AT(100ee768)
    g->esi = in_esi;
    g->edi = in_edi;
    return 0u;
L_100ee76d: ;
    COW_AT(100ee76d)
    t17 = rd32(edx + 0x13690u);
    g->esp = sp0 - 8u;
    cow_thiscall_cdecl(g, COW_IMG(0x10115d50u), t17, 2, t17, edx + 0x13698u);
    if (rd32(rd32(COW_IMG(0x104df770u)) + 0x13698u) == 0u)
    {
    COW_AT(100ee793)
        wr32(arg1, rd32(arg1) + 1u);
    }
    COW_AT(100ee795)
    if (rd32(rd32(COW_IMG(0x104df770u)) + 0x13698u) != 0xffffffffu) goto L_100ee768;
    COW_AT(100ee7a3)
    t18 = rd32(arg1) + 3u;
    wr32(arg1, t18);
    g->esi = in_esi;
    g->edi = in_edi;
    return 0u;
L_100ee7af: ;
    COW_AT(100ee7af)
    t16 = rd32(edx + 0x13690u);
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x10115970u), 2, t16, edx + 0x136dcu);
L_100ee84c: ;
    COW_AT(100ee84c)
    if (rd32(rd32(COW_IMG(0x104df770u)) + 0x13698u) == 0u)
    {
    COW_AT(100ee85e)
        wr32(arg1, rd32(arg1) + 1u);
    }
    COW_AT(100ee860)
    zf = rd32(rd32(COW_IMG(0x104df770u)) + 0x13698u) + 1u == 0u;
    goto L_100ee86c;
L_100ee7c7: ;
    COW_AT(100ee7c7)
    t15 = rd32(edx + 0x13690u);
    g->esp = sp0 - 8u;
    cow_thiscall_cdecl(g, COW_IMG(0x10115d50u), t15, 2, t15, edx + 0x13698u);
    if (rd32(rd32(COW_IMG(0x104df770u)) + 0x13698u) == 0u)
    {
    COW_AT(100ee7ed)
        wr32(arg1, 0xau);
    }
    COW_AT(100ee7f3)
    if (rd32(rd32(COW_IMG(0x104df770u)) + 0x13698u) == 0xffffffffu) goto L_100ee8c1;
    COW_AT(100ee804)
    g->esi = in_esi;
    g->edi = in_edi;
    return 0u;
L_100ee809: ;
    COW_AT(100ee809)
    g->eax = eax;
    g->esp = sp0 - 4u;
    t11 = cow_thiscall_cdecl(g, COW_IMG(0x100ef8f0u), ecx, 1, in_edi);
    t12 = rd32(COW_IMG(0x104df770u));
    wr32(t12 + 0x136acu, t11);
    t13 = rd32(rd32(COW_IMG(0x104df770u)) + 0x13690u);
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x10115820u), 3, t13, in_edi, in_esi);
    t14 = rd32(arg1) + 1u;
    wr32(arg1, t14);
    g->esi = in_esi;
    g->edi = in_edi;
    return 0u;
L_100ee839: ;
    COW_AT(100ee839)
    t10 = rd32(edx + 0x13690u);
    g->esp = sp0 - 8u;
    cow_thiscall_cdecl(g, COW_IMG(0x10115d50u), edx + 0x13698u, 2, t10, edx + 0x13698u);
    goto L_100ee84c;
L_100ee873: ;
    COW_AT(100ee873)
    t8 = rd32(edx + 0x13690u);
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x10115970u), 2, t8, edx + 0x136dcu);
    t9 = rd32(arg1) + 1u;
    wr32(arg1, t9);
    g->esi = in_esi;
    g->edi = in_edi;
    return 0u;
L_100ee893: ;
    COW_AT(100ee893)
    t7 = rd32(edx + 0x13690u);
    g->esp = sp0 - 8u;
    cow_thiscall_cdecl(g, COW_IMG(0x10115d50u), t7, 2, t7, edx + 0x13698u);
    if (rd32(rd32(COW_IMG(0x104df770u)) + 0x13698u) == 0u) goto L_100ee8c1;
    eax = rd32(rd32(COW_IMG(0x104df770u)) + 0x13698u);
    COW_AT(100ee8b9)
    if (eax != 0xffffffffu) goto L_100ee768;
L_100ee8c1: ;
    COW_AT(100ee8c1)
    g->esi = in_esi;
    g->edi = in_edi;
    return 0xffffffffu;
L_100ee8c6: ;
    COW_AT(100ee8c6)
    g->esi = in_esi;
    g->edi = in_edi;
    return 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100ee690(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100ee69cu:
    {
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_eax;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        in_eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100ee6a2u:
    {
        uint32_t edx;
        uint32_t in_eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        in_eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        zf = g->zf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 8u, in_edi);
        (void)sp0;
        return 1;
    }
    case 0x100ee6aeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edx;
        uint32_t in_eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        in_eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100ee6b5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edx;
        uint32_t in_eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        in_eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100ee6c2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100ee6cdu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100ee6d4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ee717u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100ee73du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100ee73fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100ee74fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ee768u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100ee76du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ee793u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ee795u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ee7a3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ee7afu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100ee7c7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100ee7edu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100ee7f3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100ee804u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100ee809u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ee839u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100ee84cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->esi = arg1;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100ee85eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100ee860u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100ee86cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100ee86eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100ee873u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ee893u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100ee8b9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100ee8c1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100ee8c6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100ee690(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100ee690(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
