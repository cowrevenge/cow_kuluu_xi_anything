/* f_0x1023b230 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1023b230(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_104;
    uint32_t loc_108;
    uint32_t loc_10c;
    uint32_t loc_110;
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
    uint32_t t9;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 312u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1023b291u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_110 = rd32(sp0 - 0x110u); loc_10c = rd32(sp0 - 0x10cu); loc_108 = rd32(sp0 - 0x108u); loc_104 = rd32(sp0 - 0x104u); goto E_1023b291;
    case 0x1023b2aau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1023b2aa;
    case 0x1023b2b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1023b2b8;
    case 0x1023b2d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1023b2d0;
    case 0x1023b2dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1023b2df;
    case 0x1023b2f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1023b2f8;
    case 0x1023b2feu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1023b2fe;
    case 0x1023b30bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1023b30b;
    case 0x1023b311u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1023b311;
    case 0x1023b354u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1023b354;
    case 0x1023b35eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1023b35e;
    case 0x1023b397u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1023b397;
    case 0x1023b39cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1023b39c;
    case 0x1023b3b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1023b3b2;
    case 0x1023b3d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1023b3d7;
    case 0x1023b3dau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1023b3da;
    case 0x1023b3f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1023b3f9;
    case 0x1023b41fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1023b41f;
    case 0x1023b43cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1023b43c;
    case 0x1023b458u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1023b458;
    case 0x1023b4aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1023b4ae;
    case 0x1023b4c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1023b4c3;
    case 0x1023b4c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1023b4c6;
    case 0x1023b4d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1023b4d3;
    case 0x1023b4dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1023b4df;
    case 0x1023b4ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_110 = rd32(sp0 - 0x110u); loc_10c = rd32(sp0 - 0x10cu); loc_108 = rd32(sp0 - 0x108u); loc_104 = rd32(sp0 - 0x104u); goto E_1023b4ec;
    case 0x1023b4ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1023b4ff;
    case 0x1023b524u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1023b524;
    case 0x1023b527u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1023b527;
    default: break;
    }
#endif

    COW_AT(1023b230)
    wr32(sp0 - 0x104u, in_ebx);
    wr32(sp0 - 0x108u, in_ebp);
    wr32(sp0 - 0x10cu, in_esi);
    wr32(sp0 - 0x110u, in_edi);
    wr32(sp0 - 0x114u, 0u);
    g->edx = in_edx;
    g->esp = sp0 - 0x110u;
    t1 = cow_call_regs(g, COW_IMG(0x10242cd0u), in_eax, g->ecx, g->edx, 1, 1, 0u);
    t2 = g->edx;
    wr32(sp0 - 0x114u, 0u);
    wr32(sp0 - 0x118u, 1u);
    wr32(sp0 - 0x11cu, COW_IMG(0x1038831cu));
    g->ebx = 0u;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1038831cu), 1u, 0u);
    t3 = rd32(COW_IMG(0x10669080u));
    wr32(COW_IMG(0x1066908cu), 0u);
    wr32(t3 + 0x1cu, 0u);
    t4 = rd32(COW_IMG(0x10669078u));
    wr32(t4 + 0x14u, 2u);
    t5 = rd32(COW_IMG(0x10669078u));
    wr32(t5 + 0x2cu, 0x12u);
    g->eax = t3;
    g->ecx = t4;
    g->edx = t5;
    t6 = cow_stdcall(g, COW_IMG(0x1023e510u), 0);
    t7 = g->ecx;
    t8 = g->edx;
    g->ecx = t7;
    g->edx = t8;
    t9 = cow_stdcall(g, COW_IMG(0x1023e4c0u), 0);
    t10 = g->ecx;
    t11 = g->edx;
    if ((int32_t)t9 < 0)
    {
        eax = t9;
        ecx = t10;
        edx = t11;
        loc_104 = in_ebx;
        loc_108 = in_ebp;
        loc_10c = in_esi;
        loc_110 = in_edi;
        goto L_1023b4ec;
    }
    ecx = t10;
    edx = t11;
    loc_104 = in_ebx;
    loc_108 = in_ebp;
    loc_10c = in_esi;
    loc_110 = in_edi;
L_1023b291: ;
    COW_AT(1023b291)
    t12 = rd32(COW_IMG(0x10669080u)) + 0x1cu;
    wr32(sp0 - 0x114u, t12);
    g->eax = t12;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x108u;
    t13 = cow_cdecl(g, COW_IMG(0x1023e4d0u), 3, t12, loc_110, loc_10c);
    t14 = g->ecx;
    t15 = g->edx;
    if ((int32_t)t13 < 0)
    {
        eax = t13;
        ecx = t14;
        edx = t15;
        goto L_1023b3b2;
    }
    ecx = t14;
    edx = t15;
    COW_AT(1023b2aa)
    if (rd32(COW_IMG(0x1066908cu)) == 0xffffffffu)
    {
        eax = rd32(COW_IMG(0x1066908cu));
        goto L_1023b4ff;
    }
    eax = rd32(COW_IMG(0x1066908cu));
    COW_AT(1023b2b8)
    if (rd32(eax * 0xb0u + rd32(COW_IMG(0x10669080u)) + 0x98u) == 0u)
    {
        ecx = eax * 5u;
        edx = eax * 0xb0u;
        eax = eax * 0xb0u + rd32(COW_IMG(0x10669080u));
        goto L_1023b2df;
    }
    ecx = eax * 5u;
    edx = eax * 0xb0u;
    eax = eax * 0xb0u + rd32(COW_IMG(0x10669080u));
    COW_AT(1023b2d0)
    wr32(sp0 - 0x114u, 0x74u);
    g->esp = sp0 - 0x110u;
    cow_cdecl(g, COW_IMG(0x1023e4a0u), 1, 0x74u);
L_1023b4ae: ;
    COW_AT(1023b4ae)
    wr32(rd32(COW_IMG(0x10669080u)) + 0x1cu, 0u);
    if (rd32(rd32(COW_IMG(0x10669080u)) + 8u) == 0u)
    {
        ecx = rd32(COW_IMG(0x10669080u));
    }
    else
    {
        eax = rd32(rd32(COW_IMG(0x10669080u)) + 8u);
        ecx = rd32(COW_IMG(0x10669080u));
    COW_AT(1023b4c3)
        wr8(eax + 0x5du, 0u);
    }
    COW_AT(1023b4c6)
    if (rd32(rd32(COW_IMG(0x10669080u)) + 8u) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x10669080u)) + 8u);
        edx = rd32(COW_IMG(0x10669080u));
    }
    else
    {
        eax = rd32(rd32(COW_IMG(0x10669080u)) + 8u);
        edx = rd32(COW_IMG(0x10669080u));
    COW_AT(1023b4d3)
        wr32(sp0 - 0x114u, 0u);
        wr32(sp0 - 0x118u, eax);
        g->eax = eax;
        g->esp = sp0 - 0x110u;
        t63 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), edx, 2, eax, 0u);
        t64 = g->ecx;
        t65 = g->edx;
        eax = t63;
        ecx = t64;
        edx = t65;
    }
    COW_AT(1023b4df)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x110u;
    t66 = cow_stdcall(g, COW_IMG(0x1023e4c0u), 0);
    t67 = g->ecx;
    t68 = g->edx;
    if ((int32_t)t66 >= 0)
    {
        ecx = t67;
        edx = t68;
        loc_104 = rd32(sp0 - 0x104u);
        loc_108 = rd32(sp0 - 0x108u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_110 = rd32(sp0 - 0x110u);
        goto L_1023b291;
    }
    eax = t66;
    ecx = t67;
    edx = t68;
    loc_104 = rd32(sp0 - 0x104u);
    loc_108 = rd32(sp0 - 0x108u);
    loc_10c = rd32(sp0 - 0x10cu);
    loc_110 = rd32(sp0 - 0x110u);
L_1023b4ec: ;
    COW_AT(1023b4ec)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x110u;
    t74 = cow_stdcall(g, COW_IMG(0x1023e4c0u), 0);
    t75 = g->ecx;
    t76 = g->edx;
    wr32(sp0 - 0x114u, t74);
    g->ecx = t75;
    g->edx = t76;
    t77 = cow_cdecl(g, COW_IMG(0x1023e4a0u), 1, t74);
    t78 = g->ecx;
    t79 = g->edx;
    eax = t77;
    ecx = t78;
    edx = t79;
L_1023b3b2: ;
    COW_AT(1023b3b2)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x110u;
    t80 = cow_stdcall(g, COW_IMG(0x1023e570u), 0);
    t81 = g->ecx;
    t82 = g->edx;
    cow_call_regs(g, COW_IMG(0x102435b0u), t80, g->ecx, g->edx, 1, 0);
    t83 = rd32(COW_IMG(0x10669080u));
    wr32(COW_IMG(0x1066908cu), 0u);
    wr32(t83 + 0x1cu, 0u);
    if (rd32(rd32(COW_IMG(0x10669080u)) + 8u) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x10669080u)) + 8u);
        edx = t83;
    }
    else
    {
        eax = rd32(rd32(COW_IMG(0x10669080u)) + 8u);
        edx = t83;
    COW_AT(1023b3d7)
        wr8(eax + 0x5du, 0u);
    }
    COW_AT(1023b3da)
    wr32(sp0 - 0x114u, COW_IMG(0x1038831cu));
    g->esp = sp0 - 0x110u;
    cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1038831cu));
    g->ebx = rd32(sp0 - 0x104u);
    g->esi = rd32(sp0 - 0x10cu);
    g->edi = rd32(sp0 - 0x110u);
    g->ebp = rd32(sp0 - 0x108u);
    return 0xfffffffeu;
L_1023b2df: ;
    COW_AT(1023b2df)
    wr32(sp0 - 0x114u, 1u);
    wr32(sp0 - 0x118u, eax + 0x44u);
    wr32(sp0 - 0x11cu, 0u);
    wr32(sp0 - 0x120u, 4u);
    g->eax = eax + 0x44u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x100u;
    t16 = cow_cdecl(g, COW_IMG(0x1023e370u), 8, 4u, 0u, eax + 0x44u, 1u, rd32(sp0 - 0x110u), rd32(sp0 - 0x10cu), rd32(sp0 - 0x108u), rd32(sp0 - 0x104u));
    t17 = g->ecx;
    t18 = g->edx;
    if ((int32_t)t16 < 0)
    {
        eax = t16;
        ecx = t17;
        edx = t18;
        goto L_1023b3b2;
    }
    eax = t16;
    ecx = t17;
    edx = t18;
    zf = t16 == 0u;
    COW_AT(1023b2f8)
    if (!zf) goto L_1023b4ae;
    COW_AT(1023b2fe)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x110u;
    t19 = cow_stdcall(g, COW_IMG(0x1023e420u), 0);
    t20 = g->ecx;
    t21 = g->edx;
    if ((int32_t)t19 < 0)
    {
        eax = t19;
        ecx = t20;
        edx = t21;
        goto L_1023b3b2;
    }
    zf = t19 == 0u;
    COW_AT(1023b30b)
    if (!zf) goto L_1023b4ae;
    COW_AT(1023b311)
    t22 = rd32(rd32(COW_IMG(0x10669080u)) + rd32(COW_IMG(0x1066908cu)) * 0xb0u + 0x64u);
    wr32(sp0 - 0x114u, t22);
    g->eax = rd32(COW_IMG(0x10669080u));
    g->edx = rd32(COW_IMG(0x1066908cu)) * 0xb0u;
    t23 = rd32(COW_IMG(0x10669080u));
    t24 = rd32(COW_IMG(0x1066908cu));
    g->esp = sp0 - 0x110u;
    t25 = cow_stdcall(g, COW_IMG(0x100db780u), 1, t22);
    t26 = g->edx;
    wr32(sp0 - 0x114u, t22);
    g->edx = t26;
    t27 = cow_stdcall(g, COW_IMG(0x100db790u), 1, t22);
    t28 = g->edx;
    wr32(sp0 - 0x114u, t22);
    g->ecx = rd32(COW_IMG(0x103601bcu));
    t29 = rd32(COW_IMG(0x103601bcu));
    t30 = cow_stdcall(g, COW_IMG(0x100db6d0u), 1, t22);
    t31 = g->ecx;
    eax = t30;
    ecx = t31;
    edx = sp0 - 0x100u;
    ebp = t27;
    edi = t25;
L_1023b354: ;
    COW_AT(1023b354)
    t32 = rd8(eax);
    wr8(edx, (uint8_t)t32);
    if ((uint8_t)t32 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t32;
        edx = edx + 1u;
        goto L_1023b354;
    }
    eax = eax + 1u;
    edx = edx + 1u;
    COW_AT(1023b35e)
    wr32(sp0 - 0x114u, sp0 - 0x100u);
    wr32(sp0 - 0x118u, 0u);
    wr32(sp0 - 0x11cu, 0u);
    wr32(sp0 - 0x120u, 2u);
    g->esp = sp0 - 0x110u;
    cow_cdecl(g, COW_IMG(0x10114b10u), 4, 2u, 0u, 0u, sp0 - 0x100u);
    t33 = rd32(rd32(COW_IMG(0x10669080u)) + rd32(COW_IMG(0x1066908cu)) * 0xb0u + 0x64u);
    wr32(sp0 - 0x124u, t33);
    wr32(sp0 - 0x128u, 2u);
    wr32(sp0 - 0x12cu, 0u);
    wr32(sp0 - 0x130u, 1u);
    wr32(sp0 - 0x134u, 0u);
    g->ebp = ebp;
    g->eax = rd32(COW_IMG(0x1066908cu)) * 0xb0u;
    g->ecx = rd32(COW_IMG(0x10669080u));
    g->edx = t33;
    t34 = rd32(COW_IMG(0x1066908cu));
    t35 = rd32(COW_IMG(0x10669080u));
    g->esp = sp0 - 8u;
    t36 = cow_bridge_indirect(g, COW_IMG(0x1023b550u), 0u, 75u, (const uint32_t[]){0u, 1u, 0u, 2u, t33, 2u, 0u, 0u, sp0 - 0x100u, rd32(sp0 - 0x110u), rd32(sp0 - 0x10cu), rd32(sp0 - 0x108u), rd32(sp0 - 0x104u), rd32(sp0 - 0x100u), rd32(sp0 - 0xfcu), rd32(sp0 - 0xf8u), rd32(sp0 - 0xf4u), rd32(sp0 - 0xf0u), rd32(sp0 - 0xecu), rd32(sp0 - 0xe8u), rd32(sp0 - 0xe4u), rd32(sp0 - 0xe0u), rd32(sp0 - 0xdcu), rd32(sp0 - 0xd8u), rd32(sp0 - 0xd4u), rd32(sp0 - 0xd0u), rd32(sp0 - 0xccu), rd32(sp0 - 0xc8u), rd32(sp0 - 0xc4u), rd32(sp0 - 0xc0u), rd32(sp0 - 0xbcu), rd32(sp0 - 0xb8u), rd32(sp0 - 0xb4u), rd32(sp0 - 0xb0u), rd32(sp0 - 0xacu), rd32(sp0 - 0xa8u), rd32(sp0 - 0xa4u), rd32(sp0 - 0xa0u), rd32(sp0 - 0x9cu), rd32(sp0 - 0x98u), rd32(sp0 - 0x94u), rd32(sp0 - 0x90u), rd32(sp0 - 0x8cu), rd32(sp0 - 0x88u), rd32(sp0 - 0x84u), rd32(sp0 - 0x80u), rd32(sp0 - 0x7cu), rd32(sp0 - 0x78u), rd32(sp0 - 0x74u), rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u), rd32(sp0 - 0x64u), rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u), rd32(sp0 - 0x54u), rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u), rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu)}, g->ecx, g->edx, g->eax, 300u);
    t37 = g->ecx;
    t38 = g->edx;
    if ((int32_t)t36 >= 0) goto L_1023b3f9;
    eax = t36;
    ecx = t37;
    edx = t38;
    COW_AT(1023b397)
    if (eax == 0xfffffffeu) goto L_1023b3b2;
    COW_AT(1023b39c)
    g->eax = eax;
    g->edx = edx;
    t39 = rd32(COW_IMG(0x103601bcu));
    g->esp = sp0 - 0x110u;
    t40 = cow_thiscall(g, COW_IMG(0x100db130u), t39, 0);
    t41 = g->ecx;
    t42 = g->edx;
    if (t40 != 0x14bu) goto L_1023b4ae;
    eax = t40;
    ecx = t41;
    edx = t42;
    goto L_1023b3b2;
L_1023b3f9: ;
    COW_AT(1023b3f9)
    t43 = rd32(COW_IMG(0x10669080u));
    t44 = rd32(COW_IMG(0x1066908cu));
    wr32(t43 + t44 * 0xb0u + 0x68u, 0u);
    if (rd32(COW_IMG(0x10480af0u) + rd32(COW_IMG(0x1066908cu)) * 4u) == 0u)
    {
        eax = t43;
        edx = t44 * 0xb0u;
    }
    else
    {
    COW_AT(1023b41f)
        t45 = rd32(rd32(COW_IMG(0x10669080u)) + 0x24u) - 1u;
        t46 = rd32(COW_IMG(0x10669080u));
        wr32(t46 + 0x24u, t45);
        if (rd32(COW_IMG(0x10480af0u) + rd32(COW_IMG(0x1066908cu)) * 4u) == 0u)
        {
            eax = t46;
            edx = rd32(COW_IMG(0x1066908cu));
        }
        else
        {
            eax = t46;
            edx = rd32(COW_IMG(0x1066908cu));
            esi = rd32(COW_IMG(0x10480af0u) + rd32(COW_IMG(0x1066908cu)) * 4u);
    COW_AT(1023b43c)
            g->edx = edx;
            g->esp = sp0 - 0x110u;
            t47 = cow_call_regs(g, COW_IMG(0x1008a7b0u), eax, esi, g->edx, 1, 0);
            t48 = g->ecx;
            t49 = g->edx;
            wr32(sp0 - 0x114u, esi);
            g->edx = t49;
            cow_cdecl(g, COW_IMG(0x1002c8b0u), 1, esi);
            t50 = g->edx;
            t51 = rd32(COW_IMG(0x1066908cu));
            wr32(COW_IMG(0x10480af0u) + t51 * 4u, 0u);
            eax = t51;
            edx = t50;
        }
    }
    COW_AT(1023b458)
    wr32(sp0 - 0x114u, sp0 - 0x100u);
    wr32(sp0 - 0x118u, ebp);
    wr32(sp0 - 0x11cu, edi);
    wr32(sp0 - 0x120u, 2u);
    g->esp = sp0 - 0x110u;
    cow_cdecl(g, COW_IMG(0x10114b10u), 4, 2u, edi, ebp, sp0 - 0x100u);
    t52 = rd32(rd32(COW_IMG(0x10669080u)) + rd32(COW_IMG(0x1066908cu)) * 0xb0u + 0x64u);
    wr32(sp0 - 0x114u, t52);
    g->eax = rd32(COW_IMG(0x1066908cu)) * 0xb0u;
    g->edx = t52;
    t53 = rd32(COW_IMG(0x1066908cu));
    t54 = cow_stdcall(g, COW_IMG(0x100db790u), 1, t52);
    t55 = g->edx;
    wr32(sp0 - 0x114u, t54);
    g->edx = t55;
    t56 = rd32(COW_IMG(0x10662dccu));
    t57 = cow_thiscall(g, COW_IMG(0x101c4d00u), t56, 1, t54);
    t58 = g->ecx;
    t59 = g->edx;
    wr32(sp0 - 0x114u, 0x83u);
    wr32(sp0 - 0x118u, 8u);
    g->ecx = t58;
    g->edx = t59;
    t60 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 0x83u);
    t61 = g->ecx;
    t62 = g->edx;
    wr32(sp0 - 0x11cu, t60);
    g->ebx = 0u;
    g->esp = sp0 - 0x118u;
    cow_cdecl(g, COW_IMG(0x1023e0c0u), 1, t60);
    goto L_1023b4ae;
L_1023b4ff: ;
    COW_AT(1023b4ff)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x110u;
    t69 = cow_stdcall(g, COW_IMG(0x1023e570u), 0);
    t70 = g->ecx;
    t71 = g->edx;
    g->edx = t71;
    cow_call_regs(g, COW_IMG(0x102435b0u), t69, g->ecx, g->edx, 1, 0);
    t72 = g->edx;
    t73 = rd32(COW_IMG(0x10669080u));
    wr32(COW_IMG(0x1066908cu), 0u);
    wr32(t73 + 0x1cu, 0u);
    if (rd32(rd32(COW_IMG(0x10669080u)) + 8u) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x10669080u)) + 8u);
        edx = t72;
    }
    else
    {
        eax = rd32(rd32(COW_IMG(0x10669080u)) + 8u);
        edx = t72;
    COW_AT(1023b524)
        wr8(eax + 0x5du, 0u);
    }
    COW_AT(1023b527)
    wr32(sp0 - 0x114u, COW_IMG(0x1038831cu));
    g->esp = sp0 - 0x110u;
    cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1038831cu));
    g->ebx = rd32(sp0 - 0x104u);
    g->esi = rd32(sp0 - 0x10cu);
    g->edi = rd32(sp0 - 0x110u);
    g->ebp = rd32(sp0 - 0x108u);
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1023b230(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1023b291u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_104;
        uint32_t loc_108;
        uint32_t loc_10c;
        uint32_t loc_110;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_110 = rd32(sp0 - 0x110u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_108 = rd32(sp0 - 0x108u);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x110u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023b2aau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x110u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023b2b8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x110u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023b2d0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x110u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023b2dfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x110u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023b2f8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x110u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023b2feu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x110u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023b30bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x110u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023b311u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x110u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023b354u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x110u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023b35eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x110u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023b397u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x110u;
        g->ebx = 0u;
        wr32(sp0 - 0x114u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x1023b39cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x110u;
        g->ebx = 0u;
        wr32(sp0 - 0x114u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x1023b3b2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x110u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023b3d7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x110u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023b3dau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x110u;
        (void)sp0;
        return 1;
    }
    case 0x1023b3f9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x110u;
        g->ebx = 0u;
        wr32(sp0 - 0x114u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x1023b41fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x110u;
        g->ebx = 0u;
        wr32(sp0 - 0x114u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x1023b43cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x110u;
        g->ebx = 0u;
        wr32(sp0 - 0x114u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x1023b458u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x110u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023b4aeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x110u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023b4c3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x110u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023b4c6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x110u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023b4d3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x110u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023b4dfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x110u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023b4ecu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_104;
        uint32_t loc_108;
        uint32_t loc_10c;
        uint32_t loc_110;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_110 = rd32(sp0 - 0x110u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_108 = rd32(sp0 - 0x108u);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x110u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023b4ffu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x110u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023b524u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x110u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023b527u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x110u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1023b230(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1023b230(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
