/* f_0x103124c7 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_103124c7(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_164;
    uint32_t loc_18;
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
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t61;
    uint32_t t62;
    uint32_t t63;
    uint32_t t64;
    uint32_t t65;
    uint32_t t66;
    uint32_t t67;
    uint32_t t68;
    uint32_t t69;
    uint32_t t7;
    uint32_t t70;
    uint32_t t71;
    uint32_t t72;
    uint32_t t73;
    uint32_t t74;
    uint32_t t75;
    uint32_t t76;
    uint32_t t77;
    uint32_t t78;
    uint32_t t79;
    uint32_t t8;
    uint32_t t80;
    uint32_t t81;
    uint32_t t82;
    uint32_t t83;
    uint32_t t84;
    uint32_t t85;
    uint32_t t86;
    uint32_t t87;
    uint32_t t88;
    uint32_t t89;
    uint32_t t9;
    uint32_t t90;
    uint32_t t91;
    uint32_t t92;
    uint32_t t93;
    uint32_t t94;
    uint32_t t95;
    uint32_t t96;
    uint32_t t97;
    uint32_t t98;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 660u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x103124e7u: eax = g->eax; edx = g->edx; in_edi = g->edi; in_esi = rd32(sp0 - 0x270u); in_ebx = rd32(sp0 - 0x26cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x26cu); g->esi = rd32(sp0 - 0x270u); goto E_103124e7;
    case 0x103124efu: eax = g->eax; edx = g->edx; in_edi = g->edi; in_esi = rd32(sp0 - 0x270u); in_ebx = rd32(sp0 - 0x26cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x26cu); g->esi = rd32(sp0 - 0x270u); goto E_103124ef;
    case 0x103124f5u: eax = g->eax; edx = g->edx; in_edi = g->edi; in_esi = rd32(sp0 - 0x270u); in_ebx = rd32(sp0 - 0x26cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x26cu); g->esi = rd32(sp0 - 0x270u); goto E_103124f5;
    case 0x103124fau: eax = g->eax; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x274u); in_esi = rd32(sp0 - 0x270u); in_ebx = rd32(sp0 - 0x26cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x26cu); g->edi = rd32(sp0 - 0x274u); g->esi = rd32(sp0 - 0x270u); goto E_103124fa;
    case 0x10312513u: eax = g->eax; edx = g->edx; in_edi = g->edi; in_esi = rd32(sp0 - 0x270u); in_ebx = rd32(sp0 - 0x26cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x26cu); g->esi = rd32(sp0 - 0x270u); goto E_10312513;
    case 0x10312522u: eax = g->eax; edx = g->edx; in_edi = g->edi; in_esi = rd32(sp0 - 0x270u); in_ebx = rd32(sp0 - 0x26cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x26cu); g->esi = rd32(sp0 - 0x270u); goto E_10312522;
    case 0x10312527u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_10312527;
    case 0x10312546u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_18 = rd32(sp0 - 0x18u); goto E_10312546;
    case 0x1031255bu: eax = g->eax; edx = g->edx; goto E_1031255b;
    case 0x10312576u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10312576;
    case 0x10312582u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10312582;
    case 0x1031258du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1031258d;
    case 0x10312599u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10312599;
    case 0x103125dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_103125db;
    case 0x103125f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); goto E_103125f1;
    case 0x1031260au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1031260a;
    case 0x10312620u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10312620;
    case 0x10312655u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10312655;
    case 0x1031265du: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1031265d;
    case 0x10312676u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10312676;
    case 0x1031268cu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1031268c;
    case 0x103126b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_103126b3;
    case 0x103126beu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_103126be;
    case 0x103126c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_103126c6;
    case 0x103126cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_103126cb;
    case 0x103126e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_103126e4;
    case 0x103126f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_103126f6;
    case 0x1031271du: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1031271d;
    case 0x10312729u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_164 = rd32(sp0 - 0x164u); goto E_10312729;
    case 0x10312765u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10312765;
    case 0x1031277bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1031277b;
    case 0x1031277du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1031277d;
    default: break;
    }
#endif

    COW_AT(103124c7)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x26cu, in_ebx);
    wr32(sp0 - 0x270u, in_esi);
    wr32(sp0 - 0x274u, in_edi);
    wr32(sp0 - 0x278u, COW_IMG(0x1034a18cu));
    wr32(sp0 - 0x27cu, arg1);
    g->esp = sp0 - 0x274u;
    t1 = cow_call_regs(g, COW_IMG(0x10319f33u), g->eax, self, in_edx, 1, 2, arg1, COW_IMG(0x1034a18cu));
    t2 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        edx = t2;
        goto L_103124fa;
    }
    eax = t1;
    edx = t2;
    COW_AT(103124e7)
    if (rd8(arg1 + 1u) != 0x3au) goto L_10312522;
    COW_AT(103124ef)
    if (rd8(arg1) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(arg1);
        goto L_10312513;
    }
    eax = (eax & 0xffffff00u) | rd8(arg1);
    COW_AT(103124f5)
    if (rd8(arg1 + 2u) != 0u) goto L_10312513;
L_103124fa: ;
    COW_AT(103124fa)
    g->eax = eax;
    g->esp = sp0 - 0x274u;
    t94 = cow_fastcall(g, COW_IMG(0x10319c89u), COW_IMG(0x1034a18cu), edx, 0);
    t95 = g->ecx;
    t96 = g->edx;
    wr32(sp0 - 0x278u, 2u);
    wr32(t94, 2u);
    t97 = cow_fastcall(g, COW_IMG(0x10319c92u), t95, t96, 0);
    t98 = g->edx;
    wr32(t97, 2u);
    eax = 0xffffffffu;
    edx = t98;
L_1031277d: ;
    COW_AT(1031277d)
    g->ebx = rd32(sp0 - 0x26cu);
    g->esi = rd32(sp0 - 0x270u);
    g->edi = rd32(sp0 - 0x274u);
    g->ebp = rd32(sp0 - 4u);
    g->edx = edx;
    return eax;
L_10312513: ;
    COW_AT(10312513)
    wr32(sp0 - 0x278u, (uint32_t)(int8_t)eax);
    g->esp = sp0 - 0x26cu;
    t3 = cow_call_regs(g, COW_IMG(0x10319eb8u), (uint32_t)(int8_t)eax, COW_IMG(0x1034a18cu), edx, 1, 3, (uint32_t)(int8_t)eax, in_edi, in_esi);
    t4 = g->edx;
    eax = t3 - 0x60u;
    ecx = rd32(sp0 - 0x278u);
    edx = t4;
L_10312527: ;
    COW_AT(10312527)
    wr32(sp0 - 0x24u, eax);
    wr32(sp0 - 0x278u, sp0 - 0x164u);
    wr32(sp0 - 0x27cu, arg1);
    g->eax = sp0 - 0x164u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x274u;
    t8 = cow_stdcall(g, rd32(COW_IMG(0x10329128u)), 2, arg1, sp0 - 0x164u);   /* kernel32.dll!FindFirstFileA */
    t9 = g->ecx;
    t10 = g->edx;
    wr32(sp0 - 0x18u, t8);
    if (t8 != 0xffffffffu)
    {
        ecx = t9;
        edx = t10;
        loc_18 = t8;
        goto L_103125f1;
    }
    eax = t8;
    ecx = t9;
    edx = t10;
    COW_AT(10312546)
    wr32(sp0 - 0x278u, COW_IMG(0x1034a188u));
    wr32(sp0 - 0x27cu, arg1);
    g->eax = eax;
    g->esp = sp0 - 0x274u;
    t11 = cow_call_regs(g, COW_IMG(0x10319f33u), g->eax, ecx, edx, 1, 2, arg1, COW_IMG(0x1034a188u));
    t12 = g->edx;
    if (t11 == 0u)
    {
        eax = t11;
        ecx = COW_IMG(0x1034a188u);
        edx = t12;
        goto L_103125db;
    }
    edx = t12;
    COW_AT(1031255b)
    wr32(sp0 - 0x278u, 0x104u);
    wr32(sp0 - 0x27cu, arg1);
    wr32(sp0 - 0x280u, sp0 - 0x268u);
    g->eax = sp0 - 0x268u;
    g->esp = sp0 - 0x270u;
    t13 = cow_call_regs(g, COW_IMG(0x10319d5du), g->eax, COW_IMG(0x1034a188u), edx, 1, 4, sp0 - 0x268u, arg1, 0x104u, rd32(sp0 - 0x274u));
    t14 = g->ecx;
    t15 = g->edx;
    if (t13 == 0u)
    {
        eax = t13;
        ecx = t14;
        edx = t15;
        goto L_103125db;
    }
    eax = t13;
    ecx = t14;
    edx = t15;
    esi = t13;
    COW_AT(10312576)
    wr32(sp0 - 0x278u, esi);
    g->edx = edx;
    g->esp = sp0 - 0x274u;
    t16 = cow_call_regs(g, COW_IMG(0x10317480u), eax, g->ecx, g->edx, 1, 1, esi);
    t17 = g->edx;
    if (t16 == 3u)
    {
        eax = t16;
        ecx = rd32(sp0 - 0x278u);
        edx = t17;
        goto L_1031258d;
    }
    eax = t16;
    ecx = rd32(sp0 - 0x278u);
    edx = t17;
    COW_AT(10312582)
    wr32(sp0 - 0x278u, esi);
    g->edx = edx;
    g->esp = sp0 - 0x26cu;
    t18 = cow_call_regs(g, COW_IMG(0x10312782u), eax, g->ecx, g->edx, 1, 3, esi, rd32(sp0 - 0x274u), rd32(sp0 - 0x270u));
    t19 = g->edx;
    if (t18 == 0u)
    {
        eax = t18;
        ecx = rd32(sp0 - 0x278u);
        edx = t19;
        goto L_103125db;
    }
    eax = t18;
    ecx = rd32(sp0 - 0x278u);
    edx = t19;
