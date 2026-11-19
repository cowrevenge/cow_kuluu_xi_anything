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
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 32u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1020cf6fu: in_eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1020cf6f;
    case 0x1020cf7bu: in_eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1020cf7b;
    case 0x1020cf84u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1020cf84;
    case 0x1020cf8du: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1020cf8d;
    case 0x1020cf9cu: ecx = g->ecx; edx = g->edx; goto E_1020cf9c;
    case 0x1020cfa3u: ecx = g->ecx; edx = g->edx; goto E_1020cfa3;
    case 0x1020cfbau: ecx = g->ecx; edx = g->edx; goto E_1020cfba;
    case 0x1020cfd1u: ecx = g->ecx; edx = g->edx; goto E_1020cfd1;
    case 0x1020cfe8u: ecx = g->ecx; edx = g->edx; goto E_1020cfe8;
    case 0x1020cfffu: ecx = g->ecx; edx = g->edx; goto E_1020cfff;
    case 0x1020d016u: ecx = g->ecx; edx = g->edx; goto E_1020d016;
    case 0x1020d02du: ecx = g->ecx; edx = g->edx; goto E_1020d02d;
    case 0x1020d044u: ecx = g->ecx; edx = g->edx; goto E_1020d044;
    case 0x1020d052u: ecx = g->ecx; edx = g->edx; goto E_1020d052;
    case 0x1020d05bu: ecx = g->ecx; edx = g->edx; goto E_1020d05b;
    case 0x1020d096u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1020d096;
    case 0x1020d0b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1020d0b1;
    case 0x1020d0f9u: ecx = g->ecx; edx = g->edx; goto E_1020d0f9;
    case 0x1020d114u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1020d114;
    case 0x1020d15cu: ecx = g->ecx; edx = g->edx; goto E_1020d15c;
    case 0x1020d196u: ecx = g->ecx; edx = g->edx; goto E_1020d196;
    case 0x1020d1d0u: ecx = g->ecx; edx = g->edx; goto E_1020d1d0;
    case 0x1020d1e1u: ecx = g->ecx; edx = g->edx; goto E_1020d1e1;
    case 0x1020d1ebu: ecx = g->ecx; edx = g->edx; goto E_1020d1eb;
    case 0x1020d1f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1020d1f4;
    case 0x1020d203u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_1020d203;
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
    if ((uint16_t)arg1 != 5u)
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
    t1 = cow_call_regs(g, COW_IMG(0x1020a410u), in_eax, g->ecx, g->edx, 1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        ecx = t2;
        edx = t3;
        goto L_1020cf8d;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(1020cf84)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t4 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    t5 = g->edx;
    g->esi = rd32(sp0 - 4u);
    g->edx = t5;
    return t4;
L_1020cf8d: ;
    COW_AT(1020cf8d)
    if ((uint32_t)(int16_t)arg2 - 1u > 0xeu)
    {
        eax = (uint32_t)(int16_t)arg2 - 1u;
        loc_4 = rd32(sp0 - 4u);
        goto L_1020d203;
    }
    COW_AT(1020cf9c)
    t6 = rd32(COW_IMG(0x1020d208u) + (uint32_t)(int16_t)arg2 * 4u - 4u);
    switch (t6 - RD)
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
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t72 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10385af0u), 1u, 0u);
    t73 = g->edx;
    g->esi = rd32(sp0 - 4u);
    g->edx = t73;
    return t72;
L_1020cfba: ;
    COW_AT(1020cfba)
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0xcu, 1u);
    wr32(sp0 - 0x10u, COW_IMG(0x10385adcu));
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t70 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10385adcu), 1u, 0u);
    t71 = g->edx;
    g->esi = rd32(sp0 - 4u);
    g->edx = t71;
    return t70;
L_1020cfd1: ;
    COW_AT(1020cfd1)
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0xcu, 1u);
    wr32(sp0 - 0x10u, COW_IMG(0x10385ac8u));
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t68 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10385ac8u), 1u, 0u);
    t69 = g->edx;
    g->esi = rd32(sp0 - 4u);
    g->edx = t69;
    return t68;
L_1020cfe8: ;
    COW_AT(1020cfe8)
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0xcu, 1u);
    wr32(sp0 - 0x10u, COW_IMG(0x10385ab4u));
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t66 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10385ab4u), 1u, 0u);
    t67 = g->edx;
    g->esi = rd32(sp0 - 4u);
    g->edx = t67;
    return t66;
L_1020cfff: ;
    COW_AT(1020cfff)
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0xcu, 1u);
    wr32(sp0 - 0x10u, COW_IMG(0x10385aa0u));
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t64 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10385aa0u), 1u, 0u);
    t65 = g->edx;
    g->esi = rd32(sp0 - 4u);
    g->edx = t65;
    return t64;
L_1020d016: ;
    COW_AT(1020d016)
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0xcu, 1u);
    wr32(sp0 - 0x10u, COW_IMG(0x10385a8cu));
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t62 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10385a8cu), 1u, 0u);
    t63 = g->edx;
    g->esi = rd32(sp0 - 4u);
    g->edx = t63;
    return t62;
