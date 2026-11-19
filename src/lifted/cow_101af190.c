/* f_0x101af190 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101af190(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
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
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101af19eu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101af19e;
    case 0x101af1a9u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101af1a9;
    case 0x101af1bau: ecx = g->ecx; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101af1ba;
    case 0x101af1c1u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101af1c1;
    case 0x101af1d1u: ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101af1d1;
    case 0x101af1e0u: ecx = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101af1e0;
    case 0x101af1ecu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101af1ec;
    case 0x101af1f9u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101af1f9;
    case 0x101af208u: ecx = g->ecx; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101af208;
    case 0x101af212u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101af212;
    case 0x101af214u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101af214;
    case 0x101af221u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101af221;
    case 0x101af22bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101af22b;
    case 0x101af234u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101af234;
    case 0x101af23du: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101af23d;
    case 0x101af24cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101af24c;
    case 0x101af255u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101af255;
    case 0x101af267u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_c = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101af267;
    case 0x101af275u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_c = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101af275;
    case 0x101af279u: ecx = g->ecx; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101af279;
    case 0x101af292u: ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101af292;
    case 0x101af2a1u: ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101af2a1;
    case 0x101af2b3u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101af2b3;
    case 0x101af2c5u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101af2c5;
    case 0x101af2dfu: ecx = g->ecx; edx = g->edx; self = g->esi; loc_c = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101af2df;
    case 0x101af2eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_c = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101af2ee;
    case 0x101af2fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_c = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101af2fc;
    case 0x101af307u: ecx = g->ecx; edx = g->edx; self = g->esi; loc_c = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101af307;
    case 0x101af320u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_c = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101af320;
    case 0x101af339u: ecx = g->ecx; edx = g->edx; self = g->esi; loc_c = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101af339;
    case 0x101af347u: ecx = g->ecx; edx = g->edx; loc_c = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101af347;
    case 0x101af354u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_c = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101af354;
    case 0x101af361u: ecx = g->ecx; edx = g->edx; self = g->esi; loc_c = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101af361;
    case 0x101af383u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101af383;
    case 0x101af38eu: ecx = g->ecx; edx = g->edx; self = g->esi; loc_c = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101af38e;
    case 0x101af3b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101af3b0;
    default: break;
    }
#endif

    COW_AT(101af190)
    if (rd32(self + 0x1cu) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_101af275;
    }
    ecx = rd32(self + 0x1cu);
    COW_AT(101af19e)
    if (rd32(self + 0x14u) != 0u)
    {
        eax = rd32(self + 0x14u);
        goto L_101af2c5;
    }
    COW_AT(101af1a9)
    if ((uint32_t)(int16_t)arg1 - 5u > 0x10u)
    {
        eax = (uint32_t)(int16_t)arg1 - 5u;
        edx = in_edx;
        goto L_101af275;
    }
    COW_AT(101af1ba)
    t1 = rd32(COW_IMG(0x101af3bcu) + (uint32_t)(int16_t)arg1 * 4u - 0x14u);
    switch (t1 - RD)
    {
    case 0x101af1c1u: goto L_101af1c1;
    case 0x101af1d1u: goto L_101af1d1;
    case 0x101af1e0u: goto L_101af1e0;
    case 0x101af1f9u: goto L_101af1f9;
    case 0x101af208u: goto L_101af208;
    case 0x101af23du: goto L_101af23d;
    case 0x101af275u: eax = (uint32_t)(int16_t)arg1 - 5u; edx = in_edx; goto L_101af275;
    case 0x101af279u: goto L_101af279;
    case 0x101af292u: goto L_101af292;
    case 0x101af2a1u: goto L_101af2a1;
    case 0x101af2b3u: goto L_101af2b3;
    default: rt_fatal(g, COW_IMG(0x101af1bau), "switch");
    }
    return 0;
L_101af1c1: ;
    COW_AT(101af1c1)
    g->eax = arg2;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t37 = cow_thiscall(g, COW_IMG(0x101af860u), self, 1, arg2);
    t38 = g->edx;
    g->esi = in_esi;
    g->edx = t38;
    return t37;
L_101af1d1: ;
    COW_AT(101af1d1)
    g->eax = (uint32_t)(int16_t)arg1 - 5u;
    g->edx = rd32(ecx);
    t34 = rd32(ecx);
    g->esp = sp0 - 4u;
    t35 = cow_thiscall(g, rd32(t34 + 4u), ecx, 3, 3u, 1u, 0u);
    t36 = g->edx;
    g->esi = in_esi;
    g->edx = t36;
    return t35;
L_101af1e0: ;
    COW_AT(101af1e0)
    if (rd8(ecx + 0xf0ecu) == 0u)
    {
        eax = ((uint32_t)(int16_t)arg1 - 5u & 0xffffff00u) | rd8(ecx + 0xf0ecu);
        goto L_101af214;
    }
    COW_AT(101af1ec)
    g->eax = rd32(ecx);
    g->edx = in_edx;
    t28 = rd32(ecx);
    g->esp = sp0 - 4u;
    t29 = cow_thiscall(g, rd32(t28 + 4u), ecx, 3, 5u, 0x20u, 0u);
    t30 = g->edx;
    g->esi = in_esi;
    g->edx = t30;
    return t29;
L_101af1f9: ;
    COW_AT(101af1f9)
    g->eax = rd32(ecx);
    g->edx = in_edx;
    t25 = rd32(ecx);
    g->esp = sp0 - 4u;
    t26 = cow_thiscall(g, rd32(t25 + 4u), ecx, 3, 3u, 0xeu, 0u);
    t27 = g->edx;
    g->esi = in_esi;
    g->edx = t27;
    return t26;
L_101af208: ;
    COW_AT(101af208)
    if (rd8(ecx + 0xf0ecu) == 0u) goto L_101af221;
    eax = ((uint32_t)(int16_t)arg1 - 5u & 0xffffff00u) | rd8(ecx + 0xf0ecu);
    COW_AT(101af212)
L_101af214: ;
    COW_AT(101af214)
    g->eax = eax;
    g->edx = rd32(ecx);
    t31 = rd32(ecx);
    g->esp = sp0 - 4u;
    t32 = cow_thiscall(g, rd32(t31 + 4u), ecx, 3, 3u, 0x1cu, 0u);
    t33 = g->edx;
    g->esi = in_esi;
    g->edx = t33;
    return t32;
L_101af221: ;
    COW_AT(101af221)
    if (rd32(ecx + 0xf10cu) == 0u)
    {
        eax = rd32(ecx + 0xf10cu);
        goto L_101af234;
    }
    eax = rd32(ecx + 0xf10cu);
    edx = in_edx;
L_101af22b: ;
    COW_AT(101af22b)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t23 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    t24 = g->edx;
    g->esi = in_esi;
    g->edx = t24;
    return t23;
L_101af234: ;
    COW_AT(101af234)
    if (rd32(ecx + 0xf0f8u) != 1u) goto L_101af24c;
L_101af23d: ;
    COW_AT(101af23d)
    g->eax = rd32(ecx);
    g->edx = in_edx;
    t15 = rd32(ecx);
    g->esp = sp0 - 4u;
    t16 = cow_thiscall(g, rd32(t15 + 4u), ecx, 3, 3u, 0xfu, 0u);
    t17 = g->edx;
    g->esi = in_esi;
    g->edx = t17;
    return t16;
L_101af24c: ;
    COW_AT(101af24c)
    g->eax = eax;
    g->edx = rd32(ecx);
    t18 = rd32(ecx);
    g->esp = sp0 - 4u;
    t19 = cow_thiscall(g, rd32(t18 + 0x20u), ecx, 0);
    t20 = g->ecx;
    t21 = g->edx;
    if ((uint8_t)t19 == 0u)
    {
        eax = t19;
        ecx = t20;
        edx = t21;
        goto L_101af22b;
    }
    ecx = t20;
    COW_AT(101af255)
    t22 = rd32(self + 8u);
    wr32(self + 0x14u, 1u);
    wr16(self + 0x20u, rd16(t22 + 0x4cu));
    eax = t22;
L_101af267: ;
    COW_AT(101af267)
    g->eax = eax;
    g->edx = rd32(rd32(self + 0x1cu));
    t72 = rd32(rd32(self + 0x1cu));
    g->esp = sp0 - 4u;
    t73 = cow_thiscall(g, rd32(t72 + 4u), rd32(self + 0x1cu), 3, 3u, 0x79u, 0u);
    t74 = g->edx;
    eax = t73;
    edx = t74;
L_101af275: ;
    COW_AT(101af275)
    g->esi = in_esi;
    g->edx = edx;
    return eax;
L_101af279: ;
    COW_AT(101af279)
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x101afbb0u), self, 0);
    t11 = g->edx;
    g->eax = rd32(rd32(self + 0x1cu));
    g->edx = t11;
    t12 = rd32(rd32(self + 0x1cu));
    t13 = cow_thiscall(g, rd32(t12 + 4u), rd32(self + 0x1cu), 3, 2u, 0u, 0u);
    t14 = g->edx;
    g->esi = in_esi;
    g->edx = t14;
    return t13;
L_101af292: ;
    COW_AT(101af292)
    g->eax = (uint32_t)(int16_t)arg1 - 5u;
    g->edx = rd32(ecx);
    t8 = rd32(ecx);
    g->esp = sp0 - 4u;
    t9 = cow_thiscall(g, rd32(t8 + 4u), ecx, 3, 8u, 0u, 0u);
    t10 = g->edx;
    g->esi = in_esi;
    g->edx = t10;
    return t9;
L_101af2a1: ;
    COW_AT(101af2a1)
    g->eax = (uint32_t)(int16_t)arg1 - 5u;
    g->edx = rd32(ecx);
    t5 = rd32(ecx);
    g->esp = sp0 - 4u;
    t6 = cow_thiscall(g, rd32(t5 + 4u), ecx, 3, 3u, 0xcbu, 0u);
    t7 = g->edx;
    g->esi = in_esi;
    g->edx = t7;
    return t6;
L_101af2b3: ;
    COW_AT(101af2b3)
    g->eax = rd32(ecx);
    g->edx = in_edx;
    t2 = rd32(ecx);
    g->esp = sp0 - 4u;
    t3 = cow_thiscall(g, rd32(t2 + 4u), ecx, 3, 3u, 0xcdu, 0u);
    t4 = g->edx;
    g->esi = in_esi;
    g->edx = t4;
    return t3;
L_101af2c5: ;
    COW_AT(101af2c5)
    t39 = (ecx & 0xffff0000u) | rd16(self + 0x20u);
    g->edx = in_edx;
    t40 = rd32(self + 8u);
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x10118db0u), eax, t40, g->edx, 0, 2, t39, 0u);
    t41 = g->ecx;
    t42 = g->edx;
    if ((uint32_t)(int16_t)arg1 - 1u > 0x12u)
    {
        eax = (uint32_t)(int16_t)arg1 - 1u;
        edx = t42;
        goto L_101af275;
    }
    ecx = t41;
    COW_AT(101af2df)
    t43 = rd32(COW_IMG(0x101af400u) + rd8(COW_IMG(0x101af420u) + (uint32_t)(int16_t)arg1 - 1u) * 4u);
    switch (t43 - RD)
    {
    case 0x101af267u: eax = (uint32_t)(int16_t)arg1 - 1u; goto L_101af267;
    case 0x101af275u: eax = (uint32_t)(int16_t)arg1 - 1u; edx = rd8(COW_IMG(0x101af420u) + (uint32_t)(int16_t)arg1 - 1u); goto L_101af275;
    case 0x101af2eeu: edx = rd8(COW_IMG(0x101af420u) + (uint32_t)(int16_t)arg1 - 1u); goto L_101af2ee;
    case 0x101af307u: goto L_101af307;
    case 0x101af320u: edx = rd8(COW_IMG(0x101af420u) + (uint32_t)(int16_t)arg1 - 1u); goto L_101af320;
    case 0x101af339u: edx = rd8(COW_IMG(0x101af420u) + (uint32_t)(int16_t)arg1 - 1u); goto L_101af339;
    case 0x101af361u: edx = rd8(COW_IMG(0x101af420u) + (uint32_t)(int16_t)arg1 - 1u); goto L_101af361;
    case 0x101af38eu: edx = rd8(COW_IMG(0x101af420u) + (uint32_t)(int16_t)arg1 - 1u); goto L_101af38e;
    default: rt_fatal(g, COW_IMG(0x101af2e7u), "switch");
    }
    return 0;
L_101af2ee: ;
    COW_AT(101af2ee)
    t68 = rd32(self + 0x1cu);
    wr32(self + 0x14u, 0u);
    ecx = t68;
    loc_c = 0x1cu;
L_101af2fc: ;
    COW_AT(101af2fc)
    g->eax = rd32(ecx);
    g->edx = edx;
    t69 = rd32(ecx);
    g->esp = sp0 - 4u;
    t70 = cow_thiscall(g, rd32(t69 + 4u), ecx, 3, 3u, loc_c, 0u);
    t71 = g->edx;
    g->esi = in_esi;
    g->edx = t71;
    return t70;
L_101af307: ;
    COW_AT(101af307)
    t64 = rd32(self + 0x1cu);
    wr32(self + 0x14u, 0u);
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = rd32(t64);
    t65 = rd32(t64);
    g->esp = sp0 - 4u;
    t66 = cow_thiscall(g, rd32(t65 + 4u), t64, 3, 3u, 1u, 0u);
    t67 = g->edx;
    g->esi = in_esi;
    g->edx = t67;
    return t66;
L_101af320: ;
    COW_AT(101af320)
    t60 = rd32(self + 0x1cu);
    wr32(self + 0x14u, 0u);
    g->eax = rd32(t60);
    g->edx = edx;
    t61 = rd32(t60);
    g->esp = sp0 - 4u;
    t62 = cow_thiscall(g, rd32(t61 + 4u), t60, 3, 3u, 0xfu, 0u);
    t63 = g->edx;
    g->esi = in_esi;
    g->edx = t63;
    return t62;
L_101af339: ;
    COW_AT(101af339)
    if (rd32(rd32(self + 0x1cu) + 0xf0f8u) != 1u)
    {
        ecx = rd32(self + 0x1cu);
        goto L_101af354;
    }
    ecx = rd32(self + 0x1cu);
    COW_AT(101af347)
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = rd32(ecx);
    t54 = rd32(ecx);
    g->esp = sp0 - 4u;
    t55 = cow_thiscall(g, rd32(t54 + 4u), ecx, 3, 3u, 0xfu, 0u);
    t56 = g->edx;
    g->esi = in_esi;
    g->edx = t56;
    return t55;
L_101af354: ;
    COW_AT(101af354)
    g->eax = rd32(ecx);
    g->edx = edx;
    t57 = rd32(ecx);
    g->esp = sp0 - 4u;
    t58 = cow_thiscall(g, rd32(t57 + 4u), ecx, 3, 3u, 0x79u, 0u);
    t59 = g->edx;
    g->esi = in_esi;
    g->edx = t59;
    return t58;
L_101af361: ;
    COW_AT(101af361)
    g->edx = edx;
    g->esp = sp0 - 4u;
    t49 = cow_call_regs(g, COW_IMG(0x10123a70u), (uint32_t)(int16_t)arg1 - 1u, ecx, g->edx, 1, 4, 0x3eu, 0x35u, 4u, 0xffffffffu);
    t50 = g->edx;
    if ((uint8_t)t49 == 0u)
    {
        ecx = rd32(self + 0x1cu);
        edx = t50;
        loc_c = 0xcbu;
        goto L_101af2fc;
    }
    eax = t49;
    ecx = rd32(self + 0x1cu);
    COW_AT(101af383)
    g->eax = eax;
    g->edx = rd32(ecx);
    t51 = rd32(ecx);
    g->esp = sp0 - 4u;
    t52 = cow_thiscall(g, rd32(t51 + 4u), ecx, 3, 4u, 0xcbu, 0u);
    t53 = g->edx;
    g->esi = in_esi;
    g->edx = t53;
    return t52;
L_101af38e: ;
    COW_AT(101af38e)
    g->edx = edx;
    g->esp = sp0 - 4u;
    t44 = cow_call_regs(g, COW_IMG(0x10123a70u), (uint32_t)(int16_t)arg1 - 1u, ecx, g->edx, 1, 4, 0x3eu, 0x35u, 4u, 0xffffffffu);
    t45 = g->edx;
    if ((uint8_t)t44 == 0u)
    {
        ecx = rd32(self + 0x1cu);
        edx = t45;
        loc_c = 0xcdu;
        goto L_101af2fc;
    }
    eax = t44;
    ecx = rd32(self + 0x1cu);
    COW_AT(101af3b0)
    g->eax = eax;
    g->edx = rd32(ecx);
    t46 = rd32(ecx);
    g->esp = sp0 - 4u;
    t47 = cow_thiscall(g, rd32(t46 + 4u), ecx, 3, 4u, 0xcdu, 0u);
    t48 = g->edx;
    g->esi = in_esi;
    g->edx = t48;
    return t47;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101af190(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101af19eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101af1a9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101af1bau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg1 - 5u;
        (void)sp0;
        return 1;
    }
    case 0x101af1c1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101af1d1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg1 - 5u;
        (void)sp0;
        return 1;
    }
    case 0x101af1e0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg1 - 5u;
        (void)sp0;
        return 1;
    }
    case 0x101af1ecu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101af1f9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101af208u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg1 - 5u;
        (void)sp0;
        return 1;
    }
    case 0x101af212u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101af214u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101af221u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101af22bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101af234u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101af23du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101af24cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101af255u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101af267u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_c = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101af275u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_c = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101af279u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg1 - 5u;
        (void)sp0;
        return 1;
    }
    case 0x101af292u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg1 - 5u;
        (void)sp0;
        return 1;
    }
    case 0x101af2a1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg1 - 5u;
        (void)sp0;
        return 1;
    }
    case 0x101af2b3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101af2c5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101af2dfu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_c;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_c = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x101af2eeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_c = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101af2fcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_c = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101af307u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_c;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_c = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x101af320u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_c = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101af339u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_c;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_c = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x101af347u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_c;
        ecx = g->ecx;
        edx = g->edx;
        loc_c = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101af354u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_c = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101af361u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_c;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_c = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x101af383u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 0xcu, 0xcbu);
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101af38eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_c;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_c = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x101af3b0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 0xcu, 0xcdu);
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101af190(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101af190(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