L_1031258d: ;
    COW_AT(1031258d)
    wr32(sp0 - 0x278u, esi);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x274u;
    t20 = cow_stdcall(g, rd32(COW_IMG(0x10329290u)), 1, esi);   /* kernel32.dll!GetDriveTypeA */
    t21 = g->ecx;
    t22 = g->edx;
    if (t20 <= 1u)
    {
        eax = t20;
        ecx = t21;
        edx = t22;
        goto L_103125db;
    }
    eax = t20;
    ecx = t21;
    edx = t22;
    COW_AT(10312599)
    wr32(sp0 - 0x278u, 0xffffffffu);
    wr32(sp0 - 0x27cu, 0u);
    wr32(sp0 - 0x280u, 0u);
    wr32(sp0 - 0x284u, 0u);
    wr32(sp0 - 0x288u, 1u);
    wr32(sp0 - 0x28cu, 1u);
    wr32(sp0 - 0x290u, 0x7bcu);
    wr32(sp0 - 0x164u, 0x10u);
    wr32(sp0 - 0x148u, 0u);
    wr32(sp0 - 0x144u, 0u);
    wr8(sp0 - 0x138u, 0u);
    g->esp = sp0 - 0x274u;
    t23 = cow_call_regs(g, COW_IMG(0x10319c9bu), eax, ecx, edx, 1, 7, 0x7bcu, 1u, 1u, 0u, 0u, 0u, 0xffffffffu);
    t24 = g->ecx;
    t25 = g->edx;
    wr32(arg2 + 0x1cu, t23);
    wr32(arg2 + 0x18u, t23);
    wr32(arg2 + 0x20u, t23);
    eax = t23;
    ecx = t24;
    edx = t25;
    loc_164 = 0x10u;
