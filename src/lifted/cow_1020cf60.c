/* f_0x1020cf60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1020cf60(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
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
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 32u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1020cf6fu: in_eax = g->eax; ecx = g->ecx; in_edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1020cf6f;
    case 0x1020cf7bu: in_eax = g->eax; ecx = g->ecx; in_edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1020cf7b;
    case 0x1020cf80u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020cf80;
    case 0x1020cf84u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020cf84;
    case 0x1020cf89u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020cf89;
    case 0x1020cf8du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020cf8d;
    case 0x1020cf9cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020cf9c;
    case 0x1020cfa3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020cfa3;
    case 0x1020cfb6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020cfb6;
    case 0x1020cfbau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020cfba;
    case 0x1020cfcdu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020cfcd;
    case 0x1020cfd1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020cfd1;
    case 0x1020cfe4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020cfe4;
    case 0x1020cfe8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020cfe8;
    case 0x1020cffbu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020cffb;
    case 0x1020cfffu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020cfff;
    case 0x1020d012u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d012;
    case 0x1020d016u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d016;
    case 0x1020d029u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d029;
    case 0x1020d02du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d02d;
    case 0x1020d040u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d040;
    case 0x1020d044u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d044;
    case 0x1020d052u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d052;
    case 0x1020d057u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d057;
    case 0x1020d05bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d05b;
    case 0x1020d064u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d064;
    case 0x1020d06au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d06a;
    case 0x1020d083u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d083;
    case 0x1020d092u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d092;
    case 0x1020d096u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d096;
    case 0x1020d0a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d0a6;
    case 0x1020d0b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d0b1;
    case 0x1020d0c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d0c0;
    case 0x1020d0cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d0cd;
    case 0x1020d0e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d0e6;
    case 0x1020d0f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d0f5;
    case 0x1020d0f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d0f9;
    case 0x1020d109u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d109;
    case 0x1020d114u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d114;
    case 0x1020d123u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d123;
    case 0x1020d130u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d130;
    case 0x1020d149u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d149;
    case 0x1020d158u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d158;
    case 0x1020d15cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d15c;
    case 0x1020d16au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d16a;
    case 0x1020d183u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d183;
    case 0x1020d192u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d192;
    case 0x1020d196u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d196;
    case 0x1020d1a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d1a4;
    case 0x1020d1bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d1bd;
    case 0x1020d1ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d1cc;
    case 0x1020d1d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d1d0;
    case 0x1020d1ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d1dd;
    case 0x1020d1e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d1e1;
    case 0x1020d1ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d1eb;
    case 0x1020d1f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d1f4;
    case 0x1020d203u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_4 = rd32(sp0 - 4u); goto E_1020d203;
    default: break;
    }
#endif

    COW_AT(1020cf60)
    wr32(sp0 - 4u, in_esi);
    if (rd32(COW_IMG(0x10664494u)) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
        loc_4 = in_esi;
        goto L_1020d203;
    }
    ecx = rd32(COW_IMG(0x10664494u));
    COW_AT(1020cf6f)
    t1 = rd16(sp0 + 4u);
    if ((uint16_t)t1 != 5u)
    {
        eax = in_eax;
        edx = in_edx;
        loc_4 = in_esi;
        goto L_1020d203;
    }
    COW_AT(1020cf7b)
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t2 = cow_call_regs(g, COW_IMG(0x1020a410u), in_eax, g->ecx, g->edx, 1, 0);
    t3 = g->ecx;
    t4 = g->edx;
    eax = t2;
    ecx = t3;
    edx = t4;
    COW_AT(1020cf80)
    if ((uint8_t)eax == 0u) goto L_1020cf8d;
    COW_AT(1020cf84)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t5 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    t6 = g->edx;
    eax = t5;
    edx = t6;
    COW_AT(1020cf89)
    g->esi = rd32(sp0 - 4u);
    g->edx = edx;
    return eax;
L_1020cf8d: ;
    COW_AT(1020cf8d)
    if ((uint32_t)(int16_t)rd16(sp0 + 8u) - 1u > 0xeu)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 + 8u) - 1u;
        loc_4 = rd32(sp0 - 4u);
        goto L_1020d203;
    }
    eax = (uint32_t)(int16_t)rd16(sp0 + 8u) - 1u;
    COW_AT(1020cf9c)
    t7 = rd32(COW_IMG(0x1020d208u) + eax * 4u);
    switch (t7 - RD)
    {
    case 0x1020cfa3u: goto L_1020cfa3;
    case 0x1020cfbau: goto L_1020cfba;
    case 0x1020cfd1u: goto L_1020cfd1;
    case 0x1020cfe8u: goto L_1020cfe8;
    case 0x1020cfffu: goto L_1020cfff;
    case 0x1020d016u: goto L_1020d016;
    case 0x1020d02du: goto L_1020d02d;
    case 0x1020d044u: goto L_1020d044;
    case 0x1020d05bu: goto L_1020d05b;
    case 0x1020d096u: goto L_1020d096;
    case 0x1020d0f9u: goto L_1020d0f9;
    case 0x1020d15cu: goto L_1020d15c;
    case 0x1020d196u: goto L_1020d196;
    case 0x1020d1d0u: goto L_1020d1d0;
    case 0x1020d1e1u: goto L_1020d1e1;
    default: rt_fatal(g, COW_IMG(0x1020cf9cu), "switch");
    }
    return 0;
L_1020cfa3: ;
    COW_AT(1020cfa3)
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0xcu, 1u);
    wr32(sp0 - 0x10u, COW_IMG(0x10385af0u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t76 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10385af0u), 1u, 0u);
    t77 = g->edx;
    eax = t76;
    edx = t77;
    COW_AT(1020cfb6)
    g->esi = rd32(sp0 - 4u);
    g->edx = edx;
    return eax;
L_1020cfba: ;
    COW_AT(1020cfba)
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0xcu, 1u);
    wr32(sp0 - 0x10u, COW_IMG(0x10385adcu));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t74 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10385adcu), 1u, 0u);
    t75 = g->edx;
    eax = t74;
    edx = t75;
    COW_AT(1020cfcd)
    g->esi = rd32(sp0 - 4u);
    g->edx = edx;
    return eax;
L_1020cfd1: ;
    COW_AT(1020cfd1)
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0xcu, 1u);
    wr32(sp0 - 0x10u, COW_IMG(0x10385ac8u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t72 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10385ac8u), 1u, 0u);
    t73 = g->edx;
    eax = t72;
    edx = t73;
    COW_AT(1020cfe4)
    g->esi = rd32(sp0 - 4u);
    g->edx = edx;
    return eax;
L_1020cfe8: ;
    COW_AT(1020cfe8)
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0xcu, 1u);
    wr32(sp0 - 0x10u, COW_IMG(0x10385ab4u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t70 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10385ab4u), 1u, 0u);
    t71 = g->edx;
    eax = t70;
    edx = t71;
    COW_AT(1020cffb)
    g->esi = rd32(sp0 - 4u);
    g->edx = edx;
    return eax;
L_1020cfff: ;
    COW_AT(1020cfff)
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0xcu, 1u);
    wr32(sp0 - 0x10u, COW_IMG(0x10385aa0u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t68 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10385aa0u), 1u, 0u);
    t69 = g->edx;
    eax = t68;
    edx = t69;
    COW_AT(1020d012)
    g->esi = rd32(sp0 - 4u);
    g->edx = edx;
    return eax;
L_1020d016: ;
    COW_AT(1020d016)
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0xcu, 1u);
    wr32(sp0 - 0x10u, COW_IMG(0x10385a8cu));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t66 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10385a8cu), 1u, 0u);
    t67 = g->edx;
    eax = t66;
    edx = t67;
    COW_AT(1020d029)
    g->esi = rd32(sp0 - 4u);
    g->edx = edx;
    return eax;
L_1020d02d: ;
    COW_AT(1020d02d)
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0xcu, 1u);
    wr32(sp0 - 0x10u, COW_IMG(0x10385a78u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t64 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10385a78u), 1u, 0u);
    t65 = g->edx;
    eax = t64;
    edx = t65;
    COW_AT(1020d040)
    g->esi = rd32(sp0 - 4u);
    g->edx = edx;
    return eax;
L_1020d044: ;
    COW_AT(1020d044)
    if (rd32(COW_IMG(0x106644c0u)) == 0u)
    {
        loc_4 = rd32(sp0 - 4u);
        goto L_1020d203;
    }
    ecx = rd32(COW_IMG(0x106644c0u));
    COW_AT(1020d052)
    g->eax = eax;
    g->esp = sp0 - 4u;
    t62 = cow_fastcall(g, COW_IMG(0x1020ee70u), ecx, edx, 0);
    t63 = g->edx;
    eax = t62;
    edx = t63;
    COW_AT(1020d057)
    g->esi = rd32(sp0 - 4u);
    g->edx = edx;
    return eax;
L_1020d05b: ;
    COW_AT(1020d05b)
    wr32(sp0 - 8u, ecx + 0x5cu);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t53 = cow_cdecl(g, COW_IMG(0x10107ff0u), 1, ecx + 0x5cu);
    t54 = g->ecx;
    t55 = g->edx;
    eax = t53;
    edx = t55;
    esi = ecx + 0x5cu;
    ecx = t54;
    COW_AT(1020d064)
    wr32(sp0 - 0xcu, esi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t56 = cow_cdecl(g, COW_IMG(0x10107fd0u), 1, esi);
    t57 = g->edx;
    eax = t56;
    edx = t57;
    COW_AT(1020d06a)
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, esi);
    wr32(sp0 - 0x1cu, 1u);
    g->edx = edx;
    g->esp = sp0 - 4u;
    t58 = cow_call_regs(g, COW_IMG(0x1020a9d0u), eax, rd32(COW_IMG(0x10664494u)), g->edx, 0, 6, 1u, esi, 1u, 0u, 0u, 0u);
    t59 = g->edx;
    eax = t58;
    edx = t59;
    COW_AT(1020d083)
    wr32(sp0 - 8u, COW_IMG(0x10385a64u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t60 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10385a64u));
    t61 = g->edx;
    eax = t60;
    edx = t61;
    COW_AT(1020d092)
    g->esi = rd32(sp0 - 4u);
    g->edx = edx;
    return eax;
L_1020d096: ;
    COW_AT(1020d096)
    wr32(sp0 - 8u, 1u);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, sp0 + 4u);
    g->eax = sp0 + 4u;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t40 = cow_thiscall_cdecl(g, COW_IMG(0x100e9730u), ecx, 4, sp0 + 4u, 0u, 0u, 1u);
    t41 = g->edx;
    eax = t40;
    edx = t41;
    COW_AT(1020d0a6)
    if ((uint8_t)eax == 0u)
    {
        loc_4 = rd32(sp0 - 4u);
        goto L_1020d203;
    }
    COW_AT(1020d0b1)
    t42 = rd32(COW_IMG(0x10664494u)) + 0x5cu;
    wr32(sp0 - 8u, t42);
    g->ecx = rd32(COW_IMG(0x10664494u));
    t43 = rd32(COW_IMG(0x10664494u));
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x10107ef0u), 1, t42);
    t44 = g->ecx;
    ecx = t44;
    esi = t42;
    COW_AT(1020d0c0)
    t45 = rd32(rd32(sp0 + 4u));
    wr32(sp0 - 0xcu, t45);
    wr32(sp0 - 0x10u, esi);
    g->eax = t45;
    g->edx = rd32(sp0 + 4u);
    t46 = rd32(sp0 + 4u);
    g->esp = sp0 - 8u;
    t47 = cow_cdecl(g, COW_IMG(0x10107ed0u), 2, esi, t45);
    t48 = g->edx;
    eax = t47;
    edx = t48;
    COW_AT(1020d0cd)
    wr32(sp0 - 8u, 1u);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, esi);
    wr32(sp0 - 0x1cu, 1u);
    g->edx = edx;
    g->esp = sp0 - 4u;
    t49 = cow_call_regs(g, COW_IMG(0x1020a9d0u), eax, rd32(COW_IMG(0x10664494u)), g->edx, 0, 6, 1u, esi, 1u, 0u, 0u, 1u);
    t50 = g->edx;
    eax = t49;
    edx = t50;
    COW_AT(1020d0e6)
    wr32(sp0 - 8u, COW_IMG(0x10385a64u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t51 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10385a64u));
    t52 = g->edx;
    eax = t51;
    edx = t52;
    COW_AT(1020d0f5)
    g->esi = rd32(sp0 - 4u);
    g->edx = edx;
    return eax;
L_1020d0f9: ;
    COW_AT(1020d0f9)
    wr32(sp0 - 8u, 2u);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, sp0 + 4u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t26 = cow_thiscall_cdecl(g, COW_IMG(0x100e9730u), sp0 + 4u, 4, sp0 + 4u, 0u, 0u, 2u);
    t27 = g->ecx;
    t28 = g->edx;
    eax = t26;
    ecx = t27;
    edx = t28;
    COW_AT(1020d109)
    if ((uint8_t)eax == 0u)
    {
        loc_4 = rd32(sp0 - 4u);
        goto L_1020d203;
    }
    COW_AT(1020d114)
    t29 = rd32(COW_IMG(0x10664494u)) + 0x5cu;
    wr32(sp0 - 8u, t29);
    g->edx = rd32(COW_IMG(0x10664494u));
    t30 = rd32(COW_IMG(0x10664494u));
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x10107f40u), 1, t29);
    t31 = g->edx;
    edx = t31;
    esi = t29;
    COW_AT(1020d123)
    t32 = rd32(rd32(sp0 + 4u));
    wr32(sp0 - 0xcu, t32);
    wr32(sp0 - 0x10u, esi);
    g->eax = rd32(sp0 + 4u);
    g->edx = edx;
    t33 = rd32(sp0 + 4u);
    g->esp = sp0 - 8u;
    t34 = cow_cdecl(g, COW_IMG(0x10107f10u), 2, esi, t32);
    t35 = g->edx;
    eax = t34;
    edx = t35;
    COW_AT(1020d130)
    wr32(sp0 - 8u, 2u);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, esi);
    wr32(sp0 - 0x1cu, 1u);
    g->edx = edx;
    g->esp = sp0 - 4u;
    t36 = cow_call_regs(g, COW_IMG(0x1020a9d0u), eax, rd32(COW_IMG(0x10664494u)), g->edx, 0, 6, 1u, esi, 1u, 0u, 0u, 2u);
    t37 = g->edx;
    eax = t36;
    edx = t37;
    COW_AT(1020d149)
    wr32(sp0 - 8u, COW_IMG(0x10385a64u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t38 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10385a64u));
    t39 = g->edx;
    eax = t38;
    edx = t39;
    COW_AT(1020d158)
    g->esi = rd32(sp0 - 4u);
    g->edx = edx;
    return eax;
L_1020d15c: ;
    COW_AT(1020d15c)
    wr32(sp0 - 8u, 0x10000000u);
    wr32(sp0 - 0xcu, ecx + 0x5cu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t20 = cow_cdecl(g, COW_IMG(0x10107e70u), 2, ecx + 0x5cu, 0x10000000u);
    t21 = g->edx;
    eax = t20;
    edx = t21;
    esi = ecx + 0x5cu;
    COW_AT(1020d16a)
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, esi);
    wr32(sp0 - 0x1cu, 1u);
    g->edx = edx;
    g->esp = sp0 - 4u;
    t22 = cow_call_regs(g, COW_IMG(0x1020a9d0u), eax, rd32(COW_IMG(0x10664494u)), g->edx, 0, 6, 1u, esi, 1u, 0u, 0u, 0u);
    t23 = g->edx;
    eax = t22;
    edx = t23;
    COW_AT(1020d183)
    wr32(sp0 - 8u, COW_IMG(0x10385a64u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t24 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10385a64u));
    t25 = g->edx;
    eax = t24;
    edx = t25;
    COW_AT(1020d192)
    g->esi = rd32(sp0 - 4u);
    g->edx = edx;
    return eax;
L_1020d196: ;
    COW_AT(1020d196)
    wr32(sp0 - 8u, 0xf0000u);
    wr32(sp0 - 0xcu, ecx + 0x5cu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t14 = cow_cdecl(g, COW_IMG(0x10107e70u), 2, ecx + 0x5cu, 0xf0000u);
    t15 = g->edx;
    eax = t14;
    edx = t15;
    esi = ecx + 0x5cu;
    COW_AT(1020d1a4)
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, esi);
    wr32(sp0 - 0x1cu, 1u);
    g->edx = edx;
    g->esp = sp0 - 4u;
    t16 = cow_call_regs(g, COW_IMG(0x1020a9d0u), eax, rd32(COW_IMG(0x10664494u)), g->edx, 0, 6, 1u, esi, 1u, 0u, 0u, 0u);
    t17 = g->edx;
    eax = t16;
    edx = t17;
    COW_AT(1020d1bd)
    wr32(sp0 - 8u, COW_IMG(0x10385a64u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t18 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10385a64u));
    t19 = g->edx;
    eax = t18;
    edx = t19;
    COW_AT(1020d1cc)
    g->esi = rd32(sp0 - 4u);
    g->edx = edx;
    return eax;
L_1020d1d0: ;
    COW_AT(1020d1d0)
    wr32(sp0 - 8u, 2u);
    g->edx = edx;
    g->esp = sp0 - 4u;
    t12 = cow_call_regs(g, COW_IMG(0x1020d7c0u), eax, rd32(COW_IMG(0x106644c4u)), g->edx, 0, 1, 2u);
    t13 = g->edx;
    eax = t12;
    edx = t13;
    COW_AT(1020d1dd)
    g->esi = rd32(sp0 - 4u);
    g->edx = edx;
    return eax;
L_1020d1e1: ;
    COW_AT(1020d1e1)
    if (rd32(COW_IMG(0x106644c0u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x106644c0u));
    COW_AT(1020d1eb)
        wr32(sp0 - 8u, 0u);
        wr32(sp0 - 0xcu, 0u);
        g->esp = sp0 - 4u;
        t8 = cow_call_regs(g, COW_IMG(0x1020f3a0u), eax, ecx, edx, 0, 2, 0u, 0u);
        t9 = g->edx;
        eax = t8;
        edx = t9;
    }
    COW_AT(1020d1f4)
    wr32(sp0 - 8u, COW_IMG(0x10385a64u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t10 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10385a64u));
    t11 = g->edx;
    eax = t10;
    edx = t11;
    loc_4 = rd32(sp0 - 4u);
L_1020d203: ;
    COW_AT(1020d203)
    g->esi = loc_4;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1020cf60(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1020cf6fu:
    {
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_eax;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020cf7bu:
    {
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_eax;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020cf80u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020cf84u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020cf89u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020cf8du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020cf9cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020cfa3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020cfb6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020cfbau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020cfcdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020cfd1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020cfe4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020cfe8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020cffbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020cfffu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020d012u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020d016u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020d029u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020d02du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020d040u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020d044u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020d052u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020d057u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020d05bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020d064u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1020d06au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1020d083u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020d092u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020d096u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020d0a6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x14u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1020d0b1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        wr32(sp0 - 0x14u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1020d0c0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        wr32(sp0 - 0x14u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1020d0cdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x14u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1020d0e6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020d0f5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020d0f9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020d109u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x14u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1020d114u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        wr32(sp0 - 0x14u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1020d123u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        wr32(sp0 - 0x14u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1020d130u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x14u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1020d149u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020d158u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020d15cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020d16au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1020d183u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020d192u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020d196u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020d1a4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1020d1bdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020d1ccu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020d1d0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020d1ddu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020d1e1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020d1ebu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020d1f4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020d203u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1020cf60(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1020cf60(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
