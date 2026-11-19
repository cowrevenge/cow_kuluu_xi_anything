/* f_0x100daf30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=0 */
uint32_t cow_fn_100daf30(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_10;
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
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100daf41u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_esi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0xcu); goto E_100daf41;
    case 0x100daf48u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; in_esi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0xcu); goto E_100daf48;
    case 0x100daf68u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_100daf68;
    case 0x100daf71u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_100daf71;
    case 0x100daf7au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_100daf7a;
    case 0x100daf83u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_100daf83;
    case 0x100daf8du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_100daf8d;
    case 0x100daf97u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_100daf97;
    case 0x100dafa5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_100dafa5;
    case 0x100dafb3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_100dafb3;
    case 0x100dafc7u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; in_esi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0xcu); goto E_100dafc7;
    case 0x100dafe4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_100dafe4;
    case 0x100dafe7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_100dafe7;
    case 0x100daff2u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; in_esi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0xcu); goto E_100daff2;
    case 0x100db018u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_100db018;
    case 0x100db029u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; loc_10 = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_100db029;
    case 0x100db036u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; in_esi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0xcu); goto E_100db036;
    case 0x100db051u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_esi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0xcu); goto E_100db051;
    case 0x100db05au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_esi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0xcu); goto E_100db05a;
    case 0x100db087u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; loc_10 = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0xcu); goto E_100db087;
    case 0x100db08au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; loc_10 = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0xcu); goto E_100db08a;
    case 0x100db08cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; loc_10 = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0xcu); goto E_100db08c;
    case 0x100db09du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; loc_10 = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); self = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_100db09d;
    case 0x100db0a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; loc_10 = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); self = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_100db0a6;
    case 0x100db0b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; loc_10 = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); self = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_100db0b0;
    case 0x100db0b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = rd32(sp0 - 0xcu); self = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_100db0b8;
    case 0x100db0c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = rd32(sp0 - 0xcu); self = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_100db0c1;
    case 0x100db0cau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = rd32(sp0 - 0xcu); self = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_100db0ca;
    case 0x100db0d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = rd32(sp0 - 0xcu); self = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_100db0d3;
    case 0x100db0dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_100db0dc;
    case 0x100db0e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = rd32(sp0 - 0xcu); self = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_100db0e2;
    case 0x100db0e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; loc_10 = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_100db0e6;
    default: break;
    }
#endif

    COW_AT(100daf30)
    if (rd32(self + 8u) > 4u)
    {
        eax = rd32(self + 8u);
        goto L_100db0e2;
    }
    eax = rd32(self + 8u);
    COW_AT(100daf41)
    t1 = rd32(COW_IMG(0x100db0ecu) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x100daf48u: goto L_100daf48;
    case 0x100dafc7u: goto L_100dafc7;
    case 0x100daff2u: goto L_100daff2;
    case 0x100db036u: goto L_100db036;
    case 0x100db051u: goto L_100db051;
    default: rt_fatal(g, COW_IMG(0x100daf41u), "switch");
    }
    return 0;
L_100daf48: ;
    COW_AT(100daf48)
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t62 = cow_call_regs(g, COW_IMG(0x100da750u), eax, self, g->edx, 1, 0);
    t63 = g->ecx;
    t64 = g->edx;
    g->ecx = t63;
    g->edx = t64;
    t65 = cow_stdcall(g, COW_IMG(0x10310bbdu), 0);
    t66 = g->ecx;
    t67 = g->edx;
    wr32(self + 0xb8u, t65);
    if (rd32(self + 0x14u) == 0xcu)
    {
        eax = rd32(self + 0x14u);
        ebx = (in_ebx & 0xffffff00u) | (uint8_t)t62;
        goto L_100db0e6;
    }
    eax = rd32(self + 0x14u);
    ecx = t66;
    edx = t67;
    ebx = (in_ebx & 0xffffff00u) | (uint8_t)t62;
    COW_AT(100daf68)
    if (eax == 0x15u) goto L_100db0e6;
    COW_AT(100daf71)
    if (eax == 0xbu) goto L_100db0e6;
    COW_AT(100daf7a)
    if (eax == 0xeu) goto L_100db0e6;
    COW_AT(100daf83)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t68 = cow_stdcall(g, COW_IMG(0x100fc160u), 0);
    t69 = g->ecx;
    t70 = g->edx;
    if ((t68 >> 8u & 2u) == 0u)
    {
        eax = t68;
        ecx = t69;
        edx = t70;
        goto L_100daf97;
    }
    eax = t68;
    ecx = t69;
    edx = t70;
    COW_AT(100daf8d)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t71 = cow_stdcall(g, COW_IMG(0x100fc160u), 0);
    t72 = g->ecx;
    t73 = g->edx;
    if ((t71 >> 8u & 4u) == 0u) goto L_100dafb3;
    eax = t71;
    ecx = t72;
    edx = t73;