L_10312729: ;
    COW_AT(10312729)
    wr32(sp0 - 0x278u, arg1);
    wr32(sp0 - 0x27cu, loc_164);
    g->eax = eax;
    g->esp = sp0 - 0x26cu;
    t82 = cow_call_regs(g, COW_IMG(0x1031240fu), g->eax, g->ecx, edx, 1, 4, loc_164, arg1, rd32(sp0 - 0x274u), rd32(sp0 - 0x270u));
    t83 = g->edx;
    wr16(arg2 + 6u, (uint16_t)t82);
    t84 = rd32(sp0 - 0x144u);
    wr32(arg2 + 0x14u, t84);
    t85 = rd32(sp0 - 0x24u) - 1u;
    wr32(arg2, t85);
    wr32(arg2 + 0x10u, t85);
    wr16(arg2 + 8u, 1u);
    wr16(arg2 + 4u, 0u);
    wr16(arg2 + 0xcu, 0u);
    wr16(arg2 + 0xau, 0u);
    eax = 0u;
    edx = t83;
    goto L_1031277d;
L_10312522: ;
    COW_AT(10312522)
    g->eax = eax;
    g->esp = sp0 - 0x274u;
    t5 = cow_fastcall(g, COW_IMG(0x10319e02u), COW_IMG(0x1034a18cu), edx, 0);
    t6 = g->ecx;
    t7 = g->edx;
    eax = t5;
    ecx = t6;
    edx = t7;
    goto L_10312527;