L_1020d02d: ;
    COW_AT(1020d02d)
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0xcu, 1u);
    wr32(sp0 - 0x10u, COW_IMG(0x10385a78u));
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t60 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10385a78u), 1u, 0u);
    t61 = g->edx;
    g->esi = rd32(sp0 - 4u);
    g->edx = t61;
    return t60;
L_1020d044: ;
    COW_AT(1020d044)
    if (rd32(COW_IMG(0x106644c0u)) == 0u)
    {
        eax = (uint32_t)(int16_t)arg2 - 1u;
        loc_4 = rd32(sp0 - 4u);
        goto L_1020d203;
    }
    ecx = rd32(COW_IMG(0x106644c0u));
    COW_AT(1020d052)
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->esp = sp0 - 4u;
    t58 = cow_fastcall(g, COW_IMG(0x1020ee70u), ecx, edx, 0);
    t59 = g->edx;
    g->esi = rd32(sp0 - 4u);
    g->edx = t59;
    return t58;
L_1020d05b: ;
    COW_AT(1020d05b)
    wr32(sp0 - 8u, ecx + 0x5cu);
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t49 = cow_cdecl(g, COW_IMG(0x10107ff0u), 1, ecx + 0x5cu);
    t50 = g->ecx;
    t51 = g->edx;
    wr32(sp0 - 0xcu, ecx + 0x5cu);
    g->edx = t51;
    g->esp = sp0 - 8u;
    t52 = cow_cdecl(g, COW_IMG(0x10107fd0u), 1, ecx + 0x5cu);
    t53 = g->edx;
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, ecx + 0x5cu);
    wr32(sp0 - 0x1cu, 1u);
    g->edx = t53;
    g->esp = sp0 - 4u;
    t54 = cow_call_regs(g, COW_IMG(0x1020a9d0u), t52, rd32(COW_IMG(0x10664494u)), g->edx, 0, 6, 1u, ecx + 0x5cu, 1u, 0u, 0u, 0u);
    t55 = g->edx;
    wr32(sp0 - 8u, COW_IMG(0x10385a64u));
    g->edx = t55;
    t56 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10385a64u));
    t57 = g->edx;
    g->esi = rd32(sp0 - 4u);
    g->edx = t57;
    return t56;
L_1020d096: ;
    COW_AT(1020d096)
    wr32(sp0 - 8u, 1u);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, sp0 + 4u);
    g->eax = sp0 + 4u;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t37 = cow_thiscall_cdecl(g, COW_IMG(0x100e9730u), ecx, 4, sp0 + 4u, 0u, 0u, 1u);
    t38 = g->edx;
    if ((uint8_t)t37 == 0u)
    {
        eax = t37;
        edx = t38;
        loc_4 = rd32(sp0 - 4u);
        goto L_1020d203;
    }
    eax = t37;
    edx = t38;
    COW_AT(1020d0b1)
    t39 = rd32(COW_IMG(0x10664494u)) + 0x5cu;
    wr32(sp0 - 8u, t39);
    g->ecx = rd32(COW_IMG(0x10664494u));
    t40 = rd32(COW_IMG(0x10664494u));
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x10107ef0u), 1, t39);
    t41 = g->ecx;
    wr32(sp0 - 0xcu, rd32(arg1));
    wr32(sp0 - 0x10u, t39);
    g->eax = rd32(arg1);
    g->edx = arg1;
    t42 = rd32(arg1);
    g->esp = sp0 - 8u;
    t43 = cow_cdecl(g, COW_IMG(0x10107ed0u), 2, t39, t42);
    t44 = g->edx;
    wr32(sp0 - 8u, 1u);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, t39);
    wr32(sp0 - 0x1cu, 1u);
    g->edx = t44;
    g->esp = sp0 - 4u;
    t45 = cow_call_regs(g, COW_IMG(0x1020a9d0u), t43, rd32(COW_IMG(0x10664494u)), g->edx, 0, 6, 1u, t39, 1u, 0u, 0u, 1u);
    t46 = g->edx;
    wr32(sp0 - 8u, COW_IMG(0x10385a64u));
    g->edx = t46;
    t47 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10385a64u));
    t48 = g->edx;
    g->esi = rd32(sp0 - 4u);
    g->edx = t48;
    return t47;
