/* f_0x102a0fb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102a0fb0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_14;
    uint32_t t1;
    uint32_t t10;
    uint32_t t100;
    uint32_t t101;
    uint32_t t102;
    uint32_t t103;
    uint32_t t104;
    uint32_t t105;
    uint32_t t106;
    uint32_t t107;
    uint32_t t108;
    uint32_t t109;
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
    uint32_t t99;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 104u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102a0fc7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_102a0fc7;
    case 0x102a0ff6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_102a0ff6;
    case 0x102a100eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; goto E_102a100e;
    case 0x102a1042u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; goto E_102a1042;
    case 0x102a1053u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; goto E_102a1053;
    case 0x102a1082u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; goto E_102a1082;
    case 0x102a1096u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; goto E_102a1096;
    case 0x102a10b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; goto E_102a10b0;
    case 0x102a10c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; goto E_102a10c1;
    case 0x102a10f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; goto E_102a10f0;
    case 0x102a1104u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; goto E_102a1104;
    case 0x102a111cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; goto E_102a111c;
    case 0x102a1141u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; goto E_102a1141;
    case 0x102a1152u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; goto E_102a1152;
    case 0x102a1181u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; goto E_102a1181;
    case 0x102a118au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; goto E_102a118a;
    case 0x102a11b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102a11b4;
    case 0x102a11f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102a11f1;
    case 0x102a1201u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102a1201;
    case 0x102a1212u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102a1212;
    case 0x102a1220u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102a1220;
    case 0x102a1230u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102a1230;
    case 0x102a1241u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102a1241;
    case 0x102a1243u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102a1243;
    case 0x102a1272u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102a1272;
    case 0x102a12a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102a12a1;
    default: break;
    }
#endif

    COW_AT(102a0fb0)
    wr32(sp0 - 0x18u, in_ebx);
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, in_edi);
    wr32(sp0 - 0x24u, sp0 - 4u);
    g->eax = sp0 - 4u;
    g->esp = sp0 - 0x20u;
    t1 = cow_call_regs(g, COW_IMG(0x102afbc0u), g->eax, self, in_edx, 1, 1, sp0 - 4u);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        eax = t1;
        edx = t3;
        goto L_102a0ff6;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(102a0fc7)
    wr32(sp0 - 0x24u, 0x479u);
    wr32(sp0 - 0x28u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x2cu, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0x30u, COW_IMG(0x103bd20cu));
    wr32(sp0 - 0x34u, COW_IMG(0x103bcb40u));
    g->edx = t6;
    g->esp = sp0 - 0x2cu;
    t7 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bcb40u), COW_IMG(0x103bd20cu));
    t8 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t8;
    return t7 & 0xffffff00u;
L_102a0ff6: ;
    COW_AT(102a0ff6)
    wr32(sp0 - 0x24u, 2u);
    t9 = rd32(sp0 - 4u);
    wr32(sp0 - 0x28u, t9);
    wr32(sp0 - 0x2cu, arg1);
    g->eax = eax;
    g->ecx = t9;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t10 = cow_cdecl(g, COW_IMG(0x10279a80u), 9, arg1, t9, 2u, in_edi, in_esi, in_ebx, rd32(sp0 - 0x14u), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    t11 = g->ecx;
    t12 = g->edx;
    if ((uint8_t)t10 == 0u)
    {
        ecx = t11;
        edx = t12;
        goto L_102a1042;
    }
    eax = t10;
    ecx = t11;
    edx = t12;
    COW_AT(102a100e)
    wr32(sp0 - 0x24u, 0x479u);
    wr32(sp0 - 0x28u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x2cu, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x24u;
    t13 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t14 = g->ecx;
    t15 = rd32(sp0 - 4u);
    wr32(sp0 - 0x30u, t15);
    wr32(sp0 - 0x34u, COW_IMG(0x103bd20cu));
    wr32(sp0 - 0x38u, COW_IMG(0x103bcb24u));
    g->edx = t15;
    g->esp = sp0 - 0x30u;
    t16 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bcb24u), COW_IMG(0x103bd20cu));
    t17 = g->edx;
    g->ebx = rd32(sp0 - 0x18u);
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = rd32(sp0 - 0x20u);
    g->edx = t17;
    return t16 & 0xffffff00u;
L_102a1042: ;
    COW_AT(102a1042)
    wr32(sp0 - 0x24u, sp0 - 8u);
    g->eax = sp0 - 8u;
    g->esp = sp0 - 0x20u;
    t18 = cow_call_regs(g, COW_IMG(0x102afbc0u), g->eax, ecx, edx, 1, 1, sp0 - 8u);
    t19 = g->ecx;
    t20 = g->edx;
    if ((uint8_t)t18 != 0u)
    {
        eax = t18;
        edx = t20;
        goto L_102a1082;
    }
    eax = t18;
    ecx = t19;
    edx = t20;
    COW_AT(102a1053)
    wr32(sp0 - 0x24u, 0x47au);
    wr32(sp0 - 0x28u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x2cu, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t21 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t22 = g->ecx;
    t23 = g->edx;
    wr32(sp0 - 0x30u, COW_IMG(0x103bd1f4u));
    wr32(sp0 - 0x34u, COW_IMG(0x103bcb40u));
    g->edx = t23;
    g->esp = sp0 - 0x2cu;
    t24 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bcb40u), COW_IMG(0x103bd1f4u));
    t25 = g->edx;
    g->ebx = rd32(sp0 - 0x18u);
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = rd32(sp0 - 0x20u);
    g->edx = t25;
    return t24 & 0xffffff00u;
L_102a1082: ;
    COW_AT(102a1082)
    wr32(sp0 - 0x24u, 3u);
    t26 = rd32(sp0 - 8u);
    wr32(sp0 - 0x28u, t26);
    wr32(sp0 - 0x2cu, arg1);
    g->eax = eax;
    g->ecx = t26;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t27 = cow_cdecl(g, COW_IMG(0x10279a80u), 9, arg1, t26, 3u, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    t28 = g->ecx;
    t29 = g->edx;
    if ((uint8_t)t27 != 0u)
    {
        ecx = t28;
        edx = t29;
        goto L_102a10b0;
    }
    eax = t27;
    ecx = t28;
    edx = t29;
    COW_AT(102a1096)
    wr32(sp0 - 0x24u, 0x47au);
    wr32(sp0 - 0x28u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x2cu, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x24u;
    t30 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t31 = g->ecx;
    eax = t30;
    ecx = t31;
    edx = rd32(sp0 - 8u);
L_102a111c: ;
    COW_AT(102a111c)
    wr32(sp0 - 0x24u, edx);
    wr32(sp0 - 0x28u, 3u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t46 = cow_cdecl(g, COW_IMG(0x1027a1e0u), 1, 3u);
    t47 = g->ecx;
    t48 = g->edx;
    wr32(sp0 - 0x28u, t46);
    wr32(sp0 - 0x2cu, COW_IMG(0x103bcbe8u));
    g->edx = t48;
    t49 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bcbe8u), t46);
    t50 = g->edx;
    g->ebx = rd32(sp0 - 0x18u);
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = rd32(sp0 - 0x20u);
    g->edx = t50;
    return t49 & 0xffffff00u;
L_102a10b0: ;
    COW_AT(102a10b0)
    wr32(sp0 - 0x24u, sp0 - 0xcu);
    g->eax = sp0 - 0xcu;
    g->esp = sp0 - 0x20u;
    t32 = cow_call_regs(g, COW_IMG(0x102afbc0u), g->eax, ecx, edx, 1, 1, sp0 - 0xcu);
    t33 = g->ecx;
    t34 = g->edx;
    if ((uint8_t)t32 != 0u)
    {
        eax = t32;
        edx = t34;
        goto L_102a10f0;
    }
    eax = t32;
    ecx = t33;
    edx = t34;
    COW_AT(102a10c1)
    wr32(sp0 - 0x24u, 0x47bu);
    wr32(sp0 - 0x28u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x2cu, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t35 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t36 = g->ecx;
    t37 = g->edx;
    wr32(sp0 - 0x30u, COW_IMG(0x103bd1e0u));
    wr32(sp0 - 0x34u, COW_IMG(0x103bcb40u));
    g->edx = t37;
    g->esp = sp0 - 0x2cu;
    t38 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bcb40u), COW_IMG(0x103bd1e0u));
    t39 = g->edx;
    g->ebx = rd32(sp0 - 0x18u);
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = rd32(sp0 - 0x20u);
    g->edx = t39;
    return t38 & 0xffffff00u;
L_102a10f0: ;
    COW_AT(102a10f0)
    wr32(sp0 - 0x24u, 3u);
    t40 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x28u, t40);
    wr32(sp0 - 0x2cu, arg1);
    g->eax = eax;
    g->ecx = t40;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t41 = cow_cdecl(g, COW_IMG(0x10279a80u), 9, arg1, t40, 3u, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    t42 = g->ecx;
    t43 = g->edx;
    if ((uint8_t)t41 != 0u)
    {
        ecx = t42;
        edx = t43;
        goto L_102a1141;
    }
    eax = t41;
    ecx = t42;
    edx = t43;
    COW_AT(102a1104)
    wr32(sp0 - 0x24u, 0x47bu);
    wr32(sp0 - 0x28u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x2cu, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x24u;
    t44 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t45 = g->ecx;
    eax = t44;
    ecx = t45;
    edx = rd32(sp0 - 0xcu);
    goto L_102a111c;
L_102a1141: ;
    COW_AT(102a1141)
    wr32(sp0 - 0x24u, sp0 - 0x10u);
    g->eax = sp0 - 0x10u;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t51 = cow_thiscall_cdecl(g, COW_IMG(0x102afcb0u), ecx, 1, sp0 - 0x10u);
    t52 = g->ecx;
    t53 = g->edx;
    if ((uint8_t)t51 != 0u)
    {
        ecx = t52;
        edx = t53;
        goto L_102a1181;
    }
    eax = t51;
    ecx = t52;
    edx = t53;
    COW_AT(102a1152)
    wr32(sp0 - 0x24u, 0x47cu);
    wr32(sp0 - 0x28u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x2cu, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t54 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t55 = g->ecx;
    t56 = g->edx;
    wr32(sp0 - 0x30u, COW_IMG(0x103bd1ccu));
    wr32(sp0 - 0x34u, COW_IMG(0x103bca3cu));
    g->edx = t56;
    g->esp = sp0 - 0x2cu;
    t57 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bca3cu), COW_IMG(0x103bd1ccu));
    t58 = g->edx;
    g->ebx = rd32(sp0 - 0x18u);
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = rd32(sp0 - 0x20u);
    g->edx = t58;
    return t57 & 0xffffff00u;
L_102a1181: ;
    COW_AT(102a1181)
    if ((int32_t)rd32(sp0 - 0x10u) >= 1)
    {
        eax = rd32(sp0 - 0x10u);
        goto L_102a11b4;
    }
    eax = rd32(sp0 - 0x10u);
    COW_AT(102a118a)
    wr32(sp0 - 0x24u, 0x47eu);
    wr32(sp0 - 0x28u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x2cu, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t59 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t60 = g->ecx;
    t61 = g->edx;
    wr32(sp0 - 0x30u, COW_IMG(0x103bd1a4u));
    g->edx = t61;
    g->esp = sp0 - 0x28u;
    t62 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bd1a4u), COW_IMG(0x103b379cu));
    t63 = g->edx;
    g->ebx = rd32(sp0 - 0x18u);
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = rd32(sp0 - 0x20u);
    g->edx = t63;
    return t62 & 0xffffff00u;
L_102a11b4: ;
    COW_AT(102a11b4)
    wr32(sp0 - 0x24u, 0x482u);
    wr32(sp0 - 0x28u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x2cu, 4u);
    wr32(sp0 - 0x30u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t64 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, eax, 4u, COW_IMG(0x103bc974u), 0x482u, rd32(sp0 - 0x20u));
    t65 = g->edx;
    wr32(sp0 - 0x34u, 0x483u);
    wr32(sp0 - 0x38u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x3cu, 4u);
    t66 = rd32(sp0 - 0x10u);
    wr32(sp0 - 0x40u, t66);
    g->edx = t65;
    g->esp = sp0 - 0x2cu;
    t67 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, t66, 4u, COW_IMG(0x103bc974u), 0x483u, rd32(sp0 - 0x30u));
    t68 = g->edx;
    wr32(sp0 - 0x14u, 0u);
    if ((int32_t)rd32(sp0 - 0x10u) <= 0)
    {
        ecx = rd32(sp0 - 0x10u);
        edx = t68;
        ebx = t67;
        edi = t64;
        goto L_102a1212;
    }
    eax = 0u;
    ecx = rd32(sp0 - 0x10u);
    ebx = t67;
    edi = t64;
    loc_14 = 0u;
L_102a11f1: ;
    COW_AT(102a11f1)
    t69 = eax * 4u + edi;
    wr32(sp0 - 0x24u, t69);
    g->eax = eax;
    g->edx = t69;
    g->esp = sp0 - 0x20u;
    t70 = cow_thiscall_cdecl(g, COW_IMG(0x102afcb0u), ecx, 1, t69);
    t71 = g->ecx;
    t72 = g->edx;
    if ((uint8_t)t70 == 0u)
    {
        eax = t70;
        ecx = t71;
        edx = t72;
        goto L_102a1243;
    }
    edx = t72;
    COW_AT(102a1201)
    t73 = rd32(sp0 - 0x14u) + 1u;
    t74 = rd32(sp0 - 0x14u);
    wr32(sp0 - 0x14u, t73);
    if ((int32_t)(t74 + 1u) < (int32_t)rd32(sp0 - 0x10u))
    {
        eax = t73;
        ecx = rd32(sp0 - 0x10u);
        loc_14 = t73;
        goto L_102a11f1;
    }
    ecx = rd32(sp0 - 0x10u);
L_102a1212: ;
    COW_AT(102a1212)
    wr32(sp0 - 0x14u, 0u);
    if ((int32_t)ecx <= 0)
    {
        eax = 0u;
        goto L_102a12a1;
    }
    eax = 0u;
    loc_14 = 0u;
L_102a1220: ;
    COW_AT(102a1220)
    t80 = eax * 4u + ebx;
    wr32(sp0 - 0x24u, t80);
    g->eax = t80;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t81 = cow_thiscall_cdecl(g, COW_IMG(0x102afcb0u), ecx, 1, t80);
    t82 = g->ecx;
    t83 = g->edx;
    if ((uint8_t)t81 == 0u)
    {
        eax = t81;
        ecx = t82;
        edx = t83;
        goto L_102a1272;
    }
    edx = t83;
    COW_AT(102a1230)
    t84 = rd32(sp0 - 0x14u) + 1u;
    t85 = rd32(sp0 - 0x14u);
    wr32(sp0 - 0x14u, t84);
    if ((int32_t)(t85 + 1u) < (int32_t)rd32(sp0 - 0x10u))
    {
        eax = t84;
        ecx = rd32(sp0 - 0x10u);
        loc_14 = t84;
        goto L_102a1220;
    }
    eax = t84;
    COW_AT(102a1241)
L_102a12a1: ;
    COW_AT(102a12a1)
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, ebx);
    wr32(sp0 - 0x34u, edi);
    wr32(sp0 - 0x38u, sp0 - 0x14u);
    t91 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x3cu, t91);
    wr32(sp0 - 0x40u, arg1);
    g->eax = eax;
    g->edx = t91;
    g->esp = sp0 - 0x34u;
    t92 = cow_cdecl(g, COW_IMG(0x10279d90u), 3, arg1, t91, sp0 - 0x14u);
    t93 = g->edx;
    wr32(sp0 - 0x38u, t92);
    wr32(sp0 - 0x3cu, sp0 - 0x14u);
    t94 = rd32(sp0 - 8u);
    wr32(sp0 - 0x40u, t94);
    wr32(sp0 - 0x44u, arg1);
    g->eax = sp0 - 0x14u;
    g->ecx = t94;
    g->esp = sp0 - 0x38u;
    t95 = cow_cdecl(g, COW_IMG(0x10279d90u), 3, arg1, t94, sp0 - 0x14u);
    t96 = g->ecx;
    wr32(sp0 - 0x3cu, t95);
    t97 = rd32(sp0 - 0x10u);
    wr32(sp0 - 0x40u, t97);
    wr32(sp0 - 0x44u, 0u);
    g->edx = t97;
    g->esp = sp0 - 0x20u;
    t98 = cow_cdecl(g, COW_IMG(0x1028dde0u), 9, 0u, t97, t95, rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), 0u, 0u, 0u);
    t99 = g->edx;
    t100 = rd32(arg1 + 0x44u);
    wr32(sp0 - 0x48u, t100);
    wr32(sp0 - 0x4cu, 2u);
    t101 = rd32(sp0 - 4u);
    wr32(sp0 - 0x50u, t101);
    wr32(sp0 - 0x54u, arg1);
    g->eax = t100;
    g->edx = t99;
    g->esp = sp0 - 0x44u;
    t102 = cow_thiscall_cdecl(g, COW_IMG(0x102799e0u), t101, 4, arg1, t101, 2u, t100);
    t103 = g->ecx;
    t104 = g->edx;
    wr32(sp0 - 0x58u, t98);
    wr32(sp0 - 0x5cu, arg1);
    g->edx = t104;
    g->esp = sp0 - 0x48u;
    t105 = cow_thiscall_cdecl(g, COW_IMG(0x10279550u), t103, 5, arg1, t98, arg1, rd32(sp0 - 0x50u), 2u);
    t106 = g->ecx;
    t107 = g->edx;
    wr32(sp0 - 0x60u, t98);
    wr32(sp0 - 0x64u, arg1);
    g->edx = t107;
    g->esp = sp0 - 0x58u;
    t108 = cow_thiscall_cdecl(g, COW_IMG(0x1027a240u), t106, 3, arg1, t98, arg1);
    t109 = g->edx;
    g->ebx = rd32(sp0 - 0x18u);
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = rd32(sp0 - 0x20u);
    g->edx = t109;
    return (t108 & 0xffffff00u) | (uint8_t)(t108 | 0xffu);
L_102a1243: ;
    COW_AT(102a1243)
    wr32(sp0 - 0x24u, 0x485u);
    wr32(sp0 - 0x28u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x2cu, COW_IMG(0x103b379cu));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t75 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t76 = g->ecx;
    t77 = g->edx;
    wr32(sp0 - 0x30u, COW_IMG(0x103bd190u));
    wr32(sp0 - 0x34u, COW_IMG(0x103bca3cu));
    g->ebx = ebx;
    g->edx = t77;
    g->esp = sp0 - 0x2cu;
    t78 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bca3cu), COW_IMG(0x103bd190u));
    t79 = g->edx;
    g->ebx = rd32(sp0 - 0x18u);
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = rd32(sp0 - 0x20u);
    g->edx = t79;
    return t78 & 0xffffff00u;
L_102a1272: ;
    COW_AT(102a1272)
    wr32(sp0 - 0x24u, 0x487u);
    wr32(sp0 - 0x28u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x2cu, COW_IMG(0x103b379cu));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t86 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t87 = g->ecx;
    t88 = g->edx;
    wr32(sp0 - 0x30u, COW_IMG(0x103bd180u));
    wr32(sp0 - 0x34u, COW_IMG(0x103bca3cu));
    g->ebx = ebx;
    g->edx = t88;
    g->esp = sp0 - 0x2cu;
    t89 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bca3cu), COW_IMG(0x103bd180u));
    t90 = g->edx;
    g->ebx = rd32(sp0 - 0x18u);
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = rd32(sp0 - 0x20u);
    g->edx = t90;
    return t89 & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102a0fb0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102a0fc7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x24u, sp0 - 4u);
        wr32(sp0 - 0x18u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x102a0ff6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x24u, sp0 - 4u);
        wr32(sp0 - 0x18u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x102a100eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x102a1042u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a1053u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x24u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x102a1082u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->esi = arg1;
        wr32(sp0 - 0x24u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x102a1096u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x102a10b0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a10c1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x24u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x102a10f0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->esi = arg1;
        wr32(sp0 - 0x24u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x102a1104u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x102a111cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x102a1141u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a1152u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102a1181u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->esi = arg1;
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102a118au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102a11b4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->esi = arg1;
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102a11f1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x20u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a1201u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a1212u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x20u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a1220u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x20u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a1230u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a1241u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x20u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a1243u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x102a1272u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x102a12a1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x20u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102a0fb0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102a0fb0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