L_100daf97: ;
    COW_AT(100daf97)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t74 = cow_stdcall(g, COW_IMG(0x100fc160u), 0);
    t75 = g->ecx;
    t76 = g->edx;
    if ((t74 >> 8u & 0x20u) == 0u)
    {
        eax = t74;
        goto L_100db0e6;
    }
    eax = t74;
    ecx = t75;
    edx = t76;
    COW_AT(100dafa5)
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t77 = cow_stdcall(g, COW_IMG(0x100fc160u), 0);
    if ((t77 >> 8u & 0x40u) != 0u)
    {
        eax = t77;
        goto L_100db0e6;
    }
L_100dafb3: ;
    COW_AT(100dafb3)
    t78 = rd32(self + 8u) + 1u;
    wr32(self + 8u, t78);
    wr8(COW_IMG(0x10482f1eu), 1u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    return (t78 & 0xffffff00u) | (uint8_t)ebx;
L_100dafc7: ;
    COW_AT(100dafc7)
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t55 = cow_call_regs(g, COW_IMG(0x100da750u), eax, self, g->edx, 1, 0);
    t56 = g->ecx;
    t57 = g->edx;
    g->ecx = t56;
    g->edx = t57;
    t58 = cow_stdcall(g, COW_IMG(0x10310bbdu), 0);
    t59 = g->ecx;
    t60 = g->edx;
    wr32(self + 0xb8u, t58);
    if (rd8(COW_IMG(0x10482f1eu)) != 0u)
    {
        eax = (t58 & 0xffffff00u) | rd8(COW_IMG(0x10482f1eu));
        ecx = t59;
        edx = t60;
        ebx = (in_ebx & 0xffffff00u) | (uint8_t)t55;
    }
    else
    {
        eax = (t58 & 0xffffff00u) | rd8(COW_IMG(0x10482f1eu));
        ecx = t59;
        edx = t60;
        ebx = (in_ebx & 0xffffff00u) | (uint8_t)t55;
    COW_AT(100dafe4)
        wr32(self + 8u, rd32(self + 8u) + 1u);
    }
    COW_AT(100dafe7)
    g->esp = sp0 - 0xcu;
    t61 = cow_call_regs(g, COW_IMG(0x1008abe0u), eax, g->ecx, g->edx, 1, 0);
    g->ebx = in_ebx;
    g->esi = in_esi;
    return (t61 & 0xffffff00u) | (uint8_t)ebx;
L_100daff2: ;
    COW_AT(100daff2)
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t41 = cow_call_regs(g, COW_IMG(0x100da750u), eax, self, g->edx, 1, 0);
    t42 = g->ecx;
    t43 = g->edx;
    g->ecx = t42;
    g->edx = t43;
    t44 = cow_stdcall(g, COW_IMG(0x10310bbdu), 0);
    t45 = g->ecx;
    t46 = g->edx;
    wr32(self + 0xb8u, t44);
    g->ecx = t45;
    g->edx = t46;
    t47 = cow_call_regs(g, COW_IMG(0x1008abe0u), t44, g->ecx, g->edx, 1, 0);
    t48 = g->ecx;
    t49 = g->edx;
    g->ecx = t48;
    g->edx = t49;
    t50 = cow_stdcall(g, COW_IMG(0x100f10f0u), 0);
    t51 = g->ecx;
    t52 = g->edx;
    if (t50 != 0u)
    {
        eax = t50;
        ebx = (in_ebx & 0xffffff00u) | (uint8_t)t41;
        goto L_100db0e6;
    }
    eax = t50;
    ecx = t51;
    edx = t52;
    ebx = (in_ebx & 0xffffff00u) | (uint8_t)t41;
    COW_AT(100db018)
    g->esp = sp0 - 0xcu;
    t53 = cow_call_regs(g, COW_IMG(0x100f76d0u), eax, g->ecx, g->edx, 1, 1, eax);
    if ((uint8_t)t53 != 1u)
    {
        eax = t53;
        goto L_100db0e6;
    }
    COW_AT(100db029)
    t54 = rd32(self + 8u) + 1u;
    wr32(self + 8u, t54);
    g->ebx = in_ebx;
    g->esi = in_esi;
    return (t54 & 0xffffff00u) | (uint8_t)ebx;
L_100db036: ;
    COW_AT(100db036)
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t36 = cow_call_regs(g, COW_IMG(0x100da750u), eax, self, g->edx, 1, 0);
    t37 = g->ecx;
    t38 = g->edx;
    t39 = rd32(self + 8u) + 1u;
    wr32(self + 8u, t39);
    g->eax = t39;
    t40 = cow_stdcall(g, COW_IMG(0x10017670u), 0);
    g->ebx = in_ebx;
    g->esi = in_esi;
    return (t40 & 0xffffff00u) | (uint8_t)t36;
L_100db051: ;
    COW_AT(100db051)
    g->eax = eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t2 = cow_stdcall(g, COW_IMG(0x10016410u), 0);
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 != 0u)
    {
        eax = t2;
        ecx = t3;
        edx = t4;
        goto L_100db0b8;
    }
    eax = t2;
    ecx = t3;
    edx = t4;
    COW_AT(100db05a)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t5 = cow_cdecl(g, COW_IMG(0x100fc180u), 1, 0x400u);
    t6 = g->ecx;
    t7 = g->edx;
    g->ecx = t6;
    g->edx = t7;
    g->esp = sp0 - 0x10u;
    t8 = cow_cdecl(g, COW_IMG(0x100fc180u), 1, 0x4000u);
    t9 = g->ecx;
    t10 = g->edx;
    g->ecx = t9;
    g->edx = t10;
    g->esp = sp0 - 0x14u;
    t11 = cow_cdecl(g, COW_IMG(0x100fc180u), 1, 1u);
    t12 = g->ecx;
    t13 = g->edx;
    g->ecx = t12;
    g->edx = t13;
    g->esp = sp0 - 0xcu;
    t14 = cow_stdcall(g, COW_IMG(0x100f7960u), 0);
    t15 = g->ecx;
    t16 = g->edx;
    g->ecx = t15;
    g->edx = t16;
    t17 = cow_stdcall(g, COW_IMG(0x100f7a80u), 0);
    t18 = g->ecx;
    t19 = g->edx;
    if (t17 != 1u)
    {
        eax = t17;
        ecx = t18;
        edx = t19;
    COW_AT(100db08a)
        loc_10 = 0u;
    }
    else
    {
        eax = t17;
        ecx = t18;
        edx = t19;
    COW_AT(100db087)
        loc_10 = eax;
    }
    COW_AT(100db08c)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t20 = cow_cdecl(g, COW_IMG(0x100e46a0u), 2, 1u, loc_10);
    t21 = g->ecx;
    t22 = g->edx;
    wr32(self + 8u, 0u);
    eax = t20;
    ecx = t21;
    edx = t22;
