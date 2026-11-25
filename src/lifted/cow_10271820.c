/* f_0x10271820 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10271820(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_44;
    uint32_t loc_48;
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
    uint32_t t9;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 116u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1027182cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); goto E_1027182c;
    case 0x1027183au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); goto E_1027183a;
    case 0x10271842u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); goto E_10271842;
    case 0x10271848u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10271848;
    case 0x10271850u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10271850;
    case 0x10271858u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10271858;
    case 0x1027185eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1027185e;
    case 0x10271865u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10271865;
    case 0x1027186du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1027186d;
    case 0x10271873u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10271873;
    case 0x10271882u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10271882;
    case 0x10271b0cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10271b0c;
    case 0x10271b15u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10271b15;
    case 0x10271b1fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10271b1f;
    case 0x10271b24u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10271b24;
    case 0x10271b2eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10271b2e;
    case 0x10271b3au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10271b3a;
    case 0x10271b3fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10271b3f;
    case 0x10271b4au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10271b4a;
    default: break;
    }
#endif

    COW_AT(10271820)
    wr32(sp0 - 0x44u, in_esi);
    wr32(sp0 - 0x48u, in_edi);
    ecx = COW_IMG(0x1099cdc4u);
    esi = 0u;
    loc_44 = in_esi;
    loc_48 = in_edi;
L_1027182c: ;
    COW_AT(1027182c)
    t1 = cow_divs(g, esi, 3u);
    t2 = cow_mods(g, esi, 3u);
    if (t2 != 0u)
    {
        edx = t2;
    COW_AT(10271842)
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    else
    {
        edx = t2;
    COW_AT(1027183a)
        x0 = (double)rdf32(COW_IMG(0x1032961cu));
    }
    COW_AT(10271848)
    wrf32(ecx - 4u, (float)x0);
    if (edx != 1u)
    {
    COW_AT(10271858)
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    else
    {
    COW_AT(10271850)
        x0 = (double)rdf32(COW_IMG(0x1032961cu));
    }
    COW_AT(1027185e)
    wrf32(ecx, (float)x0);
    if (edx != 2u)
    {
    COW_AT(1027186d)
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    else
    {
    COW_AT(10271865)
        x0 = (double)rdf32(COW_IMG(0x1032961cu));
    }
    COW_AT(10271873)
    wrf32(ecx + 4u, (float)x0);
    if ((int32_t)(ecx + 0xcu) < (int32_t)COW_IMG(0x1099cee4u))
    {
        ecx = ecx + 0xcu;
        esi = esi + 1u;
        loc_44 = rd32(sp0 - 0x44u);
        loc_48 = rd32(sp0 - 0x48u);
        goto L_1027182c;
    }
    COW_AT(10271882)
    wr32(COW_IMG(0x1099afb8u), rd32(arg1));
    t3 = rd32(arg1 + 4u);
    wr32(COW_IMG(0x1099afbcu), t3);
    t4 = rd32(arg1 + 8u);
    wr32(COW_IMG(0x1099afc0u), t4);
    t5 = rd32(arg1 + 0xcu);
    wr32(COW_IMG(0x1099afc4u), t5);
    t6 = rd32(arg1 + 4u);
    wr32(COW_IMG(0x1099afc8u), t6);
    t7 = rd32(arg1 + 8u);
    wr32(COW_IMG(0x1099afccu), t7);
    wr32(COW_IMG(0x1099afd0u), rd32(arg1));
    t8 = rd32(arg1 + 4u);
    wr32(COW_IMG(0x1099afd4u), t8);
    t9 = rd32(arg1 + 8u);
    wr32(COW_IMG(0x1099afd8u), t9);
    wr32(COW_IMG(0x1099afdcu), rd32(arg1));
    t10 = rd32(arg1 + 0x10u);
    wr32(COW_IMG(0x1099afe0u), t10);
    t11 = rd32(arg1 + 8u);
    wr32(COW_IMG(0x1099afe4u), t11);
    wr32(COW_IMG(0x1099afe8u), rd32(arg1));
    t12 = rd32(arg1 + 4u);
    wr32(COW_IMG(0x1099afecu), t12);
    t13 = rd32(arg1 + 8u);
    wr32(COW_IMG(0x1099aff0u), t13);
    wr32(COW_IMG(0x1099aff4u), rd32(arg1));
    t14 = rd32(arg1 + 4u);
    wr32(COW_IMG(0x1099aff8u), t14);
    t15 = rd32(arg1 + 0x14u);
    wr32(COW_IMG(0x1099affcu), t15);
    t16 = rd32(arg1 + 0xcu);
    wr32(COW_IMG(0x1099b000u), t16);
    t17 = rd32(arg1 + 0x10u);
    wr32(COW_IMG(0x1099b004u), t17);
    t18 = rd32(arg1 + 0x14u);
    wr32(COW_IMG(0x1099b008u), t18);
    wr32(COW_IMG(0x1099b00cu), rd32(arg1));
    t19 = rd32(arg1 + 0x10u);
    wr32(COW_IMG(0x1099b010u), t19);
    t20 = rd32(arg1 + 0x14u);
    wr32(COW_IMG(0x1099b014u), t20);
    t21 = rd32(arg1 + 0xcu);
    wr32(COW_IMG(0x1099b018u), t21);
    t22 = rd32(arg1 + 0x10u);
    wr32(COW_IMG(0x1099b01cu), t22);
    t23 = rd32(arg1 + 0x14u);
    wr32(COW_IMG(0x1099b020u), t23);
    t24 = rd32(arg1 + 0xcu);
    wr32(COW_IMG(0x1099b024u), t24);
    t25 = rd32(arg1 + 4u);
    wr32(COW_IMG(0x1099b028u), t25);
    t26 = rd32(arg1 + 0x14u);
    wr32(COW_IMG(0x1099b02cu), t26);
    t27 = rd32(arg1 + 0xcu);
    wr32(COW_IMG(0x1099b030u), t27);
    t28 = rd32(arg1 + 0x10u);
    wr32(COW_IMG(0x1099b034u), t28);
    t29 = rd32(arg1 + 0x14u);
    wr32(COW_IMG(0x1099b038u), t29);
    t30 = rd32(arg1 + 0xcu);
    wr32(COW_IMG(0x1099b03cu), t30);
    t31 = rd32(arg1 + 0x10u);
    wr32(COW_IMG(0x1099b040u), t31);
    t32 = rd32(arg1 + 8u);
    wr32(COW_IMG(0x1099b044u), t32);
    t33 = rd32(arg1 + 0xcu);
    wr32(COW_IMG(0x1099b048u), t33);
    t34 = rd32(arg1 + 4u);
    wr32(COW_IMG(0x1099b04cu), t34);
    t35 = rd32(arg1 + 0x14u);
    wr32(COW_IMG(0x1099b050u), t35);
    wr32(COW_IMG(0x1099b054u), rd32(arg1));
    t36 = rd32(arg1 + 4u);
    wr32(COW_IMG(0x1099b058u), t36);
    t37 = rd32(arg1 + 0x14u);
    wr32(COW_IMG(0x1099b05cu), t37);
    t38 = rd32(arg1 + 0xcu);
    wr32(COW_IMG(0x1099b060u), t38);
    t39 = rd32(arg1 + 4u);
    wr32(COW_IMG(0x1099b064u), t39);
    t40 = rd32(arg1 + 0x14u);
    wr32(COW_IMG(0x1099b068u), t40);
    t41 = rd32(arg1 + 0xcu);
    wr32(COW_IMG(0x1099b06cu), t41);
    t42 = rd32(arg1 + 4u);
    wr32(COW_IMG(0x1099b070u), t42);
    t43 = rd32(arg1 + 8u);
    wr32(COW_IMG(0x1099b074u), t43);
    wr32(COW_IMG(0x1099b078u), rd32(arg1));
    t44 = rd32(arg1 + 0x10u);
    wr32(COW_IMG(0x1099b07cu), t44);
    t45 = rd32(arg1 + 8u);
    wr32(COW_IMG(0x1099b080u), t45);
    t46 = rd32(arg1 + 0xcu);
    wr32(COW_IMG(0x1099b084u), t46);
    t47 = rd32(arg1 + 0x10u);
    wr32(COW_IMG(0x1099b088u), t47);
    t48 = rd32(arg1 + 8u);
    wr32(COW_IMG(0x1099b08cu), t48);
    wr32(COW_IMG(0x1099b090u), rd32(arg1));
    t49 = rd32(arg1 + 0x10u);
    wr32(COW_IMG(0x1099b094u), t49);
    t50 = rd32(arg1 + 8u);
    wr32(COW_IMG(0x1099b098u), t50);
    wr32(COW_IMG(0x1099b09cu), rd32(arg1));
    t51 = rd32(arg1 + 0x10u);
    wr32(COW_IMG(0x1099b0a0u), t51);
    t52 = rd32(arg1 + 0x14u);
    wr32(COW_IMG(0x1099b0a4u), t52);
    wr32(COW_IMG(0x1099b0a8u), rd32(arg1));
    t53 = rd32(arg1 + 4u);
    wr32(COW_IMG(0x1099b0acu), t53);
    t54 = rd32(arg1 + 0x14u);
    wr32(COW_IMG(0x1099b0b0u), t54);
    wr32(COW_IMG(0x1099b0b4u), rd32(arg1));
    t55 = rd32(arg1 + 0x10u);
    wr32(COW_IMG(0x1099b0b8u), t55);
    t56 = rd32(arg1 + 0x14u);
    wr32(COW_IMG(0x1099b0bcu), t56);
    t57 = rd32(arg1 + 0xcu);
    wr32(COW_IMG(0x1099b0c0u), t57);
    t58 = rd32(arg1 + 0x10u);
    wr32(COW_IMG(0x1099b0c4u), t58);
    t59 = rd32(arg1 + 8u);
    wr32(COW_IMG(0x1099b0c8u), t59);
    t60 = rd32(arg1 + 0xcu);
    wr32(COW_IMG(0x1099b0ccu), t60);
    t61 = rd32(arg1 + 4u);
    wr32(COW_IMG(0x1099b0d0u), t61);
    t62 = rd32(arg1 + 8u);
    wr32(COW_IMG(0x1099b0d4u), t62);
    wr32(sp0 - 0x4cu, sp0 - 0x40u);
    g->eax = sp0 - 0x40u;
    g->ecx = t61;
    g->edx = t62;
    g->esp = sp0 - 0x48u;
    t63 = cow_cdecl(g, COW_IMG(0x1027ebf0u), 1, sp0 - 0x40u);
    t64 = g->ecx;
    t65 = g->edx;
    eax = t63;
    ecx = t64;
    edx = t65;
    COW_AT(10271b0c)
    wr32(sp0 - 0x50u, 0u);
    wr32(sp0 - 0x54u, 1u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x4cu;
    t66 = cow_cdecl(g, COW_IMG(0x10284b40u), 2, 1u, 0u);
    t67 = g->edx;
    eax = t66;
    edx = t67;
    COW_AT(10271b15)
    wr32(sp0 - 0x58u, sp0 - 0x40u);
    g->eax = eax;
    g->ecx = sp0 - 0x40u;
    g->edx = edx;
    g->esp = sp0 - 0x54u;
    t68 = cow_cdecl(g, COW_IMG(0x10283e20u), 1, sp0 - 0x40u);
    t69 = g->ecx;
    t70 = g->edx;
    eax = t68;
    ecx = t69;
    edx = t70;
    COW_AT(10271b1f)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x58u;
    t71 = cow_stdcall(g, COW_IMG(0x10284430u), 0);
    t72 = g->ecx;
    t73 = g->edx;
    eax = t71;
    ecx = t72;
    edx = t73;
    COW_AT(10271b24)
    wr32(sp0 - 0x5cu, COW_IMG(0x1099cdc0u));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x58u;
    t74 = cow_cdecl(g, COW_IMG(0x1028a7b0u), 1, COW_IMG(0x1099cdc0u));
    t75 = g->ecx;
    t76 = g->edx;
    eax = t74;
    ecx = t75;
    edx = t76;
    COW_AT(10271b2e)
    wr32(sp0 - 0x60u, 0x18u);
    wr32(sp0 - 0x64u, COW_IMG(0x1099afb8u));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    t77 = cow_cdecl(g, COW_IMG(0x1028a750u), 2, COW_IMG(0x1099afb8u), 0x18u);
    t78 = g->ecx;
    t79 = g->edx;
    eax = t77;
    ecx = t78;
    edx = t79;
    COW_AT(10271b3a)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x64u;
    t80 = cow_stdcall(g, COW_IMG(0x1028b000u), 0);
    t81 = g->ecx;
    t82 = g->edx;
    eax = t80;
    ecx = t81;
    edx = t82;
    COW_AT(10271b3f)
    wr32(sp0 - 0x68u, 0u);
    wr32(sp0 - 0x6cu, 0x18u);
    wr32(sp0 - 0x70u, 2u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x64u;
    t83 = cow_cdecl(g, COW_IMG(0x1028a820u), 3, 2u, 0x18u, 0u);
    t84 = g->ecx;
    t85 = g->edx;
    eax = t83;
    ecx = t84;
    edx = t85;
    COW_AT(10271b4a)
    g->esp = sp0;
    g->esi = rd32(sp0 - 0x44u);
    g->edi = rd32(sp0 - 0x48u);
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x1028bbf0u), eax, ecx, edx);
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10271820(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1027182cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_44;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x1027183au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_44;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x10271842u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_44;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x10271848u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_44;
        uint32_t loc_48;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x10271850u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x10271858u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x1027185eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x10271865u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x1027186du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x10271873u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x10271882u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x10271b0cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x4cu, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x10271b15u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x4cu, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x10271b1fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x58u, sp0 - 0x40u);
        wr32(sp0 - 0x4cu, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x10271b24u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x58u, sp0 - 0x40u);
        wr32(sp0 - 0x4cu, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x10271b2eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x58u, sp0 - 0x40u);
        wr32(sp0 - 0x4cu, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x10271b3au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x64u;
        wr32(sp0 - 0x58u, sp0 - 0x40u);
        wr32(sp0 - 0x4cu, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x10271b3fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x64u;
        wr32(sp0 - 0x58u, sp0 - 0x40u);
        wr32(sp0 - 0x4cu, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x10271b4au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x70u;
        wr32(sp0 - 0x58u, sp0 - 0x40u);
        wr32(sp0 - 0x4cu, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10271820(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10271820(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