L_103125db: ;
    COW_AT(103125db)
    g->eax = eax;
    g->esp = sp0 - 0x274u;
    t26 = cow_fastcall(g, COW_IMG(0x10319c89u), ecx, edx, 0);
    t27 = g->ecx;
    t28 = g->edx;
    wr32(sp0 - 0x278u, 2u);
    wr32(t26, 2u);
    t29 = cow_fastcall(g, COW_IMG(0x10319c92u), t27, t28, 0);
    t30 = g->edx;
    wr32(t29, 2u);
    edx = t30;
L_1031277b: ;
    COW_AT(1031277b)
    eax = 0xffffffffu;
    goto L_1031277d;
L_103125f1: ;
    COW_AT(103125f1)
    wr32(sp0 - 0x278u, sp0 - 0x20u);
    wr32(sp0 - 0x27cu, sp0 - 0x150u);
    g->eax = sp0 - 0x150u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x274u;
    t31 = cow_stdcall(g, rd32(COW_IMG(0x10329294u)), 2, sp0 - 0x150u, sp0 - 0x20u);   /* kernel32.dll!FileTimeToLocalFileTime */
    t32 = g->ecx;
    t33 = g->edx;
    if (t31 == 0u)
    {
        eax = t31;
        ecx = t32;
        edx = t33;
        goto L_10312765;
    }
    ecx = t32;
    edx = t33;
    COW_AT(1031260a)
    wr32(sp0 - 0x278u, sp0 - 0x14u);
    wr32(sp0 - 0x27cu, sp0 - 0x20u);
    g->eax = sp0 - 0x20u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x274u;
    t34 = cow_stdcall(g, rd32(COW_IMG(0x10329298u)), 2, sp0 - 0x20u, sp0 - 0x14u);   /* kernel32.dll!FileTimeToSystemTime */
    t35 = g->ecx;
    t36 = g->edx;
    if (t34 == 0u)
    {
        eax = t34;
        ecx = t35;
        edx = t36;
        goto L_10312765;
    }
    ecx = t35;
    edx = t36;
    COW_AT(10312620)
    wr32(sp0 - 0x278u, 0xffffffffu);
    t37 = rd16(sp0 - 8u);
    wr32(sp0 - 0x27cu, t37);
    t38 = rd16(sp0 - 0xau);
    wr32(sp0 - 0x280u, t38);
    t39 = rd16(sp0 - 0xcu);
    wr32(sp0 - 0x284u, t39);
    t40 = rd16(sp0 - 0xeu);
    wr32(sp0 - 0x288u, t40);
    t41 = rd16(sp0 - 0x12u);
    wr32(sp0 - 0x28cu, t41);
    t42 = rd16(sp0 - 0x14u);
    wr32(sp0 - 0x290u, t42);
    g->esp = sp0 - 0x274u;
    t43 = cow_call_regs(g, COW_IMG(0x10319c9bu), t42, ecx, edx, 1, 7, t42, t41, t40, t39, t38, t37, 0xffffffffu);
    t44 = g->ecx;
    t45 = g->edx;
    t46 = rd32(sp0 - 0x158u);
    wr32(arg2 + 0x1cu, t43);
    if (t46 != 0u)
    {
        ecx = t44;
        edx = t45;
        goto L_1031265d;
    }
    eax = t43;
    ecx = t44;
    edx = t45;
    COW_AT(10312655)
    if (rd32(sp0 - 0x154u) == 0u) goto L_103126b3;
