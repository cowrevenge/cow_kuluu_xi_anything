/* f_0x101a04e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_101a04e0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
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
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 36u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101a04f0u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; esi = g->esi; in_edi = g->edi; sf = g->sf; in_esi = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_101a04f0;
    case 0x101a04ffu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; esi = g->esi; in_edi = g->edi; sf = g->sf; in_esi = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_101a04ff;
    case 0x101a050eu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; esi = g->esi; in_edi = g->edi; sf = g->sf; in_esi = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_101a050e;
    case 0x101a051du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; sf = g->sf; goto E_101a051d;
    case 0x101a0527u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; sf = g->sf; goto E_101a0527;
    case 0x101a053du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; sf = g->sf; goto E_101a053d;
    case 0x101a0545u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; sf = g->sf; goto E_101a0545;
    case 0x101a0550u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; sf = g->sf; goto E_101a0550;
    case 0x101a0554u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; sf = g->sf; goto E_101a0554;
    case 0x101a0566u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; sf = g->sf; goto E_101a0566;
    case 0x101a056au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; sf = g->sf; goto E_101a056a;
    case 0x101a0571u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; sf = g->sf; goto E_101a0571;
    case 0x101a057cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; sf = g->sf; goto E_101a057c;
    case 0x101a0580u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; sf = g->sf; goto E_101a0580;
    case 0x101a0584u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; sf = g->sf; goto E_101a0584;
    case 0x101a0593u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; sf = g->sf; goto E_101a0593;
    case 0x101a059au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; sf = g->sf; goto E_101a059a;
    case 0x101a059cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; sf = g->sf; goto E_101a059c;
    case 0x101a059eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; sf = g->sf; goto E_101a059e;
    case 0x101a05adu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; sf = g->sf; goto E_101a05ad;
    case 0x101a05b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; sf = g->sf; goto E_101a05b4;
    case 0x101a05beu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; sf = g->sf; goto E_101a05be;
    case 0x101a05c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; sf = g->sf; goto E_101a05c7;
    case 0x101a05d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; sf = g->sf; goto E_101a05d6;
    case 0x101a05dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; sf = g->sf; goto E_101a05df;
    case 0x101a05ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; sf = g->sf; goto E_101a05eb;
    case 0x101a05fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; sf = g->sf; goto E_101a05fc;
    case 0x101a0602u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; sf = g->sf; goto E_101a0602;
    case 0x101a0611u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; sf = g->sf; goto E_101a0611;
    case 0x101a061bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; sf = g->sf; goto E_101a061b;
    case 0x101a0623u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; sf = g->sf; goto E_101a0623;
    case 0x101a062eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; sf = g->sf; goto E_101a062e;
    case 0x101a0631u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; sf = g->sf; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_101a0631;
    case 0x101a0638u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; sf = g->sf; goto E_101a0638;
    case 0x101a0647u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; sf = g->sf; goto E_101a0647;
    case 0x101a064bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; sf = g->sf; goto E_101a064b;
    case 0x101a0655u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; sf = g->sf; goto E_101a0655;
    case 0x101a065fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; sf = g->sf; goto E_101a065f;
    case 0x101a0670u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; sf = g->sf; goto E_101a0670;
    default: break;
    }
#endif

    COW_AT(101a04e0)
    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, in_edi);
    if (rd32(sp0 + 8u) != 2u)
    {
        eax = rd32(sp0 + 8u);
        edx = in_edx;
        loc_4 = self;
        loc_8 = in_esi;
        loc_c = in_edi;
        goto L_101a0631;
    }
    COW_AT(101a04f0)
    if (rd32(sp0 + 0x11cu) == 0u)
    {
        eax = rd32(sp0 + 0x11cu);
        edx = in_edx;
        loc_4 = self;
        loc_8 = in_esi;
        loc_c = in_edi;
        goto L_101a0631;
    }
    COW_AT(101a04ff)
    if (rd32(sp0 + 0x120u) == 0u)
    {
        eax = rd32(sp0 + 0x120u);
        edx = in_edx;
        loc_4 = self;
        loc_8 = in_esi;
        loc_c = in_edi;
        goto L_101a0631;
    }
    COW_AT(101a050e)
    wr32(sp0 - 0x10u, sp0 + 0xcu);
    g->eax = sp0 + 0xcu;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    COW_RET(0x101a051du);
    t1 = cow_stdcall(g, COW_IMG(0x101be510u), 1, sp0 + 0xcu);
    t2 = g->edx;
    eax = t1;
    edx = t2;
    COW_AT(101a051d)
    if ((int32_t)eax < 0)
    {
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        loc_c = rd32(sp0 - 0xcu);
        goto L_101a0631;
    }
    edi = eax;
    COW_AT(101a0527)
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, sp0 + 0xcu);
    wr32(sp0 - 0x18u, sp0 - 4u);
    g->edx = sp0 - 4u;
    g->esp = sp0 - 0xcu;
    COW_RET(0x101a053du);
    t3 = cow_call_regs(g, COW_IMG(0x101be470u), eax, COW_IMG(0x1066278cu), g->edx, 0, 3, sp0 - 4u, sp0 + 0xcu, 0u);
    t4 = g->ecx;
    t5 = g->edx;
    eax = t3;
    ecx = t4;
    edx = t5;
    COW_AT(101a053d)
    if ((int32_t)eax < 0)
    {
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        loc_c = rd32(sp0 - 0xcu);
        goto L_101a0631;
    }
    COW_AT(101a0545)
    if ((int32_t)rd32(sp0 + 0x10cu) <= 0) goto L_101a0571;
    eax = rd32(sp0 + 0x10cu);
    COW_AT(101a0550)
    if ((int32_t)eax >= (int32_t)edi) goto L_101a0584;
    COW_AT(101a0554)
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, eax);
    t6 = rd32(sp0 - 4u);
    wr32(sp0 - 0x18u, t6);
    g->eax = t6;
    g->ecx = COW_IMG(0x1066278cu);
    g->esp = sp0 - 0xcu;
    COW_RET(0x101a0566u);
    t7 = cow_call_regs(g, COW_IMG(0x101be540u), g->eax, g->ecx, edx, 0, 3, t6, eax, 0u);
    t8 = g->ecx;
    t9 = g->edx;
    eax = t7;
    ecx = t8;
    edx = t9;
    COW_AT(101a0566)
    if ((int32_t)eax < 0) goto L_101a0584;
    COW_AT(101a056a)
    edi = edi - rd32(sp0 + 0x10cu);
L_101a0571: ;
    COW_AT(101a0571)
    if ((int32_t)rd32(sp0 + 0x114u) <= 0)
    {
        eax = rd32(sp0 + 0x114u);
        sf = (int32_t)rd32(sp0 + 0x114u) < 0;
        goto L_101a059c;
    }
    eax = rd32(sp0 + 0x114u);
    COW_AT(101a057c)
    if ((int32_t)eax >= (int32_t)edi) goto L_101a059a;
    COW_AT(101a0580)
    edi = eax;
L_101a05b4: ;
    COW_AT(101a05b4)
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, edi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    COW_RET(0x101a05beu);
    t16 = cow_thiscall(g, rd32(sp0 + 0x11cu), ecx, 0);
    t17 = g->edx;
    eax = t16;
    edx = t17;
    COW_AT(101a05be)
    if (eax != 0u)
    {
        esi = eax;
        goto L_101a05eb;
    }
    esi = eax;
    COW_AT(101a05c7)
    t18 = rd32(sp0 - 4u);
    wr32(sp0 - 0x10u, t18);
    g->edi = edi;
    g->eax = t18;
    g->ecx = COW_IMG(0x1066278cu);
    g->esp = sp0 - 0xcu;
    COW_RET(0x101a05d6u);
    t19 = cow_call_regs(g, COW_IMG(0x101be500u), g->eax, g->ecx, edx, 0, 1, t18);
    t20 = g->ecx;
    t21 = g->edx;
    eax = t19;
    ecx = t20;
    edx = t21;
    COW_AT(101a05d6)
    wr32(sp0 - 0x10u, esi);
    wr32(sp0 - 0x14u, esi);
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    COW_RET(0x101a05dfu);
    cow_thiscall(g, rd32(sp0 + 0x11cu), ecx, 0);
    t22 = g->edx;
    edx = t22;
    COW_AT(101a05df)
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    g->edx = edx;
    return 0xfffffffeu;
L_101a0584: ;
    COW_AT(101a0584)
    t10 = rd32(sp0 - 4u);
    wr32(sp0 - 0x10u, t10);
    g->edi = edi;
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    COW_RET(0x101a0593u);
    t11 = cow_call_regs(g, COW_IMG(0x101be500u), g->eax, g->ecx, edx, 0, 1, t10);
    t12 = g->edx;
    eax = t11;
    edx = t12;
    COW_AT(101a0593)
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    g->edx = edx;
    return 0xffffffffu;
L_101a059a: ;
    COW_AT(101a059a)
    sf = (int32_t)eax < 0;
L_101a059c: ;
    COW_AT(101a059c)
    if (!sf) goto L_101a05b4;
    COW_AT(101a059e)
    t13 = rd32(sp0 - 4u);
    wr32(sp0 - 0x10u, t13);
    g->edi = edi;
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    COW_RET(0x101a05adu);
    t14 = cow_call_regs(g, COW_IMG(0x101be500u), g->eax, g->ecx, t13, 0, 1, t13);
    t15 = g->edx;
    eax = t14;
    edx = t15;
    COW_AT(101a05ad)
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    g->edx = edx;
    return 0xffffffffu;
L_101a05eb: ;
    COW_AT(101a05eb)
    wr32(sp0 - 0x10u, edi);
    wr32(sp0 - 0x14u, esi);
    t23 = rd32(sp0 - 4u);
    wr32(sp0 - 0x18u, t23);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    COW_RET(0x101a05fcu);
    t24 = cow_thiscall(g, COW_IMG(0x101be590u), COW_IMG(0x1066278cu), 3, t23, esi, edi);
    t25 = g->edx;
    eax = t24;
    edx = t25;
    COW_AT(101a05fc)
    if ((int32_t)eax >= 0)
    {
        edi = eax;
        goto L_101a0638;
    }
    edi = eax;
    COW_AT(101a0602)
    t26 = rd32(sp0 - 4u);
    wr32(sp0 - 0x10u, t26);
    g->edi = edi;
    g->eax = eax;
    g->ecx = COW_IMG(0x1066278cu);
    g->esp = sp0 - 0xcu;
    COW_RET(0x101a0611u);
    t27 = cow_call_regs(g, COW_IMG(0x101be500u), g->eax, g->ecx, t26, 0, 1, t26);
    t28 = g->ecx;
    t29 = g->edx;
    eax = t27;
    ecx = t28;
    edx = t29;
    COW_AT(101a0611)
    wr32(sp0 - 0x10u, esi);
    wr32(sp0 - 0x14u, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    COW_RET(0x101a061bu);
    cow_thiscall(g, rd32(sp0 + 0x11cu), ecx, 0);
    t30 = g->ecx;
    t31 = g->edx;
    ecx = t30;
    edx = t31;
    COW_AT(101a061b)
    t32 = rd32(sp0 + 0x124u);
    wr32(sp0 - 0x18u, t32);
    eax = t32;
L_101a0623: ;
    COW_AT(101a0623)
    wr32(sp0 - 0x1cu, 0xffffffffu);
    wr32(sp0 - 0x20u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    COW_RET(0x101a062eu);
    t40 = cow_thiscall(g, rd32(sp0 + 0x120u), ecx, 0);
    t41 = g->edx;
    eax = t40;
    edx = t41;
    COW_AT(101a062e)
    loc_4 = rd32(sp0 - 4u);
    loc_8 = rd32(sp0 - 8u);
    loc_c = rd32(sp0 - 0xcu);
L_101a0631: ;
    COW_AT(101a0631)
    g->esi = loc_8;
    g->edi = loc_c;
    g->edx = edx;
    return 0xffffffffu;
L_101a0638: ;
    COW_AT(101a0638)
    t33 = rd32(sp0 - 4u);
    wr32(sp0 - 0x10u, t33);
    g->edi = edi;
    g->eax = eax;
    g->ecx = COW_IMG(0x1066278cu);
    g->esp = sp0 - 0xcu;
    COW_RET(0x101a0647u);
    t34 = cow_call_regs(g, COW_IMG(0x101be500u), g->eax, g->ecx, edx, 0, 1, t33);
    t35 = g->ecx;
    t36 = g->edx;
    eax = t34;
    ecx = t35;
    edx = t36;
    COW_AT(101a0647)
    if ((int32_t)eax >= 0) goto L_101a065f;
    COW_AT(101a064b)
    wr32(sp0 - 0x10u, esi);
    wr32(sp0 - 0x14u, 0u);
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    COW_RET(0x101a0655u);
    t37 = cow_thiscall(g, rd32(sp0 + 0x11cu), ecx, 0);
    t38 = g->ecx;
    eax = t37;
    ecx = t38;
    COW_AT(101a0655)
    t39 = rd32(sp0 + 0x124u);
    wr32(sp0 - 0x18u, t39);
    edx = t39;
    goto L_101a0623;
L_101a065f: ;
    COW_AT(101a065f)
    t42 = rd32(sp0 + 0x124u);
    wr32(sp0 - 0x10u, t42);
    wr32(sp0 - 0x14u, edi);
    wr32(sp0 - 0x18u, esi);
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    COW_RET(0x101a0670u);
    cow_thiscall(g, rd32(sp0 + 0x120u), ecx, 0);
    t43 = g->edx;
    edx = t43;
    COW_AT(101a0670)
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    g->edx = edx;
    return edi;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101a04e0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101a04f0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        sf = g->sf;
        in_esi = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 0xcu, in_edi);
        (void)sp0;
        return 1;
    }
    case 0x101a04ffu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        sf = g->sf;
        in_esi = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 0xcu, in_edi);
        (void)sp0;
        return 1;
    }
    case 0x101a050eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        sf = g->sf;
        in_esi = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 0xcu, in_edi);
        (void)sp0;
        return 1;
    }
    case 0x101a051du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 0x10u, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x101a0527u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 0x10u, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x101a053du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 0x18u, sp0 - 4u);
        wr32(sp0 - 0x14u, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x101a0545u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 0x18u, sp0 - 4u);
        wr32(sp0 - 0x14u, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x101a0550u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 0x18u, sp0 - 4u);
        wr32(sp0 - 0x14u, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x101a0554u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 0x18u, sp0 - 4u);
        wr32(sp0 - 0x14u, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x101a0566u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101a056au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101a0571u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101a057cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101a0580u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101a0584u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101a0593u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101a059au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101a059cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0xcu;
        g->of = (uint8_t)(0u);
        (void)sp0;
        return 1;
    }
    case 0x101a059eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101a05adu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101a05b4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101a05beu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101a05c7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101a05d6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101a05dfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101a05ebu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101a05fcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101a0602u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101a0611u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101a061bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101a0623u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x101a062eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x101a0631u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101a0638u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101a0647u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101a064bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101a0655u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101a065fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101a0670u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101a04e0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101a04e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