L_100db09d: ;
    COW_AT(100db09d)
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t35 = cow_stdcall(g, COW_IMG(0x10310dd8u), 0);
    if (t35 != 0u)
    {
        eax = t35;
    }
    else
    {
        eax = t35;
    COW_AT(100db0a6)
        wr32(COW_IMG(0x10456900u), 0xffffffffu);
    }
    COW_AT(100db0b0)
    g->ebx = in_ebx;
    g->esi = in_esi;
    return (eax & 0xffffff00u) | 1u;
L_100db0b8: ;
    COW_AT(100db0b8)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t23 = cow_stdcall(g, COW_IMG(0x100dbeb0u), 0);
    t24 = g->ecx;
    t25 = g->edx;
    if ((uint8_t)t23 != 1u)
    {
        eax = t23;
        goto L_100db0dc;
    }
    eax = t23;
    ecx = t24;
    edx = t25;
    COW_AT(100db0c1)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t26 = cow_stdcall(g, COW_IMG(0x100dbca0u), 0);
    t27 = g->ecx;
    t28 = g->edx;
    if ((uint8_t)t26 != 1u)
    {
        eax = t26;
        goto L_100db0dc;
    }
    eax = t26;
    ecx = t27;
    edx = t28;
    COW_AT(100db0ca)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t29 = cow_stdcall(g, COW_IMG(0x100dc2c0u), 0);
    t30 = g->ecx;
    t31 = g->edx;
    if ((uint8_t)t29 != 1u)
    {
        eax = t29;
        goto L_100db0dc;
    }
    eax = t29;
    ecx = t30;
    edx = t31;
    COW_AT(100db0d3)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t32 = cow_stdcall(g, COW_IMG(0x100f9d70u), 0);
    t33 = g->ecx;
    t34 = g->edx;
    if ((uint8_t)t32 == 1u)
    {
        eax = t32;
        ecx = t33;
        edx = t34;
        goto L_100db09d;
    }
    eax = t32;
L_100db0dc: ;
    COW_AT(100db0dc)
    g->ebx = in_ebx;
    g->esi = in_esi;
    return eax & 0xffffff00u;
L_100db0e2: ;
    COW_AT(100db0e2)
    ebx = (in_ebx & 0xffffff00u) | self >> 0x18u;
L_100db0e6: ;
    COW_AT(100db0e6)
    g->ebx = in_ebx;
    g->esi = in_esi;
    return (eax & 0xffffff00u) | (uint8_t)ebx;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100daf30(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100daf41u:
    {
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        g->esi = self;
        wr32(sp0 - 8u, in_ebx);
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x100daf48u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 8u, in_ebx);
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x100daf68u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x100daf71u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x100daf7au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x100daf83u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x100daf8du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x100daf97u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x100dafa5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x100dafb3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x100dafc7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 8u, in_ebx);
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x100dafe4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x100dafe7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100daff2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 8u, in_ebx);
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x100db018u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x100db029u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x100db036u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 8u, in_ebx);
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x100db051u:
    {
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        g->esi = self;
        wr32(sp0 - 8u, in_ebx);
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x100db05au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 8u, in_ebx);
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x100db087u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 8u, in_ebx);
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x100db08au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 8u, in_ebx);
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x100db08cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 8u, in_ebx);
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x100db09du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        loc_10 = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 8u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x100db0a6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        loc_10 = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 8u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x100db0b0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        loc_10 = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 8u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x100db0b8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 8u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x100db0c1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 8u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x100db0cau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 8u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x100db0d3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 8u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x100db0dcu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100db0e2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 8u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x100db0e6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        loc_10 = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100daf30(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100daf30(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