L_1031265d: ;
    COW_AT(1031265d)
    wr32(sp0 - 0x278u, sp0 - 0x20u);
    wr32(sp0 - 0x27cu, sp0 - 0x158u);
    g->eax = sp0 - 0x158u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x274u;
    t47 = cow_stdcall(g, rd32(COW_IMG(0x10329294u)), 2, sp0 - 0x158u, sp0 - 0x20u);   /* kernel32.dll!FileTimeToLocalFileTime */
    t48 = g->ecx;
    t49 = g->edx;
    if (t47 == 0u)
    {
        eax = t47;
        ecx = t48;
        edx = t49;
        goto L_10312765;
    }
    ecx = t48;
    edx = t49;
    COW_AT(10312676)
    wr32(sp0 - 0x278u, sp0 - 0x14u);
    wr32(sp0 - 0x27cu, sp0 - 0x20u);
    g->eax = sp0 - 0x20u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x274u;
    t50 = cow_stdcall(g, rd32(COW_IMG(0x10329298u)), 2, sp0 - 0x20u, sp0 - 0x14u);   /* kernel32.dll!FileTimeToSystemTime */
    t51 = g->ecx;
    t52 = g->edx;
    if (t50 == 0u)
    {
        eax = t50;
        ecx = t51;
        edx = t52;
        goto L_10312765;
    }
    ecx = t51;
    edx = t52;
    COW_AT(1031268c)
    wr32(sp0 - 0x278u, 0xffffffffu);
    t53 = rd16(sp0 - 8u);
    wr32(sp0 - 0x27cu, t53);
    t54 = rd16(sp0 - 0xau);
    wr32(sp0 - 0x280u, t54);
    t55 = rd16(sp0 - 0xcu);
    wr32(sp0 - 0x284u, t55);
    t56 = rd16(sp0 - 0xeu);
    wr32(sp0 - 0x288u, t56);
    t57 = rd16(sp0 - 0x12u);
    wr32(sp0 - 0x28cu, t57);
    t58 = rd16(sp0 - 0x14u);
    wr32(sp0 - 0x290u, t58);
    g->esp = sp0 - 0x274u;
    t59 = cow_call_regs(g, COW_IMG(0x10319c9bu), t58, ecx, edx, 1, 7, t58, t57, t56, t55, t54, t53, 0xffffffffu);
    t60 = g->ecx;
    t61 = g->edx;
    eax = t59;
    ecx = t60;
    edx = t61;
L_103126b3: ;
    COW_AT(103126b3)
    t62 = rd32(sp0 - 0x160u);
    wr32(arg2 + 0x18u, eax);
    if (t62 != 0u) goto L_103126cb;
    COW_AT(103126be)
    if (rd32(sp0 - 0x15cu) != 0u) goto L_103126cb;
    COW_AT(103126c6)
    eax = rd32(arg2 + 0x1cu);
