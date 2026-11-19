/* f_0x100ee900 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100ee900(Guest* g)
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
    case 0x100ee90cu: in_eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100ee90c;
    case 0x100ee912u: in_eax = g->eax; self = g->ecx; edx = g->edx; in_edi = g->edi; zf = g->zf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100ee912;
    case 0x100ee91eu: in_eax = g->eax; self = g->ecx; edx = g->edx; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100ee91e;
    case 0x100ee925u: in_eax = g->eax; self = g->ecx; edx = g->edx; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100ee925;
    case 0x100ee932u: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100ee932;
    case 0x100ee93du: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100ee93d;
    case 0x100ee944u: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100ee944;
    case 0x100ee987u: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100ee987;
    case 0x100ee9adu: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100ee9ad;
    case 0x100ee9afu: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100ee9af;
    case 0x100ee9bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100ee9bf;
    case 0x100ee9d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100ee9d8;
    case 0x100ee9ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100ee9dd;
    case 0x100eea03u: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100eea03;
    case 0x100eea05u: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100eea05;
    case 0x100eea13u: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100eea13;
    case 0x100eea1fu: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100eea1f;
    case 0x100eea37u: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100eea37;
    case 0x100eea5du: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100eea5d;
    case 0x100eea63u: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100eea63;
    case 0x100eea74u: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100eea74;
    case 0x100eea79u: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100eea79;
    case 0x100eeaa9u: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100eeaa9;
    case 0x100eeabcu: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100eeabc;
    case 0x100eeaceu: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100eeace;
    case 0x100eead0u: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100eead0;
    case 0x100eeadcu: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100eeadc;
    case 0x100eeadeu: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100eeade;
    case 0x100eeae3u: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100eeae3;
    case 0x100eeb03u: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100eeb03;
    case 0x100eeb29u: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100eeb29;
    case 0x100eeb31u: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100eeb31;
    case 0x100eeb36u: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100eeb36;
    default: break;
    }
#endif

    COW_AT(100ee900)
    if (rd32(COW_IMG(0x104df770u)) != 0u)
    {
        edx = rd32(COW_IMG(0x104df770u));
        goto L_100ee912;
    }
    COW_AT(100ee90c)
    g->esi = in_esi;
    g->edi = in_edi;
    return 0xffffffffu;
L_100ee912: ;
    COW_AT(100ee912)
    if (rd32(arg1) != 0u) goto L_100ee925;
    COW_AT(100ee91e)
    g->ecx = self;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_stdcall(g, COW_IMG(0x100edea0u), 0);
    t1 = g->ecx;
    t2 = g->edx;
    ecx = t1;
    edx = t2;
L_100ee932: ;
    COW_AT(100ee932)
    if (rd32(arg1) > 0xau) goto L_100ee9d8;
    eax = rd32(arg1);
    COW_AT(100ee93d)
    t6 = rd32(COW_IMG(0x100eeb40u) + eax * 4u);
    switch (t6 - RD)
    {
    case 0x100ee944u: goto L_100ee944;
    case 0x100ee987u: goto L_100ee987;
    case 0x100ee9bfu: goto L_100ee9bf;
    case 0x100ee9ddu: goto L_100ee9dd;
    case 0x100eea1fu: goto L_100eea1f;
    case 0x100eea37u: goto L_100eea37;
    case 0x100eea79u: goto L_100eea79;
    case 0x100eeaa9u: goto L_100eeaa9;
    case 0x100eeae3u: goto L_100eeae3;
    case 0x100eeb03u: goto L_100eeb03;
    case 0x100eeb36u: goto L_100eeb36;
    default: rt_fatal(g, COW_IMG(0x100ee93du), "switch");
    }
    return 0;
L_100ee925: ;
    COW_AT(100ee925)
    g->eax = in_eax;
    g->ecx = self;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t3 = cow_stdcall(g, COW_IMG(0x100edeb0u), 0);
    t4 = g->ecx;
    t5 = g->edx;
    if (t3 != 0u) goto L_100eeb31;
    ecx = t4;
    edx = t5;
    goto L_100ee932;
L_100ee944: ;
    COW_AT(100ee944)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t22 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 0x17u);
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
L_100ee987: ;
    COW_AT(100ee987)
    t21 = rd32(edx + 0x13690u);
    g->esp = sp0 - 8u;
    cow_thiscall_cdecl(g, COW_IMG(0x10115d50u), t21, 2, t21, edx + 0x13698u);
    if (rd32(rd32(COW_IMG(0x104df770u)) + 0x13698u) == 0u)
    {
    COW_AT(100ee9ad)
        wr32(arg1, rd32(arg1) + 1u);
    }
    COW_AT(100ee9af)
    zf = rd32(rd32(COW_IMG(0x104df770u)) + 0x13698u) + 1u == 0u;
L_100eeadc: ;
    COW_AT(100eeadc)
    if (zf) goto L_100eeb31;
    COW_AT(100eeade)
    g->esi = in_esi;
    g->edi = in_edi;
    return 0u;
L_100ee9bf: ;
    COW_AT(100ee9bf)
    t19 = rd32(edx + 0x13690u);
    g->esp = sp0 - 8u;
    cow_thiscall_cdecl(g, COW_IMG(0x10115b20u), arg2, 2, t19, arg2);
    t20 = rd32(arg1) + 1u;
    wr32(arg1, t20);
L_100ee9d8: ;
    COW_AT(100ee9d8)
    g->esi = in_esi;
    g->edi = in_edi;
    return 0u;
L_100ee9dd: ;
    COW_AT(100ee9dd)
    t17 = rd32(edx + 0x13690u);
    g->esp = sp0 - 8u;
    cow_thiscall_cdecl(g, COW_IMG(0x10115d50u), t17, 2, t17, edx + 0x13698u);
    if (rd32(rd32(COW_IMG(0x104df770u)) + 0x13698u) == 0u)
    {
    COW_AT(100eea03)
        wr32(arg1, rd32(arg1) + 1u);
    }
    COW_AT(100eea05)
    if (rd32(rd32(COW_IMG(0x104df770u)) + 0x13698u) != 0xffffffffu) goto L_100ee9d8;
    COW_AT(100eea13)
    t18 = rd32(arg1) + 3u;
    wr32(arg1, t18);
    g->esi = in_esi;
    g->edi = in_edi;
    return 0u;
L_100eea1f: ;
    COW_AT(100eea1f)
    t16 = rd32(edx + 0x13690u);
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x10115970u), 2, t16, edx + 0x136dcu);
L_100eeabc: ;
    COW_AT(100eeabc)
    if (rd32(rd32(COW_IMG(0x104df770u)) + 0x13698u) == 0u)
    {
    COW_AT(100eeace)
        wr32(arg1, rd32(arg1) + 1u);
    }
    COW_AT(100eead0)
    zf = rd32(rd32(COW_IMG(0x104df770u)) + 0x13698u) + 1u == 0u;
    goto L_100eeadc;
L_100eea37: ;
    COW_AT(100eea37)
    t15 = rd32(edx + 0x13690u);
    g->esp = sp0 - 8u;
    cow_thiscall_cdecl(g, COW_IMG(0x10115d50u), t15, 2, t15, edx + 0x13698u);
    if (rd32(rd32(COW_IMG(0x104df770u)) + 0x13698u) == 0u)
    {
    COW_AT(100eea5d)
        wr32(arg1, 0xau);
    }
    COW_AT(100eea63)
    if (rd32(rd32(COW_IMG(0x104df770u)) + 0x13698u) == 0xffffffffu) goto L_100eeb31;
    COW_AT(100eea74)
    g->esi = in_esi;
    g->edi = in_edi;
    return 0u;
L_100eea79: ;
    COW_AT(100eea79)
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
L_100eeaa9: ;
    COW_AT(100eeaa9)
    t10 = rd32(edx + 0x13690u);
    g->esp = sp0 - 8u;
    cow_thiscall_cdecl(g, COW_IMG(0x10115d50u), edx + 0x13698u, 2, t10, edx + 0x13698u);
    goto L_100eeabc;
L_100eeae3: ;
    COW_AT(100eeae3)
    t8 = rd32(edx + 0x13690u);
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x10115970u), 2, t8, edx + 0x136dcu);
    t9 = rd32(arg1) + 1u;
    wr32(arg1, t9);
    g->esi = in_esi;
    g->edi = in_edi;
    return 0u;
L_100eeb03: ;
    COW_AT(100eeb03)
    t7 = rd32(edx + 0x13690u);
    g->esp = sp0 - 8u;
    cow_thiscall_cdecl(g, COW_IMG(0x10115d50u), t7, 2, t7, edx + 0x13698u);
    if (rd32(rd32(COW_IMG(0x104df770u)) + 0x13698u) == 0u) goto L_100eeb31;
    eax = rd32(rd32(COW_IMG(0x104df770u)) + 0x13698u);
    COW_AT(100eeb29)
    if (eax != 0xffffffffu) goto L_100ee9d8;
L_100eeb31: ;
    COW_AT(100eeb31)
    g->esi = in_esi;
    g->edi = in_edi;
    return 0xffffffffu;
L_100eeb36: ;
    COW_AT(100eeb36)
    g->esi = in_esi;
    g->edi = in_edi;
    return 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100ee900(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100ee90cu:
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
    case 0x100ee912u:
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
    case 0x100ee91eu:
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
    case 0x100ee925u:
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
    case 0x100ee932u:
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
    case 0x100ee93du:
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
    case 0x100ee944u:
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
    case 0x100ee987u:
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
    case 0x100ee9adu:
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
    case 0x100ee9afu:
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
    case 0x100ee9bfu:
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
    case 0x100ee9d8u:
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
    case 0x100ee9ddu:
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
    case 0x100eea03u:
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
    case 0x100eea05u:
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
    case 0x100eea13u:
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
    case 0x100eea1fu:
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
    case 0x100eea37u:
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
    case 0x100eea5du:
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
    case 0x100eea63u:
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
    case 0x100eea74u:
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
    case 0x100eea79u:
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
    case 0x100eeaa9u:
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
    case 0x100eeabcu:
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
    case 0x100eeaceu:
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
    case 0x100eead0u:
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
    case 0x100eeadcu:
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
    case 0x100eeadeu:
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
    case 0x100eeae3u:
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
    case 0x100eeb03u:
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
    case 0x100eeb29u:
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
    case 0x100eeb31u:
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
    case 0x100eeb36u:
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
void cow_adapter_100ee900(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100ee900(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