L_1020d0f9: ;
    COW_AT(1020d0f9)
    wr32(sp0 - 8u, 2u);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, sp0 + 4u);
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t25 = cow_thiscall_cdecl(g, COW_IMG(0x100e9730u), sp0 + 4u, 4, sp0 + 4u, 0u, 0u, 2u);
    t26 = g->ecx;
    t27 = g->edx;
    if ((uint8_t)t25 == 0u)
    {
        eax = t25;
        edx = t27;
        loc_4 = rd32(sp0 - 4u);
        goto L_1020d203;
    }
    eax = t25;
    ecx = t26;
    COW_AT(1020d114)
    t28 = rd32(COW_IMG(0x10664494u)) + 0x5cu;
    wr32(sp0 - 8u, t28);
    g->edx = rd32(COW_IMG(0x10664494u));
    t29 = rd32(COW_IMG(0x10664494u));
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x10107f40u), 1, t28);
    t30 = g->edx;
    wr32(sp0 - 0xcu, rd32(arg1));
    wr32(sp0 - 0x10u, t28);
    g->eax = arg1;
    g->edx = t30;
    g->esp = sp0 - 8u;
    t31 = cow_cdecl(g, COW_IMG(0x10107f10u), 2, t28, rd32(arg1));
    t32 = g->edx;
    wr32(sp0 - 8u, 2u);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, t28);
    wr32(sp0 - 0x1cu, 1u);
    g->edx = t32;
    g->esp = sp0 - 4u;
    t33 = cow_call_regs(g, COW_IMG(0x1020a9d0u), t31, rd32(COW_IMG(0x10664494u)), g->edx, 0, 6, 1u, t28, 1u, 0u, 0u, 2u);
    t34 = g->edx;
    wr32(sp0 - 8u, COW_IMG(0x10385a64u));
    g->edx = t34;
    t35 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10385a64u));
    t36 = g->edx;
    g->esi = rd32(sp0 - 4u);
    g->edx = t36;
    return t35;
L_1020d15c: ;
    COW_AT(1020d15c)
    wr32(sp0 - 8u, 0x10000000u);
    wr32(sp0 - 0xcu, ecx + 0x5cu);
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t19 = cow_cdecl(g, COW_IMG(0x10107e70u), 2, ecx + 0x5cu, 0x10000000u);
    t20 = g->edx;
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, ecx + 0x5cu);
    wr32(sp0 - 0x1cu, 1u);
    g->edx = t20;
    t21 = cow_call_regs(g, COW_IMG(0x1020a9d0u), t19, rd32(COW_IMG(0x10664494u)), g->edx, 0, 6, 1u, ecx + 0x5cu, 1u, 0u, 0u, 0u);
    t22 = g->edx;
    wr32(sp0 - 8u, COW_IMG(0x10385a64u));
    g->edx = t22;
    t23 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10385a64u));
    t24 = g->edx;
    g->esi = rd32(sp0 - 4u);
    g->edx = t24;
    return t23;
L_1020d196: ;
    COW_AT(1020d196)
    wr32(sp0 - 8u, 0xf0000u);
    wr32(sp0 - 0xcu, ecx + 0x5cu);
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t13 = cow_cdecl(g, COW_IMG(0x10107e70u), 2, ecx + 0x5cu, 0xf0000u);
    t14 = g->edx;
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, ecx + 0x5cu);
    wr32(sp0 - 0x1cu, 1u);
    g->edx = t14;
    t15 = cow_call_regs(g, COW_IMG(0x1020a9d0u), t13, rd32(COW_IMG(0x10664494u)), g->edx, 0, 6, 1u, ecx + 0x5cu, 1u, 0u, 0u, 0u);
    t16 = g->edx;
    wr32(sp0 - 8u, COW_IMG(0x10385a64u));
    g->edx = t16;
    t17 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10385a64u));
    t18 = g->edx;
    g->esi = rd32(sp0 - 4u);
    g->edx = t18;
    return t17;
L_1020d1d0: ;
    COW_AT(1020d1d0)
    wr32(sp0 - 8u, 2u);
    g->edx = edx;
    g->esp = sp0 - 4u;
    t11 = cow_call_regs(g, COW_IMG(0x1020d7c0u), (uint32_t)(int16_t)arg2 - 1u, rd32(COW_IMG(0x106644c4u)), g->edx, 0, 1, 2u);
    t12 = g->edx;
    g->esi = rd32(sp0 - 4u);
    g->edx = t12;
    return t11;
L_1020d1e1: ;
    COW_AT(1020d1e1)
    if (rd32(COW_IMG(0x106644c0u)) == 0u)
    {
        eax = (uint32_t)(int16_t)arg2 - 1u;
    }
    else
    {
        ecx = rd32(COW_IMG(0x106644c0u));
    COW_AT(1020d1eb)
        wr32(sp0 - 8u, 0u);
        wr32(sp0 - 0xcu, 0u);
        g->esp = sp0 - 4u;
        t7 = cow_call_regs(g, COW_IMG(0x1020f3a0u), (uint32_t)(int16_t)arg2 - 1u, ecx, edx, 0, 2, 0u, 0u);
        t8 = g->edx;
        eax = t7;
        edx = t8;
    }
    COW_AT(1020d1f4)
    wr32(sp0 - 8u, COW_IMG(0x10385a64u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t9 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10385a64u));
    t10 = g->edx;
    eax = t9;
    edx = t10;
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
        uint32_t in_eax;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020cf7bu:
    {
        uint32_t ecx;
        uint32_t in_eax;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020cf84u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020cf8du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020cf9cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1020cfa3u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1020cfbau:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1020cfd1u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1020cfe8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1020cfffu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1020d016u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1020d02du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1020d044u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1020d052u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1020d05bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1020d096u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020d0b1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        wr32(sp0 - 0x14u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1020d0f9u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1020d114u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        wr32(sp0 - 0x14u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1020d15cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1020d196u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1020d1d0u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1020d1e1u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1020d1ebu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1020d1f4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020d203u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
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