L_1031271d: ;
    COW_AT(1031271d)
    t78 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x278u, t78);
    wr32(arg2 + 0x20u, eax);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x274u;
    t79 = cow_stdcall(g, rd32(COW_IMG(0x1032911cu)), 1, t78);   /* kernel32.dll!FindClose */
    t80 = g->ecx;
    t81 = g->edx;
    eax = t79;
    ecx = t80;
    edx = t81;
    loc_164 = rd32(sp0 - 0x164u);
    goto L_10312729;
L_103126cb: ;
    COW_AT(103126cb)
    wr32(sp0 - 0x278u, sp0 - 0x20u);
    wr32(sp0 - 0x27cu, sp0 - 0x160u);
    g->eax = sp0 - 0x160u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x274u;
    t63 = cow_stdcall(g, rd32(COW_IMG(0x10329294u)), 2, sp0 - 0x160u, sp0 - 0x20u);   /* kernel32.dll!FileTimeToLocalFileTime */
    t64 = g->ecx;
    t65 = g->edx;
    if (t63 == 0u)
    {
        eax = t63;
        ecx = t64;
        edx = t65;
        goto L_10312765;
    }
    ecx = t64;
    edx = t65;
    COW_AT(103126e4)
    wr32(sp0 - 0x278u, sp0 - 0x14u);
    wr32(sp0 - 0x27cu, sp0 - 0x20u);
    g->eax = sp0 - 0x20u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x274u;
    t66 = cow_stdcall(g, rd32(COW_IMG(0x10329298u)), 2, sp0 - 0x20u, sp0 - 0x14u);   /* kernel32.dll!FileTimeToSystemTime */
    t67 = g->ecx;
    t68 = g->edx;
    if (t66 == 0u)
    {
        eax = t66;
        ecx = t67;
        edx = t68;
        goto L_10312765;
    }
    ecx = t67;
    edx = t68;
    COW_AT(103126f6)
    wr32(sp0 - 0x278u, 0xffffffffu);
    t69 = rd16(sp0 - 8u);
    wr32(sp0 - 0x27cu, t69);
    t70 = rd16(sp0 - 0xau);
    wr32(sp0 - 0x280u, t70);
    t71 = rd16(sp0 - 0xcu);
    wr32(sp0 - 0x284u, t71);
    t72 = rd16(sp0 - 0xeu);
    wr32(sp0 - 0x288u, t72);
    t73 = rd16(sp0 - 0x12u);
    wr32(sp0 - 0x28cu, t73);
    t74 = rd16(sp0 - 0x14u);
    wr32(sp0 - 0x290u, t74);
    g->esp = sp0 - 0x274u;
    t75 = cow_call_regs(g, COW_IMG(0x10319c9bu), t74, ecx, edx, 1, 7, t74, t73, t72, t71, t70, t69, 0xffffffffu);
    t76 = g->ecx;
    t77 = g->edx;
    eax = t75;
    ecx = t76;
    edx = t77;
    goto L_1031271d;
L_10312765: ;
    COW_AT(10312765)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x274u;
    t86 = cow_stdcall(g, rd32(COW_IMG(0x10329168u)), 0);   /* kernel32.dll!GetLastError */
    t87 = g->ecx;
    t88 = g->edx;
    wr32(sp0 - 0x278u, t86);
    t89 = cow_call_regs(g, COW_IMG(0x10319c16u), g->eax, t87, t88, 1, 1, t86);
    t90 = g->edx;
    t91 = rd32(sp0 - 0x278u);
    t92 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x278u, t92);
    g->edx = t90;
    cow_stdcall(g, rd32(COW_IMG(0x1032911cu)), 1, t92);   /* kernel32.dll!FindClose */
    t93 = g->edx;
    edx = t93;
    goto L_1031277b;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_103124c7(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x103124e7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x270u);
        in_ebx = rd32(sp0 - 0x26cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x274u;
        g->ecx = COW_IMG(0x1034a18cu);
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0x274u, in_edi);
        (void)sp0;
        return 1;
    }
    case 0x103124efu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x270u);
        in_ebx = rd32(sp0 - 0x26cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x274u;
        g->ecx = COW_IMG(0x1034a18cu);
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0x274u, in_edi);
        (void)sp0;
        return 1;
    }
    case 0x103124f5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x270u);
        in_ebx = rd32(sp0 - 0x26cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x274u;
        g->ecx = COW_IMG(0x1034a18cu);
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0x274u, in_edi);
        (void)sp0;
        return 1;
    }
    case 0x103124fau:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x274u);
        in_esi = rd32(sp0 - 0x270u);
        in_ebx = rd32(sp0 - 0x26cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x274u;
        g->ecx = COW_IMG(0x1034a18cu);
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10312513u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x270u);
        in_ebx = rd32(sp0 - 0x26cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x274u;
        g->ecx = COW_IMG(0x1034a18cu);
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0x274u, in_edi);
        (void)sp0;
        return 1;
    }
    case 0x10312522u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x270u);
        in_ebx = rd32(sp0 - 0x26cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x274u;
        g->ecx = COW_IMG(0x1034a18cu);
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0x274u, in_edi);
        (void)sp0;
        return 1;
    }
    case 0x10312527u:
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
        g->esp = sp0 - 0x274u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10312546u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x274u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0xffffffffu;
        wr32(sp0 - 0x278u, sp0 - 0x164u);
        (void)sp0;
        return 1;
    }
    case 0x1031255bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 0x274u;
        g->ecx = COW_IMG(0x1034a188u);
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x10312576u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x274u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->edi = 0xffffffffu;
        wr32(sp0 - 0x280u, sp0 - 0x268u);
        (void)sp0;
        return 1;
    }
    case 0x10312582u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x274u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->edi = 0xffffffffu;
        wr32(sp0 - 0x280u, sp0 - 0x268u);
        (void)sp0;
        return 1;
    }
    case 0x1031258du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x274u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->edi = 0xffffffffu;
        wr32(sp0 - 0x280u, sp0 - 0x268u);
        (void)sp0;
        return 1;
    }
    case 0x10312599u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x274u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->edi = 0xffffffffu;
        wr32(sp0 - 0x280u, sp0 - 0x268u);
        (void)sp0;
        return 1;
    }
    case 0x103125dbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x274u;
        g->ebp = sp0 - 4u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x103125f1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x274u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->edi = 0xffffffffu;
        wr32(sp0 - 0x278u, sp0 - 0x164u);
        (void)sp0;
        return 1;
    }
    case 0x1031260au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x274u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->edi = 0xffffffffu;
        wr32(sp0 - 0x27cu, sp0 - 0x150u);
        wr32(sp0 - 0x278u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10312620u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x274u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->edi = 0xffffffffu;
        wr32(sp0 - 0x27cu, sp0 - 0x20u);
        wr32(sp0 - 0x278u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x10312655u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x274u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x1031265du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x274u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x10312676u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x274u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = 0xffffffffu;
        wr32(sp0 - 0x27cu, sp0 - 0x158u);
        wr32(sp0 - 0x278u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1031268cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x274u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = 0xffffffffu;
        wr32(sp0 - 0x27cu, sp0 - 0x20u);
        wr32(sp0 - 0x278u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x103126b3u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x274u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x103126beu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x274u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x103126c6u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x274u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x103126cbu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x274u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x103126e4u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x274u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = 0xffffffffu;
        wr32(sp0 - 0x27cu, sp0 - 0x160u);
        wr32(sp0 - 0x278u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x103126f6u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x274u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = 0xffffffffu;
        wr32(sp0 - 0x27cu, sp0 - 0x20u);
        wr32(sp0 - 0x278u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1031271du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x274u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10312729u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_164;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_164 = rd32(sp0 - 0x164u);
        g->esp = sp0 - 0x274u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10312765u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x274u;
        g->ebp = sp0 - 4u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x1031277bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x274u;
        g->ebp = sp0 - 4u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x1031277du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x274u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_103124c7(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_103124c7(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
